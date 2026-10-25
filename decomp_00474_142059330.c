// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142059330 FUN_142059330 body=84 status=ok
// SIG undefined FUN_142059330(void)

void FUN_142059330(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if (param_1 != 0) {
    local_28 = 0;
    local_18 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = param_1;
      *puVar1 = &PTR_FUN_143f77b70;
    }
    local_58[0] = &LAB_14202c1a0;
    FUN_14204c280(local_58);
  }
  return;
}



// FUNCTION 142059390 FUN_142059390 body=54 status=ok
// SIG undefined FUN_142059390(void)

void FUN_142059390(undefined4 param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_146accf30);
  TSet<TTuple<int,UHomeItem_*>,TDefaultMapHashableKeyFuncs<int,UHomeItem_*,0>,FDefaultSetAllocator>
  ::Remove(&DAT_1464f0570,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001420593bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_146accf30);
  return;
}



// FUNCTION 1420593d0 FUN_1420593d0 body=88 status=ok
// SIG undefined FUN_1420593d0(void)

bool FUN_1420593d0(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146accbf0;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] != 0;
    }
  }
  return *piVar1 != 0;
}



// FUNCTION 142059430 Update body=33 status=ok
// SIG undefined Update(void)

undefined8 Scaleform::Render::Image::Update(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 8))();
    return 1;
  }
  return 0;
}



// FUNCTION 142059460 Update body=36 status=ok
// SIG undefined Update(void)

undefined8 Scaleform::Render::Image::Update(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
    return 1;
  }
  return 0;
}



// FUNCTION 142059490 FUN_142059490 body=51 status=ok
// SIG undefined FUN_142059490(void)

undefined8 FUN_142059490(void)

{
  ulonglong uVar1;
  bool bVar2;
  
  if (DAT_146acd048 == '\0') {
    LOCK();
    DAT_146accf28 = (uint)(*DAT_146accf68 != 0);
    UNLOCK();
    DAT_146acd048 = '\x01';
  }
  uVar1 = 0;
  LOCK();
  bVar2 = DAT_146accf28 == 0;
  if (bVar2) {
    DAT_146accf28 = 0;
  }
  else {
    uVar1 = (ulonglong)DAT_146accf28;
  }
  UNLOCK();
  return CONCAT71((int7)(uVar1 >> 8),!bVar2);
}



// FUNCTION 1420594d0 FUN_1420594d0 body=102 status=ok
// SIG undefined FUN_1420594d0(void)

ulonglong FUN_1420594d0(void)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  ulonglong uVar4;
  
  uVar4 = FUN_1420913e0();
  lVar1 = DAT_146acc8a0;
  if ((char)uVar4 != '\0') goto LAB_14205952f;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 == DAT_1468c21c0) goto LAB_14205951b;
    uVar4 = 4;
  }
  else {
LAB_14205951b:
    uVar4 = 0;
  }
  if (*(int *)(uVar4 + lVar1) != 0) {
    return 1;
  }
LAB_14205952f:
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 142059540 FUN_142059540 body=102 status=ok
// SIG undefined FUN_142059540(void)

ulonglong FUN_142059540(void)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  ulonglong uVar4;
  
  uVar4 = FUN_1420913e0();
  lVar1 = DAT_146acc8b8;
  if ((char)uVar4 != '\0') goto LAB_14205959f;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 == DAT_1468c21c0) goto LAB_14205958b;
    uVar4 = 4;
  }
  else {
LAB_14205958b:
    uVar4 = 0;
  }
  if (*(int *)(uVar4 + lVar1) != 0) {
    return 1;
  }
LAB_14205959f:
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 1420595b0 FUN_1420595b0 body=1474 status=ok
// SIG undefined FUN_1420595b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1420595b0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  DWORD DVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  uint uVar15;
  longlong lVar16;
  byte bVar17;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  undefined2 *local_198;
  ulonglong local_190;
  longlong local_188;
  longlong local_180;
  undefined8 local_178;
  longlong local_170;
  undefined1 local_168 [256];
  longlong local_68;
  short *local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_168);
  plVar13 = (longlong *)0x0;
  local_198 = (undefined2 *)0x0;
  local_190 = 0;
  lVar16 = -1;
  if ((local_60 != (short *)0x0) && (*local_60 != 0)) {
    do {
      lVar16 = lVar16 + 1;
    } while (local_60[lVar16] != 0);
    uVar15 = (int)lVar16 + 1;
    local_190 = (ulonglong)uVar15;
    if (0 < (int)uVar15) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
    }
    FGenericPlatformString::Memcpy(local_198,local_60,(longlong)(int)uVar15 * 2);
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  plVar8 = *(longlong **)(*(longlong *)(param_1 + 8) + 0xe0);
  plVar7 = plVar8 + (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0xe8) * 2;
  for (; plVar8 != plVar7; plVar8 = plVar8 + 2) {
    plVar9 = (longlong *)plVar8[1];
    lVar16 = *plVar8;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    puVar14 = &DAT_143f3eda8;
    if ((int)local_190 != 0) {
      puVar14 = local_198;
    }
    if (*(int *)(lVar16 + 0x20) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = *(undefined2 **)(lVar16 + 0x18);
    }
    iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar14);
    if (iVar5 == 0) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar9 + 1;
        lVar16 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      goto LAB_142059aa5;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      lVar16 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar5 == 1) && (plVar9 != (longlong *)0x0)) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146acd038) && (_Init_thread_header(&DAT_146acd038), DAT_146acd038 == -1))
  {
    DAT_146acd028 = 0;
    _DAT_146acd030 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146acd028,0);
    FGenericPlatformString::Memcpy(DAT_146acd028,L"instance",0x12);
    atexit((_func_5014 *)&LAB_143ea4b10);
    _Init_thread_footer(&DAT_146acd038);
  }
  plVar8 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x80);
  lVar16 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x78);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  lVar12 = DAT_146acc948;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar6 = GetCurrentThreadId();
    plVar7 = (longlong *)&DAT_00000004;
    if (DVar6 == DAT_1468c21c0) goto LAB_142059798;
  }
  else {
LAB_142059798:
    plVar7 = plVar13;
  }
  if (*(int *)((longlong)plVar7 + lVar12) == 0) {
LAB_142059863:
    bVar17 = 0;
  }
  else {
    pcVar3 = (char *)(lVar16 + 0x30);
    LOCK();
    cVar4 = *pcVar3;
    if (cVar4 == '\0') {
      *pcVar3 = '\0';
      cVar4 = '\0';
    }
    lVar12 = DAT_146acc960;
    UNLOCK();
    if ('\x04' < cVar4) goto LAB_142059863;
    cVar4 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar4 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar6 = GetCurrentThreadId(), plVar7 = (longlong *)&DAT_00000004, DVar6 == DAT_1468c21c0)) {
      plVar7 = plVar13;
    }
    if (*(int *)((longlong)plVar7 + lVar12) == 0) {
      lVar16 = lVar16 + 0x70;
      cVar4 = FWeakObjectPtr::IsValid(lVar16,0,1);
      if ((cVar4 == '\0') || (lVar16 = FWeakObjectPtr::Get(lVar16), lVar16 == 0))
      goto LAB_142059863;
      bVar17 = (byte)(*(uint *)(lVar16 + 0x40) >> 0x16) & 1;
    }
    else {
      bVar17 = 1;
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar8 + 1;
    lVar16 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
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
  if (((bVar17 != 0) && (cVar4 = FString::StartsWith(&local_198,&DAT_146acd028,1), cVar4 != '\0'))
     || (3 < (*(uint *)(param_3 + 0x18) & 0x8f) - 8)) goto LAB_142059aa5;
  lVar16 = FMemory::Malloc(0x108,0);
  plVar8 = plVar13;
  if (lVar16 != 0) {
    local_180 = *(longlong *)(param_1 + 0x10);
    local_188 = *(longlong *)(param_1 + 8);
    lVar12 = local_188;
    if (local_180 != 0) {
      LOCK();
      *(int *)(local_180 + 8) = *(int *)(local_180 + 8) + 1;
      UNLOCK();
      lVar12 = *(longlong *)(param_1 + 8);
    }
    local_178 = *(undefined8 *)(lVar12 + 0x78);
    local_170 = *(longlong *)(lVar12 + 0x80);
    if (local_170 != 0) {
      LOCK();
      *(int *)(local_170 + 8) = *(int *)(local_170 + 8) + 1;
      UNLOCK();
    }
    local_1a8 = param_3;
    plVar8 = (longlong *)FUN_14201a1a0(lVar16,&local_178,&local_188,&local_198);
  }
  plVar9 = (longlong *)operator_new(0x18);
  plVar7 = plVar13;
  if (plVar9 != (longlong *)0x0) {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_143f3f2d0;
    plVar9[2] = (longlong)plVar8;
    plVar7 = plVar9;
  }
  plVar9 = plVar8 + 1;
  if (plVar8 == (longlong *)0x0) {
    plVar9 = plVar13;
  }
  if (plVar9 != (longlong *)0x0) {
    if ((*plVar9 != 0) && (plVar9[1] != 0)) {
      piVar2 = (int *)(plVar9[1] + 8);
      LOCK();
      iVar5 = *piVar2;
      if (iVar5 == 0) {
        *piVar2 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (0 < iVar5) goto LAB_142059a1d;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    *plVar9 = (longlong)plVar8;
    plVar13 = (longlong *)plVar9[1];
    if (plVar7 != plVar13) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar13 = (longlong *)plVar9[1];
      }
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
      plVar9[1] = (longlong)plVar7;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar7 + 1;
      lVar16 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
LAB_142059a1d:
  lVar16 = *(longlong *)(param_1 + 8);
  iVar5 = *(int *)(lVar16 + 0xe8);
  *(int *)(lVar16 + 0xe8) = iVar5 + 1;
  if (*(int *)(lVar16 + 0xec) < iVar5 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar16 + 0xe0,iVar5);
  }
  puVar10 = (undefined8 *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar16 + 0xe0));
  *puVar10 = plVar8;
  puVar10[1] = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  FUN_14204d040(plVar8);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar7 + 1;
    lVar16 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
LAB_142059aa5:
  if (local_198 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142059b80 FUN_142059b80 body=251 status=ok
// SIG undefined FUN_142059b80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142059b80(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined1 local_d2;
  longlong local_d0;
  undefined1 local_c8 [128];
  longlong local_48;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar1 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_c8);
  FName::FName(&local_d0,*(undefined8 *)(lVar1 + 0x88),0);
  if (local_48 != 0) {
    FMemory::Free();
  }
  local_e8 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x70);
  if (local_e8 == 0) {
    local_e0 = 0;
  }
  else {
    local_e0 = *(longlong *)(local_e8 + 0x38);
  }
  local_d8 = 0xffffffff;
  local_d4 = 0x101;
  local_d2 = 0;
  FUN_140472e10(&local_e8);
  lVar1 = local_e0;
  while (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x18) == local_d0) {
      local_e0 = lVar1;
      FUN_14202e180(lVar1,(longlong)*(int *)(lVar1 + 0x44) + *(longlong *)(param_1 + 0x10),param_3,
                    *(undefined8 *)(param_1 + 8));
    }
    local_e0 = *(longlong *)(lVar1 + 0x28);
    FUN_140472e10(&local_e8);
    lVar1 = local_e0;
  }
  return;
}



// FUNCTION 142059c80 FUN_142059c80 body=88 status=ok
// SIG undefined FUN_142059c80(void)

bool FUN_142059c80(void)

{
  int *piVar1;
  char cVar2;
  DWORD DVar3;
  
  piVar1 = DAT_146acca68;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      return piVar1[1] != 0;
    }
  }
  return *piVar1 != 0;
}



// FUNCTION 142059ce0 FUN_142059ce0 body=85 status=ok
// SIG undefined FUN_142059ce0(void)

ulonglong FUN_142059ce0(ulonglong param_1)

{
  ulonglong uVar1;
  bool bVar2;
  
  if (DAT_146acd048 == '\0') {
    LOCK();
    param_1 = (ulonglong)DAT_146accf28;
    UNLOCK();
    DAT_146acd048 = '\x01';
    DAT_146accf28 = (uint)(*DAT_146accf68 != 0);
  }
  uVar1 = 0;
  LOCK();
  bVar2 = DAT_146accf28 == 0;
  if (bVar2) {
    DAT_146accf28 = 0;
  }
  else {
    uVar1 = (ulonglong)DAT_146accf28;
  }
  UNLOCK();
  if (!bVar2) {
    uVar1 = FUN_142059d40(param_1);
    if ((char)uVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142059d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*DAT_146accf38 + 8))();
      return uVar1;
    }
  }
  return uVar1;
}



// FUNCTION 142059d40 FUN_142059d40 body=295 status=ok
// SIG undefined FUN_142059d40(void)

bool FUN_142059d40(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 local_18;
  undefined8 local_10;
  
  puVar4 = (undefined8 *)0x0;
  if (DAT_146acd048 == '\0') {
    LOCK();
    DAT_146accf28 = (uint)(*DAT_146accf68 != 0);
    UNLOCK();
    DAT_146acd048 = '\x01';
  }
  LOCK();
  bVar5 = DAT_146accf28 == 0;
  if (bVar5) {
    DAT_146accf28 = 0;
  }
  UNLOCK();
  if (bVar5) {
    return true;
  }
  bVar5 = false;
  if (DAT_146accf38 == (undefined8 *)0x0) {
    LOCK();
    bVar5 = DAT_146accd48 == 0;
    if (bVar5) {
      DAT_146accd48 = 0;
    }
    UNLOCK();
    if ((bVar5) && (DAT_1468c217e == '\0')) {
      lVar3 = operator_new(0xa8);
      if (lVar3 != 0) {
        local_18 = 0;
        local_10 = 0x16;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
        FGenericPlatformString::Convert<char,wchar_t>
                  (local_18,0x16,"GFxGlobalWorkerThread",0x16,0x3f);
        puVar4 = (undefined8 *)FUN_142062130(lVar3,&local_18,0,0);
      }
      puVar2 = DAT_146accf38;
      if (DAT_146accf38 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)*DAT_146accf38;
        DAT_146accf38 = puVar4;
        (*(code *)*puVar1)(puVar2,1);
        puVar4 = DAT_146accf38;
      }
      DAT_146accf38 = puVar4;
      bVar5 = true;
      if (DAT_146accf38 == (undefined8 *)0x0) goto LAB_142059e56;
      *(undefined4 *)(DAT_146accf38 + 0x11) = 5;
    }
    bVar5 = DAT_146accf38 == (undefined8 *)0x0;
  }
LAB_142059e56:
  return !bVar5;
}



// FUNCTION 142059e70 FUN_142059e70 body=968 status=ok
// SIG undefined FUN_142059e70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142059e70(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  float *pfVar8;
  undefined1 auStack_478 [32];
  longlong *local_458;
  float *local_450;
  longlong local_448;
  longlong *local_440;
  int local_438;
  int local_434;
  longlong local_430;
  longlong local_428;
  longlong local_420;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  longlong *local_3d8 [2];
  RefCountImplCore local_3c8 [648];
  RefCountImpl *local_140;
  float local_108;
  float local_104;
  undefined1 local_c0 [40];
  float local_98 [6];
  undefined8 local_80;
  float local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  float fStack_64;
  undefined8 uStack_60;
  float local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_478;
  lVar4 = *(longlong *)(param_1[0x36] * 0x340 + -0x340 + param_1[0x35]);
  local_438 = *(int *)(lVar4 + 0x38) - *(int *)(lVar4 + 0x30);
  local_434 = *(int *)(lVar4 + 0x3c) - *(int *)(lVar4 + 0x34);
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x110))(param_1);
  puVar6 = (undefined4 *)(**(code **)(*plVar5 + 8))(plVar5,&local_438);
  local_418 = *puVar6;
  local_414 = puVar6[1];
  local_410 = puVar6[2];
  local_40c = puVar6[3];
  local_408 = puVar6[4];
  local_404 = puVar6[5];
  local_400 = puVar6[6];
  local_3fc = puVar6[7];
  lVar4 = *(longlong *)**(undefined8 **)(param_2 + 0x30);
  bVar3 = *(byte *)(lVar4 + 0xf);
  if ((bVar3 & 1) == 0) {
    puVar7 = (undefined8 *)&DAT_1467ccfd0;
  }
  else {
    puVar7 = (undefined8 *)
             (((ulonglong)(byte)(&DAT_1467ccff0)[(ulonglong)(bVar3 & 0xf) * 5] + 1) * 0x10 + lVar4);
  }
  local_3f8 = *puVar7;
  uStack_3f0 = puVar7[1];
  local_3e8 = puVar7[2];
  uStack_3e0 = puVar7[3];
  uStack_68 = 0;
  fStack_64 = 1.0;
  uStack_60 = 0;
  fStack_44 = 1.0;
  local_78 = 1.0;
  uStack_74 = 0;
  uStack_70 = 0;
  fStack_6c = 0.0;
  local_58 = 1.0;
  lVar4 = *(longlong *)**(undefined8 **)(param_2 + 0x30);
  pfVar8 = (float *)(((ulonglong)
                      (byte)(&DAT_1467ccff4)[(ulonglong)(*(byte *)(lVar4 + 0xf) & 0xf) * 5] + 1) *
                     0x10 + lVar4);
  local_420 = param_5;
  fVar1 = *pfVar8;
  fVar2 = pfVar8[5];
  local_98[1] = 0.0;
  local_98[2] = 0.0;
  local_98[3] = 0.0;
  local_98[4] = 0.0;
  local_80 = 0;
  local_98[0] = fVar1 / (float)*(uint *)(param_3 + 0x38);
  local_98[5] = fVar2 / (float)*(uint *)(param_3 + 0x3c);
  if (param_5 != 0) {
    local_58 = fVar1 / (float)*(uint *)(param_5 + 0x38);
    fStack_44 = fVar2 / (float)*(uint *)(param_5 + 0x3c);
  }
  uStack_48 = 0;
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_40 = 0;
  local_430 = param_3;
  local_428 = param_4;
  if (param_4 != 0) {
    uStack_74 = 0;
    uStack_70 = 0;
    local_78 = fVar1 / (float)*(uint *)(param_4 + 0x38);
    fStack_6c = 0.0;
    uStack_68 = 0;
    uStack_60 = 0;
    fStack_64 = fVar2 / (float)*(uint *)(param_4 + 0x3c);
    FUN_14201b230(local_3d8,param_1[0x35] + param_1[0x36] * 0x340 + -0x340);
    fStack_6c = fStack_6c + (pfVar8[3] - local_108) / (float)*(uint *)(param_4 + 0x38);
    uStack_60 = CONCAT44(uStack_60._4_4_ +
                         (pfVar8[7] - local_104) / (float)*(uint *)(param_4 + 0x3c),
                         (undefined4)uStack_60);
    FUN_14201bc10(local_c0);
    if (local_140 != (RefCountImpl *)0x0) {
      Scaleform::RefCountImpl::Release(local_140);
    }
    Scaleform::RefCountImplCore::~RefCountImplCore(local_3c8);
    if (local_3d8[0] != (longlong *)0x0) {
      (**(code **)(*local_3d8[0] + 0x10))();
    }
  }
  local_440 = param_1 + 0x3f2;
  local_448 = param_1[0x609];
  local_450 = local_98;
  local_458 = &local_430;
  FUN_1420500d0(param_1 + 0x239,*(undefined4 *)(param_2 + 0x48),&local_418,&local_3f8);
  (**(code **)(*param_1 + 0x300))(param_1);
  return;
}



// FUNCTION 14205a240 FUN_14205a240 body=1842 status=ok
// SIG undefined FUN_14205a240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14205a240(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  byte bVar10;
  int iVar11;
  longlong lVar12;
  longlong **pplVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined1 auStack_388 [32];
  longlong **local_368;
  undefined8 local_360;
  int local_358;
  int local_350;
  longlong local_348;
  undefined2 local_338;
  int local_330;
  int iStack_32c;
  undefined4 local_328 [2];
  longlong *local_320;
  longlong local_318;
  undefined8 local_310;
  longlong *local_308;
  longlong *local_300;
  longlong local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  float local_2b0;
  float local_2ac;
  float local_2a8 [4];
  undefined4 local_298;
  float local_294;
  undefined4 local_290;
  float local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined1 local_268 [32];
  longlong *local_248 [2];
  longlong local_238;
  undefined1 local_230 [8];
  undefined1 local_228 [480];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  (**(code **)(*param_1 + 0x2a0))(param_1,1);
  if (*(int *)(param_2 + 0x18) == 1) {
    uVar7 = *(undefined8 *)(param_2 + 0x48);
    iVar5 = FVorbisAudioInfo::GetSourceBufferSize(uVar7);
    uVar7 = Scaleform::Render::FilterSet::GetFilter(uVar7,iVar5 + -1);
    iVar5 = FUN_14203a230(param_1 + 0x239,uVar7,*(undefined4 *)((longlong)param_1 + 0x214),local_228
                         );
    local_248[0] = (longlong *)0x0;
    local_248[1] = (longlong *)0x0;
    local_238 = 0;
    Scaleform::Render::CacheablePrimitive::GetCacheResults(param_2,&local_308,2);
    if (local_308 != (longlong *)0x0) {
      (**(code **)(*local_308 + 8))(local_308);
    }
    if (local_248[0] != (longlong *)0x0) {
      (**(code **)(*local_248[0] + 0x10))();
    }
    local_248[0] = local_308;
    iStack_32c = *(int *)((longlong)local_308 + 0x3c) - *(int *)((longlong)local_308 + 0x34);
    local_330 = (int)local_308[7] - (int)local_308[6];
    if (local_300 != (longlong *)0x0) {
      (**(code **)(*local_300 + 8))(local_300);
    }
    if ((longlong *)local_238 != (longlong *)0x0) {
      (**(code **)(*(longlong *)local_238 + 0x10))();
    }
    local_238 = (longlong)local_300;
    lVar6 = (**(code **)(*param_1 + 0x10))(param_1,&local_330,0);
    if (local_248[1] != (longlong *)0x0) {
      (**(code **)(*local_248[1] + 0x10))();
    }
    local_248[1] = (longlong *)lVar6;
    if (DAT_146ace8a1 == '\0') {
      DAT_146ace8a1 = lVar6 == 0;
    }
    if (lVar6 == 0) {
      lVar6 = 3;
      pplVar13 = local_248;
      lVar12 = 3;
      do {
        plVar8 = *pplVar13;
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x28))(plVar8,0);
        }
        pplVar13 = pplVar13 + 1;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      FUN_1432d4040(param_2,0,0,0);
      puVar14 = local_230;
      do {
        plVar8 = (longlong *)(puVar14 + -8);
        puVar14 = puVar14 + -8;
        lVar6 = lVar6 + -1;
        if ((longlong *)*plVar8 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar8 + 0x10))();
        }
      } while (lVar6 != 0);
      return;
    }
    local_368 = (longlong **)local_328;
    local_2b0 = (float)local_330;
    local_2b8 = 0;
    local_328[0] = 0;
    local_2ac = (float)iStack_32c;
    (**(code **)(*param_1 + 0x20))(param_1,lVar6,8,&local_2b8);
    local_310 = CONCAT44(iStack_32c,local_330);
    puVar9 = (undefined4 *)
             (**(code **)(*(longlong *)param_1[0x4b] + 8))((longlong *)param_1[0x4b],&local_310);
    local_288 = *puVar9;
    local_284 = puVar9[1];
    local_280 = puVar9[2];
    local_27c = puVar9[3];
    local_278 = puVar9[4];
    local_274 = puVar9[5];
    local_270 = puVar9[6];
    local_26c = puVar9[7];
    FUN_1432dafc0(param_1,1,1);
    local_348 = param_1[0x609];
    local_358 = iVar5 + -1;
    local_360 = local_228;
    local_368 = local_248;
    local_350 = iVar5;
    (**(code **)(*param_1 + 0x368))(param_1,&local_288,&DAT_1467ccfd0,uVar7);
    (**(code **)(*param_1 + 0x28))(param_1,0);
    local_318 = (longlong)local_248[1];
    FUN_1432d4040(param_2,2,&local_318,1);
    *(longlong *)(*(longlong *)(local_318 + 0x20) + 0x10) = param_2;
    (**(code **)(*param_1 + 0x2f8))(param_1,param_2);
    lVar6 = 3;
    pplVar13 = local_248;
    lVar12 = 3;
    do {
      plVar8 = *pplVar13;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
      }
      pplVar13 = pplVar13 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    puVar14 = local_230;
    do {
      plVar8 = (longlong *)(puVar14 + -8);
      puVar14 = puVar14 + -8;
      lVar6 = lVar6 + -1;
      if ((longlong *)*plVar8 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar8 + 0x10))();
      }
    } while (lVar6 != 0);
    return;
  }
  if (*(int *)(param_2 + 0x18) != 2) {
    return;
  }
  uVar2 = *(uint *)((longlong)param_1 + 0x214);
  plVar8 = param_1 + 0x3f2;
  if ((uVar2 & 0x40) == 0) {
    iVar5 = (uVar2 & 1) + 0x143;
    if ((uVar2 & 2) == 0) {
      iVar5 = (uVar2 & 1) + 0x103;
    }
    iVar11 = iVar5 + 8;
    if ((uVar2 & 0x10) == 0) {
      iVar11 = iVar5;
    }
  }
  else {
    iVar11 = 0x100000;
  }
  (**(code **)(*plVar8 + 0x18))(plVar8,iVar11,param_1[0x609]);
  if ((char)param_1[0x3fd] == '\0') {
    *(undefined1 *)(param_1 + 0x3fd) = 1;
    *(undefined4 *)((longlong)param_1 + 0x1fec) = 1;
    param_1[0x3f5] = 0;
    param_1[0x3f6] = 0;
    param_1[0x3f7] = 0;
    *(undefined4 *)(param_1 + 0x3f8) = 0;
    param_1[0x3f9] = 0;
    param_1[0x3fa] = 0;
    param_1[0x3fb] = 0;
    param_1[0x3fc] = 0;
  }
  plVar1 = param_1 + 0x5f3;
  Scaleform::Render::CacheablePrimitive::GetCacheResults(param_2,&local_320,1);
  lVar6 = (**(code **)(*local_320 + 0x18))();
  FUN_14201c970(local_268,param_1[0x4b] + 0x1e0,
                ((ulonglong)
                 (byte)(&DAT_1467ccff4)
                       [(ulonglong)
                        (*(byte *)(*(longlong *)**(undefined8 **)(param_2 + 0x30) + 0xf) & 0xf) * 5]
                + 1) * 0x10 + *(longlong *)**(undefined8 **)(param_2 + 0x30));
  local_294 = (float)(*(int *)((longlong)local_320 + 0x3c) - *(int *)((longlong)local_320 + 0x34)) /
              (float)*(uint *)(lVar6 + 0x3c);
  local_2a8[1] = 0.0;
  local_2a8[2] = 0.0;
  local_298 = 0;
  local_290 = 0;
  local_2a8[0] = (float)((int)local_320[7] - (int)local_320[6]) / (float)*(uint *)(lVar6 + 0x38);
  local_2a8[3] = (float)(int)local_320[6] * local_2a8[0];
  local_28c = local_294 * (float)*(int *)((longlong)local_320 + 0x34);
  uVar4 = FUN_1432dc470(param_1);
  FUN_1432dafc0(param_1,uVar4,1);
  bVar10 = *(byte *)(*(longlong *)**(undefined8 **)(param_2 + 0x30) + 0xf);
  if ((bVar10 & 1) == 0) {
    puVar15 = &DAT_1467ccfd0;
  }
  else {
    puVar15 = (undefined *)
              (((ulonglong)(byte)(&DAT_1467ccff0)[(ulonglong)(bVar10 & 0xf) * 5] + 1) * 0x10 +
              *(longlong *)**(undefined8 **)(param_2 + 0x30));
  }
  local_368._0_4_ = 0;
  FUN_142050f40(plVar8,plVar1,puVar15,0);
  local_358 = 0;
  local_360._0_4_ = 0;
  local_368._0_4_ = 8;
  FUN_142055c30(plVar8,plVar1,0x10,local_268);
  local_358 = 0;
  local_360._0_4_ = 0;
  local_368 = (longlong **)CONCAT44(local_368._4_4_,8);
  FUN_142055c30(plVar8,plVar1,0x18,local_2a8);
  local_2f8 = *plVar1;
  local_2f0 = param_1[0x5f4];
  local_2e8 = param_1[0x5f5];
  local_338 = 0x101;
  if (local_2e8 != 0) {
    LOCK();
    *(int *)(local_2e8 + 8) = *(int *)(local_2e8 + 8) + 1;
    UNLOCK();
  }
  local_2e0 = param_1[0x5f6];
  local_2d8 = param_1[0x5f7];
  local_2d0 = param_1[0x5f8];
  local_2c8 = param_1[0x5f9];
  local_2c0 = param_1[0x5fa];
  if (local_2c0 != 0) {
    LOCK();
    *(int *)(local_2c0 + 8) = *(int *)(local_2c0 + 8) + 1;
    UNLOCK();
  }
  local_360 = (undefined1 *)((ulonglong)local_360._4_4_ << 0x20);
  local_368 = (longlong **)CONCAT62(local_368._2_6_,0x101);
  FUN_14207b5e0(plVar8,&local_2f8,0x17,lVar6);
  FUN_1420709e0(plVar8,1);
  (**(code **)(*param_1 + 0x308))(param_1,*(undefined4 *)((longlong)param_1 + 0x204));
  lVar12 = param_1[0x36] * 0x340;
  lVar6 = param_1[0x35];
  if (*(int *)(lVar12 + -0x2c + lVar6) != 0) {
    iVar5 = *(int *)(lVar12 + -0x2c + lVar6);
    bVar10 = (byte)(*(uint *)(param_1 + 0xb) >> 6) & 1;
    iVar11 = iVar5 + -1;
    if ((*(uint *)(param_1 + 0xb) >> 6 & 1) == 0) {
      iVar11 = iVar5;
    }
    if (*(char *)(lVar12 + -0xf + lVar6) == '\0') {
      if (*(char *)(lVar12 + -0xd + lVar6) == '\0') goto LAB_14205a5ad;
      cVar3 = (bVar10 ^ 1) + 7;
    }
    else {
      cVar3 = (bVar10 ^ 1) + 4;
    }
    (**(code **)(*param_1 + 0x2c0))(param_1,cVar3,iVar11);
  }
LAB_14205a5ad:
  (**(code **)(*param_1 + 0x310))(param_1);
  (**(code **)(*param_1 + 0x350))(param_1,6,1);
  uVar2 = *(uint *)(param_1 + 0xb);
  uVar4 = FUN_1432dc470(param_1);
  FUN_1432dafc0(param_1,uVar4,0,(byte)(uVar2 >> 4) & 1);
  lVar6 = (**(code **)(*param_1 + 0xd0))(param_1);
  if (lVar6 != 0) {
    uVar7 = (**(code **)(*param_1 + 0xd0))(param_1);
    FUN_1432c25b0(uVar7,1);
  }
  (**(code **)(*local_320 + 0x28))(local_320,2);
  plVar8 = (longlong *)(**(code **)(*param_1 + 0xb8))(param_1);
  cVar3 = (**(code **)(*plVar8 + 0x18))(plVar8);
  if (cVar3 == '\0') {
    FUN_1432d4040(param_2,0,0,0);
  }
  return;
}



// FUNCTION 14205a980 FUN_14205a980 body=211 status=ok
// SIG undefined FUN_14205a980(void)

void FUN_14205a980(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                  undefined8 param_9)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)&DAT_14621c810;
  if ((*(uint *)((longlong)param_1 + 0x54) & 0x10000000) == 0) {
    plVar3 = param_1 + 0x234;
  }
  FUN_1420514b0(param_1 + 0x239,param_2,param_3,plVar3,param_4,param_5,param_6,param_7,param_8,
                param_9,param_1 + 0x3f2);
  (**(code **)(*param_1 + 0x310))(param_1);
  (**(code **)(*param_1 + 0x350))(param_1,6,1);
  lVar1 = (**(code **)(*param_1 + 0xd0))(param_1);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0xd0))(param_1);
    FUN_1432c25b0(uVar2,1);
    return;
  }
  return;
}



// FUNCTION 14205aa60 FUN_14205aa60 body=995 status=ok
// SIG undefined FUN_14205aa60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14205aa60(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  bool bVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  int local_90;
  uint local_88;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  longlong *local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_70 = param_2;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x118))();
  local_68 = plVar5;
  (**(code **)(*plVar5 + 8))(plVar5,8,"HAL::drawMaskClearRectangles");
  bVar4 = false;
  if ((*(char *)(param_1[0x36] * 0x340 + -0xf + param_1[0x35]) == '\0') &&
     (bVar4 = false, *(char *)(param_1[0x36] * 0x340 + -0xd + param_1[0x35]) != '\0')) {
    bVar4 = true;
  }
  plVar1 = param_1 + 0x3f2;
  uVar10 = (uint)param_3;
  uVar12 = 0x18;
  if (uVar10 < 0x18) {
    uVar12 = uVar10;
  }
  uVar6 = 0x100000;
  if (!bVar4) {
    uVar6 = 0x80002;
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,uVar6,param_1[0x60c]);
  if ((char)param_1[0x3fd] == '\0') {
    *(undefined1 *)(param_1 + 0x3fd) = 1;
    *(uint *)((longlong)param_1 + 0x1fec) = uVar12;
    param_1[0x3f5] = 0;
    param_1[0x3f6] = 0;
    param_1[0x3f7] = 0;
    *(undefined4 *)(param_1 + 0x3f8) = 0;
    param_1[0x3f9] = 0;
    param_1[0x3fa] = 0;
    param_1[0x3fb] = 0;
    param_1[0x3fc] = 0;
  }
  uVar9 = 0;
  plVar2 = param_1 + 0x5f3;
  if (param_3 != 0) {
    do {
      if ((uVar9 != 0) && ((char)param_1[0x3fd] == '\0')) {
        *(undefined1 *)(param_1 + 0x3fd) = 1;
        *(uint *)((longlong)param_1 + 0x1fec) = uVar12;
        param_1[0x3f5] = 0;
        param_1[0x3f6] = 0;
        param_1[0x3f7] = 0;
        *(undefined4 *)(param_1 + 0x3f8) = 0;
        param_1[0x3f9] = 0;
        param_1[0x3fa] = 0;
        param_1[0x3fb] = 0;
        param_1[0x3fc] = 0;
      }
      uVar7 = 0;
      if (uVar12 != 0) {
        lVar11 = uVar9 * 0x20 + local_70;
        do {
          local_90 = 0;
          local_98 = 8;
          local_88 = uVar7;
          FUN_142055c30(plVar1,plVar2,0x10,lVar11);
          plVar5 = (longlong *)(**(code **)(*param_1 + 0xb8))(param_1);
          local_74 = 0xff00007f;
          (**(code **)(*plVar5 + 0x38))(plVar5,&local_78,&local_74);
          if (local_78._2_1_ == 0) {
            local_60 = 0.0;
          }
          else {
            local_60 = (float)local_78._2_1_ * 0.003921569;
          }
          if (local_78._1_1_ == 0) {
            local_5c = 0.0;
          }
          else {
            local_5c = (float)local_78._1_1_ * 0.003921569;
          }
          if ((char)local_78 == '\0') {
            local_58 = 0.0;
          }
          else {
            local_58 = (float)(local_78 & 0xff) * 0.003921569;
          }
          if (local_78._3_1_ == 0) {
            local_54 = 0.0;
          }
          else {
            local_54 = (float)local_78._3_1_ * 0.003921569;
          }
          cVar3 = *(char *)(*(longlong *)(param_1[0x5f4] + 0x18) + 0x16);
          if (cVar3 < '\0') {
            cVar3 = *(char *)(*(longlong *)(param_1[0x5f7] + 0x18) + 0x16);
            if (cVar3 < '\0') {
              local_90 = 0;
              iVar8 = 7;
            }
            else {
              iVar8 = (int)*(char *)(*(longlong *)(param_1[0x5f7] + 0x18) + 0x15);
              local_90 = (int)cVar3;
            }
            local_88 = 0;
            local_98 = 4;
            (**(code **)(*plVar1 + 0x10))(plVar1,plVar2,iVar8,&local_60);
          }
          else {
            local_88 = 0;
            local_90 = (int)cVar3;
            local_98 = 4;
            (**(code **)(*plVar1 + 0x10))
                      (plVar1,plVar2,(int)*(char *)(*(longlong *)(param_1[0x5f4] + 0x18) + 0x15));
          }
          uVar7 = uVar7 + 1;
          lVar11 = lVar11 + 0x20;
        } while (uVar7 < uVar12);
      }
      FUN_1420709e0(plVar1,uVar12);
      if (uVar9 == 0) {
        (**(code **)(*param_1 + 0x310))();
      }
      else {
        (**(code **)(*param_1 + 0x318))(param_1);
      }
      (**(code **)(*param_1 + 0x350))(param_1,uVar12 * 6,uVar12);
      uVar7 = uVar10 - (int)uVar9;
      uVar12 = 0x18;
      if (uVar7 < 0x18) {
        uVar12 = uVar7;
      }
      uVar9 = uVar9 + uVar12;
      plVar5 = local_68;
    } while (uVar9 < param_3);
  }
  lVar11 = (**(code **)(*param_1 + 0xd0))(param_1);
  if (lVar11 != 0) {
    uVar6 = (**(code **)(*param_1 + 0xd0))(param_1);
    FUN_1432c25b0(uVar6,1);
  }
  (**(code **)(*plVar5 + 0x10))(plVar5,8);
  return;
}



// FUNCTION 14205ae50 FUN_14205ae50 body=92 status=ok
// SIG undefined FUN_14205ae50(void)

void FUN_14205ae50(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_1 + 0x310))();
  (**(code **)(*param_1 + 0x350))(param_1,6,1);
  lVar1 = (**(code **)(*param_1 + 0xd0))(param_1);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0xd0))(param_1);
    FUN_1432c25b0(uVar2,1);
    return;
  }
  return;
}



// FUNCTION 14205aeb0 FUN_14205aeb0 body=1948 status=ok
// SIG undefined FUN_14205aeb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14205aeb0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  byte bVar11;
  longlong lVar12;
  uint uVar13;
  longlong **pplVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_338 [32];
  longlong **local_318;
  undefined1 *local_310;
  uint local_308;
  uint local_300;
  longlong local_2f8;
  char local_2e8;
  longlong *local_2e0;
  longlong *local_2d8;
  undefined4 local_2d0 [2];
  int local_2c8;
  int local_2c4;
  longlong local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined *local_2b0;
  undefined8 local_2a8;
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined1 local_268 [32];
  longlong *local_248 [2];
  longlong local_238;
  undefined1 local_230 [8];
  undefined1 local_228 [480];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  local_2a8 = *(undefined8 *)(*param_2 + 0x48);
  local_2e0 = param_2;
  uVar4 = FVorbisAudioInfo::GetSourceBufferSize(local_2a8);
  uVar17 = 0;
  uVar5 = 0;
  local_2c0 = 0;
  if (*param_2 == 0) {
    return;
  }
  plVar9 = (longlong *)param_2[1];
  if (plVar9 == (longlong *)0x0) {
    return;
  }
  local_248[0] = (longlong *)0x0;
  local_248[1] = (longlong *)0x0;
  local_238 = 0;
  local_2c8 = (int)plVar9[7] - (int)plVar9[6];
  local_2c4 = *(int *)((longlong)plVar9 + 0x3c) - *(int *)((longlong)plVar9 + 0x34);
  (**(code **)(*plVar9 + 8))();
  if (local_248[0] != (longlong *)0x0) {
    (**(code **)(*local_248[0] + 0x10))();
  }
  local_248[0] = (longlong *)param_2[1];
  (**(code **)(*param_1 + 0x310))(param_1);
  (**(code **)(*param_1 + 0x2c0))(param_1,1);
  FUN_1432dafc0(param_1,0x12,1);
  (**(code **)(*param_1 + 0x2a0))(param_1,1);
  local_2b0 = &DAT_1467ccfd0;
  uVar16 = uVar5;
  if (uVar4 != 0) {
    do {
      uVar13 = 0;
      lVar8 = Scaleform::Render::FilterSet::GetFilter(local_2a8,uVar17);
      local_2c0 = lVar8;
      uVar5 = FUN_14203a230(param_1 + 0x239,lVar8,*(undefined4 *)((longlong)param_1 + 0x214),
                            local_228);
      local_2e8 = '\0';
      if (*(int *)(lVar8 + 0x10) - 1U < 5) {
        if ((longlong *)local_238 != (longlong *)0x0) {
          (**(code **)(*(longlong *)local_238 + 0x28))(local_238,0);
        }
        if (local_248[0] != (longlong *)0x0) {
          (**(code **)(*local_248[0] + 8))(local_248[0]);
        }
        if ((longlong *)local_238 != (longlong *)0x0) {
          (**(code **)(*(longlong *)local_238 + 0x10))();
        }
        local_238 = (longlong)local_248[0];
        local_2e8 = '\x01';
      }
      uVar16 = 0;
      if (uVar5 != 0) {
        do {
          uVar16 = uVar13;
          if ((uVar13 == uVar5 - 1) && (param_2 = local_2e0, uVar17 == uVar4 - 1)) break;
          if (local_248[1] == (longlong *)0x0) {
            plVar9 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,&local_2c8,0);
            if (local_248[1] != (longlong *)0x0) {
              (**(code **)(*local_248[1] + 0x10))();
            }
            local_248[1] = plVar9;
            if (plVar9 == (longlong *)0x0) {
              if (DAT_146ace89f == '\0') {
                DAT_146ace89f = '\x01';
              }
              (**(code **)(*local_248[0] + 0x28))(local_248[0],0);
              if (local_248[0] != (longlong *)0x0) {
                (**(code **)(*local_248[0] + 0x10))();
              }
              param_2 = local_2e0;
              local_248[0] = (longlong *)0x0;
              if (((longlong *)local_2e0[1] != (longlong *)0x0) &&
                 ((**(code **)(*(longlong *)local_2e0[1] + 8))(), local_248[0] != (longlong *)0x0))
              {
                (**(code **)(*local_248[0] + 0x10))();
              }
              local_248[0] = (longlong *)param_2[1];
              uVar17 = uVar4;
              break;
            }
          }
          plVar9 = local_248[1];
          local_318 = (longlong **)local_2d0;
          local_298 = (float)(int)local_248[1][6];
          local_2d0[0] = 0;
          local_294 = (float)*(int *)((longlong)local_248[1] + 0x34);
          local_290 = (float)(int)local_248[1][7];
          local_28c = (float)*(int *)((longlong)local_248[1] + 0x3c);
          (**(code **)(*param_1 + 0x20))(param_1,local_248[1],8,&local_298);
          local_2b8 = (undefined4)plVar9[5];
          local_2b4 = *(undefined4 *)((longlong)plVar9 + 0x2c);
          puVar10 = (undefined4 *)
                    (**(code **)(*(longlong *)param_1[0x4b] + 8))
                              ((longlong *)param_1[0x4b],&local_2b8);
          local_288 = *puVar10;
          local_284 = puVar10[1];
          local_280 = puVar10[2];
          local_27c = puVar10[3];
          local_278 = puVar10[4];
          local_274 = puVar10[5];
          local_270 = puVar10[6];
          local_26c = puVar10[7];
          local_2f8 = param_1[0x609];
          local_310 = local_228;
          local_318 = local_248;
          local_308 = uVar13;
          local_300 = uVar5;
          (**(code **)(*param_1 + 0x368))(param_1,&local_288,&DAT_1467ccfd0,local_2c0);
          uVar16 = uVar13 + 1;
          if ((uVar16 == uVar5 - 1) && (uVar17 == uVar4 - 1)) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (((local_2e8 != '\0') && (uVar13 == 0)) && (!bVar2)) {
            plVar9 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,&local_2c8);
            if (local_248[0] != (longlong *)0x0) {
              (**(code **)(*local_248[0] + 0x10))();
            }
            local_248[0] = plVar9;
            if (plVar9 == (longlong *)0x0) {
              if (DAT_146ace8a0 == '\0') {
                DAT_146ace8a0 = '\x01';
              }
              (**(code **)(*local_248[1] + 0x28))(local_248[1],0);
              if (local_248[1] != (longlong *)0x0) {
                (**(code **)(*local_248[1] + 0x10))();
              }
              param_2 = local_2e0;
              local_248[1] = (longlong *)0x0;
              if ((longlong *)local_2e0[1] != (longlong *)0x0) {
                (**(code **)(*(longlong *)local_2e0[1] + 8))();
              }
              if (local_248[0] != (longlong *)0x0) {
                (**(code **)(*local_248[0] + 0x10))();
              }
              local_248[0] = (longlong *)param_2[1];
              (**(code **)(*param_1 + 0x28))(param_1,4);
              uVar17 = uVar4;
              uVar16 = uVar13;
              break;
            }
          }
          (**(code **)(*param_1 + 0x28))(param_1,4);
          if (local_248[0] != (longlong *)0x0) {
            (**(code **)(*local_248[0] + 8))(local_248[0]);
          }
          plVar9 = local_248[0];
          if (local_248[1] != (longlong *)0x0) {
            (**(code **)(*local_248[1] + 8))();
          }
          if (local_248[0] != (longlong *)0x0) {
            (**(code **)(*local_248[0] + 0x10))(local_248[0]);
          }
          local_248[0] = local_248[1];
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 8))(plVar9);
          }
          if (local_248[1] != (longlong *)0x0) {
            (**(code **)(*local_248[1] + 0x10))();
          }
          local_248[1] = plVar9;
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
          param_2 = local_2e0;
          uVar13 = uVar16;
        } while (uVar16 < uVar5);
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < uVar4);
  }
  if (local_248[0] == (longlong *)0x0) {
LAB_14205b42c:
    FUN_1432d4040(*param_2,0,0,0);
  }
  else {
    plVar9 = (longlong *)(**(code **)(*param_1 + 0xb8))(param_1);
    cVar3 = (**(code **)(*plVar9 + 0x18))(plVar9);
    if ((cVar3 == '\0') && (uVar5 != 0)) goto LAB_14205b42c;
    local_2e0 = local_248[0];
    local_2d8 = (longlong *)local_238;
    FUN_1432d4040(*param_2,2 - (uint)(uVar5 != 0),&local_2e0,(uVar5 != 0) + '\x01');
    *(longlong *)(local_2e0[4] + 0x10) = *param_2;
    if (local_2d8 != (longlong *)0x0) {
      *(longlong *)(local_2d8[4] + 0x10) = *param_2;
    }
  }
  (**(code **)(*param_1 + 0x28))(param_1,0);
  lVar12 = param_1[0x36] * 0x340;
  lVar8 = param_1[0x35];
  if (*(int *)(lVar12 + -0x2c + lVar8) != 0) {
    iVar7 = *(int *)(lVar12 + -0x2c + lVar8);
    bVar11 = (byte)(*(uint *)(param_1 + 0xb) >> 6) & 1;
    iVar1 = iVar7 + -1;
    if ((*(uint *)(param_1 + 0xb) >> 6 & 1) == 0) {
      iVar1 = iVar7;
    }
    if (*(char *)(lVar12 + -0xf + lVar8) == '\0') {
      if (*(char *)(lVar12 + -0xd + lVar8) == '\0') goto LAB_14205b4a8;
      cVar3 = (bVar11 ^ 1) + 7;
    }
    else {
      cVar3 = (bVar11 ^ 1) + 4;
    }
    (**(code **)(*param_1 + 0x2c0))(param_1,cVar3,iVar1);
  }
LAB_14205b4a8:
  (**(code **)(*param_1 + 0x308))(param_1,*(undefined4 *)((longlong)param_1 + 0x204));
  lVar8 = *param_2;
  if (uVar5 == 0) {
    (**(code **)(*param_1 + 0x2f8))(param_1,lVar8);
  }
  else {
    FUN_14201c970(local_268,param_1[0x4b] + 0x1e0,
                  ((ulonglong)
                   (byte)(&DAT_1467ccff4)
                         [(ulonglong)
                          (*(byte *)(*(longlong *)**(undefined8 **)(lVar8 + 0x30) + 0xf) & 0xf) * 5]
                  + 1) * 0x10 + *(longlong *)**(undefined8 **)(lVar8 + 0x30));
    bVar11 = *(byte *)(*(longlong *)**(undefined8 **)(lVar8 + 0x30) + 0xf);
    if ((bVar11 & 1) != 0) {
      local_2b0 = (undefined *)
                  (((ulonglong)(byte)(&DAT_1467ccff0)[(ulonglong)(bVar11 & 0xf) * 5] + 1) * 0x10 +
                  *(longlong *)**(undefined8 **)(lVar8 + 0x30));
    }
    uVar6 = FUN_1432dc470(param_1);
    FUN_1432dafc0(param_1,uVar6,1);
    local_2f8 = param_1[0x609];
    local_310 = local_228;
    local_318 = local_248;
    local_308 = uVar16;
    local_300 = uVar5;
    (**(code **)(*param_1 + 0x368))(param_1,local_268,local_2b0,local_2c0);
    uVar17 = *(uint *)(param_1 + 0xb);
    uVar6 = FUN_1432dc470(param_1);
    FUN_1432dafc0(param_1,uVar6,0,(byte)(uVar17 >> 4) & 1);
  }
  lVar8 = 3;
  pplVar14 = local_248;
  lVar12 = 3;
  do {
    plVar9 = *pplVar14;
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x28))(plVar9,0);
    }
    pplVar14 = pplVar14 + 1;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  iVar7 = FVorbisAudioInfo::GetSourceBufferSize(local_2a8);
  *(int *)((longlong)param_1 + 0x284) = *(int *)((longlong)param_1 + 0x284) + iVar7;
  puVar15 = local_230;
  do {
    plVar9 = (longlong *)(puVar15 + -8);
    puVar15 = puVar15 + -8;
    lVar8 = lVar8 + -1;
    if ((longlong *)*plVar9 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar9 + 0x10))();
    }
  } while (lVar8 != 0);
  return;
}



// FUNCTION 14205b650 FUN_14205b650 body=98 status=ok
// SIG undefined FUN_14205b650(void)

void FUN_14205b650(longlong param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  if (param_2 == 0) {
    FUN_142055c30(param_1 + 0x1f90,param_1 + 0x2f98,0x1a,param_4,param_3,0,0);
  }
  else if (param_2 == 1) {
    FUN_142055c30(param_1 + 0x1f90,param_1 + 0x2f98,0xf,param_4,param_3,0,0);
    return;
  }
  return;
}



// FUNCTION 14205b6c0 FUN_14205b6c0 body=588 status=ok
// SIG undefined FUN_14205b6c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14205b6c0(longlong *param_1,longlong param_2)

{
  byte bVar1;
  longlong *plVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_68;
  undefined1 local_64 [12];
  undefined1 local_58 [32];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0xb8))();
  (**(code **)(*plVar2 + 0x10))(plVar2,2);
  local_68 = 0xffffffff;
  pbVar3 = (byte *)(**(code **)(param_1[0x51] + 0x50))(param_1 + 0x51,local_64,&local_68);
  local_2c = 0.0;
  if (pbVar3[2] == 0) {
    local_38 = 0.0;
  }
  else {
    local_38 = (float)pbVar3[2] * 0.003921569;
  }
  if (pbVar3[1] == 0) {
    local_34 = 0.0;
  }
  else {
    local_34 = (float)pbVar3[1] * 0.003921569;
  }
  if (*pbVar3 == 0) {
    local_30 = 0.0;
  }
  else {
    local_30 = (float)*pbVar3 * 0.003921569;
  }
  if (pbVar3[3] != 0) {
    local_2c = (float)pbVar3[3] * 0.003921569;
  }
  plVar2 = param_1 + 0x3f2;
  (**(code **)(*plVar2 + 0x18))(plVar2,0x80002,param_1[0x60c]);
  if ((char)param_1[0x3fd] == '\0') {
    *(undefined1 *)(param_1 + 0x3fd) = 1;
    *(undefined4 *)((longlong)param_1 + 0x1fec) = 1;
    param_1[0x3f5] = 0;
    param_1[0x3f6] = 0;
    param_1[0x3f7] = 0;
    *(undefined4 *)(param_1 + 0x3f8) = 0;
    param_1[0x3f9] = 0;
    param_1[0x3fa] = 0;
    param_1[0x3fb] = 0;
    param_1[0x3fc] = 0;
  }
  lVar5 = *(longlong *)**(undefined8 **)(param_2 + 0x30);
  bVar1 = (&DAT_1467ccff4)[(ulonglong)(*(byte *)(lVar5 + 0xf) & 0xf) * 5];
  lVar4 = (**(code **)(*param_1 + 0x110))(param_1);
  FUN_1432be670(local_58,((ulonglong)bVar1 + 1) * 0x10 + lVar5,lVar4 + 0x1e0);
  local_78 = 0;
  local_80 = 0;
  local_88 = 8;
  FUN_142055c30(plVar2,param_1 + 0x5f3,0x10,local_58);
  local_78 = 0;
  local_80 = 0;
  local_88 = 4;
  FUN_142055c30(plVar2,param_1 + 0x5f3,7,&local_38);
  FUN_1420709e0(plVar2,1);
  (**(code **)(*param_1 + 0x310))(param_1);
  (**(code **)(*param_1 + 0x350))(param_1,6,1);
  lVar5 = (**(code **)(*param_1 + 0xd0))(param_1);
  if (lVar5 != 0) {
    uVar6 = (**(code **)(*param_1 + 0xd0))(param_1);
    FUN_1432c25b0(uVar6,1);
  }
  return;
}



// FUNCTION 14205b910 FUN_14205b910 body=51 status=ok
// SIG undefined FUN_14205b910(void)

void FUN_14205b910(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x110))();
                    /* WARNING: Could not recover jumptable at 0x00014205b93f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1,param_2,param_3);
  return;
}



// FUNCTION 14205b950 FUN_14205b950 body=36 status=ok
// SIG undefined FUN_14205b950(void)

void FUN_14205b950(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x110))();
                    /* WARNING: Could not recover jumptable at 0x00014205b970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x50))(plVar1,param_2);
  return;
}



// FUNCTION 14205b980 FUN_14205b980 body=186 status=ok
// SIG undefined FUN_14205b980(void)

ulonglong FUN_14205b980(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  lVar4 = param_1 + 200;
  lVar3 = 0x1c;
  do {
    FUN_1419e0a40(param_2,lVar4);
    lVar4 = lVar4 + 6;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  puVar5 = (undefined4 *)(param_1 + 0x170);
  lVar4 = 4;
  do {
    puVar1 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      plVar2 = (longlong *)(**(code **)(*param_2 + 0x50))(param_2,puVar5,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        plVar2 = (longlong *)FArchive::ByteSwap(param_2,puVar5,4);
      }
    }
    else {
      *puVar5 = *puVar1;
      plVar2 = (longlong *)param_2[1];
      *plVar2 = *plVar2 + 4;
    }
    puVar5 = puVar5 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return (ulonglong)plVar2 & 0xffffffffffffff00;
}



// FUNCTION 14205ba40 FUN_14205ba40 body=125 status=ok
// SIG undefined FUN_14205ba40(void)

undefined1 FUN_14205ba40(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1 + 200;
  lVar2 = 0x1c;
  do {
    FUN_1419e0a40(param_2,lVar1);
    lVar1 = lVar1 + 6;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  param_1 = param_1 + 0x170;
  lVar1 = 4;
  do {
    FUN_1419e0b60(param_2,param_1);
    param_1 = param_1 + 4;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return 0;
}



// FUNCTION 14205bac0 FUN_14205bac0 body=612 status=ok
// SIG undefined FUN_14205bac0(void)

void FUN_14205bac0(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  int *piVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  uint uVar16;
  ulonglong uVar17;
  
  puVar14 = *(undefined4 **)(param_1 + 8);
  uVar17 = 0;
  uVar16 = puVar14[1];
  plVar6 = param_2;
  while (uVar16 != 0) {
    plVar15 = plVar6 + 2;
    uVar3 = *puVar14;
    uVar13 = uVar16 & 0xf;
    if (((puVar14[3] | uVar16) & 0xff00) == 0x3200) {
      puVar14 = puVar14 + 2;
LAB_14205bb46:
      uVar13 = 4;
    }
    else if (((puVar14[3] & 0xf00) == 0x400) && (((puVar14[5] | uVar16) & 0xff00) == 0x3200)) {
      puVar14 = puVar14 + 4;
      goto LAB_14205bb46;
    }
    uVar16 = puVar14[1];
    iVar7 = 0;
    *(undefined4 *)(plVar6 + 3) = 0;
    *(undefined4 *)((longlong)plVar6 + 0x14) = uVar3;
    lVar5 = param_2[1];
    if (lVar5 != 0) {
      uVar8 = uVar17;
      if ('\0' < *(char *)(lVar5 + 0x28)) {
        puVar10 = (uint *)(lVar5 + 0x38);
        do {
          if ((*puVar10 & 0xff00) == (uVar16 & 0xff00)) break;
          uVar8 = uVar8 + 1;
          puVar10 = puVar10 + 4;
        } while ((longlong)uVar8 < (longlong)*(char *)(lVar5 + 0x28));
      }
      iVar7 = *(int *)(lVar5 + 0x3c + uVar8 * 0x10);
      *(int *)(plVar6 + 3) = iVar7;
    }
    *(undefined4 *)plVar15 = 0;
    switch(uVar16 & 0xf0 | uVar13) {
    case 0x11:
    case 0x12:
    case 0x14:
      *(undefined4 *)plVar15 = 7;
      break;
    default:
      goto switchD_14205bbce_caseD_13;
    case 0x21:
    case 0x22:
    case 0x24:
      *(undefined4 *)plVar15 = 6;
      break;
    case 0x32:
      *(undefined4 *)plVar15 = 9;
      break;
    case 0x51:
      *(undefined4 *)plVar15 = 8;
      break;
    case 0x62:
      *(undefined4 *)plVar15 = 2;
      *(undefined4 *)((longlong)plVar6 + 0x1c) = 8;
      goto switchD_14205bbce_caseD_13;
    case 100:
      *(undefined4 *)plVar15 = 4;
      *(undefined4 *)((longlong)plVar6 + 0x1c) = 0x10;
      goto switchD_14205bbce_caseD_13;
    }
    *(undefined4 *)((longlong)plVar6 + 0x1c) = 4;
switchD_14205bbce_caseD_13:
    uVar16 = uVar16 & 0xf00;
    if (uVar16 == 0x200) {
      iVar7 = iVar7 + 2;
LAB_14205bc50:
      *(int *)(plVar6 + 3) = iVar7;
    }
    else {
      if (uVar16 == 0x300) {
        iVar7 = iVar7 + 4;
        goto LAB_14205bc50;
      }
      if (uVar16 == 0x400) {
        *(undefined4 *)(plVar6 + 3) = 1;
      }
    }
    puVar10 = puVar14 + 3;
    puVar14 = puVar14 + 2;
    plVar6 = plVar15;
    uVar16 = *puVar10;
  }
  piVar9 = (int *)((longlong)param_2 + 0x1c);
  uVar8 = uVar17;
  uVar11 = uVar17;
  do {
    if (piVar9[-3] == 0) break;
    if ((int)uVar11 < piVar9[-2] + *piVar9) {
      uVar11 = (ulonglong)(uint)(piVar9[-2] + *piVar9);
    }
    uVar16 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar16;
    piVar9 = piVar9 + 4;
  } while (uVar16 < 4);
  puVar14 = (undefined4 *)((longlong)param_2 + 0x14);
  do {
    iVar7 = puVar14[-1];
    if (iVar7 == 0) {
      return;
    }
    lVar5 = *param_2;
    uVar1 = *(undefined1 *)puVar14;
    uVar2 = *(undefined1 *)(puVar14 + 1);
    iVar4 = *(int *)(lVar5 + 0x100);
    lVar12 = (longlong)iVar4;
    *(int *)(lVar5 + 0x100) = iVar4 + 1;
    if (*(int *)(lVar5 + 0x104) < iVar4 + 1) {
      TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(lVar5,iVar4);
    }
    *(undefined1 *)(lVar5 + lVar12 * 8) = 0;
    uVar16 = (int)uVar17 + 1;
    uVar17 = (ulonglong)uVar16;
    *(undefined1 *)(lVar5 + 1 + lVar12 * 8) = uVar1;
    puVar14 = puVar14 + 4;
    *(char *)(lVar5 + 2 + lVar12 * 8) = (char)iVar7;
    *(undefined1 *)(lVar5 + 3 + lVar12 * 8) = uVar2;
    *(short *)(lVar5 + 4 + lVar12 * 8) = (short)uVar11;
    *(undefined2 *)(lVar5 + 6 + lVar12 * 8) = 0;
  } while (uVar16 < 4);
  return;
}



// FUNCTION 14205bda0 FUN_14205bda0 body=381 status=ok
// SIG undefined FUN_14205bda0(void)

longlong FUN_14205bda0(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  
  FUN_1420642e0();
  plVar4 = (longlong *)*param_1;
  *plVar4 = *plVar4 + 1;
  param_4 = param_4 & plVar4[1];
  lVar5 = *param_1;
  lVar6 = *(longlong *)(lVar5 + 0x10 + param_4 * 0x28);
  lVar2 = lVar5 + param_4 * 0x28;
  uVar12 = param_4;
  if (lVar6 == -2) {
    *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    uVar11 = param_3[1];
    *(undefined8 *)(lVar2 + 0x20) = *param_3;
    *(undefined8 *)(lVar2 + 0x28) = uVar11;
    lVar5 = param_3[2];
    *(longlong *)(lVar2 + 0x30) = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
  }
  else {
    do {
      uVar12 = uVar12 + 1 & plVar4[1];
      lVar3 = lVar5 + uVar12 * 0x28;
    } while (*(longlong *)(lVar5 + 0x10 + uVar12 * 0x28) != -2);
    if (*(ulonglong *)(lVar2 + 0x18) == param_4) {
      *(longlong *)(lVar3 + 0x10) = lVar6;
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
      uVar11 = *(undefined8 *)(lVar2 + 0x28);
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
      *(undefined8 *)(lVar3 + 0x28) = uVar11;
      lVar5 = *(longlong *)(lVar2 + 0x30);
      *(longlong *)(lVar3 + 0x30) = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      uVar8 = *(undefined4 *)((longlong)param_3 + 4);
      uVar9 = *(undefined4 *)(param_3 + 1);
      uVar10 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)param_3;
      *(undefined4 *)(lVar2 + 0x24) = uVar8;
      *(undefined4 *)(lVar2 + 0x28) = uVar9;
      *(undefined4 *)(lVar2 + 0x2c) = uVar10;
      TRefCountPtr<FRHIIndexBuffer>::operator=((longlong *)(lVar2 + 0x30),param_3[2]);
      *(ulonglong *)(lVar2 + 0x10) = uVar12;
    }
    else {
      lVar1 = *(ulonglong *)(lVar2 + 0x18) * 5 + 2;
      uVar7 = *(ulonglong *)(lVar5 + lVar1 * 8);
      while (uVar7 != param_4) {
        lVar1 = uVar7 * 5 + 2;
        uVar7 = *(ulonglong *)(lVar5 + lVar1 * 8);
      }
      *(longlong *)(lVar3 + 0x10) = lVar6;
      *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
      uVar11 = *(undefined8 *)(lVar2 + 0x28);
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
      *(undefined8 *)(lVar3 + 0x28) = uVar11;
      lVar6 = *(longlong *)(lVar2 + 0x30);
      *(longlong *)(lVar3 + 0x30) = lVar6;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      *(ulonglong *)(lVar5 + lVar1 * 8) = uVar12;
      uVar8 = *(undefined4 *)((longlong)param_3 + 4);
      uVar9 = *(undefined4 *)(param_3 + 1);
      uVar10 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)param_3;
      *(undefined4 *)(lVar2 + 0x24) = uVar8;
      *(undefined4 *)(lVar2 + 0x28) = uVar9;
      *(undefined4 *)(lVar2 + 0x2c) = uVar10;
      TRefCountPtr<FRHIIndexBuffer>::operator=(lVar2 + 0x30,param_3[2]);
      *(undefined8 *)(lVar2 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar2 + 0x18) = param_4;
  return lVar2 + 0x20;
}



// FUNCTION 14205bf20 FUN_14205bf20 body=450 status=ok
// SIG undefined FUN_14205bf20(void)

longlong FUN_14205bf20(longlong *param_1,undefined8 param_2,longlong *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    lVar13 = 8;
  }
  else {
    if ((ulonglong)(*plVar3 * 5) <= plVar3[1] * 4 + 4U) goto LAB_14205bf7a;
    lVar13 = plVar3[1] * 2 + 2;
  }
  FUN_14207d9b0(param_1,param_2,lVar13);
LAB_14205bf7a:
  plVar3 = (longlong *)*param_1;
  *plVar3 = *plVar3 + 1;
  param_4 = param_4 & plVar3[1];
  lVar4 = *param_1;
  lVar5 = *(longlong *)(lVar4 + 0x10 + param_4 * 0x28);
  lVar13 = lVar4 + param_4 * 0x28;
  uVar12 = param_4;
  if (lVar5 == -2) {
    *(undefined8 *)(lVar13 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar13 + 0x18) = 0;
    uVar11 = ((undefined8 *)*param_3)[1];
    *(undefined8 *)(lVar13 + 0x20) = *(undefined8 *)*param_3;
    *(undefined8 *)(lVar13 + 0x28) = uVar11;
    lVar4 = *(longlong *)param_3[1];
    *(longlong *)(lVar13 + 0x30) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
  }
  else {
    do {
      uVar12 = uVar12 + 1 & plVar3[1];
      lVar2 = lVar4 + uVar12 * 0x28;
    } while (*(longlong *)(lVar4 + 0x10 + uVar12 * 0x28) != -2);
    if (*(ulonglong *)(lVar13 + 0x18) == param_4) {
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar13 + 0x18);
      uVar11 = *(undefined8 *)(lVar13 + 0x28);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar13 + 0x20);
      *(undefined8 *)(lVar2 + 0x28) = uVar11;
      lVar4 = *(longlong *)(lVar13 + 0x30);
      *(longlong *)(lVar2 + 0x30) = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      puVar6 = (undefined4 *)*param_3;
      uVar8 = puVar6[1];
      uVar9 = puVar6[2];
      uVar10 = puVar6[3];
      *(undefined4 *)(lVar13 + 0x20) = *puVar6;
      *(undefined4 *)(lVar13 + 0x24) = uVar8;
      *(undefined4 *)(lVar13 + 0x28) = uVar9;
      *(undefined4 *)(lVar13 + 0x2c) = uVar10;
      TRefCountPtr<FRHIIndexBuffer>::operator=(lVar13 + 0x30,*(undefined8 *)param_3[1]);
      *(ulonglong *)(lVar13 + 0x10) = uVar12;
    }
    else {
      lVar1 = *(ulonglong *)(lVar13 + 0x18) * 5 + 2;
      uVar7 = *(ulonglong *)(lVar4 + lVar1 * 8);
      while (uVar7 != param_4) {
        lVar1 = uVar7 * 5 + 2;
        uVar7 = *(ulonglong *)(lVar4 + lVar1 * 8);
      }
      *(longlong *)(lVar2 + 0x10) = lVar5;
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(lVar13 + 0x18);
      uVar11 = *(undefined8 *)(lVar13 + 0x28);
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar13 + 0x20);
      *(undefined8 *)(lVar2 + 0x28) = uVar11;
      lVar5 = *(longlong *)(lVar13 + 0x30);
      *(longlong *)(lVar2 + 0x30) = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      *(ulonglong *)(lVar4 + lVar1 * 8) = uVar12;
      puVar6 = (undefined4 *)*param_3;
      uVar8 = puVar6[1];
      uVar9 = puVar6[2];
      uVar10 = puVar6[3];
      *(undefined4 *)(lVar13 + 0x20) = *puVar6;
      *(undefined4 *)(lVar13 + 0x24) = uVar8;
      *(undefined4 *)(lVar13 + 0x28) = uVar9;
      *(undefined4 *)(lVar13 + 0x2c) = uVar10;
      TRefCountPtr<FRHIIndexBuffer>::operator=(lVar13 + 0x30,*(undefined8 *)param_3[1]);
      *(undefined8 *)(lVar13 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar13 + 0x18) = param_4;
  return lVar13 + 0x20;
}



// FUNCTION 14205c0f0 FUN_14205c0f0 body=424 status=ok
// SIG undefined FUN_14205c0f0(void)

void FUN_14205c0f0(longlong *param_1,undefined8 param_2,longlong *param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong lVar10;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    lVar8 = 8;
  }
  else {
    if ((ulonglong)(*plVar1 * 5) <= plVar1[1] * 4 + 4U) goto LAB_14205c144;
    lVar8 = plVar1[1] * 2 + 2;
  }
  FUN_14207db00(param_1,param_2,lVar8);
LAB_14205c144:
  plVar1 = (longlong *)*param_1;
  *plVar1 = *plVar1 + 1;
  param_4 = param_4 & plVar1[1];
  lVar8 = *param_1;
  lVar10 = param_4 * 0x38 + lVar8;
  lVar2 = *(longlong *)(lVar10 + 0x10);
  if (lVar2 == -2) {
    *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    uVar5 = ((undefined8 *)*param_3)[1];
    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)*param_3;
    *(undefined8 *)(lVar10 + 0x28) = uVar5;
    puVar3 = (undefined8 *)param_3[1];
    uVar5 = puVar3[1];
    *(undefined8 *)(lVar10 + 0x30) = *puVar3;
    *(undefined8 *)(lVar10 + 0x38) = uVar5;
    *(undefined8 *)(lVar10 + 0x40) = puVar3[2];
  }
  else {
    uVar6 = param_4;
    do {
      uVar6 = uVar6 + 1 & plVar1[1];
      plVar7 = (longlong *)(uVar6 * 0x38 + lVar8 + 0x10);
    } while (*plVar7 != -2);
    if (*(ulonglong *)(lVar10 + 0x18) == param_4) {
      *plVar7 = lVar2;
      plVar7[1] = *(longlong *)(lVar10 + 0x18);
      lVar8 = *(longlong *)(lVar10 + 0x28);
      plVar7[2] = *(longlong *)(lVar10 + 0x20);
      plVar7[3] = lVar8;
      lVar8 = *(longlong *)(lVar10 + 0x38);
      plVar7[4] = *(longlong *)(lVar10 + 0x30);
      plVar7[5] = lVar8;
      plVar7[6] = *(longlong *)(lVar10 + 0x40);
      lVar8 = ((longlong *)*param_3)[1];
      *(longlong *)(lVar10 + 0x20) = *(longlong *)*param_3;
      *(longlong *)(lVar10 + 0x28) = lVar8;
      puVar3 = (undefined8 *)param_3[1];
      uVar5 = puVar3[1];
      *(undefined8 *)(lVar10 + 0x30) = *puVar3;
      *(undefined8 *)(lVar10 + 0x38) = uVar5;
      *(undefined8 *)(lVar10 + 0x40) = puVar3[2];
      *(ulonglong *)(lVar10 + 0x10) = uVar6;
    }
    else {
      puVar9 = (ulonglong *)(lVar8 + 0x10 + *(ulonglong *)(lVar10 + 0x18) * 0x38);
      uVar4 = *puVar9;
      while (uVar4 != param_4) {
        puVar9 = (ulonglong *)(lVar8 + 0x10 + uVar4 * 0x38);
        uVar4 = *puVar9;
      }
      *plVar7 = lVar2;
      plVar7[1] = *(longlong *)(lVar10 + 0x18);
      lVar8 = *(longlong *)(lVar10 + 0x28);
      plVar7[2] = *(longlong *)(lVar10 + 0x20);
      plVar7[3] = lVar8;
      lVar8 = *(longlong *)(lVar10 + 0x38);
      plVar7[4] = *(longlong *)(lVar10 + 0x30);
      plVar7[5] = lVar8;
      plVar7[6] = *(longlong *)(lVar10 + 0x40);
      *puVar9 = uVar6;
      lVar8 = ((longlong *)*param_3)[1];
      *(longlong *)(lVar10 + 0x20) = *(longlong *)*param_3;
      *(longlong *)(lVar10 + 0x28) = lVar8;
      puVar3 = (undefined8 *)param_3[1];
      uVar5 = puVar3[1];
      *(undefined8 *)(lVar10 + 0x30) = *puVar3;
      *(undefined8 *)(lVar10 + 0x38) = uVar5;
      *(undefined8 *)(lVar10 + 0x40) = puVar3[2];
      *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
    }
  }
  *(ulonglong *)(lVar10 + 0x18) = param_4;
  return;
}



// FUNCTION 14205c2a0 FUN_14205c2a0 body=497 status=ok
// SIG undefined FUN_14205c2a0(void)

longlong * FUN_14205c2a0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  FUN_1432d7e70();
  plVar1 = param_1 + 0x239;
  *param_1 = (longlong)&PTR_FUN_144f89060;
  param_1[2] = (longlong)&PTR_LAB_144f893d8;
  param_1[0x23a] = 0;
  param_1[0x23b] = 0;
  *plVar1 = (longlong)&PTR_FUN_144f88ee8;
  param_1[0x23c] = 0;
  param_1[0x23d] = 0;
  param_1[0x23e] = 0;
  param_1[0x23f] = 0;
  lVar4 = (**(code **)(*param_1 + 0xb8))(param_1);
  param_1[0x240] = lVar4;
  param_1[0x241] = 0;
  *plVar1 = (longlong)&PTR__scalar_deleting_destructor__144f88f20;
  param_1[0x3f3] = 0;
  param_1[0x3f4] = 0;
  *(undefined1 *)(param_1 + 0x3fd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1fec) = 0;
  param_1[0x3f9] = 0;
  param_1[0x3fa] = 0;
  param_1[0x3fb] = 0;
  param_1[0x3fc] = 0;
  param_1[0x3f5] = 0;
  param_1[0x3f6] = 0;
  param_1[0x3f7] = 0;
  *(undefined4 *)(param_1 + 0x3f8) = 0;
  param_1[0x3f2] = (longlong)&PTR_FUN_144f88ec0;
  param_1[0x5f2] = (longlong)param_1;
  param_1[0x5f3] = 0;
  param_1[0x5f4] = 0;
  param_1[0x5f5] = 0;
  param_1[0x5f6] = 0;
  param_1[0x5f7] = 0;
  param_1[0x5fa] = 0;
  param_1[0x5fb] = 0;
  param_1[0x5fc] = 0;
  param_1[0x5fd] = 0;
  param_1[0x5fe] = 0;
  param_1[0x5ff] = 0;
  param_1[0x600] = 0;
  param_1[0x601] = 0;
  param_1[0x602] = 0;
  param_1[0x603] = 0;
  param_1[0x604] = 0;
  param_1[0x605] = 0;
  param_1[0x606] = 0;
  *(undefined1 *)(param_1 + 0x607) = 0;
  uVar5 = FCommandLine::Get();
  cVar2 = FParse::Param(uVar5,L"d3ddebug");
  if (cVar2 == '\0') {
    uVar5 = FCommandLine::Get();
    cVar2 = FParse::Param(uVar5,L"d3debug");
    if (cVar2 == '\0') {
      uVar5 = FCommandLine::Get();
      cVar2 = FParse::Param(uVar5,L"dxdebug");
      uVar3 = 0;
      if (cVar2 == '\0') goto LAB_14205c431;
    }
  }
  uVar3 = 1;
LAB_14205c431:
  *(undefined1 *)(param_1 + 0x607) = uVar3;
  param_1[0x608] = 0;
  param_1[0x609] = 0;
  param_1[0x60a] = 0;
  param_1[0x60b] = 0;
  param_1[0x60c] = 0;
  param_1[0x60d] = 0;
  FUN_1432d87a0(param_1,plVar1);
  FUN_1432d87a0(param_1,param_1 + 0x3f2);
  return param_1;
}



// FUNCTION 14205c4a0 FUN_14205c4a0 body=119 status=ok
// SIG undefined FUN_14205c4a0(void)

undefined8 * FUN_14205c4a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad4390;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205c520 FUN_14205c520 body=119 status=ok
// SIG undefined FUN_14205c520(void)

undefined8 * FUN_14205c520(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad44e0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205c5a0 FUN_14205c5a0 body=119 status=ok
// SIG undefined FUN_14205c5a0(void)

undefined8 * FUN_14205c5a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad4630;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205c620 FUN_14205c620 body=119 status=ok
// SIG undefined FUN_14205c620(void)

undefined8 * FUN_14205c620(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad4780;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205c6a0 FUN_14205c6a0 body=119 status=ok
// SIG undefined FUN_14205c6a0(void)

undefined8 * FUN_14205c6a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad48d0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205c720 FUN_14205c720 body=119 status=ok
// SIG undefined FUN_14205c720(void)

undefined8 * FUN_14205c720(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad4a20;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205c7a0 FUN_14205c7a0 body=119 status=ok
// SIG undefined FUN_14205c7a0(void)

undefined8 * FUN_14205c7a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad4b70;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205c820 FUN_14205c820 body=119 status=ok
// SIG undefined FUN_14205c820(void)

undefined8 * FUN_14205c820(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad4cc0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205c8a0 FUN_14205c8a0 body=119 status=ok
// SIG undefined FUN_14205c8a0(void)

undefined8 * FUN_14205c8a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad4e10;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205c920 FUN_14205c920 body=119 status=ok
// SIG undefined FUN_14205c920(void)

undefined8 * FUN_14205c920(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad4f60;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205c9a0 FUN_14205c9a0 body=119 status=ok
// SIG undefined FUN_14205c9a0(void)

undefined8 * FUN_14205c9a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad5740;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205ca20 FUN_14205ca20 body=119 status=ok
// SIG undefined FUN_14205ca20(void)

undefined8 * FUN_14205ca20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad5890;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205caa0 FUN_14205caa0 body=119 status=ok
// SIG undefined FUN_14205caa0(void)

undefined8 * FUN_14205caa0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad59e0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205cb20 FUN_14205cb20 body=119 status=ok
// SIG undefined FUN_14205cb20(void)

undefined8 * FUN_14205cb20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad5b30;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205cba0 FUN_14205cba0 body=119 status=ok
// SIG undefined FUN_14205cba0(void)

undefined8 * FUN_14205cba0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad5c80;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205cc20 FUN_14205cc20 body=119 status=ok
// SIG undefined FUN_14205cc20(void)

undefined8 * FUN_14205cc20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad5dd0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205cca0 FUN_14205cca0 body=119 status=ok
// SIG undefined FUN_14205cca0(void)

undefined8 * FUN_14205cca0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad5f20;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205cd20 FUN_14205cd20 body=119 status=ok
// SIG undefined FUN_14205cd20(void)

undefined8 * FUN_14205cd20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad6070;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205cda0 FUN_14205cda0 body=119 status=ok
// SIG undefined FUN_14205cda0(void)

undefined8 * FUN_14205cda0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad61c0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205ce20 FUN_14205ce20 body=119 status=ok
// SIG undefined FUN_14205ce20(void)

undefined8 * FUN_14205ce20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad6310;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205cea0 FUN_14205cea0 body=119 status=ok
// SIG undefined FUN_14205cea0(void)

undefined8 * FUN_14205cea0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad6460;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205cf20 FUN_14205cf20 body=119 status=ok
// SIG undefined FUN_14205cf20(void)

undefined8 * FUN_14205cf20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad65b0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205cfa0 FUN_14205cfa0 body=119 status=ok
// SIG undefined FUN_14205cfa0(void)

undefined8 * FUN_14205cfa0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad6700;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205d020 FUN_14205d020 body=119 status=ok
// SIG undefined FUN_14205d020(void)

undefined8 * FUN_14205d020(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad6850;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205d0a0 FUN_14205d0a0 body=119 status=ok
// SIG undefined FUN_14205d0a0(void)

undefined8 * FUN_14205d0a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad69a0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205d120 FUN_14205d120 body=119 status=ok
// SIG undefined FUN_14205d120(void)

undefined8 * FUN_14205d120(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad6af0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205d1a0 FUN_14205d1a0 body=119 status=ok
// SIG undefined FUN_14205d1a0(void)

undefined8 * FUN_14205d1a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad6c40;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205d220 FUN_14205d220 body=119 status=ok
// SIG undefined FUN_14205d220(void)

undefined8 * FUN_14205d220(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad6d90;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205d2a0 FUN_14205d2a0 body=119 status=ok
// SIG undefined FUN_14205d2a0(void)

undefined8 * FUN_14205d2a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad6ee0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205d320 FUN_14205d320 body=119 status=ok
// SIG undefined FUN_14205d320(void)

undefined8 * FUN_14205d320(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad7030;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205d3a0 FUN_14205d3a0 body=119 status=ok
// SIG undefined FUN_14205d3a0(void)

undefined8 * FUN_14205d3a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad7180;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205d420 FUN_14205d420 body=119 status=ok
// SIG undefined FUN_14205d420(void)

undefined8 * FUN_14205d420(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad72d0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205d4a0 FUN_14205d4a0 body=119 status=ok
// SIG undefined FUN_14205d4a0(void)

undefined8 * FUN_14205d4a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad7420;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205d520 FUN_14205d520 body=119 status=ok
// SIG undefined FUN_14205d520(void)

undefined8 * FUN_14205d520(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad7570;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205d5a0 FUN_14205d5a0 body=119 status=ok
// SIG undefined FUN_14205d5a0(void)

undefined8 * FUN_14205d5a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad76c0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205d620 FUN_14205d620 body=119 status=ok
// SIG undefined FUN_14205d620(void)

undefined8 * FUN_14205d620(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad7810;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205d6a0 FUN_14205d6a0 body=119 status=ok
// SIG undefined FUN_14205d6a0(void)

undefined8 * FUN_14205d6a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad7960;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205d720 FUN_14205d720 body=119 status=ok
// SIG undefined FUN_14205d720(void)

undefined8 * FUN_14205d720(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad7ab0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205d7a0 FUN_14205d7a0 body=119 status=ok
// SIG undefined FUN_14205d7a0(void)

undefined8 * FUN_14205d7a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad7c00;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205d820 FUN_14205d820 body=119 status=ok
// SIG undefined FUN_14205d820(void)

undefined8 * FUN_14205d820(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad7d50;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205d8a0 FUN_14205d8a0 body=119 status=ok
// SIG undefined FUN_14205d8a0(void)

undefined8 * FUN_14205d8a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad7ea0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205d920 FUN_14205d920 body=119 status=ok
// SIG undefined FUN_14205d920(void)

undefined8 * FUN_14205d920(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad7ff0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205d9a0 FUN_14205d9a0 body=119 status=ok
// SIG undefined FUN_14205d9a0(void)

undefined8 * FUN_14205d9a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad8140;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205da20 FUN_14205da20 body=119 status=ok
// SIG undefined FUN_14205da20(void)

undefined8 * FUN_14205da20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad8290;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205daa0 FUN_14205daa0 body=119 status=ok
// SIG undefined FUN_14205daa0(void)

undefined8 * FUN_14205daa0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad83e0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205db20 FUN_14205db20 body=119 status=ok
// SIG undefined FUN_14205db20(void)

undefined8 * FUN_14205db20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad8530;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205dba0 FUN_14205dba0 body=119 status=ok
// SIG undefined FUN_14205dba0(void)

undefined8 * FUN_14205dba0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad8680;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205dc20 FUN_14205dc20 body=119 status=ok
// SIG undefined FUN_14205dc20(void)

undefined8 * FUN_14205dc20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad87d0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205dca0 FUN_14205dca0 body=119 status=ok
// SIG undefined FUN_14205dca0(void)

undefined8 * FUN_14205dca0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad8920;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205dd20 FUN_14205dd20 body=119 status=ok
// SIG undefined FUN_14205dd20(void)

undefined8 * FUN_14205dd20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad8a70;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205dda0 FUN_14205dda0 body=119 status=ok
// SIG undefined FUN_14205dda0(void)

undefined8 * FUN_14205dda0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad8bc0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205de20 FUN_14205de20 body=119 status=ok
// SIG undefined FUN_14205de20(void)

undefined8 * FUN_14205de20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad8d10;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205dea0 FUN_14205dea0 body=119 status=ok
// SIG undefined FUN_14205dea0(void)

undefined8 * FUN_14205dea0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad8e60;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205df20 FUN_14205df20 body=119 status=ok
// SIG undefined FUN_14205df20(void)

undefined8 * FUN_14205df20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad8fb0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205dfa0 FUN_14205dfa0 body=119 status=ok
// SIG undefined FUN_14205dfa0(void)

undefined8 * FUN_14205dfa0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad9100;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205e020 FUN_14205e020 body=119 status=ok
// SIG undefined FUN_14205e020(void)

undefined8 * FUN_14205e020(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad9250;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205e0a0 FUN_14205e0a0 body=119 status=ok
// SIG undefined FUN_14205e0a0(void)

undefined8 * FUN_14205e0a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad93a0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205e120 FUN_14205e120 body=119 status=ok
// SIG undefined FUN_14205e120(void)

undefined8 * FUN_14205e120(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad94f0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205e1a0 FUN_14205e1a0 body=119 status=ok
// SIG undefined FUN_14205e1a0(void)

undefined8 * FUN_14205e1a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad9640;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205e220 FUN_14205e220 body=119 status=ok
// SIG undefined FUN_14205e220(void)

undefined8 * FUN_14205e220(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad9790;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205e2a0 FUN_14205e2a0 body=119 status=ok
// SIG undefined FUN_14205e2a0(void)

undefined8 * FUN_14205e2a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad98e0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205e320 FUN_14205e320 body=119 status=ok
// SIG undefined FUN_14205e320(void)

undefined8 * FUN_14205e320(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad9a30;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205e3a0 FUN_14205e3a0 body=119 status=ok
// SIG undefined FUN_14205e3a0(void)

undefined8 * FUN_14205e3a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad9b80;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205e420 FUN_14205e420 body=119 status=ok
// SIG undefined FUN_14205e420(void)

undefined8 * FUN_14205e420(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad9cd0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205e4a0 FUN_14205e4a0 body=119 status=ok
// SIG undefined FUN_14205e4a0(void)

undefined8 * FUN_14205e4a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad9e20;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205e520 FUN_14205e520 body=119 status=ok
// SIG undefined FUN_14205e520(void)

undefined8 * FUN_14205e520(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad9f70;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205e5a0 FUN_14205e5a0 body=119 status=ok
// SIG undefined FUN_14205e5a0(void)

undefined8 * FUN_14205e5a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ada0c0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205e620 FUN_14205e620 body=119 status=ok
// SIG undefined FUN_14205e620(void)

undefined8 * FUN_14205e620(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ada210;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205e6a0 FUN_14205e6a0 body=119 status=ok
// SIG undefined FUN_14205e6a0(void)

undefined8 * FUN_14205e6a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ada360;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205e720 FUN_14205e720 body=119 status=ok
// SIG undefined FUN_14205e720(void)

undefined8 * FUN_14205e720(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ada4b0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205e7a0 FUN_14205e7a0 body=119 status=ok
// SIG undefined FUN_14205e7a0(void)

undefined8 * FUN_14205e7a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ada600;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205e820 FUN_14205e820 body=119 status=ok
// SIG undefined FUN_14205e820(void)

undefined8 * FUN_14205e820(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ada750;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205e8a0 FUN_14205e8a0 body=119 status=ok
// SIG undefined FUN_14205e8a0(void)

undefined8 * FUN_14205e8a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ada8a0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205e920 FUN_14205e920 body=119 status=ok
// SIG undefined FUN_14205e920(void)

undefined8 * FUN_14205e920(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ada9f0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205e9a0 FUN_14205e9a0 body=119 status=ok
// SIG undefined FUN_14205e9a0(void)

undefined8 * FUN_14205e9a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146adab40;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205ea20 FUN_14205ea20 body=119 status=ok
// SIG undefined FUN_14205ea20(void)

undefined8 * FUN_14205ea20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146adac90;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205eaa0 FUN_14205eaa0 body=119 status=ok
// SIG undefined FUN_14205eaa0(void)

undefined8 * FUN_14205eaa0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146adade0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205eb20 FUN_14205eb20 body=119 status=ok
// SIG undefined FUN_14205eb20(void)

undefined8 * FUN_14205eb20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146adaf30;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205eba0 FUN_14205eba0 body=119 status=ok
// SIG undefined FUN_14205eba0(void)

undefined8 * FUN_14205eba0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146adb080;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205ec20 FUN_14205ec20 body=119 status=ok
// SIG undefined FUN_14205ec20(void)

undefined8 * FUN_14205ec20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146adb1d0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205eca0 FUN_14205eca0 body=119 status=ok
// SIG undefined FUN_14205eca0(void)

undefined8 * FUN_14205eca0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146adb470;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205ed20 FUN_14205ed20 body=119 status=ok
// SIG undefined FUN_14205ed20(void)

undefined8 * FUN_14205ed20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146adb5c0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205eda0 FUN_14205eda0 body=119 status=ok
// SIG undefined FUN_14205eda0(void)

undefined8 * FUN_14205eda0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146adb710;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205ee20 FUN_14205ee20 body=119 status=ok
// SIG undefined FUN_14205ee20(void)

undefined8 * FUN_14205ee20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146adb860;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205eea0 FUN_14205eea0 body=119 status=ok
// SIG undefined FUN_14205eea0(void)

undefined8 * FUN_14205eea0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad50b0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205ef20 FUN_14205ef20 body=119 status=ok
// SIG undefined FUN_14205ef20(void)

undefined8 * FUN_14205ef20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146adb9b0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205efa0 FUN_14205efa0 body=119 status=ok
// SIG undefined FUN_14205efa0(void)

undefined8 * FUN_14205efa0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146adbb00;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205f020 FUN_14205f020 body=119 status=ok
// SIG undefined FUN_14205f020(void)

undefined8 * FUN_14205f020(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146adbc50;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205f0a0 FUN_14205f0a0 body=119 status=ok
// SIG undefined FUN_14205f0a0(void)

undefined8 * FUN_14205f0a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146adbda0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205f120 FUN_14205f120 body=119 status=ok
// SIG undefined FUN_14205f120(void)

undefined8 * FUN_14205f120(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146adbef0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205f1a0 FUN_14205f1a0 body=119 status=ok
// SIG undefined FUN_14205f1a0(void)

undefined8 * FUN_14205f1a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146adc040;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205f220 FUN_14205f220 body=119 status=ok
// SIG undefined FUN_14205f220(void)

undefined8 * FUN_14205f220(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146adc190;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205f2a0 FUN_14205f2a0 body=119 status=ok
// SIG undefined FUN_14205f2a0(void)

undefined8 * FUN_14205f2a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146adc2e0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205f320 FUN_14205f320 body=119 status=ok
// SIG undefined FUN_14205f320(void)

undefined8 * FUN_14205f320(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146adc430;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205f3a0 FUN_14205f3a0 body=119 status=ok
// SIG undefined FUN_14205f3a0(void)

undefined8 * FUN_14205f3a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146adc580;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205f420 FUN_14205f420 body=119 status=ok
// SIG undefined FUN_14205f420(void)

undefined8 * FUN_14205f420(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146adc6d0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205f4a0 FUN_14205f4a0 body=119 status=ok
// SIG undefined FUN_14205f4a0(void)

undefined8 * FUN_14205f4a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146adc820;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205f520 FUN_14205f520 body=119 status=ok
// SIG undefined FUN_14205f520(void)

undefined8 * FUN_14205f520(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146adc970;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205f5a0 FUN_14205f5a0 body=119 status=ok
// SIG undefined FUN_14205f5a0(void)

undefined8 * FUN_14205f5a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146adcac0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205f620 FUN_14205f620 body=119 status=ok
// SIG undefined FUN_14205f620(void)

undefined8 * FUN_14205f620(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146adcc10;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205f6a0 FUN_14205f6a0 body=119 status=ok
// SIG undefined FUN_14205f6a0(void)

undefined8 * FUN_14205f6a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146adcd60;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205f720 FUN_14205f720 body=119 status=ok
// SIG undefined FUN_14205f720(void)

undefined8 * FUN_14205f720(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad5200;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205f7a0 FUN_14205f7a0 body=119 status=ok
// SIG undefined FUN_14205f7a0(void)

undefined8 * FUN_14205f7a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146adceb0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205f820 FUN_14205f820 body=119 status=ok
// SIG undefined FUN_14205f820(void)

undefined8 * FUN_14205f820(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146add000;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205f8a0 FUN_14205f8a0 body=119 status=ok
// SIG undefined FUN_14205f8a0(void)

undefined8 * FUN_14205f8a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146add150;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205f920 FUN_14205f920 body=119 status=ok
// SIG undefined FUN_14205f920(void)

undefined8 * FUN_14205f920(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146add2a0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205f9a0 FUN_14205f9a0 body=119 status=ok
// SIG undefined FUN_14205f9a0(void)

undefined8 * FUN_14205f9a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146add3f0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205fa20 FUN_14205fa20 body=119 status=ok
// SIG undefined FUN_14205fa20(void)

undefined8 * FUN_14205fa20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146add540;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205faa0 FUN_14205faa0 body=119 status=ok
// SIG undefined FUN_14205faa0(void)

undefined8 * FUN_14205faa0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146add690;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205fb20 FUN_14205fb20 body=119 status=ok
// SIG undefined FUN_14205fb20(void)

undefined8 * FUN_14205fb20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146add7e0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205fba0 FUN_14205fba0 body=119 status=ok
// SIG undefined FUN_14205fba0(void)

undefined8 * FUN_14205fba0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146add930;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205fc20 FUN_14205fc20 body=119 status=ok
// SIG undefined FUN_14205fc20(void)

undefined8 * FUN_14205fc20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146adda80;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205fca0 FUN_14205fca0 body=119 status=ok
// SIG undefined FUN_14205fca0(void)

undefined8 * FUN_14205fca0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146addbd0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205fd20 FUN_14205fd20 body=119 status=ok
// SIG undefined FUN_14205fd20(void)

undefined8 * FUN_14205fd20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146addd20;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205fda0 FUN_14205fda0 body=119 status=ok
// SIG undefined FUN_14205fda0(void)

undefined8 * FUN_14205fda0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146adde70;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205fe20 FUN_14205fe20 body=119 status=ok
// SIG undefined FUN_14205fe20(void)

undefined8 * FUN_14205fe20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146addfc0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205fea0 FUN_14205fea0 body=119 status=ok
// SIG undefined FUN_14205fea0(void)

undefined8 * FUN_14205fea0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad5350;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205ff20 FUN_14205ff20 body=119 status=ok
// SIG undefined FUN_14205ff20(void)

undefined8 * FUN_14205ff20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad54a0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 14205ffa0 FUN_14205ffa0 body=119 status=ok
// SIG undefined FUN_14205ffa0(void)

undefined8 * FUN_14205ffa0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad55f0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 142060020 FUN_142060020 body=119 status=ok
// SIG undefined FUN_142060020(void)

undefined8 * FUN_142060020(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146acea50;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 1420600a0 FUN_1420600a0 body=119 status=ok
// SIG undefined FUN_1420600a0(void)

undefined8 * FUN_1420600a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146aceba0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 142060120 FUN_142060120 body=119 status=ok
// SIG undefined FUN_142060120(void)

undefined8 * FUN_142060120(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146acecf0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 1420601a0 FUN_1420601a0 body=119 status=ok
// SIG undefined FUN_1420601a0(void)

undefined8 * FUN_1420601a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146acee40;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 142060220 FUN_142060220 body=119 status=ok
// SIG undefined FUN_142060220(void)

undefined8 * FUN_142060220(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146acfa10;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 1420602a0 FUN_1420602a0 body=119 status=ok
// SIG undefined FUN_1420602a0(void)

undefined8 * FUN_1420602a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146acfb60;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 142060320 FUN_142060320 body=119 status=ok
// SIG undefined FUN_142060320(void)

undefined8 * FUN_142060320(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146acfcb0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 1420603a0 FUN_1420603a0 body=119 status=ok
// SIG undefined FUN_1420603a0(void)

undefined8 * FUN_1420603a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146acfe00;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 142060420 FUN_142060420 body=119 status=ok
// SIG undefined FUN_142060420(void)

undefined8 * FUN_142060420(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad0490;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 1420604a0 FUN_1420604a0 body=119 status=ok
// SIG undefined FUN_1420604a0(void)

undefined8 * FUN_1420604a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad0730;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 142060520 FUN_142060520 body=119 status=ok
// SIG undefined FUN_142060520(void)

undefined8 * FUN_142060520(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad09d0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 1420605a0 FUN_1420605a0 body=119 status=ok
// SIG undefined FUN_1420605a0(void)

undefined8 * FUN_1420605a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad0b20;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 142060620 FUN_142060620 body=119 status=ok
// SIG undefined FUN_142060620(void)

undefined8 * FUN_142060620(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad0c70;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 1420606a0 FUN_1420606a0 body=119 status=ok
// SIG undefined FUN_1420606a0(void)

undefined8 * FUN_1420606a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad0dc0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 142060720 FUN_142060720 body=119 status=ok
// SIG undefined FUN_142060720(void)

undefined8 * FUN_142060720(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad1450;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 1420607a0 FUN_1420607a0 body=119 status=ok
// SIG undefined FUN_1420607a0(void)

undefined8 * FUN_1420607a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad16f0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 142060820 FUN_142060820 body=119 status=ok
// SIG undefined FUN_142060820(void)

undefined8 * FUN_142060820(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad1990;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 1420608a0 FUN_1420608a0 body=119 status=ok
// SIG undefined FUN_1420608a0(void)

undefined8 * FUN_1420608a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad1ae0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 142060920 FUN_142060920 body=119 status=ok
// SIG undefined FUN_142060920(void)

undefined8 * FUN_142060920(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad1c30;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 1420609a0 FUN_1420609a0 body=119 status=ok
// SIG undefined FUN_1420609a0(void)

undefined8 * FUN_1420609a0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad1d80;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 142060a20 FUN_142060a20 body=119 status=ok
// SIG undefined FUN_142060a20(void)

undefined8 * FUN_142060a20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad2410;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 142060aa0 FUN_142060aa0 body=119 status=ok
// SIG undefined FUN_142060aa0(void)

undefined8 * FUN_142060aa0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad26b0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 142060b20 FUN_142060b20 body=119 status=ok
// SIG undefined FUN_142060b20(void)

undefined8 * FUN_142060b20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad2aa0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 142060ba0 FUN_142060ba0 body=119 status=ok
// SIG undefined FUN_142060ba0(void)

undefined8 * FUN_142060ba0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad2bf0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 142060c20 FUN_142060c20 body=119 status=ok
// SIG undefined FUN_142060c20(void)

undefined8 * FUN_142060c20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad2fe0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 142060ca0 FUN_142060ca0 body=119 status=ok
// SIG undefined FUN_142060ca0(void)

undefined8 * FUN_142060ca0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad3130;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 142060d20 FUN_142060d20 body=119 status=ok
// SIG undefined FUN_142060d20(void)

undefined8 * FUN_142060d20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad3520;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 142060da0 FUN_142060da0 body=119 status=ok
// SIG undefined FUN_142060da0(void)

undefined8 * FUN_142060da0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad3670;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 142060e20 FUN_142060e20 body=119 status=ok
// SIG undefined FUN_142060e20(void)

undefined8 * FUN_142060e20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad3a60;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 142060ea0 FUN_142060ea0 body=119 status=ok
// SIG undefined FUN_142060ea0(void)

undefined8 * FUN_142060ea0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146ad3bb0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 142060f20 FUN_142060f20 body=119 status=ok
// SIG undefined FUN_142060f20(void)

undefined8 * FUN_142060f20(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146acf4d0;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 142060fa0 FUN_142060fa0 body=119 status=ok
// SIG undefined FUN_142060fa0(void)

undefined8 * FUN_142060fa0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined *local_18;
  undefined4 local_10;
  
  local_18 = &DAT_146acf770;
  local_10 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_2 + 0x38),local_res8,&local_18);
  puVar2 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar2 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_2 + 0x38));
  }
  puVar1 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  *param_1 = *puVar1;
  return param_1;
}



// FUNCTION 142061020 FUN_142061020 body=312 status=ok
// SIG undefined FUN_142061020(void)

undefined8 * FUN_142061020(undefined8 *param_1,longlong param_2)

{
  undefined8 **ppuVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  undefined8 *local_res10;
  
  param_1[1] = 0;
  ppuVar1 = (undefined8 **)(param_1 + 1);
  param_1[2] = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__144f89878;
  if (param_2 != 0) {
    (**(code **)(*DAT_146ab6358 + 0x350))
              (DAT_146ab6358,&local_res10,*(undefined8 *)(param_2 + 0xb8));
    if (ppuVar1 != &local_res10) {
      puVar4 = *ppuVar1;
      *ppuVar1 = local_res10;
      local_res10 = (undefined8 *)0x0;
      if (puVar4 == (undefined8 *)0x0) {
        return param_1;
      }
      LOCK();
      piVar2 = (int *)(puVar4 + 1);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        if ((*(char *)(puVar4 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')
            ))) {
          LOCK();
          bVar6 = *(int *)((longlong)puVar4 + 0xc) == 0;
          if (bVar6) {
            *(int *)((longlong)puVar4 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar6) {
            TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar4);
          }
        }
        else {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
    puVar4 = local_res10;
    if (local_res10 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_res10 + 1);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        if ((*(char *)(local_res10 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')
            ))) {
          LOCK();
          bVar6 = *(int *)((longlong)puVar4 + 0xc) == 0;
          if (bVar6) {
            *(int *)((longlong)puVar4 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar6) {
            TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar4);
          }
        }
        else {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 142061160 FUN_142061160 body=1818 status=ok
// SIG undefined FUN_142061160(void)

undefined8 * FUN_142061160(undefined8 *param_1,int param_2,longlong param_3)

{
  wchar_t *pwVar1;
  char *pcVar2;
  byte bVar3;
  longlong lVar4;
  undefined **ppuVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  short *psVar10;
  uint uVar11;
  uint uVar12;
  undefined2 *puVar13;
  int iVar14;
  undefined2 *puVar15;
  int iVar16;
  ulonglong uVar17;
  undefined2 *puVar18;
  uint local_res8;
  short local_res10;
  undefined2 *local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined8 local_90;
  undefined **local_88;
  undefined2 *local_80;
  undefined8 local_78;
  undefined2 *local_70;
  undefined2 *local_68;
  uint local_60;
  int local_5c;
  longlong local_58;
  undefined2 *local_50;
  
  FGlobalShader::FGlobalShader(param_1,param_3);
  uVar17 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144f88c50;
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
  param_1[0x18] = *(undefined8 *)(&DAT_1464fa3b0 + (longlong)param_2 * 8);
  local_res8 = 0;
  local_58 = 0;
  local_88 = &PTR_s_alphatex_1464f07b0;
  do {
    lVar8 = local_58;
    if (-1 < *(short *)(local_58 + *(longlong *)(param_1[0x18] + 0x10))) {
      pcVar2 = *local_88;
      local_70 = (undefined2 *)0x0;
      local_68 = (undefined2 *)0x0;
      local_5c = 0;
      puVar15 = (undefined2 *)0x0;
      uVar12 = 0;
      if ((pcVar2 != (char *)0x0) && (puVar15 = (undefined2 *)0x0, uVar12 = 0, *pcVar2 != '\0')) {
        lVar7 = -1;
        do {
          lVar4 = lVar7 + 1;
          lVar7 = lVar7 + 1;
        } while (pcVar2[lVar4] != '\0');
        uVar11 = (int)lVar7 + 1;
        local_60 = uVar11;
        if (0 < (int)uVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
        }
        uVar12 = local_60;
        puVar15 = local_68;
        local_70 = local_68;
        FGenericPlatformString::Convert<char,wchar_t>(local_68,uVar11,pcVar2,uVar11,0x3f);
        uVar17 = (ulonglong)local_res8;
      }
      psVar10 = (short *)(*(longlong *)(param_1[0x18] + 0x10) + lVar8);
      if ((char)psVar10[4] == '\0') {
        puVar13 = &DAT_143f3eda8;
        if (uVar12 != 0) {
          puVar13 = puVar15;
        }
        FShaderParameter::Bind
                  (uVar17 * 6 + 200 + (longlong)param_1,*(undefined8 *)(param_3 + 0x18),puVar13,0);
      }
      else if ((psVar10[3] < 2) ||
              ((((((bVar3 = (byte)*(undefined4 *)(param_3 + 8), (bVar3 & 0xf8) != 0x58 &&
                   ((bVar3 & 0xf8) != 0x60)) && ((bVar3 & 0xf8) != 0x90)) &&
                 (((bVar3 & 0xf8) != 0x80 && ((bVar3 & 0xf8) != 0xb0)))) &&
                (((bVar3 & 0xf8) != 0xb8 && (((bVar3 & 0xf8) != 0xd8 && ((bVar3 & 0xf8) != 0xa0)))))
                ) && (((bVar3 & 0xf8) != 0xe0 &&
                      (((((bVar3 & 0xf8) != 0x98 && ((bVar3 & 0xf8) != 0x88)) &&
                        ((bVar3 & 0xf8) != 0xa8)) && ((bVar3 & 0xf8) != 0xe8)))))))) {
        puVar13 = &DAT_143f3eda8;
        if (uVar12 != 0) {
          puVar13 = puVar15;
        }
        FShaderResourceParameter::Bind
                  ((longlong)param_1 + (longlong)*psVar10 * 4 + 0x170,
                   *(undefined8 *)(param_3 + 0x18),puVar13,0);
        local_98 = (undefined2 *)0x0;
        local_90._0_4_ = uVar12;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                  (&local_98,(8 - (uint)(uVar12 != 0)) + uVar12,0);
        puVar13 = local_98;
        _guard_xfg_dispatch_icall_nop(local_98,puVar15,(longlong)(int)uVar12 * 2);
        uVar12 = (uint)local_90;
        lVar7 = (longlong)(int)(uint)local_90;
        iVar6 = (8 - (uint)((uint)local_90 != 0)) + (uint)local_90;
        local_90 = CONCAT44(local_90._4_4_,iVar6);
        if (local_90._4_4_ < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,uVar12);
          puVar13 = local_98;
          iVar6 = (uint)local_90;
        }
        local_98 = (undefined2 *)0x0;
        local_90 = 0;
        lVar7 = lVar7 - (ulonglong)(uVar12 != 0);
        pwVar1 = puVar13 + lVar7;
        pwVar1[0] = L'S';
        pwVar1[1] = L'a';
        pwVar1[2] = L'm';
        pwVar1[3] = L'p';
        *(undefined4 *)(puVar13 + lVar7 + 4) = 0x65006c;
        puVar18 = &DAT_143f3eda8;
        if (iVar6 != 0) {
          puVar18 = puVar13;
        }
        puVar13[lVar7 + 6] = 0x72;
        puVar13[lVar7 + 7] = 0;
        FShaderResourceParameter::Bind
                  ((longlong)param_1 +
                   (longlong)*(short *)(*(longlong *)(param_1[0x18] + 0x10) + lVar8) * 4 + 0x170,
                   *(undefined8 *)(param_3 + 0x18),puVar18,0);
        if (puVar13 != (undefined2 *)0x0) {
          FMemory::Free(puVar13);
        }
      }
      else {
        local_res10 = 0;
        if (0 < psVar10[3]) {
          do {
            ppuVar5 = local_88;
            iVar6 = (int)local_res10;
            local_b8 = (undefined2 *)0x0;
            local_b0 = 0;
            FString::AppendInt(&local_b8,iVar6);
            pcVar2 = *ppuVar5;
            local_80 = (undefined2 *)0x0;
            local_78 = 0;
            puVar13 = (undefined2 *)0x0;
            if ((pcVar2 == (char *)0x0) || (puVar13 = (undefined2 *)0x0, *pcVar2 == '\0')) {
LAB_14206157d:
              puVar15 = local_b8;
              uVar11 = (uint)local_b0;
              iVar9 = local_b0._4_4_;
              local_b8 = (undefined2 *)0x0;
              local_b0 = 0;
            }
            else {
              lVar8 = -1;
              do {
                lVar7 = lVar8 + 1;
                lVar8 = lVar8 + 1;
              } while (pcVar2[lVar7] != '\0');
              uVar11 = (int)lVar8 + 1;
              local_78 = (ulonglong)uVar11;
              uVar12 = uVar11;
              iVar9 = 0;
              if (0 < (int)uVar11) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,0);
                uVar12 = (uint)local_78;
                iVar9 = local_78._4_4_;
              }
              puVar15 = local_80;
              FGenericPlatformString::Convert<char,wchar_t>(local_80,uVar11,pcVar2,uVar11,0x3f);
              puVar13 = puVar15;
              if ((int)uVar12 < 2) goto LAB_14206157d;
              if ((uint)local_b0 == 0) {
                iVar16 = 0;
              }
              else {
                iVar16 = (uint)local_b0 + -1;
              }
              puVar13 = (undefined2 *)0x0;
              if ((uVar12 != 0) || (iVar14 = 1, iVar16 == 0)) {
                iVar14 = 0;
              }
              local_78 = 0;
              local_c8 = puVar15;
              local_c0._4_4_ = iVar9;
              if (iVar9 < (int)(uVar12 + iVar14 + iVar16)) {
                local_c0._0_4_ = uVar12;
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c8);
                uVar12 = (uint)local_c0;
              }
              local_50 = local_b8;
              puVar15 = local_c8;
              uVar11 = uVar12;
              iVar9 = local_c0._4_4_;
              if (iVar16 != 0) {
                local_c0._0_4_ = iVar16 + (uint)(uVar12 == 0) + uVar12;
                if (local_c0._4_4_ < (int)(uint)local_c0) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,uVar12);
                }
                iVar9 = local_c0._4_4_;
                uVar11 = (uint)local_c0;
                puVar15 = local_c8;
                puVar18 = local_c8 + ((longlong)(int)uVar12 - (ulonglong)(uVar12 != 0));
                _guard_xfg_dispatch_icall_nop(puVar18,local_50,(longlong)iVar16 * 2);
                puVar18[iVar16] = 0;
              }
              local_c8 = (undefined2 *)0x0;
              local_c0 = 0;
            }
            if (local_70 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            local_70 = puVar15;
            local_60 = uVar11;
            local_5c = iVar9;
            if (puVar13 != (undefined2 *)0x0) {
              FMemory::Free(puVar13);
            }
            if (local_b8 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            lVar8 = local_58;
            puVar13 = &DAT_143f3eda8;
            if (uVar11 != 0) {
              puVar13 = puVar15;
            }
            FShaderResourceParameter::Bind
                      ((longlong)param_1 +
                       (longlong)
                       (*(short *)(*(longlong *)(param_1[0x18] + 0x10) + local_58) + iVar6) * 4 +
                       0x170,*(undefined8 *)(param_3 + 0x18),puVar13,0);
            local_a8 = (undefined2 *)0x0;
            local_a0._0_4_ = uVar11;
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                      (&local_a8,(8 - (uint)(uVar11 != 0)) + uVar11,0);
            puVar13 = local_a8;
            _guard_xfg_dispatch_icall_nop(local_a8,puVar15,(longlong)(int)uVar11 * 2);
            uVar12 = (uint)local_a0;
            lVar7 = (longlong)(int)(uint)local_a0;
            iVar9 = (8 - (uint)((uint)local_a0 != 0)) + (uint)local_a0;
            local_a0 = CONCAT44(local_a0._4_4_,iVar9);
            if (local_a0._4_4_ < iVar9) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,uVar12);
              puVar13 = local_a8;
              iVar9 = (uint)local_a0;
            }
            local_a8 = (undefined2 *)0x0;
            local_a0 = 0;
            builtin_wcsncpy(puVar13 + (lVar7 - (ulonglong)(uVar12 != 0)),L"Sampler",8);
            puVar18 = &DAT_143f3eda8;
            if (iVar9 != 0) {
              puVar18 = puVar13;
            }
            FShaderResourceParameter::Bind
                      ((longlong)param_1 +
                       (longlong)(*(short *)(*(longlong *)(param_1[0x18] + 0x10) + lVar8) + iVar6) *
                       4 + 0x170,*(undefined8 *)(param_3 + 0x18),puVar18,0);
            if (puVar13 != (undefined2 *)0x0) {
              FMemory::Free(puVar13);
            }
            local_res10 = local_res10 + 1;
          } while (local_res10 < *(short *)(*(longlong *)(param_1[0x18] + 0x10) + 6 + lVar8));
        }
      }
      if (puVar15 != (undefined2 *)0x0) {
        FMemory::Free(puVar15);
      }
      uVar17 = (ulonglong)local_res8;
    }
    local_res8 = (int)uVar17 + 1;
    uVar17 = (ulonglong)local_res8;
    local_88 = local_88 + 1;
    local_58 = lVar8 + 10;
    if (0x1b < local_res8) {
      return param_1;
    }
  } while( true );
}



// FUNCTION 142061880 FUN_142061880 body=196 status=ok
// SIG undefined FUN_142061880(void)

undefined8 * FUN_142061880(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144f88c50;
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
  return param_1;
}



// FUNCTION 142061950 FUN_142061950 body=960 status=ok
// SIG undefined FUN_142061950(void)

undefined8 * FUN_142061950(undefined8 *param_1)

{
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_14205c2a0();
  local_58 = 0x300000;
  *param_1 = &PTR_FUN_144f89418;
  local_50 = 0x1000000;
  param_1[2] = &PTR_LAB_144f897b0;
  local_48 = 0x300000;
  local_40 = 0xa00000;
  local_38 = 0x200000;
  local_30 = 0x40000;
  local_28 = 0x18;
  local_24 = 5;
  local_20 = 0x2000;
  local_1c = 0x4000;
  local_18 = 0x1800;
  FUN_142061d10(param_1 + 0x60e,DAT_146b62f28,&local_58);
  FUN_1432c1f10(param_1 + 0x651);
  *(undefined4 *)(param_1 + 0x66b) = 0xffffffff;
  param_1[0x66a] = 0;
  param_1[0x651] = &PTR_FUN_144f88f58;
  param_1[0x66c] = 0;
  *(undefined1 *)(param_1 + 0x67a) = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x66e,0,0x60);
  param_1[0x67b] = 0;
  param_1[0x66d] = &PTR_FUN_144f88fe8;
  param_1[0x67d] = 0;
  param_1[0x67e] = 0;
  param_1[0x67f] = 0;
  param_1[0x681] = 0;
  param_1[0x682] = 0;
  param_1[0x683] = 0;
  param_1[0x684] = 0;
  param_1[0x685] = 0;
  param_1[0x686] = 0;
  param_1[0x687] = 0;
  param_1[0x688] = 0;
  param_1[0x689] = 0;
  param_1[0x68a] = 0;
  param_1[0x68b] = 0;
  param_1[0x68c] = 0;
  param_1[0x68d] = 0;
  param_1[0x68e] = 0;
  param_1[0x68f] = 0;
  param_1[0x690] = 0;
  param_1[0x691] = 0;
  param_1[0x692] = 0;
  param_1[0x693] = 0;
  param_1[0x694] = 0;
  param_1[0x695] = 0;
  param_1[0x696] = 0;
  param_1[0x697] = 0;
  param_1[0x698] = 0;
  param_1[0x699] = 0;
  param_1[0x69a] = 0;
  param_1[0x69b] = 0;
  param_1[0x69c] = 0;
  param_1[0x69d] = 0;
  param_1[0x69e] = 0;
  param_1[0x69f] = 0;
  param_1[0x6a0] = 0;
  param_1[0x6a1] = 0;
  param_1[0x6a2] = 0;
  param_1[0x6a3] = 0;
  param_1[0x6a4] = 0;
  param_1[0x6a5] = 0;
  param_1[0x6a6] = 0;
  param_1[0x6a7] = 0;
  param_1[0x6a8] = 0;
  param_1[0x6a9] = 0;
  param_1[0x6aa] = 0;
  param_1[0x6ab] = 0;
  param_1[0x6ac] = 0;
  param_1[0x6ad] = 0;
  param_1[0x6ae] = 0;
  param_1[0x6af] = 0;
  param_1[0x6b0] = 0;
  param_1[0x6b1] = 0;
  param_1[0x6b2] = 0;
  param_1[0x6b3] = 0;
  param_1[0x6b4] = 0;
  param_1[0x6b5] = 0;
  param_1[0x6b6] = 0;
  param_1[0x6b7] = 0;
  param_1[0x6b8] = 0;
  param_1[0x6b9] = 0;
  param_1[0x6ba] = 0;
  param_1[0x6bb] = 0;
  param_1[0x6bc] = 0;
  param_1[0x6bd] = 0;
  param_1[0x6be] = 0;
  param_1[0x6bf] = 0;
  param_1[0x6c0] = 0;
  param_1[0x6c1] = 0;
  param_1[0x6c2] = 0;
  param_1[0x6c3] = 0;
  param_1[0x6c4] = 0;
  param_1[0x6c5] = 0;
  param_1[0x6c6] = 0;
  param_1[0x6c7] = 0;
  param_1[0x6c8] = 0;
  param_1[0x6c9] = 0;
  param_1[0x6ca] = 0;
  param_1[0x6cb] = 0;
  param_1[0x6cc] = 0;
  param_1[0x6cd] = 0;
  param_1[0x6ce] = 0;
  param_1[0x6cf] = 0;
  param_1[0x6d0] = 0;
  param_1[0x6d1] = 0;
  param_1[0x6d2] = 0;
  param_1[0x6d3] = 0;
  param_1[0x6d4] = 0;
  param_1[0x6d5] = 0;
  param_1[0x6d6] = 0;
  param_1[0x6d7] = 0;
  param_1[0x6d8] = 0;
  param_1[0x6d9] = 0;
  param_1[0x6da] = 0;
  param_1[0x6db] = 0;
  param_1[0x6dc] = 0;
  param_1[0x6dd] = 0;
  param_1[0x6de] = 0;
  return param_1;
}



// FUNCTION 142061d10 FUN_142061d10 body=608 status=ok
// SIG undefined FUN_142061d10(void)

undefined8 * FUN_142061d10(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  FUN_1432f6b30();
  puVar4 = (undefined8 *)0x0;
  *param_1 = &PTR__scalar_deleting_destructor__144f88e00;
  param_1[1] = &PTR_LAB_144f88e98;
  param_1[0x16] = param_1;
  param_1[0x17] = param_1 + 0x16;
  param_1[0x18] = param_1 + 0x16;
  param_1[0x19] = 0;
  param_1[0x1b] = 0xffffffffffffffff;
  puVar2 = param_1 + 0x19;
  if (param_1 + 0x1a == (undefined8 *)0x0) {
    puVar2 = puVar4;
  }
  param_1[0x1a] = puVar2;
  param_1[0x1b] = puVar2;
  param_1[0x1c] = 0;
  puVar2 = param_1 + 0x1c;
  if (param_1 + 0x1d == (undefined8 *)0x0) {
    puVar2 = puVar4;
  }
  param_1[0x1e] = 0xffffffffffffffff;
  param_1[0x1d] = puVar2;
  param_1[0x1e] = puVar2;
  param_1[0x1f] = 0;
  puVar2 = param_1 + 0x1f;
  if (param_1 + 0x20 == (undefined8 *)0x0) {
    puVar2 = puVar4;
  }
  param_1[0x21] = 0xffffffffffffffff;
  param_1[0x20] = puVar2;
  param_1[0x21] = puVar2;
  param_1[0x22] = 0;
  puVar2 = param_1 + 0x22;
  if (param_1 + 0x23 == (undefined8 *)0x0) {
    puVar2 = puVar4;
  }
  param_1[0x24] = 0xffffffffffffffff;
  param_1[0x23] = puVar2;
  param_1[0x24] = puVar2;
  param_1[0x25] = 0;
  puVar2 = param_1 + 0x25;
  if (param_1 + 0x26 == (undefined8 *)0x0) {
    puVar2 = puVar4;
  }
  param_1[0x27] = 0xffffffffffffffff;
  param_1[0x26] = puVar2;
  param_1[0x27] = puVar2;
  param_1[0x28] = 0;
  uVar1 = *(ulonglong *)(param_3 + 0x10);
  param_1[0x29] = &PTR_FUN_144f88d58;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  uVar3 = ((uVar1 >> 4) * 5) / 9;
  FUN_1432f41c0(param_1 + 0x2d,param_2);
  param_1[0x30] = uVar3 * 0x10;
  param_1[0x29] = &PTR_FUN_144f88de0;
  param_1[0x31] = 0;
  uVar1 = *(ulonglong *)(param_3 + 0x10);
  param_1[0x32] = &PTR_FUN_144f88d58;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FUN_1432f41c0(param_1 + 0x36,param_2);
  param_1[0x32] = &PTR_FUN_144f88df0;
  param_1[0x39] = (uVar1 & 0xfffffffffffffff0) + uVar3 * -0x10;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = param_1 + 0x3d;
  param_1[0x3f] = param_1 + 0x3d;
  param_1[0x40] = 0;
  param_1[0x41] = param_1 + 0x40;
  param_1[0x42] = param_1 + 0x40;
  return param_1;
}



// FUNCTION 142061f70 FUN_142061f70 body=443 status=ok
// SIG undefined FUN_142061f70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_142061f70(undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 **ppuVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  undefined1 auStack_b8 [32];
  undefined8 *local_98 [2];
  undefined8 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  ppuVar2 = (undefined8 **)(param_1 + 0x23);
  param_1[1] = 0;
  *param_1 = &PTR_FUN_144f70a50;
  *param_1 = &PTR_FUN_144f88eb8;
  local_88 = param_1 + 2;
  local_78 = 0;
  local_68 = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[0x22] = 0;
  *ppuVar2 = (undefined8 *)0x0;
  local_58 = 0;
  local_48 = 0;
  local_80 = param_3;
  FUN_14205bac0(param_2,&local_88);
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x24) = *param_2;
  (**(code **)(*DAT_146ab6358 + 0x508))(DAT_146ab6358,local_98,&DAT_146ab6e78,local_88);
  if (ppuVar2 != local_98) {
    puVar4 = *ppuVar2;
    *ppuVar2 = local_98[0];
    local_98[0] = (undefined8 *)0x0;
    if (puVar4 == (undefined8 *)0x0) {
      return param_1;
    }
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      if ((*(char *)(puVar4 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))
         ) {
        LOCK();
        bVar6 = *(int *)((longlong)puVar4 + 0xc) == 0;
        if (bVar6) {
          *(int *)((longlong)puVar4 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar6) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar4);
        }
      }
      else {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
  }
  puVar4 = local_98[0];
  if (local_98[0] != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_98[0] + 1);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      if ((*(char *)(local_98[0] + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))
         ) {
        LOCK();
        bVar6 = *(int *)((longlong)puVar4 + 0xc) == 0;
        if (bVar6) {
          *(int *)((longlong)puVar4 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar6) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar4);
        }
      }
      else {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 142062130 FUN_142062130 body=427 status=ok
// SIG undefined FUN_142062130(void)

undefined8 *
FUN_142062130(undefined8 *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 local_38 [16];
  
  *param_1 = &PTR_FUN_144f70970;
  param_1[1] = 0;
  param_1[2] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 1,0);
  FGenericPlatformString::Memcpy(param_1[1],L"DefaultTaskManager",0x26);
  InitializeSRWLock((PSRWLOCK)(param_1 + 3));
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 10));
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_FUN_144f88c80;
  param_1[0xd] = &PTR_LAB_144f88cd8;
  param_1[0xe] = &PTR_LAB_144f88d08;
  FString::FString(param_1 + 0xf,param_2);
  *(undefined4 *)(param_1 + 0x11) = 5;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = param_3;
  param_1[0x14] = 0;
  plVar1 = (longlong *)FString::FString(local_38,param_2);
  FString::operator=(param_1 + 1,plVar1);
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)param_1[0xf];
  }
  uVar2 = FUN_1415d42a0(param_1 + 0xd,puVar3,param_4,*(undefined4 *)((longlong)param_1 + 0x9c),
                        0xffffffffffffffff);
  plVar1 = (longlong *)param_1[0x14];
  param_1[0x14] = uVar2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
    uVar2 = param_1[0x14];
  }
  FUN_1415b2540(uVar2,5);
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1420622e0 FUN_1420622e0 body=400 status=ok
// SIG undefined FUN_1420622e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1420622e0(undefined8 *param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined **ppuVar5;
  undefined1 auStack_168 [32];
  undefined1 local_148 [256];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  FGlobalShader::FGlobalShader(param_1,param_3);
  uVar3 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144f88c20;
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
  lVar1 = *(longlong *)(&DAT_1464fa000 + (longlong)param_2 * 8);
  param_1[0x18] = lVar1;
  if (lVar1 != 0) {
    ppuVar5 = &PTR_s_alphatex_1464f07b0;
    uVar4 = uVar3;
    do {
      if (-1 < *(short *)(uVar4 + *(longlong *)(param_1[0x18] + 0x10))) {
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>(local_148,*ppuVar5);
        FShaderParameter::Bind
                  ((longlong)param_1 + uVar3 * 6 + 200,*(undefined8 *)(param_3 + 0x18),local_40,0);
        if (local_48 != 0) {
          FMemory::Free();
        }
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      uVar4 = uVar4 + 10;
      ppuVar5 = ppuVar5 + 1;
    } while (uVar2 < 0x1c);
  }
  return param_1;
}



// FUNCTION 142062470 FUN_142062470 body=182 status=ok
// SIG undefined FUN_142062470(void)

undefined8 * FUN_142062470(undefined8 *param_1)

{
  FShader::FShader();
  *param_1 = &PTR__scalar_deleting_destructor__144f88c20;
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
  return param_1;
}



// FUNCTION 142062530 FUN_142062530 body=140 status=ok
// SIG undefined FUN_142062530(void)

void FUN_142062530(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_1 != 0) {
    lVar2 = 0;
    lVar3 = *(longlong *)(*param_1 + 8) + 1;
    do {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + 0x10 + lVar2) != -2) {
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(lVar1 + 0x30 + lVar2);
        *(undefined8 *)(lVar1 + 0x10 + lVar2) = 0xfffffffffffffffe;
      }
      lVar2 = lVar2 + 0x28;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    if (*param_1 != 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))();
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1420625c0 FUN_1420625c0 body=204 status=ok
// SIG undefined FUN_1420625c0(void)

void FUN_1420625c0(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar4 = (longlong *)0x0;
  plVar1 = (longlong *)*param_1;
  if ((longlong *)*param_1 == (longlong *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  do {
    plVar5 = plVar1;
    uVar3 = 0;
    if ((int)plVar5[1] != 0) {
      do {
        if ((RefCountImpl *)plVar5[uVar3 * 5 + 6] != (RefCountImpl *)0x0) {
          Scaleform::RefCountImpl::Release((RefCountImpl *)plVar5[uVar3 * 5 + 6]);
        }
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < *(uint *)(plVar5 + 1));
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar4);
    }
    plVar4 = plVar5;
    plVar1 = (longlong *)*plVar5;
  } while ((longlong *)*plVar5 != (longlong *)0x0);
  if (plVar5 == (longlong *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar5);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 142062690 ~PagedItemBuffer<Scaleform::Render::VertexElement,32> body=132 status=ok
// SIG undefined ~PagedItemBuffer<Scaleform::Render::VertexElement,32>(void)

void Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::
     ~PagedItemBuffer<Scaleform::Render::VertexElement,32>(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)0x0;
  plVar1 = (longlong *)*param_1;
  if ((longlong *)*param_1 == (longlong *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  do {
    plVar3 = plVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar2);
    }
    plVar2 = plVar3;
    plVar1 = (longlong *)*plVar3;
  } while ((longlong *)*plVar3 != (longlong *)0x0);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,plVar3);
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 142062720 FUN_142062720 body=143 status=ok
// SIG undefined FUN_142062720(void)

void FUN_142062720(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_144f88ee8;
  if (param_1[8] != 0) {
    lVar2 = 0;
    lVar1 = *(longlong *)(param_1[8] + 8) + 1;
    do {
      if (*(longlong *)(param_1[8] + 0x10 + lVar2) != -2) {
        *(undefined8 *)(param_1[8] + 0x10 + lVar2) = 0xfffffffffffffffe;
      }
      lVar2 = lVar2 + 0x38;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[8]);
    param_1[8] = 0;
  }
  FUN_1420625c0(param_1 + 5);
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::
  ~PagedItemBuffer<Scaleform::Render::VertexElement,32>(param_1 + 3);
  *param_1 = &PTR_FUN_144f1b048;
  return;
}



// FUNCTION 1420627b0 FUN_1420627b0 body=524 status=ok
// SIG undefined FUN_1420627b0(void)

void FUN_1420627b0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  bool bVar7;
  
  lVar6 = 0x50;
  *param_1 = &PTR_FUN_144f89418;
  puVar5 = param_1 + 0x6df;
  param_1[2] = &PTR_LAB_144f897b0;
  do {
    puVar3 = (undefined8 *)puVar5[-1];
    puVar5 = puVar5 + -1;
    lVar6 = lVar6 + -1;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if ((*(char *)(puVar3 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          LOCK();
          bVar7 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar7) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar7) {
            TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  } while (lVar6 != 0);
  lVar6 = 10;
  puVar5 = param_1 + 0x68f;
  do {
    puVar3 = (undefined8 *)puVar5[-1];
    puVar5 = puVar5 + -1;
    lVar6 = lVar6 + -1;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if ((*(char *)(puVar3 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          LOCK();
          bVar7 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar7) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar7) {
            TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  } while (lVar6 != 0);
  lVar6 = 3;
  puVar5 = param_1 + 0x685;
  do {
    puVar3 = (undefined8 *)puVar5[-1];
    puVar5 = puVar5 + -1;
    lVar6 = lVar6 + -1;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if ((*(char *)(puVar3 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          LOCK();
          bVar7 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar7) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar7) {
            TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  } while (lVar6 != 0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x681);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x67f);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x67e);
  param_1[0x66d] = &PTR_FUN_144f88fb8;
  if ((RefCountImpl *)param_1[0x66c] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x66c]);
  }
  FUN_1432c1fd0(param_1 + 0x651);
  FUN_1420629c0(param_1 + 0x60e);
  FUN_142062a60(param_1 + 0x3f2);
  FUN_142062720(param_1 + 0x239);
  FUN_1432d83f0(param_1);
  return;
}



// FUNCTION 1420629c0 FUN_1420629c0 body=154 status=ok
// SIG undefined FUN_1420629c0(void)

void FUN_1420629c0(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144f88e00;
  param_1[1] = &PTR_LAB_144f88e98;
  FUN_14207a9a0();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x40);
  param_1[0x32] = &PTR_FUN_144f88d58;
  thunk_FUN_1432f4570(param_1 + 0x36);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0x33]);
  param_1[0x29] = &PTR_FUN_144f88d58;
  thunk_FUN_1432f4570(param_1 + 0x2d);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[0x2a]);
  FUN_1432f6c00(param_1);
  return;
}



// FUNCTION 142062a60 FUN_142062a60 body=196 status=ok
// SIG undefined FUN_142062a60(void)

void FUN_142062a60(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  bool bVar7;
  
  puVar5 = param_1 + 0x213;
  FUN_142062530(puVar5);
  lVar6 = 8;
  do {
    puVar3 = (undefined8 *)puVar5[-1];
    puVar5 = puVar5 + -1;
    lVar6 = lVar6 + -1;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if ((*(char *)(puVar3 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          LOCK();
          bVar7 = *(int *)((longlong)puVar3 + 0xc) == 0;
          if (bVar7) {
            *(int *)((longlong)puVar3 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar7) {
            TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
          }
        }
        else {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  } while (lVar6 != 0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x208);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x203);
  *param_1 = &PTR_FUN_144f1b048;
  return;
}



// FUNCTION 142062b30 FUN_142062b30 body=127 status=ok
// SIG undefined FUN_142062b30(void)

void FUN_142062b30(undefined8 *param_1)

{
  char cVar1;
  DWORD DVar2;
  
  *param_1 = &PTR_FUN_144f70970;
  if (*(char *)((longlong)param_1 + 0x4c) == '\0') {
    cVar1 = FOutputDevice::CanBeUsedOnAnyThread();
    if (cVar1 != '\0') {
      cVar1 = FUN_142059490();
      if (cVar1 == '\0') {
        DVar2 = GetCurrentThreadId();
        if (*(DWORD *)(param_1 + 9) != DVar2) {
          FUN_14207bf80(param_1);
        }
      }
    }
  }
  cVar1 = FUN_142078bd0(param_1);
  if (cVar1 != '\0') {
    FUN_142070ea0(param_1);
  }
  FUN_14201bd50(param_1 + 0xb);
  FUN_14201bd50(param_1 + 4);
  if (param_1[1] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142062bb0 FUN_142062bb0 body=190 status=ok
// SIG undefined FUN_142062bb0(void)

void FUN_142062bb0(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_144f88c80;
  param_1[0xd] = &PTR_LAB_144f88cd8;
  param_1[0xe] = &PTR_LAB_144f88d08;
  (**(code **)(*(longlong *)param_1[0x14] + 0x18))((longlong *)param_1[0x14],1);
  plVar1 = (longlong *)param_1[0x14];
  param_1[0x14] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  if (param_1[0x12] != 0) {
    FUN_1415b5910();
  }
  plVar1 = (longlong *)param_1[0x14];
  param_1[0x12] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  param_1[0xe] = &PTR_FUN_143f47c98;
  param_1[0xd] = &PTR_IsPromotedBuild_143f60558;
  FUN_142062b30(param_1);
  return;
}



// FUNCTION 142062c70 FUN_142062c70 body=59 status=ok
// SIG undefined FUN_142062c70(void)

undefined8 * FUN_142062c70(undefined8 *param_1,RefCountImpl *param_2)

{
  if (param_2 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::AddRef(param_2);
  }
  if ((RefCountImpl *)*param_1 != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)*param_1);
  }
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 142062cb0 FUN_142062cb0 body=311 status=ok
// SIG undefined FUN_142062cb0(void)

longlong FUN_142062cb0(undefined8 param_1,byte *param_2)

{
  return (((ulonglong)param_2[3] * 0x1003f + (ulonglong)param_2[2]) * 0x1003f +
         (ulonglong)param_2[1]) * 0x1003f + (ulonglong)param_2[10] * -0xd284be79967327f +
         (ulonglong)param_2[0xd] * -0x5b36ed498d7fdcc1 + (ulonglong)param_2[9] * 0x5950f7eab156c23f
         + (ulonglong)param_2[0xe] * -0x5fcdf299af38537f +
         (ulonglong)param_2[0xb] * 0x772db89a0d1b92bf + (ulonglong)param_2[4] * 0xfc5d1543ec5f01 +
         (ulonglong)param_2[5] * -0x64cfd3d7e9d39ec1 + (ulonglong)param_2[0xc] * 0xcda7b04cc881d01 +
         (ulonglong)param_2[7] * -0x283c1b695cee4e41 + (ulonglong)param_2[0xf] * 0x79b79cf58da473bf
         + (ulonglong)param_2[6] * 0x5d02f409d62aee81 + (ulonglong)param_2[8] * -0x2341bdc2ce641ff +
         -0x1d7e9924e6be7efb + (ulonglong)*param_2;
}



// FUNCTION 142062e30 FUN_142062e30 body=152 status=ok
// SIG undefined FUN_142062e30(void)

undefined8 * FUN_142062e30(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144f88d68;
  if (param_1[0xc] != 0) {
    (**(code **)(*DAT_146b62f28 + 0x60))();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xb);
  *param_1 = &PTR_FUN_144f88d38;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[6]);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 142062ed0 FUN_142062ed0 body=83 status=ok
// SIG undefined FUN_142062ed0(void)

undefined8 * FUN_142062ed0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f88d58;
  thunk_FUN_1432f4570(param_1 + 4);
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[1]);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142062f30 FUN_142062f30 body=116 status=ok
// SIG undefined FUN_142062f30(void)

longlong FUN_142062f30(longlong param_1,ulonglong param_2)

{
  FUN_142062a60(param_1 + 0x1f90);
  FUN_142062720(param_1 + 0x11c8);
  FUN_1432d83f0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x3070);
  }
  return param_1;
}



// FUNCTION 142062fb0 FUN_142062fb0 body=52 status=ok
// SIG undefined FUN_142062fb0(void)

undefined8 FUN_142062fb0(undefined8 param_1,ulonglong param_2)

{
  FUN_142062720();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142062ff0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FSlateBackBuffer::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144dd5318;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142063040 FUN_142063040 body=89 status=ok
// SIG undefined FUN_142063040(void)

undefined8 FUN_142063040(undefined8 param_1,ulonglong param_2)

{
  FUN_1420627b0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x3700);
  }
  return param_1;
}



// FUNCTION 1420630a0 FUN_1420630a0 body=73 status=ok
// SIG undefined FUN_1420630a0(void)

undefined8 * FUN_1420630a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f88d40;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1420630f0 FUN_1420630f0 body=73 status=ok
// SIG undefined FUN_1420630f0(void)

undefined8 * FUN_1420630f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f88d40;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 142063140 FUN_142063140 body=111 status=ok
// SIG undefined FUN_142063140(void)

undefined8 * FUN_142063140(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144f88d38;
  (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1[6]);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1420631b0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FEditableTextStyle::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1420629c0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x218);
  }
  return param_1;
}



// FUNCTION 1420631f0 FUN_1420631f0 body=52 status=ok
// SIG undefined FUN_1420631f0(void)

undefined8 FUN_1420631f0(undefined8 param_1,ulonglong param_2)

{
  FUN_1432f5d40();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 142063230 FUN_142063230 body=43 status=ok
// SIG undefined FUN_142063230(void)

undefined8 * FUN_142063230(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f88fb8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 142063260 FUN_142063260 body=43 status=ok
// SIG undefined FUN_142063260(void)

undefined8 * FUN_142063260(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f88fb8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 142063290 FUN_142063290 body=89 status=ok
// SIG undefined FUN_142063290(void)

undefined8 FUN_142063290(undefined8 param_1,ulonglong param_2)

{
  FUN_1432c1fd0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 1420632f0 FUN_1420632f0 body=356 status=ok
// SIG undefined FUN_1420632f0(void)

undefined8 * FUN_1420632f0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  
  *param_1 = &PTR_FUN_144f897f0;
  cVar5 = IsInRenderingThread();
  if (cVar5 != '\0') {
    (**(code **)(param_1[4] + 0x30))(param_1 + 4);
    lVar3 = param_1[0x12];
    if (lVar3 != 0) {
      puVar4 = *(undefined8 **)(lVar3 + 0x48);
      *(undefined8 *)(lVar3 + 0x48) = 0;
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar4 + 1);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          if ((*(char *)(puVar4 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))) {
            LOCK();
            bVar6 = *(int *)((longlong)puVar4 + 0xc) == 0;
            if (bVar6) {
              *(int *)((longlong)puVar4 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar6) {
              TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar4);
            }
          }
          else {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
      }
    }
  }
  if ((RefCountImpl *)param_1[0x12] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0x12]);
  }
  param_1[4] = &PTR_FUN_144f89020;
  cVar5 = IsInRenderingThread();
  if (cVar5 != '\0') {
    FRenderResource::ReleaseResource(param_1 + 4);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x10);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xf);
  if ((RefCountImpl *)param_1[0xe] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[0xe]);
  }
  FUN_141edd2d0(param_1 + 4);
  *param_1 = &PTR_FUN_144f88d20;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 142063460 FUN_142063460 body=109 status=ok
// SIG undefined FUN_142063460(void)

undefined8 * FUN_142063460(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f88d20;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1420634d0 FUN_1420634d0 body=115 status=ok
// SIG undefined FUN_1420634d0(void)

undefined8 * FUN_1420634d0(undefined8 *param_1,ulonglong param_2)

{
  char cVar1;
  
  *param_1 = &PTR_FUN_144f89020;
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    FRenderResource::ReleaseResource(param_1);
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xc);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xb);
  if ((RefCountImpl *)param_1[10] != (RefCountImpl *)0x0) {
    Scaleform::RefCountImpl::Release((RefCountImpl *)param_1[10]);
  }
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 142063550 FUN_142063550 body=52 status=ok
// SIG undefined FUN_142063550(void)

undefined8 FUN_142063550(undefined8 param_1,ulonglong param_2)

{
  FUN_142062a60();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10b0);
  }
  return param_1;
}



// FUNCTION 142063590 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UFlowGameEngine::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_142062720();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xdc8);
  }
  return param_1;
}



// FUNCTION 1420635d0 FUN_1420635d0 body=104 status=ok
// SIG undefined FUN_1420635d0(void)

longlong FUN_1420635d0(longlong param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x118);
  FUN_1432f4ea0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 142063640 FUN_142063640 body=89 status=ok
// SIG undefined FUN_142063640(void)

undefined8 FUN_142063640(undefined8 param_1,ulonglong param_2)

{
  FUN_1432f4ea0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1420636a0 FUN_1420636a0 body=224 status=ok
// SIG undefined FUN_1420636a0(void)

undefined8 * FUN_1420636a0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_144f88c80;
  param_1[0xd] = &PTR_LAB_144f88cd8;
  param_1[0xe] = &PTR_LAB_144f88d08;
  (**(code **)(*(longlong *)param_1[0x14] + 0x18))((longlong *)param_1[0x14],1);
  plVar1 = (longlong *)param_1[0x14];
  param_1[0x14] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  if (param_1[0x12] != 0) {
    FUN_1415b5910();
  }
  plVar1 = (longlong *)param_1[0x14];
  param_1[0x12] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  param_1[0xe] = &PTR_FUN_143f47c98;
  param_1[0xd] = &PTR_IsPromotedBuild_143f60558;
  FUN_142062b30(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 142063780 FUN_142063780 body=378 status=ok
// SIG undefined FUN_142063780(void)

longlong FUN_142063780(undefined8 *param_1,longlong *param_2,longlong param_3,uint param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  puVar2 = (undefined8 *)param_1[1];
  uVar6 = (ulonglong)param_4;
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x110,0);
    *param_1 = puVar2;
    param_1[1] = puVar2;
LAB_142063800:
    *puVar2 = 0;
    *(undefined4 *)(param_1[1] + 8) = 0;
  }
  else if (0x20 < *(int *)(puVar2 + 1) + param_4) {
    uVar3 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1,0x110,0);
    param_1[1] = uVar3;
    *puVar2 = uVar3;
    puVar2 = (undefined8 *)param_1[1];
    goto LAB_142063800;
  }
  lVar4 = param_1[1];
  puVar2 = (undefined8 *)(lVar4 + 0xc + (ulonglong)*(uint *)(lVar4 + 8) * 8);
  if (param_4 != 0) {
    puVar5 = puVar2;
    do {
      *puVar5 = *(undefined8 *)((param_3 - (longlong)puVar2) + (longlong)puVar5);
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    lVar4 = param_1[1];
  }
  *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + param_4;
  *param_2 = (longlong)puVar2;
  puVar2 = (undefined8 *)param_1[3];
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1 + 2,0x150,0);
    param_1[2] = puVar2;
    param_1[3] = puVar2;
  }
  else {
    if (*(int *)(puVar2 + 1) + 1U < 9) goto LAB_1420638b1;
    uVar3 = (**(code **)(*DAT_146b62f28 + 0x70))(DAT_146b62f28,param_1 + 2,0x150,0);
    param_1[3] = uVar3;
    *puVar2 = uVar3;
    puVar2 = (undefined8 *)param_1[3];
  }
  *puVar2 = 0;
  *(undefined4 *)(param_1[3] + 8) = 0;
LAB_1420638b1:
  lVar1 = param_1[3];
  uVar6 = (ulonglong)*(uint *)(lVar1 + 8);
  *(undefined8 *)(lVar1 + 0x30 + uVar6 * 0x28) = 0;
  *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + 1;
  lVar4 = 0;
  if (*param_2 != 0) {
    *(longlong *)(lVar1 + 0x10 + uVar6 * 0x28) = *param_2;
    lVar4 = lVar1 + 0x20 + uVar6 * 0x28;
    *(uint *)(lVar1 + 0x18 + uVar6 * 0x28) = param_4;
  }
  return lVar4;
}



// FUNCTION 142063900 FUN_142063900 body=117 status=ok
// SIG undefined FUN_142063900(void)

undefined8 FUN_142063900(longlong param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_1432f42e0(param_1 + 0x20,param_2 + 0xfU >> 4);
  if (uVar2 == 0xffffffffffffffff) {
    return 0xffffffffffffff00;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  *param_3 = *(undefined8 *)(lVar1 + (uVar2 >> 0x18) * 8);
  *param_4 = (ulonglong)((uint)uVar2 & 0xffffff) << 4;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
}



// FUNCTION 142063980 FUN_142063980 body=578 status=ok
// SIG undefined FUN_142063980(void)

undefined8
FUN_142063980(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             longlong param_5,undefined4 param_6,uint param_7,undefined1 param_8)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  undefined8 *local_res10;
  undefined4 local_res18;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48 [2];
  
  local_res10 = param_2;
  local_res18 = param_3;
  cVar2 = (**(code **)(*param_1 + 0x30))();
  if ((cVar2 == '\0') && (cVar2 = (**(code **)(*param_1 + 0x28))(param_1), cVar2 == '\0')) {
    return 4;
  }
  lVar1 = (ulonglong)param_7 * 2;
  local_48[0] = 0;
  local_res8 = 0;
  local_50 = 0;
  local_58 = 0;
  cVar2 = FUN_142063bd0(param_1,local_48,&local_50,param_1 + 0x29,param_5,param_8);
  uVar5 = 0;
  uVar6 = 0;
  if ((cVar2 == '\0') ||
     (cVar2 = FUN_142063bd0(param_1,&local_res8,&local_58,param_1 + 0x32,lVar1,param_8),
     uVar5 = local_58, uVar6 = local_res8, cVar2 == '\0')) {
    if (local_50 != 0) {
      FUN_1432f4460(param_1 + 0x2d,*(longlong *)(local_50 + 0x48) << 0x18 | local_48[0] >> 4,
                    param_5 + 0xfU >> 4);
    }
    if (uVar5 != 0) {
      FUN_1432f4460(param_1 + 0x36,*(longlong *)(uVar5 + 0x48) << 0x18 | uVar6 >> 4,
                    lVar1 + 0xfU >> 4);
    }
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*DAT_146b62f28 + 0x78))(DAT_146b62f28,param_1[0x16]);
    puVar4 = (undefined8 *)FUN_1432f5d70(uVar3,0x98,param_4);
    FUN_1432f5b90(puVar4,local_res18,param_1 + 0x16,param_4,0x98,lVar1 + param_5,param_6,param_7);
    *puVar4 = &PTR_FUN_144f88d50;
    puVar4[0xe] = local_58;
    puVar4[0xf] = local_48[0] & 0xffffffff;
    puVar4[0x11] = local_res8 & 0xffffffff;
    puVar4[0xd] = local_50;
    puVar4[0x10] = param_5;
    puVar4[0x12] = lVar1;
    *local_res10 = puVar4;
    uVar3 = 3;
  }
  return uVar3;
}



// FUNCTION 142063bd0 FUN_142063bd0 body=742 status=ok
// SIG undefined FUN_142063bd0(void)

undefined8
FUN_142063bd0(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             ulonglong param_5,char param_6)

{
  bool bVar1;
  char cVar2;
  wchar_t *pwVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  
  bVar1 = false;
  pwVar3 = AK::MemoryMgr::GetPoolName((long)param_1);
  uVar4 = (ulonglong)pwVar3 & 0xffffffff;
  if ((uint)pwVar3 < 5) {
    do {
      if (bVar1) goto LAB_142063d48;
      iVar8 = (int)uVar4;
      if (iVar8 == 0) {
        cVar2 = FUN_142063900(param_4,param_5,param_3,param_2);
        if (cVar2 != '\0') {
          return 1;
        }
      }
      else if (iVar8 == 1) {
        cVar2 = FUN_1432f60e0(param_1 + 0x16,param_4 + 4,0);
        if (cVar2 != '\0') {
          bVar1 = true;
        }
      }
      else if (iVar8 == 2) {
        if ((ulonglong)param_1[5] < (ulonglong)(param_1[0x3a] + 0x4000 + param_1[0x31])) {
LAB_142063e2a:
          cVar2 = FUN_1432f5fc0(param_1 + 0x16,param_1 + 0x23,param_4 + 4,param_5);
          if (cVar2 == '\0') {
            if ((ulonglong)param_1[9] < (ulonglong)param_1[0x3c]) {
              return 0;
            }
          }
          else {
            bVar1 = true;
          }
        }
        else {
          cVar2 = FUN_1432f6040(param_1 + 0x16,param_1 + 0x23,param_4 + 4,param_5,param_1[7]);
          if (cVar2 == '\0') {
            uVar4 = param_4[7];
            if (uVar4 < param_5) {
              return 0;
            }
            uVar5 = (param_1[5] - param_1[0x3a]) - param_1[0x31];
            if (uVar5 < uVar4) {
              uVar4 = uVar5;
            }
            if ((uVar4 < param_5) || (lVar6 = (**(code **)(*param_4 + 8))(param_4), lVar6 == 0))
            goto LAB_142063e2a;
            bVar1 = true;
            *(longlong *)(lVar6 + 8) = param_1[0x3e];
            *(longlong **)(lVar6 + 0x10) = param_1 + 0x3d;
            *(longlong *)(param_1[0x3e] + 0x10) = lVar6;
            param_1[0x3e] = lVar6;
          }
          else {
            bVar1 = true;
          }
        }
      }
      else {
        if (iVar8 == 3) {
          plVar7 = (longlong *)param_1[0x21];
          do {
            while( true ) {
              if (plVar7 == param_1 + 0x1f) goto LAB_142063d32;
              lVar6 = plVar7[3];
              if ((((lVar6 == 0) || (*(char *)(lVar6 + 0x18) == '\0')) ||
                  (*(longlong *)(lVar6 + 0x10) == 0)) ||
                 (cVar2 = FUN_1432c1c90(*(longlong *)(lVar6 + 0x10),0), cVar2 == '\0')) break;
              plVar7 = (longlong *)plVar7[2];
            }
            uVar4 = (**(code **)(*param_1 + 0x40))(param_1,plVar7,param_4 + 4,0);
          } while ((uVar4 == 0) || (plVar7 = (longlong *)param_1[0x21], uVar4 < param_5));
        }
        else {
          if ((iVar8 != 4) || (plVar7 = (longlong *)param_1[0x1e], param_6 == '\0'))
          goto LAB_142063d32;
          do {
            if (plVar7 == param_1 + 0x1c) goto LAB_142063d32;
            lVar6 = plVar7[3];
            if (((lVar6 != 0) && (*(char *)(lVar6 + 0x18) != '\0')) &&
               (*(longlong *)(lVar6 + 0x10) != 0)) {
              FUN_1432c1cc0(*(longlong *)(lVar6 + 0x10),0);
            }
            plVar7 = (longlong *)plVar7[2];
            uVar4 = (**(code **)(*param_1 + 0x40))(param_1);
          } while ((uVar4 == 0) || (plVar7 = (longlong *)param_1[0x1e], uVar4 < param_5));
        }
        bVar1 = true;
      }
LAB_142063d32:
      uVar4 = (ulonglong)(iVar8 + 1U);
    } while (iVar8 + 1U < 5);
    if (bVar1) {
LAB_142063d48:
      cVar2 = FUN_142063900(param_4,param_5,param_3,param_2);
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142063ec0 FUN_142063ec0 body=496 status=ok
// SIG undefined FUN_142063ec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142063ec0(longlong param_1)

{
  undefined8 **ppuVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined8 *local_88;
  undefined8 *local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_88 = &local_68;
  local_68 = 0;
  uStack_60 = 0;
  local_98 = *(undefined4 *)(param_1 + 0x20);
  local_58 = 1;
  local_54 = _DAT_1468b5d78;
  uStack_50 = uRam00000001468b5d7c;
  uStack_4c = uRam00000001468b5d80;
  uStack_48 = uRam00000001468b5d84;
  local_44 = 0;
  local_90 = 2;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  (**(code **)(*DAT_146ab6358 + 0x4f0))(DAT_146ab6358,local_78,&DAT_146ab6e78,2);
  ppuVar1 = (undefined8 **)(param_1 + 0x58);
  if (ppuVar1 != local_78) {
    puVar4 = *ppuVar1;
    *ppuVar1 = local_78[0];
    local_78[0] = (undefined8 *)0x0;
    if (puVar4 == (undefined8 *)0x0) goto LAB_142064029;
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      if ((*(char *)(puVar4 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))
         ) {
        LOCK();
        bVar7 = *(int *)((longlong)puVar4 + 0xc) == 0;
        if (bVar7) {
          *(int *)((longlong)puVar4 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar7) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar4);
        }
      }
      else {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
  }
  puVar4 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_78[0] + 1);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      if ((*(char *)(local_78[0] + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))
         ) {
        LOCK();
        bVar7 = *(int *)((longlong)puVar4 + 0xc) == 0;
        if (bVar7) {
          *(int *)((longlong)puVar4 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar7) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar4);
        }
      }
      else {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
  }
LAB_142064029:
  lVar6 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x20),0);
  *(longlong *)(param_1 + 0x60) = lVar6;
  if ((*ppuVar1 != (undefined8 *)0x0) && (lVar6 != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1420640b0 FUN_1420640b0 body=487 status=ok
// SIG undefined FUN_1420640b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1420640b0(longlong param_1)

{
  undefined8 **ppuVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 *local_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_80 = &local_68;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 1;
  local_54 = _DAT_1468b5d78;
  uStack_50 = uRam00000001468b5d7c;
  uStack_4c = uRam00000001468b5d80;
  uStack_48 = uRam00000001468b5d84;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_88 = 2;
  (**(code **)(*DAT_146ab6358 + 0x490))
            (DAT_146ab6358,local_78,&DAT_146ab6e78,*(undefined4 *)(param_1 + 0x20));
  ppuVar1 = (undefined8 **)(param_1 + 0x58);
  if (ppuVar1 != local_78) {
    puVar4 = *ppuVar1;
    *ppuVar1 = local_78[0];
    local_78[0] = (undefined8 *)0x0;
    if (puVar4 == (undefined8 *)0x0) goto LAB_142064210;
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      if ((*(char *)(puVar4 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))
         ) {
        LOCK();
        bVar7 = *(int *)((longlong)puVar4 + 0xc) == 0;
        if (bVar7) {
          *(int *)((longlong)puVar4 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar7) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar4);
        }
      }
      else {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
  }
  puVar4 = local_78[0];
  if (local_78[0] != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_78[0] + 1);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      if ((*(char *)(local_78[0] + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))
         ) {
        LOCK();
        bVar7 = *(int *)((longlong)puVar4 + 0xc) == 0;
        if (bVar7) {
          *(int *)((longlong)puVar4 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar7) {
          TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar4);
        }
      }
      else {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
  }
LAB_142064210:
  lVar6 = (**(code **)(*DAT_146b62f28 + 0x50))(DAT_146b62f28,*(undefined8 *)(param_1 + 0x20),0);
  *(longlong *)(param_1 + 0x60) = lVar6;
  if ((*ppuVar1 != (undefined8 *)0x0) && (lVar6 != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1420642b0 FUN_1420642b0 body=27 status=ok
// SIG undefined FUN_1420642b0(void)

void FUN_1420642b0(longlong param_1)

{
  FUN_1432c2170();
  *(longlong *)(param_1 + 200) = *(longlong *)(param_1 + 200) + 1;
  return;
}



// FUNCTION 1420642e0 FUN_1420642e0 body=67 status=ok
// SIG undefined FUN_1420642e0(void)

void FUN_1420642e0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_14207d9b0(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_14207d9b0(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 142064330 FUN_142064330 body=67 status=ok
// SIG undefined FUN_142064330(void)

void FUN_142064330(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    FUN_14207db00(param_1,param_2,8);
    return;
  }
  if (plVar1[1] * 4 + 4U < (ulonglong)(*plVar1 * 5)) {
    FUN_14207db00(param_1,param_2,plVar1[1] * 2 + 2);
    return;
  }
  return;
}



// FUNCTION 142064380 FUN_142064380 body=91 status=ok
// SIG undefined FUN_142064380(void)

void FUN_142064380(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_1 != 0) {
    lVar1 = 0;
    lVar2 = *(longlong *)(*param_1 + 8) + 1;
    do {
      if (*(longlong *)(lVar1 + 0x10 + *param_1) != -2) {
        *(undefined8 *)(lVar1 + 0x10 + *param_1) = 0xfffffffffffffffe;
      }
      lVar1 = lVar1 + 0x38;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1420643e0 FUN_1420643e0 body=368 status=ok
// SIG undefined FUN_1420643e0(void)

void FUN_1420643e0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_1432f61c0(param_1 + 0xa8);
  uVar5 = 0;
  uVar4 = uVar5;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    do {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x148) + uVar4 * 8);
      if ((puVar1 != (undefined8 *)0x0) && (*(int *)((longlong)puVar1 + 0x1c) == 2)) {
        lVar2 = puVar1[4];
        lVar3 = puVar1[9];
        FUN_1432f4260(param_1 + 0x160,lVar3 << 0x18,lVar2 + 0xfU >> 4);
        *(longlong *)(param_1 + 0x180) = *(longlong *)(param_1 + 0x180) - lVar2;
        *(undefined8 *)(*(longlong *)(param_1 + 0x148) + lVar3 * 8) = 0;
        (**(code **)*puVar1)(puVar1,1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ulonglong *)(param_1 + 0x150));
  }
  uVar4 = uVar5;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    do {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 400) + uVar4 * 8);
      if ((puVar1 != (undefined8 *)0x0) && (*(int *)((longlong)puVar1 + 0x1c) == 2)) {
        lVar2 = puVar1[4];
        lVar3 = puVar1[9];
        FUN_1432f4260(param_1 + 0x1a8,lVar3 << 0x18,lVar2 + 0xfU >> 4);
        *(longlong *)(param_1 + 0x1c8) = *(longlong *)(param_1 + 0x1c8) - lVar2;
        *(undefined8 *)(*(longlong *)(param_1 + 400) + lVar3 * 8) = 0;
        (**(code **)*puVar1)(puVar1,1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ulonglong *)(param_1 + 0x198));
  }
  uVar4 = param_1 + 0x1e0;
  if ((ulonglong *)(param_1 + 0x1e8) == (ulonglong *)0x0) {
    uVar4 = uVar5;
  }
  *(ulonglong *)(param_1 + 0x1e8) = uVar4;
  *(ulonglong *)(param_1 + 0x1f0) = uVar4;
  FUN_1432f6660(param_1 + 0x60);
  FUN_1432f65e0(param_1 + 0x60,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x38));
  return;
}



// FUNCTION 142064560 FUN_142064560 body=82 status=ok
// SIG undefined FUN_142064560(void)

undefined8 * FUN_142064560(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x180);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142061160(puVar1,1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f88bc0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420645c0 FUN_1420645c0 body=82 status=ok
// SIG undefined FUN_1420645c0(void)

undefined8 * FUN_1420645c0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x180);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142061160(puVar1,2,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f88bc0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142064620 FUN_142064620 body=82 status=ok
// SIG undefined FUN_142064620(void)

undefined8 * FUN_142064620(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x180);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142061160(puVar1,3,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f88bc0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142064680 FUN_142064680 body=82 status=ok
// SIG undefined FUN_142064680(void)

undefined8 * FUN_142064680(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x180);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142061160(puVar1,4,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f88bc0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420646e0 FUN_1420646e0 body=82 status=ok
// SIG undefined FUN_1420646e0(void)

undefined8 * FUN_1420646e0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x180);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142061160(puVar1,5,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f88bc0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142064740 FUN_142064740 body=82 status=ok
// SIG undefined FUN_142064740(void)

undefined8 * FUN_142064740(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x180);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142061160(puVar1,6,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f88bc0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420647a0 FUN_1420647a0 body=82 status=ok
// SIG undefined FUN_1420647a0(void)

undefined8 * FUN_1420647a0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x180);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142061160(puVar1,7,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f88bc0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142064800 FUN_142064800 body=82 status=ok
// SIG undefined FUN_142064800(void)

undefined8 * FUN_142064800(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x180);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142061160(puVar1,8,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f88bc0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142064860 FUN_142064860 body=82 status=ok
// SIG undefined FUN_142064860(void)

undefined8 * FUN_142064860(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x180);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142061160(puVar1,9,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f88bc0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420648c0 FUN_1420648c0 body=82 status=ok
// SIG undefined FUN_1420648c0(void)

undefined8 * FUN_1420648c0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x180);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142061160(puVar1,10,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f88bc0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142064920 FUN_142064920 body=82 status=ok
// SIG undefined FUN_142064920(void)

undefined8 * FUN_142064920(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x180);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142061160(puVar1,0x10,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f88bc0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142064980 FUN_142064980 body=82 status=ok
// SIG undefined FUN_142064980(void)

undefined8 * FUN_142064980(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x180);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142061160(puVar1,0x100,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f88bc0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420649e0 FUN_1420649e0 body=82 status=ok
// SIG undefined FUN_1420649e0(void)

undefined8 * FUN_1420649e0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x180);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142061160(puVar1,0x101,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f88bc0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142064a40 FUN_142064a40 body=82 status=ok
// SIG undefined FUN_142064a40(void)

undefined8 * FUN_142064a40(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x180);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142061160(puVar1,0x102,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f88bc0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142064aa0 FUN_142064aa0 body=82 status=ok
// SIG undefined FUN_142064aa0(void)

undefined8 * FUN_142064aa0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x180);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142061160(puVar1,0x103,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f88bc0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142064b00 FUN_142064b00 body=82 status=ok
// SIG undefined FUN_142064b00(void)

undefined8 * FUN_142064b00(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x180);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142061160(puVar1,0x104,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144f88bc0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}


