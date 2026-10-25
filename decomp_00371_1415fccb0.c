// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1415fccb0 AsPercent body=23 status=ok
// SIG undefined AsPercent(void)

undefined8 FText::AsPercent(undefined8 param_1)

{
  AsPercentTemplate<float,float>();
  return param_1;
}



// FUNCTION 1415fccd0 AsString body=126 status=ok
// SIG undefined AsString(void)

undefined8 * FLocMetadataValue::AsString(undefined8 param_1,undefined8 *param_2)

{
  longlong local_18 [2];
  
  local_18[1] = 7;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"String",0xe);
  ErrorMessage(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free(local_18[0]);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1415fcd50 FUN_1415fcd50 body=611 status=ok
// SIG undefined FUN_1415fcd50(void)

longlong FUN_1415fcd50(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
                      longlong *param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  longlong lVar9;
  longlong *local_b8;
  longlong *plStack_b0;
  longlong local_a8 [2];
  longlong *local_98;
  longlong *plStack_90;
  undefined1 local_88 [16];
  undefined **local_78;
  undefined2 local_70;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  longlong *local_40;
  
  bVar8 = false;
  lVar3 = FInternationalization::Get();
  lVar9 = *param_5;
  plVar7 = param_2;
  if (lVar9 == 0) {
    plVar7 = *(longlong **)(lVar3 + 0x40);
    lVar9 = *(longlong *)(lVar3 + 0x38);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    bVar8 = true;
  }
  if ((bVar8) && (plVar7 != (longlong *)0x0)) {
    LOCK();
    plVar4 = plVar7 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
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
  FTextChronoFormatter::AsTime(local_a8,param_2,param_3,param_4,lVar9);
  plVar7 = (longlong *)param_5[1];
  lVar9 = *param_5;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)FString::FString(local_88,param_4);
  lVar3 = *param_2;
  lVar6 = DAT_1468b5998;
  if (DAT_1468b5998 == 0) {
    lVar5 = operator_new(0x110);
    lVar6 = 0;
    if (lVar5 != 0) {
      lVar6 = FUN_1415f3b10(lVar5);
    }
  }
  DAT_1468b5998 = lVar6;
  local_70 = *(undefined2 *)(DAT_1468b5998 + 0xd0);
  local_78 = &PTR__scalar_deleting_destructor__144cb5748;
  local_58 = *plVar4;
  *plVar4 = 0;
  local_50 = (undefined4)plVar4[1];
  local_4c = *(undefined4 *)((longlong)plVar4 + 0xc);
  plVar4[1] = 0;
  local_68 = lVar3;
  local_60 = param_3;
  local_48 = lVar9;
  local_40 = plVar7;
  if (*plVar4 != 0) {
    FMemory::Free();
  }
  plStack_b0 = (longlong *)FUN_1415eeaa0(local_a8,&local_78);
  local_b8 = plStack_b0 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_b8,local_b8,local_b8);
  local_98 = local_b8;
  plStack_90 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
    UNLOCK();
  }
  FText::FText(param_1,&local_98);
  plVar7 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_b0 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_b0)(plStack_b0);
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
  plVar7 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1415fcfc0 FUN_1415fcfc0 body=2621 status=ok
// SIG undefined FUN_1415fcfc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1415fcfc0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_348 [32];
  wchar_t *local_328;
  longlong *local_318;
  longlong local_310 [10];
  undefined2 local_2c0 [2];
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  longlong local_2a8;
  longlong *local_2a0;
  longlong local_298;
  longlong *local_290;
  longlong local_288;
  longlong *local_280;
  undefined4 local_278;
  undefined8 local_270;
  longlong *local_268;
  undefined4 local_260;
  undefined8 local_258;
  longlong *local_250;
  undefined4 local_248;
  undefined1 local_240 [8];
  longlong *local_238;
  undefined8 local_228;
  longlong *local_220;
  undefined4 local_218;
  undefined1 local_210 [8];
  longlong *local_208;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  longlong local_1d8 [4];
  longlong local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  longlong local_198;
  undefined4 local_190;
  longlong local_188 [4];
  longlong local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  longlong local_148;
  undefined4 local_140;
  undefined4 local_138 [4];
  undefined8 local_128;
  longlong *local_120;
  undefined4 local_118;
  char local_110;
  undefined4 local_108 [4];
  undefined8 local_f8;
  longlong *local_f0;
  undefined4 local_e8;
  char local_e0;
  undefined4 local_d8 [4];
  undefined8 local_c8;
  longlong *local_c0;
  undefined4 local_b8;
  char local_b0;
  undefined4 local_a8 [2];
  longlong local_a0;
  longlong *local_90;
  char local_80;
  undefined4 local_78 [2];
  longlong local_70;
  longlong *local_60;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_348;
  local_278 = 0;
  local_318 = param_2;
  lVar7 = FInternationalization::Get();
  lVar13 = *param_3;
  if (lVar13 == 0) {
    plVar11 = *(longlong **)(lVar7 + 0x40);
    lVar13 = *(longlong *)(lVar7 + 0x38);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    bVar6 = false;
    bVar5 = true;
    plVar10 = local_318;
    plVar14 = plVar11;
  }
  else {
    plVar11 = (longlong *)param_3[1];
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = false;
    plVar10 = plVar11;
    plVar14 = local_318;
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  if ((bVar5) && (plVar14 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar14 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  if ((bVar6) && (plVar10 != (longlong *)0x0)) {
    LOCK();
    plVar14 = plVar10 + 1;
    lVar7 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  local_2c0[0] = 0x100;
  local_2ac = 3;
  local_2b8 = 2;
  lVar4 = *local_318;
  local_2b4 = 2;
  lVar7 = lVar4 / 600000000;
  lVar9 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar7),8) + lVar7;
  uVar15 = lVar7 + ((lVar9 >> 5) - (lVar9 >> 0x3f)) * -0x3c;
  lVar7 = lVar4 + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar4),8);
  lVar9 = (lVar7 >> 0x17) - (lVar7 >> 0x3f);
  lVar7 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar9),8) + lVar9;
  uVar12 = lVar9 + ((lVar7 >> 5) - (lVar7 >> 0x3f)) * -0x3c;
  local_2bc = 0;
  local_2b0 = 0;
  uVar8 = FUN_141607df0();
  if ((int)((double)lVar4 * 2.7777777777777777e-11) < 1) {
    local_328 = L"Format_MinutesSeconds";
    FTextCache::FindOrCache(uVar8,local_210,L"{Minutes}:{Seconds}",L"Timespan");
    local_70 = (longlong)(int)uVar15;
    local_188[0] = 0;
    local_188[1] = 0;
    local_168 = 0;
    local_160 = 0;
    local_158 = 0xffffffff;
    local_154 = 0;
    local_148 = 0;
    local_140 = 0;
    local_78[0] = 0;
    local_50 = '\0';
    local_310[6] = 0;
    local_310[7] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_310 + 6,0);
    FGenericPlatformString::Memcpy(local_310[6],L"Minutes",0x10);
    FUN_141068d60(local_188,local_310 + 6,local_78);
    if (local_310[6] != 0) {
      FMemory::Free();
    }
    plVar10 = local_60;
    if ((local_50 != '\0') && (local_60 != (longlong *)0x0)) {
      LOCK();
      plVar14 = local_60 + 1;
      lVar7 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_288 = lVar13;
    local_280 = plVar11;
    FText::AsNumberTemplate<int,int>(&local_228,uVar12 & 0xffffffff,local_2c0,&local_288);
    local_c8 = local_228;
    local_d8[0] = 4;
    local_c0 = local_220;
    if (local_220 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_220 + 1) = (int)local_220[1] + 1;
      UNLOCK();
    }
    local_b8 = local_218;
    local_b0 = '\x01';
    local_310[8] = 0;
    local_310[9] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_310 + 8,0);
    FGenericPlatformString::Memcpy(local_310[8],L"Seconds",0x10);
    FUN_141068d60(local_188,local_310 + 8,local_d8);
    if (local_310[8] != 0) {
      FMemory::Free();
    }
    plVar10 = local_c0;
    if ((local_b0 != '\0') && (local_c0 != (longlong *)0x0)) {
      LOCK();
      plVar14 = local_c0 + 1;
      lVar13 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
    if (local_220 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_220 + 1;
      lVar13 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_220)(local_220);
        LOCK();
        piVar2 = (int *)((longlong)local_220 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_220 + 8))(local_220,1);
        }
      }
    }
    plVar10 = local_280;
    if (local_280 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_280 + 1;
      lVar13 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_280)(local_280);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_280 + 8))(local_280,1);
        }
      }
    }
    uVar8 = FTextFormat::FTextFormat(local_1e8,local_210);
    FText::Format(param_1,uVar8,local_188);
    local_140 = 0;
    if (local_148 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(local_188,0);
    if (local_168 != 0) {
      FMemory::Free();
    }
    if (local_188[0] != 0) {
      FMemory::Free();
    }
    plVar10 = local_208;
    if (local_208 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_208 + 1;
      lVar13 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_208)(local_208);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_208 + 8))(local_208,1);
        }
      }
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar11 + 1;
      lVar13 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
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
  }
  else {
    local_328 = L"Format_HoursMinutesSeconds";
    FTextCache::FindOrCache(uVar8,local_240,L"{Hours}:{Minutes}:{Seconds}",L"Timespan");
    local_a0 = (longlong)(int)((double)lVar4 * 2.7777777777777777e-11);
    local_1d8[0] = 0;
    local_1d8[1] = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1a4 = 0;
    local_198 = 0;
    local_190 = 0;
    local_a8[0] = 0;
    local_80 = '\0';
    local_310[0] = 0;
    local_1a8 = 0xffffffff;
    local_310[1] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_310,0);
    FGenericPlatformString::Memcpy(local_310[0],L"Hours",0xc);
    FUN_141068d60(local_1d8,local_310,local_a8);
    if (local_310[0] != 0) {
      FMemory::Free();
    }
    plVar10 = local_90;
    if ((local_80 != '\0') && (local_90 != (longlong *)0x0)) {
      LOCK();
      plVar14 = local_90 + 1;
      lVar7 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_2a8 = lVar13;
    local_2a0 = plVar11;
    FText::AsNumberTemplate<int,int>(&local_270,uVar15 & 0xffffffff,local_2c0,&local_2a8);
    local_128 = local_270;
    local_138[0] = 4;
    local_120 = local_268;
    if (local_268 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_268 + 1) = (int)local_268[1] + 1;
      UNLOCK();
    }
    local_118 = local_260;
    local_310[2] = 0;
    local_110 = '\x01';
    local_310[3] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_310 + 2,0);
    FGenericPlatformString::Memcpy(local_310[2],L"Minutes",0x10);
    FUN_141068d60(local_1d8,local_310 + 2,local_138);
    if (local_310[2] != 0) {
      FMemory::Free();
    }
    plVar10 = local_120;
    if ((local_110 != '\0') && (local_120 != (longlong *)0x0)) {
      LOCK();
      plVar14 = local_120 + 1;
      lVar7 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_120)(local_120);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_120 + 8))(local_120,1);
        }
      }
    }
    if (local_268 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_268 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_268)(local_268);
        LOCK();
        piVar2 = (int *)((longlong)local_268 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_268 + 8))(local_268,1);
        }
      }
    }
    plVar10 = local_2a0;
    if (local_2a0 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_2a0 + 1;
      lVar7 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_2a0)(local_2a0);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_2a0 + 8))(local_2a0,1);
        }
      }
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    local_298 = lVar13;
    local_290 = plVar11;
    FText::AsNumberTemplate<int,int>(&local_258,uVar12 & 0xffffffff,local_2c0,&local_298);
    local_f8 = local_258;
    local_108[0] = 4;
    local_f0 = local_250;
    if (local_250 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_250 + 1) = (int)local_250[1] + 1;
      UNLOCK();
    }
    local_e8 = local_248;
    local_e0 = '\x01';
    local_310[4] = 0;
    local_310[5] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_310 + 4,0);
    FGenericPlatformString::Memcpy(local_310[4],L"Seconds",0x10);
    FUN_141068d60(local_1d8,local_310 + 4,local_108);
    if (local_310[4] != 0) {
      FMemory::Free();
    }
    plVar10 = local_f0;
    if ((local_e0 != '\0') && (local_f0 != (longlong *)0x0)) {
      LOCK();
      plVar14 = local_f0 + 1;
      lVar13 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_f0 + 8))(local_f0,1);
        }
      }
    }
    if (local_250 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_250 + 1;
      lVar13 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_250)(local_250);
        LOCK();
        piVar2 = (int *)((longlong)local_250 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_250 + 8))(local_250,1);
        }
      }
    }
    plVar10 = local_290;
    if (local_290 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_290 + 1;
      lVar13 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_290)(local_290);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_290 + 8))(local_290,1);
        }
      }
    }
    uVar8 = FTextFormat::FTextFormat(local_1f8,local_240);
    FText::Format(param_1,uVar8,local_1d8);
    local_190 = 0;
    if (local_198 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(local_1d8,0);
    if (local_1b8 != 0) {
      FMemory::Free();
    }
    if (local_1d8[0] != 0) {
      FMemory::Free();
    }
    plVar10 = local_238;
    if (local_238 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_238 + 1;
      lVar13 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_238)(local_238);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_238 + 8))(local_238,1);
        }
      }
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar11 + 1;
      lVar13 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
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
  }
  return param_1;
}



// FUNCTION 1415fda00 FUN_1415fda00 body=248 status=ok
// SIG undefined FUN_1415fda00(void)

void FUN_1415fda00(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  
  FInternationalization::Get();
  FUN_141607d00();
  if (DAT_1468b5998 == 0) {
    lVar2 = operator_new(0x110);
    if (lVar2 == 0) {
      DAT_1468b5998 = 0;
    }
    else {
      DAT_1468b5998 = FUN_1415f3b10(lVar2);
    }
  }
  lVar2 = DAT_1468b5998;
  lVar3 = FInternationalization::Get();
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    plVar4[1] = lVar2;
    *plVar4 = (longlong)&DAT_143f3ed00;
    plVar4[2] = (longlong)FTextLocalizationManager::OnCultureChanged;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar2;
    *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar3 + 8,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar1 = *(int *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x10) = iVar1 + 1;
    if (*(int *)(lVar3 + 0x14) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar3 + 8,iVar1);
    }
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar3 + 8));
    *puVar5 = plVar4;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  return;
}



// FUNCTION 1415fdb00 FUN_1415fdb00 body=42 status=ok
// SIG undefined FUN_1415fdb00(void)

undefined8 FUN_1415fdb00(longlong param_1,undefined8 param_2)

{
  FUN_141606ef0(param_2,param_1 + 0x10,param_1 + 0x20,1,1);
  return param_2;
}



// FUNCTION 1415fdb30 BuildInvariantDisplayString body=170 status=ok
// SIG undefined BuildInvariantDisplayString(void)

undefined8 FTextHistory_AsCurrency::BuildInvariantDisplayString(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar5 = FInternationalization::Get();
  plVar4 = *(longlong **)(lVar5 + 0x80);
  uVar6 = *(undefined8 *)(lVar5 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  }
  uVar6 = FUN_1415da670(uVar6,param_1 + 0x70);
  FTextHistory_FormatNumber::BuildNumericDisplayString(param_1,param_2,uVar6,1);
  return param_2;
}



// FUNCTION 1415fdbe0 BuildInvariantDisplayString body=163 status=ok
// SIG undefined BuildInvariantDisplayString(void)

undefined8 FTextHistory_AsDate::BuildInvariantDisplayString(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar6 = FInternationalization::Get();
  plVar4 = *(longlong **)(lVar6 + 0x80);
  uVar5 = *(undefined8 *)(lVar6 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  }
  FTextChronoFormatter::AsDate
            (param_2,param_1 + 0x10,*(undefined4 *)(param_1 + 0x18),param_1 + 0x20,uVar5);
  return param_2;
}



// FUNCTION 1415fdc90 BuildInvariantDisplayString body=172 status=ok
// SIG undefined BuildInvariantDisplayString(void)

undefined8 FTextHistory_AsDateTime::BuildInvariantDisplayString(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar6 = FInternationalization::Get();
  plVar4 = *(longlong **)(lVar6 + 0x80);
  uVar5 = *(undefined8 *)(lVar6 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  }
  FTextChronoFormatter::AsDateTime
            (param_2,param_1 + 0x10,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
             param_1 + 0x20,uVar5);
  return param_2;
}



// FUNCTION 1415fdd40 BuildInvariantDisplayString body=166 status=ok
// SIG undefined BuildInvariantDisplayString(void)

undefined8 FTextHistory_AsNumber::BuildInvariantDisplayString(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar5 = FInternationalization::Get();
  plVar4 = *(longlong **)(lVar5 + 0x80);
  uVar6 = *(undefined8 *)(lVar5 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  }
  uVar6 = FUN_1415db8e0(uVar6);
  FTextHistory_FormatNumber::BuildNumericDisplayString(param_1,param_2,uVar6,1);
  return param_2;
}



// FUNCTION 1415fddf0 BuildInvariantDisplayString body=166 status=ok
// SIG undefined BuildInvariantDisplayString(void)

undefined8
FTextHistory_AsPercent::BuildInvariantDisplayString(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar5 = FInternationalization::Get();
  plVar4 = *(longlong **)(lVar5 + 0x80);
  uVar6 = *(undefined8 *)(lVar5 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  }
  uVar6 = FUN_1415dcd30(uVar6);
  FTextHistory_FormatNumber::BuildNumericDisplayString(param_1,param_2,uVar6,100);
  return param_2;
}



// FUNCTION 1415fdea0 BuildInvariantDisplayString body=163 status=ok
// SIG undefined BuildInvariantDisplayString(void)

undefined8 FTextHistory_AsTime::BuildInvariantDisplayString(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar6 = FInternationalization::Get();
  plVar4 = *(longlong **)(lVar6 + 0x80);
  uVar5 = *(undefined8 *)(lVar6 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  }
  FTextChronoFormatter::AsTime
            (param_2,param_1 + 0x10,*(undefined4 *)(param_1 + 0x18),param_1 + 0x20,uVar5);
  return param_2;
}



// FUNCTION 1415fdf50 GetText body=30 status=ok
// SIG undefined GetText(void)

undefined8 FWmfMediaOverlaySample::GetText(longlong param_1,undefined8 param_2)

{
  FString::FString(param_2,param_1 + 0x10);
  return param_2;
}



// FUNCTION 1415fdf70 FUN_1415fdf70 body=42 status=ok
// SIG undefined FUN_1415fdf70(void)

undefined8 FUN_1415fdf70(longlong param_1,undefined8 param_2)

{
  FUN_141607240(param_2,param_1 + 0x10,param_1 + 0x20,1,1);
  return param_2;
}



// FUNCTION 1415fdfa0 FUN_1415fdfa0 body=42 status=ok
// SIG undefined FUN_1415fdfa0(void)

undefined8 FUN_1415fdfa0(longlong param_1,undefined8 param_2)

{
  FUN_141607100(param_2,param_1 + 0x10,param_1 + 0x20,1,1);
  return param_2;
}



// FUNCTION 1415fdfd0 BuildInvariantDisplayString body=35 status=ok
// SIG undefined BuildInvariantDisplayString(void)

undefined8
FTextHistory_StringTableEntry::BuildInvariantDisplayString(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x38))();
  FString::FString(param_2,uVar1);
  return param_2;
}



// FUNCTION 1415fe000 BuildInvariantDisplayString body=183 status=ok
// SIG undefined BuildInvariantDisplayString(void)

undefined8 *
FTextHistory_Transform::BuildInvariantDisplayString(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  FUN_141611fd0(param_1 + 0x10);
  if (*(char *)(param_1 + 0x28) == '\0') {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
    (**(code **)(*plVar1 + 0x18))(plVar1,local_18);
    FTextTransformer::ToLower(param_2,local_18);
  }
  else {
    if (*(char *)(param_1 + 0x28) != '\x01') {
      *param_2 = 0;
      param_2[1] = 0;
      return param_2;
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
    (**(code **)(*plVar1 + 0x18))(plVar1,local_18);
    FTextTransformer::ToUpper(param_2,local_18);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1415fe0c0 FUN_1415fe0c0 body=42 status=ok
// SIG undefined FUN_1415fe0c0(void)

undefined8 FUN_1415fe0c0(longlong param_1,undefined8 param_2)

{
  FUN_141606ef0(param_2,param_1 + 0x10,param_1 + 0x20,1,0);
  return param_2;
}



// FUNCTION 1415fe0f0 BuildLocalizedDisplayString body=184 status=ok
// SIG undefined BuildLocalizedDisplayString(void)

undefined8 FTextHistory_AsCurrency::BuildLocalizedDisplayString(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  uint uStackX_c;
  
  bVar8 = false;
  lVar4 = FInternationalization::Get();
  lVar7 = *(longlong *)(param_1 + 0x60);
  if (lVar7 == 0) {
    plVar6 = *(longlong **)(lVar4 + 0x40);
    lVar7 = *(longlong *)(lVar4 + 0x38);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    bVar8 = true;
  }
  else {
    plVar6 = (longlong *)((ulonglong)uStackX_c << 0x20);
  }
  if ((bVar8) && (plVar6 != (longlong *)0x0)) {
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
  uVar5 = FUN_1415da670(lVar7,param_1 + 0x70);
  FTextHistory_FormatNumber::BuildNumericDisplayString(param_1,param_2,uVar5,1);
  return param_2;
}



// FUNCTION 1415fe1b0 BuildLocalizedDisplayString body=177 status=ok
// SIG undefined BuildLocalizedDisplayString(void)

undefined8 FTextHistory_AsDate::BuildLocalizedDisplayString(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  uint uStackX_c;
  
  bVar7 = false;
  lVar4 = FInternationalization::Get();
  lVar6 = *(longlong *)(param_1 + 0x30);
  if (lVar6 == 0) {
    plVar5 = *(longlong **)(lVar4 + 0x40);
    lVar6 = *(longlong *)(lVar4 + 0x38);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    bVar7 = true;
  }
  else {
    plVar5 = (longlong *)((ulonglong)uStackX_c << 0x20);
  }
  if ((bVar7) && (plVar5 != (longlong *)0x0)) {
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
  FTextChronoFormatter::AsDate
            (param_2,param_1 + 0x10,*(undefined4 *)(param_1 + 0x18),param_1 + 0x20,lVar6);
  return param_2;
}



// FUNCTION 1415fe270 BuildLocalizedDisplayString body=186 status=ok
// SIG undefined BuildLocalizedDisplayString(void)

undefined8 FTextHistory_AsDateTime::BuildLocalizedDisplayString(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  uint uStackX_c;
  
  bVar7 = false;
  lVar4 = FInternationalization::Get();
  lVar6 = *(longlong *)(param_1 + 0x30);
  if (lVar6 == 0) {
    plVar5 = *(longlong **)(lVar4 + 0x40);
    lVar6 = *(longlong *)(lVar4 + 0x38);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    bVar7 = true;
  }
  else {
    plVar5 = (longlong *)((ulonglong)uStackX_c << 0x20);
  }
  if ((bVar7) && (plVar5 != (longlong *)0x0)) {
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
  FTextChronoFormatter::AsDateTime
            (param_2,param_1 + 0x10,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
             param_1 + 0x20,lVar6);
  return param_2;
}



// FUNCTION 1415fe330 BuildLocalizedDisplayString body=180 status=ok
// SIG undefined BuildLocalizedDisplayString(void)

undefined8 FTextHistory_AsNumber::BuildLocalizedDisplayString(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  uint uStackX_c;
  
  bVar8 = false;
  lVar4 = FInternationalization::Get();
  lVar7 = *(longlong *)(param_1 + 0x60);
  if (lVar7 == 0) {
    plVar6 = *(longlong **)(lVar4 + 0x40);
    lVar7 = *(longlong *)(lVar4 + 0x38);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    bVar8 = true;
  }
  else {
    plVar6 = (longlong *)((ulonglong)uStackX_c << 0x20);
  }
  if ((bVar8) && (plVar6 != (longlong *)0x0)) {
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
  uVar5 = FUN_1415db8e0(lVar7);
  FTextHistory_FormatNumber::BuildNumericDisplayString(param_1,param_2,uVar5,1);
  return param_2;
}



// FUNCTION 1415fe3f0 BuildLocalizedDisplayString body=180 status=ok
// SIG undefined BuildLocalizedDisplayString(void)

undefined8 FTextHistory_AsPercent::BuildLocalizedDisplayString(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  uint uStackX_c;
  
  bVar8 = false;
  lVar4 = FInternationalization::Get();
  lVar7 = *(longlong *)(param_1 + 0x60);
  if (lVar7 == 0) {
    plVar6 = *(longlong **)(lVar4 + 0x40);
    lVar7 = *(longlong *)(lVar4 + 0x38);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    bVar8 = true;
  }
  else {
    plVar6 = (longlong *)((ulonglong)uStackX_c << 0x20);
  }
  if ((bVar8) && (plVar6 != (longlong *)0x0)) {
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
  uVar5 = FUN_1415dcd30(lVar7);
  FTextHistory_FormatNumber::BuildNumericDisplayString(param_1,param_2,uVar5,100);
  return param_2;
}



// FUNCTION 1415fe4b0 BuildLocalizedDisplayString body=177 status=ok
// SIG undefined BuildLocalizedDisplayString(void)

undefined8 FTextHistory_AsTime::BuildLocalizedDisplayString(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  uint uStackX_c;
  
  bVar7 = false;
  lVar4 = FInternationalization::Get();
  lVar6 = *(longlong *)(param_1 + 0x30);
  if (lVar6 == 0) {
    plVar5 = *(longlong **)(lVar4 + 0x40);
    lVar6 = *(longlong *)(lVar4 + 0x38);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    bVar7 = true;
  }
  else {
    plVar5 = (longlong *)((ulonglong)uStackX_c << 0x20);
  }
  if ((bVar7) && (plVar5 != (longlong *)0x0)) {
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
  FTextChronoFormatter::AsTime
            (param_2,param_1 + 0x10,*(undefined4 *)(param_1 + 0x18),param_1 + 0x20,lVar6);
  return param_2;
}



// FUNCTION 1415fe570 FUN_1415fe570 body=42 status=ok
// SIG undefined FUN_1415fe570(void)

undefined8 FUN_1415fe570(longlong param_1,undefined8 param_2)

{
  FUN_141607240(param_2,param_1 + 0x10,param_1 + 0x20,1,0);
  return param_2;
}



// FUNCTION 1415fe5a0 FUN_1415fe5a0 body=42 status=ok
// SIG undefined FUN_1415fe5a0(void)

undefined8 FUN_1415fe5a0(longlong param_1,undefined8 param_2)

{
  FUN_141607100(param_2,param_1 + 0x10,param_1 + 0x20,1,0);
  return param_2;
}



// FUNCTION 1415fe5d0 BuildLocalizedDisplayString body=169 status=ok
// SIG undefined BuildLocalizedDisplayString(void)

undefined8 *
FTextHistory_Transform::BuildLocalizedDisplayString(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_141611fd0(param_1 + 0x10);
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_141611fd0(param_1 + 0x10);
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    FTextTransformer::ToLower(param_2,uVar1);
    return param_2;
  }
  if (*(char *)(param_1 + 0x28) != '\x01') {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  FUN_141611fd0(param_1 + 0x10);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
  FTextTransformer::ToUpper(param_2,uVar1);
  return param_2;
}



// FUNCTION 1415fe680 BuildNumericDisplayString body=338 status=ok
// SIG undefined BuildNumericDisplayString(void)

undefined8 *
FTextHistory_FormatNumber::BuildNumericDisplayString
          (longlong param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  float fVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar8 = (undefined8 *)(param_1 + 0x40);
  if (*(char *)(param_1 + 0x58) == '\0') {
    puVar8 = (undefined8 *)(param_3 + 0x8c);
  }
  if (iVar3 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x18);
    *param_2 = 0;
    param_2[1] = 0;
    uVar6 = lVar4 * param_4;
    uVar5 = uVar6 >> 0x3f;
    uVar7 = -uVar6;
    if (-1 < (longlong)uVar6) {
      uVar7 = uVar6;
    }
  }
  else {
    if (iVar3 != 1) {
      if (iVar3 == 2) {
        fVar1 = *(float *)(param_1 + 0x18);
        *param_2 = 0;
        param_2[1] = 0;
        local_28 = *puVar8;
        uStack_20 = puVar8[1];
        local_18 = puVar8[2];
        FastDecimalFormat::Internal::FractionalToString
                  ((double)((float)param_4 * fVar1),param_3,&local_28,param_2);
        return param_2;
      }
      if (iVar3 == 3) {
        dVar2 = *(double *)(param_1 + 0x18);
        *param_2 = 0;
        param_2[1] = 0;
        local_28 = *puVar8;
        uStack_20 = puVar8[1];
        local_18 = puVar8[2];
        FastDecimalFormat::Internal::FractionalToString
                  ((double)param_4 * dVar2,param_3,&local_28,param_2);
        return param_2;
      }
      *param_2 = 0;
      param_2[1] = 0;
      return param_2;
    }
    lVar4 = *(longlong *)(param_1 + 0x18);
    *param_2 = 0;
    param_2[1] = 0;
    uVar5 = 0;
    uVar7 = param_4 * lVar4;
  }
  local_28 = *puVar8;
  uStack_20 = puVar8[1];
  local_18 = puVar8[2];
  FastDecimalFormat::Internal::IntegralToString(uVar5,uVar7,param_3,&local_28,param_2);
  return param_2;
}



// FUNCTION 1415fe7e0 FUN_1415fe7e0 body=64 status=ok
// SIG undefined FUN_1415fe7e0(void)

undefined8 FUN_1415fe7e0(undefined8 param_1,wint_t *param_2)

{
  wint_t _C;
  int iVar1;
  
  _C = *param_2;
  if (_C == 0x28) {
    return 2;
  }
  iVar1 = iswalnum(_C);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    return 3;
  }
  return 0;
}



// FUNCTION 1415fe8f0 FUN_1415fe8f0 body=25 status=ok
// SIG undefined FUN_1415fe8f0(void)

undefined8 FUN_1415fe8f0(undefined8 param_1)

{
  FUN_141601720(param_1,0);
  return param_1;
}



// FUNCTION 1415fe940 Call body=32 status=ok
// SIG undefined Call(void)

undefined8
UE4Function_Private::
TFunctionRefCaller<<lambda_2297a01fe74ed90963b5f76ff99d6a75>,TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>
::Call(undefined8 param_1,undefined8 param_2)

{
  <lambda_2297a01fe74ed90963b5f76ff99d6a75>::operator()(param_2,param_1);
  return param_1;
}



// FUNCTION 1415fe960 FUN_1415fe960 body=26 status=ok
// SIG undefined FUN_1415fe960(void)

undefined8 FUN_1415fe960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_141601130(param_1,param_3);
  return param_1;
}



// FUNCTION 1415fe980 FUN_1415fe980 body=32 status=ok
// SIG undefined FUN_1415fe980(void)

undefined8 FUN_1415fe980(undefined8 param_1,undefined8 param_2)

{
  FUN_1415f9460(param_2,param_1);
  return param_1;
}



// FUNCTION 1415fe9b0 FUN_1415fe9b0 body=32 status=ok
// SIG undefined FUN_1415fe9b0(void)

undefined8 FUN_1415fe9b0(undefined8 param_1,undefined8 param_2)

{
  FUN_1415f9a80(param_2,param_1);
  return param_1;
}



// FUNCTION 1415fe9d0 FUN_1415fe9d0 body=26 status=ok
// SIG undefined FUN_1415fe9d0(void)

undefined8 FUN_1415fe9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14160fda0(param_1,param_3);
  return param_1;
}



// FUNCTION 1415fe9f0 FUN_1415fe9f0 body=26 status=ok
// SIG undefined FUN_1415fe9f0(void)

undefined8 FUN_1415fe9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FTextFormatArgumentModifier_HangulPostPositions::Create(param_1,param_3);
  return param_1;
}



// FUNCTION 1415fea10 FUN_1415fea10 body=26 status=ok
// SIG undefined FUN_1415fea10(void)

undefined8 FUN_1415fea10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1416006d0(param_1,param_3);
  return param_1;
}



// FUNCTION 1415fea30 FUN_1415fea30 body=25 status=ok
// SIG undefined FUN_1415fea30(void)

undefined8 FUN_1415fea30(undefined8 param_1)

{
  FUN_141601720(param_1,1);
  return param_1;
}



// FUNCTION 1415fea50 ClearCurrentAssetGroupCulture body=31 status=ok
// SIG undefined ClearCurrentAssetGroupCulture(void)

void FInternationalization::ClearCurrentAssetGroupCulture(longlong param_1,undefined8 *param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = *param_2;
  FUN_1415ef860(param_1 + 0x48,local_res8);
  return;
}



// FUNCTION 1415fea70 ClearSourceStrings body=713 status=ok
// SIG undefined ClearSourceStrings(void)

void FStringTable::ClearSourceStrings(longlong param_1,undefined4 param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  bool bVar6;
  BOOL BVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
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
  undefined8 local_48 [2];
  
  BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd0));
  if (BVar7 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd0));
  }
  uStack_b4 = 1;
  local_b8 = 0;
  uVar3 = *(uint *)(param_1 + 0x58);
  puVar1 = (uint *)(param_1 + 0x40);
  uStack_a4 = 0;
  iStack_a0 = 0;
  if (uVar3 != 0) {
    puVar12 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar11 = *puVar12;
    iStack_a0 = 0;
    local_b8 = 0;
    while (uVar11 == 0) {
      lVar10 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar8 = local_b8 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar8;
      if (bVar6) goto LAB_1415feb5f;
      uVar11 = puVar12[lVar10 + 1];
    }
    uStack_b4 = -uVar11 & uVar11;
    iVar8 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_a4 = (iStack_a0 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_a4) {
LAB_1415feb5f:
      uStack_a4 = uVar3;
    }
  }
  uStack_84 = *(uint *)(param_1 + 0x58);
  uStack_58 = 0xffffffff;
  uStack_54 = uStack_a4;
  local_50 = CONCAT44(uStack_9c,iStack_a0);
  uVar11 = uStack_84 & 0xffffffe0;
  iStack_68 = local_b8;
  uStack_64 = uStack_b4;
  local_60 = puVar1;
  if (uStack_84 != uVar3) {
    puVar12 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar9 = puVar12[(int)uStack_84 >> 5] & -1 << ((byte)uStack_84 & 0x1f);
    iVar8 = (int)uStack_84 >> 5;
    while (uVar9 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_1415fec3c;
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
    uStack_84 = (uVar11 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_1415fec3c:
      uStack_84 = uVar3;
    }
  }
  while ((uStack_54 != uStack_84 || (local_60 != puVar1))) {
    puVar4 = *(undefined8 **)
              (*(longlong *)(param_1 + 0x30) + 0x10 + (longlong)(int)uStack_54 * 0x28);
    if (puVar4 != local_48) {
      *puVar4 = 0;
      plVar5 = (longlong *)puVar4[1];
      puVar4[1] = 0;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    uStack_58 = uStack_58 & ~uStack_64;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_68);
  }
  TSet<TTuple<FString,TSharedPtr<FStringTableEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FStringTableEntry,1>_>,FDefaultSetAllocator>
  ::Empty((longlong *)(param_1 + 0x30),param_2);
  TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x80,param_2);
  BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x148));
  if (BVar7 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x148));
  }
  TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FLocKeyMapFuncs<TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FDefaultSetAllocator>
  ::Empty(param_1 + 0xf8,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x148));
                    /* WARNING: Could not recover jumptable at 0x0001415fed32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd0));
  return;
}



// FUNCTION 1415fed40 FUN_1415fed40 body=463 status=ok
// SIG undefined FUN_1415fed40(void)

undefined8 * FUN_1415fed40(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  puVar10 = (undefined8 *)0x0;
  puVar8 = puVar10;
  while ((iVar12 = (int)puVar8, -1 < iVar12 && (iVar12 < *(int *)(param_1 + 0x10)))) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 8) + (longlong)iVar12 * 0x10);
    puVar8 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,local_28);
    uVar6 = local_30;
    lVar4 = puVar8[1];
    uVar5 = *puVar8;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    lVar13 = (longlong)(int)local_30;
    iVar7 = (int)local_30 + 1;
    local_30 = CONCAT44(local_30._4_4_,iVar7);
    if (local_30._4_4_ < iVar7) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_38,uVar6 & 0xffffffff);
    }
    plVar3 = local_20;
    local_38[lVar13 * 2] = uVar5;
    (local_38 + lVar13 * 2)[1] = lVar4;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    puVar8 = (undefined8 *)(ulonglong)(iVar12 + 1);
  }
  puVar8 = (undefined8 *)operator_new(0x18);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    iVar12 = (int)local_30;
    *puVar8 = &PTR__scalar_deleting_destructor__144cb52d8;
    puVar8[1] = 0;
    *(int *)(puVar8 + 2) = (int)local_30;
    if ((int)local_30 == 0) {
      *(undefined4 *)((longlong)puVar8 + 0x14) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar8 + 1,local_30 & 0xffffffff,0);
      puVar9 = (undefined8 *)puVar8[1];
      puVar11 = local_38;
      do {
        *puVar9 = *puVar11;
        lVar4 = puVar11[1];
        puVar9[1] = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        puVar9 = puVar9 + 2;
        puVar11 = puVar11 + 2;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
  }
  puVar9 = (undefined8 *)operator_new(0x18);
  if (puVar9 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar9 + 1) = 1;
    *puVar9 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar9 + 0xc) = 1;
    puVar9[2] = puVar8;
    puVar10 = puVar9;
  }
  *param_2 = puVar8;
  param_2[1] = puVar10;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar8,puVar8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_38);
  return param_2;
}



// FUNCTION 1415fef10 Clone body=143 status=ok
// SIG undefined Clone(void)

undefined8 * FLocMetadataValueBoolean::Clone(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 8);
    *puVar2 = &PTR_FUN_144cb5280;
    *(undefined1 *)(puVar2 + 1) = uVar1;
  }
  puVar3 = (undefined8 *)operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    puVar3[2] = puVar2;
  }
  *param_2 = puVar2;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar2,puVar2);
  return param_2;
}



// FUNCTION 1415fefa0 FUN_1415fefa0 body=342 status=ok
// SIG undefined FUN_1415fefa0(void)

undefined8 * FUN_1415fefa0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  lVar5 = operator_new(0x50);
  if (lVar5 == 0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_1415f02e0(lVar5,*(undefined8 *)(param_1 + 8));
  }
  plStack_20 = (longlong *)operator_new(0x18);
  if (plStack_20 != (longlong *)0x0) {
    *(undefined4 *)(plStack_20 + 1) = 1;
    *plStack_20 = (longlong)&PTR_FUN_144cb63b8;
    *(undefined4 *)((longlong)plStack_20 + 0xc) = 1;
    plStack_20[2] = local_28;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_28,local_28,local_28);
  lVar5 = operator_new(0x18);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    local_18 = local_28;
    plStack_10 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
      UNLOCK();
    }
    uVar6 = FUN_1415f0570(lVar5,&local_18);
  }
  puVar7 = (undefined8 *)operator_new(0x18);
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 1) = 1;
    *puVar7 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar7 + 0xc) = 1;
    puVar7[2] = uVar6;
  }
  *param_2 = uVar6;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,uVar6,uVar6);
  plVar4 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_20)(plStack_20);
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



// FUNCTION 1415ff100 Clone body=149 status=ok
// SIG undefined Clone(void)

undefined8 * FLocMetadataValueString::Clone(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_144cb5228;
    FString::FString(puVar1 + 1,param_1 + 8);
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar1;
  }
  *param_2 = puVar1;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar1,puVar1);
  return param_2;
}



// FUNCTION 1415ff1a0 FUN_1415ff1a0 body=2306 status=ok
// SIG undefined FUN_1415ff1a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1415ff1a0(char *param_1)

{
  char *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  wchar_t *pwVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined2 *puVar14;
  int iVar15;
  longlong *plVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  char *pcVar23;
  bool bVar24;
  undefined1 auStack_208 [32];
  wchar_t *local_1e8;
  char local_1d8 [4];
  int local_1d4;
  wchar_t *local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  undefined2 local_1b8;
  undefined2 local_1b6;
  undefined4 local_1b4;
  undefined4 local_1b0;
  wchar_t *local_1a8;
  int local_1a0;
  undefined4 local_19c;
  longlong local_198;
  int local_190;
  undefined4 local_18c;
  longlong local_188;
  undefined4 local_180;
  undefined8 local_178;
  longlong *local_170;
  uint local_168;
  undefined8 local_160;
  undefined8 local_158;
  longlong local_150;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [16];
  undefined8 local_108;
  longlong *local_100;
  undefined4 local_f8;
  char local_f0;
  longlong local_e8;
  undefined8 local_e0;
  char local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined1 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  undefined1 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined1 local_40;
  ulonglong local_38;
  ulonglong uVar19;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  FUN_141614340(param_1 + 0x58,0);
  if (*param_1 == '\0') {
    FUN_141611fd0(param_1 + 8);
    uVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    FString::operator=(param_1 + 0x48,uVar7);
    plVar16 = *(longlong **)(param_1 + 0x10);
    plVar3 = *(longlong **)(param_1 + 8);
    plVar12 = plVar3;
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
      plVar12 = *(longlong **)(param_1 + 8);
    }
    local_1c8 = plVar3;
    local_1c0 = plVar16;
    uVar6 = (**(code **)(*plVar12 + 0x40))();
    local_1b8 = uVar6;
    local_1b6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))();
    local_1b4 = *(undefined4 *)(param_1 + 0x18);
    if ((longlong **)(param_1 + 0x68) != &local_1c8) {
      *(longlong **)(param_1 + 0x68) = plVar3;
      local_1c8 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x70,&local_1c0);
      plVar16 = local_1c0;
      uVar6 = local_1b8;
    }
    plVar3 = local_1c0;
    *(undefined2 *)(param_1 + 0x78) = uVar6;
    *(undefined2 *)(param_1 + 0x7a) = local_1b6;
    *(undefined4 *)(param_1 + 0x7c) = local_1b4;
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar16 + 1;
      lVar17 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*local_1c0)(local_1c0);
        LOCK();
        piVar8 = (int *)((longlong)plVar3 + 0xc);
        iVar15 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*local_1c0 + 8))(local_1c0,1);
        }
      }
    }
  }
  param_1[0x80] = '\x01';
  param_1[0x81] = '\0';
  param_1[0x82] = '\0';
  param_1[0x83] = '\0';
  param_1[0x84] = '\0';
  param_1[0x85] = '\0';
  param_1[0x86] = '\0';
  param_1[0x87] = '\0';
  param_1[0x88] = '\x01';
  param_1[0x89] = '\0';
  param_1[0x8a] = '\0';
  param_1[0x8b] = '\0';
  uVar7 = FUN_141607e80();
  if (*(int *)(param_1 + 0x50) == 0) {
    puVar14 = &DAT_143f3eda8;
  }
  else {
    puVar14 = *(undefined2 **)(param_1 + 0x48);
  }
  ExpressionParser::Lex(&local_108,puVar14,uVar7);
  lVar17 = local_e8;
  if ((local_d8 == '\0') || (local_f0 != '\0')) {
LAB_1415ff9d1:
    FUN_141614340(param_1 + 0x58,0);
    param_1[0x80] = '\0';
    param_1[0x81] = '\0';
    param_1[0x82] = '\0';
    param_1[0x83] = '\0';
  }
  else {
    iVar15 = (int)local_e0;
    uVar4 = local_e0._4_4_;
    local_198 = local_e8;
    local_e8 = 0;
    local_190 = (int)local_e0;
    local_18c = local_e0._4_4_;
    local_e0 = 0;
    local_d8 = '\0';
    lVar10 = lVar17;
    if ((longlong *)(param_1 + 0x58) != &local_198) {
      lVar10 = *(longlong *)(param_1 + 0x58);
      iVar22 = *(int *)(param_1 + 0x60);
      if (iVar22 != 0) {
        do {
          FExpressionNode::~FExpressionNode();
          iVar22 = iVar22 + -1;
        } while (iVar22 != 0);
        lVar10 = *(longlong *)(param_1 + 0x58);
      }
      if (lVar10 != 0) {
        FMemory::Free();
      }
      *(longlong *)(param_1 + 0x58) = lVar17;
      *(int *)(param_1 + 0x60) = iVar15;
      local_198 = 0;
      *(undefined4 *)(param_1 + 100) = uVar4;
      local_190 = 0;
      lVar17 = local_198;
      lVar10 = local_198;
      iVar15 = local_190;
    }
    for (; lVar9 = local_198, iVar15 != 0; iVar15 = iVar15 + -1) {
      local_198 = lVar10;
      FExpressionNode::~FExpressionNode(lVar17);
      lVar17 = lVar17 + 0x58;
      lVar10 = local_198;
      local_198 = lVar9;
    }
    bVar24 = local_198 != 0;
    local_198 = lVar10;
    if (bVar24) {
      FMemory::Free(lVar9);
    }
    iVar15 = 0;
    if (0 < *(int *)(param_1 + 0x60)) {
      lVar17 = 0;
      uVar21 = 2;
      do {
        lVar10 = *(longlong *)(param_1 + 0x58);
        piVar8 = (int *)FUN_14160c460();
        lVar20 = lVar10 + 0x18 + lVar17;
        lVar9 = lVar20;
        if (((piVar8[3] != *(int *)(lVar17 + 0xc + lVar10) ||
             piVar8[2] != *(int *)(lVar17 + 8 + lVar10)) ||
            piVar8[1] != *(int *)(lVar17 + 4 + lVar10)) || *piVar8 != *(int *)(lVar17 + lVar10)) {
          lVar9 = 0;
        }
        if (lVar9 == 0) {
          piVar8 = (int *)FUN_14160c3e0();
          lVar9 = lVar20;
          if (((piVar8[3] != *(int *)(lVar17 + 0xc + lVar10) ||
               piVar8[2] != *(int *)(lVar17 + 8 + lVar10)) ||
              piVar8[1] != *(int *)(lVar17 + 4 + lVar10)) || *(int *)(lVar17 + lVar10) != *piVar8) {
            lVar9 = 0;
          }
          if (lVar9 != 0) {
            *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
            goto LAB_1415ff580;
          }
          piVar8 = (int *)FUN_14160c360();
          lVar9 = lVar20;
          if (((piVar8[3] != *(int *)(lVar17 + 0xc + lVar10) ||
               piVar8[2] != *(int *)(lVar17 + 8 + lVar10)) ||
              piVar8[1] != *(int *)(lVar17 + 4 + lVar10)) || *piVar8 != *(int *)(lVar17 + lVar10)) {
            lVar9 = 0;
          }
          if (lVar9 != 0) {
            iVar22 = iVar15 + 1;
            param_1[0x80] = '\x02';
            param_1[0x81] = '\0';
            param_1[0x82] = '\0';
            param_1[0x83] = '\0';
            if (((-1 < iVar22) && (iVar22 < *(int *)(param_1 + 0x60))) &&
               (lVar10 = FExpressionNode::Cast<TextFormatTokens::FArgumentModifierTokenSpecifier>
                                   (((longlong)iVar15 + 1) * 0x58 + *(longlong *)(param_1 + 0x58)),
               lVar10 != 0)) {
              local_1d4 = 0;
              local_1d8[0] = '\0';
              (**(code **)(**(longlong **)(lVar10 + 0x10) + 0x18))
                        (*(longlong **)(lVar10 + 0x10),&local_1d4,local_1d8);
              *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + local_1d4;
              *(uint *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + (uint)(local_1d8[0] != '\0');
              lVar17 = lVar17 + 0x58;
              iVar15 = iVar22;
            }
            goto LAB_1415ff580;
          }
          piVar8 = (int *)FUN_14160c2e0();
          if (((piVar8[3] != *(int *)(lVar17 + 0xc + lVar10) ||
               piVar8[2] != *(int *)(lVar17 + 8 + lVar10)) ||
              piVar8[1] != *(int *)(lVar17 + 4 + lVar10)) || *piVar8 != *(int *)(lVar17 + lVar10)) {
            lVar20 = 0;
          }
          if (lVar20 == 0) goto LAB_1415ff580;
          local_1d0 = *(wchar_t **)(lVar17 + 0x40 + lVar10);
          iVar15 = (int)(*(longlong *)(lVar17 + 0x48 + lVar10) - (longlong)local_1d0 >> 1);
          local_1a8 = (wchar_t *)0x0;
          local_19c = 0;
          local_1a0 = iVar15 + 1;
          if (iVar15 == 0) {
            local_1a0 = 0;
          }
          if ((0 < local_1a0) &&
             (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8), pwVar5 = local_1a8,
             0 < local_1a0)) {
            wcsncpy(local_1a8,local_1d0,(longlong)iVar15);
            pwVar5[iVar15] = L'\0';
          }
          FUN_1415f0740(&local_178,&local_1a8);
          local_168 = local_168 | 0x12;
          if (local_1a8 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          uVar18 = local_168;
          plVar16 = local_170;
          iVar15 = *(int *)(lVar17 + 0x54 + lVar10);
          if (local_170 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_170 + 1) = (int)local_170[1] + 1;
            UNLOCK();
          }
          uVar7 = FUN_141607df0();
          local_1e8 = L"UnexpectedArgumentModifierToken";
          FTextCache::FindOrCache
                    (uVar7,local_148,
                     L"Unexpected \'argument modifier\' token: {0} (token started at index {1})",
                     L"TextFormatter");
          local_1d0 = (wchar_t *)FTextFormat::FTextFormat(local_118,local_148);
          local_98 = 4;
          local_88 = local_178;
          local_80 = plVar16;
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
            UNLOCK();
          }
          local_78 = uVar18;
          local_68 = 0;
          local_40 = 0;
          local_188 = 0;
          local_70 = 1;
          local_180 = 2;
          local_60 = (longlong)iVar15;
          TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(&local_188,2,0);
          puVar11 = &local_90;
          puVar13 = (undefined8 *)(local_188 + 8);
          uVar19 = uVar21;
          do {
            *(undefined4 *)(puVar13 + -1) = *(undefined4 *)(puVar11 + -1);
            *puVar13 = *puVar11;
            *puVar13 = *puVar11;
            *(undefined4 *)puVar13 = *(undefined4 *)puVar11;
            *puVar13 = *puVar11;
            *(undefined1 *)(puVar13 + 4) = 0;
            if (*(char *)(puVar11 + 4) != '\0') {
              puVar13[1] = puVar11[1];
              lVar17 = puVar11[2];
              puVar13[2] = lVar17;
              if (lVar17 != 0) {
                LOCK();
                *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
                UNLOCK();
              }
              *(undefined4 *)(puVar13 + 3) = *(undefined4 *)(puVar11 + 3);
              *(undefined1 *)(puVar13 + 4) = 1;
            }
            puVar13 = puVar13 + 6;
            puVar11 = puVar11 + 6;
            uVar18 = (int)uVar19 - 1;
            uVar19 = (ulonglong)uVar18;
          } while (uVar18 != 0);
          local_158 = *(undefined8 *)local_1d0;
          local_150 = *(longlong *)((longlong)local_1d0 + 8);
          if (local_150 != 0) {
            LOCK();
            *(int *)(local_150 + 8) = *(int *)(local_150 + 8) + 1;
            UNLOCK();
          }
          puVar11 = (undefined8 *)FText::Format(local_130,&local_158,&local_188);
          plVar3 = (longlong *)puVar11[1];
          local_160 = *puVar11;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          local_1b0 = *(undefined4 *)(puVar11 + 2);
          if (local_128 != (longlong *)0x0) {
            LOCK();
            plVar12 = local_128 + 1;
            lVar17 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar17 == 1) {
              (**(code **)*local_128)(local_128);
              LOCK();
              piVar8 = (int *)((longlong)local_128 + 0xc);
              iVar15 = *piVar8;
              *piVar8 = *piVar8 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*local_128 + 8))(local_128,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(&local_188);
          pcVar23 = &stack0xfffffffffffffff0;
          do {
            uVar21 = uVar21 - 1;
            pcVar1 = pcVar23 + -0x30;
            if (*pcVar1 != '\0') {
              *pcVar1 = '\0';
              plVar12 = *(longlong **)(pcVar23 + -0x40);
              if (plVar12 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar12 + 1;
                lVar17 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar17 == 1) {
                  (**(code **)*plVar12)(plVar12);
                  LOCK();
                  piVar8 = (int *)((longlong)plVar12 + 0xc);
                  iVar15 = *piVar8;
                  *piVar8 = *piVar8 + -1;
                  UNLOCK();
                  if (iVar15 == 1) {
                    (**(code **)(*plVar12 + 8))(plVar12,1);
                  }
                }
              }
            }
            pcVar23 = pcVar1;
          } while (uVar21 != 0);
          plVar12 = *(longlong **)((longlong)local_1d0 + 8);
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar12 + 1;
            lVar17 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar17 == 1) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar8 = (int *)((longlong)plVar12 + 0xc);
              iVar15 = *piVar8;
              *piVar8 = *piVar8 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
              }
            }
          }
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            plVar12 = plVar16 + 1;
            lVar17 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar17 == 1) {
              (**(code **)*plVar16)(plVar16);
              LOCK();
              piVar8 = (int *)((longlong)plVar16 + 0xc);
              iVar15 = *piVar8;
              *piVar8 = *piVar8 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*plVar16 + 8))(plVar16,1);
              }
            }
          }
          uVar7 = local_160;
          uVar4 = local_1b0;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          local_d0 = local_160;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          local_c0 = local_1b0;
          local_b8 = 1;
          local_a0 = 0;
          local_c8 = plVar3;
          TOptional<FExpressionError>::Reset(&local_108);
          local_108 = uVar7;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          local_f8 = uVar4;
          local_f0 = '\x01';
          local_100 = plVar3;
          TOptional<TArray<FExpressionToken,FDefaultAllocator>_>::Reset(&local_e8);
          TValueOrError<TArray<FExpressionToken,FDefaultAllocator>,FExpressionError>::
          ~TValueOrError<TArray<FExpressionToken,FDefaultAllocator>,FExpressionError>(&local_d0);
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar16 = plVar3 + 1;
            lVar17 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)lVar17 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar8 = (int *)((longlong)plVar3 + 0xc);
              iVar15 = *piVar8;
              *piVar8 = *piVar8 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
            LOCK();
            plVar16 = plVar3 + 1;
            lVar17 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)lVar17 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar8 = (int *)((longlong)plVar3 + 0xc);
              iVar15 = *piVar8;
              *piVar8 = *piVar8 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          if (local_140 != (longlong *)0x0) {
            LOCK();
            plVar16 = local_140 + 1;
            lVar17 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)lVar17 == 1) {
              (**(code **)*local_140)(local_140);
              LOCK();
              piVar8 = (int *)((longlong)local_140 + 0xc);
              iVar15 = *piVar8;
              *piVar8 = *piVar8 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*local_140 + 8))(local_140,1);
              }
            }
          }
          if (local_170 != (longlong *)0x0) {
            LOCK();
            plVar16 = local_170 + 1;
            lVar17 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)lVar17 == 1) {
              (**(code **)*local_170)(local_170);
              LOCK();
              piVar8 = (int *)((longlong)local_170 + 0xc);
              iVar15 = *piVar8;
              *piVar8 = *piVar8 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*local_170 + 8))(local_170,1);
              }
            }
          }
          goto LAB_1415ff9d1;
        }
        *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + *(int *)(lVar9 + 8);
LAB_1415ff580:
        iVar15 = iVar15 + 1;
        lVar17 = lVar17 + 0x58;
      } while (iVar15 < *(int *)(param_1 + 0x60));
    }
  }
  if (local_d8 != '\0') {
    local_d8 = '\0';
    lVar17 = local_e8;
    for (iVar15 = (int)local_e0; iVar15 != 0; iVar15 = iVar15 + -1) {
      FExpressionNode::~FExpressionNode(lVar17);
      lVar17 = lVar17 + 0x58;
    }
    if (local_e8 != 0) {
      FMemory::Free();
    }
  }
  plVar16 = local_100;
  if ((local_f0 != '\0') && (local_f0 = 0, local_100 != (longlong *)0x0)) {
    LOCK();
    plVar3 = local_100 + 1;
    lVar17 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar8 = (int *)((longlong)plVar16 + 0xc);
      iVar15 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  return;
}



// FUNCTION 1415ffab0 ConditionalCompile_NoLock body=749 status=ok
// SIG undefined ConditionalCompile_NoLock(void)

void FTextFormatData::ConditionalCompile_NoLock(char *param_1)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  short sVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  short sVar8;
  undefined2 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  short *psVar14;
  longlong *plVar15;
  undefined2 *puVar16;
  longlong lVar17;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined2 local_38;
  undefined2 local_36;
  undefined4 local_34;
  
  bVar6 = false;
  bVar5 = false;
  if (*param_1 != '\0') {
    return;
  }
  plVar10 = (longlong *)FUN_1404b03b0();
  plVar11 = *(longlong **)(param_1 + 8);
  plVar10 = (longlong *)*plVar10;
  if (plVar11 == plVar10) {
LAB_1415ffb1f:
    bVar7 = true;
  }
  else {
    plVar10 = (longlong *)(**(code **)(*plVar10 + 0x18))(plVar10,local_58);
    plVar11 = (longlong *)(**(code **)(*plVar11 + 0x18))(plVar11,local_68);
    bVar6 = true;
    bVar5 = true;
    if (*plVar11 == *plVar10) goto LAB_1415ffb1f;
    bVar7 = false;
  }
  if ((bVar5) && (local_60 != (longlong *)0x0)) {
    LOCK();
    plVar11 = local_60 + 1;
    lVar17 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if ((bVar6) && (local_50 != (longlong *)0x0)) {
    LOCK();
    plVar11 = local_50 + 1;
    lVar17 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
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
  if (bVar7) {
    return;
  }
  pplVar2 = (longlong **)(param_1 + 0x68);
  FUN_141611fd0(param_1 + 8);
  if ((((*pplVar2 != (longlong *)0x0) && (*pplVar2 == *(longlong **)(param_1 + 8))) &&
      (sVar8 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))(),
      *(short *)(param_1 + 0x78) == sVar8)) &&
     ((sVar8 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(),
      *(short *)(param_1 + 0x7a) == sVar8 && (*(int *)(param_1 + 0x7c) == *(int *)(param_1 + 0x18)))
     )) {
    return;
  }
  FUN_141611fd0(param_1 + 8);
  sVar8 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))();
  if (((*(short *)(param_1 + 0x78) == sVar8) &&
      (sVar8 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(),
      *(short *)(param_1 + 0x7a) == sVar8)) && (plVar11 = *pplVar2, plVar11 != (longlong *)0x0)) {
    FUN_141611fd0(param_1 + 8);
    puVar12 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    puVar13 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11);
    psVar14 = &DAT_143f3eda8;
    if (*(int *)(puVar12 + 1) == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)*puVar12;
    }
    if (*(int *)(puVar13 + 1) != 0) {
      psVar14 = (short *)*puVar13;
    }
    lVar17 = (longlong)puVar16 - (longlong)psVar14;
    do {
      sVar8 = *psVar14;
      sVar4 = *(short *)((longlong)psVar14 + lVar17);
      if (sVar8 != sVar4) break;
      psVar14 = psVar14 + 1;
    } while (sVar4 != 0);
    if (sVar8 == sVar4) {
      bVar5 = false;
      goto LAB_1415ffc90;
    }
  }
  bVar5 = true;
LAB_1415ffc90:
  plVar11 = *(longlong **)(param_1 + 0x10);
  plVar10 = *(longlong **)(param_1 + 8);
  plVar15 = plVar10;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    plVar15 = *(longlong **)(param_1 + 8);
  }
  local_48 = plVar10;
  local_40 = plVar11;
  uVar9 = (**(code **)(*plVar15 + 0x40))();
  local_38 = uVar9;
  local_36 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))();
  local_34 = *(undefined4 *)(param_1 + 0x18);
  if (pplVar2 != &local_48) {
    *pplVar2 = plVar10;
    local_48 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x70,&local_40);
    plVar11 = local_40;
    uVar9 = local_38;
  }
  plVar10 = local_40;
  *(undefined2 *)(param_1 + 0x78) = uVar9;
  *(undefined4 *)(param_1 + 0x7c) = local_34;
  *(undefined2 *)(param_1 + 0x7a) = local_36;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar11 + 1;
    lVar17 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (bVar5) {
    FUN_1415ff1a0(param_1);
  }
  return;
}



// FUNCTION 1415ffda0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
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
      TSet<TTuple<int,FIndividualOcclusionHistory>,TDefaultMapHashableKeyFuncs<int,FIndividualOcclusionHistory,0>,FDefaultSetAllocator>
      ::Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1415ffe50 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
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



// FUNCTION 1415fff00 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FTextCache::FCacheKey,FText>,TDefaultMapHashableKeyFuncs<FTextCache::FCacheKey,FText,0>,FDefaultSetAllocator>
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



// FUNCTION 1415fffb0 ConditionalRehash body=497 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FString,FString>,FLocKeyMapFuncs<FString>,FDefaultSetAllocator>::ConditionalRehash
          (longlong param_1,ulonglong param_2,char param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  if ((uint)param_2 < 4) {
    uVar4 = 1;
  }
  else {
    uVar5 = (uint)(param_2 >> 1) & 0x7fffffff;
    uVar4 = uVar5 + 8;
    iVar3 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar8 = 0x20;
    if (uVar4 != 0) {
      iVar8 = 0x1f - iVar3;
    }
    uVar5 = uVar5 + 7;
    iVar3 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    if (uVar5 == 0) {
      uVar4 = 1;
    }
    else {
      uVar4 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar3) & 0x1f);
    }
  }
  if (0 < (int)(uint)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < (int)uVar4)) || (((int)uVar4 < iVar3 && (param_3 != '\0')))) {
      *(uint *)(param_1 + 0x48) = uVar4;
      lVar1 = param_1 + 0x38;
      if (*(longlong *)(param_1 + 0x40) != 0) {
        uVar6 = FMemory::Realloc(*(longlong *)(param_1 + 0x40),0,0);
        *(undefined8 *)(param_1 + 0x40) = uVar6;
        uVar4 = *(uint *)(param_1 + 0x48);
      }
      if (uVar4 != 0) {
        TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation
                  (lVar1,0,uVar4,4);
        if (0 < (int)uVar4) {
          uVar11 = 0;
          uVar12 = (ulonglong)uVar4;
          do {
            lVar10 = *(longlong *)(param_1 + 0x40);
            if (*(longlong *)(param_1 + 0x40) == 0) {
              lVar10 = lVar1;
            }
            uVar7 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar11;
            uVar11 = uVar11 + 1;
            *(undefined4 *)(lVar10 + uVar7 * 4) = 0xffffffff;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
                  (&local_38,param_1);
        if (local_1c < *(int *)(local_28 + 0x18)) {
          do {
            iVar3 = local_1c;
            puVar2 = (undefined8 *)(*local_38 + (longlong)local_1c * 0x28);
            if (*(int *)(*local_38 + 8 + (longlong)local_1c * 0x28) == 0) {
              puVar9 = &DAT_143f3eda8;
            }
            else {
              puVar9 = (undefined2 *)*puVar2;
            }
            uVar4 = FCrc::StrCrc32<wchar_t>(puVar9);
            uVar4 = uVar4 & *(int *)(param_1 + 0x48) - 1U;
            *(uint *)((longlong)puVar2 + 0x24) = uVar4;
            lVar10 = *(longlong *)(param_1 + 0x40);
            if (*(longlong *)(param_1 + 0x40) == 0) {
              lVar10 = lVar1;
            }
            *(undefined4 *)(puVar2 + 4) =
                 *(undefined4 *)
                  (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
            lVar10 = *(longlong *)(param_1 + 0x40);
            if (*(longlong *)(param_1 + 0x40) == 0) {
              lVar10 = lVar1;
            }
            *(int *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
                 = iVar3;
            local_20 = local_20 & ~local_2c;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
          } while (local_1c < *(int *)(local_28 + 0x18));
        }
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1416001b0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FLocKeyMapFuncs<TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FDefaultSetAllocator>
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



// FUNCTION 141600260 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FString,TSharedPtr<FStringTableEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FStringTableEntry,1>_>,FDefaultSetAllocator>
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



// FUNCTION 141600310 FUN_141600310 body=161 status=ok
// SIG undefined FUN_141600310(void)

undefined8 FUN_141600310(longlong param_1,uint param_2,char param_3)

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
      FUN_141613660(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1416003c0 ConditionalRehash body=497 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<FString,FLocKeySetFuncs,FDefaultSetAllocator>::ConditionalRehash
          (longlong param_1,ulonglong param_2,char param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  if ((uint)param_2 < 4) {
    uVar4 = 1;
  }
  else {
    uVar5 = (uint)(param_2 >> 1) & 0x7fffffff;
    uVar4 = uVar5 + 8;
    iVar3 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    iVar8 = 0x20;
    if (uVar4 != 0) {
      iVar8 = 0x1f - iVar3;
    }
    uVar5 = uVar5 + 7;
    iVar3 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    if (uVar5 == 0) {
      uVar4 = 1;
    }
    else {
      uVar4 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar3) & 0x1f);
    }
  }
  if (0 < (int)(uint)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < (int)uVar4)) || (((int)uVar4 < iVar3 && (param_3 != '\0')))) {
      *(uint *)(param_1 + 0x48) = uVar4;
      lVar1 = param_1 + 0x38;
      if (*(longlong *)(param_1 + 0x40) != 0) {
        uVar6 = FMemory::Realloc(*(longlong *)(param_1 + 0x40),0,0);
        *(undefined8 *)(param_1 + 0x40) = uVar6;
        uVar4 = *(uint *)(param_1 + 0x48);
      }
      if (uVar4 != 0) {
        TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation
                  (lVar1,0,uVar4,4);
        if (0 < (int)uVar4) {
          uVar11 = 0;
          uVar12 = (ulonglong)uVar4;
          do {
            lVar10 = *(longlong *)(param_1 + 0x40);
            if (*(longlong *)(param_1 + 0x40) == 0) {
              lVar10 = lVar1;
            }
            uVar7 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar11;
            uVar11 = uVar11 + 1;
            *(undefined4 *)(lVar10 + uVar7 * 4) = 0xffffffff;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
                  (&local_38,param_1);
        if (local_1c < *(int *)(local_28 + 0x18)) {
          do {
            iVar3 = local_1c;
            puVar2 = (undefined8 *)(*local_38 + (longlong)local_1c * 0x18);
            if (*(int *)(*local_38 + 8 + (longlong)local_1c * 0x18) == 0) {
              puVar9 = &DAT_143f3eda8;
            }
            else {
              puVar9 = (undefined2 *)*puVar2;
            }
            uVar4 = FCrc::StrCrc32<wchar_t>(puVar9);
            uVar4 = uVar4 & *(int *)(param_1 + 0x48) - 1U;
            *(uint *)((longlong)puVar2 + 0x14) = uVar4;
            lVar10 = *(longlong *)(param_1 + 0x40);
            if (*(longlong *)(param_1 + 0x40) == 0) {
              lVar10 = lVar1;
            }
            *(undefined4 *)(puVar2 + 2) =
                 *(undefined4 *)
                  (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
            lVar10 = *(longlong *)(param_1 + 0x40);
            if (*(longlong *)(param_1 + 0x40) == 0) {
              lVar10 = lVar1;
            }
            *(int *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
                 = iVar3;
            local_20 = local_20 & ~local_2c;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
          } while (local_1c < *(int *)(local_28 + 0x18));
        }
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1416005c0 Copy body=77 status=ok
// SIG undefined Copy(void)

undefined8
Impl::FInlineDataStorage<TextFormatTokens::FArgumentModifierTokenSpecifier>::Copy
          (longlong param_1,undefined8 param_2)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_28 = *(undefined8 *)(param_1 + 8);
  local_20 = *(undefined4 *)(param_1 + 0x10);
  local_18 = *(undefined8 *)(param_1 + 0x18);
  local_10 = *(longlong *)(param_1 + 0x20);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FExpressionNode::FExpressionNode<TextFormatTokens::FArgumentModifierTokenSpecifier>
            (param_2,&local_28,0);
  return param_2;
}



// FUNCTION 141600610 FUN_141600610 body=58 status=ok
// SIG undefined FUN_141600610(void)

undefined8 * FUN_141600610(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar4 = (undefined8 *)FUN_14160c360();
  uVar1 = puVar4[1];
  *param_2 = *puVar4;
  param_2[1] = uVar1;
  param_2[2] = &PTR_FUN_144cb62f8;
  param_2[3] = uVar2;
  param_2[4] = uVar3;
  return param_2;
}



// FUNCTION 141600650 FUN_141600650 body=57 status=ok
// SIG undefined FUN_141600650(void)

undefined8 * FUN_141600650(longlong param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined2 *)(param_1 + 8);
  puVar3 = (undefined8 *)FUN_14160c3e0();
  uVar2 = puVar3[1];
  *param_2 = *puVar3;
  param_2[1] = uVar2;
  param_2[2] = &PTR_FUN_144cb6338;
  *(undefined2 *)(param_2 + 3) = uVar1;
  return param_2;
}



// FUNCTION 141600690 FUN_141600690 body=58 status=ok
// SIG undefined FUN_141600690(void)

undefined8 * FUN_141600690(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar4 = (undefined8 *)FUN_14160c460();
  uVar1 = puVar4[1];
  *param_2 = *puVar4;
  param_2[1] = uVar1;
  param_2[2] = &PTR_FUN_144cb6358;
  param_2[3] = uVar2;
  param_2[4] = uVar3;
  return param_2;
}



// FUNCTION 1416006d0 FUN_1416006d0 body=2136 status=ok
// SIG undefined FUN_1416006d0(void)

undefined8 * FUN_1416006d0(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  LPCRITICAL_SECTION p_Var3;
  int *piVar4;
  longlong lVar5;
  char cVar6;
  BOOL BVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  wchar_t *pwVar17;
  undefined1 uVar18;
  int iVar19;
  int iVar20;
  undefined8 *local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  int local_90;
  undefined4 local_8c;
  undefined1 *local_88;
  longlong *local_80;
  wchar_t *local_78;
  int local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  int local_60;
  undefined4 local_5c;
  undefined1 *local_58;
  longlong *local_50;
  wchar_t *local_48;
  wchar_t *local_40;
  undefined1 *local_38;
  longlong *local_30;
  
  pwVar10 = (wchar_t *)0x0;
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  cVar6 = ITextFormatArgumentModifier::ParseValueArgs(param_2,&local_a8,0x2c);
  if ((cVar6 != '\0') && ((int)local_a0 - 2U < 2)) {
    iVar19 = *(int *)(local_a8 + 1);
    piVar4 = (int *)(local_a8 + 1);
    local_78 = (wchar_t *)0x0;
    pwVar11 = (wchar_t *)*local_a8;
    local_6c = 0;
    iVar20 = iVar19 + 1;
    if (iVar19 == 0) {
      iVar20 = 0;
    }
    pwVar17 = pwVar10;
    local_70 = iVar20;
    if ((0 < iVar20) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0), iVar20 = local_70,
       pwVar17 = local_78, 0 < local_70)) {
      wcsncpy(local_78,pwVar11,(longlong)iVar19);
      pwVar17[iVar19] = L'\0';
    }
    pwVar8 = (wchar_t *)operator_new(0x90);
    pwVar11 = pwVar10;
    if (pwVar8 != (wchar_t *)0x0) {
      *(undefined1 *)pwVar8 = 1;
      plVar9 = (longlong *)FUN_1404b03b0();
      *(longlong *)(pwVar8 + 4) = *plVar9;
      lVar5 = plVar9[1];
      *(longlong *)(pwVar8 + 8) = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
        pwVar17 = local_78;
        iVar20 = local_70;
      }
      pwVar8[0xc] = L'\0';
      pwVar8[0xd] = L'\0';
      InitializeCriticalSection((LPCRITICAL_SECTION)(pwVar8 + 0x10));
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(pwVar8 + 0x10),4000);
      *(wchar_t **)(pwVar8 + 0x24) = pwVar17;
      *(undefined4 *)(pwVar8 + 0x2a) = local_6c;
      *(int *)(pwVar8 + 0x28) = iVar20;
      pwVar8[0x2c] = L'\0';
      pwVar8[0x2d] = L'\0';
      pwVar8[0x2e] = L'\0';
      pwVar8[0x2f] = L'\0';
      pwVar8[0x30] = L'\0';
      pwVar8[0x31] = L'\0';
      pwVar8[0x32] = L'\0';
      pwVar8[0x33] = L'\0';
      pwVar8[0x34] = L'\0';
      pwVar8[0x35] = L'\0';
      pwVar8[0x36] = L'\0';
      pwVar8[0x37] = L'\0';
      pwVar8[0x38] = L'\0';
      pwVar8[0x39] = L'\0';
      pwVar8[0x3a] = L'\0';
      pwVar8[0x3b] = L'\0';
      pwVar8[0x3c] = L'\0';
      pwVar8[0x3d] = L'\0';
      pwVar8[0x3e] = L'\0';
      pwVar8[0x3f] = L'\0';
      local_78 = (wchar_t *)0x0;
      FUN_1415ff1a0(pwVar8);
      pwVar17 = pwVar10;
      pwVar11 = pwVar8;
    }
    local_48 = pwVar11;
    pwVar8 = (wchar_t *)operator_new(0x18);
    if (pwVar8 != (wchar_t *)0x0) {
      pwVar8[4] = L'\x01';
      pwVar8[5] = L'\0';
      pwVar8[6] = L'\x01';
      pwVar8[7] = L'\0';
      *(undefined ***)pwVar8 = &PTR_FUN_144cb63d8;
      *(wchar_t **)(pwVar8 + 8) = pwVar11;
      pwVar10 = pwVar8;
    }
    local_40 = pwVar10;
    SharedPointerInternals::EnableSharedFromThis(&local_48,pwVar11,pwVar11);
    if (pwVar17 != (wchar_t *)0x0) {
      FMemory::Free(pwVar17);
    }
    pwVar11 = (wchar_t *)0x0;
    iVar19 = *(int *)(local_a8 + 5);
    piVar1 = (int *)(local_a8 + 5);
    local_68 = (wchar_t *)0x0;
    local_5c = 0;
    pwVar10 = (wchar_t *)local_a8[4];
    iVar20 = iVar19 + 1;
    if (iVar19 == 0) {
      iVar20 = 0;
    }
    local_60 = iVar20;
    if ((0 < iVar20) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0), iVar20 = local_60,
       pwVar11 = local_68, 0 < local_60)) {
      wcsncpy(local_68,pwVar10,(longlong)iVar19);
      pwVar11[iVar19] = L'\0';
    }
    puVar12 = (undefined1 *)operator_new(0x90);
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = (undefined1 *)0x0;
    }
    else {
      *puVar12 = 1;
      puVar13 = (undefined8 *)FUN_1404b03b0();
      *(undefined8 *)(puVar12 + 8) = *puVar13;
      lVar5 = puVar13[1];
      *(longlong *)(puVar12 + 0x10) = lVar5;
      pwVar10 = pwVar11;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
        pwVar10 = local_68;
        iVar20 = local_60;
      }
      *(undefined4 *)(puVar12 + 0x18) = 0;
      InitializeCriticalSection((LPCRITICAL_SECTION)(puVar12 + 0x20));
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar12 + 0x20),4000);
      pwVar11 = (wchar_t *)0x0;
      *(wchar_t **)(puVar12 + 0x48) = pwVar10;
      *(undefined4 *)(puVar12 + 0x54) = local_5c;
      *(int *)(puVar12 + 0x50) = iVar20;
      *(undefined8 *)(puVar12 + 0x58) = 0;
      *(undefined8 *)(puVar12 + 0x60) = 0;
      *(undefined8 *)(puVar12 + 0x68) = 0;
      *(undefined8 *)(puVar12 + 0x70) = 0;
      *(undefined8 *)(puVar12 + 0x78) = 0;
      local_68 = (wchar_t *)0x0;
      FUN_1415ff1a0(puVar12);
    }
    plVar9 = (longlong *)0x0;
    local_58 = puVar12;
    plVar14 = (longlong *)operator_new(0x18);
    if (plVar14 != (longlong *)0x0) {
      *(undefined4 *)(plVar14 + 1) = 1;
      *plVar14 = (longlong)&PTR_FUN_144cb63d8;
      *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
      plVar14[2] = (longlong)puVar12;
      plVar9 = plVar14;
    }
    local_50 = plVar9;
    SharedPointerInternals::EnableSharedFromThis(&local_58,puVar12,puVar12);
    if (pwVar11 != (wchar_t *)0x0) {
      FMemory::Free(pwVar11);
    }
    FTextFormat::FTextFormat(&local_88);
    if ((int)local_a0 == 3) {
      pwVar11 = (wchar_t *)0x0;
      local_98 = (wchar_t *)0x0;
      local_8c = 0;
      iVar19 = *(int *)(local_a8 + 9);
      pwVar10 = (wchar_t *)local_a8[8];
      iVar20 = iVar19 + 1;
      if (iVar19 == 0) {
        iVar20 = 0;
      }
      local_90 = iVar20;
      if ((0 < iVar20) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0), iVar20 = local_90,
         pwVar11 = local_98, 0 < local_90)) {
        wcsncpy(local_98,pwVar10,(longlong)iVar19);
        pwVar11[iVar19] = L'\0';
      }
      puVar12 = (undefined1 *)operator_new(0x90);
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = (undefined1 *)0x0;
      }
      else {
        *puVar12 = 1;
        puVar13 = (undefined8 *)FUN_1404b03b0();
        *(undefined8 *)(puVar12 + 8) = *puVar13;
        lVar5 = puVar13[1];
        *(longlong *)(puVar12 + 0x10) = lVar5;
        pwVar10 = pwVar11;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
          pwVar10 = local_98;
          iVar20 = local_90;
        }
        *(undefined4 *)(puVar12 + 0x18) = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)(puVar12 + 0x20));
        SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar12 + 0x20),4000);
        pwVar11 = (wchar_t *)0x0;
        *(wchar_t **)(puVar12 + 0x48) = pwVar10;
        *(undefined4 *)(puVar12 + 0x54) = local_8c;
        *(int *)(puVar12 + 0x50) = iVar20;
        *(undefined8 *)(puVar12 + 0x58) = 0;
        *(undefined8 *)(puVar12 + 0x60) = 0;
        *(undefined8 *)(puVar12 + 0x68) = 0;
        *(undefined8 *)(puVar12 + 0x70) = 0;
        *(undefined8 *)(puVar12 + 0x78) = 0;
        local_98 = (wchar_t *)0x0;
        FUN_1415ff1a0(puVar12);
      }
      plVar9 = (longlong *)0x0;
      local_38 = puVar12;
      plVar14 = (longlong *)operator_new(0x18);
      if (plVar14 != (longlong *)0x0) {
        *(undefined4 *)(plVar14 + 1) = 1;
        *plVar14 = (longlong)&PTR_FUN_144cb63d8;
        *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
        plVar14[2] = (longlong)puVar12;
        plVar9 = plVar14;
      }
      local_30 = plVar9;
      SharedPointerInternals::EnableSharedFromThis(&local_38,puVar12,puVar12);
      plVar9 = local_80;
      puVar12 = local_88;
      local_88 = local_38;
      local_80 = local_30;
      local_38 = puVar12;
      local_30 = plVar9;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar9 + 1;
        lVar5 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        pwVar11 = local_98;
        if ((int)lVar5 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar19 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          pwVar11 = local_98;
          if (iVar19 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
            pwVar11 = local_98;
          }
        }
      }
      if (pwVar11 != (wchar_t *)0x0) {
        FMemory::Free(pwVar11);
      }
    }
    pwVar10 = local_48;
    p_Var3 = (LPCRITICAL_SECTION)(local_48 + 0x10);
    BVar7 = TryEnterCriticalSection(p_Var3);
    if (BVar7 == 0) {
      EnterCriticalSection(p_Var3);
    }
    iVar19 = *(int *)(pwVar10 + 0x40);
    LeaveCriticalSection(p_Var3);
    puVar12 = local_58;
    if (iVar19 != 0) {
      p_Var3 = (LPCRITICAL_SECTION)(local_58 + 0x20);
      BVar7 = TryEnterCriticalSection(p_Var3);
      if (BVar7 == 0) {
        EnterCriticalSection(p_Var3);
      }
      iVar19 = *(int *)(puVar12 + 0x80);
      LeaveCriticalSection(p_Var3);
      pwVar10 = local_48;
      if (iVar19 != 0) {
        iVar19 = *piVar1;
        if (*piVar1 <= *piVar4) {
          iVar19 = *piVar4;
        }
        iVar20 = iVar19;
        if (((int)local_a0 == 3) &&
           (iVar20 = *(int *)(local_a8 + 9), *(int *)(local_a8 + 9) <= iVar19)) {
          iVar20 = iVar19;
        }
        p_Var3 = (LPCRITICAL_SECTION)(local_48 + 0x10);
        BVar7 = TryEnterCriticalSection(p_Var3);
        if (BVar7 == 0) {
          EnterCriticalSection(p_Var3);
        }
        iVar19 = *(int *)(pwVar10 + 0x40);
        LeaveCriticalSection(p_Var3);
        puVar12 = local_58;
        if (iVar19 == 2) {
LAB_141600c81:
          uVar18 = 1;
        }
        else {
          p_Var3 = (LPCRITICAL_SECTION)(local_58 + 0x20);
          BVar7 = TryEnterCriticalSection(p_Var3);
          if (BVar7 == 0) {
            EnterCriticalSection(p_Var3);
          }
          iVar19 = *(int *)(puVar12 + 0x80);
          LeaveCriticalSection(p_Var3);
          puVar12 = local_88;
          if (iVar19 == 2) goto LAB_141600c81;
          p_Var3 = (LPCRITICAL_SECTION)(local_88 + 0x20);
          BVar7 = TryEnterCriticalSection(p_Var3);
          if (BVar7 == 0) {
            EnterCriticalSection(p_Var3);
          }
          iVar19 = *(int *)(puVar12 + 0x80);
          LeaveCriticalSection(p_Var3);
          if (iVar19 == 2) goto LAB_141600c81;
          uVar18 = 0;
        }
        puVar13 = (undefined8 *)operator_new(0x40);
        if (puVar13 == (undefined8 *)0x0) {
          puVar13 = (undefined8 *)0x0;
        }
        else {
          *(int *)(puVar13 + 1) = iVar20;
          *puVar13 = &PTR__scalar_deleting_destructor__144cb5f58;
          *(undefined1 *)((longlong)puVar13 + 0xc) = uVar18;
          puVar13[2] = local_48;
          puVar13[3] = local_40;
          if (local_40 != (wchar_t *)0x0) {
            LOCK();
            *(int *)(local_40 + 4) = *(int *)(local_40 + 4) + 1;
            UNLOCK();
          }
          puVar13[4] = local_58;
          puVar13[5] = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_50 + 1) = (int)local_50[1] + 1;
            UNLOCK();
          }
          puVar13[6] = local_88;
          puVar13[7] = local_80;
          if (local_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_80 + 1) = (int)local_80[1] + 1;
            UNLOCK();
          }
        }
        puVar16 = (undefined8 *)0x0;
        puVar15 = (undefined8 *)operator_new(0x18);
        if (puVar15 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar15 + 1) = 1;
          *puVar15 = &PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)puVar15 + 0xc) = 1;
          puVar15[2] = puVar13;
          puVar16 = puVar15;
        }
        *param_1 = puVar13;
        param_1[1] = puVar16;
        SharedPointerInternals::EnableSharedFromThis(param_1,puVar13,puVar13);
        plVar9 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar14 = local_80 + 1;
          lVar5 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar4 = (int *)((longlong)plVar9 + 0xc);
            iVar19 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        plVar9 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar14 = local_50 + 1;
          lVar5 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar4 = (int *)((longlong)plVar9 + 0xc);
            iVar19 = *piVar4;
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        pwVar10 = local_40;
        if (local_40 != (wchar_t *)0x0) {
          LOCK();
          pwVar11 = local_40 + 4;
          iVar19 = *(int *)pwVar11;
          *(int *)pwVar11 = *(int *)pwVar11 + -1;
          UNLOCK();
          if (iVar19 == 1) {
            (*(code *)**(undefined8 **)local_40)(local_40);
            LOCK();
            pwVar11 = pwVar10 + 6;
            iVar19 = *(int *)pwVar11;
            *(int *)pwVar11 = *(int *)pwVar11 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*(longlong *)pwVar10 + 8))(pwVar10,1);
            }
          }
        }
        if ((int)local_a0 != 0) {
          plVar9 = local_a8 + 2;
          iVar19 = (int)local_a0;
          do {
            if (*plVar9 != 0) {
              FMemory::Free();
            }
            plVar9 = plVar9 + 4;
            iVar19 = iVar19 + -1;
          } while (iVar19 != 0);
        }
        goto LAB_141600eff;
      }
    }
    plVar9 = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_80 + 1;
      lVar5 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar4 = (int *)((longlong)plVar9 + 0xc);
        iVar19 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    plVar9 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_50 + 1;
      lVar5 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar4 = (int *)((longlong)plVar9 + 0xc);
        iVar19 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    pwVar10 = local_40;
    if (local_40 != (wchar_t *)0x0) {
      LOCK();
      pwVar11 = local_40 + 4;
      iVar19 = *(int *)pwVar11;
      *(int *)pwVar11 = *(int *)pwVar11 + -1;
      UNLOCK();
      if (iVar19 == 1) {
        (*(code *)**(undefined8 **)local_40)(local_40);
        LOCK();
        pwVar11 = pwVar10 + 6;
        iVar19 = *(int *)pwVar11;
        *(int *)pwVar11 = *(int *)pwVar11 + -1;
        UNLOCK();
        if (iVar19 == 1) {
          (**(code **)(*(longlong *)pwVar10 + 8))(pwVar10,1);
        }
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((int)local_a0 != 0) {
    plVar9 = local_a8 + 2;
    iVar19 = (int)local_a0;
    do {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 4;
      iVar19 = iVar19 + -1;
    } while (iVar19 != 0);
  }
  if (local_a8 == (undefined8 *)0x0) {
    return param_1;
  }
LAB_141600eff:
  FMemory::Free(local_a8);
  return param_1;
}



// FUNCTION 141600f30 Create body=508 status=ok
// SIG undefined Create(void)

undefined8 *
FTextFormatArgumentModifier_HangulPostPositions::Create(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 *local_18;
  undefined8 local_10;
  
  puVar6 = (undefined8 *)0x0;
  local_18 = (undefined8 *)0x0;
  local_10 = 0;
  cVar2 = ITextFormatArgumentModifier::ParseValueArgs(param_2,&local_18,0x2c);
  puVar1 = local_18;
  if ((cVar2 == '\0') || ((int)local_10 != 2)) {
    *param_1 = 0;
    param_1[1] = 0;
    if ((int)local_10 != 0) {
      plVar7 = local_18 + 2;
      iVar8 = (int)local_10;
      do {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    if (puVar1 != (undefined8 *)0x0) {
      FMemory::Free(puVar1);
    }
  }
  else {
    puVar4 = (undefined8 *)operator_new(0x50);
    puVar1 = local_18;
    iVar8 = 2;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      *puVar4 = &PTR__scalar_deleting_destructor__144cb5f78;
      puVar4[1] = *local_18;
      *(undefined4 *)(puVar4 + 2) = *(undefined4 *)(local_18 + 1);
      *(undefined4 *)((longlong)puVar4 + 0x14) = *(undefined4 *)((longlong)local_18 + 0xc);
      puVar4[3] = 0;
      puVar4[3] = local_18[2];
      local_18[2] = 0;
      *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(local_18 + 3);
      *(undefined4 *)((longlong)puVar4 + 0x24) = *(undefined4 *)((longlong)local_18 + 0x1c);
      local_18[3] = 0;
      puVar4[5] = local_18[4];
      *(undefined4 *)(puVar4 + 6) = *(undefined4 *)(local_18 + 5);
      *(undefined4 *)((longlong)puVar4 + 0x34) = *(undefined4 *)((longlong)local_18 + 0x2c);
      puVar4[7] = 0;
      puVar4[7] = local_18[6];
      local_18[6] = 0;
      *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(local_18 + 7);
      *(undefined4 *)((longlong)puVar4 + 0x44) = *(undefined4 *)((longlong)local_18 + 0x3c);
      local_18[7] = 0;
      *(undefined4 *)(puVar4 + 9) = 0;
      if ((((*(int *)(puVar4 + 2) == 2) && (*(int *)(puVar4 + 6) == 1)) &&
          (iVar3 = wcsncmp((wchar_t *)puVar4[1],L"으로",2), iVar3 == 0)) &&
         (iVar3 = wcsncmp((wchar_t *)puVar4[5],L"로",1), iVar3 == 0)) {
        *(undefined4 *)(puVar4 + 9) = 1;
      }
    }
    puVar5 = (undefined8 *)operator_new(0x18);
    if (puVar5 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar5 + 1) = 1;
      *puVar5 = &PTR_FUN_143f3f2e0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
      puVar5[2] = puVar4;
      puVar6 = puVar5;
    }
    *param_1 = puVar4;
    param_1[1] = puVar6;
    SharedPointerInternals::EnableSharedFromThis(param_1,puVar4,puVar4);
    plVar7 = puVar1 + 2;
    do {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    if (puVar1 != (undefined8 *)0x0) {
      FMemory::Free(puVar1);
    }
  }
  return param_1;
}



// FUNCTION 141601130 FUN_141601130 body=1512 status=ok
// SIG undefined FUN_141601130(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141601130(undefined8 *param_1,undefined8 param_2)

{
  LPCRITICAL_SECTION p_Var1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  BOOL BVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  byte bVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  undefined1 auStack_1c8 [32];
  byte local_1a8;
  wchar_t *local_1a0;
  undefined8 local_198;
  undefined1 *local_190;
  longlong *local_188;
  int local_180;
  uint uStack_17c;
  uint *puStack_178;
  undefined4 local_170;
  int iStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  int local_160;
  undefined1 local_15c [4];
  undefined8 *local_158;
  undefined8 local_150;
  int iStack_148;
  uint uStack_144;
  uint *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 uStack_120;
  int iStack_118;
  int iStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  longlong local_100;
  undefined1 **local_f8;
  longlong local_e8;
  undefined8 local_e0;
  uint local_d8 [4];
  uint *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  int local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  iVar18 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_c8 = (uint *)0x0;
  local_c0 = 0;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_158 = param_1;
  cVar5 = ITextFormatArgumentModifier::ParseKeyValueArgs(param_2,&local_e8,0x3d,0x2c);
  if (cVar5 != '\0') {
    bVar16 = 0;
    local_1a8 = 0;
    local_98 = 0;
    local_90 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    if (0 < (int)local_e0 - local_b4) {
      FUN_14089d0c0(&local_98);
    }
    iVar4 = (int)local_c0;
    puStack_178 = local_d8;
    local_180 = 0;
    uStack_17c = 1;
    iStack_16c = 0;
    iStack_168 = 0;
    if ((int)local_c0 != 0) {
      puVar17 = local_d8;
      if (local_c8 != (uint *)0x0) {
        puVar17 = local_c8;
      }
      uVar19 = *puVar17;
      while (uVar19 == 0) {
        iStack_168 = iStack_168 + 0x20;
        if ((int)((int)local_c0 + -1 + ((int)local_c0 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_180) {
          iStack_16c = (int)local_c0;
          local_180 = local_180 + 1;
          goto LAB_1416012ae;
        }
        uVar19 = puVar17[(longlong)local_180 + 1];
        local_180 = local_180 + 1;
      }
      uStack_17c = -uVar19 & uVar19;
      local_160 = 0x1f;
      if (uStack_17c != 0) {
        for (; uStack_17c >> local_160 == 0; local_160 = local_160 + -1) {
        }
      }
      if (uStack_17c == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - local_160;
      }
      iStack_16c = (iStack_168 - iVar6) + 0x1f;
      if ((int)local_c0 < iStack_16c) {
        iStack_16c = (int)local_c0;
      }
    }
LAB_1416012ae:
    local_170 = 0xffffffff;
    uStack_120 = CONCAT44(uStack_17c,local_180);
    local_128 = &local_e8;
    uStack_138 = CONCAT44(iStack_16c,0xffffffff);
    local_130 = CONCAT44(uStack_164,iStack_168);
    _iStack_118 = CONCAT44((int)local_c0,-1 << ((byte)local_c0 & 0x1f));
    iStack_148 = local_180;
    uStack_144 = uStack_17c;
    local_140 = puStack_178;
    uStack_110 = uStack_138;
    uStack_108 = local_130;
    local_150 = local_128;
    while( true ) {
      param_1 = local_158;
      pwVar10 = (wchar_t *)0x0;
      if (((uStack_138._4_4_ == iVar4) && (local_140 == local_d8)) && (local_150 == &local_e8))
      break;
      local_1a0 = (wchar_t *)0x0;
      iVar6 = *(int *)(*local_150 + 0x28 + (longlong)uStack_138._4_4_ * 0x48);
      lVar13 = *local_150 + (longlong)uStack_138._4_4_ * 0x48;
      pwVar14 = *(wchar_t **)(lVar13 + 0x20);
      uVar19 = iVar6 + 1;
      if (iVar6 == 0) {
        uVar19 = 0;
      }
      local_198 = (ulonglong)uVar19;
      if (0 < (int)uVar19) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a0,0);
        pwVar10 = local_1a0;
        uVar19 = (uint)local_198;
        if (0 < (int)(uint)local_198) {
          wcsncpy(local_1a0,pwVar14,(longlong)iVar6);
          pwVar10[iVar6] = L'\0';
        }
      }
      puVar8 = (undefined1 *)operator_new(0x90);
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = (undefined1 *)0x0;
      }
      else {
        *puVar8 = 1;
        puVar9 = (undefined8 *)FUN_1404b03b0();
        *(undefined8 *)(puVar8 + 8) = *puVar9;
        lVar3 = puVar9[1];
        *(longlong *)(puVar8 + 0x10) = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
          pwVar10 = local_1a0;
          uVar19 = (uint)local_198;
        }
        *(undefined4 *)(puVar8 + 0x18) = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)(puVar8 + 0x20));
        SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar8 + 0x20),4000);
        *(wchar_t **)(puVar8 + 0x48) = pwVar10;
        pwVar10 = (wchar_t *)0x0;
        *(uint *)(puVar8 + 0x50) = uVar19;
        local_1a0 = (wchar_t *)0x0;
        *(undefined4 *)(puVar8 + 0x54) = local_198._4_4_;
        *(undefined8 *)(puVar8 + 0x58) = 0;
        *(undefined8 *)(puVar8 + 0x60) = 0;
        *(undefined8 *)(puVar8 + 0x68) = 0;
        *(undefined8 *)(puVar8 + 0x70) = 0;
        *(undefined8 *)(puVar8 + 0x78) = 0;
        local_198 = 0;
        FUN_1415ff1a0(puVar8);
      }
      plVar12 = (longlong *)0x0;
      local_190 = puVar8;
      plVar11 = (longlong *)operator_new(0x18);
      if (plVar11 != (longlong *)0x0) {
        *(undefined4 *)(plVar11 + 1) = 1;
        *plVar11 = (longlong)&PTR_FUN_144cb63d8;
        *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
        plVar11[2] = (longlong)puVar8;
        plVar12 = plVar11;
      }
      local_188 = plVar12;
      SharedPointerInternals::EnableSharedFromThis(&local_190,puVar8,puVar8);
      if (pwVar10 != (wchar_t *)0x0) {
        FMemory::Free(pwVar10);
      }
      puVar8 = local_190;
      p_Var1 = (LPCRITICAL_SECTION)(local_190 + 0x20);
      BVar7 = TryEnterCriticalSection(p_Var1);
      if (BVar7 == 0) {
        EnterCriticalSection(p_Var1);
      }
      iVar6 = *(int *)(puVar8 + 0x80);
      LeaveCriticalSection(p_Var1);
      plVar12 = local_188;
      puVar8 = local_190;
      if (iVar6 == 0) {
        bVar16 = local_1a8;
        if (local_188 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_188 + 1;
          lVar13 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_188)(local_188);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            bVar16 = local_1a8;
            if (iVar6 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
              bVar16 = local_1a8;
            }
          }
        }
      }
      else {
        iVar6 = *(int *)(lVar13 + 0x28);
        if (*(int *)(lVar13 + 0x28) <= iVar18) {
          iVar6 = iVar18;
        }
        p_Var1 = (LPCRITICAL_SECTION)(local_190 + 0x20);
        BVar7 = TryEnterCriticalSection(p_Var1);
        if (BVar7 == 0) {
          EnterCriticalSection(p_Var1);
        }
        iVar18 = *(int *)(puVar8 + 0x80);
        LeaveCriticalSection(p_Var1);
        bVar16 = local_1a8 | iVar18 == 2;
        local_f8 = &local_190;
        local_1a8 = bVar16;
        local_100 = lVar13;
        FUN_1415ecdb0(&local_98,local_15c,&local_100,0);
        plVar12 = local_188;
        iVar18 = iVar6;
        if (local_188 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_188 + 1;
          lVar13 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_188)(local_188);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            iVar6 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
      }
      uStack_138 = CONCAT44(uStack_138._4_4_,(uint)uStack_138 & ~uStack_144);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_148);
    }
    if ((int)local_90 - local_64 == (int)local_e0 - local_b4) {
      lVar13 = operator_new(0xb0);
      pwVar14 = pwVar10;
      if (lVar13 != 0) {
        pwVar14 = (wchar_t *)FUN_1415f1490(lVar13,&local_98,iVar18,bVar16);
      }
      pwVar15 = (wchar_t *)operator_new(0x18);
      if (pwVar15 != (wchar_t *)0x0) {
        pwVar15[4] = L'\x01';
        pwVar15[5] = L'\0';
        *(undefined ***)pwVar15 = &PTR_FUN_143f3f2e0;
        pwVar15[6] = L'\x01';
        pwVar15[7] = L'\0';
        *(wchar_t **)(pwVar15 + 8) = pwVar14;
        pwVar10 = pwVar15;
      }
      *param_1 = pwVar14;
      param_1[1] = pwVar10;
      SharedPointerInternals::EnableSharedFromThis(param_1,pwVar14,pwVar14);
      local_50 = 0;
      if (local_58 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FTextFormatString,FTextFormat>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FTextFormatString,FTextFormat>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_98);
      goto LAB_1416016bc;
    }
    local_50 = 0;
    if (local_58 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FTextFormatString,FTextFormat>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FTextFormatString,FTextFormat>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_98);
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_1416016bc:
  local_a0 = 0;
  if (local_a8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FTextFormatString,FTextFormatString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(&local_e8,0);
  if (local_c8 != (uint *)0x0) {
    FMemory::Free();
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141601720 FUN_141601720 body=1507 status=ok
// SIG undefined FUN_141601720(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141601720(undefined8 *param_1,undefined1 param_2,undefined8 param_3)

{
  LPCRITICAL_SECTION p_Var1;
  int *piVar2;
  wchar_t *_Source;
  longlong lVar3;
  char cVar4;
  int iVar5;
  BOOL BVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  byte bVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 auStack_1d8 [32];
  byte local_1b8;
  byte local_1a8;
  undefined1 local_1a7;
  int local_1a4;
  wchar_t *local_1a0;
  undefined8 local_198;
  undefined1 *local_190;
  longlong *local_188;
  int local_180;
  uint uStack_17c;
  uint *puStack_178;
  undefined4 local_170;
  int iStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  int local_160;
  undefined1 local_15c [4];
  ulonglong local_158;
  undefined8 local_150;
  int iStack_148;
  uint uStack_144;
  uint *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  longlong *local_128;
  undefined8 uStack_120;
  int iStack_118;
  int iStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  longlong local_100;
  undefined1 **local_f8;
  longlong local_e8;
  undefined8 local_e0;
  uint local_d8 [4];
  uint *local_c8;
  ulonglong local_c0;
  undefined4 local_b8;
  int local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  iVar7 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_c8 = (uint *)0x0;
  local_c0 = 0;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_1a7 = param_2;
  cVar4 = ITextFormatArgumentModifier::ParseKeyValueArgs(param_3,&local_e8,0x3d,0x2c);
  if (cVar4 != '\0') {
    bVar16 = 0;
    local_1a4 = 0;
    local_1a8 = 0;
    local_98 = 0;
    local_90 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    if (0 < (int)local_e0 - local_b4) {
      FUN_14089d0c0(&local_98);
    }
    local_180 = 0;
    uStack_17c = 1;
    iStack_16c = 0;
    iStack_168 = 0;
    if ((int)local_c0 != 0) {
      puVar17 = local_d8;
      if (local_c8 != (uint *)0x0) {
        puVar17 = local_c8;
      }
      uVar18 = *puVar17;
      while (uVar18 == 0) {
        iStack_168 = iStack_168 + 0x20;
        if ((int)((int)local_c0 + -1 + ((int)local_c0 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_180) {
          iStack_16c = (int)local_c0;
          local_180 = local_180 + 1;
          goto LAB_14160189f;
        }
        uVar18 = puVar17[(longlong)local_180 + 1];
        local_180 = local_180 + 1;
      }
      uStack_17c = -uVar18 & uVar18;
      local_160 = 0x1f;
      if (uStack_17c != 0) {
        for (; uStack_17c >> local_160 == 0; local_160 = local_160 + -1) {
        }
      }
      if (uStack_17c == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - local_160;
      }
      iStack_16c = (iStack_168 - iVar5) + 0x1f;
      if ((int)local_c0 < iStack_16c) {
        iStack_16c = (int)local_c0;
      }
    }
LAB_14160189f:
    local_170 = 0xffffffff;
    uStack_120 = CONCAT44(uStack_17c,local_180);
    local_128 = &local_e8;
    uStack_138 = CONCAT44(iStack_16c,0xffffffff);
    local_130 = CONCAT44(uStack_164,iStack_168);
    _iStack_118 = CONCAT44((int)local_c0,-1 << ((byte)local_c0 & 0x1f));
    local_158 = local_c0 & 0xffffffff;
    iStack_148 = local_180;
    uStack_144 = uStack_17c;
    puStack_178 = local_d8;
    local_140 = local_d8;
    uStack_110 = uStack_138;
    uStack_108 = local_130;
    local_150 = local_128;
    while( true ) {
      pwVar10 = (wchar_t *)0x0;
      if (((uStack_138._4_4_ == (int)local_158) && (local_140 == local_d8)) &&
         (local_150 == &local_e8)) goto LAB_141601bc6;
      local_1a0 = (wchar_t *)0x0;
      iVar7 = *(int *)(*local_150 + 0x28 + (longlong)uStack_138._4_4_ * 0x48);
      lVar13 = *local_150 + (longlong)uStack_138._4_4_ * 0x48;
      _Source = *(wchar_t **)(lVar13 + 0x20);
      uVar18 = iVar7 + 1;
      if (iVar7 == 0) {
        uVar18 = 0;
      }
      local_198 = (ulonglong)uVar18;
      if (0 < (int)uVar18) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a0,0);
        pwVar10 = local_1a0;
        uVar18 = (uint)local_198;
        if (0 < (int)(uint)local_198) {
          wcsncpy(local_1a0,_Source,(longlong)iVar7);
          pwVar10[iVar7] = L'\0';
        }
      }
      puVar8 = (undefined1 *)operator_new(0x90);
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = (undefined1 *)0x0;
      }
      else {
        *puVar8 = 1;
        puVar9 = (undefined8 *)FUN_1404b03b0();
        *(undefined8 *)(puVar8 + 8) = *puVar9;
        lVar3 = puVar9[1];
        *(longlong *)(puVar8 + 0x10) = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
          pwVar10 = local_1a0;
          uVar18 = (uint)local_198;
        }
        *(undefined4 *)(puVar8 + 0x18) = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)(puVar8 + 0x20));
        SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar8 + 0x20),4000);
        *(wchar_t **)(puVar8 + 0x48) = pwVar10;
        pwVar10 = (wchar_t *)0x0;
        *(uint *)(puVar8 + 0x50) = uVar18;
        local_1a0 = (wchar_t *)0x0;
        *(undefined4 *)(puVar8 + 0x54) = local_198._4_4_;
        *(undefined8 *)(puVar8 + 0x58) = 0;
        *(undefined8 *)(puVar8 + 0x60) = 0;
        *(undefined8 *)(puVar8 + 0x68) = 0;
        *(undefined8 *)(puVar8 + 0x70) = 0;
        *(undefined8 *)(puVar8 + 0x78) = 0;
        local_198 = 0;
        FUN_1415ff1a0(puVar8);
      }
      plVar12 = (longlong *)0x0;
      local_190 = puVar8;
      plVar11 = (longlong *)operator_new(0x18);
      if (plVar11 != (longlong *)0x0) {
        *(undefined4 *)(plVar11 + 1) = 1;
        *plVar11 = (longlong)&PTR_FUN_144cb63d8;
        *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
        plVar11[2] = (longlong)puVar8;
        plVar12 = plVar11;
      }
      local_188 = plVar12;
      SharedPointerInternals::EnableSharedFromThis(&local_190,puVar8,puVar8);
      if (pwVar10 != (wchar_t *)0x0) {
        FMemory::Free(pwVar10);
      }
      puVar8 = local_190;
      p_Var1 = (LPCRITICAL_SECTION)(local_190 + 0x20);
      BVar6 = TryEnterCriticalSection(p_Var1);
      if (BVar6 == 0) {
        EnterCriticalSection(p_Var1);
      }
      iVar5 = *(int *)(puVar8 + 0x80);
      LeaveCriticalSection(p_Var1);
      plVar12 = local_188;
      puVar8 = local_190;
      iVar7 = local_1a4;
      if (iVar5 == 0) break;
      iVar7 = *(int *)(lVar13 + 0x28);
      if (*(int *)(lVar13 + 0x28) <= local_1a4) {
        iVar7 = local_1a4;
      }
      p_Var1 = (LPCRITICAL_SECTION)(local_190 + 0x20);
      local_1a4 = iVar7;
      BVar6 = TryEnterCriticalSection(p_Var1);
      if (BVar6 == 0) {
        EnterCriticalSection(p_Var1);
      }
      iVar5 = *(int *)(puVar8 + 0x80);
      LeaveCriticalSection(p_Var1);
      bVar16 = local_1a8 | iVar5 == 2;
      local_f8 = &local_190;
      local_1a8 = bVar16;
      local_100 = lVar13;
      FUN_1415ecdb0(&local_98,local_15c,&local_100,0);
      plVar12 = local_188;
      if (local_188 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_188 + 1;
        lVar13 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*local_188)(local_188);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      uStack_138 = CONCAT44(uStack_138._4_4_,(uint)uStack_138 & ~uStack_144);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_148);
    }
    bVar16 = local_1a8;
    if (local_188 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_188 + 1;
      lVar13 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_188)(local_188);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        bVar16 = local_1a8;
        iVar7 = local_1a4;
        if (iVar5 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
          bVar16 = local_1a8;
          iVar7 = local_1a4;
        }
      }
    }
LAB_141601bc6:
    puVar9 = (undefined8 *)0x0;
    if ((int)local_90 - local_64 == (int)local_e0 - local_b4) {
      lVar13 = operator_new(0x78);
      puVar14 = puVar9;
      if (lVar13 != 0) {
        local_1b8 = bVar16;
        puVar14 = (undefined8 *)FUN_1415f2240(lVar13,local_1a7,&local_98,iVar7);
      }
      puVar15 = (undefined8 *)operator_new(0x18);
      if (puVar15 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar15 + 1) = 1;
        *puVar15 = &PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)puVar15 + 0xc) = 1;
        puVar15[2] = puVar14;
        puVar9 = puVar15;
      }
      *param_1 = puVar14;
      param_1[1] = puVar9;
      SharedPointerInternals::EnableSharedFromThis(param_1,puVar14,puVar14);
      local_50 = 0;
      if (local_58 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FTextFormatString,FTextFormat>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FTextFormatString,FTextFormat>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_98);
      goto LAB_141601ca6;
    }
    local_50 = 0;
    if (local_58 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FTextFormatString,FTextFormat>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FTextFormatString,FTextFormat>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_98);
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_141601ca6:
  local_a0 = 0;
  if (local_a8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FTextFormatString,FTextFormatString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(&local_e8,0);
  if (local_c8 != (uint *)0x0) {
    FMemory::Free();
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141601d10 FUN_141601d10 body=211 status=ok
// SIG undefined FUN_141601d10(void)

undefined8 * FUN_141601d10(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar3 = operator_new(0x18);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1415d8080();
    uVar4 = FUN_1415d4f00(uVar4,local_18);
    uVar4 = FICUBreakIterator::FICUBreakIterator(lVar3,uVar4);
  }
  puVar5 = (undefined8 *)operator_new(0x18);
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar5 + 1) = 1;
    *puVar5 = &PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
    puVar5[2] = uVar4;
  }
  *param_1 = uVar4;
  param_1[1] = puVar5;
  SharedPointerInternals::EnableSharedFromThis(param_1,uVar4,uVar4);
  if ((lVar3 != 0) && (local_10 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_10 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (local_10 != (longlong *)0x0)) {
      (**(code **)(*local_10 + 8))(local_10,1);
    }
  }
  return param_1;
}



// FUNCTION 141601df0 FUN_141601df0 body=141 status=ok
// SIG undefined FUN_141601df0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141601df0(void)

{
  ushort uStack_26;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b5610) {
    _Init_thread_header(&DAT_1468b5610);
    if (DAT_1468b5610 == -1) {
      _DAT_1468b55f8 = (ulonglong)uStack_26 << 0x10;
      uRam00000001468b5600 = 0x14400000001;
      _DAT_1468b5608 = 0x300000000;
      _Init_thread_footer(&DAT_1468b5610);
    }
  }
  return &DAT_1468b55f8;
}



// FUNCTION 141601e80 DefaultNoGrouping body=8 status=ok
// SIG undefined DefaultNoGrouping(void)

undefined * FNumberParsingOptions::DefaultNoGrouping(void)

{
  return &DAT_1468b5614;
}



// FUNCTION 141601e90 FUN_141601e90 body=57 status=ok
// SIG undefined FUN_141601e90(void)

void FUN_141601e90(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = &PTR__scalar_deleting_destructor__144cb6058;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  TTextData<FTextHistory_ArgumentDataFormat>::~TTextData<FTextHistory_ArgumentDataFormat>
            ((undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 141601ed0 DestroyObject body=63 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TIntrusiveReferenceController<TGeneratedTextData<FTextHistory_AsCurrency>_>::DestroyObject
               (longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = &PTR__scalar_deleting_destructor__144cb5ad8;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb8));
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  TTextData<FTextHistory_AsCurrency>::~TTextData<FTextHistory_AsCurrency>
            ((undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 141601f10 DestroyObject body=57 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::TIntrusiveReferenceController<TGeneratedTextData<FTextHistory_AsDate>_>
     ::DestroyObject(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = &PTR__scalar_deleting_destructor__144cb5b78;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  TTextData<FTextHistory_AsDate>::~TTextData<FTextHistory_AsDate>((undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 141601f50 FUN_141601f50 body=63 status=ok
// SIG undefined FUN_141601f50(void)

void FUN_141601f50(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = &PTR__scalar_deleting_destructor__144cb61f8;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  TTextData<FTextHistory_AsNumber>::~TTextData<FTextHistory_AsNumber>
            ((undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 141601f90 FUN_141601f90 body=63 status=ok
// SIG undefined FUN_141601f90(void)

void FUN_141601f90(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = &PTR__scalar_deleting_destructor__144cb5fb8;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  TTextData<FTextHistory_NamedFormat>::~TTextData<FTextHistory_NamedFormat>
            ((undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 141601fd0 FUN_141601fd0 body=57 status=ok
// SIG undefined FUN_141601fd0(void)

void FUN_141601fd0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = &PTR__scalar_deleting_destructor__144cb6008;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  TTextData<FTextHistory_OrderedFormat>::~TTextData<FTextHistory_OrderedFormat>
            ((undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 141602010 FUN_141602010 body=57 status=ok
// SIG undefined FUN_141602010(void)

void FUN_141602010(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = &PTR__scalar_deleting_destructor__144cb5a38;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  TTextData<FTextHistory_Transform>::~TTextData<FTextHistory_Transform>
            ((undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 1416020e0 FUN_1416020e0 body=19 status=ok
// SIG undefined FUN_1416020e0(void)

void FUN_1416020e0(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR__scalar_deleting_destructor__144cb58f8;
  TTextData<FTextHistory_Base>::~TTextData<FTextHistory_Base>();
  return;
}



// FUNCTION 141602170 FUN_141602170 body=9 status=ok
// SIG undefined FUN_141602170(void)

void FUN_141602170(longlong param_1)

{
  FStringTable::~FStringTable(param_1 + 0x10);
  return;
}



// FUNCTION 141602190 DestroyObject body=44 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::TIntrusiveReferenceController<FTextLocalizationResource>::DestroyObject
               (longlong param_1)

{
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x10);
  return;
}



// FUNCTION 1416021c0 FUN_1416021c0 body=97 status=ok
// SIG undefined FUN_1416021c0(void)

void FUN_1416021c0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    *(undefined4 *)(plVar1 + 9) = 0;
    if (plVar1[8] != 0) {
      FMemory::Free();
    }
    FUN_1415d5b20(plVar1,0);
    if (plVar1[4] != 0) {
      FMemory::Free();
    }
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar1,0x50);
    return;
  }
  return;
}



// FUNCTION 141602230 FUN_141602230 body=20 status=ok
// SIG undefined FUN_141602230(void)

void FUN_141602230(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FTextFormatData::_scalar_deleting_destructor_(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 141602250 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FTextCache::FCacheKey,FText>,TDefaultMapHashableKeyFuncs<FTextCache::FCacheKey,FText,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FTextCache::FCacheKey,FText>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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



// FUNCTION 1416022d0 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<TSharedPtr<FString,1>,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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



// FUNCTION 141602350 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<TSharedRef<FString,1>,unsigned_short>,TDefaultMapHashableKeyFuncs<TSharedRef<FString,1>,unsigned_short,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<TSharedRef<FString,1>,unsigned_short>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
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



// FUNCTION 1416023d0 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FLocKeyMapFuncs<TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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



// FUNCTION 141602450 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<FString,TSharedPtr<FStringTableEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FStringTableEntry,1>_>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FStringTableEntry,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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



// FUNCTION 1416024d0 Empty body=396 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FTextCache::FCacheKey,FText>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar3) goto LAB_1416025a1;
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
LAB_1416025a1:
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
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FTextCache::FCacheKey,FText>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FTextCache::FCacheKey,FText>
                ((longlong)iStack_1c * 0x58 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(param_1,param_2);
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



// FUNCTION 141602660 Empty body=481 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FName,TMap<FString,FString,FDefaultSetAllocator,FLocKeyMapFuncs<FString>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_141602731;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_141602731:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      lVar5 = (longlong)iStack_2c * 0x60 + *param_1;
      *(undefined4 *)(lVar5 + 0x50) = 0;
      if (*(longlong *)(lVar5 + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(lVar5 + 8,0);
      if (*(longlong *)(lVar5 + 0x28) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 8) != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141602850 Empty body=451 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<void_*,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_141602921;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_141602921:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      lVar5 = (longlong)iStack_2c * 0x60 + *param_1;
      *(undefined4 *)(lVar5 + 0x50) = 0;
      if (*(longlong *)(lVar5 + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar5 + 8);
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141602a20 Empty body=446 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
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
  
  iVar3 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar3 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar5 = *puVar8;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar5 == 0) {
      lVar6 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar7 = local_68 + 1;
      bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar7;
      if (bVar4) goto LAB_141602af1;
      uVar5 = puVar8[lVar6 + 1];
    }
    uStack_64 = -uVar5 & uVar5;
    iVar7 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_54 = (iStack_50 - iVar7) + 0x1f;
    if (iVar3 < iStack_54) {
LAB_141602af1:
      iStack_54 = iVar3;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar3) {
    do {
      plVar2 = (longlong *)(*param_1 + (longlong)iStack_2c * 0x28);
      TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>::
      ~TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>(plVar2 + 2);
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar5 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar5) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141602be0 Empty body=187 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong param_1,int param_2)

{
  uint uVar1;
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
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>
      ::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>
                ((longlong)local_1c * 0x68 + *local_38);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar1 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar1) {
    *(uint *)(param_1 + 0x2c) = uVar1;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  return;
}



// FUNCTION 141602ca0 Empty body=400 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FStringTableEntry,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar3) goto LAB_141602d71;
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
LAB_141602d71:
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
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
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



// FUNCTION 141602e30 Empty body=453 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FTextFormatString,FTextFormatString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint *puVar8;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar4 = *puVar8;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar6 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar7 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar7;
      if (bVar3) goto LAB_141602f01;
      uVar4 = puVar8[lVar6 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_54 = (iStack_50 - iVar7) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_141602f01:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      lVar5 = (longlong)iStack_2c;
      lVar6 = *param_1;
      if (*(longlong *)(lVar6 + 0x30 + lVar5 * 0x48) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar6 + lVar5 * 0x48 + 0x10) != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141603000 FUN_141603000 body=485 status=ok
// SIG undefined FUN_141603000(void)

void FUN_141603000(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint *puVar8;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar4 = *puVar8;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar7 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar7;
      if (bVar3) goto LAB_1416030d1;
      uVar4 = puVar8[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_54 = (iStack_50 - iVar7) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_1416030d1:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      lVar5 = (longlong)iStack_2c * 0x80 + *param_1;
      if (*(int *)(lVar5 + 0x60) != 0) {
        plVar6 = *(longlong **)(lVar5 + 0x50);
        if (*(longlong **)(lVar5 + 0x50) == (longlong *)0x0) {
          plVar6 = (longlong *)(lVar5 + 0x30);
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6,0);
        }
      }
      if (*(longlong *)(lVar5 + 0x50) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 0x10) != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1416031f0 Empty body=495 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_1416032c1;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_1416032c1:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      lVar5 = (longlong)iStack_2c * 0xb0 + *param_1;
      *(undefined4 *)(lVar5 + 0xa0) = 0;
      if (*(longlong *)(lVar5 + 0x98) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar5 + 0x58);
      *(undefined4 *)(lVar5 + 0x50) = 0;
      if (*(longlong *)(lVar5 + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,FName>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar5 + 8);
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FTTLRaderInfo,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1416033e0 FUN_1416033e0 body=609 status=ok
// SIG undefined FUN_1416033e0(void)

longlong * FUN_1416033e0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined2 *puVar13;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong *plStack_30;
  
  puVar13 = &DAT_143f3eda8;
  lVar3 = *param_1;
  lVar12 = 0;
  iVar4 = 0;
  uVar11 = (longlong)(int)param_1[1];
  if ((int)param_1[1] != 0) {
    do {
      uVar10 = uVar11 >> 1;
      lVar6 = (uVar10 + lVar12) * 0x20;
      if (*(int *)(param_3 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*param_3;
      }
      if (*(int *)(lVar6 + 8 + lVar3) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = *(undefined2 **)(lVar6 + lVar3);
      }
      iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar9);
      if (iVar4 < 0) {
        lVar12 = (ulonglong)((uint)uVar11 & 1) + uVar10 + lVar12;
      }
      uVar11 = uVar10;
    } while (uVar10 != 0);
    iVar4 = (int)param_1[1];
  }
  uVar11 = (ulonglong)(int)lVar12;
  if (uVar11 < (ulonglong)(longlong)iVar4) {
    puVar5 = (undefined8 *)(uVar11 * 0x20 + *param_1);
    if (*(int *)(puVar5 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar5;
    }
    if (*(int *)(param_3 + 1) != 0) {
      puVar13 = (undefined2 *)*param_3;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13,puVar9);
    if (((iVar4 < 0) || ((int)lVar12 == -1)) ||
       (plVar8 = (longlong *)(*param_1 + 0x10 + uVar11 * 0x20), plVar8 == (longlong *)0x0))
    goto LAB_1416034e6;
    local_58 = (longlong *)*plVar8;
    local_50 = (longlong *)plVar8[1];
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    if (local_58 != (longlong *)0x0) goto LAB_1416035db;
    local_58 = (longlong *)0x0;
  }
  else {
LAB_1416034e6:
    local_50 = (longlong *)0x0;
  }
  plStack_30 = (longlong *)FUN_1415ef7f0();
  local_38 = plStack_30 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_38,local_38,local_38);
  plStack_40 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  local_58 = local_38;
  local_48 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_50,&plStack_40);
  plVar8 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  plVar8 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  FUN_1415e9be0(param_1,param_3,&local_58);
LAB_1416035db:
  plVar8 = local_50;
  *param_2 = (longlong)local_58;
  param_2[1] = (longlong)local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = local_50 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 141603650 EnumerateMetaData body=653 status=ok
// SIG undefined EnumerateMetaData(void)

void FStringTable::EnumerateMetaData(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  uint *puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar2;
  uint uVar3;
  char cVar4;
  BOOL BVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint *puVar13;
  undefined8 local_res8;
  uint local_98;
  uint uStack_94;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  uint uStack_70;
  uint uStack_6c;
  uint *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x148);
  BVar5 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar5 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FLocKeyMapFuncs<TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FDefaultSetAllocator>
  ::FindId(param_1 + 0xf8,&local_res8,param_2);
  plVar8 = (longlong *)0x0;
  plVar7 = plVar8;
  if ((int)local_res8 != -1) {
    plVar7 = (longlong *)((longlong)(int)local_res8 * 0x68 + *(longlong *)(param_1 + 0xf8));
  }
  plVar10 = plVar7 + 2;
  if (plVar7 == (longlong *)0x0) {
    plVar10 = plVar8;
  }
  if (plVar10 != (longlong *)0x0) {
    uVar2 = *(uint *)(plVar10 + 5);
    puVar1 = (uint *)(plVar10 + 2);
    local_98 = 0;
    uStack_94 = 1;
    uStack_84 = 0;
    uStack_80 = 0;
    if (uVar2 != 0) {
      puVar13 = (uint *)plVar10[4];
      if ((uint *)plVar10[4] == (uint *)0x0) {
        puVar13 = puVar1;
      }
      uVar3 = *puVar13;
      plVar7 = plVar8;
      while (uVar3 == 0) {
        iVar6 = (int)plVar8;
        uStack_80 = (int)plVar7 + 0x20;
        plVar7 = (longlong *)(ulonglong)uStack_80;
        local_98 = iVar6 + 1;
        plVar8 = (longlong *)(ulonglong)local_98;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_14160378d;
        uVar3 = puVar13[(longlong)iVar6 + 1];
      }
      uStack_94 = -uVar3 & uVar3;
      iVar6 = 0x1f;
      if (uStack_94 != 0) {
        for (; uStack_94 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uStack_94 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_84 = (uStack_80 - iVar6) + 0x1f;
      if ((int)uVar2 < (int)uStack_84) {
LAB_14160378d:
        uStack_84 = uVar2;
      }
    }
    uVar3 = *(uint *)(plVar10 + 5);
    uStack_60 = CONCAT44(uStack_84,0xffffffff);
    local_58 = CONCAT44(uStack_7c,uStack_80);
    uStack_48 = CONCAT44(uStack_94,local_98);
    uVar12 = uVar3 & 0xffffffe0;
    uStack_70 = local_98;
    uStack_6c = uStack_94;
    local_68 = puVar1;
    local_50 = plVar10;
    puStack_40 = puVar1;
    uStack_38 = uStack_60;
    uStack_30 = local_58;
    uStack_84 = uVar3;
    if (uVar3 != uVar2) {
      puVar13 = (uint *)plVar10[4];
      if ((uint *)plVar10[4] == (uint *)0x0) {
        puVar13 = puVar1;
      }
      uVar9 = puVar13[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
      iVar6 = (int)uVar3 >> 5;
      while (uVar9 == 0) {
        uVar12 = uVar12 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_141603853;
        uVar9 = puVar13[(longlong)iVar6 + 1];
        iVar6 = iVar6 + 1;
      }
      uVar9 = -uVar9 & uVar9;
      iVar6 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uVar9 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_84 = (uVar12 - iVar6) + 0x1f;
      if ((int)uVar2 < (int)uStack_84) {
LAB_141603853:
        uStack_84 = uVar2;
      }
    }
    while( true ) {
      if ((uStack_60._4_4_ == uStack_84) && (local_68 == puVar1)) break;
      puVar11 = (undefined8 *)((longlong)(int)uStack_60._4_4_ * 0x20 + *plVar10);
      local_res8 = *puVar11;
      cVar4 = (*(code *)*param_3)(param_3[1],&local_res8,puVar11 + 1);
      if (cVar4 == '\0') break;
      uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_6c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001416038d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1416038e0 EnumerateSourceStrings body=579 status=ok
// SIG undefined EnumerateSourceStrings(void)

void FStringTable::EnumerateSourceStrings(longlong param_1,undefined8 *param_2)

{
  uint *puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  BOOL BVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  longlong *plVar12;
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
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xd0);
  BVar6 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar6 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uStack_94 = 1;
  plVar12 = (longlong *)(param_1 + 0x30);
  uVar2 = *(uint *)(param_1 + 0x58);
  puVar1 = (uint *)(param_1 + 0x40);
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar2 != 0) {
    puVar11 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar3 = *puVar11;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar3 == 0) {
      lVar9 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar7 = local_98 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar7;
      if (bVar4) goto LAB_1416039dd;
      uVar3 = puVar11[lVar9 + 1];
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
LAB_1416039dd:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x58);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar10 = uVar3 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = plVar12;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar3;
  if (uVar3 != uVar2) {
    puVar11 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar8 = puVar11[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar7 = (int)uVar3 >> 5;
    while (uVar8 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_141603aa4;
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
    uStack_84 = (uVar10 - iVar7) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_141603aa4:
      uStack_84 = uVar2;
    }
  }
  while (((uStack_5c != uStack_84 || (local_68 != puVar1)) &&
         (cVar5 = (*(code *)*param_2)(param_2[1],*plVar12 + (longlong)(int)uStack_5c * 0x28,
                                      *(longlong *)
                                       (*plVar12 + 0x10 + (longlong)(int)uStack_5c * 0x28) + 0x10),
         cVar5 != '\0'))) {
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
                    /* WARNING: Could not recover jumptable at 0x000141603b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 141603b30 EnumerateStringTables body=754 status=ok
// SIG undefined EnumerateStringTables(void)

void FStringTableRegistry::EnumerateStringTables(longlong *param_1,undefined8 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  BOOL BVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint *puVar13;
  int local_c8;
  uint uStack_c4;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  uint uStack_94;
  undefined8 local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  uint uStack_64;
  uint *local_60;
  uint uStack_58;
  uint uStack_54;
  undefined8 local_50;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 10);
  BVar8 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar8 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uVar4 = *(uint *)(param_1 + 5);
  local_60 = (uint *)(param_1 + 2);
  uStack_c4 = 1;
  local_c8 = 0;
  uStack_b4 = 0;
  iStack_b0 = 0;
  if (uVar4 != 0) {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = local_60;
    }
    uVar12 = *puVar13;
    iStack_b0 = 0;
    local_c8 = 0;
    while (uVar12 == 0) {
      lVar11 = (longlong)local_c8;
      iStack_b0 = iStack_b0 + 0x20;
      iVar9 = local_c8 + 1;
      bVar6 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_c8;
      local_c8 = iVar9;
      if (bVar6) goto LAB_141603c1f;
      uVar12 = puVar13[lVar11 + 1];
    }
    uStack_c4 = -uVar12 & uVar12;
    iVar9 = 0x1f;
    if (uStack_c4 != 0) {
      for (; uStack_c4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_c4 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_b4 = (iStack_b0 - iVar9) + 0x1f;
    if ((int)uVar4 < (int)uStack_b4) {
LAB_141603c1f:
      uStack_b4 = uVar4;
    }
  }
  uStack_94 = *(uint *)(param_1 + 5);
  uStack_58 = 0xffffffff;
  uStack_54 = uStack_b4;
  local_50 = CONCAT44(uStack_ac,iStack_b0);
  local_a8 = SUB84(param_1,0);
  uStack_a4 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar12 = uStack_94 & 0xffffffe0;
  local_70 = local_a8;
  uStack_6c = uStack_a4;
  iStack_68 = local_c8;
  uStack_64 = uStack_c4;
  if (uStack_94 != uVar4) {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = local_60;
    }
    uVar10 = puVar13[(int)uStack_94 >> 5] & -1 << ((byte)uStack_94 & 0x1f);
    iVar9 = (int)uStack_94 >> 5;
    while (uVar10 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_141603cfd;
      uVar10 = puVar13[(longlong)iVar9 + 1];
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
    uStack_94 = (uVar12 - iVar9) + 0x1f;
    if ((int)uVar4 < (int)uStack_94) {
LAB_141603cfd:
      uStack_94 = uVar4;
    }
  }
  while( true ) {
    if (((uStack_54 == uStack_94) && (local_60 == (uint *)(param_1 + 2))) &&
       ((longlong *)CONCAT44(uStack_6c,local_70) == param_1)) break;
    lVar11 = (longlong)(int)uStack_54 * 0x20 + *(longlong *)CONCAT44(uStack_6c,local_70);
    plVar5 = *(longlong **)(lVar11 + 0x10);
    local_80 = *(undefined8 *)(lVar11 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_78 = plVar5;
    cVar7 = (*(code *)*param_2)(param_2[1],lVar11,&local_80);
    plVar3 = local_78;
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_78 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
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
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    if (cVar7 == '\0') break;
    uStack_58 = uStack_58 & ~uStack_64;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_68);
  }
                    /* WARNING: Could not recover jumptable at 0x000141603e1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 141603e30 FUN_141603e30 body=450 status=ok
// SIG undefined FUN_141603e30(void)

longlong FUN_141603e30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 *local_38;
  int local_30;
  undefined4 local_2c;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10)) {
    return (ulonglong)(uint3)((uint)*(int *)(param_2 + 0x10) >> 8) << 8;
  }
  lVar11 = *(longlong *)(param_1 + 8);
  iVar10 = 0;
  iVar9 = *(int *)(param_1 + 0x10);
  local_48 = (undefined8 *)0x0;
  local_40 = iVar9;
  if (iVar9 == 0) {
    local_3c = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_48,iVar9,0);
    lVar11 = lVar11 - (longlong)local_48;
    puVar8 = local_48;
    do {
      *puVar8 = *(undefined8 *)(lVar11 + (longlong)puVar8);
      lVar1 = *(longlong *)(lVar11 + 8 + (longlong)puVar8);
      puVar8[1] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      puVar8 = puVar8 + 2;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar9 = *(int *)(param_2 + 0x10);
  lVar11 = *(longlong *)(param_2 + 8);
  local_38 = (undefined8 *)0x0;
  local_30 = iVar9;
  if (iVar9 == 0) {
    local_2c = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_38,iVar9,0);
    lVar11 = lVar11 - (longlong)local_38;
    puVar8 = local_38;
    do {
      *puVar8 = *(undefined8 *)(lVar11 + (longlong)puVar8);
      lVar1 = *(longlong *)(lVar11 + 8 + (longlong)puVar8);
      puVar8[1] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      puVar8 = puVar8 + 2;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar6 = local_30;
  puVar4 = local_38;
  iVar9 = local_40;
  puVar8 = local_48;
  FUN_1415edd30(local_48,(longlong)local_40,local_res8[0],local_res8);
  FUN_1415edd30(puVar4,(longlong)iVar6,local_res8[0],local_res10);
  if (0 < iVar9) {
    lVar11 = (longlong)puVar4 - (longlong)puVar8;
    do {
      plVar2 = *(longlong **)(lVar11 + (longlong)puVar8);
      plVar3 = (longlong *)*puVar8;
      iVar6 = (**(code **)(*plVar2 + 0x38))(plVar2);
      iVar7 = (**(code **)(*plVar3 + 0x38))(plVar3);
      if ((iVar7 != iVar6) || (cVar5 = (**(code **)(*plVar3 + 0x40))(plVar3,plVar2), cVar5 == '\0'))
      {
        lVar11 = 0;
        goto LAB_141603fac;
      }
      iVar10 = iVar10 + 1;
      puVar8 = puVar8 + 2;
    } while (iVar10 < iVar9);
  }
  lVar11 = 1;
LAB_141603fac:
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_38);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_48);
  return lVar11;
}



// FUNCTION 141604050 EqualTo body=54 status=ok
// SIG undefined EqualTo(void)

bool FLocMetadataValueString::EqualTo(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  puVar2 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 0x10) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = *(undefined2 **)(param_2 + 8);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = *(undefined2 **)(param_1 + 8);
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
  return iVar1 == 0;
}



// FUNCTION 141604090 ErrorMessage body=231 status=ok
// SIG undefined ErrorMessage(void)

void FLocMetadataValue::ErrorMessage(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  longlong local_18 [2];
  
  puVar2 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x50))(param_1,local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar1;
  }
  LowLevelFatalErrorHandler
            ("Unknown",0xe,L"LocMetadata Value of type \'%s\' used as a \'%s\'.",puVar4,puVar3);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x50))(param_1,local_18);
  if (*(int *)(puVar1 + 1) != 0) {
    puVar2 = (undefined2 *)*puVar1;
  }
  FDebug::AssertFailed
            (&DAT_144cb1837,"Unknown",0xe,L"LocMetadata Value of type \'%s\' used as a \'%s\'.",
             puVar2,puVar3);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1416041b0 Evaluate body=226 status=ok
// SIG undefined Evaluate(void)

void FTextFormatArgumentModifier_GenderForm::Evaluate
               (longlong param_1,int *param_2,undefined8 param_3,longlong *param_4)

{
  void *_Dst;
  char cVar1;
  int iVar2;
  void *_Src;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong local_18 [2];
  
  if (*param_2 == 5) {
    cVar1 = (char)param_2[2];
    if (cVar1 == '\0') {
      param_1 = param_1 + 0x10;
    }
    else if (cVar1 == '\x01') {
      param_1 = param_1 + 0x20;
    }
    else {
      if (cVar1 != '\x02') {
        return;
      }
      param_1 = param_1 + 0x30;
    }
    puVar4 = (undefined8 *)FTextFormatter::Format(local_18,param_1);
    _Src = (void *)*puVar4;
    iVar5 = *(int *)(puVar4 + 1) + -1;
    if (*(int *)(puVar4 + 1) == 0) {
      iVar5 = 0;
    }
    if (iVar5 != 0) {
      iVar2 = (int)param_4[1];
      iVar3 = (uint)(iVar2 == 0) + iVar5 + iVar2;
      *(int *)(param_4 + 1) = iVar3;
      if (*(int *)((longlong)param_4 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar2);
      }
      _Dst = (void *)(*param_4 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar5 * 2);
      *(undefined2 *)((longlong)iVar5 * 2 + (longlong)_Dst) = 0;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1416042a0 Evaluate body=347 status=ok
// SIG undefined Evaluate(void)

void FTextFormatArgumentModifier_HangulPostPositions::Evaluate
               (longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  void *_Dst;
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  void *_Src;
  
  lVar3 = param_4[1];
  FFormatArgumentValue::ToFormattedString
            (param_2,*(undefined1 *)(param_3 + 0x14),*(undefined1 *)(param_3 + 0x15));
  iVar2 = (int)param_4[1];
  iVar5 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar5 = 0;
  }
  iVar4 = (int)lVar3 + -1;
  if ((int)lVar3 == 0) {
    iVar4 = 0;
  }
  if (iVar4 != iVar5) {
    uVar1 = *(ushort *)(*param_4 + -2 + (longlong)iVar5 * 2);
    if (((ushort)(uVar1 + 0x5400) < 0x2ba4) || ((ushort)(uVar1 - 0x30) < 10)) {
      iVar5 = uVar1 - 0xac00;
      if (((iVar5 == (iVar5 / 0x1c) * 0x1c) &&
          ((0x38 < uVar1 || ((0x1cb000000000000U >> ((ulonglong)uVar1 & 0x3f) & 1) == 0)))) ||
         ((*(int *)(param_1 + 0x48) == 1 &&
          (((iVar5 % 0x1c == 8 || (uVar1 == 0x31)) || ((ushort)(uVar1 - 0x37) < 2)))))) {
        iVar5 = *(int *)(param_1 + 0x30);
        _Src = *(void **)(param_1 + 0x28);
      }
      else {
        iVar5 = *(int *)(param_1 + 0x10);
        _Src = *(void **)(param_1 + 8);
      }
      if (iVar5 != 0) {
        iVar4 = (uint)(iVar2 == 0) + iVar2 + iVar5;
        *(int *)(param_4 + 1) = iVar4;
        if (*(int *)((longlong)param_4 + 0xc) < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar2);
        }
        _Dst = (void *)(*param_4 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar5 * 2);
        *(undefined2 *)((longlong)iVar5 * 2 + (longlong)_Dst) = 0;
      }
    }
  }
  return;
}



// FUNCTION 141604400 FUN_141604400 body=1276 status=ok
// SIG undefined FUN_141604400(void)

void FUN_141604400(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  LPCRITICAL_SECTION p_Var1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  BOOL BVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined2 *puVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  undefined2 *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined8 local_40;
  
  lVar12 = *(longlong *)(param_1 + 0x40);
  puVar13 = (undefined8 *)(param_1 + 0x40);
  p_Var1 = (LPCRITICAL_SECTION)(lVar12 + 0x20);
  BVar8 = TryEnterCriticalSection(p_Var1);
  if (BVar8 == 0) {
    EnterCriticalSection(p_Var1);
  }
  iVar9 = *(int *)(lVar12 + 0x80);
  LeaveCriticalSection(p_Var1);
  if (iVar9 == 0) {
LAB_141604495:
    local_58 = (undefined2 *)0x0;
    local_50 = 0;
    FConfigCacheIni::GetString
              (DAT_1468b6148,L"OnlineSubsystem",L"DefaultPlatformService",&local_58,&DAT_1468e2360);
    local_48 = (undefined2 *)0x0;
    local_40 = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    puVar16 = local_48;
    FGenericPlatformString::Memcpy(local_48,&DAT_144cb2ef0,8);
    puVar17 = &DAT_143f3eda8;
    if ((int)local_40 != 0) {
      puVar17 = puVar16;
    }
    bVar5 = false;
    puVar15 = &DAT_143f3eda8;
    if ((int)local_50 != 0) {
      puVar15 = local_58;
    }
    iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar15,puVar17);
    puVar17 = local_48;
    if (iVar9 == 0) {
LAB_141604581:
      bVar6 = true;
    }
    else {
      local_40 = 5;
      local_48 = (undefined2 *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      puVar17 = local_48;
      FGenericPlatformString::Memcpy(local_48,L"Epic",10);
      bVar5 = true;
      puVar15 = &DAT_143f3eda8;
      if ((int)local_40 != 0) {
        puVar15 = puVar17;
      }
      puVar14 = &DAT_143f3eda8;
      if ((int)local_50 != 0) {
        puVar14 = local_58;
      }
      iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar14,puVar15);
      if (iVar9 == 0) goto LAB_141604581;
      bVar6 = false;
    }
    if ((bVar5) && (puVar17 != (undefined2 *)0x0)) {
      FMemory::Free(puVar17);
    }
    if (puVar16 != (undefined2 *)0x0) {
      FMemory::Free(puVar16);
    }
    if (bVar6) {
      lVar12 = *(longlong *)(param_1 + 0x60);
      p_Var1 = (LPCRITICAL_SECTION)(lVar12 + 0x20);
      BVar8 = TryEnterCriticalSection(p_Var1);
      if (BVar8 == 0) {
        EnterCriticalSection(p_Var1);
      }
      iVar9 = *(int *)(lVar12 + 0x80);
      LeaveCriticalSection(p_Var1);
      if (iVar9 != 0) {
        pcVar11 = *(char **)(param_1 + 0x60);
        if (*pcVar11 == '\0') {
          FUN_141611fd0(pcVar11 + 8);
          pcVar11 = (char *)(**(code **)(**(longlong **)(pcVar11 + 8) + 0x10))();
        }
        else {
          pcVar11 = pcVar11 + 0x48;
        }
        if (1 < *(int *)(pcVar11 + 8)) {
          puVar13 = (undefined8 *)FTextFormatter::Format(&local_48,param_1 + 0x60,param_3);
          pvVar4 = (void *)*puVar13;
          iVar9 = *(int *)(puVar13 + 1) + -1;
          if (*(int *)(puVar13 + 1) == 0) {
            iVar9 = 0;
          }
          if (iVar9 != 0) {
            iVar3 = (int)param_4[1];
            iVar10 = (uint)(iVar3 == 0) + iVar3 + iVar9;
            *(int *)(param_4 + 1) = iVar10;
            if (*(int *)((longlong)param_4 + 0xc) < iVar10) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar3);
            }
            pvVar2 = (void *)(*param_4 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar2,pvVar4,(longlong)iVar9 * 2);
            *(undefined2 *)((longlong)iVar9 * 2 + (longlong)pvVar2) = 0;
          }
LAB_141604836:
          puVar16 = local_58;
          if (local_48 != (undefined2 *)0x0) {
            FMemory::Free();
            puVar16 = local_58;
          }
          goto LAB_1416048da;
        }
      }
    }
    else {
      local_40 = 6;
      local_48 = (undefined2 *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      puVar16 = local_48;
      FGenericPlatformString::Memcpy(local_48,L"Steam",0xc);
      puVar17 = &DAT_143f3eda8;
      if ((int)local_40 != 0) {
        puVar17 = puVar16;
      }
      puVar15 = &DAT_143f3eda8;
      if ((int)local_50 != 0) {
        puVar15 = local_58;
      }
      iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar15,puVar17);
      if (puVar16 != (undefined2 *)0x0) {
        FMemory::Free(puVar16);
      }
      if (iVar9 == 0) {
        cVar7 = FUN_14160d310(param_1 + 0x70);
        if ((cVar7 != '\0') &&
           (lVar12 = FTextFormat::GetSourceString(param_1 + 0x70), 1 < *(int *)(lVar12 + 8))) {
          param_1 = param_1 + 0x70;
LAB_1416047c2:
          puVar13 = (undefined8 *)FTextFormatter::Format(&local_48,param_1,param_3);
          pvVar4 = (void *)*puVar13;
          iVar9 = *(int *)(puVar13 + 1) + -1;
          if (*(int *)(puVar13 + 1) == 0) {
            iVar9 = 0;
          }
          if (iVar9 != 0) {
            iVar3 = (int)param_4[1];
            iVar10 = (uint)(iVar3 == 0) + iVar3 + iVar9;
            *(int *)(param_4 + 1) = iVar10;
            if (*(int *)((longlong)param_4 + 0xc) < iVar10) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar3);
            }
            pvVar2 = (void *)(*param_4 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar2,pvVar4,(longlong)iVar9 * 2);
            *(undefined2 *)((longlong)iVar9 * 2 + (longlong)pvVar2) = 0;
          }
          goto LAB_141604836;
        }
      }
      else {
        local_48 = (undefined2 *)0x0;
        local_40 = 6;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
        puVar16 = local_48;
        FGenericPlatformString::Memcpy(local_48,L"Quail",0xc);
        puVar17 = &DAT_143f3eda8;
        if ((int)local_40 != 0) {
          puVar17 = puVar16;
        }
        puVar15 = &DAT_143f3eda8;
        if ((int)local_50 != 0) {
          puVar15 = local_58;
        }
        iVar9 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar15,puVar17);
        if (puVar16 != (undefined2 *)0x0) {
          FMemory::Free(puVar16);
        }
        if (((iVar9 == 0) && (cVar7 = FUN_14160d310(param_1 + 0x80), cVar7 != '\0')) &&
           (lVar12 = FTextFormat::GetSourceString(param_1 + 0x80), 1 < *(int *)(lVar12 + 8))) {
          param_1 = param_1 + 0x80;
          goto LAB_1416047c2;
        }
      }
    }
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    puVar13 = (undefined8 *)(param_1 + 0x10);
  }
  else {
    pcVar11 = (char *)*puVar13;
    if (*pcVar11 == '\0') {
      FUN_141611fd0(pcVar11 + 8);
      pcVar11 = (char *)(**(code **)(**(longlong **)(pcVar11 + 8) + 0x10))();
    }
    else {
      pcVar11 = pcVar11 + 0x48;
    }
    if (*(int *)(pcVar11 + 8) < 2) goto LAB_141604495;
  }
  puVar13 = (undefined8 *)FTextFormatter::Format(&local_48,puVar13,param_3);
  pvVar4 = (void *)*puVar13;
  iVar9 = *(int *)(puVar13 + 1) + -1;
  if (*(int *)(puVar13 + 1) == 0) {
    iVar9 = 0;
  }
  puVar16 = local_48;
  if (iVar9 != 0) {
    iVar3 = (int)param_4[1];
    iVar10 = (uint)(iVar3 == 0) + iVar3 + iVar9;
    *(int *)(param_4 + 1) = iVar10;
    if (*(int *)((longlong)param_4 + 0xc) < iVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar3);
    }
    pvVar2 = (void *)(*param_4 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar2,pvVar4,(longlong)iVar9 * 2);
    *(undefined2 *)((longlong)iVar9 * 2 + (longlong)pvVar2) = 0;
    puVar16 = local_48;
  }
LAB_1416048da:
  if (puVar16 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141604900 Evaluate body=416 status=ok
// SIG undefined Evaluate(void)

void FTextFormatArgumentModifier_PluralForm::Evaluate
               (longlong param_1,int *param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  void *_Dst;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  void *_Src;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong local_28 [2];
  
  lVar8 = FInternationalization::Get();
  plVar4 = *(longlong **)(lVar8 + 0x30);
  uVar5 = *(undefined8 *)(lVar8 + 0x28);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar4 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  iVar10 = *param_2;
  bVar6 = 5;
  if (iVar10 == 0) {
    bVar6 = FCulture::GetPluralForm(uVar5,*(undefined8 *)(param_2 + 2),*(undefined1 *)(param_1 + 8))
    ;
  }
  else if (iVar10 == 1) {
    bVar6 = FCulture::GetPluralForm(uVar5,*(undefined8 *)(param_2 + 2),*(undefined1 *)(param_1 + 8))
    ;
  }
  else if (iVar10 == 2) {
    bVar6 = FCulture::GetPluralForm(uVar5,param_2[2],*(undefined1 *)(param_1 + 8));
  }
  else if (iVar10 == 3) {
    bVar6 = FCulture::GetPluralForm(uVar5,*(undefined8 *)(param_2 + 2),*(undefined1 *)(param_1 + 8))
    ;
  }
  puVar9 = (undefined8 *)
           FTextFormatter::Format(local_28,param_1 + 0x18 + (ulonglong)bVar6 * 0x10,param_3);
  _Src = (void *)*puVar9;
  iVar10 = *(int *)(puVar9 + 1) + -1;
  if (*(int *)(puVar9 + 1) == 0) {
    iVar10 = 0;
  }
  if (iVar10 != 0) {
    iVar3 = (int)param_4[1];
    iVar7 = (uint)(iVar3 == 0) + iVar10 + iVar3;
    *(int *)(param_4 + 1) = iVar7;
    if (*(int *)((longlong)param_4 + 0xc) < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar3);
    }
    _Dst = (void *)(*param_4 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
    ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar10 * 2);
    *(undefined2 *)((longlong)iVar10 * 2 + (longlong)_Dst) = 0;
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141604aa0 FUN_141604aa0 body=346 status=ok
// SIG undefined FUN_141604aa0(void)

void FUN_141604aa0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  
  puVar7 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  iVar1 = FCrc::StrCrc32<wchar_t>(puVar3,0);
  plVar6 = (longlong *)0x0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar1) * 4);
    if (iVar2 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar2 * 0x60 + *param_1);
        if ((int)*plVar4 == iVar1) {
          if (iVar2 != -1) goto LAB_141604b45;
          break;
        }
        iVar2 = (int)plVar4[0xb];
      } while (iVar2 != -1);
    }
  }
  plVar4 = plVar6;
LAB_141604b45:
  plVar5 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = plVar6;
  }
  *param_3 = plVar5;
  if (plVar5 == (longlong *)0x0) {
    *param_5 = 0;
  }
  else {
    if (*(int *)(param_4 + 1) != 0) {
      puVar7 = (undefined2 *)*param_4;
    }
    iVar1 = FCrc::StrCrc32<wchar_t>(puVar7,0);
    if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
      plVar4 = (longlong *)plVar5[8];
      if ((longlong *)plVar5[8] == (longlong *)0x0) {
        plVar4 = plVar5 + 7;
      }
      iVar2 = *(int *)((longlong)plVar4 + ((longlong)(int)plVar5[9] - 1U & (longlong)iVar1) * 4);
      if (iVar2 != -1) {
        do {
          plVar4 = (longlong *)((longlong)iVar2 * 0x38 + *plVar5);
          if ((int)*plVar4 == iVar1) {
            if (iVar2 != -1) goto LAB_141604bc2;
            break;
          }
          iVar2 = (int)plVar4[6];
        } while (iVar2 != -1);
      }
    }
    plVar4 = plVar6;
LAB_141604bc2:
    plVar5 = plVar4 + 1;
    if (plVar4 == (longlong *)0x0) {
      plVar5 = plVar6;
    }
    *param_5 = (longlong)plVar5;
  }
  return;
}



// FUNCTION 141604c00 FUN_141604c00 body=228 status=ok
// SIG undefined FUN_141604c00(void)

undefined8 *
FUN_141604c00(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  BOOL BVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong local_res8;
  undefined8 local_28 [2];
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  local_28[0] = 0;
  local_res8 = 0;
  FUN_141604aa0(param_1 + 0x30,param_3,local_28,param_4,&local_res8);
  lVar1 = local_res8;
  if (local_res8 == 0) {
LAB_141604cb8:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    if (param_5 != (undefined8 *)0x0) {
      if (*(int *)(param_5 + 1) == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = (undefined2 *)*param_5;
      }
      iVar3 = FCrc::StrCrc32<wchar_t>(puVar4,0);
      if (*(int *)(lVar1 + 0x24) != iVar3) goto LAB_141604cb8;
    }
    *param_2 = *(undefined8 *)(lVar1 + 0x10);
    lVar1 = *(longlong *)(lVar1 + 0x18);
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return param_2;
}



// FUNCTION 141604cf0 FindEntry body=232 status=ok
// SIG undefined FindEntry(void)

undefined8 * FStringTable::FindEntry(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar2;
  int iVar3;
  BOOL BVar4;
  longlong *plVar5;
  longlong *plVar6;
  int local_res8 [2];
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xd0);
  BVar4 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar4 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  TSet<TTuple<FString,FString>,FLocKeyMapFuncs<FString>,FDefaultSetAllocator>::FindId
            (param_1 + 0x30,local_res8,param_3);
  if ((local_res8[0] == -1) ||
     (lVar2 = *(longlong *)(param_1 + 0x30) + (longlong)local_res8[0] * 0x28, lVar2 == 0)) {
    plVar5 = (longlong *)0x0;
    plVar6 = plVar5;
  }
  else {
    plVar5 = *(longlong **)(lVar2 + 0x10);
    plVar6 = *(longlong **)(lVar2 + 0x18);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
  }
  *param_2 = plVar5;
  param_2[1] = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar5 = plVar6 + 1;
    lVar2 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  LeaveCriticalSection(lpCriticalSection);
  return param_2;
}



// FUNCTION 141604de0 FindId body=346 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FTextCache::FCacheKey,FText>,TDefaultMapHashableKeyFuncs<FTextCache::FCacheKey,FText,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 *param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  longlong *plVar4;
  short *psVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)param_3 + 0x34))
                    * 4);
    if (iVar3 != -1) {
      do {
        puVar8 = (undefined8 *)((longlong)iVar3 * 0x58 + *param_1);
        if (*(char *)(param_3 + 6) == '\0') {
          puVar7 = (undefined2 *)*param_3;
        }
        else if (*(int *)(param_3 + 3) == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = (undefined2 *)param_3[2];
        }
        if (*(char *)(puVar8 + 6) == '\0') {
          psVar5 = (short *)*puVar8;
        }
        else if (*(int *)(puVar8 + 3) == 0) {
          psVar5 = &DAT_143f3eda8;
        }
        else {
          psVar5 = (short *)puVar8[2];
        }
        lVar6 = (longlong)puVar7 - (longlong)psVar5;
        do {
          sVar1 = *psVar5;
          sVar2 = *(short *)((longlong)psVar5 + lVar6);
          if (sVar1 != sVar2) break;
          psVar5 = psVar5 + 1;
        } while (sVar2 != 0);
        if (sVar1 == sVar2) {
          if (*(char *)(param_3 + 6) == '\0') {
            puVar7 = (undefined2 *)param_3[1];
          }
          else if (*(int *)(param_3 + 5) == 0) {
            puVar7 = &DAT_143f3eda8;
          }
          else {
            puVar7 = (undefined2 *)param_3[4];
          }
          if (*(char *)(puVar8 + 6) == '\0') {
            psVar5 = (short *)puVar8[1];
          }
          else if (*(int *)(puVar8 + 5) == 0) {
            psVar5 = &DAT_143f3eda8;
          }
          else {
            psVar5 = (short *)puVar8[4];
          }
          lVar6 = (longlong)puVar7 - (longlong)psVar5;
          do {
            sVar1 = *psVar5;
            sVar2 = *(short *)((longlong)psVar5 + lVar6);
            if (sVar1 != sVar2) break;
            psVar5 = psVar5 + 1;
          } while (sVar2 != 0);
          if (sVar1 == sVar2) {
            *param_2 = iVar3;
            return param_2;
          }
        }
        iVar3 = *(int *)(puVar8 + 10);
      } while (iVar3 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141604f40 FindId body=268 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<TSharedRef<FString,1>,unsigned_short>,TDefaultMapHashableKeyFuncs<TSharedRef<FString,1>,unsigned_short,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = (int)(*param_3 >> 4);
    uVar3 = 0x9e3779b9U - iVar4 ^ iVar4 << 8;
    uVar2 = -(uVar3 + iVar4) ^ uVar3 >> 0xd;
    uVar5 = (iVar4 - uVar3) - uVar2 ^ uVar2 >> 0xc;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 0x10;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 10;
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar1 +
                    (((longlong)(int)((uVar2 - uVar3) - uVar5) ^ (ulonglong)(uVar3 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar4 * 0x20 + *param_1) == *param_3) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *param_1);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141605050 FindId body=229 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FLocKey,FPolyglotTextData>,TDefaultMapHashableKeyFuncs<FLocKey,FPolyglotTextData,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 *param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  longlong *plVar4;
  short *psVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)(param_3 + 2)) * 4);
    if (iVar3 != -1) {
      do {
        puVar8 = (undefined8 *)((longlong)iVar3 * 0xd0 + *param_1);
        if (*(int *)(puVar8 + 2) == *(int *)(param_3 + 2)) {
          if (*(int *)(param_3 + 1) == 0) {
            puVar6 = &DAT_143f3eda8;
          }
          else {
            puVar6 = (undefined2 *)*param_3;
          }
          if (*(int *)(puVar8 + 1) == 0) {
            psVar5 = &DAT_143f3eda8;
          }
          else {
            psVar5 = (short *)*puVar8;
          }
          lVar7 = (longlong)puVar6 - (longlong)psVar5;
          do {
            sVar1 = *psVar5;
            sVar2 = *(short *)((longlong)psVar5 + lVar7);
            if (sVar1 != sVar2) break;
            psVar5 = psVar5 + 1;
          } while (sVar2 != 0);
          if (sVar1 == sVar2) {
            *param_2 = iVar3;
            return param_2;
          }
        }
        iVar3 = *(int *)(puVar8 + 0x19);
      } while (iVar3 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141605140 FindId body=250 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FString,FString>,FLocKeyMapFuncs<FString>,FDefaultSetAllocator>::FindId
                (longlong *param_1,int *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  short *psVar7;
  undefined2 *puVar8;
  longlong lVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = *(int *)(param_3 + 1);
    if (iVar4 == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*param_3;
    }
    iVar5 = FCrc::StrCrc32<wchar_t>(puVar8,0);
    plVar6 = (longlong *)0x0;
    if (param_1[8] == 0) {
      plVar6 = param_1 + 7;
    }
    iVar5 = *(int *)(((ulonglong)plVar6 | param_1[8]) +
                    ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar5 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar5 * 0x28);
        if (iVar4 == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = (undefined2 *)*param_3;
        }
        if (*(int *)(puVar1 + 1) == 0) {
          psVar7 = &DAT_143f3eda8;
        }
        else {
          psVar7 = (short *)*puVar1;
        }
        lVar9 = (longlong)puVar8 - (longlong)psVar7;
        do {
          sVar2 = *psVar7;
          sVar3 = *(short *)((longlong)psVar7 + lVar9);
          if (sVar2 != sVar3) break;
          psVar7 = psVar7 + 1;
        } while (sVar3 != 0);
        if (sVar2 == sVar3) {
          *param_2 = iVar5;
          return param_2;
        }
        iVar5 = *(int *)(puVar1 + 4);
      } while (iVar5 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141605240 FindId body=250 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FLocKeyMapFuncs<TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 *param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  short *psVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong lVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar3 = *(int *)(param_3 + 1);
    if (iVar3 == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*param_3;
    }
    iVar5 = FCrc::StrCrc32<wchar_t>(puVar8,0);
    plVar6 = (longlong *)0x0;
    if (param_1[8] == 0) {
      plVar6 = param_1 + 7;
    }
    iVar5 = *(int *)(((ulonglong)plVar6 | param_1[8]) +
                    ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar5 != -1) {
      lVar4 = *param_1;
      do {
        lVar10 = (longlong)iVar5 * 0x68;
        if (iVar3 == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = (undefined2 *)*param_3;
        }
        if (*(int *)(lVar10 + 8 + lVar4) == 0) {
          psVar7 = &DAT_143f3eda8;
        }
        else {
          psVar7 = *(short **)(lVar10 + lVar4);
        }
        lVar9 = (longlong)puVar8 - (longlong)psVar7;
        do {
          sVar1 = *psVar7;
          sVar2 = *(short *)((longlong)psVar7 + lVar9);
          if (sVar1 != sVar2) break;
          psVar7 = psVar7 + 1;
        } while (sVar2 != 0);
        if (sVar1 == sVar2) {
          *param_2 = iVar5;
          return param_2;
        }
        iVar5 = *(int *)(lVar10 + 0x60 + lVar4);
      } while (iVar5 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141605340 FUN_141605340 body=188 status=ok
// SIG undefined FUN_141605340(void)

int * FUN_141605340(longlong *param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar2 +
                    ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)param_3 + 0xc)) *
                    4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar4 * 0x38;
        iVar1 = *(int *)(lVar5 + 8 + lVar3);
        if ((iVar1 == *(int *)(param_3 + 1)) &&
           (iVar1 = wcsncmp(*(wchar_t **)(lVar5 + lVar3),(wchar_t *)*param_3,(longlong)iVar1),
           iVar1 == 0)) {
          *param_2 = iVar4;
          return param_2;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar5 + 0x30 + lVar3);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141605400 FindId body=250 status=ok
// SIG undefined FindId(void)

int * TSet<FString,FLocKeySetFuncs,FDefaultSetAllocator>::FindId
                (longlong *param_1,int *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  short *psVar7;
  undefined2 *puVar8;
  longlong lVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = *(int *)(param_3 + 1);
    if (iVar4 == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*param_3;
    }
    iVar5 = FCrc::StrCrc32<wchar_t>(puVar8,0);
    plVar6 = (longlong *)0x0;
    if (param_1[8] == 0) {
      plVar6 = param_1 + 7;
    }
    iVar5 = *(int *)(((ulonglong)plVar6 | param_1[8]) +
                    ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar5 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar5 * 0x18);
        if (iVar4 == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = (undefined2 *)*param_3;
        }
        if (*(int *)(puVar1 + 1) == 0) {
          psVar7 = &DAT_143f3eda8;
        }
        else {
          psVar7 = (short *)*puVar1;
        }
        lVar9 = (longlong)puVar8 - (longlong)psVar7;
        do {
          sVar2 = *psVar7;
          sVar3 = *(short *)((longlong)psVar7 + lVar9);
          if (sVar2 != sVar3) break;
          psVar7 = psVar7 + 1;
        } while (sVar3 != 0);
        if (sVar2 == sVar3) {
          *param_2 = iVar5;
          return param_2;
        }
        iVar5 = *(int *)(puVar1 + 2);
      } while (iVar5 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141605500 FindKey body=255 status=ok
// SIG undefined FindKey(void)

bool FStringTable::FindKey(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar3;
  longlong *plVar4;
  BOOL BVar5;
  longlong lVar6;
  longlong lVar7;
  int local_res8 [2];
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xd0);
  BVar5 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar5 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  plVar4 = *(longlong **)(param_2 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  TSet<TTuple<TSharedRef<FUniqueNetId_const_,0>,FString>,TDefaultMapHashableKeyFuncs<TSharedRef<FUniqueNetId_const_,0>,FString,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x80,local_res8);
  lVar6 = 0;
  if (local_res8[0] != -1) {
    lVar6 = *(longlong *)(param_1 + 0x80) + (longlong)local_res8[0] * 0x28;
  }
  lVar7 = lVar6 + 0x10;
  if (lVar6 == 0) {
    lVar7 = 0;
  }
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
  if (lVar7 != 0) {
    FString::operator=(param_3,lVar7);
  }
  LeaveCriticalSection(lpCriticalSection);
  return lVar7 != 0;
}



// FUNCTION 141605600 FindOrCache body=1133 status=ok
// SIG undefined FindOrCache(void)

undefined8 *
FTextCache::FindOrCache
          (longlong *param_1,undefined8 *param_2,short *param_3,short *param_4,short *param_5)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short *psVar5;
  BOOL BVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  short *psVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 local_res20 [8];
  short *local_f8;
  short *psStack_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  char local_c8;
  undefined4 local_c4;
  longlong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  longlong local_90;
  ulonglong local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined4 local_60;
  short **local_58;
  undefined8 *local_50;
  
  psVar5 = param_5;
  psStack_f0 = param_5;
  puVar10 = (undefined8 *)0x0;
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = '\0';
  local_c4 = 0;
  local_f8 = param_4;
  FCacheKey::HashKey(&local_f8);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 10);
  BVar6 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar6 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  TSet<TTuple<FTextCache::FCacheKey,FText>,TDefaultMapHashableKeyFuncs<FTextCache::FCacheKey,FText,0>,FDefaultSetAllocator>
  ::FindId(param_1,&param_5,&local_f8);
  puVar8 = puVar10;
  if ((int)param_5 != -1) {
    puVar8 = (undefined8 *)((longlong)(int)param_5 * 0x58 + *param_1);
  }
  puVar13 = puVar8 + 7;
  if (puVar8 == (undefined8 *)0x0) {
    puVar13 = puVar10;
  }
  if (puVar13 != (undefined8 *)0x0) {
    plVar7 = (longlong *)(**(code **)(*(longlong *)*puVar13 + 0x28))();
    puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x38))(plVar7);
    if ((puVar8 != (undefined8 *)0x0) ||
       (puVar8 = (undefined8 *)(**(code **)(*(longlong *)*puVar13 + 0x10))(),
       puVar8 != (undefined8 *)0x0)) {
      if (*(int *)(puVar8 + 1) == 0) {
        psVar9 = &DAT_143f3eda8;
      }
      else {
        psVar9 = (short *)*puVar8;
      }
      lVar14 = (longlong)param_3 - (longlong)psVar9;
      do {
        sVar3 = *psVar9;
        sVar4 = *(short *)((longlong)psVar9 + lVar14);
        if (sVar3 != sVar4) break;
        psVar9 = psVar9 + 1;
      } while (sVar4 != 0);
      if (sVar3 == sVar4) {
        *param_2 = *puVar13;
        lVar14 = puVar13[1];
        param_2[1] = lVar14;
        if (lVar14 != 0) {
          LOCK();
          *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
          UNLOCK();
        }
        *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar13 + 2);
        LeaveCriticalSection(lpCriticalSection);
        goto LAB_141605a38;
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  local_88 = 0;
  local_90 = 0;
  if ((psVar5 != (short *)0x0) && (*psVar5 != 0)) {
    lVar14 = -1;
    do {
      lVar14 = lVar14 + 1;
    } while (psVar5[lVar14] != 0);
    uVar11 = (int)lVar14 + 1;
    local_88 = (ulonglong)uVar11;
    if (0 < (int)uVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,0);
    }
    FGenericPlatformString::Memcpy(local_90,psVar5,(longlong)(int)uVar11 * 2);
  }
  local_98 = 0;
  local_a0 = 0;
  if ((param_4 != (short *)0x0) && (*param_4 != 0)) {
    lVar14 = -1;
    do {
      lVar14 = lVar14 + 1;
    } while (param_4[lVar14] != 0);
    uVar11 = (int)lVar14 + 1;
    local_98 = (ulonglong)uVar11;
    if (0 < (int)uVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a0,0);
    }
    FGenericPlatformString::Memcpy(local_a0,param_4,(longlong)(int)uVar11 * 2);
  }
  local_b0 = 0;
  local_a8 = 0;
  if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
    lVar14 = -1;
    do {
      lVar14 = lVar14 + 1;
    } while (param_3[lVar14] != 0);
    uVar11 = (int)lVar14 + 1;
    local_a8 = (ulonglong)uVar11;
    if (0 < (int)uVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b0,0);
    }
    FGenericPlatformString::Memcpy(local_b0,param_3,(longlong)(int)uVar11 * 2);
  }
  FUN_1415f0940(&local_70,&local_b0,&local_a0,&local_90,8);
  if (local_b0 != 0) {
    FMemory::Free();
  }
  if (local_a0 != 0) {
    FMemory::Free();
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  psVar5 = psStack_f0;
  if (local_c8 == '\0') {
    local_c0 = 0;
    uVar15 = 0;
    local_b8 = 0;
    uVar11 = 0;
    if ((psStack_f0 != (short *)0x0) && (uVar11 = uVar15, *psStack_f0 != 0)) {
      lVar14 = -1;
      do {
        lVar14 = lVar14 + 1;
      } while (psStack_f0[lVar14] != 0);
      uVar12 = (int)lVar14 + 1;
      local_b8 = (ulonglong)uVar12;
      uVar11 = uVar12;
      if (0 < (int)uVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c0,0);
        uVar11 = (uint)local_b8;
      }
      FGenericPlatformString::Memcpy(local_c0,psVar5,(longlong)(int)uVar12 * 2);
    }
    psVar5 = local_f8;
    local_80 = (undefined8 *)0x0;
    local_78 = 0;
    uVar12 = uVar15;
    if ((local_f8 != (short *)0x0) && (*local_f8 != 0)) {
      lVar14 = -1;
      do {
        lVar14 = lVar14 + 1;
      } while (local_f8[lVar14] != 0);
      uVar12 = (int)lVar14 + 1;
      local_78 = (ulonglong)uVar12;
      uVar15 = uVar12;
      if (0 < (int)uVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,0);
        uVar15 = (uint)local_78;
      }
      puVar10 = local_80;
      FGenericPlatformString::Memcpy(local_80,psVar5,(longlong)(int)uVar12 * 2);
      uVar12 = local_78._4_4_;
    }
    if (local_e8 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    local_e0 = CONCAT44(uVar12,uVar15);
    local_e8 = puVar10;
    if (local_d8 != 0) {
      FMemory::Free();
    }
    local_d8 = local_c0;
    local_d0 = CONCAT44((int)(local_b8 >> 0x20),uVar11);
    local_f8 = (short *)0x0;
    psStack_f0 = (short *)0x0;
    local_c8 = '\x01';
  }
  BVar6 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar6 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  local_58 = &local_f8;
  local_50 = &local_70;
  FUN_1415ebb50(param_1,local_res20,&local_58,0);
  LeaveCriticalSection(lpCriticalSection);
  *param_2 = local_70;
  param_2[1] = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_2 + 2) = local_60;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_68 + 1;
    lVar14 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
LAB_141605a38:
  if (local_d8 != 0) {
    FMemory::Free();
  }
  if (local_e8 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141605a70 FindStringTable body=300 status=ok
// SIG undefined FindStringTable(void)

undefined8 *
FStringTableRegistry::FindStringTable(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  BOOL BVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 10);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  plVar5 = (longlong *)0x0;
  plVar8 = plVar5;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    ((longlong)((int)((ulonglong)param_3 >> 0x20) + (int)param_3) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar3 != -1) {
      lVar7 = *param_1;
      do {
        lVar6 = (longlong)iVar3 * 0x20;
        if (*(longlong *)(lVar6 + lVar7) == param_3) {
          if ((iVar3 != -1) && (lVar7 = (longlong)iVar3 * 0x20 + lVar7, lVar7 != 0)) {
            plVar5 = *(longlong **)(lVar7 + 0x10);
            plVar8 = *(longlong **)(lVar7 + 8);
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
            }
          }
          break;
        }
        iVar3 = *(int *)(lVar6 + 0x18 + lVar7);
      } while (iVar3 != -1);
    }
  }
  *param_2 = plVar8;
  param_2[1] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar5 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  LeaveCriticalSection(lpCriticalSection);
  return param_2;
}



// FUNCTION 141605ba0 FindStringTableAsset body=137 status=ok
// SIG undefined FindStringTableAsset(void)

undefined8 FStringTableRegistry::FindStringTableAsset(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong local_18;
  longlong *local_10;
  
  uVar6 = 0;
  FindStringTable(param_1,&local_18,param_2);
  plVar5 = local_10;
  if (local_18 != 0) {
    uVar6 = *(undefined8 *)(local_18 + 0x10);
  }
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
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 141605c30 FindTableIdAndKey body=668 status=ok
// SIG undefined FindTableIdAndKey(void)

undefined8
FStringTableRegistry::FindTableIdAndKey
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  BOOL BVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  uint *puVar13;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_98;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  if (BVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  }
  uVar2 = *(uint *)(param_1 + 5);
  puVar1 = (uint *)(param_1 + 2);
  local_a8 = 0x100000000;
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar2 != 0) {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar7 = *puVar13;
    iStack_90 = 0;
    iVar8 = 0;
    while (uVar7 == 0) {
      iStack_90 = iStack_90 + 0x20;
      uVar3 = (ulonglong)local_a8 >> 0x20;
      local_a8 = CONCAT44((int)uVar3,iVar8 + 1);
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_141605d1c;
      uVar7 = puVar13[(longlong)iVar8 + 1];
      iVar8 = iVar8 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar8 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    local_a8 = CONCAT44(uVar7,(undefined4)local_a8);
    if (uVar7 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_94 = (iStack_90 - iVar8) + 0x1f;
    if ((int)uVar2 < (int)uStack_94) {
LAB_141605d1c:
      uStack_94 = uVar2;
    }
  }
  uVar7 = *(uint *)(param_1 + 5);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_94;
  local_68 = CONCAT44(uStack_8c,iStack_90);
  local_98 = -1 << ((byte)uVar7 & 0x1f);
  uStack_58 = local_a8;
  lVar4 = uStack_58;
  uVar12 = uVar7 & 0xffffffe0;
  local_60._0_4_ = SUB84(param_1,0);
  local_60._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
  uStack_58._0_4_ = (undefined4)local_a8;
  uStack_58._4_4_ = (uint)((ulonglong)local_a8 >> 0x20);
  local_88 = (undefined4)local_60;
  uStack_84 = local_60._4_4_;
  uStack_80 = (undefined4)uStack_58;
  uStack_7c = uStack_58._4_4_;
  uStack_a0 = puVar1;
  uStack_94 = uVar7;
  local_78 = puVar1;
  local_60 = param_1;
  uStack_58 = lVar4;
  puStack_50 = puVar1;
  uStack_40 = local_68;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  if (uVar7 != uVar2) {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar9 = puVar13[(int)uVar7 >> 5] & local_98;
    iVar8 = (int)uVar7 >> 5;
    while (uVar9 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_141605de2;
      uVar9 = puVar13[(longlong)iVar8 + 1];
      local_98 = 0xffffffff;
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
    uStack_94 = (uVar12 - iVar8) + 0x1f;
    uVar7 = uStack_94;
    if ((int)uVar2 < (int)uStack_94) {
LAB_141605de2:
      uStack_94 = uVar2;
      uVar7 = uVar2;
    }
  }
  while( true ) {
    if (((uStack_6c == uVar7) && (local_78 == puVar1)) &&
       ((longlong *)CONCAT44(uStack_84,local_88) == param_1)) break;
    puVar10 = (undefined8 *)
              ((longlong)(int)uStack_6c * 0x20 + *(longlong *)CONCAT44(uStack_84,local_88));
    local_a8 = 0;
    uStack_a0 = (uint *)0x0;
    cVar5 = FStringTable::FindKey(puVar10[1],param_2,&local_a8);
    if (cVar5 != '\0') {
      *param_3 = *puVar10;
      if (param_4 == &local_a8) {
        if (local_a8 != 0) {
          FMemory::Free();
        }
      }
      else {
        if (*param_4 != 0) {
          FMemory::Free();
        }
        *param_4 = local_a8;
        *(undefined4 *)(param_4 + 1) = (undefined4)uStack_a0;
        *(undefined4 *)((longlong)param_4 + 0xc) = uStack_a0._4_4_;
      }
      uVar11 = 1;
LAB_141605ea3:
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
      return uVar11;
    }
    if (local_a8 != 0) {
      FMemory::Free();
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
  }
  uVar11 = 0;
  goto LAB_141605ea3;
}



// FUNCTION 141605ed0 FindTableIdAndKey body=360 status=ok
// SIG undefined FindTableIdAndKey(void)

ulonglong FStringTableRegistry::FindTableIdAndKey
                    (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x28))();
  uVar6 = (**(code **)(*plVar5 + 8))(plVar5);
  if ((int)uVar6 != 0xb) {
    return uVar6 & 0xffffffffffffff00;
  }
  (**(code **)(*(longlong *)*param_2 + 0x38))();
  puVar7 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,local_28);
  local_38 = *puVar7;
  local_30 = (longlong *)puVar7[1];
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_20 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  cVar3 = FindTableIdAndKey(param_1,&local_38,param_3,param_4);
  if (cVar3 == '\0') {
    plVar5 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x28))();
    iVar4 = (**(code **)(*plVar5 + 8))(plVar5);
    if (iVar4 != 0xb) {
      uVar6 = 0;
      goto LAB_141605fc9;
    }
    lVar8 = (**(code **)(*(longlong *)*param_2 + 0x28))();
    *param_3 = *(undefined8 *)(lVar8 + 0x10);
    FString::operator=(param_4,lVar8 + 0x18);
  }
  uVar6 = 1;
LAB_141605fc9:
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 141606040 FUN_141606040 body=648 status=ok
// SIG undefined FUN_141606040(void)

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_141606040(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  int *piVar2;
  void *pvVar3;
  void *_Src;
  bool bVar4;
  bool bVar5;
  ulonglong uVar6;
  BOOL BVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  void **ppvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  ulonglong local_78 [2];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  plVar14 = (longlong *)0x0;
  local_78[0] = local_78[0] & 0xffffffff00000000;
  if (DAT_1468b5998 == 0) {
    lVar9 = operator_new(0x110);
    if (lVar9 == 0) {
      DAT_1468b5998 = 0;
    }
    else {
      DAT_1468b5998 = FUN_1415f3b10(lVar9);
    }
  }
  lVar9 = DAT_1468b5998;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_1468b5998 + 8);
  BVar7 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar7 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  local_78[1] = 0;
  local_78[0] = 0;
  FUN_141604aa0(lVar9 + 0x30,param_1,local_78 + 1,param_2,local_78);
  uVar6 = local_78[0];
  if (local_78[0] == 0) {
LAB_141606265:
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    if (param_4 != (undefined8 *)0x0) {
      if (*(int *)(param_4 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*param_4;
      }
      iVar8 = FCrc::StrCrc32<wchar_t>(puVar11,0);
      if (*(int *)(uVar6 + 0x24) != iVar8) goto LAB_141606265;
    }
    pvVar3 = *(void **)(uVar6 + 0x10);
    plVar14 = *(longlong **)(uVar6 + 0x18);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
    }
    LeaveCriticalSection(lpCriticalSection);
    if (pvVar3 != (void *)0x0) {
      if (param_4 == (undefined8 *)0x0) {
        local_58 = (void *)0x0;
        ppvVar12 = &local_58;
        local_50 = 0;
        bVar5 = false;
        bVar4 = true;
      }
      else {
        local_60 = *(int *)(param_4 + 1);
        lVar9 = (longlong)local_60;
        _Src = (void *)*param_4;
        local_68 = (void *)0x0;
        if (local_60 == 0) {
          local_5c = 0;
          ppvVar12 = &local_68;
          bVar5 = true;
          bVar4 = false;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_60,0);
          _guard_xfg_dispatch_icall_nop(local_68,_Src,lVar9 * 2);
          ppvVar12 = &local_68;
          bVar5 = true;
          bVar4 = false;
        }
      }
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      local_48 = pvVar3;
      local_40 = plVar14;
      puVar10 = (undefined8 *)FUN_1415f0af0(local_38,ppvVar12,&local_48);
      uVar13 = *param_3;
      *param_3 = *puVar10;
      *puVar10 = uVar13;
      uVar13 = param_3[1];
      param_3[1] = puVar10[1];
      puVar10[1] = uVar13;
      *(undefined4 *)(param_3 + 2) = *(undefined4 *)(puVar10 + 2);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)local_30 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
      if (bVar4) {
        if (local_58 != (void *)0x0) {
          FMemory::Free();
        }
      }
      if ((bVar5) && (local_68 != (void *)0x0)) {
        FMemory::Free();
      }
      uVar13 = 1;
      goto LAB_141606273;
    }
  }
  uVar13 = 0;
LAB_141606273:
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar14 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  return uVar13;
}



// FUNCTION 1416062d0 ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText body=83 status=ok
// SIG undefined ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(void)

undefined8
FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_141607df0();
  FTextCache::FindOrCache(uVar1,param_1,param_2,param_3,param_4);
  return param_1;
}



// FUNCTION 141606330 Format body=122 status=ok
// SIG undefined Format(void)

undefined8 FText::Format(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_141606a30();
  plVar4 = *(longlong **)(param_2 + 8);
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
    return param_1;
  }
  return param_1;
}



// FUNCTION 1416063b0 Format body=295 status=ok
// SIG undefined Format(void)

undefined8 FText::Format(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong local_18;
  int local_10;
  undefined4 local_c;
  
  iVar7 = (int)param_3[1];
  lVar3 = *param_3;
  local_18 = 0;
  local_10 = iVar7;
  if (iVar7 == 0) {
    local_c = 0;
  }
  else {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(&local_18,iVar7,0);
    puVar6 = (undefined8 *)(lVar3 + 8);
    puVar5 = (undefined8 *)(local_18 + 8);
    do {
      *(undefined4 *)(puVar5 + -1) = *(undefined4 *)(puVar6 + -1);
      *puVar5 = *puVar6;
      *puVar5 = *puVar6;
      *(undefined4 *)puVar5 = *(undefined4 *)puVar6;
      *puVar5 = *puVar6;
      *(undefined1 *)(puVar5 + 4) = 0;
      if (*(char *)(puVar6 + 4) != '\0') {
        puVar5[1] = puVar6[1];
        lVar3 = puVar6[2];
        puVar5[2] = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(puVar6 + 3);
        *(undefined1 *)(puVar5 + 4) = 1;
      }
      puVar5 = puVar5 + 6;
      puVar6 = puVar6 + 6;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_141606a30(param_1,param_2,&local_18,0,0);
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (&local_18);
  plVar4 = *(longlong **)(param_2 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  return param_1;
}



// FUNCTION 1416064e0 Format body=266 status=ok
// SIG undefined Format(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FText::Format(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  longlong local_78 [4];
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_78[0] = 0;
  local_78[1] = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  TSet<TTuple<FString,FFormatArgumentValue>,FLocKeyMapFuncs<FFormatArgumentValue>,FDefaultSetAllocator>
  ::operator=(local_78,param_3);
  local_88 = 0;
  FUN_141606ca0(param_1,param_2,local_78,0);
  local_30 = 0;
  if (local_38 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(local_78,0);
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_2 + 8);
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



// FUNCTION 1416065f0 Format body=449 status=ok
// SIG undefined Format(void)

undefined8 FTextFormatter::Format(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  BOOL BVar5;
  longlong *plVar6;
  longlong local_58;
  longlong *local_50;
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  lVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_58 = lVar3;
  local_50 = plVar4;
  if (*(char *)(param_3 + 0x15) != '\0') {
    FTextFormat::GetSourceText(param_2,&local_28);
    if (*(char *)(param_3 + 0x14) != '\0') {
      FUN_141611fd0(&local_28);
    }
    plVar6 = (longlong *)(**(code **)(*local_28 + 0x28))();
    (**(code **)(*plVar6 + 0x18))(plVar6,local_48);
    plVar6 = (longlong *)FTextFormat::FTextFormat(local_38,local_48);
    local_58 = *plVar6;
    *plVar6 = lVar3;
    local_50 = (longlong *)plVar6[1];
    plVar6[1] = (longlong)plVar4;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
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
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    plVar4 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_20 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(local_58 + 0x20));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(local_58 + 0x20));
  }
  FTextFormatData::Format_NoLock(local_58,param_1,param_3);
  LeaveCriticalSection((LPCRITICAL_SECTION)(local_58 + 0x20));
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
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1416067c0 FUN_1416067c0 body=613 status=ok
// SIG undefined FUN_1416067c0(void)

longlong FUN_1416067c0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                      undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  longlong *local_78;
  longlong *plStack_70;
  undefined **local_68;
  undefined2 local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong local_40;
  
  FUN_141606ef0(&local_98);
  lVar9 = DAT_1468b5998;
  if (DAT_1468b5998 == 0) {
    lVar8 = operator_new(0x110);
    lVar9 = 0;
    if (lVar8 != 0) {
      lVar9 = FUN_1415f3b10(lVar8);
    }
  }
  DAT_1468b5998 = lVar9;
  lVar9 = *param_2;
  plVar6 = (longlong *)param_2[1];
  uVar4 = *(undefined2 *)(DAT_1468b5998 + 0xd0);
  local_68 = &PTR__scalar_deleting_destructor__144cb5538;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  lVar8 = *param_3;
  *param_3 = 0;
  lVar7 = param_3[1];
  uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
  local_40 = param_3[1];
  param_3[1] = 0;
  local_60 = uVar4;
  local_58 = lVar9;
  local_50 = plVar6;
  local_48 = lVar8;
  plStack_80 = (longlong *)operator_new();
  if (plStack_80 == (longlong *)0x0) {
    plStack_80 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plStack_80 + 1) = 1;
    *(undefined4 *)((longlong)plStack_80 + 0xc) = 1;
    *plStack_80 = (longlong)&PTR_FUN_144cb6398;
    plStack_80[2] = (longlong)&PTR__scalar_deleting_destructor__144cb5d08;
    plStack_80[3] = 0;
    plStack_80[4] = 0;
    *(undefined2 *)(plStack_80 + 6) = uVar4;
    plStack_80[5] = (longlong)&PTR__scalar_deleting_destructor__144cb5538;
    plStack_80[7] = lVar9;
    plStack_80[8] = (longlong)plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    plStack_80[9] = lVar8;
    *(int *)(plStack_80 + 10) = (int)lVar7;
    *(undefined4 *)((longlong)plStack_80 + 0x54) = uVar5;
    plStack_80[2] = (longlong)&PTR__scalar_deleting_destructor__144cb6058;
    plStack_80[0xb] = local_98;
    *(undefined4 *)(plStack_80 + 0xc) = local_90;
    local_48 = 0;
    local_40 = 0;
    local_98 = 0;
    *(undefined4 *)((longlong)plStack_80 + 100) = local_8c;
    InitializeCriticalSection((LPCRITICAL_SECTION)(plStack_80 + 0xd));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plStack_80 + 0xd),4000);
  }
  local_88 = plStack_80 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_88,local_88,local_88,param_4,param_5);
  local_78 = local_88;
  plStack_70 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
    UNLOCK();
  }
  FText::FText(param_1,&local_78);
  plVar6 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_80)(plStack_80);
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
  TArray<FFormatArgumentData,FDefaultAllocator>::~TArray<FFormatArgumentData,FDefaultAllocator>
            (&local_48);
  plVar6 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (local_98 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141606a30 FUN_141606a30 body=613 status=ok
// SIG undefined FUN_141606a30(void)

longlong FUN_141606a30(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                      undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  longlong *local_78;
  longlong *plStack_70;
  undefined **local_68;
  undefined2 local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong local_40;
  
  FUN_141607100(&local_98);
  lVar9 = DAT_1468b5998;
  if (DAT_1468b5998 == 0) {
    lVar8 = operator_new(0x110);
    lVar9 = 0;
    if (lVar8 != 0) {
      lVar9 = FUN_1415f3b10(lVar8);
    }
  }
  DAT_1468b5998 = lVar9;
  lVar9 = *param_2;
  plVar6 = (longlong *)param_2[1];
  uVar4 = *(undefined2 *)(DAT_1468b5998 + 0xd0);
  local_68 = &PTR__scalar_deleting_destructor__144cb54e0;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  lVar8 = *param_3;
  *param_3 = 0;
  lVar7 = param_3[1];
  uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
  local_40 = param_3[1];
  param_3[1] = 0;
  local_60 = uVar4;
  local_58 = lVar9;
  local_50 = plVar6;
  local_48 = lVar8;
  plStack_80 = (longlong *)operator_new();
  if (plStack_80 == (longlong *)0x0) {
    plStack_80 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plStack_80 + 1) = 1;
    *(undefined4 *)((longlong)plStack_80 + 0xc) = 1;
    *plStack_80 = (longlong)&PTR_FUN_144cb6388;
    plStack_80[2] = (longlong)&PTR__scalar_deleting_destructor__144cb5c68;
    plStack_80[3] = 0;
    plStack_80[4] = 0;
    *(undefined2 *)(plStack_80 + 6) = uVar4;
    plStack_80[5] = (longlong)&PTR__scalar_deleting_destructor__144cb54e0;
    plStack_80[7] = lVar9;
    plStack_80[8] = (longlong)plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    plStack_80[9] = lVar8;
    *(int *)(plStack_80 + 10) = (int)lVar7;
    *(undefined4 *)((longlong)plStack_80 + 0x54) = uVar5;
    plStack_80[2] = (longlong)&PTR__scalar_deleting_destructor__144cb6008;
    plStack_80[0xb] = local_98;
    *(undefined4 *)(plStack_80 + 0xc) = local_90;
    local_48 = 0;
    local_40 = 0;
    local_98 = 0;
    *(undefined4 *)((longlong)plStack_80 + 100) = local_8c;
    InitializeCriticalSection((LPCRITICAL_SECTION)(plStack_80 + 0xd));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plStack_80 + 0xd),4000);
  }
  local_88 = plStack_80 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_88,local_88,local_88,param_4,param_5);
  local_78 = local_88;
  plStack_70 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
    UNLOCK();
  }
  FText::FText(param_1,&local_78);
  plVar6 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_80 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_80)(plStack_80);
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
  TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
            (&local_48);
  plVar6 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (local_98 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141606ca0 FUN_141606ca0 body=560 status=ok
// SIG undefined FUN_141606ca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141606ca0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                      undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  longlong local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong *local_c8;
  longlong *plStack_c0;
  longlong *local_b8;
  longlong *plStack_b0;
  undefined **local_a8;
  undefined2 local_a0;
  longlong local_98;
  longlong local_90;
  undefined1 local_88 [80];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_e8 = param_5;
  FUN_141607240(&local_d8);
  lVar6 = DAT_1468b5998;
  if (DAT_1468b5998 == 0) {
    lVar5 = operator_new(0x110);
    lVar6 = 0;
    if (lVar5 != 0) {
      lVar6 = FUN_1415f3b10(lVar5);
    }
  }
  DAT_1468b5998 = lVar6;
  local_a0 = *(undefined2 *)(DAT_1468b5998 + 0xd0);
  local_98 = *param_2;
  local_90 = param_2[1];
  local_a8 = &PTR__scalar_deleting_destructor__144cb5488;
  if (local_90 != 0) {
    LOCK();
    *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
    UNLOCK();
  }
  TMap<FString,FFormatArgumentValue,FDefaultSetAllocator,FLocKeyMapFuncs<FFormatArgumentValue>_>::
  TMap<FString,FFormatArgumentValue,FDefaultSetAllocator,FLocKeyMapFuncs<FFormatArgumentValue>_>
            (local_88,param_3);
  plStack_c0 = (longlong *)operator_new(0xd0);
  if (plStack_c0 == (longlong *)0x0) {
    plStack_c0 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plStack_c0 + 1) = 1;
    *(undefined4 *)((longlong)plStack_c0 + 0xc) = 1;
    *plStack_c0 = (longlong)&PTR_FUN_144cb6378;
    plStack_c0[2] = (longlong)&PTR__scalar_deleting_destructor__144cb5bc8;
    plStack_c0[3] = 0;
    plStack_c0[4] = 0;
    plStack_c0[5] = (longlong)&PTR_FUN_144cb53d8;
    *(undefined2 *)(plStack_c0 + 6) = local_a0;
    plStack_c0[5] = (longlong)&PTR__scalar_deleting_destructor__144cb5488;
    plStack_c0[7] = local_98;
    plStack_c0[8] = local_90;
    if (local_90 != 0) {
      LOCK();
      *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
      UNLOCK();
    }
    TMap<FString,FFormatArgumentValue,FDefaultSetAllocator,FLocKeyMapFuncs<FFormatArgumentValue>_>::
    TMap<FString,FFormatArgumentValue,FDefaultSetAllocator,FLocKeyMapFuncs<FFormatArgumentValue>_>
              (plStack_c0 + 9,local_88);
    plStack_c0[2] = (longlong)&PTR__scalar_deleting_destructor__144cb5fb8;
    plStack_c0[0x13] = local_d8;
    *(undefined4 *)(plStack_c0 + 0x14) = local_d0;
    *(undefined4 *)((longlong)plStack_c0 + 0xa4) = local_cc;
    local_d8 = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(plStack_c0 + 0x15));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plStack_c0 + 0x15),4000);
  }
  local_c8 = plStack_c0 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_c8,local_c8,local_c8);
  local_b8 = local_c8;
  plStack_b0 = plStack_c0;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
    UNLOCK();
  }
  FText::FText(param_1,&local_b8);
  plVar4 = plStack_c0;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_c0 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_c0)(plStack_c0);
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
  FTextHistory_NamedFormat::~FTextHistory_NamedFormat(&local_a8);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (local_d8 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141606ed0 FormatNamedImpl body=31 status=ok
// SIG undefined FormatNamedImpl(void)

undefined8 FText::FormatNamedImpl(undefined8 param_1)

{
  FUN_141606a30();
  return param_1;
}



// FUNCTION 141606ef0 FUN_141606ef0 body=516 status=ok
// SIG undefined FUN_141606ef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_141606ef0(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined1 param_4,
             undefined1 param_5)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  int local_f4;
  longlong *local_f0;
  longlong **pplStack_e8;
  undefined4 *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  longlong **pplStack_c8;
  int local_c0;
  undefined1 local_bc;
  undefined1 local_bb;
  longlong *local_b8;
  undefined4 **local_b0;
  undefined4 local_a8 [4];
  undefined8 local_98;
  longlong *local_90;
  undefined4 local_88;
  char local_80;
  undefined4 local_78;
  longlong *local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_f8 = param_4;
  local_f0 = param_3;
  local_d8 = param_2;
  FUN_1415bac00();
  lVar7 = *param_3;
  iVar10 = 0;
  lVar9 = (longlong)(int)param_3[1] * 0x40 + lVar7;
  if (lVar7 != lVar9) {
    puVar8 = (undefined4 *)(lVar7 + 0x28);
    do {
      plVar3 = *(longlong **)(puVar8 + -2);
      plVar4 = *(longlong **)(puVar8 + -4);
      local_78 = 4;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      local_58 = *puVar8;
      local_50 = 1;
      local_f4 = iVar10;
      local_68 = plVar4;
      local_60 = plVar3;
      FUN_141611fd0(&local_68);
      lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
      iVar10 = local_f4 + -1 + *(int *)(lVar5 + 8);
      if (*(int *)(lVar5 + 8) == 0) {
        iVar10 = local_f4;
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar3 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_60)();
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
      lVar7 = lVar7 + 0x40;
      puVar8 = puVar8 + 0x10;
      param_3 = local_f0;
      param_4 = local_f8;
    } while (lVar7 != lVar9);
  }
  local_a8[0] = 4;
  puVar6 = (undefined8 *)FUN_1404b03b0();
  local_98 = *puVar6;
  local_90 = (longlong *)puVar6[1];
  if (local_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
    UNLOCK();
  }
  local_88 = *(undefined4 *)(puVar6 + 2);
  local_e0 = local_a8;
  local_b0 = &local_e0;
  pplStack_e8 = &local_b8;
  local_f0 = (longlong *)&LAB_1415fe8e0;
  local_80 = '\x01';
  local_d0 = 0x415fe8e0;
  uStack_cc = 1;
  local_bb = param_5;
  local_c0 = iVar10;
  local_bc = param_4;
  local_b8 = param_3;
  pplStack_c8 = pplStack_e8;
  FTextFormatter::Format(param_1,local_d8,&local_d0);
  plVar3 = local_90;
  if ((local_80 != '\0') && (local_80 = 0, local_90 != (longlong *)0x0)) {
    LOCK();
    plVar4 = local_90 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_90)(local_90);
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
  return param_1;
}



// FUNCTION 141607100 FUN_141607100 body=308 status=ok
// SIG undefined FUN_141607100(void)

undefined8
FUN_141607100(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4,
             undefined1 param_5)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined8 *local_58;
  char *local_50;
  undefined1 *local_48;
  undefined8 **ppuStack_40;
  int local_38;
  undefined1 local_34;
  undefined1 local_33;
  
  FUN_1415bac00();
  piVar4 = (int *)*param_3;
  iVar6 = 0;
  piVar5 = piVar4 + (longlong)*(int *)(param_3 + 1) * 0xc;
  do {
    if (piVar4 == piVar5) {
      pcVar1 = (char *)*param_2;
      if (*pcVar1 == '\0') {
        FUN_141611fd0(pcVar1 + 8);
        local_50 = (char *)(**(code **)(**(longlong **)(pcVar1 + 8) + 0x10))();
      }
      else {
        local_50 = pcVar1 + 0x48;
      }
      ppuStack_40 = &local_58;
      local_48 = &LAB_1415fe910;
      local_33 = param_5;
      local_58 = param_3;
      local_38 = iVar6;
      local_34 = param_4;
      FTextFormatter::Format(param_1,param_2,&local_48);
      return param_1;
    }
    iVar2 = *piVar4;
    if (iVar2 < 0) {
LAB_14160718c:
      iVar2 = 0;
    }
    else if (iVar2 < 4) {
      iVar2 = 0x14;
    }
    else {
      if (iVar2 != 4) goto LAB_14160718c;
      FUN_141611fd0(piVar4 + 4);
      lVar3 = (**(code **)(**(longlong **)(piVar4 + 4) + 0x10))();
      iVar2 = *(int *)(lVar3 + 8) + -1;
      if (*(int *)(lVar3 + 8) == 0) {
        iVar2 = 0;
      }
    }
    iVar6 = iVar6 + iVar2;
    piVar4 = piVar4 + 0xc;
  } while( true );
}



// FUNCTION 141607240 FUN_141607240 body=637 status=ok
// SIG undefined FUN_141607240(void)

undefined8
FUN_141607240(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined1 param_4,
             undefined1 param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined8 uVar7;
  byte bVar8;
  byte bVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  int iVar20;
  longlong *local_res18;
  undefined1 local_res20;
  undefined8 local_b8;
  longlong **pplStack_b0;
  uint local_a8;
  byte bStack_a4;
  undefined1 uStack_a3;
  undefined2 uStack_a2;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_90;
  uint uStack_8c;
  uint *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  int iStack_68;
  uint uStack_64;
  uint *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  local_res20 = param_4;
  FUN_1415bac00();
  uVar2 = *(uint *)(param_3 + 5);
  puVar1 = (uint *)(param_3 + 2);
  iVar17 = 0;
  local_b8._0_4_ = 0;
  local_b8._4_4_ = 1;
  bStack_a4 = 0;
  bVar8 = bStack_a4;
  uStack_a3 = 0;
  uVar10 = uStack_a3;
  uStack_a2 = 0;
  uVar12 = uStack_a2;
  iStack_a0 = 0;
  bStack_a4 = (byte)uVar2;
  bVar9 = bStack_a4;
  uStack_a3 = (undefined1)(uVar2 >> 8);
  uVar11 = uStack_a3;
  uStack_a2 = (undefined2)(uVar2 >> 0x10);
  uVar13 = uStack_a2;
  bStack_a4 = bVar8;
  uStack_a3 = uVar10;
  uStack_a2 = uVar12;
  if (uVar2 != 0) {
    puVar18 = (uint *)param_3[4];
    if ((uint *)param_3[4] == (uint *)0x0) {
      puVar18 = puVar1;
    }
    uVar3 = *puVar18;
    iStack_a0 = iVar17;
    local_b8._0_4_ = iVar17;
    while (uVar3 == 0) {
      lVar16 = (longlong)(int)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar20 = (int)local_b8 + 1;
      bVar6 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_b8;
      local_b8._0_4_ = iVar20;
      if (bVar6) goto LAB_14160731a;
      uVar3 = puVar18[lVar16 + 1];
    }
    local_b8._4_4_ = -uVar3 & uVar3;
    iVar20 = 0x1f;
    if (local_b8._4_4_ != 0) {
      for (; local_b8._4_4_ >> iVar20 == 0; iVar20 = iVar20 + -1) {
      }
    }
    if (local_b8._4_4_ == 0) {
      iVar20 = 0x20;
    }
    else {
      iVar20 = 0x1f - iVar20;
    }
    iVar20 = (iStack_a0 - iVar20) + 0x1f;
    bStack_a4 = (byte)iVar20;
    uStack_a3 = (undefined1)((uint)iVar20 >> 8);
    uStack_a2 = (undefined2)((uint)iVar20 >> 0x10);
    if ((int)uVar2 < iVar20) {
LAB_14160731a:
      bStack_a4 = bVar9;
      uStack_a3 = uVar11;
      uStack_a2 = uVar13;
    }
  }
  uVar3 = *(uint *)(param_3 + 5);
  uStack_80 = CONCAT26(uStack_a2,CONCAT15(uStack_a3,CONCAT14(bStack_a4,0xffffffff)));
  local_78 = CONCAT44(uStack_9c,iStack_a0);
  local_a8 = -1 << ((byte)uVar3 & 0x1f);
  iStack_68 = (int)local_b8;
  uStack_64 = local_b8._4_4_;
  uVar19 = uVar3 & 0xffffffe0;
  uStack_a3 = (undefined1)(uVar3 >> 8);
  uStack_a2 = (undefined2)(uVar3 >> 0x10);
  local_70._0_4_ = SUB84(param_3,0);
  local_70._4_4_ = (undefined4)((ulonglong)param_3 >> 0x20);
  local_98 = (undefined4)local_70;
  uStack_94 = local_70._4_4_;
  iStack_90 = (int)local_b8;
  uStack_8c = local_b8._4_4_;
  bStack_a4 = (byte)uVar3;
  if (uVar3 != uVar2) {
    puVar18 = (uint *)param_3[4];
    if ((uint *)param_3[4] == (uint *)0x0) {
      puVar18 = puVar1;
    }
    uVar15 = puVar18[(int)uVar3 >> 5] & local_a8;
    iVar20 = (int)uVar3 >> 5;
    while (uVar15 == 0) {
      uVar19 = uVar19 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar20)
      goto LAB_1416073e1;
      uVar15 = puVar18[(longlong)iVar20 + 1];
      local_a8 = 0xffffffff;
      iVar20 = iVar20 + 1;
    }
    uVar15 = -uVar15 & uVar15;
    iVar20 = 0x1f;
    if (uVar15 != 0) {
      for (; uVar15 >> iVar20 == 0; iVar20 = iVar20 + -1) {
      }
    }
    if (uVar15 == 0) {
      iVar20 = 0x20;
    }
    else {
      iVar20 = 0x1f - iVar20;
    }
    iVar20 = (uVar19 - iVar20) + 0x1f;
    bStack_a4 = (byte)iVar20;
    uStack_a3 = (undefined1)((uint)iVar20 >> 8);
    uStack_a2 = (undefined2)((uint)iVar20 >> 0x10);
    if ((int)uVar2 < iVar20) {
LAB_1416073e1:
      bStack_a4 = bVar9;
      uStack_a3 = uVar11;
      uStack_a2 = uVar13;
    }
  }
  uVar7 = CONCAT26(uStack_a2,CONCAT15(uStack_a3,CONCAT14(bStack_a4,local_a8)));
  iVar20 = 0;
  pplStack_b0 = (longlong **)puVar1;
  local_88 = puVar1;
  local_70 = param_3;
  puStack_60 = puVar1;
  uStack_58 = uStack_80;
  uStack_50 = local_78;
  while( true ) {
    if (((uStack_80._4_4_ == (int)((ulonglong)uVar7 >> 0x20)) && (local_88 == puVar1)) &&
       ((longlong *)CONCAT44(uStack_94,local_98) == param_3)) break;
    lVar5 = *(longlong *)CONCAT44(uStack_94,local_98);
    lVar16 = lVar5 + (longlong)uStack_80._4_4_ * 0x48;
    iVar4 = *(int *)(lVar5 + 0x10 + (longlong)uStack_80._4_4_ * 0x48);
    iVar14 = iVar20;
    if (-1 < iVar4) {
      if (iVar4 < 4) {
        iVar14 = 0x14;
      }
      else if (iVar4 == 4) {
        FUN_141611fd0(lVar16 + 0x20);
        lVar16 = (**(code **)(**(longlong **)(lVar16 + 0x20) + 0x10))();
        iVar14 = *(int *)(lVar16 + 8) + -1;
        if (*(int *)(lVar16 + 8) == 0) {
          iVar14 = iVar20;
        }
      }
    }
    iVar17 = iVar17 + iVar14;
    uStack_80 = CONCAT44(uStack_80._4_4_,(uint)uStack_80 & ~uStack_8c);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
  }
  pplStack_b0 = &local_res18;
  bStack_a4 = local_res20;
  uStack_a3 = param_5;
  local_b8 = &LAB_1415fe9a0;
  local_res18 = param_3;
  local_a8 = iVar17;
  FTextFormatter::Format(param_1,param_2,&local_b8);
  return param_1;
}



// FUNCTION 1416074c0 Format_NoLock body=1235 status=ok
// SIG undefined Format_NoLock(void)

longlong * FTextFormatData::Format_NoLock(char *param_1,longlong *param_2,undefined8 *param_3)

{
  void *pvVar1;
  void *pvVar2;
  ulonglong uVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int local_res8;
  int local_res20 [2];
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  
  if ((*param_1 == '\0') && (*(char *)((longlong)param_3 + 0x14) != '\0')) {
    FUN_141611fd0(param_1 + 8);
  }
  ConditionalCompile_NoLock(param_1);
  iVar7 = *(int *)(param_1 + 0x60);
  if (iVar7 != 0) {
    iVar13 = 0;
    local_50 = 0;
    iVar11 = *(int *)(param_1 + 0x84) + 1 + *(int *)(param_1 + 0x88) * *(int *)(param_3 + 2);
    local_48 = 0;
    if (0 < iVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_50,iVar11);
      iVar7 = *(int *)(param_1 + 0x60);
    }
    local_res8 = 0;
    if (0 < iVar7) {
      local_58 = 0;
      do {
        piVar8 = (int *)(*(longlong *)(param_1 + 0x58) + local_58);
        piVar5 = (int *)FUN_14160c460();
        uVar3 = local_48;
        piVar10 = piVar8 + 6;
        piVar12 = piVar10;
        if (((piVar5[2] != piVar8[2] || piVar5[3] != piVar8[3]) || piVar5[1] != piVar8[1]) ||
            *piVar8 != *piVar5) {
          piVar12 = (int *)0x0;
        }
        if (piVar12 == (int *)0x0) {
          piVar5 = (int *)FUN_14160c3e0();
          piVar12 = piVar10;
          if (((piVar5[2] != piVar8[2] || piVar5[3] != piVar8[3]) || piVar5[1] != piVar8[1]) ||
              *piVar8 != *piVar5) {
            piVar12 = (int *)0x0;
          }
          if (piVar12 == (int *)0x0) {
            piVar5 = (int *)FUN_14160c360();
            piVar12 = piVar10;
            if (((piVar5[2] != piVar8[2] || piVar5[3] != piVar8[3]) || piVar5[1] != piVar8[1]) ||
                *piVar5 != *piVar8) {
              piVar12 = (int *)0x0;
            }
            if (piVar12 == (int *)0x0) {
              piVar12 = (int *)FUN_14160c2e0();
              if (((piVar12[2] != piVar8[2] || piVar12[3] != piVar8[3]) || piVar12[1] != piVar8[1])
                  || *piVar8 != *piVar12) {
                piVar10 = (int *)0x0;
              }
              if (piVar10 != (int *)0x0) {
                iVar7 = (int)local_48 + -1;
                if ((int)local_48 < 1) {
                  iVar7 = 0;
                }
                iVar11 = ((int)local_48 < 1) + 1 + (int)local_48;
                local_48 = CONCAT44(local_48._4_4_,iVar11);
                if (local_48._4_4_ < iVar11) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50);
                }
                uVar3 = local_48;
                *(undefined2 *)(local_50 + (longlong)iVar7 * 2) = 0x7c;
                *(undefined2 *)(local_50 + 2 + (longlong)iVar7 * 2) = 0;
                iVar7 = piVar10[2];
                pvVar2 = *(void **)piVar10;
                if (iVar7 != 0) {
                  iVar11 = (int)local_48;
                  lVar9 = (longlong)(int)local_48;
                  iVar4 = (uint)((int)local_48 == 0) + (int)local_48 + iVar7;
                  local_48 = CONCAT44(local_48._4_4_,iVar4);
                  if (local_48._4_4_ < iVar4) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,uVar3 & 0xffffffff);
                  }
                  pvVar1 = (void *)(local_50 + (lVar9 - (ulonglong)(iVar11 != 0)) * 2);
                  ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar7 * 2);
                  *(undefined2 *)((longlong)pvVar1 + (longlong)iVar7 * 2) = 0;
                }
              }
            }
            else {
              local_res20[0] = local_res8;
              lVar9 = (*(code *)*param_3)(param_3[1],piVar12,local_res20);
              local_res8 = local_res8 + 1;
              if (lVar9 == 0) {
                iVar7 = (int)local_48 + -1;
                if ((int)local_48 < 1) {
                  iVar7 = 0;
                }
                iVar11 = ((int)local_48 < 1) + 1 + (int)local_48;
                local_48._0_4_ = iVar11;
                if (local_48._4_4_ < iVar11) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50);
                }
                iVar11 = (int)local_48;
                *(undefined2 *)(local_50 + (longlong)iVar7 * 2) = 0x7b;
                *(undefined2 *)(local_50 + 2 + (longlong)iVar7 * 2) = 0;
                iVar7 = piVar12[2];
                pvVar2 = *(void **)piVar12;
                if (iVar7 != 0) {
                  lVar9 = (longlong)(int)local_48;
                  local_48._0_4_ = (uint)((int)local_48 == 0) + (int)local_48 + iVar7;
                  if (local_48._4_4_ < (int)local_48) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,iVar11);
                  }
                  pvVar1 = (void *)(local_50 + (lVar9 - (ulonglong)(iVar11 != 0)) * 2);
                  ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar7 * 2);
                  *(undefined2 *)((longlong)pvVar1 + (longlong)iVar7 * 2) = 0;
                }
                iVar7 = (int)local_48 + -1;
                if ((int)local_48 < 1) {
                  iVar7 = 0;
                }
                local_48._0_4_ = ((int)local_48 < 1) + 1 + (int)local_48;
                if (local_48._4_4_ < (int)local_48) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50);
                }
                *(undefined2 *)(local_50 + (longlong)iVar7 * 2) = 0x7d;
                *(undefined2 *)(local_50 + 2 + (longlong)iVar7 * 2) = 0;
              }
              else {
                iVar7 = iVar13 + 1;
                if (((iVar7 < 0) || (*(int *)(param_1 + 0x60) <= iVar7)) ||
                   (lVar6 = FExpressionNode::Cast<TextFormatTokens::FArgumentModifierTokenSpecifier>
                                      (((longlong)iVar13 + 1) * 0x58 + *(longlong *)(param_1 + 0x58)
                                      ), lVar6 == 0)) {
                  FFormatArgumentValue::ToFormattedString
                            (lVar9,*(undefined1 *)((longlong)param_3 + 0x14),
                             *(undefined1 *)((longlong)param_3 + 0x15),&local_50);
                }
                else {
                  (**(code **)(**(longlong **)(lVar6 + 0x10) + 8))
                            (*(longlong **)(lVar6 + 0x10),lVar9,param_3,&local_50);
                  local_58 = local_58 + 0x58;
                  iVar13 = iVar7;
                }
              }
            }
          }
          else {
            iVar7 = *piVar12;
            if ((short)iVar7 != 0) {
              iVar11 = (int)local_48 + -1;
              if ((int)local_48 < 1) {
                iVar11 = 0;
              }
              iVar4 = ((int)local_48 < 1) + 1 + (int)local_48;
              local_48 = CONCAT44(local_48._4_4_,iVar4);
              if (local_48._4_4_ < iVar4) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50);
              }
              *(short *)(local_50 + (longlong)iVar11 * 2) = (short)iVar7;
              *(undefined2 *)(local_50 + 2 + (longlong)iVar11 * 2) = 0;
            }
          }
        }
        else {
          iVar7 = piVar12[2];
          pvVar2 = *(void **)piVar12;
          if (iVar7 != 0) {
            iVar11 = (int)local_48;
            lVar9 = (longlong)(int)local_48;
            iVar4 = (uint)((int)local_48 == 0) + (int)local_48 + iVar7;
            local_48 = CONCAT44(local_48._4_4_,iVar4);
            if (local_48._4_4_ < iVar4) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_50,uVar3 & 0xffffffff);
            }
            pvVar1 = (void *)(local_50 + (lVar9 - (ulonglong)(iVar11 != 0)) * 2);
            ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar7 * 2);
            *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar1) = 0;
          }
        }
        local_58 = local_58 + 0x58;
        iVar13 = iVar13 + 1;
      } while (iVar13 < *(int *)(param_1 + 0x60));
    }
    *param_2 = local_50;
    *(int *)(param_2 + 1) = (int)local_48;
    *(int *)((longlong)param_2 + 0xc) = local_48._4_4_;
    return param_2;
  }
  FString::FString(param_2,param_1 + 0x48);
  return param_2;
}



// FUNCTION 1416079a0 FromName body=64 status=ok
// SIG undefined FromName(void)

longlong FText::FromName(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong local_18 [2];
  
  uVar1 = FName::ToString(param_2,local_18);
  FUN_1415f0740(param_1,uVar1);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x12;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1416079e0 FromString body=27 status=ok
// SIG undefined FromString(void)

longlong FText::FromString(longlong param_1)

{
  FUN_1415f0740();
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x12;
  return param_1;
}



// FUNCTION 141607a00 FromString body=131 status=ok
// SIG undefined FromString(void)

longlong FText::FromString(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_10 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_10;
  _Src = (void *)*param_2;
  local_18 = (void *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 * 2);
  }
  FUN_1415f0740(param_1,&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x12;
  return param_1;
}



// FUNCTION 141607a90 FromString body=127 status=ok
// SIG undefined FromString(void)

undefined8 FTextFormat::FromString(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_10 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_10;
  _Src = (void *)*param_2;
  local_18 = (void *)0x0;
  if (local_10 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_10,0);
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 * 2);
  }
  FTextFormat(param_1,&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141607b10 FromStringTable body=241 status=ok
// SIG undefined FromStringTable(void)

undefined8
FText::FromStringTable(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4)

{
  void *pvVar1;
  longlong lVar2;
  undefined8 local_res8;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
  FUN_141607d00();
  local_30 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_30;
  pvVar1 = (void *)*param_3;
  local_38 = (void *)0x0;
  local_res8 = param_2;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
    ::_guard_xfg_dispatch_icall_nop(local_38,pvVar1,lVar2 * 2);
  }
  FStringTableRedirects::RedirectTableIdAndKey(&local_res8,&local_38,param_4);
  pvVar1 = local_38;
  lVar2 = (longlong)local_30;
  local_28 = (void *)0x0;
  local_20 = local_30;
  if (local_30 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_30,0);
    ::_guard_xfg_dispatch_icall_nop(local_28,pvVar1,lVar2 * 2);
  }
  FUN_1415f0d30(param_1,local_res8,&local_28);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return param_1;
}



// FUNCTION 141607c10 Get body=235 status=ok
// SIG undefined Get(void)

char * FInternationalization::Get(void)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  
  if (DAT_1468b53e8 == (char *)0x0) {
    pcVar2 = (char *)operator_new(0x88);
    pcVar4 = (char *)0x0;
    if (pcVar2 != (char *)0x0) {
      *pcVar2 = '\0';
      pcVar2[8] = '\0';
      pcVar2[9] = '\0';
      pcVar2[10] = '\0';
      pcVar2[0xb] = '\0';
      pcVar2[0xc] = '\0';
      pcVar2[0xd] = '\0';
      pcVar2[0xe] = '\0';
      pcVar2[0xf] = '\0';
      pcVar2[0x10] = '\0';
      pcVar2[0x11] = '\0';
      pcVar2[0x12] = '\0';
      pcVar2[0x13] = '\0';
      pcVar2[0x14] = '\0';
      pcVar2[0x15] = '\0';
      pcVar2[0x16] = '\0';
      pcVar2[0x17] = '\0';
      pcVar2[0x18] = '\x02';
      pcVar2[0x19] = '\0';
      pcVar2[0x1a] = '\0';
      pcVar2[0x1b] = '\0';
      pcVar2[0x1c] = '\0';
      pcVar2[0x1d] = '\0';
      pcVar2[0x1e] = '\0';
      pcVar2[0x1f] = '\0';
      lVar3 = operator_new(0x2c0);
      if (lVar3 != 0) {
        pcVar4 = (char *)FICUInternationalization::FICUInternationalization(lVar3,pcVar2);
      }
      *(char **)(pcVar2 + 0x20) = pcVar4;
      pcVar2[0x28] = '\0';
      pcVar2[0x29] = '\0';
      pcVar2[0x2a] = '\0';
      pcVar2[0x2b] = '\0';
      pcVar2[0x2c] = '\0';
      pcVar2[0x2d] = '\0';
      pcVar2[0x2e] = '\0';
      pcVar2[0x2f] = '\0';
      pcVar2[0x30] = '\0';
      pcVar2[0x31] = '\0';
      pcVar2[0x32] = '\0';
      pcVar2[0x33] = '\0';
      pcVar2[0x34] = '\0';
      pcVar2[0x35] = '\0';
      pcVar2[0x36] = '\0';
      pcVar2[0x37] = '\0';
      pcVar2[0x38] = '\0';
      pcVar2[0x39] = '\0';
      pcVar2[0x3a] = '\0';
      pcVar2[0x3b] = '\0';
      pcVar2[0x3c] = '\0';
      pcVar2[0x3d] = '\0';
      pcVar2[0x3e] = '\0';
      pcVar2[0x3f] = '\0';
      pcVar2[0x40] = '\0';
      pcVar2[0x41] = '\0';
      pcVar2[0x42] = '\0';
      pcVar2[0x43] = '\0';
      pcVar2[0x44] = '\0';
      pcVar2[0x45] = '\0';
      pcVar2[0x46] = '\0';
      pcVar2[0x47] = '\0';
      pcVar2[0x48] = '\0';
      pcVar2[0x49] = '\0';
      pcVar2[0x4a] = '\0';
      pcVar2[0x4b] = '\0';
      pcVar2[0x4c] = '\0';
      pcVar2[0x4d] = '\0';
      pcVar2[0x4e] = '\0';
      pcVar2[0x4f] = '\0';
      pcVar2[0x50] = '\0';
      pcVar2[0x51] = '\0';
      pcVar2[0x52] = '\0';
      pcVar2[0x53] = '\0';
      pcVar2[0x54] = '\0';
      pcVar2[0x55] = '\0';
      pcVar2[0x56] = '\0';
      pcVar2[0x57] = '\0';
      pcVar2[0x58] = '\0';
      pcVar2[0x59] = '\0';
      pcVar2[0x5a] = '\0';
      pcVar2[0x5b] = '\0';
      pcVar2[0x5c] = '\0';
      pcVar2[0x5d] = '\0';
      pcVar2[0x5e] = '\0';
      pcVar2[0x5f] = '\0';
      pcVar2[0x60] = '\0';
      pcVar2[0x61] = '\0';
      pcVar2[0x62] = '\0';
      pcVar2[99] = '\0';
      pcVar2[100] = '\0';
      pcVar2[0x65] = '\0';
      pcVar2[0x66] = '\0';
      pcVar2[0x67] = '\0';
      pcVar2[0x68] = '\0';
      pcVar2[0x69] = '\0';
      pcVar2[0x6a] = '\0';
      pcVar2[0x6b] = '\0';
      pcVar2[0x6c] = '\0';
      pcVar2[0x6d] = '\0';
      pcVar2[0x6e] = '\0';
      pcVar2[0x6f] = '\0';
      pcVar2[0x70] = '\0';
      pcVar2[0x71] = '\0';
      pcVar2[0x72] = '\0';
      pcVar2[0x73] = '\0';
      pcVar2[0x74] = '\0';
      pcVar2[0x75] = '\0';
      pcVar2[0x76] = '\0';
      pcVar2[0x77] = '\0';
      pcVar2[0x78] = '\0';
      pcVar2[0x79] = '\0';
      pcVar2[0x7a] = '\0';
      pcVar2[0x7b] = '\0';
      pcVar2[0x7c] = '\0';
      pcVar2[0x7d] = '\0';
      pcVar2[0x7e] = '\0';
      pcVar2[0x7f] = '\0';
      pcVar2[0x80] = '\0';
      pcVar2[0x81] = '\0';
      pcVar2[0x82] = '\0';
      pcVar2[0x83] = '\0';
      pcVar2[0x84] = '\0';
      pcVar2[0x85] = '\0';
      pcVar2[0x86] = '\0';
      pcVar2[0x87] = '\0';
      pcVar4 = pcVar2;
    }
    DAT_1468b53e8 = pcVar4;
    if (pcVar4 == (char *)0x0) {
      return (char *)0x0;
    }
  }
  pcVar4 = DAT_1468b53e8;
  if ((*DAT_1468b53e8 == '\0') && (DAT_1468b55d4 == '\0')) {
    DAT_1468b55d4 = 1;
    cVar1 = FUN_1415df9d0(*(undefined8 *)(DAT_1468b53e8 + 0x20));
    *pcVar4 = cVar1;
    DAT_1468b55d4 = 0;
    return DAT_1468b53e8;
  }
  return DAT_1468b53e8;
}



// FUNCTION 141607d00 FUN_141607d00 body=229 status=ok
// SIG undefined FUN_141607d00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141607d00(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b55f4) {
    _Init_thread_header(&DAT_1468b55f4);
    if (DAT_1468b55f4 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1464a96a0);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_1464a96a0,4000);
      _DAT_1464a96f8 = 0xffffffff;
      DAT_1464a96c8 = 0;
      _DAT_1464a96d0 = 0;
      DAT_1464a96e8 = 0;
      _DAT_1464a96f0 = 0;
      _DAT_1464a96fc = 0;
      DAT_1464a9708 = 0;
      _DAT_1464a9710 = 0;
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1464a9718);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_1464a9718,4000);
      atexit(`FStringTableRegistry::Get'::`2'::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&DAT_1468b55f4);
      return &DAT_1464a9650;
    }
  }
  return &DAT_1464a9650;
}



// FUNCTION 141607df0 FUN_141607df0 body=139 status=ok
// SIG undefined FUN_141607df0(void)

undefined8 * FUN_141607df0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b5618) {
    _Init_thread_header(&DAT_1468b5618);
    if (DAT_1468b5618 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_1464a9790);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_1464a9790,4000);
      atexit(`FTextCache::Get'::`2'::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&DAT_1468b5618);
      return &DAT_1464a9740;
    }
  }
  return &DAT_1464a9740;
}



// FUNCTION 141607e80 FUN_141607e80 body=123 status=ok
// SIG undefined FUN_141607e80(void)

undefined * FUN_141607e80(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b5990) {
    _Init_thread_header(&DAT_1468b5990);
    if (DAT_1468b5990 == -1) {
      FUN_1415f2d00(&DAT_1468b5900);
      atexit(`FTextFormatter::Get'::`2'::_dynamic_atexit_destructor_for__TextFormatter__);
      _Init_thread_footer(&DAT_1468b5990);
      return &DAT_1468b5900;
    }
  }
  return &DAT_1468b5900;
}



// FUNCTION 141607f00 FUN_141607f00 body=63 status=ok
// SIG undefined FUN_141607f00(void)

void FUN_141607f00(void)

{
  longlong lVar1;
  
  if (DAT_1468b5998 == 0) {
    lVar1 = operator_new(0x110);
    if (lVar1 != 0) {
      DAT_1468b5998 = FUN_1415f3b10(lVar1);
      return;
    }
    DAT_1468b5998 = 0;
  }
  return;
}



// FUNCTION 141607f40 GetCulture body=27 status=ok
// SIG undefined GetCulture(void)

undefined8 FInternationalization::GetCulture(longlong param_1,undefined8 param_2)

{
  FICUInternationalization::GetCulture(*(undefined8 *)(param_1 + 0x20));
  return param_2;
}



// FUNCTION 141607f60 GetCurrentAssetGroupCulture body=94 status=ok
// SIG undefined GetCurrentAssetGroupCulture(void)

longlong *
FInternationalization::GetCurrentAssetGroupCulture
          (longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x48);
  plVar1 = plVar3 + (longlong)*(int *)(param_1 + 0x50) * 3;
  if (plVar3 != plVar1) {
    do {
      if (*plVar3 == *param_3) {
        *param_2 = plVar3[1];
        lVar2 = plVar3[2];
        param_2[1] = lVar2;
        if (lVar2 == 0) {
          return param_2;
        }
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
        return param_2;
      }
      plVar3 = plVar3 + 3;
    } while (plVar3 != plVar1);
  }
  *param_2 = *(longlong *)(param_1 + 0x28);
  lVar2 = *(longlong *)(param_1 + 0x30);
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141608030 GetDisplayString body=122 status=ok
// SIG undefined GetDisplayString(void)

undefined8 TIndirectTextData<FTextHistory_StringTableEntry>::GetDisplayString(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)FUN_1416080f0(param_1 + 8,local_18);
  uVar4 = *puVar6;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
    return uVar4;
  }
  return uVar4;
}



// FUNCTION 1416080b0 FUN_1416080b0 body=58 status=ok
// SIG undefined FUN_1416080b0(void)

void FUN_1416080b0(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    puVar1 = (undefined8 *)FUN_1404b03b0();
    FUN_141611fd0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001416080e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*puVar1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1416080f0 FUN_1416080f0 body=566 status=ok
// SIG undefined FUN_1416080f0(void)

longlong * FUN_1416080f0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong local_18;
  longlong *local_10;
  
  FUN_14160bd00(param_1,&local_18,0);
  if (local_18 != 0) {
    lVar4 = *(longlong *)(local_18 + 0x20);
    plVar5 = *(longlong **)(local_18 + 0x28);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      *param_2 = lVar4;
      param_2[1] = (longlong)plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
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
      goto LAB_14160820c;
    }
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b55f0) {
    _Init_thread_header(&DAT_1468b55f0);
    if (DAT_1468b55f0 == -1) {
      puVar6 = (undefined8 *)operator_new(0x20);
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
      }
      else {
        *(undefined4 *)(puVar6 + 1) = 1;
        *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
        *puVar6 = &PTR_FUN_144cb51c0;
        puVar6[2] = 0;
        puVar6[3] = 0x1d;
        if (*(int *)((longlong)puVar6 + 0x1c) < 0x1d) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar6 + 2,0);
        }
        FGenericPlatformString::Memcpy(puVar6[2],L"<MISSING STRING TABLE ENTRY>",0x3a);
      }
      DAT_1468b55e0 = puVar6 + 2;
      DAT_1468b55e8 = puVar6;
      SharedPointerInternals::EnableSharedFromThis(&DAT_1468b55e0,DAT_1468b55e0,DAT_1468b55e0);
      atexit(FUN_143e789b0);
      _Init_thread_footer(&DAT_1468b55f0);
    }
  }
  *param_2 = (longlong)DAT_1468b55e0;
  param_2[1] = (longlong)DAT_1468b55e8;
  if (DAT_1468b55e8 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(DAT_1468b55e8 + 1) = *(int *)(DAT_1468b55e8 + 1) + 1;
    UNLOCK();
  }
LAB_14160820c:
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
  return param_2;
}



// FUNCTION 141608330 GetDisplayString body=10 status=ok
// SIG undefined GetDisplayString(void)

void FTextInspector::GetDisplayString(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141608336. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_1 + 0x10))();
  return;
}



// FUNCTION 141608340 FUN_141608340 body=1656 status=ok
// SIG undefined FUN_141608340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_141608340(char *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  ulonglong uVar8;
  longlong *plVar9;
  short sVar10;
  BOOL BVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined2 *puVar16;
  short *psVar17;
  void *pvVar18;
  void **ppvVar19;
  longlong lVar20;
  void *pvVar21;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  undefined2 local_1a8 [2];
  int local_1a4;
  undefined4 local_1a0 [2];
  longlong *local_198;
  longlong *local_190;
  int local_188;
  undefined4 local_184;
  int local_180 [2];
  longlong local_178;
  void *local_170;
  int local_168;
  undefined4 uStack_164;
  void *local_160;
  int local_158;
  undefined4 uStack_154;
  char *local_150;
  longlong local_148;
  void *local_140;
  undefined8 local_138;
  void *local_130;
  undefined8 local_128;
  undefined1 local_120 [8];
  undefined8 *local_118;
  longlong *local_110;
  undefined8 *local_108;
  undefined8 local_100;
  longlong *plStack_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined1 local_e0;
  int local_dc;
  undefined8 *local_d8;
  undefined2 *local_d0;
  undefined4 *local_c8;
  undefined1 *local_c0;
  undefined4 *local_b8;
  undefined8 *local_b0;
  undefined1 local_a8 [48];
  undefined4 local_78;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_58;
  short sVar11;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  iVar13 = 0;
  local_1a0[0] = 0;
  local_150 = param_1;
  local_118 = param_3;
  local_108 = param_4;
  BVar12 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar12 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if ((*(int *)(param_3 + 1) < 2) && (*(int *)(param_4 + 1) < 2)) {
    if (param_5 == (undefined8 *)0x0) {
      ppvVar19 = &local_140;
      local_140 = (void *)0x0;
      local_138 = 0;
      bVar7 = true;
      bVar6 = false;
      pvVar18 = local_170;
    }
    else {
      local_168 = *(int *)(param_5 + 1);
      lVar20 = (longlong)local_168;
      pvVar21 = (void *)*param_5;
      local_170 = (void *)0x0;
      if (local_168 == 0) {
        ppvVar19 = &local_170;
        uStack_164 = 0;
        bVar7 = false;
        bVar6 = true;
        pvVar18 = (void *)0x0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_170,local_168,0);
        pvVar18 = local_170;
        _guard_xfg_dispatch_icall_nop(local_170,pvVar21,lVar20 * 2);
        ppvVar19 = &local_170;
        bVar7 = false;
        bVar6 = true;
      }
    }
    pvVar21 = local_140;
    puVar14 = (undefined8 *)operator_new(0x20);
    if (puVar14 != (undefined8 *)0x0) {
      pvVar18 = *ppvVar19;
      *(undefined4 *)(puVar14 + 1) = 1;
      *(undefined4 *)((longlong)puVar14 + 0xc) = 1;
      *ppvVar19 = (void *)0x0;
      *puVar14 = &PTR_FUN_144cb51c0;
      uVar4 = *(undefined4 *)((longlong)ppvVar19 + 0xc);
      puVar14[2] = pvVar18;
      uVar5 = *(undefined4 *)(ppvVar19 + 1);
      ppvVar19[1] = (void *)0x0;
      *(undefined4 *)(puVar14 + 3) = uVar5;
      *(undefined4 *)((longlong)puVar14 + 0x1c) = uVar4;
      pvVar18 = local_170;
      pvVar21 = local_140;
    }
    puVar1 = puVar14 + 2;
    *param_2 = (longlong)puVar1;
    param_2[1] = (longlong)puVar14;
    SharedPointerInternals::EnableSharedFromThis(param_2,puVar1,puVar1);
    if ((bVar7) && (pvVar21 != (void *)0x0)) {
      FMemory::Free(pvVar21);
    }
    if ((bVar6) && (pvVar18 != (void *)0x0)) {
      FMemory::Free(pvVar18);
    }
  }
  else {
    if (param_5 != (undefined8 *)0x0) {
      if (*(int *)(param_5 + 1) == 0) {
        puVar16 = &DAT_143f3eda8;
      }
      else {
        puVar16 = (undefined2 *)*param_5;
      }
      iVar13 = FCrc::StrCrc32<wchar_t>(puVar16,0);
    }
    local_178 = 0;
    local_1b8 = &local_148;
    local_148 = 0;
    local_110 = (longlong *)(param_1 + 0x30);
    local_1a4 = iVar13;
    FUN_141604aa0(local_110,param_3,&local_178,param_4);
    lVar20 = local_148;
    if (local_148 == 0) {
      if (param_5 == (undefined8 *)0x0) {
        ppvVar19 = &local_130;
        local_130 = (void *)0x0;
        local_128 = 0;
        bVar7 = false;
        bVar6 = true;
        pvVar18 = local_160;
      }
      else {
        local_158 = *(int *)(param_5 + 1);
        lVar20 = (longlong)local_158;
        pvVar21 = (void *)*param_5;
        local_160 = (void *)0x0;
        if (local_158 == 0) {
          ppvVar19 = &local_160;
          uStack_154 = 0;
          bVar7 = true;
          bVar6 = false;
          pvVar18 = (void *)0x0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_160,local_158,0);
          pvVar18 = local_160;
          _guard_xfg_dispatch_icall_nop(local_160,pvVar21,lVar20 * 2);
          ppvVar19 = &local_160;
          bVar7 = true;
          bVar6 = false;
        }
      }
      pvVar21 = local_130;
      local_190 = (longlong *)operator_new(0x20);
      if (local_190 == (longlong *)0x0) {
        local_190 = (longlong *)0x0;
      }
      else {
        pvVar18 = *ppvVar19;
        *(undefined4 *)(local_190 + 1) = 1;
        *(undefined4 *)((longlong)local_190 + 0xc) = 1;
        *local_190 = (longlong)&PTR_FUN_144cb51c0;
        local_190[2] = (longlong)pvVar18;
        *ppvVar19 = (void *)0x0;
        *(undefined4 *)(local_190 + 3) = *(undefined4 *)(ppvVar19 + 1);
        ppvVar19[1] = (void *)0x0;
        *(undefined4 *)((longlong)local_190 + 0x1c) = *(undefined4 *)((longlong)ppvVar19 + 0xc);
        pvVar18 = local_160;
        pvVar21 = local_130;
      }
      local_198 = local_190 + 2;
      SharedPointerInternals::EnableSharedFromThis(&local_198,local_198,local_198);
      if ((bVar6) && (pvVar21 != (void *)0x0)) {
        FMemory::Free(pvVar21);
      }
      if ((bVar7) && (pvVar18 != (void *)0x0)) {
        FMemory::Free(pvVar18);
      }
      plVar9 = local_198;
      uVar8 = DAT_1464a93f8;
      pvVar18 = DAT_1464a93f0;
      if ((((int)local_198[1] < 2) && (*local_150 == '\0')) &&
         ((void **)local_198 != &DAT_1464a93f0)) {
        iVar13 = (int)DAT_1464a93f8;
        *(int *)(local_198 + 1) = iVar13;
        if ((iVar13 == 0) && (*(int *)((longlong)local_198 + 0xc) == 0)) {
          *(undefined4 *)((longlong)local_198 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(local_198,uVar8 & 0xffffffff);
          _guard_xfg_dispatch_icall_nop((void *)*plVar9,pvVar18,(longlong)iVar13 * 2);
        }
      }
      local_e8 = local_190;
      local_100 = 0;
      plStack_f8 = (longlong *)0x0;
      if (local_190 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_190 + 1) = (int)local_190[1] + 1;
        UNLOCK();
      }
      local_e0 = 0;
      local_dc = local_1a4;
      lVar20 = local_178;
      local_f0 = local_198;
      if (local_178 == 0) {
        _guard_xfg_dispatch_icall_nop(local_a8,0,0x50);
        if (*(int *)(local_118 + 1) == 0) {
          puVar16 = &DAT_143f3eda8;
        }
        else {
          puVar16 = (undefined2 *)*local_118;
        }
        local_184 = FCrc::StrCrc32<wchar_t>(puVar16,0);
        plVar9 = local_110;
        local_c8 = &local_184;
        local_78 = 0xffffffff;
        local_c0 = local_a8;
        local_74 = 0;
        local_68 = 0;
        local_60 = 0;
        FUN_1415eae10(local_110,local_180,&local_c8,0);
        local_60 = 0;
        lVar20 = *plVar9 + 8 + (longlong)local_180[0] * 0x60;
        local_178 = lVar20;
        if (local_68 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<TTuple<int,FIndividualOcclusionHistory>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (local_a8);
      }
      puVar16 = &DAT_143f3eda8;
      if (*(int *)(local_108 + 1) != 0) {
        puVar16 = (undefined2 *)*local_108;
      }
      local_1a0[0] = FCrc::StrCrc32<wchar_t>(puVar16,0);
      local_b8 = local_1a0;
      local_b0 = &local_100;
      FUN_1415eafe0(lVar20,&local_150,&local_b8,0);
      plVar9 = local_e8;
      *param_2 = (longlong)local_198;
      param_2[1] = (longlong)local_190;
      if (local_190 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_190 + 1) = (int)local_190[1] + 1;
        UNLOCK();
      }
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_e8 + 1;
        lVar20 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar20 == 1) {
          (**(code **)*local_e8)(local_e8);
          LOCK();
          piVar3 = (int *)((longlong)plVar9 + 0xc);
          iVar13 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      plVar9 = plStack_f8;
      if (plStack_f8 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_f8 + 1;
        lVar20 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar20 == 1) {
          (**(code **)*plStack_f8)(plStack_f8);
          LOCK();
          piVar3 = (int *)((longlong)plVar9 + 0xc);
          iVar13 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      plVar9 = local_190;
      if (local_190 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_190 + 1;
        lVar20 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar20 == 1) {
          (**(code **)*local_190)(local_190);
          LOCK();
          piVar3 = (int *)((longlong)plVar9 + 0xc);
          iVar13 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
    }
    else {
      if ((iVar13 != *(int *)(local_148 + 0x24)) && (param_5 != (undefined8 *)0x0)) {
        *(int *)(local_148 + 0x24) = iVar13;
        puVar14 = (undefined8 *)(local_148 + 0x10);
        FString::operator=(*puVar14,param_5);
        TSet<TTuple<TSharedRef<FString,1>,unsigned_short>,TDefaultMapHashableKeyFuncs<TSharedRef<FString,1>,unsigned_short,0>,FDefaultSetAllocator>
        ::FindId(param_1 + 0x80,&local_188,puVar14);
        if (local_188 == -1) {
          lVar15 = 0;
        }
        else {
          lVar15 = (longlong)local_188 * 0x20 + *(longlong *)(param_1 + 0x80);
        }
        psVar17 = (short *)(lVar15 + 0x10);
        if (lVar15 == 0) {
          psVar17 = (short *)0x0;
        }
        if (psVar17 == (short *)0x0) {
          local_d0 = local_1a8;
          local_1a8[0] = 1;
          local_d8 = puVar14;
          FUN_1415ebd80(param_1 + 0x80,local_120,&local_d8,0);
        }
        else {
          sVar11 = *psVar17;
          do {
            sVar10 = sVar11 + 1;
            sVar11 = 0;
          } while (sVar10 == 0);
          *psVar17 = sVar10;
        }
        *(undefined1 *)(lVar20 + 0x20) = 0;
      }
      *param_2 = *(longlong *)(lVar20 + 0x10);
      lVar20 = *(longlong *)(lVar20 + 0x18);
      param_2[1] = lVar20;
      if (lVar20 != 0) {
        LOCK();
        *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
        UNLOCK();
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return param_2;
}



// FUNCTION 1416089c0 GetFormatArgumentNames body=194 status=ok
// SIG undefined GetFormatArgumentNames(void)

void FTextFormatArgumentModifier_GenderForm::GetFormatArgumentNames
               (longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  BOOL BVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  }
  FUN_141608e20(lVar1,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  lVar1 = *(longlong *)(param_1 + 0x20);
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  }
  FUN_141608e20(lVar1,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  lVar1 = *(longlong *)(param_1 + 0x30);
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  }
  FUN_141608e20(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000141608a7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  return;
}



// FUNCTION 141608a90 FUN_141608a90 body=546 status=ok
// SIG undefined FUN_141608a90(void)

void FUN_141608a90(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  BOOL BVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  }
  FUN_141608e20(lVar1,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  lVar1 = *(longlong *)(param_1 + 0x20);
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  }
  FUN_141608e20(lVar1,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  lVar1 = *(longlong *)(param_1 + 0x30);
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  }
  FUN_141608e20(lVar1,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  lVar1 = *(longlong *)(param_1 + 0x60);
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  }
  FUN_141608e20(lVar1,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  lVar1 = *(longlong *)(param_1 + 0x70);
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  }
  FUN_141608e20(lVar1,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  lVar1 = *(longlong *)(param_1 + 0x80);
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  }
  FUN_141608e20(lVar1,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  lVar1 = *(longlong *)(param_1 + 0x40);
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  }
  FUN_141608e20(lVar1,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  lVar1 = *(longlong *)(param_1 + 0x50);
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  }
  FUN_141608e20(lVar1,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  lVar1 = *(longlong *)(param_1 + 0x90);
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  }
  FUN_141608e20(lVar1,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  lVar1 = *(longlong *)(param_1 + 0xa0);
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  }
  FUN_141608e20(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000141608cab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  return;
}



// FUNCTION 141608cc0 GetFormatArgumentNames body=341 status=ok
// SIG undefined GetFormatArgumentNames(void)

void FTextFormatArgumentModifier_PluralForm::GetFormatArgumentNames
               (longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  BOOL BVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  }
  FUN_141608e20(lVar1,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  lVar1 = *(longlong *)(param_1 + 0x28);
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  }
  FUN_141608e20(lVar1,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  lVar1 = *(longlong *)(param_1 + 0x38);
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  }
  FUN_141608e20(lVar1,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  lVar1 = *(longlong *)(param_1 + 0x48);
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  }
  FUN_141608e20(lVar1,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  lVar1 = *(longlong *)(param_1 + 0x58);
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  }
  FUN_141608e20(lVar1,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  lVar1 = *(longlong *)(param_1 + 0x68);
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  }
  FUN_141608e20(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000141608e0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  return;
}



// FUNCTION 141608e20 FUN_141608e20 body=442 status=ok
// SIG undefined FUN_141608e20(void)

void FUN_141608e20(longlong param_1,longlong *param_2)

{
  int iVar1;
  wchar_t *_Source;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  wchar_t *pwVar10;
  uint uVar11;
  int *local_res8;
  wchar_t *local_38;
  undefined8 local_30;
  
  FTextFormatData::ConditionalCompile_NoLock();
  if (*(int *)(param_1 + 0x80) == 2) {
    piVar6 = *(int **)(param_1 + 0x58);
    piVar9 = piVar6 + (longlong)*(int *)(param_1 + 0x60) * 0x16;
    for (; piVar6 != piVar9; piVar6 = piVar6 + 0x16) {
      piVar8 = (int *)0x0;
      piVar2 = (int *)FUN_14160c360();
      local_res8 = piVar6 + 6;
      if (((piVar2[2] != piVar6[2] || piVar2[3] != piVar6[3]) || piVar2[1] != piVar6[1]) ||
          *piVar6 != *piVar2) {
        local_res8 = piVar8;
      }
      if (local_res8 == (int *)0x0) {
        piVar5 = (int *)FUN_14160c2e0();
        piVar2 = piVar6 + 6;
        if (((piVar5[2] != piVar6[2] || piVar5[3] != piVar6[3]) || piVar5[1] != piVar6[1]) ||
            *piVar5 != *piVar6) {
          piVar2 = piVar8;
        }
        if (piVar2 != (int *)0x0) {
          (**(code **)(**(longlong **)(piVar2 + 4) + 0x10))(*(longlong **)(piVar2 + 4),param_2);
        }
      }
      else {
        lVar3 = FUN_1415ed0c0(param_2,&local_res8);
        if (lVar3 == 0) {
          local_38 = (wchar_t *)0x0;
          iVar1 = local_res8[2];
          _Source = *(wchar_t **)local_res8;
          local_30._0_4_ = iVar1 + 1;
          if (iVar1 == 0) {
            local_30._0_4_ = 0;
          }
          local_30._4_4_ = 0;
          if ((int)local_30 < 1) {
LAB_141608f2f:
            uVar11 = (uint)piVar8;
            pwVar10 = local_38;
            iVar7 = (int)local_30;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
            uVar11 = local_30._4_4_;
            iVar7 = (int)local_30;
            pwVar10 = local_38;
            piVar8 = (int *)(ulonglong)local_30._4_4_;
            if ((int)local_30 < 1) goto LAB_141608f2f;
            wcsncpy(local_38,_Source,(longlong)iVar1);
            pwVar10[iVar1] = L'\0';
          }
          iVar1 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
          }
          local_38 = (wchar_t *)0x0;
          puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
          *puVar4 = pwVar10;
          *(int *)(puVar4 + 1) = iVar7;
          local_30 = 0;
          *(uint *)((longlong)puVar4 + 0xc) = uVar11;
        }
      }
    }
  }
  return;
}



// FUNCTION 141609000 GetHistoricFormatData body=1944 status=ok
// SIG undefined GetHistoricFormatData(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FTextHistory_ArgumentDataFormat::GetHistoricFormatData
               (longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  void *_Dst;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  undefined1 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined4 *puVar16;
  longlong lVar17;
  undefined8 *_Src;
  undefined1 auStack_218 [32];
  int local_1f8 [2];
  undefined4 local_1f0 [2];
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  longlong *local_1d8;
  undefined8 *local_1d0;
  undefined8 local_1c8;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a0 [8];
  longlong *local_198;
  ulonglong local_180;
  ulonglong local_150;
  ulonglong local_120;
  undefined4 local_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  char local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  int local_94;
  undefined1 local_90 [8];
  undefined1 *local_88;
  int local_80;
  ulonglong local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  local_1e0 = (undefined8 *)(param_1 + 0x10);
  local_1d8 = param_3;
  local_1d0 = param_2;
  puVar10 = (undefined8 *)FTextFormat::GetSourceText(local_1e0,local_1a0);
  plVar11 = (longlong *)(**(code **)(*(longlong *)*puVar10 + 0x28))();
  (**(code **)(*plVar11 + 0x40))(plVar11,puVar10,param_3);
  if (local_198 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_198 + 1;
    lVar14 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_198)(local_198);
      LOCK();
      piVar1 = (int *)((longlong)local_198 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_198 + 8))(local_198,1);
      }
    }
  }
  lVar14 = *(longlong *)(param_1 + 0x20);
  lVar17 = (longlong)*(int *)(param_1 + 0x28) * 0x40 + lVar14;
  for (; lVar14 != lVar17; lVar14 = lVar14 + 0x40) {
    if (*(char *)(lVar14 + 0x10) == '\x04') {
      plVar11 = (longlong *)(**(code **)(**(longlong **)(lVar14 + 0x18) + 0x28))();
      (**(code **)(*plVar11 + 0x40))(plVar11,lVar14 + 0x18,param_3);
    }
  }
  local_c8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_88 = (undefined1 *)0x0;
  local_80 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    FUN_14089d530(&local_c8);
  }
  puVar6 = *(undefined4 **)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x28);
  if (puVar6 != puVar6 + (longlong)iVar4 * 0x10) {
    puVar16 = puVar6 + 10;
    do {
      puVar10 = (undefined8 *)FUN_1404b03b0();
      plVar11 = (longlong *)puVar10[1];
      local_e8 = *puVar10;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      local_d8 = *(undefined4 *)(puVar10 + 2);
      cVar8 = *(char *)(puVar16 + -6);
      local_e0 = plVar11;
      if (cVar8 == '\0') {
        local_120 = (ulonglong)(int)puVar16[2];
        local_f8 = 0;
        bVar7 = false;
        local_d0 = '\0';
        plVar15 = plVar11;
        local_f0 = local_120;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar11 + 1;
          lVar14 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*plVar11)();
            plVar15 = local_e0;
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_e0 + 8))(local_e0,1);
            }
          }
        }
      }
      else {
        if (cVar8 == '\x02') {
          local_f8 = 2;
          local_150 = CONCAT44((int)(local_150 >> 0x20),puVar16[3]);
          local_d0 = '\0';
          local_f0 = local_150;
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar15 = plVar11 + 1;
            lVar14 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*plVar11)(plVar11);
              plVar15 = local_e0;
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_e0 + 8))(local_e0,1);
                bVar7 = false;
                goto LAB_141609290;
              }
            }
          }
        }
        else {
          if (cVar8 != '\x05') {
            local_60 = *(longlong **)(puVar16 + -2);
            local_68 = *(undefined8 *)(puVar16 + -4);
            if (local_60 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_60 + 1) = (int)local_60[1] + 1;
              UNLOCK();
            }
            local_58 = *puVar16;
            local_f0 = local_70;
            local_f8 = 4;
            if (plVar11 != (longlong *)0x0) {
              LOCK();
              plVar15 = plVar11 + 1;
              lVar14 = *plVar15;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*plVar11)(plVar11);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*local_e0 + 8))(local_e0,1);
                }
              }
            }
            plVar11 = local_60;
            local_e8 = local_68;
            if (local_60 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_60 + 1) = (int)local_60[1] + 1;
              UNLOCK();
            }
            bVar7 = true;
            local_d8 = local_58;
            local_d0 = '\x01';
            plVar15 = local_60;
            local_e0 = local_60;
            if (local_60 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_60 + 1;
              lVar14 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              local_e0 = local_60;
              if ((int)lVar14 == 1) {
                local_e0 = local_60;
                (**(code **)*local_60)(local_60);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                plVar15 = local_e0;
                if (iVar5 == 1) {
                  (**(code **)(*local_60 + 8))(local_60,1);
                  plVar15 = local_e0;
                }
              }
            }
            goto LAB_141609290;
          }
          local_180 = (ulonglong)*(byte *)(puVar16 + 4);
          local_f8 = 5;
          local_d0 = '\0';
          local_f0 = local_180;
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar15 = plVar11 + 1;
            lVar14 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*plVar11)(plVar11);
              plVar15 = local_e0;
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_e0 + 8))(local_e0,1);
                bVar7 = false;
                goto LAB_141609290;
              }
            }
          }
        }
        bVar7 = false;
        plVar15 = local_e0;
      }
LAB_141609290:
      TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::AddUninitialized(&local_c8,local_1f0);
      puVar10 = local_1e8;
      FString::FString(local_1e8,puVar16 + -10);
      puVar10[3] = local_f0;
      *(undefined4 *)(puVar10 + 2) = local_f8;
      *(undefined1 *)(puVar10 + 7) = 0;
      _Src = puVar10;
      if (bVar7) {
        puVar10[4] = local_e8;
        puVar10[5] = plVar15;
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
          plVar15 = local_e0;
          _Src = local_1e8;
        }
        *(undefined4 *)(puVar10 + 6) = local_d8;
        *(undefined1 *)(puVar10 + 7) = 1;
      }
      *(undefined4 *)(_Src + 8) = 0xffffffff;
      if ((int)local_c0 - local_94 == 1) {
LAB_1416096ea:
        cVar8 = TSet<TTuple<FString,FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FLocKeyMapFuncs<FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FDefaultSetAllocator>
                ::ConditionalRehash(&local_c8,(int)local_c0 - local_94,0);
        if (cVar8 == '\0') {
          if (*(int *)(_Src + 1) == 0) {
            puVar12 = &DAT_143f3eda8;
          }
          else {
            puVar12 = (undefined2 *)*_Src;
          }
          uVar9 = FCrc::StrCrc32<wchar_t>(puVar12,0);
          uVar9 = uVar9 & local_80 - 1U;
          *(uint *)((longlong)_Src + 0x44) = uVar9;
          puVar13 = local_90;
          if (local_88 != (undefined1 *)0x0) {
            puVar13 = local_88;
          }
          *(undefined4 *)(_Src + 8) =
               *(undefined4 *)(puVar13 + (longlong)(int)(local_80 - 1U & uVar9) * 4);
          puVar13 = local_90;
          if (local_88 != (undefined1 *)0x0) {
            puVar13 = local_88;
          }
          *(undefined4 *)(puVar13 + (longlong)(int)(local_80 - 1U & uVar9) * 4) = local_1f0[0];
        }
      }
      else {
        TSet<TTuple<FString,FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FLocKeyMapFuncs<FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FDefaultSetAllocator>
        ::FindId(&local_c8,local_1f8,_Src);
        if (local_1f8[0] == -1) {
          goto LAB_1416096ea;
        }
        _Dst = (void *)(local_c8 + (longlong)local_1f8[0] * 0x48);
        UE4Tuple_Private::
        TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FFormatArgumentValue>::
        ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FFormatArgumentValue>(_Dst);
        ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,0x40);
        TSparseArray<TSetElement<TTuple<FUniqueNetIdNull,TSharedRef<FUserOnlineAccountNull,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized(&local_c8,local_1f0[0]);
      }
      plVar11 = local_e0;
      if ((local_d0 != '\0') && (plVar15 != (longlong *)0x0)) {
        LOCK();
        plVar15 = plVar15 + 1;
        lVar14 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_e0 + 8))(local_e0,1);
          }
        }
      }
      puVar3 = puVar16 + 6;
      puVar16 = puVar16 + 0x10;
    } while (puVar3 != puVar6 + (longlong)iVar4 * 0x10);
  }
  plVar15 = local_1d8;
  local_1b0 = *local_1e0;
  plVar11 = (longlong *)local_1e0[1];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  iVar4 = (int)local_1d8[1];
  *(int *)(local_1d8 + 1) = iVar4 + 1;
  if (*(int *)((longlong)local_1d8 + 0xc) < iVar4 + 1) {
    TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
              (local_1d8,iVar4);
  }
  local_1c8 = *local_1d0;
  puVar10 = (undefined8 *)((longlong)iVar4 * 0x78 + *plVar15);
  plVar15 = (longlong *)local_1d0[1];
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_1b8 = *(undefined4 *)(local_1d0 + 2);
  *puVar10 = local_1c8;
  puVar10[1] = plVar15;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar10 + 2) = local_1b8;
  puVar10[3] = local_1b0;
  puVar10[4] = plVar11;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  puVar10[5] = 0;
  puVar10[6] = 0;
  puVar10[9] = 0;
  puVar10[10] = 0;
  *(undefined4 *)(puVar10 + 0xb) = 0xffffffff;
  *(undefined4 *)((longlong)puVar10 + 0x5c) = 0;
  puVar10[0xd] = 0;
  *(undefined4 *)(puVar10 + 0xe) = 0;
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(puVar10 + 5,&local_c8);
  if (local_88 == (undefined1 *)0x0) {
    ::_guard_xfg_dispatch_icall_nop(puVar10 + 0xc,local_90,4);
  }
  if (puVar10[0xd] != 0) {
    FMemory::Free();
  }
  puVar10[0xd] = local_88;
  local_88 = (undefined1 *)0x0;
  *(int *)(puVar10 + 0xe) = local_80;
  local_80 = 0;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar15 + 1;
    lVar14 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar11 + 1;
    lVar14 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  local_80 = 0;
  if (local_88 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(&local_c8,0);
  if (local_a8 != 0) {
    FMemory::Free();
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1416097a0 GetHistoricFormatData body=979 status=ok
// SIG undefined GetHistoricFormatData(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FTextHistory_NamedFormat::GetHistoricFormatData
               (longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  uint *puVar15;
  undefined1 auStack_148 [32];
  int local_128;
  uint uStack_124;
  uint *puStack_120;
  undefined4 local_118;
  int iStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  undefined8 uStack_100;
  uint *local_f8;
  uint uStack_f0;
  int iStack_ec;
  int local_e8;
  undefined4 uStack_e4;
  int local_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  uint *puStack_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 uStack_b4;
  undefined1 local_b0 [8];
  longlong *local_a8;
  longlong local_98 [4];
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  puVar9 = (undefined8 *)FTextFormat::GetSourceText((undefined8 *)(param_1 + 0x10),local_b0);
  plVar10 = (longlong *)(**(code **)(*(longlong *)*puVar9 + 0x28))();
  (**(code **)(*plVar10 + 0x40))(plVar10,puVar9,param_3);
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_a8 + 1;
    lVar14 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
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
  uStack_124 = 1;
  plVar10 = (longlong *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x48);
  puStack_120 = (uint *)(param_1 + 0x30);
  local_128 = 0;
  iStack_114 = 0;
  iStack_110 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)(param_1 + 0x40);
    if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
      puVar15 = puStack_120;
    }
    uVar4 = *puVar15;
    iStack_110 = 0;
    local_128 = 0;
    while (uVar4 == 0) {
      lVar14 = (longlong)local_128;
      iStack_110 = iStack_110 + 0x20;
      iVar13 = local_128 + 1;
      bVar8 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_128;
      local_128 = iVar13;
      if (bVar8) goto LAB_1416098f8;
      uVar4 = puVar15[lVar14 + 1];
    }
    uStack_124 = -uVar4 & uVar4;
    local_e0 = 0x1f;
    if (uStack_124 != 0) {
      for (; uStack_124 >> local_e0 == 0; local_e0 = local_e0 + -1) {
      }
    }
    if (uStack_124 == 0) {
      iVar13 = 0x20;
    }
    else {
      iVar13 = 0x1f - local_e0;
    }
    iStack_114 = (iStack_110 - iVar13) + 0x1f;
    if (iVar3 < iStack_114) {
LAB_1416098f8:
      iStack_114 = iVar3;
    }
  }
  local_118 = 0xffffffff;
  uStack_100 = CONCAT44(uStack_124,local_128);
  uStack_c0 = 0xffffffff;
  iStack_bc = iStack_114;
  iStack_b8 = iStack_110;
  uStack_b4 = uStack_10c;
  uStack_f0 = 0xffffffff;
  iStack_ec = iStack_114;
  local_e8 = iStack_110;
  uStack_e4 = uStack_10c;
  local_108 = plVar10;
  local_f8 = puStack_120;
  local_d8 = plVar10;
  uStack_d0 = uStack_100;
  puStack_c8 = puStack_120;
  if (iStack_114 < iVar3) {
    do {
      lVar11 = (longlong)iStack_ec;
      lVar14 = *local_108;
      if (*(int *)(lVar14 + 0x10 + lVar11 * 0x48) == 4) {
        plVar12 = (longlong *)(**(code **)(**(longlong **)(lVar14 + 0x20 + lVar11 * 0x48) + 0x28))()
        ;
        (**(code **)(*plVar12 + 0x40))(plVar12,lVar14 + lVar11 * 0x48 + 0x20,param_3);
      }
      uStack_f0 = uStack_f0 & ~uStack_100._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_100);
    } while (iStack_ec < (int)local_f8[6]);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  TSet<TTuple<FString,FFormatArgumentValue>,FLocKeyMapFuncs<FFormatArgumentValue>,FDefaultSetAllocator>
  ::operator=(local_98,plVar10);
  plVar10 = *(longlong **)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  iVar3 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar3 + 1) {
    TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
              (param_3,iVar3);
  }
  uVar7 = *param_2;
  puVar9 = (undefined8 *)((longlong)iVar3 * 0x78 + *param_3);
  plVar12 = (longlong *)param_2[1];
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  uVar5 = *(undefined4 *)(param_2 + 2);
  *puVar9 = uVar7;
  puVar9[1] = plVar12;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar9 + 2) = uVar5;
  puVar9[3] = uVar6;
  puVar9[4] = plVar10;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  puVar9[5] = 0;
  puVar9[6] = 0;
  puVar9[9] = 0;
  puVar9[10] = 0;
  *(undefined4 *)(puVar9 + 0xb) = 0xffffffff;
  *(undefined4 *)((longlong)puVar9 + 0x5c) = 0;
  puVar9[0xd] = 0;
  *(undefined4 *)(puVar9 + 0xe) = 0;
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(puVar9 + 5,local_98);
  if (local_58 == 0) {
    ::_guard_xfg_dispatch_icall_nop(puVar9 + 0xc,local_60,4);
  }
  if (puVar9[0xd] != 0) {
    FMemory::Free();
  }
  puVar9[0xd] = local_58;
  local_58 = 0;
  *(undefined4 *)(puVar9 + 0xe) = local_50;
  local_50 = 0;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar12 + 1;
    lVar14 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
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
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar10 + 1;
    lVar14 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  local_50 = 0;
  if (local_58 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(local_98,0);
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141609b80 GetHistoricFormatData body=1283 status=ok
// SIG undefined GetHistoricFormatData(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FTextHistory_OrderedFormat::GetHistoricFormatData
               (longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  void *_Dst;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_138 [32];
  longlong local_118;
  undefined8 local_110;
  int local_108 [2];
  undefined8 local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  undefined4 local_d8 [2];
  longlong *local_d0;
  longlong *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
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
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_b8 = (undefined8 *)(param_1 + 0x10);
  local_c8 = param_3;
  local_c0 = param_2;
  puVar6 = (undefined8 *)FTextFormat::GetSourceText(local_b8,local_b0);
  plVar7 = (longlong *)(**(code **)(*(longlong *)*puVar6 + 0x28))();
  (**(code **)(*plVar7 + 0x40))(plVar7,puVar6,param_3);
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_a8 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar10 = (int *)((longlong)local_a8 + 0xc);
      iVar13 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_a8 + 8))(local_a8,1);
      }
    }
  }
  iVar13 = 0;
  while( true ) {
    if ((iVar13 < 0) || (*(int *)(param_1 + 0x28) <= iVar13)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) break;
    piVar10 = (int *)((longlong)iVar13 * 0x30 + *(longlong *)(param_1 + 0x20));
    if (*piVar10 == 4) {
      plVar7 = (longlong *)(**(code **)(**(longlong **)(piVar10 + 4) + 0x28))();
      (**(code **)(*plVar7 + 0x40))(plVar7,piVar10 + 4);
    }
    iVar13 = iVar13 + 1;
  }
  iVar13 = *(int *)(param_1 + 0x28);
  iVar12 = 0;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  if (0 < iVar13) {
    FUN_14089d530(&local_98,iVar13);
    iVar13 = *(int *)(param_1 + 0x28);
  }
  if (0 < iVar13) {
    do {
      local_118 = 0;
      local_110 = 0;
      puVar11 = (undefined4 *)((longlong)iVar12 * 0x30 + *(longlong *)(param_1 + 0x20));
      FString::AppendInt(&local_118,iVar12);
      TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::AddUninitialized(&local_98,local_d8);
      plVar1 = local_d0;
      plVar7 = local_d0 + 1;
      *local_d0 = 0;
      *local_d0 = local_118;
      local_118 = 0;
      *(int *)plVar7 = (int)local_110;
      *(undefined4 *)((longlong)local_d0 + 0xc) = local_110._4_4_;
      local_110 = 0;
      *(undefined4 *)(local_d0 + 2) = *puVar11;
      local_d0[3] = *(longlong *)(puVar11 + 2);
      local_d0[3] = *(longlong *)(puVar11 + 2);
      *(undefined4 *)(local_d0 + 3) = puVar11[2];
      local_d0[3] = *(longlong *)(puVar11 + 2);
      *(undefined1 *)(local_d0 + 7) = 0;
      if (*(char *)(puVar11 + 10) != '\0') {
        local_d0[4] = *(longlong *)(puVar11 + 4);
        lVar3 = *(longlong *)(puVar11 + 6);
        local_d0[5] = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        *(undefined4 *)(local_d0 + 6) = puVar11[8];
        *(undefined1 *)(local_d0 + 7) = 1;
      }
      *(undefined4 *)(local_d0 + 8) = 0xffffffff;
      if ((int)local_90 - local_64 == 1) {
LAB_141609de5:
        cVar4 = TSet<TTuple<FString,FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FLocKeyMapFuncs<FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FDefaultSetAllocator>
                ::ConditionalRehash(&local_98,(int)local_90 - local_64,0);
        if (cVar4 == '\0') {
          if ((int)*plVar7 == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = (undefined2 *)*plVar1;
          }
          uVar5 = FCrc::StrCrc32<wchar_t>(puVar8,0);
          uVar5 = uVar5 & local_50 - 1U;
          *(uint *)((longlong)plVar1 + 0x44) = uVar5;
          puVar9 = local_60;
          if (local_58 != (undefined1 *)0x0) {
            puVar9 = local_58;
          }
          *(undefined4 *)(plVar1 + 8) =
               *(undefined4 *)(puVar9 + (longlong)(int)(local_50 - 1U & uVar5) * 4);
          puVar9 = local_60;
          if (local_58 != (undefined1 *)0x0) {
            puVar9 = local_58;
          }
          *(undefined4 *)(puVar9 + (longlong)(int)(local_50 - 1U & uVar5) * 4) = local_d8[0];
        }
      }
      else {
        TSet<TTuple<FString,FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FLocKeyMapFuncs<FTextLocalizationManager::FDisplayStringLookupTable::FDisplayStringEntry>,FDefaultSetAllocator>
        ::FindId(&local_98,local_108,local_d0);
        if (local_108[0] == -1) {
          goto LAB_141609de5;
        }
        _Dst = (void *)(local_98 + (longlong)local_108[0] * 0x48);
        UE4Tuple_Private::
        TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FFormatArgumentValue>::
        ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,FFormatArgumentValue>(_Dst);
        ::_guard_xfg_dispatch_icall_nop(_Dst,plVar1,0x40);
        TSparseArray<TSetElement<TTuple<FUniqueNetIdNull,TSharedRef<FUserOnlineAccountNull,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized(&local_98,local_d8[0]);
      }
      if (local_118 != 0) {
        FMemory::Free();
      }
      iVar12 = iVar12 + 1;
      param_2 = local_c0;
      param_3 = local_c8;
    } while (iVar12 < *(int *)(param_1 + 0x28));
  }
  local_100 = *local_b8;
  local_f8 = (longlong *)local_b8[1];
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
    UNLOCK();
  }
  iVar13 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar13 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar13 + 1) {
    TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
              (param_3,iVar13);
  }
  plVar7 = (longlong *)param_2[1];
  local_f0 = *param_2;
  puVar6 = (undefined8 *)((longlong)iVar13 * 0x78 + *param_3);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_e0 = *(undefined4 *)(param_2 + 2);
  *puVar6 = local_f0;
  puVar6[1] = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar6 + 2) = local_e0;
  puVar6[3] = local_100;
  puVar6[4] = local_f8;
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
    UNLOCK();
  }
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  *(undefined4 *)(puVar6 + 0xb) = 0xffffffff;
  *(undefined4 *)((longlong)puVar6 + 0x5c) = 0;
  puVar6[0xd] = 0;
  *(undefined4 *)(puVar6 + 0xe) = 0;
  local_e8 = plVar7;
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(puVar6 + 5,&local_98);
  if (local_58 == (undefined1 *)0x0) {
    ::_guard_xfg_dispatch_icall_nop(puVar6 + 0xc,local_60,4);
  }
  if (puVar6[0xd] != 0) {
    FMemory::Free();
  }
  plVar1 = local_e8;
  puVar6[0xd] = local_58;
  local_58 = (undefined1 *)0x0;
  *(int *)(puVar6 + 0xe) = local_50;
  local_50 = 0;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar7 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_e8)(local_e8);
      LOCK();
      piVar10 = (int *)((longlong)plVar1 + 0xc);
      iVar13 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_e8 + 8))(local_e8,1);
      }
    }
  }
  plVar7 = local_f8;
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_f8 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar10 = (int *)((longlong)plVar7 + 0xc);
      iVar13 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)(*local_f8 + 8))(local_f8,1);
      }
    }
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(&local_98,0);
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (local_98 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14160a090 GetHistoricFormatData body=52 status=ok
// SIG undefined GetHistoricFormatData(void)

void FTextHistory_Transform::GetHistoricFormatData
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
                    /* WARNING: Could not recover jumptable at 0x00014160a0c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1,(undefined8 *)(param_1 + 0x10),param_3);
  return;
}



// FUNCTION 14160a0d0 GetHistoricNumericData body=322 status=ok
// SIG undefined GetHistoricNumericData(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FTextHistory_AsNumber::GetHistoricNumericData
          (longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined7 uVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined4 local_40;
  char local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  char local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_58 = *(undefined8 *)(param_1 + 0x18);
  local_60[0] = *(undefined4 *)(param_1 + 0x10);
  local_68 = 0;
  local_38 = '\0';
  if (*(char *)(param_1 + 0x38) != '\0') {
    local_50 = *(undefined8 *)(param_1 + 0x20);
    local_48 = *(longlong **)(param_1 + 0x28);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    local_40 = *(undefined4 *)(param_1 + 0x30);
    local_38 = '\x01';
  }
  local_18 = *(char *)(param_1 + 0x58) != '\0';
  if ((bool)local_18) {
    local_30 = *(undefined4 *)(param_1 + 0x40);
    uStack_2c = *(undefined4 *)(param_1 + 0x44);
    uStack_28 = *(undefined4 *)(param_1 + 0x48);
    uStack_24 = *(undefined4 *)(param_1 + 0x4c);
    local_20 = *(undefined8 *)(param_1 + 0x50);
  }
  *param_3 = 0;
  FFormatArgumentValue::operator=(param_3 + 8,local_60);
  plVar6 = local_48;
  puVar1 = (undefined4 *)(param_3 + 0x38);
  if (&local_30 != puVar1) {
    if (param_3[0x50] != '\0') {
      param_3[0x50] = 0;
    }
    if (local_18 != '\0') {
      *puVar1 = local_30;
      *(undefined4 *)(param_3 + 0x3c) = uStack_2c;
      *(undefined4 *)(param_3 + 0x40) = uStack_28;
      *(undefined4 *)(param_3 + 0x44) = uStack_24;
      *(undefined8 *)(param_3 + 0x48) = local_20;
      param_3[0x50] = 1;
    }
  }
  if ((local_38 == '\0') || (local_48 == (longlong *)0x0)) {
    uVar9 = (undefined7)((ulonglong)puVar1 >> 8);
  }
  else {
    LOCK();
    plVar2 = local_48 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    uVar7 = (int)lVar5 - 1;
    uVar8 = (ulonglong)uVar7;
    if (uVar7 == 0) {
      uVar8 = (**(code **)*local_48)(local_48);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        uVar8 = (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
    uVar9 = (undefined7)(uVar8 >> 8);
  }
  return CONCAT71(uVar9,1);
}



// FUNCTION 14160a220 GetHistoricNumericData body=322 status=ok
// SIG undefined GetHistoricNumericData(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FTextHistory_AsPercent::GetHistoricNumericData
          (longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined7 uVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined4 local_40;
  char local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  char local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_58 = *(undefined8 *)(param_1 + 0x18);
  local_60[0] = *(undefined4 *)(param_1 + 0x10);
  local_68 = 1;
  local_38 = '\0';
  if (*(char *)(param_1 + 0x38) != '\0') {
    local_50 = *(undefined8 *)(param_1 + 0x20);
    local_48 = *(longlong **)(param_1 + 0x28);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    local_40 = *(undefined4 *)(param_1 + 0x30);
    local_38 = '\x01';
  }
  local_18 = *(char *)(param_1 + 0x58) != '\0';
  if ((bool)local_18) {
    local_30 = *(undefined4 *)(param_1 + 0x40);
    uStack_2c = *(undefined4 *)(param_1 + 0x44);
    uStack_28 = *(undefined4 *)(param_1 + 0x48);
    uStack_24 = *(undefined4 *)(param_1 + 0x4c);
    local_20 = *(undefined8 *)(param_1 + 0x50);
  }
  *param_3 = 1;
  FFormatArgumentValue::operator=(param_3 + 8,local_60);
  plVar6 = local_48;
  puVar1 = (undefined4 *)(param_3 + 0x38);
  if (&local_30 != puVar1) {
    if (param_3[0x50] != '\0') {
      param_3[0x50] = 0;
    }
    if (local_18 != '\0') {
      *puVar1 = local_30;
      *(undefined4 *)(param_3 + 0x3c) = uStack_2c;
      *(undefined4 *)(param_3 + 0x40) = uStack_28;
      *(undefined4 *)(param_3 + 0x44) = uStack_24;
      *(undefined8 *)(param_3 + 0x48) = local_20;
      param_3[0x50] = 1;
    }
  }
  if ((local_38 == '\0') || (local_48 == (longlong *)0x0)) {
    uVar9 = (undefined7)((ulonglong)puVar1 >> 8);
  }
  else {
    LOCK();
    plVar2 = local_48 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    uVar7 = (int)lVar5 - 1;
    uVar8 = (ulonglong)uVar7;
    if (uVar7 == 0) {
      uVar8 = (**(code **)*local_48)(local_48);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        uVar8 = (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
    uVar9 = (undefined7)(uVar8 >> 8);
  }
  return CONCAT71(uVar9,1);
}



// FUNCTION 14160a370 GetHistoricNumericData body=52 status=ok
// SIG undefined GetHistoricNumericData(void)

void FTextHistory_Transform::GetHistoricNumericData
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
                    /* WARNING: Could not recover jumptable at 0x00014160a3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x48))(plVar1,(undefined8 *)(param_1 + 0x10),param_3);
  return;
}



// FUNCTION 14160a3b0 GetInvariantTimeZone body=59 status=ok
// SIG undefined GetInvariantTimeZone(void)

undefined8 * FText::GetInvariantTimeZone(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
  FGenericPlatformString::Memcpy(*param_1,L"Etc/Unknown",0x18);
  return param_1;
}



// FUNCTION 14160a3f0 FUN_14160a3f0 body=177 status=ok
// SIG undefined FUN_14160a3f0(void)

undefined2 FUN_14160a3f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined2 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (DAT_1468b5998 == 0) {
    lVar5 = operator_new(0x110);
    if (lVar5 == 0) {
      DAT_1468b5998 = 0;
    }
    else {
      DAT_1468b5998 = FUN_1415f3b10(lVar5);
    }
  }
  lVar5 = DAT_1468b5998;
  uVar6 = FUN_1416080f0(param_1 + 8,local_18);
  uVar4 = FUN_14160a600(lVar5,uVar6);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return uVar4;
}



// FUNCTION 14160a4b0 FUN_14160a4b0 body=332 status=ok
// SIG undefined FUN_14160a4b0(void)

ushort * FUN_14160a4b0(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  BOOL BVar4;
  longlong lVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  longlong *plVar10;
  int local_res8 [2];
  longlong local_18;
  longlong *local_10;
  
  puVar9 = (ushort *)0x0;
  local_res8[0] = 0;
  lVar5 = *(longlong *)(param_1 + 8);
  puVar8 = puVar9;
  plVar10 = local_10;
  if (lVar5 != 0) {
    plVar10 = *(longlong **)(param_1 + 0x10);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_18 = lVar5;
    local_10 = plVar10;
    if (DAT_1468b5998 == 0) {
      lVar5 = operator_new(0x110);
      if (lVar5 == 0) {
        DAT_1468b5998 = 0;
      }
      else {
        DAT_1468b5998 = FUN_1415f3b10(lVar5);
      }
    }
    lVar5 = DAT_1468b5998;
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_1468b5998 + 8);
    BVar4 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar4 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    TSet<TTuple<TSharedRef<FString,1>,unsigned_short>,TDefaultMapHashableKeyFuncs<TSharedRef<FString,1>,unsigned_short,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(lVar5 + 0x80),local_res8,&local_18);
    puVar7 = puVar9;
    if (local_res8[0] != -1) {
      puVar7 = (ushort *)((longlong)local_res8[0] * 0x20 + *(longlong *)(lVar5 + 0x80));
    }
    puVar6 = puVar7 + 8;
    if (puVar7 == (ushort *)0x0) {
      puVar6 = puVar9;
    }
    if (puVar6 != (ushort *)0x0) {
      puVar8 = (ushort *)(ulonglong)*puVar6;
    }
    LeaveCriticalSection(lpCriticalSection);
    puVar9 = (ushort *)0x1;
  }
  plVar3 = local_10;
  if ((puVar9 != (ushort *)0x0) && (plVar10 != (longlong *)0x0)) {
    LOCK();
    plVar10 = plVar10 + 1;
    lVar5 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return puVar8;
}



// FUNCTION 14160a600 FUN_14160a600 body=144 status=ok
// SIG undefined FUN_14160a600(void)

ushort * FUN_14160a600(longlong param_1,undefined8 param_2)

{
  BOOL BVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  int local_res8 [2];
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  TSet<TTuple<TSharedRef<FString,1>,unsigned_short>,TDefaultMapHashableKeyFuncs<TSharedRef<FString,1>,unsigned_short,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x80,local_res8,param_2);
  puVar4 = (ushort *)0x0;
  puVar3 = puVar4;
  if (local_res8[0] != -1) {
    puVar3 = (ushort *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x80));
  }
  puVar2 = puVar3 + 8;
  if (puVar3 == (ushort *)0x0) {
    puVar2 = puVar4;
  }
  if (puVar2 != (ushort *)0x0) {
    puVar4 = (ushort *)(ulonglong)*puVar2;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return puVar4;
}



// FUNCTION 14160a690 GetLocalizedCultureNames body=627 status=ok
// SIG undefined GetLocalizedCultureNames(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FLocalizationResourceTextSource::GetLocalizedCultureNames
               (undefined8 param_1,ulonglong param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 local_res10 [8];
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  uVar6 = 0;
  local_38 = (longlong *)0x0;
  local_30 = 0;
  if ((param_2 & 2) != 0) {
    uVar4 = FUN_141671f30();
    TArray<FString,FDefaultAllocator>::operator+=(&local_38,uVar4);
  }
  if ((param_2 & 4) != 0) {
    uVar4 = FUN_141672560();
    TArray<FString,FDefaultAllocator>::operator+=(&local_38,uVar4);
  }
  if ((param_2 & 8) != 0) {
    uVar4 = FUN_141672110();
    TArray<FString,FDefaultAllocator>::operator+=(&local_38,uVar4);
  }
  if ((param_2 & 0x10) != 0) {
    DAT_1464af1bc = DAT_1464af1bc + 1;
    bVar1 = false;
    lVar5 = (longlong)(DAT_1464af1b0 + -1);
    if (-1 < DAT_1464af1b0 + -1) {
      lVar11 = lVar5 << 4;
      bVar1 = false;
      do {
        if (((*(int *)(lVar11 + 8 + DAT_1464af1a8) == 0) ||
            (plVar7 = *(longlong **)(lVar11 + DAT_1464af1a8), plVar7 == (longlong *)0x0)) ||
           (cVar2 = (**(code **)(*plVar7 + 0x40))(plVar7,&local_38), cVar2 == '\0')) {
          bVar1 = true;
        }
        lVar11 = lVar11 + -0x10;
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
    }
    iVar3 = DAT_1464af1b0;
    DAT_1464af1bc = DAT_1464af1bc + -1;
    if ((bVar1) && (DAT_1464af1bc < 1)) {
      uVar8 = uVar6;
      if (0 < DAT_1464af1b0) {
        do {
          if (((*(int *)(uVar6 + 8 + DAT_1464af1a8) == 0) ||
              (*(longlong **)(uVar6 + DAT_1464af1a8) == (longlong *)0x0)) ||
             (cVar2 = (**(code **)(**(longlong **)(uVar6 + DAT_1464af1a8) + 0x10))(), cVar2 != '\0')
             ) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464af1a8,uVar8,1,1);
          }
          else {
            uVar8 = (ulonglong)((int)uVar8 + 1);
            uVar6 = uVar6 + 0x10;
          }
        } while ((int)uVar8 < DAT_1464af1b0);
      }
      _DAT_1464af1b8 = DAT_1464af1b0 * 2;
      if (_DAT_1464af1b8 < 3) {
        _DAT_1464af1b8 = 2;
      }
      if ((_DAT_1464af1b8 < iVar3) && (DAT_1464af1b4 != DAT_1464af1b0)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464af1a8);
      }
    }
  }
  FUN_14160abd0(&local_28,&local_38);
  iVar3 = *(int *)(param_3 + 8) - *(int *)(param_3 + 0x34);
  if (iVar3 < iVar3 + (int)local_20) {
    FUN_1415e4440(param_3);
  }
  plVar9 = local_28 + (longlong)(int)local_20 * 2;
  for (plVar7 = local_28; plVar7 != plVar9; plVar7 = plVar7 + 2) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
              (param_3,local_res10,plVar7,0);
  }
  uVar10 = (uint)local_20;
  uVar6 = local_20;
  plVar7 = local_28;
  while (uVar10 != 0) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
    uVar10 = (int)uVar6 - 1;
    uVar6 = (ulonglong)uVar10;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  plVar7 = local_38;
  for (iVar3 = (int)local_30; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}



// FUNCTION 14160a910 GetLocalizedCultureNames body=76 status=ok
// SIG undefined GetLocalizedCultureNames(void)

void FPolyglotTextSource::GetLocalizedCultureNames
               (undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = param_1;
  local_10 = param_3;
  if ((param_2 & 2) != 0) {
    <lambda_020163677c00931673007e2fc342def9>::operator()(&local_18,2);
  }
  if ((param_2 & 4) != 0) {
    <lambda_020163677c00931673007e2fc342def9>::operator()(&local_18,0);
  }
  if ((param_2 & 8) != 0) {
    <lambda_020163677c00931673007e2fc342def9>::operator()(&local_18,1);
  }
  return;
}



// FUNCTION 14160a960 FUN_14160a960 body=624 status=ok
// SIG undefined FUN_14160a960(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14160a960(longlong param_1,longlong *param_2,undefined1 param_3)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  uint *puVar8;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  undefined8 local_e0;
  int iStack_d8;
  uint uStack_d4;
  undefined8 local_d0;
  uint uStack_c8;
  int iStack_c4;
  int local_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  int iStack_b0;
  uint uStack_ac;
  uint *puStack_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  longlong local_88;
  int local_80;
  undefined4 local_7c;
  uint local_78 [4];
  uint *local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  puVar6 = *(undefined8 **)(param_1 + 0xf0);
  iVar7 = 0;
  puVar5 = puVar6 + (longlong)*(int *)(param_1 + 0xf8) * 2;
  local_88 = 0;
  local_80 = 0;
  local_7c = 0;
  local_68 = (uint *)0x0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  if (puVar6 != puVar5) {
    do {
      (**(code **)(*(longlong *)*puVar6 + 0x18))((longlong *)*puVar6,param_3,&local_88);
      puVar6 = puVar6 + 2;
    } while (puVar6 != puVar5);
    iVar7 = (int)local_60;
  }
  *param_2 = 0;
  param_2[1] = 0;
  if (0 < local_80 - local_54) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2);
    iVar7 = (int)local_60;
  }
  local_e0._0_4_ = 0;
  local_e0._4_4_ = 1;
  puStack_a8 = local_78;
  local_d0._4_4_ = 0;
  uStack_c8 = 0;
  if (iVar7 != 0) {
    puVar8 = local_78;
    if (local_68 != (uint *)0x0) {
      puVar8 = local_68;
    }
    uVar1 = *puVar8;
    local_e0._0_4_ = 0;
    uStack_c8 = 0;
    while (uVar1 == 0) {
      lVar3 = (longlong)(int)local_e0;
      uStack_c8 = uStack_c8 + 0x20;
      iVar4 = (int)local_e0 + 1;
      bVar2 = (int)((iVar7 + -1 >> 0x1f & 0x1fU) + iVar7 + -1) >> 5 <= (int)local_e0;
      local_d0._4_4_ = iVar7;
      local_e0._0_4_ = iVar4;
      if (bVar2) goto LAB_14160aad9;
      uVar1 = puVar8[lVar3 + 1];
    }
    local_e0._4_4_ = -uVar1 & uVar1;
    iVar4 = 0x1f;
    if (local_e0._4_4_ != 0) {
      for (; local_e0._4_4_ >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (local_e0._4_4_ == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_d0._4_4_ = (uStack_c8 - iVar4) + 0x1f;
    if (iVar7 < local_d0._4_4_) {
      local_d0._4_4_ = iVar7;
    }
  }
LAB_14160aad9:
  local_b8 = &local_88;
  iStack_b0 = (int)local_e0;
  uStack_ac = local_e0._4_4_;
  uStack_a0 = 0xffffffff;
  iStack_9c = local_d0._4_4_;
  iStack_98 = uStack_c8;
  uStack_94 = iStack_c4;
  iStack_d8 = (int)local_e0;
  uStack_d4 = local_e0._4_4_;
  local_c0 = uStack_c8;
  uStack_bc = iStack_c4;
  uStack_c8 = 0xffffffff;
  iStack_c4 = local_d0._4_4_;
  bVar2 = local_d0._4_4_ < iVar7;
  local_e0 = local_b8;
  local_d0 = puStack_a8;
  if (bVar2) {
    do {
      iVar4 = iStack_c4;
      iVar7 = (int)param_2[1];
      lVar3 = *local_e0;
      *(int *)(param_2 + 1) = iVar7 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar7);
      }
      FString::FString((longlong)iVar7 * 0x10 + *param_2,lVar3 + (longlong)iVar4 * 0x18);
      uStack_c8 = uStack_c8 & ~uStack_d4;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_d8);
    } while (iStack_c4 < (int)local_d0[6]);
  }
  AlgoImpl::
  IntroSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>
            (*param_2,(longlong)(int)param_2[1],local_e8[0],local_e8);
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_88);
  return param_2;
}



// FUNCTION 14160abd0 FUN_14160abd0 body=376 status=ok
// SIG undefined FUN_14160abd0(void)

longlong * FUN_14160abd0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  bool bVar12;
  undefined **local_38;
  longlong *local_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar7 = (undefined8 *)*param_2;
  puVar10 = puVar7 + (longlong)*(int *)(param_2 + 1) * 2;
  for (; puVar7 != puVar10; puVar7 = puVar7 + 2) {
    local_38 = &PTR_FUN_144cb61a8;
    local_30 = param_1;
    plVar4 = (longlong *)FUN_1415c3d50();
    if (*(int *)(puVar7 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar7;
    }
    (**(code **)(*plVar4 + 0x88))(plVar4,puVar6,&local_38);
    local_38 = &PTR_FUN_143f47c98;
  }
  lVar5 = FInternationalization::Get();
  iVar1 = (int)param_1[1];
  if (iVar1 != 0) {
    iVar11 = 0;
    cVar3 = FICUInternationalization::IsCultureAllowed(*(undefined8 *)(lVar5 + 0x20),*param_1);
    bVar12 = cVar3 != '\0';
    iVar9 = 0;
    do {
      iVar2 = iVar9;
      do {
        iVar2 = iVar2 + 1;
        if (iVar1 <= iVar2) break;
        cVar3 = FICUInternationalization::IsCultureAllowed
                          (*(undefined8 *)(lVar5 + 0x20),(longlong)iVar2 * 0x10 + *param_1);
      } while (bVar12 == (cVar3 != '\0'));
      iVar8 = iVar2 - iVar9;
      if (bVar12 == false) {
        plVar4 = (longlong *)((longlong)iVar9 * 0x10 + *param_1);
        for (; iVar8 != 0; iVar8 = iVar8 + -1) {
          if (*plVar4 != 0) {
            FMemory::Free();
          }
          plVar4 = plVar4 + 2;
        }
      }
      else {
        if (iVar11 != iVar9) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar11 * 0x10 + *param_1),
                     (void *)((longlong)iVar9 * 0x10 + *param_1),(longlong)iVar8 << 4);
        }
        iVar11 = iVar11 + iVar8;
      }
      bVar12 = (bool)(bVar12 ^ 1);
      iVar9 = iVar2;
    } while (iVar2 < iVar1);
    *(int *)(param_1 + 1) = iVar11;
  }
  return param_1;
}



// FUNCTION 14160ad50 GetLocalizedString body=144 status=ok
// SIG undefined GetLocalizedString(void)

undefined8 *
TIndirectTextData<FTextHistory_StringTableEntry>::GetLocalizedString
          (longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar5 = (undefined8 *)FUN_1416080f0(param_1 + 8,local_18);
  *param_2 = *puVar5;
  lVar4 = puVar5[1];
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
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



// FUNCTION 14160ade0 GetMetaData body=281 status=ok
// SIG undefined GetMetaData(void)

undefined8 *
FStringTable::GetMetaData(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  BOOL BVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int local_res8 [2];
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x148));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x148));
  }
  TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FLocKeyMapFuncs<TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FDefaultSetAllocator>
  ::FindId(param_1 + 0xf8,local_res8,param_3);
  plVar3 = (longlong *)0x0;
  if (local_res8[0] != -1) {
    plVar3 = (longlong *)((longlong)local_res8[0] * 0x68 + *(longlong *)(param_1 + 0xf8));
  }
  plVar4 = plVar3 + 2;
  if (plVar3 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  if ((plVar4 != (longlong *)0x0) && ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34))) {
    plVar3 = (longlong *)plVar4[8];
    if ((longlong *)plVar4[8] == (longlong *)0x0) {
      plVar3 = plVar4 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)((int)((ulonglong)param_4 >> 0x20) + (int)param_4) &
                    (longlong)(int)plVar4[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar3 = (longlong *)((longlong)iVar2 * 0x20 + *plVar4);
        if (*plVar3 == param_4) {
          if ((iVar2 != -1) && (plVar3 != (longlong *)0x0)) {
            FString::FString(param_2,plVar3 + 1);
            goto LAB_14160aebe;
          }
          break;
        }
        iVar2 = (int)plVar3[3];
      } while (iVar2 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_14160aebe:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x148));
  return param_2;
}



// FUNCTION 14160af00 FUN_14160af00 body=119 status=ok
// SIG undefined FUN_14160af00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14160af00(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b59f0) {
    _Init_thread_header(&DAT_1468b59f0);
    if (DAT_1468b59f0 == -1) {
      _DAT_1468b59e0 = 0;
      DAT_1468b59e8 = 0;
      atexit(FUN_143e787a0);
      _Init_thread_footer(&DAT_1468b59f0);
      return &DAT_1468b59e0;
    }
  }
  return &DAT_1468b59e0;
}



// FUNCTION 14160af80 FUN_14160af80 body=30 status=ok
// SIG undefined FUN_14160af80(void)

undefined8 FUN_14160af80(longlong param_1,undefined8 param_2)

{
  FString::FString(param_2,param_1 + 0x20);
  return param_2;
}



// FUNCTION 14160afa0 GetNativeCultureName body=153 status=ok
// SIG undefined GetNativeCultureName(void)

undefined8
FLocalizationResourceTextSource::GetNativeCultureName
          (undefined8 param_1,char param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong local_18;
  int local_10;
  undefined4 uStack_c;
  
  if (param_2 == '\0') {
    FUN_14160b640(&local_18,0);
LAB_14160afd8:
    if (1 < local_10) {
      if (param_3 == &local_18) {
        uVar1 = 1;
      }
      else {
        if (*param_3 != 0) {
          FMemory::Free();
        }
        *param_3 = local_18;
        *(undefined4 *)((longlong)param_3 + 0xc) = uStack_c;
        *(int *)(param_3 + 1) = local_10;
        uVar1 = 1;
        local_18 = 0;
      }
      goto LAB_14160b021;
    }
  }
  else {
    if (param_2 == '\x01') {
      FUN_14160b510(&local_18,0);
      goto LAB_14160afd8;
    }
    local_18 = 0;
  }
  uVar1 = 0;
LAB_14160b021:
  if (local_18 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 14160b040 GetNativeCultureName body=515 status=ok
// SIG undefined GetNativeCultureName(void)

undefined8
FPolyglotTextSource::GetNativeCultureName(longlong param_1,byte param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  uint *puVar8;
  uint uVar9;
  byte *pbVar10;
  uint uStack_24;
  
  pbVar7 = (byte *)0x0;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar4 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar4 = param_1 + 0x40;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (ulonglong)param_2) * 4);
    if (iVar3 != -1) {
      do {
        pbVar5 = (byte *)((longlong)iVar3 * 0xb0 + *(longlong *)(param_1 + 8));
        if (*pbVar5 == param_2) {
          if (iVar3 != -1) goto LAB_14160b0b7;
          break;
        }
        iVar3 = *(int *)(pbVar5 + 0xa8);
      } while (iVar3 != -1);
    }
  }
  pbVar5 = pbVar7;
LAB_14160b0b7:
  pbVar10 = pbVar5 + 8;
  if (pbVar5 == (byte *)0x0) {
    pbVar10 = pbVar7;
  }
  if (pbVar10 != (byte *)0x0) {
    uVar1 = *(uint *)(pbVar10 + 0x28);
    uVar9 = 0;
    uVar2 = uVar9;
    if (uVar1 != 0) {
      puVar8 = *(uint **)(pbVar10 + 0x20);
      if (*(uint **)(pbVar10 + 0x20) == (uint *)0x0) {
        puVar8 = (uint *)(pbVar10 + 0x10);
      }
      uVar2 = *puVar8;
      pbVar5 = pbVar7;
      while (uVar2 == 0) {
        iVar3 = (int)pbVar7;
        uVar9 = (int)pbVar5 + 0x20;
        pbVar5 = (byte *)(ulonglong)uVar9;
        pbVar7 = (byte *)(ulonglong)(iVar3 + 1);
        uVar2 = uVar1;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar3)
        goto LAB_14160b15b;
        uVar2 = puVar8[(longlong)iVar3 + 1];
      }
      uVar2 = -uVar2 & uVar2;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      if (uVar2 == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = 0x1f - iVar3;
      }
      uVar2 = (uVar9 - iVar3) + 0x1f;
      if ((int)uVar1 < (int)uVar2) {
        uVar2 = uVar1;
      }
    }
LAB_14160b15b:
    uStack_24 = *(uint *)(pbVar10 + 0x28);
    uVar1 = *(uint *)(pbVar10 + 0x28);
    uVar9 = uStack_24 & 0xffffffe0;
    if (uStack_24 != uVar1) {
      puVar8 = *(uint **)(pbVar10 + 0x20);
      if (*(uint **)(pbVar10 + 0x20) == (uint *)0x0) {
        puVar8 = (uint *)(pbVar10 + 0x10);
      }
      uVar6 = puVar8[(int)uStack_24 >> 5] & -1 << ((byte)uStack_24 & 0x1f);
      iVar3 = (int)uStack_24 >> 5;
      while (uVar6 == 0) {
        uVar9 = uVar9 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar3)
        goto LAB_14160b1f1;
        uVar6 = puVar8[(longlong)iVar3 + 1];
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
      uStack_24 = (uVar9 - iVar3) + 0x1f;
      if ((int)uVar1 < (int)uStack_24) {
LAB_14160b1f1:
        uStack_24 = uVar1;
      }
    }
    if (uVar2 != uStack_24) {
      FString::operator=(param_3,(longlong)(int)uVar2 * 0x20 + *(longlong *)pbVar10);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14160b250 GetNativeCultureName body=704 status=ok
// SIG undefined GetNativeCultureName(void)

undefined8 *
TextLocalizationResourceUtil::GetNativeCultureName(undefined8 *param_1,longlong *param_2)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *local_78;
  undefined8 local_70;
  undefined2 *local_68;
  int local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  ulonglong local_40;
  longlong local_38;
  undefined8 local_30;
  
  puVar9 = (undefined8 *)*param_2;
  puVar8 = puVar9 + (longlong)(int)param_2[1] * 2;
  do {
    if (puVar9 == puVar8) {
      *param_1 = 0;
      param_1[1] = 0;
      return param_1;
    }
    local_78 = (longlong *)0x0;
    local_70 = 0;
    plVar4 = (longlong *)FUN_1415c3d50();
    local_60 = *(int *)(puVar9 + 1);
    lVar5 = (longlong)local_60;
    pvVar1 = (void *)*puVar9;
    local_68 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_68,(0xb - (uint)(local_60 != 0)) + local_60,0);
    ::_guard_xfg_dispatch_icall_nop(local_68,pvVar1,lVar5 * 2);
    FString::PathAppend(&local_68,L"*.locmeta",9);
    puVar7 = &DAT_143f3eda8;
    if (local_60 != 0) {
      puVar7 = local_68;
    }
    (**(code **)(*plVar4 + 0x78))(plVar4,&local_78,puVar7,1,0);
    if (local_68 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    plVar4 = local_78;
    if ((int)local_70 == 1) {
      local_50 = *(int *)(puVar9 + 1);
      lVar5 = (longlong)local_50;
      local_48 = (void *)0x0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      iVar6 = (int)local_78[1] + -1;
      if ((int)local_78[1] == 0) {
        iVar6 = 0;
      }
      if ((local_50 != 0) || (iVar3 = 2, iVar6 == -1)) {
        iVar3 = 1;
      }
      local_58 = (void *)0x0;
      pvVar1 = (void *)*puVar9;
      if ((local_50 == 0) && (iVar6 + iVar3 == 0)) {
        local_4c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_50 + iVar6 + iVar3,0);
        ::_guard_xfg_dispatch_icall_nop(local_58,pvVar1,lVar5 * 2);
      }
      FString::PathAppend(&local_58,*plVar4);
      cVar2 = FUN_14160de90(&local_48);
      if (local_58 != (void *)0x0) {
        FMemory::Free();
      }
      pvVar1 = local_48;
      if (cVar2 != '\0') {
        lVar5 = (longlong)(int)local_40;
        *param_1 = 0;
        *(int *)(param_1 + 1) = (int)local_40;
        if ((int)local_40 == 0) {
          *(undefined4 *)((longlong)param_1 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,local_40 & 0xffffffff,0);
          ::_guard_xfg_dispatch_icall_nop((void *)*param_1,pvVar1,lVar5 * 2);
        }
        if (local_38 != 0) {
          FMemory::Free();
        }
        if (local_48 != (void *)0x0) {
          FMemory::Free(local_48);
        }
        plVar4 = local_78;
        for (iVar6 = (int)local_70; iVar6 != 0; iVar6 = iVar6 + -1) {
          if (*plVar4 != 0) {
            FMemory::Free();
          }
          plVar4 = plVar4 + 2;
        }
        if (local_78 == (longlong *)0x0) {
          return param_1;
        }
        FMemory::Free(local_78);
        return param_1;
      }
      if (local_38 != 0) {
        FMemory::Free();
      }
      if (local_48 != (void *)0x0) {
        FMemory::Free();
      }
    }
    plVar4 = local_78;
    for (iVar6 = (int)local_70; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free(local_78);
    }
    puVar9 = puVar9 + 2;
  } while( true );
}



// FUNCTION 14160b510 FUN_14160b510 body=291 status=ok
// SIG undefined FUN_14160b510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14160b510(undefined8 param_1,char param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong local_18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b59d8) {
    _Init_thread_header(&DAT_1468b59d8);
    if (DAT_1468b59d8 == -1) {
      atexit((_func_5014 *)&LAB_143e78a20);
      _Init_thread_footer(&DAT_1468b59d8);
    }
  }
  if ((DAT_1468b59d0 == '\0') || (param_2 != '\0')) {
    uVar1 = FUN_141672110();
    plVar2 = (longlong *)TextLocalizationResourceUtil::GetNativeCultureName(local_18,uVar1);
    if (plVar2 != &DAT_1468b59c0) {
      if (DAT_1468b59d0 != '\0') {
        DAT_1468b59d0 = 0;
        if (DAT_1468b59c0 != 0) {
          FMemory::Free();
        }
      }
      DAT_1468b59c0 = *plVar2;
      *plVar2 = 0;
      _DAT_1468b59c8 = (undefined4)plVar2[1];
      _DAT_1468b59cc = *(undefined4 *)((longlong)plVar2 + 0xc);
      plVar2[1] = 0;
      DAT_1468b59d0 = '\x01';
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  FString::FString(param_1,&DAT_1468b59c0);
  return param_1;
}



// FUNCTION 14160b640 FUN_14160b640 body=291 status=ok
// SIG undefined FUN_14160b640(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14160b640(undefined8 param_1,char param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong local_18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b59b8) {
    _Init_thread_header(&DAT_1468b59b8);
    if (DAT_1468b59b8 == -1) {
      atexit((_func_5014 *)&LAB_143e78a50);
      _Init_thread_footer(&DAT_1468b59b8);
    }
  }
  if ((DAT_1468b59b0 == '\0') || (param_2 != '\0')) {
    uVar1 = FUN_141672560();
    plVar2 = (longlong *)TextLocalizationResourceUtil::GetNativeCultureName(local_18,uVar1);
    if (plVar2 != &DAT_1468b59a0) {
      if (DAT_1468b59b0 != '\0') {
        DAT_1468b59b0 = 0;
        if (DAT_1468b59a0 != 0) {
          FMemory::Free();
        }
      }
      DAT_1468b59a0 = *plVar2;
      *plVar2 = 0;
      _DAT_1468b59a8 = (undefined4)plVar2[1];
      _DAT_1468b59ac = *(undefined4 *)((longlong)plVar2 + 0xc);
      plVar2[1] = 0;
      DAT_1468b59b0 = '\x01';
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  FString::FString(param_1,&DAT_1468b59a0);
  return param_1;
}



// FUNCTION 14160b770 FUN_14160b770 body=150 status=ok
// SIG undefined FUN_14160b770(void)

undefined8 * FUN_14160b770(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b55d8) {
    _Init_thread_header(&DAT_1468b55d8);
    if (DAT_1468b55d8 == -1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a9638,0);
      FGenericPlatformString::Memcpy(DAT_1464a9638,L"<MISSING STRING TABLE ENTRY>",0x3a);
      atexit((_func_5014 *)&LAB_143e78a00);
      _Init_thread_footer(&DAT_1468b55d8);
      return &DAT_1464a9638;
    }
  }
  return &DAT_1464a9638;
}



// FUNCTION 14160b810 GetPrioritizedCultureNames body=27 status=ok
// SIG undefined GetPrioritizedCultureNames(void)

undefined8 FInternationalization::GetPrioritizedCultureNames(longlong param_1,undefined8 param_2)

{
  FICUInternationalization::GetPrioritizedCultureNames(*(undefined8 *)(param_1 + 0x20));
  return param_2;
}



// FUNCTION 14160b840 GetSharedDisplayString body=156 status=ok
// SIG undefined GetSharedDisplayString(void)

undefined8 * FTextInspector::GetSharedDisplayString(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  (**(code **)(*(longlong *)*param_2 + 0x38))();
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,local_18);
  *param_1 = *puVar5;
  lVar4 = puVar5[1];
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
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
    return param_1;
  }
  return param_1;
}



// FUNCTION 14160b8e0 GetSourceString body=232 status=ok
// SIG undefined GetSourceString(void)

undefined8 FStringTable::GetSourceString(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  BOOL BVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int local_res8 [2];
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xd0);
  BVar6 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar6 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  TSet<TTuple<FString,FString>,FLocKeyMapFuncs<FString>,FDefaultSetAllocator>::FindId
            (param_1 + 0x30,local_res8,param_2);
  if ((local_res8[0] == -1) ||
     (lVar3 = *(longlong *)(param_1 + 0x30) + (longlong)local_res8[0] * 0x28, lVar3 == 0)) {
    plVar8 = (longlong *)0x0;
  }
  else {
    lVar5 = *(longlong *)(lVar3 + 0x10);
    plVar8 = *(longlong **)(lVar3 + 0x18);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    if (lVar5 != 0) {
      FString::operator=(param_3,lVar5 + 0x10);
      uVar7 = 1;
      goto LAB_14160b972;
    }
  }
  uVar7 = 0;
LAB_14160b972:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return uVar7;
}



// FUNCTION 14160b9d0 GetSourceString body=53 status=ok
// SIG undefined GetSourceString(void)

void FTextInspector::GetSourceString(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x28))();
  lVar2 = (**(code **)(*plVar1 + 0x38))(plVar1);
  if (lVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014160b9fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14160ba10 GetSourceString body=57 status=ok
// SIG undefined GetSourceString(void)

char * FTextFormat::GetSourceString(undefined8 *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)*param_1;
  if (*pcVar1 == '\0') {
    FUN_141611fd0(pcVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00014160ba3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar1 = (char *)(**(code **)(**(longlong **)(pcVar1 + 8) + 0x10))();
    return pcVar1;
  }
  return pcVar1 + 0x48;
}



// FUNCTION 14160ba50 FUN_14160ba50 body=286 status=ok
// SIG undefined FUN_14160ba50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14160ba50(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong local_18;
  longlong *local_10;
  
  FUN_14160bd00(param_1,&local_18,0);
  if (local_18 == 0) {
    puVar6 = &DAT_1464a9638;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_1468b55d8) {
      _Init_thread_header(&DAT_1468b55d8);
      if (DAT_1468b55d8 == -1) {
        _DAT_1464a9640 = 0x1d;
        DAT_1464a9638 = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1464a9638,0);
        FGenericPlatformString::Memcpy(DAT_1464a9638,L"<MISSING STRING TABLE ENTRY>",0x3a);
        atexit((_func_5014 *)&LAB_143e78a00);
        _Init_thread_footer(&DAT_1468b55d8);
      }
    }
  }
  else {
    puVar6 = (undefined8 *)(local_18 + 0x10);
  }
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
    return puVar6;
  }
  return puVar6;
}



// FUNCTION 14160bb70 GetSourceText body=390 status=ok
// SIG undefined GetSourceText(void)

undefined8 * FTextFormat::GetSourceText(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char *pcVar4;
  void *_Src;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  uint *puVar8;
  longlong lVar9;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28 [2];
  undefined8 local_20;
  longlong *local_18;
  uint local_10 [2];
  
  pcVar4 = (char *)*param_1;
  if (*pcVar4 == '\0') {
    local_18 = *(longlong **)(pcVar4 + 0x10);
    local_38 = *(undefined8 *)(pcVar4 + 8);
    local_20 = local_38;
    if (local_18 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_18 + 1) = (int)local_18[1] + 1;
      UNLOCK();
    }
    puVar8 = local_10;
    bVar6 = true;
    bVar5 = false;
    local_10[0] = *(uint *)(pcVar4 + 0x18);
    plVar7 = local_18;
  }
  else {
    local_40 = *(int *)(pcVar4 + 0x50);
    lVar9 = (longlong)local_40;
    _Src = *(void **)(pcVar4 + 0x48);
    local_48 = (void *)0x0;
    if (local_40 == 0) {
      local_3c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
      ::_guard_xfg_dispatch_icall_nop(local_48,_Src,lVar9 * 2);
    }
    FUN_1415f0740(&local_38,&local_48);
    if (local_48 != (void *)0x0) {
      FMemory::Free();
    }
    puVar8 = local_28;
    local_28[0] = local_28[0] | 0x12;
    bVar6 = false;
    bVar5 = true;
    plVar7 = local_30;
  }
  *param_2 = local_38;
  param_2[1] = plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  *(uint *)(param_2 + 2) = *puVar8;
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_30 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  plVar7 = local_18;
  if ((bVar6) && (local_18 != (longlong *)0x0)) {
    LOCK();
    plVar2 = local_18 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 14160bd00 FUN_14160bd00 body=1123 status=ok
// SIG undefined FUN_14160bd00(void)

longlong * FUN_14160bd00(longlong param_1,longlong *param_2,byte param_3)

{
  ulonglong *puVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  BOOL BVar8;
  DWORD DVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  int local_res8 [2];
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  
  puVar1 = (ulonglong *)(param_2 + 1);
  uVar11 = 0;
  *param_2 = 0;
  uVar14 = *(ulonglong *)(param_1 + 0x38);
  *puVar1 = uVar14;
  if (uVar14 == 0) {
LAB_14160bd6f:
    plVar10 = (longlong *)*param_2;
  }
  else {
    LOCK();
    iVar7 = *(int *)(uVar14 + 8);
    bVar16 = iVar7 == 0;
    if (bVar16) {
      *(int *)(uVar14 + 8) = 0;
      iVar7 = 0;
    }
    UNLOCK();
    while (!bVar16) {
      LOCK();
      bVar16 = iVar7 == *(int *)(uVar14 + 8);
      if (bVar16) {
        *(int *)(uVar14 + 8) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar16) {
        uVar14 = *puVar1;
        goto LAB_14160bd5c;
      }
      LOCK();
      iVar7 = *(int *)(uVar14 + 8);
      bVar16 = iVar7 == 0;
      if (bVar16) {
        *(int *)(uVar14 + 8) = 0;
        iVar7 = 0;
      }
      UNLOCK();
    }
    *puVar1 = 0;
    uVar14 = uVar11;
LAB_14160bd5c:
    if (uVar14 == 0) goto LAB_14160bd6f;
    plVar10 = *(longlong **)(param_1 + 0x30);
    *param_2 = (longlong)plVar10;
  }
  if (((plVar10 != (longlong *)0x0) && (*plVar10 != 0)) && (plVar10[1] != 0)) {
    piVar2 = (int *)(plVar10[1] + 8);
    LOCK();
    iVar7 = *piVar2;
    if (iVar7 == 0) {
      *piVar2 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (0 < iVar7) goto LAB_14160c122;
  }
  BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  if (BVar8 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
  }
  local_70 = *(longlong **)(param_1 + 0x38);
  local_78 = 0;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    uVar3 = *(uint *)(local_70 + 1);
    bVar16 = uVar3 == 0;
    if (bVar16) {
      *(uint *)(local_70 + 1) = 0;
    }
    else {
      uVar11 = (ulonglong)uVar3;
    }
    UNLOCK();
    while (!bVar16) {
      iVar7 = (int)uVar11;
      LOCK();
      bVar16 = iVar7 == (int)local_70[1];
      if (bVar16) {
        *(int *)(local_70 + 1) = iVar7 + 1;
      }
      UNLOCK();
      if (bVar16) {
        local_78 = *(longlong *)(param_1 + 0x30);
        goto LAB_14160bdf3;
      }
      uVar11 = 0;
      LOCK();
      uVar3 = *(uint *)(local_70 + 1);
      bVar16 = uVar3 == 0;
      if (bVar16) {
        *(uint *)(local_70 + 1) = 0;
      }
      else {
        uVar11 = (ulonglong)uVar3;
      }
      UNLOCK();
    }
    local_70 = (longlong *)0x0;
  }
LAB_14160bdf3:
  if (param_2 != &local_78) {
    *param_2 = local_78;
    local_78 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(puVar1,&local_70);
  }
  plVar10 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_70 + 1;
    lVar4 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  plVar10 = (longlong *)*param_2;
  if (((plVar10 == (longlong *)0x0) || (*plVar10 == 0)) || (plVar10[1] == 0)) {
LAB_14160be7b:
    bVar6 = 0;
    if (*(char *)(param_1 + 0x28) == '\0') {
LAB_14160bec1:
      param_3 = param_3 | bVar6;
    }
    else {
      cVar5 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
         (DVar9 = GetCurrentThreadId(), DVar9 != DAT_1468c21c0)) {
        bVar6 = *(byte *)(param_1 + 0x28);
        goto LAB_14160bec1;
      }
      FStringTableRedirects::RedirectTableIdAndKey(param_1 + 0x10,param_1 + 0x18,1);
      *(undefined1 *)(param_1 + 0x28) = 0;
    }
    local_50 = (longlong *)0x0;
    if (param_2 != &local_58) {
      *param_2 = 0;
      local_58 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_50);
      plVar10 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_50 + 1;
        lVar4 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
    uVar12 = FUN_141607d00();
    FStringTableRegistry::FindStringTable(uVar12,&local_48,*(undefined8 *)(param_1 + 0x10));
    if (local_48 != 0) {
      lpCriticalSection = (LPCRITICAL_SECTION)(local_48 + 0xd0);
      param_3 = param_3 | *(char *)(local_48 + 0x18) == '\0';
      BVar8 = TryEnterCriticalSection(lpCriticalSection);
      if (BVar8 == 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      TSet<TTuple<FString,FString>,FLocKeyMapFuncs<FString>,FDefaultSetAllocator>::FindId
                (local_48 + 0x30,local_res8,param_1 + 0x18);
      if ((local_res8[0] == -1) ||
         (lVar4 = *(longlong *)(local_48 + 0x30) + (longlong)local_res8[0] * 0x28, lVar4 == 0)) {
        lVar15 = 0;
        plVar10 = (longlong *)0x0;
      }
      else {
        lVar15 = *(longlong *)(lVar4 + 0x10);
        plVar10 = *(longlong **)(lVar4 + 0x18);
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
      }
      local_68 = lVar15;
      local_60 = plVar10;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar10 + 1;
          lVar4 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
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
      }
      LeaveCriticalSection(lpCriticalSection);
      if (param_2 != &local_68) {
        *param_2 = lVar15;
        local_68 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_60);
      }
      plVar10 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_60 + 1;
        lVar4 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
    }
    *(longlong *)(param_1 + 0x30) = *param_2;
    plVar10 = (longlong *)param_2[1];
    plVar13 = *(longlong **)(param_1 + 0x38);
    if (plVar10 != plVar13) {
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        plVar13 = *(longlong **)(param_1 + 0x38);
      }
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
      *(longlong **)(param_1 + 0x38) = plVar10;
    }
    plVar10 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_40 + 1;
      lVar4 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  else {
    piVar2 = (int *)(plVar10[1] + 8);
    LOCK();
    iVar7 = *piVar2;
    if (iVar7 == 0) {
      *piVar2 = 0;
      iVar7 = 0;
    }
    UNLOCK();
    if (iVar7 < 1) goto LAB_14160be7b;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x40));
LAB_14160c122:
  if ((*param_2 == 0) && (param_3 == 0)) {
    uVar12 = FUN_141607d00();
    FUN_14160faf0(uVar12,*(undefined8 *)(param_1 + 0x10),param_1 + 0x18);
  }
  return param_2;
}



// FUNCTION 14160c170 GetTableIdAndKey body=112 status=ok
// SIG undefined GetTableIdAndKey(void)

undefined8
FTextInspector::GetTableIdAndKey(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x28))();
  iVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  if (iVar1 == 0xb) {
    lVar3 = (**(code **)(*(longlong *)*param_1 + 0x28))();
    *param_2 = *(undefined8 *)(lVar3 + 0x10);
    FString::operator=(param_3,lVar3 + 0x18);
    return 1;
  }
  return 0;
}



// FUNCTION 14160c1e0 FUN_14160c1e0 body=199 status=ok
// SIG undefined FUN_14160c1e0(void)

undefined8 * FUN_14160c1e0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)(param_1 + 0x98);
  lVar3 = (**(code **)(*(longlong *)*puVar1 + 0x10))();
  if (*(int *)(lVar3 + 8) < 2) {
    if ((1 < *(int *)(param_1 + 0x30)) && (1 < *(int *)(param_1 + 0x40))) {
      lVar3 = DAT_1468b5998;
      if (DAT_1468b5998 == 0) {
        lVar4 = operator_new(0x110);
        lVar3 = 0;
        if (lVar4 != 0) {
          lVar3 = FUN_1415f3b10(lVar4);
        }
      }
      DAT_1468b5998 = lVar3;
      FUN_1416126f0(DAT_1468b5998,param_1,1);
      cVar2 = FUN_141606040(param_1 + 0x18,param_1 + 0x28,puVar1,param_1 + 0x38);
      if (cVar2 != '\0') goto LAB_14160c277;
    }
    uVar5 = FUN_1404b03b0();
    FText::operator=(puVar1,uVar5);
  }
LAB_14160c277:
  *param_2 = *puVar1;
  lVar3 = *(longlong *)(param_1 + 0xa0);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0xa8);
  return param_2;
}



// FUNCTION 14160c2d0 FUN_14160c2d0 body=6 status=ok
// SIG undefined FUN_14160c2d0(void)

undefined8 FUN_14160c2d0(void)

{
  return 10;
}



// FUNCTION 14160c2e0 FUN_14160c2e0 body=126 status=ok
// SIG undefined FUN_14160c2e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14160c2e0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b58e0) {
    _Init_thread_header(&DAT_1468b58e0);
    if (DAT_1468b58e0 == -1) {
      _DAT_1468b58d0 = 0x960eead8;
      _DAT_1468b58d4 = 0x34d44d08;
      _DAT_1468b58d8 = 0xbc1118d9;
      _DAT_1468b58dc = 0x5bdf8d43;
      _Init_thread_footer(&DAT_1468b58e0);
    }
  }
  return &DAT_1468b58d0;
}



// FUNCTION 14160c360 FUN_14160c360 body=126 status=ok
// SIG undefined FUN_14160c360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14160c360(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b58c8) {
    _Init_thread_header(&DAT_1468b58c8);
    if (DAT_1468b58c8 == -1) {
      _DAT_1468b58b8 = 0x5fd9ef1a;
      _DAT_1468b58bc = 0x9d484d65;
      _DAT_1468b58c0 = 0x92065566;
      _DAT_1468b58c4 = 0xd3542547;
      _Init_thread_footer(&DAT_1468b58c8);
    }
  }
  return &DAT_1468b58b8;
}



// FUNCTION 14160c3e0 FUN_14160c3e0 body=126 status=ok
// SIG undefined FUN_14160c3e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14160c3e0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b58f8) {
    _Init_thread_header(&DAT_1468b58f8);
    if (DAT_1468b58f8 == -1) {
      _DAT_1468b58e8 = 0x460b9845;
      _DAT_1468b58ec = 0xaaa9420c;
      _DAT_1468b58f0 = 0x8125f5c5;
      _DAT_1468b58f4 = 0xe13995df;
      _Init_thread_footer(&DAT_1468b58f8);
    }
  }
  return &DAT_1468b58e8;
}



// FUNCTION 14160c460 FUN_14160c460 body=126 status=ok
// SIG undefined FUN_14160c460(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14160c460(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468b58b0) {
    _Init_thread_header(&DAT_1468b58b0);
    if (DAT_1468b58b0 == -1) {
      _DAT_1468b58a0 = 0x595a123b;
      _DAT_1468b58a4 = 0x9418491f;
      _DAT_1468b58a8 = 0xb416e9db;
      _DAT_1468b58ac = 0xd2127828;
      _Init_thread_footer(&DAT_1468b58b0);
    }
  }
  return &DAT_1468b58a0;
}



// FUNCTION 14160c4e0 HashKey body=161 status=ok
// SIG undefined HashKey(void)

void FTextCache::FCacheKey::HashKey(undefined8 *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined2 *puVar6;
  
  puVar6 = &DAT_143f3eda8;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  if (*(char *)(param_1 + 6) == '\0') {
    puVar4 = (undefined2 *)*param_1;
  }
  else if (*(int *)(param_1 + 3) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)param_1[2];
  }
  lVar5 = -1;
  lVar3 = -1;
  do {
    lVar1 = lVar3 + 1;
    lVar3 = lVar3 + 1;
  } while (puVar4[lVar1] != 0);
  uVar2 = FCrc::MemCrc32(puVar4,(int)lVar3 * 2,0);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar2;
  if (*(char *)(param_1 + 6) == '\0') {
    puVar6 = (undefined2 *)param_1[1];
  }
  else if (*(int *)(param_1 + 5) != 0) {
    puVar6 = (undefined2 *)param_1[4];
  }
  do {
    lVar3 = lVar5 + 1;
    lVar5 = lVar5 + 1;
  } while (puVar6[lVar3] != 0);
  uVar2 = FCrc::MemCrc32(puVar6,(int)lVar5 * 2,uVar2);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar2;
  return;
}



// FUNCTION 14160c590 IdenticalTo body=239 status=ok
// SIG undefined IdenticalTo(void)

undefined8 FText::IdenticalTo(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  param_1 = (longlong *)*param_1;
  param_2 = (longlong *)*param_2;
  bVar4 = false;
  bVar3 = false;
  if (param_1 != param_2) {
    plVar6 = (longlong *)(**(code **)(*param_2 + 0x18))(param_2,local_18);
    plVar7 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1,local_28);
    bVar4 = true;
    bVar3 = true;
    if (*plVar7 != *plVar6) {
      uVar8 = 0;
      goto LAB_14160c5e7;
    }
  }
  uVar8 = 1;
LAB_14160c5e7:
  if (bVar3) {
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_20 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  if ((bVar4) && (local_10 != (longlong *)0x0)) {
    LOCK();
    plVar6 = local_10 + 1;
    lVar5 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return uVar8;
}



// FUNCTION 14160c680 IdenticalTo body=101 status=ok
// SIG undefined IdenticalTo(void)

ulonglong FTextSnapshot::IdenticalTo(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  
  FUN_141611fd0(param_2);
  plVar2 = (longlong *)*param_1;
  if ((plVar2 != (longlong *)0x0) && (plVar2 == (longlong *)*param_2)) {
    plVar2 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x40))();
    if ((short)param_1[2] == (short)plVar2) {
      plVar2 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x48))();
      if (*(short *)((longlong)param_1 + 0x12) == (short)plVar2) {
        uVar1 = *(uint *)(param_2 + 2);
        plVar2 = (longlong *)(ulonglong)uVar1;
        if (*(uint *)((longlong)param_1 + 0x14) == uVar1) {
          return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
        }
      }
    }
  }
  return (ulonglong)plVar2 & 0xffffffffffffff00;
}



// FUNCTION 14160c6f0 FUN_14160c6f0 body=309 status=ok
// SIG undefined FUN_14160c6f0(void)

void FUN_14160c6f0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  LARGE_INTEGER local_res8;
  longlong local_18 [2];
  
  QueryPerformanceCounter(&local_res8);
  FUN_14160c960();
  FUN_1415fb3d0(0x1c);
  lVar6 = FInternationalization::Get();
  FUN_14160b510(local_18,1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  uVar7 = *(undefined8 *)(lVar6 + 0x28);
  plVar4 = *(longlong **)(lVar6 + 0x30);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (DAT_1468b5998 == (undefined1 *)0x0) {
    lVar6 = operator_new(0x110);
    if (lVar6 == 0) {
      DAT_1468b5998 = (undefined1 *)0x0;
    }
    else {
      DAT_1468b5998 = (undefined1 *)FUN_1415f3b10(lVar6);
    }
  }
  puVar5 = DAT_1468b5998;
  uVar7 = FCulture::GetName(uVar7);
  FUN_14160e250(puVar5,uVar7,0x18);
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
  if (DAT_1468b5998 == (undefined1 *)0x0) {
    lVar6 = operator_new(0x110);
    if (lVar6 == 0) {
      DAT_00000000 = 1;
      DAT_1468b5998 = (undefined1 *)0x0;
      return;
    }
    DAT_1468b5998 = (undefined1 *)FUN_1415f3b10(lVar6);
  }
  *DAT_1468b5998 = 1;
  return;
}



// FUNCTION 14160c830 FUN_14160c830 body=304 status=ok
// SIG undefined FUN_14160c830(void)

void FUN_14160c830(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  LARGE_INTEGER local_res8;
  longlong local_18 [2];
  
  QueryPerformanceCounter(&local_res8);
  FUN_1415fb3d0(4);
  lVar6 = FInternationalization::Get();
  FUN_14160b640(local_18,1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  uVar7 = *(undefined8 *)(lVar6 + 0x28);
  plVar4 = *(longlong **)(lVar6 + 0x30);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (DAT_1468b5998 == (undefined1 *)0x0) {
    lVar6 = operator_new(0x110);
    if (lVar6 == 0) {
      DAT_1468b5998 = (undefined1 *)0x0;
    }
    else {
      DAT_1468b5998 = (undefined1 *)FUN_1415f3b10(lVar6);
    }
  }
  puVar5 = DAT_1468b5998;
  uVar7 = FCulture::GetName(uVar7);
  FUN_14160e250(puVar5,uVar7,4);
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
  if (DAT_1468b5998 == (undefined1 *)0x0) {
    lVar6 = operator_new(0x110);
    if (lVar6 == 0) {
      DAT_00000000 = 1;
      DAT_1468b5998 = (undefined1 *)0x0;
      return;
    }
    DAT_1468b5998 = (undefined1 *)FUN_1415f3b10(lVar6);
  }
  *DAT_1468b5998 = 1;
  return;
}



// FUNCTION 14160c960 FUN_14160c960 body=1320 status=ok
// SIG undefined FUN_14160c960(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14160c960(void)

{
  ulonglong uVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined *puVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  wchar_t *pwVar12;
  uint *puVar13;
  longlong lVar14;
  undefined1 auStack_958 [32];
  undefined8 *local_938;
  longlong local_928;
  undefined8 local_920;
  longlong *local_918;
  undefined8 local_910;
  uint *puStack_908;
  undefined4 local_900;
  int iStack_8fc;
  int iStack_8f8;
  undefined4 uStack_8f4;
  int local_8f0 [2];
  longlong local_8e8;
  undefined8 local_8e0;
  longlong local_8d8;
  undefined8 local_8d0;
  longlong *local_8c8;
  undefined8 uStack_8c0;
  uint *local_8b8;
  undefined8 uStack_8b0;
  undefined1 local_8a8 [16];
  longlong *local_898;
  undefined2 local_890;
  undefined1 local_888 [4];
  undefined1 local_884 [4];
  longlong *local_880;
  undefined8 *local_878;
  longlong *local_870;
  longlong *plStack_868;
  uint *puStack_860;
  undefined1 auStack_858 [16];
  undefined8 local_848;
  wchar_t local_838 [1024];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_958;
  local_938 = &DAT_1468e2360;
  local_8c8 = (longlong *)FConfigCacheIni::GetSectionPrivate(DAT_1468b6148,L"Core.StringTable",0,1);
  if (local_8c8 != (longlong *)0x0) {
    iVar8 = (int)local_8c8[5];
    puStack_908 = (uint *)(local_8c8 + 2);
    local_910 = (longlong *)0x100000000;
    iStack_8fc = 0;
    iStack_8f8 = 0;
    if (iVar8 != 0) {
      puVar13 = (uint *)local_8c8[4];
      if ((uint *)local_8c8[4] == (uint *)0x0) {
        puVar13 = puStack_908;
      }
      uVar4 = *puVar13;
      iVar5 = 0;
      iStack_8f8 = 0;
      while (uVar4 == 0) {
        iStack_8f8 = iStack_8f8 + 0x20;
        uVar1 = (ulonglong)local_910 >> 0x20;
        local_910 = (longlong *)CONCAT44((int)uVar1,iVar5 + 1);
        if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_14160ca74;
        uVar4 = puVar13[(longlong)iVar5 + 1];
        iVar5 = iVar5 + 1;
      }
      uVar4 = -uVar4 & uVar4;
      iVar5 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      local_910 = (longlong *)CONCAT44(uVar4,SUB84(local_910,0));
      if (uVar4 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      iStack_8fc = (iStack_8f8 - iVar5) + 0x1f;
      if (iVar8 < iStack_8fc) {
LAB_14160ca74:
        iStack_8fc = iVar8;
      }
    }
    local_900 = 0xffffffff;
    uStack_8b0 = CONCAT44(iStack_8fc,0xffffffff);
    auStack_858._8_4_ = iStack_8f8;
    auStack_858._0_8_ = uStack_8b0;
    auStack_858._12_4_ = uStack_8f4;
    plStack_868 = local_910;
    local_890 = 0;
    local_848._0_4_ = SUB84(local_8c8,0);
    local_848._4_4_ = (undefined4)((ulonglong)local_8c8 >> 0x20);
    uStack_8c0 = local_910;
    local_8a8._8_4_ = (undefined4)local_848;
    local_8a8._0_8_ = auStack_858._8_8_;
    local_8a8._12_4_ = local_848._4_4_;
    iVar8 = iStack_8fc;
    local_8b8 = puStack_908;
    local_898 = local_8c8;
    local_870 = local_8c8;
    puStack_860 = puStack_908;
    local_848 = local_8c8;
    if (iStack_8fc < (int)local_8c8[5]) {
      do {
        plVar2 = local_8c8;
        lVar14 = *local_8c8 + (longlong)iVar8 * 0x30;
        pbVar6 = (byte *)FName::GetComparisonNameEntry(lVar14);
        if (pbVar6 != (byte *)0x0) {
          local_918 = (longlong *)((ulonglong)local_918 & 0xffffffff00000000);
          pwVar12 = L"StringTableRedirects";
          cVar3 = FName::SplitNameWithCheck(L"StringTableRedirects",local_838,0x400,&local_918);
          iVar5 = 0;
          if (cVar3 != '\0') {
            pwVar12 = local_838;
            iVar5 = (int)local_918 + 1;
          }
          if (iVar5 == *(int *)(lVar14 + 4)) {
            if ((*pbVar6 & 1) == 0) {
              iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,char>(pwVar12,pbVar6 + 0x10);
            }
            else {
              iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>();
            }
            if (iVar5 == 0) {
              lVar14 = *plVar2 + (longlong)iVar8 * 0x30;
              iVar8 = *(int *)(lVar14 + 0x20);
              local_928 = 0;
              local_920 = 0;
              local_8d8 = 0;
              local_8d0 = 0;
              iVar5 = iVar8 + -1;
              if (iVar8 == 0) {
                iVar5 = 0;
              }
              local_8e8 = 0;
              local_8e0 = 0;
              lVar10 = 0x18;
              if (iVar5 < 1) {
                lVar10 = 8;
              }
              puVar11 = (undefined8 *)(lVar10 + lVar14);
              if (*(int *)(puVar11 + 1) == 0) {
                puVar9 = &DAT_143f3eda8;
              }
              else {
                puVar9 = (undefined2 *)*puVar11;
              }
              cVar3 = FParse::Value(puVar9,L"OldStringTable=",&local_928);
              if (cVar3 == '\0') {
                if (*(int *)(puVar11 + 1) == 0) {
                  puVar9 = &DAT_143f3eda8;
                }
                else {
                  puVar9 = (undefined2 *)*puVar11;
                }
                cVar3 = FParse::Value(puVar9,L"StringTable=",&local_928);
                if (cVar3 != '\0') {
                  if (*(int *)(puVar11 + 1) == 0) {
                    puVar9 = &DAT_143f3eda8;
                  }
                  else {
                    puVar9 = (undefined2 *)*puVar11;
                  }
                  FParse::Value(puVar9,L"OldKey=",&local_8d8,1);
                  if (*(int *)(puVar11 + 1) == 0) {
                    puVar9 = &DAT_143f3eda8;
                  }
                  else {
                    puVar9 = (undefined2 *)*puVar11;
                  }
                  FParse::Value(puVar9,L"NewKey=",&local_8e8,1);
                  if ((1 < (int)local_8d0) && (1 < (int)local_8e0)) {
                    if (DAT_1464a93a8 != DAT_1464a93d4) {
                      puVar7 = DAT_1464a93e0;
                      if (DAT_1464a93e0 == (undefined *)0x0) {
                        puVar7 = &DAT_1464a93d8;
                      }
                      iVar8 = *(int *)(puVar7 + (longlong)
                                                (int)((int)((ulonglong)local_928 >> 0x20) +
                                                      (int)local_928 & DAT_1464a93e8 - 1U) * 4);
                      while (iVar8 != -1) {
                        lVar14 = (longlong)iVar8 * 0x60;
                        if (*(longlong *)(lVar14 + DAT_1464a93a0) == local_928) {
                          if ((iVar8 != -1) && (lVar14 = DAT_1464a93a0 + lVar14, lVar14 != 0))
                          goto LAB_14160cdb4;
                          break;
                        }
                        iVar8 = *(int *)(lVar14 + DAT_1464a93a0 + 0x58);
                      }
                    }
                    local_918 = &local_928;
                    FUN_1415ea240(&DAT_1464a93a0,local_8f0,&local_918,0);
                    lVar14 = (longlong)local_8f0[0] * 0x60 + DAT_1464a93a0;
LAB_14160cdb4:
                    local_910 = &local_8d8;
                    puStack_908 = (uint *)&local_8e8;
                    TSet<TTuple<FString,FString>,FLocKeyMapFuncs<FString>,FDefaultSetAllocator>::
                    Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                              (lVar14 + 8,local_884,&local_910,0);
                  }
                }
              }
              else {
                if (*(int *)(puVar11 + 1) == 0) {
                  puVar9 = &DAT_143f3eda8;
                }
                else {
                  puVar9 = (undefined2 *)*puVar11;
                }
                FParse::Value(puVar9,L"NewStringTable=",&local_920);
                if (((int)local_920 != 0) || (local_920._4_4_ != 0)) {
                  local_880 = &local_928;
                  local_878 = &local_920;
                  TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
                            (&DAT_1464a9350,local_888,&local_880,0);
                }
              }
              if (local_8e8 != 0) {
                FMemory::Free();
              }
              if (local_8d8 != 0) {
                FMemory::Free();
              }
            }
          }
        }
        uStack_8b0 = CONCAT44(uStack_8b0._4_4_,(uint)uStack_8b0 & ~uStack_8c0._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_8c0);
        iVar8 = uStack_8b0._4_4_;
      } while (uStack_8b0._4_4_ < (int)local_8b8[6]);
      if (((char)local_890 != '\0') && (local_890._1_1_ != '\0')) {
        TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_898,(int)local_898[1] - *(int *)((longlong)local_898 + 0x34),1);
      }
    }
  }
  return;
}



// FUNCTION 14160ce90 IsAvailable body=23 status=ok
// SIG undefined IsAvailable(void)

longlong FInternationalization::IsAvailable(void)

{
  uint7 uVar1;
  
  uVar1 = (uint7)((ulonglong)DAT_1468b53e8 >> 8);
  if ((DAT_1468b53e8 != (char *)0x0) && (*DAT_1468b53e8 != '\0')) {
    return CONCAT71(uVar1,1);
  }
  return (ulonglong)uVar1 << 8;
}



// FUNCTION 14160ceb0 IsComplexText body=229 status=ok
// SIG undefined IsComplexText(void)

ulonglong FTextStringHelper::IsComplexText(wchar_t *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  ulonglong uVar3;
  wchar_t *pwVar4;
  
  iVar2 = 0;
  if (DAT_1464a9308 == 0) {
    iVar1 = 0;
    pwVar4 = L"";
  }
  else {
    iVar1 = DAT_1464a9308 + -1;
    pwVar4 = DAT_1464a9300;
  }
  iVar1 = wcsncmp(param_1,pwVar4,(longlong)iVar1);
  uVar3 = CONCAT44(extraout_var,iVar1);
  if (iVar1 != 0) {
    if (DAT_1464a9318 == 0) {
      iVar1 = 0;
      pwVar4 = L"";
    }
    else {
      iVar1 = DAT_1464a9318 + -1;
      pwVar4 = DAT_1464a9310;
    }
    iVar1 = wcsncmp(param_1,pwVar4,(longlong)iVar1);
    uVar3 = CONCAT44(extraout_var_00,iVar1);
    if (iVar1 != 0) {
      if (DAT_1464a9328 == 0) {
        iVar1 = 0;
        pwVar4 = L"";
      }
      else {
        iVar1 = DAT_1464a9328 + -1;
        pwVar4 = DAT_1464a9320;
      }
      iVar1 = wcsncmp(param_1,pwVar4,(longlong)iVar1);
      uVar3 = CONCAT44(extraout_var_01,iVar1);
      if (iVar1 != 0) {
        pwVar4 = L"";
        if (DAT_1464a9338 != 0) {
          iVar2 = DAT_1464a9338 + -1;
          pwVar4 = DAT_1464a9330;
        }
        iVar2 = wcsncmp(param_1,pwVar4,(longlong)iVar2);
        uVar3 = CONCAT44(extraout_var_02,iVar2);
        if (iVar2 != 0) {
          return uVar3 & 0xffffffffffffff00;
        }
      }
    }
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 14160cfa0 IsControlCharacter body=66 status=ok
// SIG undefined IsControlCharacter(void)

undefined8 TextBiDi::IsControlCharacter(short param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0x61c;
  if ((param_1 != 0x61c) &&
     (((0x20 < (ushort)(param_1 + 0xdff2U) ||
       (uVar1 = (ulonglong)(ushort)(param_1 + 0xdff2U), (0x1f0000003U >> (uVar1 & 0x3f) & 1) == 0))
      && (uVar1 = 0x2066, 3 < (ushort)(param_1 + 0xdf9aU))))) {
    return 0x2000;
  }
  return CONCAT71((int7)(uVar1 >> 8),1);
}



// FUNCTION 14160cff0 IsCultureInvariant body=8 status=ok
// SIG undefined IsCultureInvariant(void)

uint FText::IsCultureInvariant(longlong param_1)

{
  return CONCAT31((uint3)(*(uint *)(param_1 + 0x10) >> 9),(char)(*(uint *)(param_1 + 0x10) >> 1)) &
         0xffffff01;
}



// FUNCTION 14160d000 IsDisplayStringEqualTo body=178 status=ok
// SIG undefined IsDisplayStringEqualTo(void)

ulonglong FTextSnapshot::IsDisplayStringEqualTo(longlong *param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ushort *puVar6;
  undefined2 *puVar7;
  longlong lVar8;
  
  FUN_141611fd0(param_2);
  uVar3 = (**(code **)(*(longlong *)*param_2 + 0x40))();
  if ((short)param_1[2] == (short)uVar3) {
    uVar3 = (**(code **)(*(longlong *)*param_2 + 0x48))();
    if ((*(short *)((longlong)param_1 + 0x12) == (short)uVar3) &&
       (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
      FUN_141611fd0(param_2);
      puVar4 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x10))();
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
      puVar6 = &DAT_143f3eda8;
      if (*(int *)(puVar4 + 1) == 0) {
        puVar7 = &DAT_143f3eda8;
      }
      else {
        puVar7 = (undefined2 *)*puVar4;
      }
      if (*(int *)(puVar5 + 1) != 0) {
        puVar6 = (ushort *)*puVar5;
      }
      lVar8 = (longlong)puVar7 - (longlong)puVar6;
      do {
        uVar1 = *puVar6;
        uVar2 = *(ushort *)((longlong)puVar6 + lVar8);
        uVar3 = (ulonglong)uVar2;
        if (uVar1 != uVar2) break;
        puVar6 = puVar6 + 1;
      } while (uVar2 != 0);
      if (uVar1 == uVar2) {
        return CONCAT71((uint7)(byte)(uVar2 >> 8),1);
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 14160d0c0 IsEmpty body=25 status=ok
// SIG undefined IsEmpty(void)

bool FText::IsEmpty(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)*param_1 + 0x10))();
  return *(int *)(lVar1 + 8) < 2;
}



// FUNCTION 14160d0e0 IsEmptyOrWhitespace body=100 status=ok
// SIG undefined IsEmptyOrWhitespace(void)

undefined8 FText::IsEmptyOrWhitespace(undefined8 *param_1)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 0x10))();
  iVar1 = *(int *)(puVar3 + 1);
  if (1 < iVar1) {
    puVar4 = (undefined2 *)*puVar3;
    puVar5 = puVar4 + iVar1 + -1;
    if (iVar1 == 0) {
      puVar5 = puVar4 + iVar1;
    }
    for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      cVar2 = IsWhitespace(*puVar4);
      if (cVar2 == '\0') {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 14160d150 IsFromStringTable body=33 status=ok
// SIG undefined IsFromStringTable(void)

bool FText::IsFromStringTable(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x28))();
  iVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  return iVar1 == 0xb;
}



// FUNCTION 14160d180 FUN_14160d180 body=71 status=ok
// SIG undefined FUN_14160d180(void)

undefined2 FUN_14160d180(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = DAT_1468b5998;
  if (DAT_1468b5998 == 0) {
    lVar1 = operator_new(0x110);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = FUN_1415f3b10(lVar1);
    }
  }
  DAT_1468b5998 = lVar2;
  return CONCAT11((char)((ushort)*(short *)(DAT_1468b5998 + 0xd0) >> 8),
                  *(short *)(param_1 + 8) != *(short *)(DAT_1468b5998 + 0xd0));
}



// FUNCTION 14160d1d0 IsTransient body=7 status=ok
// SIG undefined IsTransient(void)

byte FText::IsTransient(longlong param_1)

{
  return *(byte *)(param_1 + 0x10) & 1;
}



// FUNCTION 14160d1e0 IsValid body=293 status=ok
// SIG undefined IsValid(void)

undefined8 FPolyglotTextData::IsValid(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 local_38;
  longlong *local_30;
  undefined4 local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined4 local_10;
  
  if (*(int *)(param_1 + 0x30) < 2) {
    if (param_2 == (undefined8 *)0x0) {
      return 0;
    }
    uVar5 = FUN_141607df0();
    FTextCache::FindOrCache
              (uVar5,&local_38,L"Polyglot data has no key set",L"PolyglotTextData",
               L"ValidationError_NoKey");
    uVar5 = *param_2;
    *param_2 = local_38;
    plVar6 = (longlong *)param_2[1];
    param_2[1] = local_30;
    local_38 = uVar5;
    local_30 = plVar6;
  }
  else {
    if (1 < *(int *)(param_1 + 0x40)) {
      return 1;
    }
    if (param_2 == (undefined8 *)0x0) {
      return 0;
    }
    uVar5 = FUN_141607df0();
    FTextCache::FindOrCache
              (uVar5,&local_20,L"Polyglot data has no native string set",L"PolyglotTextData",
               L"ValidationError_NoNativeString");
    uVar5 = *param_2;
    *param_2 = local_20;
    plVar6 = (longlong *)param_2[1];
    param_2[1] = local_18;
    local_28 = local_10;
    local_20 = uVar5;
    local_18 = plVar6;
  }
  *(undefined4 *)(param_2 + 2) = local_28;
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
  return 0;
}



// FUNCTION 14160d310 FUN_14160d310 body=74 status=ok
// SIG undefined FUN_14160d310(void)

bool FUN_14160d310(longlong *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  longlong lVar2;
  BOOL BVar3;
  
  lVar2 = *param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0x20);
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar1 = *(int *)(lVar2 + 0x80);
  LeaveCriticalSection(lpCriticalSection);
  return iVar1 != 0;
}



// FUNCTION 14160d360 FUN_14160d360 body=479 status=ok
// SIG undefined FUN_14160d360(void)

undefined1 FUN_14160d360(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  ulonglong local_res8;
  undefined1 local_res10 [8];
  undefined8 *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 *local_48;
  int local_40;
  undefined4 local_3c;
  
  iVar11 = *(int *)(param_1 + 0x10);
  iVar12 = 0;
  lVar10 = *(longlong *)(param_1 + 8);
  local_58 = (undefined8 *)0x0;
  local_50 = iVar11;
  if (iVar11 == 0) {
    local_4c = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_58,iVar11,0);
    lVar10 = lVar10 - (longlong)local_58;
    puVar9 = local_58;
    do {
      *puVar9 = *(undefined8 *)(lVar10 + (longlong)puVar9);
      lVar1 = *(longlong *)(lVar10 + 8 + (longlong)puVar9);
      puVar9[1] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      puVar9 = puVar9 + 2;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  iVar11 = *(int *)(param_2 + 0x10);
  lVar10 = *(longlong *)(param_2 + 8);
  local_48 = (undefined8 *)0x0;
  local_40 = iVar11;
  if (iVar11 == 0) {
    local_3c = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_48,iVar11,0);
    lVar10 = lVar10 - (longlong)local_48;
    puVar9 = local_48;
    do {
      *puVar9 = *(undefined8 *)(lVar10 + (longlong)puVar9);
      lVar1 = *(longlong *)(lVar10 + 8 + (longlong)puVar9);
      puVar9[1] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      puVar9 = puVar9 + 2;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  iVar4 = local_40;
  puVar13 = local_48;
  iVar11 = local_50;
  puVar9 = local_58;
  FUN_1415edd30(local_58,(longlong)local_50,local_res8 & 0xff,&local_res8);
  FUN_1415edd30(puVar13,(longlong)iVar4,local_res8 & 0xff,local_res10);
  if (0 < iVar11) {
    local_res8 = (longlong)puVar13 - (longlong)puVar9;
    puVar13 = puVar9;
    do {
      if (iVar4 <= iVar12) goto LAB_14160d50f;
      plVar2 = (longlong *)*puVar13;
      plVar3 = *(longlong **)(local_res8 + (longlong)puVar13);
      iVar7 = (**(code **)(*plVar2 + 0x38))(plVar2);
      iVar8 = (**(code **)(*plVar3 + 0x38))(plVar3);
      if ((iVar7 != iVar8) || (cVar5 = (**(code **)(*plVar2 + 0x40))(plVar2,plVar3), cVar5 == '\0'))
      {
        uVar6 = FLocMetadataValue::operator<
                          (puVar9[(longlong)iVar12 * 2],local_48[(longlong)iVar12 * 2]);
        goto LAB_14160d511;
      }
      iVar12 = iVar12 + 1;
      puVar13 = puVar13 + 2;
    } while (iVar12 < iVar11);
  }
  if (iVar11 < iVar4) {
    uVar6 = 1;
  }
  else {
LAB_14160d50f:
    uVar6 = 0;
  }
LAB_14160d511:
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_48);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_58);
  return uVar6;
}



// FUNCTION 14160d590 LessThan body=54 status=ok
// SIG undefined LessThan(void)

bool FLocMetadataValueString::LessThan(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  puVar2 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 0x10) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = *(undefined2 **)(param_2 + 8);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = *(undefined2 **)(param_1 + 8);
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
  return iVar1 < 0;
}



// FUNCTION 14160d5d0 FUN_14160d5d0 body=1541 status=ok
// SIG undefined FUN_14160d5d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14160d5d0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  void *_Src;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_138 [32];
  byte local_118 [4];
  int local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong *plStack_e0;
  longlong *local_d8;
  undefined8 local_d0;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 *local_88;
  longlong *local_80;
  undefined1 local_78 [16];
  undefined1 *local_68;
  undefined1 **local_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_98 = param_1;
  local_88 = param_3;
  (**(code **)(*param_2 + 0x198))(param_2,1);
  local_f8 = 0;
  local_f0 = 0;
  uVar7 = (**(code **)(*param_2 + 0x98))(param_2);
  if (0xf < uVar7) {
    FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_78,param_2);
    local_68 = local_78;
    local_60 = &local_68;
    FUN_141661f40(&local_68,&local_f8);
    FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_78);
  }
  local_118[0] = 0;
  if ((((int)local_f8 == _DAT_1464a9410 && local_f8._4_4_ == _DAT_1464a9414) &&
      (int)local_f0 == _DAT_1464a9418) && local_f0._4_4_ == _DAT_1464a941c) {
    plVar11 = (longlong *)param_2[1];
    if ((byte *)plVar11[1] < (byte *)*plVar11 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_118,1);
    }
    else {
      local_118[0] = *(byte *)*plVar11;
      *plVar11 = *plVar11 + 1;
    }
  }
  else {
    (**(code **)(*param_2 + 0xa8))(param_2,0);
  }
  if (local_118[0] < 2) {
    local_d8 = (longlong *)0x0;
    local_d0 = 0;
    if (local_118[0] != 0) {
      plVar11 = (longlong *)param_2[1];
      local_100 = -1;
      if ((longlong *)plVar11[1] < (longlong *)*plVar11 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,&local_100,8);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,&local_100,8);
        }
      }
      else {
        local_100 = *(longlong *)*plVar11;
        *plVar11 = *plVar11 + 8;
      }
      if (local_100 != -1) {
        uVar8 = (**(code **)(*param_2 + 0x90))(param_2);
        (**(code **)(*param_2 + 0xa8))(param_2,local_100);
        FUN_1415a1810(param_2,&local_d8);
        (**(code **)(*param_2 + 0xa8))(param_2,uVar8);
        param_1 = local_98;
      }
    }
    plVar11 = (longlong *)param_2[1];
    if ((uint *)plVar11[1] < (uint *)*plVar11 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_10c,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&local_10c,4);
      }
    }
    else {
      local_10c = *(uint *)*plVar11;
      *plVar11 = *plVar11 + 4;
    }
    local_108 = 0;
    if (local_10c != 0) {
      do {
        uVar14 = local_108;
        uVar15 = 0;
        local_a8 = 0;
        local_a0 = 0;
        FUN_14158ce90(param_2,&local_a8);
        plVar11 = (longlong *)param_2[1];
        if ((uint *)plVar11[1] < (uint *)*plVar11 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,&local_110,4);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,&local_110,4);
          }
        }
        else {
          local_110 = *(uint *)*plVar11;
          *plVar11 = *plVar11 + 4;
        }
        TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FLocKeyMapFuncs<TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FDefaultSetAllocator>
        ::FindId(param_1,&local_c8,&local_a8);
        if ((local_c8 == -1) || (lVar9 = (longlong)local_c8 * 0x68 + *param_1, lVar9 == 0)) {
          local_90 = &local_a8;
          FUN_1415eab60(param_1,&local_c4,&local_90,0);
          lVar9 = (longlong)local_c4 * 0x68 + *param_1;
        }
        puVar6 = local_88;
        plVar11 = (longlong *)(lVar9 + 0x10);
        if (local_110 != 0) {
          do {
            local_b8 = 0;
            local_b0 = 0;
            FUN_14158ce90(param_2,&local_b8);
            TSet<TTuple<FString,FString>,FLocKeyMapFuncs<FString>,FDefaultSetAllocator>::FindId
                      (plVar11,&local_c0,&local_b8);
            if ((local_c0 == -1) || (lVar9 = *plVar11 + (longlong)local_c0 * 0x28, lVar9 == 0)) {
              local_80 = &local_b8;
              FUN_1415ea880(plVar11,&local_bc,&local_80);
              lVar9 = *plVar11 + (longlong)local_bc * 0x28;
            }
            iVar13 = *(int *)(lVar9 + 0x18);
            lVar12 = (longlong)iVar13;
            *(int *)(lVar9 + 0x18) = iVar13 + 1;
            if (*(int *)(lVar9 + 0x1c) < iVar13 + 1) {
              TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(lVar9 + 0x10,iVar13);
            }
            lVar9 = *(longlong *)(lVar9 + 0x10);
            *(undefined8 *)(lVar9 + lVar12 * 0x28) = 0;
            *(undefined8 *)(lVar9 + 8 + lVar12 * 0x28) = 0;
            puVar4 = (undefined8 *)(lVar9 + lVar12 * 0x28);
            puVar4[3] = 0;
            plVar1 = puVar4 + 3;
            puVar4[4] = 0;
            plVar10 = (longlong *)puVar6[1];
            uVar8 = *puVar6;
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
              UNLOCK();
            }
            local_e8 = uVar8;
            plStack_e0 = plVar10;
            if (&local_e8 != puVar4) {
              local_e8 = *puVar4;
              plStack_e0 = (longlong *)puVar4[1];
              *puVar4 = uVar8;
              puVar4[1] = plVar10;
              local_58 = uVar8;
              plStack_50 = plVar10;
            }
            plVar10 = plStack_e0;
            if (plStack_e0 != (longlong *)0x0) {
              LOCK();
              plVar2 = plStack_e0 + 1;
              lVar9 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plStack_e0)(plStack_e0);
                LOCK();
                piVar3 = (int *)((longlong)plVar10 + 0xc);
                iVar13 = *piVar3;
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (iVar13 == 1) {
                  (**(code **)(*plStack_e0 + 8))(plStack_e0,1);
                }
              }
            }
            puVar5 = *(undefined4 **)param_2[1];
            if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
              (**(code **)(*param_2 + 0x50))(param_2,puVar4 + 2,4);
              if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
                FArchive::ByteSwap(param_2,puVar4 + 2,4);
              }
            }
            else {
              *(undefined4 *)(puVar4 + 2) = *puVar5;
              *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
            }
            if (local_118[0] == 0) {
              FUN_14158ce90(param_2,plVar1);
            }
            else {
              plVar10 = (longlong *)param_2[1];
              local_114 = -1;
              if ((int *)plVar10[1] < (int *)*plVar10 + 1) {
                (**(code **)(*param_2 + 0x50))(param_2,&local_114,4);
                if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
                  FArchive::ByteSwap(param_2,&local_114,4);
                }
              }
              else {
                local_114 = *(int *)*plVar10;
                *plVar10 = *plVar10 + 4;
              }
              if (((-1 < local_114) && (local_114 < (int)local_d0)) &&
                 (plVar10 = local_d8 + (longlong)local_114 * 2, plVar1 != plVar10)) {
                iVar13 = (int)plVar10[1];
                _Src = (void *)*plVar10;
                *(int *)(puVar4 + 4) = iVar13;
                if ((iVar13 == 0) && (*(int *)((longlong)puVar4 + 0x24) == 0)) {
                  *(undefined4 *)((longlong)puVar4 + 0x24) = 0;
                }
                else {
                  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar1,iVar13);
                  _guard_xfg_dispatch_icall_nop((void *)*plVar1,_Src,(longlong)iVar13 * 2);
                }
              }
            }
            if (local_b8 != 0) {
              FMemory::Free();
            }
            uVar15 = uVar15 + 1;
            param_1 = local_98;
            uVar14 = local_108;
          } while (uVar15 < local_110);
        }
        if (local_a8 != 0) {
          FMemory::Free();
        }
        local_108 = uVar14 + 1;
      } while (local_108 < local_10c);
    }
    plVar11 = local_d8;
    for (iVar13 = (int)local_d0; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar11 != 0) {
        FMemory::Free();
      }
      plVar11 = plVar11 + 2;
    }
    if (local_d8 != (longlong *)0x0) {
      FMemory::Free();
    }
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}



// FUNCTION 14160dbe0 FUN_14160dbe0 body=679 status=ok
// SIG undefined FUN_14160dbe0(void)

void FUN_14160dbe0(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48 [2];
  
  bVar4 = false;
  bVar3 = false;
  if (DAT_1468c21ae != '\0') {
    GetCurrentThreadId();
  }
  puVar14 = DAT_1468b5480 + (longlong)DAT_1468b5488 * 2;
  for (puVar12 = DAT_1468b5480; puVar12 != puVar14; puVar12 = puVar12 + 2) {
    if (*(int *)(param_2 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*param_2;
    }
    if (*(int *)(puVar12 + 1) == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)*puVar12;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
    if (iVar6 == 0) {
      return;
    }
  }
  local_68 = (longlong *)0x0;
  local_60 = 0;
  plVar8 = (longlong *)FUN_1415c3d50();
  local_50 = *(int *)(param_2 + 1);
  lVar13 = (longlong)local_50;
  pvVar1 = (void *)*param_2;
  local_58 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_58,(10 - (uint)(local_50 != 0)) + local_50,0);
  _guard_xfg_dispatch_icall_nop(local_58,pvVar1,lVar13 * 2);
  FString::PathAppend(&local_58,L"*.locres",8);
  puVar11 = &DAT_143f3eda8;
  if (local_50 != 0) {
    puVar11 = local_58;
  }
  (**(code **)(*plVar8 + 0x78))(plVar8,&local_68,puVar11,1,0);
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  bVar2 = false;
  plVar15 = local_68 + (longlong)(int)local_60 * 2;
  plVar8 = local_68;
  if (local_68 != plVar15) {
    do {
      if (bVar2) {
LAB_14160ddb5:
        bVar2 = true;
      }
      else {
        bVar4 = true;
        bVar3 = true;
        local_50 = *(int *)(param_2 + 1);
        lVar13 = (longlong)local_50;
        iVar6 = (int)plVar8[1] + -1;
        if ((int)plVar8[1] == 0) {
          iVar6 = 0;
        }
        if ((local_50 != 0) || (iVar7 = 2, iVar6 == -1)) {
          iVar7 = 1;
        }
        pvVar1 = (void *)*param_2;
        local_58 = (undefined2 *)0x0;
        if ((local_50 == 0) && (iVar6 + iVar7 == 0)) {
          local_4c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_50 + iVar6 + iVar7,0);
          _guard_xfg_dispatch_icall_nop(local_58,pvVar1,lVar13 * 2);
        }
        FString::PathAppend(&local_58,*plVar8);
        uVar9 = FPaths::ConvertRelativePathToFull(local_48,&local_58);
        cVar5 = FUN_14160dff0(param_1,uVar9);
        if (cVar5 != '\0') goto LAB_14160ddb5;
        bVar2 = false;
      }
      if ((bVar3) && (bVar3 = false, local_48[0] != 0)) {
        FMemory::Free();
      }
      if ((bVar4) && (bVar4 = false, local_58 != (undefined2 *)0x0)) {
        FMemory::Free();
      }
      iVar6 = DAT_1468b5488;
      plVar8 = plVar8 + 2;
    } while (plVar8 != plVar15);
    if (bVar2) {
      lVar13 = (longlong)DAT_1468b5488;
      DAT_1468b5488 = DAT_1468b5488 + 1;
      if (DAT_1468b548c < DAT_1468b5488) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1468b5480,iVar6);
      }
      FString::FString(DAT_1468b5480 + lVar13 * 2,param_2);
    }
  }
  plVar8 = local_68;
  for (iVar6 = (int)local_60; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}



// FUNCTION 14160de90 FUN_14160de90 body=337 status=ok
// SIG undefined FUN_14160de90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_14160de90(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  byte bVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  byte bVar5;
  char local_res10 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  plVar3 = (longlong *)FUN_1415c3d50();
  if (*(int *)(param_2 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3,puVar4,0);
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  local_38 = 0;
  local_30 = 0;
  local_res10[0] = '\0';
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,plVar3);
  local_18 = local_28;
  local_10 = &local_18;
  FUN_141661f40(&local_18,&local_38);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  if ((((int)local_30 == _DAT_1464a9408 && local_30._4_4_ == _DAT_1464a940c) &&
      DAT_1464a9400 == (int)local_38) && DAT_1464a9404 == local_38._4_4_) {
    plVar1 = (longlong *)plVar3[1];
    if ((char *)plVar1[1] < (char *)*plVar1 + 1) {
      (**(code **)(*plVar3 + 0x50))(plVar3,local_res10,1);
    }
    else {
      local_res10[0] = *(char *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
    if (local_res10[0] == '\0') {
      FUN_14158ce90(plVar3,param_1);
      FUN_14158ce90(plVar3,param_1 + 0x10);
      bVar5 = 1;
      goto LAB_14160dfad;
    }
  }
  bVar5 = 0;
LAB_14160dfad:
  bVar2 = (**(code **)(*plVar3 + 0xe8))(plVar3);
  (**(code **)*plVar3)(plVar3,1);
  return bVar2 & bVar5;
}



// FUNCTION 14160dff0 FUN_14160dff0 body=606 status=ok
// SIG undefined FUN_14160dff0(void)

byte FUN_14160dff0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined2 *puVar13;
  longlong local_48;
  undefined8 local_40;
  undefined2 *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (DAT_1468c21ae != '\0') {
    GetCurrentThreadId();
  }
  FPaths::ConvertRelativePathToFull(&local_38,param_2);
  puVar13 = &DAT_143f3eda8;
  puVar12 = DAT_1468b5490 + (longlong)DAT_1468b5498 * 2;
  puVar10 = DAT_1468b5490;
  do {
    if (puVar10 == puVar12) {
      local_48 = 0;
      local_40 = 0;
      if (*(int *)(param_2 + 1) != 0) {
        puVar13 = (undefined2 *)*param_2;
      }
      FUN_141676460(&local_48,puVar13,0);
      plVar6 = (longlong *)operator_new(0xa8);
      if (plVar6 == (longlong *)0x0) {
        bVar4 = 0;
      }
      else {
        FArchive::FArchive(plVar6);
        plVar6[0x12] = 0;
        *plVar6 = (longlong)&PTR_FUN_143f4a3a0;
        plVar6[0x13] = (longlong)&local_48;
        plVar6[0x14] = 0x7fffffffffffffff;
        FArchive::SetIsLoading(plVar6,1);
        FArchive::SetIsPersistent(plVar6,0);
        iVar5 = DAT_1468b5498;
        lVar11 = (longlong)DAT_1468b5498;
        DAT_1468b5498 = DAT_1468b5498 + 1;
        if (DAT_1468b549c < DAT_1468b5498) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1468b5490,iVar5);
        }
        puVar13 = local_38;
        puVar10 = DAT_1468b5490 + lVar11 * 2;
        *puVar10 = 0;
        *(int *)(puVar10 + 1) = local_30;
        if (local_30 == 0) {
          *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar10,local_30,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar10,puVar13,(longlong)local_30 * 2);
        }
        FWindowsApplication::PumpMessages();
        uVar7 = FTextLocalizationResourceId::FTextLocalizationResourceId(local_28,param_2);
        bVar3 = FUN_14160d5d0(param_1,plVar6,uVar7);
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_20 + 1;
          lVar11 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*local_20)(local_20);
            LOCK();
            piVar2 = (int *)((longlong)local_20 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*local_20 + 8))(local_20,1);
            }
          }
        }
        bVar4 = (**(code **)(*plVar6 + 0xe8))(plVar6);
        bVar4 = bVar4 & bVar3;
        (**(code **)*plVar6)(plVar6,1);
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
LAB_14160e21f:
      if (local_38 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      return bVar4;
    }
    puVar9 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar9 = local_38;
    }
    if (*(int *)(puVar10 + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*puVar10;
    }
    iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
    if (iVar5 == 0) {
      bVar4 = 1;
      goto LAB_14160e21f;
    }
    puVar10 = puVar10 + 2;
  } while( true );
}



// FUNCTION 14160e250 FUN_14160e250 body=248 status=ok
// SIG undefined FUN_14160e250(void)

void FUN_14160e250(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *local_48;
  int local_40;
  undefined8 local_38;
  int iStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  longlong *local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  lVar3 = FInternationalization::Get();
  FICUInternationalization::GetCulture(*(undefined8 *)(lVar3 + 0x20),&local_28,param_2);
  if (local_28 != 0) {
    lVar3 = FInternationalization::Get();
    FICUInternationalization::GetPrioritizedCultureNames
              (*(undefined8 *)(lVar3 + 0x20),&local_48,param_2);
    local_38 = local_48;
    plVar4 = local_38;
    iStack_30 = local_40;
    local_38._0_4_ = SUB84(local_48,0);
    local_38._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    local_18 = (undefined4)local_38;
    uStack_14 = local_38._4_4_;
    iStack_10 = local_40;
    uStack_c = uStack_2c;
    local_38 = plVar4;
    FUN_14160e350(param_1,&local_18,param_3);
    plVar4 = local_48;
    for (; local_40 != 0; local_40 = local_40 + -1) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
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
  return;
}



// FUNCTION 14160e350 FUN_14160e350 body=959 status=ok
// SIG undefined FUN_14160e350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14160e350(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auStack_168 [32];
  longlong *local_148;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_118;
  int iStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  int local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98 [64];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  iVar4 = *(int *)(param_2 + 1);
  if (iVar4 != 0) {
    puVar11 = *(undefined8 **)(param_1 + 0xf0);
    puVar6 = puVar11 + (longlong)*(int *)(param_1 + 0xf8) * 2;
    local_b8 = 0xffffffff;
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_138 = 0;
    local_130 = 0;
    local_128 = param_1;
    for (; puVar11 != puVar6; puVar11 = puVar11 + 2) {
      local_148 = &local_138;
      local_108 = *(undefined4 *)param_2;
      uStack_104 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_100 = *(undefined4 *)(param_2 + 1);
      uStack_fc = *(undefined4 *)((longlong)param_2 + 0xc);
      (**(code **)(*(longlong *)*puVar11 + 0x20))((longlong *)*puVar11,param_3,&local_108,&local_e8)
      ;
    }
    if (local_e0 != local_b4) {
      FUN_14161af80(param_1,&local_e8);
    }
    param_2 = (undefined8 *)*param_2;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    puVar11 = param_2 + (longlong)iVar4 * 2;
    if (param_2 != puVar11) {
      do {
        lVar17 = local_138;
        uVar13 = (longlong)(int)local_130;
        lVar15 = 0;
        while (uVar13 != 0) {
          uVar12 = uVar13 >> 1;
          uVar16 = (uint)uVar13;
          lVar5 = (uVar12 + lVar15) * 0x20;
          if (*(int *)(param_2 + 1) == 0) {
            puVar10 = &DAT_143f3eda8;
          }
          else {
            puVar10 = (undefined2 *)*param_2;
          }
          if (*(int *)(lVar5 + 8 + lVar17) == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = *(undefined2 **)(lVar5 + lVar17);
          }
          iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar10);
          uVar13 = uVar12;
          if (iVar4 < 0) {
            lVar15 = (ulonglong)(uVar16 & 1) + uVar12 + lVar15;
          }
        }
        uVar13 = (ulonglong)(int)lVar15;
        if (uVar13 < (ulonglong)(longlong)(int)local_130) {
          puVar6 = (undefined8 *)(uVar13 * 0x20 + local_138);
          if (*(int *)(puVar6 + 1) == 0) {
            puVar10 = &DAT_143f3eda8;
          }
          else {
            puVar10 = (undefined2 *)*puVar6;
          }
          if (*(int *)(param_2 + 1) == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = (undefined2 *)*param_2;
          }
          iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar10);
          uVar12 = local_50;
          if (((-1 < iVar4) && ((int)lVar15 != -1)) &&
             (plVar14 = (longlong *)(uVar13 * 0x20 + local_138 + 0x10), plVar14 != (longlong *)0x0))
          {
            lVar15 = *plVar14;
            plVar14 = (longlong *)plVar14[1];
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
              UNLOCK();
            }
            if ((lVar15 != 0) && (*(int *)(lVar15 + 8) != *(int *)(lVar15 + 0x34))) {
              lVar17 = (longlong)(int)local_50;
              iVar4 = (int)local_50 + 1;
              local_50 = CONCAT44(local_50._4_4_,iVar4);
              if (local_50._4_4_ < iVar4) {
                TArray<FGuid,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                          (local_98,uVar12 & 0xffffffff);
              }
              puVar7 = local_98;
              if (local_58 != (undefined1 *)0x0) {
                puVar7 = local_58;
              }
              *(longlong *)(puVar7 + lVar17 * 0x10) = lVar15;
              *(longlong **)(puVar7 + lVar17 * 0x10 + 8) = plVar14;
              if (plVar14 == (longlong *)0x0) goto LAB_14160e5cb;
              LOCK();
              *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
              UNLOCK();
            }
            plVar9 = plVar14 + 1;
            if (plVar14 != (longlong *)0x0) {
              LOCK();
              lVar15 = *plVar9;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)lVar15 == 1) {
                (**(code **)*plVar14)(plVar14);
                LOCK();
                piVar1 = (int *)((longlong)plVar14 + 0xc);
                iVar4 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar14 + 8))(plVar14,1);
                }
              }
            }
          }
        }
LAB_14160e5cb:
        param_2 = param_2 + 2;
      } while (param_2 != puVar11);
      if (0 < (int)local_50) {
        iStack_110 = (int)local_50;
        puVar7 = local_98;
        if (local_58 != (undefined1 *)0x0) {
          puVar7 = local_58;
        }
        local_118._0_4_ = SUB84(puVar7,0);
        local_118._4_4_ = (undefined4)((ulonglong)puVar7 >> 0x20);
        local_f8 = (undefined4)local_118;
        uStack_f4 = local_118._4_4_;
        iStack_f0 = (int)local_50;
        uStack_ec = uStack_10c;
        local_118 = puVar7;
        FUN_14161a7a0(local_128,&local_f8);
      }
    }
    puVar7 = local_98;
    if (local_58 != (undefined1 *)0x0) {
      puVar7 = local_58;
    }
    if ((int)local_50 != 0) {
      plVar14 = (longlong *)(puVar7 + 8);
      iVar4 = (int)local_50;
      do {
        plVar9 = (longlong *)*plVar14;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar9 + 1;
          lVar15 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
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
        plVar14 = plVar14 + 2;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (local_58 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    lVar15 = local_138;
    for (iVar4 = (int)local_130; iVar4 != 0; iVar4 = iVar4 + -1) {
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                (lVar15);
      lVar15 = lVar15 + 0x20;
    }
    if (local_138 != 0) {
      FMemory::Free();
    }
    local_a0 = 0;
    if (local_a8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,TMap<FString,TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>,FDefaultSetAllocator,FLocKeyMapFuncs<TArray<FTextLocalizationResource::FEntry,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_e8);
  }
  return;
}



// FUNCTION 14160e710 FUN_14160e710 body=3264 status=ok
// SIG undefined FUN_14160e710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14160e710(undefined8 param_1,ulonglong param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  void *pvVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  uint local_res10;
  undefined8 *in_stack_fffffffffffffea8;
  char local_148 [4];
  uint local_144;
  longlong *local_140;
  uint local_138;
  uint local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  longlong *local_120;
  undefined8 local_118;
  longlong *local_110;
  int local_108;
  undefined4 local_104;
  longlong *local_100;
  int local_f8;
  undefined4 local_f4;
  longlong *local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined2 *local_d0;
  int local_c8;
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  longlong *local_a0;
  int local_98;
  undefined4 local_94;
  longlong *local_90;
  int local_88;
  undefined4 local_84;
  longlong *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  
  bVar22 = false;
  local_80 = (longlong *)0x0;
  local_124 = 0;
  local_78 = 0;
  local_74 = 0;
  if ((param_2 & 0x24) != 0) {
    uVar4 = FUN_141672560();
    TArray<FString,FDefaultAllocator>::operator+=(&local_80,uVar4);
  }
  iVar19 = local_78;
  plVar13 = local_80;
  local_90 = (longlong *)0x0;
  local_128 = 0;
  local_88 = 0;
  local_130 = 0;
  local_f8 = 0;
  local_84 = 0;
  local_100 = (longlong *)0x0;
  local_f4 = 0;
  local_124 = local_78;
  if ((param_2 & 2) != 0) {
    uVar4 = FUN_141671f30();
    TArray<FString,FDefaultAllocator>::operator+=(&local_100,uVar4);
    uVar4 = FUN_141673550();
    TArray<FString,FDefaultAllocator>::operator+=(&local_100,uVar4);
    in_stack_fffffffffffffea8 = &DAT_1468e23a0;
    local_148[0] = '\0';
    cVar3 = FConfigCacheIni::GetBool
                      (DAT_1468b6148,L"Internationalization",L"ShouldUseLocalizedPropertyNames",
                       local_148,&DAT_1468e23a0);
    if (cVar3 == '\0') {
      in_stack_fffffffffffffea8 = &DAT_1468e2360;
      FConfigCacheIni::GetBool
                (DAT_1468b6148,L"Internationalization",L"ShouldUseLocalizedPropertyNames",local_148,
                 &DAT_1468e2360);
    }
    if (local_148[0] == '\0') {
      uVar4 = FUN_141672f80();
      TArray<FString,FDefaultAllocator>::operator+=(&local_90,uVar4);
      local_128 = local_88;
    }
    else {
      uVar4 = FUN_141672f80();
      TArray<FString,FDefaultAllocator>::operator+=(&local_100,uVar4);
    }
  }
  local_a0 = (longlong *)0x0;
  local_12c = 0;
  local_98 = 0;
  local_94 = 0;
  local_130 = local_f8;
  if ((param_2 & 8) != 0) {
    uVar4 = FUN_141672110();
    TArray<FString,FDefaultAllocator>::operator+=(&local_a0,uVar4);
  }
  local_e0 = (longlong *)0x0;
  local_d8 = 0;
  local_12c = local_98;
  if ((param_2 & 0x10) != 0) {
    DAT_1464af1bc = DAT_1464af1bc + 1;
    lVar16 = (longlong)(DAT_1464af1b0 + -1);
    if (-1 < DAT_1464af1b0 + -1) {
      lVar10 = lVar16 << 4;
      do {
        if (((*(int *)(lVar10 + 8 + DAT_1464af1a8) == 0) ||
            (plVar12 = *(longlong **)(lVar10 + DAT_1464af1a8), plVar12 == (longlong *)0x0)) ||
           (cVar3 = (**(code **)(*plVar12 + 0x40))(plVar12,&local_e0), cVar3 == '\0')) {
          bVar22 = true;
        }
        lVar10 = lVar10 + -0x10;
        lVar16 = lVar16 + -1;
      } while (-1 < lVar16);
    }
    iVar20 = DAT_1464af1b0;
    DAT_1464af1bc = DAT_1464af1bc + -1;
    if ((bVar22) && (DAT_1464af1bc < 1)) {
      iVar9 = 0;
      if (0 < DAT_1464af1b0) {
        lVar16 = 0;
        do {
          if (((*(int *)(lVar16 + 8 + DAT_1464af1a8) == 0) ||
              (*(longlong **)(lVar16 + DAT_1464af1a8) == (longlong *)0x0)) ||
             (cVar3 = (**(code **)(**(longlong **)(lVar16 + DAT_1464af1a8) + 0x10))(), cVar3 != '\0'
             )) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1464af1a8,iVar9,1,1);
          }
          else {
            iVar9 = iVar9 + 1;
            lVar16 = lVar16 + 0x10;
          }
        } while (iVar9 < DAT_1464af1b0);
      }
      _DAT_1464af1b8 = DAT_1464af1b0 * 2;
      if (_DAT_1464af1b8 < 3) {
        _DAT_1464af1b8 = 2;
      }
      if ((_DAT_1464af1b8 < iVar20) && (DAT_1464af1b4 != DAT_1464af1b0)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1464af1a8);
      }
    }
  }
  uVar5 = 0;
  local_144 = 0;
  local_140 = (longlong *)0x0;
  local_134 = 0;
  local_138 = 0;
  uVar18 = uVar5;
  if (iVar19 != 0) {
    if (0 < iVar19) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_140,iVar19);
    }
    plVar6 = local_140;
    lVar16 = (longlong)(int)local_138;
    plVar12 = local_140 + lVar16 * 2;
    puVar11 = (undefined8 *)
              ((longlong)plVar12 + (lVar16 * -0x10 - (longlong)local_140) + (longlong)plVar13);
    lVar16 = lVar16 * 0x10 - (longlong)plVar13;
    local_144 = local_138;
    do {
      *plVar12 = 0;
      iVar20 = *(int *)(puVar11 + 1);
      pvVar2 = (void *)*puVar11;
      *(int *)((longlong)puVar11 + (longlong)plVar6 + lVar16 + 8) = iVar20;
      if (iVar20 == 0) {
        *(undefined4 *)((longlong)plVar6 + lVar16 + 0xc + (longlong)puVar11) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar12,iVar20,0);
        _guard_xfg_dispatch_icall_nop((void *)*plVar12,pvVar2,(longlong)iVar20 * 2);
      }
      plVar12 = plVar12 + 2;
      puVar11 = puVar11 + 2;
      iVar19 = iVar19 + -1;
    } while (iVar19 != 0);
    local_138 = local_144 + local_124;
    uVar18 = (ulonglong)local_138;
    uVar5 = (ulonglong)local_134;
  }
  iVar19 = local_130;
  if (local_130 != 0) {
    uVar21 = (uint)uVar18;
    if ((int)uVar5 < (int)(local_130 + (uint)uVar18)) {
      local_144 = local_138;
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_140);
      uVar21 = local_138;
    }
    plVar12 = local_140;
    lVar16 = (longlong)(int)uVar21;
    plVar13 = local_140 + lVar16 * 2;
    puVar11 = (undefined8 *)
              ((longlong)plVar13 + (lVar16 * -0x10 - (longlong)local_140) + (longlong)local_100);
    lVar16 = lVar16 * 0x10 - (longlong)local_100;
    local_144 = local_138;
    do {
      *plVar13 = 0;
      iVar20 = *(int *)(puVar11 + 1);
      pvVar2 = (void *)*puVar11;
      *(int *)((longlong)puVar11 + (longlong)plVar12 + lVar16 + 8) = iVar20;
      if (iVar20 == 0) {
        *(undefined4 *)((longlong)plVar12 + lVar16 + 0xc + (longlong)puVar11) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar13,iVar20,0);
        _guard_xfg_dispatch_icall_nop((void *)*plVar13,pvVar2,(longlong)iVar20 * 2);
      }
      plVar13 = plVar13 + 2;
      puVar11 = puVar11 + 2;
      iVar19 = iVar19 + -1;
    } while (iVar19 != 0);
    local_138 = local_144 + local_130;
    uVar18 = (ulonglong)local_138;
  }
  iVar19 = local_12c;
  if (local_12c != 0) {
    uVar21 = (uint)uVar18;
    if ((int)local_134 < (int)(local_12c + (uint)uVar18)) {
      local_144 = local_138;
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_140);
      uVar21 = local_138;
    }
    plVar12 = local_140;
    lVar16 = (longlong)(int)uVar21;
    plVar13 = local_140 + lVar16 * 2;
    puVar11 = (undefined8 *)
              ((longlong)plVar13 + (lVar16 * -0x10 - (longlong)local_140) + (longlong)local_a0);
    lVar16 = lVar16 * 0x10 - (longlong)local_a0;
    local_144 = local_138;
    do {
      *plVar13 = 0;
      iVar20 = *(int *)(puVar11 + 1);
      pvVar2 = (void *)*puVar11;
      *(int *)((longlong)puVar11 + (longlong)plVar12 + lVar16 + 8) = iVar20;
      if (iVar20 == 0) {
        *(undefined4 *)((longlong)plVar12 + lVar16 + 0xc + (longlong)puVar11) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar13,iVar20,0);
        _guard_xfg_dispatch_icall_nop((void *)*plVar13,pvVar2,(longlong)iVar20 * 2);
      }
      plVar13 = plVar13 + 2;
      puVar11 = puVar11 + 2;
      iVar19 = iVar19 + -1;
    } while (iVar19 != 0);
    local_138 = local_144 + local_12c;
    uVar18 = (ulonglong)local_138;
  }
  iVar19 = (int)local_d8;
  if ((int)local_d8 != 0) {
    uVar21 = (uint)uVar18;
    local_144 = local_138;
    if ((int)local_134 < (int)((int)local_d8 + (uint)uVar18)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_140);
      uVar21 = local_138;
    }
    plVar12 = local_140 + (longlong)(int)uVar21 * 2;
    plVar13 = local_e0;
    iVar20 = iVar19;
    do {
      *plVar12 = 0;
      iVar9 = (int)plVar13[1];
      pvVar2 = (void *)*plVar13;
      *(int *)(plVar12 + 1) = iVar9;
      if (iVar9 == 0) {
        *(undefined4 *)((longlong)plVar12 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar12,iVar9,0);
        _guard_xfg_dispatch_icall_nop((void *)*plVar12,pvVar2,(longlong)iVar9 * 2);
      }
      plVar12 = plVar12 + 2;
      plVar13 = plVar13 + 2;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
    local_138 = uVar21 + iVar19;
    uVar18 = (ulonglong)local_138;
  }
  uVar5 = 0;
  local_120 = (longlong *)0x0;
  local_118 = 0;
  local_144 = local_138;
  if ((param_2 & 1) != 0) {
    local_res10 = (uint)uVar18;
    uVar5 = uVar18;
    local_118 = uVar18;
    if (local_res10 != 0) {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_120,uVar18,0);
      lVar16 = (longlong)local_120 - (longlong)local_140;
      plVar13 = local_140;
      do {
        *(undefined8 *)(lVar16 + (longlong)plVar13) = 0;
        iVar19 = (int)plVar13[1];
        pvVar2 = (void *)*plVar13;
        *(int *)(lVar16 + 8 + (longlong)plVar13) = iVar19;
        if (iVar19 == 0) {
          *(undefined4 *)(lVar16 + 0xc + (longlong)plVar13) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                    ((undefined8 *)(lVar16 + (longlong)plVar13),iVar19,0);
          _guard_xfg_dispatch_icall_nop
                    (*(void **)(lVar16 + (longlong)plVar13),pvVar2,(longlong)iVar19 * 2);
        }
        plVar13 = plVar13 + 2;
        uVar21 = (int)uVar5 - 1;
        uVar5 = (ulonglong)uVar21;
      } while (uVar21 != 0);
      uVar5 = local_118 & 0xffffffff;
      local_res10 = (uint)local_118;
    }
    plVar13 = local_120;
    if ((0 < local_128) &&
       (plVar6 = local_90 + (longlong)local_128 * 2, plVar12 = local_90, local_90 != plVar6)) {
      do {
        iVar19 = (int)uVar5;
        for (plVar14 = plVar13; plVar14 != plVar13 + (longlong)iVar19 * 2; plVar14 = plVar14 + 2) {
          if ((int)plVar12[1] == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = (undefined2 *)*plVar12;
          }
          if ((int)plVar14[1] == 0) {
            puVar7 = &DAT_143f3eda8;
          }
          else {
            puVar7 = (undefined2 *)*plVar14;
          }
          iVar20 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar8);
          if (iVar20 == 0) {
            if ((int)((longlong)plVar14 - (longlong)plVar13 >> 4) != -1) goto LAB_14160edf1;
            break;
          }
        }
        uVar21 = iVar19 + 1;
        local_118 = CONCAT44(local_118._4_4_,uVar21);
        if (local_118._4_4_ < (int)uVar21) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_120,uVar5);
          plVar13 = local_120;
          uVar21 = (uint)local_118;
        }
        uVar5 = (ulonglong)uVar21;
        FString::FString(plVar13 + (longlong)iVar19 * 2,plVar12);
LAB_14160edf1:
        plVar12 = plVar12 + 2;
      } while (plVar12 != plVar6);
      local_res10 = (uint)uVar5;
    }
    if ((0 < (int)uVar5) &&
       (plVar12 = plVar13 + (longlong)(int)uVar5 * 2, local_110 = plVar12, plVar13 != plVar12)) {
      do {
        local_f0 = (longlong *)0x0;
        local_e8 = 0;
        plVar6 = (longlong *)FUN_1415c3d50();
        local_c8 = (int)plVar13[1];
        lVar16 = (longlong)local_c8;
        local_d0 = (undefined2 *)0x0;
        pvVar2 = (void *)*plVar13;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                  (&local_d0,(0xb - (uint)(local_c8 != 0)) + local_c8,0);
        _guard_xfg_dispatch_icall_nop(local_d0,pvVar2,lVar16 * 2);
        FString::PathAppend(&local_d0,L"*.locmeta",9);
        puVar8 = &DAT_143f3eda8;
        if (local_c8 != 0) {
          puVar8 = local_d0;
        }
        in_stack_fffffffffffffea8 =
             (undefined8 *)((ulonglong)in_stack_fffffffffffffea8 & 0xffffffffffffff00);
        (**(code **)(*plVar6 + 0x78))(plVar6,&local_f0,puVar8,1,in_stack_fffffffffffffea8);
        if (local_d0 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        plVar6 = local_f0;
        if ((int)local_e8 == 1) {
          local_b8 = (int)plVar13[1];
          lVar16 = (longlong)local_b8;
          local_70 = 0;
          local_68 = 0;
          local_60 = 0;
          local_58 = 0;
          iVar19 = (int)local_f0[1] + -1;
          if ((int)local_f0[1] == 0) {
            iVar19 = 0;
          }
          if ((local_b8 != 0) || (iVar20 = 2, iVar19 == -1)) {
            iVar20 = 1;
          }
          pvVar2 = (void *)*plVar13;
          local_c0 = (void *)0x0;
          if ((local_b8 == 0) && (iVar20 + iVar19 == 0)) {
            local_b4 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c0,local_b8 + iVar20 + iVar19,0)
            ;
            _guard_xfg_dispatch_icall_nop(local_c0,pvVar2,lVar16 * 2);
          }
          FString::PathAppend(&local_c0,*plVar6);
          cVar3 = FUN_14160de90(&local_70);
          if (local_c0 != (void *)0x0) {
            FMemory::Free();
          }
          if (cVar3 != '\0') {
            puVar11 = (undefined8 *)*param_3;
            puVar17 = puVar11 + (longlong)(int)param_3[1] * 2;
            for (; puVar11 != puVar17; puVar11 = puVar11 + 2) {
              if (*(int *)(puVar11 + 1) == 0) {
                puVar8 = &DAT_143f3eda8;
              }
              else {
                puVar8 = (undefined2 *)*puVar11;
              }
              iVar19 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8);
              if (iVar19 == 0) goto LAB_14160f065;
            }
            if ((int)local_58 == 0) {
              iVar19 = 0;
            }
            else {
              iVar19 = (int)local_58 + -1;
            }
            local_a8 = (int)plVar13[1];
            lVar16 = (longlong)local_a8;
            if ((local_a8 != 0) || (iVar20 = 2, iVar19 == -1)) {
              iVar20 = 1;
            }
            pvVar2 = (void *)*plVar13;
            local_b0 = (void *)0x0;
            if ((local_a8 == 0) && (iVar19 + iVar20 == 0)) {
              local_a4 = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                        (&local_b0,local_a8 + iVar19 + iVar20,0);
              _guard_xfg_dispatch_icall_nop(local_b0,pvVar2,lVar16 * 2);
            }
            FString::PathAppend(&local_b0,local_60);
            FUN_14160dff0(param_4);
            if (local_b0 != (void *)0x0) {
              FMemory::Free();
            }
          }
LAB_14160f065:
          if (local_60 != 0) {
            FMemory::Free();
          }
          plVar12 = local_110;
          if (local_70 != 0) {
            FMemory::Free();
            plVar12 = local_110;
          }
        }
        plVar6 = local_f0;
        for (iVar19 = (int)local_e8; iVar19 != 0; iVar19 = iVar19 + -1) {
          if (*plVar6 != 0) {
            FMemory::Free();
          }
          plVar6 = plVar6 + 2;
        }
        if (local_f0 != (longlong *)0x0) {
          FMemory::Free(local_f0);
        }
        plVar13 = plVar13 + 2;
      } while (plVar13 != plVar12);
      uVar5 = (ulonglong)local_res10;
      uVar18 = (ulonglong)local_144;
    }
  }
  puVar11 = (undefined8 *)*param_3;
  puVar17 = puVar11 + (longlong)(int)param_3[1] * 2;
  iVar9 = local_124;
  iVar20 = local_130;
  iVar19 = local_12c;
  if (puVar11 != puVar17) {
    do {
      if (0 < (int)uVar18) {
        FUN_1416033e0(param_5,&local_50,puVar11);
        uVar4 = local_50;
        plVar12 = local_140 + (longlong)(int)uVar18 * 2;
        plVar13 = local_140;
        if (local_140 != plVar12) {
          do {
            local_108 = (int)plVar13[1];
            lVar16 = (longlong)local_108;
            iVar19 = *(int *)(puVar11 + 1) + -1;
            if (*(int *)(puVar11 + 1) == 0) {
              iVar19 = 0;
            }
            if ((local_108 != 0) || (iVar20 = 2, iVar19 == -1)) {
              iVar20 = 1;
            }
            pvVar2 = (void *)*plVar13;
            local_110 = (longlong *)0x0;
            if ((local_108 == 0) && (iVar19 + iVar20 == 0)) {
              local_104 = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                        (&local_110,local_108 + iVar19 + iVar20,0);
              _guard_xfg_dispatch_icall_nop(local_110,pvVar2,lVar16 * 2);
            }
            FString::PathAppend(&local_110,*puVar11);
            FUN_14160dbe0(uVar4,&local_110);
            if (local_110 != (longlong *)0x0) {
              FMemory::Free();
            }
            plVar13 = plVar13 + 2;
          } while (plVar13 != plVar12);
          uVar18 = (ulonglong)local_144;
        }
        plVar13 = local_48;
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_48 + 1;
          lVar16 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar19 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar19 == 1) {
              (**(code **)(*local_48 + 8))(local_48,1);
            }
          }
          uVar18 = (ulonglong)local_138;
          local_144 = local_138;
        }
      }
      puVar11 = puVar11 + 2;
    } while (puVar11 != puVar17);
    uVar5 = local_118 & 0xffffffff;
    local_128 = local_88;
    iVar9 = local_78;
    iVar20 = local_f8;
    iVar19 = local_98;
  }
  plVar12 = local_120;
  uVar21 = (uint)uVar5;
  plVar13 = local_120;
  while (uVar21 != 0) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
    uVar21 = (int)uVar5 - 1;
    uVar5 = (ulonglong)uVar21;
  }
  if (plVar12 != (longlong *)0x0) {
    FMemory::Free(plVar12);
  }
  plVar12 = local_140;
  uVar21 = (uint)uVar18;
  plVar13 = local_140;
  while (uVar21 != 0) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
    uVar21 = (int)uVar18 - 1;
    uVar18 = (ulonglong)uVar21;
  }
  if (plVar12 != (longlong *)0x0) {
    FMemory::Free(plVar12);
  }
  plVar13 = local_e0;
  for (iVar15 = (int)local_d8; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
  }
  plVar13 = local_a0;
  plVar12 = local_a0;
  if (local_e0 != (longlong *)0x0) {
    FMemory::Free();
    plVar13 = local_a0;
    plVar12 = local_a0;
  }
  for (; plVar6 = local_a0, iVar19 != 0; iVar19 = iVar19 + -1) {
    local_a0 = plVar12;
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
    plVar12 = local_a0;
    local_a0 = plVar6;
  }
  bVar22 = local_a0 != (longlong *)0x0;
  plVar13 = local_100;
  plVar14 = local_100;
  local_a0 = plVar12;
  if (bVar22) {
    FMemory::Free(plVar6);
    plVar13 = local_100;
    plVar14 = local_100;
  }
  for (; plVar12 = local_100, iVar20 != 0; iVar20 = iVar20 + -1) {
    local_100 = plVar14;
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
    plVar14 = local_100;
    local_100 = plVar12;
  }
  bVar22 = local_100 != (longlong *)0x0;
  iVar19 = local_128;
  local_100 = plVar14;
  plVar13 = local_90;
  plVar6 = local_90;
  if (bVar22) {
    FMemory::Free(plVar12);
    iVar19 = local_128;
    plVar13 = local_90;
    plVar6 = local_90;
  }
  for (; plVar12 = local_90, iVar19 != 0; iVar19 = iVar19 + -1) {
    local_90 = plVar6;
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
    plVar6 = local_90;
    local_90 = plVar12;
  }
  bVar22 = local_90 != (longlong *)0x0;
  local_90 = plVar6;
  plVar13 = local_80;
  plVar14 = local_80;
  if (bVar22) {
    FMemory::Free(plVar12);
    plVar13 = local_80;
    plVar14 = local_80;
  }
  for (; plVar12 = local_80, iVar9 != 0; iVar9 = iVar9 + -1) {
    local_80 = plVar14;
    if (*plVar13 != 0) {
      FMemory::Free();
    }
    plVar13 = plVar13 + 2;
    plVar14 = local_80;
    local_80 = plVar12;
  }
  if (local_80 != (longlong *)0x0) {
    local_80 = plVar14;
    FMemory::Free(plVar12);
  }
  return;
}



// FUNCTION 14160f3d0 FUN_14160f3d0 body=1818 status=ok
// SIG undefined FUN_14160f3d0(void)

void FUN_14160f3d0(longlong param_1,byte param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  bool bVar8;
  void **ppvVar9;
  longlong *plVar10;
  int iVar11;
  undefined2 *puVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  undefined2 *puVar16;
  undefined8 *puVar17;
  undefined2 **ppuVar18;
  longlong lVar19;
  undefined8 *puVar20;
  longlong lVar21;
  uint *puVar22;
  void *pvVar23;
  byte bVar24;
  int iVar25;
  undefined4 uVar26;
  int local_res8 [2];
  byte local_res10;
  longlong *local_res18;
  undefined8 local_res20;
  void *local_188;
  undefined8 local_180;
  void *local_178;
  undefined8 local_170;
  void *local_168;
  int local_160;
  int local_15c;
  void *local_158;
  int local_150;
  undefined4 local_14c;
  longlong local_148;
  longlong local_140;
  int local_138 [2];
  int local_130;
  uint uStack_12c;
  uint *puStack_128;
  undefined4 local_120;
  uint uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  undefined2 *local_110;
  int local_108;
  int local_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  uint uStack_e4;
  undefined8 uStack_e0;
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  longlong *local_b0;
  int local_a8;
  int local_a4;
  uint *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 uStack_88;
  uint *local_80;
  uint uStack_78;
  uint uStack_74;
  undefined8 local_70;
  longlong local_68 [2];
  longlong local_58;
  longlong lStack_50;
  
  uStack_12c = 1;
  local_98 = (longlong *)(param_1 + 0x58);
  uStack_11c = 0;
  iStack_118 = 0;
  uVar5 = *(uint *)(param_1 + 0x80);
  puStack_128 = (uint *)(param_1 + 0x68);
  local_130 = 0;
  if (uVar5 != 0) {
    puVar22 = *(uint **)(param_1 + 0x78);
    if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
      puVar22 = puStack_128;
    }
    uVar6 = *puVar22;
    iStack_118 = 0;
    local_130 = 0;
    while (uVar6 == 0) {
      lVar15 = (longlong)local_130;
      iStack_118 = iStack_118 + 0x20;
      iVar11 = local_130 + 1;
      bVar8 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_130;
      local_130 = iVar11;
      if (bVar8) goto LAB_14160f4bb;
      uVar6 = puVar22[lVar15 + 1];
    }
    uStack_12c = -uVar6 & uVar6;
    local_a8 = 0x1f;
    if (uStack_12c != 0) {
      for (; uStack_12c >> local_a8 == 0; local_a8 = local_a8 + -1) {
      }
    }
    if (uStack_12c == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - local_a8;
    }
    uStack_11c = (iStack_118 - iVar11) + 0x1f;
    if ((int)uVar5 < (int)uStack_11c) {
LAB_14160f4bb:
      uStack_11c = uVar5;
    }
  }
  local_120 = 0xffffffff;
  uStack_ec = *(uint *)(param_1 + 0x80);
  uStack_f8 = CONCAT44(uStack_12c,local_130);
  uStack_74 = uStack_11c;
  uStack_e0 = CONCAT44(uStack_114,iStack_118);
  local_100 = (int)uStack_ec >> 5;
  uStack_e8 = uStack_ec & 0xffffffe0;
  uStack_fc = (undefined4)((ulonglong)local_98 >> 0x20);
  uStack_f0 = SUB84(puStack_128,0);
  uStack_e4 = uStack_11c;
  uStack_78 = 0xffffffff;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_a0 = puStack_128;
  local_90 = local_98;
  uStack_88 = uStack_f8;
  local_80 = puStack_128;
  local_70 = uStack_e0;
  uVar6 = 0xffffffff;
  if (uStack_ec != uVar5) {
    puVar22 = *(uint **)(param_1 + 0x78);
    if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
      puVar22 = puStack_128;
    }
    uVar14 = puVar22[local_100] & -1 << ((byte)uStack_ec & 0x1f);
    while (uVar14 == 0) {
      lVar15 = (longlong)local_100;
      uStack_e8 = uStack_e8 + 0x20;
      iVar11 = local_100 + 1;
      bVar8 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_100;
      local_100 = iVar11;
      if (bVar8) goto LAB_14160f584;
      uVar14 = puVar22[lVar15 + 1];
    }
    uVar14 = -uVar14 & uVar14;
    local_a4 = 0x1f;
    if (uVar14 != 0) {
      for (; uVar14 >> local_a4 == 0; local_a4 = local_a4 + -1) {
      }
    }
    if (uVar14 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - local_a4;
    }
    uStack_ec = (uStack_e8 - iVar11) + 0x1f;
    if ((int)uVar5 < (int)uStack_ec) {
LAB_14160f584:
      uStack_ec = uVar5;
      uVar6 = uStack_78;
    }
  }
  do {
    uStack_78 = uVar6;
    plVar10 = local_res18;
    bVar24 = local_res10;
    if (((uStack_74 == uStack_ec) && (local_80 == local_a0)) && (local_90 == local_98)) {
      return;
    }
    lVar15 = (longlong)(int)uStack_74 * 0xd0 + *local_90;
    FPolyglotTextData::ResolveNativeCulture((char *)(lVar15 + 0x18),&local_110);
    if ((bVar24 & 1) != 0) {
      puVar17 = (undefined8 *)*plVar10;
      puVar20 = puVar17 + (longlong)(int)plVar10[1] * 2;
      for (; puVar17 != puVar20; puVar17 = puVar17 + 2) {
        puVar16 = &DAT_143f3eda8;
        if (local_108 != 0) {
          puVar16 = local_110;
        }
        if (*(int *)(puVar17 + 1) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = (undefined2 *)*puVar17;
        }
        iVar11 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar16);
        if (iVar11 == 0) goto LAB_14160f7dd;
      }
      ppuVar18 = &local_110;
      local_188 = (void *)0x0;
      local_d8 = 0;
      plStack_d0 = (longlong *)0x0;
      local_180 = 0;
      do {
        TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
        ::FindId(lVar15 + 0x60,local_res8,ppuVar18);
        if (local_res8[0] == -1) {
          lVar21 = 0;
        }
        else {
          lVar21 = *(longlong *)(lVar15 + 0x60) + (longlong)local_res8[0] * 0x28;
        }
        ppvVar9 = (void **)(lVar21 + 0x10);
        if (lVar21 == 0) {
          ppvVar9 = (void **)0x0;
        }
        if (ppvVar9 != (void **)0x0) {
          pvVar23 = (void *)0x0;
          iVar11 = 0;
          iVar25 = 0;
          if (&local_188 != ppvVar9) {
            iVar11 = *(int *)(ppvVar9 + 1);
            pvVar7 = *ppvVar9;
            pvVar23 = (void *)0x0;
            iVar25 = 0;
            if (iVar11 != 0) {
              local_180._0_4_ = iVar11;
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_188,iVar11,0);
              pvVar23 = local_188;
              _guard_xfg_dispatch_icall_nop(local_188,pvVar7,(longlong)iVar11 * 2);
              iVar11 = (int)local_180;
              iVar25 = local_180._4_4_;
            }
          }
          local_188 = (void *)0x0;
          local_180 = 0;
          local_168 = pvVar23;
          local_160 = iVar11;
          local_15c = iVar25;
          goto LAB_14160f753;
        }
        ppuVar18 = ppuVar18 + 2;
      } while (ppuVar18 != (undefined2 **)&local_100);
      local_160 = *(int *)(lVar15 + 0x58);
      lVar21 = (longlong)local_160;
      pvVar23 = *(void **)(lVar15 + 0x50);
      local_168 = (void *)0x0;
      if (local_160 == 0) {
        local_15c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_168,local_160,0);
        _guard_xfg_dispatch_icall_nop(local_168,pvVar23,lVar21 * 2);
      }
LAB_14160f753:
      FTextLocalizationResource::AddEntry
                (local_res20,lVar15 + 0x30,lVar15 + 0x40,lVar15 + 0x50,&local_168,&local_d8);
      if (local_168 != (void *)0x0) {
        FMemory::Free();
      }
      plVar3 = plStack_d0;
      plVar10 = local_res18;
      bVar24 = local_res10;
      if (plStack_d0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_d0 + 1;
        lVar21 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar21 == 1) {
          (**(code **)*plStack_d0)(plStack_d0);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          plVar10 = local_res18;
          bVar24 = local_res10;
          if (iVar11 == 1) {
            (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
            plVar10 = local_res18;
            bVar24 = local_res10;
          }
        }
      }
    }
LAB_14160f7dd:
    cVar4 = *(char *)(lVar15 + 0x18);
    if (cVar4 == '\0') {
      bVar8 = (bVar24 & 0x24) != 0;
LAB_14160f810:
      if (bVar8 != false) {
        lVar21 = *plVar10;
        lStack_50 = plVar10[1];
        local_148 = 0;
        local_140 = 0;
        lVar19 = (longlong)(int)lStack_50 * 0x10 + lVar21;
        local_58 = lVar21;
        if (lVar21 != lVar19) {
          local_178 = (void *)0x0;
          local_170 = 0;
          do {
            TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
            ::FindId(lVar15 + 0x60,local_138,lVar21);
            if (local_138[0] == -1) {
              lVar13 = 0;
            }
            else {
              lVar13 = *(longlong *)(lVar15 + 0x60) + (longlong)local_138[0] * 0x28;
            }
            ppvVar9 = (void **)(lVar13 + 0x10);
            if (lVar13 == 0) {
              ppvVar9 = (void **)0x0;
            }
            if (ppvVar9 != (void **)0x0) {
              pvVar23 = (void *)0x0;
              iVar11 = 0;
              uVar26 = 0;
              if (&local_178 != ppvVar9) {
                iVar11 = *(int *)(ppvVar9 + 1);
                pvVar7 = *ppvVar9;
                local_170 = CONCAT44(local_170._4_4_,iVar11);
                if (iVar11 == 0) {
                  pvVar23 = (void *)0x0;
                  iVar11 = 0;
                  uVar26 = 0;
                }
                else {
                  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_178,iVar11,0);
                  pvVar23 = local_178;
                  _guard_xfg_dispatch_icall_nop(local_178,pvVar7,(longlong)iVar11 * 2);
                  iVar11 = (int)local_170;
                  uVar26 = local_170._4_4_;
                }
              }
              FString::operator=(&local_148,lVar21);
              local_178 = (void *)0x0;
              local_170 = 0;
              local_158 = pvVar23;
              local_150 = iVar11;
              local_14c = uVar26;
              goto LAB_14160f9b5;
            }
            lVar21 = lVar21 + 0x10;
          } while (lVar21 != lVar19);
        }
        plVar10 = (longlong *)FPolyglotTextData::ResolveNativeCulture(lVar15 + 0x18,local_68);
        if (&local_148 != plVar10) {
          local_148 = *plVar10;
          *plVar10 = 0;
          local_140 = plVar10[1];
          plVar10[1] = 0;
        }
        if (local_68[0] != 0) {
          FMemory::Free();
        }
        local_150 = *(int *)(lVar15 + 0x58);
        lVar21 = (longlong)local_150;
        pvVar23 = *(void **)(lVar15 + 0x50);
        local_158 = (void *)0x0;
        if (local_150 == 0) {
          local_14c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_158,local_150,0);
          _guard_xfg_dispatch_icall_nop(local_158,pvVar23,lVar21 * 2);
        }
LAB_14160f9b5:
        FUN_1416033e0(param_5,&local_b8,&local_148);
        local_c8 = 0;
        plStack_c0 = (longlong *)0x0;
        FTextLocalizationResource::AddEntry
                  (local_b8,lVar15 + 0x30,lVar15 + 0x40,lVar15 + 0x50,&local_158,&local_c8);
        plVar10 = plStack_c0;
        if (plStack_c0 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_c0 + 1;
          lVar15 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*plStack_c0)(plStack_c0);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            iVar11 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
            }
          }
        }
        plVar10 = local_b0;
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_b0 + 1;
          lVar15 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*local_b0)(local_b0);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            iVar11 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*local_b0 + 8))(local_b0,1);
            }
          }
        }
        if (local_158 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_148 != 0) {
          FMemory::Free();
        }
      }
    }
    else {
      if (cVar4 == '\x01') {
        bVar8 = (bool)(bVar24 >> 3 & 1);
        goto LAB_14160f810;
      }
      if (cVar4 == '\x02') {
        bVar8 = (bool)(bVar24 >> 1 & 1);
        goto LAB_14160f810;
      }
    }
    if (local_110 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    uStack_78 = uStack_78 & ~uStack_88._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_88);
    uVar6 = uStack_78;
  } while( true );
}



// FUNCTION 14160faf0 FUN_14160faf0 body=438 status=ok
// SIG undefined FUN_14160faf0(void)

void FUN_14160faf0(longlong param_1,longlong param_2,undefined8 param_3)

{
  BOOL BVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  longlong *plVar6;
  int local_res8 [2];
  longlong local_res10;
  longlong *local_res20;
  
  local_res10 = param_2;
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  }
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    lVar3 = *(longlong *)(param_1 + 0xb8);
    if (*(longlong *)(param_1 + 0xb8) == 0) {
      lVar3 = param_1 + 0xb0;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)local_res10 >> 0x20) + (int)local_res10) &
                             (longlong)*(int *)(param_1 + 0xc0) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar2 * 0x60 + *(longlong *)(param_1 + 0x78));
        if (*plVar6 == local_res10) {
          if (iVar2 != -1) goto LAB_14160fba5;
          break;
        }
        iVar2 = (int)plVar6[0xb];
      } while (iVar2 != -1);
    }
  }
  plVar6 = (longlong *)0x0;
LAB_14160fba5:
  plVar4 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  if ((plVar4 == (longlong *)0x0) ||
     (piVar5 = (int *)TSet<FString,FLocKeySetFuncs,FDefaultSetAllocator>::FindId
                                (plVar4,local_res8,param_3), *piVar5 == -1)) {
    if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
      lVar3 = *(longlong *)(param_1 + 0xb8);
      if (*(longlong *)(param_1 + 0xb8) == 0) {
        lVar3 = param_1 + 0xb0;
      }
      iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)local_res10 >> 0x20) + (int)local_res10)
                               & (longlong)*(int *)(param_1 + 0xc0) - 1U) * 4);
      if (iVar2 != -1) {
        do {
          plVar6 = (longlong *)((longlong)iVar2 * 0x60 + *(longlong *)(param_1 + 0x78));
          if (*plVar6 == local_res10) {
            if ((iVar2 != -1) && (plVar6 != (longlong *)0x0)) goto LAB_14160fc78;
            break;
          }
          iVar2 = (int)plVar6[0xb];
        } while (iVar2 != -1);
      }
    }
    local_res20 = &local_res10;
    FUN_1415ea570(param_1 + 0x78,local_res8,&local_res20,0);
    plVar6 = (longlong *)((longlong)local_res8[0] * 0x60 + *(longlong *)(param_1 + 0x78));
LAB_14160fc78:
    TSet<FString,FLocKeySetFuncs,FDefaultSetAllocator>::Emplace<FString_const_&>
              (plVar6 + 1,local_res8,param_3,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  return;
}



// FUNCTION 14160fd10 OnCultureChanged body=132 status=ok
// SIG undefined OnCultureChanged(void)

void FTextLocalizationManager::OnCultureChanged(char *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if (*param_1 != '\0') {
    lVar5 = FInternationalization::Get();
    plVar4 = *(longlong **)(lVar5 + 0x30);
    uVar6 = *(undefined8 *)(lVar5 + 0x28);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    uVar6 = FCulture::GetName(uVar6);
    FUN_14160e250(param_1,uVar6,0x1d);
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
  }
  return;
}



// FUNCTION 14160fda0 FUN_14160fda0 body=1354 status=ok
// SIG undefined FUN_14160fda0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14160fda0(longlong param_1,longlong param_2)

{
  int *piVar1;
  BOOL BVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  undefined1 auStack_298 [32];
  undefined1 local_278 [4];
  undefined2 local_274 [2];
  wchar_t *local_270;
  longlong local_268;
  int local_260;
  undefined4 local_25c;
  longlong local_258;
  undefined8 local_250;
  longlong local_248;
  code *local_238;
  undefined1 *puStack_230;
  undefined2 *local_228;
  wchar_t **local_220;
  undefined1 *local_218;
  undefined2 **ppuStack_210;
  wchar_t *local_208;
  int local_200;
  int local_1fc;
  undefined8 local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  int local_1e0;
  longlong local_1d8;
  longlong *local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined1 *puStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  code *local_198;
  longlong local_188 [4];
  longlong *local_168;
  int local_158;
  longlong local_148;
  longlong local_140;
  char local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  wchar_t *local_108;
  longlong local_100;
  char local_f0;
  undefined1 local_e8 [64];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  lVar7 = param_2 + 0x10;
  local_248 = param_2;
  FTokenStream::ParseSymbol(lVar7,&local_148,0x7c,0);
  if (local_130 == '\0') {
LAB_1416102c6:
    *(undefined1 *)(param_1 + 0x18) = 0;
    return param_1;
  }
  puStack_230 = local_278;
  local_278[0] = 0;
  local_238 = FUN_1415fe7e0;
  local_1c8 = 0x415fe7e0;
  uStack_1c4 = 1;
  puStack_1c0 = puStack_230;
  FTokenStream::ParseToken(lVar7,&local_108,&local_1c8,&local_148);
  if (local_f0 == '\0') goto LAB_1416102c6;
  lVar4 = FTokenStream::ParseSymbol(lVar7,local_a8,0x28,&local_148);
  if (*(char *)(lVar4 + 0x18) == '\0') goto LAB_1416102c6;
  local_270 = local_108;
  local_208 = local_108;
  iVar14 = (int)(local_100 - (longlong)local_108 >> 1);
  local_200 = iVar14;
  local_1fc = FCrc::MemCrc32(local_108,iVar14 * 2,0);
  uVar12 = (ulonglong)local_1fc;
  local_1f8 = 0;
  local_1f0 = 0;
  lVar4 = FUN_141607e80();
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x68));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x68));
  }
  if (*(int *)(lVar4 + 0x20) != *(int *)(lVar4 + 0x4c)) {
    lVar5 = *(longlong *)(lVar4 + 0x58);
    if (*(longlong *)(lVar4 + 0x58) == 0) {
      lVar5 = lVar4 + 0x50;
    }
    iVar11 = *(int *)(lVar5 + ((longlong)*(int *)(lVar4 + 0x60) - 1U & uVar12) * 4);
    if (iVar11 != -1) {
      lVar5 = *(longlong *)(lVar4 + 0x18);
      do {
        lVar13 = (longlong)iVar11 * 0x80;
        iVar3 = *(int *)(lVar13 + 8 + lVar5);
        if (iVar3 == iVar14) {
          iVar3 = wcsncmp(*(wchar_t **)(lVar13 + lVar5),local_270,(longlong)iVar3);
          if (iVar3 == 0) {
            if ((iVar11 != -1) && (lVar13 = *(longlong *)(lVar4 + 0x18) + lVar13, lVar13 != 0)) {
              local_168 = (longlong *)0x0;
              local_158 = 0;
              if (*(int *)(lVar13 + 0x60) != 0) {
                puVar10 = *(undefined8 **)(lVar13 + 0x50);
                if (*(undefined8 **)(lVar13 + 0x50) == (undefined8 *)0x0) {
                  puVar10 = (undefined8 *)(lVar13 + 0x30);
                }
                if (puVar10 != (undefined8 *)0x0) {
                  plVar8 = (longlong *)(**(code **)*puVar10)(puVar10,local_188);
                  (**(code **)(*plVar8 + 8))(plVar8);
                  local_198 = *(code **)(lVar13 + 0x20);
                  goto LAB_14160ff6a;
                }
              }
            }
            break;
          }
        }
        lVar5 = *(longlong *)(lVar4 + 0x18);
        iVar11 = *(int *)(lVar13 + 0x70 + lVar5);
      } while (iVar11 != -1);
    }
  }
  local_158 = 0;
  local_168 = (longlong *)0x0;
  local_198 = FUN_14107d2e0;
LAB_14160ff6a:
  plVar8 = (longlong *)0x0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x68));
  if (local_158 != 0) {
    plVar9 = local_188;
    if (local_168 != (longlong *)0x0) {
      plVar9 = plVar8;
    }
    if (plVar9 != (longlong *)0x0 || local_168 != (longlong *)0x0) {
      local_228 = local_274;
      local_274[0] = 0;
      local_220 = &local_270;
      local_270 = (wchar_t *)((ulonglong)local_270 & 0xffffffff00000000);
      ppuStack_210 = &local_228;
      local_218 = &LAB_1415fe880;
      local_1b8 = 0x415fe880;
      uStack_1b4 = 1;
      uStack_1b0 = ppuStack_210;
      puVar6 = (undefined4 *)FTokenStream::ParseToken(lVar7,local_88,&local_1b8,&local_148);
      if ((puVar6 == &local_128) || (*(char *)(puVar6 + 6) == '\0')) {
LAB_14161025f:
        *(undefined1 *)(param_1 + 0x18) = 0;
      }
      else {
        local_128 = *puVar6;
        uStack_124 = puVar6[1];
        uStack_120 = puVar6[2];
        uStack_11c = puVar6[3];
        local_118 = *(undefined8 *)(puVar6 + 4);
        lVar7 = FTokenStream::ParseSymbol(lVar7,local_68,0x29,&local_148);
        if (*(char *)(lVar7 + 0x18) == '\0') goto LAB_14161025f;
        local_268 = CONCAT44(uStack_124,local_128);
        local_260 = (int)(CONCAT44(uStack_11c,uStack_120) - local_268 >> 1);
        local_25c = FCrc::MemCrc32(local_268,local_260 * 2,0);
        local_258 = 0;
        local_250 = 0;
        if (local_158 != 0) {
          plVar9 = local_188;
          if (local_168 != (longlong *)0x0) {
            plVar9 = local_168;
          }
          if (plVar9 != (longlong *)0x0) {
            plVar8 = (longlong *)(**(code **)(*plVar9 + 8))();
          }
        }
        plVar9 = (longlong *)(*local_198)(local_1a8,plVar8,&local_268);
        lVar7 = *plVar9;
        plVar8 = (longlong *)plVar9[1];
        plVar9[1] = 0;
        *plVar9 = 0;
        if (local_1a0 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_1a0 + 1;
          lVar4 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_1a0)(local_1a0);
            LOCK();
            piVar1 = (int *)((longlong)local_1a0 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*local_1a0 + 8))(local_1a0,1);
            }
          }
        }
        if (local_258 != 0) {
          FMemory::Free();
        }
        if (lVar7 != 0) {
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
          }
          local_1e8 = local_148 + 2;
          local_1e0 = (int)(local_140 - local_148 >> 1) + -1;
          local_1d8 = lVar7;
          local_1d0 = plVar8;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            LOCK();
            plVar9 = plVar8 + 1;
            lVar7 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              iVar14 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (**(code **)(*plVar8 + 8))(plVar8,1);
              }
            }
          }
          FExpressionNode::FExpressionNode<TextFormatTokens::FArgumentModifierTokenSpecifier>
                    (local_e8,&local_1e8,0);
          FExpressionTokenConsumer::Add(local_248,&local_148,local_e8);
          FExpressionNode::~FExpressionNode(local_e8);
        }
        *(undefined1 *)(param_1 + 0x18) = 0;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar8 + 1;
          lVar7 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*plVar8 + 8))(plVar8,1);
            }
          }
        }
      }
      if (local_158 != 0) {
        plVar8 = local_188;
        if (local_168 != (longlong *)0x0) {
          plVar8 = local_168;
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x10))(plVar8,0);
        }
      }
      goto LAB_141610292;
    }
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  uStack_1b0 = (undefined2 **)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0);
  if (local_158 != 0) {
    plVar8 = local_188;
    if (local_168 != (longlong *)0x0) {
      plVar8 = local_168;
    }
    uStack_1b0 = (undefined2 **)CONCAT44(uStack_1b0._4_4_,(undefined4)uStack_1b0);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
LAB_141610292:
  if (local_168 == (longlong *)0x0) {
    return param_1;
  }
  FMemory::Free();
  return param_1;
}



// FUNCTION 1416102f0 ParseKeyValueArgs body=817 status=ok
// SIG undefined ParseKeyValueArgs(void)

undefined8
ITextFormatArgumentModifier::ParseKeyValueArgs
          (undefined8 *param_1,undefined8 param_2,wint_t param_3,wint_t param_4)

{
  wint_t *pwVar1;
  wint_t wVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  wint_t *pwVar7;
  wint_t *pwVar8;
  wint_t *pwVar9;
  int local_a8;
  undefined1 local_a4 [4];
  wint_t *local_a0;
  undefined8 local_98;
  wint_t **local_90;
  wint_t **local_88;
  wint_t *local_80;
  int local_78;
  undefined4 local_74;
  wint_t *local_70;
  undefined8 local_68;
  wint_t *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  undefined8 local_48;
  
  pwVar8 = (wint_t *)*param_1;
  pwVar1 = pwVar8 + *(int *)(param_1 + 1);
  while ((pwVar8 < pwVar1 && (iVar6 = iswspace(*pwVar8), iVar6 != 0))) {
    pwVar8 = pwVar8 + 1;
  }
  if (pwVar1 <= pwVar8) {
    return 1;
  }
  pwVar9 = pwVar8;
  if (pwVar1 <= pwVar8) goto joined_r0x000141610385;
LAB_141610366:
  iVar6 = iswspace(*pwVar8);
  pwVar9 = pwVar8;
  if (iVar6 != 0) {
    pwVar8 = pwVar8 + 1;
    pwVar9 = pwVar8;
    if (pwVar8 < pwVar1) goto LAB_141610366;
  }
joined_r0x000141610385:
  for (; pwVar8 < pwVar1; pwVar8 = pwVar8 + 1) {
    wVar2 = *pwVar8;
    iVar6 = iswalnum(wVar2);
    if (((iVar6 == 0) && (wVar2 != 0x5f)) || (*pwVar8 == param_3)) break;
  }
  local_58 = (int)((longlong)pwVar8 - (longlong)pwVar9 >> 1);
  local_60 = pwVar9;
  local_54 = FCrc::MemCrc32(pwVar9,local_58 * 2,0);
  local_50 = 0;
  local_48 = 0;
  if (local_58 == 0) {
    return 0;
  }
  for (; pwVar8 < pwVar1; pwVar8 = pwVar8 + 1) {
    iVar6 = iswspace(*pwVar8);
    if (iVar6 == 0) {
      if (pwVar8 < pwVar1) {
        if (*pwVar8 == param_3) goto joined_r0x000141610447;
        goto LAB_14161060f;
      }
      break;
    }
  }
  goto LAB_14161046f;
  while (iVar6 = iswspace(*pwVar8), iVar6 != 0) {
joined_r0x000141610447:
    pwVar8 = pwVar8 + 1;
    if (pwVar1 <= pwVar8) break;
  }
LAB_14161046f:
  iVar6 = 0;
  pwVar9 = pwVar8;
  if (*pwVar8 == 0x22) {
    local_a0 = (wint_t *)0x0;
    local_98 = 0;
    local_a8 = 0;
    cVar5 = FParse::QuotedString(pwVar8,&local_a0,&local_a8);
    uVar4 = local_98;
    pwVar7 = local_a0;
    if (cVar5 != '\0') {
      iVar3 = (int)local_98;
      local_a0 = (wint_t *)0x0;
      local_74 = 0;
      local_70 = pwVar7;
      pwVar9 = pwVar8 + local_a8;
      local_98 = 0;
      local_68 = uVar4;
      if (iVar3 == 0) {
        pwVar7 = &DAT_143f3eda8;
      }
      else {
        iVar6 = iVar3 + -1;
      }
      local_80 = pwVar7;
      local_78 = iVar6;
      local_74 = FCrc::MemCrc32(pwVar7,iVar6 * 2,0);
      if (local_a0 != (wint_t *)0x0) {
        FMemory::Free();
      }
      goto LAB_141610560;
    }
    if (local_a0 != (wint_t *)0x0) {
      FMemory::Free(local_a0);
    }
  }
  for (; (pwVar9 < pwVar1 && (*pwVar9 != param_4)); pwVar9 = pwVar9 + 1) {
  }
  local_78 = (int)((longlong)pwVar9 - (longlong)pwVar8 >> 1);
  local_80 = pwVar8;
  local_74 = FCrc::MemCrc32(pwVar8,local_78 * 2,0);
  local_70 = (wint_t *)0x0;
  local_68 = 0;
LAB_141610560:
  pwVar8 = pwVar9;
  if (local_78 == 0) {
LAB_141610601:
    if (local_70 != (wint_t *)0x0) {
      FMemory::Free();
    }
LAB_14161060f:
    if (local_50 != 0) {
      FMemory::Free();
    }
    return 0;
  }
  for (; pwVar8 < pwVar1; pwVar8 = pwVar8 + 1) {
    iVar6 = iswspace(*pwVar8);
    if (iVar6 == 0) {
      if ((pwVar8 < pwVar1) && (wVar2 = *pwVar8, pwVar8 = pwVar8 + 1, wVar2 != param_4))
      goto LAB_141610601;
      break;
    }
  }
  local_90 = &local_60;
  local_88 = &local_80;
  FUN_1415eb400(param_2,local_a4,&local_90,0);
  if (local_70 != (wint_t *)0x0) {
    FMemory::Free();
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (pwVar1 <= pwVar8) {
    return 1;
  }
  goto LAB_141610366;
}



// FUNCTION 141610630 ParseValueArgs body=706 status=ok
// SIG undefined ParseValueArgs(void)

ulonglong ITextFormatArgumentModifier::ParseValueArgs
                    (undefined8 *param_1,longlong *param_2,wint_t param_3)

{
  wint_t *pwVar1;
  ushort uVar2;
  void *_Src;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  wint_t *pwVar7;
  wint_t *pwVar8;
  wint_t *pwVar9;
  wint_t *pwVar10;
  int iVar11;
  longlong lVar12;
  undefined4 local_res8;
  int local_res20 [2];
  undefined4 local_88;
  wint_t *local_80;
  undefined8 local_78;
  void *local_70;
  ulonglong local_68;
  
  pwVar9 = (wint_t *)*param_1;
  pwVar1 = pwVar9 + *(int *)(param_1 + 1);
  pwVar7 = (wint_t *)(longlong)*(int *)(param_1 + 1);
  while (pwVar9 < pwVar1) {
    iVar4 = iswspace(*pwVar9);
    pwVar7 = (wint_t *)CONCAT44(extraout_var,iVar4);
    if (iVar4 == 0) break;
    pwVar9 = pwVar9 + 1;
    pwVar7 = pwVar9;
  }
  if (pwVar9 < pwVar1) {
    pwVar8 = pwVar9;
    if (pwVar1 <= pwVar9) goto LAB_1416106c6;
LAB_1416106b0:
    do {
      iVar4 = iswspace(*pwVar9);
      pwVar8 = pwVar9;
      if (iVar4 != 0) {
        pwVar9 = pwVar9 + 1;
        pwVar8 = pwVar9;
        if (pwVar9 < pwVar1) goto LAB_1416106b0;
      }
LAB_1416106c6:
      pwVar7 = (wint_t *)0x0;
      pwVar9 = pwVar8;
      if (*pwVar8 == 0x22) {
        local_70 = (void *)0x0;
        local_68 = 0;
        local_res20[0] = 0;
        cVar3 = FParse::QuotedString(pwVar8,&local_70,local_res20);
        _Src = local_70;
        if (cVar3 == '\0') {
          if (local_70 != (void *)0x0) {
            FMemory::Free();
          }
          goto joined_r0x0001416107cd;
        }
        lVar12 = (longlong)(int)local_68;
        local_80 = (wint_t *)0x0;
        local_78._0_4_ = (int)local_68;
        pwVar9 = pwVar8 + local_res20[0];
        if ((int)local_68 == 0) {
          local_res8 = 0;
          pwVar10 = pwVar7;
          iVar11 = (int)local_68;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,local_68 & 0xffffffff,0);
          pwVar10 = local_80;
          ::_guard_xfg_dispatch_icall_nop(local_80,_Src,lVar12 * 2);
          local_res8 = local_78._4_4_;
          iVar11 = (int)local_78;
        }
        local_80 = (wint_t *)0x0;
        local_78 = 0;
        if (iVar11 == 0) {
          pwVar8 = &DAT_143f3eda8;
        }
        else {
          pwVar7 = (wint_t *)(ulonglong)(iVar11 - 1);
          pwVar8 = pwVar10;
        }
        iVar4 = (int)pwVar7;
        uVar6 = FCrc::MemCrc32(pwVar8,iVar4 * 2,0);
        local_88 = (undefined4)uVar6;
        if (local_70 != (void *)0x0) {
          uVar6 = FMemory::Free();
        }
      }
      else {
joined_r0x0001416107cd:
        for (; (pwVar9 < pwVar1 && (*pwVar9 != param_3)); pwVar9 = pwVar9 + 1) {
        }
        iVar4 = (int)((longlong)pwVar9 - (longlong)pwVar8 >> 1);
        local_88 = FCrc::MemCrc32(pwVar8,iVar4 * 2,0);
        pwVar10 = (wint_t *)0x0;
        uVar6 = 0;
        iVar11 = 0;
        local_res8 = 0;
      }
      if (iVar4 == 0) {
LAB_1416108e1:
        if (pwVar10 != (wint_t *)0x0) {
          uVar6 = FMemory::Free(pwVar10);
        }
        return uVar6 & 0xffffffffffffff00;
      }
      for (; pwVar9 < pwVar1; pwVar9 = pwVar9 + 1) {
        iVar5 = iswspace(*pwVar9);
        if (iVar5 == 0) {
          if (pwVar9 < pwVar1) {
            uVar2 = *pwVar9;
            uVar6 = (ulonglong)uVar2;
            pwVar9 = pwVar9 + 1;
            if (uVar2 != param_3) goto LAB_1416108e1;
          }
          break;
        }
      }
      iVar5 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar5 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar5 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_2,iVar5);
      }
      pwVar7 = (wint_t *)((longlong)iVar5 * 0x20 + *param_2);
      *(int *)(pwVar7 + 4) = iVar4;
      *(undefined4 *)(pwVar7 + 6) = local_88;
      *(wint_t **)pwVar7 = pwVar8;
      *(wint_t **)(pwVar7 + 8) = pwVar10;
      *(int *)(pwVar7 + 0xc) = iVar11;
      *(undefined4 *)(pwVar7 + 0xe) = local_res8;
    } while (pwVar9 < pwVar1);
  }
  return CONCAT71((int7)((ulonglong)pwVar7 >> 8),1);
}



// FUNCTION 141610900 PersistText body=306 status=ok
// SIG undefined PersistText(void)

void TGeneratedTextData<FTextHistory_ArgumentDataFormat>::PersistText(longlong param_1)

{
  longlong *plVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar2;
  int iVar3;
  BOOL BVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_18;
  longlong *local_10;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x58);
    BVar4 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar4 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    if (*plVar1 == 0) {
      lVar5 = operator_new(0x10);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = FString::FString(lVar5,param_1 + 0x48);
      }
      plVar6 = (longlong *)operator_new(0x18);
      if (plVar6 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        *(undefined4 *)(plVar6 + 1) = 1;
        *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
        *plVar6 = (longlong)&PTR_DestroyObject_14413b698;
        plVar6[2] = lVar5;
      }
      local_18 = lVar5;
      local_10 = plVar6;
      SharedPointerInternals::EnableSharedFromThis(&local_18,lVar5,lVar5);
      if (plVar1 != &local_18) {
        *plVar1 = lVar5;
        local_18 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,&local_10);
        plVar6 = local_10;
      }
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
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 141610a40 PersistText body=312 status=ok
// SIG undefined PersistText(void)

void TGeneratedTextData<FTextHistory_AsCurrency>::PersistText(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar3;
  BOOL BVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_18;
  longlong *local_10;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xa8);
    BVar4 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar4 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    if (*plVar1 == 0) {
      lVar5 = operator_new(0x10);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = FString::FString(lVar5,param_1 + 0x98);
      }
      plVar6 = (longlong *)operator_new(0x18);
      if (plVar6 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        *(undefined4 *)(plVar6 + 1) = 1;
        *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
        *plVar6 = (longlong)&PTR_DestroyObject_14413b698;
        plVar6[2] = lVar5;
      }
      local_18 = lVar5;
      local_10 = plVar6;
      SharedPointerInternals::EnableSharedFromThis(&local_18,lVar5,lVar5);
      if (plVar1 != &local_18) {
        *plVar1 = lVar5;
        local_18 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,&local_10);
        plVar6 = local_10;
      }
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
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 141610b80 PersistText body=306 status=ok
// SIG undefined PersistText(void)

void TGeneratedTextData<FTextHistory_AsDate>::PersistText(longlong param_1)

{
  longlong *plVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar2;
  int iVar3;
  BOOL BVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_18;
  longlong *local_10;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x68);
    BVar4 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar4 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    if (*plVar1 == 0) {
      lVar5 = operator_new(0x10);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = FString::FString(lVar5,param_1 + 0x58);
      }
      plVar6 = (longlong *)operator_new(0x18);
      if (plVar6 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        *(undefined4 *)(plVar6 + 1) = 1;
        *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
        *plVar6 = (longlong)&PTR_DestroyObject_14413b698;
        plVar6[2] = lVar5;
      }
      local_18 = lVar5;
      local_10 = plVar6;
      SharedPointerInternals::EnableSharedFromThis(&local_18,lVar5,lVar5);
      if (plVar1 != &local_18) {
        *plVar1 = lVar5;
        local_18 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,&local_10);
        plVar6 = local_10;
      }
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
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 141610cc0 PersistText body=312 status=ok
// SIG undefined PersistText(void)

void TGeneratedTextData<FTextHistory_AsNumber>::PersistText(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar3;
  BOOL BVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_18;
  longlong *local_10;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x98);
    BVar4 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar4 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    if (*plVar1 == 0) {
      lVar5 = operator_new(0x10);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = FString::FString(lVar5,param_1 + 0x88);
      }
      plVar6 = (longlong *)operator_new(0x18);
      if (plVar6 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        *(undefined4 *)(plVar6 + 1) = 1;
        *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
        *plVar6 = (longlong)&PTR_DestroyObject_14413b698;
        plVar6[2] = lVar5;
      }
      local_18 = lVar5;
      local_10 = plVar6;
      SharedPointerInternals::EnableSharedFromThis(&local_18,lVar5,lVar5);
      if (plVar1 != &local_18) {
        *plVar1 = lVar5;
        local_18 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,&local_10);
        plVar6 = local_10;
      }
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
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 141610e00 PersistText body=306 status=ok
// SIG undefined PersistText(void)

void TGeneratedTextData<FTextHistory_Base>::PersistText(longlong param_1)

{
  longlong *plVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar2;
  int iVar3;
  BOOL BVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_18;
  longlong *local_10;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x48);
    BVar4 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar4 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    if (*plVar1 == 0) {
      lVar5 = operator_new(0x10);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = FString::FString(lVar5,param_1 + 0x38);
      }
      plVar6 = (longlong *)operator_new(0x18);
      if (plVar6 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        *(undefined4 *)(plVar6 + 1) = 1;
        *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
        *plVar6 = (longlong)&PTR_DestroyObject_14413b698;
        plVar6[2] = lVar5;
      }
      local_18 = lVar5;
      local_10 = plVar6;
      SharedPointerInternals::EnableSharedFromThis(&local_18,lVar5,lVar5);
      if (plVar1 != &local_18) {
        *plVar1 = lVar5;
        local_18 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,&local_10);
        plVar6 = local_10;
      }
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
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 141610f40 ReadFromString body=544 status=ok
// SIG undefined ReadFromString(void)

undefined8
FTextStringHelper::ReadFromString
          (short *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,int *param_5,
          char param_6,undefined1 param_7)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int local_res8 [2];
  int *piVar10;
  int local_88 [2];
  longlong local_80;
  ulonglong local_78;
  longlong local_70 [3];
  longlong *local_58;
  uint local_50;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  
  piVar10 = local_res8;
  local_res8[0] = 0;
  cVar4 = FUN_141611160();
  if (cVar4 == '\0') {
    if (param_6 != '\0') {
      local_70[0] = 0;
      local_70[1] = 0;
      local_88[0] = 0;
      cVar4 = FParse::QuotedString(param_1,local_70,local_88);
      if (cVar4 == '\0') {
        uVar6 = 0;
      }
      else {
        FUN_1415f0740(local_70 + 2,local_70);
        uVar6 = *param_2;
        *param_2 = local_70[2];
        local_50 = local_50 | 0x12;
        plVar3 = (longlong *)param_2[1];
        param_2[1] = local_58;
        *(uint *)(param_2 + 2) = local_50;
        local_70[2] = uVar6;
        local_58 = plVar3;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar3 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar10 = (int *)((longlong)plVar3 + 0xc);
            iVar8 = *piVar10;
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        if (param_5 != (int *)0x0) {
          *param_5 = local_88[0];
        }
        uVar6 = 1;
      }
      if (local_70[0] == 0) {
        return uVar6;
      }
      FMemory::Free();
      return uVar6;
    }
    local_78 = 0;
    local_80 = 0;
    iVar8 = 0;
    if ((param_1 != (short *)0x0) && (*param_1 != 0)) {
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (param_1[lVar7] != 0);
      uVar5 = (int)lVar7 + 1;
      local_78 = (ulonglong)uVar5;
      uVar9 = uVar5;
      if (0 < (int)uVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,0);
        uVar9 = (uint)local_78;
      }
      FGenericPlatformString::Memcpy
                (local_80,param_1,(longlong)(int)uVar5 * 2,param_4,piVar10,param_7);
      iVar8 = 0;
      if (uVar9 != 0) {
        iVar8 = uVar9 - 1;
      }
    }
    FUN_1415f0740(&local_48,&local_80);
    uVar6 = *param_2;
    *param_2 = local_48;
    local_38 = local_38 | 0x12;
    plVar3 = (longlong *)param_2[1];
    param_2[1] = local_40;
    *(uint *)(param_2 + 2) = local_38;
    local_48 = uVar6;
    local_40 = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar10 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if (param_5 != (int *)0x0) {
      *param_5 = iVar8;
    }
    if (local_80 != 0) {
      FMemory::Free();
    }
  }
  else if (param_5 != (int *)0x0) {
    *param_5 = local_res8[0];
  }
  return 1;
}



// FUNCTION 141611160 FUN_141611160 body=3685 status=ok
// SIG undefined FUN_141611160(void)

ulonglong FUN_141611160(wchar_t *param_1,undefined8 *param_2,short *param_3,undefined8 param_4,
                       undefined4 *param_5,undefined1 param_6)

{
  longlong *plVar1;
  int *piVar2;
  wchar_t wVar3;
  undefined8 uVar4;
  bool bVar5;
  void *pvVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  wchar_t *pwVar11;
  undefined2 **ppuVar12;
  undefined8 uVar13;
  undefined4 extraout_var;
  wchar_t *pwVar14;
  wchar_t **ppwVar15;
  ulonglong uVar16;
  undefined2 *puVar17;
  wchar_t *pwVar18;
  uint uVar19;
  longlong lVar20;
  undefined2 *puVar21;
  byte bVar22;
  longlong *plVar23;
  undefined2 *puVar24;
  bool bVar25;
  int local_1e8 [2];
  undefined2 *local_1e0;
  undefined2 *local_1d8;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8 [2];
  undefined2 *local_1b0;
  undefined8 local_1a8;
  undefined2 *local_1a0;
  undefined8 local_198;
  void *local_190;
  int local_188;
  undefined4 local_184;
  void *local_180;
  ulonglong local_178;
  undefined2 *local_170;
  undefined8 local_168;
  wchar_t *local_160;
  ulonglong local_158;
  wchar_t *local_150;
  int local_148;
  undefined4 local_144;
  undefined2 *local_140;
  undefined8 local_138;
  undefined2 *local_130;
  undefined8 local_128;
  longlong local_120 [3];
  void *local_108;
  int local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  longlong *local_f0;
  uint local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  uint local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  uint local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  wchar_t *local_98;
  undefined8 local_90;
  wchar_t *local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined1 local_58 [8];
  longlong local_50 [2];
  longlong local_40 [3];
  
  pwVar11 = (wchar_t *)0x0;
  iVar9 = 0;
  local_1e8[0] = 0;
  if (DAT_1464a9338 == 0) {
    pwVar18 = L"";
    iVar8 = iVar9;
  }
  else {
    pwVar18 = DAT_1464a9330;
    iVar8 = DAT_1464a9338 + -1;
  }
  iVar8 = wcsncmp(param_1,pwVar18,(longlong)iVar8);
  if (iVar8 == 0) {
    if (DAT_1464a9338 != 0) {
      iVar9 = DAT_1464a9338 + -1;
    }
    pwVar18 = param_1 + iVar9;
    wVar3 = *pwVar18;
    while ((((wVar3 != L'\0' && (wVar3 != L'(')) && (wVar3 != L'\n')) && (wVar3 != L'\r'))) {
      pwVar14 = pwVar18 + 1;
      pwVar18 = pwVar18 + 1;
      wVar3 = *pwVar14;
    }
    pwVar14 = pwVar11;
    if (wVar3 == L'(') {
      pwVar14 = pwVar18;
    }
    uVar16 = 0;
    if (pwVar14 == (wchar_t *)0x0) goto LAB_141611f9b;
    local_130 = (undefined2 *)0x0;
    local_128 = 0;
    wVar3 = *pwVar14;
    while (((wVar3 != L'\0' && (wVar3 != L'\"')) && ((wVar3 != L'\n' && (wVar3 != L'\r'))))) {
      pwVar18 = pwVar14 + 1;
      pwVar14 = pwVar14 + 1;
      wVar3 = *pwVar18;
    }
    pwVar18 = pwVar11;
    if (wVar3 == L'\"') {
      pwVar18 = pwVar14;
    }
    if (pwVar18 != (wchar_t *)0x0) {
      local_1d0 = 0;
      cVar7 = FParse::QuotedString(pwVar18,&local_130,&local_1d0);
      if ((cVar7 != '\0') && (pwVar18 = pwVar18 + local_1d0, pwVar18 != (wchar_t *)0x0)) {
        local_180 = (void *)0x0;
        local_178 = 0;
        wVar3 = *pwVar18;
        while ((((wVar3 != L'\0' && (wVar3 != L'\"')) && (wVar3 != L'\n')) && (wVar3 != L'\r'))) {
          pwVar14 = pwVar18 + 1;
          pwVar18 = pwVar18 + 1;
          wVar3 = *pwVar14;
        }
        pwVar14 = pwVar11;
        if (wVar3 == L'\"') {
          pwVar14 = pwVar18;
        }
        if (pwVar14 == (wchar_t *)0x0) {
LAB_1416114f9:
          bVar22 = 0;
        }
        else {
          local_1cc = 0;
          cVar7 = FParse::QuotedString(pwVar14,&local_180,&local_1cc);
          if ((cVar7 == '\0') || (pwVar14 = pwVar14 + local_1cc, pwVar14 == (wchar_t *)0x0))
          goto LAB_1416114f9;
          wVar3 = *pwVar14;
          while (((wVar3 != L'\0' && (wVar3 != L')')) && ((wVar3 != L'\n' && (wVar3 != L'\r'))))) {
            pwVar18 = pwVar14 + 1;
            pwVar14 = pwVar14 + 1;
            wVar3 = *pwVar18;
          }
          if (wVar3 == L')') {
            pwVar11 = pwVar14;
          }
          if (pwVar11 == (wchar_t *)0x0) goto LAB_1416114f9;
          puVar17 = &DAT_143f3eda8;
          if ((int)local_128 != 0) {
            puVar17 = local_130;
          }
          puVar10 = (undefined8 *)FName::FName(local_58,puVar17,1);
          uVar13 = *puVar10;
          FUN_141607d00();
          pvVar6 = local_180;
          lVar20 = (longlong)(int)local_178;
          local_190 = (void *)0x0;
          local_188 = (int)local_178;
          local_120[2] = uVar13;
          if ((int)local_178 == 0) {
            local_184 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_190,local_178 & 0xffffffff,0);
            _guard_xfg_dispatch_icall_nop(local_190,pvVar6,lVar20 * 2);
          }
          FStringTableRedirects::RedirectTableIdAndKey(local_120 + 2,&local_190,param_6);
          pvVar6 = local_190;
          lVar20 = (longlong)local_188;
          local_108 = (void *)0x0;
          local_100 = local_188;
          if (local_188 == 0) {
            local_fc = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_108,local_188,0);
            _guard_xfg_dispatch_icall_nop(local_108,pvVar6,lVar20 * 2);
          }
          FUN_1415f0d30(&local_88,local_120[2],&local_108);
          if (pvVar6 != (void *)0x0) {
            FMemory::Free(pvVar6);
          }
          pwVar18 = (wchar_t *)*param_2;
          *param_2 = local_88;
          plVar23 = (longlong *)param_2[1];
          param_2[1] = local_80;
          *(undefined4 *)(param_2 + 2) = local_78;
          local_88 = pwVar18;
          local_80 = plVar23;
          if (plVar23 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar23 + 1;
            lVar20 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar20 == 1) {
              (**(code **)*plVar23)(plVar23);
              LOCK();
              piVar2 = (int *)((longlong)plVar23 + 0xc);
              iVar9 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar9 == 1) {
                (**(code **)(*plVar23 + 8))(plVar23,1);
              }
            }
          }
          if (param_5 != (undefined4 *)0x0) {
            *param_5 = (int)((longlong)pwVar11 + (2 - (longlong)param_1) >> 1);
          }
          bVar22 = 1;
        }
        puVar17 = local_130;
        if (local_180 != (void *)0x0) {
          FMemory::Free(local_180);
          puVar17 = local_130;
        }
        goto LAB_141611510;
      }
    }
    bVar22 = 0;
    puVar17 = local_130;
  }
  else {
    if (DAT_1464a9308 == 0) {
      pwVar18 = L"";
      iVar8 = iVar9;
    }
    else {
      pwVar18 = DAT_1464a9300;
      iVar8 = DAT_1464a9308 + -1;
    }
    iVar8 = wcsncmp(param_1,pwVar18,(longlong)iVar8);
    if (iVar8 == 0) {
      if (DAT_1464a9308 != 0) {
        iVar9 = DAT_1464a9308 + -1;
      }
      pwVar18 = param_1 + iVar9;
      wVar3 = *pwVar18;
      while (((wVar3 != L'\0' && (wVar3 != L'(')) && ((wVar3 != L'\n' && (wVar3 != L'\r'))))) {
        pwVar14 = pwVar18 + 1;
        pwVar18 = pwVar18 + 1;
        wVar3 = *pwVar14;
      }
      pwVar14 = pwVar11;
      if (wVar3 == L'(') {
        pwVar14 = pwVar18;
      }
      uVar16 = 0;
      if (pwVar14 == (wchar_t *)0x0) goto LAB_141611f9b;
      local_120[0] = 0;
      local_120[1] = 0;
      wVar3 = *pwVar14;
      while (((wVar3 != L'\0' && (wVar3 != L'\"')) && ((wVar3 != L'\n' && (wVar3 != L'\r'))))) {
        pwVar18 = pwVar14 + 1;
        pwVar14 = pwVar14 + 1;
        wVar3 = *pwVar18;
      }
      pwVar18 = pwVar11;
      if (wVar3 == L'\"') {
        pwVar18 = pwVar14;
      }
      if (pwVar18 == (wchar_t *)0x0) {
LAB_14161171d:
        bVar22 = 0;
      }
      else {
        local_1c8 = 0;
        cVar7 = FParse::QuotedString(pwVar18,local_120,&local_1c8);
        if ((cVar7 == '\0') || (pwVar18 = pwVar18 + local_1c8, pwVar18 == (wchar_t *)0x0))
        goto LAB_14161171d;
        wVar3 = *pwVar18;
        while (wVar3 != L'\0') {
          bVar25 = true;
          if (wVar3 == L')') goto LAB_14161167d;
          if ((wVar3 == L'\n') || (wVar3 == L'\r')) break;
          pwVar14 = pwVar18 + 1;
          pwVar18 = pwVar18 + 1;
          wVar3 = *pwVar14;
        }
        bVar25 = wVar3 == L')';
LAB_14161167d:
        if (bVar25) {
          pwVar11 = pwVar18;
        }
        if (pwVar11 == (wchar_t *)0x0) goto LAB_14161171d;
        FUN_1415f0740(&local_f8,local_120);
        uVar13 = *param_2;
        *param_2 = local_f8;
        local_e8 = local_e8 | 2;
        plVar23 = (longlong *)param_2[1];
        param_2[1] = local_f0;
        *(uint *)(param_2 + 2) = local_e8;
        local_f8 = uVar13;
        local_f0 = plVar23;
        if (plVar23 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar23 + 1;
          lVar20 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar20 == 1) {
            (**(code **)*plVar23)(plVar23);
            LOCK();
            piVar2 = (int *)((longlong)plVar23 + 0xc);
            iVar9 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar9 == 1) {
              (**(code **)(*plVar23 + 8))(plVar23,1);
            }
          }
        }
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = (int)((longlong)pwVar11 + (2 - (longlong)param_1) >> 1);
        }
        bVar22 = 1;
      }
      if (local_120[0] != 0) {
        FMemory::Free(local_120[0]);
        return (ulonglong)bVar22;
      }
      goto LAB_14161151a;
    }
    if (DAT_1464a9318 == 0) {
      pwVar18 = L"";
      iVar8 = iVar9;
    }
    else {
      pwVar18 = DAT_1464a9310;
      iVar8 = DAT_1464a9318 + -1;
    }
    iVar8 = wcsncmp(param_1,pwVar18,(longlong)iVar8);
    if (iVar8 == 0) {
      if (DAT_1464a9318 != 0) {
        iVar9 = DAT_1464a9318 + -1;
      }
      pwVar18 = param_1 + iVar9;
      wVar3 = *pwVar18;
      while ((((wVar3 != L'\0' && (wVar3 != L'(')) && (wVar3 != L'\n')) && (wVar3 != L'\r'))) {
        pwVar14 = pwVar18 + 1;
        pwVar18 = pwVar18 + 1;
        wVar3 = *pwVar14;
      }
      pwVar14 = pwVar11;
      if (wVar3 == L'(') {
        pwVar14 = pwVar18;
      }
      uVar16 = 0;
      if (pwVar14 == (wchar_t *)0x0) goto LAB_141611f9b;
      local_1e0 = (undefined2 *)0x0;
      local_1d8 = (undefined2 *)0x0;
      wVar3 = *pwVar14;
      while (((wVar3 != L'\0' && (wVar3 != L'\"')) && ((wVar3 != L'\n' && (wVar3 != L'\r'))))) {
        pwVar18 = pwVar14 + 1;
        pwVar14 = pwVar14 + 1;
        wVar3 = *pwVar18;
      }
      pwVar18 = pwVar11;
      if (wVar3 == L'\"') {
        pwVar18 = pwVar14;
      }
      if (pwVar18 != (wchar_t *)0x0) {
        local_1c4 = 0;
        cVar7 = FParse::QuotedString(pwVar18,&local_1e0,&local_1c4);
        if ((cVar7 != '\0') && (pwVar18 = pwVar18 + local_1c4, pwVar18 != (wchar_t *)0x0)) {
          local_170 = (undefined2 *)0x0;
          local_168 = 0;
          wVar3 = *pwVar18;
          while ((((wVar3 != L'\0' && (wVar3 != L'\"')) && (wVar3 != L'\n')) && (wVar3 != L'\r'))) {
            pwVar14 = pwVar18 + 1;
            pwVar18 = pwVar18 + 1;
            wVar3 = *pwVar14;
          }
          pwVar14 = pwVar11;
          if (wVar3 == L'\"') {
            pwVar14 = pwVar18;
          }
          if (pwVar14 == (wchar_t *)0x0) {
LAB_141611b2f:
            bVar22 = 0;
          }
          else {
            local_1c0 = 0;
            cVar7 = FParse::QuotedString(pwVar14,&local_170,&local_1c0);
            if ((cVar7 == '\0') || (pwVar14 = pwVar14 + local_1c0, pwVar14 == (wchar_t *)0x0))
            goto LAB_141611b2f;
            local_1b0 = (undefined2 *)0x0;
            local_1a8 = 0;
            wVar3 = *pwVar14;
            while (((wVar3 != L'\0' && (wVar3 != L'\"')) && ((wVar3 != L'\n' && (wVar3 != L'\r')))))
            {
              pwVar18 = pwVar14 + 1;
              pwVar14 = pwVar14 + 1;
              wVar3 = *pwVar18;
            }
            pwVar18 = pwVar11;
            if (wVar3 == L'\"') {
              pwVar18 = pwVar14;
            }
            if (pwVar18 == (wchar_t *)0x0) {
LAB_141611b1e:
              bVar22 = 0;
            }
            else {
              local_1bc = 0;
              cVar7 = FParse::QuotedString(pwVar18,&local_1b0,&local_1bc);
              if ((cVar7 == '\0') || (pwVar18 = pwVar18 + local_1bc, pwVar18 == (wchar_t *)0x0))
              goto LAB_141611b1e;
              wVar3 = *pwVar18;
              while ((((wVar3 != L'\0' && (wVar3 != L')')) && (wVar3 != L'\n')) && (wVar3 != L'\r'))
                    ) {
                pwVar14 = pwVar18 + 1;
                pwVar18 = pwVar18 + 1;
                wVar3 = *pwVar14;
              }
              if (wVar3 == L')') {
                pwVar11 = pwVar18;
              }
              if (pwVar11 == (wchar_t *)0x0) goto LAB_141611b1e;
              if ((int)local_168 < 2) {
                FUN_1415f0740(&local_e0,&local_1b0);
                uVar13 = *param_2;
                *param_2 = local_e0;
                local_d0 = local_d0 | 2;
                plVar23 = (longlong *)param_2[1];
                param_2[1] = local_d8;
                *(uint *)(param_2 + 2) = local_d0;
                local_e0 = uVar13;
                local_d8 = plVar23;
              }
              else {
                ppuVar12 = (undefined2 **)FUN_141618d80(local_50,&local_1e0);
                if (&local_1e0 != ppuVar12) {
                  if (local_1e0 != (undefined2 *)0x0) {
                    FMemory::Free();
                  }
                  local_1e0 = *ppuVar12;
                  *ppuVar12 = (undefined2 *)0x0;
                  local_1d8 = ppuVar12[1];
                  ppuVar12[1] = (undefined2 *)0x0;
                }
                if (local_50[0] != 0) {
                  FMemory::Free();
                }
                puVar17 = &DAT_143f3eda8;
                if ((int)local_168 != 0) {
                  puVar17 = local_170;
                }
                puVar21 = &DAT_143f3eda8;
                if ((int)local_1d8 != 0) {
                  puVar21 = local_1e0;
                }
                puVar24 = &DAT_143f3eda8;
                if ((int)local_1a8 != 0) {
                  puVar24 = local_1b0;
                }
                uVar13 = FUN_141607df0();
                FTextCache::FindOrCache(uVar13,&local_70,puVar24,puVar21,puVar17);
                uVar13 = *param_2;
                *param_2 = local_70;
                plVar23 = (longlong *)param_2[1];
                param_2[1] = local_68;
                *(undefined4 *)(param_2 + 2) = local_60;
                local_70 = uVar13;
                local_68 = plVar23;
              }
              if (plVar23 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar23 + 1;
                lVar20 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar20 == 1) {
                  (**(code **)*plVar23)(plVar23);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar23 + 0xc);
                  iVar9 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar9 == 1) {
                    (**(code **)(*plVar23 + 8))(plVar23,1);
                  }
                }
              }
              if (param_5 != (undefined4 *)0x0) {
                *param_5 = (int)((longlong)pwVar11 + (2 - (longlong)param_1) >> 1);
              }
              bVar22 = 1;
            }
            if (local_1b0 != (undefined2 *)0x0) {
              FMemory::Free(local_1b0);
            }
          }
          puVar17 = local_1e0;
          if (local_170 != (undefined2 *)0x0) {
            FMemory::Free();
            puVar17 = local_1e0;
          }
          goto LAB_141611510;
        }
      }
      bVar22 = 0;
      puVar17 = local_1e0;
    }
    else {
      if (DAT_1464a9328 == 0) {
        pwVar18 = L"";
        iVar8 = iVar9;
      }
      else {
        pwVar18 = DAT_1464a9320;
        iVar8 = DAT_1464a9328 + -1;
      }
      iVar8 = wcsncmp(param_1,pwVar18,(longlong)iVar8);
      uVar16 = CONCAT44(extraout_var,iVar8);
      if (iVar8 != 0) {
LAB_141611f9b:
        return uVar16 & 0xffffffffffffff00;
      }
      if (DAT_1464a9328 != 0) {
        iVar9 = DAT_1464a9328 + -1;
      }
      pwVar18 = param_1 + iVar9;
      wVar3 = *pwVar18;
      while ((((wVar3 != L'\0' && (wVar3 != L'(')) && (wVar3 != L'\n')) && (wVar3 != L'\r'))) {
        pwVar14 = pwVar18 + 1;
        pwVar18 = pwVar18 + 1;
        wVar3 = *pwVar14;
      }
      pwVar14 = pwVar11;
      if (wVar3 == L'(') {
        pwVar14 = pwVar18;
      }
      uVar16 = 0;
      if (pwVar14 == (wchar_t *)0x0) goto LAB_141611f9b;
      local_140 = (undefined2 *)0x0;
      local_138 = 0;
      wVar3 = *pwVar14;
      while (((wVar3 != L'\0' && (wVar3 != L'\"')) && ((wVar3 != L'\n' && (wVar3 != L'\r'))))) {
        pwVar18 = pwVar14 + 1;
        pwVar14 = pwVar14 + 1;
        wVar3 = *pwVar18;
      }
      pwVar18 = pwVar11;
      if (wVar3 == L'\"') {
        pwVar18 = pwVar14;
      }
      if (pwVar18 != (wchar_t *)0x0) {
        local_1b8[0] = 0;
        cVar7 = FParse::QuotedString(pwVar18,&local_140,local_1b8);
        if ((cVar7 != '\0') && (pwVar18 = pwVar18 + local_1b8[0], pwVar18 != (wchar_t *)0x0)) {
          local_1a0 = (undefined2 *)0x0;
          local_198 = 0;
          wVar3 = *pwVar18;
          while ((((wVar3 != L'\0' && (wVar3 != L'\"')) && (wVar3 != L'\n')) && (wVar3 != L'\r'))) {
            pwVar14 = pwVar18 + 1;
            pwVar18 = pwVar18 + 1;
            wVar3 = *pwVar14;
          }
          pwVar14 = pwVar11;
          if (wVar3 == L'\"') {
            pwVar14 = pwVar18;
          }
          if (pwVar14 == (wchar_t *)0x0) {
LAB_141611f78:
            bVar22 = 0;
          }
          else {
            local_1e8[0] = 0;
            cVar7 = FParse::QuotedString(pwVar14,&local_1a0,local_1e8);
            if ((cVar7 == '\0') || (pwVar14 = pwVar14 + local_1e8[0], pwVar14 == (wchar_t *)0x0))
            goto LAB_141611f78;
            wVar3 = *pwVar14;
            while (((wVar3 != L'\0' && (wVar3 != L')')) && ((wVar3 != L'\n' && (wVar3 != L'\r')))))
            {
              pwVar18 = pwVar14 + 1;
              pwVar14 = pwVar14 + 1;
              wVar3 = *pwVar18;
            }
            pwVar18 = pwVar11;
            if (wVar3 == L')') {
              pwVar18 = pwVar14;
            }
            if (pwVar18 == (wchar_t *)0x0) goto LAB_141611f78;
            if ((int)local_138 < 2) {
              FUN_1415f0740(&local_c8,&local_1a0);
              uVar13 = *param_2;
              *param_2 = local_c8;
              local_b8 = local_b8 | 2;
              plVar23 = (longlong *)param_2[1];
              param_2[1] = local_c0;
              *(uint *)(param_2 + 2) = local_b8;
              local_c8 = uVar13;
              local_c0 = plVar23;
              if (plVar23 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar23 + 1;
                lVar20 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar20 == 1) {
                  (**(code **)*plVar23)(plVar23);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar23 + 0xc);
                  iVar9 = *piVar2;
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (iVar9 == 1) {
                    (**(code **)(*plVar23 + 8))(plVar23,1);
                  }
                }
              }
            }
            else {
              if (param_3 == (short *)0x0) {
                local_90 = 0;
                ppwVar15 = &local_98;
                bVar5 = false;
                bVar25 = true;
              }
              else {
                local_160 = (wchar_t *)0x0;
                local_158 = 0;
                if (*param_3 != 0) {
                  lVar20 = -1;
                  do {
                    lVar20 = lVar20 + 1;
                  } while (param_3[lVar20] != 0);
                  uVar19 = (int)lVar20 + 1;
                  local_158 = (ulonglong)uVar19;
                  if (0 < (int)uVar19) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_160,0);
                  }
                  pwVar11 = local_160;
                  FGenericPlatformString::Memcpy(local_160,param_3,(longlong)(int)uVar19 * 2);
                }
                ppwVar15 = &local_160;
                bVar5 = true;
                bVar25 = false;
              }
              *ppwVar15 = (wchar_t *)0x0;
              local_148 = *(int *)(ppwVar15 + 1);
              local_144 = *(undefined4 *)((longlong)ppwVar15 + 0xc);
              ppwVar15[1] = (wchar_t *)0x0;
              local_150 = pwVar11;
              if ((bVar25) && (local_98 != (wchar_t *)0x0)) {
                FMemory::Free();
              }
              if ((bVar5) && (local_160 != (wchar_t *)0x0)) {
                FMemory::Free();
              }
              ppwVar15 = (wchar_t **)FUN_141618d80(local_40,&local_150);
              pwVar11 = local_150;
              iVar9 = local_148;
              if (&local_150 != ppwVar15) {
                if (local_150 != (wchar_t *)0x0) {
                  FMemory::Free();
                }
                pwVar11 = *ppwVar15;
                *ppwVar15 = (wchar_t *)0x0;
                iVar9 = *(int *)(ppwVar15 + 1);
                ppwVar15[1] = (wchar_t *)0x0;
              }
              if (local_40[0] != 0) {
                FMemory::Free();
              }
              puVar17 = &DAT_143f3eda8;
              if ((int)local_138 != 0) {
                puVar17 = local_140;
              }
              pwVar14 = L"";
              if (iVar9 != 0) {
                pwVar14 = pwVar11;
              }
              puVar21 = &DAT_143f3eda8;
              if ((int)local_198 != 0) {
                puVar21 = local_1a0;
              }
              uVar13 = FUN_141607df0();
              FTextCache::FindOrCache(uVar13,&local_b0,puVar21,pwVar14,puVar17);
              uVar13 = *param_2;
              *param_2 = local_b0;
              uVar4 = param_2[1];
              param_2[1] = local_a8;
              *(undefined4 *)(param_2 + 2) = local_a0;
              local_b0 = uVar13;
              local_a8 = uVar4;
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_b0);
              if (pwVar11 != (wchar_t *)0x0) {
                FMemory::Free(pwVar11);
              }
            }
            if (param_5 != (undefined4 *)0x0) {
              *param_5 = (int)((longlong)pwVar18 + (2 - (longlong)param_1) >> 1);
            }
            bVar22 = 1;
          }
          puVar17 = local_140;
          if (local_1a0 != (undefined2 *)0x0) {
            FMemory::Free(local_1a0);
            puVar17 = local_140;
          }
          goto LAB_141611510;
        }
      }
      bVar22 = 0;
      puVar17 = local_140;
    }
  }
LAB_141611510:
  if (puVar17 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_14161151a:
  return (ulonglong)bVar22;
}



// FUNCTION 141611fd0 FUN_141611fd0 body=374 status=ok
// SIG undefined FUN_141611fd0(void)

void FUN_141611fd0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_28 [2];
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar6 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x30))();
  cVar5 = (**(code **)(*plVar6 + 0x30))(plVar6);
  if (cVar5 != '\0') {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
    puVar7 = (undefined8 *)
             (**(code **)(*(longlong *)*param_1 + 0x18))((longlong *)*param_1,local_18);
    plVar3 = (longlong *)puVar7[1];
    plVar4 = (longlong *)*puVar7;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    cVar5 = (**(code **)(*plVar6 + 0x30))(plVar6);
    if (cVar5 != '\0') {
      lVar9 = DAT_1468b5998;
      if (DAT_1468b5998 == 0) {
        lVar8 = operator_new(0x110);
        lVar9 = 0;
        if (lVar8 != 0) {
          lVar9 = FUN_1415f3b10(lVar8);
        }
      }
      DAT_1468b5998 = lVar9;
      *(undefined2 *)(plVar6 + 1) = *(undefined2 *)(DAT_1468b5998 + 0xd0);
      cVar5 = (**(code **)(*plVar6 + 0x50))(plVar6);
      if (cVar5 != '\0') {
        plVar6 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,local_28);
        if (plVar4 != plVar6) {
          if (*plVar4 != 0) {
            FMemory::Free();
          }
          *plVar4 = *plVar6;
          *plVar6 = 0;
          *(int *)(plVar4 + 1) = (int)plVar6[1];
          *(undefined4 *)((longlong)plVar4 + 0xc) = *(undefined4 *)((longlong)plVar6 + 0xc);
          plVar6[1] = 0;
        }
        if (local_28[0] != 0) {
          FMemory::Free();
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar3 + 1;
      lVar9 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_10 + 1;
      lVar9 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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



// FUNCTION 141612150 RedirectTableIdAndKey body=430 status=ok
// SIG undefined RedirectTableIdAndKey(void)

void FStringTableRedirects::RedirectTableIdAndKey
               (longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  int local_res8 [2];
  
  plVar6 = (longlong *)0x0;
  lVar2 = *param_1;
  if (DAT_1464a9358 != DAT_1464a9384) {
    puVar3 = DAT_1464a9390;
    if (DAT_1464a9390 == (undefined *)0x0) {
      puVar3 = &DAT_1464a9388;
    }
    iVar1 = *(int *)(puVar3 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                              (longlong)DAT_1464a9398 - 1U) * 4);
    while (iVar1 != -1) {
      lVar7 = (longlong)iVar1 * 0x18;
      if (*(longlong *)(lVar7 + DAT_1464a9350) == lVar2) {
        plVar5 = (longlong *)(lVar7 + DAT_1464a9350);
        if (iVar1 != -1) goto LAB_1416121ed;
        break;
      }
      iVar1 = *(int *)(lVar7 + 0x10 + DAT_1464a9350);
    }
  }
  plVar5 = plVar6;
LAB_1416121ed:
  plVar4 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar4 = plVar6;
  }
  if (plVar4 != (longlong *)0x0) {
    *param_1 = *plVar4;
  }
  if (DAT_1468b53e0 != (longlong *)0x0) {
    (**(code **)(*DAT_1468b53e0 + 8))(DAT_1468b53e0,param_1,param_3);
  }
  lVar2 = *param_1;
  if (DAT_1464a93a8 != DAT_1464a93d4) {
    puVar3 = DAT_1464a93e0;
    if (DAT_1464a93e0 == (undefined *)0x0) {
      puVar3 = &DAT_1464a93d8;
    }
    iVar1 = *(int *)(puVar3 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                              (longlong)DAT_1464a93e8 - 1U) * 4);
    while (iVar1 != -1) {
      lVar7 = (longlong)iVar1 * 0x60;
      if (*(longlong *)(lVar7 + DAT_1464a93a0) == lVar2) {
        plVar5 = (longlong *)(lVar7 + DAT_1464a93a0);
        if (iVar1 != -1) goto LAB_14161229c;
        break;
      }
      iVar1 = *(int *)(lVar7 + DAT_1464a93a0 + 0x58);
    }
  }
  plVar5 = plVar6;
LAB_14161229c:
  plVar4 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar4 = plVar6;
  }
  if (plVar4 != (longlong *)0x0) {
    TSet<TTuple<FString,FString>,FLocKeyMapFuncs<FString>,FDefaultSetAllocator>::FindId
              (plVar4,local_res8,param_2);
    plVar5 = plVar6;
    if (local_res8[0] != -1) {
      plVar5 = (longlong *)(*plVar4 + (longlong)local_res8[0] * 0x28);
    }
    plVar4 = plVar5 + 2;
    if (plVar5 == (longlong *)0x0) {
      plVar4 = plVar6;
    }
    if (plVar4 != (longlong *)0x0) {
      FString::operator=(param_2);
    }
  }
  return;
}



// FUNCTION 141612300 RefreshResources body=126 status=ok
// SIG undefined RefreshResources(void)

void FTextLocalizationManager::RefreshResources(undefined8 param_1)

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
  FUN_14160e250(param_1,uVar6,0x1d);
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



// FUNCTION 141612380 RegisterCultureNames body=454 status=ok
// SIG undefined RegisterCultureNames(void)

void FPolyglotTextSource::RegisterCultureNames(longlong param_1,byte *param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong uVar10;
  byte local_res8 [8];
  int local_res10 [2];
  byte *local_res18 [2];
  longlong *local_38;
  undefined8 local_30;
  
  plVar8 = (longlong *)(param_1 + 8);
  local_res8[0] = *param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar7 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar7 = param_1 + 0x40;
    }
    iVar4 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (ulonglong)local_res8[0]) *
                             4);
    if (iVar4 != -1) {
      do {
        pbVar6 = (byte *)((longlong)iVar4 * 0xb0 + *plVar8);
        if (*pbVar6 == local_res8[0]) {
          if ((iVar4 != -1) && (pbVar6 != (byte *)0x0)) goto LAB_141612437;
          break;
        }
        iVar4 = *(int *)(pbVar6 + 0xa8);
      } while (iVar4 != -1);
    }
  }
  local_res18[0] = local_res8;
  FUN_1415e9d50(plVar8,local_res10,local_res18,0);
  pbVar6 = (byte *)((longlong)local_res10[0] * 0xb0 + *plVar8);
LAB_141612437:
  pbVar1 = pbVar6 + 8;
  if (1 < *(int *)(param_2 + 0x10)) {
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::FindId(pbVar1,local_res10,param_2 + 8);
    if ((local_res10[0] == -1) ||
       (lVar7 = (longlong)local_res10[0] * 0x20 + *(longlong *)pbVar1, lVar7 == 0)) {
      piVar5 = (int *)TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                      ::Emplace<FString_const_&>(pbVar1,param_2 + 8);
    }
    else {
      piVar5 = (int *)(lVar7 + 0x10);
    }
    *piVar5 = *piVar5 + 1;
  }
  local_38 = (longlong *)0x0;
  local_30 = 0;
  TMapBase<FString,TSharedPtr<FJsonValue,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,0>,0>_>
  ::GenerateKeyArray<FDefaultAllocator>(param_2 + 0x48,&local_38);
  plVar3 = local_38;
  uVar9 = (uint)local_30;
  uVar10 = (ulonglong)(int)(uint)local_30;
  AlgoImpl::
  IntroSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>
            (local_38,uVar10,local_res8[0],local_res10);
  for (plVar8 = plVar3; plVar2 = plVar3, plVar8 != plVar3 + uVar10 * 2; plVar8 = plVar8 + 2) {
    if (1 < (int)plVar8[1]) {
      TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
      ::FindId(pbVar6 + 0x58,local_res10,plVar8);
      if ((local_res10[0] == -1) ||
         (lVar7 = (longlong)local_res10[0] * 0x20 + *(longlong *)(pbVar6 + 0x58), lVar7 == 0)) {
        piVar5 = (int *)TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                        ::Emplace<FString_const_&>(pbVar6 + 0x58,plVar8);
      }
      else {
        piVar5 = (int *)(lVar7 + 0x10);
      }
      *piVar5 = *piVar5 + 1;
    }
  }
  while (uVar9 != 0) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    uVar9 = (int)uVar10 - 1;
    uVar10 = (ulonglong)uVar9;
    plVar2 = plVar2 + 2;
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
  }
  return;
}



// FUNCTION 141612550 RegisterPolyglotTextData body=404 status=ok
// SIG undefined RegisterPolyglotTextData(void)

void FPolyglotTextSource::RegisterPolyglotTextData(longlong param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined8 **ppuVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  int local_res8 [2];
  undefined8 **local_58;
  undefined8 local_50;
  longlong *local_48;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  if (*(int *)(param_2 + 0x30) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = *(undefined2 **)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x20) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = *(undefined2 **)(param_2 + 0x18);
  }
  FString::PrintfImpl(&local_58,L"%s::%s",puVar4,puVar5);
  ppuVar2 = (undefined8 **)&DAT_143f3eda8;
  if ((int)local_50 != 0) {
    ppuVar2 = local_58;
  }
  local_40 = (int)local_50;
  local_48 = (longlong *)local_58;
  local_58 = (longlong **)0x0;
  local_3c = local_50._4_4_;
  local_50 = (undefined1 *)0x0;
  local_38 = FCrc::StrCrc32<wchar_t>(ppuVar2,0);
  TSet<TTuple<FLocKey,FPolyglotTextData>,TDefaultMapHashableKeyFuncs<FLocKey,FPolyglotTextData,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x58,local_res8,&local_48);
  puVar1 = (undefined1 *)0x0;
  if (local_res8[0] != -1) {
    puVar1 = (undefined1 *)((longlong)local_res8[0] * 0xd0 + *(longlong *)(param_1 + 0x58));
  }
  puVar3 = puVar1 + 0x18;
  if (puVar1 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  if (puVar3 == (undefined1 *)0x0) {
    local_58 = &local_48;
    local_50 = param_2;
    FUN_1415ec090(param_1 + 0x58,local_res8,&local_58,0);
  }
  else {
    UnregisterCultureNames(param_1,puVar3);
    *puVar3 = *param_2;
    FString::operator=(puVar3 + 8,param_2 + 8);
    FString::operator=(puVar3 + 0x18,param_2 + 0x18);
    FString::operator=(puVar3 + 0x28,param_2 + 0x28);
    FString::operator=(puVar3 + 0x38,param_2 + 0x38);
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=(puVar3 + 0x48,param_2 + 0x48);
    FText::operator=(puVar3 + 0x98,param_2 + 0x98);
    param_2 = puVar3;
  }
  RegisterCultureNames(param_1,param_2);
  if ((undefined8 **)local_48 != (undefined8 **)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1416126f0 FUN_1416126f0 body=441 status=ok
// SIG undefined FUN_1416126f0(void)

void FUN_1416126f0(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong local_30;
  longlong **local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18 [2];
  
  FPolyglotTextSource::RegisterPolyglotTextData(*(undefined8 *)(param_1 + 0x100));
  if (param_3 != '\0') {
    local_38 = param_1;
    local_30 = param_2;
    plStack_60 = (longlong *)FUN_1415ef7f0();
    local_68 = plStack_60 + 2;
    SharedPointerInternals::EnableSharedFromThis(&local_68,local_68,local_68);
    plVar5 = plStack_60;
    local_48 = local_68;
    plStack_40 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_60 + 1) = (int)plStack_60[1] + 1;
      UNLOCK();
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_60 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_60)(plStack_60);
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
    plVar5 = local_48;
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
    uVar6 = FUN_1415f95d0(&local_38,local_18);
    FTextLocalizationResource::AddEntry
              (plVar5,param_2 + 0x18,param_2 + 0x28,param_2 + 0x38,uVar6,&local_58);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    plVar5 = plStack_50;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_50 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_50)(plStack_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_50 + 8))(plStack_50,1);
        }
      }
    }
    _uStack_20 = CONCAT44(uStack_1c,1);
    local_28 = &local_48;
    FUN_14161a7a0(param_1,&local_28);
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
  }
  return;
}



// FUNCTION 1416128b0 RegisterStringTable body=249 status=ok
// SIG undefined RegisterStringTable(void)

void FStringTableRegistry::RegisterStringTable
               (longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  BOOL BVar6;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_38;
  longlong *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x50);
  local_res10 = param_2;
  BVar6 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar6 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  local_38 = *param_3;
  local_30 = (longlong *)param_3[1];
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  local_28 = &local_res10;
  local_20 = &local_38;
  FUN_1415ec340(param_1,local_res8,&local_28,0);
  plVar4 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
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
  LeaveCriticalSection(lpCriticalSection);
  plVar4 = (longlong *)param_3[1];
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



// FUNCTION 1416129b0 Rehash body=520 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap>,TDefaultMapHashableKeyFuncs<enum_ECoreRedirectFlags,FCoreRedirects::FRedirectNameMap,0>,FDefaultSetAllocator>
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
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
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
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_141612aef;
        uVar5 = puVar12[lVar6 + 1];
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
LAB_141612aef:
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
        puVar12 = (uint *)((longlong)iStack_1c * 0x60 + *param_1);
        uVar5 = (int)*plVar2 - 1U & *puVar12;
        puVar12[0x17] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar12[0x16] =
             *(uint *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
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



// FUNCTION 141612bc0 Rehash body=517 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FTextCache::FCacheKey,FText>,TDefaultMapHashableKeyFuncs<FTextCache::FCacheKey,FText,0>,FDefaultSetAllocator>
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
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
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
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_141612cff;
        uVar5 = puVar12[lVar6 + 1];
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
LAB_141612cff:
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
        lVar6 = (longlong)iStack_1c * 0x58 + *param_1;
        uVar5 = (int)*plVar2 - 1U & *(uint *)(lVar6 + 0x34);
        *(uint *)(lVar6 + 0x54) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x50) =
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



// FUNCTION 141612dd0 Rehash body=529 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FLocKey,FPolyglotTextData>,TDefaultMapHashableKeyFuncs<FLocKey,FPolyglotTextData,0>,FDefaultSetAllocator>
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
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
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
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_141612f0f;
        uVar5 = puVar12[lVar6 + 1];
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
LAB_141612f0f:
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
        lVar6 = (longlong)iStack_1c * 0xd0 + *param_1;
        uVar5 = (int)*plVar2 - 1U & *(uint *)(lVar6 + 0x10);
        *(uint *)(lVar6 + 0xcc) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 200) =
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



// FUNCTION 141612ff0 Rehash body=546 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FString,TSharedPtr<FStringTableEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FStringTableEntry,1>_>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
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
    lVar7 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar7;
  }
  uVar6 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar6 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar6) {
      uVar12 = 0;
      uVar13 = (ulonglong)uVar6;
      do {
        uVar11 = (longlong)(int)*plVar2 - 1U & uVar12;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        uVar12 = uVar12 + 1;
        *(undefined4 *)((longlong)plVar8 + uVar11 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar4 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar6 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar6 == 0) {
        lVar7 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar9 = local_58 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar9;
        if (bVar5) goto LAB_14161312f;
        uVar6 = puVar14[lVar7 + 1];
      }
      uStack_54 = -uVar6 & uVar6;
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
      if (iVar4 < iStack_44) {
LAB_14161312f:
        iStack_44 = iVar4;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar4) {
      do {
        iVar4 = iStack_1c;
        puVar3 = (undefined8 *)(*param_1 + (longlong)iStack_1c * 0x28);
        if (*(int *)(*param_1 + 8 + (longlong)iStack_1c * 0x28) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)*puVar3;
        }
        uVar6 = FCrc::StrCrc32<wchar_t>(puVar10);
        uVar6 = uVar6 & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar3 + 0x24) = uVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(puVar3 + 4) =
             *(undefined4 *)
              ((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar6) * 4) =
             iVar4;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 141613220 Rehash body=545 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FLocKeyMapFuncs<TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_14161334f;
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
LAB_14161334f:
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
        puVar11 = (undefined8 *)((longlong)iStack_2c * 0x68 + *param_1);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar11;
        }
        uVar5 = FCrc::StrCrc32<wchar_t>(puVar9);
        uVar5 = uVar5 & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar11 + 100) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar11 + 0xc) =
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



// FUNCTION 141613450 Rehash body=521 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FTextFormatString,FTextFormatString>,TDefaultMapHashableKeyFuncs<FTextFormatString,FTextFormatString,0>,FDefaultSetAllocator>
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
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
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
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_14161358f;
        uVar5 = puVar12[lVar6 + 1];
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
LAB_14161358f:
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
        lVar6 = *param_1 + (longlong)iStack_1c * 0x48;
        uVar5 = (int)*plVar2 - 1U & *(uint *)(lVar6 + 0xc);
        *(uint *)(lVar6 + 0x44) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x40) =
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



// FUNCTION 141613660 FUN_141613660 body=517 status=ok
// SIG undefined FUN_141613660(void)

void FUN_141613660(longlong *param_1)

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
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
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
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_14161379f;
        uVar5 = puVar12[lVar6 + 1];
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
LAB_14161379f:
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
        lVar6 = (longlong)iStack_1c * 0x80 + *param_1;
        uVar5 = (int)*plVar2 - 1U & *(uint *)(lVar6 + 0xc);
        *(uint *)(lVar6 + 0x74) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x70) =
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



// FUNCTION 141613870 Rehash body=517 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FTextFormatString,FTextFormat>,TDefaultMapHashableKeyFuncs<FTextFormatString,FTextFormat,0>,FDefaultSetAllocator>
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
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
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
      uVar5 = *puVar12;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_1416139af;
        uVar5 = puVar12[lVar6 + 1];
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
LAB_1416139af:
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
        lVar6 = (longlong)iStack_1c * 0x38 + *param_1;
        uVar5 = (int)*plVar2 - 1U & *(uint *)(lVar6 + 0xc);
        *(uint *)(lVar6 + 0x34) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x30) =
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



// FUNCTION 141613a80 Rehash body=529 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo>,TDefaultMapHashableKeyFuncs<enum_ELocalizedTextSourceCategory,FPolyglotTextSource::FCultureInfo,0>,FDefaultSetAllocator>
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
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_141613bbf;
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
LAB_141613bbf:
        iStack_44 = iVar3;
      }
    }
    while (iStack_44 < iVar3) {
      pbVar9 = (byte *)((longlong)iStack_44 * 0xb0 + *param_1);
      uVar4 = (int)*plVar2 - 1U & (uint)*pbVar9;
      *(uint *)(pbVar9 + 0xac) = uVar4;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined4 *)(pbVar9 + 0xa8) =
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



// FUNCTION 141613ca0 Remove body=469 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar11 = (int)(*param_2 >> 4);
  uVar9 = (longlong)(int)param_1[9] - 1;
  uVar10 = 0x9e3779b9U - iVar11 ^ iVar11 << 8;
  uVar7 = -(uVar10 + iVar11) ^ uVar10 >> 0xd;
  uVar12 = (iVar11 - uVar10) - uVar7 ^ uVar7 >> 0xc;
  uVar10 = (uVar10 - uVar12) - uVar7 ^ uVar12 << 0x10;
  uVar7 = (uVar7 - uVar10) - uVar12 ^ uVar10 >> 5;
  uVar12 = (uVar12 - uVar10) - uVar7 ^ uVar7 >> 3;
  uVar10 = (uVar10 - uVar12) - uVar7 ^ uVar12 << 10;
  plVar13 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar13 = param_1 + 7;
  }
  iVar11 = *(int *)((longlong)plVar13 +
                   (((longlong)(int)((uVar7 - uVar10) - uVar12) ^ (ulonglong)(uVar10 >> 0xf)) &
                   uVar9) * 4);
  if (iVar11 != -1) {
    lVar6 = *param_1;
    do {
      lVar8 = (longlong)iVar11;
      if (*(ulonglong *)(lVar6 + lVar8 * 0x28) == *param_2) {
        lVar8 = lVar8 * 0x28;
        uVar9 = (longlong)*(int *)(lVar8 + 0x24 + lVar6) & uVar9;
        puVar4 = (undefined4 *)((longlong)plVar13 + uVar9 * 4);
        iVar5 = *(int *)((longlong)plVar13 + uVar9 * 4);
        goto joined_r0x000141613dbd;
      }
      iVar11 = *(int *)(lVar6 + 0x20 + lVar8 * 0x28);
    } while (iVar11 != -1);
  }
  return 0;
joined_r0x000141613dbd:
  if (iVar5 == -1) {
LAB_141613df0:
    lVar6 = *param_1;
    if (*(longlong *)(lVar6 + lVar8 + 0x10) != 0) {
      FMemory::Free();
    }
    plVar13 = *(longlong **)(lVar6 + lVar8 + 8);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar13 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar3 = (int *)((longlong)plVar13 + 0xc);
        iVar5 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar11,1);
    return 1;
  }
  if (iVar5 == iVar11) {
    *puVar4 = *(undefined4 *)(lVar8 + lVar6 + 0x20);
    goto LAB_141613df0;
  }
  lVar1 = (longlong)iVar5 * 5 + 4;
  iVar5 = *(int *)(lVar6 + lVar1 * 8);
  puVar4 = (undefined4 *)(lVar6 + lVar1 * 8);
  goto joined_r0x000141613dbd;
}


