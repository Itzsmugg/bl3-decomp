// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1416ae4f0 GetProcessModuleCount body=65 status=ok
// SIG undefined GetProcessModuleCount(void)

uint FWindowsPlatformStackWalk::GetProcessModuleCount(void)

{
  char cVar1;
  HANDLE pvVar2;
  uint local_res8 [8];
  
  FUN_1416aee50();
  pvVar2 = GetCurrentProcess();
  local_res8[0] = 0;
  cVar1 = (*DAT_1469e46d0)(pvVar2,0,0,local_res8);
  if (cVar1 == '\0') {
    return 0;
  }
  return local_res8[0] >> 3;
}



// FUNCTION 1416ae540 FUN_1416ae540 body=870 status=ok
// SIG undefined FUN_1416ae540(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1416ae540(undefined8 *param_1,int param_2)

{
  short *psVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  HANDLE pvVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  int iVar16;
  undefined1 auStack_15c8 [32];
  undefined8 local_15a8;
  undefined8 local_15a0;
  undefined8 local_1598;
  undefined8 local_1588;
  undefined4 uStack_1580;
  undefined4 uStack_157c;
  short local_1578 [32];
  short local_1538 [256];
  short asStack_1338 [256];
  undefined4 local_1138;
  undefined4 local_1134;
  undefined8 local_1130;
  undefined8 uStack_1128;
  undefined4 local_1118;
  undefined1 local_1114 [4];
  undefined8 local_1110;
  undefined4 local_1108;
  undefined4 local_1104;
  short asStack_10f4 [32];
  short asStack_10b4 [256];
  short asStack_eb4 [1294];
  undefined4 local_498;
  undefined8 local_494;
  undefined8 uStack_48c;
  undefined4 local_484;
  short local_458 [264];
  short local_248 [264];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1416ae559;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_15c8;
  FUN_1416aee50();
  pvVar10 = GetCurrentProcess();
  plVar11 = (longlong *)GetProcessModules(pvVar10);
  iVar16 = 0;
  if (plVar11 != (longlong *)0x0) {
    _guard_xfg_dispatch_icall_nop(local_1114,0,0xcbc);
    iVar16 = 0;
    local_1118 = 0xcc0;
    if (*plVar11 != 0) {
      lVar14 = 0;
      do {
        if (param_2 <= lVar14) break;
        local_15a8 = 0;
        local_15a0 = 0;
        local_1598 = 0;
        _guard_xfg_dispatch_icall_nop(local_248,0,0x208);
        _guard_xfg_dispatch_icall_nop(local_458,0,0x208);
        (*DAT_1469e46e8)(pvVar10,plVar11[lVar14],&local_15a8,0x18);
        (*DAT_1469e46e0)(pvVar10,plVar11[lVar14],local_458,0x104);
        (*DAT_1469e46d8)(pvVar10,plVar11[lVar14],local_248,0x104);
        _guard_xfg_dispatch_icall_nop(&uStack_1580,0,0x460);
        iVar9 = SymGetModuleInfoW64(pvVar10,local_15a8,&local_1118);
        lVar12 = 0;
        if (iVar9 == 0) {
          local_1588 = local_15a8;
          do {
            psVar1 = (short *)((longlong)local_458 + lVar12);
            *(short *)((longlong)local_1538 + lVar12) = *psVar1;
            lVar12 = lVar12 + 2;
          } while (*psVar1 != 0);
          lVar12 = 0;
          uStack_1580 = (undefined4)local_15a0;
          do {
            psVar1 = (short *)((longlong)local_458 + lVar12);
            *(short *)((longlong)asStack_1338 + lVar12) = *psVar1;
            lVar12 = lVar12 + 2;
          } while (*psVar1 != 0);
          lVar12 = 0;
          do {
            psVar1 = (short *)((longlong)local_248 + lVar12);
            *(short *)((longlong)local_1578 + lVar12) = *psVar1;
            lVar12 = lVar12 + 2;
          } while (*psVar1 != 0);
        }
        else {
          local_1588 = local_1110;
          do {
            psVar1 = (short *)((longlong)asStack_10b4 + lVar12);
            *(short *)((longlong)local_1538 + lVar12) = *psVar1;
            lVar12 = lVar12 + 2;
          } while (*psVar1 != 0);
          lVar12 = 0;
          uStack_1580 = local_1108;
          do {
            psVar1 = (short *)((longlong)asStack_eb4 + lVar12);
            *(short *)((longlong)asStack_1338 + lVar12) = *psVar1;
            lVar12 = lVar12 + 2;
          } while (*psVar1 != 0);
          lVar12 = 0;
          do {
            psVar1 = (short *)((longlong)asStack_10f4 + lVar12);
            *(short *)((longlong)local_1578 + lVar12) = *psVar1;
            lVar12 = lVar12 + 2;
          } while (*psVar1 != 0);
          local_1134 = local_484;
          local_1138 = local_498;
          uStack_157c = local_1104;
          local_1130 = local_494;
          uStack_1128 = uStack_48c;
        }
        lVar12 = 8;
        puVar7 = &local_1588;
        puVar8 = param_1;
        do {
          puVar15 = puVar8;
          puVar13 = puVar7;
          uVar2 = puVar13[1];
          uVar3 = puVar13[2];
          uVar4 = puVar13[3];
          *puVar15 = *puVar13;
          puVar15[1] = uVar2;
          uVar2 = puVar13[4];
          uVar5 = puVar13[5];
          puVar15[2] = uVar3;
          puVar15[3] = uVar4;
          uVar3 = puVar13[6];
          uVar4 = puVar13[7];
          puVar15[4] = uVar2;
          puVar15[5] = uVar5;
          uVar2 = puVar13[8];
          uVar5 = puVar13[9];
          puVar15[6] = uVar3;
          puVar15[7] = uVar4;
          uVar3 = puVar13[10];
          uVar4 = puVar13[0xb];
          puVar15[8] = uVar2;
          puVar15[9] = uVar5;
          uVar2 = puVar13[0xc];
          uVar5 = puVar13[0xd];
          puVar15[10] = uVar3;
          puVar15[0xb] = uVar4;
          uVar3 = puVar13[0xe];
          uVar4 = puVar13[0xf];
          puVar15[0xc] = uVar2;
          puVar15[0xd] = uVar5;
          puVar15[0xe] = uVar3;
          puVar15[0xf] = uVar4;
          lVar12 = lVar12 + -1;
          puVar7 = puVar13 + 0x10;
          puVar8 = puVar15 + 0x10;
        } while (lVar12 != 0);
        uVar3 = puVar13[0x11];
        uVar2 = puVar13[0x1c];
        lVar14 = lVar14 + 1;
        uVar4 = puVar13[0x12];
        uVar5 = puVar13[0x13];
        iVar16 = iVar16 + 1;
        param_1 = param_1 + 0x8d;
        puVar15[0x10] = puVar13[0x10];
        puVar15[0x11] = uVar3;
        uVar3 = puVar13[0x14];
        uVar6 = puVar13[0x15];
        puVar15[0x12] = uVar4;
        puVar15[0x13] = uVar5;
        uVar4 = puVar13[0x16];
        uVar5 = puVar13[0x17];
        puVar15[0x14] = uVar3;
        puVar15[0x15] = uVar6;
        uVar3 = puVar13[0x18];
        uVar6 = puVar13[0x19];
        puVar15[0x16] = uVar4;
        puVar15[0x17] = uVar5;
        uVar4 = puVar13[0x1a];
        uVar5 = puVar13[0x1b];
        puVar15[0x18] = uVar3;
        puVar15[0x19] = uVar6;
        puVar15[0x1a] = uVar4;
        puVar15[0x1b] = uVar5;
        puVar15[0x1c] = uVar2;
      } while (plVar11[lVar14] != 0);
    }
    FMemory::Free(plVar11);
  }
  return iVar16;
}



// FUNCTION 1416ae8b0 GetProcessModules body=169 status=ok
// SIG undefined GetProcessModules(void)

longlong GetProcessModules(undefined8 param_1)

{
  char cVar1;
  HANDLE pvVar2;
  longlong lVar3;
  uint uVar4;
  uint local_res10 [2];
  uint local_res18 [4];
  
  FUN_1416aee50();
  pvVar2 = GetCurrentProcess();
  local_res10[0] = 0;
  cVar1 = (*DAT_1469e46d0)(pvVar2,0,0,local_res10);
  uVar4 = local_res10[0] >> 3;
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  uVar4 = uVar4 * 8;
  lVar3 = FMemory::Malloc((ulonglong)uVar4 + 8,0);
  local_res18[0] = 0;
  cVar1 = (*DAT_1469e46d0)(param_1,lVar3,uVar4,local_res18);
  if (cVar1 == '\0') {
    FMemory::Free(lVar3);
  }
  else if (local_res18[0] <= uVar4) {
    *(undefined8 *)(lVar3 + (ulonglong)(local_res18[0] >> 3) * 8) = 0;
    return lVar3;
  }
  return 0;
}



// FUNCTION 1416ae960 GetRemoteStorage body=922 status=ok
// SIG undefined GetRemoteStorage(void)

ulonglong * GetRemoteStorage(ulonglong *param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  int local_res18;
  longlong local_res20;
  longlong local_88;
  ulonglong local_80;
  int local_78;
  uint local_74;
  longlong *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  
  iVar4 = 0;
  local_70 = (longlong *)0x0;
  local_68 = 0;
  FConfigCacheIni::GetArray
            (DAT_1468b6148,PTR_u__Script_UnrealEd_CrashReporterSe_1464b0208,L"RemoteStorage",
             &local_70,&DAT_1468e23b0);
  if ((int)local_68 < 1) {
    *param_1 = 0;
    param_1[1] = 0;
    plVar6 = local_70;
    for (iVar4 = (int)local_68; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
  }
  else {
    uVar8 = 0;
    uVar7 = 0;
    local_80 = 0;
    local_74 = 0;
    local_res18 = 0;
    if (0 < (int)local_68) {
      local_88 = 0;
      local_res20 = 0;
      uVar10 = uVar8;
      iVar4 = 0;
      do {
        if (0 < local_88) {
          iVar3 = iVar4 + -1;
          if (iVar4 < 1) {
            iVar3 = 0;
          }
          local_78 = (iVar4 < 1) + 1 + iVar4;
          if ((int)uVar10 < local_78) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80);
            uVar10 = (ulonglong)local_74;
            uVar8 = local_80;
          }
          *(undefined4 *)(uVar8 + (longlong)iVar3 * 2) = 0x3b;
          iVar4 = local_78;
        }
        local_60 = (void *)0x0;
        local_58 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
        pvVar2 = local_60;
        FGenericPlatformString::Memcpy(local_60,L"SRV*",10);
        iVar3 = iVar4;
        if (((int)local_58 != 0) && (iVar9 = (int)local_58 + -1, iVar9 != 0)) {
          local_78 = iVar4 + (uint)(iVar4 == 0) + iVar9;
          if ((int)uVar10 < local_78) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,iVar4);
            uVar10 = (ulonglong)local_74;
            uVar8 = local_80;
          }
          iVar3 = local_78;
          pvVar1 = (void *)(uVar8 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar9 * 2);
          *(undefined2 *)((longlong)iVar9 * 2 + (longlong)pvVar1) = 0;
        }
        if (pvVar2 != (void *)0x0) {
          FMemory::Free(pvVar2);
        }
        pvVar2 = (void *)*param_2;
        iVar4 = *(int *)(param_2 + 1) + -1;
        if (*(int *)(param_2 + 1) == 0) {
          iVar4 = 0;
        }
        iVar9 = iVar3;
        if (iVar4 != 0) {
          local_78 = iVar3 + (uint)(iVar3 == 0) + iVar4;
          if ((int)uVar10 < local_78) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,iVar3);
            uVar10 = (ulonglong)local_74;
            uVar8 = local_80;
          }
          iVar9 = local_78;
          pvVar1 = (void *)(uVar8 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar4 * 2);
          *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar1) = 0;
        }
        iVar4 = iVar9 + -1;
        if (iVar9 < 1) {
          iVar4 = 0;
        }
        local_78 = (iVar9 < 1) + 1 + iVar9;
        if ((int)uVar10 < local_78) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80);
          uVar10 = (ulonglong)local_74;
          uVar8 = local_80;
        }
        iVar9 = local_78;
        *(undefined4 *)(uVar8 + (longlong)iVar4 * 2) = 0x2a;
        iVar4 = *(int *)((longlong)local_70 + local_res20 + 8);
        pvVar2 = *(void **)((longlong)local_70 + local_res20);
        iVar3 = iVar4 + -1;
        if (iVar4 == 0) {
          iVar3 = 0;
        }
        iVar4 = local_78;
        if (iVar3 != 0) {
          lVar5 = (longlong)local_78;
          local_78 = local_78 + (uint)(local_78 == 0) + iVar3;
          if ((int)uVar10 < local_78) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,iVar9);
            uVar10 = (ulonglong)local_74;
            uVar8 = local_80;
          }
          iVar4 = local_78;
          pvVar1 = (void *)(uVar8 + (lVar5 - (ulonglong)(iVar9 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar3 * 2);
          *(undefined2 *)((longlong)iVar3 * 2 + (longlong)pvVar1) = 0;
        }
        uVar7 = (undefined4)uVar10;
        local_res20 = local_res20 + 0x10;
        local_res18 = local_res18 + 1;
        local_88 = local_88 + 1;
      } while (local_res18 < (int)local_68);
    }
    *param_1 = uVar8;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar7;
    *(int *)(param_1 + 1) = iVar4;
    plVar6 = local_70;
    for (iVar4 = (int)local_68; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
  }
  if (local_70 != (longlong *)0x0) {
    FMemory::Free(local_70);
  }
  return param_1;
}



// FUNCTION 1416aed00 GetStack body=66 status=ok
// SIG undefined GetStack(void)

undefined8
FWindowsPlatformStackWalk::GetStack
          (undefined8 param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_1416aee50();
  FUN_1415ab090(param_1,param_2 + 1,param_3,param_4);
  return param_1;
}



// FUNCTION 1416aed50 GuardedRun body=79 status=ok
// SIG undefined GuardedRun(void)

undefined4 FRunnableThreadWin::GuardedRun(longlong param_1)

{
  DWORD_PTR dwThreadAffinityMask;
  undefined4 uVar1;
  HANDLE hThread;
  
  dwThreadAffinityMask = *(DWORD_PTR *)(param_1 + 0x28);
  if (dwThreadAffinityMask != 0xffffffffffffffff) {
    hThread = GetCurrentThread();
    SetThreadAffinityMask(hThread,dwThreadAffinityMask);
  }
  uVar1 = Run(param_1);
  return uVar1;
}



// FUNCTION 1416aee50 FUN_1416aee50 body=1773 status=ok
// SIG undefined FUN_1416aee50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char FUN_1416aee50(void)

{
  undefined2 *puVar1;
  BOOL BVar2;
  uint uVar3;
  DWORD DVar4;
  int iVar5;
  HMODULE pHVar6;
  FARPROC pFVar7;
  undefined4 extraout_var;
  HANDLE pvVar9;
  char cVar10;
  longlong lVar11;
  tagPOINT tVar12;
  tagPOINT tVar13;
  LPBYTE aj;
  int iVar14;
  LONG LVar15;
  uint uVar16;
  longlong lVar17;
  tagPOINT tVar18;
  undefined1 auStack_4c8 [32];
  undefined2 local_4a8;
  tagPOINT local_498;
  ulonglong local_490;
  tagPOINT local_488;
  int local_480;
  int local_47c;
  int local_478;
  longlong local_470 [3];
  WCHAR local_458 [64];
  longlong local_3d8;
  WCHAR *local_3d0;
  undefined4 local_3c8;
  WCHAR local_248 [264];
  ulonglong local_38;
  tagPOINT *ptVar8;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_4c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469e5990) && (_Init_thread_header(&DAT_1469e5990), DAT_1469e5990 == -1))
  {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1469e5968);
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_1469e5968,4000);
    atexit((_func_5014 *)&LAB_143e7b480);
    _Init_thread_footer(&DAT_1469e5990);
  }
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e5968);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1469e5968);
  }
  if (DAT_1469e46a4 != '\0') {
    cVar10 = DAT_1469e46a4;
    if (DAT_1469e46a5 != '\0') {
      DAT_1469e46a5 = '\0';
      pvVar9 = GetCurrentProcess();
      SymRefreshModuleList(pvVar9);
      cVar10 = DAT_1469e46a4;
    }
    goto LAB_1416af4a7;
  }
  pHVar6 = (HMODULE)FWindowsPlatformProcess::GetDllHandle(L"PSAPI.DLL");
  if (pHVar6 != (HMODULE)0x0) {
    local_3c8 = 0xd;
    local_3d0 = local_458;
    local_4a8 = CONCAT11(local_4a8._1_1_,0x3f);
    tVar13.x = 0;
    tVar13.y = 0;
    local_3d8 = 0;
    FGenericPlatformString::Convert<wchar_t,char>(local_458,0xe,L"EnumProcesses");
    pFVar7 = GetProcAddress(pHVar6,(LPCSTR)local_3d0);
    if (local_3d8 != 0) {
      FMemory::Free();
    }
    local_3d0 = local_458;
    local_3d8 = 0;
    local_3c8 = 0x12;
    local_4a8 = CONCAT11(local_4a8._1_1_,0x3f);
    DAT_1469e46c8 = pFVar7;
    FGenericPlatformString::Convert<wchar_t,char>(local_458,0x13,L"EnumProcessModules");
    pFVar7 = GetProcAddress(pHVar6,(LPCSTR)local_3d0);
    if (local_3d8 != 0) {
      FMemory::Free();
    }
    local_3d0 = local_458;
    local_3d8 = 0;
    local_3c8 = 0x14;
    local_4a8 = CONCAT11(local_4a8._1_1_,0x3f);
    DAT_1469e46d0 = pFVar7;
    FGenericPlatformString::Convert<wchar_t,char>(local_458,0x15,L"GetModuleFileNameExW");
    pFVar7 = GetProcAddress(pHVar6,(LPCSTR)local_3d0);
    if (local_3d8 != 0) {
      FMemory::Free();
    }
    local_3d0 = local_458;
    local_3d8 = 0;
    local_3c8 = 0x12;
    local_4a8 = CONCAT11(local_4a8._1_1_,0x3f);
    DAT_1469e46e0 = pFVar7;
    FGenericPlatformString::Convert<wchar_t,char>(local_458,0x13,L"GetModuleBaseNameW");
    pFVar7 = GetProcAddress(pHVar6,(LPCSTR)local_3d0);
    if (local_3d8 != 0) {
      FMemory::Free();
    }
    iVar5 = 0x15;
    local_3d0 = local_458;
    local_3d8 = 0;
    local_3c8 = 0x14;
    local_4a8 = CONCAT11(local_4a8._1_1_,0x3f);
    DAT_1469e46d8 = pFVar7;
    FGenericPlatformString::Convert<wchar_t,char>(local_458,0x15,L"GetModuleInformation");
    pFVar7 = GetProcAddress(pHVar6,(LPCSTR)local_3d0);
    if (local_3d8 != 0) {
      FMemory::Free();
    }
    DAT_1469e46e8 = pFVar7;
    if ((((DAT_1469e46c8 != (FARPROC)0x0) && (DAT_1469e46d0 != (FARPROC)0x0)) &&
        (DAT_1469e46e0 != (FARPROC)0x0)) &&
       ((DAT_1469e46d8 != (FARPROC)0x0 && (pFVar7 != (FARPROC)0x0)))) {
      uVar3 = SymGetOptions();
      SymSetOptions(uVar3 | 0x616);
      FWindowsPlatformStackWalk::GetDownstreamStorage(&local_498);
      GetRemoteStorage(&local_488);
      if (local_498 != (tagPOINT)0x0) {
        FMemory::Free();
      }
      LVar15 = local_480;
      tVar18 = local_488;
      if (local_480 < 2) {
        _guard_xfg_dispatch_icall_nop(local_458,0,0x208);
        pHVar6 = GetModuleHandleW((LPCWSTR)0x0);
        aj = &DAT_00000104;
        DVar4 = GetModuleFileNameW(pHVar6,local_458,0x104);
        tVar18 = local_488;
        if (DVar4 != 0) {
          lVar17 = -1;
          local_498.x = 0;
          local_498.y = 0;
          local_490 = 0;
          if (local_458[0] != L'\0') {
            lVar11 = -1;
            do {
              lVar11 = lVar11 + 1;
            } while (local_458[lVar11] != L'\0');
            uVar3 = (int)lVar11 + 1;
            local_490 = (ulonglong)uVar3;
            if (0 < (int)uVar3) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_498,0);
            }
            aj = (LPBYTE)((longlong)(int)uVar3 * 2);
            FGenericPlatformString::Memcpy(local_498,local_458);
          }
          iVar5 = FPaths::GetPath((HDC)local_470,&local_498,aj,iVar5);
          ptVar8 = (tagPOINT *)CONCAT44(extraout_var,iVar5);
          if (&local_488 != ptVar8) {
            if (local_488 != (tagPOINT)0x0) {
              FMemory::Free();
            }
            local_488 = *ptVar8;
            ptVar8->x = 0;
            ptVar8->y = 0;
            local_47c = ptVar8[1].y;
            LVar15 = ptVar8[1].x;
            ptVar8[1].x = 0;
            ptVar8[1].y = 0;
          }
          iVar5 = local_47c;
          tVar18 = local_488;
          local_478 = local_47c;
          if (local_470[0] != 0) {
            FMemory::Free();
          }
          if (local_498 != (tagPOINT)0x0) {
            FMemory::Free();
          }
          local_498.x = 0;
          local_498.y = 0;
          local_490 = 2;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_498,0);
          tVar12 = local_498;
          local_4a8 = 0x3f;
          FGenericPlatformString::Convert<char,wchar_t>(local_498,2,&DAT_144cdc7f4);
          iVar14 = LVar15;
          if (((uint)local_490 != 0) && ((uint)local_490 + -1 != 0)) {
            local_480 = (uint)local_490 + -1 + (uint)(LVar15 == 0) + LVar15;
            if (iVar5 < local_480) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_488,LVar15);
              local_478 = local_47c;
              tVar18 = local_488;
            }
            iVar14 = local_480;
            puVar1 = (undefined2 *)
                     ((longlong)tVar18 + ((longlong)LVar15 - (ulonglong)(LVar15 != 0)) * 2);
            iVar5 = (uint)local_490 + -1;
            _guard_xfg_dispatch_icall_nop(puVar1,(void *)local_498,(longlong)iVar5 * 2);
            puVar1[iVar5] = 0;
            tVar12 = local_498;
          }
          if (tVar12 != (tagPOINT)0x0) {
            FMemory::Free(tVar12);
          }
          GetCurrentDirectoryW(0x104,local_248);
          local_498.x = 0;
          local_498.y = 0;
          local_490 = 0;
          tVar12 = tVar13;
          LVar15 = iVar14;
          if (local_248[0] != L'\0') {
            do {
              lVar17 = lVar17 + 1;
            } while (local_248[lVar17] != L'\0');
            uVar16 = (int)lVar17 + 1;
            local_490 = (ulonglong)uVar16;
            uVar3 = uVar16;
            if (0 < (int)uVar16) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_498,0);
              uVar3 = (uint)local_490;
            }
            tVar12 = local_498;
            FGenericPlatformString::Memcpy(local_498,local_248,(longlong)(int)uVar16 * 2);
            if ((uVar3 != 0) && (iVar5 = uVar3 - 1, iVar5 != 0)) {
              local_480 = iVar5 + (uint)(iVar14 == 0) + iVar14;
              if (local_478 < local_480) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_488,iVar14);
                tVar18 = local_488;
              }
              LVar15 = local_480;
              puVar1 = (undefined2 *)
                       ((longlong)tVar18 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(puVar1,(void *)tVar12,(longlong)iVar5 * 2);
              puVar1[iVar5] = 0;
            }
          }
          if (tVar12 != (tagPOINT)0x0) {
            FMemory::Free(tVar12);
          }
        }
        if (1 < LVar15) goto LAB_1416af432;
      }
      else {
LAB_1416af432:
        tVar13 = (tagPOINT)&DAT_143f3eda8;
        if (LVar15 != 0) {
          tVar13 = tVar18;
        }
      }
      pvVar9 = GetCurrentProcess();
      SymInitializeW(pvVar9,tVar13,1);
      DAT_1469e46a5 = '\0';
      DAT_1469e46a4 = '\x01';
      cVar10 = DAT_1469e46a4;
      if (tVar18 != (tagPOINT)0x0) {
        FMemory::Free(tVar18);
        cVar10 = DAT_1469e46a4;
      }
      goto LAB_1416af4a7;
    }
  }
  cVar10 = '\0';
LAB_1416af4a7:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1469e5968);
  return cVar10;
}



// FUNCTION 1416af540 FUN_1416af540 body=297 status=ok
// SIG undefined FUN_1416af540(void)

double FUN_1416af540(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10 [3];
  longlong *local_18;
  int local_10;
  
  QueryPerformanceFrequency(&local_res8);
  local_18 = (longlong *)0x0;
  DAT_1468b02f8 = 1.0 / (double)local_res8.QuadPart;
  DAT_1468b0300 = DAT_1468b02f8;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  local_10 = 2;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_144553e10;
    plVar1[1] = (longlong)FWindowsPlatformTime::UpdateCPUTime;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
  }
  uVar3 = FUN_14164ab60();
  FUN_14158f860(uVar3,local_res10,&local_18,L"FWindowsPlatformTime_UpdateCPUTime",0x3e800000);
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) goto LAB_1416af63e;
    (**(code **)(*local_18 + 0x28))(local_18,0);
    if (local_18 != (longlong *)0x0) {
      local_18 = (longlong *)FMemory::Realloc(local_18,0,0);
    }
    local_10 = 0;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
LAB_1416af63e:
  QueryPerformanceCounter(local_res10);
  return (double)local_res10[0].QuadPart * DAT_1468b02f8 + 16777216.0;
}



// FUNCTION 1416af680 Kill body=83 status=ok
// SIG undefined Kill(void)

undefined8 FRunnableThreadWin::Kill(longlong param_1,char param_2)

{
  BOOL BVar1;
  undefined4 extraout_var;
  
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
  }
  if (param_2 == '\x01') {
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x48),0xffffffff);
  }
  BVar1 = CloseHandle(*(HANDLE *)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x48) = 0;
  return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),1);
}



// FUNCTION 1416af6e0 FUN_1416af6e0 body=828 status=ok
// SIG undefined FUN_1416af6e0(void)

void FUN_1416af6e0(LPCWSTR param_1,undefined *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  wint_t wVar7;
  wint_t wVar8;
  HINSTANCE pHVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  void **ppvVar13;
  wint_t *pwVar14;
  longlong lVar15;
  wint_t *pwVar16;
  undefined *puVar17;
  wint_t *local_98;
  undefined8 local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  void *local_78;
  undefined8 local_70;
  void *local_68 [2];
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  
  iVar12 = 0;
  if ((param_3 != (undefined8 *)0x0) && ((undefined *)*param_3 != &DAT_144cdc644)) {
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_3);
      iVar12 = *(int *)(param_3 + 1);
    }
    *(int *)(param_3 + 1) = iVar12;
    if (*(int *)((longlong)param_3 + 0xc) < iVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3);
    }
  }
  local_98 = (wint_t *)0x0;
  local_90 = 0;
  cVar6 = FUN_14167f1a0(param_1,&local_98);
  if (((cVar6 != '\0') && ((int)local_90 != 0)) && (1 < (int)local_90 + -1)) {
    pwVar14 = &DAT_144cdd020;
    pwVar16 = local_98;
    do {
      wVar7 = *pwVar16;
      if ((wVar7 == 0) && (*pwVar14 == 0)) break;
      if (wVar7 != *pwVar14) {
        wVar7 = towlower(wVar7);
        wVar8 = towlower(*pwVar14);
        if (wVar7 != wVar8) goto LAB_1416af7da;
      }
      pwVar16 = pwVar16 + 1;
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
  goto LAB_1416af977;
LAB_1416af83a:
  if (wVar7 != wVar8) {
    pHVar9 = ShellExecuteW((HWND)0x0,L"open",param_1,(LPCWSTR)0x0,(LPCWSTR)0x0,1);
    if (param_3 != (undefined8 *)0x0) {
      if ((longlong)pHVar9 < 0x21) {
        uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_48,L"Failed launching URL",L"Core",L"UrlFailed");
        puVar11 = (undefined8 *)FText::ToString(uVar10);
        local_88 = (void *)0x0;
        local_80 = *(int *)(puVar11 + 1);
        lVar15 = (longlong)local_80;
        _Src = (void *)*puVar11;
        if (local_80 == 0) {
          local_7c = 0;
          ppvVar13 = &local_88;
          bVar5 = true;
          bVar4 = true;
          bVar3 = false;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,local_80,0);
          _guard_xfg_dispatch_icall_nop(local_88,_Src,lVar15 * 2);
          ppvVar13 = &local_88;
          bVar5 = true;
          bVar4 = true;
          bVar3 = false;
        }
      }
      else {
        local_78 = (void *)0x0;
        ppvVar13 = &local_78;
        local_70 = 0;
        bVar5 = false;
        bVar4 = false;
        bVar3 = true;
      }
      FString::operator=(param_3,ppvVar13);
      if (bVar3) {
        if (local_78 != (void *)0x0) {
          FMemory::Free();
        }
      }
      if (bVar4) {
        if (local_88 != (void *)0x0) {
          FMemory::Free();
        }
      }
      if ((bVar5) && (local_40 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar15 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)local_40 + 0xc);
          iVar12 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
    goto LAB_1416af9cd;
  }
  goto LAB_1416af977;
LAB_1416af7da:
  if (wVar7 != wVar8) {
    pwVar14 = &DAT_144cdd030;
    pwVar16 = &DAT_143f3eda8;
    if ((int)local_90 != 0) {
      pwVar16 = local_98;
    }
    do {
      wVar7 = *(wint_t *)((longlong)(pwVar16 + -0xa266e818) + (longlong)pwVar14);
      if ((wVar7 == 0) && (*pwVar14 == 0)) break;
      if (wVar7 != *pwVar14) {
        wVar7 = towlower(wVar7);
        wVar8 = towlower(*pwVar14);
        if (wVar7 != wVar8) goto LAB_1416af83a;
      }
      pwVar14 = pwVar14 + 1;
    } while( true );
  }
LAB_1416af977:
  puVar17 = &DAT_144cdc664;
  if (param_2 != (undefined *)0x0) {
    puVar17 = param_2;
  }
  FString::PrintfImpl(local_68,L"%s %s",param_1,puVar17);
  FString::TrimEnd(local_68,local_58);
  if (local_68[0] != (void *)0x0) {
    FMemory::Free();
  }
  FUN_1416afa20(local_58,param_3);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
LAB_1416af9cd:
  if (local_98 != (wint_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1416afa20 FUN_1416afa20 body=1969 status=ok
// SIG undefined FUN_1416afa20(void)

void FUN_1416afa20(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  void *pvVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  undefined8 uVar13;
  HINSTANCE pHVar14;
  undefined8 *puVar15;
  undefined2 *puVar16;
  wchar_t *pwVar17;
  void **ppvVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  wchar_t *pwVar24;
  undefined2 *puVar25;
  wchar_t *pwVar26;
  LPCWSTR lpFile;
  int local_res18 [2];
  undefined2 *local_res20;
  undefined8 in_stack_fffffffffffffeb8;
  undefined4 uVar28;
  ulonglong uVar27;
  uint in_stack_fffffffffffffec0;
  wchar_t *local_108;
  undefined8 local_100;
  undefined2 *local_f8;
  undefined8 local_f0;
  undefined4 *local_e8;
  int local_e0;
  int local_dc;
  undefined2 *local_d8;
  int local_d0;
  int local_cc;
  wchar_t *local_c8;
  int local_c0;
  undefined4 local_bc;
  wchar_t *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined4 *local_a8;
  int local_a0;
  int local_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  
  uVar28 = (undefined4)((ulonglong)in_stack_fffffffffffffeb8 >> 0x20);
  pwVar26 = (wchar_t *)0x0;
  local_res18[0] = 0;
  local_f8 = (undefined2 *)0x0;
  local_f0 = 0;
  local_88 = (void *)0x0;
  local_80 = 0;
  cVar8 = FUN_1416a6530(0xffffffff80000001,
                        L"Software\\Microsoft\\Windows\\Shell\\Associations\\UrlAssociations\\http\\UserChoice"
                        ,L"Progid");
  pvVar2 = local_88;
  if (cVar8 != '\0') {
    lVar23 = (longlong)(int)local_80;
    local_d8 = (undefined2 *)0x0;
    local_d0 = (int)local_80;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_d8,(0x14 - (uint)((int)local_80 != 0)) + (int)local_80,0);
    puVar25 = local_d8;
    _guard_xfg_dispatch_icall_nop(local_d8,pvVar2,lVar23 * 2);
    iVar9 = local_d0;
    lVar23 = (longlong)local_d0;
    local_d0 = (0x14 - (uint)(local_d0 != 0)) + local_d0;
    if (local_cc < local_d0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,iVar9);
      puVar25 = local_d8;
    }
    lVar23 = lVar23 - (ulonglong)(iVar9 != 0);
    pwVar24 = puVar25 + lVar23;
    pwVar24[0] = L'\\';
    pwVar24[1] = L's';
    pwVar24[2] = L'h';
    pwVar24[3] = L'e';
    pwVar24[4] = L'l';
    pwVar24[5] = L'l';
    pwVar24[6] = L'\\';
    pwVar24[7] = L'o';
    (puVar25 + lVar23 + 8)[0] = L'p';
    (puVar25 + lVar23 + 8)[1] = L'e';
    (puVar25 + lVar23 + 10)[0] = L'n';
    (puVar25 + lVar23 + 10)[1] = L'\\';
    (puVar25 + lVar23 + 0xc)[0] = L'c';
    (puVar25 + lVar23 + 0xc)[1] = L'o';
    (puVar25 + lVar23 + 0xe)[0] = L'm';
    (puVar25 + lVar23 + 0xe)[1] = L'm';
    *(undefined4 *)(puVar25 + lVar23 + 0x10) = 0x6e0061;
    puVar25[lVar23 + 0x12] = 100;
    puVar25[lVar23 + 0x13] = 0;
    puVar16 = &DAT_143f3eda8;
    if (local_d0 != 0) {
      puVar16 = puVar25;
    }
    FUN_1416a6530(0xffffffff80000000,puVar16,0);
    if (puVar25 != (undefined2 *)0x0) {
      FMemory::Free(puVar25);
    }
  }
  if ((int)local_f0 < 2) {
    FUN_1416a6530(0xffffffff80000000,L"http\\shell\\open\\command",0);
    if (1 < (int)local_f0) goto LAB_1416afba7;
  }
  else {
LAB_1416afba7:
    uVar13 = CONCAT44(uVar28,0xffffffff);
    local_108 = (wchar_t *)0x0;
    local_100 = 0;
    iVar9 = FUN_141592950(&local_f8,&DAT_144cdc354,1,0,uVar13);
    if (iVar9 != -1) {
      uVar19 = iVar9 + 1;
      uVar27 = CONCAT44((int)((ulonglong)uVar13 >> 0x20),uVar19);
      uVar10 = FUN_141592950(&local_f8,&DAT_144cdc48c,1,0,uVar27);
      if (uVar10 != 0xffffffff) {
        pwVar26 = (wchar_t *)0x0;
        uVar22 = (int)local_f0 - 1;
        if ((int)local_f0 == 0) {
          uVar22 = 0;
        }
        if (uVar19 < uVar22) {
          uVar22 = uVar19;
        }
        uVar19 = (int)local_f0 - 1;
        if ((int)local_f0 == 0) {
          uVar19 = 0;
        }
        uVar20 = uVar22;
        if ((uVar22 <= uVar10) && (uVar20 = uVar19, uVar10 < uVar19)) {
          uVar20 = uVar10;
        }
        local_b8 = (wchar_t *)0x0;
        local_ac = 0;
        puVar25 = &DAT_143f3eda8;
        if ((int)local_f0 != 0) {
          puVar25 = local_f8;
        }
        iVar9 = uVar20 - uVar22;
        pwVar24 = (wchar_t *)(ulonglong)(iVar9 + 1);
        if (iVar9 == 0) {
          pwVar24 = pwVar26;
        }
        local_res18[0] = (int)pwVar24;
        local_b0 = local_res18[0];
        if (0 < local_res18[0]) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
          pwVar26 = local_b8;
          local_res18[0] = local_b0;
          if (0 < local_b0) {
            wcsncpy(local_b8,puVar25 + (int)uVar22,(longlong)iVar9);
            pwVar26[iVar9] = L'\0';
          }
        }
        pwVar24 = (wchar_t *)0x0;
        uVar19 = uVar10 + 0x80000000;
        uVar22 = (int)local_f0 - 1;
        if ((int)local_f0 == 0) {
          uVar22 = 0;
        }
        if (uVar10 + 1 < uVar22) {
          uVar22 = uVar10 + 1;
        }
        uVar10 = (int)local_f0 - 1;
        if ((int)local_f0 == 0) {
          uVar10 = 0;
        }
        uVar20 = uVar22;
        if ((uVar22 <= uVar19) && (uVar20 = uVar10, uVar19 < uVar10)) {
          uVar20 = uVar19;
        }
        local_c8 = (wchar_t *)0x0;
        local_bc = 0;
        local_res20 = &DAT_143f3eda8;
        if ((int)local_f0 != 0) {
          local_res20 = local_f8;
        }
        iVar21 = uVar20 - uVar22;
        iVar9 = iVar21 + 1;
        if (iVar21 == 0) {
          iVar9 = 0;
        }
        local_c0 = iVar9;
        if ((0 < iVar9) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0), iVar9 = local_c0,
           pwVar24 = local_c8, 0 < local_c0)) {
          wcsncpy(local_c8,local_res20 + (int)uVar22,(longlong)iVar21);
          pwVar24[iVar21] = L'\0';
        }
        if (local_108 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        local_100 = CONCAT44(local_bc,iVar9);
        local_108 = pwVar24;
        if (1 < local_res18[0]) {
          if (*(int *)(param_1 + 1) == 0) {
            puVar25 = &DAT_143f3eda8;
          }
          else {
            puVar25 = (undefined2 *)*param_1;
          }
          iVar9 = FString::ReplaceInline(&local_108,&DAT_144cdc9f4,puVar25,1);
          if (iVar9 == 0) {
            iVar9 = *(int *)(param_1 + 1) + -1;
            if (*(int *)(param_1 + 1) == 0) {
              iVar9 = 0;
            }
            local_a8 = (undefined4 *)0x0;
            local_9c = 0;
            local_a0 = iVar9 + 3;
            if (0 < local_a0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
            }
            iVar11 = local_9c;
            iVar21 = local_a0;
            puVar7 = local_a8;
            *local_a8 = 0x220020;
            _guard_xfg_dispatch_icall_nop(local_a8 + 1,(void *)*param_1,(longlong)iVar9 * 2);
            *(undefined2 *)((longlong)puVar7 + (longlong)iVar9 * 2 + 4) = 0;
            local_e8 = puVar7;
            local_dc = iVar11;
            if (iVar11 < (int)((iVar21 == 0) + 1 + iVar21)) {
              local_e0 = iVar21;
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_e8);
              iVar21 = local_e0;
            }
            local_e0 = (2 - (uint)(iVar21 != 0)) + iVar21;
            if (local_dc < local_e0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,iVar21);
            }
            puVar7 = local_e8;
            uVar6 = local_100;
            puVar25 = (undefined2 *)
                      ((longlong)local_e8 + ((longlong)iVar21 - (ulonglong)(iVar21 != 0)) * 2);
            *puVar25 = 0x22;
            puVar25[1] = 0;
            if ((local_e0 != 0) && (iVar9 = local_e0 + -1, iVar9 != 0)) {
              iVar21 = (int)local_100;
              lVar23 = (longlong)(int)local_100;
              iVar11 = (uint)((int)local_100 == 0) + iVar9 + (int)local_100;
              local_100 = CONCAT44(local_100._4_4_,iVar11);
              if (local_100._4_4_ < iVar11) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,uVar6 & 0xffffffff);
              }
              pwVar24 = local_108 + (lVar23 - (ulonglong)(iVar21 != 0));
              _guard_xfg_dispatch_icall_nop(pwVar24,puVar7,(longlong)iVar9 * 2);
              pwVar24[iVar9] = L'\0';
            }
            if (puVar7 != (undefined4 *)0x0) {
              FMemory::Free(puVar7);
            }
          }
          pwVar24 = L"";
          if ((int)local_100 != 0) {
            pwVar24 = local_108;
          }
          pwVar17 = L"";
          if (local_res18[0] != 0) {
            pwVar17 = pwVar26;
          }
          plVar12 = (longlong *)
                    FUN_1416ad4c0(local_res18,pwVar17,pwVar24,1,uVar27 & 0xffffffffffffff00,
                                  in_stack_fffffffffffffec0 & 0xffffff00,0,0,0,0,0);
          if (*plVar12 != 0) {
            if (local_108 != (wchar_t *)0x0) {
              FMemory::Free();
            }
            if (pwVar26 != (wchar_t *)0x0) {
              FMemory::Free(pwVar26);
            }
            goto LAB_1416b0173;
          }
          if (param_2 != 0) {
            uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                               (local_68,L"Failed launching URL",L"Core",L"UrlFailed");
            uVar13 = FText::ToString(uVar13);
            FString::operator=(param_2,uVar13);
            if (local_60 != (longlong *)0x0) {
              LOCK();
              plVar12 = local_60 + 1;
              lVar23 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar23 == 1) {
                (**(code **)*local_60)(local_60);
                LOCK();
                piVar1 = (int *)((longlong)local_60 + 0xc);
                iVar9 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar9 == 1) {
                  (**(code **)(*local_60 + 8))(local_60,1);
                }
              }
            }
          }
        }
      }
    }
    if (local_108 != (wchar_t *)0x0) {
      FMemory::Free(local_108);
    }
    if (pwVar26 != (wchar_t *)0x0) {
      FMemory::Free(pwVar26);
    }
  }
  lpFile = L"";
  cVar8 = FString::StartsWith(param_1,L"http://",1);
  if ((cVar8 != '\0') || (cVar8 = FString::StartsWith(param_1,L"https://",1), cVar8 != '\0')) {
    if (*(int *)(param_1 + 1) != 0) {
      lpFile = (LPCWSTR)*param_1;
    }
    pHVar14 = ShellExecuteW((HWND)0x0,L"open",lpFile,(LPCWSTR)0x0,(LPCWSTR)0x0,1);
    if (param_2 != 0) {
      if ((longlong)pHVar14 < 0x21) {
        uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_50,L"Failed launching URL",L"Core",L"UrlFailed");
        puVar15 = (undefined8 *)FText::ToString(uVar13);
        local_98 = (void *)0x0;
        local_90 = *(int *)(puVar15 + 1);
        lVar23 = (longlong)local_90;
        pvVar2 = (void *)*puVar15;
        if (local_90 == 0) {
          local_8c = 0;
          ppvVar18 = &local_98;
          bVar5 = true;
          bVar4 = true;
          bVar3 = false;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,local_90,0);
          _guard_xfg_dispatch_icall_nop(local_98,pvVar2,lVar23 * 2);
          ppvVar18 = &local_98;
          bVar5 = true;
          bVar4 = true;
          bVar3 = false;
        }
      }
      else {
        local_78 = (void *)0x0;
        ppvVar18 = &local_78;
        local_70 = 0;
        bVar5 = false;
        bVar4 = false;
        bVar3 = true;
      }
      FString::operator=(param_2,ppvVar18);
      if ((bVar3) && (local_78 != (void *)0x0)) {
        FMemory::Free();
      }
      if ((bVar4) && (local_98 != (void *)0x0)) {
        FMemory::Free();
      }
      if ((bVar5) && (local_48 != (longlong *)0x0)) {
        LOCK();
        plVar12 = local_48 + 1;
        lVar23 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar23 == 1) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
      }
    }
  }
LAB_1416b0173:
  if (local_88 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_f8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1416b01e0 LoadLibraryWithSearchPaths body=790 status=ok
// SIG undefined LoadLibraryWithSearchPaths(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

HMODULE FWindowsPlatformProcess::LoadLibraryWithSearchPaths(undefined8 *param_1,undefined8 param_2)

{
  void *_Src;
  int iVar1;
  char cVar2;
  LPCWSTR *ppWVar3;
  HMODULE pHVar4;
  longlong *plVar5;
  LPCWSTR pWVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  ulonglong local_c0;
  LPCWSTR local_b8;
  int local_b0;
  undefined4 local_ac;
  ulonglong local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b0 = *(int *)(param_1 + 1);
  lVar7 = (longlong)local_b0;
  uVar9 = 0;
  _Src = (void *)*param_1;
  local_b8 = (LPCWSTR)0x0;
  if (local_b0 == 0) {
    local_ac = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,local_b0,0);
    ::_guard_xfg_dispatch_icall_nop(local_b8,_Src,lVar7 * 2);
  }
  local_c0 = 0;
  puVar12 = &DAT_143f3eda8;
  local_c8 = (longlong *)0x0;
  pWVar6 = L"";
  if (local_b0 != 0) {
    pWVar6 = local_b8;
  }
  lVar7 = -1;
  if ((pWVar6 != (LPCWSTR)0x0) && (*pWVar6 != L'\0')) {
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (pWVar6[lVar11] != L'\0');
    uVar10 = (int)lVar11 + 1;
    local_c0 = (ulonglong)uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
    }
    FGenericPlatformString::Memcpy(local_c8,pWVar6,(longlong)(int)uVar10 * 2);
  }
  cVar2 = FPaths::FileExists(&local_c8);
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (cVar2 != '\0') {
    ppWVar3 = (LPCWSTR *)FPaths::ConvertRelativePathToFull(&local_a8,&local_b8);
    if (&local_b8 != ppWVar3) {
      if (local_b8 != (LPCWSTR)0x0) {
        FMemory::Free();
      }
      local_b8 = *ppWVar3;
      *ppWVar3 = (LPCWSTR)0x0;
      local_b0 = *(int *)(ppWVar3 + 1);
      local_ac = *(undefined4 *)((longlong)ppWVar3 + 0xc);
      ppWVar3[1] = (LPCWSTR)0x0;
    }
    if (local_a8 != 0) {
      FMemory::Free();
    }
    local_98 = 0;
    pWVar6 = L"";
    if (local_b0 != 0) {
      pWVar6 = local_b8;
    }
    local_90 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_c8 = (longlong *)0x0;
    local_c0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    uVar8 = uVar9;
    if ((pWVar6 != (LPCWSTR)0x0) && (*pWVar6 != L'\0')) {
      do {
        lVar7 = lVar7 + 1;
      } while (pWVar6[lVar7] != L'\0');
      uVar10 = (int)lVar7 + 1;
      local_a0 = (ulonglong)uVar10;
      if (0 < (int)uVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
      }
      uVar8 = local_a8;
      FGenericPlatformString::Memcpy(local_a8,pWVar6,(longlong)(int)uVar10 * 2);
    }
    ResolveMissingImportsRecursive(&local_a8,param_2,&local_c8,&local_98);
    if (uVar8 != 0) {
      FMemory::Free(uVar8);
    }
    uVar8 = uVar9;
    iVar1 = (int)local_c0;
    plVar5 = local_c8;
    if (0 < (int)local_c0) {
      do {
        if (*(int *)((longlong)local_c8 + uVar8 + 8) == 0) {
          pWVar6 = L"";
        }
        else {
          pWVar6 = *(LPCWSTR *)((longlong)local_c8 + uVar8);
        }
        pHVar4 = GetModuleHandleW(pWVar6);
        if (pHVar4 == (HMODULE)0x0) {
          if (*(int *)((longlong)local_c8 + uVar8 + 8) == 0) {
            pWVar6 = L"";
          }
          else {
            pWVar6 = *(LPCWSTR *)((longlong)local_c8 + uVar8);
          }
          pHVar4 = LoadLibraryW(pWVar6);
          if (pHVar4 == (HMODULE)0x0) {
            LogImportDiagnostics(local_c8 + (longlong)(int)uVar9 * 2,param_2);
          }
        }
        uVar10 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar10;
        uVar8 = uVar8 + 0x10;
        iVar1 = (int)local_c0;
        plVar5 = local_c8;
      } while ((int)uVar10 < (int)local_c0);
    }
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
    local_50 = 0;
    if (local_58 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_98);
  }
  pWVar6 = L"";
  if (local_b0 != 0) {
    pWVar6 = local_b8;
  }
  pHVar4 = LoadLibraryW(pWVar6);
  if (pHVar4 == (HMODULE)0x0) {
    plVar5 = (longlong *)FUN_1415c3d50();
    if (*(int *)(param_1 + 1) != 0) {
      puVar12 = (undefined2 *)*param_1;
    }
    cVar2 = (**(code **)(*plVar5 + 0x48))(plVar5,puVar12);
    if (cVar2 != '\0') {
      LogImportDiagnostics(param_1,param_2);
    }
  }
  if (local_b8 != (LPCWSTR)0x0) {
    FMemory::Free();
  }
  return pHVar4;
}



// FUNCTION 1416b0500 LogImportDiagnostics body=200 status=ok
// SIG undefined LogImportDiagnostics(void)

void LogImportDiagnostics(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined2 *puVar4;
  LPCWSTR lpModuleName;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *local_18;
  undefined8 local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  if (*(int *)(param_1 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*param_1;
  }
  cVar3 = ReadLibraryImports(puVar4,&local_18);
  plVar2 = local_18;
  uVar7 = (uint)local_10;
  uVar8 = (ulonglong)(int)(uint)local_10;
  plVar1 = plVar2;
  if (cVar3 != '\0') {
    plVar6 = local_18 + uVar8 * 2;
    for (plVar5 = local_18; plVar5 != plVar6; plVar5 = plVar5 + 2) {
      if ((int)plVar5[1] == 0) {
        lpModuleName = L"";
      }
      else {
        lpModuleName = (LPCWSTR)*plVar5;
      }
      GetModuleHandleW(lpModuleName);
    }
  }
  while (uVar7 != 0) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    uVar7 = (int)uVar8 - 1;
    uVar8 = (ulonglong)uVar7;
    plVar1 = plVar1 + 2;
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
    return;
  }
  return;
}



// FUNCTION 1416b05d0 MakeThreadContextWrapper body=227 status=ok
// SIG undefined MakeThreadContextWrapper(void)

undefined4 *
FWindowsPlatformStackWalk::MakeThreadContextWrapper(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar4 = (undefined4 *)operator_new(0x4f0);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 0x5397fe56;
    ::_guard_xfg_dispatch_icall_nop(puVar4 + 4,0,0x4d0);
  }
  lVar5 = 9;
  puVar3 = (undefined8 *)(puVar4 + 4);
  do {
    puVar7 = param_1;
    puVar6 = puVar3;
    uVar1 = puVar7[1];
    *puVar6 = *puVar7;
    puVar6[1] = uVar1;
    uVar1 = puVar7[3];
    puVar6[2] = puVar7[2];
    puVar6[3] = uVar1;
    uVar1 = puVar7[5];
    puVar6[4] = puVar7[4];
    puVar6[5] = uVar1;
    uVar1 = puVar7[7];
    puVar6[6] = puVar7[6];
    puVar6[7] = uVar1;
    uVar1 = puVar7[9];
    puVar6[8] = puVar7[8];
    puVar6[9] = uVar1;
    uVar1 = puVar7[0xb];
    puVar6[10] = puVar7[10];
    puVar6[0xb] = uVar1;
    uVar1 = puVar7[0xd];
    puVar6[0xc] = puVar7[0xc];
    puVar6[0xd] = uVar1;
    uVar1 = puVar7[0xf];
    puVar6[0xe] = puVar7[0xe];
    puVar6[0xf] = uVar1;
    lVar5 = lVar5 + -1;
    puVar3 = puVar6 + 0x10;
    param_1 = puVar7 + 0x10;
  } while (lVar5 != 0);
  uVar1 = puVar7[0x11];
  puVar6[0x10] = puVar7[0x10];
  puVar6[0x11] = uVar1;
  uVar1 = puVar7[0x13];
  puVar6[0x12] = puVar7[0x12];
  puVar6[0x13] = uVar1;
  uVar1 = puVar7[0x15];
  puVar6[0x14] = puVar7[0x14];
  puVar6[0x15] = uVar1;
  uVar1 = puVar7[0x17];
  puVar6[0x16] = puVar7[0x16];
  puVar6[0x17] = uVar1;
  uVar1 = puVar7[0x18];
  uVar2 = puVar7[0x19];
  *(undefined8 *)(puVar4 + 0x138) = param_2;
  puVar6[0x18] = uVar1;
  puVar6[0x19] = uVar2;
  return puVar4;
}



// FUNCTION 1416b06c0 MapRvaToPointer body=114 status=ok
// SIG undefined MapRvaToPointer(void)

longlong MapRvaToPointer(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  uVar3 = uVar2;
  if ((ulonglong)*(ushort *)(param_2 + 6) != 0) {
    do {
      uVar1 = *(uint *)(uVar2 + 0x114 + param_2);
      if ((uVar1 <= param_3) && (param_3 < *(int *)(uVar2 + 0x118 + param_2) + uVar1)) {
        return ((ulonglong)*(uint *)(uVar2 + 0x11c + param_2) - (ulonglong)uVar1) + param_1 +
               param_3;
      }
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 + 0x28;
    } while (uVar3 < *(ushort *)(param_2 + 6));
  }
  return 0;
}



// FUNCTION 1416b0750 FUN_1416b0750 body=3 status=ok
// SIG undefined FUN_1416b0750(void)

void FUN_1416b0750(void)

{
  return;
}



// FUNCTION 1416b0760 PopDllDirectory body=250 status=ok
// SIG undefined PopDllDirectory(void)

void FWindowsPlatformProcess::PopDllDirectory(void)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  LPCWSTR lpPathName;
  
  plVar5 = (longlong *)((longlong)(DAT_1469e46b0 + -1) * 0x10 + DAT_1469e46a8);
  lVar2 = *plVar5;
  *plVar5 = 0;
  plVar5[1] = 0;
  iVar3 = DAT_1469e46b0;
  iVar1 = DAT_1469e46b0 + -1;
  if (*(longlong *)(DAT_1469e46a8 + (longlong)iVar1 * 0x10) != 0) {
    FMemory::Free();
  }
  iVar4 = (DAT_1469e46b0 - iVar1) + -1;
  if (iVar4 != 0) {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(DAT_1469e46a8 + (longlong)iVar1 * 0x10),
               (void *)((longlong)iVar3 * 0x10 + DAT_1469e46a8),(longlong)iVar4 << 4);
  }
  DAT_1469e46b0 = DAT_1469e46b0 + -1;
  TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(&DAT_1469e46a8);
  if (lVar2 != 0) {
    FMemory::Free(lVar2);
  }
  if (DAT_1469e46b0 < 1) {
    lpPathName = L"";
  }
  else {
    puVar6 = (undefined8 *)((longlong)(DAT_1469e46b0 + -1) * 0x10 + DAT_1469e46a8);
    if (*(int *)(puVar6 + 1) == 0) {
      lpPathName = L"";
    }
    else {
      lpPathName = (LPCWSTR)*puVar6;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001416b0853. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetDllDirectoryW(lpPathName);
  return;
}



// FUNCTION 1416b0860 ProgramCounterToSymbolInfo body=529 status=ok
// SIG undefined ProgramCounterToSymbolInfo(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FWindowsPlatformStackWalk::ProgramCounterToSymbolInfo(undefined8 param_1,char *param_2)

{
  int iVar1;
  HANDLE pvVar2;
  char *pcVar3;
  longlong lVar4;
  undefined1 auStack_b28 [32];
  undefined8 local_b08;
  undefined8 local_b00;
  undefined8 local_af8;
  char *local_af0;
  undefined8 local_ae8;
  undefined4 local_ad8;
  undefined1 local_ad4 [64];
  char local_a94 [1612];
  undefined4 local_448 [6];
  undefined4 local_430;
  char local_42c [1028];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b28;
  FUN_1416aee50();
  *(undefined8 *)(param_2 + 0xc10) = param_1;
  pvVar2 = GetCurrentProcess();
  ::_guard_xfg_dispatch_icall_nop(local_448,0,0x420);
  local_448[0] = 0x420;
  local_430 = 0x400;
  iVar1 = SymGetSymFromAddr64(pvVar2,param_1,0,local_448);
  if (iVar1 == 0) {
    GetLastError();
  }
  else {
    iVar1 = 0;
    for (pcVar3 = local_42c; *pcVar3 < ' '; pcVar3 = pcVar3 + 1) {
      iVar1 = iVar1 + 1;
    }
    pcVar3 = param_2 + 0x400;
    strncpy(pcVar3,local_42c + iVar1,0x400);
    lVar4 = -1;
    param_2[0x7ff] = '\0';
    do {
      lVar4 = lVar4 + 1;
    } while (pcVar3[lVar4] != '\0');
    iVar1 = 0x400 - (int)lVar4;
    if (0 < iVar1) {
      strncpy(pcVar3 + (int)lVar4,"()",(longlong)iVar1);
      (pcVar3 + (int)lVar4)[(longlong)iVar1 - 1] = '\0';
    }
  }
  local_b08 = 0x28;
  local_b00 = 0;
  local_af8 = 0;
  local_af0 = (char *)0x0;
  local_ae8 = 0;
  iVar1 = SymGetLineFromAddr64(pvVar2,param_1,param_2 + 0xc04,&local_b08);
  if (iVar1 == 0) {
    GetLastError();
  }
  else {
    strncpy(param_2 + 0x800,local_af0,0x400);
    param_2[0xbff] = '\0';
    *(undefined4 *)(param_2 + 0xc00) = (undefined4)local_af8;
  }
  ::_guard_xfg_dispatch_icall_nop(local_ad4,0,0x68c);
  local_ad8 = 0x690;
  iVar1 = SymGetModuleInfo64(pvVar2,param_1,&local_ad8);
  if (iVar1 == 0) {
    GetLastError();
  }
  else {
    strncpy(param_2,local_a94,0x400);
    param_2[0x3ff] = '\0';
  }
  return;
}



// FUNCTION 1416b0a80 PushDllDirectory body=221 status=ok
// SIG undefined PushDllDirectory(void)

void FWindowsPlatformProcess::PushDllDirectory(LPCWSTR param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_18;
  int local_10;
  int local_c;
  
  SetDllDirectoryW(param_1);
  uVar5 = 0;
  local_18 = 0;
  iVar4 = 0;
  local_c = 0;
  iVar6 = iVar4;
  if ((param_1 != (LPCWSTR)0x0) && (iVar6 = 0, *param_1 != L'\0')) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (param_1[lVar3] != L'\0');
    iVar2 = (int)lVar3 + 1;
    local_10 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    iVar6 = local_c;
    iVar4 = local_10;
    uVar5 = local_18;
    FGenericPlatformString::Memcpy(local_18,param_1,(longlong)iVar2 * 2);
  }
  iVar2 = DAT_1469e46b0;
  lVar3 = (longlong)DAT_1469e46b0;
  DAT_1469e46b0 = DAT_1469e46b0 + 1;
  if (DAT_1469e46b4 < DAT_1469e46b0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1469e46a8,iVar2);
  }
  puVar1 = (undefined8 *)(lVar3 * 0x10 + DAT_1469e46a8);
  *puVar1 = uVar5;
  *(int *)(puVar1 + 1) = iVar4;
  *(int *)((longlong)puVar1 + 0xc) = iVar6;
  return;
}



// FUNCTION 1416b0b60 ReadLibraryImports body=593 status=ok
// SIG undefined ReadLibraryImports(void)

undefined8 ReadLibraryImports(LPCWSTR param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 *hFile;
  HANDLE hFileMappingObject;
  short *lpBaseAddress;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int *piVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong local_48;
  ulonglong local_40;
  
  lVar14 = 0;
  uVar8 = 0;
  hFile = CreateFileW(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile != &DAT_ffffffffffffffff) {
    hFileMappingObject = CreateFileMappingW(hFile,(LPSECURITY_ATTRIBUTES)0x0,2,0,0,(LPCWSTR)0x0);
    if (hFileMappingObject != (HANDLE)0x0) {
      lpBaseAddress = MapViewOfFile(hFileMappingObject,4,0,0,0);
      if (lpBaseAddress != (short *)0x0) {
        if ((*lpBaseAddress == 0x5a4d) &&
           (piVar9 = (int *)((longlong)*(int *)(lpBaseAddress + 0x1e) + (longlong)lpBaseAddress),
           *piVar9 == 0x4550)) {
          lVar3 = MapRvaToPointer(lpBaseAddress,piVar9,piVar9[0x24]);
          if (piVar9[0x25] != 0) {
            uVar7 = 0;
            do {
              uVar11 = 0;
              iVar1 = *(int *)(uVar7 + 0xc + lVar3);
              if (iVar1 != 0) {
                pcVar4 = (char *)MapRvaToPointer(lpBaseAddress,piVar9,iVar1);
                local_48 = 0;
                uVar10 = 0;
                local_40 = local_40 & 0xffffffff;
                uVar13 = uVar10;
                if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
                  lVar5 = -1;
                  do {
                    lVar2 = lVar5 + 1;
                    lVar5 = lVar5 + 1;
                  } while (pcVar4[lVar2] != '\0');
                  uVar12 = (int)lVar5 + 1;
                  local_40 = (ulonglong)uVar12;
                  uVar7 = uVar11;
                  uVar10 = uVar12;
                  if (0 < (int)uVar12) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
                    uVar7 = local_40 >> 0x20;
                    uVar10 = (uint)local_40;
                  }
                  uVar11 = local_48;
                  uVar13 = (uint)uVar7;
                  FGenericPlatformString::Convert<char,wchar_t>(local_48,uVar12,pcVar4,uVar12,0x3f);
                }
                iVar1 = (int)param_2[1];
                *(int *)(param_2 + 1) = iVar1 + 1;
                if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
                }
                local_48 = 0;
                puVar6 = (ulonglong *)((longlong)iVar1 * 0x10 + *param_2);
                local_40 = 0;
                *puVar6 = uVar11;
                *(uint *)(puVar6 + 1) = uVar10;
                *(uint *)((longlong)puVar6 + 0xc) = uVar13;
              }
              lVar14 = lVar14 + 1;
              uVar7 = lVar14 * 0x14;
            } while (uVar7 < (uint)piVar9[0x25]);
          }
          uVar8 = 1;
        }
        UnmapViewOfFile(lpBaseAddress);
      }
      CloseHandle(hFileMappingObject);
    }
    CloseHandle(hFile);
  }
  return uVar8;
}



// FUNCTION 1416b0dc0 FUN_1416b0dc0 body=325 status=ok
// SIG undefined FUN_1416b0dc0(void)

void FUN_1416b0dc0(void)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 local_res8 [8];
  
  lVar6 = FUN_14168dc80();
  plVar1 = (longlong *)(lVar6 + 0x108);
  plVar7 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_GetPoolName_144045958;
    plVar7[1] = (longlong)&LAB_1416b0740;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[3] = lVar8;
    *plVar7 = (longlong)&PTR_GetPoolName_1440459a0;
    if (*(int *)(lVar6 + 0x11c) < 1) {
      *(int *)(lVar6 + 0x118) = *(int *)(lVar6 + 0x118) + -1;
      iVar2 = *(int *)(lVar6 + 0x110);
      if (*(int *)(lVar6 + 0x118) <= iVar2) {
        uVar11 = 0;
        uVar12 = uVar11;
        iVar10 = iVar2;
        if (0 < iVar2) {
          do {
            if (((*(int *)(uVar11 + 8 + *plVar1) == 0) ||
                (plVar3 = *(longlong **)(uVar11 + *plVar1), plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x10))(), cVar4 != '\0')) {
              TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(plVar1,uVar12,1,1);
            }
            else {
              uVar12 = (ulonglong)((int)uVar12 + 1);
              uVar11 = uVar11 + 0x10;
            }
            iVar10 = *(int *)(lVar6 + 0x110);
          } while ((int)uVar12 < iVar10);
        }
        iVar5 = iVar10 * 2;
        if (iVar5 < 3) {
          iVar5 = 2;
        }
        *(int *)(lVar6 + 0x118) = iVar5;
        if ((iVar5 < iVar2) && (*(int *)(lVar6 + 0x114) != iVar10)) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar1);
        }
      }
    }
    (**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
    iVar2 = *(int *)(lVar6 + 0x110);
    *(int *)(lVar6 + 0x110) = iVar2 + 1;
    if (*(int *)(lVar6 + 0x114) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    puVar9 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar9 = plVar7;
    *(undefined4 *)(puVar9 + 1) = 2;
  }
  return;
}



// FUNCTION 1416b0f10 ReleaseThreadContextWrapper body=10 status=ok
// SIG undefined ReleaseThreadContextWrapper(void)

void FWindowsPlatformStackWalk::ReleaseThreadContextWrapper(undefined8 param_1)

{
  FMemory::operator_delete(param_1,0x4f0);
  return;
}



// FUNCTION 1416b0f20 FUN_1416b0f20 body=30 status=ok
// SIG undefined FUN_1416b0f20(void)

void FUN_1416b0f20(longlong param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
                    /* WARNING: Could not recover jumptable at 0x0001416b0f37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ResetEvent(*(HANDLE *)(param_1 + 0x10));
  return;
}



// FUNCTION 1416b0f50 ResolveMissingImportsRecursive body=950 status=ok
// SIG undefined ResolveMissingImportsRecursive(void)

void ResolveMissingImportsRecursive
               (undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  void *pvVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  HMODULE pHVar8;
  longlong lVar9;
  void **ppvVar10;
  undefined2 *puVar11;
  LPCWSTR lpModuleName;
  int iVar12;
  short *psVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  undefined1 local_res8 [8];
  longlong *local_res10;
  longlong *local_res18;
  undefined8 local_res20;
  undefined1 local_b8 [8];
  longlong *local_b0;
  ulonglong local_a8;
  void *local_a0;
  void *local_98;
  void *local_90;
  int local_88;
  undefined4 local_84;
  longlong *local_80;
  ulonglong local_78;
  longlong local_70;
  int local_68;
  undefined4 local_64;
  longlong local_60 [4];
  
  local_80 = (longlong *)0x0;
  local_78 = 0;
  if (*(int *)(param_1 + 1) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*param_1;
  }
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  cVar5 = ReadLibraryImports(puVar11,&local_80);
  uVar17 = local_78 & 0xffffffff;
  if ((cVar5 != '\0') && (plVar15 = local_80, 0 < (int)local_78)) {
    do {
      local_a8 = uVar17;
      local_b0 = plVar15;
      piVar7 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId
                                (param_4,local_res8,plVar15);
      if (*piVar7 == -1) {
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                  (param_4,local_b8,plVar15,0);
        if ((int)plVar15[1] == 0) {
          lpModuleName = L"";
        }
        else {
          lpModuleName = (LPCWSTR)*plVar15;
        }
        pHVar8 = GetModuleHandleW(lpModuleName);
        if (pHVar8 == (HMODULE)0x0) {
          lVar9 = 0;
          local_a0 = (void *)0x0;
          local_98 = (void *)0x0;
          iVar19 = 0;
          if ((int)plVar15[1] == 0) {
            psVar13 = &DAT_143f3eda8;
          }
          else {
            psVar13 = (short *)*plVar15;
          }
          local_70 = 0;
          local_64 = 0;
          if ((psVar13 != (short *)0x0) && (*psVar13 != 0)) {
            lVar9 = -1;
            do {
              lVar1 = lVar9 + 1;
              lVar9 = lVar9 + 1;
            } while (psVar13[lVar1] != 0);
            local_68 = (int)lVar9 + 1;
            if (0 < local_68) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,0);
            }
            iVar19 = local_68;
            lVar9 = local_70;
            FGenericPlatformString::Memcpy(local_70,psVar13);
          }
          uVar16 = 0;
          uVar17 = uVar16;
          if (0 < (int)param_2[1]) {
            do {
              lVar1 = *param_2;
              iVar12 = iVar19 + -1;
              if (iVar19 == 0) {
                iVar12 = 0;
              }
              if ((*(int *)(lVar1 + 8 + uVar16) != 0) || (iVar6 = 2, iVar12 == -1)) {
                iVar6 = 1;
              }
              local_90 = (void *)0x0;
              local_88 = *(int *)(lVar1 + 8 + uVar16);
              lVar18 = (longlong)local_88;
              pvVar2 = *(void **)(lVar1 + uVar16);
              if ((local_88 == 0) && (iVar6 + iVar12 == 0)) {
                local_84 = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                          (&local_90,iVar6 + iVar12 + local_88,0);
                _guard_xfg_dispatch_icall_nop(local_90,pvVar2,lVar18 * 2);
              }
              FString::PathAppend(&local_90,lVar9,iVar12);
              cVar5 = FPaths::FileExists(&local_90);
              if (cVar5 != '\0') {
                ppvVar10 = (void **)FPaths::ConvertRelativePathToFull(local_60,&local_90);
                if (&local_a0 != ppvVar10) {
                  if (local_a0 != (void *)0x0) {
                    FMemory::Free();
                  }
                  local_a0 = *ppvVar10;
                  *ppvVar10 = (void *)0x0;
                  local_98 = ppvVar10[1];
                  ppvVar10[1] = (void *)0x0;
                }
                if (local_60[0] != 0) {
                  FMemory::Free();
                }
                if (local_90 != (void *)0x0) {
                  FMemory::Free();
                }
                bVar3 = true;
                goto LAB_1416b117a;
              }
              if (local_90 != (void *)0x0) {
                FMemory::Free();
              }
              uVar20 = (int)uVar17 + 1;
              uVar16 = uVar16 + 0x10;
              uVar17 = (ulonglong)uVar20;
              param_2 = local_res10;
            } while ((int)uVar20 < (int)local_res10[1]);
          }
          bVar3 = false;
LAB_1416b117a:
          if (lVar9 != 0) {
            FMemory::Free(lVar9);
          }
          plVar15 = local_res18;
          param_2 = local_res10;
          if (bVar3) {
            ResolveMissingImportsRecursive(&local_a0,local_res10,local_res18);
            iVar19 = (int)plVar15[1];
            *(int *)(plVar15 + 1) = iVar19 + 1;
            if (*(int *)((longlong)plVar15 + 0xc) < iVar19 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar19);
            }
            pvVar2 = local_a0;
            puVar14 = (undefined8 *)((longlong)iVar19 * 0x10 + *plVar15);
            *puVar14 = 0;
            lVar9 = (longlong)(int)local_98;
            *(int *)(puVar14 + 1) = (int)local_98;
            if ((int)local_98 == 0) {
              *(undefined4 *)((longlong)puVar14 + 0xc) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                        (puVar14,(ulonglong)local_98 & 0xffffffff,0);
              _guard_xfg_dispatch_icall_nop((void *)*puVar14,pvVar2,lVar9 * 2);
            }
          }
          plVar15 = local_b0;
          param_4 = local_res20;
          if (local_a0 != (void *)0x0) {
            FMemory::Free();
            plVar15 = local_b0;
            param_4 = local_res20;
          }
        }
      }
      local_b0 = plVar15 + 2;
      plVar15 = local_b0;
      uVar17 = local_a8 - 1;
    } while (local_a8 - 1 != 0);
    uVar17 = local_78 & 0xffffffff;
    local_a8 = 0;
  }
  plVar4 = local_80;
  uVar20 = (uint)uVar17;
  plVar15 = local_80;
  while (uVar20 != 0) {
    if (*plVar15 != 0) {
      FMemory::Free();
    }
    plVar15 = plVar15 + 2;
    uVar20 = (int)uVar17 - 1;
    uVar17 = (ulonglong)uVar20;
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  return;
}



// FUNCTION 1416b1310 Run body=106 status=ok
// SIG undefined Run(void)

undefined4 FRunnableThreadWin::Run(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = (**(code **)**(undefined8 **)(param_1 + 0x18))();
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x20) + 0x10);
  if (cVar2 == '\x01') {
    (*pcVar1)();
    FRunnableThread::SetTls(param_1);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x18) + 8))();
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
    FRunnableThread::FreeTls(param_1);
    return uVar3;
  }
  (*pcVar1)();
  return 1;
}



// FUNCTION 1416b1380 FUN_1416b1380 body=8 status=ok
// SIG undefined FUN_1416b1380(void)

wchar_t * FUN_1416b1380(void)

{
  return L"Borderlands 3";
}



// FUNCTION 1416b1390 SetCurrentWorkingDirectoryToBaseDir body=28 status=ok
// SIG undefined SetCurrentWorkingDirectoryToBaseDir(void)

void FWindowsPlatformProcess::SetCurrentWorkingDirectoryToBaseDir(void)

{
  undefined8 uVar1;
  
  FGenericPlatformMisc::CacheLaunchDir();
  uVar1 = FUN_1416ac480();
                    /* WARNING: Could not recover jumptable at 0x0001416b13a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetCurrentDirectoryW(uVar1);
  return;
}



// FUNCTION 1416b13d0 SetThreadAffinityMask body=38 status=ok
// SIG DWORD_PTR SetThreadAffinityMask(HANDLE hThread, DWORD_PTR dwThreadAffinityMask)

DWORD_PTR __stdcall
FWindowsPlatformProcess::SetThreadAffinityMask(HANDLE hThread,DWORD_PTR dwThreadAffinityMask)

{
  DWORD_PTR in_RAX;
  HANDLE hThread_00;
  
  if (hThread != &DAT_ffffffffffffffff) {
    hThread_00 = GetCurrentThread();
    in_RAX = ::SetThreadAffinityMask(hThread_00,(DWORD_PTR)hThread);
  }
  return in_RAX;
}



// FUNCTION 1416b1400 SetThreadName body=86 status=ok
// SIG undefined SetThreadName(void)

void FRunnableThreadWin::SetThreadName(undefined4 param_1,undefined8 param_2)

{
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  Sleep(10);
  local_28[0] = 0x1000;
  local_14 = 0;
  local_20 = param_2;
  local_18 = param_1;
  RaiseException(0x406d1388,0,3,(ULONG_PTR *)local_28);
  return;
}



// FUNCTION 1416b1460 SetThreadPriority body=37 status=ok
// SIG BOOL SetThreadPriority(HANDLE hThread, int nPriority)

BOOL __stdcall FRunnableThreadWin::SetThreadPriority(HANDLE hThread,int nPriority)

{
  int nPriority_00;
  BOOL BVar1;
  
  *(int *)((longlong)hThread + 0x40) = nPriority;
  nPriority_00 = FUN_1416ab990(nPriority);
                    /* WARNING: Could not recover jumptable at 0x0001416b147e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ::SetThreadPriority(*(HANDLE *)((longlong)hThread + 0x48),nPriority_00);
  return BVar1;
}



// FUNCTION 1416b1490 FUN_1416b1490 body=708 status=ok
// SIG undefined FUN_1416b1490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1416b1490(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  short *psVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_4b8 [32];
  undefined4 local_498;
  longlong local_488;
  ulonglong local_480;
  undefined8 local_478;
  int local_470;
  int local_46c;
  longlong local_468 [2];
  WCHAR local_458 [264];
  WCHAR local_248 [264];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_4b8;
  uVar5 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e4b18) {
    _Init_thread_header(&DAT_1469e4b18);
    if (DAT_1469e4b18 == -1) {
      DAT_1469e4b08 = (short *)0x0;
      _DAT_1469e4b10 = 0;
      atexit((_func_5014 *)&LAB_143e7b510);
      _Init_thread_footer(&DAT_1469e4b18);
    }
  }
  lVar7 = -1;
  if ((DAT_1469e4b10 == 0) || (DAT_1469e4b10 == 1)) {
    _guard_xfg_dispatch_icall_nop(local_248,0,0x208);
    GetTempPathW(0x104,local_248);
    _guard_xfg_dispatch_icall_nop(local_458,0,0x208);
    GetLongPathNameW(local_248,local_458,0x104);
    local_480 = 0;
    local_488 = 0;
    if (local_458[0] != L'\0') {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (local_458[lVar3] != L'\0');
      uVar2 = (int)lVar3 + 1;
      local_480 = (ulonglong)uVar2;
      if (0 < (int)uVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_488,0);
      }
      FGenericPlatformString::Memcpy(local_488,local_458,(longlong)(int)uVar2 * 2);
    }
    local_498 = 1;
    puVar1 = (undefined8 *)FString::Replace(&local_488,local_468,&DAT_144cdcc64,&DAT_144cdcc24);
    if ((short **)puVar1 != &DAT_1469e4b08) {
      if (DAT_1469e4b08 != (short *)0x0) {
        FMemory::Free();
      }
      DAT_1469e4b08 = (short *)*puVar1;
      *puVar1 = 0;
      _DAT_1469e4b10 = puVar1[1];
      puVar1[1] = 0;
    }
    if (local_468[0] != 0) {
      FMemory::Free();
    }
    if (local_488 != 0) {
      FMemory::Free();
    }
  }
  local_478 = 0;
  local_46c = 0;
  psVar4 = &DAT_143f3eda8;
  if (DAT_1469e4b10 != 0) {
    psVar4 = DAT_1469e4b08;
  }
  iVar8 = 0;
  iVar9 = 0;
  if ((psVar4 != (short *)0x0) && (iVar8 = 0, iVar9 = 0, *psVar4 != 0)) {
    do {
      lVar7 = lVar7 + 1;
    } while (psVar4[lVar7] != 0);
    iVar6 = (int)lVar7 + 1;
    local_470 = iVar6;
    if (0 < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_478,0);
    }
    iVar8 = local_46c;
    iVar9 = local_470;
    uVar5 = local_478;
    FGenericPlatformString::Memcpy(local_478,psVar4,(longlong)iVar6 * 2);
    iVar6 = 0x18;
    if (iVar9 != 0) goto LAB_1416b16b1;
  }
  iVar6 = 0x19;
LAB_1416b16b1:
  *param_1 = uVar5;
  *(int *)(param_1 + 1) = iVar9;
  *(int *)((longlong)param_1 + 0xc) = iVar8;
  if (iVar8 < iVar6 + iVar9) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1);
  }
  FString::PathAppend(param_1,L"UnrealShaderWorkingDir/",0x17);
  return param_1;
}



// FUNCTION 1416b1760 FUN_1416b1760 body=155 status=ok
// SIG undefined FUN_1416b1760(void)

void FUN_1416b1760(float param_1)

{
  DWORD dwMilliseconds;
  BOOL BVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18 [2];
  code *local_28;
  undefined1 *puStack_20;
  
  QueryPerformanceCounter(local_res18);
  dwMilliseconds = (DWORD)(longlong)(param_1 * 1000.0);
  if (dwMilliseconds == 0) {
    BVar1 = SwitchToThread();
    if (BVar1 != 0) goto LAB_1416b17a0;
    dwMilliseconds = 0;
  }
  Sleep(dwMilliseconds);
LAB_1416b17a0:
  puStack_20 = local_res8;
  local_res8[0] = 0;
  local_28 = FUN_1415a3f40;
  lVar2 = FUN_1415d8310(&local_28,&DAT_1464a8c00);
  QueryPerformanceCounter(&local_res10);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + (local_res10.s.LowPart - local_res18[0]._0_4_);
  return;
}



// FUNCTION 1416b1800 SleepInfinite body=12 status=ok
// SIG undefined SleepInfinite(void)

void FWindowsPlatformProcess::SleepInfinite(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001416b1805. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Sleep(0xffffffff);
  return;
}



// FUNCTION 1416b1810 FUN_1416b1810 body=62 status=ok
// SIG undefined FUN_1416b1810(void)

void FUN_1416b1810(float param_1)

{
  DWORD dwMilliseconds;
  BOOL BVar1;
  
  dwMilliseconds = (DWORD)(longlong)(param_1 * 1000.0);
  if (dwMilliseconds != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001416b1842. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    Sleep(dwMilliseconds);
    return;
  }
  BVar1 = SwitchToThread();
  if (BVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001416b1835. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    Sleep(0);
    return;
  }
  return;
}



// FUNCTION 1416b1850 StackWalkAndDump body=59 status=ok
// SIG undefined StackWalkAndDump(void)

void FWindowsPlatformStackWalk::StackWalkAndDump
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_1416aee50();
  FGenericPlatformStackWalk::StackWalkAndDump(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1416b1890 MNP_OverrideOutput_WC body=27 status=ok
// SIG undefined MNP_OverrideOutput_WC(void)

void MNP_OverrideOutput_WC(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(short *)(param_1 + lVar1 * 2) != 0);
  return;
}



// FUNCTION 1416b18b0 Strncat body=93 status=ok
// SIG undefined Strncat(void)

longlong TCString<wchar_t>::Strncat(longlong param_1,wchar_t *param_2,int param_3)

{
  wchar_t *_Dest;
  longlong lVar1;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(short *)(param_1 + lVar1 * 2) != 0);
  param_3 = param_3 - (int)lVar1;
  _Dest = (wchar_t *)(param_1 + (longlong)(int)lVar1 * 2);
  if (0 < param_3) {
    wcsncpy(_Dest,param_2,(longlong)param_3 - 1);
    _Dest[(longlong)param_3 + -1] = L'\0';
  }
  return param_1;
}



// FUNCTION 1416b1930 FUN_1416b1930 body=77 status=ok
// SIG undefined FUN_1416b1930(void)

void FUN_1416b1930(DWORD param_1,char param_2)

{
  HANDLE hThread;
  
  hThread = OpenThread(0x1b,0,param_1);
  if (hThread != (HANDLE)0x0) {
    if (param_2 == '\0') {
      ResumeThread(hThread);
    }
    else {
      SuspendThread(hThread);
    }
    CloseHandle(hThread);
  }
  return;
}



// FUNCTION 1416b1980 SystemTime body=180 status=ok
// SIG undefined SystemTime(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FWindowsPlatformTime::SystemTime
               (uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,
               uint *param_7,uint *param_8)

{
  undefined1 auStack_88 [32];
  _SYSTEMTIME local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  GetLocalTime(&local_68);
  *param_1 = (uint)local_68.wYear;
  *param_2 = (uint)local_68.wMonth;
  *param_3 = (uint)local_68.wDayOfWeek;
  *param_4 = (uint)local_68.wDay;
  *param_5 = (uint)local_68.wHour;
  *param_6 = (uint)local_68.wMinute;
  *param_7 = (uint)local_68.wSecond;
  *param_8 = (uint)local_68.wMilliseconds;
  return;
}



// FUNCTION 1416b1a40 ThreadStackWalkAndDump body=228 status=ok
// SIG undefined ThreadStackWalkAndDump(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FWindowsPlatformStackWalk::ThreadStackWalkAndDump
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,DWORD param_4)

{
  BOOL BVar1;
  undefined1 auStack_538 [32];
  HANDLE local_518;
  undefined1 local_508 [16];
  _CONTEXT local_4f8;
  HANDLE local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_538;
  FUN_1416aee50();
  local_518 = OpenThread(0x1b,0,param_4);
  if (local_518 != (HANDLE)0x0) {
    SuspendThread(local_518);
    FUN_1416b1810(0x3c23d70a);
    FWindowsThreadContextWrapper::FWindowsThreadContextWrapper(local_508);
    local_4f8.ContextFlags = 0x100001;
    local_28 = local_518;
    BVar1 = GetThreadContext(local_518,&local_4f8);
    if (BVar1 != 0) {
      FGenericPlatformStackWalk::StackWalkAndDump(param_1,param_2,param_3,local_508);
    }
    ResumeThread(local_518);
  }
  return;
}



// FUNCTION 1416b1b30 FUN_1416b1b30 body=30 status=ok
// SIG undefined FUN_1416b1b30(void)

void FUN_1416b1b30(longlong param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
                    /* WARNING: Could not recover jumptable at 0x0001416b1b47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetEvent(*(HANDLE *)(param_1 + 0x10));
  return;
}



// FUNCTION 1416b1b60 UpdateCPUTime body=312 status=ok
// SIG undefined UpdateCPUTime(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FWindowsPlatformTime::UpdateCPUTime(void)

{
  HANDLE hProcess;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  _FILETIME local_res10;
  _FILETIME local_res18;
  _FILETIME local_res20;
  _FILETIME local_18;
  _FILETIME local_10 [2];
  
  local_18.dwLowDateTime = 0;
  local_18.dwHighDateTime = 0;
  local_10[0].dwLowDateTime = 0;
  local_10[0].dwHighDateTime = 0;
  local_res18.dwLowDateTime = 0;
  local_res18.dwHighDateTime = 0;
  local_res10.dwLowDateTime = 0;
  local_res10.dwHighDateTime = 0;
  local_res20.dwLowDateTime = 0;
  local_res20.dwHighDateTime = 0;
  hProcess = GetCurrentProcess();
  GetProcessTimes(hProcess,&local_18,local_10,&local_res18,&local_res10);
  GetSystemTimeAsFileTime(&local_res20);
  dVar4 = (double)(longlong)local_res10;
  if ((longlong)local_res10 < 0) {
    dVar4 = dVar4 + 1.8446744073709552e+19;
  }
  dVar1 = (double)(longlong)local_res18;
  if ((longlong)local_res18 < 0) {
    dVar1 = dVar1 + 1.8446744073709552e+19;
  }
  dVar1 = (dVar4 + dVar1) * 1e-07;
  dVar4 = (double)(longlong)local_res20;
  if ((longlong)local_res20 < 0) {
    dVar4 = dVar4 + 1.8446744073709552e+19;
  }
  dVar2 = (double)(longlong)local_18;
  if ((longlong)local_18 < 0) {
    dVar2 = dVar2 + 1.8446744073709552e+19;
  }
  dVar3 = dVar1 - _DAT_1469e59a0;
  dVar4 = dVar4 * 1e-07 - dVar2 * 1e-07;
  if (0.0 < dVar3) {
    DAT_1469e46a0 = (float)((dVar3 / (dVar4 - _DAT_1469e5998)) * 100.0);
    _DAT_1469e5998 = dVar4;
    _DAT_1469e59a0 = dVar1;
  }
  return CONCAT71((uint7)local_18.dwLowDateTime._1_3_,1);
}



// FUNCTION 1416b1ca0 FUN_1416b1ca0 body=819 status=ok
// SIG undefined FUN_1416b1ca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined2 * FUN_1416b1ca0(void)

{
  int iVar1;
  void *_Src;
  int iVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_298 [32];
  short *local_278;
  void *local_268;
  ulonglong local_260;
  undefined2 *local_258;
  int local_250;
  int local_24c;
  longlong local_248 [2];
  short local_238 [264];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469e4b00) && (_Init_thread_header(&DAT_1469e4b00), DAT_1469e4b00 == -1))
  {
    atexit((_func_5014 *)&LAB_143e7b4d0);
    _Init_thread_footer(&DAT_1469e4b00);
  }
  if ((DAT_1469e4af8 == 0) || (DAT_1469e4af8 == 1)) {
    local_278 = local_238;
    SHGetFolderPathW(0,5,0);
    local_260 = 0;
    local_268 = (void *)0x0;
    if (local_238[0] != 0) {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (local_238[lVar6] != 0);
      uVar5 = (int)lVar6 + 1;
      local_260 = (ulonglong)uVar5;
      if (0 < (int)uVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
      }
      FGenericPlatformString::Memcpy(local_268,local_238,(longlong)(int)uVar5 * 2);
    }
    local_278 = (short *)CONCAT44(local_278._4_4_,1);
    puVar3 = (undefined8 *)FString::Replace(&local_268,local_248,&DAT_144cdcbe4,&DAT_144cdcb14);
    iVar1 = *(int *)(puVar3 + 1);
    local_258 = (undefined2 *)*puVar3;
    *puVar3 = 0;
    local_250 = *(int *)(puVar3 + 1);
    local_24c = *(int *)((longlong)puVar3 + 0xc);
    puVar3[1] = 0;
    iVar7 = local_250;
    if (local_24c < (int)((2 - (uint)(iVar1 != 0)) + local_250)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_258);
      iVar7 = local_250;
    }
    local_250 = (2 - (uint)(iVar7 != 0)) + iVar7;
    if (local_24c < local_250) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_258,iVar7);
    }
    iVar2 = local_24c;
    iVar1 = local_250;
    puVar4 = local_258;
    local_258[(longlong)iVar7 - (ulonglong)(iVar7 != 0)] = 0x2f;
    (local_258 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)))[1] = 0;
    if (DAT_1469e4af0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    DAT_1469e4af0 = puVar4;
    DAT_1469e4af8 = iVar1;
    DAT_1469e4afc = iVar2;
    if (local_248[0] != 0) {
      FMemory::Free();
    }
    if (local_268 != (void *)0x0) {
      FMemory::Free();
    }
    local_268 = (void *)0x0;
    local_260 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
    _Src = local_268;
    FGenericPlatformString::Memcpy(local_268,L"My Games/",0x14);
    iVar1 = DAT_1469e4af8;
    if (((int)local_260 != 0) && (iVar7 = (int)local_260 + -1, iVar7 != 0)) {
      lVar6 = (longlong)DAT_1469e4af8;
      DAT_1469e4af8 = (uint)(DAT_1469e4af8 == 0) + DAT_1469e4af8 + iVar7;
      if (DAT_1469e4afc < DAT_1469e4af8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1469e4af0,iVar1);
      }
      puVar4 = DAT_1469e4af0 + (lVar6 - (ulonglong)(iVar1 != 0));
      _guard_xfg_dispatch_icall_nop(puVar4,_Src,(longlong)iVar7 * 2);
      puVar4[iVar7] = 0;
    }
    if (_Src != (void *)0x0) {
      FMemory::Free(_Src);
    }
  }
  puVar4 = &DAT_143f3eda8;
  if (DAT_1469e4af8 != 0) {
    puVar4 = DAT_1469e4af0;
  }
  return puVar4;
}



// FUNCTION 1416b1fe0 UserName body=195 status=ok
// SIG undefined UserName(void)

undefined2 * FWindowsPlatformProcess::UserName(char param_1)

{
  wint_t *pwVar1;
  wint_t _C;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  DWORD local_res8 [2];
  
  if (param_1 == '\0') {
    if (DAT_1469e4d50 == 0) {
      local_res8[0] = 0x100;
      GetUserNameW(&DAT_1469e4d50,local_res8);
    }
    return &DAT_1469e4d50;
  }
  if (DAT_1469e4f50 == 0) {
    local_res8[0] = 0x100;
    GetUserNameW((LPWSTR)&DAT_1469e4f50,local_res8);
    puVar3 = &DAT_1469e4f50;
    puVar4 = &DAT_1469e4f50;
    _C = DAT_1469e4f50;
    while (_C != 0) {
      iVar2 = iswalnum(_C);
      if (iVar2 != 0) {
        *puVar4 = *puVar3;
        puVar4 = puVar4 + 1;
      }
      pwVar1 = puVar3 + 1;
      puVar3 = puVar3 + 1;
      _C = *pwVar1;
    }
    *puVar4 = 0;
  }
  return &DAT_1469e4f50;
}



// FUNCTION 1416b20b0 FUN_1416b20b0 body=632 status=ok
// SIG undefined FUN_1416b20b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_1416b20b0(void)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_298 [32];
  short *local_278;
  undefined2 *local_268;
  int local_260;
  int local_25c;
  longlong local_258;
  ulonglong local_250;
  longlong local_248 [2];
  short local_238 [264];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e4b30) {
    _Init_thread_header(&DAT_1469e4b30);
    if (DAT_1469e4b30 == -1) {
      atexit((_func_5014 *)&LAB_143e7b4f0);
      _Init_thread_footer(&DAT_1469e4b30);
    }
  }
  if ((DAT_1469e4b28 == 0) || (DAT_1469e4b28 == 1)) {
    local_278 = local_238;
    SHGetFolderPathW(0,0x1c,0);
    local_250 = 0;
    local_258 = 0;
    if (local_238[0] != 0) {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (local_238[lVar6] != 0);
      uVar5 = (int)lVar6 + 1;
      local_250 = (ulonglong)uVar5;
      if (0 < (int)uVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_258,0);
      }
      FGenericPlatformString::Memcpy(local_258,local_238,(longlong)(int)uVar5 * 2);
    }
    local_278 = (short *)CONCAT44(local_278._4_4_,1);
    puVar3 = (undefined8 *)FString::Replace(&local_258,local_248,&DAT_144cdcdbc,&DAT_144cdcd9c);
    iVar1 = *(int *)(puVar3 + 1);
    local_268 = (undefined2 *)*puVar3;
    *puVar3 = 0;
    local_260 = *(int *)(puVar3 + 1);
    local_25c = *(int *)((longlong)puVar3 + 0xc);
    puVar3[1] = 0;
    iVar7 = local_260;
    if (local_25c < (int)((2 - (uint)(iVar1 != 0)) + local_260)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_268);
      iVar7 = local_260;
    }
    local_260 = (2 - (uint)(iVar7 != 0)) + iVar7;
    if (local_25c < local_260) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,iVar7);
    }
    iVar2 = local_25c;
    iVar1 = local_260;
    puVar4 = local_268;
    local_268[(longlong)iVar7 - (ulonglong)(iVar7 != 0)] = 0x2f;
    (local_268 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)))[1] = 0;
    if (DAT_1469e4b20 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    DAT_1469e4b20 = puVar4;
    DAT_1469e4b28 = iVar1;
    _DAT_1469e4b2c = iVar2;
    if (local_248[0] != 0) {
      FMemory::Free();
    }
    if (local_258 != 0) {
      FMemory::Free();
    }
  }
  puVar4 = &DAT_143f3eda8;
  if (DAT_1469e4b28 != 0) {
    puVar4 = DAT_1469e4b20;
  }
  return puVar4;
}



// FUNCTION 1416b2330 FUN_1416b2330 body=527 status=ok
// SIG undefined FUN_1416b2330(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_1416b2330(void)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_488 [32];
  undefined4 local_468;
  longlong local_458;
  ulonglong local_450;
  longlong local_448 [2];
  WCHAR local_438 [264];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_488;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469e4b18) && (_Init_thread_header(&DAT_1469e4b18), DAT_1469e4b18 == -1))
  {
    atexit((_func_5014 *)&LAB_143e7b510);
    _Init_thread_footer(&DAT_1469e4b18);
  }
  if ((DAT_1469e4b10 == 0) || (DAT_1469e4b10 == 1)) {
    _guard_xfg_dispatch_icall_nop(local_228,0,0x208);
    GetTempPathW(0x104,local_228);
    _guard_xfg_dispatch_icall_nop(local_438,0,0x208);
    GetLongPathNameW(local_228,local_438,0x104);
    local_450 = 0;
    local_458 = 0;
    if (local_438[0] != L'\0') {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (local_438[lVar4] != L'\0');
      uVar3 = (int)lVar4 + 1;
      local_450 = (ulonglong)uVar3;
      if (0 < (int)uVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_458,0);
      }
      FGenericPlatformString::Memcpy(local_458,local_438,(longlong)(int)uVar3 * 2);
    }
    local_468 = 1;
    puVar1 = (undefined8 *)FString::Replace(&local_458,local_448,&DAT_144cdcc64,&DAT_144cdcc24);
    if ((undefined2 **)puVar1 != &DAT_1469e4b08) {
      if (DAT_1469e4b08 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      DAT_1469e4b08 = (undefined2 *)*puVar1;
      *puVar1 = 0;
      DAT_1469e4b10 = *(int *)(puVar1 + 1);
      _DAT_1469e4b14 = *(undefined4 *)((longlong)puVar1 + 0xc);
      puVar1[1] = 0;
    }
    if (local_448[0] != 0) {
      FMemory::Free();
    }
    if (local_458 != 0) {
      FMemory::Free();
    }
  }
  puVar2 = &DAT_143f3eda8;
  if (DAT_1469e4b10 != 0) {
    puVar2 = DAT_1469e4b08;
  }
  return puVar2;
}



// FUNCTION 1416b2540 UtcTime body=180 status=ok
// SIG undefined UtcTime(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FWindowsPlatformTime::UtcTime
               (uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6,
               uint *param_7,uint *param_8)

{
  undefined1 auStack_88 [32];
  _SYSTEMTIME local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  GetSystemTime(&local_68);
  *param_1 = (uint)local_68.wYear;
  *param_2 = (uint)local_68.wMonth;
  *param_3 = (uint)local_68.wDayOfWeek;
  *param_4 = (uint)local_68.wDay;
  *param_5 = (uint)local_68.wHour;
  *param_6 = (uint)local_68.wMinute;
  *param_7 = (uint)local_68.wSecond;
  *param_8 = (uint)local_68.wMilliseconds;
  return;
}



// FUNCTION 1416b2600 FUN_1416b2600 body=148 status=ok
// SIG undefined FUN_1416b2600(void)

bool FUN_1416b2600(longlong param_1,DWORD param_2,char param_3)

{
  DWORD DVar1;
  longlong lVar2;
  LARGE_INTEGER local_res8 [2];
  char local_res18 [8];
  LARGE_INTEGER local_res20;
  code *local_28;
  char *pcStack_20;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  QueryPerformanceCounter(&local_res20);
  DVar1 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x10),param_2);
  if (param_3 == '\0') {
    pcStack_20 = local_res18;
    local_28 = FUN_1415a3f40;
    local_res18[0] = param_3;
    lVar2 = FUN_1415d8310(&local_28,&DAT_1464a8c00);
    QueryPerformanceCounter(local_res8);
    *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + (local_res8[0].s.LowPart - local_res20._0_4_);
  }
  return DVar1 == 0;
}



// FUNCTION 1416b26d0 FUN_1416b26d0 body=254 status=ok
// SIG undefined FUN_1416b26d0(void)

longlong * FUN_1416b26d0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int local_res8 [2];
  
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(param_1,local_res8);
  plVar3 = (longlong *)0x0;
  plVar4 = plVar3;
  if (local_res8[0] != -1) {
    plVar4 = (longlong *)(*param_1 + (longlong)local_res8[0] * 0x28);
  }
  plVar2 = plVar4 + 2;
  if (plVar4 == (longlong *)0x0) {
    plVar2 = plVar3;
  }
  if ((plVar2 == (longlong *)0x0) || (*plVar2 == 0)) {
    plVar2 = (longlong *)operator_new(0x10);
    plVar4 = plVar3;
    if (plVar2 != (longlong *)0x0) {
      *(undefined4 *)(plVar2 + 1) = 1;
      *plVar2 = (longlong)&PTR_AsObject_143f60718;
      plVar4 = plVar2;
    }
    *param_2 = (longlong)plVar4;
    plVar2 = (longlong *)operator_new(0x18);
    if (plVar2 != (longlong *)0x0) {
      *(undefined4 *)(plVar2 + 1) = 1;
      *plVar2 = (longlong)&PTR_FUN_143f60d18;
      *(undefined4 *)((longlong)plVar2 + 0xc) = 1;
      plVar2[2] = (longlong)plVar4;
      plVar3 = plVar2;
    }
    param_2[1] = (longlong)plVar3;
    SharedPointerInternals::EnableSharedFromThis(param_2,plVar4,plVar4);
  }
  else {
    *param_2 = *plVar2;
    lVar1 = plVar2[1];
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 1416b27d0 AsArray body=110 status=ok
// SIG undefined AsArray(void)

undefined * FJsonValue::AsArray(longlong *param_1)

{
  char cVar1;
  undefined *local_res8 [4];
  longlong local_18 [3];
  
  local_res8[0] = &DAT_1469e59c0;
  cVar1 = (**(code **)(*param_1 + 0x20))(param_1,local_res8);
  if (cVar1 == '\0') {
    local_18[1] = 6;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"Array",0xc);
    if (local_18[0] != 0) {
      FMemory::Free(local_18[0]);
    }
  }
  return local_res8[0];
}



// FUNCTION 1416b2840 AsBool body=103 status=ok
// SIG undefined AsBool(void)

undefined1 FJsonValue::AsBool(longlong *param_1)

{
  char cVar1;
  undefined1 local_res8 [32];
  longlong local_18 [3];
  
  local_res8[0] = 0;
  cVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_res8);
  if (cVar1 == '\0') {
    local_18[1] = 8;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"Boolean",0x10);
    if (local_18[0] != 0) {
      FMemory::Free(local_18[0]);
    }
  }
  return local_res8[0];
}



// FUNCTION 1416b28b0 AsNumber body=108 status=ok
// SIG undefined AsNumber(void)

undefined8 FJsonValue::AsNumber(longlong *param_1)

{
  char cVar1;
  undefined8 local_res8 [4];
  longlong local_18 [3];
  
  local_res8[0] = 0;
  cVar1 = (**(code **)(*param_1 + 8))(0,local_res8);
  if (cVar1 == '\0') {
    local_18[1] = 7;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"Number",0xe);
    if (local_18[0] != 0) {
      FMemory::Free(local_18[0]);
    }
  }
  return local_res8[0];
}



// FUNCTION 1416b2920 AsObject body=110 status=ok
// SIG undefined AsObject(void)

undefined * FJsonValue::AsObject(longlong *param_1)

{
  char cVar1;
  undefined *local_res8 [4];
  longlong local_18 [3];
  
  local_res8[0] = &DAT_1469e59d0;
  cVar1 = (**(code **)(*param_1 + 0x28))(param_1,local_res8);
  if (cVar1 == '\0') {
    local_18[1] = 7;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"Object",0xe);
    if (local_18[0] != 0) {
      FMemory::Free(local_18[0]);
    }
  }
  return local_res8[0];
}



// FUNCTION 1416b2990 AsString body=109 status=ok
// SIG undefined AsString(void)

undefined8 * FJsonValue::AsString(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong local_18 [2];
  
  *param_2 = 0;
  param_2[1] = 0;
  cVar2 = (**(code **)(*param_1 + 0x10))();
  if (cVar2 == '\0') {
    local_18[0] = 0;
    local_18[1] = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    lVar1 = local_18[0];
    FGenericPlatformString::Memcpy(local_18[0],L"String",0xe);
    if (lVar1 != 0) {
      FMemory::Free(lVar1);
    }
  }
  return param_2;
}



// FUNCTION 1416b2a00 DestroyObject body=35 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::TIntrusiveReferenceController<FJsonValueArray,1>::DestroyObject
               (longlong param_1)

{
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x20);
  *(undefined ***)(param_1 + 0x10) = &PTR_AsObject_143f60588;
  return;
}



// FUNCTION 1416b2a30 DestroyObject body=40 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::TIntrusiveReferenceController<FJsonValueString>::DestroyObject
               (longlong param_1)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_AsObject_143f60588;
  return;
}



// FUNCTION 1416b2a60 FUN_1416b2a60 body=320 status=ok
// SIG undefined FUN_1416b2a60(void)

undefined8 FUN_1416b2a60(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int local_res8 [2];
  longlong *local_18;
  longlong *local_10;
  
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(param_1,local_res8,param_2);
  plVar5 = (longlong *)0x0;
  plVar7 = plVar5;
  if (local_res8[0] != -1) {
    plVar7 = (longlong *)(*param_1 + (longlong)local_res8[0] * 0x28);
  }
  plVar4 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar4 = plVar5;
  }
  if (((plVar4 == (longlong *)0x0) || (local_18 = (longlong *)*plVar4, local_18 == (longlong *)0x0))
     || (*(int *)(local_18 + 1) != 5)) {
    plVar4 = (longlong *)operator_new(0x10);
    plVar7 = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *(undefined4 *)(plVar4 + 1) = 1;
      *plVar4 = (longlong)&PTR_AsObject_143f60718;
      plVar7 = plVar4;
    }
    local_18 = plVar7;
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *(undefined4 *)(plVar4 + 1) = 1;
      *plVar4 = (longlong)&PTR_FUN_143f60d18;
      *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
      plVar4[2] = (longlong)plVar7;
      plVar5 = plVar4;
    }
    local_10 = plVar5;
    SharedPointerInternals::EnableSharedFromThis(&local_18,plVar7,plVar7);
  }
  else {
    local_10 = (longlong *)plVar4[1];
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10 + 1) = (int)local_10[1] + 1;
      UNLOCK();
    }
  }
  uVar6 = FJsonValue::AsArray(local_18);
  plVar5 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_10 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_10)(local_10);
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
  return uVar6;
}



// FUNCTION 1416b2ba0 FUN_1416b2ba0 body=130 status=ok
// SIG undefined FUN_1416b2ba0(void)

undefined1 FUN_1416b2ba0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)FUN_1416b26d0(param_1,local_18,param_2);
  uVar5 = FJsonValue::AsBool(*puVar6);
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
    return uVar5;
  }
  return uVar5;
}



// FUNCTION 1416b2c30 GetNumberField body=115 status=ok
// SIG undefined GetNumberField(void)

undefined8 FJsonObject::GetNumberField(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 local_28 [8];
  longlong *local_20;
  
  puVar5 = (undefined8 *)FUN_1416b26d0(param_1,local_28,param_2);
  uVar6 = FJsonValue::AsNumber(*puVar5);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 1416b2cb0 FUN_1416b2cb0 body=320 status=ok
// SIG undefined FUN_1416b2cb0(void)

undefined8 FUN_1416b2cb0(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int local_res8 [2];
  longlong *local_18;
  longlong *local_10;
  
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(param_1,local_res8,param_2);
  plVar5 = (longlong *)0x0;
  plVar7 = plVar5;
  if (local_res8[0] != -1) {
    plVar7 = (longlong *)(*param_1 + (longlong)local_res8[0] * 0x28);
  }
  plVar4 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar4 = plVar5;
  }
  if (((plVar4 == (longlong *)0x0) || (local_18 = (longlong *)*plVar4, local_18 == (longlong *)0x0))
     || (*(int *)(local_18 + 1) != 6)) {
    plVar4 = (longlong *)operator_new(0x10);
    plVar7 = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *(undefined4 *)(plVar4 + 1) = 1;
      *plVar4 = (longlong)&PTR_AsObject_143f60718;
      plVar7 = plVar4;
    }
    local_18 = plVar7;
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *(undefined4 *)(plVar4 + 1) = 1;
      *plVar4 = (longlong)&PTR_FUN_143f60d18;
      *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
      plVar4[2] = (longlong)plVar7;
      plVar5 = plVar4;
    }
    local_10 = plVar5;
    SharedPointerInternals::EnableSharedFromThis(&local_18,plVar7,plVar7);
  }
  else {
    local_10 = (longlong *)plVar4[1];
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10 + 1) = (int)local_10[1] + 1;
      UNLOCK();
    }
  }
  uVar6 = (**(code **)*local_18)();
  plVar5 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_10 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_10)(local_10);
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
  return uVar6;
}



// FUNCTION 1416b2df0 GetStringField body=128 status=ok
// SIG undefined GetStringField(void)

undefined8 FJsonObject::GetStringField(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar5 = (undefined8 *)FUN_1416b26d0(param_1,local_18);
  FJsonValue::AsString(*puVar5,param_2);
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
    return param_2;
  }
  return param_2;
}



// FUNCTION 1416b2e70 Remove body=398 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FString,FICUInternationalization::FICUCachedFileData>,TDefaultMapHashableKeyFuncs<FString,FICUInternationalization::FICUCachedFileData,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined2 *puVar12;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)*param_2;
  }
  uVar6 = FUN_140438070(puVar12);
  lVar11 = (longlong)(int)((int)param_1[9] - 1U & uVar6);
  plVar8 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar8 = param_1 + 7;
  }
  piVar1 = (int *)((longlong)plVar8 + lVar11 * 4);
  iVar7 = *(int *)((longlong)plVar8 + lVar11 * 4);
  while( true ) {
    if (iVar7 == -1) {
      return 0;
    }
    puVar2 = (undefined8 *)(*param_1 + (longlong)iVar7 * 0x28);
    if (*(int *)(param_2 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*param_2;
    }
    if (*(int *)(puVar2 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar2;
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar12);
    if (iVar7 == 0) break;
    iVar7 = *(int *)(puVar2 + 4);
    piVar1 = (int *)(puVar2 + 4);
  }
  iVar7 = *piVar1;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar5 = *param_1;
    lVar11 = lVar5 + (longlong)iVar7 * 0x28;
    lVar10 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar11 + 0x24));
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    puVar3 = (undefined4 *)((longlong)plVar8 + lVar10 * 4);
    iVar4 = *(int *)((longlong)plVar8 + lVar10 * 4);
    while (iVar4 != -1) {
      if (iVar4 == iVar7) {
        *puVar3 = *(undefined4 *)(lVar11 + 0x20);
        break;
      }
      lVar10 = (longlong)iVar4 * 5 + 4;
      puVar3 = (undefined4 *)(lVar5 + lVar10 * 8);
      iVar4 = *(int *)(lVar5 + lVar10 * 8);
    }
  }
  UE4Tuple_Private::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
  ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
            (*param_1 + (longlong)iVar7 * 0x28);
  TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar7,1);
  return 1;
}



// FUNCTION 1416b3010 SetArrayField body=311 status=ok
// SIG undefined SetArrayField(void)

void FJsonObject::SetArrayField(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong **local_20;
  longlong *local_18;
  longlong *plStack_10;
  
  plStack_30 = (longlong *)operator_new(0x30);
  if (plStack_30 == (longlong *)0x0) {
    plStack_30 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plStack_30 + 1) = 1;
    *(undefined4 *)((longlong)plStack_30 + 0xc) = 1;
    *plStack_30 = (longlong)&PTR_DestroyObject_144cde290;
    FUN_1406905f0(plStack_30 + 2,param_3);
  }
  local_38 = plStack_30 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_38,local_38,local_38);
  local_18 = local_38;
  plStack_10 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  local_20 = &local_18;
  local_28 = param_2;
  FUN_1415ec8f0(param_1,local_res8,&local_28,0);
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
  plVar5 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
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



// FUNCTION 1416b3150 FUN_1416b3150 body=304 status=ok
// SIG undefined FUN_1416b3150(void)

void FUN_1416b3150(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong **local_20;
  longlong *local_18;
  longlong *plStack_10;
  
  plStack_30 = (longlong *)operator_new(0x28);
  if (plStack_30 != (longlong *)0x0) {
    *(undefined4 *)(plStack_30 + 1) = 1;
    *plStack_30 = (longlong)&PTR_FUN_144510b10;
    *(undefined4 *)((longlong)plStack_30 + 0xc) = 1;
    plStack_30[2] = (longlong)&PTR_AsObject_143f60658;
    *(undefined1 *)(plStack_30 + 4) = param_3;
    *(undefined4 *)(plStack_30 + 3) = 4;
  }
  local_38 = plStack_30 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_38,local_38,local_38);
  local_18 = local_38;
  plStack_10 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  local_20 = &local_18;
  local_28 = param_2;
  FUN_1415ec8f0(param_1,local_res8,&local_28,0);
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
  plVar5 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
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



// FUNCTION 1416b3280 SetField body=37 status=ok
// SIG undefined SetField(void)

void FJsonObject::SetField(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,TSharedRef<FBuildPatchAppManifest,1>_&&>_>
            (param_1,local_res8,&local_18,0);
  return;
}



// FUNCTION 1416b32b0 FUN_1416b32b0 body=305 status=ok
// SIG undefined FUN_1416b32b0(void)

void FUN_1416b32b0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  longlong *local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong **local_30;
  longlong *local_28;
  longlong *plStack_20;
  
  plStack_40 = (longlong *)operator_new(0x28);
  if (plStack_40 != (longlong *)0x0) {
    *(undefined4 *)(plStack_40 + 1) = 1;
    *plStack_40 = (longlong)&PTR_FUN_144510b10;
    *(undefined4 *)((longlong)plStack_40 + 0xc) = 1;
    plStack_40[2] = (longlong)&PTR_AsObject_143f60608;
    plStack_40[4] = param_3;
    *(undefined4 *)(plStack_40 + 3) = 3;
  }
  local_48 = plStack_40 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_48,local_48,local_48);
  local_28 = local_48;
  plStack_20 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
  }
  local_30 = &local_28;
  local_38 = param_2;
  FUN_1415ec8f0(param_1,local_res8,&local_38,0);
  plVar5 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_20)(plStack_20);
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
  plVar5 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_40)(plStack_40);
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



// FUNCTION 1416b33f0 FUN_1416b33f0 body=773 status=ok
// SIG undefined FUN_1416b33f0(void)

void FUN_1416b33f0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_98;
  longlong *plStack_90;
  longlong *local_88;
  longlong *plStack_80;
  undefined8 local_78;
  longlong **local_70;
  longlong *local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong **local_50;
  longlong *local_48;
  longlong *plStack_40;
  
  lVar4 = *param_3;
  if (lVar4 == 0) {
    plStack_80 = (longlong *)operator_new(0x20);
    if (plStack_80 != (longlong *)0x0) {
      *(undefined4 *)(plStack_80 + 1) = 1;
      *plStack_80 = (longlong)&PTR_FUN_144cde2a0;
      *(undefined4 *)((longlong)plStack_80 + 0xc) = 1;
      plStack_80[2] = (longlong)&PTR_AsObject_143f60718;
      *(undefined4 *)(plStack_80 + 3) = 1;
    }
    local_88 = plStack_80 + 2;
    SharedPointerInternals::EnableSharedFromThis(&local_88,local_88,local_88);
    local_48 = local_88;
    plStack_40 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
      UNLOCK();
    }
    local_50 = &local_48;
    local_58 = param_2;
    FUN_1415ec8f0(param_1,local_res20,&local_58,0);
    plVar5 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_40 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_40)(plStack_40);
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
    plVar5 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_80 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
          return;
        }
      }
    }
  }
  else {
    plVar5 = (longlong *)param_3[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    plVar6 = (longlong *)operator_new(0x30);
    if (plVar6 != (longlong *)0x0) {
      *(undefined4 *)(plVar6 + 1) = 1;
      *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
      *plVar6 = (longlong)&PTR_FUN_143f60818;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      *(undefined4 *)(plVar6 + 3) = 0;
      plVar6[2] = (longlong)&PTR_AsObject_143f606d8;
      plVar6[4] = lVar4;
      plVar6[5] = (longlong)plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      *(undefined4 *)(plVar6 + 3) = 6;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
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
    }
    local_98 = plVar6 + 2;
    plStack_90 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_98,local_98,local_98);
    local_68 = local_98;
    plStack_60 = plStack_90;
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
      UNLOCK();
    }
    local_70 = &local_68;
    local_78 = param_2;
    FUN_1415ec8f0(param_1,local_res18,&local_78,0);
    plVar6 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_60)(plStack_60);
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
    plVar6 = plStack_90;
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_90 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_90)(plStack_90);
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
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar5 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  }
  return;
}



// FUNCTION 1416b3700 SetStringField body=336 status=ok
// SIG undefined SetStringField(void)

void FJsonObject::SetStringField(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  longlong *local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong **local_20;
  longlong *local_18;
  longlong *plStack_10;
  
  plStack_30 = (longlong *)operator_new(0x30);
  if (plStack_30 == (longlong *)0x0) {
    plStack_30 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plStack_30 + 1) = 1;
    *(undefined4 *)((longlong)plStack_30 + 0xc) = 1;
    *plStack_30 = (longlong)&PTR_DestroyObject_144cde280;
    plStack_30[2] = (longlong)&PTR_AsObject_143f605c8;
    *(undefined4 *)(plStack_30 + 3) = 0;
    FString::FString(plStack_30 + 4,param_3);
    *(undefined4 *)(plStack_30 + 3) = 2;
  }
  local_38 = plStack_30 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_38,local_38,local_38);
  local_18 = local_38;
  plStack_10 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  local_20 = &local_18;
  local_28 = param_2;
  FUN_1415ec8f0(param_1,local_res8,&local_28,0);
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
  plVar5 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
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



// FUNCTION 1416b3850 FUN_1416b3850 body=161 status=ok
// SIG undefined FUN_1416b3850(void)

undefined8 FUN_1416b3850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1416b39b0(param_1,&local_18,param_2);
  if (local_18 != (longlong *)0x0) {
    cVar6 = (**(code **)(*local_18 + 0x20))(local_18,param_3);
    if (cVar6 != '\0') {
      uVar7 = 1;
      goto LAB_1416b3889;
    }
  }
  uVar7 = 0;
LAB_1416b3889:
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
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return uVar7;
  }
  return uVar7;
}



// FUNCTION 1416b3900 FUN_1416b3900 body=161 status=ok
// SIG undefined FUN_1416b3900(void)

undefined8 FUN_1416b3900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1416b39b0(param_1,&local_18,param_2);
  if (local_18 != (longlong *)0x0) {
    cVar6 = (**(code **)(*local_18 + 0x18))(local_18,param_3);
    if (cVar6 != '\0') {
      uVar7 = 1;
      goto LAB_1416b3939;
    }
  }
  uVar7 = 0;
LAB_1416b3939:
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
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return uVar7;
  }
  return uVar7;
}



// FUNCTION 1416b39b0 FUN_1416b39b0 body=330 status=ok
// SIG undefined FUN_1416b39b0(void)

longlong * FUN_1416b39b0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int local_res8 [2];
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *plStack_10;
  
  plVar8 = (longlong *)0x0;
  local_res8[0] = 0;
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(param_1,local_res8);
  plVar7 = plVar8;
  if (local_res8[0] != -1) {
    plVar7 = (longlong *)(*param_1 + (longlong)local_res8[0] * 0x28);
  }
  plVar6 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar6 = plVar8;
  }
  if ((plVar6 == (longlong *)0x0) || (plVar7 = (longlong *)*plVar6, plVar7 == (longlong *)0x0)) {
    plVar6 = &local_18;
    local_18 = 0;
    plStack_10 = (longlong *)0x0;
    bVar5 = false;
    bVar4 = true;
  }
  else {
    local_20 = (longlong *)plVar6[1];
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    plVar6 = &local_28;
    bVar5 = true;
    bVar4 = false;
    plVar8 = plVar7;
    local_28 = (longlong)plVar7;
  }
  lVar3 = plVar6[1];
  plVar6[1] = 0;
  *plVar6 = 0;
  plVar7 = plStack_10;
  *param_2 = (longlong)plVar8;
  param_2[1] = lVar3;
  if ((bVar4) && (plStack_10 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plStack_10 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_10)(plStack_10);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_10 + 8))(plStack_10,1);
      }
    }
  }
  plVar7 = local_20;
  if ((bVar5) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar8 = local_20 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1416b3b00 FUN_1416b3b00 body=231 status=ok
// SIG undefined FUN_1416b3b00(void)

undefined8 FUN_1416b3b00(undefined8 param_1,undefined8 param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  double local_res20;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1416b39b0(param_1,&local_18,param_2);
  if (local_18 != (longlong *)0x0) {
    cVar6 = (**(code **)(*local_18 + 8))(local_18,&local_res20);
    if (((cVar6 != '\0') && (-2147483648.0 <= local_res20)) && (local_res20 <= 2147483647.0)) {
      if (local_res20 < 0.0) {
        uVar7 = 1;
        *param_3 = (int)(local_res20 - 0.5);
      }
      else {
        uVar7 = 1;
        *param_3 = (int)(local_res20 + 0.5);
      }
      goto LAB_1416b3b7f;
    }
  }
  uVar7 = 0;
LAB_1416b3b7f:
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
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return uVar7;
  }
  return uVar7;
}



// FUNCTION 1416b3bf0 FUN_1416b3bf0 body=203 status=ok
// SIG undefined FUN_1416b3bf0(void)

undefined8 FUN_1416b3bf0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  double local_res20;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1416b39b0(param_1,&local_18,param_2);
  if (local_18 != (longlong *)0x0) {
    cVar6 = (**(code **)(*local_18 + 8))(local_18,&local_res20);
    if (cVar6 != '\0') {
      if ((0.0 <= local_res20) && (local_res20 <= 4294967295.0)) {
        uVar7 = 1;
        *param_3 = (int)(longlong)(local_res20 + 0.5);
        goto LAB_1416b3c53;
      }
    }
  }
  uVar7 = 0;
LAB_1416b3c53:
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
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return uVar7;
  }
  return uVar7;
}



// FUNCTION 1416b3cc0 FUN_1416b3cc0 body=161 status=ok
// SIG undefined FUN_1416b3cc0(void)

undefined8 FUN_1416b3cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1416b39b0(param_1,&local_18,param_2);
  if (local_18 != (longlong *)0x0) {
    cVar6 = (**(code **)(*local_18 + 8))(local_18,param_3);
    if (cVar6 != '\0') {
      uVar7 = 1;
      goto LAB_1416b3cf9;
    }
  }
  uVar7 = 0;
LAB_1416b3cf9:
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
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return uVar7;
  }
  return uVar7;
}



// FUNCTION 1416b3d70 FUN_1416b3d70 body=235 status=ok
// SIG undefined FUN_1416b3d70(void)

undefined8 FUN_1416b3d70(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  double local_res20;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1416b39b0(param_1,&local_18,param_2);
  if (local_18 != (longlong *)0x0) {
    cVar6 = (**(code **)(*local_18 + 8))(local_18,&local_res20);
    if (((cVar6 != '\0') && (-9.223372036854776e+18 <= local_res20)) &&
       (local_res20 <= 9.223372036854776e+18)) {
      if (local_res20 < 0.0) {
        uVar7 = 1;
        *param_3 = (longlong)(local_res20 - 0.5);
      }
      else {
        uVar7 = 1;
        *param_3 = (longlong)(local_res20 + 0.5);
      }
      goto LAB_1416b3df3;
    }
  }
  uVar7 = 0;
LAB_1416b3df3:
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
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return uVar7;
  }
  return uVar7;
}



// FUNCTION 1416b3e60 FUN_1416b3e60 body=161 status=ok
// SIG undefined FUN_1416b3e60(void)

undefined8 FUN_1416b3e60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1416b39b0(param_1,&local_18,param_2);
  if (local_18 != (longlong *)0x0) {
    cVar6 = (**(code **)(*local_18 + 0x28))(local_18,param_3);
    if (cVar6 != '\0') {
      uVar7 = 1;
      goto LAB_1416b3e99;
    }
  }
  uVar7 = 0;
LAB_1416b3e99:
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
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return uVar7;
  }
  return uVar7;
}



// FUNCTION 1416b3f10 FUN_1416b3f10 body=393 status=ok
// SIG undefined FUN_1416b3f10(void)

undefined8 FUN_1416b3f10(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *local_res20;
  void *local_48;
  ulonglong local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong uVar9;
  
  FUN_1416b39b0(param_1,&local_38,param_2);
  if ((local_38 == (longlong *)0x0) ||
     (cVar5 = (**(code **)(*local_38 + 0x20))(local_38,&local_res20), cVar5 == '\0')) {
LAB_1416b4036:
    uVar10 = 0;
  }
  else {
    uVar9 = 0;
    uVar11 = uVar9;
    if (0 < (int)local_res20[1]) {
      do {
        local_48 = (void *)0x0;
        local_40 = 0;
        cVar5 = (**(code **)(**(longlong **)(uVar11 + *local_res20) + 0x10))
                          (*(longlong **)(uVar11 + *local_res20),&local_48);
        if (cVar5 == '\0') {
          if (local_48 != (void *)0x0) {
            FMemory::Free();
          }
          goto LAB_1416b4036;
        }
        iVar3 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar3);
        }
        _Src = local_48;
        puVar6 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_3);
        *puVar6 = 0;
        lVar7 = (longlong)(int)local_40;
        *(int *)(puVar6 + 1) = (int)local_40;
        if ((int)local_40 == 0) {
          *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar6,local_40 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar6,_Src,lVar7 * 2);
        }
        if (local_48 != (void *)0x0) {
          FMemory::Free();
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        uVar11 = uVar11 + 0x10;
      } while ((int)uVar8 < (int)local_res20[1]);
    }
    uVar10 = 1;
  }
  plVar4 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return uVar10;
}



// FUNCTION 1416b40a0 FUN_1416b40a0 body=161 status=ok
// SIG undefined FUN_1416b40a0(void)

undefined8 FUN_1416b40a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *local_18;
  longlong *local_10;
  
  FUN_1416b39b0(param_1,&local_18,param_2);
  if (local_18 != (longlong *)0x0) {
    cVar6 = (**(code **)(*local_18 + 0x10))(local_18,param_3);
    if (cVar6 != '\0') {
      uVar7 = 1;
      goto LAB_1416b40d9;
    }
  }
  uVar7 = 0;
LAB_1416b40d9:
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
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
    return uVar7;
  }
  return uVar7;
}



// FUNCTION 1416b4150 Emplace<TTuple<FString,TArray<FString,FDefaultAllocator>_>_const_&> body=367 status=ok
// SIG undefined Emplace<TTuple<FString,TArray<FString,FDefaultAllocator>_>_const_&>(void)

int * TSet<TTuple<FString,TArray<FString,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::Emplace<TTuple<FString,TArray<FString,FDefaultAllocator>_>_const_&>
                (longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

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
  *param_2 = local_38[0];
  TTuple<FString,TArray<FString,FDefaultAllocator>_>::
  TTuple<FString,TArray<FString,FDefaultAllocator>_>(local_30,param_3);
  *(undefined4 *)(local_30 + 4) = 0xffffffff;
  bVar6 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
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
      goto LAB_1416b429a;
    }
  }
  cVar2 = TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
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
LAB_1416b429a:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar6;
  }
  return param_2;
}



// FUNCTION 1416b42c0 FUN_1416b42c0 body=726 status=ok
// SIG undefined FUN_1416b42c0(void)

int * FUN_1416b42c0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  longlong *plVar14;
  uint *puVar15;
  int iVar16;
  bool bVar17;
  
  iVar8 = 1;
  iVar16 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x18);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x18) = 0xffffffff;
    }
  }
  plVar14 = (longlong *)param_1[4];
  *param_2 = iVar11;
  lVar6 = (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = param_1 + 2;
  }
  bVar17 = false;
  puVar15 = (uint *)((longlong)plVar14 + lVar6);
  *puVar15 = *puVar15 | 1 << ((byte)iVar11 & 0x1f);
  puVar2 = (undefined4 *)param_3[1];
  lVar1 = (longlong)iVar11 * 0x18;
  plVar14 = (longlong *)(*param_1 + lVar1);
  lVar3 = *(longlong *)*param_3;
  *plVar14 = lVar3;
  *(undefined4 *)(plVar14 + 1) = *puVar2;
  *(undefined4 *)(plVar14 + 2) = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    iVar10 = iVar16;
    if (uVar13 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar7 +
                      ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar9 != -1) {
        do {
          iVar10 = iVar9;
          if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x18) == lVar3) break;
          iVar9 = *(int *)(*param_1 + 0x10 + (longlong)iVar9 * 0x18);
          iVar10 = iVar16;
        } while (iVar9 != -1);
      }
    }
    bVar17 = iVar10 != -1;
    if (bVar17) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar10 * 0x18),plVar14,0x10);
      bVar4 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar11;
      }
      lVar3 = *param_1;
      *(undefined4 *)(lVar1 + lVar3) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar16 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar3) = iVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar14 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar14 == (longlong *)0x0) {
        plVar14 = param_1 + 2;
      }
      puVar15 = (uint *)((longlong)plVar14 + lVar6);
      *puVar15 = *puVar15 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1416b4571;
    }
  }
  if (3 < uVar13) {
    uVar5 = (uVar13 >> 1) + 8;
    iVar16 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    iVar8 = 0x20;
    if (uVar5 != 0) {
      iVar8 = 0x1f - iVar16;
    }
    uVar5 = (uVar13 >> 1) + 7;
    iVar16 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    if (uVar5 == 0) {
      cVar12 = '\0';
    }
    else {
      cVar12 = '\x1f' - (char)iVar16;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar13 = (int)((ulonglong)*plVar14 >> 0x20) + (int)*plVar14 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar14 + 0x14) = uVar13;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(plVar14 + 2) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    FUN_1404b4e10(param_1);
  }
LAB_1416b4571:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar17;
  }
  return param_2;
}



// FUNCTION 1416b45a0 FUN_1416b45a0 body=528 status=ok
// SIG undefined FUN_1416b45a0(void)

int * FUN_1416b45a0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 *_Src;
  void *_Dst;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  int iVar10;
  bool bVar11;
  int local_res8 [2];
  
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
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x28);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  puVar3 = (undefined8 *)param_3[1];
  _Src = (undefined8 *)(*param_1 + (longlong)iVar10 * 0x28);
  FString::FString(_Src,*param_3);
  _Src[2] = *puVar3;
  lVar4 = puVar3[1];
  _Src[3] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  bVar11 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    bVar11 = local_res8[0] != -1;
    if (bVar11) {
      _Dst = (void *)(*param_1 + (longlong)local_res8[0] * 0x28);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                (_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1416b4787;
    }
  }
  cVar5 = TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar5 == '\0') {
    iVar10 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*_Src;
    }
    uVar7 = FUN_140438070(puVar9);
    uVar7 = (int)param_1[9] - 1U & uVar7;
    *(uint *)((longlong)_Src + 0x24) = uVar7;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         iVar10;
  }
LAB_1416b4787:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 1416b47b0 FUN_1416b47b0 body=705 status=ok
// SIG undefined FUN_1416b47b0(void)

uint * FUN_1416b47b0(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined1 *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined8 *_Src;
  int iVar10;
  uint uVar11;
  char cVar12;
  undefined4 uVar13;
  longlong *plVar14;
  bool bVar15;
  uint local_res8 [2];
  
  iVar10 = 1;
  uVar13 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar11 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar11 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,uVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar11 = *(uint *)(param_1 + 6);
    iVar2 = *(int *)((longlong)(int)uVar11 * 0x20 + 4 + *param_1);
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar14 = (longlong *)param_1[4];
  *param_2 = uVar11;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar14 +
                   (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar11 & 0x1f);
  _Src = (undefined8 *)((longlong)(int)uVar11 * 0x20 + *param_1);
  puVar3 = (undefined1 *)param_3[1];
  FString::FString(_Src,*param_3);
  *(undefined1 *)(_Src + 2) = *puVar3;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar11 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar15 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar15);
    if (bVar15) {
      plVar14 = (longlong *)(lVar9 * 0x20 + *param_1);
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar14,_Src,0x18);
      uVar5 = *param_2;
      bVar4 = (byte)uVar5 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x20 + *param_1) = uVar5;
      }
      puVar8 = (undefined4 *)((longlong)(int)uVar5 * 0x20 + *param_1);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar13 = (undefined4)param_1[6];
      }
      puVar8[1] = uVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar5;
      plVar14 = (longlong *)param_1[4];
      *param_2 = uVar11;
      if (plVar14 == (longlong *)0x0) {
        plVar14 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar14 +
                       (longlong)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_1416b4a4c;
    }
  }
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar11) {
    uVar5 = (uVar11 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar12 = '\0';
    if (uVar5 != 0) {
      iVar6 = 0x1f - iVar10;
    }
    uVar5 = (uVar11 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar12 = '\x1f' - (char)iVar10;
    }
    iVar10 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    uVar11 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*_Src;
    }
    uVar5 = FUN_140438070(puVar7);
    uVar5 = (int)param_1[9] - 1U & uVar5;
    *(uint *)((longlong)_Src + 0x1c) = uVar5;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(uint *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         uVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    Rehash(param_1);
  }
LAB_1416b4a4c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1416b4a80 FUN_1416b4a80 body=352 status=ok
// SIG undefined FUN_1416b4a80(void)

void FUN_1416b4a80(longlong *param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  undefined2 local_res18 [4];
  undefined2 *local_28;
  int local_20;
  
  if ((((int)param_1[4] - 2U & 0xfffffff5) != 0) || ((int)param_1[4] == 10)) {
    local_res18[0] = 0x2c;
    (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res18,2);
  }
  FUN_1404b7a80(param_1[1]);
  plVar1 = (longlong *)param_1[1];
  if (0 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    uVar3 = (ulonglong)*(uint *)((longlong)param_1 + 0x24);
    do {
      local_res18[0] = 9;
      (**(code **)(*plVar1 + 0x50))(plVar1,local_res18,2);
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  local_res18[0] = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res18,2);
  local_res18[0] = 0x20;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res18,2);
  FString::PrintfImpl(&local_28,L"%lld",(longlong)param_3);
  if (local_20 == 0) {
    local_20 = 0;
    puVar2 = &DAT_143f3eda8;
  }
  else {
    local_20 = local_20 + -1;
    puVar2 = local_28;
  }
  (**(code **)(*(longlong *)param_1[1] + 0x50))
            ((longlong *)param_1[1],puVar2,(longlong)local_20 * 2);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 4) = 8;
  return;
}



// FUNCTION 1416b4be0 FModuleDescriptor body=956 status=ok
// SIG undefined FModuleDescriptor(void)

undefined8 * FModuleDescriptor::FModuleDescriptor(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_1[2] = 0;
  iVar4 = *(int *)(param_2 + 3);
  puVar5 = (undefined8 *)param_2[2];
  *(int *)(param_1 + 3) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar4,0);
    puVar3 = (undefined8 *)param_1[2];
    do {
      *puVar3 = 0;
      iVar1 = *(int *)(puVar5 + 1);
      pvVar2 = (void *)*puVar5;
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar2,(longlong)iVar1 * 2);
      }
      puVar3 = puVar3 + 2;
      puVar5 = puVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[4] = 0;
  iVar4 = *(int *)(param_2 + 5);
  puVar5 = (undefined8 *)param_2[4];
  *(int *)(param_1 + 5) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 4,iVar4,0);
    puVar3 = (undefined8 *)param_1[4];
    do {
      *puVar3 = 0;
      iVar1 = *(int *)(puVar5 + 1);
      pvVar2 = (void *)*puVar5;
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar2,(longlong)iVar1 * 2);
      }
      puVar3 = puVar3 + 2;
      puVar5 = puVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[6] = 0;
  iVar4 = *(int *)(param_2 + 7);
  puVar5 = (undefined8 *)param_2[6];
  *(int *)(param_1 + 7) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 6,iVar4,0);
    puVar3 = (undefined8 *)param_1[6];
    do {
      *puVar3 = 0;
      iVar1 = *(int *)(puVar5 + 1);
      pvVar2 = (void *)*puVar5;
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar2,(longlong)iVar1 * 2);
      }
      puVar3 = puVar3 + 2;
      puVar5 = puVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[8] = 0;
  iVar4 = *(int *)(param_2 + 9);
  puVar5 = (undefined8 *)param_2[8];
  *(int *)(param_1 + 9) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 8,iVar4,0);
    puVar3 = (undefined8 *)param_1[8];
    do {
      *puVar3 = 0;
      iVar1 = *(int *)(puVar5 + 1);
      pvVar2 = (void *)*puVar5;
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar2,(longlong)iVar1 * 2);
      }
      puVar3 = puVar3 + 2;
      puVar5 = puVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[10] = 0;
  iVar4 = *(int *)(param_2 + 0xb);
  puVar5 = (undefined8 *)param_2[10];
  *(int *)(param_1 + 0xb) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 10,iVar4,0);
    puVar3 = (undefined8 *)param_1[10];
    do {
      *puVar3 = 0;
      iVar1 = *(int *)(puVar5 + 1);
      pvVar2 = (void *)*puVar5;
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar2,(longlong)iVar1 * 2);
      }
      puVar3 = puVar3 + 2;
      puVar5 = puVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[0xc] = 0;
  iVar4 = *(int *)(param_2 + 0xd);
  puVar5 = (undefined8 *)param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0xc,iVar4,0);
    puVar3 = (undefined8 *)param_1[0xc];
    do {
      *puVar3 = 0;
      iVar1 = *(int *)(puVar5 + 1);
      pvVar2 = (void *)*puVar5;
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar2,(longlong)iVar1 * 2);
      }
      puVar3 = puVar3 + 2;
      puVar5 = puVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[0xe] = 0;
  iVar4 = *(int *)(param_2 + 0xf);
  puVar5 = (undefined8 *)param_2[0xe];
  *(int *)(param_1 + 0xf) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0xe,iVar4,0);
    puVar3 = (undefined8 *)param_1[0xe];
    do {
      *puVar3 = 0;
      iVar1 = *(int *)(puVar5 + 1);
      pvVar2 = (void *)*puVar5;
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar2,(longlong)iVar1 * 2);
      }
      puVar3 = puVar3 + 2;
      puVar5 = puVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return param_1;
}



// FUNCTION 1416b4fa0 FUN_1416b4fa0 body=865 status=ok
// SIG undefined FUN_1416b4fa0(void)

undefined4 * FUN_1416b4fa0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  *param_1 = *param_2;
  FString::FString(param_1 + 2,param_2 + 2);
  FString::FString(param_1 + 6,param_2 + 6);
  FString::FString(param_1 + 10,param_2 + 10);
  FString::FString(param_1 + 0xe,param_2 + 0xe);
  FString::FString(param_1 + 0x12,param_2 + 0x12);
  FString::FString(param_1 + 0x16,param_2 + 0x16);
  FString::FString(param_1 + 0x1a,param_2 + 0x1a);
  FString::FString(param_1 + 0x1e,param_2 + 0x1e);
  FString::FString(param_1 + 0x22,param_2 + 0x22);
  FString::FString(param_1 + 0x26,param_2 + 0x26);
  *(undefined8 *)(param_1 + 0x2a) = 0;
  iVar5 = param_2[0x2c];
  puVar6 = *(undefined8 **)(param_2 + 0x2a);
  param_1[0x2c] = iVar5;
  if (iVar5 == 0) {
    param_1[0x2d] = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x2a,iVar5,0);
    puVar3 = *(undefined8 **)(param_1 + 0x2a);
    do {
      *puVar3 = 0;
      iVar2 = *(int *)(puVar6 + 1);
      _Src = (void *)*puVar6;
      *(int *)(puVar3 + 1) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar2,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar2 * 2);
      }
      puVar3 = puVar3 + 2;
      puVar6 = puVar6 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined8 *)(param_1 + 0x2e) = 0;
  iVar5 = param_2[0x30];
  lVar7 = *(longlong *)(param_2 + 0x2e);
  param_1[0x30] = iVar5;
  if (iVar5 == 0) {
    param_1[0x31] = 0;
  }
  else {
    TArray<FModuleDescriptor,FDefaultAllocator>::ResizeForCopy(param_1 + 0x2e,iVar5,0);
    lVar4 = *(longlong *)(param_1 + 0x2e);
    do {
      FModuleDescriptor::FModuleDescriptor(lVar4,lVar7);
      lVar4 = lVar4 + 0x80;
      lVar7 = lVar7 + 0x80;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined8 *)(param_1 + 0x32) = 0;
  iVar5 = param_2[0x34];
  lVar7 = *(longlong *)(param_2 + 0x32);
  param_1[0x34] = iVar5;
  if (iVar5 == 0) {
    param_1[0x35] = 0;
  }
  else {
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1 + 0x32,iVar5,0);
    lVar4 = *(longlong *)(param_1 + 0x32);
    do {
      FString::FString(lVar4,lVar7);
      puVar1 = (undefined4 *)(lVar7 + 0x10);
      lVar7 = lVar7 + 0x18;
      *(undefined4 *)(lVar4 + 0x10) = *puVar1;
      lVar4 = lVar4 + 0x18;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined1 *)(param_1 + 0x36) = *(undefined1 *)(param_2 + 0x36);
  *(undefined1 *)((longlong)param_1 + 0xd9) = *(undefined1 *)((longlong)param_2 + 0xd9);
  *(undefined1 *)((longlong)param_1 + 0xda) = *(undefined1 *)((longlong)param_2 + 0xda);
  *(undefined1 *)((longlong)param_1 + 0xdb) = *(undefined1 *)((longlong)param_2 + 0xdb);
  *(undefined1 *)(param_1 + 0x37) = *(undefined1 *)(param_2 + 0x37);
  *(undefined1 *)((longlong)param_1 + 0xdd) = *(undefined1 *)((longlong)param_2 + 0xdd);
  *(undefined1 *)((longlong)param_1 + 0xde) = *(undefined1 *)((longlong)param_2 + 0xde);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  param_1[0x44] = 0xffffffff;
  param_1[0x45] = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  param_1[0x4a] = 0;
  TSet<TTuple<FString,TArray<FString,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,FDefaultAllocator>,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  param_1[0x58] = 0xffffffff;
  param_1[0x59] = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  param_1[0x5e] = 0;
  TSet<TTuple<FString,TArray<FString,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,FDefaultAllocator>,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 0x4c,param_2 + 0x4c);
  *(undefined8 *)(param_1 + 0x60) = 0;
  iVar5 = param_2[0x62];
  lVar7 = *(longlong *)(param_2 + 0x60);
  param_1[0x62] = iVar5;
  if (iVar5 != 0) {
    TArray<FInAppPurchaseProductInfo,FDefaultAllocator>::ResizeForCopy(param_1 + 0x60,iVar5,0);
    lVar4 = *(longlong *)(param_1 + 0x60);
    do {
      FPluginReferenceDescriptor::FPluginReferenceDescriptor(lVar4,lVar7);
      lVar4 = lVar4 + 0xa8;
      lVar7 = lVar7 + 0xa8;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    return param_1;
  }
  param_1[99] = 0;
  return param_1;
}



// FUNCTION 1416b5310 FUN_1416b5310 body=292 status=ok
// SIG undefined FUN_1416b5310(void)

undefined4 * FUN_1416b5310(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  param_1[0x36] = 0;
  *(undefined2 *)(param_1 + 0x37) = 0;
  *(undefined1 *)((longlong)param_1 + 0xde) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x48) = 0;
  param_1[0x4a] = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  param_1[0x5e] = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  return param_1;
}



// FUNCTION 1416b5440 FPluginManager body=430 status=ok
// SIG undefined FPluginManager(void)

undefined8 * FPluginManager::FPluginManager(undefined8 *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  longlong local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  puVar1 = param_1 + 0x10;
  lVar5 = -1;
  *param_1 = &PTR_FUN_144ce3ea8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  *puVar1 = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 2;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 2;
  do {
    lVar5 = lVar5 + 1;
  } while (L"PLUGIN="[lVar5] != L'\0');
  lVar4 = FCommandLine::Get();
  do {
    local_48 = 0;
    local_40 = 0;
    lVar4 = TCString<wchar_t>::Strifind(lVar4,L"PLUGIN=",0);
    cVar2 = FParse::Value(lVar4,L"PLUGIN=",&local_48,1);
    if (cVar2 == '\0') {
      if (local_48 != 0) {
        FMemory::Free();
      }
      break;
    }
    FUN_141672d20(local_38,&local_48);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (puVar1,local_res8,local_38,0);
    iVar3 = 0;
    if ((int)local_40 != 0) {
      iVar3 = (int)local_40 + -1;
    }
    lVar4 = lVar4 + (longlong)(iVar3 + (int)lVar5) * 2;
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
  } while (lVar4 != 0);
  FUN_1416c3500(param_1 + 1,puVar1);
  return param_1;
}



// FUNCTION 1416b55f0 FPluginReferenceDescriptor body=406 status=ok
// SIG undefined FPluginReferenceDescriptor(void)

undefined8 *
FPluginReferenceDescriptor::FPluginReferenceDescriptor(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((longlong)param_1 + 0x11) = *(undefined1 *)((longlong)param_2 + 0x11);
  param_1[3] = 0;
  param_1[3] = param_2[3];
  param_2[3] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  param_2[4] = 0;
  param_1[5] = 0;
  param_1[5] = param_2[5];
  param_2[5] = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  param_2[6] = 0;
  param_1[7] = 0;
  param_1[7] = param_2[7];
  param_2[7] = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  param_2[8] = 0;
  param_1[9] = 0;
  param_1[9] = param_2[9];
  param_2[9] = 0;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  param_2[10] = 0;
  param_1[0xb] = 0;
  param_1[0xb] = param_2[0xb];
  param_2[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  param_2[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xd] = param_2[0xd];
  param_2[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
  param_2[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xf] = param_2[0xf];
  param_2[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
  param_2[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x11] = param_2[0x11];
  param_2[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x94);
  param_2[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x13] = param_2[0x13];
  param_2[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xa4);
  param_2[0x14] = 0;
  return param_1;
}



// FUNCTION 1416b5790 FPluginReferenceDescriptor body=972 status=ok
// SIG undefined FPluginReferenceDescriptor(void)

longlong FPluginReferenceDescriptor::FPluginReferenceDescriptor(longlong param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  
  FString::FString();
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  FString::FString(param_1 + 0x18,param_2 + 0x18);
  FString::FString(param_1 + 0x28,param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x38) = 0;
  iVar4 = *(int *)(param_2 + 0x40);
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  *(int *)(param_1 + 0x40) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x38,iVar4,0);
    puVar3 = *(undefined8 **)(param_1 + 0x38);
    do {
      *puVar3 = 0;
      iVar1 = *(int *)(puVar5 + 1);
      pvVar2 = (void *)*puVar5;
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar2,(longlong)iVar1 * 2);
      }
      puVar3 = puVar3 + 2;
      puVar5 = puVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  iVar4 = *(int *)(param_2 + 0x50);
  puVar5 = *(undefined8 **)(param_2 + 0x48);
  *(int *)(param_1 + 0x50) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x48,iVar4,0);
    puVar3 = *(undefined8 **)(param_1 + 0x48);
    do {
      *puVar3 = 0;
      iVar1 = *(int *)(puVar5 + 1);
      pvVar2 = (void *)*puVar5;
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar2,(longlong)iVar1 * 2);
      }
      puVar3 = puVar3 + 2;
      puVar5 = puVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  iVar4 = *(int *)(param_2 + 0x60);
  puVar5 = *(undefined8 **)(param_2 + 0x58);
  *(int *)(param_1 + 0x60) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 100) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x58,iVar4,0);
    puVar3 = *(undefined8 **)(param_1 + 0x58);
    do {
      *puVar3 = 0;
      iVar1 = *(int *)(puVar5 + 1);
      pvVar2 = (void *)*puVar5;
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar2,(longlong)iVar1 * 2);
      }
      puVar3 = puVar3 + 2;
      puVar5 = puVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  iVar4 = *(int *)(param_2 + 0x70);
  puVar5 = *(undefined8 **)(param_2 + 0x68);
  *(int *)(param_1 + 0x70) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x68,iVar4,0);
    puVar3 = *(undefined8 **)(param_1 + 0x68);
    do {
      *puVar3 = 0;
      iVar1 = *(int *)(puVar5 + 1);
      pvVar2 = (void *)*puVar5;
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar2,(longlong)iVar1 * 2);
      }
      puVar3 = puVar3 + 2;
      puVar5 = puVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  iVar4 = *(int *)(param_2 + 0x80);
  puVar5 = *(undefined8 **)(param_2 + 0x78);
  *(int *)(param_1 + 0x80) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x78,iVar4,0);
    puVar3 = *(undefined8 **)(param_1 + 0x78);
    do {
      *puVar3 = 0;
      iVar1 = *(int *)(puVar5 + 1);
      pvVar2 = (void *)*puVar5;
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar2,(longlong)iVar1 * 2);
      }
      puVar3 = puVar3 + 2;
      puVar5 = puVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  iVar4 = *(int *)(param_2 + 0x90);
  puVar5 = *(undefined8 **)(param_2 + 0x88);
  *(int *)(param_1 + 0x90) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x88,iVar4,0);
    puVar3 = *(undefined8 **)(param_1 + 0x88);
    do {
      *puVar3 = 0;
      iVar1 = *(int *)(puVar5 + 1);
      pvVar2 = (void *)*puVar5;
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar2,(longlong)iVar1 * 2);
      }
      puVar3 = puVar3 + 2;
      puVar5 = puVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  iVar4 = *(int *)(param_2 + 0xa0);
  puVar5 = *(undefined8 **)(param_2 + 0x98);
  *(int *)(param_1 + 0xa0) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x98,iVar4,0);
    puVar3 = *(undefined8 **)(param_1 + 0x98);
    do {
      *puVar3 = 0;
      iVar1 = *(int *)(puVar5 + 1);
      pvVar2 = (void *)*puVar5;
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,pvVar2,(longlong)iVar1 * 2);
      }
      puVar3 = puVar3 + 2;
      puVar5 = puVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return param_1;
}



// FUNCTION 1416b5b60 FProjectDescriptor body=191 status=ok
// SIG undefined FProjectDescriptor(void)

undefined4 * FProjectDescriptor::FProjectDescriptor(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x40) = 0;
  param_1[0x42] = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *param_1 = 3;
  return param_1;
}



// FUNCTION 1416b5c20 FUN_1416b5c20 body=100 status=ok
// SIG undefined FUN_1416b5c20(void)

void FUN_1416b5c20(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 1416b5c90 ~TArray<FModuleDescriptor,FDefaultAllocator> body=469 status=ok
// SIG undefined ~TArray<FModuleDescriptor,FDefaultAllocator>(void)

void TArray<FModuleDescriptor,FDefaultAllocator>::~TArray<FModuleDescriptor,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    piVar4 = (int *)(lVar1 + 0x68);
    do {
      iVar5 = piVar4[4];
      plVar2 = *(longlong **)(piVar4 + 2);
      if (iVar5 != 0) {
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        plVar2 = *(longlong **)(piVar4 + 2);
      }
      if (plVar2 != (longlong *)0x0) {
        FMemory::Free(plVar2);
      }
      iVar5 = *piVar4;
      plVar2 = *(longlong **)(piVar4 + -2);
      if (iVar5 != 0) {
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        plVar2 = *(longlong **)(piVar4 + -2);
      }
      if (plVar2 != (longlong *)0x0) {
        FMemory::Free(plVar2);
      }
      iVar5 = piVar4[-4];
      plVar2 = *(longlong **)(piVar4 + -6);
      if (iVar5 != 0) {
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        plVar2 = *(longlong **)(piVar4 + -6);
      }
      if (plVar2 != (longlong *)0x0) {
        FMemory::Free(plVar2);
      }
      iVar5 = piVar4[-8];
      plVar2 = *(longlong **)(piVar4 + -10);
      if (iVar5 != 0) {
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        plVar2 = *(longlong **)(piVar4 + -10);
      }
      if (plVar2 != (longlong *)0x0) {
        FMemory::Free(plVar2);
      }
      iVar5 = piVar4[-0xc];
      plVar2 = *(longlong **)(piVar4 + -0xe);
      if (iVar5 != 0) {
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        plVar2 = *(longlong **)(piVar4 + -0xe);
      }
      if (plVar2 != (longlong *)0x0) {
        FMemory::Free(plVar2);
      }
      iVar5 = piVar4[-0x10];
      plVar2 = *(longlong **)(piVar4 + -0x12);
      if (iVar5 != 0) {
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        plVar2 = *(longlong **)(piVar4 + -0x12);
      }
      if (plVar2 != (longlong *)0x0) {
        FMemory::Free(plVar2);
      }
      iVar5 = piVar4[-0x14];
      plVar2 = *(longlong **)(piVar4 + -0x16);
      if (iVar5 != 0) {
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        plVar2 = *(longlong **)(piVar4 + -0x16);
      }
      if (plVar2 != (longlong *)0x0) {
        FMemory::Free(plVar2);
      }
      piVar4 = piVar4 + 0x20;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1416b5e70 FUN_1416b5e70 body=98 status=ok
// SIG undefined FUN_1416b5e70(void)

void FUN_1416b5e70(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      FPluginDescriptor::~FPluginDescriptor(plVar1 + 2);
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0x34;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 1416b5ee0 ~TArray<FPluginReferenceDescriptor,FDefaultAllocator> body=543 status=ok
// SIG undefined ~TArray<FPluginReferenceDescriptor,FDefaultAllocator>(void)

void TArray<FPluginReferenceDescriptor,FDefaultAllocator>::
     ~TArray<FPluginReferenceDescriptor,FDefaultAllocator>(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar3 = plVar5 + 0x12;
    do {
      iVar4 = (int)plVar3[2];
      plVar1 = (longlong *)plVar3[1];
      if (iVar4 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar1 = (longlong *)plVar3[1];
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      iVar4 = (int)*plVar3;
      plVar1 = (longlong *)plVar3[-1];
      if (iVar4 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar1 = (longlong *)plVar3[-1];
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      iVar4 = (int)plVar3[-2];
      plVar1 = (longlong *)plVar3[-3];
      if (iVar4 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar1 = (longlong *)plVar3[-3];
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      iVar4 = (int)plVar3[-4];
      plVar1 = (longlong *)plVar3[-5];
      if (iVar4 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar1 = (longlong *)plVar3[-5];
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      iVar4 = (int)plVar3[-6];
      plVar1 = (longlong *)plVar3[-7];
      if (iVar4 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar1 = (longlong *)plVar3[-7];
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      iVar4 = (int)plVar3[-8];
      plVar1 = (longlong *)plVar3[-9];
      if (iVar4 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar1 = (longlong *)plVar3[-9];
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      iVar4 = (int)plVar3[-10];
      plVar1 = (longlong *)plVar3[-0xb];
      if (iVar4 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar1 = (longlong *)plVar3[-0xb];
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      if (plVar3[-0xd] != 0) {
        FMemory::Free();
      }
      if (plVar3[-0xf] != 0) {
        FMemory::Free();
      }
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 0x15;
      plVar3 = plVar3 + 0x15;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar5 = (longlong *)*param_1;
  }
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar5);
  return;
}



// FUNCTION 1416b6100 FUN_1416b6100 body=393 status=ok
// SIG undefined FUN_1416b6100(void)

void FUN_1416b6100(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x78);
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x70);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_1 + 0x68);
  plVar1 = *(longlong **)(param_1 + 0x60);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x60);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_1 + 0x58);
  plVar1 = *(longlong **)(param_1 + 0x50);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x50);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_1 + 0x48);
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x40);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_1 + 0x38);
  plVar1 = *(longlong **)(param_1 + 0x30);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x30);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_1 + 0x28);
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x20);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_1 + 0x18);
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x10);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 1416b6290 ~FPluginDescriptor body=467 status=ok
// SIG undefined ~FPluginDescriptor(void)

void FPluginDescriptor::~FPluginDescriptor(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  TArray<FPluginReferenceDescriptor,FDefaultAllocator>::
  ~TArray<FPluginReferenceDescriptor,FDefaultAllocator>(param_1 + 0x180);
  *(undefined4 *)(param_1 + 0x178) = 0;
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,TArray<FString,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x130,0);
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,TArray<FString,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xe0,0);
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0xd0);
  plVar2 = *(longlong **)(param_1 + 200);
  if (iVar1 != 0) {
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 3;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    plVar2 = *(longlong **)(param_1 + 200);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  TArray<FModuleDescriptor,FDefaultAllocator>::~TArray<FModuleDescriptor,FDefaultAllocator>
            (param_1 + 0xb8);
  iVar1 = *(int *)(param_1 + 0xb0);
  plVar2 = *(longlong **)(param_1 + 0xa8);
  if (iVar1 != 0) {
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    plVar2 = *(longlong **)(param_1 + 0xa8);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
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
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1416b6470 FUN_1416b6470 body=155 status=ok
// SIG undefined FUN_1416b6470(void)

void FUN_1416b6470(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144ce3ea8;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1d);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x1a);
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x10);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xd);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 1);
  *param_1 = &PTR_FUN_144ce3db0;
  return;
}



// FUNCTION 1416b6510 ~FPluginReferenceDescriptor body=454 status=ok
// SIG undefined ~FPluginReferenceDescriptor(void)

void FPluginReferenceDescriptor::~FPluginReferenceDescriptor(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[0x14];
  plVar1 = (longlong *)param_1[0x13];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[0x13];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = (int)param_1[0x12];
  plVar1 = (longlong *)param_1[0x11];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[0x11];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = (int)param_1[0x10];
  plVar1 = (longlong *)param_1[0xf];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[0xf];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = (int)param_1[0xe];
  plVar1 = (longlong *)param_1[0xd];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[0xd];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = (int)param_1[0xc];
  plVar1 = (longlong *)param_1[0xb];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[0xb];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = (int)param_1[10];
  plVar1 = (longlong *)param_1[9];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[9];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = (int)param_1[8];
  plVar1 = (longlong *)param_1[7];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[7];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1416b66e0 ~FProjectDescriptor body=305 status=ok
// SIG undefined ~FProjectDescriptor(void)

void FProjectDescriptor::~FProjectDescriptor(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x120);
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x118);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,TArray<FString,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xc0,0);
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,TArray<FString,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x70,0);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  TArray<FPluginReferenceDescriptor,FDefaultAllocator>::
  ~TArray<FPluginReferenceDescriptor,FDefaultAllocator>(param_1 + 0x48);
  TArray<FModuleDescriptor,FDefaultAllocator>::~TArray<FModuleDescriptor,FDefaultAllocator>
            (param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1416b6820 operator= body=547 status=ok
// SIG undefined operator=(void)

longlong *
TArray<FModuleDescriptor,FDefaultAllocator>::operator=(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    iVar3 = (int)param_1[1];
    if (iVar3 != 0) {
      piVar4 = (int *)(*param_1 + 0x68);
      do {
        iVar5 = piVar4[4];
        plVar1 = *(longlong **)(piVar4 + 2);
        if (iVar5 != 0) {
          do {
            if (*plVar1 != 0) {
              FMemory::Free();
            }
            plVar1 = plVar1 + 2;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          plVar1 = *(longlong **)(piVar4 + 2);
        }
        if (plVar1 != (longlong *)0x0) {
          FMemory::Free(plVar1);
        }
        iVar5 = *piVar4;
        plVar1 = *(longlong **)(piVar4 + -2);
        if (iVar5 != 0) {
          do {
            if (*plVar1 != 0) {
              FMemory::Free();
            }
            plVar1 = plVar1 + 2;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          plVar1 = *(longlong **)(piVar4 + -2);
        }
        if (plVar1 != (longlong *)0x0) {
          FMemory::Free(plVar1);
        }
        iVar5 = piVar4[-4];
        plVar1 = *(longlong **)(piVar4 + -6);
        if (iVar5 != 0) {
          do {
            if (*plVar1 != 0) {
              FMemory::Free();
            }
            plVar1 = plVar1 + 2;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          plVar1 = *(longlong **)(piVar4 + -6);
        }
        if (plVar1 != (longlong *)0x0) {
          FMemory::Free(plVar1);
        }
        iVar5 = piVar4[-8];
        plVar1 = *(longlong **)(piVar4 + -10);
        if (iVar5 != 0) {
          do {
            if (*plVar1 != 0) {
              FMemory::Free();
            }
            plVar1 = plVar1 + 2;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          plVar1 = *(longlong **)(piVar4 + -10);
        }
        if (plVar1 != (longlong *)0x0) {
          FMemory::Free(plVar1);
        }
        iVar5 = piVar4[-0xc];
        plVar1 = *(longlong **)(piVar4 + -0xe);
        if (iVar5 != 0) {
          do {
            if (*plVar1 != 0) {
              FMemory::Free();
            }
            plVar1 = plVar1 + 2;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          plVar1 = *(longlong **)(piVar4 + -0xe);
        }
        if (plVar1 != (longlong *)0x0) {
          FMemory::Free(plVar1);
        }
        iVar5 = piVar4[-0x10];
        plVar1 = *(longlong **)(piVar4 + -0x12);
        if (iVar5 != 0) {
          do {
            if (*plVar1 != 0) {
              FMemory::Free();
            }
            plVar1 = plVar1 + 2;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          plVar1 = *(longlong **)(piVar4 + -0x12);
        }
        if (plVar1 != (longlong *)0x0) {
          FMemory::Free(plVar1);
        }
        iVar5 = piVar4[-0x14];
        plVar1 = *(longlong **)(piVar4 + -0x16);
        if (iVar5 != 0) {
          do {
            if (*plVar1 != 0) {
              FMemory::Free();
            }
            plVar1 = plVar1 + 2;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          plVar1 = *(longlong **)(piVar4 + -0x16);
        }
        if (plVar1 != (longlong *)0x0) {
          FMemory::Free(plVar1);
        }
        piVar4 = piVar4 + 0x20;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = (int)param_2[1];
    lVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar3;
    if ((iVar3 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      ResizeForCopy(param_1,iVar3);
      lVar6 = *param_1;
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        FModuleDescriptor::FModuleDescriptor(lVar6,lVar2);
        lVar6 = lVar6 + 0x80;
        lVar2 = lVar2 + 0x80;
      }
    }
  }
  return param_1;
}



// FUNCTION 1416b6a50 operator= body=605 status=ok
// SIG undefined operator=(void)

longlong *
TArray<FPluginReferenceDescriptor,FDefaultAllocator>::operator=(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if (param_1 != param_2) {
    iVar3 = (int)param_1[1];
    plVar7 = (longlong *)*param_1;
    if (iVar3 != 0) {
      plVar4 = plVar7 + 0x12;
      do {
        iVar5 = (int)plVar4[2];
        plVar1 = (longlong *)plVar4[1];
        if (iVar5 != 0) {
          do {
            if (*plVar1 != 0) {
              FMemory::Free();
            }
            plVar1 = plVar1 + 2;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          plVar1 = (longlong *)plVar4[1];
        }
        if (plVar1 != (longlong *)0x0) {
          FMemory::Free(plVar1);
        }
        iVar5 = (int)*plVar4;
        plVar1 = (longlong *)plVar4[-1];
        if (iVar5 != 0) {
          do {
            if (*plVar1 != 0) {
              FMemory::Free();
            }
            plVar1 = plVar1 + 2;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          plVar1 = (longlong *)plVar4[-1];
        }
        if (plVar1 != (longlong *)0x0) {
          FMemory::Free(plVar1);
        }
        iVar5 = (int)plVar4[-2];
        plVar1 = (longlong *)plVar4[-3];
        if (iVar5 != 0) {
          do {
            if (*plVar1 != 0) {
              FMemory::Free();
            }
            plVar1 = plVar1 + 2;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          plVar1 = (longlong *)plVar4[-3];
        }
        if (plVar1 != (longlong *)0x0) {
          FMemory::Free(plVar1);
        }
        iVar5 = (int)plVar4[-4];
        plVar1 = (longlong *)plVar4[-5];
        if (iVar5 != 0) {
          do {
            if (*plVar1 != 0) {
              FMemory::Free();
            }
            plVar1 = plVar1 + 2;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          plVar1 = (longlong *)plVar4[-5];
        }
        if (plVar1 != (longlong *)0x0) {
          FMemory::Free(plVar1);
        }
        iVar5 = (int)plVar4[-6];
        plVar1 = (longlong *)plVar4[-7];
        if (iVar5 != 0) {
          do {
            if (*plVar1 != 0) {
              FMemory::Free();
            }
            plVar1 = plVar1 + 2;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          plVar1 = (longlong *)plVar4[-7];
        }
        if (plVar1 != (longlong *)0x0) {
          FMemory::Free(plVar1);
        }
        iVar5 = (int)plVar4[-8];
        plVar1 = (longlong *)plVar4[-9];
        if (iVar5 != 0) {
          do {
            if (*plVar1 != 0) {
              FMemory::Free();
            }
            plVar1 = plVar1 + 2;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          plVar1 = (longlong *)plVar4[-9];
        }
        if (plVar1 != (longlong *)0x0) {
          FMemory::Free(plVar1);
        }
        iVar5 = (int)plVar4[-10];
        plVar1 = (longlong *)plVar4[-0xb];
        if (iVar5 != 0) {
          do {
            if (*plVar1 != 0) {
              FMemory::Free();
            }
            plVar1 = plVar1 + 2;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          plVar1 = (longlong *)plVar4[-0xb];
        }
        if (plVar1 != (longlong *)0x0) {
          FMemory::Free(plVar1);
        }
        if (plVar4[-0xd] != 0) {
          FMemory::Free();
        }
        if (plVar4[-0xf] != 0) {
          FMemory::Free();
        }
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 0x15;
        plVar4 = plVar4 + 0x15;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = (int)param_2[1];
    lVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar3;
    if ((iVar3 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FInAppPurchaseProductInfo,FDefaultAllocator>::ResizeForCopy(param_1,iVar3);
      lVar6 = *param_1;
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        FPluginReferenceDescriptor::FPluginReferenceDescriptor(lVar6,lVar2);
        lVar6 = lVar6 + 0xa8;
        lVar2 = lVar2 + 0xa8;
      }
    }
  }
  return param_1;
}



// FUNCTION 1416b6cb0 operator= body=469 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FString,TArray<FString,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,FDefaultAllocator>,0>,FDefaultSetAllocator>
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
    TSparseArray<TSetElement<TTuple<FString,TArray<FString,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1416b6ded;
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
LAB_1416b6ded:
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
        Emplace<TTuple<FString,TArray<FString,FDefaultAllocator>_>_const_&>
                  (param_1,local_res8,*param_2 + (longlong)iStack_3c * 0x28,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 1416b6e90 FUN_1416b6e90 body=562 status=ok
// SIG undefined FUN_1416b6e90(void)

undefined4 * FUN_1416b6e90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  *param_1 = *param_2;
  FString::operator=(param_1 + 2,param_2 + 2);
  FString::operator=(param_1 + 6,param_2 + 6);
  FString::operator=(param_1 + 10,param_2 + 10);
  FString::operator=(param_1 + 0xe,param_2 + 0xe);
  FString::operator=(param_1 + 0x12,param_2 + 0x12);
  FString::operator=(param_1 + 0x16,param_2 + 0x16);
  FString::operator=(param_1 + 0x1a,param_2 + 0x1a);
  FString::operator=(param_1 + 0x1e,param_2 + 0x1e);
  FString::operator=(param_1 + 0x22,param_2 + 0x22);
  FString::operator=(param_1 + 0x26,param_2 + 0x26);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_1 + 0x2a,param_2 + 0x2a);
  TArray<FModuleDescriptor,FDefaultAllocator>::operator=(param_1 + 0x2e,param_2 + 0x2e);
  plVar2 = (longlong *)(param_1 + 0x32);
  if (plVar2 != (longlong *)(param_2 + 0x32)) {
    plVar3 = (longlong *)*plVar2;
    for (iVar5 = param_1[0x34]; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 3;
    }
    iVar5 = param_2[0x34];
    lVar4 = *(longlong *)(param_2 + 0x32);
    param_1[0x34] = iVar5;
    if ((iVar5 == 0) && (param_1[0x35] == 0)) {
      param_1[0x35] = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar2,iVar5);
      lVar6 = *plVar2;
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        FString::FString(lVar6,lVar4);
        puVar1 = (undefined4 *)(lVar4 + 0x10);
        lVar4 = lVar4 + 0x18;
        *(undefined4 *)(lVar6 + 0x10) = *puVar1;
        lVar6 = lVar6 + 0x18;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x36) = *(undefined1 *)(param_2 + 0x36);
  *(undefined1 *)((longlong)param_1 + 0xd9) = *(undefined1 *)((longlong)param_2 + 0xd9);
  *(undefined1 *)((longlong)param_1 + 0xda) = *(undefined1 *)((longlong)param_2 + 0xda);
  *(undefined1 *)((longlong)param_1 + 0xdb) = *(undefined1 *)((longlong)param_2 + 0xdb);
  *(undefined1 *)(param_1 + 0x37) = *(undefined1 *)(param_2 + 0x37);
  *(undefined1 *)((longlong)param_1 + 0xdd) = *(undefined1 *)((longlong)param_2 + 0xdd);
  *(undefined1 *)((longlong)param_1 + 0xde) = *(undefined1 *)((longlong)param_2 + 0xde);
  TSet<TTuple<FString,TArray<FString,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,FDefaultAllocator>,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 0x38,param_2 + 0x38);
  TSet<TTuple<FString,TArray<FString,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,FDefaultAllocator>,0>,FDefaultSetAllocator>
  ::operator=(param_1 + 0x4c,param_2 + 0x4c);
  TArray<FPluginReferenceDescriptor,FDefaultAllocator>::operator=(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



// FUNCTION 1416b70d0 `scalar_deleting_destructor' body=105 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FPlugin::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144ce3e38;
  FPluginDescriptor::~FPluginDescriptor(param_1 + 5);
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_14413fd98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c0);
  }
  return param_1;
}



// FUNCTION 1416b7140 FUN_1416b7140 body=52 status=ok
// SIG undefined FUN_1416b7140(void)

undefined8 FUN_1416b7140(undefined8 param_1,ulonglong param_2)

{
  FUN_1416b6470();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 1416b7180 FUN_1416b7180 body=152 status=ok
// SIG undefined FUN_1416b7180(void)

undefined8 * FUN_1416b7180(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 6);
  FUN_1416b5c20(param_1 + 3);
  plVar4 = (longlong *)param_1[2];
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
  *param_1 = &PTR_FUN_144ce3f30;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1416b7220 FUN_1416b7220 body=43 status=ok
// SIG undefined FUN_1416b7220(void)

undefined8 * FUN_1416b7220(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144ce3db0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1416b7250 FUN_1416b7250 body=43 status=ok
// SIG undefined FUN_1416b7250(void)

undefined8 * FUN_1416b7250(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144ce3f30;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1416b7280 AddPluginDirectory body=97 status=ok
// SIG undefined AddPluginDirectory(void)

void FProjectDescriptor::AddPluginDirectory(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)(param_1 + 0x118);
  iVar2 = TArray<FString,FDefaultAllocator>::Find(plVar1);
  if (iVar2 == -1) {
    iVar2 = *(int *)(param_1 + 0x120);
    *(int *)(param_1 + 0x120) = iVar2 + 1;
    if (*(int *)(param_1 + 0x124) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    FString::FString((longlong)iVar2 * 0x10 + *plVar1,param_2);
  }
  return;
}



// FUNCTION 1416b72f0 AddPluginSearchPath body=60 status=ok
// SIG undefined AddPluginSearchPath(void)

void FPluginManager::AddPluginSearchPath(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 local_res18 [16];
  
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            (param_1 + 0x80,local_res18,param_2,0);
  if (param_3 != '\0') {
    FUN_1416c4b00(param_1);
  }
  return;
}



// FUNCTION 1416b7350 ClearSupportedTargetPlatformsForCurrentProject body=182 status=ok
// SIG undefined ClearSupportedTargetPlatformsForCurrentProject(void)

void FProjectManager::ClearSupportedTargetPlatformsForCurrentProject(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x60) = 0;
    if (*(int *)(lVar4 + 100) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(lVar4 + 0x58,0);
    }
    FText::FText(local_28);
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar6 = FUN_141672e70(local_38);
    FUN_1416c58a0(uVar5,uVar6,local_28);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x30);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1416b7410 ClearSupportedTargetPlatformsForProject body=510 status=ok
// SIG undefined ClearSupportedTargetPlatformsForProject(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FProjectManager::ClearSupportedTargetPlatformsForProject(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined1 auStack_1c8 [32];
  undefined2 *local_1a8;
  int local_1a0;
  undefined2 *local_198;
  int local_190;
  undefined1 local_188 [8];
  longlong *local_180;
  longlong local_170 [3];
  undefined4 local_158 [2];
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  ulonglong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_158[0] = 3;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_40 = 0;
  local_38 = 0;
  local_f0 = 0;
  local_48 = 0;
  FText::FText(local_188);
  cVar5 = FUN_1416bc9a0(local_158,param_2,local_188);
  if (cVar5 != '\0') {
    uVar3 = local_f8 >> 0x20;
    local_f8 = local_f8 & 0xffffffff00000000;
    if ((int)uVar3 != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_100,0);
    }
    FUN_1416c58a0(local_158,param_2,local_188);
    uVar7 = FUN_141672e70(local_170);
    FPaths::ConvertRelativePathToFull(&local_198,uVar7);
    if (local_170[0] != 0) {
      FMemory::Free();
    }
    FPaths::ConvertRelativePathToFull(&local_1a8,param_2);
    puVar9 = &DAT_143f3eda8;
    if (local_1a0 != 0) {
      puVar9 = local_1a8;
    }
    puVar8 = &DAT_143f3eda8;
    if (local_190 != 0) {
      puVar8 = local_198;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
    if (iVar6 == 0) {
      TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x30);
    }
    if (local_1a8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_198 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (local_180 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_180 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_180)(local_180);
      LOCK();
      piVar2 = (int *)((longlong)local_180 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_180 + 8))(local_180,1);
      }
    }
  }
  FProjectDescriptor::~FProjectDescriptor(local_158);
  return;
}



// FUNCTION 1416b7610 FUN_1416b7610 body=2679 status=ok
// SIG undefined FUN_1416b7610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001416b7f3b) */

undefined8 FUN_1416b7610(longlong param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ErrorCode EVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong *plVar19;
  __uint64 _Var20;
  int iVar21;
  longlong *plVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined1 auStackY_178 [32];
  ulong uVar25;
  longlong *plVar26;
  longlong *local_140;
  undefined8 local_138;
  uint local_130;
  int local_12c;
  longlong *local_128;
  ulonglong local_120;
  longlong *local_118;
  ulonglong local_110;
  int local_108 [2];
  longlong *local_100;
  ulonglong local_f8;
  longlong *local_f0;
  ulonglong local_e8;
  longlong *local_e0;
  ulonglong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [4];
  undefined1 local_b4 [4];
  undefined1 local_b0 [4];
  undefined1 local_ac [4];
  longlong local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStackY_178;
  uVar16 = 0;
  local_130 = 0;
  local_c8 = param_3;
  local_a8 = param_1;
  piVar4 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId
                            (param_3,local_c0,param_2);
  if (*piVar4 == -1) {
    _Var20 = 0;
    local_98 = 0;
    local_90 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    lVar9 = param_2;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (&local_98);
    plVar10 = (longlong *)0x0;
    plVar26 = (longlong *)0x0;
    iVar21 = 1;
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&stack0xfffffffffffffeb0);
    local_140 = (longlong *)0x0;
    uVar25 = 0;
    local_138 = 0;
    *plVar26 = param_2;
    local_12c = 0;
    local_d0 = 0;
    uVar24 = uVar16;
    do {
      plVar19 = (longlong *)0x0;
      lVar15 = plVar26[local_d0];
      lVar12 = local_d0;
      plVar5 = (longlong *)FGenericPlatformMisc::GetUBTPlatform();
      EVar8 = (ErrorCode)lVar12;
      local_100 = (longlong *)0x0;
      local_f8 = 0;
      uVar23 = 0;
      if ((plVar5 != (longlong *)0x0) && ((short)*plVar5 != 0)) {
        lVar9 = -1;
        do {
          lVar12 = lVar9 * 2;
          lVar9 = lVar9 + 1;
        } while (*(short *)((longlong)plVar5 + lVar12 + 2) != 0);
        uVar13 = (int)lVar9 + 1;
        local_f8 = (ulonglong)uVar13;
        uVar23 = uVar13;
        if (0 < (int)uVar13) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_100,0);
          uVar23 = (uint)local_f8;
        }
        plVar19 = local_100;
        lVar9 = (longlong)(int)uVar13 * 2;
        plVar10 = local_100;
        FGenericPlatformString::Memcpy();
        EVar8 = (ErrorCode)plVar10;
        plVar10 = plVar5;
      }
      if (*(char *)(lVar15 + 0x10) == '\0') {
LAB_1416b77c5:
        bVar1 = true;
      }
      else {
        if (0 < *(int *)(lVar15 + 0x40)) {
          puVar6 = *(undefined8 **)(lVar15 + 0x38);
          puVar17 = puVar6 + (longlong)*(int *)(lVar15 + 0x40) * 2;
          for (; puVar6 != puVar17; puVar6 = puVar6 + 2) {
            plVar10 = (longlong *)&DAT_143f3eda8;
            if (uVar23 != 0) {
              plVar10 = plVar19;
            }
            if (*(int *)(puVar6 + 1) == 0) {
              EVar8 = 0x43f3eda8;
            }
            else {
              EVar8 = (ErrorCode)*puVar6;
            }
            iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>();
            if (iVar3 == 0) goto LAB_1416b78cf;
          }
          goto LAB_1416b77c5;
        }
LAB_1416b78cf:
        puVar6 = *(undefined8 **)(lVar15 + 0x48);
        puVar17 = puVar6 + (longlong)*(int *)(lVar15 + 0x50) * 2;
        for (; puVar6 != puVar17; puVar6 = puVar6 + 2) {
          plVar10 = (longlong *)&DAT_143f3eda8;
          if (uVar23 != 0) {
            plVar10 = plVar19;
          }
          if (*(int *)(puVar6 + 1) == 0) {
            EVar8 = 0x43f3eda8;
          }
          else {
            EVar8 = (ErrorCode)*puVar6;
          }
          iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>();
          if (iVar3 == 0) goto LAB_1416b77c5;
        }
        AK::Monitor::PostCode(EVar8,(ErrorLevel)plVar10,(ulong)lVar9,_Var20,uVar25,SUB81(plVar26,0))
        ;
        plVar5 = (longlong *)FUN_1415bb3d0();
        local_118 = (longlong *)0x0;
        local_110 = 0;
        uVar23 = 0;
        if ((plVar5 != (longlong *)0x0) && ((short)*plVar5 != 0)) {
          lVar9 = -1;
          do {
            lVar12 = lVar9 * 2;
            lVar9 = lVar9 + 1;
          } while (*(short *)((longlong)plVar5 + lVar12 + 2) != 0);
          uVar13 = (int)lVar9 + 1;
          local_110 = (ulonglong)uVar13;
          uVar23 = uVar13;
          if (0 < (int)uVar13) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
            uVar23 = (uint)local_110;
          }
          lVar9 = (longlong)(int)uVar13 * 2;
          FGenericPlatformString::Memcpy();
          plVar10 = plVar5;
        }
        uVar13 = (uint)uVar24;
        uVar24 = (ulonglong)(uVar13 | 2);
        if (*(char *)(lVar15 + 0x10) == '\0') goto LAB_1416b77c5;
        if (0 < *(int *)(lVar15 + 0x60)) {
          lVar12 = *(longlong *)(lVar15 + 0x58);
          lVar18 = (longlong)*(int *)(lVar15 + 0x60) * 0x10 + lVar12;
          for (; lVar12 != lVar18; lVar12 = lVar12 + 0x10) {
            plVar10 = (longlong *)&DAT_143f3eda8;
            if (uVar23 != 0) {
              plVar10 = local_118;
            }
            iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>();
            if (iVar3 == 0) goto LAB_1416b79fd;
          }
          goto LAB_1416b77c5;
        }
LAB_1416b79fd:
        lVar12 = *(longlong *)(lVar15 + 0x68);
        lVar18 = (longlong)*(int *)(lVar15 + 0x70) * 0x10 + lVar12;
        for (; lVar12 != lVar18; lVar12 = lVar12 + 0x10) {
          plVar10 = (longlong *)&DAT_143f3eda8;
          if (uVar23 != 0) {
            plVar10 = local_118;
          }
          iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>();
          if (iVar3 == 0) goto LAB_1416b77c5;
        }
        plVar5 = (longlong *)FGenericPlatformMisc::GetUBTTarget();
        local_128 = (longlong *)0x0;
        local_120 = 0;
        uVar23 = 0;
        if ((plVar5 != (longlong *)0x0) && ((short)*plVar5 != 0)) {
          lVar9 = -1;
          do {
            lVar12 = lVar9 * 2;
            lVar9 = lVar9 + 1;
          } while (*(short *)((longlong)plVar5 + lVar12 + 2) != 0);
          uVar14 = (int)lVar9 + 1;
          local_120 = (ulonglong)uVar14;
          uVar23 = uVar14;
          if (0 < (int)uVar14) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
            uVar23 = (uint)local_120;
          }
          lVar9 = (longlong)(int)uVar14 * 2;
          FGenericPlatformString::Memcpy(local_128);
          plVar10 = plVar5;
        }
        uVar24 = (ulonglong)(uVar13 | 6);
        if (*(char *)(lVar15 + 0x10) == '\0') goto LAB_1416b77c5;
        if (0 < *(int *)(lVar15 + 0x80)) {
          puVar6 = *(undefined8 **)(lVar15 + 0x78);
          puVar17 = puVar6 + (longlong)*(int *)(lVar15 + 0x80) * 2;
          for (; puVar6 != puVar17; puVar6 = puVar6 + 2) {
            plVar10 = (longlong *)&DAT_143f3eda8;
            if (uVar23 != 0) {
              plVar10 = local_128;
            }
            if (*(int *)(puVar6 + 1) == 0) {
              puVar11 = &DAT_143f3eda8;
            }
            else {
              puVar11 = (undefined2 *)*puVar6;
            }
            iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11);
            if (iVar3 == 0) goto LAB_1416b7b2b;
          }
          goto LAB_1416b77c5;
        }
LAB_1416b7b2b:
        puVar6 = *(undefined8 **)(lVar15 + 0x88);
        puVar17 = puVar6 + (longlong)*(int *)(lVar15 + 0x90) * 2;
        for (; puVar6 != puVar17; puVar6 = puVar6 + 2) {
          plVar10 = (longlong *)&DAT_143f3eda8;
          if (uVar23 != 0) {
            plVar10 = local_128;
          }
          if (*(int *)(puVar6 + 1) == 0) {
            puVar11 = &DAT_143f3eda8;
          }
          else {
            puVar11 = (undefined2 *)*puVar6;
          }
          iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11);
          if (iVar3 == 0) goto LAB_1416b77c5;
        }
        bVar1 = false;
      }
      if (((uVar24 & 4) != 0) &&
         (uVar24 = (ulonglong)((uint)uVar24 & 0xfffffffb), local_128 != (longlong *)0x0)) {
        FMemory::Free(local_128);
      }
      uVar23 = (uint)uVar24;
      if (((uVar24 & 2) != 0) && (uVar23 = uVar23 & 0xfffffffd, local_118 != (longlong *)0x0)) {
        FMemory::Free(local_118);
      }
      local_130 = uVar23 & 0xfffffffe;
      uVar24 = (ulonglong)local_130;
      if (plVar19 != (longlong *)0x0) {
        FMemory::Free(plVar19);
      }
      plVar19 = plVar26;
      if (!bVar1) {
        plVar5 = (longlong *)FGenericPlatformMisc::GetUBTPlatform();
        local_f0 = (longlong *)0x0;
        uVar23 = 0;
        local_e8 = 0;
        plVar19 = (longlong *)0x0;
        if ((plVar5 != (longlong *)0x0) && (plVar19 = (longlong *)0x0, (short)*plVar5 != 0)) {
          lVar9 = -1;
          do {
            lVar12 = lVar9 * 2;
            lVar9 = lVar9 + 1;
          } while (*(short *)((longlong)plVar5 + lVar12 + 2) != 0);
          uVar13 = (int)lVar9 + 1;
          local_e8 = (ulonglong)uVar13;
          uVar23 = uVar13;
          if (0 < (int)uVar13) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f0,0);
            uVar23 = (uint)local_e8;
          }
          plVar19 = local_f0;
          lVar9 = (longlong)(int)uVar13 * 2;
          FGenericPlatformString::Memcpy(local_f0);
          plVar10 = plVar5;
        }
        if (*(int *)(lVar15 + 0xa0) == 0) {
LAB_1416b7baf:
          bVar1 = false;
        }
        else {
          puVar6 = *(undefined8 **)(lVar15 + 0x98);
          puVar17 = puVar6 + (longlong)*(int *)(lVar15 + 0xa0) * 2;
          for (; puVar6 != puVar17; puVar6 = puVar6 + 2) {
            plVar10 = (longlong *)&DAT_143f3eda8;
            if (uVar23 != 0) {
              plVar10 = plVar19;
            }
            if (*(int *)(puVar6 + 1) == 0) {
              puVar11 = &DAT_143f3eda8;
            }
            else {
              puVar11 = (undefined2 *)*puVar6;
            }
            iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11);
            if (iVar3 == 0) goto LAB_1416b7baf;
          }
          bVar1 = true;
        }
        if (plVar19 != (longlong *)0x0) {
          FMemory::Free(plVar19);
        }
        lVar12 = local_a8;
        plVar19 = plVar26;
        if (!bVar1) {
          plVar10 = (longlong *)local_108;
          lVar9 = lVar15;
          TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
          ::FindId(local_a8 + 8);
          plVar19 = (longlong *)0x0;
          plVar5 = plVar19;
          if (local_108[0] != -1) {
            plVar10 = *(longlong **)(lVar12 + 8);
            plVar5 = plVar10 + (longlong)local_108[0] * 5;
          }
          plVar22 = plVar5 + 2;
          if (plVar5 == (longlong *)0x0) {
            plVar22 = plVar19;
          }
          local_a0 = plVar22;
          if (plVar22 == (longlong *)0x0) {
            if (*(char *)(lVar15 + 0x11) == '\0') {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x38) < DAT_146855ba8) &&
                 (_Init_thread_header(&DAT_146855ba8), DAT_146855ba8 == -1)) {
                uVar7 = FCommandLine::Get();
                DAT_146855ba4 = FParse::Param(uVar7,L"UNATTENDED");
                _Init_thread_footer(&DAT_146855ba8);
              }
              if (uVar25 != 0) {
                plVar10 = local_140 + 1;
                do {
                  plVar19 = (longlong *)*plVar10;
                  if (plVar19 != (longlong *)0x0) {
                    LOCK();
                    plVar5 = plVar19 + 1;
                    lVar9 = *plVar5;
                    *(int *)plVar5 = (int)*plVar5 + -1;
                    UNLOCK();
                    if ((int)lVar9 == 1) {
                      (**(code **)*plVar19)(plVar19);
                      LOCK();
                      piVar4 = (int *)((longlong)plVar19 + 0xc);
                      iVar21 = *piVar4;
                      *piVar4 = *piVar4 + -1;
                      UNLOCK();
                      if (iVar21 == 1) {
                        (**(code **)(*plVar19 + 8))(plVar19,1);
                      }
                    }
                  }
                  plVar10 = plVar10 + 2;
                  uVar25 = uVar25 - 1;
                } while (uVar25 != 0);
              }
              if (local_140 != (longlong *)0x0) {
                FMemory::Free();
              }
              if (plVar26 != (longlong *)0x0) {
                FMemory::Free(plVar26);
              }
              local_50 = 0;
              if (local_58 != 0) {
                FMemory::Free();
              }
              TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                        (&local_98);
              return 0;
            }
          }
          else {
            lVar15 = *plVar22;
            cVar2 = FOutputDevice::CanBeUsedOnAnyThread(lVar15 + 8);
            if (cVar2 == '\0') {
              plVar5 = (longlong *)FGenericPlatformMisc::GetUBTPlatform();
              local_e0 = (longlong *)0x0;
              local_d8 = 0;
              uVar23 = 0;
              if ((plVar5 != (longlong *)0x0) && (uVar23 = 0, (short)*plVar5 != 0)) {
                lVar9 = -1;
                do {
                  lVar12 = lVar9 * 2;
                  lVar9 = lVar9 + 1;
                } while (*(short *)((longlong)plVar5 + lVar12 + 2) != 0);
                uVar13 = (int)lVar9 + 1;
                local_d8 = (ulonglong)uVar13;
                uVar23 = uVar13;
                if (0 < (int)uVar13) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e0,0);
                  uVar23 = (uint)local_d8;
                }
                plVar19 = local_e0;
                lVar9 = (longlong)(int)uVar13 * 2;
                FGenericPlatformString::Memcpy(local_e0);
                plVar10 = plVar5;
              }
              if (*(int *)(lVar15 + 0xd8) == 0) {
LAB_1416b7d25:
                bVar1 = false;
              }
              else {
                puVar6 = *(undefined8 **)(lVar15 + 0xd0);
                puVar17 = puVar6 + (longlong)*(int *)(lVar15 + 0xd8) * 2;
                for (; puVar6 != puVar17; puVar6 = puVar6 + 2) {
                  plVar10 = (longlong *)&DAT_143f3eda8;
                  if (uVar23 != 0) {
                    plVar10 = plVar19;
                  }
                  if (*(int *)(puVar6 + 1) == 0) {
                    puVar11 = &DAT_143f3eda8;
                  }
                  else {
                    puVar11 = (undefined2 *)*puVar6;
                  }
                  iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11);
                  if (iVar3 == 0) goto LAB_1416b7d25;
                }
                bVar1 = true;
              }
              if (plVar19 != (longlong *)0x0) {
                FMemory::Free(plVar19);
              }
              if (!bVar1) {
                plVar19 = plVar26;
                if (*(int *)(lVar15 + 0x1b8) == 1) {
                  puVar6 = (undefined8 *)IProjectManager::Get();
                  plVar10 = (longlong *)*puVar6;
                  cVar2 = (*(code *)plVar10[0x13])(puVar6);
                  plVar19 = plVar26;
                  if (cVar2 == '\0') goto LAB_1416b7c12;
                }
                uVar7 = local_c8;
                lVar12 = *(longlong *)(lVar15 + 0x1a8);
                lVar15 = (longlong)*(int *)(lVar15 + 0x1b0) * 0xa8 + lVar12;
                plVar26 = plVar19;
                iVar3 = iVar21;
                if (lVar12 != lVar15) {
                  do {
                    lVar9 = lVar12;
                    piVar4 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                                    FindId(uVar7,local_b8);
                    if ((*piVar4 == -1) &&
                       (lVar9 = lVar12,
                       piVar4 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>
                                       ::FindId(&local_98,local_b4), *piVar4 == -1)) {
                      _Var20 = 0;
                      lVar9 = lVar12;
                      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                      Emplace<FString_const_&>(&local_98,local_b0);
                      iVar3 = iVar21 + 1;
                      if (0 < iVar3) {
                        plVar19 = plVar26;
                        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                  (&stack0xfffffffffffffeb0,iVar21);
                        plVar26 = plVar19;
                      }
                      plVar19[iVar21] = lVar12;
                      iVar21 = iVar3;
                    }
                    lVar12 = lVar12 + 0xa8;
                  } while (lVar12 != lVar15);
                  uVar24 = (ulonglong)local_130;
                  plVar22 = local_a0;
                  iVar21 = iVar3;
                }
                uVar23 = uVar25 + 1;
                plVar10 = (longlong *)(ulonglong)uVar23;
                local_138 = CONCAT44(local_138._4_4_,uVar23);
                if (local_138._4_4_ < (int)uVar23) {
                  plVar10 = (longlong *)(ulonglong)uVar25;
                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_140);
                  uVar23 = (uint)local_138;
                }
                local_140[(longlong)(int)uVar25 * 2] = *plVar22;
                lVar15 = plVar22[1];
                local_140[(longlong)(int)uVar25 * 2 + 1] = lVar15;
                if (lVar15 == 0) {
                  uVar16 = (ulonglong)uVar23;
                  uVar25 = uVar23;
                }
                else {
                  LOCK();
                  *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
                  UNLOCK();
                  uVar16 = local_138 & 0xffffffff;
                  plVar19 = plVar26;
                  uVar25 = (uint)local_138;
                }
                goto LAB_1416b7c21;
              }
            }
          }
LAB_1416b7c12:
          uVar16 = (ulonglong)uVar25;
          plVar19 = plVar26;
        }
      }
LAB_1416b7c21:
      uVar7 = local_c8;
      plVar5 = local_140;
      local_12c = local_12c + 1;
      local_d0 = local_d0 + 1;
    } while (local_12c < iVar21);
    plVar22 = local_140 + (longlong)(int)uVar16 * 2;
    for (plVar10 = local_140; plVar10 != plVar22; plVar10 = plVar10 + 2) {
      *(undefined1 *)(*plVar10 + 0x1bc) = 1;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (uVar7,local_ac,*plVar10 + 8,0);
    }
    if ((int)uVar16 != 0) {
      plVar10 = plVar5 + 1;
      plVar19 = plVar26;
      do {
        plVar26 = (longlong *)*plVar10;
        if (plVar26 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar26 + 1;
          lVar9 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar26)(plVar26);
            LOCK();
            piVar4 = (int *)((longlong)plVar26 + 0xc);
            iVar21 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (iVar21 == 1) {
              (**(code **)(*plVar26 + 8))(plVar26,1);
            }
          }
        }
        plVar10 = plVar10 + 2;
        uVar23 = (int)uVar16 - 1;
        uVar16 = (ulonglong)uVar23;
        plVar5 = local_140;
      } while (uVar23 != 0);
    }
    if (plVar5 != (longlong *)0x0) {
      FMemory::Free(plVar5);
    }
    if (plVar19 != (longlong *)0x0) {
      FMemory::Free(plVar19);
    }
    local_50 = 0;
    if (local_58 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_98);
  }
  return 1;
}



// FUNCTION 1416b8090 FUN_1416b8090 body=7944 status=ok
// SIG undefined FUN_1416b8090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1416b8090(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  int *piVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined2 **ppuVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  uint uVar16;
  longlong lVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  uint *puVar20;
  longlong *plVar21;
  uint uVar22;
  longlong lVar23;
  uint *puVar24;
  longlong *plVar25;
  longlong *plVar26;
  bool bVar27;
  undefined1 auStack_9d8 [32];
  undefined2 *local_9b8;
  undefined8 local_9b0;
  undefined1 local_9a8;
  undefined1 local_9a0;
  undefined1 local_998;
  undefined2 *local_990;
  longlong local_988;
  longlong *local_980;
  longlong *local_978;
  undefined8 local_970;
  longlong *local_968;
  ulonglong local_960;
  undefined2 *local_958;
  int local_950;
  longlong local_948;
  undefined4 local_940;
  undefined4 local_93c;
  undefined2 *local_938;
  uint local_930;
  longlong *local_928;
  ulonglong local_920;
  undefined2 *local_918;
  undefined8 local_910;
  int local_908 [2];
  undefined2 *local_900;
  int local_8f8;
  longlong local_8f0;
  undefined8 local_8e8;
  longlong *local_8e0;
  undefined8 local_8d8;
  int local_8d0 [2];
  longlong *local_8c8;
  int local_8c0;
  uint uStack_8bc;
  uint *puStack_8b8;
  undefined4 local_8b0;
  int iStack_8ac;
  int iStack_8a8;
  undefined4 uStack_8a4;
  longlong local_8a0;
  int local_898;
  undefined4 local_894;
  longlong local_890;
  undefined4 local_888;
  undefined4 local_884;
  longlong local_880;
  undefined8 local_878;
  longlong local_870;
  undefined8 local_868;
  longlong local_860;
  undefined8 local_858;
  undefined2 *local_850;
  undefined8 local_848;
  longlong *local_840;
  longlong *local_838;
  undefined2 *local_830;
  undefined8 local_828;
  undefined2 *local_820;
  undefined8 local_818;
  int local_810;
  uint uStack_80c;
  uint *puStack_808;
  undefined4 local_800;
  uint uStack_7fc;
  int iStack_7f8;
  undefined4 uStack_7f4;
  int local_7f0;
  uint uStack_7ec;
  uint *puStack_7e8;
  undefined4 local_7e0;
  uint uStack_7dc;
  int iStack_7d8;
  undefined4 uStack_7d4;
  longlong local_7d0;
  int local_7c8;
  longlong local_7c0;
  undefined8 local_7b8;
  longlong local_7b0;
  undefined8 local_7a8;
  uint *local_7a0;
  undefined8 local_798;
  longlong local_790;
  undefined8 local_788;
  undefined2 *local_780;
  int local_778;
  undefined4 local_774;
  undefined2 *local_770;
  int local_768;
  undefined4 local_764;
  longlong local_760;
  undefined8 local_758;
  int local_750;
  uint *local_748;
  uint local_740;
  uint uStack_73c;
  uint local_738;
  int local_730;
  uint *local_728;
  uint local_720;
  uint uStack_71c;
  uint local_718;
  longlong local_710 [2];
  undefined2 local_700;
  longlong local_6f8;
  undefined8 local_6f0;
  longlong local_6e8;
  undefined8 local_6e0;
  longlong *local_6d8;
  undefined8 local_6d0;
  longlong *local_6c8;
  undefined8 local_6c0;
  longlong *local_6b8;
  undefined8 local_6b0;
  longlong *local_6a8;
  undefined8 local_6a0;
  longlong *local_698;
  undefined8 local_690;
  longlong *local_688;
  undefined8 local_680;
  longlong *local_678;
  undefined8 local_670;
  undefined2 *local_668;
  int local_660;
  longlong local_658;
  int local_650;
  int local_648;
  int local_644;
  undefined1 local_640 [4];
  undefined1 local_63c [4];
  undefined1 local_638 [4];
  undefined1 local_634 [4];
  int local_630;
  int local_62c;
  undefined1 local_628 [8];
  undefined2 *local_620;
  int local_618;
  undefined2 *local_610;
  int local_608;
  undefined2 *local_600;
  int local_5f8;
  longlong local_5f0 [2];
  undefined2 *local_5e0;
  undefined2 *local_5d8;
  undefined8 *local_5d0;
  int local_5c8;
  undefined **local_5c0;
  longlong **local_5b8;
  undefined1 local_5b0 [8];
  undefined1 local_5a8 [8];
  int local_5a0;
  undefined8 local_598;
  int iStack_590;
  uint uStack_58c;
  uint *local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 local_570;
  int iStack_568;
  uint uStack_564;
  uint *local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  longlong *local_548;
  int iStack_540;
  uint uStack_53c;
  uint *local_538;
  uint uStack_530;
  int iStack_52c;
  undefined8 local_528;
  longlong *local_520;
  uint *puStack_518;
  undefined8 uStack_510;
  uint uStack_508;
  int iStack_504;
  undefined8 uStack_500;
  undefined1 local_4f8 [16];
  undefined2 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined2 *local_450;
  wchar_t *local_448;
  longlong *local_440;
  undefined8 local_438;
  LARGE_INTEGER local_430;
  longlong local_428 [2];
  longlong local_418 [2];
  longlong local_408 [2];
  longlong local_3f8 [2];
  longlong local_3e8 [2];
  longlong local_3d8 [2];
  longlong local_3c8 [2];
  longlong local_3b8 [2];
  longlong local_3a8 [2];
  longlong local_398 [2];
  undefined1 local_388 [16];
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined4 local_344;
  longlong local_338;
  undefined4 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined4 local_2f4;
  longlong local_2e8;
  undefined4 local_2e0;
  undefined1 local_2d8 [256];
  longlong local_1d8;
  undefined8 local_1d0;
  undefined1 local_1b8 [288];
  longlong *local_98;
  wchar_t *pwStack_90;
  wchar_t *pwStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined2 *local_70;
  wchar_t *local_68;
  wchar_t *local_60;
  undefined2 *local_58;
  wchar_t *local_50;
  wchar_t *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_9d8;
  if (*(char *)(param_1 + 0x78) == '\0') {
    local_988 = param_1;
    QueryPerformanceCounter(&local_430);
    *(undefined1 *)(param_1 + 0x78) = 1;
    local_328 = 0;
    local_320 = 0;
    local_308 = 0;
    local_300 = 0;
    local_2f4 = 0;
    local_2e8 = 0;
    local_2e0 = 0;
    local_378 = 0;
    local_370 = 0;
    local_358 = 0;
    local_350 = 0;
    local_344 = 0;
    local_338 = 0;
    local_330 = 0;
    local_2f8 = 0xffffffff;
    local_348 = 0xffffffff;
    uVar3 = FCommandLine::Get();
    cVar2 = FParse::Param(uVar3,L"EnableAllPlugins");
    if (cVar2 != '\0') {
      local_978 = (longlong *)0x0;
      local_970 = 0;
      local_7c0 = 0;
      local_7b8 = 0;
      uVar3 = FCommandLine::Get();
      FParse::Value(uVar3,L"ExceptPlugins=",&local_7c0,0);
      FUN_141594550(&local_7c0,&local_978,&DAT_144cde35c,1);
      if (local_7c0 != 0) {
        FMemory::Free();
      }
      plVar26 = (longlong *)(local_988 + 8);
      local_7f0 = 0;
      uVar22 = *(uint *)(local_988 + 0x30);
      puVar20 = (uint *)(local_988 + 0x18);
      uStack_7ec = 1;
      uStack_7dc = 0;
      iStack_7d8 = 0;
      if (uVar22 != 0) {
        puVar24 = *(uint **)(local_988 + 0x28);
        if (*(uint **)(local_988 + 0x28) == (uint *)0x0) {
          puVar24 = puVar20;
        }
        uVar16 = *puVar24;
        iStack_7d8 = 0;
        local_7f0 = 0;
        while (uVar16 == 0) {
          lVar17 = (longlong)local_7f0;
          iStack_7d8 = iStack_7d8 + 0x20;
          iVar9 = local_7f0 + 1;
          bVar27 = (int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_7f0;
          local_7f0 = iVar9;
          if (bVar27) goto LAB_1416b82ae;
          uVar16 = puVar24[lVar17 + 1];
        }
        uStack_7ec = -uVar16 & uVar16;
        local_648 = 0x1f;
        if (uStack_7ec != 0) {
          for (; uStack_7ec >> local_648 == 0; local_648 = local_648 + -1) {
          }
        }
        if (uStack_7ec == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - local_648;
        }
        uStack_7dc = (iStack_7d8 - iVar9) + 0x1f;
        if ((int)uVar22 < (int)uStack_7dc) {
LAB_1416b82ae:
          uStack_7dc = uVar22;
        }
      }
      local_7e0 = 0xffffffff;
      uStack_73c = *(uint *)(local_988 + 0x30);
      pwStack_90 = (wchar_t *)CONCAT44(uStack_7ec,local_7f0);
      uStack_580 = CONCAT44(uStack_7dc,0xffffffff);
      local_578 = CONCAT44(uStack_7d4,iStack_7d8);
      local_740 = -1 << ((byte)uStack_73c & 0x1f);
      local_750 = (int)uStack_73c >> 5;
      local_738 = uStack_73c & 0xffffffe0;
      iStack_590 = local_7f0;
      uStack_58c = uStack_7ec;
      puStack_7e8 = puVar20;
      local_748 = puVar20;
      local_588 = puVar20;
      local_98 = plVar26;
      pwStack_88 = (wchar_t *)puVar20;
      puStack_80 = (undefined *)uStack_580;
      uStack_78 = local_578;
      local_598 = plVar26;
      uVar16 = uStack_73c;
      if (uStack_73c != uVar22) {
        puVar24 = *(uint **)(local_988 + 0x28);
        if (*(uint **)(local_988 + 0x28) == (uint *)0x0) {
          puVar24 = puVar20;
        }
        uVar16 = puVar24[local_750] & local_740;
        while (uVar16 == 0) {
          lVar17 = (longlong)local_750;
          local_738 = local_738 + 0x20;
          iVar9 = local_750 + 1;
          bVar27 = (int)(((int)(uVar22 - 1) >> 0x1f & 0x1fU) + (uVar22 - 1)) >> 5 <= local_750;
          local_750 = iVar9;
          if (bVar27) goto LAB_1416b83c7;
          uVar16 = puVar24[lVar17 + 1];
          local_740 = 0xffffffff;
        }
        uVar16 = -uVar16 & uVar16;
        local_644 = 0x1f;
        if (uVar16 != 0) {
          for (; uVar16 >> local_644 == 0; local_644 = local_644 + -1) {
          }
        }
        if (uVar16 == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - local_644;
        }
        uStack_73c = (local_738 - iVar9) + 0x1f;
        uVar16 = uStack_73c;
        if ((int)uVar22 < (int)uStack_73c) {
LAB_1416b83c7:
          uStack_73c = uVar22;
          uVar16 = uVar22;
        }
      }
      while( true ) {
        if (((uStack_580._4_4_ == uVar16) && (local_588 == puVar20)) && (local_598 == plVar26))
        break;
        puVar7 = (undefined8 *)(*local_598 + (longlong)(int)uStack_580._4_4_ * 0x28);
        piVar4 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId
                                  (&local_378,local_640);
        if (*piVar4 == -1) {
          plVar21 = local_978 + (longlong)(int)local_970 * 2;
          for (plVar25 = local_978; plVar25 != plVar21; plVar25 = plVar25 + 2) {
            if (*(int *)(puVar7 + 1) == 0) {
              puVar18 = &DAT_143f3eda8;
            }
            else {
              puVar18 = (undefined2 *)*puVar7;
            }
            if ((int)plVar25[1] == 0) {
              puVar11 = &DAT_143f3eda8;
            }
            else {
              puVar11 = (undefined2 *)*plVar25;
            }
            iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,puVar18);
            if (iVar9 == 0) {
              bVar27 = true;
              goto LAB_1416b848b;
            }
          }
          bVar27 = false;
LAB_1416b848b:
          if (!bVar27) {
            FString::FString(local_4f8,puVar7);
            local_4e8 = 1;
            local_4e0 = 0;
            local_4d8 = 0;
            local_4d0 = 0;
            local_4c8 = 0;
            local_4c0 = 0;
            local_4b8 = 0;
            local_4b0 = 0;
            local_4a8 = 0;
            local_4a0 = 0;
            local_498 = 0;
            local_490 = 0;
            local_488 = 0;
            local_480 = 0;
            local_478 = 0;
            local_470 = 0;
            local_468 = 0;
            local_460 = 0;
            local_458 = 0;
            cVar2 = FUN_1416b7610(local_988,local_4f8,&local_328);
            FPluginReferenceDescriptor::~FPluginReferenceDescriptor(local_4f8);
            if (cVar2 == '\0') {
              plVar26 = local_978;
              for (iVar9 = (int)local_970; iVar9 != 0; iVar9 = iVar9 + -1) {
                if (*plVar26 != 0) {
                  FMemory::Free();
                }
                plVar26 = plVar26 + 2;
              }
              if (local_978 != (longlong *)0x0) {
                FMemory::Free(local_978);
              }
              goto LAB_1416b865e;
            }
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                      (&local_378,local_63c,puVar7,0);
          }
        }
        uStack_580 = CONCAT44(uStack_580._4_4_,(uint)uStack_580 & ~uStack_58c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_590);
      }
      plVar26 = local_978;
      for (iVar9 = (int)local_970; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar26 != 0) {
          FMemory::Free();
        }
        plVar26 = plVar26 + 2;
      }
      if (local_978 != (longlong *)0x0) {
        FMemory::Free(local_978);
      }
    }
    lVar17 = 0;
    uVar3 = FCommandLine::Get();
    cVar2 = FParse::Param(uVar3,L"NoEnginePlugins");
    lVar5 = local_988;
    if (cVar2 == '\0') {
      plVar26 = (longlong *)IProjectManager::Get();
      lVar5 = (**(code **)(*plVar26 + 8))(plVar26);
      if (lVar5 != 0) {
        iVar9 = *(int *)(lVar5 + 0x50);
        lVar5 = *(longlong *)(lVar5 + 0x48);
        local_8a0 = 0;
        local_898 = iVar9;
        if (iVar9 == 0) {
          local_894 = 0;
        }
        else {
          TArray<FInAppPurchaseProductInfo,FDefaultAllocator>::ResizeForCopy(&local_8a0,iVar9,0);
          lVar17 = local_8a0;
          lVar12 = local_8a0 - lVar5;
          do {
            FPluginReferenceDescriptor::FPluginReferenceDescriptor(lVar12 + lVar5,lVar5);
            lVar5 = lVar5 + 0xa8;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
        lVar5 = (longlong)local_898 * 0xa8 + lVar17;
        for (; lVar17 != lVar5; lVar17 = lVar17 + 0xa8) {
          piVar4 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId
                                    (&local_378,local_638,lVar17);
          if (*piVar4 == -1) {
            cVar2 = FUN_1416b7610(local_988,lVar17,&local_328);
            if (cVar2 == '\0') {
              TArray<FPluginReferenceDescriptor,FDefaultAllocator>::
              ~TArray<FPluginReferenceDescriptor,FDefaultAllocator>(&local_8a0);
              goto LAB_1416b865e;
            }
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                      (&local_378,local_634,lVar17,0);
          }
        }
        TArray<FPluginReferenceDescriptor,FDefaultAllocator>::
        ~TArray<FPluginReferenceDescriptor,FDefaultAllocator>(&local_8a0);
      }
      local_810 = 0;
      uStack_80c = 1;
      plVar26 = (longlong *)(local_988 + 8);
      uStack_7fc = 0;
      iStack_7f8 = 0;
      uVar22 = *(uint *)(local_988 + 0x30);
      puVar20 = (uint *)(local_988 + 0x18);
      if (uVar22 != 0) {
        puVar24 = *(uint **)(local_988 + 0x28);
        if (*(uint **)(local_988 + 0x28) == (uint *)0x0) {
          puVar24 = puVar20;
        }
        uVar16 = *puVar24;
        while (uVar16 == 0) {
          lVar17 = (longlong)local_810;
          iStack_7f8 = iStack_7f8 + 0x20;
          iVar9 = local_810 + 1;
          bVar27 = (int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_810;
          local_810 = iVar9;
          if (bVar27) goto LAB_1416b884c;
          uVar16 = puVar24[lVar17 + 1];
        }
        uStack_80c = -uVar16 & uVar16;
        local_630 = 0x1f;
        if (uStack_80c != 0) {
          for (; uStack_80c >> local_630 == 0; local_630 = local_630 + -1) {
          }
        }
        if (uStack_80c == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - local_630;
        }
        uStack_7fc = (iStack_7f8 - iVar9) + 0x1f;
        if ((int)uVar22 < (int)uStack_7fc) {
LAB_1416b884c:
          uStack_7fc = uVar22;
        }
      }
      local_800 = 0xffffffff;
      uStack_71c = *(uint *)(local_988 + 0x30);
      pwStack_90 = (wchar_t *)CONCAT44(uStack_80c,local_810);
      uStack_558 = CONCAT44(uStack_7fc,0xffffffff);
      local_550 = CONCAT44(uStack_7f4,iStack_7f8);
      local_720 = -1 << ((byte)uStack_71c & 0x1f);
      local_730 = (int)uStack_71c >> 5;
      local_718 = uStack_71c & 0xffffffe0;
      iStack_568 = local_810;
      uStack_564 = uStack_80c;
      if (uStack_71c != uVar22) {
        puVar24 = *(uint **)(local_988 + 0x28);
        if (*(uint **)(local_988 + 0x28) == (uint *)0x0) {
          puVar24 = puVar20;
        }
        uVar16 = puVar24[local_730] & local_720;
        while (uVar16 == 0) {
          lVar17 = (longlong)local_730;
          local_718 = local_718 + 0x20;
          iVar9 = local_730 + 1;
          bVar27 = (int)(((int)(uVar22 - 1) >> 0x1f & 0x1fU) + (uVar22 - 1)) >> 5 <= local_730;
          local_730 = iVar9;
          if (bVar27) goto LAB_1416b8967;
          uVar16 = puVar24[lVar17 + 1];
          local_720 = 0xffffffff;
        }
        uVar16 = -uVar16 & uVar16;
        local_62c = 0x1f;
        if (uVar16 != 0) {
          for (; uVar16 >> local_62c == 0; local_62c = local_62c + -1) {
          }
        }
        if (uVar16 == 0) {
          iVar9 = 0x20;
        }
        else {
          iVar9 = 0x1f - local_62c;
        }
        uStack_71c = (local_718 - iVar9) + 0x1f;
        if ((int)uVar22 < (int)uStack_71c) {
LAB_1416b8967:
          uStack_71c = uVar22;
        }
      }
      local_980 = (longlong *)(ulonglong)uStack_71c;
      lVar5 = local_988;
      puStack_808 = puVar20;
      local_728 = puVar20;
      local_560 = puVar20;
      local_98 = plVar26;
      pwStack_88 = (wchar_t *)puVar20;
      puStack_80 = (undefined *)uStack_558;
      uStack_78 = local_550;
      local_570 = plVar26;
      while( true ) {
        if (((uStack_558._4_4_ == (int)local_980) && (local_560 == puVar20)) &&
           (local_570 == plVar26)) break;
        lVar17 = *local_570 + (longlong)uStack_558._4_4_ * 0x28;
        lVar12 = *(longlong *)(*local_570 + 0x10 + (longlong)uStack_558._4_4_ * 0x28);
        cVar2 = *(char *)(lVar12 + 0x100);
        if ((cVar2 == '\x01') || ((cVar2 != '\x02' && (1 < *(uint *)(lVar12 + 0x1b8))))) {
          piVar4 = (int *)TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId
                                    (&local_378,local_5b0,lVar17);
          if (*piVar4 == -1) {
            FString::FString(local_710,lVar17);
            local_700 = 1;
            local_6f8 = 0;
            local_6f0 = 0;
            local_6e8 = 0;
            local_6e0 = 0;
            local_6d8 = (longlong *)0x0;
            local_6d0 = 0;
            local_6c8 = (longlong *)0x0;
            local_6c0 = 0;
            local_6b8 = (longlong *)0x0;
            local_6b0 = 0;
            local_6a8 = (longlong *)0x0;
            local_6a0 = 0;
            local_698 = (longlong *)0x0;
            local_690 = 0;
            local_688 = (longlong *)0x0;
            local_680 = 0;
            local_678 = (longlong *)0x0;
            local_670 = 0;
            cVar2 = FUN_1416b7610(lVar5,local_710,&local_328);
            plVar25 = local_678;
            for (iVar9 = (int)local_670; iVar9 != 0; iVar9 = iVar9 + -1) {
              if (*plVar25 != 0) {
                FMemory::Free();
              }
              plVar25 = plVar25 + 2;
            }
            if (local_678 != (longlong *)0x0) {
              FMemory::Free(local_678);
            }
            plVar25 = local_688;
            for (iVar9 = (int)local_680; iVar9 != 0; iVar9 = iVar9 + -1) {
              if (*plVar25 != 0) {
                FMemory::Free();
              }
              plVar25 = plVar25 + 2;
            }
            if (local_688 != (longlong *)0x0) {
              FMemory::Free(local_688);
            }
            plVar25 = local_698;
            for (iVar9 = (int)local_690; iVar9 != 0; iVar9 = iVar9 + -1) {
              if (*plVar25 != 0) {
                FMemory::Free();
              }
              plVar25 = plVar25 + 2;
            }
            if (local_698 != (longlong *)0x0) {
              FMemory::Free(local_698);
            }
            plVar25 = local_6a8;
            for (iVar9 = (int)local_6a0; iVar9 != 0; iVar9 = iVar9 + -1) {
              if (*plVar25 != 0) {
                FMemory::Free();
              }
              plVar25 = plVar25 + 2;
            }
            if (local_6a8 != (longlong *)0x0) {
              FMemory::Free(local_6a8);
            }
            plVar25 = local_6b8;
            for (iVar9 = (int)local_6b0; iVar9 != 0; iVar9 = iVar9 + -1) {
              if (*plVar25 != 0) {
                FMemory::Free();
              }
              plVar25 = plVar25 + 2;
            }
            if (local_6b8 != (longlong *)0x0) {
              FMemory::Free(local_6b8);
            }
            plVar25 = local_6c8;
            for (iVar9 = (int)local_6c0; iVar9 != 0; iVar9 = iVar9 + -1) {
              if (*plVar25 != 0) {
                FMemory::Free();
              }
              plVar25 = plVar25 + 2;
            }
            if (local_6c8 != (longlong *)0x0) {
              FMemory::Free(local_6c8);
            }
            plVar25 = local_6d8;
            for (iVar9 = (int)local_6d0; iVar9 != 0; iVar9 = iVar9 + -1) {
              if (*plVar25 != 0) {
                FMemory::Free();
              }
              plVar25 = plVar25 + 2;
            }
            if (local_6d8 != (longlong *)0x0) {
              FMemory::Free(local_6d8);
            }
            if (local_6e8 != 0) {
              FMemory::Free();
            }
            if (local_6f8 != 0) {
              FMemory::Free();
            }
            if (local_710[0] != 0) {
              FMemory::Free();
            }
            if (cVar2 == '\0') {
LAB_1416b865e:
              local_330 = 0;
              if (local_338 != 0) {
                FMemory::Free();
              }
              TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                        (&local_378);
              local_2e0 = 0;
              if (local_2e8 != 0) {
                FMemory::Free();
              }
              uVar6 = TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                      ::
                      ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                                (&local_328);
              return uVar6 & 0xffffffffffffff00;
            }
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                      (&local_378,local_628,lVar17,0);
            lVar5 = local_988;
          }
        }
        uStack_558 = CONCAT44(uStack_558._4_4_,(uint)uStack_558 & ~uStack_564);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_568);
      }
    }
    puVar18 = (undefined2 *)0x0;
    *(undefined1 *)(lVar5 + 0x79) = 1;
    iVar9 = SetDefaultDllDirectories(0x1400);
    if (iVar9 == 0) {
      GetLastError();
    }
    local_938 = (undefined2 *)0x0;
    local_930 = 0;
    uVar3 = FGenericPlatformMisc::GetUBTPlatform();
    puVar7 = (undefined8 *)FPaths::EngineDir(local_3a8);
    if (*(int *)(puVar7 + 1) == 0) {
      local_58 = &DAT_143f3eda8;
    }
    else {
      local_58 = (undefined2 *)*puVar7;
    }
    local_50 = L"Binaries";
    local_820 = (undefined2 *)0x0;
    local_48 = L"Plugins";
    local_818 = 0;
    local_40 = uVar3;
    FPaths::CombineInternal(&local_820,&local_58,4);
    if (local_3a8[0] != 0) {
      FMemory::Free();
    }
    plVar26 = (longlong *)FUN_1415c3d50();
    puVar11 = &DAT_143f3eda8;
    if ((int)local_818 != 0) {
      puVar11 = local_820;
    }
    ppuVar8 = (undefined2 **)(**(code **)(*plVar26 + 0xe0))(plVar26,local_398,puVar11);
    puVar11 = puVar18;
    if (&local_938 != ppuVar8) {
      puVar11 = *ppuVar8;
      *ppuVar8 = (undefined2 *)0x0;
      local_930 = *(uint *)(ppuVar8 + 1);
      puVar18 = (undefined2 *)(ulonglong)local_930;
      ppuVar8[1] = (undefined2 *)0x0;
      local_938 = puVar11;
    }
    uVar22 = (uint)puVar18;
    if (local_398[0] != 0) {
      FMemory::Free();
    }
    puVar18 = &DAT_143f3eda8;
    if (uVar22 != 0) {
      puVar18 = puVar11;
    }
    lVar17 = AddDllDirectory(puVar18);
    if (lVar17 == 0) {
      GetLastError();
    }
    uVar3 = FGenericPlatformMisc::GetUBTPlatform();
    puVar7 = (undefined8 *)FPaths::EngineDir(local_428);
    if (*(int *)(puVar7 + 1) == 0) {
      local_98 = (longlong *)&DAT_143f3eda8;
    }
    else {
      local_98 = (longlong *)*puVar7;
    }
    pwStack_90 = L"Binaries";
    pwStack_88 = L"Plugins";
    local_830 = (undefined2 *)0x0;
    puStack_80 = &DAT_144cdf410;
    local_828 = 0;
    uStack_78 = uVar3;
    FPaths::CombineInternal(&local_830,&local_98,5);
    if (local_428[0] != 0) {
      FMemory::Free();
    }
    plVar26 = (longlong *)FUN_1415c3d50();
    puVar18 = &DAT_143f3eda8;
    if ((int)local_828 != 0) {
      puVar18 = local_830;
    }
    ppuVar8 = (undefined2 **)(**(code **)(*plVar26 + 0xe0))(plVar26,local_418,puVar18);
    if (&local_938 != ppuVar8) {
      if (puVar11 != (undefined2 *)0x0) {
        FMemory::Free(puVar11);
      }
      puVar11 = *ppuVar8;
      *ppuVar8 = (undefined2 *)0x0;
      uVar22 = *(uint *)(ppuVar8 + 1);
      ppuVar8[1] = (undefined2 *)0x0;
      local_938 = puVar11;
      local_930 = uVar22;
    }
    if (local_418[0] != 0) {
      FMemory::Free();
    }
    puVar18 = &DAT_143f3eda8;
    if (uVar22 != 0) {
      puVar18 = puVar11;
    }
    lVar17 = AddDllDirectory(puVar18);
    if (lVar17 == 0) {
      GetLastError();
    }
    plVar26 = (longlong *)(lVar5 + 8);
    uStack_8bc = 1;
    iVar9 = *(int *)(lVar5 + 0x30);
    puVar20 = (uint *)(lVar5 + 0x18);
    local_8c0 = 0;
    iStack_8ac = 0;
    iStack_8a8 = 0;
    if (iVar9 != 0) {
      puVar24 = *(uint **)(lVar5 + 0x28);
      if (*(uint **)(lVar5 + 0x28) == (uint *)0x0) {
        puVar24 = puVar20;
      }
      uVar22 = *puVar24;
      iStack_8a8 = 0;
      local_8c0 = 0;
      while (uVar22 == 0) {
        lVar17 = (longlong)local_8c0;
        iStack_8a8 = iStack_8a8 + 0x20;
        iVar10 = local_8c0 + 1;
        bVar27 = (int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_8c0;
        local_8c0 = iVar10;
        if (bVar27) goto LAB_1416b900d;
        uVar22 = puVar24[lVar17 + 1];
      }
      uStack_8bc = -uVar22 & uVar22;
      local_5a0 = 0x1f;
      if (uStack_8bc != 0) {
        for (; uStack_8bc >> local_5a0 == 0; local_5a0 = local_5a0 + -1) {
        }
      }
      if (uStack_8bc == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - local_5a0;
      }
      iStack_8ac = (iStack_8a8 - iVar10) + 0x1f;
      if (iVar9 < iStack_8ac) {
LAB_1416b900d:
        iStack_8ac = iVar9;
      }
    }
    local_8b0 = 0xffffffff;
    uVar22 = *(uint *)(lVar5 + 0x30);
    uStack_530 = 0xffffffff;
    iStack_52c = iStack_8ac;
    local_528 = CONCAT44(uStack_8a4,iStack_8a8);
    uStack_510 = CONCAT44(uVar22,-1 << ((byte)uVar22 & 0x1f));
    plVar25 = (longlong *)(ulonglong)uVar22;
    iStack_540 = local_8c0;
    uStack_53c = uStack_8bc;
    local_980 = plVar26;
    local_8c8 = plVar25;
    puStack_8b8 = puVar20;
    local_538 = puVar20;
    local_520 = plVar26;
    puStack_518 = puVar20;
    uStack_500 = local_528;
    local_548 = plVar26;
    uStack_508 = uStack_530;
    iStack_504 = iStack_52c;
    while( true ) {
      if (((iStack_52c == (int)plVar25) && (local_538 == puVar20)) && (local_548 == plVar26)) break;
      lVar17 = *(longlong *)(*local_548 + 0x10 + (longlong)iStack_52c * 0x28);
      if (*(char *)(lVar17 + 0x1bc) != '\0') {
        FUN_141672d20(&local_620,lVar17 + 0x18);
        local_68 = L"Binaries";
        local_70 = &DAT_143f3eda8;
        if (local_618 != 0) {
          local_70 = local_620;
        }
        local_918 = (undefined2 *)0x0;
        local_60 = L"Win64";
        local_910 = 0;
        FPaths::CombineInternal(&local_918,&local_70,3);
        if (local_620 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_8e0 = (longlong *)0x0;
        local_8d8 = 0;
        plVar26 = (longlong *)FUN_1415c3d50();
        puVar18 = local_918;
        lVar5 = (longlong)(int)local_910;
        local_900 = (undefined2 *)0x0;
        local_8f8 = (int)local_910;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                  (&local_900,(7 - (uint)((int)local_910 != 0)) + (int)local_910,0);
        _guard_xfg_dispatch_icall_nop(local_900,puVar18,lVar5 * 2);
        FString::PathAppend(&local_900,L"*.dll",5);
        puVar18 = &DAT_143f3eda8;
        if (local_8f8 != 0) {
          puVar18 = local_900;
        }
        local_9b8 = (undefined2 *)((ulonglong)local_9b8 & 0xffffffffffffff00);
        (**(code **)(*plVar26 + 0x78))(plVar26,&local_8e0,puVar18,1);
        if (local_900 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (0 < (int)local_8d8) {
          plVar26 = (longlong *)FUN_1415c3d50();
          puVar18 = &DAT_143f3eda8;
          if ((int)local_910 != 0) {
            puVar18 = local_918;
          }
          (**(code **)(*plVar26 + 0xe0))(plVar26,&local_610,puVar18);
          puVar18 = &DAT_143f3eda8;
          if (local_608 != 0) {
            puVar18 = local_610;
          }
          lVar5 = AddDllDirectory(puVar18);
          if (lVar5 == 0) {
            GetLastError();
          }
          if (local_610 != (undefined2 *)0x0) {
            FMemory::Free();
          }
        }
        FUN_141672d20(&local_600,lVar17 + 0x18);
        local_870 = 0;
        local_450 = &DAT_143f3eda8;
        if (local_5f8 != 0) {
          local_450 = local_600;
        }
        local_868 = 0;
        local_448 = L"Shaders";
        FPaths::CombineInternal(&local_870,&local_450,2);
        if (local_600 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        cVar2 = FPaths::DirectoryExists(&local_870);
        if (cVar2 != '\0') {
          lVar5 = *(longlong *)(lVar17 + 0xe0);
          lVar12 = (longlong)*(int *)(lVar17 + 0xe8) * 0x80 + lVar5;
          for (; lVar5 != lVar12; lVar5 = lVar5 + 0x80) {
            if (*(int *)(lVar5 + 0xc) == 0) {
              local_8f0 = 0;
              local_8e8 = 8;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_8f0,0);
              FGenericPlatformString::Memcpy(local_8f0,L"/Plugin",0x10);
              iVar9 = *(int *)(lVar17 + 0x10) + -1;
              if (*(int *)(lVar17 + 0x10) == 0) {
                iVar9 = 0;
              }
              if (((int)local_8e8 != 0) || (iVar10 = 2, iVar9 == -1)) {
                iVar10 = 1;
              }
              TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                        (local_5f0,&local_8f0,iVar9 + iVar10);
              FString::PathAppend(local_5f0,*(undefined8 *)(lVar17 + 8),iVar9);
              if (local_8f0 != 0) {
                FMemory::Free();
              }
              AK::MemoryMgr::StartProfileThreadUsage((long)local_5f0);
              if (local_5f0[0] != 0) {
                FMemory::Free();
              }
              break;
            }
          }
        }
        if (local_870 != 0) {
          FMemory::Free();
        }
        if (*(char *)(lVar17 + 0x101) != '\0') {
          plVar26 = (longlong *)FConfigCacheIni::Find(DAT_1468b6148,&DAT_1468e2360,0);
          if (plVar26 != (longlong *)0x0) {
            local_7b0 = 0;
            local_7a8 = 0xc;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_7b0,0);
            lVar5 = local_7b0;
            FGenericPlatformString::Memcpy(local_7b0,L"Core.System",0x18);
            TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
            ::FindId(plVar26,local_8d0,&local_7b0);
            lVar12 = 0;
            if (local_8d0[0] != -1) {
              lVar12 = (longlong)local_8d0[0] * 0xb8 + *plVar26;
            }
            lVar23 = lVar12 + 0x10;
            if (lVar12 == 0) {
              lVar23 = 0;
            }
            if (lVar5 != 0) {
              FMemory::Free(lVar5);
            }
            if (lVar23 != 0) {
              plVar26 = (longlong *)FPlugin::GetContentDir(lVar17,local_388);
              local_890 = *plVar26;
              *plVar26 = 0;
              local_888 = (undefined4)plVar26[1];
              local_884 = *(undefined4 *)((longlong)plVar26 + 0xc);
              plVar26[1] = 0;
              local_880 = 0;
              local_878 = 0;
              cVar2 = FConfigValue::ExpandValue(&local_890,&local_880);
              if (cVar2 == '\0') {
                bVar27 = local_878._4_4_ != 0;
                local_878 = (ulonglong)local_878._4_4_ << 0x20;
                if (bVar27) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_880,0);
                }
              }
              if (*plVar26 != 0) {
                FMemory::Free();
              }
              FName::FName(local_5a8,"Paths",1);
              TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
              ::EmplaceUnique<FName_const_&,FConfigValue>(lVar23,local_5a8,&local_890);
              if (local_880 != 0) {
                FMemory::Free();
              }
              if (local_890 != 0) {
                FMemory::Free();
              }
            }
          }
        }
        lVar5 = FUN_141672d20(local_408,lVar17 + 0x18);
        TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                  (&local_958,lVar5,9 - (uint)(*(int *)(lVar5 + 8) != 0));
        FString::PathAppend(&local_958,L"Config/",7);
        if (local_408[0] != 0) {
          FMemory::Free();
        }
        FPaths::EngineConfigDir(&local_770);
        FPaths::ProjectConfigDir(&local_780);
        local_9b8 = (undefined2 *)((ulonglong)local_9b8 & 0xffffffff00000000);
        if (*(uint *)(lVar17 + 0x1b8) < 2) {
          ppuVar8 = &local_770;
          uVar1 = local_764;
        }
        else {
          ppuVar8 = &local_780;
          uVar1 = local_774;
        }
        TArray<wchar_t,FDefaultAllocator>::CopyToEmpty<wchar_t>(ppuVar8,local_958,local_950,uVar1);
        if (*(int *)(lVar17 + 0x10) == 0) {
          puVar18 = &DAT_143f3eda8;
        }
        else {
          puVar18 = *(undefined2 **)(lVar17 + 8);
        }
        TStringConversion<TStringConvert<char,wchar_t>,128>::
        TStringConversion<TStringConvert<char,wchar_t>,128>(local_2d8,"WindowsNoEditor");
        uVar3 = local_1d0;
        puVar7 = (undefined8 *)FPaths::GeneratedConfigDir(local_3f8);
        if (*(int *)(puVar7 + 1) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = (undefined2 *)*puVar7;
        }
        local_9b8 = puVar18;
        FString::PrintfImpl(&local_948,L"%s%s/%s.ini",puVar11,uVar3);
        if (local_3f8[0] != 0) {
          FMemory::Free();
        }
        if (local_1d8 != 0) {
          FMemory::Free();
        }
        FUN_1416781b0(&local_948);
        local_438 = FConfigFile::FConfigFile(local_1b8);
        lVar5 = DAT_1468b6148;
        local_440 = &local_948;
        TSet<TTuple<FString,FConfigFile>,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FConfigFile_&&>_>
                  (DAT_1468b6148 + 8,local_908,&local_440,0);
        lVar12 = (longlong)local_908[0];
        lVar5 = *(longlong *)(lVar5 + 8);
        FConfigFile::~FConfigFile(local_1b8);
        puVar7 = (undefined8 *)FPaths::GeneratedConfigDir(local_3d8);
        if (*(int *)(puVar7 + 1) == 0) {
          local_990 = &DAT_143f3eda8;
        }
        else {
          local_990 = (undefined2 *)*puVar7;
        }
        puVar18 = &DAT_143f3eda8;
        if (local_778 != 0) {
          puVar18 = local_780;
        }
        puVar11 = &DAT_143f3eda8;
        if (local_768 != 0) {
          puVar11 = local_770;
        }
        if (*(int *)(lVar17 + 0x10) == 0) {
          puVar19 = &DAT_143f3eda8;
        }
        else {
          puVar19 = *(undefined2 **)(lVar17 + 8);
        }
        local_998 = 1;
        local_9a0 = 1;
        local_9a8 = 0;
        local_9b0 = 0;
        local_9b8 = (undefined2 *)CONCAT71(local_9b8._1_7_,1);
        cVar2 = FConfigCacheIni::LoadExternalIniFile
                          (lVar5 + lVar12 * 0x130 + 0x10,puVar19,puVar11,puVar18);
        if (local_3d8[0] != 0) {
          FMemory::Free();
        }
        if (cVar2 == '\0') {
          TSet<TTuple<FString,FConfigFile>,TDefaultMapHashableKeyFuncs<FString,FConfigFile,0>,FDefaultSetAllocator>
          ::Remove(DAT_1468b6148 + 8,&local_948);
        }
        local_928 = (longlong *)0x0;
        local_920 = 0;
        plVar26 = (longlong *)FUN_1415c3d50();
        puVar18 = &DAT_143f3eda8;
        if (local_950 != 0) {
          puVar18 = local_958;
        }
        (**(code **)(*plVar26 + 0x70))(plVar26,&local_928,puVar18,&DAT_144cdfa00);
        uVar6 = (ulonglong)(int)local_920;
        plVar21 = local_928 + uVar6 * 2;
        plVar26 = local_928;
        if (local_928 != plVar21) {
          do {
            local_7a0 = (uint *)0x0;
            local_798 = 0x10;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_7a0,0);
            puVar20 = local_7a0;
            local_9b8 = (undefined2 *)CONCAT62(local_9b8._2_6_,0x3f);
            FGenericPlatformString::Convert<char,wchar_t>(local_7a0,0x10,"WindowsNoEditor");
            puVar7 = (undefined8 *)FUN_141671940(local_3b8,plVar26,1);
            if (*(int *)(puVar7 + 1) == 0) {
              puVar18 = &DAT_143f3eda8;
            }
            else {
              puVar18 = (undefined2 *)*puVar7;
            }
            puVar24 = (uint *)&DAT_143f3eda8;
            if ((int)local_798 != 0) {
              puVar24 = puVar20;
            }
            puVar7 = (undefined8 *)FPaths::GeneratedConfigDir(local_3c8);
            if (*(int *)(puVar7 + 1) == 0) {
              puVar11 = &DAT_143f3eda8;
            }
            else {
              puVar11 = (undefined2 *)*puVar7;
            }
            local_9b8 = puVar18;
            FString::PrintfImpl(&local_860,L"%s%s/%s.ini",puVar11,puVar24);
            if (local_948 != 0) {
              FMemory::Free();
            }
            local_948 = local_860;
            local_940 = (undefined4)local_858;
            local_93c = local_858._4_4_;
            local_858 = 0;
            local_860 = 0;
            if (local_3c8[0] != 0) {
              FMemory::Free();
            }
            if (local_3b8[0] != 0) {
              FMemory::Free();
            }
            lVar17 = FConfigCacheIni::Find(DAT_1468b6148,&local_948,0);
            if (lVar17 != 0) {
              local_790 = 0;
              local_5e0 = &DAT_143f3eda8;
              if (local_950 != 0) {
                local_5e0 = local_958;
              }
              local_788 = 0;
              if ((int)plVar26[1] == 0) {
                local_5d8 = &DAT_143f3eda8;
              }
              else {
                local_5d8 = (undefined2 *)*plVar26;
              }
              local_850 = (undefined2 *)0x0;
              local_848 = 0;
              FPaths::CombineInternal(&local_850,&local_5e0,2);
              puVar18 = &DAT_143f3eda8;
              if ((int)local_848 != 0) {
                puVar18 = local_850;
              }
              cVar2 = FUN_141676530(&local_790,puVar18,0);
              if (local_850 != (undefined2 *)0x0) {
                FMemory::Free();
              }
              if (cVar2 != '\0') {
                FConfigFile::CombineFromBuffer(lVar17);
                *(undefined1 *)(lVar17 + 0x51) = 1;
              }
              if (local_790 != 0) {
                FMemory::Free();
              }
            }
            if (puVar20 != (uint *)0x0) {
              FMemory::Free(puVar20);
            }
            plVar26 = plVar26 + 2;
          } while (plVar26 != plVar21);
          uVar6 = local_920 & 0xffffffff;
          plVar25 = local_8c8;
        }
        uVar22 = (uint)uVar6;
        plVar26 = local_928;
        while (uVar22 != 0) {
          if (*plVar26 != 0) {
            FMemory::Free();
          }
          plVar26 = plVar26 + 2;
          uVar22 = (int)uVar6 - 1;
          uVar6 = (ulonglong)uVar22;
        }
        if (local_928 != (longlong *)0x0) {
          FMemory::Free(local_928);
        }
        if (local_948 != 0) {
          FMemory::Free();
        }
        if (local_780 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_770 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (local_958 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        plVar26 = local_8e0;
        for (iVar9 = (int)local_8d8; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (*plVar26 != 0) {
            FMemory::Free();
          }
          plVar26 = plVar26 + 2;
        }
        if (local_8e0 != (longlong *)0x0) {
          FMemory::Free(local_8e0);
        }
        puVar20 = puStack_8b8;
        plVar26 = local_980;
        if (local_918 != (undefined2 *)0x0) {
          FMemory::Free();
          puVar20 = puStack_8b8;
          plVar26 = local_980;
        }
      }
      uStack_530 = uStack_530 & ~uStack_53c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_540);
    }
    local_968 = (longlong *)0x0;
    local_5c0 = &PTR_FUN_144ce40c8;
    local_5b8 = &local_968;
    local_960 = 0;
    uVar3 = FPlatformFileManager::Get();
    local_8c8 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar3);
    param_1 = local_988;
    FUN_1416bade0(local_988,&local_5d0);
    plVar26 = local_5d0 + (longlong)local_5c8 * 2;
    local_980 = plVar26;
    if (local_5d0 != plVar26) {
      plVar25 = (longlong *)(param_1 + 0xe8);
      puVar7 = local_5d0;
LAB_1416b9b10:
      plVar21 = (longlong *)puVar7[1];
      plVar14 = (longlong *)*puVar7;
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        UNLOCK();
      }
      plVar15 = (longlong *)*plVar25;
      plVar13 = plVar15 + (longlong)(int)plVar25[1] * 2;
      for (; local_840 = plVar14, local_838 = plVar21, plVar15 != plVar13; plVar15 = plVar15 + 2) {
        if (((int)plVar15[1] != 0) && (*plVar15 != 0)) {
          *(int *)((longlong)plVar25 + 0x14) = *(int *)((longlong)plVar25 + 0x14) + 1;
          bVar27 = false;
          iVar9 = *(int *)((longlong)plVar25 + 0x14);
          iVar10 = (int)plVar25[1] + -1;
          lVar17 = (longlong)iVar10;
          if (iVar10 < 0) goto LAB_1416b9bc1;
          lVar5 = lVar17 << 4;
          bVar27 = false;
          goto LAB_1416b9b90;
        }
      }
      goto LAB_1416b9bdc;
    }
LAB_1416b9ec9:
    puVar18 = local_938;
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_5d0);
    local_5c0 = &PTR_FUN_143f47c98;
    TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(&local_968);
    if (local_830 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_820 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (puVar18 != (undefined2 *)0x0) {
      FMemory::Free(puVar18);
    }
    local_330 = 0;
    if (local_338 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_378);
    local_2e0 = 0;
    if (local_2e8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_328);
  }
  return (ulonglong)*(byte *)(param_1 + 0x79);
LAB_1416b9b90:
  do {
    if ((*(int *)(lVar5 + 8 + *plVar25) == 0) ||
       (plVar26 = *(longlong **)(lVar5 + *plVar25), plVar26 == (longlong *)0x0)) {
LAB_1416b9bb0:
      bVar27 = true;
    }
    else {
      cVar2 = (**(code **)(*plVar26 + 0x40))(plVar26,plVar14);
      if (cVar2 == '\0') goto LAB_1416b9bb0;
    }
    lVar5 = lVar5 + -0x10;
    lVar17 = lVar17 + -1;
  } while (-1 < lVar17);
  iVar9 = *(int *)((longlong)plVar25 + 0x14);
LAB_1416b9bc1:
  *(int *)((longlong)plVar25 + 0x14) = iVar9 + -1;
  plVar26 = local_980;
  if (bVar27) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar25,0);
    plVar26 = local_980;
  }
LAB_1416b9bdc:
  param_1 = local_988;
  if ((*(int *)(local_988 + 0x70) != 0) && (*(longlong **)(local_988 + 0x68) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(local_988 + 0x68) + 0x18))();
    param_1 = local_988;
    if (cVar2 != '\0') {
      (**(code **)(*plVar14 + 0x20))(plVar14,&local_658);
      uVar3 = (**(code **)(*plVar14 + 0x28))(plVar14,local_3e8);
      param_1 = local_988;
      plVar14 = (longlong *)0x0;
      if (*(int *)(local_988 + 0x70) != 0) {
        plVar14 = *(longlong **)(local_988 + 0x68);
      }
      (**(code **)(*plVar14 + 0x38))(plVar14,uVar3,&local_658);
      if (local_3e8[0] != 0) {
        FMemory::Free();
      }
      if ((longlong)local_960 < 0) {
        TArray<FString,FDefaultAllocator>::Empty(&local_968,0);
      }
      else {
        plVar14 = local_968;
        for (iVar9 = (int)local_960; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (*plVar14 != 0) {
            FMemory::Free();
          }
          plVar14 = plVar14 + 2;
        }
        local_960 = local_960 & 0xffffffff00000000;
      }
      local_760 = 0;
      local_758 = 0x10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_760,0);
      lVar17 = local_760;
      local_9b8 = (undefined2 *)CONCAT62(local_9b8._2_6_,0x3f);
      FGenericPlatformString::Convert<char,wchar_t>(local_760,0x10,"WindowsNoEditor");
      local_7d0 = 0;
      local_9b8 = (undefined2 *)CONCAT44(local_9b8._4_4_,6 - (uint)(local_650 != 0));
      TArray<wchar_t,FDefaultAllocator>::CopyToEmpty<wchar_t>(&local_7d0,local_658,local_650,0);
      FString::PathAppend(&local_7d0,L"Paks",4);
      if ((int)local_758 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = (int)local_758 + -1;
      }
      if ((local_7c8 != 0) || (iVar10 = 2, iVar9 == -1)) {
        iVar10 = 1;
      }
      TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                (&local_668,&local_7d0,iVar9 + iVar10);
      FString::PathAppend(&local_668,lVar17,iVar9);
      puVar18 = &DAT_143f3eda8;
      if (local_660 != 0) {
        puVar18 = local_668;
      }
      (**(code **)(*local_8c8 + 0x128))(local_8c8,puVar18,&local_5c0);
      if (local_668 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_7d0 != 0) {
        FMemory::Free();
      }
      if (lVar17 != 0) {
        FMemory::Free(lVar17);
      }
      plVar14 = local_968 + (longlong)(int)local_960 * 2;
      if (local_968 != plVar14) {
        plVar25 = local_968;
        do {
          if ((DAT_1468e2280 != 0) && (DAT_1468e2278 != (longlong *)0x0)) {
            cVar2 = (**(code **)(*DAT_1468e2278 + 0x18))();
            if (cVar2 != '\0') {
              plVar15 = (longlong *)0x0;
              if (DAT_1468e2280 != 0) {
                plVar15 = DAT_1468e2278;
              }
              (**(code **)(*plVar15 + 0x38))(plVar15,plVar25,0,0);
              TArray<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>,TSizedDefaultAllocator<32>_>
              ::
              AddUniqueImpl<TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>_const_&>
                        (param_1 + 0x58);
            }
          }
          plVar25 = plVar25 + 2;
        } while (plVar25 != plVar14);
        plVar25 = (longlong *)(param_1 + 0xe8);
      }
      if (local_658 != 0) {
        FMemory::Free();
      }
    }
  }
  plVar14 = local_838;
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    plVar21 = plVar21 + 1;
    lVar17 = *plVar21;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_838)(local_838);
      LOCK();
      piVar4 = (int *)((longlong)plVar14 + 0xc);
      iVar9 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_838 + 8))();
      }
    }
  }
  puVar7 = puVar7 + 2;
  if (puVar7 == plVar26) goto LAB_1416b9ec9;
  goto LAB_1416b9b10;
}



// FUNCTION 1416b9fa0 FUN_1416b9fa0 body=614 status=ok
// SIG undefined FUN_1416b9fa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416b9fa0(undefined8 param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 (*pauVar10) [16];
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *plStack_a0;
  int local_98;
  int local_94 [3];
  undefined1 local_88 [16];
  undefined1 local_78 [8];
  longlong *local_70;
  longlong **local_68;
  longlong local_60 [2];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  plVar7 = (longlong *)operator_new(0x1c0);
  plVar9 = (longlong *)0x0;
  plVar8 = plVar9;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR__scalar_deleting_destructor__144ce3e38;
    FUN_141671940(plVar7 + 1,param_1,1);
    FString::FString(plVar7 + 3,param_1);
    FUN_1416b4fa0(plVar7 + 5,param_2);
    *(int *)(plVar7 + 0x37) = param_3;
    *(undefined1 *)((longlong)plVar7 + 0x1bc) = 0;
    plVar8 = plVar7;
  }
  plVar7 = (longlong *)operator_new(0x18);
  plStack_a0 = plVar9;
  if (plVar7 != (longlong *)0x0) {
    *(undefined4 *)(plVar7 + 1) = 1;
    *plVar7 = (longlong)&PTR_DestroyObject_144ce40f8;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    plVar7[2] = (longlong)plVar8;
    plStack_a0 = plVar7;
  }
  local_a8 = plVar8;
  SharedPointerInternals::EnableSharedFromThis(&local_a8,plVar8,plVar8);
  FPaths::ConvertRelativePathToFull(local_60,param_1);
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(param_4,&local_98,local_a8 + 1);
  plVar8 = plVar9;
  if (local_98 != -1) {
    plVar8 = (longlong *)(*param_4 + (longlong)local_98 * 0x28);
  }
  plVar7 = plVar8 + 2;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = plVar9;
  }
  if (plVar7 == (longlong *)0x0) {
    local_70 = local_a8 + 1;
    local_68 = &local_a8;
    FUN_1416b45a0(param_4,local_78,&local_70,0);
  }
  else if ((*(int *)(*plVar7 + 0x1b8) == 0) && (param_3 == 2)) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_4,local_94,local_a8 + 1);
    if (local_94[0] != -1) {
      plVar9 = (longlong *)(*param_4 + (longlong)local_94[0] * 0x28);
    }
    local_88._8_8_ = plStack_a0;
    local_88._0_8_ = local_a8;
    uVar3 = (undefined4)((ulonglong)local_a8 >> 0x20);
    uVar4 = (undefined4)((ulonglong)plStack_a0 >> 0x20);
    pauVar10 = (undefined1 (*) [16])(plVar9 + 2);
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
      UNLOCK();
    }
    if (&local_88 != pauVar10) {
      local_88 = *pauVar10;
      *(int *)*pauVar10 = (int)local_a8;
      *(undefined4 *)((longlong)plVar9 + 0x14) = uVar3;
      *(int *)(plVar9 + 3) = (int)plStack_a0;
      *(undefined4 *)((longlong)plVar9 + 0x1c) = uVar4;
      local_50 = (int)local_a8;
      uStack_4c = uVar3;
      uStack_48 = (int)plStack_a0;
      uStack_44 = uVar4;
    }
    uVar6 = local_88._8_8_;
    if ((undefined8 *)local_88._8_8_ != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_88._8_8_ + 8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)local_88._8_8_)(local_88._8_8_);
        LOCK();
        piVar1 = (int *)(uVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*(longlong *)local_88._8_8_ + 8))(local_88._8_8_,1);
        }
      }
    }
  }
  if (local_60[0] != 0) {
    FMemory::Free();
  }
  plVar9 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_a0 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_a0)(plStack_a0);
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
  return;
}



// FUNCTION 1416ba210 FUN_1416ba210 body=318 status=ok
// SIG undefined FUN_1416ba210(void)

undefined1 FUN_1416ba210(longlong param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  undefined8 local_38;
  longlong local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined1 auStack_18 [16];
  
  cVar4 = FUN_1416b8090();
  if (cVar4 == '\0') {
    return 0;
  }
  local_30 = param_1 + 8;
  local_58 = 0;
  uStack_54 = 1;
  iVar1 = *(int *)(param_1 + 0x30);
  puStack_20 = (uint *)(param_1 + 0x18);
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (iVar1 != 0) {
    puVar7 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar7 = puStack_20;
    }
    uVar2 = *puVar7;
    uStack_40 = 0;
    local_58 = 0;
    while (uVar2 == 0) {
      lVar6 = (longlong)local_58;
      uStack_40 = uStack_40 + 0x20;
      iVar5 = local_58 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar5;
      if (bVar3) goto LAB_1416ba2df;
      uVar2 = puVar7[lVar6 + 1];
    }
    uStack_54 = -uVar2 & uVar2;
    iVar5 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_48._4_4_ = (uStack_40 - iVar5) + 0x1f;
    if (iVar1 < local_48._4_4_) {
LAB_1416ba2df:
      local_48._4_4_ = iVar1;
    }
  }
  auStack_18._4_4_ = local_48._4_4_;
  auStack_18._0_4_ = 0xffffffff;
  auStack_18._8_4_ = uStack_40;
  auStack_18._12_4_ = iStack_3c;
  iStack_28 = local_58;
  uStack_24 = uStack_54;
  iStack_50 = local_58;
  uStack_4c = uStack_54;
  local_38 = auStack_18._8_8_;
  uStack_40 = 0xffffffff;
  iStack_3c = local_48._4_4_;
  bVar3 = local_48._4_4_ < iVar1;
  local_48 = puStack_20;
  if (bVar3) {
    do {
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  return 1;
}



// FUNCTION 1416ba350 DestroyObject body=47 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FProjectDescriptor,SharedPointerInternals::DefaultDeleter<FProjectDescriptor>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FProjectDescriptor::~FProjectDescriptor(lVar1);
    FMemory::operator_delete(lVar1,0x128);
    return;
  }
  return;
}



// FUNCTION 1416ba380 DestroyObject body=96 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FPlugin,SharedPointerInternals::DefaultDeleter<FPlugin>_>::
     DestroyObject(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR__scalar_deleting_destructor__144ce3e38;
    FPluginDescriptor::~FPluginDescriptor(puVar1 + 5);
    if (puVar1[3] != 0) {
      FMemory::Free();
    }
    if (puVar1[1] != 0) {
      FMemory::Free();
    }
    *puVar1 = &PTR_FUN_14413fd98;
    FMemory::operator_delete(puVar1,0x1c0);
    return;
  }
  return;
}



// FUNCTION 1416ba3e0 Empty body=400 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FString,TArray<FString,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar3) goto LAB_1416ba4b1;
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
LAB_1416ba4b1:
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
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>
                (*param_1 + (longlong)iStack_1c * 0x28);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 1416ba570 FUN_1416ba570 body=133 status=ok
// SIG undefined FUN_1416ba570(void)

undefined8 * FUN_1416ba570(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int local_res8 [2];
  
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 8),local_res8);
  puVar3 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)local_res8[0] * 0x28);
  }
  puVar2 = puVar3 + 2;
  if (puVar3 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  if (puVar2 != (undefined8 *)0x0) {
    *param_2 = *puVar2;
    lVar1 = puVar2[1];
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1416ba600 FUN_1416ba600 body=123 status=ok
// SIG undefined FUN_1416ba600(void)

undefined8 * FUN_1416ba600(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e5b30) {
    _Init_thread_header(&DAT_1469e5b30);
    if (DAT_1469e5b30 == -1) {
      FPluginManager::FPluginManager(&DAT_1469e5a30);
      atexit(FUN_143e7b590);
      _Init_thread_footer(&DAT_1469e5b30);
      return &DAT_1469e5a30;
    }
  }
  return &DAT_1469e5a30;
}



// FUNCTION 1416ba680 Get body=104 status=ok
// SIG undefined Get(void)

undefined8 * IProjectManager::Get(void)

{
  undefined8 *puVar1;
  
  if (DAT_1469e5b50 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)operator_new();
    if (puVar1 != (undefined8 *)0x0) {
      DAT_1469e5b50 = puVar1;
      *puVar1 = &PTR_FUN_144ce3fe8;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *(undefined1 *)(puVar1 + 5) = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 2;
      return puVar1;
    }
    DAT_1469e5b50 = (undefined8 *)0x0;
  }
  return DAT_1469e5b50;
}



// FUNCTION 1416ba6f0 FUN_1416ba6f0 body=217 status=ok
// SIG undefined FUN_1416ba6f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1416ba6f0(void)

{
  undefined8 *puVar1;
  undefined2 *local_28;
  wchar_t *local_20;
  longlong local_18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e5b48) {
    _Init_thread_header(&DAT_1469e5b48);
    if (DAT_1469e5b48 == -1) {
      puVar1 = (undefined8 *)FPaths::GameAgnosticSavedDir(local_18);
      if (*(int *)(puVar1 + 1) == 0) {
        local_28 = &DAT_143f3eda8;
      }
      else {
        local_28 = (undefined2 *)*puVar1;
      }
      local_20 = L"AutoLoadProject.txt";
      DAT_1469e5b38 = 0;
      _DAT_1469e5b40 = 0;
      FPaths::CombineInternal(&DAT_1469e5b38,&local_28,2);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      atexit((_func_5014 *)&LAB_143e7b660);
      _Init_thread_footer(&DAT_1469e5b48);
      return &DAT_1469e5b38;
    }
  }
  return &DAT_1469e5b38;
}



// FUNCTION 1416ba7d0 FUN_1416ba7d0 body=30 status=ok
// SIG undefined FUN_1416ba7d0(void)

undefined8 FUN_1416ba7d0(longlong param_1,undefined8 param_2)

{
  FUN_141672d20(param_2,param_1 + 0x18);
  return param_2;
}



// FUNCTION 1416ba7f0 GetContentDir body=126 status=ok
// SIG undefined GetContentDir(void)

undefined8 * FPlugin::GetContentDir(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong local_18 [2];
  
  puVar2 = (undefined8 *)FUN_141672d20(local_18);
  iVar1 = *(int *)(puVar2 + 1);
  *param_2 = 0;
  *param_2 = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  iVar3 = (9 - (uint)(iVar1 != 0)) + *(int *)(param_2 + 1);
  if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,iVar3,-iVar1);
  }
  FString::PathAppend(param_2,L"Content",7);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1416ba870 FUN_1416ba870 body=694 status=ok
// SIG undefined FUN_1416ba870(void)

longlong * FUN_1416ba870(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint *puVar12;
  uint uVar13;
  int local_a8;
  uint uStack_a4;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  uint uStack_74;
  int iStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (0 < *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2);
  }
  local_a8 = 0;
  uVar4 = *(uint *)(param_1 + 0x30);
  puVar3 = (uint *)(param_1 + 0x18);
  uStack_a4 = 1;
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar4 != 0) {
    puVar12 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar12 = puVar3;
    }
    uVar13 = *puVar12;
    iStack_90 = 0;
    local_a8 = 0;
    while (uVar13 == 0) {
      lVar11 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar9 = local_a8 + 1;
      bVar7 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar9;
      if (bVar7) goto LAB_1416ba95f;
      uVar13 = puVar12[lVar11 + 1];
    }
    uStack_a4 = -uVar13 & uVar13;
    iVar9 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_94 = (iStack_90 - iVar9) + 0x1f;
    if ((int)uVar4 < (int)uStack_94) {
LAB_1416ba95f:
      uStack_94 = uVar4;
    }
  }
  uStack_74 = *(uint *)(param_1 + 0x30);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  local_40 = CONCAT44(uStack_8c,iStack_90);
  uVar13 = uStack_74 & 0xffffffe0;
  iStack_58 = local_a8;
  uStack_54 = uStack_a4;
  local_50 = puVar3;
  if (uStack_74 != uVar4) {
    puVar12 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar12 = puVar3;
    }
    uVar10 = puVar12[(int)uStack_74 >> 5] & -1 << ((byte)uStack_74 & 0x1f);
    iVar9 = (int)uStack_74 >> 5;
    while (uVar10 == 0) {
      uVar13 = uVar13 + 0x20;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_1416baa3c;
      uVar10 = puVar12[(longlong)iVar9 + 1];
      iVar9 = iVar9 + 1;
    }
    uVar10 = -uVar10 & uVar10;
    iVar9 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_74 = (uVar13 - iVar9) + 0x1f;
    if ((int)uVar4 < (int)uStack_74) {
LAB_1416baa3c:
      uStack_74 = uVar4;
    }
  }
  while ((uStack_44 != uStack_74 || (local_50 != puVar3))) {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x18 + (longlong)(int)uStack_44 * 0x28);
    uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)(int)uStack_44 * 0x28);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    iVar9 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar9);
    }
    puVar8 = (undefined8 *)((longlong)iVar9 * 0x10 + *param_2);
    *puVar8 = uVar6;
    puVar8[1] = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar5 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar9 == 1) && (plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_58);
  }
  return param_2;
}



// FUNCTION 1416bab30 FUN_1416bab30 body=688 status=ok
// SIG undefined FUN_1416bab30(void)

longlong * FUN_1416bab30(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  int local_a8;
  uint uStack_a4;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  uint uStack_74;
  int iStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  uStack_a4 = 1;
  *param_2 = 0;
  puVar2 = (uint *)(param_1 + 0x18);
  param_2[1] = 0;
  uVar3 = *(uint *)(param_1 + 0x30);
  local_a8 = 0;
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar3 != 0) {
    puVar11 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar11 = puVar2;
    }
    uVar10 = *puVar11;
    iStack_90 = 0;
    local_a8 = 0;
    while (uVar10 == 0) {
      lVar9 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar7 = local_a8 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar7;
      if (bVar5) goto LAB_1416bac0e;
      uVar10 = puVar11[lVar9 + 1];
    }
    uStack_a4 = -uVar10 & uVar10;
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
    uStack_94 = (iStack_90 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_94) {
LAB_1416bac0e:
      uStack_94 = uVar3;
    }
  }
  uStack_74 = *(uint *)(param_1 + 0x30);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  local_40 = CONCAT44(uStack_8c,iStack_90);
  uVar10 = uStack_74 & 0xffffffe0;
  iStack_58 = local_a8;
  uStack_54 = uStack_a4;
  local_50 = puVar2;
  if (uStack_74 != uVar3) {
    puVar11 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar11 = puVar2;
    }
    uVar8 = puVar11[(int)uStack_74 >> 5] & -1 << ((byte)uStack_74 & 0x1f);
    iVar7 = (int)uStack_74 >> 5;
    while (uVar8 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1416baceb;
      uVar8 = puVar11[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar7 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_74 = (uVar10 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_1416baceb:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_44 != uStack_74 || (local_50 != puVar2))) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)(int)uStack_44 * 0x28);
    if (*(char *)(lVar9 + 0x1bc) != '\0') {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x18 + (longlong)(int)uStack_44 * 0x28);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      iVar7 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar7 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar7);
      }
      plVar6 = (longlong *)((longlong)iVar7 * 0x10 + *param_2);
      *plVar6 = lVar9;
      plVar6[1] = (longlong)plVar4;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        plVar6 = plVar4 + 1;
        lVar9 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar7 == 1) && (plVar4 != (longlong *)0x0)) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_58);
  }
  return param_2;
}



// FUNCTION 1416bade0 FUN_1416bade0 body=702 status=ok
// SIG undefined FUN_1416bade0(void)

longlong * FUN_1416bade0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  int local_a8;
  uint uStack_a4;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  uint uStack_74;
  int iStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  uStack_a4 = 1;
  *param_2 = 0;
  puVar2 = (uint *)(param_1 + 0x18);
  param_2[1] = 0;
  uVar3 = *(uint *)(param_1 + 0x30);
  local_a8 = 0;
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar3 != 0) {
    puVar11 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar11 = puVar2;
    }
    uVar10 = *puVar11;
    iStack_90 = 0;
    local_a8 = 0;
    while (uVar10 == 0) {
      lVar9 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar7 = local_a8 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar7;
      if (bVar5) goto LAB_1416baebe;
      uVar10 = puVar11[lVar9 + 1];
    }
    uStack_a4 = -uVar10 & uVar10;
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
    uStack_94 = (iStack_90 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_94) {
LAB_1416baebe:
      uStack_94 = uVar3;
    }
  }
  uStack_74 = *(uint *)(param_1 + 0x30);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  local_40 = CONCAT44(uStack_8c,iStack_90);
  uVar10 = uStack_74 & 0xffffffe0;
  iStack_58 = local_a8;
  uStack_54 = uStack_a4;
  local_50 = puVar2;
  if (uStack_74 != uVar3) {
    puVar11 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar11 = puVar2;
    }
    uVar8 = puVar11[(int)uStack_74 >> 5] & -1 << ((byte)uStack_74 & 0x1f);
    iVar7 = (int)uStack_74 >> 5;
    while (uVar8 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1416baf9b;
      uVar8 = puVar11[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar7 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_74 = (uVar10 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_1416baf9b:
      uStack_74 = uVar3;
    }
  }
  while ((uStack_44 != uStack_74 || (local_50 != puVar2))) {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)(int)uStack_44 * 0x28);
    if ((*(char *)(lVar9 + 0x1bc) != '\0') && (*(char *)(lVar9 + 0x101) != '\0')) {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x18 + (longlong)(int)uStack_44 * 0x28);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      iVar7 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar7 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar7);
      }
      plVar6 = (longlong *)((longlong)iVar7 * 0x10 + *param_2);
      *plVar6 = lVar9;
      plVar6[1] = (longlong)plVar4;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        plVar6 = plVar4 + 1;
        lVar9 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar7 == 1) && (plVar4 != (longlong *)0x0)) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
      }
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_58);
  }
  return param_2;
}



// FUNCTION 1416bb0a0 FUN_1416bb0a0 body=239 status=ok
// SIG undefined FUN_1416bb0a0(void)

undefined8 * FUN_1416bb0a0(undefined8 *param_1)

{
  void *_Src;
  ulonglong uVar1;
  int iVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1469e5b34) {
    _Init_thread_header(&DAT_1469e5b34);
    if (DAT_1469e5b34 == -1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464b0248,0);
      FGenericPlatformString::Memcpy(DAT_1464b0248,L"uproject",0x12);
      atexit((_func_5014 *)&LAB_143e7b640);
      _Init_thread_footer(&DAT_1469e5b34);
    }
  }
  *param_1 = 0;
  uVar1 = DAT_1464b0250;
  _Src = DAT_1464b0248;
  iVar2 = (int)DAT_1464b0250;
  *(int *)(param_1 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return param_1;
  }
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,uVar1 & 0xffffffff,0);
  _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar2 * 2);
  return param_1;
}



// FUNCTION 1416bb1a0 FUN_1416bb1a0 body=1127 status=ok
// SIG undefined FUN_1416bb1a0(void)

/* WARNING: Removing unreachable block (ram,0x0001416bb591) */

void FUN_1416bb1a0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  void *_Src;
  char cVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  void *local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  void *local_b8;
  int local_b0;
  int local_ac;
  int local_a8;
  uint uStack_a4;
  uint *puStack_a0;
  undefined4 local_98;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined8 uStack_80;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  longlong *local_60;
  int iStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  cVar6 = FUN_1416b8090();
  if (cVar6 != '\0') {
    plVar1 = (longlong *)(param_1 + 8);
    local_a8 = 0;
    uVar2 = *(uint *)(param_1 + 0x30);
    puVar16 = (uint *)(param_1 + 0x18);
    uStack_a4 = 1;
    uStack_94 = 0;
    iStack_90 = 0;
    if (uVar2 != 0) {
      puVar15 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar15 = puVar16;
      }
      uVar14 = *puVar15;
      iStack_90 = 0;
      local_a8 = 0;
      while (uVar14 == 0) {
        lVar12 = (longlong)local_a8;
        iStack_90 = iStack_90 + 0x20;
        iVar8 = local_a8 + 1;
        bVar5 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
        local_a8 = iVar8;
        if (bVar5) goto LAB_1416bb29c;
        uVar14 = puVar15[lVar12 + 1];
      }
      uStack_a4 = -uVar14 & uVar14;
      iVar8 = 0x1f;
      if (uStack_a4 != 0) {
        for (; uStack_a4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_a4 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_94 = (iStack_90 - iVar8) + 0x1f;
      if ((int)uVar2 < (int)uStack_94) {
LAB_1416bb29c:
        uStack_94 = uVar2;
      }
    }
    local_98 = 0xffffffff;
    uStack_74 = *(uint *)(param_1 + 0x30);
    uStack_80 = CONCAT44(uStack_a4,local_a8);
    uStack_48 = 0xffffffff;
    uStack_44 = uStack_94;
    uStack_68 = CONCAT44(uStack_8c,iStack_90);
    uStack_78 = -1 << ((byte)uStack_74 & 0x1f);
    uVar14 = uStack_74 & 0xffffffe0;
    iStack_58 = local_a8;
    uStack_54 = uStack_a4;
    puStack_a0 = puVar16;
    local_88 = plVar1;
    local_50 = puVar16;
    local_40 = uStack_68;
    local_60 = plVar1;
    uStack_70 = uStack_48;
    uStack_6c = uStack_44;
    uVar10 = uStack_74;
    if (uStack_74 != uVar2) {
      puVar15 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar15 = puVar16;
      }
      uVar10 = puVar15[(int)uStack_74 >> 5] & uStack_78;
      iVar8 = (int)uStack_74 >> 5;
      while (uVar10 == 0) {
        uVar14 = uVar14 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
        goto LAB_1416bb362;
        uVar10 = puVar15[(longlong)iVar8 + 1];
        uStack_78 = 0xffffffff;
        iVar8 = iVar8 + 1;
      }
      uVar10 = -uVar10 & uVar10;
      iVar8 = 0x1f;
      if (uVar10 != 0) {
        for (; uVar10 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uVar10 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_74 = (uVar14 - iVar8) + 0x1f;
      uVar10 = uStack_74;
      if ((int)uVar2 < (int)uStack_74) {
LAB_1416bb362:
        uStack_74 = uVar2;
        uVar10 = uVar2;
      }
    }
    while (((lVar12 = (longlong)(int)uStack_44, uStack_44 != uVar10 || (local_50 != puVar16)) ||
           (local_60 != plVar1))) {
      lVar3 = *local_60;
      lVar4 = *(longlong *)(lVar3 + 0x10 + lVar12 * 0x28);
      if ((*(char *)(lVar4 + 0x1bc) != '\0') && (*(int *)(lVar4 + 0xf8) != 0)) {
        puVar7 = (undefined8 *)FUN_141672d20(&local_88,lVar4 + 0x18);
        iVar8 = *(int *)(puVar7 + 1);
        local_d8 = (void *)*puVar7;
        *puVar7 = 0;
        iVar11 = *(int *)(puVar7 + 1);
        local_d0 = puVar7[1];
        puVar7[1] = 0;
        if (*(int *)((longlong)puVar7 + 0xc) < (int)(iVar11 + 8 + (uint)(iVar8 == 0))) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_d8);
        }
        FString::PathAppend(&local_d8,L"Content",7);
        if (local_88 != (longlong *)0x0) {
          FMemory::Free();
        }
        local_b0 = (int)local_d0;
        local_b8 = local_d8;
        iVar8 = local_d0._4_4_;
        iVar11 = (int)local_d0 + (0xe - (uint)((int)local_d0 != 0));
        local_d8 = (void *)0x0;
        local_ac = local_d0._4_4_;
        local_d0 = 0;
        if (iVar8 < iVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b8);
        }
        FString::PathAppend(&local_b8,L"Localization",0xc);
        if (local_d8 != (void *)0x0) {
          FMemory::Free();
        }
        lVar12 = *(longlong *)(lVar3 + lVar12 * 0x28 + 0x10);
        puVar13 = *(undefined8 **)(lVar12 + 0xf0);
        puVar7 = puVar13 + (longlong)*(int *)(lVar12 + 0xf8) * 3;
        _Src = local_b8;
        for (; local_b8 = _Src, puVar13 != puVar7; puVar13 = puVar13 + 3) {
          switch(*(undefined4 *)(puVar13 + 2)) {
          case 1:
          case 3:
            lVar12 = (longlong)local_b0;
            iVar8 = *(int *)(puVar13 + 1) + -1;
            if (*(int *)(puVar13 + 1) == 0) {
              iVar8 = 0;
            }
            if ((local_b0 != 0) || (iVar11 = 2, iVar8 == -1)) {
              iVar11 = 1;
            }
            local_c8 = (void *)0x0;
            local_c0._4_4_ = (undefined4)((ulonglong)local_c0 >> 0x20);
            local_c0 = CONCAT44(local_c0._4_4_,local_b0);
            if ((local_b0 == 0) && (iVar8 + iVar11 == 0)) {
              local_c0 = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                        (&local_c8,local_b0 + iVar8 + iVar11,0);
              _guard_xfg_dispatch_icall_nop(local_c8,_Src,lVar12 * 2);
            }
            FString::PathAppend(&local_c8,*puVar13);
            iVar8 = (int)param_2[1];
            *(int *)(param_2 + 1) = iVar8 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar8 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar8);
            }
            puVar9 = (undefined8 *)((longlong)iVar8 * 0x10 + *param_2);
            *puVar9 = 0;
            *puVar9 = local_c8;
            local_c8 = (void *)0x0;
            *(undefined4 *)(puVar9 + 1) = (undefined4)local_c0;
            *(undefined4 *)((longlong)puVar9 + 0xc) = local_c0._4_4_;
            local_c0 = 0;
          }
          puVar16 = puStack_a0;
          _Src = local_b8;
        }
        if (_Src != (void *)0x0) {
          FMemory::Free();
        }
      }
      uStack_48 = uStack_48 & ~uStack_54;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_58);
    }
  }
  return;
}



// FUNCTION 1416bb620 GetMountedAssetPath body=337 status=ok
// SIG undefined GetMountedAssetPath(void)

longlong * FPlugin::GetMountedAssetPath(longlong param_1,longlong *param_2)

{
  void *_Dst;
  void *_Src;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = 3;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x10) + 2;
    if (iVar1 < 1) goto LAB_1416bb673;
  }
  TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,iVar1);
  iVar2 = (int)param_2[1];
LAB_1416bb673:
  iVar1 = iVar2 + -1;
  if (iVar2 < 1) {
    iVar1 = iVar4;
  }
  iVar2 = (iVar2 < 1) + 1 + iVar2;
  *(int *)(param_2 + 1) = iVar2;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
  }
  *(undefined2 *)(*param_2 + (longlong)iVar1 * 2) = 0x2f;
  *(undefined2 *)(*param_2 + 2 + (longlong)iVar1 * 2) = 0;
  _Src = *(void **)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0x10) + -1;
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar2 = iVar4;
  }
  if (iVar2 != 0) {
    iVar1 = (int)param_2[1];
    iVar3 = (uint)(iVar1 == 0) + iVar2 + iVar1;
    *(int *)(param_2 + 1) = iVar3;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    _Dst = (void *)(*param_2 + ((longlong)iVar1 - (ulonglong)(iVar1 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar2 * 2);
    *(undefined2 *)((longlong)iVar2 * 2 + (longlong)_Dst) = 0;
  }
  iVar2 = (int)param_2[1];
  iVar1 = iVar2 + -1;
  if (iVar2 < 1) {
    iVar1 = iVar4;
  }
  iVar2 = (iVar2 < 1) + 1 + iVar2;
  *(int *)(param_2 + 1) = iVar2;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
  }
  *(undefined2 *)(*param_2 + (longlong)iVar1 * 2) = 0x2f;
  *(undefined2 *)(*param_2 + 2 + (longlong)iVar1 * 2) = 0;
  return param_2;
}



// FUNCTION 1416bb780 FUN_1416bb780 body=135 status=ok
// SIG undefined FUN_1416bb780(void)

undefined8 * FUN_1416bb780(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  *param_2 = 0;
  iVar4 = *(int *)(param_1 + 0x60);
  puVar3 = *(undefined8 **)(param_1 + 0x58);
  *(int *)(param_2 + 1) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    return param_2;
  }
  TArray<FString,FDefaultAllocator>::ResizeForCopy(param_2,iVar4,0);
  puVar2 = (undefined8 *)*param_2;
  do {
    *puVar2 = *puVar3;
    lVar1 = puVar3[1];
    puVar2[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2 = puVar2 + 2;
    puVar3 = puVar3 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return param_2;
}



// FUNCTION 1416bb810 FUN_1416bb810 body=1191 status=ok
// SIG undefined FUN_1416bb810(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1416bb810(longlong param_1,undefined8 param_2,ulong param_3,__uint64 param_4)

{
  int iVar1;
  AKRESULT AVar2;
  ulonglong uVar3;
  short *psVar4;
  ErrorCode EVar5;
  undefined2 *puVar6;
  ErrorLevel EVar7;
  undefined2 *puVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 unaff_DIL;
  undefined8 *puVar12;
  longlong lVar13;
  ulong unaff_R14D;
  uint *puVar14;
  
  puVar14 = (uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x38);
  lVar10 = -1;
  EVar7 = _tls_index;
  if (((int)*puVar14 < DAT_1469e59f8) && (_Init_thread_header(&DAT_1469e59f8), DAT_1469e59f8 == -1))
  {
    psVar4 = (short *)FGenericPlatformMisc::GetUBTPlatform();
    _DAT_1469e59f0 = 0;
    DAT_1469e59e8 = (undefined2 *)0x0;
    if ((psVar4 != (short *)0x0) && (lVar13 = lVar10, *psVar4 != 0)) {
      do {
        lVar13 = lVar13 + 1;
      } while (psVar4[lVar13] != 0);
      uVar9 = (int)lVar13 + 1;
      _DAT_1469e59f0 = (ulonglong)uVar9;
      if (0 < (int)uVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1469e59e8,0);
      }
      param_3 = uVar9 * 2;
      FGenericPlatformString::Memcpy(DAT_1469e59e8);
      EVar7 = (ErrorLevel)psVar4;
    }
    atexit((_func_5014 *)&LAB_143e7b680);
    _Init_thread_footer(&DAT_1469e59f8);
  }
  if (((int)*puVar14 < DAT_1469e5a10) && (_Init_thread_header(&DAT_1469e5a10), DAT_1469e5a10 == -1))
  {
    psVar4 = (short *)FGenericPlatformMisc::GetUBTTarget();
    _DAT_1469e5a08 = 0;
    DAT_1469e5a00 = (undefined2 *)0x0;
    if ((psVar4 != (short *)0x0) && (lVar13 = lVar10, *psVar4 != 0)) {
      do {
        lVar13 = lVar13 + 1;
      } while (psVar4[lVar13] != 0);
      uVar9 = (int)lVar13 + 1;
      _DAT_1469e5a08 = (ulonglong)uVar9;
      if (0 < (int)uVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1469e5a00,0);
      }
      param_3 = uVar9 * 2;
      FGenericPlatformString::Memcpy(DAT_1469e5a00);
      EVar7 = (ErrorLevel)psVar4;
    }
    atexit((_func_5014 *)&LAB_143e7b6a0);
    _Init_thread_footer(&DAT_1469e5a10);
  }
  uVar3 = (ulonglong)*puVar14;
  if ((int)*puVar14 < DAT_1469e5a28) {
    EVar5 = 0x469e5a28;
    uVar3 = _Init_thread_header();
    if (DAT_1469e5a28 == -1) {
      AVar2 = AK::Monitor::PostCode(EVar5,EVar7,param_3,param_4,unaff_R14D,(bool)unaff_DIL);
      psVar4 = (short *)FUN_1415bb3d0(AVar2);
      DAT_1469e5a18 = (undefined2 *)0x0;
      _DAT_1469e5a20 = 0;
      if ((psVar4 != (short *)0x0) && (*psVar4 != 0)) {
        do {
          lVar10 = lVar10 + 1;
        } while (psVar4[lVar10] != 0);
        uVar9 = (int)lVar10 + 1;
        _DAT_1469e5a20 = (ulonglong)uVar9;
        if (0 < (int)uVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1469e5a18,0);
        }
        FGenericPlatformString::Memcpy(DAT_1469e5a18,psVar4,(longlong)(int)uVar9 * 2);
      }
      atexit((_func_5014 *)&LAB_143e7b6c0);
      uVar3 = _Init_thread_footer(&DAT_1469e5a28);
    }
  }
  if (*(int *)(param_1 + 0x18) < 1) {
LAB_1416bb923:
    if (0 < *(int *)(param_1 + 0x28)) {
      puVar11 = *(undefined8 **)(param_1 + 0x20);
      puVar12 = puVar11 + (longlong)*(int *)(param_1 + 0x28) * 2;
      for (; puVar11 != puVar12; puVar11 = puVar11 + 2) {
        puVar8 = &DAT_143f3eda8;
        if (DAT_1469e59f0 != 0) {
          puVar8 = DAT_1469e59e8;
        }
        if (*(int *)(puVar11 + 1) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = (undefined2 *)*puVar11;
        }
        uVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar8);
        if ((int)uVar3 == 0) goto switchD_1416bbae2_caseD_4;
      }
    }
    if (0 < *(int *)(param_1 + 0x38)) {
      puVar11 = *(undefined8 **)(param_1 + 0x30);
      puVar12 = puVar11 + (longlong)*(int *)(param_1 + 0x38) * 2;
      if (puVar11 == puVar12) goto switchD_1416bbae2_caseD_4;
      while( true ) {
        puVar8 = &DAT_143f3eda8;
        if (DAT_1469e5a08 != 0) {
          puVar8 = DAT_1469e5a00;
        }
        if (*(int *)(puVar11 + 1) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = (undefined2 *)*puVar11;
        }
        uVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar8);
        if ((int)uVar3 == 0) break;
        puVar11 = puVar11 + 2;
        if (puVar11 == puVar12) {
          return uVar3 & 0xffffffffffffff00;
        }
      }
    }
    if (0 < *(int *)(param_1 + 0x48)) {
      puVar11 = *(undefined8 **)(param_1 + 0x40);
      puVar12 = puVar11 + (longlong)*(int *)(param_1 + 0x48) * 2;
      for (; puVar11 != puVar12; puVar11 = puVar11 + 2) {
        puVar8 = &DAT_143f3eda8;
        if (DAT_1469e5a08 != 0) {
          puVar8 = DAT_1469e5a00;
        }
        if (*(int *)(puVar11 + 1) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = (undefined2 *)*puVar11;
        }
        uVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar8);
        if ((int)uVar3 == 0) goto switchD_1416bbae2_caseD_4;
      }
    }
    if (0 < *(int *)(param_1 + 0x58)) {
      puVar11 = *(undefined8 **)(param_1 + 0x50);
      puVar12 = puVar11 + (longlong)*(int *)(param_1 + 0x58) * 2;
      if (puVar11 == puVar12) goto switchD_1416bbae2_caseD_4;
      while( true ) {
        puVar8 = &DAT_143f3eda8;
        if (DAT_1469e5a20 != 0) {
          puVar8 = DAT_1469e5a18;
        }
        if (*(int *)(puVar11 + 1) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = (undefined2 *)*puVar11;
        }
        uVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar8);
        if ((int)uVar3 == 0) break;
        puVar11 = puVar11 + 2;
        if (puVar11 == puVar12) {
          return uVar3 & 0xffffffffffffff00;
        }
      }
    }
    if ((*(int *)(param_1 + 0x68) < 1) ||
       (uVar3 = TArray<FString,FDefaultAllocator>::Contains<FString>(param_1 + 0x60,&DAT_1469e5a18),
       (char)uVar3 == '\0')) {
      iVar1 = *(int *)(param_1 + 8);
      uVar3 = (ulonglong)iVar1;
      switch(iVar1) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 8:
      case 9:
        return CONCAT71((int7)(int3)((uint)iVar1 >> 8),1);
      }
    }
  }
  else {
    puVar11 = *(undefined8 **)(param_1 + 0x10);
    puVar12 = puVar11 + (longlong)*(int *)(param_1 + 0x18) * 2;
    for (; puVar11 != puVar12; puVar11 = puVar11 + 2) {
      puVar8 = &DAT_143f3eda8;
      if (DAT_1469e59f0 != 0) {
        puVar8 = DAT_1469e59e8;
      }
      if (*(int *)(puVar11 + 1) == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = (undefined2 *)*puVar11;
      }
      uVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar8);
      if ((int)uVar3 == 0) goto LAB_1416bb923;
    }
  }
switchD_1416bbae2_caseD_4:
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1416bbd40 FUN_1416bbd40 body=842 status=ok
// SIG undefined FUN_1416bbd40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1416bbd40(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  short *psVar6;
  undefined8 uVar7;
  char *pcVar8;
  longlong lVar9;
  undefined2 *puVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  char *pcVar16;
  undefined1 auStack_d8 [32];
  int local_b8 [2];
  undefined8 *local_b0;
  undefined8 *local_a8;
  char *local_a0;
  int local_98;
  undefined4 local_94;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar9 = *(longlong *)(param_1 + 8);
  pcVar16 = (char *)0x0;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  if (lVar9 != 0) {
    puVar12 = *(undefined8 **)(lVar9 + 0x48);
    puVar14 = puVar12 + (longlong)*(int *)(lVar9 + 0x50) * 0x15;
    for (; puVar12 != puVar14; puVar12 = puVar12 + 0x15) {
      local_a8 = puVar12 + 2;
      local_b0 = puVar12;
      FUN_1416b47b0(&local_88,local_b8,&local_b0,0);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1469e5b30) && (_Init_thread_header(&DAT_1469e5b30), DAT_1469e5b30 == -1))
  {
    FPluginManager::FPluginManager(&DAT_1469e5a30);
    atexit(FUN_143e7b590);
    _Init_thread_footer(&DAT_1469e5b30);
  }
  (**(code **)(DAT_1469e5a30 + 0x48))(&DAT_1469e5a30,&local_b0);
  puVar14 = local_b0 + (longlong)(int)local_a8 * 2;
  puVar12 = local_b0;
  do {
    if (puVar12 == puVar14) {
      uVar7 = 0;
LAB_1416bbfd7:
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_b0);
      local_40 = 0;
      if (local_48 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_88);
      return uVar7;
    }
    psVar6 = (short *)FGenericPlatformMisc::GetUBTPlatform();
    local_a0 = (char *)0x0;
    local_94 = 0;
    pcVar11 = pcVar16;
    if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
      lVar9 = -1;
      do {
        lVar2 = lVar9 + 1;
        lVar9 = lVar9 + 1;
      } while (psVar6[lVar2] != 0);
      local_98 = (int)lVar9 + 1;
      lVar9 = (longlong)local_98;
      if (0 < local_98) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0,0);
      }
      pcVar11 = local_a0;
      FGenericPlatformString::Memcpy(local_a0,psVar6,lVar9 * 2);
    }
    lVar9 = (**(code **)(*(longlong *)*puVar12 + 0x60))();
    if (*(int *)(lVar9 + 0xb0) == 0) {
LAB_1416bbf26:
      bVar1 = true;
    }
    else {
      puVar13 = *(undefined8 **)(lVar9 + 0xa8);
      puVar15 = puVar13 + (longlong)*(int *)(lVar9 + 0xb0) * 2;
      for (; puVar13 != puVar15; puVar13 = puVar13 + 2) {
        if (*(int *)(puVar13 + 1) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)*puVar13;
        }
        iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10);
        if (iVar5 == 0) goto LAB_1416bbf26;
      }
      bVar1 = false;
    }
    if (pcVar11 != (char *)0x0) {
      FMemory::Free(pcVar11);
    }
    if (bVar1) {
      cVar3 = (**(code **)(*(longlong *)*puVar12 + 0x40))();
      uVar7 = (**(code **)(*(longlong *)*puVar12 + 8))();
      TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
      ::FindId(&local_88,local_b8,uVar7);
      pcVar11 = pcVar16;
      if (local_b8[0] != -1) {
        pcVar11 = (char *)((longlong)local_b8[0] * 0x20 + local_88);
      }
      pcVar8 = pcVar11 + 0x10;
      if (pcVar11 == (char *)0x0) {
        pcVar8 = pcVar16;
      }
      if (pcVar8 != (char *)0x0) {
        cVar3 = *pcVar8;
      }
      if (cVar3 != '\0') {
        iVar5 = (**(code **)(*(longlong *)*puVar12 + 0x58))();
        if (((iVar5 == 0) && (cVar4 = (**(code **)(*(longlong *)*puVar12 + 0x40))(), cVar4 != '\0'))
           && (lVar9 = (**(code **)(*(longlong *)*puVar12 + 0x60))(),
              *(char *)(lVar9 + 0xdb) == '\0')) {
          cVar4 = '\x01';
        }
        else {
          cVar4 = '\0';
        }
        if (cVar3 != cVar4) {
          uVar7 = 1;
          goto LAB_1416bbfd7;
        }
      }
    }
    puVar12 = puVar12 + 2;
  } while( true );
}



// FUNCTION 1416bc090 Load body=755 status=ok
// SIG undefined Load(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FPluginDescriptor::Load(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined1 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  undefined1 auStack_138 [32];
  longlong local_118 [2];
  undefined4 *local_108;
  ulonglong *puStack_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_118[0] = 0;
  local_118[1] = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*param_2;
  }
  cVar6 = FUN_141676530(local_118,puVar11,0);
  if (cVar6 == '\0') {
    lVar8 = FText::FromString(local_80,param_2);
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a8,L"Failed to open descriptor file \'{0}\'",L"PluginDescriptor",
                       L"FailedToLoadDescriptorFile");
    puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_90,uVar9);
    local_68[0] = 4;
    FText::FText(local_58,lVar8);
    local_f8 = *puVar10;
    local_108 = local_68;
    local_f0 = puVar10[1];
    local_40 = '\x01';
    if (local_f0 != 0) {
      LOCK();
      *(int *)(local_f0 + 8) = *(int *)(local_f0 + 8) + 1;
      UNLOCK();
    }
    puStack_100 = local_38;
    uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_e8,&local_108);
    uVar9 = FText::Format(local_c0,&local_f8,uVar9);
    FText::FText(local_d8,uVar9);
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_b8 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_e8);
    if (local_40 != '\0') {
      local_40 = '\0';
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_50 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
    plVar4 = (longlong *)puVar10[1];
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
    plVar4 = *(longlong **)(lVar8 + 8);
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
    FText::operator=(param_3,local_d8);
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_d0 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_a0 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_1416c1e60(param_1,local_118,param_3);
  }
  if (local_118[0] != 0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 1416bc390 FUN_1416bc390 body=1538 status=ok
// SIG undefined FUN_1416bc390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1416bc390(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  undefined1 auStack_228 [32];
  undefined4 *local_208;
  longlong *plStack_200;
  longlong local_1f8;
  longlong *local_1f0;
  longlong local_1e8 [2];
  longlong *local_1d8;
  ulonglong *puStack_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined4 local_98 [4];
  undefined1 local_88 [8];
  longlong *local_80;
  char local_70;
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_228;
  local_1e8[0] = 0;
  local_1e8[1] = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*param_2;
  }
  cVar5 = FUN_141676530(local_1e8,puVar11,0);
  if (cVar5 == '\0') {
    lVar7 = FText::FromString(local_c8,param_2);
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_130,L"Failed to open descriptor file \'{0}\'",L"PluginManifest",
                       L"FailedToLoadDescriptorFile");
    plVar9 = (longlong *)FTextFormat::FTextFormat(local_e8,uVar8);
    local_98[0] = 4;
    FText::FText(local_88,lVar7);
    local_1d8 = (longlong *)*plVar9;
    local_208 = local_98;
    plStack_200 = (longlong *)local_68;
    puStack_1d0 = (ulonglong *)plVar9[1];
    local_70 = '\x01';
    if (puStack_1d0 != (ulonglong *)0x0) {
      LOCK();
      *(int *)(puStack_1d0 + 1) = (int)puStack_1d0[1] + 1;
      UNLOCK();
    }
    local_1b8 = local_208;
    uStack_1b0 = plStack_200;
    uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_1a8,&local_1b8);
    uVar8 = FText::Format(local_148,&local_1d8,uVar8);
    FText::FText(local_178,uVar8);
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_140 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar2 = (int *)((longlong)local_140 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_140 + 8))(local_140,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_1a8);
    if (local_70 != '\0') {
      local_70 = '\0';
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_80 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar2 = (int *)((longlong)local_80 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
    }
    plVar9 = (longlong *)plVar9[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    plVar9 = *(longlong **)(lVar7 + 8);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    FText::operator=(param_3,local_178);
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_170 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar2 = (int *)((longlong)local_170 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_170 + 8))(local_170,1);
        }
      }
    }
    if (local_128 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_128 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar2 = (int *)((longlong)local_128 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_128 + 8))(local_128,1);
        }
      }
    }
    uVar6 = 0;
  }
  else {
    local_208 = (undefined4 *)0x0;
    plStack_200 = (longlong *)0x0;
    TJsonReaderFactory<wchar_t>::Create(&local_1f8,local_1e8);
    cVar5 = FUN_1404a7f60(&local_1f8,&local_208);
    if ((cVar5 == '\0') || (local_208 == (undefined4 *)0x0)) {
      lVar7 = FText::FromString(local_b0,local_1f8 + 0x38);
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_100,L"Failed to read file. {0}",L"PluginManifest",
                         L"FailedToReadDescriptorFile");
      puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_d8,uVar8);
      local_68[0] = 4;
      FText::FText(local_58,lVar7);
      local_1c8 = *puVar10;
      local_1d8 = (longlong *)local_68;
      puStack_1d0 = local_38;
      local_1c0 = puVar10[1];
      local_40 = '\x01';
      if (local_1c0 != 0) {
        LOCK();
        *(int *)(local_1c0 + 8) = *(int *)(local_1c0 + 8) + 1;
        UNLOCK();
      }
      local_198 = local_1d8;
      uStack_190 = puStack_1d0;
      uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_188,&local_198);
      uVar8 = FText::Format(local_118,&local_1c8,uVar8);
      FText::FText(local_160,uVar8);
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_110 + 1;
        lVar4 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar2 = (int *)((longlong)local_110 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_110 + 8))(local_110,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_188);
      if (local_40 != '\0') {
        local_40 = '\0';
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_50 + 1;
          lVar4 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)local_50 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_50 + 8))(local_50,1);
            }
          }
        }
      }
      plVar9 = (longlong *)puVar10[1];
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      plVar9 = *(longlong **)(lVar7 + 8);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      FText::operator=(param_3,local_160);
      if (local_158 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_158 + 1;
        lVar7 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_158)(local_158);
          LOCK();
          piVar2 = (int *)((longlong)local_158 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_158 + 8))(local_158,1);
          }
        }
      }
      if (local_f8 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_f8 + 1;
        lVar7 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_f8)(local_f8);
          LOCK();
          piVar2 = (int *)((longlong)local_f8 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_f8 + 8))(local_f8,1);
          }
        }
      }
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_1416c21b0(param_1,local_208,param_3);
    }
    plVar9 = local_1f0;
    if (local_1f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1f0 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_1f0)(local_1f0);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_1f0 + 8))(local_1f0,1);
        }
      }
    }
    plVar9 = plStack_200;
    local_1b8 = (undefined4 *)CONCAT44(local_1b8._4_4_,(undefined4)local_1b8);
    uStack_1b0 = (longlong *)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0);
    if (plStack_200 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_200 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      local_1b8 = (undefined4 *)CONCAT44(local_1b8._4_4_,(undefined4)local_1b8);
      uStack_1b0 = (longlong *)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0);
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_200)(plStack_200);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_200 + 8))(plStack_200,1);
        }
      }
    }
  }
  if (local_1e8[0] != 0) {
    FMemory::Free();
  }
  return uVar6;
}



// FUNCTION 1416bc9a0 FUN_1416bc9a0 body=626 status=ok
// SIG undefined FUN_1416bc9a0(void)

undefined1 FUN_1416bc9a0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong local_a8;
  longlong *plStack_a0;
  longlong local_98 [2];
  undefined1 local_88 [8];
  longlong *local_80;
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  puVar10 = &DAT_143f3eda8;
  local_98[0] = 0;
  local_98[1] = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*param_2;
  }
  cVar6 = FUN_141676530(local_98,puVar9,0);
  if (cVar6 == '\0') {
    if (*(int *)(param_2 + 1) != 0) {
      puVar10 = (undefined2 *)*param_2;
    }
    FString::PrintfImpl(local_78,L"Failed to open descriptor file %s",puVar10);
    uVar8 = FText::FromString(local_48,local_78);
    FText::operator=(param_3,uVar8);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    uVar7 = 0;
  }
  else {
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    TJsonReaderFactory<wchar_t>::Create(local_88,local_98);
    cVar6 = FUN_1404a7f60(local_88,&local_a8);
    if ((cVar6 == '\0') || (local_a8 == 0)) {
      if (*(int *)(param_2 + 1) != 0) {
        puVar10 = (undefined2 *)*param_2;
      }
      FString::PrintfImpl(local_68,L"Failed to read file %s",puVar10);
      uVar8 = FText::FromString(local_30,local_68);
      FText::operator=(param_3,uVar8);
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar2 = (int *)((longlong)local_28 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_28 + 8))(local_28,1);
          }
        }
      }
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      uVar7 = 0;
    }
    else {
      uVar8 = FUN_141672d20(local_58,param_2);
      uVar7 = FProjectDescriptor::Read(param_1,local_a8,uVar8,param_3);
      if (local_58[0] != 0) {
        FMemory::Free();
      }
    }
    plVar1 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_80 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    plVar1 = plStack_a0;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_a0 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_a0)(plStack_a0);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
        }
      }
    }
  }
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 1416bcc20 FUN_1416bcc20 body=1166 status=ok
// SIG undefined FUN_1416bcc20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1416bcc20(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  bool bVar7;
  char cVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  uint *puVar13;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  int local_188;
  uint uStack_184;
  uint *puStack_180;
  undefined4 local_178;
  uint uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  int local_168;
  uint local_158;
  uint uStack_154;
  uint local_150;
  int local_148;
  int local_144;
  longlong *local_140;
  undefined8 uStack_138;
  uint *puStack_130;
  uint uStack_128;
  uint uStack_124;
  undefined8 uStack_120;
  longlong *local_118;
  int iStack_110;
  uint uStack_10c;
  uint *local_108;
  uint uStack_100;
  uint uStack_fc;
  undefined8 local_f8;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [32];
  undefined1 local_b8 [8];
  longlong *local_b0;
  longlong *local_98;
  undefined1 local_6c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  uVar9 = FUN_1416b8090();
  local_198 = DAT_1468b6160;
  if ((char)uVar9 == '\0') {
    return uVar9;
  }
  FText::FText(local_f0);
  FUN_141660a80(local_b8);
  FSlowTask::Initialize(local_b8);
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_e8 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar1 = (int *)((longlong)local_e8 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_e8 + 8))(local_e8,1);
      }
    }
  }
  uStack_184 = 1;
  plVar2 = (longlong *)(param_1 + 8);
  uVar5 = *(uint *)(param_1 + 0x30);
  puVar3 = (uint *)(param_1 + 0x18);
  local_188 = 0;
  uStack_174 = 0;
  iStack_170 = 0;
  if (uVar5 != 0) {
    puVar13 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar13 = puVar3;
    }
    uVar11 = *puVar13;
    iStack_170 = 0;
    local_188 = 0;
    while (uVar11 == 0) {
      lVar12 = (longlong)local_188;
      iStack_170 = iStack_170 + 0x20;
      iVar10 = local_188 + 1;
      bVar7 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_188;
      local_188 = iVar10;
      if (bVar7) goto LAB_1416bcdb5;
      uVar11 = puVar13[lVar12 + 1];
    }
    uStack_184 = -uVar11 & uVar11;
    local_148 = 0x1f;
    if (uStack_184 != 0) {
      for (; uStack_184 >> local_148 == 0; local_148 = local_148 + -1) {
      }
    }
    if (uStack_184 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - local_148;
    }
    uStack_174 = (iStack_170 - iVar10) + 0x1f;
    if ((int)uVar5 < (int)uStack_174) {
LAB_1416bcdb5:
      uStack_174 = uVar5;
    }
  }
  local_178 = 0xffffffff;
  uStack_154 = *(uint *)(param_1 + 0x30);
  uStack_138 = CONCAT44(uStack_184,local_188);
  uStack_100 = 0xffffffff;
  uStack_fc = uStack_174;
  uStack_120 = CONCAT44(uStack_16c,iStack_170);
  local_158 = -1 << ((byte)uStack_154 & 0x1f);
  local_168 = (int)uStack_154 >> 5;
  local_150 = uStack_154 & 0xffffffe0;
  iStack_110 = local_188;
  uStack_10c = uStack_184;
  puStack_180 = puVar3;
  local_140 = plVar2;
  puStack_130 = puVar3;
  local_108 = puVar3;
  local_f8 = uStack_120;
  local_118 = plVar2;
  uStack_128 = uStack_100;
  uStack_124 = uStack_fc;
  uVar11 = uStack_154;
  if (uStack_154 != uVar5) {
    puVar13 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar13 = puVar3;
    }
    uVar11 = puVar13[local_168] & local_158;
    while (uVar11 == 0) {
      lVar12 = (longlong)local_168;
      local_150 = local_150 + 0x20;
      iVar10 = local_168 + 1;
      bVar7 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_168;
      local_168 = iVar10;
      if (bVar7) goto LAB_1416bcea5;
      uVar11 = puVar13[lVar12 + 1];
      local_158 = 0xffffffff;
    }
    uVar11 = -uVar11 & uVar11;
    local_144 = 0x1f;
    if (uVar11 != 0) {
      for (; uVar11 >> local_144 == 0; local_144 = local_144 + -1) {
      }
    }
    if (uVar11 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - local_144;
    }
    uStack_154 = (local_150 - iVar10) + 0x1f;
    uVar11 = uStack_154;
    if ((int)uVar5 < (int)uStack_154) {
LAB_1416bcea5:
      uStack_154 = uVar5;
      uVar11 = uVar5;
    }
  }
  while( true ) {
    if (((uStack_fc == uVar11) && (local_108 == puVar3)) && (local_118 == plVar2)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) break;
    lVar12 = *local_118 + (longlong)(int)uStack_fc * 0x28;
    FString::FString(&local_140,lVar12);
    puVar13 = *(uint **)(lVar12 + 0x10);
    plVar6 = *(longlong **)(lVar12 + 0x18);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    puStack_130 = puVar13;
    FText::FText(local_d8);
    FSlowTask::EnterProgressFrame(local_b8);
    if ((char)puVar13[0x6f] != '\0') {
      cVar8 = FUN_1416c65b0(puVar13,param_2);
      if (cVar8 == '\0') {
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar6 + 1;
          lVar12 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6,1);
            }
          }
        }
        if (local_140 != (longlong *)0x0) {
          FMemory::Free();
        }
        uVar9 = 0;
LAB_1416bcfe9:
        FUN_14166a2b0(local_b8);
        local_6c = 0;
        if (local_98 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_98 + 1;
          lVar12 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_98)(local_98);
            LOCK();
            piVar1 = (int *)((longlong)local_98 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*local_98 + 8))(local_98,1);
            }
          }
        }
        if (local_b0 == (longlong *)0x0) {
          return uVar9;
        }
        LOCK();
        plVar2 = local_b0 + 1;
        lVar12 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar12 != 1) {
          return uVar9;
        }
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 != 1) {
          return uVar9;
        }
        (**(code **)(*local_b0 + 8))(local_b0,1);
        return uVar9;
      }
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar6 + 1;
      lVar12 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    if (local_140 != (longlong *)0x0) {
      FMemory::Free();
    }
    uStack_100 = uStack_100 & ~uStack_10c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_110);
  }
  uVar9 = 1;
  goto LAB_1416bcfe9;
}



// FUNCTION 1416bd0b0 FUN_1416bd0b0 body=637 status=ok
// SIG undefined FUN_1416bd0b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416bd0b0(int param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  undefined8 *local_110;
  undefined1 *local_108;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [32];
  undefined1 local_c8 [8];
  longlong *local_c0;
  longlong *local_a8;
  undefined1 local_7c;
  ulonglong local_58;
  
  uVar4 = DAT_1468b6160;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  FText::FText(local_100);
  local_128 = uVar4;
  FUN_141660a80(local_c8);
  FSlowTask::Initialize(local_c8);
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_f8 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar2 = (int *)((longlong)local_f8 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_f8 + 8))(local_f8,1);
      }
    }
  }
  iVar7 = 0;
  if (0 < (int)param_2[1]) {
    lVar8 = 0;
    do {
      FText::FText(local_e8);
      FSlowTask::EnterProgressFrame(local_c8);
      puVar6 = (undefined8 *)(*param_2 + lVar8);
      uVar4 = FUN_14168dc80();
      cVar3 = FModuleManager::IsModuleLoaded(uVar4,*puVar6);
      if (((cVar3 == '\0') && (param_1 == *(int *)((longlong)puVar6 + 0xc))) &&
         (cVar3 = FUN_1416bb810(puVar6), cVar3 != '\0')) {
        switch(*(undefined4 *)(puVar6 + 1)) {
        case 0:
        case 2:
        case 3:
        case 8:
        case 9:
switchD_1416bd1fc_caseD_0:
          uVar4 = FUN_14168dc80();
          lVar5 = FUN_141690060(uVar4,*puVar6,local_118);
          if (lVar5 == 0) {
            local_108 = local_118;
            local_110 = puVar6;
            FUN_1416b42c0(param_3,local_114,&local_110,0);
          }
          break;
        case 1:
          if (DAT_1468b616c == '\0') goto switchD_1416bd1fc_caseD_0;
        }
      }
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 0x80;
    } while (iVar7 < (int)param_2[1]);
  }
  FUN_14166a2b0(local_c8);
  local_7c = 0;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a8 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar2 = (int *)((longlong)local_a8 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_a8 + 8))(local_a8,1);
      }
    }
  }
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c0 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar2 = (int *)((longlong)local_c0 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  return;
}



// FUNCTION 1416bd360 LoadModulesForProject body=3557 status=ok
// SIG undefined LoadModulesForProject(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FProjectManager::LoadModulesForProject(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 auStack_548 [32];
  int *local_528;
  int *piStack_520;
  int local_518;
  uint uStack_514;
  uint *puStack_510;
  undefined4 local_508;
  undefined8 uStack_504;
  undefined4 uStack_4fc;
  undefined4 *local_4f8;
  int *piStack_4f0;
  int *local_4e8;
  undefined4 *puStack_4e0;
  undefined4 *local_4d8;
  ulonglong *puStack_4d0;
  undefined1 local_4c8 [8];
  longlong *local_4c0;
  undefined1 local_4b0 [8];
  longlong *local_4a8;
  longlong *local_498;
  undefined8 uStack_490;
  uint *local_488;
  undefined8 uStack_480;
  undefined4 local_478;
  undefined4 uStack_474;
  int local_470;
  undefined8 local_468;
  longlong local_460;
  longlong *local_458;
  undefined8 uStack_450;
  uint *puStack_448;
  undefined4 uStack_440;
  int iStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined1 local_418 [16];
  undefined8 local_408;
  undefined8 uStack_400;
  undefined1 local_3f8 [16];
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined1 local_3d8 [16];
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined1 local_3b8 [16];
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined1 local_398 [16];
  undefined1 local_388 [24];
  undefined1 local_370 [8];
  longlong *local_368;
  undefined1 local_358 [8];
  longlong *local_350;
  undefined1 local_340 [8];
  longlong *local_338;
  undefined1 local_328 [8];
  longlong *local_320;
  undefined1 local_310 [8];
  longlong *local_308;
  undefined1 local_2f8 [8];
  longlong *local_2f0;
  undefined1 local_2e0 [8];
  longlong *local_2d8;
  undefined1 local_2c8 [8];
  longlong *local_2c0;
  undefined1 local_2b0 [8];
  longlong *local_2a8;
  undefined1 local_298 [8];
  longlong *local_290;
  undefined1 local_280 [8];
  longlong *local_278;
  undefined1 local_268 [8];
  longlong *local_260;
  undefined1 local_250 [24];
  undefined1 local_238 [8];
  longlong *local_230;
  undefined1 local_220 [16];
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [24];
  undefined1 local_1b8 [24];
  undefined1 local_1a0 [24];
  undefined1 local_188 [32];
  longlong local_168;
  undefined8 local_160;
  uint local_158 [4];
  uint *local_148;
  undefined8 local_140;
  undefined4 local_138;
  int local_134;
  longlong local_128;
  undefined4 local_120;
  undefined4 local_118 [4];
  undefined1 local_108 [8];
  longlong *local_100;
  char local_f0;
  int local_e8 [4];
  undefined1 local_d8 [8];
  longlong *local_d0;
  char local_c0;
  int local_b8 [4];
  undefined1 local_a8 [8];
  longlong *local_a0;
  char local_90;
  int local_88 [4];
  undefined1 local_78 [8];
  longlong *local_70;
  char local_60;
  undefined4 local_58 [4];
  undefined1 local_48 [8];
  longlong *local_40;
  char local_30;
  ulonglong local_28 [2];
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_548;
  uVar8 = 1;
  if (*(longlong *)(param_1 + 8) != 0) {
    local_138 = 0xffffffff;
    local_168 = 0;
    local_160 = 0;
    local_148 = (uint *)0x0;
    local_140 = 0;
    local_134 = 0;
    local_128 = 0;
    local_120 = 0;
    FUN_1416bd0b0(param_2,*(longlong *)(param_1 + 8) + 0x38,&local_168);
    if (0 < (int)local_160 - local_134) {
      FText::FText(local_4c8);
      puStack_510 = local_158;
      uVar11 = 0;
      local_518 = 0;
      uStack_514 = 1;
      uStack_504 = 0;
      if ((int)local_140 != 0) {
        puVar12 = local_158;
        if (local_148 != (uint *)0x0) {
          puVar12 = local_148;
        }
        uVar4 = *puVar12;
        iVar3 = 0;
        while (uVar4 == 0) {
          uVar11 = uVar11 + 0x20;
          local_518 = iVar3 + 1;
          uStack_504 = (ulonglong)uVar11 << 0x20;
          if ((int)(((int)local_140 + -1 >> 0x1f & 0x1fU) + (int)local_140 + -1) >> 5 <= iVar3) {
            uStack_504 = CONCAT44(uVar11,(int)local_140);
            goto LAB_1416bd4e1;
          }
          uVar4 = puVar12[(longlong)iVar3 + 1];
          iVar3 = local_518;
        }
        uStack_514 = -uVar4 & uVar4;
        local_470 = 0x1f;
        if (uStack_514 != 0) {
          for (; uStack_514 >> local_470 == 0; local_470 = local_470 + -1) {
          }
        }
        if (uStack_514 == 0) {
          iVar6 = 0x20;
        }
        else {
          iVar6 = 0x1f - local_470;
        }
        iVar6 = (uVar11 - iVar6) + 0x1f;
        if ((int)local_140 < iVar6) {
          iVar6 = (int)local_140;
        }
        uStack_504._4_4_ = (undefined4)((ulonglong)uStack_504 >> 0x20);
        uStack_504 = CONCAT44(uStack_504._4_4_,iVar6);
        local_518 = iVar3;
      }
LAB_1416bd4e1:
      local_508 = 0xffffffff;
      local_498 = &local_168;
      uStack_490 = CONCAT44(uStack_514,local_518);
      uStack_440 = 0xffffffff;
      iStack_43c = (int)uStack_504;
      uStack_438 = uStack_504._4_4_;
      uStack_434 = uStack_4fc;
      uStack_480 = CONCAT44((int)uStack_504,0xffffffff);
      local_478 = uStack_504._4_4_;
      uStack_474 = uStack_4fc;
      iVar3 = (int)uStack_504;
      local_488 = puStack_510;
      local_458 = local_498;
      uStack_450 = uStack_490;
      puStack_448 = puStack_510;
      if ((int)uStack_504 < (int)local_140) {
        do {
          iVar6 = *(int *)(*local_498 + 8 + (longlong)iVar3 * 0x18);
          if (iVar6 != 0) {
            FText::FromName(local_4b0,*local_498 + (longlong)iVar3 * 0x18);
            if (iVar6 == 1) {
              lVar7 = FText::FText(local_188,local_4b0);
              uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                (local_2f8,
                                 L"The game module \'{0}\' could not be found. Please ensure that this module exists and that it is compiled."
                                 ,L"ProjectManager",L"PrimaryGameModuleNotFound");
              plVar9 = (longlong *)FTextFormat::FTextFormat(local_1f0,uVar8);
              local_118[0] = 4;
              FText::FText(local_108,lVar7);
              local_4f8 = local_118;
              local_f0 = '\x01';
              piStack_4f0 = local_e8;
              local_528 = (int *)*plVar9;
              piStack_520 = (int *)plVar9[1];
              if (piStack_520 != (int *)0x0) {
                LOCK();
                piStack_520[2] = piStack_520[2] + 1;
                UNLOCK();
              }
              local_428 = local_4f8;
              uStack_420 = piStack_4f0;
              uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                      TArray<FFormatArgumentValue,FDefaultAllocator>(local_418,&local_428);
              uVar8 = FText::Format(local_310,&local_528,uVar8);
              FText::FText(local_340,uVar8);
              if (local_308 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_308 + 1;
                lVar5 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar5 == 1) {
                  (**(code **)*local_308)(local_308);
                  LOCK();
                  piVar2 = (int *)((longlong)local_308 + 0xc);
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*local_308 + 8))(local_308,1);
                  }
                }
              }
              TArray<FFormatArgumentValue,FDefaultAllocator>::
              ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_418);
              if ((local_f0 != '\0') && (local_f0 = '\0', local_100 != (longlong *)0x0)) {
                LOCK();
                plVar1 = local_100 + 1;
                lVar5 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar5 == 1) {
                  (**(code **)*local_100)(local_100);
                  LOCK();
                  piVar2 = (int *)((longlong)local_100 + 0xc);
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*local_100 + 8))(local_100,1);
                  }
                }
              }
              plVar9 = (longlong *)plVar9[1];
              if (plVar9 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar9 + 1;
                lVar5 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar5 == 1) {
                  (**(code **)*plVar9)(plVar9);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar9 + 0xc);
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar9 + 8))(plVar9,1);
                  }
                }
              }
              plVar9 = *(longlong **)(lVar7 + 8);
              if (plVar9 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar9 + 1;
                lVar7 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*plVar9)(plVar9);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar9 + 0xc);
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar9 + 8))(plVar9,1);
                  }
                }
              }
              FText::operator=(local_4c8,local_340);
              if (local_338 != (longlong *)0x0) {
                LOCK();
                plVar9 = local_338 + 1;
                lVar7 = *plVar9;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*local_338)(local_338);
                  LOCK();
                  piVar2 = (int *)((longlong)local_338 + 0xc);
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*local_338 + 8))(local_338,1);
                  }
                }
              }
              plVar9 = local_2f0;
LAB_1416bde2e:
              local_3a8 = (undefined4 *)CONCAT44(local_3a8._4_4_,(undefined4)local_3a8);
              uStack_3a0 = (ulonglong *)CONCAT44(uStack_3a0._4_4_,(undefined4)uStack_3a0);
              if (plVar9 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar9 + 1;
                lVar7 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                local_3a8 = (undefined4 *)CONCAT44(local_3a8._4_4_,(undefined4)local_3a8);
                uStack_3a0 = (ulonglong *)CONCAT44(uStack_3a0._4_4_,(undefined4)uStack_3a0);
                if ((int)lVar7 == 1) {
                  (**(code **)*plVar9)(plVar9);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar9 + 0xc);
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar9 + 8))(plVar9,1);
                  }
                }
              }
            }
            else {
              if (iVar6 == 2) {
                lVar7 = FText::FText(local_1d0,local_4b0);
                uVar8 = FInternationalization::
                        ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                  (local_238,
                                   L"The game module \'{0}\' does not appear to be up to date. This may happen after updating the engine. Please recompile this module and try again."
                                   ,L"ProjectManager",L"PrimaryGameModuleIncompatible");
                plVar9 = (longlong *)FTextFormat::FTextFormat(local_200,uVar8);
                local_e8[0] = 4;
                FText::FText(local_d8,lVar7);
                local_528 = local_e8;
                local_c0 = '\x01';
                piStack_520 = local_b8;
                local_4f8 = (undefined4 *)*plVar9;
                piStack_4f0 = (int *)plVar9[1];
                if (piStack_4f0 != (int *)0x0) {
                  LOCK();
                  piStack_4f0[2] = piStack_4f0[2] + 1;
                  UNLOCK();
                }
                local_408 = local_528;
                uStack_400 = piStack_520;
                uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                        TArray<FFormatArgumentValue,FDefaultAllocator>(local_3f8,&local_408);
                uVar8 = FText::Format(local_2e0,&local_4f8,uVar8);
                FText::FText(local_328,uVar8);
                if (local_2d8 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_2d8 + 1;
                  lVar5 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar5 == 1) {
                    (**(code **)*local_2d8)(local_2d8);
                    LOCK();
                    piVar2 = (int *)((longlong)local_2d8 + 0xc);
                    iVar3 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar3 == 1) {
                      (**(code **)(*local_2d8 + 8))(local_2d8,1);
                    }
                  }
                }
                TArray<FFormatArgumentValue,FDefaultAllocator>::
                ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_3f8);
                if ((local_c0 != '\0') && (local_c0 = '\0', local_d0 != (longlong *)0x0)) {
                  LOCK();
                  plVar1 = local_d0 + 1;
                  lVar5 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar5 == 1) {
                    (**(code **)*local_d0)(local_d0);
                    LOCK();
                    piVar2 = (int *)((longlong)local_d0 + 0xc);
                    iVar3 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar3 == 1) {
                      (**(code **)(*local_d0 + 8))(local_d0,1);
                    }
                  }
                }
                plVar9 = (longlong *)plVar9[1];
                if (plVar9 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plVar9 + 1;
                  lVar5 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar5 == 1) {
                    (**(code **)*plVar9)(plVar9);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar9 + 0xc);
                    iVar3 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar3 == 1) {
                      (**(code **)(*plVar9 + 8))(plVar9,1);
                    }
                  }
                }
                plVar9 = *(longlong **)(lVar7 + 8);
                if (plVar9 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plVar9 + 1;
                  lVar7 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar7 == 1) {
                    (**(code **)*plVar9)(plVar9);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar9 + 0xc);
                    iVar3 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar3 == 1) {
                      (**(code **)(*plVar9 + 8))(plVar9,1);
                    }
                  }
                }
                FText::operator=(local_4c8,local_328);
                if (local_320 != (longlong *)0x0) {
                  LOCK();
                  plVar9 = local_320 + 1;
                  lVar7 = *plVar9;
                  *(int *)plVar9 = (int)*plVar9 + -1;
                  UNLOCK();
                  if ((int)lVar7 == 1) {
                    (**(code **)*local_320)(local_320);
                    LOCK();
                    piVar2 = (int *)((longlong)local_320 + 0xc);
                    iVar3 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar3 == 1) {
                      (**(code **)(*local_320 + 8))(local_320,1);
                    }
                  }
                }
                plVar9 = local_230;
                goto LAB_1416bde2e;
              }
              if (iVar6 == 4) {
                lVar7 = FText::FText(local_1b8,local_4b0);
                uVar8 = FInternationalization::
                        ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                  (local_2b0,
                                   L"The game module \'{0}\' could not be successfully initialized after it was loaded."
                                   ,L"ProjectManager",L"PrimaryGameModuleFailedToInitialize");
                plVar9 = (longlong *)FTextFormat::FTextFormat(local_1e0,uVar8);
                local_b8[0] = iVar6;
                FText::FText(local_a8,lVar7);
                local_528 = local_b8;
                local_90 = '\x01';
                piStack_520 = local_88;
                local_4e8 = (int *)*plVar9;
                puStack_4e0 = (undefined4 *)plVar9[1];
                if (puStack_4e0 != (undefined4 *)0x0) {
                  LOCK();
                  puStack_4e0[2] = puStack_4e0[2] + 1;
                  UNLOCK();
                }
                local_3e8 = local_528;
                uStack_3e0 = piStack_520;
                uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                        TArray<FFormatArgumentValue,FDefaultAllocator>(local_3d8,&local_3e8);
                uVar8 = FText::Format(local_2c8,&local_4e8,uVar8);
                FText::FText(local_370,uVar8);
                if (local_2c0 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_2c0 + 1;
                  lVar5 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar5 == 1) {
                    (**(code **)*local_2c0)(local_2c0);
                    LOCK();
                    piVar2 = (int *)((longlong)local_2c0 + 0xc);
                    iVar3 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar3 == 1) {
                      (**(code **)(*local_2c0 + 8))(local_2c0,1);
                    }
                  }
                }
                TArray<FFormatArgumentValue,FDefaultAllocator>::
                ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_3d8);
                if ((local_90 != '\0') && (local_90 = '\0', local_a0 != (longlong *)0x0)) {
                  LOCK();
                  plVar1 = local_a0 + 1;
                  lVar5 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar5 == 1) {
                    (**(code **)*local_a0)(local_a0);
                    LOCK();
                    piVar2 = (int *)((longlong)local_a0 + 0xc);
                    iVar3 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar3 == 1) {
                      (**(code **)(*local_a0 + 8))(local_a0,1);
                    }
                  }
                }
                plVar9 = (longlong *)plVar9[1];
                if (plVar9 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plVar9 + 1;
                  lVar5 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar5 == 1) {
                    (**(code **)*plVar9)(plVar9);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar9 + 0xc);
                    iVar3 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar3 == 1) {
                      (**(code **)(*plVar9 + 8))(plVar9,1);
                    }
                  }
                }
                plVar9 = *(longlong **)(lVar7 + 8);
                if (plVar9 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plVar9 + 1;
                  lVar7 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar7 == 1) {
                    (**(code **)*plVar9)(plVar9);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar9 + 0xc);
                    iVar3 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar3 == 1) {
                      (**(code **)(*plVar9 + 8))(plVar9,1);
                    }
                  }
                }
                FText::operator=(local_4c8,local_370);
                if (local_368 != (longlong *)0x0) {
                  LOCK();
                  plVar9 = local_368 + 1;
                  lVar7 = *plVar9;
                  *(int *)plVar9 = (int)*plVar9 + -1;
                  UNLOCK();
                  if ((int)lVar7 == 1) {
                    (**(code **)*local_368)(local_368);
                    LOCK();
                    piVar2 = (int *)((longlong)local_368 + 0xc);
                    iVar3 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar3 == 1) {
                      (**(code **)(*local_368 + 8))(local_368,1);
                    }
                  }
                }
                plVar9 = local_2a8;
                goto LAB_1416bde2e;
              }
              if (iVar6 == 3) {
                lVar7 = FText::FText(local_1a0,local_4b0);
                uVar8 = FInternationalization::
                        ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                  (local_280,
                                   L"The game module \'{0}\' could not be loaded. There may be an operating system error or the module may not be properly set up."
                                   ,L"ProjectManager",L"PrimaryGameModuleCouldntBeLoaded");
                plVar9 = (longlong *)FTextFormat::FTextFormat(local_210,uVar8);
                local_88[0] = 4;
                FText::FText(local_78,lVar7);
                local_4e8 = local_88;
                local_60 = '\x01';
                puStack_4e0 = local_58;
                local_4d8 = (undefined4 *)*plVar9;
                puStack_4d0 = (ulonglong *)plVar9[1];
                if (puStack_4d0 != (ulonglong *)0x0) {
                  LOCK();
                  *(int *)(puStack_4d0 + 1) = (int)puStack_4d0[1] + 1;
                  UNLOCK();
                }
                local_3c8 = local_4e8;
                uStack_3c0 = puStack_4e0;
                uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                        TArray<FFormatArgumentValue,FDefaultAllocator>(local_3b8,&local_3c8);
                uVar8 = FText::Format(local_298,&local_4d8,uVar8);
                FText::FText(local_358,uVar8);
                if (local_290 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_290 + 1;
                  lVar5 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar5 == 1) {
                    (**(code **)*local_290)(local_290);
                    LOCK();
                    piVar2 = (int *)((longlong)local_290 + 0xc);
                    iVar3 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar3 == 1) {
                      (**(code **)(*local_290 + 8))(local_290,1);
                    }
                  }
                }
                TArray<FFormatArgumentValue,FDefaultAllocator>::
                ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_3b8);
                if ((local_60 != '\0') && (local_60 = '\0', local_70 != (longlong *)0x0)) {
                  LOCK();
                  plVar1 = local_70 + 1;
                  lVar5 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar5 == 1) {
                    (**(code **)*local_70)(local_70);
                    LOCK();
                    piVar2 = (int *)((longlong)local_70 + 0xc);
                    iVar3 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar3 == 1) {
                      (**(code **)(*local_70 + 8))(local_70,1);
                    }
                  }
                }
                plVar9 = (longlong *)plVar9[1];
                if (plVar9 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plVar9 + 1;
                  lVar5 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar5 == 1) {
                    (**(code **)*plVar9)(plVar9);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar9 + 0xc);
                    iVar3 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar3 == 1) {
                      (**(code **)(*plVar9 + 8))(plVar9,1);
                    }
                  }
                }
                plVar9 = *(longlong **)(lVar7 + 8);
                if (plVar9 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plVar9 + 1;
                  lVar7 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar7 == 1) {
                    (**(code **)*plVar9)(plVar9);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar9 + 0xc);
                    iVar3 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar3 == 1) {
                      (**(code **)(*plVar9 + 8))(plVar9,1);
                    }
                  }
                }
                FText::operator=(local_4c8,local_358);
                if (local_350 != (longlong *)0x0) {
                  LOCK();
                  plVar9 = local_350 + 1;
                  lVar7 = *plVar9;
                  *(int *)plVar9 = (int)*plVar9 + -1;
                  UNLOCK();
                  if ((int)lVar7 == 1) {
                    (**(code **)*local_350)(local_350);
                    LOCK();
                    piVar2 = (int *)((longlong)local_350 + 0xc);
                    iVar3 = *piVar2;
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (iVar3 == 1) {
                      (**(code **)(*local_350 + 8))(local_350,1);
                    }
                  }
                }
                plVar9 = local_278;
                goto LAB_1416bde2e;
              }
              lVar7 = FText::FText(&local_458,local_4b0);
              uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                (local_250,
                                 L"The game module \'{0}\' failed to load for an unspecified reason.  Please report this error."
                                 ,L"ProjectManager",L"PrimaryGameModuleGenericLoadFailure");
              puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_220,uVar8);
              local_58[0] = 4;
              FText::FText(local_48,lVar7);
              local_4d8 = local_58;
              local_30 = '\x01';
              puStack_4d0 = local_28;
              local_468 = *puVar10;
              local_460 = puVar10[1];
              if (local_460 != 0) {
                LOCK();
                *(int *)(local_460 + 8) = *(int *)(local_460 + 8) + 1;
                UNLOCK();
              }
              local_3a8 = local_4d8;
              uStack_3a0 = puStack_4d0;
              uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                      TArray<FFormatArgumentValue,FDefaultAllocator>(local_398,&local_3a8);
              uVar8 = FText::Format(local_268,&local_468,uVar8);
              FText::FText(local_388,uVar8);
              if (local_260 != (longlong *)0x0) {
                LOCK();
                plVar9 = local_260 + 1;
                lVar5 = *plVar9;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)lVar5 == 1) {
                  (**(code **)*local_260)(local_260);
                  LOCK();
                  piVar2 = (int *)((longlong)local_260 + 0xc);
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*local_260 + 8))(local_260,1);
                  }
                }
              }
              TArray<FFormatArgumentValue,FDefaultAllocator>::
              ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_398);
              if ((local_30 != '\0') && (local_30 = '\0', local_40 != (longlong *)0x0)) {
                LOCK();
                plVar9 = local_40 + 1;
                lVar5 = *plVar9;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)lVar5 == 1) {
                  (**(code **)*local_40)(local_40);
                  LOCK();
                  piVar2 = (int *)((longlong)local_40 + 0xc);
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*local_40 + 8))(local_40,1);
                  }
                }
              }
              plVar9 = (longlong *)puVar10[1];
              if (plVar9 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar9 + 1;
                lVar5 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar5 == 1) {
                  (**(code **)*plVar9)(plVar9);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar9 + 0xc);
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar9 + 8))(plVar9,1);
                  }
                }
              }
              plVar9 = *(longlong **)(lVar7 + 8);
              if (plVar9 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar9 + 1;
                lVar7 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar7 == 1) {
                  (**(code **)*plVar9)(plVar9);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar9 + 0xc);
                  iVar3 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar9 + 8))(plVar9,1);
                  }
                }
              }
              FText::operator=(local_4c8,local_388);
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_388);
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_250);
            }
            if (local_4a8 != (longlong *)0x0) {
              LOCK();
              plVar9 = local_4a8 + 1;
              lVar7 = *plVar9;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*local_4a8)(local_4a8);
                LOCK();
                piVar2 = (int *)((longlong)local_4a8 + 0xc);
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*local_4a8 + 8))(local_4a8,1);
                }
              }
            }
            break;
          }
          uStack_480 = CONCAT44(uStack_480._4_4_,(uint)uStack_480 & ~uStack_490._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_490);
          iVar3 = uStack_480._4_4_;
        } while (uStack_480._4_4_ < (int)local_488[6]);
      }
      FUN_1416786b0(0,local_4c8,0);
      uVar8 = 0;
      if (local_4c0 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_4c0 + 1;
        lVar7 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_4c0)(local_4c0);
          LOCK();
          piVar2 = (int *)((longlong)local_4c0 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_4c0 + 8))(local_4c0,1);
          }
        }
      }
    }
    local_120 = 0;
    if (local_128 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_168);
  }
  return uVar8;
}



// FUNCTION 1416be150 FUN_1416be150 body=801 status=ok
// SIG undefined FUN_1416be150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1416be150(longlong param_1,undefined8 param_2)

{
  undefined1 (*pauVar1) [16];
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  longlong local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong *plStack_80;
  undefined2 *local_78;
  wchar_t *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  longlong local_50 [2];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  FText::FText(local_68);
  lVar7 = operator_new(0x128);
  plVar10 = (longlong *)0x0;
  plVar8 = plVar10;
  if (lVar7 != 0) {
    plVar8 = (longlong *)FProjectDescriptor::FProjectDescriptor(lVar7);
  }
  plVar9 = (longlong *)operator_new(0x18);
  if (plVar9 != (longlong *)0x0) {
    *(undefined4 *)(plVar9 + 1) = 1;
    *plVar9 = (longlong)&PTR_DestroyObject_144ce40e8;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    plVar9[2] = (longlong)plVar8;
    plVar10 = plVar9;
  }
  local_88 = plVar8;
  plStack_80 = plVar10;
  SharedPointerInternals::EnableSharedFromThis(&local_88,plVar8,plVar8);
  cVar5 = FUN_1416bc9a0(local_88,param_2,local_68);
  if (cVar5 == '\0') {
    FUN_1416786b0(0,local_68,0);
    uVar13 = 0;
  }
  else {
    puVar11 = (undefined8 *)FUN_141672d20(local_50,param_2);
    if (*(int *)(puVar11 + 1) == 0) {
      local_78 = &DAT_143f3eda8;
    }
    else {
      local_78 = (undefined2 *)*puVar11;
    }
    local_98 = 0;
    local_70 = L"Shaders";
    local_90 = 0;
    FPaths::CombineInternal(&local_98,&local_78,2);
    if (local_50[0] != 0) {
      FMemory::Free();
    }
    cVar5 = FPaths::DirectoryExists(&local_98);
    if (cVar5 != '\0') {
      local_b8 = 0;
      local_b0 = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
      FGenericPlatformString::Memcpy(local_b8,L"/Project",0x12);
      AK::MemoryMgr::StartProfileThreadUsage((long)&local_b8);
      if (local_b8 != 0) {
        FMemory::Free();
      }
    }
    local_a8._8_8_ = plStack_80;
    local_a8._0_8_ = local_88;
    uVar3 = (undefined4)((ulonglong)local_88 >> 0x20);
    uVar4 = (undefined4)((ulonglong)plStack_80 >> 0x20);
    pauVar1 = (undefined1 (*) [16])(param_1 + 8);
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
      UNLOCK();
    }
    if (&local_a8 != pauVar1) {
      local_a8 = *pauVar1;
      *(int *)*pauVar1 = (int)local_88;
      *(undefined4 *)(param_1 + 0xc) = uVar3;
      *(int *)(param_1 + 0x10) = (int)plStack_80;
      *(undefined4 *)(param_1 + 0x14) = uVar4;
      local_40 = (int)local_88;
      uStack_3c = uVar3;
      uStack_38 = (int)plStack_80;
      uStack_34 = uVar4;
    }
    uVar13 = local_a8._8_8_;
    if ((undefined8 *)local_a8._8_8_ != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_a8._8_8_ + 8);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (*(code *)**(undefined8 **)local_a8._8_8_)(local_a8._8_8_);
        LOCK();
        piVar2 = (int *)(uVar13 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*(longlong *)local_a8._8_8_ + 8))(local_a8._8_8_,1);
        }
      }
    }
    iVar6 = *(int *)(param_1 + 0x24);
    plVar10 = *(longlong **)(param_1 + 0x18);
    iVar12 = *(int *)(param_1 + 0x20);
    if (iVar6 < 0) {
      if (iVar12 != 0) {
        do {
          if (plVar10[2] != 0) {
            FMemory::Free();
          }
          if (*plVar10 != 0) {
            FMemory::Free();
          }
          plVar10 = plVar10 + 5;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        iVar6 = *(int *)(param_1 + 0x24);
      }
      *(undefined4 *)(param_1 + 0x20) = 0;
      if (iVar6 != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                  (param_1 + 0x18,0);
      }
    }
    else {
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (plVar10[2] != 0) {
          FMemory::Free();
        }
        if (*plVar10 != 0) {
          FMemory::Free();
        }
        plVar10 = plVar10 + 5;
      }
      *(undefined4 *)(param_1 + 0x20) = 0;
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
    uVar13 = 1;
  }
  plVar10 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_80 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_60 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return uVar13;
}



// FUNCTION 1416be480 FUN_1416be480 body=1342 status=ok
// SIG undefined FUN_1416be480(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416be480(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  wchar_t *pwVar15;
  undefined1 auStack_118 [32];
  undefined2 *local_f8;
  undefined8 local_f0;
  longlong local_e8 [2];
  int local_d8 [4];
  longlong *local_c8;
  undefined8 uStack_c0;
  wchar_t *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  longlong *local_98;
  undefined2 local_90;
  longlong *local_88;
  undefined2 *puStack_80;
  wchar_t *pwStack_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  wchar_t *pwStack_50;
  undefined4 local_48;
  int iStack_44;
  uint uStack_40;
  int iStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  plVar14 = (longlong *)0x0;
  local_c8 = (longlong *)(param_1 + 8);
  local_58 = (undefined2 *)0x100000000;
  iVar7 = *(int *)(param_1 + 0x30);
  local_b8 = (wchar_t *)(param_1 + 0x18);
  iStack_44 = 0;
  uStack_40 = 0;
  if (iVar7 != 0) {
    pwVar15 = *(wchar_t **)(param_1 + 0x28);
    if (*(wchar_t **)(param_1 + 0x28) == (wchar_t *)0x0) {
      pwVar15 = local_b8;
    }
    uVar5 = *(uint *)pwVar15;
    plVar10 = plVar14;
    plVar11 = plVar14;
    while (uVar5 == 0) {
      iVar6 = (int)plVar11;
      uStack_40 = (int)plVar10 + 0x20;
      plVar10 = (longlong *)(ulonglong)uStack_40;
      plVar11 = (longlong *)(ulonglong)(iVar6 + 1U);
      uVar3 = (ulonglong)local_58 >> 0x20;
      local_58 = (undefined2 *)CONCAT44((int)uVar3,iVar6 + 1U);
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1416be54d;
      uVar5 = *(uint *)(pwVar15 + ((longlong)iVar6 + 1) * 2);
    }
    uVar5 = -uVar5 & uVar5;
    iVar6 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    local_58 = (undefined2 *)CONCAT44(uVar5,SUB84(local_58,0));
    if (uVar5 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_44 = (uStack_40 - iVar6) + 0x1f;
    if (iVar7 < iStack_44) {
LAB_1416be54d:
      iStack_44 = iVar7;
    }
  }
  local_48 = 0xffffffff;
  uStack_b0 = CONCAT44(iStack_44,0xffffffff);
  auStack_70._8_4_ = uStack_40;
  auStack_70._0_8_ = uStack_b0;
  auStack_70._12_4_ = iStack_3c;
  puStack_80 = local_58;
  local_90 = 0;
  local_60._0_4_ = SUB84(local_c8,0);
  local_60._4_4_ = (undefined4)((ulonglong)local_c8 >> 0x20);
  uStack_c0 = local_58;
  local_a8._8_4_ = (undefined4)local_60;
  local_a8._0_8_ = auStack_70._8_8_;
  local_a8._12_4_ = local_60._4_4_;
  if (*(int *)(param_1 + 0x30) <= iStack_44) {
    return;
  }
  iVar7 = iStack_44;
  local_98 = local_c8;
  local_88 = local_c8;
  pwStack_78 = local_b8;
  local_60 = local_c8;
  pwStack_50 = local_b8;
  while( true ) {
    lVar2 = *(longlong *)(*local_c8 + 0x10 + (longlong)iVar7 * 0x28);
    lVar1 = *local_c8 + (longlong)iVar7 * 0x28;
    if (*(int *)(param_2 + 1) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = (undefined2 *)*param_2;
    }
    if (*(int *)(lVar2 + 0x10) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = *(undefined2 **)(lVar2 + 8);
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar13);
    if (iVar7 == 0) break;
    uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_c0._4_4_);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
    iVar7 = uStack_b0._4_4_;
    if ((int)*(uint *)(local_b8 + 0xc) <= uStack_b0._4_4_) goto LAB_1416be97e;
  }
  *(undefined1 *)(*(longlong *)(lVar1 + 0x10) + 0x1bc) = 1;
  if ((((*(char *)(*(longlong *)(lVar1 + 0x10) + 0x101) != '\0') && (*(int *)(param_1 + 0x70) != 0))
      && (*(longlong **)(param_1 + 0x68) != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x18))(), cVar4 != '\0')) {
    puVar8 = (undefined8 *)FUN_141672d20(local_e8,*(longlong *)(lVar1 + 0x10) + 0x18);
    iVar7 = *(int *)(puVar8 + 1);
    local_f8 = (undefined2 *)*puVar8;
    *puVar8 = 0;
    iVar6 = *(int *)(puVar8 + 1);
    local_f0 = puVar8[1];
    puVar8[1] = 0;
    if (*(int *)((longlong)puVar8 + 0xc) < (int)((9 - (uint)(iVar7 != 0)) + iVar6)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_f8);
    }
    FString::PathAppend(&local_f8,L"Content",7);
    if (local_e8[0] != 0) {
      FMemory::Free();
    }
    uVar9 = FPlugin::GetMountedAssetPath(*(undefined8 *)(lVar1 + 0x10),local_e8);
    plVar10 = plVar14;
    if (*(int *)(param_1 + 0x70) != 0) {
      plVar10 = *(longlong **)(param_1 + 0x68);
    }
    (**(code **)(*plVar10 + 0x38))(plVar10,uVar9,&local_f8);
    if (local_e8[0] != 0) {
      FMemory::Free();
    }
    plVar10 = (longlong *)FConfigCacheIni::Find(DAT_1468b6148,&DAT_1468e2360,0);
    if (plVar10 != (longlong *)0x0) {
      local_e8[0] = 0;
      local_e8[1] = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
      lVar2 = local_e8[0];
      FGenericPlatformString::Memcpy(local_e8[0],L"Core.System",0x18);
      TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
      ::FindId(plVar10,local_d8,local_e8);
      plVar11 = plVar14;
      if (local_d8[0] != -1) {
        plVar11 = (longlong *)((longlong)local_d8[0] * 0xb8 + *plVar10);
      }
      plVar10 = plVar11 + 2;
      if (plVar11 == (longlong *)0x0) {
        plVar10 = plVar14;
      }
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
      if (plVar10 != (longlong *)0x0) {
        plVar11 = (longlong *)FPlugin::GetContentDir(*(undefined8 *)(lVar1 + 0x10),local_e8);
        local_58 = (undefined2 *)*plVar11;
        *plVar11 = 0;
        pwStack_50 = (wchar_t *)plVar11[1];
        plVar11[1] = 0;
        local_48 = 0;
        iStack_44 = 0;
        uStack_40 = 0;
        iStack_3c = 0;
        cVar4 = FConfigValue::ExpandValue(&local_58,&local_48);
        if ((cVar4 == '\0') && (uStack_40 = 0, iStack_3c != 0)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48,0);
        }
        if (*plVar11 != 0) {
          FMemory::Free();
        }
        FName::FName(local_d8,"Paths",1);
        TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
        ::EmplaceUnique<FName_const_&,FConfigValue>(plVar10,local_d8,&local_58);
        if (CONCAT44(iStack_44,local_48) != 0) {
          FMemory::Free();
        }
        if (local_58 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
    }
    if (local_f8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (0 < *(int *)(*(longlong *)(lVar1 + 0x10) + 0xe8)) {
    uVar9 = FGenericPlatformMisc::GetUBTPlatform();
    puVar8 = (undefined8 *)FUN_141672d20(local_e8,*(longlong *)(lVar1 + 0x10) + 0x18);
    if (*(int *)(puVar8 + 1) == 0) {
      local_58 = &DAT_143f3eda8;
    }
    else {
      local_58 = (undefined2 *)*puVar8;
    }
    pwStack_50 = L"Binaries";
    local_48 = (undefined4)uVar9;
    iStack_44 = (int)((ulonglong)uVar9 >> 0x20);
    local_f8 = (undefined2 *)0x0;
    local_f0 = 0;
    FPaths::CombineInternal(&local_f8,&local_58,3);
    if (local_e8[0] != 0) {
      FMemory::Free();
    }
    uVar5 = *(uint *)(*(longlong *)(lVar1 + 0x10) + 0x1b8);
    puVar13 = &DAT_143f3eda8;
    if ((int)local_f0 != 0) {
      puVar13 = local_f8;
    }
    uVar9 = FUN_14168dc80();
    FUN_14168a410(uVar9,puVar13,1 < uVar5);
    do {
      if ((int)plVar14 != 7) {
        FUN_1416c65b0(*(undefined8 *)(lVar1 + 0x10),plVar14);
      }
      uVar5 = (int)plVar14 + 1;
      plVar14 = (longlong *)(ulonglong)uVar5;
    } while ((int)uVar5 < 8);
    if (local_f8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  plVar14 = *(longlong **)(param_1 + 0xd0);
  plVar10 = plVar14 + (longlong)*(int *)(param_1 + 0xd8) * 2;
  do {
    if (plVar14 == plVar10) {
LAB_1416be97e:
      if ((char)local_90 == '\0') {
        return;
      }
      if (local_90._1_1_ == '\0') {
        return;
      }
      TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_98,(int)local_98[1] - *(int *)((longlong)local_98 + 0x34),1);
      return;
    }
    if (((int)plVar14[1] != 0) && (*plVar14 != 0)) {
      TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast
                (param_1 + 0xd0,*(undefined8 *)(lVar1 + 0x10));
      goto LAB_1416be97e;
    }
    plVar14 = plVar14 + 2;
  } while( true );
}



// FUNCTION 1416be9c0 FUN_1416be9c0 body=972 status=ok
// SIG undefined FUN_1416be9c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1416be9c0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  void *_Src;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint *puVar12;
  undefined1 auStack_288 [32];
  int local_268;
  uint uStack_264;
  uint *puStack_260;
  uint local_258;
  uint uStack_254;
  int iStack_250;
  undefined4 uStack_24c;
  longlong *local_248;
  int iStack_240;
  uint uStack_23c;
  uint *local_238;
  uint uStack_230;
  uint uStack_22c;
  undefined8 local_228;
  longlong *local_220;
  undefined8 uStack_218;
  uint *puStack_210;
  uint uStack_208;
  uint uStack_204;
  undefined8 uStack_200;
  void *local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined1 local_1d8;
  uint local_1d4;
  undefined1 local_1d0 [408];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  uStack_264 = 1;
  plVar1 = (longlong *)(param_1 + 8);
  *param_2 = 0;
  puVar2 = (uint *)(param_1 + 0x18);
  param_2[1] = 0;
  uVar3 = *(uint *)(param_1 + 0x30);
  local_268 = 0;
  uStack_254 = 0;
  iStack_250 = 0;
  if (uVar3 != 0) {
    puVar12 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar4 = *puVar12;
    iStack_250 = 0;
    local_268 = 0;
    while (uVar4 == 0) {
      lVar6 = (longlong)local_268;
      iStack_250 = iStack_250 + 0x20;
      iVar8 = local_268 + 1;
      bVar5 = (int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= local_268;
      local_268 = iVar8;
      if (bVar5) goto LAB_1416beac2;
      uVar4 = puVar12[lVar6 + 1];
    }
    uStack_264 = -uVar4 & uVar4;
    iVar8 = 0x1f;
    if (uStack_264 != 0) {
      for (; uStack_264 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_264 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_254 = (iStack_250 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_254) {
LAB_1416beac2:
      uStack_254 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x30);
  uStack_230 = 0xffffffff;
  uStack_22c = uStack_254;
  local_228 = CONCAT44(uStack_24c,iStack_250);
  uStack_218 = CONCAT44(uStack_264,local_268);
  local_258 = -1 << ((byte)uVar4 & 0x1f);
  uVar9 = uVar4 & 0xffffffe0;
  iStack_240 = local_268;
  uStack_23c = uStack_264;
  puStack_260 = puVar2;
  uStack_254 = uVar4;
  local_238 = puVar2;
  local_220 = plVar1;
  puStack_210 = puVar2;
  uStack_200 = local_228;
  local_248 = plVar1;
  uStack_208 = uStack_230;
  uStack_204 = uStack_22c;
  if (uVar4 != uVar3) {
    puVar12 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar10 = puVar12[(int)uVar4 >> 5] & local_258;
    iVar8 = (int)uVar4 >> 5;
    while (uVar10 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 <= iVar8) goto LAB_1416beb94;
      uVar10 = puVar12[(longlong)iVar8 + 1];
      local_258 = 0xffffffff;
      iVar8 = iVar8 + 1;
    }
    uVar10 = -uVar10 & uVar10;
    iVar8 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_254 = (uVar9 - iVar8) + 0x1f;
    uVar4 = uStack_254;
    if ((int)uVar3 < (int)uStack_254) {
LAB_1416beb94:
      uStack_254 = uVar3;
      uVar4 = uVar3;
    }
  }
  while (((uStack_22c != uVar4 || (local_238 != puVar2)) || (local_248 != plVar1))) {
    local_1f8 = (void *)0x0;
    local_1f0 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    lVar6 = *local_248 + (longlong)(int)uStack_22c * 0x28;
    FUN_1416b5310(local_1d0);
    lVar11 = *(longlong *)(lVar6 + 0x10);
    if (&local_1f8 != (void **)(lVar11 + 8)) {
      iVar8 = *(int *)(lVar11 + 0x10);
      _Src = *(void **)(lVar11 + 8);
      local_1f0 = CONCAT44(local_1f0._4_4_,iVar8);
      if ((iVar8 == 0) && (local_1f0._4_4_ == 0)) {
        local_1f0 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1f8,iVar8);
        _guard_xfg_dispatch_icall_nop(local_1f8,_Src,(longlong)iVar8 * 2);
        lVar11 = *(longlong *)(lVar6 + 0x10);
      }
    }
    plVar7 = (longlong *)FUN_141672d20(&local_268,lVar11 + 0x18);
    if (&local_1e8 != plVar7) {
      if (local_1e8 != 0) {
        FMemory::Free();
      }
      local_1e8 = *plVar7;
      *plVar7 = 0;
      local_1e0 = plVar7[1];
      plVar7[1] = 0;
    }
    if (CONCAT44(uStack_264,local_268) != 0) {
      FMemory::Free();
    }
    local_1d8 = *(undefined1 *)(*(longlong *)(lVar6 + 0x10) + 0x1bc);
    FUN_1416b6e90(local_1d0,*(longlong *)(lVar6 + 0x10) + 0x28);
    iVar8 = (int)param_2[1];
    uVar3 = *(uint *)(*(longlong *)(lVar6 + 0x10) + 0x1b8);
    *(int *)(param_2 + 1) = iVar8 + 1;
    local_1d4 = (uint)(1 < uVar3);
    if (*(int *)((longlong)param_2 + 0xc) < iVar8 + 1) {
      TArray<FPluginStatus,FDefaultAllocator>::ResizeGrow(param_2,iVar8);
    }
    lVar6 = (longlong)iVar8 * 0x1b8 + *param_2;
    FString::FString(lVar6,&local_1f8);
    FString::FString(lVar6 + 0x10,&local_1e8);
    *(undefined1 *)(lVar6 + 0x20) = local_1d8;
    *(uint *)(lVar6 + 0x24) = local_1d4;
    FUN_1416b4fa0(lVar6 + 0x28,local_1d0);
    FPluginDescriptor::~FPluginDescriptor(local_1d0);
    if (local_1e8 != 0) {
      FMemory::Free();
    }
    if (local_1f8 != (void *)0x0) {
      FMemory::Free();
    }
    uStack_230 = uStack_230 & ~uStack_23c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_240);
  }
  return param_2;
}



// FUNCTION 1416bed90 QueryStatusForCurrentProject body=87 status=ok
// SIG undefined QueryStatusForCurrentProject(void)

undefined1 FProjectManager::QueryStatusForCurrentProject(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_18 [2];
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_141672e70(local_18);
  QueryStatusForProjectImpl(lVar1,uVar2,param_2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 1416bedf0 QueryStatusForProject body=335 status=ok
// SIG undefined QueryStatusForProject(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FProjectManager::QueryStatusForProject
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined1 auStack_198 [32];
  undefined1 local_178 [8];
  longlong *local_170;
  undefined4 local_158 [2];
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  FText::FText(local_178);
  local_158[0] = 3;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_40 = 0;
  local_38 = 0;
  local_f0 = 0;
  local_48 = 0;
  local_b8 = 0xffffffff;
  local_68 = 0xffffffff;
  cVar5 = FUN_1416bc9a0(local_158,param_2,local_178);
  if (cVar5 != '\0') {
    QueryStatusForProjectImpl(local_158,param_2,param_3);
  }
  FProjectDescriptor::~FProjectDescriptor(local_158);
  if (local_170 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_170 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_170)(local_170);
      LOCK();
      piVar2 = (int *)((longlong)local_170 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_170 + 8))(local_170,1);
      }
    }
  }
  return cVar5 != '\0';
}



// FUNCTION 1416bef40 QueryStatusForProjectImpl body=316 status=ok
// SIG undefined QueryStatusForProjectImpl(void)

void FProjectManager::QueryStatusForProjectImpl(int *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  void *_Src;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  longlong local_18 [2];
  
  plVar3 = (longlong *)FUN_141671940(local_18,param_2,1);
  if (param_3 != plVar3) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar3;
    *plVar3 = 0;
    *(int *)(param_3 + 1) = (int)plVar3[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar3 + 0xc);
    plVar3[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  FString::operator=(param_3 + 2,param_1 + 10);
  FString::operator=(param_3 + 4,param_1 + 6);
  *(bool *)((longlong)param_3 + 0x31) = 0 < param_1[0x10];
  puVar4 = (undefined8 *)FUN_141671d50(local_18,param_2);
  if (*(int *)(puVar4 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*puVar4;
  }
  iVar2 = FUN_140438070(puVar5);
  iVar1 = param_1[0x1a];
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  *(bool *)(param_3 + 6) = iVar1 == iVar2;
  *(bool *)((longlong)param_3 + 0x32) = *param_1 < 3;
  plVar3 = param_3 + 7;
  if (plVar3 != (longlong *)(param_1 + 0x16)) {
    iVar1 = param_1[0x18];
    _Src = *(void **)(param_1 + 0x16);
    *(int *)(param_3 + 8) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_3 + 0x44) == 0)) {
      *(undefined4 *)((longlong)param_3 + 0x44) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar3,iVar1);
      ::_guard_xfg_dispatch_icall_nop((void *)*plVar3,_Src,(longlong)iVar1 << 3);
    }
  }
  return;
}



// FUNCTION 1416bf080 FUN_1416bf080 body=927 status=ok
// SIG undefined FUN_1416bf080(void)

void FUN_1416bf080(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  uint uVar15;
  uint *puVar16;
  int local_res20 [2];
  int local_c8;
  uint uStack_c4;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a0;
  undefined4 uStack_9c;
  uint uStack_8c;
  undefined8 *local_78;
  longlong *local_70;
  int local_68;
  int local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  uint uStack_54;
  uint *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  longlong local_38;
  
  FUN_1416b39b0(param_2,&local_78);
  if ((local_78 != (undefined8 *)0x0) && (*(int *)(local_78 + 1) == 6)) {
    plVar6 = (longlong *)(**(code **)*local_78)();
    uStack_c4 = 1;
    local_c8 = 0;
    plVar6 = (longlong *)*plVar6;
    uVar4 = *(uint *)(plVar6 + 5);
    puVar1 = (uint *)(plVar6 + 2);
    uStack_b4 = 0;
    iStack_b0 = 0;
    if (uVar4 != 0) {
      puVar16 = (uint *)plVar6[4];
      if ((uint *)plVar6[4] == (uint *)0x0) {
        puVar16 = puVar1;
      }
      uVar15 = *puVar16;
      iStack_b0 = 0;
      local_c8 = 0;
      while (uVar15 == 0) {
        lVar12 = (longlong)local_c8;
        iStack_b0 = iStack_b0 + 0x20;
        iVar9 = local_c8 + 1;
        bVar5 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_c8;
        local_c8 = iVar9;
        if (bVar5) goto LAB_1416bf19f;
        uVar15 = puVar16[lVar12 + 1];
      }
      uStack_c4 = -uVar15 & uVar15;
      local_68 = 0x1f;
      if (uStack_c4 != 0) {
        for (; uStack_c4 >> local_68 == 0; local_68 = local_68 + -1) {
        }
      }
      if (uStack_c4 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - local_68;
      }
      uStack_b4 = (iStack_b0 - iVar9) + 0x1f;
      if ((int)uVar4 < (int)uStack_b4) {
LAB_1416bf19f:
        uStack_b4 = uVar4;
      }
    }
    uStack_8c = *(uint *)(plVar6 + 5);
    uStack_48 = CONCAT44(uStack_b4,0xffffffff);
    local_40 = CONCAT44(uStack_ac,iStack_b0);
    local_a0 = SUB84(plVar6,0);
    uStack_9c = (undefined4)((ulonglong)plVar6 >> 0x20);
    uVar15 = uStack_8c & 0xffffffe0;
    local_60 = local_a0;
    uStack_5c = uStack_9c;
    iStack_58 = local_c8;
    uStack_54 = uStack_c4;
    local_50 = puVar1;
    if (uStack_8c != uVar4) {
      puVar16 = (uint *)plVar6[4];
      if ((uint *)plVar6[4] == (uint *)0x0) {
        puVar16 = puVar1;
      }
      uVar11 = puVar16[(int)uStack_8c >> 5] & -1 << ((byte)uStack_8c & 0x1f);
      iVar9 = (int)uStack_8c >> 5;
      while (uVar11 == 0) {
        uVar15 = uVar15 + 0x20;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
        goto LAB_1416bf27c;
        uVar11 = puVar16[(longlong)iVar9 + 1];
        iVar9 = iVar9 + 1;
      }
      uVar11 = -uVar11 & uVar11;
      local_64 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> local_64 == 0; local_64 = local_64 + -1) {
        }
      }
      if (uVar11 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - local_64;
      }
      uStack_8c = (uVar15 - iVar9) + 0x1f;
      if ((int)uVar4 < (int)uStack_8c) {
LAB_1416bf27c:
        uStack_8c = uVar4;
      }
    }
    while( true ) {
      if (((uStack_48._4_4_ == uStack_8c) && (local_50 == puVar1)) &&
         ((longlong *)CONCAT44(uStack_5c,local_60) == plVar6)) break;
      lVar12 = *(longlong *)CONCAT44(uStack_5c,local_60) + (longlong)(int)uStack_48._4_4_ * 0x28;
      TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
      ::FindId(param_1,local_res20,lVar12);
      if ((local_res20[0] == -1) || (lVar3 = *param_1 + (longlong)local_res20[0] * 0x28, lVar3 == 0)
         ) {
        plVar14 = (longlong *)
                  TMapBase<FString,TArray<FString,FDefaultAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,FDefaultAllocator>,0>_>
                  ::Emplace<FString_const_&>(param_1,lVar12);
      }
      else {
        plVar14 = (longlong *)(lVar3 + 0x10);
      }
      if ((*(longlong *)(lVar12 + 0x10) != 0) && (*(int *)(*(longlong *)(lVar12 + 0x10) + 8) == 5))
      {
        plVar7 = (longlong *)FJsonValue::AsArray();
        plVar13 = (longlong *)*plVar7;
        plVar7 = plVar13 + (longlong)(int)plVar7[1] * 2;
        for (; plVar13 != plVar7; plVar13 = plVar13 + 2) {
          if (*(int *)(*plVar13 + 8) == 2) {
            puVar8 = (undefined8 *)FJsonValue::AsString();
            lVar12 = plVar14[1];
            iVar9 = (int)lVar12 + 1;
            *(int *)(plVar14 + 1) = iVar9;
            if (*(int *)((longlong)plVar14 + 0xc) < iVar9) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14);
            }
            puVar10 = (undefined8 *)((longlong)(int)lVar12 * 0x10 + *plVar14);
            *puVar10 = 0;
            *puVar10 = *puVar8;
            *puVar8 = 0;
            *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar8 + 1);
            *(undefined4 *)((longlong)puVar10 + 0xc) = *(undefined4 *)((longlong)puVar8 + 0xc);
            puVar8[1] = 0;
            if (local_38 != 0) {
              FMemory::Free();
            }
          }
        }
      }
      uStack_48 = CONCAT44(uStack_48._4_4_,(uint)uStack_48 & ~uStack_54);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_58);
    }
  }
  plVar6 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_70 + 1;
    lVar12 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar9 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  return;
}



// FUNCTION 1416bf420 FUN_1416bf420 body=1548 status=ok
// SIG undefined FUN_1416bf420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1416bf420(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  uint uVar11;
  char *pcVar12;
  wchar_t *pwVar14;
  undefined2 *puVar15;
  longlong lVar16;
  undefined1 auStack_218 [32];
  longlong local_1f8 [5];
  longlong *local_1d0;
  longlong local_1c8;
  longlong *local_1c0;
  undefined4 *local_1b8;
  ulonglong *puStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  longlong local_190 [2];
  longlong local_180 [2];
  undefined1 local_170 [16];
  longlong local_160 [2];
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [16];
  undefined1 local_e0 [24];
  undefined1 local_c8 [32];
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  char *pcVar13;
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_218;
  pwVar14 = (wchar_t *)0x0;
  local_1f8[0] = 0;
  local_1f8[1] = 5;
  local_1a8 = param_3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1f8,0);
  lVar8 = local_1f8[0];
  FGenericPlatformString::Memcpy(local_1f8[0],L"Name",10);
  FUN_1416b39b0(param_2,&local_1c8,local_1f8);
  if (lVar8 != 0) {
    FMemory::Free(lVar8);
  }
  if ((local_1c8 == 0) || (*(int *)(local_1c8 + 8) != 2)) {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_108,
                       L"Found a \'Localization Target\' entry with a missing \'Name\' field",
                       L"LocalizationDescriptor",L"TargetWithoutAName");
    FText::operator=(param_3,uVar7);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_100 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
    uVar7 = 0;
    goto LAB_1416bf9c1;
  }
  plVar5 = (longlong *)FJsonValue::AsString(local_1c8,local_190);
  if (param_1 != plVar5) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *plVar5;
    *plVar5 = 0;
    *(int *)(param_1 + 1) = (int)plVar5[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)plVar5 + 0xc);
    plVar5[1] = 0;
  }
  if (local_190[0] != 0) {
    FMemory::Free();
  }
  local_1f8[2] = 0;
  local_1f8[3] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1f8 + 2,0);
  lVar8 = local_1f8[2];
  FGenericPlatformString::Memcpy(local_1f8[2],L"LoadingPolicy",0x1c);
  FUN_1416b39b0(param_2,local_1f8 + 4,local_1f8 + 2);
  if (lVar8 != 0) {
    FMemory::Free(lVar8);
  }
  if ((local_1f8[4] == 0) || (*(int *)(local_1f8[4] + 8) != 2)) {
LAB_1416bf8ff:
    uVar7 = 1;
  }
  else {
    puVar6 = (undefined8 *)FJsonValue::AsString(local_1f8[4],local_180);
    pwVar10 = pwVar14;
    if (*(int *)(puVar6 + 1) == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = (undefined2 *)*puVar6;
    }
    do {
      uVar11 = (uint)pwVar10;
      pwVar10 = pwVar14;
      switch(uVar11) {
      case 0:
        pwVar10 = L"Never";
        break;
      case 1:
        pwVar10 = L"Always";
        break;
      case 2:
        pwVar10 = L"Editor";
        break;
      case 3:
        pwVar10 = L"Game";
        break;
      case 4:
        pwVar10 = L"PropertyNames";
        break;
      case 5:
        pwVar10 = L"ToolTips";
      }
      iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar15,pwVar10);
      if (iVar4 == 0) break;
      uVar11 = uVar11 + 1;
      pwVar10 = (wchar_t *)(ulonglong)uVar11;
    } while ((int)uVar11 < 6);
    *(uint *)(param_1 + 2) = uVar11;
    if (local_180[0] != 0) {
      FMemory::Free();
      uVar11 = *(uint *)(param_1 + 2);
    }
    if (uVar11 != 6) goto LAB_1416bf8ff;
    uVar7 = FJsonValue::AsString(local_1f8[4],local_160);
    lVar8 = FText::FromString(local_e0,uVar7);
    lVar9 = FText::FromString(local_c8,param_1);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_120,
                       L"Localization Target entry \'{0}\' specified an unrecognized target LoadingPolicy \'{1}\'"
                       ,L"LocalizationDescriptor",L"TargetWithInvalidLoadingPolicy");
    puVar6 = (undefined8 *)FTextFormat::FTextFormat(local_f0,uVar7);
    local_a8[0] = 4;
    FText::FText(local_98,lVar9);
    local_80 = 1;
    local_78 = 4;
    FText::FText(local_68,lVar8);
    local_1b8 = local_a8;
    local_50 = 1;
    puStack_1b0 = local_48;
    local_1a0 = *puVar6;
    local_198 = puVar6[1];
    if (local_198 != 0) {
      LOCK();
      *(int *)(local_198 + 8) = *(int *)(local_198 + 8) + 1;
      UNLOCK();
    }
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_170,&local_1b8);
    uVar7 = FText::Format(local_138,&local_1a0,uVar7);
    FText::FText(local_150,uVar7);
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_130 + 1;
      lVar16 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar1 = (int *)((longlong)local_130 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_130 + 8))(local_130,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_170);
    lVar16 = 2;
    pcVar13 = &stack0xffffffffffffffe0;
    do {
      pcVar12 = pcVar13 + -0x30;
      lVar16 = lVar16 + -1;
      if (*pcVar12 != '\0') {
        *pcVar12 = '\0';
        plVar5 = *(longlong **)(pcVar13 + -0x40);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar5 + 1;
          lVar3 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
      }
      pcVar13 = pcVar12;
    } while (lVar16 != 0);
    plVar5 = (longlong *)puVar6[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar16 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    plVar5 = *(longlong **)(lVar9 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    plVar5 = *(longlong **)(lVar8 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    FText::operator=(local_1a8,local_150);
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_148 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar1 = (int *)((longlong)local_148 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_148 + 8))(local_148,1);
        }
      }
    }
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_118 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar1 = (int *)((longlong)local_118 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_118 + 8))(local_118,1);
        }
      }
    }
    if (local_160[0] != 0) {
      FMemory::Free();
    }
    uVar7 = 0;
  }
  plVar5 = local_1d0;
  if (local_1d0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1d0 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1d0)(local_1d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1d0 + 8))(local_1d0,1);
      }
    }
  }
LAB_1416bf9c1:
  plVar5 = local_1c0;
  if (local_1c0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_1c0 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1c0)(local_1c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_1c0 + 8))(local_1c0,1);
      }
    }
  }
  return uVar7;
}



// FUNCTION 1416bfa50 FUN_1416bfa50 body=5534 status=ok
// SIG undefined FUN_1416bfa50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1416bfa50(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  wchar_t *pwVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined2 *puVar18;
  wchar_t *pwVar19;
  undefined2 *puVar20;
  char *pcVar21;
  ulonglong uVar22;
  undefined1 auStack_5a8 [32];
  longlong local_588 [2];
  undefined4 *local_578;
  longlong *plStack_570;
  undefined8 local_568;
  longlong local_560 [19];
  longlong *local_4c8;
  ulonglong *puStack_4c0;
  undefined4 *local_4b8;
  undefined1 *puStack_4b0;
  longlong local_4a8;
  longlong *local_4a0;
  longlong local_498;
  longlong *local_490;
  longlong local_488;
  longlong *local_480;
  longlong local_478;
  longlong *local_470;
  longlong local_468;
  longlong *local_460;
  longlong local_458;
  longlong *local_450;
  longlong local_448;
  longlong *local_440;
  longlong local_438;
  longlong *local_430;
  longlong local_428;
  longlong *local_420;
  undefined8 local_418;
  longlong local_410;
  undefined1 local_408 [8];
  longlong local_400 [2];
  longlong local_3f0 [3];
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined1 local_3c8 [16];
  longlong local_3b8 [2];
  longlong local_3a8 [2];
  undefined8 local_398;
  undefined8 uStack_390;
  undefined1 local_388 [16];
  longlong local_378 [2];
  longlong local_368 [2];
  longlong local_358 [2];
  longlong local_348 [2];
  longlong local_338 [2];
  longlong local_328 [2];
  longlong local_318 [2];
  longlong local_308 [2];
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [8];
  longlong *local_2d0;
  undefined1 local_2c0 [8];
  longlong *local_2b8;
  undefined1 local_2a8 [8];
  longlong *local_2a0;
  undefined1 local_290 [8];
  longlong *local_288;
  undefined1 local_278 [8];
  longlong *local_270;
  undefined1 local_260 [8];
  longlong *local_258;
  undefined1 local_248 [8];
  longlong *local_240;
  undefined1 local_230 [8];
  longlong *local_228;
  undefined1 local_218 [8];
  longlong *local_210;
  undefined1 local_200 [8];
  longlong *local_1f8;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [24];
  undefined1 local_1a0 [24];
  undefined1 local_188 [24];
  undefined1 local_170 [24];
  undefined1 local_158 [24];
  undefined4 local_140 [4];
  undefined1 local_130 [8];
  longlong *local_128;
  char local_118;
  undefined1 local_110 [8];
  undefined4 local_108 [4];
  undefined1 local_f8 [24];
  undefined1 local_e0;
  undefined4 local_d8;
  undefined1 local_c8 [24];
  undefined1 local_b0;
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  char local_80 [8];
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_5a8;
  pwVar19 = (wchar_t *)0x0;
  local_560[0] = 0;
  local_560[1] = 5;
  local_588[0] = param_2;
  local_568 = param_3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_560,0);
  lVar10 = local_560[0];
  FGenericPlatformString::Memcpy(local_560[0],L"Name",10);
  FUN_1416b39b0(param_2,&local_428,local_560);
  if (lVar10 != 0) {
    FMemory::Free(lVar10);
  }
  if ((local_428 == 0) || (*(int *)(local_428 + 8) != 2)) {
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_200,L"Found a \'Module\' entry with a missing \'Name\' field",
                       L"ModuleDescriptor",L"ModuleWithoutAName");
    FText::operator=(param_3,uVar9);
    if (local_1f8 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_1f8 + 1;
      lVar10 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_1f8)(local_1f8);
        LOCK();
        piVar1 = (int *)((longlong)local_1f8 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_1f8 + 8))(local_1f8,1);
        }
      }
    }
    uVar9 = 0;
    goto LAB_1416c0f6e;
  }
  puVar8 = (undefined8 *)FJsonValue::AsString(local_428,local_400);
  puVar20 = &DAT_143f3eda8;
  if (*(int *)(puVar8 + 1) == 0) {
    puVar18 = &DAT_143f3eda8;
  }
  else {
    puVar18 = (undefined2 *)*puVar8;
  }
  puVar8 = (undefined8 *)FName::FName(local_408,puVar18,1);
  *param_1 = *puVar8;
  if (local_400[0] != 0) {
    FMemory::Free();
  }
  local_560[2] = 0;
  local_560[3] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_560 + 2,0);
  lVar10 = local_560[2];
  FGenericPlatformString::Memcpy(local_560[2],L"Type",10);
  FUN_1416b39b0(param_2,&local_438,local_560 + 2);
  if (lVar10 != 0) {
    FMemory::Free(lVar10);
  }
  if ((local_438 == 0) || (*(int *)(local_438 + 8) != 2)) {
    lVar10 = FText::FromName(local_158,param_1);
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_218,L"Found Module entry \'{0}\' with a missing \'Type\' field",
                       L"ModuleDescriptor",L"ModuleWithoutAType");
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_1c8,uVar9);
    local_140[0] = 4;
    FText::FText(local_130,lVar10);
    local_418 = *puVar8;
    local_4b8 = local_140;
    puStack_4b0 = local_110;
    local_410 = puVar8[1];
    local_118 = '\x01';
    if (local_410 != 0) {
      LOCK();
      *(int *)(local_410 + 8) = *(int *)(local_410 + 8) + 1;
      UNLOCK();
    }
    local_2f8 = local_4b8;
    uStack_2f0 = puStack_4b0;
    uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_2e8,&local_2f8);
    uVar9 = FText::Format(local_230,&local_418,uVar9);
    FText::FText(local_2a8,uVar9);
    if (local_228 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_228 + 1;
      lVar11 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_228)(local_228);
        LOCK();
        piVar1 = (int *)((longlong)local_228 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_228 + 8))(local_228,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_2e8);
    if ((local_118 != '\0') && (local_118 = '\0', local_128 != (longlong *)0x0)) {
      LOCK();
      plVar12 = local_128 + 1;
      lVar11 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_128)(local_128);
        LOCK();
        piVar1 = (int *)((longlong)local_128 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_128 + 8))(local_128,1);
        }
      }
    }
    plVar12 = (longlong *)puVar8[1];
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar12 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    plVar12 = *(longlong **)(lVar10 + 8);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar12 + 1;
      lVar10 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    FText::operator=(param_3,local_2a8);
    if (local_2a0 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_2a0 + 1;
      lVar10 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_2a0)(local_2a0);
        LOCK();
        piVar1 = (int *)((longlong)local_2a0 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_2a0 + 8))(local_2a0,1);
        }
      }
    }
    local_3d8 = (undefined4 *)CONCAT44(local_3d8._4_4_,(undefined4)local_3d8);
    uStack_3d0 = (longlong *)CONCAT44(uStack_3d0._4_4_,(undefined4)uStack_3d0);
    if (local_210 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_210 + 1;
      lVar10 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      local_3d8 = (undefined4 *)CONCAT44(local_3d8._4_4_,(undefined4)local_3d8);
      uStack_3d0 = (longlong *)CONCAT44(uStack_3d0._4_4_,(undefined4)uStack_3d0);
      if ((int)lVar10 == 1) {
        (**(code **)*local_210)(local_210);
        LOCK();
        piVar1 = (int *)((longlong)local_210 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_210 + 8))(local_210,1);
        }
      }
    }
LAB_1416c0eb1:
    uVar9 = 0;
  }
  else {
    puVar8 = (undefined8 *)FJsonValue::AsString(local_438,local_3f0);
    pwVar14 = pwVar19;
    if (*(int *)(puVar8 + 1) == 0) {
      puVar18 = &DAT_143f3eda8;
    }
    else {
      puVar18 = (undefined2 *)*puVar8;
    }
    do {
      uVar15 = (uint)pwVar14;
      uVar9 = FUN_1416c6490(pwVar14);
      iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar18,uVar9);
      if (iVar7 == 0) break;
      uVar15 = uVar15 + 1;
      pwVar14 = (wchar_t *)(ulonglong)uVar15;
    } while ((int)uVar15 < 10);
    *(uint *)(param_1 + 1) = uVar15;
    if (local_3f0[0] != 0) {
      FMemory::Free();
      uVar15 = *(uint *)(param_1 + 1);
    }
    if (uVar15 == 10) {
      uVar9 = FJsonValue::AsString(local_438,local_3b8);
      lVar10 = FText::FromString(local_1b8,uVar9);
      lVar11 = FText::FromName(local_1a0,param_1);
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_278,
                         L"Module entry \'{0}\' specified an unrecognized module Type \'{1}\'",
                         L"ModuleDescriptor",L"ModuleWithInvalidType");
      plVar12 = (longlong *)FTextFormat::FTextFormat(local_1e8,uVar9);
      local_108[0] = 4;
      FText::FText(local_f8,lVar11);
      local_e0 = 1;
      local_d8 = 4;
      FText::FText(local_c8,lVar10);
      local_578 = local_108;
      local_b0 = 1;
      plStack_570 = (longlong *)local_a8;
      local_4c8 = (longlong *)*plVar12;
      puStack_4c0 = (ulonglong *)plVar12[1];
      if (puStack_4c0 != (ulonglong *)0x0) {
        LOCK();
        *(int *)(puStack_4c0 + 1) = (int)puStack_4c0[1] + 1;
        UNLOCK();
      }
      local_3d8 = local_578;
      uStack_3d0 = plStack_570;
      uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_3c8,&local_3d8);
      uVar9 = FText::Format(local_290,&local_4c8,uVar9);
      FText::FText(local_2d8,uVar9);
      if (local_288 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_288 + 1;
        lVar16 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*local_288)(local_288);
          LOCK();
          piVar1 = (int *)((longlong)local_288 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_288 + 8))(local_288,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_3c8);
      lVar16 = 2;
      pcVar21 = local_80;
      do {
        lVar16 = lVar16 + -1;
        pcVar2 = pcVar21 + -0x30;
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
          plVar4 = *(longlong **)(pcVar21 + -0x40);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar4 + 1;
            lVar5 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
        }
        pcVar21 = pcVar2;
      } while (lVar16 != 0);
      plVar12 = (longlong *)plVar12[1];
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar12 + 1;
        lVar16 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      plVar12 = *(longlong **)(lVar11 + 8);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar12 + 1;
        lVar11 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      plVar12 = *(longlong **)(lVar10 + 8);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar12 + 1;
        lVar10 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      FText::operator=(local_568,local_2d8);
      if (local_2d0 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_2d0 + 1;
        lVar10 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_2d0)(local_2d0);
          LOCK();
          piVar1 = (int *)((longlong)local_2d0 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_2d0 + 8))(local_2d0,1);
          }
        }
      }
      if (local_270 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_270 + 1;
        lVar10 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_270)(local_270);
          LOCK();
          piVar1 = (int *)((longlong)local_270 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_270 + 8))(local_270,1);
          }
        }
      }
      if (local_3b8[0] != 0) {
        FMemory::Free();
      }
      goto LAB_1416c0eb1;
    }
    local_560[4] = 0;
    local_560[5] = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_560 + 4,0);
    lVar11 = local_560[4];
    FGenericPlatformString::Memcpy(local_560[4],L"LoadingPhase",0x1a);
    lVar10 = local_588[0];
    FUN_1416b39b0(local_588[0],&local_578,local_560 + 4);
    if (lVar11 != 0) {
      FMemory::Free(lVar11);
    }
    puVar6 = local_578;
    if ((local_578 == (undefined4 *)0x0) || (local_578[2] != 2)) {
LAB_1416c034f:
      uVar17 = 0;
      local_560[7] = 0x13;
      local_560[6] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_560 + 6,0);
      lVar11 = local_560[6];
      FGenericPlatformString::Memcpy(local_560[6],L"WhitelistPlatforms",0x26);
      FUN_1416b39b0(lVar10,&local_448,local_560 + 6);
      if (lVar11 != 0) {
        FMemory::Free(lVar11);
      }
      if (((local_448 != 0) && (*(int *)(local_448 + 8) == 5)) &&
         (plVar12 = (longlong *)FJsonValue::AsArray(), uVar22 = uVar17, 0 < (int)plVar12[1])) {
        do {
          puVar8 = (undefined8 *)FJsonValue::AsString(*(undefined8 *)(uVar22 + *plVar12),local_368);
          iVar7 = *(int *)(param_1 + 3);
          *(int *)(param_1 + 3) = iVar7 + 1;
          if (*(int *)((longlong)param_1 + 0x1c) < iVar7 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 2,iVar7);
          }
          puVar13 = (undefined8 *)((longlong)iVar7 * 0x10 + param_1[2]);
          *puVar13 = 0;
          *puVar13 = *puVar8;
          *puVar8 = 0;
          *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar8 + 1);
          *(undefined4 *)((longlong)puVar13 + 0xc) = *(undefined4 *)((longlong)puVar8 + 0xc);
          puVar8[1] = 0;
          if (local_368[0] != 0) {
            FMemory::Free();
          }
          uVar15 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar15;
          lVar10 = local_588[0];
          uVar22 = uVar22 + 0x10;
        } while ((int)uVar15 < (int)plVar12[1]);
      }
      uVar17 = 0;
      local_560[8] = 0;
      local_560[9] = 0x13;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_560 + 8,0);
      lVar11 = local_560[8];
      FGenericPlatformString::Memcpy(local_560[8],L"BlacklistPlatforms",0x26);
      FUN_1416b39b0(lVar10,&local_458,local_560 + 8);
      if (lVar11 != 0) {
        FMemory::Free(lVar11);
      }
      if (((local_458 != 0) && (*(int *)(local_458 + 8) == 5)) &&
         (plVar12 = (longlong *)FJsonValue::AsArray(), uVar22 = uVar17, 0 < (int)plVar12[1])) {
        do {
          puVar8 = (undefined8 *)FJsonValue::AsString(*(undefined8 *)(uVar22 + *plVar12),local_358);
          iVar7 = *(int *)(param_1 + 5);
          *(int *)(param_1 + 5) = iVar7 + 1;
          if (*(int *)((longlong)param_1 + 0x2c) < iVar7 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 4,iVar7);
          }
          puVar13 = (undefined8 *)((longlong)iVar7 * 0x10 + param_1[4]);
          *puVar13 = 0;
          *puVar13 = *puVar8;
          *puVar8 = 0;
          *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar8 + 1);
          *(undefined4 *)((longlong)puVar13 + 0xc) = *(undefined4 *)((longlong)puVar8 + 0xc);
          puVar8[1] = 0;
          if (local_358[0] != 0) {
            FMemory::Free();
          }
          uVar15 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar15;
          lVar10 = local_588[0];
          uVar22 = uVar22 + 0x10;
        } while ((int)uVar15 < (int)plVar12[1]);
      }
      uVar17 = 0;
      local_560[10] = 0;
      local_560[0xb] = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_560 + 10,0);
      lVar11 = local_560[10];
      FGenericPlatformString::Memcpy(local_560[10],L"WhitelistTargets",0x22);
      FUN_1416b39b0(lVar10,&local_468,local_560 + 10);
      if (lVar11 != 0) {
        FMemory::Free(lVar11);
      }
      if (((local_468 != 0) && (*(int *)(local_468 + 8) == 5)) &&
         (plVar12 = (longlong *)FJsonValue::AsArray(), uVar22 = uVar17, 0 < (int)plVar12[1])) {
        do {
          puVar8 = (undefined8 *)FJsonValue::AsString(*(undefined8 *)(uVar22 + *plVar12),local_348);
          iVar7 = *(int *)(param_1 + 7);
          *(int *)(param_1 + 7) = iVar7 + 1;
          if (*(int *)((longlong)param_1 + 0x3c) < iVar7 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 6,iVar7);
          }
          puVar13 = (undefined8 *)((longlong)iVar7 * 0x10 + param_1[6]);
          *puVar13 = 0;
          *puVar13 = *puVar8;
          *puVar8 = 0;
          *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar8 + 1);
          *(undefined4 *)((longlong)puVar13 + 0xc) = *(undefined4 *)((longlong)puVar8 + 0xc);
          puVar8[1] = 0;
          if (local_348[0] != 0) {
            FMemory::Free();
          }
          uVar15 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar15;
          lVar10 = local_588[0];
          uVar22 = uVar22 + 0x10;
        } while ((int)uVar15 < (int)plVar12[1]);
      }
      uVar17 = 0;
      local_560[0xc] = 0;
      local_560[0xd] = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_560 + 0xc,0);
      lVar11 = local_560[0xc];
      FGenericPlatformString::Memcpy(local_560[0xc],L"BlacklistTargets",0x22);
      FUN_1416b39b0(lVar10,&local_478,local_560 + 0xc);
      if (lVar11 != 0) {
        FMemory::Free(lVar11);
      }
      if (((local_478 != 0) && (*(int *)(local_478 + 8) == 5)) &&
         (plVar12 = (longlong *)FJsonValue::AsArray(), uVar22 = uVar17, 0 < (int)plVar12[1])) {
        do {
          puVar8 = (undefined8 *)FJsonValue::AsString(*(undefined8 *)(uVar22 + *plVar12),local_338);
          iVar7 = *(int *)(param_1 + 9);
          *(int *)(param_1 + 9) = iVar7 + 1;
          if (*(int *)((longlong)param_1 + 0x4c) < iVar7 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar7);
          }
          puVar13 = (undefined8 *)((longlong)iVar7 * 0x10 + param_1[8]);
          *puVar13 = 0;
          *puVar13 = *puVar8;
          *puVar8 = 0;
          *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar8 + 1);
          *(undefined4 *)((longlong)puVar13 + 0xc) = *(undefined4 *)((longlong)puVar8 + 0xc);
          puVar8[1] = 0;
          if (local_338[0] != 0) {
            FMemory::Free();
          }
          uVar15 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar15;
          lVar10 = local_588[0];
          uVar22 = uVar22 + 0x10;
        } while ((int)uVar15 < (int)plVar12[1]);
      }
      uVar17 = 0;
      local_560[0xe] = 0;
      local_560[0xf] = 0x1e;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_560 + 0xe,0);
      lVar11 = local_560[0xe];
      FGenericPlatformString::Memcpy(local_560[0xe],L"WhitelistTargetConfigurations",0x3c);
      FUN_1416b39b0(lVar10,&local_488,local_560 + 0xe);
      if (lVar11 != 0) {
        FMemory::Free(lVar11);
      }
      if (((local_488 != 0) && (*(int *)(local_488 + 8) == 5)) &&
         (plVar12 = (longlong *)FJsonValue::AsArray(), uVar22 = uVar17, 0 < (int)plVar12[1])) {
        do {
          puVar8 = (undefined8 *)FJsonValue::AsString(*(undefined8 *)(uVar22 + *plVar12),local_328);
          iVar7 = *(int *)(param_1 + 0xb);
          *(int *)(param_1 + 0xb) = iVar7 + 1;
          if (*(int *)((longlong)param_1 + 0x5c) < iVar7 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 10,iVar7);
          }
          puVar13 = (undefined8 *)((longlong)iVar7 * 0x10 + param_1[10]);
          *puVar13 = 0;
          *puVar13 = *puVar8;
          *puVar8 = 0;
          *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar8 + 1);
          *(undefined4 *)((longlong)puVar13 + 0xc) = *(undefined4 *)((longlong)puVar8 + 0xc);
          puVar8[1] = 0;
          if (local_328[0] != 0) {
            FMemory::Free();
          }
          uVar15 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar15;
          lVar10 = local_588[0];
          uVar22 = uVar22 + 0x10;
        } while ((int)uVar15 < (int)plVar12[1]);
      }
      uVar17 = 0;
      local_560[0x10] = 0;
      local_560[0x11] = 0x1e;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_560 + 0x10,0);
      lVar11 = local_560[0x10];
      FGenericPlatformString::Memcpy(local_560[0x10],L"BlacklistTargetConfigurations",0x3c);
      FUN_1416b39b0(lVar10,&local_498,local_560 + 0x10);
      if (lVar11 != 0) {
        FMemory::Free(lVar11);
      }
      if (((local_498 != 0) && (*(int *)(local_498 + 8) == 5)) &&
         (plVar12 = (longlong *)FJsonValue::AsArray(), uVar22 = uVar17, 0 < (int)plVar12[1])) {
        do {
          puVar8 = (undefined8 *)FJsonValue::AsString(*(undefined8 *)(uVar22 + *plVar12),local_318);
          iVar7 = *(int *)(param_1 + 0xd);
          *(int *)(param_1 + 0xd) = iVar7 + 1;
          if (*(int *)((longlong)param_1 + 0x6c) < iVar7 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xc,iVar7);
          }
          puVar13 = (undefined8 *)((longlong)iVar7 * 0x10 + param_1[0xc]);
          *puVar13 = 0;
          *puVar13 = *puVar8;
          *puVar8 = 0;
          *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar8 + 1);
          *(undefined4 *)((longlong)puVar13 + 0xc) = *(undefined4 *)((longlong)puVar8 + 0xc);
          puVar8[1] = 0;
          if (local_318[0] != 0) {
            FMemory::Free();
          }
          uVar15 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar15;
          lVar10 = local_588[0];
          uVar22 = uVar22 + 0x10;
        } while ((int)uVar15 < (int)plVar12[1]);
      }
      uVar17 = 0;
      local_588[0] = 0;
      local_588[1] = 0x17;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_588,0);
      lVar11 = local_588[0];
      FGenericPlatformString::Memcpy(local_588[0],L"AdditionalDependencies",0x2e);
      FUN_1416b39b0(lVar10,&local_4a8,local_588);
      if (lVar11 != 0) {
        FMemory::Free(lVar11);
      }
      if (((local_4a8 != 0) && (*(int *)(local_4a8 + 8) == 5)) &&
         (plVar12 = (longlong *)FJsonValue::AsArray(), 0 < (int)plVar12[1])) {
        uVar22 = uVar17;
        do {
          puVar8 = (undefined8 *)FJsonValue::AsString(*(undefined8 *)(uVar22 + *plVar12),local_308);
          iVar7 = *(int *)(param_1 + 0xf);
          *(int *)(param_1 + 0xf) = iVar7 + 1;
          if (*(int *)((longlong)param_1 + 0x7c) < iVar7 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xe,iVar7);
          }
          puVar13 = (undefined8 *)((longlong)iVar7 * 0x10 + param_1[0xe]);
          *puVar13 = 0;
          *puVar13 = *puVar8;
          *puVar8 = 0;
          *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar8 + 1);
          *(undefined4 *)((longlong)puVar13 + 0xc) = *(undefined4 *)((longlong)puVar8 + 0xc);
          puVar8[1] = 0;
          if (local_308[0] != 0) {
            FMemory::Free();
          }
          uVar15 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar15;
          uVar22 = uVar22 + 0x10;
        } while ((int)uVar15 < (int)plVar12[1]);
      }
      plVar12 = local_4a0;
      uVar9 = 1;
      if (local_4a0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_4a0 + 1;
        lVar10 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_4a0)(local_4a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_4a0 + 8))(local_4a0,1);
          }
        }
      }
      plVar12 = local_490;
      if (local_490 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_490 + 1;
        lVar10 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_490)(local_490);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_490 + 8))(local_490,1);
          }
        }
      }
      plVar12 = local_480;
      if (local_480 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_480 + 1;
        lVar10 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_480)(local_480);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_480 + 8))(local_480,1);
          }
        }
      }
      plVar12 = local_470;
      if (local_470 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_470 + 1;
        lVar10 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_470)(local_470);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_470 + 8))(local_470,1);
          }
        }
      }
      plVar12 = local_460;
      if (local_460 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_460 + 1;
        lVar10 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_460)(local_460);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_460 + 8))(local_460,1);
          }
        }
      }
      plVar12 = local_450;
      if (local_450 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_450 + 1;
        lVar10 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_450)(local_450);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_450 + 8))(local_450,1);
          }
        }
      }
      plVar12 = local_440;
      local_398 = (longlong *)CONCAT44(local_398._4_4_,(undefined4)local_398);
      uStack_390 = (ulonglong *)CONCAT44(uStack_390._4_4_,(undefined4)uStack_390);
      if (local_440 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_440 + 1;
        lVar10 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        local_398 = (longlong *)CONCAT44(local_398._4_4_,(undefined4)local_398);
        uStack_390 = (ulonglong *)CONCAT44(uStack_390._4_4_,(undefined4)uStack_390);
        if ((int)lVar10 == 1) {
          (**(code **)*local_440)(local_440);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_440 + 8))(local_440,1);
          }
        }
      }
    }
    else {
      puVar8 = (undefined8 *)FJsonValue::AsString(local_578,local_3a8);
      pwVar14 = pwVar19;
      if (*(int *)(puVar8 + 1) != 0) {
        puVar20 = (undefined2 *)*puVar8;
      }
      do {
        uVar15 = (uint)pwVar14;
        pwVar14 = pwVar19;
        switch(uVar15) {
        case 0:
          pwVar14 = L"PostConfigInit";
          break;
        case 1:
          pwVar14 = L"PreEarlyLoadingScreen";
          break;
        case 2:
          pwVar14 = L"PreLoadingScreen";
          break;
        case 3:
          pwVar14 = L"PreDefault";
          break;
        case 4:
          pwVar14 = L"Default";
          break;
        case 5:
          pwVar14 = L"PostDefault";
          break;
        case 6:
          pwVar14 = L"PostEngineInit";
          break;
        case 7:
          pwVar14 = L"None";
        }
        iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar20,pwVar14);
        if (iVar7 == 0) break;
        uVar15 = uVar15 + 1;
        pwVar14 = (wchar_t *)(ulonglong)uVar15;
      } while ((int)uVar15 < 8);
      *(uint *)((longlong)param_1 + 0xc) = uVar15;
      if (local_3a8[0] != 0) {
        FMemory::Free();
        uVar15 = *(uint *)((longlong)param_1 + 0xc);
      }
      if (uVar15 != 8) goto LAB_1416c034f;
      uVar9 = FJsonValue::AsString(puVar6,local_378);
      lVar10 = FText::FromString(local_188,uVar9);
      lVar11 = FText::FromName(local_170,param_1);
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_248,
                         L"Module entry \'{0}\' specified an unrecognized module LoadingPhase \'{1}\'"
                         ,L"ModuleDescriptor",L"ModuleWithInvalidLoadingPhase");
      plVar12 = (longlong *)FTextFormat::FTextFormat(local_1d8,uVar9);
      local_a8[0] = 4;
      FText::FText(local_98,lVar11);
      local_80[0] = '\x01';
      local_78 = 4;
      FText::FText(local_68,lVar10);
      local_4c8 = (longlong *)local_a8;
      local_50 = 1;
      puStack_4c0 = local_48;
      local_4b8 = (undefined4 *)*plVar12;
      puStack_4b0 = (undefined1 *)plVar12[1];
      if (puStack_4b0 != (undefined1 *)0x0) {
        LOCK();
        *(int *)(puStack_4b0 + 8) = *(int *)(puStack_4b0 + 8) + 1;
        UNLOCK();
      }
      local_398 = local_4c8;
      uStack_390 = puStack_4c0;
      uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_388,&local_398);
      uVar9 = FText::Format(local_260,&local_4b8,uVar9);
      FText::FText(local_2c0,uVar9);
      if (local_258 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_258 + 1;
        lVar16 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*local_258)(local_258);
          LOCK();
          piVar1 = (int *)((longlong)local_258 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_258 + 8))(local_258,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_388);
      lVar16 = 2;
      pcVar21 = &stack0xffffffffffffffe0;
      do {
        lVar16 = lVar16 + -1;
        pcVar2 = pcVar21 + -0x30;
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
          plVar4 = *(longlong **)(pcVar21 + -0x40);
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar4 + 1;
            lVar5 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
        }
        pcVar21 = pcVar2;
      } while (lVar16 != 0);
      plVar12 = (longlong *)plVar12[1];
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar12 + 1;
        lVar16 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      plVar12 = *(longlong **)(lVar11 + 8);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar12 + 1;
        lVar11 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      plVar12 = *(longlong **)(lVar10 + 8);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar12 + 1;
        lVar10 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      FText::operator=(local_568,local_2c0);
      if (local_2b8 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_2b8 + 1;
        lVar10 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_2b8)(local_2b8);
          LOCK();
          piVar1 = (int *)((longlong)local_2b8 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_2b8 + 8))(local_2b8,1);
          }
        }
      }
      if (local_240 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_240 + 1;
        lVar10 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_240)(local_240);
          LOCK();
          piVar1 = (int *)((longlong)local_240 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_240 + 8))(local_240,1);
          }
        }
      }
      if (local_378[0] != 0) {
        FMemory::Free();
      }
      uVar9 = 0;
    }
    plVar12 = plStack_570;
    local_3d8 = (undefined4 *)CONCAT44(local_3d8._4_4_,(undefined4)local_3d8);
    uStack_3d0 = (longlong *)CONCAT44(uStack_3d0._4_4_,(undefined4)uStack_3d0);
    local_2f8 = (undefined4 *)CONCAT44(local_2f8._4_4_,(undefined4)local_2f8);
    uStack_2f0 = (undefined1 *)CONCAT44(uStack_2f0._4_4_,(undefined4)uStack_2f0);
    if (plStack_570 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_570 + 1;
      lVar10 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      local_3d8 = (undefined4 *)CONCAT44(local_3d8._4_4_,(undefined4)local_3d8);
      uStack_3d0 = (longlong *)CONCAT44(uStack_3d0._4_4_,(undefined4)uStack_3d0);
      local_2f8 = (undefined4 *)CONCAT44(local_2f8._4_4_,(undefined4)local_2f8);
      uStack_2f0 = (undefined1 *)CONCAT44(uStack_2f0._4_4_,(undefined4)uStack_2f0);
      if ((int)lVar10 == 1) {
        (**(code **)*plStack_570)(plStack_570);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plStack_570 + 8))(plStack_570,1);
        }
      }
    }
  }
  plVar12 = local_430;
  if (local_430 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_430 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_430)(local_430);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_430 + 8))(local_430,1);
      }
    }
  }
LAB_1416c0f6e:
  plVar12 = local_420;
  if (local_420 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_420 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_420)(local_420);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_420 + 8))(local_420,1);
      }
    }
  }
  return uVar9;
}



// FUNCTION 1416c1010 FUN_1416c1010 body=3662 status=ok
// SIG undefined FUN_1416c1010(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1416c1010(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  wchar_t **ppwVar2;
  char *pcVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  char *pcVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  undefined1 auStack_398 [32];
  char local_378 [4];
  uint local_374;
  undefined8 local_370;
  wchar_t *local_368;
  undefined4 *local_358;
  ulonglong *puStack_350;
  wchar_t *local_348;
  int local_340;
  undefined4 local_33c;
  longlong local_338;
  undefined8 local_330;
  longlong local_328 [46];
  longlong local_1b8 [2];
  undefined8 local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_398;
  local_328[0x29] = 0xc;
  local_328[0x28] = 0;
  local_370 = param_3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_328 + 0x28,0);
  FGenericPlatformString::Memcpy(local_328[0x28],L"FileVersion",0x18);
  cVar8 = FUN_1416b3b00(param_2,local_328 + 0x28,&local_374);
  if (local_328[0x28] != 0) {
    FMemory::Free();
  }
  if (cVar8 == '\0') {
    local_338 = 0;
    local_330 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_338,0);
    FGenericPlatformString::Memcpy(local_338,L"PluginFileVersion",0x24);
    cVar8 = FUN_1416b3b00(param_2,&local_338,&local_374);
    if (local_338 != 0) {
      FMemory::Free();
    }
    if (cVar8 == '\0') {
      uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_130,L"File does not have a valid \'FileVersion\' number.",
                          L"PluginDescriptor",L"InvalidProjectFileVersion");
      FText::operator=(param_3,uVar10);
      if (local_128 == (longlong *)0x0) {
        return 0;
      }
      LOCK();
      plVar5 = local_128 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 != 1) {
        return 0;
      }
      (**(code **)*local_128)(local_128);
      LOCK();
      piVar1 = (int *)((longlong)local_128 + 0xc);
      iVar19 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      local_140 = local_128;
      goto joined_r0x0001416c1e1f;
    }
  }
  if ((byte)((char)local_374 - 1U) < 3) {
    local_328[0] = 0;
    local_328[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_328,0);
    FGenericPlatformString::Memcpy(local_328[0],L"Version",0x10);
    FUN_1416b3b00(param_2,local_328,param_1);
    if (local_328[0] != 0) {
      FMemory::Free();
    }
    local_328[2] = 0;
    local_328[3] = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_328 + 2,0);
    FGenericPlatformString::Memcpy(local_328[2],L"VersionName",0x18);
    FUN_1416b40a0(param_2,local_328 + 2,param_1 + 8);
    if (local_328[2] != 0) {
      FMemory::Free();
    }
    local_328[4] = 0;
    local_328[5] = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_328 + 4,0);
    FGenericPlatformString::Memcpy(local_328[4],L"FriendlyName",0x1a);
    FUN_1416b40a0(param_2,local_328 + 4,param_1 + 0x18);
    if (local_328[4] != 0) {
      FMemory::Free();
    }
    local_328[6] = 0;
    local_328[7] = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_328 + 6,0);
    FGenericPlatformString::Memcpy(local_328[6],L"Description",0x18);
    FUN_1416b40a0(param_2,local_328 + 6,param_1 + 0x28);
    if (local_328[6] != 0) {
      FMemory::Free();
    }
    local_328[8] = 0;
    local_328[9] = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_328 + 8,0);
    FGenericPlatformString::Memcpy(local_328[8],L"Category",0x12);
    ppwVar2 = (wchar_t **)(param_1 + 0x38);
    cVar8 = FUN_1416b40a0(param_2,local_328 + 8,ppwVar2);
    if (local_328[8] != 0) {
      FMemory::Free();
    }
    if (cVar8 == '\0') {
      local_328[10] = 0;
      local_328[0xb] = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_328 + 10,0);
      FGenericPlatformString::Memcpy(local_328[10],L"CategoryPath",0x1a);
      FUN_1416b40a0(param_2,local_328 + 10,ppwVar2);
      if (local_328[10] != 0) {
        FMemory::Free();
      }
    }
    if ((((*(int *)(param_1 + 0x40) != 0) && (2 < *(int *)(param_1 + 0x40))) &&
        (cVar8 = FString::StartsWith(ppwVar2,&DAT_144cde414,1), cVar8 != '\0')) &&
       (cVar8 = FString::EndsWith(ppwVar2,&DAT_144cde4e4,1), cVar8 != '\0')) {
      iVar19 = *(int *)(param_1 + 0x40);
      uVar14 = iVar19 - 1;
      uVar9 = iVar19 - 2;
      if (iVar19 == 0) {
        uVar14 = 0xffffffff;
        uVar9 = 0xffffffff;
      }
      uVar18 = uVar14;
      if (iVar19 == 0) {
        uVar18 = 0;
      }
      if (1 < uVar18) {
        uVar18 = 1;
      }
      if (iVar19 == 0) {
        uVar14 = 0;
      }
      uVar15 = uVar18;
      if ((uVar18 <= uVar9) && (uVar15 = uVar14, uVar9 < uVar14)) {
        uVar15 = uVar9;
      }
      if (iVar19 == 0) {
        local_368 = L"";
      }
      else {
        local_368 = *ppwVar2;
      }
      iVar16 = uVar15 - uVar18;
      local_348 = (wchar_t *)0x0;
      local_33c = 0;
      iVar19 = iVar16 + 1;
      if (iVar16 == 0) {
        iVar19 = 0;
      }
      pwVar11 = local_348;
      local_340 = iVar19;
      if ((0 < iVar19) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_348), iVar19 = local_340,
         pwVar11 = local_348, 0 < local_340)) {
        wcsncpy(local_348,local_368 + (int)uVar18,(longlong)iVar16);
        pwVar11[iVar16] = L'\0';
      }
      if (ppwVar2 == &local_348) {
        param_3 = local_370;
        if (pwVar11 != (wchar_t *)0x0) {
          FMemory::Free(pwVar11);
          param_3 = local_370;
        }
      }
      else {
        if (*ppwVar2 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        *ppwVar2 = pwVar11;
        *(int *)(param_1 + 0x40) = iVar19;
        *(undefined4 *)(param_1 + 0x44) = local_33c;
        param_3 = local_370;
      }
    }
    local_328[0xc] = 0;
    local_328[0xd] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_328 + 0xc,0);
    FGenericPlatformString::Memcpy(local_328[0xc],L"CreatedBy",0x14);
    FUN_1416b40a0(param_2,local_328 + 0xc,param_1 + 0x48);
    if (local_328[0xc] != 0) {
      FMemory::Free();
    }
    local_328[0xe] = 0;
    local_328[0xf] = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_328 + 0xe,0);
    FGenericPlatformString::Memcpy(local_328[0xe],L"CreatedByURL",0x1a);
    FUN_1416b40a0(param_2,local_328 + 0xe,param_1 + 0x58);
    if (local_328[0xe] != 0) {
      FMemory::Free();
    }
    local_328[0x10] = 0;
    local_328[0x11] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_328 + 0x10,0);
    FGenericPlatformString::Memcpy(local_328[0x10],L"DocsURL",0x10);
    FUN_1416b40a0(param_2,local_328 + 0x10,param_1 + 0x68);
    if (local_328[0x10] != 0) {
      FMemory::Free();
    }
    local_328[0x12] = 0;
    local_328[0x13] = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_328 + 0x12,0);
    FGenericPlatformString::Memcpy(local_328[0x12],L"MarketplaceURL",0x1e);
    FUN_1416b40a0(param_2,local_328 + 0x12,param_1 + 0x78);
    if (local_328[0x12] != 0) {
      FMemory::Free();
    }
    local_328[0x14] = 0;
    local_328[0x15] = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_328 + 0x14,0);
    FGenericPlatformString::Memcpy(local_328[0x14],L"SupportURL",0x16);
    FUN_1416b40a0(param_2,local_328 + 0x14,param_1 + 0x88);
    if (local_328[0x14] != 0) {
      FMemory::Free();
    }
    local_328[0x16] = 0;
    local_328[0x17] = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_328 + 0x16,0);
    FGenericPlatformString::Memcpy(local_328[0x16],L"EngineVersion",0x1c);
    FUN_1416b40a0(param_2,local_328 + 0x16,param_1 + 0x98);
    if (local_328[0x16] != 0) {
      FMemory::Free();
    }
    local_328[0x18] = 0;
    local_328[0x19] = 0x19;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_328 + 0x18,0);
    FGenericPlatformString::Memcpy(local_328[0x18],L"SupportedTargetPlatforms",0x32);
    FUN_1416b3f10(param_2,local_328 + 0x18,param_1 + 0xa8);
    if (local_328[0x18] != 0) {
      FMemory::Free();
    }
    cVar8 = FUN_1416c3f70(param_2,L"Modules",param_1 + 0xb8,param_3);
    if (cVar8 == '\0') {
      return 0;
    }
    cVar8 = FUN_1416c3d40(param_2,L"LocalizationTargets",param_1 + 200,param_3);
    if (cVar8 == '\0') {
      return 0;
    }
    local_328[0x1a] = 0;
    local_328[0x1b] = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_328 + 0x1a,0);
    FGenericPlatformString::Memcpy(local_328[0x1a],L"EnabledByDefault",0x22);
    cVar8 = FUN_1416b3900(param_2,local_328 + 0x1a,local_378);
    if (local_328[0x1a] != 0) {
      FMemory::Free();
    }
    if (cVar8 != '\0') {
      *(char *)(param_1 + 0xd8) = (local_378[0] == '\0') + '\x01';
    }
    local_328[0x1c] = 0;
    local_328[0x1d] = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_328 + 0x1c,0);
    FGenericPlatformString::Memcpy(local_328[0x1c],L"CanContainContent",0x24);
    FUN_1416b3900(param_2,local_328 + 0x1c,param_1 + 0xd9);
    if (local_328[0x1c] != 0) {
      FMemory::Free();
    }
    local_328[0x1e] = 0;
    local_328[0x1f] = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_328 + 0x1e,0);
    FGenericPlatformString::Memcpy(local_328[0x1e],L"IsBetaVersion",0x1c);
    FUN_1416b3900(param_2,local_328 + 0x1e,param_1 + 0xda);
    if (local_328[0x1e] != 0) {
      FMemory::Free();
    }
    local_328[0x20] = 0;
    local_328[0x21] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_328 + 0x20,0);
    FGenericPlatformString::Memcpy(local_328[0x20],L"Installed",0x14);
    FUN_1416b3900(param_2,local_328 + 0x20,param_1 + 0xdb);
    if (local_328[0x20] != 0) {
      FMemory::Free();
    }
    local_328[0x22] = 0;
    local_328[0x23] = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_328 + 0x22,0);
    FGenericPlatformString::Memcpy(local_328[0x22],L"RequiresBuildPlatform",0x2c);
    FUN_1416b3900(param_2,local_328 + 0x22,param_1 + 0xdc);
    if (local_328[0x22] != 0) {
      FMemory::Free();
    }
    local_328[0x24] = 0;
    local_328[0x25] = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_328 + 0x24,0);
    FGenericPlatformString::Memcpy(local_328[0x24],L"Hidden",0xe);
    FUN_1416b3900(param_2,local_328 + 0x24,param_1 + 0xdd);
    if (local_328[0x24] != 0) {
      FMemory::Free();
    }
    local_328[0x26] = 0;
    local_328[0x27] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_328 + 0x26,0);
    FGenericPlatformString::Memcpy(local_328[0x26],L"IsDLC",0xc);
    FUN_1416b3900(param_2,local_328 + 0x26,param_1 + 0xde);
    if (local_328[0x26] != 0) {
      FMemory::Free();
    }
    local_328[0x2a] = 0;
    local_328[0x2b] = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_328 + 0x2a,0);
    lVar12 = local_328[0x2a];
    FGenericPlatformString::Memcpy(local_328[0x2a],L"PreBuildSteps",0x1c);
    FUN_1416bf080(param_1 + 0xe0,param_2,local_328 + 0x2a);
    if (lVar12 != 0) {
      FMemory::Free(lVar12);
    }
    local_358 = (undefined4 *)0x0;
    puStack_350 = (ulonglong *)0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_358,0);
    puVar7 = local_358;
    FGenericPlatformString::Memcpy(local_358,L"PostBuildSteps",0x1e);
    FUN_1416bf080(param_1 + 0x130,param_2,&local_358);
    if (puVar7 != (undefined4 *)0x0) {
      FMemory::Free(puVar7);
    }
    cVar8 = FPluginReferenceDescriptor::ReadArray(param_2,L"Plugins",param_1 + 0x180,param_3);
    if (cVar8 == '\0') {
      return 0;
    }
    return 1;
  }
  FString::PrintfImpl(local_328 + 0x2c,&DAT_144ce0714,local_374 & 0xff);
  FText::FromString(local_148,local_328 + 0x2c);
  if (local_328[0x2c] != 0) {
    FMemory::Free();
  }
  FString::PrintfImpl(local_1b8,&DAT_144ce0884,3);
  FText::FromString(local_160,local_1b8);
  if (local_1b8[0] != 0) {
    FMemory::Free();
  }
  pwVar11 = (wchar_t *)FText::FText(local_d8,local_160);
  local_368 = pwVar11;
  lVar12 = FText::FText(local_c0,local_148);
  uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (local_100,
                      L"File appears to be in a newer version ({0}) of the file format that we can load (max version: {1})."
                      ,L"PluginDescriptor",L"ProjectFileVersionTooLarge");
  puVar13 = (undefined8 *)FTextFormat::FTextFormat(local_e8,uVar10);
  local_a8[0] = 4;
  FText::FText(local_98,lVar12);
  local_80 = 1;
  local_78 = 4;
  FText::FText(local_68,pwVar11);
  local_358 = local_a8;
  local_50 = 1;
  puStack_350 = local_48;
  local_1a8 = *puVar13;
  local_1a0 = puVar13[1];
  if (local_1a0 != 0) {
    LOCK();
    *(int *)(local_1a0 + 8) = *(int *)(local_1a0 + 8) + 1;
    UNLOCK();
  }
  local_198 = local_358;
  uStack_190 = puStack_350;
  uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
           TArray<FFormatArgumentValue,FDefaultAllocator>(local_188,&local_198);
  uVar10 = FText::Format(local_118,&local_1a8,uVar10);
  FText::FText(local_178,uVar10);
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_110 + 1;
    lVar20 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar20 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar1 = (int *)((longlong)local_110 + 0xc);
      iVar19 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar19 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_188);
  lVar20 = 2;
  pcVar17 = &stack0xffffffffffffffe0;
  do {
    lVar20 = lVar20 + -1;
    pcVar3 = pcVar17 + -0x30;
    if (*pcVar3 != '\0') {
      *pcVar3 = '\0';
      plVar5 = *(longlong **)(pcVar17 + -0x40);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar5 + 1;
        lVar6 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar19 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
    pcVar17 = pcVar3;
  } while (lVar20 != 0);
  plVar5 = (longlong *)puVar13[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar5 + 1;
    lVar20 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar20 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar19 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar19 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(lVar12 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar5 + 1;
    lVar12 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar19 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar19 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(local_368 + 4);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar5 + 1;
    lVar12 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar19 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar19 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  FText::operator=(local_370,local_178);
  if (local_170 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_170 + 1;
    lVar12 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_170)(local_170);
      LOCK();
      piVar1 = (int *)((longlong)local_170 + 0xc);
      iVar19 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar19 == 1) {
        (**(code **)(*local_170 + 8))(local_170,1);
      }
    }
  }
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_f8 + 1;
    lVar12 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar1 = (int *)((longlong)local_f8 + 0xc);
      iVar19 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar19 == 1) {
        (**(code **)(*local_f8 + 8))(local_f8,1);
      }
    }
  }
  if (local_158 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_158 + 1;
    lVar12 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar1 = (int *)((longlong)local_158 + 0xc);
      iVar19 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar19 == 1) {
        (**(code **)(*local_158 + 8))(local_158,1);
      }
    }
  }
  if (local_140 == (longlong *)0x0) {
    return 0;
  }
  LOCK();
  plVar5 = local_140 + 1;
  lVar12 = *plVar5;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)lVar12 != 1) {
    return 0;
  }
  (**(code **)*local_140)(local_140);
  LOCK();
  piVar1 = (int *)((longlong)local_140 + 0xc);
  iVar19 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
joined_r0x0001416c1e1f:
  if (iVar19 == 1) {
    (**(code **)(*local_140 + 8))(local_140,1);
  }
  return 0;
}



// FUNCTION 1416c1e60 FUN_1416c1e60 body=846 status=ok
// SIG undefined FUN_1416c1e60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1416c1e60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined1 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong *local_120;
  longlong local_118;
  longlong *plStack_110;
  undefined4 *local_108;
  ulonglong *puStack_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  TJsonReaderFactory<wchar_t>::Create(&local_128);
  cVar6 = FUN_1404a7f60(&local_128,&local_118);
  if ((cVar6 == '\0') || (local_118 == 0)) {
    lVar8 = FText::FromString(local_80,local_128 + 0x38);
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a8,L"Failed to read file. {0}",L"PluginDescriptor",
                       L"FailedToReadDescriptorFile");
    puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_90,uVar9);
    local_68[0] = 4;
    FText::FText(local_58,lVar8);
    local_f8 = *puVar10;
    local_108 = local_68;
    puStack_100 = local_38;
    local_f0 = puVar10[1];
    local_40 = '\x01';
    if (local_f0 != 0) {
      LOCK();
      *(int *)(local_f0 + 8) = *(int *)(local_f0 + 8) + 1;
      UNLOCK();
    }
    uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_e8,&local_108);
    uVar9 = FText::Format(local_c0,&local_f8,uVar9);
    FText::FText(local_d8,uVar9);
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_b8 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)local_b8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_e8);
    if (local_40 != '\0') {
      local_40 = '\0';
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_50 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)local_50 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
    plVar4 = (longlong *)puVar10[1];
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
    plVar4 = *(longlong **)(lVar8 + 8);
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
    FText::operator=(param_3,local_d8);
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_d0 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)local_d0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_a0 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar2 = (int *)((longlong)local_a0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_1416c1010(param_1,local_118,param_3);
  }
  plVar4 = local_120;
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_120 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_120 + 8))(local_120,1);
      }
    }
  }
  plVar4 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_110 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_110 + 8))(plStack_110,1);
      }
    }
  }
  return uVar7;
}



// FUNCTION 1416c21b0 FUN_1416c21b0 body=1022 status=ok
// SIG undefined FUN_1416c21b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1416c21b0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auStack_268 [32];
  undefined8 *local_248;
  int local_240;
  undefined4 local_23c;
  longlong local_238 [7];
  undefined8 *local_200;
  longlong local_1f8 [2];
  longlong local_1e8;
  longlong local_1e0;
  undefined1 local_1d8 [400];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_238[1] = 9;
  local_238[0] = 0;
  local_238[6] = param_3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_238,0);
  FGenericPlatformString::Memcpy(local_238[0],L"Contents",0x12);
  plVar5 = (longlong *)FUN_1416b2a60(param_2,local_238);
  local_248 = (undefined8 *)0x0;
  iVar9 = (int)plVar5[1];
  lVar11 = *plVar5;
  local_240 = iVar9;
  if (iVar9 == 0) {
    local_23c = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_248,iVar9,0);
    puVar8 = local_248;
    do {
      *puVar8 = *(undefined8 *)((lVar11 - (longlong)local_248) + (longlong)puVar8);
      lVar2 = *(longlong *)((lVar11 - (longlong)local_248) + 8 + (longlong)puVar8);
      puVar8[1] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      puVar8 = puVar8 + 2;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar9 = local_240;
  puVar8 = local_248;
  if (local_238[0] != 0) {
    FMemory::Free();
  }
  local_200 = puVar8 + (longlong)iVar9 * 2;
  if (puVar8 != local_200) {
    do {
      plVar5 = (longlong *)puVar8[1];
      puVar6 = (undefined8 *)*puVar8;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      puVar6 = (undefined8 *)(**(code **)*puVar6)();
      plVar3 = (longlong *)puVar6[1];
      uVar10 = *puVar6;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      local_1e8 = 0;
      local_1e0 = 0;
      FUN_1416b5310(local_1d8);
      local_238[2] = 0;
      local_238[3] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_238 + 2,0);
      FGenericPlatformString::Memcpy(local_238[2],L"File",10);
      plVar7 = (longlong *)FJsonObject::GetStringField(uVar10,local_1f8,local_238 + 2);
      if (&local_1e8 != plVar7) {
        if (local_1e8 != 0) {
          FMemory::Free();
        }
        local_1e8 = *plVar7;
        *plVar7 = 0;
        local_1e0 = plVar7[1];
        plVar7[1] = 0;
      }
      if (local_1f8[0] != 0) {
        FMemory::Free();
      }
      if (local_238[2] != 0) {
        FMemory::Free();
      }
      local_238[5] = 0xb;
      local_238[4] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_238 + 4,0);
      FGenericPlatformString::Memcpy(local_238[4],L"Descriptor",0x16);
      puVar6 = (undefined8 *)FUN_1416b2cb0(uVar10,local_238 + 4);
      cVar4 = FUN_1416c1010(local_1d8,*puVar6,local_238[6]);
      if (local_238[4] != 0) {
        FMemory::Free();
      }
      if (cVar4 == '\0') {
        FPluginDescriptor::~FPluginDescriptor(local_1d8);
        if (local_1e8 != 0) {
          FMemory::Free();
        }
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar3 + 1;
          lVar11 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar5 + 1;
          lVar11 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        uVar10 = 0;
        goto LAB_1416c24e6;
      }
      iVar9 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar9 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
        FUN_140d4bba0(param_1,iVar9);
      }
      lVar11 = (longlong)iVar9 * 0x1a0 + *param_1;
      FString::FString(lVar11,&local_1e8);
      FUN_1416b4fa0(lVar11 + 0x10);
      FPluginDescriptor::~FPluginDescriptor(local_1d8);
      if (local_1e8 != 0) {
        FMemory::Free();
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar3 + 1;
        lVar11 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3);
          }
        }
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar11 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
      }
      puVar8 = puVar8 + 2;
    } while (puVar8 != local_200);
  }
  uVar10 = 1;
LAB_1416c24e6:
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_248);
  return uVar10;
}



// FUNCTION 1416c25b0 Read body=1189 status=ok
// SIG undefined Read(void)

undefined8 FPluginReferenceDescriptor::Read(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong local_108 [24];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  local_108[1] = 5;
  local_108[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108,0);
  FGenericPlatformString::Memcpy(local_108[0],L"Name",10);
  cVar5 = FUN_1416b40a0(param_2,local_108,param_1);
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  if (cVar5 == '\0') {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_48,L"Plugin references must have a \'Name\' field",L"PluginDescriptor",
                       L"PluginReferenceWithoutName");
    FText::operator=(param_3,uVar6);
    plVar7 = local_40;
  }
  else {
    local_108[2] = 0;
    local_108[3] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108 + 2,0);
    FGenericPlatformString::Memcpy(local_108[2],L"Enabled",0x10);
    cVar5 = FUN_1416b3900(param_2,local_108 + 2,param_1 + 0x10);
    if (local_108[2] != 0) {
      FMemory::Free();
    }
    if (cVar5 != '\0') {
      local_108[4] = 0;
      local_108[5] = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108 + 4,0);
      FGenericPlatformString::Memcpy(local_108[4],L"Optional",0x12);
      FUN_1416b3900(param_2,local_108 + 4,param_1 + 0x11);
      if (local_108[4] != 0) {
        FMemory::Free();
      }
      local_108[6] = 0;
      local_108[7] = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108 + 6,0);
      FGenericPlatformString::Memcpy(local_108[6],L"Description",0x18);
      FUN_1416b40a0(param_2,local_108 + 6,param_1 + 0x18);
      if (local_108[6] != 0) {
        FMemory::Free();
      }
      local_108[8] = 0;
      local_108[9] = 0xf;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108 + 8,0);
      FGenericPlatformString::Memcpy(local_108[8],L"MarketplaceURL",0x1e);
      FUN_1416b40a0(param_2,local_108 + 8,param_1 + 0x28);
      if (local_108[8] != 0) {
        FMemory::Free();
      }
      local_108[10] = 0;
      local_108[0xb] = 0x13;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108 + 10,0);
      FGenericPlatformString::Memcpy(local_108[10],L"WhitelistPlatforms",0x26);
      FUN_1416b3f10(param_2,local_108 + 10,param_1 + 0x38);
      if (local_108[10] != 0) {
        FMemory::Free();
      }
      local_108[0xc] = 0;
      local_108[0xd] = 0x13;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108 + 0xc,0);
      FGenericPlatformString::Memcpy(local_108[0xc],L"BlacklistPlatforms",0x26);
      FUN_1416b3f10(param_2,local_108 + 0xc,param_1 + 0x48);
      if (local_108[0xc] != 0) {
        FMemory::Free();
      }
      local_108[0xe] = 0;
      local_108[0xf] = 0x1e;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108 + 0xe,0);
      FGenericPlatformString::Memcpy(local_108[0xe],L"WhitelistTargetConfigurations",0x3c);
      FUN_1416b3f10(param_2,local_108 + 0xe,param_1 + 0x58);
      if (local_108[0xe] != 0) {
        FMemory::Free();
      }
      local_108[0x10] = 0;
      local_108[0x11] = 0x1e;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108 + 0x10,0);
      FGenericPlatformString::Memcpy(local_108[0x10],L"BlacklistTargetConfigurations",0x3c);
      FUN_1416b3f10(param_2,local_108 + 0x10,param_1 + 0x68);
      if (local_108[0x10] != 0) {
        FMemory::Free();
      }
      local_108[0x12] = 0;
      local_108[0x13] = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108 + 0x12,0);
      FGenericPlatformString::Memcpy(local_108[0x12],L"WhitelistTargets",0x22);
      FUN_1416b3f10(param_2,local_108 + 0x12,param_1 + 0x78);
      if (local_108[0x12] != 0) {
        FMemory::Free();
      }
      local_108[0x14] = 0;
      local_108[0x15] = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108 + 0x14,0);
      FGenericPlatformString::Memcpy(local_108[0x14],L"BlacklistTargets",0x22);
      FUN_1416b3f10(param_2,local_108 + 0x14,param_1 + 0x88);
      if (local_108[0x14] != 0) {
        FMemory::Free();
      }
      local_108[0x16] = 0;
      local_108[0x17] = 0x19;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108 + 0x16,0);
      FGenericPlatformString::Memcpy(local_108[0x16],L"SupportedTargetPlatforms",0x32);
      FUN_1416b3f10(param_2,local_108 + 0x16,param_1 + 0x98);
      if (local_108[0x16] != 0) {
        FMemory::Free();
      }
      return 1;
    }
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_30,L"Plugin references must have an \'Enabled\' field",
                       L"PluginDescriptor",L"PluginReferenceWithoutEnabled");
    FText::operator=(param_3,uVar6);
    plVar7 = local_28;
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return 0;
}



// FUNCTION 1416c2a60 Read body=2713 status=ok
// SIG undefined Read(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FProjectDescriptor::Read(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  uint uVar17;
  char *pcVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  undefined1 auStack_2f8 [32];
  int local_2d8 [2];
  undefined2 *local_2d0;
  int local_2c8;
  int local_2c4;
  undefined4 *local_2b8;
  ulonglong *puStack_2b0;
  undefined8 *local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  longlong local_290;
  undefined8 local_288;
  longlong local_280;
  undefined8 local_278;
  longlong local_270;
  undefined8 local_268;
  longlong local_260;
  undefined8 local_258;
  longlong local_250;
  undefined8 local_248;
  longlong local_240;
  undefined8 local_238;
  longlong local_230 [2];
  undefined2 *local_220;
  undefined8 local_218;
  longlong local_210 [2];
  longlong *local_200;
  longlong local_1f8 [3];
  longlong local_1e0;
  longlong local_1d8 [2];
  longlong local_1c8 [2];
  undefined8 local_1b8;
  longlong local_1b0;
  longlong local_1a8 [2];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  ulonglong uVar18;
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  local_298 = 0xc;
  local_2a0 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a0,0);
  FGenericPlatformString::Memcpy(local_2a0,L"FileVersion",0x18);
  cVar8 = FUN_1416b3b00(param_2,&local_2a0,local_2d8);
  if (local_2a0 != 0) {
    FMemory::Free();
  }
  if (cVar8 == '\0') {
    local_290 = 0;
    local_288 = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_290,0);
    FGenericPlatformString::Memcpy(local_290,L"ProjectFileVersion",0x26);
    cVar8 = FUN_1416b3b00(param_2,&local_290,local_2d8);
    if (local_290 != 0) {
      FMemory::Free();
    }
    if (cVar8 == '\0') {
      uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_130,L"File does not have a valid \'FileVersion\' number.",
                          L"ProjectDescriptor",L"InvalidProjectFileVersion");
      FText::operator=(param_4,uVar10);
      local_140 = local_128;
      goto joined_r0x0001416c349c;
    }
  }
  *param_1 = local_2d8[0];
  if (local_2d8[0] - 1U < 3) {
    local_280 = 0;
    local_278 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_280,0);
    FGenericPlatformString::Memcpy(local_280,L"EngineAssociation",0x24);
    FUN_1416b40a0(param_2,&local_280,param_1 + 2);
    if (local_280 != 0) {
      FMemory::Free();
    }
    local_270 = 0;
    local_268 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_270,0);
    FGenericPlatformString::Memcpy(local_270,L"Category",0x12);
    FUN_1416b40a0(param_2,&local_270,param_1 + 6);
    if (local_270 != 0) {
      FMemory::Free();
    }
    local_260 = 0;
    local_258 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_260,0);
    FGenericPlatformString::Memcpy(local_260,L"Description",0x18);
    FUN_1416b40a0(param_2,&local_260,param_1 + 10);
    if (local_260 != 0) {
      FMemory::Free();
    }
    local_250 = 0;
    local_248 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_250,0);
    FGenericPlatformString::Memcpy(local_250,L"Enterprise",0x16);
    FUN_1416b3900(param_2,&local_250,param_1 + 0x44);
    if (local_250 != 0) {
      FMemory::Free();
    }
    cVar8 = FUN_1416c3f70(param_2,L"Modules",param_1 + 0xe,param_4);
    if (cVar8 == '\0') {
      return 0;
    }
    cVar8 = FPluginReferenceDescriptor::ReadArray(param_2,L"Plugins",param_1 + 0x12,param_4);
    if (cVar8 == '\0') {
      return 0;
    }
    local_240 = 0;
    local_238 = 0x1c;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_240,0);
    FGenericPlatformString::Memcpy(local_240,L"AdditionalPluginDirectories",0x38);
    cVar8 = FUN_1416b3850(param_2,&local_240,local_1f8 + 2);
    if (local_240 != 0) {
      FMemory::Free();
    }
    if ((cVar8 != '\0') && (0 < *(int *)(local_1f8[2] + 8))) {
      plVar5 = (longlong *)(param_1 + 0x46);
      TArray<FString,FDefaultAllocator>::Empty(plVar5);
      puVar11 = (undefined8 *)FPaths::ProjectDir(local_1a8);
      iVar4 = *(int *)(puVar11 + 1);
      local_2d0 = (undefined2 *)*puVar11;
      *puVar11 = 0;
      local_2c8 = *(int *)(puVar11 + 1);
      local_2c4 = *(int *)((longlong)puVar11 + 0xc);
      puVar11[1] = 0;
      iVar9 = local_2c8;
      if (local_2c4 < (int)((0x14 - (uint)(iVar4 != 0)) + local_2c8)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_2d0);
        iVar9 = local_2c8;
      }
      local_2c8 = (0x14 - (uint)(iVar9 != 0)) + iVar9;
      if (local_2c4 < local_2c8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d0);
      }
      iVar4 = local_2c8;
      puVar16 = local_2d0;
      builtin_wcsncpy(local_2d0 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)),L"../RemappedPlugins/"
                      ,0x14);
      if (local_1a8[0] != 0) {
        FMemory::Free();
      }
      puVar11 = (undefined8 *)*plVar5;
      puVar20 = puVar11 + (longlong)param_1[0x48] * 2;
      local_2a8 = puVar11;
      for (; puVar11 != puVar20; puVar11 = puVar11 + 2) {
        puVar15 = &DAT_143f3eda8;
        if (iVar4 != 0) {
          puVar15 = puVar16;
        }
        if (*(int *)(puVar11 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar11;
        }
        iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar15);
        if (iVar9 == 0) {
          if ((int)((longlong)puVar11 - (longlong)local_2a8 >> 4) != -1) goto LAB_1416c2f1d;
          break;
        }
      }
      iVar9 = param_1[0x48];
      param_1[0x48] = iVar9 + 1;
      if (param_1[0x49] < iVar9 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar5,iVar9);
      }
      puVar11 = (undefined8 *)((longlong)iVar9 * 0x10 + *plVar5);
      *puVar11 = 0;
      *(int *)(puVar11 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar11,iVar4,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar11,puVar16,(longlong)iVar4 * 2);
      }
LAB_1416c2f1d:
      if (puVar16 != (undefined2 *)0x0) {
        FMemory::Free(puVar16);
      }
    }
    uVar18 = 0;
    local_230[0] = 0;
    local_230[1] = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_230,0);
    FGenericPlatformString::Memcpy(local_230[0],L"TargetPlatforms",0x20);
    cVar8 = FUN_1416b3850(param_2,local_230,&local_200);
    if (local_230[0] != 0) {
      FMemory::Free();
    }
    if ((cVar8 != '\0') && (uVar21 = uVar18, 0 < (int)local_200[1])) {
      do {
        local_220 = (undefined2 *)0x0;
        local_218 = 0;
        cVar8 = (**(code **)(**(longlong **)(uVar21 + *local_200) + 0x10))
                          (*(longlong **)(uVar21 + *local_200),local_230 + 2);
        if (cVar8 != '\0') {
          puVar16 = &DAT_143f3eda8;
          if ((int)local_218 != 0) {
            puVar16 = local_220;
          }
          FName::FName(&local_2a8,puVar16,1);
          iVar4 = param_1[0x18];
          param_1[0x18] = iVar4 + 1;
          if (param_1[0x19] < iVar4 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x16,iVar4);
          }
          *(undefined8 **)(*(longlong *)(param_1 + 0x16) + (longlong)iVar4 * 8) = local_2a8;
        }
        if (local_220 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        uVar17 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar17;
        uVar21 = uVar21 + 0x10;
      } while ((int)uVar17 < (int)local_200[1]);
    }
    local_210[0] = 0;
    local_210[1] = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_210,0);
    FGenericPlatformString::Memcpy(local_210[0],L"EpicSampleNameHash",0x26);
    FUN_1416b3bf0(param_2,local_210,param_1 + 0x1a);
    if (local_210[0] != 0) {
      FMemory::Free();
    }
    local_1f8[0] = 0;
    local_1f8[1] = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1f8,0);
    lVar12 = local_1f8[0];
    FGenericPlatformString::Memcpy(local_1f8[0],L"PreBuildSteps",0x1c);
    FUN_1416bf080(param_1 + 0x1c,param_2,local_1f8);
    if (lVar12 != 0) {
      FMemory::Free(lVar12);
    }
    local_2b8 = (undefined4 *)0x0;
    puStack_2b0 = (ulonglong *)0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,0);
    puVar7 = local_2b8;
    FGenericPlatformString::Memcpy(local_2b8,L"PostBuildSteps",0x1e);
    FUN_1416bf080(param_1 + 0x30,param_2,&local_2b8);
    if (puVar7 != (undefined4 *)0x0) {
      FMemory::Free(puVar7);
    }
    return 1;
  }
  FString::PrintfImpl(local_1d8,&DAT_144ce18c4);
  FText::FromString(local_148,local_1d8);
  if (local_1d8[0] != 0) {
    FMemory::Free();
  }
  FString::PrintfImpl(local_1c8,&DAT_144ce1f04,3);
  FText::FromString(local_160,local_1c8);
  if (local_1c8[0] != 0) {
    FMemory::Free();
  }
  lVar12 = FText::FText(local_d8,local_160);
  local_1e0 = lVar12;
  lVar13 = FText::FText(local_c0,local_148);
  uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (local_100,
                      L"File appears to be in a newer version ({0}) of the file format that we can load (max version: {1})."
                      ,L"ProjectDescriptor",L"ProjectFileVersionTooLarge");
  puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_e8,uVar10);
  local_a8[0] = 4;
  FText::FText(local_98,lVar13);
  local_80 = 1;
  local_78 = 4;
  FText::FText(local_68,lVar12);
  local_2b8 = local_a8;
  local_50 = 1;
  puStack_2b0 = local_48;
  local_1b8 = *puVar11;
  local_1b0 = puVar11[1];
  if (local_1b0 != 0) {
    LOCK();
    *(int *)(local_1b0 + 8) = *(int *)(local_1b0 + 8) + 1;
    UNLOCK();
  }
  local_198 = local_2b8;
  uStack_190 = puStack_2b0;
  uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
           TArray<FFormatArgumentValue,FDefaultAllocator>(local_188,&local_198);
  uVar10 = FText::Format(local_118,&local_1b8,uVar10);
  FText::FText(local_178,uVar10);
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_110 + 1;
    lVar12 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar3 = (int *)((longlong)local_110 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_188);
  lVar12 = 2;
  pcVar19 = &stack0xffffffffffffffe0;
  do {
    lVar12 = lVar12 + -1;
    pcVar1 = pcVar19 + -0x30;
    if (*pcVar1 != '\0') {
      *pcVar1 = '\0';
      plVar5 = *(longlong **)(pcVar19 + -0x40);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
    pcVar19 = pcVar1;
  } while (lVar12 != 0);
  plVar5 = (longlong *)puVar11[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(lVar13 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = *(longlong **)(local_1e0 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  FText::operator=(param_4,local_178);
  if (local_170 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_170 + 1;
    lVar12 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_170)(local_170);
      LOCK();
      piVar3 = (int *)((longlong)local_170 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_170 + 8))(local_170,1);
      }
    }
  }
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_f8 + 1;
    lVar12 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar3 = (int *)((longlong)local_f8 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_f8 + 8))(local_f8,1);
      }
    }
  }
  if (local_158 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_158 + 1;
    lVar12 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar3 = (int *)((longlong)local_158 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_158 + 8))(local_158,1);
      }
    }
  }
joined_r0x0001416c349c:
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_140 + 1;
    lVar12 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar3 = (int *)((longlong)local_140 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_140 + 8))(local_140,1);
      }
    }
  }
  return 0;
}



// FUNCTION 1416c3500 FUN_1416c3500 body=2105 status=ok
// SIG undefined FUN_1416c3500(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416c3500(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  uint uVar10;
  undefined2 *puVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  short *psVar16;
  longlong *plVar17;
  undefined2 *puVar18;
  uint *puVar19;
  uint uVar20;
  longlong *plVar21;
  wchar_t *pwVar22;
  longlong lVar23;
  undefined1 auStack_1218 [32];
  undefined2 *local_11f8;
  int local_11e8;
  int local_11e4;
  longlong *local_11e0;
  undefined8 local_11d8;
  longlong local_11d0;
  undefined2 *local_11c8;
  ulonglong local_11c0;
  longlong *local_11b8;
  undefined8 local_11b0;
  uint local_11a8;
  uint uStack_11a4;
  uint *puStack_11a0;
  undefined4 local_1198;
  uint uStack_1194;
  uint uStack_1190;
  undefined4 uStack_118c;
  longlong *local_1188;
  longlong *local_1180;
  longlong *local_1170;
  longlong *local_1168;
  undefined8 local_1160;
  longlong *local_1158;
  undefined8 local_1150;
  longlong *plStack_1148;
  uint *puStack_1140;
  uint uStack_1138;
  uint uStack_1134;
  undefined8 uStack_1130;
  undefined4 local_1128;
  undefined4 uStack_1124;
  uint uStack_1120;
  uint uStack_111c;
  uint *local_1118;
  uint uStack_1110;
  uint uStack_110c;
  undefined8 local_1108;
  undefined **local_1100;
  longlong **local_10f8;
  longlong local_10f0 [2];
  longlong local_10e0 [2];
  longlong local_10d0 [4];
  uint local_10b0;
  uint uStack_10ac;
  longlong local_10a0 [2];
  longlong local_1090 [2];
  longlong local_1080 [2];
  longlong local_1070 [2];
  longlong local_1060 [2];
  longlong local_1050 [3];
  wchar_t local_1038 [1024];
  wchar_t local_838 [1024];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1218;
  local_1160 = param_1;
  local_1158 = param_2;
  plVar5 = (longlong *)IProjectManager::Get();
  local_11d0 = (**(code **)(*plVar5 + 8))(plVar5);
  puVar9 = (undefined2 *)0x0;
  local_11e0 = (longlong *)0x0;
  local_11d8 = 0;
  uVar20 = 0;
  if (local_11d0 == 0) {
LAB_1416c3b34:
    lVar13 = local_11d0;
    uVar8 = FPaths::EngineContentDir(local_1090);
    FUN_1416c43f0(uVar8,0,param_1);
    if (local_1090[0] != 0) {
      FMemory::Free();
    }
    if (lVar13 == 0) goto LAB_1416c3a82;
    uVar8 = FPaths::ProjectContentDir(local_1080);
    FUN_1416c43f0(uVar8,2,param_1);
    if (local_1080[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    puVar6 = (undefined8 *)FPaths::ProjectContentDir(local_10a0);
    if (*(int *)(puVar6 + 1) == 0) {
      psVar16 = &DAT_143f3eda8;
    }
    else {
      psVar16 = (short *)*puVar6;
    }
    local_11c8 = (undefined2 *)0x0;
    local_11c0 = 0;
    puVar18 = puVar9;
    if ((psVar16 != (short *)0x0) && (*psVar16 != 0)) {
      lVar13 = -1;
      do {
        lVar13 = lVar13 + 1;
      } while (psVar16[lVar13] != 0);
      uVar12 = (int)lVar13 + 1;
      local_11c0 = (ulonglong)uVar12;
      uVar20 = uVar12;
      if (0 < (int)uVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_11c8,0);
        uVar20 = (uint)local_11c0;
      }
      puVar18 = local_11c8;
      FGenericPlatformString::Memcpy(local_11c8,psVar16,(longlong)(int)uVar12 * 2);
    }
    local_1100 = &PTR_FUN_144ce40a0;
    local_10f8 = &local_11e0;
    plVar5 = (longlong *)FUN_1415c3d50();
    puVar11 = &DAT_143f3eda8;
    if (uVar20 != 0) {
      puVar11 = puVar18;
    }
    (**(code **)(*plVar5 + 0x88))(plVar5,puVar11,&local_1100);
    if (puVar18 != (undefined2 *)0x0) {
      FMemory::Free(puVar18);
    }
    if (local_10a0[0] != 0) {
      FMemory::Free();
    }
    if ((int)local_11d8 == 0) goto LAB_1416c3b34;
    plVar5 = local_11e0 + (longlong)(int)local_11d8 * 2;
    local_1180 = local_11e0;
    plVar15 = local_11e0;
    lVar13 = local_11d0;
    local_1188 = plVar5;
    if (local_11e0 != plVar5) {
      do {
        local_11b8 = (longlong *)0x0;
        local_11b0 = 0;
        local_1180 = plVar15;
        FText::FText(&local_1150);
        cVar4 = FUN_1416bc390(&local_11b8,plVar15,&local_1150);
        if (cVar4 == '\0') {
          puVar6 = (undefined8 *)FText::ToString(&local_1150);
          if (*(int *)(puVar6 + 1) == 0) {
            puVar18 = &DAT_143f3eda8;
          }
          else {
            puVar18 = (undefined2 *)*puVar6;
          }
          LowLevelFatalErrorHandler("Unknown",0x110,&DAT_144cde564,puVar18);
          puVar6 = (undefined8 *)FText::ToString(&local_1150);
          if (*(int *)(puVar6 + 1) == 0) {
            local_11f8 = &DAT_143f3eda8;
          }
          else {
            local_11f8 = (undefined2 *)*puVar6;
          }
          FDebug::AssertFailed(&DAT_144cde2ef,"Unknown",0x110,&DAT_144cde644);
        }
        local_1168 = local_11b8;
        plVar17 = local_11b8 + (longlong)(int)local_11b0 * 0x34;
        local_1170 = plVar17;
        if (local_11b8 != plVar17) {
          plVar21 = local_11b8 + 0x19;
          do {
            lVar13 = *plVar21;
            lVar23 = (longlong)(int)plVar21[1] * 0x80 + lVar13;
            plVar5 = local_1188;
            plVar15 = local_1180;
            param_1 = local_1160;
            for (; local_1188 = plVar5, local_1180 = plVar15, local_1160 = param_1, lVar13 != lVar23
                ; lVar13 = lVar13 + 0x80) {
              pbVar7 = (byte *)FName::GetComparisonNameEntry(lVar13);
              if (pbVar7 == (byte *)0x0) {
LAB_1416c37ec:
                pbVar7 = (byte *)FName::GetComparisonNameEntry(lVar13);
                if (pbVar7 != (byte *)0x0) {
                  local_11e4 = 0;
                  pwVar22 = L"PS4MoviePlayer";
                  cVar4 = FName::SplitNameWithCheck(L"PS4MoviePlayer",local_838,0x400,&local_11e4);
                  iVar14 = 0;
                  if (cVar4 != '\0') {
                    pwVar22 = local_838;
                    iVar14 = local_11e4 + 1;
                  }
                  if (iVar14 == *(int *)(lVar13 + 4)) {
                    if ((*pbVar7 & 1) == 0) {
                      iVar14 = FGenericPlatformStricmp::Stricmp<wchar_t,char>(pwVar22,pbVar7 + 0x10)
                      ;
                    }
                    else {
                      iVar14 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>();
                    }
                    if (iVar14 == 0) goto LAB_1416c3860;
                  }
                }
              }
              else {
                local_11e8 = 0;
                pwVar22 = L"PS4Media";
                cVar4 = FName::SplitNameWithCheck(L"PS4Media",local_1038,0x400,&local_11e8);
                iVar14 = 0;
                if (cVar4 != '\0') {
                  pwVar22 = local_1038;
                  iVar14 = local_11e8 + 1;
                }
                if (iVar14 != *(int *)(lVar13 + 4)) goto LAB_1416c37ec;
                if ((*pbVar7 & 1) == 0) {
                  iVar14 = FGenericPlatformStricmp::Stricmp<wchar_t,char>(pwVar22,pbVar7 + 0x10);
                }
                else {
                  iVar14 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>();
                }
                if (iVar14 != 0) goto LAB_1416c37ec;
LAB_1416c3860:
                *(undefined4 *)(lVar13 + 0xc) = 1;
              }
              plVar17 = local_1170;
              plVar5 = local_1188;
              plVar15 = local_1180;
              param_1 = local_1160;
            }
            plVar3 = plVar21 + 0x1b;
            plVar21 = plVar21 + 0x34;
          } while (plVar3 != plVar17);
        }
        plVar21 = local_1168;
        FPaths::EngineDir(local_10d0);
        FPaths::EnterpriseDir(local_10e0);
        FPaths::ProjectModsDir(local_10f0);
        for (; plVar21 != plVar17; plVar21 = plVar21 + 0x34) {
          cVar4 = FString::StartsWith(plVar21,local_10d0,1);
          puVar18 = puVar9;
          if (cVar4 == '\0') {
            cVar4 = FString::StartsWith(plVar21,local_10e0,1);
            puVar18 = (undefined2 *)0x1;
            if (cVar4 == '\0') {
              cVar4 = FString::StartsWith(plVar21,local_10f0,1);
              puVar18 = (undefined2 *)0x2;
              if (cVar4 != '\0') {
                puVar18 = (undefined2 *)0x4;
              }
            }
          }
          FUN_1416b9fa0(plVar21,plVar21 + 2,puVar18,param_1);
          plVar5 = local_1188;
        }
        if (local_10f0[0] != 0) {
          FMemory::Free();
        }
        if (local_10e0[0] != 0) {
          FMemory::Free();
        }
        if (local_10d0[0] != 0) {
          FMemory::Free();
        }
        plVar17 = plStack_1148;
        if (plStack_1148 != (longlong *)0x0) {
          LOCK();
          plVar21 = plStack_1148 + 1;
          lVar13 = *plVar21;
          *(int *)plVar21 = (int)*plVar21 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plStack_1148)(plStack_1148);
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*plVar17 + 8))(plVar17,1);
            }
          }
        }
        FUN_1416b5e70(&local_11b8);
        plVar15 = plVar15 + 2;
        lVar13 = local_11d0;
        param_2 = local_1158;
        local_1180 = plVar15;
      } while (plVar15 != plVar5);
    }
  }
  uVar8 = FPaths::ProjectModsDir(local_1070);
  FUN_1416c43f0(uVar8,4,param_1);
  if (local_1070[0] != 0) {
    FMemory::Free();
  }
  lVar23 = *(longlong *)(lVar13 + 0x118);
  lVar13 = (longlong)*(int *)(lVar13 + 0x120) * 0x10 + lVar23;
  for (; lVar23 != lVar13; lVar23 = lVar23 + 0x10) {
    FUN_1416c43f0(lVar23,3,param_1);
  }
  uVar8 = FPaths::EnterprisePluginsDir(local_1060);
  cVar4 = FPaths::DirectoryExists(uVar8);
  if (local_1060[0] != 0) {
    FMemory::Free();
  }
  if (cVar4 != '\0') {
    uVar8 = FPaths::EnterprisePluginsDir(local_1050);
    FUN_1416c43f0(uVar8,1,param_1);
    if (local_1050[0] != 0) {
      FMemory::Free();
    }
  }
LAB_1416c3a82:
  uVar20 = *(uint *)(param_2 + 5);
  puVar2 = (uint *)(param_2 + 2);
  local_11a8 = 0;
  uStack_11a4 = 1;
  uStack_1194 = 0;
  uStack_1190 = 0;
  if (uVar20 != 0) {
    puVar19 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar19 = puVar2;
    }
    uVar12 = *puVar19;
    puVar18 = puVar9;
    while (uVar12 == 0) {
      iVar14 = (int)puVar9;
      uStack_1190 = (int)puVar18 + 0x20;
      puVar18 = (undefined2 *)(ulonglong)uStack_1190;
      local_11a8 = iVar14 + 1;
      puVar9 = (undefined2 *)(ulonglong)local_11a8;
      if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar14)
      goto LAB_1416c3bb0;
      uVar12 = puVar19[(longlong)iVar14 + 1];
    }
    uStack_11a4 = -uVar12 & uVar12;
    iVar14 = 0x1f;
    if (uStack_11a4 != 0) {
      for (; uStack_11a4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uStack_11a4 == 0) {
      iVar14 = 0x20;
    }
    else {
      iVar14 = 0x1f - iVar14;
    }
    uStack_1194 = (uStack_1190 - iVar14) + 0x1f;
    if ((int)uVar20 < (int)uStack_1194) {
LAB_1416c3bb0:
      uStack_1194 = uVar20;
    }
  }
  local_1198 = 0xffffffff;
  uStack_10ac = *(uint *)(param_2 + 5);
  plStack_1148 = (longlong *)CONCAT44(uStack_11a4,local_11a8);
  uStack_1110 = 0xffffffff;
  uStack_110c = uStack_1194;
  uStack_1130 = CONCAT44(uStack_118c,uStack_1190);
  local_10b0 = -1 << ((byte)uStack_10ac & 0x1f);
  local_1150._0_4_ = SUB84(param_2,0);
  local_1150._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar12 = uStack_10ac & 0xffffffe0;
  local_1128 = (undefined4)local_1150;
  uStack_1124 = local_1150._4_4_;
  uStack_1120 = local_11a8;
  uStack_111c = uStack_11a4;
  puStack_11a0 = puVar2;
  local_1150 = param_2;
  puStack_1140 = puVar2;
  local_1118 = puVar2;
  local_1108 = uStack_1130;
  uStack_1138 = uStack_1110;
  uStack_1134 = uStack_110c;
  uVar10 = uStack_10ac;
  if (uStack_10ac != uVar20) {
    puVar19 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar19 = puVar2;
    }
    uVar10 = puVar19[(int)uStack_10ac >> 5] & local_10b0;
    iVar14 = (int)uStack_10ac >> 5;
    while (uVar10 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar14)
      goto LAB_1416c3c72;
      uVar10 = puVar19[(longlong)iVar14 + 1];
      local_10b0 = 0xffffffff;
      iVar14 = iVar14 + 1;
    }
    uVar10 = -uVar10 & uVar10;
    iVar14 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar14 = 0x20;
    }
    else {
      iVar14 = 0x1f - iVar14;
    }
    uStack_10ac = (uVar12 - iVar14) + 0x1f;
    uVar10 = uStack_10ac;
    if ((int)uVar20 < (int)uStack_10ac) {
LAB_1416c3c72:
      uStack_10ac = uVar20;
      uVar10 = uVar20;
    }
  }
  while( true ) {
    if (((uStack_110c == uVar10) && (local_1118 == puVar2)) &&
       ((longlong *)CONCAT44(uStack_1124,local_1128) == param_2)) break;
    FUN_1416c43f0(*(longlong *)CONCAT44(uStack_1124,local_1128) + (longlong)(int)uStack_110c * 0x18,
                  3,param_1);
    uStack_1110 = uStack_1110 & ~uStack_111c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1120);
  }
  plVar5 = local_11e0;
  for (iVar14 = (int)local_11d8; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_11e0 != (longlong *)0x0) {
    FMemory::Free(local_11e0);
  }
  return;
}



// FUNCTION 1416c3d40 FUN_1416c3d40 body=556 status=ok
// SIG undefined FUN_1416c3d40(void)

undefined8 FUN_1416c3d40(undefined8 param_1,short *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  
  local_78 = 0;
  local_70 = 0;
  uVar8 = 1;
  lVar10 = -1;
  lVar12 = 0;
  if ((param_2 != (short *)0x0) && (lVar12 = 0, *param_2 != 0)) {
    do {
      lVar10 = lVar10 + 1;
    } while (param_2[lVar10] != 0);
    uVar9 = (int)lVar10 + 1;
    local_70 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    }
    lVar12 = local_78;
    FGenericPlatformString::Memcpy(local_78,param_2,(longlong)(int)uVar9 * 2);
  }
  FUN_1416b39b0(param_1,&local_68,&local_78);
  if (lVar12 != 0) {
    FMemory::Free(lVar12);
  }
  if ((local_68 != 0) && (*(int *)(local_68 + 8) == 5)) {
    plVar6 = (longlong *)FJsonValue::AsArray();
    plVar11 = (longlong *)*plVar6;
    plVar6 = plVar11 + (longlong)(int)plVar6[1] * 2;
    for (; plVar11 != plVar6; plVar11 = plVar11 + 2) {
      puVar7 = (undefined8 *)*plVar11;
      if ((puVar7 == (undefined8 *)0x0) || (*(int *)(puVar7 + 1) != 6)) {
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_40,
                           L"The \'Localization Targets\' array has invalid contents and was not able to be loaded."
                           ,L"LocalizationDescriptor",L"TargetWithInvalidTargetsArray");
        FText::operator=(param_4,uVar8);
        plVar4 = local_38;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_38 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_38)(local_38);
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
        uVar8 = 0;
      }
      else {
        local_58 = 0;
        local_50 = 0;
        local_48 = 0;
        puVar7 = (undefined8 *)(**(code **)*puVar7)();
        cVar5 = FUN_1416bf420(&local_58,*puVar7,param_4);
        if (cVar5 == '\0') {
          uVar8 = 0;
        }
        else {
          iVar3 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar3 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar3 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(param_3,iVar3);
          }
          lVar10 = *param_3 + (longlong)iVar3 * 0x18;
          FString::FString(lVar10,&local_58);
          *(undefined4 *)(lVar10 + 0x10) = local_48;
        }
        if (local_58 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  plVar11 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_60 + 1;
    lVar10 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return uVar8;
}



// FUNCTION 1416c3f70 FUN_1416c3f70 body=676 status=ok
// SIG undefined FUN_1416c3f70(void)

undefined8 FUN_1416c3f70(undefined8 param_1,short *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  local_f8 = 0;
  local_f0 = 0;
  uVar8 = 1;
  lVar10 = -1;
  lVar11 = 0;
  if ((param_2 != (short *)0x0) && (lVar11 = 0, *param_2 != 0)) {
    do {
      lVar10 = lVar10 + 1;
    } while (param_2[lVar10] != 0);
    uVar9 = (int)lVar10 + 1;
    local_f0 = (ulonglong)uVar9;
    if (0 < (int)uVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    }
    lVar11 = local_f8;
    FGenericPlatformString::Memcpy(local_f8,param_2,(longlong)(int)uVar9 * 2);
  }
  FUN_1416b39b0(param_1,&local_e8,&local_f8);
  if (lVar11 != 0) {
    FMemory::Free(lVar11);
  }
  if ((local_e8 != 0) && (*(int *)(local_e8 + 8) == 5)) {
    plVar6 = (longlong *)FJsonValue::AsArray();
    uVar12 = 0;
    uVar13 = uVar12;
    if (0 < (int)plVar6[1]) {
      do {
        puVar7 = *(undefined8 **)(uVar12 + *plVar6);
        if ((puVar7 == (undefined8 *)0x0) || (*(int *)(puVar7 + 1) != 6)) {
          uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_58,
                             L"The \'Modules\' array has invalid contents and was not able to be loaded."
                             ,L"ModuleDescriptor",L"ModuleWithInvalidModulesArray");
          FText::operator=(param_4,uVar8);
          plVar2 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_50 + 1;
            lVar10 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar3 = (int *)((longlong)plVar2 + 0xc);
              iVar4 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar2 + 8))(plVar2,1);
              }
            }
          }
          uVar8 = 0;
        }
        else {
          local_d0 = 0;
          local_cc = 4;
          local_c8 = 0;
          local_c0 = 0;
          local_b8 = 0;
          local_b0 = 0;
          local_a8 = 0;
          local_a0 = 0;
          local_98 = 0;
          local_90 = 0;
          local_88 = 0;
          local_80 = 0;
          local_78 = 0;
          local_70 = 0;
          local_68 = 0;
          local_60 = 0;
          local_d8 = 0;
          puVar7 = (undefined8 *)(**(code **)*puVar7)();
          cVar5 = FUN_1416bfa50(&local_d8,*puVar7,param_4);
          if (cVar5 == '\0') {
            uVar8 = 0;
            FUN_1416b6100(&local_d8);
          }
          else {
            iVar4 = (int)param_3[1];
            *(int *)(param_3 + 1) = iVar4 + 1;
            if (*(int *)((longlong)param_3 + 0xc) < iVar4 + 1) {
              TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
                        (param_3,iVar4);
            }
            FModuleDescriptor::FModuleDescriptor((longlong)iVar4 * 0x80 + *param_3,&local_d8);
            FUN_1416b6100(&local_d8);
          }
        }
        uVar9 = (int)uVar13 + 1;
        uVar12 = uVar12 + 0x10;
        uVar13 = (ulonglong)uVar9;
      } while ((int)uVar9 < (int)plVar6[1]);
    }
  }
  plVar6 = local_e0;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_e0 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_e0 + 8))(local_e0,1);
      }
    }
  }
  return uVar8;
}



// FUNCTION 1416c4220 ReadArray body=460 status=ok
// SIG undefined ReadArray(void)

undefined8
FPluginReferenceDescriptor::ReadArray
          (undefined8 param_1,short *param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_res10;
  undefined8 *local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined2 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_e0 = 0;
  local_e8 = (undefined8 *)0x0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (param_2[lVar5] != 0);
    uVar4 = (int)lVar5 + 1;
    local_e0 = (ulonglong)uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
    }
    FGenericPlatformString::Memcpy(local_e8,param_2,(longlong)(int)uVar4 * 2);
  }
  cVar3 = FUN_1416b3850(param_1,&local_e8,&local_res10);
  if (local_e8 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if (cVar3 != '\0') {
    plVar6 = (longlong *)*local_res10;
    plVar7 = plVar6 + (longlong)(int)local_res10[1] * 2;
    for (; plVar6 != plVar7; plVar6 = plVar6 + 2) {
      plVar2 = (longlong *)*plVar6;
      if ((plVar2 != (longlong *)0x0) &&
         (cVar3 = (**(code **)(*plVar2 + 0x28))(plVar2,&local_e8), cVar3 != '\0')) {
        local_d8 = 0;
        local_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_b8 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_a0 = 0;
        local_98 = 0;
        local_90 = 0;
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        local_70 = 0;
        local_68 = 0;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        local_48 = 0;
        local_40 = 0;
        local_38 = 0;
        cVar3 = Read(&local_d8,*local_e8,param_4);
        if (cVar3 == '\0') {
          ~FPluginReferenceDescriptor(&local_d8);
          return 0;
        }
        iVar1 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
          TArray<FGeometryCacheMeshData,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
        }
        FPluginReferenceDescriptor((longlong)iVar1 * 0xa8 + *param_3,&local_d8);
        ~FPluginReferenceDescriptor(&local_d8);
      }
    }
  }
  return 1;
}



// FUNCTION 1416c43f0 FUN_1416c43f0 body=1806 status=ok
// SIG undefined FUN_1416c43f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416c43f0(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  undefined2 *puVar16;
  longlong *plVar17;
  undefined1 auStack_398 [32];
  undefined4 local_378;
  longlong *local_370;
  ulonglong local_368;
  longlong *local_360;
  undefined8 local_358;
  undefined4 *local_348;
  undefined1 *puStack_340;
  undefined8 local_338;
  longlong local_330;
  longlong local_328 [2];
  undefined1 local_318 [8];
  longlong *local_310;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [8];
  longlong *local_2d0;
  undefined1 local_2c0 [8];
  longlong *local_2b8;
  undefined1 local_2a8 [8];
  longlong *local_2a0;
  undefined1 local_290 [8];
  longlong *local_288;
  undefined1 local_278 [16];
  undefined1 local_268 [24];
  undefined1 local_250 [24];
  undefined4 local_238 [4];
  undefined1 local_228 [24];
  undefined1 local_210;
  undefined4 local_208;
  undefined1 local_1f8 [24];
  undefined1 local_1e0;
  undefined1 local_1d8 [8];
  longlong local_1d0;
  longlong local_1c0;
  longlong local_1b0 [2];
  longlong local_1a0;
  longlong local_190;
  longlong local_180;
  longlong local_170;
  longlong local_160;
  longlong local_150;
  longlong local_140;
  longlong *local_130;
  int local_128;
  undefined1 local_120 [16];
  longlong *local_110;
  int local_108;
  longlong local_f8 [4];
  longlong local_d8;
  longlong local_b8;
  undefined4 local_b0;
  longlong local_a8 [4];
  longlong local_88;
  longlong local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_398;
  local_378 = param_2;
  local_358 = param_3;
  uVar5 = FPlatformFileManager::Get();
  plVar6 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar5);
  puVar16 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*param_1;
  }
  cVar4 = (**(code **)(*plVar6 + 0xd0))(plVar6,puVar10);
  if (cVar4 != '\0') {
    local_370 = (longlong *)0x0;
    local_368 = 0;
    uVar5 = FPlatformFileManager::Get();
    plVar6 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar5);
    if (*(int *)(param_1 + 1) != 0) {
      puVar16 = (undefined2 *)*param_1;
    }
    (**(code **)(*plVar6 + 0x140))(plVar6,&local_370,puVar16,L".uplugin");
    uVar12 = (ulonglong)(int)local_368;
    plVar6 = local_370 + uVar12 * 2;
    plVar17 = local_370;
    local_360 = plVar6;
    if (local_370 != plVar6) {
      do {
        FUN_1416b5310(local_1d8);
        FText::FText(local_318);
        cVar4 = FPluginDescriptor::Load(local_1d8,plVar17,local_318);
        if (cVar4 == '\0') {
          FPaths::ConvertRelativePathToFull(local_328,plVar17);
          lVar7 = FText::FromString(local_268,local_328);
          lVar8 = FText::FText(local_250,local_318);
          uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_290,L"{0} ({1})",L"PluginManager",L"FailureFormat");
          puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_278,uVar5);
          local_238[0] = 4;
          FText::FText(local_228,lVar8);
          local_210 = 1;
          local_208 = 4;
          FText::FText(local_1f8,lVar7);
          local_348 = local_238;
          local_1e0 = 1;
          puStack_340 = local_1d8;
          local_338 = *puVar9;
          local_330 = puVar9[1];
          if (local_330 != 0) {
            LOCK();
            *(int *)(local_330 + 8) = *(int *)(local_330 + 8) + 1;
            UNLOCK();
          }
          local_2f8 = local_348;
          uStack_2f0 = puStack_340;
          uVar5 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                  TArray<FFormatArgumentValue,FDefaultAllocator>(local_2e8,&local_2f8);
          uVar5 = FText::Format(local_2a8,&local_338,uVar5);
          FText::FText(local_2c0,uVar5);
          plVar6 = local_2a0;
          if (local_2a0 != (longlong *)0x0) {
            LOCK();
            plVar13 = local_2a0 + 1;
            lVar14 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*local_2a0)(local_2a0);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              iVar15 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_2e8);
          lVar14 = 2;
          plVar6 = local_1b0;
          do {
            lVar14 = lVar14 + -1;
            plVar13 = plVar6 + -6;
            if ((char)*plVar13 != '\0') {
              *(char *)plVar13 = '\0';
              plVar6 = (longlong *)plVar6[-8];
              if (plVar6 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar6 + 1;
                lVar3 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar3 == 1) {
                  (**(code **)*plVar6)(plVar6);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar6 + 0xc);
                  iVar15 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar15 == 1) {
                    (**(code **)(*plVar6 + 8))(plVar6,1);
                  }
                }
              }
            }
            plVar6 = plVar13;
          } while (lVar14 != 0);
          plVar6 = (longlong *)puVar9[1];
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar6 + 1;
            lVar14 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              iVar15 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
            }
          }
          plVar6 = *(longlong **)(lVar8 + 8);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar6 + 1;
            lVar8 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              iVar15 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
            }
          }
          plVar6 = *(longlong **)(lVar7 + 8);
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar6 + 1;
            lVar7 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              iVar15 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
            }
          }
          plVar6 = local_288;
          if (local_288 != (longlong *)0x0) {
            LOCK();
            plVar13 = local_288 + 1;
            lVar7 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_288)(local_288);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              iVar15 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
            }
          }
          FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_2d8,L"Failed to load Plugin",L"PluginManager",L"PluginFailureTitle");
          FUN_1416786b0(0,local_2c0,local_2d8);
          plVar6 = local_2d0;
          if (local_2d0 != (longlong *)0x0) {
            LOCK();
            plVar13 = local_2d0 + 1;
            lVar7 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_2d0)(local_2d0);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              iVar15 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
            }
          }
          plVar6 = local_2b8;
          if (local_2b8 != (longlong *)0x0) {
            LOCK();
            plVar13 = local_2b8 + 1;
            lVar7 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_2b8)(local_2b8);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              iVar15 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*plVar6 + 8))(plVar6,1);
              }
            }
          }
          plVar6 = local_360;
          param_3 = local_358;
          param_2 = local_378;
          if (local_328[0] != 0) {
            FMemory::Free();
            plVar6 = local_360;
            param_3 = local_358;
            param_2 = local_378;
          }
        }
        else {
          FUN_1416b9fa0(plVar17,local_1d8,param_2,param_3);
        }
        plVar13 = local_310;
        if (local_310 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_310 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_310)(local_310);
            LOCK();
            piVar2 = (int *)((longlong)plVar13 + 0xc);
            iVar15 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar15 == 1) {
              (**(code **)(*plVar13 + 8))(plVar13,1);
            }
          }
        }
        TArray<FPluginReferenceDescriptor,FDefaultAllocator>::
        ~TArray<FPluginReferenceDescriptor,FDefaultAllocator>(local_58);
        local_60 = 0;
        if (local_68 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FString,TArray<FString,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::Empty(local_a8,0);
        if (local_88 != 0) {
          FMemory::Free();
        }
        if (local_a8[0] != 0) {
          FMemory::Free();
        }
        local_b0 = 0;
        if (local_b8 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FString,TArray<FString,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::Empty(local_f8,0);
        if (local_d8 != 0) {
          FMemory::Free();
        }
        plVar13 = local_110;
        iVar15 = local_108;
        if (local_f8[0] != 0) {
          FMemory::Free();
          plVar13 = local_110;
          iVar15 = local_108;
        }
        for (; iVar15 != 0; iVar15 = iVar15 + -1) {
          if (*plVar13 != 0) {
            FMemory::Free();
          }
          plVar13 = plVar13 + 3;
        }
        if (local_110 != (longlong *)0x0) {
          FMemory::Free(local_110);
        }
        TArray<FModuleDescriptor,FDefaultAllocator>::~TArray<FModuleDescriptor,FDefaultAllocator>
                  (local_120);
        plVar13 = local_130;
        for (iVar15 = local_128; iVar15 != 0; iVar15 = iVar15 + -1) {
          if (*plVar13 != 0) {
            FMemory::Free();
          }
          plVar13 = plVar13 + 2;
        }
        if (local_130 != (longlong *)0x0) {
          FMemory::Free(local_130);
        }
        if (local_140 != 0) {
          FMemory::Free();
        }
        if (local_150 != 0) {
          FMemory::Free();
        }
        if (local_160 != 0) {
          FMemory::Free();
        }
        if (local_170 != 0) {
          FMemory::Free();
        }
        if (local_180 != 0) {
          FMemory::Free();
        }
        if (local_190 != 0) {
          FMemory::Free();
        }
        if (local_1a0 != 0) {
          FMemory::Free();
        }
        if (local_1b0[0] != 0) {
          FMemory::Free();
        }
        if (local_1c0 != 0) {
          FMemory::Free();
        }
        if (local_1d0 != 0) {
          FMemory::Free();
        }
        plVar17 = plVar17 + 2;
      } while (plVar17 != plVar6);
      uVar12 = local_368 & 0xffffffff;
    }
    uVar11 = (uint)uVar12;
    plVar6 = local_370;
    while (uVar11 != 0) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
      uVar11 = (int)uVar12 - 1;
      uVar12 = (ulonglong)uVar11;
    }
    if (local_370 != (longlong *)0x0) {
      FMemory::Free(local_370);
    }
  }
  return;
}



// FUNCTION 1416c4b00 FUN_1416c4b00 body=1183 status=ok
// SIG undefined FUN_1416c4b00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416c4b00(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  undefined1 auStack_158 [32];
  uint local_138;
  uint uStack_134;
  uint *puStack_130;
  int local_128;
  int iStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  undefined8 uStack_100;
  uint *puStack_f8;
  uint uStack_f0;
  int iStack_ec;
  undefined8 uStack_e8;
  undefined8 local_e0;
  longlong *local_d8;
  char local_d0;
  char cStack_cf;
  undefined1 local_c8 [8];
  longlong *local_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  uint *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 local_80;
  uint local_78 [4];
  uint *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar9 = (longlong *)0x0;
  local_58 = 0xffffffff;
  local_88 = 0;
  local_80 = 0;
  local_68 = (uint *)0x0;
  local_60 = 0;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  FUN_1416c3500(&local_88,param_1 + 0x80);
  local_108 = (longlong *)(param_1 + 8);
  local_118 = (longlong *)0x0;
  iVar13 = *(int *)(param_1 + 0x30);
  puStack_130 = (uint *)(param_1 + 0x18);
  local_110 = (longlong *)(ulonglong)(uint)local_110;
  local_138 = 0;
  uStack_134 = 1;
  iStack_124 = 0;
  uStack_120 = 0;
  if (iVar13 != 0) {
    puVar12 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar12 = puStack_130;
    }
    uVar14 = *puVar12;
    plVar5 = plVar9;
    plVar11 = plVar9;
    while (uVar14 == 0) {
      iVar4 = (int)plVar5;
      uStack_120 = (int)plVar11 + 0x20;
      plVar11 = (longlong *)(ulonglong)uStack_120;
      local_138 = iVar4 + 1;
      plVar5 = (longlong *)(ulonglong)local_138;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1416c4c2e;
      uVar14 = puVar12[(longlong)iVar4 + 1];
    }
    uStack_134 = -uVar14 & uVar14;
    iVar4 = 0x1f;
    if (uStack_134 != 0) {
      for (; uStack_134 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_134 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    iStack_124 = (uStack_120 - iVar4) + 0x1f;
    if (iVar13 < iStack_124) {
LAB_1416c4c2e:
      iStack_124 = iVar13;
    }
  }
  local_128 = 0xffffffff;
  auVar3._4_4_ = iStack_124;
  auVar3._0_4_ = 0xffffffff;
  auVar3._8_4_ = uStack_120;
  auVar3._12_4_ = uStack_11c;
  uStack_100 = CONCAT44(uStack_134,local_138);
  local_d0 = '\0';
  cStack_cf = '\0';
  uStack_90._0_4_ = SUB84(local_108,0);
  uStack_90._4_4_ = (undefined4)((ulonglong)local_108 >> 0x20);
  uStack_f0 = 0xffffffff;
  iStack_ec = iStack_124;
  uStack_e8 = auVar3._8_8_;
  auVar2._8_4_ = (undefined4)uStack_90;
  auVar2._0_8_ = uStack_e8;
  auVar2._12_4_ = uStack_90._4_4_;
  local_e0 = auVar2._8_8_;
  plVar11 = plVar9;
  plVar5 = plVar9;
  puStack_f8 = puStack_130;
  local_d8 = local_108;
  local_c0 = local_108;
  uStack_90 = local_108;
  if (iStack_124 < *(int *)(param_1 + 0x30)) {
    do {
      lVar1 = *(longlong *)(*local_108 + 0x10 + (longlong)iStack_ec * 0x28);
      if (*(char *)(lVar1 + 0x1bc) == '\0') {
        TSet<TTuple<FString,TArray<FString,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,FDefaultAllocator>,0>,FDefaultSetAllocator>
        ::Remove(local_e0,iStack_ec);
        local_d0 = '\x01';
      }
      else {
        iVar13 = (int)plVar11;
        uVar14 = iVar13 + 1;
        local_110 = (longlong *)CONCAT44(local_110._4_4_,uVar14);
        if ((int)plVar5 < (int)uVar14) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_118,plVar11);
          plVar5 = (longlong *)((ulonglong)local_110 >> 0x20);
          plVar9 = local_118;
          uVar14 = (uint)local_110;
        }
        plVar11 = (longlong *)(ulonglong)uVar14;
        FString::FString(plVar9 + (longlong)iVar13 * 2,lVar1 + 0x18);
      }
      uStack_f0 = uStack_f0 & ~uStack_100._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_100);
    } while (iStack_ec < (int)puStack_f8[6]);
    if ((local_d0 != '\0') && (cStack_cf != '\0')) {
      TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_d8,(int)local_d8[1] - *(int *)((longlong)local_d8 + 0x34),
                          CONCAT71((uint7)(uint3)((uint)iStack_ec >> 8),1));
    }
  }
  iVar13 = (int)local_60;
  puStack_130 = local_78;
  local_138 = 0;
  uStack_134 = 1;
  iStack_124 = 0;
  uStack_120 = 0;
  if ((int)local_60 != 0) {
    puVar12 = local_78;
    if (local_68 != (uint *)0x0) {
      puVar12 = local_68;
    }
    uVar14 = *puVar12;
    while (uVar14 == 0) {
      uStack_120 = uStack_120 + 0x20;
      if ((int)((int)local_60 + -1 + ((int)local_60 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_138) {
        iStack_124 = (int)local_60;
        local_138 = local_138 + 1;
        goto LAB_1416c4e07;
      }
      uVar14 = puVar12[(longlong)(int)local_138 + 1];
      local_138 = local_138 + 1;
    }
    uStack_134 = -uVar14 & uVar14;
    iVar4 = 0x1f;
    if (uStack_134 != 0) {
      for (; uStack_134 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_134 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    iStack_124 = (uStack_120 - iVar4) + 0x1f;
    if ((int)local_60 < iStack_124) {
      iStack_124 = (int)local_60;
    }
  }
LAB_1416c4e07:
  iStack_ec = iStack_124;
  uStack_a0 = CONCAT44(iStack_124,0xffffffff);
  uStack_e8 = CONCAT44(uStack_11c,uStack_120);
  local_108 = &local_88;
  uStack_b0 = CONCAT44(uStack_134,local_138);
  local_128 = -1 << ((byte)local_60 & 0x1f);
  iStack_124 = (int)local_60;
  uStack_100 = CONCAT44(uStack_134,local_138);
  uStack_f0 = 0xffffffff;
  puStack_f8 = puStack_130;
  local_b8 = local_108;
  puStack_a8 = puStack_130;
  uStack_98 = uStack_e8;
  do {
    uVar14 = (uint)plVar11;
    if (((iStack_ec == iVar13) && (puStack_f8 == local_78)) &&
       (plVar5 = plVar9, local_108 == &local_88)) {
      while (uVar14 != 0) {
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        uVar14 = (int)plVar11 - 1;
        plVar11 = (longlong *)(ulonglong)uVar14;
        plVar5 = plVar5 + 2;
      }
      if (plVar9 != (longlong *)0x0) {
        FMemory::Free(plVar9);
      }
      local_40 = 0;
      if (local_48 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_88);
      return;
    }
    lVar1 = (longlong)iStack_ec * 5 + 2;
    lVar10 = *(longlong *)(*local_108 + lVar1 * 8);
    plVar5 = (longlong *)(*local_108 + lVar1 * 8);
    plVar8 = plVar9;
    if (plVar9 != plVar9 + (longlong)(int)uVar14 * 2) {
      do {
        if (*(int *)(lVar10 + 0x20) == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = *(undefined2 **)(lVar10 + 0x18);
        }
        if ((int)plVar8[1] == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = (undefined2 *)*plVar8;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar7);
        if (iVar4 == 0) goto LAB_1416c4f0d;
        plVar8 = plVar8 + 2;
      } while (plVar8 != plVar9 + (longlong)(int)uVar14 * 2);
      lVar10 = *plVar5;
    }
    local_118 = (longlong *)(lVar10 + 8);
    local_110 = plVar5;
    FUN_1416b45a0(local_c0,local_c8,&local_118,0);
LAB_1416c4f0d:
    uStack_f0 = uStack_f0 & ~uStack_100._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_100);
  } while( true );
}



// FUNCTION 1416c4fa0 Remove body=170 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<FString,TArray<FString,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,FDefaultAllocator>,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar4 = *param_1;
    lVar1 = lVar4 + (longlong)param_2 * 0x28;
    lVar6 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar1 + 0x24));
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar2 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
    iVar3 = *(int *)((longlong)plVar5 + lVar6 * 4);
    while (iVar3 != -1) {
      if (iVar3 == param_2) {
        *puVar2 = *(undefined4 *)(lVar1 + 0x20);
        break;
      }
      lVar6 = (longlong)iVar3 * 5 + 4;
      puVar2 = (undefined4 *)(lVar4 + lVar6 * 8);
      iVar3 = *(int *)(lVar4 + lVar6 * 8);
    }
  }
  UE4Tuple_Private::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
  ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
            (*param_1 + (longlong)param_2 * 0x28);
  TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 1416c5050 RemoveAtImpl body=637 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FPluginReferenceDescriptor,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (longlong *)(*param_1 + (longlong)param_2 * 0xa8);
    plVar3 = plVar5 + 0x12;
    iVar2 = param_3;
    do {
      iVar4 = (int)plVar3[2];
      plVar1 = (longlong *)plVar3[1];
      if (iVar4 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar1 = (longlong *)plVar3[1];
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      iVar4 = (int)*plVar3;
      plVar1 = (longlong *)plVar3[-1];
      if (iVar4 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar1 = (longlong *)plVar3[-1];
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      iVar4 = (int)plVar3[-2];
      plVar1 = (longlong *)plVar3[-3];
      if (iVar4 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar1 = (longlong *)plVar3[-3];
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      iVar4 = (int)plVar3[-4];
      plVar1 = (longlong *)plVar3[-5];
      if (iVar4 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar1 = (longlong *)plVar3[-5];
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      iVar4 = (int)plVar3[-6];
      plVar1 = (longlong *)plVar3[-7];
      if (iVar4 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar1 = (longlong *)plVar3[-7];
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      iVar4 = (int)plVar3[-8];
      plVar1 = (longlong *)plVar3[-9];
      if (iVar4 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar1 = (longlong *)plVar3[-9];
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      iVar4 = (int)plVar3[-10];
      plVar1 = (longlong *)plVar3[-0xb];
      if (iVar4 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar1 = (longlong *)plVar3[-0xb];
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      if (plVar3[-0xd] != 0) {
        FMemory::Free();
      }
      if (plVar3[-0xf] != 0) {
        FMemory::Free();
      }
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 0x15;
      plVar3 = plVar3 + 0x15;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = (int)param_1[1];
    iVar4 = (iVar2 - param_2) - param_3;
    if (iVar4 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_2 * 0xa8 + *param_1),
                 (void *)((longlong)(param_3 + param_2) * 0xa8 + *param_1),(longlong)iVar4 * 0xa8);
      iVar2 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar2 - param_3;
    if (param_4 != '\0') {
      FUN_1416c54a0(param_1);
    }
  }
  return;
}



// FUNCTION 1416c52d0 RemovePluginReference body=304 status=ok
// SIG undefined RemovePluginReference(void)

ulonglong FProjectManager::RemovePluginReference
                    (longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_38,L"No project is currently loaded",L"ProjectManager",
                       L"NoProjectLoaded");
    uVar7 = FText::operator=(param_3,uVar6);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar4 = (int)lVar10 - 1;
      uVar7 = (ulonglong)uVar4;
      if (uVar4 == 0) {
        uVar7 = (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          uVar7 = (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    return uVar7 & 0xffffffffffffff00;
  }
  iVar12 = *(int *)(*(longlong *)(param_1 + 8) + 0x50) + -1;
  lVar10 = (longlong)iVar12;
  if (-1 < iVar12) {
    lVar11 = lVar10 * 0xa8;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
      if (*(int *)(param_2 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*param_2;
      }
      if (*(int *)(lVar11 + 8 + lVar3) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = *(undefined2 **)(lVar11 + lVar3);
      }
      iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
      if (iVar5 == 0) {
        TArray<FPluginReferenceDescriptor,FDefaultAllocator>::RemoveAtImpl
                  (*(longlong *)(param_1 + 8) + 0x48,iVar12,1,1);
        return 1;
      }
      iVar12 = iVar12 + -1;
      lVar11 = lVar11 + -0xa8;
      lVar10 = lVar10 + -1;
    } while (-1 < lVar10);
  }
  return 0;
}



// FUNCTION 1416c5400 ResizeGrow body=151 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FPluginStatus,FDefaultAllocator>::ResizeGrow(longlong *param_1)

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
  uVar4 = FMemory::QuantizeSize(lVar3 * 0x1b8,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x29e4129e4129e413) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 8);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x1b8,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 1416c54a0 FUN_1416c54a0 body=171 status=ok
// SIG undefined FUN_1416c54a0(void)

ulonglong FUN_1416c54a0(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)((longlong)param_1 + 0xc);
  iVar5 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar6 - iVar5);
  if ((0x3fff < uVar2 * 0xa8) || (uVar2 = (ulonglong)(uint)(iVar6 * 2), iVar5 * 3 < iVar6 * 2)) {
    if (0x40 < (uint)(iVar6 - iVar5)) {
      if (0 < iVar5) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar5 * 0xa8,0);
        iVar6 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        lVar4 = SUB168(ZEXT816(0x8618618618618619) * auVar1,8);
        uVar2 = SUB168(ZEXT816(0x8618618618618619) * auVar1,0);
        iVar5 = (int)((uVar3 - lVar4 >> 1) + lVar4 >> 7);
      }
      goto LAB_1416c551a;
    }
    if (iVar5 == 0) goto LAB_1416c551a;
  }
  iVar5 = iVar6;
LAB_1416c551a:
  if (iVar5 != iVar6) {
    *(int *)((longlong)param_1 + 0xc) = iVar5;
    if ((*param_1 != 0) || (iVar5 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0xa8,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 1416c5550 FUN_1416c5550 body=837 status=ok
// SIG undefined FUN_1416c5550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1416c5550(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  longlong local_128 [2];
  longlong *local_118;
  longlong *local_110;
  undefined4 *local_108;
  ulonglong *puStack_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_128[0] = 0;
  local_128[1] = 0;
  FUN_1404ae740(&local_118,local_128,0);
  FUN_1406d2fd0(local_118);
  FUN_1416c8c60(param_1,local_118);
  FUN_1406d2cf0(local_118);
  (**(code **)(*local_118 + 8))(local_118);
  plVar4 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*param_2;
  }
  uVar7 = FUN_1415c3d50();
  local_138 = 0;
  cVar6 = FUN_14167efa0(local_128,puVar10,0,uVar7);
  if (cVar6 == '\0') {
    lVar8 = FText::FromString(local_80,param_2);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a8,
                       L"Failed to write output file \'{0}\'. Perhaps the file is Read-Only?",
                       L"PluginDescriptor",L"FailedToWriteOutputFile");
    puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_90,uVar7);
    local_68[0] = 4;
    FText::FText(local_58,lVar8);
    local_f8 = *puVar9;
    local_108 = local_68;
    puStack_100 = local_38;
    local_f0 = puVar9[1];
    local_40 = '\x01';
    if (local_f0 != 0) {
      LOCK();
      *(int *)(local_f0 + 8) = *(int *)(local_f0 + 8) + 1;
      UNLOCK();
    }
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_e8,&local_108);
    uVar7 = FText::Format(local_c0,&local_f8,uVar7);
    FText::FText(local_d8,uVar7);
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_b8 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)local_b8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_e8);
    if (local_40 != '\0') {
      local_40 = '\0';
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_50 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)local_50 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
    plVar4 = (longlong *)puVar9[1];
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
    plVar4 = *(longlong **)(lVar8 + 8);
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
    FText::operator=(param_3,local_d8);
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_d0 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)local_d0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_a0 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar2 = (int *)((longlong)local_a0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  if (local_128[0] != 0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 1416c58a0 FUN_1416c58a0 body=856 status=ok
// SIG undefined FUN_1416c58a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1416c58a0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  longlong local_138 [2];
  longlong *local_128;
  longlong *local_120;
  undefined4 *local_118;
  ulonglong *puStack_110;
  undefined8 local_108;
  longlong local_100;
  longlong local_f8 [2];
  undefined1 local_e8 [16];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [16];
  undefined1 local_80 [24];
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_138[0] = 0;
  local_138[1] = 0;
  FUN_1404ae740(&local_128,local_138,0);
  uVar7 = FUN_141672d20(local_f8,param_2);
  FUN_1416ca0b0(param_1,local_128,uVar7);
  if (local_f8[0] != 0) {
    FMemory::Free();
  }
  (**(code **)(*local_128 + 8))(local_128);
  if (*(int *)(param_2 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*param_2;
  }
  uVar7 = FUN_1415c3d50();
  local_148 = 0;
  cVar6 = FUN_14167efa0(local_138,puVar10,0,uVar7);
  if (cVar6 == '\0') {
    lVar8 = FText::FromString(local_80,param_2);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_a8,
                       L"Failed to write output file \'{0}\'. Perhaps the file is Read-Only?",
                       L"ProjectDescriptor",L"FailedToWriteOutputFile");
    puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_90,uVar7);
    local_68[0] = 4;
    FText::FText(local_58,lVar8);
    local_108 = *puVar9;
    puStack_110 = local_38;
    local_100 = puVar9[1];
    local_40 = '\x01';
    if (local_100 != 0) {
      LOCK();
      *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
      UNLOCK();
    }
    local_118 = local_68;
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_e8,&local_118);
    uVar7 = FText::Format(local_c0,&local_108,uVar7);
    FText::FText(local_d8,uVar7);
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_b8 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)local_b8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b8 + 8))(local_b8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_e8);
    if (local_40 != '\0') {
      local_40 = '\0';
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_50 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)local_50 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
    plVar4 = (longlong *)puVar9[1];
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
    plVar4 = *(longlong **)(lVar8 + 8);
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
    FText::operator=(param_3,local_d8);
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_d0 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)local_d0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_a0 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar2 = (int *)((longlong)local_a0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  plVar4 = local_120;
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_120 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_120 + 8))(local_120,1);
      }
    }
  }
  if (local_138[0] != 0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 1416c5c00 SaveCurrentProjectToDisk body=111 status=ok
// SIG undefined SaveCurrentProjectToDisk(void)

undefined1 FProjectManager::SaveCurrentProjectToDisk(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong local_18 [2];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = FUN_141672e70(local_18);
  cVar3 = FUN_1416c58a0(uVar1,uVar2,param_2);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (cVar3 != '\0') {
    *(undefined1 *)(param_1 + 0x28) = 0;
    return 1;
  }
  return 0;
}



// FUNCTION 1416c5c80 FUN_1416c5c80 body=1518 status=ok
// SIG undefined FUN_1416c5c80(void)

undefined8 FUN_1416c5c80(longlong param_1,undefined8 *param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong lVar17;
  int *piVar18;
  uint local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  int local_110;
  longlong *local_108;
  longlong *local_100;
  undefined1 local_f8 [16];
  char local_e8;
  undefined1 local_e7;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  longlong *plVar13;
  
  lVar15 = *(longlong *)(param_1 + 8);
  if (lVar15 == 0) {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_50,L"No project is currently loaded",L"ProjectManager",
                       L"NoProjectLoaded");
    FText::operator=(param_4,uVar6);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_48 + 1;
      lVar15 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar18 = (int *)((longlong)local_48 + 0xc);
        iVar3 = *piVar18;
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    return 0;
  }
  plVar13 = (longlong *)0x0;
  local_138 = 0;
  plVar10 = plVar13;
  plVar14 = plVar13;
  if (*(int *)(lVar15 + 0x50) != 0) {
    do {
      uVar11 = (uint)plVar14;
      if (*(int *)(param_2 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*param_2;
      }
      if (*(int *)((longlong)plVar10 + *(longlong *)(lVar15 + 0x48) + 8) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = *(undefined2 **)((longlong)plVar10 + *(longlong *)(lVar15 + 0x48));
      }
      iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
      lVar15 = *(longlong *)(param_1 + 8);
      if (iVar3 == 0) {
        *(char *)((longlong)(int)uVar11 * 0xa8 + 0x10 + *(longlong *)(lVar15 + 0x48)) = param_3;
        goto LAB_1416c5e41;
      }
      local_138 = uVar11 + 1;
      plVar10 = plVar10 + 0x15;
      plVar14 = (longlong *)(ulonglong)local_138;
    } while (local_138 != *(uint *)(lVar15 + 0x50));
  }
  FString::FString(local_f8,param_2);
  lVar15 = *(longlong *)(param_1 + 8);
  local_e7 = 0;
  local_e0 = 0;
  uVar11 = *(uint *)(lVar15 + 0x50);
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  *(uint *)(lVar15 + 0x50) = uVar11 + 1;
  local_e8 = param_3;
  if (*(int *)(lVar15 + 0x54) < (int)(uVar11 + 1)) {
    TArray<FGeometryCacheMeshData,FDefaultAllocator>::ResizeGrow(lVar15 + 0x48,uVar11);
  }
  FPluginReferenceDescriptor::FPluginReferenceDescriptor
            ((longlong)(int)uVar11 * 0xa8 + *(longlong *)(lVar15 + 0x48),local_f8);
  FPluginReferenceDescriptor::~FPluginReferenceDescriptor(local_f8);
  local_138 = uVar11;
LAB_1416c5e41:
  lVar15 = *(longlong *)(param_1 + 8);
  lVar17 = (longlong)(int)uVar11;
  iVar3 = *(int *)(lVar15 + 0x50) + -1;
  lVar12 = (longlong)iVar3;
  if (lVar17 < lVar12) {
    lVar15 = lVar12 * 0xa8;
    lVar12 = lVar12 - lVar17;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
      if (*(int *)(param_2 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*param_2;
      }
      if (*(int *)(lVar15 + 8 + lVar1) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = *(undefined2 **)(lVar15 + lVar1);
      }
      iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
      if (iVar4 == 0) {
        TArray<FPluginReferenceDescriptor,FDefaultAllocator>::RemoveAtImpl
                  (*(longlong *)(param_1 + 8) + 0x48,iVar3,1,1);
      }
      iVar3 = iVar3 + -1;
      lVar15 = lVar15 + -0xa8;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    lVar15 = *(longlong *)(param_1 + 8);
  }
  lVar15 = lVar17 * 0xa8 + *(longlong *)(lVar15 + 0x48);
  piVar18 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar18 < DAT_1469e5b30) && (_Init_thread_header(&DAT_1469e5b30), DAT_1469e5b30 == -1)) {
    FPluginManager::FPluginManager(&DAT_1469e5a30);
    atexit(FUN_143e7b590);
    _Init_thread_footer(&DAT_1469e5b30);
  }
  (**(code **)(DAT_1469e5a30 + 0x30))(&DAT_1469e5a30,&local_108,param_2);
  if (local_108 != (longlong *)0x0) {
    lVar12 = (**(code **)(*local_108 + 0x60))();
    FString::operator=(lVar15 + 0x28,lVar12 + 0x78);
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=(lVar15 + 0x98,lVar12 + 0xa8);
  }
  if (((*(int *)(lVar15 + 0x40) == 0) && (*(int *)(lVar15 + 0x50) == 0)) &&
     ((local_108 == (longlong *)0x0 ||
      (lVar15 = (**(code **)(*local_108 + 0x60))(), *(char *)(lVar15 + 0xdb) == '\0')))) {
    local_130 = (longlong *)0x0;
    local_128 = 0;
    if ((*piVar18 < DAT_1469e5b30) && (_Init_thread_header(&DAT_1469e5b30), DAT_1469e5b30 == -1)) {
      FPluginManager::FPluginManager(&DAT_1469e5a30);
      atexit(FUN_143e7b590);
      _Init_thread_footer(&DAT_1469e5b30);
    }
    (**(code **)(DAT_1469e5a30 + 0x48))(&DAT_1469e5a30,&local_118);
    local_120 = local_118 + (longlong)local_110 * 2;
    plVar10 = plVar13;
    if (local_118 != local_120) {
      puVar16 = local_118;
      iVar3 = local_128._4_4_;
      do {
        cVar2 = (**(code **)(*(longlong *)*puVar16 + 0x40))();
        if ((cVar2 != '\0') &&
           (lVar15 = (**(code **)(*(longlong *)*puVar16 + 0x60))(), *(char *)(lVar15 + 0xdb) == '\0'
           )) {
          puVar7 = (undefined8 *)(**(code **)(*(longlong *)*puVar16 + 8))();
          iVar4 = (int)plVar13;
          for (plVar14 = plVar10; plVar14 != plVar10 + (longlong)iVar4 * 2; plVar14 = plVar14 + 2) {
            if (*(int *)(puVar7 + 1) == 0) {
              puVar9 = &DAT_143f3eda8;
            }
            else {
              puVar9 = (undefined2 *)*puVar7;
            }
            if ((int)plVar14[1] == 0) {
              puVar8 = &DAT_143f3eda8;
            }
            else {
              puVar8 = (undefined2 *)*plVar14;
            }
            iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
            if (iVar5 == 0) {
              if ((int)((longlong)plVar14 - (longlong)plVar10 >> 4) != -1) goto LAB_1416c60bf;
              break;
            }
          }
          uVar11 = iVar4 + 1;
          local_128 = CONCAT44(local_128._4_4_,uVar11);
          if (iVar3 < (int)uVar11) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_130,plVar13);
            plVar10 = local_130;
            iVar3 = local_128._4_4_;
            uVar11 = (uint)local_128;
          }
          plVar13 = (longlong *)(ulonglong)uVar11;
          FString::FString(plVar10 + (longlong)iVar4 * 2,puVar7);
        }
LAB_1416c60bf:
        puVar16 = puVar16 + 2;
      } while (puVar16 != local_120);
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_118);
    uVar11 = (uint)plVar13;
    for (plVar14 = plVar10; plVar14 != plVar10 + (longlong)(int)uVar11 * 2; plVar14 = plVar14 + 2) {
      if (*(int *)(param_2 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*param_2;
      }
      if ((int)plVar14[1] == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)*plVar14;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
      if (iVar3 == 0) {
        cVar2 = '\x01';
        goto LAB_1416c612e;
      }
    }
    cVar2 = '\0';
LAB_1416c612e:
    plVar14 = plVar10;
    if (cVar2 == param_3) {
      TArray<FPluginReferenceDescriptor,FDefaultAllocator>::RemoveAtImpl
                (*(longlong *)(param_1 + 8) + 0x48,local_138,1,1);
    }
    while (uVar11 != 0) {
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      uVar11 = (int)plVar13 - 1;
      plVar13 = (longlong *)(ulonglong)uVar11;
      plVar14 = plVar14 + 2;
    }
    if (plVar10 != (longlong *)0x0) {
      FMemory::Free(plVar10);
    }
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_100 + 1;
    lVar15 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar18 = (int *)((longlong)local_100 + 0xc);
      iVar3 = *piVar18;
      *piVar18 = *piVar18 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
  return 1;
}



// FUNCTION 1416c6270 SetRegisterMountPointDelegate body=100 status=ok
// SIG undefined SetRegisterMountPointDelegate(void)

void FPluginManager::SetRegisterMountPointDelegate(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)(param_1 + 0x68);
  if (param_2 != plVar1) {
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001416c6298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x30))(param_2,plVar1);
      return;
    }
    if ((*(int *)(param_1 + 0x70) != 0) && (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      if (*plVar1 != 0) {
        lVar3 = FMemory::Realloc(*plVar1,0,0);
        *plVar1 = lVar3;
      }
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
  }
  return;
}



// FUNCTION 1416c62e0 SignSampleProject body=419 status=ok
// SIG undefined SignSampleProject(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FProjectManager::SignSampleProject
          (undefined8 param_1,undefined8 param_2,void **param_3,undefined8 param_4)

{
  int iVar1;
  void *_Src;
  char cVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_198 [32];
  longlong local_178 [2];
  undefined4 local_168 [2];
  undefined8 local_160;
  undefined8 local_158;
  void *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_c8 = 0xffffffff;
  local_160 = 0;
  local_158 = 0;
  local_150 = (void *)0x0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_100 = 0;
  local_58 = 0;
  local_78 = 0xffffffff;
  local_168[0] = 3;
  cVar2 = FUN_1416bc9a0(local_168,param_2,param_4);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    puVar4 = (undefined8 *)FUN_141671d50(local_178,param_2);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*puVar4;
    }
    local_100 = FUN_140438070(puVar5);
    if (local_178[0] != 0) {
      FMemory::Free();
    }
    if (&local_150 != param_3) {
      iVar1 = *(int *)(param_3 + 1);
      _Src = *param_3;
      local_148 = CONCAT44(local_148._4_4_,iVar1);
      if ((iVar1 == 0) && (local_148._4_4_ == 0)) {
        local_148 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_150,iVar1);
        ::_guard_xfg_dispatch_icall_nop(local_150,_Src,(longlong)iVar1 * 2);
      }
    }
    uVar3 = FUN_1416c58a0(local_168,param_2,param_4);
  }
  FProjectDescriptor::~FProjectDescriptor(local_168);
  return uVar3;
}



// FUNCTION 1416c6490 FUN_1416c6490 body=110 status=ok
// SIG undefined FUN_1416c6490(void)

wchar_t * FUN_1416c6490(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return L"Runtime";
  case 1:
    return L"RuntimeNoCommandlet";
  case 2:
    return L"RuntimeAndProgram";
  case 3:
    return L"CookedOnly";
  case 4:
    return L"Developer";
  case 5:
    return L"Editor";
  case 6:
    return L"EditorNoCommandlet";
  case 7:
    return L"Program";
  case 8:
    return L"ServerOnly";
  case 9:
    return L"ClientOnly";
  default:
    return (wchar_t *)0x0;
  }
}



// FUNCTION 1416c6530 FUN_1416c6530 body=94 status=ok
// SIG undefined FUN_1416c6530(void)

wchar_t * FUN_1416c6530(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return L"PostConfigInit";
  case 1:
    return L"PreEarlyLoadingScreen";
  case 2:
    return L"PreLoadingScreen";
  case 3:
    return L"PreDefault";
  case 4:
    return L"Default";
  case 5:
    return L"PostDefault";
  case 6:
    return L"PostEngineInit";
  case 7:
    return L"None";
  default:
    return (wchar_t *)0x0;
  }
}



// FUNCTION 1416c65b0 FUN_1416c65b0 body=4102 status=ok
// SIG undefined FUN_1416c65b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1416c65b0(longlong param_1,undefined4 param_2)

{
  char *pcVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  longlong lVar18;
  uint *puVar19;
  char *pcVar20;
  undefined1 auStack_6c8 [32];
  int *local_6a8;
  int *piStack_6a0;
  int local_698;
  uint uStack_694;
  uint *puStack_690;
  undefined4 local_688;
  int iStack_684;
  int iStack_680;
  undefined4 uStack_67c;
  undefined4 *local_678;
  undefined4 *puStack_670;
  int *local_668;
  undefined4 *puStack_660;
  undefined4 *local_658;
  ulonglong *puStack_650;
  undefined1 local_648 [8];
  longlong *local_640;
  undefined1 local_630 [8];
  longlong *local_628;
  undefined1 local_618 [8];
  longlong *local_610;
  longlong *local_600;
  int iStack_5f8;
  uint uStack_5f4;
  uint *local_5f0;
  uint uStack_5e8;
  int iStack_5e4;
  int local_5e0;
  undefined4 uStack_5dc;
  int local_5d8;
  undefined8 local_5d0;
  longlong local_5c8;
  longlong *local_5c0;
  int iStack_5b8;
  uint uStack_5b4;
  uint *puStack_5b0;
  undefined4 uStack_5a8;
  int iStack_5a4;
  int iStack_5a0;
  undefined4 uStack_59c;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined1 local_588 [16];
  undefined8 local_578;
  undefined8 uStack_570;
  undefined1 local_568 [16];
  undefined8 local_558;
  undefined8 uStack_550;
  undefined1 local_548 [16];
  undefined8 local_538;
  undefined8 uStack_530;
  undefined1 local_528 [16];
  undefined8 local_518;
  undefined8 uStack_510;
  undefined1 local_508 [16];
  undefined1 local_4f8 [8];
  longlong *local_4f0;
  undefined1 local_4e0 [8];
  longlong *local_4d8;
  undefined1 local_4c8 [8];
  longlong *local_4c0;
  undefined1 local_4b0 [8];
  longlong *local_4a8;
  undefined1 local_498 [8];
  longlong *local_490;
  undefined1 local_480 [8];
  longlong *local_478;
  undefined1 local_468 [8];
  longlong *local_460;
  undefined1 local_450 [8];
  longlong *local_448;
  undefined1 local_438 [8];
  longlong *local_430;
  undefined1 local_420 [8];
  longlong *local_418;
  undefined1 local_408 [8];
  longlong *local_400;
  undefined1 local_3f0 [8];
  longlong *local_3e8;
  undefined1 local_3d8 [8];
  longlong *local_3d0;
  undefined1 local_3c0 [8];
  longlong *local_3b8;
  undefined1 local_3a8 [8];
  longlong *local_3a0;
  undefined1 local_390 [16];
  undefined1 local_380 [16];
  undefined1 local_370 [16];
  undefined1 local_360 [16];
  undefined1 local_350 [16];
  undefined1 local_340 [24];
  undefined1 local_328 [24];
  undefined1 local_310 [24];
  undefined1 local_2f8 [24];
  undefined1 local_2e0 [24];
  undefined1 local_2c8 [24];
  undefined1 local_2b0 [24];
  undefined1 local_298 [24];
  undefined1 local_280 [24];
  longlong local_268 [2];
  uint local_258 [4];
  uint *local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined4 local_234;
  longlong local_228;
  undefined4 local_220;
  undefined4 local_218 [4];
  undefined1 local_208 [24];
  undefined1 local_1f0;
  undefined4 local_1e8;
  undefined1 local_1d8 [24];
  undefined1 local_1c0;
  int local_1b8 [4];
  undefined1 local_1a8 [24];
  char local_190 [8];
  undefined4 local_188;
  undefined1 local_178 [24];
  undefined1 local_160;
  int local_158 [4];
  undefined1 local_148 [24];
  char local_130 [8];
  undefined4 local_128;
  undefined1 local_118 [24];
  undefined1 local_100;
  int local_f8 [4];
  undefined1 local_e8 [24];
  char local_d0 [8];
  int local_c8;
  undefined1 local_b8 [24];
  undefined1 local_a0;
  undefined4 local_98 [4];
  undefined1 local_88 [24];
  char local_70 [8];
  undefined4 local_68;
  undefined1 local_58 [24];
  undefined1 local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_6c8;
  local_268[0] = 0;
  local_268[1] = 0;
  local_248 = (uint *)0x0;
  local_240 = 0;
  local_238 = 0xffffffff;
  local_234 = 0;
  local_228 = 0;
  local_220 = 0;
  FUN_1416bd0b0(param_2,param_1 + 0xe0,local_268);
  FText::FText(local_648);
  puStack_690 = local_258;
  local_698 = 0;
  uStack_694 = 1;
  iStack_684 = 0;
  iStack_680 = 0;
  if ((int)local_240 != 0) {
    puVar19 = local_258;
    if (local_248 != (uint *)0x0) {
      puVar19 = local_248;
    }
    uVar4 = *puVar19;
    iStack_680 = 0;
    while (uVar4 == 0) {
      iStack_680 = iStack_680 + 0x20;
      if ((int)((int)local_240 + -1 + ((int)local_240 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_698) {
        iStack_684 = (int)local_240;
        local_698 = local_698 + 1;
        goto LAB_1416c6710;
      }
      uVar4 = puVar19[(longlong)local_698 + 1];
      local_698 = local_698 + 1;
    }
    uStack_694 = -uVar4 & uVar4;
    local_5d8 = 0x1f;
    if (uStack_694 != 0) {
      for (; uStack_694 >> local_5d8 == 0; local_5d8 = local_5d8 + -1) {
      }
    }
    if (uStack_694 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - local_5d8;
    }
    iStack_684 = (iStack_680 - iVar9) + 0x1f;
    if ((int)local_240 < iStack_684) {
      iStack_684 = (int)local_240;
    }
  }
LAB_1416c6710:
  local_688 = 0xffffffff;
  local_600 = local_268;
  iStack_5f8 = local_698;
  uStack_5f4 = uStack_694;
  uStack_5a8 = 0xffffffff;
  iStack_5a4 = iStack_684;
  iStack_5a0 = iStack_680;
  uStack_59c = uStack_67c;
  uStack_5e8 = 0xffffffff;
  iStack_5e4 = iStack_684;
  local_5e0 = iStack_680;
  uStack_5dc = uStack_67c;
  local_5f0 = puStack_690;
  local_5c0 = local_600;
  puStack_5b0 = puStack_690;
  iStack_5b8 = iStack_5f8;
  uStack_5b4 = uStack_5f4;
  if (iStack_684 < (int)local_240) {
    do {
      iVar7 = iStack_5e4;
      plVar13 = local_600;
      iVar9 = *(int *)(*local_600 + 8 + (longlong)iStack_5e4 * 0x18);
      if (iVar9 != 0) {
        FText::FromString(local_618,param_1 + 8);
        FText::FromName(local_630,*plVar13 + (longlong)iVar7 * 0x18);
        if (iVar9 == 1) {
          lVar10 = FText::FText(local_340,local_630);
          lVar11 = FText::FText(local_328,local_618);
          uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_468,
                              L"Plugin \'{0}\' failed to load because module \'{1}\' could not be found.  Please ensure the plugin is properly installed, otherwise consider disabling the plugin for this project."
                              ,L"PluginManager",L"PluginModuleNotFound");
          plVar13 = (longlong *)FTextFormat::FTextFormat(local_390,uVar12);
          local_218[0] = 4;
          FText::FText(local_208,lVar11);
          local_1f0 = 1;
          local_1e8 = 4;
          FText::FText(local_1d8,lVar10);
          local_678 = local_218;
          local_1c0 = 1;
          puStack_670 = local_1b8;
          local_6a8 = (int *)*plVar13;
          piStack_6a0 = (int *)plVar13[1];
          if (piStack_6a0 != (int *)0x0) {
            LOCK();
            piStack_6a0[2] = piStack_6a0[2] + 1;
            UNLOCK();
          }
          local_598 = local_678;
          uStack_590 = puStack_670;
          uVar12 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                   TArray<FFormatArgumentValue,FDefaultAllocator>(local_588,&local_598);
          uVar12 = FText::Format(local_480,&local_6a8,uVar12);
          FText::FText(local_4c8,uVar12);
          if (local_478 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_478 + 1;
            lVar18 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*local_478)(local_478);
              LOCK();
              piVar3 = (int *)((longlong)local_478 + 0xc);
              iVar9 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_478 + 8))(local_478,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_588);
          lVar18 = 2;
          pcVar20 = local_190;
          do {
            lVar18 = lVar18 + -1;
            pcVar1 = pcVar20 + -0x30;
            if (*pcVar1 != '\0') {
              *pcVar1 = '\0';
              plVar5 = *(longlong **)(pcVar20 + -0x40);
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar5 + 1;
                lVar6 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*plVar5)(plVar5);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar5 + 0xc);
                  iVar9 = *piVar3;
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (iVar9 == 1) {
                    (**(code **)(*plVar5 + 8))(plVar5,1);
                  }
                }
              }
            }
            pcVar20 = pcVar1;
          } while (lVar18 != 0);
          plVar13 = (longlong *)plVar13[1];
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar13 + 1;
            lVar18 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar3 = (int *)((longlong)plVar13 + 0xc);
              iVar9 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
          plVar13 = *(longlong **)(lVar11 + 8);
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar13 + 1;
            lVar11 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar3 = (int *)((longlong)plVar13 + 0xc);
              iVar9 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
          plVar13 = *(longlong **)(lVar10 + 8);
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar13 + 1;
            lVar10 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar3 = (int *)((longlong)plVar13 + 0xc);
              iVar9 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
          FText::operator=(local_648,local_4c8);
          if (local_4c0 != (longlong *)0x0) {
            LOCK();
            plVar13 = local_4c0 + 1;
            lVar10 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_4c0)(local_4c0);
              LOCK();
              piVar3 = (int *)((longlong)local_4c0 + 0xc);
              iVar9 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_4c0 + 8))(local_4c0,1);
              }
            }
          }
          plVar13 = local_460;
        }
        else if (iVar9 == 2) {
          lVar10 = FText::FText(local_310,local_630);
          lVar11 = FText::FText(local_280,local_618);
          uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_438,
                              L"Plugin \'{0}\' failed to load because module \'{1}\' does not appear to be compatible with the current version of the engine.  The plugin may need to be recompiled."
                              ,L"PluginManager",L"PluginModuleIncompatible");
          plVar13 = (longlong *)FTextFormat::FTextFormat(local_380,uVar12);
          local_1b8[0] = 4;
          FText::FText(local_1a8,lVar11);
          local_190[0] = '\x01';
          local_188 = 4;
          FText::FText(local_178,lVar10);
          local_6a8 = local_1b8;
          local_160 = 1;
          piStack_6a0 = local_158;
          local_678 = (undefined4 *)*plVar13;
          puStack_670 = (undefined4 *)plVar13[1];
          if (puStack_670 != (int *)0x0) {
            LOCK();
            puStack_670[2] = puStack_670[2] + 1;
            UNLOCK();
          }
          local_578 = local_6a8;
          uStack_570 = piStack_6a0;
          uVar12 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                   TArray<FFormatArgumentValue,FDefaultAllocator>(local_568,&local_578);
          uVar12 = FText::Format(local_450,&local_678,uVar12);
          FText::FText(local_4b0,uVar12);
          if (local_448 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_448 + 1;
            lVar18 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*local_448)(local_448);
              LOCK();
              piVar3 = (int *)((longlong)local_448 + 0xc);
              iVar9 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_448 + 8))(local_448,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_568);
          lVar18 = 2;
          pcVar20 = local_130;
          do {
            lVar18 = lVar18 + -1;
            pcVar1 = pcVar20 + -0x30;
            if (*pcVar1 != '\0') {
              *pcVar1 = '\0';
              plVar5 = *(longlong **)(pcVar20 + -0x40);
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar5 + 1;
                lVar6 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*plVar5)(plVar5);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar5 + 0xc);
                  iVar9 = *piVar3;
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (iVar9 == 1) {
                    (**(code **)(*plVar5 + 8))(plVar5,1);
                  }
                }
              }
            }
            pcVar20 = pcVar1;
          } while (lVar18 != 0);
          plVar13 = (longlong *)plVar13[1];
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar13 + 1;
            lVar18 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar3 = (int *)((longlong)plVar13 + 0xc);
              iVar9 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
          plVar13 = *(longlong **)(lVar11 + 8);
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar13 + 1;
            lVar11 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar3 = (int *)((longlong)plVar13 + 0xc);
              iVar9 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
          plVar13 = *(longlong **)(lVar10 + 8);
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar13 + 1;
            lVar10 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar3 = (int *)((longlong)plVar13 + 0xc);
              iVar9 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
          FText::operator=(local_648,local_4b0);
          if (local_4a8 != (longlong *)0x0) {
            LOCK();
            plVar13 = local_4a8 + 1;
            lVar10 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_4a8)(local_4a8);
              LOCK();
              piVar3 = (int *)((longlong)local_4a8 + 0xc);
              iVar9 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_4a8 + 8))(local_4a8,1);
              }
            }
          }
          plVar13 = local_430;
        }
        else if (iVar9 == 3) {
          lVar10 = FText::FText(local_2f8,local_630);
          lVar11 = FText::FText(local_2e0,local_618);
          uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_408,
                              L"Plugin \'{0}\' failed to load because module \'{1}\' could not be loaded.  There may be an operating system error or the module may not be properly set up."
                              ,L"PluginManager",L"PluginModuleCouldntBeLoaded");
          plVar13 = (longlong *)FTextFormat::FTextFormat(local_350,uVar12);
          local_158[0] = 4;
          FText::FText(local_148,lVar11);
          local_130[0] = '\x01';
          local_128 = 4;
          FText::FText(local_118,lVar10);
          local_6a8 = local_158;
          local_100 = 1;
          piStack_6a0 = local_f8;
          local_668 = (int *)*plVar13;
          puStack_660 = (undefined4 *)plVar13[1];
          if (puStack_660 != (undefined4 *)0x0) {
            LOCK();
            puStack_660[2] = puStack_660[2] + 1;
            UNLOCK();
          }
          local_558 = local_6a8;
          uStack_550 = piStack_6a0;
          uVar12 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                   TArray<FFormatArgumentValue,FDefaultAllocator>(local_548,&local_558);
          uVar12 = FText::Format(local_420,&local_668,uVar12);
          FText::FText(local_498,uVar12);
          if (local_418 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_418 + 1;
            lVar18 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*local_418)(local_418);
              LOCK();
              piVar3 = (int *)((longlong)local_418 + 0xc);
              iVar9 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_418 + 8))(local_418,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_548);
          lVar18 = 2;
          pcVar20 = local_d0;
          do {
            lVar18 = lVar18 + -1;
            pcVar1 = pcVar20 + -0x30;
            if (*pcVar1 != '\0') {
              *pcVar1 = '\0';
              plVar5 = *(longlong **)(pcVar20 + -0x40);
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar5 + 1;
                lVar6 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*plVar5)(plVar5);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar5 + 0xc);
                  iVar9 = *piVar3;
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (iVar9 == 1) {
                    (**(code **)(*plVar5 + 8))(plVar5,1);
                  }
                }
              }
            }
            pcVar20 = pcVar1;
          } while (lVar18 != 0);
          plVar13 = (longlong *)plVar13[1];
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar13 + 1;
            lVar18 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar3 = (int *)((longlong)plVar13 + 0xc);
              iVar9 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
          plVar13 = *(longlong **)(lVar11 + 8);
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar13 + 1;
            lVar11 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar3 = (int *)((longlong)plVar13 + 0xc);
              iVar9 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
          plVar13 = *(longlong **)(lVar10 + 8);
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar13 + 1;
            lVar10 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar3 = (int *)((longlong)plVar13 + 0xc);
              iVar9 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
          FText::operator=(local_648,local_498);
          if (local_490 != (longlong *)0x0) {
            LOCK();
            plVar13 = local_490 + 1;
            lVar10 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_490)(local_490);
              LOCK();
              piVar3 = (int *)((longlong)local_490 + 0xc);
              iVar9 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_490 + 8))(local_490,1);
              }
            }
          }
          plVar13 = local_400;
        }
        else if (iVar9 == 4) {
          lVar10 = FText::FText(local_2c8,local_630);
          lVar11 = FText::FText(local_2b0,local_618);
          uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_3d8,
                              L"Plugin \'{0}\' failed to load because module \'{1}\' could not be initialized successfully after it was loaded."
                              ,L"PluginManager",L"PluginModuleFailedToInitialize");
          plVar13 = (longlong *)FTextFormat::FTextFormat(local_360,uVar12);
          local_f8[0] = iVar9;
          FText::FText(local_e8,lVar11);
          local_d0[0] = '\x01';
          local_c8 = iVar9;
          FText::FText(local_b8,lVar10);
          local_668 = local_f8;
          local_a0 = 1;
          puStack_660 = local_98;
          local_658 = (undefined4 *)*plVar13;
          puStack_650 = (ulonglong *)plVar13[1];
          if (puStack_650 != (ulonglong *)0x0) {
            LOCK();
            *(int *)(puStack_650 + 1) = (int)puStack_650[1] + 1;
            UNLOCK();
          }
          local_538 = local_668;
          uStack_530 = puStack_660;
          uVar12 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                   TArray<FFormatArgumentValue,FDefaultAllocator>(local_528,&local_538);
          uVar12 = FText::Format(local_3f0,&local_658,uVar12);
          FText::FText(local_4f8,uVar12);
          if (local_3e8 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_3e8 + 1;
            lVar18 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*local_3e8)(local_3e8);
              LOCK();
              piVar3 = (int *)((longlong)local_3e8 + 0xc);
              iVar9 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_3e8 + 8))(local_3e8,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_528);
          lVar18 = 2;
          pcVar20 = local_70;
          do {
            lVar18 = lVar18 + -1;
            pcVar1 = pcVar20 + -0x30;
            if (*pcVar1 != '\0') {
              *pcVar1 = '\0';
              plVar5 = *(longlong **)(pcVar20 + -0x40);
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar5 + 1;
                lVar6 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*plVar5)(plVar5);
                  LOCK();
                  piVar3 = (int *)((longlong)plVar5 + 0xc);
                  iVar9 = *piVar3;
                  *piVar3 = *piVar3 + -1;
                  UNLOCK();
                  if (iVar9 == 1) {
                    (**(code **)(*plVar5 + 8))(plVar5,1);
                  }
                }
              }
            }
            pcVar20 = pcVar1;
          } while (lVar18 != 0);
          plVar13 = (longlong *)plVar13[1];
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar13 + 1;
            lVar18 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar18 == 1) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar3 = (int *)((longlong)plVar13 + 0xc);
              iVar9 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
          plVar13 = *(longlong **)(lVar11 + 8);
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar13 + 1;
            lVar11 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar3 = (int *)((longlong)plVar13 + 0xc);
              iVar9 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
          plVar13 = *(longlong **)(lVar10 + 8);
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar13 + 1;
            lVar10 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar3 = (int *)((longlong)plVar13 + 0xc);
              iVar9 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
          FText::operator=(local_648,local_4f8);
          if (local_4f0 != (longlong *)0x0) {
            LOCK();
            plVar13 = local_4f0 + 1;
            lVar10 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_4f0)(local_4f0);
              LOCK();
              piVar3 = (int *)((longlong)local_4f0 + 0xc);
              iVar9 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_4f0 + 8))(local_4f0,1);
              }
            }
          }
          plVar13 = local_3d0;
        }
        else {
          uVar12 = FText::FText(local_298,local_630);
          uVar14 = FText::FText(&local_5c0,local_618);
          uVar15 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_3a8,
                              L"Plugin \'{0}\' failed to load because module \'{1}\' could not be loaded for an unspecified reason.  This plugin\'s functionality will not be available.  Please report this error."
                              ,L"PluginManager",L"PluginGenericLoadFailure");
          puVar16 = (undefined8 *)FTextFormat::FTextFormat(local_370,uVar15);
          local_98[0] = 4;
          FText::FText(local_88,uVar14);
          local_70[0] = '\x01';
          local_68 = 4;
          FText::FText(local_58,uVar12);
          local_658 = local_98;
          local_40 = 1;
          puStack_650 = local_38;
          local_5d0 = *puVar16;
          local_5c8 = puVar16[1];
          if (local_5c8 != 0) {
            LOCK();
            *(int *)(local_5c8 + 8) = *(int *)(local_5c8 + 8) + 1;
            UNLOCK();
          }
          local_518 = local_658;
          uStack_510 = puStack_650;
          uVar15 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                   TArray<FFormatArgumentValue,FDefaultAllocator>(local_508,&local_518);
          uVar15 = FText::Format(local_3c0,&local_5d0,uVar15);
          FText::FText(local_4e0,uVar15);
          if (local_3b8 != (longlong *)0x0) {
            LOCK();
            plVar13 = local_3b8 + 1;
            lVar10 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_3b8)(local_3b8);
              LOCK();
              piVar3 = (int *)((longlong)local_3b8 + 0xc);
              iVar9 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_3b8 + 8))(local_3b8,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_508);
          lVar10 = 2;
          puVar17 = &stack0xffffffffffffffd8;
          do {
            puVar17 = puVar17 + -0x30;
            TOptional<FExpressionError>::Reset(puVar17);
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(puVar16);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(uVar14);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(uVar12);
          FText::operator=(local_648,local_4e0);
          if (local_4d8 != (longlong *)0x0) {
            LOCK();
            plVar13 = local_4d8 + 1;
            lVar10 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_4d8)(local_4d8);
              LOCK();
              piVar3 = (int *)((longlong)local_4d8 + 0xc);
              iVar9 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*local_4d8 + 8))(local_4d8,1);
              }
            }
          }
          plVar13 = local_3a0;
        }
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar13 + 1;
          lVar10 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar3 = (int *)((longlong)plVar13 + 0xc);
            iVar9 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar13 + 8))(plVar13,1);
            }
          }
        }
        if (local_628 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_628 + 1;
          lVar10 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_628)(local_628);
            LOCK();
            piVar3 = (int *)((longlong)local_628 + 0xc);
            iVar9 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*local_628 + 8))(local_628,1);
            }
          }
        }
        if (local_610 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_610 + 1;
          lVar10 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_610)(local_610);
            LOCK();
            piVar3 = (int *)((longlong)local_610 + 0xc);
            iVar9 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*local_610 + 8))(local_610,1);
            }
          }
        }
        break;
      }
      uStack_5e8 = uStack_5e8 & ~uStack_5f4;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_5f8);
    } while (iStack_5e4 < (int)local_5f0[6]);
  }
  cVar8 = FText::IsEmpty(local_648);
  if (cVar8 == '\0') {
    FUN_1416786b0(0,local_648,0);
  }
  if (local_640 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_640 + 1;
    lVar10 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_640)(local_640);
      LOCK();
      piVar3 = (int *)((longlong)local_640 + 0xc);
      iVar9 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_640 + 8))(local_640,1);
      }
    }
  }
  local_220 = 0;
  if (local_228 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_268);
  return cVar8 != '\0';
}



// FUNCTION 1416c75c0 UpdateAdditionalPluginDirectory body=276 status=ok
// SIG undefined UpdateAdditionalPluginDirectory(void)

void FProjectManager::UpdateAdditionalPluginDirectory
               (longlong param_1,undefined8 param_2,char param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    if (param_3 == '\0') {
      iVar5 = TArray<FString,FDefaultAllocator>::Find(lVar2 + 0x118);
      if (iVar5 != -1) {
        plVar7 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar2 + 0x118));
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        ::_guard_xfg_dispatch_icall_nop
                  (plVar7,plVar7 + 2,(longlong)((*(int *)(lVar2 + 0x120) - iVar5) + -1) << 4);
        *(int *)(lVar2 + 0x120) = *(int *)(lVar2 + 0x120) + -1;
      }
    }
    else {
      FProjectDescriptor::AddPluginDirectory(lVar2);
    }
    FText::FText(local_28);
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar6 = FUN_141672e70(local_38);
    cVar4 = FUN_1416c58a0(uVar3,uVar6,local_28);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (cVar4 != '\0') {
      *(undefined1 *)(param_1 + 0x28) = 0;
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_20 + 1;
      lVar2 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1416c76e0 UpdateDescriptor body=68 status=ok
// SIG undefined UpdateDescriptor(void)

undefined1 FPlugin::UpdateDescriptor(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_1416c5550(param_2,param_1 + 0x18);
  if (cVar1 == '\0') {
    return 0;
  }
  FUN_1416b6e90(param_1 + 0x28,param_2);
  return 1;
}



// FUNCTION 1416c7730 UpdateSupportedTargetPlatformsForCurrentProject body=179 status=ok
// SIG undefined UpdateSupportedTargetPlatformsForCurrentProject(void)

void FProjectManager::UpdateSupportedTargetPlatformsForCurrentProject
               (longlong param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    if (param_3 == '\0') {
      TArray<FName,FDefaultAllocator>::Remove(*(longlong *)(param_1 + 8) + 0x58);
    }
    else {
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>();
    }
    FText::FText(local_28);
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar6 = FUN_141672e70(local_38);
    FUN_1416c58a0(uVar4,uVar6,local_28);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x30);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1416c77f0 UpdateSupportedTargetPlatformsForProject body=594 status=ok
// SIG undefined UpdateSupportedTargetPlatformsForProject(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FProjectManager::UpdateSupportedTargetPlatformsForProject
               (longlong param_1,undefined8 param_2,longlong *param_3,char param_4)

{
  int *piVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_1d8 [32];
  undefined2 *local_1b8;
  int local_1b0;
  undefined2 *local_1a8;
  int local_1a0;
  undefined1 local_198 [8];
  longlong *local_190;
  longlong local_180 [3];
  undefined4 local_168 [2];
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_168[0] = 3;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = (longlong *)0x0;
  local_108 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_100 = 0;
  local_58 = 0;
  FText::FText(local_198);
  cVar3 = FUN_1416bc9a0(local_168,param_2,local_198);
  uVar2 = local_108;
  if (cVar3 != '\0') {
    if (param_4 == '\0') {
      TArray<FName,FDefaultAllocator>::Remove(&local_110,param_3);
    }
    else {
      lVar9 = (longlong)(int)local_108;
      if (local_110 != local_110 + lVar9) {
        plVar6 = local_110;
        do {
          if (*plVar6 == *param_3) {
            if ((int)((longlong)plVar6 - (longlong)local_110 >> 3) != -1) goto LAB_1416c794a;
            break;
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != local_110 + lVar9);
      }
      iVar4 = (int)local_108 + 1;
      local_108 = CONCAT44(local_108._4_4_,iVar4);
      if (local_108._4_4_ < iVar4) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  (&local_110,uVar2 & 0xffffffff);
      }
      local_110[lVar9] = *param_3;
    }
LAB_1416c794a:
    FUN_1416c58a0(local_168,param_2,local_198);
    uVar5 = FUN_141672e70(local_180);
    FPaths::ConvertRelativePathToFull(&local_1a8,uVar5);
    if (local_180[0] != 0) {
      FMemory::Free();
    }
    FPaths::ConvertRelativePathToFull(&local_1b8,param_2);
    puVar8 = &DAT_143f3eda8;
    if (local_1b0 != 0) {
      puVar8 = local_1b8;
    }
    puVar7 = &DAT_143f3eda8;
    if (local_1a0 != 0) {
      puVar7 = local_1a8;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
    if (iVar4 == 0) {
      TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x30);
    }
    if (local_1b8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_1a8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (local_190 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_190 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_190)(local_190);
      LOCK();
      piVar1 = (int *)((longlong)local_190 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_190 + 8))(local_190,1);
      }
    }
  }
  FProjectDescriptor::~FProjectDescriptor(local_168);
  return;
}



// FUNCTION 1416c7a50 Visit body=350 status=ok
// SIG undefined Visit(void)

undefined8
`FPluginManager::FindPluginManifestsInDirectory'::`2'::FManifestVisitor::Visit
          (longlong param_1,short *param_2,char param_3)

{
  int iVar1;
  longlong *plVar2;
  void *_Src;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  void *local_28;
  ulonglong local_20;
  longlong local_18 [2];
  
  if (param_3 == '\0') {
    local_20 = 0;
    local_28 = (void *)0x0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (param_2[lVar5] != 0);
      uVar4 = (int)lVar5 + 1;
      local_20 = (ulonglong)uVar4;
      if (0 < (int)uVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      }
      FGenericPlatformString::Memcpy(local_28,param_2,(longlong)(int)uVar4 * 2);
    }
    local_18[0] = 0;
    local_18[1] = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x11,".upluginmanifest",0x11,0x3f);
    cVar3 = FString::EndsWith(&local_28,local_18,1);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (cVar3 != '\0') {
      plVar2 = *(longlong **)(param_1 + 8);
      iVar1 = (int)plVar2[1];
      *(int *)(plVar2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar1);
      }
      _Src = local_28;
      puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar2);
      *puVar6 = 0;
      lVar5 = (longlong)(int)local_20;
      *(int *)(puVar6 + 1) = (int)local_20;
      if ((int)local_20 == 0) {
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar6,local_20 & 0xffffffff,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar6,_Src,lVar5 * 2);
      }
    }
    if (local_28 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return 1;
}



// FUNCTION 1416c7bb0 Visit body=419 status=ok
// SIG undefined Visit(void)

undefined8 FPakFileSearchVisitor::Visit(longlong param_1,short *param_2,char param_3)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined2 *local_28;
  ulonglong local_20;
  longlong local_18;
  undefined8 local_10;
  
  if (param_3 == '\0') {
    local_20 = 0;
    local_28 = (undefined2 *)0x0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (param_2[lVar8] != 0);
      uVar7 = (int)lVar8 + 1;
      local_20 = (ulonglong)uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      }
      FGenericPlatformString::Memcpy(local_28,param_2,(longlong)(int)uVar7 * 2);
    }
    local_18 = 0;
    local_10 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"*.pak",0xc);
    cVar3 = FUN_141593930(&local_28,&local_18,1);
    if (cVar3 == '\0') {
LAB_1416c7cbd:
      bVar2 = false;
    }
    else {
      puVar9 = (undefined8 *)**(undefined8 **)(param_1 + 8);
      puVar10 = puVar9 + (longlong)*(int *)(*(undefined8 **)(param_1 + 8) + 1) * 2;
      for (; puVar9 != puVar10; puVar9 = puVar9 + 2) {
        puVar6 = &DAT_143f3eda8;
        if ((int)local_20 != 0) {
          puVar6 = local_28;
        }
        if (*(int *)(puVar9 + 1) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = (undefined2 *)*puVar9;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
        if (iVar4 == 0) goto LAB_1416c7cbd;
      }
      bVar2 = true;
    }
    if (local_18 != 0) {
      FMemory::Free();
    }
    if (bVar2) {
      plVar1 = *(longlong **)(param_1 + 8);
      iVar4 = (int)plVar1[1];
      *(int *)(plVar1 + 1) = iVar4 + 1;
      if (*(int *)((longlong)plVar1 + 0xc) < iVar4 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar4);
      }
      puVar6 = local_28;
      puVar9 = (undefined8 *)((longlong)iVar4 * 0x10 + *plVar1);
      *puVar9 = 0;
      lVar8 = (longlong)(int)local_20;
      *(int *)(puVar9 + 1) = (int)local_20;
      if ((int)local_20 == 0) {
        *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar9,local_20 & 0xffffffff,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar9,puVar6,lVar8 * 2);
      }
    }
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return 1;
}



// FUNCTION 1416c7d60 FUN_1416c7d60 body=1448 status=ok
// SIG undefined FUN_1416c7d60(void)

void FUN_1416c7d60(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  short *psVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined2 local_res10 [4];
  undefined8 local_a8;
  ulonglong uStack_a0;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined8 uStack_88;
  int local_80;
  uint uStack_7c;
  uint *puStack_78;
  undefined4 local_70;
  uint uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  if ((((int)param_2[4] - 2U & 0xfffffff5) != 0) || ((int)param_2[4] == 10)) {
    local_res10[0] = 0x2c;
    (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_res10,2);
  }
  FUN_1404b7a80(param_2[1]);
  plVar8 = (longlong *)param_2[1];
  if (0 < (int)*(uint *)((longlong)param_2 + 0x24)) {
    uVar7 = (ulonglong)*(uint *)((longlong)param_2 + 0x24);
    do {
      local_res10[0] = 9;
      (**(code **)(*plVar8 + 0x50))(plVar8,local_res10,2);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  (**(code **)(*param_2 + 0x18))(param_2,param_3);
  local_res10[0] = 0x3a;
  (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_res10,2);
  FUN_1404b7a80(param_2[1]);
  plVar8 = (longlong *)param_2[1];
  if (0 < (int)*(uint *)((longlong)param_2 + 0x24)) {
    uVar7 = (ulonglong)*(uint *)((longlong)param_2 + 0x24);
    do {
      local_res10[0] = 9;
      (**(code **)(*plVar8 + 0x50))(plVar8,local_res10,2);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    plVar8 = (longlong *)param_2[1];
  }
  local_res10[0] = 0x7b;
  (**(code **)(*plVar8 + 0x50))(plVar8,local_res10);
  *(int *)((longlong)param_2 + 0x24) = *(int *)((longlong)param_2 + 0x24) + 1;
  iVar14 = (int)param_2[3];
  *(int *)(param_2 + 3) = iVar14 + 1;
  if (*(int *)((longlong)param_2 + 0x1c) < iVar14 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 2,iVar14);
  }
  puStack_78 = (uint *)(param_1 + 2);
  local_80 = 0;
  uStack_7c = 1;
  *(undefined4 *)(param_2[2] + (longlong)iVar14 * 4) = 6;
  iVar14 = 0x20;
  *(undefined4 *)(param_2 + 4) = 2;
  uVar10 = *(uint *)(param_1 + 5);
  uStack_6c = 0;
  iStack_68 = 0;
  if (uVar10 != 0) {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = puStack_78;
    }
    uVar12 = *puVar13;
    iStack_68 = 0;
    local_80 = 0;
    while (uVar12 == 0) {
      lVar6 = (longlong)local_80;
      iStack_68 = iStack_68 + 0x20;
      iVar4 = local_80 + 1;
      bVar1 = (int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_80;
      local_80 = iVar4;
      if (bVar1) goto LAB_1416c7f59;
      uVar12 = puVar13[lVar6 + 1];
    }
    uStack_7c = -uVar12 & uVar12;
    iVar4 = 0x1f;
    if (uStack_7c != 0) {
      for (; uStack_7c >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    iVar3 = iVar14;
    if (uStack_7c != 0) {
      iVar3 = 0x1f - iVar4;
    }
    uStack_6c = (iStack_68 - iVar3) + 0x1f;
    if ((int)uVar10 < (int)uStack_6c) {
LAB_1416c7f59:
      uStack_6c = uVar10;
    }
  }
  local_70 = 0xffffffff;
  uStack_94 = *(uint *)(param_1 + 5);
  uStack_a0 = CONCAT44(uStack_7c,local_80);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_6c;
  uStack_88 = CONCAT44(uStack_64,iStack_68);
  uStack_98 = -1 << ((byte)uStack_94 & 0x1f);
  local_a8._0_4_ = SUB84(param_1,0);
  local_a8._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar12 = uStack_94 & 0xffffffe0;
  local_60 = (undefined4)local_a8;
  uStack_5c = local_a8._4_4_;
  iStack_58 = local_80;
  uStack_54 = uStack_7c;
  local_a8 = param_1;
  local_50 = puStack_78;
  local_40 = uStack_88;
  uStack_90 = uStack_48;
  uStack_8c = uStack_44;
  uVar5 = uStack_94;
  if (uStack_94 != uVar10) {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = puStack_78;
    }
    uVar5 = puVar13[(int)uStack_94 >> 5] & uStack_98;
    iVar4 = (int)uStack_94 >> 5;
    while (uVar5 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
      goto LAB_1416c801e;
      uVar5 = puVar13[(longlong)iVar4 + 1];
      uStack_98 = 0xffffffff;
      iVar4 = iVar4 + 1;
    }
    uVar5 = -uVar5 & uVar5;
    iVar4 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uVar5 != 0) {
      iVar14 = 0x1f - iVar4;
    }
    uStack_94 = (uVar12 - iVar14) + 0x1f;
    uVar5 = uStack_94;
    if ((int)uVar10 < (int)uStack_94) {
LAB_1416c801e:
      uStack_94 = uVar10;
      uVar5 = uVar10;
    }
  }
  while( true ) {
    if (((uStack_44 == uVar5) && (local_50 == puStack_78)) &&
       ((longlong *)CONCAT44(uStack_5c,local_60) == param_1)) break;
    lVar6 = *(longlong *)CONCAT44(uStack_5c,local_60) + (longlong)(int)uStack_44 * 0x28;
    if ((((int)param_2[4] - 2U & 0xfffffff5) != 0) || ((int)param_2[4] == 10)) {
      local_res10[0] = 0x2c;
      (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_res10,2);
    }
    FUN_1404b7a80(param_2[1]);
    plVar8 = (longlong *)param_2[1];
    if (0 < (int)*(uint *)((longlong)param_2 + 0x24)) {
      uVar7 = (ulonglong)*(uint *)((longlong)param_2 + 0x24);
      do {
        local_res10[0] = 9;
        (**(code **)(*plVar8 + 0x50))(plVar8,local_res10,2);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    (**(code **)(*param_2 + 0x18))(param_2,lVar6);
    local_res10[0] = 0x3a;
    (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_res10,2);
    local_res10[0] = 0x20;
    (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_res10,2);
    local_res10[0] = 0x5b;
    (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_res10,2);
    *(int *)((longlong)param_2 + 0x24) = *(int *)((longlong)param_2 + 0x24) + 1;
    iVar14 = (int)param_2[3];
    *(int *)(param_2 + 3) = iVar14 + 1;
    if (*(int *)((longlong)param_2 + 0x1c) < iVar14 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2 + 2,iVar14);
    }
    iVar4 = 4;
    *(undefined4 *)(param_2[2] + (longlong)iVar14 * 4) = 5;
    *(undefined4 *)(param_2 + 4) = 4;
    puVar11 = *(undefined8 **)(lVar6 + 0x10);
    puVar15 = puVar11 + (longlong)*(int *)(lVar6 + 0x18) * 2;
    if (puVar11 != puVar15) {
      do {
        if (*(int *)(puVar11 + 1) == 0) {
          psVar9 = &DAT_143f3eda8;
        }
        else {
          psVar9 = (short *)*puVar11;
        }
        local_a8 = (longlong *)0x0;
        uStack_a0 = 0;
        if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
          lVar6 = -1;
          do {
            lVar2 = lVar6 + 1;
            lVar6 = lVar6 + 1;
          } while (psVar9[lVar2] != 0);
          uVar10 = (int)lVar6 + 1;
          uStack_a0 = (ulonglong)uVar10;
          if (0 < (int)uVar10) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
          }
          FGenericPlatformString::Memcpy(local_a8,psVar9,(longlong)(int)uVar10 * 2);
        }
        FUN_1416caaa0(param_2);
        if (local_a8 != (longlong *)0x0) {
          FMemory::Free();
        }
        puVar11 = puVar11 + 2;
      } while (puVar11 != puVar15);
      iVar4 = (int)param_2[4];
    }
    *(int *)((longlong)param_2 + 0x24) = *(int *)((longlong)param_2 + 0x24) + -1;
    if (((iVar4 - 3U & 0xfffffff9) == 0) && (iVar4 != 9)) {
      FUN_1404b7a80(param_2[1]);
      plVar8 = (longlong *)param_2[1];
      if (0 < (int)*(uint *)((longlong)param_2 + 0x24)) {
        uVar7 = (ulonglong)*(uint *)((longlong)param_2 + 0x24);
        do {
          local_res10[0] = 9;
          (**(code **)(*plVar8 + 0x50))(plVar8,local_res10,2);
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
    else if (iVar4 != 4) {
      local_res10[0] = 0x20;
      (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_res10,2);
    }
    local_res10[0] = 0x5d;
    (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_res10,2);
    *(int *)(param_2 + 3) = (int)param_2[3] + -1;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_2 + 2);
    *(undefined4 *)(param_2 + 4) = 5;
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_58);
  }
  FUN_1406d2cf0(param_2);
  return;
}



// FUNCTION 1416c8310 FUN_1416c8310 body=2380 status=ok
// SIG undefined FUN_1416c8310(void)

void FUN_1416c8310(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  short *psVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  undefined2 local_res18 [8];
  longlong local_58;
  ulonglong local_50;
  longlong local_48;
  ulonglong local_40;
  
  FUN_1406d2fd0(param_2);
  iVar10 = 0;
  local_50 = 5;
  local_58 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"Name",10);
  uVar2 = FName::ToString(param_1,&local_48);
  FUN_1406c3f10(param_2,&local_58,uVar2);
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_48 = 0;
  local_40 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"Type",10);
  psVar3 = (short *)FUN_1416c6490(*(undefined4 *)(param_1 + 8));
  local_50 = 0;
  local_58 = 0;
  lVar7 = -1;
  if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (psVar3[lVar6] != 0);
    uVar5 = (int)lVar6 + 1;
    local_50 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    }
    FGenericPlatformString::Memcpy(local_58,psVar3,(longlong)(int)uVar5 * 2);
  }
  FUN_1406c3f10(param_2,&local_48,&local_58);
  if (local_48 != 0) {
    FMemory::Free();
  }
  local_58 = 0;
  local_50 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"LoadingPhase",0x1a);
  psVar3 = (short *)FUN_1416c6530(*(undefined4 *)(param_1 + 0xc));
  local_40 = 0;
  local_48 = 0;
  if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
    do {
      lVar7 = lVar7 + 1;
    } while (psVar3[lVar7] != 0);
    uVar5 = (int)lVar7 + 1;
    local_40 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    FGenericPlatformString::Memcpy(local_48,psVar3,(longlong)(int)uVar5 * 2);
  }
  FUN_1406c3f10(param_2,&local_58,&local_48);
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (0 < *(int *)(param_1 + 0x18)) {
    local_48 = 0;
    local_40 = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"WhitelistPlatforms",0x26);
    FUN_1406d2860(param_2,&local_48);
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (0 < *(int *)(param_1 + 0x18)) {
      iVar4 = (int)param_2[4];
      iVar9 = iVar10;
      do {
        lVar7 = *(longlong *)(param_1 + 0x10);
        if (((iVar4 - 2U & 0xfffffff5) != 0) || (iVar4 == 10)) {
          local_res18[0] = 0x2c;
          (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_res18,2);
        }
        FUN_1404b7a80(param_2[1]);
        plVar1 = (longlong *)param_2[1];
        if (0 < (int)*(uint *)((longlong)param_2 + 0x24)) {
          uVar8 = (ulonglong)*(uint *)((longlong)param_2 + 0x24);
          do {
            local_res18[0] = 9;
            (**(code **)(*plVar1 + 0x50))(plVar1,local_res18,2);
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        (**(code **)(*param_2 + 0x18))(param_2,(longlong)iVar9 * 0x10 + lVar7);
        iVar9 = iVar9 + 1;
        *(undefined4 *)(param_2 + 4) = 7;
        iVar4 = 7;
      } while (iVar9 < *(int *)(param_1 + 0x18));
    }
    FUN_1406d2600(param_2);
  }
  if (0 < *(int *)(param_1 + 0x28)) {
    local_48 = 0;
    local_40 = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"BlacklistPlatforms",0x26);
    FUN_1406d2860(param_2,&local_48);
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (0 < *(int *)(param_1 + 0x28)) {
      iVar4 = (int)param_2[4];
      iVar9 = iVar10;
      do {
        lVar7 = *(longlong *)(param_1 + 0x20);
        if (((iVar4 - 2U & 0xfffffff5) != 0) || (iVar4 == 10)) {
          local_res18[0] = 0x2c;
          (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_res18,2);
        }
        FUN_1404b7a80(param_2[1]);
        plVar1 = (longlong *)param_2[1];
        if (0 < (int)*(uint *)((longlong)param_2 + 0x24)) {
          uVar8 = (ulonglong)*(uint *)((longlong)param_2 + 0x24);
          do {
            local_res18[0] = 9;
            (**(code **)(*plVar1 + 0x50))(plVar1,local_res18,2);
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        (**(code **)(*param_2 + 0x18))(param_2,(longlong)iVar9 * 0x10 + lVar7);
        iVar4 = 7;
        *(undefined4 *)(param_2 + 4) = 7;
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_1 + 0x28));
    }
    FUN_1406d2600(param_2);
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    local_48 = 0;
    local_40 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"WhitelistTargets",0x22);
    FUN_1406d2860(param_2,&local_48);
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (0 < *(int *)(param_1 + 0x38)) {
      iVar4 = (int)param_2[4];
      do {
        lVar7 = *(longlong *)(param_1 + 0x30);
        if (((iVar4 - 2U & 0xfffffff5) != 0) || (iVar4 == 10)) {
          local_res18[0] = 0x2c;
          (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_res18,2);
        }
        FUN_1404b7a80(param_2[1]);
        plVar1 = (longlong *)param_2[1];
        if (0 < (int)*(uint *)((longlong)param_2 + 0x24)) {
          uVar8 = (ulonglong)*(uint *)((longlong)param_2 + 0x24);
          do {
            local_res18[0] = 9;
            (**(code **)(*plVar1 + 0x50))(plVar1,local_res18,2);
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        (**(code **)(*param_2 + 0x18))(param_2,(longlong)iVar10 * 0x10 + lVar7);
        iVar10 = iVar10 + 1;
        *(undefined4 *)(param_2 + 4) = 7;
        iVar4 = 7;
      } while (iVar10 < *(int *)(param_1 + 0x38));
    }
    FUN_1406d2600(param_2);
  }
  if (0 < *(int *)(param_1 + 0x48)) {
    local_48 = 0;
    local_40 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"BlacklistTargets",0x22);
    FUN_1406d2860(param_2,&local_48);
    if (local_48 != 0) {
      FMemory::Free();
    }
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 0x48)) {
      iVar4 = (int)param_2[4];
      do {
        lVar7 = *(longlong *)(param_1 + 0x40);
        if (((iVar4 - 2U & 0xfffffff5) != 0) || (iVar4 == 10)) {
          local_res18[0] = 0x2c;
          (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_res18,2);
        }
        FUN_1404b7a80(param_2[1]);
        plVar1 = (longlong *)param_2[1];
        if (0 < (int)*(uint *)((longlong)param_2 + 0x24)) {
          uVar8 = (ulonglong)*(uint *)((longlong)param_2 + 0x24);
          do {
            local_res18[0] = 9;
            (**(code **)(*plVar1 + 0x50))(plVar1,local_res18,2);
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        (**(code **)(*param_2 + 0x18))(param_2,(longlong)iVar10 * 0x10 + lVar7);
        iVar10 = iVar10 + 1;
        *(undefined4 *)(param_2 + 4) = 7;
        iVar4 = 7;
      } while (iVar10 < *(int *)(param_1 + 0x48));
    }
    FUN_1406d2600(param_2);
  }
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x58)) {
    local_48 = 0;
    local_40 = 0x1e;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"WhitelistTargetConfigurations",0x3c);
    FUN_1406d2860(param_2,&local_48);
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (0 < *(int *)(param_1 + 0x58)) {
      iVar4 = (int)param_2[4];
      do {
        lVar7 = *(longlong *)(param_1 + 0x50);
        if (((iVar4 - 2U & 0xfffffff5) != 0) || (iVar4 == 10)) {
          local_res18[0] = 0x2c;
          (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_res18,2);
        }
        FUN_1404b7a80(param_2[1]);
        plVar1 = (longlong *)param_2[1];
        if (0 < (int)*(uint *)((longlong)param_2 + 0x24)) {
          uVar8 = (ulonglong)*(uint *)((longlong)param_2 + 0x24);
          do {
            local_res18[0] = 9;
            (**(code **)(*plVar1 + 0x50))(plVar1,local_res18,2);
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        (**(code **)(*param_2 + 0x18))(param_2,(longlong)iVar10 * 0x10 + lVar7);
        iVar10 = iVar10 + 1;
        *(undefined4 *)(param_2 + 4) = 7;
        iVar4 = 7;
      } while (iVar10 < *(int *)(param_1 + 0x58));
    }
    FUN_1406d2600(param_2);
  }
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x68)) {
    local_48 = 0;
    local_40 = 0x1e;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"BlacklistTargetConfigurations",0x3c);
    FUN_1406d2860(param_2,&local_48);
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (0 < *(int *)(param_1 + 0x68)) {
      iVar4 = (int)param_2[4];
      do {
        lVar7 = *(longlong *)(param_1 + 0x60);
        if (((iVar4 - 2U & 0xfffffff5) != 0) || (iVar4 == 10)) {
          local_res18[0] = 0x2c;
          (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_res18,2);
        }
        FUN_1404b7a80(param_2[1]);
        plVar1 = (longlong *)param_2[1];
        if (0 < (int)*(uint *)((longlong)param_2 + 0x24)) {
          uVar8 = (ulonglong)*(uint *)((longlong)param_2 + 0x24);
          do {
            local_res18[0] = 9;
            (**(code **)(*plVar1 + 0x50))(plVar1,local_res18,2);
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        (**(code **)(*param_2 + 0x18))(param_2,(longlong)iVar10 * 0x10 + lVar7);
        iVar10 = iVar10 + 1;
        *(undefined4 *)(param_2 + 4) = 7;
        iVar4 = 7;
      } while (iVar10 < *(int *)(param_1 + 0x68));
    }
    FUN_1406d2600(param_2);
  }
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x78)) {
    local_48 = 0;
    local_40 = 0x17;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"AdditionalDependencies",0x2e);
    FUN_1406d2860(param_2,&local_48);
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (0 < *(int *)(param_1 + 0x78)) {
      iVar4 = (int)param_2[4];
      do {
        lVar7 = *(longlong *)(param_1 + 0x70);
        if (((iVar4 - 2U & 0xfffffff5) != 0) || (iVar4 == 10)) {
          local_res18[0] = 0x2c;
          (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_res18,2);
        }
        FUN_1404b7a80(param_2[1]);
        plVar1 = (longlong *)param_2[1];
        if (0 < (int)*(uint *)((longlong)param_2 + 0x24)) {
          uVar8 = (ulonglong)*(uint *)((longlong)param_2 + 0x24);
          do {
            local_res18[0] = 9;
            (**(code **)(*plVar1 + 0x50))(plVar1,local_res18,2);
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        (**(code **)(*param_2 + 0x18))(param_2,(longlong)iVar10 * 0x10 + lVar7);
        iVar10 = iVar10 + 1;
        *(undefined4 *)(param_2 + 4) = 7;
        iVar4 = 7;
      } while (iVar10 < *(int *)(param_1 + 0x78));
    }
    FUN_1406d2600(param_2);
  }
  FUN_1406d2cf0(param_2);
  return;
}



// FUNCTION 1416c8c60 FUN_1416c8c60 body=2697 status=ok
// SIG undefined FUN_1416c8c60(void)

void FUN_1416c8c60(int *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  ulonglong uVar7;
  undefined2 local_res8 [4];
  longlong local_48 [2];
  undefined2 *local_38;
  int local_30;
  
  local_48[1] = 0xc;
  iVar6 = 0;
  local_48[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"FileVersion",0x18);
  FUN_1416b4a80(param_2,local_48,3);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_48[0] = 0;
  local_48[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"Version",0x10);
  iVar4 = *param_1;
  if ((((int)param_2[4] - 2U & 0xfffffff5) != 0) || ((int)param_2[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_res8,2);
  }
  FUN_1404b7a80(param_2[1]);
  plVar1 = (longlong *)param_2[1];
  if (0 < (int)*(uint *)((longlong)param_2 + 0x24)) {
    uVar7 = (ulonglong)*(uint *)((longlong)param_2 + 0x24);
    do {
      local_res8[0] = 9;
      (**(code **)(*plVar1 + 0x50))(plVar1,local_res8,2);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  (**(code **)(*param_2 + 0x18))(param_2,local_48);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_res8,2);
  local_res8[0] = 0x20;
  (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_res8,2);
  FString::PrintfImpl(local_48 + 2,L"%lld",(longlong)iVar4);
  iVar4 = 0;
  if (local_30 == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    iVar4 = local_30 + -1;
    puVar5 = local_38;
  }
  (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],puVar5,(longlong)iVar4 * 2);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_2 + 4) = 8;
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_48[0] = 0;
  local_48[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"VersionName",0x18);
  uVar3 = FString::FString(local_48 + 2,param_1 + 2);
  FUN_1406c3f10(param_2,local_48,uVar3);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_48[0] = 0;
  local_48[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"FriendlyName",0x1a);
  uVar3 = FString::FString(local_48 + 2,param_1 + 6);
  FUN_1406c3f10(param_2,local_48,uVar3);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_48[0] = 0;
  local_48[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"Description",0x18);
  uVar3 = FString::FString(local_48 + 2,param_1 + 10);
  FUN_1406c3f10(param_2,local_48,uVar3);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_48[0] = 0;
  local_48[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"Category",0x12);
  uVar3 = FString::FString(local_48 + 2,param_1 + 0xe);
  FUN_1406c3f10(param_2,local_48,uVar3);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_48[0] = 0;
  local_48[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"CreatedBy",0x14);
  uVar3 = FString::FString(local_48 + 2,param_1 + 0x12);
  FUN_1406c3f10(param_2,local_48,uVar3);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_48[0] = 0;
  local_48[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"CreatedByURL",0x1a);
  uVar3 = FString::FString(local_48 + 2,param_1 + 0x16);
  FUN_1406c3f10(param_2,local_48,uVar3);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_48[0] = 0;
  local_48[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"DocsURL",0x10);
  uVar3 = FString::FString(local_48 + 2,param_1 + 0x1a);
  FUN_1406c3f10(param_2,local_48,uVar3);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_48[0] = 0;
  local_48[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"MarketplaceURL",0x1e);
  uVar3 = FString::FString(local_48 + 2,param_1 + 0x1e);
  FUN_1406c3f10(param_2,local_48,uVar3);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_48[0] = 0;
  local_48[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"SupportURL",0x16);
  uVar3 = FString::FString(local_48 + 2,param_1 + 0x22);
  FUN_1406c3f10(param_2,local_48,uVar3);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if ((param_1[0x28] != 0) && (0 < param_1[0x28] + -1)) {
    local_48[0] = 0;
    local_48[1] = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Memcpy(local_48[0],L"EngineVersion",0x1c);
    uVar3 = FString::FString(local_48 + 2,param_1 + 0x26);
    FUN_1406c3f10(param_2,local_48,uVar3);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  if ((char)param_1[0x36] != '\0') {
    local_48[0] = 0;
    local_48[1] = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Memcpy(local_48[0],L"EnabledByDefault",0x22);
    FUN_1404ab790(param_2,local_48,(char)param_1[0x36] == '\x01');
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  local_48[0] = 0;
  local_48[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"CanContainContent",0x24);
  FUN_1404ab790(param_2,local_48,*(undefined1 *)((longlong)param_1 + 0xd9));
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_48[0] = 0;
  local_48[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"IsBetaVersion",0x1c);
  FUN_1404ab790(param_2,local_48,*(undefined1 *)((longlong)param_1 + 0xda));
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_48[0] = 0;
  local_48[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"Installed",0x14);
  FUN_1404ab790(param_2,local_48,*(undefined1 *)((longlong)param_1 + 0xdb));
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_48[0] = 0;
  local_48[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"IsDLC",0xc);
  FUN_1404ab790(param_2,local_48,*(undefined1 *)((longlong)param_1 + 0xde));
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (0 < param_1[0x2c]) {
    local_48[0] = 0;
    local_48[1] = 0x19;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Memcpy(local_48[0],L"SupportedTargetPlatforms",0x32);
    FUN_1406d2860(param_2,local_48);
    if (0 < param_1[0x2c]) {
      iVar4 = (int)param_2[4];
      do {
        lVar2 = *(longlong *)(param_1 + 0x2a);
        if (((iVar4 - 2U & 0xfffffff5) != 0) || (iVar4 == 10)) {
          local_res8[0] = 0x2c;
          (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_res8,2);
        }
        FUN_1404b7a80(param_2[1]);
        plVar1 = (longlong *)param_2[1];
        if (0 < (int)*(uint *)((longlong)param_2 + 0x24)) {
          uVar7 = (ulonglong)*(uint *)((longlong)param_2 + 0x24);
          do {
            local_res8[0] = 9;
            (**(code **)(*plVar1 + 0x50))(plVar1,local_res8,2);
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        (**(code **)(*param_2 + 0x18))(param_2,(longlong)iVar6 * 0x10 + lVar2);
        iVar6 = iVar6 + 1;
        *(undefined4 *)(param_2 + 4) = 7;
        iVar4 = 7;
      } while (iVar6 < param_1[0x2c]);
    }
    FUN_1406d2600(param_2);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  iVar6 = 0;
  if (0 < param_1[0x30]) {
    local_48[0] = 0;
    local_48[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Memcpy(local_48[0],L"Modules",0x10);
    FUN_1406d2860(param_2,local_48);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    iVar4 = 0;
    if (0 < param_1[0x30]) {
      do {
        FUN_1416c8310((longlong)iVar4 * 0x80 + *(longlong *)(param_1 + 0x2e),param_2);
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_1[0x30]);
    }
    FUN_1406d2600(param_2);
  }
  FUN_1416ca830(param_2,L"LocalizationTargets",param_1 + 0x32);
  if ((char)param_1[0x37] != '\0') {
    local_48[0] = 0;
    local_48[1] = 0x16;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Memcpy(local_48[0],L"RequiresBuildPlatform",0x2c);
    FUN_1404ab790(param_2,local_48,(char)param_1[0x37]);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  if (*(char *)((longlong)param_1 + 0xdd) != '\0') {
    local_48[0] = 0;
    local_48[1] = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Memcpy(local_48[0],L"Hidden",0xe);
    FUN_1404ab790(param_2,local_48,*(undefined1 *)((longlong)param_1 + 0xdd));
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  if (param_1[0x3a] != param_1[0x45]) {
    local_48[0] = 0;
    local_48[1] = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Memcpy(local_48[0],L"PreBuildSteps",0x1c);
    FUN_1416c7d60(param_1 + 0x38,param_2,local_48);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  if (param_1[0x4e] != param_1[0x59]) {
    local_48[0] = 0;
    local_48[1] = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Memcpy(local_48[0],L"PostBuildSteps",0x1e);
    FUN_1416c7d60(param_1 + 0x4c,param_2,local_48);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  if (0 < param_1[0x62]) {
    local_48[0] = 0;
    local_48[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
    FGenericPlatformString::Memcpy(local_48[0],L"Plugins",0x10);
    FUN_1406d2860(param_2,local_48);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (0 < param_1[0x62]) {
      do {
        FUN_1416c96f0((longlong)iVar6 * 0xa8 + *(longlong *)(param_1 + 0x60),param_2);
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_1[0x62]);
    }
    FUN_1406d2600(param_2);
  }
  return;
}



// FUNCTION 1416c96f0 FUN_1416c96f0 body=2489 status=ok
// SIG undefined FUN_1416c96f0(void)

void FUN_1416c96f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  undefined2 local_res18 [8];
  longlong local_58 [2];
  undefined1 local_48 [16];
  
  FUN_1406d2fd0(param_2);
  iVar7 = 0;
  local_58[1] = 5;
  local_58[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"Name",10);
  uVar3 = FString::FString(local_48,param_1);
  FUN_1406c3f10(param_2,local_58,uVar3);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  local_58[0] = 0;
  local_58[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"Enabled",0x10);
  FUN_1404ab790(param_2,local_58,*(undefined1 *)(param_1 + 0x10));
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if ((*(char *)(param_1 + 0x10) != '\0') && (*(char *)(param_1 + 0x11) != '\0')) {
    local_58[0] = 0;
    local_58[1] = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
    FGenericPlatformString::Memcpy(local_58[0],L"Optional",0x12);
    FUN_1404ab790(param_2,local_58,*(undefined1 *)(param_1 + 0x11));
    if (local_58[0] != 0) {
      FMemory::Free();
    }
  }
  if ((*(int *)(param_1 + 0x20) != 0) && (0 < *(int *)(param_1 + 0x20) + -1)) {
    local_58[0] = 0;
    local_58[1] = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
    FGenericPlatformString::Memcpy(local_58[0],L"Description",0x18);
    uVar3 = FString::FString(local_48,param_1 + 0x18);
    FUN_1406c3f10(param_2,local_58,uVar3);
    if (local_58[0] != 0) {
      FMemory::Free();
    }
  }
  if ((*(int *)(param_1 + 0x30) != 0) && (0 < *(int *)(param_1 + 0x30) + -1)) {
    local_58[0] = 0;
    local_58[1] = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
    FGenericPlatformString::Memcpy(local_58[0],L"MarketplaceURL",0x1e);
    uVar3 = FString::FString(local_48,param_1 + 0x28);
    FUN_1406c3f10(param_2,local_58,uVar3);
    if (local_58[0] != 0) {
      FMemory::Free();
    }
  }
  if (0 < *(int *)(param_1 + 0x40)) {
    local_58[0] = 0;
    local_58[1] = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
    FGenericPlatformString::Memcpy(local_58[0],L"WhitelistPlatforms",0x26);
    FUN_1406d2860(param_2,local_58);
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    if (0 < *(int *)(param_1 + 0x40)) {
      iVar4 = (int)param_2[4];
      iVar6 = iVar7;
      do {
        lVar1 = *(longlong *)(param_1 + 0x38);
        if (((iVar4 - 2U & 0xfffffff5) != 0) || (iVar4 == 10)) {
          local_res18[0] = 0x2c;
          (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_res18,2);
        }
        FUN_1404b7a80(param_2[1]);
        plVar2 = (longlong *)param_2[1];
        if (0 < (int)*(uint *)((longlong)param_2 + 0x24)) {
          uVar5 = (ulonglong)*(uint *)((longlong)param_2 + 0x24);
          do {
            local_res18[0] = 9;
            (**(code **)(*plVar2 + 0x50))(plVar2,local_res18,2);
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        (**(code **)(*param_2 + 0x18))(param_2,(longlong)iVar6 * 0x10 + lVar1);
        iVar6 = iVar6 + 1;
        *(undefined4 *)(param_2 + 4) = 7;
        iVar4 = 7;
      } while (iVar6 < *(int *)(param_1 + 0x40));
    }
    FUN_1406d2600(param_2);
  }
  if (0 < *(int *)(param_1 + 0x50)) {
    local_58[0] = 0;
    local_58[1] = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
    FGenericPlatformString::Memcpy(local_58[0],L"BlacklistPlatforms",0x26);
    FUN_1406d2860(param_2,local_58);
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    if (0 < *(int *)(param_1 + 0x50)) {
      iVar4 = (int)param_2[4];
      iVar6 = iVar7;
      do {
        lVar1 = *(longlong *)(param_1 + 0x48);
        if (((iVar4 - 2U & 0xfffffff5) != 0) || (iVar4 == 10)) {
          local_res18[0] = 0x2c;
          (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_res18,2);
        }
        FUN_1404b7a80(param_2[1]);
        plVar2 = (longlong *)param_2[1];
        if (0 < (int)*(uint *)((longlong)param_2 + 0x24)) {
          uVar5 = (ulonglong)*(uint *)((longlong)param_2 + 0x24);
          do {
            local_res18[0] = 9;
            (**(code **)(*plVar2 + 0x50))(plVar2,local_res18,2);
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        (**(code **)(*param_2 + 0x18))(param_2,(longlong)iVar6 * 0x10 + lVar1);
        iVar4 = 7;
        *(undefined4 *)(param_2 + 4) = 7;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x50));
    }
    FUN_1406d2600(param_2);
  }
  if (0 < *(int *)(param_1 + 0x60)) {
    local_58[0] = 0;
    local_58[1] = 0x1e;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
    FGenericPlatformString::Memcpy(local_58[0],L"WhitelistTargetConfigurations",0x3c);
    FUN_1406d2860(param_2,local_58);
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    if (0 < *(int *)(param_1 + 0x60)) {
      iVar4 = (int)param_2[4];
      do {
        lVar1 = *(longlong *)(param_1 + 0x58);
        if (((iVar4 - 2U & 0xfffffff5) != 0) || (iVar4 == 10)) {
          local_res18[0] = 0x2c;
          (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_res18,2);
        }
        FUN_1404b7a80(param_2[1]);
        plVar2 = (longlong *)param_2[1];
        if (0 < (int)*(uint *)((longlong)param_2 + 0x24)) {
          uVar5 = (ulonglong)*(uint *)((longlong)param_2 + 0x24);
          do {
            local_res18[0] = 9;
            (**(code **)(*plVar2 + 0x50))(plVar2,local_res18,2);
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        (**(code **)(*param_2 + 0x18))(param_2,(longlong)iVar7 * 0x10 + lVar1);
        iVar7 = iVar7 + 1;
        *(undefined4 *)(param_2 + 4) = 7;
        iVar4 = 7;
      } while (iVar7 < *(int *)(param_1 + 0x60));
    }
    FUN_1406d2600(param_2);
  }
  if (0 < *(int *)(param_1 + 0x70)) {
    local_58[0] = 0;
    local_58[1] = 0x1e;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
    FGenericPlatformString::Memcpy(local_58[0],L"BlacklistTargetConfigurations",0x3c);
    FUN_1406d2860(param_2,local_58);
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    iVar7 = 0;
    if (0 < *(int *)(param_1 + 0x70)) {
      iVar4 = (int)param_2[4];
      do {
        lVar1 = *(longlong *)(param_1 + 0x68);
        if (((iVar4 - 2U & 0xfffffff5) != 0) || (iVar4 == 10)) {
          local_res18[0] = 0x2c;
          (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_res18,2);
        }
        FUN_1404b7a80(param_2[1]);
        plVar2 = (longlong *)param_2[1];
        if (0 < (int)*(uint *)((longlong)param_2 + 0x24)) {
          uVar5 = (ulonglong)*(uint *)((longlong)param_2 + 0x24);
          do {
            local_res18[0] = 9;
            (**(code **)(*plVar2 + 0x50))(plVar2,local_res18,2);
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        (**(code **)(*param_2 + 0x18))(param_2,(longlong)iVar7 * 0x10 + lVar1);
        iVar7 = iVar7 + 1;
        *(undefined4 *)(param_2 + 4) = 7;
        iVar4 = 7;
      } while (iVar7 < *(int *)(param_1 + 0x70));
    }
    FUN_1406d2600(param_2);
  }
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x80)) {
    local_58[0] = 0;
    local_58[1] = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
    FGenericPlatformString::Memcpy(local_58[0],L"WhitelistTargets",0x22);
    FUN_1406d2860(param_2,local_58);
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    if (0 < *(int *)(param_1 + 0x80)) {
      iVar4 = (int)param_2[4];
      do {
        lVar1 = *(longlong *)(param_1 + 0x78);
        if (((iVar4 - 2U & 0xfffffff5) != 0) || (iVar4 == 10)) {
          local_res18[0] = 0x2c;
          (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_res18,2);
        }
        FUN_1404b7a80(param_2[1]);
        plVar2 = (longlong *)param_2[1];
        if (0 < (int)*(uint *)((longlong)param_2 + 0x24)) {
          uVar5 = (ulonglong)*(uint *)((longlong)param_2 + 0x24);
          do {
            local_res18[0] = 9;
            (**(code **)(*plVar2 + 0x50))(plVar2,local_res18,2);
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        (**(code **)(*param_2 + 0x18))(param_2,(longlong)iVar7 * 0x10 + lVar1);
        iVar7 = iVar7 + 1;
        *(undefined4 *)(param_2 + 4) = 7;
        iVar4 = 7;
      } while (iVar7 < *(int *)(param_1 + 0x80));
    }
    FUN_1406d2600(param_2);
  }
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x90)) {
    local_58[0] = 0;
    local_58[1] = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
    FGenericPlatformString::Memcpy(local_58[0],L"BlacklistTargets",0x22);
    FUN_1406d2860(param_2,local_58);
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    if (0 < *(int *)(param_1 + 0x90)) {
      iVar4 = (int)param_2[4];
      do {
        lVar1 = *(longlong *)(param_1 + 0x88);
        if (((iVar4 - 2U & 0xfffffff5) != 0) || (iVar4 == 10)) {
          local_res18[0] = 0x2c;
          (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_res18,2);
        }
        FUN_1404b7a80(param_2[1]);
        plVar2 = (longlong *)param_2[1];
        if (0 < (int)*(uint *)((longlong)param_2 + 0x24)) {
          uVar5 = (ulonglong)*(uint *)((longlong)param_2 + 0x24);
          do {
            local_res18[0] = 9;
            (**(code **)(*plVar2 + 0x50))(plVar2,local_res18,2);
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        (**(code **)(*param_2 + 0x18))(param_2,(longlong)iVar7 * 0x10 + lVar1);
        iVar7 = iVar7 + 1;
        *(undefined4 *)(param_2 + 4) = 7;
        iVar4 = 7;
      } while (iVar7 < *(int *)(param_1 + 0x90));
    }
    FUN_1406d2600(param_2);
  }
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0xa0)) {
    local_58[0] = 0;
    local_58[1] = 0x19;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
    FGenericPlatformString::Memcpy(local_58[0],L"SupportedTargetPlatforms",0x32);
    FUN_1406d2860(param_2,local_58);
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    if (0 < *(int *)(param_1 + 0xa0)) {
      iVar4 = (int)param_2[4];
      do {
        lVar1 = *(longlong *)(param_1 + 0x98);
        if (((iVar4 - 2U & 0xfffffff5) != 0) || (iVar4 == 10)) {
          local_res18[0] = 0x2c;
          (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_res18,2);
        }
        FUN_1404b7a80(param_2[1]);
        plVar2 = (longlong *)param_2[1];
        if (0 < (int)*(uint *)((longlong)param_2 + 0x24)) {
          uVar5 = (ulonglong)*(uint *)((longlong)param_2 + 0x24);
          do {
            local_res18[0] = 9;
            (**(code **)(*plVar2 + 0x50))(plVar2,local_res18,2);
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        (**(code **)(*param_2 + 0x18))(param_2,(longlong)iVar7 * 0x10 + lVar1);
        iVar7 = iVar7 + 1;
        *(undefined4 *)(param_2 + 4) = 7;
        iVar4 = 7;
      } while (iVar7 < *(int *)(param_1 + 0xa0));
    }
    FUN_1406d2600(param_2);
  }
  FUN_1406d2cf0(param_2);
  return;
}



// FUNCTION 1416ca0b0 FUN_1416ca0b0 body=1905 status=ok
// SIG undefined FUN_1416ca0b0(void)

void FUN_1416ca0b0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong local_res8;
  undefined2 local_res20 [4];
  void *local_68;
  int local_60;
  void *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  
  local_res8 = param_1;
  FUN_1406d2fd0(param_2);
  iVar6 = 0;
  local_50 = 0xc;
  local_58 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"FileVersion",0x18);
  FUN_1416b4a80(param_2,&local_58,3);
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  local_58 = (void *)0x0;
  local_50 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"EngineAssociation",0x24);
  uVar2 = FString::FString(&local_48,param_1 + 8);
  FUN_1406c3f10(param_2,&local_58,uVar2);
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  local_58 = (void *)0x0;
  local_50 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
  FGenericPlatformString::Memcpy(local_58,L"Category",0x12);
  uVar2 = FString::FString(&local_48,param_1 + 0x18);
  FUN_1406c3f10(param_2,&local_58,uVar2);
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  local_58 = (void *)0x0;
  local_50 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"Description",0x18);
  uVar2 = FString::FString(&local_48,param_1 + 0x28);
  FUN_1406c3f10(param_2,&local_58,uVar2);
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0x110) != '\0') {
    local_58 = (void *)0x0;
    local_50 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"Enterprise",0x16);
    FUN_1404ab790(param_2,&local_58,*(undefined1 *)(param_1 + 0x110));
    if (local_58 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if (0 < *(int *)(param_1 + 0x40)) {
    local_58 = (void *)0x0;
    local_50 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"Modules",0x10);
    FUN_1406d2860(param_2,&local_58);
    if (local_58 != (void *)0x0) {
      FMemory::Free();
    }
    iVar5 = iVar6;
    if (0 < *(int *)(param_1 + 0x40)) {
      do {
        FUN_1416c8310((longlong)iVar5 * 0x80 + *(longlong *)(param_1 + 0x38),param_2);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_1 + 0x40));
    }
    FUN_1406d2600(param_2);
  }
  if (0 < *(int *)(param_1 + 0x50)) {
    local_58 = (void *)0x0;
    local_50 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"Plugins",0x10);
    FUN_1406d2860(param_2,&local_58);
    if (local_58 != (void *)0x0) {
      FMemory::Free();
    }
    if (0 < *(int *)(param_1 + 0x50)) {
      do {
        FUN_1416c96f0((longlong)iVar6 * 0xa8 + *(longlong *)(param_1 + 0x48),param_2);
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x50));
    }
    FUN_1406d2600(param_2);
  }
  if (0 < *(int *)(param_1 + 0x120)) {
    local_58 = (void *)0x0;
    local_50 = 0x1c;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"AdditionalPluginDirectories",0x38);
    FUN_1406d2860(param_2,&local_58);
    if (local_58 != (void *)0x0) {
      FMemory::Free();
    }
    puVar9 = *(undefined8 **)(param_1 + 0x118);
    puVar10 = puVar9 + (longlong)*(int *)(param_1 + 0x120) * 2;
    for (; puVar9 != puVar10; puVar9 = puVar9 + 2) {
      plVar3 = (longlong *)FUN_1415c3d50();
      local_60 = *(int *)(param_3 + 1);
      lVar7 = (longlong)local_60;
      local_68 = (void *)0x0;
      pvVar1 = (void *)*param_3;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                (&local_68,(2 - (uint)(local_60 != 0)) + local_60,0);
      _guard_xfg_dispatch_icall_nop(local_68,pvVar1,lVar7 * 2);
      FString::PathAppend(&local_68,&DAT_144cde6ec,0);
      (**(code **)(*plVar3 + 0xe0))(plVar3,&local_48);
      if (local_68 != (void *)0x0) {
        FMemory::Free();
      }
      FPaths::MakePlatformFilename(&local_48);
      iVar6 = *(int *)(puVar9 + 1);
      pvVar1 = (void *)*puVar9;
      local_58 = (void *)0x0;
      local_50 = CONCAT44(local_50._4_4_,iVar6);
      if (iVar6 == 0) {
        local_50 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,iVar6,0);
        _guard_xfg_dispatch_icall_nop(local_58,pvVar1,(longlong)iVar6 * 2);
      }
      puVar4 = &DAT_143f3eda8;
      if (local_40 != 0) {
        puVar4 = local_48;
      }
      FUN_141677bd0(&local_58,puVar4);
      if (local_48 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if ((((int)param_2[4] - 2U & 0xfffffff5) != 0) || ((int)param_2[4] == 10)) {
        local_res20[0] = 0x2c;
        (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],local_res20);
      }
      FUN_1404b7a80(param_2[1]);
      plVar3 = (longlong *)param_2[1];
      if (0 < (int)*(uint *)((longlong)param_2 + 0x24)) {
        uVar8 = (ulonglong)*(uint *)((longlong)param_2 + 0x24);
        do {
          local_res20[0] = 9;
          (**(code **)(*plVar3 + 0x50))(plVar3,local_res20);
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      (**(code **)(*param_2 + 0x18))(param_2);
      *(undefined4 *)(param_2 + 4) = 7;
      if (local_58 != (void *)0x0) {
        FMemory::Free();
      }
      param_1 = local_res8;
    }
    FUN_1406d2600(param_2);
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x60)) {
    local_58 = (void *)0x0;
    local_50 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"TargetPlatforms",0x20);
    FUN_1406d2860(param_2,&local_58);
    if (local_58 != (void *)0x0) {
      FMemory::Free();
    }
    if (0 < *(int *)(param_1 + 0x60)) {
      do {
        uVar2 = FName::ToString(*(longlong *)(param_1 + 0x58) + (longlong)iVar6 * 8,&local_48);
        if ((((int)param_2[4] - 2U & 0xfffffff5) != 0) || ((int)param_2[4] == 10)) {
          local_res8 = CONCAT62(local_res8._2_6_,0x2c);
          (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],&local_res8,2);
        }
        FUN_1404b7a80(param_2[1]);
        plVar3 = (longlong *)param_2[1];
        if (0 < (int)*(uint *)((longlong)param_2 + 0x24)) {
          uVar8 = (ulonglong)*(uint *)((longlong)param_2 + 0x24);
          do {
            local_res8 = CONCAT62(local_res8._2_6_,9);
            (**(code **)(*plVar3 + 0x50))(plVar3,&local_res8,2);
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        (**(code **)(*param_2 + 0x18))(param_2,uVar2);
        *(undefined4 *)(param_2 + 4) = 7;
        if (local_48 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(param_1 + 0x60));
    }
    FUN_1406d2600(param_2);
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    local_58 = (void *)0x0;
    local_50 = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"EpicSampleNameHash",0x26);
    FString::PrintfImpl(&local_48,&DAT_144ce27d4,*(undefined4 *)(param_1 + 0x68));
    FUN_1406c3f10(param_2,&local_58,&local_48);
    if (local_58 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
    local_58 = (void *)0x0;
    local_50 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"PreBuildSteps",0x1c);
    FUN_1416c7d60(param_1 + 0x70,param_2,&local_58);
    if (local_58 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if (*(int *)(param_1 + 200) != *(int *)(param_1 + 0xf4)) {
    local_58 = (void *)0x0;
    local_50 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"PostBuildSteps",0x1e);
    FUN_1416c7d60(param_1 + 0xc0,param_2,&local_58);
    if (local_58 != (void *)0x0) {
      FMemory::Free();
    }
  }
  FUN_1406d2cf0(param_2);
  return;
}



// FUNCTION 1416ca830 FUN_1416ca830 body=597 status=ok
// SIG undefined FUN_1416ca830(void)

void FUN_1416ca830(undefined8 param_1,short *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  longlong local_68;
  ulonglong local_60;
  undefined8 local_58;
  ulonglong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [16];
  
  if (0 < (int)param_3[1]) {
    local_60 = 0;
    local_68 = 0;
    if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (param_2[lVar5] != 0);
      uVar4 = (int)lVar5 + 1;
      local_60 = (ulonglong)uVar4;
      if (0 < (int)uVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      }
      FGenericPlatformString::Memcpy(local_68,param_2,(longlong)(int)uVar4 * 2);
    }
    FUN_1406d2860(param_1,&local_68);
    if (local_68 != 0) {
      FMemory::Free();
    }
    lVar7 = *param_3;
    lVar5 = lVar7 + (longlong)(int)param_3[1] * 0x18;
    for (; lVar7 != lVar5; lVar7 = lVar7 + 0x18) {
      FUN_1406d2fd0(param_1);
      local_68 = 0;
      local_60 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      FGenericPlatformString::Memcpy(local_68,L"Name",10);
      uVar2 = FString::FString(local_38,lVar7);
      FUN_1406c3f10(param_1,&local_68,uVar2);
      if (local_68 != 0) {
        FMemory::Free();
      }
      local_48 = 0;
      local_40 = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      FGenericPlatformString::Memcpy(local_48,L"LoadingPolicy",0x1c);
      pwVar6 = (wchar_t *)0x0;
      switch(*(undefined4 *)(lVar7 + 0x10)) {
      case 0:
        pwVar6 = L"Never";
        break;
      case 1:
        pwVar6 = L"Always";
        break;
      case 2:
        pwVar6 = L"Editor";
        break;
      case 3:
        pwVar6 = L"Game";
        break;
      case 4:
        pwVar6 = L"PropertyNames";
        break;
      case 5:
        pwVar6 = L"ToolTips";
      }
      local_50 = 0;
      local_58 = 0;
      if ((pwVar6 != (wchar_t *)0x0) && (*pwVar6 != L'\0')) {
        lVar3 = -1;
        do {
          lVar1 = lVar3 + 1;
          lVar3 = lVar3 + 1;
        } while (pwVar6[lVar1] != L'\0');
        uVar4 = (int)lVar3 + 1;
        local_50 = (ulonglong)uVar4;
        if (0 < (int)uVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
        }
        FGenericPlatformString::Memcpy(local_58,pwVar6,(longlong)(int)uVar4 * 2);
      }
      FUN_1406c3f10(param_1,&local_48,&local_58);
      if (local_48 != 0) {
        FMemory::Free();
      }
      FUN_1406d2cf0(param_1);
    }
    FUN_1406d2600(param_1);
  }
  return;
}



// FUNCTION 1416caaa0 FUN_1416caaa0 body=181 status=ok
// SIG undefined FUN_1416caaa0(void)

void FUN_1416caaa0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined2 local_res8 [4];
  
  if ((((int)param_1[4] - 2U & 0xfffffff5) != 0) || ((int)param_1[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  }
  FUN_1404b7a80(param_1[1]);
  plVar1 = (longlong *)param_1[1];
  if (0 < (int)*(uint *)((longlong)param_1 + 0x24)) {
    uVar2 = (ulonglong)*(uint *)((longlong)param_1 + 0x24);
    do {
      local_res8[0] = 9;
      (**(code **)(*plVar1 + 0x50))(plVar1,local_res8,2);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  *(undefined4 *)(param_1 + 4) = 7;
  return;
}



// FUNCTION 1416cab60 CopyToEmpty<FDeferredWindowsDragDropOperation> body=371 status=ok
// SIG undefined CopyToEmpty<FDeferredWindowsDragDropOperation>(void)

void TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::
     CopyToEmpty<FDeferredWindowsDragDropOperation>
               (undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  void *_Src;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  ResizeForCopy(param_1,param_3 + param_5,param_4);
  puVar2 = (undefined4 *)*param_1;
  if (param_3 != 0) {
    puVar6 = (undefined1 *)(param_2 + 0x30);
    puVar7 = (undefined8 *)(puVar2 + 8);
    do {
      *puVar2 = *(undefined4 *)(puVar6 + -0x30);
      puVar7[-3] = *(undefined8 *)(puVar6 + -0x28);
      FString::FString(puVar7 + -2,puVar6 + -0x20);
      *puVar7 = 0;
      iVar4 = *(int *)(puVar6 + -8);
      puVar5 = *(undefined8 **)(puVar6 + -0x10);
      *(int *)(puVar7 + 1) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar7,iVar4,0);
        puVar3 = (undefined8 *)*puVar7;
        do {
          *puVar3 = 0;
          iVar1 = *(int *)(puVar5 + 1);
          _Src = (void *)*puVar5;
          *(int *)(puVar3 + 1) = iVar1;
          if (iVar1 == 0) {
            *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
            ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar1 * 2);
          }
          puVar3 = puVar3 + 2;
          puVar5 = puVar5 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      *(undefined1 *)(puVar7 + 2) = *puVar6;
      puVar2 = puVar2 + 0x12;
      *(undefined4 *)(puVar7 + 3) = *(undefined4 *)(puVar6 + 8);
      puVar5 = (undefined8 *)(puVar6 + 0xc);
      puVar6 = puVar6 + 0x48;
      *(undefined8 *)((longlong)puVar7 + 0x1c) = *puVar5;
      puVar7 = puVar7 + 9;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1416cace0 FUN_1416cace0 body=520 status=ok
// SIG undefined FUN_1416cace0(void)

int * FUN_1416cace0(longlong *param_1,int *param_2,ulonglong *param_3,undefined1 *param_4)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong *_Src;
  uint uVar10;
  bool bVar11;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  _Src = local_30;
  *param_2 = local_38[0];
  *local_30 = *param_3;
  uVar2 = param_3[1];
  local_30[1] = uVar2;
  if (uVar2 != 0) {
    LOCK();
    *(int *)(uVar2 + 0xc) = *(int *)(uVar2 + 0xc) + 1;
    UNLOCK();
  }
  bVar11 = false;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FUN_1416d1900(param_1,local_res8);
    lVar9 = (longlong)local_res8[0];
    bVar11 = local_res8[0] != -1;
    if (bVar11) {
      lVar3 = *param_1;
      plVar5 = *(longlong **)(lVar3 + 8 + lVar9 * 0x18);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        _Src = local_30;
        if ((iVar6 == 1) && (plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
          _Src = local_30;
        }
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar3 + lVar9 * 0x18),_Src,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1416caebe;
    }
  }
  cVar4 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  if (cVar4 == '\0') {
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
LAB_1416caebe:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 1416caef0 FUN_1416caef0 body=776 status=ok
// SIG undefined FUN_1416caef0(void)

int * FUN_1416caef0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  ulonglong *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  ulonglong *_Src;
  void *_Dst;
  bool local_res8;
  int local_res10 [2];
  undefined8 *local_res18;
  ushort uStack_46;
  
  iVar9 = 1;
  local_res18 = param_3;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)((longlong)iVar7 * 0x38 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x38 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  local_res8 = false;
  puVar2 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar7 & 0x1f);
  _Src = (ulonglong *)((longlong)iVar7 * 0x38 + *param_1);
  puVar4 = (ulonglong *)*local_res18;
  *_Src = *puVar4;
  _Src[1] = puVar4[1];
  puVar4[1] = 0;
  *puVar4 = 0;
  _Src[2] = 0;
  _Src[3] = 0;
  _Src[4] = (ulonglong)uStack_46 << 0x10;
  *(undefined4 *)(_Src + 5) = 0;
  *(undefined4 *)(_Src + 6) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FUN_1416d16d0(param_1,local_res10,_Src);
    iVar7 = local_res10[0];
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)local_res10[0] * 0x38 + *param_1);
      if (*(longlong **)((longlong)_Dst + 0x18) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)_Dst + 0x18) + 0x10))();
      }
      plVar8 = *(longlong **)((longlong)_Dst + 8);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        iVar7 = local_res10[0];
        if ((iVar9 == 1) && (plVar8 != (longlong *)0x0)) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
          iVar7 = local_res10[0];
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x30);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar7;
      goto LAB_1416cb1cc;
    }
  }
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar10) {
    uVar6 = (uVar10 >> 1) + 8;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar12 = '\0';
    if (uVar6 != 0) {
      iVar7 = 0x1f - iVar9;
    }
    uVar6 = (uVar10 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar12 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    iVar9 = (int)(*_Src >> 4);
    uVar6 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
    uVar11 = -(iVar9 + uVar6) ^ uVar6 >> 0xd;
    uVar10 = (iVar9 - uVar6) - uVar11 ^ uVar11 >> 0xc;
    uVar6 = (uVar6 - uVar10) - uVar11 ^ uVar10 << 0x10;
    uVar11 = (uVar11 - uVar6) - uVar10 ^ uVar6 >> 5;
    uVar10 = (uVar10 - uVar6) - uVar11 ^ uVar11 >> 3;
    uVar6 = (uVar6 - uVar10) - uVar11 ^ uVar10 << 10;
    uVar10 = ((uVar11 - uVar6) - uVar10 ^ uVar6 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x34) = uVar10;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 6) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<TSubclassOf<AItem>,FClientValidatedItemInfo>,TDefaultMapHashableKeyFuncs<TSubclassOf<AItem>,FClientValidatedItemInfo,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1416cb1cc:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1416cb200 FUN_1416cb200 body=496 status=ok
// SIG undefined FUN_1416cb200(void)

int * FUN_1416cb200(longlong *param_1,int *param_2,ulonglong *param_3,undefined1 *param_4)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong *_Src;
  uint uVar9;
  bool bVar10;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  _Src = local_30;
  *param_2 = local_38[0];
  bVar10 = false;
  *local_30 = *param_3;
  local_30[1] = param_3[1];
  param_3[1] = 0;
  *param_3 = 0;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FUN_1416d1900(param_1,local_res8,local_30);
    lVar8 = (longlong)local_res8[0];
    bVar10 = local_res8[0] != -1;
    if (bVar10) {
      lVar2 = *param_1;
      plVar4 = *(longlong **)(lVar2 + 8 + lVar8 * 0x18);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        _Src = local_30;
        if ((iVar5 == 1) && (plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
          _Src = local_30;
        }
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar2 + lVar8 * 0x18),_Src,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1416cb3c7;
    }
  }
  cVar3 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar3 == '\0') {
    iVar5 = (int)(*_Src >> 4);
    uVar7 = 0x9e3779b9U - iVar5 ^ iVar5 << 8;
    uVar9 = -(uVar7 + iVar5) ^ uVar7 >> 0xd;
    uVar6 = (iVar5 - uVar7) - uVar9 ^ uVar9 >> 0xc;
    uVar7 = (uVar7 - uVar6) - uVar9 ^ uVar6 << 0x10;
    uVar9 = (uVar9 - uVar7) - uVar6 ^ uVar7 >> 5;
    uVar6 = (uVar6 - uVar7) - uVar9 ^ uVar9 >> 3;
    uVar7 = (uVar7 - uVar6) - uVar9 ^ uVar6 << 10;
    uVar6 = ((uVar9 - uVar7) - uVar6 ^ uVar7 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar6;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
LAB_1416cb3c7:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 1416cb3f0 GetModularFeatureImplementations<IInputDeviceModule> body=183 status=ok
// SIG undefined GetModularFeatureImplementations<IInputDeviceModule>(void)

longlong *
IModularFeatures::GetModularFeatureImplementations<IInputDeviceModule>
          (longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (**(code **)(*param_1 + 8))(param_1,param_3);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      lVar3 = (**(code **)(*param_1 + 0x10))(param_1,param_3,iVar4);
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = lVar3 + -8;
      }
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      iVar4 = iVar4 + 1;
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
    } while (iVar4 < iVar2);
  }
  return param_2;
}



// FUNCTION 1416cb4b0 FUN_1416cb4b0 body=394 status=ok
// SIG undefined FUN_1416cb4b0(void)

longlong * FUN_1416cb4b0(longlong *param_1,longlong *param_2,longlong *param_3,char param_4)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  void *_Buf1;
  size_t _Size;
  void *_Buf1_00;
  
  *param_2 = 0;
  param_2[1] = 0;
  pvVar1 = (void *)param_1[1];
  if (((longlong)pvVar1 - *param_1 >> 1 == 0) ||
     (pvVar2 = (void *)*param_1, param_3[1] - *param_3 >> 1 == 0)) {
    return param_2;
  }
  while( true ) {
    _Buf1_00 = pvVar2;
    pvVar2 = (void *)*param_3;
    lVar5 = param_3[1] - (longlong)pvVar2 >> 1;
    if ((lVar5 < 1) || ((longlong)pvVar1 - (longlong)_Buf1_00 >> 1 < lVar5)) break;
    _Size = param_3[1] - (longlong)pvVar2;
    iVar3 = _guard_xfg_dispatch_icall_nop(_Buf1_00,pvVar2,_Size);
    _Buf1 = _Buf1_00;
    while (iVar3 != 0) {
      if (_Buf1 == (void *)((longlong)pvVar1 + lVar5 * -2)) goto LAB_1416cb5cd;
      _Buf1 = (void *)((longlong)_Buf1 + 2);
      iVar3 = _guard_xfg_dispatch_icall_nop(_Buf1,pvVar2,_Size);
    }
    if (_Buf1 == pvVar1) break;
    pvVar2 = (void *)((longlong)_Buf1 + lVar5 * 2);
    if ((param_4 == '\0') || ((longlong)_Buf1 - (longlong)_Buf1_00 >> 1 != 0)) {
      iVar3 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
      }
      puVar4 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_2);
      *puVar4 = _Buf1_00;
      puVar4[1] = _Buf1;
    }
  }
LAB_1416cb5cd:
  if ((param_4 == '\0') || ((longlong)pvVar1 - (longlong)_Buf1_00 >> 1 != 0)) {
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
    }
    puVar4 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_2);
    *puVar4 = _Buf1_00;
    puVar4[1] = pvVar1;
  }
  return param_2;
}



// FUNCTION 1416cb640 FDeferredWindowsDragDropOperation body=240 status=ok
// SIG undefined FDeferredWindowsDragDropOperation(void)

undefined4 *
FDeferredWindowsDragDropOperation::FDeferredWindowsDragDropOperation
          (undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  FString::FString(param_1 + 4,param_2 + 4);
  *(undefined8 *)(param_1 + 8) = 0;
  iVar3 = param_2[10];
  puVar4 = *(undefined8 **)(param_2 + 8);
  param_1[10] = iVar3;
  if (iVar3 == 0) {
    param_1[0xb] = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 8,iVar3,0);
    puVar2 = *(undefined8 **)(param_1 + 8);
    do {
      *puVar2 = 0;
      iVar1 = *(int *)(puVar4 + 1);
      _Src = (void *)*puVar4;
      *(int *)(puVar2 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar2,iVar1,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar2,_Src,(longlong)iVar1 * 2);
      }
      puVar2 = puVar2 + 2;
      puVar4 = puVar4 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  param_1[0xe] = param_2[0xe];
  *(undefined8 *)(param_1 + 0xf) = *(undefined8 *)(param_2 + 0xf);
  return param_1;
}



// FUNCTION 1416cb730 FReferenceCollector body=24 status=ok
// SIG undefined FReferenceCollector(void)

undefined8 * FReferenceCollector::FReferenceCollector(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144cef050;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 1416cb750 FSafeZoneConsoleVariables body=541 status=ok
// SIG undefined FSafeZoneConsoleVariables(void)

undefined8 * FSafeZoneConsoleVariables::FSafeZoneConsoleVariables(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *local_38;
  int local_30;
  
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  uVar2 = (**(code **)(*DAT_1468b1f88 + 0x20))
                    (DAT_1468b1f88,L"r.DebugSafeZone.TitleRatio",&DAT_1464b0260,
                     L"The safe zone ratio that will be returned by FDisplayMetrics::GetDisplayMetrics on platforms that don\'t have a defined safe zone (0..1)\n default: 1.0"
                     ,0);
  param_1[1] = uVar2;
  *param_1 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  uVar2 = (**(code **)(*DAT_1468b1f88 + 0x20))
                    (DAT_1468b1f88,L"r.DebugActionZone.ActionRatio",&DAT_1464b0264,
                     L"The action zone ratio that will be returned by FDisplayMetrics::GetDisplayMetrics on platforms that don\'t have a defined safe zone (0..1)\n default: 1.0"
                     ,0);
  param_1[2] = &PTR_FUN_143f3ecf0;
  param_1[3] = uVar2;
  plVar1 = (longlong *)param_1[1];
  local_38 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  local_30 = 3;
  local_38 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&DAT_143f3ed00;
    plVar3[1] = (longlong)param_1;
    plVar3[2] = (longlong)&LAB_1416d6b20;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  (**(code **)(*plVar1 + 0x80))(plVar1,&local_38);
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) goto LAB_1416cb8aa;
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
LAB_1416cb8aa:
  plVar1 = (longlong *)param_1[3];
  local_38 = (longlong *)0x0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  local_30 = 3;
  local_38 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&DAT_143f3ed00;
    plVar3[1] = (longlong)param_1;
    plVar3[2] = (longlong)&LAB_1416d6b20;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  (**(code **)(*plVar1 + 0x80))(plVar1,&local_38);
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) {
      return param_1;
    }
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  return param_1;
}



// FUNCTION 1416cb970 FUN_1416cb970 body=2981 status=ok
// SIG undefined FUN_1416cb970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1416cb970(undefined8 *param_1,undefined8 param_2,HICON param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 **ppuVar3;
  LPVOID **pppvVar4;
  char cVar5;
  ATOM AVar6;
  DWORD DVar7;
  int iVar8;
  UINT UVar9;
  HRESULT HVar10;
  uint uVar11;
  longlong lVar12;
  code *pcVar13;
  code *pcVar14;
  code *pcVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  HIMC pHVar19;
  HKL pHVar20;
  LPVOID *ppvVar21;
  LPVOID *ppvVar22;
  undefined8 *puVar23;
  uint uVar24;
  undefined4 *pvReserved;
  uint uVar25;
  undefined1 auStackY_1a8 [32];
  byte local_178;
  byte local_177;
  byte local_176;
  byte local_175;
  byte local_174;
  byte local_173 [11];
  LPVOID *local_168;
  LPVOID *ppvStack_160;
  LPVOID *local_158;
  LPVOID *ppvStack_150;
  code *local_148;
  code *pcStack_140;
  undefined8 *local_138;
  longlong *local_130;
  undefined8 *local_128;
  longlong *local_120;
  HICON local_118;
  WNDCLASSW local_108;
  undefined1 local_b8 [16];
  int local_a8;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStackY_1a8;
  local_118 = param_3;
  lVar12 = operator_new(0x100);
  pcVar15 = (code *)0x0;
  pcVar13 = pcVar15;
  if (lVar12 != 0) {
    pcVar13 = (code *)FUN_1416cc520(lVar12);
  }
  pcVar14 = (code *)operator_new(0x18);
  pcStack_140 = pcVar15;
  if (pcVar14 != (code *)0x0) {
    *(undefined4 *)(pcVar14 + 8) = 1;
    *(undefined ***)pcVar14 = &PTR_FUN_144cefe80;
    *(undefined4 *)(pcVar14 + 0xc) = 1;
    *(code **)(pcVar14 + 0x10) = pcVar13;
    pcStack_140 = pcVar14;
  }
  local_148 = pcVar13;
  SharedPointerInternals::EnableSharedFromThis(&local_148,pcVar13,pcVar13);
  FUN_1416ccb00(param_1,&local_148);
  pcVar13 = pcStack_140;
  if (pcStack_140 != (code *)0x0) {
    LOCK();
    pcVar14 = pcStack_140 + 8;
    iVar8 = *(int *)pcVar14;
    *(int *)pcVar14 = *(int *)pcVar14 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (*(code *)**(undefined8 **)pcStack_140)(pcStack_140);
      LOCK();
      pcVar14 = pcVar13 + 0xc;
      iVar8 = *(int *)pcVar14;
      *(int *)pcVar14 = *(int *)pcVar14 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*(longlong *)pcVar13 + 8))(pcVar13,1);
      }
    }
  }
  param_1[0xf] = param_2;
  *param_1 = &PTR_FUN_144cef4f8;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xe] = &PTR_LAB_144cef628;
  *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  lVar12 = operator_new(0x4f8);
  pcVar13 = pcVar15;
  if (lVar12 != 0) {
    pcVar13 = (code *)FUN_1416ccbe0(lVar12,param_1 + 3);
  }
  pcVar14 = (code *)operator_new(0x18);
  if (pcVar14 != (code *)0x0) {
    *(undefined4 *)(pcVar14 + 8) = 1;
    *(undefined ***)pcVar14 = &PTR_FUN_144cefe50;
    *(undefined4 *)(pcVar14 + 0xc) = 1;
    *(code **)(pcVar14 + 0x10) = pcVar13;
    pcVar15 = pcVar14;
  }
  param_1[0x19] = pcVar13;
  param_1[0x1a] = pcVar15;
  SharedPointerInternals::EnableSharedFromThis(param_1 + 0x19,pcVar13,pcVar13);
  puVar23 = (undefined8 *)0x0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 1;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  uVar16 = (**(code **)(*DAT_1468b1f88 + 0x28))
                     (DAT_1468b1f88,L"Slate.DeferWindowsMessageProcessing",param_1 + 0x1e,
                      L"Whether windows message processing is deferred until tick or if they are processed immediately"
                     );
  param_1[0x20] = uVar16;
  ppuVar3 = (undefined8 **)(param_1 + 0x2e);
  param_1[0x1f] = &PTR_FUN_143f3ecf0;
  pppvVar4 = (LPVOID **)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *ppuVar3 = (undefined8 *)0x0;
  param_1[0x2f] = 0;
  *pppvVar4 = (LPVOID *)0x0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x31] = 0;
  param_1[0x37] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)((longlong)param_1 + 0xe9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xed) = 0;
  *(undefined1 *)((longlong)param_1 + 0xef) = 0;
  DisableProcessWindowsGhosting();
  local_108.hInstance = (HINSTANCE)param_1[0xf];
  local_108.hIcon = local_118;
  local_108.lpfnWndProc = FUN_1416cefc0;
  local_108.lpszClassName = L"UnrealWindow";
  local_108.style = 8;
  local_108._4_4_ = 0;
  local_108.cbClsExtra = 0;
  local_108.cbWndExtra = 0;
  local_108.hCursor = (HCURSOR)0x0;
  local_108.hbrBackground = (HBRUSH)0x0;
  local_108.lpszMenuName = (LPCWSTR)0x0;
  AVar6 = RegisterClassW(&local_108);
  if (AVar6 == 0) {
    lVar12 = FUN_1415dcd20();
    if (lVar12 != 0) {
      FUN_1415e70c0(lVar12);
    }
    MessageBoxW((HWND)0x0,L"Window Registration Failed!",L"Error!",0x30);
    lVar12 = FUN_1415dcd20();
    if (lVar12 != 0) {
      FUN_1415e5410(lVar12);
    }
  }
  OleInitialize((LPVOID)0x0);
  puVar17 = (undefined8 *)operator_new(0x100);
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = &PTR_FUN_144cef4c0;
    puVar17[1] = 0;
    puVar17[2] = 0;
    puVar17[4] = 0;
    puVar17[5] = 0;
    puVar17[6] = 0;
    puVar17[8] = 0;
    puVar17[9] = 0;
    puVar17[10] = 0;
    puVar17[0xb] = 0;
    puVar17[0xe] = 0;
    puVar17[0xf] = 0;
    *(undefined4 *)(puVar17 + 0x10) = 0xffffffff;
    *(undefined4 *)((longlong)puVar17 + 0x84) = 0;
    puVar17[0x12] = 0;
    *(undefined4 *)(puVar17 + 0x13) = 0;
    puVar17[0x16] = 0;
    puVar17[0x17] = 0;
    puVar17[0x1a] = 0;
    puVar17[0x1b] = 0;
    *(undefined4 *)(puVar17 + 0x1c) = 0xffffffff;
    *(undefined4 *)((longlong)puVar17 + 0xe4) = 0;
    puVar17[0x1e] = 0;
    *(undefined4 *)(puVar17 + 0x1f) = 0;
    puVar23 = puVar17;
  }
  plVar18 = (longlong *)operator_new(0x18);
  if (plVar18 == (longlong *)0x0) {
    plVar18 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar18 + 1) = 1;
    *(undefined4 *)((longlong)plVar18 + 0xc) = 1;
    *plVar18 = (longlong)&PTR_FUN_143f3f2e0;
    plVar18[2] = (longlong)puVar23;
  }
  local_138 = puVar23;
  local_130 = plVar18;
  SharedPointerInternals::EnableSharedFromThis(&local_138,puVar23,puVar23);
  if (ppuVar3 != &local_138) {
    *ppuVar3 = puVar23;
    local_138 = (undefined8 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x2f,&local_130);
    plVar18 = local_130;
  }
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar18 + 1;
    lVar12 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar2 = (int *)((longlong)plVar18 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar18 + 8))(plVar18,1);
      }
    }
  }
  puVar23 = *ppuVar3;
  *(undefined4 *)(puVar23 + 3) = 0;
  pHVar19 = _guard_xfg_dispatch_icall_nop();
  puVar23[0x14] = pHVar19;
  pHVar20 = GetKeyboardLayout(0);
  DVar7 = _guard_xfg_dispatch_icall_nop(pHVar20,4);
  *(DWORD *)(puVar23 + 0x15) = DVar7;
  cVar5 = FWindowsTextInputMethodSystem::InitializeTSF(puVar23);
  if (cVar5 == '\0') {
    local_120 = (longlong *)0x0;
    if (ppuVar3 != &local_128) {
      *ppuVar3 = (undefined8 *)0x0;
      local_128 = (undefined8 *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x2f,&local_120);
      plVar18 = local_120;
      if (local_120 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_120 + 1;
        lVar12 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_120)(local_120);
          LOCK();
          piVar2 = (int *)((longlong)plVar18 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_120 + 8))(local_120,1);
          }
        }
      }
    }
  }
  else {
    pHVar20 = GetKeyboardLayout(0);
    iVar8 = (**(code **)(*(longlong *)puVar23[5] + 0x50))();
    if (((iVar8 < 0) || (local_60 == 0)) || (local_a8 != 1)) {
      UVar9 = _guard_xfg_dispatch_icall_nop(pHVar20,(LPWSTR)0x0,0);
      if (UVar9 == 0) goto LAB_1416cbe6e;
      *(undefined4 *)(puVar23 + 3) = 1;
    }
    else {
      *(undefined4 *)(puVar23 + 3) = 2;
    }
    FWindowsTextInputMethodSystem::LogActiveIMEInfo(puVar23);
  }
LAB_1416cbe6e:
  ppvVar22 = (LPVOID *)0x0;
  ppvVar21 = (LPVOID *)operator_new(8);
  local_168 = ppvVar22;
  if (ppvVar21 != (LPVOID *)0x0) {
    *ppvVar21 = (LPVOID)0x0;
    local_168 = ppvVar21;
  }
  ppvVar21 = (LPVOID *)operator_new(0x18);
  if (ppvVar21 != (LPVOID *)0x0) {
    *(undefined4 *)(ppvVar21 + 1) = 1;
    *ppvVar21 = &PTR_DestroyObject_144cefe70;
    *(undefined4 *)((longlong)ppvVar21 + 0xc) = 1;
    ppvVar21[2] = local_168;
    ppvVar22 = ppvVar21;
  }
  ppvStack_160 = ppvVar22;
  SharedPointerInternals::EnableSharedFromThis(&local_168,local_168,local_168);
  ppvVar22 = local_168;
  uVar25 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x38);
  pvReserved = (undefined4 *)(ulonglong)uVar25;
  if ((int)uVar25 < DAT_1468509e4) {
    pvReserved = &DAT_1468509e4;
    _Init_thread_header();
    if (DAT_1468509e4 == -1) {
      uVar16 = FCommandLine::Get();
      DAT_1468509e0 = FParse::Param(uVar16,L"nullrhi");
      pvReserved = &DAT_1468509e4;
      _Init_thread_footer();
    }
  }
  if (((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) &&
     ((DAT_1468509e0 == '\0' &&
      ((HVar10 = FWindowsPlatformMisc::CoInitialize(pvReserved), (char)HVar10 != '\0' &&
       (HVar10 = CoCreateInstance((IID *)&DAT_145ac61a0,(LPUNKNOWN)0x0,1,(IID *)&DAT_145ac6180,
                                  ppvVar22), HVar10 != 0)))))) {
    *ppvVar22 = (LPVOID)0x0;
  }
  local_158 = local_168;
  ppvStack_150 = ppvStack_160;
  if (ppvStack_160 != (LPVOID *)0x0) {
    LOCK();
    *(int *)(ppvStack_160 + 1) = *(int *)(ppvStack_160 + 1) + 1;
    UNLOCK();
  }
  if (pppvVar4 != &local_158) {
    *pppvVar4 = local_168;
    local_158 = (LPVOID *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x31,&ppvStack_150);
  }
  ppvVar22 = ppvStack_150;
  if (ppvStack_150 != (LPVOID *)0x0) {
    LOCK();
    ppvVar21 = ppvStack_150 + 1;
    iVar8 = *(int *)ppvVar21;
    *(int *)ppvVar21 = *(int *)ppvVar21 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)*ppvStack_150)(ppvStack_150);
      LOCK();
      piVar2 = (int *)((longlong)ppvVar22 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)((longlong)*ppvStack_150 + 8))(ppvStack_150,1);
      }
    }
  }
  ppvVar22 = ppvStack_160;
  if (ppvStack_160 != (LPVOID *)0x0) {
    LOCK();
    ppvVar21 = ppvStack_160 + 1;
    iVar8 = *(int *)ppvVar21;
    *(int *)ppvVar21 = *(int *)ppvVar21 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)*ppvStack_160)(ppvStack_160);
      LOCK();
      piVar2 = (int *)((longlong)ppvVar22 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)((longlong)*ppvVar22 + 8))(ppvVar22,1);
      }
    }
  }
  FDisplayMetrics::RebuildDisplayMetrics(param_1 + 0x22);
  puVar23 = param_1 + 0x32;
  *puVar23 = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)puVar23 = 8;
  *(undefined4 *)(param_1 + 0x33) = 8;
  *(undefined4 *)(param_1 + 0x34) = 0x18;
  SystemParametersInfoW(0x3a,8,puVar23,0);
  SystemParametersInfoW(0x34,8,param_1 + 0x33,0);
  SystemParametersInfoW(0x32,0x18,param_1 + 0x34,0);
  local_173[0] = (byte)(*(uint *)((longlong)param_1 + 0x194) >> 2) & 1;
  local_176 = (byte)(*(uint *)((longlong)param_1 + 0x194) >> 3) & 1;
  local_178 = (byte)(*(uint *)((longlong)param_1 + 0x19c) >> 2) & 1;
  local_175 = (byte)(*(uint *)((longlong)param_1 + 0x19c) >> 3) & 1;
  local_174 = (byte)(*(uint *)((longlong)param_1 + 0x1a4) >> 3) & 1;
  local_177 = (byte)(*(uint *)((longlong)param_1 + 0x1a4) >> 2) & 1;
  FConfigCacheIni::GetBool
            (DAT_1468b6148,L"WindowsApplication.Accessibility",L"StickyKeysHotkey",local_173);
  FConfigCacheIni::GetBool
            (DAT_1468b6148,L"WindowsApplication.Accessibility",L"ToggleKeysHotkey",&local_178);
  FConfigCacheIni::GetBool
            (DAT_1468b6148,L"WindowsApplication.Accessibility",L"FilterKeysHotkey",&local_177);
  FConfigCacheIni::GetBool
            (DAT_1468b6148,L"WindowsApplication.Accessibility",L"StickyKeysConfirmation",&local_176)
  ;
  FConfigCacheIni::GetBool
            (DAT_1468b6148,L"WindowsApplication.Accessibility",L"ToggleKeysConfirmation",&local_175)
  ;
  FConfigCacheIni::GetBool
            (DAT_1468b6148,L"WindowsApplication.Accessibility",L"FilterKeysConfirmation",&local_174)
  ;
  if (local_173[0] == 0) {
    uVar25 = *(uint *)((longlong)param_1 + 0x194) & 0xfffffffb;
  }
  else {
    uVar25 = *(uint *)((longlong)param_1 + 0x194) | 4;
  }
  if (local_178 == 0) {
    uVar11 = *(uint *)((longlong)param_1 + 0x19c) & 0xfffffffb;
  }
  else {
    uVar11 = *(uint *)((longlong)param_1 + 0x19c) | 4;
  }
  if (local_177 == 0) {
    uVar24 = *(uint *)((longlong)param_1 + 0x1a4) & 0xfffffffb;
  }
  else {
    uVar24 = *(uint *)((longlong)param_1 + 0x1a4) | 4;
  }
  if (local_176 == 0) {
    uVar25 = uVar25 & 0xfffffff7;
  }
  else {
    uVar25 = uVar25 | 8;
  }
  *(uint *)((longlong)param_1 + 0x194) = uVar25;
  if (local_175 == 0) {
    uVar11 = uVar11 & 0xfffffff7;
  }
  else {
    uVar11 = uVar11 | 8;
  }
  *(uint *)((longlong)param_1 + 0x19c) = uVar11;
  if (local_174 == 0) {
    uVar24 = uVar24 & 0xfffffff7;
  }
  else {
    uVar24 = uVar24 | 8;
  }
  *(uint *)((longlong)param_1 + 0x1a4) = uVar24;
  FConfigCacheIni::SetBool(DAT_1468b6148,L"WindowsApplication.Accessibility",L"StickyKeysHotkey");
  FConfigCacheIni::SetBool
            (DAT_1468b6148,L"WindowsApplication.Accessibility",L"ToggleKeysHotkey",local_178);
  FConfigCacheIni::SetBool
            (DAT_1468b6148,L"WindowsApplication.Accessibility",L"FilterKeysHotkey",local_177);
  FConfigCacheIni::SetBool
            (DAT_1468b6148,L"WindowsApplication.Accessibility",L"StickyKeysConfirmation",local_176);
  FConfigCacheIni::SetBool
            (DAT_1468b6148,L"WindowsApplication.Accessibility",L"ToggleKeysConfirmation",local_175);
  FConfigCacheIni::SetBool
            (DAT_1468b6148,L"WindowsApplication.Accessibility",L"FilterKeysConfirmation",local_174);
  FConfigCacheIni::Flush(DAT_1468b6148,0,&DAT_1468e2360);
  pcStack_140 = (code *)((ulonglong)pcStack_140 & 0xffffffff00000000);
  local_148 = FUN_1416de270;
  plVar18 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar18 != (longlong *)0x0) {
    plVar18[1] = (longlong)param_1;
    *plVar18 = (longlong)&PTR_GetPoolName_143f77a38;
    plVar18[2] = (longlong)local_148;
    plVar18[3] = (longlong)pcStack_140;
    lVar12 = FDelegateHandle::GenerateNewID();
    plVar18[5] = lVar12;
    *plVar18 = (longlong)&PTR_GetPoolName_143f77a80;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af010,1);
    (**(code **)(*plVar18 + 0x20))(plVar18,local_b8);
    iVar8 = DAT_1464af018;
    lVar12 = (longlong)DAT_1464af018;
    DAT_1464af018 = DAT_1464af018 + 1;
    if (DAT_1464af01c < DAT_1464af018) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af010,iVar8);
    }
    puVar23 = (undefined8 *)(lVar12 * 0x10 + DAT_1464af010);
    *puVar23 = plVar18;
    *(undefined4 *)(puVar23 + 1) = 3;
  }
  FWindowsApplication::AllowAccessibilityShortcutKeys(param_1,0);
  FWindowsApplication::QueryConnectedMice(param_1);
  uVar16 = FCommandLine::Get();
  cVar5 = FParse::Param(uVar16,L"NoGamepad");
  if (cVar5 != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x83) = 1;
  }
  return param_1;
}



// FUNCTION 1416cc520 FUN_1416cc520 body=1439 status=ok
// SIG undefined FUN_1416cc520(void)

undefined8 * FUN_1416cc520(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  short *psVar4;
  HCURSOR pHVar5;
  longlong lVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong local_res10;
  HCURSOR local_f8;
  undefined8 local_f0;
  HCURSOR local_e8;
  undefined8 local_e0;
  HCURSOR local_d8;
  undefined8 local_d0;
  HCURSOR local_c8;
  int local_c0;
  int local_bc;
  HCURSOR local_b8;
  int local_b0;
  int local_ac;
  HCURSOR local_a8;
  int local_a0;
  int local_9c;
  longlong local_98;
  int local_90;
  longlong local_88;
  int local_80;
  longlong local_78;
  int local_70;
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  
  puVar9 = param_1 + 2;
  iVar10 = -1;
  *param_1 = &PTR_GetPosition_144cef790;
  local_res10 = 0xf;
  do {
    pHVar5 = (HCURSOR)0x0;
    *puVar9 = 0;
    puVar9[0xf] = 0;
    switch(iVar10) {
    case 0:
      pHVar5 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
      break;
    case 1:
      pHVar5 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f01);
      break;
    case 2:
      pHVar5 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f84);
      break;
    case 3:
      pHVar5 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f85);
      break;
    case 4:
      pHVar5 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f82);
      break;
    case 5:
      pHVar5 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f83);
      break;
    case 6:
      pHVar5 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f86);
      break;
    case 7:
      pHVar5 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f03);
      break;
    case 8:
      goto switchD_1416cc5a3_caseD_8;
    case 9:
      puVar3 = (undefined8 *)FPaths::EngineContentDir(local_68);
      if (*(int *)(puVar3 + 1) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)*puVar3;
      }
      FString::PrintfImpl(&local_98,L"%sEditor/Slate/Cursor/grabhand.cur",puVar8);
      psVar4 = (short *)FUN_1416ac480();
      local_f8 = (HCURSOR)0x0;
      iVar7 = 0;
      iVar2 = 0;
      if ((psVar4 != (short *)0x0) && (*psVar4 != 0)) {
        lVar6 = -1;
        do {
          lVar1 = lVar6 + 1;
          lVar6 = lVar6 + 1;
        } while (psVar4[lVar1] != 0);
        local_f0._0_4_ = (int)lVar6 + 1;
        lVar6 = (longlong)(int)local_f0;
        local_f0._4_4_ = 0;
        if (0 < (int)local_f0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
        }
        iVar2 = local_f0._4_4_;
        iVar7 = (int)local_f0;
        pHVar5 = local_f8;
        FGenericPlatformString::Memcpy(local_f8,psVar4,lVar6 * 2);
      }
      local_bc = iVar2;
      local_c0 = iVar7;
      if (local_90 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = local_90 + -1;
      }
      if ((local_c0 != 0) || (iVar2 = 2, iVar7 == -1)) {
        iVar2 = 1;
      }
      local_f8 = (HCURSOR)0x0;
      local_f0 = 0;
      local_c8 = pHVar5;
      if (local_bc < local_c0 + iVar2 + iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c8);
      }
      FString::PathAppend(&local_c8,local_98,iVar7);
      pHVar5 = (HCURSOR)&DAT_143f3eda8;
      if (local_c0 != 0) {
        pHVar5 = local_c8;
      }
      pHVar5 = LoadCursorFromFileW((LPCWSTR)pHVar5);
      if (local_c8 != (HCURSOR)0x0) {
        FMemory::Free();
      }
      lVar6 = local_68[0];
      if (local_98 != 0) {
        FMemory::Free();
        lVar6 = local_68[0];
      }
      goto LAB_1416cc785;
    case 10:
      puVar3 = (undefined8 *)FPaths::EngineContentDir(local_58);
      if (*(int *)(puVar3 + 1) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)*puVar3;
      }
      FString::PrintfImpl(&local_88,L"%sEditor/Slate/Cursor/grabhand_closed.cur",puVar8);
      psVar4 = (short *)FUN_1416ac480();
      local_e8 = (HCURSOR)0x0;
      iVar7 = 0;
      iVar2 = 0;
      if ((psVar4 != (short *)0x0) && (*psVar4 != 0)) {
        lVar6 = -1;
        do {
          lVar1 = lVar6 + 1;
          lVar6 = lVar6 + 1;
        } while (psVar4[lVar1] != 0);
        local_e0._0_4_ = (int)lVar6 + 1;
        lVar6 = (longlong)(int)local_e0;
        local_e0._4_4_ = 0;
        if (0 < (int)local_e0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
        }
        iVar2 = local_e0._4_4_;
        iVar7 = (int)local_e0;
        pHVar5 = local_e8;
        FGenericPlatformString::Memcpy(local_e8,psVar4,lVar6 * 2);
      }
      local_ac = iVar2;
      local_b0 = iVar7;
      if (local_80 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = local_80 + -1;
      }
      if ((local_b0 != 0) || (iVar2 = 2, iVar7 == -1)) {
        iVar2 = 1;
      }
      local_e8 = (HCURSOR)0x0;
      local_e0 = 0;
      local_b8 = pHVar5;
      if (local_ac < local_b0 + iVar2 + iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b8);
      }
      FString::PathAppend(&local_b8,local_88,iVar7);
      pHVar5 = (HCURSOR)&DAT_143f3eda8;
      if (local_b0 != 0) {
        pHVar5 = local_b8;
      }
      pHVar5 = LoadCursorFromFileW((LPCWSTR)pHVar5);
      if (local_b8 != (HCURSOR)0x0) {
        FMemory::Free();
      }
      lVar6 = local_58[0];
      if (local_88 != 0) {
        FMemory::Free();
        lVar6 = local_58[0];
      }
LAB_1416cc785:
      if (lVar6 != 0) {
        FMemory::Free();
      }
      if (pHVar5 == (HCURSOR)0x0) {
switchD_1416cc5a3_caseD_8:
        pHVar5 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f89);
      }
      break;
    case 0xb:
      pHVar5 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f88);
      break;
    case 0xc:
      puVar3 = (undefined8 *)FPaths::EngineContentDir(local_48);
      if (*(int *)(puVar3 + 1) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = (undefined2 *)*puVar3;
      }
      FString::PrintfImpl(&local_78,L"%sEditor/Slate/Icons/eyedropper.cur",puVar8);
      psVar4 = (short *)FUN_1416ac480();
      local_d8 = (HCURSOR)0x0;
      iVar7 = 0;
      iVar2 = 0;
      if ((psVar4 != (short *)0x0) && (*psVar4 != 0)) {
        lVar6 = -1;
        do {
          lVar1 = lVar6 + 1;
          lVar6 = lVar6 + 1;
        } while (psVar4[lVar1] != 0);
        local_d0._0_4_ = (int)lVar6 + 1;
        lVar6 = (longlong)(int)local_d0;
        local_d0._4_4_ = 0;
        if (0 < (int)local_d0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
        }
        iVar2 = local_d0._4_4_;
        iVar7 = (int)local_d0;
        pHVar5 = local_d8;
        FGenericPlatformString::Memcpy(local_d8,psVar4,lVar6 * 2);
      }
      local_9c = iVar2;
      local_a0 = iVar7;
      if (local_70 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = local_70 + -1;
      }
      if ((local_a0 != 0) || (iVar2 = 2, iVar7 == -1)) {
        iVar2 = 1;
      }
      local_d8 = (HCURSOR)0x0;
      local_d0 = 0;
      local_a8 = pHVar5;
      if (local_9c < iVar7 + iVar2 + local_a0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_a8);
      }
      FString::PathAppend(&local_a8,local_78,iVar7);
      pHVar5 = (HCURSOR)&DAT_143f3eda8;
      if (local_a0 != 0) {
        pHVar5 = local_a8;
      }
      pHVar5 = LoadCursorFromFileW((LPCWSTR)pHVar5);
      if (local_a8 != (HCURSOR)0x0) {
        FMemory::Free();
      }
      if (local_78 != 0) {
        FMemory::Free();
      }
      if (local_48[0] != 0) {
        FMemory::Free();
      }
    }
    *puVar9 = pHVar5;
    iVar10 = iVar10 + 1;
    puVar9 = puVar9 + 1;
    local_res10 = local_res10 + -1;
    if (local_res10 == 0) {
      *(undefined4 *)(param_1 + 1) = 1;
      pHVar5 = (HCURSOR)param_1[0x12];
      if (pHVar5 == (HCURSOR)0x0) {
        pHVar5 = (HCURSOR)param_1[3];
      }
      SetCursor(pHVar5);
      return param_1;
    }
  } while( true );
}



// FUNCTION 1416ccb00 FUN_1416ccb00 body=224 status=ok
// SIG undefined FUN_1416ccb00(void)

undefined8 * FUN_1416ccb00(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cef148;
  param_1[1] = *param_2;
  lVar1 = param_2[1];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  puVar2 = (undefined8 *)operator_new(8);
  puVar3 = (undefined8 *)0x0;
  puVar4 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144316150;
    puVar4 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar4;
    puVar3 = puVar2;
  }
  param_1[3] = puVar4;
  param_1[4] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_1 + 3,puVar4,puVar4);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 2;
  return param_1;
}



// FUNCTION 1416ccbe0 FUN_1416ccbe0 body=799 status=ok
// SIG undefined FUN_1416ccbe0(void)

undefined4 * FUN_1416ccbe0(undefined4 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x43) = 0;
  *(undefined8 *)(param_1 + 0x45) = 0;
  *(undefined8 *)(param_1 + 0x83) = 0;
  *(undefined8 *)(param_1 + 0x85) = 0;
  *(undefined8 *)(param_1 + 0xc3) = 0;
  *(undefined8 *)(param_1 + 0xc5) = 0;
  *(undefined8 *)(param_1 + 0x103) = 0;
  *(undefined8 *)(param_1 + 0x105) = 0;
  *(undefined8 *)(param_1 + 0x10a) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0;
  *(undefined8 *)(param_1 + 0x10e) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x112) = 0;
  *(undefined8 *)(param_1 + 0x114) = 0;
  *(undefined8 *)(param_1 + 0x116) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x11a) = 0;
  *(undefined8 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x11e) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x122) = 0;
  *(undefined8 *)(param_1 + 0x124) = 0;
  *(undefined8 *)(param_1 + 0x126) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x12a) = 0;
  *(undefined8 *)(param_1 + 300) = 0;
  *(undefined8 *)(param_1 + 0x12e) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x132) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0;
  *(undefined8 *)(param_1 + 0x136) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x13a) = *param_2;
  lVar1 = param_2[1];
  *(longlong *)(param_1 + 0x13c) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  _guard_xfg_dispatch_icall_nop(param_1 + 8,0,0x100);
  param_1[0x41] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x48,0,0x100);
  param_1[0x81] = 1;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x88,0,0x100);
  param_1[0xc1] = 2;
  _guard_xfg_dispatch_icall_nop(param_1 + 200,0,0x100);
  param_1[0x101] = 3;
  *param_1 = 0x1000001;
  param_1[0x108] = 0x3e4ccccd;
  param_1[0x109] = 0x3dcccccd;
  param_1[1] = 0x5040302;
  param_1[2] = 0x9080607;
  param_1[3] = 0xd0c0b0a;
  param_1[4] = 0x11100f0e;
  param_1[5] = 0x15141312;
  *(undefined2 *)(param_1 + 6) = 0x1716;
  *(undefined8 *)(param_1 + 0x10a) = DAT_1469e5bf8;
  *(undefined8 *)(param_1 + 0x10c) = DAT_1469e5c00;
  *(undefined8 *)(param_1 + 0x10e) = DAT_1469e5c08;
  *(undefined8 *)(param_1 + 0x110) = DAT_1469e5c10;
  *(undefined8 *)(param_1 + 0x112) = DAT_1469e5c18;
  *(undefined8 *)(param_1 + 0x114) = DAT_1469e5c20;
  *(undefined8 *)(param_1 + 0x116) = DAT_1469e5bf0;
  *(undefined8 *)(param_1 + 0x118) = DAT_1469e5bd8;
  *(undefined8 *)(param_1 + 0x11a) = DAT_1469e5bc8;
  *(undefined8 *)(param_1 + 0x11c) = DAT_1469e5bd0;
  *(undefined8 *)(param_1 + 0x11e) = DAT_1469e5c28;
  *(undefined8 *)(param_1 + 0x120) = DAT_1469e5c30;
  *(undefined8 *)(param_1 + 0x122) = DAT_1469e5c38;
  *(undefined8 *)(param_1 + 0x124) = DAT_1469e5c40;
  *(undefined8 *)(param_1 + 0x126) = DAT_1469e5c50;
  *(undefined8 *)(param_1 + 0x128) = DAT_1469e5c48;
  *(undefined8 *)(param_1 + 0x12a) = DAT_1469e5c58;
  *(undefined8 *)(param_1 + 300) = DAT_1469e5c60;
  *(undefined8 *)(param_1 + 0x12e) = DAT_1469e5c70;
  *(undefined8 *)(param_1 + 0x130) = DAT_1469e5c68;
  *(undefined8 *)(param_1 + 0x132) = DAT_1469e5c78;
  *(undefined8 *)(param_1 + 0x134) = DAT_1469e5c80;
  *(undefined8 *)(param_1 + 0x136) = DAT_1469e5c90;
  *(undefined8 *)(param_1 + 0x138) = DAT_1469e5c88;
  return param_1;
}



// FUNCTION 1416ccf00 FUN_1416ccf00 body=121 status=ok
// SIG undefined FUN_1416ccf00(void)

void FUN_1416ccf00(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar4 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar5 = (longlong *)(lVar4 + 8);
    do {
      plVar3 = (longlong *)*plVar5;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      plVar5 = plVar5 + 8;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar4 = *param_1;
  }
  if (lVar4 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1416ccf80 FUN_1416ccf80 body=111 status=ok
// SIG undefined FUN_1416ccf80(void)

void FUN_1416ccf80(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144cef050;
  if (DAT_1468c217e == '\0') {
    FWindowsPlatformMisc::LocalPrint(L"!!! [FGenericWindow::~FGenericWindow()] - OAK-182661 ??? \n")
    ;
  }
  plVar4 = (longlong *)param_1[2];
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



// FUNCTION 1416ccff0 FUN_1416ccff0 body=826 status=ok
// SIG undefined FUN_1416ccff0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416ccff0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  undefined1 auStack_2048 [32];
  longlong *local_2028 [2];
  undefined1 local_2018 [2048];
  undefined1 local_1818 [2048];
  undefined1 local_1018 [2048];
  undefined1 local_818 [2048];
  ulonglong local_18;
  undefined8 local_10;
  
  local_10 = 0x1416cd005;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2048;
  lVar6 = param_1[0x2e];
  *param_1 = &PTR_FUN_144cef4f8;
  param_1[0xe] = &PTR_LAB_144cef628;
  if (lVar6 == 0) goto LAB_1416cd14d;
  local_2028[0] = (longlong *)0x0;
  iVar4 = (**(code **)**(undefined8 **)(lVar6 + 0x30))
                    (*(undefined8 **)(lVar6 + 0x30),&DAT_145ac6280,local_2028);
  if ((iVar4 < 0) || (local_2028[0] == (longlong *)0x0)) {
    FWindowsPlatformMisc::GetSystemErrorMessage(local_2018,0x400,iVar4);
    if (local_2028[0] != (longlong *)0x0) goto LAB_1416cd088;
  }
  else {
LAB_1416cd088:
    if (*(longlong *)(lVar6 + 0x48) != 0) {
      if ((*(int *)(*(longlong *)(lVar6 + 0x48) + 0x14) != -1) &&
         (iVar4 = (**(code **)(*local_2028[0] + 0x20))(), iVar4 < 0)) {
        FWindowsPlatformMisc::GetSystemErrorMessage(local_1818,0x400,iVar4);
      }
      if ((*(int *)(*(longlong *)(lVar6 + 0x48) + 0x10) != -1) &&
         (iVar4 = (**(code **)(*local_2028[0] + 0x20))(), iVar4 < 0)) {
        FWindowsPlatformMisc::GetSystemErrorMessage(local_1018,0x400,iVar4);
      }
    }
  }
  if (*(longlong **)(lVar6 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar6 + 0x48) + 0x10))();
    *(undefined8 *)(lVar6 + 0x48) = 0;
  }
  iVar4 = (**(code **)(**(longlong **)(lVar6 + 0x30) + 0x20))();
  if (iVar4 < 0) {
    FWindowsPlatformMisc::GetSystemErrorMessage(local_818,0x400,iVar4);
  }
  if (*(longlong **)(lVar6 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(lVar6 + 0x30) + 0x10))();
    *(undefined8 *)(lVar6 + 0x30) = 0;
  }
  _guard_xfg_dispatch_icall_nop(*(HIMC *)(lVar6 + 0xa0));
  if (local_2028[0] != (longlong *)0x0) {
    (**(code **)(*local_2028[0] + 0x10))();
  }
LAB_1416cd14d:
  CoUninitialize();
  OleUninitialize();
  iVar4 = *(int *)(param_1 + 0x38);
  lVar6 = param_1[0x37];
  if (iVar4 != 0) {
    pcVar5 = (char *)(lVar6 + 4);
    do {
      if (*pcVar5 != '\0') {
        *pcVar5 = '\0';
      }
      pcVar5 = pcVar5 + 8;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar6 = param_1[0x37];
  }
  if (lVar6 != 0) {
    FMemory::Free(lVar6);
  }
  plVar3 = (longlong *)param_1[0x31];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar3 = (longlong *)param_1[0x2f];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  FUN_141189610(param_1 + 0x23);
  param_1[0x1f] = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,param_1[0x20],1);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x1b);
  plVar3 = (longlong *)param_1[0x1a];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x17);
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  iVar4 = *(int *)(param_1 + 0x14);
  lVar6 = param_1[0x13];
  if (iVar4 != 0) {
    lVar6 = lVar6 + 0x10;
    do {
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TArray<FString,FDefaultAllocator>_>
                (lVar6);
      lVar6 = lVar6 + 0x48;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar6 = param_1[0x13];
  }
  if (lVar6 != 0) {
    FMemory::Free();
  }
  FUN_1416ccf00(param_1 + 0x11);
  param_1[0xe] = &PTR_FUN_144cef440;
  IOnlineSubsystem::~IOnlineSubsystem(param_1);
  return;
}



// FUNCTION 1416cd330 ~IOnlineSubsystem body=179 status=ok
// SIG undefined ~IOnlineSubsystem(void)

void IOnlineSubsystem::~IOnlineSubsystem(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144cef148;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xb);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 5);
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
  plVar4 = (longlong *)param_1[2];
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



// FUNCTION 1416cd3f0 operator= body=469 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TWeakPtr<FGenericWindow,0>,DefaultKeyFuncs<TWeakPtr<FGenericWindow,0>,0>,FDefaultSetAllocator>
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
    FUN_1416d1470(param_1,iVar9);
    cVar3 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
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
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1416cd52d;
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
LAB_1416cd52d:
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
        FUN_1416cace0(param_1,local_res8,*param_2 + (longlong)iStack_3c * 0x18,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 1416cd5d0 operator= body=148 status=ok
// SIG undefined operator=(void)

longlong FDragDropOLEData::operator=(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  FString::operator=();
  puVar1 = (undefined8 *)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)(param_2 + 0x10)) {
    plVar2 = (longlong *)*puVar1;
    for (iVar3 = *(int *)(param_1 + 0x18); iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    TArray<FString,FDefaultAllocator>::CopyToEmpty<FString>
              (puVar1,*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18),
               *(undefined4 *)(param_1 + 0x1c),0);
  }
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  return param_1;
}



// FUNCTION 1416cd670 FUN_1416cd670 body=981 status=ok
// SIG undefined FUN_1416cd670(void)

undefined8 * FUN_1416cd670(undefined8 param_1,undefined8 *param_2)

{
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  longlong local_28 [2];
  undefined4 *local_18;
  longlong *local_10;
  
  local_28[1] = 0x1a;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"WM_INPUTLANGCHANGEREQUEST",0x34);
  local_18 = local_res10;
  local_res10[0] = 0x50;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"WM_INPUTLANGCHANGE",0x26);
  local_18 = local_res10;
  local_res10[0] = 0x51;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"WM_IME_SETCONTEXT",0x24);
  local_18 = local_res10;
  local_res10[0] = 0x281;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"WM_IME_NOTIFY",0x1c);
  local_18 = local_res10;
  local_res10[0] = 0x282;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"WM_IME_REQUEST",0x1e);
  local_18 = local_res10;
  local_res10[0] = 0x288;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"WM_IME_STARTCOMPOSITION",0x30);
  local_18 = local_res10;
  local_res10[0] = 0x10d;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"WM_IME_COMPOSITION",0x26);
  local_18 = local_res10;
  local_res10[0] = 0x10f;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"WM_IME_ENDCOMPOSITION",0x2c);
  local_18 = local_res10;
  local_res10[0] = 0x10e;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"WM_IME_CHAR",0x18);
  local_18 = local_res10;
  local_res10[0] = 0x286;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1416cda50 FUN_1416cda50 body=1486 status=ok
// SIG undefined FUN_1416cda50(void)

undefined8 * FUN_1416cda50(undefined8 param_1,undefined8 *param_2)

{
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  longlong local_28 [2];
  undefined4 *local_18;
  longlong *local_10;
  
  local_28[1] = 0x16;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"IMN_CLOSESTATUSWINDOW",0x2c);
  local_18 = local_res10;
  local_res10[0] = 1;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"IMN_OPENSTATUSWINDOW",0x2a);
  local_18 = local_res10;
  local_res10[0] = 2;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"IMN_CHANGECANDIDATE",0x28);
  local_18 = local_res10;
  local_res10[0] = 3;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"IMN_CLOSECANDIDATE",0x26);
  local_18 = local_res10;
  local_res10[0] = 4;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"IMN_OPENCANDIDATE",0x24);
  local_18 = local_res10;
  local_res10[0] = 5;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"IMN_SETCONVERSIONMODE",0x2c);
  local_18 = local_res10;
  local_res10[0] = 6;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"IMN_SETSENTENCEMODE",0x28);
  local_18 = local_res10;
  local_res10[0] = 7;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"IMN_SETOPENSTATUS",0x24);
  local_18 = local_res10;
  local_res10[0] = 8;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"IMN_SETCANDIDATEPOS",0x28);
  local_18 = local_res10;
  local_res10[0] = 9;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"IMN_SETCOMPOSITIONFONT",0x2e);
  local_18 = local_res10;
  local_res10[0] = 10;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x19;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"IMN_SETCOMPOSITIONWINDOW",0x32);
  local_18 = local_res10;
  local_res10[0] = 0xb;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"IMN_SETSTATUSWINDOWPOS",0x2e);
  local_18 = local_res10;
  local_res10[0] = 0xc;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"IMN_GUIDELINE",0x1c);
  local_18 = local_res10;
  local_res10[0] = 0xd;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"IMN_PRIVATE",0x18);
  local_18 = local_res10;
  local_res10[0] = 0xe;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1416ce020 FUN_1416ce020 body=779 status=ok
// SIG undefined FUN_1416ce020(void)

undefined8 * FUN_1416ce020(undefined8 param_1,undefined8 *param_2)

{
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  longlong local_28 [2];
  undefined4 *local_18;
  longlong *local_10;
  
  local_28[1] = 0x14;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"IMR_CANDIDATEWINDOW",0x28);
  local_18 = local_res10;
  local_res10[0] = 2;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"IMR_COMPOSITIONFONT",0x28);
  local_18 = local_res10;
  local_res10[0] = 3;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"IMR_COMPOSITIONWINDOW",0x2c);
  local_18 = local_res10;
  local_res10[0] = 1;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x1b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"IMR_CONFIRMRECONVERTSTRING",0x36);
  local_18 = local_res10;
  local_res10[0] = 5;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"IMR_DOCUMENTFEED",0x22);
  local_18 = local_res10;
  local_res10[0] = 7;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"IMR_QUERYCHARPOSITION",0x2c);
  local_18 = local_res10;
  local_res10[0] = 6;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"IMR_RECONVERTSTRING",0x28);
  local_18 = local_res10;
  local_res10[0] = 4;
  local_10 = local_28;
  FUN_140b953f0(param_2,local_res18,&local_18,0);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1416ce340 FUN_1416ce340 body=52 status=ok
// SIG undefined FUN_1416ce340(void)

undefined8 FUN_1416ce340(undefined8 param_1,ulonglong param_2)

{
  FUN_141661910();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1416ce380 FUN_1416ce380 body=52 status=ok
// SIG undefined FUN_1416ce380(void)

undefined8 FUN_1416ce380(undefined8 param_1,ulonglong param_2)

{
  FUN_1416ccf80();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1416ce3c0 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FTSFActivationProxy::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144cef478;
  param_1[1] = &PTR_LAB_144cef4a0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1416ce400 `scalar_deleting_destructor' body=83 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
`anonymous_namespace'::FTextInputMethodChangeNotifier::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cefe28;
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  *param_1 = &PTR_FUN_143fca6f8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1416ce460 `scalar_deleting_destructor' body=249 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FTextStoreACP::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144cef320;
  param_1[1] = &PTR_LAB_144cef410;
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x10))();
  }
  if ((longlong *)param_1[0xd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xd] + 0x10))();
  }
  if ((longlong *)param_1[0xc] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc] + 0x10))();
  }
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x10))();
  }
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1416ce560 FUN_1416ce560 body=52 status=ok
// SIG undefined FUN_1416ce560(void)

undefined8 FUN_1416ce560(undefined8 param_1,ulonglong param_2)

{
  FUN_1416ccff0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d0);
  }
  return param_1;
}



// FUNCTION 1416ce5a0 `scalar_deleting_destructor' body=77 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FWindowsConsoleOutputDevice::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cefd58;
  SaveToINI();
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1416ce5f0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<FPackageLocalizationCultureCache>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_GetPosition_144cef790;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 1416ce620 FUN_1416ce620 body=353 status=ok
// SIG undefined FUN_1416ce620(void)

undefined8 * FUN_1416ce620(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144cef4c0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FMemory::Free();
  }
  FUN_1416d1470(param_1 + 0x16,0);
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  FUN_1416d1290(param_1 + 10,0);
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x10))();
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  plVar4 = (longlong *)param_1[2];
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
  *param_1 = &PTR_FUN_143f48658;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 1416ce790 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FWindowsWindow::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144cef660;
  param_1[3] = &PTR_QueryInterface_144cef758;
  FUN_1416ccf80();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1416ce7e0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 IOnlineSubsystem::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~IOnlineSubsystem();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1416ce820 FUN_1416ce820 body=43 status=ok
// SIG undefined FUN_1416ce820(void)

undefined8 * FUN_1416ce820(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144cef440;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1416ce850 FUN_1416ce850 body=495 status=ok
// SIG undefined FUN_1416ce850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416ce850(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  HWND pHVar6;
  HWND pHVar7;
  undefined1 auStack_898 [32];
  undefined8 local_878;
  longlong *local_870;
  int local_868 [2];
  undefined8 local_860;
  longlong *local_858;
  longlong *local_850;
  longlong *local_848;
  undefined1 local_840 [8];
  undefined1 local_838 [2048];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_898;
  local_870 = (longlong *)param_2[1];
  local_878 = *param_2;
  if (local_870 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_870 + 1) = (int)local_870[1] + 1;
    UNLOCK();
  }
  pHVar6 = (HWND)0x0;
  if ((undefined8 *)(param_1 + 8) != &local_878) {
    *(undefined8 *)(param_1 + 8) = local_878;
    local_878 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,&local_870);
  }
  plVar3 = local_870;
  if (local_870 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_870 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_870)(local_870);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_870 + 8))(local_870,1);
      }
    }
  }
  plVar3 = (longlong *)param_2[1];
  local_860 = *param_2;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_858 = plVar3;
  FUN_1416d16d0(param_1 + 0x50,local_868,&local_860);
  pHVar7 = pHVar6;
  if (local_868[0] != -1) {
    pHVar7 = (HWND)((longlong)local_868[0] * 0x38 + *(longlong *)(param_1 + 0x50));
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  (**(code **)(*(longlong *)*param_2 + 0x58))((longlong *)*param_2,&local_850);
  if (local_850 != (longlong *)0x0) {
    pHVar6 = (HWND)(**(code **)(*local_850 + 0xc0))();
  }
  *(HWND *)(pHVar7 + 4) = pHVar6;
  if (pHVar6 != (HWND)0x0) {
    *(undefined2 *)&pHVar7[8].unused = 0;
    _guard_xfg_dispatch_icall_nop(pHVar6,*(HIMC *)(param_1 + 0xa0));
    iVar5 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x48))
                      (*(longlong **)(param_1 + 0x30),*(undefined8 *)(pHVar7 + 4),
                       *(undefined8 *)(*(longlong *)(pHVar7 + 6) + 0x60),local_840);
    if (iVar5 < 0) {
      FWindowsPlatformMisc::GetSystemErrorMessage(local_838,0x400,iVar5);
    }
  }
  if (local_848 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_848 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_848)(local_848);
      LOCK();
      piVar2 = (int *)((longlong)local_848 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_848 + 8))(local_848,1);
      }
    }
  }
  return;
}



// FUNCTION 1416cea40 AddError body=126 status=ok
// SIG undefined AddError(void)

void FFeedbackContext::AddError(longlong param_1,undefined8 param_2)

{
  int iVar1;
  BOOL BVar2;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  }
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  if (*(int *)(param_1 + 0x34) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x28,iVar1);
  }
  FString::FString((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x28),param_2);
                    /* WARNING: Could not recover jumptable at 0x0001416ceab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}



// FUNCTION 1416ceac0 FUN_1416ceac0 body=160 status=ok
// SIG undefined FUN_1416ceac0(void)

void FUN_1416ceac0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*param_2 != 0) {
    iVar3 = *(int *)(param_1 + 0xe0);
    *(int *)(param_1 + 0xe0) = iVar3 + 1;
    if (*(int *)(param_1 + 0xe4) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0xd8),iVar3);
    }
    plVar5 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0xd8));
    *plVar5 = *param_2;
    lVar4 = param_2[1];
    plVar5[1] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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



// FUNCTION 1416ceb60 AddMessageHandler body=134 status=ok
// SIG undefined AddMessageHandler(void)

void FWindowsApplication::AddMessageHandler(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar3 = DAT_1469e5b78;
  plVar5 = (longlong *)(DAT_1469e5b78 + 0xa8);
  plVar2 = (longlong *)*plVar5;
  iVar1 = *(int *)(DAT_1469e5b78 + 0xb0);
  plVar4 = plVar2;
  do {
    if (plVar4 == plVar2 + iVar1) {
LAB_1416cebbc:
      *(int *)(DAT_1469e5b78 + 0xb0) = iVar1 + 1;
      if (*(int *)(lVar3 + 0xb4) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5);
      }
      *(longlong *)((longlong)iVar1 * 8 + *plVar5) = param_2;
      return;
    }
    if (*plVar4 == param_2) {
      if ((int)((longlong)plVar4 - (longlong)plVar2 >> 3) != -1) {
        return;
      }
      goto LAB_1416cebbc;
    }
    plVar4 = plVar4 + 1;
  } while( true );
}



// FUNCTION 1416cebf0 FUN_1416cebf0 body=9 status=ok
// SIG undefined FUN_1416cebf0(void)

void FUN_1416cebf0(longlong param_1)

{
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return;
}



// FUNCTION 1416cec10 FUN_1416cec10 body=9 status=ok
// SIG undefined FUN_1416cec10(void)

void FUN_1416cec10(longlong param_1)

{
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}



// FUNCTION 1416cec40 AddWarning body=126 status=ok
// SIG undefined AddWarning(void)

void FFeedbackContext::AddWarning(longlong param_1,undefined8 param_2)

{
  int iVar1;
  BOOL BVar2;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  }
  iVar1 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = iVar1 + 1;
  if (*(int *)(param_1 + 0x24) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x18,iVar1);
  }
  FString::FString((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x18),param_2);
                    /* WARNING: Could not recover jumptable at 0x0001416cecb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}



// FUNCTION 1416cecc0 AdjustCachedSize body=167 status=ok
// SIG undefined AdjustCachedSize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FWindowsWindow::AdjustCachedSize(longlong param_1,float *param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  tagRECT local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if ((*(longlong *)(param_1 + 8) != 0) && (*(char *)(*(longlong *)(param_1 + 8) + 0x27) != '\0')) {
    iVar1 = *(int *)(param_1 + 0x9c);
    *param_2 = (float)*(int *)(param_1 + 0x98);
    param_2[1] = (float)iVar1;
    return;
  }
  if (*(HWND *)(param_1 + 0x28) != (HWND)0x0) {
    GetClientRect(*(HWND *)(param_1 + 0x28),&local_28);
    *param_2 = (float)(local_28.right - local_28.left);
    param_2[1] = (float)(local_28.bottom - local_28.top);
  }
  return;
}



// FUNCTION 1416ced70 AdviseSink body=318 status=ok
// SIG undefined AdviseSink(void)

undefined8
FTextStoreACP::AdviseSink(longlong param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong *local_res18;
  longlong *local_18 [2];
  
  if (param_3 != (undefined8 *)0x0) {
    if ((*param_2 != 0x4542a41922d44c94) || (param_2[1] != -0x3031c1f6d9518d5e)) {
      return 0x80070057;
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      local_res18 = (longlong *)0x0;
      iVar1 = (**(code **)*param_3)(param_3,&DAT_145ac61b0,&local_res18);
      if (iVar1 < 0) {
        uVar2 = 0x8000ffff;
      }
      else {
        local_18[0] = (longlong *)0x0;
        iVar1 = (**(code **)*param_3)(param_3,&DAT_145ac61b0,local_18);
        if (iVar1 < 0) {
          uVar2 = 0x8000ffff;
        }
        else {
          if (local_res18 == local_18[0]) {
            if (local_18[0] != (longlong *)0x0) {
              (**(code **)(*local_18[0] + 0x10))(local_18[0]);
            }
            if (local_res18 != (longlong *)0x0) {
              (**(code **)(*local_res18 + 0x10))();
            }
            goto LAB_1416cee9a;
          }
          uVar2 = 0x80040201;
        }
        if (local_18[0] != (longlong *)0x0) {
          (**(code **)(*local_18[0] + 0x10))(local_18[0]);
        }
      }
      if (local_res18 == (longlong *)0x0) {
        return uVar2;
      }
      (**(code **)(*local_res18 + 0x10))();
      return uVar2;
    }
    iVar1 = (**(code **)*param_3)(param_3,&DAT_145ac61d0,param_1 + 0x40);
    if ((-1 < iVar1) && (*(longlong *)(param_1 + 0x40) != 0)) {
LAB_1416cee9a:
      *(undefined4 *)(param_1 + 0x50) = param_4;
      return 0;
    }
  }
  return 0x8000ffff;
}



// FUNCTION 1416ceeb0 AllowAccessibilityShortcutKeys body=268 status=ok
// SIG undefined AllowAccessibilityShortcutKeys(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FWindowsApplication::AllowAccessibilityShortcutKeys(longlong param_1,char param_2)

{
  ulonglong *pvParam;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if (param_2 == '\0') {
    local_38 = *(ulonglong *)(param_1 + 400);
    if ((local_38 >> 0x20 & 1) == 0) {
      local_38 = local_38 & 0xfffffff3ffffffff;
      SystemParametersInfoW(0x3b,8,&local_38,0);
    }
    local_30 = *(ulonglong *)(param_1 + 0x198);
    if ((local_30 >> 0x20 & 1) == 0) {
      local_30 = local_30 & 0xfffffff3ffffffff;
      SystemParametersInfoW(0x35,8,&local_30,0);
    }
    local_18 = *(undefined8 *)(param_1 + 0x1b0);
    local_28 = SUB168(*(undefined1 (*) [16])(param_1 + 0x1a0),0);
    if ((local_28 >> 0x20 & 1) != 0) {
      return;
    }
    pvParam = &local_28;
    uStack_20 = SUB168(*(undefined1 (*) [16])(param_1 + 0x1a0),8);
    local_28 = local_28 & 0xfffffff3ffffffff;
  }
  else {
    SystemParametersInfoW(0x3b,8,(PVOID)(param_1 + 400),0);
    SystemParametersInfoW(0x35,8,(PVOID)(param_1 + 0x198),0);
    pvParam = (ulonglong *)(param_1 + 0x1a0);
  }
  SystemParametersInfoW(0x33,0x18,pvParam,0);
  return;
}



// FUNCTION 1416cefc0 FUN_1416cefc0 body=110 status=ok
// SIG undefined FUN_1416cefc0(void)

longlong FUN_1416cefc0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    GetCurrentThreadId();
  }
  iVar2 = FUN_1416d8b40(DAT_1469e5b78,param_1,param_2,param_3,param_4);
  return (longlong)iVar2;
}



// FUNCTION 1416cf030 FUN_1416cf030 body=220 status=ok
// SIG undefined FUN_1416cf030(void)

void FUN_1416cf030(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  HWND pHVar4;
  HIMC pHVar5;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined1 local_res18 [16];
  undefined8 local_28;
  longlong *local_20;
  
  FUN_1416cf390();
  local_28 = *param_2;
  local_20 = (longlong *)param_2[1];
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_20 + 0xc) = *(int *)((longlong)local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_1416cb200(param_1 + 0xb0,local_res8,&local_28,0);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*local_20 + 8))();
    }
  }
  pHVar4 = (HWND)(**(code **)(*(longlong *)*param_2 + 0xc0))();
  pHVar5 = (HIMC)0x0;
  local_res10 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x38))
              (*(longlong **)(param_1 + 0x30),&local_res10);
    pHVar5 = *(HIMC *)(param_1 + 0xa0);
  }
  lVar3 = **(longlong **)(param_1 + 0x30);
  if (local_res10 == 0) {
    (**(code **)(lVar3 + 0x48))
              (*(longlong **)(param_1 + 0x30),pHVar4,*(undefined8 *)(param_1 + 0x40),local_res18);
  }
  else {
    (**(code **)(lVar3 + 0x40))();
  }
  _guard_xfg_dispatch_icall_nop(pHVar4,pHVar5);
  return;
}



// FUNCTION 1416cf110 FUN_1416cf110 body=218 status=ok
// SIG undefined FUN_1416cf110(void)

void FUN_1416cf110(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 local_res8 [2];
  int local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 local_38;
  longlong *local_30;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  local_38 = *(undefined8 *)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_30 = plVar3;
  FUN_1416d16d0(param_1 + 0x50,local_res10,&local_38);
  if (local_res10[0] == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = (longlong)local_res10[0] * 0x38 + *(longlong *)(param_1 + 0x50);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *(undefined2 *)(lVar4 + 0x20) = 1;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x60))();
  local_res8[0] = 0;
  local_res20[0] = 0;
  local_res18[0] = 1;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
            (*(longlong **)(param_1 + 8),local_res8,local_res20,local_res18);
  *(undefined4 *)(lVar4 + 0x24) = local_res8[0];
  *(undefined4 *)(lVar4 + 0x28) = 0;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x68))
            (*(longlong **)(param_1 + 8),*(undefined4 *)(lVar4 + 0x24),0);
  return;
}



// FUNCTION 1416cf1f0 BringToFront body=126 status=ok
// SIG undefined BringToFront(void)

void FWindowsWindow::BringToFront(longlong param_1,uint param_2)

{
  BOOL BVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x25) == '\0') {
    SetWindowPos(*(HWND *)(param_1 + 0x28),
                 (HWND)-(ulonglong)(*(char *)(*(longlong *)(param_1 + 8) + 0x1a) != '\0'),0,0,0,0,
                 (param_2 & 0xff ^ 1) * 0x10 + 0x203);
    return;
  }
  BVar1 = IsIconic(*(HWND *)(param_1 + 0x28));
  if (BVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001416cf21f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ShowWindow(*(HWND *)(param_1 + 0x28),9);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001416cf22b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetActiveWindow(*(HWND *)(param_1 + 0x28));
  return;
}



// FUNCTION 1416cf290 FUN_1416cf290 body=242 status=ok
// SIG undefined FUN_1416cf290(void)

void FUN_1416cf290(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int local_res8 [2];
  longlong local_38 [3];
  longlong *local_20;
  
  plVar5 = *(longlong **)(param_1 + 0x10);
  local_38[2] = *(undefined8 *)(param_1 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
  }
  local_20 = plVar5;
  FUN_1416d16d0(param_1 + 0x50,local_res8,local_38 + 2);
  lVar6 = 0;
  if (local_res8[0] != -1) {
    lVar6 = (longlong)local_res8[0] * 0x38 + *(longlong *)(param_1 + 0x50);
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  uVar3 = *(undefined4 *)(lVar6 + 0x28);
  uVar4 = *(undefined4 *)(lVar6 + 0x24);
  *(undefined4 *)(lVar6 + 0x28) = 0;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),uVar4,0);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x28))
            (*(longlong **)(param_1 + 8),*(undefined4 *)(lVar6 + 0x24),0,0);
  local_38[0] = 0;
  local_38[1] = 0;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x38))
            (*(longlong **)(param_1 + 8),uVar4,uVar3,local_38);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  FUN_1416d1620(param_1);
  return;
}



// FUNCTION 1416cf390 FUN_1416cf390 body=544 status=ok
// SIG undefined FUN_1416cf390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1416cf390(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined1 auStack_108 [32];
  int local_e8;
  uint uStack_e4;
  uint *puStack_e0;
  undefined4 local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  int local_c8;
  longlong *local_c0;
  int iStack_b8;
  uint uStack_b4;
  uint *local_b0;
  uint uStack_a8;
  int iStack_a4;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 uStack_90;
  int iStack_88;
  int iStack_84;
  uint uStack_80;
  int iStack_7c;
  undefined8 uStack_78;
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
  local_38 = 0xffffffff;
  local_68[0] = 0;
  local_68[1] = 0;
  local_48 = (uint *)0x0;
  local_40 = 0;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  TSet<TWeakPtr<FGenericWindow,0>,DefaultKeyFuncs<TWeakPtr<FGenericWindow,0>,0>,FDefaultSetAllocator>
  ::operator=(local_68,param_1 + 0xb0);
  iVar4 = (int)local_40;
  puStack_e0 = local_58;
  local_e8 = 0;
  uStack_e4 = 1;
  iStack_d4 = 0;
  iStack_d0 = 0;
  if ((int)local_40 != 0) {
    puVar6 = local_58;
    if (local_48 != (uint *)0x0) {
      puVar6 = local_48;
    }
    uVar2 = *puVar6;
    iStack_d0 = 0;
    local_e8 = 0;
    while (uVar2 == 0) {
      iStack_d0 = iStack_d0 + 0x20;
      if ((int)((int)local_40 + -1 + ((int)local_40 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_e8) {
        iStack_d4 = (int)local_40;
        local_e8 = local_e8 + 1;
        goto LAB_1416cf4a9;
      }
      uVar2 = puVar6[(longlong)local_e8 + 1];
      local_e8 = local_e8 + 1;
    }
    uStack_e4 = -uVar2 & uVar2;
    local_c8 = 0x1f;
    if (uStack_e4 != 0) {
      for (; uStack_e4 >> local_c8 == 0; local_c8 = local_c8 + -1) {
      }
    }
    if (uStack_e4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - local_c8;
    }
    iStack_d4 = (iStack_d0 - iVar5) + 0x1f;
    if ((int)local_40 < iStack_d4) {
      iStack_d4 = (int)local_40;
    }
  }
LAB_1416cf4a9:
  local_d8 = 0xffffffff;
  uStack_90 = CONCAT44(uStack_e4,local_e8);
  local_98 = local_68;
  uStack_a8 = 0xffffffff;
  iStack_a4 = iStack_d4;
  local_a0 = CONCAT44(uStack_cc,iStack_d0);
  _iStack_88 = CONCAT44((int)local_40,-1 << ((byte)local_40 & 0x1f));
  iStack_b8 = local_e8;
  uStack_b4 = uStack_e4;
  local_b0 = puStack_e0;
  uStack_78 = local_a0;
  local_c0 = local_98;
  uStack_80 = uStack_a8;
  iStack_7c = iStack_a4;
  do {
    if (((iStack_a4 == iVar4) && (local_b0 == local_58)) && (local_c0 == local_68)) {
      local_20 = 0;
      if (local_28 != 0) {
        FMemory::Free();
      }
      FUN_1416d1470(local_68,0);
      if (local_48 != (uint *)0x0) {
        FMemory::Free();
      }
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      return;
    }
    if ((*(longlong *)(*local_c0 + (longlong)iStack_a4 * 0x18) == 0) ||
       (lVar3 = *(longlong *)(*local_c0 + (longlong)iStack_a4 * 0x18 + 8), lVar3 == 0)) {
LAB_1416cf538:
      FUN_1416db1b0(param_1 + 0xb0);
    }
    else {
      piVar1 = (int *)(lVar3 + 8);
      LOCK();
      iVar5 = *piVar1;
      if (iVar5 == 0) {
        *piVar1 = 0;
        iVar5 = 0;
      }
      UNLOCK();
      if (iVar5 < 1) goto LAB_1416cf538;
    }
    uStack_a8 = uStack_a8 & ~uStack_b4;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_b8);
  } while( true );
}



// FUNCTION 1416cf5b0 FUN_1416cf5b0 body=363 status=ok
// SIG undefined FUN_1416cf5b0(void)

void FUN_1416cf5b0(short *param_1)

{
  short sVar1;
  BOOL BVar2;
  DWORD DVar3;
  HWND hWndNewOwner;
  HGLOBAL hMem;
  HANDLE pvVar4;
  longlong local_50;
  short *local_48;
  short *local_38;
  
  hWndNewOwner = GetActiveWindow();
  BVar2 = OpenClipboard(hWndNewOwner);
  if (BVar2 != 0) {
    EmptyClipboard();
    local_50 = -1;
    do {
      local_50 = local_50 + 1;
    } while (param_1[local_50] != 0);
    hMem = GlobalAlloc(2,(longlong)((int)local_50 + 1) << 1);
    local_48 = GlobalLock(hMem);
    local_38 = param_1;
    do {
      sVar1 = *local_38;
      *local_48 = sVar1;
      local_38 = local_38 + 1;
      local_48 = local_48 + 1;
    } while (sVar1 != 0);
    GlobalUnlock(hMem);
    pvVar4 = SetClipboardData(0xd,hMem);
    if (pvVar4 == (HANDLE)0x0) {
      DVar3 = GetLastError();
      LowLevelFatalErrorHandler("Unknown",0x160,L"SetClipboardData failed with error code %i",DVar3)
      ;
      DVar3 = GetLastError();
      FDebug::AssertFailed
                (&DAT_144ce5437,"Unknown",0x160,L"SetClipboardData failed with error code %i",DVar3)
      ;
    }
    CloseClipboard();
  }
  return;
}



// FUNCTION 1416cf720 ClipboardPaste body=1592 status=ok
// SIG undefined ClipboardPaste(void)

/* WARNING: Removing unreachable block (ram,0x0001416cf7e3) */
/* WARNING: Removing unreachable block (ram,0x0001416cf7ff) */
/* WARNING: Removing unreachable block (ram,0x0001416cf81e) */
/* WARNING: Removing unreachable block (ram,0x0001416cfc34) */
/* WARNING: Removing unreachable block (ram,0x0001416cfc50) */
/* WARNING: Removing unreachable block (ram,0x0001416cfc6f) */

void FWindowsPlatformApplicationMisc::ClipboardPaste(undefined8 *param_1)

{
  BOOL BVar1;
  HWND hWndNewOwner;
  longlong lVar2;
  undefined2 *puVar3;
  short *psVar4;
  undefined1 *puVar5;
  bool bVar6;
  int local_134;
  undefined1 local_130 [8];
  int local_128;
  int local_124;
  int local_120;
  undefined2 local_11c [6];
  HANDLE local_110;
  short *local_108;
  undefined4 local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  undefined4 local_ec;
  int local_e8;
  undefined2 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  longlong local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined1 *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  short *local_78;
  undefined1 *local_68;
  short *local_60;
  short *local_58;
  undefined2 *local_50;
  undefined1 *local_40;
  undefined1 *local_28;
  
  hWndNewOwner = GetActiveWindow();
  BVar1 = OpenClipboard(hWndNewOwner);
  if (BVar1 == 0) {
    local_b8 = &DAT_144ce5ae4;
    local_40 = (undefined1 *)*param_1;
    if (local_40 != &DAT_144ce5ae4) {
      local_ec = 0;
      local_120 = 0;
      FUN_140d2ba60(param_1,0);
      local_84 = *(undefined4 *)(param_1 + 1);
      local_e8 = *(int *)(param_1 + 1) + local_120;
      *(int *)(param_1 + 1) = local_e8;
      if (*(int *)((longlong)param_1 + 0xc) < local_e8) {
        local_d0 = param_1;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,local_84);
      }
      if (local_120 != 0) {
        puVar5 = (undefined1 *)*param_1;
        for (lVar2 = (longlong)local_120 << 1; lVar2 != 0; lVar2 = lVar2 + -1) {
          *puVar5 = *local_b8;
          local_b8 = local_b8 + 1;
          puVar5 = puVar5 + 1;
        }
      }
    }
  }
  else {
    local_110 = (HANDLE)0x0;
    local_110 = GetClipboardData(0xd);
    bVar6 = local_110 == (HANDLE)0x0;
    if (bVar6) {
      local_110 = GetClipboardData(1);
    }
    if (local_110 == (HGLOBAL)0x0) {
      local_e0 = &DAT_144ce5abc;
      local_50 = (undefined2 *)*param_1;
      if (local_50 != &DAT_144ce5abc) {
        local_100 = 0;
        local_128 = 0;
        FUN_140d2ba60(param_1,0);
        local_90 = *(undefined4 *)(param_1 + 1);
        local_fc = *(int *)(param_1 + 1) + local_128;
        *(int *)(param_1 + 1) = local_fc;
        local_b0 = param_1;
        if (*(int *)((longlong)param_1 + 0xc) < local_fc) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,local_90);
        }
        if (local_128 != 0) {
          local_68 = (undefined1 *)*param_1;
          puVar3 = local_e0;
          puVar5 = local_68;
          for (lVar2 = (longlong)local_128 << 1; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar5 = *(undefined1 *)puVar3;
            puVar3 = (undefined2 *)((longlong)puVar3 + 1);
            puVar5 = puVar5 + 1;
          }
        }
      }
    }
    else {
      local_108 = GlobalLock(local_110);
      if (bVar6) {
        for (local_134 = 0; *(char *)((longlong)local_108 + (longlong)local_134) != '\0';
            local_134 = local_134 + 1) {
        }
        local_78 = local_108;
        FHeapAllocator::ForAnyElementType::ForAnyElementType(&local_c8);
        local_bc = 0;
        local_8c = 0;
        local_f0 = local_134 + 1;
        local_c0 = local_f0;
        if (0 < local_f0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
        }
        for (local_134 = 0; local_88 = local_c0, local_134 < local_c0; local_134 = local_134 + 1) {
          local_130[0] = *(undefined1 *)((longlong)local_78 + (longlong)local_134);
          FGenericPlatformString::Convert<char,wchar_t>(local_11c,1,local_130,1,0x3f);
          *(undefined2 *)(local_c8 + (longlong)local_134 * 2) = local_11c[0];
        }
        TArray<wchar_t,FDefaultAllocator>::operator=(param_1,&local_c8);
        TArray<wchar_t,FDefaultAllocator>::~TArray<wchar_t,FDefaultAllocator>(&local_c8);
      }
      else {
        local_60 = (short *)*param_1;
        if (local_60 != local_108) {
          if ((local_108 == (short *)0x0) || (*local_108 == 0)) {
            local_f8 = 0;
          }
          else {
            local_a0 = -1;
            do {
              local_a0 = local_a0 + 1;
            } while (local_108[local_a0] != 0);
            local_f8 = (int)local_a0 + 1;
            local_58 = local_108;
          }
          local_124 = local_f8;
          FUN_140d2ba60(param_1,local_f8);
          local_80 = *(undefined4 *)(param_1 + 1);
          local_f4 = *(int *)(param_1 + 1) + local_124;
          *(int *)(param_1 + 1) = local_f4;
          local_d8 = param_1;
          if (*(int *)((longlong)param_1 + 0xc) < local_f4) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,local_80);
          }
          if (local_124 != 0) {
            local_28 = (undefined1 *)*param_1;
            psVar4 = local_108;
            puVar5 = local_28;
            for (lVar2 = (longlong)local_124 << 1; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar5 = (char)*psVar4;
              psVar4 = (short *)((longlong)psVar4 + 1);
              puVar5 = puVar5 + 1;
            }
          }
        }
      }
      GlobalUnlock(local_110);
    }
    CloseClipboard();
  }
  return;
}



// FUNCTION 1416cfd60 ComputeCPUPerfIndex body=275 status=ok
// SIG undefined ComputeCPUPerfIndex(void)

float FSynthBenchmarkResults::ComputeCPUPerfIndex(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((param_2 != (longlong *)0x0) &&
     (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  fVar6 = *(float *)(param_1 + 0x4c) + *(float *)(param_1 + 0x24);
  pfVar3 = (float *)(param_1 + 0xc);
  fVar7 = 0.0;
  lVar2 = 2;
  do {
    fVar5 = (pfVar3[1] * 100.0) / *pfVar3;
    if (param_2 != (longlong *)0x0) {
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(float *)(*param_2 + (longlong)iVar1 * 4) = fVar5;
    }
    if (fVar6 <= 0.0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = pfVar3[6] / fVar6;
    }
    pfVar3 = pfVar3 + 10;
    fVar7 = fVar7 + fVar4 * fVar5;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return fVar7;
}



// FUNCTION 1416cfe80 ComputeGPUPerfIndex body=306 status=ok
// SIG undefined ComputeGPUPerfIndex(void)

float FSynthBenchmarkResults::ComputeGPUPerfIndex(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = 7;
  if ((param_2 != (longlong *)0x0) &&
     (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 7)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_2,7);
  }
  fVar7 = 0.0;
  fVar6 = *(float *)(param_1 + 0x9c) + *(float *)(param_1 + 0x74) + *(float *)(param_1 + 0xc4) +
          *(float *)(param_1 + 0xec) + *(float *)(param_1 + 0x114) + *(float *)(param_1 + 0x13c) +
          *(float *)(param_1 + 0x164);
  pfVar3 = (float *)(param_1 + 0x60);
  do {
    fVar5 = (100.0 / pfVar3[-1]) * *pfVar3;
    if (param_2 != (longlong *)0x0) {
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(float *)(*param_2 + (longlong)iVar1 * 4) = fVar5;
    }
    if (fVar6 <= 0.0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = pfVar3[5] / fVar6;
    }
    pfVar3 = pfVar3 + 10;
    fVar7 = fVar7 + fVar4 * fVar5;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return fVar7;
}



// FUNCTION 1416cffc0 ConvertInchesToPixels body=77 status=ok
// SIG undefined ConvertInchesToPixels(void)

void FGenericPlatformApplicationMisc::ConvertInchesToPixels(float param_1,float *param_2)

{
  if (DAT_1469e5b63 == '\0') {
    DAT_1469e5b63 = '\x01';
    DAT_1469e5b70 = 0;
    DAT_1469e5b64 = 0;
  }
  if (DAT_1469e5b64 == 0) {
    *param_2 = 0.0;
    return;
  }
  *param_2 = (float)DAT_1469e5b70 * param_1;
  return;
}



// FUNCTION 1416d0010 CreateApplication body=130 status=ok
// SIG undefined CreateApplication(void)

undefined8 FWindowsPlatformApplicationMisc::CreateApplication(void)

{
  HINSTANCE pHVar1;
  HICON pHVar2;
  longlong lVar3;
  
  pHVar2 = LoadIconW(DAT_1469e4218,(LPCWSTR)0x7b);
  if (pHVar2 == (HICON)0x0) {
    pHVar2 = LoadIconW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
  }
  pHVar1 = DAT_1469e4218;
  lVar3 = operator_new(0x1d0);
  if (lVar3 != 0) {
    DAT_1469e5b78 = FUN_1416cb970(lVar3,pHVar1,pHVar2);
    return DAT_1469e5b78;
  }
  DAT_1469e5b78 = 0;
  return 0;
}



// FUNCTION 1416d00a0 CreateConsoleOutputDevice body=66 status=ok
// SIG undefined CreateConsoleOutputDevice(void)

undefined8 * FWindowsPlatformApplicationMisc::CreateConsoleOutputDevice(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined2 *)(puVar1 + 1) = 0x100;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144cefd58;
    puVar1[4] = 0;
    *(undefined2 *)(puVar1 + 5) = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1416d00f0 FUN_1416d00f0 body=1054 status=ok
// SIG undefined FUN_1416d00f0(void)

void FUN_1416d00f0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  HIMC pHVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  bool bVar14;
  int local_res8 [2];
  int local_res10;
  int local_res18;
  undefined8 local_108;
  longlong *local_100;
  uint local_f8;
  uint uStack_f4;
  uint *puStack_f0;
  undefined4 local_e8;
  uint uStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  int local_d8;
  uint local_c8;
  uint uStack_c4;
  uint local_c0;
  undefined8 local_b8;
  uint uStack_b0;
  uint uStack_ac;
  uint *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined8 uStack_70;
  uint *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar4 = (longlong *)param_2[1];
  local_90 = *param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
  }
  local_88 = plVar4;
  FUN_1416d16d0(param_1 + 0x50,local_res8,&local_90);
  uVar8 = 0;
  uVar13 = uVar8;
  if (local_res8[0] != -1) {
    uVar13 = (longlong)local_res8[0] * 0x38 + *(longlong *)(param_1 + 0x50);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if (*(HWND *)(uVar13 + 0x10) != (HWND)0x0) {
    pHVar7 = _guard_xfg_dispatch_icall_nop(*(HWND *)(uVar13 + 0x10));
    *(undefined1 *)(uVar13 + 0x21) = 1;
    _guard_xfg_dispatch_icall_nop(pHVar7,0x15,1,0);
    _guard_xfg_dispatch_icall_nop(*(HWND *)(uVar13 + 0x10),pHVar7);
    FUN_1416cf390(param_1);
    uStack_f4 = 1;
    uVar3 = *(uint *)(param_1 + 0xd8);
    puVar2 = (uint *)(param_1 + 0xc0);
    local_f8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    if (uVar3 != 0) {
      puVar12 = *(uint **)(param_1 + 0xd0);
      if (*(uint **)(param_1 + 0xd0) == (uint *)0x0) {
        puVar12 = puVar2;
      }
      uVar10 = *puVar12;
      uVar11 = uVar8;
      while (uVar10 == 0) {
        iVar6 = (int)uVar8;
        uStack_e0 = (int)uVar11 + 0x20;
        uVar11 = (ulonglong)uStack_e0;
        local_f8 = iVar6 + 1;
        uVar8 = (ulonglong)local_f8;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_1416d0284;
        uVar10 = puVar12[(longlong)iVar6 + 1];
      }
      uStack_f4 = -uVar10 & uVar10;
      local_res10 = 0x1f;
      if (uStack_f4 != 0) {
        for (; uStack_f4 >> local_res10 == 0; local_res10 = local_res10 + -1) {
        }
      }
      if (uStack_f4 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - local_res10;
      }
      uStack_e4 = (uStack_e0 - iVar6) + 0x1f;
      if ((int)uVar3 < (int)uStack_e4) {
LAB_1416d0284:
        uStack_e4 = uVar3;
      }
    }
    local_e8 = 0xffffffff;
    local_78 = (longlong *)(param_1 + 0xb0);
    uStack_c4 = *(uint *)(param_1 + 0xd8);
    uStack_70 = CONCAT44(uStack_f4,local_f8);
    uStack_a0 = CONCAT44(uStack_e4,0xffffffff);
    local_98 = CONCAT44(uStack_dc,uStack_e0);
    local_d8 = (int)uStack_c4 >> 5;
    local_c8 = -1 << ((byte)uStack_c4 & 0x1f);
    local_c0 = uStack_c4 & 0xffffffe0;
    uStack_b0 = local_f8;
    uStack_ac = uStack_f4;
    puStack_f0 = puVar2;
    local_a8 = puVar2;
    puStack_68 = puVar2;
    uStack_60 = uStack_a0;
    uStack_58 = local_98;
    local_b8 = local_78;
    uVar10 = uStack_c4;
    if (uStack_c4 != uVar3) {
      puVar12 = *(uint **)(param_1 + 0xd0);
      if (*(uint **)(param_1 + 0xd0) == (uint *)0x0) {
        puVar12 = puVar2;
      }
      uVar10 = puVar12[local_d8] & local_c8;
      while (uVar10 == 0) {
        lVar9 = (longlong)local_d8;
        local_c0 = local_c0 + 0x20;
        iVar6 = local_d8 + 1;
        bVar14 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d8;
        local_d8 = iVar6;
        if (bVar14) goto LAB_1416d0380;
        uVar10 = puVar12[lVar9 + 1];
        local_c8 = 0xffffffff;
      }
      uVar10 = -uVar10 & uVar10;
      local_res18 = 0x1f;
      if (uVar10 != 0) {
        for (; uVar10 >> local_res18 == 0; local_res18 = local_res18 + -1) {
        }
      }
      if (uVar10 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - local_res18;
      }
      uStack_c4 = (local_c0 - iVar6) + 0x1f;
      uVar10 = uStack_c4;
      if ((int)uVar3 < (int)uStack_c4) {
LAB_1416d0380:
        uStack_c4 = uVar3;
        uVar10 = uVar3;
      }
    }
    while( true ) {
      if (((uStack_a0._4_4_ == uVar10) && (local_a8 == puVar2)) &&
         (local_b8 == (longlong *)(param_1 + 0xb0))) break;
      lVar9 = *local_b8;
      plVar4 = *(longlong **)(lVar9 + 8 + (longlong)(int)uStack_a0._4_4_ * 0x18);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        iVar6 = (int)plVar4[1];
        bVar14 = iVar6 == 0;
        if (bVar14) {
          *(int *)(plVar4 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (!bVar14) {
          LOCK();
          bVar14 = iVar6 == (int)plVar4[1];
          if (bVar14) {
            *(int *)(plVar4 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar14) {
            if (plVar4 != (longlong *)0x0) {
              plVar5 = *(longlong **)(lVar9 + (longlong)(int)uStack_a0._4_4_ * 0x18);
              if (plVar5 != (longlong *)0x0) {
                lVar9 = (**(code **)(*plVar5 + 0xc0))();
                if (lVar9 != 0) {
                  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x48))
                            (*(longlong **)(param_1 + 0x30),lVar9,*(undefined8 *)(param_1 + 0x40),
                             local_80);
                  _guard_xfg_dispatch_icall_nop(*(HWND *)(uVar13 + 0x10),(HIMC)0x0);
                }
              }
              LOCK();
              plVar5 = plVar4 + 1;
              lVar9 = *plVar5;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plVar4)(plVar4);
                LOCK();
                piVar1 = (int *)((longlong)plVar4 + 0xc);
                iVar6 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar4 + 8))(plVar4,1);
                }
              }
            }
            break;
          }
          LOCK();
          iVar6 = (int)plVar4[1];
          bVar14 = iVar6 == 0;
          if (bVar14) {
            *(int *)(plVar4 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
      }
      uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_ac);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b0);
    }
  }
  local_100 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 8) != &local_108) {
    *(undefined8 *)(param_1 + 8) = 0;
    local_108 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,&local_100);
    plVar4 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_100 + 1;
      lVar9 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1416d0510 DecipherOLEData body=1223 status=ok
// SIG undefined DecipherOLEData(void)

void ** DecipherOLEData(void **param_1,longlong *param_2)

{
  void **ppvVar1;
  short sVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  char *pcVar10;
  uint *puVar11;
  int iVar12;
  longlong lVar13;
  void *pvVar14;
  undefined8 *puVar15;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  STGMEDIUM local_b8;
  undefined2 local_a0 [4];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined2 local_80 [4];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 local_60 [4];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  
  *param_1 = (void *)0x0;
  ppvVar1 = param_1 + 2;
  param_1[1] = (void *)0x0;
  *ppvVar1 = (void *)0x0;
  param_1[3] = (void *)0x0;
  *(undefined1 *)(param_1 + 4) = 0;
  local_80[0] = 1;
  local_78 = 0;
  local_70 = 1;
  local_6c = 0xffffffff;
  local_68 = 1;
  iVar6 = (**(code **)(*param_2 + 0x28))(param_2,local_80);
  local_98 = 0;
  local_90 = 1;
  local_8c = 0xffffffff;
  local_a0[0] = 0xd;
  local_88 = 1;
  iVar7 = (**(code **)(*param_2 + 0x28))(param_2,local_a0);
  local_58 = 0;
  local_50 = 1;
  local_60[0] = 0xf;
  local_4c = 0xffffffff;
  local_48 = 1;
  iVar8 = (**(code **)(*param_2 + 0x28))(param_2,local_60);
  if ((iVar7 == 0) &&
     (iVar7 = (**(code **)(*param_2 + 0x18))(param_2,local_a0,&local_b8), iVar7 == 0)) {
    psVar9 = GlobalLock(local_b8.u.hGlobal);
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 1;
    if (*param_1 != psVar9) {
      if ((psVar9 == (short *)0x0) || (*psVar9 == 0)) {
        iVar7 = 0;
      }
      else {
        lVar13 = -1;
        do {
          lVar13 = lVar13 + 1;
        } while (psVar9[lVar13] != 0);
        iVar7 = (int)lVar13 + 1;
      }
      iVar12 = 0;
      *(undefined4 *)(param_1 + 1) = 0;
      if (*(int *)((longlong)param_1 + 0xc) != iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,iVar7);
        iVar12 = *(int *)(param_1 + 1);
      }
      *(int *)(param_1 + 1) = iVar12 + iVar7;
      if (*(int *)((longlong)param_1 + 0xc) < iVar12 + iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      if (iVar7 != 0) {
        _guard_xfg_dispatch_icall_nop(*param_1,psVar9,(longlong)iVar7 * 2);
      }
    }
    GlobalUnlock(local_b8.u.hGlobal);
    ReleaseStgMedium(&local_b8);
  }
  if ((iVar6 == 0) &&
     (iVar6 = (**(code **)(*param_2 + 0x18))(param_2,local_80,&local_b8), iVar6 == 0)) {
    pcVar10 = GlobalLock(local_b8.u.hGlobal);
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 1;
    pvVar14 = (void *)0x0;
    local_c8 = (void *)0x0;
    iVar6 = 0;
    local_bc = 0;
    if ((pcVar10 != (char *)0x0) && (*pcVar10 != '\0')) {
      lVar13 = -1;
      do {
        lVar13 = lVar13 + 1;
      } while (pcVar10[lVar13] != '\0');
      iVar7 = (int)lVar13 + 1;
      local_c0 = iVar7;
      if (0 < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
      }
      iVar6 = local_c0;
      pvVar14 = local_c8;
      FGenericPlatformString::Convert<char,wchar_t>(local_c8,iVar7,pcVar10,iVar7,0x3f);
    }
    uVar5 = local_bc;
    if (param_1 == &local_c8) {
      if (pvVar14 != (void *)0x0) {
        FMemory::Free(pvVar14);
      }
    }
    else {
      if (*param_1 != (void *)0x0) {
        FMemory::Free();
      }
      *param_1 = pvVar14;
      *(int *)(param_1 + 1) = iVar6;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
    }
    GlobalUnlock(local_b8.u.hGlobal);
    ReleaseStgMedium(&local_b8);
  }
  if ((iVar8 == 0) &&
     (iVar6 = (**(code **)(*param_2 + 0x18))(param_2,local_60,&local_b8), iVar6 == 0)) {
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 2;
    puVar11 = GlobalLock(local_b8.u.hGlobal);
    psVar9 = (short *)((ulonglong)*puVar11 + (longlong)puVar11);
    if (puVar11[4] == 0) {
      cVar4 = (char)*psVar9;
      while (cVar4 != '\0') {
        iVar6 = 0;
        pvVar14 = (void *)0x0;
        local_c8 = (void *)0x0;
        local_bc = 0;
        if (cVar4 != '\0') {
          lVar13 = -1;
          do {
            lVar3 = lVar13 + 1;
            lVar13 = lVar13 + 1;
          } while (*(char *)((longlong)psVar9 + lVar3) != '\0');
          iVar7 = (int)lVar13 + 1;
          local_c0 = iVar7;
          if (0 < iVar7) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
          }
          iVar6 = local_c0;
          pvVar14 = local_c8;
          FGenericPlatformString::Convert<char,wchar_t>(local_c8,iVar7,psVar9,iVar7,0x3f);
        }
        iVar7 = *(int *)(param_1 + 3);
        iVar8 = iVar7 + 1;
        *(int *)(param_1 + 3) = iVar8;
        if (*(int *)((longlong)param_1 + 0x1c) < iVar8) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(ppvVar1);
        }
        puVar15 = (undefined8 *)((longlong)iVar7 * 0x10 + (longlong)*ppvVar1);
        *puVar15 = 0;
        *(int *)(puVar15 + 1) = iVar6;
        if (iVar6 == 0) {
          *(undefined4 *)((longlong)puVar15 + 0xc) = 0;
          iVar6 = 1;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar15,iVar6,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar15,pvVar14,(longlong)iVar6 * 2);
        }
        psVar9 = (short *)((longlong)psVar9 + (longlong)iVar6);
        if (pvVar14 != (void *)0x0) {
          FMemory::Free(pvVar14);
        }
        cVar4 = (char)*psVar9;
      }
    }
    else {
      sVar2 = *psVar9;
      while (sVar2 != 0) {
        iVar6 = 0;
        pvVar14 = (void *)0x0;
        local_c8 = (void *)0x0;
        local_bc = 0;
        if (sVar2 != 0) {
          lVar13 = -1;
          do {
            lVar3 = lVar13 + 1;
            lVar13 = lVar13 + 1;
          } while (psVar9[lVar3] != 0);
          local_c0 = (int)lVar13 + 1;
          lVar13 = (longlong)local_c0;
          if (0 < local_c0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
          }
          iVar6 = local_c0;
          pvVar14 = local_c8;
          FGenericPlatformString::Memcpy(local_c8,psVar9,lVar13 * 2);
        }
        iVar7 = *(int *)(param_1 + 3);
        iVar8 = iVar7 + 1;
        *(int *)(param_1 + 3) = iVar8;
        if (*(int *)((longlong)param_1 + 0x1c) < iVar8) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(ppvVar1);
        }
        puVar15 = (undefined8 *)((longlong)iVar7 * 0x10 + (longlong)*ppvVar1);
        *puVar15 = 0;
        *(int *)(puVar15 + 1) = iVar6;
        if (iVar6 == 0) {
          *(undefined4 *)((longlong)puVar15 + 0xc) = 0;
          iVar6 = 1;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar15,iVar6,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar15,pvVar14,(longlong)iVar6 * 2);
        }
        psVar9 = psVar9 + iVar6;
        if (pvVar14 != (void *)0x0) {
          FMemory::Free(pvVar14);
        }
        sVar2 = *psVar9;
      }
    }
    GlobalUnlock(local_b8.u.hGlobal);
    ReleaseStgMedium(&local_b8);
  }
  return param_1;
}



// FUNCTION 1416d09e0 FUN_1416d09e0 body=374 status=ok
// SIG undefined FUN_1416d09e0(void)

void FUN_1416d09e0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if ((DAT_1468c21da != '\0') && (*(int *)(param_1 + 0xf0) != 0)) {
    lVar3 = param_2[1];
    uVar4 = *param_2;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
      UNLOCK();
    }
    iVar2 = *(int *)(param_1 + 0x90);
    *(int *)(param_1 + 0x90) = iVar2 + 1;
    if (*(int *)(param_1 + 0x94) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                ((longlong *)(param_1 + 0x88),iVar2);
    }
    puVar5 = (undefined8 *)((longlong)iVar2 * 0x40 + *(longlong *)(param_1 + 0x88));
    *puVar5 = uVar4;
    puVar5[1] = lVar3;
    puVar5[4] = param_5;
    puVar5[5] = param_6;
    *(undefined4 *)(puVar5 + 6) = param_7;
    *(undefined4 *)((longlong)puVar5 + 0x34) = param_8;
    *(undefined4 *)(puVar5 + 7) = param_9;
    puVar5[2] = param_3;
    *(undefined4 *)(puVar5 + 3) = param_4;
    return;
  }
  local_58 = *param_2;
  local_50 = (longlong *)param_2[1];
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_50 + 0xc) = *(int *)((longlong)local_50 + 0xc) + 1;
    UNLOCK();
  }
  local_38 = param_5;
  local_30 = param_6;
  local_28 = param_7;
  local_24 = param_8;
  local_20 = param_9;
  local_48 = param_3;
  local_40 = param_4;
  FUN_1416d79a0(param_1,&local_58);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*local_50 + 8))(local_50,1);
    }
  }
  return;
}



// FUNCTION 1416d0b60 FUN_1416d0b60 body=62 status=ok
// SIG undefined FUN_1416d0b60(void)

void FUN_1416d0b60(longlong param_1)

{
  BOOL BVar1;
  
  if (0 < *(int *)(param_1 + 0x3c)) {
    BVar1 = IsWindow(*(HWND *)(param_1 + 0x28));
    if (BVar1 != 0) {
      RevokeDragDrop(*(HWND *)(param_1 + 0x28));
    }
  }
  DestroyWindow(*(HWND *)(param_1 + 0x28));
  *(byte *)(param_1 + 0xa4) = *(byte *)(param_1 + 0xa4) & 0xfe;
  return;
}



// FUNCTION 1416d0ba0 FUN_1416d0ba0 body=236 status=ok
// SIG undefined FUN_1416d0ba0(void)

void FUN_1416d0ba0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  FUN_1416a8ae0(0);
  SystemParametersInfoW(0x3b,8,(PVOID)(param_1 + 400),0);
  SystemParametersInfoW(0x35,8,(PVOID)(param_1 + 0x198),0);
  SystemParametersInfoW(0x33,0x18,(PVOID)(param_1 + 0x1a0),0);
  FConfigCacheIni::EmptySection(DAT_1468b6148,L"WindowsApplication.Accessibility",&DAT_1468e2360);
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x180) != &local_18) {
    *(undefined8 *)(param_1 + 0x180) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x188,&local_10);
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
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1416d0c90 DestroyObject body=70 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FTaskbarList,SharedPointerInternals::DefaultDeleter<FTaskbarList>_>
     ::DestroyObject(LPVOID param_1)

{
  longlong *plVar1;
  HRESULT HVar2;
  
  plVar1 = *(longlong **)((longlong)param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      HVar2 = FWindowsPlatformMisc::CoInitialize(param_1);
      if ((char)HVar2 != '\0') {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
    }
    *plVar1 = 0;
    FMemory::operator_delete(plVar1,8);
    return;
  }
  return;
}


