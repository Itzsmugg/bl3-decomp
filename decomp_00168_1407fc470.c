// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1407fc470 FUN_1407fc470 body=47 status=ok
// SIG undefined FUN_1407fc470(void)

longlong FUN_1407fc470(void)

{
  if (DAT_14685dda8 == 0) {
    FUN_141786440(&DAT_14685dda8,&PTR_FUN_1440f47d0);
  }
  return DAT_14685dda8;
}



// FUNCTION 1407fc4a0 FUN_1407fc4a0 body=47 status=ok
// SIG undefined FUN_1407fc4a0(void)

longlong FUN_1407fc4a0(void)

{
  if (DAT_14685ddf8 == 0) {
    FUN_141786440(&DAT_14685ddf8,&PTR_GetPrivateStaticClass_1440f4f20);
  }
  return DAT_14685ddf8;
}



// FUNCTION 1407fc4d0 FUN_1407fc4d0 body=47 status=ok
// SIG undefined FUN_1407fc4d0(void)

longlong FUN_1407fc4d0(void)

{
  if (DAT_14685dcf8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_14685dcf8,&PTR_FUN_1462651a0);
  }
  return DAT_14685dcf8;
}



// FUNCTION 1407fc500 FUN_1407fc500 body=47 status=ok
// SIG undefined FUN_1407fc500(void)

longlong FUN_1407fc500(void)

{
  if (DAT_14685dd28 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_14685dd28,&PTR_FUN_146265b20);
  }
  return DAT_14685dd28;
}



// FUNCTION 1407fc530 FUN_1407fc530 body=47 status=ok
// SIG undefined FUN_1407fc530(void)

longlong FUN_1407fc530(void)

{
  if (DAT_14685dd48 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_14685dd48,&PTR_FUN_146265e20);
  }
  return DAT_14685dd48;
}



// FUNCTION 1407fc560 FUN_1407fc560 body=47 status=ok
// SIG undefined FUN_1407fc560(void)

longlong FUN_1407fc560(void)

{
  if (DAT_14685dd68 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_14685dd68,&PTR_FUN_146266090);
  }
  return DAT_14685dd68;
}



// FUNCTION 1407fc590 FUN_1407fc590 body=47 status=ok
// SIG undefined FUN_1407fc590(void)

longlong FUN_1407fc590(void)

{
  if (DAT_14685dd18 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_14685dd18,&PTR_FUN_146265a20);
  }
  return DAT_14685dd18;
}



// FUNCTION 1407fc5c0 FUN_1407fc5c0 body=47 status=ok
// SIG undefined FUN_1407fc5c0(void)

longlong FUN_1407fc5c0(void)

{
  if (DAT_14685dd38 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_14685dd38,&PTR_FUN_146265ca0);
  }
  return DAT_14685dd38;
}



// FUNCTION 1407fc5f0 FUN_1407fc5f0 body=47 status=ok
// SIG undefined FUN_1407fc5f0(void)

longlong FUN_1407fc5f0(void)

{
  if (DAT_14685dd58 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_14685dd58,&PTR_FUN_146265fa0);
  }
  return DAT_14685dd58;
}



// FUNCTION 1407fc620 FUN_1407fc620 body=47 status=ok
// SIG undefined FUN_1407fc620(void)

longlong FUN_1407fc620(void)

{
  if (DAT_14685dd08 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_14685dd08,&PTR_FUN_146265720);
  }
  return DAT_14685dd08;
}



// FUNCTION 1407fc670 FUN_1407fc670 body=391 status=ok
// SIG undefined FUN_1407fc670(void)

void FUN_1407fc670(long param_1,longlong param_2)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  longlong local_48 [2];
  undefined1 local_38 [32];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
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
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1407fc800 FUN_1407fc800 body=297 status=ok
// SIG undefined FUN_1407fc800(void)

void FUN_1407fc800(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  wchar_t *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FPaths::EngineDir(&local_48);
  local_38 = &DAT_143f3eda8;
  if (local_40 != 0) {
    local_38 = local_48;
  }
  lVar4 = 0;
  local_58 = (undefined2 *)0x0;
  local_30 = L"Binaries/ThirdParty/discordrpcLibrary/Win64/discord-rpc.dll";
  local_50 = 0;
  FPaths::CombineInternal(&local_58,&local_38,2);
  puVar7 = local_58;
  if (1 < (int)local_50) {
    puVar6 = &DAT_143f3eda8;
    if ((int)local_50 != 0) {
      puVar6 = local_58;
    }
    lVar4 = FWindowsPlatformProcess::GetDllHandle(puVar6);
  }
  *(longlong *)(param_1 + 8) = lVar4;
  if (lVar4 == 0) {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"Failed to load discord-rpc library",L"FDiscordRpcModule",
                       L"ThirdPartyLibraryError");
    FUN_1416786b0(0,uVar5,0);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      puVar7 = local_58;
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        puVar7 = local_58;
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
          puVar7 = local_58;
        }
      }
    }
  }
  if (puVar7 != (undefined2 *)0x0) {
    FMemory::Free(puVar7);
  }
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1407fc930 FUN_1407fc930 body=751 status=ok
// SIG undefined FUN_1407fc930(void)

longlong * FUN_1407fc930(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char *pcVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong local_48;
  int local_40;
  undefined4 local_3c;
  
  lVar8 = 0;
  plVar1 = param_1 + 2;
  *param_1 = 0;
  param_1[1] = 0;
  *plVar1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (param_2 != (undefined8 *)0x0) {
    lVar4 = -1;
    iVar3 = 0;
    pcVar2 = (char *)*param_2;
    local_48 = 0;
    local_3c = 0;
    lVar10 = lVar8;
    if ((pcVar2 != (char *)0x0) && (lVar7 = lVar4, lVar10 = 0, *pcVar2 != '\0')) {
      do {
        lVar7 = lVar7 + 1;
      } while (pcVar2[lVar7] != '\0');
      iVar5 = (int)lVar7 + 1;
      local_40 = iVar5;
      if (0 < iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      }
      iVar3 = local_40;
      lVar10 = local_48;
      FGenericPlatformString::Convert<char,wchar_t>(local_48,iVar5,pcVar2,iVar5,0x3f);
    }
    if (param_1 == &local_48) {
      if (lVar10 != 0) {
        FMemory::Free(lVar10);
      }
    }
    else {
      if (*param_1 != 0) {
        FMemory::Free();
      }
      *param_1 = lVar10;
      *(int *)(param_1 + 1) = iVar3;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_3c;
    }
    local_48 = 0;
    iVar5 = 0;
    local_3c = 0;
    pcVar2 = (char *)param_2[1];
    lVar10 = lVar8;
    iVar3 = iVar5;
    if ((pcVar2 != (char *)0x0) && (lVar7 = lVar4, *pcVar2 != '\0')) {
      do {
        lVar7 = lVar7 + 1;
      } while (pcVar2[lVar7] != '\0');
      iVar6 = (int)lVar7 + 1;
      local_40 = iVar6;
      if (0 < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      }
      iVar3 = local_40;
      lVar10 = local_48;
      FGenericPlatformString::Convert<char,wchar_t>(local_48,iVar6,pcVar2,iVar6,0x3f);
    }
    if (plVar1 == &local_48) {
      if (lVar10 != 0) {
        FMemory::Free(lVar10);
      }
    }
    else {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = lVar10;
      *(int *)(param_1 + 3) = iVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = local_3c;
    }
    local_48 = 0;
    local_3c = 0;
    pcVar2 = (char *)param_2[2];
    lVar10 = lVar8;
    iVar3 = iVar5;
    if ((pcVar2 != (char *)0x0) && (lVar7 = lVar4, *pcVar2 != '\0')) {
      do {
        lVar7 = lVar7 + 1;
      } while (pcVar2[lVar7] != '\0');
      iVar6 = (int)lVar7 + 1;
      local_40 = iVar6;
      if (0 < iVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      }
      iVar3 = local_40;
      lVar10 = local_48;
      FGenericPlatformString::Convert<char,wchar_t>(local_48,iVar6,pcVar2,iVar6,0x3f);
    }
    uVar9 = local_3c;
    plVar1 = param_1 + 4;
    if (plVar1 == &local_48) {
      if (lVar10 != 0) {
        FMemory::Free(lVar10);
      }
    }
    else {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = lVar10;
      *(int *)(param_1 + 5) = iVar3;
      *(undefined4 *)((longlong)param_1 + 0x2c) = uVar9;
    }
    local_48 = 0;
    uVar9 = 0;
    local_3c = 0;
    pcVar2 = (char *)param_2[3];
    if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
      do {
        lVar4 = lVar4 + 1;
      } while (pcVar2[lVar4] != '\0');
      iVar3 = (int)lVar4 + 1;
      local_40 = iVar3;
      if (0 < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      }
      uVar9 = local_3c;
      iVar5 = local_40;
      lVar8 = local_48;
      FGenericPlatformString::Convert<char,wchar_t>(local_48,iVar3,pcVar2,iVar3,0x3f);
    }
    plVar1 = param_1 + 6;
    if (plVar1 == &local_48) {
      if (lVar8 != 0) {
        FMemory::Free(lVar8);
      }
    }
    else {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = lVar8;
      *(int *)(param_1 + 7) = iVar5;
      *(undefined4 *)((longlong)param_1 + 0x3c) = uVar9;
    }
  }
  return param_1;
}



// FUNCTION 1407fcc20 FUN_1407fcc20 body=175 status=ok
// SIG undefined FUN_1407fcc20(void)

void FUN_1407fcc20(longlong *param_1,undefined4 param_2,undefined8 param_3)

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
LAB_1407fcc86:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3);
        if (cVar3 == '\0') goto LAB_1407fcc86;
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



// FUNCTION 1407fccd0 FUN_1407fccd0 body=345 status=ok
// SIG undefined FUN_1407fccd0(void)

undefined8 * FUN_1407fccd0(void)

{
  undefined8 *puVar1;
  
  if ((DAT_14685de20 == (undefined8 *)0x0) &&
     (puVar1 = (undefined8 *)operator_new(0x158), DAT_14685de20 = (undefined8 *)0x0,
     puVar1 != (undefined8 *)0x0)) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 2;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 2;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 2;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 2;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 2;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 2;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
    puVar1[0x27] = 0;
    puVar1[0x28] = 0;
    *(undefined1 *)(puVar1 + 0x29) = 0;
    *(undefined1 *)(puVar1 + 0x2a) = 0;
    DAT_14685de20 = puVar1;
  }
  puVar1 = DAT_14685de20;
  if (*(char *)(DAT_14685de20 + 0x2a) != '\0') {
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}



// FUNCTION 1407fce30 FUN_1407fce30 body=166 status=ok
// SIG undefined FUN_1407fce30(void)

void FUN_1407fce30(undefined4 param_1,char *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong local_28;
  ulonglong local_20;
  
  lVar1 = FUN_1407fccd0();
  if (lVar1 != 0) {
    local_28 = 0;
    local_20 = 0;
    if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (param_2[lVar3] != '\0');
      uVar2 = (int)lVar3 + 1;
      local_20 = (ulonglong)uVar2;
      if (0 < (int)uVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      }
      FGenericPlatformString::Convert<char,wchar_t>(local_28,uVar2,param_2,uVar2,0x3f);
    }
    FUN_1407fcc20(lVar1 + 0x18,param_1,&local_28);
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1407fcee0 FUN_1407fcee0 body=166 status=ok
// SIG undefined FUN_1407fcee0(void)

void FUN_1407fcee0(undefined4 param_1,char *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong local_28;
  ulonglong local_20;
  
  lVar1 = FUN_1407fccd0();
  if (lVar1 != 0) {
    local_28 = 0;
    local_20 = 0;
    if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (param_2[lVar3] != '\0');
      uVar2 = (int)lVar3 + 1;
      local_20 = (ulonglong)uVar2;
      if (0 < (int)uVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      }
      FGenericPlatformString::Convert<char,wchar_t>(local_28,uVar2,param_2,uVar2,0x3f);
    }
    FUN_1407fcc20(lVar1 + 0x30,param_1,&local_28);
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1407fcf90 FUN_1407fcf90 body=167 status=ok
// SIG undefined FUN_1407fcf90(void)

void FUN_1407fcf90(char *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong local_18;
  ulonglong local_10;
  
  lVar1 = FUN_1407fccd0();
  if (lVar1 != 0) {
    local_18 = 0;
    local_10 = 0;
    if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (param_1[lVar3] != '\0');
      uVar2 = (int)lVar3 + 1;
      local_10 = (ulonglong)uVar2;
      if (0 < (int)uVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      }
      FGenericPlatformString::Convert<char,wchar_t>(local_18,uVar2,param_1,uVar2,0x3f);
    }
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(lVar1 + 0x48,&local_18);
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1407fd040 FUN_1407fd040 body=258 status=ok
// SIG undefined FUN_1407fd040(void)

void FUN_1407fd040(undefined8 param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_48 [2];
  longlong local_38;
  longlong local_28;
  longlong local_18;
  
  lVar5 = FUN_1407fccd0();
  if (lVar5 != 0) {
    uVar6 = FUN_1407fc930(local_48,param_1);
    *(int *)(lVar5 + 0x74) = *(int *)(lVar5 + 0x74) + 1;
    bVar2 = false;
    iVar4 = *(int *)(lVar5 + 0x74);
    iVar7 = *(int *)(lVar5 + 0x68) + -1;
    lVar9 = (longlong)iVar7;
    if (-1 < iVar7) {
      lVar8 = lVar9 << 4;
      bVar2 = false;
      do {
        if ((*(int *)(lVar8 + 8 + *(longlong *)(lVar5 + 0x60)) == 0) ||
           (plVar1 = *(longlong **)(lVar8 + *(longlong *)(lVar5 + 0x60)), plVar1 == (longlong *)0x0)
           ) {
LAB_1407fd0c1:
          bVar2 = true;
        }
        else {
          cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,uVar6);
          if (cVar3 == '\0') goto LAB_1407fd0c1;
        }
        lVar8 = lVar8 + -0x10;
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
      iVar4 = *(int *)(lVar5 + 0x74);
    }
    *(int *)(lVar5 + 0x74) = iVar4 + -1;
    if (bVar2) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar5 + 0x60,0);
    }
    if (local_18 != 0) {
      FMemory::Free();
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1407fd150 FUN_1407fd150 body=577 status=ok
// SIG undefined FUN_1407fd150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407fd150(undefined8 param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_338 [32];
  undefined1 local_318;
  longlong local_308 [2];
  longlong local_2f8;
  longlong local_2e8;
  longlong local_2d8;
  undefined1 local_2c8 [128];
  undefined1 *local_248;
  undefined1 *local_240;
  undefined4 local_238;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  plVar5 = (longlong *)FUN_1407fccd0();
  if (plVar5 != (longlong *)0x0) {
    FUN_1407fc930(local_308,param_1);
    *(int *)((longlong)plVar5 + 0x14) = *(int *)((longlong)plVar5 + 0x14) + 1;
    bVar2 = false;
    iVar6 = *(int *)((longlong)plVar5 + 0x14);
    iVar4 = (int)plVar5[1] + -1;
    lVar9 = (longlong)iVar4;
    if (-1 < iVar4) {
      lVar8 = lVar9 << 4;
      bVar2 = false;
      do {
        if ((*(int *)(lVar8 + 8 + *plVar5) == 0) ||
           (plVar1 = *(longlong **)(lVar8 + *plVar5), plVar1 == (longlong *)0x0)) {
LAB_1407fd1dd:
          bVar2 = true;
        }
        else {
          cVar3 = (**(code **)(*plVar1 + 0x40))();
          if (cVar3 == '\0') goto LAB_1407fd1dd;
        }
        lVar8 = lVar8 + -0x10;
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
      iVar6 = *(int *)((longlong)plVar5 + 0x14);
    }
    *(int *)((longlong)plVar5 + 0x14) = iVar6 + -1;
    if (bVar2) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar5,0);
    }
    plVar1 = plVar5 + 0x12;
    iVar6 = 0;
    if ((wchar_t *)*plVar1 != L"In Menus") {
      *(undefined4 *)(plVar5 + 0x13) = 0;
      if (*(int *)((longlong)plVar5 + 0x9c) != 9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,9);
        iVar6 = (int)plVar5[0x13];
      }
      *(int *)(plVar5 + 0x13) = iVar6 + 9;
      if (*(int *)((longlong)plVar5 + 0x9c) < iVar6 + 9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1);
      }
      builtin_wcsncpy((wchar_t *)*plVar1,L"In Menus",9);
    }
    FUN_1407fd6d0(plVar5);
    GetModuleFileNameW((HMODULE)0x0,local_228,0x105);
    local_248 = (undefined1 *)0x0;
    lVar9 = -1;
    do {
      lVar8 = lVar9;
      lVar9 = lVar8 + 1;
    } while (local_228[lVar9] != L'\0');
    uVar7 = (int)lVar8 + 2;
    local_238 = (undefined4)lVar9;
    if ((0x80 < uVar7) && (uVar7 != 0)) {
      local_248 = (undefined1 *)FMemory::Realloc(0,(longlong)(int)uVar7,0);
    }
    local_318 = 0x3f;
    local_240 = local_2c8;
    if (local_248 != (undefined1 *)0x0) {
      local_240 = local_248;
    }
    FGenericPlatformString::Convert<wchar_t,char>(local_240,uVar7,local_228,uVar7);
    Discord_Register(DAT_14685de08,local_240);
    if (local_248 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    if (local_2d8 != 0) {
      FMemory::Free();
    }
    if (local_2e8 != 0) {
      FMemory::Free();
    }
    if (local_2f8 != 0) {
      FMemory::Free();
    }
    if (local_308[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1407fd3a0 FUN_1407fd3a0 body=167 status=ok
// SIG undefined FUN_1407fd3a0(void)

void FUN_1407fd3a0(char *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong local_18;
  ulonglong local_10;
  
  lVar1 = FUN_1407fccd0();
  if (lVar1 != 0) {
    local_18 = 0;
    local_10 = 0;
    if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (param_1[lVar3] != '\0');
      uVar2 = (int)lVar3 + 1;
      local_10 = (ulonglong)uVar2;
      if (0 < (int)uVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      }
      FGenericPlatformString::Convert<char,wchar_t>(local_18,uVar2,param_1,uVar2,0x3f);
    }
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(lVar1 + 0x78,&local_18);
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1407fd450 FUN_1407fd450 body=490 status=ok
// SIG undefined FUN_1407fd450(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407fd450(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  char cVar1;
  char *pcVar2;
  undefined2 *puVar3;
  char *pcVar4;
  undefined2 *puVar5;
  undefined1 auStack_118 [32];
  code *local_f8;
  code *local_f0;
  code *local_e8;
  code *local_e0;
  code *local_d8;
  code *local_d0;
  undefined1 local_c8 [128];
  longlong local_48;
  char *local_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if (DAT_14685de08 == (char *)0x0) {
    DAT_14685de08 = (char *)operator_new(0x1e);
    DAT_14685de18 = (char *)operator_new(0x1e);
    DAT_14685de10 = (char *)operator_new(0x1e);
    puVar5 = &DAT_143f3eda8;
    if (*(int *)(param_2 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_c8,puVar3);
    pcVar2 = local_40;
    pcVar4 = DAT_14685de08;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (*(int *)(param_3 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*param_3;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_c8,puVar3);
    pcVar2 = local_40;
    pcVar4 = DAT_14685de18;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (*(int *)(param_4 + 1) != 0) {
      puVar5 = (undefined2 *)*param_4;
    }
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_c8,puVar5);
    pcVar2 = DAT_14685de10;
    do {
      cVar1 = *local_40;
      local_40 = local_40 + 1;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (local_48 != 0) {
      FMemory::Free();
    }
    local_f8 = FUN_1407fd150;
    local_f0 = FUN_1407fce30;
    local_e8 = FUN_1407fcee0;
    local_e0 = FUN_1407fcf90;
    local_d0 = FUN_1407fd040;
    local_d8 = FUN_1407fd3a0;
    Discord_Initialize(DAT_14685de08,&local_f8,param_5,DAT_14685de18);
  }
  return;
}



// FUNCTION 1407fd640 FUN_1407fd640 body=47 status=ok
// SIG undefined FUN_1407fd640(void)

void FUN_1407fd640(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_1440f6278;
    return;
  }
  return;
}



// FUNCTION 1407fd670 Discord_RunCallbacks body=7 status=ok
// SIG undefined Discord_RunCallbacks(void)

void Discord_RunCallbacks(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001407fd670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Discord_RunCallbacks();
  return;
}



// FUNCTION 1407fd680 FUN_1407fd680 body=74 status=ok
// SIG undefined FUN_1407fd680(void)

void FUN_1407fd680(void)

{
  Discord_Shutdown();
  FMemory::operator_delete(DAT_14685de08);
  FMemory::operator_delete(DAT_14685de18);
  FMemory::operator_delete(DAT_14685de10);
  DAT_14685de08 = 0;
  DAT_14685de18 = 0;
  DAT_14685de10 = 0;
  return;
}



// FUNCTION 1407fd6d0 FUN_1407fd6d0 body=783 status=ok
// SIG undefined FUN_1407fd6d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407fd6d0(longlong param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_6e8 [32];
  undefined8 local_6c8;
  undefined8 local_6c0;
  undefined8 local_6b8;
  undefined8 local_6b0;
  undefined8 local_6a8;
  undefined8 local_6a0;
  undefined8 local_698;
  undefined8 local_690;
  undefined8 local_688;
  undefined8 local_680;
  undefined8 local_678;
  undefined8 local_670;
  undefined8 local_668;
  undefined8 local_660;
  undefined1 local_658 [128];
  longlong local_5d8;
  undefined8 local_5d0;
  undefined1 local_5b8 [128];
  longlong local_538;
  undefined8 local_530;
  undefined1 local_518 [128];
  longlong local_498;
  undefined8 local_490;
  undefined1 local_478 [128];
  longlong local_3f8;
  undefined8 local_3f0;
  undefined1 local_3d8 [128];
  longlong local_358;
  undefined8 local_350;
  undefined1 local_338 [128];
  longlong local_2b8;
  undefined8 local_2b0;
  undefined1 local_298 [128];
  longlong local_218;
  undefined8 local_210;
  undefined1 local_1f8 [128];
  longlong local_178;
  undefined8 local_170;
  undefined1 local_158 [128];
  longlong local_d8;
  undefined8 local_d0;
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_6e8;
  puVar2 = &DAT_143f3eda8;
  local_6b8 = 0;
  local_6b0 = 0;
  local_680 = 0;
  local_668 = 0;
  local_660 = 0;
  if (*(int *)(param_1 + 0x98) == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = *(undefined2 **)(param_1 + 0x90);
  }
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_b8,puVar1);
  local_6c8 = local_30;
  if (*(int *)(param_1 + 0xa8) == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = *(undefined2 **)(param_1 + 0xa0);
  }
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_158,puVar1);
  local_6c0 = local_d0;
  if (*(int *)(param_1 + 200) == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = *(undefined2 **)(param_1 + 0xc0);
  }
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_1f8,puVar1);
  local_6a8 = local_170;
  if (*(int *)(param_1 + 0xd8) == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = *(undefined2 **)(param_1 + 0xd0);
  }
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_298,puVar1);
  local_6a0 = local_210;
  if (*(int *)(param_1 + 0xe8) == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = *(undefined2 **)(param_1 + 0xe0);
  }
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_338,puVar1);
  local_698 = local_2b0;
  if (*(int *)(param_1 + 0xf8) == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = *(undefined2 **)(param_1 + 0xf0);
  }
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_3d8,puVar1);
  local_690 = local_350;
  if (*(int *)(param_1 + 0x108) == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = *(undefined2 **)(param_1 + 0x100);
  }
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_478,puVar1);
  local_688 = local_3f0;
  if (*(int *)(param_1 + 0x120) == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = *(undefined2 **)(param_1 + 0x118);
  }
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_518,puVar1);
  local_678 = local_490;
  if (*(int *)(param_1 + 0x130) == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = *(undefined2 **)(param_1 + 0x128);
  }
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_5b8,puVar1);
  local_670 = local_530;
  if (*(int *)(param_1 + 0x140) != 0) {
    puVar2 = *(undefined2 **)(param_1 + 0x138);
  }
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_658,puVar2);
  local_668 = local_5d0;
  local_6b8 = *(undefined8 *)(param_1 + 0xb0);
  local_6b0 = *(undefined8 *)(param_1 + 0xb8);
  local_680 = *(undefined8 *)(param_1 + 0x110);
  local_660 = CONCAT71(local_660._1_7_,*(undefined1 *)(param_1 + 0x148));
  Discord_UpdatePresence(&local_6c8);
  if (local_5d8 != 0) {
    FMemory::Free();
  }
  if (local_538 != 0) {
    FMemory::Free();
  }
  if (local_498 != 0) {
    FMemory::Free();
  }
  if (local_3f8 != 0) {
    FMemory::Free();
  }
  if (local_358 != 0) {
    FMemory::Free();
  }
  if (local_2b8 != 0) {
    FMemory::Free();
  }
  if (local_218 != 0) {
    FMemory::Free();
  }
  if (local_178 != 0) {
    FMemory::Free();
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1407fd9e0 FUN_1407fd9e0 body=317 status=ok
// SIG undefined FUN_1407fd9e0(void)

void FUN_1407fd9e0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong local_res8;
  undefined1 local_res10 [8];
  
  plVar2 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
  if (plVar2[0x1f] == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
  }
  plVar2 = (longlong *)FName::FName(local_res10,L"GearboxShiftOverlay_FBF",1);
  lVar5 = *plVar2;
  uVar3 = GetTransientPackage();
  puVar7 = (undefined8 *)0x0;
  local_res8 = 0;
  if (lVar5 == 0) {
    FUN_1417846f0(uVar3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar4 = UNodeMappingContainer::StaticClass();
  lVar5 = FUN_1417985e0(uVar4,uVar3,lVar5,0x40,0,0,0,0,0);
  plVar2 = (longlong *)(param_1 + 0x80);
  if (*plVar2 == 0) {
    if (lVar5 != 0) {
      lVar6 = operator_new(0x18);
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)
                 TStrongObjectPtr<UMaterialInterface>::FInternalReferenceCollector::
                 FInternalReferenceCollector(lVar6,lVar5);
      }
      if (plVar2 == &local_res8) {
        if (puVar7 == (undefined8 *)0x0) goto LAB_1407fdae3;
        puVar8 = (undefined8 *)*puVar7;
      }
      else {
        puVar1 = (undefined8 *)*plVar2;
        *plVar2 = (longlong)puVar7;
        if (puVar1 == (undefined8 *)0x0) goto LAB_1407fdae3;
        puVar8 = (undefined8 *)*puVar1;
        puVar7 = puVar1;
      }
      (*(code *)*puVar8)(puVar7,1);
    }
  }
  else {
    *(longlong *)(*plVar2 + 0x10) = lVar5;
  }
LAB_1407fdae3:
  if (*plVar2 == 0) {
    uRam0000000000000160 = 1;
    return;
  }
  *(undefined1 *)(*(longlong *)(*plVar2 + 0x10) + 0x160) = 1;
  return;
}



// FUNCTION 1407fdb20 FUN_1407fdb20 body=473 status=ok
// SIG undefined FUN_1407fdb20(void)

void FUN_1407fdb20(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint *puVar10;
  undefined8 *puVar11;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  longlong *local_30;
  uint uStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined8 *puVar9;
  
  puVar11 = (undefined8 *)0x0;
  plVar1 = (longlong *)(param_1 + 0x28);
  uVar8 = 0;
  iVar2 = *(int *)(param_1 + 0x50);
  puStack_20 = (uint *)(param_1 + 0x38);
  local_58 = 0;
  uStack_54 = 1;
  local_48._4_4_ = 0;
  uStack_40 = uStack_40 & 0xffffffff00000000;
  if (iVar2 != 0) {
    puVar10 = *(uint **)(param_1 + 0x48);
    if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
      puVar10 = puStack_20;
    }
    uVar3 = *puVar10;
    puVar9 = puVar11;
    puVar7 = puVar11;
    while (uVar3 == 0) {
      iVar5 = (int)puVar7;
      uVar8 = (int)puVar9 + 0x20;
      puVar9 = (undefined8 *)(ulonglong)uVar8;
      local_58 = iVar5 + 1;
      puVar7 = (undefined8 *)(ulonglong)local_58;
      uStack_40._4_4_ = (int)(uStack_40 >> 0x20);
      uStack_40 = CONCAT44(uStack_40._4_4_,uVar8);
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1407fdbed;
      uVar3 = puVar10[(longlong)iVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
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
    local_48._4_4_ = (uVar8 - iVar5) + 0x1f;
    if (iVar2 < local_48._4_4_) {
LAB_1407fdbed:
      local_48._4_4_ = iVar2;
    }
  }
  uStack_18 = 0xffffffff;
  iStack_14 = local_48._4_4_;
  uStack_10 = (uint)uStack_40;
  uStack_c = uStack_40._4_4_;
  uStack_28 = local_58;
  uStack_24 = uStack_54;
  iVar5 = local_48._4_4_;
  uStack_50 = local_58;
  uStack_4c = uStack_54;
  local_38 = (uint)uStack_40;
  uStack_34 = uStack_40._4_4_;
  bVar4 = local_48._4_4_ < iVar2;
  local_48 = puStack_20;
  local_30 = plVar1;
  uStack_40._0_4_ = 0xffffffff;
  uStack_40._4_4_ = iVar5;
  if (bVar4) {
    do {
      lVar6 = *(longlong *)(*plVar1 + 8 + (longlong)uStack_40._4_4_ * 0x18);
      puVar9 = puVar11;
      if (lVar6 != 0) {
        puVar9 = *(undefined8 **)(lVar6 + 0x10);
      }
      if (puVar9 != (undefined8 *)0x0) {
        lVar6 = operator_new(0x18);
        puVar7 = puVar11;
        if (lVar6 != 0) {
          puVar7 = (undefined8 *)
                   TStrongObjectPtr<UMaterialInterface>::FInternalReferenceCollector::
                   FInternalReferenceCollector(lVar6,puVar9);
        }
        if (puVar7 != (undefined8 *)0x0) {
          puVar7[2] = 0;
          (**(code **)*puVar7)(puVar7,1);
        }
      }
      uStack_40._0_4_ = (uint)uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
    } while (uStack_40._4_4_ < (int)local_48[6]);
  }
  FUN_140802760(plVar1,0);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x10) = 0;
  }
  return;
}



// FUNCTION 1407fdd00 FUN_1407fdd00 body=174 status=ok
// SIG undefined FUN_1407fdd00(void)

void FUN_1407fdd00(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int local_res8 [2];
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  FWeakObjectPtr::operator=(&local_res20);
  local_18[0] = local_res20;
  piVar1 = (int *)TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  ::FindId(param_1 + 0x28,local_res8,local_18);
  if (*piVar1 != -1) {
    FWeakObjectPtr::operator=(&local_res20,param_2);
    local_18[0] = local_res20;
    TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x28,local_res8);
    lVar3 = 0;
    lVar2 = lVar3;
    if (local_res8[0] != -1) {
      lVar2 = *(longlong *)(param_1 + 0x28) + (longlong)local_res8[0] * 0x18;
    }
    if (*(longlong *)(lVar2 + 8) != 0) {
      lVar3 = *(longlong *)(*(longlong *)(lVar2 + 8) + 0x10);
    }
    *(undefined1 *)(lVar3 + 0x58) = param_3;
  }
  return;
}



// FUNCTION 1407fddb0 FUN_1407fddb0 body=174 status=ok
// SIG undefined FUN_1407fddb0(void)

ulonglong FUN_1407fddb0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int local_res8 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  
  FWeakObjectPtr::operator=(&local_res18);
  local_res20 = local_res18;
  piVar1 = (int *)TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  ::FindId(param_1 + 0x28,local_res8,&local_res20);
  if (*piVar1 == -1) {
    return (ulonglong)piVar1 & 0xffffffffffffff00;
  }
  FWeakObjectPtr::operator=(&local_res18,param_2);
  local_res20 = local_res18;
  TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x28,local_res8);
  lVar3 = 0;
  lVar2 = lVar3;
  if (local_res8[0] != -1) {
    lVar2 = *(longlong *)(param_1 + 0x28) + (longlong)local_res8[0] * 0x18;
  }
  if (*(longlong *)(lVar2 + 8) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 8) + 0x10);
  }
  return (ulonglong)*(byte *)(lVar3 + 0x58);
}



// FUNCTION 1407fde60 FUN_1407fde60 body=193 status=ok
// SIG undefined FUN_1407fde60(void)

undefined8 FUN_1407fde60(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int local_res8 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  
  FWeakObjectPtr::operator=(&local_res18);
  local_res20 = local_res18;
  piVar2 = (int *)TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  ::FindId(param_1 + 0x28,local_res8,&local_res20);
  if (*piVar2 != -1) {
    FWeakObjectPtr::operator=(&local_res18,param_2);
    local_res20 = local_res18;
    TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x28,local_res8);
    lVar4 = 0;
    lVar3 = lVar4;
    if (local_res8[0] != -1) {
      lVar3 = *(longlong *)(param_1 + 0x28) + (longlong)local_res8[0] * 0x18;
    }
    if (*(longlong *)(lVar3 + 8) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + 8) + 0x10);
    }
    if ((*(longlong **)(lVar4 + 0x60) != (longlong *)0x0) &&
       (cVar1 = (**(code **)(**(longlong **)(lVar4 + 0x60) + 0x120))(), cVar1 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1407fdf30 FUN_1407fdf30 body=495 status=ok
// SIG undefined FUN_1407fdf30(void)

undefined8 FUN_1407fdf30(longlong param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint *puVar10;
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  undefined8 local_38;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined1 auStack_18 [16];
  
  iVar1 = *(int *)(param_1 + 0x50);
  puStack_20 = (uint *)(param_1 + 0x38);
  local_58 = 0;
  uStack_54 = 1;
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (iVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x48);
    if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
      puVar10 = puStack_20;
    }
    uVar2 = *puVar10;
    uStack_40 = 0;
    local_58 = 0;
    while (uVar2 == 0) {
      lVar7 = (longlong)local_58;
      uStack_40 = uStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar3) goto LAB_1407fdfef;
      uVar2 = puVar10[lVar7 + 1];
    }
    uStack_54 = -uVar2 & uVar2;
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
    local_48._4_4_ = (uStack_40 - iVar6) + 0x1f;
    if (iVar1 < local_48._4_4_) {
LAB_1407fdfef:
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
  local_30 = (longlong *)(param_1 + 0x28);
  local_48 = puStack_20;
  if (bVar3) {
    do {
      puVar5 = (undefined8 *)0x0;
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8 + (longlong)iStack_3c * 0x18);
      lVar8 = 0;
      if (lVar7 != 0) {
        lVar8 = *(longlong *)(lVar7 + 0x10);
      }
      puVar9 = (undefined8 *)0x0;
      if (lVar8 == 0) {
LAB_1407fe09e:
        lVar7 = 0;
      }
      else {
        lVar7 = operator_new();
        if (lVar7 != 0) {
          puVar5 = (undefined8 *)
                   TStrongObjectPtr<UMaterialInterface>::FInternalReferenceCollector::
                   FInternalReferenceCollector(lVar7,lVar8);
        }
        puVar9 = puVar5;
        if (puVar5 == (undefined8 *)0x0) goto LAB_1407fe09e;
        lVar7 = puVar5[2];
      }
      if (*(longlong **)(lVar7 + 0x60) != (longlong *)0x0) {
        cVar4 = (**(code **)(**(longlong **)(lVar7 + 0x60) + 0x120))();
        if (cVar4 != '\0') {
          if (puVar9 != (undefined8 *)0x0) {
            (**(code **)*puVar9)(puVar9,1);
          }
          return 1;
        }
      }
      if (puVar9 != (undefined8 *)0x0) {
        (**(code **)*puVar9)(puVar9,1);
      }
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  return 0;
}



// FUNCTION 1407fe120 FUN_1407fe120 body=499 status=ok
// SIG undefined FUN_1407fe120(void)

undefined8 FUN_1407fe120(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  undefined8 local_38;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined1 auStack_18 [16];
  
  if (((*(longlong *)(param_1 + 0x80) != 0) &&
      (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10), lVar6 != 0)) &&
     (*(int *)(lVar6 + 0x54) == param_2)) {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0x50);
  puStack_20 = (uint *)(param_1 + 0x38);
  local_58 = 0;
  uStack_54 = 1;
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (iVar1 != 0) {
    puVar8 = *(uint **)(param_1 + 0x48);
    if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
      puVar8 = puStack_20;
    }
    uVar2 = *puVar8;
    uStack_40 = 0;
    local_58 = 0;
    while (uVar2 == 0) {
      lVar6 = (longlong)local_58;
      uStack_40 = uStack_40 + 0x20;
      iVar5 = local_58 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar5;
      if (bVar3) goto LAB_1407fe1ff;
      uVar2 = puVar8[lVar6 + 1];
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
LAB_1407fe1ff:
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
  local_30 = (longlong *)(param_1 + 0x28);
  local_48 = puStack_20;
  if (bVar3) {
    do {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8 + (longlong)iStack_3c * 0x18);
      lVar7 = 0;
      if (lVar6 != 0) {
        lVar7 = *(longlong *)(lVar6 + 0x10);
      }
      puVar4 = (undefined8 *)0x0;
      if (lVar7 == 0) {
LAB_1407fe29d:
        lVar6 = 0;
      }
      else {
        lVar6 = operator_new(0x18);
        puVar4 = (undefined8 *)0x0;
        if (lVar6 != 0) {
          puVar4 = (undefined8 *)
                   TStrongObjectPtr<UMaterialInterface>::FInternalReferenceCollector::
                   FInternalReferenceCollector(lVar6);
        }
        if (puVar4 == (undefined8 *)0x0) goto LAB_1407fe29d;
        lVar6 = puVar4[2];
      }
      if (*(int *)(lVar6 + 0x54) == param_2) {
        if (puVar4 == (undefined8 *)0x0) {
          return 1;
        }
        (**(code **)*puVar4)(puVar4,1);
        return 1;
      }
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  return 0;
}



// FUNCTION 1407fe320 FUN_1407fe320 body=557 status=ok
// SIG undefined FUN_1407fe320(void)

void FUN_1407fe320(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint *puVar10;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  uint local_48;
  longlong *local_40;
  uint uStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_20;
  
  if (((*(longlong *)(param_1 + 0x80) != 0) &&
      (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10), lVar5 != 0)) &&
     (*(int *)(lVar5 + 0x54) == param_2)) {
    FUN_140806220();
    return;
  }
  iVar1 = *(int *)(param_1 + 0x50);
  puStack_30 = (uint *)(param_1 + 0x38);
  puVar9 = (undefined8 *)0x0;
  local_68 = 0;
  uStack_64 = 1;
  local_58._4_4_ = 0;
  uStack_50 = 0;
  if (iVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x48);
    if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
      puVar10 = puStack_30;
    }
    uVar2 = *puVar10;
    puVar8 = puVar9;
    puVar7 = puVar9;
    while (uVar2 == 0) {
      iVar4 = (int)puVar8;
      uStack_50 = (int)puVar7 + 0x20;
      puVar7 = (undefined8 *)(ulonglong)uStack_50;
      local_68 = iVar4 + 1;
      puVar8 = (undefined8 *)(ulonglong)local_68;
      if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1407fe40f;
      uVar2 = puVar10[(longlong)iVar4 + 1];
    }
    uStack_64 = -uVar2 & uVar2;
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
    if (iVar1 < local_58._4_4_) {
LAB_1407fe40f:
      local_58._4_4_ = iVar1;
    }
  }
  uStack_28 = 0xffffffff;
  iStack_24 = local_58._4_4_;
  uStack_20 = uStack_50;
  uStack_38 = local_68;
  uStack_34 = uStack_64;
  uStack_60 = local_68;
  uStack_5c = uStack_64;
  local_48 = uStack_50;
  uStack_50 = 0xffffffff;
  iStack_4c = local_58._4_4_;
  bVar3 = local_58._4_4_ < iVar1;
  local_40 = (longlong *)(param_1 + 0x28);
  local_58 = puStack_30;
  if (bVar3) {
    do {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8 + (longlong)iStack_4c * 0x18);
      puVar8 = puVar9;
      if (lVar5 != 0) {
        puVar8 = *(undefined8 **)(lVar5 + 0x10);
      }
      puVar7 = puVar9;
      puVar6 = puVar9;
      if (puVar8 != (undefined8 *)0x0) {
        lVar5 = operator_new(0x18);
        if (lVar5 != 0) {
          puVar6 = (undefined8 *)
                   TStrongObjectPtr<UMaterialInterface>::FInternalReferenceCollector::
                   FInternalReferenceCollector(lVar5,puVar8);
        }
        if (puVar6 != (undefined8 *)0x0) {
          puVar7 = (undefined8 *)puVar6[2];
        }
      }
      if (*(int *)((longlong)puVar7 + 0x54) == param_2) {
        if (puVar6 != (undefined8 *)0x0) {
          puVar9 = (undefined8 *)puVar6[2];
        }
        FUN_140806220(puVar9);
        if (puVar6 == (undefined8 *)0x0) {
          return;
        }
        (**(code **)*puVar6)(puVar6,1);
        return;
      }
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)*puVar6)(puVar6,1);
      }
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
    } while (iStack_4c < (int)local_58[6]);
  }
  return;
}



// FUNCTION 1407fe550 FUN_1407fe550 body=505 status=ok
// SIG undefined FUN_1407fe550(void)

void FUN_1407fe550(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong local_res8;
  undefined8 ***local_res18;
  undefined8 ***local_res20;
  
  FWeakObjectPtr::operator=(&local_res18);
  local_res20 = local_res18;
  piVar3 = (int *)TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  ::FindId(param_1 + 5,&local_res8,&local_res20);
  if (*piVar3 != -1) {
    return;
  }
  if ((int)param_1[6] == *(int *)((longlong)param_1 + 0x5c)) {
    FWeakObjectPtr::operator=(param_1 + 0xf,param_2);
  }
  uVar4 = GetTransientPackage();
  FUN_1417846f0(uVar4,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  puVar8 = (undefined8 *)0x0;
  local_res8 = 0;
  uVar5 = UNodeMappingContainer::StaticClass();
  lVar6 = FUN_1417985e0(uVar5,uVar4,0,0,0,0,0,0,0);
  FWeakObjectPtr::operator=(&local_res18,param_2);
  local_res20 = &local_res18;
  FUN_140800320(param_1 + 5,&local_res8,&local_res20,0);
  FWeakObjectPtr::operator=(&local_res18,param_2);
  local_res20 = local_res18;
  TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 5,&local_res8,&local_res20);
  puVar9 = puVar8;
  if ((int)local_res8 != -1) {
    puVar9 = (undefined8 *)(param_1[5] + (longlong)(int)local_res8 * 0x18);
  }
  plVar10 = puVar9 + 1;
  if (puVar9[1] == 0) {
    if (lVar6 != 0) {
      lVar7 = operator_new(0x18);
      if (lVar7 != 0) {
        puVar8 = (undefined8 *)
                 TStrongObjectPtr<UMaterialInterface>::FInternalReferenceCollector::
                 FInternalReferenceCollector(lVar7,lVar6);
      }
      if (plVar10 == &local_res8) {
        if (puVar8 == (undefined8 *)0x0) goto LAB_1407fe70e;
        puVar9 = (undefined8 *)*puVar8;
      }
      else {
        puVar1 = (undefined8 *)*plVar10;
        *plVar10 = (longlong)puVar8;
        if (puVar1 == (undefined8 *)0x0) goto LAB_1407fe70e;
        puVar9 = (undefined8 *)*puVar1;
        puVar8 = puVar1;
      }
      (*(code *)*puVar9)(puVar8,1);
    }
  }
  else {
    *(longlong *)(puVar9[1] + 0x10) = lVar6;
  }
LAB_1407fe70e:
  uVar2 = FUN_140802c10(lVar6);
  (**(code **)(*param_1 + 0xe8))(param_1,uVar2,*(undefined4 *)(param_2 + 0x108));
  return;
}



// FUNCTION 1407fe750 FUN_1407fe750 body=193 status=ok
// SIG undefined FUN_1407fe750(void)

void FUN_1407fe750(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int local_res8 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  
  FWeakObjectPtr::operator=(&local_res18);
  plVar3 = (longlong *)(param_1 + 0x28);
  local_res20 = local_res18;
  piVar1 = (int *)TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  ::FindId(plVar3,local_res8,&local_res20);
  if (*piVar1 != -1) {
    FWeakObjectPtr::operator=(&local_res18,param_2);
    local_res20 = local_res18;
    TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::FindId(plVar3,local_res8,&local_res20);
    if (local_res8[0] == -1) {
      lVar2 = 0;
    }
    else {
      lVar2 = *plVar3 + (longlong)local_res8[0] * 0x18;
    }
    if (*(longlong *)(lVar2 + 8) != 0) {
      *(undefined8 *)(*(longlong *)(lVar2 + 8) + 0x10) = 0;
    }
    FWeakObjectPtr::operator=(local_res8,param_2);
    FUN_1408067e0(plVar3,&local_res18);
  }
  return;
}



// FUNCTION 1407fe820 FUN_1407fe820 body=199 status=ok
// SIG undefined FUN_1407fe820(void)

void FUN_1407fe820(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 local_18;
  longlong local_10;
  
  if ((*(longlong *)(param_1 + 0x80) == 0) ||
     (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10), lVar4 == 0)) {
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
  plVar5 = *(longlong **)(lVar4 + 0x60);
  if (plVar5 != (longlong *)0x0) {
    cVar6 = (**(code **)(*plVar5 + 0x120))();
    if (cVar6 != '\0') goto LAB_1407fe893;
  }
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x10);
  }
  FUN_140806110(uVar7,&local_18);
LAB_1407fe893:
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
  return;
}



// FUNCTION 1407fe8f0 FUN_1407fe8f0 body=87 status=ok
// SIG undefined FUN_1407fe8f0(void)

void FUN_1407fe8f0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 0x80) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10), lVar1 != 0)) {
    FUN_140806520(lVar1);
    plVar2 = *(longlong **)(lVar1 + 0x60);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x130))(plVar2,0);
      (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x148))();
    }
    FUN_140805f90(lVar1);
    return;
  }
  return;
}



// FUNCTION 1407fe950 FUN_1407fe950 body=543 status=ok
// SIG undefined FUN_1407fe950(void)

void FUN_1407fe950(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int local_res20 [2];
  undefined1 local_58 [8];
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146855ba8) && (_Init_thread_header(&DAT_146855ba8), DAT_146855ba8 == -1))
  {
    uVar7 = FCommandLine::Get();
    DAT_146855ba4 = FParse::Param(uVar7,L"UNATTENDED");
    _Init_thread_footer(&DAT_146855ba8);
  }
  if ((DAT_146855ba4 == '\0') && (DAT_1468c21d9 == '\0')) {
    FWeakObjectPtr::operator=(&local_48,param_2);
    local_40 = local_48;
    piVar4 = (int *)TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                    ::FindId(param_1 + 5,local_58,&local_40);
    if (*piVar4 == -1) {
      (**(code **)(*param_1 + 0x70))(param_1,param_2);
    }
    FWeakObjectPtr::operator=(&local_38,param_2);
    local_30 = local_38;
    TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 5,local_res20,&local_30);
    puVar9 = (undefined8 *)0x0;
    puVar6 = puVar9;
    if (local_res20[0] != -1) {
      puVar6 = (undefined8 *)(param_1[5] + (longlong)local_res20[0] * 0x18);
    }
    local_50 = (undefined8 *)0x0;
    puVar8 = puVar9;
    if (puVar6[1] != 0) {
      puVar8 = *(undefined8 **)(puVar6[1] + 0x10);
    }
    puVar6 = local_50;
    if ((puVar8 != (undefined8 *)0x0) && (lVar5 = operator_new(0x18), puVar6 = puVar9, lVar5 != 0))
    {
      puVar6 = (undefined8 *)
               TStrongObjectPtr<UMaterialInterface>::FInternalReferenceCollector::
               FInternalReferenceCollector(lVar5,puVar8);
    }
    local_50 = puVar6;
    puVar6 = local_50;
    local_28 = *param_3;
    local_20 = param_3[1];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    if (local_50 != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)local_50[2];
    }
    FUN_140806110(puVar9,&local_28);
    if (puVar6 != (undefined8 *)0x0) {
      (**(code **)*puVar6)(puVar6,1);
    }
  }
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar4 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 1407feb70 FUN_1407feb70 body=203 status=ok
// SIG undefined FUN_1407feb70(void)

void FUN_1407feb70(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int local_res8 [4];
  undefined8 local_res18;
  undefined8 local_res20;
  
  FWeakObjectPtr::operator=(&local_res18);
  local_res20 = local_res18;
  piVar2 = (int *)TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  ::FindId(param_1 + 0x28,local_res8,&local_res20);
  if (*piVar2 != -1) {
    FWeakObjectPtr::operator=(&local_res18,param_2);
    local_res20 = local_res18;
    TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x28,local_res8,&local_res20);
    lVar4 = 0;
    lVar3 = lVar4;
    if (local_res8[0] != -1) {
      lVar3 = *(longlong *)(param_1 + 0x28) + (longlong)local_res8[0] * 0x18;
    }
    if (*(longlong *)(lVar3 + 8) != 0) {
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + 8) + 0x10);
    }
    FUN_140806520(lVar4);
    plVar1 = *(longlong **)(lVar4 + 0x60);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x130))(plVar1,0);
      (**(code **)(**(longlong **)(lVar4 + 0x60) + 0x148))();
    }
    FUN_140805f90(lVar4);
  }
  return;
}



// FUNCTION 1407fec40 FUN_1407fec40 body=498 status=ok
// SIG undefined FUN_1407fec40(void)

void FUN_1407fec40(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint *puVar10;
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
  
  iVar1 = *(int *)(param_1 + 0x50);
  puStack_20 = (uint *)(param_1 + 0x38);
  local_58 = 0;
  uStack_54 = 1;
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (iVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x48);
    if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
      puVar10 = puStack_20;
    }
    uVar2 = *puVar10;
    uStack_40 = 0;
    local_58 = 0;
    while (uVar2 == 0) {
      lVar7 = (longlong)local_58;
      uStack_40 = uStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_1407fecff;
      uVar2 = puVar10[lVar7 + 1];
    }
    uStack_54 = -uVar2 & uVar2;
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
    local_48._4_4_ = (uStack_40 - iVar6) + 0x1f;
    if (iVar1 < local_48._4_4_) {
LAB_1407fecff:
      local_48._4_4_ = iVar1;
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
  bVar4 = local_48._4_4_ < iVar1;
  local_30 = (longlong *)(param_1 + 0x28);
  local_48 = puStack_20;
  if (bVar4) {
    do {
      puVar5 = (undefined8 *)0x0;
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8 + (longlong)iStack_3c * 0x18);
      lVar8 = 0;
      if (lVar7 != 0) {
        lVar8 = *(longlong *)(lVar7 + 0x10);
      }
      puVar9 = (undefined8 *)0x0;
      if (lVar8 == 0) {
LAB_1407fedae:
        lVar7 = 0;
      }
      else {
        lVar7 = operator_new(0x18);
        if (lVar7 != 0) {
          puVar5 = (undefined8 *)
                   TStrongObjectPtr<UMaterialInterface>::FInternalReferenceCollector::
                   FInternalReferenceCollector(lVar7,lVar8);
        }
        puVar9 = puVar5;
        if (puVar5 == (undefined8 *)0x0) goto LAB_1407fedae;
        lVar7 = puVar5[2];
      }
      FUN_140806520(lVar7);
      plVar3 = *(longlong **)(lVar7 + 0x60);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x130))(plVar3,0);
        (**(code **)(**(longlong **)(lVar7 + 0x60) + 0x148))();
      }
      FUN_140805f90(lVar7);
      if (puVar9 != (undefined8 *)0x0) {
        (**(code **)*puVar9)(puVar9,1);
      }
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  return;
}



// FUNCTION 1407fee40 FUN_1407fee40 body=219 status=ok
// SIG undefined FUN_1407fee40(void)

void FUN_1407fee40(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int local_res8 [4];
  undefined4 local_res18;
  undefined4 uStackX_1c;
  undefined1 local_res20 [8];
  
  FWeakObjectPtr::operator=(&local_res18);
  piVar1 = (int *)TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  ::FindId(param_1 + 0x28,local_res8,local_res20);
  if (*piVar1 == -1) {
    local_res18 = *(undefined4 *)(param_1 + 0x78);
    uStackX_1c = *(undefined4 *)(param_1 + 0x7c);
    TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x28,local_res8);
    if (local_res8[0] != -1) {
      lVar2 = *(longlong *)(param_1 + 0x28) + (longlong)local_res8[0] * 0x18;
      goto LAB_1407feefe;
    }
  }
  else {
    FWeakObjectPtr::operator=(&local_res18,param_2);
    TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x28,local_res8);
    if (local_res8[0] != -1) {
      lVar2 = *(longlong *)(param_1 + 0x28) + (longlong)local_res8[0] * 0x18;
      goto LAB_1407feefe;
    }
  }
  lVar2 = 0;
LAB_1407feefe:
  uVar3 = 0;
  if (*(longlong *)(lVar2 + 8) != 0) {
    uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 8) + 0x10);
  }
  FUN_140802ad0(uVar3);
  return;
}



// FUNCTION 1407fef20 FUN_1407fef20 body=747 status=ok
// SIG undefined FUN_1407fef20(void)

void FUN_1407fef20(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint *puVar10;
  undefined1 local_res20 [8];
  uint local_a8;
  uint uStack_a4;
  int iStack_94;
  uint uStack_90;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 uStack_70;
  uint *local_68;
  uint uStack_60;
  int iStack_5c;
  uint local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined4 uStack_38;
  int iStack_34;
  uint uStack_30;
  longlong local_28;
  longlong local_20;
  
  if ((((param_2 != DAT_14685e240) && (param_2 != DAT_14685e248)) && (param_2 != DAT_14685e250)) &&
     (param_2 != DAT_14685e258)) {
    plVar8 = (longlong *)0x0;
    local_78 = (longlong *)(param_1 + 0x28);
    uStack_a4 = 1;
    iVar1 = *(int *)(param_1 + 0x50);
    local_68 = (uint *)(param_1 + 0x38);
    local_a8 = 0;
    iStack_94 = 0;
    uStack_90 = 0;
    if (iVar1 != 0) {
      puVar10 = *(uint **)(param_1 + 0x48);
      if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
        puVar10 = local_68;
      }
      uVar2 = *puVar10;
      plVar7 = plVar8;
      plVar9 = plVar8;
      while (uVar2 == 0) {
        iVar4 = (int)plVar7;
        uStack_90 = (int)plVar9 + 0x20;
        plVar9 = (longlong *)(ulonglong)uStack_90;
        local_a8 = iVar4 + 1;
        plVar7 = (longlong *)(ulonglong)local_a8;
        if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1407ff022;
        uVar2 = puVar10[(longlong)iVar4 + 1];
      }
      uStack_a4 = -uVar2 & uVar2;
      iVar4 = 0x1f;
      if (uStack_a4 != 0) {
        for (; uStack_a4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_a4 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      iStack_94 = (uStack_90 - iVar4) + 0x1f;
      if (iVar1 < iStack_94) {
LAB_1407ff022:
        iStack_94 = iVar1;
      }
    }
    uStack_70 = CONCAT44(uStack_a4,local_a8);
    uStack_38 = 0xffffffff;
    iStack_34 = iStack_94;
    uStack_30 = uStack_90;
    uStack_60 = 0xffffffff;
    iStack_5c = iStack_94;
    local_58 = uStack_90;
    local_50 = local_78;
    uStack_48 = uStack_70;
    puStack_40 = local_68;
    if (iStack_94 < iVar1) {
      do {
        local_80 = (longlong *)0x0;
        lVar5 = *(longlong *)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
        plVar7 = plVar8;
        if (lVar5 != 0) {
          plVar7 = *(longlong **)(lVar5 + 0x10);
        }
        plVar9 = plVar8;
        if (plVar7 != (longlong *)0x0) {
          lVar5 = operator_new(0x18);
          plVar6 = plVar8;
          if (lVar5 != 0) {
            plVar6 = (longlong *)
                     TStrongObjectPtr<UMaterialInterface>::FInternalReferenceCollector::
                     FInternalReferenceCollector(lVar5,plVar7);
          }
          local_80 = plVar6;
          if (plVar6 != (longlong *)0x0) {
            plVar9 = (longlong *)plVar6[2];
          }
        }
        plVar7 = local_80;
        local_88 = param_2;
        FUN_140800100(plVar9 + 0x17,local_res20,&local_88,0);
        TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove(plVar9 + 0x21,local_88);
        cVar3 = FUN_140804090(plVar9);
        if (cVar3 != '\0') {
          FUN_140806520(plVar9);
        }
        cVar3 = FUN_140804090(plVar9);
        if ((cVar3 != '\0') && (plVar9[0x10] != 0)) {
          local_50._0_2_ = CONCAT11(1,DAT_1464b9ee9);
          uStack_48 = 0;
          puStack_40 = (uint *)((ulonglong)puStack_40 & 0xffffffff00000000);
          SLeafWidget::SetVisibility(plVar9[0x10],&local_50);
          FUN_140806520(plVar9);
          if (((int)plVar9[9] != 0) &&
             (((longlong *)plVar9[8] != (longlong *)0x0 &&
              (cVar3 = (**(code **)(*(longlong *)plVar9[8] + 0x18))(), cVar3 != '\0')))) {
            plVar6 = plVar8;
            if ((int)plVar9[9] != 0) {
              plVar6 = (longlong *)plVar9[8];
            }
            (**(code **)(*plVar6 + 0x40))(plVar6,1);
          }
          local_28 = plVar9[0x10];
          local_20 = plVar9[0x11];
          if (local_20 != 0) {
            LOCK();
            *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
            UNLOCK();
            plVar7 = local_80;
          }
          FUN_140806960(plVar9,&local_28);
        }
        if (plVar7 != (longlong *)0x0) {
          (**(code **)*plVar7)(plVar7,1);
        }
        uStack_60 = uStack_60 & ~uStack_70._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
      } while (iStack_5c < (int)local_68[6]);
    }
  }
  return;
}



// FUNCTION 1407ff210 FUN_1407ff210 body=530 status=ok
// SIG undefined FUN_1407ff210(void)

void FUN_1407ff210(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint *puVar9;
  undefined1 local_res18 [8];
  longlong local_res20;
  int local_68;
  uint uStack_64;
  int iStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  int local_48;
  longlong *local_40;
  int iStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  
  if ((((param_2 != DAT_14685e240) && (param_2 != DAT_14685e248)) && (param_2 != DAT_14685e250)) &&
     (param_2 != DAT_14685e258)) {
    iVar1 = *(int *)(param_1 + 0x50);
    puStack_30 = (uint *)(param_1 + 0x38);
    local_68 = 0;
    uStack_64 = 1;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    if (iVar1 != 0) {
      puVar9 = *(uint **)(param_1 + 0x48);
      if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
        puVar9 = puStack_30;
      }
      uVar2 = *puVar9;
      local_68 = 0;
      uStack_50 = 0;
      while (uVar2 == 0) {
        lVar6 = (longlong)local_68;
        uStack_50 = uStack_50 + 0x20;
        iVar5 = local_68 + 1;
        bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar5;
        if (bVar3) goto LAB_1407ff30f;
        uVar2 = puVar9[lVar6 + 1];
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
LAB_1407ff30f:
        local_58._4_4_ = iVar1;
      }
    }
    uStack_28 = 0xffffffff;
    iStack_24 = local_58._4_4_;
    iStack_20 = uStack_50;
    iStack_38 = local_68;
    uStack_34 = uStack_64;
    iStack_60 = local_68;
    uStack_5c = uStack_64;
    local_48 = uStack_50;
    uStack_50 = 0xffffffff;
    iStack_4c = local_58._4_4_;
    bVar3 = local_58._4_4_ < iVar1;
    local_40 = (longlong *)(param_1 + 0x28);
    local_58 = puStack_30;
    if (bVar3) {
      do {
        puVar4 = (undefined8 *)0x0;
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8 + (longlong)iStack_4c * 0x18);
        lVar7 = 0;
        if (lVar6 != 0) {
          lVar7 = *(longlong *)(lVar6 + 0x10);
        }
        puVar8 = (undefined8 *)0x0;
        if (lVar7 == 0) {
LAB_1407ff3b2:
          lVar6 = 0;
        }
        else {
          lVar6 = operator_new(0x18);
          if (lVar6 != 0) {
            puVar4 = (undefined8 *)
                     TStrongObjectPtr<UMaterialInterface>::FInternalReferenceCollector::
                     FInternalReferenceCollector(lVar6,lVar7);
          }
          puVar8 = puVar4;
          if (puVar4 == (undefined8 *)0x0) goto LAB_1407ff3b2;
          lVar6 = puVar4[2];
        }
        local_res20 = param_2;
        FUN_140800100(lVar6 + 0x108,local_res18,&local_res20,0);
        if (puVar8 != (undefined8 *)0x0) {
          (**(code **)*puVar8)(puVar8,1);
        }
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return;
}



// FUNCTION 1407ff480 FUN_1407ff480 body=282 status=ok
// SIG undefined FUN_1407ff480(void)

/* WARNING: Removing unreachable block (ram,0x0001407ff563) */

undefined8 * FUN_1407ff480(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  longlong *local_38;
  int local_30;
  
  plVar1 = (longlong *)(param_1 + 0x90);
  uVar5 = 0;
  *param_2 = 0;
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_38 = (longlong *)0x0;
    local_30 = 0;
    if (param_3 != &local_38) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_38);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_30 != 0) && (local_38 != (longlong *)0x0)) {
      puVar4 = (undefined8 *)(**(code **)(*local_38 + 0x20))(local_38,local_res8);
      uVar5 = *puVar4;
    }
    iVar2 = *(int *)(param_1 + 0x98);
    *(int *)(param_1 + 0x98) = iVar2 + 1;
    if (*(int *)(param_1 + 0x9c) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *param_2 = uVar5;
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_38;
    local_38 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_30;
    local_30 = 0;
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(plVar1);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return param_2;
}



// FUNCTION 1407ff5a0 FUN_1407ff5a0 body=942 status=ok
// SIG undefined FUN_1407ff5a0(void)

void FUN_1407ff5a0(longlong param_1,char param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  int *piVar10;
  longlong *plVar11;
  uint uVar12;
  char *pcVar13;
  longlong lVar14;
  int *piVar15;
  longlong lVar16;
  ulonglong uVar17;
  char local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int *local_58;
  int *local_50;
  char *local_48;
  
  if (-1 < param_3) {
    plVar11 = (longlong *)(param_1 + 0xc0);
    iVar6 = *(int *)(param_1 + 200);
    piVar15 = (int *)0x0;
    uVar17 = (ulonglong)param_3;
    iVar1 = *(int *)(param_1 + 0xf4);
    if (iVar6 != iVar1) {
      lVar14 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar14 = param_1 + 0xf8;
      }
      iVar7 = *(int *)(lVar14 + ((longlong)*(int *)(param_1 + 0x108) - 1U & uVar17) * 4);
      if (iVar7 != -1) {
        do {
          if (*(int *)(*plVar11 + (longlong)iVar7 * 0x10) == param_3) goto LAB_1407ff62a;
          iVar7 = *(int *)(*plVar11 + 8 + (longlong)iVar7 * 0x10);
        } while (iVar7 != -1);
      }
    }
    iVar7 = -1;
LAB_1407ff62a:
    local_res10[0] = param_2;
    local_res18[0] = param_3;
    if (iVar7 == -1) {
      local_50 = local_res18;
      local_48 = local_res10;
      FUN_1408006b0(plVar11,local_res20,&local_50,0);
    }
    else {
      if (iVar6 != iVar1) {
        lVar14 = *(longlong *)(param_1 + 0x100);
        if (*(longlong *)(param_1 + 0x100) == 0) {
          lVar14 = param_1 + 0xf8;
        }
        iVar7 = *(int *)(lVar14 + ((longlong)*(int *)(param_1 + 0x108) - 1U & uVar17) * 4);
        if (iVar7 != -1) {
          do {
            piVar10 = (int *)((longlong)iVar7 * 0x10 + *plVar11);
            if (*piVar10 == param_3) {
              if (iVar7 != -1) goto LAB_1407ff6c1;
              break;
            }
            iVar7 = piVar10[2];
          } while (iVar7 != -1);
        }
      }
      piVar10 = piVar15;
LAB_1407ff6c1:
      if ((char)piVar10[1] == param_2) {
        return;
      }
      if (iVar6 != iVar1) {
        lVar14 = *(longlong *)(param_1 + 0x100);
        if (*(longlong *)(param_1 + 0x100) == 0) {
          lVar14 = param_1 + 0xf8;
        }
        iVar6 = *(int *)(lVar14 + ((longlong)*(int *)(param_1 + 0x108) - 1U & uVar17) * 4);
        if (iVar6 != -1) {
          do {
            piVar10 = (int *)((longlong)iVar6 * 0x10 + *plVar11);
            if (*piVar10 == param_3) {
              if (iVar6 != -1) goto LAB_1407ff721;
              break;
            }
            iVar6 = piVar10[2];
          } while (iVar6 != -1);
        }
      }
      piVar10 = piVar15;
LAB_1407ff721:
      *(char *)(piVar10 + 1) = param_2;
    }
    iVar1 = local_res18[0];
    cVar4 = local_res10[0];
    *(int *)(param_1 + 0x17c) = *(int *)(param_1 + 0x17c) + 1;
    iVar6 = *(int *)(param_1 + 0x17c);
    bVar3 = false;
    iVar7 = *(int *)(param_1 + 0x170) + -1;
    lVar14 = (longlong)iVar7;
    if (-1 < iVar7) {
      lVar16 = lVar14 << 4;
      bVar3 = false;
      do {
        lVar2 = *(longlong *)(param_1 + 0x168);
        if (((*(int *)(lVar16 + 8 + lVar2) == 0) ||
            (plVar11 = *(longlong **)(lVar16 + lVar2), plVar11 == (longlong *)0x0)) ||
           (cVar5 = (**(code **)(*plVar11 + 0x40))(plVar11,cVar4,iVar1), cVar5 == '\0')) {
          bVar3 = true;
        }
        lVar16 = lVar16 + -0x10;
        lVar14 = lVar14 + -1;
      } while (-1 < lVar14);
      iVar6 = *(int *)(param_1 + 0x17c);
    }
    *(int *)(param_1 + 0x17c) = iVar6 + -1;
    if (bVar3) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x168),0)
      ;
    }
    if (DAT_146b17150 != 0) {
      iVar6 = *(int *)(DAT_146b17150 + 0xc);
      piVar10 = piVar15;
      if (iVar6 < (int)DAT_1469e91c4) {
        uVar12 = iVar6 >> 0x1f & 0xffff;
        uVar8 = iVar6 + uVar12;
        piVar10 = (int *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                         (longlong)(int)((uVar8 & 0xffff) - uVar12) * 0x18);
      }
      if (((uint)piVar10[2] >> 0x1d & 1) == 0) {
        uVar9 = FUN_142873b10(DAT_146b17150,local_res18[0]);
        FWeakObjectPtr::operator=(&local_58,uVar9);
        local_50 = local_58;
        piVar10 = (int *)TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                         ::FindId(param_1 + 0x28,local_res20,&local_50);
        if (*piVar10 != -1) {
          FWeakObjectPtr::operator=(&local_50,uVar9);
          local_58 = local_50;
          TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::FindId(param_1 + 0x28,local_res20,&local_58);
          cVar4 = local_res10[0];
          piVar10 = piVar15;
          if (local_res20[0] != -1) {
            piVar10 = (int *)(*(longlong *)(param_1 + 0x28) + (longlong)local_res20[0] * 0x18);
          }
          if (*(longlong *)(piVar10 + 2) != 0) {
            piVar15 = *(int **)(*(longlong *)(piVar10 + 2) + 0x10);
          }
          if (((*(longlong **)(piVar15 + 0x18) != (longlong *)0x0) &&
              (plVar11 = (longlong *)(**(code **)(**(longlong **)(piVar15 + 0x18) + 0xf8))(),
              plVar11 != (longlong *)0x0)) &&
             (plVar11 = (longlong *)(**(code **)(*plVar11 + 0x198))(plVar11),
             plVar11 != (longlong *)0x0)) {
            (**(code **)(*plVar11 + 0x50))(plVar11,"UPDATE_INPUT_MODE",1);
            pcVar13 = "keyboard";
            if (cVar4 == '\x01') {
              pcVar13 = "gamepad";
            }
            (**(code **)(*plVar11 + 0xb8))(plVar11,pcVar13);
            (**(code **)(*plVar11 + 0x58))(plVar11);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1407ff950 FUN_1407ff950 body=252 status=ok
// SIG undefined FUN_1407ff950(void)

/* WARNING: Removing unreachable block (ram,0x0001407ffa2d) */

undefined8 * FUN_1407ff950(longlong param_1,undefined8 *param_2,longlong **param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  uVar5 = 0;
  plVar1 = (longlong *)(param_1 + 0x168);
  *param_2 = 0;
  if ((*(int *)(param_3 + 1) != 0) && (plVar3 = *param_3, plVar3 != (longlong *)0x0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    if (param_3 != &local_28) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_28);
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
    if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
      puVar4 = (undefined8 *)(**(code **)(*local_28 + 0x20))(local_28,local_res8);
      uVar5 = *puVar4;
    }
    iVar2 = *(int *)(param_1 + 0x170);
    *(int *)(param_1 + 0x170) = iVar2 + 1;
    if (*(int *)(param_1 + 0x174) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
    }
    *param_2 = uVar5;
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
    *puVar4 = 0;
    *puVar4 = local_28;
    local_28 = (longlong *)0x0;
    *(int *)(puVar4 + 1) = local_20;
    local_20 = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return param_2;
}



// FUNCTION 1407ffa50 FUN_1407ffa50 body=183 status=ok
// SIG undefined FUN_1407ffa50(void)

void FUN_1407ffa50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x170)) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x168);
      if (((*(int *)(lVar5 + 8 + lVar1) != 0) &&
          (plVar2 = *(longlong **)(lVar5 + lVar1), plVar2 != (longlong *)0x0)) &&
         (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8), *plVar2 == param_2)
         ) {
        if ((*(int *)(lVar5 + 8 + lVar1) != 0) &&
           (plVar2 = *(longlong **)(lVar5 + lVar1), plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*(longlong *)(lVar5 + lVar1) != 0) {
            uVar3 = FMemory::Realloc(*(longlong *)(lVar5 + lVar1),0,0);
            *(undefined8 *)(lVar5 + lVar1) = uVar3;
          }
          *(undefined4 *)(lVar5 + 8 + lVar1) = 0;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (iVar4 < *(int *)(param_1 + 0x170));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x168),0);
  return;
}



// FUNCTION 1407ffb10 FUN_1407ffb10 body=113 status=ok
// SIG undefined FUN_1407ffb10(void)

void FUN_1407ffb10(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 local_res8 [8];
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  FWeakObjectPtr::operator=(&local_res20);
  local_18[0] = local_res20;
  piVar1 = (int *)TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  ::FindId(param_1 + 0x28,local_res8,local_18);
  if (*piVar1 != -1) {
    FWeakObjectPtr::operator=(&local_res20,param_2);
    local_18[0] = local_res20;
    TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x28,local_res8,local_18);
  }
  return;
}



// FUNCTION 1407ffb90 FUN_1407ffb90 body=8 status=ok
// SIG undefined FUN_1407ffb90(void)

longlong FUN_1407ffb90(longlong param_1)

{
  return param_1 + 0x110;
}



// FUNCTION 1407ffba0 FUN_1407ffba0 body=166 status=ok
// SIG undefined FUN_1407ffba0(void)

void FUN_1407ffba0(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  int local_res10 [6];
  int *local_18;
  int *local_10;
  
  if (*(int *)(param_1 + 0x118) != *(int *)(param_1 + 0x144)) {
    lVar3 = *(longlong *)(param_1 + 0x150);
    if (*(longlong *)(param_1 + 0x150) == 0) {
      lVar3 = param_1 + 0x148;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0x158) - 1U & (longlong)param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x110);
      do {
        if (*(int *)(lVar3 + (longlong)iVar2 * 0x10) == param_2) {
          if (iVar2 != -1) {
            return;
          }
          break;
        }
        iVar2 = *(int *)(lVar3 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  local_18 = local_res10;
  piVar1 = (int *)(param_1 + 0x160);
  local_res10[0] = param_2;
  local_10 = piVar1;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_&&>_>
            ((longlong *)(param_1 + 0x110),local_res8,&local_18,0);
  *piVar1 = *piVar1 + 1;
  return;
}



// FUNCTION 1407ffc50 FUN_1407ffc50 body=306 status=ok
// SIG undefined FUN_1407ffc50(void)

undefined8 * FUN_1407ffc50(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x32);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x30);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2d);
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (param_1[0x2a] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x22);
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (param_1[0x20] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x18);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x15);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x12);
  puVar1 = (undefined8 *)param_1[0x10];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  FUN_140467aa0(param_1 + 5,0);
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 3);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 1);
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 1407ffd90 FUN_1407ffd90 body=231 status=ok
// SIG undefined FUN_1407ffd90(void)

void FUN_1407ffd90(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143f77a38;
    *(undefined4 *)(plVar2 + 2) = local_18;
    *(undefined4 *)((longlong)plVar2 + 0x14) = uStack_14;
    *(undefined4 *)(plVar2 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_c;
    plVar2[1] = param_2;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f77a80;
  }
  if ((longlong *)&local_18 != param_1) {
    if (plVar2 == (longlong *)0x0) {
      if (((int)param_1[1] != 0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*param_1 != 0) {
          lVar3 = FMemory::Realloc(*param_1,0,0);
          *param_1 = lVar3;
        }
        *(undefined4 *)(param_1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 1407ffe80 FUN_1407ffe80 body=239 status=ok
// SIG undefined FUN_1407ffe80(void)

void FUN_1407ffe80(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar2 + 1,param_2);
    *(undefined4 *)(plVar2 + 2) = local_18;
    *(undefined4 *)((longlong)plVar2 + 0x14) = uStack_14;
    *(undefined4 *)(plVar2 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_143f77bd0;
  }
  if ((longlong *)&local_18 != param_1) {
    if (plVar2 == (longlong *)0x0) {
      if (((int)param_1[1] != 0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*param_1 != 0) {
          lVar3 = FMemory::Realloc(*param_1,0,0);
          *param_1 = lVar3;
        }
        *(undefined4 *)(param_1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 1407fff70 Emplace<TTuple<unsigned_int,bool>_const_&> body=386 status=ok
// SIG undefined Emplace<TTuple<unsigned_int,bool>_const_&>(void)

int * TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
      ::Emplace<TTuple<unsigned_int,bool>_const_&>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<int,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar8 = false;
  uVar1 = *param_3;
  *param_2 = local_38[0];
  *(undefined8 *)local_30 = uVar1;
  local_30[2] = 0xffffffff;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 != 1) {
    iVar3 = (int)uVar1;
    if (iVar7 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar3) * 4);
      if (iVar5 != -1) {
        do {
          if (*(int *)(*param_1 + (longlong)iVar5 * 0x10) == iVar3) goto LAB_14080002a;
          iVar5 = *(int *)(*param_1 + 8 + (longlong)iVar5 * 0x10);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_14080002a:
    bVar8 = iVar5 != -1;
    if (bVar8) {
      ::_guard_xfg_dispatch_icall_nop((void *)((longlong)iVar5 * 0x10 + *param_1),local_30,8);
      TSparseArray<TSetElement<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar5;
      goto LAB_1408000ca;
    }
  }
  cVar2 = TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
          ConditionalRehash(param_1,iVar7,0);
  if (cVar2 == '\0') {
    uVar6 = (int)param_1[9] - 1U & *local_30;
    local_30[3] = uVar6;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    local_30[2] = *(uint *)((longlong)plVar4 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
LAB_1408000ca:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 140800100 FUN_140800100 body=544 status=ok
// SIG undefined FUN_140800100(void)

int * FUN_140800100(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  bool bVar10;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar5 = *(int *)(*param_1 + 4 + (longlong)iVar6 * 0x10);
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 0x10) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  bVar10 = false;
  puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  plVar9 = (longlong *)((longlong)iVar6 * 0x10 + *param_1);
  lVar2 = *param_3;
  *plVar9 = lVar2;
  *(undefined4 *)(plVar9 + 1) = 0xffffffff;
  iVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar8 != 1) {
    if (iVar8 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar4 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar5 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar5 * 0x10) == lVar2) goto LAB_14080024a;
          iVar5 = *(int *)(*param_1 + 8 + (longlong)iVar5 * 0x10);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_14080024a:
    bVar10 = iVar5 != -1;
    if (bVar10) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar5 * 0x10 + *param_1),plVar9,8);
      TSparseArray<TSetElement<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar6,1);
      *param_2 = iVar5;
      goto LAB_1408002f7;
    }
  }
  cVar3 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::ConditionalRehash
                    (param_1,iVar8,0);
  if (cVar3 == '\0') {
    uVar7 = (int)((ulonglong)*plVar9 >> 0x20) + (int)*plVar9 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar9 + 0xc) = uVar7;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(plVar9 + 1) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_1408002f7:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 140800320 FUN_140800320 body=495 status=ok
// SIG undefined FUN_140800320(void)

int * FUN_140800320(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  int local_res8 [2];
  uint local_res10;
  uint local_res14;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0x18);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  bVar11 = false;
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar9 * 0x18);
  puVar3 = (uint *)*param_3;
  *puVar1 = *puVar3;
  puVar1[1] = puVar3[1];
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res14 = puVar1[1];
    local_res10 = *puVar1;
    TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,&local_res10);
    bVar11 = local_res8[0] != -1;
    if (bVar11) {
      lVar4 = *param_1;
      puVar5 = *(undefined8 **)(lVar4 + 8 + (longlong)local_res8[0] * 0x18);
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)local_res8[0] * 0x18),puVar1,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1408004ef;
    }
  }
  cVar6 = TSet<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar6 == '\0') {
    uVar10 = (puVar1[1] ^ *puVar1) & (int)param_1[9] - 1U;
    puVar1[5] = uVar10;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    puVar1[4] = *(uint *)((longlong)plVar8 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_1408004ef:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 140800510 Emplace<TPairInitializer<int_const_&,int_&&>_> body=402 status=ok
// SIG undefined Emplace<TPairInitializer<int_const_&,int_&&>_>(void)

int * TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<int,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar7 = false;
  puVar1 = (uint *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *param_2 = local_38[0];
  *local_30 = uVar5;
  local_30[1] = *puVar1;
  local_30[2] = 0xffffffff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar4 * 0x10) == *local_30) goto LAB_1408005da;
          iVar4 = *(int *)(*param_1 + 8 + (longlong)iVar4 * 0x10);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_1408005da:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      ::_guard_xfg_dispatch_icall_nop((void *)((longlong)iVar4 * 0x10 + *param_1),local_30,8);
      TSparseArray<TSetElement<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar4;
      goto LAB_14080067a;
    }
  }
  cVar2 = TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
          ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)param_1[9] - 1U & *local_30;
    local_30[3] = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    local_30[2] = *(uint *)((longlong)plVar3 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_14080067a:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 1408006b0 FUN_1408006b0 body=678 status=ok
// SIG undefined FUN_1408006b0(void)

int * FUN_1408006b0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  
  iVar7 = 1;
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
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x10);
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x10) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar11;
  lVar5 = (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  bVar16 = false;
  puVar14 = (uint *)((longlong)plVar6 + lVar5);
  *puVar14 = *puVar14 | 1 << ((byte)iVar11 & 0x1f);
  puVar1 = (undefined1 *)param_3[1];
  lVar8 = (longlong)iVar11 * 0x10;
  puVar14 = (uint *)(*param_1 + lVar8);
  *puVar14 = *(uint *)*param_3;
  *(undefined1 *)(puVar14 + 1) = *puVar1;
  puVar14[2] = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    iVar10 = iVar15;
    if (uVar13 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar6 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar14) * 4);
      if (iVar9 != -1) {
        do {
          iVar10 = iVar9;
          if (*(uint *)(*param_1 + (longlong)iVar9 * 0x10) == *puVar14) break;
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
      plVar6 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar14 = (uint *)((longlong)plVar6 + lVar5);
      *puVar14 = *puVar14 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_140800931;
    }
  }
  if (3 < uVar13) {
    uVar4 = (uVar13 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar7 = 0x20;
    if (uVar4 != 0) {
      iVar7 = 0x1f - iVar15;
    }
    uVar4 = (uVar13 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar12 = '\0';
    }
    else {
      cVar12 = '\x1f' - (char)iVar15;
    }
    iVar7 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar13 = (int)param_1[9] - 1U & *puVar14;
    puVar14[3] = uVar13;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    puVar14[2] = *(uint *)((longlong)plVar6 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Rehash
              (param_1);
  }
LAB_140800931:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 140800960 FUN_140800960 body=182 status=ok
// SIG undefined FUN_140800960(void)

longlong *
FUN_140800960(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x240);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_1440f90d0;
    if (puVar1 != (undefined8 *)0xfffffffffffffff0) {
      FUN_1417f4610();
    }
  }
  *param_1 = (longlong)(puVar1 + 2);
  param_1[1] = (longlong)puVar1;
  FUN_14044f790(param_1);
  param_1[2] = param_5;
  SWidget::SetDebugInfo(*param_1,param_2,param_3,param_4,0x230);
  return param_1;
}



// FUNCTION 140800a20 FUN_140800a20 body=162 status=ok
// SIG undefined FUN_140800a20(void)

undefined8 * FUN_140800a20(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x350);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_1440f90f0;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x340);
      FUN_1419618a0(_Dst);
      *_Dst = &PTR_FUN_1440f8d48;
      puVar1[100] = 0;
      *(undefined4 *)(puVar1 + 0x65) = 0;
      puVar1[0x66] = 0;
      *(undefined4 *)(puVar1 + 0x67) = 0;
      puVar1[0x68] = 0;
      puVar1[0x69] = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140800ad0 FUN_140800ad0 body=263 status=ok
// SIG undefined FUN_140800ad0(void)

undefined8 * FUN_140800ad0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  
  puVar2 = (undefined8 *)operator_new(0x348);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2 + 2;
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = &PTR_LAB_1440f90e0;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1404550c0(puVar1);
      *puVar1 = &PTR_FUN_1440f85f8;
      puVar2[0x5e] = 0;
      *(undefined4 *)(puVar2 + 0x5f) = 0;
      puVar2[0x60] = 0;
      *(undefined4 *)(puVar2 + 0x61) = 0;
      puVar2[0x62] = 0;
      *(undefined4 *)(puVar2 + 99) = 0;
      puVar2[100] = 0;
      *(undefined4 *)(puVar2 + 0x65) = 0;
      *(undefined4 *)(puVar2 + 0x66) = 0x3f800000;
      *(undefined4 *)((longlong)puVar2 + 0x334) = 0x3dcccccd;
      puVar2[0x67] = 0;
      puVar2[0x68] = 0;
      plVar3 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
      lVar4 = plVar3[0x1f];
      if (lVar4 == 0) {
        (**(code **)(*plVar3 + 0x368))(plVar3);
        lVar4 = plVar3[0x1f];
      }
      *(undefined4 *)(puVar2 + 0x66) = *(undefined4 *)(lVar4 + 0x44);
      *(undefined4 *)((longlong)puVar2 + 0x334) = *(undefined4 *)(lVar4 + 0x48);
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140800be0 FUN_140800be0 body=250 status=ok
// SIG undefined FUN_140800be0(void)

longlong FUN_140800be0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = DAT_1469eb218;
  lVar2 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x110) = DAT_1469eb220;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 140800ce0 FInternalReferenceCollector body=267 status=ok
// SIG undefined FInternalReferenceCollector(void)

undefined8 *
TStrongObjectPtr<UMaterialInterface>::FInternalReferenceCollector::FInternalReferenceCollector
          (undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__143f73ca8;
  if (DAT_1468c217e == '\0') {
    if (DAT_1469e6880 == 0) {
      uVar3 = GetTransientPackage();
      FUN_1417846f0(uVar3,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      lVar6 = 0;
      uVar4 = UGCObjectReferencer::GetPrivateStaticClass();
      DAT_1469e6880 = FUN_1417985e0(uVar4,uVar3,0,0,0,0,0,0,0);
      iVar1 = *(int *)(DAT_1469e6880 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar5 = iVar1 >> 0x1f & 0xffff;
        uVar2 = iVar1 + uVar5;
        lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
      }
      *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x40000000;
    }
    UGCObjectReferencer::AddObject(DAT_1469e6880,param_1);
    *(undefined1 *)(param_1 + 1) = 1;
  }
  param_1[2] = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__1440f8f50;
  return param_1;
}



// FUNCTION 140800df0 FUN_140800df0 body=182 status=ok
// SIG undefined FUN_140800df0(void)

longlong * FUN_140800df0(longlong *param_1,longlong *param_2,longlong param_3)

{
  double dVar1;
  LARGE_INTEGER local_res8;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[3] = 0;
  param_1[2] = param_3;
  QueryPerformanceCounter(&local_res8);
  dVar1 = (double)local_res8.QuadPart * DAT_1468b02f8;
  param_1[5] = (longlong)(param_1 + 3);
  param_1[4] = (longlong)(dVar1 + 16777216.0);
  QueryPerformanceCounter(&local_res8);
  param_1[4] = (longlong)((double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0);
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140800eb0 FUN_140800eb0 body=1185 status=ok
// SIG undefined FUN_140800eb0(void)

undefined8 * FUN_140800eb0(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  undefined4 uStack_2c;
  
  FUN_1417818c0();
  puVar4 = param_1 + 5;
  *puVar4 = &PTR__purecall_143f740d8;
  plVar2 = (longlong *)FUN_1404cfca0();
  iVar1 = (int)plVar2[1];
  *(int *)(plVar2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2,iVar1);
  }
  *(undefined8 **)(*plVar2 + (longlong)iVar1 * 8) = puVar4;
  *param_1 = &PTR_FUN_1440f8a88;
  *puVar4 = &PTR_FUN_1440f8d00;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x52) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(undefined2 *)((longlong)param_1 + 0x5a) = 0;
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
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    plVar2 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
    lVar6 = plVar2[0x1f];
    if (lVar6 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar6 = plVar2[0x1f];
    }
    *(undefined1 *)((longlong)param_1 + 0x59) = *(undefined1 *)(lVar6 + 0x2c);
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = 0x40805950;
      *(undefined4 *)((longlong)plVar2 + 0x14) = 1;
      *(undefined4 *)(plVar2 + 3) = 0;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_2c;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar3;
      *plVar2 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464b57b8,1);
      (**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
      iVar1 = DAT_1464b57c0;
      lVar3 = (longlong)DAT_1464b57c0;
      DAT_1464b57c0 = DAT_1464b57c0 + 1;
      if (DAT_1464b57c4 < DAT_1464b57c0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464b57b8,iVar1);
      }
      puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_1464b57b8);
      *puVar4 = plVar2;
      *(undefined4 *)(puVar4 + 1) = 3;
    }
    plVar2 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar2 + 1,param_1);
      *(undefined4 *)(plVar2 + 2) = 0x40805900;
      *(undefined4 *)((longlong)plVar2 + 0x14) = 1;
      *(undefined4 *)(plVar2 + 3) = 0;
      *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_2c;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[5] = lVar3;
      *plVar2 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464b57d0,1);
      (**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
      iVar1 = DAT_1464b57d8;
      lVar3 = (longlong)DAT_1464b57d8;
      DAT_1464b57d8 = DAT_1464b57d8 + 1;
      if (DAT_1464b57dc < DAT_1464b57d8) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464b57d0,iVar1);
      }
      puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_1464b57d0);
      *puVar4 = plVar2;
      *(undefined4 *)(puVar4 + 1) = 3;
    }
    if (*(char *)(lVar6 + 0x2d) != '\0') {
      plVar2 = (longlong *)GetMoviePlayer();
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x88))(plVar2);
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar5 + 1,param_1);
        *(undefined4 *)(plVar5 + 2) = 0x40805670;
        *(undefined4 *)((longlong)plVar5 + 0x14) = 1;
        *(undefined4 *)(plVar5 + 3) = 0;
        *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_2c;
        lVar3 = FDelegateHandle::GenerateNewID();
        plVar5[5] = lVar3;
        *plVar5 = (longlong)&PTR_FUN_143f77bd0;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
        (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
        iVar1 = (int)plVar2[1];
        *(int *)(plVar2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar1);
        }
        puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar2);
        *puVar4 = plVar5;
        *(undefined4 *)(puVar4 + 1) = 3;
      }
      plVar2 = (longlong *)GetMoviePlayer();
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x90))(plVar2);
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar5 + 1,param_1);
        *(undefined4 *)(plVar5 + 2) = 0x40805640;
        *(undefined4 *)((longlong)plVar5 + 0x14) = 1;
        *(undefined4 *)(plVar5 + 3) = 0;
        *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_2c;
        lVar3 = FDelegateHandle::GenerateNewID();
        plVar5[5] = lVar3;
        *plVar5 = (longlong)&PTR_FUN_143f77bd0;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
        (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
        iVar1 = (int)plVar2[1];
        *(int *)(plVar2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)plVar2 + 0xc) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar1);
        }
        puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar2);
        *puVar4 = plVar5;
        *(undefined4 *)(puVar4 + 1) = 3;
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x5a) = *(undefined1 *)(lVar6 + 0x2e);
  }
  return param_1;
}



// FUNCTION 140801360 FUN_140801360 body=151 status=ok
// SIG undefined FUN_140801360(void)

void FUN_140801360(ITextInputHandler *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x38);
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
                    /* WARNING: Could not recover jumptable at 0x0001408013f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cohtml::ITextInputHandler::~ITextInputHandler(param_1);
  return;
}



// FUNCTION 140801400 FUN_140801400 body=169 status=ok
// SIG undefined FUN_140801400(void)

void FUN_140801400(IViewListener *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x40);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001408014a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cohtml::IViewListener::~IViewListener(param_1);
  return;
}



// FUNCTION 1408014b0 FUN_1408014b0 body=123 status=ok
// SIG undefined FUN_1408014b0(void)

void FUN_1408014b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x338);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 800);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x310);
  SBox::~SBox(param_1);
  return;
}



// FUNCTION 140801530 FUN_140801530 body=147 status=ok
// SIG undefined FUN_140801530(void)

void FUN_140801530(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x330);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x310);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x300);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2f0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2e0);
  FUN_140458a10(param_1);
  return;
}



// FUNCTION 1408015d0 ~SOverlay body=169 status=ok
// SIG undefined ~SOverlay(void)

void SOverlay::~SOverlay(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  plVar1 = (longlong *)(param_1 + 0x218);
  plVar2 = (longlong *)*plVar1;
  for (iVar4 = *(int *)(param_1 + 0x220); iVar4 != 0; iVar4 = iVar4 + -1) {
    lVar3 = *plVar2;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar3 + 0x40);
    FSlotBase::~FSlotBase(lVar3);
    FMemory::Free(*plVar2);
    plVar2 = plVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x220) = 0;
  if (*(int *)(param_1 + 0x224) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x208) = &PTR__purecall_143f48980;
  FUN_1417f85e0(param_1);
  return;
}



// FUNCTION 140801680 FUN_140801680 body=497 status=ok
// SIG undefined FUN_140801680(void)

void FUN_140801680(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong local_10;
  
  *param_1 = &PTR_FUN_1440f8a88;
  param_1[5] = &PTR_FUN_1440f8d00;
  if (((DAT_146b17150 != 0) && (*(longlong *)(DAT_146b17150 + 0x7b0) != 0)) &&
     (lVar4 = param_1[0x10], lVar4 != 0)) {
    local_10 = param_1[0x11];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    local_18 = lVar4;
    FUN_140806960(param_1,&local_18);
  }
  FUN_140809060(param_1);
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if (param_1[0x29] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x21);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x17);
  plVar5 = (longlong *)param_1[0x15];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  plVar5 = (longlong *)param_1[0x13];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  plVar5 = (longlong *)param_1[0x11];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
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
  plVar5 = (longlong *)param_1[0xf];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
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
  plVar5 = (longlong *)param_1[0xd];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 6);
  FUN_1404bf750(param_1 + 5);
  FUN_141782120(param_1);
  return;
}



// FUNCTION 140801880 operator= body=369 status=ok
// SIG undefined operator=(void)

longlong *
TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::operator=
          (longlong *param_1,longlong *param_2)

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
    Empty(param_1,(int)param_2[1] - *(int *)((longlong)param_2 + 0x34));
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
        if (bVar3) goto LAB_14080195d;
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
LAB_14080195d:
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
        TSet<TTuple<unsigned_int,bool>,TDefaultMapHashableKeyFuncs<unsigned_int,bool,0>,FDefaultSetAllocator>
        ::Emplace<TTuple<unsigned_int,bool>_const_&>
                  (param_1,local_res8,(longlong)iStack_3c * 0x10 + *param_2,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 140801a00 FUN_140801a00 body=283 status=ok
// SIG undefined FUN_140801a00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_140801a00(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  plVar5 = *(longlong **)(param_1 + 0x18);
  puVar1 = (undefined8 *)(param_1 + 0x10);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  FSlotBase::DetatchParentFromContent();
  plVar6 = (longlong *)param_2[1];
  uVar7 = *param_2;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_48 = uVar7;
  plStack_40 = plVar6;
  if (&local_48 != puVar1) {
    local_48 = *puVar1;
    plStack_40 = *(longlong **)(param_1 + 0x18);
    *puVar1 = uVar7;
    *(longlong **)(param_1 + 0x18) = plVar6;
    local_38 = uVar7;
    plStack_30 = plVar6;
  }
  plVar6 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_40 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  FUN_141802340(param_1);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    lVar8 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return param_1;
}



// FUNCTION 140801b20 FUN_140801b20 body=685 status=ok
// SIG undefined FUN_140801b20(void)

ulonglong FUN_140801b20(undefined1 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  bool bVar11;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  plVar10 = (longlong *)0x0;
  local_88 = 0;
  plVar8 = (longlong *)FUN_1404b0000(&local_88);
  bVar11 = plVar8 != (longlong *)0x0;
  if (bVar11) {
    puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x78))(plVar8,local_58);
    plVar8 = (longlong *)*puVar9;
  }
  else {
    puVar9 = &local_78;
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    plVar8 = plVar10;
  }
  plVar5 = (longlong *)puVar9[1];
  puVar9[1] = 0;
  *puVar9 = 0;
  if (bVar11) {
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  }
  plVar1 = plStack_70;
  if (!bVar11) {
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_70 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_70 + 8))(plStack_70,1);
        }
      }
    }
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x10))(plVar8,*param_1);
  }
  local_80 = 0;
  plVar8 = (longlong *)FUN_1404b0000(&local_80);
  bVar11 = plVar8 != (longlong *)0x0;
  if (bVar11) {
    puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x98))(plVar8,local_48);
    plVar10 = (longlong *)*puVar9;
  }
  else {
    puVar9 = &local_68;
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
  }
  plVar8 = (longlong *)puVar9[1];
  puVar9[1] = 0;
  *puVar9 = 0;
  if (bVar11) {
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar7 = (int)lVar6 - 1;
      puVar9 = (undefined8 *)(ulonglong)uVar7;
      if (uVar7 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        puVar9 = (undefined8 *)(ulonglong)(iVar4 - 1U);
        if (iVar4 - 1U == 0) {
          puVar9 = (undefined8 *)(**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  plVar1 = plStack_60;
  if ((!bVar11) && (plStack_60 != (longlong *)0x0)) {
    LOCK();
    plVar3 = plStack_60 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    uVar7 = (int)lVar6 - 1;
    puVar9 = (undefined8 *)(ulonglong)uVar7;
    if (uVar7 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      puVar9 = (undefined8 *)(ulonglong)(iVar4 - 1U);
      if (iVar4 - 1U == 0) {
        puVar9 = (undefined8 *)(**(code **)(*plStack_60 + 8))(plStack_60,1);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x40))(plVar10,*param_1,*param_1);
    puVar9 = (undefined8 *)(**(code **)(*plVar10 + 0x18))(plVar10,*param_1);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar8 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    uVar7 = (int)lVar6 - 1;
    puVar9 = (undefined8 *)(ulonglong)uVar7;
    if (uVar7 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      puVar9 = (undefined8 *)(ulonglong)(iVar4 - 1U);
      if (iVar4 - 1U == 0) {
        puVar9 = (undefined8 *)(**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar5 + 1;
    lVar6 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    uVar7 = (int)lVar6 - 1;
    puVar9 = (undefined8 *)(ulonglong)uVar7;
    if (uVar7 == 0) {
      puVar9 = (undefined8 *)(**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        puVar9 = (undefined8 *)(**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return (ulonglong)puVar9 & 0xffffffffffffff00;
}



// FUNCTION 140801e10 FUN_140801e10 body=43 status=ok
// SIG undefined FUN_140801e10(void)

undefined8 * FUN_140801e10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x350);
  }
  return param_1;
}



// FUNCTION 140801e40 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SSlider>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x348);
  }
  return param_1;
}



// FUNCTION 140801e70 FUN_140801e70 body=52 status=ok
// SIG undefined FUN_140801e70(void)

undefined8 FUN_140801e70(undefined8 param_1,ulonglong param_2)

{
  FUN_140801360();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 140801eb0 FUN_140801eb0 body=315 status=ok
// SIG undefined FUN_140801eb0(void)

longlong FUN_140801eb0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xb0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xa0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x90);
  plVar4 = *(longlong **)(param_1 + 0x80);
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
  plVar4 = *(longlong **)(param_1 + 0x70);
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
  plVar4 = *(longlong **)(param_1 + 0x50);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  FUN_140801400(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 140801ff0 FUN_140801ff0 body=78 status=ok
// SIG undefined FUN_140801ff0(void)

undefined8 FUN_140801ff0(undefined8 param_1,ulonglong param_2)

{
  FUN_1408014b0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x340);
  }
  return param_1;
}



// FUNCTION 140802040 FUN_140802040 body=78 status=ok
// SIG undefined FUN_140802040(void)

undefined8 FUN_140802040(undefined8 param_1,ulonglong param_2)

{
  FUN_140801530();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x338);
  }
  return param_1;
}



// FUNCTION 140802090 FUN_140802090 body=52 status=ok
// SIG undefined FUN_140802090(void)

undefined8 FUN_140802090(undefined8 param_1,ulonglong param_2)

{
  FUN_140801680();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 1408020f0 FUN_1408020f0 body=421 status=ok
// SIG undefined FUN_1408020f0(void)

void FUN_1408020f0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  if ((*(char *)(param_1 + 0x160) == '\0') &&
     (*(char *)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0x80) != '\0')) {
    lVar5 = FUN_140803250();
    if (lVar5 != 0) {
      plVar6 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
      lVar7 = plVar6[0x1f];
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x368))(plVar6);
        lVar7 = plVar6[0x1f];
      }
      local_38 = *param_2;
      local_30 = param_2[1];
      if (local_30 != 0) {
        LOCK();
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(**(longlong **)(DAT_146b17150 + 0x7b0) + 0x2b0))
                (*(longlong **)(DAT_146b17150 + 0x7b0),lVar5,&local_38,*(undefined4 *)(lVar7 + 0x28)
                );
      goto LAB_14080224e;
    }
    plVar6 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
    lVar5 = plVar6[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x368))(plVar6);
      lVar5 = plVar6[0x1f];
    }
    local_28 = *param_2;
    local_20 = param_2[1];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    uVar4 = *(undefined4 *)(lVar5 + 0x28);
    puVar8 = &local_28;
  }
  else {
    plVar6 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
    lVar5 = plVar6[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar6 + 0x368))(plVar6);
      lVar5 = plVar6[0x1f];
    }
    local_18 = *param_2;
    local_10 = param_2[1];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    uVar4 = *(undefined4 *)(lVar5 + 0x28);
    puVar8 = &local_18;
  }
  (**(code **)(**(longlong **)(DAT_146b17150 + 0x7b0) + 0x2a0))
            (*(longlong **)(DAT_146b17150 + 0x7b0),puVar8,uVar4);
LAB_14080224e:
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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



// FUNCTION 1408022a0 FUN_1408022a0 body=91 status=ok
// SIG undefined FUN_1408022a0(void)

void FUN_1408022a0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 local_res8 [8];
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_140800100(param_1 + 0xb8,local_res8,local_res10,0);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove(param_1 + 0x108,local_res10[0]);
  cVar1 = FUN_140804090(param_1);
  if (cVar1 != '\0') {
    FUN_140806520(param_1);
  }
  FUN_140803b10(param_1,1);
  return;
}



// FUNCTION 140802300 FUN_140802300 body=47 status=ok
// SIG undefined FUN_140802300(void)

void FUN_140802300(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0xf8))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140802323. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x1c8))(plVar1,"Blur_Input");
    return;
  }
  return;
}



// FUNCTION 140802330 FUN_140802330 body=99 status=ok
// SIG undefined FUN_140802330(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140802330(longlong *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0x130))(param_1,0);
  (**(code **)(*param_1 + 0x148))(param_1);
  if (((int)param_1[2] != 0) && ((longlong *)param_1[1] != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)param_1[1] + 0x18))();
    if (cVar1 != '\0') {
      if ((int)param_1[2] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014080237b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(longlong *)param_1[1] + 0x40))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000140802389. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x40))();
      return;
    }
  }
  return;
}



// FUNCTION 1408023a0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,0>,FDefaultSetAllocator>
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
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140802450 FUN_140802450 body=499 status=ok
// SIG undefined FUN_140802450(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140802450(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  longlong *plStack_230;
  undefined8 local_228;
  longlong *plStack_220;
  undefined1 local_218 [296];
  undefined1 local_f0 [24];
  longlong *local_d8;
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  plVar6 = *(longlong **)(param_2 + 0x110);
  uVar7 = *(undefined8 *)(param_2 + 0x108);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14068f180(local_218);
  *(undefined8 *)(lVar9 + 0x108) = 0;
  puVar4 = (undefined8 *)(lVar9 + 0x138);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_238 = uVar7;
  plStack_230 = plVar6;
  if (&local_238 != puVar4) {
    local_238 = *puVar4;
    plStack_230 = *(longlong **)(lVar9 + 0x140);
    *puVar4 = uVar7;
    *(longlong **)(lVar9 + 0x140) = plVar6;
    local_228 = uVar7;
    plStack_220 = plVar6;
  }
  plVar3 = plStack_230;
  if (plStack_230 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_230 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_230)(plStack_230);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plStack_230 + 8))(plStack_230,1);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar6 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar6)(plVar6);
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
  FUN_141972160(param_1,lVar9);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_38);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_50);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_80);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_98);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_b0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_c8);
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_d8 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar2 = (int *)((longlong)local_d8 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_d8 + 8))(local_d8,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_f0);
  FUN_140456c70(local_218);
  return;
}



// FUNCTION 140802650 FUN_140802650 body=55 status=ok
// SIG undefined FUN_140802650(void)

void FUN_140802650(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1440f8fb0;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 140802690 FUN_140802690 body=64 status=ok
// SIG undefined FUN_140802690(void)

void FUN_140802690(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_1440f9090;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 1408026d0 FUN_1408026d0 body=74 status=ok
// SIG undefined FUN_1408026d0(void)

void FUN_1408026d0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1440f9050;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 140802720 FUN_140802720 body=9 status=ok
// SIG undefined FUN_140802720(void)

void FUN_140802720(longlong param_1)

{
  FUN_140801360(param_1 + 0x10);
  return;
}



// FUNCTION 140802750 FUN_140802750 body=9 status=ok
// SIG undefined FUN_140802750(void)

void FUN_140802750(longlong param_1)

{
  SOverlay::~SOverlay(param_1 + 0x10);
  return;
}



// FUNCTION 140802760 FUN_140802760 body=117 status=ok
// SIG undefined FUN_140802760(void)

void FUN_140802760(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_140467aa0();
  cVar1 = TSet<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2);
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



// FUNCTION 1408027f0 FindId body=207 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,uint *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  uint local_res8;
  uint local_resc;
  undefined4 local_res20;
  undefined4 local_res24;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(param_3[1] ^ *param_3) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar5 != -1) {
      lVar4 = *param_1;
      do {
        local_res8 = *param_3;
        lVar1 = (longlong)iVar5 * 0x18;
        local_res20 = *(undefined4 *)(lVar1 + lVar4);
        local_res24 = *(undefined4 *)(lVar1 + 4 + lVar4);
        local_resc = param_3[1];
        cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_res20,&local_res8);
        if (cVar2 != '\0') {
          *param_2 = iVar5;
          return param_2;
        }
        lVar4 = *param_1;
        iVar5 = *(int *)(lVar1 + 0x10 + lVar4);
      } while (iVar5 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1408028e0 FUN_1408028e0 body=491 status=ok
// SIG undefined FUN_1408028e0(void)

undefined8 * FUN_1408028e0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  wchar_t *pwVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  longlong *local_28;
  undefined8 local_20;
  
  lVar9 = 0;
  lVar3 = lVar9;
  if (((*(longlong **)(param_1 + 0x28) != (longlong *)0x0) &&
      (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x88))(), iVar2 != -1)) &&
     (lVar3 = 0, DAT_146b17150 != 0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_1428741a0(DAT_146b17150,&local_28);
    plVar5 = local_28 + (int)local_20;
    plVar7 = local_28;
    while ((lVar3 = lVar9, plVar7 != plVar5 &&
           (((*plVar7 == 0 || (lVar3 = FUN_14270bb10(), lVar3 == 0)) ||
            (*(int *)(lVar3 + 0x108) != iVar2))))) {
      plVar7 = plVar7 + 1;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  puVar4 = (undefined8 *)FName::FName(local_res8,L"GbxShiftOverlay",1);
  plVar5 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar4);
  if (plVar5 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    pwVar6 = L"xbox";
  }
  else {
    cVar1 = (**(code **)(*plVar5 + 0xa8))(plVar5,lVar3);
    *param_2 = 0;
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    if (cVar1 == '\x01') {
      *(undefined4 *)(param_2 + 1) = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      uVar8 = 8;
      pwVar6 = L"ps4";
      goto LAB_140802ab6;
    }
    if (cVar1 == '\x02') {
      *(undefined4 *)(param_2 + 1) = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      uVar8 = 8;
      pwVar6 = L"ps5";
      goto LAB_140802ab6;
    }
    if (cVar1 == '\x03') {
      *(undefined4 *)(param_2 + 1) = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      uVar8 = 0xe;
      pwVar6 = L"switch";
      goto LAB_140802ab6;
    }
    if (cVar1 == '\x04') {
      *(undefined4 *)(param_2 + 1) = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      uVar8 = 0xe;
      pwVar6 = L"stadia";
      goto LAB_140802ab6;
    }
    *(undefined4 *)(param_2 + 1) = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    pwVar6 = L"xbox";
  }
  uVar8 = 10;
LAB_140802ab6:
  FGenericPlatformString::Memcpy(*param_2,pwVar6,uVar8);
  return param_2;
}



// FUNCTION 140802ad0 FUN_140802ad0 body=185 status=ok
// SIG undefined FUN_140802ad0(void)

ulonglong FUN_140802ad0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong in_RAX;
  undefined7 uVar3;
  byte bVar4;
  
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x88))();
    iVar1 = (int)in_RAX;
    if (-1 < iVar1) {
      if (iVar1 < 8) {
        bVar4 = (&DAT_1468c21f8)[iVar1];
      }
      else {
        bVar4 = 0;
      }
      uVar2 = bVar4 - 2;
      in_RAX = (ulonglong)uVar2;
      if (uVar2 < 8) {
        in_RAX = (ulonglong)(int)uVar2;
        switch(uVar2) {
        case 0:
        case 1:
          iVar1 = 1;
          break;
        case 2:
          iVar1 = 6;
          break;
        default:
          iVar1 = 2;
          break;
        case 6:
          iVar1 = 4;
          break;
        case 7:
          iVar1 = 5;
        }
      }
      else {
        iVar1 = 3;
      }
      uVar3 = (undefined7)(in_RAX >> 8);
      if (iVar1 == 1) {
        return CONCAT71(uVar3,1);
      }
      if (iVar1 != 2) {
        if (iVar1 == 4) {
          return CONCAT71(uVar3,3);
        }
        if (iVar1 == 5) {
          return CONCAT71(uVar3,4);
        }
        if (iVar1 == 6) {
          return CONCAT71(uVar3,2);
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140802bb0 FUN_140802bb0 body=90 status=ok
// SIG undefined FUN_140802bb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140802bb0(longlong param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if ((*(int *)(param_1 + 0xb8) != 0) && (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0)) {
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x18))();
    if ((char)in_RAX != '\0') {
      if (*(int *)(param_1 + 0xb8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140802bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x38))();
        return uVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x000140802bfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(_DAT_00000000 + 0x38))();
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140802c10 FUN_140802c10 body=144 status=ok
// SIG undefined FUN_140802c10(void)

bool FUN_140802c10(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar3 = FUN_140803250();
  if (lVar3 != 0) {
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar3 = UPlayer::GetPlayerController(lVar3,uVar4);
    if (lVar3 != 0) {
      lVar5 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        cVar2 = FUN_142dd3d20(lVar3);
        return cVar2 != '\0';
      }
    }
  }
  return false;
}



// FUNCTION 140802ca0 FUN_140802ca0 body=167 status=ok
// SIG undefined FUN_140802ca0(void)

undefined8 * FUN_140802ca0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 local_res18 [16];
  
  FName::FName(local_res18,L"GbxShiftOverlay",1);
  plVar1 = (longlong *)FModuleManager::GetModulePtr_Internal();
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x108))();
    *param_2 = 0;
    param_2[1] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
    param_2[8] = 0;
    *(undefined4 *)(param_2 + 9) = 0;
    TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::operator=
              (param_2,uVar2);
    return param_2;
  }
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[7] = 0;
  param_2[9] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  return param_2;
}



// FUNCTION 140802d50 FUN_140802d50 body=1277 status=ok
// SIG undefined FUN_140802d50(void)

longlong * FUN_140802d50(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  wchar_t wVar3;
  longlong *plVar4;
  void *_Src;
  wint_t wVar5;
  wint_t wVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  wint_t *pwVar11;
  wchar_t *pwVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  undefined4 uVar16;
  undefined2 *local_38;
  int local_30;
  
  lVar7 = FInternationalization::Get();
  plVar4 = *(longlong **)(lVar7 + 0x30);
  uVar8 = *(undefined8 *)(lVar7 + 0x28);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  uVar8 = FUN_140511b50(uVar8);
  FString::FString(param_2,uVar8);
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
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  if ((int)param_2[1] == 0) {
    puVar13 = &DAT_143f3eda8;
  }
  else {
    puVar13 = (undefined2 *)*param_2;
  }
  pwVar11 = &DAT_1440f70ac;
  do {
    wVar5 = *(wint_t *)((longlong)(puVar13 + -0xa207b856) + (longlong)pwVar11);
    if ((wVar5 == 0) && (*pwVar11 == 0)) goto LAB_140802e21;
    if (wVar5 != *pwVar11) {
      wVar5 = towlower(wVar5);
      wVar6 = towlower(*pwVar11);
      if (wVar5 != wVar6) break;
    }
    pwVar11 = pwVar11 + 1;
  } while( true );
  if (wVar5 != wVar6) {
    return param_2;
  }
LAB_140802e21:
  lVar7 = FInternationalization::Get();
  plVar4 = *(longlong **)(lVar7 + 0x30);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar9 = (undefined8 *)FCulture::GetName();
  puVar13 = (undefined2 *)0x0;
  local_38 = (undefined2 *)0x0;
  local_30 = *(int *)(puVar9 + 1);
  lVar7 = (longlong)local_30;
  _Src = (void *)*puVar9;
  if (local_30 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
    puVar13 = local_38;
    _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar7 * 2);
  }
  puVar15 = puVar13;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    puVar15 = local_38;
    if ((int)lVar7 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      puVar15 = local_38;
      if (iVar10 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
        puVar15 = local_38;
      }
    }
  }
  iVar10 = local_30;
  pwVar12 = L"zh-Hans-CN";
  puVar14 = &DAT_143f3eda8;
  if (local_30 != 0) {
    puVar14 = puVar13;
  }
  do {
    wVar3 = *(wchar_t *)((longlong)(puVar14 + -0xa207bb80) + (longlong)pwVar12);
    if ((wVar3 == L'\0') && (*pwVar12 == L'\0')) goto LAB_1408031c7;
    if (wVar3 != *pwVar12) {
      wVar5 = towlower(wVar3);
      wVar6 = towlower(*pwVar12);
      if (wVar5 != wVar6) break;
    }
    pwVar12 = pwVar12 + 1;
  } while( true );
  if (wVar5 != wVar6) {
    pwVar12 = L"zh-Hans-SP";
    puVar13 = &DAT_143f3eda8;
    if (iVar10 != 0) {
      puVar13 = puVar15;
    }
    do {
      wVar3 = *(wchar_t *)((longlong)(puVar13 + -0xa207bb8c) + (longlong)pwVar12);
      if ((wVar3 == L'\0') && (*pwVar12 == L'\0')) break;
      if (wVar3 != *pwVar12) {
        wVar5 = towlower(wVar3);
        wVar6 = towlower(*pwVar12);
        if (wVar5 != wVar6) goto LAB_140802f74;
      }
      pwVar12 = pwVar12 + 1;
    } while( true );
  }
  goto LAB_1408031c7;
LAB_140802f74:
  if (wVar5 != wVar6) {
    pwVar12 = L"zh-Hans";
    puVar13 = &DAT_143f3eda8;
    if (iVar10 != 0) {
      puVar13 = puVar15;
    }
    do {
      wVar3 = *(wchar_t *)((longlong)(puVar13 + -0xa207bb98) + (longlong)pwVar12);
      if ((wVar3 == L'\0') && (*pwVar12 == L'\0')) break;
      if (wVar3 != *pwVar12) {
        wVar5 = towlower(wVar3);
        wVar6 = towlower(*pwVar12);
        if (wVar5 != wVar6) goto LAB_140802fca;
      }
      pwVar12 = pwVar12 + 1;
    } while( true );
  }
  goto LAB_1408031c7;
LAB_140802fca:
  if (wVar5 != wVar6) {
    pwVar11 = &DAT_1440f7740;
    puVar13 = &DAT_143f3eda8;
    if (iVar10 != 0) {
      puVar13 = puVar15;
    }
    do {
      wVar5 = *(wint_t *)((longlong)(puVar13 + -0xa207bba0) + (longlong)pwVar11);
      if ((wVar5 == 0) && (*pwVar11 == 0)) break;
      if (wVar5 != *pwVar11) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar11);
        if (wVar5 != wVar6) goto LAB_140803024;
      }
      pwVar11 = pwVar11 + 1;
    } while( true );
  }
  goto LAB_1408031c7;
LAB_14080307a:
  if (wVar5 != wVar6) {
    pwVar12 = L"zh-Hant-HK";
    puVar13 = &DAT_143f3eda8;
    if (iVar10 != 0) {
      puVar13 = puVar15;
    }
    do {
      wVar3 = *(wchar_t *)((longlong)(puVar13 + -0xa207bbbc) + (longlong)pwVar12);
      if ((wVar3 == L'\0') && (*pwVar12 == L'\0')) break;
      if (wVar3 != *pwVar12) {
        wVar5 = towlower(wVar3);
        wVar6 = towlower(*pwVar12);
        if (wVar5 != wVar6) goto LAB_1408030d4;
      }
      pwVar12 = pwVar12 + 1;
    } while( true );
  }
  goto LAB_140803180;
LAB_1408030d4:
  if (wVar5 != wVar6) {
    pwVar12 = L"zh-Hant";
    puVar13 = &DAT_143f3eda8;
    if (iVar10 != 0) {
      puVar13 = puVar15;
    }
    do {
      wVar3 = *(wchar_t *)((longlong)(puVar13 + -0xa207bbc8) + (longlong)pwVar12);
      if ((wVar3 == L'\0') && (*pwVar12 == L'\0')) break;
      if (wVar3 != *pwVar12) {
        wVar5 = towlower(wVar3);
        wVar6 = towlower(*pwVar12);
        if (wVar5 != wVar6) goto LAB_140803126;
      }
      pwVar12 = pwVar12 + 1;
    } while( true );
  }
  goto LAB_140803180;
LAB_140803126:
  if (wVar5 != wVar6) {
    pwVar11 = &DAT_1440f77a0;
    puVar13 = &DAT_143f3eda8;
    if (iVar10 != 0) {
      puVar13 = puVar15;
    }
    do {
      wVar5 = *(wint_t *)((longlong)(puVar13 + -0xa207bbd0) + (longlong)pwVar11);
      if ((wVar5 == 0) && (*pwVar11 == 0)) break;
      if (wVar5 != *pwVar11) {
        wVar5 = towlower(wVar5);
        wVar6 = towlower(*pwVar11);
        if (wVar5 != wVar6) goto LAB_140803172;
      }
      pwVar11 = pwVar11 + 1;
    } while( true );
  }
LAB_140803180:
  if ((wchar_t *)*param_2 == L"zh-Hant") goto LAB_14080320e;
  iVar10 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 8) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,8);
    iVar10 = (int)param_2[1];
  }
  *(int *)(param_2 + 1) = iVar10 + 8;
  if (*(int *)((longlong)param_2 + 0xc) < iVar10 + 8) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
  }
  uVar16._0_2_ = L't';
  uVar16._2_2_ = L'\0';
  goto LAB_140803208;
LAB_140803172:
  if (wVar5 != wVar6) goto LAB_14080320e;
  goto LAB_140803180;
LAB_140803024:
  if (wVar5 != wVar6) {
    pwVar12 = L"zh-Hant-TW";
    puVar13 = &DAT_143f3eda8;
    if (iVar10 != 0) {
      puVar13 = puVar15;
    }
    do {
      wVar3 = *(wchar_t *)((longlong)(puVar13 + -0xa207bbb0) + (longlong)pwVar12);
      if ((wVar3 == L'\0') && (*pwVar12 == L'\0')) goto LAB_140803180;
      if (wVar3 != *pwVar12) {
        wVar5 = towlower(wVar3);
        wVar6 = towlower(*pwVar12);
        if (wVar5 != wVar6) goto LAB_14080307a;
      }
      pwVar12 = pwVar12 + 1;
    } while( true );
  }
LAB_1408031c7:
  if ((wchar_t *)*param_2 != L"zh-Hans") {
    iVar10 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,8);
      iVar10 = (int)param_2[1];
    }
    *(int *)(param_2 + 1) = iVar10 + 8;
    if (*(int *)((longlong)param_2 + 0xc) < iVar10 + 8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
    }
    uVar16._0_2_ = L's';
    uVar16._2_2_ = L'\0';
LAB_140803208:
    pwVar12 = (wchar_t *)*param_2;
    pwVar12[0] = L'z';
    pwVar12[1] = L'h';
    pwVar12[2] = L'-';
    pwVar12[3] = L'H';
    pwVar12[4] = L'a';
    pwVar12[5] = L'n';
    *(undefined4 *)(pwVar12 + 6) = uVar16;
  }
LAB_14080320e:
  if (puVar15 != (undefined2 *)0x0) {
    FMemory::Free(puVar15);
  }
  return param_2;
}



// FUNCTION 140803250 FUN_140803250 body=217 status=ok
// SIG undefined FUN_140803250(void)

longlong FUN_140803250(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *local_18;
  undefined8 local_10;
  
  if (*(longlong **)(param_1 + 0x70) == (longlong *)0x0) {
    return 0;
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x88))();
  if ((-1 < iVar2) && (DAT_146b17150 != 0)) {
    local_18 = (longlong *)0x0;
    local_10 = 0;
    FUN_1428741a0(DAT_146b17150,&local_18);
    plVar1 = local_18 + (int)local_10;
    plVar4 = local_18;
    while ((lVar3 = 0, plVar4 != plVar1 &&
           (((*plVar4 == 0 || (lVar3 = FUN_14270bb10(), lVar3 == 0)) ||
            (*(int *)(lVar3 + 0x108) != iVar2))))) {
      plVar4 = plVar4 + 1;
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
    return lVar3;
  }
  return 0;
}



// FUNCTION 140803330 FUN_140803330 body=479 status=ok
// SIG undefined FUN_140803330(void)

undefined8 * FUN_140803330(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *local_28;
  undefined8 local_20;
  
  if (((*(longlong **)(param_1 + 0x28) != (longlong *)0x0) &&
      (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x88))(), iVar5 != -1)) &&
     (DAT_146b17150 != 0)) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_1428741a0(DAT_146b17150,&local_28);
    plVar1 = local_28 + (int)local_20;
    for (plVar8 = local_28; plVar8 != plVar1; plVar8 = plVar8 + 1) {
      lVar2 = *plVar8;
      if (lVar2 != 0) {
        lVar6 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (((bVar3) && (lVar6 = FUN_14270bb10(lVar2), lVar6 != 0)) &&
           (*(int *)(lVar6 + 0x108) == iVar5)) {
          cVar4 = FUN_142dcfc60(lVar2);
          *param_2 = 0;
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
          if (cVar4 == '\x01') {
            *(undefined4 *)(param_2 + 1) = 0xb;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
            uVar9 = 0x16;
            pwVar7 = L"horizontal";
          }
          else if (cVar4 == '\x02') {
            *(undefined4 *)(param_2 + 1) = 9;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
            uVar9 = 0x12;
            pwVar7 = L"vertical";
          }
          else {
            *(undefined4 *)(param_2 + 1) = 5;
            if (cVar4 == '\x03') {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
              uVar9 = 10;
              pwVar7 = L"quad";
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
              uVar9 = 10;
              pwVar7 = L"full";
            }
          }
          FGenericPlatformString::Memcpy(*param_2,pwVar7,uVar9);
          if (local_28 == (longlong *)0x0) {
            return param_2;
          }
          FMemory::Free();
          return param_2;
        }
      }
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  *param_2 = 0;
  param_2[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"full",10);
  return param_2;
}



// FUNCTION 140803510 GetBeautifiedTestName body=75 status=ok
// SIG undefined GetBeautifiedTestName(void)

undefined8 *
FMovieSceneCompilerEmptySpaceOnTheFlyTest::GetBeautifiedTestName
          (undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x38;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Convert<char,wchar_t>
            (*param_2,0x38,"UE4StrongObjectPtr_Private::FInternalReferenceCollector",0x38,0x3f);
  return param_2;
}



// FUNCTION 140803560 FUN_140803560 body=157 status=ok
// SIG undefined FUN_140803560(void)

undefined1 * FUN_140803560(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 == 0) {
    *param_2 = DAT_1464b9ee9;
    return param_2;
  }
  if ((*(int *)(lVar1 + 0xc0) != 0) && (*(longlong **)(lVar1 + 0xb8) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0xb8) + 0x18))();
    if (cVar2 != '\0') {
      if (*(int *)(lVar1 + 0xc0) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(lVar1 + 0xb8);
      }
      (**(code **)(*plVar3 + 0x38))(plVar3,local_res8);
      *(undefined1 *)(lVar1 + 0xb0) = local_res8[0];
      *param_2 = local_res8[0];
      return param_2;
    }
  }
  *param_2 = *(undefined1 *)(lVar1 + 0xb0);
  return param_2;
}



// FUNCTION 140803600 FUN_140803600 body=157 status=ok
// SIG undefined FUN_140803600(void)

undefined1 * FUN_140803600(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 == 0) {
    *param_2 = DAT_1464b9ee9;
    return param_2;
  }
  if ((*(int *)(lVar1 + 0xc0) != 0) && (*(longlong **)(lVar1 + 0xb8) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0xb8) + 0x18))();
    if (cVar2 != '\0') {
      if (*(int *)(lVar1 + 0xc0) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(lVar1 + 0xb8);
      }
      (**(code **)(*plVar3 + 0x38))(plVar3,local_res8);
      *(undefined1 *)(lVar1 + 0xb0) = local_res8[0];
      *param_2 = local_res8[0];
      return param_2;
    }
  }
  *param_2 = *(undefined1 *)(lVar1 + 0xb0);
  return param_2;
}



// FUNCTION 1408036b0 FUN_1408036b0 body=498 status=ok
// SIG undefined FUN_1408036b0(void)

undefined1 * FUN_1408036b0(longlong param_1,undefined1 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(longlong **)(param_1 + 0x330) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x330) + 0x50))();
    if (cVar5 != '\0') goto LAB_140803752;
  }
  plVar6 = *(longlong **)(param_1 + 0x330);
  if (plVar6 == (longlong *)0x0) {
    local_28 = (longlong *)0x0;
    local_18 = 0;
    local_20 = 0;
    local_10 = 0;
    TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
    ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(&local_18);
  }
  else {
    (**(code **)(*plVar6 + 0x58))(plVar6,&local_28);
  }
  if (local_28 != local_28 + (longlong)(int)local_20 * 3) {
    plVar6 = local_28;
    do {
      if (*plVar6 == *param_3) {
        *param_2 = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        param_2[0x20] = 0;
        *(undefined8 *)(param_2 + 0x28) = 0;
        *(undefined8 *)(param_2 + 0x30) = 0;
        *(undefined8 *)(param_2 + 0x38) = 0;
        *(undefined8 *)(param_2 + 0x40) = 0;
        *(undefined8 *)(param_2 + 0x48) = 0;
        *(undefined8 *)(param_2 + 0x50) = 0;
        *(undefined8 *)(param_2 + 0x58) = 0;
        *(undefined8 *)(param_2 + 0x60) = 0;
        *(undefined8 *)(param_2 + 0x68) = 0;
        *(undefined8 *)(param_2 + 0x70) = 0;
        *(undefined8 *)(param_2 + 0x78) = 0;
        *(undefined8 *)(param_2 + 0x80) = 0;
        *(undefined8 *)(param_2 + 0x88) = 0;
        *(undefined8 *)(param_2 + 0x90) = 0;
        *(undefined8 *)(param_2 + 0x98) = 0;
        *(undefined8 *)(param_2 + 0xa0) = 0;
        *(undefined8 *)(param_2 + 0xa8) = 0;
        *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
        *(undefined4 *)(param_2 + 0xb0) = 0x20702;
        TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
        ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(&local_28);
        goto LAB_1408037cb;
      }
      plVar6 = plVar6 + 3;
    } while (plVar6 != local_28 + (longlong)(int)local_20 * 3);
  }
  TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
  ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(&local_28);
LAB_140803752:
  *param_2 = 1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
LAB_1408037cb:
  plVar6 = (longlong *)param_3[2];
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
  return param_2;
}



// FUNCTION 1408038b0 FUN_1408038b0 body=498 status=ok
// SIG undefined FUN_1408038b0(void)

undefined1 * FUN_1408038b0(longlong param_1,undefined1 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(longlong **)(param_1 + 0x328) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x328) + 0x50))();
    if (cVar5 != '\0') goto LAB_140803952;
  }
  plVar6 = *(longlong **)(param_1 + 0x328);
  if (plVar6 == (longlong *)0x0) {
    local_28 = (longlong *)0x0;
    local_18 = 0;
    local_20 = 0;
    local_10 = 0;
    TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
    ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(&local_18);
  }
  else {
    (**(code **)(*plVar6 + 0x58))(plVar6,&local_28);
  }
  if (local_28 != local_28 + (longlong)(int)local_20 * 3) {
    plVar6 = local_28;
    do {
      if (*plVar6 == *param_3) {
        *param_2 = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        param_2[0x20] = 0;
        *(undefined8 *)(param_2 + 0x28) = 0;
        *(undefined8 *)(param_2 + 0x30) = 0;
        *(undefined8 *)(param_2 + 0x38) = 0;
        *(undefined8 *)(param_2 + 0x40) = 0;
        *(undefined8 *)(param_2 + 0x48) = 0;
        *(undefined8 *)(param_2 + 0x50) = 0;
        *(undefined8 *)(param_2 + 0x58) = 0;
        *(undefined8 *)(param_2 + 0x60) = 0;
        *(undefined8 *)(param_2 + 0x68) = 0;
        *(undefined8 *)(param_2 + 0x70) = 0;
        *(undefined8 *)(param_2 + 0x78) = 0;
        *(undefined8 *)(param_2 + 0x80) = 0;
        *(undefined8 *)(param_2 + 0x88) = 0;
        *(undefined8 *)(param_2 + 0x90) = 0;
        *(undefined8 *)(param_2 + 0x98) = 0;
        *(undefined8 *)(param_2 + 0xa0) = 0;
        *(undefined8 *)(param_2 + 0xa8) = 0;
        *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
        *(undefined4 *)(param_2 + 0xb0) = 0x20702;
        TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
        ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(&local_28);
        goto LAB_1408039cb;
      }
      plVar6 = plVar6 + 3;
    } while (plVar6 != local_28 + (longlong)(int)local_20 * 3);
  }
  TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
  ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(&local_28);
LAB_140803952:
  *param_2 = 1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
LAB_1408039cb:
  plVar6 = (longlong *)param_3[2];
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
  return param_2;
}



// FUNCTION 140803ab0 FUN_140803ab0 body=90 status=ok
// SIG undefined FUN_140803ab0(void)

void FUN_140803ab0(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 local_res8 [8];
  
  cVar2 = (**(code **)(*param_1 + 0x120))();
  if (cVar2 != '\0') {
    local_res8[0] = DAT_1464b9ee9;
    (**(code **)(*param_1 + 0x100))(param_1,local_res8);
    plVar1 = (longlong *)param_1[5];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x80))(plVar1,param_2);
    }
  }
  return;
}



// FUNCTION 140803b10 FUN_140803b10 body=182 status=ok
// SIG undefined FUN_140803b10(void)

void FUN_140803b10(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 local_38;
  longlong local_30;
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined4 local_18;
  
  cVar1 = FUN_140804090();
  if (cVar1 == '\0') {
    return;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    if ((param_2 != '\0') || (cVar1 = FUN_140804050(param_1), cVar1 == '\0')) {
      local_28 = DAT_1464b9ee9;
      local_20 = 0;
      local_18 = 0;
      local_27 = 1;
      SLeafWidget::SetVisibility(*(undefined8 *)(param_1 + 0x80),&local_28);
      FUN_140806520(param_1);
    }
    TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound(param_1 + 0x40,param_2);
    local_38 = *(undefined8 *)(param_1 + 0x80);
    local_30 = *(longlong *)(param_1 + 0x88);
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    FUN_140806960(param_1,&local_38);
    return;
  }
  return;
}



// FUNCTION 140803bd0 FUN_140803bd0 body=359 status=ok
// SIG undefined FUN_140803bd0(void)

undefined8 * FUN_140803bd0(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)operator_new(0x1a0);
  if (_Dst != (undefined8 *)0x0) {
    _guard_xfg_dispatch_icall_nop(_Dst,0,0x1a0);
    *(undefined4 *)(_Dst + 2) = 0;
    _Dst[3] = 0;
    *(undefined4 *)(_Dst + 4) = 0;
    *_Dst = &PTR_FUN_1440f84c8;
    _Dst[5] = 0;
    _Dst[6] = 0;
    _Dst[9] = 0;
    _Dst[10] = 0;
    *(undefined4 *)((longlong)_Dst + 0x5c) = 0;
    *(undefined4 *)(_Dst + 0xb) = 0xffffffff;
    _Dst[0xd] = 0;
    *(undefined4 *)(_Dst + 0xe) = 0;
    *(undefined4 *)((longlong)_Dst + 0x7c) = 0;
    *(undefined4 *)(_Dst + 0xf) = 0xffffffff;
    _Dst[0x10] = 0;
    _Dst[0x11] = 0;
    _Dst[0x12] = 0;
    _Dst[0x13] = 0;
    _Dst[0x14] = 2;
    _Dst[0x15] = 0;
    _Dst[0x16] = 0;
    _Dst[0x17] = 2;
    _Dst[0x18] = 0;
    _Dst[0x19] = 0;
    _Dst[0x1c] = 0;
    _Dst[0x1d] = 0;
    *(undefined4 *)((longlong)_Dst + 0xf4) = 0;
    *(undefined4 *)(_Dst + 0x1e) = 0xffffffff;
    _Dst[0x20] = 0;
    *(undefined4 *)(_Dst + 0x21) = 0;
    _Dst[0x22] = 0;
    _Dst[0x23] = 0;
    _Dst[0x26] = 0;
    _Dst[0x27] = 0;
    *(undefined4 *)((longlong)_Dst + 0x144) = 0;
    *(undefined4 *)(_Dst + 0x28) = 0xffffffff;
    _Dst[0x2a] = 0;
    *(undefined4 *)(_Dst + 0x2b) = 0;
    *(undefined4 *)(_Dst + 0x2c) = 0;
    _Dst[0x2d] = 0;
    _Dst[0x2e] = 0;
    _Dst[0x2f] = 2;
    _Dst[0x30] = 0;
    *(undefined4 *)(_Dst + 0x31) = 0;
    _Dst[0x32] = 0;
    *(undefined4 *)(_Dst + 0x33) = 0;
    return _Dst;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140803d40 FUN_140803d40 body=35 status=ok
// SIG undefined FUN_140803d40(void)

void FUN_140803d40(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_res18;
  
  FUN_140803e30(param_1,param_2,local_res18,local_res18);
  return;
}



// FUNCTION 140803d70 FUN_140803d70 body=111 status=ok
// SIG undefined FUN_140803d70(void)

void FUN_140803d70(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)(**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),local_18);
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
  if (plVar2 != (longlong *)0x0) {
    if (*(int *)(puVar1 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar1;
    }
    (**(code **)(*plVar2 + 0xb0))(plVar2,puVar3);
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140803de0 FUN_140803de0 body=78 status=ok
// SIG undefined FUN_140803de0(void)

void FUN_140803de0(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  uVar1 = (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8));
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x120))(plVar2,uVar1);
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  return;
}



// FUNCTION 140803e30 FUN_140803e30 body=534 status=ok
// SIG undefined FUN_140803e30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140803e30(longlong param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  uint *puVar9;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  uint uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  longlong *local_a0;
  undefined8 uStack_98;
  uint *puStack_90;
  undefined4 uStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined1 local_78 [64];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  plVar6 = (longlong *)(**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),local_78);
  plVar7 = (longlong *)(**(code **)(*param_2 + 0x10))(param_2);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x150))
              (plVar7,(longlong)((int)plVar6[1] - *(int *)((longlong)plVar6 + 0x34)));
    iVar1 = (int)plVar6[5];
    puStack_90 = (uint *)(plVar6 + 2);
    local_c8 = (longlong *)0x100000000;
    local_b8._4_4_ = 0;
    uStack_b0 = 0;
    if (iVar1 != 0) {
      puVar9 = (uint *)plVar6[4];
      if ((uint *)plVar6[4] == (uint *)0x0) {
        puVar9 = puStack_90;
      }
      uVar4 = *puVar9;
      uStack_b0 = 0;
      iVar5 = 0;
      while (uVar4 == 0) {
        uStack_b0 = uStack_b0 + 0x20;
        uVar3 = (ulonglong)local_c8 >> 0x20;
        local_c8 = (longlong *)CONCAT44((int)uVar3,iVar5 + 1);
        if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_140803f3f;
        uVar4 = puVar9[(longlong)iVar5 + 1];
        iVar5 = iVar5 + 1;
      }
      uVar4 = -uVar4 & uVar4;
      iVar5 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      local_c8 = (longlong *)CONCAT44(uVar4,SUB84(local_c8,0));
      if (uVar4 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      local_b8._4_4_ = (uStack_b0 - iVar5) + 0x1f;
      if (iVar1 < local_b8._4_4_) {
LAB_140803f3f:
        local_b8._4_4_ = iVar1;
      }
    }
    uStack_88 = 0xffffffff;
    iStack_84 = local_b8._4_4_;
    iStack_80 = uStack_b0;
    iStack_7c = iStack_ac;
    uStack_98 = local_c8;
    uStack_c0 = local_c8;
    local_a8 = uStack_b0;
    iStack_a4 = iStack_ac;
    uStack_b0 = 0xffffffff;
    iStack_ac = local_b8._4_4_;
    bVar2 = local_b8._4_4_ < iVar1;
    local_c8 = plVar6;
    local_a0 = plVar6;
    local_b8 = puStack_90;
    if (bVar2) {
      do {
        plVar6 = local_c8;
        lVar8 = (longlong)iStack_ac;
        (**(code **)(*plVar7 + 0x108))(plVar7,*(undefined4 *)(*local_c8 + lVar8 * 0x10));
        (**(code **)(*plVar7 + 0x108))(plVar7,*(undefined4 *)(*plVar6 + 4 + lVar8 * 0x10));
        uStack_b0 = uStack_b0 & ~uStack_c0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
      } while (iStack_ac < (int)local_b8[6]);
    }
    (**(code **)(*plVar7 + 0x158))(plVar7);
    (**(code **)(*param_2 + 0x18))(param_2);
  }
  local_30 = 0;
  if (local_38 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_78);
  return;
}



// FUNCTION 140804050 FUN_140804050 body=64 status=ok
// SIG undefined FUN_140804050(void)

undefined8 FUN_140804050(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x60) == (longlong *)0x0) {
    return 0;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x120))();
  if ((cVar1 == '\0') &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x138))(), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 140804090 FUN_140804090 body=124 status=ok
// SIG undefined FUN_140804090(void)

ulonglong FUN_140804090(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong in_RAX;
  longlong *plVar3;
  char local_res8 [32];
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 == 0) goto LAB_140804104;
  if ((*(int *)(lVar1 + 0xc0) == 0) || (*(longlong **)(lVar1 + 0xb8) == (longlong *)0x0)) {
LAB_1408040ed:
    local_res8[0] = *(char *)(lVar1 + 0xb0);
  }
  else {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0xb8) + 0x18))();
    if (cVar2 == '\0') goto LAB_1408040ed;
    if (*(int *)(lVar1 + 0xc0) == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)(lVar1 + 0xb8);
    }
    (**(code **)(*plVar3 + 0x38))(plVar3,local_res8);
    *(char *)(lVar1 + 0xb0) = local_res8[0];
  }
  in_RAX = 0;
  if (local_res8[0] == DAT_1464b9ee8) {
    return 1;
  }
LAB_140804104:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140804110 FUN_140804110 body=35 status=ok
// SIG undefined FUN_140804110(void)

bool FUN_140804110(longlong *param_1)

{
  char *pcVar1;
  undefined1 local_res8 [32];
  
  pcVar1 = (char *)(**(code **)(*param_1 + 0x118))(param_1,local_res8);
  return *pcVar1 == DAT_1464b9ee8;
}



// FUNCTION 140804150 FUN_140804150 body=35 status=ok
// SIG undefined FUN_140804150(void)

bool FUN_140804150(longlong *param_1)

{
  char *pcVar1;
  undefined1 local_res8 [32];
  
  pcVar1 = (char *)(**(code **)(*param_1 + 0x108))(param_1,local_res8);
  return *pcVar1 == DAT_1464b9ee8;
}



// FUNCTION 140804180 FUN_140804180 body=371 status=ok
// SIG undefined FUN_140804180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140804180(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *plStack_50;
  longlong local_48 [2];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)*param_2;
  if (plVar3 != (longlong *)0x0) {
    lVar10 = (**(code **)(*plVar3 + 0x40))(plVar3,local_48);
    if ((*(int *)(lVar10 + 8) < 2) ||
       (cVar6 = FString::StartsWith(lVar10,L"coui://",1), cVar6 != '\x01')) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    if (bVar5) {
      uVar9 = TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
      uVar9 = uVar9 & 0xffffffffffffff00;
    }
    else {
      plVar4 = (longlong *)param_2[1];
      plVar3 = param_1 + 5;
      lVar10 = *param_2;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_58 = lVar10;
      plStack_50 = plVar4;
      if (&local_58 != plVar3) {
        local_58 = *plVar3;
        plStack_50 = (longlong *)param_1[6];
        *plVar3 = lVar10;
        param_1[6] = (longlong)plVar4;
        local_38 = lVar10;
        plStack_30 = plVar4;
      }
      plVar3 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar4 = plStack_50 + 1;
        lVar10 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plStack_50 + 8))(plStack_50,1);
          }
        }
      }
      bVar7 = (**(code **)(*param_1 + 0xd8))(param_1);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
      uVar9 = (ulonglong)bVar7;
    }
    return uVar9;
  }
  plVar3 = (longlong *)param_2[1];
  uVar9 = local_28;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    uVar8 = (int)lVar10 - 1;
    uVar9 = (ulonglong)uVar8;
    if (uVar8 == 0) {
      uVar9 = (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        uVar9 = (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return uVar9 & 0xffffffffffffff00;
}



// FUNCTION 140804300 FUN_140804300 body=844 status=ok
// SIG undefined FUN_140804300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140804300(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined2 *puVar14;
  undefined1 auStack_158 [32];
  int local_138 [2];
  longlong local_130;
  longlong *plStack_128;
  longlong local_120;
  longlong *plStack_118;
  undefined1 *local_110;
  longlong local_108 [2];
  longlong local_f8;
  longlong *plStack_f0;
  longlong local_e8;
  longlong *plStack_e0;
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_38;
  ulonglong uVar13;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  if ((param_1[5] != 0) &&
     (plVar8 = (longlong *)(**(code **)(*param_1 + 0xf8))(), plVar8 != (longlong *)0x0)) {
    puVar9 = (undefined8 *)
             (**(code **)(*(longlong *)param_1[5] + 0x40))((longlong *)param_1[5],local_108);
    if (*(int *)(puVar9 + 1) == 0) {
      puVar14 = &DAT_143f3eda8;
    }
    else {
      puVar14 = (undefined2 *)*puVar9;
    }
    local_58 = (undefined1 *)0x0;
    uVar12 = 0xffffffffffffffff;
    if (puVar14 == (undefined2 *)0x0) {
      local_50 = (undefined1 *)0x0;
      local_48 = 0;
    }
    else {
      do {
        uVar13 = uVar12;
        uVar12 = uVar13 + 1;
      } while (puVar14[uVar12] != 0);
      local_138[0] = 0;
      FTCHARToUTF8_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                (local_138,(int)uVar12 * 4,puVar14,uVar12 & 0xffffffff);
      local_48 = local_138[0];
      uVar6 = local_138[0] + 1;
      local_110 = (undefined1 *)CONCAT44(local_110._4_4_,uVar6);
      puVar10 = (undefined1 *)0x0;
      if ((0x80 < uVar6) && (puVar10 = (undefined1 *)0x0, uVar6 != 0)) {
        puVar10 = (undefined1 *)FMemory::Realloc(0,(longlong)(int)uVar6,0);
        uVar6 = (uint)local_110;
        local_58 = puVar10;
      }
      local_110 = local_d8;
      if (puVar10 != (undefined1 *)0x0) {
        local_110 = puVar10;
      }
      local_50 = local_110;
      FTCHARToUTF8_Convert::Convert_Impl<char_*>(&local_110,uVar6,puVar14,(int)uVar13 + 2);
    }
    (**(code **)(*plVar8 + 0x10))(plVar8,local_50);
    if (local_58 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    if (local_108[0] != 0) {
      FMemory::Free();
    }
    plVar8 = (longlong *)param_1[6];
    lVar4 = param_1[5];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    lVar5 = param_1[0xd];
    plVar11 = (longlong *)(lVar5 + 0x330);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_130 = lVar4;
    plStack_128 = plVar8;
    if (&local_130 != plVar11) {
      local_130 = *plVar11;
      plStack_128 = *(longlong **)(lVar5 + 0x338);
      *plVar11 = lVar4;
      *(longlong **)(lVar5 + 0x338) = plVar8;
      local_f8 = lVar4;
      plStack_f0 = plVar8;
    }
    plVar11 = plStack_128;
    if (plStack_128 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_128 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_128)(plStack_128);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_128 + 8))(plStack_128,1);
        }
      }
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar8 + 1;
      lVar4 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
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
    plVar8 = (longlong *)param_1[6];
    lVar4 = param_1[5];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    lVar5 = param_1[0xf];
    plVar11 = (longlong *)(lVar5 + 0x328);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_120 = lVar4;
    plStack_118 = plVar8;
    if (&local_120 != plVar11) {
      local_120 = *plVar11;
      plStack_118 = *(longlong **)(lVar5 + 0x330);
      *plVar11 = lVar4;
      *(longlong **)(lVar5 + 0x330) = plVar8;
      local_e8 = lVar4;
      plStack_e0 = plVar8;
    }
    plVar11 = plStack_118;
    if (plStack_118 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_118 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_118)(plStack_118);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_118 + 8))(plStack_118,1);
        }
      }
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar8 + 1;
      lVar4 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
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
    lVar4 = param_1[7];
    uVar7 = (**(code **)(*(longlong *)param_1[5] + 0x88))();
    *(undefined4 *)(lVar4 + 8) = uVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 140804650 FUN_140804650 body=171 status=ok
// SIG undefined FUN_140804650(void)

undefined1 * FUN_140804650(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x330) == (longlong *)0x0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x330) + 0x50))();
  }
  if (cVar1 == '\0') {
    *param_2 = 0;
  }
  else {
    *param_2 = 1;
  }
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 140804700 FUN_140804700 body=486 status=ok
// SIG undefined FUN_140804700(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140804700(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong *local_120;
  undefined1 local_118 [16];
  char local_108 [192];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  FUN_1404751d0(param_1,local_108);
  if (*(float *)(param_1 + 0x324) < *(float *)(param_4 + 0x38)) {
    FUN_1408091b0(param_1,1);
  }
  puVar9 = (undefined8 *)FName::FName(local_118,L"GbxShiftOverlay",1);
  lVar10 = FModuleManager::GetModulePtr_Internal(*puVar9);
  if (lVar10 != 0) {
    local_148 = *(undefined8 *)(param_4 + 0x18);
    local_140 = *(undefined8 *)(param_4 + 0x20);
    local_138 = *(longlong **)(param_4 + 0x28);
    if (local_138 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_138 + 1) = (int)local_138[1] + 1;
      UNLOCK();
    }
    cVar8 = FKey::IsGamepadKey();
    plVar5 = local_138;
    if ((cVar8 == '\0') || (local_108[0] != '\0')) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_138 + 1;
      lVar7 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_138)();
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
    if (bVar6) {
      plVar5 = *(longlong **)(param_4 + 0x28);
      uVar4 = *(undefined4 *)(param_4 + 0xc);
      uVar3 = *(undefined4 *)(param_4 + 0x38);
      local_130 = *(undefined8 *)(param_4 + 0x18);
      local_128 = *(undefined8 *)(param_4 + 0x20);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      if (*(int *)(lVar10 + 0x20) == 0) {
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11 = *(longlong **)(lVar10 + 0x18);
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_120 = plVar5;
      cVar8 = (**(code **)(*plVar11 + 0x38))(plVar11,&local_130,uVar3,uVar4);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar5 + 1;
        lVar10 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar5)(plVar5);
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
      if (cVar8 != '\0') {
        FReply::Handled(param_2);
        goto LAB_1408048b4;
      }
    }
  }
  FReply::FReply(param_2,local_108);
LAB_1408048b4:
  FUN_140438c20(local_108);
  return param_2;
}



// FUNCTION 1408048f0 FUN_1408048f0 body=88 status=ok
// SIG undefined FUN_1408048f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408048f0(longlong param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x98) != 0) && (*(longlong **)(param_1 + 0x90) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x98) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140804930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x90) + 0x40))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014080493e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x40))();
      return;
    }
  }
  return;
}



// FUNCTION 140804950 FUN_140804950 body=88 status=ok
// SIG undefined FUN_140804950(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140804950(longlong param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0xa8) != 0) && (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0xa8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140804990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x40))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014080499e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x40))();
      return;
    }
  }
  return;
}



// FUNCTION 1408049b0 FUN_1408049b0 body=229 status=ok
// SIG undefined FUN_1408049b0(void)

void FUN_1408049b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  DWORD DVar7;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  if ((((cVar6 != '\0') || (DAT_1468c21ae == '\0')) ||
      (DVar7 = GetCurrentThreadId(), DVar7 == DAT_1468c21c0)) ||
     ((cVar6 = FUN_1415e1500(), cVar6 != '\0' ||
      (cVar6 = (*(code *)PTR_CanBeUsedOnAnyThread_1464a8df0)(), cVar6 != '\0')))) {
    local_18 = 0;
    uStack_10 = 0;
    FUN_1418c3ef0(DAT_1469f4590,0,*(undefined4 *)(param_1 + 8),&local_18);
    local_20 = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 0x18) != &local_28) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      local_28 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x20,&local_20);
      plVar5 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140804aa0 FUN_140804aa0 body=170 status=ok
// SIG undefined FUN_140804aa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140804aa0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [128];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_c8 = 0;
  local_c0 = 0;
  FWindowsPlatformApplicationMisc::ClipboardPaste(&local_c8);
  if (((int)local_c0 != 0) && (iVar1 = (int)local_c0 + -1, 0 < iVar1)) {
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_b8,local_c8);
    (**(code **)*param_2)(param_2,local_30,iVar1);
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140804b50 FUN_140804b50 body=253 status=ok
// SIG undefined FUN_140804b50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140804b50(void)

{
  undefined2 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined1 auStack_168 [32];
  undefined2 *local_148;
  int local_140;
  undefined4 local_13c;
  undefined1 local_138 [256];
  longlong local_38;
  short *local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_138);
  puVar5 = (undefined2 *)0x0;
  local_148 = (undefined2 *)0x0;
  iVar4 = 0;
  local_13c = 0;
  if ((local_30 != (short *)0x0) && (*local_30 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (local_30[lVar3] != 0);
    iVar2 = (int)lVar3 + 1;
    local_140 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    }
    iVar4 = local_140;
    puVar5 = local_148;
    FGenericPlatformString::Memcpy(local_148,local_30,(longlong)iVar2 * 2);
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  puVar1 = &DAT_143f3eda8;
  if (iVar4 != 0) {
    puVar1 = puVar5;
  }
  FUN_1416cf5b0(puVar1);
  if (puVar5 != (undefined2 *)0x0) {
    FMemory::Free(puVar5);
  }
  return;
}



// FUNCTION 140804c50 FUN_140804c50 body=319 status=ok
// SIG undefined FUN_140804c50(void)

void FUN_140804c50(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 local_res8 [32];
  longlong *local_18;
  int local_10;
  
  if (((*(int *)(param_1 + 0x20) != 0) && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x20) == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)(param_1 + 0x18);
    }
    (**(code **)(*plVar3 + 0x40))();
  }
  if ((*(int *)(param_1 + 0x20) != 0) &&
     (plVar3 = *(longlong **)(param_1 + 0x18), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    if (*(longlong *)(param_1 + 0x18) != 0) {
      uVar2 = FMemory::Realloc(*(longlong *)(param_1 + 0x18),0,0);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(char *)(param_1 + 0x31) == '\0') {
    *(undefined1 *)(param_1 + 0x31) = 1;
    local_18 = (longlong *)0x0;
    plVar3 = (longlong *)FMemory::Realloc(0,0x20);
    local_10 = 2;
    local_18 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      *(undefined1 *)(plVar3 + 1) = 1;
      *plVar3 = (longlong)&PTR_GetPoolName_1440f8fb0;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[2] = lVar4;
    }
    uVar2 = FUN_14164ab60();
    FUN_14158f860(uVar2,local_res8,&local_18,L"IGbxShiftOverlayViewDelegate::SetRecordingEnabled",
                  0x3f800000);
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
    }
  }
  return;
}



// FUNCTION 140804d90 FUN_140804d90 body=99 status=ok
// SIG undefined FUN_140804d90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140804d90(longlong *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + 0x148))();
  (**(code **)(*param_1 + 0x128))(param_1,0);
  if (((int)param_1[4] != 0) && ((longlong *)param_1[3] != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)param_1[3] + 0x18))();
    if (cVar1 != '\0') {
      if ((int)param_1[4] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140804ddb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(longlong *)param_1[3] + 0x40))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000140804de9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x40))();
      return;
    }
  }
  return;
}



// FUNCTION 140804e00 FUN_140804e00 body=530 status=ok
// SIG undefined FUN_140804e00(void)

void FUN_140804e00(longlong param_1,undefined8 param_2)

{
  longlong **pplVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  DWORD DVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong local_20;
  
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if ((((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
      (DVar6 = GetCurrentThreadId(), DVar6 == DAT_1468c21c0)) ||
     ((cVar5 = FUN_1415e1500(), cVar5 != '\0' ||
      (cVar5 = (*(code *)PTR_CanBeUsedOnAnyThread_1464a8df0)(), cVar5 != '\0')))) {
    pplVar1 = (longlong **)(param_1 + 0x18);
    plVar11 = (longlong *)0x0;
    uVar4 = *(undefined4 *)(param_1 + 8);
    local_40 = (longlong *)0x0;
    if (pplVar1 != &local_48) {
      *pplVar1 = (longlong *)0x0;
      local_48 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x20,&local_40);
      plVar9 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_40 + 1;
        lVar7 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
    lVar7 = operator_new(0x78);
    plVar9 = plVar11;
    if (lVar7 != 0) {
      uVar8 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf8))();
      plVar9 = (longlong *)FUN_1404532f0(lVar7,uVar8,param_2);
    }
    plVar10 = (longlong *)operator_new(0x18);
    if (plVar10 != (longlong *)0x0) {
      *(undefined4 *)(plVar10 + 1) = 1;
      *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
      *plVar10 = (longlong)&PTR_FUN_143f3f2e0;
      plVar10[2] = (longlong)plVar9;
      plVar11 = plVar10;
    }
    local_38 = plVar9;
    local_30 = plVar11;
    SharedPointerInternals::EnableSharedFromThis(&local_38,plVar9,plVar9);
    if (pplVar1 != &local_38) {
      *pplVar1 = plVar9;
      local_38 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x20,&local_30);
      plVar11 = local_30;
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar11 + 1;
      lVar7 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    local_28 = *pplVar1;
    local_20 = *(longlong *)(param_1 + 0x20);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_1418c3ef0(DAT_1469f4590,1,uVar4,&local_28);
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return;
}



// FUNCTION 140805020 FUN_140805020 body=88 status=ok
// SIG undefined FUN_140805020(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140805020(longlong param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x318) != 0) && (*(longlong **)(param_1 + 0x310) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x310) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x318) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140805060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x310) + 0x40))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014080506e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x40))();
      return;
    }
  }
  return;
}



// FUNCTION 140805080 FUN_140805080 body=93 status=ok
// SIG undefined FUN_140805080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140805080(longlong param_1)

{
  char cVar1;
  
  FUN_1404777e0();
  if ((*(int *)(param_1 + 0x2e8) != 0) && (*(longlong **)(param_1 + 0x2e0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x2e8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001408050c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x40))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0001408050d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x40))();
      return;
    }
  }
  return;
}



// FUNCTION 1408050e0 FUN_1408050e0 body=95 status=ok
// SIG undefined FUN_1408050e0(void)

void FUN_1408050e0(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x50))();
  }
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x120))();
    if ((cVar1 == '\0') &&
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x138))(), cVar1 == '\0')) {
      return;
    }
    if ((*(longlong **)(param_1 + 0x60) != (longlong *)0x0) &&
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x120))(), cVar1 != '\0')) {
      *(undefined1 *)(param_1 + 0x51) = 1;
    }
  }
  return;
}



// FUNCTION 140805140 FUN_140805140 body=234 status=ok
// SIG undefined FUN_140805140(void)

undefined8 FUN_140805140(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  uint local_14;
  
  local_c8[0] = 1;
  plVar3 = (longlong *)0x0;
  local_c0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_14 = local_14 & 0xffffff00;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0x20702;
  uVar2 = FUN_140806740(local_c8);
  uVar2 = FUN_1406a1ac0(uVar2);
  FUN_140438260(param_2,uVar2);
  FUN_140438c20(local_c8);
  if ((*(int *)(param_1 + 0x328) != 0) && (*(longlong **)(param_1 + 800) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 800) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x328) != 0) {
        plVar3 = *(longlong **)(param_1 + 800);
      }
      (**(code **)(*plVar3 + 0x40))(plVar3);
    }
  }
  return param_2;
}



// FUNCTION 140805230 FUN_140805230 body=265 status=ok
// SIG undefined FUN_140805230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140805230(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  uint local_44;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  FUN_140477b30(param_1,local_f8);
  FUN_140438c20(local_f8);
  local_44 = local_44 & 0xffffff00;
  plVar3 = (longlong *)0x0;
  local_f8[0] = 1;
  local_f0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_e8 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_48 = 0x20702;
  uVar2 = FUN_140806740(local_f8);
  uVar2 = FUN_1406a1ac0(uVar2);
  FUN_140438260(param_2,uVar2);
  FUN_140438c20(local_f8);
  if ((*(int *)(param_1 + 0x2f8) != 0) && (*(longlong **)(param_1 + 0x2f0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2f0) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x2f8) != 0) {
        plVar3 = *(longlong **)(param_1 + 0x2f0);
      }
      (**(code **)(*plVar3 + 0x40))(plVar3);
    }
  }
  return param_2;
}



// FUNCTION 140805350 FUN_140805350 body=64 status=ok
// SIG undefined FUN_140805350(void)

undefined8 FUN_140805350(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  local_28 = *(undefined8 *)(param_4 + 0x18);
  local_20 = *(undefined8 *)(param_4 + 0x20);
  local_18 = *(longlong *)(param_4 + 0x28);
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_1408036b0(param_1,param_2,&local_28);
  return param_2;
}



// FUNCTION 140805390 FUN_140805390 body=190 status=ok
// SIG undefined FUN_140805390(void)

undefined8 FUN_140805390(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 local_28;
  undefined8 local_20;
  longlong *local_18;
  
  FUN_140478a40();
  local_28 = *(undefined8 *)(param_4 + 0x18);
  local_20 = *(undefined8 *)(param_4 + 0x20);
  local_18 = *(longlong **)(param_4 + 0x28);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  cVar6 = FKey::IsGamepadKey(&local_28);
  plVar5 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_18)(local_18);
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
  FUN_1408091b0(param_1,cVar6 != '\0');
  return param_2;
}



// FUNCTION 140805450 FUN_140805450 body=190 status=ok
// SIG undefined FUN_140805450(void)

undefined8 FUN_140805450(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 local_28;
  undefined8 local_20;
  longlong *local_18;
  
  FUN_140478dd0();
  local_28 = *(undefined8 *)(param_4 + 0x18);
  local_20 = *(undefined8 *)(param_4 + 0x20);
  local_18 = *(longlong **)(param_4 + 0x28);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  cVar6 = FKey::IsGamepadKey(&local_28);
  plVar5 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_18)(local_18);
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
  FUN_1408091b0(param_1,cVar6 != '\0');
  return param_2;
}



// FUNCTION 140805510 FUN_140805510 body=107 status=ok
// SIG undefined FUN_140805510(void)

char * FUN_140805510(longlong param_1,char *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  FUN_1404792c0();
  if (((*param_2 == '\0') && (*(int *)(param_1 + 0x308) != 0)) &&
     (*(longlong **)(param_1 + 0x300) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x300) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x308) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x300);
      }
      (**(code **)(*plVar2 + 0x40))();
    }
  }
  FUN_1408091b0(param_1,0);
  return param_2;
}



// FUNCTION 140805580 FUN_140805580 body=45 status=ok
// SIG undefined FUN_140805580(void)

undefined8 FUN_140805580(undefined8 param_1,undefined8 param_2)

{
  FUN_1404795a0();
  FUN_1408091b0(param_1,0);
  return param_2;
}



// FUNCTION 1408055b0 FUN_1408055b0 body=96 status=ok
// SIG undefined FUN_1408055b0(void)

undefined8 FUN_1408055b0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  float fVar1;
  
  FUN_14047a590();
  fVar1 = SQRT(*(float *)(param_4 + 0x28) * *(float *)(param_4 + 0x28) +
               *(float *)(param_4 + 0x2c) * *(float *)(param_4 + 0x2c));
  if (*(float *)(param_1 + 800) <= fVar1 && fVar1 != *(float *)(param_1 + 800)) {
    FUN_1408091b0(param_1,0);
  }
  return param_2;
}



// FUNCTION 140805610 FUN_140805610 body=45 status=ok
// SIG undefined FUN_140805610(void)

undefined8 FUN_140805610(undefined8 param_1,undefined8 param_2)

{
  FUN_14047a670();
  FUN_1408091b0(param_1,0);
  return param_2;
}



// FUNCTION 140805640 FUN_140805640 body=46 status=ok
// SIG undefined FUN_140805640(void)

void FUN_140805640(longlong param_1)

{
  undefined1 local_res8 [8];
  undefined8 local_res10 [3];
  
  local_res10[0] = DAT_14685e248;
  FUN_140800100(param_1 + 0x108,local_res8,local_res10,0);
  return;
}



// FUNCTION 140805670 FUN_140805670 body=99 status=ok
// SIG undefined FUN_140805670(void)

void FUN_140805670(longlong param_1)

{
  char cVar1;
  undefined1 local_res8 [8];
  undefined8 local_res10 [3];
  
  local_res10[0] = DAT_14685e248;
  FUN_140800100(param_1 + 0xb8,local_res8,local_res10,0);
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove(param_1 + 0x108,local_res10[0]);
  cVar1 = FUN_140804090(param_1);
  if (cVar1 != '\0') {
    FUN_140806520(param_1);
  }
  FUN_140803b10(param_1,1);
  return;
}



// FUNCTION 1408056e0 FUN_1408056e0 body=531 status=ok
// SIG undefined FUN_1408056e0(void)

undefined8
FUN_1408056e0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4,
             int param_5)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  char *pcVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined2 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  uint local_res10;
  undefined2 *local_50;
  int local_48;
  undefined4 local_44;
  
  cVar3 = (**(code **)(*param_2 + 0x38))(param_2);
  if ((cVar3 == '\n') && (param_5 == 2)) {
    if (param_4 == (undefined1 *)0x0) {
LAB_1408058ec:
      uVar8 = 1;
    }
    else {
      *param_4 = 0;
      uVar8 = 1;
    }
  }
  else {
    plVar6 = (longlong *)FUN_140490060();
    lVar12 = plVar6[0x1f];
    if (lVar12 == 0) {
      (**(code **)(*plVar6 + 0x368))(plVar6);
      lVar12 = plVar6[0x1f];
    }
    local_res10 = 0;
    iVar4 = (**(code **)(*param_2 + 8))(param_2);
    if (iVar4 != 0) {
      do {
        puVar14 = *(undefined8 **)(lVar12 + 0x38);
        puVar16 = puVar14 + (longlong)*(int *)(lVar12 + 0x40) * 2;
        for (; puVar14 != puVar16; puVar14 = puVar14 + 2) {
          pcVar7 = (char *)(**(code **)(*param_2 + 0x10))(param_2,local_res10);
          puVar13 = (undefined2 *)0x0;
          iVar4 = 0;
          local_50 = (undefined2 *)0x0;
          local_44 = 0;
          if ((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) {
            lVar9 = -1;
            do {
              lVar2 = lVar9 + 1;
              lVar9 = lVar9 + 1;
            } while (pcVar7[lVar2] != '\0');
            iVar15 = (int)lVar9 + 1;
            local_48 = iVar15;
            if (0 < iVar15) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,0);
            }
            iVar4 = local_48;
            puVar13 = local_50;
            FGenericPlatformString::Convert<char,wchar_t>(local_50,iVar15,pcVar7,iVar15,0x3f);
          }
          puVar11 = &DAT_143f3eda8;
          if (iVar4 != 0) {
            puVar11 = puVar13;
          }
          if (*(int *)(puVar14 + 1) == 0) {
            puVar10 = &DAT_143f3eda8;
          }
          else {
            puVar10 = (undefined2 *)*puVar14;
          }
          iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
          if ((iVar4 == 0) && (param_5 == 2)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (puVar13 != (undefined2 *)0x0) {
            FMemory::Free(puVar13);
          }
          if (bVar1) {
            if (param_4 != (undefined1 *)0x0) {
              *param_4 = 0;
            }
            goto LAB_1408058ec;
          }
        }
        local_res10 = local_res10 + 1;
        uVar5 = (**(code **)(*param_2 + 8))(param_2);
      } while (local_res10 < uVar5);
    }
    if (param_4 != (undefined1 *)0x0) {
      *param_4 = 1;
    }
    uVar8 = 0;
  }
  return uVar8;
}



// FUNCTION 140805900 FUN_140805900 body=70 status=ok
// SIG undefined FUN_140805900(void)

void FUN_140805900(longlong param_1)

{
  undefined1 local_res8 [8];
  undefined8 local_res10 [3];
  
  FWeakObjectPtr::operator=(param_1 + 0x158);
  if (*(char *)(param_1 + 0x59) != '\0') {
    local_res10[0] = DAT_14685e240;
    FUN_140800100(param_1 + 0x108,local_res8,local_res10,0);
  }
  return;
}



// FUNCTION 140805950 FUN_140805950 body=137 status=ok
// SIG undefined FUN_140805950(void)

void FUN_140805950(longlong param_1)

{
  char cVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_res18 [2];
  
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x158) = local_res8;
  *(undefined4 *)(param_1 + 0x15c) = local_resc;
  if (*(char *)(param_1 + 0x59) != '\0') {
    local_res18[0] = DAT_14685e240;
    FUN_140800100(param_1 + 0xb8,&local_res8,local_res18,0);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
              (param_1 + 0x108,local_res18[0]);
    cVar1 = FUN_140804090(param_1);
    if (cVar1 != '\0') {
      FUN_140806520(param_1);
    }
    FUN_140803b10(param_1,1);
  }
  return;
}



// FUNCTION 1408059e0 FUN_1408059e0 body=635 status=ok
// SIG undefined FUN_1408059e0(void)

undefined1 *
FUN_1408059e0(undefined8 param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined1 local_e0 [8];
  char local_d8 [192];
  
  puVar9 = (undefined8 *)FName::FName(local_e0,L"GbxShiftOverlay",1);
  plVar10 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar9);
  plVar11 = (longlong *)0x0;
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x110))(plVar10,*(undefined4 *)(param_4 + 0xc));
    local_108 = *(undefined8 *)(param_4 + 0x20);
    local_110 = *(undefined8 *)(param_4 + 0x18);
    local_100 = *(longlong *)(param_4 + 0x28);
    if (local_100 != 0) {
      LOCK();
      *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
      UNLOCK();
    }
    FUN_1408038b0(param_1,local_d8,&local_110);
    local_128 = *(undefined8 *)(param_4 + 0x18);
    local_120 = *(undefined8 *)(param_4 + 0x20);
    local_118 = *(longlong **)(param_4 + 0x28);
    if (local_118 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_118 + 1) = (int)local_118[1] + 1;
      UNLOCK();
    }
    cVar8 = FKey::IsGamepadKey(&local_128);
    plVar5 = local_118;
    if ((cVar8 == '\0') || (local_d8[0] != '\0')) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_118 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_118)(local_118);
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
    if (bVar6) {
      plVar5 = *(longlong **)(param_4 + 0x28);
      uVar4 = *(undefined4 *)(param_4 + 0xc);
      cVar8 = *(char *)(param_4 + 10);
      local_f8 = *(undefined8 *)(param_4 + 0x18);
      local_f0 = *(undefined8 *)(param_4 + 0x20);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      if ((int)plVar10[2] != 0) {
        plVar11 = (longlong *)plVar10[1];
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_e8 = plVar5;
      cVar8 = (**(code **)(*plVar11 + 0x38))(plVar11,&local_f8,-(cVar8 != '\0') & 2,uVar4);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar5 + 1;
        lVar7 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
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
      if (cVar8 != '\0') {
        FReply::Handled(param_2);
        FUN_140438c20(local_d8);
        return param_2;
      }
    }
    FUN_140438c20(local_d8);
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  return param_2;
}



// FUNCTION 140805c60 FUN_140805c60 body=683 status=ok
// SIG undefined FUN_140805c60(void)

void FUN_140805c60(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)param_1[5];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,param_1);
    puVar2 = *(undefined8 **)(param_1[5] + 8);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,param_1);
    }
    plVar1 = (longlong *)(**(code **)(*param_1 + 0xf8))(param_1);
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_143f4cf48;
        puVar2[2] = &LAB_1404c2084;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"UI_Ready");
    }
    plVar1 = (longlong *)(**(code **)(*param_1 + 0xf8))(param_1);
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_143f4cf48;
        puVar2[2] = &LAB_140801dd0;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Text_Entry_Begin_Notify");
    }
    plVar1 = (longlong *)(**(code **)(*param_1 + 0xf8))(param_1);
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_143f4cf48;
        puVar2[2] = &LAB_140801ddc;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Text_Entry_End_Notify");
    }
    plVar1 = (longlong *)(**(code **)(*param_1 + 0xf8))(param_1);
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_1440f8ff0;
        puVar2[2] = &LAB_140801df4;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"GET_CONTROLLER_TYPE");
    }
    plVar1 = (longlong *)(**(code **)(*param_1 + 0xf8))(param_1);
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_1440f9010;
        puVar2[2] = FUN_140802ca0;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Get_Controller_Index_Mapping");
    }
    plVar1 = (longlong *)(**(code **)(*param_1 + 0xf8))(param_1);
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_1440f8ff0;
        puVar2[2] = &LAB_140801de8;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"GET_UI_SPLIT_MODE");
    }
    plVar1 = (longlong *)(**(code **)(*param_1 + 0xf8))(param_1);
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_1440f9030;
        puVar2[2] = &LAB_1404c2090;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"IS_CONSOLE_PLATFORM");
    }
    (**(code **)(*(longlong *)param_1[5] + 0x60))();
  }
  return;
}



// FUNCTION 140805f10 FUN_140805f10 body=56 status=ok
// SIG undefined FUN_140805f10(void)

void FUN_140805f10(longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    *(undefined1 *)(param_1 + 0x28) = 0;
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 0xf8))();
                    /* WARNING: Could not recover jumptable at 0x000140805f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x1c8))(plVar1,"Virtual_Keyboard_Text_Changed_Notify");
    return;
  }
  return;
}



// FUNCTION 140805f90 FUN_140805f90 body=161 status=ok
// SIG undefined FUN_140805f90(void)

void FUN_140805f90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  FUN_140806520();
  FUN_140803b10(param_1,0);
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))();
    local_10 = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 0x70) != &local_18) {
      *(undefined8 *)(param_1 + 0x70) = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x78,&local_10);
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
  }
  return;
}



// FUNCTION 140806040 FUN_140806040 body=207 status=ok
// SIG undefined FUN_140806040(void)

void FUN_140806040(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  char *pcVar4;
  
  FUN_140806a80();
  plVar3 = *(longlong **)(param_1 + 0x60);
  if ((plVar3 != (longlong *)0x0) &&
     (plVar2 = (longlong *)(**(code **)(*plVar3 + 0xf8))(plVar3), plVar2 != (longlong *)0x0)) {
    cVar1 = FUN_140802bb0(plVar3);
    pcVar4 = "keyboard";
    if (cVar1 == '\x01') {
      pcVar4 = "gamepad";
    }
    plVar3 = (longlong *)(**(code **)(*plVar2 + 0x198))(plVar2);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x50))(plVar3,"Initial_Input_Mode",1);
      (**(code **)(*plVar3 + 0xb8))(plVar3,pcVar4);
      (**(code **)(*plVar3 + 0x58))(plVar3);
    }
  }
  if (*(longlong **)(param_1 + 0x70) == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140806106. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x68))();
  return;
}



// FUNCTION 140806110 FUN_140806110 body=269 status=ok
// SIG undefined FUN_140806110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140806110(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x140))();
  }
  *(undefined1 *)(param_1 + 0x52) = 1;
  puVar7 = (undefined8 *)(param_1 + 0x70);
  plVar4 = (longlong *)param_2[1];
  uVar5 = *param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_38 = uVar5;
  plStack_30 = plVar4;
  if (&local_38 != puVar7) {
    local_38 = *puVar7;
    plStack_30 = *(longlong **)(param_1 + 0x78);
    *puVar7 = uVar5;
    *(longlong **)(param_1 + 0x78) = plVar4;
    local_28 = uVar5;
    plStack_20 = plVar4;
  }
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  plVar4 = (longlong *)param_2[1];
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
  return;
}



// FUNCTION 140806220 FUN_140806220 body=213 status=ok
// SIG undefined FUN_140806220(void)

void FUN_140806220(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  longlong *local_18;
  longlong *local_10;
  
  if ((((*(char *)(param_1 + 0x51) == '\0') && (*(int *)(param_1 + 0x54) != -1)) &&
      (*(longlong **)(param_1 + 0x60) != (longlong *)0x0)) &&
     ((cVar4 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x120))(), cVar4 != '\0' ||
      (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x138))(), cVar4 != '\0')))) {
    (**(code **)(*DAT_1469f4590 + 0x130))(DAT_1469f4590,&local_18,*(undefined4 *)(param_1 + 0x54));
    if ((local_18 == (longlong *)0x0) ||
       (plVar5 = (longlong *)(**(code **)(*local_18 + 0x1d0))(local_18,local_res8),
       *plVar5 != DAT_14685e260)) {
      *(undefined1 *)(param_1 + 0x51) = 1;
    }
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_10 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar1 = (int *)((longlong)local_10 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140806300 Rehash body=529 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

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
        if (bVar4) goto LAB_14080643f;
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
LAB_14080643f:
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
        puVar12 = (uint *)(*param_1 + (longlong)iStack_1c * 0x18);
        uVar8 = (puVar12[1] ^ *puVar12) & (int)*plVar2 - 1U;
        puVar12[5] = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        puVar12[4] = *(uint *)((longlong)plVar6 +
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



// FUNCTION 140806520 FUN_140806520 body=542 status=ok
// SIG undefined FUN_140806520(void)

void FUN_140806520(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  
  lVar8 = DAT_1469f4590;
  if (DAT_1469f4590 == 0) {
    *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x51) = 0;
    return;
  }
  iVar3 = *(int *)(param_1 + 0x54);
  if (iVar3 == -1) {
    *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x51) = 0;
    return;
  }
  local_30 = *(longlong **)(param_1 + 0xa8);
  local_38 = 0;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)local_30[1];
    bVar9 = iVar6 == 0;
    if (bVar9) {
      *(int *)(local_30 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (!bVar9) {
      LOCK();
      bVar9 = iVar6 == (int)local_30[1];
      if (bVar9) {
        *(int *)(local_30 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar9) {
        if (local_30 != (longlong *)0x0) {
          local_38 = *(longlong *)(param_1 + 0xa0);
        }
        goto LAB_1408065b4;
      }
      LOCK();
      iVar6 = (int)local_30[1];
      bVar9 = iVar6 == 0;
      if (bVar9) {
        *(int *)(local_30 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
    local_30 = (longlong *)0x0;
  }
LAB_1408065b4:
  if (local_38 != 0) {
    FSlateApplication::SetKeyboardFocus(lVar8,&local_38,2);
  }
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  local_20 = *(longlong **)(param_1 + 0x98);
  local_28 = 0;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)local_20[1];
    bVar9 = iVar6 == 0;
    if (bVar9) {
      *(int *)(local_20 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (!bVar9) {
      LOCK();
      bVar9 = iVar6 == (int)local_20[1];
      if (bVar9) {
        *(int *)(local_20 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar9) {
        if (local_20 != (longlong *)0x0) {
          local_28 = *(longlong *)(param_1 + 0x90);
        }
        goto LAB_140806661;
      }
      LOCK();
      iVar6 = (int)local_20[1];
      bVar9 = iVar6 == 0;
      if (bVar9) {
        *(int *)(local_20 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
    local_20 = (longlong *)0x0;
  }
LAB_140806661:
  if (local_28 == 0) {
    FUN_1418c3960(lVar8,iVar3,2);
  }
  else {
    FUN_1418c3710(lVar8,iVar3,&local_28,2);
  }
  plVar5 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  uVar7 = FWeakObjectPtr::Get(param_1 + 0x158);
  lVar8 = UGameplayStatics::GetPlayerController(uVar7,iVar3);
  if (lVar8 != 0) {
    *(uint *)(lVar8 + 0x6a8) =
         *(uint *)(lVar8 + 0x6a8) ^ ((uint)*(byte *)(param_1 + 0xb0) ^ *(uint *)(lVar8 + 0x6a8)) & 1
    ;
  }
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x51) = 0;
  return;
}



// FUNCTION 140806740 FUN_140806740 body=160 status=ok
// SIG undefined FUN_140806740(void)

longlong FUN_140806740(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 0x10;
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x58) != &local_18) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x60,&local_10);
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
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1408067e0 FUN_1408067e0 body=384 status=ok
// SIG undefined FUN_1408067e0(void)

undefined8 FUN_1408067e0(longlong *param_1,uint *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  uint local_res8;
  uint local_resc;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  lVar10 = (longlong)(int)((param_2[1] ^ *param_2) & (int)param_1[9] - 1U);
  plVar8 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar8 = param_1 + 7;
  }
  piVar1 = (int *)((longlong)plVar8 + lVar10 * 4);
  iVar3 = *(int *)((longlong)plVar8 + lVar10 * 4);
  while( true ) {
    if (iVar3 == -1) {
      return 0;
    }
    lVar9 = (longlong)iVar3;
    lVar5 = *param_1;
    local_res1c = *(undefined4 *)(lVar5 + 4 + lVar9 * 0x18);
    lVar10 = lVar5 + lVar9 * 0x18;
    local_res18 = *(undefined4 *)(lVar5 + lVar9 * 0x18);
    local_res8 = *param_2;
    local_resc = param_2[1];
    cVar7 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_res18,&local_res8);
    if (cVar7 != '\0') break;
    iVar3 = *(int *)(lVar10 + 0x10);
    piVar1 = (int *)(lVar10 + 0x10);
  }
  iVar3 = *piVar1;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar5 = *param_1;
    lVar10 = lVar5 + (longlong)iVar3 * 0x18;
    lVar9 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar10 + 0x14));
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    puVar2 = (undefined4 *)((longlong)plVar8 + lVar9 * 4);
    iVar4 = *(int *)((longlong)plVar8 + lVar9 * 4);
    while (iVar4 != -1) {
      if (iVar4 == iVar3) {
        *puVar2 = *(undefined4 *)(lVar10 + 0x10);
        break;
      }
      lVar9 = (longlong)iVar4 * 3 + 2;
      puVar2 = (undefined4 *)(lVar5 + lVar9 * 8);
      iVar4 = *(int *)(lVar5 + lVar9 * 8);
    }
  }
  puVar6 = *(undefined8 **)(*param_1 + 8 + (longlong)iVar3 * 0x18);
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,1);
  }
  TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar3,1);
  return 1;
}



// FUNCTION 140806960 FUN_140806960 body=288 status=ok
// SIG undefined FUN_140806960(void)

void FUN_140806960(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  if ((*(char *)(param_1 + 0x160) == '\0') &&
     (*(char *)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0x80) != '\0')) {
    lVar6 = FUN_140803250(param_1);
    uVar4 = *param_2;
    lVar5 = param_2[1];
    if (lVar6 != 0) {
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      local_38 = uVar4;
      local_30 = lVar5;
      (**(code **)(**(longlong **)(DAT_146b17150 + 0x7b0) + 0x2b8))
                (*(longlong **)(DAT_146b17150 + 0x7b0),lVar6,&local_38);
      goto LAB_140806a39;
    }
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    puVar8 = &local_28;
    plVar7 = *(longlong **)(DAT_146b17150 + 0x7b0);
    local_28 = uVar4;
    local_20 = lVar5;
  }
  else {
    local_18 = *param_2;
    local_10 = param_2[1];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    plVar7 = *(longlong **)(DAT_146b17150 + 0x7b0);
    puVar8 = &local_18;
  }
  (**(code **)(*plVar7 + 0x2a8))(plVar7,puVar8);
LAB_140806a39:
  plVar7 = (longlong *)param_2[1];
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
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return;
}



// FUNCTION 140806a80 FUN_140806a80 body=814 status=ok
// SIG undefined FUN_140806a80(void)

void FUN_140806a80(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  longlong *local_10;
  
  if ((*(longlong **)(param_1 + 0x70) != (longlong *)0x0) &&
     (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x88))(), plVar9 = DAT_1469f4590,
     -1 < iVar3)) {
    uVar4 = FUN_14189f8d0(DAT_1469f4590,iVar3);
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    puVar5 = (undefined8 *)(**(code **)(*plVar9 + 0x130))(plVar9,local_28,uVar4);
    *(undefined8 *)(param_1 + 0x90) = *puVar5;
    plVar2 = (longlong *)puVar5[1];
    plVar8 = *(longlong **)(param_1 + 0x98);
    if (plVar2 != plVar8) {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        plVar8 = *(longlong **)(param_1 + 0x98);
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      *(longlong **)(param_1 + 0x98) = plVar2;
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_20 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar9 + 0x78))(plVar9);
    *(undefined8 *)(param_1 + 0xa0) = *puVar5;
    plVar2 = (longlong *)puVar5[1];
    plVar8 = *(longlong **)(param_1 + 0xa8);
    if (plVar2 != plVar8) {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        plVar8 = *(longlong **)(param_1 + 0xa8);
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))();
        }
      }
      *(longlong **)(param_1 + 0xa8) = plVar2;
    }
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_10 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar1 = (int *)((longlong)local_10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10);
        }
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x98);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      iVar3 = (int)plVar2[1];
      bVar10 = iVar3 == 0;
      if (bVar10) {
        *(int *)(plVar2 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
      while (!bVar10) {
        LOCK();
        bVar10 = iVar3 == (int)plVar2[1];
        if (bVar10) {
          *(int *)(plVar2 + 1) = iVar3 + 1;
        }
        UNLOCK();
        if (bVar10) {
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            plVar8 = plVar2 + 1;
            lVar7 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar2)(plVar2);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar2 + 8))(plVar2,1);
              }
            }
          }
          break;
        }
        LOCK();
        iVar3 = (int)plVar2[1];
        bVar10 = iVar3 == 0;
        if (bVar10) {
          *(int *)(plVar2 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
      }
    }
    FUN_1418bcfc0(plVar9,*(undefined4 *)(param_1 + 0x54));
    if ((*(longlong *)(param_1 + 0x60) == 0) ||
       (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x78), lVar7 == 0)) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x128) = DAT_14685e260;
      local_38 = *(undefined8 *)(param_1 + 0x80);
      local_30 = *(longlong **)(param_1 + 0x88);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
      }
      FUN_1418c3710(plVar9,*(undefined4 *)(param_1 + 0x54),&local_38,2);
      plVar9 = local_30;
    }
    else {
      *(undefined8 *)(lVar7 + 0x128) = DAT_14685e260;
      local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x78);
      local_40 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x80);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      FUN_1418c3710(plVar9,*(undefined4 *)(param_1 + 0x54),&local_48,2);
      plVar9 = local_40;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x158);
    lVar7 = UGameplayStatics::GetPlayerController(uVar6,*(undefined4 *)(param_1 + 0x54));
    if (lVar7 != 0) {
      *(byte *)(param_1 + 0xb0) = *(byte *)(lVar7 + 0x6a8) & 1;
      *(uint *)(lVar7 + 0x6a8) = *(uint *)(lVar7 + 0x6a8) | 1;
      *(undefined1 *)(param_1 + 0x51) = 0;
      return;
    }
    *(undefined1 *)(param_1 + 0xb0) = 1;
    *(undefined1 *)(param_1 + 0x51) = 0;
  }
  return;
}



// FUNCTION 140806db0 FUN_140806db0 body=260 status=ok
// SIG undefined FUN_140806db0(void)

void FUN_140806db0(longlong param_1,char param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  char local_res10 [8];
  longlong *local_18;
  int local_10;
  
  if (param_2 != *(char *)(param_1 + 0x31)) {
    *(char *)(param_1 + 0x31) = param_2;
    local_res10[0] = param_2;
    if (param_3 == '\0') {
      FUN_140801b20(local_res10,0);
    }
    else {
      local_18 = (longlong *)0x0;
      plVar1 = (longlong *)FMemory::Realloc(0,0x20);
      local_10 = 2;
      local_18 = plVar1;
      if (plVar1 != (longlong *)0x0) {
        *(char *)(plVar1 + 1) = param_2;
        *plVar1 = (longlong)&PTR_GetPoolName_1440f8fb0;
        lVar2 = FDelegateHandle::GenerateNewID();
        plVar1[2] = lVar2;
      }
      uVar3 = FUN_14164ab60();
      FUN_14158f860(uVar3,local_res8,&local_18,L"IGbxShiftOverlayViewDelegate::SetRecordingEnabled",
                    0x3f800000);
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



// FUNCTION 140806ec0 FUN_140806ec0 body=51 status=ok
// SIG undefined FUN_140806ec0(void)

void FUN_140806ec0(longlong param_1,undefined1 *param_2)

{
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    local_28 = *param_2;
    local_20 = 0;
    local_18 = 0;
    local_27 = 1;
    SLeafWidget::SetVisibility(*(longlong *)(param_1 + 0x58),&local_28);
  }
  return;
}



// FUNCTION 140806f00 FUN_140806f00 body=51 status=ok
// SIG undefined FUN_140806f00(void)

void FUN_140806f00(longlong param_1,undefined1 *param_2)

{
  undefined1 local_28;
  undefined1 local_27;
  undefined8 local_20;
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
    local_28 = *param_2;
    local_20 = 0;
    local_18 = 0;
    local_27 = 1;
    SLeafWidget::SetVisibility(*(longlong *)(param_1 + 0x68),&local_28);
  }
  return;
}



// FUNCTION 140806f40 FUN_140806f40 body=87 status=ok
// SIG undefined FUN_140806f40(void)

void FUN_140806f40(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 local_res8 [8];
  
  cVar2 = (**(code **)(*param_1 + 0x120))();
  if (cVar2 == '\0') {
    local_res8[0] = DAT_1464b9ee8;
    (**(code **)(*param_1 + 0x100))(param_1,local_res8);
    plVar1 = (longlong *)param_1[5];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x78))(plVar1,param_2);
    }
  }
  return;
}



// FUNCTION 140806fa0 FUN_140806fa0 body=4130 status=ok
// SIG undefined FUN_140806fa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140806fa0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  code **ppcVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  code *pcVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  code *pcVar19;
  code *pcVar20;
  undefined2 *puVar21;
  bool bVar22;
  undefined1 auStack_728 [32];
  longlong **local_708;
  longlong local_700;
  undefined4 local_6f8;
  longlong local_6f0;
  longlong local_6e8;
  longlong local_6e0;
  undefined1 local_6d8;
  undefined1 local_6d0;
  longlong local_6c8;
  code *local_6b8;
  code *pcStack_6b0;
  longlong *local_6a8;
  longlong *local_6a0;
  longlong *local_698;
  longlong *local_690;
  longlong local_688;
  longlong *plStack_680;
  longlong local_678;
  longlong *plStack_670;
  longlong *local_668;
  longlong *local_660;
  code *local_658;
  code *pcStack_650;
  code *local_648;
  code *pcStack_640;
  longlong local_638;
  undefined8 local_630;
  undefined8 local_628;
  longlong local_620 [2];
  LARGE_INTEGER local_610;
  longlong *local_608;
  undefined4 local_600;
  undefined4 local_5fc;
  undefined8 local_5f8;
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined2 local_5e0;
  undefined8 local_5dc;
  undefined4 local_5d4;
  undefined4 local_5d0;
  undefined8 local_5c8;
  undefined4 local_5c0;
  undefined2 local_5bc;
  undefined1 local_5ba;
  undefined8 local_5b8;
  code *local_5a8;
  longlong local_5a0;
  undefined2 *local_598;
  int local_590;
  undefined8 local_588;
  undefined8 local_580;
  double local_578;
  double *local_570;
  code *local_568;
  ulonglong uStack_560;
  code *local_558;
  ulonglong uStack_550;
  code *local_548;
  ulonglong uStack_540;
  code *local_538;
  ulonglong uStack_530;
  code *local_528;
  ulonglong uStack_520;
  longlong *local_518;
  longlong *local_510;
  longlong *local_500;
  longlong *local_4f8;
  longlong *local_4e8;
  longlong *local_4e0;
  longlong local_4d0 [2];
  longlong local_4c0;
  longlong *plStack_4b8;
  longlong local_4b0;
  longlong *plStack_4a8;
  undefined1 local_498 [264];
  longlong local_390;
  undefined1 local_378 [272];
  longlong *local_268;
  undefined1 local_258 [272];
  undefined1 local_148 [272];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_728;
  local_628 = 0x26;
  local_630 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_630,0);
  FGenericPlatformString::Memcpy(local_630,L"Spawn UI Time - SHiFT Overlay Widgets",0x4c);
  uVar11 = FUN_141672640();
  FUN_140800df0(&local_598,&local_630,uVar11);
  lVar14 = param_1[0x11];
  uVar5 = *(undefined4 *)((longlong)param_1 + 0x8c);
  lVar12 = SFlareCompanyMenu::FArguments::FArguments(local_148);
  *(int *)(lVar12 + 0x108) = (int)lVar14;
  *(undefined4 *)(lVar12 + 0x10c) = uVar5;
  plVar13 = (longlong *)FUN_140800ad0();
  plVar16 = plVar13 + 2;
  local_518 = plVar16;
  local_510 = plVar13;
  FUN_14044f790(&local_518,plVar16);
  local_708 = (longlong **)0x338;
  SWidget::SetDebugInfo
            (plVar16,"SGbxShiftOverlayUIWidget",
             "D:\\Oak\\main\\Engine\\Plugins\\Gearbox\\GbxShiftOverlay\\Source\\GbxShiftOverlay\\Private\\GbxShiftOverlayUIListener.cpp"
             ,0xab);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_6a8 = plVar16;
  local_6a0 = plVar13;
  if ((longlong **)(param_1 + 0xf) != &local_6a8) {
    param_1[0xf] = (longlong)plVar16;
    local_6a8 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,&local_6a0);
  }
  plVar18 = local_6a0;
  if (local_6a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_6a0 + 1;
    lVar14 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_6a0)(local_6a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar18 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_6a0 + 8))(local_6a0,1);
      }
    }
  }
  local_6f8 = *(undefined4 *)(lVar12 + 0x90);
  local_6c8 = lVar12 + 0xf8;
  local_6e0 = lVar12 + 0xe8;
  local_6d0 = *(undefined1 *)(lVar12 + 0xf1);
  local_6e8 = lVar12 + 200;
  local_6f0 = lVar12 + 0x98;
  local_6d8 = *(undefined1 *)(lVar12 + 0xf0);
  local_700 = lVar12 + 0x78;
  local_708 = (longlong **)(lVar12 + 0x60);
  SWidget::SWidgetConstruct(plVar16,lVar12,lVar12 + 0x30,lVar12 + 0x40);
  uVar5 = *(undefined4 *)(lVar12 + 0x108);
  uVar6 = *(undefined4 *)(lVar12 + 0x10c);
  lVar14 = SFlareCompanyMenu::FArguments::FArguments(local_258);
  *(undefined4 *)(lVar14 + 0x108) = uVar5;
  *(undefined4 *)(lVar14 + 0x10c) = uVar6;
  FUN_140463370(plVar16,lVar14);
  FUN_140456c70(local_258);
  if (((char)plVar13[5] < '\0') || (cVar8 = (**(code **)(*plVar16 + 0x1e8))(plVar16), cVar8 != '\0')
     ) {
    bVar9 = 1;
  }
  else {
    bVar9 = 0;
  }
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) | bVar9;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    plVar16 = plVar13 + 1;
    lVar14 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
    LOCK();
    plVar16 = plVar13 + 1;
    lVar14 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  FUN_140456c70(local_148);
  if (param_1[0xf] == 0) {
    (**(code **)(*param_1 + 0xe8))(param_1);
    uVar11 = 0;
  }
  else {
    pcVar20 = (code *)0x0;
    local_5c0 = 0x41000000;
    local_600 = 0x500;
    local_5fc = 0x2d0;
    local_5f8 = 0;
    local_5f0 = 0;
    local_5e8 = 0;
    local_5e0 = 1;
    local_5dc = 0;
    local_5d4 = 0;
    local_5d0 = 200;
    local_5c8 = 0;
    local_5bc = 0;
    local_5ba = 0;
    local_5b8 = 0;
    local_608 = param_1;
    pcVar15 = (code *)operator_new(0x50);
    pcStack_640 = pcVar20;
    if (pcVar15 != (code *)0x0) {
      *(undefined4 *)(pcVar15 + 8) = 1;
      *(undefined4 *)(pcVar15 + 0xc) = 1;
      *(undefined ***)pcVar15 = &PTR_FUN_1440f8fa0;
      cohtml::ITextInputHandler::ITextInputHandler((ITextInputHandler *)(pcVar15 + 0x10));
      *(longlong **)(pcVar15 + 0x20) = param_1;
      *(undefined ***)(pcVar15 + 0x10) = &PTR_FUN_1440f88e0;
      *(longlong *)(pcVar15 + 0x28) = 0;
      *(longlong *)(pcVar15 + 0x30) = 0;
      pcVar15[0x38] = (code)0x0;
      *(longlong *)(pcVar15 + 0x40) = 0;
      *(longlong *)(pcVar15 + 0x48) = 0;
      pcStack_640 = pcVar15;
    }
    local_648 = pcStack_640 + 0x10;
    SharedPointerInternals::EnableSharedFromThis(&local_648,local_648,local_648);
    local_658 = local_648;
    pcStack_650 = pcStack_640;
    if (pcStack_640 != (code *)0x0) {
      LOCK();
      *(int *)(pcStack_640 + 8) = *(int *)(pcStack_640 + 8) + 1;
      UNLOCK();
    }
    ppcVar3 = (code **)(param_1 + 7);
    if (ppcVar3 != &local_658) {
      *ppcVar3 = local_648;
      local_658 = (code *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 8,&pcStack_650);
    }
    pcVar15 = pcStack_650;
    if (pcStack_650 != (code *)0x0) {
      LOCK();
      pcVar19 = pcStack_650 + 8;
      iVar10 = *(int *)pcVar19;
      *(int *)pcVar19 = *(int *)pcVar19 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (*(code *)**(undefined8 **)pcStack_650)(pcStack_650);
        LOCK();
        pcVar15 = pcVar15 + 0xc;
        iVar10 = *(int *)pcVar15;
        *(int *)pcVar15 = *(int *)pcVar15 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*(longlong *)pcStack_650 + 8))(pcStack_650,1);
        }
      }
    }
    pcVar15 = pcStack_640;
    if (pcStack_640 != (code *)0x0) {
      LOCK();
      pcVar19 = pcStack_640 + 8;
      iVar10 = *(int *)pcVar19;
      *(int *)pcVar19 = *(int *)pcVar19 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (*(code *)**(undefined8 **)pcStack_640)(pcStack_640);
        LOCK();
        pcVar19 = pcVar15 + 0xc;
        iVar10 = *(int *)pcVar19;
        *(int *)pcVar19 = *(int *)pcVar19 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*(longlong *)pcVar15 + 8))(pcVar15,1);
        }
      }
    }
    local_5a8 = *ppcVar3;
    local_5a0 = param_1[8];
    local_620[0] = 0;
    local_620[1] = 0;
    if (local_5a0 != 0) {
      LOCK();
      *(int *)(local_5a0 + 8) = *(int *)(local_5a0 + 8) + 1;
      UNLOCK();
    }
    pcVar15 = (code *)param_1[10];
    pcVar19 = pcVar15;
    if (pcVar15 != (code *)0x0) {
      LOCK();
      iVar10 = *(int *)(pcVar15 + 8);
      bVar22 = iVar10 == 0;
      if (bVar22) {
        *(int *)(pcVar15 + 8) = 0;
        iVar10 = 0;
      }
      UNLOCK();
      while (pcVar19 = pcVar20, !bVar22) {
        LOCK();
        bVar22 = iVar10 == *(int *)(pcVar15 + 8);
        if (bVar22) {
          *(int *)(pcVar15 + 8) = iVar10 + 1;
        }
        UNLOCK();
        if (bVar22) {
          pcVar19 = pcVar15;
          pcVar20 = (code *)0x0;
          if (pcVar15 != (code *)0x0) {
            pcVar20 = (code *)param_1[9];
            LOCK();
            *(int *)(pcVar15 + 8) = *(int *)(pcVar15 + 8) + 1;
            UNLOCK();
            LOCK();
            pcVar19 = pcVar15 + 8;
            iVar10 = *(int *)pcVar19;
            *(int *)pcVar19 = *(int *)pcVar19 + -1;
            UNLOCK();
            pcVar19 = pcVar15;
            if (iVar10 == 1) {
              (*(code *)**(undefined8 **)pcVar15)(pcVar15);
              LOCK();
              pcVar19 = pcVar15 + 0xc;
              iVar10 = *(int *)pcVar19;
              *(int *)pcVar19 = *(int *)pcVar19 + -1;
              UNLOCK();
              pcVar19 = pcVar15;
              if (iVar10 == 1) {
                (**(code **)(*(longlong *)pcVar15 + 8))(pcVar15,1);
              }
            }
          }
          break;
        }
        LOCK();
        iVar10 = *(int *)(pcVar15 + 8);
        bVar22 = iVar10 == 0;
        if (bVar22) {
          *(int *)(pcVar15 + 8) = 0;
          iVar10 = 0;
        }
        UNLOCK();
      }
    }
    if (pcVar19 != (code *)0x0) {
      LOCK();
      *(int *)(pcVar19 + 8) = *(int *)(pcVar19 + 8) + 1;
      UNLOCK();
    }
    local_708 = (longlong **)&local_5a8;
    local_6b8 = pcVar20;
    pcStack_6b0 = pcVar19;
    FUN_140465860(param_1[0xf],&local_608,local_620,&local_6b8);
    if (pcVar19 != (code *)0x0) {
      LOCK();
      pcVar20 = pcVar19 + 8;
      iVar10 = *(int *)pcVar20;
      *(int *)pcVar20 = *(int *)pcVar20 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (*(code *)**(undefined8 **)pcVar19)(pcVar19);
        LOCK();
        pcVar20 = pcVar19 + 0xc;
        iVar10 = *(int *)pcVar20;
        *(int *)pcVar20 = *(int *)pcVar20 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*(longlong *)pcVar19 + 8))(pcVar19,1);
        }
      }
    }
    plVar16 = (longlong *)operator_new(0x240);
    if (plVar16 == (longlong *)0x0) {
      plVar16 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar16 + 1) = 1;
      *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
      *plVar16 = (longlong)&PTR_FUN_144044b28;
      if (plVar16 != (longlong *)0xfffffffffffffff0) {
        FUN_141961a40();
      }
    }
    plVar13 = plVar16 + 2;
    local_500 = plVar13;
    local_4f8 = plVar16;
    FUN_14044f790(&local_500,plVar13);
    local_708 = (longlong **)0x230;
    SWidget::SetDebugInfo
              (plVar13,"SCanvas",
               "D:\\Oak\\main\\Engine\\Plugins\\Gearbox\\GbxShiftOverlay\\Source\\GbxShiftOverlay\\Private\\GbxShiftOverlayUIListener.cpp"
               ,0xbd);
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
    }
    local_698 = plVar13;
    local_690 = plVar16;
    if ((longlong **)(param_1 + 0xb) != &local_698) {
      param_1[0xb] = (longlong)plVar13;
      local_698 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xc,&local_690);
    }
    plVar18 = local_690;
    if (local_690 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_690 + 1;
      lVar14 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_690)(local_690);
        LOCK();
        piVar2 = (int *)((longlong)plVar18 + 0xc);
        iVar10 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_690 + 8))(local_690,1);
        }
      }
    }
    lVar14 = SCanvas::FArguments::FArguments(local_498);
    local_6f8 = *(undefined4 *)(lVar14 + 0x90);
    local_6c8 = lVar14 + 0xf8;
    local_6e0 = lVar14 + 0xe8;
    local_6d0 = *(undefined1 *)(lVar14 + 0xf1);
    local_6e8 = lVar14 + 200;
    local_6f0 = lVar14 + 0x98;
    local_6d8 = *(undefined1 *)(lVar14 + 0xf0);
    local_700 = lVar14 + 0x78;
    local_708 = (longlong **)(lVar14 + 0x60);
    SWidget::SWidgetConstruct(plVar13,lVar14,lVar14 + 0x30,lVar14 + 0x40);
    SOverlay::Construct(plVar13,lVar14);
    if (((char)plVar16[5] < '\0') ||
       (cVar8 = (**(code **)(*plVar13 + 0x1e8))(plVar13), cVar8 != '\0')) {
      bVar9 = 1;
    }
    else {
      bVar9 = 0;
    }
    *(byte *)((longlong)plVar16 + 0x29) = *(byte *)((longlong)plVar16 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar16 + 0x29) = *(byte *)((longlong)plVar16 + 0x29) | bVar9;
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
      LOCK();
      plVar13 = plVar16 + 1;
      lVar14 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        iVar10 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar16 + 8))(plVar16,1);
        }
      }
      LOCK();
      plVar13 = plVar16 + 1;
      lVar14 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        iVar10 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar16 + 8))(plVar16,1);
        }
      }
    }
    if (local_390 != 0) {
      FMemory::Free();
    }
    FUN_140456c70(local_498);
    if (param_1[0xb] == 0) {
      (**(code **)(*param_1 + 0xe8))(param_1);
      uVar11 = 0;
    }
    else {
      plVar16 = (longlong *)param_1[0x10];
      local_638 = param_1[0xf];
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
          UNLOCK();
        }
      }
      lVar14 = param_1[0xb];
      puVar17 = (undefined8 *)operator_new(0x68);
      if (puVar17 == (undefined8 *)0x0) {
        puVar17 = (undefined8 *)0x0;
      }
      else {
        FSlotBase::FSlotBase(puVar17);
        *puVar17 = &PTR__scalar_deleting_destructor__1440439b8;
        *(undefined4 *)(puVar17 + 4) = (undefined4)DAT_1468b5d88;
        *(undefined4 *)((longlong)puVar17 + 0x24) = DAT_1468b5d88._4_4_;
        *(undefined1 *)(puVar17 + 5) = 1;
        puVar17[6] = 0;
        *(undefined4 *)(puVar17 + 7) = 0;
        *(undefined4 *)(puVar17 + 8) = 0x3f800000;
        *(undefined4 *)((longlong)puVar17 + 0x44) = 0x3f800000;
        *(undefined1 *)(puVar17 + 9) = 1;
        puVar17[10] = 0;
        *(undefined4 *)(puVar17 + 0xb) = 0;
        *(undefined4 *)(puVar17 + 0xc) = 1;
        *(undefined4 *)((longlong)puVar17 + 100) = 1;
      }
      if (*(char *)(lVar14 + 0x228) == '\0') {
        lVar12 = *(longlong *)(lVar14 + 0x210);
        if ((lVar12 != 0) && (puVar17[1] != lVar12)) {
          puVar17[1] = lVar12;
          FUN_141802340(puVar17);
        }
        iVar10 = *(int *)(lVar14 + 0x220);
        *(int *)(lVar14 + 0x220) = iVar10 + 1;
        if (*(int *)(lVar14 + 0x224) < iVar10 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar14 + 0x218,iVar10);
        }
        *(undefined8 **)(*(longlong *)(lVar14 + 0x218) + (longlong)iVar10 * 8) = puVar17;
      }
      plVar18 = (longlong *)puVar17[3];
      plVar13 = puVar17 + 2;
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
      }
      FSlotBase::DetatchParentFromContent(puVar17);
      local_688 = local_638;
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
      }
      plStack_680 = plVar16;
      if (&local_688 != plVar13) {
        local_688 = *plVar13;
        plStack_680 = (longlong *)puVar17[3];
        local_4c0 = local_638;
        *plVar13 = local_638;
        puVar17[3] = plVar16;
        plStack_4b8 = plVar16;
      }
      plVar13 = plStack_680;
      if (plStack_680 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_680 + 1;
        lVar14 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plStack_680)(plStack_680);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plStack_680 + 8))(plStack_680,1);
          }
        }
      }
      FUN_141802340(puVar17);
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar18 + 1;
        lVar14 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plVar18)(plVar18);
          LOCK();
          piVar2 = (int *)((longlong)plVar18 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar18 + 8))(plVar18,1);
          }
        }
      }
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar16 + 1;
        lVar14 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar2 = (int *)((longlong)plVar16 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar16 + 8))(plVar16,1);
          }
        }
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar16 + 1;
          lVar14 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar2 = (int *)((longlong)plVar16 + 0xc);
            iVar10 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar16 + 8))(plVar16,1);
            }
          }
        }
      }
      plVar16 = (longlong *)param_1[0x10];
      lVar14 = param_1[0xf];
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
          UNLOCK();
        }
      }
      lVar12 = FUN_140800be0(local_378);
      plVar13 = (longlong *)(lVar12 + 0x108);
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
      }
      local_678 = lVar14;
      plStack_670 = plVar16;
      if (&local_678 != plVar13) {
        local_678 = *plVar13;
        plStack_670 = *(longlong **)(lVar12 + 0x110);
        *plVar13 = lVar14;
        *(longlong **)(lVar12 + 0x110) = plVar16;
        local_4b0 = lVar14;
        plStack_4a8 = plVar16;
      }
      plVar13 = plStack_670;
      if (plStack_670 != (longlong *)0x0) {
        LOCK();
        plVar18 = plStack_670 + 1;
        lVar14 = *plVar18;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plStack_670)(plStack_670);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plStack_670 + 8))(plStack_670,1);
          }
        }
      }
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar16 + 1;
        lVar14 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar2 = (int *)((longlong)plVar16 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar16 + 8))(plVar16,1);
          }
        }
      }
      plVar18 = (longlong *)FUN_140800a20();
      plVar13 = plVar18 + 2;
      local_4e8 = plVar13;
      local_4e0 = plVar18;
      FUN_14044f790(&local_4e8,plVar13);
      local_708 = (longlong **)0x340;
      SWidget::SetDebugInfo
                (plVar13,"SGbxShiftOverlayBackgroundWidget",
                 "D:\\Oak\\main\\Engine\\Plugins\\Gearbox\\GbxShiftOverlay\\Source\\GbxShiftOverlay\\Private\\GbxShiftOverlayUIListener.cpp"
                 ,199);
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
      }
      local_668 = plVar13;
      local_660 = plVar18;
      if ((longlong **)(param_1 + 0xd) != &local_668) {
        param_1[0xd] = (longlong)plVar13;
        local_668 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xe,&local_660);
      }
      plVar1 = local_660;
      if (local_660 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_660 + 1;
        lVar14 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_660)(local_660);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_660 + 8))(local_660,1);
          }
        }
      }
      local_6f8 = *(undefined4 *)(lVar12 + 0x90);
      local_6c8 = lVar12 + 0xf8;
      local_6e0 = lVar12 + 0xe8;
      local_6d0 = *(undefined1 *)(lVar12 + 0xf1);
      local_6e8 = lVar12 + 200;
      local_6f0 = lVar12 + 0x98;
      local_6d8 = *(undefined1 *)(lVar12 + 0xf0);
      local_700 = lVar12 + 0x78;
      local_708 = (longlong **)(lVar12 + 0x60);
      SWidget::SWidgetConstruct(plVar13,lVar12,lVar12 + 0x30,lVar12 + 0x40);
      FUN_140802450(plVar13,lVar12);
      if (((char)plVar18[5] < '\0') ||
         (cVar8 = (**(code **)(*plVar13 + 0x1e8))(plVar13), cVar8 != '\0')) {
        bVar9 = 1;
      }
      else {
        bVar9 = 0;
      }
      *(byte *)((longlong)plVar18 + 0x29) = *(byte *)((longlong)plVar18 + 0x29) & 0xfe;
      *(byte *)((longlong)plVar18 + 0x29) = *(byte *)((longlong)plVar18 + 0x29) | bVar9;
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
        LOCK();
        plVar13 = plVar18 + 1;
        lVar14 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plVar18)(plVar18);
          LOCK();
          piVar2 = (int *)((longlong)plVar18 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar18 + 8))(plVar18,1);
          }
        }
        LOCK();
        plVar13 = plVar18 + 1;
        lVar14 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plVar18)(plVar18);
          LOCK();
          piVar2 = (int *)((longlong)plVar18 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar18 + 8))(plVar18,1);
          }
        }
      }
      if (local_268 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_268 + 1;
        lVar14 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_268)(local_268);
          LOCK();
          piVar2 = (int *)((longlong)local_268 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_268 + 8))(local_268,1);
          }
        }
      }
      FUN_140456c70(local_378);
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar16 + 1;
        lVar14 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar2 = (int *)((longlong)plVar16 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar16 + 8))(plVar16,1);
          }
        }
      }
      if (param_1[0xd] == 0) {
        (**(code **)(*param_1 + 0xe8))(param_1);
        uVar11 = 0;
      }
      else {
        (**(code **)(*param_1 + 0x130))(param_1,0);
        local_6b8 = FUN_1408048f0;
        pcStack_6b0 = (code *)((ulonglong)pcStack_6b0 & 0xffffffff00000000);
        local_568 = FUN_1408048f0;
        uStack_560 = (ulonglong)pcStack_6b0;
        FUN_1407ffd90(param_1[0xd] + 0x310,param_1,&local_568);
        local_6b8 = FUN_140804950;
        pcStack_6b0 = (code *)((ulonglong)pcStack_6b0 & 0xffffffff00000000);
        local_558 = FUN_140804950;
        uStack_550 = (ulonglong)pcStack_6b0;
        FUN_1407ffd90(param_1[0xd] + 800,param_1,&local_558);
        local_6b8 = FUN_1408048f0;
        pcStack_6b0 = (code *)((ulonglong)pcStack_6b0 & 0xffffffff00000000);
        local_548 = FUN_1408048f0;
        uStack_540 = (ulonglong)pcStack_6b0;
        FUN_1407ffd90(param_1[0xf] + 0x2e0,param_1,&local_548);
        local_6b8 = FUN_140804950;
        pcStack_6b0 = (code *)((ulonglong)pcStack_6b0 & 0xffffffff00000000);
        local_538 = FUN_140804950;
        uStack_530 = (ulonglong)pcStack_6b0;
        FUN_1407ffd90(param_1[0xf] + 0x2f0,param_1,&local_538);
        local_6b8 = FUN_140802300;
        pcStack_6b0 = (code *)((ulonglong)pcStack_6b0 & 0xffffffff00000000);
        local_528 = FUN_140802300;
        uStack_520 = (ulonglong)pcStack_6b0;
        FUN_1407ffd90(param_1[0xf] + 0x300,param_1,&local_528);
        lVar14 = param_1[0xf];
        local_6b8 = FUN_140802bb0;
        pcStack_6b0 = (code *)((ulonglong)pcStack_6b0 & 0xffffffff00000000);
        plVar13 = (longlong *)(lVar14 + 0x310);
        plVar16 = (longlong *)FMemory::Realloc(0,0x30,0);
        if (plVar16 != (longlong *)0x0) {
          plVar16[1] = (longlong)param_1;
          *plVar16 = (longlong)&PTR_GetPoolName_1440f9090;
          plVar16[2] = (longlong)local_6b8;
          plVar16[3] = (longlong)pcStack_6b0;
          lVar12 = FDelegateHandle::GenerateNewID();
          plVar16[5] = lVar12;
        }
        if (local_4d0 != plVar13) {
          if (plVar16 == (longlong *)0x0) {
            if ((*(int *)(lVar14 + 0x318) != 0) &&
               (plVar18 = (longlong *)*plVar13, plVar18 != (longlong *)0x0)) {
              (**(code **)(*plVar18 + 0x28))(plVar18,0);
              if (*plVar13 != 0) {
                lVar12 = FMemory::Realloc(*plVar13,0,0);
                *plVar13 = lVar12;
              }
              *(undefined4 *)(lVar14 + 0x318) = 0;
            }
          }
          else {
            (**(code **)(*plVar16 + 0x30))(plVar16,plVar13);
          }
        }
        if (plVar16 != (longlong *)0x0) {
          (**(code **)(*plVar16 + 0x28))(plVar16,0);
          lVar14 = FMemory::Realloc(plVar16,0,0);
          if (lVar14 != 0) {
            FMemory::Free(lVar14);
          }
        }
        FUN_140488180(param_1[0xf],3);
        uVar11 = 1;
      }
    }
    if (local_620[0] != 0) {
      FMemory::Free();
    }
  }
  QueryPerformanceCounter(&local_610);
  dVar7 = (double)local_610.QuadPart * DAT_1468b02f8 + 16777216.0;
  *local_570 = (dVar7 - local_578) + *local_570;
  puVar21 = &DAT_143f3eda8;
  if (local_590 != 0) {
    puVar21 = local_598;
  }
  local_578 = dVar7;
  FOutputDevice::LogfImpl(local_588,L"%s: %f secs",puVar21,local_580);
  if (local_598 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar11;
}



// FUNCTION 140807fd0 FUN_140807fd0 body=2197 status=ok
// SIG undefined FUN_140807fd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140807fd0(code *param_1)

{
  longlong *plVar1;
  int *piVar2;
  IViewListener **ppIVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  IViewListener *pIVar11;
  longlong *plVar12;
  IViewListener *pIVar13;
  undefined2 *puVar14;
  code *pcVar15;
  longlong **pplVar16;
  double dVar17;
  undefined1 auStack_2d8 [32];
  longlong local_2b8;
  longlong local_2b0;
  undefined4 local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong local_290;
  undefined1 local_288;
  undefined1 local_280;
  longlong local_278;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  longlong *local_258;
  longlong *local_250;
  IViewListener *local_248;
  longlong *local_240;
  undefined4 local_238;
  undefined4 local_234;
  undefined8 local_230;
  undefined8 local_228;
  LARGE_INTEGER local_220;
  longlong *local_218 [2];
  undefined8 local_208;
  longlong *local_200;
  undefined8 local_1f8;
  longlong *local_1f0;
  undefined2 *local_1e8;
  int local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  double local_1c8;
  double *local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong *local_178;
  longlong *local_170;
  undefined1 local_158 [264];
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  local_228 = 0x1d;
  local_230 = 0;
  local_268 = param_1;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_230,0);
  FGenericPlatformString::Memcpy(local_230,L"Spawn UI Time - Spawn Canvas",0x3a);
  uVar8 = FUN_141672640();
  FUN_140800df0(&local_1e8,&local_230,uVar8);
  plVar9 = (longlong *)operator_new(0x240);
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_1440f90d0;
    if (plVar9 != (longlong *)0xfffffffffffffff0) {
      FUN_1417f4610();
    }
  }
  plVar12 = plVar9 + 2;
  local_178 = plVar12;
  local_170 = plVar9;
  FUN_14044f790(&local_178,plVar12);
  local_2b8 = 0x230;
  SWidget::SetDebugInfo
            (plVar12,"SOverlay",
             "D:\\Oak\\main\\Engine\\Plugins\\Gearbox\\GbxShiftOverlay\\Source\\GbxShiftOverlay\\Private\\GbxShiftOverlay.cpp"
             ,0x5d);
  pplVar16 = (longlong **)(param_1 + 0x80);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_258 = plVar12;
  local_250 = plVar9;
  if (pplVar16 != &local_258) {
    *pplVar16 = plVar12;
    local_258 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x88,&local_250);
  }
  plVar4 = local_250;
  if (local_250 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_250 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_250)(local_250);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_250 + 8))(local_250,1);
      }
    }
  }
  lVar10 = SOverlay::FArguments::FArguments(local_158);
  local_2a8 = *(undefined4 *)(lVar10 + 0x90);
  local_278 = lVar10 + 0xf8;
  local_290 = lVar10 + 0xe8;
  local_280 = *(undefined1 *)(lVar10 + 0xf1);
  local_298 = lVar10 + 200;
  local_2a0 = lVar10 + 0x98;
  local_288 = *(undefined1 *)(lVar10 + 0xf0);
  local_2b0 = lVar10 + 0x78;
  local_2b8 = lVar10 + 0x60;
  SWidget::SWidgetConstruct(plVar12,lVar10,lVar10 + 0x30,lVar10 + 0x40);
  SOverlay::Construct(plVar12,lVar10);
  if (((char)plVar9[5] < '\0') || (cVar5 = (**(code **)(*plVar12 + 0x1e8))(plVar12), cVar5 != '\0'))
  {
    bVar6 = 1;
  }
  else {
    bVar6 = 0;
  }
  *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) | bVar6;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar12 = plVar9 + 1;
    lVar10 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
    LOCK();
    plVar12 = plVar9 + 1;
    lVar10 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (local_50 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_158);
  pcVar15 = local_268;
  if (*pplVar16 != (longlong *)0x0) {
    pIVar11 = (IViewListener *)operator_new(200);
    pcVar15 = local_268;
    if (pIVar11 == (IViewListener *)0x0) {
      pIVar11 = (IViewListener *)0x0;
    }
    else {
      FWeakObjectPtr::operator=(&local_238,local_268);
      cohtml::IViewListener::IViewListener(pIVar11);
      *(undefined8 *)(pIVar11 + 8) = 0;
      *(undefined4 *)(pIVar11 + 0x10) = 0;
      *(undefined8 *)(pIVar11 + 0x18) = 0;
      *(undefined4 *)(pIVar11 + 0x20) = 0;
      *(undefined8 *)(pIVar11 + 0x28) = 0;
      *(undefined8 *)(pIVar11 + 0x30) = 0;
      *(undefined8 *)(pIVar11 + 0x38) = 0;
      *(undefined8 *)(pIVar11 + 0x40) = 0;
      *(undefined8 *)(pIVar11 + 0x48) = 0;
      *(undefined8 *)(pIVar11 + 0x50) = 0;
      *(undefined ***)pIVar11 = &PTR_FUN_1440f8908;
      *(undefined8 *)(pIVar11 + 0x58) = 0;
      *(undefined8 *)(pIVar11 + 0x60) = 0;
      *(undefined8 *)(pIVar11 + 0x68) = 0;
      *(undefined8 *)(pIVar11 + 0x70) = 0;
      *(undefined8 *)(pIVar11 + 0x78) = 0;
      *(undefined8 *)(pIVar11 + 0x80) = 0;
      *(undefined4 *)(pIVar11 + 0x88) = local_238;
      *(undefined4 *)(pIVar11 + 0x8c) = local_234;
      *(undefined8 *)(pIVar11 + 0x90) = 0;
      *(undefined4 *)(pIVar11 + 0x98) = 0;
      *(undefined8 *)(pIVar11 + 0xa0) = 0;
      *(undefined4 *)(pIVar11 + 0xa8) = 0;
      *(undefined8 *)(pIVar11 + 0xb0) = 0;
      *(undefined4 *)(pIVar11 + 0xb8) = 0;
      pIVar11[0xc0] = (IViewListener)0x0;
    }
    plVar9 = (longlong *)0x0;
    plVar12 = (longlong *)operator_new(0x18);
    if (plVar12 != (longlong *)0x0) {
      *(undefined4 *)(plVar12 + 1) = 1;
      *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
      *plVar12 = (longlong)&PTR_FUN_143f3f2e0;
      plVar12[2] = (longlong)pIVar11;
      plVar9 = plVar12;
    }
    pIVar13 = pIVar11 + 0x48;
    ppIVar3 = (IViewListener **)(pcVar15 + 0x60);
    if (pIVar11 == (IViewListener *)0x0) {
      pIVar13 = (IViewListener *)0x0;
    }
    local_248 = pIVar11;
    local_240 = plVar9;
    if (pIVar13 != (IViewListener *)0x0) {
      if ((*(longlong *)pIVar13 != 0) && (*(longlong *)(pIVar13 + 8) != 0)) {
        piVar2 = (int *)(*(longlong *)(pIVar13 + 8) + 8);
        LOCK();
        iVar7 = *piVar2;
        if (iVar7 == 0) {
          *piVar2 = 0;
          iVar7 = 0;
        }
        UNLOCK();
        if (0 < iVar7) goto LAB_14080844a;
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      *(IViewListener **)pIVar13 = pIVar11;
      plVar12 = *(longlong **)(pIVar13 + 8);
      if (plVar9 != plVar12) {
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
          UNLOCK();
          plVar12 = *(longlong **)(pIVar13 + 8);
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
        *(longlong **)(pIVar13 + 8) = plVar9;
      }
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar9 + 1;
        lVar10 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
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
    }
LAB_14080844a:
    if (ppIVar3 != &local_248) {
      *ppIVar3 = pIVar11;
      local_248 = (IViewListener *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(pcVar15 + 0x68,&local_240);
    }
    plVar9 = local_240;
    if (local_240 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_240 + 1;
      lVar10 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_240)(local_240);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_240 + 8))(local_240,1);
        }
      }
    }
    if ((*ppIVar3 != (IViewListener *)0x0) &&
       (cVar5 = (**(code **)(*(longlong *)*ppIVar3 + 0xe0))(), cVar5 != '\0')) {
      local_268 = FUN_1408050e0;
      uStack_260 = 0;
      local_1b8 = 0x408050e0;
      uStack_1b4 = 1;
      uStack_1b0 = 0;
      uStack_1ac = uStack_25c;
      FUN_1407ffe80(*ppIVar3 + 0x90,pcVar15,&local_1b8);
      local_268 = (code *)&LAB_140805340;
      uStack_260 = 0;
      local_1a8 = 0x40805340;
      uStack_1a4 = 1;
      uStack_1a0 = 0;
      uStack_19c = uStack_25c;
      FUN_1407ffe80(*ppIVar3 + 0xa0,pcVar15,&local_1a8);
      local_268 = FUN_140805f90;
      uStack_260 = 0;
      local_198 = 0x40805f90;
      uStack_194 = 1;
      uStack_190 = 0;
      uStack_18c = uStack_25c;
      FUN_1407ffe80(*ppIVar3 + 8,pcVar15,&local_198);
      local_268 = FUN_140806040;
      uStack_260 = 0;
      local_188 = 0x40806040;
      uStack_184 = 1;
      uStack_180 = 0;
      uStack_17c = uStack_25c;
      FUN_1407ffe80(*ppIVar3 + 0x18,pcVar15,&local_188);
      pIVar11 = *ppIVar3;
      local_268 = FUN_140802c10;
      uStack_260 = 0;
      pIVar13 = pIVar11 + 0xb0;
      plVar9 = (longlong *)FMemory::Realloc(0,0x30);
      local_218[0] = plVar9;
      if (plVar9 != (longlong *)0x0) {
        *plVar9 = (longlong)&PTR_FUN_1440f9050;
        FWeakObjectPtr::operator=(plVar9 + 1,pcVar15);
        *(undefined4 *)(plVar9 + 2) = (undefined4)local_268;
        *(undefined4 *)((longlong)plVar9 + 0x14) = local_268._4_4_;
        *(undefined4 *)(plVar9 + 3) = uStack_260;
        *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_25c;
        lVar10 = FDelegateHandle::GenerateNewID();
        plVar9[5] = lVar10;
      }
      if ((IViewListener *)local_218 != pIVar13) {
        if (plVar9 == (longlong *)0x0) {
          if ((*(int *)(pIVar11 + 0xb8) != 0) &&
             (plVar12 = *(longlong **)pIVar13, plVar12 != (longlong *)0x0)) {
            (**(code **)(*plVar12 + 0x28))(plVar12,0);
            if (*(longlong *)pIVar13 != 0) {
              lVar10 = FMemory::Realloc(*(longlong *)pIVar13,0,0);
              *(longlong *)pIVar13 = lVar10;
            }
            *(undefined4 *)(pIVar11 + 0xb8) = 0;
          }
        }
        else {
          (**(code **)(*plVar9 + 0x30))(plVar9,pIVar13);
        }
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x28))(plVar9,0);
        local_218[0] = (longlong *)FMemory::Realloc(plVar9,0,0);
        if (local_218[0] != (longlong *)0x0) {
          FMemory::Free(local_218[0]);
        }
      }
      plVar9 = *(longlong **)(*ppIVar3 + 0x70);
      local_208 = *(undefined8 *)(*ppIVar3 + 0x68);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      local_200 = plVar9;
      uVar8 = FUN_141801800(*pplVar16,1);
      FUN_140801a00(uVar8,&local_208);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar9 + 1;
        lVar10 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
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
        LOCK();
        plVar12 = plVar9 + 1;
        lVar10 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
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
      plVar9 = *(longlong **)(*ppIVar3 + 0x60);
      local_1f8 = *(undefined8 *)(*ppIVar3 + 0x58);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
      local_1f0 = plVar9;
      uVar8 = FUN_141801800(*pplVar16,2);
      FUN_140801a00(uVar8,&local_1f8);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar9 + 1;
        lVar10 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
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
        LOCK();
        plVar12 = plVar9 + 1;
        lVar10 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
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
      plVar9 = (longlong *)ULevelSequenceBurnInOptions::GetPrivateStaticClass();
      if (plVar9[0x1f] == 0) {
        (**(code **)(*plVar9 + 0x368))(plVar9);
      }
      goto LAB_1408087c1;
    }
  }
  FUN_140809060(pcVar15);
LAB_1408087c1:
  QueryPerformanceCounter(&local_220);
  dVar17 = (double)local_220.QuadPart * DAT_1468b02f8 + 16777216.0;
  *local_1c0 = (dVar17 - local_1c8) + *local_1c0;
  puVar14 = &DAT_143f3eda8;
  if (local_1e0 != 0) {
    puVar14 = local_1e8;
  }
  local_1c8 = dVar17;
  FOutputDevice::LogfImpl(local_1d8,L"%s: %f secs",puVar14,local_1d0);
  if (local_1e8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140808870 FUN_140808870 body=34 status=ok
// SIG undefined FUN_140808870(void)

void FUN_140808870(longlong *param_1)

{
  undefined1 local_res8 [32];
  
  local_res8[0] = DAT_1464b9ee8;
  (**(code **)(*param_1 + 0x110))(param_1,local_res8);
  return;
}



// FUNCTION 1408088a0 FUN_1408088a0 body=1521 status=ok
// SIG undefined FUN_1408088a0(void)

void FUN_1408088a0(longlong param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  byte bVar7;
  char cVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  undefined1 uVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  uint *puVar20;
  ulonglong uVar21;
  bool local_res8;
  undefined1 local_res18 [8];
  int local_res20;
  int local_108;
  uint uStack_104;
  uint uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  uint uStack_d4;
  int iStack_a8;
  uint uStack_a4;
  uint *local_a0;
  uint uStack_98;
  uint uStack_94;
  undefined8 local_90;
  undefined1 local_88;
  undefined1 local_87;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_140807fd0();
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  if (*(char *)(param_1 + 0x32) == '\0') goto LAB_140808967;
  lVar10 = FUN_140803250();
  if (lVar10 == 0) {
LAB_140808938:
    uVar16 = 0;
    if (*(char *)(param_1 + 0x33) != '\0') {
      FUN_140800100(param_1 + 0xe0,local_res18);
    }
  }
  else {
    uVar11 = FWeakObjectPtr::Get(param_1 + 0x130);
    lVar10 = UPlayer::GetPlayerController(lVar10,uVar11);
    if ((lVar10 == 0) || ((*(byte *)(lVar10 + 0x640) & 2) == 0)) goto LAB_140808938;
    uVar16 = 1;
    if (*(char *)(param_1 + 0x33) == '\0') {
      FUN_1408022a0(param_1 + -0x28,DAT_14685e250);
    }
  }
  *(undefined1 *)(param_1 + 0x33) = uVar16;
LAB_140808967:
  if (*(char *)(param_1 + 0x30) == '\0') {
    local_res8 = false;
  }
  else {
    local_res8 = 0 < *(int *)(param_1 + 0x98) - *(int *)(param_1 + 0xc4);
  }
  uStack_104 = 1;
  local_108 = 0;
  uVar2 = *(uint *)(param_1 + 0x108);
  puVar1 = (uint *)(param_1 + 0xf0);
  uStack_f4 = 0;
  iStack_f0 = 0;
  if (uVar2 != 0) {
    puVar20 = *(uint **)(param_1 + 0x100);
    if (*(uint **)(param_1 + 0x100) == (uint *)0x0) {
      puVar20 = puVar1;
    }
    uVar19 = *puVar20;
    iStack_f0 = 0;
    local_108 = 0;
    while (uVar19 == 0) {
      lVar10 = (longlong)local_108;
      iStack_f0 = iStack_f0 + 0x20;
      iVar13 = local_108 + 1;
      bVar6 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_108;
      local_108 = iVar13;
      if (bVar6) goto LAB_140808a44;
      uVar19 = puVar20[lVar10 + 1];
    }
    uStack_104 = -uVar19 & uVar19;
    local_res20 = 0x1f;
    if (uStack_104 != 0) {
      for (; uStack_104 >> local_res20 == 0; local_res20 = local_res20 + -1) {
      }
    }
    if (uStack_104 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - local_res20;
    }
    uStack_f4 = (iStack_f0 - iVar13) + 0x1f;
    if ((int)uVar2 < (int)uStack_f4) {
LAB_140808a44:
      uStack_f4 = uVar2;
    }
  }
  uStack_d4 = *(uint *)(param_1 + 0x108);
  uStack_98 = 0xffffffff;
  uStack_94 = uStack_f4;
  local_90 = CONCAT44(uStack_ec,iStack_f0);
  uVar19 = uStack_d4 & 0xffffffe0;
  iStack_a8 = local_108;
  uStack_a4 = uStack_104;
  local_a0 = puVar1;
  if (uStack_d4 != uVar2) {
    puVar20 = *(uint **)(param_1 + 0x100);
    if (*(uint **)(param_1 + 0x100) == (uint *)0x0) {
      puVar20 = puVar1;
    }
    uVar15 = puVar20[(int)uStack_d4 >> 5] & -1 << ((byte)uStack_d4 & 0x1f);
    iVar13 = (int)uStack_d4 >> 5;
    while (uVar15 == 0) {
      uVar19 = uVar19 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar13)
      goto LAB_140808b2d;
      uVar15 = puVar20[(longlong)iVar13 + 1];
      iVar13 = iVar13 + 1;
    }
    uVar15 = -uVar15 & uVar15;
    iVar13 = 0x1f;
    if (uVar15 != 0) {
      for (; uVar15 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar15 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - iVar13;
    }
    uStack_d4 = (uVar19 - iVar13) + 0x1f;
    if ((int)uVar2 < (int)uStack_d4) {
LAB_140808b2d:
      uStack_d4 = uVar2;
    }
  }
LAB_140808b40:
  if ((uStack_94 == uStack_d4) && (local_a0 == puVar1)) {
    uVar21 = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    if (*(int *)(param_1 + 0xec) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo((longlong *)(param_1 + 0xe0),0);
    }
    *(undefined4 *)(param_1 + 0x110) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    if (*(int *)(param_1 + 0x10c) != 0) {
      *(undefined4 *)(param_1 + 0x10c) = 0;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0xf0,0);
    }
    if (0 < (int)*(uint *)(param_1 + 0x128)) {
      uVar18 = (ulonglong)*(uint *)(param_1 + 0x128);
      do {
        lVar10 = *(longlong *)(param_1 + 0x120);
        if (*(longlong *)(param_1 + 0x120) == 0) {
          lVar10 = param_1 + 0x118;
        }
        uVar12 = (longlong)*(int *)(param_1 + 0x128) - 1U & uVar21;
        uVar21 = uVar21 + 1;
        *(undefined4 *)(lVar10 + uVar12 * 4) = 0xffffffff;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    if ((*(char *)(param_1 + 0x30) == '\0') ||
       (*(int *)(param_1 + 0x98) - *(int *)(param_1 + 0xc4) < 1)) {
      if ((*(char *)(param_1 + 0x2a) != '\0') &&
         (((*(longlong **)(param_1 + 0x38) != (longlong *)0x0 &&
           (lVar10 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0xf8))(), lVar10 != 0)) &&
          (lVar10 = *(longlong *)(param_1 + 0x48), lVar10 != 0)))) {
        local_68 = *(longlong *)(param_1 + 0x50);
        if (local_68 != 0) {
          LOCK();
          *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
          UNLOCK();
        }
        local_70 = lVar10;
        FUN_140804180(*(undefined8 *)(param_1 + 0x38),&local_70);
        *(undefined1 *)(param_1 + 0x2a) = 0;
      }
      cVar8 = FUN_140804090(param_1 + -0x28);
      if ((((cVar8 == '\0') && (*(longlong **)(param_1 + 0x38) != (longlong *)0x0)) &&
          ((cVar8 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x120))(), cVar8 != '\0' ||
           (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x138))(), cVar8 != '\0')))) &&
         ((cVar8 = FUN_140804090(param_1 + -0x28), cVar8 == '\0' &&
          (lVar10 = *(longlong *)(param_1 + 0x58), lVar10 != 0)))) {
        local_58 = *(longlong *)(param_1 + 0x60);
        if (local_58 != 0) {
          LOCK();
          *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
          UNLOCK();
        }
        local_60 = lVar10;
        FUN_1408020f0(param_1 + -0x28,&local_60);
        FUN_140806a80(param_1 + -0x28);
        local_88 = DAT_1464b9ee8;
        local_87 = 1;
        local_80 = 0;
        local_78 = 0;
        SLeafWidget::SetVisibility(*(undefined8 *)(param_1 + 0x58),&local_88);
        TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound(param_1 + 8,local_res8);
      }
      plVar5 = *(longlong **)(param_1 + 0x48);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x30))(plVar5,param_2);
      }
      if (*(char *)(param_1 + 0x29) != '\0') {
        FUN_140806a80(param_1 + -0x28);
      }
    }
    return;
  }
  local_50 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + (longlong)(int)uStack_94 * 0x10);
  if (*(int *)(param_1 + 0x98) != *(int *)(param_1 + 0xc4)) {
    uVar21 = (longlong)*(int *)(param_1 + 0xd8) - 1;
    lVar10 = *(longlong *)(param_1 + 0xd0);
    if (*(longlong *)(param_1 + 0xd0) == 0) {
      lVar10 = param_1 + 200;
    }
    iVar13 = *(int *)(lVar10 + ((longlong)((int)((ulonglong)local_50 >> 0x20) + (int)local_50) &
                               uVar21) * 4);
    if (iVar13 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x90);
      do {
        lVar17 = (longlong)iVar13;
        if (*(longlong *)(lVar4 + lVar17 * 0x10) == local_50) {
          uVar21 = (longlong)*(int *)(lVar4 + 0xc + lVar17 * 0x10) & uVar21;
          piVar14 = (int *)(lVar10 + uVar21 * 4);
          iVar3 = *(int *)(lVar10 + uVar21 * 4);
          goto joined_r0x000140808c04;
        }
        iVar13 = *(int *)(lVar4 + 8 + lVar17 * 0x10);
      } while (iVar13 != -1);
    }
  }
  goto LAB_140808cb0;
joined_r0x000140808c04:
  if (iVar3 == -1) goto LAB_140808c27;
  if (iVar3 == iVar13) {
    *piVar14 = *(int *)(lVar4 + 8 + lVar17 * 0x10);
    goto LAB_140808c27;
  }
  piVar14 = (int *)(lVar4 + 8 + (longlong)iVar3 * 0x10);
  iVar3 = *piVar14;
  goto joined_r0x000140808c04;
LAB_140808c27:
  bVar7 = (byte)iVar13 & 0x1f;
  if (*(int *)(param_1 + 0xc4) != 0) {
    *(int *)(*(longlong *)(param_1 + 0x90) + (longlong)*(int *)(param_1 + 0xc0) * 0x10) = iVar13;
  }
  lVar10 = *(longlong *)(param_1 + 0x90);
  *(undefined4 *)(lVar10 + lVar17 * 0x10) = 0xffffffff;
  if (*(int *)(param_1 + 0xc4) < 1) {
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = *(undefined4 *)(param_1 + 0xc0);
  }
  *(undefined4 *)(lVar10 + 4 + lVar17 * 0x10) = uVar9;
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
  *(int *)(param_1 + 0xc0) = iVar13;
  lVar10 = *(longlong *)(param_1 + 0xb0);
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    lVar10 = param_1 + 0xa0;
  }
  if (iVar13 < 0) {
    iVar13 = iVar13 + 0x1f;
  }
  puVar20 = (uint *)(lVar10 + (longlong)(iVar13 >> 5) * 4);
  *puVar20 = *puVar20 & ~(1 << bVar7 | 1U >> 0x20 - bVar7);
LAB_140808cb0:
  uStack_98 = uStack_98 & ~uStack_a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a8);
  goto LAB_140808b40;
}



// FUNCTION 140808ea0 FUN_140808ea0 body=446 status=ok
// SIG undefined FUN_140808ea0(void)

void FUN_140808ea0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_40 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x68) != &local_48) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    local_48 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x70,&local_40);
    plVar5 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  local_30 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x58) != &local_38) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x60,&local_30);
    plVar5 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  local_20 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x78) != &local_28) {
    *(undefined8 *)(param_1 + 0x78) = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x80,&local_20);
    plVar5 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  local_10 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x38) != &local_18) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x40,&local_10);
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



// FUNCTION 140809060 FUN_140809060 body=277 status=ok
// SIG undefined FUN_140809060(void)

void FUN_140809060(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  plVar1 = (longlong *)(param_1 + 0x60);
  if ((longlong *)*plVar1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar1 + 0xe8))();
    local_20 = (longlong *)0x0;
    if (plVar1 != &local_28) {
      *plVar1 = 0;
      local_28 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x68,&local_20);
      plVar1 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_20 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar3 = (int *)((longlong)plVar1 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
    }
  }
  plVar1 = (longlong *)(param_1 + 0x80);
  if ((*plVar1 != 0) && (local_10 = (longlong *)0x0, plVar1 != &local_18)) {
    *plVar1 = 0;
    local_18 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x88,&local_10);
    plVar1 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_10 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140809180 FUN_140809180 body=34 status=ok
// SIG undefined FUN_140809180(void)

void FUN_140809180(longlong *param_1)

{
  undefined1 local_res8 [32];
  
  local_res8[0] = DAT_1464b9ee9;
  (**(code **)(*param_1 + 0x110))(param_1,local_res8);
  return;
}



// FUNCTION 1408091b0 FUN_1408091b0 body=117 status=ok
// SIG undefined FUN_1408091b0(void)

void FUN_1408091b0(longlong param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 local_res18 [16];
  
  puVar1 = (undefined8 *)FName::FName(local_res18,L"GbxShiftOverlay",1);
  plVar3 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar1);
  if ((plVar3 != (longlong *)0x0) && (*(longlong **)(param_1 + 0x328) != (longlong *)0x0)) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x328) + 0x88))();
    (**(code **)(*plVar3 + 0xe8))(plVar3,param_2,uVar2);
  }
  return;
}



// FUNCTION 140809230 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UNodeMappingContainer::StaticClass(void)

{
  if (DAT_14685e2b0 == 0) {
    FUN_14171ccd0(L"/Script/GbxShiftOverlay",L"GbxShiftOverlay",&DAT_14685e2b0,FUN_140447710,0x168,
                  0x10000000,0,L"Engine",&LAB_140809490,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_14685e2b0;
}



// FUNCTION 1408092d0 FUN_1408092d0 body=47 status=ok
// SIG undefined FUN_1408092d0(void)

longlong FUN_1408092d0(void)

{
  if (DAT_14685e2b8 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_14685e2b8,&PTR_s__Script_GbxShiftOverlay_1440f96a0);
  }
  return DAT_14685e2b8;
}



// FUNCTION 140809320 FUN_140809320 body=162 status=ok
// SIG undefined FUN_140809320(void)

longlong FUN_140809320(void)

{
  if (DAT_14685e2c8 == 0) {
    FUN_14171ccd0(L"/Script/GbxShiftOverlay",L"GbxShiftSaveGameInterface",&DAT_14685e2c8,
                  FUN_140447710,0x28,0x10004001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_14685e2c8;
}



// FUNCTION 1408093e0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ULevelSequenceBurnInOptions::GetPrivateStaticClass(void)

{
  if (DAT_14685e2d8 == 0) {
    FUN_14171ccd0(L"/Script/GbxShiftOverlay",L"GbxShiftOverlaySettings",&DAT_14685e2d8,FUN_140447710
                  ,0x50,0x10000004,0,L"Engine",FUN_1408094a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_14685e2d8;
}



// FUNCTION 1408094a0 FUN_1408094a0 body=104 status=ok
// SIG undefined FUN_1408094a0(void)

void FUN_1408094a0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *(undefined4 *)(puVar1 + 5) = 5000;
    *puVar1 = &PTR_FUN_1440f96c8;
    *(undefined4 *)((longlong)puVar1 + 0x2c) = 0x1000101;
    *(undefined4 *)(puVar1 + 6) = 99;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0x43fb0000;
    *(undefined4 *)(puVar1 + 7) = 0x43770000;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x780;
    *(undefined4 *)(puVar1 + 8) = 0x438;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0x3f800000;
    *(undefined4 *)(puVar1 + 9) = 0x3dcccccd;
  }
  return;
}



// FUNCTION 140809530 FUN_140809530 body=47 status=ok
// SIG undefined FUN_140809530(void)

longlong FUN_140809530(void)

{
  if (DAT_14685e2a8 == 0) {
    FUN_141786440(&DAT_14685e2a8,&PTR_StaticClass_1440f9120);
  }
  return DAT_14685e2a8;
}



// FUNCTION 140809560 FUN_140809560 body=47 status=ok
// SIG undefined FUN_140809560(void)

longlong FUN_140809560(void)

{
  if (DAT_14685e2d0 == 0) {
    FUN_141786440(&DAT_14685e2d0,&PTR_GetPrivateStaticClass_1440f9400);
  }
  return DAT_14685e2d0;
}



// FUNCTION 140809590 FUN_140809590 body=47 status=ok
// SIG undefined FUN_140809590(void)

longlong FUN_140809590(void)

{
  if (DAT_14685e2c0 == 0) {
    FUN_141786440(&DAT_14685e2c0,&PTR_FUN_1440f9280);
  }
  return DAT_14685e2c0;
}



// FUNCTION 1408095c0 StartupModule body=308 status=ok
// SIG undefined StartupModule(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FPaper2DModule::StartupModule(void)

{
  char cVar1;
  
  cVar1 = FConfigCacheIni::GetVector
                    (DAT_1468b6148,L"Paper2D",L"PaperAxisX",&DAT_146267220,&DAT_1468e2360);
  if (cVar1 == '\0') {
    _DAT_146267220 = 0x3f800000;
    DAT_146267228 = 0.0;
  }
  cVar1 = FConfigCacheIni::GetVector
                    (DAT_1468b6148,L"Paper2D",L"PaperAxisY",&DAT_146267230,&DAT_1468e2360);
  if (cVar1 == '\0') {
    DAT_146267230 = 0.0;
    DAT_146267234 = 0.0;
    DAT_146267238 = 1.0;
  }
  DAT_146267248 = DAT_146267220 * DAT_146267234 - DAT_146267224 * DAT_146267230;
  _DAT_146267240 =
       CONCAT44(DAT_146267228 * DAT_146267230 - DAT_146267238 * DAT_146267220,
                DAT_146267238 * DAT_146267224 - DAT_146267228 * DAT_146267234);
  FPaperSpriteTangents::SetTangentsFromPaperAxes();
  return;
}



// FUNCTION 140809700 operator=<FDefaultAllocator> body=122 status=ok
// SIG undefined operator=<FDefaultAllocator>(void)

void * TArray<UTexture_*,TInlineAllocator<4,FDefaultAllocator>_>::operator=<FDefaultAllocator>
                 (void *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)((longlong)param_1 + 0x28) = iVar1;
  if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0x2c) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    return param_1;
  }
  ResizeForCopy(param_1,iVar1);
  _Dst = *(void **)((longlong)param_1 + 0x20);
  if (*(void **)((longlong)param_1 + 0x20) == (void *)0x0) {
    _Dst = param_1;
  }
  ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar1 << 3);
  return param_1;
}



// FUNCTION 140809780 CopyToEmpty<FSpriteDrawCallRecord> body=391 status=ok
// SIG undefined CopyToEmpty<FSpriteDrawCallRecord>(void)

void TArray<FSpriteDrawCallRecord,FDefaultAllocator>::CopyToEmpty<FSpriteDrawCallRecord>
               (undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  ResizeForCopy(param_1,param_3 + param_5,param_4);
  plVar6 = (longlong *)*param_1;
  if (param_3 != 0) {
    plVar5 = (longlong *)(param_2 + 0x38);
    plVar4 = plVar6 + 7;
    do {
      *plVar6 = plVar5[-7];
      *(int *)(plVar6 + 1) = (int)plVar5[-6];
      plVar4[-5] = plVar5[-5];
      *plVar4 = 0;
      iVar1 = (int)plVar5[1];
      plVar3 = (longlong *)*plVar5;
      *(int *)(plVar4 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)plVar4 + 0xc) = 0;
      }
      else {
        TArray<UTexture_*,TInlineAllocator<4,FDefaultAllocator>_>::ResizeForCopy
                  (plVar4 + -4,iVar1,0);
        if (plVar3 == (longlong *)0x0) {
          plVar3 = plVar5 + -4;
        }
        plVar2 = (longlong *)*plVar4;
        if ((longlong *)*plVar4 == (longlong *)0x0) {
          plVar2 = plVar4 + -4;
        }
        ::_guard_xfg_dispatch_icall_nop(plVar2,plVar3,(longlong)iVar1 << 3);
      }
      *(int *)(plVar4 + 2) = (int)plVar5[2];
      plVar4[0xf] = 0;
      iVar1 = (int)plVar5[0x11];
      plVar3 = (longlong *)plVar5[0xf];
      *(int *)(plVar4 + 0x11) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)plVar4 + 0x8c) = 0;
      }
      else {
        TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::ResizeForCopy(plVar4 + 3,iVar1,0);
        if (plVar3 == (longlong *)0x0) {
          plVar3 = plVar5 + 3;
        }
        plVar2 = (longlong *)plVar4[0xf];
        if ((longlong *)plVar4[0xf] == (longlong *)0x0) {
          plVar2 = plVar4 + 3;
        }
        ::_guard_xfg_dispatch_icall_nop(plVar2,plVar3,(longlong)iVar1 << 4);
      }
      plVar6 = plVar6 + 0x1a;
      plVar4 = plVar4 + 0x1a;
      plVar5 = plVar5 + 0x1a;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140809910 CopyToEmpty<FSpriteGeometryShape> body=250 status=ok
// SIG undefined CopyToEmpty<FSpriteGeometryShape>(void)

void TArray<FSpriteGeometryShape,FDefaultAllocator>::CopyToEmpty<FSpriteGeometryShape>
               (undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  int iVar2;
  void *_Src;
  undefined1 *puVar3;
  undefined8 *puVar4;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  puVar3 = (undefined1 *)*param_1;
  if (param_3 != 0) {
    puVar4 = (undefined8 *)(param_2 + 8);
    do {
      *puVar3 = *(undefined1 *)(puVar4 + -1);
      *(undefined8 *)(puVar3 + 8) = 0;
      iVar2 = *(int *)(puVar4 + 1);
      _Src = (void *)*puVar4;
      *(int *)(puVar3 + 0x10) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(puVar3 + 0x14) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar3 + 8,iVar2,0);
        ::_guard_xfg_dispatch_icall_nop(*(void **)(puVar3 + 8),_Src,(longlong)iVar2 << 3);
      }
      *(undefined8 *)(puVar3 + 0x18) = puVar4[2];
      *(undefined8 *)(puVar3 + 0x20) = puVar4[3];
      *(undefined4 *)(puVar3 + 0x28) = *(undefined4 *)(puVar4 + 4);
      puVar1 = (undefined1 *)((longlong)puVar4 + 0x24);
      puVar4 = puVar4 + 6;
      puVar3[0x2c] = *puVar1;
      puVar3 = puVar3 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140809a10 FUN_140809a10 body=670 status=ok
// SIG undefined FUN_140809a10(void)

longlong FUN_140809a10(longlong *param_1)

{
  void *_Dst;
  short *psVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  wchar_t *pwVar12;
  short *psVar13;
  undefined2 *puVar14;
  wchar_t *_Src;
  uint uVar15;
  int iVar16;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  
  psVar1 = (short *)*param_1;
  pwVar12 = (wchar_t *)0x0;
  uVar3 = 0;
  iVar16 = (int)param_1[1];
  puVar14 = &DAT_143f3eda8;
  psVar13 = psVar1 + iVar16;
  psVar8 = psVar1;
  if (psVar13 != psVar1) {
    do {
      if (*psVar8 == 0x2e) {
        if ((int)((longlong)psVar8 - (longlong)psVar1 >> 1) != -1) goto LAB_140809c11;
        break;
      }
      psVar8 = psVar8 + 1;
    } while (psVar8 != psVar13);
    do {
      if (psVar13 == psVar1) goto LAB_140809c11;
      psVar13 = psVar13 + -1;
    } while (*psVar13 != 0x2f);
    iVar11 = (int)((longlong)psVar13 - (longlong)psVar1 >> 1);
    if (iVar11 != -1) {
      uVar7 = iVar11 + 0x80000000;
      uVar15 = iVar16 - 1;
      if (iVar16 == 0) {
        uVar15 = uVar3;
      }
      if (iVar11 + 1U < uVar15) {
        uVar15 = iVar11 + 1U;
      }
      uVar9 = iVar16 - 1;
      if (iVar16 == 0) {
        uVar9 = uVar3;
      }
      uVar10 = uVar15;
      if ((uVar15 <= uVar7) && (uVar10 = uVar9, uVar7 < uVar9)) {
        uVar10 = uVar7;
      }
      local_38 = (wchar_t *)0x0;
      local_2c = 0;
      psVar13 = &DAT_143f3eda8;
      if (iVar16 != 0) {
        psVar13 = psVar1;
      }
      iVar11 = uVar10 - uVar15;
      iVar16 = iVar11 + 1;
      if (iVar11 == 0) {
        iVar16 = 0;
      }
      _Src = pwVar12;
      local_30 = iVar16;
      if ((0 < iVar16) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), iVar16 = local_30,
         _Src = local_38, 0 < local_30)) {
        wcsncpy(local_38,psVar13 + (int)uVar15,(longlong)iVar11);
        _Src[iVar11] = L'\0';
      }
      iVar11 = (int)param_1[1];
      uVar7 = iVar11 - 1;
      if (iVar11 < 1) {
        uVar7 = uVar3;
      }
      iVar11 = (iVar11 < 1) + 1 + iVar11;
      *(int *)(param_1 + 1) = iVar11;
      if (*(int *)((longlong)param_1 + 0xc) < iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      *(undefined2 *)(*param_1 + (longlong)(int)uVar7 * 2) = 0x2e;
      *(undefined2 *)(*param_1 + 2 + (longlong)(int)uVar7 * 2) = 0;
      if ((iVar16 != 0) && (iVar16 = iVar16 + -1, iVar16 != 0)) {
        iVar11 = (int)param_1[1];
        iVar2 = (uint)(iVar11 == 0) + iVar11 + iVar16;
        *(int *)(param_1 + 1) = iVar2;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
        }
        _Dst = (void *)(*param_1 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar16 * 2);
        *(undefined2 *)((longlong)iVar16 * 2 + (longlong)_Dst) = 0;
      }
      if (_Src != (wchar_t *)0x0) {
        FMemory::Free(_Src);
      }
    }
  }
LAB_140809c11:
  plVar4 = (longlong *)UMaterialInterface::GetPrivateStaticClass();
  if (plVar4[0x1f] == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
  }
  if ((int)param_1[1] != 0) {
    puVar14 = (undefined2 *)*param_1;
  }
  uVar5 = UMaterialInterface::GetPrivateStaticClass();
  lVar6 = FUN_141799c90(uVar5,0,puVar14,0,0,0,1);
  if (lVar6 != 0) {
    iVar16 = *(int *)(lVar6 + 0xc);
    if (iVar16 < (int)DAT_1469e91c4) {
      uVar7 = iVar16 >> 0x1f & 0xffff;
      uVar3 = iVar16 + uVar7;
      pwVar12 = (wchar_t *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18);
    }
    *(uint *)(pwVar12 + 4) = *(uint *)(pwVar12 + 4) | 0x40000000;
  }
  return lVar6;
}



// FUNCTION 140809cb0 FUN_140809cb0 body=670 status=ok
// SIG undefined FUN_140809cb0(void)

longlong FUN_140809cb0(longlong *param_1)

{
  void *_Dst;
  short *psVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  wchar_t *pwVar12;
  short *psVar13;
  undefined2 *puVar14;
  wchar_t *_Src;
  uint uVar15;
  int iVar16;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  
  psVar1 = (short *)*param_1;
  pwVar12 = (wchar_t *)0x0;
  uVar3 = 0;
  iVar16 = (int)param_1[1];
  puVar14 = &DAT_143f3eda8;
  psVar13 = psVar1 + iVar16;
  psVar8 = psVar1;
  if (psVar13 != psVar1) {
    do {
      if (*psVar8 == 0x2e) {
        if ((int)((longlong)psVar8 - (longlong)psVar1 >> 1) != -1) goto LAB_140809eb1;
        break;
      }
      psVar8 = psVar8 + 1;
    } while (psVar8 != psVar13);
    do {
      if (psVar13 == psVar1) goto LAB_140809eb1;
      psVar13 = psVar13 + -1;
    } while (*psVar13 != 0x2f);
    iVar11 = (int)((longlong)psVar13 - (longlong)psVar1 >> 1);
    if (iVar11 != -1) {
      uVar7 = iVar11 + 0x80000000;
      uVar15 = iVar16 - 1;
      if (iVar16 == 0) {
        uVar15 = uVar3;
      }
      if (iVar11 + 1U < uVar15) {
        uVar15 = iVar11 + 1U;
      }
      uVar9 = iVar16 - 1;
      if (iVar16 == 0) {
        uVar9 = uVar3;
      }
      uVar10 = uVar15;
      if ((uVar15 <= uVar7) && (uVar10 = uVar9, uVar7 < uVar9)) {
        uVar10 = uVar7;
      }
      local_38 = (wchar_t *)0x0;
      local_2c = 0;
      psVar13 = &DAT_143f3eda8;
      if (iVar16 != 0) {
        psVar13 = psVar1;
      }
      iVar11 = uVar10 - uVar15;
      iVar16 = iVar11 + 1;
      if (iVar11 == 0) {
        iVar16 = 0;
      }
      _Src = pwVar12;
      local_30 = iVar16;
      if ((0 < iVar16) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0), iVar16 = local_30,
         _Src = local_38, 0 < local_30)) {
        wcsncpy(local_38,psVar13 + (int)uVar15,(longlong)iVar11);
        _Src[iVar11] = L'\0';
      }
      iVar11 = (int)param_1[1];
      uVar7 = iVar11 - 1;
      if (iVar11 < 1) {
        uVar7 = uVar3;
      }
      iVar11 = (iVar11 < 1) + 1 + iVar11;
      *(int *)(param_1 + 1) = iVar11;
      if (*(int *)((longlong)param_1 + 0xc) < iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
      }
      *(undefined2 *)(*param_1 + (longlong)(int)uVar7 * 2) = 0x2e;
      *(undefined2 *)(*param_1 + 2 + (longlong)(int)uVar7 * 2) = 0;
      if ((iVar16 != 0) && (iVar16 = iVar16 + -1, iVar16 != 0)) {
        iVar11 = (int)param_1[1];
        iVar2 = (uint)(iVar11 == 0) + iVar11 + iVar16;
        *(int *)(param_1 + 1) = iVar2;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
        }
        _Dst = (void *)(*param_1 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar16 * 2);
        *(undefined2 *)((longlong)iVar16 * 2 + (longlong)_Dst) = 0;
      }
      if (_Src != (wchar_t *)0x0) {
        FMemory::Free(_Src);
      }
    }
  }
LAB_140809eb1:
  plVar4 = (longlong *)UPaperTerrainMaterial::GetPrivateStaticClass();
  if (plVar4[0x1f] == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
  }
  if ((int)param_1[1] != 0) {
    puVar14 = (undefined2 *)*param_1;
  }
  uVar5 = UPaperTerrainMaterial::GetPrivateStaticClass();
  lVar6 = FUN_141799c90(uVar5,0,puVar14,0,0,0,1);
  if (lVar6 != 0) {
    iVar16 = *(int *)(lVar6 + 0xc);
    if (iVar16 < (int)DAT_1469e91c4) {
      uVar7 = iVar16 >> 0x1f & 0xffff;
      uVar3 = iVar16 + uVar7;
      pwVar12 = (wchar_t *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18);
    }
    *(uint *)(pwVar12 + 4) = *(uint *)(pwVar12 + 4) | 0x40000000;
  }
  return lVar6;
}



// FUNCTION 140809f50 HeapSortInternal<FPaperTerrainSpriteGeometry,FIdentityFunctor,TDereferenceWrapper<FPaperTerrainSpriteGeometry,<lambda_f8dc4bd9f0d268533a0c07abbe333f58>_>_> body=417 status=ok
// SIG undefined HeapSortInternal<FPaperTerrainSpriteGeometry,FIdentityFunctor,TDereferenceWrapper<FPaperTerrainSpriteGeometry,<lambda_f8dc4bd9f0d268533a0c07abbe333f58>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FPaperTerrainSpriteGeometry,FIdentityFunctor,TDereferenceWrapper<FPaperTerrainSpriteGeometry,<lambda_f8dc4bd9f0d268533a0c07abbe333f58>_>_>
               (undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  iVar7 = (param_2 + -2) / 2;
  if (-1 < iVar7) {
    iVar8 = iVar7 * 2 + 1;
    iVar1 = iVar8;
    iVar10 = iVar7;
joined_r0x000140809f7a:
    do {
      if (iVar8 < param_2) {
        iVar8 = iVar7 * 2;
        iVar9 = iVar8 + 1;
        if (iVar8 + 2 < param_2) {
          if (*(int *)(param_1 + (longlong)iVar8 * 4 + 0xb) <
              *(int *)(param_1 + (longlong)iVar9 * 4 + 3)) {
            iVar9 = iVar8;
          }
          iVar9 = iVar9 + 1;
        }
        puVar12 = param_1 + (longlong)iVar7 * 4;
        puVar11 = param_1 + (longlong)iVar9 * 4;
        if (*(int *)(puVar12 + 3) < *(int *)(puVar11 + 3)) {
          if (puVar12 != puVar11) {
            uVar2 = puVar11[1];
            uVar3 = *puVar12;
            uVar4 = puVar12[1];
            uVar5 = puVar12[2];
            uVar6 = puVar12[3];
            *puVar12 = *puVar11;
            puVar12[1] = uVar2;
            uVar2 = puVar11[3];
            puVar12[2] = puVar11[2];
            puVar12[3] = uVar2;
            *puVar11 = uVar3;
            puVar11[1] = uVar4;
            puVar11[2] = uVar5;
            puVar11[3] = uVar6;
          }
          iVar8 = iVar9 * 2 + 1;
          iVar7 = iVar9;
          goto joined_r0x000140809f7a;
        }
      }
      iVar8 = iVar1 + -2;
      iVar7 = iVar10 + -1;
      iVar1 = iVar8;
      iVar10 = iVar7;
    } while (-1 < iVar7);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar11 = param_1 + (longlong)param_2 * 4;
    do {
      if (param_1 != puVar11) {
        uVar2 = puVar11[1];
        uVar3 = *param_1;
        uVar4 = param_1[1];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        *param_1 = *puVar11;
        param_1[1] = uVar2;
        uVar2 = puVar11[3];
        param_1[2] = puVar11[2];
        param_1[3] = uVar2;
        *puVar11 = uVar3;
        puVar11[1] = uVar4;
        puVar11[2] = uVar5;
        puVar11[3] = uVar6;
      }
      iVar7 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar7 * 2;
          iVar8 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            if (*(int *)(param_1 + (longlong)iVar1 * 4 + 0xb) <
                *(int *)(param_1 + (longlong)iVar8 * 4 + 3)) {
              iVar8 = iVar1;
            }
            iVar8 = iVar8 + 1;
          }
          puVar13 = param_1 + (longlong)iVar7 * 4;
          puVar12 = param_1 + (longlong)iVar8 * 4;
          if (*(int *)(puVar12 + 3) <= *(int *)(puVar13 + 3)) break;
          if (puVar13 != puVar12) {
            uVar2 = puVar12[1];
            uVar3 = *puVar13;
            uVar4 = puVar13[1];
            uVar5 = puVar13[2];
            uVar6 = puVar13[3];
            *puVar13 = *puVar12;
            puVar13[1] = uVar2;
            uVar2 = puVar12[3];
            puVar13[2] = puVar12[2];
            puVar13[3] = uVar2;
            *puVar12 = uVar3;
            puVar12[1] = uVar4;
            puVar12[2] = uVar5;
            puVar12[3] = uVar6;
          }
          iVar7 = iVar8;
        } while (iVar8 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar11 = puVar11 + -4;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 14080a100 HeapSortInternal<`UPaperGroupedSpriteComponent::SortInstancesAlongAxis'::`2'::FSortStruct,FIdentityFunctor,TDereferenceWrapper<`UPaperGroupedSpriteComponent::SortInstancesAlongAxis'::`2'::FSortStruct,<lambda_0b5751454068de2c8abd456d4666ec4f>_>_> body=367 status=ok
// SIG undefined HeapSortInternal<`UPaperGroupedSpriteComponent::SortInstancesAlongAxis'::`2'::FSortStruct,FIdentityFunctor,TDereferenceWrapper<`UPaperGroupedSpriteComponent::SortInstancesAlongAxis'::`2'::FSortStruct,<lambda_0b5751454068de2c8abd456d4666ec4f>_>_>(void)

void AlgoImpl::
     HeapSortInternal<_UPaperGroupedSpriteComponent::SortInstancesAlongAxis_::_2_::FSortStruct,FIdentityFunctor,TDereferenceWrapper<_UPaperGroupedSpriteComponent::SortInstancesAlongAxis_::_2_::FSortStruct,<lambda_0b5751454068de2c8abd456d4666ec4f>_>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float fVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  
  iVar6 = (param_2 + -2) / 2;
  if (-1 < iVar6) {
    iVar11 = iVar6 * 2 + 1;
    iVar9 = iVar11;
    iVar12 = iVar6;
joined_r0x00014080a12a:
    do {
      if (iVar11 < param_2) {
        iVar7 = iVar6 * 2 + 1;
        iVar11 = iVar6 * 2 + 2;
        iVar8 = iVar7;
        if ((iVar11 < param_2) &&
           (fVar4 = *(float *)((longlong)param_1 + (longlong)iVar11 * 8 + 4),
           pfVar3 = (float *)((longlong)param_1 + (longlong)iVar7 * 8 + 4), iVar8 = iVar11,
           *pfVar3 <= fVar4 && fVar4 != *pfVar3)) {
          iVar8 = iVar7;
        }
        puVar10 = param_1 + iVar6;
        puVar1 = param_1 + iVar8;
        if (*(float *)((longlong)param_1 + (longlong)iVar8 * 8 + 4) <
            *(float *)((longlong)puVar10 + 4)) {
          if (puVar10 != puVar1) {
            uVar5 = *puVar10;
            *puVar10 = *puVar1;
            *puVar1 = uVar5;
          }
          iVar11 = iVar8 * 2 + 1;
          iVar6 = iVar8;
          goto joined_r0x00014080a12a;
        }
      }
      iVar11 = iVar9 + -2;
      iVar6 = iVar12 + -1;
      iVar9 = iVar11;
      iVar12 = iVar6;
    } while (-1 < iVar6);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar10 = param_1 + param_2;
    do {
      if (param_1 != puVar10) {
        uVar5 = *param_1;
        *param_1 = *puVar10;
        *puVar10 = uVar5;
      }
      iVar6 = 0;
      if (1 < param_2) {
        do {
          iVar11 = iVar6 * 2 + 1;
          iVar12 = iVar6 * 2 + 2;
          iVar9 = iVar11;
          if ((iVar12 < param_2) &&
             (fVar4 = *(float *)((longlong)param_1 + (longlong)iVar12 * 8 + 4),
             pfVar3 = (float *)((longlong)param_1 + (longlong)iVar11 * 8 + 4), iVar9 = iVar12,
             *pfVar3 <= fVar4 && fVar4 != *pfVar3)) {
            iVar9 = iVar11;
          }
          puVar1 = param_1 + iVar6;
          puVar2 = param_1 + iVar9;
          if (*(float *)((longlong)puVar1 + 4) <=
              *(float *)((longlong)param_1 + (longlong)iVar9 * 8 + 4)) break;
          if (puVar1 != puVar2) {
            uVar5 = *puVar1;
            *puVar1 = *puVar2;
            *puVar2 = uVar5;
          }
          iVar6 = iVar9;
        } while (iVar9 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar10 = puVar10 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 14080a270 IntroSortInternal<FPaperTerrainSpriteGeometry,FIdentityFunctor,TDereferenceWrapper<FPaperTerrainSpriteGeometry,<lambda_f8dc4bd9f0d268533a0c07abbe333f58>_>_> body=705 status=ok
// SIG undefined IntroSortInternal<FPaperTerrainSpriteGeometry,FIdentityFunctor,TDereferenceWrapper<FPaperTerrainSpriteGeometry,<lambda_f8dc4bd9f0d268533a0c07abbe333f58>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FPaperTerrainSpriteGeometry,FIdentityFunctor,TDereferenceWrapper<FPaperTerrainSpriteGeometry,<lambda_f8dc4bd9f0d268533a0c07abbe333f58>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
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
  undefined8 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  float fVar22;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_2 * 0x20 + -0x20 + param_1;
    fVar22 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar22 = fVar22 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar22 = ::_guard_xfg_dispatch_icall_nop(fVar22);
    local_318 = (undefined4)(longlong)(fVar22 + fVar22);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar16 = &local_328;
    do {
      puVar21 = (undefined8 *)*plVar16;
      puVar19 = (undefined8 *)plVar16[1];
      lVar1 = plVar16[2];
      local_338._0_4_ = (int)lVar1;
      lVar14 = ((longlong)puVar19 - (longlong)puVar21 >> 5) + 1;
      puVar20 = puVar21;
      if ((int)local_338 != 0) {
LAB_14080a340:
        if (8 < lVar14) {
          puVar21 = puVar20 + (lVar14 / 2) * 4;
          if (puVar21 != puVar20) {
            uVar2 = *(undefined4 *)((longlong)puVar20 + 4);
            uVar3 = *(undefined4 *)(puVar20 + 1);
            uVar4 = *(undefined4 *)((longlong)puVar20 + 0xc);
            uVar5 = *(undefined4 *)puVar21;
            uVar6 = *(undefined4 *)((longlong)puVar21 + 4);
            uVar7 = *(undefined4 *)(puVar21 + 1);
            uVar8 = *(undefined4 *)((longlong)puVar21 + 0xc);
            uVar10 = puVar21[2];
            uVar11 = puVar21[3];
            *(undefined4 *)puVar21 = *(undefined4 *)puVar20;
            *(undefined4 *)((longlong)puVar21 + 4) = uVar2;
            *(undefined4 *)(puVar21 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar21 + 0xc) = uVar4;
            uVar9 = puVar20[3];
            puVar21[2] = puVar20[2];
            puVar21[3] = uVar9;
            *(undefined4 *)puVar20 = uVar5;
            *(undefined4 *)((longlong)puVar20 + 4) = uVar6;
            *(undefined4 *)(puVar20 + 1) = uVar7;
            *(undefined4 *)((longlong)puVar20 + 0xc) = uVar8;
            puVar20[2] = uVar10;
            puVar20[3] = uVar11;
          }
          puVar17 = puVar19 + 4;
          puVar21 = puVar20;
LAB_14080a390:
          puVar15 = puVar21;
          puVar21 = puVar15 + 4;
          if (puVar21 <= puVar19) goto code_r0x00014080a399;
          goto LAB_14080a3a2;
        }
        for (; puVar17 = puVar20, puVar21 = puVar20, puVar20 < puVar19; puVar19 = puVar19 + -4) {
          while (puVar15 = puVar17, puVar21 = puVar21 + 4, puVar21 <= puVar19) {
            puVar17 = puVar21;
            if (*(int *)(puVar21 + 3) <= *(int *)(puVar15 + 3)) {
              puVar17 = puVar15;
            }
          }
          if (puVar15 != puVar19) {
            uVar9 = puVar19[1];
            uVar10 = *puVar15;
            uVar11 = puVar15[1];
            uVar12 = puVar15[2];
            uVar13 = puVar15[3];
            *puVar15 = *puVar19;
            puVar15[1] = uVar9;
            uVar9 = puVar19[3];
            puVar15[2] = puVar19[2];
            puVar15[3] = uVar9;
            *puVar19 = uVar10;
            puVar19[1] = uVar11;
            puVar19[2] = uVar12;
            puVar19[3] = uVar13;
          }
        }
        goto LAB_14080a493;
      }
LAB_14080a484:
      local_338 = lVar1;
      HeapSortInternal<FPaperTerrainSpriteGeometry,FIdentityFunctor,TDereferenceWrapper<FPaperTerrainSpriteGeometry,<lambda_f8dc4bd9f0d268533a0c07abbe333f58>_>_>
                (puVar21,lVar14,param_3,param_4);
LAB_14080a493:
      plVar16 = plVar16 + -3;
    } while (&local_328 <= plVar16);
  }
  return;
code_r0x00014080a399:
  if (*(int *)(puVar15 + 7) <= *(int *)(puVar20 + 3)) goto LAB_14080a390;
LAB_14080a3a2:
  do {
    puVar18 = puVar17;
    puVar17 = puVar18 + -4;
    if (puVar17 <= puVar20) break;
  } while (*(int *)(puVar20 + 3) <= *(int *)(puVar18 + -1));
  if (puVar21 <= puVar17) {
    if (puVar21 != puVar17) {
      uVar2 = *(undefined4 *)((longlong)puVar18 + -0x1c);
      uVar3 = *(undefined4 *)(puVar18 + -3);
      uVar4 = *(undefined4 *)((longlong)puVar18 + -0x14);
      uVar5 = *(undefined4 *)puVar21;
      uVar6 = *(undefined4 *)((longlong)puVar15 + 0x24);
      uVar7 = *(undefined4 *)(puVar15 + 5);
      uVar8 = *(undefined4 *)((longlong)puVar15 + 0x2c);
      uVar10 = puVar15[6];
      uVar11 = puVar15[7];
      *(undefined4 *)puVar21 = *(undefined4 *)puVar17;
      *(undefined4 *)((longlong)puVar15 + 0x24) = uVar2;
      *(undefined4 *)(puVar15 + 5) = uVar3;
      *(undefined4 *)((longlong)puVar15 + 0x2c) = uVar4;
      uVar9 = puVar18[-1];
      puVar15[6] = puVar18[-2];
      puVar15[7] = uVar9;
      *(undefined4 *)puVar17 = uVar5;
      *(undefined4 *)((longlong)puVar18 + -0x1c) = uVar6;
      *(undefined4 *)(puVar18 + -3) = uVar7;
      *(undefined4 *)((longlong)puVar18 + -0x14) = uVar8;
      puVar18[-2] = uVar10;
      puVar18[-1] = uVar11;
    }
    goto LAB_14080a390;
  }
  if (puVar20 != puVar17) {
    uVar2 = *(undefined4 *)((longlong)puVar18 + -0x1c);
    uVar3 = *(undefined4 *)(puVar18 + -3);
    uVar4 = *(undefined4 *)((longlong)puVar18 + -0x14);
    uVar5 = *(undefined4 *)puVar20;
    uVar6 = *(undefined4 *)((longlong)puVar20 + 4);
    uVar7 = *(undefined4 *)(puVar20 + 1);
    uVar8 = *(undefined4 *)((longlong)puVar20 + 0xc);
    uVar10 = puVar20[2];
    uVar11 = puVar20[3];
    *(undefined4 *)puVar20 = *(undefined4 *)puVar17;
    *(undefined4 *)((longlong)puVar20 + 4) = uVar2;
    *(undefined4 *)(puVar20 + 1) = uVar3;
    *(undefined4 *)((longlong)puVar20 + 0xc) = uVar4;
    uVar9 = puVar18[-1];
    puVar20[2] = puVar18[-2];
    puVar20[3] = uVar9;
    *(undefined4 *)puVar17 = uVar5;
    *(undefined4 *)((longlong)puVar18 + -0x1c) = uVar6;
    *(undefined4 *)(puVar18 + -3) = uVar7;
    *(undefined4 *)((longlong)puVar18 + -0x14) = uVar8;
    puVar18[-2] = uVar10;
    puVar18[-1] = uVar11;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar17 + (-0x20 - (longlong)puVar20) & 0xffffffffffffffe0U) <
      (longlong)((longlong)puVar19 - (longlong)puVar21 & 0xffffffffffffffe0U)) {
    if (puVar21 < puVar19) {
      *plVar16 = (longlong)puVar21;
      plVar16[1] = (longlong)puVar19;
      *(int *)(plVar16 + 2) = (int)local_338;
      plVar16 = plVar16 + 3;
    }
    if (puVar17 <= puVar20 + 4) goto LAB_14080a493;
    puVar19 = puVar18 + -8;
    puVar21 = puVar20;
  }
  else {
    if (puVar20 + 4 < puVar17) {
      *plVar16 = (longlong)puVar20;
      plVar16[1] = (longlong)(puVar18 + -8);
      *(int *)(plVar16 + 2) = (int)local_338;
      plVar16 = plVar16 + 3;
    }
    if (puVar19 <= puVar21) goto LAB_14080a493;
  }
  lVar14 = ((longlong)puVar19 - (longlong)puVar21 >> 5) + 1;
  puVar20 = puVar21;
  if ((int)local_338 == 0) goto LAB_14080a484;
  goto LAB_14080a340;
}



// FUNCTION 14080a540 IntroSortInternal<`UPaperGroupedSpriteComponent::SortInstancesAlongAxis'::`2'::FSortStruct,FIdentityFunctor,TDereferenceWrapper<`UPaperGroupedSpriteComponent::SortInstancesAlongAxis'::`2'::FSortStruct,<lambda_0b5751454068de2c8abd456d4666ec4f>_>_> body=619 status=ok
// SIG undefined IntroSortInternal<`UPaperGroupedSpriteComponent::SortInstancesAlongAxis'::`2'::FSortStruct,FIdentityFunctor,TDereferenceWrapper<`UPaperGroupedSpriteComponent::SortInstancesAlongAxis'::`2'::FSortStruct,<lambda_0b5751454068de2c8abd456d4666ec4f>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<_UPaperGroupedSpriteComponent::SortInstancesAlongAxis_::_2_::FSortStruct,FIdentityFunctor,TDereferenceWrapper<_UPaperGroupedSpriteComponent::SortInstancesAlongAxis_::_2_::FSortStruct,<lambda_0b5751454068de2c8abd456d4666ec4f>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  float *pfVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 8;
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar11 = ::_guard_xfg_dispatch_icall_nop(fVar11);
    local_318 = (undefined4)(longlong)(fVar11 + fVar11);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar6 = &local_328;
    do {
      puVar10 = (undefined8 *)*plVar6;
      puVar8 = (undefined8 *)plVar6[1];
      lVar2 = plVar6[2];
      local_338._0_4_ = (int)lVar2;
      lVar4 = ((longlong)puVar8 - (longlong)puVar10 >> 3) + 1;
      puVar9 = puVar10;
      if ((int)local_338 != 0) {
LAB_14080a600:
        if (8 < lVar4) {
          if (lVar4 < 0) {
            lVar4 = lVar4 + 1;
          }
          puVar10 = puVar9 + (lVar4 >> 1);
          if (puVar10 != puVar9) {
            uVar3 = *puVar10;
            *puVar10 = *puVar9;
            *puVar9 = uVar3;
          }
          puVar7 = puVar8 + 1;
          puVar5 = puVar9;
LAB_14080a637:
          puVar10 = puVar5 + 1;
          if (puVar10 <= puVar8) goto code_r0x00014080a640;
          goto LAB_14080a650;
        }
        for (; puVar10 = puVar9, puVar7 = puVar9, puVar9 < puVar8; puVar8 = puVar8 + -1) {
          while (puVar5 = puVar7 + 1, puVar5 <= puVar8) {
            pfVar1 = (float *)((longlong)puVar7 + 0xc);
            puVar7 = puVar5;
            if (*pfVar1 < *(float *)((longlong)puVar10 + 4)) {
              puVar10 = puVar5;
            }
          }
          if (puVar10 != puVar8) {
            uVar3 = *puVar10;
            *puVar10 = *puVar8;
            *puVar8 = uVar3;
          }
        }
        goto LAB_14080a726;
      }
LAB_14080a717:
      local_338 = lVar2;
      HeapSortInternal<_UPaperGroupedSpriteComponent::SortInstancesAlongAxis_::_2_::FSortStruct,FIdentityFunctor,TDereferenceWrapper<_UPaperGroupedSpriteComponent::SortInstancesAlongAxis_::_2_::FSortStruct,<lambda_0b5751454068de2c8abd456d4666ec4f>_>_>
                (puVar10,lVar4,param_3,param_4);
LAB_14080a726:
      plVar6 = plVar6 + -3;
    } while (&local_328 <= plVar6);
  }
  return;
code_r0x00014080a640:
  pfVar1 = (float *)((longlong)puVar5 + 0xc);
  puVar5 = puVar10;
  if (*(float *)((longlong)puVar9 + 4) <= *pfVar1) goto LAB_14080a637;
LAB_14080a650:
  do {
    puVar5 = puVar7;
    puVar7 = puVar5 + -1;
    if (puVar7 <= puVar9) break;
  } while (*(float *)((longlong)puVar5 + -4) <= *(float *)((longlong)puVar9 + 4));
  if (puVar10 <= puVar7) {
    puVar5 = puVar10;
    if (puVar10 != puVar7) {
      uVar3 = *puVar10;
      *puVar10 = *puVar7;
      *puVar7 = uVar3;
    }
    goto LAB_14080a637;
  }
  if (puVar9 != puVar7) {
    uVar3 = *puVar9;
    *puVar9 = *puVar7;
    *puVar7 = uVar3;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar7 + (-8 - (longlong)puVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar8 - (longlong)puVar10 & 0xfffffffffffffff8U)) {
    if (puVar10 < puVar8) {
      *plVar6 = (longlong)puVar10;
      plVar6[1] = (longlong)puVar8;
      *(int *)(plVar6 + 2) = (int)local_338;
      plVar6 = plVar6 + 3;
    }
    if (puVar7 <= puVar9 + 1) goto LAB_14080a726;
    puVar8 = puVar5 + -2;
    puVar10 = puVar9;
  }
  else {
    if (puVar9 + 1 < puVar7) {
      *plVar6 = (longlong)puVar9;
      plVar6[1] = (longlong)(puVar5 + -2);
      *(int *)(plVar6 + 2) = (int)local_338;
      plVar6 = plVar6 + 3;
    }
    if (puVar8 <= puVar10) goto LAB_14080a726;
  }
  lVar4 = ((longlong)puVar8 - (longlong)puVar10 >> 3) + 1;
  puVar9 = puVar10;
  if ((int)local_338 == 0) goto LAB_14080a717;
  goto LAB_14080a600;
}



// FUNCTION 14080a7b0 FUN_14080a7b0 body=89 status=ok
// SIG undefined FUN_14080a7b0(void)

void FUN_14080a7b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = FUN_142909590();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 14080a810 NewObject<UPaperTileMap> body=89 status=ok
// SIG undefined NewObject<UPaperTileMap>(void)

void NewObject<UPaperTileMap>(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = UPaperTileMap::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 14080a870 FUN_14080a870 body=639 status=ok
// SIG undefined FUN_14080a870(void)

undefined8 * FUN_14080a870(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong local_res8;
  undefined2 *local_28;
  undefined8 local_20;
  
  local_res8 = DAT_146aefaf0;
  lVar4 = FName::GetComparisonNameEntry(&local_res8);
  iVar7 = 0;
  if (lVar4 == 0) {
    local_28 = (undefined2 *)0x0;
    local_20 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(lVar4,&local_28);
  }
  puVar8 = &DAT_143f3eda8;
  if ((int)local_20 != 0) {
    puVar8 = local_28;
  }
  FUN_141784790(param_2,puVar8);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  lVar4 = local_res8;
  plVar1 = (longlong *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0xa8);
  if (0 < iVar2) {
    plVar6 = *(longlong **)(param_2 + 0xa0);
    if (*(longlong **)(param_2 + 0xa0) == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    do {
      if (*plVar6 == local_res8) {
        if (iVar7 != -1) goto LAB_14080a998;
        break;
      }
      iVar7 = iVar7 + 1;
      plVar6 = plVar6 + 2;
    } while (iVar7 < iVar2);
  }
  *(int *)(param_2 + 0xa8) = iVar2 + 1;
  if (*(int *)(param_2 + 0xac) < iVar2 + 1) {
    TArray<FObjectInitializer::FOverrides::FOverride,TInlineAllocator<8,FDefaultAllocator>_>::
    ResizeGrow(plVar1,iVar2);
  }
  plVar6 = *(longlong **)(param_2 + 0xa0);
  if (*(longlong **)(param_2 + 0xa0) == (longlong *)0x0) {
    plVar6 = plVar1;
  }
  plVar6 = plVar6 + (longlong)iVar2 * 2;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = lVar4;
    plVar6[1] = 0;
  }
LAB_14080a998:
  FUN_1422ff290(param_1,param_2);
  *param_1 = &PTR_FUN_1440fbd98;
  param_1[0x8b] = &PTR_LAB_1440fc6f0;
  uVar3 = DAT_14685e3f0;
  uVar5 = APaperCharacter::StaticClass();
  lVar4 = FUN_141752410(param_1,uVar3,uVar5,uVar5,0,0,0);
  param_1[0x116] = lVar4;
  if (lVar4 != 0) {
    *(byte *)(lVar4 + 0x2f8) = *(byte *)(lVar4 + 0x2f8) | 0x10;
    local_res8 = 0;
    *(byte *)(param_1[0x116] + 0x2f8) = *(byte *)(param_1[0x116] + 0x2f8) | 0x20;
    *(byte *)(param_1[0x116] + 0x2f0) = *(byte *)(param_1[0x116] + 0x2f0) & 0xdf;
    *(byte *)(param_1[0x116] + 0x2f1) = *(byte *)(param_1[0x116] + 0x2f1) | 0x20;
    *(undefined1 *)(param_1[0x116] + 0x38) = 0;
    FUN_142399e30(param_1[0x116],param_1[0x9a],0);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_14685e5c0) &&
       (_Init_thread_header(&DAT_14685e5c0), DAT_14685e5c0 == -1)) {
      FName::FName(&DAT_14685e5b8,L"CharacterMesh",1);
      _Init_thread_footer(&DAT_14685e5c0);
    }
    (**(code **)(*(longlong *)param_1[0x116] + 0x640))((longlong *)param_1[0x116],DAT_14685e5b8);
    FUN_1423974f0(param_1[0x116],0);
  }
  return param_1;
}



// FUNCTION 14080aaf0 FUN_14080aaf0 body=119 status=ok
// SIG undefined FUN_14080aaf0(void)

undefined8 * FUN_14080aaf0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_144088fb8;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"RenderComponent",1);
  uVar3 = *puVar1;
  uVar2 = APaperCharacter::StaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  param_1[0x2d] = uVar3;
  return param_1;
}



// FUNCTION 14080ab70 FUN_14080ab70 body=119 status=ok
// SIG undefined FUN_14080ab70(void)

undefined8 * FUN_14080ab70(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_144088fb8;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"RenderComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_140827370();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  param_1[0x2d] = uVar3;
  return param_1;
}



// FUNCTION 14080abf0 FUN_14080abf0 body=160 status=ok
// SIG undefined FUN_14080abf0(void)

undefined8 * FUN_14080abf0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_144088fb8;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"RenderComponent",1);
  uVar1 = *puVar2;
  uVar3 = FUN_1408288a0();
  plVar4 = (longlong *)FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x8b] = plVar4;
  (**(code **)(*plVar4 + 0x640))(plVar4,DAT_146aefc60);
  *(undefined1 *)(param_1[0x8b] + 0x24e) = 0;
  param_1[0x2d] = param_1[0x8b];
  return param_1;
}



// FUNCTION 14080ac90 FUN_14080ac90 body=343 status=ok
// SIG undefined FUN_14080ac90(void)

undefined8 * FUN_14080ac90(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  FUN_14221fbd0();
  *param_1 = &PTR__scalar_deleting_destructor__1440ff930;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"RootComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1429ff160();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"SplineComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_140828280();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8c] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"RenderComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_140827420();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8d] = uVar3;
  local_res8 = 0;
  FUN_142399e30(param_1[0x8c],param_1[0x8b],0);
  local_res8 = 0;
  FUN_142399e30(param_1[0x8d],param_1[0x8b],0);
  *(undefined8 *)(param_1[0x8d] + 0x700) = param_1[0x8c];
  param_1[0x2d] = param_1[0x8b];
  return param_1;
}



// FUNCTION 14080adf0 FUN_14080adf0 body=119 status=ok
// SIG undefined FUN_14080adf0(void)

undefined8 * FUN_14080adf0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_144088fb8;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"RenderComponent",1);
  uVar3 = *puVar1;
  uVar2 = UCheckBox::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  param_1[0x2d] = uVar3;
  return param_1;
}



// FUNCTION 14080ae70 FUN_14080ae70 body=2914 status=ok
// SIG undefined FUN_14080ae70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14080ae70(undefined8 *param_1,longlong *param_2)

{
  bool bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined3 uVar14;
  undefined3 uVar15;
  undefined1 auVar16 [14];
  unkbyte10 Var17;
  undefined1 auVar18 [12];
  undefined1 auVar19 [14];
  undefined1 auVar20 [12];
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined1 *puVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 uVar30;
  int iVar31;
  undefined8 *puVar32;
  longlong lVar33;
  longlong *plVar34;
  undefined1 *_Buf2;
  longlong *plVar35;
  longlong *plVar36;
  undefined4 *puVar37;
  float *pfVar38;
  longlong lVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined2 uVar87;
  undefined1 auVar52 [16];
  undefined2 uVar88;
  float fVar55;
  float fVar56;
  undefined1 auVar67 [16];
  float fVar70;
  float fVar71;
  float fVar72;
  undefined1 auVar73 [16];
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined1 auStack_2f8 [32];
  undefined4 local_2d8;
  undefined4 local_2d4;
  int local_2d0;
  undefined8 *local_2c8;
  float *local_2c0;
  longlong *local_2b8;
  longlong local_2b0;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float local_298;
  float fStack_294;
  float local_290;
  float local_28c;
  float fStack_288;
  float local_284;
  float local_280;
  float fStack_27c;
  float local_278;
  longlong *local_270;
  undefined8 local_268;
  float local_260;
  undefined8 local_25c;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  undefined1 local_238 [16];
  undefined8 local_228;
  undefined8 uStack_220;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  longlong local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  longlong local_1a8;
  undefined1 local_1a0 [32];
  undefined1 *local_180;
  undefined8 local_178;
  undefined4 local_170;
  float local_168 [24];
  float *local_108;
  undefined8 local_f8;
  ulonglong local_e8;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar43 [16];
  undefined1 auVar58 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar59 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar57 [16];
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  local_2c8 = param_1;
  local_270 = param_2;
  FUN_14080bb70();
  param_1[0x83] = param_2;
  *param_1 = &PTR_FUN_1440fb1f0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  puVar32 = (undefined8 *)FUN_14236ce60(param_2,&local_2b0,*(undefined4 *)(param_1[0x26] + 8));
  local_2d0 = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ec) = *puVar32;
  lVar33 = param_2[0xe6];
  *(int *)(param_1 + 0x86) = (int)lVar33;
  if (0 < (int)lVar33) {
    plVar34 = param_1 + 0x74;
    local_2b0 = 0;
    local_2b8 = plVar34;
    do {
      lVar33 = param_2[0xe5];
      puVar32 = (undefined8 *)(lVar33 + 0x20 + local_2b0);
      uVar12 = *puVar32;
      uVar13 = puVar32[1];
      pfVar38 = (float *)(lVar33 + local_2b0);
      fVar6 = *pfVar38;
      fVar7 = pfVar38[1];
      uVar28 = *(undefined8 *)pfVar38;
      fVar8 = pfVar38[2];
      fVar86 = pfVar38[3];
      pfVar38 = (float *)(lVar33 + 0x10 + local_2b0);
      fVar9 = *pfVar38;
      fVar10 = pfVar38[1];
      uVar29 = *(undefined8 *)pfVar38;
      fVar11 = pfVar38[2];
      fVar83 = pfVar38[3];
      local_2a8 = (float)uVar12;
      fStack_2a4 = (float)((ulonglong)uVar12 >> 0x20);
      fStack_2a0 = (float)uVar13;
      fStack_29c = (float)((ulonglong)uVar13 >> 0x20);
      puVar32 = (undefined8 *)(lVar33 + 0x30 + local_2b0);
      local_228 = *puVar32;
      uStack_220 = puVar32[1];
      plVar36 = (longlong *)(lVar33 + 0x40 + local_2b0);
      local_1c8 = *plVar36;
      uStack_1c0 = plVar36[1];
      if (local_1c8 != 0) {
        local_170 = DAT_1464aa730;
        local_1a8 = 0;
        local_180 = (undefined1 *)0x0;
        local_178 = 0;
        local_108 = (float *)0x0;
        local_f8 = 0;
        FSpriteDrawCallRecord::BuildFromSprite(local_1b8);
        lVar33 = (**(code **)(*param_2 + 0x560))(param_2,uStack_1c0._4_4_);
        puVar27 = local_180;
        if (0 < *(int *)(param_1 + 0x75)) {
          lVar39 = (longlong)*(int *)(param_1 + 0x75) + -1;
          plVar35 = (longlong *)(*plVar34 + lVar39 * 0x48);
          plVar36 = plVar35 + 6;
          do {
            if ((*plVar35 == lVar33) && (plVar36[-5] == local_1a8)) {
              if ((int)plVar36[1] == (int)local_178) {
                _Buf2 = local_1a0;
                if (puVar27 != (undefined1 *)0x0) {
                  _Buf2 = puVar27;
                }
                plVar34 = (longlong *)*plVar36;
                if ((longlong *)*plVar36 == (longlong *)0x0) {
                  plVar34 = plVar36 + -4;
                }
                iVar31 = _guard_xfg_dispatch_icall_nop(plVar34,_Buf2,(longlong)(int)plVar36[1] << 3)
                ;
                param_1 = local_2c8;
                if (iVar31 == 0) goto LAB_14080b153;
              }
            }
            plVar35 = plVar35 + -9;
            plVar36 = plVar36 + -9;
            bVar1 = 0 < lVar39;
            plVar34 = local_2b8;
            param_1 = local_2c8;
            lVar39 = lVar39 + -1;
          } while (bVar1);
        }
        plVar35 = (longlong *)0x0;
        iVar31 = (int)plVar34[1];
        *(int *)(plVar34 + 1) = iVar31 + 1;
        if (*(int *)((longlong)plVar34 + 0xc) < iVar31 + 1) {
          TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(plVar34,iVar31);
        }
        plVar34 = (longlong *)(*plVar34 + (longlong)iVar31 * 0x48);
        if (plVar34 != (longlong *)0x0) {
          plVar34[1] = 0;
          plVar34[6] = 0;
          plVar34[7] = 0;
          *(undefined4 *)(plVar34 + 8) = 0xffffffff;
          *(undefined4 *)((longlong)plVar34 + 0x44) = 0;
          plVar35 = plVar34;
        }
        *plVar35 = lVar33;
        plVar35[1] = local_1a8;
        TArray<UTexture_*,TInlineAllocator<4,FDefaultAllocator>_>::operator=(plVar35 + 2,local_1a0);
        *(undefined4 *)(plVar35 + 8) = *(undefined4 *)(param_1 + 0x77);
LAB_14080b153:
        fVar25 = fStack_2a0;
        fVar24 = fStack_2a4;
        fVar23 = local_2a8;
        *(int *)((longlong)plVar35 + 0x44) = *(int *)((longlong)plVar35 + 0x44) + (int)local_f8;
        fVar55 = fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8;
        fVar70 = fVar6;
        fVar82 = fVar8;
        fVar84 = fVar7;
        fVar85 = fVar8;
        if ((fVar55 != 1.0) &&
           (fVar70 = DAT_1468b5d90, fVar82 = DAT_1468b5d98, fVar84 = DAT_1468b5d94,
           uVar28 = local_268, fVar85 = local_260, 1e-08 <= fVar55)) {
          auVar73 = rsqrtss(ZEXT416((uint)fVar55),ZEXT416((uint)fVar55));
          fVar84 = auVar73._0_4_;
          fVar84 = fVar84 + fVar84 * (0.5 - fVar55 * 0.5 * fVar84 * fVar84);
          fVar84 = fVar84 + fVar84 * (0.5 - fVar55 * 0.5 * fVar84 * fVar84);
          fVar70 = fVar84 * fVar6;
          fVar82 = fVar84 * fVar8;
          fVar84 = fVar84 * fVar7;
        }
        local_260 = fVar85;
        local_268 = uVar28;
        iVar31 = (int)ROUND(fVar70 * 127.0 + fVar70 * 127.0 + 0.5) >> 1;
        if (iVar31 < -0x80) {
          local_2d8._0_1_ = 0x80;
        }
        else {
          local_2d8._0_1_ = 0x7f;
          if (iVar31 < 0x7f) {
            local_2d8._0_1_ = (char)iVar31;
          }
        }
        iVar31 = (int)ROUND(fVar84 * 127.0 + fVar84 * 127.0 + 0.5) >> 1;
        if (iVar31 < -0x80) {
          local_2d8._0_2_ = CONCAT11(0x80,(undefined1)local_2d8);
        }
        else {
          uVar30 = 0x7f;
          if (iVar31 < 0x7f) {
            uVar30 = (char)iVar31;
          }
          local_2d8._0_2_ = CONCAT11(uVar30,(undefined1)local_2d8);
        }
        iVar31 = (int)ROUND(fVar82 * 127.0 + fVar82 * 127.0 + 0.5) >> 1;
        if (iVar31 < -0x80) {
          local_2d8._0_3_ = CONCAT12(0x80,(undefined2)local_2d8);
          uVar14 = (undefined3)local_2d8;
        }
        else {
          uVar30 = 0x7f;
          if (iVar31 < 0x7f) {
            uVar30 = (char)iVar31;
          }
          local_2d8._0_3_ = CONCAT12(uVar30,(undefined2)local_2d8);
          uVar14 = (undefined3)local_2d8;
        }
        local_2d8 = CONCAT13(0x7f,uVar14);
        uVar21 = local_2d8;
        fVar55 = fVar10 * fVar10 + fVar9 * fVar9 + fVar11 * fVar11;
        fVar70 = fVar11;
        fVar82 = fVar9;
        fVar84 = fVar10;
        fVar85 = fVar11;
        if ((fVar55 != 1.0) &&
           (fVar70 = DAT_1468b5d98, fVar82 = DAT_1468b5d90, fVar84 = DAT_1468b5d94,
           uVar29 = local_25c, fVar85 = local_254, 1e-08 <= fVar55)) {
          auVar73 = rsqrtss(ZEXT416((uint)fVar55),ZEXT416((uint)fVar55));
          fVar84 = auVar73._0_4_;
          fVar84 = fVar84 + fVar84 * (0.5 - fVar55 * 0.5 * fVar84 * fVar84);
          fVar84 = fVar84 + fVar84 * (0.5 - fVar55 * 0.5 * fVar84 * fVar84);
          fVar70 = fVar84 * fVar11;
          fVar82 = fVar84 * fVar9;
          fVar84 = fVar84 * fVar10;
        }
        local_254 = fVar85;
        local_25c = uVar29;
        iVar31 = (int)ROUND(fVar82 * 127.0 + fVar82 * 127.0 + 0.5) >> 1;
        if (iVar31 < -0x80) {
          local_2d4._0_1_ = 0x80;
        }
        else {
          local_2d4._0_1_ = 0x7f;
          if (iVar31 < 0x7f) {
            local_2d4._0_1_ = (char)iVar31;
          }
        }
        iVar31 = (int)ROUND(fVar84 * 127.0 + fVar84 * 127.0 + 0.5) >> 1;
        if (iVar31 < -0x80) {
          local_2d4._0_2_ = CONCAT11(0x80,(undefined1)local_2d4);
        }
        else {
          uVar30 = 0x7f;
          if (iVar31 < 0x7f) {
            uVar30 = (char)iVar31;
          }
          local_2d4._0_2_ = CONCAT11(uVar30,(undefined1)local_2d4);
        }
        iVar31 = (int)ROUND(fVar70 * 127.0 + fVar70 * 127.0 + 0.5) >> 1;
        if (iVar31 < -0x80) {
          local_2d4._0_3_ = CONCAT12(0x80,(undefined2)local_2d4);
          uVar15 = (undefined3)local_2d4;
        }
        else {
          uVar30 = 0x7f;
          if (iVar31 < 0x7f) {
            uVar30 = (char)iVar31;
          }
          local_2d4._0_3_ = CONCAT12(uVar30,(undefined2)local_2d4);
          uVar15 = (undefined3)local_2d4;
        }
        fVar70 = fStack_2a0 * uStack_220._4_4_ - (float)uStack_220 * fStack_29c;
        fVar82 = uStack_220._4_4_ * fVar11 - fVar83 * (float)uStack_220;
        fVar85 = fStack_29c * fVar11 - fVar83 * fStack_2a0;
        fVar84 = uStack_220._4_4_ * fVar8 - fVar86 * (float)uStack_220;
        fVar55 = fStack_29c * fVar8 - fVar86 * fStack_2a0;
        fVar86 = fVar83 * fVar8 - fVar86 * fVar11;
        uVar30 = 0x7f;
        if (((((fVar70 * fVar10 - fVar82 * fStack_2a4) + fVar85 * local_228._4_4_) * fVar6 -
             ((fVar70 * fVar7 - fVar84 * fStack_2a4) + fVar55 * local_228._4_4_) * fVar9) +
            ((fVar82 * fVar7 - fVar84 * fVar10) + fVar86 * local_228._4_4_) * local_2a8) -
            ((fVar85 * fVar7 - fVar55 * fVar10) + fVar86 * fStack_2a4) * (float)local_228 < 0.0) {
          uVar30 = 0x81;
        }
        local_2d4 = CONCAT13(uVar30,uVar15);
        uVar22 = local_2d4;
        pfVar38 = local_168;
        if (local_108 != (float *)0x0) {
          pfVar38 = local_108;
        }
        local_2c0 = pfVar38 + (longlong)(int)local_f8 * 4;
        local_298 = fVar6;
        fStack_294 = fVar7;
        local_290 = fVar8;
        local_28c = fVar9;
        fStack_288 = fVar10;
        local_284 = fVar11;
        local_218 = fVar8;
        fStack_214 = fVar8;
        fStack_210 = fVar8;
        fStack_20c = fVar8;
        if (pfVar38 != local_2c0) {
          uVar26 = (undefined4)uStack_1c0;
          local_238._12_4_ = 0x3f800000;
          fVar86 = (float)local_228;
          fVar83 = local_228._4_4_;
          fVar70 = (float)uStack_220;
          do {
            fVar82 = *pfVar38;
            fVar84 = pfVar38[1];
            iVar31 = *(int *)(param_1 + 0x77);
            local_2a8 = 0.0;
            fStack_2a4 = 0.0;
            fStack_2a0 = 0.0;
            fVar71 = fVar84 * DAT_146267230 + fVar82 * DAT_146267220;
            fVar72 = fVar84 * DAT_146267238 + fVar82 * DAT_146267228;
            fVar85 = pfVar38[2];
            fVar55 = pfVar38[3];
            fVar56 = fVar84 * DAT_146267234 + fVar82 * DAT_146267224;
            *(int *)(param_1 + 0x77) = iVar31 + 1;
            local_238[4] = SUB41(fVar56,0);
            local_238._0_4_ = fVar71;
            local_238[5] = (char)((uint)fVar56 >> 8);
            local_238[6] = (char)((uint)fVar56 >> 0x10);
            local_238[7] = (char)((uint)fVar56 >> 0x18);
            local_238._8_4_ = fVar72;
            fVar82 = fVar71 * fVar6;
            uVar74 = SUB41(fVar82,0);
            uVar75 = (undefined1)((uint)fVar82 >> 8);
            uVar76 = (undefined1)((uint)fVar82 >> 0x10);
            uVar77 = (undefined1)((uint)fVar82 >> 0x18);
            fVar84 = fVar71 * fVar7;
            uVar78 = SUB41(fVar84,0);
            uVar79 = (undefined1)((uint)fVar84 >> 8);
            uVar80 = (undefined1)((uint)fVar84 >> 0x10);
            uVar81 = (undefined1)((uint)fVar84 >> 0x18);
            local_280 = (float)local_238._12_4_ * fVar86 + fVar72 * fVar23 + fVar56 * fVar9 + fVar82
            ;
            fStack_27c = (float)local_238._12_4_ * fVar83 + fVar72 * fVar24 +
                         fVar56 * fVar10 + fVar84;
            local_278 = (float)local_238._12_4_ * fVar70 + fVar72 * fVar25 +
                        fVar56 * fVar11 + fVar71 * fVar8;
            if (*(int *)((longlong)param_1 + 0x3bc) < iVar31 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>
              ::ResizeGrow(param_1 + 0x76,iVar31);
            }
            puVar32 = (undefined8 *)((longlong)iVar31 * 0x5c + param_1[0x76]);
            if (puVar32 != (undefined8 *)0x0) {
              uVar4 = CONCAT13(uVar77,CONCAT12(uVar76,CONCAT11(uVar75,uVar74))) ^
                      CONCAT13(uVar77,CONCAT12(uVar76,CONCAT11(uVar75,uVar74)));
              uVar74 = (undefined1)(uVar4 >> 8);
              uVar75 = (undefined1)(uVar4 >> 0x10);
              uVar76 = (undefined1)(uVar4 >> 0x18);
              uVar5 = CONCAT13(uVar81,CONCAT12(uVar80,CONCAT11(uVar79,uVar78))) ^
                      CONCAT13(uVar81,CONCAT12(uVar80,CONCAT11(uVar79,uVar78)));
              uVar77 = (undefined1)(uVar5 >> 8);
              uVar78 = (undefined1)(uVar5 >> 0x10);
              uVar79 = (undefined1)(uVar5 >> 0x18);
              auVar51._0_15_ = ZEXT415(uVar22);
              auVar51[0xf] = uVar79;
              auVar50._14_2_ = auVar51._14_2_;
              auVar50._0_13_ = ZEXT413(uVar22);
              auVar50[0xd] = uVar78;
              auVar49._13_3_ = auVar50._13_3_;
              auVar49._0_13_ = ZEXT413(uVar22);
              auVar48._12_4_ = auVar49._12_4_;
              auVar48._4_7_ = 0;
              auVar48._0_4_ = uVar22;
              auVar48[0xb] = uVar77;
              auVar47._11_5_ = auVar48._11_5_;
              auVar47._4_7_ = 0;
              auVar47._0_4_ = uVar22;
              auVar46._10_6_ = auVar47._10_6_;
              auVar46._4_5_ = 0;
              auVar46._0_4_ = uVar22;
              auVar46[9] = (char)uVar5;
              auVar45._9_7_ = auVar46._9_7_;
              auVar45._4_5_ = 0;
              auVar45._0_4_ = uVar22;
              Var17 = CONCAT91(CONCAT81(auVar45._8_8_,uVar76),uVar30);
              auVar44._6_10_ = Var17;
              auVar44[5] = uVar75;
              auVar44[4] = (char)((uint3)uVar15 >> 0x10);
              auVar44._0_4_ = uVar22;
              auVar16._2_12_ = auVar44._4_12_;
              auVar16[1] = uVar74;
              auVar16[0] = (char)((uint3)uVar15 >> 8);
              uVar87 = CONCAT11((char)uVar4,(char)uVar15);
              auVar43._2_14_ = auVar16;
              uVar3 = (undefined2)(uVar5 >> 0x10);
              auVar54._0_12_ = auVar43._0_12_;
              auVar54._12_2_ = (short)Var17;
              auVar54._14_2_ = uVar3;
              auVar53._12_4_ = auVar54._12_4_;
              auVar53._0_10_ = auVar43._0_10_;
              auVar53._10_2_ = (short)uVar5;
              auVar52._10_6_ = auVar53._10_6_;
              auVar52._0_8_ = auVar43._0_8_;
              auVar52._8_2_ = auVar44._4_2_;
              uVar2 = (undefined2)(uVar4 >> 0x10);
              auVar18._4_8_ = auVar52._8_8_;
              auVar18._2_2_ = uVar2;
              auVar18._0_2_ = auVar16._0_2_;
              auVar40._0_4_ = CONCAT22((short)uVar4,uVar87);
              auVar40._4_12_ = auVar18;
              auVar73._0_4_ = -(uint)(0x7f < auVar40._0_4_);
              auVar73._4_4_ = -(uint)(0x7f < auVar18._0_4_);
              auVar73._8_4_ = -(uint)(0x7f < auVar52._8_4_);
              auVar73._12_4_ = -(uint)(0x7f < auVar53._12_4_);
              auVar40 = auVar73 & _DAT_144101760 | auVar40;
              auVar66._0_15_ = ZEXT415(uVar21);
              auVar66[0xf] = uVar79;
              auVar65._14_2_ = auVar66._14_2_;
              auVar65._0_13_ = ZEXT413(uVar21);
              auVar65[0xd] = uVar78;
              auVar64._13_3_ = auVar65._13_3_;
              auVar64._0_13_ = ZEXT413(uVar21);
              auVar63._12_4_ = auVar64._12_4_;
              auVar63._4_7_ = 0;
              auVar63._0_4_ = uVar21;
              auVar63[0xb] = uVar77;
              auVar62._11_5_ = auVar63._11_5_;
              auVar62._4_7_ = 0;
              auVar62._0_4_ = uVar21;
              auVar61._10_6_ = auVar62._10_6_;
              auVar61._4_5_ = 0;
              auVar61._0_4_ = uVar21;
              auVar61[9] = (char)uVar5;
              auVar60._9_7_ = auVar61._9_7_;
              auVar60._4_5_ = 0;
              auVar60._0_4_ = uVar21;
              auVar59._8_8_ = auVar60._8_8_;
              auVar59[7] = uVar76;
              auVar59._0_7_ = 0x7f000000000000;
              auVar58._6_10_ = auVar59._6_10_;
              auVar58[5] = uVar75;
              auVar58[4] = (char)((uint3)uVar14 >> 0x10);
              auVar58._0_4_ = uVar21;
              auVar19._2_12_ = auVar58._4_12_;
              auVar19[1] = uVar74;
              auVar19[0] = (char)((uint3)uVar14 >> 8);
              uVar88 = CONCAT11((char)uVar4,(char)uVar14);
              auVar57._2_14_ = auVar19;
              auVar69._0_12_ = auVar57._0_12_;
              auVar69._12_2_ = auVar59._6_2_;
              auVar69._14_2_ = uVar3;
              auVar68._12_4_ = auVar69._12_4_;
              auVar68._0_10_ = auVar57._0_10_;
              auVar68._10_2_ = (short)uVar5;
              auVar67._10_6_ = auVar68._10_6_;
              auVar67._0_8_ = auVar57._0_8_;
              auVar67._8_2_ = auVar58._4_2_;
              auVar20._4_8_ = auVar67._8_8_;
              auVar20._2_2_ = uVar2;
              auVar20._0_2_ = auVar19._0_2_;
              auVar42._0_4_ = CONCAT22((short)uVar4,uVar88);
              auVar42._4_12_ = auVar20;
              local_244 = (float)auVar40._0_4_ * 0.007874016;
              local_240 = (float)auVar40._4_4_ * 0.007874016;
              local_23c = (float)auVar40._8_4_ * 0.007874016;
              auVar41._0_4_ = -(uint)(0x7f < auVar42._0_4_);
              auVar41._4_4_ = -(uint)(0x7f < auVar20._0_4_);
              auVar41._8_4_ = -(uint)(0x7f < auVar67._8_4_);
              auVar41._12_4_ = -(uint)(0x7f < auVar68._12_4_);
              auVar42 = auVar41 & _DAT_144101760 | auVar42;
              local_250 = (float)auVar42._0_4_ * 0.007874016;
              local_24c = (float)auVar42._4_4_ * 0.007874016;
              local_248 = (float)auVar42._8_4_ * 0.007874016;
              *puVar32 = CONCAT44(fStack_27c,local_280);
              *(float *)(puVar32 + 1) = local_278;
              FPackedNormal::FPackedNormal((longlong)puVar32 + 0x4c,&local_250);
              FPackedNormal::FPackedNormal(puVar32 + 10);
              puVar37 = (undefined4 *)((longlong)puVar32 + 0x54);
              lVar33 = 2;
              if (puVar37 <= (undefined4 *)((longlong)puVar32 + 0x5cU)) {
                for (; lVar33 != 0; lVar33 = lVar33 + -1) {
                  *puVar37 = uVar26;
                  puVar37 = puVar37 + 1;
                }
              }
              *(undefined1 *)((longlong)puVar32 + 0x53) = 0x7f;
              *(float *)((longlong)puVar32 + 0xc) = fVar85;
              *(float *)(puVar32 + 2) = fVar55;
              *(float *)((longlong)puVar32 + 0x14) = fVar85;
              *(float *)(puVar32 + 3) = fVar55;
              *(float *)((longlong)puVar32 + 0x1c) = fVar85;
              *(float *)(puVar32 + 4) = fVar55;
              *(float *)((longlong)puVar32 + 0x24) = fVar85;
              *(float *)(puVar32 + 5) = fVar55;
              *(float *)((longlong)puVar32 + 0x2c) = fVar85;
              *(float *)(puVar32 + 6) = fVar55;
              *(float *)((longlong)puVar32 + 0x34) = fVar85;
              *(float *)(puVar32 + 7) = fVar55;
              *(float *)((longlong)puVar32 + 0x3c) = fVar85;
              *(float *)(puVar32 + 8) = fVar55;
              *(float *)((longlong)puVar32 + 0x44) = fVar85;
              *(float *)(puVar32 + 9) = fVar55;
              fVar86 = (float)local_228;
              fVar83 = local_228._4_4_;
              fVar70 = (float)uStack_220;
            }
            pfVar38 = pfVar38 + 4;
          } while (pfVar38 != local_2c0);
        }
        if (local_108 != (float *)0x0) {
          FMemory::Free();
        }
        plVar34 = local_2b8;
        param_1 = local_2c8;
        param_2 = local_270;
        if (local_180 != (undefined1 *)0x0) {
          FMemory::Free();
          plVar34 = local_2b8;
          param_1 = local_2c8;
          param_2 = local_270;
        }
      }
      local_2d0 = local_2d0 + 1;
      local_2b0 = local_2b0 + 0x50;
    } while (local_2d0 < *(int *)(param_1 + 0x86));
  }
  return param_1;
}



// FUNCTION 14080b9e0 FUN_14080b9e0 body=385 status=ok
// SIG undefined FUN_14080b9e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14080b9e0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = param_1 + 0xc;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(byte *)((longlong)param_1 + 0x1c) = *(byte *)((longlong)param_1 + 0x1c) | 1;
  *(undefined4 *)(param_1 + 3) = 5;
  *(undefined4 *)(param_1 + 4) = 6;
  param_1[5] = param_1;
  *(undefined1 *)(param_1 + 6) = 3;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_1440fbd68;
  *puVar1 = 0;
  param_1[0xd] = 0;
  uVar4 = uRam000000014685e32c;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(uint *)((longlong)param_1 + 0x9c) = uVar4;
  uVar4 = uRam000000014685e324 & uRam000000014685e334;
  uVar5 = uRam000000014685e328 & uRam000000014685e338;
  uVar6 = uRam000000014685e32c & uRam000000014685e33c;
  *(uint *)(param_1 + 0x16) = _DAT_14685e320 & _DAT_14685e330;
  *(uint *)((longlong)param_1 + 0xb4) = uVar4;
  *(uint *)(param_1 + 0x17) = uVar5;
  *(uint *)((longlong)param_1 + 0xbc) = uVar6;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *(byte *)((longlong)param_1 + 0x1c) =
       *(byte *)((longlong)param_1 + 0x1c) ^
       (*(byte *)(param_2 + 0x1c) ^ *(byte *)((longlong)param_1 + 0x1c)) & 1;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x30);
  if (puVar1 != (undefined8 *)(param_2 + 0x60)) {
    iVar2 = *(int *)(param_2 + 0x68);
    _Src = *(void **)(param_2 + 0x60);
    *(int *)(param_1 + 0xd) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0x6c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
    }
    else {
      TArray<FVector,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0xc);
    }
  }
  uVar3 = *(undefined8 *)(param_2 + 0x78);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  param_1[0xf] = uVar3;
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x88);
  uVar3 = *(undefined8 *)(param_2 + 0x98);
  param_1[0x12] = *(undefined8 *)(param_2 + 0x90);
  param_1[0x13] = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xa8);
  param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
  param_1[0x15] = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0xb8);
  param_1[0x16] = *(undefined8 *)(param_2 + 0xb0);
  param_1[0x17] = uVar3;
  return param_1;
}



// FUNCTION 14080bb70 FUN_14080bb70 body=223 status=ok
// SIG undefined FUN_14080bb70(void)

undefined8 * FUN_14080bb70(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  FUN_14271d7c0(param_1,param_2,0);
  *param_1 = &PTR_FUN_1440fb060;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = param_2[0x23];
  uVar1 = (**(code **)(*param_2 + 0x6b8))(param_2);
  param_1[0x7c] = uVar1;
  *(byte *)((longlong)param_1 + 0x3e9) = *(byte *)((longlong)param_2 + 0x2f1) >> 4 & 1;
  *(undefined8 *)((longlong)param_1 + 0x3ec) = 0;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x4d0))(param_2);
  uVar1 = puVar2[1];
  *(undefined8 *)((longlong)param_1 + 0x3f4) = *puVar2;
  *(undefined8 *)((longlong)param_1 + 0x3fc) = uVar1;
  uVar1 = puVar2[3];
  *(undefined8 *)((longlong)param_1 + 0x404) = puVar2[2];
  *(undefined8 *)((longlong)param_1 + 0x40c) = uVar1;
  *(bool *)(param_1 + 0x7d) = *DAT_14685e418 != 0;
  return param_1;
}



// FUNCTION 14080bc50 FUN_14080bc50 body=207 status=ok
// SIG undefined FUN_14080bc50(void)

undefined8 * FUN_14080bc50(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__143f489a8;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = uVar2;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x30);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  lVar1 = *(longlong *)(param_2 + 0x40);
  param_1[8] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_2 + 0x60);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  param_1[0xc] = uVar2;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  *(undefined1 *)((longlong)param_1 + 0x6c) = *(undefined1 *)(param_2 + 0x6c);
  *(undefined1 *)((longlong)param_1 + 0x6d) = *(undefined1 *)(param_2 + 0x6d);
  *(undefined1 *)((longlong)param_1 + 0x6e) = *(undefined1 *)(param_2 + 0x6e);
  *(undefined1 *)((longlong)param_1 + 0x6f) = *(undefined1 *)(param_2 + 0x6f);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  lVar1 = *(longlong *)(param_2 + 0x78);
  param_1[0xf] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(byte *)(param_1 + 0x10) =
       *(byte *)(param_1 + 0x10) ^ (*(byte *)(param_1 + 0x10) ^ *(byte *)(param_2 + 0x80)) & 1;
  *(byte *)(param_1 + 0x10) =
       (*(byte *)(param_2 + 0x80) ^ *(byte *)(param_1 + 0x10)) & 2 ^ *(byte *)(param_1 + 0x10);
  return param_1;
}



// FUNCTION 14080bd20 FSlateNoResource body=95 status=ok
// SIG undefined FSlateNoResource(void)

undefined8 * FSlateNoResource::FSlateNoResource(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  FSlateBrush::FSlateBrush(param_1,0,0,&local_18,0,0,param_2,&DAT_1464aa6c0,0,0);
  *param_1 = &PTR__scalar_deleting_destructor__143f489a8;
  return param_1;
}



// FUNCTION 14080bd80 FSpriteDrawCallRecord body=286 status=ok
// SIG undefined FSpriteDrawCallRecord(void)

undefined8 * FSpriteDrawCallRecord::FSpriteDrawCallRecord(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  param_1[2] = param_2[2];
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 8);
  puVar3 = (undefined8 *)param_2[7];
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    TArray<UTexture_*,TInlineAllocator<4,FDefaultAllocator>_>::ResizeForCopy(param_1 + 3,iVar1,0);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = param_2 + 3;
    }
    puVar2 = (undefined8 *)param_1[7];
    if ((undefined8 *)param_1[7] == (undefined8 *)0x0) {
      puVar2 = param_1 + 3;
    }
    ::_guard_xfg_dispatch_icall_nop(puVar2,puVar3,(longlong)iVar1 << 3);
  }
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  param_1[0x16] = 0;
  iVar1 = *(int *)(param_2 + 0x18);
  puVar3 = (undefined8 *)param_2[0x16];
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  }
  else {
    TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::ResizeForCopy(param_1 + 10,iVar1,0);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = param_2 + 10;
    }
    puVar2 = (undefined8 *)param_1[0x16];
    if ((undefined8 *)param_1[0x16] == (undefined8 *)0x0) {
      puVar2 = param_1 + 10;
    }
    ::_guard_xfg_dispatch_icall_nop(puVar2,puVar3,(longlong)iVar1 << 4);
  }
  return param_1;
}



// FUNCTION 14080bea0 FUN_14080bea0 body=204 status=ok
// SIG undefined FUN_14080bea0(void)

undefined8 * FUN_14080bea0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  int iVar1;
  void *_Src;
  undefined8 *_Dst;
  
  *param_1 = &PTR__purecall_1440fb050;
  FUN_14257dfd0(param_1 + 1);
  param_1[0x28] = param_2;
  *param_1 = &PTR_StartProfileThreadUsage_1440fd520;
  param_1[0x29] = param_3;
  param_1[1] = &PTR_LAB_1440fd530;
  param_1[0x2e] = 0;
  iVar1 = *(int *)((longlong)param_4 + 0x28);
  _Src = *(void **)((longlong)param_4 + 0x20);
  *(int *)(param_1 + 0x2f) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  }
  else {
    TArray<UTexture_*,TInlineAllocator<4,FDefaultAllocator>_>::ResizeForCopy(param_1 + 0x2a,iVar1,0)
    ;
    if (_Src == (void *)0x0) {
      _Src = param_4;
    }
    _Dst = (undefined8 *)param_1[0x2e];
    if ((undefined8 *)param_1[0x2e] == (undefined8 *)0x0) {
      _Dst = param_1 + 0x2a;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar1 << 3);
  }
  if (*(longlong *)((longlong)param_4 + 0x20) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14080bf70 FTerrainRuleHelper body=659 status=ok
// SIG undefined FTerrainRuleHelper(void)

float * `UPaperTerrainComponent::OnSplineEdited'::`10'::FTerrainRuleHelper::FTerrainRuleHelper
                  (float *param_1,longlong *param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  bool bVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  plVar9 = (longlong *)param_2[1];
  plVar1 = plVar9 + (int)param_2[2];
  for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
    lVar4 = *plVar9;
    if (lVar4 != 0) {
      pfVar7 = *(float **)(lVar4 + 0xb0);
      bVar5 = false;
      pfVar8 = pfVar7 + (longlong)*(int *)(lVar4 + 0xb8) * 4;
      fVar10 = (float)DAT_1468b5d88;
      fVar11 = (float)DAT_1468b5d88;
      fVar12 = DAT_1468b5d88._4_4_;
      fVar6 = DAT_1468b5d88._4_4_;
      for (; pfVar7 != pfVar8; pfVar7 = pfVar7 + 4) {
        fVar2 = *pfVar7;
        fVar3 = pfVar7[1];
        if (bVar5) {
          if (fVar2 <= fVar10) {
            fVar10 = fVar2;
          }
          if (fVar3 <= fVar6) {
            fVar6 = fVar3;
          }
          if (fVar11 <= fVar2) {
            fVar11 = fVar2;
          }
          if (fVar12 <= fVar3) {
            fVar12 = fVar3;
          }
        }
        else {
          bVar5 = true;
          fVar10 = fVar2;
          fVar12 = fVar3;
          fVar6 = fVar3;
          fVar11 = fVar2;
        }
      }
      if (0.0 < fVar11 - fVar10) {
        fVar12 = param_1[4];
        fVar6 = (float)((int)fVar12 + 1);
        param_1[4] = fVar6;
        if ((int)param_1[5] < (int)fVar6) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 2);
        }
        *(longlong *)(*(longlong *)(param_1 + 2) + (longlong)(int)fVar12 * 8) = lVar4;
        fVar12 = param_1[8];
        fVar6 = (float)((int)fVar12 + 1);
        param_1[8] = fVar6;
        if ((int)param_1[9] < (int)fVar6) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 6);
        }
        *(float *)(*(longlong *)(param_1 + 6) + (longlong)(int)fVar12 * 4) = fVar11 - fVar10;
      }
    }
  }
  lVar4 = *param_2;
  if (lVar4 != 0) {
    pfVar7 = *(float **)(lVar4 + 0xb0);
    bVar5 = false;
    pfVar8 = pfVar7 + (longlong)*(int *)(lVar4 + 0xb8) * 4;
    fVar10 = (float)DAT_1468b5d88;
    fVar11 = (float)DAT_1468b5d88;
    fVar12 = DAT_1468b5d88._4_4_;
    fVar6 = DAT_1468b5d88._4_4_;
    for (; pfVar7 != pfVar8; pfVar7 = pfVar7 + 4) {
      fVar2 = *pfVar7;
      fVar3 = pfVar7[1];
      if (bVar5) {
        if (fVar2 <= fVar11) {
          fVar11 = fVar2;
        }
        if (fVar3 <= fVar6) {
          fVar6 = fVar3;
        }
        if (fVar10 <= fVar2) {
          fVar10 = fVar2;
        }
        if (fVar12 <= fVar3) {
          fVar12 = fVar3;
        }
      }
      else {
        bVar5 = true;
        fVar10 = fVar2;
        fVar11 = fVar2;
        fVar12 = fVar3;
        fVar6 = fVar3;
      }
    }
    if (0.0 < fVar10 - fVar11) {
      *param_1 = fVar10 - fVar11;
    }
  }
  lVar4 = param_2[3];
  if (lVar4 != 0) {
    pfVar7 = *(float **)(lVar4 + 0xb0);
    bVar5 = false;
    pfVar8 = pfVar7 + (longlong)*(int *)(lVar4 + 0xb8) * 4;
    fVar10 = (float)DAT_1468b5d88;
    fVar11 = (float)DAT_1468b5d88;
    fVar12 = DAT_1468b5d88._4_4_;
    fVar6 = DAT_1468b5d88._4_4_;
    for (; pfVar7 != pfVar8; pfVar7 = pfVar7 + 4) {
      fVar2 = *pfVar7;
      fVar3 = pfVar7[1];
      if (bVar5) {
        if (fVar2 <= fVar11) {
          fVar11 = fVar2;
        }
        if (fVar3 <= fVar6) {
          fVar6 = fVar3;
        }
        if (fVar10 <= fVar2) {
          fVar10 = fVar2;
        }
        if (fVar12 <= fVar3) {
          fVar12 = fVar3;
        }
      }
      else {
        bVar5 = true;
        fVar10 = fVar2;
        fVar11 = fVar2;
        fVar12 = fVar3;
        fVar6 = fVar3;
      }
    }
    if (0.0 < fVar10 - fVar11) {
      param_1[1] = fVar10 - fVar11;
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 14080c210 FTerrainSpriteStamp body=158 status=ok
// SIG undefined FTerrainSpriteStamp(void)

longlong *
FTerrainSpriteStamp::FTerrainSpriteStamp
          (longlong *param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = param_3;
  *param_1 = param_2;
  *(byte *)((longlong)param_1 + 0x14) = param_4 ^ 1;
  bVar3 = false;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  pfVar4 = *(float **)(param_2 + 0xb0);
  pfVar5 = pfVar4 + (longlong)*(int *)(param_2 + 0xb8) * 4;
  fVar6 = (float)DAT_1468b5d88;
  fVar7 = (float)DAT_1468b5d88;
  fVar8 = DAT_1468b5d88._4_4_;
  fVar9 = DAT_1468b5d88._4_4_;
  for (; pfVar4 != pfVar5; pfVar4 = pfVar4 + 4) {
    fVar1 = *pfVar4;
    fVar2 = pfVar4[1];
    if (bVar3) {
      if (fVar1 <= fVar7) {
        fVar7 = fVar1;
      }
      if (fVar2 <= fVar9) {
        fVar9 = fVar2;
      }
      if (fVar6 <= fVar1) {
        fVar6 = fVar1;
      }
      if (fVar8 <= fVar2) {
        fVar8 = fVar2;
      }
    }
    else {
      bVar3 = true;
      fVar6 = fVar1;
      fVar7 = fVar1;
      fVar8 = fVar2;
      fVar9 = fVar2;
    }
  }
  fVar6 = fVar6 - fVar7;
  if (fVar6 <= 1.0) {
    fVar6 = 1.0;
  }
  *(float *)(param_1 + 1) = fVar6;
  return param_1;
}



// FUNCTION 14080c2b0 FUN_14080c2b0 body=97 status=ok
// SIG undefined FUN_14080c2b0(void)

undefined8 * FUN_14080c2b0(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  FUN_142562ef0();
  *param_1 = &PTR_FUN_1440ff678;
  FText::FText(param_1 + 0x3c);
  FName::FName(local_res8,L"SpriteTexture",1);
  param_1[0x37] = local_res8[0];
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  return param_1;
}



// FUNCTION 14080c320 FUN_14080c320 body=271 status=ok
// SIG undefined FUN_14080c320(void)

undefined8 * FUN_14080c320(undefined8 *param_1)

{
  void *pvVar1;
  ulonglong uVar2;
  longlong local_18 [2];
  
  FUN_141781840();
  uVar2 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_1440fd108;
  pvVar1 = ThreadLocalStoragePointer;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 5) = 0x41700000;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + uVar2 * 8) + 0x38) < DAT_14685e5d0) {
    _Init_thread_header(&DAT_14685e5d0);
    if (DAT_14685e5d0 == -1) {
      FUN_141785db0(&DAT_1440f9b00);
      local_18[0] = 0;
      local_18[1] = 0x23;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],&DAT_1440f9b00,0x46);
      FUN_14179acf0(local_18,1);
      DAT_14685e5c8 = FUN_140809a10(local_18);
      if (DAT_14685e5c8 == 0) {
        FUN_14178ab20(&DAT_1440f9b00);
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      _Init_thread_footer(&DAT_14685e5d0);
    }
  }
  param_1[8] = DAT_14685e5c8;
  return param_1;
}



// FUNCTION 14080c430 FUN_14080c430 body=199 status=ok
// SIG undefined FUN_14080c430(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14080c430(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_14235ed30();
  *param_1 = &PTR__scalar_deleting_destructor__1440fc748;
  param_1[5] = &PTR_LAB_1440fd080;
  param_1[0x5a] = &PTR_LAB_1440fd0b0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  FUN_142717130(param_1,DAT_146aefc70);
  *(byte *)((longlong)param_1 + 0x2f1) = *(byte *)((longlong)param_1 + 0x2f1) & 0xee;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe;
  param_1[0xe4] = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0xe7] = _DAT_1464aa6c0;
  param_1[0xe8] = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x24e) = 2;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(undefined1 *)(param_1 + 7) = 2;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) | 0x20;
  *(undefined4 *)((longlong)param_1 + 0x734) = 0xffffffff;
  *(uint *)((longlong)param_1 + 0x72c) = *(uint *)((longlong)param_1 + 0x72c) & 0xfffffffd | 5;
  *(undefined4 *)(param_1 + 0xe6) = 0;
  *(undefined4 *)(param_1 + 0xe5) = 0x3f800000;
  return param_1;
}



// FUNCTION 14080c500 FUN_14080c500 body=145 status=ok
// SIG undefined FUN_14080c500(void)

undefined8 * FUN_14080c500(undefined8 *param_1)

{
  FUN_14235ed30();
  *param_1 = &PTR_FUN_1440fb380;
  param_1[5] = &PTR_LAB_1440fbcd0;
  param_1[0x5a] = &PTR_LAB_1440fbd00;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  FUN_142717130(param_1,DAT_146aefc70);
  *(undefined1 *)((longlong)param_1 + 0x24e) = 2;
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xf7;
  *(undefined1 *)((longlong)param_1 + 0x301) = 1;
  *(byte *)((longlong)param_1 + 0x24d) = *(byte *)((longlong)param_1 + 0x24d) | 8;
  return param_1;
}



// FUNCTION 14080c5a0 UPaperRuntimeSettings body=43 status=ok
// SIG undefined UPaperRuntimeSettings(void)

undefined8 * UPaperRuntimeSettings::UPaperRuntimeSettings(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined2 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_143fca7c0;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 1;
  return param_1;
}



// FUNCTION 14080c5d0 FUN_14080c5d0 body=554 status=ok
// SIG undefined FUN_14080c5d0(void)

undefined8 * FUN_14080c5d0(undefined8 *param_1)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  longlong local_18 [2];
  
  FUN_141781840();
  uVar3 = (ulonglong)_tls_index;
  *param_1 = &PTR__scalar_deleting_destructor__1440fad90;
  param_1[5] = &PTR_LAB_1440fb008;
  param_1[6] = &PTR_LAB_1440fb038;
  pvVar2 = ThreadLocalStoragePointer;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x11] = 0;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  param_1[0x12] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x13) = 2;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x4023d70a;
  if (*(int *)(lVar1 + 0x38) < DAT_14685e618) {
    _Init_thread_header(&DAT_14685e618);
    if (DAT_14685e618 == -1) {
      FUN_141785db0(L"/Paper2D/MaskedUnlitSpriteMaterial");
      local_18[0] = 0;
      local_18[1] = 0x23;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"/Paper2D/MaskedUnlitSpriteMaterial",0x46);
      FUN_14179acf0(local_18,1);
      DAT_14685e610 = FUN_140809a10(local_18);
      if (DAT_14685e610 == 0) {
        FUN_14178ab20(L"/Paper2D/MaskedUnlitSpriteMaterial");
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      _Init_thread_footer(&DAT_14685e618);
    }
  }
  param_1[0xf] = DAT_14685e610;
  if (*(int *)(lVar1 + 0x38) < DAT_14685e628) {
    _Init_thread_header(&DAT_14685e628);
    if (DAT_14685e628 == -1) {
      FUN_141785db0(L"/Paper2D/OpaqueUnlitSpriteMaterial");
      local_18[0] = 0;
      local_18[1] = 0x23;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"/Paper2D/OpaqueUnlitSpriteMaterial",0x46);
      FUN_14179acf0(local_18,1);
      DAT_14685e620 = FUN_140809a10(local_18);
      if (DAT_14685e620 == 0) {
        FUN_14178ab20(L"/Paper2D/OpaqueUnlitSpriteMaterial");
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      _Init_thread_footer(&DAT_14685e628);
    }
  }
  param_1[0x10] = DAT_14685e620;
  return param_1;
}



// FUNCTION 14080c800 FUN_14080c800 body=33 status=ok
// SIG undefined FUN_14080c800(void)

undefined8 * FUN_14080c800(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1440fdf68;
  return param_1;
}



// FUNCTION 14080c830 FUN_14080c830 body=105 status=ok
// SIG undefined FUN_14080c830(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14080c830(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_14235ed30();
  *param_1 = &PTR__scalar_deleting_destructor__1440fd5a8;
  param_1[5] = &PTR_LAB_1440fdee0;
  param_1[0x5a] = &PTR_LAB_1440fdf10;
  FUN_142717130(param_1,DAT_146aefc70);
  param_1[0xe4] = 0;
  uVar2 = _DAT_1464aa6c8;
  uVar1 = _DAT_1464aa6c0;
  *(byte *)((longlong)param_1 + 0x2f1) = *(byte *)((longlong)param_1 + 0x2f1) & 0xee;
  param_1[0xe5] = uVar1;
  param_1[0xe6] = uVar2;
  return param_1;
}



// FUNCTION 14080c8a0 FUN_14080c8a0 body=363 status=ok
// SIG undefined FUN_14080c8a0(void)

undefined8 * FUN_14080c8a0(undefined8 *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *pvVar6;
  ulonglong uVar7;
  longlong local_18 [2];
  
  FUN_14237eb90();
  uVar7 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_144100018;
  *(undefined1 *)((longlong)param_1 + 0x6f9) = 1;
  param_1[5] = &PTR_LAB_144100900;
  param_1[0x5a] = &PTR_LAB_144100930;
  pvVar6 = ThreadLocalStoragePointer;
  *(undefined4 *)((longlong)param_1 + 0x70c) = 0x42c80000;
  uVar5 = DAT_1464aa6cc;
  uVar4 = DAT_1464aa6c8;
  uVar3 = DAT_1464aa6c4;
  uVar2 = DAT_1464aa6c0;
  *(undefined4 *)(param_1 + 0xe4) = 8;
  lVar1 = *(longlong *)((longlong)pvVar6 + uVar7 * 8);
  *(undefined4 *)(param_1 + 0xe2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x714) = uVar3;
  *(undefined4 *)(param_1 + 0xe3) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x71c) = uVar5;
  *(undefined1 *)((longlong)param_1 + 0x724) = 2;
  *(undefined4 *)(param_1 + 0xe5) = 0x43480000;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
  if (*(int *)(lVar1 + 0x38) < DAT_14685e670) {
    _Init_thread_header(&DAT_14685e670);
    if (DAT_14685e670 == -1) {
      FUN_141785db0(L"/Paper2D/DefaultPaperTerrainMaterial");
      local_18[0] = 0;
      local_18[1] = 0x25;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"/Paper2D/DefaultPaperTerrainMaterial",0x4a);
      FUN_14179acf0(local_18,1);
      DAT_14685e668 = FUN_140809cb0(local_18);
      if (DAT_14685e668 == 0) {
        FUN_14178ab20(L"/Paper2D/DefaultPaperTerrainMaterial");
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      _Init_thread_footer(&DAT_14685e670);
    }
  }
  param_1[0xde] = DAT_14685e668;
  return param_1;
}



// FUNCTION 14080ca10 UPaperTerrainMaterial body=124 status=ok
// SIG undefined UPaperTerrainMaterial(void)

undefined8 * UPaperTerrainMaterial::UPaperTerrainMaterial(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  UDataAsset::UDataAsset();
  puVar2 = (undefined8 *)0x0;
  *param_1 = &PTR__scalar_deleting_destructor__1441012f8;
  param_1[6] = 0;
  param_1[7] = 1;
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
            (param_1 + 6,0);
  puVar1 = (undefined8 *)param_1[6];
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 5) = 1;
    *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
    puVar2 = puVar1;
  }
  *(undefined4 *)(puVar2 + 4) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0x43b40000;
  return param_1;
}



// FUNCTION 14080ca90 FUN_14080ca90 body=73 status=ok
// SIG undefined FUN_14080ca90(void)

undefined8 * FUN_14080ca90(undefined8 *param_1)

{
  FUN_1423a0d30();
  *param_1 = &PTR_FUN_144100988;
  param_1[5] = &PTR_LAB_144101270;
  param_1[0x5a] = &PTR_LAB_1441012a0;
  param_1[0xfb] = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  return param_1;
}



// FUNCTION 14080cae0 UPaperTileLayer body=126 status=ok
// SIG undefined UPaperTileLayer(void)

undefined8 * UPaperTileLayer::UPaperTileLayer(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1440fe380;
  FText::FText(param_1 + 5);
  *(undefined4 *)(param_1 + 8) = 4;
  *(undefined4 *)((longlong)param_1 + 0x44) = 4;
  *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xfffffff2 | 2;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x42480000;
  uVar3 = DAT_1464aa6cc;
  uVar2 = DAT_1464aa6c8;
  uVar1 = DAT_1464aa6c4;
  *(undefined4 *)((longlong)param_1 + 0x54) = DAT_1464aa6c0;
  *(undefined4 *)(param_1 + 0xb) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  DestructiveAllocateMap
            (param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)((longlong)param_1 + 0x44));
  return param_1;
}



// FUNCTION 14080cb60 FUN_14080cb60 body=410 status=ok
// SIG undefined FUN_14080cb60(void)

undefined8 * FUN_14080cb60(undefined8 *param_1)

{
  longlong lVar1;
  void *pvVar2;
  ulonglong uVar3;
  longlong local_18 [2];
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1440fe5f8;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x6c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xc,0);
  }
  if ((undefined2 *)param_1[0xc] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0xc] = 0;
  }
  pvVar2 = ThreadLocalStoragePointer;
  uVar3 = (ulonglong)_tls_index;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  lVar1 = *(longlong *)((longlong)pvVar2 + uVar3 * 8);
  *(undefined4 *)(param_1 + 5) = 4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
  *(undefined4 *)(param_1 + 6) = 0x20;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x20;
  param_1[7] = 0x3f800000;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x40800000;
  *(undefined4 *)(param_1 + 0x11) = 0x42480000;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)(lVar1 + 0x38) < DAT_14685e640) {
    _Init_thread_header(&DAT_14685e640);
    if (DAT_14685e640 == -1) {
      FUN_141785db0(L"/Paper2D/MaskedUnlitSpriteMaterial");
      local_18[0] = 0;
      local_18[1] = 0x23;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"/Paper2D/MaskedUnlitSpriteMaterial",0x46);
      FUN_14179acf0(local_18,1);
      DAT_14685e638 = FUN_140809a10(local_18);
      if (DAT_14685e638 == 0) {
        FUN_14178ab20(L"/Paper2D/MaskedUnlitSpriteMaterial");
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      _Init_thread_footer(&DAT_14685e640);
    }
  }
  param_1[0xe] = DAT_14685e638;
  return param_1;
}



// FUNCTION 14080cd00 FUN_14080cd00 body=401 status=ok
// SIG undefined FUN_14080cd00(void)

undefined8 * FUN_14080cd00(undefined8 *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *pvVar6;
  ulonglong uVar7;
  longlong local_18 [2];
  
  FUN_14235ed30();
  *param_1 = &PTR_FUN_1440feb10;
  param_1[5] = &PTR_LAB_1440ff440;
  param_1[0x5a] = &PTR_LAB_1440ff470;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  uVar5 = DAT_1464aa6cc;
  uVar4 = DAT_1464aa6c8;
  uVar3 = DAT_1464aa6c4;
  uVar2 = DAT_1464aa6c0;
  *(undefined4 *)(param_1 + 0xeb) = 0;
  *(undefined1 *)((longlong)param_1 + 0x75c) = 0;
  *(undefined4 *)(param_1 + 0xe9) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x74c) = uVar3;
  *(undefined4 *)(param_1 + 0xea) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x754) = uVar5;
  FUN_1426a8bf0(param_1 + 0x76,3,1);
  pvVar6 = ThreadLocalStoragePointer;
  uVar7 = (ulonglong)_tls_index;
  *(undefined4 *)(param_1 + 0xe3) = 4;
  *(undefined4 *)((longlong)param_1 + 0x71c) = 4;
  *(undefined4 *)(param_1 + 0xe4) = 0x20;
  lVar1 = *(longlong *)((longlong)pvVar6 + uVar7 * 8);
  *(undefined4 *)((longlong)param_1 + 0x724) = 0x20;
  if (*(int *)(lVar1 + 0x38) < DAT_14685e650) {
    _Init_thread_header(&DAT_14685e650);
    if (DAT_14685e650 == -1) {
      FUN_141785db0(L"/Paper2D/MaskedUnlitSpriteMaterial");
      local_18[0] = 0;
      local_18[1] = 0x23;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"/Paper2D/MaskedUnlitSpriteMaterial",0x46);
      FUN_14179acf0(local_18,1);
      DAT_14685e648 = FUN_140809a10(local_18);
      if (DAT_14685e648 == 0) {
        FUN_14178ab20(L"/Paper2D/MaskedUnlitSpriteMaterial");
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      _Init_thread_footer(&DAT_14685e650);
    }
  }
  lVar1 = DAT_14685e648;
  *(byte *)((longlong)param_1 + 0x2f1) = *(byte *)((longlong)param_1 + 0x2f1) & 0xee;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
  param_1[0xe6] = lVar1;
  return param_1;
}



// FUNCTION 14080cea0 UPaperTileSet body=110 status=ok
// SIG undefined UPaperTileSet(void)

undefined8 * UPaperTileSet::UPaperTileSet(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__1440fe878;
  *(undefined4 *)(param_1 + 5) = 0x20;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x20;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x20;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x20;
  return param_1;
}



// FUNCTION 14080cf10 ~TArray<FPaperTerrainMaterialRule,FDefaultAllocator> body=95 status=ok
// SIG undefined ~TArray<FPaperTerrainMaterialRule,FDefaultAllocator>(void)

void TArray<FPaperTerrainMaterialRule,FDefaultAllocator>::
     ~TArray<FPaperTerrainMaterialRule,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 8);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 7;
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



// FUNCTION 14080cf70 ~TArray<FSpriteDrawCallRecord,FDefaultAllocator> body=112 status=ok
// SIG undefined ~TArray<FSpriteDrawCallRecord,FDefaultAllocator>(void)

void TArray<FSpriteDrawCallRecord,FDefaultAllocator>::
     ~TArray<FSpriteDrawCallRecord,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x38);
    do {
      if (plVar2[0xf] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x1a;
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



// FUNCTION 14080cfe0 ~TArray<FSpriteGeometryShape,FDefaultAllocator> body=95 status=ok
// SIG undefined ~TArray<FSpriteGeometryShape,FDefaultAllocator>(void)

void TArray<FSpriteGeometryShape,FDefaultAllocator>::~TArray<FSpriteGeometryShape,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 8);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 6;
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



// FUNCTION 14080d040 ~TArray<FSpriteRenderSection,FDefaultAllocator> body=95 status=ok
// SIG undefined ~TArray<FSpriteRenderSection,FDefaultAllocator>(void)

void TArray<FSpriteRenderSection,FDefaultAllocator>::~TArray<FSpriteRenderSection,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x30);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 9;
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



// FUNCTION 14080d0a0 FUN_14080d0a0 body=311 status=ok
// SIG undefined FUN_14080d0a0(void)

void FUN_14080d0a0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x888) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x768) = &PTR__scalar_deleting_destructor__144080980;
  FUN_14074e760(param_1 + 0x800);
  FUN_14074e810(param_1 + 0x770);
  iVar2 = *(int *)(param_1 + 0x718);
  lVar1 = *(longlong *)(param_1 + 0x710);
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x58;
    do {
      if (*(longlong *)(lVar1 + 0x118) != 0) {
        FMemory::Free();
      }
      *(undefined ***)(lVar1 + -8) = &PTR__scalar_deleting_destructor__144080980;
      FUN_14074e760(lVar1 + 0x90);
      FUN_14074e810(lVar1);
      lVar1 = lVar1 + 0x188;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x710);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x5d0) = &PTR__scalar_deleting_destructor__144080980;
  FUN_14074e760(param_1 + 0x668);
  FUN_14074e810(param_1 + 0x5d8);
  if (*(longlong *)(param_1 + 0x5c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x590) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_14407ef78;
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 14080d1e0 FUN_14080d1e0 body=155 status=ok
// SIG undefined FUN_14080d1e0(void)

void FUN_14080d1e0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x700);
  iVar3 = *(int *)(param_1 + 0x708);
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x18);
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
      plVar2 = plVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *(longlong *)(param_1 + 0x700);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    FMemory::Free();
  }
  FUN_14061f760(param_1);
  return;
}



// FUNCTION 14080d280 FUN_14080d280 body=158 status=ok
// SIG undefined FUN_14080d280(void)

void FUN_14080d280(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x798) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x780) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x768) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x750) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x738) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x720) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x708) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    FMemory::Free();
  }
  FUN_14061f760(param_1);
  return;
}



// FUNCTION 14080d320 operator= body=133 status=ok
// SIG undefined operator=(void)

void * TArray<UTexture_*,TInlineAllocator<4,FDefaultAllocator>_>::operator=
                 (void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x20);
    iVar1 = *(int *)((longlong)param_2 + 0x28);
    *(int *)((longlong)param_1 + 0x28) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0x2c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      ResizeForCopy(param_1,iVar1);
      if (_Src == (void *)0x0) {
        _Src = param_2;
      }
      _Dst = *(void **)((longlong)param_1 + 0x20);
      if (*(void **)((longlong)param_1 + 0x20) == (void *)0x0) {
        _Dst = param_1;
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar1 << 3);
    }
  }
  return param_1;
}



// FUNCTION 14080d3b0 operator= body=195 status=ok
// SIG undefined operator=(void)

undefined8 * FSpriteDrawCallRecord::operator=(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *_Dst;
  undefined8 *_Src;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  param_1[2] = param_2[2];
  TArray<UTexture_*,TInlineAllocator<4,FDefaultAllocator>_>::operator=(param_1 + 3,param_2 + 3);
  puVar1 = param_1 + 10;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  if (puVar1 != param_2 + 10) {
    iVar2 = *(int *)(param_2 + 0x18);
    _Src = (undefined8 *)param_2[0x16];
    *(int *)(param_1 + 0x18) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0xc4) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
    }
    else {
      TArray<FVector4,TInlineAllocator<6,FDefaultAllocator>_>::ResizeForCopy(puVar1,iVar2);
      if (_Src == (undefined8 *)0x0) {
        _Src = param_2 + 10;
      }
      _Dst = (undefined8 *)param_1[0x16];
      if ((undefined8 *)param_1[0x16] == (undefined8 *)0x0) {
        _Dst = puVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar2 << 4);
    }
  }
  return param_1;
}



// FUNCTION 14080d540 FUN_14080d540 body=100 status=ok
// SIG undefined FUN_14080d540(void)

undefined8 * FUN_14080d540(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1440fd510;
  if (param_1[0x21] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x21] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 14080d5b0 FUN_14080d5b0 body=100 status=ok
// SIG undefined FUN_14080d5b0(void)

undefined8 * FUN_14080d5b0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_1440fe370;
  if (param_1[0x21] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[0x21] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 14080d620 FUN_14080d620 body=52 status=ok
// SIG undefined FUN_14080d620(void)

undefined8 FUN_14080d620(undefined8 param_1,ulonglong param_2)

{
  FUN_14080d0a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x8c0);
  }
  return param_1;
}



// FUNCTION 14080d660 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FHyperlinkStyle::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x470);
  }
  return param_1;
}



// FUNCTION 14080d6a0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FCullObjectsToGridCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FMaterialRenderProxy::~FMaterialRenderProxy();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x158);
  }
  return param_1;
}



// FUNCTION 14080d6e0 FUN_14080d6e0 body=220 status=ok
// SIG undefined FUN_14080d6e0(void)

undefined8 * FUN_14080d6e0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_1[0x89] != 0) {
    FMemory::Free();
  }
  if (param_1[0x87] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[0x85];
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
  *param_1 = &PTR_FUN_1440fb060;
  TArray<FSpriteDrawCallRecord,FDefaultAllocator>::~TArray<FSpriteDrawCallRecord,FDefaultAllocator>
            (param_1 + 0x78);
  if (param_1[0x76] != 0) {
    FMemory::Free();
  }
  TArray<FSpriteRenderSection,FDefaultAllocator>::~TArray<FSpriteRenderSection,FDefaultAllocator>
            (param_1 + 0x74);
  FUN_14271e9f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x460);
  }
  return param_1;
}



// FUNCTION 14080d7c0 FUN_14080d7c0 body=72 status=ok
// SIG undefined FUN_14080d7c0(void)

undefined8 * FUN_14080d7c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1440fbd58;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 14080d810 FUN_14080d810 body=86 status=ok
// SIG undefined FUN_14080d810(void)

undefined8 * FUN_14080d810(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__1440fbd58;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 14080d870 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FCanvasTriangleItem::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1440fbd58;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14080d8c0 FUN_14080d8c0 body=72 status=ok
// SIG undefined FUN_14080d8c0(void)

undefined8 * FUN_14080d8c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1440fbd58;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 14080d910 FUN_14080d910 body=107 status=ok
// SIG undefined FUN_14080d910(void)

undefined8 * FUN_14080d910(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440fb060;
  TArray<FSpriteDrawCallRecord,FDefaultAllocator>::~TArray<FSpriteDrawCallRecord,FDefaultAllocator>
            (param_1 + 0x78);
  if (param_1[0x76] != 0) {
    FMemory::Free();
  }
  TArray<FSpriteRenderSection,FDefaultAllocator>::~TArray<FSpriteRenderSection,FDefaultAllocator>
            (param_1 + 0x74);
  FUN_14271e9f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x420);
  }
  return param_1;
}



// FUNCTION 14080d980 FUN_14080d980 body=119 status=ok
// SIG undefined FUN_14080d980(void)

undefined8 * FUN_14080d980(undefined8 *param_1,ulonglong param_2)

{
  TArray<FSpriteDrawCallRecord,FDefaultAllocator>::~TArray<FSpriteDrawCallRecord,FDefaultAllocator>
            (param_1 + 0x86);
  *param_1 = &PTR_FUN_1440fb060;
  TArray<FSpriteDrawCallRecord,FDefaultAllocator>::~TArray<FSpriteDrawCallRecord,FDefaultAllocator>
            (param_1 + 0x78);
  if (param_1[0x76] != 0) {
    FMemory::Free();
  }
  TArray<FSpriteRenderSection,FDefaultAllocator>::~TArray<FSpriteRenderSection,FDefaultAllocator>
            (param_1 + 0x74);
  FUN_14271e9f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x440);
  }
  return param_1;
}



// FUNCTION 14080da00 FUN_14080da00 body=187 status=ok
// SIG undefined FUN_14080da00(void)

undefined8 * FUN_14080da00(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x84);
  lVar1 = param_1[0x83];
  if (iVar2 != 0) {
    do {
      TArray<FSpriteDrawCallRecord,FDefaultAllocator>::
      ~TArray<FSpriteDrawCallRecord,FDefaultAllocator>(lVar1);
      lVar1 = lVar1 + 0x20;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = param_1[0x83];
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  *param_1 = &PTR_FUN_1440fb060;
  TArray<FSpriteDrawCallRecord,FDefaultAllocator>::~TArray<FSpriteDrawCallRecord,FDefaultAllocator>
            (param_1 + 0x78);
  if (param_1[0x76] != 0) {
    FMemory::Free();
  }
  TArray<FSpriteRenderSection,FDefaultAllocator>::~TArray<FSpriteRenderSection,FDefaultAllocator>
            (param_1 + 0x74);
  FUN_14271e9f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x430);
  }
  return param_1;
}



// FUNCTION 14080dac0 FUN_14080dac0 body=107 status=ok
// SIG undefined FUN_14080dac0(void)

undefined8 * FUN_14080dac0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440fb060;
  TArray<FSpriteDrawCallRecord,FDefaultAllocator>::~TArray<FSpriteDrawCallRecord,FDefaultAllocator>
            (param_1 + 0x78);
  if (param_1[0x76] != 0) {
    FMemory::Free();
  }
  TArray<FSpriteRenderSection,FDefaultAllocator>::~TArray<FSpriteRenderSection,FDefaultAllocator>
            (param_1 + 0x74);
  FUN_14271e9f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x430);
  }
  return param_1;
}



// FUNCTION 14080db30 FUN_14080db30 body=72 status=ok
// SIG undefined FUN_14080db30(void)

undefined8 * FUN_14080db30(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143fcdb88;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14080db80 FUN_14080db80 body=105 status=ok
// SIG undefined FUN_14080db80(void)

undefined8 * FUN_14080db80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_StartProfileThreadUsage_1440fd520;
  param_1[1] = &PTR_LAB_1440fd530;
  if (param_1[0x2e] != 0) {
    FMemory::Free();
  }
  FMaterialRenderProxy::~FMaterialRenderProxy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 14080dbf0 FUN_14080dbf0 body=43 status=ok
// SIG undefined FUN_14080dbf0(void)

undefined8 * FUN_14080dbf0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440facf0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 14080dc20 FUN_14080dc20 body=135 status=ok
// SIG undefined FUN_14080dc20(void)

longlong FUN_14080dc20(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x1e8);
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
    FMemory::operator_delete(param_1,0x1f8);
  }
  return param_1;
}


