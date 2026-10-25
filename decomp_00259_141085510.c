// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141085510 FUN_141085510 body=3960 status=ok
// SIG undefined FUN_141085510(void)

void FUN_141085510(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  longlong local_288;
  undefined8 local_280;
  longlong local_278;
  undefined8 local_270;
  longlong *local_268;
  undefined8 local_260;
  longlong *local_258;
  undefined8 local_250;
  longlong *local_248;
  undefined8 local_240;
  longlong *local_238;
  undefined8 local_230;
  longlong *local_228;
  undefined8 local_220;
  longlong *local_218;
  undefined8 local_210;
  longlong *local_208;
  undefined8 local_200;
  longlong *local_1f8;
  undefined8 local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong *local_188;
  undefined8 local_180;
  longlong *local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined8 local_160;
  longlong *local_158;
  undefined8 local_150;
  longlong *local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  
  local_258 = (longlong *)0x0;
  local_250 = 0;
  FUN_140fe4cd0(param_1,param_1 + 0x16e,param_1 + 0x1cc,0,6,&local_258);
  plVar6 = local_258;
  for (iVar11 = (int)local_250; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_258 != (longlong *)0x0) {
    FMemory::Free(local_258);
  }
  puVar10 = &DAT_143f3eda8;
  if ((int)param_1[0x1d7] == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)param_1[0x1d6];
  }
  uVar4 = (**(code **)(*param_1 + 0x4a8))(param_1,local_c0,puVar9);
  FUN_142ede260(param_1 + 0x173,uVar4);
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_b8 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar1 = (int *)((longlong)local_b8 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_b8 + 8))(local_b8,1);
      }
    }
  }
  if ((int)param_1[0x1d5] == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)param_1[0x1d4];
  }
  uVar4 = (**(code **)(*param_1 + 0x4a8))(param_1,local_b0,puVar9);
  FUN_142ede260(param_1 + 0x170,uVar4);
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_a8 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar1 = (int *)((longlong)local_a8 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_a8 + 8))(local_a8,1);
      }
    }
  }
  local_248 = (longlong *)0x0;
  local_240 = 0;
  FUN_140ecf270(param_1,param_1 + 0x176,param_1 + 0x1da,0,6,&local_248);
  plVar6 = local_248;
  for (iVar11 = (int)local_240; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_248 != (longlong *)0x0) {
    FMemory::Free(local_248);
  }
  local_238 = (longlong *)0x0;
  local_230 = 0;
  lVar5 = FUN_140f9a0c0(param_1,param_1 + 0x1e0,0,6,&local_238);
  param_1[0x179] = lVar5;
  plVar6 = local_238;
  for (iVar11 = (int)local_230; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_238 != (longlong *)0x0) {
    FMemory::Free(local_238);
  }
  local_228 = (longlong *)0x0;
  local_220 = 0;
  lVar5 = FUN_140f9a0c0(param_1,param_1 + 0x1dc,0,6,&local_228);
  param_1[0x177] = lVar5;
  plVar6 = local_228;
  for (iVar11 = (int)local_220; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_228 != (longlong *)0x0) {
    FMemory::Free(local_228);
  }
  local_218 = (longlong *)0x0;
  local_210 = 0;
  local_d0 = 0;
  lVar5 = FUN_140f9a0c0(param_1,param_1 + 0x1de,0,6,&local_218);
  param_1[0x178] = lVar5;
  plVar6 = local_218;
  for (iVar11 = (int)local_210; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_218 != (longlong *)0x0) {
    FMemory::Free(local_218);
  }
  local_208 = (longlong *)0x0;
  local_200 = 0;
  local_c8 = 0;
  lVar5 = FUN_140e96f30(param_1,param_1 + 0x1f2,0,6,&local_208);
  param_1[0x1af] = lVar5;
  plVar6 = local_208;
  for (iVar11 = (int)local_200; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_208 != (longlong *)0x0) {
    FMemory::Free(local_208);
  }
  local_1f8 = (longlong *)0x0;
  local_1f0 = 0;
  local_d8 = 0;
  lVar5 = FUN_140e96f30(param_1,param_1 + 0x1ec,0,6,&local_1f8);
  param_1[0x1ae] = lVar5;
  plVar6 = local_1f8;
  for (iVar11 = (int)local_1f0; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_1f8 != (longlong *)0x0) {
    FMemory::Free(local_1f8);
  }
  if ((int)param_1[0x1eb] == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)param_1[0x1ea];
  }
  uVar4 = (**(code **)(*param_1 + 0x4a8))(param_1,local_a0,puVar9);
  FUN_142ede260(param_1 + 0x1b0,uVar4);
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_98 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar1 = (int *)((longlong)local_98 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
  uVar4 = (**(code **)(*param_1 + 0x4a8))
                    (param_1,local_90,L"veningMachineBackpack.backpack.backpackHeader.filterText");
  FUN_142ede260(param_1 + 0x1b3,uVar4);
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_88 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  if ((int)param_1[0x1e9] == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)param_1[0x1e8];
  }
  uVar4 = (**(code **)(*param_1 + 0x4a8))(param_1,local_80,puVar9);
  FUN_142ede260(param_1 + 0x1b6,uVar4);
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_78 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar1 = (int *)((longlong)local_78 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
  if ((int)param_1[0x1c7] == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)param_1[0x1c6];
  }
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x4a8))(param_1,local_70,puVar9);
  param_1[0x1ba] = *plVar6;
  plVar6 = (longlong *)plVar6[1];
  plVar8 = (longlong *)param_1[0x1bb];
  if (plVar6 != plVar8) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar8 = (longlong *)param_1[0x1bb];
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar11 == 1) && (plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    param_1[0x1bb] = (longlong)plVar6;
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_68 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if ((int)param_1[0x1cb] == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = (undefined2 *)param_1[0x1ca];
  }
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x4a8))(param_1,local_60,puVar9);
  param_1[0x1c0] = *plVar6;
  plVar6 = (longlong *)plVar6[1];
  plVar8 = (longlong *)param_1[0x1c1];
  if (plVar6 != plVar8) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar8 = (longlong *)param_1[0x1c1];
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar11 == 1) && (plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    param_1[0x1c1] = (longlong)plVar6;
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_58 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  if ((int)param_1[0x1d9] != 0) {
    puVar10 = (undefined2 *)param_1[0x1d8];
  }
  uVar4 = (**(code **)(*param_1 + 0x4a8))(param_1,local_50,puVar10);
  FUN_142ede260(param_1 + 0x1bc,uVar4);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_48 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      iVar11 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  local_1d8 = 0;
  local_1d0 = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
  FGenericPlatformString::Memcpy(local_1d8,L"veningMachineBackpack",0x2c);
  local_1e8 = (longlong *)0x0;
  local_1e0 = 0;
  lVar5 = FUN_140e96f30(param_1,&local_1d8,0,6,&local_1e8);
  param_1[0x1c2] = lVar5;
  plVar6 = local_1e8;
  for (iVar11 = (int)local_1e0; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_1e8 != (longlong *)0x0) {
    FMemory::Free(local_1e8);
  }
  if (local_1d8 != 0) {
    FMemory::Free();
  }
  lVar5 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
  if (lVar5 == 0) {
LAB_141085e81:
    local_278 = 0;
    local_270 = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_278,0);
    FGenericPlatformString::Memcpy(local_278,L"leftItemCardLoader",0x26);
    local_188 = (longlong *)0x0;
    local_180 = 0;
    lVar5 = FUN_141069210(param_1,&local_278,0,6,&local_188);
    param_1[0x15e] = lVar5;
    plVar6 = local_188;
    for (iVar11 = (int)local_180; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_188 != (longlong *)0x0) {
      FMemory::Free(local_188);
    }
    if (local_278 != 0) {
      FMemory::Free();
    }
    local_288 = 0;
    local_280 = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_288,0);
    FGenericPlatformString::Memcpy(local_288,L"rightItemCardLoader",0x28);
    local_268 = (longlong *)0x0;
    local_260 = 0;
    lVar5 = FUN_141069210(param_1,&local_288,0,6,&local_268);
    param_1[0x15f] = lVar5;
    plVar6 = local_268;
    for (iVar11 = (int)local_260; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    lVar5 = local_288;
    if (local_268 != (longlong *)0x0) {
      FMemory::Free(local_268);
      lVar5 = local_288;
    }
  }
  else {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((!bVar2) || (cVar3 = FUN_142dcfc60(lVar5), cVar3 != '\x03')) goto LAB_141085e81;
    local_1b8 = 0;
    local_1b0 = 0x1e;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
    FGenericPlatformString::Memcpy(local_1b8,L"leftItemCardLoaderAbbreviated",0x3c);
    local_1c8 = (longlong *)0x0;
    local_1c0 = 0;
    lVar5 = FUN_1410694b0(param_1,&local_1b8,0,6,&local_1c8);
    param_1[0x15e] = lVar5;
    plVar6 = local_1c8;
    for (iVar11 = (int)local_1c0; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_1c8 != (longlong *)0x0) {
      FMemory::Free(local_1c8);
    }
    if (local_1b8 != 0) {
      FMemory::Free();
    }
    local_198 = 0;
    local_190 = 0x1f;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
    FGenericPlatformString::Memcpy(local_198,L"rightItemCardLoaderAbbreviated",0x3e);
    local_1a8 = (longlong *)0x0;
    local_1a0 = 0;
    lVar5 = FUN_1410694b0(param_1,&local_198,0,6,&local_1a8);
    param_1[0x15f] = lVar5;
    plVar6 = local_1a8;
    lVar5 = local_198;
    for (iVar11 = (int)local_1a0; local_198 = lVar5, iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
      lVar5 = local_198;
    }
    if (local_1a8 != (longlong *)0x0) {
      FMemory::Free(local_1a8);
      lVar5 = local_198;
    }
  }
  if (lVar5 != 0) {
    FMemory::Free();
  }
  local_178 = (longlong *)0x0;
  local_170 = 0;
  lVar5 = FUN_140e96f30(param_1,param_1 + 0x1c8,0,6,&local_178);
  param_1[0x1b9] = lVar5;
  plVar6 = local_178;
  for (iVar11 = (int)local_170; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_178 != (longlong *)0x0) {
    FMemory::Free(local_178);
  }
  local_168 = (longlong *)0x0;
  local_160 = 0;
  lVar5 = FUN_14106ab10(param_1,param_1 + 0x1c4,0,6,&local_168);
  param_1[0x1bf] = lVar5;
  plVar6 = local_168;
  for (iVar11 = (int)local_160; iVar11 != 0; iVar11 = iVar11 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_168 != (longlong *)0x0) {
    FMemory::Free(local_168);
  }
  FWeakObjectPtr::operator=((longlong)param_1 + 0x7a4,param_1[0x1ae]);
  lVar5 = FWeakObjectPtr::Get((longlong)param_1 + 0x58c);
  if (lVar5 != 0) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1410860f8;
  }
  lVar5 = 0;
LAB_1410860f8:
  FWeakObjectPtr::operator=((longlong)param_1 + 0x794,lVar5);
  FWeakObjectPtr::operator=((longlong)param_1 + 0x79c,param_1);
  lVar5 = FUN_1413a7200();
  param_1[0xee] = lVar5;
  *(int *)((longlong)param_1 + 0x73c) = (int)param_1[300];
  *(int *)((longlong)param_1 + 0x744) = (int)param_1[0xf6];
  *(undefined1 *)(param_1 + 0xf2) = 1;
  *(undefined4 *)(param_1 + 0xe9) = 0x1e;
  *(undefined1 *)((longlong)param_1 + 0x716) = 1;
  FUN_140eeb880(param_1 + 0x17b,param_1 + 0xd3,0);
  FUN_140f0b0e0(param_1 + 0x17b,0);
  lVar5 = param_1[0x1a9];
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0x240) = 2;
    *(undefined1 *)(lVar5 + 0x242) = 1;
    *(undefined8 *)(lVar5 + 0x244) = *(undefined8 *)((longlong)param_1 + 0x7b4);
    *(undefined4 *)(lVar5 + 0x1ec) = *(undefined4 *)((longlong)param_1 + 0x7bc);
    *(int *)(lVar5 + 0x1e8) = (int)param_1[0xf8];
  }
  if (param_1[0xb6] != 0) {
    local_158 = (longlong *)0x0;
    local_150 = 0;
    lVar5 = FUN_140f139f0(param_1,param_1 + 0x1e2,0,6,&local_158);
    plVar6 = local_158;
    for (iVar11 = (int)local_150; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_158 != (longlong *)0x0) {
      FMemory::Free(local_158);
    }
    if (lVar5 != 0) {
      local_110 = 0;
      local_118 = lVar5;
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      local_110 = UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar4);
      FUN_142f05530(param_1[0xb6],&local_118,DAT_1468745c0);
    }
    local_148 = (longlong *)0x0;
    local_140 = 0;
    lVar5 = FUN_140f139f0(param_1,param_1 + 0x1e4,0,6,&local_148);
    plVar6 = local_148;
    for (iVar11 = (int)local_140; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_148 != (longlong *)0x0) {
      FMemory::Free(local_148);
    }
    if (lVar5 != 0) {
      local_100 = 0;
      local_108 = lVar5;
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      local_100 = UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar4);
      FUN_142f05530(param_1[0xb6],&local_108,DAT_1468745b8);
    }
    local_138 = (longlong *)0x0;
    local_130 = 0;
    lVar5 = FUN_140f139f0(param_1,param_1 + 0x1ee,0,6,&local_138);
    plVar6 = local_138;
    for (iVar11 = (int)local_130; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_138 != (longlong *)0x0) {
      FMemory::Free(local_138);
    }
    if (lVar5 != 0) {
      local_f0 = 0;
      local_f8 = lVar5;
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      local_f0 = UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar4);
      FUN_142f05530(param_1[0xb6],&local_f8,DAT_1468745d0);
    }
    local_128 = (longlong *)0x0;
    local_120 = 0;
    lVar5 = FUN_140f139f0(param_1,param_1 + 0x1f0,0,6,&local_128);
    plVar6 = local_128;
    for (iVar11 = (int)local_120; iVar11 != 0; iVar11 = iVar11 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_128 != (longlong *)0x0) {
      FMemory::Free(local_128);
    }
    if (lVar5 != 0) {
      local_e0 = 0;
      local_e8 = lVar5;
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      local_e0 = UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar4);
      FUN_142f05530(param_1[0xb6],&local_e8,DAT_1468745c8);
    }
  }
  return;
}



// FUNCTION 141086490 FUN_141086490 body=944 status=ok
// SIG undefined FUN_141086490(void)

void FUN_141086490(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  wchar_t *pwVar9;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 local_28;
  ulonglong uStack_20;
  
  pwVar9 = (wchar_t *)0x0;
  if (*(longlong *)(param_1 + 0xa10) != 0) {
    uStack_20 = uStack_20 & 0xffffffff00000000;
    local_28 = Z_Construct_UClass_UEditableTextBox_Statics::NewProp_SelectAllTextOnCommit_SetBit;
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnInventoryItemEquipped",L"::");
    pwVar5 = pwVar9;
    while (pwVar3 = pwVar4, pwVar3 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar5 = pwVar3;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0xa10) + 0x1308,param_1,&local_28,local_res8);
    uStack_20 = uStack_20 & 0xffffffff00000000;
    local_28 = Z_Construct_UClass_UEditableTextBox_Statics::NewProp_SelectAllTextOnCommit_SetBit;
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnInventoryItemUnequipped",L"::");
    pwVar5 = pwVar9;
    while (pwVar3 = pwVar4, pwVar3 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar5 = pwVar3;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0xa10) + 0x1318,param_1,&local_28,local_res8);
  }
  if (*(longlong *)(param_1 + 0xa18) != 0) {
    uStack_20 = uStack_20 & 0xffffffff00000000;
    local_28 = FUN_141095820;
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnInventoryItemAdded",L"::");
    pwVar5 = pwVar9;
    while (pwVar3 = pwVar4, pwVar3 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar5 = pwVar3;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0xa18) + 0x2d8,param_1,&local_28,local_res8);
    uStack_20 = uStack_20 & 0xffffffff00000000;
    local_28 = FUN_141095860;
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnInventoryItemRemoved",L"::");
    pwVar5 = pwVar9;
    while (pwVar3 = pwVar4, pwVar3 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar5 = pwVar3;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0xa18) + 0x2e8,param_1,&local_28,local_res8);
    uStack_20 = uStack_20 & 0xffffffff00000000;
    local_28 = FUN_140f2ce70;
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnInventoryItemUpdated",L"::");
    pwVar5 = pwVar9;
    while (pwVar3 = pwVar4, pwVar3 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar5 = pwVar3;
    }
    FName::FName(&local_res8,pwVar5 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0xa18) + 0x2f8,param_1,&local_28,local_res8);
    pwVar5 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnInventoryQuantityChanged",L"::");
    while (pwVar4 = pwVar5, pwVar4 != (wchar_t *)0x0) {
      pwVar5 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar9 = pwVar4;
    }
    FName::FName(&local_res10,pwVar9 + 2,1);
    lVar2 = *(longlong *)(param_1 + 0xa18);
    plVar8 = (longlong *)(lVar2 + 0x318);
    FWeakObjectPtr::operator=(&local_28,0);
    uStack_20 = 0;
    FWeakObjectPtr::operator=(&local_28,param_1);
    uStack_20 = local_res10;
    local_res8 = 0;
    if ((local_res10 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_28), lVar6 != 0)) {
      UObject::FindFunction(lVar6,uStack_20);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar8);
    iVar1 = *(int *)(lVar2 + 800);
    *(int *)(lVar2 + 800) = iVar1 + 1;
    if (*(int *)(lVar2 + 0x324) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar1);
    }
    puVar7 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar8);
    *puVar7 = (undefined4)local_28;
    puVar7[1] = local_28._4_4_;
    *(ulonglong *)(puVar7 + 2) = uStack_20;
  }
  return;
}



// FUNCTION 141086840 FUN_141086840 body=169 status=ok
// SIG undefined FUN_141086840(void)

void FUN_141086840(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [16];
  
  if (((param_2 != 0) && (lVar3 = FUN_140eccc40(), lVar3 != 0)) &&
     (lVar3 = FUN_140ad6100(param_2,lVar3), lVar3 != 0)) {
    lVar4 = FUN_1414e47c0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (plVar1 = *(longlong **)(lVar3 + 0x578), plVar1 != (longlong *)0x0)) {
      puVar5 = (undefined8 *)
               (**(code **)(*plVar1 + 0x428))(plVar1,local_18,*(undefined8 *)(param_1 + 0xe90));
      *(undefined8 *)(param_1 + 0xca0) = *puVar5;
      *(undefined4 *)(param_1 + 0xca8) = *(undefined4 *)(puVar5 + 1);
    }
  }
  return;
}



// FUNCTION 1410868f0 FUN_1410868f0 body=1269 status=ok
// SIG undefined FUN_1410868f0(void)

void FUN_1410868f0(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  longlong local_res18 [2];
  undefined8 local_48;
  longlong local_40;
  longlong *local_38;
  undefined8 local_30;
  
  if (param_3 == 0) {
    param_3 = *(longlong *)(param_1 + 400);
  }
  else {
    *(longlong *)(param_1 + 400) = param_3;
  }
  if (param_3 != 0) {
    pwVar4 = _guard_xfg_dispatch_icall_nop(L"&UGFxVehicleWeaponWidget::OnWeaponChanged",L"::");
    pwVar3 = (wchar_t *)0x0;
    while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
      pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(local_res18,pwVar3 + 2,1);
    lVar1 = *(longlong *)(param_1 + 400);
    plVar10 = (longlong *)(lVar1 + 0x1c8);
    FWeakObjectPtr::operator=(&local_48,0);
    local_40 = 0;
    FWeakObjectPtr::operator=(&local_48,param_1);
    local_40 = local_res18[0];
    if ((local_res18[0] != 0) && (lVar5 = FWeakObjectPtr::Get(&local_48), lVar5 != 0)) {
      UObject::FindFunction(lVar5,local_40);
    }
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
    iVar9 = *(int *)(lVar1 + 0x1d0);
    *(int *)(lVar1 + 0x1d0) = iVar9 + 1;
    if (*(int *)(lVar1 + 0x1d4) < iVar9 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar9);
    }
    puVar7 = (undefined4 *)((longlong)iVar9 * 0x10 + *plVar10);
    *puVar7 = (undefined4)local_48;
    puVar7[1] = local_48._4_4_;
    *(longlong *)(puVar7 + 2) = local_40;
  }
  *(undefined4 *)(param_1 + 0x1f0) = param_2;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  uVar6 = FUN_140ecbdf0(param_1,param_1 + 0x1f8,0,6,&local_48);
  *(undefined8 *)(param_1 + 0x198) = uVar6;
  plVar10 = local_48;
  for (iVar9 = (int)local_40; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  local_48 = (longlong *)0x0;
  local_40 = 0;
  uVar6 = FUN_140ecbdf0(param_1,param_1 + 0x218,0,6,&local_48);
  *(undefined8 *)(param_1 + 0x1a8) = uVar6;
  plVar10 = local_48;
  for (iVar9 = (int)local_40; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  local_48 = (longlong *)0x0;
  local_40 = 0;
  uVar6 = FUN_140ecbdf0(param_1,param_1 + 0x208,0,6,&local_48);
  *(undefined8 *)(param_1 + 0x1a0) = uVar6;
  plVar10 = local_48;
  for (iVar9 = (int)local_40; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    local_48 = (longlong *)0x0;
    local_40 = 0;
    uVar6 = FUN_140ecbdf0(*(longlong *)(param_1 + 0x1a0),param_1 + 0x268,0,6,&local_48);
    *(undefined8 *)(param_1 + 0x1b0) = uVar6;
    plVar10 = local_48;
    for (iVar9 = (int)local_40; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  local_38 = (longlong *)0x0;
  local_30 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"chargeMeter",0x18);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  uVar6 = FUN_140ecc430(param_1,&local_38,0,6,&local_48);
  plVar10 = (longlong *)(param_1 + 0x1e0);
  iVar9 = *(int *)(param_1 + 0x1e8);
  *(int *)(param_1 + 0x1e8) = iVar9 + 1;
  if (*(int *)(param_1 + 0x1ec) < iVar9 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar10,iVar9);
  }
  *(undefined8 *)(*plVar10 + (longlong)iVar9 * 8) = uVar6;
  plVar8 = local_48;
  for (iVar9 = (int)local_40; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"magazineMeter",0x1c);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  uVar6 = FUN_140ecc430(param_1,&local_48,0,6,&local_38);
  iVar9 = *(int *)(param_1 + 0x1e8);
  *(int *)(param_1 + 0x1e8) = iVar9 + 1;
  if (*(int *)(param_1 + 0x1ec) < iVar9 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar10,iVar9);
  }
  *(undefined8 *)(*plVar10 + (longlong)iVar9 * 8) = uVar6;
  plVar8 = local_38;
  for (iVar9 = (int)local_30; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)0x0;
  local_40 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"heatMeter",0x14);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  uVar6 = FUN_140ecc430(param_1,&local_48,0,6,&local_38);
  iVar9 = *(int *)(param_1 + 0x1e8);
  *(int *)(param_1 + 0x1e8) = iVar9 + 1;
  if (*(int *)(param_1 + 0x1ec) < iVar9 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar10,iVar9);
  }
  *(undefined8 *)(*plVar10 + (longlong)iVar9 * 8) = uVar6;
  plVar10 = local_38;
  for (iVar9 = (int)local_30; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    plVar10 = plVar10 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1410ac010(param_1);
  return;
}



// FUNCTION 141086df0 FUN_141086df0 body=421 status=ok
// SIG undefined FUN_141086df0(void)

void FUN_141086df0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *_Src;
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int local_res8 [2];
  void *local_88;
  ulonglong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  int local_28;
  
  if ((*(longlong *)(param_1 + 0x318) != 0) && (iVar4 = *(int *)(param_1 + 0x2d8), iVar4 != -1)) {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x240);
    if (cVar1 != '\0') {
      uVar2 = FWeakObjectPtr::Get(param_1 + 0x240);
      lVar3 = FUN_140e971d0(uVar2);
      local_res8[0] = -1;
      if (((lVar3 != 0) && (cVar1 = FUN_142710360(lVar3,local_res8), cVar1 != '\0')) &&
         (local_res8[0] == 1)) {
        if (iVar4 == 0) {
          iVar4 = 1;
        }
        else if (iVar4 == 1) {
          iVar4 = 0;
        }
      }
    }
    FString::PrintfImpl(&local_88,L"LobbyWidget_PlayerProfileImage_%02d",iVar4);
    _Src = local_88;
    if (*(longlong *)(param_1 + 0x308) != 0) {
      local_78 = *param_2;
      local_70 = param_2[1];
      if (local_70 != 0) {
        LOCK();
        *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
        UNLOCK();
      }
      local_68 = *param_3;
      local_60 = param_3[1];
      if (local_60 != 0) {
        LOCK();
        *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
        UNLOCK();
      }
      local_38 = (void *)0x0;
      iVar5 = (int)local_80;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_30 = iVar5;
      if (iVar5 == 0) {
        local_2c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_80 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar5 * 2);
      }
      local_28 = iVar4 + 2;
      FUN_1411f82f0(*(undefined8 *)(param_1 + 0x308),&local_78);
      FUN_14106efa0(&local_78);
    }
    if (local_88 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141086fa0 FUN_141086fa0 body=951 status=ok
// SIG undefined FUN_141086fa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_141086fa0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  DWORD DVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  bool bVar14;
  undefined1 auStack_238 [32];
  undefined2 local_218;
  longlong local_208;
  longlong *local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  longlong *plStack_1d8;
  undefined1 *local_1c8 [2];
  undefined1 local_1b8 [32];
  undefined8 local_198;
  undefined4 local_188;
  undefined1 local_178 [80];
  undefined1 local_128 [192];
  longlong local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  uVar13 = 0;
  local_1f8 = 0;
  local_198 = 0;
  local_188 = 0;
  puVar9 = (undefined8 *)FUN_140438ef0(0x10,local_1b8);
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[1] = param_1;
    *puVar9 = &PTR_FUN_143f77b70;
  }
  local_1f0 = 0;
  local_1c8[0] = &LAB_14107d620;
  local_1e8 = 0x2e;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f0,0);
  local_218 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_1f0,0x2e,"UGFxLobbyWidgetPlayerList::InsertPlayerItem()");
  FUN_140fe55e0(local_128,&local_1f0,local_1c8);
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x30) + 8);
    LOCK();
    iVar7 = *piVar1;
    if (iVar7 == 0) {
      *piVar1 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) {
      local_200 = *(longlong **)(param_1 + 0x30);
      local_208 = 0;
      if (local_200 == (longlong *)0x0) {
LAB_1410870dd:
        plVar10 = &local_208;
        bVar4 = true;
        bVar14 = false;
        lVar12 = local_208;
      }
      else {
        LOCK();
        iVar7 = (int)local_200[1];
        bVar14 = iVar7 == 0;
        if (bVar14) {
          *(int *)(local_200 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
        while (!bVar14) {
          LOCK();
          bVar14 = iVar7 == (int)local_200[1];
          if (bVar14) {
            *(int *)(local_200 + 1) = iVar7 + 1;
          }
          UNLOCK();
          if (bVar14) {
            if (local_200 != (longlong *)0x0) {
              local_208 = *(longlong *)(param_1 + 0x28);
            }
            goto LAB_1410870dd;
          }
          LOCK();
          iVar7 = (int)local_200[1];
          bVar14 = iVar7 == 0;
          if (bVar14) {
            *(int *)(local_200 + 1) = 0;
            iVar7 = 0;
          }
          UNLOCK();
        }
        plVar10 = &local_208;
        local_200 = (longlong *)0x0;
        bVar4 = true;
        bVar14 = false;
        lVar12 = 0;
      }
      goto LAB_141087106;
    }
  }
  plVar10 = &local_1e0;
  local_1e0 = 0;
  plStack_1d8 = (longlong *)0x0;
  bVar4 = false;
  bVar14 = true;
  lVar12 = 0;
LAB_141087106:
  plVar3 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  plVar2 = plStack_1d8;
  *plVar10 = 0;
  if ((bVar14) && (plStack_1d8 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plStack_1d8 + 1;
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_1d8)(plStack_1d8);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plStack_1d8 + 8))(plStack_1d8,1);
      }
    }
  }
  plVar10 = local_200;
  if ((bVar4) && (local_200 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_200 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_200)(local_200);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_200 + 8))(local_200,1);
      }
    }
  }
  if (lVar12 != 0) {
    uVar11 = FUN_140ff5760(local_128,local_178);
    FUN_1420326d0(lVar12,uVar11);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar3 + 1;
    lVar12 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (local_68 != 0) {
    while ((lVar12 = local_68, local_68 != 0 && (*(char *)(local_68 + 0x58) == '\0'))) {
      cVar6 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar6 == '\0') &&
         ((DAT_1468c21ae != '\0' && (DVar8 = GetCurrentThreadId(), DVar8 != DAT_1468c21c0)))) {
        lVar12 = FUN_14203ca70();
        if (lVar12 != 0) {
          FUN_1420714f0(lVar12);
        }
      }
      else {
        FUN_142036de0();
      }
      lVar12 = local_68;
      if (local_68 == 0) break;
      if (*(char *)(local_68 + 0x58) == '\0') {
        (**(code **)(**(longlong **)(local_68 + 0x50) + 0x20))(*(longlong **)(local_68 + 0x50),5);
      }
    }
    cVar6 = *(char *)(lVar12 + 0x58);
    while (cVar6 == '\0') {
      (**(code **)(**(longlong **)(lVar12 + 0x50) + 0x20))
                (*(longlong **)(lVar12 + 0x50),0x5d638865,0);
      cVar6 = *(char *)(lVar12 + 0x58);
    }
    uVar13 = *(undefined8 *)(lVar12 + 0x60);
  }
  FUN_140ce1dc0(local_128);
  return uVar13;
}



// FUNCTION 141087360 FUN_141087360 body=208 status=ok
// SIG undefined FUN_141087360(void)

ulonglong FUN_141087360(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  
  uVar4 = (**(code **)(*param_1 + 0x148))();
  lVar5 = FUN_14110cbc0(uVar4);
  uVar6 = 0;
  if (lVar5 != 0) {
    uVar6 = FUN_141131ed0(lVar5,param_2);
  }
  if (*(char *)((longlong)param_1 + 0x3cd) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x3cd) = 1;
    if (param_1[0x68] != 0) {
      plVar8 = (longlong *)(param_1[0x68] + 0x170);
      (**(code **)(*plVar8 + 0x38))(plVar8,0);
    }
    uVar6 = FUN_1410a1840(param_1);
    lVar5 = param_1[7];
    if (lVar5 != 0) {
      lVar7 = UMovieScene3DTransformSection::GetPrivateStaticClass();
      lVar3 = *(longlong *)(lVar5 + 0x10);
      iVar2 = *(int *)(lVar7 + 0x90);
      uVar6 = (longlong)iVar2;
      if ((*(int *)(lVar3 + 0x90) < iVar2) ||
         (uVar6 = *(ulonglong *)(lVar3 + 0x88),
         *(longlong *)(uVar6 + (longlong)iVar2 * 8) != lVar7 + 0x88)) {
        uVar6 = uVar6 & 0xffffffffffffff00;
      }
      else {
        uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
      }
      if ((char)uVar6 != '\0') {
        LOCK();
        uVar1 = *(uint *)(lVar5 + 0x588);
        *(uint *)(lVar5 + 0x588) = 1;
        uVar6 = (ulonglong)uVar1;
        UNLOCK();
        if (*(longlong *)(lVar5 + 0x6a8) != 0) {
          uVar6 = FUN_14111d880(*(longlong *)(lVar5 + 0x6a8),
                                CONCAT71((int7)((ulonglong)lVar3 >> 8),1));
        }
      }
    }
  }
  return uVar6;
}



// FUNCTION 141087430 FUN_141087430 body=34 status=ok
// SIG undefined FUN_141087430(void)

bool FUN_141087430(longlong param_1)

{
  return ABS(*(float *)(param_1 + 0x17c) - *(float *)(param_1 + 0x178)) <= 1e-08;
}



// FUNCTION 141087460 FUN_141087460 body=27 status=ok
// SIG undefined FUN_141087460(void)

longlong FUN_141087460(longlong param_1)

{
  longlong lVar1;
  uint7 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xb58);
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x670) == '\x03')) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 141087490 FUN_141087490 body=31 status=ok
// SIG undefined FUN_141087490(void)

bool FUN_141087490(longlong param_1)

{
  if (*(char *)(param_1 + 0xb) != '\0') {
    return true;
  }
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    return *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 0x48) != 0;
  }
  return false;
}



// FUNCTION 1410874d0 FUN_1410874d0 body=95 status=ok
// SIG undefined FUN_1410874d0(void)

ulonglong FUN_1410874d0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_14058c1e0(param_1 + 0x350,*(undefined8 *)(param_2 + 8));
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_14058c1e0(param_1 + 0x358,*(undefined8 *)(param_2 + 0x10));
    if (((char)uVar1 != '\0') &&
       (uVar1 = *(ulonglong *)(param_2 + 0x18), *(ulonglong *)(param_1 + 0x330) == uVar1)) {
      return CONCAT71((int7)(uVar1 >> 8),1);
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141087530 FUN_141087530 body=117 status=ok
// SIG undefined FUN_141087530(void)

undefined8 FUN_141087530(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x3b0);
  if (lVar3 != 0) {
    lVar4 = UMovieScene3DTransformSection::GetPrivateStaticClass();
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
      lVar3 = FUN_140f9aee0(lVar3);
      if (lVar3 != 0) {
        cVar2 = FUN_140bc9f60(lVar3);
        if (cVar2 == '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1410875b0 FUN_1410875b0 body=24 status=ok
// SIG undefined FUN_1410875b0(void)

undefined1 FUN_1410875b0(longlong param_1)

{
  if ((*(char *)(param_1 + 0x694) == '\0') && (*(char *)(param_1 + 0x695) == '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 1410875d0 FUN_1410875d0 body=12 status=ok
// SIG undefined FUN_1410875d0(void)

bool FUN_1410875d0(longlong param_1)

{
  return *(longlong *)(param_1 + 0x668) != 0;
}



// FUNCTION 141087630 FUN_141087630 body=165 status=ok
// SIG undefined FUN_141087630(void)

void FUN_141087630(longlong param_1,byte param_2,char param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  
  if (((*(char *)(param_1 + 0x19c) != '\0') && (1e-08 < ABS(*(float *)(param_1 + 0x184)))) &&
     (*(byte *)(param_1 + 400) != 0)) {
    fVar2 = (float)param_2 / (float)(int)(*(byte *)(param_1 + 400) - 1);
    fVar1 = 0.0;
    if ((0.0 <= fVar2) && (fVar1 = fVar2, 1.0 <= fVar2)) {
      fVar1 = 1.0;
    }
    *(float *)(param_1 + 0x17c) = fVar1;
    *(byte *)(param_1 + 0x180) = param_2;
    if ((param_3 == '\x01') || (ABS(fVar1 - *(float *)(param_1 + 0x178)) <= 1e-08)) {
      *(float *)(param_1 + 0x178) = fVar1;
      FUN_1410a9a70();
      return;
    }
    *(undefined4 *)(param_1 + 0x194) = param_4;
  }
  return;
}



// FUNCTION 1410876f0 FUN_1410876f0 body=119 status=ok
// SIG undefined FUN_1410876f0(void)

void FUN_1410876f0(longlong *param_1,undefined8 param_2,float param_3)

{
  float fVar1;
  char cVar2;
  longlong *local_res8 [4];
  
  FUN_142ef7690();
  if (*(char *)((longlong)param_1 + 0x344) != '\0') {
    cVar2 = FUN_1421003f0(param_1);
    if (cVar2 != '\x02') {
      fVar1 = *(float *)(param_1 + 0x69);
      *(float *)(param_1 + 0x69) = fVar1 - param_3;
      if (fVar1 - param_3 <= 1e-08) {
        (**(code **)(*param_1 + 0x288))(param_1,2);
        local_res8[0] = param_1;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x62,local_res8);
      }
    }
  }
  return;
}



// FUNCTION 141087770 FUN_141087770 body=199 status=ok
// SIG undefined FUN_141087770(void)

void FUN_141087770(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 local_18;
  longlong *plStack_10;
  
  if ((*(longlong *)(param_1 + 0x2e8) != 0) && (param_2 != 0)) {
    cVar6 = FUN_142eb5ad0(param_2);
    if (cVar6 != '\x01') {
      FUN_141080760(*(undefined8 *)(param_1 + 0x2e8),*(undefined4 *)(param_2 + 0x2d8));
      FUN_14109f5d0(param_2);
    }
    if (*(char *)(param_1 + 0x3cd) != '\0') {
      if (*(longlong *)(param_2 + 0x308) == 0) {
        local_18 = 0;
        plStack_10 = (longlong *)0x0;
      }
      else {
        FUN_1411e6060(*(longlong *)(param_2 + 0x308),&local_18);
      }
      FUN_141087360(param_1,&local_18);
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
    }
  }
  return;
}



// FUNCTION 141087840 FUN_141087840 body=171 status=ok
// SIG undefined FUN_141087840(void)

void FUN_141087840(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  
  FUN_142ef7ae0();
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x2d8);
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x378) <= iVar1)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_1410a5820(param_1,(longlong)iVar1 + *(longlong *)(param_1 + 0x370));
    }
    lVar2 = *(longlong *)(param_1 + 0x38);
    if (lVar2 != 0) {
      lVar4 = UMovieScene3DTransformSection::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_14110c9e0(lVar2,param_3);
      }
    }
  }
  return;
}



// FUNCTION 1410878f0 FUN_1410878f0 body=980 status=ok
// SIG undefined FUN_1410878f0(void)

void FUN_1410878f0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  bool bVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined8 uVar13;
  wchar_t *pwVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  char *pcVar18;
  undefined2 local_res10;
  longlong local_78;
  undefined1 local_70 [8];
  longlong local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  
  FUN_142ef7ae0();
  if (param_2 == 0) {
    return;
  }
  lVar11 = FWeakObjectPtr::Get(param_1 + 0x6c);
  local_res10._0_1_ = '\0';
  local_res10 = 0;
  local_res10._1_1_ = '\0';
  if (lVar11 != 0) {
    lVar11 = FUN_140f9aee0(lVar11);
    if (lVar11 != 0) {
      puVar12 = (undefined2 *)FUN_140a5dc70(lVar11);
      local_res10 = *puVar12;
    }
  }
  pcVar4 = (char *)param_1[0x6e];
  for (pcVar18 = pcVar4; pcVar18 != pcVar4 + (longlong)(int)param_1[0x6f] * 2; pcVar18 = pcVar18 + 2
      ) {
    if ((*pcVar18 == (char)local_res10) && (pcVar18[1] == local_res10._1_1_)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      iVar10 = (int)((longlong)pcVar18 - (longlong)pcVar4 >> 1);
      goto LAB_1410879b3;
    }
  }
  iVar10 = -1;
LAB_1410879b3:
  iVar3 = *(int *)(param_2 + 0x2d8);
  if ((iVar3 < 0) || ((int)param_1[0x6f] <= iVar3)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return;
  }
  if ((iVar10 < 0) || ((int)param_1[0x6f] <= iVar10)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((((bVar5) && (cVar9 = pcVar4[(longlong)iVar10 * 2], cVar9 != '\0')) && (cVar9 != '\x01')) &&
     (cVar9 == '\x02')) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  cVar9 = pcVar4[(longlong)iVar3 * 2];
  if (((cVar9 == '\0') || (cVar9 == '\x01')) || (cVar9 != '\x02')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (((bVar5) && (!bVar6)) && (lVar11 = (**(code **)(*param_1 + 0x148))(param_1), lVar11 != 0)) {
    uVar13 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar11 = FUN_140aea640(uVar13);
    if (((lVar11 != 0) && (iVar10 = FUN_140bba450(lVar11), 0 < iVar10)) &&
       (cVar9 = FWeakObjectPtr::IsValid(param_1 + 0x6c), cVar9 != '\0')) {
      *(int *)(param_1 + 0x70) = iVar3;
      FWeakObjectPtr::operator=(local_70,0);
      local_68 = 0;
      pwVar14 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnConfirmChangeNetworkMode",L"::");
      pwVar8 = (wchar_t *)0x0;
      while (pwVar7 = pwVar14, pwVar7 != (wchar_t *)0x0) {
        pwVar14 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
        pwVar8 = pwVar7;
      }
      FName::FName(&local_78,pwVar8 + 2,1);
      FWeakObjectPtr::operator=(local_70,param_1);
      local_68 = local_78;
      if ((local_78 != 0) && (lVar11 = FWeakObjectPtr::Get(local_70), lVar11 != 0)) {
        UObject::FindFunction(lVar11,local_68);
      }
      uVar13 = FWeakObjectPtr::Get(param_1 + 0x6c);
      uVar15 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_48,
                          L"Are you sure you want to change the network mode to offline? Doing so will disband the current group."
                          ,L"GFxLobbyWidgetSettingList",L"ChangeNetworkConfirmBody");
      uVar16 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_60,L"Confirm Network Mode Change",L"GFxLobbyWidgetSettingList",
                          L"ChangeNetworkConfirmHeader");
      uVar13 = FUN_140e971d0(uVar13);
      FUN_1410f2c40(uVar13,uVar16,uVar15,local_70,1,0,0,1);
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar2 = (int *)((longlong)local_58 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_58 + 8))(local_58,1);
          }
        }
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)local_40 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
      goto LAB_141087c55;
    }
  }
  FUN_1410a5f10(param_1,param_1[0x6e] + (longlong)iVar3 * 2);
LAB_141087c55:
  lVar11 = param_1[7];
  if (lVar11 != 0) {
    lVar17 = UMovieScene3DTransformSection::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar17 + 0x90) * 8
         ) != lVar17 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      FUN_14110c9e0(lVar11,param_3);
    }
  }
  return;
}



// FUNCTION 141087cd0 thunk_FUN_1410a7560 body=5 status=ok
// SIG undefined thunk_FUN_1410a7560(void)

void thunk_FUN_1410a7560(void)

{
  FUN_1410a7560();
  return;
}



// FUNCTION 141087ce0 FUN_141087ce0 body=447 status=ok
// SIG undefined FUN_141087ce0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141087ce0(longlong param_1)

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
  FUN_142ebee70();
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_14107d7f0;
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
  if (*(char *)(param_1 + 0x699) != '\0') {
    local_88 = (longlong *)0x0;
    local_78 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = param_1;
      *puVar1 = &PTR_FUN_143f77b70;
    }
    local_b8[0] = &LAB_14107db60;
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
  }
  return;
}



// FUNCTION 141087ea0 FUN_141087ea0 body=221 status=ok
// SIG undefined FUN_141087ea0(void)

void FUN_141087ea0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  FUN_142ebee70();
  lVar1 = param_1[0xc6];
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x270);
    plVar6 = (longlong *)0x0;
    if (lVar2 != 0) {
      plVar6 = *(longlong **)(lVar1 + 0x278);
    }
    if ((plVar6 != (longlong *)0x0) && (cVar4 = (**(code **)(*plVar6 + 0x80))(), cVar4 != '\0')) {
      if (lVar2 == 0) {
        plVar6 = (longlong *)0x0;
      }
      lVar1 = *plVar6;
      uVar5 = FUN_140eccc40(param_1);
      cVar4 = (**(code **)(lVar1 + 0x88))(plVar6,0,uVar5);
      if (cVar4 != '\x03') {
        bVar3 = true;
        goto LAB_141087f2c;
      }
    }
  }
  bVar3 = false;
LAB_141087f2c:
  if (bVar3) {
    (**(code **)(*param_1 + 0x578))(param_1,0);
  }
  else {
    (**(code **)(*param_1 + 0x580))(param_1,1);
  }
  if ((longlong *)param_1[0xc6] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141087f71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[0xc6] + 0x2a8))();
    return;
  }
  return;
}



// FUNCTION 141087f80 FUN_141087f80 body=309 status=ok
// SIG undefined FUN_141087f80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141087f80(longlong *param_1)

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
  FUN_142ebee70();
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_14107d770;
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
  if (param_1[0xcd] == 0) {
    (**(code **)(*param_1 + 0x580))(param_1,1);
  }
  else {
    (**(code **)(*param_1 + 0x578))(param_1,0);
  }
  return;
}



// FUNCTION 1410880c0 FUN_1410880c0 body=286 status=ok
// SIG undefined FUN_1410880c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410880c0(undefined8 param_1)

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
  FUN_142ebee70();
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_14107d8f0;
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
  FUN_1410a6470(param_1,2);
  return;
}



// FUNCTION 1410881e0 FUN_1410881e0 body=699 status=ok
// SIG undefined FUN_1410881e0(void)

void FUN_1410881e0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  uint uVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  longlong local_58;
  ulonglong local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  FUN_142ebee70();
  lVar6 = FWeakObjectPtr::Get(param_1 + 0xbc);
  if (lVar6 == 0) {
LAB_14108824d:
    lVar6 = 0;
  }
  else {
    lVar7 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14108824d;
  }
  if ((param_1[0xc6] != 0) && (lVar6 != 0)) {
    cVar5 = (**(code **)(*(longlong *)(lVar6 + 0x5a0) + 0x18))(lVar6 + 0x5a0);
    if (cVar5 == '\0') {
LAB_1410882a6:
      pwVar11 = L"shieldOff";
    }
    else {
      cVar5 = (**(code **)(*(longlong *)(lVar6 + 0x5a0) + 0x10))(lVar6 + 0x5a0);
      pwVar11 = L"shieldOn";
      if (cVar5 == '\0') goto LAB_1410882a6;
    }
    local_58 = 0;
    local_50 = 0;
    if (*pwVar11 != L'\0') {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (pwVar11[lVar6] != L'\0');
      uVar10 = (int)lVar6 + 1;
      local_50 = (ulonglong)uVar10;
      if (0 < (int)uVar10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      }
      FGenericPlatformString::Memcpy(local_58,pwVar11,(longlong)(int)uVar10 * 2);
    }
    FUN_142088cf0(param_1[0xc6],&local_58);
    if (local_58 != 0) {
      FMemory::Free();
    }
  }
  lVar6 = FWeakObjectPtr::Get(param_1 + 0xbb);
  if (lVar6 != 0) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (lVar6 = FUN_140cff230(lVar6), lVar6 != 0)) {
      cVar5 = *(char *)(lVar6 + 0x29);
      goto LAB_14108837d;
    }
  }
  cVar5 = '\x01';
LAB_14108837d:
  *(char *)(param_1 + 0xc9) = cVar5;
  if (param_1[200] != 0) {
    pwVar13 = L"MPHText_FORCEVERTICAL";
    pwVar12 = L"VehicleSpeedometer";
    pwVar11 = L"M\nP\nH";
    puVar9 = local_30;
    if (cVar5 == '\0') {
      pwVar13 = L"KPHText_FORCEVERTICAL";
      pwVar12 = L"VehicleSpeedometer";
      pwVar11 = L"K\nP\nH";
      puVar9 = local_48;
    }
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (puVar9,pwVar11,pwVar12,pwVar13);
    (**(code **)(*(longlong *)param_1[200] + 0x2b0))((longlong *)param_1[200],uVar8,1,0);
    if (((2U - (cVar5 != '\0') & 2) != 0) && (local_40 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    if ((cVar5 != '\0') && (local_28 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)local_28 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_28 + 8))(local_28,1);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141088494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x578))(param_1,0);
  return;
}



// FUNCTION 1410884a0 FUN_1410884a0 body=103 status=ok
// SIG undefined FUN_1410884a0(void)

void FUN_1410884a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*(int *)(param_1 + 0x278) != 0) && (*(longlong **)(param_1 + 0x270) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x278) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x270);
      }
      (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 141088510 thunk_FUN_1410a78d0 body=5 status=ok
// SIG undefined thunk_FUN_1410a78d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001410a7da7) */
/* WARNING: Removing unreachable block (ram,0x0001410a7db6) */
/* WARNING: Removing unreachable block (ram,0x0001410a7dd1) */

void thunk_FUN_1410a78d0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  char cVar11;
  int iVar12;
  char *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  float *pfVar21;
  uint uVar22;
  undefined8 *puVar23;
  longlong lVar24;
  longlong *plVar25;
  bool bVar26;
  undefined1 auStack_2f8 [32];
  undefined8 uStack_2d8;
  longlong *plStack_2d0;
  undefined4 uStack_2c8;
  int iStack_2b8;
  undefined1 uStack_2b4;
  longlong lStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  float fStack_298;
  float fStack_294;
  longlong *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  longlong *plStack_278;
  uint uStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  longlong *plStack_250;
  longlong lStack_248;
  longlong *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  longlong lStack_228;
  undefined8 uStack_220;
  longlong lStack_218;
  undefined8 uStack_210;
  longlong lStack_208;
  longlong *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  longlong *aplStack_1e0 [2];
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  longlong lStack_1b8;
  longlong *plStack_1b0;
  longlong lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  longlong *plStack_180;
  undefined8 uStack_178;
  longlong *plStack_170;
  undefined1 auStack_168 [8];
  longlong *plStack_160;
  undefined1 auStack_158 [8];
  longlong *plStack_150;
  undefined4 auStack_148 [2];
  undefined8 uStack_140;
  longlong *plStack_138;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong *plStack_118;
  undefined8 **ppuStack_110;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  longlong *plStack_e8;
  undefined1 auStack_e0 [8];
  longlong *plStack_d8;
  undefined1 auStack_d0 [8];
  longlong *plStack_c8;
  undefined1 auStack_c0 [8];
  longlong *plStack_b8;
  undefined1 auStack_b0 [8];
  longlong *plStack_a8;
  undefined1 auStack_a0 [8];
  longlong alStack_98 [2];
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong uStack_70;
  
  uStack_70 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  lVar24 = 0;
  iStack_2b8 = 0;
  lStack_2b0 = *(longlong *)(param_1 + 0x3c0);
  if (lStack_2b0 == 0) {
    return;
  }
  lStack_1a8 = param_1;
  pcVar13 = (char *)FUN_140a5dc70();
  if (*pcVar13 != '\x02') {
    return;
  }
  cVar11 = FWeakObjectPtr::IsValid(param_1 + 0x3b0);
  if (cVar11 == '\0') {
LAB_1410a79bb:
    lVar14 = lVar24;
  }
  else {
    lVar14 = FWeakObjectPtr::Get(param_1 + 0x3b0);
    lVar14 = FWeakObjectPtr::Get(lVar14 + 0x58c);
    if (lVar14 == 0) goto LAB_1410a79bb;
    lVar15 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8
         ) != lVar15 + 0x88)) {
      bVar26 = false;
    }
    else {
      bVar26 = true;
    }
    if (!bVar26) goto LAB_1410a79bb;
  }
  plStack_290 = (longlong *)0x0;
  uStack_288 = 0;
  uVar16 = FUN_140bb7440(lStack_2b0);
  FUN_140d80c90(uVar16,&plStack_290);
  puStack_268 = (undefined8 *)0x0;
  uStack_260 = 0;
  bVar26 = lVar14 == 0;
  if (bVar26) {
    plVar17 = &lStack_1b8;
    lStack_1b8 = 0;
    plStack_1b0 = (longlong *)0x0;
  }
  else {
    plVar17 = (longlong *)FUN_142dcf3a0(lVar14,auStack_f0);
    lVar24 = *plVar17;
  }
  uStack_230 = (longlong *)plVar17[1];
  plVar17[1] = 0;
  *plVar17 = 0;
  plVar17 = plStack_1b0;
  uStack_238 = lVar24;
  if ((bVar26) && (plStack_1b0 != (longlong *)0x0)) {
    LOCK();
    plVar18 = plStack_1b0 + 1;
    lVar24 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar24 == 1) {
      (**(code **)*plStack_1b0)(plStack_1b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plStack_1b0 + 8))(plStack_1b0,1);
      }
    }
  }
  if ((!bVar26) && (plStack_e8 != (longlong *)0x0)) {
    LOCK();
    plVar17 = plStack_e8 + 1;
    lVar24 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar24 == 1) {
      (**(code **)*plStack_e8)(plStack_e8);
      LOCK();
      piVar1 = (int *)((longlong)plStack_e8 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plStack_e8 + 8))(plStack_e8,1);
      }
    }
  }
  if (uStack_238 != 0) {
    uStack_128 = (undefined4)uStack_238;
    uStack_124 = uStack_238._4_4_;
    uStack_120 = (undefined4)uStack_230;
    uStack_11c = uStack_230._4_4_;
    if (uStack_230 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_230 + 1) = (int)uStack_230[1] + 1;
      UNLOCK();
    }
    uVar16 = FUN_140bb74b0(lStack_2b0);
    FUN_140d80f80(uVar16,&uStack_128,&puStack_268,0);
    plVar17 = (longlong *)CONCAT44(uStack_11c,uStack_120);
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      plVar18 = plVar17 + 1;
      lVar24 = *plVar18;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)lVar24 == 1) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar17 + 8))(plVar17,1);
        }
      }
    }
  }
  FUN_1411357c0(lVar14,&plStack_290);
  plStack_118 = &lStack_2b0;
  ppuStack_110 = &puStack_268;
  FUN_14106ca50(&plStack_290,&plStack_118);
  plVar17 = (longlong *)(param_1 + 0x3e0);
  TArray<FText,FDefaultAllocator>::Empty(plVar17,0);
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  puStack_1d0 = &uStack_1f8;
  if (*(longlong *)(param_1 + 0x2e8) == 0) {
    iStack_2b8 = 3;
  }
  else {
    plVar18 = (longlong *)FUN_141424bc0();
    lVar24 = plVar18[0x1f];
    if (lVar24 == 0) {
      (**(code **)(*plVar18 + 0x368))(plVar18);
      lVar24 = plVar18[0x1f];
    }
    iVar12 = FUN_142480900(lVar24);
    iStack_2b8 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x2e8));
    iStack_2b8 = iVar12 - iStack_2b8;
  }
  plVar25 = plStack_290 + (longlong)(int)uStack_288 * 2;
  for (plVar18 = plStack_290; plVar18 != plVar25; plVar18 = plVar18 + 2) {
    if ((*(longlong **)(*plVar18 + 0x10) == (longlong *)0x0) ||
       (cVar11 = (**(code **)(**(longlong **)(*plVar18 + 0x10) + 0x20))(), cVar11 == '\0')) {
      bVar26 = false;
    }
    else {
      bVar26 = true;
    }
    if (bVar26) {
      uStack_188 = *(undefined8 *)(*plVar18 + 0x10);
      plStack_180 = *(longlong **)(*plVar18 + 0x18);
      if (plStack_180 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_180 + 1) = (int)plStack_180[1] + 1;
        UNLOCK();
      }
      cVar11 = FUN_14107beb0(param_1,&uStack_188);
      plVar3 = plStack_180;
      if (plStack_180 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_180 + 1;
        lVar24 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar24 == 1) {
          (**(code **)*plStack_180)(plStack_180);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      if (cVar11 == '\0') {
        lStack_228 = 0;
        uStack_220 = 0;
        uStack_178 = *(undefined8 *)(*plVar18 + 0x10);
        plStack_170 = *(longlong **)(*plVar18 + 0x18);
        if (plStack_170 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
          UNLOCK();
        }
        FUN_141082f00(param_1,auStack_168,&uStack_178);
        plVar3 = plStack_170;
        if (plStack_170 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_170 + 1;
          lVar24 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar24 == 1) {
            (**(code **)*plStack_170)(plStack_170);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        plStack_2d0 = &lStack_228;
        uStack_2c8 = 0xbf800000;
        uStack_2d8 = CONCAT71(uStack_2d8._1_7_,1);
        cVar11 = FUN_140d7a1d0(*(undefined8 *)(lStack_2b0 + 0x478),auStack_168,lVar14,1);
        if (cVar11 != '\0') {
          uStack_280 = *(undefined8 *)(*plVar18 + 0x10);
          plStack_278 = *(longlong **)(*plVar18 + 0x18);
          if (plStack_278 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_278 + 1) = (int)plStack_278[1] + 1;
            UNLOCK();
          }
          uStack_1c8._0_4_ = (undefined4)uStack_280;
          uStack_1c8._4_4_ = (undefined4)((ulonglong)uStack_280 >> 0x20);
          uStack_1c0._0_4_ = SUB84(plStack_278,0);
          uStack_1c0._4_4_ = (undefined4)((ulonglong)plStack_278 >> 0x20);
          uStack_74 = uStack_1c0._4_4_;
          uStack_78 = (undefined4)uStack_1c0;
          uStack_7c = uStack_1c8._4_4_;
          uStack_80 = (undefined4)uStack_1c8;
          uStack_1c0 = 0;
          uStack_1c8 = 0;
          uStack_270 = 0;
          if (*(char *)(*plVar18 + 0x80) != '\0') {
            uStack_270 = (uint)(1 < *(int *)(*plVar18 + 0x68));
          }
          uVar22 = uStack_270;
          iVar12 = *(int *)(param_1 + 1000);
          lVar24 = (longlong)iVar12;
          *(int *)(param_1 + 1000) = iVar12 + 1;
          if (*(int *)(param_1 + 0x3ec) < iVar12 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(plVar17,iVar12);
          }
          plVar3 = plStack_278;
          lVar15 = *plVar17;
          *(undefined8 *)(lVar15 + lVar24 * 0x18) = uStack_280;
          *(longlong **)(lVar15 + 8 + lVar24 * 0x18) = plStack_278;
          if (plStack_278 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_278 + 1) = (int)plStack_278[1] + 1;
            UNLOCK();
            uVar22 = uStack_270;
          }
          *(uint *)(lVar15 + 0x10 + lVar24 * 0x18) = uVar22;
          FUN_1410700b0(&puStack_1d0,&lStack_228,uVar22);
          plVar2 = plStack_278;
          if (*(int *)(param_1 + 1000) == iStack_2b8) {
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar3 + 1;
              lVar24 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar24 == 1) {
                (**(code **)*plStack_278)(plStack_278);
                LOCK();
                piVar1 = (int *)((longlong)plVar2 + 0xc);
                iVar12 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar12 == 1) {
                  (**(code **)(*plStack_278 + 8))(plStack_278,1);
                }
              }
            }
            if (plStack_160 != (longlong *)0x0) {
              LOCK();
              plVar18 = plStack_160 + 1;
              lVar24 = *plVar18;
              *(int *)plVar18 = (int)*plVar18 + -1;
              UNLOCK();
              if ((int)lVar24 == 1) {
                (**(code **)*plStack_160)(plStack_160);
                LOCK();
                piVar1 = (int *)((longlong)plStack_160 + 0xc);
                iVar12 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar12 == 1) {
                  (**(code **)(*plStack_160 + 8))(plStack_160,1);
                }
              }
            }
            if (lStack_228 != 0) {
              FMemory::Free();
            }
            break;
          }
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar3 + 1;
            lVar24 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar24 == 1) {
              (**(code **)*plStack_278)(plStack_278);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar12 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*plStack_278 + 8))(plStack_278,1);
              }
            }
          }
        }
        plVar3 = plStack_160;
        if (plStack_160 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_160 + 1;
          lVar24 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar24 == 1) {
            (**(code **)*plStack_160)(plStack_160);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        if (lStack_228 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  lVar24 = param_1;
  if (*(int *)(param_1 + 1000) < iStack_2b8) {
    puVar23 = puStack_268 + (longlong)(int)uStack_260 * 2;
    puStack_2a8 = (undefined8 *)0x0;
    uStack_2a0 = 0;
    for (puVar19 = puStack_268; puVar19 != puVar23; puVar19 = puVar19 + 2) {
      lVar24 = (**(code **)(*(longlong *)*puVar19 + 0x38))();
      if (((*(byte *)(lVar24 + 0x10) & 4) != 0) &&
         (lVar24 = FUN_141069120(plVar17,puVar19), lVar24 == 0)) {
        uVar16 = (**(code **)(*(longlong *)*puVar19 + 8))((longlong *)*puVar19,auStack_e0);
        cVar11 = FUN_140bca1f0(lStack_2b0,uVar16,1);
        plVar18 = plStack_d8;
        if (plStack_d8 != (longlong *)0x0) {
          LOCK();
          plVar25 = plStack_d8 + 1;
          lVar24 = *plVar25;
          *(int *)plVar25 = (int)*plVar25 + -1;
          UNLOCK();
          if ((int)lVar24 == 1) {
            (**(code **)*plStack_d8)(plStack_d8);
            LOCK();
            piVar1 = (int *)((longlong)plVar18 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar18 + 8))(plVar18,1);
            }
          }
        }
        uVar10 = uStack_2a0;
        if (cVar11 == '\0') {
          lVar24 = (longlong)(int)uStack_2a0;
          iVar12 = (int)uStack_2a0 + 1;
          uStack_2a0 = CONCAT44(uStack_2a0._4_4_,iVar12);
          if (uStack_2a0._4_4_ < iVar12) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&puStack_2a8,uVar10 & 0xffffffff);
          }
          puStack_2a8[lVar24 * 2] = *puVar19;
          lVar15 = puVar19[1];
          (puStack_2a8 + lVar24 * 2)[1] = lVar15;
          if (lVar15 != 0) {
            LOCK();
            *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
            UNLOCK();
          }
        }
      }
      lVar24 = lStack_1a8;
    }
    if ((lVar14 != 0) && (lVar15 = FUN_140cff230(lVar14), lVar15 != 0)) {
      puVar19 = (undefined8 *)FDateTime::Now(auStack_108);
      uStack_88 = *puVar19;
      alStack_98[0] = lVar15;
      FUN_14106bb90(puStack_2a8,(longlong)(int)uStack_2a0,uStack_2b4,alStack_98);
    }
    puVar23 = puStack_2a8 + (longlong)(int)uStack_2a0 * 2;
    for (puVar19 = puStack_2a8; puVar19 != puVar23; puVar19 = puVar19 + 2) {
      uVar16 = (**(code **)(*(longlong *)*puVar19 + 8))((longlong *)*puVar19,auStack_d0);
      cVar11 = FUN_14107beb0(lVar24,uVar16);
      plVar18 = plStack_c8;
      if (plStack_c8 != (longlong *)0x0) {
        LOCK();
        plVar25 = plStack_c8 + 1;
        lVar15 = *plVar25;
        *(int *)plVar25 = (int)*plVar25 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*plStack_c8)(plStack_c8);
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar18 + 8))(plVar18,1);
          }
        }
      }
      if (cVar11 == '\0') {
        lStack_218 = 0;
        uStack_210 = 0;
        uVar16 = (**(code **)(*(longlong *)*puVar19 + 8))((longlong *)*puVar19,auStack_c0);
        FUN_141082f00(lVar24,auStack_158,uVar16);
        plVar18 = plStack_b8;
        if (plStack_b8 != (longlong *)0x0) {
          LOCK();
          plVar25 = plStack_b8 + 1;
          lVar15 = *plVar25;
          *(int *)plVar25 = (int)*plVar25 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*plStack_b8)(plStack_b8);
            LOCK();
            piVar1 = (int *)((longlong)plVar18 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar18 + 8))(plVar18,1);
            }
          }
        }
        plStack_2d0 = &lStack_218;
        uStack_2c8 = 0xbf800000;
        uStack_2d8 = CONCAT71(uStack_2d8._1_7_,1);
        cVar11 = FUN_140d7a1d0(*(undefined8 *)(lStack_2b0 + 0x478),auStack_158,lVar14,1);
        if (cVar11 != '\0') {
          aplStack_1e0[0] = (longlong *)0x0;
          puVar20 = (undefined8 *)
                    (**(code **)(*(longlong *)*puVar19 + 8))((longlong *)*puVar19,auStack_b0);
          plStack_250 = (longlong *)puVar20[1];
          uStack_1e8 = *puVar20;
          if (plStack_250 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_250 + 1) = (int)plStack_250[1] + 1;
            UNLOCK();
          }
          uStack_258 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(aplStack_1e0,&plStack_250);
          plVar18 = plStack_250;
          if (plStack_250 != (longlong *)0x0) {
            LOCK();
            plVar25 = plStack_250 + 1;
            lVar15 = *plVar25;
            *(int *)plVar25 = (int)*plVar25 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*plStack_250)(plStack_250);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              iVar12 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*plStack_250 + 8))(plStack_250,1);
              }
            }
          }
          plVar18 = plStack_a8;
          if (plStack_a8 != (longlong *)0x0) {
            LOCK();
            plVar25 = plStack_a8 + 1;
            lVar15 = *plVar25;
            *(int *)plVar25 = (int)*plVar25 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*plStack_a8)(plStack_a8);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              iVar12 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*plVar18 + 8))(plVar18,1);
              }
            }
          }
          iVar12 = *(int *)(param_1 + 1000);
          lVar15 = (longlong)iVar12;
          *(int *)(param_1 + 1000) = iVar12 + 1;
          if (*(int *)(param_1 + 0x3ec) < iVar12 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(plVar17,iVar12);
          }
          plVar18 = aplStack_1e0[0];
          lVar9 = *plVar17;
          *(undefined8 *)(lVar9 + lVar15 * 0x18) = uStack_1e8;
          *(longlong **)(lVar9 + 8 + lVar15 * 0x18) = aplStack_1e0[0];
          if (aplStack_1e0[0] != (longlong *)0x0) {
            LOCK();
            *(int *)(aplStack_1e0[0] + 1) = (int)aplStack_1e0[0][1] + 1;
            UNLOCK();
          }
          *(undefined4 *)(lVar9 + 0x10 + lVar15 * 0x18) = 0;
          FUN_1410700b0(&puStack_1d0,&lStack_218,0);
          plVar25 = aplStack_1e0[0];
          if (*(int *)(lVar24 + 1000) == iStack_2b8) {
            if (plVar18 != (longlong *)0x0) {
              LOCK();
              plVar18 = plVar18 + 1;
              lVar14 = *plVar18;
              *(int *)plVar18 = (int)*plVar18 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*aplStack_1e0[0])(aplStack_1e0[0]);
                LOCK();
                piVar1 = (int *)((longlong)plVar25 + 0xc);
                iVar12 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar12 == 1) {
                  (**(code **)(*aplStack_1e0[0] + 8))(aplStack_1e0[0],1);
                }
              }
            }
            if (plStack_150 != (longlong *)0x0) {
              LOCK();
              plVar17 = plStack_150 + 1;
              lVar14 = *plVar17;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*plStack_150)(plStack_150);
                LOCK();
                piVar1 = (int *)((longlong)plStack_150 + 0xc);
                iVar12 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar12 == 1) {
                  (**(code **)(*plStack_150 + 8))(plStack_150,1);
                }
              }
            }
            if (lStack_218 != 0) {
              FMemory::Free();
            }
            break;
          }
          if (plVar18 != (longlong *)0x0) {
            LOCK();
            plVar18 = plVar18 + 1;
            lVar15 = *plVar18;
            *(int *)plVar18 = (int)*plVar18 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*aplStack_1e0[0])(aplStack_1e0[0]);
              LOCK();
              piVar1 = (int *)((longlong)plVar25 + 0xc);
              iVar12 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*aplStack_1e0[0] + 8))(aplStack_1e0[0],1);
              }
            }
          }
        }
        plVar18 = plStack_150;
        if (plStack_150 != (longlong *)0x0) {
          LOCK();
          plVar25 = plStack_150 + 1;
          lVar15 = *plVar25;
          *(int *)plVar25 = (int)*plVar25 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*plStack_150)(plStack_150);
            LOCK();
            piVar1 = (int *)((longlong)plVar18 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar18 + 8))(plVar18,1);
            }
          }
        }
        if (lStack_218 != 0) {
          FMemory::Free();
        }
      }
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&puStack_2a8);
  }
  if ((int)uStack_1f0 < 1) goto LAB_1410a8792;
  plStack_200 = *(longlong **)(lVar24 + 0x310);
  if (plStack_200 == (longlong *)0x0) {
LAB_1410a872a:
    if ((plStack_200 == (longlong *)0x0) ||
       (lStack_208 = *(longlong *)(lVar24 + 0x308), lStack_208 == 0)) goto LAB_1410a84fb;
    pfVar21 = (float *)FUN_14203c1b0(lStack_208,auStack_100);
  }
  else {
    LOCK();
    iVar12 = (int)plStack_200[1];
    bVar26 = iVar12 == 0;
    if (bVar26) {
      *(int *)(plStack_200 + 1) = 0;
      iVar12 = 0;
    }
    UNLOCK();
    while (!bVar26) {
      LOCK();
      bVar26 = iVar12 == (int)plStack_200[1];
      if (bVar26) {
        *(int *)(plStack_200 + 1) = iVar12 + 1;
      }
      UNLOCK();
      if (bVar26) goto LAB_1410a872a;
      LOCK();
      iVar12 = (int)plStack_200[1];
      bVar26 = iVar12 == 0;
      if (bVar26) {
        *(int *)(plStack_200 + 1) = 0;
        iVar12 = 0;
      }
      UNLOCK();
    }
    plStack_200 = (longlong *)0x0;
LAB_1410a84fb:
    pfVar21 = (float *)&uStack_1a0;
    uStack_1a0 = DAT_1468b5d88;
  }
  plVar17 = *(longlong **)(lVar24 + 800);
  fVar4 = *pfVar21;
  fVar5 = pfVar21[1];
  plStack_240 = plVar17;
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    iVar12 = (int)plVar17[1];
    bVar26 = iVar12 == 0;
    if (bVar26) {
      *(int *)(plVar17 + 1) = 0;
      iVar12 = 0;
    }
    UNLOCK();
    while (!bVar26) {
      LOCK();
      bVar26 = iVar12 == (int)plVar17[1];
      if (bVar26) {
        *(int *)(plVar17 + 1) = iVar12 + 1;
      }
      UNLOCK();
      if (bVar26) {
        if ((plVar17 == (longlong *)0x0) ||
           (lStack_248 = *(longlong *)(lVar24 + 0x318), lStack_248 == 0)) goto LAB_1410a854e;
        pfVar21 = (float *)FUN_14203c1b0(lStack_248,auStack_f8);
        goto LAB_1410a855f;
      }
      LOCK();
      iVar12 = (int)plVar17[1];
      bVar26 = iVar12 == 0;
      if (bVar26) {
        *(int *)(plVar17 + 1) = 0;
        iVar12 = 0;
      }
      UNLOCK();
    }
    plStack_240 = (longlong *)0x0;
  }
LAB_1410a854e:
  pfVar21 = (float *)&uStack_198;
  uStack_198 = DAT_1468b5d88;
  plVar17 = plStack_240;
LAB_1410a855f:
  fVar6 = *pfVar21;
  fVar7 = pfVar21[1];
  fStack_298 = 0.0;
  fStack_294 = 0.0;
  if (*(longlong *)(lVar24 + 0x328) != 0) {
    FUN_142087ad0(*(longlong *)(lVar24 + 0x328),&fStack_298,&fStack_294);
  }
  uStack_190 = CONCAT44(fVar7 + fVar5 + fStack_294 + 69.0,fVar6 + fVar4 + fStack_298 + 3.0);
  if ((*(longlong *)(lVar24 + 0x348) != 0) &&
     (*(char *)(*(longlong *)(lVar24 + 0x348) + 0x1e8) != '\0')) {
    FUN_1410a8c80();
  }
  auStack_148[0] = 2;
  uStack_140 = 0;
  plStack_138 = (longlong *)0x0;
  puVar19 = (undefined8 *)FName::FName(auStack_a0,L"OnRecommendedFriendClicked",1);
  plStack_2d0 = (longlong *)((ulonglong)plStack_2d0 & 0xffffffffffffff00);
  uStack_2d8 = *puVar19;
  FUN_1410a6c30(lVar24,auStack_148,&uStack_1f8,&uStack_190);
  plVar18 = plStack_138;
  if (plStack_138 != (longlong *)0x0) {
    LOCK();
    plVar17 = plStack_138 + 1;
    lVar24 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    plVar17 = plStack_240;
    if ((int)lVar24 == 1) {
      (**(code **)*plStack_138)(plStack_138);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar17 = plStack_240;
      if (iVar12 == 1) {
        (**(code **)(*plStack_138 + 8))(plStack_138,1);
        plVar17 = plStack_240;
      }
    }
  }
  plVar18 = plStack_240;
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar17 + 1;
    lVar24 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar24 == 1) {
      (**(code **)*plStack_240)(plStack_240);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plStack_240 + 8))(plStack_240,1);
      }
    }
  }
  plVar17 = plStack_200;
  if (plStack_200 != (longlong *)0x0) {
    LOCK();
    plVar18 = plStack_200 + 1;
    lVar24 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar24 == 1) {
      (**(code **)*plStack_200)(plStack_200);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plStack_200 + 8))(plStack_200,1);
      }
    }
  }
LAB_1410a8792:
  TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>::
  ~TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>(&uStack_1f8);
  plVar17 = uStack_230;
  if (uStack_230 != (longlong *)0x0) {
    LOCK();
    plVar18 = uStack_230 + 1;
    lVar24 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar24 == 1) {
      (**(code **)*uStack_230)(uStack_230);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*uStack_230 + 8))(uStack_230,1);
      }
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&puStack_268);
  if ((int)uStack_288 != 0) {
    plVar17 = plStack_290 + 1;
    iVar12 = (int)uStack_288;
    do {
      plVar18 = (longlong *)*plVar17;
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        plVar25 = plVar18 + 1;
        lVar24 = *plVar25;
        *(int *)plVar25 = (int)*plVar25 + -1;
        UNLOCK();
        if ((int)lVar24 == 1) {
          (**(code **)*plVar18)(plVar18);
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar18 + 8))(plVar18,1);
          }
        }
      }
      plVar17 = plVar17 + 2;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  if (plStack_290 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141088520 FUN_141088520 body=93 status=ok
// SIG undefined FUN_141088520(void)

void FUN_141088520(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FUN_141095be0();
  FUN_1410a78d0(param_1);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_58[0] = &LAB_14107d920;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 141088580 thunk_FUN_14107c000 body=5 status=ok
// SIG undefined thunk_FUN_14107c000(void)

void thunk_FUN_14107c000(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *apuStack_58 [2];
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  undefined4 uStack_18;
  
  uStack_28 = 0;
  uStack_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,auStack_48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  apuStack_58[0] = &LAB_14107d920;
  FUN_14204c280(apuStack_58);
  uStack_28 = 0;
  uStack_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,auStack_48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  apuStack_58[0] = &LAB_14107d650;
  FUN_14204c280(apuStack_58);
  return;
}



// FUNCTION 141088590 FUN_141088590 body=37 status=ok
// SIG undefined FUN_141088590(void)

void FUN_141088590(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FWeakObjectPtr::Get(param_1 + 0x9fc);
  FUN_1410a95e0(param_1,uVar1);
  return;
}



// FUNCTION 1410885f0 FUN_1410885f0 body=387 status=ok
// SIG undefined FUN_1410885f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1410885f0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined1 *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uStack_e0 = *(undefined8 *)(param_2 + 8);
  lVar4 = param_1 + -0x4d8;
  local_d8 = *(undefined4 *)(param_2 + 4);
  local_98 = (longlong *)0x0;
  local_88 = 0;
  local_e8 = lVar4;
  puVar2 = (undefined8 *)FUN_140438ef0(0x20,local_b8);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = (undefined4)local_e8;
    *(undefined4 *)((longlong)puVar2 + 0xc) = local_e8._4_4_;
    *(undefined4 *)(puVar2 + 2) = (undefined4)uStack_e0;
    *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_e0._4_4_;
    *puVar2 = &PTR_FUN_143f4d0b0;
    puVar2[3] = CONCAT44(uStack_d4,local_d8);
  }
  local_c8[0] = &LAB_14107d4c0;
  uVar3 = FUN_1420849a0(lVar4,local_78,local_c8);
  FUN_14208c260(lVar4,uVar3);
  if (local_38 != 0) {
    plVar5 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar5 = local_48;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    plVar5 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar5 = local_98;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (((*(char *)(param_1 + 0x1ba) != '\0') && (lVar4 = FUN_141083c60(lVar4), lVar4 != 0)) &&
     (cVar1 = FUN_1412c3d30(lVar4,param_2), cVar1 != '\0')) {
    return 1;
  }
  uVar3 = FOutputDevice::CanBeUsedOnAnyThread(param_1,param_2);
  return uVar3;
}



// FUNCTION 141088780 FUN_141088780 body=58 status=ok
// SIG undefined FUN_141088780(void)

void FUN_141088780(longlong param_1,longlong param_2)

{
  FUN_140eaffa0(param_1 + 0x3a0,param_2 + 8,*(undefined4 *)(param_2 + 4));
  FOutputDevice::CanBeUsedOnAnyThread(param_1,param_2);
  return;
}



// FUNCTION 1410887c0 FUN_1410887c0 body=211 status=ok
// SIG undefined FUN_1410887c0(void)

void FUN_1410887c0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  lVar1 = *param_4;
  if (((((lVar1 == DAT_1468745d8) || (lVar1 == DAT_1468745e0)) || (lVar1 == DAT_1468745e8)) ||
      ((lVar1 == DAT_1468745f0 || (lVar1 == DAT_1468745f8)))) ||
     ((lVar1 == DAT_1468746d0 || (lVar1 == DAT_1468746d8)))) {
    if (*(char *)(param_1 + 0xb20) != '\x03') {
      cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xb08);
      if (cVar2 == '\0') goto LAB_141088828;
    }
    iVar3 = FUN_140ee6b70(param_1 + 0xbd8);
    if (((*(int *)(param_1 + 0xb38) != -1) && (*(int *)(param_1 + 0xb38) == iVar3)) &&
       (*(float *)(param_1 + 0xb3c) <= *(float *)(param_1 + 0xb40) &&
        *(float *)(param_1 + 0xb40) != *(float *)(param_1 + 0xb3c))) {
      FUN_1410a4260(param_1);
    }
  }
  else {
LAB_141088828:
    FUN_1410a4260(param_1);
  }
  uVar4 = FUN_140ee6b70(param_1 + 0xbd8);
  *(undefined4 *)(param_1 + 0xb38) = uVar4;
  *(undefined4 *)(param_1 + 0xb3c) = 0;
  return;
}



// FUNCTION 1410888a0 FUN_1410888a0 body=423 status=ok
// SIG undefined FUN_1410888a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410888a0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [80];
  code *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  *(undefined4 *)(param_1 + 0xb38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb3c) = 0;
  *(undefined1 *)(param_1 + 0x10e1) = 1;
  if (param_3 != (longlong *)0x0) {
    lVar2 = FUN_1413a7200();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = (**(code **)(*param_3 + 0x340))(param_3);
      if (*(char *)(lVar2 + 0x54) != '\0') {
        (**(code **)(*param_3 + 0x378))(param_3);
        if (*(longlong *)(param_1 + 0xa18) != 0) {
          lVar2 = (**(code **)(*param_3 + 0x340))(param_3);
          if (*(int *)(lVar2 + 0xd8) != -1) {
            lVar2 = (**(code **)(*param_3 + 0x340))(param_3);
            FUN_143015ae0(*(undefined8 *)(param_1 + 0xa18),lVar2 + 0xd8,0,1);
          }
        }
      }
    }
  }
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[1] = param_1;
    *puVar3 = &PTR_FUN_143f77b70;
  }
  local_68[0] = FUN_14107d590;
  uVar4 = FUN_1420849a0(param_1,local_b8,local_68);
  FUN_14208c4f0(param_1,uVar4);
  if (local_28 != 0) {
    plVar5 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar5 = local_38;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141088a70 FUN_141088a70 body=363 status=ok
// SIG undefined FUN_141088a70(void)

void FUN_141088a70(longlong param_1)

{
  longlong lVar1;
  longlong local_18 [2];
  
  if (*(char *)(param_1 + 0x1e9) == '\0') {
    *(undefined1 *)(param_1 + 0x1e8) = 0;
    FUN_1410aa290();
    if ((*(longlong *)(param_1 + 0x1a0) != 0) && (*(longlong *)(param_1 + 0x1b0) != 0)) {
      local_18[0] = 0;
      local_18[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"hide",10);
      FUN_142088910(*(undefined8 *)(param_1 + 0x1a0),local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      local_18[0] = 0;
      local_18[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"hide",10);
      FUN_142088910(*(undefined8 *)(param_1 + 0x1b0),local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    if (*(longlong *)(param_1 + 0x1c0) != 0) {
      local_18[0] = 0;
      local_18[1] = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],&DAT_14468a928,8);
      FUN_142088910(*(undefined8 *)(param_1 + 0x1c0),local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    lVar1 = FUN_142eee1b0(param_1);
    if (lVar1 != 0) {
      FUN_142f06340(lVar1,param_1 + 0x200);
      *(undefined8 *)(param_1 + 0x200) = 0;
    }
  }
  return;
}



// FUNCTION 141088be0 FUN_141088be0 body=594 status=ok
// SIG undefined FUN_141088be0(void)

void FUN_141088be0(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined2 *puVar11;
  longlong local_res10;
  longlong local_58 [2];
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  local_res10 = param_2;
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x614);
  lVar10 = 0;
  if (lVar6 != 0) {
    lVar7 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_141088c4e;
  }
  lVar6 = lVar10;
LAB_141088c4e:
  if ((((*(longlong *)(param_1 + 0x660) != 0) && (lVar6 != 0)) && (*(int *)(param_1 + 0x670) != 0))
     && ((byte)(*(char *)(param_1 + 0x658) - 2U) < 2)) {
    if (*(int *)(lVar6 + 0x128) != *(int *)(lVar6 + 0x154)) {
      lVar7 = *(longlong *)(lVar6 + 0x160);
      if (*(longlong *)(lVar6 + 0x160) == 0) {
        lVar7 = lVar6 + 0x158;
      }
      iVar5 = *(int *)(lVar7 + ((longlong)((int)((ulonglong)local_res10 >> 0x20) + (int)local_res10)
                               & (longlong)*(int *)(lVar6 + 0x168) - 1U) * 4);
      if (iVar5 != -1) {
        do {
          lVar7 = *(longlong *)(lVar6 + 0x120) + (longlong)iVar5 * 0x28;
          if (*(longlong *)(*(longlong *)(lVar6 + 0x120) + (longlong)iVar5 * 0x28) == local_res10) {
            lVar10 = 0;
            if ((iVar5 != -1) && (lVar7 != 0)) {
              lVar10 = lVar7 + 8;
            }
            break;
          }
          iVar5 = *(int *)(lVar7 + 0x20);
        } while (iVar5 != -1);
      }
    }
    FText::FText(local_38,lVar10);
    cVar4 = FText::IsEmpty(local_38);
    if (cVar4 != '\0') {
      puVar8 = (undefined8 *)FName::ToString(&local_res10,local_48);
      if (*(int *)(puVar8 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*puVar8;
      }
      FString::PrintfImpl(local_58,
                          L"[DEBUG] Missing entry for %s in UIGlobals\' ClosedCaptioning Table!",
                          puVar11);
      uVar9 = FText::FromString(local_20,local_58);
      FText::operator=(local_38,uVar9);
      if (local_18 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_18 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_18)(local_18);
          LOCK();
          piVar2 = (int *)((longlong)local_18 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_18 + 8))(local_18,1);
          }
        }
      }
      if (local_58[0] != 0) {
        FMemory::Free();
      }
      if (local_48[0] != 0) {
        FMemory::Free();
      }
    }
    FUN_1410a68d0(param_1,local_38);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  FUN_140591060(param_3);
  return;
}



// FUNCTION 141088e40 FUN_141088e40 body=96 status=ok
// SIG undefined FUN_141088e40(void)

void FUN_141088e40(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 local_res18 [16];
  
  plVar2 = (longlong *)FName::FName(local_res18,&DAT_14467ba0c,1);
  if (param_3 == *plVar2) {
    iVar1 = *(int *)(param_1 + 0x380);
    if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x378))) {
      FUN_1410a5f10(param_1,*(longlong *)(param_1 + 0x370) + (longlong)iVar1 * 2);
    }
  }
  return;
}



// FUNCTION 141088ea0 FUN_141088ea0 body=284 status=ok
// SIG undefined FUN_141088ea0(void)

void FUN_141088ea0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 local_28;
  longlong *local_20;
  undefined8 local_18;
  longlong *plStack_10;
  
  iVar7 = -1;
  if (param_2 != 0) {
    iVar7 = *(int *)(param_2 + 0x2d8);
  }
  if ((iVar7 < 0) || (*(int *)(param_1 + 1000) <= iVar7)) {
    puVar8 = &local_18;
    local_18 = 0;
    plStack_10 = (longlong *)0x0;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x3e0) + (longlong)iVar7 * 0x18);
    local_20 = *(longlong **)(*(longlong *)(param_1 + 0x3e0) + (longlong)iVar7 * 0x18 + 8);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    puVar8 = &local_28;
    bVar4 = true;
    bVar3 = false;
  }
  TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x280,puVar8);
  plVar6 = plStack_10;
  if ((bVar3) && (plStack_10 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_10)(plStack_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  plVar6 = local_20;
  if ((bVar4) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return;
}



// FUNCTION 141088fc0 FUN_141088fc0 body=279 status=ok
// SIG undefined FUN_141088fc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141088fc0(undefined8 param_1)

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
  local_b8[0] = &LAB_14107d9f0;
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
  FUN_142ebfbd0(param_1);
  return;
}



// FUNCTION 1410890e0 FUN_1410890e0 body=992 status=ok
// SIG undefined FUN_1410890e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410890e0(longlong *param_1)

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
  longlong *local_288;
  longlong *local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  longlong *local_260;
  LARGE_INTEGER local_258 [2];
  undefined1 *local_248 [2];
  undefined1 local_238 [32];
  undefined8 local_218;
  undefined4 local_208;
  undefined1 *local_1f8 [2];
  undefined1 local_1e8 [32];
  undefined8 local_1c8;
  undefined4 local_1b8;
  longlong *local_1a8;
  longlong *local_1a0;
  undefined1 local_198 [16];
  longlong local_188 [4];
  longlong *local_168;
  int local_158;
  undefined1 *local_148 [2];
  longlong local_138 [4];
  longlong *local_118;
  int local_108;
  LARGE_INTEGER local_f8 [24];
  longlong local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  if (*(char *)((longlong)param_1 + 0xd3a) != '\0') {
    plVar6 = (longlong *)0x0;
    local_218 = 0;
    local_208 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_238);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = param_1;
      *puVar4 = &PTR_FUN_143f77b70;
    }
    local_278 = 0;
    local_248[0] = &LAB_14107d6e0;
    local_270 = 0x27;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_278,0);
    local_298 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>
              (local_278,0x27,"UGFxVendingMachinePrompt::OnDeactivate");
    FUN_140cdf730(local_f8,&local_278,local_248);
    *(undefined1 *)((longlong)param_1 + 0xd39) = 0;
    (**(code **)(*param_1 + 0x580))(param_1,1);
    QueryPerformanceCounter(local_258);
    local_f8[0] = local_258[0];
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
    local_288 = plVar7;
    local_280 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_288,plVar7,plVar7);
    *(undefined1 *)(local_288 + 2) = 1;
    local_260 = (longlong *)local_288[1];
    local_38 = *local_288;
    if (local_260 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_260 + 1) = (int)local_260[1] + 1;
      UNLOCK();
    }
    local_268 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(local_30,&local_260);
    plVar6 = local_260;
    if (local_260 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_260 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_260)(local_260);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_260 + 8))(local_260,1);
        }
      }
    }
    local_118 = (longlong *)0x0;
    local_108 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_138);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_1444f8620;
      puVar4[1] = local_f8;
    }
    local_148[0] = &LAB_140cee980;
    local_1a8 = local_288;
    local_1a0 = local_280;
    if (local_280 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_280 + 1) = (int)local_280[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_198,local_148);
    local_1c8 = 0;
    local_1b8 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x70,local_1e8);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_CopyToEmptyStorage_1444f8578;
      puVar4[2] = local_1a8;
      puVar4[3] = local_1a0;
      if (local_1a0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1a0 + 1) = (int)local_1a0[1] + 1;
        UNLOCK();
      }
      TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar4 + 4,local_198);
    }
    local_1f8[0] = &LAB_140cee8d0;
    if (local_158 != 0) {
      plVar6 = local_188;
      if (local_168 != (longlong *)0x0) {
        plVar6 = local_168;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_168 != (longlong *)0x0) {
      FMemory::Free();
    }
    plVar6 = local_1a0;
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_1a0 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_1a0)(local_1a0);
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
    plVar6 = local_280;
    if (local_280 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_280 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_280)(local_280);
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
    FUN_142ebfbd0(param_1);
    FUN_140ce1dc0(local_f8);
  }
  return;
}



// FUNCTION 1410894c0 FUN_1410894c0 body=784 status=ok
// SIG undefined FUN_1410894c0(void)

void FUN_1410894c0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_28 = 0;
  local_18 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1444f8920;
    puVar3[1] = param_1;
    *(undefined4 *)(puVar3 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar3 + 0x14) = local_resc;
  }
  local_58[0] = &LAB_14107d4f0;
  FUN_14204c280(local_58);
  lVar4 = FUN_142eee1b0(param_1);
  if (lVar4 != 0) {
    FUN_142f06340(lVar4,param_1 + 0x260);
  }
  FUN_142f06340(param_1,param_1 + 0x250);
  FUN_142f06340(param_1,param_1 + 600);
  plVar1 = *(longlong **)(param_1 + 0x370);
  if (plVar1 != (longlong *)0x0) {
    lVar4 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x388);
  *(undefined8 *)(param_1 + 0x370) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar4 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x2e8);
  *(undefined8 *)(param_1 + 0x388) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar4 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x300);
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar4 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x340);
  *(undefined8 *)(param_1 + 0x300) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar4 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x328);
  *(undefined8 *)(param_1 + 0x340) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar4 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x350);
  *(undefined8 *)(param_1 + 0x328) = 0;
  if (lVar4 != 0) {
    if ((*(int *)(lVar4 + 0x30) != 0) &&
       (plVar1 = *(longlong **)(lVar4 + 0x28), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x28))(plVar1,0);
      if (*(longlong *)(lVar4 + 0x28) != 0) {
        uVar5 = FMemory::Realloc(*(longlong *)(lVar4 + 0x28),0,0);
        *(undefined8 *)(lVar4 + 0x28) = uVar5;
      }
      *(undefined4 *)(lVar4 + 0x30) = 0;
    }
    *(undefined8 *)(param_1 + 0x350) = 0;
  }
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 1410897d0 FUN_1410897d0 body=497 status=ok
// SIG undefined FUN_1410897d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410897d0(longlong param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_74;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FWeakObjectPtr::operator=(&local_78,param_1);
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1444f8920;
    puVar2[1] = param_1;
    *(undefined4 *)(puVar2 + 2) = local_78;
    *(undefined4 *)((longlong)puVar2 + 0x14) = local_74;
  }
  local_68[0] = &LAB_14107d520;
  FUN_14208c300(param_1,local_68);
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
  plVar4 = *(longlong **)(param_1 + 0x180);
  if (plVar4 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*plVar4 + 0x288))(plVar4);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x180) = 0;
  if (plVar4 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*plVar4 + 0x288))(plVar4);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x178) = 0;
  if (plVar4 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      (**(code **)(*plVar4 + 0x288))(plVar4);
    }
  }
  *(undefined8 *)(param_1 + 0x170) = 0;
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 1410899d0 FUN_1410899d0 body=137 status=ok
// SIG undefined FUN_1410899d0(void)

void FUN_1410899d0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x310);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x310) = 0;
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FUN_1411ecbf0();
  }
  FUN_142ec05c0(param_1);
  return;
}



// FUNCTION 141089a60 FUN_141089a60 body=766 status=ok
// SIG undefined FUN_141089a60(void)

void FUN_141089a60(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FUN_142f06340(*(longlong *)(param_1 + 0x1e0),param_1 + 0x1f0);
    FUN_142f06340(*(undefined8 *)(param_1 + 0x1e0),param_1 + 0x1f8);
  }
  plVar1 = *(longlong **)(param_1 + 0x1c8);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x1c0);
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 400);
  *(undefined8 *)(param_1 + 0x198) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 400) = 0;
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 141089d60 FUN_141089d60 body=279 status=ok
// SIG undefined FUN_141089d60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141089d60(undefined8 param_1)

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
  local_b8[0] = &LAB_14107d640;
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
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 141089e80 FUN_141089e80 body=965 status=ok
// SIG undefined FUN_141089e80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141089e80(undefined8 param_1)

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
  longlong *local_288;
  longlong *local_280;
  undefined4 local_278;
  undefined4 local_274;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  longlong *local_258;
  LARGE_INTEGER local_250;
  undefined1 *local_248 [2];
  undefined1 local_238 [32];
  undefined8 local_218;
  undefined4 local_208;
  undefined1 *local_1f8 [2];
  undefined1 local_1e8 [32];
  undefined8 local_1c8;
  undefined4 local_1b8;
  longlong *local_1a8;
  longlong *local_1a0;
  undefined1 local_198 [16];
  longlong local_188 [4];
  longlong *local_168;
  int local_158;
  undefined1 *local_148 [2];
  longlong local_138 [4];
  longlong *local_118;
  int local_108;
  LARGE_INTEGER local_f8 [24];
  longlong local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  FWeakObjectPtr::operator=(&local_278,param_1);
  plVar6 = (longlong *)0x0;
  local_218 = 0;
  local_208 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_238);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_1444f8920;
    puVar4[1] = param_1;
    *(undefined4 *)(puVar4 + 2) = local_278;
    *(undefined4 *)((longlong)puVar4 + 0x14) = local_274;
  }
  local_270 = 0;
  local_248[0] = &LAB_14107d9b0;
  local_268 = 0x31;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_270,0);
  local_298 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_270,0x31,"UGFxTargetedNameplate::OnDeinit::RemoveDelegates");
  FUN_140cdf730(local_f8,&local_270,local_248);
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
  local_288 = plVar7;
  local_280 = plVar6;
  SharedPointerInternals::EnableSharedFromThis(&local_288,plVar7,plVar7);
  *(undefined1 *)(local_288 + 2) = 1;
  local_258 = (longlong *)local_288[1];
  local_38 = *local_288;
  if (local_258 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_258 + 1) = (int)local_258[1] + 1;
    UNLOCK();
  }
  local_260 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_30,&local_258);
  plVar6 = local_258;
  if (local_258 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_258 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_258)(local_258);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_258 + 8))(local_258,1);
      }
    }
  }
  local_118 = (longlong *)0x0;
  local_108 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_138);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_1444f8620;
    puVar4[1] = local_f8;
  }
  local_148[0] = &LAB_140cee980;
  local_1a8 = local_288;
  local_1a0 = local_280;
  if (local_280 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_280 + 1) = (int)local_280[1] + 1;
    UNLOCK();
  }
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_198,local_148);
  local_1c8 = 0;
  local_1b8 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x70,local_1e8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_CopyToEmptyStorage_1444f8578;
    puVar4[2] = local_1a8;
    puVar4[3] = local_1a0;
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1a0 + 1) = (int)local_1a0[1] + 1;
      UNLOCK();
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar4 + 4,local_198);
  }
  local_1f8[0] = &LAB_140cee8d0;
  if (local_158 != 0) {
    plVar6 = local_188;
    if (local_168 != (longlong *)0x0) {
      plVar6 = local_168;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_168 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar6 = local_1a0;
  if (local_1a0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1a0 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_1a0)(local_1a0);
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
  plVar6 = local_280;
  if (local_280 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_280 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_280)(local_280);
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
  FUN_142032330(local_1f8);
  FUN_140d1b3a0(local_f8);
  FUN_140ce1dc0(local_f8);
  return;
}



// FUNCTION 14108a250 FUN_14108a250 body=120 status=ok
// SIG undefined FUN_14108a250(void)

void FUN_14108a250(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x188);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x188) = 0;
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 14108a2d0 FUN_14108a2d0 body=279 status=ok
// SIG undefined FUN_14108a2d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14108a2d0(undefined8 param_1)

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
  local_b8[0] = &LAB_14107d6d0;
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
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 14108a3f0 FUN_14108a3f0 body=297 status=ok
// SIG undefined FUN_14108a3f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14108a3f0(longlong param_1)

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
  if (*(longlong *)(param_1 + 0x680) != 0) {
    local_88 = (longlong *)0x0;
    local_78 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = param_1;
      *puVar1 = &PTR_FUN_143f77b70;
    }
    local_b8[0] = &LAB_14107d7d0;
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
  }
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 14108a520 FUN_14108a520 body=64 status=ok
// SIG undefined FUN_14108a520(void)

void FUN_14108a520(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x638) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x638) + 0x288))();
  }
  if (*(longlong **)(param_1 + 0x630) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x630) + 0x288))();
  }
  FUN_142ec0310(param_1);
  return;
}



// FUNCTION 14108a560 FUN_14108a560 body=385 status=ok
// SIG undefined FUN_14108a560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14108a560(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_84 = 0xffffffff;
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_14170c210(&local_84);
  }
  local_88 = 0xffffffff;
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_14170c210(&local_88);
  }
  FWeakObjectPtr::operator=(&local_80,param_1);
  uVar2 = local_84;
  uVar3 = local_88;
  local_88 = 0xffffffff;
  local_84 = 0xffffffff;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14461b550;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_80;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_7c;
    *(undefined4 *)(puVar1 + 3) = uVar3;
    uVar3 = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = uVar2;
    uVar2 = 0xffffffff;
  }
  local_78[0] = &LAB_14107da20;
  FUN_14208c300(param_1,local_78);
  if (local_38 != 0) {
    plVar4 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar4 = local_48;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1416f8340(uVar2);
  FUN_1416f8340(uVar3);
  FUN_1416f8340(local_88);
  FUN_1416f8340(local_84);
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 14108a6f0 FUN_14108a6f0 body=209 status=ok
// SIG undefined FUN_14108a6f0(void)

void FUN_14108a6f0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x480);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x200);
  *(undefined8 *)(param_1 + 0x480) = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UPlatformInterfaceBase::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x288))(plVar1);
    }
  }
  *(undefined8 *)(param_1 + 0x200) = 0;
  thunk_FUN_14208af70(param_1);
  return;
}



// FUNCTION 14108a800 FUN_14108a800 body=770 status=ok
// SIG undefined FUN_14108a800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14108a800(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  ulonglong *puStack_110;
  undefined8 local_108;
  longlong local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [16];
  undefined1 local_90 [24];
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if ((*(longlong *)(param_1 + 0xdb8) != 0) && (*(longlong *)(param_1 + 0xdc0) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0xdc0) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      lVar6 = FText::FText(local_90);
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_b8,L"SORT BY: {0}",L"GFxVendingMachineMenu",L"FormattedSortText");
      puVar8 = (undefined8 *)FTextFormat::FTextFormat(local_a0,uVar7);
      local_78[0] = 4;
      FText::FText(local_68,lVar6);
      local_108 = *puVar8;
      local_118 = local_78;
      puStack_110 = local_48;
      local_100 = puVar8[1];
      local_50 = '\x01';
      if (local_100 != 0) {
        LOCK();
        *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
        UNLOCK();
      }
      uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_f8,&local_118);
      uVar7 = FText::Format(local_d0,&local_108,uVar7);
      FText::FText(local_e8,uVar7);
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_c8 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_c8)(local_c8);
          LOCK();
          piVar1 = (int *)((longlong)local_c8 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_c8 + 8))(local_c8,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_f8);
      if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
        LOCK();
        plVar3 = local_60 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)local_60 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
      plVar3 = (longlong *)puVar8[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      plVar3 = *(longlong **)(lVar6 + 8);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      UMistDebugEntityScreen::InspectEntity(param_1 + 0xdb0,local_e8,1,0);
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_e0 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar1 = (int *)((longlong)local_e0 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_e0 + 8))(local_e0,1);
          }
        }
      }
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_b0 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar1 = (int *)((longlong)local_b0 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_b0 + 8))(local_b0,1);
          }
        }
      }
    }
  }
  if ((*(longlong *)(param_1 + 0xda0) != 0) && (*(longlong *)(param_1 + 0xda8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0xda8) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0xd98,param_3,1,0);
    }
  }
  return;
}



// FUNCTION 14108ab10 FUN_14108ab10 body=499 status=ok
// SIG undefined FUN_14108ab10(void)

void FUN_14108ab10(longlong param_1,undefined1 param_2,undefined1 param_3,char param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x240);
  if (lVar7 != 0) {
    lVar8 = UMovieScene3DTransformSection::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14108ab87;
  }
  lVar7 = 0;
LAB_14108ab87:
  cVar4 = UNF_CustomizationStatics::IsWeaponType(param_2);
  cVar5 = UNF_CustomizationStatics::IsWeaponType(param_3);
  if ((cVar4 == '\0') || (cVar5 != '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((cVar4 == '\0') && (cVar5 != '\0')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    if ((bVar1) && (param_4 == '\0')) {
      if (*(longlong *)(param_1 + 0x178) != 0) {
        iVar6 = FUN_142eb7440();
        if (iVar6 != 0) {
          cVar4 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x178) + 0x170) + 0x40))();
          if (cVar4 != '\0') {
            FUN_142f0d400(*(undefined8 *)(param_1 + 0x1e0),*(undefined8 *)(param_1 + 0x178),0);
          }
        }
      }
    }
    else if (bVar2) {
      FUN_142f0d400(*(longlong *)(param_1 + 0x1e0),0,0);
      FUN_1410854a0(param_1 + -0x170);
      if (*(char *)(param_1 + 0x238) != '\0') {
        FUN_1410850c0(param_1 + -0x170,1);
      }
      if ((*(longlong *)(param_1 + 0x1d8) == 0) ||
         (*(char *)(*(longlong *)(param_1 + 0x1d8) + 0x1e8) == '\0')) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (*(longlong *)(param_1 + 0x1d8) != 0)) {
        FUN_1410a8c80();
      }
    }
  }
  if (lVar7 != 0) {
    if (bVar1) {
      FUN_14110fb10(lVar7,1);
    }
    if (bVar2) {
      FUN_14110fb10(lVar7,0);
    }
  }
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x240);
  if (lVar7 != 0) {
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x240);
    LOCK();
    *(undefined4 *)(lVar7 + 0x588) = 1;
    UNLOCK();
  }
  FUN_1410a2390(param_1 + -0x170);
  return;
}



// FUNCTION 14108ad10 FUN_14108ad10 body=370 status=ok
// SIG undefined FUN_14108ad10(void)

void FUN_14108ad10(longlong param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  cVar5 = UNF_CustomizationStatics::IsWeaponType(param_2);
  cVar6 = UNF_CustomizationStatics::IsWeaponType(param_3);
  if ((cVar5 == '\0') || (cVar6 != '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((cVar5 == '\0') && (cVar6 != '\0')) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  iVar2 = *(int *)(param_1 + 0x104);
  if (bVar3) {
    plVar1 = (longlong *)(param_1 + -0x170);
    FUN_14107e060(plVar1);
    iVar7 = *(int *)(param_1 + 0x1f0);
    if ((iVar7 < 0) || (*(int *)(param_1 + 0x110) <= iVar7)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_142ed4500(plVar1,iVar7,0,0);
      (**(code **)(*plVar1 + 0x300))(plVar1);
    }
    *(undefined4 *)(param_1 + 0x1f0) = 0xffffffff;
  }
  else if (bVar4) {
    lVar8 = (**(code **)(*(longlong *)(param_1 + -0x170) + 0x2b0))();
    if (lVar8 != 0) {
      FUN_142ed2820(lVar8,1);
    }
  }
  FUN_142ec1910(param_1,param_2,param_3,param_4);
  iVar7 = FUN_142eb7a00(param_1 + -0x170);
  if ((iVar7 != iVar2) && (iVar2 != -1)) {
    lVar8 = (**(code **)(*(longlong *)(param_1 + -0x170) + 0x2b0))(param_1 + -0x170);
    if (lVar8 != 0) {
      lVar9 = UXGameInstance::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_14109f5d0(lVar8);
      }
    }
  }
  return;
}



// FUNCTION 14108ae90 FUN_14108ae90 body=258 status=ok
// SIG undefined FUN_14108ae90(void)

void FUN_14108ae90(longlong param_1,undefined1 param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  
  FUN_142ec1910();
  cVar4 = UNF_CustomizationStatics::IsWeaponType(param_2);
  cVar5 = UNF_CustomizationStatics::IsWeaponType();
  if ((cVar4 == '\0') || (cVar5 != '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((cVar4 == '\0') && (cVar5 != '\0')) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (!bVar2) {
    if (bVar3) {
      TBaseDelegate<void>::ExecuteIfBound(param_1 + 0x1b0);
    }
    return;
  }
  iVar1 = *(int *)(param_1 + 0x110);
  iVar7 = 0;
  if (0 < iVar1) {
    do {
      lVar6 = FUN_142eb6a30(param_1 + -0x170,iVar7);
      if (lVar6 != 0) {
        FUN_142ed3610(lVar6 + 0x170,0);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x1f8);
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x110))) {
    (**(code **)(*(longlong *)(param_1 + -0x170) + 0x2b8))(param_1 + -0x170,iVar1,0,0);
  }
  *(undefined4 *)(param_1 + 0x1f8) = 0xffffffff;
  return;
}



// FUNCTION 14108afa0 FUN_14108afa0 body=269 status=ok
// SIG undefined FUN_14108afa0(void)

void FUN_14108afa0(longlong param_1,undefined1 param_2,undefined8 param_3,undefined1 param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    cVar3 = UNF_CustomizationStatics::IsWeaponType(param_2);
    cVar4 = UNF_CustomizationStatics::IsWeaponType();
    if ((cVar3 == '\0') || (cVar4 != '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((cVar3 == '\0') && (cVar4 != '\0')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar1) {
      if ((*(longlong *)(param_1 + 0x60) != 0) &&
         (cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x68), cVar3 != '\0')) {
        lVar5 = FWeakObjectPtr::Get(param_1 + 0x68);
        if (lVar5 != 0) {
          uVar6 = UBlendableInterface::GetPrivateStaticClass();
          lVar5 = UObjectBaseUtility::GetInterfaceAddress(lVar5,uVar6);
          if (lVar5 != 0) {
            FUN_142ed3610(lVar5,0);
          }
        }
        uVar6 = FWeakObjectPtr::Get(param_1 + 0x68);
        FUN_142f0d400(*(undefined8 *)(param_1 + 0x60),uVar6,0);
        FWeakObjectPtr::operator=(&local_res8,0);
        *(undefined4 *)(param_1 + 0x68) = local_res8;
        *(undefined4 *)(param_1 + 0x6c) = local_resc;
        return;
      }
      uVar6 = *(undefined8 *)(param_1 + 0x38);
    }
    else {
      if (!bVar2) {
        return;
      }
      param_4 = 0;
      uVar6 = 0;
    }
    FUN_142f0d400(*(undefined8 *)(param_1 + 0x60),uVar6,param_4);
  }
  return;
}



// FUNCTION 14108b0b0 FUN_14108b0b0 body=93 status=ok
// SIG undefined FUN_14108b0b0(void)

ulonglong FUN_14108b0b0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint7 uVar5;
  ulonglong uVar4;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x3b0);
  uVar4 = 0;
  if (lVar2 != 0) {
    lVar3 = UMovieScene3DTransformSection::GetPrivateStaticClass();
    uVar5 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      uVar4 = (ulonglong)uVar5 << 8;
    }
    else {
      uVar4 = CONCAT71(uVar5,1);
    }
    if ((char)uVar4 != '\0') {
      LOCK();
      uVar1 = *(uint *)(lVar2 + 0x588);
      *(uint *)(lVar2 + 0x588) = 1;
      uVar4 = (ulonglong)uVar1;
      UNLOCK();
    }
  }
  return uVar4;
}



// FUNCTION 14108b130 FUN_14108b130 body=175 status=ok
// SIG undefined FUN_14108b130(void)

void FUN_14108b130(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142ec1f90();
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x680);
  if (lVar2 != 0) {
    lVar3 = FUN_1413a3fb0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14108b18e;
  }
  lVar2 = 0;
LAB_14108b18e:
  if (*(longlong *)(param_1 + 0xa88) != 0) {
    *(longlong *)(*(longlong *)(param_1 + 0xa88) + 0x1c0) = lVar2;
    FUN_1410a0590(*(undefined8 *)(param_1 + 0xa88),param_1 + 0xaa0,*(undefined8 *)(param_1 + 0x688))
    ;
    (**(code **)(**(longlong **)(param_1 + 0xa88) + 0x278))(*(longlong **)(param_1 + 0xa88),1);
  }
  FUN_142ecd4d0(param_1);
  return;
}



// FUNCTION 14108b1e0 FUN_14108b1e0 body=185 status=ok
// SIG undefined FUN_14108b1e0(void)

void FUN_14108b1e0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142ec1f90();
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x680);
  if (lVar2 != 0) {
    lVar3 = AUGBossFlyingAIController::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong *)(lVar2 + 0xa88) != 0)) {
      *(longlong *)(*(longlong *)(lVar2 + 0xa88) + 0x1c0) = param_1;
      if (*(longlong *)(lVar2 + 0xa88) != 0) {
        *(longlong *)(*(longlong *)(lVar2 + 0xa88) + 0x1c0) = param_1;
        FUN_1410a0590(*(undefined8 *)(lVar2 + 0xa88),lVar2 + 0xaa0,*(undefined8 *)(lVar2 + 0x688));
        (**(code **)(**(longlong **)(lVar2 + 0xa88) + 0x278))(*(longlong **)(lVar2 + 0xa88),1);
      }
    }
  }
  return;
}



// FUNCTION 14108b2a0 FUN_14108b2a0 body=4423 status=ok
// SIG undefined FUN_14108b2a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14108b2a0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  wchar_t *pwVar4;
  char *pcVar5;
  char cVar6;
  undefined4 uVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  undefined8 uVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  longlong *plVar16;
  undefined4 *puVar17;
  int iVar18;
  int *piVar19;
  char *pcVar20;
  char *pcVar21;
  int *piVar22;
  int iVar23;
  char *pcVar24;
  int iVar25;
  wchar_t *pwVar26;
  ulonglong uVar27;
  longlong *plVar28;
  uint uVar29;
  ulonglong uVar30;
  undefined1 auStack_238 [32];
  undefined4 local_218;
  undefined8 local_210;
  undefined1 local_208;
  undefined8 local_200;
  undefined1 local_1f8;
  undefined8 local_1e8;
  undefined1 local_1e0 [8];
  int local_1d8;
  int local_1d4;
  longlong local_1d0;
  int local_1c8;
  int local_1c4;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  longlong local_1a8;
  int local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  ulonglong local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  longlong local_150;
  longlong local_148;
  undefined8 local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  undefined8 local_98 [2];
  undefined1 *local_88;
  longlong lStack_80;
  longlong *local_78;
  undefined1 local_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  FUN_142ec1f90();
  *(undefined4 *)(param_1 + 0x9f0) = 0;
  *(undefined4 *)(param_1 + 0x9e8) = 0;
  if (*(int *)(param_1 + 0x9ec) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x9e0,0);
  }
  if (*(longlong *)(param_1 + 0xa18) != 0) {
    uVar7 = FUN_142b47070();
    *(undefined4 *)(param_1 + 0x9f0) = uVar7;
    FUN_142ffa060(*(undefined8 *)(param_1 + 0xa18),0,param_1 + 0x9e0);
  }
  *(undefined1 *)(param_1 + 0xb20) = 2;
  *(undefined1 *)(param_1 + 0x938) = 0;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  pwVar26 = *(wchar_t **)(DAT_146b33f38 + 0x90);
  if (pwVar26 != (wchar_t *)0x0) {
    lVar8 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(pwVar26 + 8) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar26 + 8) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_14108b39b;
  }
  pwVar26 = (wchar_t *)0x0;
LAB_14108b39b:
  if ((*(longlong *)(param_1 + 0xde8) != 0) && (*(longlong *)(param_1 + 0xdf0) != 0)) {
    piVar19 = (int *)(*(longlong *)(param_1 + 0xdf0) + 8);
    LOCK();
    iVar23 = *piVar19;
    if (iVar23 == 0) {
      *piVar19 = 0;
      iVar23 = 0;
    }
    UNLOCK();
    if (0 < iVar23) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0xde0,param_1 + 0xfd8,1,0);
    }
  }
  pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnBackpackGridItemSelected",L"::");
  pwVar11 = (wchar_t *)0x0;
  while (pwVar4 = pwVar9, pwVar4 != (wchar_t *)0x0) {
    pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
    pwVar11 = pwVar4;
  }
  FName::FName(&local_150,pwVar11 + 2,1);
  plVar16 = (longlong *)(param_1 + 0xbd8);
  FWeakObjectPtr::operator=(&local_1d8,0);
  local_1d0 = 0;
  FWeakObjectPtr::operator=(&local_1d8,param_1);
  local_1d0 = local_150;
  local_1e8 = 0;
  if ((local_150 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_1d8), lVar8 != 0)) {
    UObject::FindFunction(lVar8,local_1d0);
  }
  piVar19 = (int *)*plVar16;
  iVar23 = *(int *)(param_1 + 0xbe0);
  for (piVar22 = piVar19; piVar22 != piVar19 + (longlong)iVar23 * 4; piVar22 = piVar22 + 4) {
    if (((*piVar22 == local_1d8) && (piVar22[1] == local_1d4)) ||
       ((cVar6 = FWeakObjectPtr::IsValid(piVar22), cVar6 == '\0' &&
        (cVar6 = FWeakObjectPtr::IsValid(&local_1d8), cVar6 == '\0')))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (*(longlong *)(piVar22 + 2) == local_1d0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      if ((int)((longlong)piVar22 - (longlong)piVar19 >> 4) != -1) goto LAB_14108b528;
      break;
    }
  }
  iVar23 = *(int *)(param_1 + 0xbe0);
  *(int *)(param_1 + 0xbe0) = iVar23 + 1;
  if (*(int *)(param_1 + 0xbe4) < iVar23 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar16,iVar23);
  }
  piVar19 = (int *)((longlong)iVar23 * 0x10 + *plVar16);
  *piVar19 = local_1d8;
  piVar19[1] = local_1d4;
  *(longlong *)(piVar19 + 2) = local_1d0;
LAB_14108b528:
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar16);
  pwVar9 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnBackpackGridItemClicked",L"::");
  pwVar11 = (wchar_t *)0x0;
  while (pwVar4 = pwVar9, pwVar4 != (wchar_t *)0x0) {
    pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
    pwVar11 = pwVar4;
  }
  FName::FName(&local_148,pwVar11 + 2,1);
  plVar16 = (longlong *)(param_1 + 0xbe8);
  FWeakObjectPtr::operator=(&local_1c8,0);
  local_1c0 = 0;
  FWeakObjectPtr::operator=(&local_1c8,param_1);
  local_1c0 = local_148;
  local_1e8 = 0;
  if ((local_148 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_1c8), lVar8 != 0)) {
    UObject::FindFunction(lVar8,local_1c0);
  }
  piVar19 = (int *)*plVar16;
  iVar23 = *(int *)(param_1 + 0xbf0);
  for (piVar22 = piVar19; piVar22 != piVar19 + (longlong)iVar23 * 4; piVar22 = piVar22 + 4) {
    if (((*piVar22 == local_1c8) && (piVar22[1] == local_1c4)) ||
       ((cVar6 = FWeakObjectPtr::IsValid(piVar22), cVar6 == '\0' &&
        (cVar6 = FWeakObjectPtr::IsValid(&local_1c8), cVar6 == '\0')))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (*(longlong *)(piVar22 + 2) == local_1c0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      if ((int)((longlong)piVar22 - (longlong)piVar19 >> 4) != -1) goto LAB_14108b682;
      break;
    }
  }
  iVar23 = *(int *)(param_1 + 0xbf0);
  *(int *)(param_1 + 0xbf0) = iVar23 + 1;
  if (*(int *)(param_1 + 0xbf4) < iVar23 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar16,iVar23);
  }
  piVar19 = (int *)((longlong)iVar23 * 0x10 + *plVar16);
  *piVar19 = local_1c8;
  piVar19[1] = local_1c4;
  *(longlong *)(piVar19 + 2) = local_1c0;
LAB_14108b682:
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar16);
  FUN_14172a070(local_1e0,0);
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_198 = 0;
  uVar10 = UMaterialParameterCollectionInstance::GetPrivateStaticClass();
  local_1f8 = 0;
  local_200 = 0;
  local_208 = 0;
  local_210 = 0;
  local_218 = 0;
  uVar10 = FUN_1417985e0(uVar10,param_1,0,0);
  *(undefined8 *)(param_1 + 0x850) = uVar10;
  FUN_14172a400(local_1e0);
  if ((*(longlong *)(param_1 + 0x850) != 0) && (pwVar26 != (wchar_t *)0x0)) {
    local_c0 = *(undefined4 *)(pwVar26 + 0x5bc);
    uStack_b8 = *(undefined4 *)(pwVar26 + 0x5c0);
    uStack_b4 = *(undefined4 *)(pwVar26 + 0x5c2);
    uStack_bc = *(undefined4 *)(param_1 + 0x960);
    local_b0 = *(undefined8 *)(pwVar26 + 0x5c4);
    FUN_1411f9620(*(longlong *)(param_1 + 0x850),&local_c0);
    uStack_1b0 = 0;
    local_1b8 = &LAB_14109d930;
    lStack_80 = (ulonglong)uStack_1ac << 0x20;
    local_88 = &LAB_14109d930;
    pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnThumbnailLoaded",L"::");
    pwVar26 = (wchar_t *)0x0;
    while (pwVar9 = pwVar11, pwVar9 != (wchar_t *)0x0) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar9 + 1,L"::");
      pwVar26 = pwVar9;
    }
    FName::FName(&local_140,pwVar26 + 2,1);
    FUN_1407260e0(*(longlong *)(param_1 + 0x850) + 0xe8,param_1,&local_88,local_140);
  }
  uVar27 = 0;
  local_50 = *(undefined8 *)(param_1 + 3000);
  plVar16 = (longlong *)(param_1 + 0xb10);
  uStack_48 = *(undefined8 *)(param_1 + 0xbc8);
  local_40 = *(undefined8 *)(param_1 + 0xbc0);
  *(undefined4 *)(param_1 + 0xb18) = 3;
  TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
            (plVar16,3,*(undefined4 *)(param_1 + 0xb1c));
  puVar17 = (undefined4 *)*plVar16;
  *puVar17 = (undefined4)local_50;
  puVar17[1] = local_50._4_4_;
  puVar17[2] = (undefined4)uStack_48;
  puVar17[3] = uStack_48._4_4_;
  *(undefined8 *)(puVar17 + 4) = local_40;
  FUN_142ed2600(*(undefined8 *)(param_1 + 3000),3);
  FUN_142ed2600(*(undefined8 *)(param_1 + 0xbc8),3);
  FUN_142ed2600(*(undefined8 *)(param_1 + 0xbc0),3);
  pcVar24 = *(char **)(param_1 + 0x8b8);
  pcVar21 = pcVar24 + *(int *)(param_1 + 0x8c0);
  iVar23 = (int)pcVar24;
  for (pcVar20 = pcVar24; pcVar5 = pcVar24, pcVar20 != pcVar21; pcVar20 = pcVar20 + 1) {
    if (*pcVar20 == '\0') {
      iVar18 = (int)pcVar20 - iVar23;
      goto joined_r0x00014108b88c;
    }
  }
  iVar18 = -1;
joined_r0x00014108b88c:
  do {
    if (pcVar5 == pcVar21) break;
    if (*pcVar5 == '\x01') {
      iVar25 = (int)pcVar5 - iVar23;
      goto joined_r0x00014108b8ae;
    }
    pcVar5 = pcVar5 + 1;
  } while( true );
  iVar25 = -1;
joined_r0x00014108b8ae:
  do {
    if (pcVar24 == pcVar21) break;
    if (*pcVar24 == '\x02') {
      iVar23 = (int)pcVar24 - iVar23;
      goto LAB_14108b8c8;
    }
    pcVar24 = pcVar24 + 1;
  } while( true );
  iVar23 = -1;
LAB_14108b8c8:
  if (((((-1 < iVar18) && (-1 < iVar23)) && (-1 < iVar25)) &&
      ((iVar2 = *(int *)(param_1 + 0xb18), iVar18 < iVar2 && (iVar23 < iVar2)))) && (iVar25 < iVar2)
     ) {
    *(undefined8 *)(*plVar16 + (longlong)iVar18 * 8) = *(undefined8 *)(param_1 + 3000);
    *(undefined8 *)(*plVar16 + (longlong)iVar23 * 8) = *(undefined8 *)(param_1 + 0xbc0);
    *(undefined8 *)(*plVar16 + (longlong)iVar25 * 8) = *(undefined8 *)(param_1 + 0xbc8);
  }
  uVar30 = uVar27;
  if (0 < *(int *)(param_1 + 0xb18)) {
    do {
      if (*(longlong *)(*plVar16 + uVar27) != 0) {
        pwVar11 = _guard_xfg_dispatch_icall_nop
                            (L"&UGFxVendingMachineMenu::OnNavMenuItemClicked",L"::");
        pwVar26 = (wchar_t *)0x0;
        while (pwVar9 = pwVar11, pwVar9 != (wchar_t *)0x0) {
          pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar9 + 1,L"::");
          pwVar26 = pwVar9;
        }
        FName::FName(&local_138,pwVar26 + 2,1);
        lVar12 = local_138;
        lVar8 = *(longlong *)(*plVar16 + uVar27);
        FWeakObjectPtr::operator=(lVar8 + 0x1b0,param_1);
        *(longlong *)(lVar8 + 0x1b8) = lVar12;
        local_1e8 = 0;
        if ((lVar12 != 0) && (lVar12 = FWeakObjectPtr::Get(lVar8 + 0x1b0), lVar12 != 0)) {
          UObject::FindFunction(lVar12,*(undefined8 *)(lVar8 + 0x1b8));
        }
      }
      uVar29 = (int)uVar30 + 1;
      uVar27 = uVar27 + 8;
      uVar30 = (ulonglong)uVar29;
    } while ((int)uVar29 < *(int *)(param_1 + 0xb18));
  }
  *(undefined1 *)(param_1 + 0xb78) = 0;
  *(undefined4 *)(param_1 + 0xb44) = 1;
  if (*(longlong *)(param_1 + 0xb70) != 0) {
    local_170 = 0;
    local_168 = 0;
    local_160 = 0;
    local_158 = 0;
    FWeakObjectPtr::operator=(&local_170,0);
    FWeakObjectPtr::operator=(&local_168,0);
    FWeakObjectPtr::operator=(&local_160,0);
    FWeakObjectPtr::operator=(&local_158,0);
    lVar8 = *(longlong *)(param_1 + 0xb70);
    local_f0 = lVar8;
    if (lVar8 == 0) {
      local_e8 = 0;
    }
    else {
      uVar10 = UBlendableInterface::GetPrivateStaticClass();
      local_e8 = UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar10);
    }
    FUN_142ecfd10(param_1,&local_f0,&local_170);
    pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnVendingItemClicked",L"::");
    pwVar26 = (wchar_t *)0x0;
    while (pwVar9 = pwVar11, pwVar9 != (wchar_t *)0x0) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar9 + 1,L"::");
      pwVar26 = pwVar9;
    }
    FName::FName(&local_130,pwVar26 + 2,1);
    lVar8 = *(longlong *)(param_1 + 0xb70);
    FWeakObjectPtr::operator=(lVar8 + 0x1b0,param_1);
    local_1e8 = 0;
    *(longlong *)(lVar8 + 0x1b8) = local_130;
    if ((local_130 != 0) && (lVar12 = FWeakObjectPtr::Get(lVar8 + 0x1b0), lVar12 != 0)) {
      UObject::FindFunction(lVar12,*(undefined8 *)(lVar8 + 0x1b8));
    }
    (**(code **)(**(longlong **)(param_1 + 0xb70) + 0x278))(*(longlong **)(param_1 + 0xb70),0);
  }
  lVar8 = *(longlong *)(param_1 + 0xb70);
  *(undefined4 *)(param_1 + 0xb24) = 0;
  if (lVar8 != 0) {
    local_108 = 0;
    local_110 = lVar8;
    uVar10 = UBlendableInterface::GetPrivateStaticClass();
    local_108 = UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar10);
    FUN_142ed36d0(param_1,&local_110,0);
    if (*(longlong *)(param_1 + 0xb50) != 0) {
      FUN_140b719f0(*(longlong *)(param_1 + 0xb50),0);
    }
    FUN_14109e980(param_1);
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  FUN_1410a1ff0(param_1);
  if (((*(longlong *)(param_1 + 0xaf0) != 0) && (*(longlong *)(param_1 + 0xaf8) != 0)) &&
     (*(longlong *)(param_1 + 0x838) != 0)) {
    pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnRigthItemCardReady",L"::");
    pwVar26 = (wchar_t *)0x0;
    while (pwVar9 = pwVar11, pwVar9 != (wchar_t *)0x0) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar9 + 1,L"::");
      pwVar26 = pwVar9;
    }
    FName::FName(&local_128,pwVar26 + 2,1);
    lVar8 = *(longlong *)(param_1 + 0xaf0);
    FWeakObjectPtr::operator=(lVar8 + 0x198,param_1);
    local_1e8 = 0;
    *(longlong *)(lVar8 + 0x1a0) = local_128;
    if ((local_128 != 0) && (lVar12 = FWeakObjectPtr::Get(lVar8 + 0x198), lVar12 != 0)) {
      UObject::FindFunction(lVar12,*(undefined8 *)(lVar8 + 0x1a0));
    }
    pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnLeftItemCardReady",L"::");
    pwVar26 = (wchar_t *)0x0;
    while (pwVar9 = pwVar11, pwVar9 != (wchar_t *)0x0) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar9 + 1,L"::");
      pwVar26 = pwVar9;
    }
    FName::FName(&local_120,pwVar26 + 2,1);
    lVar8 = *(longlong *)(param_1 + 0xaf8);
    FWeakObjectPtr::operator=(lVar8 + 0x198,param_1);
    local_1e8 = 0;
    *(longlong *)(lVar8 + 0x1a0) = local_120;
    if ((local_120 != 0) && (lVar12 = FWeakObjectPtr::Get(lVar8 + 0x198), lVar12 != 0)) {
      UObject::FindFunction(lVar12,*(undefined8 *)(lVar8 + 0x1a0));
    }
    FUN_140f70290(*(undefined8 *)(param_1 + 0xaf0),*(undefined8 *)(param_1 + 0x838));
    FUN_140f70290(*(undefined8 *)(param_1 + 0xaf8),*(undefined8 *)(param_1 + 0x838));
  }
  local_190 = 0;
  lVar8 = FWeakObjectPtr::Get(param_1 + 0x594);
  if (lVar8 != 0) {
    lVar12 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8)
        != lVar12 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_14108bda0;
  }
  lVar8 = 0;
LAB_14108bda0:
  FUN_140eb0f20(param_1 + 0x878,lVar8,param_1 + 0x7f8,&local_190);
  FUN_140ec1260(param_1 + 0x878);
  *(undefined1 *)(param_1 + 0x10e1) = 1;
  FUN_1410aa5d0(param_1,1);
  lVar8 = *(longlong *)(param_1 + 0xdf8);
  if (lVar8 != 0) {
    if (*(longlong *)(param_1 + 0xb58) == 0) {
      cVar6 = '\0';
    }
    else {
      cVar6 = *(char *)(*(longlong *)(param_1 + 0xb58) + 0x670);
    }
    lVar12 = *(longlong *)(param_1 + 0xa18);
    if (*(longlong *)(lVar8 + 0x480) != 0) {
      lVar13 = FUN_140e97290(param_1);
      FUN_140f0b470(*(undefined8 *)(lVar8 + 0x480),*(undefined4 *)(param_1 + 0x954));
      FUN_140f0a9a0(*(undefined8 *)(lVar8 + 0x480),*(undefined4 *)(param_1 + 0x95c));
      FUN_140f08510(*(undefined8 *)(lVar8 + 0x480),*(undefined4 *)(param_1 + 0x958));
      if ((lVar13 != 0) && (lVar12 != 0)) {
        if (cVar6 == '\x03') {
          puVar14 = (undefined8 *)FUN_1411e2300();
        }
        else {
          puVar14 = (undefined8 *)FUN_1411e4840(lVar13);
        }
        uVar7 = FUN_142ff7c90(lVar12,*puVar14);
        FUN_140f0abd0(*(undefined8 *)(lVar8 + 0x480),*puVar14,uVar7,1);
      }
    }
  }
  uVar10 = 0;
  FUN_141086490(param_1);
  FUN_1410abe70(param_1);
  lVar8 = *(longlong *)(param_1 + 0xb70);
  if (lVar8 != 0) {
    local_f8 = 0;
    local_100 = lVar8;
    uVar15 = UBlendableInterface::GetPrivateStaticClass();
    local_f8 = UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar15);
    FUN_142ed36d0(param_1,&local_100,0);
    FUN_14109e980(param_1);
  }
  *(undefined1 *)(param_1 + 0x10e1) = 1;
  LOCK();
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  FUN_1410a9b00(param_1);
  LOCK();
  *(undefined4 *)(param_1 + 0x9cc) = 1;
  UNLOCK();
  lVar8 = FWeakObjectPtr::Get(param_1 + 0x5cc);
  if (lVar8 != 0) {
    lVar12 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8)
        != lVar12 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar8 = *(longlong *)(lVar8 + 0x478);
      local_1b8 = &LAB_14108a7f0;
      uStack_1b0 = 0;
      plVar28 = (longlong *)(lVar8 + 0x1e0);
      plVar16 = (longlong *)FMemory::Realloc(0,0x30);
      local_78 = plVar16;
      if (plVar16 != (longlong *)0x0) {
        *plVar16 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar16 + 1,param_1);
        *(undefined4 *)(plVar16 + 2) = (undefined4)local_1b8;
        *(undefined4 *)((longlong)plVar16 + 0x14) = local_1b8._4_4_;
        *(undefined4 *)(plVar16 + 3) = uStack_1b0;
        *(uint *)((longlong)plVar16 + 0x1c) = uStack_1ac;
        lVar12 = FDelegateHandle::GenerateNewID();
        plVar16[5] = lVar12;
        *plVar16 = (longlong)&PTR_FUN_143fcff08;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar28,1);
        puVar14 = (undefined8 *)(**(code **)(*plVar16 + 0x20))(plVar16,&local_a8);
        iVar23 = *(int *)(lVar8 + 0x1e8);
        uVar10 = *puVar14;
        *(int *)(lVar8 + 0x1e8) = iVar23 + 1;
        if (*(int *)(lVar8 + 0x1ec) < iVar23 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar28,iVar23);
        }
        puVar14 = (undefined8 *)((longlong)iVar23 * 0x10 + *plVar28);
        *puVar14 = plVar16;
        *(undefined4 *)(puVar14 + 1) = 3;
      }
      *(undefined8 *)(param_1 + 0x9d0) = uVar10;
    }
  }
  if (*(longlong *)(param_1 + 0xdf8) != 0) {
    FUN_1410a60b0(*(longlong *)(param_1 + 0xdf8),*(undefined8 *)(param_1 + 0xa08));
  }
  piVar19 = *(int **)(param_1 + 0x9b8);
  iVar23 = *(int *)(param_1 + 0x9c0);
  if (piVar19 != piVar19 + (longlong)iVar23 * 10) {
    piVar22 = piVar19 + 2;
    do {
      lVar12 = 0;
      lVar8 = FWeakObjectPtr::Get(piVar22 + -2);
      if (lVar8 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *piVar22) && (local_1e8 = 0, *(longlong *)(piVar22 + 2) != 0)) {
          lVar8 = FUN_141796df0();
          FWeakObjectPtr::operator=(piVar22 + -2,lVar8);
          if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *piVar22 = DAT_1464b56f4;
          }
          lVar8 = FWeakObjectPtr::Get(piVar22 + -2);
          if (lVar8 != 0) goto LAB_14108c0e8;
        }
LAB_14108c11e:
        lVar8 = lVar12;
      }
      else {
LAB_14108c0e8:
        lVar13 = FUN_142e19540();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_14108c11e;
      }
      if (lVar8 != 0) {
        lVar8 = FWeakObjectPtr::Get(piVar22 + -2);
        if (lVar8 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != *piVar22) &&
             (local_1b8 = (undefined1 *)0x0, *(longlong *)(piVar22 + 2) != 0)) {
            lVar8 = FUN_141796df0();
            FWeakObjectPtr::operator=(piVar22 + -2,lVar8);
            if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *piVar22 = DAT_1464b56f4;
            }
            lVar8 = FWeakObjectPtr::Get(piVar22 + -2);
            if (lVar8 != 0) goto LAB_14108c1a0;
          }
LAB_14108c1d6:
          lVar8 = lVar12;
        }
        else {
LAB_14108c1a0:
          lVar13 = FUN_142e19540();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) goto LAB_14108c1d6;
        }
        local_188 = CONCAT31(local_188._1_3_,0xff);
        uStack_180 = 0;
        local_178 = local_178 & 0xffffffff00000000;
        if (*(longlong *)(param_1 + 0xa10) != 0) {
          lVar12 = FUN_140c453a0();
        }
        local_118 = lVar12;
        if (lVar12 != 0) {
          puVar17 = (undefined4 *)
                    FUN_142d622d0(local_68,&local_118,*(undefined8 *)(param_1 + 0xa10),lVar8);
          local_188 = *puVar17;
          uStack_184 = puVar17[1];
          uStack_180 = *(undefined8 *)(puVar17 + 2);
          local_178 = *(ulonglong *)(puVar17 + 4);
        }
        cVar6 = FUN_142d52a00(&local_188);
        if (cVar6 != '\0') {
          uStack_d8 = 0;
          local_e0 = FUN_141088590;
          uVar10 = FUN_142d52a20(&local_188);
          uVar10 = FArchive::operator<<(uVar10);
          plVar16 = (longlong *)FUN_142d621c0(uVar10);
          plVar28 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar28 != (longlong *)0x0) {
            *plVar28 = (longlong)&PTR_FUN_144213d80;
            FWeakObjectPtr::operator=(plVar28 + 1,param_1);
            *(undefined4 *)(plVar28 + 2) = (undefined4)local_e0;
            *(undefined4 *)((longlong)plVar28 + 0x14) = local_e0._4_4_;
            *(undefined4 *)(plVar28 + 3) = uStack_d8;
            *(undefined4 *)((longlong)plVar28 + 0x1c) = uStack_d4;
            lVar8 = FDelegateHandle::GenerateNewID();
            plVar28[5] = lVar8;
            *plVar28 = (longlong)&PTR_FUN_144213dc8;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar16,1);
            (**(code **)(*plVar28 + 0x20))(plVar28,local_a0);
            iVar18 = (int)plVar16[1];
            *(int *)(plVar16 + 1) = iVar18 + 1;
            if (*(int *)((longlong)plVar16 + 0xc) < iVar18 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar16,iVar18);
            }
            puVar14 = (undefined8 *)((longlong)iVar18 * 0x10 + *plVar16);
            *puVar14 = plVar28;
            *(undefined4 *)(puVar14 + 1) = 3;
          }
          uStack_c8 = 0;
          local_d0 = FUN_141088590;
          uVar10 = FUN_142d52a20(&local_188);
          uVar10 = FArchive::operator<<(uVar10);
          uVar10 = FUN_142d62330(uVar10);
          local_1a8 = 0;
          local_1a0 = 0;
          puVar14 = (undefined8 *)operator_new(0x30,&local_1a8);
          if (puVar14 != (undefined8 *)0x0) {
            *puVar14 = &PTR_FUN_144213e10;
            FWeakObjectPtr::operator=(puVar14 + 1,param_1);
            *(undefined4 *)(puVar14 + 2) = (undefined4)local_d0;
            *(undefined4 *)((longlong)puVar14 + 0x14) = local_d0._4_4_;
            *(undefined4 *)(puVar14 + 3) = uStack_c8;
            *(undefined4 *)((longlong)puVar14 + 0x1c) = uStack_c4;
            uVar15 = FDelegateHandle::GenerateNewID();
            puVar14[5] = uVar15;
            *puVar14 = &PTR_FUN_144213e58;
          }
          if ((local_1a0 != 0) && (local_1a8 != 0)) {
            FMulticastDelegateBase<FWeakObjectPtr>::AddInternal(uVar10,local_98);
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1a8);
        }
      }
      piVar1 = piVar22 + 8;
      piVar22 = piVar22 + 10;
    } while (piVar1 != piVar19 + (longlong)iVar23 * 10);
  }
  FUN_142ed2c00(param_1,1);
  return;
}



// FUNCTION 14108c3f0 thunk_FUN_142ec20c0 body=5 status=ok
// SIG undefined thunk_FUN_142ec20c0(void)

void thunk_FUN_142ec20c0(void)

{
  FUN_142ec20c0();
  return;
}



// FUNCTION 14108c400 FUN_14108c400 body=29 status=ok
// SIG undefined FUN_14108c400(void)

void FUN_14108c400(undefined8 param_1)

{
  FUN_142ed2c00(param_1,0);
  FUN_142ec20c0(param_1);
  return;
}



// FUNCTION 14108c420 FUN_14108c420 body=526 status=ok
// SIG undefined FUN_14108c420(void)

void FUN_14108c420(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong local_38;
  longlong *plStack_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar11 = 0;
  cVar7 = FWeakObjectPtr::IsValid(param_1 + 0x3b0);
  if (cVar7 != '\0') {
    lVar8 = FWeakObjectPtr::Get(param_1 + 0x3b0);
    lVar8 = FWeakObjectPtr::Get(lVar8 + 0x58c);
    if (lVar8 != 0) {
      lVar9 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        bVar6 = true;
        bVar5 = false;
        plVar10 = (longlong *)FUN_142dcf3a0(lVar8,local_28);
        lVar11 = *plVar10;
        goto LAB_14108c4d0;
      }
    }
  }
  plVar10 = &local_38;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  bVar6 = false;
  bVar5 = true;
LAB_14108c4d0:
  plVar4 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10 = plStack_30;
  if (bVar5) {
    if (plStack_30 != (longlong *)0x0) {
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
  }
  if ((bVar6) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_20 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (lVar11 != 0) {
    cVar7 = (*(code *)**(undefined8 **)*param_2)();
    if (((cVar7 != '\0') &&
        (((*(char *)(param_1 + 0x17b) != '\0' ||
          ((*(longlong *)(param_1 + 0x350) != 0 &&
           (*(longlong *)(*(longlong *)(param_1 + 0x350) + 0x48) != 0)))) &&
         (*(longlong *)(param_1 + 0x350) != 0)))) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x350) + 0x48) == *(longlong *)(param_1 + 0x328))) {
      iVar3 = *(int *)(param_1 + 1000);
      FUN_1410a78d0(param_1);
      if ((0 < iVar3) && (*(int *)(param_1 + 1000) == 0)) {
        FUN_1410850c0(param_1,0);
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
  return;
}



// FUNCTION 14108c630 FUN_14108c630 body=4945 status=ok
// SIG undefined FUN_14108c630(void)

void FUN_14108c630(longlong *param_1)

{
  int *piVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  code *pcVar10;
  wchar_t *pwVar11;
  longlong *plVar12;
  int iVar13;
  bool bVar14;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  longlong **pplVar15;
  longlong **pplVar16;
  undefined1 *puVar17;
  undefined4 uVar18;
  uint uStack_30c;
  undefined8 local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  longlong *local_2f8;
  int local_2f0;
  longlong *local_2e8;
  int local_2e0;
  longlong *local_2d8;
  int local_2d0;
  longlong *local_2c8;
  int local_2c0;
  longlong *local_2b8;
  undefined8 local_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  longlong *local_298;
  undefined8 local_290;
  longlong *local_288;
  undefined8 local_280;
  longlong local_278;
  undefined8 local_270;
  longlong local_268;
  undefined8 local_260;
  longlong *local_258;
  undefined8 local_250;
  longlong local_248;
  undefined8 local_240;
  longlong *local_238;
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
  int local_1d0;
  longlong local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  undefined1 local_198 [8];
  undefined8 local_190;
  undefined8 local_188;
  undefined1 local_180 [8];
  undefined1 local_178 [8];
  undefined1 local_170 [8];
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  undefined8 local_158;
  undefined1 local_150 [8];
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  undefined1 local_138 [8];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [8];
  longlong *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  code *local_d8;
  longlong lStack_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  code *local_a8;
  longlong lStack_a0;
  undefined1 *local_98 [2];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  
  FUN_142ef9e70();
  uVar4 = FUN_142085870(param_1,local_118,L"lobbyTextField");
  FUN_142ede260(param_1 + 0x6b,uVar4);
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_110 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar1 = (int *)((longlong)local_110 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  pwVar11 = (wchar_t *)0x0;
  if ((param_1[0x6c] != 0) && (lVar5 = param_1[0x6d], lVar5 != 0)) {
    LOCK();
    iVar13 = *(int *)(lVar5 + 8);
    if (iVar13 == 0) {
      *(int *)(lVar5 + 8) = 0;
      iVar13 = 0;
    }
    UNLOCK();
    if (0 < iVar13) {
      FUN_142f10d20(param_1 + 0x6b,CONCAT71((int7)((ulonglong)lVar5 >> 8),1));
    }
  }
  local_2a8 = 0;
  local_2a0 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2a8,0);
  FGenericPlatformString::Memcpy(local_2a8,L"lobbyWidgetTeam",0x20);
  local_2b8 = (longlong *)0x0;
  local_2b0 = 0;
  local_res20 = 0;
  lVar5 = FUN_141069750(param_1,&local_2a8,0,6,&local_2b8);
  param_1[0x5d] = lVar5;
  plVar8 = local_2b8;
  for (iVar13 = (int)local_2b0; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_2b8 != (longlong *)0x0) {
    FMemory::Free(local_2b8);
  }
  if (local_2a8 != 0) {
    FMemory::Free();
  }
  if (param_1[0x5d] != 0) {
    *(longlong **)(param_1[0x5d] + 0x358) = param_1;
    local_108 = 0x41098e20;
    uStack_104 = 1;
    uStack_100 = 0;
    FUN_140cdd210(param_1[0x5d] + 0x328,param_1,&local_108);
    local_f8 = 0x4109ad10;
    uStack_f4 = 1;
    uStack_f0 = 0;
    FUN_140cdd210(param_1[0x5d] + 0x338,param_1,&local_f8);
    local_e8 = 0x4109ae10;
    uStack_e4 = 1;
    uStack_e0 = 0;
    FUN_140cdd210(param_1[0x5d] + 0x348,param_1,&local_e8);
    lStack_d0 = (ulonglong)uStack_30c << 0x20;
    local_d8 = FUN_141098e10;
    pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UGFxLobbyWidget::OnPlayerItemChanged",L"::");
    pwVar3 = pwVar11;
    while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
      pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
      pwVar3 = pwVar2;
    }
    FName::FName(&local_res10,pwVar3 + 2,1);
    FUN_1407260e0(param_1[0x5d] + 0x180,param_1,&local_d8,local_res10);
  }
  FUN_142085870(param_1,&local_1c8,L"pnlLobbyWidgetPrompt");
  plVar8 = local_1c0;
  if (local_1c8 != 0) {
    param_1[0x5e] = local_1c8;
    plVar12 = (longlong *)param_1[0x5f];
    if (local_1c0 != plVar12) {
      if (local_1c0 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_1c0 + 0xc) = *(int *)((longlong)local_1c0 + 0xc) + 1;
        UNLOCK();
        plVar12 = (longlong *)param_1[0x5f];
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
      param_1[0x5f] = (longlong)plVar8;
    }
    local_278 = 0;
    local_270 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_278,0);
    FGenericPlatformString::Memcpy(local_278,L"lobbyWidgetHint",0x20);
    local_298 = (longlong *)0x0;
    local_290 = 0;
    local_190 = 0;
    lVar5 = FUN_140f57150(local_1c8,&local_278,0,6,&local_298);
    param_1[0x60] = lVar5;
    plVar8 = local_298;
    for (iVar13 = (int)local_290; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_298 != (longlong *)0x0) {
      FMemory::Free(local_298);
    }
    if (local_278 != 0) {
      FMemory::Free();
    }
  }
  if (local_1c0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_1c0 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_1c0)(local_1c0);
      LOCK();
      piVar1 = (int *)((longlong)local_1c0 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_1c0 + 8))(local_1c0,1);
      }
    }
  }
  FUN_142085870(param_1,&local_1a8,L"pnlLobbyWidgetAddPlayer");
  plVar8 = local_1a0;
  if (local_1a8 != 0) {
    param_1[0x61] = local_1a8;
    plVar12 = (longlong *)param_1[0x62];
    if (local_1a0 != plVar12) {
      if (local_1a0 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_1a0 + 0xc) = *(int *)((longlong)local_1a0 + 0xc) + 1;
        UNLOCK();
        plVar12 = (longlong *)param_1[0x62];
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
      param_1[0x62] = (longlong)plVar8;
    }
    FUN_1420392d0(local_1a8,&local_1b8,L"addButton");
    plVar8 = local_1b0;
    if (local_1b8 != 0) {
      param_1[99] = local_1b8;
      plVar12 = (longlong *)param_1[100];
      if (local_1b0 != plVar12) {
        if (local_1b0 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_1b0 + 0xc) = *(int *)((longlong)local_1b0 + 0xc) + 1;
          UNLOCK();
          plVar12 = (longlong *)param_1[100];
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
        param_1[100] = (longlong)plVar8;
      }
      local_268 = 0;
      local_260 = 0x18;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
      FGenericPlatformString::Memcpy(local_268,L"btnLobbyWidgetAddPlayer",0x30);
      local_288 = (longlong *)0x0;
      local_280 = 0;
      local_188 = 0;
      lVar5 = FUN_14106adb0(local_1b8,&local_268,0,6,&local_288);
      param_1[0x65] = lVar5;
      plVar8 = local_288;
      for (iVar13 = (int)local_280; iVar13 != 0; iVar13 = iVar13 + -1) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
      }
      if (local_288 != (longlong *)0x0) {
        FMemory::Free(local_288);
      }
      if (local_268 != 0) {
        FMemory::Free();
      }
      if (param_1[0x65] != 0) {
        puVar7 = (undefined8 *)FName::FName(local_180,"Navigate",1);
        *(undefined8 *)(param_1[0x65] + 0x1a0) = *puVar7;
        puVar7 = (undefined8 *)FName::FName(local_178,"Select",1);
        *(undefined8 *)(param_1[0x65] + 0x1a8) = *puVar7;
        puVar7 = (undefined8 *)FName::FName(local_170,L"OnAddFriendsButtonClicked",1);
        lVar5 = param_1[0x65];
        FWeakObjectPtr::operator=(lVar5 + 0x1b0,param_1);
        *(undefined8 *)(lVar5 + 0x1b8) = *puVar7;
        puVar7 = (undefined8 *)FName::FName(local_168,L"OnAddFriendsHovered",1);
        lVar5 = param_1[0x65];
        FWeakObjectPtr::operator=(lVar5 + 0x210,param_1);
        *(undefined8 *)(lVar5 + 0x218) = *puVar7;
        puVar7 = (undefined8 *)FName::FName(local_198,L"OnAddFriendsUnhovered",1);
        lVar5 = param_1[0x65];
        FWeakObjectPtr::operator=(lVar5 + 0x220,param_1);
        *(undefined8 *)(lVar5 + 0x228) = *puVar7;
        puVar7 = (undefined8 *)FName::FName(local_160,L"OnAddFriendsFocused",1);
        lVar5 = param_1[0x65];
        FWeakObjectPtr::operator=(lVar5 + 0x1d0,param_1);
        *(undefined8 *)(lVar5 + 0x1d8) = *puVar7;
        plVar8 = (longlong *)FUN_142085870(param_1[0x65],local_c8,L"iconAddFriends");
        param_1[0x66] = *plVar8;
        lVar5 = plVar8[1];
        if (lVar5 != param_1[0x67]) {
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
            UNLOCK();
          }
          plVar8 = (longlong *)param_1[0x67];
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar13 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar13 == 1) && (plVar8 != (longlong *)0x0)) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
          param_1[0x67] = lVar5;
        }
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_c0 + 1;
          lVar5 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_c0)(local_c0);
            LOCK();
            piVar1 = (int *)((longlong)local_c0 + 0xc);
            iVar13 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*local_c0 + 8))(local_c0,1);
            }
          }
        }
      }
    }
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_1b0 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_1b0)(local_1b0);
        LOCK();
        piVar1 = (int *)((longlong)local_1b0 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_1b0 + 8))(local_1b0,1);
        }
      }
    }
  }
  if (local_1a0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_1a0 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_1a0)(local_1a0);
      LOCK();
      piVar1 = (int *)((longlong)local_1a0 + 0xc);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_1a0 + 8))(local_1a0,1);
      }
    }
  }
  local_248 = 0;
  local_240 = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
  FGenericPlatformString::Memcpy(local_248,L"btnLobbyWidgetSettings",0x2e);
  pplVar16 = &local_258;
  local_258 = (longlong *)0x0;
  plVar8 = param_1 + 0x68;
  local_250 = 0;
  local_158 = 0;
  FUN_14106bf90(param_1,plVar8,&local_248,0,6,pplVar16);
  plVar12 = local_258;
  for (iVar13 = (int)local_250; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar12 != 0) {
      FMemory::Free();
    }
    plVar12 = plVar12 + 2;
  }
  if (local_258 != (longlong *)0x0) {
    FMemory::Free(local_258);
  }
  if (local_248 != 0) {
    FMemory::Free();
  }
  if (*plVar8 != 0) {
    puVar7 = (undefined8 *)FName::FName(local_150,"Navigate",1);
    *(undefined8 *)(*plVar8 + 0x1a0) = *puVar7;
    puVar7 = (undefined8 *)FName::FName(local_148,"Select",1);
    *(undefined8 *)(*plVar8 + 0x1a8) = *puVar7;
    FUN_142ed2600(*plVar8,3);
    *(undefined1 *)(*plVar8 + 0x198) = 0;
    puVar7 = (undefined8 *)FName::FName(local_140,L"OnSettingsButtonClicked",1);
    lVar5 = *plVar8;
    FWeakObjectPtr::operator=(lVar5 + 0x1b0,param_1);
    *(undefined8 *)(lVar5 + 0x1b8) = *puVar7;
    puVar7 = (undefined8 *)FName::FName(local_138,L"OnLobbyWidgetHovered",1);
    lVar5 = *plVar8;
    FWeakObjectPtr::operator=(lVar5 + 0x210,param_1);
    *(undefined8 *)(lVar5 + 0x218) = *puVar7;
  }
  local_228 = 0;
  local_220 = 0x18;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,0);
  FGenericPlatformString::Memcpy(local_228,L"PNL_LobbyWidget_Setting",0x30);
  local_238 = (longlong *)0x0;
  local_230 = 0;
  local_130 = 0;
  lVar5 = FUN_141069af0(param_1,&local_228,0,6,&local_238);
  param_1[0x69] = lVar5;
  plVar8 = local_238;
  for (iVar13 = (int)local_230; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_238 != (longlong *)0x0) {
    FMemory::Free(local_238);
  }
  if (local_228 != 0) {
    FMemory::Free();
  }
  lVar5 = param_1[0x69];
  if (lVar5 != 0) {
    *(longlong **)(lVar5 + 0x1e0) = param_1;
    uVar18 = 0;
    puVar17 = &LAB_141098700;
    local_2c8 = (longlong *)0x0;
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    local_2c0 = 3;
    local_2c8 = plVar8;
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar8 + 1,lVar5);
      *(int *)(plVar8 + 2) = (int)puVar17;
      *(int *)((longlong)plVar8 + 0x14) = (int)((ulonglong)puVar17 >> 0x20);
      *(undefined4 *)(plVar8 + 3) = uVar18;
      *(uint *)((longlong)plVar8 + 0x1c) = uStack_30c;
      lVar9 = FDelegateHandle::GenerateNewID();
      plVar8[5] = lVar9;
      *plVar8 = (longlong)&PTR_FUN_143fcff08;
    }
    FUN_142ee1c00(*(undefined8 *)(lVar5 + 0x1e0),PTR_s_rollOver_14629fe30,lVar5 + 0x1f0,&local_2c8);
    if (local_2c0 == 0) {
LAB_14108d12a:
      if (local_2c8 != (longlong *)0x0) {
        FMemory::Free(local_2c8);
      }
    }
    else if (local_2c8 != (longlong *)0x0) {
      (**(code **)(*local_2c8 + 0x28))(local_2c8,0);
      if (local_2c8 != (longlong *)0x0) {
        local_2c8 = (longlong *)FMemory::Realloc(local_2c8,0,0);
      }
      local_2c0 = 0;
      goto LAB_14108d12a;
    }
    uVar18 = 0;
    local_2f8 = (longlong *)0x0;
    puVar17 = &LAB_1410986e0;
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    local_2f0 = 3;
    local_2f8 = plVar8;
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar8 + 1,lVar5);
      *(int *)(plVar8 + 2) = (int)puVar17;
      *(int *)((longlong)plVar8 + 0x14) = (int)((ulonglong)puVar17 >> 0x20);
      *(undefined4 *)(plVar8 + 3) = uVar18;
      *(uint *)((longlong)plVar8 + 0x1c) = uStack_30c;
      lVar9 = FDelegateHandle::GenerateNewID();
      plVar8[5] = lVar9;
      *plVar8 = (longlong)&PTR_FUN_143fcff08;
    }
    FUN_142ee1c00(*(undefined8 *)(lVar5 + 0x1e0),PTR_s_rollOut_14629fe28,lVar5 + 0x1f8,&local_2f8);
    if (local_2f0 == 0) {
LAB_14108d1f1:
      if (local_2f8 != (longlong *)0x0) {
        FMemory::Free(local_2f8);
      }
    }
    else if (local_2f8 != (longlong *)0x0) {
      (**(code **)(*local_2f8 + 0x28))(local_2f8,0);
      if (local_2f8 != (longlong *)0x0) {
        local_2f8 = (longlong *)FMemory::Realloc(local_2f8,0,0);
      }
      local_2f0 = 0;
      goto LAB_14108d1f1;
    }
    lVar5 = param_1[0x69];
    plVar8 = (longlong *)(lVar5 + 0x180);
    pcVar10 = (code *)FMemory::Realloc(0,0x20);
    local_308 = pcVar10;
    if (pcVar10 != (code *)0x0) {
      *(longlong **)(pcVar10 + 8) = param_1;
      *(undefined ***)pcVar10 = &PTR_GetPoolName_14468e938;
      lVar9 = FDelegateHandle::GenerateNewID();
      *(longlong *)(pcVar10 + 0x18) = lVar9;
      *(undefined ***)pcVar10 = &PTR_GetPoolName_14468e980;
    }
    if (&local_308 != plVar8) {
      if (pcVar10 == (code *)0x0) {
        if ((*(int *)(lVar5 + 0x188) != 0) &&
           (plVar12 = (longlong *)*plVar8, plVar12 != (longlong *)0x0)) {
          (**(code **)(*plVar12 + 0x28))(plVar12,0);
          if (*plVar8 != 0) {
            lVar9 = FMemory::Realloc(*plVar8,0,0);
            *plVar8 = lVar9;
          }
          *(undefined4 *)(lVar5 + 0x188) = 0;
        }
      }
      else {
        (**(code **)(*(longlong *)pcVar10 + 0x30))(pcVar10,plVar8);
      }
    }
    if (pcVar10 != (code *)0x0) {
      (**(code **)(*(longlong *)pcVar10 + 0x28))(pcVar10,0);
      local_308 = (code *)FMemory::Realloc(pcVar10,0,0);
      if (local_308 != (code *)0x0) {
        FMemory::Free(local_308);
      }
    }
  }
  local_208 = 0;
  local_200 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
  FGenericPlatformString::Memcpy(local_208,L"contextualMenu",0x1e);
  local_218 = (longlong *)0x0;
  local_210 = 0;
  local_128 = 0;
  lVar5 = FUN_140ecbdf0(param_1,&local_208,0,6,&local_218);
  param_1[0x6e] = lVar5;
  plVar8 = local_218;
  for (iVar13 = (int)local_210; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_218 != (longlong *)0x0) {
    FMemory::Free(local_218);
  }
  if (local_208 != 0) {
    FMemory::Free();
  }
  if (param_1[0x6e] != 0) {
    plVar8 = (longlong *)FUN_142085870(param_1[0x6e],local_b8,L"contextualMenuWrapper");
    param_1[0x6f] = *plVar8;
    plVar8 = (longlong *)plVar8[1];
    plVar12 = (longlong *)param_1[0x70];
    if (plVar8 != plVar12) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        plVar12 = (longlong *)param_1[0x70];
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
      param_1[0x70] = (longlong)plVar8;
    }
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_b0 + 1;
      lVar5 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        iVar13 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar13 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    plVar8 = (longlong *)param_1[0x70];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      iVar13 = (int)plVar8[1];
      bVar14 = iVar13 == 0;
      if (bVar14) {
        *(int *)(plVar8 + 1) = 0;
        iVar13 = 0;
      }
      UNLOCK();
      while (!bVar14) {
        LOCK();
        bVar14 = iVar13 == (int)plVar8[1];
        if (bVar14) {
          *(int *)(plVar8 + 1) = iVar13 + 1;
        }
        UNLOCK();
        if (bVar14) {
          if (plVar8 != (longlong *)0x0) {
            lVar5 = param_1[0x6f];
            if (lVar5 != 0) {
              local_1e8 = 0;
              local_1e0 = 0x12;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
              FGenericPlatformString::Memcpy(local_1e8,L"contextualOptions",0x24);
              pplVar15 = &local_1f8;
              local_1f8 = (longlong *)0x0;
              local_1f0 = 0;
              local_120 = 0;
              lVar5 = FUN_14106afa0(lVar5,&local_1e8,0,6,pplVar15);
              param_1[0x71] = lVar5;
              plVar12 = local_1f8;
              for (iVar13 = (int)local_1f0; iVar13 != 0; iVar13 = iVar13 + -1) {
                if (*plVar12 != 0) {
                  FMemory::Free();
                }
                plVar12 = plVar12 + 2;
              }
              if (local_1f8 != (longlong *)0x0) {
                FMemory::Free(local_1f8);
              }
              if (local_1e8 != 0) {
                FMemory::Free();
              }
              if (param_1[0x71] != 0) {
                *(undefined1 *)(param_1[0x71] + 0x242) = *(undefined1 *)((longlong)param_1 + 0x1ea);
                uVar18 = 0;
                *(undefined8 *)(param_1[0x71] + 0x244) = *(undefined8 *)((longlong)param_1 + 0x1ec);
                *(undefined4 *)(param_1[0x71] + 0x1ec) = *(undefined4 *)((longlong)param_1 + 0x194);
                *(int *)(param_1[0x71] + 0x1e8) = (int)param_1[0x32];
                *(undefined1 *)(param_1[0x71] + 0x1e1) = *(undefined1 *)((longlong)param_1 + 0x189);
                *(undefined1 *)(param_1[0x71] + 0x20a) = *(undefined1 *)((longlong)param_1 + 0x1b2);
                pcVar10 = FUN_141088ea0;
                lStack_a0 = (ulonglong)uStack_30c << 0x20;
                local_a8 = FUN_141088ea0;
                pwVar6 = _guard_xfg_dispatch_icall_nop
                                   (L"&ThisClass::OnContextMenuSelectionChanged",L"::");
                pwVar3 = pwVar11;
                while (pwVar2 = pwVar6, pwVar2 != (wchar_t *)0x0) {
                  pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
                  pwVar3 = pwVar2;
                }
                FName::FName(&local_res18,pwVar3 + 2,1);
                FUN_1407260e0(param_1[0x71] + 0x180,param_1,&local_a8,local_res18,pplVar15,pplVar16,
                              pcVar10,uVar18);
              }
            }
            LOCK();
            plVar12 = plVar8 + 1;
            lVar5 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              iVar13 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar13 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
          }
          break;
        }
        LOCK();
        iVar13 = (int)plVar8[1];
        bVar14 = iVar13 == 0;
        if (bVar14) {
          *(int *)(plVar8 + 1) = 0;
          iVar13 = 0;
        }
        UNLOCK();
      }
    }
    uStack_300 = 0;
    local_2e8 = (longlong *)0x0;
    local_308 = (code *)&LAB_1410986f0;
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    local_2e0 = 3;
    local_2e8 = plVar8;
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar8 + 1,param_1);
      *(undefined4 *)(plVar8 + 2) = (undefined4)local_308;
      *(undefined4 *)((longlong)plVar8 + 0x14) = local_308._4_4_;
      *(undefined4 *)(plVar8 + 3) = uStack_300;
      *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_2fc;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar8[5] = lVar5;
      *plVar8 = (longlong)&PTR_FUN_143fcff08;
    }
    FUN_142ee1c00(param_1,PTR_s_rollOver_14629fe30,param_1 + 0x4a,&local_2e8);
    if (local_2e0 == 0) {
LAB_14108d713:
      if (local_2e8 != (longlong *)0x0) {
        FMemory::Free(local_2e8);
      }
    }
    else if (local_2e8 != (longlong *)0x0) {
      (**(code **)(*local_2e8 + 0x28))(local_2e8,0);
      if (local_2e8 != (longlong *)0x0) {
        local_2e8 = (longlong *)FMemory::Realloc(local_2e8,0,0);
      }
      local_2e0 = 0;
      goto LAB_14108d713;
    }
    uStack_300 = 0;
    local_2d8 = (longlong *)0x0;
    local_308 = (code *)&LAB_1410986d0;
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    local_2d0 = 3;
    local_2d8 = plVar8;
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar8 + 1,param_1);
      *(undefined4 *)(plVar8 + 2) = (undefined4)local_308;
      *(undefined4 *)((longlong)plVar8 + 0x14) = local_308._4_4_;
      *(undefined4 *)(plVar8 + 3) = uStack_300;
      *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_2fc;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar8[5] = lVar5;
      *plVar8 = (longlong)&PTR_FUN_143fcff08;
    }
    FUN_142ee1c00(param_1,PTR_s_rollOut_14629fe28,param_1 + 0x4b,&local_2d8);
    if (local_2d0 != 0) {
      if (local_2d8 == (longlong *)0x0) goto LAB_14108d7e3;
      (**(code **)(*local_2d8 + 0x28))(local_2d8,0);
      if (local_2d8 != (longlong *)0x0) {
        local_2d8 = (longlong *)FMemory::Realloc(local_2d8,0,0);
      }
      local_2d0 = 0;
    }
    if (local_2d8 != (longlong *)0x0) {
      FMemory::Free(local_2d8);
    }
  }
LAB_14108d7e3:
  FUN_1410850c0(param_1,1);
  lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar5 != 0) {
    pwVar11 = (wchar_t *)FUN_140aea640(lVar5);
  }
  param_1[0x78] = (longlong)pwVar11;
  uVar4 = GetTransientPackage();
  lVar5 = FUN_14106bf30(uVar4);
  param_1[0x6a] = lVar5;
  if (lVar5 != 0) {
    uStack_300 = 0;
    local_308 = FUN_14108b0b0;
    pplVar16 = (longlong **)(lVar5 + 0x28);
    local_1d8 = (longlong *)0x0;
    local_1d0 = 0;
    puVar7 = (undefined8 *)operator_new(0x30,&local_1d8);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_FUN_144060be0;
      FWeakObjectPtr::operator=(puVar7 + 1,param_1);
      *(undefined4 *)(puVar7 + 2) = (undefined4)local_308;
      *(undefined4 *)((longlong)puVar7 + 0x14) = local_308._4_4_;
      *(undefined4 *)(puVar7 + 3) = uStack_300;
      *(undefined4 *)((longlong)puVar7 + 0x1c) = uStack_2fc;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar7[5] = uVar4;
      *puVar7 = &PTR_FUN_144060c28;
    }
    iVar13 = local_1d0;
    plVar8 = local_1d8;
    if (&local_1d8 != pplVar16) {
      if ((local_1d0 == 0) || (local_1d8 == (longlong *)0x0)) {
        if ((*(int *)(lVar5 + 0x30) != 0) && (plVar12 = *pplVar16, plVar12 != (longlong *)0x0)) {
          (**(code **)(*plVar12 + 0x28))(plVar12,0);
          if (*pplVar16 != (longlong *)0x0) {
            plVar12 = (longlong *)FMemory::Realloc(*pplVar16,0,0);
            *pplVar16 = plVar12;
          }
          *(undefined4 *)(lVar5 + 0x30) = 0;
        }
      }
      else {
        (**(code **)(*local_1d8 + 0x30))(local_1d8,pplVar16);
      }
    }
    if (iVar13 != 0) {
      if (plVar8 == (longlong *)0x0) goto LAB_14108d91a;
      (**(code **)(*plVar8 + 0x28))(plVar8,0);
      plVar8 = (longlong *)FMemory::Realloc(plVar8,0,0);
    }
    if (plVar8 != (longlong *)0x0) {
      FMemory::Free(plVar8);
    }
  }
LAB_14108d91a:
  FUN_1410a2d30(param_1);
  local_68 = 0;
  local_58 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_88);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = param_1;
    *puVar7 = &PTR_FUN_143f77b70;
  }
  local_98[0] = &LAB_14107d6a0;
  FUN_14204c280(local_98);
  return;
}



// FUNCTION 14108d990 FUN_14108d990 body=719 status=ok
// SIG undefined FUN_14108d990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14108d990(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong **local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  FUN_142ef9e70();
  local_80 = 0x17;
  local_88 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  FGenericPlatformString::Memcpy(local_88,L"PNL_Matchmaking_Widget",0x2e);
  local_a0 = (longlong **)&local_98;
  local_98 = (longlong *)0x0;
  local_a8 = 6;
  local_90 = 0;
  cVar3 = FUN_140e98b90(param_1,param_1 + 0x170,&local_88,0);
  plVar6 = local_98;
  for (iVar5 = (int)local_90; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (cVar3 != '\0') {
    local_98 = (longlong *)0x0;
    local_90 = 0x19;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    FGenericPlatformString::Memcpy(local_98,L"TXT_Matchmaking_ModeName",0x32);
    local_a0 = &local_88;
    local_88 = (longlong *)0x0;
    local_a8 = 6;
    local_80 = 0;
    FUN_140e99270(param_1,param_1 + 0x178,&local_98,0);
    plVar6 = local_88;
    for (iVar5 = (int)local_80; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_98 = (longlong *)0x0;
    local_90 = 0x19;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
    FGenericPlatformString::Memcpy(local_98,L"TXT_Matchmaking_Progress",0x32);
    local_a0 = &local_88;
    local_88 = (longlong *)0x0;
    local_a8 = 6;
    local_80 = 0;
    FUN_140e99270(param_1,param_1 + 0x180,&local_98,0);
    plVar6 = local_88;
    for (iVar5 = (int)local_80; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
    if (local_98 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  FWeakObjectPtr::operator=(&local_98,param_1);
  uVar1 = (undefined4)local_98;
  uVar2 = local_98._4_4_;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_68);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_1444f8920;
    puVar4[1] = param_1;
    *(undefined4 *)(puVar4 + 2) = uVar1;
    *(undefined4 *)((longlong)puVar4 + 0x14) = uVar2;
  }
  local_78[0] = &LAB_14107d5e0;
  FUN_14208c300(param_1,local_78);
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
  FUN_1410a31e0(param_1);
  return;
}



// FUNCTION 14108dc60 FUN_14108dc60 body=391 status=ok
// SIG undefined FUN_14108dc60(void)

void FUN_14108dc60(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 in_stack_ffffffffffffff98;
  uint uVar5;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  uVar5 = (uint)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  FUN_142ec5080();
  lVar2 = param_1[0x61];
  if (lVar2 == 0) {
    uVar1 = FUN_1414afdd0();
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    lVar2 = FUN_1417985e0(uVar1,param_1,0,0,(ulonglong)uVar5 << 0x20,0,0,0,0);
    param_1[0x61] = lVar2;
    if (lVar2 == 0) goto LAB_14108dd02;
  }
  FUN_1411ee6c0(lVar2,param_1);
LAB_14108dd02:
  local_28 = 0;
  local_20 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"anchorContextualMenu",0x2a);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  lVar2 = FUN_140ecbdf0(param_1,&local_28,0,6,&local_38);
  param_1[0x62] = lVar2;
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
  if (local_28 != 0) {
    FMemory::Free();
  }
  FUN_142ed2600(param_1,3);
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar2 != 0) {
    lVar2 = FUN_140aea640(lVar2);
    param_1[99] = lVar2;
  }
  return;
}



// FUNCTION 14108ddf0 FUN_14108ddf0 body=43 status=ok
// SIG undefined FUN_14108ddf0(void)

void FUN_14108ddf0(longlong param_1)

{
  FUN_142ec4360();
  *(undefined2 *)(param_1 + 0x209) = 0x200;
  *(undefined1 *)(param_1 + 0x1e2) = 1;
  *(undefined1 *)(param_1 + 0x268) = 1;
  return;
}



// FUNCTION 14108de20 FUN_14108de20 body=117 status=ok
// SIG undefined FUN_14108de20(void)

void FUN_14108de20(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142ec4360();
  lVar3 = *(longlong *)(param_1 + 0x38);
  *(undefined2 *)(param_1 + 0x209) = 0x202;
  if (lVar3 != 0) {
    lVar2 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14108de7c;
  }
  lVar3 = 0;
LAB_14108de7c:
  FWeakObjectPtr::operator=(param_1 + 0x360,lVar3);
  return;
}



// FUNCTION 14108dea0 FUN_14108dea0 body=192 status=ok
// SIG undefined FUN_14108dea0(void)

void FUN_14108dea0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_142ec3600();
  puVar5 = (undefined8 *)FUN_142085870(param_1,local_18,L"optionIcon");
  *(undefined8 *)(param_1 + 0x2c8) = *puVar5;
  plVar3 = (longlong *)puVar5[1];
  plVar6 = *(longlong **)(param_1 + 0x2d0);
  if (plVar3 != plVar6) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0x2d0);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    *(longlong **)(param_1 + 0x2d0) = plVar3;
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 14108df60 FUN_14108df60 body=2197 status=ok
// SIG undefined FUN_14108df60(void)

void FUN_14108df60(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong local_res8;
  longlong local_res10 [3];
  longlong **pplVar8;
  longlong **pplVar9;
  longlong *local_1c8;
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
  longlong local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  
  pplVar9 = &local_118;
  FUN_142ef9e70();
  uVar6 = 0;
  local_1b0 = 0xf;
  local_1b8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
  FGenericPlatformString::Memcpy(local_1b8,L"toolTipWrapper",0x1e);
  local_1c8 = (longlong *)0x0;
  local_1c0 = 0;
  local_78 = 0;
  FUN_140e98b90(param_1,param_1 + 0x1c0,&local_1b8,0,6,&local_1c8);
  plVar4 = local_1c8;
  for (iVar7 = (int)local_1c0; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_1c8 != (longlong *)0x0) {
    FMemory::Free(local_1c8);
  }
  if (local_1b8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    local_198 = 0;
    local_190 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
    FGenericPlatformString::Memcpy(local_198,L"toolTip",0x10);
    local_1a8 = (longlong *)0x0;
    local_1a0 = 0;
    local_70 = 0;
    FUN_140e99270(*(undefined8 *)(param_1 + 0x1c0),param_1 + 0x1c8,&local_198,0,6,&local_1a8);
    plVar4 = local_1a8;
    for (iVar7 = (int)local_1a0; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_1a8 != (longlong *)0x0) {
      FMemory::Free(local_1a8);
    }
    if (local_198 != 0) {
      FMemory::Free();
    }
  }
  local_178 = 0;
  local_170 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
  FGenericPlatformString::Memcpy(local_178,L"privacySettingWidget",0x2a);
  local_188 = (longlong *)0x0;
  local_180 = 0;
  local_68 = 0;
  uVar2 = FUN_14106a230(param_1,&local_178,0,6,&local_188);
  *(undefined8 *)(param_1 + 400) = uVar2;
  plVar4 = local_188;
  for (iVar7 = (int)local_180; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_188 != (longlong *)0x0) {
    FMemory::Free(local_188);
  }
  if (local_178 != 0) {
    FMemory::Free();
  }
  local_158 = 0;
  local_150 = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
  FGenericPlatformString::Memcpy(local_158,L"lootModeSettingWidget",0x2c);
  pplVar8 = &local_168;
  local_168 = (longlong *)0x0;
  local_160 = 0;
  local_60 = 0;
  uVar2 = FUN_141069e90(param_1,&local_158,0,6,pplVar8);
  *(undefined8 *)(param_1 + 0x198) = uVar2;
  plVar4 = local_168;
  for (iVar7 = (int)local_160; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_168 != (longlong *)0x0) {
    FMemory::Free(local_168);
  }
  if (local_158 != 0) {
    FMemory::Free();
  }
  local_148 = 0;
  local_140 = 0x13;
  local_res8 = param_1;
  local_res10[0] = param_1;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
  FGenericPlatformString::Memcpy(local_148,L"PNL_PrivacySetting",0x26);
  uVar2 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_58,L"Group Privacy",L"GFxLobbyWidgetSettingsPanel",L"PrivacySetting");
  uVar2 = FUN_141076910(&local_res8,&local_148,uVar2);
  *(undefined8 *)(param_1 + 0x1a0) = uVar2;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_50 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if (local_148 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    local_128 = 0;
    local_120 = 0x17;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    FGenericPlatformString::Memcpy(local_128,L"PNL_BTN_PrivacySetting",0x2e);
    pplVar8 = &local_138;
    local_138 = (longlong *)0x0;
    local_130 = 0;
    uVar2 = FUN_14106b530(*(undefined8 *)(param_1 + 0x1a0),&local_128,0,6,pplVar8);
    *(undefined8 *)(param_1 + 0x1a8) = uVar2;
    plVar4 = local_138;
    for (iVar7 = (int)local_130; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_138 != (longlong *)0x0) {
      FMemory::Free(local_138);
    }
    if (local_128 != 0) {
      FMemory::Free();
    }
    FUN_141074d10(local_res10,*(undefined8 *)(param_1 + 0x1a8));
    if (*(longlong *)(param_1 + 0x1a8) != 0) {
      local_108 = 0;
      local_100 = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_108,10,"settingBG",10,0x3f);
      local_118 = (longlong *)0x0;
      local_110 = 0;
      lVar3 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x1a0),&local_108,0,6,pplVar9);
      pplVar8 = pplVar9;
      plVar4 = local_118;
      for (iVar7 = (int)local_110; iVar7 != 0; iVar7 = iVar7 + -1) {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 2;
      }
      if (local_118 != (longlong *)0x0) {
        FMemory::Free(local_118);
      }
      if (local_108 != 0) {
        FMemory::Free();
      }
      if (lVar3 != 0) {
        iVar7 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x1a8));
        if (iVar7 == 3) {
          local_d8 = 0;
          local_d0 = 6;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
          FGenericPlatformString::Memcpy(local_d8,L"three",0xc);
          FUN_142088910(lVar3,&local_d8);
          lVar3 = local_d8;
        }
        else if (iVar7 == 4) {
          local_e8 = 0;
          local_e0 = 5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
          FGenericPlatformString::Memcpy(local_e8,L"four",10);
          FUN_142088910(lVar3,&local_e8);
          lVar3 = local_e8;
        }
        else {
          if (iVar7 != 5) goto LAB_14108e557;
          local_f8 = 0;
          local_f0 = 5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
          FGenericPlatformString::Memcpy(local_f8,L"five",10);
          FUN_142088910(lVar3,&local_f8);
          lVar3 = local_f8;
        }
        if (lVar3 != 0) {
          FMemory::Free();
        }
      }
    }
  }
LAB_14108e557:
  plVar4 = (longlong *)FUN_141368f90();
  if ((plVar4[0x1f] == 0) && ((**(code **)(*plVar4 + 0x368))(plVar4), plVar4[0x1f] == 0)) {
    lVar3 = FUN_1404b03b0();
  }
  else {
    plVar4 = (longlong *)FUN_141368f90();
    lVar3 = plVar4[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0x368))(plVar4);
      lVar3 = plVar4[0x1f];
    }
    lVar3 = lVar3 + 0xa0;
  }
  local_c8 = 0;
  local_c0 = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
  FGenericPlatformString::Memcpy(local_c8,L"PNL_LootModeSetting",0x28);
  uVar2 = FUN_141076910(&local_res8,&local_c8,lVar3);
  *(undefined8 *)(param_1 + 0x1b0) = uVar2;
  if (local_c8 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    local_a8 = 0;
    local_a0 = 0x18;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
    FGenericPlatformString::Memcpy(local_a8,L"PNL_BTN_LootModeSetting",0x30);
    pplVar8 = &local_b8;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    uVar2 = FUN_14106b190(*(undefined8 *)(param_1 + 0x1b0),&local_a8,0,6,pplVar8);
    *(undefined8 *)(param_1 + 0x1b8) = uVar2;
    plVar4 = local_b8;
    for (iVar7 = (int)local_b0; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free(local_b8);
    }
    if (local_a8 != 0) {
      FMemory::Free();
    }
    FUN_141074d10(local_res10,*(undefined8 *)(param_1 + 0x1b8));
  }
  uVar2 = GetTransientPackage();
  FUN_1417846f0(uVar2,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_res10[1] = 0;
  uVar5 = FUN_142f35520();
  uVar2 = FUN_1417985e0(uVar5,uVar2,0,0,(ulonglong)pplVar8 & 0xffffffff00000000,0,0,0,0);
  *(undefined8 *)(param_1 + 0x1d0) = uVar2;
  FUN_142ebc100(param_1 + 0x170);
  lVar3 = *(longlong *)(param_1 + 0x1a8);
  local_90 = uVar6;
  local_res10[2] = param_1;
  local_98 = lVar3;
  if (lVar3 != 0) {
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_90 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar2);
  }
  FUN_1410786c0(local_res10 + 2,&local_98,0,*(undefined8 *)(param_1 + 0x1b8),0,0);
  lVar3 = *(longlong *)(param_1 + 0x1b8);
  local_88 = lVar3;
  if (lVar3 != 0) {
    uVar6 = UBlendableInterface::GetPrivateStaticClass();
    uVar6 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar6);
  }
  local_80 = uVar6;
  FUN_1410786c0(local_res10 + 2,&local_88,*(undefined8 *)(param_1 + 0x1a8),0,0,0);
  FUN_1410aa290(param_1);
  return;
}



// FUNCTION 14108e800 FUN_14108e800 body=1177 status=ok
// SIG undefined FUN_14108e800(void)

void FUN_14108e800(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  
  FUN_142ef9e70();
  lVar5 = 0;
  local_e0 = 0xe;
  local_e8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  FGenericPlatformString::Memcpy(local_e8,L"prevHint.hint",0x1c);
  local_f8 = (longlong *)0x0;
  local_f0 = 0;
  FUN_140e98630(param_1,param_1 + 0x178,&local_e8,0,6,&local_f8);
  plVar6 = local_f8;
  for (iVar8 = (int)local_f0; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_f8 != (longlong *)0x0) {
    FMemory::Free(local_f8);
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  local_c8 = 0;
  local_c0 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
  FGenericPlatformString::Memcpy(local_c8,L"nextHint.hint",0x1c);
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  FUN_140e98630(param_1,param_1 + 0x180,&local_c8,0,6,&local_d8);
  plVar6 = local_d8;
  for (iVar8 = (int)local_d0; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  local_a8 = 0;
  local_a0 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  FGenericPlatformString::Memcpy(local_a8,L"navigationButtons",0x24);
  local_b8 = (longlong *)0x0;
  local_b0 = 0;
  FUN_140f15e80(param_1,param_1 + 0x170,&local_a8,0,6,&local_b8);
  plVar6 = local_b8;
  for (iVar8 = (int)local_b0; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free(local_b8);
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  lVar7 = *(longlong *)(param_1 + 0x170);
  if (lVar7 != 0) {
    *(undefined1 *)(lVar7 + 0x242) = 1;
    *(undefined4 *)(lVar7 + 0x244) = 0x42a60000;
    *(undefined1 *)(lVar7 + 0x1e1) = 1;
    *(undefined2 *)(lVar7 + 0x209) = 0;
  }
  uVar3 = FUN_142085870(param_1,local_60,L"menuTitle");
  FUN_142ede260(param_1 + 0x188,uVar3);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_58 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  uVar3 = FUN_142085870(param_1,local_50,L"menuTitleShadow");
  FUN_142ede260(param_1 + 0x1a0,uVar3);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_48 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  uVar3 = FUN_1404b03b0();
  FText::FText(local_78,uVar3);
  if ((*(longlong *)(param_1 + 400) != 0) && (*(longlong *)(param_1 + 0x198) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x198) + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (0 < iVar8) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x188,local_78,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x1a8) != 0) && (*(longlong *)(param_1 + 0x1b0) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1b0) + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (0 < iVar8) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x1a0,local_78,1,0);
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x38);
  if (lVar7 != 0) {
    lVar4 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14108ebaa;
  }
  lVar7 = lVar5;
LAB_14108ebaa:
  lVar4 = *(longlong *)(param_1 + 0x178);
  if (((lVar4 != 0) && (*(longlong *)(param_1 + 0x180) != 0)) && (lVar7 != 0)) {
    local_90 = 0;
    local_98 = lVar4;
    uVar3 = UBlendableInterface::GetPrivateStaticClass();
    local_90 = UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar3);
    FUN_142ecff00(lVar7,&local_98,DAT_1468745c0);
    lVar4 = *(longlong *)(param_1 + 0x180);
    local_88 = lVar4;
    if (lVar4 != 0) {
      uVar3 = UBlendableInterface::GetPrivateStaticClass();
      lVar5 = UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar3);
    }
    local_80 = lVar5;
    FUN_142ecff00(lVar7,&local_88,DAT_1468745b8);
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_142087ad0(*(longlong *)(param_1 + 0x180),param_1 + 0x1b8,param_1 + 0x1bc);
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_70 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  return;
}



// FUNCTION 14108eca0 FUN_14108eca0 body=1721 status=ok
// SIG undefined FUN_14108eca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14108eca0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined1 auStack_218 [32];
  longlong **local_1f8;
  int local_1e8;
  longlong local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  longlong *local_190;
  undefined8 local_188;
  longlong local_180;
  undefined8 local_178;
  longlong *local_170;
  undefined8 local_168;
  longlong local_160;
  undefined8 local_158;
  longlong *local_150;
  undefined8 local_148;
  longlong *local_140;
  undefined2 *local_138;
  int local_130;
  longlong local_128 [2];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  FUN_142ec45d0();
  local_1b8 = 0xe;
  local_1c0 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c0,0);
  FGenericPlatformString::Memcpy(local_1c0,L"subtitleField",0x1c);
  local_1f8 = &local_1d0;
  local_1d0 = (longlong *)0x0;
  local_1c8 = 0;
  local_118 = 0;
  uVar5 = FUN_140ac4770(param_1,&local_1c0,0,6);
  *(undefined8 *)(param_1 + 0x648) = uVar5;
  plVar8 = local_1d0;
  for (iVar9 = (int)local_1c8; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_1d0 != (longlong *)0x0) {
    FMemory::Free(local_1d0);
  }
  if (local_1c0 != 0) {
    FMemory::Free();
  }
  plVar8 = *(longlong **)(param_1 + 0x648);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x278))(plVar8,0);
    FUN_142f0de70(*(undefined8 *)(param_1 + 0x648),PTR_DAT_14629fe38);
  }
  local_1a0 = 0;
  local_198 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a0,0);
  FGenericPlatformString::Memcpy(local_1a0,L"subtitleBGAdjustable",0x2a);
  local_1f8 = &local_1b0;
  local_1b0 = (longlong *)0x0;
  local_1a8 = 0;
  local_110 = 0;
  uVar5 = FUN_140e96f30(param_1,&local_1a0,0,6);
  *(undefined8 *)(param_1 + 0x650) = uVar5;
  plVar8 = local_1b0;
  for (iVar9 = (int)local_1a8; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_1b0 != (longlong *)0x0) {
    FMemory::Free(local_1b0);
  }
  if (local_1a0 != 0) {
    FMemory::Free();
  }
  plVar8 = *(longlong **)(param_1 + 0x650);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x278))(plVar8,0);
  }
  local_180 = 0;
  local_178 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_180,0);
  FGenericPlatformString::Memcpy(local_180,L"closedCaptioning",0x22);
  local_1f8 = &local_190;
  local_190 = (longlong *)0x0;
  local_188 = 0;
  local_108 = 0;
  uVar5 = FUN_140e96f30(param_1,&local_180,0,6);
  *(undefined8 *)(param_1 + 0x660) = uVar5;
  plVar8 = local_190;
  for (iVar9 = (int)local_188; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_190 != (longlong *)0x0) {
    FMemory::Free(local_190);
  }
  if (local_180 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x660) != 0) {
    local_1e8 = 0;
    local_160 = 0;
    local_158 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_160,0);
    FGenericPlatformString::Memcpy(local_160,L"line0",0xc);
    local_1f8 = &local_170;
    local_170 = (longlong *)0x0;
    local_168 = 0;
    local_100 = 0;
    plVar6 = (longlong *)FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x660),&local_160,0,6);
    local_140 = plVar6;
    plVar8 = local_170;
    for (iVar9 = (int)local_168; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_170 != (longlong *)0x0) {
      FMemory::Free(local_170);
    }
    if (local_160 != 0) {
      FMemory::Free();
    }
    FUN_142085870(*(undefined8 *)(param_1 + 0x660),&local_1e0,L"lineBackground0");
    while ((plVar6 != (longlong *)0x0 && (local_1e0 != 0))) {
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x278))(plVar6,0);
        FUN_142056670(local_1e0,0);
      }
      plVar8 = local_1d8;
      lVar4 = local_1e0;
      plVar6 = (longlong *)0x0;
      if (local_1d8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1d8 + 1) = (int)local_1d8[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)local_1d8 + 0xc) = *(int *)((longlong)local_1d8 + 0xc) + 1;
        UNLOCK();
        LOCK();
        plVar6 = local_1d8 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        plVar6 = plVar8;
        if ((int)lVar3 == 1) {
          (**(code **)*local_1d8)(local_1d8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      iVar9 = *(int *)(param_1 + 0x670);
      *(int *)(param_1 + 0x670) = iVar9 + 1;
      if (*(int *)(param_1 + 0x674) < iVar9 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_1 + 0x668,iVar9);
      }
      local_150 = (longlong *)0x0;
      puVar7 = (undefined8 *)((longlong)iVar9 * 0x20 + *(longlong *)(param_1 + 0x668));
      local_148 = 0;
      local_f8 = 0;
      *puVar7 = local_140;
      puVar7[1] = lVar4;
      iVar9 = local_1e8 + 1;
      puVar7[2] = plVar6;
      *(undefined4 *)(puVar7 + 3) = 0xbf800000;
      local_1e8 = iVar9;
      FString::PrintfImpl(local_128,L"line%i",iVar9);
      local_1f8 = &local_150;
      plVar6 = (longlong *)FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x660),local_128,0,6);
      local_140 = plVar6;
      if (local_128[0] != 0) {
        FMemory::Free();
      }
      plVar8 = local_150;
      for (iVar10 = (int)local_148; iVar10 != 0; iVar10 = iVar10 + -1) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
      }
      if (local_150 != (longlong *)0x0) {
        FMemory::Free(local_150);
      }
      FString::PrintfImpl(&local_138,L"lineBackground%i",iVar9);
      puVar11 = &DAT_143f3eda8;
      if (local_130 != 0) {
        puVar11 = local_138;
      }
      plVar8 = (longlong *)FUN_142085870(*(undefined8 *)(param_1 + 0x660),local_f0,puVar11);
      if (&local_1e0 != plVar8) {
        local_1e0 = *plVar8;
        *plVar8 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_1d8);
      }
      plVar8 = local_e8;
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_e8 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_e8)(local_e8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8);
          }
        }
      }
      if (local_138 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    if (local_1d8 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_1d8 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_1d8)(local_1d8);
        LOCK();
        piVar1 = (int *)((longlong)local_1d8 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_1d8 + 8))(local_1d8,1);
        }
      }
    }
  }
  FUN_14109c830(param_1);
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = param_1;
    *puVar7 = &PTR_FUN_143f77b70;
  }
  local_d8[0] = &LAB_14107d310;
  uVar5 = FUN_1420849a0(param_1,local_88,local_d8);
  FUN_14208c260(param_1,uVar5);
  if (local_48 != 0) {
    plVar8 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar8 = local_58;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    plVar8 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar8 = local_a8;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14108f360 FUN_14108f360 body=374 status=ok
// SIG undefined FUN_14108f360(void)

void FUN_14108f360(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FUN_142ec45d0();
  local_60 = 10;
  local_68 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,L"nameplate",0x14);
  local_78 = (longlong *)0x0;
  local_70 = 0;
  uVar1 = FUN_140eca3f0(param_1,&local_68,0,6,&local_78);
  *(undefined8 *)(param_1 + 0x630) = uVar1;
  plVar4 = local_78;
  for (iVar3 = (int)local_70; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x630) != 0) {
    FUN_141016b20(*(longlong *)(param_1 + 0x630),1);
    FUN_141017d40(*(undefined8 *)(param_1 + 0x630),*(undefined4 *)(param_1 + 0x648));
    if (*(longlong *)(param_1 + 0x638) != 0) {
      FUN_141016b00(*(undefined8 *)(param_1 + 0x630),*(longlong *)(param_1 + 0x638),
                    *(undefined4 *)(param_1 + 0x640),*(undefined4 *)(param_1 + 0x644));
    }
  }
  local_28 = 0;
  local_18 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_48);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = param_1;
    *puVar2 = &PTR_FUN_143f77b70;
  }
  local_58[0] = &LAB_14107d350;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 14108f4e0 FUN_14108f4e0 body=863 status=ok
// SIG undefined FUN_14108f4e0(void)

void FUN_14108f4e0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong local_res10;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  FUN_142ef9e70();
  local_20 = 0x11;
  local_res10 = 0;
  local_28 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"CategoryNavLarge",0x22);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_140e98b90(param_1,&local_res10,&local_28,0,6,&local_38);
  plVar3 = local_38;
  for (iVar2 = (int)local_30; iVar2 != 0; iVar2 = iVar2 + -1) {
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
  lVar1 = local_res10;
  if (local_res10 != 0) {
    local_38 = (longlong *)0x0;
    local_30 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"CategoryNameText",0x22);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140e99270(lVar1,param_1 + 0x170,&local_38,0,6,&local_28);
    plVar3 = local_28;
    for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
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
    local_30 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"CompletionText",0x1e);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140e99270(lVar1,param_1 + 0x178,&local_38,0,6,&local_28);
    plVar3 = local_28;
    for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
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
    local_30 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"NavButtonLeft",0x1c);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140f15b10(lVar1,param_1 + 0x180,&local_38,0,6,&local_28);
    plVar3 = local_28;
    for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
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
    local_30 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"NavButtonRight",0x1e);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140f15b10(lVar1,param_1 + 0x188,&local_38,0,6,&local_28);
    plVar3 = local_28;
    for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
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
  }
  return;
}



// FUNCTION 14108f840 FUN_14108f840 body=1048 status=ok
// SIG undefined FUN_14108f840(void)

void FUN_14108f840(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong local_res8;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  FUN_142ef9e70();
  uVar5 = 0;
  local_20 = 0x11;
  local_res8 = 0;
  local_28 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"CategoryNavSmall",0x22);
  local_38 = (longlong *)0x0;
  local_30 = 0;
  FUN_140e98b90(param_1,&local_res8,&local_28,0,6,&local_38);
  plVar6 = local_38;
  for (iVar7 = (int)local_30; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  lVar1 = local_res8;
  if (local_res8 != 0) {
    local_38 = (longlong *)0x0;
    local_30 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"CategoryNameText",0x22);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140e99270(lVar1,param_1 + 0x170,&local_38,0,6,&local_28);
    plVar6 = local_28;
    for (iVar7 = (int)local_20; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_38 = (longlong *)0x0;
    local_30 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"CompletionText",0x1e);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140e99270(lVar1,param_1 + 0x178,&local_38,0,6,&local_28);
    plVar6 = local_28;
    for (iVar7 = (int)local_20; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_38 = (longlong *)0x0;
    local_30 = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"promptHintWrapperRB",0x28);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140e98630(lVar1,param_1 + 0x180,&local_38,0,6,&local_28);
    plVar6 = local_28;
    for (iVar7 = (int)local_20; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_38 = (longlong *)0x0;
    local_30 = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"promptHintWrapperLB",0x28);
    local_28 = (longlong *)0x0;
    local_20 = 0;
    FUN_140e98630(lVar1,param_1 + 0x188,&local_38,0,6,&local_28);
    plVar6 = local_28;
    for (iVar7 = (int)local_20; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar3 = AGPoisonSplashProjectile::GetPrivateStaticClass();
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
      plVar6 = *(longlong **)(param_1 + 0x188);
      uVar4 = uVar5;
      local_28 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        uVar4 = UBlendableInterface::GetPrivateStaticClass();
        uVar4 = UObjectBaseUtility::GetInterfaceAddress(plVar6,uVar4);
      }
      local_20 = uVar4;
      FUN_142ecff00(lVar1,&local_28,DAT_146874540);
      plVar6 = *(longlong **)(param_1 + 0x180);
      local_28 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        uVar5 = UBlendableInterface::GetPrivateStaticClass();
        uVar5 = UObjectBaseUtility::GetInterfaceAddress(plVar6,uVar5);
      }
      local_20 = uVar5;
      FUN_142ecff00(lVar1,&local_28,DAT_146874548);
    }
  }
  return;
}



// FUNCTION 14108fc60 FUN_14108fc60 body=2848 status=ok
// SIG undefined FUN_14108fc60(void)

void FUN_14108fc60(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong local_268;
  undefined8 local_260;
  longlong *local_258;
  undefined8 local_250;
  longlong local_248;
  undefined8 local_240;
  longlong *local_238;
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
  longlong *local_1c8;
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
  longlong local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8 [5];
  longlong local_c0;
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
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  
  FUN_142ef9e70();
  lVar6 = 0;
  local_240 = 0xc;
  local_248 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
  FGenericPlatformString::Memcpy(local_248,L"TrophyPanel",0x18);
  local_258 = (longlong *)0x0;
  plVar9 = (longlong *)(param_1 + 0x170);
  local_250 = 0;
  FUN_140e98b90(param_1,plVar9,&local_248,0,6,&local_258);
  plVar8 = local_258;
  for (iVar7 = (int)local_250; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_258 != (longlong *)0x0) {
    FMemory::Free(local_258);
  }
  if (local_248 != 0) {
    FMemory::Free();
  }
  if (*plVar9 != 0) {
    local_228 = 0;
    local_220 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,0);
    FGenericPlatformString::Memcpy(local_228,L"EnemyNameText",0x1c);
    local_238 = (longlong *)0x0;
    local_230 = 0;
    FUN_140e99270(*plVar9,param_1 + 0x178,&local_228,0,6,&local_238);
    plVar8 = local_238;
    for (iVar7 = (int)local_230; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_238 != (longlong *)0x0) {
      FMemory::Free(local_238);
    }
    if (local_228 != 0) {
      FMemory::Free();
    }
    local_208 = 0;
    local_200 = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
    FGenericPlatformString::Memcpy(local_208,L"TrophyColorText",0x20);
    local_218 = (longlong *)0x0;
    local_210 = 0;
    FUN_140e99270(*plVar9,param_1 + 0x180,&local_208,0,6,&local_218);
    plVar8 = local_218;
    for (iVar7 = (int)local_210; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_218 != (longlong *)0x0) {
      FMemory::Free(local_218);
    }
    if (local_208 != 0) {
      FMemory::Free();
    }
    local_1e8 = 0;
    local_1e0 = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
    FGenericPlatformString::Memcpy(local_1e8,L"ProgressBar",0x18);
    local_1f8 = (longlong *)0x0;
    local_1f0 = 0;
    FUN_140f16560(*plVar9,param_1 + 0x1c8,&local_1e8,0,6,&local_1f8);
    plVar8 = local_1f8;
    for (iVar7 = (int)local_1f0; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_1f8 != (longlong *)0x0) {
      FMemory::Free(local_1f8);
    }
    if (local_1e8 != 0) {
      FMemory::Free();
    }
    local_268 = 0;
    local_260 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,0);
    FGenericPlatformString::Memcpy(local_268,L"NextRankText",0x1a);
    local_1d8 = (longlong *)0x0;
    local_1d0 = 0;
    local_a8 = 0;
    FUN_140e99270(*plVar9,param_1 + 0x188,&local_268,0,6,&local_1d8);
    plVar8 = local_1d8;
    for (iVar7 = (int)local_1d0; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_1d8 != (longlong *)0x0) {
      FMemory::Free(local_1d8);
    }
    if (local_268 != 0) {
      FMemory::Free();
    }
    local_1b8 = 0;
    local_1b0 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
    FGenericPlatformString::Memcpy(local_1b8,L"KillsLabelText",0x1e);
    local_1c8 = (longlong *)0x0;
    local_1c0 = 0;
    local_a0 = 0;
    FUN_140e99270(*plVar9,param_1 + 400,&local_1b8,0,6,&local_1c8);
    plVar8 = local_1c8;
    for (iVar7 = (int)local_1c0; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_1c8 != (longlong *)0x0) {
      FMemory::Free(local_1c8);
    }
    if (local_1b8 != 0) {
      FMemory::Free();
    }
    local_198 = 0;
    local_190 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
    FGenericPlatformString::Memcpy(local_198,L"KillsCountText",0x1e);
    local_1a8 = (longlong *)0x0;
    local_1a0 = 0;
    local_98 = 0;
    FUN_140e99270(*plVar9,param_1 + 0x198,&local_198,0,6,&local_1a8);
    plVar8 = local_1a8;
    for (iVar7 = (int)local_1a0; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_1a8 != (longlong *)0x0) {
      FMemory::Free(local_1a8);
    }
    if (local_198 != 0) {
      FMemory::Free();
    }
    local_178 = 0;
    local_170 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
    FGenericPlatformString::Memcpy(local_178,L"PanelNav",0x12);
    local_188 = (longlong *)0x0;
    local_180 = 0;
    local_90 = 0;
    FUN_140f15e80(*plVar9,param_1 + 0x1a0,&local_178,0,6,&local_188);
    plVar8 = local_188;
    for (iVar7 = (int)local_180; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_188 != (longlong *)0x0) {
      FMemory::Free(local_188);
    }
    if (local_178 != 0) {
      FMemory::Free();
    }
    local_158 = 0;
    local_150 = 0x26;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
    FGenericPlatformString::Memcpy(local_158,L"PanelNav.promptHintWrapper.promptHint",0x4c);
    local_168 = (longlong *)0x0;
    local_160 = 0;
    local_88 = 0;
    FUN_140e98630(*plVar9,param_1 + 0x1a8,&local_158,0,6,&local_168);
    plVar8 = local_168;
    for (iVar7 = (int)local_160; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_168 != (longlong *)0x0) {
      FMemory::Free(local_168);
    }
    if (local_158 != 0) {
      FMemory::Free();
    }
    local_138 = 0;
    local_130 = 0x46;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
    FGenericPlatformString::Memcpy
              (local_138,L"PanelContent.EnemyDescription.EnemyTextScrolling.EnemyDescriptionText",
               0x8c);
    local_148 = (longlong *)0x0;
    local_140 = 0;
    local_80 = 0;
    FUN_140e99270(*plVar9,param_1 + 0x1b0,&local_138,0,6,&local_148);
    plVar8 = local_148;
    for (iVar7 = (int)local_140; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_148 != (longlong *)0x0) {
      FMemory::Free(local_148);
    }
    if (local_138 != 0) {
      FMemory::Free();
    }
    local_118 = 0;
    local_110 = 0x43;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
    FGenericPlatformString::Memcpy
              (local_118,L"PanelContent.EnemyDescription.EnemyTextScrolling.ScrollingTextMask",0x86)
    ;
    local_128 = (longlong *)0x0;
    local_120 = 0;
    local_78 = 0;
    FUN_140e98b90(*plVar9,param_1 + 0x1b8,&local_118,0,6,&local_128);
    plVar8 = local_128;
    for (iVar7 = (int)local_120; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_128 != (longlong *)0x0) {
      FMemory::Free(local_128);
    }
    if (local_118 != 0) {
      FMemory::Free();
    }
    local_f8 = 0;
    local_f0 = 0x28;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    FGenericPlatformString::Memcpy(local_f8,L"PanelContent.EnemyDescription.ScrollBar",0x50);
    local_108 = (longlong *)0x0;
    local_100 = 0;
    local_70 = 0;
    FUN_140e98f00(*plVar9,param_1 + 0x1c0,&local_f8,0,6,&local_108);
    plVar9 = local_108;
    for (iVar7 = (int)local_100; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    if (local_108 != (longlong *)0x0) {
      FMemory::Free(local_108);
    }
    if (local_f8 != 0) {
      FMemory::Free();
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x38);
  if (lVar5 != 0) {
    lVar3 = AGPoisonSplashProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar3 = *(longlong *)(param_1 + 0x1a8);
      local_c0 = lVar6;
      local_e8[4] = lVar3;
      if (lVar3 != 0) {
        uVar4 = UBlendableInterface::GetPrivateStaticClass();
        local_c0 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
      }
      FUN_142ecff00(lVar5,local_e8 + 4,DAT_146874590);
    }
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_142f118f0(*(longlong *)(param_1 + 0x1b0),*(undefined8 *)(param_1 + 0x1c0),
                  *(undefined8 *)(param_1 + 0x1b8));
  }
  if (*(longlong *)(param_1 + 0x1a0) == 0) {
    return;
  }
  local_e8[0] = 0;
  local_e8[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
  FGenericPlatformString::Memcpy(local_e8[0],L"NavBarButton",0x1a);
  uVar4 = *(undefined8 *)(param_1 + 0x1a0);
  local_b8 = URemnantGameInstance::GetPrivateStaticClass();
  lVar5 = FUN_142ebcee0(uVar4,local_e8,local_b8,0);
  if (lVar5 == 0) {
LAB_1410905b2:
    lVar5 = lVar6;
  }
  else {
    lVar3 = URemnantGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1410905b2;
  }
  if (local_e8[0] != 0) {
    FMemory::Free();
  }
  if (lVar5 != 0) {
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_68,L"ENEMY DETAILS",L"GFxTrophyCaseMenu",L"EnemyDetailsText");
    FUN_142ed3af0(lVar5,uVar4,0);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_60 + 1;
      lVar3 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x1a0) + 0x2c0))
              (*(longlong **)(param_1 + 0x1a0),lVar5,1,0);
  }
  local_e8[2] = 0;
  local_e8[3] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8 + 2,0);
  FGenericPlatformString::Memcpy(local_e8[2],L"NavBarButton",0x1a);
  uVar4 = *(undefined8 *)(param_1 + 0x1a0);
  local_b0 = URemnantGameInstance::GetPrivateStaticClass();
  lVar5 = FUN_142ebcee0(uVar4,local_e8 + 2,local_b0,0);
  if (lVar5 != 0) {
    lVar3 = URemnantGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1410906f6;
  }
  lVar5 = lVar6;
LAB_1410906f6:
  if (local_e8[2] != 0) {
    FMemory::Free();
  }
  if (lVar5 != 0) {
    uVar4 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_50,L"VARIANTS",L"GFxTrophyCaseMenu",L"VariantsText");
    FUN_142ed3af0(lVar5,uVar4,0);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_48 + 1;
      lVar6 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141090780 FUN_141090780 body=906 status=ok
// SIG undefined FUN_141090780(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141090780(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  longlong **pplVar8;
  undefined1 auStack_118 [32];
  longlong **local_f8;
  longlong *local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  uint local_b0;
  wchar_t *local_a8;
  longlong **local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  FUN_142ec45d0();
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5c8);
  if (lVar2 != 0) {
    lVar3 = FUN_14142a560();
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
      USkinnedMeshComponent::SetPhysicsAsset(lVar2,param_1);
    }
  }
  local_d0 = 0x11;
  local_d8 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  FGenericPlatformString::Memcpy(local_d8,L"tutorialWidgetMC",0x22);
  local_f8 = &local_e8;
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  uVar4 = FUN_140e96f30(param_1,&local_d8,0,6);
  *(undefined8 *)(param_1 + 0x640) = uVar4;
  plVar7 = local_e8;
  for (iVar6 = (int)local_e0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free(local_e8);
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_e8 = (longlong *)0x0;
  local_e0 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  FGenericPlatformString::Memcpy(local_e8,L"tutorialHeader",0x1e);
  local_f8 = &local_d8;
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  uVar4 = FUN_140ac4770(param_1,&local_e8,0,6);
  *(undefined8 *)(param_1 + 0x648) = uVar4;
  plVar7 = local_d8;
  for (iVar6 = (int)local_d0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_e8 = (longlong *)0x0;
  local_e0 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  FGenericPlatformString::Memcpy(local_e8,L"tutorialMessage",0x20);
  local_f8 = &local_d8;
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  uVar4 = FUN_140ac4770(param_1,&local_e8,0,6);
  *(undefined8 *)(param_1 + 0x650) = uVar4;
  plVar7 = local_d8;
  for (iVar6 = (int)local_d0; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_d8 != (longlong *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x650) != 0) {
    local_a8 = L"none";
    local_c8 = (undefined1 *)0xffffffffffffffff;
    uStack_c0 = 0xffffffffffffffff;
    local_b8 = (longlong *)0x0;
    local_b0 = 7;
    FUN_142f0de50(*(longlong *)(param_1 + 0x650),&local_c8);
    if ((local_b0 >> 6 & 1) != 0) {
      (**(code **)(*local_b8 + 0x10))(local_b8,&local_c8,local_a8);
    }
  }
  FUN_1410a2b90(param_1);
  local_98 = (longlong **)0x0;
  local_88 = 0;
  puVar5 = (undefined8 *)FUN_140438ef0(0x10,&local_b8);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[1] = param_1;
    *puVar5 = &PTR_FUN_143f77b70;
  }
  local_c8 = &LAB_14107d300;
  uVar4 = FUN_1420849a0(param_1,local_78,&local_c8);
  FUN_14208c260(param_1,uVar4);
  if (local_38 != 0) {
    plVar7 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar7 = local_48;
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x10))(plVar7,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    pplVar8 = &local_b8;
    if (local_98 != (longlong **)0x0) {
      pplVar8 = local_98;
    }
    if (pplVar8 != (longlong **)0x0) {
      (*(code *)(*pplVar8)[2])(pplVar8,0);
    }
  }
  if (local_98 != (longlong **)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141090b10 FUN_141090b10 body=273 status=ok
// SIG undefined FUN_141090b10(void)

void FUN_141090b10(longlong param_1)

{
  double dVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 local_res8 [2];
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  FUN_142ef9e70();
  local_10 = 0xd;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"spinnerInner",0x1a);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar3 = FUN_140ecbdf0(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x188) = uVar3;
  plVar4 = local_28;
  for (iVar5 = (int)local_20; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    local_res8[0] = 0;
    uVar2 = FUN_142087ad0(*(longlong *)(param_1 + 0x188),local_res8,param_1 + 0x170);
    *(undefined1 *)(param_1 + 0x19c) = uVar2;
    dVar1 = (double)FUN_142eeca30(*(undefined8 *)(param_1 + 0x188));
    *(float *)(param_1 + 0x184) = (float)dVar1;
  }
  return;
}



// FUNCTION 141090c30 FUN_141090c30 body=973 status=ok
// SIG undefined FUN_141090c30(void)

void FUN_141090c30(longlong param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  int iVar7;
  longlong *plVar8;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ec45d0();
  iVar2 = 0;
  local_10 = 0xc;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"progressBar",0x18);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar3 = FUN_140ecc190(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x630) = uVar3;
  plVar8 = local_28;
  for (iVar7 = (int)local_20; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x1c;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"boostText.currentValueLabel",0x38);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar3 = FUN_140ac4770(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x638) = uVar3;
  plVar8 = local_18;
  for (iVar7 = (int)local_10; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"fillDividers",0x1a);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar3 = FUN_140e96f30(param_1,&local_28,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x640) = uVar3;
  plVar8 = local_18;
  for (iVar7 = (int)local_10; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    local_18 = (longlong *)0x0;
    local_10 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_18,5,&DAT_144689c94,5,0x3f);
    FUN_142088910(*(undefined8 *)(param_1 + 0x2b8),&local_18);
    if (local_18 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  lVar4 = FWeakObjectPtr::Get(param_1 + 0x5e0);
  if (lVar4 == 0) {
    return;
  }
  lVar5 = FUN_14148cad0();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  if (*(longlong *)(lVar4 + 0x6c0) != 0) {
    iVar2 = *(int *)(*(longlong *)(lVar4 + 0x6c0) + 0x1d8);
  }
  if (*(longlong *)(lVar4 + 0x6b8) != 0) {
    iVar2 = FUN_1430d6510();
  }
  if (*(longlong *)(param_1 + 0x640) == 0) {
    return;
  }
  local_18 = (longlong *)0x0;
  if (iVar2 == 1) {
    local_10 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    pwVar6 = L"one";
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        local_10 = 6;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
        uVar3 = 0xc;
        pwVar6 = L"three";
      }
      else {
        local_10 = 5;
        if (iVar2 == 4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
          uVar3 = 10;
          pwVar6 = L"four";
        }
        else if (iVar2 == 5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
          uVar3 = 10;
          pwVar6 = L"five";
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
          uVar3 = 10;
          pwVar6 = L"none";
        }
      }
      goto LAB_141090fbc;
    }
    local_10 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    pwVar6 = L"two";
  }
  uVar3 = 8;
LAB_141090fbc:
  FGenericPlatformString::Memcpy(local_18,pwVar6,uVar3);
  FUN_142088cf0(*(undefined8 *)(param_1 + 0x640),&local_18);
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141091000 FUN_141091000 body=1456 status=ok
// SIG undefined FUN_141091000(void)

void FUN_141091000(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong *local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88 [2];
  undefined1 local_78 [8];
  longlong *local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  
  FUN_142ec45d0();
  iVar6 = 0;
  local_120 = 8;
  local_128 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
  FGenericPlatformString::Memcpy(local_128,L"content",0x10);
  local_138 = (longlong *)0x0;
  local_130 = 0;
  uVar2 = FUN_140e96f30(param_1,&local_128,0,6,&local_138);
  *(undefined8 *)(param_1 + 0x638) = uVar2;
  plVar5 = local_138;
  for (iVar4 = (int)local_130; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_138 != (longlong *)0x0) {
    FMemory::Free(local_138);
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x638) != 0) {
    local_108 = 0;
    local_100 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
    FGenericPlatformString::Memcpy(local_108,L"headerText",0x16);
    local_118 = (longlong *)0x0;
    local_110 = 0;
    uVar2 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x638),&local_108,0,6,&local_118);
    *(undefined8 *)(param_1 + 0x640) = uVar2;
    plVar5 = local_118;
    for (iVar4 = (int)local_110; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_118 != (longlong *)0x0) {
      FMemory::Free(local_118);
    }
    if (local_108 != 0) {
      FMemory::Free();
    }
    local_e8 = 0;
    local_e0 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
    FGenericPlatformString::Memcpy(local_e8,L"headerTextShadow",0x22);
    local_f8 = (longlong *)0x0;
    local_f0 = 0;
    uVar2 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x638),&local_e8,0,6,&local_f8);
    *(undefined8 *)(param_1 + 0x648) = uVar2;
    plVar5 = local_f8;
    for (iVar4 = (int)local_f0; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_f8 != (longlong *)0x0) {
      FMemory::Free(local_f8);
    }
    if (local_e8 != 0) {
      FMemory::Free();
    }
    local_c8 = 0;
    local_c0 = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
    FGenericPlatformString::Memcpy(local_c8,L"unlockedText",0x1a);
    local_d8 = (longlong *)0x0;
    local_d0 = 0;
    uVar2 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x638),&local_c8,0,6,&local_d8);
    *(undefined8 *)(param_1 + 0x650) = uVar2;
    plVar5 = local_d8;
    for (iVar4 = (int)local_d0; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_d8 != (longlong *)0x0) {
      FMemory::Free(local_d8);
    }
    if (local_c8 != 0) {
      FMemory::Free();
    }
    local_a8 = 0;
    local_a0 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
    FGenericPlatformString::Memcpy(local_a8,L"partIcons",0x14);
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    local_60 = 0;
    uVar2 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x638),&local_a8,0,6,&local_b8);
    *(undefined8 *)(param_1 + 0x658) = uVar2;
    plVar5 = local_b8;
    for (iVar4 = (int)local_b0; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_b8 != (longlong *)0x0) {
      FMemory::Free(local_b8);
    }
    if (local_a8 != 0) {
      FMemory::Free();
    }
    if ((*(longlong *)(param_1 + 0x658) != 0) && (0 < *(int *)(param_1 + 0x630))) {
      local_58 = 0;
      do {
        iVar6 = iVar6 + 1;
        FString::PrintfImpl(local_88,L"icon%d",iVar6);
        local_98 = (longlong *)0x0;
        local_90 = 0;
        lVar3 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x658),local_88,0,6,&local_98);
        plVar5 = local_98;
        for (iVar4 = (int)local_90; iVar4 != 0; iVar4 = iVar4 + -1) {
          if (*plVar5 != 0) {
            FMemory::Free();
          }
          plVar5 = plVar5 + 2;
        }
        if (local_98 != (longlong *)0x0) {
          FMemory::Free(local_98);
        }
        if (lVar3 != 0) {
          iVar4 = *(int *)(param_1 + 0x668);
          *(int *)(param_1 + 0x668) = iVar4 + 1;
          if (*(int *)(param_1 + 0x66c) < iVar4 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x660,iVar4)
            ;
          }
          *(longlong *)(*(longlong *)(param_1 + 0x660) + (longlong)iVar4 * 8) = lVar3;
        }
        if (local_88[0] != 0) {
          FMemory::Free();
        }
      } while (iVar6 < *(int *)(param_1 + 0x630));
    }
  }
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (local_78,L"NEW PARTS",L"GFxVehiclePartUnlockedWidget",L"NewPartsText");
  plVar5 = *(longlong **)(param_1 + 0x640);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x2b0))(plVar5,local_78,1,0);
  }
  plVar5 = *(longlong **)(param_1 + 0x648);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x2b0))(plVar5,local_78,1,0);
  }
  if (*(longlong **)(param_1 + 0x650) != (longlong *)0x0) {
    lVar3 = **(longlong **)(param_1 + 0x650);
    uVar2 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_50,L"UNLOCKED",L"GFxVehiclePartUnlockedWidget",L"UnlockedText");
    (**(code **)(lVar3 + 0x2b0))(*(undefined8 *)(param_1 + 0x650),uVar2,1,0);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_48 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_70 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  return;
}



// FUNCTION 1410915b0 FUN_1410915b0 body=1787 status=ok
// SIG undefined FUN_1410915b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410915b0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  int iVar8;
  int *piVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  undefined1 auStack_1a8 [32];
  longlong **local_188;
  longlong **local_180;
  longlong *local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined8 local_160;
  longlong *local_158;
  undefined8 local_150;
  longlong *local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 local_120;
  ulonglong local_118;
  longlong local_110 [2];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  uVar7 = 0;
  local_118 = local_118 & 0xffffffff00000000;
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar9 < DAT_146874a44) && (_Init_thread_header(&DAT_146874a44), DAT_146874a44 == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a02e0,0);
    FGenericPlatformString::Memcpy(DAT_1462a02e0,L"vehiclePartsWidgetMC",0x2a);
    atexit((_func_5014 *)&LAB_143e5e150);
    _Init_thread_footer(&DAT_146874a44);
  }
  if ((*piVar9 < DAT_146874a48) && (_Init_thread_header(&DAT_146874a48), DAT_146874a48 == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a02f0,0);
    FGenericPlatformString::Memcpy(DAT_1462a02f0,L"notificationText",0x22);
    atexit((_func_5014 *)&LAB_143e5e3e0);
    _Init_thread_footer(&DAT_146874a48);
  }
  if ((*piVar9 < DAT_146874a4c) && (_Init_thread_header(&DAT_146874a4c), DAT_146874a4c == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0300,0);
    FGenericPlatformString::Memcpy(DAT_1462a0300,L"newIndicator",0x1a);
    atexit((_func_5014 *)&LAB_143e5e3a0);
    _Init_thread_footer(&DAT_146874a4c);
  }
  if ((*piVar9 < DAT_146874a50) && (_Init_thread_header(&DAT_146874a50), DAT_146874a50 == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0310,0);
    FGenericPlatformString::Memcpy(DAT_1462a0310,L"newPartsCounter",0x20);
    atexit((_func_5014 *)&LAB_143e5e380);
    _Init_thread_footer(&DAT_146874a50);
  }
  if ((*piVar9 < DAT_146874a70) && (_Init_thread_header(&DAT_146874a70), DAT_146874a70 == -1)) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (&DAT_146874a58,L"Return to a Catch-A-Ride to receive vehicle parts.",
               L"VehiclePartsCard",L"NotificationText");
    atexit(FUN_143e5e1f0);
    _Init_thread_footer(&DAT_146874a70);
  }
  FUN_142ec45d0(param_1);
  local_180 = &local_178;
  local_178 = (longlong *)0x0;
  local_188 = (longlong **)CONCAT71(local_188._1_7_,6);
  local_170 = 0;
  local_118 = 0;
  cVar1 = FUN_140ecf270(param_1,(undefined8 *)(param_1 + 0x630),&DAT_1462a02e0,0);
  plVar11 = local_178;
  for (iVar8 = (int)local_170; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar11 != 0) {
      FMemory::Free();
    }
    plVar11 = plVar11 + 2;
  }
  if (local_178 != (longlong *)0x0) {
    FMemory::Free(local_178);
  }
  if (cVar1 != '\0') {
    local_180 = &local_168;
    local_188 = (longlong **)CONCAT71(local_188._1_7_,6);
    local_168 = (longlong *)0x0;
    local_160 = 0;
    local_100 = 0;
    cVar1 = FUN_140e99270(*(undefined8 *)(param_1 + 0x630),param_1 + 0x638,&DAT_1462a02f0,0);
    plVar11 = local_168;
    for (iVar8 = (int)local_160; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar11 != 0) {
        FMemory::Free();
      }
      plVar11 = plVar11 + 2;
    }
    if (local_168 != (longlong *)0x0) {
      FMemory::Free(local_168);
    }
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x638) + 0x2b0))
                (*(longlong **)(param_1 + 0x638),&DAT_146874a58,1,0);
    }
    local_188 = &local_158;
    local_158 = (longlong *)0x0;
    local_150 = 0;
    local_f8 = 0;
    lVar2 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x630),&DAT_1462a0300,0,6);
    plVar11 = local_158;
    for (iVar8 = (int)local_150; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*plVar11 != 0) {
        FMemory::Free();
      }
      plVar11 = plVar11 + 2;
    }
    if (local_158 != (longlong *)0x0) {
      FMemory::Free(local_158);
    }
    uVar3 = uVar7;
    if (lVar2 != 0) {
      local_188 = &local_148;
      local_148 = (longlong *)0x0;
      local_140 = 0;
      local_f0 = 0;
      uVar3 = FUN_140ecbdf0(lVar2,&DAT_1462a0300,0,6);
      plVar11 = local_148;
      for (iVar8 = (int)local_140; iVar8 != 0; iVar8 = iVar8 + -1) {
        if (*plVar11 != 0) {
          FMemory::Free();
        }
        plVar11 = plVar11 + 2;
      }
      if (local_148 != (longlong *)0x0) {
        FMemory::Free(local_148);
      }
    }
    uVar4 = uVar7;
    if (uVar3 != 0) {
      local_188 = &local_138;
      local_138 = (longlong *)0x0;
      local_130 = 0;
      local_e8 = 0;
      uVar4 = FUN_140ecc7d0(uVar3,&DAT_1462a0310,0,6);
    }
    *(ulonglong *)(param_1 + 0x640) = uVar4;
    if (uVar3 != 0) {
      plVar11 = local_138;
      for (iVar8 = (int)local_130; iVar8 != 0; iVar8 = iVar8 + -1) {
        if (*plVar11 != 0) {
          FMemory::Free();
        }
        plVar11 = plVar11 + 2;
      }
      if (local_138 != (longlong *)0x0) {
        FMemory::Free(local_138);
      }
    }
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x660));
    LOCK();
    *(undefined4 *)(param_1 + 0x668) = 1;
    UNLOCK();
    if (*(int *)(param_1 + 0x670) != 0) {
      local_e0 = 0;
      plVar11 = (longlong *)(param_1 + 0x650);
      uVar3 = uVar7;
      do {
        FString::PrintfImpl(local_110,PTR_u_icon_d_1462a0320,uVar3);
        iVar8 = *(int *)(param_1 + 0x658);
        local_128 = (longlong *)0x0;
        local_120 = 0;
        *(int *)(param_1 + 0x658) = iVar8 + 1;
        if (*(int *)(param_1 + 0x65c) < iVar8 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11,iVar8);
        }
        *(undefined8 *)((longlong)iVar8 * 8 + *plVar11) = 0;
        local_188 = &local_128;
        lVar2 = *plVar11;
        uVar5 = FUN_140ecbdf0(*(undefined8 *)(param_1 + 0x630),local_110,0,6);
        *(undefined8 *)((longlong)iVar8 * 8 + lVar2) = uVar5;
        plVar10 = local_128;
        for (iVar8 = (int)local_120; iVar8 != 0; iVar8 = iVar8 + -1) {
          if (*plVar10 != 0) {
            FMemory::Free();
          }
          plVar10 = plVar10 + 2;
        }
        if (local_128 != (longlong *)0x0) {
          FMemory::Free(local_128);
        }
        if (local_110[0] != 0) {
          FMemory::Free();
        }
        uVar12 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar12;
      } while (uVar12 != *(uint *)(param_1 + 0x670));
    }
    if (0 < *(int *)(param_1 + 0x658)) {
      uVar7 = **(ulonglong **)(param_1 + 0x650);
    }
    *(ulonglong *)(param_1 + 0x648) = uVar7;
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x660));
    LOCK();
    *(undefined4 *)(param_1 + 0x668) = 0;
    UNLOCK();
  }
  local_a8 = (longlong *)0x0;
  local_98 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x10,local_c8);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = param_1;
    *puVar6 = &PTR_FUN_143f77b70;
  }
  local_d8[0] = &LAB_14107da00;
  uVar5 = FUN_1420849a0(param_1,local_88,local_d8);
  FUN_14208c260(param_1,uVar5);
  if (local_48 != 0) {
    plVar11 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar11 = local_58;
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x10))(plVar11,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    plVar11 = local_c8;
    if (local_a8 != (longlong *)0x0) {
      plVar11 = local_a8;
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x10))(plVar11,0);
    }
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141091cb0 FUN_141091cb0 body=543 status=ok
// SIG undefined FUN_141091cb0(void)

void FUN_141091cb0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ec45d0();
  local_10 = 0xc;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"progressBar",0x18);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar1 = FUN_140ecc190(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0x630) = uVar1;
  plVar3 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x630) != 0) {
    local_28 = (longlong *)0x0;
    local_20 = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,L"speedText.speedText",0x28);
    local_18 = (longlong *)0x0;
    local_10 = 0;
    uVar1 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x630),&local_28,0,6,&local_18);
    *(undefined8 *)(param_1 + 0x638) = uVar1;
    plVar3 = local_18;
    for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free();
    }
    local_28 = (longlong *)0x0;
    local_20 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,&DAT_14467c208,8);
    local_18 = (longlong *)0x0;
    local_10 = 0;
    uVar1 = FUN_140ecc7d0(*(undefined8 *)(param_1 + 0x630),&local_28,0,6,&local_18);
    *(undefined8 *)(param_1 + 0x640) = uVar1;
    plVar3 = local_18;
    for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141091ed0 FUN_141091ed0 body=466 status=ok
// SIG undefined FUN_141091ed0(void)

void FUN_141091ed0(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ec45d0();
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar2 = FUN_14106a870(param_1,param_1 + 0x640,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x630) = uVar2;
  plVar6 = local_18;
  for (iVar5 = (int)local_10; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  local_18 = (longlong *)0x0;
  local_10 = 0;
  uVar2 = FUN_14106a870(param_1,param_1 + 0x650,0,6,&local_18);
  *(undefined8 *)(param_1 + 0x638) = uVar2;
  plVar6 = local_18;
  for (iVar5 = (int)local_10; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5e0);
  if (lVar3 != 0) {
    lVar4 = FUN_14148cad0();
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
      lVar3 = *(longlong *)(lVar3 + 0x6d0);
      goto LAB_141092059;
    }
  }
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5e0);
  if (lVar3 == 0) {
    return;
  }
  lVar4 = AGTutorialStepVideo::GetPrivateStaticClass();
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
  lVar3 = *(longlong *)(lVar3 + 0x4e8);
LAB_141092059:
  if (lVar3 != 0) {
    if (*(longlong *)(param_1 + 0x630) != 0) {
      FUN_1410868f0(*(longlong *)(param_1 + 0x630),1,lVar3);
    }
    if (*(longlong *)(param_1 + 0x638) != 0) {
      FUN_1410868f0(*(longlong *)(param_1 + 0x638),0,lVar3);
    }
  }
  return;
}



// FUNCTION 1410920b0 FUN_1410920b0 body=1046 status=ok
// SIG undefined FUN_1410920b0(void)

void FUN_1410920b0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  FUN_140f39860();
  FUN_142085870(param_1,&local_78,L"equippedTextfieldWrapper");
  plVar2 = local_70;
  if (local_78 != 0) {
    *(longlong *)(param_1 + 0x6c8) = local_78;
    plVar6 = *(longlong **)(param_1 + 0x6d0);
    if (local_70 != plVar6) {
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_70 + 0xc) = *(int *)((longlong)local_70 + 0xc) + 1;
        UNLOCK();
        plVar6 = *(longlong **)(param_1 + 0x6d0);
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      *(longlong **)(param_1 + 0x6d0) = plVar2;
    }
    uVar5 = FUN_1420392d0(local_78,local_68,L"equippedTextfield");
    FUN_142ede260(param_1 + 0x6e8,uVar5);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_60 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  FUN_142085870(param_1,&local_88,L"cantSellFavoriteAnimation");
  plVar2 = local_80;
  if (local_88 != 0) {
    *(longlong *)(param_1 + 0x6d8) = local_88;
    plVar6 = *(longlong **)(param_1 + 0x6e0);
    if (local_80 != plVar6) {
      if (local_80 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_80 + 0xc) = *(int *)((longlong)local_80 + 0xc) + 1;
        UNLOCK();
        plVar6 = *(longlong **)(param_1 + 0x6e0);
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      *(longlong **)(param_1 + 0x6e0) = plVar2;
    }
    FUN_14203e4e0(local_88,&DAT_144688820);
    uVar5 = FUN_1420392d0(local_88,local_58,L"cantSell");
    FUN_142ede260(param_1 + 0x700,uVar5);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_50 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    uVar5 = FUN_1420392d0(local_88,local_48,L"favoriteText");
    FUN_142ede260(param_1 + 0x718,uVar5);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_40 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_80 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x708) != 0) && (*(longlong *)(param_1 + 0x710) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x710) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_38,L"Can\'t Sell",L"GFxVendingMachineBackpackWidget",L"CantSellText")
      ;
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x700,uVar5,1,0);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_30 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
    }
  }
  if ((*(longlong *)(param_1 + 0x720) != 0) && (*(longlong *)(param_1 + 0x728) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x728) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      uVar5 = FUN_1404b03b0();
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x718,uVar5,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x6f0) != 0) && (*(longlong *)(param_1 + 0x6f8) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x6f8) + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_20,L"EQUIPPED",L"GFxVendingMachineBackpackWidget",L"EquippedText");
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x6e8,uVar5,1,0);
      if (local_18 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_18 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_18)(local_18);
          LOCK();
          piVar1 = (int *)((longlong)local_18 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_18 + 8))(local_18,1);
          }
        }
      }
    }
  }
  FUN_142ed2820(param_1,0,1);
  return;
}



// FUNCTION 1410924d0 FUN_1410924d0 body=4901 status=ok
// SIG undefined FUN_1410924d0(void)

void FUN_1410924d0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  undefined8 local_290;
  longlong local_288;
  undefined8 local_280;
  longlong local_278;
  longlong *local_270;
  longlong *local_268;
  undefined8 local_260;
  longlong local_258;
  undefined8 local_250;
  longlong *local_248;
  undefined8 local_240;
  longlong local_238;
  undefined8 local_230;
  longlong *local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 local_210;
  longlong *local_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  longlong *local_1e0;
  longlong local_1d8;
  longlong *local_1d0;
  longlong local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  undefined1 local_190 [8];
  longlong *local_188;
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined1 local_100 [8];
  longlong *local_f8;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  
  FUN_142ef9e70();
  local_280 = 0x17;
  local_288 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_288,0);
  FGenericPlatformString::Memcpy(local_288,L"vendingPlayerWidgetTop",0x2e);
  local_298 = (longlong *)0x0;
  plVar2 = (longlong *)(param_1 + 0x200);
  local_290 = 0;
  FUN_140e98b90(param_1,plVar2,&local_288,0,6,&local_298);
  plVar8 = local_298;
  for (iVar9 = (int)local_290; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_298 != (longlong *)0x0) {
    FMemory::Free(local_298);
  }
  if (local_288 != 0) {
    FMemory::Free();
  }
  if (*plVar2 != 0) {
    FUN_142085870(*plVar2,&local_1d8,L"purchaseClip");
    plVar8 = local_1d0;
    if (local_1d8 != 0) {
      *(longlong *)(param_1 + 0x208) = local_1d8;
      plVar6 = *(longlong **)(param_1 + 0x210);
      if (local_1d0 != plVar6) {
        if (local_1d0 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_1d0 + 0xc) = *(int *)((longlong)local_1d0 + 0xc) + 1;
          UNLOCK();
          plVar6 = *(longlong **)(param_1 + 0x210);
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
        *(longlong **)(param_1 + 0x210) = plVar8;
      }
      uVar4 = FUN_1420392d0(local_1d8,local_190,L"innerText");
      FUN_142ede260(param_1 + 0x218,uVar4);
      if (local_188 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_188 + 1;
        lVar3 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_188)(local_188);
          LOCK();
          piVar1 = (int *)((longlong)local_188 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_188 + 8))(local_188,1);
          }
        }
      }
      if ((*(longlong *)(param_1 + 0x220) != 0) && (*(longlong *)(param_1 + 0x228) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x228) + 8);
        LOCK();
        iVar9 = *piVar1;
        if (iVar9 == 0) {
          *piVar1 = 0;
          iVar9 = 0;
        }
        UNLOCK();
        if (0 < iVar9) {
          UMistDebugEntityScreen::InspectEntity(param_1 + 0x218,param_1 + 0x170,1,0);
        }
      }
      uVar4 = FUN_1420392d0(local_1d8,local_180,L"innerTextShadow");
      FUN_142ede260(param_1 + 0x230,uVar4);
      if (local_178 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_178 + 1;
        lVar3 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_178)(local_178);
          LOCK();
          piVar1 = (int *)((longlong)local_178 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_178 + 8))(local_178,1);
          }
        }
      }
      if ((*(longlong *)(param_1 + 0x238) != 0) && (*(longlong *)(param_1 + 0x240) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x240) + 8);
        LOCK();
        iVar9 = *piVar1;
        if (iVar9 == 0) {
          *piVar1 = 0;
          iVar9 = 0;
        }
        UNLOCK();
        if (0 < iVar9) {
          UMistDebugEntityScreen::InspectEntity(param_1 + 0x230,param_1 + 0x170,1,0);
        }
      }
    }
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_1d0 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_1d0)(local_1d0);
        LOCK();
        piVar1 = (int *)((longlong)local_1d0 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_1d0 + 8))(local_1d0,1);
        }
      }
    }
    FUN_142085870(*plVar2,&local_1c8,L"insufficientFunds");
    plVar8 = local_1c0;
    if (local_1c8 != 0) {
      *(longlong *)(param_1 + 0x398) = local_1c8;
      plVar6 = *(longlong **)(param_1 + 0x3a0);
      if (local_1c0 != plVar6) {
        if (local_1c0 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_1c0 + 0xc) = *(int *)((longlong)local_1c0 + 0xc) + 1;
          UNLOCK();
          plVar6 = *(longlong **)(param_1 + 0x3a0);
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
        *(longlong **)(param_1 + 0x3a0) = plVar8;
      }
      uVar4 = FUN_1420392d0(local_1c8,local_170,L"innerText");
      FUN_142ede260(param_1 + 0x3a8,uVar4);
      if (local_168 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_168 + 1;
        lVar3 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_168)(local_168);
          LOCK();
          piVar1 = (int *)((longlong)local_168 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_168 + 8))(local_168,1);
          }
        }
      }
      if ((*(longlong *)(param_1 + 0x3b0) != 0) && (*(longlong *)(param_1 + 0x3b8) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x3b8) + 8);
        LOCK();
        iVar9 = *piVar1;
        if (iVar9 == 0) {
          *piVar1 = 0;
          iVar9 = 0;
        }
        UNLOCK();
        if (0 < iVar9) {
          UMistDebugEntityScreen::InspectEntity(param_1 + 0x3a8,param_1 + 0x1e8,1,0);
        }
      }
      uVar4 = FUN_1420392d0(local_1c8,local_160,L"innerTextShadow");
      FUN_142ede260(param_1 + 0x3c0,uVar4);
      if (local_158 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_158 + 1;
        lVar3 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_158)(local_158);
          LOCK();
          piVar1 = (int *)((longlong)local_158 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_158 + 8))(local_158,1);
          }
        }
      }
      if ((*(longlong *)(param_1 + 0x3c8) != 0) && (*(longlong *)(param_1 + 0x3d0) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x3d0) + 8);
        LOCK();
        iVar9 = *piVar1;
        if (iVar9 == 0) {
          *piVar1 = 0;
          iVar9 = 0;
        }
        UNLOCK();
        if (0 < iVar9) {
          UMistDebugEntityScreen::InspectEntity(param_1 + 0x3c0,param_1 + 0x1e8,1,0);
        }
      }
    }
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_1c0 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_1c0)(local_1c0);
        LOCK();
        piVar1 = (int *)((longlong)local_1c0 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_1c0 + 8))(local_1c0,1);
        }
      }
    }
    FUN_142085870(*plVar2,&local_1b8,L"bagFullClip");
    plVar8 = local_1b0;
    if (local_1b8 != 0) {
      *(longlong *)(param_1 + 0x358) = local_1b8;
      plVar6 = *(longlong **)(param_1 + 0x360);
      if (local_1b0 != plVar6) {
        if (local_1b0 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_1b0 + 0xc) = *(int *)((longlong)local_1b0 + 0xc) + 1;
          UNLOCK();
          plVar6 = *(longlong **)(param_1 + 0x360);
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
        *(longlong **)(param_1 + 0x360) = plVar8;
      }
      uVar4 = FUN_1420392d0(local_1b8,local_150,L"innerText");
      FUN_142ede260(param_1 + 0x368,uVar4);
      if (local_148 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_148 + 1;
        lVar3 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_148)(local_148);
          LOCK();
          piVar1 = (int *)((longlong)local_148 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_148 + 8))(local_148,1);
          }
        }
      }
      if ((*(longlong *)(param_1 + 0x370) != 0) && (*(longlong *)(param_1 + 0x378) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x378) + 8);
        LOCK();
        iVar9 = *piVar1;
        if (iVar9 == 0) {
          *piVar1 = 0;
          iVar9 = 0;
        }
        UNLOCK();
        if (0 < iVar9) {
          UMistDebugEntityScreen::InspectEntity(param_1 + 0x368,param_1 + 0x1d0,1,0);
        }
      }
      uVar4 = FUN_1420392d0(local_1b8,local_140,L"innerTextShadow");
      FUN_142ede260(param_1 + 0x380,uVar4);
      if (local_138 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_138 + 1;
        lVar3 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_138)(local_138);
          LOCK();
          piVar1 = (int *)((longlong)local_138 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_138 + 8))(local_138,1);
          }
        }
      }
      if ((*(longlong *)(param_1 + 0x388) != 0) && (*(longlong *)(param_1 + 0x390) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x390) + 8);
        LOCK();
        iVar9 = *piVar1;
        if (iVar9 == 0) {
          *piVar1 = 0;
          iVar9 = 0;
        }
        UNLOCK();
        if (0 < iVar9) {
          UMistDebugEntityScreen::InspectEntity(param_1 + 0x380,param_1 + 0x1d0,1,0);
        }
      }
    }
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_1b0 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_1b0)(local_1b0);
        LOCK();
        piVar1 = (int *)((longlong)local_1b0 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_1b0 + 8))(local_1b0,1);
        }
      }
    }
    FUN_142085870(*plVar2,&local_1a8,L"soldClip");
    plVar8 = local_1a0;
    if (local_1a8 != 0) {
      *(longlong *)(param_1 + 0x248) = local_1a8;
      plVar6 = *(longlong **)(param_1 + 0x250);
      if (local_1a0 != plVar6) {
        if (local_1a0 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_1a0 + 0xc) = *(int *)((longlong)local_1a0 + 0xc) + 1;
          UNLOCK();
          plVar6 = *(longlong **)(param_1 + 0x250);
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
        *(longlong **)(param_1 + 0x250) = plVar8;
      }
      uVar4 = FUN_1420392d0(local_1a8,local_130,L"innerText");
      FUN_142ede260(param_1 + 600,uVar4);
      if (local_128 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_128 + 1;
        lVar3 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_128)(local_128);
          LOCK();
          piVar1 = (int *)((longlong)local_128 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_128 + 8))(local_128,1);
          }
        }
      }
      if ((*(longlong *)(param_1 + 0x260) != 0) && (*(longlong *)(param_1 + 0x268) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x268) + 8);
        LOCK();
        iVar9 = *piVar1;
        if (iVar9 == 0) {
          *piVar1 = 0;
          iVar9 = 0;
        }
        UNLOCK();
        if (0 < iVar9) {
          UMistDebugEntityScreen::InspectEntity(param_1 + 600,param_1 + 0x188,1,0);
        }
      }
      uVar4 = FUN_1420392d0(local_1a8,local_120,L"innerTextShadow");
      FUN_142ede260(param_1 + 0x270,uVar4);
      if (local_118 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_118 + 1;
        lVar3 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_118)(local_118);
          LOCK();
          piVar1 = (int *)((longlong)local_118 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_118 + 8))(local_118,1);
          }
        }
      }
      if ((*(longlong *)(param_1 + 0x278) != 0) && (*(longlong *)(param_1 + 0x280) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x280) + 8);
        LOCK();
        iVar9 = *piVar1;
        if (iVar9 == 0) {
          *piVar1 = 0;
          iVar9 = 0;
        }
        UNLOCK();
        if (0 < iVar9) {
          UMistDebugEntityScreen::InspectEntity(param_1 + 0x270,param_1 + 0x188,1,0);
        }
      }
    }
    if (local_1a0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_1a0 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_1a0)(local_1a0);
        LOCK();
        piVar1 = (int *)((longlong)local_1a0 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_1a0 + 8))(local_1a0,1);
        }
      }
    }
    FUN_142085870(*plVar2,&local_278,L"healthFullClip");
    plVar8 = local_270;
    if (local_278 != 0) {
      *(longlong *)(param_1 + 0x288) = local_278;
      plVar6 = *(longlong **)(param_1 + 0x290);
      if (local_270 != plVar6) {
        if (local_270 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_270 + 0xc) = *(int *)((longlong)local_270 + 0xc) + 1;
          UNLOCK();
          plVar6 = *(longlong **)(param_1 + 0x290);
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
        *(longlong **)(param_1 + 0x290) = plVar8;
      }
      uVar4 = FUN_1420392d0(local_278,local_110,L"innerText");
      FUN_142ede260(param_1 + 0x298,uVar4);
      if (local_108 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_108 + 1;
        lVar3 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_108)(local_108);
          LOCK();
          piVar1 = (int *)((longlong)local_108 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_108 + 8))(local_108,1);
          }
        }
      }
      if ((*(longlong *)(param_1 + 0x2a0) != 0) && (*(longlong *)(param_1 + 0x2a8) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x2a8) + 8);
        LOCK();
        iVar9 = *piVar1;
        if (iVar9 == 0) {
          *piVar1 = 0;
          iVar9 = 0;
        }
        UNLOCK();
        if (0 < iVar9) {
          UMistDebugEntityScreen::InspectEntity(param_1 + 0x298,param_1 + 0x1a0,1,0);
        }
      }
      uVar4 = FUN_1420392d0(local_278,local_100,L"innerTextShadow");
      FUN_142ede260(param_1 + 0x2b0,uVar4);
      if (local_f8 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_f8 + 1;
        lVar3 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_f8)(local_f8);
          LOCK();
          piVar1 = (int *)((longlong)local_f8 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_f8 + 8))(local_f8,1);
          }
        }
      }
      if ((*(longlong *)(param_1 + 0x2b8) != 0) && (*(longlong *)(param_1 + 0x2c0) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x2c0) + 8);
        LOCK();
        iVar9 = *piVar1;
        if (iVar9 == 0) {
          *piVar1 = 0;
          iVar9 = 0;
        }
        UNLOCK();
        if (0 < iVar9) {
          UMistDebugEntityScreen::InspectEntity(param_1 + 0x2b0,param_1 + 0x1a0,1,0);
        }
      }
      puVar5 = (undefined8 *)FUN_1420392d0(local_278,local_f0,L"playerHead");
      *(undefined8 *)(param_1 + 0x2c8) = *puVar5;
      plVar8 = (longlong *)puVar5[1];
      plVar6 = *(longlong **)(param_1 + 0x2d0);
      if (plVar8 != plVar6) {
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
          UNLOCK();
          plVar6 = *(longlong **)(param_1 + 0x2d0);
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
        *(longlong **)(param_1 + 0x2d0) = plVar8;
      }
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_e8 + 1;
        lVar3 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_e8)(local_e8);
          LOCK();
          piVar1 = (int *)((longlong)local_e8 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_e8 + 8))(local_e8,1);
          }
        }
      }
    }
    if (local_270 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_270 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_270)(local_270);
        LOCK();
        piVar1 = (int *)((longlong)local_270 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_270 + 8))(local_270,1);
        }
      }
    }
    local_258 = 0;
    local_250 = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_258,0);
    FGenericPlatformString::Memcpy(local_258,L"vendingPlayerWidget",0x28);
    plVar8 = (longlong *)(param_1 + 0x3d8);
    local_268 = (longlong *)0x0;
    local_260 = 0;
    FUN_140e98b90(*plVar2,plVar8,&local_258,0,6,&local_268);
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
    if (*plVar8 != 0) {
      FUN_142085870(*plVar8,&local_1e8,L"backpackAmountContainer");
      plVar6 = local_1e0;
      if (local_1e8 != 0) {
        *(longlong *)(param_1 + 0x3e0) = local_1e8;
        plVar7 = *(longlong **)(param_1 + 1000);
        if (local_1e0 != plVar7) {
          if (local_1e0 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)local_1e0 + 0xc) = *(int *)((longlong)local_1e0 + 0xc) + 1;
            UNLOCK();
            plVar7 = *(longlong **)(param_1 + 1000);
          }
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
          *(longlong **)(param_1 + 1000) = plVar6;
        }
        uVar4 = FUN_1420392d0(local_1e8,local_e0,L"backpackAmount");
        FUN_142ede260(param_1 + 0x3f0,uVar4);
        if (local_d8 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_d8 + 1;
          lVar3 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_d8)(local_d8);
            LOCK();
            piVar1 = (int *)((longlong)local_d8 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*local_d8 + 8))(local_d8,1);
            }
          }
        }
        uVar4 = FUN_1420392d0(local_1e8,local_d0,L"backpackTotal");
        FUN_142ede260(param_1 + 0x408,uVar4);
        if (local_c8 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_c8 + 1;
          lVar3 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_c8)(local_c8);
            LOCK();
            piVar1 = (int *)((longlong)local_c8 + 0xc);
            iVar9 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*local_c8 + 8))(local_c8,1);
            }
          }
        }
      }
      if (local_1e0 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_1e0 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_1e0)(local_1e0);
          LOCK();
          piVar1 = (int *)((longlong)local_1e0 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_1e0 + 8))(local_1e0,1);
          }
        }
      }
      FUN_14208d370(*plVar8,param_1 + 0x420,L"playerHead");
      local_238 = 0;
      local_230 = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,0);
      FGenericPlatformString::Memcpy(local_238,L"vendingShield",0x1c);
      local_248 = (longlong *)0x0;
      local_240 = 0;
      FUN_140f16560(*plVar8,param_1 + 0x430,&local_238,0,6,&local_248);
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
      local_218 = 0;
      local_210 = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_218,0);
      FGenericPlatformString::Memcpy(local_218,L"vendingHealth",0x1c);
      local_228 = (longlong *)0x0;
      local_220 = 0;
      FUN_140f16560(*plVar8,param_1 + 0x438,&local_218,0,6,&local_228);
      plVar6 = local_228;
      for (iVar9 = (int)local_220; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 2;
      }
      if (local_228 != (longlong *)0x0) {
        FMemory::Free(local_228);
      }
      if (local_218 != 0) {
        FMemory::Free();
      }
      FUN_14208d370(*plVar8,param_1 + 0x440,L"weaponIcon");
      uVar4 = FUN_142085870(*plVar8,local_c0,L"currentAmmo");
      FUN_142ede260(param_1 + 0x450,uVar4);
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_b8 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar1 = (int *)((longlong)local_b8 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_b8 + 8))(local_b8,1);
          }
        }
      }
      uVar4 = FUN_142085870(*plVar8,local_b0,L"totalAmmo");
      FUN_142ede260(param_1 + 0x468,uVar4);
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_a8 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar1 = (int *)((longlong)local_a8 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_a8 + 8))(local_a8,1);
          }
        }
      }
      local_1f8 = 0;
      local_1f0 = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f8,0);
      FGenericPlatformString::Memcpy(local_1f8,L"currency",0x12);
      local_208 = (longlong *)0x0;
      local_200 = 0;
      local_198 = 0;
      FUN_140f57f20(*plVar8,param_1 + 0x480,&local_1f8,0,6,&local_208);
      plVar8 = local_208;
      for (iVar9 = (int)local_200; iVar9 != 0; iVar9 = iVar9 + -1) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
      }
      if (local_208 != (longlong *)0x0) {
        FMemory::Free(local_208);
      }
      if (local_1f8 != 0) {
        FMemory::Free();
      }
    }
    FUN_142085870(*plVar2,&local_2a8,L"ammoFullClip");
    plVar2 = local_2a0;
    if (local_2a8 != 0) {
      *(longlong *)(param_1 + 0x2d8) = local_2a8;
      plVar8 = *(longlong **)(param_1 + 0x2e0);
      if (local_2a0 != plVar8) {
        if (local_2a0 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_2a0 + 0xc) = *(int *)((longlong)local_2a0 + 0xc) + 1;
          UNLOCK();
          plVar8 = *(longlong **)(param_1 + 0x2e0);
        }
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
        *(longlong **)(param_1 + 0x2e0) = plVar2;
      }
      uVar4 = FUN_1420392d0(local_2a8,local_a0,L"innerText");
      FUN_142ede260(param_1 + 0x2e8,uVar4);
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_98 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar1 = (int *)((longlong)local_98 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_98 + 8))(local_98,1);
          }
        }
      }
      if ((*(longlong *)(param_1 + 0x2f0) != 0) && (*(longlong *)(param_1 + 0x2f8) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x2f8) + 8);
        LOCK();
        iVar9 = *piVar1;
        if (iVar9 == 0) {
          *piVar1 = 0;
          iVar9 = 0;
        }
        UNLOCK();
        if (0 < iVar9) {
          UMistDebugEntityScreen::InspectEntity(param_1 + 0x2e8,param_1 + 0x1b8,1,0);
        }
      }
      uVar4 = FUN_1420392d0(local_2a8,local_90,L"innerTextShadow");
      FUN_142ede260(param_1 + 0x300,uVar4);
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_88 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar1 = (int *)((longlong)local_88 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_88 + 8))(local_88,1);
          }
        }
      }
      if ((*(longlong *)(param_1 + 0x308) != 0) && (*(longlong *)(param_1 + 0x310) != 0)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0x310) + 8);
        LOCK();
        iVar9 = *piVar1;
        if (iVar9 == 0) {
          *piVar1 = 0;
          iVar9 = 0;
        }
        UNLOCK();
        if (0 < iVar9) {
          UMistDebugEntityScreen::InspectEntity(param_1 + 0x300,param_1 + 0x1b8,1,0);
        }
      }
      puVar5 = (undefined8 *)FUN_1420392d0(local_2a8,local_80,L"weaponIcon");
      *(undefined8 *)(param_1 + 0x318) = *puVar5;
      plVar2 = (longlong *)puVar5[1];
      plVar8 = *(longlong **)(param_1 + 800);
      if (plVar2 != plVar8) {
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
          UNLOCK();
          plVar8 = *(longlong **)(param_1 + 800);
        }
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
        *(longlong **)(param_1 + 800) = plVar2;
      }
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_78 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
      uVar4 = FUN_1420392d0(local_2a8,local_70,L"totalAmmo");
      FUN_142ede260(param_1 + 0x328,uVar4);
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_68 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar1 = (int *)((longlong)local_68 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_68 + 8))(local_68,1);
          }
        }
      }
      uVar4 = FUN_1420392d0(local_2a8,local_60,L"currentAmmo");
      FUN_142ede260(param_1 + 0x340,uVar4);
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_58 + 1;
        lVar3 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar1 = (int *)((longlong)local_58 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*local_58 + 8))(local_58,1);
          }
        }
      }
    }
    if (local_2a0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_2a0 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_2a0)(local_2a0);
        LOCK();
        piVar1 = (int *)((longlong)local_2a0 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_2a0 + 8))(local_2a0,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 141093800 FUN_141093800 body=1955 status=ok
// SIG undefined FUN_141093800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141093800(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_b8 [32];
  longlong **local_98;
  longlong **local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  FUN_142ec45d0();
  local_80 = 8;
  local_88 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  FGenericPlatformString::Memcpy(local_88,L"iodCard",0x10);
  local_90 = &local_78;
  local_78 = (longlong *)0x0;
  local_98 = (longlong **)CONCAT71(local_98._1_7_,6);
  local_70 = 0;
  FUN_140ecf270(param_1,param_1 + 0x1f7,&local_88,0);
  plVar5 = local_78;
  for (iVar7 = (int)local_70; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_98 = &local_88;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  lVar4 = FUN_140e96f30(param_1,param_1 + 0x1d3,0,6);
  param_1[0x1fa] = lVar4;
  plVar5 = local_88;
  for (iVar7 = (int)local_80; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  if (param_1[0x1fa] != 0) {
    local_78 = (longlong *)0x0;
    local_70 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"rarityText",0x16);
    local_90 = &local_88;
    local_98 = (longlong **)CONCAT71(local_98._1_7_,6);
    local_88 = (longlong *)0x0;
    local_80 = 0;
    FUN_140e99270(param_1[0x1fa],param_1 + 0x1fb,&local_78,0);
    plVar5 = local_88;
    for (iVar7 = (int)local_80; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free(local_88);
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  local_98 = &local_88;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  lVar4 = FUN_140e96f30(param_1,param_1 + 0x1df,0,6);
  param_1[0x1fc] = lVar4;
  plVar5 = local_88;
  for (iVar7 = (int)local_80; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  local_98 = &local_88;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  lVar4 = FUN_140ac4770(param_1,param_1 + 0x1d5,0,6);
  param_1[0x1fe] = lVar4;
  plVar5 = local_88;
  for (iVar7 = (int)local_80; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  local_98 = &local_88;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  lVar4 = FUN_140ac4770(param_1,param_1 + 0x1d7,0,6);
  param_1[0x1ff] = lVar4;
  plVar5 = local_88;
  for (iVar7 = (int)local_80; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  local_98 = &local_88;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  lVar4 = FUN_140e96f30(param_1,param_1 + 0x1e3,0,6);
  param_1[0x1f9] = lVar4;
  plVar5 = local_88;
  for (iVar7 = (int)local_80; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  local_98 = &local_88;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  lVar4 = FUN_140e96f30(param_1,param_1 + 0x1e5,0,6);
  param_1[0x1fd] = lVar4;
  plVar5 = local_88;
  for (iVar7 = (int)local_80; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  local_98 = &local_88;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  lVar4 = FUN_140e96f30(param_1,param_1 + 0x1e7,0,6);
  param_1[0x205] = lVar4;
  plVar5 = local_88;
  for (iVar7 = (int)local_80; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  local_98 = &local_88;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  lVar4 = FUN_140e96f30(param_1,param_1 + 0x1e9,0,6);
  param_1[0x1f8] = lVar4;
  plVar5 = local_88;
  for (iVar7 = (int)local_80; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  local_98 = &local_88;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  lVar4 = FUN_140e96f30(param_1,param_1 + 0x1eb,0,6);
  param_1[0x202] = lVar4;
  plVar5 = local_88;
  for (iVar7 = (int)local_80; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  local_98 = &local_88;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  lVar4 = FUN_140e96f30(param_1,param_1 + 0x1ed,0,6);
  param_1[0x206] = lVar4;
  plVar5 = local_88;
  for (iVar7 = (int)local_80; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  local_98 = &local_88;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  lVar4 = FUN_140e96f30(param_1,param_1 + 0x1ef,0,6);
  param_1[0x207] = lVar4;
  plVar5 = local_88;
  for (iVar7 = (int)local_80; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  local_98 = &local_88;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  lVar4 = FUN_140e96f30(param_1,param_1 + 0x1f1,0,6);
  param_1[0x208] = lVar4;
  plVar5 = local_88;
  for (iVar7 = (int)local_80; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  local_78 = (longlong *)0x0;
  local_70 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Memcpy(local_78,L"soldOutText",0x18);
  local_90 = &local_88;
  local_88 = (longlong *)0x0;
  local_98 = (longlong **)CONCAT71(local_98._1_7_,6);
  local_80 = 0;
  FUN_140ecf4e0(param_1,param_1 + 0x209,&local_78,0);
  plVar5 = local_88;
  for (iVar7 = (int)local_80; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (param_1[0x1f7] != 0) {
    plVar5 = (longlong *)FUN_142086190(param_1[0x1f7],local_68);
    lVar4 = plVar5[1];
    param_1[0x19c] = *plVar5;
    param_1[0x19d] = lVar4;
    lVar4 = plVar5[3];
    param_1[0x19e] = plVar5[2];
    param_1[0x19f] = lVar4;
    uVar1 = *(undefined4 *)((longlong)plVar5 + 0x24);
    lVar4 = plVar5[5];
    uVar2 = *(undefined4 *)((longlong)plVar5 + 0x2c);
    *(int *)(param_1 + 0x1a0) = (int)plVar5[4];
    *(undefined4 *)((longlong)param_1 + 0xd04) = uVar1;
    *(int *)(param_1 + 0x1a1) = (int)lVar4;
    *(undefined4 *)((longlong)param_1 + 0xd0c) = uVar2;
  }
  lVar4 = FWeakObjectPtr::Get(param_1 + 0xbb);
  if (lVar4 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_141093f44;
  }
  lVar4 = 0;
LAB_141093f44:
  plVar5 = (longlong *)param_1[0x209];
  param_1[0x199] = lVar4;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x2b0))(plVar5,param_1 + 500,1,0);
  }
  (**(code **)(*param_1 + 0x5d0))(param_1,0);
  return;
}



// FUNCTION 141093fb0 FUN_141093fb0 body=199 status=ok
// SIG undefined FUN_141093fb0(void)

void FUN_141093fb0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142efba20();
  lVar3 = *(longlong *)(param_1 + 0x2c0);
  if (lVar3 != 0) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_141094006;
  }
  lVar3 = 0;
LAB_141094006:
  *(longlong *)(param_1 + 0x2e0) = lVar3;
  lVar3 = *(longlong *)(param_1 + 0x2c8);
  if (lVar3 != 0) {
    lVar2 = FUN_14142a560();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(longlong *)(param_1 + 0x2e8) = lVar3;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  return;
}



// FUNCTION 141094080 FUN_141094080 body=804 status=ok
// SIG undefined FUN_141094080(void)

void FUN_141094080(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char *pcVar6;
  byte bVar7;
  int iVar8;
  char *pcVar9;
  undefined1 uVar10;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  FUN_14108de20();
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x360);
  if (lVar3 != 0) {
    lVar4 = UMovieScene3DTransformSection::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (cVar2 = FUN_141107950(lVar3), cVar2 != '\0')) {
      bVar7 = 1;
      uVar10 = 0;
      goto LAB_141094107;
    }
  }
  bVar7 = 0;
  uVar10 = 1;
LAB_141094107:
  plVar5 = (longlong *)(param_1 + 0x370);
  iVar8 = 0;
  *(undefined4 *)(param_1 + 0x378) = 0;
  if (*(int *)(param_1 + 0x37c) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar5,0);
    iVar8 = *(int *)(param_1 + 0x378);
  }
  *(int *)(param_1 + 0x378) = iVar8 + 1;
  if (*(int *)(param_1 + 0x37c) < iVar8 + 1) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar5,iVar8);
  }
  *(undefined1 *)((longlong)iVar8 + *plVar5) = 1;
  iVar8 = *(int *)(param_1 + 0x378);
  *(int *)(param_1 + 0x378) = iVar8 + 1;
  if (*(int *)(param_1 + 0x37c) < iVar8 + 1) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar5,iVar8);
  }
  *(undefined1 *)((longlong)iVar8 + *plVar5) = 2;
  pcVar6 = (char *)*plVar5;
  pcVar9 = pcVar6 + *(int *)(param_1 + 0x378);
  do {
    if (pcVar6 == pcVar9) {
      return;
    }
    if (*pcVar6 == '\x01') {
      local_38 = 0;
      local_30 = 0xf;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      FGenericPlatformString::Memcpy(local_38,L"sharedModeLoot",0x1e);
      plVar5 = (longlong *)FUN_141368f90();
      if ((plVar5[0x1f] == 0) && ((**(code **)(*plVar5 + 0x368))(plVar5), plVar5[0x1f] == 0)) {
        lVar3 = FUN_1404b03b0();
      }
      else {
        plVar5 = (longlong *)FUN_141368f90();
        lVar3 = plVar5[0x1f];
        if (lVar3 == 0) {
          (**(code **)(*plVar5 + 0x368))(plVar5);
          lVar3 = plVar5[0x1f];
        }
        lVar3 = lVar3 + 0xd0;
      }
      local_48 = 0;
      local_40 = 0x14;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      FGenericPlatformString::Memcpy(local_48,L"BTN_LootModeSetting",0x28);
      FUN_14107b910(param_1,&local_48,lVar3,&local_38,uVar10);
      lVar3 = local_38;
      if (local_48 != 0) {
        FMemory::Free();
        lVar3 = local_38;
      }
LAB_141094370:
      if (lVar3 != 0) {
        FMemory::Free();
      }
    }
    else if (*pcVar6 == '\x02') {
      local_58 = 0;
      local_50 = 0x10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      FGenericPlatformString::Memcpy(local_58,L"classicModeLoot",0x20);
      plVar5 = (longlong *)FUN_141368f90();
      if ((plVar5[0x1f] == 0) && ((**(code **)(*plVar5 + 0x368))(plVar5), plVar5[0x1f] == 0)) {
        lVar3 = FUN_1404b03b0();
      }
      else {
        plVar5 = (longlong *)FUN_141368f90();
        lVar3 = plVar5[0x1f];
        if (lVar3 == 0) {
          (**(code **)(*plVar5 + 0x368))(plVar5);
          lVar3 = plVar5[0x1f];
        }
        lVar3 = lVar3 + 0xb8;
      }
      local_68 = 0;
      local_60 = 0x14;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      FGenericPlatformString::Memcpy(local_68,L"BTN_LootModeSetting",0x28);
      FUN_14107b910(param_1,&local_68,lVar3,&local_58,bVar7 ^ 1);
      lVar3 = local_58;
      if (local_68 != 0) {
        FMemory::Free();
        lVar3 = local_58;
      }
      goto LAB_141094370;
    }
    pcVar6 = pcVar6 + 1;
  } while( true );
}



// FUNCTION 1410943b0 FUN_1410943b0 body=1534 status=ok
// SIG undefined FUN_1410943b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410943b0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  undefined2 local_res8;
  longlong local_38 [4];
  
  FUN_14108de20();
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x360);
  local_res8 = 0;
  if ((lVar3 != 0) && (lVar3 = FUN_140f9aee0(lVar3), lVar3 != 0)) {
    puVar4 = (undefined2 *)FUN_140a5dc70(lVar3);
    local_res8 = *puVar4;
  }
  plVar1 = (longlong *)(param_1 + 0x370);
  *(undefined2 *)(param_1 + 0x36c) = local_res8;
  *(undefined4 *)(param_1 + 0x378) = 0;
  if (*(int *)(param_1 + 0x37c) != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  local_38[2] = 0;
  local_38[3] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],L"friendsOnly",0x18);
  plVar5 = (longlong *)FUN_141368f90();
  if ((plVar5[0x1f] == 0) && ((**(code **)(*plVar5 + 0x368))(plVar5), plVar5[0x1f] == 0)) {
    lVar3 = FUN_1404b03b0();
  }
  else {
    plVar5 = (longlong *)FUN_141368f90();
    lVar3 = plVar5[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      lVar3 = plVar5[0x1f];
    }
    lVar3 = lVar3 + 0x28;
  }
  local_38[0] = 0;
  local_38[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"BTN_PrivacySetting",0x26);
  FUN_14107b910(param_1,local_38,lVar3,local_38 + 2,0);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x378);
  *(int *)(param_1 + 0x378) = iVar2 + 1;
  if (*(int *)(param_1 + 0x37c) < iVar2 + 1) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined2 *)(*plVar1 + (longlong)iVar2 * 2) = _DAT_146297e38;
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  local_38[0] = 0;
  local_38[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"inviteOnly",0x16);
  plVar5 = (longlong *)FUN_141368f90();
  if ((plVar5[0x1f] == 0) && ((**(code **)(*plVar5 + 0x368))(plVar5), plVar5[0x1f] == 0)) {
    lVar3 = FUN_1404b03b0();
  }
  else {
    plVar5 = (longlong *)FUN_141368f90();
    lVar3 = plVar5[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      lVar3 = plVar5[0x1f];
    }
    lVar3 = lVar3 + 0x40;
  }
  local_38[2] = 0;
  local_38[3] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],L"BTN_PrivacySetting",0x26);
  FUN_14107b910(param_1,local_38 + 2,lVar3,local_38,0);
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x378);
  *(int *)(param_1 + 0x378) = iVar2 + 1;
  if (*(int *)(param_1 + 0x37c) < iVar2 + 1) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined2 *)(*plVar1 + (longlong)iVar2 * 2) = DAT_146297e3c;
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[0] = 0;
  local_38[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"anyone",0xe);
  plVar5 = (longlong *)FUN_141368f90();
  if ((plVar5[0x1f] == 0) && ((**(code **)(*plVar5 + 0x368))(plVar5), plVar5[0x1f] == 0)) {
    lVar3 = FUN_1404b03b0();
  }
  else {
    plVar5 = (longlong *)FUN_141368f90();
    lVar3 = plVar5[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      lVar3 = plVar5[0x1f];
    }
    lVar3 = lVar3 + 0x58;
  }
  local_38[2] = 0;
  local_38[3] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],L"BTN_PrivacySetting",0x26);
  FUN_14107b910(param_1,local_38 + 2,lVar3,local_38,0);
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x378);
  *(int *)(param_1 + 0x378) = iVar2 + 1;
  if (*(int *)(param_1 + 0x37c) < iVar2 + 1) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined2 *)(*plVar1 + (longlong)iVar2 * 2) = DAT_146297e34;
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[0] = 0;
  local_38[1] = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],&DAT_1446863b8,8);
  plVar5 = (longlong *)FUN_141368f90();
  if ((plVar5[0x1f] == 0) && ((**(code **)(*plVar5 + 0x368))(plVar5), plVar5[0x1f] == 0)) {
    lVar3 = FUN_1404b03b0();
  }
  else {
    plVar5 = (longlong *)FUN_141368f90();
    lVar3 = plVar5[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      lVar3 = plVar5[0x1f];
    }
    lVar3 = lVar3 + 0x70;
  }
  local_38[2] = 0;
  local_38[3] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],L"BTN_PrivacySetting",0x26);
  FUN_14107b910(param_1,local_38 + 2,lVar3,local_38,0);
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x378);
  *(int *)(param_1 + 0x378) = iVar2 + 1;
  if (*(int *)(param_1 + 0x37c) < iVar2 + 1) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined2 *)(*plVar1 + (longlong)iVar2 * 2) = DAT_146297e30;
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[0] = 0;
  local_38[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"offline",0x10);
  plVar5 = (longlong *)FUN_141368f90();
  if ((plVar5[0x1f] == 0) && ((**(code **)(*plVar5 + 0x368))(plVar5), plVar5[0x1f] == 0)) {
    lVar3 = FUN_1404b03b0();
  }
  else {
    plVar5 = (longlong *)FUN_141368f90();
    lVar3 = plVar5[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      lVar3 = plVar5[0x1f];
    }
    lVar3 = lVar3 + 0x88;
  }
  local_38[2] = 0;
  local_38[3] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],L"BTN_PrivacySetting",0x26);
  FUN_14107b910(param_1,local_38 + 2,lVar3,local_38,0);
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x378);
  *(int *)(param_1 + 0x378) = iVar2 + 1;
  if (*(int *)(param_1 + 0x37c) < iVar2 + 1) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(undefined2 *)(*plVar1 + (longlong)iVar2 * 2) = DAT_14686a12c;
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410949b0 FUN_1410949b0 body=688 status=ok
// SIG undefined FUN_1410949b0(void)

undefined8 FUN_1410949b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  undefined8 local_res8;
  undefined8 local_28;
  undefined8 local_20;
  
  plVar1 = (longlong *)(param_1 + -0x4d8);
  if ((*(char *)(param_1 + 0x1bc) == '\0') && (*(char *)(param_1 + 0x1bd) == '\0')) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (!bVar3) {
    return 1;
  }
  cVar4 = *(char *)((longlong)param_2 + 0xc);
  if ((cVar4 == '\0') && (DAT_146874530 == *param_2)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
LAB_141094a9f:
    pwVar9 = L"StatusMenu_Nav_Click";
  }
  else {
    if ((cVar4 == '\0') && (DAT_146874538 == *param_2)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) goto LAB_141094a9f;
    if ((cVar4 == '\0') && (DAT_146874540 == *param_2)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) goto LAB_141094a9f;
    if ((cVar4 == '\0') && (DAT_146874548 == *param_2)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) goto LAB_141094a9f;
    if ((cVar4 == '\0') && (DAT_1468745b8 == *param_2)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) {
      if ((cVar4 == '\0') && (DAT_1468745c0 == *param_2)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (!bVar3) goto LAB_141094ad4;
    }
    pwVar9 = L"StatusMenu_Tab_Slide";
  }
  lVar6 = *plVar1;
  local_28 = 0;
  local_20 = 0;
  puVar5 = (undefined8 *)FName::FName(&local_res8,pwVar9,1);
  (**(code **)(lVar6 + 0x4e8))(plVar1,*puVar5,&local_28);
LAB_141094ad4:
  cVar4 = *(char *)((longlong)param_2 + 0xc);
  if ((cVar4 == '\0') && (DAT_146b3e2b8 == *param_2)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    *(undefined1 *)(param_1 + 0x1c4) = 5;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    local_res8 = 0;
    (**(code **)(*plVar1 + 0x578))(plVar1,5);
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x1a8);
    if (lVar6 != 0) {
      lVar7 = AUGBossFlyingAIController::GetPrivateStaticClass();
      iVar2 = *(int *)(lVar7 + 0x90);
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < iVar2) ||
         (*(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)iVar2 * 8) !=
          lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_1413a4350(lVar6,CONCAT71((int7)(int3)((uint)iVar2 >> 8),5));
        return 1;
      }
    }
    FUN_142ebe4a0(plVar1);
  }
  else {
    if ((cVar4 == '\0') && (DAT_1468745b8 == *param_2)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      uVar8 = 2;
    }
    else {
      if ((cVar4 == '\0') && (DAT_1468745c0 == *param_2)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (!bVar3) {
        if (*(char *)(param_1 + 0x1b8) != '\0') {
          if ((cVar4 == '\0') && (DAT_146874720 == *param_2)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if (bVar3) {
            lVar6 = FUN_140e97290(plVar1);
            if (lVar6 == 0) {
              return 1;
            }
            if (*(longlong *)(lVar6 + 0x3b8) == 0) {
              return 1;
            }
            FUN_142ebe540(plVar1);
            *(undefined1 *)(param_1 + 0x1bb) = 1;
            return 1;
          }
        }
        lVar6 = FUN_141083c60(plVar1);
        if ((lVar6 != 0) && (cVar4 = FUN_1412c3d60(lVar6,param_2), cVar4 != '\0')) {
          return 1;
        }
        uVar8 = FUN_142ec6030(param_1,param_2);
        return uVar8;
      }
      uVar8 = 3;
    }
    local_res8 = 0;
    FUN_1410a8f10(plVar1,uVar8,&local_res8);
  }
  return 1;
}



// FUNCTION 141094c60 FUN_141094c60 body=2403 status=ok
// SIG undefined FUN_141094c60(void)

/* WARNING: Removing unreachable block (ram,0x000141094e17) */

char FUN_141094c60(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148 [272];
  
  cVar4 = '\0';
  LOCK();
  bVar12 = *(int *)(param_1 + 0x18c) == 0;
  if (bVar12) {
    *(int *)(param_1 + 0x18c) = 0;
  }
  UNLOCK();
  if (bVar12) {
    if ((*(char *)((longlong)param_2 + 0xc) == '\x02') && (DAT_1468745d8 == *param_2)) {
      bVar12 = true;
    }
    else {
      bVar12 = false;
    }
    if (!bVar12) {
      if ((*(char *)((longlong)param_2 + 0xc) == '\x02') && (DAT_1468745e0 == *param_2)) {
        bVar12 = true;
      }
      else {
        bVar12 = false;
      }
      if (!bVar12) goto LAB_141094ccf;
    }
    bVar12 = true;
  }
  else {
LAB_141094ccf:
    bVar12 = false;
  }
  if (*(longlong *)(param_1 + 0x688) != 0) {
    FUN_140e4c930();
  }
  cVar3 = *(char *)((longlong)param_2 + 0xc);
  if ((cVar3 == '\0') && (DAT_1468745b8 == *param_2)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    if ((*(longlong *)(param_1 + 0x680) == 0) ||
       (*(char *)(*(longlong *)(param_1 + 0x680) + 0x670) != '\x03')) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (((bVar12) || (*(char *)(param_1 + 0x648) == '\x03')) ||
       (cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x628), cVar3 != '\0')) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) {
      FUN_14107dee0(param_1 + -0x4d8,1);
      cVar4 = '\x01';
    }
  }
  else {
    if ((cVar3 == '\0') && (DAT_1468745c0 == *param_2)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      if ((*(longlong *)(param_1 + 0x680) == 0) ||
         (*(char *)(*(longlong *)(param_1 + 0x680) + 0x670) != '\x03')) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if (((bVar12) || (*(char *)(param_1 + 0x648) == '\x03')) ||
         (cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x628), cVar3 != '\0')) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      if (bVar12) {
        FUN_14107dee0(param_1 + -0x4d8,0);
        cVar4 = '\x01';
      }
    }
    else {
      if ((cVar3 == '\0') && (DAT_1468745c8 == *param_2)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (bVar2) {
        if (*(char *)(param_1 + 0x501) == '\0') {
          iVar5 = *(int *)(param_1 + 0x64c) + 1;
          *(int *)(param_1 + 0x64c) = iVar5;
          if ((iVar5 < 0) || (*(int *)(param_1 + 0x658) <= iVar5)) {
            iVar5 = 0;
          }
LAB_141094e63:
          *(int *)(param_1 + 0x64c) = iVar5;
LAB_141094e69:
          if (*(char *)(param_1 + 0x648) == '\x01') {
            FUN_14107e160(param_1 + -0x4d8);
          }
          FUN_1410a22a0(param_1 + -0x4d8);
        }
      }
      else {
        if ((cVar3 == '\0') && (DAT_1468745d0 == *param_2)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (!bVar2) {
          if ((cVar3 == '\0') && (DAT_146874730 == *param_2)) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (bVar2) {
            plVar1 = (longlong *)(param_1 + -0x4d8);
            plVar6 = (longlong *)FUN_141083150(plVar1);
            if (plVar6 != (longlong *)0x0) {
              if (*(longlong *)(param_1 + 0x368) != 0) {
                uVar7 = FUN_14301f8f0();
                lVar11 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar7);
                if ((lVar11 != 0) && (*(longlong *)(param_1 + 0x530) != 0)) {
                  lVar10 = *plVar1;
                  local_188 = 0;
                  local_180 = 0;
                  puVar8 = (undefined8 *)FName::FName(local_res8,L"Vending_Item_Inspect",1);
                  (**(code **)(lVar10 + 0x4e8))(plVar1,*puVar8,&local_188);
                  lVar11 = *(longlong *)(lVar11 + 0x208);
                  lVar10 = FUN_142ebe540(plVar1,*(undefined8 *)(param_1 + 0x368));
                  if (lVar10 != 0) {
                    lVar9 = FUN_141358f70();
                    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                         (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                      bVar12 = false;
                    }
                    else {
                      bVar12 = true;
                    }
                    if ((bVar12) && (lVar11 != 0)) {
                      FUN_142ed56a0(lVar10,*(undefined8 *)(param_1 + 0x530));
                      FUN_140f8dd50(lVar10,plVar6,*(undefined8 *)(lVar11 + 0x1d8));
                      cVar4 = '\x01';
                      goto LAB_141095394;
                    }
                  }
                }
              }
LAB_141095098:
              cVar4 = '\x01';
            }
          }
          else {
            if ((cVar3 == '\0') && (DAT_146874590 == *param_2)) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            if (bVar2) {
              lVar11 = param_1 + -0x4d8;
              if (*(char *)(param_1 + 0x648) == '\x01') {
                cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x630);
                if (cVar4 == '\0') {
                  lVar10 = FUN_140ee69c0(param_1 + 0x700,local_148);
                  lVar10 = FWeakObjectPtr::Get(lVar10 + 0xdc);
                  FUN_140e9c360(local_148);
                  if (lVar10 != 0) {
                    FUN_1410a4860(lVar11);
                    FUN_141081340(lVar11);
                    if ((*(char *)(param_1 + 0x648) - 1U & 0xfd) == 0) {
                      FUN_140f0b090(param_1 + 0x700,0xffffffff,0);
                    }
                    LOCK();
                    *(undefined4 *)(param_1 + 0x4f4) = 1;
                    UNLOCK();
                    LOCK();
                    *(undefined4 *)(param_1 + 0xb0) = 1;
                    UNLOCK();
                  }
                }
                goto LAB_141095098;
              }
              lVar10 = FUN_141083150(lVar11);
              if ((lVar10 != 0) && (cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x628), cVar3 == '\0')
                 ) {
                FUN_14107c110(lVar11);
                cVar4 = '\x01';
              }
            }
            else {
              if ((cVar3 == '\0') && (DAT_146874728 == *param_2)) {
                bVar2 = true;
              }
              else {
                bVar2 = false;
              }
              if (bVar2) {
                lVar11 = *(longlong *)(param_1 + 0x870);
                lVar10 = FUN_142eb65a0(param_1 + -0x4d8);
                if ((lVar10 == lVar11) && (lVar11 = FUN_1410822f0(param_1 + -0x4d8), lVar11 != 0)) {
                  FUN_140f0dd70(param_1 + 0x700,lVar11,*(undefined8 *)(param_1 + 0x540));
                  local_178 = 0;
                  local_170 = 0;
                  (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x4e8))
                            (param_1 + -0x4d8,DAT_146874990,&local_178);
                  FUN_140ebb9a0(param_1 + 0x3a0);
                  cVar4 = '\x01';
                  goto LAB_14109537d;
                }
              }
              else {
                if ((cVar3 == '\0') && (DAT_146874738 == *param_2)) {
                  bVar2 = true;
                }
                else {
                  bVar2 = false;
                }
                if (bVar2) {
                  cVar3 = FUN_141084de0(param_1 + -0x4d8);
                  if (cVar3 != '\0') {
                    if ((*(longlong *)(param_1 + 0x680) == 0) ||
                       (*(char *)(*(longlong *)(param_1 + 0x680) + 0x670) != '\x03')) {
                      bVar12 = false;
                    }
                    else {
                      bVar12 = true;
                    }
                    if ((!bVar12) && (*(longlong *)(param_1 + 0x688) != 0)) {
                      *(undefined1 *)(param_1 + 0x51d) = 1;
                      FUN_140e61530();
                      FUN_14109ebc0(param_1 + -0x4d8);
                      FUN_14109ec00(param_1 + -0x4d8);
                      local_198 = 0;
                      local_190 = 9;
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
                      FGenericPlatformString::Memcpy(local_198,L"soldClip",0x12);
                      FUN_14109ef80(param_1 + -0x4d8,&local_198);
                      cVar4 = '\x01';
                      goto LAB_14109537d;
                    }
                  }
                }
                else {
                  if ((cVar3 == '\0') && (DAT_146b3e2b8 == *param_2)) {
                    bVar2 = true;
                  }
                  else {
                    bVar2 = false;
                  }
                  if ((bVar2) || (bVar12)) {
                    cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x630);
                    if (cVar3 == '\0') {
                      if (*(char *)(param_1 + 0x648) == '\x03') {
                        plVar1 = (longlong *)(param_1 + -0x4d8);
                        local_158 = 0;
                        lVar11 = *plVar1;
                        local_150 = 0;
                        puVar8 = (undefined8 *)FName::FName(local_res18,"Cancel",1);
                        (**(code **)(lVar11 + 0x4e8))(plVar1,*puVar8,&local_158);
                        FUN_1410806f0(plVar1);
                        cVar4 = '\x01';
                      }
                      else if (!bVar12) {
                        FUN_141085040(param_1 + -0x4d8);
                        goto LAB_14109537d;
                      }
                    }
                    else {
                      local_168 = 0;
                      plVar1 = (longlong *)(param_1 + -0x4d8);
                      lVar11 = *plVar1;
                      local_160 = 0;
                      puVar8 = (undefined8 *)FName::FName(local_res10,"Cancel",1);
                      (**(code **)(lVar11 + 0x4e8))(plVar1,*puVar8,&local_168);
                      cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x630);
                      if (cVar4 == '\0') {
                        iVar5 = -1;
                      }
                      else {
                        lVar11 = FWeakObjectPtr::Get(param_1 + 0x630);
                        iVar5 = *(int *)(lVar11 + 0x2d8);
                      }
                      FUN_14107e160(plVar1);
                      if (iVar5 != -1) {
                        FUN_140f0b090(param_1 + 0x700,iVar5,0,0);
                      }
                      cVar4 = '\x01';
LAB_14109537d:
                      LOCK();
                      *(undefined4 *)(param_1 + 0xb0) = 1;
                      UNLOCK();
                    }
                  }
                }
              }
            }
          }
          goto LAB_141095394;
        }
        if (*(char *)(param_1 + 0x501) == '\0') {
          iVar5 = *(int *)(param_1 + 0x64c) + -1;
          *(int *)(param_1 + 0x64c) = iVar5;
          if (iVar5 < 0) {
            iVar5 = *(int *)(param_1 + 0x658) + -1;
            goto LAB_141094e63;
          }
          goto LAB_141094e69;
        }
      }
      cVar4 = '\x01';
    }
  }
LAB_141095394:
  if ((*(longlong *)(param_1 + 0xd0) == 0) ||
     (cVar3 = FUN_142ef0210(*(longlong *)(param_1 + 0xd0),param_2), cVar3 == '\0')) {
    if (cVar4 != '\0') goto LAB_1410955a0;
    if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146874548 == *param_2)) {
      bVar12 = true;
    }
    else {
      bVar12 = false;
    }
    if (bVar12) {
      if (*(char *)(param_1 + 0x648) == '\x03') {
LAB_1410953ee:
        bVar12 = true;
      }
      else {
        cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x630);
        bVar12 = false;
        if (cVar4 != '\0') goto LAB_1410953ee;
      }
      if (((bVar12) || (*(char *)(param_1 + 0x6a0) == '\x01')) &&
         (lVar11 = *(longlong *)(param_1 + 0x870), lVar10 = FUN_142eb65a0(param_1 + -0x4d8),
         lVar10 != lVar11)) {
        FUN_1410811d0(param_1 + -0x4d8,0xffffffff);
        FUN_142ebe410(param_1 + -0x4d8);
        goto LAB_14109559d;
      }
    }
    if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146874540 == *param_2)) {
      bVar12 = true;
    }
    else {
      bVar12 = false;
    }
    if (bVar12) {
      if (*(char *)(param_1 + 0x648) == '\x03') {
LAB_14109546d:
        bVar12 = true;
      }
      else {
        cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x630);
        bVar12 = false;
        if (cVar4 != '\0') goto LAB_14109546d;
      }
      if ((bVar12) &&
         (lVar11 = FUN_142eb65a0(param_1 + -0x4d8), lVar11 != *(longlong *)(param_1 + 0x698))) {
        FUN_141081340(param_1 + -0x4d8);
        FUN_142ebe410(param_1 + -0x4d8);
        goto LAB_14109559d;
      }
    }
    if (*(longlong *)(param_1 + 0x678) == 0) {
      return '\0';
    }
    cVar4 = FUN_142ec6030(param_1,param_2);
    if (cVar4 != '\0') goto LAB_1410955a0;
    if ((*(char *)(param_1 + 0x648) == '\x03') || (cVar4 = FWeakObjectPtr::IsValid(), cVar4 != '\0')
       ) {
      bVar12 = true;
    }
    else {
      bVar12 = false;
    }
    if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146874540 == *param_2)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      if (!bVar12) {
        return '\0';
      }
      lVar11 = FUN_142eb65a0(param_1 + -0x4d8);
      if (lVar11 == *(longlong *)(param_1 + 0x698)) {
        return '\0';
      }
      FUN_141081340(param_1 + -0x4d8);
      if ((*(char *)(param_1 + 0x648) - 1U & 0xfd) == 0) {
        FUN_140f0b090(param_1 + 0x700,0xffffffff,0);
      }
    }
    else {
      if ((*(char *)((longlong)param_2 + 0xc) == '\0') && (DAT_146874548 == *param_2)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (!bVar2) {
        return '\0';
      }
      if (!bVar12) {
        return '\0';
      }
      lVar11 = FUN_142eb65a0(param_1 + -0x4d8);
      if (lVar11 != *(longlong *)(param_1 + 0x698)) {
        return '\0';
      }
      FUN_1410811d0(param_1 + -0x4d8,0xffffffff);
    }
  }
LAB_14109559d:
  cVar4 = '\x01';
LAB_1410955a0:
  FUN_140eb0420(param_1 + 0x3a0,param_2);
  return cVar4;
}



// FUNCTION 1410955d0 FUN_1410955d0 body=146 status=ok
// SIG undefined FUN_1410955d0(void)

void FUN_1410955d0(longlong param_1,char param_2)

{
  longlong lVar1;
  
  if (param_2 == '\x01') {
    *(undefined1 *)(param_1 + 0x268) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x350);
  if ((lVar1 == 0) || ((*(char *)(param_1 + 0x17b) == '\0' && (*(longlong *)(lVar1 + 0x48) == 0))))
  {
    if (param_2 == '\x01') {
      if (*(char *)(param_1 + 0x3a8) != '\0') {
        FUN_1410850c0(param_1);
      }
      if ((*(longlong *)(param_1 + 0x348) != 0) &&
         (*(char *)(*(longlong *)(param_1 + 0x348) + 0x1e8) != '\0')) {
        FUN_1410a8c80();
        return;
      }
    }
  }
  else {
    if (param_2 == '\x01') {
      FUN_1410a90f0(param_1);
      return;
    }
    if (param_2 == '\x02') {
      FUN_142f0d400(lVar1,0,0);
      return;
    }
  }
  return;
}



// FUNCTION 141095670 FUN_141095670 body=404 status=ok
// SIG undefined FUN_141095670(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141095670(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0 [2];
  undefined1 local_c8 [80];
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_d0[0] = 0xffffffff;
  if (*(longlong *)(param_1 + 0x668) != 0) {
    FUN_14170c210(local_d0);
  }
  local_d4 = 0xffffffff;
  if (*(longlong *)(param_1 + 0x650) != 0) {
    FUN_14170c210(&local_d4);
  }
  local_d8 = 0xffffffff;
  uVar4 = 0xffffffff;
  if (*(longlong *)(param_1 + 0x648) != 0) {
    FUN_14170c210(&local_d8);
    uVar4 = local_d8;
  }
  uVar6 = local_d0[0];
  uVar3 = local_d4;
  local_d8 = 0xffffffff;
  local_d4 = 0xffffffff;
  local_d0[0] = 0xffffffff;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605c68;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = uVar4;
    uVar4 = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uVar3;
    uVar3 = 0xffffffff;
    *(undefined4 *)(puVar1 + 3) = uVar6;
    uVar6 = 0xffffffff;
  }
  local_78[0] = &LAB_14107d780;
  uVar2 = FUN_1420849a0(param_1,local_c8,local_78);
  FUN_14208c4f0(param_1,uVar2);
  if (local_38 != 0) {
    plVar5 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar5 = local_48;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_1416f8340(uVar6);
  FUN_1416f8340(uVar3);
  FUN_1416f8340(uVar4);
  FUN_1416f8340(local_d8);
  FUN_1416f8340(local_d4);
  FUN_1416f8340(local_d0[0]);
  return;
}



// FUNCTION 141095820 FUN_141095820 body=34 status=ok
// SIG undefined FUN_141095820(void)

void FUN_141095820(longlong param_1)

{
  TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>(param_1 + 0x9e0);
  *(undefined1 *)(param_1 + 0x9f4) = 1;
  return;
}



// FUNCTION 141095850 NewProp_SelectAllTextOnCommit_SetBit body=8 status=ok
// SIG undefined NewProp_SelectAllTextOnCommit_SetBit(void)

void Z_Construct_UClass_UEditableTextBox_Statics::NewProp_SelectAllTextOnCommit_SetBit
               (longlong param_1)

{
  *(undefined1 *)(param_1 + 0x9f4) = 1;
  return;
}



// FUNCTION 141095860 FUN_141095860 body=265 status=ok
// SIG undefined FUN_141095860(void)

void FUN_141095860(longlong param_1,int *param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  lVar1 = (longlong)*(int *)(param_1 + 0x9e8);
  if (*(int *)(param_1 + 0x9e8) != 0) {
    iVar6 = 0;
    bVar7 = **(int **)(param_1 + 0x9e0) != *param_2;
    lVar3 = 0;
    iVar4 = 0;
    do {
      lVar3 = lVar3 + 1;
      iVar5 = iVar4 + 1;
      if (lVar3 < lVar1) {
        piVar2 = (int *)(*(longlong *)(param_1 + 0x9e0) + lVar3 * 4);
        do {
          if (bVar7 != (*piVar2 != *param_2)) break;
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 1;
          piVar2 = piVar2 + 1;
        } while (lVar3 < lVar1);
      }
      if (bVar7 != false) {
        if (iVar6 != iVar4) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x9e0) + (longlong)iVar6 * 4),
                     (void *)(*(longlong *)(param_1 + 0x9e0) + (longlong)iVar4 * 4),
                     (longlong)(iVar5 - iVar4) << 2);
        }
        iVar6 = iVar6 + (iVar5 - iVar4);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar5;
    } while (lVar3 < lVar1);
    *(int *)(param_1 + 0x9e8) = iVar6;
  }
  *(undefined1 *)(param_1 + 0x9f4) = 1;
  return;
}



// FUNCTION 141095970 FUN_141095970 body=234 status=ok
// SIG undefined FUN_141095970(void)

void FUN_141095970(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = 0;
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x5d4);
  if (lVar2 != 0) {
    lVar3 = FUN_1414d9130();
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
      if ((*(longlong *)(param_1 + 0xb58) == 0) ||
         (*(char *)(*(longlong *)(param_1 + 0xb58) + 0x670) != '\x03')) {
        plVar4 = (longlong *)FUN_1411e4840(lVar2);
      }
      else {
        plVar4 = (longlong *)FUN_1411e2300(lVar2);
      }
      lVar5 = *plVar4;
    }
  }
  if (((param_3 == lVar5) && (*(longlong *)(param_1 + 0xdf8) != 0)) &&
     (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xdf8) + 0x480), lVar5 != 0)) {
    FUN_140f0abd0(lVar5,param_3,param_4,0);
  }
  FUN_1410a9b00(param_1);
  FUN_1410a0500(param_1);
  return;
}



// FUNCTION 141095a60 FUN_141095a60 body=234 status=ok
// SIG undefined FUN_141095a60(void)

undefined4 FUN_141095a60(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  if (param_2 != 0) {
    lVar3 = FUN_1413592a0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(undefined4 *)(param_2 + 0x39c) = *(undefined4 *)(param_1 + 0x824);
      if (*(longlong *)(param_2 + 0x3b8) != 0) {
        FUN_140f08510(*(longlong *)(param_2 + 0x3b8),*(undefined4 *)(param_1 + 0x824));
      }
      *(undefined1 *)(param_2 + 0x6e0) = 1;
      *(undefined1 *)(param_2 + 0x6e2) = 1;
      if (param_2 == *(longlong *)(param_1 + 0xaf8)) {
        FUN_140f8dbf0(param_2 + 0x1b0,1);
      }
      cVar2 = FUN_142ebdd70(param_1);
      if (cVar2 == '\0') {
        uVar4 = *(undefined4 *)(param_1 + 0x820);
      }
      else {
        uVar4 = *(undefined4 *)(param_1 + 0x828);
      }
      FUN_140f617b0(param_2 + 0x1b0,uVar4);
    }
  }
  LOCK();
  uVar4 = *(undefined4 *)(param_1 + 0x9c8);
  *(undefined4 *)(param_1 + 0x9c8) = 1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x9cc) = 1;
  UNLOCK();
  return uVar4;
}



// FUNCTION 141095b50 FUN_141095b50 body=108 status=ok
// SIG undefined FUN_141095b50(void)

void FUN_141095b50(longlong param_1,char param_2)

{
  longlong lVar1;
  
  if ((((param_2 == '\0') && (lVar1 = *(longlong *)(param_1 + 0x350), lVar1 != 0)) &&
      (*(char *)(param_1 + 0x17b) == '\0')) && (*(longlong *)(lVar1 + 0x48) == 0)) {
    FUN_142f0d400(lVar1,0,0);
    FUN_1410854a0(param_1);
    if (*(char *)(param_1 + 0x3a8) != '\0') {
      FUN_1410850c0(param_1,1);
    }
    if ((*(longlong *)(param_1 + 0x348) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x348) + 0x1e8) != '\0')) {
      FUN_1410a8c80();
    }
  }
  return;
}



// FUNCTION 141095be0 FUN_141095be0 body=207 status=ok
// SIG undefined FUN_141095be0(void)

void FUN_141095be0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x3b0);
  if (lVar3 != 0) {
    lVar4 = UMovieScene3DTransformSection::GetPrivateStaticClass();
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
      FUN_14110fdd0(lVar3);
    }
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x3b0);
  if (cVar2 != '\0') {
    local_18 = 0;
    uStack_10 = 0;
    uVar5 = FWeakObjectPtr::Get(param_1 + 0x3b0);
    FUN_142ed36d0(uVar5,&local_18,1);
  }
  if (*(longlong *)(param_1 + 0x350) != 0) {
    FUN_142f0d400(*(longlong *)(param_1 + 0x350),0,1);
  }
  *(undefined8 *)(param_1 + 0x3b8) = param_2;
  return;
}



// FUNCTION 141095cb0 FUN_141095cb0 body=804 status=ok
// SIG undefined FUN_141095cb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141095cb0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
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
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  lVar6 = 0;
  if (lVar3 == 0) {
LAB_141095d67:
    lVar3 = 0;
  }
  else {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_141095d67;
    lVar4 = *(longlong *)(lVar3 + 0x848);
    if (lVar4 != 0) {
      lVar5 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_141095d6d;
    }
  }
  lVar4 = lVar6;
LAB_141095d6d:
  *(longlong *)(param_1 + 0xd20) = lVar4;
  if (lVar3 != 0) {
    lVar6 = *(longlong *)(lVar3 + 0xc90);
  }
  *(longlong *)(param_1 + 0xd28) = lVar6;
  plVar1 = *(longlong **)(param_2 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    lVar6 = UFocusButtonWidget::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar7 = AEquipmentSkin::GetPrivateStaticClass();
      lVar6 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar7);
      *(longlong *)(param_1 + 0xd30) = lVar6;
      if (lVar6 == 0) {
        return;
      }
      if (*(char *)((longlong)plVar1 + 0x671) == '\0') {
        return;
      }
      FWeakObjectPtr::operator=(&local_e8,plVar1);
      lVar6 = FUN_140b28fa0(*(undefined8 *)(param_1 + 0xd30),lVar3);
      local_a8 = (longlong *)0x0;
      local_98 = 0;
      puVar8 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &PTR_FUN_144605cc8;
        puVar8[1] = param_1;
        *(undefined4 *)(puVar8 + 2) = local_e8;
        *(undefined4 *)((longlong)puVar8 + 0x14) = local_e4;
        *(bool *)(puVar8 + 3) = lVar6 != 0;
      }
      local_d8[0] = &LAB_14107d530;
      uVar7 = FUN_1420849a0(param_1,local_88,local_d8);
      FUN_14208c260(param_1,uVar7);
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
      if (local_98 != 0) {
        plVar9 = local_c8;
        if (local_a8 != (longlong *)0x0) {
          plVar9 = local_a8;
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x10))(plVar9,0);
        }
      }
      if (local_a8 != (longlong *)0x0) {
        FMemory::Free();
      }
      lVar6 = FUN_140eccc40(param_1);
      if (lVar6 == 0) {
        return;
      }
      lVar6 = FUN_140ad6100(plVar1,lVar6);
      if (lVar6 == 0) {
        return;
      }
      lVar3 = FUN_1414e47c0();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        return;
      }
      plVar1 = *(longlong **)(lVar6 + 0x578);
      if (plVar1 == (longlong *)0x0) {
        return;
      }
      puVar8 = (undefined8 *)
               (**(code **)(*plVar1 + 0x428))(plVar1,&local_e8,*(undefined8 *)(param_1 + 0xe90));
      *(undefined8 *)(param_1 + 0xca0) = *puVar8;
      *(undefined4 *)(param_1 + 0xca8) = *(undefined4 *)(puVar8 + 1);
      return;
    }
  }
  *(undefined1 *)(param_1 + 0xd39) = 0;
  return;
}



// FUNCTION 141096000 FUN_141096000 body=143 status=ok
// SIG undefined FUN_141096000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141096000(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  FUN_142ec6f90();
  uVar1 = FUN_142ed6760(param_1 + -0x4d8,local_68);
  FUN_14208c260(param_1 + -0x4d8,uVar1);
  if (local_28 != 0) {
    plVar2 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar2 = local_38;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141096090 FUN_141096090 body=409 status=ok
// SIG undefined FUN_141096090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141096090(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  FUN_142ec7200();
  if (*(char *)(param_1 + 0x1bb) != '\0') {
    *(undefined1 *)(param_1 + 0x1bb) = 0;
  }
  param_1 = param_1 + -0x4d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = FUN_14107d7a0;
  FUN_1420849a0(param_1,local_68,local_b8);
  if (local_78 != 0) {
    plVar2 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar2 = local_88;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_14208c260(param_1,local_68);
  if (local_28 != 0) {
    plVar2 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar2 = local_38;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = (code *)&LAB_14107d9d0;
  FUN_1420849a0(param_1,local_68,local_b8);
  if (local_78 != 0) {
    plVar2 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar2 = local_88;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_14208c4f0(param_1,local_68);
  return;
}



// FUNCTION 141096230 FUN_141096230 body=158 status=ok
// SIG undefined FUN_141096230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141096230(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  uVar1 = FUN_142ed0d60(param_1 + -0x4d8,local_68);
  FUN_14208c260(param_1 + -0x4d8,uVar1);
  if (local_28 != 0) {
    plVar2 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar2 = local_38;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_142ec7390(param_1);
  return;
}



// FUNCTION 1410962d0 FUN_1410962d0 body=500 status=ok
// SIG undefined FUN_1410962d0(void)

void FUN_1410962d0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined8 local_28;
  undefined8 local_20;
  
  bVar7 = 0;
  lVar3 = FWeakObjectPtr::Get(param_1 + 0xc4);
  if (lVar3 != 0) {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0xc4);
    bVar7 = *(byte *)(lVar3 + 0xcc) >> 3 & 1;
  }
  lVar3 = FWeakObjectPtr::Get(param_1 + 0xb4);
  if (lVar3 != 0) {
    lVar4 = FUN_14145f370();
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
      lVar4 = *(longlong *)(lVar3 + 0x848);
      if (lVar4 != 0) {
        lVar5 = FUN_1413f82e0();
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
          FUN_1407665e0(lVar4 + 0x1050,param_1 + -0x4d8);
          FUN_140483870(lVar4 + 0x1358,param_1 + -0x4d8);
        }
      }
      FUN_140d07060(lVar3);
      if (*(char *)(param_1 + 0x5c0) != '\0') {
        *(undefined1 *)(param_1 + 0x5c0) = 0;
        local_28 = 0;
        local_20 = 0;
        (**(code **)(*(longlong *)(param_1 + -0x4d8) + 0x4e8))
                  ((longlong *)(param_1 + -0x4d8),*(undefined8 *)(param_1 + 0x5a0),&local_28);
      }
      FUN_1411d87d0(param_1 + 0x208,bVar7);
      FUN_140eb0dd0(param_1 + 0x1e0);
      if (*(longlong *)(param_1 + 0x5b8) != 0) {
        FUN_140b8cfd0(*(longlong *)(param_1 + 0x5b8),0);
        FUN_1412c4890(*(undefined8 *)(param_1 + 0x5b8));
        FUN_1412bd910(*(undefined8 *)(param_1 + 0x5b8));
      }
    }
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x5a8);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x5a8);
    FUN_140483870(lVar3 + 0x5e0,param_1 + -0x4d8);
  }
  uVar6 = FWeakObjectPtr::Get(param_1 + 0xb4);
  thunk_FUN_14245e740(uVar6,0);
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 1410964d0 FUN_1410964d0 body=232 status=ok
// SIG undefined FUN_1410964d0(void)

void FUN_1410964d0(longlong param_1)

{
  undefined4 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  
  puVar1 = (undefined4 *)(param_1 + 0x1b0);
  *(undefined1 *)(param_1 + 0x1dd) = 0;
  cVar2 = FWeakObjectPtr::IsValid(puVar1);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(puVar1);
    FUN_140483870(lVar3 + 0x4f0,param_1 + -0x4d8);
    lVar3 = FWeakObjectPtr::Get(puVar1);
    FUN_140483870(lVar3 + 0x508,param_1 + -0x4d8);
    lVar3 = FWeakObjectPtr::Get(puVar1);
    FUN_140483870(lVar3 + 0x520,param_1 + -0x4d8);
    lVar3 = FWeakObjectPtr::Get(puVar1);
    FUN_140483870(lVar3 + 0x538,param_1 + -0x4d8);
  }
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x1a8) = local_res8;
  *(undefined4 *)(param_1 + 0x1ac) = local_resc;
  FWeakObjectPtr::operator=(&local_res8,0);
  *puVar1 = local_res8;
  *(undefined4 *)(param_1 + 0x1b4) = local_resc;
  FUN_142ec75f0(param_1);
  return;
}



// FUNCTION 1410965c0 FUN_1410965c0 body=2540 status=ok
// SIG undefined FUN_1410965c0(void)

void FUN_1410965c0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  wchar_t *pwVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  ulonglong uVar17;
  wchar_t *pwVar18;
  int iVar19;
  uint uVar20;
  wchar_t *pwVar21;
  longlong lVar22;
  ulonglong local_res20;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [32];
  
  lVar22 = param_1[0x9c];
  lVar13 = lVar22 + (longlong)(int)param_1[0x9d] * 0x28;
  for (; lVar22 != lVar13; lVar22 = lVar22 + 0x28) {
    uVar17 = 0;
    uVar7 = FWeakObjectPtr::Get(lVar22);
    if (uVar7 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar22 + 8)) && (*(longlong *)(lVar22 + 0x10) != 0)) {
        lVar8 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar22,lVar8);
        if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar22 + 8) = DAT_1464b56f4;
        }
        uVar7 = FWeakObjectPtr::Get(lVar22);
        if (uVar7 != 0) goto LAB_141096676;
      }
LAB_1410966ac:
      uVar7 = uVar17;
    }
    else {
LAB_141096676:
      lVar8 = FUN_142e19540();
      if ((*(int *)(*(longlong *)(uVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(uVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_1410966ac;
    }
    if (uVar7 != 0) {
      uVar7 = FWeakObjectPtr::Get(lVar22);
      if (uVar7 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(lVar22 + 8)) && (*(longlong *)(lVar22 + 0x10) != 0)) {
          lVar8 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar22,lVar8);
          if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(lVar22 + 8) = DAT_1464b56f4;
          }
          uVar7 = FWeakObjectPtr::Get(lVar22);
          if (uVar7 != 0) goto LAB_14109672d;
        }
LAB_141096763:
        uVar7 = uVar17;
      }
      else {
LAB_14109672d:
        lVar8 = FUN_142e19540();
        if ((*(int *)(*(longlong *)(uVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_141096763;
      }
      plVar2 = param_1 + -0x9b;
      local_b8 = CONCAT31(local_b8._1_3_,0xff);
      uStack_b0 = 0;
      local_a8 = local_a8 & 0xffffffff00000000;
      if (param_1[0xa7] == 0) {
        lVar8 = 0;
        local_res20 = uVar17;
      }
      else {
        local_res20 = FUN_140c453a0(param_1[0xa7]);
        lVar8 = param_1[0xa7];
      }
      if (local_res20 != 0) {
        puVar9 = (undefined4 *)FUN_142d622d0(local_60,&local_res20,lVar8,uVar7);
        local_b8 = *puVar9;
        uStack_b4 = puVar9[1];
        uStack_b0 = *(undefined8 *)(puVar9 + 2);
        local_a8 = *(ulonglong *)(puVar9 + 4);
      }
      cVar5 = FUN_142d52a00(&local_b8);
      if (cVar5 != '\0') {
        uVar10 = FUN_142d52a20(&local_b8);
        uVar10 = FArchive::operator<<(uVar10);
        plVar11 = (longlong *)FUN_142d621c0(uVar10);
        if (*(int *)((longlong)plVar11 + 0x14) < 1) {
          iVar19 = (int)plVar11[1];
          uVar7 = uVar17;
          if (0 < iVar19) {
            do {
              if ((((*(int *)(uVar17 + 8 + *plVar11) == 0) ||
                   (plVar14 = *(longlong **)(uVar17 + *plVar11), plVar14 == (longlong *)0x0)) ||
                  (cVar5 = (**(code **)(*plVar14 + 8))(plVar14,plVar2), cVar5 != '\0')) ||
                 (cVar5 = (**(code **)(*plVar14 + 0x10))(plVar14), cVar5 != '\0')) {
                TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(plVar11,uVar7,1);
              }
              else {
                uVar7 = (ulonglong)((int)uVar7 + 1);
                uVar17 = uVar17 + 0x10;
              }
              iVar19 = (int)plVar11[1];
            } while ((int)uVar7 < iVar19);
          }
          iVar6 = iVar19 * 2;
          if (iVar6 < 3) {
            iVar6 = 2;
          }
          *(int *)(plVar11 + 2) = iVar6;
          if (*(int *)((longlong)plVar11 + 0xc) != iVar19) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar11);
          }
        }
        else {
          plVar14 = (longlong *)*plVar11;
          bVar3 = false;
          plVar16 = plVar14 + (longlong)(int)plVar11[1] * 2;
          if (plVar14 != plVar16) {
            do {
              if ((((int)plVar14[1] != 0) &&
                  (plVar1 = (longlong *)*plVar14, plVar1 != (longlong *)0x0)) &&
                 (cVar5 = (**(code **)(*plVar1 + 8))(plVar1,plVar2), cVar5 != '\0')) {
                if (((int)plVar14[1] != 0) &&
                   (plVar1 = (longlong *)*plVar14, plVar1 != (longlong *)0x0)) {
                  (**(code **)(*plVar1 + 0x28))(plVar1,0);
                  if (*plVar14 != 0) {
                    lVar8 = FMemory::Realloc(*plVar14,0,0);
                    *plVar14 = lVar8;
                  }
                  *(undefined4 *)(plVar14 + 1) = 0;
                }
                bVar3 = true;
              }
              plVar14 = plVar14 + 2;
            } while (plVar14 != plVar16);
            if (bVar3) {
              *(undefined4 *)(plVar11 + 2) = 0;
            }
          }
        }
        uVar7 = 0;
        uVar10 = FUN_142d52a20(&local_b8);
        uVar10 = FArchive::operator<<(uVar10);
        plVar11 = (longlong *)FUN_142d62330(uVar10);
        if (*(int *)((longlong)plVar11 + 0x14) < 1) {
          iVar19 = (int)plVar11[1];
          uVar17 = uVar7;
          if (0 < iVar19) {
            do {
              if ((((*(int *)(uVar7 + 8 + *plVar11) == 0) ||
                   (plVar14 = *(longlong **)(uVar7 + *plVar11), plVar14 == (longlong *)0x0)) ||
                  (cVar5 = (**(code **)(*plVar14 + 8))(plVar14,plVar2), cVar5 != '\0')) ||
                 (cVar5 = (**(code **)(*plVar14 + 0x10))(plVar14), cVar5 != '\0')) {
                TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(plVar11,uVar17,1);
              }
              else {
                uVar17 = (ulonglong)((int)uVar17 + 1);
                uVar7 = uVar7 + 0x10;
              }
              iVar19 = (int)plVar11[1];
            } while ((int)uVar17 < iVar19);
          }
          iVar6 = iVar19 * 2;
          if (iVar6 < 3) {
            iVar6 = 2;
          }
          *(int *)(plVar11 + 2) = iVar6;
          if (*(int *)((longlong)plVar11 + 0xc) != iVar19) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar11);
          }
        }
        else {
          plVar14 = (longlong *)*plVar11;
          bVar3 = false;
          plVar16 = plVar14 + (longlong)(int)plVar11[1] * 2;
          if (plVar14 != plVar16) {
            do {
              if ((((int)plVar14[1] != 0) &&
                  (plVar1 = (longlong *)*plVar14, plVar1 != (longlong *)0x0)) &&
                 (cVar5 = (**(code **)(*plVar1 + 8))(plVar1,plVar2), cVar5 != '\0')) {
                if (((int)plVar14[1] != 0) &&
                   (plVar1 = (longlong *)*plVar14, plVar1 != (longlong *)0x0)) {
                  (**(code **)(*plVar1 + 0x28))(plVar1,0);
                  if (*plVar14 != 0) {
                    lVar8 = FMemory::Realloc(*plVar14,0,0);
                    *plVar14 = lVar8;
                  }
                  *(undefined4 *)(plVar14 + 1) = 0;
                }
                bVar3 = true;
              }
              plVar14 = plVar14 + 2;
            } while (plVar14 != plVar16);
            if (bVar3) {
              *(undefined4 *)(plVar11 + 2) = 0;
            }
          }
        }
      }
    }
  }
  pwVar18 = (wchar_t *)0x0;
  lVar13 = param_1[0xcf];
  if (lVar13 != 0) {
    if ((*(int *)(lVar13 + 0x4f0) != 0) &&
       (plVar2 = *(longlong **)(lVar13 + 0x4e8), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      if (*(longlong *)(lVar13 + 0x4e8) != 0) {
        uVar10 = FMemory::Realloc(*(longlong *)(lVar13 + 0x4e8),0,0);
        *(undefined8 *)(lVar13 + 0x4e8) = uVar10;
      }
      *(undefined4 *)(lVar13 + 0x4f0) = 0;
    }
    pwVar12 = _guard_xfg_dispatch_icall_nop(L"&UGFxVendingMachineMenu::OnVendingMachineDirty",L"::")
    ;
    pwVar21 = pwVar18;
    while (pwVar4 = pwVar12, pwVar4 != (wchar_t *)0x0) {
      pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar21 = pwVar4;
    }
    FName::FName(&local_a0,pwVar21 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_1[0xcf] + 0x518,param_1 + -0x9b,local_a0)
    ;
    pwVar12 = _guard_xfg_dispatch_icall_nop
                        (L"&UGFxVendingMachineMenu::OnVendingMachineScroll",L"::");
    pwVar21 = pwVar18;
    while (pwVar4 = pwVar12, pwVar4 != (wchar_t *)0x0) {
      pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar21 = pwVar4;
    }
    FName::FName(&local_98,pwVar21 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_1[0xcf] + 0x528,param_1 + -0x9b,local_98)
    ;
  }
  pwVar12 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnBackpackGridItemSelected",L"::");
  pwVar21 = pwVar18;
  while (pwVar4 = pwVar12, pwVar4 != (wchar_t *)0x0) {
    pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
    pwVar21 = pwVar4;
  }
  FName::FName(&local_90,pwVar21 + 2,1);
  plVar2 = param_1 + -0x9b;
  TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_1 + 0xe0,plVar2,local_90);
  pwVar12 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnBackpackGridItemClicked",L"::");
  pwVar21 = pwVar18;
  while (pwVar4 = pwVar12, pwVar4 != (wchar_t *)0x0) {
    pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
    pwVar21 = pwVar4;
  }
  FName::FName(&local_88,pwVar21 + 2,1);
  TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_1 + 0xe2,plVar2,local_88);
  if (param_1[0xa8] != 0) {
    FUN_1407665e0(param_1[0xa8] + 0x2d8,plVar2);
    FUN_1407665e0(param_1[0xa8] + 0x2e8,plVar2);
    FUN_1407665e0(param_1[0xa8] + 0x2f8,plVar2);
    FUN_1407665e0(param_1[0xa8] + 0x318,plVar2);
  }
  if (param_1[0xa7] != 0) {
    FUN_1407665e0(param_1[0xa7] + 0x1308,plVar2);
    FUN_1407665e0(param_1[0xa7] + 0x1318,plVar2);
  }
  if (param_1[0x6f] != 0) {
    FUN_1411eff10();
    FUN_1411f8450(param_1[0x6f]);
    FUN_1407665e0(param_1[0x6f] + 0xe8,plVar2);
    param_1[0x6f] = 0;
  }
  lVar13 = FWeakObjectPtr::Get((longlong)param_1 + 0xf4);
  if (lVar13 != 0) {
    lVar22 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar22 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar22 + 0x90) * 8
         ) != lVar22 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar13 = *(longlong *)(lVar13 + 0x478);
      lVar22 = param_1[0x9f];
      pwVar21 = pwVar18;
      if (0 < *(int *)(lVar13 + 0x1e8)) {
        do {
          plVar11 = (longlong *)(*(longlong *)(lVar13 + 0x1e0) + (longlong)pwVar18);
          if ((((int)plVar11[1] != 0) &&
              (plVar14 = (longlong *)*plVar11, plVar14 != (longlong *)0x0)) &&
             (plVar14 = (longlong *)(**(code **)(*plVar14 + 0x20))(plVar14,local_70),
             *plVar14 == lVar22)) {
            if (((int)plVar11[1] != 0) &&
               (plVar14 = (longlong *)*plVar11, plVar14 != (longlong *)0x0)) {
              (**(code **)(*plVar14 + 0x28))(plVar14,0);
              if (*plVar11 != 0) {
                lVar22 = FMemory::Realloc(*plVar11,0,0);
                *plVar11 = lVar22;
              }
              *(undefined4 *)(plVar11 + 1) = 0;
            }
            break;
          }
          uVar20 = (int)pwVar21 + 1;
          pwVar18 = pwVar18 + 8;
          pwVar21 = (wchar_t *)(ulonglong)uVar20;
        } while ((int)uVar20 < *(int *)(lVar13 + 0x1e8));
      }
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar13 + 0x1e0,0);
      param_1[0x9f] = 0;
    }
  }
  lVar13 = param_1[0xc3];
  if ((lVar13 != 0) && (param_1[0xc4] != 0)) {
    FWeakObjectPtr::operator=(lVar13 + 0x198,0);
    *(undefined8 *)(lVar13 + 0x1a0) = 0;
    lVar13 = param_1[0xc4];
    FWeakObjectPtr::operator=(lVar13 + 0x198,0);
    *(undefined8 *)(lVar13 + 0x1a0) = 0;
  }
  if ((*(char *)((longlong)param_1 + 0x164) != '\0') &&
     (cVar5 = (**(code **)(*param_1 + 0x98))(param_1), cVar5 == '\0')) {
    FUN_140ee38f0(param_1 + 0xe0);
  }
  lVar13 = *plVar2;
  local_80 = 0;
  local_78 = 0;
  puVar15 = (undefined8 *)FName::FName(local_68,"Close",1);
  (**(code **)(lVar13 + 0x4e8))(plVar2,*puVar15,&local_80);
  lVar13 = FWeakObjectPtr::Get((longlong)param_1 + 0xb4);
  if (lVar13 != 0) {
    lVar22 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar22 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar22 + 0x90) * 8
         ) != lVar22 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_140d07760(lVar13);
    }
  }
  lVar13 = param_1[0x8d];
  for (iVar19 = (int)param_1[0x8e]; iVar19 != 0; iVar19 = iVar19 + -1) {
    *(undefined4 *)(lVar13 + 0x48) = 0;
    if (*(longlong *)(lVar13 + 0x40) != 0) {
      FMemory::Free();
    }
    FUN_14106ecc0(lVar13);
    lVar13 = lVar13 + 0x50;
  }
  *(undefined4 *)(param_1 + 0x8e) = 0;
  if (*(int *)((longlong)param_1 + 0x474) != 0) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1 + 0x8d,0);
  }
  *(undefined1 *)(param_1 + 0x8c) = 0;
  FUN_140eb7180(param_1);
  return;
}



// FUNCTION 141096fb0 FUN_141096fb0 body=1550 status=ok
// SIG undefined FUN_141096fb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141096fb0(longlong param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  int *piVar15;
  longlong *plVar16;
  bool bVar17;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar8 = FWeakObjectPtr::Get(param_1 + 0xb4);
  if (lVar8 != 0) {
    lVar9 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (bVar17) {
      FUN_140d07300(lVar8);
      lVar8 = *(longlong *)(lVar8 + 0x848);
      if (lVar8 != 0) {
        lVar9 = FUN_1413f82e0();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        if (bVar17) {
          pwVar10 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPlayerWeaponChanged",L"::");
          pwVar6 = (wchar_t *)0x0;
          while (pwVar5 = pwVar10, pwVar5 != (wchar_t *)0x0) {
            pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar5 + 1,L"::");
            pwVar6 = pwVar5;
          }
          FName::FName(&local_90,pwVar6 + 2,1);
          plVar14 = (longlong *)(lVar8 + 0x1050);
          FWeakObjectPtr::operator=(&local_a8,0);
          uStack_a0 = 0;
          FWeakObjectPtr::operator=(&local_a8,param_1 + -0x4d8);
          uStack_a0 = local_90;
          local_98 = 0;
          if ((local_90 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_a8), lVar9 != 0)) {
            UObject::FindFunction(lVar9,uStack_a0);
          }
          piVar2 = (int *)*plVar14;
          iVar1 = *(int *)(lVar8 + 0x1058);
          for (piVar15 = piVar2; piVar15 != piVar2 + (longlong)iVar1 * 4; piVar15 = piVar15 + 4) {
            if (((*piVar15 == (int)local_a8) &&
                (local_a8._4_4_ = (int)((ulonglong)local_a8 >> 0x20),
                bVar17 = piVar15[1] == local_a8._4_4_, bVar17)) ||
               ((cVar7 = FWeakObjectPtr::IsValid(piVar15), cVar7 == '\0' &&
                (cVar7 = FWeakObjectPtr::IsValid(&local_a8), cVar7 == '\0')))) {
              bVar17 = true;
            }
            else {
              bVar17 = false;
            }
            if ((bVar17) && (*(ulonglong *)(piVar15 + 2) == uStack_a0)) {
              bVar17 = true;
            }
            else {
              bVar17 = false;
            }
            if (bVar17) {
              if ((int)((longlong)piVar15 - (longlong)piVar2 >> 4) != -1) goto LAB_1410971ea;
              break;
            }
          }
          iVar1 = *(int *)(lVar8 + 0x1058);
          lVar9 = (longlong)iVar1;
          *(int *)(lVar8 + 0x1058) = iVar1 + 1;
          if (*(int *)(lVar8 + 0x105c) < iVar1 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar1);
          }
          lVar3 = *plVar14;
          *(int *)(lVar3 + lVar9 * 0x10) = (int)local_a8;
          *(int *)(lVar3 + 4 + lVar9 * 0x10) = local_a8._4_4_;
          *(ulonglong *)(lVar3 + 8 + lVar9 * 0x10) = uStack_a0;
LAB_1410971ea:
          TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar14);
          plVar14 = (longlong *)(lVar8 + 0x1358);
          plVar11 = (longlong *)*plVar14;
          plVar16 = plVar11 + (longlong)*(int *)(lVar8 + 0x1360) * 2;
          for (; plVar11 != plVar16; plVar11 = plVar11 + 2) {
            if ((((int)plVar11[1] != 0) &&
                (plVar4 = (longlong *)*plVar11, plVar4 != (longlong *)0x0)) &&
               (cVar7 = (**(code **)(*plVar4 + 8))(plVar4,param_1 + -0x4d8), cVar7 != '\0'))
            goto LAB_141097301;
          }
          local_a8 = FUN_141098d50;
          uStack_a0 = uStack_a0 & 0xffffffff00000000;
          plVar11 = (longlong *)FMemory::Realloc(0,0x30,0);
          if (plVar11 != (longlong *)0x0) {
            *plVar11 = (longlong)&PTR_FUN_143f77b88;
            FWeakObjectPtr::operator=(plVar11 + 1,param_1 + -0x4d8);
            *(int *)(plVar11 + 2) = (int)local_a8;
            *(int *)((longlong)plVar11 + 0x14) = local_a8._4_4_;
            *(int *)(plVar11 + 3) = (int)uStack_a0;
            *(undefined4 *)((longlong)plVar11 + 0x1c) = uStack_a0._4_4_;
            lVar9 = FDelegateHandle::GenerateNewID();
            plVar11[5] = lVar9;
            *plVar11 = (longlong)&PTR_FUN_143f77bd0;
            FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar14,1);
            (**(code **)(*plVar11 + 0x20))(plVar11,&local_90);
            iVar1 = *(int *)(lVar8 + 0x1360);
            *(int *)(lVar8 + 0x1360) = iVar1 + 1;
            if (*(int *)(lVar8 + 0x1364) < iVar1 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar1);
            }
            lVar8 = *plVar14;
            *(longlong **)(lVar8 + (longlong)iVar1 * 0x10) = plVar11;
            *(undefined4 *)(lVar8 + 8 + (longlong)iVar1 * 0x10) = 3;
          }
        }
      }
    }
  }
LAB_141097301:
  uVar13 = 0;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  lVar8 = param_1 + -0x4d8;
  puVar12 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar12 != (undefined8 *)0x0) {
    puVar12[1] = lVar8;
    *puVar12 = &PTR_FUN_143f77b70;
  }
  local_88[0] = (code *)&LAB_14107d4d0;
  FUN_14208c260(lVar8,local_88);
  if (local_48 != 0) {
    plVar14 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar14 = local_58;
    }
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x10))(plVar14,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar12 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar12 != (undefined8 *)0x0) {
    puVar12[1] = lVar8;
    *puVar12 = &PTR_FUN_143f77b70;
  }
  local_88[0] = (code *)&LAB_14107daa0;
  FUN_14208c260(lVar8,local_88);
  if (local_48 != 0) {
    plVar14 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar14 = local_58;
    }
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x10))(plVar14,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar12 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar12 != (undefined8 *)0x0) {
    puVar12[1] = lVar8;
    *puVar12 = &PTR_FUN_143f77b70;
  }
  local_88[0] = (code *)&LAB_14107d610;
  FUN_14208c260(lVar8,local_88);
  if (local_48 != 0) {
    plVar14 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar14 = local_58;
    }
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x10))(plVar14,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_58 = (longlong *)0x0;
  local_48 = 0;
  puVar12 = (undefined8 *)FUN_140438ef0(0x10,local_78);
  if (puVar12 != (undefined8 *)0x0) {
    puVar12[1] = lVar8;
    *puVar12 = &PTR_FUN_143f77b70;
  }
  local_88[0] = thunk_FUN_141076a80;
  if (local_48 != 0) {
    plVar14 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar14 = local_58;
    }
    if (plVar14 != (longlong *)0x0) {
      uVar13 = (**(code **)(*plVar14 + 8))();
    }
  }
  (*local_88[0])(uVar13);
  if (local_48 != 0) {
    plVar14 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar14 = local_58;
    }
    if (plVar14 != (longlong *)0x0) {
      (**(code **)(*plVar14 + 0x10))(plVar14,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_142ec8650(param_1);
  lVar8 = *(longlong *)(param_1 + 0x10);
  if (lVar8 != 0) {
    lVar9 = UTextureRenderTarget2D::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (bVar17) {
      FName::ToString(lVar8 + 0xe0,&local_a8);
      cVar7 = FWeakObjectPtr::IsValid(param_1 + 0x1a8);
      if ((cVar7 != '\0') && (1 < (int)uStack_a0)) {
        plVar14 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x1a8);
        (**(code **)(*plVar14 + 0x568))(plVar14,&local_a8,*(undefined8 *)(lVar8 + 0xe8));
      }
      if (local_a8 != (code *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1410975c0 FUN_1410975c0 body=432 status=ok
// SIG undefined FUN_1410975c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410975c0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
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
  *(undefined1 *)(param_1 + 0x1c4) = 0;
  FUN_142ec8980();
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x1a8);
  if (lVar2 != 0) {
    lVar3 = AUGBossFlyingAIController::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong *)(lVar2 + 0xa88) != 0)) {
      *(longlong *)(*(longlong *)(lVar2 + 0xa88) + 0x1c0) = param_1 + -0x4d8;
      FUN_1410a0590(*(undefined8 *)(lVar2 + 0xa88),lVar2 + 0xaa0,*(undefined8 *)(lVar2 + 0x688));
      (**(code **)(**(longlong **)(lVar2 + 0xa88) + 0x278))(*(longlong **)(lVar2 + 0xa88),1);
    }
  }
  param_1 = param_1 + -0x4d8;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[1] = param_1;
    *puVar4 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_14107d3c0;
  FUN_1420849a0(param_1,local_68,local_b8);
  if (local_78 != 0) {
    plVar5 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar5 = local_88;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  FUN_14208c260(param_1,local_68);
  if (local_28 != 0) {
    plVar5 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar5 = local_38;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141097770 FUN_141097770 body=1144 status=ok
// SIG undefined FUN_141097770(void)

void FUN_141097770(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 local_res8 [8];
  undefined4 uStack_2c;
  
  FUN_142ec85a0();
  lVar5 = FWeakObjectPtr::Get(param_1 + 0xb4);
  if (lVar5 == 0) {
LAB_14109781e:
    lVar5 = 0;
LAB_141097821:
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14109781e;
    lVar6 = *(longlong *)(lVar5 + 0x1850);
    if (lVar6 == 0) goto LAB_141097821;
    lVar7 = UFocusButtonWidget::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_141097821;
  }
  FWeakObjectPtr::operator=(param_1 + 0x1a8,lVar6);
  if ((lVar5 != 0) && (lVar5 = FUN_140cfc7b0(lVar5), lVar5 != 0)) {
    lVar6 = FUN_1414d3b80();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_141097881;
  }
  lVar5 = 0;
LAB_141097881:
  lVar6 = param_1 + 0x1b0;
  FWeakObjectPtr::operator=(lVar6,lVar5);
  cVar4 = FWeakObjectPtr::IsValid(lVar6);
  if (cVar4 != '\0') {
    lVar5 = FWeakObjectPtr::Get(lVar6);
    plVar1 = (longlong *)(lVar5 + 0x4f0);
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_FUN_143fcff50;
      FWeakObjectPtr::operator=(plVar8 + 1,param_1 + -0x4d8);
      *(undefined4 *)(plVar8 + 2) = 0x4109e690;
      *(undefined4 *)((longlong)plVar8 + 0x14) = 1;
      *(undefined4 *)(plVar8 + 3) = 0;
      *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_2c;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar8[5] = lVar7;
      *plVar8 = (longlong)&PTR_FUN_143fcff98;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      (**(code **)(*plVar8 + 0x20))(plVar8,local_res8);
      iVar2 = *(int *)(lVar5 + 0x4f8);
      *(int *)(lVar5 + 0x4f8) = iVar2 + 1;
      if (*(int *)(lVar5 + 0x4fc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar9 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar9 = plVar8;
      *(undefined4 *)(puVar9 + 1) = 3;
    }
    lVar5 = FWeakObjectPtr::Get(lVar6);
    plVar1 = (longlong *)(lVar5 + 0x508);
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_FUN_14468e740;
      FWeakObjectPtr::operator=(plVar8 + 1,param_1 + -0x4d8);
      *(undefined4 *)(plVar8 + 2) = 0x4109e5c0;
      *(undefined4 *)((longlong)plVar8 + 0x14) = 1;
      *(undefined4 *)(plVar8 + 3) = 0;
      *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_2c;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar8[5] = lVar7;
      *plVar8 = (longlong)&PTR_FUN_14468e788;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      (**(code **)(*plVar8 + 0x20))(plVar8,local_res8);
      iVar2 = *(int *)(lVar5 + 0x510);
      *(int *)(lVar5 + 0x510) = iVar2 + 1;
      if (*(int *)(lVar5 + 0x514) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar9 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar9 = plVar8;
      *(undefined4 *)(puVar9 + 1) = 3;
    }
    lVar5 = FWeakObjectPtr::Get(lVar6);
    plVar1 = (longlong *)(lVar5 + 0x520);
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_FUN_14468e740;
      FWeakObjectPtr::operator=(plVar8 + 1,param_1 + -0x4d8);
      *(undefined4 *)(plVar8 + 2) = 0x4109e520;
      *(undefined4 *)((longlong)plVar8 + 0x14) = 1;
      *(undefined4 *)(plVar8 + 3) = 0;
      *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_2c;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar8[5] = lVar7;
      *plVar8 = (longlong)&PTR_FUN_14468e788;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      (**(code **)(*plVar8 + 0x20))(plVar8,local_res8);
      iVar2 = *(int *)(lVar5 + 0x528);
      *(int *)(lVar5 + 0x528) = iVar2 + 1;
      if (*(int *)(lVar5 + 0x52c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar9 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar9 = plVar8;
      *(undefined4 *)(puVar9 + 1) = 3;
    }
    lVar5 = FWeakObjectPtr::Get(lVar6);
    plVar1 = (longlong *)(lVar5 + 0x538);
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_FUN_14468e7d0;
      FWeakObjectPtr::operator=(plVar8 + 1,param_1 + -0x4d8);
      *(undefined4 *)(plVar8 + 2) = 0x4109e450;
      *(undefined4 *)((longlong)plVar8 + 0x14) = 1;
      *(undefined4 *)(plVar8 + 3) = 0;
      *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_2c;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar8[5] = lVar6;
      *plVar8 = (longlong)&PTR_FUN_14468e818;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      (**(code **)(*plVar8 + 0x20))(plVar8,local_res8);
      iVar2 = *(int *)(lVar5 + 0x540);
      *(int *)(lVar5 + 0x540) = iVar2 + 1;
      if (*(int *)(lVar5 + 0x544) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar9 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar9 = plVar8;
      *(undefined4 *)(puVar9 + 1) = 3;
    }
  }
  *(undefined1 *)(param_1 + 0x1dd) = 1;
  if (((*(char *)(param_1 + 0x1dc) != '\0') && (*(char *)(param_1 + 0x1dd) != '\0')) &&
     (cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x1b0), cVar4 != '\0')) {
    uVar10 = FWeakObjectPtr::Get(param_1 + 0x1b0);
    FUN_140af37a0(uVar10);
    return;
  }
  return;
}



// FUNCTION 141097bf0 FUN_141097bf0 body=653 status=ok
// SIG undefined FUN_141097bf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141097bf0(longlong param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  ulonglong uVar9;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar3 = FWeakObjectPtr::Get(param_1 + 0xb4);
  if (lVar3 != 0) {
    lVar4 = FUN_14145f370();
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
      FUN_140d07770(lVar3);
    }
  }
  uVar5 = FWeakObjectPtr::Get(param_1 + 0xb4);
  uVar9 = 0;
  if (uVar5 == 0) {
LAB_141097cb5:
    uVar5 = uVar9;
  }
  else {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(uVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_141097cb5;
  }
  *(ulonglong *)(param_1 + 0x530) = uVar5;
  uVar5 = FWeakObjectPtr::Get(param_1 + 0xbc);
  if (uVar5 != 0) {
    lVar3 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(uVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_141097d08;
  }
  uVar5 = uVar9;
LAB_141097d08:
  *(ulonglong *)(param_1 + 0x538) = uVar5;
  if (uVar5 != 0) {
    uVar6 = (**(code **)(*(longlong *)(uVar5 + 0xd80) + 0x18))();
    *(undefined8 *)(param_1 + 0x540) = uVar6;
  }
  if (0 < *(int *)(param_1 + 0x458)) {
    do {
      iVar1 = *(int *)(param_1 + 0x470);
      local_78 = 0;
      local_70 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0xffffffff;
      local_44 = 0;
      local_38 = 0;
      local_30 = 0;
      *(int *)(param_1 + 0x470) = iVar1 + 1;
      if (*(int *)(param_1 + 0x474) < iVar1 + 1) {
        TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1 + 0x468,iVar1);
      }
      puVar7 = (undefined8 *)((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x468));
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      *(undefined4 *)(puVar7 + 6) = 0xffffffff;
      *(undefined4 *)((longlong)puVar7 + 0x34) = 0;
      puVar7[8] = 0;
      *(undefined4 *)(puVar7 + 9) = 0;
      FUN_14106f9b0(puVar7,&local_78);
      local_30 = 0;
      if (local_38 != 0) {
        FMemory::Free();
      }
      FUN_14106ecc0(&local_78);
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < *(int *)(param_1 + 0x458));
  }
  FUN_140eb73b0(param_1);
  FUN_1410a50a0(param_1 + -0x4d8);
  lVar3 = *(longlong *)(param_1 + -0x4d8);
  local_98 = 0;
  local_90 = 0;
  puVar7 = (undefined8 *)FName::FName(local_88,&DAT_14468cfec,1);
  (**(code **)(lVar3 + 0x4e8))(param_1 + -0x4d8,*puVar7,&local_98);
  return;
}



// FUNCTION 141097e80 FUN_141097e80 body=59 status=ok
// SIG undefined FUN_141097e80(void)

void FUN_141097e80(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  FUN_1410a2390();
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x3b0);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x3b0);
    LOCK();
    *(undefined4 *)(lVar1 + 0x588) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 141097ec0 FUN_141097ec0 body=2059 status=ok
// SIG undefined FUN_141097ec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_141097ec0(longlong param_1,float param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  float fVar13;
  undefined1 auStack_288 [32];
  int local_268;
  undefined4 local_260;
  undefined4 local_258;
  undefined4 uStack_254;
  longlong local_250 [7];
  undefined4 local_218;
  undefined4 local_214;
  longlong local_210 [2];
  longlong *plStack_200;
  longlong local_1f8 [2];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  undefined1 local_1c0 [8];
  longlong *local_1b8;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_190 [8];
  longlong *local_188;
  undefined1 local_178 [16];
  code *local_168 [2];
  undefined1 local_158 [32];
  undefined8 local_138;
  undefined4 local_128;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  longlong local_d8;
  undefined4 local_d0;
  undefined4 local_c8 [4];
  undefined1 local_b8 [8];
  longlong *local_b0;
  char local_a0;
  undefined4 local_98 [4];
  undefined1 local_88 [8];
  longlong *local_80;
  char local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  local_258 = 0;
  FUN_142ec8c70();
  *(float *)(param_1 + 0x664) = param_2 + *(float *)(param_1 + 0x664);
  if ((*(longlong *)(param_1 + 0x6c8) != 0) && (*(longlong *)(param_1 + 0x6d0) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x6d0) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if ((0 < iVar5) && (*(longlong *)(param_1 + 0x690) != 0)) {
      fVar13 = (float)FUN_140b2c7d0();
      local_268 = (int)fVar13;
      local_260 = 0;
      FTimespan::Assign(&local_258,0,0,0);
      local_118 = 0;
      local_210[1] = 0;
      plStack_200 = (longlong *)0x0;
      local_110 = 0;
      local_f8 = 0;
      lVar11 = CONCAT44(uStack_254,local_258) / 600000000;
      local_f0 = 0;
      local_e8 = 0xffffffff;
      local_e4 = 0;
      local_d8 = 0;
      lVar10 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar11),8) + lVar11;
      local_d0 = 0;
      uVar7 = FText::AsNumber(local_1d8,
                              (int)lVar11 + ((int)(lVar10 >> 5) - (int)(lVar10 >> 0x3f)) * -0x3c,0,
                              local_210 + 1);
      local_c8[0] = 4;
      FText::FText(local_b8,uVar7);
      local_a0 = '\x01';
      local_250[0] = 0;
      local_250[1] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_250,0);
      FGenericPlatformString::Memcpy(local_250[0],L"Minutes",0x10);
      FUN_141068d60(&local_118,local_250,local_c8);
      if (local_250[0] != 0) {
        FMemory::Free();
      }
      if ((local_a0 != '\0') && (local_a0 = '\0', local_b0 != (longlong *)0x0)) {
        LOCK();
        plVar9 = local_b0 + 1;
        lVar11 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar1 = (int *)((longlong)local_b0 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_b0 + 8))(local_b0,1);
          }
        }
      }
      if (local_1d0 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_1d0 + 1;
        lVar11 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_1d0)(local_1d0);
          LOCK();
          piVar1 = (int *)((longlong)local_1d0 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_1d0 + 8))(local_1d0,1);
          }
        }
      }
      plVar9 = plStack_200;
      if (plStack_200 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_200 + 1;
        lVar11 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plStack_200)(plStack_200);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      lVar11 = CONCAT44(uStack_254,local_258) +
               SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(CONCAT44(uStack_254,local_258)),8);
      lVar10 = (lVar11 >> 0x17) - (lVar11 >> 0x3f);
      lVar11 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar10),8) + lVar10;
      uVar12 = lVar10 + ((lVar11 >> 5) - (lVar11 >> 0x3f)) * -0x3c;
      bVar3 = 9 < (int)uVar12;
      if (bVar3) {
        local_250[4] = 0;
        local_250[5] = 0;
        FString::AppendInt(local_250 + 4,uVar12 & 0xffffffff);
        plVar9 = local_250 + 4;
      }
      else {
        FString::PrintfImpl(local_1f8,&DAT_14467c098);
        plVar9 = local_1f8;
      }
      lVar11 = *plVar9;
      *plVar9 = 0;
      local_250[6] = lVar11;
      local_218 = (int)plVar9[1];
      local_214 = *(undefined4 *)((longlong)plVar9 + 0xc);
      plVar9[1] = 0;
      if ((bVar3) && (local_250[4] != 0)) {
        FMemory::Free();
      }
      if ((!bVar3) && (local_1f8[0] != 0)) {
        FMemory::Free();
      }
      uVar7 = FText::FromString(local_1c0,local_250 + 6);
      local_98[0] = 4;
      FText::FText(local_88,uVar7);
      local_70 = '\x01';
      local_250[2] = 0;
      local_250[3] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_250 + 2,0);
      FGenericPlatformString::Memcpy(local_250[2],L"Seconds",0x10);
      FUN_141068d60(&local_118,local_250 + 2,local_98);
      if (local_250[2] != 0) {
        FMemory::Free();
      }
      if ((local_70 != '\0') && (local_70 = '\0', local_80 != (longlong *)0x0)) {
        LOCK();
        plVar9 = local_80 + 1;
        lVar11 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)local_80 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_80 + 8))(local_80,1);
          }
        }
      }
      if (local_1b8 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_1b8 + 1;
        lVar11 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_1b8)(local_1b8);
          LOCK();
          piVar1 = (int *)((longlong)local_1b8 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_1b8 + 8))(local_1b8,1);
          }
        }
      }
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_190,L"{Minutes}:{Seconds}",L"GFxVendingMachineMenu",L"IODTimer");
      uVar7 = FTextFormat::FTextFormat(local_178,uVar7);
      uVar7 = FText::Format(local_1a8,uVar7,&local_118);
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x6c0,uVar7,1,0);
      if (local_1a0 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_1a0 + 1;
        lVar11 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_1a0)(local_1a0);
          LOCK();
          piVar1 = (int *)((longlong)local_1a0 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_1a0 + 8))(local_1a0,1);
          }
        }
      }
      if (local_188 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_188 + 1;
        lVar11 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_188)(local_188);
          LOCK();
          piVar1 = (int *)((longlong)local_188 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_188 + 8))(local_188,1);
          }
        }
      }
      if (local_250[6] != 0) {
        FMemory::Free();
      }
      local_d0 = 0;
      if (local_d8 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_118);
    }
  }
  if (*(longlong *)(param_1 + 0x378) != 0) {
    FUN_1411fd550(*(longlong *)(param_1 + 0x378),param_2);
  }
  if ((0.0 < *(float *)(param_1 + 0x944)) &&
     (fVar13 = *(float *)(param_1 + 0x944) - param_2, *(float *)(param_1 + 0x944) = fVar13,
     fVar13 <= 0.0)) {
    *(undefined4 *)(param_1 + 0x944) = 0;
    *(undefined1 *)(param_1 + 0x500) = 1;
  }
  cVar4 = FUN_140ee3fa0(param_1 + 0x700);
  if (cVar4 == '\0') {
    if (*(char *)(param_1 + 0x500) == '\0') goto LAB_1410984e0;
  }
  else {
    *(undefined1 *)(param_1 + 0x500) = 1;
  }
  if (*(float *)(param_1 + 0x944) <= 0.0) {
    local_210[0] = param_1 + -0x4d8;
    *(undefined1 *)(param_1 + 0x500) = 0;
    uStack_1e0 = local_210;
    local_1e8 = local_210[0];
    if (*(longlong *)(param_1 + 0x378) != 0) {
      local_138 = 0;
      local_128 = 0;
      puVar8 = (undefined8 *)FUN_140438ef0(0x18,local_158);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar8 + 1) = (undefined4)local_1e8;
        *(undefined4 *)((longlong)puVar8 + 0xc) = local_1e8._4_4_;
        *(undefined4 *)(puVar8 + 2) = (undefined4)uStack_1e0;
        *(undefined4 *)((longlong)puVar8 + 0x14) = uStack_1e0._4_4_;
      }
      local_168[0] = FUN_14107d450;
      FUN_1411f67c0(*(undefined8 *)(param_1 + 0x378),local_168);
    }
  }
LAB_1410984e0:
  lVar11 = param_1 + -0x4d8;
  if (*(char *)(param_1 + 0x51c) != '\0') {
    *(undefined1 *)(param_1 + 0x51c) = 0;
    uVar6 = FUN_140ee6b70(param_1 + 0x700);
    if (*(char *)(param_1 + 0x670) == '\0') {
      FUN_1410a22a0(lVar11);
      FUN_1410a9c50(lVar11);
      FUN_1410a0500(lVar11);
      if (*(longlong *)(param_1 + 0x920) != 0) {
        FUN_1410aa6d0(*(longlong *)(param_1 + 0x920),*(undefined8 *)(param_1 + 0x538));
      }
      LOCK();
      *(undefined4 *)(param_1 + 0xb0) = 1;
      UNLOCK();
    }
    else {
      *(undefined1 *)(param_1 + 0x670) = 0;
      FUN_1410aa5d0(lVar11,0);
    }
    cVar4 = FUN_140eec880(param_1 + 0x700);
    if (cVar4 != '\0') {
      if (*(char *)(param_1 + 0x51d) != '\0') {
        uVar6 = 0;
      }
      FUN_140f0b090(param_1 + 0x700,uVar6,1,0);
    }
  }
  plVar9 = *(longlong **)(param_1 + 0x620);
  if ((((plVar9 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x618) != 0)) &&
      ((char)plVar9[0x35] != '\0')) && (*(char *)(*(longlong *)(param_1 + 0x618) + 0x1a8) != '\0'))
  {
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x2b0))();
    (**(code **)(*plVar9 + 0x28))(plVar9,param_2);
    plVar9 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x618) + 0x2b0))();
    (**(code **)(*plVar9 + 0x28))(plVar9,param_2);
  }
  FUN_1410aaa40(lVar11);
  LOCK();
  iVar5 = *(int *)(param_1 + 0x4f0);
  *(int *)(param_1 + 0x4f0) = 0;
  UNLOCK();
  if (iVar5 != 0) {
    FUN_1410aa5d0(lVar11,0);
  }
  FUN_140ec3ff0(param_1 + 0x3a0,param_2);
  if (*(char *)(param_1 + 0xc08) != '\0') {
    *(undefined1 *)(param_1 + 0xc08) = 0;
    FUN_141081340(lVar11);
    if (*(char *)(param_1 + 0xc0a) != '\0') {
      *(undefined2 *)(param_1 + 0xc09) = 0;
    }
  }
  if (*(char *)(param_1 + 0xc09) != '\0') {
    *(undefined1 *)(param_1 + 0xc09) = 0;
    FUN_14107f710(lVar11);
  }
  if (*(char *)(param_1 + 0xc0b) != '\0') {
    *(undefined1 *)(param_1 + 0xc0b) = 0;
    FUN_140f07da0(param_1 + 0x700);
  }
  return;
}



// FUNCTION 141098710 FUN_141098710 body=139 status=ok
// SIG undefined FUN_141098710(void)

void FUN_141098710(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x170);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2,0,0);
  }
  if (param_2 != 0) {
    lVar4 = UXGameInstance::GetPrivateStaticClass();
    lVar2 = *(longlong *)(param_2 + 0x10);
    if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(longlong *)(param_1 + 0x1c0) != 0)) {
      FUN_1410a8f10(*(longlong *)(param_1 + 0x1c0),CONCAT71((int7)((ulonglong)lVar2 >> 8),4),
                    param_2 + 0x318);
    }
  }
  return;
}



// FUNCTION 1410987a0 FUN_1410987a0 body=173 status=ok
// SIG undefined FUN_1410987a0(void)

void FUN_1410987a0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  longlong *plVar6;
  int iVar7;
  
  if ((*(char *)(param_1 + 0xb20) != '\x03') && (param_2 != 0)) {
    iVar4 = 0;
    iVar3 = iVar4;
    if (0 < *(int *)(param_1 + 0xb18)) {
      plVar6 = *(longlong **)(param_1 + 0xb10);
      iVar7 = iVar4;
      do {
        iVar3 = iVar4;
        if (*plVar6 != param_2) {
          iVar3 = iVar7;
        }
        iVar4 = iVar4 + 1;
        plVar6 = plVar6 + 1;
        iVar7 = iVar3;
      } while (iVar4 < *(int *)(param_1 + 0xb18));
    }
    uVar1 = *(undefined1 *)(param_1 + 0xb78);
    *(int *)(param_1 + 0xb44) = iVar3;
    if ((iVar3 < 0) || (*(int *)(param_1 + 0x8c0) <= iVar3)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined1 *)((longlong)iVar3 + *(longlong *)(param_1 + 0x8b8));
    }
    *(undefined1 *)(param_1 + 0xb78) = uVar5;
    cVar2 = FUN_1410a8ac0(param_1,uVar1);
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 0xb78) = uVar1;
    }
  }
  return;
}



// FUNCTION 141098880 FUN_141098880 body=364 status=ok
// SIG undefined FUN_141098880(void)

void FUN_141098880(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 *local_a8 [2];
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined4 local_68;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FWeakObjectPtr::operator=(&local_res8,param_1);
  puVar6 = (undefined8 *)FUN_140ad4c90(param_1,local_b8);
  uVar4 = *puVar6;
  plVar7 = (longlong *)puVar6[1];
  puVar6[1] = 0;
  *puVar6 = 0;
  local_78 = 0;
  local_68 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x18,local_98);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_14461b758;
    puVar6[1] = uVar4;
    puVar6[2] = plVar7;
    plVar7 = (longlong *)0x0;
  }
  local_28 = 0;
  local_a8[0] = &LAB_14107d320;
  local_18 = 0;
  puVar6 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_1444f8920;
    puVar6[1] = param_1;
    *(undefined4 *)(puVar6 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar6 + 0x14) = local_resc;
  }
  local_58[0] = &LAB_14107d9a0;
  FUN_14208c800(param_1,local_58,local_a8);
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
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_b0 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)local_b0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  return;
}



// FUNCTION 1410989f0 FUN_1410989f0 body=577 status=ok
// SIG undefined FUN_1410989f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410989f0(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  code *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  longlong local_98;
  undefined1 local_90 [8];
  longlong local_88 [2];
  longlong local_78;
  longlong *local_68 [2];
  int local_58;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  uVar2 = 0;
  if ((*(longlong *)(param_2 + 0x10) == 0) && (local_f8 = 0, *(longlong *)(param_3 + 0x10) == 0)) {
    lVar6 = *(longlong *)(param_2 + 0x18);
  }
  else {
    local_f8 = 0;
    if (*(int *)(param_1 + 0x674) == 0) {
      *(undefined4 *)(param_1 + 0x674) = 1;
      local_98 = param_1;
      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_90,param_2);
      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_68,param_3);
      local_b8 = (longlong *)0x0;
      local_a8 = 0;
      puVar4 = (undefined8 *)FUN_140438ef0(0x60,local_d8);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR_FUN_14468e650;
        puVar4[1] = local_98;
        TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(puVar4 + 2,local_90);
        TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(puVar4 + 7,local_68);
      }
      local_e8[0] = thunk_FUN_141073c10;
      if (local_50 != 0) {
        FMemory::Free();
      }
      if (local_78 != 0) {
        FMemory::Free();
      }
      cVar1 = FUN_142ebdc00(param_1);
      if ((cVar1 == '\0') || (cVar1 = FUN_142eba870(param_1), cVar1 != '\0')) {
        if (local_a8 != 0) {
          plVar5 = local_d8;
          if (local_b8 != (longlong *)0x0) {
            plVar5 = local_b8;
          }
          if (plVar5 != (longlong *)0x0) {
            uVar2 = (**(code **)(*plVar5 + 8))();
          }
        }
        (*local_e8[0])(uVar2);
      }
      else {
        uVar2 = FUN_1420849a0(param_1,&local_98,local_e8);
        FUN_14208d480(param_1,uVar2);
        if (local_58 != 0) {
          plVar5 = local_88;
          if (local_68[0] != (longlong *)0x0) {
            plVar5 = local_68[0];
          }
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x10))(plVar5,0);
          }
        }
        if (local_68[0] != (longlong *)0x0) {
          FMemory::Free();
        }
        FUN_142eb05b0(param_1);
      }
      if (local_a8 != 0) {
        plVar5 = local_d8;
        if (local_b8 != (longlong *)0x0) {
          plVar5 = local_b8;
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,0);
        }
      }
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    else if (*(int *)(param_1 + 0x674) == 1) {
      uVar2 = TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(&local_98,param_3);
      uVar3 = TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_e8,param_2);
      FUN_14107aca0(param_1,uVar3,uVar2);
    }
    lVar6 = *(longlong *)(param_2 + 0x18);
  }
  if (lVar6 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_3 + 0x18) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141098c40 FUN_141098c40 body=226 status=ok
// SIG undefined FUN_141098c40(void)

void FUN_141098c40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  FWeakObjectPtr::operator=(&local_88);
  FWeakObjectPtr::operator=(&local_res20,param_3);
  FWeakObjectPtr::operator=(&local_res8,param_1);
  local_48 = 0;
  local_38 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x28,local_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14461b538;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
    *(undefined4 *)(puVar1 + 3) = local_res20;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = local_res24;
    *(undefined4 *)(puVar1 + 4) = local_88;
    *(undefined4 *)((longlong)puVar1 + 0x24) = local_84;
  }
  local_78[0] = &LAB_14107d890;
  FUN_14204c280(local_78);
  return;
}



// FUNCTION 141098d50 FUN_141098d50 body=183 status=ok
// SIG undefined FUN_141098d50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141098d50(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_68[0] = &LAB_14107d400;
  FUN_14208c260(param_1,local_68);
  if (local_28 != 0) {
    plVar2 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar2 = local_38;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141098e10 FUN_141098e10 body=10 status=ok
// SIG undefined FUN_141098e10(void)

void FUN_141098e10(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 *apuStack_58 [2];
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  undefined4 uStack_18;
  
  if (param_2 == 0) {
    return;
  }
  uStack_28 = 0;
  uStack_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,auStack_48);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  apuStack_58[0] = &LAB_14107d920;
  FUN_14204c280(apuStack_58);
  if (0 < *(int *)(param_1 + 1000)) {
    FUN_1410850c0(param_1,1);
    return;
  }
  return;
}



// FUNCTION 141098e20 FUN_141098e20 body=7788 status=ok
// SIG undefined FUN_141098e20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141099aa2) */
/* WARNING: Removing unreachable block (ram,0x000141099440) */
/* WARNING: Removing unreachable block (ram,0x00014109921c) */
/* WARNING: Removing unreachable block (ram,0x0001410997f3) */
/* WARNING: Removing unreachable block (ram,0x000141099d1b) */

void FUN_141098e20(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 **ppuVar3;
  longlong *plVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  size_t _Size;
  void *pvVar12;
  undefined1 auStack_7d8 [32];
  undefined8 local_7b8;
  undefined1 local_7b0;
  undefined1 *local_7a8;
  undefined8 local_7a0;
  longlong local_798;
  undefined8 local_790;
  longlong local_788;
  longlong *plStack_780;
  longlong local_778;
  longlong *plStack_770;
  void *local_768;
  ulonglong local_760;
  void *local_758;
  ulonglong local_750;
  void *local_748;
  ulonglong local_740;
  void *local_738;
  ulonglong local_730;
  longlong local_728 [12];
  undefined1 local_6c8 [8];
  longlong *local_6c0;
  void *local_6b0;
  undefined8 local_6a8;
  undefined1 local_6a0 [8];
  longlong *local_698;
  void *local_688;
  undefined8 local_680;
  void *local_678;
  ulonglong local_670;
  void *local_668;
  ulonglong local_660;
  undefined1 local_658 [8];
  longlong *local_650;
  void *local_640;
  undefined8 local_638;
  undefined1 local_630 [8];
  longlong *local_628;
  void *local_618;
  undefined8 local_610;
  undefined1 local_608 [8];
  longlong *local_600;
  void *local_5f0;
  undefined8 local_5e8;
  undefined1 local_5e0 [24];
  void *local_5c8;
  undefined8 local_5c0;
  undefined1 local_5b8 [24];
  void *local_5a0;
  undefined8 local_598;
  undefined4 *local_588;
  ulonglong *puStack_580;
  longlong local_578;
  longlong local_570;
  longlong *local_568;
  undefined1 local_560 [8];
  undefined1 local_558 [24];
  undefined8 local_540;
  undefined8 local_538;
  undefined1 local_530 [24];
  undefined8 local_518;
  undefined8 local_510;
  undefined1 local_508 [24];
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined1 local_4e0 [24];
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined1 local_4b8 [24];
  undefined8 local_4a0;
  undefined8 local_498;
  undefined1 local_490 [24];
  undefined8 local_478;
  undefined8 local_470;
  undefined4 local_468 [2];
  longlong local_460;
  longlong *local_458;
  longlong local_448;
  longlong *plStack_440;
  longlong local_438;
  longlong *plStack_430;
  longlong local_428;
  longlong *plStack_420;
  longlong local_418;
  longlong *plStack_410;
  longlong local_408;
  longlong *plStack_400;
  longlong local_3f8;
  longlong *plStack_3f0;
  longlong local_3e8;
  longlong *plStack_3e0;
  longlong local_3d8;
  longlong *plStack_3d0;
  longlong local_3c8;
  longlong *plStack_3c0;
  longlong local_3b8;
  longlong *local_3b0;
  longlong local_3a8;
  longlong *plStack_3a0;
  undefined8 local_398;
  longlong local_390;
  longlong local_388;
  longlong *plStack_380;
  longlong local_378;
  longlong *plStack_370;
  longlong local_368;
  longlong *plStack_360;
  longlong local_358;
  longlong *plStack_350;
  longlong local_348;
  longlong *plStack_340;
  longlong local_338;
  longlong *plStack_330;
  longlong local_328;
  longlong *plStack_320;
  longlong local_318;
  longlong *plStack_310;
  longlong local_308;
  longlong *plStack_300;
  longlong local_2f8;
  longlong *plStack_2f0;
  undefined1 local_2e8 [8];
  undefined1 local_2e0 [16];
  undefined1 local_2d0 [8];
  longlong *local_2c8;
  undefined **local_2b8 [2];
  longlong *local_2a8;
  longlong local_2a0;
  undefined1 local_290 [24];
  undefined1 local_278 [24];
  undefined1 local_260 [24];
  undefined1 local_248 [8];
  longlong *local_240;
  undefined1 local_230 [8];
  longlong *local_228;
  undefined1 local_218 [8];
  longlong *local_210;
  undefined1 local_200 [8];
  longlong *local_1f8;
  undefined1 local_1e8 [24];
  undefined1 local_1d0 [24];
  undefined1 local_1b8 [24];
  undefined1 local_1a0 [24];
  undefined1 local_188 [24];
  undefined1 local_170 [24];
  undefined1 local_158 [16];
  code *local_148 [2];
  undefined1 local_138 [32];
  undefined8 local_118;
  undefined4 local_108;
  undefined2 local_f8 [6];
  undefined1 local_ec;
  undefined1 local_e0;
  undefined1 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  void *local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  longlong *local_60;
  char local_50;
  ulonglong local_48 [2];
  
  if (param_2 != 0) {
    local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_7d8;
    if ((*(longlong *)(param_1 + 0x350) != 0) &&
       (cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x3b0), cVar6 != '\0')) {
      lVar8 = *param_3;
      if (((lVar8 != DAT_1468745d8) &&
          (((lVar8 != DAT_1468745e0 && (lVar8 != DAT_1468745e8)) && (lVar8 != DAT_1468745f0)))) &&
         (((lVar8 != DAT_1468745f8 && (lVar8 != DAT_1468746d0)) && (lVar8 != DAT_1468746d8)))) {
        FUN_142f0d400(*(undefined8 *)(param_1 + 0x350),*(undefined8 *)(param_1 + 0x2e8),0);
      }
      if ((*(longlong *)(param_1 + 0x348) != 0) &&
         (*(char *)(*(longlong *)(param_1 + 0x348) + 0x1e8) != '\0')) {
        FUN_1410a8c80();
      }
    }
    if ((*(longlong *)(param_1 + 0x3c0) != 0) &&
       (lVar8 = UGameInstance::FindLocalPlayerFromControllerId
                          (*(longlong *)(param_1 + 0x3c0),(int)param_3[1]), lVar8 != 0)) {
      lVar8 = FUN_142547b50(lVar8,local_2b8);
      local_778 = *(longlong *)(lVar8 + 8);
      plStack_770 = *(longlong **)(lVar8 + 0x10);
      if (plStack_770 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_770 + 1) = (int)plStack_770[1] + 1;
        UNLOCK();
      }
      local_2b8[0] = &PTR_FUN_143f740c8;
      if (local_2a0 != 0) {
        FMemory::Free();
      }
      local_2b8[0] = &PTR_FUN_143f73d18;
      if (local_2a8 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_2a8 + 1;
        lVar8 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_2a8)(local_2a8);
          LOCK();
          piVar1 = (int *)((longlong)local_2a8 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_2a8 + 8))(local_2a8,1);
          }
        }
      }
      if (*(longlong *)(param_2 + 0x308) == 0) {
        local_788 = 0;
        plStack_780 = (longlong *)0x0;
      }
      else {
        FUN_1411e6060(*(longlong *)(param_2 + 0x308),&local_788);
      }
      if ((*(int *)(param_1 + 0x3c8) == *(int *)(param_2 + 0x2d8)) &&
         (*(char *)(param_1 + 0x3a8) != '\0')) {
        FUN_1410850c0(param_1,1);
      }
      else if ((*(char *)(param_1 + 0x3cd) == '\0') &&
              ((*(int *)(param_1 + 0x3c8) = *(int *)(param_2 + 0x2d8), local_788 != 0 &&
               (local_778 != 0)))) {
        FUN_141081ef0(param_1,local_560,param_2);
        local_7a8 = (undefined1 *)0x0;
        local_7a0 = 0;
        local_798 = 0;
        local_790 = 0;
        local_f8[0] = 0;
        local_ec = 0;
        local_e0 = 0;
        local_d4 = 0;
        local_d0 = 0;
        local_c8 = 0;
        FText::FText(local_c0);
        local_3c8 = local_788;
        plStack_3c0 = plStack_780;
        local_a8 = (void *)0x0;
        local_a0 = 0;
        local_98 = 0;
        local_90 = 0;
        local_88 = 0;
        local_80 = 0;
        if (plStack_780 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_780 + 1) = (int)plStack_780[1] + 1;
          UNLOCK();
        }
        FUN_141104960(*(undefined8 *)(param_1 + 0x3c0),&local_3c8,local_f8);
        plVar4 = plStack_3c0;
        if (plStack_3c0 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_3c0 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plStack_3c0)(plStack_3c0);
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
        cVar6 = FText::IsEmpty(local_c0);
        if (cVar6 == '\0') {
          local_7a0 = CONCAT44(local_7a0._4_4_,1);
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_7a8,0);
          *local_7a8 = 0x12;
          FText::FText(local_658,local_c0);
          pvVar12 = local_a8;
          lVar8 = (longlong)(int)local_a0;
          local_640 = (void *)0x0;
          local_638 = CONCAT44(local_638._4_4_,(int)local_a0);
          if ((int)local_a0 == 0) {
            local_638 = local_a0 & 0xffffffff;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_640,local_a0 & 0xffffffff,0);
            _guard_xfg_dispatch_icall_nop(local_640,pvVar12,lVar8 * 2);
          }
          local_790 = CONCAT44(local_790._4_4_,1);
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_798,0);
          lVar8 = local_798;
          FText::FText(local_798,local_658);
          *(undefined8 *)(lVar8 + 0x18) = 0;
          *(void **)(lVar8 + 0x18) = local_640;
          *(undefined4 *)(lVar8 + 0x20) = (undefined4)local_638;
          *(undefined4 *)(lVar8 + 0x24) = local_638._4_4_;
          local_638 = 0;
          local_640 = (void *)0x0;
          if (local_650 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_650 + 1;
            lVar8 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_650)(local_650);
              LOCK();
              piVar1 = (int *)((longlong)local_650 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*local_650 + 8))(local_650,1);
              }
            }
          }
        }
        plVar4 = plStack_780;
        if (plStack_780 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_780 + 1) = (int)plStack_780[1] + 1;
          UNLOCK();
        }
        local_3b8 = local_788;
        local_3b0 = plStack_780;
        if (plStack_780 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_780 + 1) = (int)plStack_780[1] + 1;
          UNLOCK();
        }
        cVar6 = FUN_14107dce0(param_1,&local_3b8);
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
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
          LOCK();
          plVar2 = plVar4 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
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
        uVar5 = local_7a0;
        if (cVar6 != '\0') {
          lVar8 = (longlong)(int)local_7a0;
          iVar7 = (int)local_7a0 + 1;
          local_7a0 = CONCAT44(local_7a0._4_4_,iVar7);
          if (local_7a0._4_4_ < iVar7) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_7a8,uVar5 & 0xffffffff);
          }
          local_758 = (void *)0x0;
          local_750 = 8;
          local_7a8[lVar8] = 9;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_758,0);
          FGenericPlatformString::Memcpy(local_758,L"inspect",0x10);
          uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_248,L"View Character",L"GFxLobbyWidget",L"ViewCharacterText");
          FText::FText(local_630,uVar9);
          lVar8 = (longlong)(int)local_750;
          local_618 = (void *)0x0;
          local_610 = CONCAT44(local_610._4_4_,(int)local_750);
          if ((int)local_750 == 0) {
            local_610 = local_750 & 0xffffffff;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_618,local_750 & 0xffffffff,0);
            _guard_xfg_dispatch_icall_nop(local_618,local_758,lVar8 * 2);
          }
          uVar5 = local_790;
          lVar8 = (longlong)(int)local_790;
          iVar7 = (int)local_790 + 1;
          local_790 = CONCAT44(local_790._4_4_,iVar7);
          if (local_790._4_4_ < iVar7) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_798,uVar5 & 0xffffffff);
          }
          lVar8 = local_798 + lVar8 * 0x28;
          FText::FText(lVar8,local_630);
          *(undefined8 *)(lVar8 + 0x18) = 0;
          *(void **)(lVar8 + 0x18) = local_618;
          *(undefined4 *)(lVar8 + 0x20) = (undefined4)local_610;
          *(undefined4 *)(lVar8 + 0x24) = local_610._4_4_;
          local_610 = 0;
          local_618 = (void *)0x0;
          if (local_628 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_628 + 1;
            lVar8 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_628)(local_628);
              LOCK();
              piVar1 = (int *)((longlong)local_628 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*local_628 + 8))(local_628,1);
              }
            }
          }
          if (local_240 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_240 + 1;
            lVar8 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
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
          if (local_758 != (void *)0x0) {
            FMemory::Free();
          }
        }
        local_3a8 = local_788;
        plStack_3a0 = plStack_780;
        if (plStack_780 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_780 + 1) = (int)plStack_780[1] + 1;
          UNLOCK();
        }
        cVar6 = FUN_140ba7eb0(*(undefined8 *)(param_1 + 0x3c0),&local_3a8);
        plVar4 = plStack_3a0;
        if (plStack_3a0 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_3a0 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plStack_3a0)(plStack_3a0);
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
        uVar5 = local_7a0;
        if (cVar6 != '\0') {
          lVar8 = (longlong)(int)local_7a0;
          iVar7 = (int)local_7a0 + 1;
          local_7a0 = CONCAT44(local_7a0._4_4_,iVar7);
          if (local_7a0._4_4_ < iVar7) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_7a8,uVar5 & 0xffffffff);
          }
          local_748 = (void *)0x0;
          local_740 = 9;
          local_7a8[lVar8] = 10;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_748,0);
          FGenericPlatformString::Memcpy(local_748,L"gamertag",0x12);
          uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_218,L"{0}|platform(default=View Profile,xbox=View Gamercard)",
                             L"GFxLobbyWidget",L"ViewProfileText");
          puVar10 = (undefined8 *)FTextFormat::FTextFormat(local_158,uVar9);
          local_78[0] = 0;
          local_588 = local_78;
          local_50 = '\0';
          puStack_580 = local_48;
          local_398 = *puVar10;
          local_390 = puVar10[1];
          local_70 = 0;
          if (local_390 != 0) {
            LOCK();
            *(int *)(local_390 + 8) = *(int *)(local_390 + 8) + 1;
            UNLOCK();
          }
          uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                  TArray<FFormatArgumentValue,FDefaultAllocator>(local_2e0,&local_588);
          uVar9 = FText::Format(local_230,&local_398,uVar9);
          FText::FText(local_2d0,uVar9);
          if (local_228 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_228 + 1;
            lVar8 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
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
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_2e0);
          if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
            LOCK();
            plVar4 = local_60 + 1;
            lVar8 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar1 = (int *)((longlong)local_60 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*local_60 + 8))(local_60,1);
              }
            }
          }
          plVar4 = (longlong *)puVar10[1];
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
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          FText::FText(local_608,local_2d0);
          lVar8 = (longlong)(int)local_740;
          local_5f0 = (void *)0x0;
          local_5e8 = CONCAT44(local_5e8._4_4_,(int)local_740);
          if ((int)local_740 == 0) {
            local_5e8 = local_740 & 0xffffffff;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_5f0,local_740 & 0xffffffff,0);
            _guard_xfg_dispatch_icall_nop(local_5f0,local_748,lVar8 * 2);
          }
          uVar5 = local_790;
          lVar8 = (longlong)(int)local_790;
          iVar7 = (int)local_790 + 1;
          local_790 = CONCAT44(local_790._4_4_,iVar7);
          if (local_790._4_4_ < iVar7) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_798,uVar5 & 0xffffffff);
          }
          lVar8 = local_798 + lVar8 * 0x28;
          FText::FText(lVar8,local_608);
          *(undefined8 *)(lVar8 + 0x18) = 0;
          *(void **)(lVar8 + 0x18) = local_5f0;
          *(undefined4 *)(lVar8 + 0x20) = (undefined4)local_5e8;
          *(undefined4 *)(lVar8 + 0x24) = local_5e8._4_4_;
          local_5e8 = 0;
          local_5f0 = (void *)0x0;
          if (local_600 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_600 + 1;
            lVar8 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_600)(local_600);
              LOCK();
              piVar1 = (int *)((longlong)local_600 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*local_600 + 8))(local_600,1);
              }
            }
          }
          if (local_2c8 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_2c8 + 1;
            lVar8 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_2c8)(local_2c8);
              LOCK();
              piVar1 = (int *)((longlong)local_2c8 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*local_2c8 + 8))(local_2c8,1);
              }
            }
          }
          if (local_210 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_210 + 1;
            lVar8 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
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
          if (local_748 != (void *)0x0) {
            FMemory::Free();
          }
        }
        local_378 = local_788;
        plStack_370 = plStack_780;
        if (plStack_780 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_780 + 1) = (int)plStack_780[1] + 1;
          UNLOCK();
        }
        local_388 = local_778;
        plStack_380 = plStack_770;
        if (plStack_770 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_770 + 1) = (int)plStack_770[1] + 1;
          UNLOCK();
        }
        cVar6 = FUN_140ba56c0(*(undefined8 *)(param_1 + 0x3c0),&local_388,&local_378);
        plVar4 = plStack_380;
        if (plStack_380 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_380 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plStack_380)(plStack_380);
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
        plVar4 = plStack_370;
        if (plStack_370 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_370 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plStack_370)(plStack_370);
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
        uVar5 = local_7a0;
        if (cVar6 != '\0') {
          lVar8 = (longlong)(int)local_7a0;
          iVar7 = (int)local_7a0 + 1;
          local_7a0 = CONCAT44(local_7a0._4_4_,iVar7);
          if (local_7a0._4_4_ < iVar7) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_7a8,uVar5 & 0xffffffff);
          }
          local_738 = (void *)0x0;
          local_730 = 9;
          local_7a8[lVar8] = 0xb;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_738,0);
          FGenericPlatformString::Memcpy(local_738,L"gamertag",0x12);
          uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_200,L"Add Friend",L"GFxLobbyWidget",L"AddFriend");
          FText::FText(local_6c8,uVar9);
          lVar8 = (longlong)(int)local_730;
          local_6b0 = (void *)0x0;
          local_6a8 = CONCAT44(local_6a8._4_4_,(int)local_730);
          if ((int)local_730 == 0) {
            local_6a8 = local_730 & 0xffffffff;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_6b0,local_730 & 0xffffffff,0);
            _guard_xfg_dispatch_icall_nop(local_6b0,local_738,lVar8 * 2);
          }
          uVar5 = local_790;
          lVar8 = (longlong)(int)local_790;
          iVar7 = (int)local_790 + 1;
          local_790 = CONCAT44(local_790._4_4_,iVar7);
          if (local_790._4_4_ < iVar7) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_798,uVar5 & 0xffffffff);
          }
          lVar8 = local_798 + lVar8 * 0x28;
          FText::FText(lVar8,local_6c8);
          *(undefined8 *)(lVar8 + 0x18) = 0;
          *(void **)(lVar8 + 0x18) = local_6b0;
          *(undefined4 *)(lVar8 + 0x20) = (undefined4)local_6a8;
          *(undefined4 *)(lVar8 + 0x24) = local_6a8._4_4_;
          local_6a8 = 0;
          local_6b0 = (void *)0x0;
          if (local_6c0 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_6c0 + 1;
            lVar8 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_6c0)(local_6c0);
              LOCK();
              piVar1 = (int *)((longlong)local_6c0 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*local_6c0 + 8))(local_6c0,1);
              }
            }
          }
          if (local_1f8 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_1f8 + 1;
            lVar8 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
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
          if (local_738 != (void *)0x0) {
            FMemory::Free();
          }
        }
        local_358 = local_788;
        plStack_350 = plStack_780;
        if (plStack_780 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_780 + 1) = (int)plStack_780[1] + 1;
          UNLOCK();
        }
        local_368 = local_778;
        plStack_360 = plStack_770;
        if (plStack_770 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_770 + 1) = (int)plStack_770[1] + 1;
          UNLOCK();
        }
        cVar6 = FUN_140ba6d80(*(undefined8 *)(param_1 + 0x3c0),&local_368,&local_358);
        plVar4 = plStack_360;
        if (plStack_360 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_360 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plStack_360)(plStack_360);
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
        plVar4 = plStack_350;
        if (plStack_350 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_350 + 1;
          lVar8 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plStack_350)(plStack_350);
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
        uVar5 = local_7a0;
        if (cVar6 != '\0') {
          lVar8 = (longlong)(int)local_7a0;
          iVar7 = (int)local_7a0 + 1;
          local_7a0 = CONCAT44(local_7a0._4_4_,iVar7);
          if (local_7a0._4_4_ < iVar7) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_7a8,uVar5 & 0xffffffff);
          }
          local_768 = (void *)0x0;
          local_760 = 5;
          local_7a8[lVar8] = 5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_768,0);
          pvVar12 = local_768;
          FGenericPlatformString::Memcpy(local_768,L"mute",10);
          uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_1d0,L"Mute",L"GFxLobbyWidget",L"MuteText");
          FText::FText(local_6a0,uVar9);
          lVar8 = (longlong)(int)local_760;
          local_688 = (void *)0x0;
          local_680 = CONCAT44(local_680._4_4_,(int)local_760);
          if ((int)local_760 == 0) {
            local_680 = local_760 & 0xffffffff;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_688,local_760 & 0xffffffff,0);
            _guard_xfg_dispatch_icall_nop(local_688,pvVar12,lVar8 * 2);
          }
          uVar5 = local_790;
          lVar8 = (longlong)(int)local_790;
          iVar7 = (int)local_790 + 1;
          local_790 = CONCAT44(local_790._4_4_,iVar7);
          if (local_790._4_4_ < iVar7) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_798,uVar5 & 0xffffffff);
          }
          lVar8 = local_798 + lVar8 * 0x28;
          FText::FText(lVar8,local_6a0);
          *(undefined8 *)(lVar8 + 0x18) = 0;
          *(void **)(lVar8 + 0x18) = local_688;
          *(undefined4 *)(lVar8 + 0x20) = (undefined4)local_680;
          *(undefined4 *)(lVar8 + 0x24) = local_680._4_4_;
          local_680 = 0;
          local_688 = (void *)0x0;
          if (local_698 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_698 + 1;
            lVar8 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            pvVar12 = local_768;
            if ((int)lVar8 == 1) {
              (**(code **)*local_698)(local_698);
              LOCK();
              piVar1 = (int *)((longlong)local_698 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              pvVar12 = local_768;
              if (iVar7 == 1) {
                (**(code **)(*local_698 + 8))(local_698,1);
                pvVar12 = local_768;
              }
            }
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_1d0);
          if (pvVar12 != (void *)0x0) {
            FMemory::Free(pvVar12);
          }
        }
        local_338 = local_788;
        plStack_330 = plStack_780;
        if (plStack_780 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_780 + 1) = (int)plStack_780[1] + 1;
          UNLOCK();
        }
        local_348 = local_778;
        plStack_340 = plStack_770;
        if (plStack_770 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_770 + 1) = (int)plStack_770[1] + 1;
          UNLOCK();
        }
        cVar6 = FUN_140ba7bb0(*(undefined8 *)(param_1 + 0x3c0),&local_348,&local_338);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_348);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_338);
        uVar5 = local_7a0;
        if (cVar6 != '\0') {
          lVar8 = (longlong)(int)local_7a0;
          iVar7 = (int)local_7a0 + 1;
          local_7a0 = CONCAT44(local_7a0._4_4_,iVar7);
          if (local_7a0._4_4_ < iVar7) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_7a8,uVar5 & 0xffffffff);
          }
          local_678 = (void *)0x0;
          local_670 = 7;
          local_7a8[lVar8] = 6;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_678,0);
          pvVar12 = local_678;
          FGenericPlatformString::Memcpy(local_678,L"unmute",0xe);
          uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_1b8,L"Unmute",L"GFxLobbyWidget",L"UnmuteText");
          FText::FText(local_5e0,uVar9);
          lVar8 = (longlong)(int)local_670;
          local_5c8 = (void *)0x0;
          local_5c0 = CONCAT44(local_5c0._4_4_,(int)local_670);
          if ((int)local_670 == 0) {
            local_5c0 = local_670 & 0xffffffff;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_5c8,local_670 & 0xffffffff,0);
            _guard_xfg_dispatch_icall_nop(local_5c8,pvVar12,lVar8 * 2);
          }
          uVar5 = local_790;
          lVar8 = (longlong)(int)local_790;
          iVar7 = (int)local_790 + 1;
          local_790 = CONCAT44(local_790._4_4_,iVar7);
          if (local_790._4_4_ < iVar7) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_798,uVar5 & 0xffffffff);
          }
          lVar8 = local_798 + lVar8 * 0x28;
          FText::FText(lVar8,local_5e0);
          *(undefined8 *)(lVar8 + 0x18) = 0;
          *(void **)(lVar8 + 0x18) = local_5c8;
          local_5c8 = (void *)0x0;
          *(undefined4 *)(lVar8 + 0x20) = (undefined4)local_5c0;
          *(undefined4 *)(lVar8 + 0x24) = local_5c0._4_4_;
          local_5c0 = 0;
          FUN_14106ef40(local_5e0);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_1b8);
          if (pvVar12 != (void *)0x0) {
            FMemory::Free(pvVar12);
          }
        }
        local_328 = local_788;
        plStack_320 = plStack_780;
        if (plStack_780 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_780 + 1) = (int)plStack_780[1] + 1;
          UNLOCK();
        }
        cVar6 = FUN_140ba6ce0(*(undefined8 *)(param_1 + 0x3c0),&local_328);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_328);
        uVar5 = local_7a0;
        if (cVar6 != '\0') {
          lVar8 = (longlong)(int)local_7a0;
          iVar7 = (int)local_7a0 + 1;
          local_7a0 = CONCAT44(local_7a0._4_4_,iVar7);
          if (local_7a0._4_4_ < iVar7) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_7a8,uVar5 & 0xffffffff);
          }
          local_668 = (void *)0x0;
          local_660 = 5;
          local_7a8[lVar8] = 8;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_668,0);
          pvVar12 = local_668;
          FGenericPlatformString::Memcpy(local_668,L"kick",10);
          uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_1a0,L"Kick",L"GFxLobbyWidget",L"KickText");
          FText::FText(local_5b8,uVar9);
          lVar8 = (longlong)(int)local_660;
          local_5a0 = (void *)0x0;
          local_598 = CONCAT44(local_598._4_4_,(int)local_660);
          if ((int)local_660 == 0) {
            local_598 = local_660 & 0xffffffff;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_5a0,local_660 & 0xffffffff,0);
            _guard_xfg_dispatch_icall_nop(local_5a0,pvVar12,lVar8 * 2);
          }
          uVar5 = local_790;
          lVar8 = (longlong)(int)local_790;
          iVar7 = (int)local_790 + 1;
          local_790 = CONCAT44(local_790._4_4_,iVar7);
          if (local_790._4_4_ < iVar7) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_798,uVar5 & 0xffffffff);
          }
          lVar8 = local_798 + lVar8 * 0x28;
          FText::FText(lVar8,local_5b8);
          *(undefined8 *)(lVar8 + 0x18) = 0;
          *(void **)(lVar8 + 0x18) = local_5a0;
          local_5a0 = (void *)0x0;
          *(undefined4 *)(lVar8 + 0x20) = (undefined4)local_598;
          *(undefined4 *)(lVar8 + 0x24) = local_598._4_4_;
          local_598 = 0;
          FUN_14106ef40(local_5b8);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_1a0);
          if (pvVar12 != (void *)0x0) {
            FMemory::Free(pvVar12);
          }
        }
        local_308 = local_788;
        plStack_300 = plStack_780;
        if (plStack_780 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_780 + 1) = (int)plStack_780[1] + 1;
          UNLOCK();
        }
        local_318 = local_778;
        plStack_310 = plStack_770;
        if (plStack_770 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_770 + 1) = (int)plStack_770[1] + 1;
          UNLOCK();
        }
        cVar6 = FUN_140ba7570(*(undefined8 *)(param_1 + 0x3c0),&local_318,&local_308);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_318);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_308);
        uVar5 = local_7a0;
        if (cVar6 != '\0') {
          lVar8 = (longlong)(int)local_7a0;
          iVar7 = (int)local_7a0 + 1;
          local_7a0 = CONCAT44(local_7a0._4_4_,iVar7);
          if (local_7a0._4_4_ < iVar7) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_7a8,uVar5 & 0xffffffff);
          }
          local_728[4] = 0;
          local_728[5] = 0xd;
          local_7a8[lVar8] = 0xc;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_728 + 4,0);
          FGenericPlatformString::Memcpy(local_728[4],L"removeFriend",0x1a);
          uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_188,L"Remove Friend",L"GFxLobbyWidget",L"RemoveFriendText");
          FText::FText(local_558,uVar9);
          FString::FString(&local_540,local_728 + 4);
          uVar5 = local_790;
          lVar8 = (longlong)(int)local_790;
          iVar7 = (int)local_790 + 1;
          local_790 = CONCAT44(local_790._4_4_,iVar7);
          if (local_790._4_4_ < iVar7) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_798,uVar5 & 0xffffffff);
          }
          lVar8 = local_798 + lVar8 * 0x28;
          FText::FText(lVar8,local_558);
          *(undefined8 *)(lVar8 + 0x18) = 0;
          *(undefined8 *)(lVar8 + 0x18) = local_540;
          local_540 = 0;
          *(undefined4 *)(lVar8 + 0x20) = (undefined4)local_538;
          *(undefined4 *)(lVar8 + 0x24) = local_538._4_4_;
          local_538 = 0;
          FUN_14106ef40(local_558);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_188);
          if (local_728[4] != 0) {
            FMemory::Free();
          }
        }
        local_448 = local_788;
        plStack_440 = plStack_780;
        if (plStack_780 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_780 + 1) = (int)plStack_780[1] + 1;
          UNLOCK();
        }
        local_2f8 = local_778;
        plStack_2f0 = plStack_770;
        if (plStack_770 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_770 + 1) = (int)plStack_770[1] + 1;
          UNLOCK();
        }
        cVar6 = FUN_140ba5820(*(undefined8 *)(param_1 + 0x3c0),&local_2f8,&local_448);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_2f8);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_448);
        uVar5 = local_7a0;
        if (cVar6 != '\0') {
          lVar8 = (longlong)(int)local_7a0;
          iVar7 = (int)local_7a0 + 1;
          local_7a0 = CONCAT44(local_7a0._4_4_,iVar7);
          if (local_7a0._4_4_ < iVar7) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_7a8,uVar5 & 0xffffffff);
          }
          local_728[6] = 0;
          local_728[7] = 0xf;
          local_7a8[lVar8] = 0x13;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_728 + 6,0);
          FGenericPlatformString::Memcpy(local_728[6],L"addShiftFriend",0x1e);
          uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_170,L"Add SHiFT Friend",L"GFxLobbyWidget",L"AddShiftFriendText");
          FText::FText(local_530,uVar9);
          FString::FString(&local_518,local_728 + 6);
          uVar5 = local_790;
          lVar8 = (longlong)(int)local_790;
          iVar7 = (int)local_790 + 1;
          local_790 = CONCAT44(local_790._4_4_,iVar7);
          if (local_790._4_4_ < iVar7) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_798,uVar5 & 0xffffffff);
          }
          lVar8 = local_798 + lVar8 * 0x28;
          FText::FText(lVar8,local_530);
          *(undefined8 *)(lVar8 + 0x18) = 0;
          *(undefined8 *)(lVar8 + 0x18) = local_518;
          local_518 = 0;
          *(undefined4 *)(lVar8 + 0x20) = (undefined4)local_510;
          *(undefined4 *)(lVar8 + 0x24) = local_510._4_4_;
          local_510 = 0;
          FUN_14106ef40(local_530);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_170);
          if (local_728[6] != 0) {
            FMemory::Free();
          }
        }
        local_428 = local_788;
        plStack_420 = plStack_780;
        if (plStack_780 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_780 + 1) = (int)plStack_780[1] + 1;
          UNLOCK();
        }
        local_438 = local_778;
        plStack_430 = plStack_770;
        if (plStack_770 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_770 + 1) = (int)plStack_770[1] + 1;
          UNLOCK();
        }
        cVar6 = FUN_140ba7650(*(undefined8 *)(param_1 + 0x3c0),&local_438,&local_428);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_438);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_428);
        uVar5 = local_7a0;
        if (cVar6 != '\0') {
          lVar8 = (longlong)(int)local_7a0;
          iVar7 = (int)local_7a0 + 1;
          local_7a0 = CONCAT44(local_7a0._4_4_,iVar7);
          if (local_7a0._4_4_ < iVar7) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_7a8,uVar5 & 0xffffffff);
          }
          local_728[8] = 0;
          local_728[9] = 0xb;
          local_7a8[lVar8] = 0x14;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_728 + 8,0);
          FGenericPlatformString::Memcpy(local_728[8],L"editFriend",0x16);
          uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_290,L"Remove SHiFT Friend",L"GFxLobbyWidget",
                             L"RemoveShiftFriendText");
          FText::FText(local_508,uVar9);
          FString::FString(&local_4f0,local_728 + 8);
          uVar5 = local_790;
          lVar8 = (longlong)(int)local_790;
          iVar7 = (int)local_790 + 1;
          local_790 = CONCAT44(local_790._4_4_,iVar7);
          if (local_790._4_4_ < iVar7) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_798,uVar5 & 0xffffffff);
          }
          lVar8 = local_798 + lVar8 * 0x28;
          FText::FText(lVar8,local_508);
          *(undefined8 *)(lVar8 + 0x18) = 0;
          *(undefined8 *)(lVar8 + 0x18) = local_4f0;
          local_4f0 = 0;
          *(undefined4 *)(lVar8 + 0x20) = (undefined4)local_4e8;
          *(undefined4 *)(lVar8 + 0x24) = local_4e8._4_4_;
          local_4e8 = 0;
          FUN_14106ef40(local_508);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_290);
          if (local_728[8] != 0) {
            FMemory::Free();
          }
        }
        local_408 = local_788;
        plStack_400 = plStack_780;
        if (plStack_780 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_780 + 1) = (int)plStack_780[1] + 1;
          UNLOCK();
        }
        local_418 = local_778;
        plStack_410 = plStack_770;
        if (plStack_770 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_770 + 1) = (int)plStack_770[1] + 1;
          UNLOCK();
        }
        cVar6 = FUN_140ba5c70(*(undefined8 *)(param_1 + 0x3c0),&local_418,&local_408);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_418);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_408);
        uVar5 = local_7a0;
        if (cVar6 != '\0') {
          lVar8 = (longlong)(int)local_7a0;
          iVar7 = (int)local_7a0 + 1;
          local_7a0 = CONCAT44(local_7a0._4_4_,iVar7);
          if (local_7a0._4_4_ < iVar7) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_7a8,uVar5 & 0xffffffff);
          }
          local_728[10] = 0;
          local_728[0xb] = 6;
          local_7a8[lVar8] = 0x15;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_728 + 10,0);
          FGenericPlatformString::Memcpy(local_728[10],L"block",0xc);
          uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_278,L"Block Player via SHiFT",L"GFxLobbyWidget",
                             L"BlockShiftUserText");
          FText::FText(local_4e0,uVar9);
          FString::FString(&local_4c8,local_728 + 10);
          uVar5 = local_790;
          lVar8 = (longlong)(int)local_790;
          iVar7 = (int)local_790 + 1;
          local_790 = CONCAT44(local_790._4_4_,iVar7);
          if (local_790._4_4_ < iVar7) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_798,uVar5 & 0xffffffff);
          }
          lVar8 = local_798 + lVar8 * 0x28;
          FText::FText(lVar8,local_4e0);
          *(undefined8 *)(lVar8 + 0x18) = 0;
          *(undefined8 *)(lVar8 + 0x18) = local_4c8;
          local_4c8 = 0;
          *(undefined4 *)(lVar8 + 0x20) = (undefined4)local_4c0;
          *(undefined4 *)(lVar8 + 0x24) = local_4c0._4_4_;
          local_4c0 = 0;
          FUN_14106ef40(local_4e0);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_278);
          if (local_728[10] != 0) {
            FMemory::Free();
          }
        }
        local_3e8 = local_788;
        plStack_3e0 = plStack_780;
        if (plStack_780 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_780 + 1) = (int)plStack_780[1] + 1;
          UNLOCK();
        }
        local_3f8 = local_778;
        plStack_3f0 = plStack_770;
        if (plStack_770 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_770 + 1) = (int)plStack_770[1] + 1;
          UNLOCK();
        }
        cVar6 = FUN_140ba7970(*(undefined8 *)(param_1 + 0x3c0),&local_3f8,&local_3e8);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_3f8);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_3e8);
        uVar5 = local_7a0;
        if (cVar6 != '\0') {
          lVar8 = (longlong)(int)local_7a0;
          iVar7 = (int)local_7a0 + 1;
          local_7a0 = CONCAT44(local_7a0._4_4_,iVar7);
          if (local_7a0._4_4_ < iVar7) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_7a8,uVar5 & 0xffffffff);
          }
          local_728[0] = 0;
          local_728[1] = 8;
          local_7a8[lVar8] = 0x16;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_728,0);
          FGenericPlatformString::Memcpy(local_728[0],L"unblock",0x10);
          uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_1e8,L"Unblock Player via SHiFT",L"GFxLobbyWidget",
                             L"UnblockShiftUserText");
          FText::FText(local_4b8,uVar9);
          FString::FString(&local_4a0,local_728);
          uVar5 = local_790;
          lVar8 = (longlong)(int)local_790;
          iVar7 = (int)local_790 + 1;
          local_790 = CONCAT44(local_790._4_4_,iVar7);
          if (local_790._4_4_ < iVar7) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_798,uVar5 & 0xffffffff);
          }
          lVar8 = local_798 + lVar8 * 0x28;
          FText::FText(lVar8,local_4b8);
          *(undefined8 *)(lVar8 + 0x18) = 0;
          *(undefined8 *)(lVar8 + 0x18) = local_4a0;
          local_4a0 = 0;
          *(undefined4 *)(lVar8 + 0x20) = (undefined4)local_498;
          *(undefined4 *)(lVar8 + 0x24) = local_498._4_4_;
          local_498 = 0;
          FUN_14106ef40(local_4b8);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_1e8);
          if (local_728[0] != 0) {
            FMemory::Free();
          }
        }
        local_3d8 = local_788;
        plStack_3d0 = plStack_780;
        if (plStack_780 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_780 + 1) = (int)plStack_780[1] + 1;
          UNLOCK();
        }
        cVar6 = FUN_140ba78a0(*(undefined8 *)(param_1 + 0x3c0),&local_3d8);
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_3d8);
        uVar5 = local_7a0;
        if (cVar6 != '\0') {
          lVar8 = (longlong)(int)local_7a0;
          iVar7 = (int)local_7a0 + 1;
          local_7a0 = CONCAT44(local_7a0._4_4_,iVar7);
          if (local_7a0._4_4_ < iVar7) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_7a8,uVar5 & 0xffffffff);
          }
          local_728[2] = 0;
          local_728[3] = 7;
          local_7a8[lVar8] = 0x17;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_728 + 2,0);
          FGenericPlatformString::Memcpy(local_728[2],L"report",0xe);
          uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_260,L"Report SHiFT Player",L"GFxLobbyWidget",
                             L"ReportShiftPlayerText");
          FText::FText(local_490,uVar9);
          FString::FString(&local_478,local_728 + 2);
          uVar5 = local_790;
          lVar8 = (longlong)(int)local_790;
          iVar7 = (int)local_790 + 1;
          local_790 = CONCAT44(local_790._4_4_,iVar7);
          if (local_790._4_4_ < iVar7) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(&local_798,uVar5 & 0xffffffff);
          }
          lVar8 = local_798 + lVar8 * 0x28;
          FText::FText(lVar8,local_490);
          *(undefined8 *)(lVar8 + 0x18) = 0;
          *(undefined8 *)(lVar8 + 0x18) = local_478;
          local_478 = 0;
          *(undefined4 *)(lVar8 + 0x20) = (undefined4)local_470;
          *(undefined4 *)(lVar8 + 0x24) = local_470._4_4_;
          local_470 = 0;
          FUN_14106ef40(local_490);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_260);
          if (local_728[2] != 0) {
            FMemory::Free();
          }
        }
        if (0 < (int)local_790) {
          ppuVar3 = (undefined1 **)(param_1 + 0x3d0);
          if (ppuVar3 != &local_7a8) {
            *(int *)(param_1 + 0x3d8) = (int)local_7a0;
            if (((int)local_7a0 == 0) && (*(int *)(param_1 + 0x3dc) == 0)) {
              *(undefined4 *)(param_1 + 0x3dc) = 0;
            }
            else {
              _Size = (size_t)(int)local_7a0;
              TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(ppuVar3,local_7a0 & 0xffffffff)
              ;
              _guard_xfg_dispatch_icall_nop(*ppuVar3,local_7a8,_Size);
            }
          }
          lVar8 = *param_3;
          if (((((lVar8 == DAT_1468745d8) || (lVar8 == DAT_1468745e0)) || (lVar8 == DAT_1468745e8))
              || ((lVar8 == DAT_1468745f0 || (lVar8 == DAT_1468745f8)))) ||
             ((lVar8 == DAT_1468746d0 || (lVar8 == DAT_1468746d8)))) {
            uVar11 = 0;
          }
          else {
            uVar11 = 1;
          }
          local_460 = local_788;
          local_468[0] = 1;
          local_458 = plStack_780;
          if (plStack_780 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_780 + 1) = (int)plStack_780[1] + 1;
            UNLOCK();
          }
          puVar10 = (undefined8 *)FName::FName(local_2e8,L"OnPlayerOptionSelected",1);
          local_7b8 = *puVar10;
          local_7b0 = uVar11;
          FUN_1410a6c30(param_1,local_468,&local_798,local_560);
          FKey::~FKey(local_468);
          cVar6 = BuildSettings::IsPromotedBuild();
          plVar4 = plStack_780;
          lVar8 = local_788;
          if (cVar6 == '\0') {
            local_570 = local_788;
            local_568 = plStack_780;
            if (plStack_780 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_780 + 1) = (int)plStack_780[1] + 1;
              UNLOCK();
            }
            local_118 = 0;
            local_108 = 0;
            local_578 = param_1;
            puVar10 = (undefined8 *)FUN_140438ef0(0x20,local_138);
            if (puVar10 != (undefined8 *)0x0) {
              local_568 = (longlong *)0x0;
              *puVar10 = &PTR_FUN_14467a5d8;
              puVar10[1] = param_1;
              puVar10[2] = lVar8;
              puVar10[3] = plVar4;
              local_570 = 0;
            }
            local_148[0] = FUN_14107da40;
            FUN_14204c280(local_148);
            FKey::~FKey(&local_578);
          }
        }
        FUN_140f184a0(local_f8);
        TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>::
        ~TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>(&local_798);
        if (local_7a8 != (undefined1 *)0x0) {
          FMemory::Free();
        }
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_788);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_778);
    }
  }
  return;
}



// FUNCTION 14109ac90 FUN_14109ac90 body=119 status=ok
// SIG undefined FUN_14109ac90(void)

void FUN_14109ac90(longlong param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = UXGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14109ace6;
  }
  param_2 = 0;
LAB_14109ace6:
  FUN_1404cb7e0(param_1 + 0x328,param_2,param_3);
  return;
}



// FUNCTION 14109ad10 FUN_14109ad10 body=100 status=ok
// SIG undefined FUN_14109ad10(void)

void FUN_14109ad10(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x268) = 0;
    FUN_141095be0(param_1,*(undefined8 *)(param_2 + 0x2c8));
    FUN_1410854a0(param_1);
    if ((*(char *)(param_1 + 0x3a8) == '\0') &&
       ((*(longlong *)(param_1 + 0x348) == 0 ||
        (*(char *)(*(longlong *)(param_1 + 0x348) + 0x1e8) == '\0')))) {
      FUN_141087770(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 14109ad80 FUN_14109ad80 body=129 status=ok
// SIG undefined FUN_14109ad80(void)

void FUN_14109ad80(longlong param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = UXGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(param_2 + 0x2d8);
      FUN_1404cb7e0(param_1 + 0x338,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 14109ae40 FUN_14109ae40 body=118 status=ok
// SIG undefined FUN_14109ae40(void)

void FUN_14109ae40(longlong param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = UXGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_1404cb7e0(param_1 + 0x348,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 14109aec0 FUN_14109aec0 body=3202 status=ok
// SIG undefined FUN_14109aec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14109aec0(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  DWORD DVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 uVar14;
  undefined1 auStack_3e8 [32];
  undefined2 local_3c8;
  longlong local_3b8;
  longlong *plStack_3b0;
  longlong local_3a8;
  longlong *plStack_3a0;
  longlong local_398;
  longlong local_390;
  undefined8 local_388;
  undefined8 local_380;
  longlong local_370;
  undefined4 local_368;
  undefined1 local_364;
  longlong local_360;
  longlong local_358;
  longlong *local_350;
  undefined1 local_348;
  longlong local_340;
  longlong local_338;
  longlong *local_330;
  longlong local_328;
  longlong *plStack_320;
  longlong local_318;
  longlong *plStack_310;
  longlong local_308;
  longlong *plStack_300;
  longlong local_2f8;
  longlong *plStack_2f0;
  longlong local_2e8;
  longlong *plStack_2e0;
  longlong local_2d8;
  longlong *plStack_2d0;
  longlong local_2c8;
  longlong *plStack_2c0;
  longlong local_2b8;
  longlong *plStack_2b0;
  longlong local_2a8;
  longlong *plStack_2a0;
  longlong local_298;
  longlong *plStack_290;
  longlong local_288;
  longlong *plStack_280;
  longlong local_278;
  longlong *plStack_270;
  longlong local_268;
  longlong *plStack_260;
  longlong local_258;
  longlong *plStack_250;
  longlong local_248;
  longlong *plStack_240;
  longlong local_238;
  longlong *plStack_230;
  longlong local_228;
  longlong *plStack_220;
  longlong local_218;
  longlong *plStack_210;
  longlong local_208;
  longlong *plStack_200;
  longlong local_1f8;
  longlong *plStack_1f0;
  longlong local_1e8;
  longlong *plStack_1e0;
  longlong local_1d8;
  longlong *plStack_1d0;
  code *local_1c8 [2];
  undefined1 local_1b8 [32];
  undefined8 local_198;
  undefined4 local_188;
  undefined1 local_178 [80];
  undefined1 local_128 [192];
  longlong local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_3e8;
  local_338 = param_2;
  local_330 = param_3;
  if ((((*(longlong *)(param_1 + 0x2e8) == 0) || (*(longlong *)(param_1 + 0x3c0) == 0)) ||
      (*(char *)(param_1 + 0x3cd) != '\0')) ||
     (lVar7 = FUN_142eb6a30(*(longlong *)(param_1 + 0x2e8),*(undefined4 *)(param_1 + 0x3c8)),
     local_340 = lVar7, lVar7 == 0)) goto LAB_14109ba69;
  lVar8 = UXGameInstance::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) goto LAB_14109ba69;
  local_398 = param_3[2];
  plVar13 = (longlong *)param_3[4];
  lVar8 = param_3[1];
  uVar14 = *(undefined1 *)((longlong)param_3 + 0xc);
  lVar7 = *param_3;
  local_390 = param_3[3];
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  lVar11 = param_3[5];
  local_198 = 0;
  local_188 = 0;
  local_370 = lVar7;
  local_368 = (int)lVar8;
  local_364 = uVar14;
  local_360 = local_398;
  local_358 = local_390;
  local_350 = plVar13;
  local_348 = (char)lVar11;
  puVar9 = (undefined8 *)FUN_140438ef0(0x40,local_1b8);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_FUN_14468e9c8;
    puVar9[1] = param_1;
    puVar9[2] = lVar7;
    *(int *)(puVar9 + 3) = (int)lVar8;
    *(undefined1 *)((longlong)puVar9 + 0x1c) = uVar14;
    puVar9[4] = local_398;
    puVar9[5] = local_390;
    puVar9[6] = plVar13;
    uVar14 = (char)lVar11;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      plVar13 = local_350;
      uVar14 = local_348;
    }
    *(undefined1 *)(puVar9 + 7) = uVar14;
  }
  local_380 = 0x38;
  local_1c8[0] = FUN_14107d370;
  local_388 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_388,0);
  local_3c8 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_388,0x38,"UGFxLobbyWidget::OnPlayerOptionSelected::GetLocalUserID");
  FUN_14106d6c0(local_128,&local_388,local_1c8);
  plVar12 = local_350;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar13 + 1;
    lVar7 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_350)(local_350);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_350 + 8))(local_350,1);
      }
    }
  }
  uVar10 = FUN_1410817c0(local_128,local_178);
  FUN_14204c280(uVar10);
  lVar7 = local_68;
  if (local_68 != 0) {
LAB_14109b178:
    if (local_68 == 0) goto LAB_14109b187;
    if (*(char *)(local_68 + 0x58) != '\0') goto LAB_14109b187;
    bVar4 = false;
    do {
      lVar7 = local_68;
      if (bVar4) break;
      cVar5 = FUN_1415ad720(&DAT_1468e2448);
      if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
        DVar6 = GetCurrentThreadId();
        bVar4 = false;
        if (DVar6 == DAT_1468c21c0) goto LAB_14109b1bc;
      }
      else {
LAB_14109b1bc:
        bVar4 = true;
      }
      if (bVar4) {
        FUN_142036de0();
      }
      else {
        lVar7 = FUN_14203ca70();
        if (lVar7 != 0) {
          FUN_1420714f0(lVar7);
        }
      }
      if ((local_68 == 0) || (*(char *)(local_68 + 0x58) != '\0')) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) goto LAB_14109b178;
      if (local_68 != 0) goto code_r0x00014109b1fc;
LAB_14109b187:
      bVar4 = true;
    } while( true );
  }
  cVar5 = *(char *)(lVar7 + 0x58);
  while (cVar5 == '\0') {
    (**(code **)(**(longlong **)(lVar7 + 0x50) + 0x20))(*(longlong **)(lVar7 + 0x50),0x5d638865,0);
    cVar5 = *(char *)(lVar7 + 0x58);
  }
  plStack_3b0 = *(longlong **)(lVar7 + 0x68);
  lVar7 = *(longlong *)(lVar7 + 0x60);
  if (plStack_3b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_3b0 + 1) = (int)plStack_3b0[1] + 1;
    UNLOCK();
  }
  local_3b8 = lVar7;
  if (*(longlong *)(local_340 + 0x308) == 0) {
    local_3a8 = 0;
    plStack_3a0 = (longlong *)0x0;
  }
  else {
    FUN_1411e6060(*(longlong *)(local_340 + 0x308),&local_3a8);
  }
  lVar8 = local_338;
  if ((lVar7 == 0) || (local_3a8 == 0)) goto switchD_14109b377_caseD_7;
  if (local_338 == 0) {
LAB_14109b353:
    uVar14 = 0x18;
  }
  else {
    lVar11 = URemnantGameInstance::GetPrivateStaticClass();
    lVar7 = *(longlong *)(lVar8 + 0x10);
    if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
        lVar11 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14109b353;
    iVar3 = *(int *)(lVar8 + 0x2d8);
    if ((iVar3 < 0) || (*(int *)(param_1 + 0x3d8) <= iVar3)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14109b353;
    uVar14 = *(undefined1 *)((longlong)iVar3 + *(longlong *)(param_1 + 0x3d0));
  }
  switch(uVar14) {
  case 5:
    if (plStack_3a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_3a0 + 1) = (int)plStack_3a0[1] + 1;
      UNLOCK();
    }
    local_318 = local_3b8;
    plStack_310 = plStack_3b0;
    if (plStack_3b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_3b0 + 1) = (int)plStack_3b0[1] + 1;
      UNLOCK();
    }
    local_308 = local_3a8;
    plStack_300 = plStack_3a0;
    FUN_140bcd520(*(undefined8 *)(param_1 + 0x3c0),&local_318,&local_308);
    plVar13 = plStack_310;
    plVar12 = plStack_300;
    if (plStack_310 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_310 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_310)(plStack_310);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar12 = plStack_300;
        if (iVar3 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
          plVar12 = plStack_300;
        }
      }
    }
    break;
  case 6:
    if (plStack_3a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_3a0 + 1) = (int)plStack_3a0[1] + 1;
      UNLOCK();
    }
    local_2f8 = local_3b8;
    plStack_2f0 = plStack_3b0;
    if (plStack_3b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_3b0 + 1) = (int)plStack_3b0[1] + 1;
      UNLOCK();
    }
    local_2e8 = local_3a8;
    plStack_2e0 = plStack_3a0;
    FUN_140bf3290(*(undefined8 *)(param_1 + 0x3c0),&local_2f8,&local_2e8);
    plVar13 = plStack_2f0;
    plVar12 = plStack_2e0;
    if (plStack_2f0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_2f0 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_2f0)(plStack_2f0);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar12 = plStack_2e0;
        if (iVar3 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
          plVar12 = plStack_2e0;
        }
      }
    }
    break;
  default:
    goto switchD_14109b377_caseD_7;
  case 8:
    if (plStack_3a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_3a0 + 1) = (int)plStack_3a0[1] + 1;
      UNLOCK();
    }
    local_328 = local_3a8;
    plStack_320 = plStack_3a0;
    FUN_140bcbd60(*(undefined8 *)(param_1 + 0x3c0),&local_328);
    plVar12 = plStack_320;
    break;
  case 9:
    if (plStack_3a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_3a0 + 1) = (int)plStack_3a0[1] + 1;
      UNLOCK();
    }
    local_1d8 = local_3a8;
    plStack_1d0 = plStack_3a0;
    cVar5 = FUN_140ba67b0(*(undefined8 *)(param_1 + 0x3c0),&local_1d8);
    plVar13 = plStack_1d0;
    if (plStack_1d0 != (longlong *)0x0) {
      LOCK();
      plVar12 = plStack_1d0 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_1d0)(plStack_1d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    if (cVar5 != '\0') {
      FUN_141087360(param_1,&local_3a8);
    }
    goto switchD_14109b377_caseD_7;
  case 10:
    if (plStack_3a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_3a0 + 1) = (int)plStack_3a0[1] + 1;
      UNLOCK();
    }
    local_2d8 = local_3b8;
    plStack_2d0 = plStack_3b0;
    if (plStack_3b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_3b0 + 1) = (int)plStack_3b0[1] + 1;
      UNLOCK();
    }
    local_2c8 = local_3a8;
    plStack_2c0 = plStack_3a0;
    FUN_140bf76e0(*(undefined8 *)(param_1 + 0x3c0),&local_2d8,&local_2c8);
    plVar13 = plStack_2d0;
    plVar12 = plStack_2c0;
    if (plStack_2d0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_2d0 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_2d0)(plStack_2d0);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar12 = plStack_2c0;
        if (iVar3 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
          plVar12 = plStack_2c0;
        }
      }
    }
    break;
  case 0xb:
    if (plStack_3a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_3a0 + 1) = (int)plStack_3a0[1] + 1;
      UNLOCK();
    }
    local_2b8 = local_3b8;
    plStack_2b0 = plStack_3b0;
    if (plStack_3b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_3b0 + 1) = (int)plStack_3b0[1] + 1;
      UNLOCK();
    }
    local_2a8 = local_3a8;
    plStack_2a0 = plStack_3a0;
    FUN_140ba2740(*(undefined8 *)(param_1 + 0x3c0),&local_2b8,&local_2a8);
    plVar13 = plStack_2b0;
    plVar12 = plStack_2a0;
    if (plStack_2b0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_2b0 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_2b0)(plStack_2b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar12 = plStack_2a0;
        if (iVar3 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
          plVar12 = plStack_2a0;
        }
      }
    }
    break;
  case 0xc:
    if (plStack_3a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_3a0 + 1) = (int)plStack_3a0[1] + 1;
      UNLOCK();
    }
    local_298 = local_3b8;
    plStack_290 = plStack_3b0;
    if (plStack_3b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_3b0 + 1) = (int)plStack_3b0[1] + 1;
      UNLOCK();
    }
    local_288 = local_3a8;
    plStack_280 = plStack_3a0;
    FUN_140be79e0(*(undefined8 *)(param_1 + 0x3c0),&local_298,&local_288);
    plVar13 = plStack_290;
    plVar12 = plStack_280;
    if (plStack_290 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_290 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_290)(plStack_290);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar12 = plStack_280;
        if (iVar3 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
          plVar12 = plStack_280;
        }
      }
    }
    break;
  case 0x13:
    if (plStack_3a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_3a0 + 1) = (int)plStack_3a0[1] + 1;
      UNLOCK();
    }
    local_278 = local_3b8;
    plStack_270 = plStack_3b0;
    if (plStack_3b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_3b0 + 1) = (int)plStack_3b0[1] + 1;
      UNLOCK();
    }
    local_268 = local_3a8;
    plStack_260 = plStack_3a0;
    FUN_140ba33a0(*(undefined8 *)(param_1 + 0x3c0),&local_278,&local_268);
    plVar13 = plStack_270;
    plVar12 = plStack_260;
    if (plStack_270 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_270 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_270)(plStack_270);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar12 = plStack_260;
        if (iVar3 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
          plVar12 = plStack_260;
        }
      }
    }
    break;
  case 0x14:
    if (plStack_3a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_3a0 + 1) = (int)plStack_3a0[1] + 1;
      UNLOCK();
    }
    local_258 = local_3b8;
    plStack_250 = plStack_3b0;
    if (plStack_3b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_3b0 + 1) = (int)plStack_3b0[1] + 1;
      UNLOCK();
    }
    local_248 = local_3a8;
    plStack_240 = plStack_3a0;
    FUN_140be8230(*(undefined8 *)(param_1 + 0x3c0),&local_258,&local_248);
    plVar13 = plStack_250;
    plVar12 = plStack_240;
    if (plStack_250 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_250 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_250)(plStack_250);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar12 = plStack_240;
        if (iVar3 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
          plVar12 = plStack_240;
        }
      }
    }
    break;
  case 0x15:
    if (plStack_3a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_3a0 + 1) = (int)plStack_3a0[1] + 1;
      UNLOCK();
    }
    local_238 = local_3b8;
    plStack_230 = plStack_3b0;
    if (plStack_3b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_3b0 + 1) = (int)plStack_3b0[1] + 1;
      UNLOCK();
    }
    local_228 = local_3a8;
    plStack_220 = plStack_3a0;
    FUN_140ba4e10(*(undefined8 *)(param_1 + 0x3c0),&local_238,&local_228);
    plVar13 = plStack_230;
    plVar12 = plStack_220;
    if (plStack_230 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_230 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_230)(plStack_230);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar12 = plStack_220;
        if (iVar3 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
          plVar12 = plStack_220;
        }
      }
    }
    break;
  case 0x16:
    if (plStack_3a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_3a0 + 1) = (int)plStack_3a0[1] + 1;
      UNLOCK();
    }
    local_218 = local_3b8;
    plStack_210 = plStack_3b0;
    if (plStack_3b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_3b0 + 1) = (int)plStack_3b0[1] + 1;
      UNLOCK();
    }
    local_208 = local_3a8;
    plStack_200 = plStack_3a0;
    FUN_140bf3110(*(undefined8 *)(param_1 + 0x3c0),&local_218,&local_208);
    plVar13 = plStack_210;
    plVar12 = plStack_200;
    if (plStack_210 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_210 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_210)(plStack_210);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar12 = plStack_200;
        if (iVar3 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
          plVar12 = plStack_200;
        }
      }
    }
    break;
  case 0x17:
    if (plStack_3a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_3a0 + 1) = (int)plStack_3a0[1] + 1;
      UNLOCK();
    }
    local_1f8 = local_3b8;
    plStack_1f0 = plStack_3b0;
    if (plStack_3b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_3b0 + 1) = (int)plStack_3b0[1] + 1;
      UNLOCK();
    }
    local_1e8 = local_3a8;
    plStack_1e0 = plStack_3a0;
    FUN_140be8540(*(undefined8 *)(param_1 + 0x3c0),&local_1f8,&local_1e8);
    plVar13 = plStack_1f0;
    plVar12 = plStack_1e0;
    if (plStack_1f0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_1f0 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_1f0)(plStack_1f0);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar12 = plStack_1e0;
        if (iVar3 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
          plVar12 = plStack_1e0;
        }
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar12 + 1;
    lVar7 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
switchD_14109b377_caseD_7:
  plVar13 = plStack_3a0;
  if (plStack_3a0 != (longlong *)0x0) {
    LOCK();
    plVar12 = plStack_3a0 + 1;
    lVar7 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_3a0)(plStack_3a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  plVar13 = plStack_3b0;
  if (plStack_3b0 != (longlong *)0x0) {
    LOCK();
    plVar12 = plStack_3b0 + 1;
    lVar7 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_3b0)(plStack_3b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_3b0 + 8))(plStack_3b0,1);
      }
    }
  }
  FUN_140ce1dc0(local_128);
  param_3 = local_330;
LAB_14109ba69:
  lVar7 = *param_3;
  if (((((lVar7 == DAT_1468745d8) || (lVar7 == DAT_1468745e0)) || (lVar7 == DAT_1468745e8)) ||
      ((lVar7 == DAT_1468745f0 || (lVar7 == DAT_1468745f8)))) ||
     ((lVar7 == DAT_1468746d0 || (lVar7 == DAT_1468746d8)))) {
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
  FUN_1410850c0(param_1,uVar10);
  lVar7 = *param_3;
  if ((((lVar7 == DAT_1468745d8) || (lVar7 == DAT_1468745e0)) ||
      ((lVar7 == DAT_1468745e8 ||
       (((lVar7 == DAT_1468745f0 || (lVar7 == DAT_1468745f8)) || (lVar7 == DAT_1468746d0)))))) ||
     (lVar7 == DAT_1468746d8)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((!bVar4) && (*(longlong *)(param_1 + 0x350) != 0)) {
    FUN_142f0d400(*(longlong *)(param_1 + 0x350),*(undefined8 *)(param_1 + 0x2e8),0);
  }
  return;
code_r0x00014109b1fc:
  (**(code **)(**(longlong **)(local_68 + 0x50) + 0x20))();
  goto LAB_14109b178;
}



// FUNCTION 14109bb90 FUN_14109bb90 body=933 status=ok
// SIG undefined FUN_14109bb90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14109bb90(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  bool bVar11;
  longlong *plVar12;
  undefined1 uVar13;
  longlong *plVar14;
  uint uVar15;
  undefined1 auStack_488 [32];
  undefined1 local_468;
  uint local_464;
  undefined8 local_460;
  longlong *plStack_458;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined1 *local_428 [2];
  undefined1 local_418 [32];
  undefined8 local_3f8;
  undefined4 local_3e8;
  undefined1 local_3d8 [896];
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_488;
  if (param_1[0xc6] == 0) {
    return;
  }
  FUN_142dc1ad0(local_3d8);
  FUN_142dcd6e0(param_2,local_3d8,0);
  plVar5 = (longlong *)FWeakObjectPtr::Get(local_3d8);
  uVar15 = (uint)local_58;
  local_464 = uVar15;
  if (plVar5 == (longlong *)0x0) {
LAB_14109bca7:
    plVar7 = (longlong *)0x0;
    plVar12 = plVar5;
  }
  else {
    lVar6 = FUN_1413ffd50();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if ((bVar11) && (uVar15 == 1)) {
      (**(code **)(*param_1 + 0x580))(param_1,local_58);
      return;
    }
    plVar7 = (longlong *)(**(code **)(*plVar5 + 0x680))(plVar5);
    if (plVar7 == (longlong *)0x0) goto LAB_14109bca7;
    lVar6 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    plVar12 = plVar7;
    if (!bVar11) goto LAB_14109bca7;
  }
  uVar13 = 0;
  local_460 = (longlong *)0x0;
  plStack_458 = (longlong *)0x0;
  plVar5 = local_460;
  plVar14 = plStack_458;
  if (plVar12 == (longlong *)0x0) {
LAB_14109bd2c:
    cVar3 = '\0';
  }
  else {
    uVar8 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(plVar12,uVar8);
    plVar5 = local_460;
    plVar14 = plStack_458;
    if (plVar9 == (longlong *)0x0) goto LAB_14109bd2c;
    if (((plVar7 == (longlong *)0x0) &&
        (lVar6 = (**(code **)(*plVar12 + 0x680))(plVar12), lVar6 == 0)) || (local_58 != 0)) {
      uVar13 = 0;
    }
    else {
      uVar13 = 1;
    }
    cVar3 = (**(code **)(*plVar9 + 0x80))(plVar9);
    plVar5 = plVar12;
    plVar14 = plVar9;
    if (cVar3 == '\0') goto LAB_14109bd2c;
    cVar3 = '\x01';
  }
  cVar1 = *(char *)(param_1[0xc6] + 0x2b2);
  local_468 = cVar1 == '\x03';
  if (((cVar3 == '\0') || (plVar5 == (longlong *)0x0)) || (plVar14 == (longlong *)0x0)) {
    bVar11 = false;
  }
  else {
    lVar6 = *plVar14;
    uVar8 = FUN_140eccc40(param_1);
    cVar4 = (**(code **)(lVar6 + 0x88))(plVar14,0,uVar8);
    bVar11 = 1 < (byte)(cVar4 - 2U);
  }
  uVar15 = local_464;
  if ((cVar3 == '\0') || (bVar11 == false)) {
    if (cVar1 != '\x03') {
      local_460 = (longlong *)0x0;
      plStack_458 = (longlong *)0x0;
      FUN_140ffb870(param_1[0xc6],&local_460,0,1);
      uVar15 = local_464;
    }
  }
  else {
    plStack_458 = (longlong *)0x0;
    if (plVar5 != (longlong *)0x0) {
      plStack_458 = plVar14;
    }
    local_460 = plVar5;
    FUN_140ffb870(param_1[0xc6],&local_460,uVar13,local_464);
  }
  if (plVar5 != (longlong *)0x0) {
    lVar6 = FUN_1428dfc70();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_14109be23;
  }
  plVar5 = (longlong *)0x0;
LAB_14109be23:
  FWeakObjectPtr::operator=(&local_460,plVar5);
  FWeakObjectPtr::operator=(&local_43c,param_1[0xc6]);
  FWeakObjectPtr::operator=(&local_444,param_1);
  local_464 = local_43c;
  local_450 = local_438;
  local_44c = (undefined4)local_460;
  local_448 = local_460._4_4_;
  local_3f8 = 0;
  local_3e8 = 0;
  puVar10 = (undefined8 *)FUN_140438ef0(0x30,local_418);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_FUN_14468e728;
    puVar10[1] = param_1;
    *(undefined4 *)(puVar10 + 2) = local_444;
    *(undefined4 *)((longlong)puVar10 + 0x14) = local_440;
    *(uint *)(puVar10 + 3) = local_464;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = local_450;
    *(undefined4 *)(puVar10 + 4) = local_44c;
    *(undefined4 *)((longlong)puVar10 + 0x24) = local_448;
    *(undefined1 *)(puVar10 + 5) = local_468;
    *(char *)((longlong)puVar10 + 0x29) = cVar3;
    *(bool *)((longlong)puVar10 + 0x2a) = bVar11;
    *(undefined1 *)((longlong)puVar10 + 0x2b) = uVar13;
    *(uint *)((longlong)puVar10 + 0x2c) = uVar15;
  }
  local_428[0] = &LAB_14107d8a0;
  FUN_14208c4f0(param_1,local_428);
  return;
}



// FUNCTION 14109bf40 FUN_14109bf40 body=230 status=ok
// SIG undefined FUN_14109bf40(void)

void FUN_14109bf40(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x3b0);
  if (lVar2 != 0) {
    lVar3 = UMovieScene3DTransformSection::GetPrivateStaticClass();
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
      lVar2 = FUN_140f9aee0(lVar2);
      goto LAB_14109bfb3;
    }
  }
  lVar2 = 0;
LAB_14109bfb3:
  puVar4 = (undefined8 *)FName::FName(local_res8,L"GbxShiftOverlay",1);
  lVar3 = FModuleManager::GetModulePtr_Internal(*puVar4);
  if ((lVar3 != 0) && (lVar2 != 0)) {
    FUN_140bd6bd0(lVar2,param_2,param_3,param_4);
    plVar5 = (longlong *)FName::FName(local_res8,&DAT_14467c154,1);
    if (param_3 == *plVar5) {
      FUN_140be5070(lVar2);
    }
  }
  return;
}



// FUNCTION 14109c030 FUN_14109c030 body=606 status=ok
// SIG undefined FUN_14109c030(void)

void FUN_14109c030(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *plStack_30;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  if ((*(longlong *)(param_1 + 0x3c0) != 0) && (param_2 != 0)) {
    lVar6 = URemnantGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      iVar3 = *(int *)(param_2 + 0x2d8);
      if ((iVar3 < 0) || (*(int *)(param_1 + 1000) <= iVar3)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        FUN_1410827d0(param_1,&local_38,*(undefined4 *)(param_3 + 8));
        lVar6 = (longlong)iVar3 * 0x18;
        plStack_40 = *(longlong **)(lVar6 + 8 + *(longlong *)(param_1 + 0x3e0));
        local_48 = *(longlong *)(lVar6 + *(longlong *)(param_1 + 0x3e0));
        if (plStack_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
          UNLOCK();
        }
        if ((local_38 != 0) && (local_48 != 0)) {
          iVar3 = *(int *)(lVar6 + 0x10 + *(longlong *)(param_1 + 0x3e0));
          if (iVar3 == 0) {
            FUN_141083cf0(param_1,*(undefined4 *)(param_3 + 8),&local_48);
          }
          else if (iVar3 == 1) {
            if (plStack_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
              UNLOCK();
            }
            local_28 = local_38;
            plStack_20 = plStack_30;
            if (plStack_30 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
              UNLOCK();
            }
            local_18 = local_48;
            plStack_10 = plStack_40;
            FUN_140bcaeb0(*(undefined8 *)(param_1 + 0x3c0),&local_28,&local_18);
            plVar5 = plStack_20;
            if (plStack_20 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_20 + 1;
              lVar6 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
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
            plVar5 = plStack_10;
            if (plStack_10 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_10 + 1;
              lVar6 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar6 == 1) {
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
          }
        }
        plVar5 = plStack_40;
        if (plStack_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_40 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
        plVar5 = plStack_30;
        if (plStack_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_30 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plStack_30)(plStack_30);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plStack_30 + 8))(plStack_30,1);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14109c290 FUN_14109c290 body=80 status=ok
// SIG undefined FUN_14109c290(void)

void FUN_14109c290(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *local_58 [2];
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
  local_58[0] = &LAB_14107d920;
  FUN_14204c280(local_58);
  return;
}



// FUNCTION 14109c2e0 FUN_14109c2e0 body=87 status=ok
// SIG undefined FUN_14109c2e0(void)

void FUN_14109c2e0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *local_58 [2];
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
  local_58[0] = &LAB_14107d920;
  FUN_14204c280(local_58);
  FUN_1410854a0(param_1);
  return;
}



// FUNCTION 14109c340 FUN_14109c340 body=193 status=ok
// SIG undefined FUN_14109c340(void)

undefined8 FUN_14109c340(longlong param_1,float param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar2 = *(int *)(param_1 + 0x230);
  iVar3 = iVar2 + -1;
  if (-1 < iVar3) {
    lVar4 = (longlong)iVar3 << 5;
    do {
      *(float *)(lVar4 + 0x18 + *(longlong *)(param_1 + 0x228)) =
           *(float *)(lVar4 + 0x18 + *(longlong *)(param_1 + 0x228)) - param_2;
      pfVar1 = (float *)(lVar4 + 0x18 + *(longlong *)(param_1 + 0x228));
      if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
        FUN_1410a3e50(param_1 + 0x228,iVar3,1,1);
      }
      lVar4 = lVar4 + -0x20;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    iVar2 = *(int *)(param_1 + 0x230);
  }
  if (iVar2 == 0) {
    *(undefined8 *)(param_1 + 0x240) = 0;
    return 0;
  }
  return CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
}



// FUNCTION 14109c410 FUN_14109c410 body=39 status=ok
// SIG undefined FUN_14109c410(void)

void FUN_14109c410(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FUN_1411ecbf0();
  }
  FUN_142ecb060(param_1);
  return;
}



// FUNCTION 14109c450 FUN_14109c450 body=23 status=ok
// SIG undefined FUN_14109c450(void)

void FUN_14109c450(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x2e8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014109c45f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x300))();
    return;
  }
  return;
}



// FUNCTION 14109c470 FUN_14109c470 body=176 status=ok
// SIG undefined FUN_14109c470(void)

void FUN_14109c470(longlong param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    lVar3 = URemnantGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (((*(int *)(param_1 + 0x348) == 0) || (*(longlong **)(param_1 + 0x340) == (longlong *)0x0))
         || (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x340) + 0x18))(), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if (*(int *)(param_1 + 0x348) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = *(longlong **)(param_1 + 0x340);
        }
        (**(code **)(*plVar4 + 0x40))(plVar4,param_2,param_3);
      }
    }
  }
  return;
}



// FUNCTION 14109c520 FUN_14109c520 body=191 status=ok
// SIG undefined FUN_14109c520(void)

void FUN_14109c520(longlong param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    lVar3 = URemnantGameInstance::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_2 + 0x2d8);
      if (((*(int *)(param_1 + 0x338) == 0) || (*(longlong **)(param_1 + 0x330) == (longlong *)0x0))
         || (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x330) + 0x18))(), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if (*(int *)(param_1 + 0x338) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = *(longlong **)(param_1 + 0x330);
        }
        (**(code **)(*plVar4 + 0x40))(plVar4,param_1,param_2,param_3);
      }
    }
  }
  return;
}



// FUNCTION 14109c5e0 FUN_14109c5e0 body=88 status=ok
// SIG undefined FUN_14109c5e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14109c5e0(longlong param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x358) != 0) && (*(longlong **)(param_1 + 0x350) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x350) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x358) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014109c620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x350) + 0x40))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014109c62e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x40))();
      return;
    }
  }
  return;
}



// FUNCTION 14109c640 FUN_14109c640 body=494 status=ok
// SIG undefined FUN_14109c640(void)

void FUN_14109c640(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  
  cVar3 = FUN_141087530();
  if (cVar3 == '\0') {
    FUN_141084a70(param_1);
    return;
  }
  if ((*(longlong *)(param_1 + 0x348) == 0) || (*(longlong *)(param_1 + 0x350) == 0))
  goto LAB_14109c7f5;
  FUN_1410a8c80();
  if (((*(char *)(*(longlong *)(param_1 + 0x348) + 0x1e8) != '\0') &&
      ((((lVar1 = *param_3, lVar1 != DAT_1468745d8 && (lVar1 != DAT_1468745e0)) &&
        (lVar1 != DAT_1468745e8)) && ((lVar1 != DAT_1468745f0 && (lVar1 != DAT_1468745f8)))))) &&
     ((lVar1 != DAT_1468746d0 && (lVar1 != DAT_1468746d8)))) {
    FUN_142f0d400(*(undefined8 *)(param_1 + 0x350),*(longlong *)(param_1 + 0x348),0);
    lVar1 = *(longlong *)(param_1 + 0x348);
    if (*(char *)(lVar1 + 0x1e8) != '\0') {
      plVar2 = *(longlong **)(lVar1 + 0x1a8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x2b8))(plVar2,0,0,0);
      }
      plVar2 = *(longlong **)(lVar1 + 0x1b8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x2b8))(plVar2,0xffffffff,0);
        *(undefined4 *)(*(longlong *)(lVar1 + 0x1b8) + 0x274) = 0xffffffff;
      }
    }
    goto LAB_14109c7f5;
  }
  lVar1 = *param_3;
  if (lVar1 == DAT_1468745d8) {
LAB_14109c7ce:
    uVar4 = 1;
  }
  else {
    if (((lVar1 != DAT_1468745e0) && (lVar1 != DAT_1468745e8)) &&
       ((lVar1 != DAT_1468745f0 &&
        (((lVar1 != DAT_1468745f8 && (lVar1 != DAT_1468746d0)) && (lVar1 != DAT_1468746d8))))))
    goto LAB_14109c7f5;
    if (((lVar1 == DAT_1468745d8) || (lVar1 == DAT_1468745e0)) ||
       ((lVar1 == DAT_1468745e8 ||
        (((lVar1 == DAT_1468745f0 || (lVar1 == DAT_1468745f8)) ||
         ((lVar1 == DAT_1468746d0 || (lVar1 == DAT_1468746d8)))))))) goto LAB_14109c7ce;
    uVar4 = 0;
  }
  FUN_142f0d400(*(undefined8 *)(param_1 + 0x350),0,uVar4);
  FUN_14107e5d0(*(undefined8 *)(param_1 + 0x348));
LAB_14109c7f5:
  if (*(char *)(param_1 + 0x3a8) != '\0') {
    FUN_1410850c0(param_1,1);
  }
  FUN_1410a9170(param_1);
  return;
}



// FUNCTION 14109c830 FUN_14109c830 body=465 status=ok
// SIG undefined FUN_14109c830(void)

void FUN_14109c830(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  lVar5 = FWeakObjectPtr::Get(param_1 + 0x5d8);
  if (lVar5 != 0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if ((bVar9) && (lVar5 = FUN_140cff230(lVar5), lVar5 != 0)) {
      *(undefined4 *)(param_1 + 0x6a4) = *(undefined4 *)(lVar5 + 0x1c8);
      *(undefined4 *)(param_1 + 0x6a0) = *(undefined4 *)(lVar5 + 0x1c4);
      if ((*(longlong *)(param_1 + 0x650) != 0) && (*(longlong *)(param_1 + 0x648) != 0)) {
        FUN_142f0b170();
        FUN_142090300(*(undefined8 *)(param_1 + 0x648),*(undefined4 *)(param_1 + 0x6a0),
                      *(undefined4 *)(param_1 + 0x6a0));
      }
      plVar7 = *(longlong **)(param_1 + 0x668);
      plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0x670) * 4;
      for (; plVar7 != plVar8; plVar7 = plVar7 + 4) {
        plVar3 = (longlong *)plVar7[2];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar9 = iVar4 == 0;
          if (bVar9) {
            *(int *)(plVar3 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
          while (!bVar9) {
            LOCK();
            bVar9 = iVar4 == (int)plVar3[1];
            if (bVar9) {
              *(int *)(plVar3 + 1) = iVar4 + 1;
            }
            UNLOCK();
            if (bVar9) {
              lVar5 = plVar7[1];
              if ((lVar5 != 0) && (*plVar7 != 0)) {
                FUN_14204ff20(lVar5,*(undefined4 *)(param_1 + 0x6a4));
                FUN_142055060(lVar5,CONCAT44(*(undefined4 *)(param_1 + 0x6a0),
                                             *(undefined4 *)(param_1 + 0x6a0)));
                FUN_142090300(*plVar7,*(undefined4 *)(param_1 + 0x6a0),
                              *(undefined4 *)(param_1 + 0x6a0));
              }
              LOCK();
              plVar1 = plVar3 + 1;
              lVar5 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
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
              break;
            }
            LOCK();
            iVar4 = (int)plVar3[1];
            bVar9 = iVar4 == 0;
            if (bVar9) {
              *(int *)(plVar3 + 1) = 0;
              iVar4 = 0;
            }
            UNLOCK();
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14109ca10 FUN_14109ca10 body=357 status=ok
// SIG undefined FUN_14109ca10(void)

undefined4 FUN_14109ca10(longlong param_1)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  FUN_142ecbc80();
  local_10 = 0xe;
  local_18 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"navigationBar",0x1c);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  uVar4 = FUN_14106a5d0(param_1,&local_18,0,6,&local_28);
  *(undefined8 *)(param_1 + 0xa88) = uVar4;
  plVar8 = local_28;
  for (iVar7 = (int)local_20; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x680);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(param_1 + 0x680);
    lVar5 = *(longlong *)(lVar5 + 0x4e8);
    if (lVar5 != 0) {
      lVar6 = FUN_1413a4060();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_14109cb38;
    }
  }
  lVar5 = 0;
LAB_14109cb38:
  if ((*(longlong *)(param_1 + 0xa88) != 0) && (lVar5 != 0)) {
    FUN_1410a5e80(*(longlong *)(param_1 + 0xa88),lVar5 + 0xd0);
  }
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 14109cb80 thunk_FUN_142ecbc80 body=5 status=ok
// SIG undefined thunk_FUN_142ecbc80(void)

void thunk_FUN_142ecbc80(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 auStackX_8 [2];
  longlong *plStack_38;
  undefined8 uStack_30;
  longlong *plStack_28;
  longlong lStack_20;
  
  lVar5 = 0;
  auStackX_8[0] = 0;
  (**(code **)(*param_1 + 0x4b8))(param_1,auStackX_8);
  cVar1 = (**(code **)(*param_1 + 0x560))(param_1);
  if (cVar1 != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x21a) = 0;
    *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  }
  FUN_14073dc00(param_1);
  (**(code **)(*param_1 + 0x2b0))(param_1,(char)param_1[0x43]);
  (**(code **)(*param_1 + 0x2b8))(param_1,*(undefined1 *)((longlong)param_1 + 0x219));
  *(undefined1 *)((longlong)param_1 + 0x4c1) = 1;
  FUN_142ecf740(param_1);
  (**(code **)(*param_1 + 0x550))(param_1);
  TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>
            (param_1 + 0xd,&DAT_1469e9850);
  TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>
            (param_1 + 0xd,&DAT_1469e9820);
  TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>
            (param_1 + 0xd,&DAT_1469e9838);
  plStack_28 = (longlong *)0x0;
  lStack_20 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&plStack_28,0);
  FGenericPlatformString::Memcpy(plStack_28,L"hintBar",0x10);
  plStack_38 = (longlong *)0x0;
  uStack_30 = 0;
  lVar3 = FUN_141021c90(param_1,&plStack_28,0,6,&plStack_38);
  param_1[0xb7] = lVar3;
  plVar6 = plStack_38;
  for (iVar7 = (int)uStack_30; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (plStack_38 != (longlong *)0x0) {
    FMemory::Free(plStack_38);
  }
  if (plStack_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (param_1[0xb7] == 0) {
    plStack_38 = (longlong *)0x0;
    uStack_30 = 0x17;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&plStack_38,0);
    FGenericPlatformString::Memcpy(plStack_38,L"hintBarWrapper.hintBar",0x2e);
    plStack_28 = (longlong *)0x0;
    lStack_20 = 0;
    lVar3 = FUN_141021c90(param_1,&plStack_38,0,6,&plStack_28);
    param_1[0xb7] = lVar3;
    plVar6 = plStack_28;
    for (iVar7 = (int)lStack_20; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (plStack_28 != (longlong *)0x0) {
      FMemory::Free(plStack_28);
    }
    if (plStack_38 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  if ((param_1[0xb7] != 0) && (param_1[0xb6] != 0)) {
    *(char *)(param_1[0xb7] + 0x1e2) = (char)param_1[0xae];
    plVar6 = (longlong *)param_1[0xb7];
    lVar3 = lVar5;
    plStack_28 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      uVar4 = FUN_142f25a40();
      lVar3 = UObjectBaseUtility::GetInterfaceAddress(plVar6,uVar4);
    }
    lStack_20 = lVar3;
    FUN_142f0dc90(param_1[0xb6],&plStack_28);
  }
  lVar3 = param_1[0x57];
  if (lVar3 != 0) {
    plStack_28 = (longlong *)0x0;
    lStack_20 = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&plStack_28,0);
    FGenericPlatformString::Memcpy(plStack_28,L"MouseBlockerClip",0x22);
    uVar4 = FUN_142f206d0();
    lVar5 = FUN_142ea7570(param_1[0x57],PTR_s_flash_display_Sprite_14673ca58,&plStack_28,uVar4);
  }
  param_1[0xb8] = lVar5;
  if ((lVar3 != 0) && (plStack_28 != (longlong *)0x0)) {
    FMemory::Free();
    lVar5 = param_1[0xb8];
  }
  if (lVar5 == 0) {
    *(undefined1 *)((longlong)param_1 + 0x5e1) = 1;
  }
  if ((param_1[0xb6] != 0) && (*(char *)(param_1[0xb6] + 0xa2) != '\0')) {
    uVar2 = FUN_142ebd930(param_1);
    FUN_142f11000(param_1[0xb6],uVar2);
  }
  cVar1 = FWeakObjectPtr::IsValid((longlong)param_1 + 0x59c);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    lVar5 = FWeakObjectPtr::Get((longlong)param_1 + 0x59c);
    uVar2 = *(undefined1 *)(lVar5 + 0xb9);
  }
  (**(code **)(param_1[0x9b] + 0xe0))(param_1 + 0x9b,uVar2);
  *(undefined1 *)((longlong)param_1 + 0x621) = 1;
  FUN_142eb9770(param_1);
  return;
}



// FUNCTION 14109cb90 FUN_14109cb90 body=581 status=ok
// SIG undefined FUN_14109cb90(void)

void FUN_14109cb90(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  FUN_142ecbc80();
  local_10 = 0x15;
  local_18 = (longlong *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
  FGenericPlatformString::Memcpy(local_18,L"CategoryNavLargeAnim",0x2a);
  local_28 = (longlong *)0x0;
  local_20 = 0;
  FUN_14106c300(param_1,param_1 + 0x6b8,&local_18,0,6,&local_28);
  plVar4 = local_28;
  for (iVar3 = (int)local_20; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"CategoryNavSmallAnim",0x2a);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_14106c570(param_1,param_1 + 0x6c0,&local_28,0,6,&local_18);
  plVar4 = local_18;
  for (iVar3 = (int)local_10; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  local_28 = (longlong *)0x0;
  local_20 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"TrophyPanelAnim",0x20);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  FUN_14106c7e0(param_1,param_1 + 0x6c8,&local_28,0,6,&local_18);
  plVar4 = local_18;
  for (iVar3 = (int)local_10; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 0x6b4) = 1;
  if ((*(char *)(param_1 + 0x6b5) != '\0') &&
     (cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x688), cVar1 != '\0')) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x688);
    FUN_140af37a0(uVar2);
  }
  return;
}



// FUNCTION 14109cde0 BeginDestroy body=35 status=ok
// SIG undefined BeginDestroy(void)

void UPawnAction_Move::BeginDestroy(undefined8 param_1)

{
  FUN_142ecbc80();
  FUN_141085510(param_1);
  FUN_142ecd4d0(param_1);
  return;
}



// FUNCTION 14109ce10 FUN_14109ce10 body=1731 status=ok
// SIG undefined FUN_14109ce10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14109ce10(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  float fVar10;
  undefined1 auStack_238 [32];
  longlong *local_218;
  float local_210;
  longlong local_208 [5];
  undefined4 local_1e0;
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  undefined1 local_1c0;
  float local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined1 local_1ac;
  undefined1 local_1a8 [16];
  undefined4 local_198;
  undefined4 local_190;
  char local_18c;
  char local_18b;
  undefined1 local_18a;
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  longlong local_d8;
  undefined4 local_d0;
  undefined4 local_c8 [4];
  undefined1 local_b8 [8];
  longlong *local_b0;
  char local_a0;
  undefined4 local_98 [4];
  undefined1 local_88 [8];
  longlong *local_80;
  char local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  cVar5 = FUN_142ebd920();
  if (cVar5 == '\0') {
    *(undefined1 *)(param_1 + 0x699) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x699) = 0;
  if (((int)param_2[1] < 1) ||
     ((param_2 = (longlong *)*param_2, *(char *)((longlong)param_2 + 0x5d) != '\0' &&
      (*(float *)(param_2 + 6) == 0.0)))) {
    plVar9 = *(longlong **)(param_1 + 0x648);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x278))(plVar9,0);
    }
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x688));
    FUN_14107fa40(param_1 + 0x678,0);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x688));
    return;
  }
  local_208[4] = *param_2;
  local_1e0 = (undefined4)param_2[1];
  FText::FText(local_1d8,param_2 + 2);
  local_1c0 = (undefined1)param_2[5];
  local_1bc = *(float *)((longlong)param_2 + 0x2c);
  local_1b8 = (undefined4)param_2[6];
  local_1b4 = *(undefined4 *)((longlong)param_2 + 0x34);
  local_1b0 = (undefined4)param_2[7];
  local_1ac = *(undefined1 *)((longlong)param_2 + 0x3c);
  FUN_14058f8f0(local_1a8,param_2 + 8);
  local_198 = (undefined4)param_2[10];
  local_190 = (undefined4)param_2[0xb];
  local_18c = *(char *)((longlong)param_2 + 0x5c);
  local_18b = *(char *)((longlong)param_2 + 0x5d);
  local_18a = *(undefined1 *)((longlong)param_2 + 0x5e);
  lVar6 = *(longlong *)(param_1 + 0x690);
  if (local_208[4] != lVar6) {
    if ((local_18c == '\0') && (local_18b == '\0')) {
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x688));
      FUN_14107fa40(param_1 + 0x678,0);
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x688));
      *(longlong *)(param_1 + 0x690) = local_208[4];
      FText::FText(local_188,local_1d8);
      fVar10 = local_1bc;
      if (local_1bc <= 0.1) {
        fVar10 = 0.0;
      }
      lVar6 = FWeakObjectPtr::Get(&local_1b4);
      if (lVar6 == 0) {
LAB_14109cfe9:
        lVar6 = 0;
      }
      else {
        lVar7 = FUN_1412f58e0();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_14109cfe9;
      }
      lVar7 = FUN_140fe3d70(param_1);
      local_208[0] = 0;
      local_208[1] = 0;
      if (((lVar6 != 0) && (*(longlong *)(lVar6 + 0x40) != 0)) && (lVar7 != 0)) {
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if ((*(int *)(lVar3 + 0x38) < DAT_146874a30) &&
           (_Init_thread_header(&DAT_146874a30), DAT_146874a30 == -1)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0290,0);
          FGenericPlatformString::Memcpy(DAT_1462a0290,L"Speaker",0x10);
          atexit((_func_5014 *)&LAB_143e5dbc0);
          _Init_thread_footer(&DAT_146874a30);
        }
        if ((*(int *)(lVar3 + 0x38) < DAT_146874a34) &&
           (_Init_thread_header(&DAT_146874a34), DAT_146874a34 == -1)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a02a0,0);
          FGenericPlatformString::Memcpy(DAT_1462a02a0,L"Text",10);
          atexit((_func_5014 *)&LAB_143e5dbe0);
          _Init_thread_footer(&DAT_146874a34);
        }
        plVar9 = (longlong *)(*(longlong *)(lVar6 + 0x40) + 0x30);
        local_118 = 0;
        local_110 = 0;
        local_f8 = 0;
        local_f0 = 0;
        local_e8 = 0xffffffff;
        local_e4 = 0;
        local_d8 = 0;
        local_d0 = 0;
        uVar8 = (**(code **)(*plVar9 + 0x10))(plVar9,local_170);
        local_c8[0] = 4;
        FText::FText(local_b8,uVar8);
        local_a0 = '\x01';
        FUN_141068670(&local_118,&DAT_1462a0290,local_c8);
        if ((local_a0 != '\0') && (local_a0 = '\0', local_b0 != (longlong *)0x0)) {
          LOCK();
          plVar9 = local_b0 + 1;
          lVar6 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_b0)(local_b0);
            LOCK();
            piVar1 = (int *)((longlong)local_b0 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_b0 + 8))(local_b0,1);
            }
          }
        }
        if (local_168 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_168 + 1;
          lVar6 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_168)(local_168);
            LOCK();
            piVar1 = (int *)((longlong)local_168 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_168 + 8))(local_168,1);
            }
          }
        }
        local_208[2] = 0;
        local_208[3] = 0;
        uVar8 = FText::FromString(local_158,local_208 + 2);
        local_98[0] = 4;
        FText::FText(local_88,uVar8);
        local_70 = '\x01';
        FUN_141068670(&local_118,&DAT_1462a02a0,local_98);
        if ((local_70 != '\0') && (local_70 = '\0', local_80 != (longlong *)0x0)) {
          LOCK();
          plVar9 = local_80 + 1;
          lVar6 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar1 = (int *)((longlong)local_80 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_80 + 8))(local_80,1);
            }
          }
        }
        if (local_150 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_150 + 1;
          lVar6 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
        if (local_208[2] != 0) {
          FMemory::Free();
        }
        uVar8 = FTextFormat::FTextFormat(local_128,lVar7 + 0x1080);
        uVar8 = FText::Format(local_140,uVar8,&local_118);
        uVar8 = FText::ToString(uVar8);
        FString::operator=(local_208,uVar8);
        if (local_138 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_138 + 1;
          lVar6 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_138)(local_138);
            LOCK();
            piVar1 = (int *)((longlong)local_138 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_138 + 8))(local_138,1);
            }
          }
        }
        local_d0 = 0;
        if (local_d8 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_118);
      }
      local_218 = local_208;
      local_210 = fVar10;
      FUN_14107f560(param_1,local_188,local_1b8,0);
      if (local_208[0] != 0) {
        FMemory::Free();
      }
      if (local_180 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_180 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_180)(local_180);
          LOCK();
          piVar1 = (int *)((longlong)local_180 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_180 + 8))(local_180,1);
          }
        }
      }
      goto LAB_14109d374;
    }
    if (local_208[4] != lVar6) goto LAB_14109d374;
  }
  if ((local_18c == '\0') && (local_18b == '\0')) {
    if ((local_208[4] == lVar6) && (*(char *)(param_1 + 0x698) != '\0')) {
      *(undefined1 *)(param_1 + 0x698) = 0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x698) = 1;
  }
LAB_14109d374:
  FUN_140591060(local_1a8);
  if (local_1d0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_1d0 + 1;
    lVar6 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_1d0)(local_1d0);
      LOCK();
      piVar1 = (int *)((longlong)local_1d0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_1d0 + 8))(local_1d0,1);
      }
    }
  }
  return;
}



// FUNCTION 14109d4e0 FUN_14109d4e0 body=116 status=ok
// SIG undefined FUN_14109d4e0(void)

void FUN_14109d4e0(longlong param_1)

{
  longlong lVar1;
  
  FUN_1410a2d30();
  lVar1 = *(longlong *)(param_1 + 0x348);
  if (lVar1 != 0) {
    if (((*(char *)(lVar1 + 0x17b) != '\0') ||
        ((*(longlong *)(lVar1 + 0x1d0) != 0 &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x1d0) + 0x48) != 0)))) &&
       (*(longlong *)(param_1 + 0x350) != 0)) {
      FUN_142f0d400(*(longlong *)(param_1 + 0x350),*(undefined8 *)(param_1 + 0x340),0);
      lVar1 = *(longlong *)(param_1 + 0x348);
    }
    if (*(char *)(lVar1 + 0x1e8) != '\0') {
      FUN_1410a8c80();
      return;
    }
  }
  return;
}



// FUNCTION 14109d560 FUN_14109d560 body=594 status=ok
// SIG undefined FUN_14109d560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14109d560(longlong param_1,longlong *param_2,longlong *param_3,char param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  undefined1 local_e8 [24];
  undefined1 local_d0 [24];
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined1 local_a0;
  undefined1 *local_98 [2];
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  lVar4 = *param_2;
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x58c);
  if (lVar2 != 0) {
    lVar3 = FUN_14145f370();
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
      lVar2 = FUN_140cff230(lVar2);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 400) != lVar4)) {
        *(longlong *)(lVar2 + 400) = lVar4;
        *(undefined1 *)(lVar2 + 0x28) = 1;
      }
    }
  }
  if (param_3 != (longlong *)0x0) {
    lVar4 = FUN_1413a3fb0();
    if ((*(int *)(param_3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar6 = 1;
      if (param_4 == '\x01') {
        uVar6 = 1;
      }
      else if (param_4 == '\x02') {
        uVar6 = 2;
      }
      else if (param_4 == '\x03') {
        uVar6 = 3;
      }
      else if (param_4 == '\x04') {
        uVar6 = 4;
      }
      (**(code **)(*param_3 + 0x570))(param_3,uVar6);
      FUN_1413a4350(param_1,uVar6);
      local_f0 = *param_2;
      local_f8 = param_1;
      FText::FText(local_e8,param_2 + 1);
      FText::FText(local_d0,param_2 + 4);
      local_b8 = param_2[7];
      local_b0 = param_2[8];
      local_a8 = param_2[9];
      local_a0 = (undefined1)param_2[10];
      local_68 = (longlong *)0x0;
      local_58 = 0;
      puVar5 = (undefined8 *)FUN_140438ef0(0x68,local_88);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_FUN_14468e668;
        puVar5[1] = local_f8;
        puVar5[2] = local_f0;
        FText::FText(puVar5 + 3,local_e8);
        FText::FText(puVar5 + 6,local_d0);
        puVar5[9] = local_b8;
        puVar5[10] = local_b0;
        puVar5[0xb] = local_a8;
        *(undefined1 *)(puVar5 + 0xc) = local_a0;
      }
      local_98[0] = &LAB_14107da80;
      FUN_14208c260(param_1,local_98);
      if (local_58 != 0) {
        plVar7 = local_88;
        if (local_68 != (longlong *)0x0) {
          plVar7 = local_68;
        }
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x10))(plVar7,0);
        }
      }
      if (local_68 != (longlong *)0x0) {
        FMemory::Free();
      }
      FUN_140ed0490(&local_f0);
    }
  }
  return;
}



// FUNCTION 14109d7c0 FUN_14109d7c0 body=357 status=ok
// SIG undefined FUN_14109d7c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14109d7c0(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 *local_e8 [2];
  longlong local_d8 [4];
  longlong *local_b8;
  int local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  FWeakObjectPtr::operator=(&local_f8,param_1);
  local_b8 = (longlong *)0x0;
  local_a8 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_d8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_CopyToEmptyStorage_143fcfe50;
    *(undefined4 *)(puVar1 + 1) = local_f8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = local_f4;
  }
  local_e8[0] = &LAB_14107d600;
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  if (*(longlong *)(lVar2 + 400) == 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x3f8);
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
  }
  local_98 = 0;
  local_90 = 0;
  FWeakObjectPtr::operator=(local_88,0);
  local_80 = 0;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,local_e8);
  FUN_142880af0(uVar3,&local_98);
  if (local_38 != 0) {
    plVar4 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar4 = local_48;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
  if (local_a8 != 0) {
    plVar4 = local_d8;
    if (local_b8 != (longlong *)0x0) {
      plVar4 = local_b8;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_b8 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14109d950 FUN_14109d950 body=47 status=ok
// SIG undefined FUN_14109d950(void)

void FUN_14109d950(longlong param_1,undefined4 param_2)

{
  FUN_142eccee0();
  FUN_140ec3ff0(param_1 + 0x6b8,param_2);
  return;
}



// FUNCTION 14109d980 FUN_14109d980 body=138 status=ok
// SIG undefined FUN_14109d980(void)

void FUN_14109d980(longlong *param_1,float param_2)

{
  float fVar1;
  
  FUN_142eccee0();
  if (*(char *)((longlong)param_1 + 0x694) != '\0') {
    fVar1 = *(float *)(param_1 + 0xd3);
    *(float *)(param_1 + 0xd3) = fVar1 - param_2;
    if (fVar1 - param_2 <= 0.0) {
      (**(code **)(*param_1 + 0x598))(param_1);
    }
  }
  if (*(char *)((longlong)param_1 + 0x695) != '\0') {
    fVar1 = *(float *)(param_1 + 0xd3);
    *(float *)(param_1 + 0xd3) = fVar1 - param_2;
    if (fVar1 - param_2 <= 0.0) {
      (**(code **)(*param_1 + 0x5a0))(param_1);
    }
  }
  return;
}



// FUNCTION 14109da10 FUN_14109da10 body=292 status=ok
// SIG undefined FUN_14109da10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14109da10(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
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
  FUN_142eccee0();
  LOCK();
  iVar1 = *(int *)(param_1 + 0x9cc);
  *(int *)(param_1 + 0x9cc) = 0;
  UNLOCK();
  if (iVar1 != 0) {
    local_88 = (longlong *)0x0;
    local_78 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = param_1;
      *puVar2 = &PTR_FUN_143f77b70;
    }
    local_b8[0] = &LAB_14107dab0;
    uVar3 = FUN_1420849a0(param_1,local_68,local_b8);
    FUN_14208c260(param_1,uVar3);
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
    if (local_78 != 0) {
      plVar4 = local_a8;
      if (local_88 != (longlong *)0x0) {
        plVar4 = local_88;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_88 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14109db40 FUN_14109db40 body=765 status=ok
// SIG undefined FUN_14109db40(void)

void FUN_14109db40(longlong param_1,float param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  float fVar12;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined4 local_40;
  undefined1 local_3c;
  
  FUN_142ecd1d0();
  plVar10 = (longlong *)0x0;
  if ((((1e-08 < *(float *)(param_1 + 0x69c)) &&
       (fVar12 = *(float *)(param_1 + 0x69c) - param_2, *(float *)(param_1 + 0x69c) = fVar12,
       fVar12 <= 1e-08)) && (*(longlong *)(param_1 + 0x648) != 0)) &&
     (*(longlong *)(param_1 + 0x650) != 0)) {
    if (*(char *)(param_1 + 0x698) != '\0') {
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x688));
      *(undefined8 *)(param_1 + 0x690) = 0;
      FUN_14107fa40(param_1 + 0x678,0);
      *(undefined1 *)(param_1 + 0x698) = 0;
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x688));
    }
    if (*(int *)(param_1 + 0x680) == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x648) + 0x278))(*(longlong **)(param_1 + 0x648),0);
      (**(code **)(**(longlong **)(param_1 + 0x650) + 0x278))(*(longlong **)(param_1 + 0x650),0);
    }
    else {
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x688));
      lVar2 = *(longlong *)(param_1 + 0x678);
      FText::FText(local_58,lVar2);
      local_40 = *(undefined4 *)(lVar2 + 0x18);
      local_3c = *(undefined1 *)(lVar2 + 0x1c);
      TArray<FStreamInteractionDelayedMessage,FDefaultAllocator>::RemoveAtImpl
                (param_1 + 0x678,0,1,1);
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x688));
      local_68 = 0;
      local_60 = 0;
      FUN_14107f560(param_1,local_58,local_40,local_3c,&local_68,0);
      if (local_68 != 0) {
        FMemory::Free();
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_50 + 1;
        lVar2 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
  }
  plVar7 = *(longlong **)(param_1 + 0x668);
  plVar9 = plVar7 + (longlong)*(int *)(param_1 + 0x670) * 4;
  do {
    if (plVar7 == plVar9) {
      return;
    }
    if (1e-08 < *(float *)(plVar7 + 3)) {
      *(float *)(plVar7 + 3) = *(float *)(plVar7 + 3) - param_2;
      plVar3 = (longlong *)plVar7[2];
      plVar6 = plVar10;
      plVar8 = plVar3;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar11 = iVar4 == 0;
        if (bVar11) {
          *(int *)(plVar3 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (plVar8 = plVar10, !bVar11) {
          LOCK();
          bVar11 = iVar4 == (int)plVar3[1];
          if (bVar11) {
            *(int *)(plVar3 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar11) {
            plVar6 = (longlong *)plVar7[1];
            plVar8 = plVar3;
            break;
          }
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar11 = iVar4 == 0;
          if (bVar11) {
            *(int *)(plVar3 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
      }
      if (((*(float *)(plVar7 + 3) <= 1e-08) && ((longlong *)*plVar7 != (longlong *)0x0)) &&
         (plVar6 != (longlong *)0x0)) {
        lVar2 = *(longlong *)*plVar7;
        uVar5 = FUN_1404b03b0();
        (**(code **)(lVar2 + 0x2b0))(*plVar7,uVar5,1,0);
        (**(code **)(*(longlong *)*plVar7 + 0x278))((longlong *)*plVar7,0);
        FUN_142056670(plVar6,0);
        *(undefined4 *)(plVar7 + 3) = 0xbf800000;
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar8 + 1;
        lVar2 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
    }
    plVar7 = plVar7 + 4;
  } while( true );
}



// FUNCTION 14109de40 FUN_14109de40 body=246 status=ok
// SIG undefined FUN_14109de40(void)

void FUN_14109de40(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  FUN_142ecd1d0();
  if (*(char *)((longlong)param_1 + 0xd39) != '\0') {
    cVar1 = FUN_142ebd920(param_1);
    if (cVar1 != '\0') {
      FWeakObjectPtr::operator=(&local_res8,param_1);
      local_38 = 0;
      local_28 = 0;
      puVar2 = (undefined8 *)FUN_140438ef0(0x20,local_58);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = &PTR_FUN_144213c48;
        puVar2[1] = param_1;
        *(undefined4 *)(puVar2 + 2) = local_res8;
        *(undefined4 *)((longlong)puVar2 + 0x14) = local_resc;
        *(undefined4 *)(puVar2 + 3) = param_2;
      }
      local_68[0] = &LAB_14107d3b0;
      FUN_14204c280(local_68);
      return;
    }
  }
  cVar1 = FUN_142ebe180(param_1);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x580))(param_1,0);
  }
  return;
}



// FUNCTION 14109df60 FUN_14109df60 body=182 status=ok
// SIG undefined FUN_14109df60(void)

void FUN_14109df60(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  
  if ((*(char *)((longlong)param_1 + 0x674) != '\0') && (param_1[0xca] != 0)) {
    fVar3 = (float)FUN_142eee550();
    FUN_14107bc40(param_1,(double)fVar3);
    *(undefined1 *)((longlong)param_1 + 0x674) = 0;
  }
  cVar1 = FUN_142ebe180(param_1);
  if (((cVar1 != '\0') && (param_1[0xcd] != 0)) &&
     (fVar3 = 0.0, 0.0 < *(float *)(param_1[0xcd] + 0x60))) {
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar2 != 0) {
      lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      fVar3 = *(float *)(lVar2 + 0x790);
    }
    if (*(float *)(param_1[0xcd] + 0x60) + *(float *)(param_1 + 0xce) < fVar3) {
      (**(code **)(*param_1 + 0x580))(param_1,0);
    }
  }
  return;
}



// FUNCTION 14109e020 FUN_14109e020 body=566 status=ok
// SIG undefined FUN_14109e020(void)

void FUN_14109e020(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  longlong local_68 [3];
  longlong *plStack_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  lVar8 = FWeakObjectPtr::Get(param_1 + 0xbc);
  if (lVar8 != 0) {
    lVar9 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      cVar7 = FUN_14106d3e0(*(undefined8 *)(lVar8 + 0x6b8),param_1[0xc6],param_1[199]);
      if (cVar7 == '\0') {
        lVar8 = *(longlong *)(lVar8 + 0x6c0);
        lVar9 = param_1[0xc6];
        plVar4 = (longlong *)param_1[199];
        if (lVar8 == 0) {
          (**(code **)(*param_1 + 0x580))(param_1,1);
        }
        else {
          fVar10 = (float)FUN_1430d5c60(lVar8);
          fVar11 = (float)FUN_1430d6f50(lVar8);
          if ((lVar9 != 0) && (plVar4 != (longlong *)0x0)) {
            local_68[1] = 0xc;
            local_68[0] = 0;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
            FGenericPlatformString::Memcpy(local_68[0],L"singleBoost",0x18);
            FUN_142088cf0(plVar4,local_68);
            if (local_68[0] != 0) {
              FMemory::Free();
            }
            FUN_142f0ead0(lVar9,ABS(fVar10 / fVar11));
            local_68[2] = 0;
            plStack_50 = (longlong *)0x0;
            FText::AsNumber(local_48,(int)ROUND(fVar10 * 2.0 - 0.5) >> 1,0,local_68 + 2);
            plVar6 = plStack_50;
            if (plStack_50 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_50 + 1;
              lVar8 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*plStack_50)(plStack_50);
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
            (**(code **)(*plVar4 + 0x2b0))(plVar4,local_48,1,0);
            if (local_40 != (longlong *)0x0) {
              LOCK();
              plVar4 = local_40 + 1;
              lVar8 = *plVar4;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
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
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14109e260 FUN_14109e260 body=427 status=ok
// SIG undefined FUN_14109e260(void)

void FUN_14109e260(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined8 local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x5e0);
  if (lVar6 != 0) {
    lVar7 = FUN_14148cad0();
    iVar4 = *(int *)(lVar7 + 0x90);
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < iVar4) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)iVar4 * 8) !=
        lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      fVar9 = (float)FUN_140a23120(*(float *)(lVar6 + 0x850) * 0.01,
                                   CONCAT71((int7)(int3)((uint)iVar4 >> 8),0xc),0xe);
      fVar10 = *(float *)(lVar6 + 0x700);
      fVar9 = (float)((int)ROUND(fVar9 * 2.0 - 0.5) >> 1);
      if (*(char *)(param_1 + 0x648) == '\0') {
        fVar9 = fVar9 * 1.609344;
        fVar10 = fVar10 * 1.609344;
      }
      if (*(longlong *)(param_1 + 0x630) != 0) {
        FUN_142f0ead0(*(longlong *)(param_1 + 0x630),ABS(fVar9 / fVar10));
      }
      if (*(longlong **)(param_1 + 0x638) != (longlong *)0x0) {
        local_48 = 0;
        plStack_40 = (longlong *)0x0;
        lVar6 = **(longlong **)(param_1 + 0x638);
        uVar8 = FText::AsNumber(local_38,(int)fVar9,0,&local_48);
        (**(code **)(lVar6 + 0x2b0))(*(undefined8 *)(param_1 + 0x638),uVar8,1,0);
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_30 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar2 = (int *)((longlong)local_30 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_30 + 8))(local_30,1);
            }
          }
        }
        plVar1 = plStack_40;
        if (plStack_40 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_40 + 1;
          lVar6 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plStack_40)(plStack_40);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar1 + 8))(plVar1,1);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14109e410 FUN_14109e410 body=54 status=ok
// SIG undefined FUN_14109e410(void)

void FUN_14109e410(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x630) != 0) {
    FUN_1410a9370();
  }
  if (*(longlong *)(param_1 + 0x638) != 0) {
    FUN_1410a9370();
    return;
  }
  return;
}



// FUNCTION 14109e450 FUN_14109e450 body=197 status=ok
// SIG undefined FUN_14109e450(void)

void FUN_14109e450(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  int param_5,int param_6,undefined8 param_7)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  if (*(char *)(param_1 + 0x690) == '\x03') {
    if (param_6 < 1) {
      uVar3 = 100;
    }
    else {
      uVar1 = (longlong)(param_5 * 100) / (longlong)param_6;
      iVar2 = (int)uVar1;
      if (iVar2 < 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 100;
        if (iVar2 < 100) {
          uVar3 = uVar1 & 0xffffffff;
        }
      }
    }
    if (*(longlong *)(param_1 + 0x6c0) != 0) {
      FUN_1410a5270(*(longlong *)(param_1 + 0x6c0),param_2,uVar3);
    }
    if (*(longlong *)(param_1 + 0x6c8) != 0) {
      FUN_1410a5480(*(longlong *)(param_1 + 0x6c8),param_2,param_3,param_4,param_5,param_6,param_7);
    }
  }
  return;
}



// FUNCTION 14109e520 FUN_14109e520 body=154 status=ok
// SIG undefined FUN_14109e520(void)

void FUN_14109e520(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  if ((*(char *)(param_1 + 0x690) == '\x02') && (*(longlong *)(param_1 + 0x6b8) != 0)) {
    if (param_5 < 1) {
      uVar5 = 100;
    }
    else {
      uVar3 = (longlong)(param_4 * 100) / (longlong)param_5;
      iVar4 = (int)uVar3;
      if (iVar4 < 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = 100;
        if (iVar4 < 100) {
          uVar5 = uVar3 & 0xffffffff;
        }
      }
    }
    FUN_1410a5270(*(longlong *)(param_1 + 0x6b8),param_2,uVar5);
    lVar1 = *(longlong *)(param_1 + 0x6b8);
    plVar2 = *(longlong **)(lVar1 + 0x180);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x278))(plVar2,1);
    }
    plVar2 = *(longlong **)(lVar1 + 0x188);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014109e5ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x278))(plVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 14109e5c0 FUN_14109e5c0 body=196 status=ok
// SIG undefined FUN_14109e5c0(void)

void FUN_14109e5c0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if ((*(char *)(param_1 + 0x690) == '\x01') && (*(longlong *)(param_1 + 0x6b8) != 0)) {
    if (param_5 < 1) {
      iVar3 = 100;
    }
    else {
      param_5 = (param_4 * 100) / param_5;
      if (param_5 < 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = 100;
        if (param_5 < 100) {
          iVar3 = param_5;
        }
      }
    }
    FText::operator=(param_1 + 0x698,param_2);
    *(int *)(param_1 + 0x6b0) = iVar3;
    FUN_1410a5270(*(undefined8 *)(param_1 + 0x6b8),param_2,iVar3);
    lVar1 = *(longlong *)(param_1 + 0x6b8);
    plVar2 = *(longlong **)(lVar1 + 0x180);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x278))(plVar2,0);
    }
    plVar2 = *(longlong **)(lVar1 + 0x188);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x278))(plVar2,0);
    }
  }
  return;
}



// FUNCTION 14109e690 FUN_14109e690 body=495 status=ok
// SIG undefined FUN_14109e690(void)

undefined4 FUN_14109e690(longlong param_1,char param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong local_28 [4];
  
  *(char *)(param_1 + 0x690) = param_2;
  if (param_2 == '\0') {
    if (*(longlong *)(param_1 + 0x6c0) != 0) {
      FUN_141084f60();
    }
    if (*(longlong *)(param_1 + 0x6b8) != 0) {
      FUN_141084ef0();
    }
  }
  else if (param_2 == '\x01') {
    if (*(longlong *)(param_1 + 0x6c0) != 0) {
      FUN_141084f60();
    }
    if (*(longlong *)(param_1 + 0x6b8) != 0) {
      FUN_1410a6860();
      FUN_1410a5270(*(undefined8 *)(param_1 + 0x6b8),param_1 + 0x698,
                    *(undefined4 *)(param_1 + 0x6b0));
      FUN_1410a6220(*(undefined8 *)(param_1 + 0x6b8),0);
    }
  }
  else {
    if (param_2 != '\x02') {
      if (param_2 == '\x03') {
        lVar2 = *(longlong *)(param_1 + 0x6c0);
        if ((lVar2 != 0) && (*(char *)(lVar2 + 400) == '\0')) {
          *(undefined1 *)(lVar2 + 400) = 1;
          local_28[0] = 0;
          local_28[1] = 5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
          FGenericPlatformString::Memcpy(local_28[0],L"show",10);
          FUN_142088910(lVar2,local_28);
          if (local_28[0] != 0) {
            FMemory::Free();
          }
        }
        if (*(longlong *)(param_1 + 0x6b8) != 0) {
          FUN_141084ef0();
        }
        lVar2 = *(longlong *)(param_1 + 0x6c8);
        if ((lVar2 != 0) && (*(char *)(lVar2 + 0x1d0) == '\0')) {
          *(undefined1 *)(lVar2 + 0x1d0) = 1;
          local_28[2] = 0;
          local_28[3] = 5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
          FGenericPlatformString::Memcpy(local_28[2],L"show",10);
          FUN_142088910(lVar2,local_28 + 2);
          if (local_28[2] != 0) {
            FMemory::Free();
          }
        }
      }
      goto LAB_14109e864;
    }
    if (*(longlong *)(param_1 + 0x6c0) != 0) {
      FUN_141084f60();
    }
    if (*(longlong *)(param_1 + 0x6b8) != 0) {
      FUN_1410a6860();
    }
  }
  if (*(longlong *)(param_1 + 0x6c8) != 0) {
    FUN_141084fd0();
  }
LAB_14109e864:
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x588) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 14109e880 FUN_14109e880 body=59 status=ok
// SIG undefined FUN_14109e880(void)

undefined4 FUN_14109e880(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(param_1 + 0xb78);
  if (cVar1 == '\0') {
LAB_14109e8a0:
    uVar2 = 0;
  }
  else {
    if (cVar1 == '\x01') goto LAB_14109e8a0;
    if (cVar1 != '\x02') goto LAB_14109e8aa;
    uVar2 = 1;
  }
  FUN_14107cc10(param_1,uVar2,0);
LAB_14109e8aa:
  LOCK();
  uVar2 = *(undefined4 *)(param_1 + 0x9cc);
  *(undefined4 *)(param_1 + 0x9cc) = 1;
  UNLOCK();
  return uVar2;
}



// FUNCTION 14109e8c0 FUN_14109e8c0 body=62 status=ok
// SIG undefined FUN_14109e8c0(void)

void FUN_14109e8c0(longlong param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xb58);
  if (lVar1 != 0) {
    if (param_2 == '\x02') {
      FUN_140ebbab0(param_1 + 0x878,lVar1 + 0x688);
      return;
    }
    if (param_2 == '\x03') {
      FUN_140ebbab0(param_1 + 0x878,lVar1 + 0x690);
      return;
    }
  }
  return;
}



// FUNCTION 14109e900 FUN_14109e900 body=119 status=ok
// SIG undefined FUN_14109e900(void)

void FUN_14109e900(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = FUN_142eb65a0();
  if (lVar1 == param_1[0x16e]) {
    FUN_14109e980(param_1);
    lVar1 = *param_1;
    local_18 = 0;
    local_10 = 0;
    puVar2 = (undefined8 *)FName::FName(local_res8,"Navigate",1);
    (**(code **)(lVar1 + 0x4e8))(param_1,*puVar2,&local_18);
  }
  LOCK();
  *(undefined4 *)(param_1 + 0xb1) = 1;
  UNLOCK();
  return;
}



// FUNCTION 14109e980 FUN_14109e980 body=264 status=ok
// SIG undefined FUN_14109e980(void)

void FUN_14109e980(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_28 [4];
  
  if ((*(longlong *)(param_1 + 0xb50) != 0) && (*(longlong *)(param_1 + 0xdc8) != 0)) {
    lVar1 = FUN_140b5c480();
    lVar2 = FUN_140b5da00(*(undefined8 *)(param_1 + 0xb50));
    if (lVar2 == lVar1) {
      local_28[1] = 5;
      local_28[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
      FGenericPlatformString::Memcpy(local_28[0],L"card",10);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0xdc8),local_28);
      lVar1 = local_28[0];
    }
    else {
      local_28[3] = 5;
      local_28[2] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
      FGenericPlatformString::Memcpy(local_28[2],L"head",10);
      FUN_142088cf0(*(undefined8 *)(param_1 + 0xdc8),local_28 + 2);
      lVar1 = local_28[2];
    }
    if (lVar1 != 0) {
      FMemory::Free();
    }
  }
  FUN_1410abc10(param_1);
  LOCK();
  *(undefined4 *)(param_1 + 0x9cc) = 1;
  UNLOCK();
  FUN_1410a9b00(param_1);
  return;
}



// FUNCTION 14109ea90 FUN_14109ea90 body=21 status=ok
// SIG undefined FUN_14109ea90(void)

void FUN_14109ea90(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  FUN_1410ac010();
  return;
}



// FUNCTION 14109eab0 FUN_14109eab0 body=218 status=ok
// SIG undefined FUN_14109eab0(void)

void FUN_14109eab0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  lVar2 = (**(code **)(param_1[0x130] + 0x10))();
  if (lVar2 != 0) {
    lVar3 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14109eb23;
  }
  lVar2 = 0;
LAB_14109eb23:
  lVar3 = (**(code **)(*param_1 + 0xfa8))(param_1);
  if (((lVar3 != 0) && (lVar2 != 0)) && (*(longlong *)(lVar2 + 0x3c0) != 0)) {
    *(undefined8 *)(*(longlong *)(lVar2 + 0x3c0) + 0xe0) = param_2;
    *(undefined8 *)(*(longlong *)(lVar2 + 0x3c0) + 0xe8) = param_3;
    uVar4 = (**(code **)(*param_1 + 0xfa8))(param_1);
    FUN_142f02280(uVar4,*(undefined8 *)(lVar2 + 0x3c0));
  }
  return;
}



// FUNCTION 14109eb90 FUN_14109eb90 body=36 status=ok
// SIG undefined FUN_14109eb90(void)

void FUN_14109eb90(longlong param_1,undefined1 param_2)

{
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x2e8) + 0x1e2) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00014109ebac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x300))();
    return;
  }
  return;
}



// FUNCTION 14109ebc0 FUN_14109ebc0 body=60 status=ok
// SIG undefined FUN_14109ebc0(void)

void FUN_14109ebc0(longlong *param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  if (((int)param_1[0x11c] != 0) || (*(int *)((longlong)param_1 + 0x8e4) != 0)) {
    local_18 = 0;
    local_10 = 0;
    (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0x11c],&local_18);
  }
  return;
}



// FUNCTION 14109ec00 FUN_14109ec00 body=60 status=ok
// SIG undefined FUN_14109ec00(void)

void FUN_14109ec00(longlong *param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  if (((int)param_1[0x120] != 0) || (*(int *)((longlong)param_1 + 0x904) != 0)) {
    local_18 = 0;
    local_10 = 0;
    (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0x120],&local_18);
  }
  return;
}



// FUNCTION 14109ec40 FUN_14109ec40 body=60 status=ok
// SIG undefined FUN_14109ec40(void)

void FUN_14109ec40(longlong *param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  if (((int)param_1[0x11d] != 0) || (*(int *)((longlong)param_1 + 0x8ec) != 0)) {
    local_18 = 0;
    local_10 = 0;
    (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0x11d],&local_18);
  }
  return;
}



// FUNCTION 14109ec80 FUN_14109ec80 body=212 status=ok
// SIG undefined FUN_14109ec80(void)

void FUN_14109ec80(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  if ((*(longlong *)(param_1 + 0x720) != 0) && (*(longlong *)(param_1 + 0x728) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x728) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x718,param_2,1,0);
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x6e0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar6 = iVar5 == 0;
    if (bVar6) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar6) {
      LOCK();
      bVar6 = iVar5 == (int)plVar3[1];
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar6) {
        if (plVar3 == (longlong *)0x0) {
          return;
        }
        if (*(longlong *)(param_1 + 0x6d8) != 0) {
          FUN_14203dbf0(*(longlong *)(param_1 + 0x6d8),param_3);
        }
        LOCK();
        plVar2 = plVar3 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 != 1) {
          return;
        }
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 != 1) {
          return;
        }
        (**(code **)(*plVar3 + 8))(plVar3,1);
        return;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar6 = iVar5 == 0;
      if (bVar6) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 14109ed60 FUN_14109ed60 body=271 status=ok
// SIG undefined FUN_14109ed60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14109ed60(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
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
  local_b8[0] = FUN_14107d810;
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



// FUNCTION 14109ee70 FUN_14109ee70 body=271 status=ok
// SIG undefined FUN_14109ee70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14109ee70(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  code *local_b8 [2];
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
  local_b8[0] = FUN_14107d6f0;
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



// FUNCTION 14109ef80 FUN_14109ef80 body=1615 status=ok
// SIG undefined FUN_14109ef80(void)

void FUN_14109ef80(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  longlong lVar4;
  longlong *plVar5;
  wint_t wVar6;
  int iVar7;
  undefined8 uVar8;
  ushort *puVar9;
  char *pcVar10;
  ushort *puVar11;
  bool bVar12;
  
  FUN_1410a0500();
  if (*(longlong *)(param_1 + 0xdf8) != 0) {
    puVar11 = &DAT_143f3eda8;
    if ((int)param_2[1] == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (ushort *)*param_2;
    }
    pcVar10 = "purchaseClip";
    do {
      uVar3 = *puVar9;
      if ((uVar3 == 0) && (*pcVar10 == '\0')) goto LAB_14109f01a;
      if ((uint)uVar3 != (int)*pcVar10) {
        wVar6 = towlower(uVar3);
        iVar7 = tolower((int)*pcVar10);
        if ((uint)wVar6 != (int)(char)iVar7) goto LAB_14109f012;
      }
      puVar9 = puVar9 + 1;
      pcVar10 = pcVar10 + 1;
    } while( true );
  }
  goto LAB_14109f5af;
LAB_14109f10a:
  if ((uint)wVar6 != (int)(char)iVar7) {
    if ((int)param_2[1] == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (ushort *)*param_2;
    }
    pcVar10 = "healthFullClip";
    do {
      uVar3 = *puVar9;
      if ((uVar3 == 0) && (*pcVar10 == '\0')) goto LAB_14109f212;
      if ((uint)uVar3 != (int)*pcVar10) {
        wVar6 = towlower(uVar3);
        iVar7 = tolower((int)*pcVar10);
        if ((uint)wVar6 != (int)(char)iVar7) goto LAB_14109f20a;
      }
      puVar9 = puVar9 + 1;
      pcVar10 = pcVar10 + 1;
    } while( true );
  }
LAB_14109f112:
  lVar4 = *(longlong *)(param_1 + 0xdf8);
  plVar5 = *(longlong **)(lVar4 + 0x250);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar5[1];
    bVar12 = iVar7 == 0;
    if (bVar12) {
      *(int *)(plVar5 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (!bVar12) {
      LOCK();
      bVar12 = iVar7 == (int)plVar5[1];
      if (bVar12) {
        *(int *)(plVar5 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar12) {
        if (plVar5 != (longlong *)0x0) {
          lVar4 = *(longlong *)(lVar4 + 0x248);
          if (lVar4 != 0) {
            FUN_14203e030(lVar4,&DAT_14467aa64);
          }
          LOCK();
          plVar1 = plVar5 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar7 = (int)plVar5[1];
      bVar12 = iVar7 == 0;
      if (bVar12) {
        *(int *)(plVar5 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
  }
  goto LAB_14109f5af;
LAB_14109f20a:
  if ((uint)wVar6 != (int)(char)iVar7) {
    if ((int)param_2[1] == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (ushort *)*param_2;
    }
    pcVar10 = "ammoFullClip";
    do {
      uVar3 = *puVar9;
      if ((uVar3 == 0) && (*pcVar10 == '\0')) goto LAB_14109f312;
      if ((uint)uVar3 != (int)*pcVar10) {
        wVar6 = towlower(uVar3);
        iVar7 = tolower((int)*pcVar10);
        if ((uint)wVar6 != (int)(char)iVar7) goto LAB_14109f30a;
      }
      puVar9 = puVar9 + 1;
      pcVar10 = pcVar10 + 1;
    } while( true );
  }
LAB_14109f212:
  lVar4 = *(longlong *)(param_1 + 0xdf8);
  plVar5 = *(longlong **)(lVar4 + 0x290);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar5[1];
    bVar12 = iVar7 == 0;
    if (bVar12) {
      *(int *)(plVar5 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (!bVar12) {
      LOCK();
      bVar12 = iVar7 == (int)plVar5[1];
      if (bVar12) {
        *(int *)(plVar5 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar12) {
        if (plVar5 != (longlong *)0x0) {
          lVar4 = *(longlong *)(lVar4 + 0x288);
          if (lVar4 != 0) {
            FUN_14203e030(lVar4,&DAT_14467b494);
          }
          LOCK();
          plVar1 = plVar5 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar7 = (int)plVar5[1];
      bVar12 = iVar7 == 0;
      if (bVar12) {
        *(int *)(plVar5 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
  }
  goto LAB_14109f5af;
LAB_14109f30a:
  if ((uint)wVar6 != (int)(char)iVar7) {
    if ((int)param_2[1] == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (ushort *)*param_2;
    }
    pcVar10 = "bagFullClip";
    do {
      uVar3 = *puVar9;
      if ((uVar3 == 0) && (*pcVar10 == '\0')) goto LAB_14109f412;
      if ((uint)uVar3 != (int)*pcVar10) {
        wVar6 = towlower(uVar3);
        iVar7 = tolower((int)*pcVar10);
        if ((uint)wVar6 != (int)(char)iVar7) goto LAB_14109f40a;
      }
      puVar9 = puVar9 + 1;
      pcVar10 = pcVar10 + 1;
    } while( true );
  }
LAB_14109f312:
  lVar4 = *(longlong *)(param_1 + 0xdf8);
  plVar5 = *(longlong **)(lVar4 + 0x2e0);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar5[1];
    bVar12 = iVar7 == 0;
    if (bVar12) {
      *(int *)(plVar5 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (!bVar12) {
      LOCK();
      bVar12 = iVar7 == (int)plVar5[1];
      if (bVar12) {
        *(int *)(plVar5 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar12) {
        if (plVar5 != (longlong *)0x0) {
          lVar4 = *(longlong *)(lVar4 + 0x2d8);
          if (lVar4 != 0) {
            FUN_14203e030(lVar4,&DAT_14467bf28);
          }
          LOCK();
          plVar1 = plVar5 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar7 = (int)plVar5[1];
      bVar12 = iVar7 == 0;
      if (bVar12) {
        *(int *)(plVar5 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
  }
  goto LAB_14109f5af;
LAB_14109f40a:
  if ((uint)wVar6 != (int)(char)iVar7) {
    if ((int)param_2[1] != 0) {
      puVar11 = (ushort *)*param_2;
    }
    pcVar10 = "insufficientFunds";
    do {
      uVar3 = *puVar11;
      if ((uVar3 == 0) && (*pcVar10 == '\0')) goto LAB_14109f508;
      if ((uint)uVar3 != (int)*pcVar10) {
        wVar6 = towlower(uVar3);
        iVar7 = tolower((int)*pcVar10);
        if ((uint)wVar6 != (int)(char)iVar7) goto LAB_14109f500;
      }
      puVar11 = puVar11 + 1;
      pcVar10 = pcVar10 + 1;
    } while( true );
  }
LAB_14109f412:
  lVar4 = *(longlong *)(param_1 + 0xdf8);
  plVar5 = *(longlong **)(lVar4 + 0x360);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar5[1];
    bVar12 = iVar7 == 0;
    if (bVar12) {
      *(int *)(plVar5 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (!bVar12) {
      LOCK();
      bVar12 = iVar7 == (int)plVar5[1];
      if (bVar12) {
        *(int *)(plVar5 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar12) {
        if (plVar5 != (longlong *)0x0) {
          lVar4 = *(longlong *)(lVar4 + 0x358);
          if (lVar4 != 0) {
            FUN_14203e030(lVar4,&DAT_14467bf30);
          }
          LOCK();
          plVar1 = plVar5 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar7 = (int)plVar5[1];
      bVar12 = iVar7 == 0;
      if (bVar12) {
        *(int *)(plVar5 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
  }
  goto LAB_14109f5af;
LAB_14109f500:
  if ((uint)wVar6 == (int)(char)iVar7) {
LAB_14109f508:
    lVar4 = *(longlong *)(param_1 + 0xdf8);
    plVar5 = *(longlong **)(lVar4 + 0x3a0);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      iVar7 = (int)plVar5[1];
      bVar12 = iVar7 == 0;
      if (bVar12) {
        *(int *)(plVar5 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
      while (!bVar12) {
        LOCK();
        bVar12 = iVar7 == (int)plVar5[1];
        if (bVar12) {
          *(int *)(plVar5 + 1) = iVar7 + 1;
        }
        UNLOCK();
        if (bVar12) {
          if (plVar5 != (longlong *)0x0) {
            lVar4 = *(longlong *)(lVar4 + 0x398);
            if (lVar4 != 0) {
              FUN_14203e030(lVar4,&DAT_14467bf38);
            }
            LOCK();
            plVar1 = plVar5 + 1;
            lVar4 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              iVar7 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          break;
        }
        LOCK();
        iVar7 = (int)plVar5[1];
        bVar12 = iVar7 == 0;
        if (bVar12) {
          *(int *)(plVar5 + 1) = 0;
          iVar7 = 0;
        }
        UNLOCK();
      }
    }
    uVar8 = FUN_140e971d0(param_1);
    FUN_140ab72e0(uVar8,4);
  }
  goto LAB_14109f5af;
LAB_14109f012:
  if ((uint)wVar6 != (int)(char)iVar7) {
    if ((int)param_2[1] == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (ushort *)*param_2;
    }
    pcVar10 = "soldClip";
    do {
      uVar3 = *puVar9;
      if ((uVar3 == 0) && (*pcVar10 == '\0')) goto LAB_14109f112;
      if ((uint)uVar3 != (int)*pcVar10) {
        wVar6 = towlower(uVar3);
        iVar7 = tolower((int)*pcVar10);
        if ((uint)wVar6 != (int)(char)iVar7) goto LAB_14109f10a;
      }
      puVar9 = puVar9 + 1;
      pcVar10 = pcVar10 + 1;
    } while( true );
  }
LAB_14109f01a:
  lVar4 = *(longlong *)(param_1 + 0xdf8);
  plVar5 = *(longlong **)(lVar4 + 0x210);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    iVar7 = (int)plVar5[1];
    bVar12 = iVar7 == 0;
    if (bVar12) {
      *(int *)(plVar5 + 1) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (!bVar12) {
      LOCK();
      bVar12 = iVar7 == (int)plVar5[1];
      if (bVar12) {
        *(int *)(plVar5 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar12) {
        if (plVar5 != (longlong *)0x0) {
          lVar4 = *(longlong *)(lVar4 + 0x208);
          if (lVar4 != 0) {
            FUN_14203e030(lVar4,&DAT_14467a8d4);
          }
          LOCK();
          plVar1 = plVar5 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar7 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar7 = (int)plVar5[1];
      bVar12 = iVar7 == 0;
      if (bVar12) {
        *(int *)(plVar5 + 1) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
  }
LAB_14109f5af:
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14109f5d0 FUN_14109f5d0 body=94 status=ok
// SIG undefined FUN_14109f5d0(void)

void FUN_14109f5d0(undefined8 param_1)

{
  longlong local_18 [2];
  
  local_18[1] = 8;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"scaleUp",0x10);
  FUN_142088910(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14109f630 FUN_14109f630 body=91 status=ok
// SIG undefined FUN_14109f630(void)

void FUN_14109f630(longlong param_1,longlong param_2,longlong param_3)

{
  if (*(char *)(param_1 + 0x679) == '\0') {
    FUN_1410a6470(param_1,5);
    *(undefined1 *)(param_1 + 0x679) = 1;
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_3 + 0x18) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14109f690 FUN_14109f690 body=2444 status=ok
// SIG undefined FUN_14109f690(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14109f690(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_238 [32];
  undefined4 local_218;
  undefined1 local_210 [8];
  longlong *local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  longlong local_1e8;
  longlong *local_1e0;
  undefined4 *local_1d8;
  ulonglong *puStack_1d0;
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  longlong local_190;
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
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [16];
  undefined4 local_78 [2];
  undefined8 local_70;
  longlong *local_60;
  char local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_238;
  bVar12 = false;
  local_218 = 0;
  if (((param_2 == 0) || (cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x3b0), cVar4 == '\0')) ||
     (*(longlong *)(param_1 + 0x350) == 0)) goto LAB_14109ff37;
  if ((*(char *)(param_1 + 0x17b) == '\0') &&
     ((*(longlong *)(param_1 + 0x350) == 0 ||
      (*(longlong *)(*(longlong *)(param_1 + 0x350) + 0x48) == 0)))) {
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x3b0);
    lVar6 = FWeakObjectPtr::Get(lVar6 + 0x59c);
    if (lVar6 == 0) goto LAB_14109ff37;
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x3b0);
    lVar6 = FWeakObjectPtr::Get(lVar6 + 0x59c);
    if (((*(char *)(lVar6 + 0xb8) != '\x01') || (cVar4 = FUN_14107db90(param_1), cVar4 == '\0')) ||
       ((*(char *)(param_2 + 0xa0) == '\0' || (*(char *)(param_2 + 0xa1) != '\0'))))
    goto LAB_14109ff37;
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_160,L"Edit Group",L"GFxLobbyWidget",L"EditGroup");
    FUN_142ee25d0(param_2,DAT_146874598,uVar7,1);
    local_208 = local_158;
  }
  else {
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x3b0);
    lVar6 = FWeakObjectPtr::Get(lVar6 + 0x59c);
    if ((lVar6 != 0) &&
       (((0 < *(int *)(lVar6 + 0x48) &&
         (plVar11 = *(longlong **)
                     (*(longlong *)(lVar6 + 0x40) + -8 + (longlong)*(int *)(lVar6 + 0x48) * 8),
         plVar11 != (longlong *)0x0)) && (lVar6 = (**(code **)(*plVar11 + 0x278))(), lVar6 != 0))))
    {
      lVar8 = UEditableTextBoxWidgetStyle::StaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_142f11000(param_2,0);
        return;
      }
    }
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_210,L"Select",L"GFxLobbyWidget",L"SelectText");
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x350) + 0x48);
    if (lVar6 == *(longlong *)(param_1 + 0x2e8)) {
      iVar5 = FUN_1410828f0(param_1);
      if (iVar5 < 1) {
LAB_14109f984:
        uVar7 = FUN_1404b03b0();
        FText::operator=(local_210,uVar7);
        goto LAB_14109fa6c;
      }
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_148,L"Player Options",L"GFxLobbyWidget",L"PlayerOptionsText");
      FText::operator=(local_210,uVar7);
      local_128 = local_140;
LAB_14109fa39:
      if (local_128 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_128 + 1;
        lVar6 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_128)(local_128);
          LOCK();
          piVar2 = (int *)((longlong)local_128 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_128 + 8))(local_128,1);
          }
        }
      }
    }
    else {
      if (lVar6 == *(longlong *)(param_1 + 0x328)) {
        uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_130,L"Open Roster",L"GFxLobbyWidget",L"OpenRosterText");
        FText::operator=(local_210,uVar7);
        goto LAB_14109fa39;
      }
      lVar8 = *(longlong *)(param_1 + 0x348);
      if (((lVar8 == 0) || (plVar11 = *(longlong **)(lVar8 + 0x1b8), plVar11 == (longlong *)0x0)) ||
         (lVar6 != lVar8)) {
        if (((*(longlong *)(param_1 + 0x340) != 0) && (lVar6 == *(longlong *)(param_1 + 0x340))) &&
           (cVar4 = FUN_141087530(param_1), cVar4 == '\0')) {
          if ((*(longlong *)(param_1 + 0x3c0) == 0) || (cVar4 = FUN_140bca8a0(), cVar4 == '\0')) {
            uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                              (local_100,L"Quit Game",L"GFxLobbyWidget",L"QuitGameText");
            FText::operator=(local_210,uVar7);
            local_128 = local_f8;
          }
          else {
            uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                              (local_118,L"Leave Group",L"GFxLobbyWidget",L"LeaveGroupText");
            FText::operator=(local_210,uVar7);
            local_128 = local_110;
          }
          goto LAB_14109fa39;
        }
      }
      else {
        lVar6 = (**(code **)(*plVar11 + 0x2b0))(plVar11);
        if (lVar6 != 0) {
          lVar8 = URemnantGameInstance::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) && (*(char *)(lVar6 + 0x308) != '\0')) goto LAB_14109f984;
        }
      }
    }
LAB_14109fa6c:
    cVar4 = FText::IsEmpty(local_210);
    if (cVar4 == '\0') {
      FUN_142ee2030(param_2,DAT_146b3e2a0,local_210);
    }
    FText::FText(local_1c8);
    if ((((*(longlong *)(*(longlong *)(param_1 + 0x350) + 0x48) == *(longlong *)(param_1 + 0x388))
         && (*(char *)(param_1 + 0x3a8) != '\0')) && (*(int *)(param_1 + 0x390) == 2)) &&
       (*(longlong *)(param_1 + 0x3c0) != 0)) {
      iVar5 = FUN_142eb7a00();
      if ((iVar5 < 0) || (*(int *)(param_1 + 1000) <= iVar5)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x3e0) + 8 + (longlong)iVar5 * 0x18);
        local_1f8 = *(longlong *)(*(longlong *)(param_1 + 0x3e0) + (longlong)iVar5 * 0x18);
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
        }
        uStack_1f0 = plVar11;
        if (local_1f8 == 0) {
LAB_14109fb5f:
          bVar3 = false;
        }
        else {
          local_1f8._4_4_ = (undefined4)((ulonglong)local_1f8 >> 0x20);
          uStack_1f0._0_4_ = SUB84(plVar11,0);
          uStack_1f0._4_4_ = (undefined4)((ulonglong)plVar11 >> 0x20);
          bVar12 = true;
          local_1a8 = (undefined4)local_1f8;
          uStack_1a4 = local_1f8._4_4_;
          uStack_1a0 = (undefined4)uStack_1f0;
          uStack_19c = uStack_1f0._4_4_;
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
          }
          cVar4 = FUN_140ba7eb0(*(undefined8 *)(param_1 + 0x3c0),&local_1a8);
          if (cVar4 == '\0') goto LAB_14109fb5f;
          bVar3 = true;
        }
        if ((bVar12) &&
           (plVar11 = (longlong *)CONCAT44(uStack_19c,uStack_1a0), plVar11 != (longlong *)0x0)) {
          LOCK();
          plVar1 = plVar11 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        if (bVar3) {
          uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                            (local_d0,L"{0}|platform(default=View Profile,xbox=View Gamercard)",
                             L"GFxLobbyWidget",L"ViewProfileText");
          puVar9 = (undefined8 *)FTextFormat::FTextFormat(local_88,uVar7);
          local_78[0] = 0;
          local_1d8 = local_78;
          local_50 = '\0';
          puStack_1d0 = local_48;
          local_198 = *puVar9;
          local_190 = puVar9[1];
          local_70 = 0;
          if (local_190 != 0) {
            LOCK();
            *(int *)(local_190 + 8) = *(int *)(local_190 + 8) + 1;
            UNLOCK();
          }
          uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                  TArray<FFormatArgumentValue,FDefaultAllocator>(local_188,&local_1d8);
          uVar7 = FText::Format(local_e8,&local_198,uVar7);
          FText::FText(local_178,uVar7);
          if (local_e0 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_e0 + 1;
            lVar6 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_e0)(local_e0);
              LOCK();
              piVar2 = (int *)((longlong)local_e0 + 0xc);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_e0 + 8))(local_e0,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_188);
          if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
            LOCK();
            plVar11 = local_60 + 1;
            lVar6 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar2 = (int *)((longlong)local_60 + 0xc);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_60 + 8))(local_60,1);
              }
            }
          }
          plVar11 = (longlong *)puVar9[1];
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar11 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar2 = (int *)((longlong)plVar11 + 0xc);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11,1);
              }
            }
          }
          FText::operator=(local_1c8,local_178);
          if (local_170 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_170 + 1;
            lVar6 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_170)(local_170);
              LOCK();
              piVar2 = (int *)((longlong)local_170 + 0xc);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_170 + 8))(local_170,1);
              }
            }
          }
          if (local_c8 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_c8 + 1;
            lVar6 = *plVar11;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_c8)(local_c8);
              LOCK();
              piVar2 = (int *)((longlong)local_c8 + 0xc);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_c8 + 8))(local_c8,1);
              }
            }
          }
        }
        plVar11 = uStack_1f0;
        if (uStack_1f0 != (longlong *)0x0) {
          LOCK();
          plVar1 = uStack_1f0 + 1;
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*uStack_1f0)(uStack_1f0);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*uStack_1f0 + 8))(uStack_1f0,1);
            }
          }
        }
      }
    }
    cVar4 = FText::IsEmpty(local_1c8);
    if (cVar4 == '\0') {
      FUN_142ee2030(param_2,DAT_146874590,local_1c8);
    }
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x350) + 0x48);
    if (((lVar6 == *(longlong *)(param_1 + 0x2e8)) || (lVar6 == *(longlong *)(param_1 + 0x340))) ||
       (lVar6 == *(longlong *)(param_1 + 0x328))) {
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_a0,L"Back",L"GFxLobbyWidget",L"BackText");
      FUN_142ee2030(param_2,DAT_146b3e2b8,uVar7);
      plVar11 = local_98;
    }
    else {
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_b8,L"Cancel",L"GFxLobbyWidget",L"CancelText");
      FUN_142ee2030(param_2,DAT_146b3e2b8,uVar7);
      plVar11 = local_b0;
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar11 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_1c0 + 1;
      lVar6 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_1c0)(local_1c0);
        LOCK();
        piVar2 = (int *)((longlong)local_1c0 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_1c0 + 8))(local_1c0,1);
        }
      }
    }
  }
  if (local_208 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_208 + 1;
    lVar6 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_208)(local_208);
      LOCK();
      piVar2 = (int *)((longlong)local_208 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_208 + 8))(local_208,1);
      }
    }
  }
LAB_14109ff37:
  if (*(longlong *)(param_1 + 0x340) != 0) {
    cVar4 = FUN_141087530(param_1);
    lVar6 = *(longlong *)(param_1 + 0x340);
    plVar11 = *(longlong **)(lVar6 + 0x2d0);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      iVar5 = (int)plVar11[1];
      bVar12 = iVar5 == 0;
      if (bVar12) {
        *(int *)(plVar11 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      while (!bVar12) {
        LOCK();
        bVar12 = iVar5 == (int)plVar11[1];
        if (bVar12) {
          *(int *)(plVar11 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar12) {
          if (plVar11 == (longlong *)0x0) {
            return;
          }
          local_1e8 = *(longlong *)(lVar6 + 0x2c8);
          local_1e0 = plVar11;
          if (local_1e8 != 0) {
            pwVar10 = L"settings";
            if (cVar4 == '\0') {
              pwVar10 = L"leave";
            }
            FUN_14203e4e0(local_1e8,pwVar10);
          }
          plVar1 = local_1e0;
          LOCK();
          plVar11 = plVar11 + 1;
          lVar6 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar6 != 1) {
            return;
          }
          (**(code **)*local_1e0)(local_1e0);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 != 1) {
            return;
          }
          (**(code **)(*local_1e0 + 8))(local_1e0,1);
          return;
        }
        LOCK();
        iVar5 = (int)plVar11[1];
        bVar12 = iVar5 == 0;
        if (bVar12) {
          *(int *)(plVar11 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
      }
    }
  }
  return;
}



// FUNCTION 1410a0020 FUN_1410a0020 body=145 status=ok
// SIG undefined FUN_1410a0020(void)

void FUN_1410a0020(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x5b0) + 0xa2) = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x5b0) + 0xa3) = 1;
    FUN_142f11000(*(undefined8 *)(param_1 + 0x5b0),1);
  }
  FUN_142ecdac0(param_1);
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    uVar1 = FUN_1404b03b0();
    FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_1468745b8,uVar1,1);
    uVar1 = FUN_1404b03b0();
    FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_1468745c0,uVar1,1);
    return;
  }
  return;
}



// FUNCTION 1410a00c0 FUN_1410a00c0 body=223 status=ok
// SIG undefined FUN_1410a00c0(void)

void FUN_1410a00c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FUN_142ecdac0();
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_28,L"Back",L"GFxTrophyCaseMenu",L"BackText");
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2b8,uVar5);
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
    uVar5 = FUN_1404b03b0();
    FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_146874540,uVar5,1);
    uVar5 = FUN_1404b03b0();
    FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_146874548,uVar5,1);
  }
  return;
}



// FUNCTION 1410a01a0 FUN_1410a01a0 body=863 status=ok
// SIG undefined FUN_1410a01a0(void)

void FUN_1410a01a0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 local_38 [8];
  longlong *local_30;
  
  FUN_142ecdac0();
  if (*(longlong *)(param_1 + 0x5b0) == 0) {
    return;
  }
  cVar4 = FWeakObjectPtr::IsValid(param_1 + 0xb00);
  if ((cVar4 == '\0') && (*(char *)(param_1 + 0xb20) != '\x03')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  lVar6 = *(longlong *)(param_1 + 0xd48);
  lVar5 = FUN_142eb65a0(param_1);
  if (lVar5 == lVar6) {
    lVar6 = FUN_141083150();
    bVar9 = lVar6 != 0;
    if (lVar6 != 0) {
      uVar7 = FUN_141083150(param_1);
      cVar4 = FUN_14107de60(param_1,uVar7);
      if (cVar4 != '\0') {
        FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2a0,param_1 + 0x1098);
      }
    }
    cVar4 = FUN_141084de0(param_1);
    if ((cVar4 != '\0') &&
       ((*(longlong *)(param_1 + 0xb58) == 0 ||
        (*(char *)(*(longlong *)(param_1 + 0xb58) + 0x670) != '\x03')))) {
      FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146874738,param_1 + 0x10b0);
    }
    if ((!bVar3) && (bVar9)) {
      FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146874590,param_1 + 0x1050);
    }
    uVar7 = FUN_141083150(param_1);
    cVar4 = FUN_1411d5660(uVar7,*(undefined8 *)(param_1 + 0xa18));
    if ((cVar4 != '\0') && (plVar8 = (longlong *)FUN_1410822f0(param_1), plVar8 != (longlong *)0x0))
    {
      lVar6 = (**(code **)(*plVar8 + 0x340))(plVar8);
      cVar4 = FWeakObjectPtr::IsValid(lVar6 + 0xdc);
      if (cVar4 != '\0') {
        uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_38,L"Mark as Junk/Favorite",L"GFxVendingMachineMenu",
                           L"ToggleTrashFavorite");
        FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146874728,uVar7);
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_30 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
      }
    }
  }
  else {
    lVar6 = FUN_142eb65a0(param_1);
    if (lVar6 != *(longlong *)(param_1 + 0xb70)) goto LAB_1410a0410;
    lVar6 = FUN_141083150(param_1);
    bVar9 = lVar6 != 0;
    if ((lVar6 != 0) && (*(char *)(param_1 + 0xb78) != '\x01')) {
      lVar6 = param_1 + 0x1080;
      if (*(char *)(param_1 + 0xb78) != '\x02') {
        lVar6 = param_1 + 0x1068;
      }
      FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2a0,lVar6);
    }
    if (!bVar3) {
      if (!bVar9) goto LAB_1410a0410;
      FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146874590,param_1 + 0x1050);
    }
  }
  if (bVar9) {
    FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146874730,param_1 + 0x10c8);
  }
LAB_1410a0410:
  lVar6 = param_1 + 0x1038;
  if (!bVar3) {
    lVar6 = param_1 + 0x1020;
  }
  FUN_142ee2030(*(undefined8 *)(param_1 + 0x5b0),DAT_146b3e2b8,lVar6);
  if ((((*(longlong *)(param_1 + 0xb58) == 0) ||
       (*(char *)(*(longlong *)(param_1 + 0xb58) + 0x670) != '\x03')) &&
      (*(char *)(param_1 + 0xb20) != '\x03')) &&
     (cVar4 = FWeakObjectPtr::IsValid(param_1 + 0xb00), cVar4 == '\0')) {
    uVar7 = FUN_1404b03b0();
    FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_1468745b8,uVar7,1);
    uVar7 = FUN_1404b03b0();
    FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_1468745c0,uVar7,1);
  }
  if (*(char *)(param_1 + 0x9d9) != '\0') {
    return;
  }
  uVar7 = FUN_1404b03b0();
  FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_1468745d0,uVar7,1);
  uVar7 = FUN_1404b03b0();
  FUN_142ee25d0(*(undefined8 *)(param_1 + 0x5b0),DAT_1468745c8,uVar7,1);
  return;
}



// FUNCTION 1410a0500 FUN_1410a0500 body=140 status=ok
// SIG undefined FUN_1410a0500(void)

void FUN_1410a0500(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((*(longlong *)(param_1 + 0xa18) != 0) && (*(longlong *)(param_1 + 0xdf8) != 0)) {
    uVar1 = ASwitchActor::GetSelectedOption();
    uVar2 = FUN_142b47070(*(undefined8 *)(param_1 + 0xa18));
    FUN_1410a4990(*(undefined8 *)(param_1 + 0xdf8),uVar1,uVar2);
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
      FUN_142ff7c90(*(undefined8 *)(param_1 + 0xa18),
                    *(undefined8 *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x2c0));
      return;
    }
  }
  return;
}



// FUNCTION 1410a0590 FUN_1410a0590 body=1852 status=ok
// SIG undefined FUN_1410a0590(void)

void FUN_1410a0590(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  short sVar3;
  short sVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  short *psVar11;
  undefined2 *puVar12;
  wchar_t *pwVar13;
  int *piVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  wchar_t *pwVar18;
  wchar_t *pwVar19;
  uint uVar20;
  wchar_t *pwVar21;
  longlong *plVar22;
  longlong lVar23;
  bool bVar24;
  int local_108;
  int local_104;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  uint local_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_78;
  uint local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  longlong local_58 [2];
  longlong local_48;
  undefined8 local_40;
  
  if (*(longlong *)(param_1 + 0x170) != 0) {
    lVar23 = param_2[1];
    iVar7 = FUN_142eb7440();
    pwVar16 = (wchar_t *)0x0;
    if (iVar7 == (int)lVar23) {
      lVar23 = param_2[1];
      pwVar19 = pwVar16;
      pwVar21 = pwVar16;
      pwVar13 = pwVar16;
      if (0 < (longlong)(int)lVar23) {
        do {
          lVar9 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x170),pwVar19);
          if (lVar9 == 0) goto LAB_1410a07e1;
          lVar10 = UXGameInstance::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
            bVar24 = false;
          }
          else {
            bVar24 = true;
          }
          if (!bVar24) goto LAB_1410a07e1;
          lVar10 = *param_2;
          if (*(int *)(lVar10 + 8 + (longlong)pwVar13) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = *(undefined2 **)(lVar10 + (longlong)pwVar13);
          }
          if (*(int *)(lVar9 + 0x310) == 0) {
            psVar11 = &DAT_143f3eda8;
          }
          else {
            psVar11 = *(short **)(lVar9 + 0x308);
          }
          lVar17 = (longlong)puVar12 - (longlong)psVar11;
          do {
            sVar3 = *psVar11;
            sVar4 = *(short *)((longlong)psVar11 + lVar17);
            if (sVar3 != sVar4) break;
            psVar11 = psVar11 + 1;
          } while (sVar4 != 0);
          if ((sVar3 == sVar4) &&
             (*(longlong *)(lVar9 + 0x318) == *(longlong *)(lVar10 + 0x10 + (longlong)pwVar13))) {
            bVar24 = true;
          }
          else {
            bVar24 = false;
          }
          if (!bVar24) goto LAB_1410a07e1;
          pwVar21 = (wchar_t *)((longlong)pwVar21 + 1);
          pwVar19 = (wchar_t *)(ulonglong)((int)pwVar19 + 1);
          pwVar13 = pwVar13 + 0xc;
        } while ((longlong)pwVar21 < (longlong)(int)lVar23);
      }
      iVar7 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x170));
      lVar23 = (longlong)iVar7;
      pwVar19 = pwVar16;
      if (0 < iVar7) {
        do {
          lVar9 = *param_2;
          lVar10 = FUN_142eb6a30(*(undefined8 *)(param_1 + 0x170),pwVar16);
          if (lVar10 != 0) {
            lVar17 = UXGameInstance::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar17 + 0x90) * 8) != lVar17 + 0x88)) {
              bVar24 = false;
            }
            else {
              bVar24 = true;
            }
            if (bVar24) {
              FUN_142085870(lVar10,&local_d8,L"navBarIconOuter");
              if (local_d8 != 0) {
                pwVar21 = L"unselected";
                if (*(longlong *)(lVar9 + 0x10 + (longlong)pwVar19) == param_3) {
                  pwVar21 = L"selected";
                }
                FUN_14203e4e0(local_d8,pwVar21);
              }
              plVar22 = local_d0;
              if (local_d0 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_d0 + 1;
                lVar9 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*local_d0)(local_d0);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar22 + 0xc);
                  iVar7 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar7 == 1) {
                    (**(code **)(*plVar22 + 8))(plVar22,1);
                  }
                }
              }
            }
          }
          pwVar16 = (wchar_t *)(ulonglong)((int)pwVar16 + 1);
          lVar23 = lVar23 + -1;
          pwVar19 = pwVar19 + 0xc;
        } while (lVar23 != 0);
      }
    }
    else {
LAB_1410a07e1:
      FUN_1407665e0(*(longlong *)(param_1 + 0x170) + 0x1a8,param_1);
      pwVar21 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnNavCellClicked",L"::");
      pwVar19 = pwVar16;
      while (pwVar13 = pwVar21, pwVar13 != (wchar_t *)0x0) {
        pwVar21 = _guard_xfg_dispatch_icall_nop(pwVar13 + 1,L"::");
        pwVar19 = pwVar13;
      }
      FName::FName(&local_e0,pwVar19 + 2,1);
      lVar23 = *(longlong *)(param_1 + 0x170);
      plVar22 = (longlong *)(lVar23 + 0x1a8);
      FWeakObjectPtr::operator=(&local_108,0);
      local_100 = 0;
      FWeakObjectPtr::operator=(&local_108,param_1);
      local_100 = local_e0;
      if ((local_e0 != 0) && (lVar9 = FWeakObjectPtr::Get(&local_108), lVar9 != 0)) {
        UObject::FindFunction(lVar9,local_100);
      }
      piVar2 = (int *)*plVar22;
      iVar7 = *(int *)(lVar23 + 0x1b0);
      for (piVar14 = piVar2; piVar14 != piVar2 + (longlong)iVar7 * 4; piVar14 = piVar14 + 4) {
        if (((*piVar14 == local_108) && (piVar14[1] == local_104)) ||
           ((cVar6 = FWeakObjectPtr::IsValid(piVar14), cVar6 == '\0' &&
            (cVar6 = FWeakObjectPtr::IsValid(&local_108), cVar6 == '\0')))) {
          bVar24 = true;
        }
        else {
          bVar24 = false;
        }
        if ((bVar24) && (*(longlong *)(piVar14 + 2) == local_100)) {
          bVar24 = true;
        }
        else {
          bVar24 = false;
        }
        if (bVar24) {
          if ((int)((longlong)piVar14 - (longlong)piVar2 >> 4) != -1) goto LAB_1410a0950;
          break;
        }
      }
      iVar7 = *(int *)(lVar23 + 0x1b0);
      lVar9 = (longlong)iVar7;
      *(int *)(lVar23 + 0x1b0) = iVar7 + 1;
      if (*(int *)(lVar23 + 0x1b4) < iVar7 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar22,iVar7);
      }
      lVar23 = *plVar22;
      *(int *)(lVar23 + lVar9 * 0x10) = local_108;
      *(int *)(lVar23 + 4 + lVar9 * 0x10) = local_104;
      *(longlong *)(lVar23 + 8 + lVar9 * 0x10) = local_100;
LAB_1410a0950:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar22);
      FUN_142ecffe0(*(undefined8 *)(param_1 + 0x170));
      if (0 < (int)param_2[1]) {
        local_f8 = 0;
        pwVar19 = pwVar16;
        do {
          lVar23 = local_f8;
          lVar9 = *param_2 + local_f8;
          FString::FString(local_58,lVar9);
          local_48 = *(longlong *)(lVar9 + 0x10);
          local_f0 = 0;
          local_e8 = 10;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f0,0);
          FGenericPlatformString::Memcpy(local_f0,L"NavButton",0x14);
          uVar5 = *(undefined8 *)(param_1 + 0x170);
          local_40 = UXGameInstance::GetPrivateStaticClass();
          pwVar21 = (wchar_t *)FUN_142ebcee0(uVar5,&local_f0,local_40,0);
          if (pwVar21 == (wchar_t *)0x0) {
LAB_1410a0a2e:
            pwVar21 = pwVar16;
          }
          else {
            lVar9 = UXGameInstance::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(pwVar21 + 8) + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(pwVar21 + 8) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
              bVar24 = false;
            }
            else {
              bVar24 = true;
            }
            if (!bVar24) goto LAB_1410a0a2e;
          }
          if (local_f0 != 0) {
            FMemory::Free();
          }
          if (pwVar21 != (wchar_t *)0x0) {
            *(undefined1 *)(pwVar21 + 0xcc) = 0;
            lVar23 = *param_2 + lVar23;
            FString::operator=(pwVar21 + 0x184,lVar23);
            *(longlong *)(pwVar21 + 0x18c) = *(longlong *)(lVar23 + 0x10);
            cVar6 = FUN_14208d370(pwVar21,pwVar21 + 400,L"navBarIconOuter.navBarIcon");
            if (cVar6 != '\0') {
              if (*(int *)(pwVar21 + 0x188) == 0) {
                puVar12 = &DAT_143f3eda8;
              }
              else {
                puVar12 = *(undefined2 **)(pwVar21 + 0x184);
              }
              pwVar13 = *(wchar_t **)(pwVar21 + 0x194);
              pwVar15 = pwVar13;
              pwVar18 = pwVar16;
              if (pwVar13 != (wchar_t *)0x0) {
                pwVar15 = pwVar13 + 4;
                LOCK();
                iVar7 = *(int *)pwVar15;
                bVar24 = iVar7 == 0;
                if (bVar24) {
                  pwVar15[0] = L'\0';
                  pwVar15[1] = L'\0';
                  iVar7 = 0;
                }
                UNLOCK();
                while (pwVar15 = pwVar16, !bVar24) {
                  LOCK();
                  bVar24 = iVar7 == *(int *)(pwVar13 + 4);
                  if (bVar24) {
                    *(int *)(pwVar13 + 4) = iVar7 + 1;
                  }
                  UNLOCK();
                  if (bVar24) {
                    pwVar15 = pwVar13;
                    pwVar18 = *(wchar_t **)(pwVar21 + 400);
                    break;
                  }
                  pwVar15 = pwVar13 + 4;
                  LOCK();
                  iVar7 = *(int *)pwVar15;
                  bVar24 = iVar7 == 0;
                  if (bVar24) {
                    pwVar15[0] = L'\0';
                    pwVar15[1] = L'\0';
                    iVar7 = 0;
                  }
                  UNLOCK();
                }
              }
              FUN_14203e4e0(pwVar18,puVar12);
              if (pwVar15 != (wchar_t *)0x0) {
                LOCK();
                pwVar13 = pwVar15 + 4;
                iVar7 = *(int *)pwVar13;
                *(int *)pwVar13 = *(int *)pwVar13 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (*(code *)**(undefined8 **)pwVar15)(pwVar15);
                  LOCK();
                  pwVar13 = pwVar15 + 6;
                  iVar7 = *(int *)pwVar13;
                  *(int *)pwVar13 = *(int *)pwVar13 + -1;
                  UNLOCK();
                  if (iVar7 == 1) {
                    (**(code **)(*(longlong *)pwVar15 + 8))(pwVar15,1);
                  }
                }
              }
            }
            FUN_142085870(pwVar21,&local_c8,L"navBarIconOuter");
            if (local_c8 != 0) {
              pwVar13 = L"unselected";
              if (local_48 == param_3) {
                pwVar13 = L"selected";
              }
              FUN_14203e4e0(local_c8,pwVar13);
            }
            plVar22 = local_c0;
            if (local_c0 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_c0 + 1;
              lVar23 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar23 == 1) {
                (**(code **)*local_c0)(local_c0);
                LOCK();
                piVar2 = (int *)((longlong)plVar22 + 0xc);
                iVar7 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar22 + 8))(plVar22,1);
                }
              }
            }
            (**(code **)(*(longlong *)(pwVar21 + 0xb8) + 0x38))(pwVar21 + 0xb8,1);
            local_a8 = (longlong *)0x0;
            local_a0 = 2;
            local_b8 = 0xffffffffffffffff;
            uStack_b0 = 0xffffffffffffffff;
            local_98 = 1;
            FUN_14208efa0(pwVar21,"enabled",&local_b8);
            if ((local_a0 >> 6 & 1) != 0) {
              (**(code **)(*local_a8 + 0x10))(local_a8,&local_b8,CONCAT71(uStack_97,local_98));
            }
            local_78 = (longlong *)0x0;
            local_70 = 2;
            local_88 = 0xffffffffffffffff;
            uStack_80 = 0xffffffffffffffff;
            local_68 = 1;
            FUN_14208efa0(pwVar21,"mouseEnabled",&local_88);
            lVar23 = local_f8;
            if ((local_70 >> 6 & 1) != 0) {
              (**(code **)(*local_78 + 0x10))(local_78,&local_88,CONCAT71(uStack_67,local_68));
              lVar23 = local_f8;
            }
          }
          if (local_58[0] != 0) {
            FMemory::Free();
          }
          local_f8 = lVar23 + 0x18;
          uVar20 = (int)pwVar19 + 1;
          pwVar19 = (wchar_t *)(ulonglong)uVar20;
        } while ((int)uVar20 < (int)param_2[1]);
      }
      uVar8 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x170));
      FUN_1410a59a0(param_1,uVar8);
    }
  }
  return;
}



// FUNCTION 1410a0cd0 FUN_1410a0cd0 body=2637 status=ok
// SIG undefined FUN_1410a0cd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410a0cd0(longlong param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  wchar_t *pwVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 uVar14;
  int *piVar15;
  wchar_t *pwVar16;
  longlong **pplVar17;
  wchar_t *pwVar18;
  bool bVar19;
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0 [2];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  int local_1d0;
  int local_1cc;
  longlong local_1c8;
  longlong local_1c0;
  ulonglong local_1b8;
  longlong local_1b0;
  ulonglong local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  longlong local_180;
  longlong local_178;
  longlong *local_170 [2];
  longlong *local_160;
  undefined8 local_158;
  undefined1 local_150 [8];
  code *local_148;
  longlong lStack_140;
  undefined1 local_138 [16];
  undefined1 *local_128 [2];
  longlong local_118 [4];
  longlong *local_f8;
  int local_e8;
  undefined1 *local_d8 [2];
  longlong local_c8 [4];
  longlong *local_a8;
  int local_98;
  undefined1 *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  FUN_14107e160();
  if ((*(longlong *)(param_1 + 0xa08) != 0) &&
     (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xa08) + 0xc90),
     *(longlong *)(param_1 + 0xb60) = lVar5, lVar5 != 0)) {
    uVar4 = FUN_140e4c7f0();
    *(undefined8 *)(param_1 + 0xb68) = uVar4;
    uVar4 = FUN_140e4c930(*(undefined8 *)(param_1 + 0xb60));
    pwVar18 = (wchar_t *)0x0;
    *(undefined8 *)(param_1 + 0xb50) = uVar4;
    if (*(char *)(param_1 + 0x938) == '\0') {
      cVar3 = '\0';
      lVar5 = FUN_140e971d0(param_1);
      if (lVar5 != 0) {
        cVar3 = FUN_142dcfc60(lVar5);
      }
      *(undefined1 *)(param_1 + 0x938) = 1;
      local_1b8 = 0;
      pwVar16 = L"leftItemCardLoader";
      if (cVar3 == '\x03') {
        pwVar16 = L"leftItemCardLoaderAbbreviated";
      }
      local_1c0 = 0;
      if (*pwVar16 != L'\0') {
        lVar5 = -1;
        do {
          lVar5 = lVar5 + 1;
        } while (pwVar16[lVar5] != L'\0');
        uVar13 = (int)lVar5 + 1;
        local_1b8 = (ulonglong)uVar13;
        if (0 < (int)uVar13) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c0,0);
        }
        FGenericPlatformString::Memcpy(local_1c0,pwVar16,(longlong)(int)uVar13 * 2);
      }
      FUN_14107a6d0(param_1,*(undefined8 *)(param_1 + 0xaf0),&local_1c0);
      if (local_1c0 != 0) {
        FMemory::Free();
      }
      local_1a8 = 0;
      pwVar16 = L"rightItemCardLoader";
      local_1b0 = 0;
      if (cVar3 == '\x03') {
        pwVar16 = L"rightItemCardLoaderAbbreviated";
      }
      if (*pwVar16 != L'\0') {
        lVar5 = -1;
        do {
          lVar5 = lVar5 + 1;
        } while (pwVar16[lVar5] != L'\0');
        uVar13 = (int)lVar5 + 1;
        local_1a8 = (ulonglong)uVar13;
        if (0 < (int)uVar13) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b0,0);
        }
        FGenericPlatformString::Memcpy(local_1b0,pwVar16,(longlong)(int)uVar13 * 2);
      }
      FUN_14107a6d0(param_1,*(undefined8 *)(param_1 + 0xaf8),&local_1b0);
      if (local_1b0 != 0) {
        FMemory::Free();
      }
      FUN_14107a6d0(param_1,*(undefined8 *)(param_1 + 0xdc8),param_1 + 0xe40);
      FUN_14107a6d0(param_1,*(undefined8 *)(param_1 + 0xdf8),param_1 + 0xe20);
    }
    lVar6 = FUN_140e4c8c0(*(undefined8 *)(param_1 + 0xb60));
    lVar5 = *(longlong *)(param_1 + 0xb50);
    *(longlong *)(param_1 + 0xb58) = lVar6;
    if ((lVar5 != 0) && (lVar6 != 0)) {
      uStack_1e0._0_4_ = 0;
      local_1e8 = FUN_14107de10;
      pplVar17 = (longlong **)(lVar5 + 0x4e8);
      plVar7 = (longlong *)FMemory::Realloc(0,0x30);
      local_170[0] = plVar7;
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_FUN_1440f9050;
        FWeakObjectPtr::operator=(plVar7 + 1,param_1);
        *(int *)(plVar7 + 2) = (int)local_1e8;
        *(int *)((longlong)plVar7 + 0x14) = local_1e8._4_4_;
        *(undefined4 *)(plVar7 + 3) = (undefined4)uStack_1e0;
        *(uint *)((longlong)plVar7 + 0x1c) = uStack_1e0._4_4_;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar7[5] = lVar6;
      }
      if (local_170 != pplVar17) {
        if (plVar7 == (longlong *)0x0) {
          if ((*(int *)(lVar5 + 0x4f0) != 0) && (plVar8 = *pplVar17, plVar8 != (longlong *)0x0)) {
            (**(code **)(*plVar8 + 0x28))(plVar8,0);
            if (*pplVar17 != (longlong *)0x0) {
              plVar8 = (longlong *)FMemory::Realloc(*pplVar17,0,0);
              *pplVar17 = plVar8;
            }
            *(undefined4 *)(lVar5 + 0x4f0) = 0;
          }
        }
        else {
          (**(code **)(*plVar7 + 0x30))(plVar7,pplVar17);
        }
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x28))(plVar7,0);
        local_170[0] = (longlong *)FMemory::Realloc(plVar7,0,0);
        if (local_170[0] != (longlong *)0x0) {
          FMemory::Free(local_170[0]);
        }
      }
      uStack_1e0 = (ulonglong)uStack_1e0._4_4_ << 0x20;
      local_1e8 = AK::MemoryMgr::StartProfileThreadUsage;
      local_148 = AK::MemoryMgr::StartProfileThreadUsage;
      lStack_140 = uStack_1e0;
      pwVar9 = _guard_xfg_dispatch_icall_nop
                         (L"&UGFxVendingMachineMenu::OnVendingMachineDirty",L"::");
      pwVar16 = pwVar18;
      while (pwVar2 = pwVar9, pwVar2 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar16 = pwVar2;
      }
      FName::FName(&local_188,pwVar16 + 2,1);
      FUN_1407260e0(*(longlong *)(param_1 + 0xb50) + 0x518,param_1,&local_148,local_188);
      pwVar9 = _guard_xfg_dispatch_icall_nop
                         (L"&UGFxVendingMachineMenu::OnVendingMachineScroll",L"::");
      pwVar16 = pwVar18;
      while (pwVar2 = pwVar9, pwVar2 != (wchar_t *)0x0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar16 = pwVar2;
      }
      FName::FName(&local_180,pwVar16 + 2,1);
      lVar5 = *(longlong *)(param_1 + 0xb50);
      plVar7 = (longlong *)(lVar5 + 0x528);
      FWeakObjectPtr::operator=(&local_1d0,0);
      local_1c8 = 0;
      FWeakObjectPtr::operator=(&local_1d0,param_1);
      local_1c8 = local_180;
      local_1d8 = 0;
      if ((local_180 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_1d0), lVar6 != 0)) {
        UObject::FindFunction(lVar6,local_1c8);
      }
      piVar11 = (int *)*plVar7;
      iVar1 = *(int *)(lVar5 + 0x530);
      for (piVar15 = piVar11; piVar15 != piVar11 + (longlong)iVar1 * 4; piVar15 = piVar15 + 4) {
        if ((((*piVar15 == local_1d0) && (piVar15[1] == local_1cc)) ||
            ((cVar3 = FWeakObjectPtr::IsValid(piVar15), cVar3 == '\0' &&
             (cVar3 = FWeakObjectPtr::IsValid(&local_1d0), cVar3 == '\0')))) &&
           (*(longlong *)(piVar15 + 2) == local_1c8)) {
          if ((int)((longlong)piVar15 - (longlong)piVar11 >> 4) != -1) goto LAB_1410a11a8;
          break;
        }
      }
      iVar1 = *(int *)(lVar5 + 0x530);
      *(int *)(lVar5 + 0x530) = iVar1 + 1;
      if (*(int *)(lVar5 + 0x534) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
      }
      piVar11 = (int *)((longlong)iVar1 * 0x10 + *plVar7);
      *piVar11 = local_1d0;
      piVar11[1] = local_1cc;
      *(longlong *)(piVar11 + 2) = local_1c8;
LAB_1410a11a8:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar7);
      pwVar16 = _guard_xfg_dispatch_icall_nop
                          (L"&UGFxVendingMachineMenu::OnVendingMachineBoughtItem",L"::");
      while (pwVar9 = pwVar16, pwVar9 != (wchar_t *)0x0) {
        pwVar16 = _guard_xfg_dispatch_icall_nop(pwVar9 + 1,L"::");
        pwVar18 = pwVar9;
      }
      FName::FName(&local_178,pwVar18 + 2,1);
      lVar5 = *(longlong *)(param_1 + 0xb50);
      plVar7 = (longlong *)(lVar5 + 0x538);
      FWeakObjectPtr::operator=(&local_1e8,0);
      uStack_1e0 = 0;
      FWeakObjectPtr::operator=(&local_1e8,param_1);
      uStack_1e0 = local_178;
      local_1d8 = 0;
      if ((local_178 != 0) && (lVar6 = FWeakObjectPtr::Get(&local_1e8), lVar6 != 0)) {
        UObject::FindFunction(lVar6,uStack_1e0);
      }
      piVar11 = (int *)*plVar7;
      iVar1 = *(int *)(lVar5 + 0x540);
      for (piVar15 = piVar11; piVar15 != piVar11 + (longlong)iVar1 * 4; piVar15 = piVar15 + 4) {
        if ((((*piVar15 == (int)local_1e8) &&
             (local_1e8._4_4_ = (int)((ulonglong)local_1e8 >> 0x20),
             bVar19 = piVar15[1] == local_1e8._4_4_, bVar19)) ||
            ((cVar3 = FWeakObjectPtr::IsValid(piVar15), cVar3 == '\0' &&
             (cVar3 = FWeakObjectPtr::IsValid(&local_1e8), cVar3 == '\0')))) &&
           (*(longlong *)(piVar15 + 2) == uStack_1e0)) {
          if ((int)((longlong)piVar15 - (longlong)piVar11 >> 4) != -1) goto LAB_1410a12f8;
          break;
        }
      }
      iVar1 = *(int *)(lVar5 + 0x540);
      *(int *)(lVar5 + 0x540) = iVar1 + 1;
      if (*(int *)(lVar5 + 0x544) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar1);
      }
      puVar12 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar7);
      *puVar12 = (int)local_1e8;
      puVar12[1] = local_1e8._4_4_;
      *(longlong *)(puVar12 + 2) = uStack_1e0;
LAB_1410a12f8:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar7);
      plVar7 = *(longlong **)(*(longlong *)(param_1 + 0xb50) + 0x578);
      if (plVar7 != (longlong *)0x0) {
        TSet<TTuple<UObjectBase_const_*,FUniqueObjectGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FUniqueObjectGuid,0>,FDefaultSetAllocator>
        ::Empty(param_1 + 0xa20,0);
        if (*(longlong *)(param_1 + 0xd78) != 0) {
          lVar5 = *plVar7;
          local_160 = (longlong *)(param_1 + 0xd78);
          puVar10 = (undefined8 *)FName::FName(local_150,"UI_leftSocketTop",1);
          local_158 = (**(code **)(lVar5 + 0x428))(plVar7,local_138,*puVar10);
          FUN_141068810(param_1 + 0xa20,&local_1d8,&local_160,0);
        }
      }
      if (*(char *)(param_1 + 0xb20) == '\x03') {
        *(undefined1 *)(param_1 + 0xb20) = 0;
      }
      cVar3 = *(char *)(param_1 + 0xb78);
      if (cVar3 == '\0') {
        *(undefined1 *)(param_1 + 0xb20) = 2;
        local_1f8 = 0xffffffff;
        if (*(longlong *)(param_1 + 0xb50) != 0) {
          FUN_14170c210(&local_1f8);
        }
        FWeakObjectPtr::operator=(&local_1a0,param_1);
        uVar14 = local_1f8;
        local_1f8 = 0xffffffff;
        local_f8 = (longlong *)0x0;
        local_e8 = 0;
        puVar10 = (undefined8 *)FUN_140438ef0(0x20,local_118);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = &PTR_FUN_144605c50;
          puVar10[1] = param_1;
          *(undefined4 *)(puVar10 + 2) = local_1a0;
          *(undefined4 *)((longlong)puVar10 + 0x14) = local_19c;
          *(undefined4 *)(puVar10 + 3) = uVar14;
          uVar14 = 0xffffffff;
        }
        local_128[0] = &LAB_14107da30;
        FUN_14208c260(param_1,local_128);
        if (local_e8 != 0) {
          plVar7 = local_118;
          if (local_f8 != (longlong *)0x0) {
            plVar7 = local_f8;
          }
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x10))(plVar7,0);
          }
        }
        if (local_f8 != (longlong *)0x0) {
          FMemory::Free();
        }
        FUN_1416f8340(uVar14);
        FUN_1416f8340(local_1f8);
        FUN_141085040(param_1);
        FUN_141081340(param_1);
        lVar5 = *(longlong *)(param_1 + 0xb58) + 0x580;
      }
      else if (cVar3 == '\x02') {
        *(undefined1 *)(param_1 + 0xb20) = 2;
        *(undefined1 *)(param_1 + 0x9d8) = 1;
        FUN_1410a8980(param_1);
        FUN_141085040(param_1);
        FUN_141081340(param_1);
        local_1f4 = 0xffffffff;
        if (*(longlong *)(param_1 + 0xb50) != 0) {
          FUN_14170c210(&local_1f4);
        }
        FWeakObjectPtr::operator=(&local_198,param_1);
        uVar14 = local_1f4;
        local_1f4 = 0xffffffff;
        local_a8 = (longlong *)0x0;
        local_98 = 0;
        puVar10 = (undefined8 *)FUN_140438ef0(0x20,local_c8);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = &PTR_FUN_144605c50;
          puVar10[1] = param_1;
          *(undefined4 *)(puVar10 + 2) = local_198;
          *(undefined4 *)((longlong)puVar10 + 0x14) = local_194;
          *(undefined4 *)(puVar10 + 3) = uVar14;
          uVar14 = 0xffffffff;
        }
        local_d8[0] = &LAB_14107da10;
        FUN_14208c260(param_1,local_d8);
        if (local_98 != 0) {
          plVar7 = local_c8;
          if (local_a8 != (longlong *)0x0) {
            plVar7 = local_a8;
          }
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x10))(plVar7,0);
          }
        }
        if (local_a8 != (longlong *)0x0) {
          FMemory::Free();
        }
        FUN_1416f8340(uVar14);
        FUN_1416f8340(local_1f4);
        lVar5 = *(longlong *)(param_1 + 0xb58) + 0x678;
      }
      else {
        if (cVar3 != '\x01') goto LAB_1410a16fb;
        *(undefined1 *)(param_1 + 0x9d8) = 1;
        *(undefined1 *)(param_1 + 0xb20) = 1;
        local_1f0[0] = 0xffffffff;
        if (*(longlong *)(param_1 + 0xb50) != 0) {
          FUN_14170c210(local_1f0);
        }
        FWeakObjectPtr::operator=(&local_190,param_1);
        uVar14 = local_1f0[0];
        local_1f0[0] = 0xffffffff;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        puVar10 = (undefined8 *)FUN_140438ef0(0x20,local_78);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = &PTR_FUN_144605c50;
          puVar10[1] = param_1;
          *(undefined4 *)(puVar10 + 2) = local_190;
          *(undefined4 *)((longlong)puVar10 + 0x14) = local_18c;
          *(undefined4 *)(puVar10 + 3) = uVar14;
          uVar14 = 0xffffffff;
        }
        local_88[0] = &LAB_14107d760;
        FUN_14208c260(param_1,local_88);
        if (local_48 != 0) {
          plVar7 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar7 = local_58;
          }
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x10))(plVar7,0);
          }
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
        FUN_1416f8340(uVar14);
        FUN_1416f8340(local_1f0[0]);
        FUN_1410a8980(param_1);
        FUN_1410811d0(param_1,0xffffffff);
        lVar5 = *(longlong *)(param_1 + 0xb58) + 0x680;
      }
      FUN_140ebff20(param_1 + 0x878,lVar5);
    }
  }
LAB_1410a16fb:
  LOCK();
  *(undefined4 *)(param_1 + 0x9cc) = 1;
  UNLOCK();
  return;
}



// FUNCTION 1410a1720 FUN_1410a1720 body=276 status=ok
// SIG undefined FUN_1410a1720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410a1720(undefined8 param_1)

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
  FUN_142ece720();
  local_88 = (longlong *)0x0;
  local_78 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_a8);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_b8[0] = &LAB_14107d5d0;
  uVar2 = FUN_1420849a0(param_1,local_68,local_b8);
  FUN_142ecfea0(param_1,uVar2);
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



// FUNCTION 1410a1840 FUN_1410a1840 body=954 status=ok
// SIG undefined FUN_1410a1840(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1410a1840(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  char *pcVar10;
  longlong *plVar11;
  wchar_t *pwVar12;
  char cVar13;
  bool bVar14;
  undefined1 auStack_208 [32];
  undefined2 local_1e8;
  longlong local_1d8 [3];
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 *local_1a8 [2];
  undefined1 local_198 [32];
  undefined8 local_178;
  undefined4 local_168;
  undefined1 local_158 [80];
  undefined1 local_108 [208];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  plVar3 = *(longlong **)(param_1 + 0x310);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  LOCK();
  iVar5 = (int)plVar3[1];
  bVar14 = iVar5 == 0;
  if (bVar14) {
    *(int *)(plVar3 + 1) = 0;
    iVar5 = 0;
  }
  UNLOCK();
  while( true ) {
    if (bVar14) {
      return;
    }
    LOCK();
    bVar14 = iVar5 == (int)plVar3[1];
    if (bVar14) {
      *(int *)(plVar3 + 1) = iVar5 + 1;
    }
    UNLOCK();
    if (bVar14) break;
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar14 = iVar5 == 0;
    if (bVar14) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
  }
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x308);
  if (lVar4 == 0) goto LAB_1410a1ba4;
  local_178 = 0;
  local_168 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_198);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = param_1;
    *puVar7 = &PTR_FUN_143f77b70;
  }
  local_1c0 = 0;
  local_1a8[0] = &LAB_14107d9e0;
  local_1b8 = 0x3b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c0,0);
  local_1e8 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>
            (local_1c0,0x3b,"UGFxLobbyWidget::RefreshAddFriendButton::NumAvailableSlots");
  FUN_141022700(local_108,&local_1c0,local_1a8);
  uVar8 = FUN_141036f30(local_108,local_158);
  FUN_142032330(uVar8);
  lVar9 = FWeakObjectPtr::Get(param_1 + 0x3b0);
  if (lVar9 == 0) {
    cVar13 = '\0';
  }
  else {
    lVar9 = FUN_140f9aee0(lVar9);
    cVar13 = '\0';
    if (lVar9 != 0) {
      pcVar10 = (char *)FUN_140a5dc70(lVar9);
      cVar13 = *pcVar10;
    }
  }
  iVar5 = FUN_141037230(local_108);
  if ((iVar5 < 1) || (cVar13 != '\x02')) {
    bVar14 = false;
    if (cVar13 == '\x02') goto LAB_1410a19d2;
    local_1d8[0] = 0;
    local_1d8[1] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d8,0);
    uVar8 = 0xc;
    pwVar12 = L"empty";
LAB_1410a1a4e:
    FGenericPlatformString::Memcpy(local_1d8[0],pwVar12,uVar8);
  }
  else {
    bVar14 = true;
LAB_1410a19d2:
    iVar5 = FUN_141037230(local_108);
    if (iVar5 < 1) {
      local_1d8[0] = 0;
      local_1d8[1] = 9;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1d8,0);
      uVar8 = 0x12;
      pwVar12 = L"teamFull";
      goto LAB_1410a1a4e;
    }
    uVar6 = FUN_141037230(local_108);
    FString::PrintfImpl(local_1d8,L"%dPlayerLeft",uVar6);
  }
  FUN_14203dbf0(lVar4,local_1d8);
  if (*(longlong *)(param_1 + 0x328) != 0) {
    if ((bVar14) && (*(char *)(param_1 + 0x3cd) == '\0')) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    plVar11 = (longlong *)(*(longlong *)(param_1 + 0x328) + 0x170);
    (**(code **)(*plVar11 + 0x38))(plVar11,uVar8);
  }
  plVar11 = *(longlong **)(param_1 + 0x338);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar11[1];
    bVar14 = iVar5 == 0;
    if (bVar14) {
      *(int *)(plVar11 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar14) {
      LOCK();
      bVar14 = iVar5 == (int)plVar11[1];
      if (bVar14) {
        *(int *)(plVar11 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar14) {
        if (plVar11 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x330) != 0) {
            FUN_14203dbf0(*(longlong *)(param_1 + 0x330),local_1d8);
          }
          LOCK();
          plVar1 = plVar11 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar11[1];
      bVar14 = iVar5 == 0;
      if (bVar14) {
        *(int *)(plVar11 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  plVar11 = *(longlong **)(param_1 + 0x2f8);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar11[1];
    bVar14 = iVar5 == 0;
    if (bVar14) {
      *(int *)(plVar11 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar14) {
      LOCK();
      bVar14 = iVar5 == (int)plVar11[1];
      if (bVar14) {
        *(int *)(plVar11 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar14) {
        if (plVar11 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x2f0) != 0) {
            FUN_14203dbf0(*(longlong *)(param_1 + 0x2f0),local_1d8);
          }
          LOCK();
          plVar1 = plVar11 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar11[1];
      bVar14 = iVar5 == 0;
      if (bVar14) {
        *(int *)(plVar11 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  if (local_1d8[0] != 0) {
    FMemory::Free();
  }
  FUN_140ce1dc0(local_108);
LAB_1410a1ba4:
  LOCK();
  plVar11 = plVar3 + 1;
  lVar4 = *plVar11;
  *(int *)plVar11 = (int)*plVar11 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}



// FUNCTION 1410a1c00 FUN_1410a1c00 body=183 status=ok
// SIG undefined FUN_1410a1c00(void)

void FUN_1410a1c00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  bool bVar7;
  
  FUN_140f47510();
  plVar3 = *(longlong **)(param_1 + 0x6d0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar7 = iVar5 == 0;
    if (bVar7) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (!bVar7) {
      while( true ) {
        LOCK();
        bVar7 = iVar5 == (int)plVar3[1];
        if (bVar7) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar7) break;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar7 = iVar5 == 0;
        if (bVar7) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar7) {
          return;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        if (*(longlong *)(param_1 + 0x6c8) != 0) {
          puVar6 = &DAT_144688a38;
          if (*(char *)(param_1 + 0x360) != '\0') {
            puVar6 = &DAT_144688a30;
          }
          FUN_14203e4e0(*(longlong *)(param_1 + 0x6c8),puVar6);
        }
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1410a1cc0 FUN_1410a1cc0 body=807 status=ok
// SIG undefined FUN_1410a1cc0(void)

void FUN_1410a1cc0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
  short *psVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  longlong local_res8;
  longlong local_88;
  ulonglong local_80;
  longlong local_78 [3];
  undefined4 local_60;
  longlong local_58 [3];
  
  bVar2 = false;
  bVar1 = false;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x660));
  LOCK();
  *(int *)(param_1 + 0x66c) = *(int *)(param_1 + 0x66c) + 1;
  UNLOCK();
  if (((*(char *)(param_1 + 0x678) != '\0') && (0 < *(int *)(param_1 + 0x658))) &&
     (**(longlong **)(param_1 + 0x650) != 0)) {
    local_78[0] = 0;
    local_78[1] = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
    FGenericPlatformString::Memcpy(local_78[0],L"vehicleBody",0x18);
    FUN_142088cf0(**(undefined8 **)(param_1 + 0x650),local_78);
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x650) + 0x278))
              ((longlong *)**(undefined8 **)(param_1 + 0x650),1);
  }
  local_res8 = FWeakObjectPtr::Get();
  if (local_res8 != 0) {
    lVar4 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(local_res8 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_res8 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    if (bVar12) goto LAB_1410a1deb;
  }
  local_res8 = 0;
LAB_1410a1deb:
  uVar9 = 0;
  bVar12 = *(char *)(param_1 + 0x678) != '\0';
  uVar11 = (ulonglong)bVar12;
  if ((int)(uint)bVar12 < *(int *)(param_1 + 0x658)) {
    lVar4 = uVar11 << 3;
    uVar10 = uVar9;
    do {
      psVar6 = (short *)0x0;
      if (*(longlong *)(lVar4 + *(longlong *)(param_1 + 0x650)) != 0) {
        if (local_res8 == 0) {
LAB_1410a1e80:
          bVar1 = true;
          local_60 = 0;
          plVar5 = local_78 + 2;
        }
        else {
          if (((longlong)uVar9 < 0) || ((int)param_2[1] <= (int)uVar10)) {
            bVar12 = false;
          }
          else {
            bVar12 = true;
          }
          if ((!bVar12) || (*(longlong *)(*param_2 + uVar9 * 8) == 0)) goto LAB_1410a1e80;
          bVar2 = true;
          uVar3 = FUN_140e80f10(param_3);
          plVar5 = (longlong *)FUN_1411e7450(local_res8,local_58,uVar3);
          psVar6 = (short *)*plVar5;
        }
        *plVar5 = 0;
        lVar8 = plVar5[1];
        plVar5[1] = 0;
        if ((bVar1) && (bVar1 = false, local_78[2] != 0)) {
          FMemory::Free();
        }
        if ((bVar2) && (bVar2 = false, local_58[0] != 0)) {
          FMemory::Free();
        }
        if (((int)lVar8 == 0) || ((int)lVar8 + -1 < 1)) {
          plVar5 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x650));
          (**(code **)(*plVar5 + 0x278))(plVar5,0);
        }
        else {
          local_88 = 0;
          local_80 = 0;
          if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
            lVar8 = -1;
            do {
              lVar8 = lVar8 + 1;
            } while (psVar6[lVar8] != 0);
            uVar7 = (int)lVar8 + 1;
            local_80 = (ulonglong)uVar7;
            if (0 < (int)uVar7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
            }
            FGenericPlatformString::Memcpy(local_88,psVar6,(longlong)(int)uVar7 * 2);
          }
          FUN_142088cf0(*(undefined8 *)(lVar4 + *(longlong *)(param_1 + 0x650)),&local_88);
          if (local_88 != 0) {
            FMemory::Free();
          }
          (**(code **)(**(longlong **)(lVar4 + *(longlong *)(param_1 + 0x650)) + 0x278))();
          uVar10 = (ulonglong)((int)uVar10 + 1);
          uVar9 = uVar9 + 1;
        }
        if (psVar6 != (short *)0x0) {
          FMemory::Free();
        }
      }
      uVar7 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar7;
      lVar4 = lVar4 + 8;
    } while ((int)uVar7 < *(int *)(param_1 + 0x658));
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x660));
  LOCK();
  *(int *)(param_1 + 0x66c) = *(int *)(param_1 + 0x66c) + -1;
  UNLOCK();
  return;
}



// FUNCTION 1410a1ff0 FUN_1410a1ff0 body=674 status=ok
// SIG undefined FUN_1410a1ff0(void)

void FUN_1410a1ff0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_10;
  
  lVar8 = *(longlong *)(param_1 + 0xaa0);
  lVar7 = (longlong)*(int *)(param_1 + 0xaa8) * 0x20 + lVar8;
  for (; lVar8 != lVar7; lVar8 = lVar8 + 0x20) {
    iVar4 = *(int *)(param_1 + 0xb30);
    *(int *)(param_1 + 0xb30) = iVar4 + 1;
    if (*(int *)(param_1 + 0xb34) < iVar4 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1 + 0xb28,iVar4);
    }
    lVar6 = (longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 0xb28);
    FText::FText(lVar6,lVar8);
    *(undefined1 *)(lVar6 + 0x18) = *(undefined1 *)(lVar8 + 0x18);
  }
  uVar5 = FUN_1404b03b0();
  FText::FText(local_28,uVar5);
  local_10 = 0;
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_78,L"RARITY",L"GFxVendingMachineMenu",L"FilterRarity");
  FText::operator=(local_28,uVar5);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_70 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  plVar3 = (longlong *)(param_1 + 0xb28);
  local_10 = 4;
  iVar4 = *(int *)(param_1 + 0xb30);
  *(int *)(param_1 + 0xb30) = iVar4 + 1;
  if (*(int *)(param_1 + 0xb34) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar3,iVar4);
  }
  lVar8 = (longlong)iVar4 * 0x20 + *plVar3;
  FText::FText(lVar8,local_28);
  *(undefined1 *)(lVar8 + 0x18) = local_10;
  if (*(int *)(param_1 + 0xb30) == 0) {
    uVar5 = FUN_1404b03b0();
    FText::FText(local_48,uVar5);
    local_30 = 0;
    uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_60,L"Designer Fix Me: No Filter Found",L"GFxVendingMachineMenu",
                       L"NoFiltersText");
    FText::operator=(local_48,uVar5);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_58 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)local_58 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
    iVar4 = *(int *)(param_1 + 0xb30);
    local_30 = 0;
    *(int *)(param_1 + 0xb30) = iVar4 + 1;
    if (*(int *)(param_1 + 0xb34) < iVar4 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar3,iVar4);
    }
    lVar8 = (longlong)iVar4 * 0x20 + *plVar3;
    FText::FText(lVar8,local_48);
    *(undefined1 *)(lVar8 + 0x18) = local_30;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return;
}



// FUNCTION 1410a22a0 FUN_1410a22a0 body=233 status=ok
// SIG undefined FUN_1410a22a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410a22a0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [80];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  *(undefined4 *)(param_1 + 0xb38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb3c) = 0;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    *puVar1 = &PTR_FUN_143f77b70;
  }
  local_68[0] = &LAB_14107da90;
  uVar2 = FUN_1420849a0(param_1,local_b8,local_68);
  FUN_14208c4f0(param_1,uVar2);
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
  return;
}



// FUNCTION 1410a2390 FUN_1410a2390 body=1233 status=ok
// SIG undefined FUN_1410a2390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410a2390(undefined4 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_158 [32];
  undefined4 *local_138;
  ulonglong *puStack_130;
  longlong local_128;
  longlong local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_a8 [16];
  undefined4 local_98 [2];
  longlong local_90;
  undefined1 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined1 local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_158;
  lVar7 = *(longlong *)(param_1 + 0xe);
  lVar14 = 0;
  local_138 = param_1;
  local_128 = lVar7;
  if (lVar7 != 0) {
    lVar6 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar6 = FWeakObjectPtr::Get(lVar7 + 0x59c);
      if (lVar6 != 0) {
        iVar10 = *(int *)(lVar6 + 0x48);
        lVar11 = (longlong)iVar10;
        if (0 < iVar10) {
          lVar15 = lVar11 * 8;
          lVar12 = lVar11;
          do {
            iVar10 = iVar10 + -1;
            lVar15 = lVar15 + -8;
            lVar12 = lVar12 + -1;
            if ((lVar12 < 0) || (*(int *)(lVar6 + 0x48) <= iVar10)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (((bVar4) &&
                (plVar9 = *(longlong **)(lVar15 + *(longlong *)(lVar6 + 0x40)),
                plVar9 != (longlong *)0x0)) &&
               (lVar7 = (**(code **)(*plVar9 + 0x278))(), lVar7 != 0)) {
              uVar8 = UGameplayTagAssetInterface::GetPrivateStaticClass();
              plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar7,uVar8);
              lVar7 = local_128;
              param_1 = local_138;
              if (plVar9 != (longlong *)0x0) goto LAB_1410a2527;
            }
            lVar14 = lVar14 + 1;
          } while (lVar14 < lVar11);
        }
        lVar14 = 0;
        iVar10 = *(int *)(lVar6 + 0x98);
        lVar7 = local_128;
        param_1 = local_138;
        if (0 < (longlong)iVar10) {
          do {
            plVar9 = *(longlong **)(*(longlong *)(lVar6 + 0x90) + lVar14 * 8);
            if ((plVar9 != (longlong *)0x0) &&
               (lVar7 = (**(code **)(*plVar9 + 0x278))(), lVar7 != 0)) {
              uVar8 = UGameplayTagAssetInterface::GetPrivateStaticClass();
              plVar9 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar7,uVar8);
              lVar7 = local_128;
              param_1 = local_138;
              if (plVar9 != (longlong *)0x0) goto LAB_1410a2527;
            }
            lVar14 = lVar14 + 1;
            lVar7 = local_128;
            param_1 = local_138;
          } while (lVar14 < iVar10);
        }
      }
      goto LAB_1410a2524;
    }
  }
  lVar7 = 0;
LAB_1410a2524:
  plVar9 = (longlong *)0x0;
LAB_1410a2527:
  if ((*(longlong *)(param_1 + 0xd8) != 0) && (*(longlong *)(param_1 + 0xda) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0xda) + 8);
    LOCK();
    iVar10 = *piVar1;
    if (iVar10 == 0) {
      *piVar1 = 0;
      iVar10 = 0;
    }
    UNLOCK();
    if (0 < iVar10) {
      if ((*(char *)((longlong)param_1 + 0x17b) == '\0') &&
         ((*(longlong *)(param_1 + 0xd4) == 0 ||
          (*(longlong *)(*(longlong *)(param_1 + 0xd4) + 0x48) == 0)))) {
        if (plVar9 == (longlong *)0x0) {
          uVar8 = FUN_1404b03b0();
          UMistDebugEntityScreen::InspectEntity(param_1 + 0xd6,uVar8,1,0);
          return;
        }
        uVar8 = (**(code **)(*plVar9 + 0x40))(plVar9,local_f0);
        UMistDebugEntityScreen::InspectEntity(param_1 + 0xd6,uVar8,1,0);
        local_b8 = local_e8;
      }
      else {
        plVar9 = (longlong *)FUN_141424bc0();
        if ((plVar9[0x1f] == 0) && ((**(code **)(*plVar9 + 0x368))(plVar9), plVar9[0x1f] == 0)) {
          iVar10 = 1;
        }
        else {
          iVar10 = FUN_142480900();
        }
        if ((lVar7 == 0) || (lVar7 = FUN_140f9aee0(lVar7), lVar7 == 0)) {
          iVar5 = 1;
        }
        else {
          iVar5 = FUN_140bba270(lVar7);
        }
        uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_c0,L"{0}/{1} Group Members",L"GFxLobbyWidget",
                           L"GroupMemberCountFormat");
        plVar9 = (longlong *)FTextFormat::FTextFormat(local_a8,uVar8);
        local_90 = (longlong)iVar5;
        local_138 = local_98;
        puStack_130 = local_38;
        local_128 = *plVar9;
        local_120 = plVar9[1];
        local_60 = (longlong)iVar10;
        local_98[0] = 0;
        local_70 = 0;
        local_68 = 0;
        local_40 = 0;
        if (local_120 != 0) {
          LOCK();
          *(int *)(local_120 + 8) = *(int *)(local_120 + 8) + 1;
          UNLOCK();
        }
        uVar8 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_118,&local_138);
        uVar8 = FText::Format(local_d8,&local_128,uVar8);
        FText::FText(local_108,uVar8);
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_d0 + 1;
          lVar7 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar1 = (int *)((longlong)local_d0 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*local_d0 + 8))(local_d0,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_118);
        lVar7 = 2;
        plVar13 = (longlong *)&stack0xffffffffffffffe0;
        do {
          lVar7 = lVar7 + -1;
          if ((char)plVar13[-4] != '\0') {
            *(undefined1 *)(plVar13 + -4) = 0;
            plVar3 = (longlong *)plVar13[-6];
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar3 + 1;
              lVar14 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
          }
          plVar13 = plVar13 + -6;
        } while (lVar7 != 0);
        plVar9 = (longlong *)plVar9[1];
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar9 + 1;
          lVar7 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        UMistDebugEntityScreen::InspectEntity(param_1 + 0xd6,local_108,1,0);
        if (local_100 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_100 + 1;
          lVar7 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_100)(local_100);
            LOCK();
            piVar1 = (int *)((longlong)local_100 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*local_100 + 8))(local_100,1);
            }
          }
        }
      }
      if (local_b8 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_b8 + 1;
        lVar7 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_b8)(local_b8);
          LOCK();
          piVar1 = (int *)((longlong)local_b8 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_b8 + 8))(local_b8,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1410a2870 FUN_1410a2870 body=284 status=ok
// SIG undefined FUN_1410a2870(void)

void FUN_1410a2870(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong local_res8;
  longlong local_res10;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if ((*(longlong *)(param_1 + 0xd18) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0xd10), plVar1 != (longlong *)0x0)) {
    uVar2 = FUN_14301f8f0();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      local_res8 = 0;
      if (*(longlong *)(lVar3 + 0x208) != 0) {
        local_res8 = *(longlong *)(*(longlong *)(lVar3 + 0x208) + 0x1d8);
      }
      local_res10 = FUN_140fe3d70(param_1);
      if ((local_res8 != 0) && (local_res10 != 0)) {
        local_28 = 0;
        local_18 = 0;
        puVar4 = (undefined8 *)FUN_140438ef0(0x20,local_48);
        if (puVar4 != (undefined8 *)0x0) {
          local_78 = (undefined4)param_1;
          uStack_74 = (undefined4)((ulonglong)param_1 >> 0x20);
          *(undefined4 *)(puVar4 + 1) = local_78;
          *(undefined4 *)((longlong)puVar4 + 0xc) = uStack_74;
          puVar4[2] = &local_res10;
          *puVar4 = &PTR_FUN_143f4d0b0;
          puVar4[3] = &local_res8;
        }
        local_58[0] = &LAB_14107d6b0;
        FUN_1411f67c0(*(undefined8 *)(param_1 + 0xd18),local_58);
      }
    }
  }
  return;
}



// FUNCTION 1410a2990 FUN_1410a2990 body=95 status=ok
// SIG undefined FUN_1410a2990(void)

void FUN_1410a2990(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 0x3b0);
  if (lVar2 != 0) {
    lVar3 = UMovieScene3DTransformSection::GetPrivateStaticClass();
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
      FUN_14112e710(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1410a29f0 FUN_1410a29f0 body=163 status=ok
// SIG undefined FUN_1410a29f0(void)

void FUN_1410a29f0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x2e8);
  if (lVar1 != 0) {
    iVar6 = 0;
    iVar3 = FUN_142eb7440(lVar1);
    if (0 < iVar3) {
      do {
        lVar4 = FUN_142eb6a30(lVar1,iVar6);
        if (lVar4 != 0) {
          lVar5 = UXGameInstance::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) && (*(longlong *)(lVar4 + 0x308) != 0)) {
            FUN_1411f76d0();
          }
        }
        iVar6 = iVar6 + 1;
        iVar3 = FUN_142eb7440(lVar1);
      } while (iVar6 < iVar3);
    }
  }
  return;
}



// FUNCTION 1410a2aa0 FUN_1410a2aa0 body=234 status=ok
// SIG undefined FUN_1410a2aa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410a2aa0(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_74;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  FWeakObjectPtr::operator=(&local_78,param_1);
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_1444f8920;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_78;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_74;
  }
  local_68[0] = &LAB_14107d3a0;
  FUN_14208c260(param_1,local_68);
  if (local_28 != 0) {
    plVar2 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar2 = local_38;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410a2b90 FUN_1410a2b90 body=402 status=ok
// SIG undefined FUN_1410a2b90(void)

void FUN_1410a2b90(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong local_res8;
  
  lVar5 = (**(code **)(*param_1 + 0x148))();
  if (lVar5 != 0) {
    lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar5 = *(longlong *)(lVar5 + 0x148);
    if (lVar5 != 0) {
      lVar6 = FUN_141424d10();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        plVar8 = *(longlong **)(lVar5 + 0x9e8);
        plVar1 = plVar8 + *(int *)(lVar5 + 0x9f0);
        for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
          local_res8 = *plVar8;
          if (local_res8 != 0) {
            plVar7 = (longlong *)param_1[0xcb];
            plVar2 = plVar7 + (int)param_1[0xcc];
            for (; plVar7 != plVar2; plVar7 = plVar7 + 1) {
              if (*plVar7 == local_res8) goto LAB_1410a2cfb;
            }
            lVar5 = FWeakObjectPtr::Get(param_1 + 0xbb);
            if (lVar5 != 0) {
              lVar6 = FUN_14145f370();
              if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if ((((bVar3) && (lVar5 = FUN_140cff230(lVar5), lVar5 != 0)) &&
                  (cVar4 = FUN_140d288b0(lVar5), cVar4 != '\0')) &&
                 ((TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
                   AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0xcb,&local_res8),
                  param_1[0xcd] == 0 && (lVar5 = FUN_140eccbe0(param_1), lVar5 != 0)))) {
                FUN_140ccd600(lVar5,1);
              }
            }
          }
LAB_1410a2cfb:
        }
      }
    }
  }
  return;
}



// FUNCTION 1410a2d30 FUN_1410a2d30 body=1185 status=ok
// SIG undefined FUN_1410a2d30(void)

void FUN_1410a2d30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res10;
  undefined4 local_res14;
  longlong local_a8;
  longlong *plStack_a0;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  lVar6 = *(longlong *)(param_1 + 0x2e8);
  uVar9 = 0;
  if (lVar6 != 0) {
    LOCK();
    bVar12 = *(char *)(lVar6 + 800) == '\0';
    if (bVar12) {
      *(char *)(lVar6 + 800) = '\x01';
    }
    UNLOCK();
    if (bVar12) {
      FWeakObjectPtr::operator=(&local_res8,lVar6);
      local_90 = local_res8;
      local_8c = local_resc;
      local_58 = 0;
      local_48 = 0;
      puVar5 = (undefined8 *)FUN_140438ef0(0x18,local_78);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_FUN_1444f8920;
        puVar5[1] = lVar6;
        *(undefined4 *)(puVar5 + 2) = local_res8;
        *(undefined4 *)((longlong)puVar5 + 0x14) = local_resc;
      }
      local_88[0] = &LAB_14107d670;
      FUN_14208c5d0(lVar6,local_88);
    }
  }
  FUN_1410a1840(param_1);
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x3b0);
  if (lVar6 != 0) {
    lVar7 = UMovieScene3DTransformSection::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (bVar12 = true,
       *(longlong *)
        (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
       != lVar7 + 0x88)) {
      bVar12 = false;
    }
    if (bVar12) {
      FUN_14112e710(lVar6);
    }
  }
  if (*(longlong *)(param_1 + 0x348) != 0) {
    FUN_1410aa290();
  }
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x3b0);
  if (lVar6 != 0) {
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x3b0);
    LOCK();
    *(undefined4 *)(lVar6 + 0x588) = 1;
    UNLOCK();
  }
  FUN_1410a2390(param_1);
  if ((*(longlong *)(param_1 + 0x350) != 0) && (lVar6 = *(longlong *)(param_1 + 0x2e8), lVar6 != 0))
  {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x350) + 0x48);
    if (lVar7 == *(longlong *)(param_1 + 0x328)) {
      iVar4 = FUN_142eb7440(lVar6);
      *(int *)(lVar6 + 0x274) = iVar4 + -1;
    }
    else if (lVar7 == *(longlong *)(param_1 + 0x340)) {
      iVar4 = FUN_142eb7440(lVar6);
      *(uint *)(lVar6 + 0x274) = (0 < iVar4) - 1;
    }
  }
  if (*(char *)(param_1 + 0x3a8) == '\0') {
    if ((((*(char *)(param_1 + 0x17b) != '\0') ||
         ((*(longlong *)(param_1 + 0x350) != 0 &&
          (*(longlong *)(*(longlong *)(param_1 + 0x350) + 0x48) != 0)))) &&
        (*(longlong *)(param_1 + 0x350) != 0)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x350) + 0x48) == *(longlong *)(param_1 + 0x328))) {
      FUN_1410a78d0(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x390) == 1) {
    lVar6 = *(longlong *)(param_1 + 0x2e8);
    if ((lVar6 != 0) && (uVar11 = uVar9, 0 < *(int *)(lVar6 + 0x280))) {
      do {
        lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x278) + 0x18 + uVar9);
        if (lVar7 != 0) {
          lVar8 = UXGameInstance::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (bVar12 = true,
             *(longlong *)
              (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
              (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar12 = false;
          }
          if (bVar12) {
            if (*(longlong *)(lVar7 + 0x308) == 0) {
              local_a8 = 0;
              plStack_a0 = (longlong *)0x0;
            }
            else {
              FUN_1411e6060(*(longlong *)(lVar7 + 0x308),&local_a8);
            }
            plVar3 = plStack_a0;
            bVar12 = local_a8 == *(longlong *)(param_1 + 0x398);
            if (plStack_a0 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_a0 + 1;
              lVar7 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*plStack_a0)(plStack_a0);
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
            if (bVar12) {
              lVar6 = FUN_141081d20(*(undefined8 *)(param_1 + 0x2e8),param_1 + 0x398);
              if (lVar6 == 0) {
                return;
              }
              if (*(longlong *)(param_1 + 0x350) != 0) {
                FUN_142f0d400(*(longlong *)(param_1 + 0x350),*(undefined8 *)(param_1 + 0x2e8),0);
                FUN_14107e060(*(undefined8 *)(param_1 + 0x2e8));
                (**(code **)(**(longlong **)(param_1 + 0x2e8) + 0x2c0))
                          (*(longlong **)(param_1 + 0x2e8),lVar6,0,0);
                *(undefined4 *)(*(longlong *)(param_1 + 0x2e8) + 0x274) = 0xffffffff;
                FUN_142f0d400(*(undefined8 *)(param_1 + 0x350),*(undefined8 *)(param_1 + 0x388),0);
              }
              FUN_141081ef0(param_1,&local_res10,lVar6);
              if (*(longlong *)(param_1 + 0x370) == 0) {
                return;
              }
              FUN_14208ff10(*(longlong *)(param_1 + 0x370),local_res10,local_res14);
              return;
            }
          }
        }
        uVar10 = (int)uVar11 + 1;
        uVar9 = uVar9 + 0x20;
        uVar11 = (ulonglong)uVar10;
      } while ((int)uVar10 < *(int *)(lVar6 + 0x280));
    }
    FUN_1410850c0(param_1,0);
    if (((*(char *)(param_1 + 0x17b) != '\0') ||
        ((*(longlong *)(param_1 + 0x350) != 0 &&
         (*(longlong *)(*(longlong *)(param_1 + 0x350) + 0x48) != 0)))) &&
       (*(longlong *)(param_1 + 0x350) != 0)) {
      FUN_142f0d400(*(longlong *)(param_1 + 0x350),*(undefined8 *)(param_1 + 0x2e8),0);
    }
  }
  else if (*(int *)(param_1 + 0x390) == 2) {
    FUN_1410850c0(param_1,1);
    if (((*(char *)(param_1 + 0x17b) != '\0') ||
        ((*(longlong *)(param_1 + 0x350) != 0 &&
         (*(longlong *)(*(longlong *)(param_1 + 0x350) + 0x48) != 0)))) &&
       (*(longlong *)(param_1 + 0x350) != 0)) {
      FUN_142f0d400(*(longlong *)(param_1 + 0x350),*(undefined8 *)(param_1 + 0x328),0);
    }
    FUN_1410a78d0(param_1);
    return;
  }
  return;
}



// FUNCTION 1410a31e0 FUN_1410a31e0 body=600 status=ok
// SIG undefined FUN_1410a31e0(void)

void FUN_1410a31e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong local_58 [4];
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_38,L"Matchmaking in Progress",L"GFxLobbyWidgetMatchmakingWidget",
               L"MatchmakingInProgress");
    lVar5 = FUN_140eccb70(param_1);
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x960) != 0)) {
      FText::operator=(local_38,*(longlong *)(lVar5 + 0x960) + 0x38);
    }
    (**(code **)(**(longlong **)(param_1 + 0x180) + 0x2b0))
              (*(longlong **)(param_1 + 0x180),local_38,1,0);
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
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_20,L"Matchmaking",L"GFxLobbyWidgetMatchmakingWidget",L"MatchmakingDummyTitle");
    lVar5 = FUN_140eccb70(param_1);
    if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x960) != 0)) {
      FText::operator=(local_20,*(longlong *)(lVar5 + 0x960) + 0x20);
    }
    (**(code **)(**(longlong **)(param_1 + 0x178) + 0x2b0))
              (*(longlong **)(param_1 + 0x178),local_20,1,0);
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
  }
  if ((*(longlong *)(param_1 + 0x170) != 0) && (lVar5 = FUN_140eccb70(param_1), lVar5 != 0)) {
    cVar4 = FUN_140bca890(lVar5);
    if (cVar4 == '\0') {
      if (*(char *)(param_1 + 0x188) == '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 0x188) = 0;
      local_58[2] = 0;
      local_58[3] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58 + 2,0);
      FGenericPlatformString::Memcpy(local_58[2],L"hide",10);
      FUN_142088910(param_1,local_58 + 2);
      lVar5 = local_58[2];
    }
    else {
      if (*(char *)(param_1 + 0x188) != '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 0x188) = 1;
      local_58[0] = 0;
      local_58[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
      FGenericPlatformString::Memcpy(local_58[0],L"show",10);
      FUN_142088910(param_1,local_58);
      lVar5 = local_58[0];
    }
    if (lVar5 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1410a3440 FUN_1410a3440 body=152 status=ok
// SIG undefined FUN_1410a3440(void)

void FUN_1410a3440(undefined8 param_1,undefined1 param_2)

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
  puVar1 = (undefined8 *)FUN_140438ef0(0x20,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144605cc8;
    puVar1[1] = param_1;
    *(undefined4 *)(puVar1 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar1 + 0x14) = local_resc;
    *(undefined1 *)(puVar1 + 3) = param_2;
  }
  local_58[0] = &LAB_14107d430;
  FUN_14208c5d0(param_1,local_58);
  return;
}



// FUNCTION 1410a34e0 FUN_1410a34e0 body=271 status=ok
// SIG undefined FUN_1410a34e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410a34e0(undefined8 param_1)

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
  local_b8[0] = &LAB_14107d8f0;
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



// FUNCTION 1410a35f0 FUN_1410a35f0 body=318 status=ok
// SIG undefined FUN_1410a35f0(void)

void FUN_1410a35f0(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_18;
  undefined8 local_10;
  
  FUN_142ebc100();
  if (param_2 != 0) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1410a3647;
  }
  param_2 = 0;
LAB_1410a3647:
  FWeakObjectPtr::operator=(param_1 + 0x240,param_2);
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x240);
  if (cVar2 != '\0') {
    lVar3 = *(longlong *)(param_1 + 400);
    local_18 = lVar3;
    if (lVar3 == 0) {
      local_10 = 0;
    }
    else {
      uVar4 = UBlendableInterface::GetPrivateStaticClass();
      local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
    }
    uVar4 = FWeakObjectPtr::Get(param_1 + 0x240);
    FUN_142ecff00(uVar4,&local_18,DAT_146874598);
  }
  FUN_1410a9170(param_1 + -0x170);
  lVar3 = *(longlong *)(param_1 + 0x1d8);
  local_18 = lVar3;
  if (lVar3 == 0) {
    local_10 = 0;
  }
  else {
    uVar4 = UBlendableInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
  }
  FUN_1410a3730(param_1 + -0x170,&local_18,*(undefined8 *)(param_1 + 0x1d0),0,0,0);
  FUN_1410a2d30(param_1 + -0x170);
  return;
}



// FUNCTION 1410a3730 FUN_1410a3730 body=308 status=ok
// SIG undefined FUN_1410a3730(void)

void FUN_1410a3730(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(longlong *)(param_1 + 0x350) != 0) {
    FWeakObjectPtr::operator=(&local_58,0);
    FWeakObjectPtr::operator=(&local_50,0);
    FWeakObjectPtr::operator=(&local_48,0);
    FWeakObjectPtr::operator=(&local_40,0);
    FWeakObjectPtr::operator=(&local_58,param_3);
    FWeakObjectPtr::operator=(&local_50,param_4);
    FWeakObjectPtr::operator=(&local_48,param_5);
    FWeakObjectPtr::operator=(&local_40,param_6);
    local_38 = 0xffffffff;
    local_34 = 0;
    FWeakObjectPtr::operator=(&local_30,0);
    FWeakObjectPtr::operator=(&local_28,0);
    FWeakObjectPtr::operator=(&local_20,0);
    FWeakObjectPtr::operator=(&local_18,0);
    FWeakObjectPtr::operator=(&local_38,*param_2);
    local_30 = local_58;
    local_2c = local_54;
    local_28 = local_50;
    local_24 = local_4c;
    local_20 = local_48;
    local_1c = local_44;
    local_18 = local_40;
    local_14 = local_3c;
    FUN_142f0d310(*(undefined8 *)(param_1 + 0x350),&local_38);
  }
  return;
}



// FUNCTION 1410a3870 FUN_1410a3870 body=271 status=ok
// SIG undefined FUN_1410a3870(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410a3870(undefined8 param_1)

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
  local_b8[0] = &LAB_14107d310;
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



// FUNCTION 1410a3980 FUN_1410a3980 body=271 status=ok
// SIG undefined FUN_1410a3980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410a3980(undefined8 param_1)

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
  local_b8[0] = &LAB_14107d690;
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



// FUNCTION 1410a3a90 Rehash body=631 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<TSubclassOf<AItem>,FClientValidatedItemInfo>,TDefaultMapHashableKeyFuncs<TSubclassOf<AItem>,FClientValidatedItemInfo,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  ulonglong *puVar15;
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
    lVar4 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar4;
  }
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar9) {
      uVar5 = 0;
      uVar13 = (ulonglong)uVar9;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar10 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar8 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar8 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar9 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        lVar4 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar3 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar3) goto LAB_1410a3bcf;
        uVar9 = puVar14[lVar4 + 1];
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
      if (iVar8 < iStack_44) {
LAB_1410a3bcf:
        iStack_44 = iVar8;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar8) {
      do {
        puVar15 = (ulonglong *)((longlong)iStack_1c * 0x38 + *param_1);
        iVar8 = (int)(*puVar15 >> 4);
        uVar11 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar12 = -(uVar11 + iVar8) ^ uVar11 >> 0xd;
        uVar9 = (iVar8 - uVar11) - uVar12 ^ uVar12 >> 0xc;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 0x10;
        uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 5;
        uVar9 = (uVar9 - uVar11) - uVar12 ^ uVar12 >> 3;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 10;
        uVar9 = ((uVar12 - uVar11) - uVar9 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar15 + 0x34) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar15 + 6) =
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



// FUNCTION 1410a3d10 FUN_1410a3d10 body=305 status=ok
// SIG undefined FUN_1410a3d10(void)

void FUN_1410a3d10(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)(*param_1 + 0x10 + (longlong)param_2 * 0x58);
    iVar6 = param_3;
    do {
      plVar3 = (longlong *)plVar7[3];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      plVar3 = (longlong *)*plVar7;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      plVar7 = plVar7 + 0xb;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x58),
                 (void *)((longlong)(param_2 + param_3) * 0x58 + *param_1),(longlong)iVar5 * 0x58);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1410a3e50 FUN_1410a3e50 body=249 status=ok
// SIG undefined FUN_1410a3e50(void)

void FUN_1410a3e50(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
    iVar6 = param_3;
    do {
      plVar3 = (longlong *)*plVar7;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      plVar7 = plVar7 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x20),
                 (void *)((longlong)(param_2 + param_3) * 0x20 + *param_1),(longlong)iVar5 << 5);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1410a3f50 RemoveAtImpl body=249 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FStreamInteractionDelayedMessage,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)(*param_1 + 8 + (longlong)param_2 * 0x20);
    iVar6 = param_3;
    do {
      plVar3 = (longlong *)*plVar7;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      plVar7 = plVar7 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x20),
                 (void *)((longlong)(param_2 + param_3) * 0x20 + *param_1),(longlong)iVar5 << 5);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1410a4050 FUN_1410a4050 body=290 status=ok
// SIG undefined FUN_1410a4050(void)

void FUN_1410a4050(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  if (param_2 != 0) {
    lVar1 = (longlong)(int)param_1[0xcc];
    if ((int)param_1[0xcc] != 0) {
      iVar6 = 0;
      bVar7 = *(longlong *)param_1[0xcb] != param_2;
      lVar3 = 0;
      iVar4 = 0;
      do {
        lVar3 = lVar3 + 1;
        iVar5 = iVar4 + 1;
        if (lVar3 < lVar1) {
          plVar2 = (longlong *)(param_1[0xcb] + lVar3 * 8);
          do {
            if (bVar7 != (*plVar2 != param_2)) break;
            iVar5 = iVar5 + 1;
            lVar3 = lVar3 + 1;
            plVar2 = plVar2 + 1;
          } while (lVar3 < lVar1);
        }
        if (bVar7 != false) {
          if (iVar6 != iVar4) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(param_1[0xcb] + (longlong)iVar6 * 8),
                       (void *)(param_1[0xcb] + (longlong)iVar4 * 8),(longlong)(iVar5 - iVar4) << 3)
            ;
          }
          iVar6 = iVar6 + (iVar5 - iVar4);
        }
        bVar7 = (bool)(bVar7 ^ 1);
        iVar4 = iVar5;
      } while (lVar3 < lVar1);
      *(int *)(param_1 + 0xcc) = iVar6;
    }
    if ((param_2 == param_1[0xcd]) && (param_1[0x57] != 0)) {
      (**(code **)(*param_1 + 0x580))(param_1,0);
    }
  }
  return;
}



// FUNCTION 1410a4180 FUN_1410a4180 body=221 status=ok
// SIG undefined FUN_1410a4180(void)

void FUN_1410a4180(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined **local_38 [2];
  longlong *local_28;
  longlong local_20;
  
  lVar4 = FUN_141081fe0();
  if ((*(longlong *)(param_1 + 0x2e8) != 0) && (lVar4 != 0)) {
    lVar5 = FUN_14270bb10(lVar4);
    if (lVar5 != 0) {
      uVar6 = FUN_14270bb10(lVar4);
      lVar4 = FUN_142547b50(uVar6,local_38);
      FUN_1410807e0(*(undefined8 *)(param_1 + 0x2e8),lVar4 + 8,param_2);
      local_38[0] = &PTR_FUN_143f740c8;
      if (local_20 != 0) {
        FMemory::Free();
      }
      local_38[0] = &PTR_FUN_143f73d18;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar2 = (int *)((longlong)local_28 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_28 + 8))(local_28,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1410a4260 FUN_1410a4260 body=374 status=ok
// SIG undefined FUN_1410a4260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410a4260(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_184;
  undefined1 local_180 [280];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  lVar1 = FUN_140ee69c0(param_1 + 0xbd8,local_180);
  lVar1 = FWeakObjectPtr::Get(lVar1 + 0xdc);
  FUN_140e9c360(local_180);
  if (lVar1 != 0) {
    lVar1 = FUN_140ee69c0(param_1 + 0xbd8,local_180);
    lVar1 = FWeakObjectPtr::Get(lVar1 + 0xdc);
    FUN_140e9c360(local_180);
    lVar2 = FWeakObjectPtr::Get(param_1 + 0xb00);
    if (lVar1 == lVar2) {
      *(undefined1 *)(param_1 + 0xb48) = 1;
    }
  }
  FWeakObjectPtr::operator=(&local_188,param_1);
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_1444f8920;
    puVar3[1] = param_1;
    *(undefined4 *)(puVar3 + 2) = local_188;
    *(undefined4 *)((longlong)puVar3 + 0x14) = local_184;
  }
  local_68[0] = &LAB_14107d3f0;
  FUN_14208c260(param_1,local_68);
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



// FUNCTION 1410a43e0 FUN_1410a43e0 body=1139 status=ok
// SIG undefined FUN_1410a43e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410a43e0(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined1 auStack_158 [48];
  undefined4 *local_128;
  ulonglong *puStack_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  longlong *plStack_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [16];
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [16];
  undefined4 local_78 [2];
  longlong local_70;
  longlong *local_60;
  char local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_158;
  plVar3 = *(longlong **)(param_1 + 0x448);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar8 = iVar5 == 0;
    if (bVar8) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar8) {
      LOCK();
      bVar8 = iVar5 == (int)plVar3[1];
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar8) {
        if (plVar3 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x440) != 0) {
            FUN_14203e230();
          }
          LOCK();
          plVar1 = plVar3 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  plVar3 = *(longlong **)(param_1 + 800);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar8 = iVar5 == 0;
    if (bVar8) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar8) {
      LOCK();
      bVar8 = iVar5 == (int)plVar3[1];
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar8) {
        if (plVar3 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 0x318) != 0) {
            FUN_14203e230(*(longlong *)(param_1 + 0x318),param_2);
          }
          LOCK();
          plVar1 = plVar3 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_a0,L"{0} /",L"GFxVendingMachineMenu",L"AmmoBigNumberOverText");
  puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_88,uVar6);
  local_78[0] = 0;
  local_128 = local_78;
  local_50 = '\0';
  puStack_120 = local_48;
  local_118 = *puVar7;
  local_110 = puVar7[1];
  if (local_110 != 0) {
    LOCK();
    *(int *)(local_110 + 8) = *(int *)(local_110 + 8) + 1;
    UNLOCK();
  }
  local_70 = (longlong)param_3;
  uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
          TArray<FFormatArgumentValue,FDefaultAllocator>(local_c8,&local_128);
  uVar6 = FText::Format(local_b8,&local_118,uVar6);
  FText::FText(local_e0,uVar6);
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_b0 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)local_b0 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (local_c8);
  if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
    LOCK();
    plVar3 = local_60 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  plVar3 = (longlong *)puVar7[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_98 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar2 = (int *)((longlong)local_98 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  FText::AsNumber(local_f8,param_4,0,&local_108);
  plVar3 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_100 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x458) != 0) && (*(longlong *)(param_1 + 0x460) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x460) + 8);
    LOCK();
    iVar5 = *piVar2;
    if (iVar5 == 0) {
      *piVar2 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x450,local_e0,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x348) != 0) && (*(longlong *)(param_1 + 0x350) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x350) + 8);
    LOCK();
    iVar5 = *piVar2;
    if (iVar5 == 0) {
      *piVar2 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x340,local_e0,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x470) != 0) && (*(longlong *)(param_1 + 0x478) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x478) + 8);
    LOCK();
    iVar5 = *piVar2;
    if (iVar5 == 0) {
      *piVar2 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x468,local_f8,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x330) != 0) && (*(longlong *)(param_1 + 0x338) != 0)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x338) + 8);
    LOCK();
    iVar5 = *piVar2;
    if (iVar5 == 0) {
      *piVar2 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x328,local_f8,1,0);
    }
  }
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_f0 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar2 = (int *)((longlong)local_f0 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_d8 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 1410a4860 FUN_1410a4860 body=296 status=ok
// SIG undefined FUN_1410a4860(void)

void FUN_1410a4860(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_118 [272];
  
  FUN_14107e160();
  lVar3 = FUN_140ee71c0(param_1 + 0xbd8);
  if (lVar3 != 0) {
    lVar4 = FUN_1413a7200();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1410a48cb;
  }
  lVar3 = 0;
LAB_1410a48cb:
  FWeakObjectPtr::operator=(param_1 + 0xb08,lVar3);
  lVar3 = FUN_140ee69c0(param_1 + 0xbd8,local_118);
  uVar5 = FWeakObjectPtr::Get(lVar3 + 0xdc);
  FUN_140e9c360(local_118);
  FWeakObjectPtr::operator=(param_1 + 0xb00,uVar5);
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xb08);
  if (cVar2 != '\0') {
    cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xb00);
    if (cVar2 != '\0') {
      uVar5 = FWeakObjectPtr::Get(param_1 + 0xb08);
      FUN_142ed2820(uVar5,1);
    }
  }
  if (*(longlong *)(param_1 + 0xb50) != 0) {
    FUN_140b719f0(*(longlong *)(param_1 + 0xb50),0);
  }
  *(undefined1 *)(param_1 + 0x10e1) = 1;
  FUN_1410ab750(param_1);
  return;
}



// FUNCTION 1410a4990 FUN_1410a4990 body=954 status=ok
// SIG undefined FUN_1410a4990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410a4990(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  wchar_t *pwVar8;
  bool bVar9;
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  ulonglong *puStack_120;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong *plStack_f8;
  undefined1 local_f0 [16];
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [16];
  undefined4 local_70 [2];
  longlong local_68;
  longlong *local_58;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if ((*(longlong *)(param_1 + 0x3f8) != 0) && (*(longlong *)(param_1 + 0x400) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x400) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_b0,L"{0} /",L"GFxVendingMachineMenu",L"BackpackBigOverNumberFormat");
      puVar7 = (undefined8 *)FTextFormat::FTextFormat(local_80,uVar6);
      local_70[0] = 0;
      local_128 = local_70;
      local_48 = '\0';
      puStack_120 = &local_40;
      local_110 = *puVar7;
      local_108 = puVar7[1];
      if (local_108 != 0) {
        LOCK();
        *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
        UNLOCK();
      }
      local_68 = (longlong)param_2;
      uVar6 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_f0,&local_128);
      uVar6 = FText::Format(local_c8,&local_110,uVar6);
      FText::FText(local_e0,uVar6);
      if (local_c0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_c0 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_c0)(local_c0);
          LOCK();
          piVar1 = (int *)((longlong)local_c0 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_c0 + 8))(local_c0,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_f0);
      if ((local_48 != '\0') && (local_48 = '\0', local_58 != (longlong *)0x0)) {
        LOCK();
        plVar3 = local_58 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar1 = (int *)((longlong)local_58 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_58 + 8))(local_58,1);
          }
        }
      }
      plVar3 = (longlong *)puVar7[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x3f0,local_e0,1,0);
      if (local_d8 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_d8 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_d8)(local_d8);
          LOCK();
          piVar1 = (int *)((longlong)local_d8 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_d8 + 8))(local_d8,1);
          }
        }
      }
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_a8 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar1 = (int *)((longlong)local_a8 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_a8 + 8))(local_a8,1);
          }
        }
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x410) != 0) && (*(longlong *)(param_1 + 0x418) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x418) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      local_100 = 0;
      plStack_f8 = (longlong *)0x0;
      uVar6 = FText::AsNumber(local_98,param_3,0,&local_100);
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x408,uVar6,1,0);
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_90 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar1 = (int *)((longlong)local_90 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_90 + 8))(local_90,1);
          }
        }
      }
      plVar3 = plStack_f8;
      if (plStack_f8 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_f8 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_f8)(plStack_f8);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 1000);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar9 = iVar5 == 0;
    if (bVar9) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar9) {
      LOCK();
      bVar9 = iVar5 == (int)plVar3[1];
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar9) {
        if (plVar3 == (longlong *)0x0) {
          return;
        }
        if (*(longlong *)(param_1 + 0x3e0) != 0) {
          pwVar8 = L"open";
          if (param_3 <= param_2) {
            pwVar8 = L"full";
          }
          FUN_14203e4e0(*(longlong *)(param_1 + 0x3e0),pwVar8);
        }
        LOCK();
        plVar2 = plVar3 + 1;
        lVar4 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar4 != 1) {
          return;
        }
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 != 1) {
          return;
        }
        (**(code **)(*plVar3 + 8))(plVar3,1);
        return;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 1410a4d50 FUN_1410a4d50 body=678 status=ok
// SIG undefined FUN_1410a4d50(void)

void FUN_1410a4d50(longlong param_1,int param_2)

{
  int iVar1;
  wchar_t *local_18;
  undefined8 local_10;
  
  iVar1 = *(int *)(param_1 + 0x9f8);
  if (iVar1 == param_2) {
    return;
  }
  local_18 = (wchar_t *)0x0;
  local_10 = 0;
  if (param_2 == 1) {
    if (iVar1 == 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,4);
      iVar1 = (int)local_10 + 4;
      local_10 = CONCAT44(local_10._4_4_,iVar1);
      if (local_10._4_4_ < iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
      }
      builtin_wcsncpy(local_18,L"buy",4);
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,10);
      iVar1 = (int)local_10 + 10;
      local_10 = CONCAT44(local_10._4_4_,iVar1);
      if (local_10._4_4_ < iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
      }
      builtin_wcsncpy(local_18,L"buySwitch",10);
    }
  }
  else if (param_2 == 2) {
    if (iVar1 == 1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,5);
      iVar1 = (int)local_10 + 5;
      local_10 = CONCAT44(local_10._4_4_,iVar1);
      if (local_10._4_4_ < iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
      }
      builtin_wcsncpy(local_18,L"sell",5);
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,9);
      iVar1 = (int)local_10 + 9;
      local_10 = CONCAT44(local_10._4_4_,iVar1);
      if (local_10._4_4_ < iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
      }
      builtin_wcsncpy(local_18,L"sellLoop",9);
    }
  }
  else if (param_2 == 3) {
    if (iVar1 == 1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,8);
      iVar1 = (int)local_10 + 8;
      local_10 = CONCAT44(local_10._4_4_,iVar1);
      if (local_10._4_4_ < iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
      }
      builtin_wcsncpy(local_18,L"compare",8);
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0xc);
      iVar1 = (int)local_10 + 0xc;
      local_10 = CONCAT44(local_10._4_4_,iVar1);
      if (local_10._4_4_ < iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
      }
      builtin_wcsncpy(local_18,L"compareLoop",0xc);
    }
  }
  else {
    if (param_2 != 4) goto LAB_1410a4fd6;
    if (iVar1 == 3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0x10);
      iVar1 = (int)local_10 + 0x10;
      local_10 = CONCAT44(local_10._4_4_,iVar1);
      if (local_10._4_4_ < iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
      }
      builtin_wcsncpy(local_18,L"compareBackpack",0x10);
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_18,0x14);
      iVar1 = (int)local_10 + 0x14;
      local_10 = CONCAT44(local_10._4_4_,iVar1);
      if (local_10._4_4_ < iVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18);
      }
      builtin_wcsncpy(local_18,L"compareBackpackLoop",0x14);
    }
  }
  if ((((int)local_10 != 0) && (0 < (int)local_10 + -1)) && (*(longlong *)(param_1 + 0xe10) != 0)) {
    FUN_142088910(*(longlong *)(param_1 + 0xe10),&local_18);
  }
LAB_1410a4fd6:
  *(int *)(param_1 + 0x9f8) = param_2;
  if (local_18 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410a5000 FUN_1410a5000 body=155 status=ok
// SIG undefined FUN_1410a5000(void)

void FUN_1410a5000(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  FWeakObjectPtr::operator=(&local_res8,param_1);
  uVar1 = *param_2;
  local_28 = 0;
  local_18 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x20,local_48);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144605cf8;
    puVar2[1] = param_1;
    *(undefined4 *)(puVar2 + 2) = local_res8;
    *(undefined4 *)((longlong)puVar2 + 0x14) = local_resc;
    puVar2[3] = uVar1;
  }
  local_58[0] = &LAB_14107d440;
  FUN_14208c5d0(param_1,local_58);
  return;
}



// FUNCTION 1410a50a0 FUN_1410a50a0 body=458 status=ok
// SIG undefined FUN_1410a50a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410a50a0(longlong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  longlong **local_108;
  undefined1 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  longlong local_d8 [2];
  undefined1 *local_c8 [2];
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined1 local_78 [16];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  uVar2 = FName::ToString(param_1 + 0x818,local_d8);
  local_108 = &local_e8;
  uVar2 = FUN_140e96f30(param_1,uVar2,0,6);
  if (local_d8[0] != 0) {
    FMemory::Free();
  }
  plVar5 = local_e8;
  for (iVar4 = (int)local_e0; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free(local_e8);
  }
  local_f8 = 0;
  FWeakObjectPtr::operator=(&local_f4,0);
  local_f8 = 2;
  FWeakObjectPtr::operator=(&local_f4,uVar2);
  uVar1 = local_f8;
  local_98 = (longlong *)0x0;
  local_88 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_b8);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_FUN_14468e908;
    puVar3[1] = param_1;
    *(undefined1 *)(puVar3 + 2) = uVar1;
    *(undefined4 *)((longlong)puVar3 + 0x14) = local_f4;
    *(undefined4 *)(puVar3 + 3) = local_f0;
  }
  local_c8[0] = &LAB_14107d3d0;
  uVar2 = FUN_1420849a0(param_1,local_78,local_c8);
  FUN_14208c260(param_1,uVar2);
  if (local_38 != 0) {
    plVar5 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar5 = local_48;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    plVar5 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar5 = local_98;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410a5270 FUN_1410a5270 body=519 status=ok
// SIG undefined FUN_1410a5270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410a5270(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong lStack_c0;
  undefined4 *local_b8;
  ulonglong *puStack_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [8];
  longlong *local_90;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined1 local_68 [16];
  undefined4 local_58 [2];
  longlong local_50;
  longlong *local_40;
  char local_30;
  ulonglong local_28 [2];
  
  local_28[0] = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  plVar4 = *(longlong **)(param_1 + 0x170);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2b0))(plVar4,param_2,1,0);
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    puVar6 = (undefined8 *)FTextFormat::FTextFormat(local_68,&DAT_146874960);
    local_58[0] = 0;
    local_b8 = local_58;
    local_30 = '\0';
    puStack_b0 = local_28;
    local_c8 = *puVar6;
    lStack_c0 = puVar6[1];
    if (lStack_c0 != 0) {
      LOCK();
      *(int *)(lStack_c0 + 8) = *(int *)(lStack_c0 + 8) + 1;
      UNLOCK();
    }
    local_50 = (longlong)param_3;
    uVar7 = TArray<FFormatArgumentValue,FDefaultAllocator>::
            TArray<FFormatArgumentValue,FDefaultAllocator>(local_a8,&local_b8);
    uVar7 = FText::Format(local_80,&local_c8,uVar7);
    FText::FText(local_98,uVar7);
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_78 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)local_78 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_a8);
    if ((local_30 != '\0') && (local_30 = '\0', local_40 != (longlong *)0x0)) {
      LOCK();
      plVar4 = local_40 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
    plVar4 = (longlong *)puVar6[1];
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
    (**(code **)(**(longlong **)(param_1 + 0x178) + 0x2b0))
              (*(longlong **)(param_1 + 0x178),local_98,1,0);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_90 + 1;
      lVar5 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  return;
}



// FUNCTION 1410a5480 FUN_1410a5480 body=926 status=ok
// SIG undefined FUN_1410a5480(void)

void FUN_1410a5480(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,int param_6)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong local_78;
  int local_70;
  int local_6c;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong *local_28;
  
  iVar6 = 0;
  local_78 = 0;
  local_6c = 0;
  lVar8 = 0x1e;
  iVar7 = iVar6;
  do {
    local_70 = (0x46 - (uint)(iVar7 != 0)) + iVar7;
    if (iVar6 < local_70) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar7);
      iVar6 = local_6c;
    }
    lVar5 = (longlong)iVar7 - (ulonglong)(iVar7 != 0);
    builtin_wcsncpy((wchar_t *)(local_78 + lVar5 * 2),L"This is ",8);
    builtin_wcsncpy((wchar_t *)(local_78 + 0x10 + lVar5 * 2),L"a really",8);
    builtin_wcsncpy((wchar_t *)(local_78 + 0x20 + lVar5 * 2),L" long te",8);
    builtin_wcsncpy((wchar_t *)(local_78 + 0x30 + lVar5 * 2),L"xt with ",8);
    builtin_wcsncpy((wchar_t *)(local_78 + 0x40 + lVar5 * 2),L"lots of ",8);
    builtin_wcsncpy((wchar_t *)(local_78 + 0x50 + lVar5 * 2),L"sentence",8);
    builtin_wcsncpy((wchar_t *)(local_78 + 0x60 + lVar5 * 2),L"s that a",8);
    builtin_wcsncpy((wchar_t *)(local_78 + 0x70 + lVar5 * 2),L"re the s",8);
    *(undefined8 *)(local_78 + 0x80 + lVar5 * 2) = 0x2e0065006d0061;
    *(undefined2 *)(local_78 + 0x88 + lVar5 * 2) = 0x20;
    *(undefined2 *)(local_78 + 0x8a + lVar5 * 2) = 0;
    lVar8 = lVar8 + -1;
    iVar7 = local_70;
  } while (lVar8 != 0);
  plVar3 = *(longlong **)(param_1 + 0x178);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x2b0))(plVar3,param_2,1,0);
  }
  if (*(longlong **)(param_1 + 0x180) != (longlong *)0x0) {
    lVar8 = **(longlong **)(param_1 + 0x180);
    uVar4 = FUN_1404b03b0();
    (**(code **)(lVar8 + 0x2b0))(*(undefined8 *)(param_1 + 0x180),uVar4,1,0);
  }
  plVar3 = *(longlong **)(param_1 + 0x1b0);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x2b0))(plVar3,param_3,1,0);
    FUN_142f153d0(*(undefined8 *)(param_1 + 0x1b0));
  }
  if (*(longlong **)(param_1 + 0x188) != (longlong *)0x0) {
    lVar8 = **(longlong **)(param_1 + 0x188);
    uVar4 = FUN_1404b03b0();
    (**(code **)(lVar8 + 0x2b0))(*(undefined8 *)(param_1 + 0x188),uVar4,1,0);
  }
  if (*(longlong **)(param_1 + 400) != (longlong *)0x0) {
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    lVar8 = **(longlong **)(param_1 + 400);
    uVar4 = FText::AsNumber(local_48,param_5,0,&local_68);
    (**(code **)(lVar8 + 0x2b0))(*(undefined8 *)(param_1 + 400),uVar4,1,0);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_40 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    plVar3 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_60 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
  }
  if (*(longlong **)(param_1 + 0x198) != (longlong *)0x0) {
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    lVar8 = **(longlong **)(param_1 + 0x198);
    uVar4 = FText::AsNumber(local_30,param_6,0,&local_58);
    (**(code **)(lVar8 + 0x2b0))(*(undefined8 *)(param_1 + 0x198),uVar4,1,0);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_28 + 1;
      lVar8 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_28 + 8))(local_28,1);
        }
      }
    }
    plVar3 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_50 + 1;
      lVar8 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
  }
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    if (param_6 < 1) {
      iVar7 = 100;
    }
    else {
      param_6 = (param_5 * 100) / param_6;
      iVar7 = 0;
      if ((-1 < param_6) && (iVar7 = 100, param_6 < 100)) {
        iVar7 = param_6;
      }
    }
    FUN_142f0ead0(*(longlong *)(param_1 + 0x1c8),(float)iVar7 * 0.01);
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410a5820 FUN_1410a5820 body=370 status=ok
// SIG undefined FUN_1410a5820(void)

void FUN_1410a5820(longlong *param_1,undefined1 *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar5 = param_1[7];
  if (lVar5 == 0) {
LAB_1410a587b:
    lVar5 = 0;
  }
  else {
    lVar3 = UMovieScene3DTransformSection::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1410a587b;
  }
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar3 == 0) {
    return;
  }
  if (lVar5 == 0) {
    return;
  }
  cVar2 = FUN_141107950(lVar5);
  if (cVar2 == '\0') {
    return;
  }
  lVar4 = FUN_140f9aee0(lVar5);
  if ((lVar4 == 0) || (cVar2 = FUN_140bca890(lVar4), cVar2 == '\0')) {
    lVar5 = UWorld::GetGameState<APVPGameState>(lVar3);
    if (lVar5 == 0) {
      return;
    }
    FUN_140cd09a0(lVar5,*param_2);
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x6c);
    lVar5 = FUN_140e971d0(uVar6);
    if ((lVar5 != 0) && (lVar5 = FUN_140cfbfb0(lVar5), lVar5 != 0)) {
      *(undefined1 *)(lVar5 + 0x310) = *param_2;
    }
    FUN_1410a3440(param_1,0);
    return;
  }
  lVar5 = FWeakObjectPtr::Get(lVar5 + 0x58c);
  if (lVar5 != 0) {
    lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1410a5917;
  }
  lVar5 = 0;
LAB_1410a5917:
  FUN_140bed6a0(lVar4,lVar5);
  return;
}



// FUNCTION 1410a59a0 FUN_1410a59a0 body=905 status=ok
// SIG undefined FUN_1410a59a0(void)

void FUN_1410a59a0(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  float fVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  bool bVar13;
  float fVar14;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined1 local_b8 [8];
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong local_90;
  longlong *plStack_88;
  longlong local_80;
  longlong *plStack_78;
  
  lVar12 = 0;
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    return;
  }
  lVar9 = FUN_140e97290();
  if (lVar9 == 0) {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x180);
  if (lVar5 == 0) {
    plVar10 = &local_80;
    local_80 = 0;
    plStack_78 = (longlong *)0x0;
    bVar7 = false;
    bVar13 = true;
    goto LAB_1410a5b56;
  }
  if ((*(longlong *)(lVar5 + 0x28) == 0) || (*(longlong *)(lVar5 + 0x30) == 0)) {
LAB_1410a5a89:
    plVar10 = &local_90;
    local_90 = 0;
    plStack_88 = (longlong *)0x0;
    bVar7 = false;
    bVar13 = true;
  }
  else {
    piVar1 = (int *)(*(longlong *)(lVar5 + 0x30) + 8);
    LOCK();
    iVar8 = *piVar1;
    if (iVar8 == 0) {
      *piVar1 = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (iVar8 < 1) goto LAB_1410a5a89;
    local_a8 = *(longlong **)(lVar5 + 0x30);
    local_b0 = 0;
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      iVar8 = (int)local_a8[1];
      bVar13 = iVar8 == 0;
      if (bVar13) {
        *(int *)(local_a8 + 1) = 0;
        iVar8 = 0;
      }
      UNLOCK();
      while (!bVar13) {
        LOCK();
        bVar13 = iVar8 == (int)local_a8[1];
        if (bVar13) {
          *(int *)(local_a8 + 1) = iVar8 + 1;
        }
        UNLOCK();
        if (bVar13) {
          lVar12 = *(longlong *)(lVar5 + 0x28);
          plVar10 = &local_b0;
          bVar7 = true;
          bVar13 = false;
          local_b0 = lVar12;
          goto LAB_1410a5a9d;
        }
        LOCK();
        iVar8 = (int)local_a8[1];
        bVar13 = iVar8 == 0;
        if (bVar13) {
          *(int *)(local_a8 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
      }
      local_a8 = (longlong *)0x0;
    }
    lVar12 = 0;
    plVar10 = &local_b0;
    bVar7 = true;
    bVar13 = false;
  }
LAB_1410a5a9d:
  plVar6 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  local_98 = plVar6;
  *plVar10 = 0;
  plVar10 = plStack_88;
  local_a0 = lVar12;
  if ((bVar13) && (plStack_88 != (longlong *)0x0)) {
    LOCK();
    plVar6 = plStack_88 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_88)(plStack_88);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_88 + 8))(plStack_88,1);
      }
    }
  }
  plVar10 = local_a8;
  if ((bVar7) && (local_a8 != (longlong *)0x0)) {
    LOCK();
    plVar6 = local_a8 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_a8 + 8))(local_a8,1);
      }
    }
  }
  bVar7 = true;
  bVar13 = false;
  plVar10 = &local_a0;
LAB_1410a5b56:
  plVar6 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10 = plStack_78;
  if ((bVar13) && (plStack_78 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_78 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_78)(plStack_78);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_78 + 8))(plStack_78,1);
      }
    }
  }
  plVar10 = local_98;
  if ((bVar7) && (local_98 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_98 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
  if (lVar12 != 0) {
    FUN_14203c1b0(lVar12,&local_res18);
    puVar11 = (undefined8 *)FUN_1420482a0(lVar12,local_res20,local_res18);
    local_res18 = *puVar11;
    plVar10 = *(longlong **)(lVar12 + 0xd8);
    lVar5 = *(longlong *)(lVar12 + 0xd0);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    if (lVar5 != 0) {
      fVar14 = (float)FUN_1411e6de0(lVar9,param_2);
      uVar3 = *(undefined4 *)(param_1 + 0x1bc);
      fVar4 = *(float *)(param_1 + 0x1b8);
      FUN_1420482a0(lVar5,local_b8,*(undefined8 *)(param_1 + 0x1b8));
      FUN_142053150(lVar12,CONCAT44(uVar3,fVar14 + fVar4));
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar10 + 1;
      lVar12 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
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
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar6 + 1;
    lVar12 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return;
}



// FUNCTION 1410a5d30 FUN_1410a5d30 body=22 status=ok
// SIG undefined FUN_1410a5d30(void)

void FUN_1410a5d30(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0x328)) {
    *(longlong *)(param_1 + 0x328) = param_2;
    FUN_1413ba9e0();
    return;
  }
  return;
}



// FUNCTION 1410a5d50 FUN_1410a5d50 body=271 status=ok
// SIG undefined FUN_1410a5d50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410a5d50(undefined8 param_1)

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
  local_b8[0] = &LAB_14107d500;
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



// FUNCTION 1410a5e60 FUN_1410a5e60 body=25 status=ok
// SIG undefined FUN_1410a5e60(void)

void FUN_1410a5e60(longlong param_1,float param_2)

{
  if (1e-08 < param_2) {
    *(float *)(param_1 + 0x348) = param_2;
    *(undefined1 *)(param_1 + 0x344) = 1;
  }
  return;
}



// FUNCTION 1410a5e80 FUN_1410a5e80 body=142 status=ok
// SIG undefined FUN_1410a5e80(void)

void FUN_1410a5e80(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((*(longlong *)(param_1 + 400) != 0) && (*(longlong *)(param_1 + 0x198) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x198) + 8);
    LOCK();
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = 0;
      iVar2 = 0;
    }
    UNLOCK();
    if (0 < iVar2) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x188,param_2,1,0);
    }
  }
  if ((*(longlong *)(param_1 + 0x1a8) != 0) && (*(longlong *)(param_1 + 0x1b0) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x1b0) + 8);
    LOCK();
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = 0;
      iVar2 = 0;
    }
    UNLOCK();
    if (0 < iVar2) {
      UMistDebugEntityScreen::InspectEntity(param_1 + 0x1a0,param_2,1,0);
    }
  }
  return;
}



// FUNCTION 1410a5f10 FUN_1410a5f10 body=245 status=ok
// SIG undefined FUN_1410a5f10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410a5f10(undefined8 param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined1 *local_78 [2];
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  FWeakObjectPtr::operator=(&local_88,param_1);
  uVar1 = *param_2;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x20,local_68);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_14468ea28;
    puVar2[1] = param_1;
    *(undefined4 *)(puVar2 + 2) = local_88;
    *(undefined4 *)((longlong)puVar2 + 0x14) = local_84;
    *(undefined2 *)(puVar2 + 3) = uVar1;
  }
  local_78[0] = &LAB_14107d660;
  FUN_14208c300(param_1,local_78);
  if (local_38 != 0) {
    plVar3 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar3 = local_48;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410a6010 FUN_1410a6010 body=34 status=ok
// SIG undefined FUN_1410a6010(void)

void FUN_1410a6010(longlong param_1)

{
  FWeakObjectPtr::operator=(param_1 + 0x238);
  FUN_1410a2d30(param_1);
  return;
}



// FUNCTION 1410a6040 FUN_1410a6040 body=109 status=ok
// SIG undefined FUN_1410a6040(void)

void FUN_1410a6040(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = AEquipmentSkin::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(longlong *)(param_1 + 0x38) = param_2;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 1410a60b0 FUN_1410a60b0 body=336 status=ok
// SIG undefined FUN_1410a60b0(void)

void FUN_1410a60b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  longlong local_18 [2];
  
  lVar5 = 0;
  if (param_2 != 0) {
    lVar5 = *(longlong *)(param_2 + 0xa58);
  }
  if (lVar5 != 0) {
    FName::ToString(lVar5 + 0x88,local_18);
    plVar3 = *(longlong **)(param_1 + 0x428);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar4 == 0;
      if (bVar6) {
        *(int *)(plVar3 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (!bVar6) {
        LOCK();
        bVar6 = iVar4 == (int)plVar3[1];
        if (bVar6) {
          *(int *)(plVar3 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar6) {
          if (plVar3 != (longlong *)0x0) {
            if (*(longlong *)(param_1 + 0x420) != 0) {
              FUN_14203e230(*(longlong *)(param_1 + 0x420),local_18);
            }
            LOCK();
            plVar1 = plVar3 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
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
          break;
        }
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar6 = iVar4 == 0;
        if (bVar6) {
          *(int *)(plVar3 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
    plVar3 = *(longlong **)(param_1 + 0x2d0);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar4 == 0;
      if (bVar6) {
        *(int *)(plVar3 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (!bVar6) {
        LOCK();
        bVar6 = iVar4 == (int)plVar3[1];
        if (bVar6) {
          *(int *)(plVar3 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar6) {
          if (plVar3 != (longlong *)0x0) {
            if (*(longlong *)(param_1 + 0x2c8) != 0) {
              FUN_14203e230(*(longlong *)(param_1 + 0x2c8),local_18);
            }
            LOCK();
            plVar1 = plVar3 + 1;
            lVar5 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar5 == 1) {
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
          break;
        }
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar6 = iVar4 == 0;
        if (bVar6) {
          *(int *)(plVar3 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1410a6200 PostLoad body=32 status=ok
// SIG undefined PostLoad(void)

void UAnimCompositeBase::PostLoad(longlong *param_1)

{
  FUN_142ed4500();
                    /* WARNING: Could not recover jumptable at 0x0001410a6219. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x300))(param_1);
  return;
}



// FUNCTION 1410a6220 FUN_1410a6220 body=73 status=ok
// SIG undefined FUN_1410a6220(void)

void FUN_1410a6220(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  
  if (*(longlong **)(param_1 + 0x180) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x180) + 0x278))();
  }
  plVar1 = *(longlong **)(param_1 + 0x188);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x278))(plVar1,param_2);
  }
  return;
}



// FUNCTION 1410a6270 FUN_1410a6270 body=100 status=ok
// SIG undefined FUN_1410a6270(void)

void FUN_1410a6270(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x350);
  if (param_2 != lVar1) {
    *(undefined4 *)(param_1 + 0x358) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x35c) = 0;
    FWeakObjectPtr::operator=(param_1 + 0x350,param_2);
    FUN_1413baa60(param_1,param_2);
  }
  return;
}



// FUNCTION 1410a62e0 FUN_1410a62e0 body=82 status=ok
// SIG undefined FUN_1410a62e0(void)

void FUN_1410a62e0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_140f12a40(param_2,param_1 + 0x358);
  if (cVar1 != '\0') {
    FWeakObjectPtr::operator=(param_1 + 0x358,param_2);
    FUN_1413baa20(param_1,param_2);
  }
  return;
}



// FUNCTION 1410a6340 FUN_1410a6340 body=91 status=ok
// SIG undefined FUN_1410a6340(void)

void FUN_1410a6340(longlong param_1,float *param_2)

{
  undefined8 local_18;
  float local_10;
  
  if (((*(float *)(param_1 + 0x360) != *param_2) || (*(float *)(param_1 + 0x364) != param_2[1])) ||
     (*(float *)(param_1 + 0x368) != param_2[2])) {
    local_18 = *(undefined8 *)param_2;
    local_10 = param_2[2];
    *(undefined8 *)(param_1 + 0x360) = local_18;
    *(float *)(param_1 + 0x368) = local_10;
    FUN_1413baaa0(local_18,&local_18);
  }
  return;
}



// FUNCTION 1410a63a0 FUN_1410a63a0 body=9 status=ok
// SIG undefined FUN_1410a63a0(void)

void FUN_1410a63a0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x184) = param_2;
  return;
}



// FUNCTION 1410a63b0 FUN_1410a63b0 body=179 status=ok
// SIG undefined FUN_1410a63b0(void)

void FUN_1410a63b0(longlong *param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  longlong local_18;
  ulonglong local_10;
  
  if ((param_2 != (char)param_1[7]) && (*(char *)(param_1 + 7) = param_2, *param_1 != 0)) {
    pwVar3 = L"hide";
    if (param_2 != '\0') {
      pwVar3 = L"show";
    }
    local_18 = 0;
    local_10 = 0;
    if (*pwVar3 != L'\0') {
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (pwVar3[lVar2] != L'\0');
      uVar1 = (int)lVar2 + 1;
      local_10 = (ulonglong)uVar1;
      if (0 < (int)uVar1) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      }
      FGenericPlatformString::Memcpy(local_18,pwVar3,(longlong)(int)uVar1 * 2);
    }
    FUN_142088910(*param_1,&local_18);
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1410a6470 FUN_1410a6470 body=628 status=ok
// SIG undefined FUN_1410a6470(void)

void FUN_1410a6470(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int *piVar3;
  
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar3 < DAT_146874a74) && (_Init_thread_header(&DAT_146874a74), DAT_146874a74 == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0328,0);
    FGenericPlatformString::Memcpy(DAT_1462a0328,L"rollOn",0xe);
    atexit((_func_5014 *)&LAB_143e5e5a0);
    _Init_thread_footer(&DAT_146874a74);
  }
  if ((*piVar3 < DAT_146874a78) && (_Init_thread_header(&DAT_146874a78), DAT_146874a78 == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0338,0);
    FGenericPlatformString::Memcpy(DAT_1462a0338,L"rollOff",0x10);
    atexit((_func_5014 *)&LAB_143e5e580);
    _Init_thread_footer(&DAT_146874a78);
  }
  if ((*piVar3 < DAT_146874a7c) && (_Init_thread_header(&DAT_146874a7c), DAT_146874a7c == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0348,0);
    FGenericPlatformString::Memcpy(DAT_1462a0348,L"condensed",0x14);
    atexit((_func_5014 *)&LAB_143e5ddb0);
    _Init_thread_footer(&DAT_146874a7c);
  }
  if ((*piVar3 < DAT_146874a80) && (_Init_thread_header(&DAT_146874a80), DAT_146874a80 == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462a0358,0);
    FGenericPlatformString::Memcpy(DAT_1462a0358,L"turnInAnim",0x16);
    atexit((_func_5014 *)&LAB_143e5e6a0);
    _Init_thread_footer(&DAT_146874a80);
  }
  lVar1 = *(longlong *)(param_1 + 0x630);
  if (lVar1 != 0) {
    switch(param_2) {
    case 0:
      FUN_142088cf0(lVar1,&DAT_1462a0338);
      return;
    case 1:
      FUN_142088cf0(lVar1,&DAT_1462a0328);
      return;
    case 2:
      puVar2 = &DAT_1462a0328;
      break;
    case 3:
      puVar2 = &DAT_1462a0338;
      break;
    case 4:
      puVar2 = &DAT_1462a0348;
      break;
    case 5:
      puVar2 = &DAT_1462a0358;
      break;
    default:
      goto switchD_1410a6500_default;
    }
    FUN_142088910(lVar1,puVar2);
  }
switchD_1410a6500_default:
  return;
}



// FUNCTION 1410a6700 FUN_1410a6700 body=342 status=ok
// SIG undefined FUN_1410a6700(void)

void FUN_1410a6700(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,char param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  uVar1 = uVar5;
  if (param_5 != (longlong *)0x0) {
    uVar1 = FUN_14301f8f0();
    uVar1 = (**(code **)(*param_5 + 0x628))(param_5,uVar1);
  }
  uVar2 = uVar5;
  if (param_3 != (longlong *)0x0) {
    uVar2 = FUN_14301f8f0();
    uVar2 = (**(code **)(*param_3 + 0x628))(param_3,uVar2);
  }
  uVar3 = uVar5;
  if (*(longlong *)(param_1 + 0xb60) != 0) {
    uVar3 = FUN_140e4c7f0();
  }
  if (param_3 == (longlong *)0x0) {
    (**(code **)(*param_2 + 0x20))(param_2,1);
  }
  else {
    uVar4 = FUN_14301f8f0();
    uVar4 = (**(code **)(*param_3 + 0x628))(param_3,uVar4);
    if (param_3 != param_5) {
      uVar5 = uVar1;
    }
    (**(code **)(*param_2 + 8))(param_2,uVar4,uVar5,uVar3);
    (**(code **)(*param_2 + 0x18))(param_2,1);
  }
  if (((param_5 != (longlong *)0x0) && (param_6 != '\0')) && (param_5 != param_3)) {
    uVar5 = FUN_14301f8f0();
    uVar5 = (**(code **)(*param_5 + 0x628))(param_5,uVar5);
    (**(code **)(*param_4 + 8))(param_4,uVar5,uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001410a6838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_4 + 0x18))(param_4,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001410a6852. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_4 + 0x20))(param_4,1);
  return;
}



// FUNCTION 1410a6860 FUN_1410a6860 body=110 status=ok
// SIG undefined FUN_1410a6860(void)

void FUN_1410a6860(longlong param_1)

{
  longlong local_18 [2];
  
  if (*(char *)(param_1 + 400) == '\0') {
    *(undefined1 *)(param_1 + 400) = 1;
    local_18[0] = 0;
    local_18[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"show",10);
    FUN_142088910(param_1,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1410a68d0 FUN_1410a68d0 body=857 status=ok
// SIG undefined FUN_1410a68d0(void)

void FUN_1410a68d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  longlong local_78;
  longlong local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  
  plVar11 = (longlong *)0x0;
  local_70 = (longlong)(*(int *)(param_1 + 0x670) + -1);
  if (0 < local_70) {
    lVar15 = local_70 << 5;
    do {
      lVar5 = *(longlong *)(param_1 + 0x668);
      plVar10 = *(longlong **)(lVar15 + 0x10 + lVar5);
      local_78 = 0;
      plVar4 = (longlong *)(lVar15 + lVar5);
      lVar1 = lVar15 + -0x20;
      plVar13 = plVar10;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        iVar8 = (int)plVar10[1];
        bVar16 = iVar8 == 0;
        if (bVar16) {
          *(int *)(plVar10 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
        while (plVar13 = plVar11, !bVar16) {
          LOCK();
          bVar16 = iVar8 == (int)plVar10[1];
          if (bVar16) {
            *(int *)(plVar10 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar16) {
            plVar13 = plVar10;
            if (plVar10 != (longlong *)0x0) {
              local_78 = plVar4[1];
            }
            break;
          }
          LOCK();
          iVar8 = (int)plVar10[1];
          bVar16 = iVar8 == 0;
          if (bVar16) {
            *(int *)(plVar10 + 1) = 0;
            iVar8 = 0;
          }
          UNLOCK();
        }
      }
      plVar10 = *(longlong **)(lVar15 + -0x10 + lVar5);
      plVar12 = plVar10;
      plVar14 = plVar11;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        iVar8 = (int)plVar10[1];
        bVar16 = iVar8 == 0;
        if (bVar16) {
          *(int *)(plVar10 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
        while (plVar12 = plVar11, !bVar16) {
          LOCK();
          bVar16 = iVar8 == (int)plVar10[1];
          if (bVar16) {
            *(int *)(plVar10 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar16) {
            plVar12 = plVar10;
            plVar14 = (longlong *)0x0;
            if (plVar10 != (longlong *)0x0) {
              plVar14 = *(longlong **)(lVar15 + -0x18 + lVar5);
            }
            break;
          }
          LOCK();
          iVar8 = (int)plVar10[1];
          bVar16 = iVar8 == 0;
          if (bVar16) {
            *(int *)(plVar10 + 1) = 0;
            iVar8 = 0;
          }
          UNLOCK();
        }
      }
      if ((((longlong *)*plVar4 != (longlong *)0x0) && (local_78 != 0)) &&
         (plVar14 != (longlong *)0x0)) {
        lVar6 = *(longlong *)*plVar4;
        uVar9 = FUN_142eee450(*(undefined8 *)(lVar1 + lVar5),local_68);
        (**(code **)(lVar6 + 0x2b0))(*plVar4,uVar9,1,0);
        plVar10 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_60 + 1;
          lVar6 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar3 = (int *)((longlong)plVar10 + 0xc);
            iVar8 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
        lVar6 = *(longlong *)*plVar4;
        uVar7 = FUN_142088620(*(undefined8 *)(lVar1 + lVar5));
        (**(code **)(lVar6 + 0x278))(*plVar4,uVar7);
        uVar7 = FUN_14203d500(plVar14);
        FUN_142056670(local_78,uVar7);
        *(undefined4 *)(plVar4 + 3) = *(undefined4 *)(lVar15 + -8 + lVar5);
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar12 + 1;
        lVar15 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar3 = (int *)((longlong)plVar12 + 0xc);
          iVar8 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar13 + 1;
        lVar15 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar3 = (int *)((longlong)plVar13 + 0xc);
          iVar8 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      local_70 = local_70 + -1;
      lVar15 = lVar1;
    } while (local_70 != 0);
  }
  lVar15 = *(longlong *)(param_1 + 0x668);
  plVar4 = *(longlong **)(lVar15 + 0x10);
  plVar10 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar8 = (int)plVar4[1];
    bVar16 = iVar8 == 0;
    if (bVar16) {
      *(int *)(plVar4 + 1) = 0;
      iVar8 = 0;
    }
    UNLOCK();
    while (plVar10 = plVar11, !bVar16) {
      LOCK();
      bVar16 = iVar8 == (int)plVar4[1];
      if (bVar16) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
      }
      UNLOCK();
      if (bVar16) {
        plVar10 = plVar4;
        if (plVar4 != (longlong *)0x0) {
          plVar11 = *(longlong **)(lVar15 + 8);
        }
        break;
      }
      LOCK();
      iVar8 = (int)plVar4[1];
      bVar16 = iVar8 == 0;
      if (bVar16) {
        *(int *)(plVar4 + 1) = 0;
        iVar8 = 0;
      }
      UNLOCK();
    }
  }
  if (((*(int *)(param_1 + 0x670) != 0) &&
      (plVar4 = (longlong *)**(longlong **)(param_1 + 0x668), plVar4 != (longlong *)0x0)) &&
     (plVar11 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x2b0))(plVar4,param_2,1,0);
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x668) + 0x278))
              ((longlong *)**(undefined8 **)(param_1 + 0x668),1);
    FUN_142056670(plVar11,1);
    *(undefined4 *)(*(longlong *)(param_1 + 0x668) + 0x18) = *(undefined4 *)(param_1 + 0x630);
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar10 + 1;
    lVar15 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar3 = (int *)((longlong)plVar10 + 0xc);
      iVar8 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return;
}



// FUNCTION 1410a6c30 FUN_1410a6c30 body=2318 status=ok
// SIG undefined FUN_1410a6c30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1410a6c30(longlong param_1,int *param_2,longlong *param_3,undefined4 *param_4,
                  undefined8 param_5,char param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  char cVar12;
  wchar_t *pwVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_158 [32];
  longlong **local_138;
  char local_128;
  undefined8 *local_120;
  undefined8 local_118;
  longlong local_110;
  longlong *local_108;
  int local_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong *local_88;
  int *local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *plStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_80 = param_2;
  FUN_1410a63b0(param_1 + 0x370,1);
  puVar2 = (undefined8 *)(param_1 + 0x398);
  *(int *)(param_1 + 0x390) = *param_2;
  plVar9 = *(longlong **)(param_2 + 4);
  uVar3 = *(undefined8 *)(param_2 + 2);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_f8 = uVar3;
  plStack_f0 = plVar9;
  if (&local_f8 != puVar2) {
    local_f8 = *puVar2;
    plStack_f0 = *(longlong **)(param_1 + 0x3a0);
    *puVar2 = uVar3;
    *(longlong **)(param_1 + 0x3a0) = plVar9;
    local_50 = uVar3;
    plStack_48 = plVar9;
  }
  plVar9 = plStack_f0;
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    plVar11 = plStack_f0 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_f0)(plStack_f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (**(code **)(*plStack_f0 + 8))(plStack_f0,1);
      }
    }
  }
  plVar9 = *(longlong **)(param_1 + 0x380);
  pwVar13 = (wchar_t *)0x0;
  uStack_e0 = plVar9;
  local_88 = plVar9;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    iVar14 = (int)plVar9[1];
    bVar15 = iVar14 == 0;
    if (bVar15) {
      *(int *)(plVar9 + 1) = 0;
      iVar14 = 0;
    }
    UNLOCK();
    while (!bVar15) {
      LOCK();
      bVar15 = iVar14 == (int)plVar9[1];
      if (bVar15) {
        *(int *)(plVar9 + 1) = iVar14 + 1;
      }
      UNLOCK();
      if (bVar15) {
        if (plVar9 != (longlong *)0x0) {
          lVar8 = *(longlong *)(param_1 + 0x378);
          local_e8 = (undefined1 *)lVar8;
          if (lVar8 == 0) goto LAB_1410a73e2;
          if (*(longlong *)(param_1 + 0x370) != 0) {
            FUN_14208ff10(*(longlong *)(param_1 + 0x370),*param_4,param_4[1]);
          }
          local_120 = (undefined8 *)0x0;
          local_118 = 0;
          switch((int)param_3[1]) {
          case 1:
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_120,4);
            iVar14 = (int)local_118 + 4;
            local_118 = CONCAT44(local_118._4_4_,iVar14);
            if (local_118._4_4_ < iVar14) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_120);
            }
            *local_120 = 0x65006e006f;
            break;
          case 2:
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_120,4);
            iVar14 = (int)local_118 + 4;
            local_118 = CONCAT44(local_118._4_4_,iVar14);
            if (local_118._4_4_ < iVar14) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_120);
            }
            *local_120 = 0x6f00770074;
            break;
          case 3:
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_120,6);
            iVar14 = (int)local_118 + 6;
            local_118 = CONCAT44(local_118._4_4_,iVar14);
            if (local_118._4_4_ < iVar14) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_120);
            }
            *local_120 = 0x65007200680074;
            *(undefined4 *)(local_120 + 1) = 0x65;
            break;
          case 4:
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_120,5);
            iVar14 = (int)local_118 + 5;
            local_118 = CONCAT44(local_118._4_4_,iVar14);
            if (local_118._4_4_ < iVar14) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_120);
            }
            *local_120 = 0x720075006f0066;
            *(undefined2 *)(local_120 + 1) = 0;
            break;
          case 5:
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_120,5);
            iVar14 = (int)local_118 + 5;
            local_118 = CONCAT44(local_118._4_4_,iVar14);
            if (local_118._4_4_ < iVar14) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_120);
            }
            *local_120 = 0x65007600690066;
            *(undefined2 *)(local_120 + 1) = 0;
            break;
          case 6:
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_120,4);
            iVar14 = (int)local_118 + 4;
            local_118 = CONCAT44(local_118._4_4_,iVar14);
            if (local_118._4_4_ < iVar14) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_120);
            }
            *local_120 = 0x7800690073;
            break;
          case 7:
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_120,6);
            iVar14 = (int)local_118 + 6;
            local_118 = CONCAT44(local_118._4_4_,iVar14);
            if (local_118._4_4_ < iVar14) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_120);
            }
            *local_120 = 0x65007600650073;
            *(undefined4 *)(local_120 + 1) = 0x6e;
            break;
          case 8:
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_120,6);
            iVar14 = (int)local_118 + 6;
            local_118 = CONCAT44(local_118._4_4_,iVar14);
            if (local_118._4_4_ < iVar14) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_120);
            }
            *local_120 = 0x68006700690065;
            *(undefined4 *)(local_120 + 1) = 0x74;
          }
          FUN_14203dbf0(lVar8,&local_120);
          if (*(longlong *)(param_1 + 0x388) == 0) goto LAB_1410a73d3;
          plVar11 = (longlong *)(*(longlong *)(param_1 + 0x388) + 0x170);
          (**(code **)(*plVar11 + 0x38))(plVar11,1);
          FUN_142ecffe0(*(undefined8 *)(param_1 + 0x388));
          local_110 = *param_3;
          cVar12 = '\0';
          local_128 = '\0';
          local_68 = local_110 + (longlong)(int)param_3[1] * 0x28;
          if (local_110 != local_68) goto LAB_1410a7050;
          goto LAB_1410a7392;
        }
        break;
      }
      LOCK();
      iVar14 = (int)plVar9[1];
      bVar15 = iVar14 == 0;
      if (bVar15) {
        *(int *)(plVar9 + 1) = 0;
        iVar14 = 0;
      }
      UNLOCK();
    }
  }
  goto LAB_1410a7419;
LAB_1410a7050:
  do {
    local_d8 = 0;
    local_d0 = 0x13;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    FGenericPlatformString::Memcpy(local_d8,L"BTN_ContextualMenu",0x26);
    uVar3 = *(undefined8 *)(param_1 + 0x388);
    local_60 = URemnantGameInstance::GetPrivateStaticClass();
    pwVar6 = (wchar_t *)FUN_142ebcee0(uVar3,&local_d8,local_60,0);
    if (pwVar6 == (wchar_t *)0x0) {
LAB_1410a70d9:
      pwVar6 = pwVar13;
    }
    else {
      lVar8 = URemnantGameInstance::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(pwVar6 + 8) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(pwVar6 + 8) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
          != lVar8 + 0x88)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      if (!bVar15) goto LAB_1410a70d9;
    }
    if (local_d8 != 0) {
      FMemory::Free();
    }
    cVar12 = local_128;
    if (pwVar6 != (wchar_t *)0x0) {
      FWeakObjectPtr::operator=(pwVar6 + 0xd8,param_1);
      *(undefined8 *)(pwVar6 + 0xdc) = param_5;
      if (*local_80 == 2) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnRecommendedFriendHovered",L"::");
        pwVar5 = pwVar13;
        while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar5 = pwVar4;
        }
        FName::FName(&local_78,pwVar5 + 2,1);
        lVar8 = local_78;
        FWeakObjectPtr::operator=(pwVar6 + 0x108,param_1);
        *(longlong *)(pwVar6 + 0x10c) = lVar8;
        local_a8 = 0;
        if ((lVar8 != 0) && (lVar8 = FWeakObjectPtr::Get(pwVar6 + 0x108), lVar8 != 0)) {
          UObject::FindFunction(lVar8,*(undefined8 *)(pwVar6 + 0x10c));
        }
        pwVar7 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnRecommendedFriendUnhovered",L"::");
        pwVar5 = pwVar13;
        while (pwVar4 = pwVar7, pwVar4 != (wchar_t *)0x0) {
          pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar5 = pwVar4;
        }
        FName::FName(&local_70,pwVar5 + 2,1);
        lVar8 = local_70;
        FWeakObjectPtr::operator=(pwVar6 + 0x110,param_1);
        *(longlong *)(pwVar6 + 0x114) = lVar8;
        local_a0 = 0;
        if ((lVar8 != 0) && (lVar8 = FWeakObjectPtr::Get(pwVar6 + 0x110), lVar8 != 0)) {
          UObject::FindFunction(lVar8,*(undefined8 *)(pwVar6 + 0x114));
        }
      }
      else {
        FWeakObjectPtr::operator=(pwVar6 + 0x108,0);
        local_98 = 0;
        pwVar6[0x10c] = L'\0';
        pwVar6[0x10d] = L'\0';
        pwVar6[0x10e] = L'\0';
        pwVar6[0x10f] = L'\0';
        FWeakObjectPtr::operator=(pwVar6 + 0x110,0);
        local_90 = 0;
        pwVar6[0x114] = L'\0';
        pwVar6[0x115] = L'\0';
        pwVar6[0x116] = L'\0';
        pwVar6[0x117] = L'\0';
      }
      FUN_142ed3af0(pwVar6,local_110,0);
      local_b8 = 0;
      local_b0 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
      FGenericPlatformString::Memcpy(local_b8,L"icon",10);
      local_138 = &local_c8;
      local_c8 = (longlong *)0x0;
      local_c0 = 0;
      local_58 = 0;
      lVar8 = FUN_140ecbdf0(pwVar6,&local_b8,0);
      plVar9 = local_c8;
      for (iVar14 = (int)local_c0; iVar14 != 0; iVar14 = iVar14 + -1) {
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        plVar9 = plVar9 + 2;
      }
      if (local_c8 != (longlong *)0x0) {
        FMemory::Free(local_c8);
      }
      if (local_b8 != 0) {
        FMemory::Free();
      }
      if (lVar8 != 0) {
        FUN_142088910();
      }
      iVar14 = *(int *)(pwVar6 + 0x16c);
      if ((iVar14 < 0) || (*(int *)(param_1 + 0x3d8) <= iVar14)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      cVar12 = local_128;
      if ((bVar15) && (*(char *)((longlong)iVar14 + *(longlong *)(param_1 + 0x3d0)) == '\x12')) {
        local_128 = '\x01';
        (**(code **)(*(longlong *)(pwVar6 + 0xb8) + 0x38))();
        cVar12 = '\x01';
      }
    }
    local_110 = local_110 + 0x28;
    plVar9 = local_88;
  } while (local_110 != local_68);
LAB_1410a7392:
  if (param_6 != '\0') {
    if (*(longlong *)(param_1 + 0x350) != 0) {
      FUN_142f0d400(*(longlong *)(param_1 + 0x350),*(undefined8 *)(param_1 + 0x388),0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x388) + 0x2b8))
              (*(longlong **)(param_1 + 0x388),cVar12 != '\0',0,0);
  }
LAB_1410a73d3:
  if (local_120 != (undefined8 *)0x0) {
    FMemory::Free();
  }
LAB_1410a73e2:
  plVar11 = uStack_e0;
  LOCK();
  plVar9 = plVar9 + 1;
  lVar8 = *plVar9;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)lVar8 == 1) {
    (**(code **)*uStack_e0)(uStack_e0);
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    iVar14 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar14 == 1) {
      (**(code **)(*uStack_e0 + 8))(uStack_e0,1);
    }
  }
LAB_1410a7419:
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    FUN_142ecf9c0();
  }
  FUN_1410a9170(param_1);
  lVar8 = FUN_142eee1b0(param_1);
  if (lVar8 != 0) {
    uStack_e0 = (longlong *)((ulonglong)uStack_e0 & 0xffffffff00000000);
    local_108 = (longlong *)0x0;
    local_e8 = &LAB_141088a50;
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    local_100 = 3;
    local_108 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar9 + 1,param_1);
      *(undefined4 *)(plVar9 + 2) = (undefined4)local_e8;
      *(undefined4 *)((longlong)plVar9 + 0x14) = local_e8._4_4_;
      *(undefined4 *)(plVar9 + 3) = (undefined4)uStack_e0;
      *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_e0._4_4_;
      lVar10 = FDelegateHandle::GenerateNewID();
      plVar9[5] = lVar10;
      *plVar9 = (longlong)&PTR_FUN_143fcff08;
    }
    FUN_142ee1c00(lVar8,PTR_s_click_14629fd98,param_1 + 0x260,&local_108);
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
  }
  return;
}



// FUNCTION 1410a7560 FUN_1410a7560 body=647 status=ok
// SIG undefined FUN_1410a7560(void)

void FUN_1410a7560(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18;
  undefined4 local_res1c;
  longlong local_98 [2];
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    uVar6 = *(undefined4 *)(lVar3 + 0x790);
  }
  *(undefined4 *)(param_1 + 0xce) = uVar6;
  if (param_1[200] != 0) {
    local_98[0] = 0;
    local_98[1] = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98,0);
    FGenericPlatformString::Memcpy(local_98[0],&DAT_144683f48,8);
    FUN_142088cf0(param_1[200],local_98);
    if (local_98[0] != 0) {
      FMemory::Free();
    }
  }
  if (0 < (int)param_1[0xcc]) {
    plVar1 = (longlong *)param_1[0xcb];
    param_1[0xcd] = *plVar1;
    iVar2 = (int)param_1[0xcc];
    if (iVar2 + -1 != 0) {
      _guard_xfg_dispatch_icall_nop(plVar1,plVar1 + 1,(longlong)(iVar2 + -1) << 3);
      iVar2 = (int)param_1[0xcc];
    }
    *(int *)(param_1 + 0xcc) = iVar2 + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0xcb);
    if (param_1[0xcd] != 0) {
      plVar1 = (longlong *)param_1[0xc9];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1[0xcd] + 0x30,1,0);
      }
      lVar3 = param_1[0xca];
      if (lVar3 != 0) {
        local_res10[0] = 0xffffffff;
        if (param_1[0xcd] != 0) {
          FUN_14170c210(local_res10,param_1[0xcd]);
          lVar3 = param_1[0xca];
        }
        local_res8[0] = 0xffffffff;
        if (lVar3 != 0) {
          FUN_14170c210(local_res8);
        }
        FWeakObjectPtr::operator=(&local_res18,param_1);
        uVar5 = local_res10[0];
        uVar6 = local_res8[0];
        local_res8[0] = 0xffffffff;
        local_res10[0] = 0xffffffff;
        local_58 = 0;
        local_48 = 0;
        puVar4 = (undefined8 *)FUN_140438ef0(0x20,local_78);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = &PTR_FUN_14461b550;
          puVar4[1] = param_1;
          *(undefined4 *)(puVar4 + 2) = local_res18;
          *(undefined4 *)((longlong)puVar4 + 0x14) = local_res1c;
          *(undefined4 *)(puVar4 + 3) = uVar6;
          uVar6 = 0xffffffff;
          *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar5;
          uVar5 = 0xffffffff;
        }
        local_88[0] = &LAB_14107d790;
        FUN_14208c4f0(param_1,local_88);
        FUN_1416f8340(uVar5);
        FUN_1416f8340(uVar6);
        FUN_1416f8340(local_res8[0]);
        FUN_1416f8340(local_res10[0]);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0001410a77b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x578))(param_1,0);
    return;
  }
  lVar3 = FUN_140eccbe0(param_1);
  if (lVar3 != 0) {
    FUN_140ccd600(lVar3,0);
    param_1[0xcd] = 0;
  }
  return;
}



// FUNCTION 1410a77f0 FUN_1410a77f0 body=222 status=ok
// SIG undefined FUN_1410a77f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1410a77f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_38 = (longlong *)0x0;
  local_28 = 0;
  local_78 = param_1;
  uStack_70 = param_3;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar1 + 1) = (undefined4)local_78;
    *(undefined4 *)((longlong)puVar1 + 0xc) = local_78._4_4_;
    *(undefined4 *)(puVar1 + 2) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_70._4_4_;
  }
  local_68[0] = &LAB_14107d340;
  FUN_1420849a0(param_1,param_2,local_68);
  if (local_28 != 0) {
    plVar2 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar2 = local_38;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1410a78d0 FUN_1410a78d0 body=4022 status=ok
// SIG undefined FUN_1410a78d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001410a7da7) */
/* WARNING: Removing unreachable block (ram,0x0001410a7db6) */
/* WARNING: Removing unreachable block (ram,0x0001410a7dd1) */

void FUN_1410a78d0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  char cVar11;
  int iVar12;
  char *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  float *pfVar21;
  uint uVar22;
  undefined8 *puVar23;
  longlong lVar24;
  longlong *plVar25;
  bool bVar26;
  undefined1 auStack_2f8 [32];
  undefined8 local_2d8;
  longlong *local_2d0;
  undefined4 local_2c8;
  int local_2b8;
  undefined1 local_2b4;
  longlong local_2b0;
  undefined8 *local_2a8;
  undefined8 local_2a0;
  float local_298;
  float local_294;
  longlong *local_290;
  undefined8 local_288;
  undefined8 local_280;
  longlong *plStack_278;
  uint local_270;
  undefined8 *local_268;
  undefined8 local_260;
  undefined8 local_258;
  longlong *local_250;
  longlong local_248;
  longlong *local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  longlong local_228;
  undefined8 local_220;
  longlong local_218;
  undefined8 local_210;
  longlong local_208;
  longlong *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  longlong *local_1e0 [2];
  undefined8 *local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  longlong *plStack_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  longlong *local_180;
  undefined8 local_178;
  longlong *local_170;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined4 local_148 [2];
  undefined8 local_140;
  longlong *plStack_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  undefined8 **local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_a0 [8];
  longlong local_98 [2];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_70;
  
  local_70 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  lVar24 = 0;
  local_2b8 = 0;
  local_2b0 = *(longlong *)(param_1 + 0x3c0);
  if (local_2b0 == 0) {
    return;
  }
  local_1a8 = param_1;
  pcVar13 = (char *)FUN_140a5dc70();
  if (*pcVar13 != '\x02') {
    return;
  }
  cVar11 = FWeakObjectPtr::IsValid(param_1 + 0x3b0);
  if (cVar11 == '\0') {
LAB_1410a79bb:
    lVar14 = lVar24;
  }
  else {
    lVar14 = FWeakObjectPtr::Get(param_1 + 0x3b0);
    lVar14 = FWeakObjectPtr::Get(lVar14 + 0x58c);
    if (lVar14 == 0) goto LAB_1410a79bb;
    lVar15 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8
         ) != lVar15 + 0x88)) {
      bVar26 = false;
    }
    else {
      bVar26 = true;
    }
    if (!bVar26) goto LAB_1410a79bb;
  }
  local_290 = (longlong *)0x0;
  local_288 = 0;
  uVar16 = FUN_140bb7440(local_2b0);
  FUN_140d80c90(uVar16,&local_290);
  local_268 = (undefined8 *)0x0;
  local_260 = 0;
  bVar26 = lVar14 == 0;
  if (bVar26) {
    plVar17 = &local_1b8;
    local_1b8 = 0;
    plStack_1b0 = (longlong *)0x0;
  }
  else {
    plVar17 = (longlong *)FUN_142dcf3a0(lVar14,local_f0);
    lVar24 = *plVar17;
  }
  uStack_230 = (longlong *)plVar17[1];
  plVar17[1] = 0;
  *plVar17 = 0;
  plVar17 = plStack_1b0;
  local_238 = lVar24;
  if ((bVar26) && (plStack_1b0 != (longlong *)0x0)) {
    LOCK();
    plVar18 = plStack_1b0 + 1;
    lVar24 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar24 == 1) {
      (**(code **)*plStack_1b0)(plStack_1b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plStack_1b0 + 8))(plStack_1b0,1);
      }
    }
  }
  if ((!bVar26) && (local_e8 != (longlong *)0x0)) {
    LOCK();
    plVar17 = local_e8 + 1;
    lVar24 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar24 == 1) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar1 = (int *)((longlong)local_e8 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_e8 + 8))(local_e8,1);
      }
    }
  }
  if (local_238 != 0) {
    local_128 = (undefined4)local_238;
    uStack_124 = local_238._4_4_;
    uStack_120 = (undefined4)uStack_230;
    uStack_11c = uStack_230._4_4_;
    if (uStack_230 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_230 + 1) = (int)uStack_230[1] + 1;
      UNLOCK();
    }
    uVar16 = FUN_140bb74b0(local_2b0);
    FUN_140d80f80(uVar16,&local_128,&local_268,0);
    plVar17 = (longlong *)CONCAT44(uStack_11c,uStack_120);
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      plVar18 = plVar17 + 1;
      lVar24 = *plVar18;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)lVar24 == 1) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar17 + 8))(plVar17,1);
        }
      }
    }
  }
  FUN_1411357c0(lVar14,&local_290);
  local_118 = &local_2b0;
  local_110 = &local_268;
  FUN_14106ca50(&local_290,&local_118);
  plVar17 = (longlong *)(param_1 + 0x3e0);
  TArray<FText,FDefaultAllocator>::Empty(plVar17,0);
  local_1f8 = 0;
  local_1f0 = 0;
  local_1d0 = &local_1f8;
  if (*(longlong *)(param_1 + 0x2e8) == 0) {
    local_2b8 = 3;
  }
  else {
    plVar18 = (longlong *)FUN_141424bc0();
    lVar24 = plVar18[0x1f];
    if (lVar24 == 0) {
      (**(code **)(*plVar18 + 0x368))(plVar18);
      lVar24 = plVar18[0x1f];
    }
    iVar12 = FUN_142480900(lVar24);
    local_2b8 = FUN_142eb7440(*(undefined8 *)(param_1 + 0x2e8));
    local_2b8 = iVar12 - local_2b8;
  }
  plVar25 = local_290 + (longlong)(int)local_288 * 2;
  for (plVar18 = local_290; plVar18 != plVar25; plVar18 = plVar18 + 2) {
    if ((*(longlong **)(*plVar18 + 0x10) == (longlong *)0x0) ||
       (cVar11 = (**(code **)(**(longlong **)(*plVar18 + 0x10) + 0x20))(), cVar11 == '\0')) {
      bVar26 = false;
    }
    else {
      bVar26 = true;
    }
    if (bVar26) {
      local_188 = *(undefined8 *)(*plVar18 + 0x10);
      local_180 = *(longlong **)(*plVar18 + 0x18);
      if (local_180 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_180 + 1) = (int)local_180[1] + 1;
        UNLOCK();
      }
      cVar11 = FUN_14107beb0(param_1,&local_188);
      plVar3 = local_180;
      if (local_180 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_180 + 1;
        lVar24 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar24 == 1) {
          (**(code **)*local_180)(local_180);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
      if (cVar11 == '\0') {
        local_228 = 0;
        local_220 = 0;
        local_178 = *(undefined8 *)(*plVar18 + 0x10);
        local_170 = *(longlong **)(*plVar18 + 0x18);
        if (local_170 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_170 + 1) = (int)local_170[1] + 1;
          UNLOCK();
        }
        FUN_141082f00(param_1,local_168,&local_178);
        plVar3 = local_170;
        if (local_170 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_170 + 1;
          lVar24 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar24 == 1) {
            (**(code **)*local_170)(local_170);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        local_2d0 = &local_228;
        local_2c8 = 0xbf800000;
        local_2d8 = CONCAT71(local_2d8._1_7_,1);
        cVar11 = FUN_140d7a1d0(*(undefined8 *)(local_2b0 + 0x478),local_168,lVar14,1);
        if (cVar11 != '\0') {
          local_280 = *(undefined8 *)(*plVar18 + 0x10);
          plStack_278 = *(longlong **)(*plVar18 + 0x18);
          if (plStack_278 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_278 + 1) = (int)plStack_278[1] + 1;
            UNLOCK();
          }
          local_1c8._0_4_ = (undefined4)local_280;
          local_1c8._4_4_ = (undefined4)((ulonglong)local_280 >> 0x20);
          uStack_1c0._0_4_ = SUB84(plStack_278,0);
          uStack_1c0._4_4_ = (undefined4)((ulonglong)plStack_278 >> 0x20);
          uStack_74 = uStack_1c0._4_4_;
          uStack_78 = (undefined4)uStack_1c0;
          uStack_7c = local_1c8._4_4_;
          local_80 = (undefined4)local_1c8;
          uStack_1c0 = 0;
          local_1c8 = 0;
          local_270 = 0;
          if (*(char *)(*plVar18 + 0x80) != '\0') {
            local_270 = (uint)(1 < *(int *)(*plVar18 + 0x68));
          }
          uVar22 = local_270;
          iVar12 = *(int *)(param_1 + 1000);
          lVar24 = (longlong)iVar12;
          *(int *)(param_1 + 1000) = iVar12 + 1;
          if (*(int *)(param_1 + 0x3ec) < iVar12 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(plVar17,iVar12);
          }
          plVar3 = plStack_278;
          lVar15 = *plVar17;
          *(undefined8 *)(lVar15 + lVar24 * 0x18) = local_280;
          *(longlong **)(lVar15 + 8 + lVar24 * 0x18) = plStack_278;
          if (plStack_278 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_278 + 1) = (int)plStack_278[1] + 1;
            UNLOCK();
            uVar22 = local_270;
          }
          *(uint *)(lVar15 + 0x10 + lVar24 * 0x18) = uVar22;
          FUN_1410700b0(&local_1d0,&local_228,uVar22);
          plVar2 = plStack_278;
          if (*(int *)(param_1 + 1000) == local_2b8) {
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar3 + 1;
              lVar24 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar24 == 1) {
                (**(code **)*plStack_278)(plStack_278);
                LOCK();
                piVar1 = (int *)((longlong)plVar2 + 0xc);
                iVar12 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar12 == 1) {
                  (**(code **)(*plStack_278 + 8))(plStack_278,1);
                }
              }
            }
            if (local_160 != (longlong *)0x0) {
              LOCK();
              plVar18 = local_160 + 1;
              lVar24 = *plVar18;
              *(int *)plVar18 = (int)*plVar18 + -1;
              UNLOCK();
              if ((int)lVar24 == 1) {
                (**(code **)*local_160)(local_160);
                LOCK();
                piVar1 = (int *)((longlong)local_160 + 0xc);
                iVar12 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar12 == 1) {
                  (**(code **)(*local_160 + 8))(local_160,1);
                }
              }
            }
            if (local_228 != 0) {
              FMemory::Free();
            }
            break;
          }
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar3 + 1;
            lVar24 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar24 == 1) {
              (**(code **)*plStack_278)(plStack_278);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar12 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*plStack_278 + 8))(plStack_278,1);
              }
            }
          }
        }
        plVar3 = local_160;
        if (local_160 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_160 + 1;
          lVar24 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar24 == 1) {
            (**(code **)*local_160)(local_160);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        if (local_228 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  lVar24 = param_1;
  if (*(int *)(param_1 + 1000) < local_2b8) {
    puVar23 = local_268 + (longlong)(int)local_260 * 2;
    local_2a8 = (undefined8 *)0x0;
    local_2a0 = 0;
    for (puVar19 = local_268; puVar19 != puVar23; puVar19 = puVar19 + 2) {
      lVar24 = (**(code **)(*(longlong *)*puVar19 + 0x38))();
      if (((*(byte *)(lVar24 + 0x10) & 4) != 0) &&
         (lVar24 = FUN_141069120(plVar17,puVar19), lVar24 == 0)) {
        uVar16 = (**(code **)(*(longlong *)*puVar19 + 8))((longlong *)*puVar19,local_e0);
        cVar11 = FUN_140bca1f0(local_2b0,uVar16,1);
        plVar18 = local_d8;
        if (local_d8 != (longlong *)0x0) {
          LOCK();
          plVar25 = local_d8 + 1;
          lVar24 = *plVar25;
          *(int *)plVar25 = (int)*plVar25 + -1;
          UNLOCK();
          if ((int)lVar24 == 1) {
            (**(code **)*local_d8)(local_d8);
            LOCK();
            piVar1 = (int *)((longlong)plVar18 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar18 + 8))(plVar18,1);
            }
          }
        }
        uVar10 = local_2a0;
        if (cVar11 == '\0') {
          lVar24 = (longlong)(int)local_2a0;
          iVar12 = (int)local_2a0 + 1;
          local_2a0 = CONCAT44(local_2a0._4_4_,iVar12);
          if (local_2a0._4_4_ < iVar12) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_2a8,uVar10 & 0xffffffff);
          }
          local_2a8[lVar24 * 2] = *puVar19;
          lVar15 = puVar19[1];
          (local_2a8 + lVar24 * 2)[1] = lVar15;
          if (lVar15 != 0) {
            LOCK();
            *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
            UNLOCK();
          }
        }
      }
      lVar24 = local_1a8;
    }
    if ((lVar14 != 0) && (lVar15 = FUN_140cff230(lVar14), lVar15 != 0)) {
      puVar19 = (undefined8 *)FDateTime::Now(local_108);
      local_88 = *puVar19;
      local_98[0] = lVar15;
      FUN_14106bb90(local_2a8,(longlong)(int)local_2a0,local_2b4,local_98);
    }
    puVar23 = local_2a8 + (longlong)(int)local_2a0 * 2;
    for (puVar19 = local_2a8; puVar19 != puVar23; puVar19 = puVar19 + 2) {
      uVar16 = (**(code **)(*(longlong *)*puVar19 + 8))((longlong *)*puVar19,local_d0);
      cVar11 = FUN_14107beb0(lVar24,uVar16);
      plVar18 = local_c8;
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar25 = local_c8 + 1;
        lVar15 = *plVar25;
        *(int *)plVar25 = (int)*plVar25 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*local_c8)(local_c8);
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          iVar12 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar18 + 8))(plVar18,1);
          }
        }
      }
      if (cVar11 == '\0') {
        local_218 = 0;
        local_210 = 0;
        uVar16 = (**(code **)(*(longlong *)*puVar19 + 8))((longlong *)*puVar19,local_c0);
        FUN_141082f00(lVar24,local_158,uVar16);
        plVar18 = local_b8;
        if (local_b8 != (longlong *)0x0) {
          LOCK();
          plVar25 = local_b8 + 1;
          lVar15 = *plVar25;
          *(int *)plVar25 = (int)*plVar25 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*local_b8)(local_b8);
            LOCK();
            piVar1 = (int *)((longlong)plVar18 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar18 + 8))(plVar18,1);
            }
          }
        }
        local_2d0 = &local_218;
        local_2c8 = 0xbf800000;
        local_2d8 = CONCAT71(local_2d8._1_7_,1);
        cVar11 = FUN_140d7a1d0(*(undefined8 *)(local_2b0 + 0x478),local_158,lVar14,1);
        if (cVar11 != '\0') {
          local_1e0[0] = (longlong *)0x0;
          puVar20 = (undefined8 *)
                    (**(code **)(*(longlong *)*puVar19 + 8))((longlong *)*puVar19,local_b0);
          local_250 = (longlong *)puVar20[1];
          local_1e8 = *puVar20;
          if (local_250 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_250 + 1) = (int)local_250[1] + 1;
            UNLOCK();
          }
          local_258 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(local_1e0,&local_250);
          plVar18 = local_250;
          if (local_250 != (longlong *)0x0) {
            LOCK();
            plVar25 = local_250 + 1;
            lVar15 = *plVar25;
            *(int *)plVar25 = (int)*plVar25 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*local_250)(local_250);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              iVar12 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*local_250 + 8))(local_250,1);
              }
            }
          }
          plVar18 = local_a8;
          if (local_a8 != (longlong *)0x0) {
            LOCK();
            plVar25 = local_a8 + 1;
            lVar15 = *plVar25;
            *(int *)plVar25 = (int)*plVar25 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*local_a8)(local_a8);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              iVar12 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*plVar18 + 8))(plVar18,1);
              }
            }
          }
          iVar12 = *(int *)(param_1 + 1000);
          lVar15 = (longlong)iVar12;
          *(int *)(param_1 + 1000) = iVar12 + 1;
          if (*(int *)(param_1 + 0x3ec) < iVar12 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(plVar17,iVar12);
          }
          plVar18 = local_1e0[0];
          lVar9 = *plVar17;
          *(undefined8 *)(lVar9 + lVar15 * 0x18) = local_1e8;
          *(longlong **)(lVar9 + 8 + lVar15 * 0x18) = local_1e0[0];
          if (local_1e0[0] != (longlong *)0x0) {
            LOCK();
            *(int *)(local_1e0[0] + 1) = (int)local_1e0[0][1] + 1;
            UNLOCK();
          }
          *(undefined4 *)(lVar9 + 0x10 + lVar15 * 0x18) = 0;
          FUN_1410700b0(&local_1d0,&local_218,0);
          plVar25 = local_1e0[0];
          if (*(int *)(lVar24 + 1000) == local_2b8) {
            if (plVar18 != (longlong *)0x0) {
              LOCK();
              plVar18 = plVar18 + 1;
              lVar14 = *plVar18;
              *(int *)plVar18 = (int)*plVar18 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*local_1e0[0])(local_1e0[0]);
                LOCK();
                piVar1 = (int *)((longlong)plVar25 + 0xc);
                iVar12 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar12 == 1) {
                  (**(code **)(*local_1e0[0] + 8))(local_1e0[0],1);
                }
              }
            }
            if (local_150 != (longlong *)0x0) {
              LOCK();
              plVar17 = local_150 + 1;
              lVar14 = *plVar17;
              *(int *)plVar17 = (int)*plVar17 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*local_150)(local_150);
                LOCK();
                piVar1 = (int *)((longlong)local_150 + 0xc);
                iVar12 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar12 == 1) {
                  (**(code **)(*local_150 + 8))(local_150,1);
                }
              }
            }
            if (local_218 != 0) {
              FMemory::Free();
            }
            break;
          }
          if (plVar18 != (longlong *)0x0) {
            LOCK();
            plVar18 = plVar18 + 1;
            lVar15 = *plVar18;
            *(int *)plVar18 = (int)*plVar18 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*local_1e0[0])(local_1e0[0]);
              LOCK();
              piVar1 = (int *)((longlong)plVar25 + 0xc);
              iVar12 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*local_1e0[0] + 8))(local_1e0[0],1);
              }
            }
          }
        }
        plVar18 = local_150;
        if (local_150 != (longlong *)0x0) {
          LOCK();
          plVar25 = local_150 + 1;
          lVar15 = *plVar25;
          *(int *)plVar25 = (int)*plVar25 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*local_150)(local_150);
            LOCK();
            piVar1 = (int *)((longlong)plVar18 + 0xc);
            iVar12 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar12 == 1) {
              (**(code **)(*plVar18 + 8))(plVar18,1);
            }
          }
        }
        if (local_218 != 0) {
          FMemory::Free();
        }
      }
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_2a8);
  }
  if ((int)local_1f0 < 1) goto LAB_1410a8792;
  local_200 = *(longlong **)(lVar24 + 0x310);
  if (local_200 == (longlong *)0x0) {
LAB_1410a872a:
    if ((local_200 == (longlong *)0x0) ||
       (local_208 = *(longlong *)(lVar24 + 0x308), local_208 == 0)) goto LAB_1410a84fb;
    pfVar21 = (float *)FUN_14203c1b0(local_208,local_100);
  }
  else {
    LOCK();
    iVar12 = (int)local_200[1];
    bVar26 = iVar12 == 0;
    if (bVar26) {
      *(int *)(local_200 + 1) = 0;
      iVar12 = 0;
    }
    UNLOCK();
    while (!bVar26) {
      LOCK();
      bVar26 = iVar12 == (int)local_200[1];
      if (bVar26) {
        *(int *)(local_200 + 1) = iVar12 + 1;
      }
      UNLOCK();
      if (bVar26) goto LAB_1410a872a;
      LOCK();
      iVar12 = (int)local_200[1];
      bVar26 = iVar12 == 0;
      if (bVar26) {
        *(int *)(local_200 + 1) = 0;
        iVar12 = 0;
      }
      UNLOCK();
    }
    local_200 = (longlong *)0x0;
LAB_1410a84fb:
    pfVar21 = (float *)&local_1a0;
    local_1a0 = DAT_1468b5d88;
  }
  plVar17 = *(longlong **)(lVar24 + 800);
  fVar4 = *pfVar21;
  fVar5 = pfVar21[1];
  local_240 = plVar17;
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    iVar12 = (int)plVar17[1];
    bVar26 = iVar12 == 0;
    if (bVar26) {
      *(int *)(plVar17 + 1) = 0;
      iVar12 = 0;
    }
    UNLOCK();
    while (!bVar26) {
      LOCK();
      bVar26 = iVar12 == (int)plVar17[1];
      if (bVar26) {
        *(int *)(plVar17 + 1) = iVar12 + 1;
      }
      UNLOCK();
      if (bVar26) {
        if ((plVar17 == (longlong *)0x0) ||
           (local_248 = *(longlong *)(lVar24 + 0x318), local_248 == 0)) goto LAB_1410a854e;
        pfVar21 = (float *)FUN_14203c1b0(local_248,local_f8);
        goto LAB_1410a855f;
      }
      LOCK();
      iVar12 = (int)plVar17[1];
      bVar26 = iVar12 == 0;
      if (bVar26) {
        *(int *)(plVar17 + 1) = 0;
        iVar12 = 0;
      }
      UNLOCK();
    }
    local_240 = (longlong *)0x0;
  }
LAB_1410a854e:
  pfVar21 = (float *)&local_198;
  local_198 = DAT_1468b5d88;
  plVar17 = local_240;
LAB_1410a855f:
  fVar6 = *pfVar21;
  fVar7 = pfVar21[1];
  local_298 = 0.0;
  local_294 = 0.0;
  if (*(longlong *)(lVar24 + 0x328) != 0) {
    FUN_142087ad0(*(longlong *)(lVar24 + 0x328),&local_298,&local_294);
  }
  local_190 = CONCAT44(fVar7 + fVar5 + local_294 + 69.0,fVar6 + fVar4 + local_298 + 3.0);
  if ((*(longlong *)(lVar24 + 0x348) != 0) &&
     (*(char *)(*(longlong *)(lVar24 + 0x348) + 0x1e8) != '\0')) {
    FUN_1410a8c80();
  }
  local_148[0] = 2;
  local_140 = 0;
  plStack_138 = (longlong *)0x0;
  puVar19 = (undefined8 *)FName::FName(local_a0,L"OnRecommendedFriendClicked",1);
  local_2d0 = (longlong *)((ulonglong)local_2d0 & 0xffffffffffffff00);
  local_2d8 = *puVar19;
  FUN_1410a6c30(lVar24,local_148,&local_1f8,&local_190);
  plVar18 = plStack_138;
  if (plStack_138 != (longlong *)0x0) {
    LOCK();
    plVar17 = plStack_138 + 1;
    lVar24 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    plVar17 = local_240;
    if ((int)lVar24 == 1) {
      (**(code **)*plStack_138)(plStack_138);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar17 = local_240;
      if (iVar12 == 1) {
        (**(code **)(*plStack_138 + 8))(plStack_138,1);
        plVar17 = local_240;
      }
    }
  }
  plVar18 = local_240;
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar17 + 1;
    lVar24 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar24 == 1) {
      (**(code **)*local_240)(local_240);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_240 + 8))(local_240,1);
      }
    }
  }
  plVar17 = local_200;
  if (local_200 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_200 + 1;
    lVar24 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar24 == 1) {
      (**(code **)*local_200)(local_200);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_200 + 8))(local_200,1);
      }
    }
  }
LAB_1410a8792:
  TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>::
  ~TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>(&local_1f8);
  plVar17 = uStack_230;
  if (uStack_230 != (longlong *)0x0) {
    LOCK();
    plVar18 = uStack_230 + 1;
    lVar24 = *plVar18;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)lVar24 == 1) {
      (**(code **)*uStack_230)(uStack_230);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar12 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*uStack_230 + 8))(uStack_230,1);
      }
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_268);
  if ((int)local_288 != 0) {
    plVar17 = local_290 + 1;
    iVar12 = (int)local_288;
    do {
      plVar18 = (longlong *)*plVar17;
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        plVar25 = plVar18 + 1;
        lVar24 = *plVar25;
        *(int *)plVar25 = (int)*plVar25 + -1;
        UNLOCK();
        if ((int)lVar24 == 1) {
          (**(code **)*plVar18)(plVar18);
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar18 + 8))(plVar18,1);
          }
        }
      }
      plVar17 = plVar17 + 2;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  if (local_290 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1410a8890 FUN_1410a8890 body=230 status=ok
// SIG undefined FUN_1410a8890(void)

void FUN_1410a8890(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*(char *)((longlong)param_1 + 0x3cd) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x3cd) = 0;
    uVar3 = (**(code **)(*param_1 + 0x148))();
    lVar4 = FUN_14110cbc0(uVar3);
    if (lVar4 != 0) {
      FUN_1411320a0(lVar4,0xffffffff);
    }
    if (param_1[0x68] != 0) {
      plVar6 = (longlong *)(param_1[0x68] + 0x170);
      (**(code **)(*plVar6 + 0x38))(plVar6,1);
    }
    FUN_1410a1840(param_1);
    lVar4 = param_1[7];
    if (lVar4 != 0) {
      lVar5 = UMovieScene3DTransformSection::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        LOCK();
        *(undefined4 *)(lVar4 + 0x588) = 1;
        UNLOCK();
        cVar2 = FUN_142eb62a0(lVar4);
        if (cVar2 == '\x02') {
          FUN_1410a4180(param_1,1);
        }
        if (*(longlong *)(lVar4 + 0x6a8) != 0) {
          FUN_14111d880(*(longlong *)(lVar4 + 0x6a8),0);
        }
      }
    }
  }
  return;
}



// FUNCTION 1410a8980 FUN_1410a8980 body=316 status=ok
// SIG undefined FUN_1410a8980(void)

void FUN_1410a8980(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_138 [4];
  undefined1 local_118 [272];
  
  if (param_1[0x1ae] != 0) {
    if (*(char *)((longlong)param_1 + 0x9d9) != '\0') {
      local_138[2] = 0;
      local_138[3] = 0;
      (**(code **)(*param_1 + 0x4e8))(param_1,param_1[0x11e],local_138 + 2);
    }
    *(undefined1 *)((longlong)param_1 + 0x9d9) = 0;
    FUN_140f089d0(param_1 + 0x17b);
    FUN_140f0b090(param_1 + 0x17b,0,1);
    LOCK();
    *(undefined4 *)((longlong)param_1 + 0x9cc) = 1;
    UNLOCK();
    FUN_1410a9c50(param_1);
    if (param_1[0x1b9] != 0) {
      local_138[0] = 0;
      local_138[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_138,0);
      FGenericPlatformString::Memcpy(local_138[0],L"head",10);
      FUN_142088cf0(param_1[0x1b9],local_138);
      if (local_138[0] != 0) {
        FMemory::Free();
      }
    }
    lVar1 = param_1[0x1a9];
    uVar2 = FUN_140ee69c0(param_1 + 0x17b,local_118);
    FUN_1410888a0(param_1,uVar2,lVar1);
    FUN_140e9c360(local_118);
    LOCK();
    *(undefined4 *)(param_1 + 0xb1) = 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1410a8ac0 FUN_1410a8ac0 body=262 status=ok
// SIG undefined FUN_1410a8ac0(void)

undefined8 FUN_1410a8ac0(longlong param_1,byte param_2)

{
  byte bVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  void *pvVar4;
  void *local_18;
  int local_10;
  
  lVar2 = *(longlong *)(param_1 + 0xb60);
  if (lVar2 != 0) {
    pvVar4 = (void *)0x0;
    local_10 = *(int *)(lVar2 + 0x1a0);
    lVar3 = (longlong)local_10;
    _Src = *(void **)(lVar2 + 0x198);
    local_18 = (void *)0x0;
    if (local_10 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_18,local_10,0);
      pvVar4 = local_18;
      _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar3 << 3);
    }
    bVar1 = *(byte *)(param_1 + 0xb78);
    if ((bVar1 & 0xfd) == 0) {
      if ((param_2 & 0xfd) != 0) {
        *(undefined1 *)(param_1 + 0x10e1) = 1;
        *(undefined1 *)(param_1 + 0x10e3) = 1;
      }
      if ((bVar1 & 0xfd) == 0) {
        FUN_141085040(param_1);
      }
    }
    else {
      if (bVar1 != 1) {
        if (pvVar4 != (void *)0x0) {
          FMemory::Free(pvVar4);
        }
        return 0;
      }
      if (param_2 != 1) {
        *(undefined1 *)(param_1 + 0x10e1) = 1;
        *(undefined1 *)(param_1 + 0x10e3) = 1;
      }
    }
    FUN_1410aa5d0(param_1,0);
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
  }
  return 1;
}



// FUNCTION 1410a8bd0 FUN_1410a8bd0 body=174 status=ok
// SIG undefined FUN_1410a8bd0(void)

void FUN_1410a8bd0(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_1 + 0x17c);
  fVar2 = *(float *)(param_1 + 0x178);
  fVar3 = *(float *)(param_1 + 0x194) - param_2;
  fVar4 = ABS(fVar1 - fVar2);
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  *(float *)(param_1 + 0x194) = fVar3;
  if ((0.0001 < fVar3) && (0.0001 < fVar4)) {
    param_2 = (fVar4 / fVar3) * param_2;
    if (fVar1 <= fVar2) {
      fVar1 = fVar2 - param_2;
    }
    else {
      fVar1 = param_2 + fVar2;
    }
  }
  fVar2 = 0.0;
  if ((0.0 <= fVar1) && (fVar2 = fVar1, 1.0 <= fVar1)) {
    fVar2 = 1.0;
  }
  *(float *)(param_1 + 0x178) = fVar2;
  FUN_1410a9a70();
  return;
}



// FUNCTION 1410a8c80 FUN_1410a8c80 body=483 status=ok
// SIG undefined FUN_1410a8c80(void)

void FUN_1410a8c80(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_res8;
  longlong *local_28;
  ulonglong local_20;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *(bool *)(param_1 + 0x1e8) = *(char *)(param_1 + 0x1e8) == '\0';
  FUN_1410aa290();
  local_res8 = param_1;
  FUN_1410785e0(&local_res8,*(undefined8 *)(param_1 + 0x1a0));
  FUN_1410785e0(&local_res8,*(undefined8 *)(param_1 + 0x1b0));
  if ((*(char *)(param_1 + 0x1e8) == '\0') && (*(longlong *)(param_1 + 0x1c0) != 0)) {
    local_28 = (longlong *)0x0;
    local_20 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Memcpy(local_28,&DAT_1446886a0,8);
    FUN_142088910(*(undefined8 *)(param_1 + 0x1c0),&local_28);
    if (local_28 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  lVar1 = FUN_142eee1b0(param_1);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x1e8) == '\0') {
      FUN_142f06340(lVar1,param_1 + 0x200);
      *(undefined8 *)(param_1 + 0x200) = 0;
    }
    else {
      uStack_10 = 0;
      local_18 = FUN_141088a70;
      local_28 = (longlong *)0x0;
      plVar2 = (longlong *)FMemory::Realloc(0,0x30);
      local_20 = CONCAT44(local_20._4_4_,3);
      local_28 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        *plVar2 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar2 + 1,param_1);
        *(undefined4 *)(plVar2 + 2) = (undefined4)local_18;
        *(undefined4 *)((longlong)plVar2 + 0x14) = local_18._4_4_;
        *(undefined4 *)(plVar2 + 3) = uStack_10;
        *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_c;
        lVar3 = FDelegateHandle::GenerateNewID();
        plVar2[5] = lVar3;
        *plVar2 = (longlong)&PTR_FUN_143fcff08;
      }
      FUN_142ee1c00(lVar1,PTR_s_click_14629fd98,param_1 + 0x200,&local_28);
      if ((int)local_20 != 0) {
        if (local_28 == (longlong *)0x0) {
          return;
        }
        (**(code **)(*local_28 + 0x28))(local_28,0);
        if (local_28 != (longlong *)0x0) {
          local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
        }
        local_20 = local_20 & 0xffffffff00000000;
      }
      if (local_28 != (longlong *)0x0) {
        FMemory::Free(local_28);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1410a8e70 FUN_1410a8e70 body=153 status=ok
// SIG undefined FUN_1410a8e70(void)

void FUN_1410a8e70(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(undefined1 *)((longlong)param_1 + 0x69c) = 5;
  param_1[0xd4] = 0;
  (**(code **)(*param_1 + 0x578))(param_1,5);
  lVar3 = FWeakObjectPtr::Get(param_1 + 0xd0);
  if (lVar3 != 0) {
    lVar4 = AUGBossFlyingAIController::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar4 + 0x90);
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < iVar1) ||
       (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)iVar1 * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_1413a4350(lVar3,CONCAT71((int7)(int3)((uint)iVar1 >> 8),5));
      return;
    }
  }
  FUN_142ebe4a0(param_1);
  return;
}


