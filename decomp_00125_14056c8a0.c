// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14056c8a0 FUN_14056c8a0 body=179 status=ok
// SIG undefined FUN_14056c8a0(void)

undefined8 *
FUN_14056c8a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 7) = 0xa8c;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x5a;
  *(undefined1 *)(param_1 + 9) = 0;
  FString::operator=();
  FString::operator=(param_1 + 2,param_3);
  FString::operator=(param_1,param_4);
  *(undefined1 *)(param_1 + 6) = param_5;
  uVar1 = param_6[1];
  param_1[7] = *param_6;
  param_1[8] = uVar1;
  param_1[9] = param_6[2];
  return param_1;
}



// FUNCTION 14056c960 FUN_14056c960 body=65 status=ok
// SIG undefined FUN_14056c960(void)

undefined8 * FUN_14056c960(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 7) = 0xa8c;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x5a;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 14056c9b0 FUN_14056c9b0 body=1144 status=ok
// SIG undefined FUN_14056c9b0(void)

undefined8 *
FUN_14056c9b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined2 *puVar1;
  longlong **pplVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  longlong *local_res8;
  longlong *local_res10;
  longlong *local_48;
  int local_40;
  int local_3c;
  
  plVar13 = (longlong *)0x0;
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
  param_1[0x1b] = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__143fc4538;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe2) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0xffffffff;
  iVar12 = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined2 *)(param_1 + 0x27) = 0;
  FString::FString(param_1 + 0x28,param_4);
  plVar9 = (longlong *)(param_4 + 0x10);
  local_res8 = plVar9;
  FString::FString(param_1 + 0x2a,plVar9);
  FString::FString(param_1 + 0x2c,param_4 + 0x20);
  *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(param_4 + 0x30);
  uVar4 = *(undefined4 *)(param_4 + 0x3c);
  uVar5 = *(undefined4 *)(param_4 + 0x40);
  uVar6 = *(undefined4 *)(param_4 + 0x44);
  *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(param_4 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x17c) = uVar4;
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x184) = uVar6;
  param_1[0x31] = *(undefined8 *)(param_4 + 0x48);
  FString::FString(param_1 + 0x32,param_3);
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  FUN_140584270(param_1 + 0x28);
  local_40 = *(int *)(param_1 + 0x33);
  lVar14 = (longlong)local_40;
  pvVar3 = (void *)param_1[0x32];
  local_48 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_48,(2 - (uint)(local_40 != 0)) + local_40,0);
  plVar10 = local_48;
  _guard_xfg_dispatch_icall_nop(local_48,pvVar3,lVar14 * 2);
  iVar8 = local_40;
  lVar14 = (longlong)local_40;
  local_40 = (2 - (uint)(local_40 != 0)) + local_40;
  if (local_3c < local_40) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar8);
    plVar10 = local_48;
  }
  puVar1 = (undefined2 *)((longlong)plVar10 + (lVar14 - (ulonglong)(iVar8 != 0)) * 2);
  *puVar1 = 0x5f;
  puVar1[1] = 0;
  iVar8 = *(int *)(param_4 + 0x18);
  if (local_40 < 2) {
    pvVar3 = (void *)*plVar9;
    local_48 = (longlong *)0x0;
    plVar9 = plVar13;
    local_40 = iVar8;
    if (iVar8 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar8,0);
      plVar9 = local_48;
      _guard_xfg_dispatch_icall_nop(local_48,pvVar3,(longlong)iVar8 * 2);
      iVar12 = local_3c;
      iVar8 = local_40;
    }
  }
  else {
    iVar15 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar15 = iVar12;
    }
    if ((local_40 != 0) || (iVar8 = 1, iVar15 == 0)) {
      iVar8 = iVar12;
    }
    local_res10 = (longlong *)0x0;
    local_48 = plVar10;
    if (local_3c < local_40 + iVar15 + iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
    }
    iVar7 = local_40;
    local_res8 = (longlong *)*local_res8;
    plVar10 = plVar13;
    plVar9 = local_48;
    iVar12 = local_3c;
    iVar8 = local_40;
    if (iVar15 != 0) {
      lVar14 = (longlong)local_40;
      local_40 = local_40 + (uint)(local_40 == 0) + iVar15;
      if (local_3c < local_40) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar7);
      }
      iVar8 = local_40;
      plVar9 = local_48;
      pvVar3 = (void *)((longlong)local_48 + (lVar14 - (ulonglong)(iVar7 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar3,local_res8,(longlong)iVar15 * 2);
      *(undefined2 *)((longlong)iVar15 * 2 + (longlong)pvVar3) = 0;
      plVar10 = local_res10;
      iVar12 = local_3c;
    }
  }
  pplVar2 = (longlong **)(param_1 + 0x34);
  if (pplVar2 == &local_48) {
    if (plVar9 != (longlong *)0x0) {
      FMemory::Free(plVar9);
    }
  }
  else {
    if (*pplVar2 != (longlong *)0x0) {
      FMemory::Free();
    }
    *pplVar2 = plVar9;
    *(int *)(param_1 + 0x35) = iVar8;
    *(int *)((longlong)param_1 + 0x1ac) = iVar12;
  }
  if (plVar10 != (longlong *)0x0) {
    FMemory::Free(plVar10);
  }
  if ((DAT_1468535b8 == (longlong *)0x0) &&
     (plVar9 = (longlong *)operator_new(0x18), DAT_1468535b8 = plVar13, plVar9 != (longlong *)0x0))
  {
    *plVar9 = 0;
    plVar9[1] = 0;
    plVar9[2] = 2;
    DAT_1468535b8 = plVar9;
  }
  plVar9 = DAT_1468535b8;
  plVar10 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar10 != (longlong *)0x0) {
    plVar10[1] = (longlong)param_1;
    *plVar10 = (longlong)&PTR_GetPoolName_143fc4c00;
    lVar14 = FDelegateHandle::GenerateNewID();
    plVar10[3] = lVar14;
    *plVar10 = (longlong)&PTR_GetPoolName_143fc4c48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar9,1);
    puVar11 = (undefined8 *)(**(code **)(*plVar10 + 0x20))(plVar10,&local_res8);
    iVar8 = (int)plVar9[1];
    plVar13 = (longlong *)*puVar11;
    *(int *)(plVar9 + 1) = iVar8 + 1;
    if (*(int *)((longlong)plVar9 + 0xc) < iVar8 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar8);
    }
    puVar11 = (undefined8 *)((longlong)iVar8 * 0x10 + *plVar9);
    *puVar11 = plVar10;
    *(undefined4 *)(puVar11 + 1) = 2;
  }
  param_1[0x36] = plVar13;
  return param_1;
}



// FUNCTION 14056ce30 FUN_14056ce30 body=1225 status=ok
// SIG undefined FUN_14056ce30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14056ce30(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  short *psVar4;
  char *pcVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_238 [32];
  undefined2 local_218;
  longlong local_208;
  longlong local_200;
  ulonglong local_1f8;
  undefined8 *local_1f0;
  longlong local_1e8 [2];
  char local_1d8;
  longlong local_1d0 [2];
  longlong local_1c0;
  longlong local_1b0;
  longlong local_1a0;
  longlong local_190;
  longlong *local_180;
  int local_178;
  undefined1 local_168 [256];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  iVar11 = 0;
  puVar1 = param_1 + 0x10;
  puVar2 = param_1 + 0x12;
  puVar3 = param_1 + 0x14;
  *param_1 = &PTR_FUN_143fc4810;
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
  *puVar1 = 0;
  param_1[0x11] = 0;
  *puVar2 = 0;
  param_1[0x13] = 0;
  *puVar3 = 0;
  param_1[0x15] = 0;
  param_1[0x16] = param_2;
  local_208 = param_3;
  local_1f0 = param_1;
  puVar6 = (undefined8 *)FDateTime::UtcNow(&local_200);
  param_1[1] = *puVar6;
  lVar7 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                    (local_168,*(undefined8 *)(param_3 + 0x90));
  lVar13 = -1;
  psVar4 = *(short **)(lVar7 + 0x108);
  if ((short *)*puVar3 != psVar4) {
    iVar9 = iVar11;
    if ((psVar4 != (short *)0x0) && (lVar7 = lVar13, *psVar4 != 0)) {
      do {
        lVar7 = lVar7 + 1;
      } while (psVar4[lVar7] != 0);
      iVar9 = (int)lVar7 + 1;
    }
    *(undefined4 *)(param_1 + 0x15) = 0;
    iVar8 = iVar11;
    if (*(int *)((longlong)param_1 + 0xac) != iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar3,iVar9);
      iVar8 = *(int *)(param_1 + 0x15);
    }
    *(int *)(param_1 + 0x15) = iVar8 + iVar9;
    if (*(int *)((longlong)param_1 + 0xac) < iVar8 + iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar3);
    }
    param_3 = local_208;
    if (iVar9 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)*puVar3,psVar4,(longlong)iVar9 * 2);
      param_3 = local_208;
    }
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  lVar7 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                    (local_168,*(undefined8 *)(param_3 + 0x88));
  psVar4 = *(short **)(lVar7 + 0x108);
  if ((short *)*puVar2 != psVar4) {
    iVar9 = iVar11;
    if ((psVar4 != (short *)0x0) && (lVar7 = lVar13, *psVar4 != 0)) {
      do {
        lVar7 = lVar7 + 1;
      } while (psVar4[lVar7] != 0);
      iVar9 = (int)lVar7 + 1;
    }
    *(undefined4 *)(param_1 + 0x13) = 0;
    iVar8 = iVar11;
    if (*(int *)((longlong)param_1 + 0x9c) != iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,iVar9);
      iVar8 = *(int *)(param_1 + 0x13);
    }
    *(int *)(param_1 + 0x13) = iVar9 + iVar8;
    if (*(int *)((longlong)param_1 + 0x9c) < iVar9 + iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
    }
    param_3 = local_208;
    if (iVar9 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)*puVar2,psVar4,(longlong)iVar9 * 2);
      param_3 = local_208;
    }
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  lVar7 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                    (local_168,*(undefined8 *)(param_3 + 0x80));
  psVar4 = *(short **)(lVar7 + 0x108);
  if ((short *)*puVar1 != psVar4) {
    iVar9 = iVar11;
    if ((psVar4 != (short *)0x0) && (lVar7 = lVar13, *psVar4 != 0)) {
      do {
        lVar7 = lVar7 + 1;
      } while (psVar4[lVar7] != 0);
      iVar9 = (int)lVar7 + 1;
    }
    *(undefined4 *)(param_1 + 0x11) = 0;
    iVar8 = iVar11;
    if (*(int *)((longlong)param_1 + 0x8c) != iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1,iVar9);
      iVar8 = *(int *)(param_1 + 0x11);
    }
    *(int *)(param_1 + 0x11) = iVar9 + iVar8;
    if (*(int *)((longlong)param_1 + 0x8c) < iVar9 + iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1);
    }
    param_3 = local_208;
    if (iVar9 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,psVar4,(longlong)iVar9 * 2);
      param_3 = local_208;
    }
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  lVar7 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                    (local_168,*(undefined8 *)(param_3 + 0x50));
  puVar1 = local_1f0;
  psVar4 = *(short **)(lVar7 + 0x108);
  if ((short *)local_1f0[2] != psVar4) {
    iVar9 = iVar11;
    if ((psVar4 != (short *)0x0) && (lVar7 = lVar13, *psVar4 != 0)) {
      do {
        lVar7 = lVar7 + 1;
      } while (psVar4[lVar7] != 0);
      iVar9 = (int)lVar7 + 1;
    }
    *(undefined4 *)(local_1f0 + 3) = 0;
    if (*(int *)((longlong)local_1f0 + 0x1c) != iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(local_1f0 + 2,iVar9);
      iVar11 = *(int *)(puVar1 + 3);
    }
    *(int *)(puVar1 + 3) = iVar9 + iVar11;
    if (*(int *)((longlong)puVar1 + 0x1c) < iVar9 + iVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1 + 2);
    }
    param_3 = local_208;
    if (iVar9 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)puVar1[2],psVar4,(longlong)iVar9 * 2);
      param_3 = local_208;
    }
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  pcVar5 = *(char **)(param_3 + 0x40);
  local_200 = 0;
  local_1f8 = 0;
  if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
    do {
      lVar13 = lVar13 + 1;
    } while (pcVar5[lVar13] != '\0');
    uVar12 = (int)lVar13 + 1;
    local_1f8 = (ulonglong)uVar12;
    if (0 < (int)uVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_200,0);
    }
    local_218 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_200,uVar12,pcVar5,uVar12);
  }
  local_1d8 = '\0';
  lVar13 = FUN_14057c0d0(local_1d0,&local_200,local_1e8);
  FString::operator=(puVar1 + 4,lVar13);
  FString::operator=(puVar1 + 6,lVar13 + 0x10);
  FString::operator=(puVar1 + 8,lVar13 + 0x20);
  FString::operator=(puVar1 + 10,lVar13 + 0x30);
  FString::operator=(puVar1 + 0xc,lVar13 + 0x40);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(puVar1 + 0xe,lVar13 + 0x50);
  plVar10 = local_180;
  for (; local_178 != 0; local_178 = local_178 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_180 != (longlong *)0x0) {
    FMemory::Free(local_180);
  }
  if (local_190 != 0) {
    FMemory::Free();
  }
  if (local_1a0 != 0) {
    FMemory::Free();
  }
  if (local_1b0 != 0) {
    FMemory::Free();
  }
  if (local_1c0 != 0) {
    FMemory::Free();
  }
  if (local_1d0[0] != 0) {
    FMemory::Free();
  }
  if ((local_1d8 != '\0') && (local_1e8[0] != 0)) {
    FMemory::Free();
  }
  if (local_200 != 0) {
    FMemory::Free();
  }
  return puVar1;
}



// FUNCTION 14056d300 FUN_14056d300 body=1217 status=ok
// SIG undefined FUN_14056d300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14056d300(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  short *psVar4;
  char *pcVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_238 [32];
  undefined2 local_218;
  longlong local_208;
  longlong local_200;
  ulonglong local_1f8;
  undefined8 *local_1f0;
  longlong local_1e8 [2];
  char local_1d8;
  longlong local_1d0 [2];
  longlong local_1c0;
  longlong local_1b0;
  longlong local_1a0;
  longlong local_190;
  longlong *local_180;
  int local_178;
  undefined1 local_168 [256];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  iVar11 = 0;
  puVar1 = param_1 + 2;
  puVar2 = param_1 + 0x12;
  puVar3 = param_1 + 0x14;
  *param_1 = &PTR_FUN_143fc4810;
  *puVar1 = 0;
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
  *puVar2 = 0;
  param_1[0x13] = 0;
  *puVar3 = 0;
  param_1[0x15] = 0;
  param_1[0x16] = param_2;
  local_208 = param_3;
  local_1f0 = param_1;
  puVar6 = (undefined8 *)FDateTime::UtcNow(&local_200);
  param_1[1] = *puVar6;
  lVar7 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                    (local_168,*(undefined8 *)(param_3 + 0x40));
  lVar13 = -1;
  psVar4 = *(short **)(lVar7 + 0x108);
  if ((short *)*puVar1 != psVar4) {
    iVar9 = iVar11;
    if ((psVar4 != (short *)0x0) && (lVar7 = lVar13, *psVar4 != 0)) {
      do {
        lVar7 = lVar7 + 1;
      } while (psVar4[lVar7] != 0);
      iVar9 = (int)lVar7 + 1;
    }
    *(undefined4 *)(param_1 + 3) = 0;
    iVar8 = iVar11;
    if (*(int *)((longlong)param_1 + 0x1c) != iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1,iVar9);
      iVar8 = *(int *)(param_1 + 3);
    }
    *(int *)(param_1 + 3) = iVar8 + iVar9;
    if (*(int *)((longlong)param_1 + 0x1c) < iVar8 + iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1);
    }
    param_3 = local_208;
    if (iVar9 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,psVar4,(longlong)iVar9 * 2);
      param_3 = local_208;
    }
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  lVar7 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                    (local_168,*(undefined8 *)(param_3 + 0x58));
  psVar4 = *(short **)(lVar7 + 0x108);
  if ((short *)*puVar3 != psVar4) {
    iVar9 = iVar11;
    if ((psVar4 != (short *)0x0) && (lVar7 = lVar13, *psVar4 != 0)) {
      do {
        lVar7 = lVar7 + 1;
      } while (psVar4[lVar7] != 0);
      iVar9 = (int)lVar7 + 1;
    }
    *(undefined4 *)(param_1 + 0x15) = 0;
    iVar8 = iVar11;
    if (*(int *)((longlong)param_1 + 0xac) != iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar3,iVar9);
      iVar8 = *(int *)(param_1 + 0x15);
    }
    *(int *)(param_1 + 0x15) = iVar9 + iVar8;
    if (*(int *)((longlong)param_1 + 0xac) < iVar9 + iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar3);
    }
    param_3 = local_208;
    if (iVar9 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)*puVar3,psVar4,(longlong)iVar9 * 2);
      param_3 = local_208;
    }
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  lVar7 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                    (local_168,*(undefined8 *)(param_3 + 0x50));
  psVar4 = *(short **)(lVar7 + 0x108);
  if ((short *)*puVar2 != psVar4) {
    iVar9 = iVar11;
    if ((psVar4 != (short *)0x0) && (lVar7 = lVar13, *psVar4 != 0)) {
      do {
        lVar7 = lVar7 + 1;
      } while (psVar4[lVar7] != 0);
      iVar9 = (int)lVar7 + 1;
    }
    *(undefined4 *)(param_1 + 0x13) = 0;
    iVar8 = iVar11;
    if (*(int *)((longlong)param_1 + 0x9c) != iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,iVar9);
      iVar8 = *(int *)(param_1 + 0x13);
    }
    *(int *)(param_1 + 0x13) = iVar9 + iVar8;
    if (*(int *)((longlong)param_1 + 0x9c) < iVar9 + iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
    }
    param_3 = local_208;
    if (iVar9 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)*puVar2,psVar4,(longlong)iVar9 * 2);
      param_3 = local_208;
    }
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  lVar7 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                    (local_168,*(undefined8 *)(param_3 + 0x48));
  puVar2 = local_1f0;
  psVar4 = *(short **)(lVar7 + 0x108);
  puVar1 = local_1f0 + 0x10;
  if ((short *)*puVar1 != psVar4) {
    iVar9 = iVar11;
    if ((psVar4 != (short *)0x0) && (lVar7 = lVar13, *psVar4 != 0)) {
      do {
        lVar7 = lVar7 + 1;
      } while (psVar4[lVar7] != 0);
      iVar9 = (int)lVar7 + 1;
    }
    *(undefined4 *)(local_1f0 + 0x11) = 0;
    if (*(int *)((longlong)local_1f0 + 0x8c) != iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1,iVar9);
      iVar11 = *(int *)(puVar2 + 0x11);
    }
    *(int *)(puVar2 + 0x11) = iVar9 + iVar11;
    if (*(int *)((longlong)puVar2 + 0x8c) < iVar9 + iVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1);
    }
    param_3 = local_208;
    if (iVar9 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,psVar4,(longlong)iVar9 * 2);
      param_3 = local_208;
    }
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  pcVar5 = *(char **)(param_3 + 0x30);
  local_200 = 0;
  local_1f8 = 0;
  if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
    do {
      lVar13 = lVar13 + 1;
    } while (pcVar5[lVar13] != '\0');
    uVar12 = (int)lVar13 + 1;
    local_1f8 = (ulonglong)uVar12;
    if (0 < (int)uVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_200,0);
    }
    local_218 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_200,uVar12,pcVar5,uVar12);
  }
  local_1d8 = '\0';
  lVar13 = FUN_14057c0d0(local_1d0,&local_200,local_1e8);
  FString::operator=(puVar2 + 4,lVar13);
  FString::operator=(puVar2 + 6,lVar13 + 0x10);
  FString::operator=(puVar2 + 8,lVar13 + 0x20);
  FString::operator=(puVar2 + 10,lVar13 + 0x30);
  FString::operator=(puVar2 + 0xc,lVar13 + 0x40);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(puVar2 + 0xe,lVar13 + 0x50);
  plVar10 = local_180;
  for (; local_178 != 0; local_178 = local_178 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_180 != (longlong *)0x0) {
    FMemory::Free(local_180);
  }
  if (local_190 != 0) {
    FMemory::Free();
  }
  if (local_1a0 != 0) {
    FMemory::Free();
  }
  if (local_1b0 != 0) {
    FMemory::Free();
  }
  if (local_1c0 != 0) {
    FMemory::Free();
  }
  if (local_1d0[0] != 0) {
    FMemory::Free();
  }
  if ((local_1d8 != '\0') && (local_1e8[0] != 0)) {
    FMemory::Free();
  }
  if (local_200 != 0) {
    FMemory::Free();
  }
  return puVar2;
}



// FUNCTION 14056d7d0 FUN_14056d7d0 body=1467 status=ok
// SIG undefined FUN_14056d7d0(void)

undefined8 * FUN_14056d7d0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined4 **ppuVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong local_res18 [2];
  undefined4 *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48 [2];
  
  plVar9 = (longlong *)0x0;
  puVar5 = param_1 + 0x12;
  param_1[1] = 0;
  ppuVar1 = (undefined4 **)(param_1 + 0x1e);
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
  *param_1 = &PTR_FUN_143fc4650;
  *puVar5 = 0;
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
  *ppuVar1 = (undefined4 *)0x0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  plVar6 = param_1 + 0x54;
  *plVar6 = 0;
  param_1[0x55] = 0;
  *(undefined1 *)(param_1 + 0x53) = 0;
  local_res18[0] = param_3;
  if (plVar6 != local_48) {
    *(undefined4 *)(param_1 + 0x55) = 0;
    if (*(int *)((longlong)param_1 + 0x2ac) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2ac) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar6,0);
    }
  }
  param_1[0x56] = param_2;
  param_1[0x57] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x61] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x60) = 0xa8c;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0x5a;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 2;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 2;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 2;
  param_1[100] = &PTR__scalar_deleting_destructor__143fc45f8;
  param_1[0x6e] = param_1[0x56];
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3ac) = 0;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = &PTR__scalar_deleting_destructor__143fc44d0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined1 *)((longlong)param_1 + 0x3f4) = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0;
  param_1[0x87] = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  FUN_1405840c0(local_res18[0]);
  FString::operator=(puVar5,local_res18[0]);
  FString::operator=(param_1 + 0x14,local_res18[0] + 0x10);
  lVar8 = local_res18[0];
  FString::operator=(param_1 + 0x16,local_res18[0] + 0x20);
  FString::operator=(param_1 + 0x18,lVar8 + 0x30);
  FString::operator=(param_1 + 0x1a,lVar8 + 0x40);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_1 + 0x1c,lVar8 + 0x50);
  puVar5 = (undefined8 *)AccountId::ToString(puVar5,local_48);
  iVar10 = *(int *)(puVar5 + 1) + -1;
  if (*(int *)(puVar5 + 1) == 0) {
    iVar10 = 0;
  }
  local_50 = iVar10 + 4;
  local_58 = (undefined4 *)0x0;
  local_4c = 0;
  if (0 < local_50) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  }
  uVar4 = local_4c;
  iVar3 = local_50;
  puVar2 = local_58;
  *local_58 = 0x670073;
  *(undefined2 *)(local_58 + 1) = 0x5f;
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)local_58 + 6),(void *)*puVar5,(longlong)iVar10 * 2);
  *(undefined2 *)((longlong)puVar2 + (longlong)iVar10 * 2 + 6) = 0;
  if (ppuVar1 == &local_58) {
    if (puVar2 != (undefined4 *)0x0) {
      FMemory::Free(puVar2);
    }
  }
  else {
    if (*ppuVar1 != (undefined4 *)0x0) {
      FMemory::Free();
    }
    *ppuVar1 = puVar2;
    *(int *)(param_1 + 0x1f) = iVar3;
    *(undefined4 *)((longlong)param_1 + 0xfc) = uVar4;
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(undefined1 *)((longlong)param_1 + 0x319) = 0;
  if ((DAT_1468535b8 == (longlong *)0x0) &&
     (plVar6 = (longlong *)operator_new(0x18), DAT_1468535b8 = plVar9, plVar6 != (longlong *)0x0)) {
    *plVar6 = 0;
    plVar6[1] = 0;
    plVar6[2] = 2;
    DAT_1468535b8 = plVar6;
  }
  plVar6 = DAT_1468535b8;
  plVar7 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar7 != (longlong *)0x0) {
    plVar7[1] = (longlong)param_1;
    *plVar7 = (longlong)&PTR_GetPoolName_143fc4f60;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[3] = lVar8;
    *plVar7 = (longlong)&PTR_GetPoolName_143fc4fa8;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
    puVar5 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res18);
    iVar10 = (int)plVar6[1];
    plVar9 = (longlong *)*puVar5;
    *(int *)(plVar6 + 1) = iVar10 + 1;
    if (*(int *)((longlong)plVar6 + 0xc) < iVar10 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar10);
    }
    puVar5 = (undefined8 *)((longlong)iVar10 * 0x10 + *plVar6);
    *puVar5 = plVar7;
    *(undefined4 *)(puVar5 + 1) = 2;
  }
  param_1[0x57] = plVar9;
  return param_1;
}



// FUNCTION 14056dd90 FUN_14056dd90 body=939 status=ok
// SIG undefined FUN_14056dd90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14056dd90(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  short *psVar2;
  char *pcVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_258 [32];
  undefined2 local_238;
  longlong local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 *local_210;
  undefined8 *local_208;
  undefined8 *local_200;
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  longlong local_1e8 [2];
  longlong local_1d8;
  longlong local_1c8;
  longlong local_1b8;
  longlong local_1a8;
  longlong *local_198;
  int local_190;
  longlong local_188;
  uint local_180;
  uint local_17c;
  char local_178;
  undefined1 local_168 [256];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  lVar10 = 0;
  plVar1 = param_1 + 5;
  *param_1 = &PTR_FUN_143fc4778;
  *plVar1 = 0;
  param_1[6] = 0;
  param_1[7] = param_2;
  local_210 = param_1 + 10;
  param_1[8] = 0;
  param_1[9] = 0;
  *local_210 = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  local_208 = param_1 + 0xc;
  param_1[0x13] = 0;
  local_200 = param_1 + 0xe;
  local_1f8 = param_1 + 0x10;
  local_1f0 = param_1 + 0x12;
  *(bool *)(param_1 + 1) = *(int *)(param_3 + 0x80) == 1;
  local_218 = param_3;
  lVar4 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                    (local_168,*(undefined8 *)(param_3 + 0x68));
  uVar7 = 0;
  lVar11 = -1;
  uVar5 = 0;
  local_17c = 0;
  psVar2 = *(short **)(lVar4 + 0x108);
  local_188 = 0;
  lVar4 = lVar10;
  uVar6 = uVar5;
  if ((psVar2 != (short *)0x0) && (lVar4 = 0, lVar8 = lVar11, uVar6 = uVar7, *psVar2 != 0)) {
    do {
      lVar8 = lVar8 + 1;
    } while (psVar2[lVar8] != 0);
    uVar6 = (int)lVar8 + 1;
    local_180 = uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
    }
    uVar7 = local_180;
    FGenericPlatformString::Memcpy(local_188,psVar2,(longlong)(int)uVar6 * 2);
    lVar4 = local_188;
    uVar6 = local_17c;
  }
  lVar8 = local_218;
  local_178 = '\x01';
  pcVar3 = *(char **)(local_218 + 0x38);
  local_228 = 0;
  local_220 = 0;
  local_188 = lVar4;
  local_180 = uVar7;
  local_17c = uVar6;
  if ((pcVar3 != (char *)0x0) && (lVar4 = lVar11, *pcVar3 != '\0')) {
    do {
      lVar4 = lVar4 + 1;
    } while (pcVar3[lVar4] != '\0');
    uVar7 = (int)lVar4 + 1;
    local_220 = (ulonglong)uVar7;
    if (0 < (int)uVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,0);
    }
    local_238 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_228,uVar7,pcVar3,uVar7);
  }
  lVar4 = FUN_14057c0d0(local_1e8,&local_228,&local_188);
  FString::operator=(param_1 + 8,lVar4);
  FString::operator=(local_210,lVar4 + 0x10);
  FString::operator=(local_208,lVar4 + 0x20);
  FString::operator=(local_200,lVar4 + 0x30);
  FString::operator=(local_1f8,lVar4 + 0x40);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(local_1f0,lVar4 + 0x50);
  plVar9 = local_198;
  for (; local_190 != 0; local_190 = local_190 + -1) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
  }
  if (local_198 != (longlong *)0x0) {
    FMemory::Free(local_198);
  }
  if (local_1a8 != 0) {
    FMemory::Free();
  }
  if (local_1b8 != 0) {
    FMemory::Free();
  }
  if (local_1c8 != 0) {
    FMemory::Free();
  }
  if (local_1d8 != 0) {
    FMemory::Free();
  }
  if (local_1e8[0] != 0) {
    FMemory::Free();
  }
  if (local_228 != 0) {
    FMemory::Free();
  }
  if ((local_178 != '\0') && (local_188 != 0)) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  param_1[2] = 0;
  *(undefined2 *)((longlong)param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  pcVar3 = *(char **)(lVar8 + 0x78);
  local_228 = 0;
  local_220 = local_220 & 0xffffffff;
  uVar7 = uVar5;
  if ((pcVar3 != (char *)0x0) && (uVar7 = 0, *pcVar3 != '\0')) {
    do {
      lVar11 = lVar11 + 1;
    } while (pcVar3[lVar11] != '\0');
    uVar6 = (int)lVar11 + 1;
    local_220 = (ulonglong)uVar6;
    uVar5 = uVar6;
    uVar7 = 0;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,0);
      uVar5 = (uint)local_220;
      uVar7 = local_220._4_4_;
    }
    lVar10 = local_228;
    local_238 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_228,uVar6,pcVar3,uVar6);
  }
  if (plVar1 == &local_228) {
    if (lVar10 != 0) {
      FMemory::Free(lVar10);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar10;
    *(uint *)(param_1 + 6) = uVar5;
    *(uint *)((longlong)param_1 + 0x34) = uVar7;
  }
  return param_1;
}



// FUNCTION 14056e140 PresenceLocation body=557 status=ok
// SIG undefined PresenceLocation(void)

undefined8 *
PresenceLocation::PresenceLocation(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  void **ppvVar1;
  char *pcVar2;
  void **ppvVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  longlong lVar7;
  void *_Src;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  void *pvVar11;
  void *pvVar12;
  void *local_58;
  uint local_50;
  uint local_4c;
  undefined1 local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  
  pvVar5 = (void *)0x0;
  ppvVar1 = (void **)(param_1 + 1);
  *param_1 = &PTR__scalar_deleting_destructor__143fc48e0;
  *ppvVar1 = (void *)0x0;
  ppvVar3 = (void **)(param_1 + 4);
  param_1[2] = 0;
  *ppvVar3 = (void *)0x0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  uVar4 = 0;
  if (ppvVar3 != &local_58) {
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar3,0);
    }
  }
  param_1[6] = param_2;
  pcVar2 = *(char **)(param_3 + 0x48);
  lVar9 = -1;
  local_58 = (void *)0x0;
  local_4c = 0;
  _Src = pvVar5;
  pvVar11 = pvVar5;
  if ((pcVar2 != (char *)0x0) && (pvVar11 = (void *)0x0, *pcVar2 != '\0')) {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (pcVar2[lVar7] != '\0');
    uVar6 = (int)lVar7 + 1;
    local_50 = uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    }
    _Src = local_58;
    pvVar11 = (void *)(ulonglong)local_50;
    FGenericPlatformString::Convert<char,wchar_t>(local_58,uVar6,pcVar2,uVar6,0x3f);
  }
  local_40 = (void *)0x0;
  local_34 = 0;
  iVar10 = (int)pvVar11;
  local_48 = *(undefined1 *)(param_3 + 0x40);
  pvVar12 = pvVar5;
  local_38 = iVar10;
  if (iVar10 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,pvVar11,0);
    pvVar12 = local_40;
    ::_guard_xfg_dispatch_icall_nop(local_40,_Src,(longlong)iVar10 * 2);
  }
  iVar10 = local_38;
  *(undefined1 *)(param_1 + 3) = local_48;
  ppvVar3 = (void **)(param_1 + 4);
  if (ppvVar3 == &local_40) {
    if (pvVar12 != (void *)0x0) {
      FMemory::Free(pvVar12);
    }
  }
  else {
    if (*ppvVar3 != (void *)0x0) {
      FMemory::Free();
    }
    *ppvVar3 = pvVar12;
    *(int *)(param_1 + 5) = iVar10;
    *(undefined4 *)((longlong)param_1 + 0x2c) = local_34;
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  local_58 = (void *)0x0;
  local_4c = 0;
  pcVar2 = *(char **)(param_3 + 0x78);
  uVar6 = uVar4;
  if ((pcVar2 != (char *)0x0) && (uVar6 = 0, *pcVar2 != '\0')) {
    do {
      lVar9 = lVar9 + 1;
    } while (pcVar2[lVar9] != '\0');
    uVar8 = (int)lVar9 + 1;
    local_50 = uVar8;
    if (0 < (int)uVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    }
    uVar6 = local_4c;
    uVar4 = local_50;
    pvVar5 = local_58;
    FGenericPlatformString::Convert<char,wchar_t>(local_58,uVar8,pcVar2,uVar8,0x3f);
  }
  if (ppvVar1 == &local_58) {
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
  }
  else {
    if (*ppvVar1 != (void *)0x0) {
      FMemory::Free();
    }
    *ppvVar1 = pvVar5;
    *(uint *)(param_1 + 2) = uVar4;
    *(uint *)((longlong)param_1 + 0x14) = uVar6;
  }
  return param_1;
}



// FUNCTION 14056e370 TTSMessageImpl body=117 status=ok
// SIG undefined TTSMessageImpl(void)

undefined8 * TTSMessageImpl::TTSMessageImpl(undefined8 *param_1,longlong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__143fc44f0;
  param_1[1] = &PTR__scalar_deleting_destructor__143fc44d0;
  FString::FString(param_1 + 2,param_2 + 0x10);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  *(undefined1 *)((longlong)param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  FString::FString(param_1 + 5,param_2 + 0x28);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0x40);
  *(undefined1 *)((longlong)param_1 + 0x41) = *(undefined1 *)(param_2 + 0x41);
  return param_1;
}



// FUNCTION 14056e3f0 FUN_14056e3f0 body=1140 status=ok
// SIG undefined FUN_14056e3f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14056e3f0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  short *psVar9;
  longlong lVar10;
  short *psVar11;
  short *psVar12;
  int iVar13;
  longlong lVar14;
  short *psVar15;
  longlong *plVar16;
  uint uVar17;
  undefined1 auStack_388 [32];
  undefined2 local_368;
  short *local_358;
  longlong local_350;
  ulonglong local_348;
  undefined8 *local_340;
  undefined8 *local_338;
  undefined8 *local_330;
  undefined8 *local_328;
  undefined8 *local_320;
  undefined8 *local_318;
  undefined8 *local_310;
  longlong local_308 [2];
  char local_2f8;
  longlong local_2f0 [2];
  longlong local_2e0;
  longlong local_2d0;
  longlong local_2c0;
  longlong local_2b0;
  longlong *local_2a0;
  int local_298;
  short local_288 [128];
  short *local_188;
  short *local_180;
  int local_178;
  undefined1 local_168 [256];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  psVar12 = (short *)0x0;
  local_358 = (short *)((ulonglong)local_358 & 0xffffffff00000000);
  puVar1 = param_1 + 2;
  *param_1 = &PTR_FUN_143fc4850;
  local_338 = param_1 + 4;
  *puVar1 = 0;
  local_330 = param_1 + 6;
  param_1[3] = 0;
  puVar2 = param_1 + 0x10;
  *local_338 = 0;
  param_1[5] = 0;
  *local_330 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  local_328 = param_1 + 8;
  param_1[0xe] = 0;
  local_320 = param_1 + 10;
  param_1[0xf] = 0;
  local_318 = param_1 + 0xc;
  *puVar2 = 0;
  local_310 = param_1 + 0xe;
  param_1[0x11] = 0;
  param_1[0x12] = param_2;
  local_350 = param_3;
  local_340 = param_1;
  puVar7 = (undefined8 *)FDateTime::UtcNow(&local_358);
  param_1[1] = *puVar7;
  if (*(longlong *)(param_3 + 0x48) == 0) {
    bVar5 = false;
    bVar4 = true;
    local_358 = (short *)((ulonglong)local_358 & 0xffffffff00000000);
    local_188 = (short *)0x0;
    FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
              (&local_358,0x7fffffff,&DAT_143fc2c3c,2);
    local_178 = (int)local_358;
    uVar17 = (int)local_358 + 1;
    psVar9 = psVar12;
    if ((0x80 < uVar17) && (uVar17 != 0)) {
      psVar9 = (short *)FMemory::Realloc(0,(longlong)(int)uVar17 * 2,0);
      local_188 = psVar9;
    }
    local_358 = local_288;
    if (psVar9 != (short *)0x0) {
      local_358 = psVar9;
    }
    local_180 = local_358;
    FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_358,uVar17,&DAT_143fc2c3c,3);
    psVar9 = local_180;
  }
  else {
    lVar8 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                      (local_168);
    bVar5 = true;
    bVar4 = false;
    psVar9 = *(short **)(lVar8 + 0x108);
  }
  lVar8 = -1;
  if ((short *)*puVar2 != psVar9) {
    psVar15 = psVar12;
    if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
      lVar14 = -1;
      do {
        lVar14 = lVar14 + 1;
      } while (psVar9[lVar14] != 0);
      psVar15 = (short *)(ulonglong)((int)lVar14 + 1);
    }
    *(undefined4 *)(param_1 + 0x11) = 0;
    iVar13 = (int)psVar15;
    psVar11 = psVar12;
    if (*(int *)((longlong)param_1 + 0x8c) != iVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar2,psVar15);
      psVar11 = (short *)(ulonglong)*(uint *)(param_1 + 0x11);
    }
    iVar6 = (int)psVar11 + iVar13;
    *(int *)(param_1 + 0x11) = iVar6;
    if (*(int *)((longlong)param_1 + 0x8c) < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar2);
    }
    if (iVar13 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)*puVar2,psVar9,(longlong)iVar13 * 2);
    }
  }
  if ((bVar4) && (local_188 != (short *)0x0)) {
    FMemory::Free();
  }
  if ((bVar5) && (local_68 != 0)) {
    FMemory::Free();
  }
  lVar14 = local_350;
  lVar10 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                     (local_168,*(undefined8 *)(local_350 + 0x40));
  psVar9 = *(short **)(lVar10 + 0x108);
  if ((short *)*puVar1 != psVar9) {
    psVar15 = psVar12;
    if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (psVar9[lVar10] != 0);
      psVar15 = (short *)(ulonglong)((int)lVar10 + 1);
    }
    *(undefined4 *)(param_1 + 3) = 0;
    iVar13 = (int)psVar15;
    if (*(int *)((longlong)param_1 + 0x1c) != iVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1,psVar15);
      psVar12 = (short *)(ulonglong)*(uint *)(param_1 + 3);
    }
    iVar6 = iVar13 + (int)psVar12;
    *(int *)(param_1 + 3) = iVar6;
    if (*(int *)((longlong)param_1 + 0x1c) < iVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar1);
    }
    if (iVar13 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,psVar9,(longlong)iVar13 * 2);
    }
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  pcVar3 = *(char **)(lVar14 + 0x38);
  local_350 = 0;
  local_348 = 0;
  if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
    do {
      lVar8 = lVar8 + 1;
    } while (pcVar3[lVar8] != '\0');
    uVar17 = (int)lVar8 + 1;
    local_348 = (ulonglong)uVar17;
    if (0 < (int)uVar17) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_350,0);
    }
    local_368 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_350,uVar17,pcVar3,uVar17);
  }
  local_2f8 = '\0';
  lVar8 = FUN_14057c0d0(local_2f0,&local_350,local_308);
  FString::operator=(local_338,lVar8);
  FString::operator=(local_330,lVar8 + 0x10);
  FString::operator=(local_328,lVar8 + 0x20);
  FString::operator=(local_320,lVar8 + 0x30);
  FString::operator=(local_318,lVar8 + 0x40);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(local_310,lVar8 + 0x50);
  plVar16 = local_2a0;
  for (; local_298 != 0; local_298 = local_298 + -1) {
    if (*plVar16 != 0) {
      FMemory::Free();
    }
    plVar16 = plVar16 + 2;
  }
  if (local_2a0 != (longlong *)0x0) {
    FMemory::Free(local_2a0);
  }
  if (local_2b0 != 0) {
    FMemory::Free();
  }
  if (local_2c0 != 0) {
    FMemory::Free();
  }
  if (local_2d0 != 0) {
    FMemory::Free();
  }
  if (local_2e0 != 0) {
    FMemory::Free();
  }
  if (local_2f0[0] != 0) {
    FMemory::Free();
  }
  if ((local_2f8 != '\0') && (local_308[0] != 0)) {
    FMemory::Free();
  }
  if (local_350 != 0) {
    FMemory::Free();
  }
  return local_340;
}



// FUNCTION 14056e870 FUN_14056e870 body=165 status=ok
// SIG undefined FUN_14056e870(void)

longlong FUN_14056e870(longlong param_1)

{
  int iVar1;
  
  iVar1 = _guard_xfg_dispatch_icall_nop(param_1,600);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x198) = 0;
    *(code **)(param_1 + 0x188) = AK::MemoryMgr::StartProfileThreadUsage;
    *(code **)(param_1 + 0x128) = operator_new;
    *(code **)(param_1 + 0x138) = HarfBuzzRealloc;
    *(code **)(param_1 + 0x140) = VivoxConfig::VivoxCalloc;
    *(undefined1 **)(param_1 + 0x148) = &LAB_14058b2f0;
    *(code **)(param_1 + 0x130) = FMemory::operator_delete;
    *(code **)(param_1 + 0x150) = FMemory::operator_delete;
    *(undefined2 *)(param_1 + 0x20) = 0x4e55;
    *(undefined1 *)(param_1 + 0x22) = 0x52;
  }
  return param_1;
}



// FUNCTION 14056e920 FUN_14056e920 body=97 status=ok
// SIG undefined FUN_14056e920(void)

void FUN_14056e920(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x20);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 8);
  return;
}



// FUNCTION 14056e990 FUN_14056e990 body=106 status=ok
// SIG undefined FUN_14056e990(void)

void FUN_14056e990(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_14056ed50(param_1 + 0x28);
  plVar4 = *(longlong **)(param_1 + 0x20);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 8);
  return;
}



// FUNCTION 14056ea00 FUN_14056ea00 body=312 status=ok
// SIG undefined FUN_14056ea00(void)

void FUN_14056ea00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x128);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
  TSparseArray<TSetElement<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x70,0);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x20,0);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14056eb40 ~StackState body=124 status=ok
// SIG undefined ~StackState(void)

void FJsonSerializer::StackState::~StackState(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x30);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x18);
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 14056ebc0 FUN_14056ebc0 body=157 status=ok
// SIG undefined FUN_14056ebc0(void)

void FUN_14056ebc0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x28,0);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x20);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 8);
  return;
}



// FUNCTION 14056ec60 FUN_14056ec60 body=96 status=ok
// SIG undefined FUN_14056ec60(void)

void FUN_14056ec60(longlong param_1)

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
  FUN_14056ed50(param_1);
  return;
}



// FUNCTION 14056ecc0 FUN_14056ecc0 body=142 status=ok
// SIG undefined FUN_14056ecc0(void)

void FUN_14056ecc0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[0xb];
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
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if (*param_1 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 14056ed50 FUN_14056ed50 body=156 status=ok
// SIG undefined FUN_14056ed50(void)

void FUN_14056ed50(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[0xb];
  plVar1 = (longlong *)param_1[10];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[10];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
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



// FUNCTION 14056edf0 FUN_14056edf0 body=954 status=ok
// SIG undefined FUN_14056edf0(void)

void FUN_14056edf0(undefined8 *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  int local_98;
  uint uStack_94;
  uint *puStack_90;
  uint local_88;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
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
  
  uStack_94 = 1;
  plVar2 = param_1 + 0x1f;
  puVar1 = (uint *)(param_1 + 0x21);
  uStack_84 = 0;
  iStack_80 = 0;
  *param_1 = &PTR_FUN_143fc4440;
  uVar3 = *(uint *)(param_1 + 0x24);
  local_98 = 0;
  if (uVar3 != 0) {
    puVar11 = (uint *)param_1[0x23];
    if ((uint *)param_1[0x23] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar4 = *puVar11;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar7 = local_98 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar7;
      if (bVar6) goto LAB_14056eecc;
      uVar4 = puVar11[lVar9 + 1];
    }
    uStack_94 = -uVar4 & uVar4;
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
    if ((int)uVar3 < (int)uStack_84) {
LAB_14056eecc:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x24);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  local_88 = -1 << ((byte)uVar4 & 0x1f);
  uVar10 = uVar4 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  puStack_90 = puVar1;
  uStack_84 = uVar4;
  local_68 = puVar1;
  local_50 = plVar2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  local_78 = plVar2;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  if (uVar4 != uVar3) {
    puVar11 = (uint *)param_1[0x23];
    if ((uint *)param_1[0x23] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar8 = puVar11[(int)uVar4 >> 5] & local_88;
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_14056efa6;
      uVar8 = puVar11[(longlong)iVar7 + 1];
      local_88 = 0xffffffff;
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
    uStack_84 = (uVar10 - iVar7) + 0x1f;
    uVar4 = uStack_84;
    if ((int)uVar3 < (int)uStack_84) {
LAB_14056efa6:
      uStack_84 = uVar3;
      uVar4 = uVar3;
    }
  }
  while( true ) {
    if (((uStack_5c == uVar4) && (local_68 == puVar1)) && (local_78 == plVar2)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) break;
    lVar9 = (longlong)(int)uStack_5c * 0x20 + *local_78;
    FString::FString(&local_98,lVar9);
    puVar5 = *(undefined8 **)(lVar9 + 0x10);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    if (CONCAT44(uStack_94,local_98) != 0) {
      FMemory::Free();
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  *(undefined4 *)(param_1 + 0x41) = 0;
  if (param_1[0x40] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x38,0);
  if (param_1[0x3c] != 0) {
    FMemory::Free();
  }
  if (param_1[0x38] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x37) = 0;
  if (param_1[0x36] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x2e,0);
  if (param_1[0x32] != 0) {
    FMemory::Free();
  }
  if (param_1[0x2e] != 0) {
    FMemory::Free();
  }
  if (param_1[0x2b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x29] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (plVar2);
  param_1[0x19] = &PTR__scalar_deleting_destructor__143fc4420;
  if (param_1[0x1c] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  param_1[0x13] = &PTR__scalar_deleting_destructor__143fc4420;
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  param_1[0xd] = &PTR__scalar_deleting_destructor__143fc4420;
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 10);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 7);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 4);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  return;
}



// FUNCTION 14056f1b0 FUN_14056f1b0 body=61 status=ok
// SIG undefined FUN_14056f1b0(void)

void FUN_14056f1b0(longlong *param_1)

{
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14056f1f0 FUN_14056f1f0 body=408 status=ok
// SIG undefined FUN_14056f1f0(void)

void FUN_14056f1f0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR__scalar_deleting_destructor__143fc4538;
  if (param_1[0x36] != 0) {
    if ((DAT_1468535b8 == (undefined8 *)0x0) &&
       (puVar4 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = (undefined8 *)0x0,
       puVar4 != (undefined8 *)0x0)) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 2;
      DAT_1468535b8 = puVar4;
    }
    TBaseMulticastDelegate<void>::Remove(DAT_1468535b8,param_1[0x36]);
    param_1[0x36] = 0;
  }
  if (param_1[0x34] != 0) {
    FMemory::Free();
  }
  if (param_1[0x32] != 0) {
    FMemory::Free();
  }
  if (param_1[0x2c] != 0) {
    FMemory::Free();
  }
  if (param_1[0x2a] != 0) {
    FMemory::Free();
  }
  if (param_1[0x28] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,AHomeCharacter_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x1d,0);
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1d] != 0) {
    FMemory::Free();
  }
  plVar3 = (longlong *)param_1[0x1a];
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
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x16);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x13);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x10);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xd);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 10);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 7);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 4);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  return;
}



// FUNCTION 14056f390 FUN_14056f390 body=104 status=ok
// SIG undefined FUN_14056f390(void)

void FUN_14056f390(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_143fc4810;
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  FUN_14056ed50(param_1 + 4);
  if (param_1[2] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14056f400 FUN_14056f400 body=602 status=ok
// SIG undefined FUN_14056f400(void)

void FUN_14056f400(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_143fc4650;
  FUN_14057aee0();
  TextToSpeech::~TextToSpeech(param_1 + 100);
  if (param_1[0x5d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x5b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x59] != 0) {
    FMemory::Free();
  }
  if (param_1[0x54] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x51) = 0;
  if (param_1[0x50] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x48,0);
  if (param_1[0x4c] != 0) {
    FMemory::Free();
  }
  if (param_1[0x48] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x47) = 0;
  if (param_1[0x46] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x3e,0);
  if (param_1[0x42] != 0) {
    FMemory::Free();
  }
  if (param_1[0x3e] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x3d) = 0;
  if (param_1[0x3c] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x34,0);
  if (param_1[0x38] != 0) {
    FMemory::Free();
  }
  if (param_1[0x34] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x33) = 0;
  if (param_1[0x32] != 0) {
    FMemory::Free();
  }
  FUN_14057cd00(param_1 + 0x2a,0);
  if (param_1[0x2e] != 0) {
    FMemory::Free();
  }
  if (param_1[0x2a] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (param_1[0x28] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x20,0);
  if (param_1[0x24] != 0) {
    FMemory::Free();
  }
  if (param_1[0x20] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1e] != 0) {
    FMemory::Free();
  }
  FUN_14056ed50(param_1 + 0x12);
  plVar3 = (longlong *)param_1[0x11];
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
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0xd);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 10);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 7);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 4);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  return;
}



// FUNCTION 14056f660 FUN_14056f660 body=681 status=ok
// SIG undefined FUN_14056f660(void)

void FUN_14056f660(undefined8 *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  int local_88;
  uint uStack_84;
  uint *puStack_80;
  uint local_78;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  int iStack_60;
  uint uStack_5c;
  uint *local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  uStack_84 = 1;
  plVar2 = param_1 + 0x16;
  local_88 = 0;
  puVar1 = (uint *)(param_1 + 0x18);
  *param_1 = &PTR_FUN_143fc48b8;
  uVar3 = *(uint *)(param_1 + 0x1b);
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar11 = (uint *)param_1[0x1a];
    if ((uint *)param_1[0x1a] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar4 = *puVar11;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar8 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar9 = local_88 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar9;
      if (bVar6) goto LAB_14056f73a;
      uVar4 = puVar11[lVar8 + 1];
    }
    uStack_84 = -uVar4 & uVar4;
    iVar9 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_74 = (iStack_70 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_14056f73a:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x1b);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  local_78 = -1 << ((byte)uVar4 & 0x1f);
  uVar10 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  puStack_80 = puVar1;
  uStack_74 = uVar4;
  local_58 = puVar1;
  local_40 = plVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  local_68 = plVar2;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  if (uVar4 != uVar3) {
    puVar11 = (uint *)param_1[0x1a];
    if ((uint *)param_1[0x1a] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar7 = puVar11[(int)uVar4 >> 5] & local_78;
    iVar9 = (int)uVar4 >> 5;
    while (uVar7 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_14056f815;
      uVar7 = puVar11[(longlong)iVar9 + 1];
      local_78 = 0xffffffff;
      iVar9 = iVar9 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar9 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_74 = (uVar10 - iVar9) + 0x1f;
    uVar4 = uStack_74;
    if ((int)uVar3 < (int)uStack_74) {
LAB_14056f815:
      uStack_74 = uVar3;
      uVar4 = uVar3;
    }
  }
  while( true ) {
    if (((uStack_4c == uVar4) && (local_58 == puVar1)) && (local_68 == plVar2)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) break;
    lVar8 = (longlong)(int)uStack_4c * 0x20 + *local_68;
    FString::FString(&local_88,lVar8);
    puVar5 = *(undefined8 **)(lVar8 + 0x10);
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    if (CONCAT44(uStack_84,local_88) != 0) {
      FMemory::Free();
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,AHomeCharacter_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(plVar2,0);
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  if (*plVar2 != 0) {
    FMemory::Free();
  }
  FUN_14056ed50(param_1 + 10);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 7);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 4);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  return;
}



// FUNCTION 14056f910 ~TextToSpeech body=254 status=ok
// SIG undefined ~TextToSpeech(void)

void TextToSpeech::~TextToSpeech(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__143fc45f8;
  FUN_14057af50();
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_1[0x23] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x1b,0);
  if (param_1[0x1f] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1b] != 0) {
    FMemory::Free();
  }
  param_1[0x17] = &PTR__scalar_deleting_destructor__143fc44d0;
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,AHomeCharacter_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xb,0);
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 7);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 4);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  return;
}



// FUNCTION 14056fa10 operator= body=465 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
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
    TSparseArray<TSetElement<TTuple<FString,AHomeCharacter_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(param_1,iVar9);
    cVar3 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
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
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14056fb4d;
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
LAB_14056fb4d:
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
        Emplace<TTuple<FString,FTextRange>_const_&>
                  (param_1,local_res8,(longlong)iStack_3c * 0x20 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 14056fbf0 FUN_14056fbf0 body=383 status=ok
// SIG undefined FUN_14056fbf0(void)

longlong * FUN_14056fbf0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  undefined1 local_res8 [8];
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  if (param_1 != param_2) {
    TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
    ::Empty(param_1,(int)param_2[1] - *(int *)((longlong)param_2 + 0x34));
    iVar1 = (int)param_2[5];
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    uStack_40 = 0;
    local_48._4_4_ = 0;
    if (iVar1 != 0) {
      puVar6 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar6 = puStack_20;
      }
      uVar2 = *puVar6;
      local_58 = 0;
      uStack_40 = 0;
      while (uVar2 == 0) {
        lVar4 = (longlong)local_58;
        uStack_40 = uStack_40 + 0x20;
        iVar5 = local_58 + 1;
        bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar5;
        if (bVar3) goto LAB_14056fccd;
        uVar2 = puVar6[lVar4 + 1];
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
LAB_14056fccd:
        local_48._4_4_ = iVar1;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    iStack_10 = uStack_40;
    uStack_c = iStack_3c;
    iStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar5 = local_48._4_4_;
    iStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar3 = local_48._4_4_ < iVar1;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar5;
    if (bVar3) {
      do {
        FUN_14056a7d0(param_1,local_res8,(longlong)iStack_3c * 0x68 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 14056fd70 operator== body=175 status=ok
// SIG undefined operator==(void)

uint AccountId::operator==(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  puVar4 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 5) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)param_2[4];
  }
  if (*(int *)(param_1 + 5) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)param_1[4];
  }
  uVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
  if (uVar1 == 0) {
    if (*(int *)(param_2 + 3) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)param_2[2];
    }
    if (*(int *)(param_1 + 3) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)param_1[2];
    }
    uVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
    if (uVar1 == 0) {
      if (*(int *)(param_2 + 1) == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = (undefined2 *)*param_2;
      }
      if (*(int *)(param_1 + 1) != 0) {
        puVar4 = (undefined2 *)*param_1;
      }
      uVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar3);
      if (uVar1 == 0) {
        return 1;
      }
    }
  }
  return uVar1 & 0xffffff00;
}



// FUNCTION 14056fe20 operator== body=188 status=ok
// SIG undefined operator==(void)

undefined8 ChannelId::operator==(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  if (*(char *)(param_1 + 6) == *(char *)(param_2 + 6)) {
    puVar4 = &DAT_143f3eda8;
    if (*(int *)(param_2 + 3) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)param_2[2];
    }
    if (*(int *)(param_1 + 3) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)param_1[2];
    }
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
    if (iVar1 == 0) {
      if (*(int *)(param_2 + 5) == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = (undefined2 *)param_2[4];
      }
      if (*(int *)(param_1 + 5) == 0) {
        puVar2 = &DAT_143f3eda8;
      }
      else {
        puVar2 = (undefined2 *)param_1[4];
      }
      iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
      if (iVar1 == 0) {
        if (*(int *)(param_2 + 1) == 0) {
          puVar3 = &DAT_143f3eda8;
        }
        else {
          puVar3 = (undefined2 *)*param_2;
        }
        if (*(int *)(param_1 + 1) != 0) {
          puVar4 = (undefined2 *)*param_1;
        }
        iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar3);
        if (iVar1 == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14056fee0 FUN_14056fee0 body=456 status=ok
// SIG undefined FUN_14056fee0(void)

void FUN_14056fee0(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  char cVar3;
  int *piVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98 [2];
  char local_88;
  undefined1 local_78 [96];
  
  plVar7 = (longlong *)0x0;
  if (*(int *)(param_2 + 0x1c) != 0) goto LAB_140570063;
  pcVar2 = *(char **)(param_2 + 0x40);
  local_a8 = 0;
  local_a0 = 0;
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (pcVar2[lVar6] != '\0');
    uVar5 = (int)lVar6 + 1;
    local_a0 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
    }
    FGenericPlatformString::Convert<char,wchar_t>(local_a8,uVar5,pcVar2,uVar5,0x3f);
  }
  local_88 = '\0';
  FUN_14057c0d0(local_78,&local_a8,local_98);
  if ((local_88 != '\0') && (local_98[0] != 0)) {
    FMemory::Free();
  }
  cVar3 = AccountId::operator==(local_78,param_1 + 5);
  if (cVar3 == '\0') {
LAB_14056fffc:
    cVar3 = AccountId::operator==(local_78,param_1 + 5);
    if (cVar3 != '\0') {
      piVar4 = (int *)TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
                      ::FindId(*param_1 + 0x240,local_res8,param_1 + 5);
      if ((*piVar4 != -1) && ((char)param_1[0x11] == '\0')) {
        TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
        ::Remove(*param_1 + 0x240,param_1 + 5);
      }
    }
  }
  else {
    piVar4 = (int *)TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
                    ::FindId(*param_1 + 0x240,local_res8,param_1 + 5);
    if ((*piVar4 != -1) || ((char)param_1[0x11] == '\0')) goto LAB_14056fffc;
    FUN_14056a7d0(*param_1 + 0x240,local_res8,param_1 + 5,0);
  }
  FUN_14056ed50(local_78);
  if (local_a8 != 0) {
    FMemory::Free();
  }
LAB_140570063:
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  if (((int)param_1[2] != 0) && ((longlong *)param_1[1] != (longlong *)0x0)) {
    cVar3 = (**(code **)(*(longlong *)param_1[1] + 0x18))();
    if (cVar3 != '\0') {
      if ((int)param_1[2] != 0) {
        plVar7 = (longlong *)param_1[1];
      }
      (**(code **)(*plVar7 + 0x40))(plVar7,uVar1);
    }
  }
  return;
}



// FUNCTION 1405700b0 FUN_1405700b0 body=492 status=ok
// SIG undefined FUN_1405700b0(void)

void FUN_1405700b0(longlong *param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong **pplVar6;
  longlong **pplVar7;
  int iVar8;
  undefined4 uVar9;
  longlong *local_38;
  int local_30;
  undefined4 local_2c;
  
  iVar8 = 0;
  if (*(int *)(param_2 + 0x1c) == 0) {
    local_38 = (longlong *)0x0;
    uVar9 = 0;
    local_2c = 0;
    pcVar1 = *(char **)(*(longlong *)(param_2 + 0x30) + 0xa8);
    plVar3 = (longlong *)0x0;
    if ((pcVar1 != (char *)0x0) && (plVar3 = (longlong *)0x0, *pcVar1 != '\0')) {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (pcVar1[lVar5] != '\0');
      iVar4 = (int)lVar5 + 1;
      local_30 = iVar4;
      if (0 < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      }
      uVar9 = local_2c;
      iVar8 = local_30;
      plVar3 = local_38;
      FGenericPlatformString::Convert<char,wchar_t>(local_38,iVar4,pcVar1,iVar4,0x3f);
    }
    lVar5 = *param_1;
    pplVar6 = (longlong **)(lVar5 + 0x480);
    if (pplVar6 == &local_38) {
      if (plVar3 != (longlong *)0x0) {
        FMemory::Free(plVar3);
      }
    }
    else {
      if (*pplVar6 != (longlong *)0x0) {
        FMemory::Free();
      }
      *pplVar6 = plVar3;
      *(int *)(lVar5 + 0x488) = iVar8;
      *(undefined4 *)(lVar5 + 0x48c) = uVar9;
    }
  }
  pplVar6 = *(longlong ***)(*param_1 + 0x490);
  pplVar7 = pplVar6 + (longlong)*(int *)(*param_1 + 0x498) * 2;
  do {
    if (pplVar6 == pplVar7) {
      return;
    }
    local_30 = 0;
    local_38 = (longlong *)0x0;
    if (((pplVar6 != &local_38) && (*(int *)(pplVar6 + 1) != 0)) &&
       (plVar3 = *pplVar6, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_38);
    }
    lVar5 = *param_1;
    uVar9 = *(undefined4 *)(param_2 + 0x20);
    if (local_30 == 0) {
LAB_14057026b:
      if (local_38 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    else {
      if ((local_38 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*local_38 + 0x18))(), cVar2 != '\0')) {
        plVar3 = (longlong *)0x0;
        if (local_30 != 0) {
          plVar3 = local_38;
        }
        (**(code **)(*plVar3 + 0x40))(plVar3,uVar9,lVar5 + 0x480);
      }
      if (local_30 == 0) goto LAB_14057026b;
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x28))(local_38,0);
        if (local_38 != (longlong *)0x0) {
          local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
        }
        local_30 = 0;
        goto LAB_14057026b;
      }
    }
    pplVar6 = pplVar6 + 2;
  } while( true );
}



// FUNCTION 1405702a0 FUN_1405702a0 body=1727 status=ok
// SIG undefined FUN_1405702a0(void)

void FUN_1405702a0(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  void *pvVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong **pplVar14;
  undefined2 *puVar15;
  longlong *plVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong **pplVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong *plVar23;
  int local_res8 [2];
  longlong local_res10;
  longlong *local_e8;
  int local_e0;
  int local_dc;
  longlong *local_d8;
  int local_d0;
  int local_cc;
  longlong *local_c8;
  int local_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  int local_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  int local_a0;
  undefined4 local_9c;
  longlong *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 local_70;
  undefined **local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  
  plVar22 = (longlong *)0x0;
  iVar12 = 0;
  local_res8[0] = 0;
  plVar23 = (longlong *)0x0;
  iVar17 = 0;
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  local_d8 = (longlong *)0x0;
  pcVar2 = *(char **)(*(longlong *)(param_2 + 0x30) + 0x30);
  local_cc = 0;
  plVar16 = plVar23;
  iVar11 = iVar17;
  local_res10 = param_2;
  if (*(int *)(param_2 + 0x18) == 0x5a) {
    plVar16 = plVar22;
    iVar11 = iVar12;
    if ((pcVar2 == (char *)0x0) || (plVar16 = plVar23, iVar11 = iVar17, *pcVar2 == '\0'))
    goto LAB_14057039e;
    lVar18 = -1;
    do {
      lVar18 = lVar18 + 1;
    } while (pcVar2[lVar18] != '\0');
  }
  else {
    if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) goto LAB_14057039e;
    lVar18 = -1;
    do {
      lVar18 = lVar18 + 1;
    } while (pcVar2[lVar18] != '\0');
  }
  iVar17 = (int)lVar18 + 1;
  local_d0 = iVar17;
  if (0 < iVar17) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  }
  iVar12 = local_cc;
  iVar11 = local_d0;
  plVar16 = local_d8;
  FGenericPlatformString::Convert<char,wchar_t>(local_d8,iVar17,pcVar2,iVar17,0x3f);
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_14057039e:
  local_e8 = plVar16;
  local_e0 = iVar11;
  local_dc = iVar12;
  if (*(int *)(local_res10 + 0x1c) == 0) {
    puVar15 = &DAT_143f3eda8;
    if (DAT_1461fcaf0 != 0) {
      puVar15 = DAT_1461fcae8;
    }
    plVar23 = (longlong *)&DAT_143f3eda8;
    if (iVar11 != 0) {
      plVar23 = plVar16;
    }
    iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(plVar23,puVar15);
    if (iVar11 != 0) {
      lVar18 = *param_1;
      if (*(int *)(lVar18 + 0x100) != *(int *)(lVar18 + 300)) {
        plVar16 = (longlong *)&DAT_143f3eda8;
        if (local_e0 != 0) {
          plVar16 = local_e8;
        }
        iVar11 = FUN_140438070(plVar16);
        lVar21 = *(longlong *)(lVar18 + 0x138);
        if (*(longlong *)(lVar18 + 0x138) == 0) {
          lVar21 = lVar18 + 0x130;
        }
        iVar11 = *(int *)(lVar21 + ((longlong)*(int *)(lVar18 + 0x140) - 1U & (longlong)iVar11) * 4)
        ;
        if (iVar11 != -1) {
          lVar21 = *(longlong *)(lVar18 + 0xf8);
          do {
            lVar19 = (longlong)iVar11 * 0x20;
            plVar16 = (longlong *)&DAT_143f3eda8;
            if (local_e0 != 0) {
              plVar16 = local_e8;
            }
            if (*(int *)(lVar19 + 8 + lVar21) == 0) {
              puVar15 = &DAT_143f3eda8;
            }
            else {
              puVar15 = *(undefined2 **)(lVar19 + lVar21);
            }
            iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar15,plVar16);
            if (iVar11 == 0) break;
            lVar21 = *(longlong *)(lVar18 + 0xf8);
            iVar11 = *(int *)(lVar21 + 0x18 + lVar19);
          } while (iVar11 != -1);
        }
      }
    }
    plVar16 = local_e8;
    lVar18 = *param_1;
    pplVar20 = (longlong **)(lVar18 + 0x148);
    if (pplVar20 != &local_e8) {
      lVar21 = (longlong)local_e0;
      *(int *)(lVar18 + 0x150) = local_e0;
      if ((local_e0 == 0) && (*(int *)(lVar18 + 0x154) == 0)) {
        *(undefined4 *)(lVar18 + 0x154) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(pplVar20,local_e0);
        _guard_xfg_dispatch_icall_nop(*pplVar20,plVar16,lVar21 * 2);
      }
    }
    puVar15 = &DAT_143f3eda8;
    if (DAT_1461fcb00 != 0) {
      puVar15 = DAT_1461fcaf8;
    }
    plVar16 = (longlong *)&DAT_143f3eda8;
    if (local_e0 != 0) {
      plVar16 = local_e8;
    }
    iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(plVar16,puVar15);
    plVar16 = plVar22;
    if (iVar11 == 0) {
      puVar13 = (undefined8 *)(**(code **)(*(longlong *)(*param_1 + 0x98) + 0x10))();
      local_b8 = (longlong *)0x0;
      iVar11 = *(int *)(puVar13 + 1);
      pvVar3 = (void *)*puVar13;
      local_b0 = iVar11;
      if (iVar11 == 0) {
        uStack_ac = 0;
        pplVar20 = &local_b8;
        bVar9 = true;
        bVar8 = false;
        bVar7 = false;
        bVar6 = false;
        bVar5 = false;
        bVar4 = false;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,iVar11,0);
        plVar16 = local_b8;
        _guard_xfg_dispatch_icall_nop(local_b8,pvVar3,(longlong)iVar11 * 2);
        pplVar20 = &local_b8;
        bVar9 = true;
        bVar8 = false;
        bVar7 = false;
        bVar6 = false;
        bVar5 = false;
        bVar4 = false;
      }
    }
    else {
      puVar15 = &DAT_143f3eda8;
      if (DAT_1461fcb10 != 0) {
        puVar15 = DAT_1461fcb08;
      }
      plVar23 = (longlong *)&DAT_143f3eda8;
      if (local_e0 != 0) {
        plVar23 = local_e8;
      }
      iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(plVar23,puVar15);
      if (iVar11 == 0) {
        puVar13 = (undefined8 *)(**(code **)(*(longlong *)(*param_1 + 200) + 0x10))();
        local_c8 = (longlong *)0x0;
        iVar11 = *(int *)(puVar13 + 1);
        pvVar3 = (void *)*puVar13;
        local_c0 = iVar11;
        if (iVar11 == 0) {
          uStack_bc = 0;
          pplVar14 = &local_c8;
          bVar8 = true;
          bVar7 = false;
          bVar6 = false;
          bVar5 = false;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,iVar11,0);
          plVar16 = local_c8;
          _guard_xfg_dispatch_icall_nop(local_c8,pvVar3,(longlong)iVar11 * 2);
          pplVar14 = &local_c8;
          bVar8 = true;
          bVar7 = false;
          bVar6 = false;
          bVar5 = false;
        }
      }
      else {
        puVar15 = &DAT_143f3eda8;
        if (DAT_1461fcaf0 != 0) {
          puVar15 = DAT_1461fcae8;
        }
        plVar23 = (longlong *)&DAT_143f3eda8;
        if (local_e0 != 0) {
          plVar23 = local_e8;
        }
        iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(plVar23,puVar15);
        plVar23 = local_e8;
        if (iVar11 == 0) {
          local_70 = 0;
          pplVar20 = &local_78;
          bVar7 = true;
          bVar6 = false;
        }
        else {
          lVar18 = (longlong)local_e0;
          local_d8 = (longlong *)0x0;
          local_d0 = local_e0;
          if (local_e0 == 0) {
            local_cc = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d8,local_e0,0);
            plVar16 = local_d8;
            _guard_xfg_dispatch_icall_nop(local_d8,plVar23,lVar18 * 2);
          }
          pplVar20 = &local_d8;
          bVar7 = false;
          bVar6 = true;
        }
        bVar8 = false;
        bVar5 = true;
        *pplVar20 = (longlong *)0x0;
        local_80 = *(undefined4 *)(pplVar20 + 1);
        pplVar20[1] = (longlong *)0x0;
        pplVar14 = &local_88;
        local_7c = *(undefined4 *)((longlong)pplVar20 + 0xc);
      }
      *pplVar14 = (longlong *)0x0;
      bVar9 = false;
      bVar4 = true;
      local_90 = *(undefined4 *)(pplVar14 + 1);
      pplVar14[1] = (longlong *)0x0;
      pplVar20 = &local_98;
      local_8c = *(undefined4 *)((longlong)pplVar14 + 0xc);
    }
    *pplVar20 = (longlong *)0x0;
    iVar11 = *(int *)(pplVar20 + 1);
    local_9c = *(undefined4 *)((longlong)pplVar20 + 0xc);
    local_a0 = iVar11;
    pplVar20[1] = (longlong *)0x0;
    local_a8 = plVar16;
    if ((bVar4) && (local_98 != (longlong *)0x0)) {
      FMemory::Free();
    }
    if ((bVar5) && (local_88 != (longlong *)0x0)) {
      FMemory::Free();
    }
    if ((bVar6) && (local_d8 != (longlong *)0x0)) {
      FMemory::Free();
    }
    if ((bVar7) && (local_78 != (longlong *)0x0)) {
      FMemory::Free();
    }
    if ((bVar8) && (local_c8 != (longlong *)0x0)) {
      FMemory::Free();
    }
    if ((bVar9) && (local_b8 != (longlong *)0x0)) {
      FMemory::Free();
    }
    if (1 < iVar11) {
      lVar18 = *param_1;
      if (*(int *)(lVar18 + 0x100) != *(int *)(lVar18 + 300)) {
        plVar23 = (longlong *)&DAT_143f3eda8;
        if (iVar11 != 0) {
          plVar23 = plVar16;
        }
        iVar12 = FUN_140438070(plVar23);
        lVar21 = *(longlong *)(lVar18 + 0x138);
        if (*(longlong *)(lVar18 + 0x138) == 0) {
          lVar21 = lVar18 + 0x130;
        }
        iVar12 = *(int *)(lVar21 + ((longlong)*(int *)(lVar18 + 0x140) - 1U & (longlong)iVar12) * 4)
        ;
        if (iVar12 != -1) {
          lVar21 = *(longlong *)(lVar18 + 0xf8);
          do {
            lVar19 = (longlong)iVar12 * 0x20;
            plVar23 = (longlong *)&DAT_143f3eda8;
            if (iVar11 != 0) {
              plVar23 = plVar16;
            }
            if (*(int *)(lVar19 + 8 + lVar21) == 0) {
              puVar15 = &DAT_143f3eda8;
            }
            else {
              puVar15 = *(undefined2 **)(lVar19 + lVar21);
            }
            iVar12 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar15,plVar23);
            if (iVar12 == 0) break;
            lVar21 = *(longlong *)(lVar18 + 0xf8);
            iVar12 = *(int *)(lVar21 + 0x18 + lVar19);
          } while (iVar12 != -1);
        }
      }
    }
    cVar10 = FUN_140585b70(*param_1 + 0x158,&local_a8);
    if (cVar10 != '\0') {
      lVar18 = *param_1;
      if (*(int *)(lVar18 + 0x160) < 2) {
        local_60 = 0;
        local_68 = &PTR__scalar_deleting_destructor__143fc4420;
        local_58 = 0;
        local_50 = 0;
        local_48 = 0;
        TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(lVar18 + 0x38,&local_68);
        local_68 = &PTR__scalar_deleting_destructor__143fc4420;
        if (local_50 != 0) {
          FMemory::Free();
        }
        if (local_60 != 0) {
          FMemory::Free();
        }
      }
      else {
        TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
        ::FindId((longlong *)(lVar18 + 0xf8),local_res8,lVar18 + 0x158);
        plVar16 = plVar22;
        if (local_res8[0] != -1) {
          plVar16 = (longlong *)((longlong)local_res8[0] * 0x20 + *(longlong *)(lVar18 + 0xf8));
        }
        plVar23 = plVar16 + 2;
        if (plVar16 == (longlong *)0x0) {
          plVar23 = plVar22;
        }
        TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(*param_1 + 0x38,*plVar23);
      }
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  uVar1 = *(undefined4 *)(local_res10 + 0x20);
  if ((((int)param_1[2] != 0) && ((longlong *)param_1[1] != (longlong *)0x0)) &&
     (cVar10 = (**(code **)(*(longlong *)param_1[1] + 0x18))(), cVar10 != '\0')) {
    if ((int)param_1[2] != 0) {
      plVar22 = (longlong *)param_1[1];
    }
    (**(code **)(*plVar22 + 0x40))(plVar22,uVar1,&local_e8);
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140570960 FUN_140570960 body=841 status=ok
// SIG undefined FUN_140570960(void)

void FUN_140570960(longlong *param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  longlong *local_78;
  int local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong *local_58;
  longlong local_48;
  longlong *local_40;
  int local_38;
  longlong local_30;
  longlong *local_28;
  
  pplVar3 = (longlong **)(param_1 + 0x22);
  if (param_2 != 0) {
    TBaseDelegate<void,enum_EPartyReservationResult::Type>::ExecuteIfBound(pplVar3);
    return;
  }
  puVar9 = (undefined8 *)0x0;
  local_48 = *param_1;
  local_78 = (longlong *)0x0;
  uVar10 = 0;
  local_70 = 0;
  local_40 = (longlong *)0x0;
  local_38 = 0;
  if (((pplVar3 != &local_40) && ((int)param_1[0x23] != 0)) &&
     (plVar6 = *pplVar3, plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x30))(plVar6,&local_40);
  }
  local_30 = param_1[0x24];
  local_28 = (longlong *)param_1[0x25];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  plVar6 = (longlong *)FMemory::Realloc(0,0x40);
  local_58 = plVar6;
  if (plVar6 == (longlong *)0x0) {
    if (((local_70 != 0) && (local_78 != (longlong *)0x0)) &&
       ((**(code **)(*local_78 + 0x28))(local_78,0), local_78 != (longlong *)0x0)) {
      local_78 = (longlong *)FMemory::Realloc(local_78,0,0);
    }
  }
  else {
    *plVar6 = (longlong)&PTR_GetPoolName_143fc4ff0;
    plVar6[1] = local_48;
    plVar6[2] = 0;
    *(undefined4 *)(plVar6 + 3) = 0;
    if (((&local_40 != (longlong **)(plVar6 + 2)) && (local_38 != 0)) &&
       (local_40 != (longlong *)0x0)) {
      (**(code **)(*local_40 + 0x30))();
    }
    plVar6[4] = local_30;
    plVar6[5] = (longlong)local_28;
    local_28 = (longlong *)0x0;
    local_30 = 0;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[7] = lVar7;
    *plVar6 = (longlong)&PTR_GetPoolName_143fc5038;
    FUN_14057b910(plVar6,&local_78);
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    local_58 = (longlong *)FMemory::Realloc(plVar6,0,0);
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
  }
  plVar6 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_40);
  local_68 = 0;
  local_60 = 0;
  *(undefined1 *)(*param_1 + 0x318) = 1;
  if ((local_70 != 0) && (local_78 != (longlong *)0x0)) {
    (**(code **)(*local_78 + 0x30))(local_78,&local_68);
  }
  lVar7 = *param_1;
  cVar4 = *(char *)(lVar7 + 0x2c1);
  if (cVar4 != '\0') {
    if (cVar4 == '\x01') goto LAB_140570b84;
    if (cVar4 == '\x02') {
      uVar10 = 0x32;
      goto LAB_140570b84;
    }
    if (cVar4 == '\x03') {
      uVar10 = 10;
      goto LAB_140570b84;
    }
    if (cVar4 == '\x04') {
      uVar10 = 5;
      goto LAB_140570b84;
    }
  }
  uVar10 = 100;
LAB_140570b84:
  if (DAT_1468535b8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)operator_new(0x18);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 2;
      puVar9 = puVar8;
    }
    lVar7 = *param_1;
    DAT_1468535b8 = puVar9;
  }
  iVar5 = FUN_140584730(DAT_1468535b8,param_3,lVar7 + 0x90,param_1 + 1,uVar10,
                        *(undefined1 *)(lVar7 + 0x318),(char)param_1[3],param_1 + 4,param_1 + 0xe,
                        param_1 + 0x18,&local_68);
  if (iVar5 != 0) {
    FUN_1405889a0(*param_1,0);
    TBaseDelegate<void,enum_EPartyReservationResult::Type>::ExecuteIfBound(pplVar3,0);
  }
  if (local_70 != 0) {
    if (local_78 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_78 + 0x28))(local_78,0);
    if (local_78 != (longlong *)0x0) {
      local_78 = (longlong *)FMemory::Realloc(local_78,0,0);
    }
    local_70 = 0;
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}



// FUNCTION 140570cb0 FUN_140570cb0 body=1163 status=ok
// SIG undefined FUN_140570cb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140570cb0(longlong *param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  undefined1 local_1c0;
  undefined1 local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  undefined8 *local_198;
  longlong *local_188;
  int local_180;
  longlong local_178;
  longlong *local_170;
  int local_168;
  longlong local_160;
  longlong *local_158;
  undefined8 local_150;
  undefined4 local_148;
  longlong *local_140;
  longlong local_128 [4];
  longlong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  longlong local_d8 [4];
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  longlong local_88 [4];
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  if (param_2 != 0) {
    TBaseDelegate<void,enum_EPartyReservationResult::Type>::ExecuteIfBound();
    return;
  }
  local_178 = *param_1;
  puVar8 = (undefined8 *)0x0;
  local_188 = (longlong *)0x0;
  uVar9 = 0;
  local_180 = 0;
  local_170 = (longlong *)0x0;
  local_168 = 0;
  if ((((longlong **)(param_1 + 3) != &local_170) && ((int)param_1[4] != 0)) &&
     (plVar5 = (longlong *)param_1[3], plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x30))(plVar5,&local_170);
  }
  local_160 = param_1[5];
  local_158 = (longlong *)param_1[6];
  if (local_158 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_158 + 1) = (int)local_158[1] + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)FMemory::Realloc(0,0x40);
  local_140 = plVar5;
  if (plVar5 == (longlong *)0x0) {
    if (((local_180 != 0) && (local_188 != (longlong *)0x0)) &&
       ((**(code **)(*local_188 + 0x28))(local_188,0), local_188 != (longlong *)0x0)) {
      local_188 = (longlong *)FMemory::Realloc(local_188,0,0);
    }
  }
  else {
    *plVar5 = (longlong)&PTR_GetPoolName_143fc4ff0;
    plVar5[1] = local_178;
    plVar5[2] = 0;
    *(undefined4 *)(plVar5 + 3) = 0;
    if (((&local_170 != (longlong **)(plVar5 + 2)) && (local_168 != 0)) &&
       (local_170 != (longlong *)0x0)) {
      (**(code **)(*local_170 + 0x30))();
    }
    plVar5[4] = local_160;
    plVar5[5] = (longlong)local_158;
    local_158 = (longlong *)0x0;
    local_160 = 0;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[7] = lVar6;
    *plVar5 = (longlong)&PTR_GetPoolName_143fc5038;
    FUN_14057b910(plVar5,&local_188);
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    local_140 = (longlong *)FMemory::Realloc(plVar5,0,0);
    if (local_140 != (longlong *)0x0) {
      FMemory::Free(local_140);
    }
  }
  plVar5 = local_158;
  if (local_158 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_158 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_158)(local_158);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_170);
  local_150 = 0;
  local_148 = 0;
  *(undefined1 *)(*param_1 + 0x318) = 0;
  if ((local_180 != 0) && (local_188 != (longlong *)0x0)) {
    (**(code **)(*local_188 + 0x30))(local_188,&local_150);
  }
  lVar6 = *param_1;
  local_88[0] = 0;
  local_88[1] = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_128[0] = 0;
  local_128[1] = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  cVar3 = *(char *)(lVar6 + 0x2c1);
  if (cVar3 != '\0') {
    if (cVar3 == '\x01') goto LAB_140570f66;
    if (cVar3 == '\x02') {
      uVar9 = 0x32;
      goto LAB_140570f66;
    }
    if (cVar3 == '\x03') {
      uVar9 = 10;
      goto LAB_140570f66;
    }
    if (cVar3 == '\x04') {
      uVar9 = 5;
      goto LAB_140570f66;
    }
  }
  uVar9 = 100;
LAB_140570f66:
  if (DAT_1468535b8 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x18);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 2;
      puVar8 = puVar7;
    }
    lVar6 = *param_1;
    DAT_1468535b8 = puVar8;
  }
  local_198 = &local_150;
  local_1a0 = local_88;
  local_1a8 = local_d8;
  local_1b0 = local_128;
  local_1c0 = *(undefined1 *)(lVar6 + 0x318);
  local_1b8 = 0;
  local_1c8 = uVar9;
  iVar4 = FUN_140584730(DAT_1468535b8,param_3,lVar6 + 0x90,param_1 + 1);
  local_e0 = 0;
  if (local_e8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_128,0);
  if (local_108 != 0) {
    FMemory::Free();
  }
  if (local_128[0] != 0) {
    FMemory::Free();
  }
  local_90 = 0;
  if (local_98 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_d8,0);
  if (local_b8 != 0) {
    FMemory::Free();
  }
  if (local_d8[0] != 0) {
    FMemory::Free();
  }
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_88,0);
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  if (iVar4 != 0) {
    FUN_1405889a0(*param_1,0);
    TBaseDelegate<void,enum_EPartyReservationResult::Type>::ExecuteIfBound(param_1 + 3,0);
  }
  if (local_180 != 0) {
    if (local_188 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_188 + 0x28))(local_188,0);
    if (local_188 != (longlong *)0x0) {
      local_188 = (longlong *)FMemory::Realloc(local_188,0,0);
    }
    local_180 = 0;
  }
  if (local_188 != (longlong *)0x0) {
    FMemory::Free(local_188);
  }
  return;
}



// FUNCTION 140571140 FUN_140571140 body=1764 status=ok
// SIG undefined FUN_140571140(void)

void FUN_140571140(longlong *param_1,longlong param_2)

{
  char *pcVar1;
  void *pvVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong **pplVar15;
  longlong **pplVar16;
  longlong *plVar17;
  undefined2 *puVar18;
  longlong *plVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  longlong *plVar23;
  int local_res10 [2];
  longlong *local_res18 [2];
  longlong *local_e8;
  int local_e0;
  int local_dc;
  longlong *local_d8;
  int local_d0;
  int local_cc;
  undefined **local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong *local_98;
  int local_90;
  undefined4 uStack_8c;
  longlong *local_88;
  int local_80;
  undefined4 uStack_7c;
  longlong *local_78;
  longlong **local_70;
  longlong *local_68;
  int local_60;
  undefined4 local_5c;
  longlong *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  
  iVar11 = 0;
  local_res10[0] = 0;
  plVar23 = (longlong *)0x0;
  iVar20 = 0;
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  local_d8 = (longlong *)0x0;
  pcVar1 = *(char **)(*(longlong *)(param_2 + 0x30) + 0x30);
  local_cc = 0;
  plVar19 = plVar23;
  local_dc = iVar20;
  if (*(int *)(param_2 + 0x18) == 0x5a) {
    plVar19 = (longlong *)0x0;
    local_dc = iVar11;
    if ((pcVar1 != (char *)0x0) && (plVar19 = plVar23, local_dc = iVar20, *pcVar1 != '\0')) {
      lVar21 = -1;
      do {
        lVar21 = lVar21 + 1;
      } while (pcVar1[lVar21] != '\0');
LAB_1405711d8:
      iVar20 = (int)lVar21 + 1;
      local_d0 = iVar20;
      if (0 < iVar20) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
      }
      iVar9 = local_cc;
      iVar11 = local_d0;
      plVar19 = local_d8;
      FGenericPlatformString::Convert<char,wchar_t>(local_d8,iVar20,pcVar1,iVar20,0x3f);
      local_dc = iVar9;
      if (local_e8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  else if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    lVar21 = -1;
    do {
      lVar21 = lVar21 + 1;
    } while (pcVar1[lVar21] != '\0');
    goto LAB_1405711d8;
  }
  local_e8 = plVar19;
  local_e0 = iVar11;
  if (*(int *)(param_2 + 0x1c) != 0) goto LAB_1405717dd;
  puVar18 = &DAT_143f3eda8;
  if (DAT_1461fcaf0 != 0) {
    puVar18 = DAT_1461fcae8;
  }
  plVar23 = (longlong *)&DAT_143f3eda8;
  if (iVar11 != 0) {
    plVar23 = plVar19;
  }
  iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(plVar23,puVar18);
  if (iVar11 != 0) {
    lVar21 = *param_1;
    if (*(int *)(lVar21 + 0x100) != *(int *)(lVar21 + 300)) {
      plVar19 = (longlong *)&DAT_143f3eda8;
      if (local_e0 != 0) {
        plVar19 = local_e8;
      }
      iVar11 = FUN_140438070(plVar19);
      lVar13 = *(longlong *)(lVar21 + 0x138);
      if (*(longlong *)(lVar21 + 0x138) == 0) {
        lVar13 = lVar21 + 0x130;
      }
      iVar11 = *(int *)(lVar13 + ((longlong)*(int *)(lVar21 + 0x140) - 1U & (longlong)iVar11) * 4);
      if (iVar11 != -1) {
        lVar13 = *(longlong *)(lVar21 + 0xf8);
        do {
          lVar22 = (longlong)iVar11 * 0x20;
          plVar19 = (longlong *)&DAT_143f3eda8;
          if (local_e0 != 0) {
            plVar19 = local_e8;
          }
          if (*(int *)(lVar22 + 8 + lVar13) == 0) {
            puVar18 = &DAT_143f3eda8;
          }
          else {
            puVar18 = *(undefined2 **)(lVar22 + lVar13);
          }
          iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar18,plVar19);
          if (iVar11 == 0) break;
          lVar13 = *(longlong *)(lVar21 + 0xf8);
          iVar11 = *(int *)(lVar13 + 0x18 + lVar22);
        } while (iVar11 != -1);
      }
    }
  }
  plVar23 = (longlong *)0x0;
  local_70 = &local_e8;
  plVar19 = param_1 + 1;
  local_78 = plVar19;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
            (*param_1 + 0x170,local_res10,&local_78,0);
  puVar18 = &DAT_143f3eda8;
  if (DAT_1461fcb00 != 0) {
    puVar18 = DAT_1461fcaf8;
  }
  plVar14 = (longlong *)&DAT_143f3eda8;
  if (local_e0 != 0) {
    plVar14 = local_e8;
  }
  iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(plVar14,puVar18);
  plVar14 = plVar23;
  if (iVar11 == 0) {
    puVar12 = (undefined8 *)(**(code **)(*(longlong *)(*param_1 + 0x98) + 0x10))();
    local_88 = (longlong *)0x0;
    iVar11 = *(int *)(puVar12 + 1);
    pvVar2 = (void *)*puVar12;
    local_80 = iVar11;
    if (iVar11 == 0) {
      uStack_7c = 0;
      pplVar15 = &local_88;
      bVar8 = true;
      bVar7 = false;
      bVar6 = false;
      bVar5 = false;
      bVar4 = false;
      bVar3 = false;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,iVar11,0);
      plVar14 = local_88;
      _guard_xfg_dispatch_icall_nop(local_88,pvVar2,(longlong)iVar11 * 2);
      pplVar15 = &local_88;
      bVar8 = true;
      bVar7 = false;
      bVar6 = false;
      bVar5 = false;
      bVar4 = false;
      bVar3 = false;
    }
  }
  else {
    puVar18 = &DAT_143f3eda8;
    if (DAT_1461fcb10 != 0) {
      puVar18 = DAT_1461fcb08;
    }
    plVar17 = (longlong *)&DAT_143f3eda8;
    if (local_e0 != 0) {
      plVar17 = local_e8;
    }
    iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(plVar17,puVar18);
    if (iVar11 == 0) {
      puVar12 = (undefined8 *)(**(code **)(*(longlong *)(*param_1 + 200) + 0x10))();
      local_98 = (longlong *)0x0;
      iVar11 = *(int *)(puVar12 + 1);
      pvVar2 = (void *)*puVar12;
      local_90 = iVar11;
      if (iVar11 == 0) {
        uStack_8c = 0;
        pplVar16 = &local_98;
        bVar7 = true;
        bVar6 = false;
        bVar5 = false;
        bVar4 = false;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,iVar11,0);
        plVar14 = local_98;
        _guard_xfg_dispatch_icall_nop(local_98,pvVar2,(longlong)iVar11 * 2);
        pplVar16 = &local_98;
        bVar7 = true;
        bVar6 = false;
        bVar5 = false;
        bVar4 = false;
      }
    }
    else {
      puVar18 = &DAT_143f3eda8;
      if (DAT_1461fcaf0 != 0) {
        puVar18 = DAT_1461fcae8;
      }
      plVar17 = (longlong *)&DAT_143f3eda8;
      if (local_e0 != 0) {
        plVar17 = local_e8;
      }
      iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(plVar17,puVar18);
      plVar17 = local_e8;
      if (iVar11 == 0) {
        local_70 = (longlong **)0x0;
        pplVar15 = &local_78;
        bVar6 = true;
        bVar5 = false;
      }
      else {
        lVar21 = (longlong)local_e0;
        local_d8 = (longlong *)0x0;
        local_d0 = local_e0;
        if (local_e0 == 0) {
          local_cc = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d8,local_e0,0);
          plVar14 = local_d8;
          _guard_xfg_dispatch_icall_nop(local_d8,plVar17,lVar21 * 2);
        }
        pplVar15 = &local_d8;
        bVar6 = false;
        bVar5 = true;
      }
      bVar7 = false;
      bVar4 = true;
      *pplVar15 = (longlong *)0x0;
      local_40 = *(undefined4 *)(pplVar15 + 1);
      pplVar15[1] = (longlong *)0x0;
      pplVar16 = &local_48;
      local_3c = *(undefined4 *)((longlong)pplVar15 + 0xc);
    }
    *pplVar16 = (longlong *)0x0;
    bVar8 = false;
    bVar3 = true;
    local_50 = *(undefined4 *)(pplVar16 + 1);
    pplVar16[1] = (longlong *)0x0;
    pplVar15 = &local_58;
    local_4c = *(undefined4 *)((longlong)pplVar16 + 0xc);
  }
  *pplVar15 = (longlong *)0x0;
  iVar11 = *(int *)(pplVar15 + 1);
  local_5c = *(undefined4 *)((longlong)pplVar15 + 0xc);
  local_60 = iVar11;
  pplVar15[1] = (longlong *)0x0;
  local_68 = plVar14;
  if ((bVar3) && (local_58 != (longlong *)0x0)) {
    FMemory::Free();
  }
  if ((bVar4) && (local_48 != (longlong *)0x0)) {
    FMemory::Free();
  }
  if ((bVar5) && (local_d8 != (longlong *)0x0)) {
    FMemory::Free();
  }
  if ((bVar6) && (local_78 != (longlong *)0x0)) {
    FMemory::Free();
  }
  if ((bVar7) && (local_98 != (longlong *)0x0)) {
    FMemory::Free();
  }
  if ((bVar8) && (local_88 != (longlong *)0x0)) {
    FMemory::Free();
  }
  if (1 < iVar11) {
    lVar21 = *param_1;
    if (*(int *)(lVar21 + 0x100) != *(int *)(lVar21 + 300)) {
      plVar17 = (longlong *)&DAT_143f3eda8;
      if (iVar11 != 0) {
        plVar17 = plVar14;
      }
      iVar20 = FUN_140438070(plVar17);
      lVar13 = *(longlong *)(lVar21 + 0x138);
      if (*(longlong *)(lVar21 + 0x138) == 0) {
        lVar13 = lVar21 + 0x130;
      }
      iVar20 = *(int *)(lVar13 + ((longlong)*(int *)(lVar21 + 0x140) - 1U & (longlong)iVar20) * 4);
      if (iVar20 != -1) {
        lVar13 = *(longlong *)(lVar21 + 0xf8);
        do {
          lVar22 = (longlong)iVar20 * 0x20;
          plVar17 = (longlong *)&DAT_143f3eda8;
          if (iVar11 != 0) {
            plVar17 = plVar14;
          }
          if (*(int *)(lVar22 + 8 + lVar13) == 0) {
            puVar18 = &DAT_143f3eda8;
          }
          else {
            puVar18 = *(undefined2 **)(lVar22 + lVar13);
          }
          iVar20 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar18,plVar17);
          if (iVar20 == 0) break;
          lVar13 = *(longlong *)(lVar21 + 0xf8);
          iVar20 = *(int *)(lVar22 + 0x18 + lVar13);
        } while (iVar20 != -1);
      }
    }
  }
  lVar21 = *param_1;
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(lVar21 + 0x1c0,local_res10,plVar19);
  if ((local_res10[0] == -1) ||
     (lVar13 = *(longlong *)(lVar21 + 0x1c0) + (longlong)local_res10[0] * 0x28, lVar13 == 0)) {
    local_res18[0] = plVar19;
    TSet<TTuple<FString,TArray<BuildPatchServices::FFileManifest_const_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<BuildPatchServices::FFileManifest_const_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<FString_const_&>_>(lVar21 + 0x1c0,local_res10,local_res18,0);
    lVar13 = *(longlong *)(lVar21 + 0x1c0) + (longlong)local_res10[0] * 0x28;
  }
  cVar10 = FUN_140585b70(lVar13 + 0x10,&local_68);
  if (cVar10 != '\0') {
    lVar21 = *param_1;
    if (1 < *(int *)(lVar13 + 0x18)) {
      TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
      ::FindId((longlong *)(lVar21 + 0xf8),local_res10,lVar13 + 0x10);
      plVar19 = plVar23;
      if (local_res10[0] != -1) {
        plVar19 = (longlong *)((longlong)local_res10[0] * 0x20 + *(longlong *)(lVar21 + 0xf8));
      }
      plVar14 = plVar19 + 2;
      if (plVar19 == (longlong *)0x0) {
        plVar14 = plVar23;
      }
      if ((plVar14 != (longlong *)0x0) && (*plVar14 != 0)) {
        TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(*param_1 + 0x38);
        goto LAB_1405717ca;
      }
      lVar21 = *param_1;
    }
    local_c0 = 0;
    local_c8 = &PTR__scalar_deleting_destructor__143fc4420;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(lVar21 + 0x38,&local_c8);
    local_c8 = &PTR__scalar_deleting_destructor__143fc4420;
    if (local_b0 != 0) {
      FMemory::Free();
    }
    if (local_c0 != 0) {
      FMemory::Free();
    }
  }
LAB_1405717ca:
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
LAB_1405717dd:
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free(local_e8);
  }
  return;
}



// FUNCTION 140571830 FUN_140571830 body=2853 status=ok
// SIG undefined FUN_140571830(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140571830(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar10;
  undefined8 uVar11;
  int *piVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined2 *puVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  undefined2 *puVar19;
  longlong *plVar20;
  wchar_t *pwVar21;
  wchar_t *pwVar22;
  uint uVar23;
  uint *puVar24;
  wchar_t *pwVar25;
  wchar_t *pwVar26;
  undefined1 auStack_2a8 [32];
  undefined4 local_288;
  wchar_t *local_278;
  undefined8 local_270;
  uint local_268;
  uint uStack_264;
  uint *puStack_260;
  uint local_258;
  uint uStack_254;
  uint uStack_250;
  undefined4 uStack_24c;
  longlong *local_248;
  wchar_t *local_240;
  ulonglong local_238;
  wchar_t *local_230;
  undefined8 local_228;
  wchar_t *local_220;
  undefined8 local_218;
  wchar_t *local_210;
  undefined8 local_208;
  undefined1 local_200 [4];
  undefined1 local_1fc [4];
  undefined2 *local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined2 *local_1e0;
  undefined8 local_1d8;
  undefined2 *local_1d0;
  undefined8 local_1c8;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined8 local_160;
  undefined1 local_158 [8];
  undefined8 local_150;
  uint uStack_148;
  uint uStack_144;
  uint *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  longlong local_128 [2];
  longlong local_118;
  longlong local_108;
  longlong local_f8;
  longlong local_e8;
  longlong *local_d8;
  int local_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  uint *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  longlong local_98;
  undefined8 local_90;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  int iVar9;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  pwVar21 = (wchar_t *)0x0;
  uVar10 = 0;
  local_248 = param_1;
  local_1e8 = param_2;
  if (*(int *)(param_2 + 0x1c) == 0) {
    pcVar3 = *(char **)(param_2 + 0x40);
    local_278 = (wchar_t *)0x0;
    local_270 = 0;
    if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
      lVar18 = -1;
      do {
        lVar18 = lVar18 + 1;
      } while (pcVar3[lVar18] != '\0');
      uVar16 = (int)lVar18 + 1;
      local_270 = (ulonglong)uVar16;
      if (0 < (int)uVar16) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_278,0);
      }
      local_288 = CONCAT22(local_288._2_2_,0x3f);
      FGenericPlatformString::Convert<char,wchar_t>(local_278,uVar16,pcVar3,uVar16);
    }
    local_98 = 0;
    local_90 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_198 = 0;
    local_190 = 0;
    local_188 = 0;
    local_180 = 0;
    local_178 = 0;
    local_170 = 0;
    local_168 = (longlong *)0x0;
    local_160 = 0;
    while( true ) {
      local_1e0 = (undefined2 *)0x0;
      local_1d8 = 2;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e0,0);
      puVar19 = local_1e0;
      local_288 = CONCAT22(local_288._2_2_,0x3f);
      FGenericPlatformString::Convert<char,wchar_t>(local_1e0,2,&DAT_143fc48d8);
      local_288 = 0xffffffff;
      puVar15 = &DAT_143f3eda8;
      if ((int)local_1d8 != 0) {
        puVar15 = puVar19;
      }
      iVar6 = FUN_141592950(&local_278,puVar15,1);
      if (puVar19 != (undefined2 *)0x0) {
        FMemory::Free(puVar19);
      }
      if (iVar6 == -1) break;
      local_210 = (wchar_t *)0x0;
      local_208 = 0;
      local_220 = (wchar_t *)0x0;
      local_218 = 0;
      local_1f8 = (undefined2 *)0x0;
      local_1f0 = 2;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f8,0);
      puVar19 = local_1f8;
      local_288 = CONCAT22(local_288._2_2_,0x3f);
      FGenericPlatformString::Convert<char,wchar_t>(local_1f8,2,&DAT_143fc48d8);
      iVar6 = (int)local_1f0;
      local_288 = 0xffffffff;
      puVar15 = &DAT_143f3eda8;
      if ((int)local_1f0 != 0) {
        puVar15 = puVar19;
      }
      iVar7 = FUN_141592950(&local_278,puVar15,1);
      if (-1 < iVar7) {
        if ((int)local_270 == 0) {
          pwVar25 = L"";
          iVar13 = 0;
        }
        else {
          pwVar25 = local_278;
          iVar13 = (int)local_270 + -1;
        }
        local_240 = (wchar_t *)0x0;
        if (iVar7 < iVar13) {
          iVar13 = iVar7;
        }
        uVar16 = iVar13 + 1;
        if (iVar13 == 0) {
          uVar16 = uVar10;
        }
        local_238 = (ulonglong)uVar16;
        pwVar22 = pwVar21;
        if (0 < (int)uVar16) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_240,0);
          pwVar22 = local_240;
          uVar16 = (uint)local_238;
          if (0 < (int)(uint)local_238) {
            wcsncpy(local_240,pwVar25,(longlong)iVar13);
            pwVar22[iVar13] = L'\0';
          }
        }
        iVar13 = (int)local_270;
        if (local_210 != (wchar_t *)0x0) {
          FMemory::Free(local_210);
          iVar13 = (int)local_270;
        }
        local_240 = (wchar_t *)0x0;
        local_208 = CONCAT44((int)(local_238 >> 0x20),uVar16);
        local_238 = 0;
        iVar9 = iVar6 + -1;
        if (iVar6 == 0) {
          iVar9 = 0;
        }
        uVar8 = iVar9 + iVar7;
        uVar16 = uVar8 + 0x7fffffff;
        uVar23 = iVar13 - 1;
        if (iVar13 == 0) {
          uVar23 = uVar10;
        }
        if (uVar8 < uVar23) {
          uVar23 = uVar8;
        }
        uVar8 = iVar13 - 1;
        if (iVar13 == 0) {
          uVar8 = uVar10;
        }
        uVar17 = uVar23;
        if ((uVar23 <= uVar16) && (uVar17 = uVar8, uVar16 < uVar8)) {
          uVar17 = uVar16;
        }
        local_230 = (wchar_t *)0x0;
        pwVar25 = L"";
        if (iVar13 != 0) {
          pwVar25 = local_278;
        }
        iVar6 = uVar17 - uVar23;
        uVar16 = iVar6 + 1;
        if (iVar6 == 0) {
          uVar16 = uVar10;
        }
        local_228 = (ulonglong)uVar16;
        pwVar26 = pwVar21;
        local_210 = pwVar22;
        if (0 < (int)uVar16) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_230,0);
          pwVar26 = local_230;
          uVar16 = (uint)local_228;
          if (0 < (int)(uint)local_228) {
            wcsncpy(local_230,pwVar25 + (int)uVar23,(longlong)iVar6);
            pwVar26[iVar6] = L'\0';
          }
        }
        if (local_220 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        local_218 = CONCAT44(local_228._4_4_,uVar16);
        local_228 = 0;
        local_230 = (wchar_t *)0x0;
        puVar19 = local_1f8;
        local_220 = pwVar26;
      }
      if (puVar19 != (undefined2 *)0x0) {
        FMemory::Free(puVar19);
      }
      local_258 = local_258 & 0xffffff00;
      lVar18 = FUN_14057c0d0(local_128,&local_210,&local_268);
      FString::operator=(&local_1b8,lVar18);
      FString::operator=(&local_1a8,lVar18 + 0x10);
      FString::operator=(&local_198,lVar18 + 0x20);
      FString::operator=(&local_188,lVar18 + 0x30);
      FString::operator=(&local_178,lVar18 + 0x40);
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=(&local_168,lVar18 + 0x50);
      plVar20 = local_d8;
      for (iVar6 = local_d0; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (*plVar20 != 0) {
          FMemory::Free();
        }
        plVar20 = plVar20 + 2;
      }
      if (local_d8 != (longlong *)0x0) {
        FMemory::Free(local_d8);
      }
      if (local_e8 != 0) {
        FMemory::Free();
      }
      if (local_f8 != 0) {
        FMemory::Free();
      }
      if (local_108 != 0) {
        FMemory::Free();
      }
      if (local_118 != 0) {
        FMemory::Free();
      }
      if (local_128[0] != 0) {
        FMemory::Free();
      }
      if (((char)local_258 != '\0') && (CONCAT44(uStack_264,local_268) != 0)) {
        FMemory::Free();
      }
      FUN_14056a7d0(&local_98,local_200,&local_1b8,0);
      pwVar25 = local_220;
      lVar18 = (longlong)(int)local_218;
      local_270 = CONCAT44(local_270._4_4_,(int)local_218);
      if (((int)local_218 == 0) && (local_270._4_4_ == 0)) {
        local_270 = local_218 & 0xffffffff;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_278,local_218 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(local_278,pwVar25,lVar18 * 2);
      }
      local_1d0 = (undefined2 *)0x0;
      local_1c8 = 2;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d0,0);
      puVar19 = local_1d0;
      local_288 = CONCAT22(local_288._2_2_,0x3f);
      FGenericPlatformString::Convert<char,wchar_t>(local_1d0,2,&DAT_143fc48d8);
      local_288 = 0xffffffff;
      puVar15 = &DAT_143f3eda8;
      if ((int)local_1c8 != 0) {
        puVar15 = puVar19;
      }
      iVar6 = FUN_141592950(&local_278,puVar15,1);
      if (puVar19 != (undefined2 *)0x0) {
        FMemory::Free(puVar19);
      }
      if (iVar6 == -1) {
        local_258 = local_258 & 0xffffff00;
        uVar11 = FUN_14057c0d0(local_128,&local_220,&local_268);
        FUN_14056a7d0(&local_98,local_1fc,uVar11,0);
        plVar20 = local_d8;
        for (iVar6 = local_d0; iVar6 != 0; iVar6 = iVar6 + -1) {
          if (*plVar20 != 0) {
            FMemory::Free();
          }
          plVar20 = plVar20 + 2;
        }
        if (local_d8 != (longlong *)0x0) {
          FMemory::Free(local_d8);
        }
        if (local_e8 != 0) {
          FMemory::Free();
        }
        if (local_f8 != 0) {
          FMemory::Free();
        }
        if (local_108 != 0) {
          FMemory::Free();
        }
        if (local_118 != 0) {
          FMemory::Free();
        }
        if (local_128[0] != 0) {
          FMemory::Free();
        }
        if (((char)local_258 != '\0') && (CONCAT44(uStack_264,local_268) != 0)) {
          FMemory::Free();
        }
      }
      if (local_220 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      if (local_210 != (wchar_t *)0x0) {
        FMemory::Free();
      }
    }
    plVar20 = local_248 + 5;
    local_268 = 0;
    uVar10 = *(uint *)(local_248 + 10);
    puVar1 = (uint *)(local_248 + 7);
    uStack_264 = 1;
    uStack_254 = 0;
    uStack_250 = 0;
    if (uVar10 != 0) {
      puVar24 = (uint *)local_248[9];
      if ((uint *)local_248[9] == (uint *)0x0) {
        puVar24 = puVar1;
      }
      uVar16 = *puVar24;
      pwVar25 = pwVar21;
      pwVar22 = pwVar21;
      while (uVar16 == 0) {
        iVar6 = (int)pwVar25;
        uStack_250 = (int)pwVar22 + 0x20;
        pwVar22 = (wchar_t *)(ulonglong)uStack_250;
        local_268 = iVar6 + 1;
        pwVar25 = (wchar_t *)(ulonglong)local_268;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_140571f61;
        uVar16 = puVar24[(longlong)iVar6 + 1];
      }
      uStack_264 = -uVar16 & uVar16;
      iVar6 = 0x1f;
      if (uStack_264 != 0) {
        for (; uStack_264 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uStack_264 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_254 = (uStack_250 - iVar6) + 0x1f;
      if ((int)uVar10 < (int)uStack_254) {
LAB_140571f61:
        uStack_254 = uVar10;
      }
    }
    uVar16 = *(uint *)(local_248 + 10);
    uStack_138 = CONCAT44(uStack_254,0xffffffff);
    local_130 = CONCAT44(uStack_24c,uStack_250);
    uStack_c0 = CONCAT44(uStack_264,local_268);
    local_258 = -1 << ((byte)uVar16 & 0x1f);
    uVar23 = uVar16 & 0xffffffe0;
    uStack_148 = local_268;
    uStack_144 = uStack_264;
    puStack_260 = puVar1;
    uStack_254 = uVar16;
    local_140 = puVar1;
    local_c8 = plVar20;
    puStack_b8 = puVar1;
    uStack_b0 = uStack_138;
    uStack_a8 = local_130;
    local_150 = plVar20;
    if (uVar16 != uVar10) {
      puVar24 = (uint *)local_248[9];
      if ((uint *)local_248[9] == (uint *)0x0) {
        puVar24 = puVar1;
      }
      uVar8 = puVar24[(int)uVar16 >> 5] & local_258;
      iVar6 = (int)uVar16 >> 5;
      while (uVar8 == 0) {
        uVar23 = uVar23 + 0x20;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_140572044;
        uVar8 = puVar24[(longlong)iVar6 + 1];
        local_258 = 0xffffffff;
        iVar6 = iVar6 + 1;
      }
      uVar8 = -uVar8 & uVar8;
      iVar6 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uVar8 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_254 = (uVar23 - iVar6) + 0x1f;
      uVar16 = uStack_254;
      if ((int)uVar10 < (int)uStack_254) {
LAB_140572044:
        uStack_254 = uVar10;
        uVar16 = uVar10;
      }
    }
    while( true ) {
      plVar4 = local_168;
      if (((uStack_138._4_4_ == uVar16) && (local_140 == puVar1)) && (local_150 == plVar20)) break;
      lVar18 = (longlong)(int)uStack_138._4_4_ * 0x68 + *local_150;
      if ((int)local_90 != local_64) {
        uVar10 = GetTypeHash(lVar18);
        puVar14 = local_60;
        if (local_58 != (undefined1 *)0x0) {
          puVar14 = local_58;
        }
        for (iVar6 = *(int *)(puVar14 + (longlong)(int)(local_50 - 1U & uVar10) * 4); iVar6 != -1;
            iVar6 = *(int *)((longlong)iVar6 * 0x68 + 0x60 + local_98)) {
          cVar5 = AccountId::operator==(local_98 + (longlong)iVar6 * 0x68);
          plVar4 = local_248;
          if (cVar5 != '\0') {
            if (iVar6 != -1) {
              piVar12 = (int *)TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
                               ::FindId(*local_248 + 0x240,local_1fc,lVar18);
              if ((*piVar12 == -1) && ((char)plVar4[0xf] != '\0')) {
                FUN_14056a7d0(*plVar4 + 0x240,local_200,lVar18,0);
                goto LAB_1405721fc;
              }
            }
            break;
          }
        }
      }
      if ((int)local_90 != local_64) {
        uVar10 = GetTypeHash(lVar18);
        puVar14 = local_60;
        if (local_58 != (undefined1 *)0x0) {
          puVar14 = local_58;
        }
        for (iVar6 = *(int *)(puVar14 + (longlong)(int)(local_50 - 1U & uVar10) * 4); iVar6 != -1;
            iVar6 = *(int *)((longlong)iVar6 * 0x68 + 0x60 + local_98)) {
          cVar5 = AccountId::operator==(local_98 + (longlong)iVar6 * 0x68);
          plVar4 = local_248;
          if (cVar5 != '\0') {
            if (iVar6 != -1) {
              piVar12 = (int *)TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
                               ::FindId(*local_248 + 0x240,local_158,lVar18);
              if ((*piVar12 != -1) && ((char)plVar4[0xf] == '\0')) {
                TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
                ::Remove(*plVar4 + 0x240);
              }
            }
            break;
          }
        }
      }
LAB_1405721fc:
      uStack_138 = CONCAT44(uStack_138._4_4_,(uint)uStack_138 & ~uStack_144);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_148);
    }
    plVar20 = local_168;
    for (iVar6 = (int)local_160; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar20 != 0) {
        FMemory::Free();
      }
      plVar20 = plVar20 + 2;
    }
    if (plVar4 != (longlong *)0x0) {
      FMemory::Free(plVar4);
    }
    if (local_178 != 0) {
      FMemory::Free();
    }
    if (local_188 != 0) {
      FMemory::Free();
    }
    if (local_198 != 0) {
      FMemory::Free();
    }
    if (local_1a8 != 0) {
      FMemory::Free();
    }
    if (local_1b8 != 0) {
      FMemory::Free();
    }
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(&local_98,0);
    if (local_78 != 0) {
      FMemory::Free();
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
    if (local_278 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  plVar20 = local_248;
  uVar2 = *(undefined4 *)(local_1e8 + 0x20);
  if (((int)local_248[2] != 0) && ((longlong *)local_248[1] != (longlong *)0x0)) {
    cVar5 = (**(code **)(*(longlong *)local_248[1] + 0x18))();
    if (cVar5 != '\0') {
      if ((int)plVar20[2] != 0) {
        pwVar21 = (wchar_t *)plVar20[1];
      }
      (**(code **)(*(longlong *)pwVar21 + 0x40))(pwVar21,uVar2);
    }
  }
  return;
}



// FUNCTION 140572370 FUN_140572370 body=66 status=ok
// SIG undefined FUN_140572370(void)

undefined8 * FUN_140572370(undefined8 *param_1,ulonglong param_2)

{
  FUN_14056e920(param_1 + 1);
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1405723c0 FUN_1405723c0 body=66 status=ok
// SIG undefined FUN_1405723c0(void)

undefined8 * FUN_1405723c0(undefined8 *param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 2);
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 140572410 FUN_140572410 body=66 status=ok
// SIG undefined FUN_140572410(void)

undefined8 * FUN_140572410(undefined8 *param_1,ulonglong param_2)

{
  FUN_14056e990(param_1 + 1);
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 140572460 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_c6a99b78678c8a60d9cf29d32e7e03fe>_>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1405724b0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5dfb6ceb8ca40798ef6659d89e70bd6b>_>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_14056ebc0(param_1 + 1);
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 140572500 FUN_140572500 body=66 status=ok
// SIG undefined FUN_140572500(void)

undefined8 * FUN_140572500(undefined8 *param_1,ulonglong param_2)

{
  FUN_14056ea00(param_1 + 1);
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x148);
  }
  return param_1;
}



// FUNCTION 140572550 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_CopyableOwnedObject<<lambda_663464369c1590981c9f122ae74cbfd4>,1>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FJsonSerializer::StackState::~StackState(param_1 + 1);
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1405725a0 `scalar_deleting_destructor' body=134 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TDoubleLinkedList<FObjectGraphNode_*>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR__scalar_deleting_destructor__143fc4528;
  *param_1 = &PTR__scalar_deleting_destructor__143fc4528;
  if (param_1[1] != 0) {
    do {
      lVar1 = *(longlong *)(param_1[1] + 8);
      FMemory::operator_delete(param_1[1],0x18);
      param_1[1] = lVar1;
    } while (lVar1 != 0);
    ppuVar2 = (undefined **)*param_1;
  }
  param_1[2] = 0;
  param_1[1] = 0;
  (*(code *)ppuVar2[1])(param_1,0);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140572630 `scalar_deleting_destructor' body=86 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FWeightedRandomSampler::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__143fc4420;
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 140572690 FUN_140572690 body=52 status=ok
// SIG undefined FUN_140572690(void)

undefined8 FUN_140572690(undefined8 param_1,ulonglong param_2)

{
  FUN_14056edf0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 1405726d0 FUN_1405726d0 body=43 status=ok
// SIG undefined FUN_1405726d0(void)

undefined8 * FUN_1405726d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fc45e0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 140572700 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessPassThroughPS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_14056f1f0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c0);
  }
  return param_1;
}



// FUNCTION 140572740 FUN_140572740 body=52 status=ok
// SIG undefined FUN_140572740(void)

undefined8 FUN_140572740(undefined8 param_1,ulonglong param_2)

{
  FUN_14056f390();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 140572780 FUN_140572780 body=261 status=ok
// SIG undefined FUN_140572780(void)

undefined8 * FUN_140572780(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_143fc4880;
  if (*(char *)(param_1 + 1) != '\0') {
    FUN_140589bc0();
    FUN_14057cb00(param_1 + 2,0);
    *(undefined1 *)(param_1 + 1) = 0;
    _guard_xfg_dispatch_icall_nop();
  }
  iVar2 = *(int *)(param_1 + 0x93);
  lVar1 = param_1[0x92];
  if (iVar2 != 0) {
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1);
      lVar1 = lVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = param_1[0x92];
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  if (param_1[0x90] != 0) {
    FMemory::Free();
  }
  FUN_14056edf0(param_1 + 0x4e);
  FUN_14056edf0(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  FUN_14057cd00(param_1 + 2,0);
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4a8);
  }
  return param_1;
}



// FUNCTION 140572890 `scalar_deleting_destructor' body=75 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FVivoxCoreModule::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x10) = IModuleInterface::vftable;
  FSelfRegisteringExec::~FSelfRegisteringExec(param_1 + 8);
  FUN_1404bf750(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1405728e0 FUN_1405728e0 body=52 status=ok
// SIG undefined FUN_1405728e0(void)

undefined8 FUN_1405728e0(undefined8 param_1,ulonglong param_2)

{
  FUN_14056f400();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x448);
  }
  return param_1;
}



// FUNCTION 140572920 FUN_140572920 body=81 status=ok
// SIG undefined FUN_140572920(void)

undefined8 * FUN_140572920(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fc4778;
  FUN_14056ed50(param_1 + 8);
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 140572980 `scalar_deleting_destructor' body=86 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FRepChangedPropertyTracker::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__143fc48e0;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1405729e0 FUN_1405729e0 body=52 status=ok
// SIG undefined FUN_1405729e0(void)

undefined8 FUN_1405729e0(undefined8 param_1,ulonglong param_2)

{
  FUN_14056f660();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 140572a20 `scalar_deleting_destructor' body=69 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * TTSAudioBufferImpl::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__143fc4900;
  ::_guard_xfg_dispatch_icall_nop(*(undefined4 *)(param_1 + 1),param_1[2]);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 140572a70 `scalar_deleting_destructor' body=97 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * TTSMessageImpl::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__143fc44f0;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  param_1[1] = &PTR__scalar_deleting_destructor__143fc44d0;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140572ae0 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
Chaos::FPBDVolumeConstraintBase::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__143fc44d0;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140572b30 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 TextToSpeech::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~TextToSpeech();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 140572b70 FUN_140572b70 body=98 status=ok
// SIG undefined FUN_140572b70(void)

undefined8 * FUN_140572b70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fc4850;
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  FUN_14056ed50(param_1 + 4);
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 140572be0 FUN_140572be0 body=5 status=ok
// SIG undefined FUN_140572be0(void)

longlong FUN_140572be0(longlong param_1)

{
  return param_1 + 0x40;
}



// FUNCTION 140572bf0 FUN_140572bf0 body=236 status=ok
// SIG undefined FUN_140572bf0(void)

undefined8 FUN_140572bf0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong local_88 [2];
  char local_78;
  longlong local_70 [2];
  longlong local_60;
  longlong local_50;
  longlong local_40;
  longlong local_30;
  longlong *local_20;
  int local_18;
  
  local_78 = '\0';
  lVar1 = FUN_14057c0d0(local_70,param_2,local_88);
  FString::FString(param_1,lVar1 + 0x10);
  plVar2 = local_20;
  for (; local_18 != 0; local_18 = local_18 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_20 != (longlong *)0x0) {
    FMemory::Free(local_20);
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
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_70[0] != 0) {
    FMemory::Free();
  }
  if ((local_78 != '\0') && (local_88[0] != 0)) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140572ce0 FUN_140572ce0 body=267 status=ok
// SIG undefined FUN_140572ce0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140572ce0(longlong param_1)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined2 *puVar6;
  int local_res8 [2];
  
  if (1 < *(int *)(param_1 + 0x150)) {
    puVar4 = &DAT_143f3eda8;
    puVar6 = &DAT_143f3eda8;
    if (DAT_1461fcaf0 != 0) {
      puVar6 = DAT_1461fcae8;
    }
    if (*(int *)(param_1 + 0x150) != 0) {
      puVar4 = *(undefined2 **)(param_1 + 0x148);
    }
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar6);
    if (iVar1 != 0) {
      TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0xf8,local_res8,param_1 + 0x148);
    }
    piVar2 = (int *)TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
                    ::FindId(param_1 + 0xf8,local_res8,param_1 + 0x148);
    if (*piVar2 != -1) {
      TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0xf8,local_res8,param_1 + 0x148);
      if (local_res8[0] == -1) {
        return _DAT_00000000;
      }
      lVar5 = (longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0xf8);
      plVar3 = (longlong *)(lVar5 + 0x10);
      if (lVar5 == 0) {
        plVar3 = (longlong *)0x0;
      }
      return *plVar3;
    }
  }
  return param_1 + 0x68;
}



// FUNCTION 140572df0 AddUninitialized body=216 status=ok
// SIG undefined AddUninitialized(void)

int * TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::AddUninitialized(longlong *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar4 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar4 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = (longlong)iVar4 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 140572ed0 AddUninitialized body=210 status=ok
// SIG undefined AddUninitialized(void)

int * TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,FOnlineKeyValuePairs<FName,FOnlineSessionSetting>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::AddUninitialized(longlong *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar4 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)((longlong)iVar4 * 0x68 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x68 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = (longlong)iVar4 * 0x68 + *param_1;
  return param_2;
}



// FUNCTION 140572fd0 FUN_140572fd0 body=8 status=ok
// SIG undefined FUN_140572fd0(void)

longlong FUN_140572fd0(longlong param_1)

{
  return param_1 + 0x90;
}



// FUNCTION 140572fe0 AudioEnergy body=42 status=ok
// SIG undefined AudioEnergy(void)

undefined8 Participant::AudioEnergy(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x38) + 8))();
  (**(code **)(*plVar1 + 0x108))(plVar1);
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 140573010 FUN_140573010 body=5 status=ok
// SIG undefined FUN_140573010(void)

longlong FUN_140573010(longlong param_1)

{
  return param_1 + 0x60;
}



// FUNCTION 140573050 FUN_140573050 body=1286 status=ok
// SIG undefined FUN_140573050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_140573050(longlong param_1,undefined8 param_2,longlong **param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  int local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong *local_198;
  int local_190;
  longlong local_188;
  longlong *local_180;
  longlong *local_178;
  int local_170;
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  longlong local_160;
  longlong local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined1 local_130 [8];
  longlong *local_128;
  longlong *local_120;
  longlong local_110 [2];
  longlong local_100 [3];
  undefined1 local_e8 [128];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_148 = param_1 + 0x1f0;
  local_160 = param_1;
  local_150 = param_2;
  piVar6 = (int *)TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
                  ::FindId(local_148,local_168,param_2);
  if (*piVar6 != -1) {
    if (((*(int *)(param_3 + 1) != 0) && (*param_3 != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(**param_3 + 0x18))(), cVar4 != '\0')) {
      if (*(int *)(param_3 + 1) == 0) {
        plVar14 = (longlong *)0x0;
      }
      else {
        plVar14 = *param_3;
      }
      (**(code **)(*plVar14 + 0x40))(plVar14,0);
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
    return 0;
  }
  puVar12 = (undefined8 *)0x0;
  local_1b8 = (longlong *)0x0;
  local_1b0 = 0;
  plVar7 = (longlong *)
           TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x80,local_130);
  plVar14 = (longlong *)plVar7[1];
  local_158 = *plVar7;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  if (local_128 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_128 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_128)(local_128);
      LOCK();
      piVar6 = (int *)((longlong)local_128 + 0xc);
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_128 + 8))(local_128,1);
      }
    }
  }
  plVar7 = plVar14 + 1;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar7 = (int)*plVar7 + 1;
    UNLOCK();
    LOCK();
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar6 = (int *)((longlong)plVar14 + 0xc);
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  lVar11 = local_160;
  local_1a0 = local_160;
  local_198 = (longlong *)0x0;
  local_190 = 0;
  if (((param_3 != &local_198) && (*(int *)(param_3 + 1) != 0)) &&
     (plVar2 = *param_3, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_198);
  }
  local_188 = local_158;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar7 = (int)*plVar7 + 1;
    UNLOCK();
  }
  local_180 = plVar14;
  plVar7 = (longlong *)FMemory::Realloc(0,0x40);
  local_120 = plVar7;
  if (plVar7 == (longlong *)0x0) {
    if (((local_1b0 != 0) && (local_1b8 != (longlong *)0x0)) &&
       ((**(code **)(*local_1b8 + 0x28))(local_1b8,0), local_1b8 != (longlong *)0x0)) {
      local_1b8 = (longlong *)FMemory::Realloc(local_1b8,0,0);
    }
  }
  else {
    *plVar7 = (longlong)&PTR_GetPoolName_143fc5350;
    plVar7[1] = local_1a0;
    plVar7[2] = 0;
    *(undefined4 *)(plVar7 + 3) = 0;
    if (((&local_198 != (longlong **)(plVar7 + 2)) && (local_190 != 0)) &&
       (local_198 != (longlong *)0x0)) {
      (**(code **)(*local_198 + 0x30))();
    }
    plVar7[4] = local_188;
    plVar7[5] = (longlong)local_180;
    local_180 = (longlong *)0x0;
    local_188 = 0;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[7] = lVar8;
    *plVar7 = (longlong)&PTR_GetPoolName_143fc5398;
    FUN_14057b710(plVar7,&local_1b8);
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_120 = (longlong *)FMemory::Realloc(plVar7,0,0);
    if (local_120 != (longlong *)0x0) {
      FMemory::Free(local_120);
    }
  }
  plVar7 = local_180;
  if (local_180 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_180 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_180)(local_180);
      LOCK();
      piVar6 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_198);
  local_178 = (longlong *)0x0;
  local_170 = 0;
  if ((local_1b0 != 0) && (local_1b8 != (longlong *)0x0)) {
    (**(code **)(*local_1b8 + 0x30))(local_1b8,&local_178);
  }
  if ((DAT_1468535b8 == (undefined8 *)0x0) &&
     (puVar9 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = puVar12,
     puVar9 != (undefined8 *)0x0)) {
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 2;
    DAT_1468535b8 = puVar9;
  }
  puVar9 = DAT_1468535b8;
  puVar10 = (undefined8 *)AccountId::ToString(lVar11 + 0x90,local_100);
  uVar3 = local_150;
  FUN_1405840c0(local_150);
  _guard_xfg_dispatch_icall_nop(&local_1a8);
  if (1 < *(int *)(puVar10 + 1)) {
    lVar11 = TStringConversion<FTCHARToUTF8_Convert,128>::
             TStringConversion<FTCHARToUTF8_Convert,128>(local_e8,*puVar10);
    puVar12 = (undefined8 *)_guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar11 + 0x88));
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  *(undefined8 **)(local_1a8 + 0x30) = puVar12;
  uVar13 = AccountId::ToString(uVar3,local_110);
  uVar13 = vx_fstrdup(uVar13);
  *(undefined8 *)(local_1a8 + 0x38) = uVar13;
  if (local_110[0] != 0) {
    FMemory::Free();
  }
  local_140 = 0;
  local_138 = 0;
  if ((local_170 != 0) && (local_178 != (longlong *)0x0)) {
    (**(code **)(*local_178 + 0x30))(local_178,&local_140);
  }
  iVar5 = FUN_140584410(puVar9,local_1a8,&local_140);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_178);
  if (local_100[0] != 0) {
    FMemory::Free();
  }
  if (iVar5 == 0) {
    FUN_14056a7d0(local_148,local_164,uVar3,0);
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar14 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar6 = (int *)((longlong)plVar14 + 0xc);
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  if (local_1b0 != 0) {
    if (local_1b8 == (longlong *)0x0) goto LAB_140573528;
    (**(code **)(*local_1b8 + 0x28))(local_1b8,0);
    if (local_1b8 != (longlong *)0x0) {
      local_1b8 = (longlong *)FMemory::Realloc(local_1b8,0,0);
    }
    local_1b0 = 0;
  }
  if (local_1b8 != (longlong *)0x0) {
    FMemory::Free(local_1b8);
  }
LAB_140573528:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return iVar5;
}



// FUNCTION 140573560 FUN_140573560 body=1294 status=ok
// SIG undefined FUN_140573560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_140573560(longlong param_1,undefined8 param_2,longlong **param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  int local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong *local_198;
  int local_190;
  longlong local_188;
  longlong *local_180;
  longlong *local_178;
  int local_170;
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  longlong local_160;
  longlong local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined1 local_130 [8];
  longlong *local_128;
  longlong *local_120;
  longlong local_110 [2];
  longlong local_100 [3];
  undefined1 local_e8 [128];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_148 = param_1 + 0x1a0;
  local_160 = param_1;
  local_150 = param_2;
  piVar6 = (int *)TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
                  ::FindId(local_148,local_168,param_2);
  if (*piVar6 != -1) {
    if (((*(int *)(param_3 + 1) != 0) && (*param_3 != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(**param_3 + 0x18))(), cVar4 != '\0')) {
      if (*(int *)(param_3 + 1) == 0) {
        plVar14 = (longlong *)0x0;
      }
      else {
        plVar14 = *param_3;
      }
      (**(code **)(*plVar14 + 0x40))(plVar14,0);
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
    return 0;
  }
  puVar12 = (undefined8 *)0x0;
  local_1b8 = (longlong *)0x0;
  local_1b0 = 0;
  plVar7 = (longlong *)
           TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x80,local_130);
  plVar14 = (longlong *)plVar7[1];
  local_158 = *plVar7;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  if (local_128 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_128 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_128)(local_128);
      LOCK();
      piVar6 = (int *)((longlong)local_128 + 0xc);
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_128 + 8))(local_128,1);
      }
    }
  }
  plVar7 = plVar14 + 1;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar7 = (int)*plVar7 + 1;
    UNLOCK();
    LOCK();
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar6 = (int *)((longlong)plVar14 + 0xc);
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  lVar11 = local_160;
  local_1a0 = local_160;
  local_198 = (longlong *)0x0;
  local_190 = 0;
  if (((param_3 != &local_198) && (*(int *)(param_3 + 1) != 0)) &&
     (plVar2 = *param_3, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_198);
  }
  local_188 = local_158;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar7 = (int)*plVar7 + 1;
    UNLOCK();
  }
  local_180 = plVar14;
  plVar7 = (longlong *)FMemory::Realloc(0,0x40);
  local_120 = plVar7;
  if (plVar7 == (longlong *)0x0) {
    if (((local_1b0 != 0) && (local_1b8 != (longlong *)0x0)) &&
       ((**(code **)(*local_1b8 + 0x28))(local_1b8,0), local_1b8 != (longlong *)0x0)) {
      local_1b8 = (longlong *)FMemory::Realloc(local_1b8,0,0);
    }
  }
  else {
    *plVar7 = (longlong)&PTR_GetPoolName_143fc5350;
    plVar7[1] = local_1a0;
    plVar7[2] = 0;
    *(undefined4 *)(plVar7 + 3) = 0;
    if (((&local_198 != (longlong **)(plVar7 + 2)) && (local_190 != 0)) &&
       (local_198 != (longlong *)0x0)) {
      (**(code **)(*local_198 + 0x30))();
    }
    plVar7[4] = local_188;
    plVar7[5] = (longlong)local_180;
    local_180 = (longlong *)0x0;
    local_188 = 0;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[7] = lVar8;
    *plVar7 = (longlong)&PTR_GetPoolName_143fc5398;
    FUN_14057b710(plVar7,&local_1b8);
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_120 = (longlong *)FMemory::Realloc(plVar7,0,0);
    if (local_120 != (longlong *)0x0) {
      FMemory::Free(local_120);
    }
  }
  plVar7 = local_180;
  if (local_180 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_180 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_180)(local_180);
      LOCK();
      piVar6 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_198);
  local_178 = (longlong *)0x0;
  local_170 = 0;
  if ((local_1b0 != 0) && (local_1b8 != (longlong *)0x0)) {
    (**(code **)(*local_1b8 + 0x30))(local_1b8,&local_178);
  }
  if ((DAT_1468535b8 == (undefined8 *)0x0) &&
     (puVar9 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = puVar12,
     puVar9 != (undefined8 *)0x0)) {
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 2;
    DAT_1468535b8 = puVar9;
  }
  puVar9 = DAT_1468535b8;
  puVar10 = (undefined8 *)AccountId::ToString(lVar11 + 0x90,local_100);
  uVar3 = local_150;
  FUN_1405840c0(local_150);
  _guard_xfg_dispatch_icall_nop(&local_1a8);
  if (1 < *(int *)(puVar10 + 1)) {
    lVar11 = TStringConversion<FTCHARToUTF8_Convert,128>::
             TStringConversion<FTCHARToUTF8_Convert,128>(local_e8,*puVar10);
    puVar12 = (undefined8 *)_guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar11 + 0x88));
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  *(undefined8 **)(local_1a8 + 0x30) = puVar12;
  *(undefined4 *)(local_1a8 + 0x40) = 0;
  uVar13 = AccountId::ToString(uVar3,local_110);
  uVar13 = vx_fstrdup(uVar13);
  *(undefined8 *)(local_1a8 + 0x38) = uVar13;
  if (local_110[0] != 0) {
    FMemory::Free();
  }
  local_140 = 0;
  local_138 = 0;
  if ((local_170 != 0) && (local_178 != (longlong *)0x0)) {
    (**(code **)(*local_178 + 0x30))(local_178,&local_140);
  }
  iVar5 = FUN_140584410(puVar9,local_1a8,&local_140);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_178);
  if (local_100[0] != 0) {
    FMemory::Free();
  }
  if (iVar5 == 0) {
    FUN_14056a7d0(local_148,local_164,uVar3,0);
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar14 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar6 = (int *)((longlong)plVar14 + 0xc);
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  if (local_1b0 != 0) {
    if (local_1b8 == (longlong *)0x0) goto LAB_140573a40;
    (**(code **)(*local_1b8 + 0x28))(local_1b8,0);
    if (local_1b8 != (longlong *)0x0) {
      local_1b8 = (longlong *)FMemory::Realloc(local_1b8,0,0);
    }
    local_1b0 = 0;
  }
  if (local_1b8 != (longlong *)0x0) {
    FMemory::Free(local_1b8);
  }
LAB_140573a40:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return iVar5;
}



// FUNCTION 140573a70 FUN_140573a70 body=1850 status=ok
// SIG undefined FUN_140573a70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_140573a70(longlong param_1,longlong param_2,longlong **param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 auStack_218 [32];
  longlong *local_1f8;
  int local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong *local_1c8;
  int local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  int local_198;
  longlong *local_188;
  longlong *plStack_180;
  undefined1 local_178 [4];
  undefined1 local_174 [4];
  longlong *local_170;
  longlong **local_168;
  longlong local_160;
  undefined8 local_158;
  undefined4 local_150;
  longlong local_148;
  longlong **local_140;
  longlong *local_138;
  longlong *plStack_130;
  undefined1 local_128 [8];
  longlong *local_120;
  longlong *local_118;
  longlong local_108 [2];
  longlong local_f8 [2];
  undefined1 local_e8 [128];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  local_160 = param_1 + 0x150;
  local_1e0 = param_2;
  local_1a8 = param_1;
  local_168 = param_3;
  piVar7 = (int *)FUN_14057e160(local_160,local_178,param_2);
  if (*piVar7 != -1) {
    if (((*(int *)(param_3 + 1) != 0) && (*param_3 != (longlong *)0x0)) &&
       (cVar5 = (**(code **)(**param_3 + 0x18))(), cVar5 != '\0')) {
      if (*(int *)(param_3 + 1) == 0) {
        plVar14 = (longlong *)0x0;
      }
      else {
        plVar14 = *param_3;
      }
      (**(code **)(*plVar14 + 0x40))(plVar14,0);
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
    return 0;
  }
  plVar13 = (longlong *)0x0;
  local_1f8 = (longlong *)0x0;
  local_1f0 = 0;
  plVar8 = (longlong *)
           TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x80,local_128);
  plVar14 = (longlong *)plVar8[1];
  local_1e8 = *plVar8;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_120 + 1;
    lVar15 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar7 = (int *)((longlong)local_120 + 0xc);
      iVar6 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_120 + 8))(local_120,1);
      }
    }
  }
  plVar8 = plVar14 + 1;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar8 = (int)*plVar8 + 1;
    UNLOCK();
    LOCK();
    lVar15 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar7 = (int *)((longlong)plVar14 + 0xc);
      iVar6 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  lVar15 = local_1a8;
  local_1d0 = local_1a8;
  local_1c8 = (longlong *)0x0;
  local_1c0 = 0;
  if (((param_3 != &local_1c8) && (*(int *)(param_3 + 1) != 0)) &&
     (plVar12 = *param_3, plVar12 != (longlong *)0x0)) {
    (**(code **)(*plVar12 + 0x30))(plVar12,&local_1c8);
  }
  local_1b8 = local_1e8;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar8 = (int)*plVar8 + 1;
    UNLOCK();
  }
  local_1b0 = plVar14;
  plVar8 = (longlong *)FMemory::Realloc(0,0x40);
  local_118 = plVar8;
  if (plVar8 == (longlong *)0x0) {
    if (((local_1f0 != 0) && (local_1f8 != (longlong *)0x0)) &&
       ((**(code **)(*local_1f8 + 0x28))(local_1f8,0), local_1f8 != (longlong *)0x0)) {
      local_1f8 = (longlong *)FMemory::Realloc(local_1f8,0,0);
    }
  }
  else {
    *plVar8 = (longlong)&PTR_GetPoolName_143fc5350;
    plVar8[1] = local_1d0;
    plVar8[2] = 0;
    *(undefined4 *)(plVar8 + 3) = 0;
    if (((&local_1c8 != (longlong **)(plVar8 + 2)) && (local_1c0 != 0)) &&
       (local_1c8 != (longlong *)0x0)) {
      (**(code **)(*local_1c8 + 0x30))();
    }
    plVar8[4] = local_1b8;
    plVar8[5] = (longlong)local_1b0;
    local_1b0 = (longlong *)0x0;
    local_1b8 = 0;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar8[7] = lVar9;
    *plVar8 = (longlong)&PTR_GetPoolName_143fc5398;
    FUN_14057b710(plVar8,&local_1f8);
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    local_118 = (longlong *)FMemory::Realloc(plVar8,0,0);
    if (local_118 != (longlong *)0x0) {
      FMemory::Free(local_118);
    }
  }
  plVar8 = local_1b0;
  if (local_1b0 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_1b0 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_1b0)(local_1b0);
      LOCK();
      piVar7 = (int *)((longlong)plVar8 + 0xc);
      iVar6 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1c8);
  local_1a0 = (longlong *)0x0;
  local_198 = 0;
  if ((local_1f0 != 0) && (local_1f8 != (longlong *)0x0)) {
    (**(code **)(*local_1f8 + 0x30))(local_1f8,&local_1a0);
  }
  if ((DAT_1468535b8 == (longlong *)0x0) &&
     (plVar8 = (longlong *)operator_new(0x18), DAT_1468535b8 = plVar13, plVar8 != (longlong *)0x0))
  {
    *plVar8 = 0;
    plVar8[1] = 0;
    plVar8[2] = 2;
    DAT_1468535b8 = plVar8;
  }
  plVar8 = DAT_1468535b8;
  puVar10 = (undefined8 *)AccountId::ToString(lVar15 + 0x90,local_f8);
  lVar15 = local_1e0;
  FUN_1405840c0(local_1e0);
  _guard_xfg_dispatch_icall_nop(&local_1d8);
  plVar12 = plVar13;
  if (1 < *(int *)(puVar10 + 1)) {
    lVar9 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                      (local_e8,*puVar10);
    plVar12 = (longlong *)_guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar9 + 0x88));
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  *(longlong **)(local_1d8 + 0x30) = plVar12;
  uVar11 = AccountId::ToString(lVar15,local_108);
  uVar11 = vx_fstrdup(uVar11);
  *(undefined8 *)(local_1d8 + 0x38) = uVar11;
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  local_158 = 0;
  local_150 = 0;
  if ((local_198 != 0) && (local_1a0 != (longlong *)0x0)) {
    (**(code **)(*local_1a0 + 0x30))(local_1a0,&local_158);
  }
  iVar6 = FUN_140584410(plVar8,local_1d8,&local_158);
  local_1e8 = CONCAT44(local_1e8._4_4_,iVar6);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1a0);
  if (local_f8[0] != 0) {
    FMemory::Free();
  }
  if (iVar6 == 0) {
    local_170 = (longlong *)operator_new(0x108);
    plVar8 = plVar13;
    if (local_170 != (longlong *)0x0) {
      local_170[1] = 0;
      local_170[2] = 0;
      local_170[3] = 2;
      local_170[4] = 0;
      local_170[5] = 0;
      local_170[6] = 2;
      local_170[7] = 0;
      local_170[8] = 0;
      local_170[9] = 2;
      *local_170 = (longlong)&PTR_FUN_143fc48b8;
      local_170[10] = 0;
      plVar8 = local_170 + 0xc;
      local_170[0xb] = 0;
      plVar12 = local_170 + 0xe;
      *plVar8 = 0;
      plVar1 = local_170 + 0x10;
      local_170[0xd] = 0;
      plVar2 = local_170 + 0x12;
      *plVar12 = 0;
      plVar3 = local_170 + 0x14;
      local_170[0xf] = 0;
      *plVar1 = 0;
      local_170[0x11] = 0;
      *plVar2 = 0;
      local_170[0x13] = 0;
      *plVar3 = 0;
      local_170[0x15] = 0;
      local_170[0x16] = 0;
      local_170[0x17] = 0;
      local_170[0x1a] = 0;
      local_170[0x1b] = 0;
      *(undefined4 *)(local_170 + 0x1c) = 0xffffffff;
      *(undefined4 *)((longlong)local_170 + 0xe4) = 0;
      local_170[0x1e] = 0;
      *(undefined4 *)(local_170 + 0x1f) = 0;
      local_170[0x20] = local_1a8;
      FString::operator=(local_170 + 10,local_1e0);
      FString::operator=(plVar8,local_1e0 + 0x10);
      FString::operator=(plVar12,local_1e0 + 0x20);
      lVar15 = local_1e0;
      FString::operator=(plVar1,local_1e0 + 0x30);
      FString::operator=(plVar2,lVar15 + 0x40);
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=(plVar3,lVar15 + 0x50);
      plVar8 = local_170;
      param_3 = local_168;
    }
    local_188 = plVar8;
    plVar12 = (longlong *)operator_new(0x18);
    if (plVar12 != (longlong *)0x0) {
      *(undefined4 *)(plVar12 + 1) = 1;
      *plVar12 = (longlong)&PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
      plVar12[2] = (longlong)plVar8;
      plVar13 = plVar12;
    }
    plStack_180 = plVar13;
    SharedPointerInternals::EnableSharedFromThis(&local_188,plVar8,plVar8);
    local_138 = local_188;
    plStack_130 = plStack_180;
    if (plStack_180 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_180 + 1) = (int)plStack_180[1] + 1;
      UNLOCK();
    }
    local_140 = &local_138;
    local_148 = lVar15;
    FUN_14056af00(local_160,local_174,&local_148,0);
    plVar13 = plStack_130;
    if (plStack_130 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_130 + 1;
      lVar15 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plStack_130)(plStack_130);
        LOCK();
        piVar7 = (int *)((longlong)plVar13 + 0xc);
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    plVar13 = plStack_180;
    if (plStack_180 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_180 + 1;
      lVar15 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plStack_180)(plStack_180);
        LOCK();
        piVar7 = (int *)((longlong)plVar13 + 0xc);
        iVar6 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    iVar6 = (int)local_1e8;
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar14 + 1;
    lVar15 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar7 = (int *)((longlong)plVar14 + 0xc);
      iVar4 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  if (local_1f0 != 0) {
    if (local_1f8 == (longlong *)0x0) goto LAB_14057417b;
    (**(code **)(*local_1f8 + 0x28))(local_1f8,0);
    if (local_1f8 != (longlong *)0x0) {
      local_1f8 = (longlong *)FMemory::Realloc(local_1f8,0,0);
    }
    local_1f0 = 0;
  }
  if (local_1f8 != (longlong *)0x0) {
    FMemory::Free(local_1f8);
  }
LAB_14057417b:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return iVar6;
}



// FUNCTION 1405741b0 FUN_1405741b0 body=920 status=ok
// SIG undefined FUN_1405741b0(void)

undefined4 FUN_1405741b0(longlong param_1,longlong **param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *local_b8;
  int local_b0;
  longlong local_a8;
  longlong *local_a0;
  int local_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80 [3];
  undefined4 local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  longlong *local_50;
  longlong local_40 [3];
  
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  plVar7 = (longlong *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x80,local_60)
  ;
  plVar3 = (longlong *)plVar7[1];
  lVar8 = *plVar7;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_58 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  plVar7 = plVar3 + 1;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar7 = (int)*plVar7 + 1;
    UNLOCK();
    LOCK();
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  local_a0 = (longlong *)0x0;
  local_98 = 0;
  local_a8 = param_1;
  if (((param_2 != &local_a0) && (*(int *)(param_2 + 1) != 0)) &&
     (plVar4 = *param_2, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_a0);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar7 = (int)*plVar7 + 1;
    UNLOCK();
  }
  local_90 = lVar8;
  local_88 = plVar3;
  plVar7 = (longlong *)FMemory::Realloc(0,0x40);
  local_50 = plVar7;
  if (plVar7 == (longlong *)0x0) {
    if (((local_b0 != 0) && (local_b8 != (longlong *)0x0)) &&
       ((**(code **)(*local_b8 + 0x28))(local_b8,0), local_b8 != (longlong *)0x0)) {
      local_b8 = (longlong *)FMemory::Realloc(local_b8,0,0);
    }
  }
  else {
    *plVar7 = (longlong)&PTR_GetPoolName_143fc52c0;
    plVar7[1] = local_a8;
    plVar7[2] = 0;
    *(undefined4 *)(plVar7 + 3) = 0;
    if (((&local_a0 != (longlong **)(plVar7 + 2)) && (local_98 != 0)) &&
       (local_a0 != (longlong *)0x0)) {
      (**(code **)(*local_a0 + 0x30))();
    }
    plVar7[4] = local_90;
    plVar7[5] = (longlong)local_88;
    local_88 = (longlong *)0x0;
    local_90 = 0;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[7] = lVar8;
    *plVar7 = (longlong)&PTR_GetPoolName_143fc5308;
    FUN_14057bc50(plVar7,&local_b8);
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_50 = (longlong *)FMemory::Realloc(plVar7,0,0);
    if (local_50 != (longlong *)0x0) {
      FMemory::Free(local_50);
    }
  }
  plVar7 = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_88 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a0);
  local_80[0] = 0;
  local_80[1] = 0;
  local_80[2] = 0;
  local_68 = 0;
  if ((local_b0 != 0) && (local_b8 != (longlong *)0x0)) {
    (**(code **)(*local_b8 + 0x30))(local_b8,local_80 + 2);
  }
  if ((DAT_1468535b8 == (undefined8 *)0x0) &&
     (puVar9 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = (undefined8 *)0x0,
     puVar9 != (undefined8 *)0x0)) {
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 2;
    DAT_1468535b8 = puVar9;
  }
  puVar9 = DAT_1468535b8;
  uVar10 = AccountId::ToString(param_1 + 0x90,local_40);
  uVar6 = FUN_14057b3e0(puVar9,uVar10,3,local_80,0,local_80 + 2);
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  if (local_80[0] != 0) {
    FMemory::Free();
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (local_b0 != 0) {
    if (local_b8 == (longlong *)0x0) goto LAB_14057451d;
    (**(code **)(*local_b8 + 0x28))(local_b8,0);
    if (local_b8 != (longlong *)0x0) {
      local_b8 = (longlong *)FMemory::Realloc(local_b8,0,0);
    }
    local_b0 = 0;
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free(local_b8);
  }
LAB_14057451d:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2);
  return uVar6;
}



// FUNCTION 140574550 FUN_140574550 body=1539 status=ok
// SIG undefined FUN_140574550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_140574550(longlong *param_1,byte param_2,byte param_3,char param_4,undefined8 *param_5,
                 longlong **param_6)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_238 [32];
  byte local_218;
  byte local_217;
  char local_216;
  longlong *local_210;
  int local_208;
  undefined8 *local_200;
  longlong local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  int local_1e0;
  longlong local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  int local_1c0;
  undefined8 *local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined **local_1a0;
  undefined1 local_198;
  longlong *local_190;
  undefined **local_188;
  undefined1 local_180;
  longlong *local_178;
  undefined1 local_170 [8];
  longlong *local_168;
  longlong *local_160;
  longlong local_150 [2];
  longlong local_140 [2];
  undefined1 local_130 [88];
  undefined1 local_d8 [128];
  longlong local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  local_1b8 = param_5;
  local_218 = param_2;
  local_217 = param_3;
  local_216 = param_4;
  if ((*(int *)(param_5 + 1) < 2) ||
     (((param_2 == 0 && (param_3 == 0)) || (cVar5 = FUN_140584270(param_1 + 0x28), cVar5 == '\0'))))
  {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_6);
    return 0x3f0;
  }
  cVar5 = (**(code **)(*param_1 + 0x20))(param_1);
  if (cVar5 != '\0') {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_6);
    return 0x3fb;
  }
  local_210 = (longlong *)0x0;
  local_208 = 0;
  plVar7 = (longlong *)
           TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x19,local_170);
  plVar3 = (longlong *)plVar7[1];
  local_1f8 = *plVar7;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (local_168 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_168 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_168)(local_168);
      LOCK();
      piVar1 = (int *)((longlong)local_168 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_168 + 8))(local_168,1);
      }
    }
  }
  plVar7 = plVar3 + 1;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar7 = (int)*plVar7 + 1;
    UNLOCK();
    LOCK();
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  local_1e8 = (longlong *)0x0;
  local_1e0 = 0;
  local_1f0 = param_1;
  if (((param_6 != &local_1e8) && (*(int *)(param_6 + 1) != 0)) &&
     (plVar4 = *param_6, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_1e8);
  }
  local_1d8 = local_1f8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar7 = (int)*plVar7 + 1;
    UNLOCK();
  }
  local_1d0 = plVar3;
  plVar7 = (longlong *)FMemory::Realloc(0,0x40);
  local_160 = plVar7;
  if (plVar7 == (longlong *)0x0) {
    if (((local_208 != 0) && (local_210 != (longlong *)0x0)) &&
       ((**(code **)(*local_210 + 0x28))(local_210,0), local_210 != (longlong *)0x0)) {
      local_210 = (longlong *)FMemory::Realloc(local_210,0,0);
    }
  }
  else {
    *plVar7 = (longlong)&PTR_GetPoolName_143fc4c90;
    plVar7[1] = (longlong)local_1f0;
    plVar7[2] = 0;
    *(undefined4 *)(plVar7 + 3) = 0;
    if (((&local_1e8 != (longlong **)(plVar7 + 2)) && (local_1e0 != 0)) &&
       (local_1e8 != (longlong *)0x0)) {
      (**(code **)(*local_1e8 + 0x30))();
    }
    plVar7[4] = local_1d8;
    plVar7[5] = (longlong)local_1d0;
    local_1d0 = (longlong *)0x0;
    local_1d8 = 0;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[7] = lVar8;
    *plVar7 = (longlong)&PTR_GetPoolName_143fc4cd8;
    FUN_14057b830(plVar7,&local_210);
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_160 = (longlong *)FMemory::Realloc(plVar7,0,0);
    if (local_160 != (longlong *)0x0) {
      FMemory::Free(local_160);
    }
  }
  plVar7 = local_1d0;
  if (local_1d0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_1d0 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_1d0)(local_1d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1e8);
  local_1c8 = (longlong *)0x0;
  local_1c0 = 0;
  if ((local_208 != 0) && (local_210 != (longlong *)0x0)) {
    (**(code **)(*local_210 + 0x30))(local_210,&local_1c8);
  }
  uVar9 = (**(code **)(*(longlong *)param_1[0x1b] + 0x48))();
  local_1f8 = AccountId::ToString(uVar9,local_140);
  uVar9 = VivoxNativeSdk::Get();
  FUN_140584270(param_1 + 0x28);
  _guard_xfg_dispatch_icall_nop(&local_200);
  if (*(int *)(local_1b8 + 1) < 2) {
    uVar10 = 0;
  }
  else {
    lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                      (local_d8,*local_1b8);
    uVar10 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar8 + 0x88));
    if (local_58 != 0) {
      FMemory::Free();
    }
  }
  local_200[0xe] = uVar10;
  uVar10 = vx_fstrdup(local_1f8);
  local_200[0xf] = uVar10;
  *(uint *)(local_200 + 10) = (uint)local_218;
  *(uint *)((longlong)local_200 + 0x5c) = (uint)local_217;
  uVar10 = vx_fstrdup(param_1 + 0x34);
  local_200[0xd] = uVar10;
  uVar10 = vx_fstrdup(param_1 + 0x32);
  local_200[6] = uVar10;
  uVar10 = FUN_14058a6b0(param_1 + 0x28,local_150);
  uVar10 = vx_fstrdup(uVar10);
  local_200[7] = uVar10;
  if (local_150[0] != 0) {
    FMemory::Free();
  }
  local_1b0 = 0;
  local_1a8 = 0;
  if ((local_1c0 != 0) && (local_1c8 != (longlong *)0x0)) {
    (**(code **)(*local_1c8 + 0x30))(local_1c8,&local_1b0);
  }
  iVar6 = FUN_140584410(uVar9,local_200,&local_1b0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1c8);
  if (local_140[0] != 0) {
    FMemory::Free();
  }
  if (iVar6 == 0) {
    if ((local_218 != 0) && ((char)param_1[0x1c] != '\x01')) {
      *(undefined1 *)(param_1 + 0x1c) = 1;
      local_1a0 = &PTR_FUN_143fc45e0;
      local_198 = 1;
      local_190 = param_1;
      TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 1,&local_1a0);
    }
    if ((local_217 != 0) && (*(char *)((longlong)param_1 + 0xe1) != '\x01')) {
      *(undefined1 *)((longlong)param_1 + 0xe1) = 1;
      local_188 = &PTR_FUN_143fc45e0;
      local_180 = 1;
      local_178 = param_1;
      TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 4,&local_188);
    }
    ChannelSession::SetChannelState(param_1,1);
    if (local_216 == '\0') {
      iVar6 = FUN_140588ac0();
    }
    else {
      lVar8 = *(longlong *)param_1[0x1b];
      uVar9 = ChannelId::ChannelId(local_130,param_1 + 0x28);
      iVar6 = (**(code **)(lVar8 + 0xe8))(param_1[0x1b],1,uVar9);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (local_208 != 0) {
    if (local_210 == (longlong *)0x0) goto LAB_140574aff;
    (**(code **)(*local_210 + 0x28))(local_210,0);
    if (local_210 != (longlong *)0x0) {
      local_210 = (longlong *)FMemory::Realloc(local_210,0,0);
    }
    local_208 = 0;
  }
  if (local_210 != (longlong *)0x0) {
    FMemory::Free(local_210);
  }
LAB_140574aff:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_6);
  return iVar6;
}



// FUNCTION 140574b60 FUN_140574b60 body=847 status=ok
// SIG undefined FUN_140574b60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_140574b60(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  int local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  int local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined1 local_178 [128];
  longlong local_f8;
  undefined1 local_d8 [128];
  longlong local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  if (1 < *(int *)(param_1 + 0x488)) {
    FUN_14057da00(param_3,0,param_1 + 0x480);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x498);
  *(int *)(param_1 + 0x498) = iVar1 + 1;
  if (*(int *)(param_1 + 0x49c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x490,iVar1);
  }
  plVar6 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x490));
  *plVar6 = 0;
  *(undefined4 *)(plVar6 + 1) = 0;
  if (((param_3 != plVar6) && ((int)param_3[1] != 0)) && ((longlong *)*param_3 != (longlong *)0x0))
  {
    (**(code **)(*(longlong *)*param_3 + 0x30))();
  }
  if (*(int *)(param_1 + 0x498) != 1) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
    return 0;
  }
  local_1b8 = (longlong *)0x0;
  local_1b0 = 0;
  plVar6 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar6 == (longlong *)0x0) {
    if (((local_1b0 != 0) && (local_1b8 != (longlong *)0x0)) &&
       ((**(code **)(*local_1b8 + 0x28))(local_1b8,0), local_1b8 != (longlong *)0x0)) {
      local_1b8 = (longlong *)FMemory::Realloc(local_1b8,0,0);
    }
  }
  else {
    plVar6[1] = param_1;
    *plVar6 = (longlong)&PTR_GetPoolName_143fc4ed0;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar6[3] = lVar3;
    *plVar6 = (longlong)&PTR_GetPoolName_143fc4f18;
    FUN_14057bb80(plVar6,&local_1b8);
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    lVar3 = FMemory::Realloc(plVar6,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  local_1a0 = (longlong *)0x0;
  local_198 = 0;
  if ((local_1b0 != 0) && (local_1b8 != (longlong *)0x0)) {
    (**(code **)(*local_1b8 + 0x30))(local_1b8,&local_1a0);
  }
  if ((DAT_1468535b8 == (undefined8 *)0x0) &&
     (puVar4 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = (undefined8 *)0x0,
     puVar4 != (undefined8 *)0x0)) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 2;
    DAT_1468535b8 = puVar4;
  }
  puVar4 = DAT_1468535b8;
  _guard_xfg_dispatch_icall_nop(&local_1a8);
  puVar8 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  lVar3 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_178,puVar7);
  uVar5 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar3 + 0x88));
  *(undefined8 *)(local_1a8 + 0xa8) = uVar5;
  if (local_f8 != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_2 + 1) != 0) {
    puVar8 = (undefined2 *)*param_2;
  }
  lVar3 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_d8,puVar8);
  uVar5 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar3 + 0x88));
  *(undefined8 *)(local_1a8 + 0x38) = uVar5;
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_190 = 0;
  local_188 = 0;
  if ((local_198 != 0) && (local_1a0 != (longlong *)0x0)) {
    (**(code **)(*local_1a0 + 0x30))(local_1a0,&local_190);
  }
  uVar2 = FUN_140584410(puVar4,local_1a8,&local_190);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1a0);
  if (local_1b0 != 0) {
    if (local_1b8 == (longlong *)0x0) goto LAB_140574e6d;
    (**(code **)(*local_1b8 + 0x28))(local_1b8,0);
    if (local_1b8 != (longlong *)0x0) {
      local_1b8 = (longlong *)FMemory::Realloc(local_1b8,0,0);
    }
    local_1b0 = 0;
  }
  if (local_1b8 != (longlong *)0x0) {
    FMemory::Free(local_1b8);
  }
LAB_140574e6d:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return uVar2;
}



// FUNCTION 140574eb0 FUN_140574eb0 body=1075 status=ok
// SIG undefined FUN_140574eb0(void)

int FUN_140574eb0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong **param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *local_b8;
  int local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  longlong *local_88;
  longlong local_78;
  longlong local_70 [2];
  longlong *local_60;
  int local_58;
  longlong local_50;
  longlong *local_48;
  
  if (*(char *)(param_1 + 0x290) != '\0') {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4);
    return 0x3fb;
  }
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  plVar7 = (longlong *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x80,local_98)
  ;
  plVar3 = (longlong *)plVar7[1];
  lVar8 = *plVar7;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_90 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  plVar7 = plVar3 + 1;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar7 = (int)*plVar7 + 1;
    UNLOCK();
    LOCK();
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  local_78 = param_1;
  FString::FString(local_70,param_3);
  local_60 = (longlong *)0x0;
  local_58 = 0;
  if (((param_4 != &local_60) && (*(int *)(param_4 + 1) != 0)) &&
     (plVar4 = *param_4, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_60);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar7 = (int)*plVar7 + 1;
    UNLOCK();
  }
  local_50 = lVar8;
  local_48 = plVar3;
  plVar7 = (longlong *)FMemory::Realloc(0,0x50);
  local_88 = plVar7;
  if (plVar7 == (longlong *)0x0) {
    if (((local_b0 != 0) && (local_b8 != (longlong *)0x0)) &&
       ((**(code **)(*local_b8 + 0x28))(local_b8,0), local_b8 != (longlong *)0x0)) {
      local_b8 = (longlong *)FMemory::Realloc(local_b8,0,0);
    }
  }
  else {
    *plVar7 = (longlong)&PTR_GetPoolName_143fc5110;
    plVar7[1] = local_78;
    FString::FString(plVar7 + 2,local_70);
    plVar7[4] = 0;
    *(undefined4 *)(plVar7 + 5) = 0;
    if (((&local_60 != (longlong **)(plVar7 + 4)) && (local_58 != 0)) &&
       (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x30))();
    }
    plVar7[6] = local_50;
    plVar7[7] = (longlong)local_48;
    local_48 = (longlong *)0x0;
    local_50 = 0;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[9] = lVar8;
    *plVar7 = (longlong)&PTR_GetPoolName_143fc5158;
    FUN_14057c030(plVar7,&local_b8);
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_88 = (longlong *)FMemory::Realloc(plVar7,0,0);
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
  }
  plVar7 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_60);
  if (local_70[0] != 0) {
    FMemory::Free();
  }
  local_a8 = 0;
  local_a0 = 0;
  if ((local_b0 != 0) && (local_b8 != (longlong *)0x0)) {
    (**(code **)(*local_b8 + 0x30))(local_b8,&local_a8);
  }
  iVar6 = FUN_140574b60(*(undefined8 *)(param_1 + 0x2b0),param_2,&local_a8);
  if (iVar6 == 0) {
    FUN_1405889a0(param_1,1);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar3 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if (local_b0 != 0) {
      if (local_b8 == (longlong *)0x0) goto LAB_1405752ac;
      (**(code **)(*local_b8 + 0x28))(local_b8,0);
      if (local_b8 != (longlong *)0x0) {
        local_b8 = (longlong *)FMemory::Realloc(local_b8,0,0);
      }
      local_b0 = 0;
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free(local_b8);
    }
LAB_1405752ac:
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4);
    return 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (local_b0 != 0) {
    if (local_b8 == (longlong *)0x0) goto LAB_14057521d;
    (**(code **)(*local_b8 + 0x28))(local_b8,0);
    if (local_b8 != (longlong *)0x0) {
      local_b8 = (longlong *)FMemory::Realloc(local_b8,0,0);
    }
    local_b0 = 0;
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free(local_b8);
  }
LAB_14057521d:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4);
  return iVar6;
}



// FUNCTION 1405752f0 FUN_1405752f0 body=1188 status=ok
// SIG undefined FUN_1405752f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1405752f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong *param_8)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_218 [32];
  undefined1 local_1f8;
  longlong *local_1f0;
  int local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a0 [8];
  longlong *local_198;
  longlong *local_190;
  longlong local_178;
  undefined1 local_170 [16];
  undefined1 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  local_1d8 = param_5;
  local_1d0 = param_6;
  local_1c8 = param_7;
  local_1f8 = param_4;
  local_1e0 = param_3;
  local_1b8 = param_2;
  if (*(char *)(param_1 + 0x290) != '\0') {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_8);
    return 0x3fb;
  }
  local_1f0 = (longlong *)0x0;
  local_1e8 = 0;
  puVar7 = (undefined8 *)
           TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x80,local_1a0);
  plVar3 = (longlong *)puVar7[1];
  local_1c0 = *puVar7;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (local_198 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_198 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_198)(local_198);
      LOCK();
      piVar1 = (int *)((longlong)local_198 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_198 + 8))(local_198,1);
      }
    }
  }
  plVar8 = plVar3 + 1;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar8 = (int)*plVar8 + 1;
    UNLOCK();
    LOCK();
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  local_178 = param_1;
  FString::FString(local_170,local_1e0);
  local_160 = local_1f8;
  local_158 = 0;
  local_150 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0xffffffff;
  local_124 = 0;
  local_118 = 0;
  local_110 = 0;
  FUN_14056fbf0(&local_158,local_1d8);
  local_108 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0xffffffff;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  FUN_14056fbf0(&local_108,local_1d0);
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0xffffffff;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_14056fbf0(&local_b8,local_1c8);
  local_68 = 0;
  local_60 = 0;
  if (((param_8 != &local_68) && ((int)param_8[1] != 0)) &&
     (plVar4 = (longlong *)*param_8, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_68);
  }
  local_58 = local_1c0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar8 = (int)*plVar8 + 1;
    UNLOCK();
  }
  local_50 = plVar3;
  plVar8 = (longlong *)FMemory::Realloc(0,0x150,0);
  local_190 = plVar8;
  if (plVar8 == (longlong *)0x0) {
    if (((local_1e8 != 0) && (local_1f0 != (longlong *)0x0)) &&
       ((**(code **)(*local_1f0 + 0x28))(local_1f0,0), local_1f0 != (longlong *)0x0)) {
      local_1f0 = (longlong *)FMemory::Realloc(local_1f0,0,0);
    }
  }
  else {
    FUN_14056c180(plVar8,&local_178);
    (**(code **)(*plVar8 + 0x30))(plVar8,&local_1f0);
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    local_190 = (longlong *)FMemory::Realloc(plVar8,0,0);
    if (local_190 != (longlong *)0x0) {
      FMemory::Free(local_190);
    }
  }
  FUN_14056ea00(&local_178);
  local_1b0 = 0;
  local_1a8 = 0;
  if ((local_1e8 != 0) && (local_1f0 != (longlong *)0x0)) {
    (**(code **)(*local_1f0 + 0x30))(local_1f0,&local_1b0);
  }
  iVar6 = FUN_140574b60(*(undefined8 *)(param_1 + 0x2b0),local_1b8,&local_1b0);
  if (iVar6 == 0) {
    FUN_1405889a0(param_1,1);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar3 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if (local_1e8 != 0) {
      if (local_1f0 == (longlong *)0x0) goto LAB_14057574e;
      (**(code **)(*local_1f0 + 0x28))(local_1f0,0);
      if (local_1f0 != (longlong *)0x0) {
        local_1f0 = (longlong *)FMemory::Realloc(local_1f0,0,0);
      }
      local_1e8 = 0;
    }
    if (local_1f0 != (longlong *)0x0) {
      FMemory::Free(local_1f0);
    }
LAB_14057574e:
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_8);
    return 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_1e8 != 0) {
    if (local_1f0 == (longlong *)0x0) goto LAB_1405756b9;
    (**(code **)(*local_1f0 + 0x28))(local_1f0,0);
    if (local_1f0 != (longlong *)0x0) {
      local_1f0 = (longlong *)FMemory::Realloc(local_1f0,0,0);
    }
    local_1e8 = 0;
  }
  if (local_1f0 != (longlong *)0x0) {
    FMemory::Free(local_1f0);
  }
LAB_1405756b9:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_8);
  return iVar6;
}



// FUNCTION 1405757a0 FUN_1405757a0 body=1278 status=ok
// SIG undefined FUN_1405757a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1405757a0(longlong param_1,undefined8 param_2,longlong **param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  int local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong *local_198;
  int local_190;
  longlong local_188;
  longlong *local_180;
  longlong *local_178;
  int local_170;
  undefined1 local_168 [8];
  longlong local_160;
  longlong local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined1 local_130 [8];
  longlong *local_128;
  longlong *local_120;
  longlong local_110 [2];
  longlong local_100 [3];
  undefined1 local_e8 [128];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_148 = param_1 + 0x1f0;
  local_160 = param_1;
  local_150 = param_2;
  piVar6 = (int *)TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
                  ::FindId(local_148,local_168,param_2);
  if (*piVar6 == -1) {
    if (((*(int *)(param_3 + 1) != 0) && (*param_3 != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(**param_3 + 0x18))(), cVar4 != '\0')) {
      if (*(int *)(param_3 + 1) == 0) {
        plVar14 = (longlong *)0x0;
      }
      else {
        plVar14 = *param_3;
      }
      (**(code **)(*plVar14 + 0x40))(plVar14,0);
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
    return 0;
  }
  puVar12 = (undefined8 *)0x0;
  local_1b8 = (longlong *)0x0;
  local_1b0 = 0;
  plVar7 = (longlong *)
           TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x80,local_130);
  plVar14 = (longlong *)plVar7[1];
  local_158 = *plVar7;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  if (local_128 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_128 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_128)(local_128);
      LOCK();
      piVar6 = (int *)((longlong)local_128 + 0xc);
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_128 + 8))(local_128,1);
      }
    }
  }
  plVar7 = plVar14 + 1;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar7 = (int)*plVar7 + 1;
    UNLOCK();
    LOCK();
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar6 = (int *)((longlong)plVar14 + 0xc);
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  lVar11 = local_160;
  local_1a0 = local_160;
  local_198 = (longlong *)0x0;
  local_190 = 0;
  if (((param_3 != &local_198) && (*(int *)(param_3 + 1) != 0)) &&
     (plVar2 = *param_3, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_198);
  }
  local_188 = local_158;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar7 = (int)*plVar7 + 1;
    UNLOCK();
  }
  local_180 = plVar14;
  plVar7 = (longlong *)FMemory::Realloc(0,0x40);
  local_120 = plVar7;
  if (plVar7 == (longlong *)0x0) {
    if (((local_1b0 != 0) && (local_1b8 != (longlong *)0x0)) &&
       ((**(code **)(*local_1b8 + 0x28))(local_1b8,0), local_1b8 != (longlong *)0x0)) {
      local_1b8 = (longlong *)FMemory::Realloc(local_1b8,0,0);
    }
  }
  else {
    *plVar7 = (longlong)&PTR_GetPoolName_143fc5350;
    plVar7[1] = local_1a0;
    plVar7[2] = 0;
    *(undefined4 *)(plVar7 + 3) = 0;
    if (((&local_198 != (longlong **)(plVar7 + 2)) && (local_190 != 0)) &&
       (local_198 != (longlong *)0x0)) {
      (**(code **)(*local_198 + 0x30))();
    }
    plVar7[4] = local_188;
    plVar7[5] = (longlong)local_180;
    local_180 = (longlong *)0x0;
    local_188 = 0;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[7] = lVar8;
    *plVar7 = (longlong)&PTR_GetPoolName_143fc5398;
    FUN_14057b710(plVar7,&local_1b8);
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_120 = (longlong *)FMemory::Realloc(plVar7,0,0);
    if (local_120 != (longlong *)0x0) {
      FMemory::Free(local_120);
    }
  }
  plVar7 = local_180;
  if (local_180 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_180 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_180)(local_180);
      LOCK();
      piVar6 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_198);
  local_178 = (longlong *)0x0;
  local_170 = 0;
  if ((local_1b0 != 0) && (local_1b8 != (longlong *)0x0)) {
    (**(code **)(*local_1b8 + 0x30))(local_1b8,&local_178);
  }
  if ((DAT_1468535b8 == (undefined8 *)0x0) &&
     (puVar9 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = puVar12,
     puVar9 != (undefined8 *)0x0)) {
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 2;
    DAT_1468535b8 = puVar9;
  }
  puVar9 = DAT_1468535b8;
  puVar10 = (undefined8 *)AccountId::ToString(lVar11 + 0x90,local_100);
  uVar3 = local_150;
  FUN_1405840c0(local_150);
  _guard_xfg_dispatch_icall_nop(&local_1a8);
  if (1 < *(int *)(puVar10 + 1)) {
    lVar11 = TStringConversion<FTCHARToUTF8_Convert,128>::
             TStringConversion<FTCHARToUTF8_Convert,128>(local_e8,*puVar10);
    puVar12 = (undefined8 *)_guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar11 + 0x88));
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  *(undefined8 **)(local_1a8 + 0x30) = puVar12;
  uVar13 = AccountId::ToString(uVar3,local_110);
  uVar13 = vx_fstrdup(uVar13);
  *(undefined8 *)(local_1a8 + 0x38) = uVar13;
  if (local_110[0] != 0) {
    FMemory::Free();
  }
  local_140 = 0;
  local_138 = 0;
  if ((local_170 != 0) && (local_178 != (longlong *)0x0)) {
    (**(code **)(*local_178 + 0x30))(local_178,&local_140);
  }
  iVar5 = FUN_140584410(puVar9,local_1a8,&local_140);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_178);
  if (local_100[0] != 0) {
    FMemory::Free();
  }
  if (iVar5 == 0) {
    TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
    ::Remove(local_148,uVar3);
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar14 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar6 = (int *)((longlong)plVar14 + 0xc);
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  if (local_1b0 != 0) {
    if (local_1b8 == (longlong *)0x0) goto LAB_140575c70;
    (**(code **)(*local_1b8 + 0x28))(local_1b8,0);
    if (local_1b8 != (longlong *)0x0) {
      local_1b8 = (longlong *)FMemory::Realloc(local_1b8,0,0);
    }
    local_1b0 = 0;
  }
  if (local_1b8 != (longlong *)0x0) {
    FMemory::Free(local_1b8);
  }
LAB_140575c70:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return iVar5;
}



// FUNCTION 140575ca0 FUN_140575ca0 body=1278 status=ok
// SIG undefined FUN_140575ca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_140575ca0(longlong param_1,undefined8 param_2,longlong **param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  int local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong *local_198;
  int local_190;
  longlong local_188;
  longlong *local_180;
  longlong *local_178;
  int local_170;
  undefined1 local_168 [8];
  longlong local_160;
  longlong local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined1 local_130 [8];
  longlong *local_128;
  longlong *local_120;
  longlong local_110 [2];
  longlong local_100 [3];
  undefined1 local_e8 [128];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_148 = param_1 + 0x1a0;
  local_160 = param_1;
  local_150 = param_2;
  piVar6 = (int *)TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
                  ::FindId(local_148,local_168,param_2);
  if (*piVar6 == -1) {
    if (((*(int *)(param_3 + 1) != 0) && (*param_3 != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(**param_3 + 0x18))(), cVar4 != '\0')) {
      if (*(int *)(param_3 + 1) == 0) {
        plVar14 = (longlong *)0x0;
      }
      else {
        plVar14 = *param_3;
      }
      (**(code **)(*plVar14 + 0x40))(plVar14,0);
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
    return 0;
  }
  puVar12 = (undefined8 *)0x0;
  local_1b8 = (longlong *)0x0;
  local_1b0 = 0;
  plVar7 = (longlong *)
           TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x80,local_130);
  plVar14 = (longlong *)plVar7[1];
  local_158 = *plVar7;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  if (local_128 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_128 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_128)(local_128);
      LOCK();
      piVar6 = (int *)((longlong)local_128 + 0xc);
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_128 + 8))(local_128,1);
      }
    }
  }
  plVar7 = plVar14 + 1;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar7 = (int)*plVar7 + 1;
    UNLOCK();
    LOCK();
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar6 = (int *)((longlong)plVar14 + 0xc);
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  lVar11 = local_160;
  local_1a0 = local_160;
  local_198 = (longlong *)0x0;
  local_190 = 0;
  if (((param_3 != &local_198) && (*(int *)(param_3 + 1) != 0)) &&
     (plVar2 = *param_3, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_198);
  }
  local_188 = local_158;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar7 = (int)*plVar7 + 1;
    UNLOCK();
  }
  local_180 = plVar14;
  plVar7 = (longlong *)FMemory::Realloc(0,0x40);
  local_120 = plVar7;
  if (plVar7 == (longlong *)0x0) {
    if (((local_1b0 != 0) && (local_1b8 != (longlong *)0x0)) &&
       ((**(code **)(*local_1b8 + 0x28))(local_1b8,0), local_1b8 != (longlong *)0x0)) {
      local_1b8 = (longlong *)FMemory::Realloc(local_1b8,0,0);
    }
  }
  else {
    *plVar7 = (longlong)&PTR_GetPoolName_143fc5350;
    plVar7[1] = local_1a0;
    plVar7[2] = 0;
    *(undefined4 *)(plVar7 + 3) = 0;
    if (((&local_198 != (longlong **)(plVar7 + 2)) && (local_190 != 0)) &&
       (local_198 != (longlong *)0x0)) {
      (**(code **)(*local_198 + 0x30))();
    }
    plVar7[4] = local_188;
    plVar7[5] = (longlong)local_180;
    local_180 = (longlong *)0x0;
    local_188 = 0;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[7] = lVar8;
    *plVar7 = (longlong)&PTR_GetPoolName_143fc5398;
    FUN_14057b710(plVar7,&local_1b8);
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_120 = (longlong *)FMemory::Realloc(plVar7,0,0);
    if (local_120 != (longlong *)0x0) {
      FMemory::Free(local_120);
    }
  }
  plVar7 = local_180;
  if (local_180 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_180 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_180)(local_180);
      LOCK();
      piVar6 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_198);
  local_178 = (longlong *)0x0;
  local_170 = 0;
  if ((local_1b0 != 0) && (local_1b8 != (longlong *)0x0)) {
    (**(code **)(*local_1b8 + 0x30))(local_1b8,&local_178);
  }
  if ((DAT_1468535b8 == (undefined8 *)0x0) &&
     (puVar9 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = puVar12,
     puVar9 != (undefined8 *)0x0)) {
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 2;
    DAT_1468535b8 = puVar9;
  }
  puVar9 = DAT_1468535b8;
  puVar10 = (undefined8 *)AccountId::ToString(lVar11 + 0x90,local_100);
  uVar3 = local_150;
  FUN_1405840c0(local_150);
  _guard_xfg_dispatch_icall_nop(&local_1a8);
  if (1 < *(int *)(puVar10 + 1)) {
    lVar11 = TStringConversion<FTCHARToUTF8_Convert,128>::
             TStringConversion<FTCHARToUTF8_Convert,128>(local_e8,*puVar10);
    puVar12 = (undefined8 *)_guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar11 + 0x88));
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  *(undefined8 **)(local_1a8 + 0x30) = puVar12;
  uVar13 = AccountId::ToString(uVar3,local_110);
  uVar13 = vx_fstrdup(uVar13);
  *(undefined8 *)(local_1a8 + 0x38) = uVar13;
  if (local_110[0] != 0) {
    FMemory::Free();
  }
  local_140 = 0;
  local_138 = 0;
  if ((local_170 != 0) && (local_178 != (longlong *)0x0)) {
    (**(code **)(*local_178 + 0x30))(local_178,&local_140);
  }
  iVar5 = FUN_140584410(puVar9,local_1a8,&local_140);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_178);
  if (local_100[0] != 0) {
    FMemory::Free();
  }
  if (iVar5 == 0) {
    TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
    ::Remove(local_148,uVar3);
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar14 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar6 = (int *)((longlong)plVar14 + 0xc);
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  if (local_1b0 != 0) {
    if (local_1b8 == (longlong *)0x0) goto LAB_140576170;
    (**(code **)(*local_1b8 + 0x28))(local_1b8,0);
    if (local_1b8 != (longlong *)0x0) {
      local_1b8 = (longlong *)FMemory::Realloc(local_1b8,0,0);
    }
    local_1b0 = 0;
  }
  if (local_1b8 != (longlong *)0x0) {
    FMemory::Free(local_1b8);
  }
LAB_140576170:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return iVar5;
}



// FUNCTION 1405761a0 FUN_1405761a0 body=1278 status=ok
// SIG undefined FUN_1405761a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1405761a0(longlong param_1,undefined8 param_2,longlong **param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  int local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong *local_198;
  int local_190;
  longlong local_188;
  longlong *local_180;
  longlong *local_178;
  int local_170;
  undefined1 local_168 [8];
  longlong local_160;
  longlong local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined1 local_130 [8];
  longlong *local_128;
  longlong *local_120;
  longlong local_110 [2];
  longlong local_100 [3];
  undefined1 local_e8 [128];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_148 = param_1 + 0x150;
  local_160 = param_1;
  local_150 = param_2;
  piVar6 = (int *)FUN_14057e160(local_148,local_168,param_2);
  if (*piVar6 == -1) {
    if (((*(int *)(param_3 + 1) != 0) && (*param_3 != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(**param_3 + 0x18))(), cVar4 != '\0')) {
      if (*(int *)(param_3 + 1) == 0) {
        plVar14 = (longlong *)0x0;
      }
      else {
        plVar14 = *param_3;
      }
      (**(code **)(*plVar14 + 0x40))(plVar14,0);
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
    return 0;
  }
  puVar12 = (undefined8 *)0x0;
  local_1b8 = (longlong *)0x0;
  local_1b0 = 0;
  plVar7 = (longlong *)
           TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x80,local_130);
  plVar14 = (longlong *)plVar7[1];
  local_158 = *plVar7;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  if (local_128 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_128 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_128)(local_128);
      LOCK();
      piVar6 = (int *)((longlong)local_128 + 0xc);
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_128 + 8))(local_128,1);
      }
    }
  }
  plVar7 = plVar14 + 1;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar7 = (int)*plVar7 + 1;
    UNLOCK();
    LOCK();
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar6 = (int *)((longlong)plVar14 + 0xc);
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  lVar11 = local_160;
  local_1a0 = local_160;
  local_198 = (longlong *)0x0;
  local_190 = 0;
  if (((param_3 != &local_198) && (*(int *)(param_3 + 1) != 0)) &&
     (plVar2 = *param_3, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_198);
  }
  local_188 = local_158;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar7 = (int)*plVar7 + 1;
    UNLOCK();
  }
  local_180 = plVar14;
  plVar7 = (longlong *)FMemory::Realloc(0,0x40);
  local_120 = plVar7;
  if (plVar7 == (longlong *)0x0) {
    if (((local_1b0 != 0) && (local_1b8 != (longlong *)0x0)) &&
       ((**(code **)(*local_1b8 + 0x28))(local_1b8,0), local_1b8 != (longlong *)0x0)) {
      local_1b8 = (longlong *)FMemory::Realloc(local_1b8,0,0);
    }
  }
  else {
    *plVar7 = (longlong)&PTR_GetPoolName_143fc5350;
    plVar7[1] = local_1a0;
    plVar7[2] = 0;
    *(undefined4 *)(plVar7 + 3) = 0;
    if (((&local_198 != (longlong **)(plVar7 + 2)) && (local_190 != 0)) &&
       (local_198 != (longlong *)0x0)) {
      (**(code **)(*local_198 + 0x30))();
    }
    plVar7[4] = local_188;
    plVar7[5] = (longlong)local_180;
    local_180 = (longlong *)0x0;
    local_188 = 0;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[7] = lVar8;
    *plVar7 = (longlong)&PTR_GetPoolName_143fc5398;
    FUN_14057b710(plVar7,&local_1b8);
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_120 = (longlong *)FMemory::Realloc(plVar7,0,0);
    if (local_120 != (longlong *)0x0) {
      FMemory::Free(local_120);
    }
  }
  plVar7 = local_180;
  if (local_180 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_180 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_180)(local_180);
      LOCK();
      piVar6 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_198);
  local_178 = (longlong *)0x0;
  local_170 = 0;
  if ((local_1b0 != 0) && (local_1b8 != (longlong *)0x0)) {
    (**(code **)(*local_1b8 + 0x30))(local_1b8,&local_178);
  }
  if ((DAT_1468535b8 == (undefined8 *)0x0) &&
     (puVar9 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = puVar12,
     puVar9 != (undefined8 *)0x0)) {
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 2;
    DAT_1468535b8 = puVar9;
  }
  puVar9 = DAT_1468535b8;
  puVar10 = (undefined8 *)AccountId::ToString(lVar11 + 0x90,local_100);
  uVar3 = local_150;
  FUN_1405840c0(local_150);
  _guard_xfg_dispatch_icall_nop(&local_1a8);
  if (1 < *(int *)(puVar10 + 1)) {
    lVar11 = TStringConversion<FTCHARToUTF8_Convert,128>::
             TStringConversion<FTCHARToUTF8_Convert,128>(local_e8,*puVar10);
    puVar12 = (undefined8 *)_guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar11 + 0x88));
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  *(undefined8 **)(local_1a8 + 0x30) = puVar12;
  uVar13 = AccountId::ToString(uVar3,local_110);
  uVar13 = vx_fstrdup(uVar13);
  *(undefined8 *)(local_1a8 + 0x38) = uVar13;
  if (local_110[0] != 0) {
    FMemory::Free();
  }
  local_140 = 0;
  local_138 = 0;
  if ((local_170 != 0) && (local_178 != (longlong *)0x0)) {
    (**(code **)(*local_178 + 0x30))(local_178,&local_140);
  }
  iVar5 = FUN_140584410(puVar9,local_1a8,&local_140);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_178);
  if (local_100[0] != 0) {
    FMemory::Free();
  }
  if (iVar5 == 0) {
    FUN_140586c80(local_148,uVar3);
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar14 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar6 = (int *)((longlong)plVar14 + 0xc);
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  if (local_1b0 != 0) {
    if (local_1b8 == (longlong *)0x0) goto LAB_140576670;
    (**(code **)(*local_1b8 + 0x28))(local_1b8,0);
    if (local_1b8 != (longlong *)0x0) {
      local_1b8 = (longlong *)FMemory::Realloc(local_1b8,0,0);
    }
    local_1b0 = 0;
  }
  if (local_1b8 != (longlong *)0x0) {
    FMemory::Free(local_1b8);
  }
LAB_140576670:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return iVar5;
}



// FUNCTION 1405766a0 FUN_1405766a0 body=1265 status=ok
// SIG undefined FUN_1405766a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_1405766a0(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
             undefined8 param_5,longlong param_6,longlong *param_7)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  longlong *local_1c0;
  int local_1b8;
  longlong *local_1b0;
  int local_1a8;
  longlong local_1a0;
  longlong local_198;
  undefined4 local_190;
  longlong local_188;
  longlong *local_180;
  longlong local_178;
  undefined8 local_170;
  undefined8 *local_168;
  longlong local_160;
  undefined8 local_158;
  longlong local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined1 local_138 [8];
  longlong *local_130;
  longlong *local_128;
  longlong local_118 [2];
  longlong local_108 [2];
  undefined1 local_f8 [128];
  longlong local_78;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  local_158 = param_5;
  local_160 = param_6;
  local_170 = param_2;
  local_168 = param_3;
  local_150 = param_4;
  cVar5 = FUN_1405840c0(param_2);
  if ((cVar5 == '\0') || ((*(int *)(param_4 + 8) < 2 && (*(int *)(param_6 + 8) < 2)))) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_7);
    return 0x3f0;
  }
  if (*(char *)(param_1 + 0x318) == '\0') {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_7);
    return 0x1392;
  }
  local_1c0 = (longlong *)0x0;
  local_1b8 = 0;
  plVar7 = (longlong *)
           TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x80,local_138);
  plVar3 = (longlong *)plVar7[1];
  local_178 = *plVar7;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (local_130 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_130 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar1 = (int *)((longlong)local_130 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_130 + 8))(local_130,1);
      }
    }
  }
  plVar7 = plVar3 + 1;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar7 = (int)*plVar7 + 1;
    UNLOCK();
    LOCK();
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  local_198 = 0;
  local_190 = 0;
  local_1a0 = param_1;
  if (((param_7 != &local_198) && ((int)param_7[1] != 0)) &&
     (plVar4 = (longlong *)*param_7, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_198);
  }
  local_188 = local_178;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar7 = (int)*plVar7 + 1;
    UNLOCK();
  }
  local_180 = plVar3;
  plVar7 = (longlong *)FMemory::Realloc(0,0x40);
  local_128 = plVar7;
  if (plVar7 == (longlong *)0x0) {
    if (((local_1b8 != 0) && (local_1c0 != (longlong *)0x0)) &&
       ((**(code **)(*local_1c0 + 0x28))(local_1c0,0), local_1c0 != (longlong *)0x0)) {
      local_1c0 = (longlong *)FMemory::Realloc(local_1c0,0,0);
    }
  }
  else {
    *plVar7 = (longlong)&PTR_GetPoolName_143fc53e0;
    plVar7[1] = local_1a0;
    plVar7[2] = 0;
    *(undefined4 *)(plVar7 + 3) = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(plVar7 + 2,&local_198);
    plVar7[4] = local_188;
    plVar7[5] = (longlong)local_180;
    local_180 = (longlong *)0x0;
    local_188 = 0;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[7] = lVar8;
    *plVar7 = (longlong)&PTR_GetPoolName_143fc5428;
    FUN_14057baf0(plVar7,&local_1c0);
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_128 = (longlong *)FMemory::Realloc(plVar7,0,0);
    if (local_128 != (longlong *)0x0) {
      FMemory::Free(local_128);
    }
  }
  plVar7 = local_180;
  if (local_180 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_180 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_180)(local_180);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_198);
  local_1b0 = (longlong *)0x0;
  local_1a8 = 0;
  if ((local_1b8 != 0) && (local_1c0 != (longlong *)0x0)) {
    (**(code **)(*local_1c0 + 0x30))(local_1c0,&local_1b0);
  }
  uVar9 = AccountId::ToString(param_1 + 0x90,local_108);
  uVar10 = VivoxNativeSdk::Get();
  uVar12 = local_170;
  FUN_1405840c0(local_170);
  _guard_xfg_dispatch_icall_nop(&local_1c8);
  if (*(int *)(local_168 + 1) < 2) {
    uVar11 = 0;
  }
  else {
    lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                      (local_f8,*local_168);
    uVar11 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar8 + 0x88));
    if (local_78 != 0) {
      FMemory::Free();
    }
  }
  *(undefined8 *)(local_1c8 + 0x58) = uVar11;
  uVar9 = vx_fstrdup(uVar9);
  *(undefined8 *)(local_1c8 + 0x30) = uVar9;
  uVar9 = vx_fstrdup(local_160);
  *(undefined8 *)(local_1c8 + 0x68) = uVar9;
  uVar9 = vx_fstrdup(local_158);
  *(undefined8 *)(local_1c8 + 0x60) = uVar9;
  uVar9 = vx_fstrdup(local_150);
  *(undefined8 *)(local_1c8 + 0x48) = uVar9;
  uVar12 = AccountId::ToString(uVar12,local_118);
  uVar12 = vx_fstrdup(uVar12);
  *(undefined8 *)(local_1c8 + 0x38) = uVar12;
  if (local_118[0] != 0) {
    FMemory::Free();
  }
  local_148 = 0;
  local_140 = 0;
  if ((local_1a8 != 0) && (local_1b0 != (longlong *)0x0)) {
    (**(code **)(*local_1b0 + 0x30))(local_1b0,&local_148);
  }
  uVar6 = FUN_140584410(uVar10,local_1c8,&local_148);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1b0);
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (local_1b8 != 0) {
    if (local_1c0 == (longlong *)0x0) goto LAB_140576b4a;
    (**(code **)(*local_1c0 + 0x28))(local_1c0,0);
    if (local_1c0 != (longlong *)0x0) {
      local_1c0 = (longlong *)FMemory::Realloc(local_1c0,0,0);
    }
    local_1b8 = 0;
  }
  if (local_1c0 != (longlong *)0x0) {
    FMemory::Free(local_1c0);
  }
LAB_140576b4a:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_7);
  return uVar6;
}



// FUNCTION 140576ba0 FUN_140576ba0 body=254 status=ok
// SIG undefined FUN_140576ba0(void)

undefined4 FUN_140576ba0(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong local_48;
  undefined4 local_40;
  longlong local_38 [6];
  
  local_48 = 0;
  local_40 = 0;
  if (((param_4 != &local_48) && ((int)param_4[1] != 0)) &&
     (plVar1 = (longlong *)*param_4, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_48);
  }
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  uVar2 = (**(code **)(*param_1 + 200))
                    (param_1,param_2,local_38,param_3,local_38 + 2,local_38 + 4,&local_48);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  if (local_38[4] != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4);
  return uVar2;
}



// FUNCTION 140576ca0 FUN_140576ca0 body=856 status=ok
// SIG undefined FUN_140576ca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_140576ca0(longlong param_1,undefined8 param_2,byte *param_3,longlong **param_4)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_168 [32];
  longlong *local_148;
  int local_140;
  longlong local_138;
  longlong local_130;
  longlong *local_128;
  int local_120;
  longlong *local_118;
  int local_110;
  undefined8 local_108;
  undefined4 local_100;
  longlong local_f8 [2];
  undefined1 local_e8 [128];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  cVar2 = FUN_1405840c0(param_2);
  if ((cVar2 == '\0') || (bVar1 = *param_3, 1 < bVar1)) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4);
    return 0x3f0;
  }
  puVar8 = (undefined8 *)0x0;
  local_148 = (longlong *)0x0;
  local_140 = 0;
  local_128 = (longlong *)0x0;
  local_120 = 0;
  local_130 = param_1;
  if (((param_4 != &local_128) && (*(int *)(param_4 + 1) != 0)) &&
     (plVar4 = *param_4, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_128);
  }
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 == (longlong *)0x0) {
    if (((local_140 != 0) && (local_148 != (longlong *)0x0)) &&
       ((**(code **)(*local_148 + 0x28))(local_148,0), local_148 != (longlong *)0x0)) {
      local_148 = (longlong *)FMemory::Realloc(local_148,0,0);
    }
  }
  else {
    *plVar4 = (longlong)&PTR_GetPoolName_143fc5470;
    plVar4[1] = local_130;
    plVar4[2] = 0;
    *(undefined4 *)(plVar4 + 3) = 0;
    if (((&local_128 != (longlong **)(plVar4 + 2)) && (local_120 != 0)) &&
       (local_128 != (longlong *)0x0)) {
      (**(code **)(*local_128 + 0x30))();
    }
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
    *plVar4 = (longlong)&PTR_GetPoolName_143fc54b8;
    FUN_14057b690(plVar4,&local_148);
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    lVar5 = FMemory::Realloc(plVar4,0,0);
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_128);
  local_118 = (longlong *)0x0;
  local_110 = 0;
  if ((local_140 != 0) && (local_148 != (longlong *)0x0)) {
    (**(code **)(*local_148 + 0x30))(local_148,&local_118);
  }
  if ((DAT_1468535b8 == (undefined8 *)0x0) &&
     (puVar6 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = puVar8, puVar6 != (undefined8 *)0x0
     )) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 2;
    DAT_1468535b8 = puVar6;
  }
  puVar6 = DAT_1468535b8;
  puVar7 = (undefined8 *)AccountId::ToString(param_1 + 0x90,&local_130);
  FUN_1405840c0(param_2);
  _guard_xfg_dispatch_icall_nop(&local_138);
  if (1 < *(int *)(puVar7 + 1)) {
    lVar5 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                      (local_e8,*puVar7);
    puVar8 = (undefined8 *)_guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar5 + 0x88));
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  *(undefined8 **)(local_138 + 0x30) = puVar8;
  uVar9 = AccountId::ToString(param_2,local_f8);
  uVar9 = vx_fstrdup(uVar9);
  *(undefined8 *)(local_138 + 0x40) = uVar9;
  if (local_f8[0] != 0) {
    FMemory::Free();
  }
  local_108 = 0;
  local_100 = 0;
  *(uint *)(local_138 + 0x38) = (bVar1 != 0) + 1;
  if ((local_110 != 0) && (local_118 != (longlong *)0x0)) {
    (**(code **)(*local_118 + 0x30))(local_118,&local_108);
  }
  uVar3 = FUN_140584410(puVar6,local_138,&local_108);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_118);
  if (local_130 != 0) {
    FMemory::Free();
  }
  if (local_140 != 0) {
    if (local_148 == (longlong *)0x0) goto LAB_140576fbc;
    (**(code **)(*local_148 + 0x28))(local_148,0);
    if (local_148 != (longlong *)0x0) {
      local_148 = (longlong *)FMemory::Realloc(local_148,0,0);
    }
    local_140 = 0;
  }
  if (local_148 != (longlong *)0x0) {
    FMemory::Free(local_148);
  }
LAB_140576fbc:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4);
  return uVar3;
}



// FUNCTION 140577000 FUN_140577000 body=1243 status=ok
// SIG undefined FUN_140577000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_140577000(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,longlong **param_6)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 auStack_1c8 [32];
  longlong *local_1a8;
  int local_1a0;
  longlong local_198;
  longlong *local_190;
  longlong *local_188;
  int local_180;
  longlong local_178;
  longlong *local_170;
  longlong *local_168;
  int local_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined1 local_120 [8];
  longlong *local_118;
  longlong *local_110;
  undefined1 local_f8 [128];
  longlong local_78;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_150 = param_5;
  local_148 = param_4;
  local_140 = param_2;
  local_138 = param_3;
  if (*(int *)(param_3 + 8) < 2) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_6);
    return 0x3f0;
  }
  cVar5 = (**(code **)(*param_1 + 0x18))(param_1);
  if (cVar5 != '\x02') {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_6);
    return 0x3fb;
  }
  local_1a8 = (longlong *)0x0;
  local_1a0 = 0;
  plVar7 = (longlong *)
           TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x19,local_120);
  plVar3 = (longlong *)plVar7[1];
  local_158 = *plVar7;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_118 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar1 = (int *)((longlong)local_118 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_118 + 8))(local_118,1);
      }
    }
  }
  plVar7 = plVar3 + 1;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar7 = (int)*plVar7 + 1;
    UNLOCK();
    LOCK();
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  puVar10 = (undefined8 *)0x0;
  local_188 = (longlong *)0x0;
  local_180 = 0;
  local_190 = param_1;
  if (((param_6 != &local_188) && (*(int *)(param_6 + 1) != 0)) &&
     (plVar4 = *param_6, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_188);
  }
  local_178 = local_158;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar7 = (int)*plVar7 + 1;
    UNLOCK();
  }
  local_170 = plVar3;
  plVar7 = (longlong *)FMemory::Realloc(0,0x40);
  local_110 = plVar7;
  if (plVar7 == (longlong *)0x0) {
    if (((local_1a0 != 0) && (local_1a8 != (longlong *)0x0)) &&
       ((**(code **)(*local_1a8 + 0x28))(local_1a8,0), local_1a8 != (longlong *)0x0)) {
      local_1a8 = (longlong *)FMemory::Realloc(local_1a8,0,0);
    }
  }
  else {
    *plVar7 = (longlong)&PTR_GetPoolName_143fc4db0;
    plVar7[1] = (longlong)local_190;
    plVar7[2] = 0;
    *(undefined4 *)(plVar7 + 3) = 0;
    if (((&local_188 != (longlong **)(plVar7 + 2)) && (local_180 != 0)) &&
       (local_188 != (longlong *)0x0)) {
      (**(code **)(*local_188 + 0x30))();
    }
    plVar7[4] = local_178;
    plVar7[5] = (longlong)local_170;
    local_170 = (longlong *)0x0;
    local_178 = 0;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[7] = lVar8;
    *plVar7 = (longlong)&PTR_GetPoolName_143fc4df8;
    FUN_14057b600(plVar7,&local_1a8);
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_110 = (longlong *)FMemory::Realloc(plVar7,0,0);
    if (local_110 != (longlong *)0x0) {
      FMemory::Free(local_110);
    }
  }
  plVar7 = local_170;
  if (local_170 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_170 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_170)(local_170);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_188);
  local_168 = (longlong *)0x0;
  local_160 = 0;
  if ((local_1a0 != 0) && (local_1a8 != (longlong *)0x0)) {
    (**(code **)(*local_1a8 + 0x30))(local_1a8,&local_168);
  }
  if ((DAT_1468535b8 == (undefined8 *)0x0) &&
     (puVar9 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = puVar10,
     puVar9 != (undefined8 *)0x0)) {
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 2;
    DAT_1468535b8 = puVar9;
  }
  puVar9 = DAT_1468535b8;
  _guard_xfg_dispatch_icall_nop(&local_198);
  if (1 < (int)param_1[0x35]) {
    lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                      (local_f8,param_1[0x34]);
    puVar10 = (undefined8 *)_guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar8 + 0x88));
    if (local_78 != 0) {
      FMemory::Free();
    }
  }
  *(undefined8 **)(local_198 + 0x30) = puVar10;
  uVar11 = vx_fstrdup(local_150);
  *(undefined8 *)(local_198 + 0x58) = uVar11;
  uVar11 = vx_fstrdup(local_148);
  *(undefined8 *)(local_198 + 0x50) = uVar11;
  uVar11 = vx_fstrdup(local_140);
  *(undefined8 *)(local_198 + 0x48) = uVar11;
  uVar11 = vx_fstrdup(local_138);
  local_130 = 0;
  local_128 = 0;
  *(undefined8 *)(local_198 + 0x40) = uVar11;
  if ((local_160 != 0) && (local_168 != (longlong *)0x0)) {
    (**(code **)(*local_168 + 0x30))(local_168,&local_130);
  }
  uVar6 = FUN_140584410(puVar9,local_198,&local_130);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_168);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar3 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (local_1a0 != 0) {
    if (local_1a8 == (longlong *)0x0) goto LAB_1405774a8;
    (**(code **)(*local_1a8 + 0x28))(local_1a8,0);
    if (local_1a8 != (longlong *)0x0) {
      local_1a8 = (longlong *)FMemory::Realloc(local_1a8,0,0);
    }
    local_1a0 = 0;
  }
  if (local_1a8 != (longlong *)0x0) {
    FMemory::Free(local_1a8);
  }
LAB_1405774a8:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_6);
  return uVar6;
}



// FUNCTION 1405774e0 FUN_1405774e0 body=226 status=ok
// SIG undefined FUN_1405774e0(void)

undefined4 FUN_1405774e0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong local_48;
  undefined4 local_40;
  longlong local_38 [6];
  
  local_48 = 0;
  local_40 = 0;
  if (((param_3 != &local_48) && ((int)param_3[1] != 0)) &&
     (plVar1 = (longlong *)*param_3, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_48);
  }
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  uVar2 = (**(code **)(*param_1 + 0x78))
                    (param_1,local_38,param_2,local_38 + 2,local_38 + 4,&local_48);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  if (local_38[4] != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return uVar2;
}



// FUNCTION 1405775d0 FUN_1405775d0 body=2468 status=ok
// SIG undefined FUN_1405775d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1405775d0(longlong param_1,char param_2,char param_3,longlong **param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 auStack_328 [32];
  longlong *local_308;
  int local_300;
  longlong *local_2f8;
  int local_2f0;
  longlong *local_2e8;
  longlong *local_2e0;
  longlong local_2d8;
  longlong *local_2d0;
  int local_2c8;
  longlong *local_2c0;
  longlong *local_2b8;
  longlong local_2b0;
  longlong *local_2a8;
  int local_2a0;
  longlong *local_298;
  longlong *local_290;
  longlong local_288;
  longlong local_280;
  longlong *local_278;
  int local_270;
  longlong *local_268;
  int local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined **local_238;
  undefined1 local_230;
  longlong local_228;
  undefined1 local_220 [8];
  longlong *local_218;
  longlong *local_210;
  undefined1 local_200 [8];
  longlong *local_1f8;
  longlong *local_1f0;
  undefined1 local_1e0 [88];
  undefined1 local_188 [128];
  longlong local_108;
  undefined1 local_e8 [128];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  if ((param_2 != '\0') && (param_3 != '\0')) {
    lVar8 = **(longlong **)(param_1 + 0xd8);
    uVar6 = ChannelId::ChannelId(local_1e0,param_1 + 0x140);
    (**(code **)(lVar8 + 0xe8))(*(undefined8 *)(param_1 + 0xd8),1,uVar6);
  }
  cVar4 = *(char *)(param_1 + 0xe0);
  if (param_2 == '\0') {
    if ((cVar4 == '\0') || (cVar4 == '\x03')) goto LAB_140577efe;
    FUN_14057b010(*(undefined8 *)(param_1 + 0xd8),param_1 + 0x140);
    puVar9 = (undefined8 *)0x0;
    local_2f8 = (longlong *)0x0;
    local_2f0 = 0;
    puVar10 = (undefined8 *)
              TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 200,local_200);
    plVar11 = (longlong *)puVar10[1];
    local_2e8 = (longlong *)*puVar10;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_2e0 = local_1f8;
    if (local_1f8 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_1f8 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_1f8)();
        LOCK();
        piVar1 = (int *)((longlong)local_2e0 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_2e0 + 8))(local_2e0,1);
        }
      }
    }
    plVar7 = plVar11 + 1;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar7 = (int)*plVar7 + 1;
      UNLOCK();
      LOCK();
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    local_2a8 = (longlong *)0x0;
    local_2a0 = 0;
    local_2b0 = param_1;
    if (((param_4 != &local_2a8) && (*(int *)(param_4 + 1) != 0)) &&
       (plVar3 = *param_4, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_2a8);
    }
    local_298 = local_2e8;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar7 = (int)*plVar7 + 1;
      UNLOCK();
    }
    local_290 = plVar11;
    plVar7 = (longlong *)FMemory::Realloc(0,0x40);
    local_1f0 = plVar7;
    if (plVar7 == (longlong *)0x0) {
      if (((local_2f0 != 0) && (local_2f8 != (longlong *)0x0)) &&
         ((**(code **)(*local_2f8 + 0x28))(local_2f8,0), local_2f8 != (longlong *)0x0)) {
        local_2f8 = (longlong *)FMemory::Realloc(local_2f8,0,0);
      }
    }
    else {
      *plVar7 = (longlong)&PTR_GetPoolName_143fc4db0;
      plVar7[1] = local_2b0;
      plVar7[2] = 0;
      *(undefined4 *)(plVar7 + 3) = 0;
      if (((&local_2a8 != (longlong **)(plVar7 + 2)) && (local_2a0 != 0)) &&
         (local_2a8 != (longlong *)0x0)) {
        (**(code **)(*local_2a8 + 0x30))();
      }
      plVar7[4] = (longlong)local_298;
      plVar7[5] = (longlong)local_290;
      local_290 = (longlong *)0x0;
      local_298 = (longlong *)0x0;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[7] = lVar8;
      *plVar7 = (longlong)&PTR_GetPoolName_143fc4df8;
      FUN_14057b600(plVar7,&local_2f8);
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      local_1f0 = (longlong *)FMemory::Realloc(plVar7,0,0);
      if (local_1f0 != (longlong *)0x0) {
        FMemory::Free(local_1f0);
      }
    }
    plVar7 = local_290;
    if (local_290 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_290 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_290)(local_290);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2a8);
    local_268 = (longlong *)0x0;
    local_260 = 0;
    if ((local_2f0 != 0) && (local_2f8 != (longlong *)0x0)) {
      (**(code **)(*local_2f8 + 0x30))(local_2f8,&local_268);
    }
    if ((DAT_1468535b8 == (undefined8 *)0x0) &&
       (puVar10 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = puVar9,
       puVar10 != (undefined8 *)0x0)) {
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 2;
      DAT_1468535b8 = puVar10;
    }
    puVar10 = DAT_1468535b8;
    _guard_xfg_dispatch_icall_nop(&local_280);
    if (1 < *(int *)(param_1 + 0x1a8)) {
      lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::
              TStringConversion<FTCHARToUTF8_Convert,128>(local_e8,*(undefined8 *)(param_1 + 0x1a0))
      ;
      puVar9 = (undefined8 *)_guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar8 + 0x88));
      if (local_68 != 0) {
        FMemory::Free();
      }
    }
    local_248 = 0;
    local_240 = 0;
    *(undefined8 **)(local_280 + 0x38) = puVar9;
    if ((local_260 != 0) && (local_268 != (longlong *)0x0)) {
      (**(code **)(*local_268 + 0x30))(local_268,&local_248);
    }
    iVar5 = FUN_140584410(puVar10,local_280,&local_248);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_268);
    if (iVar5 != 0) {
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar11 + 1;
        lVar8 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      plVar11 = local_2f8;
      if (local_2f0 != 0) {
        if (local_2f8 == (longlong *)0x0) goto LAB_140577a08;
        (**(code **)(*local_2f8 + 0x28))(local_2f8,0);
        if (local_2f8 != (longlong *)0x0) {
          local_2f8 = (longlong *)FMemory::Realloc(local_2f8,0,0);
        }
        local_2f0 = 0;
        plVar11 = local_2f8;
      }
      goto LAB_1405779fb;
    }
    FUN_140587da0(param_1,3);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar11 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    plVar11 = local_2f8;
    if (local_2f0 != 0) {
      if (local_2f8 == (longlong *)0x0) goto LAB_140577f34;
      (**(code **)(*local_2f8 + 0x28))(local_2f8,0);
      if (local_2f8 != (longlong *)0x0) {
        local_2f8 = (longlong *)FMemory::Realloc(local_2f8,0,0);
      }
      local_2f0 = 0;
      plVar11 = local_2f8;
    }
  }
  else {
    if ((byte)(cVar4 - 1U) < 2) {
LAB_140577efe:
      if (((*(int *)(param_4 + 1) != 0) && (*param_4 != (longlong *)0x0)) &&
         (cVar4 = (**(code **)(**param_4 + 0x18))(), cVar4 != '\0')) {
        if (*(int *)(param_4 + 1) == 0) {
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = *param_4;
        }
        (**(code **)(*plVar11 + 0x40))(plVar11,0);
      }
      goto LAB_140577f34;
    }
    puVar10 = (undefined8 *)0x0;
    local_308 = (longlong *)0x0;
    local_300 = 0;
    local_2e0 = (longlong *)
                TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 200,local_220);
    plVar11 = (longlong *)local_2e0[1];
    local_2e0 = (longlong *)*local_2e0;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_2e8 = local_218;
    if (local_218 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_218 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_218)();
        LOCK();
        piVar1 = (int *)((longlong)local_2e8 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_2e8 + 8))(local_2e8,1);
        }
      }
    }
    plVar7 = plVar11 + 1;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar7 = (int)*plVar7 + 1;
      UNLOCK();
      LOCK();
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    local_2d0 = (longlong *)0x0;
    local_2c8 = 0;
    local_2d8 = param_1;
    if (((param_4 != &local_2d0) && (*(int *)(param_4 + 1) != 0)) &&
       (plVar3 = *param_4, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_2d0);
    }
    local_2c0 = local_2e0;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar7 = (int)*plVar7 + 1;
      UNLOCK();
    }
    local_2b8 = plVar11;
    plVar7 = (longlong *)FMemory::Realloc(0,0x40);
    local_210 = plVar7;
    if (plVar7 == (longlong *)0x0) {
      if (((local_300 != 0) && (local_308 != (longlong *)0x0)) &&
         ((**(code **)(*local_308 + 0x28))(local_308,0), local_308 != (longlong *)0x0)) {
        local_308 = (longlong *)FMemory::Realloc(local_308,0,0);
      }
    }
    else {
      *plVar7 = (longlong)&PTR_GetPoolName_143fc4db0;
      plVar7[1] = local_2d8;
      plVar7[2] = 0;
      *(undefined4 *)(plVar7 + 3) = 0;
      if (((&local_2d0 != (longlong **)(plVar7 + 2)) && (local_2c8 != 0)) &&
         (local_2d0 != (longlong *)0x0)) {
        (**(code **)(*local_2d0 + 0x30))();
      }
      plVar7[4] = (longlong)local_2c0;
      plVar7[5] = (longlong)local_2b8;
      local_2b8 = (longlong *)0x0;
      local_2c0 = (longlong *)0x0;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[7] = lVar8;
      *plVar7 = (longlong)&PTR_GetPoolName_143fc4df8;
      FUN_14057b600(plVar7,&local_308);
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      local_210 = (longlong *)FMemory::Realloc(plVar7,0,0);
      if (local_210 != (longlong *)0x0) {
        FMemory::Free(local_210);
      }
    }
    plVar7 = local_2b8;
    if (local_2b8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_2b8 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_2b8)(local_2b8);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2d0);
    local_278 = (longlong *)0x0;
    local_270 = 0;
    if ((local_300 != 0) && (local_308 != (longlong *)0x0)) {
      (**(code **)(*local_308 + 0x30))(local_308,&local_278);
    }
    if ((DAT_1468535b8 == (undefined8 *)0x0) &&
       (puVar9 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = puVar10,
       puVar9 != (undefined8 *)0x0)) {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 2;
      DAT_1468535b8 = puVar9;
    }
    puVar9 = DAT_1468535b8;
    _guard_xfg_dispatch_icall_nop(&local_288);
    if (1 < *(int *)(param_1 + 0x1a8)) {
      lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::
              TStringConversion<FTCHARToUTF8_Convert,128>
                        (local_188,*(undefined8 *)(param_1 + 0x1a0));
      puVar10 = (undefined8 *)_guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar8 + 0x88));
      if (local_108 != 0) {
        FMemory::Free();
      }
    }
    local_258 = 0;
    local_250 = 0;
    *(undefined8 **)(local_288 + 0x38) = puVar10;
    if ((local_270 != 0) && (local_278 != (longlong *)0x0)) {
      (**(code **)(*local_278 + 0x30))(local_278,&local_258);
    }
    iVar5 = FUN_140584410(puVar9,local_288,&local_258);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_278);
    if (iVar5 != 0) {
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar11 + 1;
        lVar8 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      plVar11 = local_308;
      if (local_300 != 0) {
        if (local_308 == (longlong *)0x0) goto LAB_140577a08;
        (**(code **)(*local_308 + 0x28))(local_308,0);
        if (local_308 != (longlong *)0x0) {
          local_308 = (longlong *)FMemory::Realloc(local_308,0,0);
        }
        local_300 = 0;
        plVar11 = local_308;
      }
LAB_1405779fb:
      if (plVar11 != (longlong *)0x0) {
        FMemory::Free(plVar11);
      }
LAB_140577a08:
      TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4);
      return iVar5;
    }
    if (*(char *)(param_1 + 0xe0) != '\x01') {
      *(undefined1 *)(param_1 + 0xe0) = 1;
      local_238 = &PTR_FUN_143fc45e0;
      local_230 = 1;
      local_228 = param_1;
      TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 8,&local_238);
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar11 + 1;
      lVar8 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    plVar11 = local_308;
    if (local_300 != 0) {
      if (local_308 == (longlong *)0x0) goto LAB_140577f34;
      (**(code **)(*local_308 + 0x28))(local_308,0);
      if (local_308 != (longlong *)0x0) {
        local_308 = (longlong *)FMemory::Realloc(local_308,0,0);
      }
      local_300 = 0;
      plVar11 = local_308;
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
LAB_140577f34:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4);
  return 0;
}



// FUNCTION 140577f80 FUN_140577f80 body=1194 status=ok
// SIG undefined FUN_140577f80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_140577f80(longlong *param_1,byte param_2,undefined8 param_3,longlong **param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 auStack_1a8 [32];
  byte local_188;
  longlong *local_180;
  int local_178;
  longlong local_170;
  longlong *local_168;
  longlong *local_160;
  int local_158;
  longlong local_150;
  longlong *local_148;
  longlong *local_140;
  int local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined1 local_110 [8];
  longlong *local_108;
  longlong *local_100;
  undefined1 local_e8 [128];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_188 = param_2;
  local_128 = param_3;
  if (param_2 == *(byte *)((longlong)param_1 + 0x139)) {
    if (((*(int *)(param_4 + 1) != 0) && (*param_4 != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(**param_4 + 0x18))(), cVar4 != '\0')) {
      if (*(int *)(param_4 + 1) == 0) {
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11 = *param_4;
      }
      (**(code **)(*plVar11 + 0x40))(plVar11,0);
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4);
    return 0;
  }
  if ((param_2 != 0) && (cVar4 = (**(code **)(*param_1 + 0x10))(), cVar4 != '\x03')) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  puVar9 = (undefined8 *)0x0;
  local_180 = (longlong *)0x0;
  local_178 = 0;
  plVar6 = (longlong *)
           TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x19,local_110);
  plVar11 = (longlong *)plVar6[1];
  local_130 = *plVar6;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_108 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar1 = (int *)((longlong)local_108 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_108 + 8))(local_108,1);
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar11 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  local_160 = (longlong *)0x0;
  local_158 = 0;
  local_168 = param_1;
  if (((param_4 != &local_160) && (*(int *)(param_4 + 1) != 0)) &&
     (plVar6 = *param_4, plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x30))(plVar6,&local_160);
  }
  local_150 = local_130;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_148 = plVar11;
  plVar6 = (longlong *)FMemory::Realloc(0,0x40);
  local_100 = plVar6;
  if (plVar6 == (longlong *)0x0) {
    if (((local_178 != 0) && (local_180 != (longlong *)0x0)) &&
       ((**(code **)(*local_180 + 0x28))(local_180,0), local_180 != (longlong *)0x0)) {
      local_180 = (longlong *)FMemory::Realloc(local_180,0,0);
    }
  }
  else {
    *plVar6 = (longlong)&PTR_GetPoolName_143fc4e40;
    plVar6[1] = (longlong)local_168;
    plVar6[2] = 0;
    *(undefined4 *)(plVar6 + 3) = 0;
    if (((&local_160 != (longlong **)(plVar6 + 2)) && (local_158 != 0)) &&
       (local_160 != (longlong *)0x0)) {
      (**(code **)(*local_160 + 0x30))();
    }
    plVar6[4] = local_150;
    plVar6[5] = (longlong)local_148;
    local_148 = (longlong *)0x0;
    local_150 = 0;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[7] = lVar7;
    *plVar6 = (longlong)&PTR_GetPoolName_143fc4e88;
    FUN_14057ba60(plVar6,&local_180);
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    local_100 = (longlong *)FMemory::Realloc(plVar6,0,0);
    if (local_100 != (longlong *)0x0) {
      FMemory::Free(local_100);
    }
  }
  plVar6 = local_148;
  if (local_148 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_148 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_148)(local_148);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_160);
  local_140 = (longlong *)0x0;
  local_138 = 0;
  if ((local_178 != 0) && (local_180 != (longlong *)0x0)) {
    (**(code **)(*local_180 + 0x30))(local_180,&local_140);
  }
  if ((DAT_1468535b8 == (undefined8 *)0x0) &&
     (puVar8 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = puVar9, puVar8 != (undefined8 *)0x0
     )) {
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[2] = 2;
    DAT_1468535b8 = puVar8;
  }
  puVar8 = DAT_1468535b8;
  _guard_xfg_dispatch_icall_nop(&local_170);
  *(uint *)(local_170 + 0x38) = (uint)local_188;
  if (1 < (int)param_1[0x35]) {
    lVar7 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                      (local_e8,param_1[0x34]);
    puVar9 = (undefined8 *)_guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar7 + 0x88));
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  *(undefined8 **)(local_170 + 0x30) = puVar9;
  uVar10 = vx_fstrdup(local_128);
  local_120 = 0;
  local_118 = 0;
  *(undefined8 *)(local_170 + 0x40) = uVar10;
  if ((local_138 != 0) && (local_140 != (longlong *)0x0)) {
    (**(code **)(*local_140 + 0x30))(local_140,&local_120);
  }
  uVar5 = FUN_140584410(puVar8,local_170,&local_120);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_140);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar11 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  if (local_178 != 0) {
    if (local_180 == (longlong *)0x0) goto LAB_1405783fe;
    (**(code **)(*local_180 + 0x28))(local_180,0);
    if (local_180 != (longlong *)0x0) {
      local_180 = (longlong *)FMemory::Realloc(local_180,0,0);
    }
    local_178 = 0;
  }
  if (local_180 != (longlong *)0x0) {
    FMemory::Free(local_180);
  }
LAB_1405783fe:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4);
  return uVar5;
}



// FUNCTION 140578430 FUN_140578430 body=2519 status=ok
// SIG undefined FUN_140578430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_140578430(longlong param_1,longlong *param_2,char *param_3,longlong **param_4)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  void *_Src;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int *piVar10;
  void *pvVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  void *pvVar18;
  void *pvVar19;
  uint *puVar20;
  int iVar21;
  uint *puVar22;
  undefined1 auStack_278 [32];
  undefined4 local_258;
  undefined8 *local_250;
  void *local_248;
  undefined8 local_240;
  void *local_238;
  undefined8 local_230;
  longlong *local_228;
  int local_220;
  void *local_218;
  undefined8 local_210;
  longlong *local_208;
  void *local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  int local_1e8;
  uint uStack_1e4;
  uint *puStack_1e0;
  undefined4 local_1d8;
  uint uStack_1d4;
  int iStack_1d0;
  undefined4 uStack_1cc;
  char *local_1c8;
  longlong **local_1c0;
  int local_1b8;
  uint local_1a8;
  uint uStack_1a4;
  uint local_1a0;
  int local_198;
  int local_194;
  undefined1 local_190 [4];
  undefined1 local_18c [4];
  void *local_188;
  ulonglong local_180;
  longlong *local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  int iStack_158;
  uint uStack_154;
  uint *local_150;
  uint uStack_148;
  uint uStack_144;
  undefined8 local_140;
  undefined1 local_138 [8];
  longlong *local_130;
  longlong *local_128;
  longlong local_118 [2];
  longlong local_108 [2];
  undefined8 local_f8;
  undefined8 uStack_f0;
  uint *puStack_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 uStack_d8;
  longlong local_c8;
  longlong *local_c0;
  int local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0 [4];
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_60;
  undefined4 local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  local_228 = (longlong *)0x0;
  local_220 = 0;
  local_208 = param_2;
  local_1f0 = param_1;
  local_1c8 = param_3;
  local_1c0 = param_4;
  plVar7 = (longlong *)
           TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x80,local_138);
  plVar8 = (longlong *)plVar7[1];
  lVar9 = *plVar7;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_178 = plVar8;
  if (local_130 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_130 + 1;
    lVar16 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar10 = (int *)((longlong)local_130 + 0xc);
      iVar17 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        (**(code **)(*local_130 + 8))(local_130,1);
      }
    }
  }
  plVar7 = plVar8 + 1;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar7 = (int)*plVar7 + 1;
    UNLOCK();
    LOCK();
    lVar16 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar10 = (int *)((longlong)plVar8 + 0xc);
      iVar17 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  local_c8 = local_1f0;
  local_c0 = (longlong *)0x0;
  local_b8 = 0;
  if (((local_1c0 != &local_c0) && (*(int *)(local_1c0 + 1) != 0)) &&
     (plVar3 = *local_1c0, plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_c0);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar7 = (int)*plVar7 + 1;
    UNLOCK();
  }
  iVar17 = 0;
  local_70 = 0xffffffff;
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_80 = 0;
  local_78 = 0;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_b0 = lVar9;
  local_a8 = plVar8;
  FUN_14056fbf0(local_a0,local_208);
  local_50 = *param_3;
  plVar8 = (longlong *)FMemory::Realloc(0,0xa0,0);
  local_128 = plVar8;
  if (plVar8 == (longlong *)0x0) {
    if (((local_220 != 0) && (local_228 != (longlong *)0x0)) &&
       ((**(code **)(*local_228 + 0x28))(local_228,0), local_228 != (longlong *)0x0)) {
      local_228 = (longlong *)FMemory::Realloc(local_228,0,0);
    }
  }
  else {
    *plVar8 = (longlong)&PTR_GetPoolName_143fc5230;
    plVar8[1] = local_c8;
    plVar8[2] = 0;
    *(undefined4 *)(plVar8 + 3) = 0;
    if (((&local_c0 != (longlong **)(plVar8 + 2)) && (local_b8 != 0)) &&
       (local_c0 != (longlong *)0x0)) {
      (**(code **)(*local_c0 + 0x30))();
    }
    plVar8[4] = local_b0;
    plVar8[5] = (longlong)local_a8;
    local_a8 = (longlong *)0x0;
    local_b0 = 0;
    plVar8[6] = 0;
    plVar8[7] = 0;
    plVar8[10] = 0;
    plVar8[0xb] = 0;
    *(undefined4 *)(plVar8 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)plVar8 + 100) = 0;
    plVar8[0xe] = 0;
    *(undefined4 *)(plVar8 + 0xf) = 0;
    FUN_14056fbf0(plVar8 + 6,local_a0);
    *(char *)(plVar8 + 0x10) = local_50;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar8[0x12] = lVar9;
    *plVar8 = (longlong)&PTR_GetPoolName_143fc5278;
    FUN_14057bdf0(plVar8,&local_228);
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    local_128 = (longlong *)FMemory::Realloc(plVar8,0,0);
    if (local_128 != (longlong *)0x0) {
      FMemory::Free(local_128);
    }
  }
  local_58 = 0;
  if (local_60 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_a0,0);
  if (local_80 != 0) {
    FMemory::Free();
  }
  if (local_a0[0] != 0) {
    FMemory::Free();
  }
  plVar8 = local_a8;
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_a8 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar10 = (int *)((longlong)plVar8 + 0xc);
      iVar14 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c0);
  uVar2 = *(uint *)(local_208 + 5);
  puVar22 = (uint *)(local_208 + 2);
  local_200 = (void *)0x0;
  local_1f8 = 0;
  local_1e8 = 0;
  uStack_1e4 = 1;
  uStack_1d4 = 0;
  iStack_1d0 = 0;
  if (uVar2 != 0) {
    puVar20 = (uint *)local_208[4];
    if ((uint *)local_208[4] == (uint *)0x0) {
      puVar20 = puVar22;
    }
    uVar15 = *puVar20;
    while (uVar15 == 0) {
      lVar9 = (longlong)local_1e8;
      iStack_1d0 = iStack_1d0 + 0x20;
      iVar14 = local_1e8 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_1e8;
      local_1e8 = iVar14;
      if (bVar4) goto LAB_14057886f;
      uVar15 = puVar20[lVar9 + 1];
    }
    uStack_1e4 = -uVar15 & uVar15;
    local_198 = 0x1f;
    if (uStack_1e4 != 0) {
      for (; uStack_1e4 >> local_198 == 0; local_198 = local_198 + -1) {
      }
    }
    if (uStack_1e4 == 0) {
      iVar14 = 0x20;
    }
    else {
      iVar14 = 0x1f - local_198;
    }
    uStack_1d4 = (iStack_1d0 - iVar14) + 0x1f;
    if ((int)uVar2 < (int)uStack_1d4) {
LAB_14057886f:
      uStack_1d4 = uVar2;
    }
  }
  local_1d8 = 0xffffffff;
  uStack_1a4 = *(uint *)(local_208 + 5);
  uStack_f0 = CONCAT44(uStack_1e4,local_1e8);
  local_f8 = local_208;
  plVar8 = local_f8;
  uStack_148 = 0xffffffff;
  uStack_144 = uStack_1d4;
  local_140 = CONCAT44(uStack_1cc,iStack_1d0);
  local_1b8 = (int)uStack_1a4 >> 5;
  local_f8._0_4_ = SUB84(local_208,0);
  local_f8._4_4_ = (undefined4)((ulonglong)local_208 >> 0x20);
  local_1a8 = -1 << ((byte)uStack_1a4 & 0x1f);
  local_1a0 = uStack_1a4 & 0xffffffe0;
  local_160 = (undefined4)local_f8;
  uStack_15c = local_f8._4_4_;
  iStack_158 = local_1e8;
  uStack_154 = uStack_1e4;
  if (uStack_1a4 != uVar2) {
    puVar20 = (uint *)local_208[4];
    if ((uint *)local_208[4] == (uint *)0x0) {
      puVar20 = puVar22;
    }
    uVar15 = puVar20[local_1b8] & local_1a8;
    while (uVar15 == 0) {
      lVar9 = (longlong)local_1b8;
      local_1a0 = local_1a0 + 0x20;
      iVar14 = local_1b8 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_1b8;
      local_1b8 = iVar14;
      if (bVar4) goto LAB_14057895c;
      uVar15 = puVar20[lVar9 + 1];
      local_1a8 = 0xffffffff;
    }
    uVar15 = -uVar15 & uVar15;
    local_194 = 0x1f;
    if (uVar15 != 0) {
      for (; uVar15 >> local_194 == 0; local_194 = local_194 + -1) {
      }
    }
    if (uVar15 == 0) {
      iVar14 = 0x20;
    }
    else {
      iVar14 = 0x1f - local_194;
    }
    uStack_1a4 = (local_1a0 - iVar14) + 0x1f;
    if ((int)uVar2 < (int)uStack_1a4) {
LAB_14057895c:
      uStack_1a4 = uVar2;
    }
  }
  local_180 = (ulonglong)uStack_1a4;
  puStack_1e0 = puVar22;
  local_150 = puVar22;
  local_f8 = plVar8;
  puStack_e8 = puVar22;
  uStack_d8 = local_140;
  uStack_e0 = uStack_148;
  uStack_dc = uStack_144;
  while( true ) {
    lVar9 = local_1f0;
    if (((uStack_144 == (uint)local_180) && (local_150 == puVar22)) &&
       ((longlong *)CONCAT44(uStack_15c,local_160) == plVar8)) break;
    lVar16 = (longlong)(int)uStack_144 * 0x68 + *(longlong *)CONCAT44(uStack_15c,local_160);
    piVar10 = (int *)TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
                     ::FindId(local_1f0 + 0x240,local_190,lVar16);
    if (((*piVar10 == -1) || (*param_3 == '\0')) &&
       ((piVar10 = (int *)TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
                          ::FindId(lVar9 + 0x240,local_18c,lVar16), *piVar10 != -1 ||
        (*param_3 != '\0')))) {
      pvVar18 = (void *)0x0;
      local_210 = 2;
      local_218 = (void *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_218,0);
      _Src = local_218;
      local_258 = CONCAT22(local_258._2_2_,0x3f);
      FGenericPlatformString::Convert<char,wchar_t>(local_218,2,&DAT_143fc249c);
      plVar8 = (longlong *)AccountId::ToString(lVar16,local_118);
      if (iVar17 < 2) {
        pvVar18 = (void *)*plVar8;
        *plVar8 = 0;
        iVar5 = (int)plVar8[1];
        iVar21 = *(int *)((longlong)plVar8 + 0xc);
        plVar8[1] = 0;
      }
      else {
        iVar14 = (int)plVar8[1] + -1;
        if ((int)plVar8[1] == 0) {
          iVar14 = 0;
        }
        if ((iVar17 != 0) || (iVar5 = 1, iVar14 == 0)) {
          iVar5 = 0;
        }
        local_248 = (void *)0x0;
        if ((iVar17 == 0) && (iVar5 + iVar14 == 0)) {
          local_240._4_4_ = 0;
        }
        else {
          local_240._0_4_ = iVar17;
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_248,iVar5 + iVar14 + iVar17,0);
          pvVar18 = local_248;
          _guard_xfg_dispatch_icall_nop(local_248,local_200,(longlong)iVar17 * 2);
          iVar17 = (int)local_240;
        }
        local_188 = (void *)*plVar8;
        iVar21 = local_240._4_4_;
        iVar5 = iVar17;
        if (iVar14 != 0) {
          local_240._0_4_ = (uint)(iVar17 == 0) + iVar14 + iVar17;
          if (local_240._4_4_ < (int)local_240) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,iVar17);
            pvVar18 = local_248;
          }
          iVar21 = local_240._4_4_;
          iVar5 = (int)local_240;
          pvVar19 = (void *)((longlong)pvVar18 + ((longlong)iVar17 - (ulonglong)(iVar17 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar19,local_188,(longlong)iVar14 * 2);
          *(undefined2 *)((longlong)pvVar19 + (longlong)iVar14 * 2) = 0;
        }
        local_248 = (void *)0x0;
        local_240 = 0;
      }
      pvVar19 = (void *)0x0;
      iVar17 = (int)local_210;
      if (iVar5 < 2) {
        iVar21 = local_210._4_4_;
        local_210 = 0;
        local_218 = (void *)0x0;
        pvVar11 = _Src;
      }
      else {
        if ((int)local_210 == 0) {
          iVar14 = 0;
        }
        else {
          iVar14 = (int)local_210 + -1;
        }
        if ((iVar5 != 0) || (pvVar11 = (void *)0x1, iVar14 == 0)) {
          pvVar11 = pvVar19;
        }
        local_238 = pvVar18;
        local_230._4_4_ = iVar21;
        if (iVar21 < iVar14 + iVar5 + (int)pvVar11) {
          local_230._0_4_ = iVar5;
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_238);
          iVar5 = (int)local_230;
        }
        pvVar11 = local_238;
        iVar21 = local_230._4_4_;
        iVar17 = iVar5;
        if (iVar14 != 0) {
          local_230._0_4_ = (uint)(iVar5 == 0) + iVar14 + iVar5;
          if (local_230._4_4_ < (int)local_230) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,iVar5);
          }
          iVar21 = local_230._4_4_;
          iVar17 = (int)local_230;
          pvVar11 = local_238;
          pvVar18 = (void *)((longlong)local_238 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar18,_Src,(longlong)iVar14 * 2);
          *(undefined2 *)((longlong)iVar14 * 2 + (longlong)pvVar18) = 0;
        }
        local_238 = (void *)0x0;
        local_230 = 0;
        pvVar18 = pvVar19;
        pvVar19 = _Src;
      }
      if (local_200 != (void *)0x0) {
        FMemory::Free(local_200);
      }
      local_1f8 = CONCAT44(iVar21,iVar17);
      local_200 = pvVar11;
      if (pvVar18 != (void *)0x0) {
        FMemory::Free(pvVar18);
      }
      if (local_118[0] != 0) {
        FMemory::Free();
      }
      plVar8 = local_208;
      param_3 = local_1c8;
      puVar22 = puStack_1e0;
      if (pvVar19 != (void *)0x0) {
        FMemory::Free(pvVar19);
        plVar8 = local_208;
        param_3 = local_1c8;
        puVar22 = puStack_1e0;
      }
    }
    uStack_148 = uStack_148 & ~uStack_154;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_158);
  }
  local_170 = 0;
  local_168 = 0;
  if ((local_220 != 0) && (local_228 != (longlong *)0x0)) {
    (**(code **)(*local_228 + 0x30))(local_228,&local_170);
  }
  if ((DAT_1468535b8 == (undefined8 *)0x0) &&
     (puVar12 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = (undefined8 *)0x0,
     puVar12 != (undefined8 *)0x0)) {
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = 2;
    DAT_1468535b8 = puVar12;
  }
  puVar12 = DAT_1468535b8;
  cVar1 = *param_3;
  uVar13 = AccountId::ToString(local_1f0 + 0x90,local_108);
  local_250 = &local_170;
  local_258 = 0;
  uVar6 = FUN_14057b3e0(puVar12,uVar13,cVar1 == '\0',&local_200);
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  if (local_200 != (void *)0x0) {
    FMemory::Free();
  }
  plVar8 = local_178;
  if (local_178 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_178 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_178)(local_178);
      LOCK();
      piVar10 = (int *)((longlong)plVar8 + 0xc);
      iVar17 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  if (local_220 != 0) {
    if (local_228 == (longlong *)0x0) goto LAB_140578dd2;
    (**(code **)(*local_228 + 0x28))(local_228,0);
    if (local_228 != (longlong *)0x0) {
      local_228 = (longlong *)FMemory::Realloc(local_228,0,0);
    }
    local_220 = 0;
  }
  if (local_228 != (longlong *)0x0) {
    FMemory::Free(local_228);
  }
LAB_140578dd2:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1c0);
  return uVar6;
}



// FUNCTION 140578e10 FUN_140578e10 body=1052 status=ok
// SIG undefined FUN_140578e10(void)

undefined4 FUN_140578e10(longlong param_1,undefined8 param_2,char *param_3,longlong **param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong *local_128;
  int local_120;
  undefined8 local_118;
  undefined4 local_110;
  longlong local_108;
  longlong *local_100;
  int local_f8;
  longlong local_f0;
  longlong *local_e8;
  undefined1 local_e0 [96];
  char local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  longlong *local_68;
  longlong local_58 [2];
  longlong local_48 [2];
  
  local_128 = (longlong *)0x0;
  local_120 = 0;
  plVar9 = (longlong *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x80,local_78)
  ;
  plVar4 = (longlong *)plVar9[1];
  lVar10 = *plVar9;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_70 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  plVar9 = plVar4 + 1;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar9 = (int)*plVar9 + 1;
    UNLOCK();
    LOCK();
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  local_100 = (longlong *)0x0;
  local_f8 = 0;
  local_108 = param_1;
  if (((param_4 != &local_100) && (*(int *)(param_4 + 1) != 0)) &&
     (plVar5 = *param_4, plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x30))(plVar5,&local_100);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar9 = (int)*plVar9 + 1;
    UNLOCK();
  }
  local_f0 = lVar10;
  local_e8 = plVar4;
  FUN_1405343b0(local_e0,param_2);
  local_80 = *param_3;
  plVar9 = (longlong *)FMemory::Realloc(0,0xb0,0);
  local_68 = plVar9;
  if (plVar9 == (longlong *)0x0) {
    if (((local_120 != 0) && (local_128 != (longlong *)0x0)) &&
       ((**(code **)(*local_128 + 0x28))(local_128,0), local_128 != (longlong *)0x0)) {
      local_128 = (longlong *)FMemory::Realloc(local_128,0,0);
    }
  }
  else {
    *plVar9 = (longlong)&PTR_GetPoolName_143fc51a0;
    plVar9[1] = local_108;
    plVar9[2] = 0;
    *(undefined4 *)(plVar9 + 3) = 0;
    if (((&local_100 != (longlong **)(plVar9 + 2)) && (local_f8 != 0)) &&
       (local_100 != (longlong *)0x0)) {
      (**(code **)(*local_100 + 0x30))();
    }
    plVar9[4] = local_f0;
    plVar9[5] = (longlong)local_e8;
    local_e8 = (longlong *)0x0;
    local_f0 = 0;
    FUN_1405343b0(plVar9 + 6,local_e0);
    *(char *)(plVar9 + 0x12) = local_80;
    lVar10 = FDelegateHandle::GenerateNewID();
    plVar9[0x14] = lVar10;
    *plVar9 = (longlong)&PTR_GetPoolName_143fc51e8;
    FUN_14057b9a0(plVar9,&local_128);
    (**(code **)(*plVar9 + 0x28))(plVar9,0);
    local_68 = (longlong *)FMemory::Realloc(plVar9,0,0);
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
  }
  FUN_14056ed50(local_e0);
  plVar9 = local_e8;
  if (local_e8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_e8 + 1;
    lVar10 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_e8)(local_e8);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_100);
  local_118 = 0;
  local_110 = 0;
  if ((local_120 != 0) && (local_128 != (longlong *)0x0)) {
    (**(code **)(*local_128 + 0x30))(local_128,&local_118);
  }
  if (DAT_1468535b8 == (undefined8 *)0x0) {
    DAT_1468535b8 = (undefined8 *)operator_new(0x18);
    if (DAT_1468535b8 == (undefined8 *)0x0) {
      DAT_1468535b8 = (undefined8 *)0x0;
    }
    else {
      *DAT_1468535b8 = 0;
      DAT_1468535b8[1] = 0;
      DAT_1468535b8[2] = 2;
    }
  }
  puVar7 = DAT_1468535b8;
  uVar11 = AccountId::ToString(param_2,local_48);
  cVar3 = *param_3;
  uVar12 = AccountId::ToString(param_1 + 0x90,local_58);
  uVar8 = FUN_14057b3e0(puVar7,uVar12,cVar3 == '\0',uVar11,0,&local_118);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar4 + 1;
    lVar10 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (local_120 != 0) {
    if (local_128 == (longlong *)0x0) goto LAB_140579207;
    (**(code **)(*local_128 + 0x28))(local_128,0);
    if (local_128 != (longlong *)0x0) {
      local_128 = (longlong *)FMemory::Realloc(local_128,0,0);
    }
    local_120 = 0;
  }
  if (local_128 != (longlong *)0x0) {
    FMemory::Free(local_128);
  }
LAB_140579207:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4);
  return uVar8;
}



// FUNCTION 140579230 FUN_140579230 body=989 status=ok
// SIG undefined FUN_140579230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_140579230(longlong param_1,byte param_2,undefined8 *param_3,longlong **param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  undefined1 auStack_1c8 [32];
  longlong *local_1a8;
  int local_1a0;
  longlong local_198;
  longlong local_190;
  longlong *local_188;
  int local_180;
  longlong *local_178;
  int local_170;
  undefined8 local_168;
  undefined4 local_160;
  longlong local_158 [2];
  longlong local_148 [2];
  longlong local_138 [2];
  longlong local_128;
  longlong local_118;
  undefined1 local_e8 [128];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  if (*(int *)(param_3 + 1) < 2) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4);
    return 0x3f0;
  }
  local_1a8 = (longlong *)0x0;
  local_1a0 = 0;
  local_188 = (longlong *)0x0;
  local_180 = 0;
  local_190 = param_1;
  if (((param_4 != &local_188) && (*(int *)(param_4 + 1) != 0)) &&
     (plVar2 = *param_4, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_188);
  }
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 == (longlong *)0x0) {
    if (((local_1a0 != 0) && (local_1a8 != (longlong *)0x0)) &&
       ((**(code **)(*local_1a8 + 0x28))(local_1a8,0), local_1a8 != (longlong *)0x0)) {
      local_1a8 = (longlong *)FMemory::Realloc(local_1a8,0,0);
    }
  }
  else {
    *plVar2 = (longlong)&PTR_GetPoolName_143fc5470;
    plVar2[1] = local_190;
    plVar2[2] = 0;
    *(undefined4 *)(plVar2 + 3) = 0;
    if (((&local_188 != (longlong **)(plVar2 + 2)) && (local_180 != 0)) &&
       (local_188 != (longlong *)0x0)) {
      (**(code **)(*local_188 + 0x30))();
    }
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143fc54b8;
    FUN_14057b690(plVar2,&local_1a8);
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_188);
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x38) + 8))();
  local_178 = (longlong *)0x0;
  local_170 = 0;
  if ((local_1a0 != 0) && (local_1a8 != (longlong *)0x0)) {
    (**(code **)(*local_1a8 + 0x30))(local_1a8,&local_178);
  }
  if ((DAT_1468535b8 == (undefined8 *)0x0) &&
     (puVar4 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = (undefined8 *)0x0,
     puVar4 != (undefined8 *)0x0)) {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 2;
    DAT_1468535b8 = puVar4;
  }
  puVar4 = DAT_1468535b8;
  uVar5 = AccountId::ToString(param_1 + 0x40,&local_190);
  uVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x48))
                    (*(longlong **)(param_1 + 0x38),local_138);
  uVar6 = FUN_14058a6b0(uVar6,local_148);
  uVar7 = (**(code **)(*plVar2 + 0x48))(plVar2);
  uVar7 = AccountId::ToString(uVar7,local_158);
  _guard_xfg_dispatch_icall_nop(&local_198);
  uVar7 = vx_fstrdup(uVar7);
  *(undefined8 *)(local_198 + 0x30) = uVar7;
  uVar6 = vx_fstrdup(uVar6);
  *(undefined8 *)(local_198 + 0x40) = uVar6;
  uVar5 = vx_fstrdup(uVar5);
  *(undefined8 *)(local_198 + 0x48) = uVar5;
  *(uint *)(local_198 + 0x50) = (uint)param_2;
  if (*(int *)(param_3 + 1) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*param_3;
  }
  lVar3 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_e8,puVar8);
  uVar5 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar3 + 0x88));
  *(undefined8 *)(local_198 + 0x58) = uVar5;
  if (local_68 != 0) {
    FMemory::Free();
  }
  local_168 = 0;
  local_160 = 0;
  if ((local_170 != 0) && (local_178 != (longlong *)0x0)) {
    (**(code **)(*local_178 + 0x30))(local_178,&local_168);
  }
  uVar1 = FUN_140584410(puVar4,local_198,&local_168);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_178);
  if (local_158[0] != 0) {
    FMemory::Free();
  }
  if (local_148[0] != 0) {
    FMemory::Free();
  }
  if (local_118 != 0) {
    FMemory::Free();
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  if (local_138[0] != 0) {
    FMemory::Free();
  }
  if (local_190 != 0) {
    FMemory::Free();
  }
  if (local_1a0 != 0) {
    if (local_1a8 == (longlong *)0x0) goto LAB_1405795dc;
    (**(code **)(*local_1a8 + 0x28))(local_1a8,0);
    if (local_1a8 != (longlong *)0x0) {
      local_1a8 = (longlong *)FMemory::Realloc(local_1a8,0,0);
    }
    local_1a0 = 0;
  }
  if (local_1a8 != (longlong *)0x0) {
    FMemory::Free(local_1a8);
  }
LAB_1405795dc:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4);
  return uVar1;
}



// FUNCTION 140579610 FUN_140579610 body=2372 status=ok
// SIG undefined FUN_140579610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_140579610(longlong param_1,char param_2,longlong **param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 auStack_2d8 [32];
  longlong *local_2b8;
  int local_2b0;
  longlong *local_2a8;
  int local_2a0;
  longlong local_298;
  longlong local_290;
  longlong *local_288;
  int local_280;
  longlong local_278;
  longlong *local_270;
  longlong local_268;
  longlong *local_260;
  int local_258;
  longlong local_250;
  longlong *local_248;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  longlong *local_228;
  int local_220;
  longlong *local_218;
  int local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined **local_1e8;
  undefined1 local_1e0;
  longlong local_1d8;
  undefined1 local_1d0 [8];
  longlong *local_1c8;
  longlong *local_1c0;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
  longlong *local_1a0;
  undefined1 local_188 [128];
  longlong local_108;
  undefined1 local_e8 [128];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  cVar5 = *(char *)(param_1 + 0xe1);
  local_238 = param_1;
  if (param_2 == '\0') {
    if ((cVar5 == '\0') || (cVar5 == '\x03')) goto LAB_140579eee;
    puVar10 = (undefined8 *)0x0;
    local_2a8 = (longlong *)0x0;
    local_2a0 = 0;
    plVar7 = (longlong *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 200,local_1b0);
    plVar11 = (longlong *)plVar7[1];
    local_298 = *plVar7;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    if (local_1a8 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_1a8 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_1a8)(local_1a8);
        LOCK();
        piVar1 = (int *)((longlong)local_1a8 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_1a8 + 8))(local_1a8,1);
        }
      }
    }
    plVar7 = plVar11 + 1;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar7 = (int)*plVar7 + 1;
      UNLOCK();
      LOCK();
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    lVar4 = local_238;
    local_268 = local_238;
    local_260 = (longlong *)0x0;
    local_258 = 0;
    if (((param_3 != &local_260) && (*(int *)(param_3 + 1) != 0)) &&
       (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_260);
    }
    local_250 = local_298;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar7 = (int)*plVar7 + 1;
      UNLOCK();
    }
    local_248 = plVar11;
    plVar7 = (longlong *)FMemory::Realloc(0,0x40);
    local_1a0 = plVar7;
    if (plVar7 == (longlong *)0x0) {
      if (((local_2a0 != 0) && (local_2a8 != (longlong *)0x0)) &&
         ((**(code **)(*local_2a8 + 0x28))(local_2a8,0), local_2a8 != (longlong *)0x0)) {
        local_2a8 = (longlong *)FMemory::Realloc(local_2a8,0,0);
      }
    }
    else {
      *plVar7 = (longlong)&PTR_GetPoolName_143fc4db0;
      plVar7[1] = local_268;
      plVar7[2] = 0;
      *(undefined4 *)(plVar7 + 3) = 0;
      if (((&local_260 != (longlong **)(plVar7 + 2)) && (local_258 != 0)) &&
         (local_260 != (longlong *)0x0)) {
        (**(code **)(*local_260 + 0x30))();
      }
      plVar7[4] = local_250;
      plVar7[5] = (longlong)local_248;
      local_248 = (longlong *)0x0;
      local_250 = 0;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[7] = lVar8;
      *plVar7 = (longlong)&PTR_GetPoolName_143fc4df8;
      FUN_14057b600(plVar7,&local_2a8);
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      local_1a0 = (longlong *)FMemory::Realloc(plVar7,0,0);
      if (local_1a0 != (longlong *)0x0) {
        FMemory::Free(local_1a0);
      }
    }
    plVar7 = local_248;
    if (local_248 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_248 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_248)(local_248);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_260);
    local_218 = (longlong *)0x0;
    local_210 = 0;
    if ((local_2a0 != 0) && (local_2a8 != (longlong *)0x0)) {
      (**(code **)(*local_2a8 + 0x30))(local_2a8,&local_218);
    }
    if ((DAT_1468535b8 == (undefined8 *)0x0) &&
       (puVar9 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = puVar10,
       puVar9 != (undefined8 *)0x0)) {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 2;
      DAT_1468535b8 = puVar9;
    }
    puVar9 = DAT_1468535b8;
    _guard_xfg_dispatch_icall_nop(&local_230);
    if (1 < *(int *)(lVar4 + 0x1a8)) {
      lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::
              TStringConversion<FTCHARToUTF8_Convert,128>(local_e8,*(undefined8 *)(lVar4 + 0x1a0));
      puVar10 = (undefined8 *)_guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar8 + 0x88));
      if (local_68 != 0) {
        FMemory::Free();
      }
    }
    local_1f8 = 0;
    local_1f0 = 0;
    *(undefined8 **)(local_230 + 0x38) = puVar10;
    if ((local_210 != 0) && (local_218 != (longlong *)0x0)) {
      (**(code **)(*local_218 + 0x30))(local_218,&local_1f8);
    }
    iVar6 = FUN_140584410(puVar9,local_230,&local_1f8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_218);
    if (iVar6 != 0) {
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar11 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      plVar11 = local_2a8;
      if (local_2a0 != 0) {
        if (local_2a8 == (longlong *)0x0) goto LAB_140579a02;
        (**(code **)(*local_2a8 + 0x28))(local_2a8,0);
        if (local_2a8 != (longlong *)0x0) {
          local_2a8 = (longlong *)FMemory::Realloc(local_2a8,0,0);
        }
        local_2a0 = 0;
        plVar11 = local_2a8;
      }
      goto LAB_1405799f5;
    }
    FUN_140588a60(lVar4,3);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar11 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    plVar11 = local_2a8;
    if (local_2a0 != 0) {
      if (local_2a8 == (longlong *)0x0) goto LAB_140579f20;
      (**(code **)(*local_2a8 + 0x28))(local_2a8,0);
      if (local_2a8 != (longlong *)0x0) {
        local_2a8 = (longlong *)FMemory::Realloc(local_2a8,0,0);
      }
      local_2a0 = 0;
      plVar11 = local_2a8;
    }
  }
  else {
    if ((byte)(cVar5 - 1U) < 2) {
LAB_140579eee:
      if (((*(int *)(param_3 + 1) != 0) && (*param_3 != (longlong *)0x0)) &&
         (cVar5 = (**(code **)(**param_3 + 0x18))(), cVar5 != '\0')) {
        if (*(int *)(param_3 + 1) == 0) {
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = *param_3;
        }
        (**(code **)(*plVar11 + 0x40))(plVar11,0);
      }
      goto LAB_140579f20;
    }
    puVar10 = (undefined8 *)0x0;
    local_2b8 = (longlong *)0x0;
    local_2b0 = 0;
    plVar7 = (longlong *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 200,local_1d0);
    plVar11 = (longlong *)plVar7[1];
    local_298 = *plVar7;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    if (local_1c8 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_1c8 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_1c8)(local_1c8);
        LOCK();
        piVar1 = (int *)((longlong)local_1c8 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_1c8 + 8))(local_1c8,1);
        }
      }
    }
    plVar7 = plVar11 + 1;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar7 = (int)*plVar7 + 1;
      UNLOCK();
      LOCK();
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    lVar4 = local_238;
    local_290 = local_238;
    local_288 = (longlong *)0x0;
    local_280 = 0;
    if (((param_3 != &local_288) && (*(int *)(param_3 + 1) != 0)) &&
       (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_288);
    }
    local_278 = local_298;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar7 = (int)*plVar7 + 1;
      UNLOCK();
    }
    local_270 = plVar11;
    plVar7 = (longlong *)FMemory::Realloc(0,0x40);
    local_1c0 = plVar7;
    if (plVar7 == (longlong *)0x0) {
      if (((local_2b0 != 0) && (local_2b8 != (longlong *)0x0)) &&
         ((**(code **)(*local_2b8 + 0x28))(local_2b8,0), local_2b8 != (longlong *)0x0)) {
        local_2b8 = (longlong *)FMemory::Realloc(local_2b8,0,0);
      }
    }
    else {
      *plVar7 = (longlong)&PTR_GetPoolName_143fc4db0;
      plVar7[1] = local_290;
      plVar7[2] = 0;
      *(undefined4 *)(plVar7 + 3) = 0;
      if (((&local_288 != (longlong **)(plVar7 + 2)) && (local_280 != 0)) &&
         (local_288 != (longlong *)0x0)) {
        (**(code **)(*local_288 + 0x30))();
      }
      plVar7[4] = local_278;
      plVar7[5] = (longlong)local_270;
      local_270 = (longlong *)0x0;
      local_278 = 0;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[7] = lVar8;
      *plVar7 = (longlong)&PTR_GetPoolName_143fc4df8;
      FUN_14057b600(plVar7,&local_2b8);
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      local_1c0 = (longlong *)FMemory::Realloc(plVar7,0,0);
      if (local_1c0 != (longlong *)0x0) {
        FMemory::Free(local_1c0);
      }
    }
    plVar7 = local_270;
    if (local_270 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_270 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_270)(local_270);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_288);
    local_228 = (longlong *)0x0;
    local_220 = 0;
    if ((local_2b0 != 0) && (local_2b8 != (longlong *)0x0)) {
      (**(code **)(*local_2b8 + 0x30))(local_2b8,&local_228);
    }
    if ((DAT_1468535b8 == (undefined8 *)0x0) &&
       (puVar9 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = puVar10,
       puVar9 != (undefined8 *)0x0)) {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 2;
      DAT_1468535b8 = puVar9;
    }
    puVar9 = DAT_1468535b8;
    _guard_xfg_dispatch_icall_nop(&local_240);
    if (1 < *(int *)(lVar4 + 0x1a8)) {
      lVar8 = TStringConversion<FTCHARToUTF8_Convert,128>::
              TStringConversion<FTCHARToUTF8_Convert,128>(local_188,*(undefined8 *)(lVar4 + 0x1a0));
      puVar10 = (undefined8 *)_guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar8 + 0x88));
      if (local_108 != 0) {
        FMemory::Free();
      }
    }
    local_208 = 0;
    local_200 = 0;
    *(undefined8 **)(local_240 + 0x38) = puVar10;
    if ((local_220 != 0) && (local_228 != (longlong *)0x0)) {
      (**(code **)(*local_228 + 0x30))(local_228,&local_208);
    }
    iVar6 = FUN_140584410(puVar9,local_240,&local_208);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_228);
    if (iVar6 != 0) {
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar11 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
          }
        }
      }
      plVar11 = local_2b8;
      if (local_2b0 != 0) {
        if (local_2b8 == (longlong *)0x0) goto LAB_140579a02;
        (**(code **)(*local_2b8 + 0x28))(local_2b8,0);
        if (local_2b8 != (longlong *)0x0) {
          local_2b8 = (longlong *)FMemory::Realloc(local_2b8,0,0);
        }
        local_2b0 = 0;
        plVar11 = local_2b8;
      }
LAB_1405799f5:
      if (plVar11 != (longlong *)0x0) {
        FMemory::Free(plVar11);
      }
LAB_140579a02:
      TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
      return iVar6;
    }
    if (*(char *)(lVar4 + 0xe1) != '\x01') {
      *(undefined1 *)(lVar4 + 0xe1) = 1;
      local_1e8 = &PTR_FUN_143fc45e0;
      local_1d8 = lVar4;
      local_1e0 = 1;
      TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(lVar4 + 0x20,&local_1e8);
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar11 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    plVar11 = local_2b8;
    if (local_2b0 != 0) {
      if (local_2b8 == (longlong *)0x0) goto LAB_140579f20;
      (**(code **)(*local_2b8 + 0x28))(local_2b8,0);
      if (local_2b8 != (longlong *)0x0) {
        local_2b8 = (longlong *)FMemory::Realloc(local_2b8,0,0);
      }
      local_2b0 = 0;
      plVar11 = local_2b8;
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
LAB_140579f20:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return 0;
}



// FUNCTION 140579f60 FUN_140579f60 body=1817 status=ok
// SIG undefined FUN_140579f60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_140579f60(longlong param_1,undefined8 param_2,longlong **param_3)

{
  uint *puVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  undefined4 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  uint *puVar17;
  undefined1 auStack_268 [32];
  longlong *local_248;
  int local_240;
  longlong local_238;
  longlong *local_230;
  longlong *plStack_228;
  uint *puStack_220;
  undefined8 uStack_218;
  longlong *plStack_210;
  int local_208;
  uint uStack_204;
  uint *puStack_200;
  undefined4 local_1f8;
  uint uStack_1f4;
  int iStack_1f0;
  undefined4 uStack_1ec;
  longlong *local_1e8;
  int local_1e0;
  int local_1d8;
  uint local_1c8;
  uint uStack_1c4;
  uint local_1c0;
  int local_1b8;
  int local_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  longlong *local_198;
  int iStack_190;
  uint uStack_18c;
  uint *local_188;
  uint uStack_180;
  uint uStack_17c;
  undefined8 local_178;
  undefined1 local_170 [8];
  longlong *local_168;
  longlong *local_160;
  longlong local_148 [2];
  longlong local_138 [2];
  longlong local_128 [8];
  undefined1 local_e8 [128];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  plVar3 = (longlong *)(param_1 + 0x100);
  uVar4 = *(uint *)(param_1 + 0x128);
  puVar1 = (uint *)(param_1 + 0x110);
  uStack_204 = 1;
  local_208 = 0;
  uStack_1f4 = 0;
  iStack_1f0 = 0;
  if (uVar4 != 0) {
    puVar17 = *(uint **)(param_1 + 0x120);
    if (*(uint **)(param_1 + 0x120) == (uint *)0x0) {
      puVar17 = puVar1;
    }
    uVar14 = *puVar17;
    iStack_1f0 = 0;
    local_208 = 0;
    while (uVar14 == 0) {
      lVar15 = (longlong)local_208;
      iStack_1f0 = iStack_1f0 + 0x20;
      iVar16 = local_208 + 1;
      bVar6 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_208;
      local_208 = iVar16;
      if (bVar6) goto LAB_14057a052;
      uVar14 = puVar17[lVar15 + 1];
    }
    uStack_204 = -uVar14 & uVar14;
    local_1b8 = 0x1f;
    if (uStack_204 != 0) {
      for (; uStack_204 >> local_1b8 == 0; local_1b8 = local_1b8 + -1) {
      }
    }
    if (uStack_204 == 0) {
      iVar16 = 0x20;
    }
    else {
      iVar16 = 0x1f - local_1b8;
    }
    uStack_1f4 = (iStack_1f0 - iVar16) + 0x1f;
    if ((int)uVar4 < (int)uStack_1f4) {
LAB_14057a052:
      uStack_1f4 = uVar4;
    }
  }
  local_1f8 = 0xffffffff;
  uStack_1c4 = *(uint *)(param_1 + 0x128);
  plStack_228 = (longlong *)CONCAT44(uStack_204,local_208);
  uStack_180 = 0xffffffff;
  uStack_17c = uStack_1f4;
  plStack_210 = (longlong *)CONCAT44(uStack_1ec,iStack_1f0);
  local_1c8 = -1 << ((byte)uStack_1c4 & 0x1f);
  local_1d8 = (int)uStack_1c4 >> 5;
  local_1c0 = uStack_1c4 & 0xffffffe0;
  iStack_190 = local_208;
  uStack_18c = uStack_204;
  local_230 = plVar3;
  puStack_220 = puVar1;
  puStack_200 = puVar1;
  local_1b0 = param_2;
  local_188 = puVar1;
  local_178 = plStack_210;
  local_198 = plVar3;
  uStack_218._0_4_ = uStack_180;
  uStack_218._4_4_ = uStack_17c;
  uVar14 = uStack_1c4;
  if (uStack_1c4 != uVar4) {
    puVar17 = *(uint **)(param_1 + 0x120);
    if (*(uint **)(param_1 + 0x120) == (uint *)0x0) {
      puVar17 = puVar1;
    }
    uVar14 = puVar17[local_1d8] & local_1c8;
    while (uVar14 == 0) {
      lVar15 = (longlong)local_1d8;
      local_1c0 = local_1c0 + 0x20;
      iVar16 = local_1d8 + 1;
      bVar6 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_1d8;
      local_1d8 = iVar16;
      if (bVar6) goto LAB_14057a13f;
      uVar14 = puVar17[lVar15 + 1];
      local_1c8 = 0xffffffff;
    }
    uVar14 = -uVar14 & uVar14;
    local_1b4 = 0x1f;
    if (uVar14 != 0) {
      for (; uVar14 >> local_1b4 == 0; local_1b4 = local_1b4 + -1) {
      }
    }
    if (uVar14 == 0) {
      iVar16 = 0x20;
    }
    else {
      iVar16 = 0x1f - local_1b4;
    }
    uStack_1c4 = (local_1c0 - iVar16) + 0x1f;
    uVar14 = uStack_1c4;
    if ((int)uVar4 < (int)uStack_1c4) {
LAB_14057a13f:
      uStack_1c4 = uVar4;
      uVar14 = uVar4;
    }
  }
  while( true ) {
    if (((uStack_17c == uVar14) && (local_188 == puVar1)) && (local_198 == plVar3)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
      return 0x3fb;
    }
    lVar15 = (longlong)(int)uStack_17c * 0x68 + *local_198;
    FString::FString(local_148,lVar15);
    FString::FString(local_138,lVar15 + 0x10);
    FString::FString(local_128,lVar15 + 0x20);
    plVar10 = *(longlong **)(lVar15 + 0x50);
    plVar5 = *(longlong **)(lVar15 + 0x58);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    cVar8 = (**(code **)(*plVar10 + 0x10))();
    if (cVar8 == '\x02') break;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar5 + 1;
      lVar15 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar16 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar16 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    if (local_128[0] != 0) {
      FMemory::Free();
    }
    if (local_138[0] != 0) {
      FMemory::Free();
    }
    if (local_148[0] != 0) {
      FMemory::Free();
    }
    uStack_180 = uStack_180 & ~uStack_18c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_190);
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar15 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  if (local_128[0] != 0) {
    FMemory::Free();
  }
  if (local_138[0] != 0) {
    FMemory::Free();
  }
  if (local_148[0] != 0) {
    FMemory::Free();
  }
  local_248 = (longlong *)0x0;
  local_240 = 0;
  plVar10 = (longlong *)
            TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x80,local_170);
  plVar3 = (longlong *)plVar10[1];
  lVar15 = *plVar10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (local_168 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_168 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_168)(local_168);
      LOCK();
      piVar2 = (int *)((longlong)local_168 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_168 + 8))(local_168,1);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar3 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plStack_228 = (longlong *)0x0;
  puStack_220 = (uint *)((ulonglong)puStack_220 & 0xffffffff00000000);
  local_230 = (longlong *)param_1;
  if (((param_3 != &plStack_228) && (*(int *)(param_3 + 1) != 0)) &&
     (plVar10 = *param_3, plVar10 != (longlong *)0x0)) {
    (**(code **)(*plVar10 + 0x30))(plVar10,&plStack_228);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  uStack_218 = lVar15;
  plStack_210 = plVar3;
  plVar10 = (longlong *)FMemory::Realloc(0,0x40);
  local_160 = plVar10;
  if (plVar10 == (longlong *)0x0) {
    if ((local_240 != 0) && (local_248 != (longlong *)0x0)) {
      (**(code **)(*local_248 + 0x28))(local_248,0);
      if (local_248 != (longlong *)0x0) {
        local_248 = (longlong *)FMemory::Realloc(local_248,0,0);
      }
    }
  }
  else {
    *plVar10 = (longlong)&PTR_GetPoolName_143fc5500;
    plVar10[1] = (longlong)local_230;
    plVar10[2] = 0;
    *(undefined4 *)(plVar10 + 3) = 0;
    if (((&plStack_228 != (longlong **)(plVar10 + 2)) && ((int)puStack_220 != 0)) &&
       (plStack_228 != (longlong *)0x0)) {
      (**(code **)(*plStack_228 + 0x30))();
    }
    plVar10[4] = uStack_218;
    plVar10[5] = (longlong)plStack_210;
    plStack_210 = (longlong *)0x0;
    uStack_218 = 0;
    lVar15 = FDelegateHandle::GenerateNewID();
    plVar10[7] = lVar15;
    *plVar10 = (longlong)&PTR_GetPoolName_143fc5548;
    FUN_14057b7a0(plVar10,&local_248);
    (**(code **)(*plVar10 + 0x28))(plVar10,0);
    local_160 = (longlong *)FMemory::Realloc(plVar10,0,0);
    if (local_160 != (longlong *)0x0) {
      FMemory::Free(local_160);
    }
  }
  plVar10 = plStack_210;
  puVar12 = (undefined8 *)0x0;
  if (plStack_210 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_210 + 1;
    lVar15 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plStack_210)(plStack_210);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&plStack_228);
  local_1e8 = (longlong *)0x0;
  local_1e0 = 0;
  if ((local_240 != 0) && (local_248 != (longlong *)0x0)) {
    (**(code **)(*local_248 + 0x30))(local_248,&local_1e8);
  }
  if (DAT_1468535b8 == (undefined8 *)0x0) {
    puVar11 = (undefined8 *)operator_new(0x18);
    DAT_1468535b8 = puVar12;
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[2] = 2;
      DAT_1468535b8 = puVar11;
    }
  }
  puVar11 = DAT_1468535b8;
  _guard_xfg_dispatch_icall_nop(&local_238);
  *(undefined4 *)(local_238 + 0x30) = 1;
  if (1 < *(int *)(param_1 + 0xf8)) {
    lVar15 = TStringConversion<FTCHARToUTF8_Convert,128>::
             TStringConversion<FTCHARToUTF8_Convert,128>(local_e8,*(undefined8 *)(param_1 + 0xf0));
    puVar12 = (undefined8 *)_guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar15 + 0x88));
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  *(undefined8 **)(local_238 + 0x38) = puVar12;
  uVar13 = vx_fstrdup(local_1b0);
  local_1a8 = 0;
  local_1a0 = 0;
  *(undefined8 *)(local_238 + 0x40) = uVar13;
  if ((local_1e0 != 0) && (local_1e8 != (longlong *)0x0)) {
    (**(code **)(*local_1e8 + 0x30))(local_1e8,&local_1a8);
  }
  uVar9 = FUN_140584410(puVar11,local_238,&local_1a8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1e8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar3 + 1;
    lVar15 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (local_240 != 0) {
    if (local_248 == (longlong *)0x0) goto LAB_14057a636;
    (**(code **)(*local_248 + 0x28))(local_248,0);
    if (local_248 != (longlong *)0x0) {
      local_248 = (longlong *)FMemory::Realloc(local_248,0,0);
    }
    local_240 = 0;
  }
  if (local_248 != (longlong *)0x0) {
    FMemory::Free(local_248);
  }
LAB_14057a636:
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return uVar9;
}



// FUNCTION 14057a680 FUN_14057a680 body=8 status=ok
// SIG undefined FUN_14057a680(void)

longlong FUN_14057a680(longlong param_1)

{
  return param_1 + 0x1a0;
}



// FUNCTION 14057a690 FUN_14057a690 body=852 status=ok
// SIG undefined FUN_14057a690(void)

ulonglong FUN_14057a690(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  char *pcVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  bool bVar14;
  int local_b8;
  uint uStack_b4;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  uint uStack_84;
  int iStack_68;
  uint uStack_64;
  uint *local_60;
  uint uStack_58;
  uint uStack_54;
  undefined8 local_50;
  
  lVar7 = *(longlong *)(param_1 + 0x50);
  if ((*(char *)(lVar7 + 0x4a0) == '\0') &&
     (iVar3 = _guard_xfg_dispatch_icall_nop(0,lVar7 + 0x4a4), iVar3 == 0)) {
    *(undefined1 *)(lVar7 + 0x4a0) = 1;
  }
  if (DAT_1468535b8 == (undefined8 *)0x0) {
    DAT_1468535b8 = (undefined8 *)operator_new(0x18);
    if (DAT_1468535b8 == (undefined8 *)0x0) {
      DAT_1468535b8 = (undefined8 *)0x0;
    }
    else {
      *DAT_1468535b8 = 0;
      DAT_1468535b8[1] = 0;
      DAT_1468535b8[2] = 2;
    }
  }
  uVar4 = _guard_xfg_dispatch_icall_nop();
  if ((int)uVar4 == 0) {
    local_b8 = 0;
    uVar2 = *(uint *)(param_1 + 0x100);
    puVar1 = (uint *)(param_1 + 0xe8);
    uStack_b4 = 1;
    uStack_a4 = 0;
    iStack_a0 = 0;
    if (uVar2 != 0) {
      puVar12 = *(uint **)(param_1 + 0xf8);
      if (*(uint **)(param_1 + 0xf8) == (uint *)0x0) {
        puVar12 = puVar1;
      }
      uVar11 = *puVar12;
      iStack_a0 = 0;
      local_b8 = 0;
      while (uVar11 == 0) {
        lVar7 = (longlong)local_b8;
        iStack_a0 = iStack_a0 + 0x20;
        iVar3 = local_b8 + 1;
        bVar14 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b8;
        local_b8 = iVar3;
        if (bVar14) goto LAB_14057a7ec;
        uVar11 = puVar12[lVar7 + 1];
      }
      uStack_b4 = -uVar11 & uVar11;
      iVar3 = 0x1f;
      if (uStack_b4 != 0) {
        for (; uStack_b4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      if (uStack_b4 == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = 0x1f - iVar3;
      }
      uStack_a4 = (iStack_a0 - iVar3) + 0x1f;
      if ((int)uVar2 < (int)uStack_a4) {
LAB_14057a7ec:
        uStack_a4 = uVar2;
      }
    }
    uStack_84 = *(uint *)(param_1 + 0x100);
    uStack_58 = 0xffffffff;
    uStack_54 = uStack_a4;
    local_50 = CONCAT44(uStack_9c,iStack_a0);
    uVar11 = uStack_84 & 0xffffffe0;
    iStack_68 = local_b8;
    uStack_64 = uStack_b4;
    local_60 = puVar1;
    if (uStack_84 != uVar2) {
      puVar12 = *(uint **)(param_1 + 0xf8);
      if (*(uint **)(param_1 + 0xf8) == (uint *)0x0) {
        puVar12 = puVar1;
      }
      uVar6 = puVar12[(int)uStack_84 >> 5] & -1 << ((byte)uStack_84 & 0x1f);
      iVar3 = (int)uStack_84 >> 5;
      while (uVar6 == 0) {
        uVar11 = uVar11 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar3)
        goto LAB_14057a8b2;
        uVar6 = puVar12[(longlong)iVar3 + 1];
        iVar3 = iVar3 + 1;
      }
      uVar6 = -uVar6 & uVar6;
      iVar3 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      if (uVar6 == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = 0x1f - iVar3;
      }
      uStack_84 = (uVar11 - iVar3) + 0x1f;
      if ((int)uVar2 < (int)uStack_84) {
LAB_14057a8b2:
        uStack_84 = uVar2;
      }
    }
    while ((uStack_54 != uStack_84 || (local_60 != puVar1))) {
      lVar7 = (longlong)(int)uStack_54 * 0x20 + *(longlong *)(param_1 + 0xd8);
      iVar3 = *(int *)(lVar7 + 0x10);
      if (iVar3 != 0) {
        iVar13 = 0;
        iVar9 = 0;
        lVar8 = 0;
        pcVar5 = (char *)(**(code **)(*(longlong *)**(undefined8 **)(lVar7 + 8) + 0x28))();
        bVar14 = *pcVar5 != '\x01';
        iVar10 = iVar9;
joined_r0x00014057a91d:
        do {
          lVar8 = lVar8 + 1;
          iVar9 = iVar9 + 1;
          if (lVar8 < iVar3) {
            pcVar5 = (char *)(**(code **)(**(longlong **)(*(longlong *)(lVar7 + 8) + lVar8 * 8) +
                                         0x28))();
            if (bVar14 == (*pcVar5 != '\x01')) goto joined_r0x00014057a91d;
          }
          if (bVar14 != false) {
            if (iVar13 != iVar10) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(lVar7 + 8) + (longlong)iVar13 * 8),
                         (void *)(*(longlong *)(lVar7 + 8) + (longlong)iVar10 * 8),
                         (longlong)(iVar9 - iVar10) << 3);
            }
            iVar13 = iVar13 + (iVar9 - iVar10);
          }
          bVar14 = (bool)(bVar14 ^ 1);
          iVar10 = iVar9;
        } while (lVar8 < iVar3);
        *(int *)(lVar7 + 0x10) = iVar13;
      }
      uStack_58 = uStack_58 & ~uStack_64;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_68);
    }
    uVar4 = uVar4 & 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 14057a9f0 FUN_14057a9f0 body=481 status=ok
// SIG undefined FUN_14057a9f0(void)

ulonglong FUN_14057a9f0(longlong param_1,byte *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  char *pcVar4;
  ulonglong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar11;
  byte *pbVar12;
  bool bVar13;
  byte *pbVar10;
  
  lVar3 = *(longlong *)(param_1 + 0x50);
  if ((*(char *)(lVar3 + 0x4a0) == '\0') &&
     (iVar1 = _guard_xfg_dispatch_icall_nop(0,lVar3 + 0x4a4), iVar1 == 0)) {
    *(undefined1 *)(lVar3 + 0x4a0) = 1;
  }
  lVar3 = *(longlong *)(param_1 + 0x50);
  pbVar6 = (byte *)0x0;
  if (DAT_1468535b8 == (undefined8 *)0x0) {
    DAT_1468535b8 = (undefined8 *)operator_new(0x18);
    if (DAT_1468535b8 == (undefined8 *)0x0) {
      DAT_1468535b8 = (undefined8 *)0x0;
    }
    else {
      *DAT_1468535b8 = 0;
      DAT_1468535b8[1] = 0;
      DAT_1468535b8[2] = 2;
    }
  }
  uVar2 = _guard_xfg_dispatch_icall_nop(*(undefined4 *)(lVar3 + 0x4a4),*param_2);
  uVar5 = uVar2;
  if ((int)uVar2 == 0) {
    if (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c)) {
      lVar3 = *(longlong *)(param_1 + 0x118);
      if (*(longlong *)(param_1 + 0x118) == 0) {
        lVar3 = param_1 + 0x110;
      }
      iVar1 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0x120) - 1U & (ulonglong)*param_2) * 4)
      ;
      if (iVar1 != -1) {
        do {
          pbVar7 = (byte *)((longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0xd8));
          if (*pbVar7 == *param_2) {
            if (iVar1 != -1) goto LAB_14057aaf1;
            break;
          }
          iVar1 = *(int *)(pbVar7 + 0x18);
        } while (iVar1 != -1);
      }
    }
    pbVar7 = pbVar6;
LAB_14057aaf1:
    iVar1 = *(int *)(pbVar7 + 0x10);
    uVar5 = uVar2 & 0xffffffff;
    if (iVar1 != 0) {
      pcVar4 = (char *)(**(code **)(*(longlong *)**(undefined8 **)(pbVar7 + 8) + 0x28))();
      bVar13 = *pcVar4 != '\x01';
      pbVar10 = pbVar6;
      pbVar12 = pbVar6;
      do {
        uVar8 = (uint)pbVar10;
        uVar9 = uVar8;
        do {
          pbVar6 = pbVar6 + 1;
          uVar9 = uVar9 + 1;
          pbVar10 = (byte *)(ulonglong)uVar9;
          if ((longlong)iVar1 <= (longlong)pbVar6) break;
          pcVar4 = (char *)(**(code **)(**(longlong **)
                                          (*(longlong *)(pbVar7 + 8) + (longlong)pbVar6 * 8) + 0x28)
                           )();
        } while (bVar13 == (*pcVar4 != '\x01'));
        if (bVar13 != false) {
          uVar11 = (uint)pbVar12;
          if (uVar11 != uVar8) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(pbVar7 + 8) + (longlong)(int)uVar11 * 8),
                       (void *)(*(longlong *)(pbVar7 + 8) + (longlong)(int)uVar8 * 8),
                       (longlong)(int)(uVar9 - uVar8) << 3);
          }
          pbVar12 = (byte *)(ulonglong)(uVar11 + (uVar9 - uVar8));
        }
        bVar13 = (bool)(bVar13 ^ 1);
        if ((longlong)iVar1 <= (longlong)pbVar6) {
          *(int *)(pbVar7 + 0x10) = (int)pbVar12;
          return uVar2 & 0xffffffff;
        }
      } while( true );
    }
  }
  return uVar5;
}



// FUNCTION 14057abe0 FUN_14057abe0 body=393 status=ok
// SIG undefined FUN_14057abe0(void)

int FUN_14057abe0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  byte *pbVar6;
  longlong lVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  
  lVar7 = *(longlong *)(param_1 + 0x50);
  if ((*(char *)(lVar7 + 0x4a0) == '\0') &&
     (iVar2 = _guard_xfg_dispatch_icall_nop(0,lVar7 + 0x4a4), iVar2 == 0)) {
    *(undefined1 *)(lVar7 + 0x4a0) = 1;
  }
  lVar7 = *(longlong *)(param_1 + 0x50);
  if (DAT_1468535b8 == (undefined8 *)0x0) {
    DAT_1468535b8 = (undefined8 *)operator_new(0x18);
    if (DAT_1468535b8 == (undefined8 *)0x0) {
      DAT_1468535b8 = (undefined8 *)0x0;
    }
    else {
      *DAT_1468535b8 = 0;
      DAT_1468535b8[1] = 0;
      DAT_1468535b8[2] = 2;
    }
  }
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x20))(param_2);
  iVar2 = _guard_xfg_dispatch_icall_nop(*(undefined4 *)(lVar7 + 0x4a4),*puVar4);
  pcVar5 = (char *)(**(code **)(*param_2 + 0x28))(param_2);
  if ((*pcVar5 == '\x01') && (iVar2 == 0)) {
    pbVar6 = (byte *)(**(code **)(*param_2 + 0x18))(param_2);
    if (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c)) {
      lVar7 = *(longlong *)(param_1 + 0x118);
      if (*(longlong *)(param_1 + 0x118) == 0) {
        lVar7 = param_1 + 0x110;
      }
      iVar3 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x120) - 1U & (ulonglong)*pbVar6) * 4);
      if (iVar3 != -1) {
        do {
          pbVar9 = (byte *)((longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0xd8));
          if (*pbVar9 == *pbVar6) {
            if (iVar3 != -1) goto LAB_14057ad02;
            break;
          }
          iVar3 = *(int *)(pbVar9 + 0x18);
        } while (iVar3 != -1);
      }
    }
    pbVar9 = (byte *)0x0;
LAB_14057ad02:
    puVar1 = *(undefined8 **)(pbVar9 + 8);
    for (puVar8 = puVar1; puVar8 != puVar1 + *(int *)(pbVar9 + 0x10); puVar8 = puVar8 + 1) {
      if ((longlong *)*puVar8 == param_2) {
        iVar2 = (int)((longlong)puVar8 - (longlong)puVar1 >> 3);
        if (iVar2 == -1) {
          return 0;
        }
        _guard_xfg_dispatch_icall_nop
                  (puVar1 + iVar2,puVar1 + iVar2 + 1,
                   (longlong)((*(int *)(pbVar9 + 0x10) - iVar2) + -1) << 3);
        *(int *)(pbVar9 + 0x10) = *(int *)(pbVar9 + 0x10) + -1;
        return 0;
      }
    }
  }
  return iVar2;
}



// FUNCTION 14057ad70 Channel body=96 status=ok
// SIG undefined Channel(void)

longlong ChannelSession::Channel(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FString::FString(param_2,param_1 + 0x140);
  FString::FString(param_2 + 0x10,param_1 + 0x150);
  FString::FString(param_2 + 0x20,param_1 + 0x160);
  *(undefined1 *)(param_2 + 0x30) = *(undefined1 *)(param_1 + 0x170);
  uVar1 = *(undefined8 *)(param_1 + 0x180);
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_1 + 0x178);
  *(undefined8 *)(param_2 + 0x40) = uVar1;
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_1 + 0x188);
  return param_2;
}



// FUNCTION 14057add0 Bytes body=5 status=ok
// SIG uchar * Bytes(WriteBytesMem * this)

/* public: virtual unsigned char * __ptr64 __cdecl AK::WriteBytesMem::Bytes(void)const __ptr64 */

uchar * __thiscall AK::WriteBytesMem::Bytes(WriteBytesMem *this)

{
                    /* 0x57add0  73  ?Bytes@WriteBytesMem@AK@@UEBAPEAEXZ */
  return *(uchar **)(this + 0x10);
}



// FUNCTION 14057ade0 FUN_14057ade0 body=8 status=ok
// SIG undefined FUN_14057ade0(void)

undefined8 FUN_14057ade0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



// FUNCTION 14057ae10 FUN_14057ae10 body=207 status=ok
// SIG undefined FUN_14057ae10(void)

void FUN_14057ae10(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int local_res8 [2];
  undefined **local_28;
  undefined1 local_20;
  longlong *local_18;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if ((cVar1 != '\x01') && (cVar1 = (**(code **)(*param_1 + 0x18))(param_1), cVar1 != '\x01')) {
    (**(code **)(*(longlong *)param_1[0x1b] + 0x48))();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x28))(param_1);
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::FindId(plVar2,local_res8);
    lVar4 = 0;
    if (local_res8[0] != -1) {
      lVar4 = (longlong)local_res8[0] * 0x20 + *plVar2;
    }
    lVar3 = lVar4 + 0x10;
    if (lVar4 == 0) {
      lVar3 = 0;
    }
    if ((lVar3 != 0) && (*(char *)((longlong)param_1 + 0xe2) != '\x02')) {
      *(undefined1 *)((longlong)param_1 + 0xe2) = 2;
      local_28 = &PTR_FUN_143fc45e0;
      local_20 = 2;
      local_18 = param_1;
      TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 7,&local_28);
    }
  }
  return;
}



// FUNCTION 14057aee0 FUN_14057aee0 body=111 status=ok
// SIG undefined FUN_14057aee0(void)

void FUN_14057aee0(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    if ((DAT_1468535b8 == (undefined8 *)0x0) &&
       (puVar1 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = (undefined8 *)0x0,
       puVar1 != (undefined8 *)0x0)) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 2;
      DAT_1468535b8 = puVar1;
    }
    TBaseMulticastDelegate<void>::Remove(DAT_1468535b8,*(undefined8 *)(param_1 + 0x2b8));
    *(undefined8 *)(param_1 + 0x2b8) = 0;
  }
  return;
}



// FUNCTION 14057af50 FUN_14057af50 body=177 status=ok
// SIG undefined FUN_14057af50(void)

void FUN_14057af50(longlong param_1)

{
  undefined ***pppuVar1;
  undefined **local_28;
  longlong local_20 [2];
  undefined4 local_10;
  undefined1 local_c;
  
  TSet<TTuple<FString,AHomeCharacter_*>,TDefaultMapHashableKeyFuncs<FString,AHomeCharacter_*,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x58,0);
  pppuVar1 = (undefined ***)(param_1 + 0xa8);
  if (pppuVar1 != &local_28) {
    if (*pppuVar1 != (undefined **)0x0) {
      FMemory::Free();
    }
    *pppuVar1 = (undefined **)0x0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  local_20[0] = 0;
  local_28 = &PTR__scalar_deleting_destructor__143fc44d0;
  local_20[1] = 0;
  local_c = 0;
  FString::operator=(param_1 + 0xc0,local_20);
  *(undefined4 *)(param_1 + 0xd0) = local_10;
  *(undefined1 *)(param_1 + 0xd4) = local_c;
  if (local_20[0] != 0) {
    FMemory::Free();
  }
  TSet<TTuple<enum_EGLevitateAutoActivateMode,FGTutorialStepTextOverride>,TDefaultMapHashableKeyFuncs<enum_EGLevitateAutoActivateMode,FGTutorialStepTextOverride,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0xd8,0);
  return;
}



// FUNCTION 14057b010 FUN_14057b010 body=241 status=ok
// SIG undefined FUN_14057b010(void)

void FUN_14057b010(longlong param_1)

{
  char cVar1;
  longlong local_58 [6];
  undefined1 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  undefined1 local_10;
  undefined7 uStack_f;
  
  cVar1 = ChannelId::operator==(param_1 + 0x2c8);
  if (cVar1 != '\0') {
    uStack_18 = 0x3ff0000000000000;
    local_58[0] = 0;
    local_58[1] = 0;
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    local_10 = 0;
    local_28 = 0;
    local_20 = 0xa8c;
    uStack_1c = 0x5a;
    FString::operator=(param_1 + 0x2c8,local_58);
    FString::operator=(param_1 + 0x2d8,local_58 + 2);
    FString::operator=(param_1 + 0x2e8,local_58 + 4);
    *(undefined1 *)(param_1 + 0x2f8) = local_28;
    *(undefined4 *)(param_1 + 0x300) = local_20;
    *(undefined4 *)(param_1 + 0x304) = uStack_1c;
    *(undefined4 *)(param_1 + 0x308) = (undefined4)uStack_18;
    *(undefined4 *)(param_1 + 0x30c) = uStack_18._4_4_;
    *(ulonglong *)(param_1 + 0x310) = CONCAT71(uStack_f,local_10);
    if (local_58[4] != 0) {
      FMemory::Free();
    }
    if (local_58[2] != 0) {
      FMemory::Free();
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    *(undefined1 *)(param_1 + 0x2c0) = 0;
  }
  return;
}



// FUNCTION 14057b120 FUN_14057b120 body=161 status=ok
// SIG undefined FUN_14057b120(void)

undefined8 FUN_14057b120(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      FUN_140586340(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14057b1d0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      FUN_1405865a0(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14057b280 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<enum_EGLevitateAutoActivateMode,FGTutorialStepTextOverride>,TDefaultMapHashableKeyFuncs<enum_EGLevitateAutoActivateMode,FGTutorialStepTextOverride,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      TSet<TTuple<unsigned_char,TArray<FGuid,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<unsigned_char,TArray<FGuid,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14057b330 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      FUN_140586a20(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14057b3e0 FUN_14057b3e0 body=296 status=ok
// SIG undefined FUN_14057b3e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_14057b3e0(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5,longlong *param_6)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_108 [32];
  longlong local_e8 [2];
  undefined4 local_d8;
  undefined1 local_c8 [128];
  longlong local_48;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  _guard_xfg_dispatch_icall_nop(local_e8);
  if (*(int *)(param_2 + 1) < 2) {
    uVar4 = 0;
  }
  else {
    lVar3 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                      (local_c8,*param_2);
    uVar4 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar3 + 0x88));
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
  *(undefined8 *)(local_e8[0] + 0x30) = uVar4;
  *(undefined4 *)(local_e8[0] + 0x38) = param_3;
  uVar4 = vx_fstrdup(param_4);
  local_e8[1] = 0;
  local_d8 = 0;
  *(undefined8 *)(local_e8[0] + 0x40) = uVar4;
  *(undefined4 *)(local_e8[0] + 0x48) = param_5;
  if (((param_6 != local_e8 + 1) && ((int)param_6[1] != 0)) &&
     (plVar1 = (longlong *)*param_6, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,local_e8 + 1);
  }
  uVar2 = FUN_140584410(param_1,local_e8[0],local_e8 + 1);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_6);
  return uVar2;
}



// FUNCTION 14057b510 FUN_14057b510 body=66 status=ok
// SIG undefined FUN_14057b510(void)

void FUN_14057b510(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_143fc4c00;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_143fc4c48;
  }
  return;
}



// FUNCTION 14057b560 FUN_14057b560 body=66 status=ok
// SIG undefined FUN_14057b560(void)

void FUN_14057b560(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_143fc4f60;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_143fc4fa8;
  }
  return;
}



// FUNCTION 14057b5b0 FUN_14057b5b0 body=66 status=ok
// SIG undefined FUN_14057b5b0(void)

void FUN_14057b5b0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_143fc4930;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_143fc4978;
  }
  return;
}



// FUNCTION 14057b600 FUN_14057b600 body=143 status=ok
// SIG undefined FUN_14057b600(void)

void FUN_14057b600(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new();
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_143fc4db0;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = 0;
    if ((((longlong *)(param_1 + 0x10) != puVar3 + 2) && (*(int *)(param_1 + 0x18) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x10), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar3[4] = *(undefined8 *)(param_1 + 0x20);
    lVar2 = *(longlong *)(param_1 + 0x28);
    puVar3[5] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    puVar3[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar3 = &PTR_GetPoolName_143fc4df8;
  }
  return;
}



// FUNCTION 14057b690 FUN_14057b690 body=118 status=ok
// SIG undefined FUN_14057b690(void)

void FUN_14057b690(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_143fc5470;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + 3) = 0;
    if ((((longlong *)(param_1 + 0x10) != puVar2 + 2) && (*(int *)(param_1 + 0x18) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x10), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_143fc54b8;
  }
  return;
}



// FUNCTION 14057b710 FUN_14057b710 body=143 status=ok
// SIG undefined FUN_14057b710(void)

void FUN_14057b710(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new();
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_143fc5350;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = 0;
    if ((((longlong *)(param_1 + 0x10) != puVar3 + 2) && (*(int *)(param_1 + 0x18) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x10), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar3[4] = *(undefined8 *)(param_1 + 0x20);
    lVar2 = *(longlong *)(param_1 + 0x28);
    puVar3[5] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    puVar3[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar3 = &PTR_GetPoolName_143fc5398;
  }
  return;
}



// FUNCTION 14057b7a0 FUN_14057b7a0 body=143 status=ok
// SIG undefined FUN_14057b7a0(void)

void FUN_14057b7a0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new();
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_143fc5500;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = 0;
    if ((((longlong *)(param_1 + 0x10) != puVar3 + 2) && (*(int *)(param_1 + 0x18) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x10), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar3[4] = *(undefined8 *)(param_1 + 0x20);
    lVar2 = *(longlong *)(param_1 + 0x28);
    puVar3[5] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    puVar3[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar3 = &PTR_GetPoolName_143fc5548;
  }
  return;
}



// FUNCTION 14057b830 FUN_14057b830 body=143 status=ok
// SIG undefined FUN_14057b830(void)

void FUN_14057b830(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new();
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_143fc4c90;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = 0;
    if ((((longlong *)(param_1 + 0x10) != puVar3 + 2) && (*(int *)(param_1 + 0x18) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x10), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar3[4] = *(undefined8 *)(param_1 + 0x20);
    lVar2 = *(longlong *)(param_1 + 0x28);
    puVar3[5] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    puVar3[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar3 = &PTR_GetPoolName_143fc4cd8;
  }
  return;
}



// FUNCTION 14057b8c0 FUN_14057b8c0 body=66 status=ok
// SIG undefined FUN_14057b8c0(void)

void FUN_14057b8c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_143fc4ae0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_143fc4b28;
  }
  return;
}



// FUNCTION 14057b910 FUN_14057b910 body=143 status=ok
// SIG undefined FUN_14057b910(void)

void FUN_14057b910(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new();
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_143fc4ff0;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = 0;
    if ((((longlong *)(param_1 + 0x10) != puVar3 + 2) && (*(int *)(param_1 + 0x18) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x10), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar3[4] = *(undefined8 *)(param_1 + 0x20);
    lVar2 = *(longlong *)(param_1 + 0x28);
    puVar3[5] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    puVar3[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar3 = &PTR_GetPoolName_143fc5038;
  }
  return;
}



// FUNCTION 14057b9a0 FUN_14057b9a0 body=179 status=ok
// SIG undefined FUN_14057b9a0(void)

void FUN_14057b9a0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new();
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_143fc51a0;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = 0;
    if ((((longlong *)(param_1 + 0x10) != puVar3 + 2) && (*(int *)(param_1 + 0x18) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x10), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar3[4] = *(undefined8 *)(param_1 + 0x20);
    lVar2 = *(longlong *)(param_1 + 0x28);
    puVar3[5] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    FUN_1405343b0(puVar3 + 6,param_1 + 0x30);
    *(undefined1 *)(puVar3 + 0x12) = *(undefined1 *)(param_1 + 0x90);
    puVar3[0x14] = *(undefined8 *)(param_1 + 0xa0);
    *puVar3 = &PTR_GetPoolName_143fc51e8;
  }
  return;
}



// FUNCTION 14057ba60 FUN_14057ba60 body=143 status=ok
// SIG undefined FUN_14057ba60(void)

void FUN_14057ba60(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new();
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_143fc4e40;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = 0;
    if ((((longlong *)(param_1 + 0x10) != puVar3 + 2) && (*(int *)(param_1 + 0x18) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x10), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar3[4] = *(undefined8 *)(param_1 + 0x20);
    lVar2 = *(longlong *)(param_1 + 0x28);
    puVar3[5] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    puVar3[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar3 = &PTR_GetPoolName_143fc4e88;
  }
  return;
}



// FUNCTION 14057baf0 FUN_14057baf0 body=143 status=ok
// SIG undefined FUN_14057baf0(void)

void FUN_14057baf0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new();
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_143fc53e0;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = 0;
    if ((((longlong *)(param_1 + 0x10) != puVar3 + 2) && (*(int *)(param_1 + 0x18) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x10), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar3[4] = *(undefined8 *)(param_1 + 0x20);
    lVar2 = *(longlong *)(param_1 + 0x28);
    puVar3[5] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    puVar3[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar3 = &PTR_GetPoolName_143fc5428;
  }
  return;
}



// FUNCTION 14057bb80 FUN_14057bb80 body=66 status=ok
// SIG undefined FUN_14057bb80(void)

void FUN_14057bb80(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_143fc4ed0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_143fc4f18;
  }
  return;
}



// FUNCTION 14057bbd0 FUN_14057bbd0 body=118 status=ok
// SIG undefined FUN_14057bbd0(void)

void FUN_14057bbd0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_143fc49c0;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + 3) = 0;
    if ((((longlong *)(param_1 + 0x10) != puVar2 + 2) && (*(int *)(param_1 + 0x18) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x10), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_143fc4a08;
  }
  return;
}



// FUNCTION 14057bc50 FUN_14057bc50 body=143 status=ok
// SIG undefined FUN_14057bc50(void)

void FUN_14057bc50(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new();
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_143fc52c0;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = 0;
    if ((((longlong *)(param_1 + 0x10) != puVar3 + 2) && (*(int *)(param_1 + 0x18) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x10), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar3[4] = *(undefined8 *)(param_1 + 0x20);
    lVar2 = *(longlong *)(param_1 + 0x28);
    puVar3[5] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    puVar3[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar3 = &PTR_GetPoolName_143fc5308;
  }
  return;
}



// FUNCTION 14057bce0 FUN_14057bce0 body=66 status=ok
// SIG undefined FUN_14057bce0(void)

void FUN_14057bce0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_143fc4b70;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_143fc4bb8;
  }
  return;
}



// FUNCTION 14057bd30 FUN_14057bd30 body=91 status=ok
// SIG undefined FUN_14057bd30(void)

void FUN_14057bd30(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_143fc4a50;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    FString::FString(puVar1 + 2,param_1 + 0x10);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar1 = &PTR_GetPoolName_143fc4a98;
  }
  return;
}



// FUNCTION 14057bd90 CreateCopy body=94 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(ovrMessage_*,bool),<lambda_1e98f5a82a74eb380ee7c9b8dfb84486>_>
     ::CreateCopy(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_143fc4d20;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 0x18);
    puVar2[3] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_143fc4d68;
  }
  return;
}



// FUNCTION 14057bdf0 FUN_14057bdf0 body=221 status=ok
// SIG undefined FUN_14057bdf0(void)

void FUN_14057bdf0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x98);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_143fc5230;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = 0;
    if ((((longlong *)(param_1 + 0x10) != puVar3 + 2) && (*(int *)(param_1 + 0x18) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x10), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar3[4] = *(undefined8 *)(param_1 + 0x20);
    lVar2 = *(longlong *)(param_1 + 0x28);
    puVar3[5] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 100) = 0;
    puVar3[0xe] = 0;
    *(undefined4 *)(puVar3 + 0xf) = 0;
    FUN_14056fbf0(puVar3 + 6,param_1 + 0x30);
    *(undefined1 *)(puVar3 + 0x10) = *(undefined1 *)(param_1 + 0x80);
    puVar3[0x12] = *(undefined8 *)(param_1 + 0x90);
    *puVar3 = &PTR_GetPoolName_143fc5278;
  }
  return;
}



// FUNCTION 14057bed0 FUN_14057bed0 body=343 status=ok
// SIG undefined FUN_14057bed0(void)

void FUN_14057bed0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x148);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_143fc5080;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    FString::FString(puVar3 + 2,param_1 + 0x10);
    *(undefined1 *)(puVar3 + 4) = *(undefined1 *)(param_1 + 0x20);
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    *(undefined4 *)(puVar3 + 0xb) = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0x5c) = 0;
    puVar3[0xd] = 0;
    *(undefined4 *)(puVar3 + 0xe) = 0;
    FUN_14056fbf0(puVar3 + 5,param_1 + 0x28);
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    *(undefined4 *)(puVar3 + 0x15) = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0xac) = 0;
    puVar3[0x17] = 0;
    *(undefined4 *)(puVar3 + 0x18) = 0;
    FUN_14056fbf0(puVar3 + 0xf,param_1 + 0x78);
    puVar3[0x19] = 0;
    puVar3[0x1a] = 0;
    puVar3[0x1d] = 0;
    puVar3[0x1e] = 0;
    *(undefined4 *)(puVar3 + 0x1f) = 0xffffffff;
    *(undefined4 *)((longlong)puVar3 + 0xfc) = 0;
    puVar3[0x21] = 0;
    *(undefined4 *)(puVar3 + 0x22) = 0;
    FUN_14056fbf0(puVar3 + 0x19,param_1 + 200);
    puVar3[0x23] = 0;
    *(undefined4 *)(puVar3 + 0x24) = 0;
    if ((((longlong *)(param_1 + 0x118) != puVar3 + 0x23) && (*(int *)(param_1 + 0x120) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x118), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar3[0x25] = *(undefined8 *)(param_1 + 0x128);
    lVar2 = *(longlong *)(param_1 + 0x130);
    puVar3[0x26] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    puVar3[0x28] = *(undefined8 *)(param_1 + 0x140);
    *puVar3 = &PTR_GetPoolName_143fc50c8;
  }
  return;
}



// FUNCTION 14057c030 FUN_14057c030 body=156 status=ok
// SIG undefined FUN_14057c030(void)

void FUN_14057c030(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x50);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_143fc5110;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    FString::FString(puVar3 + 2,param_1 + 0x10);
    puVar3[4] = 0;
    *(undefined4 *)(puVar3 + 5) = 0;
    if ((((longlong *)(param_1 + 0x20) != puVar3 + 4) && (*(int *)(param_1 + 0x28) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x20), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
    lVar2 = *(longlong *)(param_1 + 0x38);
    puVar3[7] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    puVar3[9] = *(undefined8 *)(param_1 + 0x48);
    *puVar3 = &PTR_GetPoolName_143fc5158;
  }
  return;
}



// FUNCTION 14057c0d0 FUN_14057c0d0 body=814 status=ok
// SIG undefined FUN_14057c0d0(void)

undefined8 * FUN_14057c0d0(undefined8 *param_1,longlong param_2,void **param_3)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  void *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68 [2];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  longlong local_38 [2];
  longlong local_28 [2];
  longlong local_18 [2];
  
  if (*(int *)(param_2 + 8) < 2) {
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
  }
  else {
    local_68[0] = 0;
    local_68[1] = 0x21;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
    FGenericPlatformString::Convert<char,wchar_t>
              (local_68[0],0x21,"sip:\\.([^.]+)\\.([^@]+)\\.@([^@]+)",0x21,0x3f);
    FUN_1415cd4d0(local_48,local_68);
    if (local_68[0] != 0) {
      FMemory::Free();
    }
    FUN_1415cd370(local_58,local_48,param_2);
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = (void *)0x0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    cVar4 = FUN_1415d6d60(local_58);
    if (cVar4 == '\0') {
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
    }
    else {
      plVar5 = (longlong *)FUN_1415d9fe0(local_58,local_38,1);
      if (&local_a8 != plVar5) {
        if (local_a8 != 0) {
          FMemory::Free();
        }
        local_a8 = *plVar5;
        *plVar5 = 0;
        local_a0 = plVar5[1];
        plVar5[1] = 0;
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      plVar5 = (longlong *)FUN_1415d9fe0(local_58,local_28,2);
      if (&local_b8 != plVar5) {
        if (local_b8 != 0) {
          FMemory::Free();
        }
        local_b8 = *plVar5;
        *plVar5 = 0;
        local_b0 = plVar5[1];
        plVar5[1] = 0;
      }
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      plVar5 = (longlong *)FUN_1415d9fe0(local_58,local_18,3);
      if (&local_c8 != plVar5) {
        if (local_c8 != 0) {
          FMemory::Free();
        }
        local_c8 = *plVar5;
        *plVar5 = 0;
        local_c0 = plVar5[1];
        plVar5[1] = 0;
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      if ((*(char *)(param_3 + 2) != '\0') && (&local_98 != param_3)) {
        iVar2 = *(int *)(param_3 + 1);
        _Src = *param_3;
        local_90 = CONCAT44(local_90._4_4_,iVar2);
        if ((iVar2 == 0) && (local_90._4_4_ == 0)) {
          local_90 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,iVar2);
          _guard_xfg_dispatch_icall_nop(local_98,_Src,(longlong)iVar2 * 2);
        }
      }
      FUN_1405840c0(&local_c8);
      FUN_1405343b0(param_1,&local_c8);
    }
    FUN_14056ed50(&local_c8);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_50 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 14057c410 FUN_14057c410 body=8 status=ok
// SIG undefined FUN_14057c410(void)

longlong FUN_14057c410(longlong param_1)

{
  return param_1 + 0x298;
}



// FUNCTION 14057c420 FUN_14057c420 body=188 status=ok
// SIG undefined FUN_14057c420(void)

void FUN_14057c420(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  int local_res8 [2];
  
  plVar1 = (longlong *)(param_1 + 0x100);
  piVar3 = (int *)TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
                  ::FindId(plVar1,local_res8,param_2);
  if (*piVar3 != -1) {
    TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
    ::FindId(plVar1,local_res8,param_2);
    lVar5 = 0;
    lVar4 = lVar5;
    if (local_res8[0] != -1) {
      lVar4 = (longlong)local_res8[0] * 0x68 + *plVar1;
    }
    cVar2 = (**(code **)(**(longlong **)(lVar4 + 0x50) + 0x20))();
    if (cVar2 == '\0') {
      TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
      ::Remove(plVar1,param_2);
      return;
    }
    TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
    ::FindId(plVar1,local_res8,param_2);
    if (local_res8[0] != -1) {
      lVar5 = (longlong)local_res8[0] * 0x68 + *plVar1;
    }
    (**(code **)(**(longlong **)(lVar5 + 0x50) + 0x58))(*(longlong **)(lVar5 + 0x50),1);
  }
  return;
}



// FUNCTION 14057c4e0 OnItemSelectionChanged body=5 status=ok
// SIG undefined OnItemSelectionChanged(void)

longlong UListView::OnItemSelectionChanged(longlong param_1)

{
  return param_1 + 0x38;
}



// FUNCTION 14057c4f0 FUN_14057c4f0 body=1277 status=ok
// SIG undefined FUN_14057c4f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14057c4f0(longlong *param_1,undefined1 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  undefined1 auStack_238 [32];
  longlong *local_218;
  int local_210;
  longlong local_208;
  longlong *local_200;
  int local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined **local_1e0;
  undefined1 local_1d8;
  longlong *local_1d0;
  undefined **local_1c8;
  undefined1 local_1c0;
  longlong *local_1b8;
  undefined **local_1b0;
  undefined1 local_1a8;
  longlong *local_1a0;
  undefined1 local_198 [8];
  longlong *local_190;
  longlong *local_188;
  undefined1 local_178 [128];
  longlong local_f8;
  undefined1 local_d8 [128];
  longlong local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  *(undefined1 *)((longlong)param_1 + 0x1b9) = param_2;
  FUN_14057b010(param_1[0x1b],param_1 + 0x28);
  cVar5 = (**(code **)(*param_1 + 0x10))(param_1);
  if ((((cVar5 == '\x01') || (cVar5 = (**(code **)(*param_1 + 0x10))(param_1), cVar5 == '\x02')) ||
      (cVar5 = (**(code **)(*param_1 + 0x18))(param_1), cVar5 == '\x01')) ||
     (cVar5 = (**(code **)(*param_1 + 0x18))(param_1), cVar5 == '\x02')) {
    local_218 = (longlong *)0x0;
    local_210 = 0;
    plVar6 = (longlong *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x19,local_198);
    plVar3 = (longlong *)plVar6[1];
    lVar7 = *plVar6;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_190 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_190)(local_190);
        LOCK();
        piVar1 = (int *)((longlong)local_190 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_190 + 8))(local_190,1);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar6 = plVar3 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
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
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    local_188 = plVar6;
    if (plVar6 == (longlong *)0x0) {
      plVar10 = plVar3;
      if (((local_210 != 0) && (local_218 != (longlong *)0x0)) &&
         ((**(code **)(*local_218 + 0x28))(local_218,0), local_218 != (longlong *)0x0)) {
        local_218 = (longlong *)FMemory::Realloc(local_218,0,0);
      }
    }
    else {
      *plVar6 = (longlong)&PTR_GetPoolName_143fc4d20;
      plVar6[1] = (longlong)param_1;
      plVar6[2] = lVar7;
      plVar6[3] = (longlong)plVar3;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar6[5] = lVar7;
      *plVar6 = (longlong)&PTR_GetPoolName_143fc4d68;
      TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(ovrMessage_*,bool),<lambda_1e98f5a82a74eb380ee7c9b8dfb84486>_>
      ::CreateCopy(plVar6,&local_218);
      plVar10 = (longlong *)0x0;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6,0);
      local_188 = (longlong *)FMemory::Realloc(plVar6,0,0);
      if (local_188 != (longlong *)0x0) {
        FMemory::Free(local_188);
      }
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar10 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar10)(plVar10);
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
    local_200 = (longlong *)0x0;
    local_1f8 = 0;
    if ((local_210 != 0) && (local_218 != (longlong *)0x0)) {
      (**(code **)(*local_218 + 0x30))(local_218,&local_200);
    }
    if ((DAT_1468535b8 == (longlong *)0x0) &&
       (plVar6 = (longlong *)operator_new(0x18), DAT_1468535b8 = (longlong *)0x0,
       plVar6 != (longlong *)0x0)) {
      *plVar6 = 0;
      plVar6[1] = 0;
      plVar6[2] = 2;
      DAT_1468535b8 = plVar6;
    }
    plVar6 = DAT_1468535b8;
    _guard_xfg_dispatch_icall_nop(&local_208);
    puVar11 = &DAT_143f3eda8;
    if ((int)param_1[0x33] == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)param_1[0x32];
    }
    lVar7 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                      (local_178,puVar9);
    uVar8 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar7 + 0x88));
    *(undefined8 *)(local_208 + 0x38) = uVar8;
    if (local_f8 != 0) {
      FMemory::Free();
    }
    if ((int)param_1[0x35] != 0) {
      puVar11 = (undefined2 *)param_1[0x34];
    }
    lVar7 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                      (local_d8,puVar11);
    uVar8 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar7 + 0x88));
    *(undefined8 *)(local_208 + 0x30) = uVar8;
    if (local_58 != 0) {
      FMemory::Free();
    }
    local_1f0 = 0;
    local_1e8 = 0;
    if ((local_1f8 != 0) && (local_200 != (longlong *)0x0)) {
      (**(code **)(*local_200 + 0x30))(local_200,&local_1f0);
    }
    FUN_140584410(plVar6,local_208,&local_1f0);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_200);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar3 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    if (local_210 != 0) {
      if (local_218 == (longlong *)0x0) goto LAB_14057c923;
      (**(code **)(*local_218 + 0x28))(local_218,0);
      if (local_218 != (longlong *)0x0) {
        local_218 = (longlong *)FMemory::Realloc(local_218,0,0);
      }
      local_210 = 0;
    }
    if (local_218 != (longlong *)0x0) {
      FMemory::Free(local_218);
    }
  }
LAB_14057c923:
  cVar5 = (**(code **)(*param_1 + 0x10))(param_1);
  if ((cVar5 != '\0') && ((char)param_1[0x1c] != '\x03')) {
    *(undefined1 *)(param_1 + 0x1c) = 3;
    local_1e0 = &PTR_FUN_143fc45e0;
    local_1d8 = 3;
    local_1d0 = param_1;
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 1,&local_1e0);
  }
  cVar5 = (**(code **)(*param_1 + 0x18))(param_1);
  if ((cVar5 != '\0') && (*(char *)((longlong)param_1 + 0xe1) != '\x03')) {
    *(undefined1 *)((longlong)param_1 + 0xe1) = 3;
    local_1c8 = &PTR_FUN_143fc45e0;
    local_1c0 = 3;
    local_1b8 = param_1;
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 4,&local_1c8);
  }
  cVar5 = (**(code **)(*param_1 + 0x20))(param_1);
  if ((cVar5 != '\0') && (*(char *)((longlong)param_1 + 0xe2) != '\x03')) {
    *(undefined1 *)((longlong)param_1 + 0xe2) = 3;
    local_1b0 = &PTR_FUN_143fc45e0;
    local_1a8 = 3;
    local_1a0 = param_1;
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 7,&local_1b0);
  }
  return;
}



// FUNCTION 14057c9f0 FUN_14057c9f0 body=267 status=ok
// SIG undefined FUN_14057c9f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14057c9f0(longlong param_1)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined2 *puVar6;
  int local_res8 [2];
  
  if (1 < *(int *)(param_1 + 0x160)) {
    puVar4 = &DAT_143f3eda8;
    puVar6 = &DAT_143f3eda8;
    if (DAT_1461fcaf0 != 0) {
      puVar6 = DAT_1461fcae8;
    }
    if (*(int *)(param_1 + 0x160) != 0) {
      puVar4 = *(undefined2 **)(param_1 + 0x158);
    }
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar6);
    if (iVar1 != 0) {
      TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0xf8,local_res8,param_1 + 0x158);
    }
    piVar2 = (int *)TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
                    ::FindId(param_1 + 0xf8,local_res8,param_1 + 0x158);
    if (*piVar2 != -1) {
      TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0xf8,local_res8,param_1 + 0x158);
      if (local_res8[0] == -1) {
        return _DAT_00000000;
      }
      lVar5 = (longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0xf8);
      plVar3 = (longlong *)(lVar5 + 0x10);
      if (lVar5 == 0) {
        plVar3 = (longlong *)0x0;
      }
      return *plVar3;
    }
  }
  return param_1 + 0x68;
}



// FUNCTION 14057cb00 FUN_14057cb00 body=117 status=ok
// SIG undefined FUN_14057cb00(void)

void FUN_14057cb00(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_14057cd00();
  cVar1 = FUN_14057b120(param_1,param_2);
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



// FUNCTION 14057cb80 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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



// FUNCTION 14057cc00 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<enum_EGLevitateAutoActivateMode,FGTutorialStepTextOverride>,TDefaultMapHashableKeyFuncs<enum_EGLevitateAutoActivateMode,FGTutorialStepTextOverride,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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



// FUNCTION 14057cc80 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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



// FUNCTION 14057cd00 FUN_14057cd00 body=396 status=ok
// SIG undefined FUN_14057cd00(void)

void FUN_14057cd00(longlong *param_1,int param_2)

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
      if (bVar3) goto LAB_14057cdd1;
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
LAB_14057cdd1:
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
      FUN_14056ec60((longlong)iStack_1c * 0x78 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeTo
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



// FUNCTION 14057ce90 Empty body=396 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar3) goto LAB_14057cf61;
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
LAB_14057cf61:
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
      FUN_14056ecc0((longlong)iStack_1c * 0x68 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
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



// FUNCTION 14057d020 Empty body=405 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar3) goto LAB_14057d0f1;
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
LAB_14057d0f1:
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
      if (*(longlong *)((longlong)iStack_1c * 0x20 + *param_1 + 8) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 14057d1c0 Empty body=396 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar3) goto LAB_14057d291;
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
LAB_14057d291:
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
      FUN_14056ed50((longlong)iStack_1c * 0x68 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
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



// FUNCTION 14057d380 FUN_14057d380 body=257 status=ok
// SIG undefined FUN_14057d380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14057d380(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  short *psVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_168 [32];
  longlong local_148;
  ulonglong local_140;
  longlong local_38;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  plVar1 = *(longlong **)(param_1 + 8);
  if ((*(int *)(param_2 + 0x18) == 0x29) && (*(longlong *)(param_2 + 0x38) != 0)) {
    lVar3 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                      ();
    psVar2 = *(short **)(lVar3 + 0x108);
    local_148 = 0;
    local_140 = 0;
    if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (psVar2[lVar3] != 0);
      uVar4 = (int)lVar3 + 1;
      local_140 = (ulonglong)uVar4;
      if (0 < (int)uVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
      }
      FGenericPlatformString::Memcpy(local_148,psVar2,(longlong)(int)uVar4 * 2);
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
    (**(code **)(*plVar1 + 0x88))(plVar1,&local_148);
    if (local_148 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14057d4b0 FUN_14057d4b0 body=91 status=ok
// SIG undefined FUN_14057d4b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14057d4b0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  char cVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  if ((*(int *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014057d4f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))(*(longlong **)(param_1 + 0x10),uVar1);
        return;
      }
      (**(code **)(_DAT_00000000 + 0x40))(0,uVar1);
    }
  }
  return;
}



// FUNCTION 14057d510 FUN_14057d510 body=109 status=ok
// SIG undefined FUN_14057d510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14057d510(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x20);
  if (iVar2 == 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x319) = 1;
    iVar2 = *(int *)(param_2 + 0x20);
  }
  if ((*(int *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014057d564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))(*(longlong **)(param_1 + 0x10),iVar2);
        return;
      }
      (**(code **)(_DAT_00000000 + 0x40))(0,iVar2);
    }
  }
  return;
}



// FUNCTION 14057d580 FUN_14057d580 body=173 status=ok
// SIG undefined FUN_14057d580(void)

void FUN_14057d580(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined **local_28;
  undefined1 local_20;
  longlong local_18;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar1 + 0x1b8) == '\0') {
    if (*(int *)(param_2 + 0x1c) == 1) {
      if (*(char *)(lVar1 + 0xe0) != '\0') {
        *(undefined1 *)(lVar1 + 0xe0) = 0;
        local_28 = &PTR_FUN_143fc45e0;
        local_20 = 0;
        local_18 = lVar1;
        TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(lVar1 + 8,&local_28);
        lVar1 = *(longlong *)(param_1 + 8);
      }
      if (*(char *)(lVar1 + 0xe1) != '\0') {
        *(undefined1 *)(lVar1 + 0xe1) = 0;
        local_28 = &PTR_FUN_143fc45e0;
        local_20 = 0;
        local_18 = lVar1;
        TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(lVar1 + 0x20,&local_28);
      }
    }
    TBaseDelegate<void,enum_EPartyReservationResult::Type>::ExecuteIfBound
              (param_1 + 0x10,*(undefined4 *)(param_2 + 0x20));
  }
  return;
}



// FUNCTION 14057d640 FUN_14057d640 body=124 status=ok
// SIG undefined FUN_14057d640(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14057d640(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_2 + 0x1c) == 0) {
    if (*(char *)(*(longlong *)(param_1 + 8) + 0x290) != '\x01') goto LAB_14057d66e;
    uVar3 = 2;
  }
  else {
    uVar3 = 0;
  }
  FUN_1405889a0(*(longlong *)(param_1 + 8),uVar3);
LAB_14057d66e:
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  if ((*(int *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014057d6a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x40))(*(longlong **)(param_1 + 0x10),uVar1);
        return;
      }
      (**(code **)(_DAT_00000000 + 0x40))(0,uVar1);
    }
  }
  return;
}



// FUNCTION 14057d710 FUN_14057d710 body=219 status=ok
// SIG undefined FUN_14057d710(void)

void FUN_14057d710(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_18;
  ulonglong local_10;
  
  pcVar2 = *(char **)(param_2 + 0x40);
  plVar6 = (longlong *)0x0;
  local_18 = 0;
  local_10 = 0;
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (pcVar2[lVar5] != '\0');
    uVar4 = (int)lVar5 + 1;
    local_10 = (ulonglong)uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Convert<char,wchar_t>(local_18,uVar4,pcVar2,uVar4,0x3f);
  }
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  if ((*(int *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
    if (cVar3 != '\0') {
      if (*(int *)(param_1 + 0x18) != 0) {
        plVar6 = *(longlong **)(param_1 + 0x10);
      }
      (**(code **)(*plVar6 + 0x40))(plVar6,uVar1,&local_18);
    }
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14057d810 FUN_14057d810 body=112 status=ok
// SIG undefined FUN_14057d810(void)

void FUN_14057d810(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x20);
  if (iVar3 == 0) {
    TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
    ::Empty(*(longlong *)(param_1 + 8) + 0x240,0);
    iVar3 = *(int *)(param_2 + 0x20);
  }
  if ((*(int *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x18) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x10);
      }
      (**(code **)(*plVar2 + 0x40))(plVar2,iVar3);
    }
  }
  return;
}



// FUNCTION 14057d8a0 FUN_14057d8a0 body=182 status=ok
// SIG undefined FUN_14057d8a0(void)

void FUN_14057d8a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined **local_28;
  undefined1 local_20;
  longlong local_18;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((*(char *)(lVar1 + 0x1b8) == '\0') && (*(int *)(param_2 + 0x1c) != 1)) {
    if (*(char *)(lVar1 + 0xe0) != '\0') {
      *(undefined1 *)(lVar1 + 0xe0) = 0;
      local_28 = &PTR_FUN_143fc45e0;
      local_20 = 0;
      local_18 = lVar1;
      TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(lVar1 + 8,&local_28);
      lVar1 = *(longlong *)(param_1 + 8);
    }
    if (*(char *)(lVar1 + 0xe1) != '\0') {
      *(undefined1 *)(lVar1 + 0xe1) = 0;
      local_28 = &PTR_FUN_143fc45e0;
      local_20 = 0;
      local_18 = lVar1;
      TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(lVar1 + 0x20,&local_28);
      lVar1 = *(longlong *)(param_1 + 8);
    }
    TSet<TTuple<FString,AHomeCharacter_*>,TDefaultMapHashableKeyFuncs<FString,AHomeCharacter_*,0>,FDefaultSetAllocator>
    ::Empty(lVar1 + 0xe8,0);
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x138) = 0;
  }
  return;
}



// FUNCTION 14057d990 ExecuteIfBound body=101 status=ok
// SIG undefined ExecuteIfBound(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong TBaseDelegate<void,enum_EPartyReservationResult::Type>::ExecuteIfBound
                    (longlong *param_1,undefined4 param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    in_RAX = (**(code **)(*(longlong *)*param_1 + 0x18))();
    if ((char)in_RAX != '\0') {
      if ((int)param_1[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014057d9cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,param_2);
        return uVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x00014057d9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(_DAT_00000000 + 0x40))(0,param_2);
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14057da00 FUN_14057da00 body=130 status=ok
// SIG undefined FUN_14057da00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14057da00(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    in_RAX = (**(code **)(*(longlong *)*param_1 + 0x18))();
    if ((char)in_RAX != '\0') {
      if ((int)param_1[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014057da4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,param_2,param_3);
        return uVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x00014057da6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(_DAT_00000000 + 0x40))(0,param_2,param_3);
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14057da90 FUN_14057da90 body=29 status=ok
// SIG undefined FUN_14057da90(void)

undefined1 FUN_14057da90(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x1b8) == '\0') {
    FUN_140581960();
  }
  return 1;
}



// FUNCTION 14057dab0 FUN_14057dab0 body=20 status=ok
// SIG undefined FUN_14057dab0(void)

undefined1 FUN_14057dab0(longlong param_1)

{
  FUN_1405824d0(*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 14057dad0 FUN_14057dad0 body=259 status=ok
// SIG undefined FUN_14057dad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14057dad0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  short *psVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_168 [32];
  longlong local_148;
  ulonglong local_140;
  longlong local_38;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  plVar1 = *(longlong **)(param_1 + 8);
  if ((*(int *)(param_2 + 0x18) == 0x29) && (*(longlong *)(param_2 + 0x38) != 0)) {
    lVar3 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                      ();
    psVar2 = *(short **)(lVar3 + 0x108);
    local_148 = 0;
    local_140 = 0;
    if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (psVar2[lVar3] != 0);
      uVar4 = (int)lVar3 + 1;
      local_140 = (ulonglong)uVar4;
      if (0 < (int)uVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
      }
      FGenericPlatformString::Memcpy(local_148,psVar2,(longlong)(int)uVar4 * 2);
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
    (**(code **)(*plVar1 + 0x88))(plVar1,&local_148);
    if (local_148 != 0) {
      FMemory::Free();
    }
  }
  return 1;
}



// FUNCTION 14057dbe0 FUN_14057dbe0 body=36 status=ok
// SIG undefined FUN_14057dbe0(void)

undefined8 FUN_14057dbe0(longlong param_1,longlong param_2)

{
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x1b8) == '\0') {
    TBaseDelegate<void,enum_EPartyReservationResult::Type>::ExecuteIfBound
              (param_1 + 0x10,*(undefined4 *)(param_2 + 0x20));
  }
  return 1;
}



// FUNCTION 14057dc10 FUN_14057dc10 body=76 status=ok
// SIG undefined FUN_14057dc10(void)

undefined8 FUN_14057dc10(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  char cVar2;
  longlong *plVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  if ((*(int *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x18) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x10);
      }
      (**(code **)(*plVar3 + 0x40))(plVar3,uVar1);
    }
  }
  return 1;
}



// FUNCTION 14057dc60 FUN_14057dc60 body=94 status=ok
// SIG undefined FUN_14057dc60(void)

undefined8 FUN_14057dc60(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x20);
  if (iVar3 == 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x319) = 1;
    iVar3 = *(int *)(param_2 + 0x20);
  }
  if ((*(int *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x18) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x10);
      }
      (**(code **)(*plVar2 + 0x40))(plVar2,iVar3);
    }
  }
  return 1;
}



// FUNCTION 14057dcc0 FUN_14057dcc0 body=175 status=ok
// SIG undefined FUN_14057dcc0(void)

undefined1 FUN_14057dcc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined **local_28;
  undefined1 local_20;
  longlong local_18;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar1 + 0x1b8) == '\0') {
    if (*(int *)(param_2 + 0x1c) == 1) {
      if (*(char *)(lVar1 + 0xe0) != '\0') {
        *(undefined1 *)(lVar1 + 0xe0) = 0;
        local_28 = &PTR_FUN_143fc45e0;
        local_20 = 0;
        local_18 = lVar1;
        TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(lVar1 + 8,&local_28);
        lVar1 = *(longlong *)(param_1 + 8);
      }
      if (*(char *)(lVar1 + 0xe1) != '\0') {
        *(undefined1 *)(lVar1 + 0xe1) = 0;
        local_28 = &PTR_FUN_143fc45e0;
        local_20 = 0;
        local_18 = lVar1;
        TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(lVar1 + 0x20,&local_28);
      }
    }
    TBaseDelegate<void,enum_EPartyReservationResult::Type>::ExecuteIfBound
              (param_1 + 0x10,*(undefined4 *)(param_2 + 0x20));
  }
  return 1;
}



// FUNCTION 14057dd70 FUN_14057dd70 body=20 status=ok
// SIG undefined FUN_14057dd70(void)

undefined1 FUN_14057dd70(longlong param_1)

{
  FUN_140580390(*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 14057dd90 FUN_14057dd90 body=109 status=ok
// SIG undefined FUN_14057dd90(void)

undefined8 FUN_14057dd90(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_2 + 0x1c) == 0) {
    if (*(char *)(*(longlong *)(param_1 + 8) + 0x290) != '\x01') goto LAB_14057ddbe;
    uVar4 = 2;
  }
  else {
    uVar4 = 0;
  }
  FUN_1405889a0(*(longlong *)(param_1 + 8),uVar4);
LAB_14057ddbe:
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  if ((*(int *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x18) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x10);
      }
      (**(code **)(*plVar3 + 0x40))(plVar3,uVar1);
    }
  }
  return 1;
}



// FUNCTION 14057de00 FUN_14057de00 body=20 status=ok
// SIG undefined FUN_14057de00(void)

undefined1 FUN_14057de00(longlong param_1)

{
  FUN_14056fee0(param_1 + 8);
  return 1;
}



// FUNCTION 14057de20 FUN_14057de20 body=61 status=ok
// SIG undefined FUN_14057de20(void)

undefined8 FUN_14057de20(longlong param_1,longlong param_2)

{
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x1b8) == '\0') {
    if (*(int *)(param_2 + 0x1c) == 0) {
      *(bool *)(*(longlong *)(param_1 + 8) + 0x139) =
           *(int *)(*(longlong *)(param_2 + 0x30) + 0x38) != 0;
    }
    TBaseDelegate<void,enum_EPartyReservationResult::Type>::ExecuteIfBound
              (param_1 + 0x10,*(undefined4 *)(param_2 + 0x20));
  }
  return 1;
}



// FUNCTION 14057de60 FUN_14057de60 body=221 status=ok
// SIG undefined FUN_14057de60(void)

undefined8 FUN_14057de60(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_18;
  ulonglong local_10;
  
  pcVar2 = *(char **)(param_2 + 0x40);
  plVar6 = (longlong *)0x0;
  local_18 = 0;
  local_10 = 0;
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (pcVar2[lVar5] != '\0');
    uVar4 = (int)lVar5 + 1;
    local_10 = (ulonglong)uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Convert<char,wchar_t>(local_18,uVar4,pcVar2,uVar4,0x3f);
  }
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  if ((*(int *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
    if (cVar3 != '\0') {
      if (*(int *)(param_1 + 0x18) != 0) {
        plVar6 = *(longlong **)(param_1 + 0x10);
      }
      (**(code **)(*plVar6 + 0x40))(plVar6,uVar1,&local_18);
    }
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 14057df40 FUN_14057df40 body=20 status=ok
// SIG undefined FUN_14057df40(void)

undefined1 FUN_14057df40(longlong param_1)

{
  FUN_1405700b0(param_1 + 8);
  return 1;
}



// FUNCTION 14057df60 FUN_14057df60 body=20 status=ok
// SIG undefined FUN_14057df60(void)

undefined1 FUN_14057df60(longlong param_1)

{
  FUN_1405702a0(param_1 + 8);
  return 1;
}



// FUNCTION 14057df80 FUN_14057df80 body=114 status=ok
// SIG undefined FUN_14057df80(void)

undefined8 FUN_14057df80(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x20);
  if (iVar3 == 0) {
    TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
    ::Empty(*(longlong *)(param_1 + 8) + 0x240,0);
    iVar3 = *(int *)(param_2 + 0x20);
  }
  if ((*(int *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x18) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x10);
      }
      (**(code **)(*plVar2 + 0x40))(plVar2,iVar3);
    }
  }
  return 1;
}



// FUNCTION 14057e000 FUN_14057e000 body=20 status=ok
// SIG undefined FUN_14057e000(void)

undefined1 FUN_14057e000(longlong param_1)

{
  FUN_140580ef0(*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 14057e020 FUN_14057e020 body=20 status=ok
// SIG undefined FUN_14057e020(void)

undefined1 FUN_14057e020(longlong param_1)

{
  FUN_140571140(param_1 + 8);
  return 1;
}



// FUNCTION 14057e040 FUN_14057e040 body=184 status=ok
// SIG undefined FUN_14057e040(void)

undefined8 FUN_14057e040(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined **local_28;
  undefined1 local_20;
  longlong local_18;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((*(char *)(lVar1 + 0x1b8) == '\0') && (*(int *)(param_2 + 0x1c) != 1)) {
    if (*(char *)(lVar1 + 0xe0) != '\0') {
      *(undefined1 *)(lVar1 + 0xe0) = 0;
      local_28 = &PTR_FUN_143fc45e0;
      local_20 = 0;
      local_18 = lVar1;
      TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(lVar1 + 8,&local_28);
      lVar1 = *(longlong *)(param_1 + 8);
    }
    if (*(char *)(lVar1 + 0xe1) != '\0') {
      *(undefined1 *)(lVar1 + 0xe1) = 0;
      local_28 = &PTR_FUN_143fc45e0;
      local_20 = 0;
      local_18 = lVar1;
      TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(lVar1 + 0x20,&local_28);
      lVar1 = *(longlong *)(param_1 + 8);
    }
    TSet<TTuple<FString,AHomeCharacter_*>,TDefaultMapHashableKeyFuncs<FString,AHomeCharacter_*,0>,FDefaultSetAllocator>
    ::Empty(lVar1 + 0xe8,0);
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x138) = 0;
  }
  return 1;
}



// FUNCTION 14057e100 FUN_14057e100 body=20 status=ok
// SIG undefined FUN_14057e100(void)

undefined1 FUN_14057e100(longlong param_1)

{
  FUN_140571830(param_1 + 8);
  return 1;
}



// FUNCTION 14057e120 FUN_14057e120 body=20 status=ok
// SIG undefined FUN_14057e120(void)

undefined1 FUN_14057e120(longlong param_1)

{
  FUN_140570960(param_1 + 8);
  return 1;
}



// FUNCTION 14057e140 FUN_14057e140 body=20 status=ok
// SIG undefined FUN_14057e140(void)

undefined1 FUN_14057e140(longlong param_1)

{
  FUN_140570cb0(param_1 + 8);
  return 1;
}



// FUNCTION 14057e160 FUN_14057e160 body=173 status=ok
// SIG undefined FUN_14057e160(void)

int * FUN_14057e160(longlong *param_1,int *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = GetTypeHash(param_3);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      lVar4 = *param_1;
      do {
        cVar1 = AccountId::operator==((longlong)iVar2 * 0x78 + lVar4,param_3);
        if (cVar1 != '\0') {
          *param_2 = iVar2;
          return param_2;
        }
        lVar4 = *param_1;
        iVar2 = *(int *)((longlong)iVar2 * 0x78 + 0x70 + lVar4);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14057e210 FindId body=173 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = ::GetTypeHash(param_3);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      lVar4 = *param_1;
      do {
        cVar1 = ChannelId::operator==((longlong)iVar2 * 0x68 + lVar4,param_3);
        if (cVar1 != '\0') {
          *param_2 = iVar2;
          return param_2;
        }
        lVar4 = *param_1;
        iVar2 = *(int *)((longlong)iVar2 * 0x68 + 0x60 + lVar4);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14057e2c0 Get body=73 status=ok
// SIG undefined Get(void)

undefined8 * VivoxNativeSdk::Get(void)

{
  undefined8 *puVar1;
  
  if (DAT_1468535b8 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)operator_new();
    DAT_1468535b8 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 2;
      DAT_1468535b8 = puVar1;
      return puVar1;
    }
  }
  return DAT_1468535b8;
}



// FUNCTION 14057e310 FUN_14057e310 body=620 status=ok
// SIG undefined FUN_14057e310(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14057e310(longlong param_1,undefined8 param_2)

{
  void *_Src;
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int local_res8 [2];
  longlong *local_28;
  int local_20;
  
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x170,local_res8,param_2);
  plVar10 = (longlong *)0x0;
  plVar5 = plVar10;
  if (local_res8[0] != -1) {
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x170) + (longlong)local_res8[0] * 0x28);
  }
  plVar4 = plVar5 + 2;
  if (plVar5 == (longlong *)0x0) {
    plVar4 = plVar10;
  }
  plVar5 = plVar10;
  if (plVar4 != (longlong *)0x0) {
    local_20 = (int)plVar4[1];
    lVar9 = (longlong)local_20;
    _Src = (void *)*plVar4;
    local_28 = (longlong *)0x0;
    if (local_20 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_20,0);
      plVar5 = local_28;
      _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar9 * 2);
    }
    iVar1 = local_20;
    if ((1 < local_20) && (*(int *)(param_1 + 0x100) != *(int *)(param_1 + 300))) {
      plVar4 = (longlong *)&DAT_143f3eda8;
      if (local_20 != 0) {
        plVar4 = plVar5;
      }
      iVar2 = FUN_140438070(plVar4);
      lVar9 = *(longlong *)(param_1 + 0x138);
      if (*(longlong *)(param_1 + 0x138) == 0) {
        lVar9 = param_1 + 0x130;
      }
      iVar2 = *(int *)(lVar9 + ((longlong)*(int *)(param_1 + 0x140) - 1U & (longlong)iVar2) * 4);
      if (iVar2 != -1) {
        lVar9 = *(longlong *)(param_1 + 0xf8);
        do {
          lVar7 = (longlong)iVar2 * 0x20;
          plVar4 = (longlong *)&DAT_143f3eda8;
          if (iVar1 != 0) {
            plVar4 = plVar5;
          }
          if (*(int *)(lVar9 + 8 + lVar7) == 0) {
            puVar6 = &DAT_143f3eda8;
          }
          else {
            puVar6 = *(undefined2 **)(lVar9 + lVar7);
          }
          iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,plVar4);
          if (iVar3 == 0) {
            if (iVar2 != -1) {
              lVar9 = _DAT_00000000;
              if (*(int *)(param_1 + 0x100) == *(int *)(param_1 + 300)) goto LAB_14057e476;
              plVar4 = (longlong *)&DAT_143f3eda8;
              if (iVar1 != 0) {
                plVar4 = plVar5;
              }
              iVar2 = FUN_140438070(plVar4);
              lVar7 = *(longlong *)(param_1 + 0x138);
              if (*(longlong *)(param_1 + 0x138) == 0) {
                lVar7 = param_1 + 0x130;
              }
              iVar2 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x140) - 1U & (longlong)iVar2)
                                       * 4);
              if (iVar2 == -1) goto LAB_14057e476;
              lVar7 = *(longlong *)(param_1 + 0xf8);
              goto LAB_14057e502;
            }
            break;
          }
          lVar9 = *(longlong *)(param_1 + 0xf8);
          iVar2 = *(int *)(lVar9 + 0x18 + lVar7);
        } while (iVar2 != -1);
      }
    }
  }
  lVar9 = param_1 + 0x68;
  goto LAB_14057e476;
  while( true ) {
    lVar7 = *(longlong *)(param_1 + 0xf8);
    iVar2 = *(int *)(lVar7 + 0x18 + lVar8);
    if (iVar2 == -1) break;
LAB_14057e502:
    lVar8 = (longlong)iVar2 * 0x20;
    plVar4 = (longlong *)&DAT_143f3eda8;
    if (iVar1 != 0) {
      plVar4 = plVar5;
    }
    if (*(int *)(lVar7 + 8 + lVar8) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = *(undefined2 **)(lVar7 + lVar8);
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,plVar4);
    if (iVar3 == 0) {
      if (iVar2 != -1) {
        lVar8 = *(longlong *)(param_1 + 0xf8) + lVar8;
        plVar4 = (longlong *)(lVar8 + 0x10);
        if (lVar8 == 0) {
          plVar4 = plVar10;
        }
        lVar9 = *plVar4;
      }
      break;
    }
  }
LAB_14057e476:
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  return lVar9;
}



// FUNCTION 14057e580 FUN_14057e580 body=958 status=ok
// SIG undefined FUN_14057e580(void)

longlong FUN_14057e580(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  int local_res8 [2];
  int local_res10;
  undefined1 local_res18 [8];
  longlong local_res20;
  longlong local_98;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  longlong local_68;
  ulonglong local_60;
  longlong *local_58;
  undefined8 **local_50;
  
  lVar1 = param_1 + 0x58;
  if (0 < *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x8c)) {
    return lVar1;
  }
  lVar8 = *(longlong *)(param_1 + 0x50);
  if (*(char *)(lVar8 + 0x4a0) == '\0') {
    iVar4 = _guard_xfg_dispatch_icall_nop(0,lVar8 + 0x4a4);
    if (iVar4 == 0) {
      *(undefined1 *)(lVar8 + 0x4a0) = 1;
    }
    if (*(char *)(lVar8 + 0x4a0) == '\0') {
      return lVar1;
    }
  }
  lVar8 = *(longlong *)(param_1 + 0x50);
  puVar9 = (undefined8 *)0x0;
  uVar11 = 0;
  if (DAT_1468535b8 == (undefined8 *)0x0) {
    DAT_1468535b8 = (undefined8 *)operator_new(0x18);
    if (DAT_1468535b8 == (undefined8 *)0x0) {
      DAT_1468535b8 = (undefined8 *)0x0;
    }
    else {
      *DAT_1468535b8 = 0;
      DAT_1468535b8[1] = 0;
      DAT_1468535b8[2] = 2;
    }
  }
  iVar4 = _guard_xfg_dispatch_icall_nop(*(undefined4 *)(lVar8 + 0x4a4),local_res8,&local_res20);
  if ((iVar4 == 0) && (local_res8[0] != 0)) {
    if (0 < local_res8[0]) {
      local_78 = (undefined8 *)0x0;
      local_70 = local_70 & 0xffffffff;
      pcVar2 = *(char **)(local_res20 + 8);
      uVar12 = 0;
      if ((pcVar2 != (char *)0x0) && (uVar12 = 0, *pcVar2 != '\0')) {
        lVar8 = -1;
        do {
          lVar8 = lVar8 + 1;
        } while (pcVar2[lVar8] != '\0');
        uVar7 = (int)lVar8 + 1;
        local_70 = (ulonglong)uVar7;
        uVar12 = 0;
        uVar11 = uVar7;
        if (0 < (int)uVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
          uVar12 = local_70._4_4_;
          uVar11 = (uint)local_70;
        }
        puVar9 = local_78;
        FGenericPlatformString::Convert<char,wchar_t>(local_78,uVar7,pcVar2,uVar7,0x3f);
      }
      ppuVar10 = (undefined8 **)(param_1 + 0xa8);
      if (ppuVar10 == &local_78) {
        if (puVar9 != (undefined8 *)0x0) {
          FMemory::Free(puVar9);
        }
      }
      else {
        if (*ppuVar10 != (undefined8 *)0x0) {
          FMemory::Free();
        }
        *ppuVar10 = puVar9;
        *(uint *)(param_1 + 0xb0) = uVar11;
        *(undefined4 *)(param_1 + 0xb4) = uVar12;
      }
    }
    local_res10 = 0;
    if (0 < local_res8[0]) {
      local_58 = &local_68;
      local_98 = 0;
      local_50 = &local_80;
      do {
        iVar4 = local_res10;
        puVar9 = (undefined8 *)0x0;
        puVar5 = (undefined8 *)operator_new(0x20);
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = &PTR__scalar_deleting_destructor__143fc44d0;
          puVar6 = (undefined4 *)(local_res20 + local_98);
          ppuVar10 = (undefined8 **)(puVar5 + 1);
          *ppuVar10 = (undefined8 *)0x0;
          puVar5[2] = 0;
          pcVar2 = *(char **)(puVar6 + 2);
          local_78 = (undefined8 *)0x0;
          local_70 = local_70 & 0xffffffff;
          puVar13 = puVar9;
          uVar12 = 0;
          if ((pcVar2 != (char *)0x0) && (uVar12 = 0, *pcVar2 != '\0')) {
            lVar8 = -1;
            do {
              lVar3 = lVar8 + 1;
              lVar8 = lVar8 + 1;
            } while (pcVar2[lVar3] != '\0');
            uVar7 = (int)lVar8 + 1;
            local_70 = (ulonglong)uVar7;
            uVar12 = 0;
            uVar11 = uVar7;
            if (0 < (int)uVar7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
              uVar12 = local_70._4_4_;
              uVar11 = (uint)local_70;
            }
            puVar9 = local_78;
            puVar13 = (undefined8 *)(ulonglong)uVar11;
            FGenericPlatformString::Convert<char,wchar_t>(local_78,uVar7,pcVar2,uVar7,0x3f);
          }
          if (ppuVar10 == &local_78) {
            if (puVar9 != (undefined8 *)0x0) {
              FMemory::Free(puVar9);
            }
          }
          else {
            if (*ppuVar10 != (undefined8 *)0x0) {
              FMemory::Free();
            }
            *ppuVar10 = puVar9;
            *(int *)(puVar5 + 2) = (int)puVar13;
            local_70 = 0;
            local_78 = (undefined8 *)0x0;
            *(undefined4 *)((longlong)puVar5 + 0x14) = uVar12;
          }
          *(undefined4 *)(puVar5 + 3) = *puVar6;
          *(undefined1 *)((longlong)puVar5 + 0x1c) = 1;
          puVar9 = puVar5;
          iVar4 = local_res10;
        }
        pcVar2 = *(char **)(local_98 + 8 + local_res20);
        local_68 = 0;
        local_60 = 0;
        local_80 = puVar9;
        if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
          lVar8 = -1;
          do {
            lVar3 = lVar8 + 1;
            lVar8 = lVar8 + 1;
          } while (pcVar2[lVar3] != '\0');
          uVar11 = (int)lVar8 + 1;
          local_60 = (ulonglong)uVar11;
          if (0 < (int)uVar11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
          }
          FGenericPlatformString::Convert<char,wchar_t>(local_68,uVar11,pcVar2,uVar11,0x3f);
        }
        FUN_14056ac70(lVar1,local_res18,&local_58,0);
        if (local_68 != 0) {
          FMemory::Free();
        }
        local_res10 = iVar4 + 1;
        local_98 = local_98 + 0x10;
      } while (local_res10 < local_res8[0]);
    }
  }
  return lVar1;
}



// FUNCTION 14057e940 FUN_14057e940 body=761 status=ok
// SIG undefined FUN_14057e940(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14057e940(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_c8 [32];
  int local_a8 [2];
  longlong *local_a0;
  longlong *plStack_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined8 local_68;
  longlong **local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x100);
  local_a0 = (longlong *)0x0;
  plStack_98 = (longlong *)0x0;
  piVar3 = (int *)TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
                  ::FindId(plVar1,local_70,param_2);
  if (*piVar3 != -1) {
    TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
    ::FindId(plVar1,local_a8,param_2);
    plVar5 = plStack_98;
    puVar7 = (undefined8 *)0x0;
    if (local_a8[0] != -1) {
      puVar7 = (undefined8 *)((longlong)local_a8[0] * 0x68 + *plVar1);
    }
    puVar9 = puVar7 + 10;
    if (puVar7 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    plVar1 = (longlong *)*puVar9;
    plVar8 = (longlong *)puVar9[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_80._0_4_ = SUB84(plVar1,0);
    local_58 = (undefined4)local_80;
    local_80._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
    uStack_54 = local_80._4_4_;
    uStack_78._0_4_ = SUB84(plVar8,0);
    uStack_50 = (undefined4)uStack_78;
    uStack_78._4_4_ = (undefined4)((ulonglong)plVar8 >> 0x20);
    uStack_4c = uStack_78._4_4_;
    local_80 = local_a0;
    uStack_78 = plStack_98;
    local_a0 = plVar1;
    if (plStack_98 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_98 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        puVar7 = (undefined8 *)*plStack_98;
        plStack_98 = plVar8;
        (*(code *)*puVar7)(plVar5);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        plVar8 = plStack_98;
        if (iVar2 == 1) {
          (**(code **)(*uStack_78 + 8))(uStack_78,1);
          plVar8 = plStack_98;
        }
      }
    }
    goto LAB_14057ebce;
  }
  lVar4 = operator_new(0x1c0);
  plVar8 = (longlong *)0x0;
  plVar5 = plVar8;
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_14056c9b0(lVar4,param_1,param_1 + 0xf0,param_2);
  }
  plVar6 = (longlong *)operator_new(0x18);
  plVar10 = plVar8;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
    plVar6[2] = (longlong)plVar5;
    plVar10 = plVar6;
  }
  plVar6 = plVar5 + 0x19;
  if (plVar5 == (longlong *)0x0) {
    plVar6 = plVar8;
  }
  local_88 = plVar10;
  if (plVar6 != (longlong *)0x0) {
    if ((*plVar6 != 0) && (plVar6[1] != 0)) {
      piVar3 = (int *)(plVar6[1] + 8);
      LOCK();
      iVar2 = *piVar3;
      if (iVar2 == 0) {
        *piVar3 = 0;
        iVar2 = 0;
      }
      UNLOCK();
      if (0 < iVar2) goto LAB_14057eab1;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    *plVar6 = (longlong)plVar5;
    plVar8 = (longlong *)plVar6[1];
    if (plVar10 != plVar8) {
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)plVar6[1];
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar3 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      plVar6[1] = (longlong)plVar10;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar10 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar3 = (int *)((longlong)plVar10 + 0xc);
        iVar2 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
  }
LAB_14057eab1:
  local_90 = 0;
  local_a0 = plVar5;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_98,&local_88);
  plVar5 = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_88 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  local_60 = &local_a0;
  local_68 = param_2;
  FUN_14056b3f0(plVar1,local_6c,&local_68,0);
  plVar8 = plStack_98;
LAB_14057ebce:
  plStack_98 = plVar8;
  plVar5 = plStack_98;
  plVar1 = local_a0;
  if (plStack_98 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_98 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_98)(plStack_98);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return plVar1;
}



// FUNCTION 14057ec40 GetConnectToken body=95 status=ok
// SIG undefined GetConnectToken(void)

undefined8
ChannelSession::GetConnectToken
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res20;
  
  local_res20 = param_4;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x48))(*(longlong **)(param_1 + 0xd8));
  VivoxNativeSdk::GetJoinToken(param_2,uVar1,param_1 + 0x140,param_3,&local_res20);
  return param_2;
}



// FUNCTION 14057eca0 GetCurrentVoice body=209 status=ok
// SIG undefined GetCurrentVoice(void)

longlong * TextToSpeech::GetCurrentVoice(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  int local_res8 [2];
  
  cVar2 = (**(code **)(param_1[0x17] + 0x18))(param_1 + 0x17);
  if ((cVar2 == '\0') &&
     (lVar3 = (**(code **)(*param_1 + 8))(param_1), *(int *)(lVar3 + 8) != *(int *)(lVar3 + 0x34)))
  {
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0xb,local_res8,param_1 + 0x15);
    puVar7 = (undefined8 *)0x0;
    if (local_res8[0] != -1) {
      puVar7 = (undefined8 *)((longlong)local_res8[0] * 0x20 + param_1[0xb]);
    }
    puVar4 = puVar7 + 2;
    if (puVar7 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    plVar1 = (longlong *)*puVar4;
    uVar5 = (**(code **)(*plVar1 + 8))(plVar1);
    FString::operator=(param_1 + 0x18,uVar5);
    puVar6 = (undefined4 *)(**(code **)(*plVar1 + 0x10))(plVar1);
    *(undefined4 *)(param_1 + 0x1a) = *puVar6;
    *(bool *)((longlong)param_1 + 0xd4) = 1 < (int)param_1[0x19];
  }
  return param_1 + 0x17;
}



// FUNCTION 14057edc0 FUN_14057edc0 body=230 status=ok
// SIG undefined FUN_14057edc0(void)

undefined8 FUN_14057edc0(longlong param_1,byte *param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  int *piVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  
  if (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c)) {
    lVar3 = *(longlong *)(param_1 + 0x118);
    if (*(longlong *)(param_1 + 0x118) == 0) {
      lVar3 = param_1 + 0x110;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0x120) - 1U & (ulonglong)*param_2) * 4);
    if (iVar2 != -1) {
      do {
        pbVar6 = (byte *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0xd8));
        if (*pbVar6 == *param_2) {
          if (iVar2 != -1) goto LAB_14057ee41;
          break;
        }
        iVar2 = *(int *)(pbVar6 + 0x18);
      } while (iVar2 != -1);
    }
  }
  pbVar6 = (byte *)0x0;
LAB_14057ee41:
  pbVar4 = pbVar6 + 8;
  if (pbVar6 == (byte *)0x0) {
    pbVar4 = (byte *)0x0;
  }
  if (pbVar4 != (byte *)0x0) {
    puVar7 = *(undefined8 **)pbVar4;
    puVar1 = puVar7 + *(int *)(pbVar4 + 8);
    for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
      piVar5 = (int *)(**(code **)(*(longlong *)*puVar7 + 0x20))();
      if (*piVar5 == *param_3) {
        return *puVar7;
      }
    }
  }
  return 0;
}



// FUNCTION 14057eeb0 GetJoinToken body=651 status=ok
// SIG undefined GetJoinToken(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
VivoxNativeSdk::GetJoinToken
          (undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
          longlong *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  char *pcVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined1 auStack_368 [32];
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  longlong local_328;
  undefined8 local_318;
  undefined8 local_310;
  undefined1 local_308 [8];
  undefined1 local_300 [8];
  longlong local_2f8 [2];
  longlong local_2e8 [2];
  undefined1 local_2d8 [128];
  longlong local_258;
  undefined1 local_238 [128];
  longlong local_1b8;
  undefined1 local_198 [128];
  longlong local_118;
  undefined1 local_f8 [128];
  longlong local_78;
  ulonglong local_58;
  
  lVar9 = DAT_1468535d0;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_368;
  puVar10 = &DAT_143f3eda8;
  DAT_1468535d0 = DAT_1468535d0 + 1;
  iVar8 = 0;
  if (*(int *)(param_4 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_4;
    iVar8 = *(int *)(param_4 + 1) + -1;
  }
  lVar2 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_f8,puVar7);
  local_318 = *(undefined8 *)(lVar2 + 0x88);
  puVar3 = (undefined8 *)FUN_14058a6b0(param_3,local_2e8);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar3;
  }
  lVar2 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_198,puVar7);
  uVar1 = *(undefined8 *)(lVar2 + 0x88);
  puVar3 = (undefined8 *)AccountId::ToString(param_2,local_2f8);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar3;
  }
  lVar2 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_238,puVar7);
  local_310 = *(undefined8 *)(lVar2 + 0x88);
  plVar4 = (longlong *)FDateTime::UtcNow(local_308);
  local_330 = (ulonglong)local_330._4_4_ << 0x20;
  local_338 = (ulonglong)local_338._4_4_ << 0x20;
  local_340 = (ulonglong)local_340._4_4_ << 0x20;
  lVar2 = *param_5;
  lVar5 = *plVar4;
  local_348 = (ulonglong)local_348._4_4_ << 0x20;
  plVar4 = (longlong *)FDateTime::FDateTime(local_300,0x7b2,1);
  lVar2 = (lVar2 + lVar5) - *plVar4;
  lVar2 = lVar2 + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar2),8);
  if (*(int *)(param_2 + 0x28) != 0) {
    puVar10 = *(undefined2 **)(param_2 + 0x20);
  }
  lVar5 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_2d8,puVar10);
  local_328 = (longlong)iVar8;
  local_330 = local_318;
  local_340 = local_310;
  local_348 = 0;
  local_338 = uVar1;
  pcVar6 = (char *)::_guard_xfg_dispatch_icall_nop
                             (*(undefined8 *)(lVar5 + 0x88),(lVar2 >> 0x17) - (lVar2 >> 0x3f),
                              &DAT_143fc2b5c,lVar9);
  if (local_258 != 0) {
    FMemory::Free();
  }
  if (local_1b8 != 0) {
    FMemory::Free();
  }
  if (local_2f8[0] != 0) {
    FMemory::Free();
  }
  if (local_118 != 0) {
    FMemory::Free();
  }
  if (local_2e8[0] != 0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((pcVar6 != (char *)0x0) && (*pcVar6 != '\0')) {
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (pcVar6[lVar9] != '\0');
    iVar8 = (int)lVar9 + 1;
    *(int *)(param_1 + 1) = iVar8;
    if (0 < iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    local_348 = CONCAT62(local_348._2_6_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(*param_1,iVar8,pcVar6,iVar8);
  }
  ::_guard_xfg_dispatch_icall_nop(pcVar6);
  return param_1;
}



// FUNCTION 14057f140 FUN_14057f140 body=751 status=ok
// SIG undefined FUN_14057f140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14057f140(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_c8 [32];
  int local_a8 [2];
  longlong *local_a0;
  longlong *plStack_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined8 local_68;
  longlong **local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x10);
  local_a0 = (longlong *)0x0;
  plStack_98 = (longlong *)0x0;
  piVar3 = (int *)FUN_14057e160(plVar1,local_70,param_2);
  if (*piVar3 != -1) {
    FUN_14057e160(plVar1,local_a8,param_2);
    plVar5 = plStack_98;
    puVar7 = (undefined8 *)0x0;
    if (local_a8[0] != -1) {
      puVar7 = (undefined8 *)((longlong)local_a8[0] * 0x78 + *plVar1);
    }
    puVar9 = puVar7 + 0xc;
    if (puVar7 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    plVar1 = (longlong *)*puVar9;
    plVar8 = (longlong *)puVar9[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_80._0_4_ = SUB84(plVar1,0);
    local_58 = (undefined4)local_80;
    local_80._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
    uStack_54 = local_80._4_4_;
    uStack_78._0_4_ = SUB84(plVar8,0);
    uStack_50 = (undefined4)uStack_78;
    uStack_78._4_4_ = (undefined4)((ulonglong)plVar8 >> 0x20);
    uStack_4c = uStack_78._4_4_;
    local_80 = local_a0;
    uStack_78 = plStack_98;
    local_a0 = plVar1;
    if (plStack_98 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_98 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        puVar7 = (undefined8 *)*plStack_98;
        plStack_98 = plVar8;
        (*(code *)*puVar7)(plVar5);
        LOCK();
        piVar3 = (int *)((longlong)plVar5 + 0xc);
        iVar2 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        plVar8 = plStack_98;
        if (iVar2 == 1) {
          (**(code **)(*uStack_78 + 8))(uStack_78,1);
          plVar8 = plStack_98;
        }
      }
    }
    goto LAB_14057f3c4;
  }
  lVar4 = operator_new(0x448);
  plVar8 = (longlong *)0x0;
  plVar5 = plVar8;
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_14056d7d0(lVar4,param_1,param_2);
  }
  plVar6 = (longlong *)operator_new(0x18);
  plVar10 = plVar8;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
    plVar6[2] = (longlong)plVar5;
    plVar10 = plVar6;
  }
  plVar6 = plVar5 + 0x10;
  if (plVar5 == (longlong *)0x0) {
    plVar6 = plVar8;
  }
  local_88 = plVar10;
  if (plVar6 != (longlong *)0x0) {
    if ((*plVar6 != 0) && (plVar6[1] != 0)) {
      piVar3 = (int *)(plVar6[1] + 8);
      LOCK();
      iVar2 = *piVar3;
      if (iVar2 == 0) {
        *piVar3 = 0;
        iVar2 = 0;
      }
      UNLOCK();
      if (0 < iVar2) goto LAB_14057f2a7;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    *plVar6 = (longlong)plVar5;
    plVar8 = (longlong *)plVar6[1];
    if (plVar10 != plVar8) {
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)plVar6[1];
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar3 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      plVar6[1] = (longlong)plVar10;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar10 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar3 = (int *)((longlong)plVar10 + 0xc);
        iVar2 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
  }
LAB_14057f2a7:
  local_90 = 0;
  local_a0 = plVar5;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_98,&local_88);
  plVar5 = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_88 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  local_60 = &local_a0;
  local_68 = param_2;
  FUN_14056b150(plVar1,local_6c,&local_68,0);
  plVar8 = plStack_98;
LAB_14057f3c4:
  plStack_98 = plVar8;
  plVar5 = plStack_98;
  plVar1 = local_a0;
  if (plStack_98 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_98 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_98)(plStack_98);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return plVar1;
}



// FUNCTION 14057f430 GetLoginToken body=42 status=ok
// SIG undefined GetLoginToken(void)

undefined8
LoginSession::GetLoginToken
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res20;
  
  local_res20 = param_4;
  VivoxNativeSdk::GetLoginToken(param_2,param_1 + 0x90,param_3,&local_res20);
  return param_2;
}



// FUNCTION 14057f460 GetLoginToken body=557 status=ok
// SIG undefined GetLoginToken(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
VivoxNativeSdk::GetLoginToken
          (undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  char *pcVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  longlong local_268;
  undefined8 local_258;
  undefined1 local_250 [8];
  undefined1 local_248 [8];
  longlong local_240 [3];
  undefined1 local_228 [128];
  longlong local_1a8;
  undefined1 local_188 [128];
  longlong local_108;
  undefined1 local_e8 [128];
  longlong local_68;
  ulonglong local_48;
  
  lVar9 = DAT_1468535c8;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  puVar10 = &DAT_143f3eda8;
  DAT_1468535c8 = DAT_1468535c8 + 1;
  iVar8 = 0;
  if (*(int *)(param_3 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_3;
    iVar8 = *(int *)(param_3 + 1) + -1;
  }
  lVar2 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_e8,puVar7);
  uVar1 = *(undefined8 *)(lVar2 + 0x88);
  puVar3 = (undefined8 *)AccountId::ToString(param_2,local_240);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar3;
  }
  lVar2 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_188,puVar7);
  local_258 = *(undefined8 *)(lVar2 + 0x88);
  plVar4 = (longlong *)FDateTime::UtcNow(local_250);
  lVar2 = *param_4;
  local_270 = (ulonglong)local_270._4_4_ << 0x20;
  local_278 = (ulonglong)local_278._4_4_ << 0x20;
  lVar5 = *plVar4;
  local_280 = (ulonglong)local_280._4_4_ << 0x20;
  local_288 = (ulonglong)local_288._4_4_ << 0x20;
  plVar4 = (longlong *)FDateTime::FDateTime(local_248,0x7b2,1);
  lVar2 = (lVar2 + lVar5) - *plVar4;
  lVar2 = lVar2 + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar2),8);
  if (*(int *)(param_2 + 0x28) != 0) {
    puVar10 = *(undefined2 **)(param_2 + 0x20);
  }
  lVar5 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_228,puVar10);
  local_268 = (longlong)iVar8;
  local_278 = 0;
  local_280 = local_258;
  local_288 = 0;
  local_270 = uVar1;
  pcVar6 = (char *)::_guard_xfg_dispatch_icall_nop
                             (*(undefined8 *)(lVar5 + 0x88),(lVar2 >> 0x17) - (lVar2 >> 0x3f),
                              "login",lVar9);
  if (local_1a8 != 0) {
    FMemory::Free();
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  if (local_240[0] != 0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((pcVar6 != (char *)0x0) && (*pcVar6 != '\0')) {
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (pcVar6[lVar9] != '\0');
    iVar8 = (int)lVar9 + 1;
    *(int *)(param_1 + 1) = iVar8;
    if (0 < iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    local_288 = CONCAT62(local_288._2_6_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(*param_1,iVar8,pcVar6,iVar8);
  }
  ::_guard_xfg_dispatch_icall_nop(pcVar6);
  return param_1;
}



// FUNCTION 14057f690 FUN_14057f690 body=311 status=ok
// SIG undefined FUN_14057f690(void)

byte * FUN_14057f690(longlong param_1,byte *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined1 local_res8 [8];
  longlong local_28 [2];
  byte *local_18;
  longlong *local_10;
  
  plVar1 = (longlong *)(param_1 + 0xd8);
  pbVar6 = (byte *)0x0;
  if (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c)) {
    lVar3 = *(longlong *)(param_1 + 0x118);
    if (*(longlong *)(param_1 + 0x118) == 0) {
      lVar3 = param_1 + 0x110;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0x120) - 1U & (ulonglong)*param_2) * 4);
    if (iVar2 != -1) {
      do {
        pbVar4 = (byte *)((longlong)iVar2 * 0x20 + *plVar1);
        if (*pbVar4 == *param_2) {
          if (iVar2 != -1) goto LAB_14057f701;
          break;
        }
        iVar2 = *(int *)(pbVar4 + 0x18);
      } while (iVar2 != -1);
    }
  }
  pbVar4 = pbVar6;
LAB_14057f701:
  pbVar5 = pbVar4 + 8;
  if (pbVar4 == (byte *)0x0) {
    pbVar5 = pbVar6;
  }
  if (pbVar5 == (byte *)0x0) {
    local_10 = local_28;
    local_28[0] = 0;
    local_28[1] = 0;
    local_18 = param_2;
    FUN_14056ba80(plVar1,local_res8,&local_18,0);
    if (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c)) {
      lVar3 = *(longlong *)(param_1 + 0x118);
      if (*(longlong *)(param_1 + 0x118) == 0) {
        lVar3 = param_1 + 0x110;
      }
      iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0x120) - 1U & (ulonglong)*param_2) * 4)
      ;
      if (iVar2 != -1) {
        do {
          pbVar5 = (byte *)((longlong)iVar2 * 0x20 + *plVar1);
          if (*pbVar5 == *param_2) {
            if (iVar2 != -1) goto LAB_14057f7a1;
            break;
          }
          iVar2 = *(int *)(pbVar5 + 0x18);
        } while (iVar2 != -1);
      }
    }
    pbVar5 = pbVar6;
LAB_14057f7a1:
    pbVar5 = pbVar5 + 8;
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  return pbVar5;
}



// FUNCTION 14057f7d0 GetMuteForAllToken body=187 status=ok
// SIG undefined GetMuteForAllToken(void)

undefined8
Participant::GetMuteForAllToken
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_res20;
  longlong local_68 [2];
  longlong local_58;
  longlong local_48;
  
  local_res20 = param_4;
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x38) + 8))();
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x48))
                    (*(longlong **)(param_1 + 0x38),local_68);
  uVar3 = (**(code **)(*plVar1 + 0x48))(plVar1);
  FUN_14057f890(param_2,uVar3,uVar2,param_1 + 0x40,param_3,&local_res20);
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 14057f890 FUN_14057f890 body=756 status=ok
// SIG undefined FUN_14057f890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_14057f890(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,longlong *param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  char *pcVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined1 auStack_428 [32];
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  longlong local_3e8;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined1 local_3c0 [8];
  undefined1 local_3b8 [8];
  longlong local_3b0 [2];
  longlong local_3a0 [2];
  longlong local_390 [3];
  undefined1 local_378 [128];
  longlong local_2f8;
  undefined1 local_2d8 [128];
  longlong local_258;
  undefined1 local_238 [128];
  longlong local_1b8;
  undefined1 local_198 [128];
  longlong local_118;
  undefined1 local_f8 [128];
  longlong local_78;
  ulonglong local_58;
  
  lVar9 = DAT_1468535d8;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_428;
  puVar10 = &DAT_143f3eda8;
  DAT_1468535d8 = DAT_1468535d8 + 1;
  iVar8 = *(int *)(param_5 + 1) + -1;
  if (*(int *)(param_5 + 1) == 0) {
    iVar8 = 0;
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_5;
  }
  lVar2 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_f8,puVar7);
  local_3d8 = *(undefined8 *)(lVar2 + 0x88);
  puVar3 = (undefined8 *)FUN_14058a6b0(param_3,local_390);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar3;
  }
  lVar2 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_198,puVar7);
  local_3d0 = *(undefined8 *)(lVar2 + 0x88);
  puVar3 = (undefined8 *)AccountId::ToString(param_2,local_3a0);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar3;
  }
  lVar2 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_238,puVar7);
  uVar1 = *(undefined8 *)(lVar2 + 0x88);
  puVar3 = (undefined8 *)AccountId::ToString(param_4,local_3b0);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar3;
  }
  lVar2 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_2d8,puVar7);
  local_3c8 = *(undefined8 *)(lVar2 + 0x88);
  plVar4 = (longlong *)FDateTime::UtcNow(local_3c0);
  lVar2 = *param_6;
  lVar5 = *plVar4;
  local_3f0 = (ulonglong)local_3f0._4_4_ << 0x20;
  local_3f8 = (ulonglong)local_3f8._4_4_ << 0x20;
  local_400 = (ulonglong)local_400._4_4_ << 0x20;
  local_408 = (ulonglong)local_408._4_4_ << 0x20;
  plVar4 = (longlong *)FDateTime::FDateTime(local_3b8,0x7b2,1);
  lVar2 = (lVar2 + lVar5) - *plVar4;
  lVar2 = lVar2 + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar2),8);
  if (*(int *)(param_2 + 0x28) != 0) {
    puVar10 = *(undefined2 **)(param_2 + 0x20);
  }
  lVar5 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_378,puVar10);
  local_3e8 = (longlong)iVar8;
  local_3f0 = local_3d8;
  local_3f8 = local_3d0;
  local_408 = local_3c8;
  local_400 = uVar1;
  pcVar6 = (char *)_guard_xfg_dispatch_icall_nop
                             (*(undefined8 *)(lVar5 + 0x88),(lVar2 >> 0x17) - (lVar2 >> 0x3f),
                              &DAT_143fc2b64,lVar9);
  if (local_2f8 != 0) {
    FMemory::Free();
  }
  if (local_258 != 0) {
    FMemory::Free();
  }
  if (local_3b0[0] != 0) {
    FMemory::Free();
  }
  if (local_1b8 != 0) {
    FMemory::Free();
  }
  if (local_3a0[0] != 0) {
    FMemory::Free();
  }
  if (local_118 != 0) {
    FMemory::Free();
  }
  if (local_390[0] != 0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((pcVar6 != (char *)0x0) && (*pcVar6 != '\0')) {
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (pcVar6[lVar9] != '\0');
    iVar8 = (int)lVar9 + 1;
    *(int *)(param_1 + 1) = iVar8;
    if (0 < iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    local_408 = CONCAT62(local_408._2_6_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(*param_1,iVar8,pcVar6,iVar8);
  }
  _guard_xfg_dispatch_icall_nop(pcVar6);
  return param_1;
}



// FUNCTION 14057fba0 GetConnectToken body=95 status=ok
// SIG undefined GetConnectToken(void)

undefined8
ChannelSession::GetConnectToken
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res20;
  
  local_res20 = param_4;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x48))(*(longlong **)(param_1 + 0xd8));
  VivoxNativeSdk::GetJoinToken(param_2,uVar1,param_1 + 0x140,param_3,&local_res20);
  return param_2;
}



// FUNCTION 14057fc00 GetJoinToken body=651 status=ok
// SIG undefined GetJoinToken(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
VivoxNativeSdk::GetJoinToken
          (undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
          longlong *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  char *pcVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined1 auStack_368 [32];
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  longlong local_328;
  undefined8 local_318;
  undefined8 local_310;
  undefined1 local_308 [8];
  undefined1 local_300 [8];
  longlong local_2f8 [2];
  longlong local_2e8 [2];
  undefined1 local_2d8 [128];
  longlong local_258;
  undefined1 local_238 [128];
  longlong local_1b8;
  undefined1 local_198 [128];
  longlong local_118;
  undefined1 local_f8 [128];
  longlong local_78;
  ulonglong local_58;
  
  lVar9 = DAT_1468535e0;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_368;
  puVar10 = &DAT_143f3eda8;
  DAT_1468535e0 = DAT_1468535e0 + 1;
  iVar8 = 0;
  if (*(int *)(param_4 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_4;
    iVar8 = *(int *)(param_4 + 1) + -1;
  }
  lVar2 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_f8,puVar7);
  local_318 = *(undefined8 *)(lVar2 + 0x88);
  puVar3 = (undefined8 *)FUN_14058a6b0(param_3,local_2e8);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar3;
  }
  lVar2 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_198,puVar7);
  uVar1 = *(undefined8 *)(lVar2 + 0x88);
  puVar3 = (undefined8 *)AccountId::ToString(param_2,local_2f8);
  if (*(int *)(puVar3 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar3;
  }
  lVar2 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_238,puVar7);
  local_310 = *(undefined8 *)(lVar2 + 0x88);
  plVar4 = (longlong *)FDateTime::UtcNow(local_308);
  local_330 = (ulonglong)local_330._4_4_ << 0x20;
  local_338 = (ulonglong)local_338._4_4_ << 0x20;
  local_340 = (ulonglong)local_340._4_4_ << 0x20;
  lVar2 = *param_5;
  lVar5 = *plVar4;
  local_348 = (ulonglong)local_348._4_4_ << 0x20;
  plVar4 = (longlong *)FDateTime::FDateTime(local_300,0x7b2,1);
  lVar2 = (lVar2 + lVar5) - *plVar4;
  lVar2 = lVar2 + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar2),8);
  if (*(int *)(param_2 + 0x28) != 0) {
    puVar10 = *(undefined2 **)(param_2 + 0x20);
  }
  lVar5 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_2d8,puVar10);
  local_328 = (longlong)iVar8;
  local_330 = local_318;
  local_340 = local_310;
  local_348 = 0;
  local_338 = uVar1;
  pcVar6 = (char *)::_guard_xfg_dispatch_icall_nop
                             (*(undefined8 *)(lVar5 + 0x88),(lVar2 >> 0x17) - (lVar2 >> 0x3f),
                              &DAT_143fc2ba0,lVar9);
  if (local_258 != 0) {
    FMemory::Free();
  }
  if (local_1b8 != 0) {
    FMemory::Free();
  }
  if (local_2f8[0] != 0) {
    FMemory::Free();
  }
  if (local_118 != 0) {
    FMemory::Free();
  }
  if (local_2e8[0] != 0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((pcVar6 != (char *)0x0) && (*pcVar6 != '\0')) {
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (pcVar6[lVar9] != '\0');
    iVar8 = (int)lVar9 + 1;
    *(int *)(param_1 + 1) = iVar8;
    if (0 < iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    local_348 = CONCAT62(local_348._2_6_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(*param_1,iVar8,pcVar6,iVar8);
  }
  ::_guard_xfg_dispatch_icall_nop(pcVar6);
  return param_1;
}



// FUNCTION 14057fea0 FUN_14057fea0 body=994 status=ok
// SIG undefined FUN_14057fea0(void)

longlong * FUN_14057fea0(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  int local_f8;
  uint uStack_f4;
  uint uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  uint uStack_c4;
  int iStack_a8;
  uint uStack_a4;
  uint *local_a0;
  uint uStack_98;
  uint uStack_94;
  undefined8 local_90;
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [2];
  undefined1 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (*(char *)(param_1 + 0x2c0) == '\x01') {
    *(undefined4 *)(param_2 + 1) = 1;
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_2,0);
    lVar10 = *param_2;
    FString::FString(lVar10,param_1 + 0x2c8);
    FString::FString(lVar10 + 0x10,param_1 + 0x2d8);
    FString::FString(lVar10 + 0x20,param_1 + 0x2e8);
    *(undefined1 *)(lVar10 + 0x30) = *(undefined1 *)(param_1 + 0x2f8);
    uVar6 = *(undefined8 *)(param_1 + 0x308);
    *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)(param_1 + 0x300);
    *(undefined8 *)(lVar10 + 0x40) = uVar6;
    *(undefined8 *)(lVar10 + 0x48) = *(undefined8 *)(param_1 + 0x310);
  }
  else if (*(char *)(param_1 + 0x2c0) == '\x02') {
    uVar4 = *(uint *)(param_1 + 0x128);
    puVar1 = (uint *)(param_1 + 0x110);
    local_f8 = 0;
    uStack_e4 = 0;
    iStack_e0 = 0;
    uStack_f4 = 1;
    if (uVar4 != 0) {
      puVar12 = *(uint **)(param_1 + 0x120);
      if (*(uint **)(param_1 + 0x120) == (uint *)0x0) {
        puVar12 = puVar1;
      }
      uVar11 = *puVar12;
      iStack_e0 = 0;
      local_f8 = 0;
      while (uVar11 == 0) {
        lVar10 = (longlong)local_f8;
        iStack_e0 = iStack_e0 + 0x20;
        iVar8 = local_f8 + 1;
        bVar5 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_f8;
        local_f8 = iVar8;
        if (bVar5) goto LAB_14057ff94;
        uVar11 = puVar12[lVar10 + 1];
      }
      uStack_f4 = -uVar11 & uVar11;
      iVar8 = 0x1f;
      if (uStack_f4 != 0) {
        for (; uStack_f4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_f4 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_e4 = (iStack_e0 - iVar8) + 0x1f;
      if ((int)uVar4 < (int)uStack_e4) {
LAB_14057ff94:
        uStack_e4 = uVar4;
      }
    }
    uStack_c4 = *(uint *)(param_1 + 0x128);
    uStack_98 = 0xffffffff;
    uStack_94 = uStack_e4;
    local_90 = CONCAT44(uStack_dc,iStack_e0);
    uVar11 = uStack_c4 & 0xffffffe0;
    iStack_a8 = local_f8;
    uStack_a4 = uStack_f4;
    local_a0 = puVar1;
    if (uStack_c4 != uVar4) {
      puVar12 = *(uint **)(param_1 + 0x120);
      if (*(uint **)(param_1 + 0x120) == (uint *)0x0) {
        puVar12 = puVar1;
      }
      uVar9 = puVar12[(int)uStack_c4 >> 5] & -1 << ((byte)uStack_c4 & 0x1f);
      iVar8 = (int)uStack_c4 >> 5;
      while (uVar9 == 0) {
        uVar11 = uVar11 + 0x20;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
        goto LAB_14058007f;
        uVar9 = puVar12[(longlong)iVar8 + 1];
        iVar8 = iVar8 + 1;
      }
      uVar9 = -uVar9 & uVar9;
      iVar8 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uVar9 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_c4 = (uVar11 - iVar8) + 0x1f;
      if ((int)uVar4 < (int)uStack_c4) {
LAB_14058007f:
        uStack_c4 = uVar4;
      }
    }
    while( true ) {
      if ((uStack_94 == uStack_c4) && (local_a0 == puVar1)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) break;
      lVar10 = (longlong)(int)uStack_94 * 0x68 + *(longlong *)(param_1 + 0x100);
      FString::FString(local_88,lVar10);
      FString::FString(local_78,lVar10 + 0x10);
      FString::FString(local_68,lVar10 + 0x20);
      local_58 = *(undefined1 *)(lVar10 + 0x30);
      local_50 = *(undefined4 *)(lVar10 + 0x38);
      uStack_4c = *(undefined4 *)(lVar10 + 0x3c);
      uStack_48 = *(undefined4 *)(lVar10 + 0x40);
      uStack_44 = *(undefined4 *)(lVar10 + 0x44);
      local_38 = *(undefined8 *)(lVar10 + 0x50);
      local_40 = *(undefined8 *)(lVar10 + 0x48);
      local_30 = *(longlong **)(lVar10 + 0x58);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
      }
      iVar8 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar8 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar8 + 1) {
        TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_2,iVar8);
      }
      lVar10 = (longlong)iVar8 * 0x50 + *param_2;
      FString::FString(lVar10,local_88);
      FString::FString(lVar10 + 0x10,local_78);
      FString::FString(lVar10 + 0x20,local_68);
      plVar7 = local_30;
      *(undefined1 *)(lVar10 + 0x30) = local_58;
      *(undefined4 *)(lVar10 + 0x38) = local_50;
      *(undefined4 *)(lVar10 + 0x3c) = uStack_4c;
      *(undefined4 *)(lVar10 + 0x40) = uStack_48;
      *(undefined4 *)(lVar10 + 0x44) = uStack_44;
      *(undefined8 *)(lVar10 + 0x48) = local_40;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_30 + 1;
        lVar10 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar3 = (int *)((longlong)plVar7 + 0xc);
          iVar8 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      if (local_78[0] != 0) {
        FMemory::Free();
      }
      if (local_88[0] != 0) {
        FMemory::Free();
      }
      uStack_98 = uStack_98 & ~uStack_a4;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a8);
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 140580290 GetTypeHash body=114 status=ok
// SIG undefined GetTypeHash(void)

uint GetTypeHash(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  puVar5 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 3) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)param_1[2];
  }
  iVar1 = FUN_140438070(puVar4);
  if (*(int *)(param_1 + 5) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)param_1[4];
  }
  uVar2 = FUN_140438070(puVar4);
  if (*(int *)(param_1 + 1) != 0) {
    puVar5 = (undefined2 *)*param_1;
  }
  uVar3 = FUN_140438070(puVar5);
  return uVar3 ^ (uVar2 ^ iVar1 * 0x18d) * 0x18d;
}



// FUNCTION 140580310 GetTypeHash body=126 status=ok
// SIG undefined GetTypeHash(void)

uint GetTypeHash(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  puVar5 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 3) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)param_1[2];
  }
  iVar1 = FUN_140438070(puVar4);
  if (*(int *)(param_1 + 5) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)param_1[4];
  }
  uVar2 = FUN_140438070(puVar4);
  if (*(int *)(param_1 + 1) != 0) {
    puVar5 = (undefined2 *)*param_1;
  }
  uVar3 = FUN_140438070(puVar5);
  return (uint)*(byte *)(param_1 + 6) ^ (uVar3 ^ (uVar2 ^ iVar1 * 0x18d) * 0x18d) * 0x18d;
}



// FUNCTION 140580390 FUN_140580390 body=2908 status=ok
// SIG undefined FUN_140580390(void)

void FUN_140580390(longlong param_1,longlong param_2)

{
  longlong **pplVar1;
  short sVar2;
  short sVar3;
  char *pcVar4;
  undefined *puVar5;
  bool bVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  short *psVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  longlong *plVar18;
  longlong *plVar19;
  uint uVar20;
  undefined2 *puVar21;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  longlong **pplVar27;
  longlong lVar28;
  longlong lVar29;
  longlong *plVar30;
  undefined **local_res18;
  undefined1 local_res20 [8];
  longlong *local_128;
  ulonglong local_120;
  undefined8 local_118;
  longlong **pplStack_110;
  uint local_108;
  uint uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  ulonglong local_f0;
  longlong *local_e8;
  longlong *local_e0;
  undefined **local_d8;
  undefined8 *local_d0;
  undefined8 *puStack_c8;
  int local_c0;
  undefined **local_b8;
  undefined8 uStack_b0;
  longlong **pplStack_a8;
  longlong *plStack_a0;
  undefined8 uStack_98;
  longlong local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  longlong **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  pcVar4 = *(char **)(*(longlong *)(param_2 + 0x30) + 0x30);
  if (pcVar4 == (char *)0x0) {
    return;
  }
  lVar29 = 0;
  local_f8 = 0;
  local_f0 = 0;
  lVar28 = -1;
  lVar23 = lVar28;
  if (*pcVar4 != '\0') {
    do {
      lVar23 = lVar23 + 1;
    } while (pcVar4[lVar23] != '\0');
    uVar22 = (int)lVar23 + 1;
    local_f0 = (ulonglong)uVar22;
    if (0 < (int)uVar22) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    }
    FGenericPlatformString::Convert<char,wchar_t>(local_f8,uVar22,pcVar4,uVar22,0x3f);
  }
  if (*(int *)(param_2 + 0x40) < 1) goto LAB_140580eb0;
  local_80 = 0;
  pcVar4 = (char *)**(undefined8 **)(param_2 + 0x58);
  local_88 = 0;
  if ((pcVar4 != (char *)0x0) && (lVar23 = lVar28, *pcVar4 != '\0')) {
    do {
      lVar23 = lVar23 + 1;
    } while (pcVar4[lVar23] != '\0');
    uVar22 = (int)lVar23 + 1;
    local_80 = (ulonglong)uVar22;
    if (0 < (int)uVar22) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    }
    FGenericPlatformString::Convert<char,wchar_t>(local_88,uVar22,pcVar4,uVar22,0x3f);
  }
  local_res18 = (undefined **)((ulonglong)local_res18 & 0xffffffff00000000);
  iVar13 = -1;
  if (0 < *(int *)(param_2 + 0x40)) {
    do {
      plVar19 = (longlong *)0x0;
      puVar16 = *(undefined8 **)(*(longlong *)(param_2 + 0x48) + lVar29);
      if (*(int *)(puVar16 + 2) != 2) {
        pcVar4 = (char *)*puVar16;
        local_e8 = (longlong *)0x0;
        local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffff);
        uVar22 = 0;
        if ((pcVar4 != (char *)0x0) && (lVar23 = lVar28, uVar22 = 0, *pcVar4 != '\0')) {
          do {
            lVar25 = lVar23 + 1;
            lVar23 = lVar23 + 1;
          } while (pcVar4[lVar25] != '\0');
          uVar24 = (int)lVar23 + 1;
          local_e0 = (longlong *)(ulonglong)uVar24;
          uVar22 = uVar24;
          if (0 < (int)uVar24) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
            uVar22 = (uint)local_e0;
          }
          plVar19 = local_e8;
          FGenericPlatformString::Convert<char,wchar_t>(local_e8,uVar24,pcVar4,uVar24,0x3f);
        }
        plVar30 = (longlong *)(param_1 + 0xf8);
        iVar12 = iVar13;
        if (*(int *)(param_1 + 0x100) != *(int *)(param_1 + 300)) {
          plVar15 = (longlong *)&DAT_143f3eda8;
          if (uVar22 != 0) {
            plVar15 = plVar19;
          }
          iVar10 = FUN_140438070(plVar15);
          lVar23 = *(longlong *)(param_1 + 0x138);
          if (*(longlong *)(param_1 + 0x138) == 0) {
            lVar23 = param_1 + 0x130;
          }
          iVar10 = *(int *)(lVar23 + ((longlong)*(int *)(param_1 + 0x140) - 1U & (longlong)iVar10) *
                                     4);
          if (iVar10 != -1) {
            lVar23 = *plVar30;
            do {
              lVar25 = (longlong)iVar10 * 0x20;
              if (*(int *)(lVar23 + 8 + lVar25) == 0) {
                puVar21 = &DAT_143f3eda8;
              }
              else {
                puVar21 = *(undefined2 **)(lVar23 + lVar25);
              }
              iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar21);
              iVar12 = iVar10;
              if (iVar11 == 0) break;
              lVar23 = *plVar30;
              iVar10 = *(int *)(lVar23 + 0x18 + lVar25);
              iVar12 = iVar13;
            } while (iVar10 != -1);
          }
        }
        if (plVar19 != (longlong *)0x0) {
          FMemory::Free(plVar19);
        }
        if (iVar12 == -1) {
          local_128 = (longlong *)
                      FUN_1405839a0(*(undefined8 *)(*(longlong *)(param_2 + 0x48) + lVar29));
          local_118 = (longlong *)(**(code **)(*local_128 + 0x10))(local_128);
          pplStack_110 = &local_128;
          FUN_14056b620(plVar30,local_res20,&local_118,0);
          TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 8,local_128);
          TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x50);
        }
      }
      lVar29 = lVar29 + 8;
      iVar12 = (int)local_res18 + 1;
      local_res18 = (undefined **)CONCAT44(local_res18._4_4_,iVar12);
    } while (iVar12 < *(int *)(param_2 + 0x40));
  }
  lVar23 = 0;
  plVar19 = (longlong *)(param_1 + 0x170);
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(plVar19,&local_res18,&local_f8);
  if ((int)local_res18 != -1) {
    lVar23 = *plVar19 + (longlong)(int)local_res18 * 0x28;
  }
  plVar30 = (longlong *)(lVar23 + 0x10);
  if (lVar23 == 0) {
    plVar30 = (longlong *)0x0;
  }
  pcVar4 = (char *)**(undefined8 **)(param_2 + 0x50);
  if (plVar30 == (longlong *)0x0) {
    local_120 = 0;
    local_128 = plVar30;
    if ((pcVar4 != (char *)0x0) && (lVar23 = lVar28, *pcVar4 != '\0')) {
      do {
        lVar23 = lVar23 + 1;
      } while (pcVar4[lVar23] != '\0');
      uVar22 = (int)lVar23 + 1;
      local_120 = (ulonglong)uVar22;
      if (0 < (int)uVar22) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
      }
      FGenericPlatformString::Convert<char,wchar_t>(local_128,uVar22,pcVar4,uVar22,0x3f);
    }
    local_118 = &local_f8;
    pplStack_110 = &local_128;
    TSet<TTuple<FString,TArray<physx::PxBase_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<physx::PxBase_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,TArray<physx::PxBase_*,FDefaultAllocator>_&&>_>
              (plVar19,&local_res18,&local_118,0);
    if (local_128 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    local_128 = (longlong *)0x0;
    local_120 = 0;
    plVar15 = (longlong *)0x0;
    if ((pcVar4 == (char *)0x0) || (lVar23 = lVar28, *pcVar4 == '\0')) {
LAB_1405807a1:
      plVar18 = (longlong *)&DAT_143f3eda8;
    }
    else {
      do {
        lVar23 = lVar23 + 1;
      } while (pcVar4[lVar23] != '\0');
      uVar24 = (int)lVar23 + 1;
      local_120 = (ulonglong)uVar24;
      uVar22 = uVar24;
      if (0 < (int)uVar24) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
        uVar22 = (uint)local_120;
      }
      plVar18 = local_128;
      FGenericPlatformString::Convert<char,wchar_t>(local_128,uVar24,pcVar4,uVar24,0x3f);
      plVar15 = plVar18;
      if (uVar22 == 0) goto LAB_1405807a1;
    }
    if ((int)plVar30[1] == 0) {
      psVar14 = &DAT_143f3eda8;
    }
    else {
      psVar14 = (short *)*plVar30;
    }
    lVar23 = (longlong)plVar18 - (longlong)psVar14;
    do {
      sVar2 = *psVar14;
      sVar3 = *(short *)((longlong)psVar14 + lVar23);
      if (sVar2 != sVar3) break;
      psVar14 = psVar14 + 1;
    } while (sVar3 != 0);
    if (plVar15 != (longlong *)0x0) {
      FMemory::Free(plVar15);
    }
    if (sVar2 != sVar3) {
      pcVar4 = (char *)**(undefined8 **)(param_2 + 0x50);
      local_128 = (longlong *)0x0;
      local_120 = 0;
      if ((pcVar4 != (char *)0x0) && (lVar23 = lVar28, *pcVar4 != '\0')) {
        do {
          lVar23 = lVar23 + 1;
        } while (pcVar4[lVar23] != '\0');
        uVar22 = (int)lVar23 + 1;
        local_120 = (ulonglong)uVar22;
        if (0 < (int)uVar22) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
        }
        FGenericPlatformString::Convert<char,wchar_t>(local_128,uVar22,pcVar4,uVar22,0x3f);
      }
      local_118 = &local_f8;
      pplStack_110 = &local_128;
      TSet<TTuple<FString,TArray<physx::PxBase_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<physx::PxBase_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,TArray<physx::PxBase_*,FDefaultAllocator>_&&>_>
                (plVar19,&local_res18,&local_118,0);
      if (local_128 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  plVar30 = (longlong *)0x0;
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x1c0,&local_res18,&local_f8);
  plVar19 = plVar30;
  if ((int)local_res18 != -1) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x1c0) + (longlong)(int)local_res18 * 0x28);
  }
  plVar15 = plVar19 + 2;
  if (plVar19 == (longlong *)0x0) {
    plVar15 = plVar30;
  }
  if (plVar15 == (longlong *)0x0) {
    local_118 = &local_f8;
    pplStack_110 = &local_e8;
    local_e8 = plVar30;
    local_e0 = plVar15;
    TSet<TTuple<FString,TArray<physx::PxBase_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<physx::PxBase_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,TArray<physx::PxBase_*,FDefaultAllocator>_&&>_>
              (param_1 + 0x1c0,&local_res18,&local_118,0);
    if (local_e8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x1c0,&local_res18,&local_f8);
  plVar19 = plVar30;
  if ((int)local_res18 != -1) {
    plVar19 = (longlong *)(*(longlong *)(param_1 + 0x1c0) + (longlong)(int)local_res18 * 0x28);
  }
  local_120 = 0;
  plVar15 = plVar19 + 2;
  if (plVar19 == (longlong *)0x0) {
    plVar15 = plVar30;
  }
  pcVar4 = (char *)**(undefined8 **)(param_2 + 0x58);
  local_128 = plVar30;
  if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) {
    do {
      lVar28 = lVar28 + 1;
    } while (pcVar4[lVar28] != '\0');
    uVar22 = (int)lVar28 + 1;
    local_120 = (ulonglong)uVar22;
    if (0 < (int)uVar22) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    }
    FGenericPlatformString::Convert<char,wchar_t>(local_128,uVar22,pcVar4,uVar22,0x3f);
  }
  cVar9 = FUN_140585b70(plVar15,&local_128);
  if (local_128 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (cVar9 != '\0') {
    if (1 < (int)plVar15[1]) {
      TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0xf8,&local_res18,plVar15);
      plVar19 = plVar30;
      if ((int)local_res18 != -1) {
        plVar19 = (longlong *)((longlong)(int)local_res18 * 0x20 + *(longlong *)(param_1 + 0xf8));
      }
      plVar15 = plVar19 + 2;
      if (plVar19 == (longlong *)0x0) {
        plVar15 = plVar30;
      }
      if ((plVar15 != (longlong *)0x0) && (*plVar15 != 0)) {
        TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x38);
        goto LAB_140580a7f;
      }
    }
    local_b8 = &PTR__scalar_deleting_destructor__143fc4420;
    pplStack_a8 = (longlong **)0x0;
    uStack_98 = 0;
    uStack_b0 = plVar30;
    plStack_a0 = plVar30;
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x38,&local_b8);
    local_b8 = &PTR__scalar_deleting_destructor__143fc4420;
    if (plStack_a0 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (uStack_b0 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
LAB_140580a7f:
  local_c0 = 0;
  local_res18 = (undefined **)(param_1 + 0xf8);
  local_d8 = &PTR__scalar_deleting_destructor__143fc4528;
  pplVar1 = (longlong **)(param_1 + 0x108);
  local_d0 = (undefined8 *)0x0;
  puStack_c8 = (undefined8 *)0x0;
  uVar22 = *(uint *)(param_1 + 0x120);
  local_118 = (longlong *)0x100000000;
  uStack_104 = 0;
  iStack_100 = 0;
  if (uVar22 != 0) {
    pplVar27 = *(longlong ***)(param_1 + 0x118);
    if (*(longlong ***)(param_1 + 0x118) == (longlong **)0x0) {
      pplVar27 = pplVar1;
    }
    uVar24 = *(uint *)pplVar27;
    iStack_100 = 0;
    iVar13 = 0;
    while (uVar24 == 0) {
      iStack_100 = iStack_100 + 0x20;
      uVar7 = (ulonglong)local_118 >> 0x20;
      local_118 = (longlong *)CONCAT44((int)uVar7,iVar13 + 1);
      if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13)
      goto LAB_140580b51;
      uVar24 = *(uint *)((longlong)pplVar27 + ((longlong)iVar13 + 1) * 4);
      iVar13 = iVar13 + 1;
    }
    uVar24 = -uVar24 & uVar24;
    iVar13 = 0x1f;
    if (uVar24 != 0) {
      for (; uVar24 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    local_118 = (longlong *)CONCAT44(uVar24,SUB84(local_118,0));
    if (uVar24 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_104 = (iStack_100 - iVar13) + 0x1f;
    if ((int)uVar22 < (int)uStack_104) {
LAB_140580b51:
      uStack_104 = uVar22;
    }
  }
  uVar24 = *(uint *)(param_1 + 0x120);
  plStack_a0 = (longlong *)CONCAT44(uStack_104,0xffffffff);
  uStack_98 = CONCAT44(uStack_fc,iStack_100);
  uStack_b0 = local_118;
  plVar19 = uStack_b0;
  local_108 = -1 << ((byte)uVar24 & 0x1f);
  uStack_b0._0_4_ = SUB84(local_118,0);
  uStack_b0._4_4_ = (uint)((ulonglong)local_118 >> 0x20);
  uVar26 = uVar24 & 0xffffffe0;
  uStack_70 = (undefined4)uStack_b0;
  uStack_6c = uStack_b0._4_4_;
  pplStack_110 = pplVar1;
  uStack_104 = uVar24;
  local_b8 = local_res18;
  uStack_b0 = plVar19;
  pplStack_a8 = pplVar1;
  local_68 = pplVar1;
  uStack_60 = plStack_a0;
  local_58 = uStack_98;
  local_78 = local_res18;
  if (uVar24 != uVar22) {
    pplVar27 = *(longlong ***)(param_1 + 0x118);
    if (*(longlong ***)(param_1 + 0x118) == (longlong **)0x0) {
      pplVar27 = pplVar1;
    }
    uVar20 = *(uint *)((longlong)pplVar27 + (longlong)((int)uVar24 >> 5) * 4) & local_108;
    iVar13 = (int)uVar24 >> 5;
    while (uVar20 == 0) {
      uVar26 = uVar26 + 0x20;
      if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13)
      goto LAB_140580c26;
      uVar20 = *(uint *)((longlong)pplVar27 + ((longlong)iVar13 + 1) * 4);
      local_108 = 0xffffffff;
      iVar13 = iVar13 + 1;
    }
    uVar20 = -uVar20 & uVar20;
    iVar13 = 0x1f;
    if (uVar20 != 0) {
      for (; uVar20 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar20 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_104 = (uVar26 - iVar13) + 0x1f;
    uVar24 = uStack_104;
    if ((int)uVar22 < (int)uStack_104) {
LAB_140580c26:
      uStack_104 = uVar22;
      uVar24 = uVar22;
    }
  }
  while( true ) {
    lVar28 = (longlong)(int)uStack_60._4_4_;
    if (((uStack_60._4_4_ == uVar24) && (local_68 == pplVar1)) && (local_78 == local_res18)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) break;
    puVar5 = *local_78;
    FString::FString(&local_118,puVar5 + lVar28 * 0x20);
    plVar19 = *(longlong **)(puVar5 + lVar28 * 0x20 + 0x10);
    puVar16 = (undefined8 *)(**(code **)(*plVar19 + 0x10))(plVar19);
    lVar23 = 0;
    iVar13 = *(int *)(param_2 + 0x40);
    lVar28 = *(longlong *)(param_2 + 0x48);
    if (0 < (longlong)iVar13) {
      do {
        if (*(int *)(puVar16 + 1) == 0) {
          puVar21 = &DAT_143f3eda8;
        }
        else {
          puVar21 = (undefined2 *)*puVar16;
        }
        iVar12 = FGenericPlatformStricmp::Stricmp<char,wchar_t>
                           (**(undefined8 **)(lVar28 + lVar23 * 8),puVar21);
        if (iVar12 == 0) goto LAB_140580d0e;
        lVar23 = lVar23 + 1;
      } while (lVar23 < iVar13);
    }
    puVar16 = (undefined8 *)operator_new(0x18);
    if (puVar16 != (undefined8 *)0x0) {
      *puVar16 = plVar19;
      puVar16[1] = 0;
      puVar16[2] = 0;
      puVar8 = puVar16;
      if (puStack_c8 != (undefined8 *)0x0) {
        puStack_c8[1] = puVar16;
        puVar16[2] = puStack_c8;
        puVar8 = local_d0;
      }
      local_d0 = puVar8;
      puStack_c8 = puVar16;
      (*(code *)local_d8[1])(&local_d8,local_c0 + 1);
    }
LAB_140580d0e:
    if (local_118 != (longlong *)0x0) {
      FMemory::Free();
    }
    uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_6c);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
  }
  if (local_d0 != (undefined8 *)0x0) {
    puVar16 = local_d0;
    do {
      plVar19 = (longlong *)*puVar16;
      bVar6 = false;
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
      iVar13 = *(int *)(param_1 + 100);
      iVar12 = *(int *)(param_1 + 0x58) + -1;
      lVar28 = (longlong)iVar12;
      if (-1 < iVar12) {
        lVar23 = lVar28 << 4;
        bVar6 = false;
        do {
          lVar29 = *(longlong *)(param_1 + 0x50);
          if ((*(int *)(lVar23 + 8 + lVar29) == 0) ||
             (plVar30 = *(longlong **)(lVar23 + lVar29), plVar30 == (longlong *)0x0)) {
LAB_140580d93:
            bVar6 = true;
          }
          else {
            cVar9 = (**(code **)(*plVar30 + 0x40))(plVar30,&local_f8);
            if (cVar9 == '\0') goto LAB_140580d93;
          }
          lVar23 = lVar23 + -0x10;
          lVar28 = lVar28 + -1;
        } while (-1 < lVar28);
        iVar13 = *(int *)(param_1 + 100);
      }
      *(int *)(param_1 + 100) = iVar13 + -1;
      if (bVar6) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                  ((longlong *)(param_1 + 0x50),0);
      }
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      bVar6 = false;
      iVar13 = *(int *)(param_1 + 0x34);
      iVar12 = *(int *)(param_1 + 0x28) + -1;
      lVar28 = (longlong)iVar12;
      if (-1 < iVar12) {
        lVar23 = lVar28 << 4;
        bVar6 = false;
        do {
          lVar29 = *(longlong *)(param_1 + 0x20);
          if ((*(int *)(lVar23 + 8 + lVar29) == 0) ||
             (plVar30 = *(longlong **)(lVar23 + lVar29), plVar30 == (longlong *)0x0)) {
LAB_140580e00:
            bVar6 = true;
          }
          else {
            cVar9 = (**(code **)(*plVar30 + 0x40))(plVar30,plVar19);
            if (cVar9 == '\0') goto LAB_140580e00;
          }
          lVar23 = lVar23 + -0x10;
          lVar28 = lVar28 + -1;
        } while (-1 < lVar28);
        iVar13 = *(int *)(param_1 + 0x34);
      }
      *(int *)(param_1 + 0x34) = iVar13 + -1;
      if (bVar6) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList
                  ((longlong *)(param_1 + 0x20),0);
      }
      uVar17 = (**(code **)(*plVar19 + 0x10))(plVar19);
      TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
      ::Remove(local_res18,uVar17);
      (**(code **)*plVar19)(plVar19);
      puVar16 = (undefined8 *)puVar16[1];
    } while (puVar16 != (undefined8 *)0x0);
  }
  local_d8 = &PTR__scalar_deleting_destructor__143fc4528;
  while (local_d0 != (undefined8 *)0x0) {
    puVar16 = (undefined8 *)local_d0[1];
    FMemory::operator_delete(local_d0,0x18);
    local_d0 = puVar16;
  }
  puStack_c8 = (undefined8 *)0x0;
  local_d0 = (undefined8 *)0x0;
  (*(code *)local_d8[1])(&local_d8,0);
  if (local_88 != 0) {
    FMemory::Free();
  }
LAB_140580eb0:
  if (local_f8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140580ef0 FUN_140580ef0 body=2672 status=ok
// SIG undefined FUN_140580ef0(void)

void FUN_140580ef0(longlong param_1,longlong param_2)

{
  uint *puVar1;
  short sVar2;
  short sVar3;
  char *pcVar4;
  undefined *puVar5;
  bool bVar6;
  ulonglong uVar7;
  undefined **ppuVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  short *psVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong *plVar18;
  uint uVar19;
  undefined2 *puVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  char *pcVar25;
  uint uVar26;
  uint *puVar27;
  longlong lVar28;
  longlong lVar29;
  longlong *plVar30;
  undefined8 *puVar31;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  longlong *local_128;
  longlong *local_120;
  undefined8 local_118;
  longlong **pplStack_110;
  uint local_108;
  uint uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  ulonglong local_f0;
  longlong *local_e8;
  longlong *local_e0;
  undefined **local_d8;
  undefined8 *local_d0;
  undefined8 *puStack_c8;
  int local_c0;
  undefined **local_b8;
  undefined8 uStack_b0;
  uint *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong local_88;
  ulonglong local_80;
  undefined **local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  
  pcVar25 = *(char **)(*(longlong *)(param_2 + 0x30) + 0x30);
  if (pcVar25 == (char *)0x0) {
    return;
  }
  if (*(int *)(param_2 + 0x40) < 1) {
    return;
  }
  pcVar4 = (char *)**(undefined8 **)(param_2 + 0x58);
  lVar28 = -1;
  local_88 = 0;
  local_80 = 0;
  if ((pcVar4 != (char *)0x0) && (lVar22 = lVar28, *pcVar4 != '\0')) {
    do {
      lVar22 = lVar22 + 1;
    } while (pcVar4[lVar22] != '\0');
    uVar21 = (int)lVar22 + 1;
    local_80 = (ulonglong)uVar21;
    if (0 < (int)uVar21) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    }
    FGenericPlatformString::Convert<char,wchar_t>(local_88,uVar21,pcVar4,uVar21,0x3f);
  }
  lVar29 = 0;
  local_f0 = 0;
  local_f8 = 0;
  lVar22 = lVar28;
  if (*pcVar25 != '\0') {
    do {
      lVar22 = lVar22 + 1;
    } while (pcVar25[lVar22] != '\0');
    uVar21 = (int)lVar22 + 1;
    local_f0 = (ulonglong)uVar21;
    if (0 < (int)uVar21) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    }
    FGenericPlatformString::Convert<char,wchar_t>(local_f8,uVar21,pcVar25,uVar21,0x3f);
  }
  local_res18 = (undefined **)((ulonglong)local_res18._4_4_ << 0x20);
  iVar13 = -1;
  if (0 < *(int *)(param_2 + 0x40)) {
    do {
      plVar18 = (longlong *)0x0;
      puVar15 = *(undefined8 **)(*(longlong *)(param_2 + 0x48) + lVar29);
      if (*(int *)(puVar15 + 2) != 2) {
        pcVar25 = (char *)*puVar15;
        local_e8 = (longlong *)0x0;
        local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffff);
        uVar21 = 0;
        if ((pcVar25 != (char *)0x0) && (lVar22 = lVar28, uVar21 = 0, *pcVar25 != '\0')) {
          do {
            lVar24 = lVar22 + 1;
            lVar22 = lVar22 + 1;
          } while (pcVar25[lVar24] != '\0');
          uVar23 = (int)lVar22 + 1;
          local_e0 = (longlong *)(ulonglong)uVar23;
          uVar21 = uVar23;
          if (0 < (int)uVar23) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
            uVar21 = (uint)local_e0;
          }
          plVar18 = local_e8;
          FGenericPlatformString::Convert<char,wchar_t>(local_e8,uVar23,pcVar25,uVar23,0x3f);
        }
        plVar30 = (longlong *)(param_1 + 0xf8);
        iVar12 = iVar13;
        if (*(int *)(param_1 + 0x100) != *(int *)(param_1 + 300)) {
          plVar17 = (longlong *)&DAT_143f3eda8;
          if (uVar21 != 0) {
            plVar17 = plVar18;
          }
          iVar10 = FUN_140438070(plVar17);
          lVar22 = *(longlong *)(param_1 + 0x138);
          if (*(longlong *)(param_1 + 0x138) == 0) {
            lVar22 = param_1 + 0x130;
          }
          iVar10 = *(int *)(lVar22 + ((longlong)*(int *)(param_1 + 0x140) - 1U & (longlong)iVar10) *
                                     4);
          if (iVar10 != -1) {
            lVar22 = *plVar30;
            do {
              lVar24 = (longlong)iVar10 * 0x20;
              if (*(int *)(lVar22 + 8 + lVar24) == 0) {
                puVar20 = &DAT_143f3eda8;
              }
              else {
                puVar20 = *(undefined2 **)(lVar22 + lVar24);
              }
              iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar20);
              iVar12 = iVar10;
              if (iVar11 == 0) break;
              lVar22 = *plVar30;
              iVar10 = *(int *)(lVar22 + 0x18 + lVar24);
              iVar12 = iVar13;
            } while (iVar10 != -1);
          }
        }
        if (plVar18 != (longlong *)0x0) {
          FMemory::Free(plVar18);
        }
        if (iVar12 == -1) {
          local_128 = (longlong *)
                      FUN_1405839a0(*(undefined8 *)(*(longlong *)(param_2 + 0x48) + lVar29));
          local_118 = (longlong *)(**(code **)(*local_128 + 0x10))(local_128);
          pplStack_110 = &local_128;
          FUN_14056b620(plVar30,local_res20,&local_118,0);
          TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 8);
        }
      }
      lVar29 = lVar29 + 8;
      iVar12 = (int)local_res18 + 1;
      local_res18 = (undefined **)CONCAT44(local_res18._4_4_,iVar12);
    } while (iVar12 < *(int *)(param_2 + 0x40));
  }
  plVar18 = (longlong *)(param_1 + 0x170);
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(plVar18,&local_res18,&local_f8);
  puVar15 = (undefined8 *)0x0;
  if ((int)local_res18 != -1) {
    puVar15 = (undefined8 *)(*plVar18 + (longlong)(int)local_res18 * 0x28);
  }
  puVar31 = puVar15 + 2;
  if (puVar15 == (undefined8 *)0x0) {
    puVar31 = (undefined8 *)0x0;
  }
  pcVar25 = (char *)**(undefined8 **)(param_2 + 0x50);
  lVar22 = lVar28;
  if (puVar31 == (undefined8 *)0x0) {
    local_128 = (longlong *)0x0;
    local_120 = local_128;
    if ((pcVar25 != (char *)0x0) && (*pcVar25 != '\0')) {
      do {
        lVar22 = lVar22 + 1;
      } while (pcVar25[lVar22] != '\0');
LAB_1405812e8:
      local_120 = (longlong *)0x0;
      local_128 = local_120;
      uVar21 = (int)lVar22 + 1;
      local_120 = (longlong *)(ulonglong)uVar21;
      if (0 < (int)uVar21) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
      }
      FGenericPlatformString::Convert<char,wchar_t>(local_128,uVar21,pcVar25,uVar21,0x3f);
    }
LAB_14058131a:
    local_118 = &local_f8;
    pplStack_110 = &local_128;
    TSet<TTuple<FString,TArray<physx::PxBase_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<physx::PxBase_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,TArray<physx::PxBase_*,FDefaultAllocator>_&&>_>
              (plVar18,&local_res18,&local_118,0);
    if (local_128 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else {
    local_128 = (longlong *)0x0;
    local_120 = (longlong *)0x0;
    plVar30 = (longlong *)0x0;
    if ((pcVar25 == (char *)0x0) || (lVar29 = lVar28, plVar30 = (longlong *)0x0, *pcVar25 == '\0'))
    {
LAB_140581274:
      plVar17 = (longlong *)&DAT_143f3eda8;
    }
    else {
      do {
        lVar29 = lVar29 + 1;
      } while (pcVar25[lVar29] != '\0');
      uVar23 = (int)lVar29 + 1;
      local_120 = (longlong *)(ulonglong)uVar23;
      uVar21 = uVar23;
      if (0 < (int)uVar23) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
        uVar21 = (uint)local_120;
      }
      plVar17 = local_128;
      FGenericPlatformString::Convert<char,wchar_t>(local_128,uVar23,pcVar25,uVar23,0x3f);
      plVar30 = plVar17;
      if (uVar21 == 0) goto LAB_140581274;
    }
    if (*(int *)(puVar31 + 1) == 0) {
      psVar14 = &DAT_143f3eda8;
    }
    else {
      psVar14 = (short *)*puVar31;
    }
    lVar29 = (longlong)plVar17 - (longlong)psVar14;
    do {
      sVar2 = *psVar14;
      sVar3 = *(short *)((longlong)psVar14 + lVar29);
      if (sVar2 != sVar3) break;
      psVar14 = psVar14 + 1;
    } while (sVar3 != 0);
    if (plVar30 != (longlong *)0x0) {
      FMemory::Free(plVar30);
    }
    if (sVar2 != sVar3) {
      pcVar25 = (char *)**(undefined8 **)(param_2 + 0x50);
      local_128 = (longlong *)0x0;
      local_120 = (longlong *)0x0;
      if ((pcVar25 != (char *)0x0) && (*pcVar25 != '\0')) {
        do {
          lVar22 = lVar22 + 1;
        } while (pcVar25[lVar22] != '\0');
        goto LAB_1405812e8;
      }
      goto LAB_14058131a;
    }
  }
  plVar30 = (longlong *)0x0;
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x1c0,&local_res18,&local_f8);
  plVar18 = plVar30;
  if ((int)local_res18 != -1) {
    plVar18 = (longlong *)(*(longlong *)(param_1 + 0x1c0) + (longlong)(int)local_res18 * 0x28);
  }
  plVar17 = plVar18 + 2;
  if (plVar18 == (longlong *)0x0) {
    plVar17 = plVar30;
  }
  if (plVar17 == (longlong *)0x0) {
    local_118 = &local_f8;
    pplStack_110 = &local_e8;
    local_e8 = plVar30;
    local_e0 = plVar17;
    TSet<TTuple<FString,TArray<physx::PxBase_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<physx::PxBase_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,TArray<physx::PxBase_*,FDefaultAllocator>_&&>_>
              (param_1 + 0x1c0,&local_res18,&local_118,0);
    if (local_e8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x1c0,&local_res18,&local_f8);
  plVar18 = plVar30;
  if ((int)local_res18 != -1) {
    plVar18 = (longlong *)(*(longlong *)(param_1 + 0x1c0) + (longlong)(int)local_res18 * 0x28);
  }
  local_120 = (longlong *)0x0;
  plVar17 = plVar18 + 2;
  if (plVar18 == (longlong *)0x0) {
    plVar17 = plVar30;
  }
  pcVar25 = (char *)**(undefined8 **)(param_2 + 0x58);
  local_128 = plVar30;
  if ((pcVar25 != (char *)0x0) && (*pcVar25 != '\0')) {
    do {
      lVar28 = lVar28 + 1;
    } while (pcVar25[lVar28] != '\0');
    uVar21 = (int)lVar28 + 1;
    local_120 = (longlong *)(ulonglong)uVar21;
    if (0 < (int)uVar21) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    }
    FGenericPlatformString::Convert<char,wchar_t>(local_128,uVar21,pcVar25,uVar21,0x3f);
  }
  cVar9 = FUN_140585b70(plVar17,&local_128);
  if (local_128 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (cVar9 != '\0') {
    if (1 < (int)plVar17[1]) {
      TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0xf8,&local_res18,plVar17);
      plVar18 = plVar30;
      if ((int)local_res18 != -1) {
        plVar18 = (longlong *)((longlong)(int)local_res18 * 0x20 + *(longlong *)(param_1 + 0xf8));
      }
      plVar17 = plVar18 + 2;
      if (plVar18 == (longlong *)0x0) {
        plVar17 = plVar30;
      }
      if ((plVar17 != (longlong *)0x0) && (*plVar17 != 0)) {
        TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x38);
        goto LAB_14058154f;
      }
    }
    local_b8 = &PTR__scalar_deleting_destructor__143fc4420;
    puStack_a8 = (uint *)0x0;
    uStack_98 = 0;
    uStack_b0 = plVar30;
    uStack_a0 = plVar30;
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x38,&local_b8);
    local_b8 = &PTR__scalar_deleting_destructor__143fc4420;
    if (uStack_a0 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (uStack_b0 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
LAB_14058154f:
  local_c0 = 0;
  local_d8 = &PTR__scalar_deleting_destructor__143fc4528;
  local_res18 = (undefined **)(param_1 + 0xf8);
  puVar1 = (uint *)(param_1 + 0x108);
  local_d0 = (undefined8 *)0x0;
  puStack_c8 = (undefined8 *)0x0;
  uVar21 = *(uint *)(param_1 + 0x120);
  local_118 = (longlong *)0x100000000;
  uStack_104 = 0;
  iStack_100 = 0;
  if (uVar21 != 0) {
    puVar27 = *(uint **)(param_1 + 0x118);
    if (*(uint **)(param_1 + 0x118) == (uint *)0x0) {
      puVar27 = puVar1;
    }
    uVar23 = *puVar27;
    iStack_100 = 0;
    iVar13 = 0;
    while (uVar23 == 0) {
      iStack_100 = iStack_100 + 0x20;
      uVar7 = (ulonglong)local_118 >> 0x20;
      local_118 = (longlong *)CONCAT44((int)uVar7,iVar13 + 1);
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13)
      goto LAB_140581622;
      uVar23 = puVar27[(longlong)iVar13 + 1];
      iVar13 = iVar13 + 1;
    }
    uVar23 = -uVar23 & uVar23;
    iVar13 = 0x1f;
    if (uVar23 != 0) {
      for (; uVar23 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    local_118 = (longlong *)CONCAT44(uVar23,SUB84(local_118,0));
    if (uVar23 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_104 = (iStack_100 - iVar13) + 0x1f;
    if ((int)uVar21 < (int)uStack_104) {
LAB_140581622:
      uStack_104 = uVar21;
    }
  }
  uVar23 = *(uint *)(param_1 + 0x120);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_104;
  uStack_98 = CONCAT44(uStack_fc,iStack_100);
  uStack_b0 = local_118;
  lVar28 = (longlong)uStack_b0;
  local_108 = -1 << ((byte)uVar23 & 0x1f);
  uStack_b0._0_4_ = SUB84(local_118,0);
  uStack_b0._4_4_ = (uint)((ulonglong)local_118 >> 0x20);
  uVar26 = uVar23 & 0xffffffe0;
  uStack_70 = (undefined4)uStack_b0;
  uStack_6c = uStack_b0._4_4_;
  pplStack_110 = (longlong **)puVar1;
  uStack_104 = uVar23;
  local_b8 = local_res18;
  uStack_b0 = (longlong *)lVar28;
  puStack_a8 = puVar1;
  local_68 = puVar1;
  local_58 = uStack_98;
  local_78 = local_res18;
  uStack_a0._0_4_ = uStack_60;
  uStack_a0._4_4_ = uStack_5c;
  if (uVar23 != uVar21) {
    puVar27 = *(uint **)(param_1 + 0x118);
    if (*(uint **)(param_1 + 0x118) == (uint *)0x0) {
      puVar27 = puVar1;
    }
    uVar19 = puVar27[(int)uVar23 >> 5] & local_108;
    iVar13 = (int)uVar23 >> 5;
    while (uVar19 == 0) {
      uVar26 = uVar26 + 0x20;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13)
      goto LAB_1405816f7;
      uVar19 = puVar27[(longlong)iVar13 + 1];
      local_108 = 0xffffffff;
      iVar13 = iVar13 + 1;
    }
    uVar19 = -uVar19 & uVar19;
    iVar13 = 0x1f;
    if (uVar19 != 0) {
      for (; uVar19 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar19 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_104 = (uVar26 - iVar13) + 0x1f;
    uVar23 = uStack_104;
    if ((int)uVar21 < (int)uStack_104) {
LAB_1405816f7:
      uStack_104 = uVar21;
      uVar23 = uVar21;
    }
  }
  do {
    ppuVar8 = local_res18;
    lVar28 = (longlong)(int)uStack_5c;
    if (((uStack_5c == uVar23) && (local_68 == puVar1)) && (local_78 == local_res18)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    puVar15 = local_d0;
    if (!bVar6) {
      do {
        if (puVar15 == (undefined8 *)0x0) {
          local_d8 = &PTR__scalar_deleting_destructor__143fc4528;
          while (local_d0 != (undefined8 *)0x0) {
            puVar15 = (undefined8 *)local_d0[1];
            FMemory::operator_delete(local_d0,0x18);
            local_d0 = puVar15;
          }
          puStack_c8 = (undefined8 *)0x0;
          local_d0 = (undefined8 *)0x0;
          (*(code *)local_d8[1])(&local_d8,0);
          if (local_f8 != 0) {
            FMemory::Free();
          }
          if (local_88 != 0) {
            FMemory::Free();
          }
          return;
        }
        plVar18 = (longlong *)*puVar15;
        bVar6 = false;
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
        iVar13 = *(int *)(param_1 + 0x34);
        iVar12 = *(int *)(param_1 + 0x28) + -1;
        lVar28 = (longlong)iVar12;
        if (-1 < iVar12) {
          lVar22 = lVar28 << 4;
          bVar6 = false;
          do {
            if ((*(int *)(lVar22 + 8 + *(longlong *)(param_1 + 0x20)) == 0) ||
               (plVar30 = *(longlong **)(lVar22 + *(longlong *)(param_1 + 0x20)),
               plVar30 == (longlong *)0x0)) {
LAB_140581872:
              bVar6 = true;
            }
            else {
              cVar9 = (**(code **)(*plVar30 + 0x40))(plVar30,plVar18);
              if (cVar9 == '\0') goto LAB_140581872;
            }
            lVar22 = lVar22 + -0x10;
            lVar28 = lVar28 + -1;
          } while (-1 < lVar28);
          iVar13 = *(int *)(param_1 + 0x34);
        }
        *(int *)(param_1 + 0x34) = iVar13 + -1;
        if (bVar6) {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x20,0);
        }
        uVar16 = (**(code **)(*plVar18 + 0x10))(plVar18);
        TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
        ::Remove(ppuVar8,uVar16);
        (**(code **)*plVar18)(plVar18);
        puVar15 = (undefined8 *)puVar15[1];
      } while( true );
    }
    puVar5 = *local_78;
    FString::FString(&local_118,puVar5 + lVar28 * 0x20);
    plVar18 = *(longlong **)(puVar5 + lVar28 * 0x20 + 0x10);
    puVar15 = (undefined8 *)(**(code **)(*plVar18 + 0x10))(plVar18);
    lVar22 = 0;
    iVar13 = *(int *)(param_2 + 0x40);
    lVar28 = *(longlong *)(param_2 + 0x48);
    if (0 < (longlong)iVar13) {
      do {
        if (*(int *)(puVar15 + 1) == 0) {
          puVar20 = &DAT_143f3eda8;
        }
        else {
          puVar20 = (undefined2 *)*puVar15;
        }
        iVar12 = FGenericPlatformStricmp::Stricmp<char,wchar_t>
                           (**(undefined8 **)(lVar28 + lVar22 * 8),puVar20);
        if (iVar12 == 0) goto LAB_1405817e6;
        lVar22 = lVar22 + 1;
      } while (lVar22 < iVar13);
    }
    puVar15 = (undefined8 *)operator_new(0x18);
    if (puVar15 != (undefined8 *)0x0) {
      *puVar15 = plVar18;
      puVar15[1] = 0;
      puVar15[2] = 0;
      puVar31 = puVar15;
      if (puStack_c8 != (undefined8 *)0x0) {
        puStack_c8[1] = puVar15;
        puVar15[2] = puStack_c8;
        puVar31 = local_d0;
      }
      local_d0 = puVar31;
      puStack_c8 = puVar15;
      (*(code *)local_d8[1])(&local_d8,local_c0 + 1);
    }
LAB_1405817e6:
    if (local_118 != (longlong *)0x0) {
      FMemory::Free();
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
  } while( true );
}



// FUNCTION 140581960 FUN_140581960 body=2848 status=ok
// SIG undefined FUN_140581960(void)

void FUN_140581960(longlong *param_1,longlong param_2)

{
  double dVar1;
  undefined8 *puVar2;
  char *pcVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  int *piVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined **ppuVar13;
  uint uVar14;
  longlong lVar15;
  undefined2 *puVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  undefined1 local_res10 [8];
  longlong *local_res18 [2];
  undefined **local_128;
  longlong **local_120;
  longlong *local_118;
  longlong local_110;
  ulonglong local_108;
  undefined **local_f8 [2];
  undefined **local_e8;
  undefined1 local_d8 [96];
  longlong local_78;
  
  switch(*(undefined4 *)(param_2 + 0x18)) {
  case 10:
    if ((int)param_1[0x35] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)param_1[0x34];
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,char>(puVar16,*(undefined8 *)(param_2 + 0x38));
    if ((iVar7 == 0) && (*(char *)((longlong)param_1 + 0xe1) == '\x02')) {
      FUN_14056ce30(local_f8,param_1,param_2);
      bVar4 = false;
      *(int *)((longlong)param_1 + 0xac) = *(int *)((longlong)param_1 + 0xac) + 1;
      iVar7 = *(int *)((longlong)param_1 + 0xac);
      iVar8 = (int)param_1[0x14] + -1;
      lVar17 = (longlong)iVar8;
      if (-1 < iVar8) {
        lVar15 = lVar17 << 4;
        bVar4 = false;
        do {
          lVar18 = param_1[0x13];
          if (((*(int *)(lVar15 + 8 + lVar18) == 0) ||
              (plVar11 = *(longlong **)(lVar15 + lVar18), plVar11 == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(*plVar11 + 0x40))(plVar11,local_f8), cVar6 == '\0')) {
            bVar4 = true;
          }
          lVar15 = lVar15 + -0x10;
          lVar17 = lVar17 + -1;
        } while (-1 < lVar17);
        iVar7 = *(int *)((longlong)param_1 + 0xac);
      }
      *(int *)((longlong)param_1 + 0xac) = iVar7 + -1;
      if (bVar4) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x13,0);
      }
      FUN_14056f390(local_f8);
    }
    break;
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
    break;
  case 0x14:
    if ((int)param_1[0x35] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)param_1[0x34];
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,char>(puVar16,*(undefined8 *)(param_2 + 0x30));
    if (iVar7 == 0) {
      if (*(int *)(param_2 + 0x48) == 2) {
        if ((char)param_1[0x1c] == '\x01') {
          *(undefined1 *)(param_1 + 0x1c) = 2;
          plVar11 = param_1 + 1;
LAB_14058214d:
          local_120 = (longlong **)CONCAT71(local_120._1_7_,2);
          local_128 = &PTR_FUN_143fc45e0;
          local_118 = param_1;
          TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(plVar11,&local_128);
          FUN_14057ae10(param_1);
        }
      }
      else if (*(int *)(param_2 + 0x48) == 1) {
        cVar6 = (**(code **)(*param_1 + 0x10))(param_1);
        if ((cVar6 == '\x01') && (cVar6 = (**(code **)(*param_1 + 0x20))(param_1), cVar6 != '\x02'))
        {
          (**(code **)(*param_1 + 0x58))(param_1,0);
        }
        if ((char)param_1[0x1c] != '\0') {
          *(undefined1 *)(param_1 + 0x1c) = 0;
          local_128 = &PTR_FUN_143fc45e0;
          local_120 = (longlong **)((ulonglong)local_120 & 0xffffffffffffff00);
          local_118 = param_1;
          TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 1,&local_128);
        }
      }
    }
    break;
  case 0x15:
    if ((int)param_1[0x35] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)param_1[0x34];
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,char>(puVar16,*(undefined8 *)(param_2 + 0x30));
    if (iVar7 == 0) {
      if (*(int *)(param_2 + 0x3c) == 1) {
        if (*(char *)((longlong)param_1 + 0xe1) == '\x01') {
          *(undefined1 *)((longlong)param_1 + 0xe1) = 2;
          plVar11 = param_1 + 4;
          goto LAB_14058214d;
        }
      }
      else if (*(int *)(param_2 + 0x3c) == 0) {
        cVar6 = (**(code **)(*param_1 + 0x18))(param_1);
        if ((cVar6 == '\x01') && (cVar6 = (**(code **)(*param_1 + 0x20))(param_1), cVar6 != '\x02'))
        {
          (**(code **)(*param_1 + 0x58))(param_1,0);
        }
        if (*(char *)((longlong)param_1 + 0xe1) != '\0') {
          *(undefined1 *)((longlong)param_1 + 0xe1) = 0;
          local_128 = &PTR_FUN_143fc45e0;
          local_120 = (longlong **)((ulonglong)local_120 & 0xffffffffffffff00);
          local_118 = param_1;
          TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 4,&local_128);
        }
      }
    }
    break;
  case 0x19:
    if ((int)param_1[0x35] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)param_1[0x34];
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,char>(puVar16,*(undefined8 *)(param_2 + 0x30));
    if (iVar7 == 0) {
      if ((char)param_1[0x1c] != '\0') {
        *(undefined1 *)(param_1 + 0x1c) = 0;
        local_128 = &PTR_FUN_143fc45e0;
        local_120 = (longlong **)((ulonglong)local_120 & 0xffffffffffffff00);
        local_118 = param_1;
        TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 1,&local_128);
      }
      if (*(char *)((longlong)param_1 + 0xe1) != '\0') {
        *(undefined1 *)((longlong)param_1 + 0xe1) = 0;
        local_128 = &PTR_FUN_143fc45e0;
        local_120 = (longlong **)((ulonglong)local_120 & 0xffffffffffffff00);
        local_118 = param_1;
        TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 4,&local_128);
      }
      ChannelSession::SetChannelState(param_1,0);
      if (*(char *)((longlong)param_1 + 0x1b9) != '\0') {
        plVar11 = (longlong *)(**(code **)(*param_1 + 8))(param_1);
        (**(code **)(*plVar11 + 0x68))(plVar11,param_1 + 0x28);
      }
    }
    break;
  case 0x1a:
    if ((int)param_1[0x35] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)param_1[0x34];
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,char>(puVar16,*(undefined8 *)(param_2 + 0x30));
    if (iVar7 == 0) {
      pcVar3 = *(char **)(param_2 + 0x38);
      plVar11 = (longlong *)0x0;
      local_108 = 0;
      local_110 = 0;
      if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
        lVar17 = -1;
        do {
          lVar17 = lVar17 + 1;
        } while (pcVar3[lVar17] != '\0');
        uVar14 = (int)lVar17 + 1;
        local_108 = (ulonglong)uVar14;
        if (0 < (int)uVar14) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_110,0);
        }
        FGenericPlatformString::Convert<char,wchar_t>(local_110,uVar14,pcVar3,uVar14,0x3f);
      }
      uVar9 = FUN_140572bf0(&local_128,&local_110);
      piVar10 = (int *)TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
                       ::FindId(param_1 + 0x1d,local_res10,uVar9);
      iVar7 = *piVar10;
      if (local_128 != (undefined **)0x0) {
        FMemory::Free();
      }
      if (local_110 != 0) {
        FMemory::Free();
      }
      if (iVar7 == -1) {
        lVar17 = operator_new(0xa0);
        if (lVar17 != 0) {
          plVar11 = (longlong *)FUN_14056dd90(lVar17,param_1,param_2);
        }
        local_res18[0] = plVar11;
        lVar17 = (**(code **)(*plVar11 + 0x90))(plVar11);
        local_128 = (undefined **)(lVar17 + 0x10);
        local_120 = local_res18;
        FUN_14056b880(param_1 + 0x1d,local_res10,&local_128,0);
        cVar6 = (**(code **)(*plVar11 + 8))(plVar11);
        if (cVar6 != '\0') {
          FUN_14057ae10(param_1);
        }
        TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 10,plVar11);
      }
    }
    break;
  case 0x1b:
    cVar6 = (**(code **)(*param_1 + 0x20))(param_1);
    if ((cVar6 != '\x03') && (cVar6 != '\0')) {
      if ((int)param_1[0x35] == 0) {
        puVar16 = &DAT_143f3eda8;
      }
      else {
        puVar16 = (undefined2 *)param_1[0x34];
      }
      iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,char>
                        (puVar16,*(undefined8 *)(param_2 + 0x30));
      if (iVar7 == 0) {
        pcVar3 = *(char **)(param_2 + 0x38);
        lVar17 = 0;
        local_108 = 0;
        local_110 = 0;
        if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
          lVar15 = -1;
          do {
            lVar15 = lVar15 + 1;
          } while (pcVar3[lVar15] != '\0');
          uVar14 = (int)lVar15 + 1;
          local_108 = (ulonglong)uVar14;
          if (0 < (int)uVar14) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_110,0);
          }
          FGenericPlatformString::Convert<char,wchar_t>(local_110,uVar14,pcVar3,uVar14,0x3f);
        }
        FUN_140572bf0(&local_128,&local_110);
        if (local_110 != 0) {
          FMemory::Free();
        }
        plVar11 = param_1 + 0x1d;
        local_e8 = local_128;
        if ((int)param_1[0x1e] != *(int *)((longlong)param_1 + 0x11c)) {
          ppuVar13 = (undefined **)&DAT_143f3eda8;
          if ((int)local_120 != 0) {
            ppuVar13 = local_128;
          }
          iVar7 = FUN_140438070(ppuVar13);
          plVar12 = (longlong *)param_1[0x25];
          if ((longlong *)param_1[0x25] == (longlong *)0x0) {
            plVar12 = param_1 + 0x24;
          }
          iVar7 = *(int *)((longlong)plVar12 +
                          ((longlong)(int)param_1[0x26] - 1U & (longlong)iVar7) * 4);
          if (iVar7 != -1) {
            lVar15 = *plVar11;
            do {
              lVar18 = (longlong)iVar7 * 0x20;
              ppuVar13 = (undefined **)&DAT_143f3eda8;
              if ((int)local_120 != 0) {
                ppuVar13 = local_128;
              }
              if (*(int *)(lVar15 + 8 + lVar18) == 0) {
                puVar16 = &DAT_143f3eda8;
              }
              else {
                puVar16 = *(undefined2 **)(lVar15 + lVar18);
              }
              iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar16,ppuVar13);
              if (iVar8 == 0) {
                if (iVar7 != -1) {
                  if ((int)param_1[0x1e] == *(int *)((longlong)param_1 + 0x11c)) goto LAB_140581d26;
                  ppuVar13 = (undefined **)&DAT_143f3eda8;
                  if ((int)local_120 != 0) {
                    ppuVar13 = local_128;
                  }
                  iVar7 = FUN_140438070(ppuVar13);
                  plVar12 = (longlong *)param_1[0x25];
                  if ((longlong *)param_1[0x25] == (longlong *)0x0) {
                    plVar12 = param_1 + 0x24;
                  }
                  iVar7 = *(int *)((longlong)plVar12 +
                                  ((longlong)(int)param_1[0x26] - 1U & (longlong)iVar7) * 4);
                  if (iVar7 == -1) goto LAB_140581d26;
                  lVar15 = *plVar11;
                  goto LAB_140581ce0;
                }
                break;
              }
              lVar15 = *plVar11;
              iVar7 = *(int *)(lVar15 + 0x18 + lVar18);
            } while (iVar7 != -1);
          }
        }
        goto joined_r0x000140582445;
      }
    }
    break;
  case 0x1c:
    if ((int)param_1[0x35] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)param_1[0x34];
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,char>(puVar16,*(undefined8 *)(param_2 + 0x30));
    if (iVar7 == 0) {
      pcVar3 = *(char **)(param_2 + 0x38);
      lVar17 = 0;
      local_108 = 0;
      local_110 = 0;
      if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
        lVar15 = -1;
        do {
          lVar15 = lVar15 + 1;
        } while (pcVar3[lVar15] != '\0');
        uVar14 = (int)lVar15 + 1;
        local_108 = (ulonglong)uVar14;
        if (0 < (int)uVar14) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_110,0);
        }
        FGenericPlatformString::Convert<char,wchar_t>(local_110,uVar14,pcVar3,uVar14,0x3f);
      }
      FUN_140572bf0(&local_128,&local_110);
      if (local_110 != 0) {
        FMemory::Free();
      }
      local_e8 = local_128;
      if ((int)param_1[0x1e] != *(int *)((longlong)param_1 + 0x11c)) {
        ppuVar13 = (undefined **)&DAT_143f3eda8;
        if ((int)local_120 != 0) {
          ppuVar13 = local_128;
        }
        iVar7 = FUN_140438070(ppuVar13);
        plVar11 = (longlong *)param_1[0x25];
        if ((longlong *)param_1[0x25] == (longlong *)0x0) {
          plVar11 = param_1 + 0x24;
        }
        iVar7 = *(int *)((longlong)plVar11 +
                        ((longlong)(int)param_1[0x26] - 1U & (longlong)iVar7) * 4);
        if (iVar7 != -1) {
          lVar15 = param_1[0x1d];
          do {
            lVar18 = (longlong)iVar7 * 0x20;
            ppuVar13 = (undefined **)&DAT_143f3eda8;
            if ((int)local_120 != 0) {
              ppuVar13 = local_128;
            }
            if (*(int *)(lVar18 + 8 + lVar15) == 0) {
              puVar16 = &DAT_143f3eda8;
            }
            else {
              puVar16 = *(undefined2 **)(lVar18 + lVar15);
            }
            iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar16,ppuVar13);
            if (iVar8 == 0) {
              if (iVar7 != -1) {
                if ((int)param_1[0x1e] == *(int *)((longlong)param_1 + 0x11c)) goto LAB_140581f7f;
                ppuVar13 = (undefined **)&DAT_143f3eda8;
                if ((int)local_120 != 0) {
                  ppuVar13 = local_128;
                }
                iVar7 = FUN_140438070(ppuVar13);
                plVar11 = (longlong *)param_1[0x25];
                if ((longlong *)param_1[0x25] == (longlong *)0x0) {
                  plVar11 = param_1 + 0x24;
                }
                iVar7 = *(int *)((longlong)plVar11 +
                                ((longlong)(int)param_1[0x26] - 1U & (longlong)iVar7) * 4);
                if (iVar7 == -1) goto LAB_140581f7f;
                lVar15 = param_1[0x1d];
                goto LAB_140581f30;
              }
              break;
            }
            lVar15 = param_1[0x1d];
            iVar7 = *(int *)(lVar18 + 0x18 + lVar15);
          } while (iVar7 != -1);
        }
      }
      goto joined_r0x000140582445;
    }
    break;
  case 0x30:
    if ((int)param_1[0x35] == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)param_1[0x34];
    }
    iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,char>(puVar16,*(undefined8 *)(param_2 + 0x30));
    if ((iVar7 == 0) && ((char)param_1[0x1c] == '\x02')) {
      FUN_14056e3f0(local_f8,param_1,param_2);
      bVar4 = false;
      *(int *)((longlong)param_1 + 0xc4) = *(int *)((longlong)param_1 + 0xc4) + 1;
      iVar7 = *(int *)((longlong)param_1 + 0xc4);
      iVar8 = (int)param_1[0x17] + -1;
      lVar17 = (longlong)iVar8;
      if (-1 < iVar8) {
        lVar15 = lVar17 << 4;
        bVar4 = false;
        do {
          lVar18 = param_1[0x16];
          if (((*(int *)(lVar15 + 8 + lVar18) == 0) ||
              (plVar11 = *(longlong **)(lVar15 + lVar18), plVar11 == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(*plVar11 + 0x40))(plVar11,local_f8), cVar6 == '\0')) {
            bVar4 = true;
          }
          lVar15 = lVar15 + -0x10;
          lVar17 = lVar17 + -1;
        } while (-1 < lVar17);
        iVar7 = *(int *)((longlong)param_1 + 0xc4);
      }
      *(int *)((longlong)param_1 + 0xc4) = iVar7 + -1;
      if (bVar4) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x16,0);
      }
      local_f8[0] = &PTR_FUN_143fc4850;
      if (local_78 != 0) {
        FMemory::Free();
      }
      FUN_14056ed50(local_d8);
      goto joined_r0x000140582445;
    }
    break;
  default:
    goto switchD_1405819b7_default;
  }
  goto switchD_1405819b7_caseD_b;
  while( true ) {
    lVar15 = param_1[0x1d];
    iVar7 = *(int *)(lVar18 + 0x18 + lVar15);
    if (iVar7 == -1) break;
LAB_140581f30:
    lVar18 = (longlong)iVar7 * 0x20;
    ppuVar13 = (undefined **)&DAT_143f3eda8;
    if ((int)local_120 != 0) {
      ppuVar13 = local_128;
    }
    if (*(int *)(lVar18 + 8 + lVar15) == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = *(undefined2 **)(lVar18 + lVar15);
    }
    iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar16,ppuVar13);
    if (iVar8 == 0) {
      lVar17 = 0;
      if (iVar7 != -1) {
        lVar17 = lVar18 + param_1[0x1d];
      }
      break;
    }
  }
LAB_140581f7f:
  lVar17 = *(longlong *)(lVar17 + 0x10);
  dVar1 = *(double *)(param_2 + 0x50);
  bVar4 = dVar1 != *(double *)(lVar17 + 0x10);
  if (bVar4) {
    *(double *)(lVar17 + 0x10) = dVar1;
  }
  bVar5 = *(byte *)(param_2 + 0x58) & 1;
  bVar19 = *(byte *)(lVar17 + 9) != bVar5;
  if (bVar19) {
    *(byte *)(lVar17 + 9) = bVar5;
  }
  bVar5 = (byte)(*(uint *)(param_2 + 0x58) >> 1) & 1;
  bVar20 = *(byte *)(lVar17 + 10) != bVar5;
  if (bVar20) {
    *(byte *)(lVar17 + 10) = bVar5;
  }
  bVar21 = *(int *)(param_2 + 0x44) != 0;
  bVar22 = (bool)*(char *)(lVar17 + 0xb) != bVar21;
  if (bVar22) {
    *(bool *)(lVar17 + 0xb) = bVar21;
  }
  bVar21 = *(int *)(param_2 + 0x40) != 0;
  bVar23 = (bool)*(char *)(lVar17 + 0x1e) != bVar21;
  if (bVar23) {
    *(bool *)(lVar17 + 0x1e) = bVar21;
  }
  bVar21 = *(int *)(param_2 + 0x94) != 0;
  bVar24 = (bool)*(char *)(lVar17 + 0x20) != bVar21;
  if (bVar24) {
    *(bool *)(lVar17 + 0x20) = bVar21;
  }
  bVar21 = *(int *)(param_2 + 0x98) != 0;
  if ((bool)*(char *)(lVar17 + 0x1f) == bVar21) {
    if (!bVar24 && (!bVar23 && (!bVar22 && (!bVar20 && (!bVar19 && !bVar4)))))
    goto joined_r0x000140582445;
  }
  else {
    *(bool *)(lVar17 + 0x1f) = bVar21;
  }
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x10);
  goto joined_r0x000140582445;
  while( true ) {
    lVar15 = *plVar11;
    iVar7 = *(int *)(lVar18 + 0x18 + lVar15);
    if (iVar7 == -1) break;
LAB_140581ce0:
    lVar18 = (longlong)iVar7 * 0x20;
    ppuVar13 = (undefined **)&DAT_143f3eda8;
    if ((int)local_120 != 0) {
      ppuVar13 = local_128;
    }
    if (*(int *)(lVar15 + 8 + lVar18) == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = *(undefined2 **)(lVar15 + lVar18);
    }
    iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar16,ppuVar13);
    if (iVar8 == 0) {
      lVar17 = 0;
      if (iVar7 != -1) {
        lVar17 = *plVar11 + lVar18;
      }
      break;
    }
  }
LAB_140581d26:
  puVar2 = *(undefined8 **)(lVar17 + 0x10);
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0xd,puVar2);
  TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
  ::Remove(plVar11,&local_128);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
joined_r0x000140582445:
  if (local_e8 != (undefined **)0x0) {
    FMemory::Free(local_e8);
  }
switchD_1405819b7_caseD_b:
switchD_1405819b7_default:
  return;
}



// FUNCTION 1405824d0 FUN_1405824d0 body=3462 status=ok
// SIG undefined FUN_1405824d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1405824d0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  longlong *plVar3;
  short *psVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  undefined **ppuVar14;
  undefined2 *puVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined2 *puVar19;
  undefined2 *puVar20;
  longlong lVar21;
  uint uVar22;
  undefined2 *puVar23;
  undefined1 auStack_298 [32];
  undefined2 local_278;
  undefined2 *local_268;
  ulonglong local_260;
  uint local_258;
  char local_254;
  longlong local_250;
  undefined **local_248;
  int local_240;
  undefined2 *local_238;
  int local_230;
  undefined2 *local_228;
  int local_220;
  longlong local_1c8;
  longlong local_1b8;
  longlong local_1a8;
  undefined2 *local_188;
  uint local_180;
  uint local_17c;
  char local_178;
  undefined1 local_168 [256];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  puVar19 = (undefined2 *)0x0;
  uVar22 = 0;
  local_258 = 0;
  iVar10 = *(int *)(param_2 + 0x18);
  local_250 = param_2;
  if (iVar10 == 2) {
    puVar20 = local_268;
    puVar23 = puVar19;
    if (*(int *)(param_2 + 0x28) == 0) {
      pcVar2 = *(char **)(param_2 + 0x30);
      local_268 = (undefined2 *)0x0;
      local_260 = local_260 & 0xffffffff;
      if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
        lVar17 = -1;
        do {
          lVar17 = lVar17 + 1;
        } while (pcVar2[lVar17] != '\0');
        uVar16 = (int)lVar17 + 1;
        local_260 = (ulonglong)uVar16;
        uVar22 = uVar16;
        if (0 < (int)uVar16) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
          uVar22 = (uint)local_260;
        }
        puVar19 = local_268;
        local_278 = 0x3f;
        FGenericPlatformString::Convert<char,wchar_t>(local_268,uVar16,pcVar2,uVar16);
      }
      puVar12 = (undefined8 *)AccountId::ToString(param_1 + 0x90,&local_188);
      puVar20 = &DAT_143f3eda8;
      puVar15 = &DAT_143f3eda8;
      if (uVar22 != 0) {
        puVar15 = puVar19;
      }
      if (*(int *)(puVar12 + 1) != 0) {
        puVar20 = (undefined2 *)*puVar12;
      }
      puVar23 = (undefined2 *)0x3;
      iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar20,puVar15);
      puVar20 = puVar19;
      if (iVar10 == 0) {
        bVar7 = true;
        goto LAB_1405825d6;
      }
    }
    bVar7 = false;
LAB_1405825d6:
    if ((((ulonglong)puVar23 & 2) != 0) &&
       (puVar23 = (undefined2 *)(ulonglong)((uint)puVar23 & 0xfffffffd),
       local_188 != (undefined2 *)0x0)) {
      FMemory::Free();
    }
    if ((((ulonglong)puVar23 & 1) != 0) && (puVar20 != (undefined2 *)0x0)) {
      FMemory::Free(puVar20);
    }
    if (bVar7) {
      FUN_1405889a0(param_1,0);
    }
    return;
  }
  if (iVar10 == 0x2a) {
    puVar20 = local_268;
    puVar23 = puVar19;
    if (*(char *)(param_1 + 0x290) == '\x02') {
      pcVar2 = *(char **)(param_2 + 0x28);
      local_268 = (undefined2 *)0x0;
      local_260 = local_260 & 0xffffffff;
      if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
        lVar17 = -1;
        do {
          lVar17 = lVar17 + 1;
        } while (pcVar2[lVar17] != '\0');
        uVar16 = (int)lVar17 + 1;
        local_260 = (ulonglong)uVar16;
        uVar22 = uVar16;
        if (0 < (int)uVar16) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
          uVar22 = (uint)local_260;
        }
        puVar19 = local_268;
        local_278 = 0x3f;
        FGenericPlatformString::Convert<char,wchar_t>(local_268,uVar16,pcVar2,uVar16);
      }
      puVar12 = (undefined8 *)AccountId::ToString(param_1 + 0x90,&local_188);
      puVar20 = &DAT_143f3eda8;
      puVar15 = &DAT_143f3eda8;
      if (uVar22 != 0) {
        puVar15 = puVar19;
      }
      if (*(int *)(puVar12 + 1) != 0) {
        puVar20 = (undefined2 *)*puVar12;
      }
      puVar23 = (undefined2 *)0xc;
      iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar20,puVar15);
      puVar20 = puVar19;
      if (iVar10 == 0) {
        bVar7 = true;
        goto LAB_1405826df;
      }
    }
    bVar7 = false;
LAB_1405826df:
    if ((((ulonglong)puVar23 & 8) != 0) &&
       (puVar23 = (undefined2 *)(ulonglong)((uint)puVar23 & 0xfffffff7),
       local_188 != (undefined2 *)0x0)) {
      FMemory::Free();
    }
    if ((((ulonglong)puVar23 & 4) != 0) && (puVar20 != (undefined2 *)0x0)) {
      FMemory::Free(puVar20);
    }
    if (!bVar7) {
      return;
    }
    FUN_14056d300(&local_248,param_1,param_2);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    bVar7 = false;
    iVar10 = *(int *)(param_1 + 0x34);
    iVar11 = *(int *)(param_1 + 0x28) + -1;
    lVar17 = (longlong)iVar11;
    if (-1 < iVar11) {
      lVar18 = lVar17 << 4;
      bVar7 = false;
      do {
        if (((*(int *)(lVar18 + 8 + *(longlong *)(param_1 + 0x20)) == 0) ||
            (plVar3 = *(longlong **)(lVar18 + *(longlong *)(param_1 + 0x20)),
            plVar3 == (longlong *)0x0)) ||
           (cVar9 = (**(code **)(*plVar3 + 0x40))(plVar3,&local_248), cVar9 == '\0')) {
          bVar7 = true;
        }
        lVar18 = lVar18 + -0x10;
        lVar17 = lVar17 + -1;
      } while (-1 < lVar17);
      iVar10 = *(int *)(param_1 + 0x34);
    }
    *(int *)(param_1 + 0x34) = iVar10 + -1;
    if (bVar7) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x20,0);
    }
    local_248 = &PTR_FUN_143fc4810;
    if (local_1a8 != 0) {
      FMemory::Free();
    }
    if (local_1b8 != 0) {
      FMemory::Free();
    }
    if (local_1c8 != 0) {
      FMemory::Free();
    }
    FUN_14056ed50(&local_228);
    if (local_238 == (undefined2 *)0x0) {
      return;
    }
    FMemory::Free();
    return;
  }
  if (iVar10 != 7) {
    if (iVar10 != 8) {
      if (iVar10 != 0x21) {
        if (iVar10 != 0x2f) {
          (**(code **)(*(longlong *)(param_1 + 800) + 0x50))();
          return;
        }
        lVar17 = -1;
        puVar20 = local_268;
        bVar7 = false;
        bVar8 = false;
        if (*(char *)(param_1 + 0x290) == '\x02') {
          pcVar2 = *(char **)(param_2 + 0x28);
          local_268 = (undefined2 *)0x0;
          local_258 = 0;
          local_260 = local_260 & 0xffffffff;
          puVar20 = puVar19;
          if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
            lVar18 = -1;
            do {
              lVar18 = lVar18 + 1;
            } while (pcVar2[lVar18] != '\0');
            uVar22 = (int)lVar18 + 1;
            local_260 = (ulonglong)uVar22;
            local_258 = uVar22;
            if (0 < (int)uVar22) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
              local_258 = (uint)local_260;
            }
            puVar20 = local_268;
            local_278 = 0x3f;
            FGenericPlatformString::Convert<char,wchar_t>(local_268,uVar22,pcVar2,uVar22);
          }
          puVar12 = (undefined8 *)AccountId::ToString(param_1 + 0x90,&local_188);
          puVar23 = &DAT_143f3eda8;
          puVar15 = &DAT_143f3eda8;
          if (local_258 != 0) {
            puVar15 = puVar20;
          }
          if (*(int *)(puVar12 + 1) != 0) {
            puVar23 = (undefined2 *)*puVar12;
          }
          bVar6 = true;
          bVar5 = true;
          iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar23,puVar15);
          bVar7 = true;
          bVar8 = true;
          if (iVar10 == 0) {
            bVar7 = true;
            goto LAB_140583112;
          }
        }
        bVar6 = bVar8;
        bVar5 = bVar7;
        bVar7 = false;
LAB_140583112:
        if ((bVar5) && (local_188 != (undefined2 *)0x0)) {
          FMemory::Free();
        }
        if ((bVar6) && (puVar20 != (undefined2 *)0x0)) {
          FMemory::Free(puVar20);
        }
        lVar18 = local_250;
        if (!bVar7) {
          return;
        }
        local_268 = (undefined2 *)0x0;
        local_260 = 0;
        pcVar2 = *(char **)(local_250 + 0x30);
        if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
          do {
            lVar17 = lVar17 + 1;
          } while (pcVar2[lVar17] != '\0');
          uVar22 = (int)lVar17 + 1;
          local_260 = (ulonglong)uVar22;
          if (0 < (int)uVar22) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
          }
          local_278 = 0x3f;
          FGenericPlatformString::Convert<char,wchar_t>(local_268,uVar22,pcVar2,uVar22);
        }
        uVar1 = *(undefined4 *)(lVar18 + 0x38);
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
        iVar10 = *(int *)(param_1 + 100);
        iVar11 = *(int *)(param_1 + 0x58) + -1;
        lVar17 = (longlong)iVar11;
        if (-1 < iVar11) {
          lVar18 = lVar17 << 4;
          do {
            if (((*(int *)(lVar18 + 8 + *(longlong *)(param_1 + 0x50)) == 0) ||
                (plVar3 = *(longlong **)(lVar18 + *(longlong *)(param_1 + 0x50)),
                plVar3 == (longlong *)0x0)) ||
               (cVar9 = (**(code **)(*plVar3 + 0x40))(plVar3,uVar1,&local_268), cVar9 == '\0')) {
              puVar19 = (undefined2 *)0x1;
            }
            lVar18 = lVar18 + -0x10;
            lVar17 = lVar17 + -1;
          } while (-1 < lVar17);
          iVar10 = *(int *)(param_1 + 100);
        }
        *(int *)(param_1 + 100) = iVar10 + -1;
        if ((char)puVar19 != '\0') {
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x50,0);
        }
        if (local_268 == (undefined2 *)0x0) {
          return;
        }
        FMemory::Free();
        return;
      }
      puVar20 = local_268;
      if (*(char *)(param_1 + 0x290) == '\x02') {
        pcVar2 = *(char **)(param_2 + 0x28);
        local_268 = (undefined2 *)0x0;
        local_260 = local_260 & 0xffffffff;
        if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
          lVar17 = -1;
          do {
            lVar17 = lVar17 + 1;
          } while (pcVar2[lVar17] != '\0');
          uVar16 = (int)lVar17 + 1;
          local_260 = (ulonglong)uVar16;
          uVar22 = uVar16;
          if (0 < (int)uVar16) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
            uVar22 = (uint)local_260;
          }
          puVar19 = local_268;
          local_278 = 0x3f;
          FGenericPlatformString::Convert<char,wchar_t>(local_268,uVar16,pcVar2,uVar16);
        }
        puVar20 = &DAT_143f3eda8;
        puVar23 = &DAT_143f3eda8;
        if (uVar22 != 0) {
          puVar23 = puVar19;
        }
        if (*(int *)(param_1 + 0xf8) != 0) {
          puVar20 = *(undefined2 **)(param_1 + 0xf0);
        }
        uVar16 = 0x100;
        iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar20,puVar23);
        puVar20 = puVar19;
        uVar22 = 0x100;
        if (iVar10 == 0) {
          bVar7 = true;
          goto LAB_140582f99;
        }
      }
      uVar16 = uVar22;
      bVar7 = false;
LAB_140582f99:
      if ((uVar16 != 0) && (puVar20 != (undefined2 *)0x0)) {
        FMemory::Free(puVar20);
      }
      if (!bVar7) {
        return;
      }
      if (*(int *)(param_2 + 0x30) != 3) {
        return;
      }
      *(undefined1 *)(param_1 + 0x319) = 0;
      bVar7 = false;
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
      iVar10 = *(int *)(param_1 + 0x7c);
      iVar11 = *(int *)(param_1 + 0x70) + -1;
      lVar17 = (longlong)iVar11;
      if (-1 < iVar11) {
        lVar18 = lVar17 << 4;
        bVar7 = false;
        do {
          if (((*(int *)(lVar18 + 8 + *(longlong *)(param_1 + 0x68)) == 0) ||
              (plVar3 = *(longlong **)(lVar18 + *(longlong *)(param_1 + 0x68)),
              plVar3 == (longlong *)0x0)) ||
             (cVar9 = (**(code **)(*plVar3 + 0x40))(), cVar9 == '\0')) {
            bVar7 = true;
          }
          lVar18 = lVar18 + -0x10;
          lVar17 = lVar17 + -1;
        } while (-1 < lVar17);
        iVar10 = *(int *)(param_1 + 0x7c);
      }
      *(int *)(param_1 + 0x7c) = iVar10 + -1;
      if (!bVar7) {
        return;
      }
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x68,0);
      return;
    }
    lVar17 = -1;
    puVar20 = local_268;
    puVar23 = puVar19;
    if (*(char *)(param_1 + 0x290) == '\x02') {
      pcVar2 = *(char **)(param_2 + 0x28);
      local_268 = (undefined2 *)0x0;
      local_258 = 0;
      local_260 = local_260 & 0xffffffff;
      if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
        lVar18 = -1;
        do {
          lVar18 = lVar18 + 1;
        } while (pcVar2[lVar18] != '\0');
        uVar22 = (int)lVar18 + 1;
        local_260 = (ulonglong)uVar22;
        local_258 = uVar22;
        if (0 < (int)uVar22) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
          local_258 = (uint)local_260;
        }
        puVar19 = local_268;
        local_278 = 0x3f;
        FGenericPlatformString::Convert<char,wchar_t>(local_268,uVar22,pcVar2,uVar22);
      }
      puVar12 = (undefined8 *)AccountId::ToString(param_1 + 0x90,&local_188);
      puVar20 = &DAT_143f3eda8;
      puVar15 = &DAT_143f3eda8;
      if (local_258 != 0) {
        puVar15 = puVar19;
      }
      if (*(int *)(puVar12 + 1) != 0) {
        puVar20 = (undefined2 *)*puVar12;
      }
      puVar23 = (undefined2 *)0xc0;
      iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar20,puVar15);
      puVar20 = puVar19;
      if (iVar10 == 0) {
        bVar7 = true;
        goto LAB_140582da1;
      }
    }
    bVar7 = false;
LAB_140582da1:
    if (((char)puVar23 < '\0') &&
       (puVar23 = (undefined2 *)(ulonglong)((uint)puVar23 & 0xffffff7f),
       local_188 != (undefined2 *)0x0)) {
      FMemory::Free();
    }
    if ((((ulonglong)puVar23 & 0x40) != 0) && (puVar20 != (undefined2 *)0x0)) {
      FMemory::Free(puVar20);
    }
    if (!bVar7) {
      return;
    }
    local_268 = (undefined2 *)0x0;
    local_260 = 0;
    pcVar2 = *(char **)(local_250 + 0x30);
    if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
      do {
        lVar17 = lVar17 + 1;
      } while (pcVar2[lVar17] != '\0');
      uVar22 = (int)lVar17 + 1;
      local_260 = (ulonglong)uVar22;
      if (0 < (int)uVar22) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
      }
      local_278 = 0x3f;
      FGenericPlatformString::Convert<char,wchar_t>(local_268,uVar22,pcVar2,uVar22);
    }
    local_178 = '\0';
    FUN_14057c0d0(&local_248,&local_268,&local_188);
    if ((local_178 != '\0') && (local_188 != (undefined2 *)0x0)) {
      FMemory::Free();
    }
    if (local_268 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    bVar7 = false;
    iVar10 = *(int *)(param_1 + 0x1c);
    iVar11 = *(int *)(param_1 + 0x10) + -1;
    lVar17 = (longlong)iVar11;
    if (-1 < iVar11) {
      lVar18 = lVar17 << 4;
      bVar7 = false;
      do {
        if (((*(int *)(lVar18 + 8 + *(longlong *)(param_1 + 8)) == 0) ||
            (plVar3 = *(longlong **)(lVar18 + *(longlong *)(param_1 + 8)), plVar3 == (longlong *)0x0
            )) || (cVar9 = (**(code **)(*plVar3 + 0x40))(plVar3,&local_248), cVar9 == '\0')) {
          bVar7 = true;
        }
        lVar18 = lVar18 + -0x10;
        lVar17 = lVar17 + -1;
      } while (-1 < lVar17);
      iVar10 = *(int *)(param_1 + 0x1c);
    }
    *(int *)(param_1 + 0x1c) = iVar10 + -1;
    if (bVar7) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 8,0);
    }
    FUN_14056ed50(&local_248);
    return;
  }
  lVar17 = -1;
  puVar20 = local_188;
  puVar23 = puVar19;
  if (*(char *)(param_1 + 0x290) == '\x02') {
    pcVar2 = *(char **)(param_2 + 0x30);
    local_188 = (undefined2 *)0x0;
    local_17c = 0;
    if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
      lVar18 = -1;
      do {
        lVar18 = lVar18 + 1;
      } while (pcVar2[lVar18] != '\0');
      uVar22 = (int)lVar18 + 1;
      local_180 = uVar22;
      if (0 < (int)uVar22) {
        local_258 = uVar22;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
      }
      local_278 = 0x3f;
      local_258 = local_180;
      FGenericPlatformString::Convert<char,wchar_t>(local_188,uVar22,pcVar2,uVar22);
    }
    uVar22 = local_258;
    puVar12 = (undefined8 *)AccountId::ToString(param_1 + 0x90,&local_268);
    puVar20 = local_188;
    puVar15 = &DAT_143f3eda8;
    if (uVar22 != 0) {
      puVar15 = local_188;
    }
    if (*(int *)(puVar12 + 1) == 0) {
      puVar13 = &DAT_143f3eda8;
    }
    else {
      puVar13 = (undefined2 *)*puVar12;
    }
    puVar23 = (undefined2 *)0x30;
    iVar10 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13,puVar15);
    if (iVar10 != 0) goto LAB_1405828ba;
    local_254 = '\x01';
  }
  else {
LAB_1405828ba:
    local_254 = '\0';
  }
  if ((((ulonglong)puVar23 & 0x20) != 0) &&
     (puVar23 = (undefined2 *)(ulonglong)((uint)puVar23 & 0xffffffdf),
     local_268 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  if ((((ulonglong)puVar23 & 0x10) != 0) && (puVar20 != (undefined2 *)0x0)) {
    FMemory::Free(puVar20);
  }
  if (local_254 == '\0') {
    return;
  }
  lVar18 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                     (local_168,*(undefined8 *)(local_250 + 0x50));
  uVar22 = 0;
  local_188 = (undefined2 *)0x0;
  local_17c = 0;
  psVar4 = *(short **)(lVar18 + 0x108);
  if ((psVar4 == (short *)0x0) || (*psVar4 == 0)) {
    puVar20 = (undefined2 *)0x0;
    local_180 = uVar22;
  }
  else {
    lVar18 = -1;
    do {
      lVar18 = lVar18 + 1;
    } while (psVar4[lVar18] != 0);
    uVar22 = (int)lVar18 + 1;
    local_180 = uVar22;
    if (0 < (int)uVar22) {
      local_258 = uVar22;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
    }
    puVar20 = local_188;
    local_258 = local_180;
    FGenericPlatformString::Memcpy(local_188,psVar4,(longlong)(int)uVar22 * 2);
    uVar22 = local_17c;
    local_180 = local_258;
  }
  lVar18 = local_250;
  pcVar2 = *(char **)(local_250 + 0x38);
  local_178 = '\x01';
  local_268 = (undefined2 *)0x0;
  local_260 = 0;
  local_188 = puVar20;
  local_17c = uVar22;
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    do {
      lVar17 = lVar17 + 1;
    } while (pcVar2[lVar17] != '\0');
    uVar22 = (int)lVar17 + 1;
    local_260 = (ulonglong)uVar22;
    if (0 < (int)uVar22) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
    }
    local_278 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_268,uVar22,pcVar2,uVar22);
  }
  FUN_14057c0d0(&local_248,&local_268,&local_188);
  if (local_268 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if ((local_178 != '\0') && (local_188 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x184)) {
    puVar20 = &DAT_143f3eda8;
    if (local_230 != 0) {
      puVar20 = local_238;
    }
    iVar10 = FUN_140438070(puVar20);
    puVar20 = &DAT_143f3eda8;
    if (local_220 != 0) {
      puVar20 = local_228;
    }
    uVar22 = FUN_140438070(puVar20);
    ppuVar14 = (undefined **)&DAT_143f3eda8;
    if (local_240 != 0) {
      ppuVar14 = local_248;
    }
    uVar16 = FUN_140438070(ppuVar14);
    lVar17 = *(longlong *)(param_1 + 400);
    if (*(longlong *)(param_1 + 400) == 0) {
      lVar17 = param_1 + 0x188;
    }
    iVar10 = *(int *)(lVar17 + ((longlong)*(int *)(param_1 + 0x198) - 1U &
                               (longlong)(int)(uVar16 ^ (uVar22 ^ iVar10 * 0x18d) * 0x18d)) * 4);
    if (iVar10 != -1) {
      lVar17 = *(longlong *)(param_1 + 0x150);
      do {
        lVar21 = (longlong)iVar10 * 0x78;
        puVar20 = &DAT_143f3eda8;
        if (local_220 != 0) {
          puVar20 = local_228;
        }
        if (*(int *)(lVar21 + 0x28 + lVar17) == 0) {
          puVar23 = &DAT_143f3eda8;
        }
        else {
          puVar23 = *(undefined2 **)(lVar21 + 0x20 + lVar17);
        }
        iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar23,puVar20);
        if (iVar11 == 0) {
          puVar20 = &DAT_143f3eda8;
          if (local_230 != 0) {
            puVar20 = local_238;
          }
          if (*(int *)(lVar21 + 0x18 + lVar17) == 0) {
            puVar23 = &DAT_143f3eda8;
          }
          else {
            puVar23 = *(undefined2 **)(lVar21 + 0x10 + lVar17);
          }
          iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar23,puVar20);
          if (iVar11 == 0) {
            ppuVar14 = (undefined **)&DAT_143f3eda8;
            if (local_240 != 0) {
              ppuVar14 = local_248;
            }
            if (*(int *)(lVar21 + 8 + lVar17) == 0) {
              puVar20 = &DAT_143f3eda8;
            }
            else {
              puVar20 = *(undefined2 **)(lVar21 + lVar17);
            }
            iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar20,ppuVar14);
            if (iVar11 == 0) {
              if (iVar10 == -1) break;
              if (*(int *)(param_1 + 0x158) == *(int *)(param_1 + 0x184)) goto LAB_140582cb1;
              puVar20 = &DAT_143f3eda8;
              if (local_230 != 0) {
                puVar20 = local_238;
              }
              iVar10 = FUN_140438070(puVar20);
              puVar20 = &DAT_143f3eda8;
              if (local_220 != 0) {
                puVar20 = local_228;
              }
              uVar22 = FUN_140438070(puVar20);
              ppuVar14 = (undefined **)&DAT_143f3eda8;
              if (local_240 != 0) {
                ppuVar14 = local_248;
              }
              uVar16 = FUN_140438070(ppuVar14);
              lVar17 = *(longlong *)(param_1 + 400);
              if (*(longlong *)(param_1 + 400) == 0) {
                lVar17 = param_1 + 0x188;
              }
              iVar10 = *(int *)(lVar17 + ((longlong)*(int *)(param_1 + 0x198) - 1U &
                                         (longlong)(int)(uVar16 ^ (uVar22 ^ iVar10 * 0x18d) * 0x18d)
                                         ) * 4);
              if (iVar10 == -1) goto LAB_140582cb1;
              lVar17 = *(longlong *)(param_1 + 0x150);
              goto LAB_140582c10;
            }
          }
        }
        lVar17 = *(longlong *)(param_1 + 0x150);
        iVar10 = *(int *)(lVar21 + 0x70 + lVar17);
        if (iVar10 == -1) {
          FUN_14056ed50(&local_248);
          return;
        }
      } while( true );
    }
  }
LAB_140582cbd:
  FUN_14056ed50(&local_248);
  return;
LAB_140582c10:
  do {
    lVar21 = (longlong)iVar10 * 0x78;
    puVar20 = &DAT_143f3eda8;
    if (local_220 != 0) {
      puVar20 = local_228;
    }
    if (*(int *)(lVar21 + 0x28 + lVar17) == 0) {
      puVar23 = &DAT_143f3eda8;
    }
    else {
      puVar23 = *(undefined2 **)(lVar21 + 0x20 + lVar17);
    }
    iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar23,puVar20);
    if (iVar11 == 0) {
      puVar20 = &DAT_143f3eda8;
      if (local_230 != 0) {
        puVar20 = local_238;
      }
      if (*(int *)(lVar21 + 0x18 + lVar17) == 0) {
        puVar23 = &DAT_143f3eda8;
      }
      else {
        puVar23 = *(undefined2 **)(lVar21 + 0x10 + lVar17);
      }
      iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar23,puVar20);
      if (iVar11 == 0) {
        ppuVar14 = (undefined **)&DAT_143f3eda8;
        if (local_240 != 0) {
          ppuVar14 = local_248;
        }
        if (*(int *)(lVar21 + 8 + lVar17) == 0) {
          puVar20 = &DAT_143f3eda8;
        }
        else {
          puVar20 = *(undefined2 **)(lVar21 + lVar17);
        }
        iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar20,ppuVar14);
        if (iVar11 == 0) {
          puVar19 = (undefined2 *)0x0;
          if (iVar10 != -1) {
            puVar19 = (undefined2 *)(*(longlong *)(param_1 + 0x150) + lVar21);
          }
          break;
        }
      }
    }
    lVar17 = *(longlong *)(param_1 + 0x150);
    iVar10 = *(int *)(lVar21 + 0x70 + lVar17);
  } while (iVar10 != -1);
LAB_140582cb1:
  FUN_140583260(*(undefined8 *)(puVar19 + 0x30),lVar18);
  goto LAB_140582cbd;
}



// FUNCTION 140583260 FUN_140583260 body=857 status=ok
// SIG undefined FUN_140583260(void)

void FUN_140583260(longlong param_1,undefined2 *param_2)

{
  longlong *plVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  undefined2 *puVar14;
  char cVar15;
  undefined2 *local_res10;
  undefined2 *local_58;
  undefined2 *local_50;
  int local_48;
  undefined4 local_44;
  
  pcVar2 = *(char **)(param_2 + 0x3c);
  puVar6 = (undefined2 *)0x0;
  local_58 = (undefined2 *)0x0;
  local_50 = (undefined2 *)0x0;
  uVar12 = 0;
  lVar5 = -1;
  puVar14 = puVar6;
  local_res10 = param_2;
  if ((pcVar2 != (char *)0x0) && (lVar11 = lVar5, puVar14 = (undefined2 *)0x0, *pcVar2 != '\0')) {
    do {
      lVar11 = lVar11 + 1;
    } while (pcVar2[lVar11] != '\0');
    uVar10 = (int)lVar11 + 1;
    local_50 = (undefined2 *)(ulonglong)uVar10;
    uVar12 = uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      uVar12 = (uint)local_50;
    }
    puVar14 = local_58;
    FGenericPlatformString::Convert<char,wchar_t>(local_58,uVar10,pcVar2,uVar10,0x3f);
  }
  plVar1 = (longlong *)(param_1 + 0xb0);
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    puVar9 = &DAT_143f3eda8;
    if (uVar12 != 0) {
      puVar9 = puVar14;
    }
    iVar3 = FUN_140438070(puVar9);
    lVar11 = *(longlong *)(param_1 + 0xf0);
    if (*(longlong *)(param_1 + 0xf0) == 0) {
      lVar11 = param_1 + 0xe8;
    }
    iVar3 = *(int *)(lVar11 + ((longlong)*(int *)(param_1 + 0xf8) - 1U & (longlong)iVar3) * 4);
    param_2 = local_res10;
    if (iVar3 != -1) {
      lVar11 = *plVar1;
      do {
        lVar13 = (longlong)iVar3 * 0x20;
        puVar9 = &DAT_143f3eda8;
        if ((uint)local_50 != 0) {
          puVar9 = puVar14;
        }
        if (*(int *)(lVar13 + 8 + lVar11) == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = *(undefined2 **)(lVar13 + lVar11);
        }
        iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar9);
        param_2 = local_res10;
        if (iVar4 == 0) {
          if (iVar3 != -1) {
            puVar9 = puVar6;
            if (*(int *)(param_1 + 0xb8) == *(int *)(param_1 + 0xe4)) goto LAB_14058347c;
            puVar7 = &DAT_143f3eda8;
            if ((uint)local_50 != 0) {
              puVar7 = puVar14;
            }
            iVar3 = FUN_140438070(puVar7);
            lVar11 = *(longlong *)(param_1 + 0xf0);
            if (*(longlong *)(param_1 + 0xf0) == 0) {
              lVar11 = param_1 + 0xe8;
            }
            iVar3 = *(int *)(lVar11 + ((longlong)*(int *)(param_1 + 0xf8) - 1U & (longlong)iVar3) *
                                      4);
            if (iVar3 == -1) goto LAB_14058347c;
            lVar11 = *plVar1;
            goto LAB_140583442;
          }
          break;
        }
        lVar11 = *plVar1;
        iVar3 = *(int *)(lVar11 + 0x18 + lVar13);
      } while (iVar3 != -1);
    }
  }
  lVar5 = operator_new(0x38);
  if (lVar5 != 0) {
    puVar6 = (undefined2 *)PresenceLocation::PresenceLocation(lVar5,param_1,param_2);
  }
  local_res10 = puVar6;
  FUN_14056a990(plVar1,&local_58,&local_res10);
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 8,puVar6);
  puVar14 = local_58;
  goto LAB_1405833d3;
  while( true ) {
    lVar11 = *plVar1;
    iVar3 = *(int *)(lVar11 + 0x18 + lVar13);
    if (iVar3 == -1) break;
LAB_140583442:
    lVar13 = (longlong)iVar3 * 0x20;
    puVar7 = &DAT_143f3eda8;
    if ((uint)local_50 != 0) {
      puVar7 = puVar14;
    }
    if (*(int *)(lVar13 + 8 + lVar11) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = *(undefined2 **)(lVar13 + lVar11);
    }
    iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar7);
    if (iVar4 == 0) {
      if (iVar3 != -1) {
        puVar9 = (undefined2 *)(lVar13 + *plVar1);
      }
      break;
    }
  }
LAB_14058347c:
  lVar11 = *(longlong *)(puVar9 + 8);
  local_58 = (undefined2 *)0x0;
  pcVar2 = *(char **)(local_res10 + 0x24);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
    puVar9 = (undefined2 *)0x0;
    puVar7 = puVar6;
  }
  else {
    do {
      lVar5 = lVar5 + 1;
    } while (pcVar2[lVar5] != '\0');
    uVar10 = (int)lVar5 + 1;
    local_50 = (undefined2 *)(ulonglong)uVar10;
    uVar12 = uVar10;
    if (0 < (int)uVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      uVar12 = (uint)local_50;
    }
    puVar9 = local_58;
    FGenericPlatformString::Convert<char,wchar_t>(local_58,uVar10,pcVar2,uVar10,0x3f);
    puVar7 = (undefined2 *)(ulonglong)uVar12;
  }
  local_58 = (undefined2 *)CONCAT71(local_58._1_7_,*(char *)(local_res10 + 0x20));
  local_50 = (undefined2 *)0x0;
  local_44 = 0;
  iVar3 = (int)puVar7;
  cVar15 = *(char *)(local_res10 + 0x20);
  local_48 = iVar3;
  if (iVar3 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_50,puVar7,0);
    puVar6 = local_50;
    _guard_xfg_dispatch_icall_nop(local_50,puVar9,(longlong)iVar3 * 2);
    cVar15 = (char)local_58;
  }
  iVar3 = local_48;
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  if (cVar15 == *(char *)(lVar11 + 0x18)) {
    if (*(int *)(lVar11 + 0x28) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = *(undefined2 **)(lVar11 + 0x20);
    }
    puVar7 = &DAT_143f3eda8;
    if (iVar3 != 0) {
      puVar7 = puVar6;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar9);
    if (iVar3 == 0) {
      if (puVar6 != (undefined2 *)0x0) {
        FMemory::Free(puVar6);
      }
      goto LAB_1405833d3;
    }
  }
  *(char *)(lVar11 + 0x18) = cVar15;
  FString::operator=(lVar11 + 0x20,&local_50);
  if (local_50 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x20,lVar11);
LAB_1405833d3:
  if (puVar14 != (undefined2 *)0x0) {
    FMemory::Free(puVar14);
  }
  return;
}



// FUNCTION 1405835c0 FUN_1405835c0 body=979 status=ok
// SIG undefined FUN_1405835c0(void)

void FUN_1405835c0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  byte *pbVar11;
  longlong lVar12;
  undefined1 local_res10 [8];
  
  iVar8 = *(int *)(param_2 + 0x18);
  if (iVar8 == 0x31) {
    local_res10[0] = *(undefined1 *)(param_2 + 0x38);
    lVar5 = FUN_14057edc0(param_1,local_res10,param_2 + 0x2c);
    if (lVar5 == 0) {
      return;
    }
    *(undefined1 *)(lVar5 + 0x40) = 0;
    bVar3 = false;
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    uVar6 = *(undefined8 *)(param_2 + 0x30);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    iVar8 = *(int *)(param_1 + 0x1c);
    iVar7 = *(int *)(param_1 + 0x10) + -1;
    lVar12 = (longlong)iVar7;
    if (-1 < iVar7) {
      lVar10 = lVar12 << 4;
      bVar3 = false;
      do {
        if (((*(int *)(lVar10 + 8 + *(longlong *)(param_1 + 8)) == 0) ||
            (plVar2 = *(longlong **)(lVar10 + *(longlong *)(param_1 + 8)), plVar2 == (longlong *)0x0
            )) || (cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,uVar1,lVar5,(int)uVar6),
                  cVar4 == '\0')) {
          bVar3 = true;
        }
        lVar10 = lVar10 + -0x10;
        lVar12 = lVar12 + -1;
      } while (-1 < lVar12);
      iVar8 = *(int *)(param_1 + 0x1c);
    }
    *(int *)(param_1 + 0x1c) = iVar8 + -1;
    if (!bVar3) {
      return;
    }
    param_1 = param_1 + 8;
  }
  else if (iVar8 == 0x32) {
    local_res10[0] = *(undefined1 *)(param_2 + 0x30);
    lVar5 = FUN_14057edc0(param_1,local_res10,param_2 + 0x2c);
    if (lVar5 == 0) {
      return;
    }
    lVar12 = operator_new(0x48);
    if (lVar12 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = TTSMessageImpl::TTSMessageImpl(lVar12,lVar5);
    }
    if (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c)) {
      lVar12 = *(longlong *)(param_1 + 0x118);
      if (*(longlong *)(param_1 + 0x118) == 0) {
        lVar12 = param_1 + 0x110;
      }
      iVar8 = *(int *)(lVar12 + ((longlong)*(int *)(param_1 + 0x120) - 1U &
                                (ulonglong)*(byte *)(param_2 + 0x30)) * 4);
      if (iVar8 != -1) {
        do {
          pbVar11 = (byte *)((longlong)iVar8 * 0x20 + *(longlong *)(param_1 + 0xd8));
          if (*pbVar11 == *(byte *)(param_2 + 0x30)) {
            if (iVar8 != -1) goto LAB_140583750;
            break;
          }
          iVar8 = *(int *)(pbVar11 + 0x18);
        } while (iVar8 != -1);
      }
    }
    pbVar11 = (byte *)0x0;
LAB_140583750:
    plVar2 = *(longlong **)(pbVar11 + 8);
    for (plVar9 = plVar2; plVar9 != plVar2 + *(int *)(pbVar11 + 0x10); plVar9 = plVar9 + 1) {
      if (*plVar9 == lVar5) {
        iVar8 = (int)((longlong)plVar9 - (longlong)plVar2 >> 3);
        if (iVar8 != -1) {
          _guard_xfg_dispatch_icall_nop
                    (plVar2 + iVar8,plVar2 + iVar8 + 1,
                     (longlong)((*(int *)(pbVar11 + 0x10) - iVar8) + -1) << 3);
          *(int *)(pbVar11 + 0x10) = *(int *)(pbVar11 + 0x10) + -1;
        }
        break;
      }
    }
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    bVar3 = false;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    iVar8 = *(int *)(param_1 + 0x34);
    iVar7 = *(int *)(param_1 + 0x28) + -1;
    lVar5 = (longlong)iVar7;
    if (-1 < iVar7) {
      lVar12 = lVar5 << 4;
      bVar3 = false;
      do {
        if (((*(int *)(lVar12 + 8 + *(longlong *)(param_1 + 0x20)) == 0) ||
            (plVar2 = *(longlong **)(lVar12 + *(longlong *)(param_1 + 0x20)),
            plVar2 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,uVar1,uVar6), cVar4 == '\0')) {
          bVar3 = true;
        }
        lVar12 = lVar12 + -0x10;
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
      iVar8 = *(int *)(param_1 + 0x34);
    }
    *(int *)(param_1 + 0x34) = iVar8 + -1;
    if (!bVar3) {
      return;
    }
    param_1 = param_1 + 0x20;
  }
  else {
    if (iVar8 != 0x33) {
      return;
    }
    local_res10[0] = *(undefined1 *)(param_2 + 0x30);
    lVar5 = FUN_14057edc0(param_1,local_res10,param_2 + 0x2c);
    if (lVar5 == 0) {
      return;
    }
    lVar12 = operator_new(0x48);
    if (lVar12 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = TTSMessageImpl::TTSMessageImpl(lVar12,lVar5);
    }
    if (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c)) {
      lVar12 = *(longlong *)(param_1 + 0x118);
      if (*(longlong *)(param_1 + 0x118) == 0) {
        lVar12 = param_1 + 0x110;
      }
      iVar8 = *(int *)(lVar12 + ((longlong)*(int *)(param_1 + 0x120) - 1U &
                                (ulonglong)*(byte *)(param_2 + 0x30)) * 4);
      if (iVar8 != -1) {
        do {
          pbVar11 = (byte *)((longlong)iVar8 * 0x20 + *(longlong *)(param_1 + 0xd8));
          if (*pbVar11 == *(byte *)(param_2 + 0x30)) {
            if (iVar8 != -1) goto LAB_1405838c0;
            break;
          }
          iVar8 = *(int *)(pbVar11 + 0x18);
        } while (iVar8 != -1);
      }
    }
    pbVar11 = (byte *)0x0;
LAB_1405838c0:
    plVar2 = *(longlong **)(pbVar11 + 8);
    for (plVar9 = plVar2; plVar9 != plVar2 + *(int *)(pbVar11 + 0x10); plVar9 = plVar9 + 1) {
      if (*plVar9 == lVar5) {
        iVar8 = (int)((longlong)plVar9 - (longlong)plVar2 >> 3);
        if (iVar8 != -1) {
          _guard_xfg_dispatch_icall_nop
                    (plVar2 + iVar8,plVar2 + iVar8 + 1,
                     (longlong)((*(int *)(pbVar11 + 0x10) - iVar8) + -1) << 3);
          *(int *)(pbVar11 + 0x10) = *(int *)(pbVar11 + 0x10) + -1;
        }
        break;
      }
    }
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    bVar3 = false;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    iVar8 = *(int *)(param_1 + 0x4c);
    iVar7 = *(int *)(param_1 + 0x40) + -1;
    lVar5 = (longlong)iVar7;
    if (-1 < iVar7) {
      lVar12 = lVar5 << 4;
      bVar3 = false;
      do {
        if (((*(int *)(lVar12 + 8 + *(longlong *)(param_1 + 0x38)) == 0) ||
            (plVar2 = *(longlong **)(lVar12 + *(longlong *)(param_1 + 0x38)),
            plVar2 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,uVar1,uVar6), cVar4 == '\0')) {
          bVar3 = true;
        }
        lVar12 = lVar12 + -0x10;
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
      iVar8 = *(int *)(param_1 + 0x4c);
    }
    *(int *)(param_1 + 0x4c) = iVar8 + -1;
    if (!bVar3) {
      return;
    }
    param_1 = param_1 + 0x38;
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
  return;
}



// FUNCTION 1405839a0 FUN_1405839a0 body=743 status=ok
// SIG undefined FUN_1405839a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1405839a0(undefined8 *param_1)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  char *pcVar3;
  short *psVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *_Src;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *_Src_00;
  int iVar12;
  undefined1 auStack_1a8 [32];
  undefined2 local_188;
  undefined1 local_178;
  undefined8 *local_170;
  int local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined1 local_158 [256];
  longlong local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  puVar5 = (undefined8 *)0x0;
  iVar10 = *(int *)(param_1 + 2);
  local_160 = 0;
  if (iVar10 == 0) {
    local_178 = 1;
  }
  else if (iVar10 == 1) {
    local_178 = 2;
  }
  else {
    if (iVar10 != 3) {
      puVar5 = (undefined8 *)operator_new(0x30);
      if (puVar5 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      *puVar5 = &PTR__scalar_deleting_destructor__143fc4420;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      return puVar5;
    }
    local_178 = 3;
  }
  puVar6 = (undefined8 *)operator_new(0x30);
  _Src = local_170;
  puVar11 = puVar5;
  _Src_00 = local_170;
  if (puVar6 != (undefined8 *)0x0) {
    pcVar3 = (char *)*param_1;
    lVar7 = -1;
    iVar12 = 0;
    local_170 = (undefined8 *)0x0;
    local_164 = 0;
    _Src_00 = puVar5;
    iVar10 = iVar12;
    if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (pcVar3[lVar9] != '\0');
      iVar8 = (int)lVar9 + 1;
      local_168 = iVar8;
      if (0 < iVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_170,0);
      }
      iVar10 = local_168;
      _Src_00 = local_170;
      local_188 = 0x3f;
      FGenericPlatformString::Convert<char,wchar_t>(local_170,iVar8,pcVar3,iVar8);
    }
    lVar9 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                      (local_158,param_1[1]);
    local_170 = (undefined8 *)0x0;
    local_164 = 0;
    psVar4 = *(short **)(lVar9 + 0x108);
    _Src = puVar5;
    if ((psVar4 != (short *)0x0) && (*psVar4 != 0)) {
      do {
        lVar7 = lVar7 + 1;
      } while (psVar4[lVar7] != 0);
      iVar8 = (int)lVar7 + 1;
      local_168 = iVar8;
      if (0 < iVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_170,0);
      }
      iVar12 = local_168;
      _Src = local_170;
      FGenericPlatformString::Memcpy(local_170,psVar4,(longlong)iVar8 * 2);
    }
    ppuVar1 = (undefined8 **)(puVar6 + 1);
    ppuVar2 = (undefined8 **)(puVar6 + 3);
    *puVar6 = &PTR__scalar_deleting_destructor__143fc4420;
    *ppuVar1 = (undefined8 *)0x0;
    puVar6[2] = 0;
    *ppuVar2 = (undefined8 *)0x0;
    puVar6[4] = 0;
    if (ppuVar1 != &local_170) {
      *(int *)(puVar6 + 2) = iVar12;
      if ((iVar12 == 0) && (*(int *)((longlong)puVar6 + 0x14) == 0)) {
        *(undefined4 *)((longlong)puVar6 + 0x14) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppuVar1,iVar12);
        _guard_xfg_dispatch_icall_nop(*ppuVar1,_Src,(longlong)iVar12 * 2);
      }
    }
    if (ppuVar2 != &local_170) {
      *(int *)(puVar6 + 4) = iVar10;
      if ((iVar10 == 0) && (*(int *)((longlong)puVar6 + 0x24) == 0)) {
        *(undefined4 *)((longlong)puVar6 + 0x24) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppuVar2,iVar10);
        _guard_xfg_dispatch_icall_nop(*ppuVar2,_Src_00,(longlong)iVar10 * 2);
      }
    }
    puVar5 = (undefined8 *)0x7;
    *(undefined1 *)(puVar6 + 5) = local_178;
    puVar11 = puVar6;
  }
  if ((((ulonglong)puVar5 & 4) != 0) &&
     (puVar5 = (undefined8 *)(ulonglong)((uint)puVar5 & 0xfffffffb), _Src != (undefined8 *)0x0)) {
    FMemory::Free(_Src);
  }
  if ((((ulonglong)puVar5 & 2) != 0) &&
     (puVar5 = (undefined8 *)(ulonglong)((uint)puVar5 & 0xfffffffd), local_58 != 0)) {
    FMemory::Free();
  }
  if ((((ulonglong)puVar5 & 1) != 0) && (_Src_00 != (undefined8 *)0x0)) {
    FMemory::Free(_Src_00);
  }
  return puVar11;
}



// FUNCTION 140583c90 GetFilterType body=5 status=ok
// SIG undefined GetFilterType(void)

undefined1 FTextFilterExpressionEvaluator::GetFilterType(longlong param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



// FUNCTION 140583ca0 InputEvent_IsRepeat body=5 status=ok
// SIG undefined InputEvent_IsRepeat(void)

undefined1 UKismetInputLibrary::InputEvent_IsRepeat(longlong param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



// FUNCTION 140583cb0 FUN_140583cb0 body=220 status=ok
// SIG undefined FUN_140583cb0(void)

void FUN_140583cb0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  
  if ((DAT_1468535b8 == (longlong *)0x0) &&
     (DAT_1468535b8 = (longlong *)operator_new(0x18), DAT_1468535b8 != (longlong *)0x0)) {
    *DAT_1468535b8 = 0;
    DAT_1468535b8[1] = 0;
    DAT_1468535b8[2] = 2;
  }
  plVar2 = DAT_1468535b8;
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = param_1;
    *plVar3 = (longlong)&PTR_GetPoolName_143fc4930;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143fc4978;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
    iVar1 = (int)plVar2[1];
    *(int *)(plVar2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar1);
    }
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar2);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 2;
  }
  return;
}



// FUNCTION 140583d90 FUN_140583d90 body=264 status=ok
// SIG undefined FUN_140583d90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140583d90(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined1 auStack_298 [32];
  undefined8 local_278 [76];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  if (*(char *)(param_1 + 8) == '\0') {
    lVar16 = 4;
    puVar13 = local_278;
    do {
      puVar17 = param_2;
      puVar15 = puVar13;
      uVar14 = puVar17[1];
      uVar9 = puVar17[2];
      uVar10 = puVar17[3];
      *puVar15 = *puVar17;
      puVar15[1] = uVar14;
      uVar14 = puVar17[4];
      uVar11 = puVar17[5];
      puVar15[2] = uVar9;
      puVar15[3] = uVar10;
      uVar9 = puVar17[6];
      uVar10 = puVar17[7];
      puVar15[4] = uVar14;
      puVar15[5] = uVar11;
      uVar14 = puVar17[8];
      uVar11 = puVar17[9];
      puVar15[6] = uVar9;
      puVar15[7] = uVar10;
      uVar9 = puVar17[10];
      uVar10 = puVar17[0xb];
      puVar15[8] = uVar14;
      puVar15[9] = uVar11;
      uVar14 = puVar17[0xc];
      uVar11 = puVar17[0xd];
      puVar15[10] = uVar9;
      puVar15[0xb] = uVar10;
      uVar9 = puVar17[0xe];
      uVar10 = puVar17[0xf];
      puVar15[0xc] = uVar14;
      puVar15[0xd] = uVar11;
      puVar15[0xe] = uVar9;
      puVar15[0xf] = uVar10;
      lVar16 = lVar16 + -1;
      puVar13 = puVar15 + 0x10;
      param_2 = puVar17 + 0x10;
    } while (lVar16 != 0);
    uVar9 = puVar17[0x11];
    uVar14 = puVar17[0x1a];
    uVar10 = puVar17[0x12];
    uVar11 = puVar17[0x13];
    puVar15[0x10] = puVar17[0x10];
    puVar15[0x11] = uVar9;
    uVar9 = puVar17[0x14];
    uVar12 = puVar17[0x15];
    puVar15[0x12] = uVar10;
    puVar15[0x13] = uVar11;
    uVar1 = *(undefined4 *)(puVar17 + 0x16);
    uVar2 = *(undefined4 *)((longlong)puVar17 + 0xb4);
    uVar3 = *(undefined4 *)(puVar17 + 0x17);
    uVar4 = *(undefined4 *)((longlong)puVar17 + 0xbc);
    puVar15[0x14] = uVar9;
    puVar15[0x15] = uVar12;
    uVar5 = *(undefined4 *)(puVar17 + 0x18);
    uVar6 = *(undefined4 *)((longlong)puVar17 + 0xc4);
    uVar7 = *(undefined4 *)(puVar17 + 0x19);
    uVar8 = *(undefined4 *)((longlong)puVar17 + 0xcc);
    *(undefined4 *)(puVar15 + 0x16) = uVar1;
    *(undefined4 *)((longlong)puVar15 + 0xb4) = uVar2;
    *(undefined4 *)(puVar15 + 0x17) = uVar3;
    *(undefined4 *)((longlong)puVar15 + 0xbc) = uVar4;
    *(undefined4 *)(puVar15 + 0x18) = uVar5;
    *(undefined4 *)((longlong)puVar15 + 0xc4) = uVar6;
    *(undefined4 *)(puVar15 + 0x19) = uVar7;
    *(undefined4 *)((longlong)puVar15 + 0xcc) = uVar8;
    puVar15[0x1a] = uVar14;
    uVar14 = _guard_xfg_dispatch_icall_nop(local_278,600);
    if ((int)uVar14 == 0) {
      FUN_140583cb0(param_1 + 0x60);
      FUN_140583cb0(param_1 + 0x270);
      uVar14 = 0;
      *(undefined1 *)(param_1 + 8) = 1;
    }
  }
  else {
    uVar14 = 0x43d;
  }
  return uVar14;
}



// FUNCTION 140583ea0 FUN_140583ea0 body=191 status=ok
// SIG undefined FUN_140583ea0(void)

undefined8 * FUN_140583ea0(void)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)operator_new();
  if (puVar2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar2 = &PTR__purecall_143f740d8;
  plVar3 = (longlong *)FUN_1404cfca0();
  iVar1 = (int)plVar3[1];
  *(int *)(plVar3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar1);
  }
  *(undefined8 **)(*plVar3 + (longlong)iVar1 * 8) = puVar2;
  FSelfRegisteringExec::FSelfRegisteringExec();
  *puVar2 = &PTR_FUN_143fc4388;
  puVar2[3] = 0;
  puVar2[1] = &PTR_LAB_143fc43d0;
  puVar2[2] = &PTR_LAB_143fc43e0;
  puVar4 = puVar2 + 2;
  if (puVar2 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  puVar2[4] = 0;
  puVar2[5] = 0;
  return puVar4;
}



// FUNCTION 140583fc0 FUN_140583fc0 body=5 status=ok
// SIG undefined FUN_140583fc0(void)

undefined1 FUN_140583fc0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



// FUNCTION 140583fe0 FUN_140583fe0 body=203 status=ok
// SIG undefined FUN_140583fe0(void)

undefined8 FUN_140583fe0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong local_18;
  int local_10;
  
  plVar2 = (longlong *)
           (**(code **)(**(longlong **)(param_1 + 0xd8) + 0xf8))
                     (*(longlong **)(param_1 + 0xd8),&local_18);
  lVar3 = *plVar2;
  lVar6 = (longlong)(int)plVar2[1] * 0x50 + lVar3;
  if (lVar3 != lVar6) {
    do {
      cVar1 = ChannelId::operator==(lVar3,param_1 + 0x140);
      if (cVar1 != '\0') {
        uVar4 = 1;
        goto LAB_140584040;
      }
      lVar3 = lVar3 + 0x50;
    } while (lVar3 != lVar6);
  }
  uVar4 = 0;
LAB_140584040:
  if (local_10 != 0) {
    plVar2 = (longlong *)(local_18 + 0x10);
    iVar5 = local_10;
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-2] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 10;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return uVar4;
}



// FUNCTION 1405840c0 FUN_1405840c0 body=427 status=ok
// SIG undefined FUN_1405840c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1405840c0(longlong param_1)

{
  short *psVar1;
  ulonglong uVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_108 [32];
  undefined2 local_e8;
  short *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  uint uStack_c0;
  undefined1 local_b8 [128];
  longlong local_38;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (*(int *)(param_1 + 0x38) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = *(undefined2 **)(param_1 + 0x30);
  }
  uVar2 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_b8,puVar6);
  iVar8 = *(int *)(uVar2 + 0x90);
  if (local_38 != 0) {
    uVar2 = FMemory::Free();
  }
  iVar5 = *(int *)(param_1 + 0x28);
  if ((1 < iVar5) && (1 < *(int *)(param_1 + 8))) {
    uVar7 = 0;
    iVar4 = *(int *)(param_1 + 0x18) + -1;
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar4 = 0;
    }
    uVar2 = (ulonglong)(iVar5 - 1);
    if (iVar5 == 0) {
      uVar2 = uVar7;
    }
    if ((iVar4 + (int)uVar2 < 0x7d) && (iVar8 < 0x40)) {
      local_d8 = (short *)0x0;
      local_d0 = 0x49;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
      psVar1 = local_d8;
      local_e8 = 0x3f;
      FGenericPlatformString::Convert<char,wchar_t>
                (local_d8,0x49,
                 "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890=+-_.!~()%");
      uStack_c0 = 0;
      do {
        iVar8 = (int)uVar7;
        if (iVar8 < 0) {
LAB_140584224:
          uVar2 = 1;
          goto LAB_140584226;
        }
        iVar5 = *(int *)(param_1 + 0x18) + -1;
        if (*(int *)(param_1 + 0x18) == 0) {
          iVar5 = 0;
        }
        if (iVar5 <= iVar8) goto LAB_140584224;
        uVar9 = iVar8 + 1;
        uVar7 = (ulonglong)uVar9;
        psVar3 = psVar1;
        if (psVar1 == psVar1 + (int)local_d0) break;
        while (*psVar3 != *(short *)(*(longlong *)(param_1 + 0x10) + (longlong)(int)uStack_c0 * 2))
        {
          psVar3 = psVar3 + 1;
          if (psVar3 == psVar1 + (int)local_d0) {
            uVar2 = 0;
            uStack_c0 = uVar9;
            goto LAB_140584226;
          }
        }
        uStack_c0 = uVar9;
      } while ((int)((longlong)psVar3 - (longlong)psVar1 >> 1) != -1);
      uVar2 = 0;
      uStack_c0 = uVar9;
LAB_140584226:
      if (psVar1 == (short *)0x0) {
        return uVar2;
      }
      local_c8 = (longlong *)(param_1 + 0x10);
      FMemory::Free(psVar1);
      return uVar2;
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 140584270 FUN_140584270 body=366 status=ok
// SIG undefined FUN_140584270(void)

ulonglong FUN_140584270(longlong param_1)

{
  uint uVar1;
  short *psVar2;
  ulonglong in_RAX;
  short *psVar3;
  ulonglong uVar4;
  int iVar5;
  short *local_28;
  undefined8 local_20;
  longlong *local_18;
  int iStack_10;
  
  if ((1 < *(int *)(param_1 + 0x28)) && (1 < *(int *)(param_1 + 8))) {
    uVar1 = *(uint *)(param_1 + 0x18);
    in_RAX = (ulonglong)uVar1;
    if ((uVar1 == 0) || (in_RAX = (ulonglong)(uVar1 - 1), (int)(uVar1 - 1) < 0xc9)) {
      if (*(char *)(param_1 + 0x30) != '\x01') {
LAB_1405842e5:
        local_28 = (short *)0x0;
        local_20 = 0x49;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
        psVar2 = local_28;
        FGenericPlatformString::Convert<char,wchar_t>
                  (local_28,0x49,
                   "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890=+-_.!~()%",0x49,
                   0x3f);
        iStack_10 = 0;
        do {
          if (iStack_10 < 0) {
LAB_1405843aa:
            uVar4 = 1;
            goto LAB_1405843ac;
          }
          iVar5 = *(int *)(param_1 + 0x18) + -1;
          if (*(int *)(param_1 + 0x18) == 0) {
            iVar5 = 0;
          }
          if (iVar5 <= iStack_10) goto LAB_1405843aa;
          iVar5 = iStack_10 + 1;
          psVar3 = psVar2;
          if (psVar2 == psVar2 + (int)local_20) break;
          while (*psVar3 != *(short *)(*(longlong *)(param_1 + 0x10) + (longlong)iStack_10 * 2)) {
            psVar3 = psVar3 + 1;
            if (psVar3 == psVar2 + (int)local_20) {
              uVar4 = 0;
              iStack_10 = iVar5;
              goto LAB_1405843ac;
            }
          }
          iStack_10 = iVar5;
        } while ((int)((longlong)psVar3 - (longlong)psVar2 >> 1) != -1);
        uVar4 = 0;
        iStack_10 = iVar5;
LAB_1405843ac:
        if (psVar2 != (short *)0x0) {
          local_18 = (longlong *)(param_1 + 0x10);
          FMemory::Free(psVar2);
        }
        return uVar4;
      }
      if (0 < *(int *)(param_1 + 0x38)) {
        uVar1 = *(uint *)(param_1 + 0x3c);
        in_RAX = (ulonglong)uVar1;
        if ((((-1 < (int)uVar1) && ((int)uVar1 <= *(int *)(param_1 + 0x38))) &&
            (0.0 < *(double *)(param_1 + 0x40) || *(double *)(param_1 + 0x40) == 0.0)) &&
           (*(byte *)(param_1 + 0x48) < 3)) goto LAB_1405842e5;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1405843e0 FUN_1405843e0 body=18 status=ok
// SIG undefined FUN_1405843e0(void)

undefined1 FUN_1405843e0(longlong param_1)

{
  if ((*(char *)(param_1 + 0x41) != '\0') && (1 < *(int *)(param_1 + 0x30))) {
    return 1;
  }
  return 0;
}



// FUNCTION 140584410 FUN_140584410 body=138 status=ok
// SIG undefined FUN_140584410(void)

undefined4 FUN_140584410(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined4 local_res10 [2];
  
  plVar3 = (longlong *)operator_new(0x10);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    *plVar3 = 0;
    *(undefined4 *)(plVar3 + 1) = 0;
    if (((param_3 != plVar3) && ((int)param_3[1] != 0)) &&
       (plVar1 = (longlong *)*param_3, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))(plVar1,plVar3);
    }
  }
  *(longlong **)(param_2 + 0x28) = plVar3;
  local_res10[0] = 0;
  uVar2 = _guard_xfg_dispatch_icall_nop(param_2,local_res10);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return uVar2;
}



// FUNCTION 1405844b0 FUN_1405844b0 body=529 status=ok
// SIG undefined FUN_1405844b0(void)

longlong FUN_1405844b0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined2 *_Src;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  longlong lVar10;
  longlong lVar11;
  undefined2 *local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78 [2];
  undefined2 *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  wchar_t *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  ulonglong uVar9;
  
  local_78[1] = 0x13;
  lVar6 = 0;
  local_78[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_78[0],0x13,"VivoxCoreUE4Plugin",0x13,0x3f);
  plVar4 = (longlong *)FUN_1416ba600();
  puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,local_38,local_78);
  (**(code **)(*(longlong *)*puVar5 + 0x18))((longlong *)*puVar5,&local_58);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  local_68 = (undefined2 *)0x0;
  local_48 = &DAT_143f3eda8;
  if (local_50 != 0) {
    local_48 = local_58;
  }
  local_60 = 0;
  iVar3 = 2;
  local_40 = L"../../Binaries/ThirdParty/Vivox/Win64/";
  FPaths::CombineInternal(&local_68,&local_48,2);
  _Src = local_68;
  iVar2 = (int)local_60;
  lVar11 = (longlong)(int)local_60;
  puVar7 = &DAT_143f3eda8;
  if ((int)local_60 != 0) {
    puVar7 = local_68;
  }
  FWindowsPlatformProcess::PushDllDirectory(puVar7);
  uVar8 = 0xffffffffffffffff;
  lVar10 = lVar6;
  if (1 < iVar2) {
    do {
      uVar9 = uVar8;
      uVar8 = uVar9 + 1;
    } while (*(short *)(param_2 + uVar8 * 2) != 0);
    if ((iVar2 != 0) || ((int)uVar9 == -2)) {
      iVar3 = 1;
    }
    local_88 = (undefined2 *)0x0;
    iVar3 = (int)uVar8 + iVar3;
    local_80 = iVar2;
    if ((iVar2 == 0) && (iVar3 == 0)) {
      local_7c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,iVar2 + iVar3,0);
      _guard_xfg_dispatch_icall_nop(local_88,_Src,lVar11 * 2);
    }
    FString::PathAppend(&local_88,param_2,uVar8 & 0xffffffff);
    puVar7 = &DAT_143f3eda8;
    if (local_80 != 0) {
      puVar7 = local_88;
    }
    lVar6 = FWindowsPlatformProcess::GetDllHandle(puVar7);
    lVar10 = 1;
  }
  if ((lVar10 != 0) && (local_88 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  puVar7 = &DAT_143f3eda8;
  if (iVar2 != 0) {
    puVar7 = _Src;
  }
  FWindowsPlatformProcess::PopDllDirectory(puVar7);
  if (_Src != (undefined2 *)0x0) {
    FMemory::Free(_Src);
  }
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return lVar6;
}



// FUNCTION 1405846d0 Count body=4 status=ok
// SIG long Count(WriteBytesMem * this)

/* public: virtual long __cdecl AK::WriteBytesMem::Count(void)const __ptr64 */

long __thiscall AK::WriteBytesMem::Count(WriteBytesMem *this)

{
                    /* 0x5846d0  99  ?Count@WriteBytesMem@AK@@UEBAJXZ */
  return *(long *)(this + 0x18);
}



// FUNCTION 1405846e0 FUN_1405846e0 body=67 status=ok
// SIG undefined FUN_1405846e0(void)

undefined8 * FUN_1405846e0(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
  ::operator=(param_2,param_1 + 0xb0);
  return param_2;
}



// FUNCTION 140584730 FUN_140584730 body=4709 status=ok
// SIG undefined FUN_140584730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_140584730(undefined8 param_1,undefined8 *param_2,void *param_3,undefined8 *param_4,
             undefined4 param_5,byte param_6,char param_7,uint *param_8,uint *param_9,uint *param_10
             ,longlong *param_11)

{
  void *_Src;
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  void *pvVar21;
  undefined2 *puVar22;
  uint uVar23;
  bool bVar24;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  longlong local_228;
  uint *local_220;
  uint local_218;
  uint local_214;
  uint *local_210;
  uint local_208;
  uint uStack_204;
  void *local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  int iStack_1e0;
  uint uStack_1dc;
  undefined8 uStack_1d8;
  uint *local_1d0;
  uint *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  uint uStack_1a8;
  uint uStack_1a4;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  uint uStack_18c;
  uint *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  uint *local_170;
  uint *local_168;
  uint *local_160;
  longlong local_158 [2];
  longlong local_148 [2];
  longlong local_138 [2];
  longlong local_128 [2];
  longlong local_118 [2];
  longlong *local_108;
  int local_100;
  undefined4 local_fc;
  longlong *local_f8;
  undefined8 local_f0;
  uint local_e8 [32];
  uint *local_68;
  uint *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  local_170 = param_8;
  local_f8 = param_11;
  local_160 = param_10;
  local_168 = param_9;
  local_200 = param_3;
  local_f0 = param_1;
  FUN_1405840c0(param_3);
  _guard_xfg_dispatch_icall_nop(&local_228);
  if (*(int *)(param_2 + 1) == 0) {
    puVar22 = &DAT_143f3eda8;
  }
  else {
    puVar22 = (undefined2 *)*param_2;
  }
  lVar7 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_e8,puVar22);
  uVar8 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar7 + 0x88));
  *(undefined8 *)(local_228 + 0x30) = uVar8;
  if (local_68 != (uint *)0x0) {
    FMemory::Free();
  }
  if (*(int *)(param_4 + 1) == 0) {
    puVar22 = &DAT_143f3eda8;
  }
  else {
    puVar22 = (undefined2 *)*param_4;
  }
  lVar7 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_e8,puVar22);
  uVar8 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar7 + 0x88));
  *(undefined8 *)(local_228 + 0x88) = uVar8;
  if (local_68 != (uint *)0x0) {
    FMemory::Free();
  }
  puVar9 = (undefined8 *)AccountId::ToString(param_3,&local_1f8);
  if (*(int *)(puVar9 + 1) == 0) {
    puVar22 = &DAT_143f3eda8;
  }
  else {
    puVar22 = (undefined2 *)*puVar9;
  }
  lVar7 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_e8,puVar22);
  uVar8 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar7 + 0x88));
  *(undefined8 *)(local_228 + 0x78) = uVar8;
  if (local_68 != (uint *)0x0) {
    FMemory::Free();
  }
  if (local_1f8 != (uint *)0x0) {
    FMemory::Free();
  }
  uStack_1b8 = (uint *)0x2;
  local_1c0 = (uint *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c0,0);
  local_238._0_2_ = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>(local_1c0,2,&DAT_143fc239c);
  local_210 = (uint *)0x0;
  local_208 = 2;
  uStack_204 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_210,0);
  puVar14 = local_210;
  local_238._0_2_ = 0x3f;
  local_1d0 = local_210;
  FGenericPlatformString::Convert<char,wchar_t>(local_210,2,&DAT_143fc23ec);
  local_1f8 = (uint *)0x0;
  uStack_1f0 = (uint *)0x2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f8,0);
  puVar10 = local_1f8;
  local_238 = CONCAT22(local_238._2_2_,0x3f);
  local_1c8 = local_1f8;
  FGenericPlatformString::Convert<char,wchar_t>(local_1f8,2,&DAT_143fc241c);
  iVar5 = *(int *)((longlong)param_3 + 0x28);
  if ((int)(uint)uStack_1f0 < 2) {
    pvVar21 = *(void **)((longlong)param_3 + 0x20);
    puVar10 = (uint *)0x0;
    local_1f8 = (uint *)0x0;
    uStack_1f0 = (uint *)CONCAT44(uStack_1f0._4_4_,iVar5);
    if (iVar5 == 0) {
      uVar18 = 0;
      puVar11 = puVar10;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1f8,iVar5,0);
      puVar11 = local_1f8;
      _guard_xfg_dispatch_icall_nop(local_1f8,pvVar21,(longlong)iVar5 * 2);
      puVar10 = (uint *)((ulonglong)uStack_1f0 >> 0x20);
      uVar18 = (ulonglong)uStack_1f0 & 0xffffffff;
    }
  }
  else {
    iVar15 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar15 = 0;
    }
    if (((uint)uStack_1f0 != 0) || (iVar5 = 1, iVar15 == 0)) {
      iVar5 = 0;
    }
    local_220 = puVar10;
    local_1c8 = (uint *)0x0;
    local_218 = (uint)uStack_1f0;
    local_214 = uStack_1f0._4_4_;
    if ((int)uStack_1f0._4_4_ < (int)((uint)uStack_1f0 + iVar5 + iVar15)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_220);
    }
    uVar20 = local_218;
    puVar10 = (uint *)(ulonglong)local_214;
    uVar18 = (ulonglong)local_218;
    pvVar21 = *(void **)((longlong)param_3 + 0x20);
    puVar11 = local_220;
    if (iVar15 != 0) {
      lVar7 = (longlong)(int)local_218;
      local_218 = local_218 + (local_218 == 0) + iVar15;
      if ((int)local_214 < (int)local_218) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_220,uVar18);
        puVar10 = (uint *)(ulonglong)local_214;
      }
      puVar11 = local_220;
      uVar18 = (ulonglong)local_218;
      puVar22 = (undefined2 *)((longlong)local_220 + (lVar7 - (ulonglong)(uVar20 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(puVar22,pvVar21,(longlong)iVar15 * 2);
      puVar22[iVar15] = 0;
      puVar14 = local_210;
    }
  }
  puVar12 = (uint *)0x0;
  uVar20 = (uint)uVar18;
  if ((int)uVar20 < 2) {
    puVar10 = (uint *)(ulonglong)uStack_204;
    local_1d0 = (uint *)0x0;
    puVar12 = puVar11;
    uVar20 = local_208;
  }
  else {
    iVar5 = 0;
    if (local_208 != 0) {
      iVar5 = local_208 - 1;
    }
    if ((uVar20 != 0) || (iVar15 = 1, iVar5 == 0)) {
      iVar15 = 0;
    }
    local_214 = (uint)puVar10;
    local_220 = puVar11;
    local_218 = uVar20;
    if ((int)local_214 < (int)(iVar15 + uVar20 + iVar5)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_220);
      puVar10 = (uint *)(ulonglong)local_214;
      uVar18 = (ulonglong)local_218;
    }
    uVar4 = (uint)uVar18;
    puVar14 = local_220;
    uVar20 = uVar4;
    if (iVar5 != 0) {
      local_218 = uVar4 + (uVar4 == 0) + iVar5;
      if ((int)puVar10 < (int)local_218) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_220,uVar18);
        puVar10 = (uint *)(ulonglong)local_214;
      }
      uVar20 = local_218;
      puVar14 = local_220;
      puVar22 = (undefined2 *)
                (((longlong)(int)uVar4 - (ulonglong)(uVar4 != 0)) * 2 + (longlong)local_220);
      _guard_xfg_dispatch_icall_nop(puVar22,local_210,(longlong)iVar5 * 2);
      puVar22[iVar5] = 0;
    }
  }
  pvVar21 = local_200;
  puVar11 = (uint *)0x0;
  iVar5 = *(int *)((longlong)param_3 + 0x18);
  if ((int)uVar20 < 2) {
    local_220 = (uint *)0x0;
    local_1f8 = (uint *)0x0;
    uStack_1f0 = (uint *)CONCAT44(uStack_1f0._4_4_,iVar5);
    _Src = *(void **)((longlong)local_200 + 0x10);
    if (iVar5 == 0) {
      uVar18 = 0;
      puVar16 = puVar11;
      puVar10 = puVar11;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1f8,iVar5,0);
      puVar16 = local_1f8;
      local_220 = local_1f8;
      _guard_xfg_dispatch_icall_nop(local_1f8,_Src,(longlong)iVar5 * 2);
      puVar10 = (uint *)((ulonglong)uStack_1f0 >> 0x20);
      uVar18 = (ulonglong)uStack_1f0 & 0xffffffff;
    }
  }
  else {
    puVar16 = (uint *)(ulonglong)(iVar5 - 1);
    if (iVar5 == 0) {
      puVar16 = puVar11;
    }
    iVar5 = (int)puVar16;
    if ((uVar20 != 0) || (iVar15 = 1, iVar5 == 0)) {
      iVar15 = 0;
    }
    uStack_204 = (uint)puVar10;
    local_210 = puVar14;
    local_208 = uVar20;
    if ((int)uStack_204 < (int)(uVar20 + iVar5 + iVar15)) {
      local_220 = puVar14;
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_210);
      puVar10 = (uint *)(ulonglong)uStack_204;
    }
    pvVar21 = local_200;
    uVar20 = local_208;
    uVar18 = (ulonglong)local_208;
    local_200 = *(void **)((longlong)local_200 + 0x10);
    puVar16 = local_210;
    puVar14 = puVar11;
    local_220 = local_210;
    if (iVar5 != 0) {
      lVar7 = (longlong)(int)local_208;
      local_208 = local_208 + (local_208 == 0) + iVar5;
      if ((int)puVar10 < (int)local_208) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_210,uVar18);
        puVar10 = (uint *)(ulonglong)uStack_204;
      }
      uVar18 = (ulonglong)local_208;
      puVar22 = (undefined2 *)((longlong)local_210 + (lVar7 - (ulonglong)(uVar20 != 0)) * 2);
      local_220 = local_210;
      _guard_xfg_dispatch_icall_nop(puVar22,local_200,(longlong)iVar5 * 2);
      puVar22[iVar5] = 0;
      puVar16 = local_220;
    }
  }
  puVar11 = local_1c0;
  puVar17 = (uint *)0x0;
  uVar23 = (uint)puVar10;
  uVar4 = (uint)uVar18;
  uVar20 = (uint)uStack_1b8;
  if ((int)uVar4 < 2) {
    local_220 = local_1c0;
    if (puVar16 != (uint *)0x0) {
      FMemory::Free();
    }
  }
  else {
    puVar10 = puVar17;
    if ((uint)uStack_1b8 != 0) {
      puVar10 = (uint *)(ulonglong)((uint)uStack_1b8 - 1);
    }
    iVar5 = (int)puVar10;
    if ((uVar4 != 0) || (puVar10 = (uint *)0x1, iVar5 == 0)) {
      puVar10 = puVar17;
    }
    local_210 = puVar16;
    local_208 = uVar4;
    uStack_204 = uVar23;
    if ((int)uVar23 < (int)(uVar4 + iVar5 + (int)puVar10)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_210);
      uVar18 = (ulonglong)local_208;
      local_220 = local_210;
    }
    uVar20 = (uint)uVar18;
    puVar17 = local_1c0;
    puVar11 = local_220;
    if (iVar5 != 0) {
      local_208 = iVar5 + (uint)(uVar20 == 0) + uVar20;
      if ((int)uStack_204 < (int)local_208) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_210,uVar18);
        local_220 = local_210;
      }
      uVar4 = local_208;
      puVar11 = local_220;
      puVar22 = (undefined2 *)
                ((longlong)local_220 + ((longlong)(int)uVar20 - (ulonglong)(uVar20 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(puVar22,local_1c0,(longlong)iVar5 * 2);
      puVar22[iVar5] = 0;
      puVar17 = local_1c0;
      uVar20 = uVar4;
    }
  }
  if (puVar14 != (uint *)0x0) {
    FMemory::Free(puVar14);
  }
  if (puVar12 != (uint *)0x0) {
    FMemory::Free(puVar12);
  }
  if (local_1c8 != (uint *)0x0) {
    FMemory::Free(local_1c8);
  }
  if (local_1d0 != (uint *)0x0) {
    FMemory::Free(local_1d0);
  }
  if (puVar17 != (uint *)0x0) {
    FMemory::Free(puVar17);
  }
  puVar14 = (uint *)&DAT_143f3eda8;
  if (uVar20 != 0) {
    puVar14 = puVar11;
  }
  lVar7 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_e8,puVar14);
  uVar8 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar7 + 0x88));
  *(undefined8 *)(local_228 + 0x80) = uVar8;
  if (local_68 != (uint *)0x0) {
    FMemory::Free();
  }
  if (*(int *)((longlong)pvVar21 + 0x38) == 0) {
    puVar22 = &DAT_143f3eda8;
  }
  else {
    puVar22 = *(undefined2 **)((longlong)pvVar21 + 0x30);
  }
  lVar7 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_e8,puVar22);
  uVar8 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar7 + 0x88));
  *(undefined8 *)(local_228 + 0x38) = uVar8;
  if (local_68 != (uint *)0x0) {
    FMemory::Free();
  }
  puVar9 = (undefined8 *)
           FString::Join<TArray<FString,FDefaultAllocator>_>
                     (&local_1f8,(longlong)pvVar21 + 0x50,&DAT_143fc246c);
  if (*(int *)(puVar9 + 1) == 0) {
    puVar22 = &DAT_143f3eda8;
  }
  else {
    puVar22 = (undefined2 *)*puVar9;
  }
  lVar7 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_e8,puVar22);
  uVar8 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar7 + 0x88));
  *(undefined8 *)(local_228 + 0xb0) = uVar8;
  if (local_68 != (uint *)0x0) {
    FMemory::Free();
  }
  if (local_1f8 != (uint *)0x0) {
    FMemory::Free();
  }
  puVar14 = local_170;
  *(undefined4 *)(local_228 + 0x40) = param_5;
  *(uint *)(local_228 + 0x44) = (uint)param_6;
  if (param_6 != 0) {
    puVar10 = (uint *)0x0;
    if (param_7 == '\0') {
      *(undefined4 *)(local_228 + 0x48) = 0;
    }
    else if (param_7 == '\x01') {
      *(undefined4 *)(local_228 + 0x48) = 2;
    }
    else {
      *(undefined4 *)(local_228 + 0x48) = 4;
    }
    if (local_170[2] - local_170[0xd] != 0) {
      uVar8 = _guard_xfg_dispatch_icall_nop((longlong)(int)((local_170[2] - local_170[0xd]) + 1),8);
      uStack_1b8 = puVar14 + 4;
      *(undefined8 *)(local_228 + 0x90) = uVar8;
      uVar20 = puVar14[10];
      local_1c0 = (uint *)0x100000000;
      local_1b0._4_4_ = 0;
      uStack_1a8 = 0;
      if (uVar20 != 0) {
        puVar11 = *(uint **)(puVar14 + 8);
        if (*(uint **)(puVar14 + 8) == (uint *)0x0) {
          puVar11 = uStack_1b8;
        }
        uVar4 = *puVar11;
        puVar12 = puVar10;
        puVar16 = puVar10;
        while (uVar4 == 0) {
          iVar5 = (int)puVar12;
          uStack_1a8 = (int)puVar16 + 0x20;
          puVar16 = (uint *)(ulonglong)uStack_1a8;
          puVar12 = (uint *)(ulonglong)(iVar5 + 1U);
          local_1c0._4_4_ = (undefined4)((ulonglong)local_1c0 >> 0x20);
          local_1c0 = (uint *)CONCAT44(local_1c0._4_4_,iVar5 + 1U);
          if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
          goto LAB_14058501d;
          uVar4 = puVar11[(longlong)iVar5 + 1];
        }
        uVar4 = -uVar4 & uVar4;
        iVar5 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        local_1c0 = (uint *)CONCAT44(uVar4,(undefined4)local_1c0);
        if (uVar4 == 0) {
          iVar5 = 0x20;
        }
        else {
          iVar5 = 0x1f - iVar5;
        }
        local_1b0._4_4_ = (uStack_1a8 - iVar5) + 0x1f;
        if ((int)uVar20 < (int)local_1b0._4_4_) {
LAB_14058501d:
          local_1b0._4_4_ = uVar20;
        }
      }
      local_1b0._0_4_ = 0xffffffff;
      uVar4 = puVar14[10];
      local_1f8 = puVar14;
      uStack_1d8 = CONCAT44(uStack_1a4,uStack_1a8);
      local_1c8 = (uint *)CONCAT44(local_1c8._4_4_,uVar4);
      uStack_1f0 = local_1c0;
      puVar11 = uStack_1f0;
      local_1f8._0_4_ = SUB84(puVar14,0);
      local_1f8._4_4_ = (undefined4)((ulonglong)puVar14 >> 0x20);
      uStack_1f0._0_4_ = (uint)local_1c0;
      uStack_1f0._4_4_ = (uint)((ulonglong)local_1c0 >> 0x20);
      iStack_1e0 = -1;
      uStack_1dc = local_1b0._4_4_;
      uVar23 = uVar4 & 0xffffffe0;
      uStack_180 = CONCAT44(local_1b0._4_4_,0xffffffff);
      local_198 = (undefined4)local_1f8;
      uStack_194 = local_1f8._4_4_;
      uStack_190 = (uint)uStack_1f0;
      uStack_18c = uStack_1f0._4_4_;
      if (uVar4 != uVar20) {
        puVar12 = *(uint **)(puVar14 + 8);
        if (*(uint **)(puVar14 + 8) == (uint *)0x0) {
          puVar12 = uStack_1b8;
        }
        uVar13 = puVar12[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
        iVar5 = (int)uVar4 >> 5;
        while (uVar13 == 0) {
          uVar23 = uVar23 + 0x20;
          if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
          goto LAB_1405850f2;
          uVar13 = puVar12[(longlong)iVar5 + 1];
          iVar5 = iVar5 + 1;
        }
        uVar13 = -uVar13 & uVar13;
        iVar5 = 0x1f;
        if (uVar13 != 0) {
          for (; uVar13 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        if (uVar13 == 0) {
          iVar5 = 0x20;
        }
        else {
          iVar5 = 0x1f - iVar5;
        }
        uVar4 = (uVar23 - iVar5) + 0x1f;
        local_1c8 = (uint *)CONCAT44(local_1c8._4_4_,uVar4);
        if ((int)uVar20 < (int)uVar4) {
LAB_1405850f2:
          local_1c8 = (uint *)CONCAT44(local_1c8._4_4_,uVar20);
          uVar4 = uVar20;
        }
      }
      local_1d0 = (uint *)0x0;
      local_1f8 = puVar14;
      uStack_1f0 = puVar11;
      local_188 = uStack_1b8;
      local_178 = uStack_1d8;
      uStack_1e8 = uStack_1b8;
      while( true ) {
        if (((uStack_180._4_4_ == uVar4) && (local_188 == uStack_1b8)) &&
           ((uint *)CONCAT44(uStack_194,local_198) == puVar14)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if (!bVar24) break;
        lVar7 = (longlong)(int)uStack_180._4_4_ * 0x68 + *(longlong *)CONCAT44(uStack_194,local_198)
        ;
        FString::FString(local_158,lVar7);
        FString::FString(local_148,lVar7 + 0x10);
        FString::FString(local_138,lVar7 + 0x20);
        FString::FString(local_128,lVar7 + 0x30);
        FString::FString(local_118,lVar7 + 0x40);
        iVar5 = *(int *)(lVar7 + 0x58);
        puVar9 = *(undefined8 **)(lVar7 + 0x50);
        local_108 = (longlong *)0x0;
        local_100 = iVar5;
        if (iVar5 == 0) {
          local_fc = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_108,iVar5,0);
          lVar7 = (longlong)local_108 - (longlong)puVar9;
          do {
            *(undefined8 *)(lVar7 + (longlong)puVar9) = 0;
            iVar15 = *(int *)(puVar9 + 1);
            pvVar21 = (void *)*puVar9;
            *(int *)(lVar7 + 8 + (longlong)puVar9) = iVar15;
            if (iVar15 == 0) {
              *(undefined4 *)(lVar7 + 0xc + (longlong)puVar9) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                        ((undefined8 *)(lVar7 + (longlong)puVar9),iVar15,0);
              _guard_xfg_dispatch_icall_nop
                        (*(void **)(lVar7 + (longlong)puVar9),pvVar21,(longlong)iVar15 * 2);
            }
            puVar9 = puVar9 + 2;
            iVar5 = iVar5 + -1;
            puVar10 = local_1d0;
            puVar14 = local_170;
          } while (iVar5 != 0);
        }
        puVar9 = (undefined8 *)AccountId::ToString(local_158,&local_1f8);
        if (*(int *)(puVar9 + 1) == 0) {
          puVar22 = &DAT_143f3eda8;
        }
        else {
          puVar22 = (undefined2 *)*puVar9;
        }
        local_68 = (uint *)0x0;
        if (puVar22 == (undefined2 *)0x0) {
          local_58 = 0;
          local_60 = (uint *)0x0;
        }
        else {
          uVar18 = 0xffffffffffffffff;
          do {
            uVar18 = uVar18 + 1;
          } while (puVar22[uVar18] != 0);
          local_200 = (void *)((ulonglong)local_200 & 0xffffffff00000000);
          FTCHARToUTF8_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                    (&local_200,(int)uVar18 * 4,puVar22,uVar18 & 0xffffffff);
          local_58 = (int)local_200;
          uVar20 = (int)local_200 + 1;
          puVar11 = (uint *)0x0;
          if ((0x80 < uVar20) && (puVar11 = (uint *)0x0, uVar20 != 0)) {
            puVar11 = (uint *)FMemory::Realloc(0,(longlong)(int)uVar20,0);
            local_68 = puVar11;
          }
          local_1d0 = local_e8;
          if (puVar11 != (uint *)0x0) {
            local_1d0 = puVar11;
          }
          local_60 = local_1d0;
          FTCHARToUTF8_Convert::Convert_Impl<char_*>(&local_1d0,uVar20);
        }
        uVar8 = _guard_xfg_dispatch_icall_nop(local_60);
        *(undefined8 *)(*(longlong *)(local_228 + 0x90) + (longlong)puVar10) = uVar8;
        puVar10 = puVar10 + 2;
        local_1d0 = puVar10;
        if (local_68 != (uint *)0x0) {
          FMemory::Free();
        }
        plVar2 = local_108;
        plVar1 = local_108;
        iVar5 = local_100;
        if (local_1f8 != (uint *)0x0) {
          FMemory::Free();
          plVar2 = local_108;
          plVar1 = local_108;
          iVar5 = local_100;
        }
        for (; plVar3 = local_108, iVar5 != 0; iVar5 = iVar5 + -1) {
          local_108 = plVar1;
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 2;
          plVar1 = local_108;
          local_108 = plVar3;
        }
        bVar24 = local_108 != (longlong *)0x0;
        local_108 = plVar1;
        if (bVar24) {
          FMemory::Free(plVar3);
        }
        if (local_118[0] != 0) {
          FMemory::Free();
        }
        if (local_128[0] != 0) {
          FMemory::Free();
        }
        if (local_138[0] != 0) {
          FMemory::Free();
        }
        if (local_148[0] != 0) {
          FMemory::Free();
        }
        if (local_158[0] != 0) {
          FMemory::Free();
        }
        uStack_180 = CONCAT44(uStack_180._4_4_,(uint)uStack_180 & ~uStack_18c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_190);
        uVar4 = (uint)local_1c8;
      }
    }
    puVar14 = local_168;
    if (local_168[2] - local_168[0xd] != 0) {
      uVar8 = _guard_xfg_dispatch_icall_nop((longlong)(int)((local_168[2] - local_168[0xd]) + 1),8);
      puVar10 = puVar14 + 4;
      *(undefined8 *)(local_228 + 0x98) = uVar8;
      uVar20 = puVar14[10];
      local_1f8 = (uint *)0x100000000;
      uStack_1e8._4_4_ = 0;
      iStack_1e0 = 0;
      if (uVar20 != 0) {
        puVar11 = *(uint **)(puVar14 + 8);
        if (*(uint **)(puVar14 + 8) == (uint *)0x0) {
          puVar11 = puVar10;
        }
        uVar4 = *puVar11;
        iVar5 = 0;
        iStack_1e0 = 0;
        while (uVar4 == 0) {
          iStack_1e0 = iStack_1e0 + 0x20;
          local_1f8._4_4_ = (undefined4)((ulonglong)local_1f8 >> 0x20);
          local_1f8 = (uint *)CONCAT44(local_1f8._4_4_,iVar5 + 1);
          if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
          goto LAB_140585495;
          uVar4 = puVar11[(longlong)iVar5 + 1];
          iVar5 = iVar5 + 1;
        }
        uVar4 = -uVar4 & uVar4;
        iVar5 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
          }
        }
        local_1f8 = (uint *)CONCAT44(uVar4,(undefined4)local_1f8);
        if (uVar4 == 0) {
          iVar5 = 0x20;
        }
        else {
          iVar5 = 0x1f - iVar5;
        }
        uStack_1e8._4_4_ = (iStack_1e0 - iVar5) + 0x1f;
        if ((int)uVar20 < (int)uStack_1e8._4_4_) {
LAB_140585495:
          uStack_1e8._4_4_ = uVar20;
        }
      }
      uStack_1e8._0_4_ = 0xffffffff;
      uVar20 = puVar14[10];
      uStack_1a0 = CONCAT44(uStack_1dc,iStack_1e0);
      local_1c0 = puVar14;
      lVar7 = 0;
      uStack_1b8 = local_1f8;
      puVar11 = uStack_1b8;
      local_1c0._0_4_ = SUB84(puVar14,0);
      local_1c0._4_4_ = (undefined4)((ulonglong)puVar14 >> 0x20);
      uStack_1b8._0_4_ = (uint)local_1f8;
      uStack_1b8._4_4_ = (uint)((ulonglong)local_1f8 >> 0x20);
      uStack_1a8 = 0xffffffff;
      uStack_1a4 = uStack_1e8._4_4_;
      uStack_180 = CONCAT44(uStack_1e8._4_4_,0xffffffff);
      local_198 = (undefined4)local_1c0;
      uStack_194 = local_1c0._4_4_;
      uStack_190 = (uint)uStack_1b8;
      uStack_18c = uStack_1b8._4_4_;
      uStack_1f0 = puVar10;
      local_1c0 = puVar14;
      uStack_1b8 = puVar11;
      local_188 = puVar10;
      local_178 = uStack_1a0;
      local_1b0 = puVar10;
      while( true ) {
        puVar11 = (uint *)0x0;
        if (((uStack_180._4_4_ == uVar20) && (local_188 == puVar10)) &&
           ((uint *)CONCAT44(uStack_194,local_198) == puVar14)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        if (!bVar24) break;
        lVar19 = (longlong)(int)uStack_180._4_4_ * 0x68 +
                 *(longlong *)CONCAT44(uStack_194,local_198);
        FString::FString(local_158,lVar19);
        FString::FString(local_148,lVar19 + 0x10);
        FString::FString(local_138,lVar19 + 0x20);
        FString::FString(local_128,lVar19 + 0x30);
        FString::FString(local_118,lVar19 + 0x40);
        local_108 = (longlong *)0x0;
        local_238 = 0;
        TArray<FString,FDefaultAllocator>::CopyToEmpty<FString>
                  (&local_108,*(undefined8 *)(lVar19 + 0x50),*(undefined4 *)(lVar19 + 0x58),0);
        puVar9 = (undefined8 *)AccountId::ToString(local_158,&local_1f8);
        if (*(int *)(puVar9 + 1) == 0) {
          puVar22 = &DAT_143f3eda8;
        }
        else {
          puVar22 = (undefined2 *)*puVar9;
        }
        local_68 = (uint *)0x0;
        if (puVar22 == (undefined2 *)0x0) {
          local_58 = 0;
          local_60 = (uint *)0x0;
        }
        else {
          uVar18 = 0xffffffffffffffff;
          do {
            uVar18 = uVar18 + 1;
          } while (puVar22[uVar18] != 0);
          local_200 = (void *)((ulonglong)local_200 & 0xffffffff00000000);
          FTCHARToUTF8_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                    (&local_200,(int)uVar18 * 4,puVar22,uVar18 & 0xffffffff);
          local_58 = (int)local_200;
          uVar4 = (int)local_200 + 1;
          if ((0x80 < uVar4) && (uVar4 != 0)) {
            puVar11 = (uint *)FMemory::Realloc(0,(longlong)(int)uVar4,0);
            local_68 = puVar11;
          }
          local_170 = local_e8;
          if (puVar11 != (uint *)0x0) {
            local_170 = puVar11;
          }
          local_60 = local_170;
          FTCHARToUTF8_Convert::Convert_Impl<char_*>(&local_170,uVar4,puVar22);
        }
        uVar8 = _guard_xfg_dispatch_icall_nop(local_60);
        *(undefined8 *)(lVar7 + *(longlong *)(local_228 + 0x98)) = uVar8;
        lVar7 = lVar7 + 8;
        if (local_68 != (uint *)0x0) {
          FMemory::Free();
        }
        if (local_1f8 != (uint *)0x0) {
          FMemory::Free();
        }
        FUN_14056ed50(local_158);
        uStack_180 = CONCAT44(uStack_180._4_4_,(uint)uStack_180 & ~uStack_18c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_190);
        puVar14 = local_168;
      }
    }
    puVar14 = local_160;
    lVar7 = 0;
    puVar11 = local_220;
    if (local_160[2] - local_160[0xd] != 0) {
      uVar8 = _guard_xfg_dispatch_icall_nop((longlong)(int)((local_160[2] - local_160[0xd]) + 1),8);
      puVar10 = puVar14 + 4;
      local_1f8 = (uint *)0x100000000;
      *(undefined8 *)(local_228 + 0xa8) = uVar8;
      uStack_1e8._0_4_ = 0xffffffff;
      uStack_1e8._4_4_ = 0;
      iStack_1e0 = 0;
      uVar20 = 0;
      uStack_1f0 = puVar10;
      if (puVar14[10] != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1f8);
        uVar20 = puVar14[10];
      }
      local_1c0 = puVar14;
      uStack_1a0 = CONCAT44(uStack_1dc,iStack_1e0);
      uStack_1b8 = local_1f8;
      puVar11 = uStack_1b8;
      local_1b0._0_4_ = SUB84(uStack_1f0,0);
      local_1b0._4_4_ = (uint)((ulonglong)uStack_1f0 >> 0x20);
      local_1c0._0_4_ = SUB84(puVar14,0);
      local_1c0._4_4_ = (undefined4)((ulonglong)puVar14 >> 0x20);
      uStack_1b8._0_4_ = (uint)local_1f8;
      uStack_1b8._4_4_ = (uint)((ulonglong)local_1f8 >> 0x20);
      uStack_1a8 = (uint)uStack_1e8;
      uStack_1a4 = uStack_1e8._4_4_;
      local_188 = uStack_1f0;
      uStack_180 = CONCAT44(uStack_1e8._4_4_,(uint)uStack_1e8);
      local_198 = (undefined4)local_1c0;
      uStack_194 = local_1c0._4_4_;
      uStack_190 = (uint)uStack_1b8;
      uStack_18c = uStack_1b8._4_4_;
      local_1c0 = puVar14;
      uStack_1b8 = puVar11;
      local_178 = uStack_1a0;
      while( true ) {
        puVar12 = (uint *)0x0;
        if (((uStack_180._4_4_ == uVar20) && (local_188 == puVar10)) &&
           ((uint *)CONCAT44(uStack_194,local_198) == puVar14)) {
          bVar24 = false;
        }
        else {
          bVar24 = true;
        }
        puVar11 = local_220;
        if (!bVar24) break;
        lVar19 = (longlong)(int)uStack_180._4_4_ * 0x68 +
                 *(longlong *)CONCAT44(uStack_194,local_198);
        FString::FString(local_158,lVar19);
        FString::FString(local_148,lVar19 + 0x10);
        FString::FString(local_138,lVar19 + 0x20);
        FString::FString(local_128,lVar19 + 0x30);
        FString::FString(local_118,lVar19 + 0x40);
        local_108 = (longlong *)0x0;
        local_238 = 0;
        TArray<FString,FDefaultAllocator>::CopyToEmpty<FString>
                  (&local_108,*(undefined8 *)(lVar19 + 0x50),*(undefined4 *)(lVar19 + 0x58),0);
        puVar9 = (undefined8 *)AccountId::ToString(local_158,&local_1f8);
        if (*(int *)(puVar9 + 1) == 0) {
          puVar22 = &DAT_143f3eda8;
        }
        else {
          puVar22 = (undefined2 *)*puVar9;
        }
        local_68 = (uint *)0x0;
        if (puVar22 == (undefined2 *)0x0) {
          local_58 = 0;
          local_60 = (uint *)0x0;
        }
        else {
          uVar18 = 0xffffffffffffffff;
          do {
            uVar18 = uVar18 + 1;
          } while (puVar22[uVar18] != 0);
          local_200 = (void *)((ulonglong)local_200 & 0xffffffff00000000);
          FTCHARToUTF8_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                    (&local_200,(int)uVar18 * 4,puVar22,uVar18 & 0xffffffff);
          local_58 = (int)local_200;
          uVar4 = (int)local_200 + 1;
          if ((0x80 < uVar4) && (uVar4 != 0)) {
            puVar12 = (uint *)FMemory::Realloc(0,(longlong)(int)uVar4,0);
            local_68 = puVar12;
          }
          local_168 = local_e8;
          if (puVar12 != (uint *)0x0) {
            local_168 = puVar12;
          }
          local_60 = local_168;
          FTCHARToUTF8_Convert::Convert_Impl<char_*>(&local_168,uVar4,puVar22);
        }
        uVar8 = _guard_xfg_dispatch_icall_nop(local_60);
        *(undefined8 *)(lVar7 + *(longlong *)(local_228 + 0xa8)) = uVar8;
        lVar7 = lVar7 + 8;
        if (local_68 != (uint *)0x0) {
          FMemory::Free();
        }
        if (local_1f8 != (uint *)0x0) {
          FMemory::Free();
        }
        FUN_14056ed50(local_158);
        uStack_180 = CONCAT44(uStack_180._4_4_,(uint)uStack_180 & ~uStack_18c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_190);
        puVar14 = local_160;
      }
    }
  }
  plVar2 = local_f8;
  local_1f8 = (uint *)0x0;
  uStack_1f0 = (uint *)((ulonglong)uStack_1f0 & 0xffffffff00000000);
  if (((local_f8 != &local_1f8) && ((int)local_f8[1] != 0)) &&
     (plVar1 = (longlong *)*local_f8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_1f8);
  }
  uVar6 = FUN_140584410(local_f0,local_228,&local_1f8);
  if (puVar11 != (uint *)0x0) {
    FMemory::Free(puVar11);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar2);
  return uVar6;
}



// FUNCTION 1405859b0 FUN_1405859b0 body=5 status=ok
// SIG undefined FUN_1405859b0(void)

longlong FUN_1405859b0(longlong param_1)

{
  return param_1 + 0x10;
}



// FUNCTION 1405859c0 FUN_1405859c0 body=420 status=ok
// SIG undefined FUN_1405859c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1405859c0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined1 auStack_108 [32];
  longlong local_e8 [2];
  undefined4 local_d8;
  longlong local_d0;
  longlong local_c8 [2];
  undefined1 local_b8 [128];
  longlong local_38;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if ((byte)(*(char *)(param_1 + 0x290) - 1U) < 2) {
    if ((DAT_1468535b8 == (undefined8 *)0x0) &&
       (puVar2 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = (undefined8 *)0x0,
       puVar2 != (undefined8 *)0x0)) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 2;
      DAT_1468535b8 = puVar2;
    }
    puVar2 = DAT_1468535b8;
    puVar3 = (undefined8 *)AccountId::ToString(param_1 + 0x90,&local_d0);
    _guard_xfg_dispatch_icall_nop(local_e8);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar3;
    }
    lVar4 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                      (local_b8,puVar6);
    uVar5 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar4 + 0x88));
    *(undefined8 *)(local_e8[0] + 0x30) = uVar5;
    if (local_38 != 0) {
      FMemory::Free();
    }
    local_e8[1] = 0;
    local_d8 = 0;
    FUN_140584410(puVar2,local_e8[0],local_e8 + 1);
    if (local_d0 != 0) {
      FMemory::Free();
    }
    FUN_14057aee0(param_1);
    TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
    ::Empty(param_1 + 0x100,0);
    FUN_14057cb00(param_1 + 0x150,0);
    TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
    ::Empty(param_1 + 0x1a0,0);
    TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
    ::Empty(param_1 + 0x1f0,0);
    *(undefined1 *)(param_1 + 0x298) = 0;
    plVar1 = (longlong *)(param_1 + 0x2a0);
    if (plVar1 != local_c8) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0x2a8) = 0;
    }
    *(undefined1 *)(param_1 + 0x290) = 0;
  }
  return;
}



// FUNCTION 140585b70 FUN_140585b70 body=235 status=ok
// SIG undefined FUN_140585b70(void)

undefined8 FUN_140585b70(undefined8 *param_1,undefined8 *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  undefined2 *puVar6;
  longlong lVar7;
  
  iVar3 = *(int *)(param_2 + 1);
  if (1 < iVar3) {
    psVar4 = &DAT_143f3eda8;
    puVar6 = &DAT_143f3eda8;
    if (DAT_1461fcaf0 != 0) {
      puVar6 = DAT_1461fcae8;
    }
    if (iVar3 == 0) {
      psVar5 = &DAT_143f3eda8;
    }
    else {
      psVar5 = (short *)*param_2;
    }
    lVar7 = (longlong)puVar6 - (longlong)psVar5;
    do {
      sVar1 = *psVar5;
      sVar2 = *(short *)((longlong)psVar5 + lVar7);
      if (sVar1 != sVar2) break;
      psVar5 = psVar5 + 1;
    } while (sVar2 != 0);
    if (sVar1 != sVar2) {
      if (iVar3 == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = (undefined2 *)*param_2;
      }
      if (*(int *)(param_1 + 1) != 0) {
        psVar4 = (short *)*param_1;
      }
      lVar7 = (longlong)puVar6 - (longlong)psVar4;
      do {
        sVar1 = *psVar4;
        sVar2 = *(short *)((longlong)psVar4 + lVar7);
        if (sVar1 != sVar2) break;
        psVar4 = psVar4 + 1;
      } while (sVar2 != 0);
      if (sVar1 == sVar2) {
        return 0;
      }
      FString::operator=(param_1,param_2);
      return 1;
    }
  }
  if (*(int *)(param_1 + 1) < 2) {
    return 0;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  return 1;
}



// FUNCTION 140585ca0 FUN_140585ca0 body=8 status=ok
// SIG undefined FUN_140585ca0(void)

undefined8 FUN_140585ca0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



// FUNCTION 140585cb0 GetEffectType body=5 status=ok
// SIG undefined GetEffectType(void)

undefined8 UNiagaraSystem::GetEffectType(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// FUNCTION 140585cd0 FUN_140585cd0 body=8 status=ok
// SIG undefined FUN_140585cd0(void)

longlong FUN_140585cd0(longlong param_1)

{
  return param_1 + 0x150;
}



// FUNCTION 140585ce0 FUN_140585ce0 body=734 status=ok
// SIG undefined FUN_140585ce0(void)

void FUN_140585ce0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_res8;
  longlong *local_38;
  int local_30;
  longlong *local_28;
  int local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_38 = (longlong *)0x0;
  local_30 = 0;
  if (*(char *)(param_1 + 0x16d) == '\0') {
    plVar1 = (longlong *)FMemory::Realloc(0);
    if (plVar1 == (longlong *)0x0) {
      if (((local_30 != 0) && (local_38 != (longlong *)0x0)) &&
         ((**(code **)(*local_38 + 0x28))(local_38,0), local_38 != (longlong *)0x0)) {
        local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
      }
    }
    else {
      plVar1[1] = param_1;
      *plVar1 = (longlong)&PTR_GetPoolName_143fc4ae0;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar1[3] = lVar2;
      *plVar1 = (longlong)&PTR_GetPoolName_143fc4b28;
      FUN_14057b8c0(plVar1,&local_38);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      lVar2 = FMemory::Realloc(plVar1,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if ((local_30 != 0) && (local_38 != (longlong *)0x0)) {
      (**(code **)(*local_38 + 0x30))(local_38,&local_28);
    }
    if ((DAT_1468535b8 == (undefined8 *)0x0) &&
       (puVar3 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = (undefined8 *)0x0,
       puVar3 != (undefined8 *)0x0)) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 2;
      DAT_1468535b8 = puVar3;
    }
    puVar3 = DAT_1468535b8;
    _guard_xfg_dispatch_icall_nop(&local_res8);
  }
  else {
    plVar1 = (longlong *)FMemory::Realloc(0,0x20);
    if (plVar1 == (longlong *)0x0) {
      if (((local_30 != 0) && (local_38 != (longlong *)0x0)) &&
         ((**(code **)(*local_38 + 0x28))(local_38,0), local_38 != (longlong *)0x0)) {
        local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
      }
    }
    else {
      plVar1[1] = param_1;
      *plVar1 = (longlong)&PTR_GetPoolName_143fc4b70;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar1[3] = lVar2;
      *plVar1 = (longlong)&PTR_GetPoolName_143fc4bb8;
      FUN_14057bce0(plVar1,&local_38);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      lVar2 = FMemory::Realloc(plVar1,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if ((local_30 != 0) && (local_38 != (longlong *)0x0)) {
      (**(code **)(*local_38 + 0x30))(local_38,&local_28);
    }
    if ((DAT_1468535b8 == (undefined8 *)0x0) &&
       (puVar3 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = (undefined8 *)0x0,
       puVar3 != (undefined8 *)0x0)) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 2;
      DAT_1468535b8 = puVar3;
    }
    puVar3 = DAT_1468535b8;
    _guard_xfg_dispatch_icall_nop(&local_res8);
  }
  local_10 = 0;
  local_18 = 0;
  if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
    (**(code **)(*local_28 + 0x30))(local_28,&local_18);
  }
  FUN_140584410(puVar3,local_res8,&local_18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) {
      return;
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
  return;
}



// FUNCTION 140585fc0 FUN_140585fc0 body=891 status=ok
// SIG undefined FUN_140585fc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140585fc0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 auStack_128 [32];
  longlong *local_108;
  int local_100;
  longlong local_f8;
  longlong *local_f0;
  int local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined1 local_c8 [128];
  longlong local_48;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_108 = (longlong *)0x0;
  local_100 = 0;
  if (*(char *)(param_1 + 0x16d) == '\0') {
    plVar1 = (longlong *)FMemory::Realloc(0);
    if (plVar1 == (longlong *)0x0) {
      if (((local_100 != 0) && (local_108 != (longlong *)0x0)) &&
         ((**(code **)(*local_108 + 0x28))(local_108,0), local_108 != (longlong *)0x0)) {
        local_108 = (longlong *)FMemory::Realloc(local_108,0,0);
      }
    }
    else {
      plVar1[1] = param_1;
      *plVar1 = (longlong)&PTR_GetPoolName_143fc4ae0;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar1[3] = lVar2;
      *plVar1 = (longlong)&PTR_GetPoolName_143fc4b28;
      FUN_14057b8c0(plVar1,&local_108);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      lVar2 = FMemory::Realloc(plVar1,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
    local_f0 = (longlong *)0x0;
    local_e8 = 0;
    if ((local_100 != 0) && (local_108 != (longlong *)0x0)) {
      (**(code **)(*local_108 + 0x30))(local_108,&local_f0);
    }
    if ((DAT_1468535b8 == (undefined8 *)0x0) &&
       (puVar3 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = (undefined8 *)0x0,
       puVar3 != (undefined8 *)0x0)) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 2;
      DAT_1468535b8 = puVar3;
    }
    puVar3 = DAT_1468535b8;
    _guard_xfg_dispatch_icall_nop(&local_f8);
    if (*(int *)(param_2 + 1) != 0) {
      puVar5 = (undefined2 *)*param_2;
      goto LAB_14058625e;
    }
  }
  else {
    plVar1 = (longlong *)FMemory::Realloc(0,0x20);
    if (plVar1 == (longlong *)0x0) {
      if (((local_100 != 0) && (local_108 != (longlong *)0x0)) &&
         ((**(code **)(*local_108 + 0x28))(local_108,0), local_108 != (longlong *)0x0)) {
        local_108 = (longlong *)FMemory::Realloc(local_108,0,0);
      }
    }
    else {
      plVar1[1] = param_1;
      *plVar1 = (longlong)&PTR_GetPoolName_143fc4b70;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar1[3] = lVar2;
      *plVar1 = (longlong)&PTR_GetPoolName_143fc4bb8;
      FUN_14057bce0(plVar1,&local_108);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      lVar2 = FMemory::Realloc(plVar1,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
    local_f0 = (longlong *)0x0;
    local_e8 = 0;
    if ((local_100 != 0) && (local_108 != (longlong *)0x0)) {
      (**(code **)(*local_108 + 0x30))(local_108,&local_f0);
    }
    if ((DAT_1468535b8 == (undefined8 *)0x0) &&
       (puVar3 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = (undefined8 *)0x0,
       puVar3 != (undefined8 *)0x0)) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 2;
      DAT_1468535b8 = puVar3;
    }
    puVar3 = DAT_1468535b8;
    _guard_xfg_dispatch_icall_nop(&local_f8);
    if (*(int *)(param_2 + 1) != 0) {
      puVar5 = (undefined2 *)*param_2;
      goto LAB_14058625e;
    }
  }
  puVar5 = &DAT_143f3eda8;
LAB_14058625e:
  lVar2 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_c8,puVar5);
  uVar4 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar2 + 0x88));
  *(undefined8 *)(local_f8 + 0x30) = uVar4;
  if (local_48 != 0) {
    FMemory::Free();
  }
  local_d8 = 0;
  local_e0 = 0;
  if ((local_e8 != 0) && (local_f0 != (longlong *)0x0)) {
    (**(code **)(*local_f0 + 0x30))(local_f0,&local_e0);
  }
  FUN_140584410(puVar3,local_f8,&local_e0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_f0);
  if (local_100 != 0) {
    if (local_108 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_108 + 0x28))(local_108,0);
    if (local_108 != (longlong *)0x0) {
      local_108 = (longlong *)FMemory::Realloc(local_108,0,0);
    }
    local_100 = 0;
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free(local_108);
  }
  return;
}



// FUNCTION 140586340 FUN_140586340 body=607 status=ok
// SIG undefined FUN_140586340(void)

void FUN_140586340(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  uint *puVar15;
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
    lVar7 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar7;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar5) {
      uVar12 = 0;
      uVar14 = (ulonglong)uVar5;
      do {
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        uVar8 = (longlong)(int)*plVar2 - 1U & uVar12;
        uVar12 = uVar12 + 1;
        *(undefined4 *)((longlong)plVar11 + uVar8 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = puStack_38;
      }
      uVar5 = *puVar15;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar7 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar9 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar9;
        if (bVar4) goto LAB_14058646f;
        uVar5 = puVar15[lVar7 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar9 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iStack_54 = (iStack_50 - iVar9) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_14058646f:
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
        puVar13 = (undefined8 *)((longlong)iStack_2c * 0x78 + *param_1);
        if (*(int *)(puVar13 + 3) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)puVar13[2];
        }
        iVar9 = FUN_140438070(puVar10);
        if (*(int *)(puVar13 + 5) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)puVar13[4];
        }
        uVar5 = FUN_140438070(puVar10);
        if (*(int *)(puVar13 + 1) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)*puVar13;
        }
        uVar6 = FUN_140438070(puVar10);
        uVar5 = (int)*plVar2 - 1U & ((uVar5 ^ iVar9 * 0x18d) * 0x18d ^ uVar6);
        *(uint *)((longlong)puVar13 + 0x74) = uVar5;
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(undefined4 *)(puVar13 + 0xe) =
             *(undefined4 *)
              ((longlong)plVar11 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(int *)((longlong)plVar11 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 1405865a0 FUN_1405865a0 body=619 status=ok
// SIG undefined FUN_1405865a0(void)

void FUN_1405865a0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  uint *puVar15;
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
    lVar7 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar7;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar5) {
      uVar12 = 0;
      uVar14 = (ulonglong)uVar5;
      do {
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        uVar8 = (longlong)(int)*plVar2 - 1U & uVar12;
        uVar12 = uVar12 + 1;
        *(undefined4 *)((longlong)plVar11 + uVar8 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = puStack_38;
      }
      uVar5 = *puVar15;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar7 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar9 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar9;
        if (bVar4) goto LAB_1405866cf;
        uVar5 = puVar15[lVar7 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar9 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iStack_54 = (iStack_50 - iVar9) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_1405866cf:
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
        puVar13 = (undefined8 *)((longlong)iStack_2c * 0x68 + *param_1);
        if (*(int *)(puVar13 + 3) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)puVar13[2];
        }
        iVar9 = FUN_140438070(puVar10);
        if (*(int *)(puVar13 + 5) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)puVar13[4];
        }
        uVar5 = FUN_140438070(puVar10);
        if (*(int *)(puVar13 + 1) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)*puVar13;
        }
        uVar6 = FUN_140438070(puVar10);
        uVar5 = ((uint)*(byte *)(puVar13 + 6) ^ (uVar6 ^ (uVar5 ^ iVar9 * 0x18d) * 0x18d) * 0x18d) &
                (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar13 + 100) = uVar5;
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(undefined4 *)(puVar13 + 0xc) =
             *(undefined4 *)
              ((longlong)plVar11 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(int *)((longlong)plVar11 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 140586810 Rehash body=517 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<unsigned_char,TArray<FGuid,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<unsigned_char,TArray<FGuid,FDefaultAllocator>,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  byte *pbVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  int iStack_44;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar4 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar4 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar4) {
      uVar11 = 0;
      uVar12 = (ulonglong)uVar4;
      do {
        uVar8 = (longlong)(int)*plVar2 - 1U & uVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar8 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    iVar10 = 0;
    iStack_44 = 0;
    if (iVar3 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      uVar4 = *puVar13;
      iVar5 = 0;
      while (uVar4 == 0) {
        iVar10 = iVar10 + 0x20;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_14058694f;
        uVar4 = puVar13[(longlong)iVar5 + 1];
        iVar5 = iVar5 + 1;
      }
      uVar4 = -uVar4 & uVar4;
      iVar5 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uVar4 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      iStack_44 = (iVar10 - iVar5) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_14058694f:
        iStack_44 = iVar3;
      }
    }
    while (iStack_44 < iVar3) {
      pbVar9 = (byte *)((longlong)iStack_44 * 0x20 + *param_1);
      uVar4 = (int)*plVar2 - 1U & (uint)*pbVar9;
      *(uint *)(pbVar9 + 0x1c) = uVar4;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined4 *)(pbVar9 + 0x18) =
           *(undefined4 *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar4) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (ulonglong)uVar4) * 4) = iStack_44;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit();
      iVar3 = (int)param_1[5];
    }
  }
  return;
}



// FUNCTION 140586a20 FUN_140586a20 body=607 status=ok
// SIG undefined FUN_140586a20(void)

void FUN_140586a20(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint *puVar15;
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
    lVar7 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar7;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar13 = 0;
      uVar14 = (ulonglong)uVar5;
      do {
        uVar11 = (longlong)(int)*plVar2 - 1U & uVar13;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        uVar13 = uVar13 + 1;
        *(undefined4 *)((longlong)plVar8 + uVar11 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = puStack_38;
      }
      uVar5 = *puVar15;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar7 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar9 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar9;
        if (bVar4) goto LAB_140586b4f;
        uVar5 = puVar15[lVar7 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar9 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iStack_54 = (iStack_50 - iVar9) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_140586b4f:
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
        puVar12 = (undefined8 *)((longlong)iStack_2c * 0x68 + *param_1);
        if (*(int *)(puVar12 + 3) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)puVar12[2];
        }
        iVar9 = FUN_140438070(puVar10);
        if (*(int *)(puVar12 + 5) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)puVar12[4];
        }
        uVar5 = FUN_140438070(puVar10);
        if (*(int *)(puVar12 + 1) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)*puVar12;
        }
        uVar6 = FUN_140438070(puVar10);
        uVar5 = (int)*plVar2 - 1U & ((uVar5 ^ iVar9 * 0x18d) * 0x18d ^ uVar6);
        *(uint *)((longlong)puVar12 + 100) = uVar5;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(puVar12 + 0xc) =
             *(undefined4 *)
              ((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 140586c80 FUN_140586c80 body=331 status=ok
// SIG undefined FUN_140586c80(void)

undefined8 FUN_140586c80(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar4 = GetTypeHash(param_2);
  lVar7 = (longlong)(int)((int)param_1[9] - 1U & uVar4);
  plVar5 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar5 = param_1 + 7;
  }
  piVar6 = (int *)((longlong)plVar5 + lVar7 * 4);
  iVar1 = *(int *)((longlong)plVar5 + lVar7 * 4);
  while( true ) {
    if (iVar1 == -1) {
      return 0;
    }
    lVar7 = (longlong)iVar1 * 0x78 + *param_1;
    cVar3 = AccountId::operator==(lVar7,param_2);
    if (cVar3 != '\0') break;
    iVar1 = *(int *)(lVar7 + 0x70);
    piVar6 = (int *)(lVar7 + 0x70);
  }
  iVar1 = *piVar6;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar7 = *param_1;
    lVar9 = (longlong)iVar1 * 0x78;
    lVar8 = (longlong)(int)(*(uint *)(lVar9 + 0x74 + lVar7) & (int)param_1[9] - 1U);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    piVar6 = (int *)((longlong)plVar5 + lVar8 * 4);
    iVar2 = *(int *)((longlong)plVar5 + lVar8 * 4);
    while (iVar2 != -1) {
      if (iVar2 == iVar1) {
        *piVar6 = *(int *)(lVar9 + 0x70 + lVar7);
        break;
      }
      piVar6 = (int *)((longlong)iVar2 * 0x78 + 0x70 + lVar7);
      iVar2 = *piVar6;
    }
  }
  FUN_14056ec60((longlong)iVar1 * 0x78 + *param_1);
  TSparseArray<TSetElement<TTuple<unsigned_int,Audio::FMixerBus>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar1,1);
  return 1;
}



// FUNCTION 140586dd0 Remove body=331 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar4 = ::GetTypeHash(param_2);
  lVar7 = (longlong)(int)((int)param_1[9] - 1U & uVar4);
  plVar5 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar5 = param_1 + 7;
  }
  piVar6 = (int *)((longlong)plVar5 + lVar7 * 4);
  iVar1 = *(int *)((longlong)plVar5 + lVar7 * 4);
  while( true ) {
    if (iVar1 == -1) {
      return 0;
    }
    lVar7 = (longlong)iVar1 * 0x68 + *param_1;
    cVar3 = ChannelId::operator==(lVar7,param_2);
    if (cVar3 != '\0') break;
    iVar1 = *(int *)(lVar7 + 0x60);
    piVar6 = (int *)(lVar7 + 0x60);
  }
  iVar1 = *piVar6;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar7 = *param_1;
    lVar9 = (longlong)iVar1 * 0x68;
    lVar8 = (longlong)(int)(*(uint *)(lVar9 + 100 + lVar7) & (int)param_1[9] - 1U);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    piVar6 = (int *)((longlong)plVar5 + lVar8 * 4);
    iVar2 = *(int *)((longlong)plVar5 + lVar8 * 4);
    while (iVar2 != -1) {
      if (iVar2 == iVar1) {
        *piVar6 = *(int *)(lVar9 + 0x60 + lVar7);
        break;
      }
      piVar6 = (int *)((longlong)iVar2 * 0x68 + 0x60 + lVar7);
      iVar2 = *piVar6;
    }
  }
  FUN_14056ecc0((longlong)iVar1 * 0x68 + *param_1);
  TSparseArray<TSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar1,1);
  return 1;
}



// FUNCTION 140586f20 Remove body=390 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  int *piVar9;
  undefined8 *puVar10;
  longlong lVar11;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = (undefined2 *)*param_2;
  }
  uVar2 = FUN_140438070(puVar8);
  lVar7 = (longlong)(int)((int)param_1[9] - 1U & uVar2);
  plVar4 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar4 = param_1 + 7;
  }
  piVar9 = (int *)((longlong)plVar4 + lVar7 * 4);
  iVar3 = *(int *)((longlong)plVar4 + lVar7 * 4);
  while( true ) {
    if (iVar3 == -1) {
      return 0;
    }
    puVar10 = (undefined8 *)((longlong)iVar3 * 0x20 + *param_1);
    if (*(int *)(param_2 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*param_2;
    }
    if (*(int *)(puVar10 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*puVar10;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar8);
    if (iVar3 == 0) break;
    iVar3 = *(int *)(puVar10 + 3);
    piVar9 = (int *)(puVar10 + 3);
  }
  iVar3 = *piVar9;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar7 = *param_1;
    lVar11 = (longlong)iVar3 * 0x20;
    lVar6 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar11 + 0x1c + lVar7));
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    piVar9 = (int *)((longlong)plVar4 + lVar6 * 4);
    iVar1 = *(int *)((longlong)plVar4 + lVar6 * 4);
    while (iVar1 != -1) {
      if (iVar1 == iVar3) {
        *piVar9 = *(int *)(lVar11 + 0x18 + lVar7);
        break;
      }
      piVar9 = (int *)(lVar7 + 0x18 + (longlong)iVar1 * 0x20);
      iVar1 = *piVar9;
    }
  }
  if (*(longlong *)((longlong)iVar3 * 0x20 + *param_1) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar3,1);
  return 1;
}



// FUNCTION 1405870b0 Remove body=331 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar4 = ::GetTypeHash(param_2);
  lVar7 = (longlong)(int)((int)param_1[9] - 1U & uVar4);
  plVar5 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar5 = param_1 + 7;
  }
  piVar6 = (int *)((longlong)plVar5 + lVar7 * 4);
  iVar1 = *(int *)((longlong)plVar5 + lVar7 * 4);
  while( true ) {
    if (iVar1 == -1) {
      return 0;
    }
    lVar7 = (longlong)iVar1 * 0x68 + *param_1;
    cVar3 = AccountId::operator==(lVar7,param_2);
    if (cVar3 != '\0') break;
    iVar1 = *(int *)(lVar7 + 0x60);
    piVar6 = (int *)(lVar7 + 0x60);
  }
  iVar1 = *piVar6;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar7 = *param_1;
    lVar9 = (longlong)iVar1 * 0x68;
    lVar8 = (longlong)(int)(*(uint *)(lVar9 + 100 + lVar7) & (int)param_1[9] - 1U);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    piVar6 = (int *)((longlong)plVar5 + lVar8 * 4);
    iVar2 = *(int *)((longlong)plVar5 + lVar8 * 4);
    while (iVar2 != -1) {
      if (iVar2 == iVar1) {
        *piVar6 = *(int *)(lVar9 + 0x60 + lVar7);
        break;
      }
      piVar6 = (int *)((longlong)iVar2 * 0x68 + 0x60 + lVar7);
      iVar2 = *piVar6;
    }
  }
  FUN_14056ed50((longlong)iVar1 * 0x68 + *param_1);
  TSparseArray<TSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar1,1);
  return 1;
}



// FUNCTION 140587200 RemoveAtUninitialized body=175 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
    lVar8 = uVar10 * 0x68;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x68 + *param_1) = iVar9;
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
      lVar8 = lVar8 + 0x68;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1405872c0 FUN_1405872c0 body=616 status=ok
// SIG undefined FUN_1405872c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_1405872c0(longlong *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_108 [32];
  longlong local_e8 [2];
  undefined4 local_d8;
  undefined1 local_c8 [128];
  longlong local_48;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  cVar2 = (**(code **)(*param_1 + 0x10))();
  if ((cVar2 == '\x02') && ((char)param_1[0x2e] == '\x01')) {
    puVar5 = (undefined8 *)0x0;
    if ((DAT_1468535b8 == (undefined8 *)0x0) &&
       (puVar3 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = puVar5,
       puVar3 != (undefined8 *)0x0)) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 2;
      DAT_1468535b8 = puVar3;
    }
    puVar3 = DAT_1468535b8;
    _guard_xfg_dispatch_icall_nop(local_e8);
    if (1 < (int)param_1[0x35]) {
      lVar4 = TStringConversion<FTCHARToUTF8_Convert,128>::
              TStringConversion<FTCHARToUTF8_Convert,128>(local_c8,param_1[0x34]);
      puVar5 = (undefined8 *)_guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar4 + 0x88));
      if (local_48 != 0) {
        FMemory::Free();
      }
    }
    fVar1 = param_2[1];
    *(undefined8 **)(local_e8[0] + 0x30) = puVar5;
    local_e8[1] = 0;
    local_d8 = 0;
    *(double *)(local_e8[0] + 0x38) = (double)fVar1;
    *(double *)(local_e8[0] + 0x40) = (double)param_2[2];
    *(double *)(local_e8[0] + 0x48) = (double)-*param_2;
    *(double *)(local_e8[0] + 0xb0) = (double)param_3[1];
    *(double *)(local_e8[0] + 0xb8) = (double)param_3[2];
    *(double *)(local_e8[0] + 0xc0) = (double)-*param_3;
    *(double *)(local_e8[0] + 0xe0) = (double)param_4[1];
    *(double *)(local_e8[0] + 0xe8) = (double)param_4[2];
    *(double *)(local_e8[0] + 0xf0) = (double)-*param_4;
    *(double *)(local_e8[0] + 0xf8) = (double)param_5[1];
    *(double *)(local_e8[0] + 0x100) = (double)param_5[2];
    *(double *)(local_e8[0] + 0x108) = (double)-*param_5;
    *(undefined4 *)(local_e8[0] + 300) = 1;
    uVar6 = FUN_140584410(puVar3,local_e8[0],local_e8 + 1);
  }
  else {
    uVar6 = 0x3fb;
  }
  return uVar6;
}



// FUNCTION 140587530 FUN_140587530 body=615 status=ok
// SIG undefined FUN_140587530(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140587530(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong **pplVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined1 auStack_138 [32];
  longlong *local_118;
  int local_110;
  undefined4 local_108 [2];
  longlong local_100;
  longlong local_f8;
  longlong local_f0 [3];
  undefined1 local_d8 [128];
  longlong local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  _guard_xfg_dispatch_icall_nop(&local_100);
  puVar7 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  lVar1 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_d8,puVar6);
  uVar2 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar1 + 0x88));
  *(undefined8 *)(local_100 + 0x38) = uVar2;
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_3 + 1) != 0) {
    puVar7 = (undefined2 *)*param_3;
  }
  lVar1 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_d8,puVar7);
  uVar2 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar1 + 0x88));
  *(undefined8 *)(local_100 + 0x30) = uVar2;
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_118 = (longlong *)0x0;
  local_110 = 0;
  local_f8 = param_1;
  FString::FString(local_f0,param_2);
  plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar3 == (longlong *)0x0) {
    if (((local_110 != 0) && (local_118 != (longlong *)0x0)) &&
       ((**(code **)(*local_118 + 0x28))(local_118,0), local_118 != (longlong *)0x0)) {
      local_118 = (longlong *)FMemory::Realloc(local_118,0,0);
    }
  }
  else {
    *plVar3 = (longlong)&PTR_GetPoolName_143fc4a50;
    plVar3[1] = local_f8;
    FString::FString(plVar3 + 2,local_f0);
    lVar1 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar1;
    *plVar3 = (longlong)&PTR_GetPoolName_143fc4a98;
    FUN_14057bd30(plVar3,&local_118);
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar1 = FMemory::Realloc(plVar3,0,0);
    if (lVar1 != 0) {
      FMemory::Free(lVar1);
    }
  }
  if (local_f0[0] != 0) {
    FMemory::Free();
  }
  pplVar4 = (longlong **)operator_new(0x10);
  if (pplVar4 == (longlong **)0x0) {
    pplVar4 = (longlong **)0x0;
  }
  else {
    *pplVar4 = (longlong *)0x0;
    *(undefined4 *)(pplVar4 + 1) = 0;
    if (((&local_118 != pplVar4) && (local_110 != 0)) && (local_118 != (longlong *)0x0)) {
      (**(code **)(*local_118 + 0x30))(local_118,pplVar4);
    }
  }
  *(longlong ***)(local_100 + 0x28) = pplVar4;
  local_108[0] = 0;
  uVar5 = _guard_xfg_dispatch_icall_nop(local_100,local_108);
  if (local_110 != 0) {
    if (local_118 == (longlong *)0x0) {
      return uVar5;
    }
    (**(code **)(*local_118 + 0x28))(local_118,0);
    if (local_118 != (longlong *)0x0) {
      local_118 = (longlong *)FMemory::Realloc(local_118,0,0);
    }
    local_110 = 0;
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free(local_118);
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1405877a0 FUN_1405877a0 body=615 status=ok
// SIG undefined FUN_1405877a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1405877a0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong **pplVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined1 auStack_138 [32];
  longlong *local_118;
  int local_110;
  undefined4 local_108 [2];
  longlong local_100;
  longlong local_f8;
  longlong local_f0 [3];
  undefined1 local_d8 [128];
  longlong local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  _guard_xfg_dispatch_icall_nop(&local_100);
  puVar7 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  lVar1 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_d8,puVar6);
  uVar2 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar1 + 0x88));
  *(undefined8 *)(local_100 + 0x38) = uVar2;
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_3 + 1) != 0) {
    puVar7 = (undefined2 *)*param_3;
  }
  lVar1 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_d8,puVar7);
  uVar2 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar1 + 0x88));
  *(undefined8 *)(local_100 + 0x30) = uVar2;
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_118 = (longlong *)0x0;
  local_110 = 0;
  local_f8 = param_1;
  FString::FString(local_f0,param_2);
  plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar3 == (longlong *)0x0) {
    if (((local_110 != 0) && (local_118 != (longlong *)0x0)) &&
       ((**(code **)(*local_118 + 0x28))(local_118,0), local_118 != (longlong *)0x0)) {
      local_118 = (longlong *)FMemory::Realloc(local_118,0,0);
    }
  }
  else {
    *plVar3 = (longlong)&PTR_GetPoolName_143fc4a50;
    plVar3[1] = local_f8;
    FString::FString(plVar3 + 2,local_f0);
    lVar1 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar1;
    *plVar3 = (longlong)&PTR_GetPoolName_143fc4a98;
    FUN_14057bd30(plVar3,&local_118);
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar1 = FMemory::Realloc(plVar3,0,0);
    if (lVar1 != 0) {
      FMemory::Free(lVar1);
    }
  }
  if (local_f0[0] != 0) {
    FMemory::Free();
  }
  pplVar4 = (longlong **)operator_new(0x10);
  if (pplVar4 == (longlong **)0x0) {
    pplVar4 = (longlong **)0x0;
  }
  else {
    *pplVar4 = (longlong *)0x0;
    *(undefined4 *)(pplVar4 + 1) = 0;
    if (((&local_118 != pplVar4) && (local_110 != 0)) && (local_118 != (longlong *)0x0)) {
      (**(code **)(*local_118 + 0x30))(local_118,pplVar4);
    }
  }
  *(longlong ***)(local_100 + 0x28) = pplVar4;
  local_108[0] = 0;
  uVar5 = _guard_xfg_dispatch_icall_nop(local_100,local_108);
  if (local_110 != 0) {
    if (local_118 == (longlong *)0x0) {
      return uVar5;
    }
    (**(code **)(*local_118 + 0x28))(local_118,0);
    if (local_118 != (longlong *)0x0) {
      local_118 = (longlong *)FMemory::Realloc(local_118,0,0);
    }
    local_110 = 0;
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free(local_118);
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 140587a10 FUN_140587a10 body=902 status=ok
// SIG undefined FUN_140587a10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_140587a10(longlong param_1,longlong *param_2,longlong **param_3)

{
  char cVar1;
  void *_Src;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_138 [32];
  longlong *local_118;
  int local_110;
  longlong *local_108;
  int local_100;
  longlong local_f8;
  longlong local_f0;
  longlong *local_e8;
  int local_e0;
  undefined1 local_d8 [128];
  longlong local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  plVar8 = (longlong *)0x0;
  local_118 = (longlong *)0x0;
  local_110 = 0;
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  local_f0 = param_1;
  if (((param_3 != &local_e8) && (*(int *)(param_3 + 1) != 0)) &&
     (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x30))(plVar3,&local_e8);
  }
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 == (longlong *)0x0) {
    if (((local_110 != 0) && (local_118 != (longlong *)0x0)) &&
       ((**(code **)(*local_118 + 0x28))(local_118,0), local_118 != (longlong *)0x0)) {
      local_118 = (longlong *)FMemory::Realloc(local_118,0,0);
    }
  }
  else {
    *plVar3 = (longlong)&PTR_GetPoolName_143fc49c0;
    plVar3[1] = local_f0;
    plVar3[2] = 0;
    *(undefined4 *)(plVar3 + 3) = 0;
    if (((&local_e8 != (longlong **)(plVar3 + 2)) && (local_e0 != 0)) &&
       (local_e8 != (longlong *)0x0)) {
      (**(code **)(*local_e8 + 0x30))();
    }
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143fc4a08;
    FUN_14057bbd0(plVar3,&local_118);
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar4 = FMemory::Realloc(plVar3,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_e8);
  cVar1 = (char)param_2[5];
  if (cVar1 == '\x02') {
    puVar5 = &DAT_1461fcaf8;
  }
  else if (cVar1 == '\x03') {
    puVar5 = &DAT_1461fcb08;
  }
  else if (cVar1 == '\0') {
    puVar5 = &DAT_1461fcae8;
  }
  else {
    puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2);
  }
  local_100 = *(int *)(puVar5 + 1);
  lVar4 = (longlong)local_100;
  _Src = (void *)*puVar5;
  local_108 = (longlong *)0x0;
  plVar3 = plVar8;
  iVar9 = local_100;
  if (local_100 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_108,local_100,0);
    plVar3 = local_108;
    _guard_xfg_dispatch_icall_nop(local_108,_Src,lVar4 * 2);
    iVar9 = local_100;
  }
  local_108 = (longlong *)0x0;
  local_100 = 0;
  if (*(char *)(param_1 + 0x16d) == '\0') {
    if ((local_110 != 0) && (local_118 != (longlong *)0x0)) {
      (**(code **)(*local_118 + 0x30))(local_118,&local_108);
    }
    if ((DAT_1468535b8 == (longlong *)0x0) &&
       (plVar6 = (longlong *)operator_new(0x18), DAT_1468535b8 = plVar8, plVar6 != (longlong *)0x0))
    {
      *plVar6 = 0;
      plVar6[1] = 0;
      plVar6[2] = 2;
      DAT_1468535b8 = plVar6;
    }
    plVar8 = DAT_1468535b8;
    _guard_xfg_dispatch_icall_nop(&local_f8);
  }
  else {
    if ((local_110 != 0) && (local_118 != (longlong *)0x0)) {
      (**(code **)(*local_118 + 0x30))(local_118,&local_108);
    }
    if ((DAT_1468535b8 == (longlong *)0x0) &&
       (plVar6 = (longlong *)operator_new(0x18), DAT_1468535b8 = plVar8, plVar6 != (longlong *)0x0))
    {
      *plVar6 = 0;
      plVar6[1] = 0;
      plVar6[2] = 2;
      DAT_1468535b8 = plVar6;
    }
    plVar8 = DAT_1468535b8;
    _guard_xfg_dispatch_icall_nop(&local_f8);
  }
  plVar6 = (longlong *)&DAT_143f3eda8;
  if (iVar9 != 0) {
    plVar6 = plVar3;
  }
  lVar4 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_d8,plVar6);
  uVar7 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar4 + 0x88));
  *(undefined8 *)(local_f8 + 0x30) = uVar7;
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_e8 = (longlong *)((ulonglong)local_e8 & 0xffffffff00000000);
  local_f0 = 0;
  if ((local_100 != 0) && (local_108 != (longlong *)0x0)) {
    (**(code **)(*local_108 + 0x30))(local_108,&local_f0);
  }
  uVar2 = FUN_140584410(plVar8,local_f8,&local_f0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_108);
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  if (local_110 != 0) {
    if (local_118 == (longlong *)0x0) {
      return uVar2;
    }
    (**(code **)(*local_118 + 0x28))(local_118,0);
    if (local_118 != (longlong *)0x0) {
      local_118 = (longlong *)FMemory::Realloc(local_118,0,0);
    }
    local_110 = 0;
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free(local_118);
  }
  return uVar2;
}



// FUNCTION 140587da0 FUN_140587da0 body=90 status=ok
// SIG undefined FUN_140587da0(void)

void FUN_140587da0(longlong param_1,char param_2)

{
  undefined **local_28;
  char local_20;
  longlong local_18;
  
  if (param_2 != *(char *)(param_1 + 0xe0)) {
    *(char *)(param_1 + 0xe0) = param_2;
    local_28 = &PTR_FUN_143fc45e0;
    local_20 = param_2;
    local_18 = param_1;
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 8,&local_28);
    if (param_2 == '\x02') {
      FUN_14057ae10(param_1);
    }
  }
  return;
}



// FUNCTION 140587e00 SetChannelState body=58 status=ok
// SIG undefined SetChannelState(void)

void ChannelSession::SetChannelState(longlong param_1,char param_2)

{
  undefined **local_28;
  char local_20;
  longlong local_18;
  
  if (param_2 != *(char *)(param_1 + 0xe2)) {
    *(char *)(param_1 + 0xe2) = param_2;
    local_28 = &PTR_FUN_143fc45e0;
    local_20 = param_2;
    local_18 = param_1;
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x38,&local_28);
  }
  return;
}



// FUNCTION 140587e40 FUN_140587e40 body=1020 status=ok
// SIG undefined FUN_140587e40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_140587e40(longlong param_1,byte *param_2)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  longlong *plVar15;
  undefined1 auStack_178 [32];
  longlong *local_158;
  int local_150;
  longlong local_148 [2];
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined1 local_120 [8];
  longlong *local_118;
  longlong *local_110;
  longlong local_100 [3];
  undefined1 local_e8 [128];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  if (*(byte *)(param_1 + 0x298) == *param_2) {
    puVar13 = &DAT_143f3eda8;
    if (*(int *)(param_2 + 0x10) == 0) {
      puVar14 = &DAT_143f3eda8;
    }
    else {
      puVar14 = *(undefined2 **)(param_2 + 8);
    }
    if (*(int *)(param_1 + 0x2a8) != 0) {
      puVar13 = *(undefined2 **)(param_1 + 0x2a0);
    }
    uVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13,puVar14);
    if ((int)uVar7 == 0) {
      return uVar7;
    }
  }
  local_158 = (longlong *)0x0;
  local_150 = 0;
  plVar8 = (longlong *)
           TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 0x80,local_120);
  plVar4 = (longlong *)plVar8[1];
  lVar9 = *plVar8;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_118 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar1 = (int *)((longlong)local_118 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_118 + 8))(local_118,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar4 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar8 = (longlong *)FMemory::Realloc(0,0x30);
  local_110 = plVar8;
  if (plVar8 == (longlong *)0x0) {
    plVar15 = plVar4;
    if (((local_150 != 0) && (local_158 != (longlong *)0x0)) &&
       ((**(code **)(*local_158 + 0x28))(local_158,0), local_158 != (longlong *)0x0)) {
      local_158 = (longlong *)FMemory::Realloc(local_158,0,0);
    }
  }
  else {
    *plVar8 = (longlong)&PTR_GetPoolName_143fc1d80;
    plVar8[1] = param_1;
    plVar8[2] = lVar9;
    plVar8[3] = (longlong)plVar4;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar8[5] = lVar9;
    *plVar8 = (longlong)&PTR_GetPoolName_143fc1dc8;
    TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(ovrMessage_*,bool),<lambda_1e98f5a82a74eb380ee7c9b8dfb84486>_>
    ::CreateCopy(plVar8,&local_158);
    plVar15 = (longlong *)0x0;
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    local_110 = (longlong *)FMemory::Realloc(plVar8,0,0);
    if (local_110 != (longlong *)0x0) {
      FMemory::Free(local_110);
    }
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar15 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  bVar3 = *param_2;
  local_130 = 0;
  local_128 = 0;
  if ((DAT_1468535b8 == (undefined8 *)0x0) &&
     (puVar10 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = (undefined8 *)0x0,
     puVar10 != (undefined8 *)0x0)) {
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 2;
    DAT_1468535b8 = puVar10;
  }
  puVar10 = DAT_1468535b8;
  puVar11 = (undefined8 *)AccountId::ToString(param_1 + 0x90,local_100);
  _guard_xfg_dispatch_icall_nop(local_148);
  if (*(int *)(puVar11 + 1) < 2) {
    uVar12 = 0;
  }
  else {
    lVar9 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                      (local_e8,*puVar11);
    uVar12 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar9 + 0x88));
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  *(undefined8 *)(local_148[0] + 0x30) = uVar12;
  uVar12 = vx_fstrdup(param_2 + 8);
  *(undefined8 *)(local_148[0] + 0x40) = uVar12;
  local_148[1] = 0;
  local_138 = 0;
  *(uint *)(local_148[0] + 0x38) = (uint)bVar3;
  uVar6 = FUN_140584410(puVar10,local_148[0],local_148 + 1);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_130);
  if (local_100[0] != 0) {
    FMemory::Free();
  }
  if (uVar6 == 0) {
    *(byte *)(param_1 + 0x298) = *param_2;
    FString::operator=(param_1 + 0x2a0,param_2 + 8);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if (local_150 != 0) {
    if (local_158 == (longlong *)0x0) {
      return (ulonglong)uVar6;
    }
    (**(code **)(*local_158 + 0x28))(local_158,0);
    if (local_158 != (longlong *)0x0) {
      local_158 = (longlong *)FMemory::Realloc(local_158,0,0);
    }
    local_150 = 0;
  }
  if (local_158 != (longlong *)0x0) {
    FMemory::Free(local_158);
  }
  return (ulonglong)uVar6;
}



// FUNCTION 140588240 SetCurrentVoice body=229 status=ok
// SIG undefined SetCurrentVoice(void)

undefined8 TextToSpeech::SetCurrentVoice(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  int local_res8 [2];
  
  uVar3 = (**(code **)(*param_2 + 8))(param_2);
  uVar4 = (**(code **)(*param_1 + 8))(param_1);
  piVar5 = (int *)TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
                  ::FindId(uVar4,local_res8,uVar3);
  if (*piVar5 == -1) {
    return 0;
  }
  uVar3 = (**(code **)(*param_2 + 8))(param_2);
  TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0xb,local_res8,uVar3);
  puVar8 = (undefined8 *)0x0;
  if (local_res8[0] != -1) {
    puVar8 = (undefined8 *)((longlong)local_res8[0] * 0x20 + param_1[0xb]);
  }
  puVar6 = puVar8 + 2;
  if (puVar8 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  plVar2 = (longlong *)*puVar6;
  uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
  FString::operator=(param_1 + 0x18,uVar3);
  puVar7 = (undefined4 *)(**(code **)(*plVar2 + 0x10))(plVar2);
  uVar1 = *puVar7;
  *(bool *)((longlong)param_1 + 0xd4) = 1 < (int)param_1[0x19];
  *(undefined4 *)(param_1 + 0x1a) = uVar1;
  return 1;
}



// FUNCTION 140588330 FUN_140588330 body=504 status=ok
// SIG undefined FUN_140588330(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140588330(longlong param_1,byte param_2)

{
  void *_Src;
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  int local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8 [2];
  undefined1 local_d8 [128];
  longlong local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (*(byte *)(param_1 + 0x1c) != param_2) {
    local_110 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x1a8);
    lVar5 = (longlong)local_110;
    _Src = *(void **)(*(longlong *)(param_1 + 0x38) + 0x1a0);
    puVar4 = (undefined8 *)0x0;
    local_f8 = 0;
    local_f0 = 0;
    local_118 = (undefined8 *)0x0;
    puVar6 = puVar4;
    if (local_110 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_118,local_110,0);
      puVar6 = local_118;
      _guard_xfg_dispatch_icall_nop(local_118,_Src,lVar5 * 2);
    }
    iVar1 = local_110;
    if ((DAT_1468535b8 == (undefined8 *)0x0) &&
       (puVar2 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = puVar4,
       puVar2 != (undefined8 *)0x0)) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 2;
      DAT_1468535b8 = puVar2;
    }
    puVar2 = DAT_1468535b8;
    uVar3 = AccountId::ToString(param_1 + 0x40,local_e8);
    _guard_xfg_dispatch_icall_nop(&local_118);
    if (1 < iVar1) {
      puVar4 = (undefined8 *)&DAT_143f3eda8;
      if (iVar1 != 0) {
        puVar4 = puVar6;
      }
      lVar5 = TStringConversion<FTCHARToUTF8_Convert,128>::
              TStringConversion<FTCHARToUTF8_Convert,128>(local_d8,puVar4);
      puVar4 = (undefined8 *)_guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar5 + 0x88));
      if (local_58 != 0) {
        FMemory::Free();
      }
    }
    local_118[6] = puVar4;
    uVar3 = vx_fstrdup(uVar3);
    local_108 = 0;
    local_100 = 0;
    local_118[7] = uVar3;
    *(uint *)(local_118 + 8) = (uint)param_2;
    iVar1 = FUN_140584410(puVar2,local_118,&local_108);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_f8);
    if (puVar6 != (undefined8 *)0x0) {
      FMemory::Free(puVar6);
    }
    if (local_e8[0] != 0) {
      FMemory::Free();
    }
    if (iVar1 == 0) {
      *(byte *)(param_1 + 0x1c) = param_2;
    }
  }
  return;
}



// FUNCTION 140588530 FUN_140588530 body=372 status=ok
// SIG undefined FUN_140588530(void)

int FUN_140588530(longlong param_1,int param_2)

{
  void *_Src;
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong local_res18;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28 [2];
  
  if (100 < param_2 + 0x32U) {
    return 0x3f0;
  }
  if (*(int *)(param_1 + 0x18) != param_2) {
    local_58 = (void *)0x0;
    local_50 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x1a8);
    lVar5 = (longlong)local_50;
    _Src = *(void **)(*(longlong *)(param_1 + 0x38) + 0x1a0);
    local_38 = 0;
    local_30 = 0;
    if (local_50 == 0) {
      local_4c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
      _guard_xfg_dispatch_icall_nop(local_58,_Src,lVar5 * 2);
    }
    uVar2 = AccountId::ToString(param_1 + 0x40,local_28);
    uVar3 = VivoxNativeSdk::Get();
    _guard_xfg_dispatch_icall_nop(&local_res18);
    uVar4 = vx_fstrdup(&local_58);
    *(undefined8 *)(local_res18 + 0x30) = uVar4;
    uVar2 = vx_fstrdup(uVar2);
    local_48 = 0;
    local_40 = 0;
    *(undefined8 *)(local_res18 + 0x38) = uVar2;
    *(uint *)(local_res18 + 0x40) = param_2 + 0x32U;
    iVar1 = FUN_140584410(uVar3,local_res18,&local_48);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
    if (local_58 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    *(int *)(param_1 + 0x18) = param_2;
  }
  return 0;
}



// FUNCTION 1405886b0 FUN_1405886b0 body=306 status=ok
// SIG undefined FUN_1405886b0(void)

void FUN_1405886b0(longlong param_1,byte param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong local_res8;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0x16d) == '\0') {
    local_18 = 0;
    local_10 = 0;
    if ((DAT_1468535b8 == (undefined8 *)0x0) &&
       (puVar2 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = (undefined8 *)0x0,
       puVar2 != (undefined8 *)0x0)) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 2;
      DAT_1468535b8 = puVar2;
    }
    puVar2 = DAT_1468535b8;
    _guard_xfg_dispatch_icall_nop(&local_res8);
    local_28 = 0;
    local_20 = 0;
    *(uint *)(local_res8 + 0x38) = (uint)param_2;
    iVar1 = FUN_140584410(puVar2,local_res8,&local_28);
    puVar2 = &local_18;
  }
  else {
    local_28 = 0;
    local_20 = 0;
    if ((DAT_1468535b8 == (undefined8 *)0x0) &&
       (puVar2 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = (undefined8 *)0x0,
       puVar2 != (undefined8 *)0x0)) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 2;
      DAT_1468535b8 = puVar2;
    }
    puVar2 = DAT_1468535b8;
    _guard_xfg_dispatch_icall_nop(&local_res8);
    local_18 = 0;
    local_10 = 0;
    *(uint *)(local_res8 + 0x38) = (uint)param_2;
    iVar1 = FUN_140584410(puVar2,local_res8,&local_18);
    puVar2 = &local_28;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar2);
  if (iVar1 == 0) {
    *(byte *)(param_1 + 0x16c) = param_2;
  }
  return;
}



// FUNCTION 1405887f0 FUN_1405887f0 body=417 status=ok
// SIG undefined FUN_1405887f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_1405887f0(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_108 [32];
  longlong local_e8 [2];
  undefined4 local_d8;
  longlong local_d0 [3];
  undefined1 local_b8 [128];
  longlong local_38;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (param_2 == *(char *)(param_1 + 0x2c1)) {
    return 0;
  }
  *(char *)(param_1 + 0x2c1) = param_2;
  if (*(char *)(param_1 + 0x290) != '\x02') {
    if (*(char *)(param_1 + 0x290) != '\x01') {
      return 0;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x2b0) + 0x488) < 2) {
      return 0;
    }
  }
  puVar4 = (undefined8 *)0x0;
  uVar5 = 0;
  if (param_2 != '\0') {
    if (param_2 == '\x01') goto LAB_140588893;
    if (param_2 == '\x02') {
      uVar5 = 0x32;
      goto LAB_140588893;
    }
    if (param_2 == '\x03') {
      uVar5 = 10;
      goto LAB_140588893;
    }
    if (param_2 == '\x04') {
      uVar5 = 5;
      goto LAB_140588893;
    }
  }
  uVar5 = 100;
LAB_140588893:
  if ((DAT_1468535b8 == (undefined8 *)0x0) &&
     (puVar1 = (undefined8 *)operator_new(0x18), DAT_1468535b8 = puVar4, puVar1 != (undefined8 *)0x0
     )) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 2;
    DAT_1468535b8 = puVar1;
  }
  puVar1 = DAT_1468535b8;
  puVar2 = (undefined8 *)AccountId::ToString(param_1 + 0x90,local_d0);
  _guard_xfg_dispatch_icall_nop(local_e8);
  if (1 < *(int *)(puVar2 + 1)) {
    lVar3 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                      (local_b8,*puVar2);
    puVar4 = (undefined8 *)_guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar3 + 0x88));
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  local_e8[1] = 0;
  local_d8 = 0;
  *(undefined8 **)(local_e8[0] + 0x30) = puVar4;
  *(undefined4 *)(local_e8[0] + 0x3c) = uVar5;
  uVar5 = FUN_140584410(puVar1,local_e8[0],local_e8 + 1);
  if (local_d0[0] != 0) {
    FMemory::Free();
    return uVar5;
  }
  return uVar5;
}



// FUNCTION 1405889a0 FUN_1405889a0 body=177 status=ok
// SIG undefined FUN_1405889a0(void)

void FUN_1405889a0(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_2 != *(char *)(param_1 + 0x290)) {
    bVar3 = false;
    *(char *)(param_1 + 0x290) = param_2;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    iVar5 = *(int *)(param_1 + 0x40) + -1;
    iVar6 = *(int *)(param_1 + 0x4c);
    lVar8 = (longlong)iVar5;
    if (-1 < iVar5) {
      lVar7 = lVar8 << 4;
      bVar3 = false;
      do {
        lVar1 = *(longlong *)(param_1 + 0x38);
        if (((*(int *)(lVar7 + 8 + lVar1) == 0) ||
            (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2), cVar4 == '\0')) {
          bVar3 = true;
        }
        lVar7 = lVar7 + -0x10;
        lVar8 = lVar8 + -1;
      } while (-1 < lVar8);
      iVar6 = *(int *)(param_1 + 0x4c);
    }
    *(int *)(param_1 + 0x4c) = iVar6 + -1;
    if (bVar3) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x38),0);
    }
  }
  return;
}



// FUNCTION 140588a60 FUN_140588a60 body=90 status=ok
// SIG undefined FUN_140588a60(void)

void FUN_140588a60(longlong param_1,char param_2)

{
  undefined **local_28;
  char local_20;
  longlong local_18;
  
  if (param_2 != *(char *)(param_1 + 0xe1)) {
    *(char *)(param_1 + 0xe1) = param_2;
    local_28 = &PTR_FUN_143fc45e0;
    local_20 = param_2;
    local_18 = param_1;
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x20,&local_28);
    if (param_2 == '\x02') {
      FUN_14057ae10(param_1);
    }
  }
  return;
}



// FUNCTION 140588ac0 FUN_140588ac0 body=662 status=ok
// SIG undefined FUN_140588ac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140588ac0(longlong param_1)

{
  char cVar1;
  void *_Src;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  int local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [128];
  longlong local_48;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  cVar1 = *(char *)(param_1 + 0x2c0);
  if (cVar1 == '\0') {
    if ((DAT_1468535b8 == (longlong *)0x0) &&
       (plVar4 = (longlong *)operator_new(0x18), DAT_1468535b8 = (longlong *)0x0,
       plVar4 != (longlong *)0x0)) {
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = 2;
      DAT_1468535b8 = plVar4;
    }
    plVar4 = DAT_1468535b8;
    _guard_xfg_dispatch_icall_nop(&local_e8);
  }
  else {
    if (cVar1 == '\x01') {
      TSet<TTuple<ChannelId,TSharedPtr<IChannelSession,0>_>,TDefaultMapHashableKeyFuncs<ChannelId,TSharedPtr<IChannelSession,0>,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x100,&local_e8,param_1 + 0x2c8);
      plVar9 = (longlong *)0x0;
      plVar4 = plVar9;
      if ((int)local_e8 != -1) {
        plVar4 = (longlong *)((longlong)(int)local_e8 * 0x68 + *(longlong *)(param_1 + 0x100));
      }
      local_e8 = (longlong *)0x0;
      plVar5 = plVar4 + 10;
      if (plVar4 == (longlong *)0x0) {
        plVar5 = plVar9;
      }
      local_e0 = *(int *)(*plVar5 + 0x1a8);
      lVar6 = (longlong)local_e0;
      _Src = *(void **)(*plVar5 + 0x1a0);
      plVar4 = plVar9;
      if (local_e0 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,local_e0,0);
        plVar4 = local_e8;
        _guard_xfg_dispatch_icall_nop(local_e8,_Src,lVar6 * 2);
      }
      iVar2 = local_e0;
      if ((DAT_1468535b8 == (longlong *)0x0) &&
         (plVar5 = (longlong *)operator_new(0x18), DAT_1468535b8 = plVar9, plVar5 != (longlong *)0x0
         )) {
        *plVar5 = 0;
        plVar5[1] = 0;
        plVar5[2] = 2;
        DAT_1468535b8 = plVar5;
      }
      plVar9 = DAT_1468535b8;
      _guard_xfg_dispatch_icall_nop(&local_e8);
      plVar5 = (longlong *)&DAT_143f3eda8;
      if (iVar2 != 0) {
        plVar5 = plVar4;
      }
      lVar6 = TStringConversion<FTCHARToUTF8_Convert,128>::
              TStringConversion<FTCHARToUTF8_Convert,128>(local_c8,plVar5);
      lVar6 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar6 + 0x88));
      local_e8[6] = lVar6;
      if (local_48 != 0) {
        FMemory::Free();
      }
      local_d8 = 0;
      local_d0 = 0;
      uVar3 = FUN_140584410(plVar9,local_e8,&local_d8);
      if (plVar4 == (longlong *)0x0) {
        return (ulonglong)uVar3;
      }
      FMemory::Free(plVar4);
      return (ulonglong)uVar3;
    }
    if (cVar1 != '\x02') {
      return 0x3ec;
    }
    if ((DAT_1468535b8 == (longlong *)0x0) &&
       (plVar4 = (longlong *)operator_new(0x18), DAT_1468535b8 = (longlong *)0x0,
       plVar4 != (longlong *)0x0)) {
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = 2;
      DAT_1468535b8 = plVar4;
    }
    plVar4 = DAT_1468535b8;
    _guard_xfg_dispatch_icall_nop(&local_e8);
  }
  if (*(int *)(param_1 + 0xf8) == 0) {
    puVar8 = &DAT_143f3eda8;
  }
  else {
    puVar8 = *(undefined2 **)(param_1 + 0xf0);
  }
  lVar6 = TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
                    (local_c8,puVar8);
  lVar6 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(lVar6 + 0x88));
  local_e8[6] = lVar6;
  if (local_48 != 0) {
    FMemory::Free();
  }
  local_d8 = 0;
  local_d0 = 0;
  uVar7 = FUN_140584410(plVar4,local_e8,&local_d8);
  return uVar7;
}


