// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1410e97d0 FUN_1410e97d0 body=1004 status=ok
// SIG undefined FUN_1410e97d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410e97d0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_2318 [32];
  longlong local_22f8 [4];
  undefined4 local_22d8;
  undefined1 local_22d0 [8];
  longlong *local_22c8;
  undefined1 local_22b8 [8];
  longlong *local_22b0;
  undefined1 local_2298 [24];
  undefined1 local_2280 [81];
  char local_222f;
  char local_222e;
  undefined1 local_1bb8 [24];
  undefined1 local_1ba0 [1736];
  undefined1 local_14d8 [1760];
  undefined1 local_df8 [1760];
  undefined1 local_718 [1760];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2318;
  lVar3 = param_1[7];
  local_22d8 = 0;
  if (lVar3 == 0) {
    return;
  }
  lVar6 = FUN_141329d80();
  lVar7 = *(longlong *)(lVar3 + 0x10);
  if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (!bVar10) {
    return;
  }
  cVar5 = *(char *)(lVar3 + 0xc48);
  if (cVar5 == '\0') {
    (**(code **)(*param_1 + 0x278))(param_1,CONCAT71((int7)((ulonglong)lVar7 >> 8),1));
    local_22f8[0] = 0;
    local_22f8[1] = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_22f8,0);
    FGenericPlatformString::Memcpy(local_22f8[0],L"fullBuildStats",0x1e);
    FUN_142088cf0(param_1,local_22f8);
    if (local_22f8[0] != 0) {
      FMemory::Free();
    }
    if (param_1[0x33] != 0) {
      FUN_1410cc5c0(lVar3 + 0xc50,local_1bb8,*(undefined2 *)(lVar3 + 0xc49));
      (**(code **)(*(longlong *)param_1[0x33] + 0x2b0))((longlong *)param_1[0x33],local_1ba0,1,0);
      FUN_1410b45d0(local_1bb8);
    }
    FUN_1410c3a80(param_1);
    return;
  }
  if (cVar5 == '\x01') {
    local_22f8[2] = 0;
    local_22f8[3] = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_22f8 + 2,0);
    FGenericPlatformString::Memcpy(local_22f8[2],L"modStats",0x12);
    FUN_142088cf0(param_1,local_22f8 + 2);
    if (local_22f8[2] != 0) {
      FMemory::Free();
    }
    lVar7 = FUN_1410cc6b0(lVar3,(short)param_1[0x2e]);
    FUN_1410b34c0(local_2298);
    FUN_1410cc5c0(lVar3 + 0xc50,local_14d8,(short)param_1[0x2e]);
    if ((*(longlong *)(lVar7 + 0xe0) == 0) || (cVar5 = FUN_1410d0000(), cVar5 == '\0')) {
      uVar8 = FUN_1410cc5c0(lVar3 + 0xdd8,local_df8,(short)param_1[0x2e]);
      FUN_1410b5860(local_2298,uVar8);
      FUN_1410b45d0(local_df8);
      uVar8 = 1;
      if (local_222f != '\0') {
        uVar8 = 0;
      }
    }
    else {
      local_222e = '\x01';
      uVar8 = 0;
    }
    uVar9 = FUN_1410cc5c0(lVar3 + 0xc50,local_718,(short)param_1[0x2e]);
    FUN_1410b5860(local_14d8,uVar9);
    FUN_1410b45d0(local_718);
    if (param_1[0x31] != 0) {
      bVar10 = local_222e == '\0';
      if (bVar10) {
        uVar9 = FText::FText(local_22d0,local_2298);
      }
      else {
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_22b8,L"Locked",L"GFxCARMenuStatCard",L"PartLockedText");
      }
      (**(code **)(*(longlong *)param_1[0x31] + 0x2b0))((longlong *)param_1[0x31],uVar9,1,0);
      if ((bVar10) && (local_22c8 != (longlong *)0x0)) {
        LOCK();
        plVar4 = local_22c8 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_22c8)(local_22c8);
          LOCK();
          piVar1 = (int *)((longlong)local_22c8 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_22c8 + 8))(local_22c8,1);
          }
        }
      }
      if ((!bVar10) && (local_22b0 != (longlong *)0x0)) {
        LOCK();
        plVar4 = local_22b0 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_22b0)(local_22b0);
          LOCK();
          piVar1 = (int *)((longlong)local_22b0 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_22b0 + 8))(local_22b0,1);
          }
        }
      }
    }
    plVar4 = (longlong *)param_1[0x32];
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x2b0))(plVar4,local_2280,1,0);
    }
    (**(code **)(*param_1 + 0x278))(param_1,uVar8);
    FUN_1410b45d0(local_14d8);
    FUN_1410b45d0(local_2298);
    return;
  }
  if (cVar5 != '\x02') {
    return;
  }
  (**(code **)(*param_1 + 0x278))(param_1,0);
  return;
}



// FUNCTION 1410e9bc0 FUN_1410e9bc0 body=1169 status=ok
// SIG undefined FUN_1410e9bc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410e9bc0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_178 [32];
  longlong local_158 [4];
  undefined4 *local_138;
  ulonglong *puStack_130;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined8 local_110;
  longlong local_108;
  undefined1 local_100 [16];
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [24];
  undefined4 local_50 [4];
  undefined1 local_40 [8];
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  if (param_1[0x2f] == 0) {
    return;
  }
  uVar7 = FUN_1404b03b0();
  FText::FText(local_128,uVar7);
  uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  cVar6 = AEditorTools::IsActorInGameWorld(uVar7);
  if (cVar6 == '\x01') {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_c0,L"Shared",L"GFxLobbyWidgetSettingWidget",L"SharedText");
    FText::operator=(local_128,uVar7);
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_b8 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    local_158[3] = 0xf;
    local_158[2] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_158 + 2,0);
    FGenericPlatformString::Memcpy(local_158[2],L"sharedModeLoot",0x1e);
    FUN_142088910(param_1[0x2f],local_158 + 2);
    lVar8 = local_158[2];
  }
  else {
    if (cVar6 != '\x02') goto LAB_1410e9d9a;
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_d8,L"Classic",L"GFxLobbyWidgetSettingWidget",L"ClassicText");
    FText::operator=(local_128,uVar7);
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
    local_158[1] = 0x10;
    local_158[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_158,0);
    FGenericPlatformString::Memcpy(local_158[0],L"classicModeLoot",0x20);
    FUN_142088910(param_1[0x2f],local_158);
    lVar8 = local_158[0];
  }
  if (lVar8 != 0) {
    FMemory::Free();
  }
LAB_1410e9d9a:
  if (param_1[0x2e] != 0) {
    lVar8 = FText::FText(local_68,local_128);
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_90,L"Loot Mode: [white]{0}[/white]",L"GFxLobbyWidgetSettingWidget",
                       L"LootModeSettingSelection");
    puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_78,uVar7);
    local_50[0] = 4;
    FText::FText(local_40,lVar8);
    local_110 = *puVar9;
    local_138 = local_50;
    puStack_130 = &local_20;
    local_108 = puVar9[1];
    local_28 = '\x01';
    if (local_108 != 0) {
      LOCK();
      *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
      UNLOCK();
    }
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_100,&local_138);
    uVar7 = FText::Format(local_a8,&local_110,uVar7);
    FText::FText(local_f0,uVar7);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_a0 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_100);
    if ((local_28 != '\0') && (local_28 = '\0', local_38 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_38 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
    plVar4 = (longlong *)puVar9[1];
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
    (**(code **)(*(longlong *)param_1[0x2e] + 0x2b0))((longlong *)param_1[0x2e],local_f0,1,0);
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_e8 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar1 = (int *)((longlong)local_e8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_e8 + 8))(local_e8,1);
        }
      }
    }
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_88 + 1;
      lVar8 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
  }
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_120 + 1;
    lVar8 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar1 = (int *)((longlong)local_120 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_120 + 8))(local_120,1);
      }
    }
  }
  return;
}



// FUNCTION 1410ea060 FUN_1410ea060 body=1506 status=ok
// SIG undefined FUN_1410ea060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410ea060(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_188 [32];
  char local_168;
  char local_167;
  longlong local_160 [10];
  undefined1 local_110 [8];
  longlong *local_108;
  undefined4 *local_f8;
  ulonglong *puStack_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [16];
  undefined1 local_70 [24];
  undefined4 local_58 [4];
  undefined1 local_48 [8];
  longlong *local_40;
  char local_30;
  ulonglong local_28 [2];
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_188;
  if (*(longlong *)(param_1 + 0x178) == 0) {
    return;
  }
  uVar5 = FUN_1404b03b0();
  FText::FText(local_110,uVar5);
  uVar5 = FWeakObjectPtr::Get(param_1 + 0x180);
  FUN_1410828b0(&local_168,uVar5);
  if (local_168 == '\0') {
    plVar7 = (longlong *)FUN_141368f90();
    if ((plVar7[0x1f] == 0) && ((**(code **)(*plVar7 + 0x368))(plVar7), plVar7[0x1f] == 0)) {
      lVar6 = FUN_1404b03b0();
    }
    else {
      lVar6 = FUN_14106b8d0();
      lVar6 = lVar6 + 0x88;
    }
    FText::operator=(local_110,lVar6);
    local_160[9] = 8;
    local_160[8] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_160 + 8,0);
    FGenericPlatformString::Memcpy(local_160[8],L"offline",0x10);
    FUN_142088910(*(undefined8 *)(param_1 + 0x178),local_160 + 8);
    lVar6 = local_160[8];
  }
  else if (local_168 == '\x01') {
    plVar7 = (longlong *)FUN_141368f90();
    if ((plVar7[0x1f] == 0) && ((**(code **)(*plVar7 + 0x368))(plVar7), plVar7[0x1f] == 0)) {
      lVar6 = FUN_1404b03b0();
    }
    else {
      lVar6 = FUN_14106b8d0();
      lVar6 = lVar6 + 0x70;
    }
    FText::operator=(local_110,lVar6);
    local_160[7] = 4;
    local_160[6] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_160 + 6,0);
    FGenericPlatformString::Memcpy(local_160[6],&DAT_14469d6d0,8);
    FUN_142088910(*(undefined8 *)(param_1 + 0x178),local_160 + 6);
    lVar6 = local_160[6];
  }
  else {
    if (local_168 != '\x02') goto LAB_1410ea391;
    if (local_167 == '\0') {
      lVar6 = FUN_14106b8d0();
      if (lVar6 == 0) {
        lVar6 = FUN_1404b03b0();
      }
      else {
        lVar6 = FUN_14106b8d0();
        lVar6 = lVar6 + 0x58;
      }
      FText::operator=(local_110,lVar6);
      local_160[5] = 7;
      local_160[4] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_160 + 4,0);
      FGenericPlatformString::Memcpy(local_160[4],L"anyone",0xe);
      FUN_142088910(*(undefined8 *)(param_1 + 0x178),local_160 + 4);
      lVar6 = local_160[4];
    }
    else if (local_167 == '\x01') {
      lVar6 = FUN_14106b8d0();
      if (lVar6 == 0) {
        lVar6 = FUN_1404b03b0();
      }
      else {
        lVar6 = FUN_14106b8d0();
        lVar6 = lVar6 + 0x40;
      }
      FText::operator=(local_110,lVar6);
      local_160[3] = 0xb;
      local_160[2] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_160 + 2,0);
      FGenericPlatformString::Memcpy(local_160[2],L"inviteOnly",0x16);
      FUN_142088910(*(undefined8 *)(param_1 + 0x178),local_160 + 2);
      lVar6 = local_160[2];
    }
    else {
      if (local_167 != '\x02') goto LAB_1410ea391;
      lVar6 = FUN_14106b8d0();
      if (lVar6 == 0) {
        lVar6 = FUN_1404b03b0();
      }
      else {
        lVar6 = FUN_14106b8d0();
        lVar6 = lVar6 + 0x28;
      }
      FText::operator=(local_110,lVar6);
      local_160[1] = 0xc;
      local_160[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_160,0);
      FGenericPlatformString::Memcpy(local_160[0],L"friendsOnly",0x18);
      FUN_142088910(*(undefined8 *)(param_1 + 0x178),local_160);
      lVar6 = local_160[0];
    }
  }
  if (lVar6 != 0) {
    FMemory::Free();
  }
LAB_1410ea391:
  if (*(longlong *)(param_1 + 0x170) != 0) {
    lVar6 = FText::FText(local_70,local_110);
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_98,L"Privacy: [white]{0}[/white]",L"GFxLobbyWidgetSettingWidget",
                       L"PrivacySettingSelection");
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_80,uVar5);
    local_58[0] = 4;
    FText::FText(local_48,lVar6);
    local_e8 = *puVar8;
    local_f8 = local_58;
    puStack_f0 = local_28;
    local_e0 = puVar8[1];
    local_30 = '\x01';
    if (local_e0 != 0) {
      LOCK();
      *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
      UNLOCK();
    }
    uVar5 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_d8,&local_f8);
    uVar5 = FText::Format(local_b0,&local_e8,uVar5);
    FText::FText(local_c8,uVar5);
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_a8 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar1 = (int *)((longlong)local_a8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a8 + 8))(local_a8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_d8);
    if ((local_30 != '\0') && (local_30 = '\0', local_40 != (longlong *)0x0)) {
      LOCK();
      plVar7 = local_40 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    plVar7 = (longlong *)puVar8[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      lVar4 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    plVar7 = *(longlong **)(lVar6 + 8);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar7 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x170) + 0x2b0))
              (*(longlong **)(param_1 + 0x170),local_c8,1,0);
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_c0 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_90 + 1;
      lVar6 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
  }
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_108 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return;
}



// FUNCTION 1410ea650 FUN_1410ea650 body=271 status=ok
// SIG undefined FUN_1410ea650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410ea650(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_1410c56c0;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410ea760 FUN_1410ea760 body=146 status=ok
// SIG undefined FUN_1410ea760(void)

void FUN_1410ea760(undefined8 param_1)

{
  longlong lVar1;
  code *local_18;
  undefined4 uStack_10;
  
  lVar1 = FUN_140def780();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x88);
  }
  if (lVar1 != 0) {
    local_18 = thunk_FUN_1410eb370;
    uStack_10 = 0;
    FUN_1410ad1b0(lVar1 + 0x38,param_1,&local_18);
    local_18 = FUN_1410db7f0;
    uStack_10 = 0;
    FUN_1410ad1b0(lVar1 + 0x28,param_1,&local_18);
  }
  return;
}



// FUNCTION 1410ea800 FUN_1410ea800 body=173 status=ok
// SIG undefined FUN_1410ea800(void)

void FUN_1410ea800(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  
  FWeakObjectPtr::operator=(&local_res8);
  lVar3 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0x10);
  lVar5 = lVar3;
  do {
    if (lVar5 == lVar3 + (longlong)iVar2 * 8) {
LAB_1410ea868:
      iVar2 = *(int *)(param_1 + 0x10);
      *(int *)(param_1 + 0x10) = iVar2 + 1;
      if (*(int *)(param_1 + 0x14) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 8,iVar2);
      }
      puVar1 = (undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 8);
      *puVar1 = local_res8;
      puVar1[1] = local_resc;
      return;
    }
    cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar5,&local_res8);
    if (cVar4 != '\0') {
      if ((int)(lVar5 - lVar3 >> 3) != -1) {
        return;
      }
      goto LAB_1410ea868;
    }
    lVar5 = lVar5 + 8;
  } while( true );
}



// FUNCTION 1410ea8b0 FUN_1410ea8b0 body=354 status=ok
// SIG undefined FUN_1410ea8b0(void)

undefined8 FUN_1410ea8b0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  short *psVar8;
  undefined2 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar5 = *(int *)(param_2 + 1);
  if (iVar5 == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)*param_2;
  }
  uVar13 = (longlong)(int)param_1[9] - 1;
  plVar12 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar12 = param_1 + 7;
  }
  iVar7 = FCrc::StrCrc32<wchar_t>(puVar9,0);
  iVar7 = *(int *)((longlong)plVar12 + ((longlong)iVar7 & uVar13) * 4);
  if (iVar7 != -1) {
    lVar6 = *param_1;
    do {
      lVar11 = (longlong)iVar7;
      puVar1 = (undefined8 *)(lVar6 + lVar11 * 0x48);
      if (iVar5 == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*param_2;
      }
      if (*(int *)(puVar1 + 1) == 0) {
        psVar8 = &DAT_143f3eda8;
      }
      else {
        psVar8 = (short *)*puVar1;
      }
      lVar10 = (longlong)puVar9 - (longlong)psVar8;
      do {
        sVar3 = *psVar8;
        sVar4 = *(short *)((longlong)psVar8 + lVar10);
        if (sVar3 != sVar4) break;
        psVar8 = psVar8 + 1;
      } while (sVar4 != 0);
      if (sVar3 == sVar4) {
        uVar13 = (longlong)*(int *)(lVar6 + 0x44 + lVar11 * 0x48) & uVar13;
        puVar2 = (undefined4 *)((longlong)plVar12 + uVar13 * 4);
        iVar5 = *(int *)((longlong)plVar12 + uVar13 * 4);
        goto joined_r0x0001410ea9be;
      }
      iVar7 = *(int *)(puVar1 + 8);
    } while (iVar7 != -1);
  }
  return 0;
joined_r0x0001410ea9be:
  if (iVar5 == -1) {
LAB_1410ea9e4:
    UE4Tuple_Private::TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FFormatArgumentValue>
    ::~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FFormatArgumentValue>
              (*param_1 + lVar11 * 0x48);
    TSparseArray<TSetElement<TTuple<FUniqueNetIdNull,TSharedRef<FUserOnlineAccountNull,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar7,1);
    return 1;
  }
  if (iVar5 == iVar7) {
    *puVar2 = *(undefined4 *)(lVar6 + 0x40 + lVar11 * 0x48);
    goto LAB_1410ea9e4;
  }
  lVar10 = (longlong)iVar5 * 9 + 8;
  iVar5 = *(int *)(lVar6 + lVar10 * 8);
  puVar2 = (undefined4 *)(lVar6 + lVar10 * 8);
  goto joined_r0x0001410ea9be;
}



// FUNCTION 1410eaa20 FUN_1410eaa20 body=275 status=ok
// SIG undefined FUN_1410eaa20(void)

void FUN_1410eaa20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x2b8) + 0x860) + 0x38))();
  }
  iVar6 = *(int *)(param_1 + 0x2e0);
  if (iVar6 != 0) {
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x2d8) + 0x28);
    do {
      if (plVar7[2] != 0) {
        FMemory::Free();
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
  }
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  if (*(int *)(param_1 + 0x2e4) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              ((longlong *)(param_1 + 0x2d8),0);
  }
  return;
}



// FUNCTION 1410eab40 FUN_1410eab40 body=513 status=ok
// SIG undefined FUN_1410eab40(void)

void FUN_1410eab40(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  
  iVar4 = *(int *)(param_1 + 0x6e8);
  if (0 < iVar4) {
    cVar3 = FUN_1410cfdf0();
    if ((cVar3 != '\0') || (*(float *)(param_1 + 0x7ac) <= 0.0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    iVar11 = 0;
    if (!bVar2) {
      iVar11 = iVar4 + -1;
    }
    lVar10 = (longlong)iVar11 * 0x10;
    lVar1 = *(longlong *)(lVar10 + *(longlong *)(param_1 + 0x6e0));
    if (*(int *)(param_1 + 0x6f8) != *(int *)(param_1 + 0x724)) {
      lVar6 = *(longlong *)(param_1 + 0x730);
      if (*(longlong *)(param_1 + 0x730) == 0) {
        lVar6 = param_1 + 0x728;
      }
      iVar4 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                               (longlong)*(int *)(param_1 + 0x738) - 1U) * 4);
      if (iVar4 != -1) {
        do {
          plVar9 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0x6f0));
          if (*plVar9 == lVar1) {
            if (iVar4 != -1) goto LAB_1410eac22;
            break;
          }
          iVar4 = (int)plVar9[3];
        } while (iVar4 != -1);
      }
    }
    plVar9 = (longlong *)0x0;
LAB_1410eac22:
    plVar8 = plVar9 + 1;
    if (plVar9 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    if ((plVar8 != (longlong *)0x0) &&
       (plVar9 = *(longlong **)(lVar10 + 8 + *(longlong *)(param_1 + 0x6e0)),
       plVar9 != (longlong *)0x0)) {
      (**(code **)(*plVar9 + 0x278))(plVar9,0);
      iVar4 = (int)plVar8[1];
      *(int *)(plVar8 + 1) = iVar4 + 1;
      if (*(int *)((longlong)plVar8 + 0xc) < iVar4 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar8,iVar4);
      }
      *(longlong **)(*plVar8 + (longlong)iVar4 * 8) = plVar9;
    }
    iVar4 = *(int *)(param_1 + 0x6e8);
    iVar5 = (iVar4 - iVar11) + -1;
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0x6e0) + lVar10),
                 (void *)((longlong)(iVar11 + 1) * 0x10 + *(longlong *)(param_1 + 0x6e0)),
                 (longlong)iVar5 << 4);
      iVar4 = *(int *)(param_1 + 0x6e8);
    }
    *(int *)(param_1 + 0x6e8) = iVar4 + -1;
    iVar4 = *(int *)(param_1 + 0x77c);
    iVar11 = *(int *)(param_1 + 0x780);
    if (bVar2) {
      iVar5 = *(int *)(param_1 + 0x788);
      iVar7 = iVar5;
      if (iVar4 + 1 <= iVar5) {
        iVar7 = iVar4 + 1;
      }
      *(int *)(param_1 + 0x77c) = iVar7;
      if ((iVar7 <= iVar11) && (iVar7 = iVar5, iVar11 < iVar5)) {
        iVar7 = iVar11;
      }
      *(int *)(param_1 + 0x780) = iVar7;
      return;
    }
    iVar5 = 0;
    if (-1 < iVar11 + -1) {
      iVar5 = iVar11 + -1;
    }
    *(int *)(param_1 + 0x780) = iVar5;
    iVar11 = 0;
    if ((-1 < iVar4) && (iVar11 = iVar5, iVar4 < iVar5)) {
      iVar11 = iVar4;
    }
    *(int *)(param_1 + 0x77c) = iVar11;
  }
  return;
}



// FUNCTION 1410ead50 FUN_1410ead50 body=137 status=ok
// SIG undefined FUN_1410ead50(void)

void FUN_1410ead50(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
  }
  local_58[0] = &LAB_1410c5580;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 1410eade0 FUN_1410eade0 body=1387 status=ok
// SIG undefined FUN_1410eade0(void)

void FUN_1410eade0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 uVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  longlong *local_60;
  
  if (*(longlong *)(param_1 + 0x788) != 0) {
    FUN_142ecffe0();
    lVar11 = *(longlong *)(param_1 + 0x688);
    if (lVar11 != 0) {
      plVar13 = *(longlong **)(lVar11 + 0x30);
      plVar3 = plVar13 + *(int *)(lVar11 + 0x38);
      for (; plVar13 != plVar3; plVar13 = plVar13 + 1) {
        lVar11 = *plVar13;
        if (*(char *)(lVar11 + 0x128) != '\0') {
          if (*(char *)(lVar11 + 0x31) == '\0') {
            uVar8 = FUN_1410cc2a0(lVar11,local_68);
            FUN_1410f2800(param_1,uVar8);
            plVar7 = local_60;
            if (local_60 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_60 + 1;
              lVar11 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*local_60)(local_60);
                LOCK();
                piVar2 = (int *)((longlong)plVar7 + 0xc);
                iVar4 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar7 + 8))(plVar7,1);
                }
              }
            }
          }
          else {
            switch(*(undefined1 *)(lVar11 + 0x30)) {
            case 0x22:
              lVar9 = FUN_140cfc8e0(*(undefined8 *)(param_1 + 0x7f0));
              lVar10 = FUN_140cff230(*(undefined8 *)(param_1 + 0x7f0));
              if ((lVar10 != 0) && (lVar9 != 0)) {
                uVar5 = *(undefined1 *)(lVar10 + 0x1f8);
                uVar8 = FName::FName(local_res8,L"OnStreamingServiceChanged",1);
                lVar11 = FUN_1410f2240(param_1,lVar11,uVar5,uVar8);
                if (lVar11 != 0) {
                  uVar12 = (uint)*(byte *)(lVar9 + 0x1f8);
LAB_1410eb2f4:
                  FUN_142ed2be0(lVar11,uVar12);
                  FUN_1410c3510(param_1,lVar11);
                }
              }
              break;
            case 0x23:
              lVar9 = FUN_140cfc8e0(*(undefined8 *)(param_1 + 0x7f0));
              lVar10 = FUN_140cff230(*(undefined8 *)(param_1 + 0x7f0));
              if ((lVar10 != 0) && (lVar9 != 0)) {
                cVar6 = *(char *)(lVar10 + 0x1fb);
                uVar8 = FName::FName(local_res10,L"OnIncreasedChanceForSubscribersChanged",1);
                lVar11 = FUN_1410f2240(param_1,lVar11,cVar6 != '\0',uVar8);
                if (lVar11 != 0) {
                  bVar14 = *(char *)(lVar9 + 0x1fb) == '\0';
LAB_1410eb2f1:
                  uVar12 = (uint)!bVar14;
                  goto LAB_1410eb2f4;
                }
              }
              break;
            case 0x24:
              lVar9 = FUN_140cfc8e0(*(undefined8 *)(param_1 + 0x7f0));
              lVar10 = FUN_140cff230(*(undefined8 *)(param_1 + 0x7f0));
              if ((lVar10 != 0) && (lVar9 != 0)) {
                cVar6 = *(char *)(lVar10 + 0x1fc);
                uVar8 = FName::FName(local_res18,L"OnRareChestEventEnabledChanged",1);
                lVar11 = FUN_1410f2240(param_1,lVar11,cVar6 != '\0',uVar8);
                if (lVar11 != 0) {
                  bVar14 = *(char *)(lVar9 + 0x1fc) == '\0';
                  goto LAB_1410eb2f1;
                }
              }
              break;
            case 0x25:
              lVar9 = FUN_140cfc8e0(*(undefined8 *)(param_1 + 0x7f0));
              lVar10 = FUN_140cff230(*(undefined8 *)(param_1 + 0x7f0));
              if ((lVar10 != 0) && (lVar9 != 0)) {
                cVar6 = *(char *)(lVar10 + 0x1fd);
                uVar8 = FName::FName(local_res20,L"OnBadassEventEnabledChanged",1);
                lVar11 = FUN_1410f2240(param_1,lVar11,cVar6 != '\0',uVar8);
                if (lVar11 != 0) {
                  bVar14 = *(char *)(lVar9 + 0x1fd) == '\0';
                  goto LAB_1410eb2f1;
                }
              }
              break;
            case 0x26:
              lVar9 = FUN_140cfc8e0(*(undefined8 *)(param_1 + 0x7f0));
              lVar10 = FUN_140cff230(*(undefined8 *)(param_1 + 0x7f0));
              if ((lVar10 != 0) && (lVar9 != 0)) {
                iVar4 = *(int *)(lVar10 + 0x200) / 0xf;
                if (4 < iVar4) {
                  iVar4 = 5;
                }
                uVar8 = FName::FName(local_88,L"OnBadassEventCooldownChanged",1);
                lVar11 = FUN_1410f2240(param_1,lVar11,iVar4,uVar8);
                if (lVar11 != 0) {
                  uVar12 = *(int *)(lVar9 + 0x200) / 0xf;
                  if (4 < (int)uVar12) {
                    uVar12 = 5;
                  }
                  goto LAB_1410eb2f4;
                }
              }
              break;
            case 0x27:
              lVar9 = FUN_140cfc8e0(*(undefined8 *)(param_1 + 0x7f0));
              lVar10 = FUN_140cff230(*(undefined8 *)(param_1 + 0x7f0));
              if ((lVar10 != 0) && (lVar9 != 0)) {
                cVar6 = *(char *)(lVar10 + 0x204);
                uVar8 = FName::FName(local_80,L"OnPinataEventEnabledChanged",1);
                lVar11 = FUN_1410f2240(param_1,lVar11,cVar6 != '\0',uVar8);
                if (lVar11 != 0) {
                  bVar14 = *(char *)(lVar9 + 0x204) == '\0';
                  goto LAB_1410eb2f1;
                }
              }
              break;
            case 0x28:
              lVar9 = FUN_140cfc8e0(*(undefined8 *)(param_1 + 0x7f0));
              lVar10 = FUN_140cff230(*(undefined8 *)(param_1 + 0x7f0));
              if ((lVar10 != 0) && (lVar9 != 0)) {
                cVar6 = *(char *)(lVar10 + 0x205);
                uVar8 = FName::FName(local_78,L"OnMoxxisDrinkEventEnabledChanged",1);
                lVar11 = FUN_1410f2240(param_1,lVar11,cVar6 != '\0',uVar8);
                if (lVar11 != 0) {
                  bVar14 = *(char *)(lVar9 + 0x205) == '\0';
                  goto LAB_1410eb2f1;
                }
              }
              break;
            case 0x29:
              FUN_1410c8310(param_1,lVar11);
              break;
            case 0x2a:
              lVar9 = FUN_140cfc8e0(*(undefined8 *)(param_1 + 0x7f0));
              lVar10 = FUN_140cff230(*(undefined8 *)(param_1 + 0x7f0));
              if ((lVar10 != 0) && (lVar9 != 0)) {
                cVar6 = *(char *)(lVar10 + 0x20c);
                uVar8 = FName::FName(local_70,L"OnExtractionEventEnabledChanged",1);
                lVar11 = FUN_1410f2240(param_1,lVar11,cVar6 != '\0',uVar8);
                if (lVar11 != 0) {
                  bVar14 = *(char *)(lVar9 + 0x20c) == '\0';
                  goto LAB_1410eb2f1;
                }
              }
            }
          }
        }
      }
    }
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return;
}



// FUNCTION 1410eb370 FUN_1410eb370 body=1159 status=ok
// SIG undefined FUN_1410eb370(void)

void FUN_1410eb370(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 local_218 [24];
  undefined4 local_200;
  undefined1 local_1f8 [24];
  undefined1 local_1e0;
  undefined2 local_1d8;
  longlong local_1d0;
  longlong *local_1c8;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined1 local_188 [64];
  undefined1 local_148 [64];
  undefined1 local_108 [64];
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  undefined1 local_48 [64];
  
  FText::FText(local_218);
  local_200 = DAT_1464aa730;
  FText::FText(local_1f8);
  local_1d0 = 0;
  local_1c8 = (longlong *)0x0;
  local_1e0 = 0;
  local_1d8 = 0;
  lVar6 = FUN_140cff230();
  if ((lVar6 != 0) && (*(longlong *)(param_1 + 0x7f0) != 0)) {
    cVar4 = APlayerController::IsPrimaryPlayer();
    if (cVar4 != '\0') {
      bVar5 = 1;
      goto LAB_1410eb3ef;
    }
  }
  bVar5 = 0;
LAB_1410eb3ef:
  cVar4 = '\0';
  local_1c8 = *(longlong **)(param_1 + 2000);
  local_1d8 = (ushort)bVar5;
  if (*(longlong *)(param_1 + 0x798) != 0) {
    local_1d0 = *(longlong *)(param_1 + 0x798);
    lVar6 = FUN_140def780();
    if (lVar6 != 0) {
      lVar6 = FUN_140dee5b0(lVar6,local_188);
      FText::operator=(local_218,lVar6);
      local_200 = *(undefined4 *)(lVar6 + 0x18);
      FText::operator=(local_1f8,lVar6 + 0x20);
      local_1e0 = *(undefined1 *)(lVar6 + 0x38);
      FUN_1410b46c0(local_188);
    }
    cVar4 = FUN_1410f5fe0(param_1,local_218);
    local_1d8 = CONCAT11(cVar4,(undefined1)local_1d8);
  }
  if (*(longlong *)(param_1 + 0x7a0) != 0) {
    local_1d0 = *(longlong *)(param_1 + 0x7a0);
    lVar6 = FUN_140def780();
    if (lVar6 != 0) {
      lVar6 = FUN_140deec90(lVar6,local_148);
      FText::operator=(local_218,lVar6);
      local_200 = *(undefined4 *)(lVar6 + 0x18);
      FText::operator=(local_1f8,lVar6 + 0x20);
      local_1e0 = *(undefined1 *)(lVar6 + 0x38);
      FUN_1410b46c0(local_148);
    }
    cVar4 = FUN_1410f5fe0(param_1,local_218);
    local_1d8 = CONCAT11(cVar4,(undefined1)local_1d8);
  }
  if (*(longlong *)(param_1 + 0x7a8) != 0) {
    local_1d0 = *(longlong *)(param_1 + 0x7a8);
    lVar6 = FUN_140def780();
    if (lVar6 != 0) {
      lVar6 = FUN_140deea80(lVar6,local_108);
      FText::operator=(local_218,lVar6);
      local_200 = *(undefined4 *)(lVar6 + 0x18);
      FText::operator=(local_1f8,lVar6 + 0x20);
      local_1e0 = *(undefined1 *)(lVar6 + 0x38);
      FUN_1410b46c0(local_108);
    }
    cVar4 = FUN_1410f5fe0(param_1,local_218);
    local_1d8 = CONCAT11(cVar4,(undefined1)local_1d8);
  }
  if (*(longlong *)(param_1 + 0x7b0) != 0) {
    local_1d0 = *(longlong *)(param_1 + 0x7b0);
    lVar6 = FUN_140def780();
    if (lVar6 != 0) {
      lVar6 = FUN_140def440(lVar6,local_c8);
      FText::operator=(local_218,lVar6);
      local_200 = *(undefined4 *)(lVar6 + 0x18);
      FText::operator=(local_1f8,lVar6 + 0x20);
      local_1e0 = *(undefined1 *)(lVar6 + 0x38);
      FUN_1410b46c0(local_c8);
    }
    cVar4 = FUN_1410f5fe0(param_1,local_218);
    local_1d8 = CONCAT11(cVar4,(undefined1)local_1d8);
  }
  if (*(longlong *)(param_1 + 0x7b8) != 0) {
    local_1d0 = *(longlong *)(param_1 + 0x7b8);
    lVar6 = FUN_140def780();
    if (lVar6 != 0) {
      lVar6 = FUN_140def160(lVar6,local_88);
      FText::operator=(local_218,lVar6);
      local_200 = *(undefined4 *)(lVar6 + 0x18);
      FText::operator=(local_1f8,lVar6 + 0x20);
      local_1e0 = *(undefined1 *)(lVar6 + 0x38);
      FUN_1410b46c0(local_88);
    }
    cVar4 = FUN_1410f5fe0(param_1,local_218);
    local_1d8 = CONCAT11(cVar4,(undefined1)local_1d8);
  }
  if (*(longlong *)(param_1 + 0x7c0) != 0) {
    local_1d0 = *(longlong *)(param_1 + 0x7c0);
    lVar6 = FUN_140def780();
    if (lVar6 != 0) {
      lVar6 = FUN_140def790(lVar6,local_48);
      FText::operator=(local_218,lVar6);
      local_200 = *(undefined4 *)(lVar6 + 0x18);
      FText::operator=(local_1f8,lVar6 + 0x20);
      local_1e0 = *(undefined1 *)(lVar6 + 0x38);
      FUN_1410b46c0(local_48);
    }
    cVar4 = FUN_1410f5fe0(param_1,local_218);
    local_1d8 = CONCAT11(cVar4,(undefined1)local_1d8);
  }
  if (local_1c8 != (longlong *)0x0) {
    if (cVar4 == '\0') {
      lVar6 = *local_1c8;
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_1b8,L"ECHOcast successfully configured!",L"EchoCastMenu",
                         L"SuccessDescriptionText");
      (**(code **)(lVar6 + 0x2b0))(local_1c8,uVar7,1,0);
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1b0 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_1b0)(local_1b0);
          LOCK();
          piVar2 = (int *)((longlong)local_1b0 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_1b0 + 8))(local_1b0,1);
          }
        }
      }
      local_1d8 = CONCAT11(1,(undefined1)local_1d8);
    }
    if (local_1c8 != (longlong *)0x0) {
      lVar6 = FUN_140def780();
      if (((lVar6 != 0) && (*(longlong *)(lVar6 + 0xf8) != 0)) &&
         (0 < *(int *)(*(longlong *)(lVar6 + 0xf8) + 0x80))) {
        lVar6 = *local_1c8;
        uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_1a0,
                           L"ECHOcast menu is disabled while a streaming event is running.",
                           L"EchoCastMenu",L"EventIsRunningText");
        (**(code **)(lVar6 + 0x2b0))(local_1c8,uVar7,1,0);
        if (local_198 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_198 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_198)(local_198);
            LOCK();
            piVar2 = (int *)((longlong)local_198 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_198 + 8))(local_198,1);
            }
          }
        }
      }
    }
  }
  FUN_1410b46c0(local_218);
  return;
}



// FUNCTION 1410eb800 ResizeForCopy body=130 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FTextureInstanceView::FBounds4,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0xf0,0);
    iVar3 = (int)(uVar1 / 0xf0);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0xf0,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 1410eb890 FUN_1410eb890 body=132 status=ok
// SIG undefined FUN_1410eb890(void)

void FUN_1410eb890(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 0x7f0) != 0) {
    FUN_140ce6870();
    if (*(char *)(param_1 + 0x7d8) != '\0') {
      lVar1 = FUN_140def780();
      if (lVar1 != 0) {
        FUN_140e057f0(lVar1);
      }
      FUN_1410ea760(param_1);
    }
    local_28 = 0;
    local_18 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = param_1;
      *puVar2 = &PTR_FUN_143f77b70;
    }
    local_58[0] = FUN_1410c5860;
    FUN_14204c280(local_58);
  }
  return;
}



// FUNCTION 1410eb920 FUN_1410eb920 body=70 status=ok
// SIG undefined FUN_1410eb920(void)

void FUN_1410eb920(longlong *param_1,undefined8 param_2,char param_3)

{
  FText::operator=(param_1 + 0xf9);
  if (param_3 != '\0') {
    TSet<TTuple<AccountId,TSharedPtr<ILoginSession,0>_>,TDefaultMapHashableKeyFuncs<AccountId,TSharedPtr<ILoginSession,0>,0>,FDefaultSetAllocator>
    ::Empty(param_1 + 0xda,0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001410eb95f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x568))(param_1);
  return;
}



// FUNCTION 1410eb970 FUN_1410eb970 body=251 status=ok
// SIG undefined FUN_1410eb970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410eb970(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined8 local_60;
  undefined4 *local_58;
  undefined4 local_50 [4];
  undefined1 local_40 [8];
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  piVar4 = (int *)TSet<TTuple<FString,FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FLocKeyMapFuncs<FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FDefaultSetAllocator>
                  ::FindId(param_1 + 0xda,local_68,param_2);
  if (*piVar4 != -1) {
    FUN_1410ea8b0(param_1 + 0xda,param_2);
  }
  local_50[0] = 4;
  FText::FText(local_40,param_3);
  local_58 = local_50;
  local_28 = '\x01';
  local_60 = param_2;
  FUN_1405df450(param_1 + 0xda,local_64,&local_60,0);
  if (local_28 != '\0') {
    local_28 = '\0';
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar4 = (int *)((longlong)local_38 + 0xc);
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x568))(param_1);
  return;
}



// FUNCTION 1410eba70 FUN_1410eba70 body=129 status=ok
// SIG undefined FUN_1410eba70(void)

void FUN_1410eba70(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 local_28 [32];
  
  if ((*(longlong *)(param_1 + 0x310) != 0) && (*(longlong **)(param_1 + 0x308) != (longlong *)0x0))
  {
    lVar1 = **(longlong **)(param_1 + 0x308);
    uVar3 = param_2;
    cVar2 = FText::IsEmpty(param_2);
    (**(code **)(lVar1 + 0x288))
              (*(undefined8 *)(param_1 + 0x308),
               CONCAT71((int7)((ulonglong)uVar3 >> 8),-(cVar2 != '\0')) & 0xffffffffffffff02);
    lVar1 = **(longlong **)(param_1 + 0x310);
    uVar3 = FText::FText(local_28,param_2);
    (**(code **)(lVar1 + 0x2d0))(*(undefined8 *)(param_1 + 0x310),uVar3);
  }
  return;
}



// FUNCTION 1410ebb00 FUN_1410ebb00 body=261 status=ok
// SIG undefined FUN_1410ebb00(void)

void FUN_1410ebb00(longlong param_1,undefined2 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  char cStackX_11;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar4 = FUN_141329d80();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar4 = *(longlong *)(lVar1 + 2000);
      lVar5 = (longlong)*(int *)(lVar1 + 0x7d8) * 0xe8 + lVar4;
      if (lVar4 != lVar5) {
        cStackX_11 = (char)((ushort)param_2 >> 8);
        do {
          if ((*(char *)(lVar4 + 0x18) == (char)param_2) && (*(char *)(lVar4 + 0x19) == cStackX_11))
          {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if (bVar3) goto LAB_1410ebbaf;
          lVar4 = lVar4 + 0xe8;
        } while (lVar4 != lVar5);
      }
      lVar4 = lVar1 + 0xf60;
LAB_1410ebbaf:
      FUN_142088910(param_1,lVar4 + 0x40);
      plVar2 = *(longlong **)(param_1 + 0x170);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x2b0))(plVar2,lVar4,1,0);
      }
      plVar2 = *(longlong **)(param_1 + 0x180);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x278))(plVar2,0);
      }
    }
  }
  return;
}



// FUNCTION 1410ebc10 FUN_1410ebc10 body=70 status=ok
// SIG undefined FUN_1410ebc10(void)

void FUN_1410ebc10(longlong *param_1,undefined8 param_2,char param_3)

{
  FText::operator=(param_1 + 0xf6);
  if (param_3 != '\0') {
    TSet<TTuple<AccountId,TSharedPtr<ILoginSession,0>_>,TDefaultMapHashableKeyFuncs<AccountId,TSharedPtr<ILoginSession,0>,0>,FDefaultSetAllocator>
    ::Empty(param_1 + 0xd0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001410ebc4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x568))(param_1);
  return;
}



// FUNCTION 1410ebc60 FUN_1410ebc60 body=251 status=ok
// SIG undefined FUN_1410ebc60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410ebc60(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined8 local_60;
  undefined4 *local_58;
  undefined4 local_50 [4];
  undefined1 local_40 [8];
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  piVar4 = (int *)TSet<TTuple<FString,FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FLocKeyMapFuncs<FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FDefaultSetAllocator>
                  ::FindId(param_1 + 0xd0,local_68,param_2);
  if (*piVar4 != -1) {
    FUN_1410ea8b0(param_1 + 0xd0,param_2);
  }
  local_50[0] = 4;
  FText::FText(local_40,param_3);
  local_58 = local_50;
  local_28 = '\x01';
  local_60 = param_2;
  FUN_1405df450(param_1 + 0xd0,local_64,&local_60,0);
  if (local_28 != '\0') {
    local_28 = '\0';
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar4 = (int *)((longlong)local_38 + 0xc);
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x568))(param_1);
  return;
}



// FUNCTION 1410ebd60 FUN_1410ebd60 body=57 status=ok
// SIG undefined FUN_1410ebd60(void)

void FUN_1410ebd60(longlong param_1,undefined1 param_2)

{
  char cVar1;
  
  cVar1 = FUN_142ebd930();
  if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x5b0) != 0)) {
    FUN_142f11000(*(longlong *)(param_1 + 0x5b0),param_2);
  }
  return;
}



// FUNCTION 1410ebda0 FUN_1410ebda0 body=70 status=ok
// SIG undefined FUN_1410ebda0(void)

void FUN_1410ebda0(longlong *param_1,undefined8 param_2,char param_3)

{
  FText::operator=(param_1 + 0xfc);
  if (param_3 != '\0') {
    TSet<TTuple<AccountId,TSharedPtr<ILoginSession,0>_>,TDefaultMapHashableKeyFuncs<AccountId,TSharedPtr<ILoginSession,0>,0>,FDefaultSetAllocator>
    ::Empty(param_1 + 0xe4,0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001410ebddf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x568))(param_1);
  return;
}



// FUNCTION 1410ebdf0 FUN_1410ebdf0 body=251 status=ok
// SIG undefined FUN_1410ebdf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410ebdf0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined8 local_60;
  undefined4 *local_58;
  undefined4 local_50 [4];
  undefined1 local_40 [8];
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  piVar4 = (int *)TSet<TTuple<FString,FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FLocKeyMapFuncs<FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FDefaultSetAllocator>
                  ::FindId(param_1 + 0xe4,local_68,param_2);
  if (*piVar4 != -1) {
    FUN_1410ea8b0(param_1 + 0xe4,param_2);
  }
  local_50[0] = 4;
  FText::FText(local_40,param_3);
  local_58 = local_50;
  local_28 = '\x01';
  local_60 = param_2;
  FUN_1405df450(param_1 + 0xe4,local_64,&local_60,0);
  if (local_28 != '\0') {
    local_28 = '\0';
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar4 = (int *)((longlong)local_38 + 0xc);
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x568))(param_1);
  return;
}



// FUNCTION 1410ebef0 FUN_1410ebef0 body=199 status=ok
// SIG undefined FUN_1410ebef0(void)

void FUN_1410ebef0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_18;
  undefined8 local_10;
  
  plVar1 = (longlong *)0x0;
  if (param_2 != 0) {
    local_18 = (longlong *)0x0;
    local_10 = 0;
    plVar1 = (longlong *)FUN_140ecc7d0(param_2,param_3,0,6,&local_18);
    plVar2 = local_18;
    for (iVar3 = (int)local_10; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2b0))(plVar1,param_4,1,0);
  }
  return;
}



// FUNCTION 1410ebfc0 FUN_1410ebfc0 body=882 status=ok
// SIG undefined FUN_1410ebfc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410ebfc0(longlong param_1,int param_2)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  char *pcVar8;
  longlong lVar9;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  longlong lStack_150;
  undefined8 *local_148;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [24];
  undefined4 local_a8 [2];
  longlong local_a0;
  undefined1 local_80;
  undefined4 local_78;
  longlong local_70;
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_178;
  *(int *)(param_1 + 0xc40) = param_2;
  if (((-1 < param_2) && (param_2 < *(int *)(param_1 + 0xc08))) &&
     (lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xc00) + (longlong)param_2 * 8), lVar9 != 0)) {
    FUN_140e6bf90(param_1 + 0xc50,lVar9 + 0x30);
    FUN_140e6bf90(param_1 + 0xdd8,lVar9 + 0x30);
    if (*(longlong *)(param_1 + 0x10b0) != 0) {
      iVar4 = *(int *)(param_1 + 0xc08);
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_f0,L"Loadout {0}/{1}",L"GFxCatchARideMenu",L"DefaultLoadoutName");
      local_148 = (undefined8 *)FTextFormat::FTextFormat(local_c0,uVar7);
      local_a8[0] = 0;
      local_80 = 0;
      local_78 = 0;
      local_50 = 0;
      local_128 = local_a8;
      uStack_120 = local_48;
      local_158 = *local_148;
      lStack_150 = local_148[1];
      local_a0 = (longlong)(param_2 + 1);
      if (lStack_150 != 0) {
        LOCK();
        *(int *)(lStack_150 + 8) = *(int *)(lStack_150 + 8) + 1;
        UNLOCK();
      }
      local_70 = (longlong)iVar4;
      uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_118,&local_128);
      uVar7 = FText::Format(local_108,&local_158,uVar7);
      FText::FText(local_140,uVar7);
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_100 + 1;
        lVar9 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
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
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_118);
      lVar9 = 2;
      pcVar8 = &stack0xffffffffffffffe0;
      do {
        lVar9 = lVar9 + -1;
        pcVar2 = pcVar8 + -0x30;
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
          plVar5 = *(longlong **)(pcVar8 + -0x40);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar5 + 1;
            lVar6 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
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
        pcVar8 = pcVar2;
      } while (lVar9 != 0);
      plVar5 = (longlong *)local_148[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar9 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
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
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_e8 + 1;
        lVar9 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_e8)(local_e8);
          LOCK();
          piVar1 = (int *)((longlong)local_e8 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_e8 + 8))(local_e8,1);
          }
        }
      }
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xc00) + (longlong)param_2 * 8);
      if (1 < *(int *)(lVar9 + 0x38)) {
        uVar7 = FText::FromString(local_d8,lVar9 + 0x30);
        FText::operator=(local_140,uVar7);
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_d0 + 1;
          lVar9 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar1 = (int *)((longlong)local_d0 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_d0 + 8))(local_d0,1);
            }
          }
        }
      }
      (**(code **)(**(longlong **)(param_1 + 0x10b0) + 0x2b0))
                (*(longlong **)(param_1 + 0x10b0),local_140,1,0);
      if (local_138 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_138 + 1;
        lVar9 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_138)(local_138);
          LOCK();
          piVar1 = (int *)((longlong)local_138 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_138 + 8))(local_138,1);
          }
        }
      }
    }
  }
  FUN_1410d0990(param_1);
  FUN_1410e8a40(param_1);
  FUN_1410cdb90(param_1);
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return;
}



// FUNCTION 1410ec340 FUN_1410ec340 body=238 status=ok
// SIG undefined FUN_1410ec340(void)

void FUN_1410ec340(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar5 = (longlong *)0x0;
  *(undefined8 *)(param_1 + 0xc30) = 0;
  *(undefined8 *)(param_1 + 0xc38) = 0;
  if ((*param_2 != 0) && (param_2[1] != 0)) {
    *(longlong *)(param_1 + 0xc30) = *param_2;
    *(longlong *)(param_1 + 0xc38) = param_2[1];
    if (*(longlong **)(param_1 + 0x1080) != (longlong *)0x0) {
      if (*param_2 != 0) {
        plVar5 = (longlong *)param_2[1];
      }
      lVar3 = **(longlong **)(param_1 + 0x1080);
      uVar4 = (**(code **)(*plVar5 + 0x38))(plVar5,local_28);
      (**(code **)(lVar3 + 0x2b0))(*(undefined8 *)(param_1 + 0x1080),uVar4,1,0);
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
    }
  }
  FUN_1410ebfc0(param_1,(0 < *(int *)(param_1 + 0xc08)) - 1);
  return;
}



// FUNCTION 1410ec430 FUN_1410ec430 body=359 status=ok
// SIG undefined FUN_1410ec430(void)

void FUN_1410ec430(longlong *param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong local_18 [2];
  
  *(int *)((longlong)param_1 + 0x79c) = *(int *)((longlong)param_1 + 0x79c) + 1;
  if ((int)param_1[0xd7] != 0) {
    local_18[0] = 0;
    uVar1 = *(undefined8 *)param_1[0xd6];
    local_18[1] = 0x15;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"ExtConceptArtTexture",0x2a);
    (**(code **)(*param_1 + 0x2a0))(param_1,local_18,uVar1);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    local_18[0] = 0;
    local_18[1] = 0x1c;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"ExtConceptArtTexture_nopack",0x38);
    (**(code **)(*param_1 + 0x2a0))(param_1,local_18,uVar1);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (param_1[0xd8] != 0) {
      cVar2 = FUN_142088620();
      if (cVar2 == '\0') {
        (**(code **)(*(longlong *)param_1[0xd8] + 0x278))((longlong *)param_1[0xd8],1);
      }
      *(undefined1 *)((longlong)param_1 + 0x795) = 1;
      local_18[0] = 0;
      local_18[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"show",10);
      FUN_142088910(param_1[0xd8],local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1410ec5a0 FUN_1410ec5a0 body=416 status=ok
// SIG undefined FUN_1410ec5a0(void)

void FUN_1410ec5a0(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(longlong *)(param_1 + 0x798) != 0) {
    lVar5 = FUN_140f9aee0();
    if (((param_2 != 0) && (lVar5 != 0)) &&
       (lVar6 = UGameInstance::GetGameViewportClient(lVar5), lVar6 != 0)) {
      iVar4 = FUN_14046e5c0(lVar5);
      if ((iVar4 < 2) || (*(char *)(lVar6 + 0x80) != '\0')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((param_3 != '\0') || (bVar3)) {
        lVar5 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) {
          return;
        }
        lVar5 = FUN_14270bb10(param_2);
        if (lVar5 == 0) {
          return;
        }
        FUN_140cfcd10(param_2,local_38,1);
        lVar5 = **(longlong **)(param_1 + 0x798);
        uVar7 = FText::FromString(local_28,local_38);
        (**(code **)(lVar5 + 0x2b0))(*(undefined8 *)(param_1 + 0x798),uVar7,1,0);
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
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_20 + 8))(local_20,1);
            }
          }
        }
        if (local_38[0] == 0) {
          return;
        }
        FMemory::Free();
        return;
      }
    }
    lVar5 = **(longlong **)(param_1 + 0x798);
    uVar7 = FUN_1404b03b0();
    (**(code **)(lVar5 + 0x2b0))(*(undefined8 *)(param_1 + 0x798),uVar7,1,0);
  }
  return;
}



// FUNCTION 1410ec740 FUN_1410ec740 body=1357 status=ok
// SIG undefined FUN_1410ec740(void)

void FUN_1410ec740(longlong param_1,int param_2,byte *param_3,longlong *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar12 = 0;
  fVar17 = 3.4028235e+38;
  iVar13 = -1;
  bVar1 = *param_3;
  bVar2 = param_3[1];
  bVar3 = param_3[2];
  if (param_3[3] == 0) {
    fVar17 = 0.0;
    goto LAB_1410ecb83;
  }
  lVar9 = param_1 + 0x2b0;
  lVar6 = FWeakObjectPtr::Get(lVar9);
  if (lVar6 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(param_1 + 0x2b8)) || (*(longlong *)(param_1 + 0x2c0) == 0))
    goto LAB_1410ecb83;
    lVar6 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar9,lVar6);
    if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x2b8) = DAT_1464b56f4;
    }
    lVar6 = FWeakObjectPtr::Get(lVar9);
    if (lVar6 == 0) goto LAB_1410ecb83;
  }
  lVar7 = AArchVisCharacter::StaticClass();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) goto LAB_1410ecb83;
  if (param_2 == 0) {
    uVar8 = FWeakObjectPtr::Get(lVar9);
    if (uVar8 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(param_1 + 0x2b8)) && (*(longlong *)(param_1 + 0x2c0) != 0)) {
        lVar6 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar9,lVar6);
        if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_1 + 0x2b8) = DAT_1464b56f4;
        }
        uVar8 = FWeakObjectPtr::Get(lVar9);
        if (uVar8 != 0) goto LAB_1410ecae1;
      }
LAB_1410ecb17:
      uVar8 = uVar12;
    }
    else {
LAB_1410ecae1:
      lVar9 = AArchVisCharacter::StaticClass();
      if ((*(int *)(*(longlong *)(uVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_1410ecb17;
    }
    fVar17 = (float)*(byte *)(uVar8 + 0x7a6);
    fVar14 = (float)*(byte *)(uVar8 + 0x7a5);
    bVar5 = *(byte *)(uVar8 + 0x7a4);
  }
  else if (param_2 == 1) {
    uVar8 = FWeakObjectPtr::Get(lVar9);
    if (uVar8 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(param_1 + 0x2b8)) && (*(longlong *)(param_1 + 0x2c0) != 0)) {
        lVar6 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar9,lVar6);
        if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_1 + 0x2b8) = DAT_1464b56f4;
        }
        uVar8 = FWeakObjectPtr::Get(lVar9);
        if (uVar8 != 0) goto LAB_1410eca0d;
      }
LAB_1410eca43:
      uVar8 = uVar12;
    }
    else {
LAB_1410eca0d:
      lVar9 = AArchVisCharacter::StaticClass();
      if ((*(int *)(*(longlong *)(uVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_1410eca43;
    }
    fVar17 = (float)*(byte *)(uVar8 + 0x7aa);
    fVar14 = (float)*(byte *)(uVar8 + 0x7a9);
    bVar5 = *(byte *)(uVar8 + 0x7a8);
  }
  else {
    if (param_2 != 2) goto LAB_1410ecb83;
    uVar8 = FWeakObjectPtr::Get(lVar9);
    if (uVar8 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(param_1 + 0x2b8)) && (*(longlong *)(param_1 + 0x2c0) != 0)) {
        lVar6 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar9,lVar6);
        if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_1 + 0x2b8) = DAT_1464b56f4;
        }
        uVar8 = FWeakObjectPtr::Get(lVar9);
        if (uVar8 != 0) goto LAB_1410ec939;
      }
LAB_1410ec96f:
      uVar8 = uVar12;
    }
    else {
LAB_1410ec939:
      lVar9 = AArchVisCharacter::StaticClass();
      if ((*(int *)(*(longlong *)(uVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) goto LAB_1410ec96f;
    }
    fVar17 = (float)*(byte *)(uVar8 + 0x7ae);
    fVar14 = (float)*(byte *)(uVar8 + 0x7ad);
    bVar5 = *(byte *)(uVar8 + 0x7ac);
  }
  fVar15 = fVar14 * 0.003921569 - (float)bVar2 * 0.003921569;
  fVar14 = fVar17 * 0.003921569 - (float)bVar3 * 0.003921569;
  fVar17 = (float)bVar5 * 0.003921569 - (float)bVar1 * 0.003921569;
  fVar17 = fVar15 * fVar15 + fVar14 * fVar14 + fVar17 * fVar17;
LAB_1410ecb83:
  uVar8 = uVar12;
  if (0 < (int)param_4[1]) {
    do {
      iVar10 = (int)uVar12;
      if (fVar17 == 0.0) break;
      lVar9 = *param_4;
      uVar11 = iVar10 + 1;
      uVar12 = (ulonglong)uVar11;
      fVar16 = (float)*(byte *)(uVar8 + 1 + lVar9) * 0.003921569 - (float)bVar2 * 0.003921569;
      fVar15 = (float)*(byte *)(uVar8 + 2 + lVar9) * 0.003921569 - (float)bVar3 * 0.003921569;
      fVar14 = (float)*(byte *)(uVar8 + lVar9) * 0.003921569 - (float)bVar1 * 0.003921569;
      fVar15 = fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14;
      fVar14 = fVar17;
      if (fVar15 <= fVar17) {
        fVar14 = fVar15;
      }
      if (fVar17 <= fVar15) {
        iVar10 = iVar13;
      }
      iVar13 = iVar10;
      uVar8 = uVar8 + 4;
      fVar17 = fVar14;
    } while ((int)uVar11 < (int)param_4[1]);
  }
  if (param_2 == 0) {
    *(int *)(param_1 + 0x300) = iVar13;
  }
  else {
    if (param_2 == 1) {
      *(int *)(param_1 + 0x304) = iVar13;
      return;
    }
    if (param_2 == 2) {
      *(int *)(param_1 + 0x308) = iVar13;
      return;
    }
  }
  return;
}



// FUNCTION 1410ecc90 FUN_1410ecc90 body=1918 status=ok
// SIG undefined FUN_1410ecc90(void)

void FUN_1410ecc90(longlong param_1,char param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined4 local_2e8;
  undefined4 local_2e4;
  int local_2e0;
  undefined8 local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  int local_2b8;
  undefined8 local_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined8 local_294;
  undefined8 local_288;
  longlong local_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_26c;
  undefined8 local_260;
  longlong local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_244;
  undefined8 local_238;
  longlong local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_21c;
  undefined8 local_210;
  longlong local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f4;
  undefined8 local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [24];
  undefined1 local_190 [24];
  undefined1 local_178 [24];
  undefined1 local_160 [24];
  undefined1 local_148 [24];
  undefined1 local_130 [24];
  undefined1 local_118 [24];
  undefined1 local_100 [24];
  undefined1 local_e8 [24];
  undefined1 local_d0 [24];
  undefined1 local_b8 [24];
  undefined1 local_a0 [24];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  
  if ((param_3 != 0) && (*(char *)(param_3 + 0x38) != param_2)) {
    return;
  }
  switch(param_2) {
  case '\x01':
    local_298 = 0xffffffff;
    local_280 = 0;
    local_278 = 0;
    local_294 = 0;
    local_288 = 0;
    if (param_3 == 0) {
      local_288 = 0;
    }
    else {
      uVar2 = FSoftObjectPath::FSoftObjectPath(local_1a8,param_3);
      FSoftObjectPath::operator=(&local_288,uVar2);
      FWeakObjectPtr::operator=(&local_298,param_3);
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      local_294 = CONCAT44(DAT_1464b56f4,(undefined4)local_294);
    }
    cVar1 = FSoftObjectPath::operator==(param_1 + 0x1d0,&local_288);
    bVar5 = cVar1 == '\0';
    if (local_280 != 0) {
      FMemory::Free();
    }
    puVar4 = (undefined4 *)(param_1 + 0x1c0);
    if (param_3 != 0) {
      puVar3 = local_190;
      goto LAB_1410ecda2;
    }
LAB_1410ecdd4:
    *puVar4 = 0xffffffff;
    puVar4[1] = 0;
    *(undefined8 *)(puVar4 + 4) = 0;
    puVar4[8] = 0;
    if (((int)puVar4[9] < 0) && (puVar4[9] != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar4 + 6,0);
    }
    if (*(undefined2 **)(puVar4 + 6) != (undefined2 *)0x0) {
      **(undefined2 **)(puVar4 + 6) = 0;
    }
    goto LAB_1410ed3bd;
  case '\x02':
    local_270 = 0xffffffff;
    local_258 = 0;
    local_250 = 0;
    local_26c = 0;
    local_260 = 0;
    if (param_3 == 0) {
      local_260 = 0;
    }
    else {
      uVar2 = FSoftObjectPath::FSoftObjectPath(local_178,param_3);
      FSoftObjectPath::operator=(&local_260,uVar2);
      FWeakObjectPtr::operator=(&local_270,param_3);
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      local_26c = CONCAT44(DAT_1464b56f4,(undefined4)local_26c);
    }
    cVar1 = FSoftObjectPath::operator==(param_1 + 0x1f8,&local_260);
    bVar5 = cVar1 == '\0';
    if (local_258 != 0) {
      FMemory::Free();
    }
    puVar4 = (undefined4 *)(param_1 + 0x1e8);
    if (param_3 == 0) goto LAB_1410ecdd4;
    puVar3 = local_160;
LAB_1410ecda2:
    uVar2 = FSoftObjectPath::FSoftObjectPath(puVar3,param_3);
    FSoftObjectPath::operator=(puVar4 + 4,uVar2);
    FWeakObjectPtr::operator=(puVar4,param_3);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    puVar4[2] = DAT_1464b56f4;
    break;
  case '\x03':
    local_248 = 0xffffffff;
    local_230 = 0;
    local_228 = 0;
    local_244 = 0;
    local_238 = 0;
    if (param_3 == 0) {
      local_238 = 0;
    }
    else {
      uVar2 = FSoftObjectPath::FSoftObjectPath(local_148,param_3);
      FSoftObjectPath::operator=(&local_238,uVar2);
      FWeakObjectPtr::operator=(&local_248,param_3);
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      local_244 = CONCAT44(DAT_1464b56f4,(undefined4)local_244);
    }
    cVar1 = FSoftObjectPath::operator==(param_1 + 0x220,&local_238);
    bVar5 = cVar1 == '\0';
    if (local_230 != 0) {
      FMemory::Free();
    }
    puVar4 = (undefined4 *)(param_1 + 0x210);
    if (param_3 == 0) goto LAB_1410ecdd4;
    uVar2 = FSoftObjectPath::FSoftObjectPath(local_130,param_3);
    FSoftObjectPath::operator=(param_1 + 0x220,uVar2);
    FWeakObjectPtr::operator=(puVar4,param_3);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    *(int *)(param_1 + 0x218) = DAT_1464b56f4;
    break;
  case '\x04':
    local_220 = 0xffffffff;
    local_208 = 0;
    local_200 = 0;
    local_21c = 0;
    local_210 = 0;
    if (param_3 == 0) {
      local_210 = 0;
    }
    else {
      uVar2 = FSoftObjectPath::FSoftObjectPath(local_118,param_3);
      FSoftObjectPath::operator=(&local_210,uVar2);
      FWeakObjectPtr::operator=(&local_220,param_3);
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      local_21c = CONCAT44(DAT_1464b56f4,(undefined4)local_21c);
    }
    cVar1 = FSoftObjectPath::operator==(param_1 + 0x248,&local_210);
    bVar5 = cVar1 == '\0';
    if (local_208 != 0) {
      FMemory::Free();
    }
    puVar4 = (undefined4 *)(param_1 + 0x238);
    if (param_3 == 0) goto LAB_1410ecdd4;
    uVar2 = FSoftObjectPath::FSoftObjectPath(local_100,param_3);
    FSoftObjectPath::operator=(param_1 + 0x248,uVar2);
    FWeakObjectPtr::operator=(puVar4,param_3);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    *(int *)(param_1 + 0x240) = DAT_1464b56f4;
    break;
  case '\x05':
    local_1f8 = 0xffffffff;
    local_1e0 = 0;
    local_1d8 = 0;
    local_1f4 = 0;
    local_1e8 = 0;
    if (param_3 == 0) {
      local_1e8 = 0;
    }
    else {
      uVar2 = FSoftObjectPath::FSoftObjectPath(local_e8,param_3);
      FSoftObjectPath::operator=(&local_1e8,uVar2);
      FWeakObjectPtr::operator=(&local_1f8,param_3);
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      local_1f4 = CONCAT44(DAT_1464b56f4,(undefined4)local_1f4);
    }
    cVar1 = FSoftObjectPath::operator==(param_1 + 0x270,&local_1e8);
    bVar5 = cVar1 == '\0';
    if (local_1e0 != 0) {
      FMemory::Free();
    }
    puVar4 = (undefined4 *)(param_1 + 0x260);
    if (param_3 == 0) goto LAB_1410ecdd4;
    uVar2 = FSoftObjectPath::FSoftObjectPath(local_d0,param_3);
    FSoftObjectPath::operator=(param_1 + 0x270,uVar2);
    FWeakObjectPtr::operator=(puVar4,param_3);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    *(int *)(param_1 + 0x268) = DAT_1464b56f4;
    break;
  case '\x06':
    local_1d0 = 0xffffffff;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1cc = 0;
    local_1c0 = 0;
    if (param_3 == 0) {
      local_1c0 = 0;
    }
    else {
      uVar2 = FSoftObjectPath::FSoftObjectPath(local_b8,param_3);
      FSoftObjectPath::operator=(&local_1c0,uVar2);
      FWeakObjectPtr::operator=(&local_1d0,param_3);
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      local_1cc = CONCAT44(DAT_1464b56f4,(undefined4)local_1cc);
    }
    cVar1 = FSoftObjectPath::operator==(param_1 + 0x298,&local_1c0);
    bVar5 = cVar1 == '\0';
    if (local_1b8 != 0) {
      FMemory::Free();
    }
    puVar4 = (undefined4 *)(param_1 + 0x288);
    if (param_3 == 0) goto LAB_1410ed3a9;
    puVar3 = local_a0;
LAB_1410ed37a:
    uVar2 = FSoftObjectPath::FSoftObjectPath(puVar3,param_3);
    FSoftObjectPath::operator=(puVar4 + 4,uVar2);
    FWeakObjectPtr::operator=(puVar4,param_3);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    puVar4[2] = DAT_1464b56f4;
    break;
  case '\a':
    local_2e8 = 0xffffffff;
    local_2d8 = 0;
    local_2d0 = 0;
    local_2c8 = 0;
    local_2e4 = 0;
    FSoftObjectPath::Reset(&local_2d8);
    local_2e0 = 0;
    if (param_3 == 0) {
      local_2e8 = 0xffffffff;
      local_2e4 = 0;
      FSoftObjectPath::Reset(&local_2d8);
      local_2e0 = 0;
    }
    else {
      uVar2 = FSoftObjectPath::FSoftObjectPath(local_88,param_3);
      FSoftObjectPath::operator=(&local_2d8,uVar2);
      FWeakObjectPtr::operator=(&local_2e8,param_3);
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      local_2e0 = DAT_1464b56f4;
    }
    cVar1 = FSoftObjectPath::operator==(param_1 + 0x2c0,&local_2d8);
    bVar5 = cVar1 == '\0';
    if (local_2d0 != 0) {
      FMemory::Free();
    }
    puVar4 = (undefined4 *)(param_1 + 0x2b0);
    if (param_3 != 0) {
      puVar3 = local_70;
      goto LAB_1410ed37a;
    }
    goto LAB_1410ed3a9;
  case '\b':
    local_2c0 = 0xffffffff;
    local_2b0 = 0;
    local_2a8 = 0;
    local_2a0 = 0;
    local_2bc = 0;
    FSoftObjectPath::Reset(&local_2b0);
    local_2b8 = 0;
    if (param_3 == 0) {
      local_2c0 = 0xffffffff;
      local_2bc = 0;
      FSoftObjectPath::Reset(&local_2b0);
      local_2b8 = 0;
    }
    else {
      uVar2 = FSoftObjectPath::FSoftObjectPath(local_58,param_3);
      FSoftObjectPath::operator=(&local_2b0,uVar2);
      FWeakObjectPtr::operator=(&local_2c0,param_3);
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      local_2b8 = DAT_1464b56f4;
    }
    cVar1 = FSoftObjectPath::operator==(param_1 + 0x2e8,&local_2b0);
    bVar5 = cVar1 == '\0';
    if (local_2a8 != 0) {
      FMemory::Free();
    }
    puVar4 = (undefined4 *)(param_1 + 0x2d8);
    if (param_3 != 0) {
      puVar3 = local_40;
      goto LAB_1410ed37a;
    }
LAB_1410ed3a9:
    *puVar4 = 0xffffffff;
    puVar4[1] = 0;
    FSoftObjectPath::Reset(puVar4 + 4);
LAB_1410ed3bd:
    puVar4[2] = 0;
    break;
  default:
    goto switchD_1410ecd00_default;
  }
  if ((bVar5) && (param_2 == '\a')) {
    *(undefined8 *)(param_1 + 0x300) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x308) = 0xffffffff;
  }
switchD_1410ecd00_default:
  return;
}



// FUNCTION 1410ed430 FUN_1410ed430 body=197 status=ok
// SIG undefined FUN_1410ed430(void)

void FUN_1410ed430(longlong param_1,undefined2 param_2)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if ((*(char *)(param_1 + 0xc49) != (char)param_2) ||
     (*(char *)(param_1 + 0xc4a) != (char)((ushort)param_2 >> 8))) {
    FWeakObjectPtr::operator=(&local_res8,param_1);
    local_28 = 0;
    local_18 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_48);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR_FUN_14468ea28;
      puVar1[1] = param_1;
      *(undefined4 *)(puVar1 + 2) = local_res8;
      *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
      *(undefined2 *)(puVar1 + 3) = param_2;
    }
    local_58[0] = &LAB_1410c5730;
    FUN_14208c4f0(param_1,local_58);
  }
  return;
}



// FUNCTION 1410ed500 FUN_1410ed500 body=587 status=ok
// SIG undefined FUN_1410ed500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410ed500(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_608 [32];
  undefined8 *local_5e8;
  undefined1 local_5d8 [8];
  undefined1 local_5d0 [8];
  longlong *local_5c8;
  undefined1 local_5b8 [8];
  longlong *local_5b0;
  undefined8 local_5a0;
  undefined1 local_598;
  undefined1 local_590 [608];
  undefined8 local_330;
  undefined8 local_328;
  undefined1 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e4;
  longlong local_2d8;
  undefined4 local_2d0;
  undefined8 local_2c8;
  longlong local_1c0;
  undefined8 local_1b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_608;
  *(longlong *)(param_1 + 400) = param_2;
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0x178) != 0) {
      FUN_142088cf0(*(longlong *)(param_1 + 0x178),param_2 + 0x58);
    }
    if (*(longlong *)(param_1 + 0x180) != 0) {
      FText::FText(local_5d0);
      FText::FText(local_5b8);
      local_5e8 = &local_5a0;
      local_598 = 1;
      local_5a0 = 0;
      local_330 = 0;
      local_328 = 0;
      local_320 = 1;
      local_318 = 0;
      local_310 = 0;
      local_2f8 = 0;
      local_2f0 = 0;
      local_2e8 = 0xffffffff;
      local_2e4 = 0;
      local_2d8 = 0;
      local_2d0 = 0;
      local_2c8 = 0;
      local_1c0 = 0;
      local_1b8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_20 = 0;
      local_18 = 0;
      (**(code **)(**(longlong **)(param_1 + 400) + 0x2a8))
                (*(longlong **)(param_1 + 400),local_5d0,local_5b8,local_5d8);
      (**(code **)(**(longlong **)(param_1 + 0x180) + 0x2b0))
                (*(longlong **)(param_1 + 0x180),local_5d0,1,0);
      if (local_20 != 0) {
        FMemory::Free();
      }
      if (local_b0 != 0) {
        FMemory::Free();
      }
      if (local_1c0 != 0) {
        FMemory::Free();
      }
      local_2d0 = 0;
      if (local_2d8 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_318);
      FUN_14099aac0(local_590);
      if (local_5b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_5b0 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_5b0)(local_5b0);
          LOCK();
          piVar2 = (int *)((longlong)local_5b0 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_5b0 + 8))(local_5b0,1);
          }
        }
      }
      if (local_5c8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_5c8 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_5c8)(local_5c8);
          LOCK();
          piVar2 = (int *)((longlong)local_5c8 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_5c8 + 8))(local_5c8,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1410ed750 FUN_1410ed750 body=632 status=ok
// SIG undefined FUN_1410ed750(void)

void FUN_1410ed750(longlong param_1)

{
  longlong local_18 [2];
  
  local_18[1] = 0x14;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"TXT_Status_Subtitle",0x28);
  FUN_1410ebef0(param_1,*(undefined8 *)(param_1 + 0x790),local_18,param_1 + 0x6a8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"TXT_StatLabel_01",0x22);
  FUN_1410ebef0(param_1,*(undefined8 *)(param_1 + 0x790),local_18,param_1 + 0x6c0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"TXT_StatLabel_02",0x22);
  FUN_1410ebef0(param_1,*(undefined8 *)(param_1 + 0x790),local_18,param_1 + 0x6d8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"TXT_StatLabel_03",0x22);
  FUN_1410ebef0(param_1,*(undefined8 *)(param_1 + 0x790),local_18,param_1 + 0x6f0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"TXT_StatLabel_04",0x22);
  FUN_1410ebef0(param_1,*(undefined8 *)(param_1 + 0x790),local_18,param_1 + 0x708);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"TXT_StatLabel_05",0x22);
  FUN_1410ebef0(param_1,*(undefined8 *)(param_1 + 0x790),local_18,param_1 + 0x720);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"TXT_StatLabel_06",0x22);
  FUN_1410ebef0(param_1,*(undefined8 *)(param_1 + 0x790),local_18,param_1 + 0x738);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410ed9d0 FUN_1410ed9d0 body=92 status=ok
// SIG undefined FUN_1410ed9d0(void)

void FUN_1410ed9d0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  *(longlong *)(param_1 + 0x6e0) = param_2;
  if (param_2 != 0) {
    local_28 = 0;
    local_18 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = param_1;
      *puVar1 = &PTR_FUN_143f77b70;
    }
    local_58[0] = &LAB_1410c55e0;
    FUN_14204c280(local_58);
  }
  return;
}



// FUNCTION 1410eda30 FUN_1410eda30 body=674 status=ok
// SIG undefined FUN_1410eda30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410eda30(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  longlong lVar10;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  longlong lStack_120;
  undefined4 *local_118;
  ulonglong *puStack_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [24];
  undefined4 local_98 [2];
  longlong local_90;
  undefined1 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined1 local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if (*(longlong **)(param_1 + 0x178) != (longlong *)0x0) {
    if (param_3 < 1) {
      lVar10 = **(longlong **)(param_1 + 0x178);
      uVar7 = FUN_1404b03b0();
      (**(code **)(lVar10 + 0x2b0))(*(undefined8 *)(param_1 + 0x178),uVar7,1,0);
    }
    else {
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_c8,L"{0}/{1} Unlocked",L"GFxCatchARideMenu",L"NumUnlocked");
      puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_b0,uVar7);
      local_98[0] = 0;
      local_70 = 0;
      local_68 = 0;
      local_40 = 0;
      local_118 = local_98;
      puStack_110 = local_38;
      local_128 = *puVar8;
      lStack_120 = puVar8[1];
      if (lStack_120 != 0) {
        LOCK();
        *(int *)(lStack_120 + 8) = *(int *)(lStack_120 + 8) + 1;
        UNLOCK();
      }
      local_90 = (longlong)param_2;
      local_60 = (longlong)param_3;
      uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_108,&local_118);
      uVar7 = FText::Format(local_e0,&local_128,uVar7);
      FText::FText(local_f8,uVar7);
      if (local_d8 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_d8 + 1;
        lVar10 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_d8)(local_d8);
          LOCK();
          piVar1 = (int *)((longlong)local_d8 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_d8 + 8))(local_d8,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_108);
      lVar10 = 2;
      pcVar9 = &stack0xfffffffffffffff0;
      do {
        lVar10 = lVar10 + -1;
        pcVar2 = pcVar9 + -0x30;
        if (*pcVar2 != '\0') {
          *pcVar2 = '\0';
          plVar5 = *(longlong **)(pcVar9 + -0x40);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar5 + 1;
            lVar6 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
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
        pcVar9 = pcVar2;
      } while (lVar10 != 0);
      plVar5 = (longlong *)puVar8[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar5 + 1;
        lVar10 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
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
      (**(code **)(**(longlong **)(param_1 + 0x178) + 0x2b0))
                (*(longlong **)(param_1 + 0x178),local_f8,1,0);
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_f0 + 1;
        lVar10 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar1 = (int *)((longlong)local_f0 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_f0 + 8))(local_f0,1);
          }
        }
      }
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_c0 + 1;
        lVar10 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_c0)(local_c0);
          LOCK();
          piVar1 = (int *)((longlong)local_c0 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_c0 + 8))(local_c0,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1410edce0 FUN_1410edce0 body=220 status=ok
// SIG undefined FUN_1410edce0(void)

void FUN_1410edce0(longlong param_1,char param_2)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  longlong local_18 [2];
  
  *(char *)(param_1 + 0x1a9) = param_2;
  if (*(char *)(param_1 + 0x1b4) == '\0') {
    if (param_2 == '\0') {
      local_18[1] = 6;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      uVar2 = 0xc;
      pwVar1 = L"skill";
    }
    else if (param_2 == '\x01') {
      local_18[1] = 10;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      uVar2 = 0x14;
      pwVar1 = L"inventory";
    }
    else {
      if (param_2 != '\x02') {
        return;
      }
      local_18[1] = 5;
      local_18[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      uVar2 = 10;
      pwVar1 = L"stat";
    }
    FGenericPlatformString::Memcpy(local_18[0],pwVar1,uVar2);
    FUN_142088910(param_1,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1410eddc0 FUN_1410eddc0 body=2179 status=ok
// SIG undefined FUN_1410eddc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410eddc0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined1 auStack_4d8 [32];
  longlong *local_4b8;
  longlong local_4a8;
  longlong *plStack_4a0;
  undefined8 local_498;
  longlong *local_490;
  longlong local_488;
  longlong *local_480;
  longlong local_478 [2];
  undefined2 local_468 [4];
  longlong local_460 [2];
  undefined1 local_450 [8];
  longlong *local_448;
  undefined **local_438;
  undefined8 local_430;
  longlong local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_408;
  undefined1 local_400 [24];
  undefined1 local_3e8 [24];
  undefined4 local_3d0;
  undefined8 local_3cc;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined1 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398 [2];
  undefined8 local_388;
  longlong local_380;
  longlong *local_378;
  longlong *local_370;
  undefined1 local_368 [8];
  longlong *local_360;
  undefined1 local_358 [8];
  longlong *local_350;
  undefined1 local_348 [8];
  longlong *local_340;
  undefined1 local_338 [8];
  longlong *local_330;
  undefined1 local_328 [8];
  longlong *local_320;
  undefined1 local_318 [8];
  longlong *local_310;
  undefined1 local_308 [8];
  longlong *local_300;
  undefined1 local_2f8 [8];
  longlong *local_2f0;
  undefined1 local_2e8 [8];
  longlong *local_2e0;
  undefined1 local_2d8 [8];
  longlong *local_2d0;
  undefined1 local_2c8 [8];
  longlong *local_2c0;
  longlong local_2b0;
  longlong *plStack_2a8;
  undefined1 local_298 [592];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_4d8;
  local_408 = 0;
  FText::FText(local_400);
  FText::FText(local_3e8);
  local_3b8 = 0;
  local_3c0 = 0;
  local_3b0 = 0;
  local_3d0 = 0xffffffff;
  local_3cc = 0;
  local_4a8 = 0;
  local_3a8 = 0;
  local_3a0 = 0;
  local_398[0] = 0;
  local_468[0] = 0;
  local_460[0] = 0;
  local_460[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_460,0);
  FGenericPlatformString::Memcpy(local_460[0],L"empty",0xc);
  FText::FText(local_450);
  *(undefined1 *)(param_1 + 0x1b4) = 0;
  FUN_1410edce0(param_1,*(undefined1 *)(param_1 + 0x1a9));
  lVar8 = *(longlong *)(param_1 + 0x38);
  local_468[0] = CONCAT11(local_468[0]._1_1_,1);
  if (lVar8 != 0) {
    lVar7 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (((bVar4) && (lVar8 = FUN_140f9aee0(lVar8), lVar8 != 0)) && (lVar7 = *param_2, lVar7 != 0)) {
      plVar12 = (longlong *)(param_1 + 0x1b8);
      plVar3 = (longlong *)param_2[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      local_4a8 = lVar7;
      plStack_4a0 = plVar3;
      if (&local_4a8 != plVar12) {
        local_4a8 = *plVar12;
        plStack_4a0 = *(longlong **)(param_1 + 0x1c0);
        *plVar12 = lVar7;
        *(longlong **)(param_1 + 0x1c0) = plVar3;
        local_2b0 = lVar7;
        plStack_2a8 = plVar3;
      }
      plVar12 = plStack_4a0;
      if (plStack_4a0 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_4a0 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_4a0)(plStack_4a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plStack_4a0 + 8))(plStack_4a0,1);
          }
        }
      }
      puVar9 = (undefined8 *)
               (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_368);
      local_490 = (longlong *)puVar9[1];
      local_3a0 = *puVar9;
      if (local_490 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_490 + 1) = (int)local_490[1] + 1;
        UNLOCK();
      }
      local_498 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(local_398,&local_490);
      plVar12 = local_490;
      if (local_490 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_490 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_490)(local_490);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_490 + 8))(local_490,1);
          }
        }
      }
      if (local_360 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_360 + 1;
        lVar7 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_360)(local_360);
          LOCK();
          piVar1 = (int *)((longlong)local_360 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_360 + 8))(local_360,1);
          }
        }
      }
      uVar11 = *(undefined8 *)(lVar8 + 0x478);
      local_478[0] = 0;
      local_478[1] = 0;
      uVar10 = (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_358);
      local_4b8 = local_478;
      cVar6 = FUN_140d79f00(uVar11,uVar10,1);
      if (local_350 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_350 + 1;
        lVar7 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_350)(local_350);
          LOCK();
          piVar1 = (int *)((longlong)local_350 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_350 + 8))(local_350,1);
          }
        }
      }
      if (cVar6 == '\0') {
        uVar11 = *(undefined8 *)(lVar8 + 0x478);
        uVar10 = (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_348);
        FUN_140d938f0(uVar11,uVar10);
        plVar12 = local_340;
      }
      else {
        uVar11 = FText::FromString(local_2c8,local_478);
        FText::operator=(local_400,uVar11);
        plVar12 = local_2c0;
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar12 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      lVar7 = *(longlong *)(lVar8 + 0x478);
      uVar11 = (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_338);
      FUN_140d84620(lVar7 + 0x1f8,&local_378,uVar11);
      if (local_330 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_330 + 1;
        lVar7 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_330)(local_330);
          LOCK();
          piVar1 = (int *)((longlong)local_330 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_330 + 8))(local_330,1);
          }
        }
      }
      if (local_378 == (longlong *)0x0) {
        lVar7 = *(longlong *)(lVar8 + 0x478);
        uVar11 = (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_328);
        FUN_140d94190(lVar7 + 0x1f8,uVar11);
        if (local_320 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_320 + 1;
          lVar7 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_320)(local_320);
            LOCK();
            piVar1 = (int *)((longlong)local_320 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_320 + 8))(local_320,1);
            }
          }
        }
      }
      else {
        local_408 = (**(code **)(*local_378 + 0x10))();
      }
      uVar11 = (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_318);
      uVar10 = FUN_140bb7440(lVar8);
      FUN_140d80bd0(uVar10,&local_488,uVar11);
      if (local_310 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_310 + 1;
        lVar7 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_310)(local_310);
          LOCK();
          piVar1 = (int *)((longlong)local_310 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_310 + 8))(local_310,1);
          }
        }
      }
      if (local_488 == 0) {
        puVar9 = (undefined8 *)
                 (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_308);
        local_388 = *puVar9;
        local_380 = puVar9[1];
        if (local_380 != 0) {
          LOCK();
          *(int *)(local_380 + 8) = *(int *)(local_380 + 8) + 1;
          UNLOCK();
        }
        lVar7 = FUN_14244c070(lVar8,&local_388);
        if (local_300 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_300 + 1;
          lVar5 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_300)(local_300);
            LOCK();
            piVar1 = (int *)((longlong)local_300 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_300 + 8))(local_300,1);
            }
          }
        }
        if (lVar7 == 0) {
          lVar7 = (**(code **)(*(longlong *)*param_2 + 0x38))();
          if ((*(byte *)(lVar7 + 0x10) & 4) == 0) {
            uVar11 = (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_2d8);
            uVar10 = FUN_140bb73a0(lVar8);
            plVar12 = (longlong *)FUN_140d78d50(uVar10,local_2e8,uVar11);
            if (&local_488 != plVar12) {
              local_488 = *plVar12;
              *plVar12 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(&local_480,plVar12 + 1);
            }
            if (local_2e0 != (longlong *)0x0) {
              LOCK();
              plVar12 = local_2e0 + 1;
              lVar7 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*local_2e0)(local_2e0);
                LOCK();
                piVar1 = (int *)((longlong)local_2e0 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*local_2e0 + 8))(local_2e0,1);
                }
              }
            }
            if (local_2d0 != (longlong *)0x0) {
              LOCK();
              plVar12 = local_2d0 + 1;
              lVar7 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*local_2d0)(local_2d0);
                LOCK();
                piVar1 = (int *)((longlong)local_2d0 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*local_2d0 + 8))(local_2d0,1);
                }
              }
            }
            if (local_488 == 0) {
              FUN_1410ee780(param_1,&local_408,local_468);
            }
            else {
              local_4b8 = (longlong *)local_468;
              FUN_1410efe00(param_1,lVar8,local_488,&local_408);
            }
          }
          else {
            local_4b8 = (longlong *)local_468;
            FUN_1410f00e0(param_1,lVar8,lVar7,&local_408);
          }
        }
        else {
          FUN_140d63d70(local_298);
          puVar9 = (undefined8 *)
                   (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_2f8);
          local_430 = *puVar9;
          local_428 = puVar9[1];
          if (local_428 != 0) {
            LOCK();
            *(int *)(local_428 + 8) = *(int *)(local_428 + 8) + 1;
            UNLOCK();
          }
          local_420 = 0;
          local_438 = &PTR_FUN_143f740c8;
          local_418 = 0;
          FUN_140d89730(local_298,&local_438,lVar8,0);
          FUN_1404bf980(&local_438);
          if (local_2f0 != (longlong *)0x0) {
            LOCK();
            plVar12 = local_2f0 + 1;
            lVar7 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*local_2f0)(local_2f0);
              LOCK();
              piVar1 = (int *)((longlong)local_2f0 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*local_2f0 + 8))(local_2f0,1);
              }
            }
          }
          local_4b8 = (longlong *)local_468;
          FUN_1410efe00(param_1,lVar8,local_298,&local_408);
          FUN_140d65bc0(local_298);
        }
      }
      else {
        local_4b8 = (longlong *)local_468;
        FUN_1410efe00(param_1,lVar8,local_488,&local_408);
      }
      if (local_480 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_480 + 1;
        lVar8 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_480)(local_480);
          LOCK();
          piVar1 = (int *)((longlong)local_480 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_480 + 8))(local_480,1);
          }
        }
      }
      if (local_370 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_370 + 1;
        lVar8 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_370)(local_370);
          LOCK();
          piVar1 = (int *)((longlong)local_370 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_370 + 8))(local_370,1);
          }
        }
      }
      if (local_478[0] != 0) {
        FMemory::Free();
      }
    }
  }
  if (local_448 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_448 + 1;
    lVar8 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_448)(local_448);
      LOCK();
      piVar1 = (int *)((longlong)local_448 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_448 + 8))(local_448,1);
      }
    }
  }
  if (local_460[0] != 0) {
    FMemory::Free();
  }
  FUN_1410b44f0(&local_408);
  return;
}



// FUNCTION 1410ee650 FUN_1410ee650 body=101 status=ok
// SIG undefined FUN_1410ee650(void)

void FUN_1410ee650(longlong param_1)

{
  longlong local_18 [2];
  
  *(undefined1 *)(param_1 + 0x1b4) = 1;
  local_18[1] = 4;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],&DAT_14469f1b0,8);
  FUN_142088910(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410ee6c0 FUN_1410ee6c0 body=178 status=ok
// SIG undefined FUN_1410ee6c0(void)

void FUN_1410ee6c0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  FWeakObjectPtr::operator=(&local_res18);
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_38 = 0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605c80;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
    *(undefined4 *)(puVar1 + 3) = local_res18;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = local_res1c;
  }
  local_68[0] = &LAB_1410c54b0;
  FUN_14204c280(local_68);
  return;
}



// FUNCTION 1410ee780 FUN_1410ee780 body=405 status=ok
// SIG undefined FUN_1410ee780(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410ee780(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_158 [32];
  undefined **local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  wchar_t *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
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
  undefined8 local_50;
  undefined1 local_48;
  undefined4 local_47;
  undefined2 local_43;
  undefined1 local_41;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_118 = (wchar_t *)0x0;
  local_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_118,8);
  iVar1 = (int)local_110 + 8;
  local_110 = CONCAT44(local_110._4_4_,iVar1);
  if (local_110._4_4_ < iVar1) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118);
  }
  builtin_wcsncpy(local_118,L"unknown",8);
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_1410f1ee0(*(longlong *)(param_1 + 0x188),&local_128);
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    local_108 = 0;
    local_47 = 0;
    local_43 = 0;
    local_41 = 0;
    local_48 = 0;
    local_100 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
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
    FUN_1410f0900(*(longlong *)(param_1 + 400),&local_108);
    FUN_1410b4430(&local_108);
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1410cea10(*(longlong *)(param_1 + 0x180),param_3,param_1);
  }
  local_130 = 0;
  local_138 = &PTR_FUN_1445306f0;
  FUN_1410f0390(param_1,&local_138,0,0);
  FUN_1410f16e0(param_1,param_2);
  if (local_118 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410ee920 FUN_1410ee920 body=679 status=ok
// SIG undefined FUN_1410ee920(void)

void FUN_1410ee920(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_38;
  int local_30;
  longlong *local_28;
  int local_20;
  
  if (param_2 == '\0') {
    FUN_142f06340(param_1,param_1 + 0x170);
    *(undefined8 *)(param_1 + 0x170) = 0;
    FUN_142f06340(param_1,param_1 + 0x178);
    *(undefined8 *)(param_1 + 0x178) = 0;
    FUN_142f06340(param_1,param_1 + 0x180);
    *(undefined8 *)(param_1 + 0x180) = 0;
    return;
  }
  local_38 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_30 = 3;
  local_38 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_143f4d290;
    FWeakObjectPtr::operator=(plVar1 + 1,param_1);
    plVar1[2] = (longlong)FUN_1410de8e0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_143f4d2d8;
  }
  FUN_142ee1c00(param_1,PTR_s_rollOut_1462a0420,param_1 + 0x170,&local_38);
  if (local_30 == 0) {
LAB_1410ee9f6:
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
    goto LAB_1410ee9f6;
  }
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_143f4d290;
    FWeakObjectPtr::operator=(plVar1 + 1,param_1);
    plVar1[2] = (longlong)FUN_1410de880;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_143f4d2d8;
  }
  FUN_142ee1c00(param_1,PTR_s_mouseDown_1462a0398,param_1 + 0x178,&local_28);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) goto LAB_1410eeaae;
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
LAB_1410eeaae:
  local_38 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_30 = 3;
  local_38 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_FUN_143f4d290;
    FWeakObjectPtr::operator=(plVar1 + 1,param_1);
    plVar1[2] = (longlong)FUN_1410de8e0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_FUN_143f4d2d8;
  }
  FUN_142ee1c00(param_1,PTR_s_mouseUp_1462a0428,param_1 + 0x180,&local_38);
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
  if (local_38 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(local_38);
  return;
}



// FUNCTION 1410eebd0 FUN_1410eebd0 body=4314 status=ok
// SIG undefined FUN_1410eebd0(void)

void FUN_1410eebd0(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 local_338;
  undefined8 uStack_330;
  code *local_328;
  ulonglong uStack_320;
  longlong local_318;
  undefined8 local_310;
  longlong *local_308;
  undefined8 local_300;
  longlong local_2f8;
  undefined8 local_2f0;
  longlong *local_2e8;
  undefined8 local_2e0;
  longlong *local_2d8;
  undefined8 local_2d0;
  longlong *local_2c8;
  undefined8 local_2c0;
  longlong local_2b8;
  undefined8 local_2b0;
  longlong *local_2a8;
  undefined8 local_2a0;
  longlong local_298;
  undefined8 local_290;
  longlong *local_288;
  undefined8 local_280;
  longlong local_278;
  undefined8 local_270;
  longlong *local_268;
  undefined8 local_260;
  longlong local_258;
  undefined8 local_250;
  longlong *local_248;
  undefined8 local_240;
  longlong local_238;
  undefined8 local_230;
  longlong local_228;
  undefined8 local_220;
  longlong *local_218;
  undefined8 local_210;
  longlong local_208;
  undefined8 local_200;
  longlong *local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong *local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  longlong *local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  longlong *local_68;
  longlong *local_58;
  
  local_2b0 = 0xe;
  local_2b8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,0);
  FGenericPlatformString::Memcpy(local_2b8,L"mouseDragArea",0x1c);
  local_2c8 = (longlong *)0x0;
  local_2c0 = 0;
  FUN_1410b0750(param_1,param_1 + 0x1130,&local_2b8,0,6,&local_2c8);
  plVar6 = local_2c8;
  for (iVar9 = (int)local_2c0; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_2c8 != (longlong *)0x0) {
    FMemory::Free(local_2c8);
  }
  if (local_2b8 != 0) {
    FMemory::Free();
  }
  *(longlong *)(param_1 + 0x1078) = *(longlong *)(param_1 + 0x600);
  if (*(longlong *)(param_1 + 0x600) != 0) {
    local_298 = 0;
    local_290 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,0);
    FGenericPlatformString::Memcpy(local_298,L"debugLoadoutText",0x22);
    local_2a8 = (longlong *)0x0;
    local_2a0 = 0;
    FUN_140e99270(*(undefined8 *)(param_1 + 0x1078),param_1 + 0x1070,&local_298,0,6,&local_2a8);
    plVar6 = local_2a8;
    for (iVar9 = (int)local_2a0; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_2a8 != (longlong *)0x0) {
      FMemory::Free(local_2a8);
    }
    if (local_298 != 0) {
      FMemory::Free();
    }
    plVar6 = *(longlong **)(param_1 + 0x1070);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x278))(plVar6,*(undefined1 *)(param_1 + 0xbf0));
    }
    local_228 = 0;
    local_220 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,0);
    FGenericPlatformString::Memcpy(local_228,L"statCard",0x12);
    local_288 = (longlong *)0x0;
    local_280 = 0;
    FUN_1410b03e0(*(undefined8 *)(param_1 + 0x1078),param_1 + 0x1088,&local_228,0,6,&local_288);
    plVar6 = local_288;
    for (iVar9 = (int)local_280; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_288 != (longlong *)0x0) {
      FMemory::Free(local_288);
    }
    if (local_228 != 0) {
      FMemory::Free();
    }
    local_258 = 0;
    local_250 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_258,0);
    FGenericPlatformString::Memcpy(local_258,L"customizationMC",0x20);
    local_268 = (longlong *)0x0;
    local_260 = 0;
    FUN_1410afd00(*(undefined8 *)(param_1 + 0x1078),param_1 + 0x10e0,&local_258,0,6,&local_268);
    plVar6 = local_268;
    for (iVar9 = (int)local_260; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_268 != (longlong *)0x0) {
      FMemory::Free(local_268);
    }
    if (local_258 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x10e0) != 0) {
      local_238 = 0;
      local_230 = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,0);
      FGenericPlatformString::Memcpy(local_238,L"scrollBar",0x14);
      local_248 = (longlong *)0x0;
      local_240 = 0;
      local_c8 = 0;
      FUN_140e98f00(*(undefined8 *)(param_1 + 0x10e0),param_1 + 0x1170,&local_238,0,6,&local_248);
      plVar6 = local_248;
      for (iVar9 = (int)local_240; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 2;
      }
      if (local_248 != (longlong *)0x0) {
        FMemory::Free(local_248);
      }
      if (local_238 != 0) {
        FMemory::Free();
      }
      lVar12 = *(longlong *)(param_1 + 0x7f0);
      lVar11 = (longlong)*(int *)(param_1 + 0x7f8) * 0x198 + lVar12;
      for (; lVar12 != lVar11; lVar12 = lVar12 + 0x198) {
        plVar6 = (longlong *)(lVar12 + 400);
        if (*plVar6 == 0) {
          local_128 = (longlong *)0x0;
          local_120 = 0;
          local_f0 = 0;
          FUN_1410b2440(*(undefined8 *)(param_1 + 0x10e0),plVar6,lVar12,0,6,&local_128);
          plVar10 = local_128;
          for (iVar9 = (int)local_120; iVar9 != 0; iVar9 = iVar9 + -1) {
            if (*plVar10 != 0) {
              FMemory::Free();
            }
            plVar10 = plVar10 + 2;
          }
          if (local_128 != (longlong *)0x0) {
            FMemory::Free(local_128);
          }
          if (*plVar6 != 0) {
            cVar3 = FUN_142ebdd70(param_1);
            lVar8 = 0x10;
            if (cVar3 != '\0') {
              lVar8 = 0xd0;
            }
            FUN_142ef29a0(*plVar6,lVar8 + lVar12);
            *(undefined1 *)(*plVar6 + 0x1c8) = 0;
            local_118 = 0;
            local_110 = 0;
            local_108 = 0;
            local_100 = 0;
            FWeakObjectPtr::operator=(&local_118,0);
            FWeakObjectPtr::operator=(&local_110,0);
            FWeakObjectPtr::operator=(&local_108,0);
            FWeakObjectPtr::operator=(&local_100,0);
            pcVar2 = (code *)*plVar6;
            uStack_320 = 0;
            uVar5 = 0;
            local_328 = pcVar2;
            if (pcVar2 != (code *)0x0) {
              uVar4 = UBlendableInterface::GetPrivateStaticClass();
              uVar5 = UObjectBaseUtility::GetInterfaceAddress(pcVar2,uVar4);
            }
            uStack_320 = uVar5;
            FUN_142ecfd10(param_1,&local_328,&local_118);
          }
        }
      }
      local_208 = 0;
      local_200 = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
      FGenericPlatformString::Memcpy(local_208,L"colorChooser",0x1a);
      local_218 = (longlong *)0x0;
      local_210 = 0;
      local_f8 = 0;
      FUN_1410af990(*(undefined8 *)(param_1 + 0x10e0),param_1 + 0x10f0,&local_208,0,6,&local_218);
      plVar6 = local_218;
      for (iVar9 = (int)local_210; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 2;
      }
      if (local_218 != (longlong *)0x0) {
        FMemory::Free(local_218);
      }
      if (local_208 != 0) {
        FMemory::Free();
      }
      lVar12 = *(longlong *)(param_1 + 0x10f0);
      if (lVar12 != 0) {
        uStack_330 = uStack_330 & 0xffffffff00000000;
        local_338 = FUN_1410df600;
        plVar10 = (longlong *)(lVar12 + 0x180);
        plVar6 = (longlong *)FMemory::Realloc(0,0x30);
        local_68 = plVar6;
        if (plVar6 != (longlong *)0x0) {
          *plVar6 = (longlong)&PTR_FUN_14465fb20;
          FWeakObjectPtr::operator=(plVar6 + 1,param_1);
          *(undefined4 *)(plVar6 + 2) = (undefined4)local_338;
          *(undefined4 *)((longlong)plVar6 + 0x14) = local_338._4_4_;
          *(undefined4 *)(plVar6 + 3) = (undefined4)uStack_330;
          *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_330._4_4_;
          lVar11 = FDelegateHandle::GenerateNewID();
          plVar6[5] = lVar11;
          *plVar6 = (longlong)&PTR_FUN_14465fb68;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
          (**(code **)(*plVar6 + 0x20))(plVar6,local_d0);
          iVar9 = *(int *)(lVar12 + 0x188);
          *(int *)(lVar12 + 0x188) = iVar9 + 1;
          if (*(int *)(lVar12 + 0x18c) < iVar9 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar9);
          }
          puVar7 = (undefined8 *)((longlong)iVar9 * 0x10 + *plVar10);
          *puVar7 = plVar6;
          *(undefined4 *)(puVar7 + 1) = 3;
        }
        lVar12 = *(longlong *)(param_1 + 0x10f0);
        local_338 = FUN_1410d41b0;
        uStack_330 = uStack_330 & 0xffffffff00000000;
        plVar10 = (longlong *)(lVar12 + 0x198);
        plVar6 = (longlong *)FMemory::Realloc(0,0x30);
        local_58 = plVar6;
        if (plVar6 != (longlong *)0x0) {
          *plVar6 = (longlong)&PTR_FUN_14465fb20;
          FWeakObjectPtr::operator=(plVar6 + 1,param_1);
          *(undefined4 *)(plVar6 + 2) = (undefined4)local_338;
          *(undefined4 *)((longlong)plVar6 + 0x14) = local_338._4_4_;
          *(undefined4 *)(plVar6 + 3) = (undefined4)uStack_330;
          *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_330._4_4_;
          lVar11 = FDelegateHandle::GenerateNewID();
          plVar6[5] = lVar11;
          *plVar6 = (longlong)&PTR_FUN_14465fb68;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
          (**(code **)(*plVar6 + 0x20))(plVar6,local_d8);
          iVar9 = *(int *)(lVar12 + 0x1a0);
          *(int *)(lVar12 + 0x1a0) = iVar9 + 1;
          if (*(int *)(lVar12 + 0x1a4) < iVar9 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar9);
          }
          puVar7 = (undefined8 *)((longlong)iVar9 * 0x10 + *plVar10);
          *puVar7 = plVar6;
          *(undefined4 *)(puVar7 + 1) = 3;
        }
      }
    }
    local_1e8 = 0;
    local_1e0 = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
    FGenericPlatformString::Memcpy(local_1e8,L"menuTitle.menuLabel",0x28);
    local_1f8 = (longlong *)0x0;
    local_1f0 = 0;
    local_e0 = 0;
    FUN_140e99270(*(undefined8 *)(param_1 + 0x1078),param_1 + 0x1080,&local_1e8,0,6,&local_1f8);
    plVar6 = local_1f8;
    for (iVar9 = (int)local_1f0; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_1f8 != (longlong *)0x0) {
      FMemory::Free(local_1f8);
    }
    if (local_1e8 != 0) {
      FMemory::Free();
    }
    if (*(longlong **)(param_1 + 0x1080) != (longlong *)0x0) {
      lVar12 = **(longlong **)(param_1 + 0x1080);
      uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_98,L"Catch-A-Ride",L"GFxCatchARideMenu",L"CatchARideTitle");
      (**(code **)(lVar12 + 0x2b0))(*(undefined8 *)(param_1 + 0x1080),uVar4,1,0);
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_90 + 1;
        lVar12 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar1 = (int *)((longlong)local_90 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_90 + 8))(local_90,1);
          }
        }
      }
    }
    local_1c8 = 0;
    local_1c0 = 0x29;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
    FGenericPlatformString::Memcpy(local_1c8,L"loadoutOptions.loadoutHeader.loadoutName",0x52);
    local_1d8 = (longlong *)0x0;
    local_1d0 = 0;
    local_e8 = 0;
    FUN_140e99270(*(undefined8 *)(param_1 + 0x1078),param_1 + 0x10b0,&local_1c8,0,6,&local_1d8);
    plVar6 = local_1d8;
    for (iVar9 = (int)local_1d0; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_1d8 != (longlong *)0x0) {
      FMemory::Free(local_1d8);
    }
    if (local_1c8 != 0) {
      FMemory::Free();
    }
    if (*(longlong **)(param_1 + 0x10b0) != (longlong *)0x0) {
      lVar12 = **(longlong **)(param_1 + 0x10b0);
      uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_80,L"No Loadouts",L"GFxCatchARideMenu",L"NoLoadoutName");
      (**(code **)(lVar12 + 0x2b0))(*(undefined8 *)(param_1 + 0x10b0),uVar4,1,0);
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_78 + 1;
        lVar12 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar1 = (int *)((longlong)local_78 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_78 + 8))(local_78,1);
          }
        }
      }
    }
    local_278 = 0;
    local_270 = 0x27;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_278,0);
    FGenericPlatformString::Memcpy(local_278,L"loadoutOptions.loadoutHeader.slotLabel",0x4e);
    local_2d8 = (longlong *)0x0;
    local_2d0 = 0;
    FUN_140e99270(*(undefined8 *)(param_1 + 0x1078),param_1 + 0x10b8,&local_278,0,6,&local_2d8);
    plVar6 = local_2d8;
    for (iVar9 = (int)local_2d0; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_2d8 != (longlong *)0x0) {
      FMemory::Free(local_2d8);
    }
    if (local_278 != 0) {
      FMemory::Free();
    }
    local_2f8 = 0;
    local_2f0 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2f8,0);
    FGenericPlatformString::Memcpy(local_2f8,L"deployAnim",0x16);
    local_2e8 = (longlong *)0x0;
    local_2e0 = 0;
    FUN_140e98b90(*(undefined8 *)(param_1 + 0x1078),param_1 + 0x10f8,&local_2f8,0,6,&local_2e8);
    plVar6 = local_2e8;
    for (iVar9 = (int)local_2e0; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_2e8 != (longlong *)0x0) {
      FMemory::Free(local_2e8);
    }
    if (local_2f8 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x10f8) != 0) {
      local_318 = 0;
      local_310 = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_318,0);
      FGenericPlatformString::Memcpy(local_318,L"deployText",0x16);
      local_308 = (longlong *)0x0;
      local_300 = 0;
      FUN_140e99270(*(undefined8 *)(param_1 + 0x10f8),param_1 + 0x1100,&local_318,0,6,&local_308);
      plVar6 = local_308;
      for (iVar9 = (int)local_300; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 2;
      }
      if (local_308 != (longlong *)0x0) {
        FMemory::Free(local_308);
      }
      if (local_318 != 0) {
        FMemory::Free();
      }
      plVar6 = *(longlong **)(param_1 + 0x1100);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x2b0))(plVar6,param_1 + 0x1140,1,0);
      }
    }
    local_1b8 = 0;
    local_1b0 = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
    FGenericPlatformString::Memcpy(local_1b8,L"newBodyNotification",0x28);
    local_138 = (longlong *)0x0;
    local_130 = 0;
    FUN_140e98b90(*(undefined8 *)(param_1 + 0x1078),param_1 + 0x1108,&local_1b8,0,6,&local_138);
    plVar6 = local_138;
    for (iVar9 = (int)local_130; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_138 != (longlong *)0x0) {
      FMemory::Free(local_138);
    }
    if (local_1b8 != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x1108) != 0) {
      local_198 = 0;
      local_190 = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
      FGenericPlatformString::Memcpy(local_198,L"bodyUnlockedText",0x22);
      local_1a8 = (longlong *)0x0;
      local_1a0 = 0;
      FUN_140e99270(*(undefined8 *)(param_1 + 0x1108),param_1 + 0x1110,&local_198,0,6,&local_1a8);
      plVar6 = local_1a8;
      for (iVar9 = (int)local_1a0; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 2;
      }
      if (local_1a8 != (longlong *)0x0) {
        FMemory::Free(local_1a8);
      }
      if (local_198 != 0) {
        FMemory::Free();
      }
      local_178 = 0;
      local_170 = 0x13;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
      FGenericPlatformString::Memcpy(local_178,L"bodyUnlockedTextDs",0x26);
      local_188 = (longlong *)0x0;
      local_180 = 0;
      FUN_140e99270(*(undefined8 *)(param_1 + 0x1108),param_1 + 0x1118,&local_178,0,6,&local_188);
      plVar6 = local_188;
      for (iVar9 = (int)local_180; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 2;
      }
      if (local_188 != (longlong *)0x0) {
        FMemory::Free(local_188);
      }
      if (local_178 != 0) {
        FMemory::Free();
      }
      plVar6 = *(longlong **)(param_1 + 0x1110);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x2b0))(plVar6,param_1 + 0x1158,1,0);
      }
      plVar6 = *(longlong **)(param_1 + 0x1118);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x2b0))(plVar6,param_1 + 0x1158,1,0);
      }
      local_158 = 0;
      local_150 = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
      FGenericPlatformString::Memcpy(local_158,L"bodyNameText",0x1a);
      local_168 = (longlong *)0x0;
      local_160 = 0;
      FUN_140e99270(*(undefined8 *)(param_1 + 0x1108),param_1 + 0x1120,&local_158,0,6,&local_168);
      plVar6 = local_168;
      for (iVar9 = (int)local_160; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 2;
      }
      if (local_168 != (longlong *)0x0) {
        FMemory::Free(local_168);
      }
      if (local_158 != 0) {
        FMemory::Free();
      }
    }
    local_338 = (code *)0x0;
    uStack_330 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_338,0);
    FGenericPlatformString::Memcpy(local_338,L"tutorialWrapper",0x20);
    local_148 = (longlong *)0x0;
    local_140 = 0;
    FUN_140f157a0(*(undefined8 *)(param_1 + 0x1078),param_1 + 0x1048,&local_338,0,6,&local_148);
    plVar6 = local_148;
    for (iVar9 = (int)local_140; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_148 != (longlong *)0x0) {
      FMemory::Free(local_148);
    }
    if (local_338 != (code *)0x0) {
      FMemory::Free();
    }
    if (*(longlong *)(param_1 + 0x1048) != 0) {
      uStack_9c = (undefined4)(uStack_320 >> 0x20);
      uStack_320 = uStack_320 & 0xffffffff00000000;
      local_328 = FUN_1410e3c80;
      local_a8 = 0x410e3c80;
      uStack_a4 = 1;
      uStack_a0 = 0;
      FUN_1407ffe80(*(longlong *)(param_1 + 0x1048) + 0x170,param_1,&local_a8);
      local_328 = FUN_1410e3d10;
      uStack_ac = (undefined4)(uStack_320 >> 0x20);
      uStack_320 = uStack_320 & 0xffffffff00000000;
      local_b8 = 0x410e3d10;
      uStack_b4 = 1;
      uStack_b0 = 0;
      FUN_1407ffe80(*(longlong *)(param_1 + 0x1048) + 0x180,param_1,&local_b8);
      lVar12 = FUN_1410ae560(param_1);
      if (lVar12 != 0) {
        FUN_140fda020(*(undefined8 *)(param_1 + 0x1048),*(undefined8 *)(param_1 + 0x1078),
                      lVar12 + 0xd0);
      }
    }
  }
  FUN_1410f5ae0(param_1);
  return;
}



// FUNCTION 1410efcb0 FUN_1410efcb0 body=330 status=ok
// SIG undefined FUN_1410efcb0(void)

void FUN_1410efcb0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong local_28 [4];
  
  if ((*(longlong *)(param_1 + 0x6c0) != 0) && (*(char *)(param_1 + 0x795) != '\0')) {
    local_28[0] = 0;
    local_28[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],L"hide",10);
    FUN_142088910(*(undefined8 *)(param_1 + 0x6c0),local_28);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    *(undefined1 *)(param_1 + 0x795) = 0;
  }
  *(undefined4 *)(param_1 + 0x7a8) = 0;
  *(undefined1 *)(param_1 + 0x7b0) = 0;
  *(undefined1 *)(param_1 + 0x7b2) = 0;
  if (*(longlong *)(param_1 + 0x760) != 0) {
    *(undefined8 *)(param_1 + 0x760) = 0;
  }
  *(undefined4 *)(param_1 + 0x6b8) = 0;
  if (*(int *)(param_1 + 0x6bc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x6b0,0);
  }
  iVar1 = *(int *)(param_1 + 0x688);
  *(int *)(param_1 + 0x7a0) = param_2;
  if (iVar1 <= param_2) {
    if (iVar1 < 1) {
      return;
    }
    param_2 = iVar1 + -1;
  }
  lVar2 = (longlong)param_2 * 0x50 + *(longlong *)(param_1 + 0x680);
  if (lVar2 != 0) {
    *(undefined4 *)(param_1 + 0x798) = 0;
    *(undefined4 *)(param_1 + 0x79c) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x7a4) = 0;
    *(undefined4 *)(param_1 + 0x7ac) = *(undefined4 *)(lVar2 + 0x2c);
    FUN_1410f57b0(param_1);
    FUN_1410c4410(param_1);
    if (*(longlong *)(lVar2 + 0x40) != 0) {
      FUN_142ece5e0(param_1,local_28);
      FUN_140591060(local_28);
    }
  }
  return;
}



// FUNCTION 1410efe00 FUN_1410efe00 body=721 status=ok
// SIG undefined FUN_1410efe00(void)

void FUN_1410efe00(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 local_1f0;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  undefined1 *local_1c8 [2];
  undefined1 local_1b8 [32];
  undefined8 local_198;
  undefined4 local_188;
  undefined1 local_178 [24];
  longlong local_160;
  undefined4 local_158;
  undefined4 local_154;
  longlong local_150;
  undefined1 local_148 [280];
  undefined1 local_30;
  
  if (param_2 != 0) {
    uVar3 = *(undefined1 *)(param_3 + 0x82);
    lVar5 = FUN_140bbaee0(param_2,*(undefined4 *)(param_3 + 0x6c));
    if (lVar5 == 0) {
      *(undefined4 *)(param_4 + 0x38) = 0xffffffff;
      *(undefined4 *)(param_4 + 0x3c) = 0;
      *(undefined8 *)(param_4 + 0x48) = 0;
      local_1f0 = 0;
      *(undefined4 *)(param_4 + 0x58) = 0;
      if ((*(int *)(param_4 + 0x5c) < 0) && (*(int *)(param_4 + 0x5c) != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_4 + 0x50,0);
      }
      if (*(undefined2 **)(param_4 + 0x50) != (undefined2 *)0x0) {
        **(undefined2 **)(param_4 + 0x50) = 0;
      }
      *(undefined4 *)(param_4 + 0x40) = 0;
    }
    else {
      uVar6 = FSoftObjectPath::FSoftObjectPath(local_178,lVar5);
      FSoftObjectPath::operator=(param_4 + 0x48,uVar6);
      FWeakObjectPtr::operator=((undefined4 *)(param_4 + 0x38),lVar5);
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_4 + 0x40) = DAT_1464b56f4;
    }
    FWeakObjectPtr::operator=(&local_1f0,param_1);
    local_158 = (undefined4)local_1f0;
    local_154 = local_1f0._4_4_;
    local_160 = param_1;
    local_150 = param_2;
    FUN_1410b3000(local_148,param_3 + 0x90);
    local_198 = 0;
    local_188 = 0;
    local_30 = uVar3;
    puVar7 = (undefined8 *)FUN_140438ef0(0x140,local_1b8);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_FUN_1446a54b8;
      puVar7[1] = local_160;
      *(undefined4 *)(puVar7 + 2) = local_158;
      *(undefined4 *)((longlong)puVar7 + 0x14) = local_154;
      puVar7[3] = local_150;
      FUN_1410b3000(puVar7 + 4,local_148);
      *(undefined1 *)(puVar7 + 0x27) = local_30;
    }
    local_1c8[0] = &LAB_1410c5740;
    FUN_14204c280(local_1c8);
    FUN_140d65960(local_148);
    FUN_1410f0390(param_1,param_3 + 0x230,*(undefined4 *)(param_3 + 0x8c),uVar3);
    if (*(longlong *)(param_1 + 0x180) != 0) {
      iVar4 = *(int *)(param_3 + 0x84);
      lVar5 = FUN_1410cd9b0(iVar4);
      if ((lVar5 != 0) && (FString::operator=(param_5 + 8,lVar5 + 0x48), iVar4 != 0)) {
        FText::operator=(param_5 + 0x18,lVar5 + 0x30);
      }
      *(undefined1 *)(param_5 + 1) = *(undefined1 *)(param_3 + 0x81);
      FUN_1410cea10(*(undefined8 *)(param_1 + 0x180),param_5,param_1);
    }
    uVar6 = FUN_140c14280(local_1e8,*(undefined4 *)(param_3 + 0x70));
    FText::operator=(param_4 + 0x20,uVar6);
    if (local_1e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1e0 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_1e0)(local_1e0);
        LOCK();
        piVar2 = (int *)((longlong)local_1e0 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_1e0 + 8))(local_1e0,1);
        }
      }
    }
    *(undefined1 *)(param_4 + 0x60) = uVar3;
    FUN_1410f0510(param_1,param_2,param_3 + 0x1a8,param_4,uVar3);
    FUN_1410f16e0(param_1,param_4);
  }
  return;
}



// FUNCTION 1410f00e0 FUN_1410f00e0 body=688 status=ok
// SIG undefined FUN_1410f00e0(void)

void FUN_1410f00e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  longlong lVar5;
  wchar_t **ppwVar6;
  int *piVar7;
  bool bVar8;
  int local_res10 [2];
  undefined4 local_88 [2];
  longlong local_80 [2];
  longlong local_70 [2];
  undefined1 local_60 [24];
  undefined8 local_48;
  undefined8 uStack_40;
  wchar_t *local_38;
  undefined8 local_30;
  
  FUN_1410ee780(param_1,param_4,param_5);
  if (param_2 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x188) == 0) {
    return;
  }
  if ((*(byte *)(param_3 + 0x10) & 4) == 0) {
    return;
  }
  local_88[0] = 1;
  local_38 = (wchar_t *)0x0;
  local_30 = (wchar_t *)0x0;
  local_48 = 0;
  uStack_40 = 0;
  TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_3 + 0x30),local_res10,&DAT_1462a0830);
  piVar3 = (int *)0x0;
  if (local_res10[0] != -1) {
    piVar3 = (int *)((longlong)local_res10[0] * 0x30 + *(longlong *)(param_3 + 0x30));
  }
  piVar7 = piVar3 + 4;
  if (piVar3 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  bVar8 = false;
  if ((piVar7 != (int *)0x0) && (*piVar7 == 6)) {
    uVar4 = FUN_1404b73f0(piVar7,local_80);
    iVar1 = FUN_141592950(uVar4,L"PlayerStatusChoosingCharacter",1,0,0xffffffff);
    bVar8 = iVar1 != -1;
    if (local_80[0] != 0) {
      FMemory::Free();
    }
  }
  lVar5 = FUN_140be2190(param_2,param_3 + 0x18,local_88);
  if (lVar5 == 0) {
    if ((bVar8 != false) && (local_38 != L"unknown")) {
      iVar1 = local_30._4_4_;
      if (local_30._4_4_ != 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38,8);
        iVar1 = local_30._4_4_;
      }
      iVar2 = (int)local_30 + 8;
      local_30 = (wchar_t *)CONCAT44(local_30._4_4_,iVar2);
      if (iVar1 < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38);
      }
      builtin_wcsncpy(local_38,L"unknown",8);
    }
  }
  else {
    uVar4 = FSoftObjectPath::FSoftObjectPath(local_60,lVar5);
    FSoftObjectPath::operator=(param_4 + 0x48,uVar4);
    FWeakObjectPtr::operator=(param_4 + 0x38,lVar5);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    *(int *)(param_4 + 0x40) = DAT_1464b56f4;
    if (bVar8 == false) {
      ppwVar6 = (wchar_t **)FName::ToString(lVar5 + 0x88,local_70);
      if (&local_38 != ppwVar6) {
        if (local_38 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        local_38 = *ppwVar6;
        *ppwVar6 = (wchar_t *)0x0;
        local_30 = ppwVar6[1];
        ppwVar6[1] = (wchar_t *)0x0;
      }
      if (local_70[0] != 0) {
        FMemory::Free();
        *(undefined1 *)(param_4 + 0x60) = 1;
        goto LAB_1410f0330;
      }
    }
    else if (local_38 != L"unknown") {
      iVar1 = local_30._4_4_;
      if (local_30._4_4_ != 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38,8);
        iVar1 = local_30._4_4_;
      }
      iVar2 = (int)local_30 + 8;
      local_30 = (wchar_t *)CONCAT44(local_30._4_4_,iVar2);
      if (iVar1 < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38);
      }
      builtin_wcsncpy(local_38,L"unknown",8);
    }
    *(byte *)(param_4 + 0x60) = bVar8 ^ 1;
  }
LAB_1410f0330:
  FUN_1410f1ee0(*(undefined8 *)(param_1 + 0x188),&local_48);
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1410cea10(*(longlong *)(param_1 + 0x180),param_5,param_1);
  }
  FUN_1410f16e0(param_1,param_4);
  if (local_38 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410f0390 FUN_1410f0390 body=374 status=ok
// SIG undefined FUN_1410f0390(void)

void FUN_1410f0390(longlong param_1,longlong param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 *local_98 [2];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  
  local_a4 = 0xffffffff;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_14170c210(&local_a4);
  }
  FWeakObjectPtr::operator=(&local_a0,param_1);
  uVar10 = local_a4;
  uVar1 = *(undefined1 *)(param_2 + 9);
  uVar2 = *(undefined1 *)(param_2 + 8);
  uVar3 = *(undefined1 *)(param_2 + 10);
  uVar4 = *(undefined1 *)(param_2 + 0xb);
  uVar5 = *(undefined1 *)(param_2 + 0xc);
  uVar6 = *(undefined1 *)(param_2 + 0xd);
  uVar7 = *(undefined1 *)(param_2 + 0xe);
  uVar8 = *(undefined1 *)(param_2 + 0xf);
  local_a4 = 0xffffffff;
  local_68 = 0;
  local_58 = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x38,local_88);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_FUN_1446a54d0;
    puVar9[1] = param_1;
    *(undefined4 *)(puVar9 + 2) = local_a0;
    *(undefined4 *)((longlong)puVar9 + 0x14) = local_9c;
    *(undefined4 *)(puVar9 + 3) = uVar10;
    uVar10 = 0xffffffff;
    puVar9[4] = &PTR_FUN_1445306f0;
    *(undefined1 *)((longlong)puVar9 + 0x29) = uVar1;
    *(undefined1 *)((longlong)puVar9 + 0x2a) = uVar3;
    *(undefined1 *)((longlong)puVar9 + 0x2b) = uVar4;
    *(undefined1 *)((longlong)puVar9 + 0x2c) = uVar5;
    *(undefined1 *)((longlong)puVar9 + 0x2d) = uVar6;
    *(undefined1 *)((longlong)puVar9 + 0x2e) = uVar7;
    *(undefined1 *)(puVar9 + 5) = uVar2;
    *(undefined1 *)((longlong)puVar9 + 0x2f) = uVar8;
    *(undefined4 *)(puVar9 + 6) = param_3;
    *(undefined1 *)((longlong)puVar9 + 0x34) = param_4;
  }
  local_98[0] = &LAB_1410c55d0;
  FUN_14208c5d0(param_1,local_98);
  FUN_1416f8340(uVar10);
  FUN_1416f8340(local_a4);
  return;
}



// FUNCTION 1410f0510 FUN_1410f0510 body=995 status=ok
// SIG undefined FUN_1410f0510(void)

void FUN_1410f0510(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  char param_5)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  wchar_t **ppwVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  wchar_t *local_28;
  undefined8 local_20;
  
  if (*(longlong *)(param_1 + 0x188) == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  local_98 = *(undefined8 *)(param_4 + 0x68);
  local_90 = *(longlong *)(param_4 + 0x70);
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  if (local_90 != 0) {
    LOCK();
    *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
    UNLOCK();
  }
  lVar3 = FUN_1411e5490(param_2,&local_98,&local_78,&local_88);
  local_20._4_4_ = 0;
  local_28 = (wchar_t *)0x0;
  local_20 = (wchar_t *)0x0;
  local_38 = 0;
  uStack_30 = 0;
  if (lVar3 != 0) {
    if (param_5 == '\0') {
      ppwVar4 = (wchar_t **)FName::ToString(lVar3 + 0x88,local_58);
      if (&local_28 != ppwVar4) {
        if (local_28 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        local_28 = *ppwVar4;
        *ppwVar4 = (wchar_t *)0x0;
        local_20 = ppwVar4[1];
        ppwVar4[1] = (wchar_t *)0x0;
      }
      if (local_58[0] != 0) {
        FMemory::Free();
      }
    }
    else {
      uVar8 = FUN_140d84a40(param_3,0);
      local_38._4_4_ = uVar8;
      uVar8 = FUN_140d84a40(param_3,2);
      local_38 = CONCAT44(local_38._4_4_,uVar8);
      uVar8 = FUN_140d84a40(param_3,1);
      uStack_30 = CONCAT44(uStack_30._4_4_,uVar8);
      uVar8 = FUN_140d84a40(param_3,3);
      uStack_30 = CONCAT44(uVar8,(undefined4)uStack_30);
      ppwVar4 = (wchar_t **)FName::ToString(lVar3 + 0x88,local_68);
      if (&local_28 != ppwVar4) {
        if (local_28 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        local_28 = *ppwVar4;
        *ppwVar4 = (wchar_t *)0x0;
        local_20 = ppwVar4[1];
        ppwVar4[1] = (wchar_t *)0x0;
      }
      if (local_68[0] != 0) {
        FMemory::Free();
      }
    }
    goto LAB_1410f08b0;
  }
  if (param_5 != '\0') {
    lVar6 = param_4 + 0x38;
    lVar3 = FWeakObjectPtr::Get(lVar6);
    if (lVar3 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(param_4 + 0x40)) && (*(longlong *)(param_4 + 0x48) != 0)) {
        lVar3 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar6,lVar3);
        if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(param_4 + 0x40) = DAT_1464b56f4;
        }
        lVar3 = FWeakObjectPtr::Get(lVar6);
        if (lVar3 != 0) goto LAB_1410f0730;
      }
    }
    else {
LAB_1410f0730:
      lVar5 = UTextureRenderTarget2D::GetPrivateStaticClass();
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
        lVar3 = FWeakObjectPtr::Get(lVar6);
        if (lVar3 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != *(int *)(param_4 + 0x40)) && (*(longlong *)(param_4 + 0x48) != 0)) {
            lVar3 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar6,lVar3);
            if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(param_4 + 0x40) = DAT_1464b56f4;
            }
            lVar3 = FWeakObjectPtr::Get(lVar6);
            if (lVar3 != 0) goto LAB_1410f07d9;
          }
LAB_1410f080f:
          lVar3 = 0;
        }
        else {
LAB_1410f07d9:
          lVar6 = UTextureRenderTarget2D::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_1410f080f;
        }
        ppwVar4 = (wchar_t **)FName::ToString(lVar3 + 0x88,local_48);
        if (&local_28 != ppwVar4) {
          if (local_28 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          local_28 = *ppwVar4;
          *ppwVar4 = (wchar_t *)0x0;
          local_20 = ppwVar4[1];
          ppwVar4[1] = (wchar_t *)0x0;
        }
        if (local_48[0] != 0) {
          FMemory::Free();
        }
        goto LAB_1410f08b0;
      }
    }
  }
  if (local_28 != L"unknown") {
    iVar7 = local_20._4_4_;
    if (local_20._4_4_ != 8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28,8);
      iVar7 = local_20._4_4_;
    }
    iVar2 = (int)local_20 + 8;
    local_20 = (wchar_t *)CONCAT44(local_20._4_4_,iVar2);
    if (iVar7 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28);
    }
    builtin_wcsncpy(local_28,L"unknown",8);
  }
LAB_1410f08b0:
  FUN_1410f1ee0(*(undefined8 *)(param_1 + 0x188),&local_38);
  if (local_28 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410f0900 FUN_1410f0900 body=528 status=ok
// SIG undefined FUN_1410f0900(void)

void FUN_1410f0900(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  longlong local_28;
  ulonglong local_20;
  
  plVar4 = (longlong *)(param_1 + 0x170);
  lVar3 = 4;
  lVar2 = param_2;
  do {
    if (*plVar4 != 0) {
      FUN_1410f0b10(*plVar4,lVar2,lVar2 + 0x40);
    }
    lVar2 = lVar2 + 0x10;
    plVar4 = plVar4 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  if (*(longlong *)(param_1 + 400) != 0) {
    local_20 = 8;
    local_28 = lVar3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"grenade",0x10);
    FUN_1410f0b10(*(undefined8 *)(param_1 + 400),param_2 + 0x80,&local_28);
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    local_20 = 7;
    local_28 = lVar3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"shield",0xe);
    FUN_1410f0b10(*(undefined8 *)(param_1 + 0x198),param_2 + 0x90,&local_28);
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    local_20 = 4;
    local_28 = lVar3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,&DAT_1446a2360,8);
    FUN_1410f0b10(*(undefined8 *)(param_1 + 0x1a0),param_2 + 0xa0,&local_28);
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    pwVar5 = L"relic1";
    if (*(char *)(param_2 + 0xc0) != '\0') {
      pwVar5 = L"relic2";
    }
    local_20 = 0;
    local_28 = lVar3;
    if (*pwVar5 != L'\0') {
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (pwVar5[lVar2] != L'\0');
      uVar1 = (int)lVar2 + 1;
      local_20 = (ulonglong)uVar1;
      if (0 < (int)uVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      }
      FGenericPlatformString::Memcpy(local_28,pwVar5,(longlong)(int)uVar1 * 2);
    }
    FUN_1410f0b10(*(undefined8 *)(param_1 + 0x1a8),param_2 + 0xb0,&local_28);
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1410f0b10 FUN_1410f0b10 body=453 status=ok
// SIG undefined FUN_1410f0b10(void)

void FUN_1410f0b10(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  bool bVar2;
  bool bVar3;
  void **ppvVar4;
  uint uVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  void *local_38;
  ulonglong local_30;
  void *local_28;
  undefined8 local_20;
  
  pwVar7 = L"equip";
  if (*(int *)(param_2 + 1) < 2) {
    pwVar7 = L"empty";
  }
  local_38 = (void *)0x0;
  local_30 = 0;
  if (*pwVar7 != L'\0') {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (pwVar7[lVar6] != L'\0');
    uVar5 = (int)lVar6 + 1;
    local_30 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Memcpy(local_38,pwVar7,(longlong)(int)uVar5 * 2);
  }
  FUN_142088cf0(param_1,&local_38);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_142088cf0(*(longlong *)(param_1 + 0x180),param_3);
  }
  if (*(longlong *)(param_1 + 0x170) != 0) {
    iVar1 = *(int *)(param_2 + 1);
    if (iVar1 < 2) {
      local_28 = (void *)0x0;
      local_20 = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      FGenericPlatformString::Memcpy(local_28,L"common",0xe);
      ppvVar4 = &local_28;
      bVar3 = true;
      bVar2 = false;
    }
    else {
      _Src = (void *)*param_2;
      local_38 = (void *)0x0;
      local_30 = CONCAT44(local_30._4_4_,iVar1);
      if (iVar1 == 0) {
        local_30 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,iVar1,0);
        _guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar1 * 2);
      }
      ppvVar4 = &local_38;
      bVar3 = false;
      bVar2 = true;
    }
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x170),ppvVar4);
    if (bVar2) {
      if (local_38 != (void *)0x0) {
        FMemory::Free();
      }
    }
    if ((bVar3) && (local_28 != (void *)0x0)) {
      FMemory::Free();
    }
  }
  if ((1 < *(int *)(param_2 + 1)) && (*(longlong *)(param_1 + 0x178) != 0)) {
    FUN_142088cf0(*(longlong *)(param_1 + 0x178),param_3);
  }
  return;
}



// FUNCTION 1410f0ce0 FUN_1410f0ce0 body=1559 status=ok
// SIG undefined FUN_1410f0ce0(void)

void FUN_1410f0ce0(longlong param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 local_res18;
  longlong *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined8 local_90;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  uVar10 = 0;
  local_res8 = param_1;
  if (*(longlong *)(param_1 + 0x1078) != 0) {
    local_98 = (longlong *)0x0;
    local_90 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    FGenericPlatformString::Memcpy(local_98,L"loadoutOptions",0x1e);
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    FUN_140e98b90(*(undefined8 *)(param_1 + 0x1078),param_1 + 0x10e8,&local_98,0,6,&local_b8);
    plVar14 = local_b8;
    for (iVar15 = (int)local_b0; iVar15 != 0; iVar15 = iVar15 + -1) {
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      plVar14 = plVar14 + 2;
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free(local_b8);
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  lVar17 = *(longlong *)(param_1 + 2000);
  iVar15 = *(int *)(param_1 + 0x7d8);
  lVar6 = (longlong)iVar15 * 0xe8 + lVar17;
  local_res10 = lVar6;
  if (lVar17 != lVar6) {
    do {
      if ((*(longlong *)(param_1 + 0x10e8) != 0) && (*(longlong *)(lVar17 + 0xd8) == 0)) {
        local_98 = (longlong *)0x0;
        local_90 = 0;
        FUN_1410b0070(*(longlong *)(param_1 + 0x10e8),lVar17 + 0xd8,lVar17 + 0x20,0,6,&local_98);
        plVar14 = local_98;
        for (iVar15 = (int)local_90; iVar15 != 0; iVar15 = iVar15 + -1) {
          if (*plVar14 != 0) {
            FMemory::Free();
          }
          plVar14 = plVar14 + 2;
        }
        if (local_98 != (longlong *)0x0) {
          FMemory::Free(local_98);
        }
        lVar6 = local_res10;
        if (*(longlong *)(lVar17 + 0xd8) != 0) {
          FUN_1410cdcb0(*(longlong *)(lVar17 + 0xd8),1,*(undefined2 *)(lVar17 + 0x18),lVar17 + 0x40)
          ;
          lVar6 = local_res10;
        }
      }
      if (*(longlong *)(lVar17 + 0xe0) == 0) {
        FUN_1417846f0(param_1,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        local_res18 = 0;
        uVar7 = FUN_1413290f0();
        lVar8 = FUN_1417985e0(uVar7,param_1,0,0,0,0,0,0,0);
        *(longlong *)(lVar17 + 0xe0) = lVar8;
        lVar6 = local_res10;
        if (lVar8 != 0) {
          uVar7 = FWeakObjectPtr::Get(param_1 + 0xc10);
          uVar2 = *(undefined2 *)(lVar17 + 0x18);
          uVar9 = FUN_1410cd340(param_1,lVar17 + 0x30);
          lVar8 = *(longlong *)(lVar17 + 0xe0);
          uVar1 = *(undefined1 *)(lVar17 + 0xd0);
          FWeakObjectPtr::operator=(lVar8 + 0x28,local_res8);
          FWeakObjectPtr::operator=(lVar8 + 0x30,uVar7);
          FWeakObjectPtr::operator=(lVar8 + 0x38,uVar9);
          *(undefined2 *)(lVar8 + 0x40) = uVar2;
          *(undefined1 *)(lVar8 + 0x68) = uVar1;
          cVar5 = FWeakObjectPtr::IsValid(lVar8 + 0x38);
          lVar6 = local_res10;
          param_1 = local_res8;
          if (cVar5 != '\0') {
            uVar7 = FWeakObjectPtr::Get(lVar8 + 0x38);
            FUN_142f0a7c0(uVar7,0);
            lVar6 = local_res10;
            param_1 = local_res8;
          }
        }
      }
      lVar17 = lVar17 + 0xe8;
    } while (lVar17 != lVar6);
    iVar15 = *(int *)(param_1 + 0x7d8);
  }
  lVar17 = *(longlong *)(param_1 + 2000);
  lVar6 = (longlong)iVar15 * 0xe8 + lVar17;
  do {
    if (lVar17 == lVar6) {
      if ((0 < *(int *)(param_1 + 0x7d8)) &&
         (plVar14 = *(longlong **)(*(longlong *)(param_1 + 2000) + 0xd8), plVar14 != (longlong *)0x0
         )) {
        local_90 = 0;
        local_98 = plVar14;
        uVar10 = UBlendableInterface::GetPrivateStaticClass();
        local_90 = UObjectBaseUtility::GetInterfaceAddress(plVar14,uVar10);
        FUN_142ed36d0(param_1,&local_98,0);
      }
      FWeakObjectPtr::operator=(&local_res8,param_1);
      uVar3 = (undefined4)local_res8;
      uVar4 = local_res8._4_4_;
      local_58 = 0;
      local_48 = 0;
      puVar11 = (undefined8 *)FUN_140438ef0(0x18,local_78);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = &PTR_FUN_1444f8920;
        puVar11[1] = param_1;
        *(undefined4 *)(puVar11 + 2) = uVar3;
        *(undefined4 *)((longlong)puVar11 + 0x14) = uVar4;
      }
      local_88[0] = &LAB_1410c5630;
      FUN_14208c4f0(param_1,local_88);
      return;
    }
    if (*(longlong *)(lVar17 + 0xd8) != 0) {
      FWeakObjectPtr::operator=(&local_b8,0);
      FWeakObjectPtr::operator=(&local_b0,0);
      FWeakObjectPtr::operator=(local_a8,0);
      FWeakObjectPtr::operator=(local_a0,0);
      cVar5 = FUN_142ebdd70(param_1);
      lVar8 = 0x50;
      if (cVar5 != '\0') {
        lVar8 = 0x90;
      }
      uVar7 = uVar10;
      if (1 < *(int *)(lVar8 + 8 + lVar17)) {
        lVar16 = *(longlong *)(param_1 + 2000);
        lVar18 = (longlong)*(int *)(param_1 + 0x7d8) * 0xe8 + lVar16;
        for (; lVar16 != lVar18; lVar16 = lVar16 + 0xe8) {
          if (*(int *)(lVar8 + 8 + lVar17) == 0) {
            puVar13 = &DAT_143f3eda8;
          }
          else {
            puVar13 = *(undefined2 **)(lVar8 + lVar17);
          }
          if (*(int *)(lVar16 + 0x28) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = *(undefined2 **)(lVar16 + 0x20);
          }
          iVar15 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar13);
          if (iVar15 == 0) {
            uVar7 = *(undefined8 *)(lVar16 + 0xd8);
            break;
          }
        }
      }
      FWeakObjectPtr::operator=(&local_b8,uVar7);
      uVar7 = uVar10;
      if (1 < *(int *)(lVar8 + 0x18 + lVar17)) {
        lVar16 = *(longlong *)(param_1 + 2000);
        lVar18 = (longlong)*(int *)(param_1 + 0x7d8) * 0xe8 + lVar16;
        for (; lVar16 != lVar18; lVar16 = lVar16 + 0xe8) {
          if (*(int *)(lVar8 + 0x18 + lVar17) == 0) {
            puVar13 = &DAT_143f3eda8;
          }
          else {
            puVar13 = *(undefined2 **)(lVar8 + 0x10 + lVar17);
          }
          if (*(int *)(lVar16 + 0x28) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = *(undefined2 **)(lVar16 + 0x20);
          }
          iVar15 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar13);
          if (iVar15 == 0) {
            uVar7 = *(undefined8 *)(lVar16 + 0xd8);
            break;
          }
        }
      }
      FWeakObjectPtr::operator=(&local_b0,uVar7);
      uVar7 = uVar10;
      if (1 < *(int *)(lVar8 + 0x28 + lVar17)) {
        lVar16 = *(longlong *)(param_1 + 2000);
        lVar18 = (longlong)*(int *)(param_1 + 0x7d8) * 0xe8 + lVar16;
        for (; lVar16 != lVar18; lVar16 = lVar16 + 0xe8) {
          if (*(int *)(lVar8 + 0x28 + lVar17) == 0) {
            puVar13 = &DAT_143f3eda8;
          }
          else {
            puVar13 = *(undefined2 **)(lVar8 + 0x20 + lVar17);
          }
          if (*(int *)(lVar16 + 0x28) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = *(undefined2 **)(lVar16 + 0x20);
          }
          iVar15 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar13);
          if (iVar15 == 0) {
            uVar7 = *(undefined8 *)(lVar16 + 0xd8);
            break;
          }
        }
      }
      FWeakObjectPtr::operator=(local_a8,uVar7);
      uVar7 = uVar10;
      if (1 < *(int *)(lVar8 + 0x38 + lVar17)) {
        lVar16 = *(longlong *)(param_1 + 2000);
        lVar18 = (longlong)*(int *)(param_1 + 0x7d8) * 0xe8 + lVar16;
        for (; lVar16 != lVar18; lVar16 = lVar16 + 0xe8) {
          if (*(int *)(lVar8 + 0x38 + lVar17) == 0) {
            puVar13 = &DAT_143f3eda8;
          }
          else {
            puVar13 = *(undefined2 **)(lVar8 + 0x30 + lVar17);
          }
          if (*(int *)(lVar16 + 0x28) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = *(undefined2 **)(lVar16 + 0x20);
          }
          iVar15 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar13);
          if (iVar15 == 0) {
            uVar7 = *(undefined8 *)(lVar16 + 0xd8);
            break;
          }
        }
      }
      FWeakObjectPtr::operator=(local_a0,uVar7);
      plVar14 = *(longlong **)(lVar17 + 0xd8);
      local_90 = 0;
      uVar7 = uVar10;
      local_98 = plVar14;
      if (plVar14 != (longlong *)0x0) {
        uVar7 = UBlendableInterface::GetPrivateStaticClass();
        uVar7 = UObjectBaseUtility::GetInterfaceAddress(plVar14,uVar7);
      }
      local_90 = uVar7;
      FUN_142ecfd10(param_1,&local_98,&local_b8);
    }
    lVar17 = lVar17 + 0xe8;
  } while( true );
}



// FUNCTION 1410f1300 FUN_1410f1300 body=986 status=ok
// SIG undefined FUN_1410f1300(void)

void FUN_1410f1300(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  if (*(longlong *)(param_1 + 0x1078) != 0) {
    uVar2 = 0;
    local_28 = (longlong *)0x0;
    local_20 = 0x2d;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"loadoutOptions.loadoutHeader.prevLoadoutHint",0x5a);
    local_38 = (longlong *)0x0;
    local_30 = 0;
    FUN_140e98630(*(undefined8 *)(param_1 + 0x1078),param_1 + 0x10c0,&local_28,0,6,&local_38);
    plVar3 = local_38;
    for (iVar4 = (int)local_30; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_38 = (longlong *)0x0;
    local_30 = 0x2d;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"loadoutOptions.loadoutHeader.nextLoadoutHint",0x5a);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140e98630(*(undefined8 *)(param_1 + 0x1078),param_1 + 0x10c8,&local_38,0,6,&local_28);
    plVar3 = local_28;
    for (iVar4 = (int)local_20; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar3 = *(longlong **)(param_1 + 0x10c0);
    if ((plVar3 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x10c8) != 0)) {
      local_20 = 0;
      local_28 = plVar3;
      uVar1 = UBlendableInterface::GetPrivateStaticClass();
      local_20 = UObjectBaseUtility::GetInterfaceAddress(plVar3,uVar1);
      FUN_142ecff00(param_1,&local_28,DAT_146874c78);
      plVar3 = *(longlong **)(param_1 + 0x10c8);
      uVar1 = uVar2;
      local_28 = plVar3;
      if (plVar3 != (longlong *)0x0) {
        uVar1 = UBlendableInterface::GetPrivateStaticClass();
        uVar1 = UObjectBaseUtility::GetInterfaceAddress(plVar3,uVar1);
      }
      local_20 = uVar1;
      FUN_142ecff00(param_1,&local_28,DAT_146874c70);
    }
    local_38 = (longlong *)0x0;
    local_30 = 0x3a;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy
              (local_38,L"customizationMC.customizationHeader.customizationHintPrev",0x74);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140e98630(*(undefined8 *)(param_1 + 0x1078),param_1 + 0x10d8,&local_38,0,6,&local_28);
    plVar3 = local_28;
    for (iVar4 = (int)local_20; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_38 = (longlong *)0x0;
    local_30 = 0x3a;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy
              (local_38,L"customizationMC.customizationHeader.customizationHintNext",0x74);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140e98630(*(undefined8 *)(param_1 + 0x1078),param_1 + 0x10d0,&local_38,0,6,&local_28);
    plVar3 = local_28;
    for (iVar4 = (int)local_20; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar3 = *(longlong **)(param_1 + 0x10d8);
    if ((plVar3 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x10d0) != 0)) {
      local_20 = 0;
      local_28 = plVar3;
      uVar1 = UBlendableInterface::GetPrivateStaticClass();
      local_20 = UObjectBaseUtility::GetInterfaceAddress(plVar3,uVar1);
      FUN_142ecff00(param_1,&local_28,DAT_146874c78);
      plVar3 = *(longlong **)(param_1 + 0x10d0);
      local_28 = plVar3;
      if (plVar3 != (longlong *)0x0) {
        uVar2 = UBlendableInterface::GetPrivateStaticClass();
        uVar2 = UObjectBaseUtility::GetInterfaceAddress(plVar3,uVar2);
      }
      local_20 = uVar2;
      FUN_142ecff00(param_1,&local_28,DAT_146874c70);
    }
  }
  return;
}



// FUNCTION 1410f16e0 FUN_1410f16e0 body=1402 status=ok
// SIG undefined FUN_1410f16e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001410f17ea) */
/* WARNING: Removing unreachable block (ram,0x0001410f17fa) */
/* WARNING: Removing unreachable block (ram,0x0001410f1816) */

void FUN_1410f16e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong *plStack_150;
  undefined8 local_148;
  longlong *local_140;
  longlong local_138 [14];
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  undefined1 local_50 [16];
  longlong local_40;
  longlong *plStack_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  if ((*(longlong *)(param_1 + 0x170) == 0) || (lVar7 = *(longlong *)(param_1 + 0x38), lVar7 == 0))
  goto LAB_1410f1bfd;
  lVar6 = *param_2;
  if (lVar6 == 0) {
    lVar6 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (lVar7 = FUN_140f9aee0(lVar7), lVar7 != 0)) {
      lVar6 = param_2[0xd];
      local_158 = 0;
      plStack_150 = (longlong *)0x0;
      if (lVar6 == 0) {
        plVar8 = *(longlong **)(param_1 + 0x1b8);
        if (plVar8 != (longlong *)0x0) {
          plVar8 = (longlong *)(**(code **)(*plVar8 + 8))(plVar8,local_90);
          local_140 = (longlong *)plVar8[1];
          local_158 = *plVar8;
          if (local_140 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_140 + 1) = (int)local_140[1] + 1;
            UNLOCK();
          }
          local_148 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_150,&local_140);
          plVar8 = local_140;
          if (local_140 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_140 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_140)(local_140);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_140 + 8))(local_140,1);
              }
            }
          }
          if (local_88 != (longlong *)0x0) {
            LOCK();
            plVar8 = local_88 + 1;
            lVar6 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_88)(local_88);
              LOCK();
              piVar2 = (int *)((longlong)local_88 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_88 + 8))(local_88,1);
              }
            }
          }
        }
      }
      else {
        plStack_150 = (longlong *)param_2[0xe];
        if (plStack_150 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
          UNLOCK();
        }
        local_138[0xc] = 0;
        local_138[0xd] = 0;
        local_158 = lVar6;
        local_40 = lVar6;
        plStack_38 = plStack_150;
      }
      plVar8 = plStack_150;
      local_a0 = *(undefined8 *)(param_1 + 0x1b8);
      local_98 = *(longlong *)(param_1 + 0x1c0);
      local_80 = 0;
      uStack_78 = 0;
      if (local_98 != 0) {
        LOCK();
        *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
        UNLOCK();
      }
      local_68 = local_158;
      plStack_60 = plStack_150;
      if (plStack_150 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
        UNLOCK();
      }
      lVar6 = FUN_1411e5cb0(lVar7,&local_68,&local_a0,&local_80);
      plVar1 = plStack_150;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar8 + 1;
        lVar7 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_150)(plStack_150);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_150 + 8))(plStack_150,1);
          }
        }
      }
      if (lVar6 != 0) goto LAB_1410f1a40;
    }
    if ((char)param_2[0xc] != '\0') {
      local_b0 = 0;
      local_b8 = 0;
      local_c8 = (undefined4)param_2[7];
      local_c4 = *(undefined4 *)((longlong)param_2 + 0x3c);
      local_c0 = (undefined4)param_2[8];
      local_58 = param_2[9];
      local_a8 = 0;
      local_158 = 0;
      FString::FString(local_50,param_2 + 10);
      FSoftObjectPath::operator=(&local_b8,&local_58);
      lVar6 = FUN_1411e5f20(&local_c8);
      if (lVar6 != 0) goto LAB_1410f1a40;
    }
    local_138[0] = 0;
    local_138[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_138,0);
    FGenericPlatformString::Memcpy(local_138[0],L"default",0x10);
    FUN_142088cf0(*(undefined8 *)(param_1 + 0x170),local_138);
    lVar7 = local_138[0];
  }
  else {
LAB_1410f1a40:
    cVar4 = *(char *)(param_1 + 0x1a8);
    if (cVar4 == '\0') {
      local_138[10] = 0;
      local_138[0xb] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_138 + 10,0);
      FGenericPlatformString::Memcpy(local_138[10],L"default",0x10);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x170),local_138 + 10);
      lVar7 = local_138[10];
    }
    else if (cVar4 == '\x01') {
      local_138[6] = 0;
      local_138[7] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_138 + 6,0);
      FGenericPlatformString::Memcpy(local_138[6],L"player0",0x10);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x170),local_138 + 6);
      if (local_138[6] != 0) {
        FMemory::Free();
      }
      local_138[8] = 0;
      local_138[9] = 0x22;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_138 + 8,0);
      FGenericPlatformString::Memcpy(local_138[8],L"VaultHunterProfileImage_00_nopack",0x44);
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x2a0))
                (*(longlong **)(param_1 + 0x38),local_138 + 8,lVar6);
      lVar7 = local_138[8];
    }
    else {
      if (cVar4 != '\x02') goto LAB_1410f1bfd;
      local_138[2] = 0;
      local_138[3] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_138 + 2,0);
      FGenericPlatformString::Memcpy(local_138[2],L"player1",0x10);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0x170),local_138 + 2);
      if (local_138[2] != 0) {
        FMemory::Free();
      }
      local_138[4] = 0;
      local_138[5] = 0x22;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_138 + 4,0);
      FGenericPlatformString::Memcpy(local_138[4],L"VaultHunterProfileImage_01_nopack",0x44);
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x2a0))
                (*(longlong **)(param_1 + 0x38),local_138 + 4,lVar6);
      lVar7 = local_138[4];
    }
  }
  if (lVar7 != 0) {
    FMemory::Free();
  }
LAB_1410f1bfd:
  plVar8 = *(longlong **)(param_1 + 0x178);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x2b0))(plVar8,param_2 + 1,1,0);
  }
  plVar8 = *(longlong **)(param_1 + 0x1a0);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x2b0))(plVar8,param_2 + 4,1,0);
  }
  return;
}



// FUNCTION 1410f1c60 FUN_1410f1c60 body=637 status=ok
// SIG undefined FUN_1410f1c60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410f1c60(longlong param_1,undefined8 param_2,byte param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  ulonglong *puStack_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [16];
  undefined4 local_68 [2];
  ulonglong local_60;
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_108;
  plVar4 = *(longlong **)(param_1 + 0x318);
  if ((plVar4 != (longlong *)0x0) && (*(longlong *)(param_1 + 800) != 0)) {
    (**(code **)(*plVar4 + 0x2b0))(plVar4,param_2,1,0);
    cVar6 = FText::IsEmpty(param_2);
    if (cVar6 == '\0') {
      puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_78,&DAT_146875038);
      local_60 = (ulonglong)param_3;
      local_68[0] = 0;
      local_40 = '\0';
      local_e8 = local_68;
      local_d8 = *puVar7;
      puStack_e0 = local_38;
      local_d0 = puVar7[1];
      if (local_d0 != 0) {
        LOCK();
        *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
        UNLOCK();
      }
      local_c8 = local_e8;
      uStack_c0 = puStack_e0;
      uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_b8,&local_c8);
      uVar8 = FText::Format(local_90,&local_d8,uVar8);
      FText::FText(local_a8,uVar8);
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_88 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar1 = (int *)((longlong)local_88 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_88 + 8))(local_88,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_b8);
      if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
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
      plVar4 = (longlong *)puVar7[1];
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
      (**(code **)(**(longlong **)(param_1 + 800) + 0x2b0))
                (*(longlong **)(param_1 + 800),local_a8,1,0);
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_a0 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
    }
    else {
      local_e8 = (undefined4 *)0x0;
      puStack_e0 = (ulonglong *)0x0;
      (**(code **)(**(longlong **)(param_1 + 800) + 0x2a8))
                (*(longlong **)(param_1 + 800),&local_e8,1,0);
      if (local_e8 != (undefined4 *)0x0) {
        FMemory::Free();
      }
    }
    FUN_142f0ead0(param_1,(float)param_3 * 0.01);
  }
  return;
}



// FUNCTION 1410f1ee0 FUN_1410f1ee0 body=220 status=ok
// SIG undefined FUN_1410f1ee0(void)

void FUN_1410f1ee0(longlong param_1,undefined4 *param_2)

{
  undefined4 *local_res8;
  
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_142088cf0(*(longlong *)(param_1 + 0x170),param_2 + 4);
  }
  local_res8 = param_2;
  FUN_1410bf390(&local_res8,*(undefined8 *)(param_1 + 0x178),*(undefined8 *)(param_1 + 0x188),
                *(undefined8 *)(param_1 + 0x180),*param_2);
  FUN_1410bf390(&local_res8,*(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x1a0),
                *(undefined8 *)(param_1 + 0x198),param_2[1]);
  FUN_1410bf390(&local_res8,*(undefined8 *)(param_1 + 0x1a8),*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1b0),param_2[2]);
  FUN_1410bf390(&local_res8,*(undefined8 *)(param_1 + 0x1c0),*(undefined8 *)(param_1 + 0x1d0),
                *(undefined8 *)(param_1 + 0x1c8),param_2[3]);
  return;
}



// FUNCTION 1410f1fc0 FUN_1410f1fc0 body=634 status=ok
// SIG undefined FUN_1410f1fc0(void)

longlong FUN_1410f1fc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined8 param_5)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  longlong *local_38;
  int local_30;
  longlong local_28 [2];
  
  if (*(longlong *)(param_1 + 0x788) == 0) {
    return 0;
  }
  local_28[1] = 0x10;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"SpinnerListItem",0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x788);
  uVar3 = UMobBaseAnim::GetPrivateStaticClass();
  lVar4 = FUN_142ebcee0(uVar1,local_28,uVar3,0);
  if (lVar4 != 0) {
    lVar5 = UMobBaseAnim::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1410f2082;
  }
  lVar4 = 0;
LAB_1410f2082:
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (lVar4 != 0) {
    local_38 = (longlong *)0x0;
    local_30 = 0;
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar6 == (longlong *)0x0) {
      if (((local_30 != 0) && (local_38 != (longlong *)0x0)) &&
         ((**(code **)(*local_38 + 0x28))(local_38,0), local_38 != (longlong *)0x0)) {
        local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
      }
    }
    else {
      FUN_140f168d0(plVar6,param_1,param_5);
      (**(code **)(*plVar6 + 0x30))(plVar6,&local_38);
      (**(code **)(*plVar6 + 0x28))(plVar6,0);
      lVar5 = FMemory::Realloc(plVar6,0,0);
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
    }
    FUN_142ebcaa0(lVar4,param_2,param_3,param_4,&local_38);
    *(undefined1 *)(lVar4 + 0x198) = 1;
    if (*(longlong *)(lVar4 + 0x248) != 0) {
      uVar7 = FUN_14119e040();
      FUN_142f0d6e0(*(undefined8 *)(lVar4 + 0x248),uVar7,L"left");
    }
    lVar5 = *(longlong *)(lVar4 + 800);
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x300) != 0)) {
      uVar7 = FUN_14119e040();
      FUN_142f0d6e0(*(undefined8 *)(lVar5 + 0x300),uVar7,L"center");
    }
    if (local_30 != 0) {
      if (local_38 == (longlong *)0x0) {
        return lVar4;
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
  }
  return lVar4;
}



// FUNCTION 1410f2240 FUN_1410f2240 body=297 status=ok
// SIG undefined FUN_1410f2240(void)

longlong FUN_1410f2240(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (param_2 == 0) {
    lVar5 = 0;
  }
  else {
    FUN_1410cc2a0(param_2,local_28);
    lVar5 = FUN_1410f1fc0(param_1,local_28,param_2 + 0x90,param_3,param_4);
    if (lVar5 != 0) {
      FUN_142ed2a90(lVar5,param_2);
      lVar6 = FUN_140def780();
      if (((((lVar6 == 0) || (*(longlong *)(lVar6 + 0xf8) == 0)) ||
           (*(int *)(*(longlong *)(lVar6 + 0xf8) + 0x80) < 1)) &&
          (lVar6 = FUN_140cff230(*(undefined8 *)(param_1 + 0x7f0)), lVar6 != 0)) &&
         ((*(char *)(param_2 + 0x119) == '\0' ||
          ((*(longlong *)(param_1 + 0x7f0) != 0 &&
           (cVar4 = APlayerController::IsPrimaryPlayer(), cVar4 != '\0')))))) {
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
      }
      (**(code **)(*(longlong *)(lVar5 + 0x170) + 0x38))((longlong *)(lVar5 + 0x170),uVar7);
      FUN_142ed2e40(lVar5,*(undefined1 *)(param_2 + 0xa0));
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  return lVar5;
}



// FUNCTION 1410f2370 FUN_1410f2370 body=1160 status=ok
// SIG undefined FUN_1410f2370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410f2370(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  char *pcVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  longlong **local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  longlong local_190;
  undefined4 *local_188;
  ulonglong *puStack_180;
  longlong local_178 [2];
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  longlong *plStack_150;
  undefined8 local_148;
  undefined1 local_140 [16];
  undefined1 local_130 [8];
  undefined4 local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [16];
  undefined1 local_c0 [24];
  undefined4 local_a8 [2];
  ulonglong local_a0;
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  plVar3 = (longlong *)(param_1 + 0x188);
  uVar10 = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  local_1a8 = param_2;
  if (*(int *)(param_1 + 0x194) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar3,0);
  }
  plVar4 = local_1a8;
  uVar12 = uVar10;
  if (0 < (int)param_2[1]) {
    do {
      local_190 = 0;
      if (*(longlong *)(param_1 + 0x170) != 0) {
        local_1a0 = (longlong *)0x0;
        local_198 = 0;
        local_148 = 0;
        FString::PrintfImpl(local_178,L"statBar%d",uVar12);
        local_1b0 = &local_1a0;
        local_1b8 = 6;
        FUN_1410b1d60(*(undefined8 *)(param_1 + 0x170),&local_190,local_178,0);
        if (local_178[0] != 0) {
          FMemory::Free();
        }
        plVar4 = local_1a0;
        for (iVar8 = (int)local_198; iVar8 != 0; iVar8 = iVar8 + -1) {
          if (*plVar4 != 0) {
            FMemory::Free();
          }
          plVar4 = plVar4 + 2;
        }
        if (local_1a0 != (longlong *)0x0) {
          FMemory::Free(local_1a0);
        }
        lVar5 = local_190;
        plVar4 = local_1a8;
        if (local_190 != 0) {
          FUN_1410f1c60(local_190,(longlong)(int)uVar12 * 0x20 + *local_1a8,
                        *(undefined1 *)(*local_1a8 + 0x18 + uVar10));
          iVar8 = *(int *)(param_1 + 400);
          *(int *)(param_1 + 400) = iVar8 + 1;
          if (*(int *)(param_1 + 0x194) < iVar8 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar8);
          }
          *(longlong *)(*plVar3 + (longlong)iVar8 * 8) = lVar5;
          plVar4 = local_1a8;
        }
      }
      uVar11 = (int)uVar12 + 1;
      uVar10 = uVar10 + 0x20;
      param_2 = local_1a8;
      uVar12 = (ulonglong)uVar11;
    } while ((int)uVar11 < (int)plVar4[1]);
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FNumberFormattingOptions::FNumberFormattingOptions(local_130);
    lVar13 = 2;
    local_158 = 0;
    plStack_150 = (longlong *)0x0;
    local_128 = 2;
    lVar5 = FText::AsNumber(local_c0,*(undefined4 *)((longlong)param_2 + 0x14),local_130,&local_158)
    ;
    uVar11 = *(uint *)(param_2 + 2);
    local_1a8 = (longlong *)lVar5;
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_e8,L"Time played: {0}h {1}m",L"GFxVaultHunterProfileCard",
                       L"TimePlayedTimeHoursMinutFormat");
    puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_d0,uVar6);
    local_a8[0] = 1;
    local_80 = 0;
    local_78 = 4;
    local_a0 = (ulonglong)uVar11;
    FText::FText(local_68,lVar5);
    local_188 = local_a8;
    local_50 = 1;
    puStack_180 = local_48;
    local_168 = *puVar7;
    local_160 = puVar7[1];
    if (local_160 != 0) {
      LOCK();
      *(int *)(local_160 + 8) = *(int *)(local_160 + 8) + 1;
      UNLOCK();
    }
    uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_140,&local_188);
    uVar6 = FText::Format(local_100,&local_168,uVar6);
    FText::FText(local_118,uVar6);
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_f8 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar1 = (int *)((longlong)local_f8 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_f8 + 8))(local_f8,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_140);
    pcVar9 = &stack0xffffffffffffffe0;
    do {
      lVar13 = lVar13 + -1;
      pcVar2 = pcVar9 + -0x30;
      if (*pcVar2 != '\0') {
        *pcVar2 = '\0';
        plVar3 = *(longlong **)(pcVar9 + -0x40);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar3 + 1;
          lVar5 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
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
      }
      pcVar9 = pcVar2;
    } while (lVar13 != 0);
    plVar3 = (longlong *)puVar7[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
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
    plVar3 = *(longlong **)((longlong)local_1a8 + 8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
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
    (**(code **)(**(longlong **)(param_1 + 0x198) + 0x2b0))
              (*(longlong **)(param_1 + 0x198),local_118,1,0);
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_110 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar1 = (int *)((longlong)local_110 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_110 + 8))(local_110,1);
        }
      }
    }
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_e0 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar1 = (int *)((longlong)local_e0 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_e0 + 8))(local_e0,1);
        }
      }
    }
    plVar3 = plStack_150;
    if (plStack_150 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_150 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_150)(plStack_150);
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
  }
  return;
}



// FUNCTION 1410f2800 FUN_1410f2800 body=681 status=ok
// SIG undefined FUN_1410f2800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410f2800(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_118 [32];
  longlong local_f8 [3];
  longlong lStack_e0;
  undefined8 local_d8;
  undefined4 *local_c8;
  ulonglong *puStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [16];
  undefined4 local_68 [2];
  undefined8 local_60;
  longlong *local_50;
  char local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if (*(longlong *)(param_1 + 0x788) == 0) {
    return;
  }
  local_f8[1] = 0x19;
  local_f8[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_f8,0);
  FGenericPlatformString::Memcpy(local_f8[0],L"OptionsMenuTitleListItem",0x32);
  uVar9 = *(undefined8 *)(param_1 + 0x788);
  local_d8 = URemnantGameInstance::GetPrivateStaticClass();
  lVar6 = FUN_142ebcee0(uVar9,local_f8,local_d8,0);
  if (lVar6 != 0) {
    lVar7 = URemnantGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_1410f28cd;
  }
  lVar6 = 0;
LAB_1410f28cd:
  if (local_f8[0] != 0) {
    FMemory::Free();
  }
  if (lVar6 != 0) {
    puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_78,param_2);
    local_68[0] = 0;
    local_c8 = local_68;
    local_40 = '\0';
    puStack_c0 = local_38;
    local_f8[2] = *puVar8;
    lStack_e0 = puVar8[1];
    local_60 = 0;
    if (lStack_e0 != 0) {
      LOCK();
      *(int *)(lStack_e0 + 8) = *(int *)(lStack_e0 + 8) + 1;
      UNLOCK();
    }
    uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_b8,&local_c8);
    uVar9 = FText::Format(local_90,local_f8 + 2,uVar9);
    FText::FText(local_a8,uVar9);
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_88 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_b8);
    if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_50 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    plVar4 = (longlong *)puVar8[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    FUN_142ed3af0(lVar6,local_a8,0);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_a0 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    (**(code **)(*(longlong *)(lVar6 + 0x170) + 0x38))((longlong *)(lVar6 + 0x170),0);
    *(undefined1 *)(lVar6 + 0x198) = 1;
  }
  return;
}



// FUNCTION 1410f2ab0 FUN_1410f2ab0 body=23 status=ok
// SIG undefined FUN_1410f2ab0(void)

bool FUN_1410f2ab0(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x558))();
  return iVar1 != 0;
}



// FUNCTION 1410f2ad0 FUN_1410f2ad0 body=94 status=ok
// SIG undefined FUN_1410f2ad0(void)

void FUN_1410f2ad0(undefined8 param_1)

{
  longlong local_18 [2];
  
  local_18[1] = 5;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"show",10);
  FUN_142088910(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410f2b30 FUN_1410f2b30 body=271 status=ok
// SIG undefined FUN_1410f2b30(void)

longlong FUN_1410f2b30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                      undefined8 param_5,undefined1 param_6)

{
  longlong lVar1;
  longlong local_108 [2];
  undefined1 local_f8 [24];
  undefined1 local_e0 [104];
  undefined1 local_78;
  undefined1 local_75;
  undefined1 local_74;
  undefined8 local_60;
  
  FUN_140b99f70(local_f8);
  FText::operator=(local_e0,param_3);
  FText::operator=(local_f8,param_2);
  local_60 = param_5;
  local_78 = param_6;
  local_74 = 0;
  local_75 = param_4;
  lVar1 = FUN_1410f3080(param_1,local_f8);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x7a0) != 0)) {
    local_108[1] = 3;
    local_108[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108,0);
    FGenericPlatformString::Memcpy(local_108[0],&DAT_14469347c,6);
    FUN_142088910(*(undefined8 *)(lVar1 + 0x7a0),local_108);
    if (local_108[0] != 0) {
      FMemory::Free();
    }
  }
  FUN_140b9d1a0(local_f8);
  return lVar1;
}



// FUNCTION 1410f2c40 FUN_1410f2c40 body=712 status=ok
// SIG undefined FUN_1410f2c40(void)

undefined8
FUN_1410f2c40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined1 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined8 local_140;
  undefined8 local_138;
  undefined2 local_130;
  undefined1 local_128 [24];
  undefined1 local_110 [24];
  longlong local_f8;
  int local_f0;
  int local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined1 local_c6;
  undefined1 local_a5;
  undefined1 local_a4;
  undefined1 local_94;
  undefined8 local_90;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  FUN_140b99f70(local_128);
  FText::operator=(local_110,param_3);
  FText::operator=(local_128,param_2);
  local_e8 = *param_4;
  local_e4 = param_4[1];
  local_e0 = *(undefined8 *)(param_4 + 2);
  local_a5 = param_5;
  local_a4 = param_8;
  local_c6 = param_7;
  local_90 = param_6;
  local_94 = 1;
  uVar4 = FUN_1404b03b0();
  FText::FText(local_158,uVar4);
  local_130 = 1;
  local_140 = 0;
  local_138 = 0;
  uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_38,L"Confirm",L"GbxGFxCoreDialogBox",L"DialogChoice_Confirm");
  FText::operator=(local_158,uVar4);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  iVar3 = local_f0;
  lVar5 = (longlong)local_f0;
  local_140 = DAT_146875028;
  local_138 = DAT_146b3e2a0;
  local_f0 = local_f0 + 1;
  if (local_ec < local_f0) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_f8,iVar3);
  }
  lVar5 = lVar5 * 0x30 + local_f8;
  FText::FText(lVar5,local_158);
  *(undefined8 *)(lVar5 + 0x18) = local_140;
  *(undefined8 *)(lVar5 + 0x20) = local_138;
  *(undefined1 *)(lVar5 + 0x28) = (undefined1)local_130;
  *(undefined1 *)(lVar5 + 0x29) = local_130._1_1_;
  uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_20,L"Cancel",L"GbxGFxCoreDialogBox",L"DialogChoice_Cancel");
  FText::operator=(local_158,uVar4);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  iVar3 = local_f0;
  lVar5 = (longlong)local_f0;
  local_140 = DAT_146875030;
  local_138 = DAT_146b3e2b8;
  local_f0 = local_f0 + 1;
  if (local_ec < local_f0) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_f8,iVar3);
  }
  lVar5 = lVar5 * 0x30 + local_f8;
  FText::FText(lVar5,local_158);
  *(undefined8 *)(lVar5 + 0x18) = local_140;
  *(undefined8 *)(lVar5 + 0x20) = local_138;
  *(undefined1 *)(lVar5 + 0x28) = (undefined1)local_130;
  *(undefined1 *)(lVar5 + 0x29) = local_130._1_1_;
  uVar4 = FUN_1410f3080(param_1,local_128);
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_150 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar2 = (int *)((longlong)local_150 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  FUN_140b9d1a0(local_128);
  return uVar4;
}



// FUNCTION 1410f2f10 FUN_1410f2f10 body=355 status=ok
// SIG undefined FUN_1410f2f10(void)

undefined8
FUN_1410f2f10(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined4 *param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8,
             undefined4 param_9,undefined1 param_10)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_f8 [24];
  undefined1 local_e0 [24];
  longlong local_c8;
  int local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined1 local_96;
  undefined1 local_75;
  undefined1 local_74;
  undefined4 local_68;
  undefined8 local_60;
  
  FUN_140b99f70(local_f8);
  FText::operator=(local_e0,param_3);
  FText::operator=(local_f8,param_2);
  lVar3 = *param_4;
  local_b8 = *param_5;
  local_b4 = param_5[1];
  local_b0 = *(undefined8 *)(param_5 + 2);
  lVar4 = (longlong)(int)param_4[1] * 0x30 + lVar3;
  local_75 = param_6;
  local_74 = param_10;
  local_96 = param_8;
  local_60 = param_7;
  local_68 = param_9;
  iVar1 = local_c0;
  for (; lVar3 != lVar4; lVar3 = lVar3 + 0x30) {
    local_c0 = iVar1 + 1;
    if (local_bc < local_c0) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_c8,iVar1);
    }
    lVar5 = (longlong)iVar1 * 0x30 + local_c8;
    FText::FText(lVar5,lVar3);
    *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
    *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar3 + 0x20);
    *(undefined1 *)(lVar5 + 0x28) = *(undefined1 *)(lVar3 + 0x28);
    *(undefined1 *)(lVar5 + 0x29) = *(undefined1 *)(lVar3 + 0x29);
    iVar1 = local_c0;
  }
  local_c0 = iVar1;
  uVar2 = FUN_1410f3080(param_1,local_f8);
  FUN_140b9d1a0(local_f8);
  return uVar2;
}



// FUNCTION 1410f3080 FUN_1410f3080 body=491 status=ok
// SIG undefined FUN_1410f3080(void)

longlong FUN_1410f3080(longlong param_1,longlong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  
  lVar4 = *(longlong *)(param_2 + 0xa8);
  if (lVar4 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    uVar2 = FUN_142f30760();
    plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_1,uVar2);
    if (plVar3 == (longlong *)0x0) {
      return 0;
    }
    lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
    if (lVar4 == 0) {
      return 0;
    }
    lVar5 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return 0;
    }
    if (*(longlong *)(lVar4 + 0xb70) == 0) {
      return 0;
    }
    lVar5 = (**(code **)(*plVar3 + 0x18))(plVar3);
    if (lVar5 == 0) {
      return 0;
    }
    lVar4 = *(longlong *)(lVar4 + 0xb70);
    if (lVar4 == 0) {
      return 0;
    }
  }
  if (param_1 != 0) {
    uVar2 = FUN_142f30760();
    plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_1,uVar2);
    if ((plVar3 != (longlong *)0x0) && (lVar5 = (**(code **)(*plVar3 + 0x18))(plVar3), lVar5 != 0))
    {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar2 = FUN_141319ff0();
      lVar4 = FUN_1417985e0(uVar2,param_1,0,0,0,lVar4,0,0,0);
      if (lVar4 != 0) {
        FUN_1410b49a0(lVar4 + 0xc0,param_2);
        uVar6 = 1;
        if (*(char *)(param_2 + 0x83) != '\0') {
          uVar6 = 4;
        }
        *(undefined1 *)(lVar4 + 0x32) = uVar6;
        lVar4 = FUN_142f02280(lVar5,lVar4);
        if (lVar4 != 0) {
          lVar5 = UEditableTextBoxWidgetStyle::StaticClass();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            return lVar4;
          }
        }
        return 0;
      }
    }
  }
  return 0;
}



// FUNCTION 1410f3270 FUN_1410f3270 body=625 status=ok
// SIG undefined FUN_1410f3270(void)

longlong FUN_1410f3270(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 local_res8 [8];
  undefined1 local_158 [8];
  longlong *local_150;
  undefined8 local_140;
  undefined8 local_138;
  undefined2 local_130;
  undefined1 local_128 [8];
  longlong *local_120;
  undefined1 local_108 [48];
  longlong local_d8;
  int local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined2 local_85;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_60;
  
  FUN_140b99f70(local_108);
  local_c8 = *param_2;
  local_c4 = param_2[1];
  local_c0 = *(undefined8 *)(param_2 + 2);
  local_85 = 0x100;
  local_78 = 0;
  local_60 = 0;
  local_70 = param_3;
  if (param_1 != 0) {
    uVar4 = FUN_142f30760();
    plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_1,uVar4);
    if (plVar5 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
      if (lVar6 != 0) {
        lVar7 = FUN_1414d9130();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          local_60 = FUN_1411e1f30(lVar6);
        }
      }
    }
  }
  uVar4 = FUN_1404b03b0();
  FText::FText(local_158,uVar4);
  local_140 = 0;
  local_138 = 0;
  local_130 = 1;
  uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_128,L"Okay",L"GbxGFxCoreDialogBox",L"DialogChoice_Okay");
  FText::operator=(local_158,uVar4);
  if (local_120 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_120 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar1 = (int *)((longlong)local_120 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_120 + 8))(local_120,1);
      }
    }
  }
  puVar8 = (undefined8 *)FName::FName(local_res8,&DAT_1446a28b4,1);
  iVar2 = local_d0;
  lVar6 = (longlong)local_d0;
  local_140 = *puVar8;
  local_138 = DAT_146b3e2a0;
  local_d0 = local_d0 + 1;
  if (local_cc < local_d0) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_d8,iVar2);
  }
  lVar6 = lVar6 * 0x30 + local_d8;
  FText::FText(lVar6,local_158);
  *(undefined8 *)(lVar6 + 0x18) = local_140;
  *(undefined8 *)(lVar6 + 0x20) = local_138;
  *(undefined1 *)(lVar6 + 0x28) = (undefined1)local_130;
  *(undefined1 *)(lVar6 + 0x29) = local_130._1_1_;
  lVar6 = FUN_1410f3080(param_1,local_108);
  if (lVar6 != 0) {
    lVar7 = UEditableTextBoxWidgetStyle::StaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1410f3488;
  }
  lVar6 = 0;
LAB_1410f3488:
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_150 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar1 = (int *)((longlong)local_150 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  FUN_140b9d1a0(local_108);
  return lVar6;
}



// FUNCTION 1410f34f0 FUN_1410f34f0 body=851 status=ok
// SIG undefined FUN_1410f34f0(void)

longlong FUN_1410f34f0(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined8 local_150;
  undefined8 local_148;
  undefined2 local_140;
  undefined1 local_138 [48];
  longlong local_108;
  int local_100;
  int local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined2 local_b5;
  undefined4 local_a8;
  undefined8 local_a0;
  longlong local_90;
  undefined4 local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  FUN_140b99f70(local_138);
  local_88 = *param_2;
  FString::operator=(local_80,param_2 + 2);
  FString::operator=(local_70,param_2 + 6);
  FString::operator=(local_60,param_2 + 10);
  local_50 = *(undefined1 *)(param_2 + 0xe);
  lVar8 = 0;
  local_f8 = *param_3;
  local_f4 = param_3[1];
  local_f0 = *(undefined8 *)(param_3 + 2);
  local_b5 = 0x100;
  local_a8 = 0;
  local_90 = lVar8;
  local_a0 = param_4;
  if (param_1 != 0) {
    uVar4 = FUN_142f30760();
    plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_1,uVar4);
    if ((plVar5 != (longlong *)0x0) && (lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5), lVar6 != 0))
    {
      lVar7 = FUN_1414d9130();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_90 = FUN_1411e20c0(lVar6);
      }
    }
  }
  uVar4 = FUN_1404b03b0();
  FText::FText(local_168,uVar4);
  local_150 = 0;
  local_148 = 0;
  local_140 = 1;
  uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_48,L"Accept",L"GbxGFxCoreDialogBox",L"DialogChoice_AcceptText");
  FText::operator=(local_168,uVar4);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_40 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  iVar2 = local_100;
  lVar6 = (longlong)local_100;
  local_150 = DAT_146875028;
  local_100 = local_100 + 1;
  if (local_fc < local_100) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_108,iVar2);
  }
  lVar6 = lVar6 * 0x30 + local_108;
  FText::FText(lVar6,local_168);
  *(undefined8 *)(lVar6 + 0x18) = local_150;
  *(undefined8 *)(lVar6 + 0x20) = local_148;
  *(undefined1 *)(lVar6 + 0x28) = (undefined1)local_140;
  *(undefined1 *)(lVar6 + 0x29) = local_140._1_1_;
  uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_30,L"Refuse",L"GbxGFxCoreDialogBox",L"DialogChoice_RefuseText");
  FText::operator=(local_168,uVar4);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_28 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  iVar2 = local_100;
  lVar6 = (longlong)local_100;
  local_150 = DAT_146875030;
  local_100 = local_100 + 1;
  if (local_fc < local_100) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_108,iVar2);
  }
  lVar6 = lVar6 * 0x30 + local_108;
  FText::FText(lVar6,local_168);
  *(undefined8 *)(lVar6 + 0x18) = local_150;
  *(undefined8 *)(lVar6 + 0x20) = local_148;
  *(undefined1 *)(lVar6 + 0x28) = (undefined1)local_140;
  *(undefined1 *)(lVar6 + 0x29) = local_140._1_1_;
  lVar6 = FUN_1410f3080(param_1,local_138);
  if (lVar6 != 0) {
    lVar7 = AUGDungeon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1410f37e5;
  }
  lVar6 = lVar8;
LAB_1410f37e5:
  if (local_160 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_160 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_160)(local_160);
      LOCK();
      piVar1 = (int *)((longlong)local_160 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_160 + 8))(local_160,1);
      }
    }
  }
  FUN_140b9d1a0(local_138);
  return lVar6;
}



// FUNCTION 1410f3850 FUN_1410f3850 body=271 status=ok
// SIG undefined FUN_1410f3850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410f3850(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_1410c5310;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_14208c260(param_1,uVar2);
  if (local_28 != 0) {
    plVar3 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar3 = local_38;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    plVar3 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar3 = local_88;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410f3960 FUN_1410f3960 body=517 status=ok
// SIG undefined FUN_1410f3960(void)

undefined8
FUN_1410f3960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined1 param_5,undefined8 param_6,undefined1 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined8 local_130;
  undefined8 local_128;
  undefined2 local_120;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_f8 [24];
  undefined1 local_e0 [24];
  longlong local_c8;
  int local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined1 local_96;
  undefined1 local_75;
  undefined1 local_74;
  undefined8 local_60;
  
  FUN_140b99f70(local_f8);
  FText::operator=(local_e0,param_3);
  FText::operator=(local_f8,param_2);
  local_b8 = *param_4;
  local_b4 = param_4[1];
  local_b0 = *(undefined8 *)(param_4 + 2);
  local_75 = param_5;
  local_96 = param_7;
  local_60 = param_6;
  local_74 = 1;
  uVar4 = FUN_1404b03b0();
  FText::FText(local_148,uVar4);
  local_120 = 1;
  local_130 = 0;
  local_128 = 0;
  uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_118,L"Okay",L"GbxGFxCoreDialogBox",L"DialogChoice_Okay");
  FText::operator=(local_148,uVar4);
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  puVar5 = (undefined8 *)FName::FName(&param_6,&DAT_1446a2024,1);
  iVar3 = local_c0;
  lVar6 = (longlong)local_c0;
  local_130 = *puVar5;
  local_128 = DAT_146b3e2a0;
  local_c0 = local_c0 + 1;
  if (local_bc < local_c0) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_c8,iVar3);
  }
  lVar6 = lVar6 * 0x30 + local_c8;
  FText::FText(lVar6,local_148);
  *(undefined8 *)(lVar6 + 0x18) = local_130;
  *(undefined8 *)(lVar6 + 0x20) = local_128;
  *(undefined1 *)(lVar6 + 0x28) = (undefined1)local_120;
  *(undefined1 *)(lVar6 + 0x29) = local_120._1_1_;
  uVar4 = FUN_1410f3080(param_1,local_f8);
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_140 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  FUN_140b9d1a0(local_f8);
  return uVar4;
}



// FUNCTION 1410f3b70 FUN_1410f3b70 body=108 status=ok
// SIG undefined FUN_1410f3b70(void)

void FUN_1410f3b70(longlong param_1)

{
  longlong local_18 [2];
  
  if (*(longlong *)(param_1 + 0x7a0) != 0) {
    local_18[1] = 3;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],&DAT_14469347c,6);
    FUN_142088910(*(undefined8 *)(param_1 + 0x7a0),local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1410f3be0 FUN_1410f3be0 body=973 status=ok
// SIG undefined FUN_1410f3be0(void)

longlong FUN_1410f3be0(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 local_178;
  longlong *local_170;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined8 local_150;
  undefined8 local_148;
  undefined2 local_140;
  undefined1 local_138 [48];
  longlong local_108;
  int local_100;
  int local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined2 local_b5;
  undefined4 local_a8;
  undefined1 local_a4;
  longlong local_a0;
  undefined8 local_90;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  FUN_140b99f70(local_138);
  local_f8 = *param_3;
  uVar9 = 0;
  local_f4 = param_3[1];
  local_f0 = *(undefined8 *)(param_3 + 2);
  local_b5 = 0x100;
  local_a4 = 1;
  local_a8 = 0;
  local_a0 = param_1;
  if (param_1 != 0) {
    uVar5 = FUN_142f30760();
    plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_1,uVar5);
    if ((plVar6 != (longlong *)0x0) && (lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6), lVar7 != 0))
    {
      lVar8 = FUN_1414d9130();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        uVar9 = FUN_1411e6910(lVar7);
      }
    }
  }
  local_90 = uVar9;
  uVar9 = FUN_1404b03b0();
  FText::FText(local_168,uVar9);
  local_150 = 0;
  local_148 = 0;
  local_140 = 1;
  uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_48,L"Report",L"GbxGFxCoreDialogBox",L"DialogChoice_Report");
  FText::operator=(local_168,uVar9);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_40 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  iVar3 = local_100;
  lVar7 = (longlong)local_100;
  local_150 = DAT_146875028;
  local_148 = DAT_146b3e2a0;
  local_100 = local_100 + 1;
  if (local_fc < local_100) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_108,iVar3);
  }
  lVar7 = lVar7 * 0x30 + local_108;
  FText::FText(lVar7,local_168);
  *(undefined8 *)(lVar7 + 0x18) = local_150;
  *(undefined8 *)(lVar7 + 0x20) = local_148;
  *(undefined1 *)(lVar7 + 0x28) = (undefined1)local_140;
  *(undefined1 *)(lVar7 + 0x29) = local_140._1_1_;
  uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_30,L"Cancel",L"GbxGFxCoreDialogBox",L"DialogChoice_Cancel");
  FText::operator=(local_168,uVar9);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_28 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_28 + 8))(local_28,1);
      }
    }
  }
  iVar3 = local_100;
  lVar7 = (longlong)local_100;
  local_150 = DAT_146875030;
  local_148 = DAT_146b3e2b8;
  local_100 = local_100 + 1;
  if (local_fc < local_100) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_108,iVar3);
  }
  lVar7 = lVar7 * 0x30 + local_108;
  FText::FText(lVar7,local_168);
  *(undefined8 *)(lVar7 + 0x18) = local_150;
  *(undefined8 *)(lVar7 + 0x20) = local_148;
  *(undefined1 *)(lVar7 + 0x28) = (undefined1)local_140;
  *(undefined1 *)(lVar7 + 0x29) = local_140._1_1_;
  lVar7 = FUN_1410f3080(param_1,local_138);
  if (lVar7 != 0) {
    lVar8 = AUGDungeon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      local_170 = (longlong *)param_2[1];
      local_178 = *param_2;
      if (local_170 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_170 + 1) = (int)local_170[1] + 1;
        UNLOCK();
      }
      if ((undefined8 *)(lVar7 + 0x818) != &local_178) {
        *(undefined8 *)(lVar7 + 0x818) = local_178;
        local_178 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(lVar7 + 0x820,&local_170);
      }
      plVar6 = local_170;
      if (local_170 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_170 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_170)(local_170);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_170 + 8))(local_170,1);
          }
        }
      }
      goto LAB_1410f3f4f;
    }
  }
  lVar7 = 0;
LAB_1410f3f4f:
  if (local_160 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_160 + 1;
    lVar8 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_160)(local_160);
      LOCK();
      piVar1 = (int *)((longlong)local_160 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_160 + 8))(local_160,1);
      }
    }
  }
  FUN_140b9d1a0(local_138);
  return lVar7;
}



// FUNCTION 1410f3fb0 FUN_1410f3fb0 body=416 status=ok
// SIG undefined FUN_1410f3fb0(void)

void FUN_1410f3fb0(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong local_28 [2];
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 100);
  if (cVar3 != '\0') {
    plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 100);
    (**(code **)(*plVar4 + 0x278))(plVar4,1);
  }
  FUN_142ecffe0(param_1);
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = *(longlong *)(DAT_146b33f38 + 0x98);
  if (lVar1 != 0) {
    plVar8 = *(longlong **)(lVar1 + 0x40);
    plVar4 = plVar8 + *(int *)(lVar1 + 0x48);
    if (plVar8 != plVar4) {
      do {
        lVar1 = *plVar8;
        if (lVar1 != 0) {
          local_28[0] = 0;
          local_28[1] = 0xf;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
          FGenericPlatformString::Memcpy(local_28[0],L"BTN_StatusList",0x1e);
          uVar5 = URemnantGameInstance::GetPrivateStaticClass();
          lVar6 = FUN_142ebcee0(param_1,local_28,uVar5,0);
          if (lVar6 == 0) {
LAB_1410f40d1:
            lVar6 = 0;
          }
          else {
            lVar7 = URemnantGameInstance::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) goto LAB_1410f40d1;
          }
          if (local_28[0] != 0) {
            FMemory::Free();
          }
          if (lVar6 != 0) {
            FUN_142ed2600(lVar6,3);
            FUN_142ed3af0(lVar6,lVar1 + 0x30,0);
            if (*(longlong *)(lVar6 + 0x308) != 0) {
              FUN_142088910();
            }
          }
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001410f4149. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2c8))(param_1,1,0);
  return;
}



// FUNCTION 1410f4150 FUN_1410f4150 body=1601 status=ok
// SIG undefined FUN_1410f4150(void)

void FUN_1410f4150(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 local_res8;
  undefined8 *local_68;
  undefined8 local_60;
  longlong local_58 [3];
  undefined4 local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0x6b0) != 0) {
    *(undefined8 *)(param_1 + 0x11d8) = 0;
    *(undefined4 *)(param_1 + 0x11e8) = 0;
    if (*(int *)(param_1 + 0x11ec) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x11e0,0);
    }
    local_68 = (undefined8 *)0x0;
    local_60 = 1;
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_68,0);
    *local_68 = *(undefined8 *)(param_1 + 0x6b0);
    FString::FString(local_68 + 1,param_1 + 0x6b8);
    puVar8 = local_68;
    local_res8 = 0;
    if (*(longlong *)(param_1 + 0x700) != 0) {
      puVar2 = local_68 + (longlong)(int)local_60 * 3;
      for (puVar10 = local_68; puVar10 != puVar2; puVar10 = puVar10 + 3) {
        cVar6 = FSoftObjectPath::operator==(puVar10,param_1 + 0x700);
        if (cVar6 != '\0') {
          if ((int)(((longlong)puVar10 - (longlong)puVar8) / 0x18) != -1) goto LAB_1410f429a;
          break;
        }
      }
      uVar5 = local_60;
      lVar11 = (longlong)(int)local_60;
      iVar7 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar7);
      if (local_60._4_4_ < iVar7) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_68,uVar5 & 0xffffffff);
      }
      local_68[lVar11 * 3] = *(undefined8 *)(param_1 + 0x700);
      FString::FString(local_68 + lVar11 * 3 + 1,param_1 + 0x708);
    }
LAB_1410f429a:
    puVar8 = local_68;
    local_res8 = 0;
    if (*(longlong *)(param_1 + 0x6d8) != 0) {
      puVar2 = local_68 + (longlong)(int)local_60 * 3;
      for (puVar10 = local_68; puVar10 != puVar2; puVar10 = puVar10 + 3) {
        cVar6 = FSoftObjectPath::operator==(puVar10,param_1 + 0x6d8);
        if (cVar6 != '\0') {
          if ((int)(((longlong)puVar10 - (longlong)puVar8) / 0x18) != -1) goto LAB_1410f434a;
          break;
        }
      }
      uVar5 = local_60;
      lVar11 = (longlong)(int)local_60;
      iVar7 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar7);
      if (local_60._4_4_ < iVar7) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_68,uVar5 & 0xffffffff);
      }
      local_68[lVar11 * 3] = *(undefined8 *)(param_1 + 0x6d8);
      FString::FString(local_68 + lVar11 * 3 + 1,param_1 + 0x6e0);
    }
LAB_1410f434a:
    puVar8 = local_68;
    local_res8 = 0;
    if (*(longlong *)(param_1 + 0x728) != 0) {
      puVar2 = local_68 + (longlong)(int)local_60 * 3;
      for (puVar10 = local_68; puVar10 != puVar2; puVar10 = puVar10 + 3) {
        cVar6 = FSoftObjectPath::operator==(puVar10,param_1 + 0x728);
        if (cVar6 != '\0') {
          if ((int)(((longlong)puVar10 - (longlong)puVar8) / 0x18) != -1) goto LAB_1410f43fa;
          break;
        }
      }
      uVar5 = local_60;
      lVar11 = (longlong)(int)local_60;
      iVar7 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar7);
      if (local_60._4_4_ < iVar7) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_68,uVar5 & 0xffffffff);
      }
      local_68[lVar11 * 3] = *(undefined8 *)(param_1 + 0x728);
      FString::FString(local_68 + lVar11 * 3 + 1,param_1 + 0x730);
    }
LAB_1410f43fa:
    puVar8 = local_68;
    local_res8 = 0;
    if (*(longlong *)(param_1 + 0x750) != 0) {
      puVar2 = local_68 + (longlong)(int)local_60 * 3;
      for (puVar10 = local_68; puVar10 != puVar2; puVar10 = puVar10 + 3) {
        cVar6 = FSoftObjectPath::operator==(puVar10,param_1 + 0x750);
        if (cVar6 != '\0') {
          if ((int)(((longlong)puVar10 - (longlong)puVar8) / 0x18) != -1) goto LAB_1410f44aa;
          break;
        }
      }
      uVar5 = local_60;
      lVar11 = (longlong)(int)local_60;
      iVar7 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar7);
      if (local_60._4_4_ < iVar7) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_68,uVar5 & 0xffffffff);
      }
      local_68[lVar11 * 3] = *(undefined8 *)(param_1 + 0x750);
      FString::FString(local_68 + lVar11 * 3 + 1,param_1 + 0x758);
    }
LAB_1410f44aa:
    puVar8 = local_68;
    local_res8 = 0;
    if (*(longlong *)(param_1 + 0x778) != 0) {
      puVar2 = local_68 + (longlong)(int)local_60 * 3;
      for (puVar10 = local_68; puVar10 != puVar2; puVar10 = puVar10 + 3) {
        cVar6 = FSoftObjectPath::operator==(puVar10,param_1 + 0x778);
        if (cVar6 != '\0') {
          if ((int)(((longlong)puVar10 - (longlong)puVar8) / 0x18) != -1) goto LAB_1410f455a;
          break;
        }
      }
      uVar5 = local_60;
      lVar11 = (longlong)(int)local_60;
      iVar7 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar7);
      if (local_60._4_4_ < iVar7) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_68,uVar5 & 0xffffffff);
      }
      local_68[lVar11 * 3] = *(undefined8 *)(param_1 + 0x778);
      FString::FString(local_68 + lVar11 * 3 + 1,param_1 + 0x780);
    }
LAB_1410f455a:
    puVar8 = local_68;
    local_res8 = 0;
    if (*(longlong *)(param_1 + 0x7a0) != 0) {
      puVar2 = local_68 + (longlong)(int)local_60 * 3;
      for (puVar10 = local_68; puVar10 != puVar2; puVar10 = puVar10 + 3) {
        cVar6 = FSoftObjectPath::operator==(puVar10,param_1 + 0x7a0);
        if (cVar6 != '\0') {
          if ((int)(((longlong)puVar10 - (longlong)puVar8) / 0x18) != -1) goto LAB_1410f460a;
          break;
        }
      }
      uVar5 = local_60;
      lVar11 = (longlong)(int)local_60;
      iVar7 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar7);
      if (local_60._4_4_ < iVar7) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(&local_68,uVar5 & 0xffffffff);
      }
      local_68[lVar11 * 3] = *(undefined8 *)(param_1 + 0x7a0);
      FString::FString(local_68 + lVar11 * 3 + 1,param_1 + 0x7a8);
    }
LAB_1410f460a:
    local_58[0] = 0;
    local_58[1] = 0x1f;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
    FGenericPlatformString::Memcpy(local_58[0],L"RequestAsyncLoad ArrayDelegate",0x3e);
    FWeakObjectPtr::operator=(&local_res8,param_1);
    uVar3 = (undefined4)local_res8;
    uVar4 = local_res8._4_4_;
    local_58[2] = 0;
    local_40 = 0;
    puVar8 = (undefined8 *)operator_new(0x20,local_58 + 2);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = &PTR_GetPoolName_1446a5300;
      *(undefined4 *)(puVar8 + 1) = uVar3;
      *(undefined4 *)((longlong)puVar8 + 0xc) = uVar4;
      uVar9 = FDelegateHandle::GenerateNewID();
      puVar8[3] = uVar9;
      *puVar8 = &PTR_GetPoolName_1446a5348;
    }
    lVar11 = FUN_1422ca050();
    puVar8 = (undefined8 *)
             FUN_142840b00(lVar11 + 0x178,local_38,&local_68,local_58 + 2,0,0,0,local_58);
    if ((undefined8 *)(param_1 + 0xc18) != puVar8) {
      *(undefined8 *)(param_1 + 0xc18) = *puVar8;
      *puVar8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xc20,puVar8 + 1);
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_30 + 1;
      lVar11 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    if ((int)local_60 != 0) {
      plVar12 = local_68 + 1;
      iVar7 = (int)local_60;
      do {
        if (*plVar12 != 0) {
          FMemory::Free();
        }
        plVar12 = plVar12 + 3;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (local_68 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1410f47a0 FUN_1410f47a0 body=717 status=ok
// SIG undefined FUN_1410f47a0(void)

undefined8
FUN_1410f47a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             undefined1 param_5,undefined8 param_6,undefined1 param_7,undefined4 param_8,
             undefined1 param_9)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined8 local_140;
  undefined8 local_138;
  undefined2 local_130;
  undefined1 local_128 [24];
  undefined1 local_110 [24];
  longlong local_f8;
  int local_f0;
  int local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined1 local_c6;
  undefined1 local_a5;
  undefined1 local_a4;
  undefined4 local_98;
  undefined8 local_90;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  FUN_140b99f70(local_128);
  FText::operator=(local_110,param_3);
  FText::operator=(local_128,param_2);
  local_e8 = *param_4;
  local_e4 = param_4[1];
  local_e0 = *(undefined8 *)(param_4 + 2);
  local_a5 = param_5;
  local_a4 = param_9;
  local_c6 = param_7;
  local_90 = param_6;
  local_98 = param_8;
  uVar4 = FUN_1404b03b0();
  FText::FText(local_158,uVar4);
  local_130 = 1;
  local_140 = 0;
  local_138 = 0;
  uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_38,&DAT_1446a2080,L"GbxGFxCoreDialogBox",L"DialogChoice_Yes");
  FText::operator=(local_158,uVar4);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  iVar3 = local_f0;
  lVar5 = (longlong)local_f0;
  local_140 = DAT_146875028;
  local_138 = DAT_146b3e2a0;
  local_f0 = local_f0 + 1;
  if (local_ec < local_f0) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_f8,iVar3);
  }
  lVar5 = lVar5 * 0x30 + local_f8;
  FText::FText(lVar5,local_158);
  *(undefined8 *)(lVar5 + 0x18) = local_140;
  *(undefined8 *)(lVar5 + 0x20) = local_138;
  *(undefined1 *)(lVar5 + 0x28) = (undefined1)local_130;
  *(undefined1 *)(lVar5 + 0x29) = local_130._1_1_;
  uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_20,&DAT_1446a20d0,L"GbxGFxCoreDialogBox",L"DialogChoice_No");
  FText::operator=(local_158,uVar4);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  iVar3 = local_f0;
  lVar5 = (longlong)local_f0;
  local_140 = DAT_146875030;
  local_138 = DAT_146b3e2b8;
  local_f0 = local_f0 + 1;
  if (local_ec < local_f0) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_f8,iVar3);
  }
  lVar5 = lVar5 * 0x30 + local_f8;
  FText::FText(lVar5,local_158);
  *(undefined8 *)(lVar5 + 0x18) = local_140;
  *(undefined8 *)(lVar5 + 0x20) = local_138;
  *(undefined1 *)(lVar5 + 0x28) = (undefined1)local_130;
  *(undefined1 *)(lVar5 + 0x29) = local_130._1_1_;
  uVar4 = FUN_1410f3080(param_1,local_128);
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_150 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar2 = (int *)((longlong)local_150 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  FUN_140b9d1a0(local_128);
  return uVar4;
}



// FUNCTION 1410f4a70 FUN_1410f4a70 body=413 status=ok
// SIG undefined FUN_1410f4a70(void)

undefined8 FUN_1410f4a70(longlong param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
LAB_1410f4bbb:
    lVar3 = 0;
  }
  else {
    lVar2 = FWeakObjectPtr::Get(param_2 + 0x2f4);
    if (lVar2 == 0) goto LAB_1410f4bbb;
    lVar3 = UUGStartScreenUW::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1410f4bbb;
    lVar3 = FWeakObjectPtr::Get(lVar2 + 0x2ec);
    if (lVar3 == 0) {
LAB_1410f4b2b:
      lVar3 = 0;
    }
    else {
      lVar4 = UXSkinAnimationProfile::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) goto LAB_1410f4b2b;
    }
    lVar2 = FWeakObjectPtr::Get(lVar2 + 0x2f4);
    if (lVar2 != 0) {
      lVar4 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar2 = FWeakObjectPtr::Get(lVar2 + 0x2ec);
        if (lVar2 != 0) {
          lVar4 = UUGLoadoutBarUW::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) goto LAB_1410f4bbf;
        }
      }
    }
  }
  lVar2 = 0;
LAB_1410f4bbf:
  if (((*(longlong *)(param_1 + 0x348) != 0) && (lVar3 != 0)) && (lVar2 != 0)) {
    FUN_141457460(*(longlong *)(param_1 + 0x348),*(undefined8 *)(lVar2 + 0x10),lVar3,param_3);
    return 1;
  }
  return 0;
}



// FUNCTION 1410f4c10 FUN_1410f4c10 body=533 status=ok
// SIG undefined FUN_1410f4c10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410f4c10(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  *(longlong *)(param_1 + 0x28) = param_2;
  *(longlong *)(param_1 + 0x40) = param_4;
  *(longlong *)(param_1 + 0x30) = param_3;
  if (((param_2 == 0) || (param_4 == 0)) || (param_3 == 0)) {
    UObject::ConditionalBeginDestroy();
  }
  else {
    if (*(longlong *)(param_2 + 400) == 0) {
      uVar7 = *(undefined8 *)(param_2 + 0x3f8);
    }
    else {
      uVar7 = *(undefined8 *)(*(longlong *)(param_2 + 400) + 0x90);
    }
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f4d170;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      plVar3[2] = (longlong)FUN_1410c5930;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143f4d1b8;
    }
    lVar4 = 0;
    local_88 = 0;
    local_80 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_90 = 0xbf800000;
    local_98 = 0;
    local_70 = 0;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar7,param_1 + 0x38,&local_88,param_5);
    if (local_28 != 0) {
      plVar8 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar8 = local_38;
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar5 = FMemory::Realloc(plVar3,0,0);
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
    }
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
    }
    *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | 0x40000000;
  }
  return;
}



// FUNCTION 1410f4e30 FUN_1410f4e30 body=601 status=ok
// SIG undefined FUN_1410f4e30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410f4e30(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar5 = 0;
  iVar2 = *(int *)(param_1 + 0x688);
  if (*(int *)(param_1 + 0x7a0) < iVar2) {
    lVar5 = (longlong)*(int *)(param_1 + 0x7a0) * 0x50 + *(longlong *)(param_1 + 0x680);
  }
  else if (0 < iVar2) {
    lVar5 = (longlong)(iVar2 + -1) * 0x50 + *(longlong *)(param_1 + 0x680);
  }
  if ((*(longlong *)(param_1 + 0x6c0) != 0) && (lVar5 != 0)) {
    cVar3 = FUN_142088620();
    if (cVar3 == '\0') {
      FUN_1410ec430(param_1);
    }
    else {
      *(undefined1 *)(param_1 + 0x794) = 1;
      if (*(char *)(param_1 + 0x795) != '\0') {
        *(undefined1 *)(param_1 + 0x795) = 0;
        local_a8 = (code *)0x0;
        uStack_a0 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
        FGenericPlatformString::Memcpy(local_a8,L"hide",10);
        FUN_142088910(*(undefined8 *)(param_1 + 0x6c0),&local_a8);
        if (local_a8 != (code *)0x0) {
          FMemory::Free();
        }
      }
      uVar1 = *(undefined4 *)(lVar5 + 0x20);
      local_a8 = FUN_1410e3c00;
      uStack_a0 = uStack_a0 & 0xffffffff00000000;
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar4 + 1,param_1);
        *(undefined4 *)(plVar4 + 2) = (undefined4)local_a8;
        *(undefined4 *)((longlong)plVar4 + 0x14) = local_a8._4_4_;
        *(undefined4 *)(plVar4 + 3) = (undefined4)uStack_a0;
        *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_a0._4_4_;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar4[5] = lVar5;
        *plVar4 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_98 = 0;
      local_90 = 0;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_98);
      }
      FWeakObjectPtr::operator=(local_88,0);
      local_b0 = 0xbf800000;
      local_b8 = 0;
      local_80 = 0;
      local_48 = (longlong *)0x0;
      local_38 = 0;
      local_78 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(param_1 + 0x340,param_1 + 0x760,&local_98,uVar1);
      if (local_38 != 0) {
        plVar6 = local_68;
        if (local_48 != (longlong *)0x0) {
          plVar6 = local_48;
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6,0);
        }
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        lVar5 = FMemory::Realloc(plVar4,0,0);
        if (lVar5 != 0) {
          FMemory::Free(lVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 1410f5090 FUN_1410f5090 body=435 status=ok
// SIG undefined FUN_1410f5090(void)

void FUN_1410f5090(longlong param_1,char param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *local_18;
  undefined8 local_10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146875068) && (_Init_thread_header(&DAT_146875068), DAT_146875068 == -1))
  {
    FName::FName(&DAT_146875060,L"CreditsMenu",1);
    _Init_thread_footer(&DAT_146875068);
  }
  plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x58c);
  if (plVar4 != (longlong *)0x0) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar7 = 0;
      local_18 = (longlong *)0x0;
      local_10 = 0;
      (**(code **)(*plVar4 + 0x1060))(plVar4,&local_18);
      uVar8 = (ulonglong)((longlong)(local_18 + (int)local_10) + (7 - (longlong)local_18)) >> 3;
      if (local_18 + (int)local_10 < local_18) {
        uVar8 = uVar7;
      }
      plVar4 = local_18;
      if (uVar8 != 0) {
        do {
          plVar1 = (longlong *)*plVar4;
          if (plVar1 != (longlong *)0x0) {
            uVar6 = UScrollBox::GetPrivateStaticClass();
            lVar5 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar6);
            if (lVar5 != 0) {
              cVar3 = FUN_142dafb10(lVar5 + 0x290,&DAT_146875060);
              if (param_2 != cVar3) {
                if (param_2 == '\0') {
                  FUN_142dbb5d0(lVar5 + 0x290,&DAT_146875060);
                }
                else {
                  FUN_142dafbc0();
                }
              }
            }
          }
          uVar7 = uVar7 + 1;
          plVar4 = plVar4 + 1;
        } while (uVar7 != uVar8);
      }
      if (local_18 != (longlong *)0x0) {
        FMemory::Free(local_18);
      }
    }
  }
  return;
}



// FUNCTION 1410f5250 FUN_1410f5250 body=83 status=ok
// SIG undefined FUN_1410f5250(void)

void FUN_1410f5250(undefined8 param_1)

{
  undefined8 *puVar1;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_58[0] = FUN_1410c53f0;
  FUN_142edaae0(param_1,local_58);
  return;
}



// FUNCTION 1410f52b0 FUN_1410f52b0 body=817 status=ok
// SIG undefined FUN_1410f52b0(void)

void FUN_1410f52b0(longlong param_1,float param_2)

{
  int *piVar1;
  longlong *plVar2;
  void *_Dst;
  int iVar3;
  longlong lVar4;
  void *_Src;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  float fVar13;
  int local_res8 [2];
  char local_res10 [8];
  longlong local_98 [2];
  undefined1 local_88 [8];
  longlong *local_80;
  longlong local_70;
  int *local_68;
  char *local_60;
  longlong *local_58;
  
  if (1e-08 < ABS(*(float *)(param_1 + 0x82c) - param_2)) {
    local_98[1] = 3;
    local_res10[0] = *(float *)(param_1 + 0x82c) < param_2;
    local_98[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98,0);
    FGenericPlatformString::Memcpy(local_98[0],&DAT_144693f04,6);
    param_2 = (float)*(int *)(param_1 + 0x830) * param_2;
    local_res8[0] = (int)ROUND((param_2 + param_2) - 0.5) >> 1;
    local_68 = local_res8;
    local_60 = local_res10;
    local_58 = local_98;
    local_70 = param_1;
    iVar6 = FUN_1410bd8d0(&local_70);
    uVar10 = (ulonglong)iVar6;
    if ((iVar6 < 0) || (*(int *)(param_1 + 0x840) <= iVar6)) {
      *(undefined4 *)(param_1 + 0x828) = 0xffffffff;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x838);
      *(int *)(param_1 + 0x828) = iVar6;
      cVar5 = FUN_142ebdd70(param_1);
      iVar11 = 0xe;
      if (cVar5 != '\0') {
        iVar11 = 8;
      }
      lVar12 = uVar10 * 0x18;
      iVar11 = iVar11 + *(int *)(lVar12 + 0x14 + lVar4);
      if (*(longlong *)(param_1 + 0x848) != 0) {
        if ((local_res10[0] == '\0') || (iVar11 <= *(int *)(param_1 + 0x830))) {
          fVar13 = (float)*(int *)(lVar12 + 0x14 + *(longlong *)(param_1 + 0x838)) /
                   (float)*(int *)(param_1 + 0x830);
        }
        else {
          fVar13 = 1.0;
        }
        *(float *)(param_1 + 0x82c) = fVar13;
        FUN_142f0fa70();
      }
      plVar2 = (longlong *)(param_1 + 0x818);
      *(undefined4 *)(param_1 + 0x820) = 0;
      if ((*(int *)(param_1 + 0x824) < 0) && (*(int *)(param_1 + 0x824) != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar2);
      }
      if ((undefined2 *)*plVar2 != (undefined2 *)0x0) {
        *(undefined2 *)*plVar2 = 0;
      }
      if (iVar6 < *(int *)(param_1 + 0x840)) {
        do {
          lVar4 = *(longlong *)(param_1 + 0x838);
          if (iVar11 < *(int *)(lVar12 + 0x14 + lVar4)) break;
          iVar3 = *(int *)(lVar12 + 8 + lVar4);
          _Src = *(void **)(lVar12 + lVar4);
          iVar6 = iVar3 + -1;
          if (iVar3 == 0) {
            iVar6 = 0;
          }
          if (iVar6 != 0) {
            iVar3 = *(int *)(param_1 + 0x820);
            iVar7 = (uint)(iVar3 == 0) + iVar3 + iVar6;
            *(int *)(param_1 + 0x820) = iVar7;
            if (*(int *)(param_1 + 0x824) < iVar7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar2,iVar3);
            }
            _Dst = (void *)(*plVar2 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar6 * 2);
            *(undefined2 *)((longlong)iVar6 * 2 + (longlong)_Dst) = 0;
          }
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
          lVar12 = lVar12 + 0x18;
        } while ((int)uVar9 < *(int *)(param_1 + 0x840));
      }
      lVar4 = **(longlong **)(param_1 + 0x778);
      uVar8 = FText::FromString(local_88,plVar2);
      (**(code **)(lVar4 + 0x2b0))(*(undefined8 *)(param_1 + 0x778),uVar8,1,0);
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_80 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)local_80 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
    }
    if (local_98[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1410f55f0 FUN_1410f55f0 body=155 status=ok
// SIG undefined FUN_1410f55f0(void)

void FUN_1410f55f0(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    local_68 = (undefined4)param_1;
    uStack_64 = (undefined4)((ulonglong)param_1 >> 0x20);
    *puVar1 = &PTR_FUN_14465fbc8;
    *(undefined4 *)(puVar1 + 1) = local_68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_64;
    *(undefined4 *)(puVar1 + 2) = param_2;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_5c;
    *(undefined4 *)(puVar1 + 3) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = local_resc;
  }
  local_58[0] = &LAB_1410c52d0;
  FUN_14208c4f0(param_1,local_58);
  return;
}



// FUNCTION 1410f5690 FUN_1410f5690 body=281 status=ok
// SIG undefined FUN_1410f5690(void)

void FUN_1410f5690(longlong param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  float fVar7;
  float local_res8 [2];
  undefined4 local_res18 [4];
  
  iVar1 = *(int *)(param_1 + 0x6e8);
  iVar4 = 0;
  if (0 < iVar1) {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x6e0) + 8 + lVar5 * 0x10);
      if (lVar2 != 0) {
        FUN_142087ad0(lVar2,local_res18,local_res8);
        fVar7 = local_res8[0] - param_2;
        FUN_14208ff10(lVar2,local_res18[0],fVar7);
        cVar3 = FUN_1410cfe60(param_1);
        if ((cVar3 == '\0') || (iVar4 != iVar1 + -1)) {
          cVar3 = FUN_1410cfe60(param_1);
          if ((cVar3 == '\0') && (lVar5 == 0)) {
            *(bool *)(param_1 + 0x7b2) =
                 *(float *)(param_1 + 0x790) <= fVar7 && fVar7 != *(float *)(param_1 + 0x790);
          }
        }
        else {
          dVar6 = (double)FUN_142eeca30(lVar2);
          *(bool *)(param_1 + 0x7b0) = dVar6 + (double)fVar7 < (double)*(float *)(param_1 + 0x78c);
        }
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
  }
  return;
}



// FUNCTION 1410f57b0 FUN_1410f57b0 body=461 status=ok
// SIG undefined FUN_1410f57b0(void)

void FUN_1410f57b0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong local_58 [2];
  code *local_48;
  undefined4 uStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [16];
  
  iVar4 = *(int *)(param_1 + 0x7a0);
  iVar3 = *(int *)(param_1 + 0x688);
  if (iVar3 <= iVar4) {
    if (iVar3 < 1) {
      return;
    }
    iVar4 = iVar3 + -1;
  }
  lVar8 = (longlong)iVar4 * 0x50 + *(longlong *)(param_1 + 0x680);
  if ((((lVar8 != 0) && (plVar2 = (longlong *)(param_1 + 0x768), *plVar2 == 0)) &&
      (*(int *)(param_1 + 0x6b8) < *(int *)(param_1 + 0x690))) &&
     (*(int *)(param_1 + 0x798) < *(int *)(lVar8 + 0x18))) {
    lVar5 = FUN_1422ca050();
    local_58[1] = 0x20;
    local_58[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
    FGenericPlatformString::Memcpy(local_58[0],L"RequestAsyncLoad SingleDelegate",0x40);
    iVar4 = *(int *)(param_1 + 0x798);
    lVar8 = *(longlong *)(lVar8 + 0x10);
    local_48 = FUN_1410d61c0;
    uStack_40 = 0;
    uVar6 = TBaseDelegate<TTypeWrapper<void>_>::CreateUObject<AFlarePlayerController>
                      (local_28,param_1,&local_48);
    plVar7 = (longlong *)
             FStreamableManager::RequestAsyncLoad
                       (lVar5 + 0x178,local_38,(longlong)iVar4 * 0x20 + lVar8,uVar6,0,0,0,local_58);
    if (plVar2 != plVar7) {
      *plVar2 = *plVar7;
      *plVar7 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x770,plVar7 + 1);
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_30 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1410f5980 FUN_1410f5980 body=350 status=ok
// SIG undefined FUN_1410f5980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410f5980(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  FWeakObjectPtr::operator=(&local_e0,param_3);
  FWeakObjectPtr::operator=(&local_e8,param_2);
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605c80;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_e8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_e4;
    *(undefined4 *)(puVar1 + 3) = local_e0;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = local_dc;
  }
  local_d8[0] = &LAB_1410c53e0;
  uVar2 = FUN_1420849a0(param_1,local_88,local_d8);
  FUN_14208c260(param_1,uVar2);
  if (local_48 != 0) {
    plVar3 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar3 = local_58;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    plVar3 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar3 = local_a8;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410f5ae0 FUN_1410f5ae0 body=140 status=ok
// SIG undefined FUN_1410f5ae0(void)

void FUN_1410f5ae0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
  }
  local_58[0] = &LAB_1410c5630;
  FUN_14208c4f0(param_1,local_58);
  return;
}



// FUNCTION 1410f5b70 FUN_1410f5b70 body=118 status=ok
// SIG undefined FUN_1410f5b70(void)

void FUN_1410f5b70(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x1c);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x1c);
    lVar3 = FUN_1424503b0(uVar2);
    if (lVar3 != 0) {
      uVar2 = 1;
      goto LAB_1410f5bae;
    }
  }
  uVar2 = 0;
LAB_1410f5bae:
  local_res8 = *(undefined4 *)(param_1 + 0x14);
  local_resc = *(undefined4 *)(param_1 + 0x18);
  FLatentResponse::FinishAndTriggerIf
            (param_2,uVar2,*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10),&local_res8)
  ;
  return;
}



// FUNCTION 1410f5bf0 FUN_1410f5bf0 body=59 status=ok
// SIG undefined FUN_1410f5bf0(void)

void FUN_1410f5bf0(longlong param_1,undefined8 param_2)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res8 = *(undefined4 *)(param_1 + 0x24);
  local_resc = *(undefined4 *)(param_1 + 0x28);
  FLatentResponse::FinishAndTriggerIf
            (param_2,*(int *)(param_1 + 0x10) == 0,*(undefined8 *)(param_1 + 0x18),
             *(undefined4 *)(param_1 + 0x20),&local_res8);
  return;
}



// FUNCTION 1410f5c30 FUN_1410f5c30 body=836 status=ok
// SIG undefined FUN_1410f5c30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410f5c30(undefined8 param_1)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  char cVar3;
  DWORD DVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  void *pvVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined1 auStack_1c8 [32];
  undefined2 local_1a8;
  undefined4 local_198;
  undefined4 local_194;
  void *local_190;
  undefined8 local_188;
  code *local_178 [2];
  longlong local_168 [4];
  longlong *local_148;
  int local_138;
  undefined1 local_128 [192];
  longlong local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  FWeakObjectPtr::operator=(&local_198,param_1);
  uVar2 = local_194;
  uVar10 = local_198;
  local_148 = (longlong *)0x0;
  local_138 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_168);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_1444f8920;
    puVar5[1] = param_1;
    *(undefined4 *)(puVar5 + 2) = uVar10;
    *(undefined4 *)((longlong)puVar5 + 0x14) = uVar2;
  }
  local_190 = (void *)0x0;
  local_178[0] = FUN_1410c5550;
  local_188 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_190,0);
  local_1a8 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>(local_190,0x11,"UpdatePlayerName");
  FUN_1410b2b20(local_128,&local_190,local_178);
  uVar6 = FUN_1410ca460(local_128,local_178);
  FUN_14208c260(param_1,uVar6);
  if (local_138 != 0) {
    plVar9 = local_168;
    if (local_148 != (longlong *)0x0) {
      plVar9 = local_148;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_148 != (longlong *)0x0) {
    FMemory::Free();
  }
  lVar7 = local_68;
  if (local_68 != 0) {
    while ((lVar7 = local_68, local_68 != 0 && (*(char *)(local_68 + 0x58) == '\0'))) {
      cVar3 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar3 == '\0') &&
         ((DAT_1468c21ae != '\0' && (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)))) {
        lVar7 = FUN_14203ca70();
        if (lVar7 != 0) {
          FUN_1420714f0(lVar7);
        }
      }
      else {
        FUN_142036de0();
      }
      lVar7 = local_68;
      if (local_68 == 0) break;
      if (*(char *)(local_68 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(local_68 + 0x50) + 0x20))(*(longlong **)(local_68 + 0x50),5);
      }
    }
  }
  cVar3 = *(char *)(lVar7 + 0x58);
  while (cVar3 == '\0') {
    (**(code **)(**(longlong **)(lVar7 + 0x50) + 0x20))(*(longlong **)(lVar7 + 0x50),0x5d638865,0);
    cVar3 = *(char *)(lVar7 + 0x58);
  }
  iVar1 = *(int *)(lVar7 + 0x68);
  _Src = *(void **)(lVar7 + 0x60);
  local_190 = (void *)0x0;
  local_188._4_4_ = (undefined4)((ulonglong)local_188 >> 0x20);
  uVar10 = 0;
  pvVar8 = (void *)0x0;
  local_188._0_4_ = iVar1;
  if (iVar1 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_190,iVar1,0);
    pvVar8 = local_190;
    _guard_xfg_dispatch_icall_nop(local_190,_Src,(longlong)iVar1 * 2);
    uVar10 = local_188._4_4_;
  }
  iVar1 = (int)local_188;
  FWeakObjectPtr::operator=(&local_198,param_1);
  local_148 = (longlong *)0x0;
  local_138 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x28,local_168);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_14467a608;
    puVar5[1] = param_1;
    puVar5[2] = pvVar8;
    *(int *)(puVar5 + 3) = iVar1;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = uVar10;
    *(undefined4 *)(puVar5 + 4) = local_198;
    *(undefined4 *)((longlong)puVar5 + 0x24) = local_194;
    pvVar8 = (void *)0x0;
  }
  local_178[0] = (code *)&LAB_1410c5610;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  FUN_14208c4f0(param_1,local_178);
  FUN_140ce1dc0(local_128);
  return;
}



// FUNCTION 1410f5f80 FUN_1410f5f80 body=94 status=ok
// SIG undefined FUN_1410f5f80(void)

void FUN_1410f5f80(undefined8 param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  uStack_60 = CONCAT31(uStack_60._1_3_,param_2);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    local_68 = (undefined4)param_1;
    uStack_64 = (undefined4)((ulonglong)param_1 >> 0x20);
    *puVar1 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar1 + 1) = local_68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_64;
    *(undefined4 *)(puVar1 + 2) = uStack_60;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_5c;
  }
  local_58[0] = &LAB_1410c52f0;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 1410f5fe0 FUN_1410f5fe0 body=425 status=ok
// SIG undefined FUN_1410f5fe0(void)

undefined1 FUN_1410f5fe0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  bool bVar7;
  undefined1 local_68 [16];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [8];
  longlong *local_38;
  undefined1 local_28 [8];
  longlong *local_20;
  
  bVar7 = *(char *)(param_2 + 0x40) == '\0';
  if (bVar7) {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_40,&DAT_14469a3c0,L"EchoCastMenu",L"NotAvailableText");
  }
  else {
    uVar5 = FText::FText(local_28);
  }
  FText::FText(local_58,uVar5);
  if (bVar7) {
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_38 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
  }
  if ((!bVar7) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar3 = local_20 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  (**(code **)(**(longlong **)(param_2 + 0x48) + 0x2b0))
            (*(longlong **)(param_2 + 0x48),local_58,1,0);
  FLinearColor::FLinearColor(local_68,param_2 + 0x18);
  FUN_142f0c220(*(undefined8 *)(param_2 + 0x48),local_68,1);
  plVar3 = *(longlong **)(param_2 + 0x50);
  if (((plVar3 == (longlong *)0x0) || (*(char *)(param_2 + 0x41) != '\0')) ||
     (*(char *)(param_2 + 0x38) == '\0')) {
    uVar6 = *(undefined1 *)(param_2 + 0x41);
  }
  else {
    (**(code **)(*plVar3 + 0x2b0))(plVar3,param_2 + 0x20,1,0);
    uVar6 = 1;
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return uVar6;
}



// FUNCTION 1410f6190 FUN_1410f6190 body=355 status=ok
// SIG undefined FUN_1410f6190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410f6190(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  FWeakObjectPtr::operator=(&local_e8,param_1);
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x28,local_c8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1446a53a0;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_e8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_e4;
    puVar1[3] = param_2;
    *(undefined4 *)(puVar1 + 4) = param_3;
    *(undefined1 *)((longlong)puVar1 + 0x24) = param_4;
  }
  local_d8[0] = &LAB_1410c53c0;
  uVar2 = FUN_1420849a0(param_1,local_88,local_d8);
  FUN_14208c300(param_1,uVar2);
  if (local_48 != 0) {
    plVar3 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar3 = local_58;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    plVar3 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar3 = local_a8;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410f6300 FUN_1410f6300 body=1529 status=ok
// SIG undefined FUN_1410f6300(void)

void FUN_1410f6300(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  void *pvVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  longlong local_res10;
  longlong local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  longlong local_a0 [3];
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  
  lVar12 = *(longlong *)(param_1 + 0x38);
  if (lVar12 != 0) {
    lVar8 = AGPoisonSplashProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (lVar8 = *(longlong *)(lVar12 + 0x4e8), lVar8 != 0)) {
      lVar9 = FUN_141324ef0();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar8 = *(longlong *)(lVar8 + 0xc0);
        iVar17 = *(int *)(lVar12 + 0x690);
        if (lVar8 != 0) {
          if ((iVar17 < 0) || (*(int *)(lVar8 + 0x38) <= iVar17)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) &&
             (lVar12 = *(longlong *)(lVar8 + 0x30) + (longlong)iVar17 * 0x28,
             *(longlong *)(param_1 + 0x170) != 0)) {
            iVar17 = *(int *)(lVar12 + 0x20);
            iVar7 = *(int *)(param_1 + 0x1e4) + -3;
            local_d8 = 0;
            iVar13 = 0;
            if (-1 < iVar7) {
              iVar13 = iVar7;
            }
            local_d0 = 0;
            local_c8 = (void *)0x0;
            iVar18 = 0;
            local_c0 = 0;
            iVar7 = iVar17;
            if (iVar13 + 10 <= iVar17) {
              iVar7 = iVar13 + 10;
            }
            if (0 < iVar17) {
              local_78 = (longlong)iVar7;
              local_80 = (longlong)iVar13;
              lVar8 = 0;
              local_res10 = 0;
              do {
                lVar9 = local_78;
                uVar10 = FUN_1410ae500(*(undefined8 *)(param_1 + 0x170),iVar18);
                if ((lVar8 < local_80) || (lVar9 <= lVar8)) {
LAB_1410f66c7:
                  iVar17 = -1;
                  lVar9 = 0;
                }
                else {
                  iVar17 = iVar18 % 10;
                  lVar14 = *(longlong *)(lVar12 + 0x18) + 0x20 + local_res10;
                  lVar9 = FWeakObjectPtr::Get(lVar14);
                  if (lVar9 == 0) {
                    LOCK();
                    if (DAT_1464b56f4 == 0) {
                      DAT_1464b56f4 = 0;
                    }
                    UNLOCK();
                    if ((DAT_1464b56f4 != *(int *)(lVar14 + 8)) &&
                       (*(longlong *)(lVar14 + 0x10) != 0)) {
                      lVar9 = FUN_141796df0();
                      FWeakObjectPtr::operator=(lVar14,lVar9);
                      if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
                        LOCK();
                        if (DAT_1464b56f4 == 0) {
                          DAT_1464b56f4 = 0;
                        }
                        UNLOCK();
                        *(int *)(lVar14 + 8) = DAT_1464b56f4;
                      }
                      lVar9 = FWeakObjectPtr::Get(lVar14);
                      if (lVar9 != 0) goto LAB_1410f654c;
                    }
LAB_1410f6657:
                    uVar3 = local_d0;
                    lVar9 = (longlong)(int)local_d0;
                    lVar14 = local_res10 + *(longlong *)(lVar12 + 0x18);
                    iVar17 = (int)local_d0 + 1;
                    local_d0 = CONCAT44(local_d0._4_4_,iVar17);
                    if (local_d0._4_4_ < iVar17) {
                      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                      ::ResizeGrow(&local_d8,uVar3 & 0xffffffff);
                    }
                    puVar11 = (undefined8 *)(local_d8 + lVar9 * 0x18);
                    *puVar11 = *(undefined8 *)(lVar14 + 0x30);
                    FString::FString(puVar11 + 1,lVar14 + 0x38);
                    uVar3 = local_c0;
                    lVar9 = (longlong)(int)local_c0;
                    iVar17 = (int)local_c0 + 1;
                    local_c0 = CONCAT44(local_c0._4_4_,iVar17);
                    if (local_c0._4_4_ < iVar17) {
                      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow
                                (&local_c8,uVar3 & 0xffffffff);
                    }
                    *(int *)((longlong)local_c8 + lVar9 * 4) = iVar18;
                    goto LAB_1410f66c7;
                  }
LAB_1410f654c:
                  lVar14 = UTexture::GetPrivateStaticClass();
                  if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  if (!bVar2) goto LAB_1410f6657;
                  lVar14 = *(longlong *)(lVar12 + 0x18) + local_res10 + 0x20;
                  lVar9 = FWeakObjectPtr::Get(lVar14);
                  if (lVar9 == 0) {
                    LOCK();
                    if (DAT_1464b56f4 == 0) {
                      DAT_1464b56f4 = 0;
                    }
                    UNLOCK();
                    if ((DAT_1464b56f4 != *(int *)(lVar14 + 8)) &&
                       (local_a0[2] = 0, *(longlong *)(lVar14 + 0x10) != 0)) {
                      lVar9 = FUN_141796df0();
                      FWeakObjectPtr::operator=(lVar14,lVar9);
                      if ((lVar9 != 0) || (DAT_1469e7e10 == '\0')) {
                        LOCK();
                        if (DAT_1464b56f4 == 0) {
                          DAT_1464b56f4 = 0;
                        }
                        UNLOCK();
                        *(int *)(lVar14 + 8) = DAT_1464b56f4;
                      }
                      lVar9 = FWeakObjectPtr::Get(lVar14);
                      if (lVar9 != 0) goto LAB_1410f6608;
                    }
LAB_1410f663e:
                    lVar9 = 0;
                  }
                  else {
LAB_1410f6608:
                    lVar14 = UTexture::GetPrivateStaticClass();
                    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                         (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
                      bVar2 = false;
                    }
                    else {
                      bVar2 = true;
                    }
                    if (!bVar2) goto LAB_1410f663e;
                  }
                  *(longlong *)(param_1 + 400 + (longlong)iVar17 * 8) = lVar9;
                }
                FUN_1410f6190(uVar10,lVar9,iVar17,0);
                iVar18 = iVar18 + 1;
                local_res10 = local_res10 + 0x50;
                lVar8 = lVar8 + 1;
              } while (iVar18 < *(int *)(lVar12 + 0x20));
              if (0 < (int)local_d0) {
                local_a0[0] = 0;
                local_a0[1] = 0x1f;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a0,0);
                FGenericPlatformString::Memcpy(local_a0[0],L"RequestAsyncLoad ArrayDelegate",0x3e);
                FWeakObjectPtr::operator=(&local_88,param_1);
                pvVar15 = (void *)0x0;
                local_b8 = local_88;
                local_b4 = local_84;
                local_b0 = (void *)0x0;
                local_a8 = (int)local_c0;
                if ((int)local_c0 == 0) {
                  local_a4 = 0;
                }
                else {
                  lVar12 = (longlong)(int)local_c0;
                  TArray<int,FDefaultAllocator>::ResizeForCopy(&local_b0,local_c0 & 0xffffffff,0);
                  pvVar15 = local_b0;
                  _guard_xfg_dispatch_icall_nop(local_b0,local_c8,lVar12 << 2);
                }
                uVar6 = local_a4;
                iVar17 = local_a8;
                uVar5 = local_b4;
                uVar4 = local_b8;
                local_70 = 0;
                local_68 = 0;
                puVar11 = (undefined8 *)operator_new(0x30,&local_70);
                if (puVar11 != (undefined8 *)0x0) {
                  local_b0 = (void *)0x0;
                  *puVar11 = &PTR_GetPoolName_1446a5270;
                  *(undefined4 *)(puVar11 + 1) = uVar4;
                  *(undefined4 *)((longlong)puVar11 + 0xc) = uVar5;
                  puVar11[2] = pvVar15;
                  pvVar15 = (void *)0x0;
                  *(int *)(puVar11 + 3) = iVar17;
                  *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar6;
                  uVar10 = FDelegateHandle::GenerateNewID();
                  puVar11[5] = uVar10;
                  *puVar11 = &PTR_GetPoolName_1446a52b8;
                }
                lVar12 = FUN_1422ca050();
                FUN_142840b00(lVar12 + 0x178,local_60,&local_d8,&local_70,0,0,0,local_a0);
                if (local_58 != (longlong *)0x0) {
                  LOCK();
                  plVar16 = local_58 + 1;
                  lVar12 = *plVar16;
                  *(int *)plVar16 = (int)*plVar16 + -1;
                  UNLOCK();
                  pvVar15 = local_b0;
                  if ((int)lVar12 == 1) {
                    (**(code **)*local_58)(local_58);
                    LOCK();
                    piVar1 = (int *)((longlong)local_58 + 0xc);
                    iVar17 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    pvVar15 = local_b0;
                    if (iVar17 == 1) {
                      (**(code **)(*local_58 + 8))(local_58,1);
                      pvVar15 = local_b0;
                    }
                  }
                }
                if (pvVar15 != (void *)0x0) {
                  FMemory::Free(pvVar15);
                }
                if (local_a0[0] != 0) {
                  FMemory::Free();
                }
              }
              if (local_c8 != (void *)0x0) {
                FMemory::Free();
              }
            }
            if ((int)local_d0 != 0) {
              plVar16 = (longlong *)(local_d8 + 8);
              iVar17 = (int)local_d0;
              do {
                if (*plVar16 != 0) {
                  FMemory::Free();
                }
                plVar16 = plVar16 + 3;
                iVar17 = iVar17 + -1;
              } while (iVar17 != 0);
            }
            if (local_d8 != 0) {
              FMemory::Free(local_d8);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1410f6910 FUN_1410f6910 body=572 status=ok
// SIG undefined FUN_1410f6910(void)

void FUN_1410f6910(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  int local_res18 [2];
  undefined8 local_res20;
  undefined8 local_58 [2];
  int local_48;
  int iStack_44;
  
  lVar7 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if ((lVar7 != 0) && (lVar3 = *(longlong *)(lVar7 + 400), lVar3 != 0)) {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      if (*(longlong *)(lVar7 + 400) == 0) {
        plVar11 = (longlong *)(lVar7 + 0x400);
      }
      else {
        plVar11 = *(longlong **)(*(longlong *)(lVar7 + 400) + 0x98);
      }
      iVar1 = param_2[1];
      FWeakObjectPtr::operator=(&local_res20,*(undefined8 *)(param_2 + 4));
      local_58[0] = local_res20;
      TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
      ::FindId(plVar11,local_res18,local_58);
      if (((local_res18[0] == -1) ||
          (lVar7 = (longlong)local_res18[0] * 0x20 + *plVar11, lVar7 == 0)) ||
         (puVar10 = (undefined8 *)(lVar7 + 8), puVar10 == (undefined8 *)0x0)) {
        plVar12 = (longlong *)0x0;
      }
      else {
        plVar12 = (longlong *)*puVar10;
      }
      if ((plVar12 != (longlong *)0x0) &&
         (iVar6 = TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
                  ::Num(plVar12,iVar1), 0 < iVar6)) {
        iStack_44 = -1;
        local_48 = iVar1;
        TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
        ::ConditionalRehash(plVar12,(int)plVar12[1] - *(int *)((longlong)plVar12 + 0x34),0);
        iVar6 = -1;
        if ((int)plVar12[9] != 0) {
          plVar9 = (longlong *)plVar12[8];
          if ((longlong *)plVar12[8] == (longlong *)0x0) {
            plVar9 = plVar12 + 7;
          }
          iVar6 = *(int *)((longlong)plVar9 + ((longlong)(int)plVar12[9] - 1U & (longlong)iVar1) * 4
                          );
          iStack_44 = iVar6;
          if (iVar6 != -1) {
            do {
              iVar2 = *(int *)(*plVar12 + 0x10 + (longlong)iVar6 * 0x18);
              iStack_44 = iVar6;
              if (*(int *)(*plVar12 + (longlong)iVar6 * 0x18) == iVar1) break;
              iVar6 = iVar2;
              iStack_44 = iVar2;
            } while (iVar2 != -1);
          }
        }
        if ((iStack_44 != -1) && (*(longlong *)(*plVar12 + 8 + (longlong)iVar6 * 0x18) != 0)) {
          return;
        }
      }
      puVar10 = (undefined8 *)operator_new(0x28);
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        uVar4 = *(undefined8 *)(param_2 + 4);
        *puVar10 = &PTR_FUN_1446a4548;
        puVar10[1] = *(undefined8 *)(param_2 + 2);
        *(undefined4 *)(puVar10 + 2) = *param_2;
        FWeakObjectPtr::operator=((longlong)puVar10 + 0x14,uVar4);
        FWeakObjectPtr::operator=((longlong)puVar10 + 0x1c,lVar3);
      }
      FUN_142514cf0(plVar11,*(undefined8 *)(param_2 + 4),iVar1,puVar10);
    }
  }
  return;
}



// FUNCTION 1410f6b50 FUN_1410f6b50 body=217 status=ok
// SIG undefined FUN_1410f6b50(void)

undefined8 FUN_1410f6b50(longlong param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    lVar2 = FUN_141319ff0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar3 != -0xc0)) {
      param_1 = param_1 + -0x4d8;
      lVar3 = FUN_1410cb700(param_1);
      if (*(longlong *)(lVar3 + 0x98) != 0) {
        lVar3 = FUN_1410cb700(param_1);
        lVar3 = FUN_14270bb10(*(undefined8 *)(lVar3 + 0x98));
        if (lVar3 == 0) {
          iVar4 = -1;
        }
        else {
          iVar4 = *(int *)(lVar3 + 0x108);
        }
        lVar3 = FUN_1410cb700(param_1);
        if ((*(char *)(lVar3 + 0x62) == '\x03') && (param_2 == iVar4)) {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1410f6c30 FUN_1410f6c30 body=69 status=ok
// SIG undefined FUN_1410f6c30(void)

void FUN_1410f6c30(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x40);
  *puVar2 = &PTR_FUN_1446a5470;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  puVar2[6] = uVar1;
  puVar2[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 1410f6c80 FUN_1410f6c80 body=15 status=ok
// SIG undefined FUN_1410f6c80(void)

void FUN_1410f6c80(undefined8 param_1,char param_2)

{
  if (param_2 != '\0') {
    FMemory::operator_delete(param_1,0x40);
    return;
  }
  return;
}



// FUNCTION 1410f6c90 FUN_1410f6c90 body=9 status=ok
// SIG undefined FUN_1410f6c90(void)

void FUN_1410f6c90(longlong param_1)

{
  FUN_1410c04b0(param_1 + 8);
  return;
}



// FUNCTION 1410f6ce0 FUN_1410f6ce0 body=137 status=ok
// SIG undefined FUN_1410f6ce0(void)

void FUN_1410f6ce0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
  }
  local_58[0] = &LAB_1410c5660;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 1410f6d70 FUN_1410f6d70 body=209 status=ok
// SIG undefined FUN_1410f6d70(void)

undefined8 *
FUN_1410f6d70(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res10 [8];
  
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_1442e80f8;
    FWeakObjectPtr::operator=(plVar3 + 1,param_3);
    plVar3[2] = param_4;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_1442e8140;
  }
  *param_2 = 0;
  if (plVar3 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,1);
    puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
    iVar1 = (int)param_1[1];
    uVar2 = *puVar5;
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    *param_2 = uVar2;
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  return param_2;
}



// FUNCTION 1410f6e50 FUN_1410f6e50 body=239 status=ok
// SIG undefined FUN_1410f6e50(void)

void FUN_1410f6e50(longlong *param_1,undefined8 param_2,undefined4 *param_3)

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
    *plVar2 = (longlong)&PTR_FUN_1444f8638;
    FWeakObjectPtr::operator=(plVar2 + 1,param_2);
    *(undefined4 *)(plVar2 + 2) = local_18;
    *(undefined4 *)((longlong)plVar2 + 0x14) = uStack_14;
    *(undefined4 *)(plVar2 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_1444f8680;
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



// FUNCTION 1410f6f40 FUN_1410f6f40 body=239 status=ok
// SIG undefined FUN_1410f6f40(void)

void FUN_1410f6f40(longlong *param_1,undefined8 param_2,undefined4 *param_3)

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
    *plVar2 = (longlong)&PTR_FUN_144318e60;
    FWeakObjectPtr::operator=(plVar2 + 1,param_2);
    *(undefined4 *)(plVar2 + 2) = local_18;
    *(undefined4 *)((longlong)plVar2 + 0x14) = uStack_14;
    *(undefined4 *)(plVar2 + 3) = uStack_10;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_144318ea8;
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



// FUNCTION 1410f7030 FUN_1410f7030 body=154 status=ok
// SIG undefined FUN_1410f7030(void)

undefined8 * FUN_1410f7030(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)*param_1;
  puVar5 = puVar4 + (longlong)*(int *)(param_1 + 1) * 2;
  while( true ) {
    if (puVar4 == puVar5) {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      return (undefined8 *)0x0;
    }
    if (*(int *)(puVar4 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar4;
    }
    if ((int)param_2[1] == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*param_2;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
    if (iVar1 == 0) break;
    puVar4 = puVar4 + 2;
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return puVar4;
}



// FUNCTION 1410f70d0 FUN_1410f70d0 body=478 status=ok
// SIG undefined FUN_1410f70d0(void)

/* WARNING: Removing unreachable block (ram,0x0001410f72a5) */
/* WARNING: Removing unreachable block (ram,0x0001410f722e) */

longlong FUN_1410f70d0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar8 = *(int *)(param_1 + 0x48);
  lVar9 = (longlong)iVar8;
  lVar6 = 0;
  if (0 < iVar8) {
    lVar10 = lVar9 * 8;
    lVar7 = lVar6;
    lVar5 = lVar9;
    do {
      iVar8 = iVar8 + -1;
      lVar10 = lVar10 + -8;
      lVar5 = lVar5 + -1;
      if ((lVar5 < 0) || (*(int *)(param_1 + 0x48) <= iVar8)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) &&
          (plVar1 = *(longlong **)(lVar10 + *(longlong *)(param_1 + 0x40)),
          plVar1 != (longlong *)0x0)) && (lVar3 = (**(code **)(*plVar1 + 0x278))(), lVar3 != 0)) {
        lVar4 = UInputKeySelector::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar6 = UInputKeySelector::GetPrivateStaticClass();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar3;
          }
          return 0;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar9);
  }
  iVar8 = *(int *)(param_1 + 0x98);
  if (0 < (longlong)iVar8) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + lVar6 * 8);
      if ((plVar1 != (longlong *)0x0) && (lVar9 = (**(code **)(*plVar1 + 0x278))(), lVar9 != 0)) {
        lVar10 = UInputKeySelector::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar6 = UInputKeySelector::GetPrivateStaticClass();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar9;
          }
          return 0;
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar8);
  }
  return 0;
}



// FUNCTION 1410f72b0 FUN_1410f72b0 body=478 status=ok
// SIG undefined FUN_1410f72b0(void)

/* WARNING: Removing unreachable block (ram,0x0001410f7485) */
/* WARNING: Removing unreachable block (ram,0x0001410f740e) */

longlong FUN_1410f72b0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar8 = *(int *)(param_1 + 0x48);
  lVar9 = (longlong)iVar8;
  lVar6 = 0;
  if (0 < iVar8) {
    lVar10 = lVar9 * 8;
    lVar7 = lVar6;
    lVar5 = lVar9;
    do {
      iVar8 = iVar8 + -1;
      lVar10 = lVar10 + -8;
      lVar5 = lVar5 + -1;
      if ((lVar5 < 0) || (*(int *)(param_1 + 0x48) <= iVar8)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) &&
          (plVar1 = *(longlong **)(lVar10 + *(longlong *)(param_1 + 0x40)),
          plVar1 != (longlong *)0x0)) && (lVar3 = (**(code **)(*plVar1 + 0x278))(), lVar3 != 0)) {
        lVar4 = AGShrineUsable::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar6 = AGShrineUsable::GetPrivateStaticClass();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar3;
          }
          return 0;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar9);
  }
  iVar8 = *(int *)(param_1 + 0x98);
  if (0 < (longlong)iVar8) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + lVar6 * 8);
      if ((plVar1 != (longlong *)0x0) && (lVar9 = (**(code **)(*plVar1 + 0x278))(), lVar9 != 0)) {
        lVar10 = AGShrineUsable::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar6 = AGShrineUsable::GetPrivateStaticClass();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar9;
          }
          return 0;
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar8);
  }
  return 0;
}



// FUNCTION 1410f7490 FUN_1410f7490 body=478 status=ok
// SIG undefined FUN_1410f7490(void)

/* WARNING: Removing unreachable block (ram,0x0001410f7665) */
/* WARNING: Removing unreachable block (ram,0x0001410f75ee) */

longlong FUN_1410f7490(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar8 = *(int *)(param_1 + 0x48);
  lVar9 = (longlong)iVar8;
  lVar6 = 0;
  if (0 < iVar8) {
    lVar10 = lVar9 * 8;
    lVar7 = lVar6;
    lVar5 = lVar9;
    do {
      iVar8 = iVar8 + -1;
      lVar10 = lVar10 + -8;
      lVar5 = lVar5 + -1;
      if ((lVar5 < 0) || (*(int *)(param_1 + 0x48) <= iVar8)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) &&
          (plVar1 = *(longlong **)(lVar10 + *(longlong *)(param_1 + 0x40)),
          plVar1 != (longlong *)0x0)) && (lVar3 = (**(code **)(*plVar1 + 0x278))(), lVar3 != 0)) {
        lVar4 = AGMeshParameterCue::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar6 = AGMeshParameterCue::GetPrivateStaticClass();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar3;
          }
          return 0;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar9);
  }
  iVar8 = *(int *)(param_1 + 0x98);
  if (0 < (longlong)iVar8) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + lVar6 * 8);
      if ((plVar1 != (longlong *)0x0) && (lVar9 = (**(code **)(*plVar1 + 0x278))(), lVar9 != 0)) {
        lVar10 = AGMeshParameterCue::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar6 = AGMeshParameterCue::GetPrivateStaticClass();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar9;
          }
          return 0;
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar8);
  }
  return 0;
}



// FUNCTION 1410f7670 FUN_1410f7670 body=478 status=ok
// SIG undefined FUN_1410f7670(void)

/* WARNING: Removing unreachable block (ram,0x0001410f7845) */
/* WARNING: Removing unreachable block (ram,0x0001410f77ce) */

longlong FUN_1410f7670(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar8 = *(int *)(param_1 + 0x48);
  lVar9 = (longlong)iVar8;
  lVar6 = 0;
  if (0 < iVar8) {
    lVar10 = lVar9 * 8;
    lVar7 = lVar6;
    lVar5 = lVar9;
    do {
      iVar8 = iVar8 + -1;
      lVar10 = lVar10 + -8;
      lVar5 = lVar5 + -1;
      if ((lVar5 < 0) || (*(int *)(param_1 + 0x48) <= iVar8)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) &&
          (plVar1 = *(longlong **)(lVar10 + *(longlong *)(param_1 + 0x40)),
          plVar1 != (longlong *)0x0)) && (lVar3 = (**(code **)(*plVar1 + 0x278))(), lVar3 != 0)) {
        lVar4 = AGImpulseWindProjectile::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar6 = AGImpulseWindProjectile::GetPrivateStaticClass();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar3;
          }
          return 0;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar9);
  }
  iVar8 = *(int *)(param_1 + 0x98);
  if (0 < (longlong)iVar8) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + lVar6 * 8);
      if ((plVar1 != (longlong *)0x0) && (lVar9 = (**(code **)(*plVar1 + 0x278))(), lVar9 != 0)) {
        lVar10 = AGImpulseWindProjectile::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar6 = AGImpulseWindProjectile::GetPrivateStaticClass();
          if ((*(int *)(lVar6 + 0x90) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x90)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) == lVar6 + 0x88)) {
            return lVar9;
          }
          return 0;
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar8);
  }
  return 0;
}



// FUNCTION 1410f7850 FUN_1410f7850 body=666 status=ok
// SIG undefined FUN_1410f7850(void)

longlong FUN_1410f7850(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar7 = *(longlong *)(param_1 + 0x2c0);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 0x2b8);
  }
  bVar10 = *(char *)(param_1 + 0x4c1) == '\0';
  if (bVar10) {
    plVar5 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    lVar8 = 0;
  }
  else {
    plVar5 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar8 = *plVar5;
  }
  plVar4 = (longlong *)plVar5[1];
  plVar5[1] = 0;
  *plVar5 = 0;
  plVar5 = plStack_40;
  if ((bVar10) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((!bVar10) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_30 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  if (lVar8 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar7 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
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
    return 0;
  }
  if (param_3 != 0) {
    lVar6 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar9 = param_3;
    do {
      if (lVar9 == lVar6) goto LAB_1410f79b6;
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  param_3 = FUN_1413929e0();
LAB_1410f79b6:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar7 = FUN_14203b1b0(lVar8,param_3,param_2,lVar7,param_4,param_5);
  if (lVar7 != 0) {
    lVar8 = FUN_1413929e0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) goto LAB_1410f7a29;
  }
  lVar7 = 0;
LAB_1410f7a29:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
    LOCK();
    plVar5 = plVar4 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  return lVar7;
}



// FUNCTION 1410f7af0 FUN_1410f7af0 body=917 status=ok
// SIG undefined FUN_1410f7af0(void)

longlong FUN_1410f7af0(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  bool bVar14;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar10 = 0;
  cVar8 = FUN_142091120();
  if (cVar8 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_1410f7b9f:
      puVar13 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (iVar9 < 1) goto LAB_1410f7b9f;
      local_78 = *(longlong **)(param_1 + 0x30);
      bVar7 = true;
      bVar6 = false;
      local_80 = 0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_78 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_78 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar14) {
          iVar9 = (int)uVar10;
          LOCK();
          bVar14 = iVar9 == (int)local_78[1];
          if (bVar14) {
            *(int *)(local_78 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar10 = *(ulonglong *)(param_1 + 0x28);
            puVar13 = &local_80;
            local_80 = uVar10;
            goto LAB_1410f7bb4;
          }
          uVar10 = 0;
          LOCK();
          uVar3 = *(uint *)(local_78 + 1);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(local_78 + 1) = 0;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_78 = (longlong *)0x0;
      }
      uVar10 = 0;
      puVar13 = &local_80;
    }
LAB_1410f7bb4:
    local_70 = uVar10;
    plVar4 = (longlong *)puVar13[1];
    puVar13[1] = 0;
    local_68 = plVar4;
    *puVar13 = 0;
    plVar4 = plStack_58;
    if ((bVar6) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plStack_58 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar4 = local_78;
    if ((bVar7) && (local_78 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_78 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    bVar7 = true;
    bVar6 = false;
    puVar13 = &local_70;
    uVar10 = local_70;
  }
  else {
    puVar13 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  plVar4 = (longlong *)puVar13[1];
  puVar13[1] = 0;
  *puVar13 = 0;
  plVar5 = plStack_48;
  if ((bVar6) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_48 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar5 = local_68;
  if ((bVar7) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_68 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (uVar10 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    return 0;
  }
  if (param_3 != 0) {
    lVar11 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar12 = param_3;
    do {
      if (lVar12 == lVar11) goto LAB_1410f7d3d;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = FUN_142f20790();
LAB_1410f7d3d:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = FUN_142f20790();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_1410f7dba;
  }
  lVar12 = 0;
LAB_1410f7dba:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return lVar12;
}



// FUNCTION 1410f7e90 FUN_1410f7e90 body=917 status=ok
// SIG undefined FUN_1410f7e90(void)

longlong FUN_1410f7e90(longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
                      undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  bool bVar14;
  ulonglong local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  longlong *plStack_58;
  ulonglong local_50;
  longlong *plStack_48;
  undefined8 local_40;
  
  uVar10 = 0;
  cVar8 = FUN_142091120();
  if (cVar8 == '\0') {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_1410f7f3f:
      puVar13 = &local_60;
      local_60 = 0;
      plStack_58 = (longlong *)0x0;
      bVar7 = false;
      bVar6 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 0;
        iVar9 = 0;
      }
      UNLOCK();
      if (iVar9 < 1) goto LAB_1410f7f3f;
      local_78 = *(longlong **)(param_1 + 0x30);
      bVar7 = true;
      bVar6 = false;
      local_80 = 0;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_78 + 1);
        bVar14 = uVar3 == 0;
        if (bVar14) {
          *(uint *)(local_78 + 1) = 0;
        }
        else {
          uVar10 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar14) {
          iVar9 = (int)uVar10;
          LOCK();
          bVar14 = iVar9 == (int)local_78[1];
          if (bVar14) {
            *(int *)(local_78 + 1) = iVar9 + 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar10 = *(ulonglong *)(param_1 + 0x28);
            puVar13 = &local_80;
            local_80 = uVar10;
            goto LAB_1410f7f54;
          }
          uVar10 = 0;
          LOCK();
          uVar3 = *(uint *)(local_78 + 1);
          bVar14 = uVar3 == 0;
          if (bVar14) {
            *(uint *)(local_78 + 1) = 0;
          }
          else {
            uVar10 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_78 = (longlong *)0x0;
      }
      uVar10 = 0;
      puVar13 = &local_80;
    }
LAB_1410f7f54:
    local_70 = uVar10;
    plVar4 = (longlong *)puVar13[1];
    puVar13[1] = 0;
    local_68 = plVar4;
    *puVar13 = 0;
    plVar4 = plStack_58;
    if ((bVar6) && (plStack_58 != (longlong *)0x0)) {
      LOCK();
      plVar5 = plStack_58 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plStack_58 + 8))(plStack_58,1);
        }
      }
    }
    plVar4 = local_78;
    if ((bVar7) && (local_78 != (longlong *)0x0)) {
      LOCK();
      plVar5 = local_78 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    bVar7 = true;
    bVar6 = false;
    puVar13 = &local_70;
    uVar10 = local_70;
  }
  else {
    puVar13 = &local_50;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    bVar7 = false;
    bVar6 = true;
  }
  plVar4 = (longlong *)puVar13[1];
  puVar13[1] = 0;
  *puVar13 = 0;
  plVar5 = plStack_48;
  if ((bVar6) && (plStack_48 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_48 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plStack_48 + 8))(plStack_48,1);
      }
    }
  }
  plVar5 = local_68;
  if ((bVar7) && (local_68 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_68 + 1;
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (uVar10 == 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      lVar12 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    return 0;
  }
  if (param_3 != 0) {
    lVar11 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar12 = param_3;
    do {
      if (lVar12 == lVar11) goto LAB_1410f80dd;
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  param_3 = UGameInstanceGameParameters::GetPrivateStaticClass();
LAB_1410f80dd:
  plVar5 = *(longlong **)(uVar10 + 0x80);
  local_40 = *(undefined8 *)(uVar10 + 0x78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar12 = FUN_14203b1b0(local_40,param_3,param_2,param_1,param_4,param_5);
  if (lVar12 != 0) {
    lVar11 = UGameInstanceGameParameters::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_1410f815a;
  }
  lVar12 = 0;
LAB_1410f815a:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return lVar12;
}



// FUNCTION 1410f8230 FUN_1410f8230 body=86 status=ok
// SIG undefined FUN_1410f8230(void)

longlong FUN_1410f8230(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_142eb6a30();
  if (lVar2 != 0) {
    lVar3 = UXGameInstance::GetPrivateStaticClass();
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



// FUNCTION 1410f8290 FUN_1410f8290 body=451 status=ok
// SIG undefined FUN_1410f8290(void)

void FUN_1410f8290(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  iVar2 = (param_2 + -2) / 2;
  if (-1 < iVar2) {
    iVar6 = iVar2 * 2 + 1;
    iVar9 = iVar6;
    iVar3 = iVar2;
joined_r0x0001410f82d6:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar2 * 2;
        iVar7 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          uVar1 = param_1[iVar7];
          uVar4 = FUN_1404cfc20(param_1[(longlong)iVar6 + 2]);
          uVar5 = FUN_1404cfc20(uVar1);
          if (uVar4 < uVar5) {
            iVar7 = iVar6;
          }
          iVar7 = iVar7 + 1;
        }
        uVar1 = param_1[iVar7];
        uVar4 = FUN_1404cfc20(param_1[iVar2]);
        uVar5 = FUN_1404cfc20(uVar1);
        if (uVar4 < uVar5) {
          uVar1 = param_1[iVar2];
          param_1[iVar2] = param_1[iVar7];
          iVar6 = iVar7 * 2 + 1;
          param_1[iVar7] = uVar1;
          iVar2 = iVar7;
          goto joined_r0x0001410f82d6;
        }
      }
      iVar2 = iVar3 + -1;
      iVar6 = iVar9 + -2;
      iVar9 = iVar6;
      iVar3 = iVar2;
    } while (-1 < iVar2);
  }
  param_2 = param_2 + -1;
  lVar8 = (longlong)param_2;
  if (0 < param_2) {
    do {
      iVar2 = 0;
      uVar1 = *param_1;
      *param_1 = param_1[lVar8];
      param_1[lVar8] = uVar1;
      if (1 < param_2) {
        do {
          iVar9 = iVar2 * 2;
          iVar6 = iVar9 + 1;
          if (iVar9 + 2 < param_2) {
            uVar1 = param_1[iVar6];
            uVar4 = FUN_1404cfc20(param_1[(longlong)iVar9 + 2]);
            uVar5 = FUN_1404cfc20(uVar1);
            if (uVar4 < uVar5) {
              iVar6 = iVar9;
            }
            iVar6 = iVar6 + 1;
          }
          uVar1 = param_1[iVar6];
          uVar4 = FUN_1404cfc20(param_1[iVar2]);
          uVar5 = FUN_1404cfc20(uVar1);
          if (uVar5 <= uVar4) break;
          uVar1 = param_1[iVar2];
          param_1[iVar2] = param_1[iVar6];
          param_1[iVar6] = uVar1;
          iVar2 = iVar6;
        } while (iVar6 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar8 = lVar8 + -1;
    } while (0 < lVar8);
  }
  return;
}



// FUNCTION 1410f8460 FUN_1410f8460 body=587 status=ok
// SIG undefined FUN_1410f8460(void)

void FUN_1410f8460(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined8 *puVar19;
  
  iVar13 = (param_2 + -2) / 2;
  if (-1 < iVar13) {
    iVar14 = iVar13 * 2 + 1;
    iVar1 = iVar14;
    iVar18 = iVar13;
joined_r0x0001410f84a6:
    do {
      if (iVar14 < param_2) {
        iVar14 = iVar13 * 2;
        iVar15 = iVar14 + 1;
        if (iVar14 + 2 < param_2) {
          cVar12 = FUN_141100010(param_4,param_1 + (longlong)(iVar14 + 2) * 6,
                                 param_1 + (longlong)iVar15 * 6);
          if (cVar12 != '\0') {
            iVar15 = iVar14;
          }
          iVar15 = iVar15 + 1;
        }
        puVar16 = param_1 + (longlong)iVar15 * 6;
        puVar19 = param_1 + (longlong)iVar13 * 6;
        cVar12 = FUN_141100010(param_4,puVar19,puVar16);
        if (cVar12 != '\0') {
          if (puVar19 != puVar16) {
            uVar5 = puVar16[1];
            uVar6 = *puVar19;
            uVar7 = puVar19[1];
            uVar8 = puVar19[2];
            uVar9 = puVar19[3];
            uVar10 = puVar19[4];
            uVar11 = puVar19[5];
            *puVar19 = *puVar16;
            puVar19[1] = uVar5;
            uVar5 = puVar16[3];
            puVar19[2] = puVar16[2];
            puVar19[3] = uVar5;
            uVar2 = *(undefined4 *)((longlong)puVar16 + 0x24);
            uVar3 = *(undefined4 *)(puVar16 + 5);
            uVar4 = *(undefined4 *)((longlong)puVar16 + 0x2c);
            *(undefined4 *)(puVar19 + 4) = *(undefined4 *)(puVar16 + 4);
            *(undefined4 *)((longlong)puVar19 + 0x24) = uVar2;
            *(undefined4 *)(puVar19 + 5) = uVar3;
            *(undefined4 *)((longlong)puVar19 + 0x2c) = uVar4;
            *puVar16 = uVar6;
            puVar16[1] = uVar7;
            puVar16[2] = uVar8;
            puVar16[3] = uVar9;
            puVar16[4] = uVar10;
            puVar16[5] = uVar11;
          }
          iVar14 = iVar15 * 2 + 1;
          iVar13 = iVar15;
          goto joined_r0x0001410f84a6;
        }
      }
      iVar14 = iVar1 + -2;
      iVar13 = iVar18 + -1;
      iVar1 = iVar14;
      iVar18 = iVar13;
    } while (-1 < iVar13);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar19 = param_1 + (longlong)param_2 * 6;
    do {
      if (param_1 != puVar19) {
        uVar5 = puVar19[1];
        uVar6 = *param_1;
        uVar7 = param_1[1];
        uVar8 = param_1[2];
        uVar9 = param_1[3];
        uVar10 = param_1[4];
        uVar11 = param_1[5];
        *param_1 = *puVar19;
        param_1[1] = uVar5;
        uVar5 = puVar19[3];
        param_1[2] = puVar19[2];
        param_1[3] = uVar5;
        uVar2 = *(undefined4 *)((longlong)puVar19 + 0x24);
        uVar3 = *(undefined4 *)(puVar19 + 5);
        uVar4 = *(undefined4 *)((longlong)puVar19 + 0x2c);
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar19 + 4);
        *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
        *(undefined4 *)(param_1 + 5) = uVar3;
        *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
        *puVar19 = uVar6;
        puVar19[1] = uVar7;
        puVar19[2] = uVar8;
        puVar19[3] = uVar9;
        puVar19[4] = uVar10;
        puVar19[5] = uVar11;
      }
      iVar13 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar13 * 2;
          iVar14 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            cVar12 = FUN_141100010(param_4,param_1 + (longlong)(iVar1 + 2) * 6,
                                   param_1 + (longlong)iVar14 * 6);
            if (cVar12 != '\0') {
              iVar14 = iVar1;
            }
            iVar14 = iVar14 + 1;
          }
          puVar17 = param_1 + (longlong)iVar14 * 6;
          puVar16 = param_1 + (longlong)iVar13 * 6;
          cVar12 = FUN_141100010(param_4,puVar16,puVar17);
          if (cVar12 == '\0') break;
          if (puVar16 != puVar17) {
            uVar5 = puVar17[1];
            uVar6 = *puVar16;
            uVar7 = puVar16[1];
            uVar8 = puVar16[2];
            uVar9 = puVar16[3];
            uVar10 = puVar16[4];
            uVar11 = puVar16[5];
            *puVar16 = *puVar17;
            puVar16[1] = uVar5;
            uVar5 = puVar17[3];
            puVar16[2] = puVar17[2];
            puVar16[3] = uVar5;
            uVar2 = *(undefined4 *)((longlong)puVar17 + 0x24);
            uVar3 = *(undefined4 *)(puVar17 + 5);
            uVar4 = *(undefined4 *)((longlong)puVar17 + 0x2c);
            *(undefined4 *)(puVar16 + 4) = *(undefined4 *)(puVar17 + 4);
            *(undefined4 *)((longlong)puVar16 + 0x24) = uVar2;
            *(undefined4 *)(puVar16 + 5) = uVar3;
            *(undefined4 *)((longlong)puVar16 + 0x2c) = uVar4;
            *puVar17 = uVar6;
            puVar17[1] = uVar7;
            puVar17[2] = uVar8;
            puVar17[3] = uVar9;
            puVar17[4] = uVar10;
            puVar17[5] = uVar11;
          }
          iVar13 = iVar14;
        } while (iVar14 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar19 = puVar19 + -6;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1410f86b0 FUN_1410f86b0 body=587 status=ok
// SIG undefined FUN_1410f86b0(void)

void FUN_1410f86b0(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined8 *puVar19;
  
  iVar13 = (param_2 + -2) / 2;
  if (-1 < iVar13) {
    iVar14 = iVar13 * 2 + 1;
    iVar1 = iVar14;
    iVar18 = iVar13;
joined_r0x0001410f86f6:
    do {
      if (iVar14 < param_2) {
        iVar14 = iVar13 * 2;
        iVar15 = iVar14 + 1;
        if (iVar14 + 2 < param_2) {
          cVar12 = FUN_1411038f0(param_4,param_1 + (longlong)(iVar14 + 2) * 6,
                                 param_1 + (longlong)iVar15 * 6);
          if (cVar12 != '\0') {
            iVar15 = iVar14;
          }
          iVar15 = iVar15 + 1;
        }
        puVar16 = param_1 + (longlong)iVar15 * 6;
        puVar19 = param_1 + (longlong)iVar13 * 6;
        cVar12 = FUN_1411038f0(param_4,puVar19,puVar16);
        if (cVar12 != '\0') {
          if (puVar19 != puVar16) {
            uVar5 = puVar16[1];
            uVar6 = *puVar19;
            uVar7 = puVar19[1];
            uVar8 = puVar19[2];
            uVar9 = puVar19[3];
            uVar10 = puVar19[4];
            uVar11 = puVar19[5];
            *puVar19 = *puVar16;
            puVar19[1] = uVar5;
            uVar5 = puVar16[3];
            puVar19[2] = puVar16[2];
            puVar19[3] = uVar5;
            uVar2 = *(undefined4 *)((longlong)puVar16 + 0x24);
            uVar3 = *(undefined4 *)(puVar16 + 5);
            uVar4 = *(undefined4 *)((longlong)puVar16 + 0x2c);
            *(undefined4 *)(puVar19 + 4) = *(undefined4 *)(puVar16 + 4);
            *(undefined4 *)((longlong)puVar19 + 0x24) = uVar2;
            *(undefined4 *)(puVar19 + 5) = uVar3;
            *(undefined4 *)((longlong)puVar19 + 0x2c) = uVar4;
            *puVar16 = uVar6;
            puVar16[1] = uVar7;
            puVar16[2] = uVar8;
            puVar16[3] = uVar9;
            puVar16[4] = uVar10;
            puVar16[5] = uVar11;
          }
          iVar14 = iVar15 * 2 + 1;
          iVar13 = iVar15;
          goto joined_r0x0001410f86f6;
        }
      }
      iVar14 = iVar1 + -2;
      iVar13 = iVar18 + -1;
      iVar1 = iVar14;
      iVar18 = iVar13;
    } while (-1 < iVar13);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar19 = param_1 + (longlong)param_2 * 6;
    do {
      if (param_1 != puVar19) {
        uVar5 = puVar19[1];
        uVar6 = *param_1;
        uVar7 = param_1[1];
        uVar8 = param_1[2];
        uVar9 = param_1[3];
        uVar10 = param_1[4];
        uVar11 = param_1[5];
        *param_1 = *puVar19;
        param_1[1] = uVar5;
        uVar5 = puVar19[3];
        param_1[2] = puVar19[2];
        param_1[3] = uVar5;
        uVar2 = *(undefined4 *)((longlong)puVar19 + 0x24);
        uVar3 = *(undefined4 *)(puVar19 + 5);
        uVar4 = *(undefined4 *)((longlong)puVar19 + 0x2c);
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar19 + 4);
        *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
        *(undefined4 *)(param_1 + 5) = uVar3;
        *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
        *puVar19 = uVar6;
        puVar19[1] = uVar7;
        puVar19[2] = uVar8;
        puVar19[3] = uVar9;
        puVar19[4] = uVar10;
        puVar19[5] = uVar11;
      }
      iVar13 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar13 * 2;
          iVar14 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            cVar12 = FUN_1411038f0(param_4,param_1 + (longlong)(iVar1 + 2) * 6,
                                   param_1 + (longlong)iVar14 * 6);
            if (cVar12 != '\0') {
              iVar14 = iVar1;
            }
            iVar14 = iVar14 + 1;
          }
          puVar17 = param_1 + (longlong)iVar14 * 6;
          puVar16 = param_1 + (longlong)iVar13 * 6;
          cVar12 = FUN_1411038f0(param_4,puVar16,puVar17);
          if (cVar12 == '\0') break;
          if (puVar16 != puVar17) {
            uVar5 = puVar17[1];
            uVar6 = *puVar16;
            uVar7 = puVar16[1];
            uVar8 = puVar16[2];
            uVar9 = puVar16[3];
            uVar10 = puVar16[4];
            uVar11 = puVar16[5];
            *puVar16 = *puVar17;
            puVar16[1] = uVar5;
            uVar5 = puVar17[3];
            puVar16[2] = puVar17[2];
            puVar16[3] = uVar5;
            uVar2 = *(undefined4 *)((longlong)puVar17 + 0x24);
            uVar3 = *(undefined4 *)(puVar17 + 5);
            uVar4 = *(undefined4 *)((longlong)puVar17 + 0x2c);
            *(undefined4 *)(puVar16 + 4) = *(undefined4 *)(puVar17 + 4);
            *(undefined4 *)((longlong)puVar16 + 0x24) = uVar2;
            *(undefined4 *)(puVar16 + 5) = uVar3;
            *(undefined4 *)((longlong)puVar16 + 0x2c) = uVar4;
            *puVar17 = uVar6;
            puVar17[1] = uVar7;
            puVar17[2] = uVar8;
            puVar17[3] = uVar9;
            puVar17[4] = uVar10;
            puVar17[5] = uVar11;
          }
          iVar13 = iVar14;
        } while (iVar14 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar19 = puVar19 + -6;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1410f8900 FUN_1410f8900 body=741 status=ok
// SIG undefined FUN_1410f8900(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410f8900(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  float fVar10;
  undefined1 auStack_398 [32];
  longlong *local_378;
  int local_370;
  undefined8 local_368;
  longlong local_350;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_398;
    lStack_340 = param_1 + (param_2 - 1) * 8;
    fVar10 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar10 = fVar10 + 1.8446744e+19;
    }
    local_368 = param_4;
    local_348 = param_1;
    fVar10 = _guard_xfg_dispatch_icall_nop(fVar10);
    local_338 = (undefined4)(longlong)(fVar10 + fVar10);
    _guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    local_378 = &local_348;
    do {
      puVar6 = (undefined8 *)*local_378;
      puVar7 = (undefined8 *)local_378[1];
      local_350 = local_378[2];
      local_370 = (int)local_350;
      lVar4 = ((longlong)puVar7 - (longlong)puVar6 >> 3) + 1;
      puVar5 = puVar6;
      if ((int)local_350 != 0) {
LAB_1410f89e0:
        if (8 < lVar4) {
          if (lVar4 < 0) {
            lVar4 = lVar4 + 1;
          }
          puVar8 = puVar7 + 1;
          uVar1 = puVar5[lVar4 >> 1];
          puVar5[lVar4 >> 1] = *puVar5;
          *puVar5 = uVar1;
          puVar6 = puVar5;
LAB_1410f8a10:
          puVar6 = puVar6 + 1;
          if (puVar6 <= puVar7) goto code_r0x0001410f8a19;
          goto LAB_1410f8a33;
        }
        for (; puVar8 = puVar5, puVar6 = puVar5, puVar5 < puVar7; puVar7 = puVar7 + -1) {
          while (puVar6 = puVar6 + 1, puVar6 <= puVar7) {
            uVar1 = *puVar6;
            uVar2 = FUN_1404cfc20(*puVar8);
            uVar3 = FUN_1404cfc20(uVar1);
            if (uVar2 < uVar3) {
              puVar8 = puVar6;
            }
          }
          uVar1 = *puVar8;
          *puVar8 = *puVar7;
          *puVar7 = uVar1;
          param_4 = local_368;
        }
        goto LAB_1410f8b25;
      }
LAB_1410f8b11:
      FUN_1410f8290(puVar6,lVar4,param_3,param_4);
LAB_1410f8b25:
      local_378 = local_378 + -3;
    } while (&local_348 <= local_378);
  }
  return;
code_r0x0001410f8a19:
  uVar1 = *puVar6;
  uVar2 = FUN_1404cfc20(*puVar5);
  uVar3 = FUN_1404cfc20(uVar1);
  if (uVar3 <= uVar2) goto LAB_1410f8a10;
LAB_1410f8a33:
  do {
    puVar9 = puVar8;
    puVar8 = puVar9 + -1;
    if (puVar8 <= puVar5) break;
    uVar1 = *puVar5;
    uVar2 = FUN_1404cfc20(*puVar8);
    uVar3 = FUN_1404cfc20(uVar1);
  } while (uVar3 <= uVar2);
  if (puVar6 <= puVar8) {
    uVar1 = *puVar6;
    *puVar6 = *puVar8;
    *puVar8 = uVar1;
    goto LAB_1410f8a10;
  }
  uVar1 = *puVar5;
  *puVar5 = *puVar8;
  local_370 = local_370 + -1;
  *puVar8 = uVar1;
  if ((longlong)((longlong)puVar8 + (-8 - (longlong)puVar5) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar7 - (longlong)puVar6 & 0xfffffffffffffff8U)) {
    if (puVar6 < puVar7) {
      *local_378 = (longlong)puVar6;
      local_378[1] = (longlong)puVar7;
      *(int *)(local_378 + 2) = local_370;
      local_378 = local_378 + 3;
    }
    if (puVar8 <= puVar5 + 1) goto LAB_1410f8b25;
    puVar7 = puVar9 + -2;
    puVar6 = puVar5;
  }
  else {
    if (puVar5 + 1 < puVar8) {
      *local_378 = (longlong)puVar5;
      local_378[1] = (longlong)(puVar9 + -2);
      *(int *)(local_378 + 2) = local_370;
      local_378 = local_378 + 3;
    }
    if (puVar7 <= puVar6) goto LAB_1410f8b25;
  }
  lVar4 = ((longlong)puVar7 - (longlong)puVar6 >> 3) + 1;
  puVar5 = puVar6;
  if (local_370 == 0) goto LAB_1410f8b11;
  goto LAB_1410f89e0;
}



// FUNCTION 1410f8bf0 FUN_1410f8bf0 body=962 status=ok
// SIG undefined FUN_1410f8bf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410f8bf0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  float fVar21;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_2 * 0x30 + -0x30 + param_1;
    fVar21 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar21 = fVar21 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar21 = _guard_xfg_dispatch_icall_nop(fVar21);
    local_338 = (undefined4)(longlong)(fVar21 + fVar21);
    _guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar16 = &local_348;
    do {
      puVar19 = (undefined8 *)*plVar16;
      puVar20 = (undefined8 *)plVar16[1];
      local_358 = plVar16[2];
      lVar12 = ((longlong)puVar20 - (longlong)puVar19) / 0x30 + 1;
      puVar18 = puVar19;
      iVar17 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1410f8cf0:
        if (8 < lVar12) {
          if (lVar12 < 0) {
            lVar12 = lVar12 + 1;
          }
          puVar19 = puVar18 + (lVar12 >> 1) * 6;
          if (puVar19 != puVar18) {
            uVar1 = puVar18[1];
            uVar5 = *puVar19;
            uVar6 = puVar19[1];
            uVar7 = puVar19[2];
            uVar8 = puVar19[3];
            uVar9 = puVar19[4];
            uVar10 = puVar19[5];
            *puVar19 = *puVar18;
            puVar19[1] = uVar1;
            uVar1 = puVar18[3];
            puVar19[2] = puVar18[2];
            puVar19[3] = uVar1;
            uVar2 = *(undefined4 *)((longlong)puVar18 + 0x24);
            uVar3 = *(undefined4 *)(puVar18 + 5);
            uVar4 = *(undefined4 *)((longlong)puVar18 + 0x2c);
            *(undefined4 *)(puVar19 + 4) = *(undefined4 *)(puVar18 + 4);
            *(undefined4 *)((longlong)puVar19 + 0x24) = uVar2;
            *(undefined4 *)(puVar19 + 5) = uVar3;
            *(undefined4 *)((longlong)puVar19 + 0x2c) = uVar4;
            *puVar18 = uVar5;
            puVar18[1] = uVar6;
            puVar18[2] = uVar7;
            puVar18[3] = uVar8;
            puVar18[4] = uVar9;
            puVar18[5] = uVar10;
          }
          puVar13 = puVar20 + 6;
          puVar19 = puVar18;
LAB_1410f8d50:
          puVar15 = puVar19;
          puVar19 = puVar15 + 6;
          if (puVar19 <= puVar20) goto code_r0x0001410f8d59;
          goto LAB_1410f8d70;
        }
        for (; puVar13 = puVar18, puVar19 = puVar18, puVar18 < puVar20; puVar20 = puVar20 + -6) {
          while (puVar19 = puVar19 + 6, puVar19 <= puVar20) {
            cVar11 = FUN_141100010(param_4,puVar13,puVar19);
            if (cVar11 != '\0') {
              puVar13 = puVar19;
            }
          }
          if (puVar13 != puVar20) {
            uVar1 = puVar20[1];
            uVar5 = *puVar13;
            uVar6 = puVar13[1];
            uVar7 = puVar13[2];
            uVar8 = puVar13[3];
            uVar9 = puVar13[4];
            uVar10 = puVar13[5];
            *puVar13 = *puVar20;
            puVar13[1] = uVar1;
            uVar1 = puVar20[3];
            puVar13[2] = puVar20[2];
            puVar13[3] = uVar1;
            uVar2 = *(undefined4 *)((longlong)puVar20 + 0x24);
            uVar3 = *(undefined4 *)(puVar20 + 5);
            uVar4 = *(undefined4 *)((longlong)puVar20 + 0x2c);
            *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(puVar20 + 4);
            *(undefined4 *)((longlong)puVar13 + 0x24) = uVar2;
            *(undefined4 *)(puVar13 + 5) = uVar3;
            *(undefined4 *)((longlong)puVar13 + 0x2c) = uVar4;
            *puVar20 = uVar5;
            puVar20[1] = uVar6;
            puVar20[2] = uVar7;
            puVar20[3] = uVar8;
            puVar20[4] = uVar9;
            puVar20[5] = uVar10;
          }
        }
        goto LAB_1410f8ed4;
      }
LAB_1410f8ebb:
      FUN_1410f8460(puVar19,lVar12,param_3,param_4);
LAB_1410f8ed4:
      plVar16 = plVar16 + -3;
    } while (&local_348 <= plVar16);
  }
  return;
code_r0x0001410f8d59:
  cVar11 = FUN_141100010(param_4,puVar18,puVar19);
  if (cVar11 == '\0') goto LAB_1410f8d50;
LAB_1410f8d70:
  do {
    puVar14 = puVar13;
    puVar13 = puVar14 + -6;
    if (puVar13 <= puVar18) break;
    cVar11 = FUN_141100010(param_4,puVar13,puVar18);
  } while (cVar11 == '\0');
  if (puVar19 <= puVar13) {
    if (puVar19 != puVar13) {
      uVar1 = puVar14[-5];
      uVar5 = *puVar19;
      uVar6 = puVar15[7];
      uVar7 = puVar15[8];
      uVar8 = puVar15[9];
      uVar9 = puVar15[10];
      uVar10 = puVar15[0xb];
      *puVar19 = *puVar13;
      puVar15[7] = uVar1;
      uVar1 = puVar14[-3];
      puVar15[8] = puVar14[-4];
      puVar15[9] = uVar1;
      uVar2 = *(undefined4 *)((longlong)puVar14 + -0xc);
      uVar3 = *(undefined4 *)(puVar14 + -1);
      uVar4 = *(undefined4 *)((longlong)puVar14 + -4);
      *(undefined4 *)(puVar15 + 10) = *(undefined4 *)(puVar14 + -2);
      *(undefined4 *)((longlong)puVar15 + 0x54) = uVar2;
      *(undefined4 *)(puVar15 + 0xb) = uVar3;
      *(undefined4 *)((longlong)puVar15 + 0x5c) = uVar4;
      *puVar13 = uVar5;
      puVar14[-5] = uVar6;
      puVar14[-4] = uVar7;
      puVar14[-3] = uVar8;
      puVar14[-2] = uVar9;
      puVar14[-1] = uVar10;
    }
    goto LAB_1410f8d50;
  }
  if (puVar18 != puVar13) {
    uVar1 = puVar14[-5];
    uVar5 = *puVar18;
    uVar6 = puVar18[1];
    uVar7 = puVar18[2];
    uVar8 = puVar18[3];
    uVar9 = puVar18[4];
    uVar10 = puVar18[5];
    *puVar18 = *puVar13;
    puVar18[1] = uVar1;
    uVar1 = puVar14[-3];
    puVar18[2] = puVar14[-4];
    puVar18[3] = uVar1;
    uVar2 = *(undefined4 *)((longlong)puVar14 + -0xc);
    uVar3 = *(undefined4 *)(puVar14 + -1);
    uVar4 = *(undefined4 *)((longlong)puVar14 + -4);
    *(undefined4 *)(puVar18 + 4) = *(undefined4 *)(puVar14 + -2);
    *(undefined4 *)((longlong)puVar18 + 0x24) = uVar2;
    *(undefined4 *)(puVar18 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar18 + 0x2c) = uVar4;
    *puVar13 = uVar5;
    puVar14[-5] = uVar6;
    puVar14[-4] = uVar7;
    puVar14[-3] = uVar8;
    puVar14[-2] = uVar9;
    puVar14[-1] = uVar10;
  }
  lVar12 = (longlong)puVar13 + (-0x30 - (longlong)puVar18);
  iVar17 = iVar17 + -1;
  lVar12 = lVar12 / 6 + (lVar12 >> 0x3f);
  if ((lVar12 >> 3) - (lVar12 >> 0x3f) < ((longlong)puVar20 - (longlong)puVar19) / 0x30) {
    if (puVar19 < puVar20) {
      *plVar16 = (longlong)puVar19;
      plVar16[1] = (longlong)puVar20;
      *(int *)(plVar16 + 2) = iVar17;
      plVar16 = plVar16 + 3;
    }
    if (puVar13 <= puVar18 + 6) goto LAB_1410f8ed4;
    puVar20 = puVar14 + -0xc;
    puVar19 = puVar18;
  }
  else {
    if (puVar18 + 6 < puVar13) {
      *plVar16 = (longlong)puVar18;
      plVar16[1] = (longlong)(puVar14 + -0xc);
      *(int *)(plVar16 + 2) = iVar17;
      plVar16 = plVar16 + 3;
    }
    if (puVar20 <= puVar19) goto LAB_1410f8ed4;
  }
  lVar12 = ((longlong)puVar20 - (longlong)puVar19) / 0x30 + 1;
  puVar18 = puVar19;
  if (iVar17 == 0) goto LAB_1410f8ebb;
  goto LAB_1410f8cf0;
}



// FUNCTION 1410f8fc0 FUN_1410f8fc0 body=962 status=ok
// SIG undefined FUN_1410f8fc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410f8fc0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  int iVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  float fVar21;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_2 * 0x30 + -0x30 + param_1;
    fVar21 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar21 = fVar21 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar21 = _guard_xfg_dispatch_icall_nop(fVar21);
    local_338 = (undefined4)(longlong)(fVar21 + fVar21);
    _guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar16 = &local_348;
    do {
      puVar19 = (undefined8 *)*plVar16;
      puVar20 = (undefined8 *)plVar16[1];
      local_358 = plVar16[2];
      lVar12 = ((longlong)puVar20 - (longlong)puVar19) / 0x30 + 1;
      puVar18 = puVar19;
      iVar17 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1410f90c0:
        if (8 < lVar12) {
          if (lVar12 < 0) {
            lVar12 = lVar12 + 1;
          }
          puVar19 = puVar18 + (lVar12 >> 1) * 6;
          if (puVar19 != puVar18) {
            uVar1 = puVar18[1];
            uVar5 = *puVar19;
            uVar6 = puVar19[1];
            uVar7 = puVar19[2];
            uVar8 = puVar19[3];
            uVar9 = puVar19[4];
            uVar10 = puVar19[5];
            *puVar19 = *puVar18;
            puVar19[1] = uVar1;
            uVar1 = puVar18[3];
            puVar19[2] = puVar18[2];
            puVar19[3] = uVar1;
            uVar2 = *(undefined4 *)((longlong)puVar18 + 0x24);
            uVar3 = *(undefined4 *)(puVar18 + 5);
            uVar4 = *(undefined4 *)((longlong)puVar18 + 0x2c);
            *(undefined4 *)(puVar19 + 4) = *(undefined4 *)(puVar18 + 4);
            *(undefined4 *)((longlong)puVar19 + 0x24) = uVar2;
            *(undefined4 *)(puVar19 + 5) = uVar3;
            *(undefined4 *)((longlong)puVar19 + 0x2c) = uVar4;
            *puVar18 = uVar5;
            puVar18[1] = uVar6;
            puVar18[2] = uVar7;
            puVar18[3] = uVar8;
            puVar18[4] = uVar9;
            puVar18[5] = uVar10;
          }
          puVar13 = puVar20 + 6;
          puVar19 = puVar18;
LAB_1410f9120:
          puVar15 = puVar19;
          puVar19 = puVar15 + 6;
          if (puVar19 <= puVar20) goto code_r0x0001410f9129;
          goto LAB_1410f9140;
        }
        for (; puVar13 = puVar18, puVar19 = puVar18, puVar18 < puVar20; puVar20 = puVar20 + -6) {
          while (puVar19 = puVar19 + 6, puVar19 <= puVar20) {
            cVar11 = FUN_1411038f0(param_4,puVar13,puVar19);
            if (cVar11 != '\0') {
              puVar13 = puVar19;
            }
          }
          if (puVar13 != puVar20) {
            uVar1 = puVar20[1];
            uVar5 = *puVar13;
            uVar6 = puVar13[1];
            uVar7 = puVar13[2];
            uVar8 = puVar13[3];
            uVar9 = puVar13[4];
            uVar10 = puVar13[5];
            *puVar13 = *puVar20;
            puVar13[1] = uVar1;
            uVar1 = puVar20[3];
            puVar13[2] = puVar20[2];
            puVar13[3] = uVar1;
            uVar2 = *(undefined4 *)((longlong)puVar20 + 0x24);
            uVar3 = *(undefined4 *)(puVar20 + 5);
            uVar4 = *(undefined4 *)((longlong)puVar20 + 0x2c);
            *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(puVar20 + 4);
            *(undefined4 *)((longlong)puVar13 + 0x24) = uVar2;
            *(undefined4 *)(puVar13 + 5) = uVar3;
            *(undefined4 *)((longlong)puVar13 + 0x2c) = uVar4;
            *puVar20 = uVar5;
            puVar20[1] = uVar6;
            puVar20[2] = uVar7;
            puVar20[3] = uVar8;
            puVar20[4] = uVar9;
            puVar20[5] = uVar10;
          }
        }
        goto LAB_1410f92a4;
      }
LAB_1410f928b:
      FUN_1410f86b0(puVar19,lVar12,param_3,param_4);
LAB_1410f92a4:
      plVar16 = plVar16 + -3;
    } while (&local_348 <= plVar16);
  }
  return;
code_r0x0001410f9129:
  cVar11 = FUN_1411038f0(param_4,puVar18,puVar19);
  if (cVar11 == '\0') goto LAB_1410f9120;
LAB_1410f9140:
  do {
    puVar14 = puVar13;
    puVar13 = puVar14 + -6;
    if (puVar13 <= puVar18) break;
    cVar11 = FUN_1411038f0(param_4,puVar13,puVar18);
  } while (cVar11 == '\0');
  if (puVar19 <= puVar13) {
    if (puVar19 != puVar13) {
      uVar1 = puVar14[-5];
      uVar5 = *puVar19;
      uVar6 = puVar15[7];
      uVar7 = puVar15[8];
      uVar8 = puVar15[9];
      uVar9 = puVar15[10];
      uVar10 = puVar15[0xb];
      *puVar19 = *puVar13;
      puVar15[7] = uVar1;
      uVar1 = puVar14[-3];
      puVar15[8] = puVar14[-4];
      puVar15[9] = uVar1;
      uVar2 = *(undefined4 *)((longlong)puVar14 + -0xc);
      uVar3 = *(undefined4 *)(puVar14 + -1);
      uVar4 = *(undefined4 *)((longlong)puVar14 + -4);
      *(undefined4 *)(puVar15 + 10) = *(undefined4 *)(puVar14 + -2);
      *(undefined4 *)((longlong)puVar15 + 0x54) = uVar2;
      *(undefined4 *)(puVar15 + 0xb) = uVar3;
      *(undefined4 *)((longlong)puVar15 + 0x5c) = uVar4;
      *puVar13 = uVar5;
      puVar14[-5] = uVar6;
      puVar14[-4] = uVar7;
      puVar14[-3] = uVar8;
      puVar14[-2] = uVar9;
      puVar14[-1] = uVar10;
    }
    goto LAB_1410f9120;
  }
  if (puVar18 != puVar13) {
    uVar1 = puVar14[-5];
    uVar5 = *puVar18;
    uVar6 = puVar18[1];
    uVar7 = puVar18[2];
    uVar8 = puVar18[3];
    uVar9 = puVar18[4];
    uVar10 = puVar18[5];
    *puVar18 = *puVar13;
    puVar18[1] = uVar1;
    uVar1 = puVar14[-3];
    puVar18[2] = puVar14[-4];
    puVar18[3] = uVar1;
    uVar2 = *(undefined4 *)((longlong)puVar14 + -0xc);
    uVar3 = *(undefined4 *)(puVar14 + -1);
    uVar4 = *(undefined4 *)((longlong)puVar14 + -4);
    *(undefined4 *)(puVar18 + 4) = *(undefined4 *)(puVar14 + -2);
    *(undefined4 *)((longlong)puVar18 + 0x24) = uVar2;
    *(undefined4 *)(puVar18 + 5) = uVar3;
    *(undefined4 *)((longlong)puVar18 + 0x2c) = uVar4;
    *puVar13 = uVar5;
    puVar14[-5] = uVar6;
    puVar14[-4] = uVar7;
    puVar14[-3] = uVar8;
    puVar14[-2] = uVar9;
    puVar14[-1] = uVar10;
  }
  lVar12 = (longlong)puVar13 + (-0x30 - (longlong)puVar18);
  iVar17 = iVar17 + -1;
  lVar12 = lVar12 / 6 + (lVar12 >> 0x3f);
  if ((lVar12 >> 3) - (lVar12 >> 0x3f) < ((longlong)puVar20 - (longlong)puVar19) / 0x30) {
    if (puVar19 < puVar20) {
      *plVar16 = (longlong)puVar19;
      plVar16[1] = (longlong)puVar20;
      *(int *)(plVar16 + 2) = iVar17;
      plVar16 = plVar16 + 3;
    }
    if (puVar13 <= puVar18 + 6) goto LAB_1410f92a4;
    puVar20 = puVar14 + -0xc;
    puVar19 = puVar18;
  }
  else {
    if (puVar18 + 6 < puVar13) {
      *plVar16 = (longlong)puVar18;
      plVar16[1] = (longlong)(puVar14 + -0xc);
      *(int *)(plVar16 + 2) = iVar17;
      plVar16 = plVar16 + 3;
    }
    if (puVar20 <= puVar19) goto LAB_1410f92a4;
  }
  lVar12 = ((longlong)puVar20 - (longlong)puVar19) / 0x30 + 1;
  puVar18 = puVar19;
  if (iVar17 == 0) goto LAB_1410f928b;
  goto LAB_1410f90c0;
}



// FUNCTION 1410f9390 FUN_1410f9390 body=617 status=ok
// SIG undefined FUN_1410f9390(void)

bool FUN_1410f9390(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*param_2 == 0) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    bVar5 = true;
    bVar6 = false;
    plVar7 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar9 = *plVar7;
  }
  else {
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar6 = true;
    lVar9 = 0;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (lVar9 == 0) goto LAB_1410f95a4;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_1410f94e7;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_1413347f0();
LAB_1410f94e7:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_1410f955b:
    lVar9 = 0;
  }
  else {
    lVar10 = FUN_1413347f0();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_1410f955b;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar9;
LAB_1410f95a4:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return *param_2 != 0;
}



// FUNCTION 1410f9600 FUN_1410f9600 body=879 status=ok
// SIG undefined FUN_1410f9600(void)

bool FUN_1410f9600(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_1410f96bf:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_1410f96bf;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_1410f96d4;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_1410f96d4:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_1410f990f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_1410f985d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_141335090();
LAB_1410f985d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_1410f98d6:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_141335090();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_1410f98d6;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  *param_2 = lVar11;
LAB_1410f990f:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 1410f9970 FUN_1410f9970 body=617 status=ok
// SIG undefined FUN_1410f9970(void)

bool FUN_1410f9970(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*param_2 == 0) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    bVar5 = true;
    bVar6 = false;
    plVar7 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar9 = *plVar7;
  }
  else {
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar6 = true;
    lVar9 = 0;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (lVar9 == 0) goto LAB_1410f9b84;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_1410f9ac7;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_141346f60();
LAB_1410f9ac7:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_1410f9b3b:
    lVar9 = 0;
  }
  else {
    lVar10 = FUN_141346f60();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_1410f9b3b;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar9;
LAB_1410f9b84:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return *param_2 != 0;
}



// FUNCTION 1410f9be0 FUN_1410f9be0 body=617 status=ok
// SIG undefined FUN_1410f9be0(void)

bool FUN_1410f9be0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*param_2 == 0) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    bVar5 = true;
    bVar6 = false;
    plVar7 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar9 = *plVar7;
  }
  else {
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar6 = true;
    lVar9 = 0;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (lVar9 == 0) goto LAB_1410f9df4;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_1410f9d37;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_141359140();
LAB_1410f9d37:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_1410f9dab:
    lVar9 = 0;
  }
  else {
    lVar10 = FUN_141359140();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_1410f9dab;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar9;
LAB_1410f9df4:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return *param_2 != 0;
}



// FUNCTION 1410f9e50 FUN_1410f9e50 body=617 status=ok
// SIG undefined FUN_1410f9e50(void)

bool FUN_1410f9e50(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*param_2 == 0) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    bVar5 = true;
    bVar6 = false;
    plVar7 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar9 = *plVar7;
  }
  else {
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar6 = true;
    lVar9 = 0;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (lVar9 == 0) goto LAB_1410fa064;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_1410f9fa7;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_141369640();
LAB_1410f9fa7:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_1410fa01b:
    lVar9 = 0;
  }
  else {
    lVar10 = FUN_141369640();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_1410fa01b;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar9;
LAB_1410fa064:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return *param_2 != 0;
}



// FUNCTION 1410fa0c0 FUN_1410fa0c0 body=879 status=ok
// SIG undefined FUN_1410fa0c0(void)

bool FUN_1410fa0c0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_1410fa17f:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_1410fa17f;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_1410fa194;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_1410fa194:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_1410fa3cf;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_1410fa31d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
LAB_1410fa31d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_1410fa396:
    lVar11 = 0;
  }
  else {
    lVar10 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_1410fa396;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  *param_2 = lVar11;
LAB_1410fa3cf:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 1410fa430 FUN_1410fa430 body=879 status=ok
// SIG undefined FUN_1410fa430(void)

bool FUN_1410fa430(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_1410fa4ef:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_1410fa4ef;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_1410fa504;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_1410fa504:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_1410fa73f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_1410fa68d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_14138d770();
LAB_1410fa68d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_1410fa706:
    lVar11 = 0;
  }
  else {
    lVar10 = FUN_14138d770();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_1410fa706;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  *param_2 = lVar11;
LAB_1410fa73f:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 1410fa7a0 FUN_1410fa7a0 body=617 status=ok
// SIG undefined FUN_1410fa7a0(void)

bool FUN_1410fa7a0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*param_2 == 0) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    bVar5 = true;
    bVar6 = false;
    plVar7 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar9 = *plVar7;
  }
  else {
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar6 = true;
    lVar9 = 0;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (lVar9 == 0) goto LAB_1410fa9b4;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_1410fa8f7;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
LAB_1410fa8f7:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_1410fa96b:
    lVar9 = 0;
  }
  else {
    lVar10 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_1410fa96b;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar9;
LAB_1410fa9b4:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return *param_2 != 0;
}



// FUNCTION 1410faa10 FUN_1410faa10 body=879 status=ok
// SIG undefined FUN_1410faa10(void)

bool FUN_1410faa10(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong *puVar12;
  bool bVar13;
  ulonglong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  ulonglong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  
  uVar9 = 0;
  if ((*param_2 == 0) && (cVar6 = FUN_142091120(param_1,param_3), cVar6 == '\0')) {
    if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) {
LAB_1410faacf:
      puVar12 = &local_58;
      local_58 = 0;
      plStack_50 = (longlong *)0x0;
      bVar5 = false;
      bVar7 = true;
    }
    else {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
      LOCK();
      iVar8 = *piVar1;
      if (iVar8 == 0) {
        *piVar1 = 0;
        iVar8 = 0;
      }
      UNLOCK();
      if (iVar8 < 1) goto LAB_1410faacf;
      local_80 = *(longlong **)(param_1 + 0x30);
      bVar5 = true;
      bVar7 = false;
      local_88 = 0;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        uVar3 = *(uint *)(local_80 + 1);
        bVar13 = uVar3 == 0;
        if (bVar13) {
          *(uint *)(local_80 + 1) = 0;
        }
        else {
          uVar9 = (ulonglong)uVar3;
        }
        UNLOCK();
        while (!bVar13) {
          iVar8 = (int)uVar9;
          LOCK();
          bVar13 = iVar8 == (int)local_80[1];
          if (bVar13) {
            *(int *)(local_80 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar13) {
            uVar9 = *(ulonglong *)(param_1 + 0x28);
            puVar12 = &local_88;
            local_88 = uVar9;
            goto LAB_1410faae4;
          }
          uVar9 = 0;
          LOCK();
          uVar3 = *(uint *)(local_80 + 1);
          bVar13 = uVar3 == 0;
          if (bVar13) {
            *(uint *)(local_80 + 1) = 0;
          }
          else {
            uVar9 = (ulonglong)uVar3;
          }
          UNLOCK();
        }
        local_80 = (longlong *)0x0;
      }
      uVar9 = 0;
      puVar12 = &local_88;
    }
LAB_1410faae4:
    local_78 = uVar9;
    plVar4 = (longlong *)puVar12[1];
    puVar12[1] = 0;
    plVar2 = plStack_50;
    local_70 = plVar4;
    *puVar12 = 0;
    if ((bVar7) && (plStack_50 != (longlong *)0x0)) {
      LOCK();
      plVar4 = plStack_50 + 1;
      lVar11 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    plVar4 = local_80;
    if ((bVar5) && (local_80 != (longlong *)0x0)) {
      LOCK();
      plVar2 = local_80 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    bVar5 = true;
    bVar7 = false;
    puVar12 = &local_78;
    uVar9 = local_78;
  }
  else {
    puVar12 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar7 = true;
  }
  local_68 = uVar9;
  plVar4 = (longlong *)puVar12[1];
  puVar12[1] = 0;
  plVar2 = plStack_40;
  local_60 = plVar4;
  *puVar12 = 0;
  if ((bVar7) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plStack_40 + 1;
    lVar11 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar4 = local_70;
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_68 == 0) goto LAB_1410fad1f;
  if (param_4 != 0) {
    lVar10 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar10) goto LAB_1410fac6d;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = UGMainMenuAnimInstance::GetPrivateStaticClass();
LAB_1410fac6d:
  plVar4 = *(longlong **)(local_68 + 0x80);
  local_38 = *(undefined8 *)(local_68 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = FUN_14203b1b0(local_38,param_4,param_3,param_1,param_5,param_6);
  if (lVar11 == 0) {
LAB_1410face6:
    lVar11 = 0;
  }
  else {
    lVar10 = UGMainMenuAnimInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8
         ) != lVar10 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_1410face6;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  *param_2 = lVar11;
LAB_1410fad1f:
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return *param_2 != 0;
}



// FUNCTION 1410fad80 FUN_1410fad80 body=617 status=ok
// SIG undefined FUN_1410fad80(void)

bool FUN_1410fad80(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*param_2 == 0) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    bVar5 = true;
    bVar6 = false;
    plVar7 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar9 = *plVar7;
  }
  else {
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar6 = true;
    lVar9 = 0;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (lVar9 == 0) goto LAB_1410faf94;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_1410faed7;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_14138d440();
LAB_1410faed7:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_1410faf4b:
    lVar9 = 0;
  }
  else {
    lVar10 = FUN_14138d440();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_1410faf4b;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar9;
LAB_1410faf94:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return *param_2 != 0;
}



// FUNCTION 1410faff0 FUN_1410faff0 body=617 status=ok
// SIG undefined FUN_1410faff0(void)

bool FUN_1410faff0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*param_2 == 0) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    bVar5 = true;
    bVar6 = false;
    plVar7 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar9 = *plVar7;
  }
  else {
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar6 = true;
    lVar9 = 0;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (lVar9 == 0) goto LAB_1410fb204;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_1410fb147;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_141392520();
LAB_1410fb147:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_1410fb1bb:
    lVar9 = 0;
  }
  else {
    lVar10 = FUN_141392520();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_1410fb1bb;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar9;
LAB_1410fb204:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return *param_2 != 0;
}



// FUNCTION 1410fb260 FUN_1410fb260 body=617 status=ok
// SIG undefined FUN_1410fb260(void)

bool FUN_1410fb260(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*param_2 == 0) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    bVar5 = true;
    bVar6 = false;
    plVar7 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar9 = *plVar7;
  }
  else {
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar6 = true;
    lVar9 = 0;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (lVar9 == 0) goto LAB_1410fb474;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_1410fb3b7;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = FUN_141392310();
LAB_1410fb3b7:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_1410fb42b:
    lVar9 = 0;
  }
  else {
    lVar10 = FUN_141392310();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_1410fb42b;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar9;
LAB_1410fb474:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return *param_2 != 0;
}



// FUNCTION 1410fb4d0 FUN_1410fb4d0 body=617 status=ok
// SIG undefined FUN_1410fb4d0(void)

bool FUN_1410fb4d0(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((*param_2 == 0) && (*(char *)(param_1 + 0x4c1) != '\0')) {
    bVar5 = true;
    bVar6 = false;
    plVar7 = (longlong *)FUN_140ad4c90(param_1,local_38);
    lVar9 = *plVar7;
  }
  else {
    plVar7 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar5 = false;
    bVar6 = true;
    lVar9 = 0;
  }
  plVar4 = (longlong *)plVar7[1];
  plVar7[1] = 0;
  *plVar7 = 0;
  plVar7 = plStack_40;
  if ((bVar6) && (plStack_40 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar10 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  if (lVar9 == 0) goto LAB_1410fb6e4;
  lVar10 = *(longlong *)(param_1 + 0x2c0);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x2b8);
  }
  if (param_4 != 0) {
    lVar8 = UPlatformInterfaceBase::GetPrivateStaticClass();
    lVar11 = param_4;
    do {
      if (lVar11 == lVar8) goto LAB_1410fb627;
      lVar11 = *(longlong *)(lVar11 + 0x30);
    } while (lVar11 != 0);
  }
  param_4 = AGameModeTitleScene::GetPrivateStaticClass();
LAB_1410fb627:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar9 = FUN_14203b1b0(lVar9,param_4,param_3,lVar10,param_5,param_6);
  if (lVar9 == 0) {
LAB_1410fb69b:
    lVar9 = 0;
  }
  else {
    lVar10 = AGameModeTitleScene::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_1410fb69b;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar10 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  *param_2 = lVar9;
LAB_1410fb6e4:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return *param_2 != 0;
}



// FUNCTION 1410fb740 FUN_1410fb740 body=127 status=ok
// SIG undefined FUN_1410fb740(void)

undefined8 * FUN_1410fb740(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_LAB_1446ba090;
  param_1[2] = *param_3;
  FWeakObjectPtr::operator=(param_1 + 3);
  uVar1 = FDelegateHandle::GenerateNewID();
  param_1[5] = uVar1;
  if (param_2 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 3);
    uVar1 = FUN_14178ac60(uVar1,*param_3);
    param_1[1] = uVar1;
  }
  *param_1 = &PTR_LAB_1446ba0d8;
  return param_1;
}



// FUNCTION 1410fb7c0 FUN_1410fb7c0 body=127 status=ok
// SIG undefined FUN_1410fb7c0(void)

undefined8 * FUN_1410fb7c0(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_LAB_1446ba120;
  param_1[2] = *param_3;
  FWeakObjectPtr::operator=(param_1 + 3);
  uVar1 = FDelegateHandle::GenerateNewID();
  param_1[5] = uVar1;
  if (param_2 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 3);
    uVar1 = FUN_14178ac60(uVar1,*param_3);
    param_1[1] = uVar1;
  }
  *param_1 = &PTR_LAB_1446ba168;
  return param_1;
}



// FUNCTION 1410fb840 FUN_1410fb840 body=259 status=ok
// SIG undefined FUN_1410fb840(void)

undefined8 * FUN_1410fb840(undefined8 *param_1)

{
  FUN_14221fbd0();
  *(undefined4 *)(param_1 + 0x8b) = 0x43480000;
  *param_1 = &PTR__scalar_deleting_destructor__1446b7cf8;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined2 *)(param_1 + 0x96) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4c4) = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0x44bb8000;
  *(undefined4 *)(param_1 + 0x8c) = 0x43480000;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0x41c80000;
  *(undefined4 *)(param_1 + 0x8d) = 0x43480000;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0x43480000;
  *(undefined4 *)(param_1 + 0x8e) = 0x44bb8000;
  *(undefined4 *)((longlong)param_1 + 0x474) = 0x42200000;
  *(undefined4 *)(param_1 + 0x8f) = 0x41f00000;
  *(undefined8 *)((longlong)param_1 + 0x47c) = 0x42200000;
  *(undefined4 *)((longlong)param_1 + 0x484) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x97) = 0x41a00000;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0x41200000;
  *(undefined4 *)(param_1 + 0x98) = 0x41a00000;
  return param_1;
}



// FUNCTION 1410fb950 FUN_1410fb950 body=54 status=ok
// SIG undefined FUN_1410fb950(void)

undefined8 * FUN_1410fb950(undefined8 *param_1)

{
  FUN_142fc7fd0();
  *param_1 = &PTR_FUN_1446b9680;
  param_1[0x598] = 0xcc;
  return param_1;
}



// FUNCTION 1410fb990 FUN_1410fb990 body=435 status=ok
// SIG undefined FUN_1410fb990(void)

undefined8 * FUN_1410fb990(undefined8 *param_1)

{
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_1446b75e0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 2;
  *(undefined4 *)(param_1 + 0x95) = 5;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
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
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0xc;
  FName::FName(param_1 + 0xb5,L"MainMenu",1);
  param_1[0xb6] = 0xffffffffffffffff;
  FWeakObjectPtr::operator=(param_1 + 0xb7,0);
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c4) = 0xffffffff;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 6;
  return param_1;
}



// FUNCTION 1410fbb50 FUN_1410fbb50 body=186 status=ok
// SIG undefined FUN_1410fbb50(void)

undefined1 * FUN_1410fbb50(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x38] = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0xffffffff;
  *(undefined8 *)(param_1 + 0xa4) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  return param_1;
}



// FUNCTION 1410fbc10 FUN_1410fbc10 body=540 status=ok
// SIG undefined FUN_1410fbc10(void)

longlong FUN_1410fbc10(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FString::FString();
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  FString::FString(param_1 + 0x28,param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  FString::FString(param_1 + 0x40,param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  FText::FText(param_1 + 0x78,param_2 + 0x78);
  FText::FText(param_1 + 0x90,param_2 + 0x90);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  FString::FString(param_1 + 0xb0,param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0xc0);
  FString::FString(param_1 + 200,param_2 + 200);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined1 *)(param_1 + 0xe8) = *(undefined1 *)(param_2 + 0xe8);
  *(undefined1 *)(param_1 + 0xe9) = *(undefined1 *)(param_2 + 0xe9);
  *(undefined1 *)(param_1 + 0xea) = *(undefined1 *)(param_2 + 0xea);
  uVar4 = *(undefined8 *)(param_2 + 0xf4);
  *(undefined8 *)(param_1 + 0xec) = *(undefined8 *)(param_2 + 0xec);
  *(undefined8 *)(param_1 + 0xf4) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x104);
  *(undefined8 *)(param_1 + 0xfc) = *(undefined8 *)(param_2 + 0xfc);
  *(undefined8 *)(param_1 + 0x104) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x114);
  *(undefined8 *)(param_1 + 0x10c) = *(undefined8 *)(param_2 + 0x10c);
  *(undefined8 *)(param_1 + 0x114) = uVar4;
  *(undefined1 *)(param_1 + 0x11c) = *(undefined1 *)(param_2 + 0x11c);
  *(undefined1 *)(param_1 + 0x11d) = *(undefined1 *)(param_2 + 0x11d);
  *(undefined1 *)(param_1 + 0x11e) = *(undefined1 *)(param_2 + 0x11e);
  uVar4 = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_2 + 0x120);
  *(undefined8 *)(param_1 + 0x128) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x138);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_1 + 0x138) = uVar4;
  uVar1 = *(undefined4 *)(param_2 + 0x144);
  uVar2 = *(undefined4 *)(param_2 + 0x148);
  uVar3 = *(undefined4 *)(param_2 + 0x14c);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x144) = uVar1;
  *(undefined4 *)(param_1 + 0x148) = uVar2;
  *(undefined4 *)(param_1 + 0x14c) = uVar3;
  FUN_140d20a30(param_1 + 0x150,param_2 + 0x150);
  *(undefined8 *)(param_1 + 0x198) = 0;
  FUN_140998750((undefined8 *)(param_1 + 0x198),*(undefined8 *)(param_2 + 0x198),
                *(undefined4 *)(param_2 + 0x1a0),0,0);
  uVar4 = *(undefined8 *)(param_2 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1b0) = uVar4;
  uVar4 = *(undefined8 *)(param_2 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_2 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1c0) = uVar4;
  return param_1;
}



// FUNCTION 1410fbe30 FUN_1410fbe30 body=411 status=ok
// SIG undefined FUN_1410fbe30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1410fbe30(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                      undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FString::FString();
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = *param_4;
  *(undefined4 *)(param_1 + 0x20) = param_5;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  uVar2 = FUN_1404b03b0();
  FText::FText(param_1 + 0x78,uVar2);
  uVar2 = FUN_1404b03b0();
  FText::FText(param_1 + 0x90,uVar2);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined2 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0xea) = 0;
  uVar2 = _DAT_1464aa6e8;
  *(undefined8 *)(param_1 + 0xec) = _DAT_1464aa6e0;
  *(undefined8 *)(param_1 + 0xf4) = uVar2;
  uVar2 = _DAT_1464aa6e8;
  *(undefined8 *)(param_1 + 0xfc) = _DAT_1464aa6e0;
  *(undefined8 *)(param_1 + 0x104) = uVar2;
  uVar1 = _DAT_1464aa6e8;
  uVar2 = _DAT_1464aa6e0;
  *(undefined2 *)(param_1 + 0x11c) = 0;
  *(undefined1 *)(param_1 + 0x11e) = 0;
  *(undefined8 *)(param_1 + 0x10c) = uVar2;
  *(undefined8 *)(param_1 + 0x114) = uVar1;
  uVar2 = _DAT_1464aa6e8;
  *(undefined8 *)(param_1 + 0x120) = _DAT_1464aa6e0;
  *(undefined8 *)(param_1 + 0x128) = uVar2;
  uVar2 = _DAT_1464aa6e8;
  *(undefined8 *)(param_1 + 0x130) = _DAT_1464aa6e0;
  *(undefined8 *)(param_1 + 0x138) = uVar2;
  uVar2 = _DAT_1464aa6e8;
  *(undefined8 *)(param_1 + 0x140) = _DAT_1464aa6e0;
  *(undefined8 *)(param_1 + 0x148) = uVar2;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  return param_1;
}



// FUNCTION 1410fbfd0 FUN_1410fbfd0 body=149 status=ok
// SIG undefined FUN_1410fbfd0(void)

undefined8 * FUN_1410fbfd0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_140e9aa30(param_1,uVar1);
  *(undefined4 *)(param_1 + 0xd2) = 0x3f333333;
  *param_1 = &PTR_FUN_1446b6ef8;
  param_1[0x9b] = &PTR_LAB_1446b7460;
  param_1[0xd5] = 0;
  *(undefined2 *)((longlong)param_1 + 0x70c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x694) = 0x43480000;
  *(undefined4 *)(param_1 + 0xd3) = 0xc3fa0000;
  *(undefined4 *)(param_1 + 0xe1) = 0x1010100;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x100000;
  *(undefined1 *)((longlong)param_1 + 0x5df) = 1;
  return param_1;
}



// FUNCTION 1410fc070 FUN_1410fc070 body=631 status=ok
// SIG undefined FUN_1410fc070(void)

undefined8 * FUN_1410fc070(undefined8 *param_1)

{
  undefined8 local_res8;
  
  FUN_140e9a810();
  *param_1 = &PTR_FUN_1446b8428;
  param_1[0x9b] = &PTR_LAB_1446b8990;
  FText::FText(param_1 + 0xd3);
  FText::FText(param_1 + 0xd6);
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  *(undefined1 *)(param_1 + 0xe2) = 1;
  *(undefined4 *)((longlong)param_1 + 0x714) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe3) = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0x19;
  *(undefined4 *)((longlong)param_1 + 0x744) = 0x32;
  *(undefined4 *)(param_1 + 0xe9) = 0x434d0000;
  *(undefined4 *)((longlong)param_1 + 0x74c) = 0x430b0000;
  *(undefined4 *)(param_1 + 0xea) = 0x434d0000;
  *(undefined8 *)((longlong)param_1 + 0x754) = 0x43078000;
  *(undefined4 *)((longlong)param_1 + 0x75c) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0x14;
  *(undefined4 *)((longlong)param_1 + 0x764) = 10;
  *(undefined4 *)(param_1 + 0xed) = 5;
  *(undefined4 *)((longlong)param_1 + 0x76c) = 2;
  *(undefined4 *)(param_1 + 0xee) = 5;
  *(undefined4 *)((longlong)param_1 + 0x774) = 0x3e800000;
  *(undefined1 *)(param_1 + 0xef) = 0;
  *(undefined4 *)((longlong)param_1 + 0x77c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x784) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf1) = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  FWeakObjectPtr::operator=(param_1 + 0xfc,0);
  FWeakObjectPtr::operator=(param_1 + 0xfd,0);
  FWeakObjectPtr::operator=(param_1 + 0xfe,0);
  *(undefined2 *)(param_1 + 0xff) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7fc) = 0;
  *(undefined2 *)((longlong)param_1 + 0x804) = 0;
  *(undefined4 *)(param_1 + 0x101) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x80c) = 0;
  *(undefined1 *)(param_1 + 0x102) = 0;
  FUN_1410fbb50(param_1 + 0x103);
  FUN_1410fbb50(param_1 + 0x11d);
  FUN_1410fbb50(param_1 + 0x137);
  *(undefined4 *)(param_1 + 0x151) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa8c) = 0;
  param_1[0x152] = 0;
  FName::FName(&local_res8,L"PlayerStorage",1);
  param_1[0xe5] = local_res8;
  FName::FName(&local_res8,L"PlayerStorage",1);
  param_1[0xe6] = local_res8;
  FName::FName(&local_res8,L"Inventory",1);
  param_1[0xe7] = local_res8;
  return param_1;
}



// FUNCTION 1410fc2f0 FUN_1410fc2f0 body=929 status=ok
// SIG undefined FUN_1410fc2f0(void)

undefined8 * FUN_1410fc2f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UFontFaceInterface::UFontFaceInterface(param_1,uVar1);
  *param_1 = &PTR_FUN_1446b9400;
  *(undefined4 *)(param_1 + 7) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 2;
  *(undefined4 *)(param_1 + 6) = 0x3e99999a;
  *(undefined1 *)((longlong)param_1 + 0x34) = 10;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x40000000;
  *(undefined4 *)(param_1 + 10) = 2;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3e99999a;
  *(undefined1 *)(param_1 + 9) = 10;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x40000000;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3e99999a;
  *(undefined1 *)(param_1 + 0xb) = 10;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x40000000;
  *(undefined4 *)(param_1 + 0xe) = 2;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3e99999a;
  *(undefined1 *)(param_1 + 0xd) = 10;
  *(undefined4 *)(param_1 + 0x10) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x84) = 2;
  *(undefined4 *)(param_1 + 0xf) = 0x3e99999a;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 10;
  *(undefined4 *)(param_1 + 0x12) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x94) = 2;
  *(undefined4 *)(param_1 + 0x11) = 0x3e99999a;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 10;
  *(undefined4 *)(param_1 + 0x14) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 2;
  *(undefined4 *)(param_1 + 0x13) = 0x3e99999a;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 10;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x40000000;
  *(undefined4 *)(param_1 + 0x17) = 2;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x3e99999a;
  *(undefined1 *)(param_1 + 0x16) = 10;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x40000000;
  *(undefined4 *)(param_1 + 0x19) = 2;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x3e99999a;
  *(undefined1 *)(param_1 + 0x18) = 10;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x40000000;
  *(undefined4 *)(param_1 + 0x1b) = 2;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3e99999a;
  *(undefined1 *)(param_1 + 0x1a) = 10;
  *(undefined4 *)(param_1 + 0x1d) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0xec) = 2;
  *(undefined4 *)(param_1 + 0x1c) = 0x3e99999a;
  *(undefined1 *)((longlong)param_1 + 0xe4) = 10;
  *(undefined4 *)(param_1 + 0x1f) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 2;
  *(undefined4 *)(param_1 + 0x1e) = 0x3e99999a;
  *(undefined1 *)((longlong)param_1 + 0xf4) = 10;
  *(undefined4 *)(param_1 + 0x21) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 2;
  *(undefined4 *)(param_1 + 0x20) = 0x3e99999a;
  *(undefined1 *)((longlong)param_1 + 0x104) = 10;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x40000000;
  *(undefined4 *)(param_1 + 0x24) = 2;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0x3e99999a;
  *(undefined1 *)(param_1 + 0x23) = 10;
  *(undefined4 *)((longlong)param_1 + 300) = 0x40000000;
  *(undefined4 *)(param_1 + 0x26) = 2;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0x3e99999a;
  *(undefined1 *)(param_1 + 0x25) = 10;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x40000000;
  *(undefined4 *)(param_1 + 0x28) = 2;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x3e99999a;
  *(undefined1 *)(param_1 + 0x27) = 10;
  *(undefined4 *)(param_1 + 0x2a) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x154) = 2;
  *(undefined4 *)(param_1 + 0x29) = 0x3e99999a;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 10;
  *(undefined4 *)(param_1 + 0x2c) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x164) = 2;
  *(undefined4 *)(param_1 + 0x2b) = 0x3e99999a;
  *(undefined1 *)((longlong)param_1 + 0x15c) = 10;
  *(undefined4 *)(param_1 + 0x2e) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x174) = 2;
  *(undefined4 *)(param_1 + 0x2d) = 0x3e99999a;
  *(undefined1 *)((longlong)param_1 + 0x16c) = 10;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x40000000;
  *(undefined4 *)(param_1 + 0x31) = 2;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x3e99999a;
  *(undefined1 *)(param_1 + 0x30) = 10;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0x40000000;
  *(undefined4 *)(param_1 + 0x33) = 2;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x3e99999a;
  *(undefined1 *)(param_1 + 0x32) = 10;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0x3f000000;
  FUN_142741540(param_1 + 0x38);
  FUN_142741540(param_1 + 0xf8);
  *(uint *)((longlong)param_1 + 0x7d4) = *(uint *)((longlong)param_1 + 0x7d4) | 0x80;
  *(undefined4 *)(param_1 + 0x1b8) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0xdc4) = 0x3e4ccccd;
  *(undefined1 *)((longlong)param_1 + 0xc94) = 1;
  *(uint *)(param_1 + 0xfa) = *(uint *)(param_1 + 0xfa) | 0xc0800000;
  *(uint *)((longlong)param_1 + 0x7d4) = *(uint *)((longlong)param_1 + 0x7d4) | 0x19;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcb4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcc4) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x198) = 0x40a00000;
  return param_1;
}



// FUNCTION 1410fc6a0 FUN_1410fc6a0 body=152 status=ok
// SIG undefined FUN_1410fc6a0(void)

void FUN_1410fc6a0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x88);
  plVar2 = *(longlong **)(param_1 + 0x80);
  if (iVar3 != 0) {
    do {
      puVar1 = (undefined8 *)*plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar2 = plVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    plVar2 = *(longlong **)(param_1 + 0x80);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x70);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x68);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x10);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1);
  return;
}



// FUNCTION 1410fc740 FUN_1410fc740 body=263 status=ok
// SIG undefined FUN_1410fc740(void)

void FUN_1410fc740(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TArray<FSpawnGenerator,FDefaultAllocator>::~TArray<FSpawnGenerator,FDefaultAllocator>
            (param_1 + 0x2e);
  FUN_14099a9b0(param_1 + 0x2c);
  FUN_14099aa40(param_1 + 0x2a);
  TArray<FSpawnGenerator,FDefaultAllocator>::~TArray<FSpawnGenerator,FDefaultAllocator>
            (param_1 + 0x28);
  FUN_14099a950(param_1 + 0x26);
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  if (param_1[0x11] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[0xe];
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
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410fc850 FUN_1410fc850 body=114 status=ok
// SIG undefined FUN_1410fc850(void)

ulonglong FUN_1410fc850(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                    (param_1 + 0x5c,param_2 + 0x5c);
  if ((char)uVar1 == '\0') {
    uVar1 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                      (param_1 + 0xdc,param_2 + 0xdc);
    if (((((char)uVar1 == '\0') &&
         (uVar1 = 0, *(char *)(param_1 + 0x59) == *(char *)(param_2 + 0x59))) &&
        (uVar1 = (ulonglong)*(uint *)(param_2 + 0xd8),
        *(uint *)(param_1 + 0xd8) == *(uint *)(param_2 + 0xd8))) &&
       (uVar1 = 0, *(char *)(param_1 + 0x5a) == *(char *)(param_2 + 0x5a))) {
      return 1;
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1410fc8d0 FUN_1410fc8d0 body=337 status=ok
// SIG undefined FUN_1410fc8d0(void)

void FUN_1410fc8d0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  local_res8[0] = 2;
  lVar2 = FUN_141136250(*param_1,local_res8,*param_1 + 0x6a8,(int)param_1[2]);
  lVar3 = FUN_14110de20(*param_1);
  if (lVar3 != 0) {
    *(int *)(lVar3 + 0x5b0) = (int)param_1[2];
    return;
  }
  if (lVar2 == 0) {
    return;
  }
  lVar3 = FUN_141369570();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  lVar3 = param_1[2];
  lVar4 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
  if (lVar4 != 0) {
    lVar5 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) &&
        (lVar3 = UGameInstance::FindLocalPlayerFromControllerId(lVar4,(int)lVar3), lVar3 != 0)) &&
       (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 != 0)) {
      lVar4 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_1410fca06;
    }
  }
  lVar3 = 0;
LAB_1410fca06:
  FUN_14112d8a0(lVar2,lVar3);
  return;
}



// FUNCTION 1410fca30 FUN_1410fca30 body=316 status=ok
// SIG undefined FUN_1410fca30(void)

void FUN_1410fca30(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_48 [48];
  
  if (param_3 != (longlong *)0x0) {
    lVar4 = FUN_14138d860();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar4 = **(longlong **)(param_1 + 8);
      lVar1 = **(longlong **)(param_1 + 0x10);
      if ((lVar1 != 0) && (lVar4 != 0)) {
        if (param_3[0x70] != 0) {
          FUN_1411e23f0(lVar1,local_48,param_3 + 0x6e);
          (**(code **)(*param_3 + 0x358))(param_3,local_48,0);
          FUN_140ddef50(local_48);
          return;
        }
        lVar2 = param_3[0x76];
        uVar5 = FWeakObjectPtr::Get((longlong)param_3 + 0x3e4);
        uVar6 = FUN_1411e6870(lVar4,lVar2);
        FUN_1411e2a40(lVar1,local_48,uVar5,uVar6);
        (**(code **)(*param_3 + 0x358))(param_3,local_48,0);
        FUN_140ddef50(local_48);
      }
    }
  }
  return;
}



// FUNCTION 1410fcb70 FUN_1410fcb70 body=895 status=ok
// SIG undefined FUN_1410fcb70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1410fcb70(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined1 auStack_1c8 [32];
  undefined4 *local_1a8;
  ulonglong *puStack_1a0;
  longlong local_198;
  longlong local_190;
  undefined8 local_188;
  longlong local_180;
  undefined1 local_178 [16];
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [16];
  undefined1 local_128 [24];
  undefined1 local_110 [24];
  undefined1 local_f8 [32];
  undefined4 local_d8 [4];
  undefined1 local_c8 [24];
  undefined1 local_b0;
  undefined4 local_a8;
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  if (*(int *)(*param_1 + 0x38) == 2) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (param_2,L"You are about to delete a corrupted save game. Are you sure?",
               L"LoadGameMenu",L"DeleteCorruptedSaveGameBodyText");
  }
  else {
    lVar6 = FText::FText(local_128,param_1[3]);
    local_190 = lVar6;
    lVar7 = FText::FText(local_110,param_1[2]);
    local_198 = lVar7;
    lVar8 = FText::FText(local_f8,param_1[1]);
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_150,
                       L"<font color=\'#FEE500\'>{0} {1} Level {2}</font>\n\nYou are about to delete this character. Are you sure?"
                       ,L"LoadGameMenu",L"DeleteCharacterMessageBodyText");
    puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_138,uVar9);
    local_d8[0] = 4;
    FText::FText(local_c8,lVar8);
    local_b0 = 1;
    local_a8 = 4;
    FText::FText(local_98,lVar7);
    local_80 = 1;
    local_78 = 4;
    FText::FText(local_68,lVar6);
    local_1a8 = local_d8;
    local_50 = 1;
    puStack_1a0 = local_48;
    local_188 = *puVar10;
    local_180 = puVar10[1];
    if (local_180 != 0) {
      LOCK();
      *(int *)(local_180 + 8) = *(int *)(local_180 + 8) + 1;
      UNLOCK();
    }
    uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_178,&local_1a8);
    uVar9 = FText::Format(local_168,&local_188,uVar9);
    FText::FText(param_2,uVar9);
    if (local_160 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_160 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_160)(local_160);
        LOCK();
        piVar1 = (int *)((longlong)local_160 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_160 + 8))(local_160,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_178);
    lVar6 = 3;
    pcVar11 = &stack0xffffffffffffffe0;
    do {
      lVar6 = lVar6 + -1;
      pcVar2 = pcVar11 + -0x30;
      if (*pcVar2 != '\0') {
        *pcVar2 = '\0';
        plVar5 = *(longlong **)(pcVar11 + -0x40);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar5 + 1;
          lVar7 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
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
      pcVar11 = pcVar2;
    } while (lVar6 != 0);
    plVar5 = (longlong *)puVar10[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
      plVar3 = plVar5 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    plVar5 = *(longlong **)(local_198 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    plVar5 = *(longlong **)(local_190 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_148 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
  }
  return param_2;
}



// FUNCTION 1410fcef0 FUN_1410fcef0 body=271 status=ok
// SIG undefined FUN_1410fcef0(void)

undefined8 * FUN_1410fcef0(undefined4 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined8 local_28;
  longlong *plStack_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar6 = 0;
  lVar5 = FUN_1416f8720(*param_1);
  bVar8 = lVar5 == 0;
  if (bVar8) {
    puVar7 = &local_28;
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
  }
  else {
    uVar6 = FUN_1416f8720(*param_1);
    puVar7 = (undefined8 *)FUN_142dcf3a0(uVar6,local_18);
    uVar6 = *puVar7;
  }
  *param_2 = uVar6;
  param_2[1] = puVar7[1];
  puVar7[1] = 0;
  *puVar7 = 0;
  plVar3 = plStack_20;
  if (bVar8) {
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_20 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  if ((!bVar8) && (local_10 != (longlong *)0x0)) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1410fd000 FUN_1410fd000 body=407 status=ok
// SIG undefined FUN_1410fd000(void)

void FUN_1410fd000(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if ((*(longlong *)*param_1 != 0) && (lVar7 = FUN_1422312c0(), lVar7 != 0)) {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      FUN_142dcf3a0(*(undefined8 *)*param_1,&local_28);
      if (local_28 != 0) {
        puVar9 = (undefined8 *)FUN_142dcf3a0(*(undefined8 *)*param_1,local_18);
        local_38 = *puVar9;
        local_30 = (longlong *)puVar9[1];
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        uVar6 = FUN_140bb6e30(lVar7,&local_38);
        plVar3 = local_30;
        *(undefined4 *)param_1[1] = uVar6;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_30 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_30)(local_30);
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
        if (local_10 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_10 + 1;
          lVar7 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_10)(local_10);
            LOCK();
            piVar2 = (int *)((longlong)local_10 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_10 + 8))(local_10,1);
            }
          }
        }
        uVar10 = (**(code **)(**(longlong **)*param_1 + 0x148))();
        uVar6 = FUN_140c12b10(uVar10);
        *(undefined4 *)param_1[2] = uVar6;
      }
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_20 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)local_20 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1410fd1a0 FUN_1410fd1a0 body=1275 status=ok
// SIG undefined FUN_1410fd1a0(void)

void FUN_1410fd1a0(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  char *pcVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  bool bVar18;
  char local_res8;
  undefined1 local_res10;
  undefined4 local_12c;
  undefined4 local_128 [2];
  longlong local_120;
  longlong *plStack_118;
  longlong local_110;
  longlong *local_108;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 *local_e8 [2];
  undefined1 local_d8 [32];
  undefined8 local_b8;
  undefined4 local_a8;
  code *local_98 [2];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  
  iVar3 = *(int *)(*param_1 + 0x8b0 + (param_2 & 0xff) * 4);
  if (iVar3 < 0) {
    return;
  }
  if (*(int *)(*param_1 + 0x8a8) <= iVar3) {
    return;
  }
  local_res8 = '\0';
  local_res10 = 0;
  lVar8 = FUN_140f9aee0();
  if (lVar8 == 0) goto LAB_1410fd3c8;
  pcVar9 = (char *)FUN_140a5dc70(lVar8);
  local_res8 = *pcVar9;
  cVar6 = FWeakObjectPtr::IsValid();
  bVar18 = cVar6 == '\0';
  if (bVar18) {
    plVar11 = &local_120;
    local_120 = 0;
    plStack_118 = (longlong *)0x0;
    lVar16 = 0;
  }
  else {
    uVar10 = FWeakObjectPtr::Get(*param_1 + 0x58c);
    plVar11 = (longlong *)FUN_142dcf3a0(uVar10,local_100);
    lVar16 = *plVar11;
  }
  plVar4 = (longlong *)plVar11[1];
  plVar11[1] = 0;
  *plVar11 = 0;
  plVar11 = plStack_118;
  if ((bVar18) && (plStack_118 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_118 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_118)(plStack_118);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_118 + 8))(plStack_118,1);
      }
    }
  }
  if ((!bVar18) && (local_f8 != (longlong *)0x0)) {
    LOCK();
    plVar11 = local_f8 + 1;
    lVar5 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  bVar18 = false;
  if (lVar16 == 0) {
LAB_1410fd347:
    local_res10 = 0;
  }
  else {
    bVar18 = true;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_110 = lVar16;
    local_108 = plVar4;
    uVar10 = FUN_140bb7440(lVar8);
    iVar7 = FUN_140d84030(uVar10,&local_110);
    local_res10 = 1;
    if (iVar7 < 1) goto LAB_1410fd347;
  }
  plVar11 = local_108;
  if ((bVar18) && (local_108 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_108 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar4 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
LAB_1410fd3c8:
  lVar8 = *param_1;
  iVar7 = 0;
  puVar12 = *(undefined8 **)(lVar8 + 0x9a8);
  puVar17 = puVar12 + (longlong)*(int *)(lVar8 + 0x9b0) * 2;
  iVar14 = 0;
  if (puVar12 != puVar17) {
    do {
      lVar8 = (**(code **)(*(longlong *)*puVar12 + 0x38))();
      iVar7 = iVar14 + 1;
      if ((*(byte *)(lVar8 + 0x10) & 4) == 0) {
        iVar7 = iVar14;
      }
      puVar12 = puVar12 + 2;
      iVar14 = iVar7;
    } while (puVar12 != puVar17);
    lVar8 = *param_1;
  }
  plVar11 = (longlong *)((longlong)iVar3 * 0x38 + *(longlong *)(lVar8 + 0x8a0));
  if ((iVar7 < 1) || (local_res8 != '\x02')) {
    local_128[0] = 0xffffffff;
    if (plVar11[6] != 0) {
      FUN_14170c210(local_128);
    }
    local_12c = 0xffffffff;
    uVar13 = 0xffffffff;
    if (plVar11[3] != 0) {
      FUN_14170c210(&local_12c);
      uVar13 = local_12c;
    }
    uVar15 = local_128[0];
    local_128[0] = 0xffffffff;
    local_12c = 0xffffffff;
    local_68 = 0;
    local_58 = 0;
    puVar12 = (undefined8 *)FUN_140438ef0(0x10,local_88);
    if (puVar12 != (undefined8 *)0x0) {
      *puVar12 = &PTR_FUN_14461b890;
      *(undefined4 *)(puVar12 + 1) = uVar13;
      uVar13 = 0xffffffff;
      *(undefined4 *)((longlong)puVar12 + 0xc) = uVar15;
      uVar15 = 0xffffffff;
    }
    local_98[0] = FUN_141107370;
    FUN_14208c4f0(*param_1,local_98);
    FUN_1416f8340(uVar15);
    FUN_1416f8340(uVar13);
    FUN_1416f8340(local_12c);
    uVar13 = local_128[0];
  }
  else {
    if (plVar11[6] != 0) {
      FUN_14170c210();
    }
    if (*plVar11 != 0) {
      FUN_14170c210();
    }
    if (plVar11[5] != 0) {
      FUN_14170c210();
    }
    if (plVar11[3] != 0) {
      FUN_14170c210();
    }
    if (plVar11[4] != 0) {
      FUN_14170c210();
    }
    local_b8 = 0;
    local_a8 = 0;
    puVar12 = (undefined8 *)FUN_140438ef0(0x28,local_d8);
    if (puVar12 != (undefined8 *)0x0) {
      *puVar12 = &PTR_FUN_1446ba078;
      *(undefined1 *)((longlong)puVar12 + 0xc) = local_res10;
      *(int *)(puVar12 + 1) = iVar7;
      *(undefined4 *)(puVar12 + 2) = 0xffffffff;
      *(undefined4 *)((longlong)puVar12 + 0x14) = 0xffffffff;
      *(undefined4 *)(puVar12 + 3) = 0xffffffff;
      *(undefined4 *)((longlong)puVar12 + 0x1c) = 0xffffffff;
      *(undefined4 *)(puVar12 + 4) = 0xffffffff;
    }
    local_e8[0] = &LAB_141107710;
    FUN_14208c4f0(*param_1,local_e8);
    FUN_1416f8340(0xffffffff);
    FUN_1416f8340(0xffffffff);
    FUN_1416f8340(0xffffffff);
    FUN_1416f8340(0xffffffff);
    FUN_1416f8340(0xffffffff);
    FUN_1416f8340(0xffffffff);
    FUN_1416f8340(0xffffffff);
    FUN_1416f8340(0xffffffff);
    FUN_1416f8340(0xffffffff);
    uVar13 = 0xffffffff;
  }
  FUN_1416f8340(uVar13);
  return;
}



// FUNCTION 1410fd6a0 FUN_1410fd6a0 body=118 status=ok
// SIG undefined FUN_1410fd6a0(void)

void FUN_1410fd6a0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  lVar3 = FUN_1416f8720(*param_1);
  if (lVar3 != 0) {
    lVar3 = FUN_1416f8720(*param_1);
    iVar1 = *(int *)(lVar3 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar5;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) & 0x30000000) == 0) {
      uVar4 = FUN_1416f8720(*param_1);
      FUN_1410a31e0(uVar4);
      return;
    }
  }
  return;
}



// FUNCTION 1410fd720 FUN_1410fd720 body=849 status=ok
// SIG undefined FUN_1410fd720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410fd720(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar2 = (**(code **)(*(longlong *)*param_1 + 0x148))();
  if (lVar2 != 0) {
    local_d8 = FUN_14110c140;
    uStack_d0 = 0;
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar6 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar6 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    lVar5 = *param_1;
    uVar1 = *(undefined4 *)(lVar5 + 0x690);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar3 + 1,lVar5);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_d8;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_d8._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_d0;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_cc;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_c8 = 0;
    local_c0 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_c8);
    }
    FWeakObjectPtr::operator=(local_b8,0);
    local_e0 = 0xbf800000;
    local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
    local_e8 = 0;
    local_b0 = 0;
    local_78 = (longlong *)0x0;
    local_68 = 0;
    FUN_142880850(uVar6,lVar5 + 0x6e0,&local_c8,uVar1);
    if (local_68 != 0) {
      plVar7 = local_98;
      if (local_78 != (longlong *)0x0) {
        plVar7 = local_78;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar5 = FMemory::Realloc(plVar3,0,0);
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
    }
    uStack_d0 = 0;
    local_d8 = FUN_14111c990;
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar6 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar6 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    lVar2 = *param_1;
    uVar1 = *(undefined4 *)(lVar2 + 0x694);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar3 + 1,lVar2);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_d8;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_d8._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_d0;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_cc;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar5;
      *plVar3 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_c8 = 0;
    local_c0 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_c8);
    }
    FWeakObjectPtr::operator=(local_b8,0);
    local_e0 = 0xbf800000;
    local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
    local_b0 = 0;
    local_78 = (longlong *)0x0;
    local_68 = 0;
    local_e8 = 0;
    FUN_142880850(uVar6,lVar2 + 0x6d8,&local_c8,uVar1);
    if (local_68 != 0) {
      plVar7 = local_98;
      if (local_78 != (longlong *)0x0) {
        plVar7 = local_78;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar2 = FMemory::Realloc(plVar3,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
  }
  return;
}



// FUNCTION 1410fda80 FUN_1410fda80 body=813 status=ok
// SIG undefined FUN_1410fda80(void)

/* WARNING: Removing unreachable block (ram,0x0001410fdbfb) */

void FUN_1410fda80(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  wchar_t *pwVar4;
  int iVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined2 *puVar13;
  uint uVar14;
  wchar_t *local_res8;
  wchar_t *local_98;
  uint local_90;
  undefined4 local_8c;
  wchar_t *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong *local_50;
  uint local_48;
  int local_40;
  undefined4 uStack_3c;
  
  iVar10 = 1;
  iVar5 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar5 = 0;
  }
  if (*(int *)*param_1 < iVar5) {
    lVar2 = **(longlong **)(param_1[1] + 0x750);
    uVar6 = FText::FromString(local_78);
    (**(code **)(lVar2 + 0x2b0))(*(undefined8 *)(param_1[1] + 0x750),uVar6,1,0);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_70 + 1;
      lVar2 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    local_60 = 0xffffffffffffffff;
    uStack_58 = 0xffffffffffffffff;
    local_50 = (longlong *)0x0;
    local_48 = 0;
    FUN_14203acd0(*(undefined8 *)param_1[2],"numLines",&local_60);
    iVar10 = local_40;
    if (*(int *)param_1[3] < local_40) {
      FUN_141103210(param_1[4],param_1[5],*(int *)param_1[3] + -1);
      puVar13 = &DAT_143f3eda8;
      uVar11 = 0;
      if (*(int *)((undefined8 *)param_1[5] + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = *(undefined2 **)param_1[5];
      }
      iVar5 = FUN_141592950(param_2,puVar7,1,0,0xffffffff);
      uVar14 = *(int *)(param_1[5] + 8) - 1;
      if (*(int *)(param_1[5] + 8) == 0) {
        uVar14 = uVar11;
      }
      uVar14 = uVar14 + iVar5;
      if (uVar14 != 0xffffffff) {
        iVar10 = *(int *)(param_2 + 1);
        uVar8 = iVar10 - 1;
        if (iVar10 == 0) {
          uVar8 = uVar11;
        }
        if (uVar14 < uVar8) {
          uVar8 = uVar14;
        }
        if (iVar10 == 0) {
          local_res8 = L"";
        }
        else {
          local_res8 = (wchar_t *)*param_2;
        }
        local_98 = (wchar_t *)0x0;
        local_8c = 0;
        local_90 = uVar8 + 1;
        if (uVar8 == 0) {
          local_90 = uVar11;
        }
        if ((0 < (int)local_90) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0), pwVar4 = local_98,
           0 < (int)local_90)) {
          wcsncpy(local_98,local_res8,(longlong)(int)uVar8);
          pwVar4[(int)uVar8] = L'\0';
        }
        FUN_141101130(param_1[6],&local_98,*(undefined4 *)param_1[3]);
        if (local_98 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        iVar10 = *(int *)(param_2 + 1);
        uVar8 = uVar14 + 0x7fffffff;
        uVar11 = iVar10 - 1;
        if (iVar10 == 0) {
          uVar11 = 0xffffffff;
        }
        uVar12 = 0;
        if (iVar10 == 0) {
          uVar11 = uVar12;
        }
        if (uVar14 < uVar11) {
          uVar11 = uVar14;
        }
        uVar14 = iVar10 - 1;
        if (iVar10 == 0) {
          uVar14 = uVar12;
        }
        uVar9 = uVar11;
        if ((uVar11 <= uVar8) && (uVar9 = uVar14, uVar8 < uVar14)) {
          uVar9 = uVar8;
        }
        if (iVar10 != 0) {
          puVar13 = (undefined2 *)*param_2;
        }
        iVar10 = uVar9 - uVar11;
        local_88 = (wchar_t *)0x0;
        local_7c = 0;
        local_80 = iVar10 + 1;
        if (iVar10 == 0) {
          local_80 = uVar12;
        }
        if ((0 < (int)local_80) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0), pwVar4 = local_88,
           0 < (int)local_80)) {
          wcsncpy(local_88,puVar13 + (int)uVar11,(longlong)iVar10);
          pwVar4[iVar10] = L'\0';
        }
        plVar3 = *(longlong **)(param_1[7] + 0x38);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))(plVar3,&local_88);
          if (local_88 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          if ((local_48 >> 6 & 1) == 0) {
            return;
          }
          (**(code **)(*local_50 + 0x10))(local_50,&local_60,CONCAT44(uStack_3c,local_40));
          return;
        }
                    /* WARNING: Subroutine does not return */
        std::_guard_xfg_dispatch_icall_nop();
      }
    }
    if ((local_48 >> 6 & 1) != 0) {
      (**(code **)(*local_50 + 0x10))(local_50,&local_60,CONCAT44(uStack_3c,local_40));
    }
  }
  FUN_141101130(param_1[6],param_2,iVar10);
  return;
}



// FUNCTION 1410fddb0 FUN_1410fddb0 body=461 status=ok
// SIG undefined FUN_1410fddb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1410fddb0(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  longlong *local_198;
  uint local_190;
  undefined8 *local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  longlong *local_168;
  uint local_160;
  undefined8 local_158;
  undefined1 local_148 [256];
  longlong local_48;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_168 = (longlong *)0x0;
  local_178 = 0xffffffffffffffff;
  uStack_170 = 0xffffffffffffffff;
  local_160 = 0;
  local_1a8 = 0xffffffffffffffff;
  uStack_1a0 = 0xffffffffffffffff;
  local_198 = (longlong *)0x0;
  local_190 = 0;
  cVar2 = FUN_14203acd0(*(undefined8 *)*param_1,&DAT_1446b7cec,&local_1a8);
  if (cVar2 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    if ((local_190 >> 6 & 1) != 0) {
      (**(code **)(*local_198 + 0x10))(local_198,&local_1a8,local_188);
      local_198 = (longlong *)0x0;
    }
    local_190 = 0;
    if ((local_160 >> 6 & 1) != 0) {
      (**(code **)(*local_168 + 0x10))(local_168,&local_178,local_158);
    }
  }
  else {
    puVar4 = local_188;
    if ((local_190 >> 6 & 1) != 0) {
      puVar4 = (undefined8 *)*local_188;
    }
    lVar3 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                      (local_148,puVar4);
    psVar1 = *(short **)(lVar3 + 0x108);
    *param_2 = 0;
    param_2[1] = 0;
    if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (psVar1[lVar3] != 0);
      iVar5 = (int)lVar3 + 1;
      *(int *)(param_2 + 1) = iVar5;
      if (0 < iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      }
      FGenericPlatformString::Memcpy(*param_2,psVar1,(longlong)iVar5 * 2);
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    if ((local_190 >> 6 & 1) != 0) {
      (**(code **)(*local_198 + 0x10))(local_198,&local_1a8,local_188);
      local_198 = (longlong *)0x0;
    }
    local_190 = 0;
    if ((local_160 >> 6 & 1) != 0) {
      (**(code **)(*local_168 + 0x10))(local_168,&local_178,local_158);
    }
  }
  return param_2;
}



// FUNCTION 1410fdf80 FUN_1410fdf80 body=715 status=ok
// SIG undefined FUN_1410fdf80(void)

void FUN_1410fdf80(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined1 local_res8 [8];
  longlong *local_68;
  int local_60;
  code *local_58;
  longlong *plStack_50;
  code *local_48;
  longlong *plStack_40;
  longlong local_38 [2];
  
  lVar7 = *param_1;
  bVar3 = false;
  puVar8 = *(undefined8 **)(lVar7 + 0x6d0);
  iVar2 = *(int *)(lVar7 + 0x6d8);
  puVar12 = puVar8;
  do {
    if (puVar12 == puVar8 + (longlong)iVar2 * 0x39) {
LAB_1410fe20a:
      lVar7 = *param_1;
      plVar11 = (longlong *)(lVar7 + 0x718);
      if (plVar11 != local_38) {
        if (*plVar11 != 0) {
          FMemory::Free();
        }
        *plVar11 = 0;
        *(undefined8 *)(lVar7 + 0x720) = 0;
      }
      return;
    }
    if (*(int *)(lVar7 + 0x720) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = *(undefined2 **)(lVar7 + 0x718);
    }
    if (*(int *)(puVar12 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar12;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar10);
    if (iVar4 == 0) {
      iVar2 = (int)(((longlong)puVar12 - (longlong)puVar8) / 0x1c8);
      if ((-1 < iVar2) && (iVar2 < *(int *)(*param_1 + 0x6d8))) {
        FUN_142dcf3a0(*(undefined8 *)(*param_1 + 0x7b0),&local_58);
        if (local_58 != (code *)0x0) {
          uVar5 = (**(code **)(*(longlong *)*param_1 + 0x148))();
          plVar11 = (longlong *)FUN_140d3a420(uVar5);
          if (plVar11 != (longlong *)0x0) {
            lVar7 = *param_1;
            local_48 = FUN_141114660;
            plStack_40 = (longlong *)((ulonglong)plStack_40 & 0xffffffff00000000);
            local_68 = (longlong *)0x0;
            bVar3 = true;
            plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
            local_60 = 3;
            local_68 = plVar6;
            if (plVar6 != (longlong *)0x0) {
              *plVar6 = (longlong)&PTR_FUN_144060be0;
              FWeakObjectPtr::operator=(plVar6 + 1,lVar7);
              plVar6[2] = (longlong)local_48;
              plVar6[3] = (longlong)plStack_40;
              lVar7 = FDelegateHandle::GenerateNewID();
              plVar6[5] = lVar7;
              *plVar6 = (longlong)&PTR_FUN_144060c28;
            }
            puVar8 = (undefined8 *)(**(code **)(*plVar11 + 0x160))(plVar11,local_res8,&local_68);
            *(undefined8 *)(*param_1 + 0x728) = *puVar8;
            if (local_60 == 0) {
LAB_1410fe158:
              if (local_68 != (longlong *)0x0) {
                FMemory::Free(local_68);
              }
            }
            else if (local_68 != (longlong *)0x0) {
              (**(code **)(*local_68 + 0x28))(local_68,0);
              if (local_68 != (longlong *)0x0) {
                local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
              }
              local_60 = 0;
              goto LAB_1410fe158;
            }
            local_48 = local_58;
            plStack_40 = plStack_50;
            if (plStack_50 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
              UNLOCK();
            }
            FUN_140d2a8a0(plVar11,&local_48,*param_1 + 0x718);
            plVar11 = plStack_40;
            if (plStack_40 != (longlong *)0x0) {
              LOCK();
              plVar6 = plStack_40 + 1;
              lVar7 = *plVar6;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*plStack_40)(plStack_40);
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
          }
        }
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          plVar11 = plStack_50 + 1;
          lVar7 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plStack_50)(plStack_50);
            LOCK();
            piVar1 = (int *)((longlong)plStack_50 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*plStack_50 + 8))(plStack_50,1);
            }
          }
        }
        if (bVar3) {
          return;
        }
      }
      goto LAB_1410fe20a;
    }
    puVar12 = puVar12 + 0x39;
  } while( true );
}



// FUNCTION 1410fe250 FUN_1410fe250 body=343 status=ok
// SIG undefined FUN_1410fe250(void)

undefined8 * FUN_1410fe250(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uStackX_c;
  undefined **local_38 [2];
  longlong *local_28;
  longlong local_20;
  
  plVar8 = (longlong *)0x0;
  cVar5 = FWeakObjectPtr::IsValid(*param_1 + 0x5cc);
  if (cVar5 != '\0') {
    uVar6 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
    lVar7 = UGameInstance::FindLocalPlayerFromControllerId(uVar6,(int)param_1[1]);
    if (lVar7 != 0) {
      lVar7 = FUN_142547b50(lVar7,local_38);
      plVar8 = *(longlong **)(lVar7 + 0x10);
      plVar10 = *(longlong **)(lVar7 + 8);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      bVar4 = true;
      bVar3 = true;
      plVar9 = plVar8;
      goto LAB_1410fe2d7;
    }
  }
  plVar9 = (longlong *)((ulonglong)uStackX_c << 0x20);
  bVar4 = false;
  bVar3 = false;
  plVar10 = plVar8;
LAB_1410fe2d7:
  *param_2 = plVar10;
  param_2[1] = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  if ((bVar3) && (plVar9 != (longlong *)0x0)) {
    LOCK();
    plVar8 = plVar9 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  if (bVar4) {
    local_38[0] = &PTR_FUN_143f740c8;
    if (local_20 != 0) {
      FMemory::Free();
    }
    local_38[0] = &PTR_FUN_143f73d18;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_28 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_28 + 8))(local_28,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 1410fe3b0 FUN_1410fe3b0 body=638 status=ok
// SIG undefined FUN_1410fe3b0(void)

undefined1 FUN_1410fe3b0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  longlong *plStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar11 = 0;
  lVar7 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
  if (lVar7 != 0) {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if ((bVar12) && (cVar5 = FUN_140bc9f60(lVar7), cVar5 == '\0')) {
      cVar5 = FWeakObjectPtr::IsValid(*param_1 + 0x58c);
      bVar12 = cVar5 == '\0';
      if (bVar12) {
        plVar10 = &local_38;
        local_38 = 0;
        plStack_30 = (longlong *)0x0;
      }
      else {
        uVar9 = FWeakObjectPtr::Get(*param_1 + 0x58c);
        plVar10 = (longlong *)FUN_142dcf3a0(uVar9,local_18);
        lVar11 = *plVar10;
      }
      plVar4 = (longlong *)plVar10[1];
      plVar10[1] = 0;
      *plVar10 = 0;
      plVar10 = plStack_30;
      if ((bVar12) && (plStack_30 != (longlong *)0x0)) {
        LOCK();
        plVar1 = plStack_30 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plStack_30)(plStack_30);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_30 + 8))(plStack_30,1);
          }
        }
      }
      if ((!bVar12) && (local_10 != (longlong *)0x0)) {
        LOCK();
        plVar10 = local_10 + 1;
        lVar8 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
      if (lVar11 != 0) {
        lVar7 = FUN_140bba5e0(lVar7);
        if (lVar7 != 0) {
          local_48 = (undefined4)lVar11;
          uStack_44 = (undefined4)((ulonglong)lVar11 >> 0x20);
          uStack_40 = SUB84(plVar4,0);
          uStack_3c = (undefined4)((ulonglong)plVar4 >> 0x20);
          local_28 = local_48;
          uStack_24 = uStack_44;
          uStack_20 = uStack_40;
          uStack_1c = uStack_3c;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          uVar6 = FUN_140d3ce10(lVar7,&local_28);
          plVar10 = (longlong *)CONCAT44(uStack_1c,uStack_20);
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar10 + 1;
            lVar11 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
              }
            }
          }
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar10 = plVar4 + 1;
            lVar11 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
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
          return uVar6;
        }
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar4 + 1;
        lVar11 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
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
    }
  }
  return 1;
}



// FUNCTION 1410fe630 FUN_1410fe630 body=856 status=ok
// SIG undefined FUN_1410fe630(void)

void FUN_1410fe630(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong *local_88;
  int local_80;
  code *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  code *local_68;
  longlong *plStack_60;
  code *local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *local_40;
  
  FUN_142dcf3a0(*(undefined8 *)(*param_1 + 0x7b0),&local_68);
  if (local_68 == (code *)0x0) {
    FUN_142eb3990();
    goto LAB_1410fe943;
  }
  uVar4 = (**(code **)(*(longlong *)*param_1 + 0x148))();
  plVar5 = (longlong *)FUN_140d3a420(uVar4);
  if (plVar5 == (longlong *)0x0) goto LAB_1410fe943;
  lVar7 = *param_1;
  local_78 = FUN_14111cb80;
  iStack_70 = 0;
  local_88 = (longlong *)0x0;
  plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_80 = 3;
  local_88 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)IDelegateInstance::vftable;
    *plVar6 = (longlong)&PTR_FUN_1443193b0;
    FWeakObjectPtr::operator=(plVar6 + 1,lVar7);
    plVar6[2] = (longlong)local_78;
    plVar6[3] = CONCAT44(uStack_6c,iStack_70);
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[5] = lVar7;
    *plVar6 = (longlong)&PTR_FUN_1443193f8;
  }
  puVar8 = (undefined8 *)(**(code **)(*plVar5 + 0x180))(plVar5,local_res8,&local_88);
  *(undefined8 *)(*param_1 + 0x6f8) = *puVar8;
  if (local_80 == 0) {
LAB_1410fe779:
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
  }
  else if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x28))(local_88,0);
    if (local_88 != (longlong *)0x0) {
      local_88 = (longlong *)FMemory::Realloc(local_88,0,0);
    }
    local_80 = 0;
    goto LAB_1410fe779;
  }
  FUN_140d3b570(plVar5,&local_48);
  if ((local_48 == 0) || (cVar3 = (*(code *)**(undefined8 **)local_68)(), cVar3 != '\0')) {
    lVar7 = *param_1;
    local_58 = FUN_14111cdf0;
    plStack_50 = (longlong *)((ulonglong)plStack_50 & 0xffffffff00000000);
    local_78 = (code *)0x0;
    pcVar9 = (code *)FMemory::Realloc(0,0x30);
    iStack_70 = 3;
    local_78 = pcVar9;
    if (pcVar9 != (code *)0x0) {
      *(undefined ***)pcVar9 = IDelegateInstance::vftable;
      *(undefined ***)pcVar9 = &PTR_FUN_144012f30;
      FWeakObjectPtr::operator=(pcVar9 + 8,lVar7);
      *(code **)(pcVar9 + 0x10) = local_58;
      *(longlong **)(pcVar9 + 0x18) = plStack_50;
      lVar7 = FDelegateHandle::GenerateNewID();
      *(longlong *)(pcVar9 + 0x28) = lVar7;
      *(undefined ***)pcVar9 = &PTR_FUN_144012f78;
    }
    puVar8 = (undefined8 *)(**(code **)(*plVar5 + 0x1a0))(plVar5,local_res10,&local_78);
    *(undefined8 *)(*param_1 + 0x6f0) = *puVar8;
    if (iStack_70 == 0) {
LAB_1410fe87f:
      if (local_78 != (code *)0x0) {
        FMemory::Free(local_78);
      }
    }
    else if (local_78 != (code *)0x0) {
      (**(code **)(*(longlong *)local_78 + 0x28))(local_78,0);
      if (local_78 != (code *)0x0) {
        local_78 = (code *)FMemory::Realloc(local_78,0,0);
      }
      iStack_70 = 0;
      goto LAB_1410fe87f;
    }
    local_58 = local_68;
    plStack_50 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
      UNLOCK();
    }
    FUN_140d3db90(plVar5,&local_58);
    plVar5 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_50 + 1;
      lVar7 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_50)(plStack_50);
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
  else {
    *(undefined1 *)(*param_1 + 0x7c5) = 1;
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_40 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
LAB_1410fe943:
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_60 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plStack_60 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_60 + 8))(plStack_60,1);
      }
    }
  }
  return;
}



// FUNCTION 1410fe990 FUN_1410fe990 body=534 status=ok
// SIG undefined FUN_1410fe990(void)

ulonglong FUN_1410fe990(longlong *param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 local_res8 [8];
  longlong *local_48;
  int local_40;
  code *local_38;
  longlong *plStack_30;
  code *local_28;
  longlong *plStack_20;
  
  uVar5 = (**(code **)(*(longlong *)*param_1 + 0x148))();
  plVar6 = (longlong *)FUN_140d3a420(uVar5);
  if (plVar6 == (longlong *)0x0) {
    return 0;
  }
  uVar7 = FUN_14110db70(*param_1,&local_38,*(undefined8 *)(*param_1 + 0x7b0));
  if (local_38 == (code *)0x0) goto LAB_1410feb5a;
  lVar9 = *param_1;
  local_28 = FUN_141122ec0;
  plStack_20 = (longlong *)((ulonglong)plStack_20 & 0xffffffff00000000);
  local_48 = (longlong *)0x0;
  plVar8 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_40 = 3;
  local_48 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_FUN_1444f8208;
    FWeakObjectPtr::operator=(plVar8 + 1,lVar9);
    plVar8[2] = (longlong)local_28;
    plVar8[3] = (longlong)plStack_20;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar8[5] = lVar9;
    *plVar8 = (longlong)&PTR_FUN_1444f8250;
  }
  puVar10 = (undefined8 *)(**(code **)(*plVar6 + 0x120))(plVar6,local_res8,&local_48);
  *(undefined8 *)(*param_1 + 0x710) = *puVar10;
  if (local_40 == 0) {
LAB_1410fead5:
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  else if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
    goto LAB_1410fead5;
  }
  local_28 = local_38;
  plStack_20 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  FUN_140d46ef0(plVar6,&local_28,param_1 + 1,0);
  plVar6 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_20 + 1;
    lVar9 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_20)(plStack_20);
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
  LOCK();
  uVar4 = *(uint *)(*param_1 + 0x588);
  *(uint *)(*param_1 + 0x588) = 1;
  uVar7 = (ulonglong)uVar4;
  UNLOCK();
LAB_1410feb5a:
  plVar6 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    puVar2 = (uint *)(plStack_30 + 1);
    uVar4 = *puVar2;
    uVar7 = (ulonglong)uVar4;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if (uVar4 == 1) {
      uVar7 = (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        uVar7 = (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return uVar7;
}



// FUNCTION 1410febb0 FUN_1410febb0 body=411 status=ok
// SIG undefined FUN_1410febb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410febb0(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 local_res10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_res10 = param_2;
  local_88 = FWeakObjectPtr::Get(*param_1 + 0x5d4);
  if (local_88 == 0) {
LAB_1410fec2b:
    local_88 = 0;
  }
  else {
    lVar2 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(local_88 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_88 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1410fec2b;
  }
  local_80 = *param_1;
  uStack_78 = &local_88;
  local_70 = &local_res10;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_58);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = (undefined4)local_80;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_80._4_4_;
    *(undefined4 *)(puVar3 + 2) = (undefined4)uStack_78;
    *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_78._4_4_;
    *puVar3 = &PTR_FUN_143f4d0b0;
    puVar3[3] = local_70;
  }
  lVar2 = *param_1;
  local_68[0] = &LAB_141107230;
  if ((byte)(*(char *)(lVar2 + 0x778) - 1U) < 2) {
    lVar2 = lVar2 + 0x820;
  }
  else {
    if (1 < (byte)(*(char *)(lVar2 + 0x778) - 3U)) goto LAB_1410feced;
    FUN_141035f30(lVar2 + 0x8f0,local_68);
    lVar2 = *param_1 + 0x9c0;
  }
  FUN_141035f30(lVar2,local_68);
LAB_1410feced:
  if (local_28 != 0) {
    plVar4 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar4 = local_38;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410fed50 FUN_1410fed50 body=379 status=ok
// SIG undefined FUN_1410fed50(void)

longlong * FUN_1410fed50(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  undefined4 local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *plStack_20;
  
  lVar9 = 0;
  local_res8[0] = 0;
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar6 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar6 != '\0') {
    lVar8 = FWeakObjectPtr::Get(&local_res10);
    iVar3 = *(int *)(lVar8 + 0xc);
    lVar8 = lVar9;
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar11 = iVar3 >> 0x1f & 0xffff;
      uVar7 = iVar3 + uVar11;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
              (longlong)(int)((uVar7 & 0xffff) - uVar11) * 0x18;
    }
    if ((*(uint *)(lVar8 + 8) & 0x30000000) == 0) {
      FUN_14110db70(*param_1,&local_38,*(undefined8 *)(*param_1 + 0x7b0));
      plVar10 = &local_38;
      bVar5 = true;
      bVar4 = false;
      lVar9 = local_38;
      goto LAB_1410fee1e;
    }
  }
  plVar10 = &local_28;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  bVar5 = false;
  bVar4 = true;
LAB_1410fee1e:
  *param_2 = lVar9;
  lVar9 = plVar10[1];
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10 = plStack_20;
  param_2[1] = lVar9;
  if ((bVar4) && (plStack_20 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  plVar10 = local_30;
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1410feed0 FUN_1410feed0 body=459 status=ok
// SIG undefined FUN_1410feed0(void)

char FUN_1410feed0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  
  FUN_142ecdac0(*param_1);
  lVar5 = FUN_1416f8720((int)param_1[2]);
  lVar8 = 0;
  if (lVar5 != 0) {
    lVar5 = FUN_1416f8720((int)param_1[2]);
    iVar1 = *(int *)(lVar5 + 0xc);
    lVar5 = lVar8;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar9 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar9;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar9) * 0x18;
    }
    if ((*(uint *)(lVar5 + 8) & 0x30000000) == 0) {
      uVar6 = FUN_1416f8720((int)param_1[2]);
      FUN_142f11000(uVar6,1);
    }
  }
  lVar5 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x14));
  if ((lVar5 == 0) ||
     (lVar5 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x14)),
     *(char *)(lVar5 + 0x3cd) == '\0')) {
    lVar5 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x14));
    if (lVar5 != 0) {
      lVar5 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x14));
      iVar1 = *(int *)(lVar5 + 0xc);
      lVar5 = lVar8;
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar9 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar9;
        lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar9) * 0x18;
      }
      if ((*(uint *)(lVar5 + 8) & 0x30000000) == 0) {
        uVar6 = FUN_1416f8720((int)param_1[2]);
        uVar7 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x14));
        FUN_14109f690(uVar7,uVar6);
      }
    }
    lVar5 = FUN_1416f8720((int)param_1[3]);
    if (lVar5 != 0) {
      lVar5 = FUN_1416f8720((int)param_1[3]);
      iVar1 = *(int *)(lVar5 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar9 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar9;
        lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar9) * 0x18;
      }
      if ((*(uint *)(lVar8 + 8) & 0x30000000) == 0) {
        FUN_1416f8720((int)param_1[2]);
        lVar4 = FUN_1416f8720((int)param_1[3]);
        AK::MemoryMgr::StartProfileThreadUsage(lVar4);
      }
    }
  }
  else {
    uVar6 = FUN_1416f8720((int)param_1[2]);
    uVar7 = FUN_1416f8720(*(undefined4 *)((longlong)param_1 + 0x14));
    FUN_14107b060(uVar7,uVar6);
  }
  LOCK();
  cVar2 = *(char *)(*param_1 + 0x660);
  if (cVar2 == '\x01') {
    *(char *)(*param_1 + 0x660) = '\0';
    cVar2 = '\x01';
  }
  UNLOCK();
  return cVar2;
}



// FUNCTION 1410ff0a0 FUN_1410ff0a0 body=150 status=ok
// SIG undefined FUN_1410ff0a0(void)

void FUN_1410ff0a0(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *(undefined4 *)(param_1 + 1);
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      FUN_14112ead0(*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1410ff140 FUN_1410ff140 body=245 status=ok
// SIG undefined FUN_1410ff140(void)

void FUN_1410ff140(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  
  plVar1 = (longlong *)FName::FName(local_res8,&DAT_1446b8b10,1);
  if ((((*param_1 == *plVar1) && (lVar7 = FUN_140e971d0(param_1[1]), lVar7 != 0)) &&
      (*(longlong *)(param_1[1] + 0x7c8) != 0)) && (lVar7 = FUN_140cfbfb0(lVar7), lVar7 != 0)) {
    iVar5 = FUN_142eb7a00(*(undefined8 *)(param_1[1] + 0x7c8));
    cVar4 = FWebMMovieStreamer::IsLastMovieInPlaylist(lVar7);
    if (((cVar4 == '\0') && (-1 < iVar5)) && (iVar5 < *(int *)(lVar7 + 0x158))) {
      uVar2 = (**(code **)(*(longlong *)param_1[1] + 0x148))();
      FUN_140c54910(iVar5,lVar7,uVar2,0);
      FUN_140e34de0(iVar5,lVar7);
      lVar3 = FUN_140d3b050(lVar7,iVar5);
      *(undefined4 *)(lVar3 + 4) = 0;
      iVar6 = rand();
      lVar7 = FUN_140d3b050(lVar7,iVar5);
      *(int *)(lVar7 + 8) = iVar6;
    }
  }
  return;
}



// FUNCTION 1410ff240 FUN_1410ff240 body=1079 status=ok
// SIG undefined FUN_1410ff240(void)

void FUN_1410ff240(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined4 uVar15;
  longlong *plVar16;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  undefined1 local_178 [8];
  longlong *local_170;
  undefined4 local_160;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined4 local_128;
  undefined4 local_124;
  undefined2 local_120;
  undefined1 local_11e;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e0 [64];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined1 local_48 [16];
  
  bVar7 = false;
  bVar6 = false;
  plVar16 = (longlong *)**(longlong **)(param_1 + 8);
  plVar3 = plVar16 + (int)(*(longlong **)(param_1 + 8))[1];
  do {
    if (plVar16 == plVar3) {
      return;
    }
    lVar12 = 0;
    lVar13 = *plVar16;
    uVar11 = FUN_1404b03b0();
    FText::FText(local_178,uVar11);
    uVar15 = 0;
    local_160 = 0;
    uVar11 = FUN_1404b03b0();
    FText::FText(local_158,uVar11);
    FText::FText(local_140);
    local_128 = 0;
    local_124 = 0x1000000;
    local_120 = 0;
    local_11e = 0;
    local_11c = 0xffffffff;
    local_118 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_110 = 0xffffffff;
    local_10c = 0;
    local_100 = 0;
    local_e8 = 0;
    FUN_142fde510(local_e0);
    local_98 = 0xffffffff00000000;
    uStack_90 = 0xffffffff00000000;
    local_a0 = 0xffffffffffffffff;
    local_88 = 0;
    local_84 = 0xffffffff;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_6c = 1;
    FWeakObjectPtr::operator=(&local_11c,lVar13);
    if (lVar13 == 0) {
      puVar14 = &local_190;
      local_190 = 0;
      bVar6 = true;
      local_188 = 0;
      local_198 = 0;
      local_110 = 0xffffffff;
      local_180 = 0;
      local_1a0 = 0xffffffff;
      local_19c = 0;
      uVar10 = uVar15;
    }
    else {
      local_1b8 = 0;
      bVar7 = true;
      uVar5 = *(undefined4 *)(lVar13 + 0x68);
      uVar15 = *(undefined4 *)(lVar13 + 0x6c);
      uVar10 = *(undefined4 *)(lVar13 + 0x70);
      local_68 = *(undefined8 *)(lVar13 + 0x78);
      local_1b0 = 0;
      local_1a8 = 0;
      FString::FString(local_60,lVar13 + 0x80);
      FSoftObjectPath::operator=(&local_1b8,&local_68);
      puVar14 = &local_1b8;
      local_110 = uVar5;
    }
    local_50 = *puVar14;
    local_10c = CONCAT44(uVar10,uVar15);
    FString::FString(local_48,puVar14 + 1);
    FSoftObjectPath::operator=(&local_100,&local_50);
    if ((bVar6) && (bVar6 = false, local_188 != 0)) {
      FMemory::Free();
    }
    if ((bVar7) && (bVar7 = false, local_1b0 != 0)) {
      FMemory::Free();
    }
    if (lVar13 != 0) {
      lVar12 = FWeakObjectPtr::Get();
      if (lVar12 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(lVar13 + 0xb0)) && (*(longlong *)(lVar13 + 0xb8) != 0)) {
          lVar12 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar13 + 0xa8,lVar12);
          if ((lVar12 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(lVar13 + 0xb0) = DAT_1464b56f4;
          }
          lVar12 = FWeakObjectPtr::Get(lVar13 + 0xa8);
          if (lVar12 != 0) goto LAB_1410ff507;
        }
      }
      else {
LAB_1410ff507:
        lVar13 = UPlayFabProfilesAPI::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (bVar8) goto LAB_1410ff541;
      }
      lVar12 = 0;
    }
LAB_1410ff541:
    FWeakObjectPtr::operator=((longlong)&local_98 + 4,lVar12);
    iVar4 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
      TArray<FTTLMissionBriefingParamRow,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
    }
    FUN_140e9a4f0((longlong)iVar4 * 0x110 + *param_2,local_178);
    if (local_f8 != 0) {
      FMemory::Free();
    }
    plVar9 = local_138;
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_138 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_138)(local_138);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    plVar9 = local_150;
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_150 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    plVar9 = local_170;
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_170 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    plVar16 = plVar16 + 1;
  } while( true );
}



// FUNCTION 1410ff680 FUN_1410ff680 body=286 status=ok
// SIG undefined FUN_1410ff680(void)

void FUN_1410ff680(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  undefined4 uStack_c;
  
  lVar3 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
  if (lVar3 != 0) {
    lVar4 = FUN_14141f270();
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
      lVar4 = *param_1;
      plVar7 = (longlong *)(lVar3 + 0xc18);
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar5 + 1,lVar4);
        *(undefined4 *)(plVar5 + 2) = 0x41121760;
        *(undefined4 *)((longlong)plVar5 + 0x14) = 1;
        *(undefined4 *)(plVar5 + 3) = 0;
        *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_c;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar5[5] = lVar4;
        *plVar5 = (longlong)&PTR_FUN_143f77bd0;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar7,1);
        (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
        iVar1 = *(int *)(lVar3 + 0xc20);
        *(int *)(lVar3 + 0xc20) = iVar1 + 1;
        if (*(int *)(lVar3 + 0xc24) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
        }
        puVar6 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar7);
        *puVar6 = plVar5;
        *(undefined4 *)(puVar6 + 1) = 3;
      }
    }
  }
  return;
}



// FUNCTION 1410ff7a0 FUN_1410ff7a0 body=253 status=ok
// SIG undefined FUN_1410ff7a0(void)

void FUN_1410ff7a0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  byte bVar5;
  int iVar6;
  
  bVar5 = 0x34;
  if ((*(longlong *)(*param_1 + 0x980) != 0) && (iVar3 = FUN_142eb7a00(), iVar3 != -1)) {
    iVar6 = 0;
    do {
      if (*(int *)(*param_1 + 0x8b0 + (longlong)iVar6 * 4) == iVar3) {
        bVar5 = (byte)iVar6;
        break;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x34);
  }
  switch(*(undefined4 *)(*param_1 + 0x89c)) {
  case 0:
    FUN_14110a040();
    break;
  case 1:
    FUN_14110ae30();
    break;
  case 3:
    FUN_141108980();
    break;
  case 4:
    FUN_14110aa40();
    break;
  case 5:
    FUN_141109890();
    break;
  case 6:
    FUN_141109630();
  }
  if ((*(longlong *)(*param_1 + 0x980) != 0) && (cVar2 = FUN_142ebdf20(), cVar2 != '\0')) {
    lVar1 = *param_1;
    if (bVar5 == 0x34) {
      plVar4 = *(longlong **)(lVar1 + 0x980);
      if (plVar4 == (longlong *)0x0) {
        return;
      }
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(lVar1 + 0x8b0 + (ulonglong)bVar5 * 4);
      if (iVar3 < 0) {
        return;
      }
      if (*(int *)(lVar1 + 0x8a8) <= iVar3) {
        return;
      }
      plVar4 = *(longlong **)(lVar1 + 0x980);
    }
    (**(code **)(*plVar4 + 0x2b8))(plVar4,iVar3,0,0);
  }
  return;
}



// FUNCTION 1410ff8c0 FUN_1410ff8c0 body=674 status=ok
// SIG undefined FUN_1410ff8c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410ff8c0(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 *local_f8 [2];
  longlong local_e8 [4];
  longlong *local_c8;
  int local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar4 = (**(code **)(*(longlong *)*param_1 + 0x148))();
  lVar4 = *(longlong *)(lVar4 + 0x148);
  if (lVar4 != 0) {
    lVar5 = FUN_141424d10();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar8 = 0;
      lVar5 = *param_1;
      local_108 = FUN_1411280f0;
      uStack_100 = 0;
      plVar9 = (longlong *)(lVar4 + 0x620);
      plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_1442cc120;
        FWeakObjectPtr::operator=(plVar6 + 1,lVar5);
        *(undefined4 *)(plVar6 + 2) = (undefined4)local_108;
        *(undefined4 *)((longlong)plVar6 + 0x14) = local_108._4_4_;
        *(undefined4 *)(plVar6 + 3) = uStack_100;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_fc;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar5;
        *plVar6 = (longlong)&PTR_FUN_1442cc168;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar9,1);
        puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x20))(plVar6,&local_108);
        iVar1 = *(int *)(lVar4 + 0x628);
        uVar8 = *puVar7;
        *(int *)(lVar4 + 0x628) = iVar1 + 1;
        if (*(int *)(lVar4 + 0x62c) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar1);
        }
        puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar9);
        *puVar7 = plVar6;
        *(undefined4 *)(puVar7 + 1) = 3;
      }
      *(undefined8 *)(*param_1 + 0x738) = uVar8;
      FUN_1411280f0(*param_1,*(undefined4 *)(lVar4 + 0x61c));
      return;
    }
  }
  lVar4 = *param_1;
  lVar5 = param_1[1];
  uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
  local_c8 = (longlong *)0x0;
  local_b8 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x18,local_e8);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_FUN_1444f8920;
    puVar7[1] = lVar4;
    *(int *)(puVar7 + 2) = (int)lVar5;
    *(undefined4 *)((longlong)puVar7 + 0x14) = uVar2;
  }
  local_f8[0] = &LAB_141107360;
  lVar4 = (**(code **)(*(longlong *)*param_1 + 0x148))();
  if (*(longlong *)(lVar4 + 400) == 0) {
    uVar8 = *(undefined8 *)(lVar4 + 0x3f8);
  }
  else {
    uVar8 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0x90);
  }
  local_a8 = 0;
  local_a0 = 0;
  FWeakObjectPtr::operator=(local_98,0);
  local_90 = 0;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_88,local_f8);
  FUN_142880af0(uVar8,&local_a8);
  if (local_48 != 0) {
    plVar9 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar9 = local_58;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
  if (local_b8 != 0) {
    plVar9 = local_e8;
    if (local_c8 != (longlong *)0x0) {
      plVar9 = local_c8;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410ffb70 FUN_1410ffb70 body=1000 status=ok
// SIG undefined FUN_1410ffb70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410ffb70(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined4 local_120;
  longlong local_118;
  undefined8 uStack_110;
  longlong *local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_c0;
  undefined1 local_ac;
  undefined1 local_98;
  undefined1 local_84;
  undefined1 local_70;
  undefined1 local_5c;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar9 = *param_1;
  if ((*(longlong *)(lVar9 + 0x7b8) != 0) || (lVar7 = FUN_140f9aee0(lVar9), lVar7 == 0))
  goto LAB_1410ffc18;
  cVar6 = FUN_1410cfb00(lVar9);
  if (cVar6 == '\0') {
    lVar7 = *(longlong *)(lVar9 + 0x7b0);
    if (lVar7 == 0) goto LAB_1410ffc18;
    lVar10 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_1410ffc18;
    uVar8 = *(undefined8 *)(lVar7 + 0x1140);
  }
  else {
    uVar8 = FUN_140bb8b20(lVar7);
  }
  *(undefined8 *)(lVar9 + 0x7b8) = uVar8;
LAB_1410ffc18:
  if (*(longlong *)(*param_1 + 0x7b8) != 0) {
    if (((int)param_1[1] < 0) || (*(int *)(*param_1 + 0x6d8) <= (int)param_1[1])) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      if ((*(char *)((longlong)param_1 + 0xc) == '\0') &&
         (lVar9 = USkeletalMeshComponent::GetPostProcessInstance(), lVar9 != 0)) {
        if ((int)param_1[1] == *(int *)(*param_1 + 0x6e4)) {
          return;
        }
        if (DAT_146b33f38 == 0) {
          FUN_142d7ebe0();
        }
        if (*(longlong *)(DAT_146b33f38 + 0xd0) == 0) {
          return;
        }
        *(undefined4 *)(*param_1 + 0x6e0) =
             *(undefined4 *)(*(longlong *)(DAT_146b33f38 + 0xd0) + 0x440);
        *(int *)(*param_1 + 0x6e4) = (int)param_1[1];
        return;
      }
      *(undefined4 *)(*param_1 + 0x6e0) = 0;
      *(undefined4 *)(*param_1 + 0x6e4) = 0xffffffff;
      local_118 = 0;
      uStack_110 = 0;
      local_120 = 0;
      lVar9 = (longlong)(int)param_1[1] * 0x1c8 + *(longlong *)(*param_1 + 0x6d0);
      local_108 = (longlong *)0x0;
      local_100 = 0;
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      local_128 = FUN_140c15570(DAT_146b33f38,lVar9 + 0x58);
      lVar7 = (**(code **)(**(longlong **)(*param_1 + 0x7b8) + 0x148))();
      if (((lVar7 != 0) && ((*(byte *)(lVar7 + 0x830) & 4) == 0)) &&
         (lVar7 = FWeakObjectPtr::Get(*param_1 + 0x58c), lVar7 != 0)) {
        lVar10 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          local_120._0_2_ = CONCAT11(1,(undefined1)local_120);
          local_118 = lVar7;
        }
      }
      local_f8 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_48 = 0;
      lStack_40 = 0;
      local_f0 = 0;
      local_d8 = 0;
      local_c0 = 0;
      local_ac = 0;
      local_98 = 0;
      local_84 = 0;
      local_70 = 0;
      local_5c = 0;
      local_58 = 0;
      local_50 = 0;
      local_38 = 0;
      FUN_140e4a320(&local_f8,lVar9 + 0xa8);
      uVar8 = FUN_140e4fb30(*(undefined8 *)(*param_1 + 0x7b8));
      cVar6 = FUN_140e5a6d0(&local_f8,uVar8);
      if (cVar6 == '\0') {
        FUN_14112aa80(*param_1,(int)param_1[1]);
        *(undefined1 *)(*(longlong *)(*param_1 + 0x7b8) + 0x4a8) = 2;
        FUN_140e53440(*(undefined8 *)(*param_1 + 0x7b8),&local_128);
        FUN_140e64bc0(*(undefined8 *)(*param_1 + 0x7b8),&local_f8);
        FUN_140e5ed30(*(undefined8 *)(*param_1 + 0x7b8),lVar9 + 0x150,lVar9 + 0x198,
                      *(undefined4 *)(lVar9 + 0x50));
        FUN_140e53f80(*(undefined8 *)(*param_1 + 0x7b8));
        cVar6 = FUN_140e74970(lVar9 + 0x150,*(undefined4 *)(lVar9 + 0x50));
        uVar8 = 2;
        if (cVar6 == '\0') {
          uVar8 = 3;
        }
        FUN_140e59080(*(undefined8 *)(*param_1 + 0x7b8),uVar8,0);
      }
      if (lStack_40 != 0) {
        FMemory::Free();
      }
      if (local_58 != 0) {
        FMemory::Free();
      }
      plVar5 = local_108;
      local_5c = 0;
      local_70 = 0;
      local_84 = 0;
      local_98 = 0;
      local_ac = 0;
      local_c0 = 0;
      if (local_108 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_108 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_108)(local_108);
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
    else {
      FUN_140e46bf0();
    }
  }
  return;
}



// FUNCTION 1410fff60 FUN_1410fff60 body=176 status=ok
// SIG undefined FUN_1410fff60(void)

void FUN_1410fff60(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*(longlong *)*param_1 + 0x148))();
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    lVar1 = *param_1;
    FUN_142880530(uVar3,lVar1 + 0x6e0);
    *(undefined8 *)(lVar1 + 0x6e0) = 0;
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    lVar2 = *param_1;
    FUN_142880530(uVar3,lVar2 + 0x6d8);
    *(undefined8 *)(lVar2 + 0x6d8) = 0;
  }
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(*param_1 + 0x680);
  return;
}



// FUNCTION 141100010 FUN_141100010 body=791 status=ok
// SIG undefined FUN_141100010(void)

undefined8 FUN_141100010(int *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  iVar2 = **(int **)(param_1 + 4);
  plVar3 = (longlong *)FUN_141424bc0();
  lVar4 = plVar3[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar4 = plVar3[0x1f];
  }
  iVar1 = FUN_142480900(lVar4);
  if (iVar2 <= iVar1 - *(int *)(param_2 + 0x14)) {
    iVar2 = **(int **)(param_1 + 4);
    plVar3 = (longlong *)FUN_141424bc0();
    lVar4 = plVar3[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar4 = plVar3[0x1f];
    }
    iVar1 = FUN_142480900(lVar4);
    if (iVar1 - *(int *)(param_3 + 0x14) < iVar2) {
      return 1;
    }
  }
  iVar2 = **(int **)(param_1 + 4);
  plVar3 = (longlong *)FUN_141424bc0();
  lVar4 = plVar3[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar4 = plVar3[0x1f];
  }
  iVar1 = FUN_142480900(lVar4);
  if (iVar1 - *(int *)(param_2 + 0x14) < iVar2) {
    iVar2 = **(int **)(param_1 + 4);
    plVar3 = (longlong *)FUN_141424bc0();
    lVar4 = plVar3[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar4 = plVar3[0x1f];
    }
    iVar1 = FUN_142480900(lVar4);
    if (iVar2 <= iVar1 - *(int *)(param_3 + 0x14)) {
      return 0;
    }
  }
  if (*(char *)(param_2 + 0x18) == '\0') {
    if (*(char *)(param_3 + 0x18) != '\0') {
      return 0;
    }
  }
  else if (*(char *)(param_3 + 0x18) == '\0') {
    return 1;
  }
  plVar3 = *(longlong **)(param_2 + 0x20);
  plVar5 = plVar3 + (longlong)*(int *)(param_2 + 0x28) * 2;
  if (plVar3 != plVar5) {
    plVar6 = plVar3;
LAB_141100160:
    if (*(int *)(*plVar6 + 0x84) != **(int **)(param_1 + 2)) goto code_r0x00014110016c;
    plVar6 = *(longlong **)(param_3 + 0x20);
    plVar7 = plVar6 + (longlong)*(int *)(param_3 + 0x28) * 2;
    if (plVar6 == plVar7) {
      return 1;
    }
    while (*(int *)(*plVar6 + 0x84) != **(int **)(param_1 + 2)) {
      plVar6 = plVar6 + 2;
      if (plVar6 == plVar7) {
        return 1;
      }
    }
LAB_141100175:
    if (plVar3 == plVar5) goto LAB_141100194;
    while (*(int *)(*plVar3 + 0x84) != **(int **)(param_1 + 2)) {
      plVar3 = plVar3 + 2;
      if (plVar3 == plVar5) goto LAB_141100194;
    }
    goto LAB_1411001c9;
  }
LAB_141100194:
  plVar3 = *(longlong **)(param_3 + 0x20);
  plVar5 = plVar3 + (longlong)*(int *)(param_3 + 0x28) * 2;
  if (plVar3 != plVar5) {
    do {
      if (*(int *)(*plVar3 + 0x84) == **(int **)(param_1 + 2)) {
        return 0;
      }
      plVar3 = plVar3 + 2;
    } while (plVar3 != plVar5);
  }
LAB_1411001c9:
  iVar2 = param_1[1];
  if (*(int *)(param_2 + 0x10) == iVar2) {
    if (*(int *)(param_3 + 0x10) != iVar2) {
      return 1;
    }
  }
  else if (*(int *)(param_3 + 0x10) == iVar2) {
    return 0;
  }
  plVar5 = *(longlong **)(param_2 + 0x20);
  plVar3 = plVar5 + (longlong)*(int *)(param_2 + 0x28) * 2;
  if (plVar5 == plVar3) {
LAB_141100271:
    plVar3 = *(longlong **)(param_3 + 0x20);
    plVar5 = plVar3 + (longlong)*(int *)(param_3 + 0x28) * 2;
    if (plVar3 != plVar5) {
      do {
        if (*(int *)(*plVar3 + 0x40) == *param_1) {
          return 0;
        }
        plVar3 = plVar3 + 2;
      } while (plVar3 != plVar5);
    }
LAB_1411002a2:
    if (*(longlong *)(param_1 + 6) != 0) {
      iVar2 = FUN_14110d1b0(param_2,*(longlong *)(param_1 + 6),*(undefined8 *)(param_1 + 8));
      iVar1 = FUN_14110d1b0(param_3,*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 8));
      if (iVar1 < iVar2) {
        return 1;
      }
    }
    return 0;
  }
  plVar6 = plVar5;
LAB_141100243:
  if (*(int *)(*plVar6 + 0x40) != *param_1) goto code_r0x000141100250;
  plVar6 = *(longlong **)(param_3 + 0x20);
  plVar7 = plVar6 + (longlong)*(int *)(param_3 + 0x28) * 2;
  if (plVar6 == plVar7) {
    return 1;
  }
  while (*(int *)(*plVar6 + 0x40) != *param_1) {
    plVar6 = plVar6 + 2;
    if (plVar6 == plVar7) {
      return 1;
    }
  }
LAB_141100259:
  if (plVar5 != plVar3) {
    do {
      if (*(int *)(*plVar5 + 0x40) == *param_1) goto LAB_1411002a2;
      plVar5 = plVar5 + 2;
    } while (plVar5 != plVar3);
  }
  goto LAB_141100271;
code_r0x00014110016c:
  plVar6 = plVar6 + 2;
  if (plVar6 == plVar5) goto LAB_141100175;
  goto LAB_141100160;
code_r0x000141100250:
  plVar6 = plVar6 + 2;
  if (plVar6 == plVar3) goto LAB_141100259;
  goto LAB_141100243;
}



// FUNCTION 141100330 FUN_141100330 body=944 status=ok
// SIG undefined FUN_141100330(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141100330(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_2b8 [32];
  undefined2 local_298;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined4 *local_278;
  longlong *local_270;
  longlong *local_268;
  undefined8 local_260;
  undefined8 local_258;
  LARGE_INTEGER local_250;
  undefined1 *local_248 [2];
  undefined1 local_238 [32];
  undefined8 local_218;
  undefined4 local_208;
  undefined1 *local_1f8 [2];
  undefined1 local_1e8 [32];
  undefined8 local_1c8;
  undefined4 local_1b8;
  undefined1 *local_1a8 [2];
  longlong local_198 [4];
  longlong *local_178;
  int local_168;
  longlong *local_158;
  longlong *local_150;
  undefined1 local_148 [16];
  longlong local_138 [4];
  longlong *local_118;
  int local_108;
  LARGE_INTEGER local_f8 [24];
  longlong local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  plVar6 = (longlong *)0x0;
  *param_2 = 1;
  *param_3 = 0;
  local_288 = *param_1;
  local_218 = 0;
  local_208 = 0;
  uStack_280 = (longlong *)param_2;
  local_278 = param_3;
  puVar4 = (undefined8 *)FUN_140438ef0(0x20,local_238);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar4 + 1) = (undefined4)local_288;
    *(undefined4 *)((longlong)puVar4 + 0xc) = local_288._4_4_;
    *(undefined4 *)(puVar4 + 2) = (undefined4)uStack_280;
    *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_280._4_4_;
    *puVar4 = &PTR_FUN_143f4d0b0;
    puVar4[3] = local_278;
  }
  local_260 = 0;
  local_248[0] = &LAB_141107290;
  local_258 = 0x43;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_260,0);
  local_298 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_260,0x43,"FGFxOakMenuHelpers::SortRecommendedFriends::GetLevelAndMissionTask");
  FUN_140cdf730(local_f8,&local_260,local_248);
  QueryPerformanceCounter(&local_250);
  local_f8[0] = local_250;
  plVar5 = (longlong *)operator_new(0x18);
  plVar7 = plVar6;
  if (plVar5 != (longlong *)0x0) {
    TPromiseBase<int>::TPromiseBase<int>(plVar5);
    *(undefined1 *)(plVar5 + 2) = 0;
    plVar7 = plVar5;
  }
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *plVar5 = (longlong)&PTR_DestroyObject_1444f8938;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    plVar5[2] = (longlong)plVar7;
    plVar6 = plVar5;
  }
  local_270 = plVar7;
  local_268 = plVar6;
  SharedPointerInternals::EnableSharedFromThis(&local_270,plVar7,plVar7);
  *(undefined1 *)(local_270 + 2) = 1;
  uStack_280 = (longlong *)local_270[1];
  local_38 = *local_270;
  if (uStack_280 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_280 + 1) = (int)uStack_280[1] + 1;
    UNLOCK();
  }
  local_288 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_30,&uStack_280);
  plVar6 = uStack_280;
  if (uStack_280 != (longlong *)0x0) {
    LOCK();
    plVar7 = uStack_280 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*uStack_280)(uStack_280);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*uStack_280 + 8))(uStack_280,1);
      }
    }
  }
  local_178 = (longlong *)0x0;
  local_168 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_198);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_1444f8620;
    puVar4[1] = local_f8;
  }
  local_1a8[0] = &LAB_140cee980;
  local_158 = local_270;
  local_150 = local_268;
  if (local_268 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_268 + 1) = (int)local_268[1] + 1;
    UNLOCK();
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_148,local_1a8);
  local_1c8 = 0;
  local_1b8 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x70,local_1e8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_CopyToEmptyStorage_1444f8578;
    puVar4[2] = local_158;
    puVar4[3] = local_150;
    if (local_150 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_150 + 1) = (int)local_150[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar4 + 4,local_148);
  }
  local_1f8[0] = &LAB_140cee8d0;
  if (local_108 != 0) {
    plVar6 = local_138;
    if (local_118 != (longlong *)0x0) {
      plVar6 = local_118;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_118 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar6 = local_150;
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_150 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  if (local_168 != 0) {
    plVar6 = local_198;
    if (local_178 != (longlong *)0x0) {
      plVar6 = local_178;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_178 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar6 = local_268;
  if (local_268 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_268 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_268)(local_268);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  FUN_14204c280(local_1f8);
  FUN_140d1b3a0(local_f8);
  FUN_140ce1dc0(local_f8);
  return;
}



// FUNCTION 1411006e0 FUN_1411006e0 body=134 status=ok
// SIG undefined FUN_1411006e0(void)

void FUN_1411006e0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 local_48 [64];
  
  lVar2 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
  if (lVar2 != 0) {
    lVar3 = FUN_14141f270();
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
      FUN_140bf8330(lVar2);
      FUN_140bcc940(lVar2,5);
      uVar4 = FUN_140b99a90(local_48);
      UContentWidget::SetContent(lVar2,uVar4);
      FUN_140b9cdd0(local_48);
    }
  }
  return;
}



// FUNCTION 141100770 FUN_141100770 body=517 status=ok
// SIG undefined FUN_141100770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141100770(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined1 local_110 [8];
  longlong local_108;
  undefined1 local_f8 [224];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar3 = *param_1;
  lVar4 = lVar3 + 0x758;
  lVar2 = FWeakObjectPtr::Get(lVar4);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar3 + 0x760)) &&
       (local_118 = 0, *(longlong *)(lVar3 + 0x768) != 0)) {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar3 + 0x760) = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(lVar4);
      if (lVar2 != 0) goto LAB_141100817;
    }
LAB_14110084d:
    FUN_14282a800(local_f8);
    FUN_14283c290(local_f8,*param_1 + 0x768,1,0);
    FUN_14282cc40(local_f8);
  }
  else {
LAB_141100817:
    lVar3 = FUN_142f2cf80();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_14110084d;
  }
  lVar3 = *param_1;
  lVar2 = lVar3 + 0x758;
  local_108 = FWeakObjectPtr::Get(lVar2);
  if (local_108 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar3 + 0x760)) &&
       (local_118 = 0, *(longlong *)(lVar3 + 0x768) != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar2,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar3 + 0x760) = DAT_1464b56f4;
      }
      local_108 = FWeakObjectPtr::Get(lVar2);
      if (local_108 != 0) goto LAB_1411008f5;
    }
  }
  else {
LAB_1411008f5:
    lVar3 = FUN_142f2cf80();
    if ((*(int *)(*(longlong *)(local_108 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_108 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14110092e;
  }
  local_108 = 0;
LAB_14110092e:
  local_110[0] = 10;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (*param_1 + 0x550,local_110);
  return;
}



// FUNCTION 141100980 FUN_141100980 body=118 status=ok
// SIG undefined FUN_141100980(void)

void FUN_141100980(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  lVar3 = FUN_1416f8720(*param_1);
  if (lVar3 != 0) {
    lVar3 = FUN_1416f8720(*param_1);
    iVar1 = *(int *)(lVar3 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar5;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) & 0x30000000) == 0) {
      uVar4 = FUN_1416f8720(*param_1);
      FUN_1410a2390(uVar4);
      return;
    }
  }
  return;
}



// FUNCTION 141100a00 FUN_141100a00 body=235 status=ok
// SIG undefined FUN_141100a00(void)

void FUN_141100a00(longlong *param_1,longlong param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong local_res18 [2];
  
  if (param_2 != 0) {
    *(int *)(*param_1 + 0x800) = *(int *)(*param_1 + 0x800) + 1;
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnItemCardReady",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(local_res18,pwVar2 + 2,1);
    FWeakObjectPtr::operator=(param_2 + 0x198,*param_1);
    *(longlong *)(param_2 + 0x1a0) = local_res18[0];
    if ((local_res18[0] != 0) && (lVar4 = FWeakObjectPtr::Get(param_2 + 0x198), lVar4 != 0)) {
      UObject::FindFunction(lVar4,*(undefined8 *)(param_2 + 0x1a0));
    }
    FUN_140f70290(param_2,*(undefined8 *)(*param_1 + 0x700));
  }
  return;
}



// FUNCTION 141100af0 FUN_141100af0 body=1595 status=ok
// SIG undefined FUN_141100af0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141100af0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined1 auStack_268 [32];
  undefined1 local_248;
  undefined8 local_240;
  undefined1 local_238;
  undefined8 local_228;
  longlong lStack_220;
  undefined1 local_218 [8];
  longlong local_210;
  undefined4 *local_208;
  ulonglong *puStack_200;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined4 *local_1d8;
  undefined4 *puStack_1d0;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_190 [8];
  longlong *local_188;
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
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [24];
  undefined4 local_c8 [2];
  undefined8 local_c0;
  longlong *local_b0;
  char local_a0;
  undefined4 local_98 [2];
  undefined8 local_90;
  undefined1 local_70;
  undefined4 local_68;
  undefined1 local_58 [24];
  undefined1 local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_268;
  lVar10 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
  if (lVar10 != 0) {
    lVar11 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      cVar9 = FUN_1411111f0(*param_1);
      if (cVar9 == '\0') {
        FUN_140bccab0(lVar10,0);
      }
      else {
        FWeakObjectPtr::operator=(local_218,0);
        local_210 = 0;
        pwVar12 = _guard_xfg_dispatch_icall_nop
                            (L"&UGFxOakMainMenu::OnChoiceMadeTravelToUnreachableDLC",L"::");
        pwVar7 = (wchar_t *)0x0;
        while (pwVar6 = pwVar12, pwVar6 != (wchar_t *)0x0) {
          pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
          pwVar7 = pwVar6;
        }
        FName::FName(&local_1f8,pwVar7 + 2,1);
        FWeakObjectPtr::operator=(local_218,*param_1);
        local_210 = local_1f8;
        local_228 = 0;
        if ((local_1f8 != 0) && (lVar10 = FWeakObjectPtr::Get(local_218), lVar10 != 0)) {
          UObject::FindFunction(lVar10,local_210);
        }
        uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_148,
                            L"{0}|platform(default=Add-on, xbox=Add-on, playstation=Add-on, stadia=Add-on)"
                            ,L"MainMenu",L"CannotContinueInDLCTitle");
        puVar14 = (undefined8 *)FTextFormat::FTextFormat(local_100,uVar13);
        local_c8[0] = 0;
        local_1d8 = local_c8;
        local_a0 = '\0';
        puStack_1d0 = local_98;
        local_228 = *puVar14;
        lStack_220 = puVar14[1];
        local_c0 = 0;
        if (lStack_220 != 0) {
          LOCK();
          *(int *)(lStack_220 + 8) = *(int *)(lStack_220 + 8) + 1;
          UNLOCK();
        }
        uVar13 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                 TArray<FFormatArgumentValue,FDefaultAllocator>(local_1c8,&local_1d8);
        uVar13 = FText::Format(local_160,&local_228,uVar13);
        FText::FText(local_178,uVar13);
        if (local_158 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_158 + 1;
          lVar10 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_158)(local_158);
            LOCK();
            piVar1 = (int *)((longlong)local_158 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_158 + 8))(local_158,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_1c8);
        if ((local_a0 != '\0') && (local_a0 = '\0', local_b0 != (longlong *)0x0)) {
          LOCK();
          plVar15 = local_b0 + 1;
          lVar10 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_b0)(local_b0);
            LOCK();
            piVar1 = (int *)((longlong)local_b0 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_b0 + 8))(local_b0,1);
            }
          }
        }
        plVar15 = (longlong *)puVar14[1];
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar15 + 1;
          lVar10 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
        if (local_140 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_140 + 1;
          lVar10 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_140)(local_140);
            LOCK();
            piVar1 = (int *)((longlong)local_140 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_140 + 8))(local_140,1);
            }
          }
        }
        FUN_14110ea10(*param_1,local_190);
        lVar10 = FText::FText(local_e0,local_190);
        uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_118,
                            L"This game was saved in {1} which is not available on this {0}|platform(default=system,xbox=system,playstation=system).  You will begin in Covenant Pass after the game loads."
                            ,L"MainMenu",L"CannotContinueInDLCMessageFormat");
        puVar14 = (undefined8 *)FTextFormat::FTextFormat(local_f0,uVar13);
        local_98[0] = 0;
        local_70 = 0;
        local_90 = 0;
        local_68 = 4;
        FText::FText(local_58,lVar10);
        local_208 = local_98;
        local_40 = 1;
        puStack_200 = local_38;
        local_1f0 = *puVar14;
        local_1e8 = puVar14[1];
        if (local_1e8 != 0) {
          LOCK();
          *(int *)(local_1e8 + 8) = *(int *)(local_1e8 + 8) + 1;
          UNLOCK();
        }
        uVar13 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                 TArray<FFormatArgumentValue,FDefaultAllocator>(local_1b8,&local_208);
        uVar13 = FText::Format(local_130,&local_1f0,uVar13);
        FText::FText(local_1a8,uVar13);
        if (local_128 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_128 + 1;
          lVar11 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_128)(local_128);
            LOCK();
            piVar1 = (int *)((longlong)local_128 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_128 + 8))(local_128,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_1b8);
        lVar11 = 2;
        plVar15 = (longlong *)&stack0xffffffffffffffe0;
        do {
          lVar11 = lVar11 + -1;
          if ((char)plVar15[-4] != '\0') {
            *(undefined1 *)(plVar15 + -4) = 0;
            plVar4 = (longlong *)plVar15[-6];
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
          }
          plVar15 = plVar15 + -6;
        } while (lVar11 != 0);
        plVar15 = (longlong *)puVar14[1];
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar15 + 1;
          lVar11 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
        plVar15 = *(longlong **)(lVar10 + 8);
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar15 + 1;
          lVar10 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
            }
          }
        }
        if (local_110 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_110 + 1;
          lVar10 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_110)(local_110);
            LOCK();
            piVar1 = (int *)((longlong)local_110 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_110 + 8))(local_110,1);
            }
          }
        }
        uVar13 = FWeakObjectPtr::Get(*param_1 + 0x58c);
        local_238 = 0;
        local_240 = 0;
        local_248 = 1;
        FUN_1410f3960(uVar13,local_178,local_1a8,local_218);
        if (local_1a0 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_1a0 + 1;
          lVar10 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_1a0)(local_1a0);
            LOCK();
            piVar1 = (int *)((longlong)local_1a0 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_1a0 + 8))(local_1a0,1);
            }
          }
        }
        if (local_188 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_188 + 1;
          lVar10 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_188)(local_188);
            LOCK();
            piVar1 = (int *)((longlong)local_188 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_188 + 8))(local_188,1);
            }
          }
        }
        if (local_170 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_170 + 1;
          lVar10 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_170)(local_170);
            LOCK();
            piVar1 = (int *)((longlong)local_170 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_170 + 8))(local_170,1);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 141101130 FUN_141101130 body=232 status=ok
// SIG undefined FUN_141101130(void)

void FUN_141101130(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  
  local_30 = *(int *)(param_2 + 1);
  lVar5 = (longlong)local_30;
  _Src = (void *)*param_2;
  local_38 = (void *)0x0;
  if (local_30 == 0) {
    pvVar3 = (void *)0x0;
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
    pvVar3 = local_38;
    _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar5 * 2);
  }
  iVar2 = local_30;
  lVar5 = *param_1;
  iVar1 = *(int *)(lVar5 + 0x6a8);
  lVar4 = (longlong)iVar1;
  *(int *)(lVar5 + 0x6a8) = iVar1 + 1;
  if (*(int *)(lVar5 + 0x6ac) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (lVar5 + 0x6a0,iVar1);
  }
  lVar5 = *(longlong *)(lVar5 + 0x6a0);
  *(void **)(lVar5 + lVar4 * 0x18) = pvVar3;
  *(int *)(lVar5 + 8 + lVar4 * 0x18) = iVar2;
  *(undefined4 *)(lVar5 + 0xc + lVar4 * 0x18) = local_2c;
  *(int *)(lVar5 + 0x10 + lVar4 * 0x18) = param_3;
  *(undefined4 *)(lVar5 + 0x14 + lVar4 * 0x18) = 0;
  *(int *)(*param_1 + 0x698) = *(int *)(*param_1 + 0x698) + param_3;
  return;
}



// FUNCTION 141101220 FUN_141101220 body=517 status=ok
// SIG undefined FUN_141101220(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141101220(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined1 local_110 [8];
  longlong local_108;
  undefined1 local_f8 [224];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar3 = *param_1;
  lVar4 = lVar3 + 0x740;
  lVar2 = FWeakObjectPtr::Get(lVar4);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar3 + 0x748)) &&
       (local_118 = 0, *(longlong *)(lVar3 + 0x750) != 0)) {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar4,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar3 + 0x748) = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(lVar4);
      if (lVar2 != 0) goto LAB_1411012c7;
    }
LAB_1411012fd:
    FUN_14282a800(local_f8);
    FUN_14283c290(local_f8,*param_1 + 0x750,1,0);
    FUN_14282cc40(local_f8);
  }
  else {
LAB_1411012c7:
    lVar3 = FUN_142f2cf80();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1411012fd;
  }
  lVar3 = *param_1;
  lVar2 = lVar3 + 0x740;
  local_108 = FWeakObjectPtr::Get(lVar2);
  if (local_108 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar3 + 0x748)) &&
       (local_118 = 0, *(longlong *)(lVar3 + 0x750) != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar2,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar3 + 0x748) = DAT_1464b56f4;
      }
      local_108 = FWeakObjectPtr::Get(lVar2);
      if (local_108 != 0) goto LAB_1411013a5;
    }
  }
  else {
LAB_1411013a5:
    lVar3 = FUN_142f2cf80();
    if ((*(int *)(*(longlong *)(local_108 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_108 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1411013de;
  }
  local_108 = 0;
LAB_1411013de:
  local_110[0] = 1;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (*param_1 + 0x550,local_110);
  return;
}



// FUNCTION 141101430 FUN_141101430 body=308 status=ok
// SIG undefined FUN_141101430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141101430(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined1 local_f8 [224];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar3 = *param_1;
  lVar4 = lVar3 + 0x688;
  lVar2 = FWeakObjectPtr::Get(lVar4);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar3 + 0x690)) ||
       (local_108 = 0, *(longlong *)(lVar3 + 0x698) == 0)) goto LAB_14110150d;
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar4,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar3 + 0x690) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(lVar4);
    if (lVar2 == 0) goto LAB_14110150d;
  }
  lVar3 = FUN_142f2cf80();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return;
  }
LAB_14110150d:
  FUN_14282a800(local_f8);
  FUN_14283c290(local_f8,*param_1 + 0x698,1,0);
  FUN_14282cc40(local_f8);
  return;
}



// FUNCTION 141101570 FUN_141101570 body=266 status=ok
// SIG undefined FUN_141101570(void)

void FUN_141101570(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  FUN_141111950(*param_1,param_1[1]);
  lVar3 = param_1[1];
  local_10 = FWeakObjectPtr::Get(lVar3);
  if (local_10 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar3 + 8)) && (*(longlong *)(lVar3 + 0x10) != 0)) {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar3,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar3 + 8) = DAT_1464b56f4;
      }
      local_10 = FWeakObjectPtr::Get(lVar3);
      if (local_10 != 0) goto LAB_141101608;
    }
  }
  else {
LAB_141101608:
    lVar3 = FUN_142f2cf80();
    if ((*(int *)(*(longlong *)(local_10 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_10 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_141101641;
  }
  local_10 = 0;
LAB_141101641:
  local_18[0] = *(undefined1 *)(*param_1 + 0x990);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (*param_1 + 0x550,local_18);
  return;
}



// FUNCTION 141101680 FUN_141101680 body=536 status=ok
// SIG undefined FUN_141101680(void)

undefined8 FUN_141101680(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_res10;
  
  lVar4 = *(longlong *)(*param_1 + 0x598);
  if (lVar4 != 0) {
    lVar2 = UPawnAction_Sequence::StaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar7 = lVar4 + 0x48;
      lVar2 = FWeakObjectPtr::Get(lVar7);
      lVar6 = 0;
      if (lVar2 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if (DAT_1464b56f4 == *(int *)(lVar4 + 0x50)) {
          return 0;
        }
        if (*(longlong *)(lVar4 + 0x58) == 0) {
          return 0;
        }
        lVar2 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar7,lVar2);
        if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar4 + 0x50) = DAT_1464b56f4;
        }
        lVar2 = FWeakObjectPtr::Get(lVar7);
        if (lVar2 == 0) {
          return 0;
        }
      }
      lVar3 = FUN_14171bfe0();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar3 = UInputKeySelector::GetPrivateStaticClass();
        do {
          if (lVar2 == lVar3) {
            lVar3 = FWeakObjectPtr::Get(lVar7);
            lVar2 = lVar6;
            if (lVar3 == 0) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              if ((DAT_1464b56f4 == *(int *)(lVar4 + 0x50)) || (*(longlong *)(lVar4 + 0x58) == 0))
              goto LAB_141101871;
              lVar3 = FUN_141796df0();
              FWeakObjectPtr::operator=(lVar7,lVar3);
              if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                *(int *)(lVar4 + 0x50) = DAT_1464b56f4;
              }
              lVar3 = FWeakObjectPtr::Get(lVar7);
              if (lVar3 == 0) goto LAB_141101871;
            }
            lVar4 = FUN_14171bfe0();
            if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (!bVar1) goto LAB_141101871;
            lVar7 = UInputKeySelector::GetPrivateStaticClass();
            lVar4 = lVar3;
            goto LAB_141101860;
          }
          lVar2 = *(longlong *)(lVar2 + 0x30);
        } while (lVar2 != 0);
      }
    }
  }
  return 0;
  while (lVar4 = *(longlong *)(lVar4 + 0x30), lVar2 = lVar6, lVar4 != 0) {
LAB_141101860:
    lVar2 = lVar3;
    if (lVar4 == lVar7) break;
  }
LAB_141101871:
  local_res10 = *(undefined8 *)(lVar2 + 0x18);
  uVar5 = FUN_142eea6c0(*(undefined8 *)param_1[1],&local_res10);
  return uVar5;
}



// FUNCTION 1411018a0 FUN_1411018a0 body=425 status=ok
// SIG undefined FUN_1411018a0(void)

void FUN_1411018a0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 local_res8 [8];
  undefined4 uStack_1c;
  
  lVar5 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
  if (lVar5 != 0) {
    lVar6 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      *(int *)(*param_1 + 0xb30) = (int)param_1[1];
      plVar1 = (longlong *)(lVar5 + 0x9a0);
      *(undefined4 *)(*param_1 + 0xb20) = *(undefined4 *)((longlong)param_1 + 0xc);
      lVar6 = *param_1;
      plVar7 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar7 + 1,lVar6);
        *(undefined4 *)(plVar7 + 2) = 0x41111fc0;
        *(undefined4 *)((longlong)plVar7 + 0x14) = 1;
        *(undefined4 *)(plVar7 + 3) = 0;
        *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_1c;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar7[5] = lVar6;
        *plVar7 = (longlong)&PTR_FUN_143fcff08;
      }
      uVar9 = 0;
      if (plVar7 != (longlong *)0x0) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
        puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
        iVar2 = *(int *)(lVar5 + 0x9a8);
        uVar9 = *puVar8;
        *(int *)(lVar5 + 0x9a8) = iVar2 + 1;
        if (*(int *)(lVar5 + 0x9ac) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
        }
        puVar8 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
        *puVar8 = plVar7;
        *(undefined4 *)(puVar8 + 1) = 3;
      }
      *(undefined8 *)(*param_1 + 0xb28) = uVar9;
      cVar4 = FUN_140ba40f0(lVar5,param_1 + 2);
      if (cVar4 == '\0') {
        TBaseMulticastDelegate<void>::Remove(plVar1,*(undefined8 *)(*param_1 + 0xb28));
        lVar5 = *param_1;
        *(undefined4 *)(lVar5 + 0xb20) = 0xffffffff;
        *(undefined8 *)(lVar5 + 0xb28) = 0;
        *(undefined4 *)(lVar5 + 0xb30) = 0;
      }
    }
  }
  return;
}



// FUNCTION 141101a50 FUN_141101a50 body=154 status=ok
// SIG undefined FUN_141101a50(void)

undefined8 FUN_141101a50(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (**(longlong **)(param_1 + 8) != 0) {
    uVar3 = FWeakObjectPtr::Get(param_2 + 0xdc);
    cVar2 = FUN_140c48e60(**(undefined8 **)(param_1 + 8),uVar3);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_141101a9b;
    }
  }
  bVar1 = false;
LAB_141101a9b:
  uVar3 = FWeakObjectPtr::Get(param_2 + 0xdc);
  cVar2 = FUN_140a8f320(**(undefined8 **)(param_1 + 0x10),**(undefined8 **)(param_1 + 8),uVar3);
  if (((bVar1) || (cVar2 == '\0')) || (*(char *)(param_2 + 0xc0) == '\x02')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 141101af0 FUN_141101af0 body=492 status=ok
// SIG undefined FUN_141101af0(void)

undefined8 FUN_141101af0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar10 = 0;
  cVar6 = FWeakObjectPtr::IsValid(*param_1 + 0x58c);
  bVar11 = cVar6 == '\0';
  if (bVar11) {
    plVar8 = &local_48;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
  }
  else {
    uVar7 = FWeakObjectPtr::Get(*param_1 + 0x58c);
    plVar8 = (longlong *)FUN_142dcf3a0(uVar7,local_28);
    lVar10 = *plVar8;
  }
  plVar4 = (longlong *)plVar8[1];
  plVar8[1] = 0;
  *plVar8 = 0;
  plVar8 = plStack_40;
  if (bVar11) {
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_40 + 8))(plStack_40,1);
        }
      }
    }
  }
  if (!bVar11) {
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_20 + 1;
      lVar9 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  bVar11 = false;
  if (lVar10 != 0) {
    uVar7 = (**(code **)(*(longlong *)*param_1 + 0x148))();
    lVar9 = FUN_140d3a420(uVar7);
    if (lVar9 == 0) {
LAB_141101c43:
      bVar5 = false;
    }
    else {
      bVar11 = true;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_38 = lVar10;
      local_30 = plVar4;
      cVar6 = BuildSettings::IsPromotedBuild(lVar9,&local_38);
      if (cVar6 == '\0') goto LAB_141101c43;
      bVar5 = true;
    }
    plVar8 = local_30;
    if ((bVar11) && (local_30 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_30)(local_30);
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
    if (bVar5) {
      uVar7 = 1;
      goto LAB_141101c8f;
    }
  }
  uVar7 = 0;
LAB_141101c8f:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  return uVar7;
}



// FUNCTION 141101ce0 FUN_141101ce0 body=415 status=ok
// SIG undefined FUN_141101ce0(void)

ulonglong FUN_141101ce0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x6a0);
  lVar6 = lVar2 + (longlong)*(int *)(lVar1 + 0x6a8) * 0x18;
  if (lVar2 != lVar6) {
    lVar11 = lVar2;
    do {
      if (*(int *)param_1[1] <= *(int *)(lVar11 + 0x14)) {
        lVar6 = (lVar11 - lVar2) / 6 + (lVar11 - lVar2 >> 0x3f);
        uVar10 = (lVar6 >> 2) - (lVar6 >> 0x3f);
        uVar9 = (uint)uVar10;
        if ((-1 < (int)uVar9) && (iVar4 = *(int *)(lVar1 + 0x6a8), (int)uVar9 < iVar4)) {
          iVar8 = *(int *)(lVar1 + 0x690);
          if (iVar8 != -1) {
            if (*(char *)param_1[2] == '\0') {
              uVar3 = iVar8 - 1U;
              if ((int)uVar9 <= (int)(iVar8 - 1U)) {
                uVar3 = uVar9;
              }
            }
            else {
              uVar3 = iVar8 + 1U;
              if ((int)(iVar8 + 1U) <= (int)uVar9) {
                uVar3 = uVar9;
              }
            }
            uVar10 = (ulonglong)uVar3;
          }
          iVar8 = (int)uVar10;
          if (iVar8 == iVar4 + -1) {
            return (ulonglong)(iVar4 - 2);
          }
          if ((-1 < iVar8) && (iVar8 < iVar4)) {
            if (*(int *)((undefined8 *)param_1[3] + 1) == 0) {
              puVar7 = &DAT_143f3eda8;
            }
            else {
              puVar7 = *(undefined2 **)param_1[3];
            }
            if (*(int *)(lVar2 + 8 + (longlong)iVar8 * 0x18) == 0) {
              puVar5 = &DAT_143f3eda8;
            }
            else {
              puVar5 = *(undefined2 **)(lVar2 + (longlong)iVar8 * 0x18);
            }
            iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar7);
            while( true ) {
              iVar8 = (int)uVar10;
              if (((iVar8 < 0) || (*(int *)(*param_1 + 0x6a8) <= iVar8)) || (iVar4 != 0)) break;
              iVar4 = -1;
              if (*(char *)param_1[2] != '\0') {
                iVar4 = 1;
              }
              uVar9 = iVar8 + iVar4;
              uVar10 = (ulonglong)uVar9;
              lVar6 = *(longlong *)(*param_1 + 0x6a0);
              if (*(int *)((undefined8 *)param_1[3] + 1) == 0) {
                puVar7 = &DAT_143f3eda8;
              }
              else {
                puVar7 = *(undefined2 **)param_1[3];
              }
              if (*(int *)(lVar6 + 8 + (longlong)(int)uVar9 * 0x18) == 0) {
                iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(&DAT_143f3eda8,puVar7);
              }
              else {
                iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>
                                  (*(undefined8 *)(lVar6 + (longlong)(int)uVar9 * 0x18),puVar7);
              }
            }
          }
        }
        goto LAB_141101d34;
      }
      lVar11 = lVar11 + 0x18;
    } while (lVar11 != lVar6);
  }
  uVar10 = 0xffffffff;
LAB_141101d34:
  return uVar10 & 0xffffffff;
}



// FUNCTION 141101e80 FUN_141101e80 body=380 status=ok
// SIG undefined FUN_141101e80(void)

void FUN_141101e80(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 local_128 [272];
  
  local_res10 = (undefined4)param_1[1];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar10 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar10;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar10) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) & 0x30000000) == 0) {
      bVar2 = true;
      goto LAB_141101f16;
    }
  }
  bVar2 = false;
LAB_141101f16:
  if (bVar2) {
    lVar5 = FUN_140ee69c0(*param_1 + 0x7a0,local_128);
    uVar6 = FWeakObjectPtr::Get(lVar5 + 0x5c);
    FUN_140e9c360(local_128);
    lVar5 = FWeakObjectPtr::Get(*param_1 + 0x58c);
    if (lVar5 != 0) {
      lVar7 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar8 = FWeakObjectPtr::Get(*param_1 + 0x948);
        uVar9 = FWeakObjectPtr::Get(*param_1 + 0x940);
        FUN_141460550(lVar5,uVar9,uVar8,uVar6);
      }
    }
  }
  return;
}



// FUNCTION 141102000 FUN_141102000 body=2040 status=ok
// SIG undefined FUN_141102000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141102000(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_3b8 [32];
  longlong local_398 [12];
  undefined1 local_338 [4];
  undefined1 local_334 [4];
  undefined1 local_330 [4];
  undefined1 local_32c [4];
  undefined1 local_328 [4];
  undefined1 local_324 [4];
  longlong *local_320;
  undefined4 *local_318;
  longlong *local_310;
  undefined4 *local_308;
  longlong *local_300;
  undefined4 *local_2f8;
  longlong *local_2f0;
  undefined4 *local_2e8;
  longlong *local_2e0;
  undefined4 *local_2d8;
  longlong *local_2d0;
  undefined4 *local_2c8;
  undefined1 local_2c0 [8];
  longlong *local_2b8;
  undefined1 local_2a8 [8];
  longlong *local_2a0;
  undefined1 local_290 [8];
  longlong *local_288;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_214;
  longlong local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  longlong local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  longlong local_168;
  undefined4 local_160;
  undefined4 local_158 [2];
  longlong local_150;
  longlong *local_140;
  char local_130;
  undefined4 local_128 [2];
  longlong local_120;
  longlong *local_110;
  char local_100;
  undefined4 local_f8 [2];
  longlong local_f0;
  longlong *local_e0;
  char local_d0;
  undefined4 local_c8 [2];
  longlong local_c0;
  longlong *local_b0;
  char local_a0;
  undefined4 local_98 [2];
  longlong local_90;
  longlong *local_80;
  char local_70;
  undefined4 local_68 [2];
  longlong local_60;
  longlong *local_50;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_3b8;
  lVar4 = *param_3;
  iVar8 = (int)(lVar4 / 36000000000) + (int)((lVar4 / 36000000000) / 0x18) * -0x18;
  lVar5 = lVar4 / 600000000;
  lVar7 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar5),8) + lVar5;
  iVar9 = (int)lVar5 + ((int)(lVar7 >> 5) - (int)(lVar7 >> 0x3f)) * -0x3c;
  if ((int)((double)lVar4 * 1.1574074074074074e-12) < 1) {
    if (iVar8 < 1) {
      if (iVar9 < 2) {
        iVar9 = 1;
      }
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (local_290,L"{Minutes}m",L"LoadGameMenu",L"TimePlayedFormat_MinutesText");
      local_60 = (longlong)iVar9;
      local_1a8 = 0;
      local_1a0 = 0;
      local_188 = 0;
      local_180 = 0;
      local_178 = 0xffffffff;
      local_174 = 0;
      local_168 = 0;
      local_160 = 0;
      local_68[0] = 0;
      local_40 = '\0';
      local_398[10] = 0;
      local_398[0xb] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_398 + 10,0);
      FGenericPlatformString::Memcpy(local_398[10],L"Minutes",0x10);
      local_2d0 = local_398 + 10;
      local_2c8 = local_68;
      FUN_1407484b0(&local_1a8,local_324,&local_2d0,0);
      if (local_398[10] != 0) {
        FMemory::Free();
      }
      if ((local_40 != '\0') && (local_40 = '\0', local_50 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_50 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)local_50 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
      uVar6 = FTextFormat::FTextFormat(local_258,local_290);
      FText::Format(param_2,uVar6,&local_1a8);
      local_160 = 0;
      if (local_168 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_1a8);
      if (local_288 == (longlong *)0x0) {
        return param_2;
      }
      LOCK();
      plVar1 = local_288 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 != 1) {
        return param_2;
      }
      (**(code **)*local_288)(local_288);
      LOCK();
      piVar2 = (int *)((longlong)local_288 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 != 1) {
        return param_2;
      }
      (**(code **)(*local_288 + 8))(local_288,1);
      return param_2;
    }
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_2a8,L"{Hours}h {Minutes}m",L"LoadGameMenu",L"TimePlayedFormat_HoursMinutesText"
              );
    local_c0 = (longlong)iVar8;
    local_1f8 = 0;
    local_1f0 = 0;
    local_1d8 = 0;
    local_1d0 = 0;
    local_1c8 = 0xffffffff;
    local_1c4 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_c8[0] = 0;
    local_a0 = '\0';
    local_398[6] = 0;
    local_398[7] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_398 + 6,0);
    FGenericPlatformString::Memcpy(local_398[6],L"Hours",0xc);
    local_2f0 = local_398 + 6;
    local_2e8 = local_c8;
    FUN_1407484b0(&local_1f8,local_32c,&local_2f0,0);
    if (local_398[6] != 0) {
      FMemory::Free();
    }
    if ((local_a0 != '\0') && (local_a0 = '\0', local_b0 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_b0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)local_b0 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    local_90 = (longlong)iVar9;
    local_98[0] = 0;
    local_70 = '\0';
    local_398[8] = 0;
    local_398[9] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_398 + 8,0);
    FGenericPlatformString::Memcpy(local_398[8],L"Minutes",0x10);
    local_2e0 = local_398 + 8;
    local_2d8 = local_98;
    FUN_1407484b0(&local_1f8,local_328,&local_2e0,0);
    if (local_398[8] != 0) {
      FMemory::Free();
    }
    if ((local_70 != '\0') && (local_70 = '\0', local_80 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
    uVar6 = FTextFormat::FTextFormat(local_268,local_2a8);
    FText::Format(param_2,uVar6,&local_1f8);
    local_1b0 = 0;
    if (local_1b8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_1f8);
  }
  else {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_2c0,L"{Days}d {Hours}h {Minutes}m",L"LoadGameMenu",
               L"TimePlayedFormat_DaysHoursMinutesText");
    local_150 = (longlong)(int)((double)lVar4 * 1.1574074074074074e-12);
    local_248 = 0;
    local_240 = 0;
    local_228 = 0;
    local_220 = 0;
    local_218 = 0xffffffff;
    local_214 = 0;
    local_208 = 0;
    local_200 = 0;
    local_158[0] = 0;
    local_130 = '\0';
    local_398[0] = 0;
    local_398[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_398,0);
    FGenericPlatformString::Memcpy(local_398[0],L"Days",10);
    local_320 = local_398;
    local_318 = local_158;
    FUN_1407484b0(&local_248,local_338,&local_320,0);
    if (local_398[0] != 0) {
      FMemory::Free();
    }
    if ((local_130 != '\0') && (local_130 = '\0', local_140 != (longlong *)0x0)) {
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
    local_120 = (longlong)iVar8;
    local_128[0] = 0;
    local_100 = '\0';
    local_398[2] = 0;
    local_398[3] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_398 + 2,0);
    FGenericPlatformString::Memcpy(local_398[2],L"Hours",0xc);
    local_310 = local_398 + 2;
    local_308 = local_128;
    FUN_1407484b0(&local_248,local_334,&local_310,0);
    if (local_398[2] != 0) {
      FMemory::Free();
    }
    if ((local_100 != '\0') && (local_100 = '\0', local_110 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_110 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar2 = (int *)((longlong)local_110 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_110 + 8))(local_110,1);
        }
      }
    }
    local_f0 = (longlong)iVar9;
    local_f8[0] = 0;
    local_d0 = '\0';
    local_398[4] = 0;
    local_398[5] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_398 + 4,0);
    FGenericPlatformString::Memcpy(local_398[4],L"Minutes",0x10);
    local_300 = local_398 + 4;
    local_2f8 = local_f8;
    FUN_1407484b0(&local_248,local_330,&local_300,0);
    if (local_398[4] != 0) {
      FMemory::Free();
    }
    if ((local_d0 != '\0') && (local_d0 = '\0', local_e0 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_e0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar2 = (int *)((longlong)local_e0 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_e0 + 8))(local_e0,1);
        }
      }
    }
    uVar6 = FTextFormat::FTextFormat(local_278,local_2c0);
    FText::Format(param_2,uVar6,&local_248);
    local_200 = 0;
    if (local_208 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_248);
    local_2a0 = local_2b8;
  }
  if (local_2a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2a0 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_2a0)(local_2a0);
      LOCK();
      piVar2 = (int *)((longlong)local_2a0 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_2a0 + 8))(local_2a0,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 141102800 FUN_141102800 body=175 status=ok
// SIG undefined FUN_141102800(void)

void FUN_141102800(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(longlong **)*param_1 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(**(longlong **)*param_1 + 0x148))();
  }
  uVar7 = FUN_140c14280(local_28,*(undefined4 *)param_1[2]);
  FText::operator=(param_1[1],uVar7);
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
  uVar5 = FUN_140c155b0(*(undefined4 *)param_1[2],uVar6);
  *(undefined4 *)param_1[3] = uVar5;
  return;
}



// FUNCTION 1411028b0 FUN_1411028b0 body=410 status=ok
// SIG undefined FUN_1411028b0(void)

void FUN_1411028b0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_28;
  undefined8 local_20;
  
  local_res10 = (undefined4)param_1[0x23];
  local_res14 = *(undefined4 *)((longlong)param_1 + 0x11c);
  FUN_141729b50(local_res8);
  FUN_14172a400(local_res8);
  cVar2 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(&local_res10);
    iVar1 = *(int *)(lVar4 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar9 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar9;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar9) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if (((*(uint *)(lVar4 + 8) & 0x30000000) == 0) &&
       (lVar4 = FUN_14110cd00(*param_1,param_1 + 1), lVar4 != 0)) {
      lVar5 = FUN_140e971d0(*param_1);
      if (lVar5 != 0) {
        uVar6 = FWeakObjectPtr::Get(*param_1 + 0x948);
        uVar7 = FWeakObjectPtr::Get(*param_1 + 0x940);
        FUN_141460550(lVar5,uVar7,uVar6,lVar4);
        uVar6 = FWeakObjectPtr::Get(*param_1 + 0x948);
        if (DAT_14686b371 == '\0') {
          FUN_140bfbc60(&DAT_14686b370);
          DAT_14686b371 = '\x01';
        }
        FUN_140c04b90(&DAT_14686b370,*param_1,uVar6,lVar4);
      }
      local_28 = 0;
      local_20 = 0;
      lVar4 = *(longlong *)*param_1;
      puVar8 = (undefined8 *)FName::FName(local_res8,L"CrewQuarter_Place",1);
      (**(code **)(lVar4 + 0x4e8))(*param_1,*puVar8,&local_28);
      FUN_142eb3990(*param_1);
    }
  }
  return;
}



// FUNCTION 141102a50 FUN_141102a50 body=1250 status=ok
// SIG undefined FUN_141102a50(void)

ulonglong FUN_141102a50(longlong *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined2 *puVar16;
  int iVar17;
  undefined2 *puVar18;
  undefined8 *puVar19;
  longlong local_res10;
  undefined1 local_e8 [8];
  longlong local_e0;
  longlong local_d8;
  longlong *local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  
  FUN_14110db70(*param_1,&local_d8,*(undefined8 *)(*param_1 + 0x7b0));
  if ((local_d8 != 0) && (cVar7 = (*(code *)**(undefined8 **)param_1[1])(), cVar7 != '\0')) {
    uVar9 = (**(code **)(*(longlong *)*param_1 + 0x148))();
    plVar10 = (longlong *)FUN_140d3a420(uVar9);
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x128))(plVar10,*param_1 + 0x710);
    }
    lVar11 = *param_1;
    puVar4 = *(undefined8 **)(lVar11 + 0x6d0);
    iVar17 = *(int *)(lVar11 + 0x6d8);
    puVar19 = puVar4;
    if (puVar4 != puVar4 + (longlong)iVar17 * 0x39) {
      do {
        if ((int)param_1[4] == 0) {
          puVar18 = &DAT_143f3eda8;
        }
        else {
          puVar18 = (undefined2 *)param_1[3];
        }
        if (*(int *)(puVar19 + 1) == 0) {
          puVar16 = &DAT_143f3eda8;
        }
        else {
          puVar16 = (undefined2 *)*puVar19;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar16,puVar18);
        if (iVar8 == 0) {
          lVar11 = *param_1;
          iVar17 = (int)(((longlong)puVar19 - (longlong)puVar4) / 0x1c8);
          goto LAB_141102b5d;
        }
        puVar19 = puVar19 + 0x39;
      } while (puVar19 != puVar4 + (longlong)iVar17 * 0x39);
      lVar11 = *param_1;
    }
    iVar17 = -1;
LAB_141102b5d:
    if ((((-1 < iVar17) && (iVar17 < *(int *)(lVar11 + 0x6d8))) &&
        (*(longlong *)(lVar11 + 0x788) != 0)) &&
       ((lVar11 = FUN_1410f8230(), lVar11 != 0 && (1 < *(int *)(lVar11 + 800))))) {
      uVar9 = FText::FromString(local_b8,lVar11 + 0x318);
      FUN_142ed3af0(lVar11,uVar9,0);
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_b0 + 1;
        lVar11 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar1 = (int *)((longlong)local_b0 + 0xc);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*local_b0 + 8))(local_b0,1);
          }
        }
      }
    }
    if ((char)param_1[5] == '\0') {
      if ((int)param_1[7] == 5) {
        FString::operator=(*param_1 + 0x718,param_1 + 3);
        FWeakObjectPtr::operator=(local_e8,0);
        local_e0 = 0;
        pwVar12 = _guard_xfg_dispatch_icall_nop
                            (L"&UGFxLoadGameMenu::OnPromptDeleteCorruptSavegame",L"::");
        pwVar6 = (wchar_t *)0x0;
        while (pwVar5 = pwVar12, pwVar5 != (wchar_t *)0x0) {
          pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
          pwVar6 = pwVar5;
        }
        FName::FName(&local_res10,pwVar6 + 2,1);
        FWeakObjectPtr::operator=(local_e8,*param_1);
        local_e0 = local_res10;
        if ((local_res10 != 0) && (lVar11 = FWeakObjectPtr::Get(local_e8), lVar11 != 0)) {
          UObject::FindFunction(lVar11,local_e0);
        }
        uVar9 = FWeakObjectPtr::Get(*param_1 + 0x58c);
        lVar11 = *param_1;
        uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_88,L"Do you want to delete this corrupted character?",
                            L"LoadGameMenu",L"DeleteCorruptLoadedCharacterBodyText");
        uVar14 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_a0,L"Corrupt character",L"LoadGameMenu",
                            L"DeleteCorruptLoadedCharacterHeaderText");
        FUN_1410f47a0(uVar9,uVar14,uVar13,local_e8,0,*(undefined8 *)(lVar11 + 0x7b0),0,0,0);
        local_50 = local_80;
        if (local_98 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_98 + 1;
          lVar11 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_98)(local_98);
            LOCK();
            piVar1 = (int *)((longlong)local_98 + 0xc);
            iVar17 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            local_50 = local_80;
            if (iVar17 == 1) {
              (**(code **)(*local_98 + 8))(local_98,1);
              local_50 = local_80;
            }
          }
        }
      }
      else {
        FWeakObjectPtr::operator=(local_c8,0);
        local_c0 = 0;
        uVar9 = FWeakObjectPtr::Get(*param_1 + 0x58c);
        lVar11 = *param_1;
        uVar13 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_58,L"Error loading the selected character.",L"LoadGameMenu",
                            L"LoadFailedBodyText");
        uVar14 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                           (local_70,L"Load Failed",L"LoadGameMenu",L"LoadFailedHeaderText");
        FUN_1410f3960(uVar9,uVar14,uVar13,local_c8,0,*(undefined8 *)(lVar11 + 0x7b0),2);
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_68 + 1;
          lVar11 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar1 = (int *)((longlong)local_68 + 0xc);
            iVar17 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar17 == 1) {
              (**(code **)(*local_68 + 8))(local_68,1);
            }
          }
        }
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_50 + 1;
        lVar11 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar17 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar17 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
    else {
      FUN_141111cb0(*param_1,param_1 + 1,param_1[6]);
    }
  }
  plVar10 = local_d0;
  LOCK();
  uVar3 = *(uint *)(*param_1 + 0x588);
  *(uint *)(*param_1 + 0x588) = 1;
  uVar15 = (ulonglong)uVar3;
  UNLOCK();
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    puVar2 = (uint *)(local_d0 + 1);
    uVar3 = *puVar2;
    uVar15 = (ulonglong)uVar3;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if (uVar3 == 1) {
      uVar15 = (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar17 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        uVar15 = (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  return uVar15;
}



// FUNCTION 141102f40 FUN_141102f40 body=719 status=ok
// SIG undefined FUN_141102f40(void)

void FUN_141102f40(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 local_238 [8];
  longlong *local_230;
  longlong *local_210;
  longlong *local_1f8;
  char local_1df;
  char local_1de;
  undefined1 local_1dc [36];
  longlong local_1b8;
  int local_160;
  undefined1 local_15c [52];
  undefined1 local_128 [8];
  longlong *local_120;
  longlong *local_100;
  longlong *local_e8;
  longlong local_a8;
  
  iVar8 = 0;
  if (0 < *(int *)(param_2 + 0xc0)) {
    lVar10 = 0;
    do {
      if (*(int *)(lVar10 + 0xd8 + *(longlong *)(param_2 + 0xb8)) == *(int *)*param_1) {
        FUN_140e9a4f0(local_238,(longlong)iVar8 * 0x110 + *(longlong *)(param_2 + 0xb8));
        uVar7 = FUN_142fffe20(*(undefined8 *)param_1[1],*param_1);
        lVar9 = *(longlong *)(param_2 + 0xb8) + lVar10;
        uVar7 = FUN_1411e38c0(local_128,uVar7,*(undefined8 *)param_1[1]);
        FUN_140e9ca30(lVar9,uVar7);
        if (local_a8 != 0) {
          FMemory::Free();
        }
        plVar5 = local_e8;
        if (local_e8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_e8 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_e8)(local_e8);
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
        plVar5 = local_100;
        if (local_100 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_100 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_100)(local_100);
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
        plVar5 = local_120;
        if (local_120 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_120 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_120)(local_120);
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
        cVar6 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                          (local_1dc,lVar9 + 0x5c);
        if ((((cVar6 != '\0') ||
             (cVar6 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>
                                (local_15c,lVar9 + 0xdc), cVar6 != '\0')) ||
            (local_1df != *(char *)(lVar9 + 0x59))) ||
           ((local_160 != *(int *)(lVar9 + 0xd8) || (local_1de != *(char *)(lVar9 + 0x5a))))) {
          FUN_1410578b0(param_2 + 8,iVar8);
        }
        if (local_1b8 != 0) {
          FMemory::Free();
        }
        plVar5 = local_1f8;
        if (local_1f8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_1f8 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_1f8)(local_1f8);
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
        plVar5 = local_210;
        if (local_210 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_210 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_210)(local_210);
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
        plVar5 = local_230;
        if (local_230 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_230 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_230)(local_230);
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
      iVar8 = iVar8 + 1;
      lVar10 = lVar10 + 0x110;
    } while (iVar8 < *(int *)(param_2 + 0xc0));
  }
  return;
}



// FUNCTION 141103210 FUN_141103210 body=572 status=ok
// SIG undefined FUN_141103210(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141103210(undefined8 *param_1,longlong *param_2,undefined4 param_3)

{
  short *psVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  longlong local_1d8;
  int local_1d0;
  int local_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong *local_1b8;
  uint local_1b0;
  undefined8 *local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong *local_188;
  uint local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined1 local_168 [256];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  lVar6 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_2 + 0xc)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  if ((undefined2 *)*param_2 != (undefined2 *)0x0) {
    *(undefined2 *)*param_2 = 0;
  }
  local_198 = 0xffffffffffffffff;
  uStack_190 = 0xffffffffffffffff;
  local_188 = (longlong *)0x0;
  local_180 = 3;
  local_1c8 = 0xffffffffffffffff;
  uStack_1c0 = 0xffffffffffffffff;
  local_1b8 = (longlong *)0x0;
  local_1b0 = 0;
  local_1e8 = 1;
  local_178 = param_3;
  cVar2 = FUN_1420458d0(*(undefined8 *)*param_1,"getLineText",&local_1c8,&local_198);
  if (cVar2 != '\0') {
    puVar4 = local_1a8;
    if ((local_1b0 >> 6 & 1) != 0) {
      puVar4 = (undefined8 *)*local_1a8;
    }
    lVar3 = TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
                      (local_168,puVar4);
    local_1d8 = 0;
    iVar7 = 0;
    local_1cc = 0;
    psVar1 = *(short **)(lVar3 + 0x108);
    iVar8 = 0;
    if ((psVar1 != (short *)0x0) && (iVar8 = iVar7, *psVar1 != 0)) {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (psVar1[lVar6] != 0);
      iVar5 = (int)lVar6 + 1;
      local_1d0 = iVar5;
      if (0 < iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
      }
      iVar7 = local_1cc;
      iVar8 = local_1d0;
      lVar6 = local_1d8;
      FGenericPlatformString::Memcpy(local_1d8,psVar1,(longlong)iVar5 * 2);
    }
    if (param_2 == &local_1d8) {
      if (lVar6 != 0) {
        FMemory::Free(lVar6);
      }
    }
    else {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      *param_2 = lVar6;
      *(int *)(param_2 + 1) = iVar8;
      *(int *)((longlong)param_2 + 0xc) = iVar7;
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  if ((local_1b0 >> 6 & 1) != 0) {
    (**(code **)(*local_1b8 + 0x10))(local_1b8,&local_1c8,local_1a8);
    local_1b8 = (longlong *)0x0;
  }
  local_1b0 = 0;
  if ((local_180 >> 6 & 1) != 0) {
    (**(code **)(*local_188 + 0x10))(local_188,&local_198,CONCAT44(uStack_174,local_178));
  }
  return;
}



// FUNCTION 141103450 FUN_141103450 body=835 status=ok
// SIG undefined FUN_141103450(void)

void FUN_141103450(undefined4 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  undefined1 local_res8 [4];
  undefined4 local_resc;
  undefined8 local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar5 = FUN_1416f8720(param_1[3]);
  lVar9 = 0;
  if (lVar5 != 0) {
    lVar5 = FUN_1416f8720(param_1[3]);
    iVar3 = *(int *)(lVar5 + 0xc);
    lVar5 = lVar9;
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar8 = iVar3 >> 0x1f & 0xffff;
      uVar4 = iVar3 + uVar8;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    if (((*(uint *)(lVar5 + 8) & 0x30000000) == 0) &&
       (lVar5 = FUN_1416f8720(param_1[2]), lVar5 != 0)) {
      lVar5 = FUN_1416f8720(param_1[2]);
      iVar3 = *(int *)(lVar5 + 0xc);
      lVar5 = lVar9;
      if (iVar3 < (int)DAT_1469e91c4) {
        uVar8 = iVar3 >> 0x1f & 0xffff;
        uVar4 = iVar3 + uVar8;
        lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
      }
      if ((*(uint *)(lVar5 + 8) & 0x30000000) == 0) {
        plVar6 = (longlong *)FUN_1416f8720(param_1[3]);
        (**(code **)(*plVar6 + 0x278))(plVar6,1);
        lVar5 = FUN_1416f8720(param_1[4]);
        if (lVar5 != 0) {
          lVar5 = FUN_1416f8720(param_1[4]);
          iVar3 = *(int *)(lVar5 + 0xc);
          lVar5 = lVar9;
          if (iVar3 < (int)DAT_1469e91c4) {
            uVar8 = iVar3 >> 0x1f & 0xffff;
            uVar4 = iVar3 + uVar8;
            lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                    (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
          }
          if ((*(uint *)(lVar5 + 8) & 0x30000000) == 0) {
            local_48 = 0;
            plStack_40 = (longlong *)0x0;
            plVar6 = (longlong *)FUN_1416f8720(param_1[4]);
            lVar5 = *plVar6;
            uVar7 = FText::AsNumber(local_38,*param_1,0,&local_48);
            (**(code **)(lVar5 + 0x2b0))(plVar6,uVar7,1,0);
            if (local_30 != (longlong *)0x0) {
              LOCK();
              plVar6 = local_30 + 1;
              lVar5 = *plVar6;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*local_30)(local_30);
                LOCK();
                piVar1 = (int *)((longlong)local_30 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*local_30 + 8))(local_30,1);
                }
              }
            }
            plVar6 = plStack_40;
            if (plStack_40 != (longlong *)0x0) {
              LOCK();
              plVar2 = plStack_40 + 1;
              lVar5 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*plStack_40)(plStack_40);
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
          }
        }
        uVar7 = FUN_1416f8720(param_1[3]);
        FUN_142087ad0(uVar7,local_res8,&local_resc);
        fVar10 = 0.0;
        lVar5 = FUN_1416f8720(param_1[5]);
        if (lVar5 != 0) {
          lVar5 = FUN_1416f8720(param_1[5]);
          iVar3 = *(int *)(lVar5 + 0xc);
          lVar5 = lVar9;
          if (iVar3 < (int)DAT_1469e91c4) {
            uVar8 = iVar3 >> 0x1f & 0xffff;
            uVar4 = iVar3 + uVar8;
            lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                    (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
          }
          if (((*(uint *)(lVar5 + 8) & 0x30000000) == 0) &&
             (lVar5 = FUN_1416f8720(param_1[5]), *(longlong *)(lVar5 + 0x248) != 0)) {
            lVar5 = FUN_1416f8720(param_1[5]);
            fVar10 = (float)FUN_142eee7f0(*(undefined8 *)(lVar5 + 0x248));
          }
        }
        uVar7 = FUN_1416f8720(param_1[3]);
        FUN_14208ff10(uVar7,fVar10 - 90.0,local_resc);
      }
    }
  }
  lVar5 = FUN_1416f8720(param_1[6]);
  if (lVar5 != 0) {
    lVar5 = FUN_1416f8720(param_1[6]);
    iVar3 = *(int *)(lVar5 + 0xc);
    if (iVar3 < (int)DAT_1469e91c4) {
      uVar8 = iVar3 >> 0x1f & 0xffff;
      uVar4 = iVar3 + uVar8;
      lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    if ((*(uint *)(lVar9 + 8) & 0x30000000) == 0) {
      plVar6 = (longlong *)FUN_1416f8720(param_1[6]);
      (**(code **)(*plVar6 + 0x278))(plVar6,*(undefined1 *)(param_1 + 1));
    }
  }
  return;
}



// FUNCTION 1411037a0 FUN_1411037a0 body=336 status=ok
// SIG undefined FUN_1411037a0(void)

void FUN_1411037a0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar3 = FWeakObjectPtr::Get(*param_1 + 0x5cc);
  if (lVar3 != 0) {
    lVar4 = FUN_14141f270();
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
      FUN_140bce120(lVar3);
      FUN_140beb560(lVar3,param_1 + 1);
      FUN_140bf5100(lVar3);
    }
  }
  lVar3 = *param_1;
  cVar2 = FWeakObjectPtr::IsValid();
  if (cVar2 != '\0') {
    FWeakObjectPtr::Get(lVar3 + 0x59c);
    lVar3 = FUN_140cdde20();
    if (lVar3 != 0) {
      lVar3 = *(longlong *)(*param_1 + 0x7b0);
      if (lVar3 != 0) {
        lVar4 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_140d15d70(lVar3);
        }
      }
      FUN_142eb3990();
    }
  }
  lVar3 = param_1[3];
  lVar4 = *param_1;
  if ((*(int *)(lVar4 + 0x6b8) != 0) && (*(longlong **)(lVar4 + 0x6b0) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(lVar4 + 0x6b0) + 0x18))();
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_1411038c4;
    }
  }
  bVar1 = false;
LAB_1411038c4:
  if (bVar1) {
    if (*(int *)(lVar4 + 0x6b8) == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(lVar4 + 0x6b0);
    }
    (**(code **)(*plVar5 + 0x40))(plVar5,lVar3);
  }
  return;
}



// FUNCTION 1411038f0 FUN_1411038f0 body=312 status=ok
// SIG undefined FUN_1411038f0(void)

bool FUN_1411038f0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  if ((param_2[2] == 0) &&
     (lVar2 = (**(code **)(*(longlong *)*param_2 + 0x38))(), (*(byte *)(lVar2 + 0x10) & 4) == 0)) {
LAB_141103930:
    if ((param_3[2] != 0) ||
       (lVar2 = (**(code **)(*(longlong *)*param_3 + 0x38))(), (*(byte *)(lVar2 + 0x10) & 4) != 0))
    goto LAB_141103946;
LAB_141103960:
    if ((param_2[2] != 0) ||
       (lVar2 = (**(code **)(*(longlong *)*param_2 + 0x38))(), (*(byte *)(lVar2 + 0x10) & 1) != 0))
    goto LAB_141103976;
LAB_14110398c:
    if ((param_3[2] == 0) &&
       (lVar2 = (**(code **)(*(longlong *)*param_3 + 0x38))(), (*(byte *)(lVar2 + 0x10) & 1) == 0))
    goto LAB_1411039b8;
  }
  else {
    if (param_3[2] == 0) {
      lVar2 = (**(code **)(*(longlong *)*param_3 + 0x38))();
      if ((*(byte *)(lVar2 + 0x10) & 4) == 0) {
        return true;
      }
      goto LAB_141103930;
    }
LAB_141103946:
    if (param_2[2] == 0) {
      lVar2 = (**(code **)(*(longlong *)*param_2 + 0x38))();
      if ((*(byte *)(lVar2 + 0x10) & 4) == 0) {
        return false;
      }
      goto LAB_141103960;
    }
LAB_141103976:
    if (param_3[2] == 0) {
      lVar2 = (**(code **)(*(longlong *)*param_3 + 0x38))();
      if ((*(byte *)(lVar2 + 0x10) & 1) == 0) {
        return true;
      }
      goto LAB_14110398c;
    }
  }
  if ((param_2[2] == 0) &&
     (lVar2 = (**(code **)(*(longlong *)*param_2 + 0x38))(), (*(byte *)(lVar2 + 0x10) & 1) == 0)) {
    return false;
  }
LAB_1411039b8:
  if ((*(char *)(*param_2 + 8) != '\0') && (*(char *)(*param_3 + 8) == '\0')) {
    return true;
  }
  if ((*(char *)(*param_3 + 8) != '\0') && (*(char *)(*param_2 + 8) == '\0')) {
    return false;
  }
  puVar3 = &DAT_143f3eda8;
  if ((int)param_3[5] == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)param_3[4];
  }
  if ((int)param_2[5] != 0) {
    puVar3 = (undefined2 *)param_2[4];
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
  return iVar1 < 0;
}



// FUNCTION 141103a30 FUN_141103a30 body=162 status=ok
// SIG undefined FUN_141103a30(void)

void FUN_141103a30(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*(longlong *)*param_1 + 0x148))();
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    lVar1 = *param_1;
    FUN_142880530(uVar3,lVar1 + 0x6e0);
    *(undefined8 *)(lVar1 + 0x6e0) = 0;
    if (*(longlong *)(lVar2 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar2 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    lVar2 = *param_1;
    FUN_142880530(uVar3,lVar2 + 0x6d8);
    *(undefined8 *)(lVar2 + 0x6d8) = 0;
  }
  return;
}



// FUNCTION 141103af0 FUN_141103af0 body=142 status=ok
// SIG undefined FUN_141103af0(void)

undefined8 * FUN_141103af0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_1416f8340(*(undefined4 *)(param_1 + 7));
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
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141103b80 FUN_141103b80 body=66 status=ok
// SIG undefined FUN_141103b80(void)

undefined8 * FUN_141103b80(undefined8 *param_1,ulonglong param_2)

{
  FUN_140e9c360(param_1 + 2);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 141103bd0 FUN_141103bd0 body=148 status=ok
// SIG undefined FUN_141103bd0(void)

undefined8 * FUN_141103bd0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[3];
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
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141103c70 FUN_141103c70 body=97 status=ok
// SIG undefined FUN_141103c70(void)

undefined8 * FUN_141103c70(undefined8 *param_1,ulonglong param_2)

{
  FUN_1416f8340(*(undefined4 *)(param_1 + 4));
  FUN_1416f8340(*(undefined4 *)((longlong)param_1 + 0x1c));
  FUN_1416f8340(*(undefined4 *)(param_1 + 3));
  FUN_1416f8340(*(undefined4 *)((longlong)param_1 + 0x14));
  FUN_1416f8340(*(undefined4 *)(param_1 + 2));
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141103ce0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
Chaos::TRigidParticles<float,3>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4e0);
  }
  return param_1;
}



// FUNCTION 141103d20 FUN_141103d20 body=67 status=ok
// SIG undefined FUN_141103d20(void)

longlong FUN_141103d20(longlong param_1,ulonglong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2c80);
  FUN_1426d55e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2cd0);
  }
  return param_1;
}



// FUNCTION 141103d70 FUN_141103d70 body=219 status=ok
// SIG undefined FUN_141103d70(void)

longlong FUN_141103d70(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x580) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x570) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x560) != 0) {
    FMemory::Free();
  }
  lVar2 = 7;
  lVar3 = param_1 + 0x568;
  do {
    plVar1 = (longlong *)(lVar3 + -0x18);
    lVar3 = lVar3 + -0x18;
    lVar2 = lVar2 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar2 != 0);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x490);
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5f0);
  }
  return param_1;
}



// FUNCTION 141103e50 FUN_141103e50 body=73 status=ok
// SIG undefined FUN_141103e50(void)

longlong FUN_141103e50(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x710) != 0) {
    FMemory::Free();
  }
  FUN_140e9c5f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x730);
  }
  return param_1;
}



// FUNCTION 141103ea0 FUN_141103ea0 body=303 status=ok
// SIG undefined FUN_141103ea0(void)

longlong FUN_141103ea0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_140e9bfd0(param_1 + 0xa70);
  FUN_1410fc6a0(param_1 + 0x9c0);
  FUN_140e9bfd0(param_1 + 0x9a0);
  FUN_1410fc6a0(param_1 + 0x8f0);
  FUN_140e9bfd0(param_1 + 0x8d0);
  FUN_1410fc6a0(param_1 + 0x820);
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    FMemory::Free();
  }
  TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>::
  ~TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>(param_1 + 0x6e0);
  TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>::
  ~TArray<FTTLHUDMissionCommandGoalItemParams,FDefaultAllocator>(param_1 + 0x6d0);
  plVar4 = *(longlong **)(param_1 + 0x6b8);
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
  plVar4 = *(longlong **)(param_1 + 0x6a0);
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
  FUN_140e9c5f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xaa0);
  }
  return param_1;
}



// FUNCTION 141103fd0 FUN_141103fd0 body=141 status=ok
// SIG undefined FUN_141103fd0(void)

longlong FUN_141103fd0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xda8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x798) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xdd0);
  }
  return param_1;
}



// FUNCTION 141104060 FUN_141104060 body=319 status=ok
// SIG undefined FUN_141104060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141104060(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  float local_50;
  undefined1 local_48 [64];
  
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar1 = *(longlong *)(param_2 + 0x168);
    if (lVar1 == 0) {
      local_68 = _DAT_1468b5d90;
      local_60 = DAT_1468b5d98;
    }
    else {
      local_68 = *(undefined8 *)(lVar1 + 0x220);
      local_60 = *(float *)(lVar1 + 0x228);
    }
    fVar4 = local_60;
    uVar3 = local_68;
    lVar1 = *(longlong *)(param_3 + 0x168);
    if (lVar1 == 0) {
      local_68 = _DAT_1468b5d90;
      local_60 = DAT_1468b5d98;
    }
    else {
      local_68 = *(undefined8 *)(lVar1 + 0x220);
      local_60 = *(float *)(lVar1 + 0x228);
    }
    local_50 = local_60;
    local_58 = local_68;
    local_60 = local_60 - fVar4;
    local_68 = CONCAT44((float)((ulonglong)local_68 >> 0x20) - (float)((ulonglong)uVar3 >> 0x20),
                        (float)local_68 - (float)uVar3);
    uVar2 = FRotationMatrix::MakeFromX(local_48,&local_68);
    FMatrix::Rotator(uVar2,&local_58);
    local_68 = local_58;
    local_60 = local_50;
    AActor::SetActorRotation(param_2,&local_68,0,param_4,uVar3,fVar4);
  }
  return;
}



// FUNCTION 1411041a0 FUN_1411041a0 body=171 status=ok
// SIG undefined FUN_1411041a0(void)

void FUN_1411041a0(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uStack_14;
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    uVar5 = 0;
    if (0 < *(int *)(param_1 + 0x5e0)) {
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0x5d8) + 8);
      uVar6 = uVar5;
      do {
        if (*plVar4 == lVar3) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x5d8) + (longlong)(int)uVar6 * 0x10) = param_3;
          return;
        }
        uVar6 = (ulonglong)((int)uVar6 + 1);
        uVar5 = uVar5 + 1;
        plVar4 = plVar4 + 2;
      } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x5e0));
    }
    iVar2 = *(int *)(param_1 + 0x5e0);
    *(int *)(param_1 + 0x5e0) = iVar2 + 1;
    if (*(int *)(param_1 + 0x5e4) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x5d8),iVar2);
    }
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x5d8) + (longlong)iVar2 * 0x10);
    *puVar1 = CONCAT44(uStack_14,param_3);
    puVar1[1] = lVar3;
  }
  return;
}



// FUNCTION 141104250 FUN_141104250 body=1801 status=ok
// SIG undefined FUN_141104250(void)

int FUN_141104250(longlong param_1,undefined8 param_2,longlong param_3,char param_4,
                 undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined2 *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  char *pcVar15;
  longlong local_res8;
  undefined8 local_res10;
  longlong *local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong *plStack_70;
  longlong *local_68;
  longlong *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong *plStack_48;
  
  if (*(longlong *)(param_1 + 0x980) == 0) {
    return -1;
  }
  plStack_70 = (longlong *)0x0;
  pcVar15 = "SmallButton";
  local_c8 = 0;
  if (param_4 != '\0') {
    pcVar15 = "BigButton";
  }
  local_c0 = 0;
  plStack_60 = (longlong *)0x0;
  uStack_58 = 0;
  uStack_50 = 0;
  plStack_48 = (longlong *)0x0;
  local_res8 = param_1;
  local_res10 = param_2;
  if (*pcVar15 != '\0') {
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (pcVar15[lVar12] != '\0');
    uVar11 = (int)lVar12 + 1;
    local_c0 = (ulonglong)uVar11;
    if (0 < (int)uVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
    }
    FGenericPlatformString::Convert<char,wchar_t>(local_c8,uVar11,pcVar15,uVar11,0x3f);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x980);
  uVar5 = URemnantGameInstance::GetPrivateStaticClass();
  local_78 = (longlong *)FUN_142ebcee0(uVar2,&local_c8,uVar5,0);
  if (local_78 != (longlong *)0x0) {
    lVar12 = URemnantGameInstance::GetPrivateStaticClass();
    if ((*(int *)(local_78[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)(*(longlong *)(local_78[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8) !=
        lVar12 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_141104373;
  }
  local_78 = (longlong *)0x0;
LAB_141104373:
  plVar4 = local_78;
  if (local_c8 != 0) {
    FMemory::Free();
  }
  if (plVar4 == (longlong *)0x0) {
    return -1;
  }
  local_d8 = (longlong *)0x0;
  local_d0 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_d8,0xe,"socialWrapper",0xe,0x3f);
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  plVar6 = (longlong *)FUN_140ecbdf0(plVar4,&local_d8,0,6,&local_e8);
  local_68 = plVar6;
  plVar13 = local_e8;
  for (iVar14 = (int)local_e0; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar13 = plVar4;
  if (plVar6 != (longlong *)0x0) {
    plVar13 = plVar6;
  }
  plVar6 = plStack_60;
  if (plVar13 != (longlong *)0x0) {
    local_a8 = 0;
    local_a0 = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_a8,0x12,"listIconContainer",0x12,0x3f);
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    plVar6 = (longlong *)FUN_140ecbdf0(plVar13,&local_a8,0,6,&local_b8);
    plStack_60 = plVar6;
    plVar13 = local_b8;
    for (iVar14 = (int)local_b0; iVar14 != 0; iVar14 = iVar14 + -1) {
      if (*plVar13 != 0) {
        FMemory::Free();
      }
      plVar13 = plVar13 + 2;
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free(local_b8);
    }
    if (local_a8 != 0) {
      FMemory::Free();
    }
    if (plVar6 != (longlong *)0x0) {
      local_e8 = (longlong *)0x0;
      local_e0 = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_e8,9,"listIcon",9,0x3f);
      local_d8 = (longlong *)0x0;
      local_d0 = 0;
      uStack_58 = FUN_140ecbdf0(plVar6,&local_e8,0,6,&local_d8);
      plVar13 = local_d8;
      for (iVar14 = (int)local_d0; iVar14 != 0; iVar14 = iVar14 + -1) {
        if (*plVar13 != 0) {
          FMemory::Free();
        }
        plVar13 = plVar13 + 2;
      }
      if (local_d8 != (longlong *)0x0) {
        FMemory::Free(local_d8);
      }
      if (local_e8 != (longlong *)0x0) {
        FMemory::Free();
      }
      local_e8 = (longlong *)0x0;
      local_e0 = 0xd;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_e8,0xd,"listIconText",0xd,0x3f);
      local_d8 = (longlong *)0x0;
      local_d0 = 0;
      uStack_50 = FUN_140ecc7d0(plVar6,&local_e8,0,6,&local_d8);
      plVar13 = local_d8;
      for (iVar14 = (int)local_d0; iVar14 != 0; iVar14 = iVar14 + -1) {
        if (*plVar13 != 0) {
          FMemory::Free();
        }
        plVar13 = plVar13 + 2;
      }
      if (local_d8 != (longlong *)0x0) {
        FMemory::Free(local_d8);
      }
      if (local_e8 != (longlong *)0x0) {
        FMemory::Free();
      }
      (**(code **)(*plVar6 + 0x278))(plVar6,0);
    }
  }
  local_98 = 0;
  local_90 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  FGenericPlatformString::Memcpy(local_98,L"needHelpIcon",0x1a);
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  plStack_48 = (longlong *)FUN_140ecbdf0(plVar4,&local_98,0,6,&local_d8);
  plVar13 = local_d8;
  for (iVar14 = (int)local_d0; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_98 != 0) {
    FMemory::Free();
  }
  local_88 = 0;
  local_80 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_88,0xc,"labelShadow",0xc,0x3f);
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  plVar7 = (longlong *)FUN_140ecc7d0(plVar4,&local_88,0,6,&local_e8);
  plStack_70 = plVar7;
  plVar13 = local_e8;
  for (iVar14 = (int)local_e0; iVar14 != 0; iVar14 = iVar14 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  (**(code **)(*plVar4 + 0x278))(plVar4,1);
  (**(code **)(plVar4[0x2e] + 0x38))(plVar4 + 0x2e,1);
  uVar2 = local_res10;
  FUN_142ed3af0(plVar4,local_res10,0);
  FUN_142ed3eb0(plVar4,0);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x2b0))(plVar7,uVar2,1,0);
  }
  lVar12 = local_res8;
  local_e8 = (longlong *)0x0;
  if (param_3 == 0) {
    FWeakObjectPtr::operator=(plVar4 + 0x36,0);
    local_e8 = (longlong *)0x0;
    plVar4[0x37] = 0;
    lVar12 = local_res8;
  }
  else {
    FWeakObjectPtr::operator=(plVar4 + 0x36,local_res8);
    plVar4[0x37] = param_3;
    puVar10 = &DAT_143f3eda8;
    if (*(int *)(lVar12 + 0x508) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = *(undefined2 **)(lVar12 + 0x500);
    }
    FName::FName(&local_res8,puVar8,1);
    plVar4[0x35] = local_res8;
    if (*(int *)(lVar12 + 0x4f8) != 0) {
      puVar10 = *(undefined2 **)(lVar12 + 0x4f0);
    }
    FName::FName(&local_res8,puVar10,1);
    plVar4[0x34] = local_res8;
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x278))(plVar6,0);
  }
  if (plStack_48 != (longlong *)0x0) {
    (**(code **)(*plStack_48 + 0x278))(plStack_48,0);
  }
  *(undefined4 *)(plVar4 + 0x51) = param_5;
  iVar14 = *(int *)(lVar12 + 0x8a8);
  *(int *)(lVar12 + 0x8a8) = iVar14 + 1;
  if (*(int *)(lVar12 + 0x8ac) < iVar14 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (lVar12 + 0x8a0,iVar14);
  }
  lVar12 = *(longlong *)(lVar12 + 0x8a0);
  lVar9 = (longlong)iVar14 * 0x38;
  *(undefined8 *)(lVar9 + lVar12) = local_78;
  ((undefined8 *)(lVar9 + lVar12))[1] = plStack_70;
  puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar12);
  *puVar1 = local_68;
  puVar1[1] = plStack_60;
  puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar12);
  *puVar1 = uStack_58;
  puVar1[1] = uStack_50;
  *(longlong **)(lVar9 + 0x30 + lVar12) = plStack_48;
  return iVar14;
}



// FUNCTION 141104960 FUN_141104960 body=726 status=ok
// SIG undefined FUN_141104960(void)

void FUN_141104960(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  longlong local_a8;
  longlong *plStack_a0;
  longlong local_98 [3];
  longlong *plStack_80;
  longlong local_78;
  longlong *plStack_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((param_1 != 0) && (cVar4 = FUN_140becca0(), cVar4 == '\0')) {
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    puVar6 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,local_res8)
    ;
    cVar4 = FUN_140bcac80(param_1,*puVar6);
    if (cVar4 == '\0') {
      plVar7 = (longlong *)FUN_140bb8140(param_1,local_68);
      plVar9 = local_60;
      if (&local_a8 != plVar7) {
        local_a8 = *plVar7;
        *plVar7 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_a0,plVar7 + 1);
        plVar9 = local_60;
      }
    }
    else {
      plVar7 = (longlong *)FUN_140bbc6f0(param_1,local_58,param_2);
      plVar9 = local_50;
      if (&local_a8 != plVar7) {
        local_a8 = *plVar7;
        *plVar7 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_a0,plVar7 + 1);
        plVar9 = local_50;
      }
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
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    if (local_a8 != 0) {
      local_98[2] = local_a8;
      plStack_80 = plStack_a0;
      local_98[0] = 0;
      local_98[1] = 0;
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
        UNLOCK();
      }
      FUN_140d79f00(*(undefined8 *)(param_1 + 0x478),local_98 + 2,1,1,local_98);
      plVar9 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        plVar7 = plStack_80 + 1;
        lVar3 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_80)(plStack_80);
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
      uVar8 = FText::FromString(local_38,local_98);
      FText::operator=(param_3 + 0x38,uVar8);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_30 + 1;
        lVar3 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
      local_78 = local_a8;
      plStack_70 = plStack_a0;
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
        UNLOCK();
      }
      uVar5 = FUN_140bbd2a0(param_1,&local_78);
      plVar9 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar7 = plStack_70 + 1;
        lVar3 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_70)(plStack_70);
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
      uVar8 = FUN_1411f1490(local_48,uVar5);
      FString::operator=(param_3 + 0x50,uVar8);
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      if (local_98[0] != 0) {
        FMemory::Free();
      }
    }
    plVar9 = plStack_a0;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_a0 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_a0)(plStack_a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141104c40 FUN_141104c40 body=367 status=ok
// SIG undefined FUN_141104c40(void)

ulonglong FUN_141104c40(ulonglong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x59c);
  uVar9 = 0;
  uVar8 = uVar9;
  if (cVar4 != '\0') {
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x59c);
    lVar6 = FUN_1410f72b0(uVar5);
    if ((lVar6 != 0) && (lVar6 = FUN_1410cb760(lVar6), lVar6 != 0)) {
      uVar8 = *(ulonglong *)(lVar6 + 0x688);
    }
  }
  uVar2 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  uVar7 = (ulonglong)uVar2;
  if (((int)uVar2 < DAT_146875680) &&
     (uVar7 = _Init_thread_header(&DAT_146875680), DAT_146875680 == -1)) {
    FName::FName(&DAT_146875678,L"Roster",1);
    uVar7 = _Init_thread_footer(&DAT_146875680);
  }
  if (*(int *)(param_1 + 0x89c) == 0) {
    uVar7 = FWeakObjectPtr::Get(param_1 + 0x59c);
    if (0 < *(int *)(uVar7 + 0x48)) {
      piVar1 = (int *)(uVar7 + 0x48);
      uVar7 = *(ulonglong *)(uVar7 + 0x40);
      plVar3 = *(longlong **)((uVar7 - 8) + (longlong)*piVar1 * 8);
      if (plVar3 != (longlong *)0x0) {
        uVar7 = (**(code **)(*plVar3 + 0x278))();
        uVar9 = uVar7;
      }
    }
    if ((uVar9 == param_1) &&
       ((uVar7 = *(ulonglong *)(param_1 + 0x5a8), uVar7 == 0 ||
        ((*(longlong *)(param_1 + 0x980) != 0 &&
         (*(longlong *)(param_1 + 0x980) == *(longlong *)(uVar7 + 0x48))))))) goto LAB_141104d51;
  }
  if ((*(int *)(param_1 + 0x89c) != 0) ||
     ((uVar8 != DAT_146875678 ||
      ((uVar7 = *(ulonglong *)(param_1 + 0x5a8), uVar7 != 0 &&
       ((*(longlong *)(param_1 + 0x980) == 0 ||
        (*(longlong *)(param_1 + 0x980) != *(longlong *)(uVar7 + 0x48))))))))) {
    return uVar7 & 0xffffffffffffff00;
  }
LAB_141104d51:
  return CONCAT71((int7)(uVar7 >> 8),1);
}



// FUNCTION 141104db0 FUN_141104db0 body=335 status=ok
// SIG undefined FUN_141104db0(void)

void FUN_141104db0(longlong *param_1)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  if (param_1[0xd2] != 0) {
    plVar1 = (longlong *)param_1[0xd0];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1[0xd2] + 0x30,1,0);
    }
    plVar1 = (longlong *)param_1[0xd1];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1[0xd2] + 0x48,1,0);
    }
    if (*(longlong *)(param_1[0xd2] + 0x60) != 0) {
      local_18[0] = 0;
      local_18[1] = 0x16;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"backgroundPlaceholder",0x2c);
      (**(code **)(*param_1 + 0x2a0))(param_1,local_18,*(undefined8 *)(param_1[0xd2] + 0x60));
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1[0xd2] + 0x68) != 0) {
      local_18[0] = 0;
      local_18[1] = 0x16;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"foregroundPlaceholder",0x2c);
      (**(code **)(*param_1 + 0x2a0))(param_1,local_18,*(undefined8 *)(param_1[0xd2] + 0x68));
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    FUN_142ecd4d0(param_1);
    param_1[0xd2] = 0;
  }
  return;
}



// FUNCTION 141104f00 FUN_141104f00 body=3633 status=ok
// SIG undefined FUN_141104f00(void)

void FUN_141104f00(longlong *param_1)

{
  int *piVar1;
  void *_Src;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  short *psVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *local_res8;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  ulonglong local_res20;
  undefined4 in_stack_fffffffffffffe38;
  undefined2 uVar16;
  longlong *local_1b0;
  undefined8 local_1a8;
  void *local_1a0;
  int local_198;
  undefined4 local_194;
  longlong local_190;
  ulonglong local_188;
  longlong local_180;
  ulonglong local_178;
  undefined2 *local_170;
  int local_168;
  undefined4 local_164;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [8];
  int local_138;
  longlong local_130;
  longlong local_128;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined1 local_100 [8];
  int local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined2 *local_78;
  int local_70;
  undefined4 local_6c;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  
  bVar2 = false;
  local_res10[0] = 0;
  if ((param_1[0xd3] != 0) && (1 < *(int *)(param_1[0xd3] + 0x38))) {
    local_res8 = param_1;
    uVar6 = FUN_140e97290();
    local_res20 = uVar6;
    if (uVar6 != 0) {
      lVar7 = FUN_142b45e90();
      FUN_142b48440(*(undefined8 *)(lVar7 + 0x18),&local_58);
      local_1b0 = (longlong *)0x0;
      local_1a8 = 0;
      FUN_141594550(param_1[0xd3] + 0x30,&local_1b0,&DAT_1446a578c,0);
      if ((int)local_1b0[1] == 0) {
        puVar12 = &DAT_143f3eda8;
      }
      else {
        puVar12 = (undefined2 *)*local_1b0;
      }
      FString::PrintfImpl(&local_170,L"%s_2",puVar12);
      plVar14 = local_1b0 + (longlong)(int)local_1a8 * 2;
      lVar7 = local_d8;
      for (plVar15 = local_1b0; plVar15 != plVar14; plVar15 = plVar15 + 2) {
        uVar16 = (undefined2)((uint)in_stack_fffffffffffffe38 >> 0x10);
        _Src = (void *)*plVar15;
        local_1a0 = (void *)0x0;
        local_198 = (int)plVar15[1];
        lVar10 = (longlong)local_198;
        if (local_198 == 0) {
          local_194 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1a0,local_198,0);
          _guard_xfg_dispatch_icall_nop(local_1a0,_Src,lVar10 * 2);
        }
        local_88 = 0;
        local_80 = 4;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
        lVar10 = local_88;
        FGenericPlatformString::Convert<char,wchar_t>
                  (local_88,4,&DAT_1446a57ac,4,CONCAT22(uVar16,0x3f));
        in_stack_fffffffffffffe38 = 0xffffffff;
        iVar5 = FUN_141592950(&local_1a0);
        uVar16 = (undefined2)((uint)in_stack_fffffffffffffe38 >> 0x10);
        if (iVar5 == -1) {
          local_d8 = 0;
          local_d0 = 4;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
          lVar7 = local_d8;
          FGenericPlatformString::Convert<char,wchar_t>
                    (local_d8,4,&DAT_1446a5854,4,CONCAT22(uVar16,0x3f));
          bVar2 = true;
          in_stack_fffffffffffffe38 = 0xffffffff;
          iVar5 = FUN_141592950(&local_1a0);
          if (iVar5 != -1) goto LAB_141105125;
          bVar3 = false;
        }
        else {
LAB_141105125:
          bVar3 = true;
        }
        if ((bVar2) && (bVar2 = false, lVar7 != 0)) {
          FMemory::Free(lVar7);
        }
        if (lVar10 != 0) {
          FMemory::Free(lVar10);
        }
        if (bVar3) {
          if ((int)local_1b0[1] == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = (undefined2 *)*local_1b0;
          }
          FString::PrintfImpl(&local_78,L"%s_3",puVar12);
          if (local_170 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          local_170 = local_78;
          local_168 = local_70;
          local_164 = local_6c;
          uVar6 = local_res20;
          param_1 = local_res8;
          if (local_1a0 != (void *)0x0) {
            FMemory::Free();
            uVar6 = local_res20;
            param_1 = local_res8;
          }
          break;
        }
        if (local_1a0 != (void *)0x0) {
          FMemory::Free();
        }
        uVar6 = local_res20;
        param_1 = local_res8;
      }
      local_res18[0] = 0xffffffff;
      local_res10[0] = 0xffffffff;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146875650) &&
         (_Init_thread_header(&DAT_146875650), DAT_146875650 == -1)) {
        FName::FName(&DAT_146875648,L"OnlineSubsystemUtils",1);
        _Init_thread_footer(&DAT_146875650);
      }
      lVar7 = FModuleManager::GetModulePtr_Internal(DAT_146875648);
      if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x18), lVar7 != 0)) {
        if (*(int *)(param_1[0xd3] + 0x38) == 0) {
          psVar11 = &DAT_143f3eda8;
        }
        else {
          psVar11 = *(short **)(param_1[0xd3] + 0x30);
        }
        local_188 = 0;
        local_190 = 0;
        if ((psVar11 != (short *)0x0) && (*psVar11 != 0)) {
          lVar10 = -1;
          do {
            lVar10 = lVar10 + 1;
          } while (psVar11[lVar10] != 0);
          uVar9 = (int)lVar10 + 1;
          local_188 = (ulonglong)uVar9;
          if (0 < (int)uVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_190,0);
          }
          FGenericPlatformString::Memcpy(local_190,psVar11,(longlong)(int)uVar9 * 2);
        }
        lVar10 = FUN_1404cd290(lVar7,&local_190);
        local_res8 = (longlong *)CONCAT44(local_res8._4_4_,0xffffffff);
        if (lVar10 != 0) {
          FUN_14170c210(&local_res8,lVar10);
        }
        FUN_1416ff870(local_res18,&local_res8);
        FUN_1416f8340((ulonglong)local_res8 & 0xffffffff);
        if (local_190 != 0) {
          FMemory::Free();
        }
        if (*(int *)(param_1[0xd3] + 0x48) == 0) {
          psVar11 = &DAT_143f3eda8;
        }
        else {
          psVar11 = *(short **)(param_1[0xd3] + 0x40);
        }
        local_178 = 0;
        local_180 = 0;
        if ((psVar11 != (short *)0x0) && (*psVar11 != 0)) {
          lVar10 = -1;
          do {
            lVar10 = lVar10 + 1;
          } while (psVar11[lVar10] != 0);
          uVar9 = (int)lVar10 + 1;
          local_178 = (ulonglong)uVar9;
          if (0 < (int)uVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_180,0);
          }
          FGenericPlatformString::Memcpy(local_180,psVar11,(longlong)(int)uVar9 * 2);
        }
        lVar7 = FUN_1404cd290(lVar7,&local_180);
        local_res20 = CONCAT44(local_res20._4_4_,0xffffffff);
        if (lVar7 != 0) {
          FUN_14170c210(&local_res20,lVar7);
        }
        FUN_1416ff870(local_res10,&local_res20);
        FUN_1416f8340(local_res20 & 0xffffffff);
        if (local_180 != 0) {
          FMemory::Free();
        }
      }
      puVar12 = &DAT_143f3eda8;
      if (local_50 != 0) {
        puVar12 = local_58;
      }
      if (*(int *)(param_1[0xd3] + 0x38) == 0) {
        puVar13 = &DAT_143f3eda8;
      }
      else {
        puVar13 = *(undefined2 **)(param_1[0xd3] + 0x30);
      }
      FString::PrintfImpl(&local_68,L"%s_%s",puVar13,puVar12);
      lVar7 = FUN_1416f8720(local_res10[0]);
      if (lVar7 == 0) {
        lVar7 = *(longlong *)(uVar6 + 0x438);
        lVar10 = (longlong)*(int *)(uVar6 + 0x440) * 0x40 + lVar7;
        for (; lVar7 != lVar10; lVar7 = lVar7 + 0x40) {
          FText::FText(local_158,lVar7);
          TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_140,lVar7 + 0x18);
          uVar8 = FText::ToString(local_158);
          puVar12 = &DAT_143f3eda8;
          if (local_168 != 0) {
            puVar12 = local_170;
          }
          iVar5 = FUN_141592950(uVar8,puVar12,1,0,0xffffffff);
          if (iVar5 != -1) {
            lVar7 = FWeakObjectPtr::Get(local_140);
            if (lVar7 == 0) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              if ((DAT_1464b56f4 != local_138) && (local_130 != 0)) {
                lVar7 = FUN_141796df0(&local_130);
                FWeakObjectPtr::operator=(local_140,lVar7);
                if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                  }
                  UNLOCK();
                  local_138 = DAT_1464b56f4;
                }
                lVar7 = FWeakObjectPtr::Get(local_140);
                if (lVar7 != 0) goto LAB_141105552;
              }
LAB_141105588:
              lVar7 = FUN_1405ec200(local_140);
              if (lVar7 != 0) {
                UTexture::GetPrivateStaticClass();
              }
            }
            else {
LAB_141105552:
              lVar10 = UTexture::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) goto LAB_141105588;
            }
            lVar7 = FWeakObjectPtr::Get(local_140);
            if (lVar7 == 0) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              if ((DAT_1464b56f4 != local_138) && (local_130 != 0)) {
                lVar7 = FUN_141796df0(&local_130);
                FWeakObjectPtr::operator=(local_140,lVar7);
                if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                  }
                  UNLOCK();
                  local_138 = DAT_1464b56f4;
                }
                lVar7 = FWeakObjectPtr::Get(local_140);
                if (lVar7 != 0) goto LAB_14110561e;
              }
            }
            else {
LAB_14110561e:
              lVar10 = UTexture::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                lVar7 = FWeakObjectPtr::Get(local_140);
                if (lVar7 == 0) {
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                  }
                  UNLOCK();
                  if ((DAT_1464b56f4 != local_138) && (local_130 != 0)) {
                    lVar7 = FUN_141796df0(&local_130);
                    FWeakObjectPtr::operator=(local_140,lVar7);
                    if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
                      LOCK();
                      if (DAT_1464b56f4 == 0) {
                        DAT_1464b56f4 = 0;
                      }
                      UNLOCK();
                      local_138 = DAT_1464b56f4;
                    }
                    lVar7 = FWeakObjectPtr::Get(local_140);
                    if (lVar7 != 0) goto LAB_1411056d7;
                  }
LAB_14110570d:
                  lVar7 = 0;
                }
                else {
LAB_1411056d7:
                  lVar10 = UTexture::GetPrivateStaticClass();
                  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  if (!bVar2) goto LAB_14110570d;
                }
                param_1[0xd5] = lVar7;
                local_c8 = 0;
                local_c0 = 0x1b;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
                FGenericPlatformString::Memcpy(local_c8,L"sparkBackgroundPlaceholder",0x36);
                (**(code **)(*param_1 + 0x2a0))(param_1,&local_c8,param_1[0xd5]);
                if (local_c8 != 0) {
                  FMemory::Free();
                }
              }
            }
            if (local_128 != 0) {
              FMemory::Free();
            }
            if (local_150 != (longlong *)0x0) {
              LOCK();
              plVar15 = local_150 + 1;
              lVar7 = *plVar15;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*local_150)(local_150);
                LOCK();
                piVar1 = (int *)((longlong)local_150 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*local_150 + 8))(local_150,1);
                }
              }
            }
            break;
          }
          if (local_128 != 0) {
            FMemory::Free();
          }
          plVar15 = local_150;
          if (local_150 != (longlong *)0x0) {
            LOCK();
            plVar14 = local_150 + 1;
            lVar4 = *plVar14;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*local_150)(local_150);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar15 + 8))(plVar15,1);
              }
            }
          }
        }
      }
      else {
        lVar7 = FUN_1416f8720(local_res10[0]);
        param_1[0xd5] = lVar7;
        local_b8 = 0;
        local_b0 = 0x1b;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
        FGenericPlatformString::Memcpy(local_b8,L"sparkBackgroundPlaceholder",0x36);
        (**(code **)(*param_1 + 0x2a0))(param_1,&local_b8,param_1[0xd5]);
        if (local_b8 != 0) {
          FMemory::Free();
        }
      }
      lVar7 = FUN_1416f8720(local_res18[0]);
      if (lVar7 == 0) {
        lVar7 = *(longlong *)(uVar6 + 0x428);
        lVar10 = (longlong)*(int *)(uVar6 + 0x430) * 0x40 + lVar7;
        for (; lVar7 != lVar10; lVar7 = lVar7 + 0x40) {
          FText::FText(local_118,lVar7);
          TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_100,lVar7 + 0x18);
          uVar8 = FText::ToString(local_118);
          puVar12 = &DAT_143f3eda8;
          if (local_60 != 0) {
            puVar12 = local_68;
          }
          iVar5 = FUN_141592950(uVar8,puVar12,1,0,0xffffffff);
          if (iVar5 != -1) {
            lVar7 = FWeakObjectPtr::Get(local_100);
            if (lVar7 == 0) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              if ((DAT_1464b56f4 != local_f8) && (local_f0 != 0)) {
                lVar7 = FUN_141796df0(&local_f0);
                FWeakObjectPtr::operator=(local_100,lVar7);
                if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                  }
                  UNLOCK();
                  local_f8 = DAT_1464b56f4;
                }
                lVar7 = FWeakObjectPtr::Get(local_100);
                if (lVar7 != 0) goto LAB_141105975;
              }
LAB_1411059ab:
              lVar7 = FUN_1405ec200(local_100);
              if (lVar7 != 0) {
                UTexture::GetPrivateStaticClass();
              }
            }
            else {
LAB_141105975:
              lVar10 = UTexture::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) goto LAB_1411059ab;
            }
            lVar7 = FWeakObjectPtr::Get(local_100);
            if (lVar7 == 0) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              if ((DAT_1464b56f4 != local_f8) && (local_f0 != 0)) {
                lVar7 = FUN_141796df0(&local_f0);
                FWeakObjectPtr::operator=(local_100,lVar7);
                if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                  }
                  UNLOCK();
                  local_f8 = DAT_1464b56f4;
                }
                lVar7 = FWeakObjectPtr::Get(local_100);
                if (lVar7 != 0) goto LAB_141105a41;
              }
            }
            else {
LAB_141105a41:
              lVar10 = UTexture::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                lVar7 = FWeakObjectPtr::Get(local_100);
                if (lVar7 == 0) {
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                  }
                  UNLOCK();
                  if ((DAT_1464b56f4 != local_f8) && (local_f0 != 0)) {
                    lVar7 = FUN_141796df0(&local_f0);
                    FWeakObjectPtr::operator=(local_100,lVar7);
                    if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
                      LOCK();
                      if (DAT_1464b56f4 == 0) {
                        DAT_1464b56f4 = 0;
                      }
                      UNLOCK();
                      local_f8 = DAT_1464b56f4;
                    }
                    lVar7 = FWeakObjectPtr::Get(local_100);
                    if (lVar7 != 0) goto LAB_141105afa;
                  }
LAB_141105b30:
                  lVar7 = 0;
                }
                else {
LAB_141105afa:
                  lVar10 = UTexture::GetPrivateStaticClass();
                  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  if (!bVar2) goto LAB_141105b30;
                }
                param_1[0xd4] = lVar7;
                local_a8 = 0;
                local_a0 = 0x11;
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
                FGenericPlatformString::Memcpy(local_a8,L"sparkPlaceholder",0x22);
                (**(code **)(*param_1 + 0x2a0))(param_1,&local_a8,param_1[0xd4]);
                if (local_a8 != 0) {
                  FMemory::Free();
                }
              }
            }
            if (local_e8 != 0) {
              FMemory::Free();
            }
            if (local_110 != (longlong *)0x0) {
              LOCK();
              plVar15 = local_110 + 1;
              lVar7 = *plVar15;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*local_110)(local_110);
                LOCK();
                piVar1 = (int *)((longlong)local_110 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*local_110 + 8))(local_110,1);
                }
              }
            }
            break;
          }
          if (local_e8 != 0) {
            FMemory::Free();
          }
          plVar15 = local_110;
          if (local_110 != (longlong *)0x0) {
            LOCK();
            plVar14 = local_110 + 1;
            lVar4 = *plVar14;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*local_110)(local_110);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar15 + 8))(plVar15,1);
              }
            }
          }
        }
      }
      else {
        lVar7 = FUN_1416f8720(local_res18[0]);
        param_1[0xd4] = lVar7;
        local_98 = 0;
        local_90 = 0x11;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
        FGenericPlatformString::Memcpy(local_98,L"sparkPlaceholder",0x22);
        (**(code **)(*param_1 + 0x2a0))(param_1,&local_98,param_1[0xd4]);
        if (local_98 != 0) {
          FMemory::Free();
        }
      }
      if (local_68 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      FUN_1416f8340(local_res10[0]);
      FUN_1416f8340(local_res18[0]);
      if (local_170 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      plVar15 = local_1b0;
      for (iVar5 = (int)local_1a8; iVar5 != 0; iVar5 = iVar5 + -1) {
        if (*plVar15 != 0) {
          FMemory::Free();
        }
        plVar15 = plVar15 + 2;
      }
      if (local_1b0 != (longlong *)0x0) {
        FMemory::Free(local_1b0);
      }
      if (local_58 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    FUN_142ecd4d0(param_1);
  }
  return;
}



// FUNCTION 141105d40 FUN_141105d40 body=632 status=ok
// SIG undefined FUN_141105d40(void)

void FUN_141105d40(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if (((*(longlong *)(param_1 + 0x988) != 0) &&
      (*(char *)(*(longlong *)(param_1 + 0x988) + 0x70b) == '\x02')) &&
     (cVar4 = FUN_140bf9690(0,param_1 + 0x59c), cVar4 != '\0')) {
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x59c);
    lVar6 = FUN_1410f70d0(uVar5);
    if (lVar6 != 0) {
      uVar5 = FWeakObjectPtr::Get(param_1 + 0x59c);
      FUN_142f005e0(uVar5,param_1);
      if (param_2 != 0) {
        param_1 = param_1 + 0x58c;
        cVar4 = FWeakObjectPtr::IsValid(param_1);
        if (cVar4 != '\0') {
          if (param_2 == 2) {
            FWeakObjectPtr::operator=(local_88,0);
            local_80 = 0;
            uVar5 = FWeakObjectPtr::Get(param_1);
            uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                              (local_38,
                               L"You have been returned to the main menu because a change in network connection occurred."
                               ,L"GFxMainAndPauseBaseMenu",L"BootedOutOfMenuConnectionError");
            uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                              (local_50,L"Connection Error",L"GFxMainAndPauseBaseMenu",
                               L"BackOutOfEchoNetNetworkConnectionDialogCaption");
            FUN_1410f3960(uVar5,uVar8,uVar7,local_88,1,0,2);
            plVar9 = local_30;
            if (local_48 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_48 + 1;
              lVar6 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*local_48)(local_48);
                LOCK();
                piVar2 = (int *)((longlong)local_48 + 0xc);
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar9 = local_30;
                if (iVar3 == 1) {
                  (**(code **)(*local_48 + 8))(local_48,1);
                  plVar9 = local_30;
                }
              }
            }
          }
          else {
            if (param_2 != 1) {
              return;
            }
            FUN_140dbb930(local_68,7);
            FWeakObjectPtr::operator=(local_78,0);
            local_70 = 0;
            uVar5 = FWeakObjectPtr::Get(param_1);
            uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                              (local_20,L"No Privilege",L"GFxMainAndPauseBaseMenu",
                               L"BackOutOfEchoNetPrivilegeLostDialogCaption");
            FUN_1410f3960(uVar5,uVar7,local_68,local_78,1,0,2);
            plVar9 = local_60;
            if (local_18 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_18 + 1;
              lVar6 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
                (**(code **)*local_18)(local_18);
                LOCK();
                piVar2 = (int *)((longlong)local_18 + 0xc);
                iVar3 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar9 = local_60;
                if (iVar3 == 1) {
                  (**(code **)(*local_18 + 8))(local_18,1);
                  plVar9 = local_60;
                }
              }
            }
          }
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar9 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
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
      }
    }
  }
  return;
}



// FUNCTION 141105fc0 FUN_141105fc0 body=359 status=ok
// SIG undefined FUN_141105fc0(void)

void FUN_141105fc0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x8a8) = 0;
  if (*(int *)(param_1 + 0x8ac) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x8a0,0);
  }
  if (*(longlong *)(param_1 + 0x980) != 0) {
    FUN_142ecffe0();
    *(undefined1 *)(*(longlong *)(param_1 + 0x980) + 0x269) = 1;
  }
  *(undefined8 *)(param_1 + 0x8b0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x8b8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x8c0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x8c8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x8d0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x8d8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x8e0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x8e8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x8f0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x8f8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x900) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x908) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x910) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x918) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x920) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x928) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x930) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x938) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x940) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x948) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x950) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x958) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x960) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x968) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x970) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x978) = 0xffffffffffffffff;
  return;
}



// FUNCTION 141106130 FUN_141106130 body=388 status=ok
// SIG undefined FUN_141106130(void)

void FUN_141106130(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  
  FUN_1422235f0();
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar2 != 0) {
    lVar4 = *(longlong *)(lVar2 + 400);
    if (lVar4 != 0) {
      lVar3 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        TBaseMulticastDelegate<void>::Remove(lVar4 + 0xbb0,param_1[0xbb]);
        TBaseMulticastDelegate<void>::Remove(lVar4 + 0xbc8,param_1[0xba]);
        param_1[0xba] = 0;
        lVar4 = FUN_140bba5e0(lVar4);
        if (lVar4 != 0) {
          TBaseMulticastDelegate<void>::Remove(lVar4 + 0xf8,param_1[0xbc]);
        }
      }
    }
    lVar2 = UWorld::GetGameState<APVPGameState>(lVar2);
    if (lVar2 != 0) {
      lVar4 = param_1[0xbd];
      iVar6 = 0;
      if (0 < *(int *)(lVar2 + 0x648)) {
        lVar3 = 0;
        do {
          plVar7 = (longlong *)(*(longlong *)(lVar2 + 0x640) + lVar3);
          if ((((int)plVar7[1] != 0) && (plVar5 = (longlong *)*plVar7, plVar5 != (longlong *)0x0))
             && (plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res8),
                *plVar5 == lVar4)) {
            if (((int)plVar7[1] != 0) && (plVar5 = (longlong *)*plVar7, plVar5 != (longlong *)0x0))
            {
              (**(code **)(*plVar5 + 0x28))(plVar5,0);
              if (*plVar7 != 0) {
                lVar4 = FMemory::Realloc(*plVar7,0,0);
                *plVar7 = lVar4;
              }
              *(undefined4 *)(plVar7 + 1) = 0;
            }
            break;
          }
          iVar6 = iVar6 + 1;
          lVar3 = lVar3 + 0x10;
        } while (iVar6 < *(int *)(lVar2 + 0x648));
      }
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(lVar2 + 0x640),0);
    }
  }
  return;
}



// FUNCTION 1411062c0 FUN_1411062c0 body=118 status=ok
// SIG undefined FUN_1411062c0(void)

void FUN_1411062c0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142223710();
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar2 = *(longlong *)(lVar2 + 0x140);
  if (lVar2 != 0) {
    lVar3 = AOfflineGameMode::GetPrivateStaticClass();
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
      FUN_140c26770(lVar2,param_1);
    }
  }
  return;
}



// FUNCTION 141106340 FUN_141106340 body=252 status=ok
// SIG undefined FUN_141106340(void)

void FUN_141106340(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  local_res8[0] = (undefined1)param_1[0xb8];
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x8b,local_res8);
  FUN_142223710(param_1);
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar2 = *(longlong *)(lVar2 + 0x140);
  if (lVar2 != 0) {
    lVar3 = AOfflineGameMode::GetPrivateStaticClass();
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
      FUN_140c267e0(lVar2,param_1);
    }
  }
  lVar2 = FUN_1422312c0(param_1);
  if (lVar2 != 0) {
    lVar3 = FUN_14141f270();
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
      FUN_140bec3e0(lVar2,0);
      FUN_1410f6d70(lVar2 + 0xcd0,local_res8,param_1,FUN_14111da30);
    }
  }
  return;
}



// FUNCTION 141106440 FUN_141106440 body=249 status=ok
// SIG undefined FUN_141106440(void)

void FUN_141106440(longlong param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  longlong local_res10;
  undefined1 local_28 [8];
  longlong local_20;
  
  FUN_140acba80();
  if (*(longlong *)(param_1 + 0x5e0) != 0) {
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnUsedBy",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res10,pwVar3 + 2,1);
    lVar1 = *(longlong *)(param_1 + 0x5e0);
    FWeakObjectPtr::operator=(local_28,0);
    local_20 = 0;
    FWeakObjectPtr::operator=(local_28,param_1);
    local_20 = local_res10;
    if ((local_res10 != 0) && (lVar5 = FWeakObjectPtr::Get(local_28), lVar5 != 0)) {
      UObject::FindFunction(lVar5,local_20);
    }
    FUN_1406a5aa0(lVar1 + 0x318,local_28);
  }
  return;
}



// FUNCTION 141106540 Broadcast body=164 status=ok
// SIG undefined Broadcast(void)

void TBaseMulticastDelegate<void,float>::Broadcast(longlong *param_1,undefined4 param_2)

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
LAB_1411065a0:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
        if (cVar3 == '\0') goto LAB_1411065a0;
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



// FUNCTION 1411065f0 FUN_1411065f0 body=516 status=ok
// SIG undefined FUN_1411065f0(void)

void FUN_1411065f0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong local_28;
  ulonglong local_20;
  
  if (*(longlong *)(param_1 + 0x6b0) != 0) {
    FUN_142ecffe0();
    uVar7 = 0;
    uVar8 = uVar7;
    uVar10 = uVar7;
    if (0 < *(int *)(param_1 + 0x6d0)) {
      do {
        local_28 = 0;
        local_20 = 9;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
        FGenericPlatformString::Memcpy(local_28,L"ListItem",0x12);
        uVar6 = *(undefined8 *)(param_1 + 0x6b0);
        uVar3 = URemnantGameInstance::GetPrivateStaticClass();
        uVar4 = FUN_142ebcee0(uVar6,&local_28,uVar3,0);
        if (uVar4 == 0) {
LAB_1411066ce:
          uVar4 = uVar7;
        }
        else {
          lVar5 = URemnantGameInstance::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(uVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(uVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_1411066ce;
        }
        if (local_28 != 0) {
          FMemory::Free();
        }
        if (uVar4 != 0) {
          FUN_142ed3c20(uVar4,*(char *)(*(longlong *)(param_1 + 0x6c8) + 8 + uVar8) != '\0',1);
          lVar5 = (longlong)(int)uVar10 * 0xc;
          cVar2 = FWeakObjectPtr::IsValid(lVar5 + *(longlong *)(param_1 + 0x6c8));
          if (cVar2 == '\0') {
            lVar5 = FUN_1404b03b0();
          }
          else {
            lVar5 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x6c8) + lVar5);
            lVar5 = lVar5 + 0x30;
          }
          FUN_142ed3af0(uVar4,lVar5,0);
          FUN_142ed3eb0(uVar4);
        }
        uVar9 = (int)uVar10 + 1;
        uVar8 = uVar8 + 0xc;
        uVar10 = (ulonglong)uVar9;
      } while ((int)uVar9 < *(int *)(param_1 + 0x6d0));
    }
    lVar5 = *(longlong *)(param_1 + 0x6b0);
    local_28 = lVar5;
    if (lVar5 != 0) {
      uVar6 = UBlendableInterface::GetPrivateStaticClass();
      uVar7 = UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar6);
    }
    local_20 = uVar7;
    FUN_142ed36d0(param_1,&local_28,0);
    (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x2b8))(*(longlong **)(param_1 + 0x6b0),0,1,0);
  }
  FUN_141133c10(param_1,*(undefined4 *)(param_1 + 0x6d8),*(undefined4 *)(param_1 + 0x6d0));
  return;
}



// FUNCTION 141106800 FUN_141106800 body=1367 status=ok
// SIG undefined FUN_141106800(void)

void FUN_141106800(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  uint uVar17;
  ulonglong uVar18;
  byte bVar19;
  longlong *plVar20;
  undefined1 local_res10 [8];
  longlong local_res18;
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  ulonglong uVar16;
  
  uVar7 = (**(code **)(*param_1 + 0x148))();
  lVar8 = FUN_142f6caf0(uVar7);
  if (lVar8 == 0) {
    return;
  }
  if (param_1[0xd5] == 0) {
    return;
  }
  local_res18 = lVar8;
  FUN_142ecffe0();
  lVar9 = FUN_14110ce00();
  if (lVar9 == 0) {
    return;
  }
  uVar12 = 0;
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  FUN_1404ccea0(lVar9,&local_d8);
  lVar9 = (longlong)(int)local_d0;
  iVar6 = 0;
  if ((int)local_d0 == 0) goto LAB_1411069d0;
  lVar8 = *local_d8;
  iVar6 = FUN_1404cfc20(lVar8);
  uVar16 = uVar12;
  uVar18 = uVar12;
  if ((iVar6 == 0) || (lVar8 == 0)) {
LAB_141106900:
    bVar19 = 0;
  }
  else {
    lVar10 = FUN_141304350();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_141106900;
    bVar19 = 1;
  }
  do {
    uVar14 = (uint)uVar16;
    uVar15 = uVar14;
    do {
      uVar12 = uVar12 + 1;
      uVar15 = uVar15 + 1;
      if (lVar9 <= (longlong)uVar12) break;
      lVar8 = local_d8[uVar12];
      iVar6 = FUN_1404cfc20(lVar8);
      if ((iVar6 == 0) || (lVar8 == 0)) {
LAB_141106973:
        bVar5 = 0;
      }
      else {
        lVar10 = FUN_141304350();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_141106973;
        bVar5 = 1;
      }
    } while (bVar19 == bVar5);
    if (bVar19 != 0) {
      uVar17 = (uint)uVar18;
      if (uVar17 != uVar14) {
        _guard_xfg_dispatch_icall_nop
                  (local_d8 + (int)uVar17,local_d8 + (int)uVar14,
                   (longlong)(int)(uVar15 - uVar14) << 3);
      }
      uVar18 = (ulonglong)(uVar17 + (uVar15 - uVar14));
    }
    bVar19 = bVar19 ^ 1;
    iVar6 = (int)uVar18;
    uVar16 = (ulonglong)uVar15;
  } while ((longlong)uVar12 < lVar9);
  local_d0 = CONCAT44(local_d0._4_4_,iVar6);
  lVar8 = local_res18;
LAB_1411069d0:
  FUN_1410f8900(local_d8,(longlong)iVar6,(ulonglong)param_1 & 0xff,local_res10);
  plVar3 = local_d8 + (int)local_d0;
  for (plVar20 = local_d8; plVar20 != plVar3; plVar20 = plVar20 + 1) {
    lVar9 = *plVar20;
    iVar6 = FUN_142eb7440(param_1[0xd5]);
    if (7 < iVar6) break;
    if (lVar9 != 0) {
      lVar10 = FUN_141304350();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (0 < *(int *)(lVar9 + 0x220))) {
        local_c8 = 0;
        local_c0 = 10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
        FGenericPlatformString::Memcpy(local_c8,L"DLCButton",0x14);
        lVar10 = param_1[0xd5];
        local_res18 = UMobBaseAnim::GetPrivateStaticClass();
        lVar10 = FUN_142ebcee0(lVar10,&local_c8,local_res18,0);
        if (lVar10 == 0) {
LAB_141106af5:
          lVar10 = 0;
        }
        else {
          lVar11 = UMobBaseAnim::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_141106af5;
        }
        if (local_c8 != 0) {
          FMemory::Free();
        }
        if ((lVar10 != 0) && (iVar6 = FUN_14110f010(lVar8,lVar9), iVar6 != 0)) {
          *(bool *)(lVar10 + 0x310) = iVar6 == 1;
          *(undefined4 *)(lVar10 + 0x330) = *(undefined4 *)(lVar9 + 0xa8);
          *(undefined4 *)(lVar10 + 0x334) = *(undefined4 *)(lVar9 + 0xac);
          *(undefined4 *)(lVar10 + 0x338) = *(undefined4 *)(lVar9 + 0xb0);
          local_b8 = *(undefined8 *)(lVar9 + 0xb8);
          FString::FString(local_b0,lVar9 + 0xc0);
          FSoftObjectPath::operator=(lVar10 + 0x340,&local_b8);
          if (iVar6 == 1) {
            FText::operator=(lVar10 + 0x318,lVar9 + 0xd0);
          }
          else {
            if (iVar6 == 2) {
              uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                (local_58,
                                 L"[red]This content already has progress for the current character and cannot be restarted[/red]"
                                 ,L"GFxNewDLCMenu");
              FText::operator=(lVar10 + 0x318,uVar7);
              plVar13 = local_50;
            }
            else if (iVar6 == 3) {
              uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                (local_70,
                                 L"[red]The main story must be progressed further before this content can be accessed[/red]"
                                 ,L"GFxNewDLCMenu");
              FText::operator=(lVar10 + 0x318,uVar7);
              plVar13 = local_68;
            }
            else if (iVar6 == 4) {
              uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                (local_88,L"[red]This content is not installed[/red]",
                                 L"GFxNewDLCMenu");
              FText::operator=(lVar10 + 0x318,uVar7);
              plVar13 = local_80;
            }
            else {
              if (iVar6 != 5) goto LAB_141106cbf;
              uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                                (local_a0,L"[red]This content is not licensed for use[/red]",
                                 L"GFxNewDLCMenu");
              FText::operator=(lVar10 + 0x318,uVar7);
              plVar13 = local_98;
            }
            if (plVar13 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar13 + 1;
              lVar11 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plVar13)(plVar13);
                LOCK();
                piVar2 = (int *)((longlong)plVar13 + 0xc);
                iVar6 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar13 + 8))(plVar13,1);
                }
              }
            }
          }
LAB_141106cbf:
          if (*(longlong **)(lVar10 + 0x248) != (longlong *)0x0) {
            lVar11 = **(longlong **)(lVar10 + 0x248);
            uVar7 = FUN_14110e110(lVar9);
            (**(code **)(lVar11 + 0x2b0))(*(undefined8 *)(lVar10 + 0x248),uVar7,1);
          }
          FUN_142ed3c20(lVar10,*(char *)(lVar10 + 0x310) == '\0',1);
        }
      }
    }
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  return;
}



// FUNCTION 141106d60 FUN_141106d60 body=1203 status=ok
// SIG undefined FUN_141106d60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141106fe4) */

void FUN_141106d60(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  wchar_t *pwVar7;
  void *_Src;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  void *pvVar15;
  wchar_t *_Source;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_164;
  wchar_t *local_160;
  int local_158;
  undefined4 local_154;
  void *local_150;
  ulonglong local_148;
  longlong local_140;
  longlong *local_138;
  longlong local_130;
  longlong *local_128;
  longlong local_120;
  longlong *plStack_118;
  longlong local_110 [2];
  void *local_100;
  int local_f8;
  undefined4 local_f4;
  longlong *local_e8;
  longlong local_e0;
  longlong *local_d8;
  wchar_t *local_d0;
  int local_c8;
  undefined4 *local_c0;
  longlong lStack_b8;
  longlong *local_b0;
  undefined4 *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78 [7];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_140 = 0;
  local_168 = 0;
  lVar14 = *(longlong *)(param_1 + 0x750);
  if (lVar14 == 0) {
    plVar11 = &local_120;
    local_120 = 0;
    plStack_118 = (longlong *)0x0;
    bVar6 = false;
    bVar5 = true;
  }
  else {
    local_140 = *(longlong *)(lVar14 + 0x170);
    local_128 = *(longlong **)(lVar14 + 0x178);
    if (local_128 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_128 + 1) = (int)local_128[1] + 1;
      UNLOCK();
    }
    plVar11 = &local_130;
    bVar6 = true;
    bVar5 = false;
    local_130 = local_140;
  }
  local_138 = (longlong *)plVar11[1];
  plVar11[1] = 0;
  *plVar11 = 0;
  plVar11 = plStack_118;
  if ((bVar5) && (plStack_118 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_118 + 1;
    lVar14 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plStack_118)(plStack_118);
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      iVar12 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plStack_118 + 8))(plStack_118,1);
      }
    }
  }
  plVar11 = local_128;
  if ((bVar6) && (local_128 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_128 + 1;
    lVar14 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_128)(local_128);
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      iVar12 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_128 + 8))(local_128,1);
      }
    }
  }
  if (local_140 != 0) {
    local_110[0] = 0;
    local_110[1] = 0;
    local_168 = 2;
    local_150 = (void *)0x0;
    local_148 = 3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_150,0);
    _Src = local_150;
    FGenericPlatformString::Memcpy(local_150,&DAT_1446b0994,6);
    local_e8 = &local_140;
    local_164 = 0x72;
    local_c0 = &local_164;
    local_b0 = &local_140;
    puStack_a8 = &local_168;
    local_a0 = &local_e8;
    uStack_98 = local_110;
    local_90 = &local_e0;
    uStack_88 = local_78;
    local_40 = (longlong *)0x0;
    local_e0 = param_1;
    lStack_b8 = param_1;
    local_40 = (longlong *)operator_new(0x48);
    *local_40 = (longlong)&PTR__Copy_1446ba048;
    local_40[1] = (longlong)local_c0;
    local_40[2] = lStack_b8;
    local_40[3] = (longlong)local_b0;
    local_40[4] = (longlong)puStack_a8;
    *(undefined4 *)(local_40 + 5) = (undefined4)local_a0;
    *(undefined4 *)((longlong)local_40 + 0x2c) = local_a0._4_4_;
    *(undefined4 *)(local_40 + 6) = (undefined4)uStack_98;
    *(undefined4 *)((longlong)local_40 + 0x34) = uStack_98._4_4_;
    *(undefined4 *)(local_40 + 7) = (undefined4)local_90;
    *(undefined4 *)((longlong)local_40 + 0x3c) = local_90._4_4_;
    *(undefined4 *)(local_40 + 8) = (undefined4)uStack_88;
    *(undefined4 *)((longlong)local_40 + 0x44) = uStack_88._4_4_;
    plVar11 = *(longlong **)(param_1 + 0x750);
    lVar14 = *plVar11;
    uVar10 = FText::ToString(param_1 + 0x6c0);
    (**(code **)(lVar14 + 0x2a8))(plVar11,uVar10,1,0);
    local_d8 = &local_140;
    FUN_1410fddb0(&local_d8,&local_d0);
    uVar1 = local_c8 - 1;
    uVar13 = local_c8 - 1;
    if (local_c8 == 0) {
      uVar13 = 0;
      uVar1 = 0;
    }
    if (uVar1 < uVar13) {
      uVar13 = uVar1;
    }
    _Source = L"";
    if (local_c8 != 0) {
      _Source = local_d0;
    }
    local_160 = (wchar_t *)0x0;
    local_154 = 0;
    local_158 = uVar13 + 1;
    if (uVar13 == 0) {
      local_158 = 0;
    }
    if ((0 < local_158) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_160,0), pwVar7 = local_160,
       0 < local_158)) {
      wcsncpy(local_160,_Source,(longlong)(int)uVar13);
      pwVar7[(int)uVar13] = L'\0';
    }
    pvVar15 = (void *)0x0;
    if (local_40 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::_guard_xfg_dispatch_icall_nop();
    }
    (**(code **)(*local_40 + 0x10))(local_40,&local_160);
    if (local_160 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    lVar14 = (longlong)(int)local_148;
    *(int *)(param_1 + 0x698) = *(int *)(param_1 + 0x698) + 1;
    local_100 = (void *)0x0;
    local_f8 = (int)local_148;
    if ((int)local_148 == 0) {
      local_f4 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_100,local_148 & 0xffffffff,0);
      pvVar15 = local_100;
      _guard_xfg_dispatch_icall_nop(local_100,_Src,lVar14 * 2);
    }
    uVar9 = local_f4;
    iVar8 = local_f8;
    iVar12 = *(int *)(param_1 + 0x6a8);
    lVar14 = (longlong)iVar12;
    *(int *)(param_1 + 0x6a8) = iVar12 + 1;
    if (*(int *)(param_1 + 0x6ac) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x6a0,iVar12);
    }
    lVar4 = *(longlong *)(param_1 + 0x6a0);
    *(void **)(lVar4 + lVar14 * 0x18) = pvVar15;
    *(undefined4 *)(lVar4 + 0xc + lVar14 * 0x18) = uVar9;
    *(int *)(lVar4 + 8 + lVar14 * 0x18) = iVar8;
    *(undefined8 *)(lVar4 + 0x10 + lVar14 * 0x18) = 1;
    if (local_d0 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x20))
                (local_40,CONCAT71((int7)((ulonglong)local_78 >> 8),local_40 != local_78));
      local_40 = (longlong *)0x0;
    }
    if (local_150 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_110[0] != 0) {
      FMemory::Free();
    }
  }
  plVar11 = local_138;
  iVar12 = 1;
  if (1 < *(int *)(param_1 + 0x6a8)) {
    lVar14 = 0x18;
    do {
      lVar4 = *(longlong *)(param_1 + 0x6a0);
      lVar14 = lVar14 + 0x18;
      iVar12 = iVar12 + 1;
      *(int *)(lVar4 + -4 + lVar14) =
           *(int *)(lVar4 + -0x20 + lVar14) + *(int *)(lVar4 + -0x1c + lVar14);
    } while (iVar12 < *(int *)(param_1 + 0x6a8));
  }
  if (local_138 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_138 + 1;
    lVar14 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_138)(local_138);
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      iVar12 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  return;
}



// FUNCTION 141107260 FUN_141107260 body=32 status=ok
// SIG undefined FUN_141107260(void)

undefined8 FUN_141107260(undefined8 param_1,undefined8 param_2)

{
  FUN_1410fcef0(param_2,param_1);
  return param_1;
}



// FUNCTION 1411072d0 FUN_1411072d0 body=32 status=ok
// SIG undefined FUN_1411072d0(void)

undefined8 FUN_1411072d0(undefined8 param_1,undefined8 param_2)

{
  FUN_1410fe250(param_2,param_1);
  return param_1;
}



// FUNCTION 141107330 FUN_141107330 body=32 status=ok
// SIG undefined FUN_141107330(void)

undefined8 FUN_141107330(undefined8 param_1,undefined8 param_2)

{
  FUN_1410fed50(param_2,param_1);
  return param_1;
}



// FUNCTION 141107370 FUN_141107370 body=90 status=ok
// SIG undefined FUN_141107370(void)

void FUN_141107370(undefined4 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_1416f8720(*param_1);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1416f8720(*param_1);
    (**(code **)(*plVar2 + 0x278))(plVar2,0);
  }
  lVar1 = FUN_1416f8720(param_1[1]);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1416f8720(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x0001411073bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x278))(plVar2,0);
    return;
  }
  return;
}



// FUNCTION 141107450 FUN_141107450 body=110 status=ok
// SIG undefined FUN_141107450(void)

void FUN_141107450(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*(longlong *)*param_1 + 0x148))();
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    lVar1 = *param_1;
    FUN_142880530(uVar2,lVar1 + 0x6d8);
    *(undefined8 *)(lVar1 + 0x6d8) = 0;
  }
  TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound(*param_1 + 0x680);
  return;
}



// FUNCTION 1411074c0 FUN_1411074c0 body=38 status=ok
// SIG undefined FUN_1411074c0(void)

void FUN_1411074c0(longlong *param_1)

{
  undefined1 local_res8 [32];
  
  local_res8[0] = 0xd;
  FUN_141136250(*param_1,local_res8,*param_1 + 0x770,(int)param_1[1]);
  return;
}



// FUNCTION 1411074f0 FUN_1411074f0 body=58 status=ok
// SIG undefined FUN_1411074f0(void)

undefined1 FUN_1411074f0(undefined8 *param_1)

{
  char cVar1;
  
  cVar1 = FOutputDevice::CanBeUsedOnAnyThread();
  if (cVar1 != '\0') {
    cVar1 = FUN_140bc2da0(*param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_140bafb20(*param_1);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 141107540 FUN_141107540 body=38 status=ok
// SIG undefined FUN_141107540(void)

void FUN_141107540(longlong *param_1)

{
  undefined1 local_res8 [32];
  
  local_res8[0] = 0xb;
  FUN_141136250(*param_1,local_res8,*param_1 + 0x6d0,(int)param_1[2]);
  return;
}



// FUNCTION 141107580 FUN_141107580 body=87 status=ok
// SIG undefined FUN_141107580(void)

void FUN_141107580(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *param_3;
  if (lVar1 != 0) {
    lVar3 = FUN_14138d860();
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
      FUN_140f3bde0(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1411075f0 FUN_1411075f0 body=52 status=ok
// SIG undefined FUN_1411075f0(void)

void FUN_1411075f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x30));
  if (lVar1 != 0) {
    uVar2 = FUN_1416f8720(*(undefined4 *)(param_1 + 0x30));
    FUN_141081280(uVar2,param_1);
    return;
  }
  return;
}



// FUNCTION 141107720 FUN_141107720 body=84 status=ok
// SIG undefined FUN_141107720(void)

undefined8 * FUN_141107720(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FWeakObjectPtr::IsValid(param_2);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(param_2);
    FUN_142dcf3a0(uVar2,param_1);
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 141107790 FUN_141107790 body=106 status=ok
// SIG undefined FUN_141107790(void)

void FUN_141107790(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*(longlong *)*param_1 + 0x148))();
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    lVar1 = *param_1;
    FUN_142880530(uVar2,lVar1 + 0x6e0);
    *(undefined8 *)(lVar1 + 0x6e0) = 0;
  }
  *(undefined1 *)(*param_1 + 0x6d0) = 1;
  return;
}



// FUNCTION 141107840 FUN_141107840 body=267 status=ok
// SIG undefined FUN_141107840(void)

void FUN_141107840(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong local_res8;
  
  param_1 = param_1 + 0x59c;
  cVar2 = FWeakObjectPtr::IsValid(param_1);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(param_1);
    iVar7 = 0;
    iVar1 = *(int *)(lVar3 + 0x48);
    if (0 < iVar1) {
      lVar3 = 0;
      do {
        lVar4 = FWeakObjectPtr::Get(param_1);
        if ((((-1 < lVar3) && (iVar7 < *(int *)(lVar4 + 0x48))) &&
            (plVar6 = *(longlong **)(*(longlong *)(lVar4 + 0x40) + lVar3 * 8),
            plVar6 != (longlong *)0x0)) && (lVar4 = (**(code **)(*plVar6 + 0x278))(), lVar4 != 0)) {
          uVar5 = UGameplayTagAssetInterface::GetPrivateStaticClass();
          lVar4 = UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar5);
          if (lVar4 != 0) {
            local_res8 = lVar4;
            if (*(int *)(param_2 + 8) == 0) {
LAB_141107902:
              uVar5 = 0;
            }
            else {
              plVar6 = (longlong *)param_2[6];
              if ((longlong *)param_2[6] == (longlong *)0x0) {
                plVar6 = param_2 + 2;
              }
              if (plVar6 == (longlong *)0x0) goto LAB_141107902;
              uVar5 = (**(code **)(*plVar6 + 8))();
            }
            (*(code *)*param_2)(uVar5,&local_res8);
            lVar4 = FWeakObjectPtr::Get(param_1);
            if (iVar1 != *(int *)(lVar4 + 0x48)) {
              return;
            }
          }
        }
        iVar7 = iVar7 + 1;
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar1);
    }
  }
  return;
}



// FUNCTION 141107950 FUN_141107950 body=104 status=ok
// SIG undefined FUN_141107950(void)

undefined8 FUN_141107950(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar3 != 0) {
    lVar4 = FUN_14141f270();
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
      cVar2 = FUN_140bca8a0(lVar3);
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1411079c0 FUN_1411079c0 body=158 status=ok
// SIG undefined FUN_1411079c0(void)

bool FUN_1411079c0(longlong param_1,ulonglong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  cVar1 = *(char *)(param_1 + 0x778);
  if ((byte)(cVar1 - 1U) < 2) {
    lVar4 = 0x818;
  }
  else if (cVar1 == '\x04') {
    lVar4 = 0x9b8;
  }
  else {
    if (cVar1 != '\x03') {
      return false;
    }
    lVar4 = 0x8e8;
  }
  param_1 = param_1 + lVar4;
  if (param_1 == 0) {
    return false;
  }
  lVar4 = param_1 + 8;
  if ((char)param_2 != '\0') {
    iVar2 = *(int *)(param_1 + 0x5c);
    iVar3 = *(int *)(param_1 + 0x90);
    if (0 < iVar2) {
      iVar5 = iVar3 - iVar2;
      iVar3 = iVar5 / iVar2;
      param_2 = (longlong)iVar5 % (longlong)iVar2 & 0xffffffff;
    }
    iVar2 = FUN_14103af20(lVar4,param_2);
    iVar5 = FUN_1410393f0(lVar4);
    return iVar3 + iVar2 < iVar5;
  }
  iVar2 = FUN_14103af20(lVar4);
  return 0 < iVar2;
}



// FUNCTION 141107a60 FUN_141107a60 body=48 status=ok
// SIG undefined FUN_141107a60(void)

undefined1 FUN_141107a60(longlong param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x70b) == '\x01') && (*(longlong *)(param_1 + 0x6f8) != 0)) {
    cVar1 = FUN_1411d56a0();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141107a90 FUN_141107a90 body=296 status=ok
// SIG undefined FUN_141107a90(void)

undefined8 FUN_141107a90(longlong param_1)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  int iVar5;
  undefined1 local_118 [220];
  undefined1 local_3c [52];
  
  cVar1 = *(char *)(param_1 + 0x778);
  if ((byte)(cVar1 - 1U) < 2) {
    pcVar4 = (char *)(param_1 + 0x818);
LAB_141107ae2:
    cVar2 = *pcVar4;
    iVar5 = *(int *)(pcVar4 + 100);
  }
  else {
    if (cVar1 == '\x04') {
      pcVar4 = (char *)(param_1 + 0x9b8);
      goto LAB_141107ae2;
    }
    if (cVar1 == '\x03') {
      pcVar4 = (char *)(param_1 + 0x8e8);
      goto LAB_141107ae2;
    }
    cVar2 = '\0';
    iVar5 = -1;
    pcVar4 = (char *)0x0;
  }
  if (cVar2 == '\x01') {
    if (cVar1 == '\x02') goto LAB_141107b01;
    if (cVar1 != '\x01') goto LAB_141107b1b;
LAB_141107b0f:
    lVar3 = param_1 + 0x77c;
  }
  else {
    if (cVar2 == '\x02') goto LAB_141107b0f;
    if (cVar2 != '\x03') goto LAB_141107b1b;
LAB_141107b01:
    lVar3 = param_1 + 0x784;
  }
  FWeakObjectPtr::Get(lVar3);
LAB_141107b1b:
  if (((pcVar4 == (char *)0x0) || (iVar5 < 0)) || (*(int *)(pcVar4 + 0xc0) <= iVar5)) {
    _guard_xfg_dispatch_icall_nop(local_118,0,0x110);
    FUN_140ed0240(local_118);
  }
  else {
    FUN_140e9a4f0(local_118,(longlong)iVar5 * 0x110 + *(longlong *)(pcVar4 + 0xb8));
  }
  lVar3 = FWeakObjectPtr::Get(local_3c);
  FUN_140e9c360(local_118);
  if (((byte)(*(char *)(param_1 + 0x778) - 1U) < 2) && (lVar3 != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 141107bc0 FUN_141107bc0 body=392 status=ok
// SIG undefined FUN_141107bc0(void)

uint FUN_141107bc0(longlong param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  undefined1 local_118 [152];
  undefined1 local_80 [68];
  undefined1 local_3c [52];
  
  bVar1 = *(byte *)(param_1 + 0x778);
  if ((byte)(bVar1 - 1) < 2) {
    pbVar8 = (byte *)(param_1 + 0x818);
LAB_141107c11:
    uVar3 = (uint)*pbVar8;
    iVar9 = *(int *)(pbVar8 + 100);
  }
  else {
    if (bVar1 == 4) {
      pbVar8 = (byte *)(param_1 + 0x9b8);
      goto LAB_141107c11;
    }
    if (bVar1 == 3) {
      pbVar8 = (byte *)(param_1 + 0x8e8);
      goto LAB_141107c11;
    }
    uVar3 = bVar1 - 1 & 0xffffff00;
    iVar9 = -1;
    pbVar8 = (byte *)0x0;
  }
  uVar7 = uVar3 & 0xff;
  if (uVar7 == 1) {
    if (bVar1 != 2) {
      if (bVar1 != 1) goto LAB_141107d29;
      goto LAB_141107c51;
    }
    lVar4 = 0x784;
  }
  else if (uVar7 == 2) {
LAB_141107c51:
    lVar4 = 0x77c;
  }
  else {
    if (uVar7 != 3) goto LAB_141107d29;
    lVar4 = 0x784;
  }
  plVar5 = (longlong *)FWeakObjectPtr::Get(param_1 + lVar4);
  uVar3 = 0;
  if (plVar5 != (longlong *)0x0) {
    if (((pbVar8 == (byte *)0x0) || (iVar9 < 0)) || (*(int *)(pbVar8 + 0xc0) <= iVar9)) {
      _guard_xfg_dispatch_icall_nop(local_118,0,0x110);
      FUN_140ed0240(local_118);
    }
    else {
      FUN_140e9a4f0(local_118,(longlong)iVar9 * 0x110 + *(longlong *)(pbVar8 + 0xb8));
    }
    lVar4 = FWeakObjectPtr::Get(local_3c);
    if (((lVar4 != 0) && (cVar2 = (**(code **)(*plVar5 + 0x480))(plVar5,local_80), cVar2 != '\0'))
       && (cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x77c), cVar2 != '\0')) {
      uVar6 = FWeakObjectPtr::Get(param_1 + 0x77c);
      cVar2 = FUN_143003580(uVar6);
      if (cVar2 == '\0') {
        FUN_140e9c360(local_118);
        return 1;
      }
    }
    FUN_140e9c360(local_118);
    return 0;
  }
LAB_141107d29:
  return uVar3 & 0xffffff00;
}



// FUNCTION 141107d50 FUN_141107d50 body=172 status=ok
// SIG undefined FUN_141107d50(void)

undefined1 FUN_141107d50(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 local_118 [220];
  undefined1 local_3c [52];
  
  cVar1 = *(char *)(param_1 + 0x778);
  if ((byte)(cVar1 - 1U) < 2) {
    param_1 = param_1 + 0x818;
LAB_141107d8a:
    iVar2 = *(int *)(param_1 + 100);
    if (((param_1 != 0) && (-1 < iVar2)) && (iVar2 < *(int *)(param_1 + 0xc0))) {
      FUN_140e9a4f0(local_118,(longlong)iVar2 * 0x110 + *(longlong *)(param_1 + 0xb8));
      goto LAB_141107dd6;
    }
  }
  else {
    if (cVar1 == '\x04') {
      param_1 = param_1 + 0x9b8;
      goto LAB_141107d8a;
    }
    if (cVar1 == '\x03') {
      param_1 = param_1 + 0x8e8;
      goto LAB_141107d8a;
    }
  }
  _guard_xfg_dispatch_icall_nop(local_118,0,0x110);
  FUN_140ed0240(local_118);
LAB_141107dd6:
  uVar3 = FWeakObjectPtr::IsValid(local_3c);
  FUN_140e9c360(local_118);
  return uVar3;
}



// FUNCTION 141107e00 FUN_141107e00 body=77 status=ok
// SIG undefined FUN_141107e00(void)

undefined8 FUN_141107e00(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  cVar1 = BuildSettings::IsPromotedBuild();
  if ((cVar1 != '\0') && (*(char *)((longlong)param_1 + 0x70b) == '\x01')) {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar3 = FUN_14110cbc0(uVar2);
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x5c0) == '\x04')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141107e50 FUN_141107e50 body=268 status=ok
// SIG undefined FUN_141107e50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_141107e50(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_178 [32];
  undefined2 local_158;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 *local_138 [2];
  undefined1 local_128 [32];
  undefined8 local_108;
  undefined4 local_f8;
  undefined1 local_e8 [208];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_108 = 0;
  local_f8 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_128);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = param_1;
    *puVar2 = &PTR_FUN_143f77b70;
  }
  local_148 = 0;
  local_138[0] = &LAB_1411072f0;
  local_140 = 0x2a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
  local_158 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_148,0x2a,"UGFxOakMainMenu::CanShowCharacterSelect()");
  FUN_1410b2c00(local_e8,&local_148,local_138);
  uVar3 = FUN_1410ca7e0(local_e8,local_138);
  FUN_14204c280(uVar3);
  uVar1 = FUN_1410cab50(local_e8);
  FUN_140ce1dc0(local_e8);
  return uVar1;
}



// FUNCTION 141107f60 FUN_141107f60 body=286 status=ok
// SIG undefined FUN_141107f60(void)

void FUN_141107f60(longlong param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  int iVar6;
  undefined1 local_118 [220];
  undefined1 local_3c [52];
  
  cVar1 = *(char *)(param_1 + 0x778);
  pcVar3 = (char *)0x0;
  if ((byte)(cVar1 - 1U) < 2) {
    pcVar5 = (char *)(param_1 + 0x818);
LAB_141107fb5:
    cVar2 = *pcVar5;
    iVar6 = *(int *)(pcVar5 + 100);
  }
  else {
    if (cVar1 == '\x04') {
      pcVar5 = (char *)(param_1 + 0x9b8);
      goto LAB_141107fb5;
    }
    if (cVar1 == '\x03') {
      pcVar5 = (char *)(param_1 + 0x8e8);
      goto LAB_141107fb5;
    }
    cVar2 = '\0';
    iVar6 = -1;
    pcVar5 = pcVar3;
  }
  if (cVar2 == '\x01') {
    if (cVar1 != '\x02') {
      if (cVar1 != '\x01') goto LAB_141107ffa;
      goto LAB_141107feb;
    }
    param_1 = param_1 + 0x784;
  }
  else if (cVar2 == '\x02') {
LAB_141107feb:
    param_1 = param_1 + 0x77c;
  }
  else {
    if (cVar2 != '\x03') goto LAB_141107ffa;
    param_1 = param_1 + 0x784;
  }
  pcVar3 = (char *)FWeakObjectPtr::Get(param_1);
LAB_141107ffa:
  if (((pcVar5 == (char *)0x0) || (iVar6 < 0)) || (*(int *)(pcVar5 + 0xc0) <= iVar6)) {
    _guard_xfg_dispatch_icall_nop(local_118,0,0x110);
    FUN_140ed0240(local_118);
  }
  else {
    FUN_140e9a4f0(local_118,(longlong)iVar6 * 0x110 + *(longlong *)(pcVar5 + 0xb8));
  }
  uVar4 = FWeakObjectPtr::Get(local_3c);
  FUN_140e9c360(local_118);
  FUN_1411d5660(uVar4,pcVar3);
  return;
}



// FUNCTION 141108080 FUN_141108080 body=345 status=ok
// SIG undefined FUN_141108080(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141108080(longlong param_1,byte param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  code *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  cVar1 = *(char *)(param_1 + 0x778);
  if ((byte)(cVar1 - 1U) < 2) {
    lVar4 = 0x818;
  }
  else if (cVar1 == '\x04') {
    lVar4 = 0x9b8;
  }
  else {
    if (cVar1 != '\x03') {
      return;
    }
    lVar4 = 0x8e8;
  }
  if (param_1 + lVar4 != 0) {
    lVar4 = param_1 + lVar4 + 8;
    iVar2 = FUN_14103af20(lVar4);
    FUN_14105a2d0(lVar4,(uint)param_2 * 2 + -1,1,0);
    iVar3 = FUN_14103af20(lVar4);
    if (iVar2 != iVar3) {
      local_48 = (longlong *)0x0;
      local_38 = 0;
      puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_68);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_FUN_143f3f130;
      }
      local_78[0] = FUN_141107580;
      FUN_141035f30(lVar4,local_78);
      if (local_38 != 0) {
        plVar6 = local_68;
        if (local_48 != (longlong *)0x0) {
          plVar6 = local_48;
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6,0);
        }
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    LOCK();
    *(undefined4 *)(param_1 + 0x588) = 1;
    UNLOCK();
    *(undefined4 *)(param_1 + 0xa94) = *(undefined4 *)(param_1 + 0x774);
    *(undefined1 *)(param_1 + 0x805) = 1;
  }
  return;
}



// FUNCTION 1411081e0 FUN_1411081e0 body=1444 status=ok
// SIG undefined FUN_1411081e0(void)

float * FUN_1411081e0(longlong param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_d8;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined1 local_b8 [176];
  
  fVar9 = DAT_1468b5d98;
  fVar8 = *param_3;
  local_d0 = param_3[2];
  fVar7 = param_3[1];
  fVar10 = fVar8 * fVar8 + fVar7 * fVar7;
  fVar3 = local_d0 * local_d0 + fVar10;
  if (fVar3 == 1.0) {
    local_d8 = *(undefined8 *)param_3;
    local_d0 = param_3[2];
    fVar2 = (float)((ulonglong)local_d8 >> 0x20);
    fVar3 = (float)local_d8;
  }
  else if (1e-08 <= fVar3) {
    auVar6 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
    fVar4 = auVar6._0_4_;
    fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
    fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
    fVar2 = fVar7 * fVar4;
    fVar3 = fVar8 * fVar4;
    local_d0 = local_d0 * fVar4;
    local_d8 = CONCAT44(fVar2,fVar3);
  }
  else {
    local_d8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    local_d0 = DAT_1468b5d98;
    fVar3 = DAT_1468b5d90;
    fVar2 = DAT_1468b5d94;
  }
  fVar4 = local_d0;
  if (((ABS(fVar3) <= 0.0001) && (ABS(fVar2) <= 0.0001)) && (ABS(local_d0) <= 0.0001))
  goto LAB_14110847d;
  if (fVar10 == 1.0) {
LAB_14110843e:
    local_c0 = 0.0;
    local_c8 = fVar8;
    local_c4 = fVar7;
  }
  else {
    local_c0 = DAT_1468b5d98;
    local_c8 = DAT_1468b5d90;
    local_c4 = DAT_1468b5d94;
    if (1e-08 <= fVar10) {
      auVar6 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      fVar5 = auVar6._0_4_;
      fVar5 = fVar5 + fVar5 * (0.5 - fVar10 * 0.5 * fVar5 * fVar5);
      fVar5 = fVar5 + fVar5 * (0.5 - fVar10 * 0.5 * fVar5 * fVar5);
      fVar8 = fVar8 * fVar5;
      fVar7 = fVar7 * fVar5;
      goto LAB_14110843e;
    }
  }
  if (((ABS(local_c8) <= 0.0001) && (ABS(local_c4) <= 0.0001)) && (ABS(local_c0) <= 0.0001)) {
LAB_14110847d:
    *(ulonglong *)param_2 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    param_2[2] = fVar9;
    return param_2;
  }
  fVar7 = local_c8 * fVar3 + local_c4 * fVar2 + local_c0 * local_d0;
  fVar8 = -1.0;
  if ((-1.0 <= fVar7) && (fVar8 = fVar7, 1.0 <= fVar7)) {
    fVar8 = 1.0;
  }
  fVar8 = _guard_xfg_dispatch_icall_nop(fVar8);
  fVar8 = fVar8 * 57.295776;
  if (fVar3 * (float)DAT_1464aa798 + DAT_1464aa798._4_4_ * fVar2 + fVar4 * DAT_1464aa7a0 < 0.0) {
    fVar8 = -fVar8;
  }
  fVar7 = *(float *)(param_1 + 0x47c);
  if (fVar8 <= fVar7) {
    if (*(float *)(param_1 + 0x480) <= fVar8) {
      *(undefined8 *)param_2 = local_d8;
      param_2[2] = local_d0;
      return param_2;
    }
    if (fVar8 <= fVar7) {
      fVar7 = *(float *)(param_1 + 0x480);
    }
  }
  fVar9 = DAT_1464aa7a0 * fVar2 - fVar4 * DAT_1464aa798._4_4_;
  fVar10 = fVar4 * (float)DAT_1464aa798 - fVar3 * DAT_1464aa7a0;
  local_d0 = fVar3 * DAT_1464aa798._4_4_ - (float)DAT_1464aa798 * fVar2;
  fVar8 = fVar10 * fVar10 + fVar9 * fVar9 + local_d0 * local_d0;
  if (fVar8 != 1.0) {
    if (fVar8 < 1e-08) {
      local_d8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      local_d0 = DAT_1468b5d98;
      goto LAB_141108651;
    }
    auVar6 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
    fVar3 = auVar6._0_4_;
    fVar3 = fVar3 + fVar3 * (0.5 - fVar8 * 0.5 * fVar3 * fVar3);
    fVar3 = fVar3 + fVar3 * (0.5 - fVar8 * 0.5 * fVar3 * fVar3);
    fVar9 = fVar9 * fVar3;
    fVar10 = fVar10 * fVar3;
    local_d0 = local_d0 * fVar3;
  }
  local_d8 = CONCAT44(fVar10,fVar9);
LAB_141108651:
  pfVar1 = (float *)FVector::RotateAngleAxis(&local_c8,local_b8,fVar7,&local_d8);
  fVar3 = DAT_1468b5d98;
  fVar8 = pfVar1[1];
  fVar7 = *pfVar1;
  fVar9 = pfVar1[2];
  fVar10 = fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9;
  if (fVar10 == 1.0) {
    fVar8 = pfVar1[2];
    *(undefined8 *)param_2 = *(undefined8 *)pfVar1;
    param_2[2] = fVar8;
    return param_2;
  }
  if (fVar10 < 1e-08) {
    *(ulonglong *)param_2 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    param_2[2] = fVar3;
    return param_2;
  }
  auVar6 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
  fVar3 = auVar6._0_4_;
  fVar3 = fVar3 + fVar3 * (0.5 - fVar10 * 0.5 * fVar3 * fVar3);
  fVar3 = fVar3 + fVar3 * (0.5 - fVar10 * 0.5 * fVar3 * fVar3);
  *param_2 = fVar7 * fVar3;
  param_2[1] = fVar8 * fVar3;
  param_2[2] = fVar9 * fVar3;
  return param_2;
}



// FUNCTION 141108790 FUN_141108790 body=44 status=ok
// SIG undefined FUN_141108790(void)

void FUN_141108790(undefined8 param_1)

{
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  FUN_142ed36d0(0,&local_18,0);
  FUN_142ed1500(param_1);
  return;
}



// FUNCTION 1411087c0 FUN_1411087c0 body=249 status=ok
// SIG undefined FUN_1411087c0(void)

void FUN_1411087c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_18;
  longlong *local_10;
  
  *(undefined4 *)(param_1 + 0x188) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x1ac)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1a0,0);
  }
  if (*(undefined2 **)(param_1 + 0x1a0) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x1a0) = 0;
  }
  *(undefined4 *)(param_1 + 400) = 0;
  plVar5 = (longlong *)(param_1 + 0x1b0);
  if (*plVar5 != 0) {
    FUN_142833de0();
    FUN_14283ef20(*plVar5);
    local_10 = (longlong *)0x0;
    if (plVar5 != &local_18) {
      *plVar5 = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1b8,&local_10);
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



// FUNCTION 1411088c0 FUN_1411088c0 body=190 status=ok
// SIG undefined FUN_1411088c0(void)

void FUN_1411088c0(longlong param_1,char param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  if ((((*(byte *)(param_1 + 0x5c8) & 1) == 0) && (*(char *)(param_1 + 0x5c0) == '\x04')) &&
     (lVar2 = FUN_1422312c0(), lVar2 != 0)) {
    lVar3 = FUN_14141f270();
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
      lVar2 = FUN_140bb8be0(lVar2,0);
      if ((lVar2 != 0) && (lVar3 = FUN_140e50ff0(lVar2), lVar3 != 0)) {
        *(byte *)(param_1 + 0x5c8) = *(byte *)(param_1 + 0x5c8) | 1;
        uVar4 = *(undefined4 *)(lVar3 + 0x138);
        if (param_2 != '\0') {
          uVar4 = 0;
        }
        FUN_140e59080(lVar2,1,uVar4);
      }
    }
  }
  return;
}



// FUNCTION 141108980 FUN_141108980 body=3241 status=ok
// SIG undefined FUN_141108980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141108980(longlong param_1)

{
  bool bVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  byte bVar14;
  undefined2 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined1 auStack_2e8 [32];
  uint local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8;
  longlong *local_2a8;
  longlong *local_2a0;
  longlong local_298;
  longlong local_290;
  undefined4 local_288;
  undefined2 local_284;
  undefined1 local_282;
  undefined8 local_280;
  undefined8 local_278;
  undefined2 *local_270;
  undefined8 local_268;
  longlong local_260;
  undefined8 local_258;
  longlong local_250;
  undefined8 local_248;
  longlong local_240;
  longlong local_238;
  undefined8 local_230;
  longlong local_228;
  longlong local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined1 local_208 [8];
  undefined1 local_200 [8];
  undefined1 local_1f8 [224];
  undefined1 local_118 [224];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  if (*(longlong *)(param_1 + 0xa28) == 0) {
    return;
  }
  lVar11 = param_1 + 0x868;
  local_220 = param_1;
  lVar3 = FWeakObjectPtr::Get(lVar11);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x870)) &&
       (local_2a8 = (longlong *)0x0, *(longlong *)(param_1 + 0x878) != 0)) {
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar11,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x870) = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(lVar11);
      if (lVar3 != 0) goto LAB_141108a40;
    }
LAB_141108a76:
    FUN_14282a800(local_118);
    FUN_14283c290(local_118,param_1 + 0x878,1,0);
    FUN_14282cc40(local_118);
  }
  else {
LAB_141108a40:
    lVar4 = FUN_141324ef0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_141108a76;
  }
  lVar3 = FWeakObjectPtr::Get(lVar11);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(param_1 + 0x870)) {
      return;
    }
    local_2a8 = (longlong *)0x0;
    if (*(longlong *)(param_1 + 0x878) == 0) {
      return;
    }
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar11,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x870) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(lVar11);
    if (lVar3 == 0) {
      return;
    }
  }
  lVar4 = FUN_141324ef0();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  lVar3 = FWeakObjectPtr::Get(lVar11);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x870)) &&
       (local_2a8 = (longlong *)0x0, *(longlong *)(param_1 + 0x878) != 0)) {
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar11,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x870) = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(lVar11);
      if (lVar3 != 0) goto LAB_141108bce;
    }
LAB_141108c04:
    lVar3 = 0;
  }
  else {
LAB_141108bce:
    lVar4 = FUN_141324ef0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_141108c04;
  }
  *(longlong *)(param_1 + 0x890) = lVar3;
  lVar4 = param_1;
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0xc0) == 0)) {
    puVar5 = (undefined8 *)FName::FName(local_208,L"AssetRegistry",1);
    uVar10 = *puVar5;
    uVar6 = FUN_14168dc80();
    plVar7 = (longlong *)FUN_141690010(uVar6,uVar10);
    local_260 = 0;
    local_258 = 0;
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x48))(plVar7);
    lVar3 = FUN_141304350();
    (**(code **)(*plVar7 + 0x28))(plVar7,*(undefined8 *)(lVar3 + 0x18),&local_260,1);
    lVar17 = (longlong)(int)local_258 * 0x58 + local_260;
    lVar3 = local_260;
joined_r0x000141108ca6:
    if (lVar3 == lVar17) goto LAB_141108d0c;
    lVar8 = FAssetData::GetAsset(lVar3);
    if (lVar8 == 0) {
LAB_141108d01:
      lVar3 = lVar3 + 0x58;
      goto joined_r0x000141108ca6;
    }
    lVar9 = FUN_141304350();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_141108d01;
    local_2a8 = (longlong *)0x0;
    if (*(longlong *)(lVar8 + 0x368) == 0) goto LAB_141108d01;
    lVar3 = lVar8 + 0x358;
    lVar17 = FWeakObjectPtr::Get(lVar3);
    if (lVar17 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar8 + 0x360)) &&
         (local_2a8 = (longlong *)0x0, *(longlong *)(lVar8 + 0x368) != 0)) {
        lVar17 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar3,lVar17);
        if ((lVar17 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar8 + 0x360) = DAT_1464b56f4;
        }
        lVar17 = FWeakObjectPtr::Get(lVar3);
        if (lVar17 != 0) goto LAB_141108e59;
      }
    }
    else {
LAB_141108e59:
      lVar9 = FUN_1412eb410();
      if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_1411092c1;
    }
    FUN_14282a800(local_1f8);
    FUN_14283c290(local_1f8,(longlong *)(lVar8 + 0x368),1,0);
    local_280 = 0;
    local_278 = 0x6d;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_280,0);
    uVar10 = local_280;
    FGenericPlatformString::Memcpy
              (local_280,
               L"/Game/PatchDLC/Ixora2/UI/BehindTheScenes/WMS_BehindTheScenesAudio_AutoPlay.WMS_BehindTheScenesAudio_AutoPlay"
               ,0xda);
    local_210 = (undefined4)local_278;
    local_20c = local_278._4_4_;
    local_240 = 0;
    local_238 = 0;
    local_230 = 0;
    local_218 = uVar10;
    FUN_1417978e0(&local_240,&local_218);
    FUN_14283c290(local_1f8,&local_240,1,0);
    local_2a8 = (longlong *)0x0;
    if (local_240 == 0) {
      local_270 = (undefined2 *)0x0;
      local_268 = 0;
LAB_141108f64:
      puVar15 = &DAT_143f3eda8;
    }
    else {
      FName::ToString(&local_240,&local_270);
      puVar15 = local_270;
      if ((int)local_268 == 0) goto LAB_141108f64;
    }
    uVar10 = FUN_1405b97a0();
    local_2b8 = 1;
    local_2c0 = 0;
    local_2c8 = 0;
    lVar4 = FUN_141799c90(uVar10,0,puVar15,0);
    if (local_270 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    lVar17 = FWeakObjectPtr::Get(lVar3);
    if (lVar17 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 == *(int *)(lVar8 + 0x360)) ||
         (local_2a8 = (longlong *)0x0, *(longlong *)(lVar8 + 0x368) == 0)) goto LAB_1411092a6;
      lVar17 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar3,lVar17);
      if ((lVar17 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar8 + 0x360) = DAT_1464b56f4;
      }
      lVar17 = FWeakObjectPtr::Get(lVar3);
      if (lVar17 == 0) goto LAB_1411092a6;
    }
    lVar9 = FUN_1412eb410();
    if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar4 != 0)) {
      lVar17 = FWeakObjectPtr::Get(lVar3);
      if (lVar17 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(lVar8 + 0x360)) &&
           (local_2a8 = (longlong *)0x0, *(longlong *)(lVar8 + 0x368) != 0)) {
          lVar17 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar3,lVar17);
          if ((lVar17 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(lVar8 + 0x360) = DAT_1464b56f4;
          }
          lVar17 = FWeakObjectPtr::Get(lVar3);
          if (lVar17 != 0) goto LAB_1411090d9;
        }
LAB_14110910f:
        lVar17 = 0;
      }
      else {
LAB_1411090d9:
        lVar9 = FUN_1412eb410();
        if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_14110910f;
      }
      plVar7 = *(longlong **)(lVar17 + 0x30);
      plVar13 = plVar7 + (longlong)*(int *)(lVar17 + 0x38) * 5;
      local_2a8 = plVar13;
      if (plVar7 != plVar13) {
        plVar7 = plVar7 + 3;
        do {
          plVar16 = (longlong *)*plVar7;
          plVar18 = plVar16 + (longlong)(int)plVar7[1] * 10;
          local_2a0 = plVar7;
          for (; plVar16 != plVar18; plVar16 = plVar16 + 10) {
            if (*plVar16 != 0) {
              lVar17 = *(longlong *)(*plVar16 + 0x10);
              FName::FName(&local_228,L"Media",0);
              lVar9 = local_228;
              if (((int)local_228 == 0) && ((int)((ulonglong)local_228 >> 0x20) == 0)) {
                bVar1 = true;
              }
              else {
                bVar1 = false;
              }
              if (!bVar1) {
                if (lVar17 == 0) {
                  local_290 = 0;
                }
                else {
                  local_290 = *(longlong *)(lVar17 + 0x38);
                }
                local_288 = 0xffffffff;
                local_284 = 0x101;
                local_282 = 0;
                local_298 = lVar17;
                FUN_140cbbe70(&local_298);
                while (local_290 != 0) {
                  if (*(longlong *)(local_290 + 0x18) == lVar9) {
                    if ((local_290 != 0) &&
                       (lVar17 = *(longlong *)((longlong)*(int *)(local_290 + 0x44) + *plVar16),
                       lVar17 != 0)) {
                      lVar9 = FUN_142e54cb0();
                      if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90))
                         || (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x88) +
                              (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                        bVar1 = false;
                      }
                      else {
                        bVar1 = true;
                      }
                      if (bVar1) {
                        *(longlong *)(lVar17 + 0x30) = lVar4;
                        uVar10 = FUN_142aaeb30();
                        uVar10 = UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar10);
                        *(undefined8 *)(lVar17 + 0x38) = uVar10;
                      }
                    }
                    break;
                  }
                  local_290 = *(longlong *)(local_290 + 0x28);
                  FUN_140cbbe70(&local_298);
                }
              }
            }
            plVar13 = local_2a8;
          }
          plVar7 = local_2a0 + 5;
          plVar16 = local_2a0 + 2;
          local_2a0 = plVar7;
        } while (plVar16 != plVar13);
      }
    }
LAB_1411092a6:
    if (local_238 != 0) {
      FMemory::Free();
    }
    FUN_14282cc40(local_1f8);
    lVar4 = local_220;
LAB_1411092c1:
    lVar17 = FWeakObjectPtr::Get(lVar3);
    if (lVar17 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar8 + 0x360)) &&
         (local_2a0 = (longlong *)0x0, *(longlong *)(lVar8 + 0x368) != 0)) {
        lVar17 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar3,lVar17);
        if ((lVar17 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar8 + 0x360) = DAT_1464b56f4;
        }
        lVar17 = FWeakObjectPtr::Get(lVar3);
        if (lVar17 != 0) goto LAB_141109340;
      }
    }
    else {
LAB_141109340:
      lVar9 = FUN_1412eb410();
      if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar17 = FWeakObjectPtr::Get(lVar3);
        if (lVar17 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != *(int *)(lVar8 + 0x360)) &&
             (local_2a0 = (longlong *)0x0, *(longlong *)(lVar8 + 0x368) != 0)) {
            lVar17 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar3,lVar17);
            if ((lVar17 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(lVar8 + 0x360) = DAT_1464b56f4;
            }
            lVar17 = FWeakObjectPtr::Get(lVar3);
            if (lVar17 != 0) goto LAB_1411093f1;
          }
LAB_141109427:
          lVar17 = 0;
        }
        else {
LAB_1411093f1:
          lVar3 = FUN_1412eb410();
          if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_141109427;
        }
        *(longlong *)(*(longlong *)(lVar4 + 0x890) + 0xc0) = lVar17;
      }
    }
LAB_141108d0c:
    FUN_1404be960(&local_260);
  }
  lVar3 = FWeakObjectPtr::Get(lVar11);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x870)) &&
       (local_2a0 = (longlong *)0x0, *(longlong *)(param_1 + 0x878) != 0)) {
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar11,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x870) = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(lVar11);
      if (lVar3 != 0) goto LAB_141108da4;
    }
LAB_141109444:
    lVar3 = 0;
  }
  else {
LAB_141108da4:
    lVar17 = FUN_141324ef0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar17 + 0x90) * 8)
        != lVar17 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_141109444;
  }
  if (*(longlong *)(lVar3 + 0xc0) == 0) {
    return;
  }
  if ((*(longlong *)(lVar4 + 0xa28) != 0) && (*(char *)(lVar4 + 0xa39) == '\0')) {
    *(undefined1 *)(lVar4 + 0xa39) = 1;
    local_250 = 0;
    local_248 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_250,0);
    local_2c8 = CONCAT22(local_2c8._2_2_,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_250,5,&DAT_1446a8b04);
    FUN_142088910(*(undefined8 *)(lVar4 + 0xa28),&local_250);
    if (local_250 != 0) {
      FMemory::Free();
    }
  }
  FUN_141105fc0(lVar4);
  lVar3 = FWeakObjectPtr::Get(lVar11);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x870)) &&
       (local_2a0 = (longlong *)0x0, *(longlong *)(param_1 + 0x878) != 0)) {
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar11,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x870) = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(lVar11);
      if (lVar3 != 0) goto LAB_14110954c;
    }
  }
  else {
LAB_14110954c:
    lVar11 = FUN_141324ef0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
        != lVar11 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_141109585;
  }
  lVar3 = 0;
LAB_141109585:
  lVar17 = *(longlong *)(*(longlong *)(lVar3 + 0xc0) + 0x30);
  lVar11 = lVar17 + (longlong)*(int *)(*(longlong *)(lVar3 + 0xc0) + 0x38) * 0x28;
  if (lVar17 != lVar11) {
    bVar14 = 0x1b;
    do {
      if (0x22 < bVar14) {
        return;
      }
      puVar5 = (undefined8 *)FName::FName(local_200,L"OnBehindTheScenesCategoryClicked",1);
      local_2c8 = (uint)(byte)(bVar14 - 0x1b);
      uVar2 = FUN_141104250(lVar4,lVar17,*puVar5,0);
      uVar12 = (ulonglong)bVar14;
      lVar17 = lVar17 + 0x28;
      bVar14 = bVar14 + 1;
      *(undefined4 *)(lVar4 + 0x8b0 + uVar12 * 4) = uVar2;
    } while (lVar17 != lVar11);
  }
  return;
}


