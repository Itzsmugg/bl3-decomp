// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1421c9260 FUN_1421c9260 body=323 status=ok
// SIG undefined FUN_1421c9260(void)

ulonglong FUN_1421c9260(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined4 local_res8 [2];
  undefined1 local_res18 [16];
  int local_38;
  int iStack_34;
  int iStack_30;
  uint uStack_2c;
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  local_38 = DAT_1465273c8;
  iStack_34 = DAT_1465273cc;
  iStack_30 = DAT_1465273d0;
  uStack_2c = DAT_1465273d4;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    *param_2 = 0;
  }
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,param_1);
  local_18 = local_28;
  local_10 = &local_18;
  FUN_141661f40(&local_18,&local_38);
  uVar2 = FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  if ((-1 < (char)param_1[5]) &&
     (uVar2 = (ulonglong)(DAT_1465273d4 ^ uStack_2c),
     ((DAT_1465273cc == iStack_34 && DAT_1465273d0 == iStack_30) && DAT_1465273c8 == local_38) &&
     (DAT_1465273d4 ^ uStack_2c) == 0)) {
    plVar1 = (longlong *)param_1[1];
    local_res8[0] = *param_2;
    if ((undefined4 *)plVar1[1] < (undefined4 *)*plVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(undefined4 *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    *param_2 = local_res8[0];
    puVar3 = (undefined8 *)FName::FName(local_res18,L"AssetRegistry",1);
    FArchive::SetCustomVersion(param_1,&local_38,local_res8[0],*puVar3);
    return (ulonglong)((byte)~*(byte *)(param_1 + 5) >> 7);
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1421c93d0 SetFilterTagsAndValues body=160 status=ok
// SIG undefined SetFilterTagsAndValues(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong UAssetRegistryHelpers::SetFilterTagsAndValues
                   (longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  FUN_1421a7cf0();
  lVar2 = *param_3;
  lVar1 = lVar2 + (longlong)(int)param_3[1] * 0x18;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    FString::FString(local_38,lVar2 + 8);
    local_28 = '\x01';
    TMapBase<FName,TOptional<FString>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>_>
    ::Emplace<FName,TOptional<FString>_>(param_1 + 0x40,lVar2,local_38);
    if ((local_28 != '\0') && (local_38[0] != 0)) {
      FMemory::Free();
    }
  }
  return param_1;
}



// FUNCTION 1421c9470 FUN_1421c9470 body=737 status=ok
// SIG undefined FUN_1421c9470(void)

undefined8 FUN_1421c9470(longlong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong local_res10;
  ulonglong local_res18;
  undefined2 *local_48;
  undefined8 local_40;
  code *local_38;
  ulonglong *puStack_30;
  
  local_48 = (undefined2 *)0x0;
  local_40 = 0;
  lVar5 = FAssetBundleData::StaticStruct();
  uVar6 = *(undefined8 *)(param_2 + 8);
  local_res10 = local_res10 & 0xffffffffffffff00;
  uVar7 = *(undefined8 *)(lVar5 + 0x18);
  puStack_30 = &local_res10;
  local_38 = FUN_1421afad0;
  lVar5 = FUN_1415d8310(&local_38,&DAT_1465273d8);
  iVar2 = *(int *)(lVar5 + 0x20);
  lVar13 = (longlong)iVar2;
  *(int *)(lVar5 + 0x20) = iVar2 + 1;
  if (*(int *)(lVar5 + 0x24) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (lVar5 + 0x18,iVar2);
  }
  lVar5 = *(longlong *)(lVar5 + 0x18);
  *(undefined8 *)(lVar5 + lVar13 * 0x18) = uVar6;
  *(undefined8 *)(lVar5 + 8 + lVar13 * 0x18) = uVar7;
  *(undefined2 *)(lVar5 + 0x10 + lVar13 * 0x18) = 0x202;
  lVar5 = FAssetBundleData::StaticStruct();
  cVar4 = FUN_1421b9bc0(param_2,*(undefined8 *)(lVar5 + 0x18),&local_48);
  if (cVar4 != '\0') {
    puVar11 = &DAT_143f3eda8;
    if ((int)local_40 != 0) {
      puVar11 = local_48;
    }
    uVar6 = FName::ToString(param_2 + 0x18,&local_38);
    uVar7 = FAssetBundleData::StaticStruct();
    lVar5 = FUN_14171d9a0(uVar7,puVar11,param_1,0,0,DAT_1468b6160,uVar6,1);
    if (local_38 != (code *)0x0) {
      FMemory::Free();
    }
    if (lVar5 != 0) {
      local_res10 = 0;
      local_res18 = 0;
      local_38 = (code *)0x0;
      puStack_30 = (ulonglong *)0x0;
      cVar4 = FUN_1421b9bc0(param_2,DAT_1469e7758,&local_38);
      pcVar3 = local_38;
      if (cVar4 == '\0') {
        uVar12 = local_res10;
        if (local_38 != (code *)0x0) {
          FMemory::Free();
          uVar12 = local_res10;
        }
      }
      else {
        pcVar8 = (code *)&DAT_143f3eda8;
        if ((int)puStack_30 != 0) {
          pcVar8 = local_38;
        }
        FName::FName(&local_res10,pcVar8,1);
        uVar12 = local_res10;
        if (pcVar3 != (code *)0x0) {
          FMemory::Free(pcVar3);
        }
      }
      local_38 = (code *)0x0;
      puStack_30 = (ulonglong *)0x0;
      cVar4 = FUN_1421b9bc0(param_2,DAT_1469e78c8,&local_38);
      pcVar3 = local_38;
      if (cVar4 == '\0') {
        uVar10 = local_res18;
        if (local_38 != (code *)0x0) {
          FMemory::Free();
          uVar10 = local_res18;
        }
      }
      else {
        pcVar8 = (code *)&DAT_143f3eda8;
        if ((int)puStack_30 != 0) {
          pcVar8 = local_38;
        }
        FName::FName(&local_res10,pcVar8,1);
        uVar10 = local_res10;
        if (pcVar3 != (code *)0x0) {
          FMemory::Free(pcVar3);
        }
      }
      if ((uVar12 == 0) || (uVar10 == 0)) {
        uVar12 = 0;
        uVar10 = 0;
      }
      if ((uVar12 != 0) && (uVar10 != 0)) {
        puVar9 = (ulonglong *)*param_1;
        puVar1 = puVar9 + (longlong)(int)param_1[1] * 5;
        for (; puVar9 != puVar1; puVar9 = puVar9 + 5) {
          *puVar9 = uVar12;
          puVar9[1] = uVar10;
        }
      }
      local_res10 = 0;
      uVar6 = 1;
      goto LAB_1421c96e6;
    }
  }
  uVar6 = 0;
LAB_1421c96e6:
  puStack_30 = &local_res10;
  local_res10 = local_res10 & 0xffffffffffffff00;
  local_38 = FUN_1421afad0;
  lVar5 = FUN_1415d8310(&local_38,&DAT_1465273d8);
  *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + -1;
  TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(lVar5 + 0x18);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free(local_48);
  }
  return uVar6;
}



// FUNCTION 1421c9760 FUN_1421c9760 body=4293 status=ok
// SIG undefined FUN_1421c9760(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1421c9760(longlong param_1,longlong **param_2,char param_3,uint param_4,undefined8 *param_5
                  )

{
  longlong *plVar1;
  longlong **pplVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int *piVar8;
  ulonglong uVar9;
  int iVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  longlong *plVar15;
  uint uVar16;
  uint uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined8 **ppuVar20;
  undefined8 *puVar21;
  uint uVar22;
  int iVar23;
  uint *puVar24;
  uint *puVar25;
  ulonglong uVar26;
  longlong **pplVar27;
  uint uVar28;
  longlong **pplVar29;
  uint uVar30;
  undefined1 auStack_388 [32];
  int *local_368;
  code ***local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  uint uStack_340;
  uint uStack_33c;
  undefined8 local_338;
  char local_330;
  longlong ***local_328;
  longlong *local_320;
  longlong local_318;
  undefined8 local_310;
  int local_308 [2];
  int local_300 [2];
  longlong *local_2f8;
  longlong *local_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  int *piStack_2e0;
  uint local_2d8;
  uint uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  longlong **local_2c8;
  longlong **local_2c0;
  undefined8 uStack_2b8;
  longlong **pplStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  uint local_298;
  longlong local_290;
  undefined8 *local_288;
  longlong *local_280;
  undefined8 uStack_278;
  int *piStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  longlong local_258 [2];
  longlong **local_248;
  longlong **pplStack_240;
  int *local_238;
  longlong *plStack_230;
  longlong *local_228;
  longlong *plStack_220;
  undefined8 **local_218;
  longlong *plStack_210;
  longlong *local_208;
  undefined1 local_1f8 [4];
  undefined1 local_1f4 [4];
  undefined1 local_1f0 [8];
  longlong **local_1e8;
  longlong *local_1e0;
  ulonglong local_1d8;
  longlong **local_1c8;
  longlong **pplStack_1c0;
  undefined8 *local_1b8;
  longlong *plStack_1b0;
  longlong *local_1a8;
  longlong *plStack_1a0;
  undefined8 **local_198;
  longlong *plStack_190;
  longlong *local_188;
  longlong local_178;
  ulonglong local_170;
  uint local_168 [4];
  uint *local_158;
  ulonglong local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 local_140 [8];
  undefined1 *local_138;
  uint local_130;
  undefined8 *local_128;
  undefined8 local_120;
  undefined1 local_118 [16];
  undefined1 *local_108;
  int local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_f0 [8];
  undefined1 *local_e8;
  uint local_e0;
  longlong local_d8 [2];
  int local_c8 [4];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  longlong local_88 [2];
  int local_78 [6];
  uint local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  puVar21 = (undefined8 *)0x0;
  local_288 = param_5;
  local_178 = 0;
  local_170 = 0;
  local_158 = (uint *)0x0;
  local_150 = 0;
  local_148 = 0xffffffff;
  local_144 = 0;
  local_138 = (undefined1 *)0x0;
  local_130 = 0;
  local_330 = param_3;
  local_2c8 = param_2;
  local_298 = param_4;
  local_290 = param_1;
  if (*(int *)(param_5 + 8) != 0) {
    puVar4 = puVar21;
    if (param_5[6] == 0) {
      puVar4 = param_5 + 2;
    }
    if (puVar4 != (undefined8 *)0x0 || param_5[6] != 0) goto LAB_1421c98a6;
  }
  local_198 = (undefined8 **)0x0;
  local_188 = (longlong *)((ulonglong)local_188 & 0xffffffff00000000);
  puVar4 = (undefined8 *)FUN_140438ef0(0x10,&local_1b8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &PTR_FUN_143f3f130;
  }
  local_1c8 = (longlong **)AK::MemoryMgr::SetMonitoring;
  FGenericPlatformMemory::MemswapGreaterThan8(&local_1c8,param_5,0x50);
  if ((int)local_188 != 0) {
    ppuVar20 = &local_1b8;
    if (local_198 != (undefined8 **)0x0) {
      ppuVar20 = local_198;
    }
    if (ppuVar20 != (undefined8 **)0x0) {
      (*(code *)(*ppuVar20)[2])(ppuVar20,0);
    }
  }
  if (local_198 != (undefined8 **)0x0) {
    FMemory::Free();
  }
LAB_1421c98a6:
  plVar7 = (longlong *)(param_1 + 0x198);
  uVar17 = *(uint *)(param_1 + 0x1c0);
  puVar25 = (uint *)(param_1 + 0x1a8);
  local_358._0_4_ = 0;
  local_358._4_4_ = 1;
  local_348._4_4_ = 0;
  uStack_340 = 0;
  if (uVar17 != 0) {
    puVar24 = *(uint **)(param_1 + 0x1b8);
    if (*(uint **)(param_1 + 0x1b8) == (uint *)0x0) {
      puVar24 = puVar25;
    }
    uVar16 = *puVar24;
    puVar4 = puVar21;
    while (uVar16 == 0) {
      iVar3 = (int)puVar21;
      uStack_340 = (int)puVar4 + 0x20;
      puVar4 = (undefined8 *)(ulonglong)uStack_340;
      local_358._0_4_ = iVar3 + 1;
      puVar21 = (undefined8 *)(ulonglong)(uint)local_358;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar3)
      goto LAB_1421c9963;
      uVar16 = puVar24[(longlong)iVar3 + 1];
    }
    local_358._4_4_ = -uVar16 & uVar16;
    iVar3 = 0x1f;
    if (local_358._4_4_ != 0) {
      for (; local_358._4_4_ >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    if (local_358._4_4_ == 0) {
      iVar3 = 0x20;
    }
    else {
      iVar3 = 0x1f - iVar3;
    }
    local_348._4_4_ = (uStack_340 - iVar3) + 0x1f;
    if ((int)uVar17 < (int)local_348._4_4_) {
LAB_1421c9963:
      local_348._4_4_ = uVar17;
    }
  }
  uStack_2d4 = *(uint *)(param_1 + 0x1c0);
  uStack_2a8 = CONCAT44(local_348._4_4_,0xffffffff);
  local_338 = CONCAT44(uStack_33c,uStack_340);
  uStack_2b8._0_4_ = (uint)local_358;
  uStack_2b8._4_4_ = local_358._4_4_;
  local_2d8 = -1 << ((byte)uStack_2d4 & 0x1f);
  uVar22 = uStack_2d4 & 0xffffffe0;
  uStack_350._0_4_ = (uint)local_358;
  uStack_350._4_4_ = local_358._4_4_;
  uStack_340 = 0xffffffff;
  uStack_33c = local_348._4_4_;
  local_358 = (longlong ***)plVar7;
  local_2f8 = plVar7;
  local_2c0 = (longlong **)plVar7;
  pplStack_2b0 = (longlong **)puVar25;
  uStack_2a0 = local_338;
  local_348 = (longlong **)puVar25;
  uVar16 = uStack_2d4;
  if (uStack_2d4 != uVar17) {
    puVar24 = *(uint **)(param_1 + 0x1b8);
    if (*(uint **)(param_1 + 0x1b8) == (uint *)0x0) {
      puVar24 = puVar25;
    }
    uVar16 = puVar24[(int)uStack_2d4 >> 5] & local_2d8;
    iVar3 = (int)uStack_2d4 >> 5;
    while (uVar16 == 0) {
      uVar22 = uVar22 + 0x20;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar3)
      goto LAB_1421c9a34;
      uVar16 = puVar24[(longlong)iVar3 + 1];
      local_2d8 = 0xffffffff;
      iVar3 = iVar3 + 1;
    }
    uVar16 = -uVar16 & uVar16;
    iVar3 = 0x1f;
    if (uVar16 != 0) {
      for (; uVar16 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    if (uVar16 == 0) {
      iVar3 = 0x20;
    }
    else {
      iVar3 = 0x1f - iVar3;
    }
    uStack_2d4 = (uVar22 - iVar3) + 0x1f;
    uVar16 = uStack_2d4;
    if ((int)uVar17 < (int)uStack_2d4) {
LAB_1421c9a34:
      uStack_2d4 = uVar17;
      uVar16 = uVar17;
    }
  }
  while (((uStack_33c != uVar16 || (local_348 != (longlong **)puVar25)) ||
         (local_358 != (longlong ***)plVar7))) {
    local_2f0 = &local_178;
    lVar13 = *(longlong *)((longlong)(int)uStack_33c * 0x38 + 0x28 + (longlong)*local_358);
    uVar19 = 0;
    puVar21 = *(undefined8 **)(lVar13 + 0x68);
    uVar9 = (longlong)*(int *)(lVar13 + 0x70) & 0x1fffffffffffffff;
    if (puVar21 + *(int *)(lVar13 + 0x70) < puVar21) {
      uVar9 = uVar19;
    }
    if (uVar9 != 0) {
      do {
        local_320 = (longlong *)*puVar21;
        FUN_141b1d480(local_2f0,&local_328,&local_320,0);
        uVar19 = uVar19 + 1;
        puVar21 = puVar21 + 1;
      } while (uVar19 != uVar9);
    }
    uVar19 = 0;
    puVar21 = *(undefined8 **)(lVar13 + 0x58);
    uVar9 = (longlong)*(int *)(lVar13 + 0x60) & 0x1fffffffffffffff;
    if (puVar21 + *(int *)(lVar13 + 0x60) < puVar21) {
      uVar9 = uVar19;
    }
    if (uVar9 != 0) {
      do {
        local_320 = (longlong *)*puVar21;
        FUN_141b1d480(local_2f0,local_308,&local_320,0);
        uVar19 = uVar19 + 1;
        puVar21 = puVar21 + 1;
      } while (uVar19 != uVar9);
    }
    uStack_340 = uStack_340 & ~uStack_350._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_350);
  }
  uVar9 = 0;
  if (local_330 != '\0') {
    uVar17 = (uint)local_150;
    pplStack_2b0 = (longlong **)local_168;
    local_358._0_4_ = 0;
    local_358._4_4_ = 1;
    local_348._4_4_ = 0;
    uStack_340 = 0;
    if ((uint)local_150 != 0) {
      puVar25 = local_168;
      if (local_158 != (uint *)0x0) {
        puVar25 = local_158;
      }
      uVar16 = *puVar25;
      uVar19 = uVar9;
      uVar26 = uVar9;
      while (uVar16 == 0) {
        iVar3 = (int)uVar19;
        uStack_340 = (int)uVar26 + 0x20;
        uVar26 = (ulonglong)uStack_340;
        local_358._0_4_ = iVar3 + 1;
        uVar19 = (ulonglong)(uint)local_358;
        if ((int)(((uint)local_150 - 1) + ((int)((uint)local_150 - 1) >> 0x1f & 0x1fU)) >> 5 <=
            iVar3) {
          local_348._4_4_ = (uint)local_150;
          goto LAB_1421c9c16;
        }
        uVar16 = puVar25[(longlong)iVar3 + 1];
      }
      local_358._4_4_ = -uVar16 & uVar16;
      iVar3 = 0x1f;
      if (local_358._4_4_ != 0) {
        for (; local_358._4_4_ >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      if (local_358._4_4_ == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = 0x1f - iVar3;
      }
      local_348._4_4_ = (uStack_340 - iVar3) + 0x1f;
      if ((int)(uint)local_150 < (int)local_348._4_4_) {
        local_348._4_4_ = (uint)local_150;
      }
    }
LAB_1421c9c16:
    local_2c0 = (longlong **)&local_178;
    uStack_2a8 = CONCAT44(local_348._4_4_,0xffffffff);
    local_338 = CONCAT44(uStack_33c,uStack_340);
    uStack_2b8._0_4_ = (uint)local_358;
    uStack_2b8._4_4_ = local_358._4_4_;
    uStack_2d4 = (uint)local_150;
    local_2d8 = -1 << ((byte)local_150 & 0x1f);
    uStack_350._0_4_ = (uint)local_358;
    uStack_350._4_4_ = local_358._4_4_;
    uStack_340 = 0xffffffff;
    uStack_33c = local_348._4_4_;
    local_358 = (longlong ***)local_2c0;
    uStack_2a0 = local_338;
    local_348 = pplStack_2b0;
    while (((uStack_33c != uVar17 || (local_348 != (longlong **)local_168)) ||
           (local_358 != (longlong ***)&local_178))) {
      FUN_1421c0e00(*(undefined8 *)((longlong)*local_358 + (longlong)(int)uStack_33c * 0x10));
      uStack_340 = uStack_340 & ~uStack_350._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_350);
    }
    uVar19 = local_170 >> 0x20;
    local_170 = local_170 & 0xffffffff00000000;
    if ((int)uVar19 != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_178,0);
    }
    local_148 = 0xffffffff;
    local_144 = 0;
    uVar19 = local_150 >> 0x20;
    local_150 = local_150 & 0xffffffff00000000;
    if ((int)uVar19 != 0) {
      local_150 = 0;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(local_168,0);
    }
    if (0 < (int)local_130) {
      uVar26 = (ulonglong)local_130;
      uVar19 = uVar9;
      do {
        puVar14 = local_140;
        if (local_138 != (undefined1 *)0x0) {
          puVar14 = local_138;
        }
        uVar12 = (longlong)(int)(local_130 - 1) & uVar19;
        uVar19 = uVar19 + 1;
        *(undefined4 *)(puVar14 + uVar12 * 4) = 0xffffffff;
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
    }
  }
  pplVar2 = local_2c8;
  plVar7 = local_2f8;
  pplVar29 = local_2c8 + 2;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  uVar17 = *(uint *)(local_2c8 + 5);
  local_358._0_4_ = 0;
  local_358._4_4_ = 1;
  local_348._4_4_ = 0;
  uStack_340 = 0;
  if (uVar17 != 0) {
    pplVar27 = (longlong **)local_2c8[4];
    if ((longlong **)local_2c8[4] == (longlong **)0x0) {
      pplVar27 = pplVar29;
    }
    uVar16 = *(uint *)pplVar27;
    uVar19 = uVar9;
    while (uVar16 == 0) {
      iVar3 = (int)uVar9;
      uStack_340 = (int)uVar19 + 0x20;
      uVar19 = (ulonglong)uStack_340;
      local_358._0_4_ = iVar3 + 1;
      uVar9 = (ulonglong)(uint)local_358;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar3)
      goto LAB_1421c9e74;
      uVar16 = *(uint *)((longlong)pplVar27 + ((longlong)iVar3 + 1) * 4);
    }
    local_358._4_4_ = -uVar16 & uVar16;
    iVar3 = 0x1f;
    if (local_358._4_4_ != 0) {
      for (; local_358._4_4_ >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    if (local_358._4_4_ == 0) {
      iVar3 = 0x20;
    }
    else {
      iVar3 = 0x1f - iVar3;
    }
    local_348._4_4_ = (uStack_340 - iVar3) + 0x1f;
    if ((int)uVar17 < (int)local_348._4_4_) {
LAB_1421c9e74:
      local_348._4_4_ = uVar17;
    }
  }
  uStack_2d4 = *(uint *)(local_2c8 + 5);
  local_2c0 = local_2c8;
  uStack_2a8 = CONCAT44(local_348._4_4_,0xffffffff);
  local_338 = CONCAT44(uStack_33c,uStack_340);
  uStack_2b8._0_4_ = (uint)local_358;
  uStack_2b8._4_4_ = local_358._4_4_;
  local_2d8 = -1 << ((byte)uStack_2d4 & 0x1f);
  uVar16 = uStack_2d4 & 0xffffffe0;
  uStack_350 = (int *)CONCAT44(local_358._4_4_,(uint)local_358);
  uStack_340 = 0xffffffff;
  uStack_33c = local_348._4_4_;
  local_358 = (longlong ***)local_2c8;
  pplStack_2b0 = pplVar29;
  uStack_2a0 = local_338;
  local_348 = pplVar29;
  uVar22 = uStack_2d4;
  if (uStack_2d4 != uVar17) {
    pplVar27 = (longlong **)local_2c8[4];
    if ((longlong **)local_2c8[4] == (longlong **)0x0) {
      pplVar27 = pplVar29;
    }
    uVar22 = *(uint *)((longlong)pplVar27 + (longlong)((int)uStack_2d4 >> 5) * 4) & local_2d8;
    iVar3 = (int)uStack_2d4 >> 5;
    while (uVar22 == 0) {
      uVar16 = uVar16 + 0x20;
      if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar3)
      goto LAB_1421c9f43;
      uVar22 = *(uint *)((longlong)pplVar27 + ((longlong)iVar3 + 1) * 4);
      local_2d8 = 0xffffffff;
      iVar3 = iVar3 + 1;
    }
    uVar22 = -uVar22 & uVar22;
    iVar3 = 0x1f;
    if (uVar22 != 0) {
      for (; uVar22 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    if (uVar22 == 0) {
      iVar3 = 0x20;
    }
    else {
      iVar3 = 0x1f - iVar3;
    }
    uStack_2d4 = (uVar16 - iVar3) + 0x1f;
    uVar22 = uStack_2d4;
    if ((int)uVar17 < (int)uStack_2d4) {
LAB_1421c9f43:
      uStack_2d4 = uVar17;
      uVar22 = uVar17;
    }
  }
  while (((lVar13 = local_d8[0], uStack_33c != uVar22 || (local_348 != pplVar29)) ||
         (local_358 != (longlong ***)pplVar2))) {
    FUN_1421b22b0(plVar7,local_300,*local_358 + (longlong)(int)uStack_33c * 0xb + 5);
    if (local_300[0] == -1) {
      lVar5 = 0;
    }
    else {
      lVar5 = (longlong)local_300[0] * 0x38 + *plVar7;
    }
    puVar21 = (undefined8 *)(lVar5 + 0x28);
    if (lVar5 == 0) {
      puVar21 = (undefined8 *)0x0;
    }
    if (puVar21 == (undefined8 *)0x0) {
      local_320 = (longlong *)0x0;
    }
    else {
      local_320 = (longlong *)*puVar21;
    }
    if (local_320 != (longlong *)0x0) {
      TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
      ::FindId(local_d8,local_308);
      if ((local_308[0] == -1) || (lVar13 = (longlong)local_308[0] * 0x20 + lVar13, lVar13 == 0)) {
        local_2c8 = &local_320;
        TSet<TTuple<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
        ::Emplace<TKeyInitializer<UFlareCompany_*_&>_>(local_d8,&local_328);
        lVar13 = (longlong)(int)local_328 * 0x20 + local_d8[0];
      }
      uVar6 = FUN_1421b01a0(local_290 + 8);
      iVar3 = *(int *)(lVar13 + 0x10);
      iVar10 = iVar3 + 1;
      *(int *)(lVar13 + 0x10) = iVar10;
      if (*(int *)(lVar13 + 0x14) < iVar10) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow((longlong *)(lVar13 + 8));
      }
      *(undefined8 *)(*(longlong *)(lVar13 + 8) + (longlong)iVar3 * 8) = uVar6;
    }
    uStack_340 = uStack_340 & ~uStack_350._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_350);
  }
  local_128 = (undefined8 *)0x0;
  local_120 = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(local_118,0,0);
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_e8 = (undefined1 *)0x0;
  local_e0 = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  TBitArray<FDefaultBitArrayAllocator>::TBitArray<FDefaultBitArrayAllocator>(local_78,0,0);
  uStack_350 = local_c8;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_258[0] = 0;
  local_258[1] = 0;
  local_318 = 0;
  local_310 = 0;
  local_358 = (longlong ***)0x100000000;
  local_348._0_4_ = 0xffffffff;
  local_348._4_4_ = 0;
  uStack_340 = 0;
  uVar17 = 0;
  if ((uint)local_b0 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_358);
    uVar17 = (uint)local_b0;
  }
  uStack_2a8 = CONCAT44(local_348._4_4_,(undefined4)local_348);
  uStack_2a0 = CONCAT44(uStack_33c,uStack_340);
  local_2d8 = -1 << ((byte)uVar17 & 0x1f);
  local_2c0 = (longlong **)local_d8;
  uStack_278 = local_358;
  piStack_270 = uStack_350;
  local_1d8 = (ulonglong)uVar17;
  uStack_2b8 = local_358;
  pplStack_2b0 = (longlong **)uStack_350;
  uStack_2d4 = uVar17;
  local_280 = (longlong *)local_2c0;
  uStack_268 = uStack_2a8;
  uStack_260 = uStack_2a0;
  while( true ) {
    if (((uStack_2a8._4_4_ == (int)local_1d8) && (pplStack_2b0 == (longlong **)local_c8)) &&
       (local_2c0 == (longlong **)local_d8)) break;
    plVar7 = (longlong *)((longlong)uStack_2a8._4_4_ * 0x20 + (longlong)*local_2c0);
    plVar18 = (longlong *)plVar7[1];
    pplVar29 = (longlong **)*plVar7;
    plVar7 = plVar18 + (int)plVar7[2];
    local_320 = plVar18;
    local_1e8 = pplVar29;
    local_1e0 = plVar7;
    if (plVar18 != plVar7) {
      do {
        lVar13 = local_120;
        uVar9 = 0;
        local_2f0 = (longlong *)*plVar18;
        uVar17 = local_120._4_4_;
        local_120 = (ulonglong)local_120._4_4_ << 0x20;
        local_320 = plVar18;
        if ((lVar13 < 0) && (uVar17 != 0)) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_128,0);
        }
        local_f8 = 0xffffffff;
        local_f4 = 0;
        puVar14 = local_118;
        if (local_108 != (undefined1 *)0x0) {
          puVar14 = local_108;
        }
        _guard_xfg_dispatch_icall_nop
                  (puVar14,0,
                   (longlong)((int)(local_100 + 0x1f + (local_100 + 0x1f >> 0x1f & 0x1fU)) >> 5) <<
                   2);
        local_100 = 0;
        if (0 < (int)local_e0) {
          uVar26 = (ulonglong)local_e0;
          uVar19 = uVar9;
          do {
            uVar12 = (longlong)(int)(local_e0 - 1) & uVar19;
            puVar14 = local_f0;
            if (local_e8 != (undefined1 *)0x0) {
              puVar14 = local_e8;
            }
            uVar19 = uVar19 + 1;
            *(undefined4 *)(puVar14 + uVar12 * 4) = 0xffffffff;
            uVar26 = uVar26 - 1;
          } while (uVar26 != 0);
        }
        TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
        ::Reset(local_88);
        uVar19 = local_310;
        uVar17 = local_310._4_4_;
        local_310 = (ulonglong)local_310._4_4_ << 0x20;
        uVar26 = uVar9;
        if (((longlong)uVar19 < 0) && (uVar17 != 0)) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(&local_318,0);
          uVar26 = local_310 & 0xffffffff;
        }
        puVar21 = local_288;
        plVar1 = local_2f0;
        local_248 = &local_2f0;
        pplStack_240 = &local_2f8;
        local_2f8 = local_2f0;
        plStack_230 = local_88;
        local_238 = (int *)local_288;
        local_228 = local_258;
        plStack_220 = &local_318;
        local_218 = &local_128;
        plStack_210 = local_d8;
        local_208 = &local_178;
        local_2c8 = pplVar29;
        piVar8 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                                  (&local_128,local_1f8,pplVar29);
        if (*piVar8 == -1) {
          piVar8 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                                    (&local_178,local_1f4,pplVar29);
          local_308[0] = 0x18;
          uVar11 = 1;
          if (*piVar8 != -1) {
            uVar11 = 3;
          }
          local_328 = (longlong ***)CONCAT44(local_328._4_4_,uVar11);
          if (*(int *)(puVar21 + 8) != 0) {
            plVar15 = (longlong *)puVar21[6];
            if ((longlong *)puVar21[6] == (longlong *)0x0) {
              plVar15 = puVar21 + 2;
            }
            if (plVar15 != (longlong *)0x0) {
              uVar9 = (**(code **)(*plVar15 + 8))();
            }
          }
          local_360 = (code ***)&local_328;
          local_368 = local_308;
          iVar3 = (*(code *)*puVar21)(uVar9,plVar1,plVar1,pplVar29);
          if (iVar3 != 0) {
            local_358 = &local_2c8;
            local_300[0] = 0x10;
            uStack_350 = local_300;
            FUN_1421a58e0(local_88,local_1f0,&local_358,0);
            uVar9 = local_310;
            if (iVar3 == 2) {
              lVar13 = (longlong)(int)local_310;
              iVar3 = (int)local_310 + 1;
              local_310 = CONCAT44(local_310._4_4_,iVar3);
              if ((int)local_310._4_4_ < iVar3) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (&local_318,uVar9 & 0xffffffff);
              }
              *(longlong ***)(local_318 + lVar13 * 8) = local_2c8;
            }
          }
          uVar26 = local_310 & 0xffffffff;
        }
        if ((local_298 != 0) && ((int)uVar26 != 0)) {
          local_328 = &local_1c8;
          uVar22 = local_298 & 2;
          uVar17 = local_298 & 1;
          uVar28 = local_298 & 0x10;
          uVar30 = local_298 & 8;
          uVar16 = local_298 & 4;
          do {
            iVar3 = (int)uVar26;
            iVar23 = iVar3 + -1;
            plVar7 = *(longlong **)(local_318 + (longlong)iVar23 * 8);
            iVar10 = (iVar3 - iVar23) + -1;
            if (iVar10 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(local_318 + (longlong)iVar23 * 8),
                         (void *)(local_318 + (longlong)iVar3 * 8),(longlong)iVar10 << 3);
              iVar3 = (int)local_310;
            }
            local_310 = CONCAT44(local_310._4_4_,iVar3 + -1);
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&local_318);
            local_2f8 = plVar7;
            FUN_141b1d480(&local_128,&local_290,&local_2f8,0);
            plVar7 = local_2f8;
            local_1c8 = local_248;
            pplStack_1c0 = pplStack_240;
            local_1b8 = (undefined8 *)local_238;
            plStack_1b0 = plStack_230;
            local_1a8 = local_228;
            plStack_1a0 = plStack_220;
            local_198 = local_218;
            plStack_190 = plStack_210;
            local_188 = local_208;
            if (uVar22 != 0) {
              FUN_1421acbf0(&local_328,local_2f8 + 5,2);
            }
            if (uVar17 != 0) {
              FUN_1421acbf0(&local_328,plVar7 + 7,1);
            }
            if (uVar28 != 0) {
              FUN_1421acbf0(&local_328,plVar7 + 0xd,0x10);
            }
            if (uVar30 != 0) {
              FUN_1421acbf0(&local_328,plVar7 + 0xb,8);
            }
            if (uVar16 != 0) {
              FUN_1421acbf0(&local_328,plVar7 + 9,4);
            }
            uVar26 = local_310 & 0xffffffff;
            plVar18 = local_320;
            plVar7 = local_1e0;
            pplVar29 = local_1e8;
          } while ((int)local_310 != 0);
        }
        piStack_2e0 = local_78;
        local_2e8 = 0;
        uStack_2e4 = 1;
        local_2d8 = 0xffffffff;
        uStack_2d4 = 0;
        uStack_2d0 = 0;
        if (local_60 != 0) {
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2e8);
        }
        uVar17 = local_60;
        uStack_268 = CONCAT44(uStack_2d4,local_2d8);
        uStack_260 = CONCAT44(uStack_2cc,uStack_2d0);
        local_280 = local_88;
        pplStack_240 = (longlong **)CONCAT44(uStack_2e4,local_2e8);
        uStack_2d4 = local_60;
        local_238 = piStack_2e0;
        local_2d8 = -1 << ((byte)local_60 & 0x1f);
        uStack_278 = (longlong ***)CONCAT44(uStack_2e4,local_2e8);
        piStack_270 = piStack_2e0;
        local_248 = (longlong **)local_280;
        plStack_230 = (longlong *)uStack_268;
        local_228 = (longlong *)uStack_260;
        while( true ) {
          if (((uStack_268._4_4_ == uVar17) && (piStack_270 == local_78)) && (local_280 == local_88)
             ) break;
          plVar1 = (longlong *)(*local_280 + (longlong)(int)uStack_268._4_4_ * 0x18);
          local_320 = local_2f0;
          TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
          AddUniqueImpl<UGeometryCacheComponent_*_const_&>(*plVar1 + 0x78,&local_320);
          FUN_1421ae9a0(local_2f0,*plVar1,(int)plVar1[1],0);
          uStack_268 = CONCAT44(uStack_268._4_4_,(uint)uStack_268 & ~uStack_278._4_4_);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_278);
        }
        plVar18 = plVar18 + 1;
        local_320 = plVar18;
      } while (plVar18 != plVar7);
    }
    uStack_2a8 = CONCAT44(uStack_2a8._4_4_,(uint)uStack_2a8 & ~uStack_2b8._4_4_);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_2b8);
  }
  if (local_318 != 0) {
    FMemory::Free();
  }
  if (local_258[0] != 0) {
    FMemory::Free();
  }
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_88);
  local_e0 = 0;
  if (local_e8 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_128);
  local_90 = 0;
  if (local_98 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_d8);
  local_130 = 0;
  if (local_138 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_178);
  FUN_1404bed90(local_288);
  return;
}



// FUNCTION 1421ca830 FUN_1421ca830 body=948 status=ok
// SIG undefined FUN_1421ca830(void)

/* WARNING: Removing unreachable block (ram,0x0001421caa53) */

undefined8 FUN_1421ca830(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  void *_Src;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *local_d8;
  int local_d0;
  undefined4 local_cc;
  longlong local_c8;
  undefined8 local_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  longlong local_a8;
  int local_a0;
  undefined4 local_9c;
  longlong local_98 [2];
  undefined1 local_88 [48];
  longlong *local_58;
  longlong local_50;
  
  plVar10 = (longlong *)0x0;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x48) == 0) {
      lVar2 = param_1 + 0x40;
    }
    iVar7 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                             (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
    if (iVar7 != -1) {
      do {
        plVar4 = (longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar7 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar7 * 0x18) == param_2) {
          if (iVar7 != -1) goto LAB_1421ca8b3;
          break;
        }
        iVar7 = (int)plVar4[2];
      } while (iVar7 != -1);
    }
  }
  plVar4 = plVar10;
LAB_1421ca8b3:
  plVar3 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar3 = plVar10;
  }
  if (plVar3 == (longlong *)0x0) {
    return 0;
  }
  lVar2 = *plVar3;
  plVar4 = (longlong *)FUN_1421b8080(lVar2 + 0x28);
  local_d8 = (longlong *)0x0;
  iVar7 = (int)plVar4[1];
  lVar9 = *plVar4;
  local_d0 = iVar7;
  if (iVar7 == 0) {
    local_cc = 0;
  }
  else {
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_d8,iVar7,0);
    plVar10 = local_d8;
    lVar8 = lVar9 + 8;
    do {
      *(undefined8 *)((longlong)plVar10 + lVar8 + (-8 - lVar9)) = *(undefined8 *)(lVar8 + -8);
      FString::FString((longlong)plVar10 + (lVar8 - lVar9),lVar8);
      lVar8 = lVar8 + 0x18;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  iVar7 = local_d0;
  uVar13 = 0;
  FName::ToString(param_3,&local_c8);
  lVar9 = CONCAT44(DAT_1469e7758._4_4_,(int)DAT_1469e7758);
  uVar11 = (longlong)iVar7;
  if (iVar7 != 0) {
    do {
      uVar12 = uVar11 >> 1;
      lVar8 = uVar12 + uVar13;
      iVar6 = (int)plVar10[lVar8 * 3] - (int)DAT_1469e7758;
      if (iVar6 == 0) {
        iVar6 = *(int *)((longlong)plVar10 + lVar8 * 0x18 + 4) - DAT_1469e7758._4_4_;
      }
      if (iVar6 < 0) {
        uVar13 = (ulonglong)((uint)uVar11 & 1) + lVar8;
      }
      uVar11 = uVar12;
    } while (uVar12 != 0);
  }
  iVar6 = (int)uVar13;
  if ((iVar6 < 0) || (iVar7 <= iVar6)) {
LAB_1421ca9fe:
    TArray<FTabManager::FTab,FDefaultAllocator>::InsertUninitialized
              (&local_d8,uVar13 & 0xffffffff,1);
    plVar10 = local_d8 + (longlong)iVar6 * 3;
  }
  else {
    plVar10 = plVar10 + (longlong)iVar6 * 3;
    iVar7 = (int)DAT_1469e7758 - (int)*plVar10;
    if (iVar7 == 0) {
      iVar7 = DAT_1469e7758._4_4_ - *(int *)((longlong)plVar10 + 4);
    }
    if (iVar7 < 0) goto LAB_1421ca9fe;
    if (plVar10[1] == 0) goto LAB_1421caa23;
    FMemory::Free();
  }
  lVar9 = CONCAT44(DAT_1469e7758._4_4_,(int)DAT_1469e7758);
LAB_1421caa23:
  *plVar10 = lVar9;
  plVar10[1] = 0;
  plVar10[1] = local_c8;
  *(int *)(plVar10 + 2) = (int)local_c0;
  *(int *)((longlong)plVar10 + 0x14) = local_c0._4_4_;
  local_c0 = 0;
  local_c8 = 0;
  uVar5 = FName::ToString(param_3 + 8,local_98);
  TSortedMap<FName,FString,FDefaultAllocator,FNameSortIndexes>::Emplace<FName_const_&,FString>
            (&local_d8,&DAT_1469e78c8,uVar5);
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  local_b0 = *(int *)(lVar2 + 0x40);
  lVar9 = (longlong)local_b0;
  _Src = *(void **)(lVar2 + 0x38);
  local_b8 = (void *)0x0;
  if (local_b0 == 0) {
    local_ac = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_b8,local_b0,0);
    _guard_xfg_dispatch_icall_nop(local_b8,_Src,lVar9 << 2);
  }
  iVar7 = local_d0;
  local_a8 = 0;
  local_a0 = local_d0;
  if (local_d0 == 0) {
    local_9c = 0;
  }
  else {
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_a8,local_d0,0);
    lVar9 = local_a8 - (longlong)local_d8;
    plVar10 = local_d8 + 1;
    do {
      *(longlong *)(lVar9 + -8 + (longlong)plVar10) = plVar10[-1];
      FString::FString((longlong)plVar10 + lVar9,plVar10);
      plVar10 = plVar10 + 3;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_1421a8180(local_88,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10),
                *(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 0x20),&local_a8,&local_b8,
                *(undefined4 *)(lVar2 + 0x48));
  UAssetRegistryImpl::UpdateAssetData(param_1 + -0x28,lVar2,local_88);
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_58 + 1;
    lVar2 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
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
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (&local_d8);
  return 1;
}



// FUNCTION 1421cabf0 SortPathsByPriority body=312 status=ok
// SIG undefined SortPathsByPriority(void)

void FAssetDataDiscovery::SortPathsByPriority(longlong param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  BOOL BVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int local_res10;
  ulonglong uVar10;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  BVar7 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar7 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if ((*(int *)(param_1 + 0x38) != 0) && (0 < *(int *)(param_1 + 0x38) + -1)) {
    iVar3 = *(int *)(param_1 + 0x50);
    uVar8 = 0;
    local_res10 = iVar3;
    if ((param_2 != -1) && (local_res10 = param_2, iVar3 <= param_2)) {
      local_res10 = iVar3;
    }
    uVar10 = uVar8;
    uVar11 = uVar8;
    uVar12 = uVar8;
    uVar13 = uVar8;
    uVar14 = uVar8;
    if (0 < iVar3) {
      do {
        cVar6 = FString::StartsWith((longlong)(int)uVar8 * 0x10 + *(longlong *)(param_1 + 0x48),
                                    param_1 + 0x30,1);
        if (cVar6 != '\0') {
          if (uVar14 != uVar13) {
            lVar4 = *(longlong *)(param_1 + 0x48);
            uVar5 = *(undefined8 *)(uVar11 + lVar4);
            puVar1 = (undefined8 *)(uVar11 + lVar4);
            puVar2 = (undefined8 *)(lVar4 + uVar12);
            *puVar1 = *(undefined8 *)(lVar4 + uVar12);
            *puVar2 = uVar5;
            uVar5 = puVar1[1];
            puVar1[1] = puVar2[1];
            puVar2[1] = uVar5;
          }
          uVar13 = uVar13 + 1;
          uVar12 = uVar12 + 0x10;
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
          if (local_res10 <= (int)uVar9) break;
        }
        uVar9 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar9;
        uVar11 = uVar11 + 0x10;
        uVar14 = uVar14 + 1;
      } while ((int)uVar9 < *(int *)(param_1 + 0x50));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001421cad21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1421cad40 Stop body=37 status=ok
// SIG undefined Stop(void)

void FAssetDataGatherer::Stop(longlong param_1)

{
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x10))();
  }
  LOCK();
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  UNLOCK();
  return;
}



// FUNCTION 1421cadb0 FUN_1421cadb0 body=1041 status=ok
// SIG undefined FUN_1421cadb0(void)

void FUN_1421cadb0(longlong param_1,float param_2)

{
  int *piVar1;
  int *piVar2;
  double dVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  undefined4 uVar13;
  LARGE_INTEGER local_res8;
  char local_res10;
  int local_res18 [2];
  int local_res20 [2];
  LARGE_INTEGER local_98;
  int local_90;
  char local_8c;
  longlong local_88 [9];
  
  QueryPerformanceCounter(&local_res8);
  uVar13 = SUB84((double)CONCAT71(local_res8.QuadPart._1_7_,local_res8.s.LowPart._0_1_) *
                 DAT_1468b02f8 + 16777216.0,0);
  if (param_2 < 0.0) {
    uVar13 = 0;
  }
  local_res10 = '\0';
  local_88[0] = 0;
  local_88[1] = 0;
  local_res18[0] = 0;
  local_res20[0] = 0;
  local_res8.s.LowPart._0_1_ = '\0';
  if (*(longlong *)(param_1 + 0x420) != 0) {
    local_res10 = FAssetDataGatherer::GetAndTrimSearchResults
                            (*(longlong *)(param_1 + 0x420),param_1 + 0x430,param_1 + 0x448,
                             param_1 + 0x460,param_1 + 0x478,local_88,local_res18,local_res20,
                             &local_res8);
  }
  if (*(int *)(param_1 + 0x458) != *(int *)(param_1 + 0x448)) {
    UAssetRegistryImpl::PathDataGathered(param_1 + -0x28,uVar13,(int *)(param_1 + 0x448));
  }
  piVar1 = (int *)(param_1 + 0x430);
  if ((*(int *)(param_1 + 0x440) - *piVar1 < 1) &&
     (*(int *)(param_1 + 0x470) - *(int *)(param_1 + 0x460) < 1)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (*(int *)(param_1 + 0x440) != *piVar1) {
    if (*(double *)(param_1 + 0x5c8) == 0.0) {
      QueryPerformanceCounter(&local_98);
      *(double *)(param_1 + 0x5c8) =
           (double)CONCAT44(local_98.s.HighPart,local_98.s.LowPart) * DAT_1468b02f8 + 16777216.0;
    }
    FUN_1421af3b0(param_1 + -0x28,uVar13,piVar1);
    if (*(int *)(param_1 + 0x440) == *piVar1) {
      QueryPerformanceCounter(&local_98);
      dVar12 = (double)CONCAT44(local_98.s.HighPart,local_98.s.LowPart) * DAT_1468b02f8;
      dVar3 = *(double *)(param_1 + 0x5c8);
      *(undefined8 *)(param_1 + 0x5c8) = 0;
      *(double *)(param_1 + 0x5d0) = ((dVar12 + 16777216.0) - dVar3) + *(double *)(param_1 + 0x5d0);
    }
  }
  piVar2 = (int *)(param_1 + 0x460);
  if (*(int *)(param_1 + 0x470) != *piVar2) {
    FUN_1421b03b0(param_1 + -0x28,uVar13,piVar2);
  }
  if (*(int *)(param_1 + 0x488) != *(int *)(param_1 + 0x478)) {
    UAssetRegistryImpl::CookedPackageNamesWithoutAssetDataGathered
              (param_1 + -0x28,uVar13,param_1 + 0x478);
  }
  if ((local_res10 != '\0') || (bVar6)) {
    iVar9 = *piVar2;
    iVar8 = *(int *)(param_1 + 0x470);
    local_98.s.LowPart =
         (((*(int *)(param_1 + 0x440) - iVar9) - *(int *)(param_1 + 0x3c)) - *piVar1) + iVar8 +
         *(int *)(param_1 + 0x10) + local_res18[0];
    local_90 = (iVar8 - iVar9) + local_res18[0];
    local_98.s.HighPart = ((iVar9 - iVar8) - *(int *)(param_1 + 0x3c)) + *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x56c) = *(int *)(param_1 + 0x56c) + 1;
    iVar9 = *(int *)(param_1 + 0x56c);
    local_8c = local_res8.s.LowPart._0_1_;
    iVar8 = *(int *)(param_1 + 0x560) + -1;
    lVar10 = (longlong)iVar8;
    local_res8.s.LowPart._0_1_ = '\0';
    if (-1 < iVar8) {
      lVar11 = lVar10 << 4;
      do {
        lVar4 = *(longlong *)(param_1 + 0x558);
        if (((*(int *)(lVar11 + 8 + lVar4) == 0) ||
            (plVar5 = *(longlong **)(lVar11 + lVar4), plVar5 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar5 + 0x40))(plVar5,&local_98), cVar7 == '\0')) {
          local_res8.s.LowPart._0_1_ = '\x01';
        }
        lVar11 = lVar11 + -0x10;
        lVar10 = lVar10 + -1;
      } while (-1 < lVar10);
      iVar9 = *(int *)(param_1 + 0x56c);
    }
    *(int *)(param_1 + 0x56c) = iVar9 + -1;
    if (local_res8.s.LowPart._0_1_ != '\0') {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x558),0)
      ;
    }
  }
  if (((((local_res18[0] == 0) && (local_res20[0] == 0)) &&
       ((local_res10 == '\0' &&
        ((*(int *)(param_1 + 0x458) == *(int *)(param_1 + 0x448) &&
         (*(int *)(param_1 + 0x440) == *piVar1)))))) && (*(int *)(param_1 + 0x470) == *piVar2)) &&
     ((*(int *)(param_1 + 0x488) == *(int *)(param_1 + 0x478) &&
      (*(char *)(param_1 + 0x5d9) == '\0')))) {
    *(undefined1 *)(param_1 + 0x5d9) = 1;
    *(int *)(param_1 + 0x554) = *(int *)(param_1 + 0x554) + 1;
    bVar6 = false;
    iVar9 = *(int *)(param_1 + 0x554);
    iVar8 = *(int *)(param_1 + 0x548) + -1;
    lVar10 = (longlong)iVar8;
    if (-1 < iVar8) {
      lVar11 = lVar10 << 4;
      bVar6 = false;
      do {
        lVar4 = *(longlong *)(param_1 + 0x540);
        if (((*(int *)(lVar11 + 8 + lVar4) == 0) ||
            (plVar5 = *(longlong **)(lVar11 + lVar4), plVar5 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar5 + 0x40))(), cVar7 == '\0')) {
          bVar6 = true;
        }
        lVar11 = lVar11 + -0x10;
        lVar10 = lVar10 + -1;
      } while (-1 < lVar10);
      iVar9 = *(int *)(param_1 + 0x554);
    }
    *(int *)(param_1 + 0x554) = iVar9 + -1;
    if (bVar6) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x540),0)
      ;
    }
  }
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421cb1d0 ToSoftObjectPath body=115 status=ok
// SIG undefined ToSoftObjectPath(void)

undefined8 * UAssetRegistryHelpers::ToSoftObjectPath(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [16];
  
  plVar1 = (longlong *)FName::ToString(param_2,local_18);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_28 = *plVar1;
  *plVar1 = 0;
  local_20 = (undefined4)plVar1[1];
  local_1c = *(undefined4 *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  FUN_1417978e0(param_1,&local_28);
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1421cb290 FUN_1421cb290 body=2649 status=ok
// SIG undefined FUN_1421cb290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1421cb290(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  uint uVar21;
  bool bVar22;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  longlong *plStack_d0;
  int local_c8;
  int local_c4;
  int local_c0 [2];
  longlong *local_b8;
  undefined8 *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  undefined8 **local_60;
  undefined8 *local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_f8 = param_2;
  local_58 = param_3;
  lVar6 = FUN_1421b8080(param_2 + 5);
  puVar20 = param_3 + 5;
  iVar15 = *(int *)(lVar6 + 8);
  local_b0 = puVar20;
  lVar6 = FUN_1421b8080(puVar20);
  bVar22 = iVar15 != *(int *)(lVar6 + 8);
  plVar18 = (longlong *)0x0;
  if (iVar15 == *(int *)(lVar6 + 8)) {
    plVar7 = (longlong *)FUN_1421b8080(local_f8 + 5);
    iStack_e0 = 0;
    local_e8._0_4_ = SUB84(plVar7,0);
    local_e8._4_4_ = (undefined4)((ulonglong)plVar7 >> 0x20);
    local_88 = (undefined4)local_e8;
    uStack_84 = local_e8._4_4_;
    iStack_80 = 0;
    uStack_7c = uStack_dc;
    local_e8 = plVar7;
    while( true ) {
      iVar15 = iStack_80;
      param_3 = local_58;
      if ((iStack_80 < 0) || ((int)plVar7[1] <= iStack_80)) goto LAB_1421cb3e9;
      uVar3 = *(undefined8 *)(*plVar7 + (longlong)iStack_80 * 0x18);
      local_f0 = (longlong *)uVar3;
      plVar8 = (longlong *)FUN_1421b8080(puVar20);
      lVar6 = *plVar8;
      iVar13 = (int)uVar3;
      uVar9 = (longlong)(int)plVar8[1];
      plVar19 = plVar18;
      while (uVar9 != 0) {
        uVar17 = uVar9 >> 1;
        uVar21 = (uint)uVar9;
        lVar10 = uVar17 + (longlong)plVar19;
        iVar4 = *(int *)(lVar6 + lVar10 * 0x18) - iVar13;
        if (iVar4 == 0) {
          iVar4 = *(int *)(lVar6 + lVar10 * 0x18 + 4) - local_f0._4_4_;
        }
        uVar9 = uVar17;
        if (iVar4 < 0) {
          plVar19 = (longlong *)((ulonglong)(uVar21 & 1) + lVar10);
        }
      }
      uVar9 = (ulonglong)(int)plVar19;
      if ((ulonglong)(longlong)(int)plVar8[1] <= uVar9) break;
      iVar13 = iVar13 - *(int *)(lVar6 + uVar9 * 0x18);
      if (iVar13 == 0) {
        iVar13 = local_f0._4_4_ - *(int *)(lVar6 + 4 + uVar9 * 0x18);
      }
      if (((iVar13 < 0) || ((int)plVar19 == -1)) || (lVar6 + (uVar9 * 3 + 1) * 8 == 0)) break;
      iStack_80 = iVar15 + 1;
      puVar20 = local_b0;
    }
    bVar22 = true;
    param_3 = local_58;
  }
LAB_1421cb3e9:
  local_f0 = param_3 + 1;
  lVar6 = *local_f0;
  if ((local_f8[1] != lVar6) || (local_f8[3] != param_3[3])) {
    TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
    Remove(param_1,*local_f8);
    local_60 = &local_f8;
    local_68 = param_3;
    FUN_1404a88c0(param_1,&local_b0,&local_68,0);
    lVar6 = param_3[1];
  }
  lVar10 = local_f8[1];
  if (lVar10 != lVar6) {
    if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
      lVar6 = *(longlong *)(param_1 + 0x90);
      if (*(longlong *)(param_1 + 0x90) == 0) {
        lVar6 = param_1 + 0x88;
      }
      iVar15 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar10 >> 0x20) + (int)lVar10) &
                                (longlong)*(int *)(param_1 + 0x98) - 1U) * 4);
      if (iVar15 != -1) {
        do {
          plVar7 = (longlong *)((longlong)iVar15 * 0x20 + *(longlong *)(param_1 + 0x50));
          if (*plVar7 == lVar10) {
            if (iVar15 != -1) goto LAB_1421cb4c2;
            break;
          }
          iVar15 = (int)plVar7[3];
        } while (iVar15 != -1);
      }
    }
    plVar7 = plVar18;
LAB_1421cb4c2:
    lVar6 = *local_f0;
    plVar19 = plVar7 + 1;
    if (plVar7 == (longlong *)0x0) {
      plVar19 = plVar18;
    }
    if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
      lVar10 = *(longlong *)(param_1 + 0x90);
      if (*(longlong *)(param_1 + 0x90) == 0) {
        lVar10 = param_1 + 0x88;
      }
      iVar15 = *(int *)(lVar10 + ((longlong)((int)((ulonglong)lVar6 >> 0x20) + (int)lVar6) &
                                 (longlong)*(int *)(param_1 + 0x98) - 1U) * 4);
      if (iVar15 != -1) {
        do {
          plVar7 = (longlong *)((longlong)iVar15 * 0x20 + *(longlong *)(param_1 + 0x50));
          if (*plVar7 == lVar6) {
            if ((iVar15 != -1) && (plVar7 != (longlong *)0x0)) goto LAB_1421cb568;
            break;
          }
          iVar15 = (int)plVar7[3];
        } while (iVar15 != -1);
      }
    }
    local_a8 = local_f0;
    FUN_1410ad4b0(param_1 + 0x50,&local_c8,&local_a8,0);
    plVar7 = (longlong *)((longlong)local_c8 * 0x20 + *(longlong *)(param_1 + 0x50));
LAB_1421cb568:
    TArray<FName,FDefaultAllocator>::Remove(plVar19,&local_f8);
    iVar15 = (int)plVar7[2];
    *(int *)(plVar7 + 2) = iVar15 + 1;
    if (*(int *)((longlong)plVar7 + 0x14) < iVar15 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7 + 1,iVar15);
    }
    *(undefined8 **)(plVar7[1] + (longlong)iVar15 * 8) = local_f8;
  }
  lVar6 = local_f8[2];
  plVar7 = param_3 + 2;
  if (lVar6 != *plVar7) {
    plVar19 = (longlong *)(param_1 + 0xa0);
    if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
      lVar10 = *(longlong *)(param_1 + 0xe0);
      if (*(longlong *)(param_1 + 0xe0) == 0) {
        lVar10 = param_1 + 0xd8;
      }
      iVar15 = *(int *)(lVar10 + ((longlong)((int)((ulonglong)lVar6 >> 0x20) + (int)lVar6) &
                                 (longlong)*(int *)(param_1 + 0xe8) - 1U) * 4);
      if (iVar15 != -1) {
        do {
          plVar8 = (longlong *)((longlong)iVar15 * 0x20 + *plVar19);
          if (*plVar8 == lVar6) {
            if (iVar15 != -1) goto LAB_1421cb622;
            break;
          }
          iVar15 = (int)plVar8[3];
        } while (iVar15 != -1);
      }
    }
    plVar8 = plVar18;
LAB_1421cb622:
    lVar6 = *plVar7;
    plVar16 = plVar8 + 1;
    if (plVar8 == (longlong *)0x0) {
      plVar16 = plVar18;
    }
    if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
      lVar10 = *(longlong *)(param_1 + 0xe0);
      if (*(longlong *)(param_1 + 0xe0) == 0) {
        lVar10 = param_1 + 0xd8;
      }
      iVar15 = *(int *)(lVar10 + ((longlong)((int)((ulonglong)lVar6 >> 0x20) + (int)lVar6) &
                                 (longlong)*(int *)(param_1 + 0xe8) - 1U) * 4);
      if (iVar15 != -1) {
        do {
          plVar18 = (longlong *)((longlong)iVar15 * 0x20 + *plVar19);
          if (*plVar18 == lVar6) {
            if ((iVar15 != -1) && (plVar18 != (longlong *)0x0)) goto LAB_1421cb6b6;
            break;
          }
          iVar15 = (int)plVar18[3];
        } while (iVar15 != -1);
      }
    }
    local_a0 = plVar7;
    FUN_1410ad4b0(plVar19,&local_c4,&local_a0,0);
    plVar18 = (longlong *)((longlong)local_c4 * 0x20 + *plVar19);
LAB_1421cb6b6:
    TArray<FName,FDefaultAllocator>::Remove(plVar16,&local_f8);
    iVar15 = (int)plVar18[2];
    *(int *)(plVar18 + 2) = iVar15 + 1;
    if (*(int *)((longlong)plVar18 + 0x14) < iVar15 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar18 + 1,iVar15);
    }
    *(undefined8 **)(plVar18[1] + (longlong)iVar15 * 8) = local_f8;
  }
  lVar6 = local_f8[4];
  plVar18 = param_3 + 4;
  local_b8 = plVar18;
  if (lVar6 != *plVar18) {
    plVar7 = (longlong *)(param_1 + 0xf0);
    if (*(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x124)) {
      lVar10 = *(longlong *)(param_1 + 0x130);
      if (*(longlong *)(param_1 + 0x130) == 0) {
        lVar10 = param_1 + 0x128;
      }
      iVar15 = *(int *)(lVar10 + ((longlong)((int)((ulonglong)lVar6 >> 0x20) + (int)lVar6) &
                                 (longlong)*(int *)(param_1 + 0x138) - 1U) * 4);
      if (iVar15 != -1) {
        do {
          plVar19 = (longlong *)((longlong)iVar15 * 0x20 + *plVar7);
          if (*plVar19 == lVar6) {
            if (iVar15 != -1) goto LAB_1421cb778;
            break;
          }
          iVar15 = (int)plVar19[3];
        } while (iVar15 != -1);
      }
    }
    plVar19 = (longlong *)0x0;
LAB_1421cb778:
    lVar6 = *plVar18;
    plVar8 = plVar19 + 1;
    if (plVar19 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    if (*(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x124)) {
      lVar10 = *(longlong *)(param_1 + 0x130);
      if (*(longlong *)(param_1 + 0x130) == 0) {
        lVar10 = param_1 + 0x128;
      }
      iVar15 = *(int *)(lVar10 + ((longlong)((int)((ulonglong)lVar6 >> 0x20) + (int)lVar6) &
                                 (longlong)*(int *)(param_1 + 0x138) - 1U) * 4);
      if (iVar15 != -1) {
        do {
          plVar19 = (longlong *)((longlong)iVar15 * 0x20 + *plVar7);
          if (*plVar19 == lVar6) {
            if ((iVar15 != -1) && (plVar19 != (longlong *)0x0)) goto LAB_1421cb816;
            break;
          }
          iVar15 = (int)plVar19[3];
        } while (iVar15 != -1);
      }
    }
    local_98 = plVar18;
    FUN_1410ad4b0(plVar7,local_c0,&local_98,0);
    plVar19 = (longlong *)((longlong)local_c0[0] * 0x20 + *plVar7);
LAB_1421cb816:
    TArray<FName,FDefaultAllocator>::Remove(plVar8,&local_f8);
    iVar15 = (int)plVar19[2];
    *(int *)(plVar19 + 2) = iVar15 + 1;
    if (*(int *)((longlong)plVar19 + 0x14) < iVar15 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar19 + 1,iVar15);
    }
    *(undefined8 **)(plVar19[1] + (longlong)iVar15 * 8) = local_f8;
  }
  iVar15 = iStack_e0;
  if (bVar22) {
    plVar18 = (longlong *)FUN_1421b8080(local_f8 + 5);
    puVar20 = (undefined8 *)0x0;
    iStack_e0 = 0;
    local_e8._0_4_ = SUB84(plVar18,0);
    local_e8._4_4_ = (undefined4)((ulonglong)plVar18 >> 0x20);
    local_78 = (undefined4)local_e8;
    uStack_74 = local_e8._4_4_;
    iStack_70 = 0;
    uStack_6c = uStack_dc;
    iVar15 = 0;
    local_e8 = plVar18;
    while ((-1 < iVar15 && (iVar15 < (int)plVar18[1]))) {
      plVar7 = *(longlong **)(*plVar18 + (longlong)iVar15 * 0x18);
      local_f0 = plVar7;
      plVar19 = (longlong *)FUN_1421b8080(param_3 + 5);
      lVar6 = *plVar19;
      iVar13 = (int)plVar7;
      uVar9 = (longlong)(int)plVar19[1];
      puVar12 = puVar20;
      while (uVar9 != 0) {
        uVar17 = uVar9 >> 1;
        uVar21 = (uint)uVar9;
        lVar10 = uVar17 + (longlong)puVar12;
        iVar4 = *(int *)(lVar6 + lVar10 * 0x18) - iVar13;
        if (iVar4 == 0) {
          iVar4 = *(int *)(lVar6 + lVar10 * 0x18 + 4) - local_f0._4_4_;
        }
        uVar9 = uVar17;
        if (iVar4 < 0) {
          puVar12 = (undefined8 *)((ulonglong)(uVar21 & 1) + lVar10);
        }
      }
      uVar9 = (ulonglong)(int)puVar12;
      if (uVar9 < (ulonglong)(longlong)(int)plVar19[1]) {
        iVar4 = iVar13 - *(int *)(lVar6 + uVar9 * 0x18);
        if (iVar4 == 0) {
          iVar4 = local_f0._4_4_ - *(int *)(lVar6 + 4 + uVar9 * 0x18);
        }
        if (((iVar4 < 0) || ((int)puVar12 == -1)) || (lVar6 + (uVar9 * 3 + 1) * 8 == 0))
        goto LAB_1421cb93a;
LAB_1421cba3b:
        iVar15 = iVar15 + 1;
      }
      else {
LAB_1421cb93a:
        if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x174)) {
          lVar6 = *(longlong *)(param_1 + 0x180);
          if (*(longlong *)(param_1 + 0x180) == 0) {
            lVar6 = param_1 + 0x178;
          }
          iVar13 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)plVar7 >> 0x20) + iVar13) &
                                    (longlong)*(int *)(param_1 + 0x188) - 1U) * 4);
          if (iVar13 != -1) {
            do {
              puVar12 = (undefined8 *)((longlong)iVar13 * 0x20 + *(longlong *)(param_1 + 0x140));
              if ((longlong *)*puVar12 == plVar7) {
                if (iVar13 != -1) goto LAB_1421cb9b1;
                break;
              }
              iVar13 = *(int *)(puVar12 + 3);
            } while (iVar13 != -1);
          }
        }
        puVar12 = puVar20;
LAB_1421cb9b1:
        puVar14 = puVar12 + 1;
        if (puVar12 == (undefined8 *)0x0) {
          puVar14 = puVar20;
        }
        puVar12 = (undefined8 *)*puVar14;
        iVar13 = *(int *)(puVar14 + 1);
        puVar11 = puVar12;
        if (puVar12 == puVar12 + iVar13) goto LAB_1421cba3b;
        do {
          if ((undefined8 *)*puVar11 == local_f8) {
            iVar4 = (int)((longlong)puVar11 - (longlong)puVar12 >> 3);
            if (iVar4 != -1) {
              iVar5 = (iVar13 - iVar4) + -1;
              if (0 < iVar5) {
                iVar5 = 1;
              }
              if (iVar5 != 0) {
                _guard_xfg_dispatch_icall_nop
                          (puVar12 + iVar4,puVar12 + (iVar13 - iVar5),(longlong)iVar5 << 3);
                iVar13 = *(int *)(puVar14 + 1);
              }
              *(int *)(puVar14 + 1) = iVar13 + -1;
              TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(puVar14);
            }
            goto LAB_1421cba3b;
          }
          puVar11 = puVar11 + 1;
        } while (puVar11 != puVar12 + iVar13);
        iVar15 = iVar15 + 1;
      }
    }
    iStack_70 = iVar15;
    plVar7 = (longlong *)FUN_1421b8080(param_3 + 5);
    plVar18 = local_b8;
    iStack_e0 = 0;
    local_e8 = plVar7;
    for (iVar15 = 0; (param_3 = local_58, -1 < iVar15 && (iVar15 < (int)plVar7[1]));
        iVar15 = iVar15 + 1) {
      plVar19 = *(longlong **)(*plVar7 + (longlong)iVar15 * 0x18);
      local_f0 = plVar19;
      local_d8 = plVar19;
      plVar8 = (longlong *)FUN_1421b8080(local_f8 + 5);
      lVar6 = *plVar8;
      uVar9 = (longlong)(int)plVar8[1];
      lVar10 = 0;
      while (uVar9 != 0) {
        uVar17 = uVar9 >> 1;
        uVar21 = (uint)uVar9;
        lVar2 = uVar17 + lVar10;
        iVar13 = *(int *)(lVar6 + lVar2 * 0x18) - (int)plVar19;
        if (iVar13 == 0) {
          iVar13 = *(int *)(lVar6 + lVar2 * 0x18 + 4) - local_d8._4_4_;
        }
        uVar9 = uVar17;
        if (iVar13 < 0) {
          lVar10 = (ulonglong)(uVar21 & 1) + lVar2;
        }
      }
      uVar9 = (ulonglong)(int)lVar10;
      if (uVar9 < (ulonglong)(longlong)(int)plVar8[1]) {
        iVar13 = (int)plVar19 - *(int *)(lVar6 + uVar9 * 0x18);
        if (iVar13 == 0) {
          iVar13 = local_d8._4_4_ - *(int *)(lVar6 + 4 + uVar9 * 0x18);
        }
        if (((iVar13 < 0) || ((int)lVar10 == -1)) || (lVar6 + (uVar9 * 3 + 1) * 8 == 0))
        goto LAB_1421cbb2b;
      }
      else {
LAB_1421cbb2b:
        plVar19 = (longlong *)(param_1 + 0x140);
        if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x174)) {
          lVar6 = *(longlong *)(param_1 + 0x180);
          if (*(longlong *)(param_1 + 0x180) == 0) {
            lVar6 = param_1 + 0x178;
          }
          iVar13 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)local_f0 >> 0x20) + (int)local_f0)
                                    & (longlong)*(int *)(param_1 + 0x188) - 1U) * 4);
          if (iVar13 != -1) {
            do {
              puVar20 = (undefined8 *)((longlong)iVar13 * 0x20 + *plVar19);
              if ((longlong *)*puVar20 == local_f0) {
                if ((iVar13 != -1) && (puVar20 != (undefined8 *)0x0)) goto LAB_1421cbbcb;
                break;
              }
              iVar13 = *(int *)(puVar20 + 3);
            } while (iVar13 != -1);
          }
        }
        local_90 = &local_f0;
        FUN_1410ad4b0(plVar19,&local_b8,&local_90,0);
        puVar20 = (undefined8 *)((longlong)(int)local_b8 * 0x20 + *plVar19);
LAB_1421cbbcb:
        iVar13 = *(int *)(puVar20 + 2);
        *(int *)(puVar20 + 2) = iVar13 + 1;
        if (*(int *)((longlong)puVar20 + 0x14) < iVar13 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar20 + 1,iVar13);
        }
        *(undefined8 **)(puVar20[1] + (longlong)iVar13 * 8) = local_f8;
      }
    }
  }
  iStack_e0 = iVar15;
  puVar14 = local_f8;
  puVar20 = local_f8 + 5;
  *local_f8 = *param_3;
  local_f8[1] = param_3[1];
  local_f8[2] = param_3[2];
  local_f8[3] = param_3[3];
  local_f8[4] = *plVar18;
  plVar18 = (longlong *)param_3[6];
  puVar12 = (undefined8 *)param_3[5];
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
  }
  local_d8 = puVar12;
  plStack_d0 = plVar18;
  if (&local_d8 != puVar20) {
    local_d8 = (longlong *)*puVar20;
    plStack_d0 = (longlong *)local_f8[6];
    *puVar20 = puVar12;
    local_f8[6] = plVar18;
    local_58 = puVar12;
    plStack_50 = plVar18;
  }
  plVar18 = plStack_d0;
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_d0 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_d0)(plStack_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
      }
    }
  }
  TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(puVar14 + 7,param_3 + 7);
  *(undefined4 *)(puVar14 + 9) = *(undefined4 *)(param_3 + 9);
  puVar14[10] = param_3[10];
  return;
}



// FUNCTION 1421cbcf0 UpdateAssetData body=929 status=ok
// SIG undefined UpdateAssetData(void)

void UAssetRegistryImpl::UpdateAssetData(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  short *psVar2;
  undefined2 *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined1 local_a8 [8];
  short *local_a0;
  undefined8 local_98;
  longlong local_90;
  ulonglong local_88;
  short *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined2 *local_60;
  int local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  
  lVar4 = *(longlong *)(param_2 + 0x20);
  local_res10 = param_2;
  local_res18 = param_3;
  if (*(int *)(param_1 + 0x660) != *(int *)(param_1 + 0x68c)) {
    lVar6 = *(longlong *)(param_1 + 0x698);
    if (*(longlong *)(param_1 + 0x698) == 0) {
      lVar6 = param_1 + 0x690;
    }
    iVar1 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                             (longlong)*(int *)(param_1 + 0x6a0) - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x658) + (longlong)iVar1 * 0x10) == lVar4) {
          if (iVar1 != -1) {
            local_70 = 0;
            local_68 = 0;
            FUN_1421b9bc0(param_2,DAT_1469e68d0,&local_70);
            if (1 < (int)local_68) {
              FPackageName::ExportTextPathToObjectPath(&local_60,&local_70);
              FUN_1417005b0(&local_80,&local_60);
              if (local_60 != (undefined2 *)0x0) {
                FMemory::Free();
              }
              psVar2 = &DAT_143f3eda8;
              if ((int)local_78 != 0) {
                psVar2 = local_80;
              }
              FName::FName(&local_res8,psVar2,1);
              if (local_80 != (short *)0x0) {
                FMemory::Free();
              }
              TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
              ::Remove(param_1 + 0x350,local_res8);
            }
            local_80 = (short *)0x0;
            local_78 = 0;
            FUN_1421b9bc0(param_3,DAT_1469e68d0,&local_80);
            local_a0 = (short *)0x0;
            local_98 = 0;
            FUN_1421b9bc0(param_3,DAT_1469e68d8,&local_a0);
            if ((1 < (int)local_78) && (1 < (int)local_98)) {
              local_88 = 0;
              psVar2 = &DAT_143f3eda8;
              if ((int)local_78 != 0) {
                psVar2 = local_80;
              }
              local_90 = 0;
              lVar4 = -1;
              if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
                lVar6 = -1;
                do {
                  lVar6 = lVar6 + 1;
                } while (psVar2[lVar6] != 0);
                uVar5 = (int)lVar6 + 1;
                local_88 = (ulonglong)uVar5;
                if (0 < (int)uVar5) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,0);
                }
                FGenericPlatformString::Memcpy(local_90,psVar2,(longlong)(int)uVar5 * 2);
              }
              FPackageName::ExportTextPathToObjectPath(&local_50,&local_90);
              FUN_1417005b0(&local_60,&local_50);
              if (local_50 != (undefined1 *)0x0) {
                FMemory::Free();
              }
              puVar3 = &DAT_143f3eda8;
              if (local_58 != 0) {
                puVar3 = local_60;
              }
              FName::FName(local_res20,puVar3,1);
              if (local_60 != (undefined2 *)0x0) {
                FMemory::Free();
              }
              if (local_90 != 0) {
                FMemory::Free();
              }
              local_90 = 0;
              psVar2 = &DAT_143f3eda8;
              if ((int)local_98 != 0) {
                psVar2 = local_a0;
              }
              local_88 = 0;
              if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
                do {
                  lVar4 = lVar4 + 1;
                } while (psVar2[lVar4] != 0);
                uVar5 = (int)lVar4 + 1;
                local_88 = (ulonglong)uVar5;
                if (0 < (int)uVar5) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,0);
                }
                FGenericPlatformString::Memcpy(local_90,psVar2,(longlong)(int)uVar5 * 2);
              }
              FPackageName::ExportTextPathToObjectPath(&local_50,&local_90);
              FUN_1417005b0(&local_60,&local_50);
              if (local_50 != (undefined1 *)0x0) {
                FMemory::Free();
              }
              puVar3 = &DAT_143f3eda8;
              if (local_58 != 0) {
                puVar3 = local_60;
              }
              FName::FName(local_a8,puVar3,1);
              if (local_60 != (undefined2 *)0x0) {
                FMemory::Free();
              }
              if (local_90 != 0) {
                FMemory::Free();
              }
              local_50 = local_res20;
              local_48 = local_a8;
              TSet<TTuple<FName,FFlareTechnologyDescription_*>,TDefaultMapHashableKeyFuncs<FName,FFlareTechnologyDescription_*,0>,FDefaultSetAllocator>
              ::Emplace<TPairInitializer<FName_const_&,FFlareTechnologyDescription_*_const_&>_>
                        (param_1 + 0x350,&local_res8,&local_50,0);
              param_2 = local_res10;
              param_3 = local_res18;
            }
            psVar2 = local_80;
            if (local_a0 != (short *)0x0) {
              FMemory::Free();
            }
            if (psVar2 != (short *)0x0) {
              FMemory::Free(psVar2);
            }
            if (local_70 != 0) {
              FMemory::Free();
            }
          }
          break;
        }
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x658) + 8 + (longlong)iVar1 * 0x10);
      } while (iVar1 != -1);
    }
  }
  FUN_1421cb290(param_1 + 0x30,param_2,param_3);
  return;
}



// FUNCTION 1421cc0a0 FUN_1421cc0a0 body=288 status=ok
// SIG undefined FUN_1421cc0a0(void)

void FUN_1421cc0a0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined2 *local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  local_28 = (undefined2 *)0x0;
  local_20 = 0;
  uVar2 = FName::ToString(param_1 + 8,local_18);
  FUN_14170f420(uVar2,&local_28,&DAT_1464b4428);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  plVar3 = (longlong *)FUN_1415c3d50();
  puVar5 = &DAT_143f3eda8;
  if ((int)local_20 != 0) {
    puVar5 = local_28;
  }
  cVar1 = (**(code **)(*plVar3 + 0x48))(plVar3,puVar5);
  if (cVar1 == '\0') {
    uVar2 = FName::ToString(param_1 + 8,local_18);
    FUN_14170f420(uVar2,&local_28,&DAT_1464b4438);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  plVar3 = (longlong *)FUN_1415c3d50();
  puVar5 = &DAT_143f3eda8;
  if ((int)local_20 != 0) {
    puVar5 = local_28;
  }
  cVar1 = (**(code **)(*plVar3 + 0x48))(plVar3,puVar5);
  if (cVar1 == '\0') {
    puVar4 = (undefined8 *)FDateTime::Now(local_res10);
  }
  else {
    plVar3 = (longlong *)FUN_1415c3d50();
    puVar5 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar5 = local_28;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0xb0))(plVar3,local_res8,puVar5);
  }
  *(undefined8 *)(param_1 + 0x50) = *puVar4;
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421cc1c0 FUN_1421cc1c0 body=29 status=ok
// SIG undefined FUN_1421cc1c0(void)

void FUN_1421cc1c0(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10),local_res8);
  return;
}



// FUNCTION 1421cc200 FUN_1421cc200 body=47 status=ok
// SIG undefined FUN_1421cc200(void)

longlong FUN_1421cc200(void)

{
  if (DAT_146aed518 == 0) {
    FUN_141786440(&DAT_146aed518,&PTR_GetPrivateStaticClass_144fe2640);
  }
  return DAT_146aed518;
}



// FUNCTION 1421cc230 FUN_1421cc230 body=47 status=ok
// SIG undefined FUN_1421cc230(void)

longlong FUN_1421cc230(void)

{
  if (DAT_146aed498 == 0) {
    FUN_141786a30(&DAT_146aed498,&PTR_FUN_1465288d0);
  }
  return DAT_146aed498;
}



// FUNCTION 1421cc260 FUN_1421cc260 body=47 status=ok
// SIG undefined FUN_1421cc260(void)

longlong FUN_1421cc260(void)

{
  if (DAT_146aed4a0 == 0) {
    FUN_141786a30(&DAT_146aed4a0,&PTR_FUN_146528910);
  }
  return DAT_146aed4a0;
}



// FUNCTION 1421cc290 FUN_1421cc290 body=47 status=ok
// SIG undefined FUN_1421cc290(void)

longlong FUN_1421cc290(void)

{
  if (DAT_146aed4a8 == 0) {
    FUN_141786a30(&DAT_146aed4a8,&PTR_FUN_146528a10);
  }
  return DAT_146aed4a8;
}



// FUNCTION 1421cc2c0 FUN_1421cc2c0 body=47 status=ok
// SIG undefined FUN_1421cc2c0(void)

longlong FUN_1421cc2c0(void)

{
  if (DAT_146aed4b0 == 0) {
    FUN_141786a30(&DAT_146aed4b0,&PTR_FUN_146528b50);
  }
  return DAT_146aed4b0;
}



// FUNCTION 1421cc2f0 FUN_1421cc2f0 body=47 status=ok
// SIG undefined FUN_1421cc2f0(void)

longlong FUN_1421cc2f0(void)

{
  if (DAT_146aed4b8 == 0) {
    FUN_141786a30(&DAT_146aed4b8,&PTR_FUN_146528cd0);
  }
  return DAT_146aed4b8;
}



// FUNCTION 1421cc320 FUN_1421cc320 body=47 status=ok
// SIG undefined FUN_1421cc320(void)

longlong FUN_1421cc320(void)

{
  if (DAT_146aed4c0 == 0) {
    FUN_141786a30(&DAT_146aed4c0,&PTR_FUN_146528e50);
  }
  return DAT_146aed4c0;
}



// FUNCTION 1421cc350 FUN_1421cc350 body=47 status=ok
// SIG undefined FUN_1421cc350(void)

longlong FUN_1421cc350(void)

{
  if (DAT_146aed4c8 == 0) {
    FUN_141786a30(&DAT_146aed4c8,&PTR_FUN_146529050);
  }
  return DAT_146aed4c8;
}



// FUNCTION 1421cc380 FUN_1421cc380 body=47 status=ok
// SIG undefined FUN_1421cc380(void)

longlong FUN_1421cc380(void)

{
  if (DAT_146aed4d0 == 0) {
    FUN_141786a30(&DAT_146aed4d0,&PTR_FUN_146529110);
  }
  return DAT_146aed4d0;
}



// FUNCTION 1421cc3b0 FUN_1421cc3b0 body=47 status=ok
// SIG undefined FUN_1421cc3b0(void)

longlong FUN_1421cc3b0(void)

{
  if (DAT_146aed4d8 == 0) {
    FUN_141786a30(&DAT_146aed4d8,&PTR_FUN_146529250);
  }
  return DAT_146aed4d8;
}



// FUNCTION 1421cc3e0 FUN_1421cc3e0 body=47 status=ok
// SIG undefined FUN_1421cc3e0(void)

longlong FUN_1421cc3e0(void)

{
  if (DAT_146aed4e0 == 0) {
    FUN_141786a30(&DAT_146aed4e0,&PTR_FUN_146529310);
  }
  return DAT_146aed4e0;
}



// FUNCTION 1421cc410 FUN_1421cc410 body=47 status=ok
// SIG undefined FUN_1421cc410(void)

longlong FUN_1421cc410(void)

{
  if (DAT_146aed4e8 == 0) {
    FUN_141786a30(&DAT_146aed4e8,&PTR_FUN_146529350);
  }
  return DAT_146aed4e8;
}



// FUNCTION 1421cc440 FUN_1421cc440 body=47 status=ok
// SIG undefined FUN_1421cc440(void)

longlong FUN_1421cc440(void)

{
  if (DAT_146aed4f0 == 0) {
    FUN_141786a30(&DAT_146aed4f0,&PTR_FUN_146529410);
  }
  return DAT_146aed4f0;
}



// FUNCTION 1421cc470 FUN_1421cc470 body=47 status=ok
// SIG undefined FUN_1421cc470(void)

longlong FUN_1421cc470(void)

{
  if (DAT_146aed4f8 == 0) {
    FUN_141786a30(&DAT_146aed4f8,&PTR_FUN_1465294d0);
  }
  return DAT_146aed4f8;
}



// FUNCTION 1421cc4a0 FUN_1421cc4a0 body=47 status=ok
// SIG undefined FUN_1421cc4a0(void)

longlong FUN_1421cc4a0(void)

{
  if (DAT_146aed500 == 0) {
    FUN_141786a30(&DAT_146aed500,&PTR_FUN_146529580);
  }
  return DAT_146aed500;
}



// FUNCTION 1421cc4d0 FUN_1421cc4d0 body=47 status=ok
// SIG undefined FUN_1421cc4d0(void)

longlong FUN_1421cc4d0(void)

{
  if (DAT_146aed508 == 0) {
    FUN_141786a30(&DAT_146aed508,&PTR_FUN_1465296a0);
  }
  return DAT_146aed508;
}



// FUNCTION 1421cc500 FUN_1421cc500 body=47 status=ok
// SIG undefined FUN_1421cc500(void)

longlong FUN_1421cc500(void)

{
  if (DAT_146aed510 == 0) {
    FUN_141786a30(&DAT_146aed510,&PTR_FUN_146529730);
  }
  return DAT_146aed510;
}



// FUNCTION 1421cc540 FUN_1421cc540 body=47 status=ok
// SIG undefined FUN_1421cc540(void)

longlong FUN_1421cc540(void)

{
  if (DAT_146aed408 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146aed408,&PTR_s__Script_AssetRegistry_144fe3418);
  }
  return DAT_146aed408;
}



// FUNCTION 1421cc570 FUN_1421cc570 body=53 status=ok
// SIG undefined FUN_1421cc570(void)

void FUN_1421cc570(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe8;
    *puVar1 = &PTR_FUN_144fe2f88;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1421cc5b0 FUN_1421cc5b0 body=53 status=ok
// SIG undefined FUN_1421cc5b0(void)

void FUN_1421cc5b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_144fe32d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1421cc5f0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAssetRegistry::GetPrivateStaticClass(void)

{
  if (DAT_146aed520 == 0) {
    FUN_14171ccd0(L"/Script/AssetRegistry",L"AssetRegistry",&DAT_146aed520,
                  StaticRegisterNativesUAssetRegistry,0x28,0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146aed520;
}



// FUNCTION 1421cc6a0 FUN_1421cc6a0 body=53 status=ok
// SIG undefined FUN_1421cc6a0(void)

void FUN_1421cc6a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144fe30a0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1421cc6e0 FUN_1421cc6e0 body=53 status=ok
// SIG undefined FUN_1421cc6e0(void)

void FUN_1421cc6e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144fe31b8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1421cc720 FUN_1421cc720 body=151 status=ok
// SIG undefined FUN_1421cc720(void)

longlong FUN_1421cc720(void)

{
  if (DAT_146aed400 == 0) {
    FUN_14171ccd0(L"/Script/AssetRegistry",L"AssetRegistryImpl",&DAT_146aed400,FUN_140447710,0x718,
                  0x10000008,0,L"Engine",&LAB_1421ccb10,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aed400;
}



// FUNCTION 1421cc7d0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAssetRegistryHelpers::GetPrivateStaticClass(void)

{
  if (DAT_146aed490 == 0) {
    FUN_14171ccd0(L"/Script/AssetRegistry",L"AssetRegistryHelpers",&DAT_146aed490,
                  StaticRegisterNativesUAssetRegistryHelpers,0x28,0x10000008,0,L"Engine",
                  FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aed490;
}



// FUNCTION 1421cc870 FUN_1421cc870 body=47 status=ok
// SIG undefined FUN_1421cc870(void)

longlong FUN_1421cc870(void)

{
  if (DAT_146aed488 == 0) {
    FUN_141786440(&DAT_146aed488,&PTR_GetPrivateStaticClass_144fe1be0);
  }
  return DAT_146aed488;
}



// FUNCTION 1421cc8a0 FUN_1421cc8a0 body=47 status=ok
// SIG undefined FUN_1421cc8a0(void)

longlong FUN_1421cc8a0(void)

{
  if (DAT_146aed420 == 0) {
    FUN_141786a30(&DAT_146aed420,&PTR_FUN_146527d60);
  }
  return DAT_146aed420;
}



// FUNCTION 1421cc8d0 FUN_1421cc8d0 body=47 status=ok
// SIG undefined FUN_1421cc8d0(void)

longlong FUN_1421cc8d0(void)

{
  if (DAT_146aed428 == 0) {
    FUN_141786a30(&DAT_146aed428,&PTR_FUN_146527e20);
  }
  return DAT_146aed428;
}



// FUNCTION 1421cc900 FUN_1421cc900 body=47 status=ok
// SIG undefined FUN_1421cc900(void)

longlong FUN_1421cc900(void)

{
  if (DAT_146aed430 == 0) {
    FUN_141786a30(&DAT_146aed430,&PTR_FUN_146527ea0);
  }
  return DAT_146aed430;
}



// FUNCTION 1421cc930 FUN_1421cc930 body=47 status=ok
// SIG undefined FUN_1421cc930(void)

longlong FUN_1421cc930(void)

{
  if (DAT_146aed438 == 0) {
    FUN_141786a30(&DAT_146aed438,&PTR_FUN_146527fa0);
  }
  return DAT_146aed438;
}



// FUNCTION 1421cc960 FUN_1421cc960 body=47 status=ok
// SIG undefined FUN_1421cc960(void)

longlong FUN_1421cc960(void)

{
  if (DAT_146aed440 == 0) {
    FUN_141786a30(&DAT_146aed440,&PTR_FUN_146528020);
  }
  return DAT_146aed440;
}



// FUNCTION 1421cc990 FUN_1421cc990 body=47 status=ok
// SIG undefined FUN_1421cc990(void)

longlong FUN_1421cc990(void)

{
  if (DAT_146aed448 == 0) {
    FUN_141786a30(&DAT_146aed448,&PTR_FUN_1465280a0);
  }
  return DAT_146aed448;
}



// FUNCTION 1421cc9c0 FUN_1421cc9c0 body=47 status=ok
// SIG undefined FUN_1421cc9c0(void)

longlong FUN_1421cc9c0(void)

{
  if (DAT_146aed450 == 0) {
    FUN_141786a30(&DAT_146aed450,&PTR_FUN_1465281a0);
  }
  return DAT_146aed450;
}



// FUNCTION 1421cc9f0 FUN_1421cc9f0 body=47 status=ok
// SIG undefined FUN_1421cc9f0(void)

longlong FUN_1421cc9f0(void)

{
  if (DAT_146aed458 == 0) {
    FUN_141786a30(&DAT_146aed458,&PTR_FUN_146528290);
  }
  return DAT_146aed458;
}



// FUNCTION 1421cca20 FUN_1421cca20 body=47 status=ok
// SIG undefined FUN_1421cca20(void)

longlong FUN_1421cca20(void)

{
  if (DAT_146aed460 == 0) {
    FUN_141786a30(&DAT_146aed460,&PTR_FUN_146528390);
  }
  return DAT_146aed460;
}



// FUNCTION 1421cca50 FUN_1421cca50 body=47 status=ok
// SIG undefined FUN_1421cca50(void)

longlong FUN_1421cca50(void)

{
  if (DAT_146aed468 == 0) {
    FUN_141786a30(&DAT_146aed468,&PTR_FUN_146528490);
  }
  return DAT_146aed468;
}



// FUNCTION 1421cca80 FUN_1421cca80 body=47 status=ok
// SIG undefined FUN_1421cca80(void)

longlong FUN_1421cca80(void)

{
  if (DAT_146aed470 == 0) {
    FUN_141786a30(&DAT_146aed470,&PTR_FUN_146528590);
  }
  return DAT_146aed470;
}



// FUNCTION 1421ccab0 FUN_1421ccab0 body=47 status=ok
// SIG undefined FUN_1421ccab0(void)

longlong FUN_1421ccab0(void)

{
  if (DAT_146aed478 == 0) {
    FUN_141786a30(&DAT_146aed478,&PTR_FUN_146528690);
  }
  return DAT_146aed478;
}



// FUNCTION 1421ccae0 FUN_1421ccae0 body=47 status=ok
// SIG undefined FUN_1421ccae0(void)

longlong FUN_1421ccae0(void)

{
  if (DAT_146aed480 == 0) {
    FUN_141786a30(&DAT_146aed480,&PTR_FUN_146528750);
  }
  return DAT_146aed480;
}



// FUNCTION 1421ccb30 operator= body=693 status=ok
// SIG undefined operator=(void)

longlong *
TSparseArray<TSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
::operator=(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  int local_78;
  uint uStack_74;
  uint uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_1 + 5);
    _Dst = (uint *)(param_1 + 2);
    uStack_74 = 1;
    local_78 = 0;
    uStack_64 = 0;
    iStack_60 = 0;
    if (uVar1 != 0) {
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = _Dst;
      }
      uVar2 = *puVar8;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar2 == 0) {
        lVar7 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar5 = local_78 + 1;
        bVar4 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar5;
        if (bVar4) goto LAB_1421ccc0c;
        uVar2 = puVar8[lVar7 + 1];
      }
      uStack_74 = -uVar2 & uVar2;
      iVar5 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      uStack_64 = (iStack_60 - iVar5) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_1421ccc0c:
        uStack_64 = uVar1;
      }
    }
    uVar2 = *(uint *)(param_1 + 5);
    local_40 = 0xffffffff;
    uStack_3c = uStack_64;
    uStack_38 = CONCAT44(uStack_5c,iStack_60);
    uVar9 = uVar2 & 0xffffffe0;
    local_50 = local_78;
    uStack_4c = uStack_74;
    puStack_48 = _Dst;
    uStack_64 = uVar2;
    if (uVar2 != uVar1) {
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = _Dst;
      }
      uVar6 = puVar8[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
      iVar5 = (int)uVar2 >> 5;
      while (uVar6 == 0) {
        uVar9 = uVar9 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5)
        goto LAB_1421cccc1;
        uVar6 = puVar8[(longlong)iVar5 + 1];
        iVar5 = iVar5 + 1;
      }
      uVar6 = -uVar6 & uVar6;
      iVar5 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uVar6 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      uStack_64 = (uVar9 - iVar5) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_1421cccc1:
        uStack_64 = uVar1;
      }
    }
    while ((lVar7 = (longlong)(int)uStack_3c, uStack_3c != uStack_64 || (puStack_48 != _Dst))) {
      lVar3 = *param_1;
      if ((*(char *)(lVar3 + 0x18 + lVar7 * 0x28) != '\0') &&
         (*(undefined1 *)(lVar3 + 0x18 + lVar7 * 0x28) = 0,
         *(longlong *)(lVar3 + 8 + lVar7 * 0x28) != 0)) {
        FMemory::Free();
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    }
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (_Dst != (uint *)(param_2 + 2)) {
      if (param_2[4] == 0) {
        ::_guard_xfg_dispatch_icall_nop(_Dst,param_2 + 2,0x10);
      }
      if (param_1[4] != 0) {
        FMemory::Free();
      }
      param_1[4] = param_2[4];
      param_2[4] = 0;
      *(int *)(param_1 + 5) = (int)param_2[5];
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
      param_2[5] = 0;
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 1421ccdf0 FUN_1421ccdf0 body=501 status=ok
// SIG undefined FUN_1421ccdf0(void)

longlong * FUN_1421ccdf0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
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
  plVar1 = param_2 + 2;
  plVar2 = param_1 + 2;
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  plVar1 = param_2 + 4;
  plVar2 = param_1 + 4;
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
  }
  plVar1 = param_2 + 6;
  plVar2 = param_1 + 6;
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 7) = (int)param_2[7];
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
    param_2[7] = 0;
  }
  if (param_1 + 8 != param_2 + 8) {
    TSparseArray<TSetElement<TTuple<FName,TOptional<FString>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::operator=(param_1 + 8,param_2 + 8);
    if (param_2[0x10] == 0) {
      _guard_xfg_dispatch_icall_nop(param_1 + 0xf,param_2 + 0xf,4);
    }
    if (param_1[0x10] != 0) {
      FMemory::Free();
    }
    param_1[0x10] = param_2[0x10];
    param_2[0x10] = 0;
    *(int *)(param_1 + 0x11) = (int)param_2[0x11];
    *(undefined4 *)(param_2 + 0x11) = 0;
  }
  if (param_1 + 0x12 != param_2 + 0x12) {
    TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::operator=(param_1 + 0x12,param_2 + 0x12);
    if (param_2[0x1a] == 0) {
      _guard_xfg_dispatch_icall_nop(param_1 + 0x19,param_2 + 0x19,4);
    }
    if (param_1[0x1a] != 0) {
      FMemory::Free();
    }
    param_1[0x1a] = param_2[0x1a];
    param_2[0x1a] = 0;
    *(int *)(param_1 + 0x1b) = (int)param_2[0x1b];
    *(undefined4 *)(param_2 + 0x1b) = 0;
  }
  *(char *)(param_1 + 0x1c) = (char)param_2[0x1c];
  *(undefined1 *)((longlong)param_1 + 0xe1) = *(undefined1 *)((longlong)param_2 + 0xe1);
  *(undefined1 *)((longlong)param_1 + 0xe2) = *(undefined1 *)((longlong)param_2 + 0xe2);
  *(undefined1 *)((longlong)param_1 + 0xe3) = *(undefined1 *)((longlong)param_2 + 0xe3);
  return param_1;
}



// FUNCTION 1421ccff0 FUN_1421ccff0 body=509 status=ok
// SIG undefined FUN_1421ccff0(void)

longlong FUN_1421ccff0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  undefined1 local_res8 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  TArray<FName,FDefaultAllocator>::operator=();
  TArray<FName,FDefaultAllocator>::operator=(param_1 + 0x10,param_2 + 0x10);
  TArray<FName,FDefaultAllocator>::operator=(param_1 + 0x20,param_2 + 0x20);
  TArray<FName,FDefaultAllocator>::operator=(param_1 + 0x30,param_2 + 0x30);
  plVar1 = (longlong *)(param_2 + 0x40);
  plVar2 = (longlong *)(param_1 + 0x40);
  local_58 = (uint *)CONCAT44(local_58._4_4_,(undefined4)local_58);
  if (plVar2 != plVar1) {
    TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>
    ::Empty(plVar2,*(int *)(param_2 + 0x48) - *(int *)(param_2 + 0x74));
    iVar3 = *(int *)(param_2 + 0x68);
    puStack_30 = (uint *)(param_2 + 0x50);
    local_68 = 0x100000000;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    if (iVar3 != 0) {
      puVar8 = *(uint **)(param_2 + 0x60);
      if (*(uint **)(param_2 + 0x60) == (uint *)0x0) {
        puVar8 = puStack_30;
      }
      uVar6 = *puVar8;
      uStack_50 = 0;
      iVar7 = 0;
      while (uVar6 == 0) {
        uStack_50 = uStack_50 + 0x20;
        uVar5 = (ulonglong)local_68 >> 0x20;
        local_68 = CONCAT44((int)uVar5,iVar7 + 1);
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1421cd0ff;
        uVar6 = puVar8[(longlong)iVar7 + 1];
        iVar7 = iVar7 + 1;
      }
      uVar6 = -uVar6 & uVar6;
      iVar7 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      local_68 = CONCAT44(uVar6,(undefined4)local_68);
      if (uVar6 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      local_58._4_4_ = (uStack_50 - iVar7) + 0x1f;
      if (iVar3 < local_58._4_4_) {
LAB_1421cd0ff:
        local_58._4_4_ = iVar3;
      }
    }
    uStack_28 = 0xffffffff;
    iStack_24 = local_58._4_4_;
    iStack_20 = uStack_50;
    iStack_1c = iStack_4c;
    uStack_38 = local_68;
    uStack_60 = local_68;
    local_48 = uStack_50;
    iStack_44 = iStack_4c;
    uStack_50 = 0xffffffff;
    iStack_4c = local_58._4_4_;
    bVar4 = local_58._4_4_ < iVar3;
    local_40 = plVar1;
    local_58 = puStack_30;
    if (bVar4) {
      do {
        TSet<TTuple<FName,TOptional<FString>_>,TDefaultMapHashableKeyFuncs<FName,TOptional<FString>,1>,FDefaultSetAllocator>
        ::Emplace<TTuple<FName,TOptional<FString>_>_const_&>
                  (plVar2,local_res8,*plVar1 + (longlong)iStack_4c * 0x28,0);
        uStack_50 = uStack_50 & ~uStack_60._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (param_1 + 0x90,param_2 + 0x90);
  *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_2 + 0xe0);
  *(undefined1 *)(param_1 + 0xe1) = *(undefined1 *)(param_2 + 0xe1);
  *(undefined1 *)(param_1 + 0xe2) = *(undefined1 *)(param_2 + 0xe2);
  *(undefined1 *)(param_1 + 0xe3) = *(undefined1 *)(param_2 + 0xe3);
  return param_1;
}



// FUNCTION 1421cd1f0 FUN_1421cd1f0 body=204 status=ok
// SIG undefined FUN_1421cd1f0(void)

undefined8 * FUN_1421cd1f0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  puVar3 = param_2 + 5;
  param_1[4] = param_2[4];
  if (param_1 + 5 != puVar3) {
    param_1[5] = *puVar3;
    *puVar3 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 6,param_2 + 6);
  }
  plVar1 = param_2 + 7;
  plVar2 = param_1 + 7;
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
    param_2[8] = 0;
  }
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  param_1[10] = param_2[10];
  return param_1;
}



// FUNCTION 1421cd350 Copy body=74 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FARFilter>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FUN_1421ccff0(param_2 + param_3,param_3);
      param_3 = param_3 + 0xe8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1421cd3a0 Copy body=370 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FAssetBundleData>::Copy
          (undefined8 param_1,longlong *param_2,longlong *param_3,uint param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint local_res20;
  
  uVar6 = (ulonglong)param_4;
  local_res20 = param_4;
  if (param_4 != 0) {
    do {
      uVar5 = (uint)uVar6;
      if (param_2 != param_3) {
        for (iVar10 = (int)param_2[1]; iVar10 != 0; iVar10 = iVar10 + -1) {
          TArray<FNamedInterfaceDef,FDefaultAllocator>::
          ~TArray<FNamedInterfaceDef,FDefaultAllocator>();
          uVar5 = local_res20;
        }
        iVar10 = (int)param_3[1];
        lVar1 = *param_3;
        *(int *)(param_2 + 1) = iVar10;
        if ((iVar10 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(param_2,iVar10);
          puVar8 = (undefined4 *)*param_2;
          uVar5 = local_res20;
          if (iVar10 != 0) {
            puVar12 = (undefined8 *)(lVar1 + 0x10);
            do {
              uVar2 = *(undefined4 *)((longlong)puVar12 + -0xc);
              uVar3 = *(undefined4 *)(puVar12 + -1);
              uVar4 = *(undefined4 *)((longlong)puVar12 + -4);
              *puVar8 = *(undefined4 *)(puVar12 + -2);
              puVar8[1] = uVar2;
              puVar8[2] = uVar3;
              puVar8[3] = uVar4;
              *(undefined8 *)(puVar8 + 4) = *puVar12;
              *(undefined8 *)(puVar8 + 6) = 0;
              iVar9 = *(int *)(puVar12 + 2);
              puVar11 = (undefined8 *)puVar12[1];
              puVar8[8] = iVar9;
              if (iVar9 == 0) {
                puVar8[9] = 0;
              }
              else {
                TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(puVar8 + 6,iVar9,0);
                puVar7 = *(undefined8 **)(puVar8 + 6);
                do {
                  *puVar7 = *puVar11;
                  FString::FString(puVar7 + 1,puVar11 + 1);
                  puVar7 = puVar7 + 3;
                  puVar11 = puVar11 + 3;
                  iVar9 = iVar9 + -1;
                } while (iVar9 != 0);
              }
              puVar8 = puVar8 + 10;
              puVar12 = puVar12 + 5;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
        }
      }
      param_3 = param_3 + 2;
      local_res20 = uVar5 - 1;
      uVar6 = (ulonglong)local_res20;
      param_2 = param_2 + 2;
    } while (local_res20 != 0);
    uVar6 = 0;
  }
  return CONCAT71((int7)(uVar6 >> 8),1);
}



// FUNCTION 1421cd520 Copy body=277 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FAssetBundleEntry>::Copy
          (undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  
  if (param_4 != 0) {
    plVar6 = (longlong *)(param_3 + 0x18);
    do {
      *param_2 = plVar6[-3];
      plVar1 = param_2 + 3;
      param_2[1] = plVar6[-2];
      param_2[2] = plVar6[-1];
      if (plVar1 != plVar6) {
        iVar5 = (int)param_2[4];
        if (iVar5 != 0) {
          plVar4 = (longlong *)(*plVar1 + 8);
          do {
            if (*plVar4 != 0) {
              FMemory::Free();
            }
            plVar4 = plVar4 + 3;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        iVar5 = (int)plVar6[1];
        puVar2 = (undefined8 *)*plVar6;
        *(int *)(param_2 + 4) = iVar5;
        if ((iVar5 == 0) && (*(int *)((longlong)param_2 + 0x24) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x24) = 0;
        }
        else {
          TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar1,iVar5);
          puVar3 = (undefined8 *)*plVar1;
          for (; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar3 = *puVar2;
            FString::FString(puVar3 + 1,puVar2 + 1);
            puVar3 = puVar3 + 3;
            puVar2 = puVar2 + 3;
          }
        }
      }
      plVar6 = plVar6 + 5;
      param_4 = param_4 + -1;
      param_2 = param_2 + 5;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1421cd640 FUN_1421cd640 body=416 status=ok
// SIG undefined FUN_1421cd640(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1421cd640(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  void *_Src;
  longlong lVar7;
  ulonglong uVar8;
  int *piVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  uVar8 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (param_4 != 0) {
    piVar9 = (int *)(param_3 + 0x40);
    local_48 = uVar8;
    do {
      *param_2 = *(undefined8 *)(piVar9 + -0x10);
      puVar1 = param_2 + 5;
      param_2[1] = *(undefined8 *)(piVar9 + -0xe);
      param_2[2] = *(undefined8 *)(piVar9 + -0xc);
      param_2[3] = *(undefined8 *)(piVar9 + -10);
      param_2[4] = *(undefined8 *)(piVar9 + -8);
      plVar5 = *(longlong **)(piVar9 + -4);
      uVar6 = *(undefined8 *)(piVar9 + -6);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_68 = uVar6;
      plStack_60 = plVar5;
      if (&local_68 != puVar1) {
        local_68 = *puVar1;
        plStack_60 = (longlong *)param_2[6];
        *puVar1 = uVar6;
        param_2[6] = plVar5;
        local_58 = uVar6;
        plStack_50 = plVar5;
      }
      plVar5 = plStack_60;
      if (plStack_60 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_60 + 1;
        lVar7 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_60 + 8))(plStack_60,1);
          }
        }
      }
      piVar3 = (int *)(param_2 + 7);
      if (piVar3 != piVar9 + -2) {
        iVar4 = *piVar9;
        _Src = *(void **)(piVar9 + -2);
        *(int *)(param_2 + 8) = iVar4;
        if ((iVar4 == 0) && (*(int *)((longlong)param_2 + 0x44) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x44) = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(piVar3,iVar4);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar3,_Src,(longlong)iVar4 << 2);
        }
      }
      *(int *)(param_2 + 9) = piVar9[2];
      uVar8 = *(ulonglong *)(piVar9 + 4);
      piVar9 = piVar9 + 0x16;
      param_2[10] = uVar8;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xb;
    } while (param_4 != 0);
  }
  return CONCAT71((int7)(uVar8 >> 8),1);
}



// FUNCTION 1421cd7f0 Destruct body=90 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FAssetBundleData>::Destruct(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_2;
  iVar2 = (int)param_2[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x18;
    do {
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (lVar1);
      lVar1 = lVar1 + 0x28;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_2;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1421cd860 FUN_1421cd860 body=94 status=ok
// SIG undefined FUN_1421cd860(void)

void FUN_1421cd860(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_2 + 0x30);
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



// FUNCTION 1421cd8c0 FUN_1421cd8c0 body=48 status=ok
// SIG undefined FUN_1421cd8c0(void)

void FUN_1421cd8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FAssetBundleData::ExportTextItem(param_3,param_2,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 1421cd8f0 FUN_1421cd8f0 body=6 status=ok
// SIG undefined FUN_1421cd8f0(void)

undefined8 FUN_1421cd8f0(void)

{
  return 0xb4dfbcfb;
}



// FUNCTION 1421cd900 Get_Z_Construct_UScriptStruct_FAssetBundleData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAssetBundleData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAssetBundleData_CRC(void)

{
  return 0x8f20cf35;
}



// FUNCTION 1421cd910 Get_Z_Construct_UScriptStruct_FAssetBundleEntry_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAssetBundleEntry_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAssetBundleEntry_CRC(void)

{
  return 0x2e8403a7;
}



// FUNCTION 1421cd920 FUN_1421cd920 body=6 status=ok
// SIG undefined FUN_1421cd920(void)

undefined8 FUN_1421cd920(void)

{
  return 0xc6d0ccf1;
}



// FUNCTION 1421cd930 Get_Z_Construct_UScriptStruct_FTagAndValue_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FTagAndValue_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FTagAndValue_CRC(void)

{
  return 0x2e0a6674;
}



// FUNCTION 1421cd990 Serialize body=112 status=ok
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
  UAssetRegistryImpl::Serialize(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 1421cda00 StaticRegisterNativesUAssetRegistry body=34 status=ok
// SIG undefined StaticRegisterNativesUAssetRegistry(void)

void UAssetRegistry::StaticRegisterNativesUAssetRegistry(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetAllAssets_144fe3510,0x10);
  return;
}



// FUNCTION 1421cda30 StaticRegisterNativesUAssetRegistryHelpers body=34 status=ok
// SIG undefined StaticRegisterNativesUAssetRegistryHelpers(void)

void UAssetRegistryHelpers::StaticRegisterNativesUAssetRegistryHelpers(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CreateAssetData_144fe3440,0xd);
  return;
}



// FUNCTION 1421cda60 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FARFilter::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aed3a8 == 0) {
    if (DAT_146aed408 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aed408,&PTR_s__Script_AssetRegistry_144fe3418);
    }
    lVar1 = DAT_146aed408;
    uVar2 = FUN_1421cd8f0();
    DAT_146aed3a8 = GetStaticStruct(FUN_1421cdd10,lVar1,L"ARFilter",0xe8,uVar2);
  }
  return;
}



// FUNCTION 1421cdae0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAssetBundleData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aed3c8 == 0) {
    if (DAT_146aed408 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aed408,&PTR_s__Script_AssetRegistry_144fe3418);
    }
    lVar1 = DAT_146aed408;
    uVar2 = Get_Z_Construct_UScriptStruct_FAssetBundleData_CRC();
    DAT_146aed3c8 = GetStaticStruct(FUN_1421cdd40,lVar1,L"AssetBundleData",0x10,uVar2);
  }
  return;
}



// FUNCTION 1421cdb60 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAssetBundleEntry::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aed3d8 == 0) {
    if (DAT_146aed408 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aed408,&PTR_s__Script_AssetRegistry_144fe3418);
    }
    lVar1 = DAT_146aed408;
    uVar2 = Get_Z_Construct_UScriptStruct_FAssetBundleEntry_CRC();
    DAT_146aed3d8 = GetStaticStruct(FUN_1421cdd70,lVar1,L"AssetBundleEntry",0x28,uVar2);
  }
  return;
}



// FUNCTION 1421cdbe0 FUN_1421cdbe0 body=113 status=ok
// SIG undefined FUN_1421cdbe0(void)

void FUN_1421cdbe0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aed3e8 == 0) {
    if (DAT_146aed408 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aed408,&PTR_s__Script_AssetRegistry_144fe3418);
    }
    lVar1 = DAT_146aed408;
    uVar2 = FUN_1421cd920();
    DAT_146aed3e8 = GetStaticStruct(FUN_1421cdda0,lVar1,L"AssetData",0x58,uVar2);
  }
  return;
}



// FUNCTION 1421cdc60 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FTagAndValue::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aed410 == 0) {
    if (DAT_146aed408 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aed408,&PTR_s__Script_AssetRegistry_144fe3418);
    }
    lVar1 = DAT_146aed408;
    uVar2 = Get_Z_Construct_UScriptStruct_FTagAndValue_CRC();
    DAT_146aed410 = GetStaticStruct(FUN_1421cddd0,lVar1,L"TagAndValue",0x18,uVar2);
  }
  return;
}



// FUNCTION 1421cdce0 FUN_1421cdce0 body=47 status=ok
// SIG undefined FUN_1421cdce0(void)

longlong FUN_1421cdce0(void)

{
  if (DAT_146aed3f8 == 0) {
    FUN_141786440(&DAT_146aed3f8,&PTR_FUN_144fe2d30);
  }
  return DAT_146aed3f8;
}



// FUNCTION 1421cdd10 FUN_1421cdd10 body=47 status=ok
// SIG undefined FUN_1421cdd10(void)

longlong FUN_1421cdd10(void)

{
  if (DAT_146aed3c0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aed3c0,&PTR_FUN_146527730);
  }
  return DAT_146aed3c0;
}



// FUNCTION 1421cdd40 FUN_1421cdd40 body=47 status=ok
// SIG undefined FUN_1421cdd40(void)

longlong FUN_1421cdd40(void)

{
  if (DAT_146aed3d0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aed3d0,&PTR_FUN_1465277f0);
  }
  return DAT_146aed3d0;
}



// FUNCTION 1421cdd70 FUN_1421cdd70 body=47 status=ok
// SIG undefined FUN_1421cdd70(void)

longlong FUN_1421cdd70(void)

{
  if (DAT_146aed3e0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aed3e0,&PTR_FUN_146527960);
  }
  return DAT_146aed3e0;
}



// FUNCTION 1421cdda0 FUN_1421cdda0 body=47 status=ok
// SIG undefined FUN_1421cdda0(void)

longlong FUN_1421cdda0(void)

{
  if (DAT_146aed3f0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aed3f0,&PTR_FUN_146527af0);
  }
  return DAT_146aed3f0;
}



// FUNCTION 1421cddd0 FUN_1421cddd0 body=47 status=ok
// SIG undefined FUN_1421cddd0(void)

longlong FUN_1421cddd0(void)

{
  if (DAT_146aed418 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aed418,&PTR_FUN_146527be0);
  }
  return DAT_146aed418;
}



// FUNCTION 1421cde00 FUN_1421cde00 body=302 status=ok
// SIG undefined FUN_1421cde00(void)

void FUN_1421cde00(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int local_res10 [2];
  undefined8 local_res20;
  undefined1 local_68 [48];
  longlong *local_38;
  longlong local_30;
  
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar5 = UAssetRegistryHelpers::CreateAssetData(local_68,local_res20,local_res10[0] != 0);
  FUN_1421cd1f0(param_3,uVar5);
  if (local_30 != 0) {
    FMemory::Free();
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  return;
}



// FUNCTION 1421cdf30 execGetAllAssets body=241 status=ok
// SIG undefined execGetAllAssets(void)

void IAssetRegistry::execGetAllAssets(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined8 local_28;
  undefined8 local_20;
  
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
  local_res8[0] = 0;
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x50))(param_1,puVar2,local_res8[0] != 0);
  *param_3 = uVar1;
  FUN_1404be960(&local_28);
  return;
}



// FUNCTION 1421ce030 execGetAllCachedPaths body=205 status=ok
// SIG undefined execGetAllCachedPaths(void)

void IAssetRegistry::execGetAllCachedPaths(longlong *param_1,longlong param_2)

{
  longlong **pplVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_18;
  undefined8 local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  pplVar1 = &local_18;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar1 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x98))(param_1,pplVar1);
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
  return;
}



// FUNCTION 1421ce100 FUN_1421ce100 body=252 status=ok
// SIG undefined FUN_1421ce100(void)

void FUN_1421ce100(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong lStack_30;
  undefined8 local_28;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = (longlong *)0x0;
  lStack_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar7 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar6 = UAssetRegistryHelpers::GetAsset(puVar7);
  *param_3 = uVar6;
  if (lStack_30 != 0) {
    FMemory::Free();
  }
  plVar5 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_38)(local_38);
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



// FUNCTION 1421ce200 FUN_1421ce200 body=305 status=ok
// SIG undefined FUN_1421ce200(void)

void FUN_1421ce200(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int local_res8 [2];
  undefined8 local_res10;
  undefined1 local_78 [48];
  longlong *local_48;
  longlong local_40;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar5 = (**(code **)(*param_1 + 0x48))(param_1,local_78,local_res10,local_res8[0] != 0);
  FUN_1421cd1f0(param_3,uVar5);
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_48 + 8))(local_48,1);
      }
    }
  }
  return;
}



// FUNCTION 1421ce340 execGetAssetRegistry body=58 status=ok
// SIG undefined execGetAssetRegistry(void)

void UAssetRegistryHelpers::execGetAssetRegistry
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)GetAssetRegistry(local_18);
  *param_3 = *puVar1;
  param_3[1] = puVar1[1];
  return;
}



// FUNCTION 1421ce380 FUN_1421ce380 body=403 status=ok
// SIG undefined FUN_1421ce380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1421ce380(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
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
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_b8 = 0xffffffff;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
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
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_128);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_128);
  }
  local_138 = 0;
  local_130 = 0;
  puVar2 = &local_128;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_138);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_138);
  }
  puVar3 = &local_138;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x40))(param_1,puVar2,puVar3);
  *param_3 = uVar1;
  FUN_1404be960(&local_138);
  FARFilter::~FARFilter(&local_128);
  return;
}



// FUNCTION 1421ce520 execGetAssetsByClass body=304 status=ok
// SIG undefined execGetAssetsByClass(void)

void IAssetRegistry::execGetAssetsByClass(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined8 local_res10;
  undefined8 local_28;
  undefined8 local_20;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
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
  local_res8[0] = 0;
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x28))(param_1,local_res10,puVar2,local_res8[0] != 0);
  *param_3 = uVar1;
  FUN_1404be960(&local_28);
  return;
}



// FUNCTION 1421ce650 execGetAssetsByPackageName body=304 status=ok
// SIG undefined execGetAssetsByPackageName(void)

void IAssetRegistry::execGetAssetsByPackageName
               (longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  int local_res8 [2];
  undefined8 local_res10;
  undefined8 local_28;
  undefined8 local_20;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
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
  local_res8[0] = 0;
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x18))(param_1,local_res10,puVar2,local_res8[0] != 0);
  *param_3 = uVar1;
  FUN_1404be960(&local_28);
  return;
}



// FUNCTION 1421ce780 execGetAssetsByPath body=379 status=ok
// SIG undefined execGetAssetsByPath(void)

void IAssetRegistry::execGetAssetsByPath(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  bool bVar3;
  int local_res8 [2];
  int local_res10 [2];
  undefined8 local_res18;
  undefined8 local_38;
  undefined8 local_30;
  
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_res8[0] = 0;
  puVar2 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  bVar3 = local_res8[0] != 0;
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
  uVar1 = (**(code **)(*param_1 + 0x20))(param_1,local_res18,puVar2,bVar3,local_res10[0] != 0);
  *param_3 = uVar1;
  FUN_1404be960(&local_38);
  return;
}



// FUNCTION 1421ce900 FUN_1421ce900 body=252 status=ok
// SIG undefined FUN_1421ce900(void)

void FUN_1421ce900(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong lStack_30;
  undefined8 local_28;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = (longlong *)0x0;
  lStack_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar7 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar6 = UAssetRegistryHelpers::GetClass(puVar7);
  *param_3 = uVar6;
  if (lStack_30 != 0) {
    FMemory::Free();
  }
  plVar5 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_38)(local_38);
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



// FUNCTION 1421cea00 FUN_1421cea00 body=318 status=ok
// SIG undefined FUN_1421cea00(void)

void FUN_1421cea00(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong local_78 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong lStack_30;
  undefined8 local_28;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = (longlong *)0x0;
  lStack_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar6 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar5 = (longlong *)UAssetRegistryHelpers::GetExportTextName(local_78,puVar6);
  if (param_3 != plVar5) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar5;
    *plVar5 = 0;
    *(int *)(param_3 + 1) = (int)plVar5[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar5 + 0xc);
    plVar5[1] = 0;
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  if (lStack_30 != 0) {
    FMemory::Free();
  }
  plVar5 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_38)(local_38);
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



// FUNCTION 1421ceb40 FUN_1421ceb40 body=318 status=ok
// SIG undefined FUN_1421ceb40(void)

void FUN_1421ceb40(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong local_78 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong lStack_30;
  undefined8 local_28;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = (longlong *)0x0;
  lStack_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar6 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar5 = (longlong *)UAssetRegistryHelpers::GetFullName(local_78,puVar6);
  if (param_3 != plVar5) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar5;
    *plVar5 = 0;
    *(int *)(param_3 + 1) = (int)plVar5[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar5 + 0xc);
    plVar5[1] = 0;
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  if (lStack_30 != 0) {
    FMemory::Free();
  }
  plVar5 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_38)(local_38);
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



// FUNCTION 1421cec80 execGetSubPaths body=369 status=ok
// SIG undefined execGetSubPaths(void)

void IAssetRegistry::execGetSubPaths(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong **pplVar2;
  int iVar3;
  int local_res8 [2];
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_28 = (longlong *)0x0;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res8[0] = 0;
  pplVar2 = &local_28;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar2 = *(longlong ***)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0xa0))(param_1,&local_18,pplVar2,local_res8[0] != 0);
  plVar1 = local_28;
  for (iVar3 = (int)local_20; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421cee00 FUN_1421cee00 body=442 status=ok
// SIG undefined FUN_1421cee00(void)

void FUN_1421cee00(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 local_res10;
  longlong local_88 [8];
  longlong *local_48;
  longlong lStack_40;
  undefined8 local_38;
  
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  local_48 = (longlong *)0x0;
  lStack_40 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_88 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_88 + 2);
  }
  plVar6 = *(longlong **)(param_2 + 0x38);
  local_res10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  plVar7 = local_88 + 2;
  if (plVar6 != (longlong *)0x0) {
    plVar7 = plVar6;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  puVar5 = &local_res10;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  plVar6 = local_88;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar4 = FUN_1421b9bb0(plVar7,puVar5,plVar6);
  *param_3 = uVar4;
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  if (lStack_40 != 0) {
    FMemory::Free();
  }
  plVar6 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_48 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_48)(local_48);
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
  return;
}



// FUNCTION 1421cefc0 execHasAssets body=196 status=ok
// SIG undefined execHasAssets(void)

void IAssetRegistry::execHasAssets(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_res10,local_res8[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1421cf090 FUN_1421cf090 body=251 status=ok
// SIG undefined FUN_1421cf090(void)

void FUN_1421cf090(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong lStack_30;
  undefined8 local_28;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = (longlong *)0x0;
  lStack_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar7 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar6 = FUN_1421bc8f0(puVar7);
  *param_3 = uVar6;
  if (lStack_30 != 0) {
    FMemory::Free();
  }
  plVar5 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_38)(local_38);
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



// FUNCTION 1421cf190 execIsLoadingAssets body=47 status=ok
// SIG undefined execIsLoadingAssets(void)

void IAssetRegistry::execIsLoadingAssets(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x188))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1421cf1c0 FUN_1421cf1c0 body=251 status=ok
// SIG undefined FUN_1421cf1c0(void)

void FUN_1421cf1c0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong lStack_30;
  undefined8 local_28;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = (longlong *)0x0;
  lStack_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar7 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar6 = UAssetRegistryHelpers::IsRedirector(puVar7);
  *param_3 = uVar6;
  if (lStack_30 != 0) {
    FMemory::Free();
  }
  plVar5 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_38)(local_38);
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



// FUNCTION 1421cf2c0 FUN_1421cf2c0 body=251 status=ok
// SIG undefined FUN_1421cf2c0(void)

void FUN_1421cf2c0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong lStack_30;
  undefined8 local_28;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = (longlong *)0x0;
  lStack_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar7 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar6 = FAssetData::IsUAsset(puVar7);
  *param_3 = uVar6;
  if (lStack_30 != 0) {
    FMemory::Free();
  }
  plVar5 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_38)(local_38);
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



// FUNCTION 1421cf3c0 FUN_1421cf3c0 body=251 status=ok
// SIG undefined FUN_1421cf3c0(void)

void FUN_1421cf3c0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong lStack_30;
  undefined8 local_28;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = (longlong *)0x0;
  lStack_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar7 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar6 = UAssetRegistryHelpers::IsValid(puVar7);
  *param_3 = uVar6;
  if (lStack_30 != 0) {
    FMemory::Free();
  }
  plVar5 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_38)(local_38);
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



// FUNCTION 1421cf4c0 execPrioritizeSearchPath body=152 status=ok
// SIG undefined execPrioritizeSearchPath(void)

void IAssetRegistry::execPrioritizeSearchPath(longlong *param_1,longlong param_2)

{
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x100))(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421cf560 FUN_1421cf560 body=403 status=ok
// SIG undefined FUN_1421cf560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1421cf560(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  local_128 = 0;
  local_120 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_128);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_128);
  }
  local_118 = 0;
  local_110 = 0;
  puVar1 = &local_128;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_118);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  puVar2 = &local_118;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0xa8))(param_1,puVar1,puVar2);
  FARFilter::~FARFilter(&local_118);
  FUN_1404be960(&local_128);
  return;
}



// FUNCTION 1421cf700 execScanFilesSynchronous body=286 status=ok
// SIG undefined execScanFilesSynchronous(void)

void IAssetRegistry::execScanFilesSynchronous(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong **pplVar2;
  int iVar3;
  int local_res8 [2];
  longlong *local_18;
  undefined8 local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res8[0] = 0;
  pplVar2 = &local_18;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar2 = *(longlong ***)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0xf0))(param_1,pplVar2,local_res8[0] != 0);
  plVar1 = local_18;
  for (iVar3 = (int)local_10; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 1421cf820 execScanModifiedAssetFiles body=205 status=ok
// SIG undefined execScanModifiedAssetFiles(void)

void IAssetRegistry::execScanModifiedAssetFiles(longlong *param_1,longlong param_2)

{
  longlong **pplVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_18;
  undefined8 local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  pplVar1 = &local_18;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar1 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x108))(param_1,pplVar1);
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
  return;
}



// FUNCTION 1421cf8f0 execScanPathsSynchronous body=286 status=ok
// SIG undefined execScanPathsSynchronous(void)

void IAssetRegistry::execScanPathsSynchronous(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong **pplVar2;
  int iVar3;
  int local_res8 [2];
  longlong *local_18;
  undefined8 local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res8[0] = 0;
  pplVar2 = &local_18;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar2 = *(longlong ***)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0xe8))(param_1,pplVar2,local_res8[0] != 0);
  plVar1 = local_18;
  for (iVar3 = (int)local_10; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 1421cfa10 execSearchAllAssets body=134 status=ok
// SIG undefined execSearchAllAssets(void)

void IAssetRegistry::execSearchAllAssets(longlong *param_1,longlong param_2)

{
  int local_res8 [2];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0xf8))(param_1,local_res8[0] != 0);
  return;
}



// FUNCTION 1421cfaa0 FUN_1421cfaa0 body=473 status=ok
// SIG undefined FUN_1421cfaa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1421cfaa0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_238 [32];
  longlong local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined1 local_118 [240];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  local_198 = 0xffffffff;
  local_208 = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_194 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0xffffffff;
  local_144 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_208);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_208);
  }
  local_218 = 0;
  local_210 = 0;
  puVar3 = &local_208;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_218);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_218);
  }
  plVar2 = &local_218;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = UAssetRegistryHelpers::SetFilterTagsAndValues(local_118,puVar3,plVar2);
  FUN_1421ccdf0(param_3,uVar1);
  FARFilter::~FARFilter(local_118);
  if ((int)local_210 != 0) {
    plVar2 = (longlong *)(local_218 + 8);
    iVar4 = (int)local_210;
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_218 != 0) {
    FMemory::Free();
  }
  FARFilter::~FARFilter(&local_208);
  return;
}



// FUNCTION 1421cfc80 FUN_1421cfc80 body=265 status=ok
// SIG undefined FUN_1421cfc80(void)

void FUN_1421cfc80(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong lStack_30;
  undefined8 local_28;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = (longlong *)0x0;
  lStack_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar7 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar6 = UAssetRegistryHelpers::ToSoftObjectPath(local_88,puVar7);
  FSoftObjectPath::operator=(param_3,uVar6);
  if (lStack_30 != 0) {
    FMemory::Free();
  }
  plVar5 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_38)(local_38);
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



// FUNCTION 1421cfd90 FUN_1421cfd90 body=53 status=ok
// SIG undefined FUN_1421cfd90(void)

void FUN_1421cfd90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144fe3dd0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1421cfdd0 FUN_1421cfdd0 body=53 status=ok
// SIG undefined FUN_1421cfdd0(void)

void FUN_1421cfdd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_144fe3ee8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1421cfe10 FUN_1421cfe10 body=47 status=ok
// SIG undefined FUN_1421cfe10(void)

longlong FUN_1421cfe10(void)

{
  if (DAT_146aed530 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146aed530,&PTR_s__Script_EngineMessages_144fe3da8);
  }
  return DAT_146aed530;
}



// FUNCTION 1421cfe80 Copy body=80 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FEngineServiceNotification>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    do {
      FString::operator=(param_2,param_3 + param_2);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10 + param_2);
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1421cfed0 Copy body=145 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FEngineServicePong>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar5 = (undefined1 *)(param_2 + 0x14);
    do {
      FString::operator=(puVar5 + -0x14,puVar5 + param_3 + -0x14);
      *(undefined4 *)(puVar5 + -4) = *(undefined4 *)(puVar5 + param_3 + -4);
      *puVar5 = puVar5[param_3];
      puVar1 = (undefined4 *)(puVar5 + param_3 + 4);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(puVar5 + 4) = *puVar1;
      *(undefined4 *)(puVar5 + 8) = uVar2;
      *(undefined4 *)(puVar5 + 0xc) = uVar3;
      *(undefined4 *)(puVar5 + 0x10) = uVar4;
      FString::operator=(puVar5 + 0x14,puVar5 + param_3 + 0x14);
      puVar1 = (undefined4 *)(puVar5 + param_3 + 0x24);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(puVar5 + 0x24) = *puVar1;
      *(undefined4 *)(puVar5 + 0x28) = uVar2;
      *(undefined4 *)(puVar5 + 0x2c) = uVar3;
      *(undefined4 *)(puVar5 + 0x30) = uVar4;
      *(undefined4 *)(puVar5 + 0x34) = *(undefined4 *)(puVar5 + param_3 + 0x34);
      puVar5 = puVar5 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1421cff70 Get_Z_Construct_UScriptStruct_FEngineServiceAuthDeny_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FEngineServiceAuthDeny_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FEngineServiceAuthDeny_CRC(void)

{
  return 0xaa20762;
}



// FUNCTION 1421cff80 Get_Z_Construct_UScriptStruct_FEngineServiceAuthGrant_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FEngineServiceAuthGrant_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FEngineServiceAuthGrant_CRC(void)

{
  return 0xaf4de830;
}



// FUNCTION 1421cff90 Get_Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_CRC(void)

{
  return 0xefd90168;
}



// FUNCTION 1421cffa0 Get_Z_Construct_UScriptStruct_FEngineServiceNotification_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FEngineServiceNotification_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FEngineServiceNotification_CRC(void)

{
  return 0x51470f47;
}



// FUNCTION 1421cffb0 Get_Z_Construct_UScriptStruct_FEngineServicePing_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FEngineServicePing_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FEngineServicePing_CRC(void)

{
  return 0x5b91ed4c;
}



// FUNCTION 1421cffc0 Get_Z_Construct_UScriptStruct_FEngineServicePong_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FEngineServicePong_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FEngineServicePong_CRC(void)

{
  return 0xc4d11869;
}



// FUNCTION 1421cffd0 Get_Z_Construct_UScriptStruct_FEngineServiceTerminate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FEngineServiceTerminate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FEngineServiceTerminate_CRC(void)

{
  return 0x949bd6b2;
}



// FUNCTION 1421cffe0 FUN_1421cffe0 body=113 status=ok
// SIG undefined FUN_1421cffe0(void)

void FUN_1421cffe0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aed588 == 0) {
    if (DAT_146aed530 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aed530,&PTR_s__Script_EngineMessages_144fe3da8);
    }
    lVar1 = DAT_146aed530;
    uVar2 = Get_Z_Construct_UScriptStruct_FEngineServiceAuthDeny_CRC();
    DAT_146aed588 = GetStaticStruct(FUN_1421d0360,lVar1,L"EngineServiceAuthDeny",0x20,uVar2);
  }
  return;
}



// FUNCTION 1421d0060 FUN_1421d0060 body=113 status=ok
// SIG undefined FUN_1421d0060(void)

void FUN_1421d0060(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aed578 == 0) {
    if (DAT_146aed530 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aed530,&PTR_s__Script_EngineMessages_144fe3da8);
    }
    lVar1 = DAT_146aed530;
    uVar2 = Get_Z_Construct_UScriptStruct_FEngineServiceAuthGrant_CRC();
    DAT_146aed578 = GetStaticStruct(FUN_1421d0390,lVar1,L"EngineServiceAuthGrant",0x20,uVar2);
  }
  return;
}



// FUNCTION 1421d00e0 FUN_1421d00e0 body=113 status=ok
// SIG undefined FUN_1421d00e0(void)

void FUN_1421d00e0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aed568 == 0) {
    if (DAT_146aed530 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aed530,&PTR_s__Script_EngineMessages_144fe3da8);
    }
    lVar1 = DAT_146aed530;
    uVar2 = Get_Z_Construct_UScriptStruct_FEngineServiceExecuteCommand_CRC();
    DAT_146aed568 = GetStaticStruct(FUN_1421d03c0,lVar1,L"EngineServiceExecuteCommand",0x20,uVar2);
  }
  return;
}



// FUNCTION 1421d0160 FUN_1421d0160 body=113 status=ok
// SIG undefined FUN_1421d0160(void)

void FUN_1421d0160(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aed538 == 0) {
    if (DAT_146aed530 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aed530,&PTR_s__Script_EngineMessages_144fe3da8);
    }
    lVar1 = DAT_146aed530;
    uVar2 = Get_Z_Construct_UScriptStruct_FEngineServiceNotification_CRC();
    DAT_146aed538 = GetStaticStruct(FUN_1421d03f0,lVar1,L"EngineServiceNotification",0x18,uVar2);
  }
  return;
}



// FUNCTION 1421d01e0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FLiveLinkHeartbeatMessage::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aed5a8 == 0) {
    if (DAT_146aed530 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aed530,&PTR_s__Script_EngineMessages_144fe3da8);
    }
    lVar1 = DAT_146aed530;
    uVar2 = Get_Z_Construct_UScriptStruct_FEngineServicePing_CRC();
    DAT_146aed5a8 = GetStaticStruct(FUN_1421d0420,lVar1,L"EngineServicePing",1,uVar2);
  }
  return;
}



// FUNCTION 1421d0260 FUN_1421d0260 body=113 status=ok
// SIG undefined FUN_1421d0260(void)

void FUN_1421d0260(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aed598 == 0) {
    if (DAT_146aed530 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aed530,&PTR_s__Script_EngineMessages_144fe3da8);
    }
    lVar1 = DAT_146aed530;
    uVar2 = Get_Z_Construct_UScriptStruct_FEngineServicePong_CRC();
    DAT_146aed598 = GetStaticStruct(FUN_1421d0450,lVar1,L"EngineServicePong",0x50,uVar2);
  }
  return;
}



// FUNCTION 1421d02e0 FUN_1421d02e0 body=113 status=ok
// SIG undefined FUN_1421d02e0(void)

void FUN_1421d02e0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aed558 == 0) {
    if (DAT_146aed530 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aed530,&PTR_s__Script_EngineMessages_144fe3da8);
    }
    lVar1 = DAT_146aed530;
    uVar2 = Get_Z_Construct_UScriptStruct_FEngineServiceTerminate_CRC();
    DAT_146aed558 = GetStaticStruct(FUN_1421d0480,lVar1,L"EngineServiceTerminate",0x10,uVar2);
  }
  return;
}



// FUNCTION 1421d0360 FUN_1421d0360 body=47 status=ok
// SIG undefined FUN_1421d0360(void)

longlong FUN_1421d0360(void)

{
  if (DAT_146aed590 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aed590,&PTR_FUN_146529ac0);
  }
  return DAT_146aed590;
}



// FUNCTION 1421d0390 FUN_1421d0390 body=47 status=ok
// SIG undefined FUN_1421d0390(void)

longlong FUN_1421d0390(void)

{
  if (DAT_146aed580 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aed580,&PTR_FUN_1465299d0);
  }
  return DAT_146aed580;
}



// FUNCTION 1421d03c0 FUN_1421d03c0 body=47 status=ok
// SIG undefined FUN_1421d03c0(void)

longlong FUN_1421d03c0(void)

{
  if (DAT_146aed570 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aed570,&PTR_FUN_146529950);
  }
  return DAT_146aed570;
}



// FUNCTION 1421d03f0 FUN_1421d03f0 body=47 status=ok
// SIG undefined FUN_1421d03f0(void)

longlong FUN_1421d03f0(void)

{
  if (DAT_146aed550 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aed550,&PTR_FUN_1465297e0);
  }
  return DAT_146aed550;
}



// FUNCTION 1421d0420 FUN_1421d0420 body=47 status=ok
// SIG undefined FUN_1421d0420(void)

longlong FUN_1421d0420(void)

{
  if (DAT_146aed5b0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aed5b0,&PTR_FUN_146529cd0);
  }
  return DAT_146aed5b0;
}



// FUNCTION 1421d0450 FUN_1421d0450 body=47 status=ok
// SIG undefined FUN_1421d0450(void)

longlong FUN_1421d0450(void)

{
  if (DAT_146aed5a0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aed5a0,&PTR_FUN_146529c80);
  }
  return DAT_146aed5a0;
}



// FUNCTION 1421d0480 FUN_1421d0480 body=47 status=ok
// SIG undefined FUN_1421d0480(void)

longlong FUN_1421d0480(void)

{
  if (DAT_146aed560 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aed560,&PTR_FUN_146529860);
  }
  return DAT_146aed560;
}



// FUNCTION 1421d04b0 FUN_1421d04b0 body=899 status=ok
// SIG undefined FUN_1421d04b0(void)

void FUN_1421d04b0(undefined8 param_1,undefined8 *param_2,char param_3,undefined8 param_4)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  void *pvVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined8 in_XMM1_Qb;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 in_XMM3_Dc;
  undefined4 in_XMM3_Dd;
  float fVar17;
  undefined4 uVar18;
  LARGE_INTEGER local_res10;
  undefined8 local_a8;
  undefined4 uStack_a4;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar18 = (undefined4)((ulonglong)param_4 >> 0x20);
  fVar17 = (float)param_4;
  if (param_3 == '\0') {
    fVar17 = 1.0;
    uVar18 = 0;
    in_XMM3_Dc = 0;
    in_XMM3_Dd = 0;
  }
  QueryPerformanceCounter(&local_res10);
  auVar1._4_8_ = in_XMM1_Qb;
  auVar1._0_4_ = uStack_a4;
  auVar12._0_8_ = auVar1._0_8_ << 0x20;
  auVar12._8_4_ = 0x44fe41f0;
  auVar12._12_4_ = 1;
  auVar13._4_12_ = auVar12._4_12_;
  auVar13._0_4_ = 0x3cd1cc10;
  *param_2 = L"RayIntersect";
  param_2[1] = 0xbf800000bf800000;
  *(undefined1 (*) [16])(param_2 + 2) = auVar13;
  auVar2._4_8_ = auVar12._8_8_;
  auVar2._0_4_ = uVar18;
  auVar14._0_8_ = auVar2._0_8_ << 0x20;
  auVar14._8_4_ = in_XMM3_Dc;
  auVar14._12_4_ = in_XMM3_Dd;
  param_2[4] = 0x3f80000000000000;
  puVar6 = (undefined4 *)FUN_1421d1040(&local_res10);
  *(undefined4 *)(param_2 + 1) = *puVar6;
  *(undefined4 *)((longlong)param_2 + 0xc) = puVar6[1];
  *(undefined4 *)(param_2 + 4) = 0x42b40000;
  auVar3._4_8_ = auVar14._8_8_;
  auVar3._0_4_ = uStack_a4;
  auVar15._0_8_ = auVar3._0_8_ << 0x20;
  auVar15._8_4_ = 0x44fe4220;
  auVar15._12_4_ = 1;
  auVar16._4_12_ = auVar15._4_12_;
  auVar16._0_4_ = 0x3cea4a8c;
  param_2[5] = L"Fractal";
  param_2[6] = 0xbf800000bf800000;
  *(undefined1 (*) [16])(param_2 + 7) = auVar16;
  param_2[9] = 0x3fc0000000000000;
  puVar6 = (undefined4 *)FUN_1421d1040(&local_res10);
  *(undefined4 *)(param_2 + 6) = *puVar6;
  uVar11 = (ulonglong)_tls_index;
  *(undefined4 *)((longlong)param_2 + 0x34) = puVar6[1];
  pvVar4 = ThreadLocalStoragePointer;
  *(undefined4 *)(param_2 + 9) = 0x42b40000;
  param_2[0x2d] = 0xffffffffffffffff;
  if (*(int *)(*(longlong *)((longlong)pvVar4 + uVar11 * 8) + 0x38) < DAT_1468509e4) {
    _Init_thread_header(&DAT_1468509e4);
    if (DAT_1468509e4 == -1) {
      uVar8 = FCommandLine::Get();
      DAT_1468509e0 = FParse::Param(uVar8,L"nullrhi");
      _Init_thread_footer(&DAT_1468509e4);
    }
  }
  if (((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) {
    local_88 = -1;
    lStack_80 = -1;
    local_78 = -1;
    uStack_70 = 0xffffffffffffffff;
    local_38 = 0;
    uStack_30 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    if (DAT_146ab6358 != (longlong *)0x0) {
      (**(code **)(*DAT_146ab6358 + 0x1f0))(DAT_146ab6358,&local_88);
      if (((-1 < local_88) && (-1 < lStack_80)) && (-1 < local_78)) {
        param_2[0x2d] = local_88;
      }
    }
    if (param_3 != '\0') {
      puVar7 = (undefined8 *)FName::FName(&local_res10,L"Renderer",1);
      uVar8 = FUN_14168dc80();
      cVar5 = FModuleManager::IsModuleLoaded(uVar8,*puVar7);
      if (cVar5 != '\0') {
        puVar7 = (undefined8 *)FName::FName(&local_res10,L"Renderer",1);
        uVar8 = *puVar7;
        uVar9 = FUN_14168dc80();
        plVar10 = (longlong *)FModuleManager::GetModule(uVar9,uVar8);
        (**(code **)(*plVar10 + 0xb8))(plVar10,param_2,fVar17 * 0.01);
        if (*(float *)(param_2 + 0x10) + *(float *)(param_2 + 0xb) + *(float *)(param_2 + 0x15) +
            *(float *)(param_2 + 0x1a) + *(float *)(param_2 + 0x1f) + *(float *)(param_2 + 0x24) +
            *(float *)(param_2 + 0x29) < 0.15) {
          (**(code **)(*plVar10 + 0xb8))(plVar10,param_2,fVar17 * 0.1);
          if (*(float *)(param_2 + 0x10) + *(float *)(param_2 + 0xb) + *(float *)(param_2 + 0x15) +
              *(float *)(param_2 + 0x1a) + *(float *)(param_2 + 0x1f) + *(float *)(param_2 + 0x24) +
              *(float *)(param_2 + 0x29) < 0.15) {
            (**(code **)(*plVar10 + 0xb8))(plVar10,param_2,fVar17);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1421d0840 GetRHIDisplay body=372 status=ok
// SIG undefined GetRHIDisplay(void)

void FSynthBenchmark::GetRHIDisplay(undefined8 param_1,undefined2 *param_2)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  longlong lVar5;
  
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0x208);
  iVar4 = 0;
  lVar5 = 0;
  puVar3 = param_2;
  while( true ) {
    if (DAT_146ab6af0 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = DAT_146ab6af0 + -1;
    }
    iVar1 = 0x103;
    if (iVar2 < 0x104) {
      iVar1 = iVar2;
    }
    if (iVar1 <= iVar4) break;
    iVar4 = iVar4 + 1;
    *puVar3 = *(undefined2 *)(lVar5 + DAT_146ab6ae8);
    puVar3 = puVar3 + 1;
    lVar5 = lVar5 + 2;
  }
  puVar3 = param_2 + 0x104;
  ::_guard_xfg_dispatch_icall_nop(puVar3,0,0x208);
  iVar4 = 0;
  lVar5 = 0;
  while( true ) {
    if ((int)DAT_146ab6b00 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)DAT_146ab6b00 + -1;
    }
    iVar1 = 0x103;
    if (iVar2 < 0x104) {
      iVar1 = iVar2;
    }
    if (iVar1 <= iVar4) break;
    iVar4 = iVar4 + 1;
    *puVar3 = *(undefined2 *)(lVar5 + DAT_146ab6af8);
    puVar3 = puVar3 + 1;
    lVar5 = lVar5 + 2;
  }
  puVar3 = param_2 + 0x208;
  ::_guard_xfg_dispatch_icall_nop(puVar3,0,0x208);
  iVar4 = 0;
  lVar5 = 0;
  while( true ) {
    if ((int)DAT_146ab6b10 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)DAT_146ab6b10 + -1;
    }
    iVar1 = 0x103;
    if (iVar2 < 0x104) {
      iVar1 = iVar2;
    }
    if (iVar1 <= iVar4) break;
    iVar4 = iVar4 + 1;
    *puVar3 = *(undefined2 *)(lVar5 + DAT_146ab6b08);
    puVar3 = puVar3 + 1;
    lVar5 = lVar5 + 2;
  }
  param_2 = param_2 + 0x30c;
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0x208);
  iVar4 = 0;
  lVar5 = 0;
  while( true ) {
    if (DAT_146ab6b20 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = DAT_146ab6b20 + -1;
    }
    iVar1 = 0x103;
    if (iVar2 < 0x104) {
      iVar1 = iVar2;
    }
    if (iVar1 <= iVar4) break;
    iVar4 = iVar4 + 1;
    *param_2 = *(undefined2 *)(lVar5 + DAT_146ab6b18);
    param_2 = param_2 + 1;
    lVar5 = lVar5 + 2;
  }
  return;
}



// FUNCTION 1421d09c0 FractalBenchmark body=341 status=ok
// SIG undefined FractalBenchmark(void)

float FractalBenchmark(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar3 = 0;
  fVar7 = 0.0;
  do {
    iVar2 = 0;
    do {
      uVar1 = 0;
      fVar5 = ((float)iVar2 * 0.00390625 + (float)iVar2 * 0.00390625) - 1.0;
      fVar6 = (float)iVar3 * 0.0078125 - 1.0;
      do {
        if (299 < uVar1) break;
        uVar1 = uVar1 + 1;
        fVar4 = fVar6 * fVar6;
        fVar6 = (fVar5 + fVar5) * fVar6 + 0.176;
        fVar5 = (fVar5 * fVar5 - fVar4) - 0.73;
      } while (fVar5 * fVar5 + fVar6 * fVar6 <= 1600.0);
      iVar2 = iVar2 + 1;
      fVar7 = fVar7 + (float)uVar1;
    } while (iVar2 < 0x100);
    iVar3 = iVar3 + 1;
    if (0xff < iVar3) {
      iVar3 = rand();
      return (float)iVar3 * 3.051851e-05 + fVar7 * 1.5258789e-05;
    }
  } while( true );
}



// FUNCTION 1421d0b20 FUN_1421d0b20 body=39 status=ok
// SIG undefined FUN_1421d0b20(void)

void FUN_1421d0b20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144fe4000;
    return;
  }
  return;
}



// FUNCTION 1421d0b50 RayIntersectBenchmark body=1251 status=ok
// SIG undefined RayIntersectBenchmark(void)

float RayIntersectBenchmark(void)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  
  uVar7 = 0x1234;
  iVar9 = 0;
  lVar10 = 200000;
  do {
    do {
      do {
        uVar7 = uVar7 * 0xbb38435 + 0x3619636b;
        fVar3 = (float)(uVar7 & 0x7fffff | 0x3f800000);
        uVar8 = uVar7 * 0xbb38435 + 0x3619636b;
        uVar7 = uVar8 * 0xbb38435 + 0x3619636b;
        fVar4 = (float)(uVar8 & 0x7fffff | 0x3f800000);
        fVar3 = fVar3 - (float)(int)fVar3;
        fVar5 = (float)(uVar7 & 0x7fffff | 0x3f800000);
        fVar4 = fVar4 - (float)(int)fVar4;
        fVar15 = (fVar3 + fVar3) - 1.0;
        fVar4 = (fVar4 + fVar4) - 1.0;
        fVar5 = fVar5 - (float)(int)fVar5;
        fVar5 = (fVar5 + fVar5) - 1.0;
        fVar3 = fVar4 * fVar4 + fVar15 * fVar15 + fVar5 * fVar5;
      } while (1.0 < fVar3);
    } while (fVar3 < 0.0001);
    auVar13 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
    fVar11 = auVar13._0_4_;
    fVar11 = fVar11 + fVar11 * (0.5 - fVar3 * 0.5 * fVar11 * fVar11);
    fVar11 = fVar11 + fVar11 * (0.5 - fVar3 * 0.5 * fVar11 * fVar11);
    fVar15 = fVar15 * fVar11 * 3.0;
    fVar3 = fVar4 * fVar11 * 3.0;
    fVar4 = fVar5 * fVar11 * 3.0;
    do {
      do {
        uVar7 = uVar7 * 0xbb38435 + 0x3619636b;
        fVar5 = (float)(uVar7 & 0x7fffff | 0x3f800000);
        uVar8 = uVar7 * 0xbb38435 + 0x3619636b;
        uVar7 = uVar8 * 0xbb38435 + 0x3619636b;
        fVar11 = (float)(uVar8 & 0x7fffff | 0x3f800000);
        fVar5 = fVar5 - (float)(int)fVar5;
        fVar6 = (float)(uVar7 & 0x7fffff | 0x3f800000);
        fVar11 = fVar11 - (float)(int)fVar11;
        fVar14 = (fVar5 + fVar5) - 1.0;
        fVar11 = (fVar11 + fVar11) - 1.0;
        fVar6 = fVar6 - (float)(int)fVar6;
        fVar6 = (fVar6 + fVar6) - 1.0;
        fVar5 = fVar11 * fVar11 + fVar14 * fVar14 + fVar6 * fVar6;
      } while (1.0 < fVar5);
    } while (fVar5 < 0.0001);
    auVar13 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
    fVar12 = auVar13._0_4_;
    fVar12 = fVar12 + fVar12 * (0.5 - fVar5 * 0.5 * fVar12 * fVar12);
    fVar12 = fVar12 + fVar12 * (0.5 - fVar5 * 0.5 * fVar12 * fVar12);
    fVar14 = fVar14 * fVar12 * 3.0 - fVar15;
    fVar6 = fVar6 * fVar12 * 3.0 - fVar4;
    fVar11 = fVar11 * fVar12 * 3.0 - fVar3;
    fVar5 = fVar11 * -1.9999999 * -2.0 - fVar11 * -2.0 * 2.1999998;
    if (fVar5 < 1e-05) {
LAB_1421d0fc2:
      bVar1 = false;
    }
    else {
      fVar15 = fVar15 - 0.1;
      fVar3 = fVar3 - 0.2;
      fVar4 = fVar4 - 2.3;
      fVar12 = fVar3 * (fVar6 * 1.9999999 - fVar14 * -2.0) + fVar15 * fVar11 * -2.0 +
               fVar4 * fVar11 * -1.9999999;
      if ((fVar12 < 0.0) || (fVar5 < fVar12)) goto LAB_1421d0fc2;
      fVar4 = fVar3 * 2.1999998 * fVar6 -
              ((fVar4 * 2.1999998 + fVar15 * -2.0) * fVar11 + fVar3 * 2.0 * fVar14);
      if ((fVar4 < 0.0) || (fVar5 < fVar4 + fVar12)) goto LAB_1421d0fc2;
      bVar1 = 0.0 <= (fVar3 * -3.9999998 - fVar3 * 2.1999998 * 2.0) / fVar5;
    }
    iVar2 = iVar9 + 1;
    if (!bVar1) {
      iVar2 = iVar9;
    }
    iVar9 = iVar2;
    lVar10 = lVar10 + -1;
    if (lVar10 == 0) {
      return (float)iVar9 * 5e-06;
    }
  } while( true );
}



// FUNCTION 1421d1040 FUN_1421d1040 body=226 status=ok
// SIG undefined FUN_1421d1040(void)

float * FUN_1421d1040(float *param_1,float param_2,code *param_3)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  ulonglong uVar4;
  float fVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  uVar3 = (uint)param_2;
  dVar2 = 0.0;
  if ((int)uVar3 < 2) {
    uVar3 = 1;
  }
  dVar1 = 0.0;
  if (uVar3 != 0) {
    uVar4 = (ulonglong)uVar3;
    do {
      QueryPerformanceCounter(&local_res8);
      dVar1 = (double)local_res8.QuadPart * DAT_1468b02f8;
      fVar5 = (float)(*param_3)();
      DAT_146aed654 = DAT_146aed654 + fVar5;
      QueryPerformanceCounter(&local_res20);
      dVar2 = dVar2 + ((double)local_res20.QuadPart * DAT_1468b02f8 - dVar1);
      uVar4 = uVar4 - 1;
      dVar1 = dVar2;
    } while (uVar4 != 0);
  }
  *param_1 = (float)dVar1;
  param_1[1] = (float)dVar1 / (float)uVar3;
  return param_1;
}



// FUNCTION 1421d1150 AddUniqueImpl<FGameplayTagRedirect_const_&> body=149 status=ok
// SIG undefined AddUniqueImpl<FGameplayTagRedirect_const_&>(void)

ulonglong TArray<FGameplayTagRedirect,FDefaultAllocator>::
          AddUniqueImpl<FGameplayTagRedirect_const_&>(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  plVar2 = (longlong *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  if (plVar2 != plVar2 + (longlong)(int)uVar1 * 2) {
    plVar4 = plVar2;
    do {
      if ((*plVar4 == *param_2) && (plVar4[1] == param_2[1])) {
        uVar5 = (longlong)plVar4 - (longlong)plVar2 >> 4;
        if ((int)uVar5 != -1) {
          return uVar5;
        }
        break;
      }
      plVar4 = plVar4 + 2;
    } while (plVar4 != plVar2 + (longlong)(int)uVar1 * 2);
  }
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar1 + 1)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,uVar1);
  }
  lVar3 = param_2[1];
  plVar2 = (longlong *)(*param_1 + (longlong)(int)uVar1 * 0x10);
  *plVar2 = *param_2;
  plVar2[1] = lVar3;
  return (ulonglong)uVar1;
}



// FUNCTION 1421d11f0 AddUniqueImpl<FGameplayTagTableRow> body=193 status=ok
// SIG undefined AddUniqueImpl<FGameplayTagTableRow>(void)

ulonglong TArray<FGameplayTagTableRow,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<FGameplayTagTableRow>(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar3 = *param_1;
  lVar1 = (longlong)(int)uVar2 * 0x20 + lVar3;
  if (lVar3 != lVar1) {
    lVar4 = lVar3;
    do {
      if (*(longlong *)(lVar4 + 8) == param_2[1]) {
        uVar5 = lVar4 - lVar3 >> 5;
        if ((int)uVar5 != -1) {
          return uVar5;
        }
        break;
      }
      lVar4 = lVar4 + 0x20;
    } while (lVar4 != lVar1);
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar2 + 1)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1,uVar2);
  }
  puVar6 = (undefined8 *)(*param_1 + (longlong)(int)uVar2 * 0x20);
  *puVar6 = &PTR_FUN_144fe7388;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  if (puVar6 != param_2) {
    puVar6[1] = param_2[1];
    FString::operator=(puVar6 + 2,param_2 + 2);
  }
  return (ulonglong)uVar2;
}



// FUNCTION 1421d12c0 FUN_1421d12c0 body=803 status=ok
// SIG undefined FUN_1421d12c0(void)

int * FUN_1421d12c0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  uint uVar15;
  longlong *_Src;
  void *_Dst;
  bool local_res8;
  
  iVar9 = 1;
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar4 = *(int *)((longlong)iVar11 * 0x20 + 4 + *param_1);
    iVar12 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)((longlong)iVar4 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar3 = *puVar3 | 1 << ((byte)iVar11 & 0x1f);
  _Src = (longlong *)((longlong)iVar11 * 0x20 + *param_1);
  plVar8 = (longlong *)param_3[1];
  *_Src = *(longlong *)*param_3;
  _Src[1] = *plVar8;
  lVar5 = plVar8[1];
  _Src[2] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar15 != 1) {
    iVar11 = iVar13;
    if (uVar15 != 0) {
      lVar5 = *_Src;
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar12 = *(int *)((longlong)plVar8 +
                       ((longlong)((int)((ulonglong)lVar5 >> 0x20) + (int)lVar5) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar12 != -1) {
        do {
          iVar11 = iVar12;
          if (*(longlong *)((longlong)iVar12 * 0x20 + *param_1) == lVar5) break;
          iVar12 = *(int *)((longlong)iVar12 * 0x20 + 0x18 + *param_1);
          iVar11 = iVar13;
        } while (iVar12 != -1);
      }
    }
    local_res8 = iVar11 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar11 * 0x20 + *param_1);
      plVar8 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar8 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      iVar9 = *param_2;
      bVar6 = (byte)iVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar9;
      }
      puVar10 = (undefined4 *)((longlong)iVar9 * 0x20 + *param_1);
      *puVar10 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      puVar10[1] = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar3 = (uint *)((longlong)plVar8 +
                       (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar3 = *puVar3 & ~(1 << bVar6 | 1U >> 0x20 - bVar6);
      goto LAB_1421d15ba;
    }
  }
  if (3 < uVar15) {
    uVar7 = (uVar15 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar9 = 0x20;
    if (uVar7 != 0) {
      iVar9 = 0x1f - iVar13;
    }
    uVar7 = (uVar15 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar7 == 0) {
      cVar14 = '\0';
    }
    else {
      cVar14 = '\x1f' - (char)iVar13;
    }
    iVar9 = 1 << (~(byte)((iVar9 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar15 = (int)((ulonglong)*_Src >> 0x20) + (int)*_Src & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar15;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<FName,TBaseDelegate<IModuleInterface_*>_>,TDefaultMapHashableKeyFuncs<FName,TBaseDelegate<IModuleInterface_*>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1421d15ba:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1421d15f0 FUN_1421d15f0 body=442 status=ok
// SIG undefined FUN_1421d15f0(void)

void FUN_1421d15f0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
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
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar5 = FGameplayTagTableRow::StaticStruct();
    lVar7 = *(longlong *)(param_1 + 0x28);
    if (lVar7 != 0) {
      while (lVar7 != lVar5) {
        lVar7 = *(longlong *)(lVar7 + 0x30);
        if (lVar7 == 0) {
          return;
        }
      }
      local_58 = 0;
      uStack_54 = 1;
      iVar1 = *(int *)(param_1 + 0x58);
      puStack_20 = (uint *)(param_1 + 0x40);
      local_48._4_4_ = 0;
      uStack_40 = 0;
      if (iVar1 != 0) {
        puVar8 = *(uint **)(param_1 + 0x50);
        if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
          puVar8 = puStack_20;
        }
        uVar2 = *puVar8;
        uStack_40 = 0;
        local_58 = 0;
        while (uVar2 == 0) {
          lVar7 = (longlong)local_58;
          uStack_40 = uStack_40 + 0x20;
          iVar6 = local_58 + 1;
          bVar4 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
          local_58 = iVar6;
          if (bVar4) goto LAB_1421d16ef;
          uVar2 = puVar8[lVar7 + 1];
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
LAB_1421d16ef:
          local_48._4_4_ = iVar1;
        }
      }
      uStack_18 = 0xffffffff;
      iStack_14 = local_48._4_4_;
      iStack_10 = uStack_40;
      uStack_c = iStack_3c;
      iStack_28 = local_58;
      uStack_24 = uStack_54;
      iStack_50 = local_58;
      uStack_4c = uStack_54;
      local_38 = uStack_40;
      uStack_34 = iStack_3c;
      uStack_40 = 0xffffffff;
      iStack_3c = local_48._4_4_;
      bVar4 = local_48._4_4_ < iVar1;
      local_30 = (longlong *)(param_1 + 0x30);
      local_48 = puStack_20;
      if (bVar4) {
        do {
          iVar1 = (int)param_3[1];
          uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8 + (longlong)iStack_3c * 0x18);
          *(int *)(param_3 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
          }
          *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) = uVar3;
          uStack_40 = uStack_40 & ~uStack_4c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
        } while (iStack_3c < (int)local_48[6]);
      }
    }
  }
  return;
}



// FUNCTION 1421d17b0 HeapSortInternal<TSharedPtr<FGameplayTagNode,0>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FGameplayTagNode,0>,FCompareFGameplayTagNodeByTag>_> body=663 status=ok
// SIG undefined HeapSortInternal<TSharedPtr<FGameplayTagNode,0>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FGameplayTagNode,0>,FCompareFGameplayTagNodeByTag>_>(void)

void AlgoImpl::
     HeapSortInternal<TSharedPtr<FGameplayTagNode,0>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FGameplayTagNode,0>,FCompareFGameplayTagNodeByTag>_>
               (undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int iVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  iVar10 = (param_2 + -2) / 2;
  if (-1 < iVar10) {
    iVar12 = iVar10 * 2 + 1;
    iVar1 = iVar12;
    iVar13 = iVar10;
joined_r0x0001421d17f6:
    do {
      if (iVar12 < param_2) {
        iVar12 = iVar10 * 2;
        iVar16 = iVar12 + 1;
        if (iVar12 + 2 < param_2) {
          if (*(int *)(param_1[(longlong)iVar16 * 2] + 0x10) < 1) {
            puVar14 = &DAT_146aed670;
          }
          else {
            puVar14 = *(undefined8 **)(param_1[(longlong)iVar16 * 2] + 8);
          }
          local_58 = *puVar14;
          if (*(int *)(param_1[((longlong)iVar12 + 2) * 2] + 0x10) < 1) {
            puVar14 = &DAT_146aed670;
          }
          else {
            puVar14 = *(undefined8 **)(param_1[((longlong)iVar12 + 2) * 2] + 8);
          }
          local_50 = *puVar14;
          iVar11 = FName::Compare(&local_50,&local_58);
          if (iVar11 < 0) {
            iVar16 = iVar12;
          }
          iVar16 = iVar16 + 1;
        }
        plVar17 = param_1 + (longlong)iVar16 * 2;
        if (*(int *)(*plVar17 + 0x10) < 1) {
          puVar14 = &DAT_146aed670;
        }
        else {
          puVar14 = *(undefined8 **)(*plVar17 + 8);
        }
        local_48 = *puVar14;
        plVar18 = param_1 + (longlong)iVar10 * 2;
        if (*(int *)(*plVar18 + 0x10) < 1) {
          puVar14 = &DAT_146aed670;
        }
        else {
          puVar14 = *(undefined8 **)(*plVar18 + 8);
        }
        local_40 = *puVar14;
        iVar10 = FName::Compare(&local_40,&local_48);
        if (iVar10 < 0) {
          if (plVar18 != plVar17) {
            uVar2 = *(undefined4 *)((longlong)plVar17 + 4);
            lVar9 = plVar17[1];
            uVar3 = *(undefined4 *)((longlong)plVar17 + 0xc);
            lVar5 = *plVar18;
            lVar6 = plVar18[1];
            *(int *)plVar18 = (int)*plVar17;
            *(undefined4 *)((longlong)plVar18 + 4) = uVar2;
            *(int *)(plVar18 + 1) = (int)lVar9;
            *(undefined4 *)((longlong)plVar18 + 0xc) = uVar3;
            *plVar17 = lVar5;
            plVar17[1] = lVar6;
          }
          iVar12 = iVar16 * 2 + 1;
          iVar10 = iVar16;
          goto joined_r0x0001421d17f6;
        }
      }
      iVar12 = iVar1 + -2;
      iVar10 = iVar13 + -1;
      iVar1 = iVar12;
      iVar13 = iVar10;
    } while (-1 < iVar10);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar14 = param_1 + (longlong)param_2 * 2;
    do {
      if (param_1 != puVar14) {
        uVar2 = *(undefined4 *)((longlong)puVar14 + 4);
        uVar3 = *(undefined4 *)(puVar14 + 1);
        uVar4 = *(undefined4 *)((longlong)puVar14 + 0xc);
        uVar7 = *param_1;
        uVar8 = param_1[1];
        *(undefined4 *)param_1 = *(undefined4 *)puVar14;
        *(undefined4 *)((longlong)param_1 + 4) = uVar2;
        *(undefined4 *)(param_1 + 1) = uVar3;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
        *puVar14 = uVar7;
        puVar14[1] = uVar8;
      }
      iVar10 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar10 * 2;
          iVar12 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            if (*(int *)(param_1[(longlong)iVar12 * 2] + 0x10) < 1) {
              puVar15 = &DAT_146aed670;
            }
            else {
              puVar15 = *(undefined8 **)(param_1[(longlong)iVar12 * 2] + 8);
            }
            local_40 = *puVar15;
            if (*(int *)(param_1[((longlong)iVar1 + 2) * 2] + 0x10) < 1) {
              puVar15 = &DAT_146aed670;
            }
            else {
              puVar15 = *(undefined8 **)(param_1[((longlong)iVar1 + 2) * 2] + 8);
            }
            local_48 = *puVar15;
            iVar13 = FName::Compare(&local_48,&local_40);
            if (iVar13 < 0) {
              iVar12 = iVar1;
            }
            iVar12 = iVar12 + 1;
          }
          plVar17 = param_1 + (longlong)iVar12 * 2;
          if (*(int *)(*plVar17 + 0x10) < 1) {
            puVar15 = &DAT_146aed670;
          }
          else {
            puVar15 = *(undefined8 **)(*plVar17 + 8);
          }
          local_50 = *puVar15;
          plVar18 = param_1 + (longlong)iVar10 * 2;
          if (*(int *)(*plVar18 + 0x10) < 1) {
            puVar15 = &DAT_146aed670;
          }
          else {
            puVar15 = *(undefined8 **)(*plVar18 + 8);
          }
          local_58 = *puVar15;
          iVar10 = FName::Compare(&local_58,&local_50);
          if (-1 < iVar10) break;
          if (plVar18 != plVar17) {
            uVar2 = *(undefined4 *)((longlong)plVar17 + 4);
            lVar9 = plVar17[1];
            uVar3 = *(undefined4 *)((longlong)plVar17 + 0xc);
            lVar5 = *plVar18;
            lVar6 = plVar18[1];
            *(int *)plVar18 = (int)*plVar17;
            *(undefined4 *)((longlong)plVar18 + 4) = uVar2;
            *(int *)(plVar18 + 1) = (int)lVar9;
            *(undefined4 *)((longlong)plVar18 + 0xc) = uVar3;
            *plVar17 = lVar5;
            plVar17[1] = lVar6;
          }
          iVar10 = iVar12;
        } while (iVar12 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar14 = puVar14 + -2;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1421d1a50 IntroSortInternal<TSharedPtr<FGameplayTagNode,0>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FGameplayTagNode,0>,FCompareFGameplayTagNodeByTag>_> body=951 status=ok
// SIG undefined IntroSortInternal<TSharedPtr<FGameplayTagNode,0>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FGameplayTagNode,0>,FCompareFGameplayTagNodeByTag>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<TSharedPtr<FGameplayTagNode,0>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FGameplayTagNode,0>,FCompareFGameplayTagNodeByTag>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  float fVar16;
  undefined1 auStack_3b8 [32];
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370 [3];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3b8;
    lStack_340 = param_2 * 0x10 + -0x10 + param_1;
    fVar16 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar16 = fVar16 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar16 = ::_guard_xfg_dispatch_icall_nop(fVar16);
    local_338 = (undefined4)(longlong)(fVar16 + fVar16);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar10 = &local_348;
    do {
      plVar15 = (longlong *)*plVar10;
      plVar11 = (longlong *)plVar10[1];
      local_358 = plVar10[2];
      lVar7 = ((longlong)plVar11 - (longlong)plVar15 >> 4) + 1;
      plVar14 = plVar15;
      iVar8 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_1421d1b40:
        if (8 < lVar7) {
          plVar15 = plVar14 + (lVar7 / 2) * 2;
          if (plVar15 != plVar14) {
            uVar2 = *(undefined4 *)((longlong)plVar14 + 4);
            lVar4 = plVar14[1];
            uVar3 = *(undefined4 *)((longlong)plVar14 + 0xc);
            lVar7 = *plVar15;
            lVar1 = plVar15[1];
            *(int *)plVar15 = (int)*plVar14;
            *(undefined4 *)((longlong)plVar15 + 4) = uVar2;
            *(int *)(plVar15 + 1) = (int)lVar4;
            *(undefined4 *)((longlong)plVar15 + 0xc) = uVar3;
            *plVar14 = lVar7;
            plVar14[1] = lVar1;
          }
          plVar12 = plVar11 + 2;
          plVar15 = plVar14;
LAB_1421d1b76:
          plVar9 = plVar15;
          plVar15 = plVar9 + 2;
          if (plVar15 <= plVar11) goto code_r0x0001421d1b7f;
          goto LAB_1421d1bd0;
        }
        for (; plVar12 = plVar14, plVar15 = plVar14, plVar14 < plVar11; plVar11 = plVar11 + -2) {
          while (plVar15 = plVar15 + 2, plVar15 <= plVar11) {
            if (*(int *)(*plVar15 + 0x10) < 1) {
              puVar6 = &DAT_146aed670;
            }
            else {
              puVar6 = *(undefined8 **)(*plVar15 + 8);
            }
            local_378 = *puVar6;
            if (*(int *)(*plVar12 + 0x10) < 1) {
              puVar6 = &DAT_146aed670;
            }
            else {
              puVar6 = *(undefined8 **)(*plVar12 + 8);
            }
            local_370[0] = *puVar6;
            iVar8 = FName::Compare(local_370,&local_378);
            if (iVar8 < 0) {
              plVar12 = plVar15;
            }
          }
          if (plVar12 != plVar11) {
            uVar2 = *(undefined4 *)((longlong)plVar11 + 4);
            lVar4 = plVar11[1];
            uVar3 = *(undefined4 *)((longlong)plVar11 + 0xc);
            lVar7 = *plVar12;
            lVar1 = plVar12[1];
            *(int *)plVar12 = (int)*plVar11;
            *(undefined4 *)((longlong)plVar12 + 4) = uVar2;
            *(int *)(plVar12 + 1) = (int)lVar4;
            *(undefined4 *)((longlong)plVar12 + 0xc) = uVar3;
            *plVar11 = lVar7;
            plVar11[1] = lVar1;
          }
        }
        goto LAB_1421d1cff;
      }
LAB_1421d1cf0:
      HeapSortInternal<TSharedPtr<FGameplayTagNode,0>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FGameplayTagNode,0>,FCompareFGameplayTagNodeByTag>_>
                (plVar15,lVar7,param_3,param_4);
LAB_1421d1cff:
      plVar10 = plVar10 + -3;
    } while (&local_348 <= plVar10);
  }
  return;
code_r0x0001421d1b7f:
  if (*(int *)(*plVar15 + 0x10) < 1) {
    puVar6 = &DAT_146aed670;
  }
  else {
    puVar6 = *(undefined8 **)(*plVar15 + 8);
  }
  local_398 = *puVar6;
  if (*(int *)(*plVar14 + 0x10) < 1) {
    puVar6 = &DAT_146aed670;
  }
  else {
    puVar6 = *(undefined8 **)(*plVar14 + 8);
  }
  local_390 = *puVar6;
  iVar5 = FName::Compare(&local_390,&local_398);
  if (-1 < iVar5) goto LAB_1421d1b76;
LAB_1421d1bd0:
  do {
    plVar13 = plVar12;
    plVar12 = plVar13 + -2;
    if (plVar12 <= plVar14) break;
    if (*(int *)(*plVar14 + 0x10) < 1) {
      puVar6 = &DAT_146aed670;
    }
    else {
      puVar6 = *(undefined8 **)(*plVar14 + 8);
    }
    local_388 = *puVar6;
    if (*(int *)(*plVar12 + 0x10) < 1) {
      puVar6 = &DAT_146aed670;
    }
    else {
      puVar6 = *(undefined8 **)(*plVar12 + 8);
    }
    local_380 = *puVar6;
    iVar5 = FName::Compare(&local_380,&local_388);
  } while (-1 < iVar5);
  if (plVar15 <= plVar12) {
    if (plVar15 != plVar12) {
      uVar2 = *(undefined4 *)((longlong)plVar13 + -0xc);
      lVar4 = plVar13[-1];
      uVar3 = *(undefined4 *)((longlong)plVar13 + -4);
      lVar7 = *plVar15;
      lVar1 = plVar9[3];
      *(int *)plVar15 = (int)*plVar12;
      *(undefined4 *)((longlong)plVar9 + 0x14) = uVar2;
      *(int *)(plVar9 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)plVar9 + 0x1c) = uVar3;
      *plVar12 = lVar7;
      plVar13[-1] = lVar1;
    }
    goto LAB_1421d1b76;
  }
  if (plVar14 != plVar12) {
    uVar2 = *(undefined4 *)((longlong)plVar13 + -0xc);
    lVar4 = plVar13[-1];
    uVar3 = *(undefined4 *)((longlong)plVar13 + -4);
    lVar7 = *plVar14;
    lVar1 = plVar14[1];
    *(int *)plVar14 = (int)*plVar12;
    *(undefined4 *)((longlong)plVar14 + 4) = uVar2;
    *(int *)(plVar14 + 1) = (int)lVar4;
    *(undefined4 *)((longlong)plVar14 + 0xc) = uVar3;
    *plVar12 = lVar7;
    plVar13[-1] = lVar1;
  }
  iVar8 = iVar8 + -1;
  if ((longlong)((longlong)plVar12 + (-0x10 - (longlong)plVar14) & 0xfffffffffffffff0U) <
      (longlong)((longlong)plVar11 - (longlong)plVar15 & 0xfffffffffffffff0U)) {
    if (plVar15 < plVar11) {
      *plVar10 = (longlong)plVar15;
      plVar10[1] = (longlong)plVar11;
      *(int *)(plVar10 + 2) = iVar8;
      plVar10 = plVar10 + 3;
    }
    if (plVar12 <= plVar14 + 2) goto LAB_1421d1cff;
    plVar11 = plVar13 + -4;
    plVar15 = plVar14;
  }
  else {
    if (plVar14 + 2 < plVar12) {
      *plVar10 = (longlong)plVar14;
      plVar10[1] = (longlong)(plVar13 + -4);
      *(int *)(plVar10 + 2) = iVar8;
      plVar10 = plVar10 + 3;
    }
    if (plVar11 <= plVar15) goto LAB_1421d1cff;
  }
  lVar7 = ((longlong)plVar11 - (longlong)plVar15 >> 4) + 1;
  plVar14 = plVar15;
  if (iVar8 == 0) goto LAB_1421d1cf0;
  goto LAB_1421d1b40;
}



// FUNCTION 1421d1e10 FUN_1421d1e10 body=868 status=ok
// SIG undefined FUN_1421d1e10(void)

undefined8 * FUN_1421d1e10(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  void **ppvVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined1 local_b8 [8];
  void *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined2 *local_80;
  int local_78;
  undefined4 local_74;
  undefined2 *local_70;
  undefined8 local_68;
  undefined2 *local_60;
  int local_58;
  longlong local_50 [3];
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = *param_3;
  lVar11 = param_3[1];
  param_1[8] = lVar11;
  if (lVar11 != 0) {
    LOCK();
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    UNLOCK();
  }
  local_b0 = (void *)0x0;
  *(undefined2 *)(param_1 + 9) = 0xffff;
  plVar5 = (longlong *)param_3[1];
  plVar6 = (longlong *)*param_3;
  local_a8 = 0;
  local_res10 = param_2;
  uVar8 = local_a8;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  while ((local_res18 = param_3, local_a0 = plVar6, local_98 = plVar5, plVar6 != (longlong *)0x0 &&
         (*plVar6 != 0))) {
    if ((int)plVar6[2] < 1) {
      puVar10 = &DAT_146aed670;
    }
    else {
      puVar10 = (undefined8 *)plVar6[1];
    }
    local_a8._0_4_ = (int)uVar8;
    lVar11 = (longlong)(int)local_a8;
    local_a8._0_4_ = (int)local_a8 + 1;
    local_a8._4_4_ = (int)(uVar8 >> 0x20);
    if (local_a8._4_4_ < (int)local_a8) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_b0,uVar8 & 0xffffffff);
    }
    *(undefined8 *)((longlong)local_b0 + lVar11 * 8) = *puVar10;
    local_88 = (longlong *)plVar6[8];
    local_a0 = (longlong *)plVar6[7];
    if (local_88 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_88 + 1) = (int)local_88[1] + 1;
      UNLOCK();
    }
    local_90 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_98,&local_88);
    plVar9 = local_88;
    plVar5 = local_98;
    plVar6 = local_a0;
    param_3 = local_res18;
    uVar8 = local_a8;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_88 + 1;
      lVar11 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar5 = local_98;
        plVar6 = local_a0;
        param_3 = local_res18;
        uVar8 = local_a8;
        if (iVar4 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
          plVar5 = local_98;
          plVar6 = local_a0;
          param_3 = local_res18;
          uVar8 = local_a8;
        }
      }
    }
  }
  local_a8 = uVar8;
  FName::ToString(&local_res10,&local_80);
  if (0 < (int)local_a8) {
    puVar10 = (undefined8 *)FName::ToString(&local_res10,local_50);
    if (*(int *)(puVar10 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*puVar10;
    }
    FName::ToString(local_b0,&local_60);
    puVar13 = &DAT_143f3eda8;
    if (local_58 != 0) {
      puVar13 = local_60;
    }
    FString::PrintfImpl(&local_70,L"%s.%s",puVar13,puVar12);
    if (local_80 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_80 = local_70;
    local_78 = (int)local_68;
    local_74 = local_68._4_4_;
    local_68 = 0;
    local_70 = (undefined2 *)0x0;
    if (local_60 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_50[0] != 0) {
      FMemory::Free();
    }
  }
  puVar12 = &DAT_143f3eda8;
  if (local_78 != 0) {
    puVar12 = local_80;
  }
  puVar10 = (undefined8 *)FName::FName(local_b8,puVar12,1);
  iVar4 = *(int *)(param_1 + 2);
  uVar7 = *puVar10;
  *(int *)(param_1 + 2) = iVar4 + 1;
  if (*(int *)((longlong)param_1 + 0x14) < iVar4 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 1,iVar4);
  }
  *(undefined8 *)(param_1[1] + (longlong)iVar4 * 8) = uVar7;
  ppvVar3 = (void **)(param_1 + 3);
  if (ppvVar3 != &local_b0) {
    *(int *)(param_1 + 4) = (int)local_a8;
    if (((int)local_a8 == 0) && (*(int *)((longlong)param_1 + 0x24) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    }
    else {
      lVar11 = (longlong)(int)local_a8;
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                (ppvVar3,local_a8 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop(*ppvVar3,local_b0,lVar11 << 3);
    }
  }
  if (local_80 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  plVar6 = local_98;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar5 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
  if (local_b0 != (void *)0x0) {
    FMemory::Free();
  }
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar5 + 1;
    lVar11 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return param_1;
}



// FUNCTION 1421d2180 FGameplayTagQuery body=309 status=ok
// SIG undefined FGameplayTagQuery(void)

undefined4 * FGameplayTagQuery::FGameplayTagQuery(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar1 = (longlong *)(param_1 + 2);
  *plVar1 = 0;
  plVar2 = (longlong *)(param_1 + 6);
  *(undefined8 *)(param_1 + 4) = 0;
  plVar3 = (longlong *)(param_1 + 10);
  *plVar2 = 0;
  plVar4 = (longlong *)(param_1 + 0xe);
  *(undefined8 *)(param_1 + 8) = 0;
  plVar5 = (longlong *)(param_2 + 2);
  *plVar3 = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *plVar4 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = *param_2;
  if (plVar1 != plVar5) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar5;
    *plVar5 = 0;
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    *(undefined8 *)(param_2 + 4) = 0;
  }
  plVar1 = (longlong *)(param_2 + 6);
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    *(undefined8 *)(param_2 + 8) = 0;
  }
  plVar1 = (longlong *)(param_2 + 10);
  if (plVar3 != plVar1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    *plVar3 = *plVar1;
    *plVar1 = 0;
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    *(undefined8 *)(param_2 + 0xc) = 0;
  }
  plVar1 = (longlong *)(param_2 + 0xe);
  if (plVar4 != plVar1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    *plVar4 = *plVar1;
    *plVar1 = 0;
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  return param_1;
}



// FUNCTION 1421d22c0 FGameplayTagQuery body=57 status=ok
// SIG undefined FGameplayTagQuery(void)

longlong FGameplayTagQuery::FGameplayTagQuery(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  operator=();
  return param_1;
}



// FUNCTION 1421d2300 FGameplayTagQuery body=40 status=ok
// SIG undefined FGameplayTagQuery(void)

undefined4 * FGameplayTagQuery::FGameplayTagQuery(undefined4 *param_1)

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
  return param_1;
}



// FUNCTION 1421d2330 UGameplayTagsDeveloperSettings body=43 status=ok
// SIG undefined UGameplayTagsDeveloperSettings(void)

undefined8 * UGameplayTagsDeveloperSettings::UGameplayTagsDeveloperSettings(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1440f3148;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 1421d2360 FUN_1421d2360 body=51 status=ok
// SIG undefined FUN_1421d2360(void)

undefined8 * FUN_1421d2360(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__144fe7660;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 1421d23a0 UGameplayTagsManager body=302 status=ok
// SIG undefined UGameplayTagsManager(void)

undefined8 * UGameplayTagsManager::UGameplayTagsManager(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_144fe73e8;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10a) = 0;
  *(undefined2 *)(param_1 + 0x21) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x10;
  *(undefined4 *)(param_1 + 5) = 0x10;
  *(undefined4 *)(param_1 + 6) = 6;
  return param_1;
}



// FUNCTION 1421d24d0 UGameplayTagsSettings body=242 status=ok
// SIG undefined UGameplayTagsSettings(void)

undefined8 * UGameplayTagsSettings::UGameplayTagsSettings(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong local_18 [2];
  
  FUN_141781840();
  plVar1 = param_1 + 5;
  *plVar1 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144fe7b50;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  plVar2 = (longlong *)UObject::GetDefaultConfigFilename(param_1,local_18);
  if (plVar1 != plVar2) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar2;
    *plVar2 = 0;
    *(int *)(param_1 + 6) = (int)plVar2[1];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)plVar2 + 0xc);
    plVar2[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 9) = 0x101;
  *(undefined4 *)(param_1 + 0x13) = 6;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x10;
  return param_1;
}



// FUNCTION 1421d25d0 FUN_1421d25d0 body=51 status=ok
// SIG undefined FUN_1421d25d0(void)

undefined8 * FUN_1421d25d0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__144fe78d8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 1421d2610 FUN_1421d2610 body=99 status=ok
// SIG undefined FUN_1421d2610(void)

void FUN_1421d2610(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 8;
    do {
      FUN_140591050(lVar1 + 0x10);
      FUN_1421d2610(lVar1);
      lVar1 = lVar1 + 0x28;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1421d2680 ~TArray<FGameplayTagTableRow,FDefaultAllocator> body=116 status=ok
// SIG undefined ~TArray<FGameplayTagTableRow,FDefaultAllocator>(void)

void TArray<FGameplayTagTableRow,FDefaultAllocator>::~TArray<FGameplayTagTableRow,FDefaultAllocator>
               (undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      if (puVar1[2] != 0) {
        FMemory::Free();
      }
      *puVar1 = &PTR_FUN_1440780a8;
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = (undefined8 *)*param_1;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar1);
  return;
}



// FUNCTION 1421d2700 ~TArray<FRestrictedGameplayTagTableRow,FDefaultAllocator> body=116 status=ok
// SIG undefined ~TArray<FRestrictedGameplayTagTableRow,FDefaultAllocator>(void)

void TArray<FRestrictedGameplayTagTableRow,FDefaultAllocator>::
     ~TArray<FRestrictedGameplayTagTableRow,FDefaultAllocator>(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      if (puVar1[2] != 0) {
        FMemory::Free();
      }
      *puVar1 = &PTR_FUN_1440780a8;
      puVar1 = puVar1 + 5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = (undefined8 *)*param_1;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar1);
  return;
}



// FUNCTION 1421d2780 ~TArray<FNetFieldExport,FDefaultAllocator> body=109 status=ok
// SIG undefined ~TArray<FNetFieldExport,FDefaultAllocator>(void)

void TArray<FNetFieldExport,FDefaultAllocator>::~TArray<FNetFieldExport,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x18);
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 8;
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



// FUNCTION 1421d27f0 FUN_1421d27f0 body=146 status=ok
// SIG undefined FUN_1421d27f0(void)

longlong * FUN_1421d27f0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
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
  return param_1;
}



// FUNCTION 1421d2890 operator= body=230 status=ok
// SIG undefined operator=(void)

longlong * FGameplayTagContainer::operator=(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_1 != param_2) {
    lVar2 = param_2[1];
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != (int)lVar2) {
      TArray<void_*,FDefaultAllocator>::ResizeTo();
    }
    iVar1 = (int)param_2[1];
    if (iVar1 != 0) {
      iVar3 = (int)param_1[1];
      if (*(int *)((longlong)param_1 + 0xc) < iVar3 + iVar1) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1);
        iVar3 = (int)param_1[1];
      }
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)iVar3 * 8),(void *)*param_2,(longlong)iVar1 << 3);
      *(int *)(param_1 + 1) = (int)param_1[1] + iVar1;
    }
    lVar2 = param_2[3];
    *(undefined4 *)(param_1 + 3) = 0;
    if (*(int *)((longlong)param_1 + 0x1c) != (int)lVar2) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 2);
    }
    iVar1 = (int)param_2[3];
    if (iVar1 != 0) {
      iVar3 = (int)param_1[3];
      if (*(int *)((longlong)param_1 + 0x1c) < iVar3 + iVar1) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 2);
        iVar3 = (int)param_1[3];
      }
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(param_1[2] + (longlong)iVar3 * 8),(void *)param_2[2],(longlong)iVar1 << 3)
      ;
      *(int *)(param_1 + 3) = (int)param_1[3] + iVar1;
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 1421d2980 operator= body=272 status=ok
// SIG undefined operator=(void)

undefined4 * FGameplayTagQuery::operator=(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)(param_2 + 2);
  plVar2 = (longlong *)(param_1 + 2);
  *param_1 = *param_2;
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    *(undefined8 *)(param_2 + 4) = 0;
  }
  plVar1 = (longlong *)(param_2 + 6);
  plVar2 = (longlong *)(param_1 + 6);
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    *(undefined8 *)(param_2 + 8) = 0;
  }
  plVar1 = (longlong *)(param_2 + 10);
  plVar2 = (longlong *)(param_1 + 10);
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    *(undefined8 *)(param_2 + 0xc) = 0;
  }
  plVar1 = (longlong *)(param_2 + 0xe);
  plVar2 = (longlong *)(param_1 + 0xe);
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  return param_1;
}



// FUNCTION 1421d2a90 operator= body=177 status=ok
// SIG undefined operator=(void)

undefined4 * FGameplayTagQuery::operator=(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    TArray<FName,FDefaultAllocator>::operator=(param_1 + 2,param_2 + 2);
    puVar1 = (undefined8 *)(param_1 + 6);
    if (puVar1 != (undefined8 *)(param_2 + 6)) {
      iVar2 = param_2[8];
      _Src = *(void **)(param_2 + 6);
      param_1[8] = iVar2;
      if ((iVar2 == 0) && (param_1[9] == 0)) {
        param_1[9] = 0;
      }
      else {
        TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2);
      }
    }
    FString::operator=(param_1 + 10,param_2 + 10);
    FString::operator=(param_1 + 0xe,param_2 + 0xe);
  }
  return param_1;
}



// FUNCTION 1421d2b50 operator= body=44 status=ok
// SIG undefined operator=(void)

longlong FGameplayTagTableRow::operator=(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    FString::operator=(param_1 + 0x10,param_2 + 0x10);
  }
  return param_1;
}



// FUNCTION 1421d2b80 operator= body=63 status=ok
// SIG undefined operator=(void)

longlong FRestrictedGameplayTagTableRow::operator=(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    FString::operator=(param_1 + 0x10,param_2 + 0x10);
    *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  }
  return param_1;
}



// FUNCTION 1421d2bc0 operator== body=236 status=ok
// SIG undefined operator==(void)

ulonglong FGameplayTagContainer::operator==(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong in_RAX;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong local_28 [4];
  
  iVar5 = (int)param_1[1];
  if (iVar5 != (int)param_2[1]) {
    return in_RAX & 0xffffffffffffff00;
  }
  plVar6 = (longlong *)*param_1;
  iVar7 = 0;
  local_28[0] = 0;
  plVar1 = plVar6 + iVar5;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  if (plVar6 != plVar1) {
    do {
      if ((int)param_2[1] != 0) {
        plVar4 = (longlong *)*param_2;
        plVar2 = plVar4 + (int)param_2[1];
        if (plVar4 != plVar2) {
          do {
            if (*plVar4 == *plVar6) {
              FUN_1421d33b0(local_28,plVar6);
              break;
            }
            plVar4 = plVar4 + 1;
          } while (plVar4 != plVar2);
        }
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
    iVar5 = (int)param_1[1];
    iVar7 = (int)local_28[1];
  }
  lVar3 = local_28[0];
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (lVar3 != 0) {
    FMemory::Free(lVar3);
  }
  return (ulonglong)(iVar7 == iVar5);
}



// FUNCTION 1421d2cb0 `scalar_deleting_destructor' body=161 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FGameplayTagNode::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

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
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1421d2d60 FUN_1421d2d60 body=72 status=ok
// SIG undefined FUN_1421d2d60(void)

undefined8 * FUN_1421d2d60(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1421d2db0 FUN_1421d2db0 body=72 status=ok
// SIG undefined FUN_1421d2db0(void)

undefined8 * FUN_1421d2db0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1421d2e00 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UGameplayTagsList::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TArray<FGameplayTagTableRow,FDefaultAllocator>::~TArray<FGameplayTagTableRow,FDefaultAllocator>
            (param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1421d2e50 FUN_1421d2e50 body=337 status=ok
// SIG undefined FUN_1421d2e50(void)

undefined8 * FUN_1421d2e50(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144fe73e8;
  FUN_1421d54b0();
  DAT_146aed668 = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  if (param_1[0x30] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x28);
  if (param_1[0x26] != 0) {
    FMemory::Free();
  }
  if (param_1[0x24] != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x22);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x17);
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 9);
  plVar4 = (longlong *)param_1[8];
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
    FMemory::operator_delete(param_1,400);
  }
  return param_1;
}



// FUNCTION 1421d2fb0 `scalar_deleting_destructor' body=140 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UGameplayTagsSettings::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TArray<FGameplayTagCategoryRemap,FDefaultAllocator>::
  ~TArray<FGameplayTagCategoryRemap,FDefaultAllocator>(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x68);
  TArray<FGameplayTagCategoryRemap,FDefaultAllocator>::
  ~TArray<FGameplayTagCategoryRemap,FDefaultAllocator>(param_1 + 0x50);
  TArray<FGameplayTagTableRow,FDefaultAllocator>::~TArray<FGameplayTagTableRow,FDefaultAllocator>
            (param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1421d3040 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong URestrictedGameplayTagsList::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  TArray<FRestrictedGameplayTagTableRow,FDefaultAllocator>::
  ~TArray<FRestrictedGameplayTagTableRow,FDefaultAllocator>(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1421d3090 AddChildrenTags body=361 status=ok
// SIG undefined AddChildrenTags(void)

void UGameplayTagsManager::AddChildrenTags
               (undefined8 param_1,undefined8 param_2,longlong *param_3,char param_4,
               undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong local_48;
  longlong *local_40;
  
  lVar4 = *param_3;
  if (lVar4 != 0) {
    plVar7 = *(longlong **)(lVar4 + 0x28);
    plVar8 = plVar7 + (longlong)*(int *)(lVar4 + 0x30) * 2;
    for (; plVar7 != plVar8; plVar7 = plVar7 + 2) {
      plVar5 = (longlong *)plVar7[1];
      lVar4 = *plVar7;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x10) < 1) {
          puVar6 = &DAT_146aed670;
        }
        else {
          puVar6 = *(undefined8 **)(lVar4 + 8);
        }
        FUN_1421d3220(param_2,puVar6);
        if (param_4 != '\0') {
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          local_48 = lVar4;
          local_40 = plVar5;
          AddChildrenTags(param_1,param_2,&local_48,1,param_5);
        }
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
  }
  plVar7 = (longlong *)param_3[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
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
  return;
}



// FUNCTION 1421d3200 AddGameplayTag body=24 status=ok
// SIG undefined AddGameplayTag(void)

void UBlueprintGameplayTagLibrary::AddGameplayTag(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_1421d3220(param_1,local_res10);
  return;
}



// FUNCTION 1421d3220 FUN_1421d3220 body=399 status=ok
// SIG undefined FUN_1421d3220(void)

void FUN_1421d3220(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*param_2 != 0) {
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>();
    if (DAT_146aed668 == 0) {
      FUN_1421d75c0();
    }
    if (*(int *)(DAT_146aed668 + 0x50) != *(int *)(DAT_146aed668 + 0x7c)) {
      lVar2 = *param_2;
      lVar5 = *(longlong *)(DAT_146aed668 + 0x88);
      if (*(longlong *)(DAT_146aed668 + 0x88) == 0) {
        lVar5 = DAT_146aed668 + 0x80;
      }
      iVar3 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                               (longlong)*(int *)(DAT_146aed668 + 0x90) - 1U) * 4);
      if (iVar3 != -1) {
        do {
          plVar6 = (longlong *)((longlong)iVar3 * 0x20 + *(longlong *)(DAT_146aed668 + 0x48));
          if (*plVar6 == lVar2) {
            if (iVar3 != -1) goto LAB_1421d32d2;
            break;
          }
          iVar3 = (int)plVar6[3];
        } while (iVar3 != -1);
      }
    }
    plVar6 = (longlong *)0x0;
LAB_1421d32d2:
    plVar4 = plVar6 + 1;
    if (plVar6 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    if (plVar4 != (longlong *)0x0) {
      lVar2 = *plVar4;
      plVar6 = (longlong *)plVar4[1];
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      if (lVar2 == 0) {
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar6 + 1;
          lVar2 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
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
      }
      else {
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar6 + 1;
          lVar5 = *plVar4;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
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
        if (lVar2 != -8) {
          lVar5 = *(longlong *)(lVar2 + 0x18);
          lVar2 = lVar5 + (longlong)*(int *)(lVar2 + 0x20) * 8;
          for (; lVar5 != lVar2; lVar5 = lVar5 + 8) {
            TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
            AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x10,lVar5);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1421d33b0 FUN_1421d33b0 body=415 status=ok
// SIG undefined FUN_1421d33b0(void)

void FUN_1421d33b0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  iVar3 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  *(longlong *)(*param_1 + (longlong)iVar3 * 8) = *param_2;
  if (DAT_146aed668 == 0) {
    FUN_1421d75c0();
  }
  if (*(int *)(DAT_146aed668 + 0x50) != *(int *)(DAT_146aed668 + 0x7c)) {
    lVar2 = *param_2;
    lVar5 = *(longlong *)(DAT_146aed668 + 0x88);
    if (*(longlong *)(DAT_146aed668 + 0x88) == 0) {
      lVar5 = DAT_146aed668 + 0x80;
    }
    iVar3 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                             (longlong)*(int *)(DAT_146aed668 + 0x90) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar3 * 0x20 + *(longlong *)(DAT_146aed668 + 0x48));
        if (*plVar6 == lVar2) {
          if (iVar3 != -1) goto LAB_1421d3472;
          break;
        }
        iVar3 = (int)plVar6[3];
      } while (iVar3 != -1);
    }
  }
  plVar6 = (longlong *)0x0;
LAB_1421d3472:
  plVar4 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  if (plVar4 != (longlong *)0x0) {
    lVar2 = *plVar4;
    plVar6 = (longlong *)plVar4[1];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    if (lVar2 == 0) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar6 + 1;
        lVar2 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
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
    }
    else {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar6 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      if (lVar2 != -8) {
        lVar5 = *(longlong *)(lVar2 + 0x18);
        lVar2 = lVar5 + (longlong)*(int *)(lVar2 + 0x20) * 8;
        for (; lVar5 != lVar2; lVar5 = lVar5 + 8) {
          TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
          AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 2,lVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 1421d3550 FUN_1421d3550 body=683 status=ok
// SIG undefined FUN_1421d3550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1421d3550(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong local_110;
  undefined1 local_108;
  char local_100;
  undefined1 local_f8;
  undefined1 local_e8;
  char local_e7;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [8];
  longlong local_80 [3];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  ulonglong uVar12;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  plVar7 = *(longlong **)(param_1 + 0x40);
  local_d8 = *(longlong *)(param_1 + 0x38);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  uVar10 = 0;
  local_e8 = 1;
  local_98 = 0;
  local_90 = 0;
  if ((param_4 != '\0') && (param_2 != 0)) {
    local_e8 = *(undefined1 *)(param_2 + 0x20);
  }
  local_c8 = (longlong *)0x0;
  local_c0 = 0;
  local_e7 = param_4;
  uStack_d0 = plVar7;
  local_a0 = param_1;
  uVar5 = FName::ToString(param_2 + 8,local_80);
  FUN_141594550(uVar5,&local_c8,&DAT_144fe51ac,1);
  if (local_80[0] != 0) {
    FMemory::Free();
  }
  iVar9 = (int)local_c0;
  plVar4 = local_c8;
  if (0 < (int)local_c0) {
    local_a8 = param_2 + 0x10;
    uVar12 = uVar10;
    do {
      lVar3 = local_d8;
      iVar9 = (int)local_c0 + -1;
      local_68 = (undefined4)local_d8;
      uStack_64 = local_d8._4_4_;
      uStack_60 = (undefined4)uStack_d0;
      uStack_5c = uStack_d0._4_4_;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      if (*(int *)(uVar10 + 8 + (longlong)local_c8) == 0) {
        puVar8 = &DAT_143f3eda8;
      }
      else {
        puVar8 = *(undefined2 **)(uVar10 + (longlong)local_c8);
      }
      puVar6 = (undefined8 *)FName::FName(local_88,puVar8,1);
      local_f8 = local_e8;
      local_100 = local_e7;
      local_110 = local_a8;
      local_118 = param_3;
      local_108 = (int)uVar12 == iVar9;
      iVar9 = FUN_1421d7b40(local_a0,*puVar6,&local_68,lVar3 + 0x28);
      plVar4 = uStack_d0;
      plVar7 = (longlong *)((longlong)iVar9 * 0x10 + *(longlong *)(lVar3 + 0x28));
      lVar3 = *plVar7;
      plVar7 = (longlong *)plVar7[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      local_b8._0_4_ = (undefined4)lVar3;
      local_58 = (undefined4)local_b8;
      local_b8._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
      uStack_54 = local_b8._4_4_;
      uStack_b0._0_4_ = SUB84(plVar7,0);
      uStack_50 = (undefined4)uStack_b0;
      uStack_b0._4_4_ = (undefined4)((ulonglong)plVar7 >> 0x20);
      uStack_4c = uStack_b0._4_4_;
      local_b8 = local_d8;
      uStack_b0 = uStack_d0;
      local_d8 = lVar3;
      if (uStack_d0 != (longlong *)0x0) {
        LOCK();
        plVar1 = uStack_d0 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          puVar6 = (undefined8 *)*uStack_d0;
          uStack_d0 = plVar7;
          (*(code *)*puVar6)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          plVar7 = uStack_d0;
          if (iVar9 == 1) {
            (**(code **)(*uStack_b0 + 8))(uStack_b0,1);
            plVar7 = uStack_d0;
          }
        }
      }
      uStack_d0 = plVar7;
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      uVar10 = uVar10 + 0x10;
      plVar7 = uStack_d0;
      iVar9 = (int)local_c0;
      plVar4 = local_c8;
    } while ((int)uVar11 < (int)local_c0);
  }
  for (; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free(local_c8);
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_98);
  plVar4 = uStack_d0;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar7 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*uStack_d0)(uStack_d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar9 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*uStack_d0 + 8))(uStack_d0,1);
      }
    }
  }
  return;
}



// FUNCTION 1421d3800 AppendGameplayTagContainers body=5 status=ok
// SIG undefined AppendGameplayTagContainers(void)

void UBlueprintGameplayTagLibrary::AppendGameplayTagContainers(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8) + (int)param_2[1]) {
    TArray<void_*,FDefaultAllocator>::ResizeTo();
  }
  if (*(int *)(param_1 + 0x1c) < (int)param_2[3] + *(int *)(param_1 + 0x18)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x10);
  }
  lVar2 = *param_2;
  lVar1 = lVar2 + (longlong)(int)param_2[1] * 8;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 8) {
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1,lVar2);
  }
  lVar2 = param_2[2];
  lVar1 = lVar2 + (longlong)(int)param_2[3] * 8;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 8) {
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x10,lVar2);
  }
  return;
}



// FUNCTION 1421d3810 AppendTags body=180 status=ok
// SIG undefined AppendTags(void)

void FGameplayTagContainer::AppendTags(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8) + (int)param_2[1]) {
    TArray<void_*,FDefaultAllocator>::ResizeTo();
  }
  if (*(int *)(param_1 + 0x1c) < (int)param_2[3] + *(int *)(param_1 + 0x18)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x10);
  }
  lVar2 = *param_2;
  lVar1 = lVar2 + (longlong)(int)param_2[1] * 8;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 8) {
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1,lVar2);
  }
  lVar2 = param_2[2];
  lVar1 = lVar2 + (longlong)(int)param_2[3] * 8;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 8) {
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x10,lVar2);
  }
  return;
}



// FUNCTION 1421d38d0 BreakGameplayTagContainer body=14 status=ok
// SIG undefined BreakGameplayTagContainer(void)

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(undefined8 param_1,undefined8 param_2)

{
  TArray<FName,FDefaultAllocator>::operator=(param_2,param_1);
  return;
}



// FUNCTION 1421d38e0 BuildQuery body=303 status=ok
// SIG undefined BuildQuery(void)

undefined4 * FGameplayTagQuery::BuildQuery(undefined4 *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 local_38 [16];
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  plVar2 = (longlong *)FString::FString(local_38,param_3);
  *param_1 = 0;
  FString::operator=(param_1 + 10,plVar2);
  param_1[8] = 0;
  if ((int)param_1[9] < 0x80) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 6,0x80);
  }
  param_1[4] = 0;
  if (((int)param_1[5] < 0) && (param_1[5] != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 2,0);
  }
  iVar1 = param_1[8];
  param_1[8] = iVar1 + 1;
  if ((int)param_1[9] < iVar1 + 1) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 6,iVar1);
  }
  *(undefined1 *)((longlong)iVar1 + *(longlong *)(param_1 + 6)) = 0;
  iVar1 = param_1[8];
  param_1[8] = iVar1 + 1;
  if ((int)param_1[9] < iVar1 + 1) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 6,iVar1);
  }
  *(undefined1 *)((longlong)iVar1 + *(longlong *)(param_1 + 6)) = 1;
  FGameplayTagQueryExpression::EmitTokens(param_2,param_1 + 6,param_1 + 2);
  if (*plVar2 != 0) {
    FMemory::Free();
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1421d3a10 FUN_1421d3a10 body=5485 status=ok
// SIG undefined FUN_1421d3a10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001421d3cd3) */

void FUN_1421d3a10(longlong param_1)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong *plVar15;
  byte *pbVar16;
  undefined2 *puVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined2 *puVar22;
  uint uVar23;
  uint *puVar24;
  longlong *plVar25;
  undefined8 *puVar26;
  longlong lVar27;
  wchar_t *pwVar28;
  uint uVar29;
  int iVar30;
  int *piVar31;
  bool bVar32;
  undefined1 auStack_ba8 [32];
  longlong *local_b88;
  undefined1 local_b80;
  undefined1 local_b78;
  longlong local_b68;
  longlong *local_b60;
  undefined1 local_b58;
  undefined1 local_b57 [7];
  ulonglong local_b50;
  longlong *local_b48;
  longlong *local_b40;
  undefined8 local_b38;
  longlong *local_b30;
  undefined8 local_b28;
  undefined8 local_b20;
  undefined8 local_b18;
  longlong *local_b10;
  int local_b08;
  int local_b04;
  longlong *local_b00;
  longlong *local_af8;
  undefined8 local_af0;
  longlong *local_ae8;
  ulonglong local_ae0;
  undefined2 *local_ad8;
  int local_ad0;
  int local_acc;
  longlong *local_ac8;
  longlong *local_ac0;
  uint local_ab8;
  uint local_ab4;
  longlong local_ab0;
  undefined8 local_aa8;
  uint local_aa0;
  uint uStack_a9c;
  uint *puStack_a98;
  undefined4 local_a90;
  uint uStack_a8c;
  uint uStack_a88;
  undefined4 uStack_a84;
  longlong local_a80;
  int local_a78;
  int local_a74;
  longlong local_a70;
  longlong local_a68;
  longlong local_a60;
  longlong *local_a58;
  undefined8 uStack_a50;
  uint *local_a48;
  undefined1 auStack_a40 [16];
  undefined8 uStack_a30;
  undefined4 local_a28;
  undefined4 uStack_a24;
  uint *puStack_a20;
  undefined4 local_a18;
  undefined8 uStack_a14;
  undefined4 uStack_a0c;
  longlong *local_a08;
  undefined8 uStack_a00;
  uint *local_9f8;
  undefined8 uStack_9f0;
  undefined1 local_9e8 [16];
  longlong *local_9d8;
  undefined2 local_9d0;
  undefined1 local_9c8 [4];
  undefined1 local_9c4 [4];
  longlong local_9c0 [2];
  longlong *local_9b0;
  undefined8 uStack_9a8;
  uint *puStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined **local_988;
  undefined8 local_980;
  longlong local_978;
  undefined8 local_970;
  undefined **local_968;
  undefined8 local_960;
  longlong local_958;
  undefined8 local_950;
  undefined **local_948;
  undefined8 local_940;
  longlong local_938;
  undefined8 local_930;
  undefined **local_928;
  undefined8 local_920;
  longlong local_918;
  undefined8 local_910;
  undefined8 local_908;
  undefined8 local_900;
  undefined8 *local_8f8;
  longlong *local_8f0;
  undefined1 local_8e8 [8];
  undefined1 local_8e0 [8];
  undefined1 local_8d8 [8];
  longlong local_8d0 [2];
  longlong local_8c0 [2];
  longlong local_8b0 [2];
  longlong local_8a0 [2];
  longlong local_890 [2];
  longlong local_880 [2];
  undefined1 local_870 [8];
  undefined1 local_868 [8];
  longlong local_860 [2];
  undefined1 local_850 [8];
  undefined8 local_848;
  wchar_t local_838 [1024];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_ba8;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    return;
  }
  local_b68 = param_1;
  plVar8 = (longlong *)operator_new(0x50);
  plVar25 = (longlong *)0x0;
  plVar10 = plVar25;
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = 0;
    plVar8[1] = 0;
    plVar8[2] = 0;
    plVar8[3] = 0;
    plVar8[4] = 0;
    plVar8[5] = 0;
    plVar8[6] = 0;
    plVar8[7] = 0;
    plVar8[8] = 0;
    plVar10 = plVar8;
  }
  plVar9 = (longlong *)operator_new(0x18);
  plVar8 = plVar25;
  if (plVar9 != (longlong *)0x0) {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_144fe7dd8;
    plVar9[2] = (longlong)plVar10;
    plVar8 = plVar9;
  }
  local_b48 = plVar10;
  local_b40 = plVar8;
  SharedPointerInternals::EnableSharedFromThis(&local_b48,plVar10,plVar10);
  if ((longlong **)(param_1 + 0x38) != &local_b48) {
    *(longlong **)(param_1 + 0x38) = plVar10;
    local_b48 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x40,&local_b40);
    plVar8 = local_b40;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar8 + 1;
    lVar13 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar31 = (int *)((longlong)plVar8 + 0xc);
      iVar7 = *piVar31;
      *piVar31 = *piVar31 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar10 = (longlong *)UGameplayTagsSettings::GetPrivateStaticClass();
  local_b48 = (longlong *)plVar10[0x1f];
  if (local_b48 == (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x368))(plVar10);
    local_b48 = (longlong *)plVar10[0x1f];
  }
  puVar11 = (undefined8 *)FPaths::ProjectConfigDir(local_8d0);
  if (*(int *)(puVar11 + 1) == 0) {
    puVar17 = &DAT_143f3eda8;
  }
  else {
    puVar17 = (undefined2 *)*puVar11;
  }
  FString::PrintfImpl(local_9c0,L"%sDefaultEngine.ini",puVar17);
  if (local_8d0[0] != 0) {
    FMemory::Free();
  }
  local_b10 = (longlong *)0x0;
  local_b38 = (ulonglong)local_b38._4_4_ << 0x20;
  local_b04 = 0;
  cVar6 = FUN_1421dae70(local_b68);
  if (cVar6 == '\0') goto LAB_1421d3e84;
  local_ac0 = (longlong *)0x0;
  local_b50 = local_b50 & 0xffffffff00000000;
  local_ab4 = 0;
  plVar8 = (longlong *)UGameplayTagsSettings::GetPrivateStaticClass();
  lVar13 = plVar8[0x1f];
  plVar10 = plVar25;
  if (lVar13 == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar13 = plVar8[0x1f];
    plVar8 = plVar25;
    if (lVar13 != 0) goto LAB_1421d3c16;
  }
  else {
LAB_1421d3c16:
    puVar11 = *(undefined8 **)(lVar13 + 0xa0);
    puVar26 = puVar11 + (longlong)*(int *)(lVar13 + 0xa8) * 4;
    plVar9 = plVar25;
    plVar8 = (longlong *)0x0;
    plVar15 = plVar25;
    if (puVar11 != puVar26) {
      do {
        if (*(int *)(puVar11 + 1) == 0) {
          puVar17 = &DAT_143f3eda8;
        }
        else {
          puVar17 = (undefined2 *)*puVar11;
        }
        puVar12 = (undefined8 *)FPaths::ProjectConfigDir(local_8c0);
        if (*(int *)(puVar12 + 1) == 0) {
          puVar22 = &DAT_143f3eda8;
        }
        else {
          puVar22 = (undefined2 *)*puVar12;
        }
        FString::PrintfImpl(&local_ab0,L"%sTags/%s",puVar22,puVar17);
        local_ab8 = (int)plVar15 + 1;
        if ((int)plVar9 < (int)local_ab8) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_ac0,plVar15);
          plVar9 = (longlong *)(ulonglong)local_ab4;
          plVar10 = local_ac0;
        }
        uVar29 = local_ab8;
        plVar8 = (longlong *)(ulonglong)local_ab8;
        plVar15 = plVar10 + (longlong)(int)plVar15 * 2;
        *plVar15 = 0;
        *plVar15 = local_ab0;
        *(undefined4 *)(plVar15 + 1) = (undefined4)local_aa8;
        *(undefined4 *)((longlong)plVar15 + 0xc) = local_aa8._4_4_;
        local_aa8 = 0;
        local_ab0 = 0;
        if (local_8c0[0] != 0) {
          FMemory::Free();
        }
        puVar11 = puVar11 + 4;
        plVar15 = plVar8;
      } while (puVar11 != puVar26);
      local_b50 = CONCAT44(local_b50._4_4_,uVar29);
    }
  }
  AlgoImpl::
  IntroSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>
            (plVar10,(longlong)(int)plVar8,local_b57[0],local_b57);
  plVar9 = plVar10 + (longlong)(int)plVar8 * 2;
  if (plVar10 != plVar9) {
    iVar7 = local_b04;
    iVar30 = (int)local_b38;
    do {
      puVar11 = (undefined8 *)FUN_141671d50(local_8b0,plVar10);
      if (*(int *)(puVar11 + 1) == 0) {
        puVar17 = &DAT_143f3eda8;
      }
      else {
        puVar17 = (undefined2 *)*puVar11;
      }
      FName::FName(&local_b60,puVar17,1);
      if (local_8b0[0] != 0) {
        FMemory::Free();
      }
      local_b08 = iVar30 + 1;
      local_b38 = CONCAT44(local_b38._4_4_,local_b08);
      if (iVar7 < local_b08) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b10,iVar30);
        local_b38 = CONCAT44(local_b38._4_4_,local_b08);
        iVar7 = local_b04;
      }
      iVar5 = local_b08;
      local_b10[iVar30] = (longlong)local_b60;
      lVar13 = FUN_1421d5f80(local_b68,local_b60,3);
      FUN_1421d5f80(local_b68,local_b60,2);
      if ((int)plVar10[1] == 0) {
        puVar17 = &DAT_143f3eda8;
      }
      else {
        puVar17 = (undefined2 *)*plVar10;
      }
      uVar14 = URestrictedGameplayTagsList::GetPrivateStaticClass();
      local_b88 = (longlong *)0x0;
      FUN_14175be70(*(undefined8 *)(lVar13 + 0x18),uVar14,puVar17,0);
      lVar27 = local_b68;
      lVar19 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 0x38);
      lVar13 = lVar19 + (longlong)*(int *)(*(longlong *)(lVar13 + 0x18) + 0x40) * 0x28;
      iVar30 = iVar5;
      if (lVar19 != lVar13) {
        do {
          FUN_1421d3550(lVar27,lVar19,local_b60);
          lVar19 = lVar19 + 0x28;
        } while (lVar19 != lVar13);
        iVar30 = (int)local_b38;
      }
      plVar10 = plVar10 + 2;
    } while (plVar10 != plVar9);
    plVar8 = (longlong *)(local_b50 & 0xffffffff);
    plVar10 = local_ac0;
  }
  uVar29 = (uint)plVar8;
  plVar9 = plVar10;
  while (uVar29 != 0) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
    uVar29 = (int)plVar8 - 1;
    plVar8 = (longlong *)(ulonglong)uVar29;
  }
  if (plVar10 != (longlong *)0x0) {
    FMemory::Free(plVar10);
  }
LAB_1421d3e84:
  plVar10 = (longlong *)(local_b68 + 0xb8);
  local_aa0 = 0;
  uVar29 = *(uint *)(local_b68 + 0xe0);
  puVar1 = (uint *)(local_b68 + 200);
  uStack_a9c = 1;
  uStack_a8c = 0;
  uStack_a88 = 0;
  if (uVar29 != 0) {
    puVar24 = *(uint **)(local_b68 + 0xd8);
    if (*(uint **)(local_b68 + 0xd8) == (uint *)0x0) {
      puVar24 = puVar1;
    }
    uVar20 = *puVar24;
    plVar8 = plVar25;
    plVar9 = plVar25;
    while (uVar20 == 0) {
      iVar7 = (int)plVar8;
      uStack_a88 = (int)plVar9 + 0x20;
      plVar9 = (longlong *)(ulonglong)uStack_a88;
      local_aa0 = iVar7 + 1;
      plVar8 = (longlong *)(ulonglong)local_aa0;
      if ((int)((uVar29 - 1) + ((int)(uVar29 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
      goto LAB_1421d3f3d;
      uVar20 = puVar24[(longlong)iVar7 + 1];
    }
    uStack_a9c = uVar20 - 1 & uVar20 ^ uVar20;
    iVar7 = 0x1f;
    if (uStack_a9c != 0) {
      for (; uStack_a9c >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_a9c == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_a8c = (uStack_a88 - iVar7) + 0x1f;
    if ((int)uVar29 < (int)uStack_a8c) {
LAB_1421d3f3d:
      uStack_a8c = uVar29;
    }
  }
  local_a90 = 0xffffffff;
  uVar20 = *(uint *)(local_b68 + 0xe0);
  uStack_9a8 = CONCAT44(uStack_a9c,local_aa0);
  uStack_998 = CONCAT44(uStack_a8c,0xffffffff);
  uStack_990 = CONCAT44(uStack_a84,uStack_a88);
  uVar23 = uVar20 & 0xffffffe0;
  uStack_a50 = CONCAT44(uStack_a9c,local_aa0);
  auStack_a40._8_8_ = uStack_990;
  auStack_a40._0_8_ = uStack_998;
  if (uVar20 != uVar29) {
    puVar24 = *(uint **)(local_b68 + 0xd8);
    if (*(uint **)(local_b68 + 0xd8) == (uint *)0x0) {
      puVar24 = puVar1;
    }
    uVar18 = puVar24[(int)uVar20 >> 5] & -1 << ((byte)uVar20 & 0x1f);
    iVar7 = (int)uVar20 >> 5;
    while (uVar18 == 0) {
      uVar23 = uVar23 + 0x20;
      if ((int)((uVar29 - 1) + ((int)(uVar29 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
      goto LAB_1421d4008;
      uVar18 = puVar24[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar18 = uVar18 - 1 & uVar18 ^ uVar18;
    iVar7 = 0x1f;
    if (uVar18 != 0) {
      for (; uVar18 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar18 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uVar20 = (uVar23 - iVar7) + 0x1f;
    if ((int)uVar29 < (int)uVar20) {
LAB_1421d4008:
      uVar20 = uVar29;
    }
  }
  plVar8 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puStack_a98 = puVar1;
  local_a58 = plVar10;
  local_a48 = puVar1;
  local_9b0 = plVar10;
  puStack_9a0 = puVar1;
  while( true ) {
    lVar13 = local_b68;
    if (((auStack_a40._4_4_ == uVar20) && (local_a48 == puVar1)) &&
       (plVar9 = plVar25, local_a58 == plVar10)) break;
    uVar14 = *(undefined8 *)(*local_a58 + (longlong)(int)auStack_a40._4_4_ * 0x10);
    if ((*(int *)(*plVar8 + 0x38) < DAT_146aed700) &&
       (_Init_thread_header(&DAT_146aed700), DAT_146aed700 == -1)) {
      FName::FName(&DAT_146aed6f8,L"Native",1);
      _Init_thread_footer(&DAT_146aed700);
    }
    local_968 = &PTR_FUN_144fe7388;
    local_958 = 0;
    local_950 = 0;
    local_960 = uVar14;
    FUN_1421d3550(local_b68,&local_968,DAT_146aed6f8,0);
    if (local_958 != 0) {
      FMemory::Free();
    }
    auStack_a40._0_4_ = auStack_a40._0_4_ & ~uStack_a50._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a50);
  }
  while ((iVar7 = (int)plVar9, -1 < iVar7 && (iVar7 < *(int *)(lVar13 + 0x138)))) {
    if (*(longlong *)(*(longlong *)(lVar13 + 0x130) + (longlong)iVar7 * 8) != 0) {
      FUN_1421d9c80(lVar13);
    }
    plVar9 = (longlong *)(ulonglong)(iVar7 + 1);
  }
  piVar31 = (int *)(*plVar8 + 0x38);
  if ((*piVar31 < DAT_146aed700) && (_Init_thread_header(&DAT_146aed700), DAT_146aed700 == -1)) {
    FName::FName(&DAT_146aed6f8,L"Native",1);
    _Init_thread_footer(&DAT_146aed700);
  }
  plVar10 = (longlong *)(lVar13 + 0xa8);
  puVar26 = (undefined8 *)*plVar10;
  iVar7 = *(int *)(lVar13 + 0xb0);
  local_b00 = DAT_146aed6f8;
  puVar11 = puVar26 + (longlong)iVar7 * 4;
  for (; puVar26 != puVar11; puVar26 = puVar26 + 4) {
    if ((longlong *)*puVar26 == DAT_146aed6f8) goto LAB_1421d4173;
  }
  *(int *)(lVar13 + 0xb0) = iVar7 + 1;
  if (*(int *)(lVar13 + 0xb4) < iVar7 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar10);
  }
  puVar11 = (undefined8 *)(*plVar10 + (longlong)iVar7 * 0x20);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = local_b00;
    *(undefined1 *)(puVar11 + 1) = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
  }
LAB_1421d4173:
  cVar6 = FUN_1421dae70(lVar13);
  if (cVar6 != '\0') {
    local_b88 = local_9c0;
    local_b30 = (longlong *)0x0;
    local_b28 = 0;
    FConfigCacheIni::GetArray
              (DAT_1468b6148,L"/Script/GameplayTags.GameplayTagsSettings",L"+GameplayTags",
               &local_b30);
    plVar10 = local_b48;
    uVar21 = (ulonglong)(int)local_b28;
    plVar9 = local_b30 + uVar21 * 2;
    plVar8 = local_b30;
    if (local_b30 != plVar9) {
      do {
        if ((int)plVar8[1] == 0) {
          puVar17 = &DAT_143f3eda8;
        }
        else {
          puVar17 = (undefined2 *)*plVar8;
        }
        puVar11 = (undefined8 *)FName::FName(local_870,puVar17,1);
        local_988 = &PTR_FUN_144fe7388;
        local_978 = 0;
        local_970 = 0;
        local_980 = *puVar11;
        TArray<FGameplayTagTableRow,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<FGameplayTagTableRow>(plVar10 + 7,&local_988);
        if (local_978 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
      } while (plVar8 != plVar9);
      uVar21 = local_b28 & 0xffffffff;
      lVar13 = local_b68;
    }
    uVar29 = (uint)uVar21;
    plVar8 = local_b30;
    while (uVar29 != 0) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
      uVar29 = (int)uVar21 - 1;
      uVar21 = (ulonglong)uVar29;
    }
    local_b28._4_4_ = (uint)(local_b28 >> 0x20);
    bVar32 = local_b28._4_4_ != 0;
    local_b28 = (ulonglong)local_b28._4_4_ << 0x20;
    if (bVar32) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_b30,0);
    }
    local_b88 = (longlong *)UObject::GetDefaultConfigFilename(plVar10,local_8a0);
    FConfigCacheIni::GetArray
              (DAT_1468b6148,L"/Script/GameplayTags.GameplayTagsSettings",L"+GameplayTags",
               &local_b30);
    if (local_8a0[0] != 0) {
      FMemory::Free();
    }
    plVar9 = local_b30 + (longlong)(int)local_b28 * 2;
    for (plVar8 = local_b30; plVar8 != plVar9; plVar8 = plVar8 + 2) {
      if ((int)plVar8[1] == 0) {
        puVar17 = &DAT_143f3eda8;
      }
      else {
        puVar17 = (undefined2 *)*plVar8;
      }
      puVar11 = (undefined8 *)FName::FName(local_8e0,puVar17,1);
      local_948 = &PTR_FUN_144fe7388;
      local_938 = 0;
      local_930 = 0;
      local_940 = *puVar11;
      TArray<FGameplayTagTableRow,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FGameplayTagTableRow>
                (plVar10 + 7,&local_948);
      if (local_938 != 0) {
        FMemory::Free();
      }
      lVar13 = local_b68;
    }
    if ((*piVar31 < DAT_146aed710) && (_Init_thread_header(&DAT_146aed710), DAT_146aed710 == -1)) {
      FName::FName(&DAT_146aed708,L"DefaultGameplayTags.ini",1);
      _Init_thread_footer(&DAT_146aed710);
    }
    uVar14 = DAT_146aed708;
    FUN_1421d5f80(lVar13,DAT_146aed708,1);
    lVar19 = plVar10[7];
    lVar27 = (longlong)(int)plVar10[8] * 0x20 + lVar19;
    for (; lVar19 != lVar27; lVar19 = lVar19 + 0x20) {
      FUN_1421d3550(lVar13,lVar19,uVar14,0);
    }
    local_ae8 = (longlong *)0x0;
    local_ae0 = 0;
    plVar10 = (longlong *)FUN_1415c3d50();
    puVar11 = (undefined8 *)FPaths::ProjectConfigDir(local_860);
    iVar7 = *(int *)(puVar11 + 1);
    local_ad8 = (undefined2 *)*puVar11;
    *puVar11 = 0;
    local_ad0 = *(int *)(puVar11 + 1);
    local_acc = *(int *)((longlong)puVar11 + 0xc);
    puVar11[1] = 0;
    if (local_acc < (int)((6 - (uint)(iVar7 != 0)) + local_ad0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_ad8);
    }
    FString::PathAppend(&local_ad8,L"Tags",4);
    puVar17 = &DAT_143f3eda8;
    if (local_ad0 != 0) {
      puVar17 = local_ad8;
    }
    local_b78 = 1;
    local_b80 = 0;
    local_b88 = (longlong *)CONCAT71(local_b88._1_7_,1);
    (**(code **)(*plVar10 + 0x80))(plVar10,&local_ae8,puVar17,L"*.ini");
    if (local_ad8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_860[0] != 0) {
      FMemory::Free();
    }
    AlgoImpl::
    IntroSortInternal<FString,FIdentityFunctor,TDereferenceWrapper<FString,TLess<FString>_>_>
              (local_ae8,(longlong)(int)local_ae0,local_b58,&local_b58);
    uVar21 = (ulonglong)(int)local_ae0;
    local_b00 = local_ae8 + uVar21 * 2;
    if (local_ae8 != local_b00) {
      plVar10 = local_b10 + (int)local_b38;
      plVar8 = local_b10;
      plVar9 = local_ae8;
      local_b60 = plVar10;
      do {
        puVar11 = (undefined8 *)FUN_141671d50(local_890,plVar9);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar17 = &DAT_143f3eda8;
        }
        else {
          puVar17 = (undefined2 *)*puVar11;
        }
        plVar15 = (longlong *)FName::FName(local_8e8,puVar17,1);
        lVar13 = *plVar15;
        plVar15 = plVar8;
        if (local_890[0] != 0) {
          FMemory::Free();
        }
        for (; plVar15 != plVar10; plVar15 = plVar15 + 1) {
          if (lVar13 == *plVar15) goto LAB_1421d46db;
        }
        lVar19 = FUN_1421d5f80(local_b68,lVar13,2);
        local_af8 = (longlong *)0x0;
        local_af0 = 0;
        local_b88 = plVar9;
        iVar7 = FConfigCacheIni::GetArray(DAT_1468b6148,L"UserTags",L"GameplayTags",&local_af8);
        if (iVar7 == 0) {
          if ((int)plVar9[1] == 0) {
            puVar17 = &DAT_143f3eda8;
          }
          else {
            puVar17 = (undefined2 *)*plVar9;
          }
          uVar14 = UGameplayTagsList::GetPrivateStaticClass();
          local_b88 = (longlong *)0x0;
          FUN_14175be70(*(undefined8 *)(lVar19 + 0x10),uVar14,puVar17,0);
        }
        else {
          plVar15 = local_af8 + (longlong)(int)local_af0 * 2;
          for (plVar8 = local_af8; plVar8 != plVar15; plVar8 = plVar8 + 2) {
            if ((int)plVar8[1] == 0) {
              puVar17 = &DAT_143f3eda8;
            }
            else {
              puVar17 = (undefined2 *)*plVar8;
            }
            local_928 = &PTR_FUN_144fe7388;
            puVar11 = (undefined8 *)FName::FName(local_8d8,puVar17,1);
            local_918 = 0;
            local_910 = 0;
            local_920 = *puVar11;
            TArray<FGameplayTagTableRow,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<FGameplayTagTableRow>(*(longlong *)(lVar19 + 0x10) + 0x38,&local_928);
            if (local_918 != 0) {
              FMemory::Free();
            }
            plVar10 = local_b60;
          }
        }
        lVar4 = local_b68;
        lVar27 = *(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x38);
        lVar19 = (longlong)*(int *)(*(longlong *)(lVar19 + 0x10) + 0x40) * 0x20 + lVar27;
        for (; lVar27 != lVar19; lVar27 = lVar27 + 0x20) {
          FUN_1421d3550(lVar4,lVar27,lVar13,0);
          plVar10 = local_b60;
        }
        plVar8 = local_af8;
        for (iVar7 = (int)local_af0; iVar7 != 0; iVar7 = iVar7 + -1) {
          if (*plVar8 != 0) {
            FMemory::Free();
          }
          plVar8 = plVar8 + 2;
        }
        plVar8 = local_b10;
        if (local_af8 != (longlong *)0x0) {
          FMemory::Free(local_af8);
          plVar8 = local_b10;
        }
LAB_1421d46db:
        plVar9 = plVar9 + 2;
      } while (plVar9 != local_b00);
      uVar21 = local_ae0 & 0xffffffff;
      lVar13 = local_b68;
    }
    uVar29 = (uint)uVar21;
    plVar10 = local_ae8;
    while (uVar29 != 0) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
      uVar29 = (int)uVar21 - 1;
      uVar21 = (ulonglong)uVar29;
    }
    if (local_ae8 != (longlong *)0x0) {
      FMemory::Free(local_ae8);
    }
    plVar10 = local_b30;
    for (iVar7 = (int)local_b28; iVar7 != 0; iVar7 = iVar7 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_b30 != (longlong *)0x0) {
      FMemory::Free(local_b30);
    }
  }
  plVar10 = (longlong *)(lVar13 + 0x98);
  *(undefined4 *)(lVar13 + 0xa0) = 0;
  if (*(int *)(lVar13 + 0xa4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar10,0);
  }
  puVar11 = (undefined8 *)local_b48[0x11];
  plVar8 = (longlong *)((longlong)(int)local_b48[0x12] & 0x1fffffffffffffff);
  if (puVar11 + (int)local_b48[0x12] < puVar11) {
    plVar8 = plVar25;
  }
  if (plVar8 != (longlong *)0x0) {
    local_b60 = (longlong *)0x0;
    do {
      local_848 = *puVar11;
      FUN_1421da6a0(local_b68,&local_ac8,local_848,1);
      plVar9 = local_ac8;
      if (local_ac8 != (longlong *)0x0) {
        iVar7 = *(int *)(lVar13 + 0xa0);
        *(int *)(lVar13 + 0xa0) = iVar7 + 1;
        if (*(int *)(lVar13 + 0xa4) < iVar7 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar10,iVar7);
        }
        *(longlong **)(*plVar10 + (longlong)iVar7 * 8) = plVar9;
      }
      puVar11 = puVar11 + 1;
      plVar25 = (longlong *)((longlong)plVar25 + 1);
    } while (plVar25 != plVar8);
  }
  plVar10 = local_b48;
  lVar19 = local_b68;
  lVar13 = local_b48[0xc];
  *(char *)(local_b68 + 0x108) = (char)lVar13;
  *(undefined1 *)(local_b68 + 0x109) = *(undefined1 *)((longlong)local_b48 + 0x49);
  *(int *)(local_b68 + 0x30) = (int)local_b48[0x13];
  *(undefined4 *)(local_b68 + 0x2c) = *(undefined4 *)((longlong)local_b48 + 0x9c);
  if ((char)lVar13 != '\0') {
    FUN_1421d4f80(local_b68);
  }
  TBaseMulticastDelegate<void>::Broadcast(&DAT_146529da0);
  plVar8 = (longlong *)(lVar19 + 0x140);
  local_b60 = plVar8;
  FUN_1406c5d90(plVar8,0);
  local_b88 = local_9c0;
  plVar25 = (longlong *)
            FConfigCacheIni::GetSectionPrivate(DAT_1468b6148,L"/Script/Engine.Engine",0,1);
  if (plVar25 != (longlong *)0x0) {
    puStack_a20 = (uint *)(plVar25 + 2);
    iVar7 = 0;
    local_a28 = 0;
    uStack_a24 = 1;
    local_a18 = 0xffffffff;
    uStack_a14 = 0;
    if ((int)plVar25[5] != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a28);
    }
    auVar3._4_8_ = uStack_a14;
    auVar3._0_4_ = local_a18;
    auVar2._12_4_ = uStack_a0c;
    auVar2._0_12_ = auVar3;
    uStack_a50 = CONCAT44(uStack_a24,local_a28);
    local_a48 = puStack_a20;
    local_9d0 = 0;
    auStack_a40._0_8_ = auVar3._0_8_;
    uStack_a30._0_4_ = SUB84(plVar25,0);
    uStack_a30._4_4_ = (undefined4)((ulonglong)plVar25 >> 0x20);
    local_9f8 = puStack_a20;
    uStack_9f0 = auStack_a40._0_8_;
    local_9e8._8_4_ = (undefined4)uStack_a30;
    local_9e8._0_8_ = auVar2._8_8_;
    local_9e8._12_4_ = uStack_a30._4_4_;
    iVar30 = (int)uStack_a14;
    local_a58 = plVar25;
    auStack_a40 = auVar2;
    uStack_a30 = plVar25;
    local_a08 = plVar25;
    uStack_a00 = uStack_a50;
    local_9d8 = plVar25;
    if (iVar30 < (int)puStack_a20[6]) {
      do {
        plVar8 = local_a08;
        lVar13 = *local_a08;
        lVar19 = (longlong)iVar30 * 0x30;
        pbVar16 = (byte *)FName::GetComparisonNameEntry(lVar13 + lVar19);
        if (pbVar16 != (byte *)0x0) {
          local_b50 = local_b50 & 0xffffffff00000000;
          pwVar28 = L"+GameplayTagRedirects";
          cVar6 = FName::SplitNameWithCheck(L"+GameplayTagRedirects",local_838,0x400,&local_b50);
          iVar30 = iVar7;
          if (cVar6 != '\0') {
            pwVar28 = local_838;
            iVar30 = (int)local_b50 + 1;
          }
          plVar10 = local_b48;
          if (iVar30 == *(int *)(lVar13 + lVar19 + 4)) {
            if ((*pbVar16 & 1) == 0) {
              iVar30 = FGenericPlatformStricmp::Stricmp<wchar_t,char>(pwVar28,pbVar16 + 0x10);
            }
            else {
              iVar30 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>();
            }
            plVar10 = local_b48;
            if (iVar30 == 0) {
              local_b20 = 0;
              local_b18 = 0;
              lVar13 = *plVar8 + lVar19;
              iVar30 = *(int *)(lVar13 + 0x20) + -1;
              if (*(int *)(lVar13 + 0x20) == 0) {
                iVar30 = iVar7;
              }
              lVar27 = 0x18;
              if (iVar30 < 1) {
                lVar27 = 8;
              }
              if (*(int *)(lVar27 + 8 + lVar13) == 0) {
                puVar17 = &DAT_143f3eda8;
              }
              else {
                puVar17 = *(undefined2 **)(lVar27 + lVar13);
              }
              cVar6 = FParse::Value(puVar17,L"OldTagName=",&local_b20);
              plVar10 = local_b48;
              if (cVar6 != '\0') {
                lVar19 = *plVar8 + lVar19;
                lVar13 = 0x18;
                iVar30 = *(int *)(lVar19 + 0x20) + -1;
                if (*(int *)(lVar19 + 0x20) == 0) {
                  iVar30 = iVar7;
                }
                if (iVar30 < 1) {
                  lVar13 = 8;
                }
                if (*(int *)(lVar13 + 8 + lVar19) == 0) {
                  puVar17 = &DAT_143f3eda8;
                }
                else {
                  puVar17 = *(undefined2 **)(lVar13 + lVar19);
                }
                cVar6 = FParse::Value(puVar17,L"NewTagName=",&local_b18);
                plVar10 = local_b48;
                if (cVar6 != '\0') {
                  local_908 = local_b20;
                  local_900 = local_b18;
                  TArray<FGameplayTagRedirect,FDefaultAllocator>::
                  AddUniqueImpl<FGameplayTagRedirect_const_&>(local_b48 + 0xf,&local_908);
                }
              }
            }
          }
        }
        uStack_9f0 = CONCAT44(uStack_9f0._4_4_,(uint)uStack_9f0 & ~uStack_a00._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a00);
        iVar30 = uStack_9f0._4_4_;
      } while (uStack_9f0._4_4_ < (int)local_9f8[6]);
      lVar19 = local_b68;
      plVar8 = local_b60;
      if (((char)local_9d0 != '\0') && (local_9d0._1_1_ != '\0')) {
        TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_9d8,(int)local_9d8[1] - *(int *)((longlong)local_9d8 + 0x34),1);
        lVar19 = local_b68;
        plVar8 = local_b60;
      }
    }
  }
  plVar10 = (longlong *)plVar10[0xf];
  plVar25 = plVar10 + (longlong)(int)local_b48[0x10] * 2;
  local_ac8 = plVar25;
  if (plVar10 != plVar25) {
    do {
      lVar13 = *plVar10;
      lVar27 = plVar10[1];
      local_b38 = lVar13;
      piVar31 = (int *)FUN_140c74540(plVar8,local_9c8,lVar13);
      if (*piVar31 == -1) {
        FUN_1421da6a0(lVar19,&local_a70,lVar13,0);
        local_b18 = 0;
        if (local_a70 != 0) {
          FUN_1421da840(lVar19,&local_9b0,&local_a70);
          FName::ToString(&local_b38,local_880);
          FString::PrintfImpl(&local_a80,
                              L"Old tag (%s) which is being redirected still exists in the table!  Generally you should remove the old tags from the table when you are redirecting to new tags, or else users will still be able to add the old tags to containers."
                             );
          if (local_880[0] != 0) {
            FMemory::Free();
          }
          iVar7 = local_a78;
          if ((int)uStack_9a8 != 0) {
            lVar13 = (longlong)local_a78;
            local_a78 = (0x6a - (uint)(local_a78 != 0)) + local_a78;
            if (local_a74 < local_a78) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a80,iVar7);
            }
            builtin_wcsncpy((wchar_t *)(local_a80 + (lVar13 - (ulonglong)(iVar7 != 0)) * 2),
                            L"\nSuppressed warning due to redirected tag being a single component that matched other hierarchy elements."
                            ,0x6a);
          }
          if (local_a80 != 0) {
            FMemory::Free();
          }
          if (puStack_9a0 != (uint *)0x0) {
            FMemory::Free();
          }
          if (local_9b0 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
        local_b20 = 0;
        if (lVar27 == 0) {
          local_a68 = 0;
          plVar8 = &local_a68;
        }
        else {
          plVar8 = (longlong *)FUN_1421da6a0(lVar19,local_850,lVar27,0);
        }
        plVar9 = local_b48;
        lVar13 = *plVar8;
        iVar7 = 10;
        local_b68 = 0;
        local_a60 = lVar13;
        if (lVar13 == 0) {
          local_b60 = (longlong *)0x0;
          while (local_b68 = 0, plVar25 = local_ac8, lVar27 != 0) {
            plVar8 = (longlong *)plVar9[0xf];
            bVar32 = false;
            plVar25 = plVar8 + (longlong)(int)plVar9[0x10] * 2;
            for (; plVar8 != plVar25; plVar8 = plVar8 + 2) {
              if (*plVar8 == lVar27) {
                lVar27 = plVar8[1];
                plVar8 = (longlong *)FUN_1421da6a0(lVar19,local_868,lVar27,0);
                bVar32 = true;
                lVar13 = *plVar8;
                local_a60 = lVar13;
                break;
              }
            }
            iVar7 = iVar7 + -1;
            plVar25 = local_ac8;
            if (((!bVar32) || (iVar7 < 1)) || (local_b68 = 0, lVar13 != 0)) break;
          }
        }
        local_b50 = 0;
        plVar8 = (longlong *)(lVar19 + 0x140);
        if (lVar13 != 0) {
          local_8f8 = &local_b38;
          local_8f0 = &local_a60;
          FUN_141711540(plVar8,local_9c4,&local_8f8);
        }
      }
      plVar10 = plVar10 + 2;
    } while (plVar10 != plVar25);
  }
  if (local_b10 != (longlong *)0x0) {
    FMemory::Free(local_b10);
  }
  if (local_9c0[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421d4f80 FUN_1421d4f80 body=630 status=ok
// SIG undefined FUN_1421d4f80(void)

void FUN_1421d4f80(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  void *pvVar4;
  ushort uVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  undefined1 local_res8 [8];
  ulonglong uVar13;
  
  plVar1 = (longlong *)(param_1 + 0x110);
  TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(plVar1,0);
  TMapBase<unsigned_int,TSharedPtr<OculusHMD::FLayer,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TSharedPtr<OculusHMD::FLayer,1>,0>_>
  ::GenerateValueArray<FDefaultAllocator>(param_1 + 0x48,plVar1);
  AlgoImpl::
  IntroSortInternal<TSharedPtr<FGameplayTagNode,0>,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FGameplayTagNode,0>,FCompareFGameplayTagNodeByTag>_>
            (*plVar1,(longlong)*(int *)(param_1 + 0x118),local_res8[0],local_res8);
  uVar9 = 0;
  uVar10 = uVar9;
  uVar14 = uVar9;
  uVar15 = uVar9;
  if (0 < *(int *)(param_1 + 0xa0)) {
    do {
      if (0 < *(int *)(param_1 + 0x118)) {
        plVar2 = (longlong *)*plVar1;
        plVar8 = plVar2;
        uVar11 = uVar9;
        uVar13 = uVar9;
        do {
          lVar3 = *plVar8;
          if (*(int *)(lVar3 + 0x10) < 1) {
            plVar6 = &DAT_146aed670;
          }
          else {
            plVar6 = *(longlong **)(lVar3 + 8);
          }
          if (*plVar6 == *(longlong *)(*(longlong *)(param_1 + 0x98) + uVar14 * 8)) {
            if (uVar11 != uVar14) {
              plVar2[uVar11 * 2] = *(longlong *)((longlong)plVar2 + uVar10);
              *(longlong *)((longlong)plVar2 + uVar10) = lVar3;
              lVar3 = plVar2[uVar11 * 2 + 1];
              plVar2[uVar11 * 2 + 1] = *(longlong *)((longlong)plVar2 + uVar10 + 8);
              *(longlong *)((longlong)plVar2 + uVar10 + 8) = lVar3;
            }
            break;
          }
          uVar12 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar12;
          uVar11 = uVar11 + 1;
          plVar8 = plVar8 + 2;
        } while ((int)uVar12 < *(int *)(param_1 + 0x118));
      }
      uVar12 = (int)uVar15 + 1;
      uVar10 = uVar10 + 0x10;
      uVar14 = uVar14 + 1;
      uVar15 = (ulonglong)uVar12;
    } while ((int)uVar12 < *(int *)(param_1 + 0xa0));
  }
  pvVar4 = ThreadLocalStoragePointer;
  uVar5 = (short)*(undefined4 *)(param_1 + 0x118) + 1;
  *(ushort *)(param_1 + 0x34) = uVar5;
  if ((*(int *)(*(longlong *)((longlong)pvVar4 + (ulonglong)_tls_index * 8) + 0x38) < DAT_1468509dc)
     && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
    DAT_1468509d8 = 1.442695;
    _Init_thread_footer(&DAT_1468509dc);
  }
  fVar16 = _guard_xfg_dispatch_icall_nop((float)uVar5);
  iVar7 = -((int)ROUND(-0.5 - (fVar16 * DAT_1468509d8 + fVar16 * DAT_1468509d8)) >> 1);
  *(int *)(param_1 + 0x28) = iVar7;
  if (*(int *)(param_1 + 0x2c) <= iVar7) {
    iVar7 = *(int *)(param_1 + 0x2c);
  }
  *(int *)(param_1 + 0x2c) = iVar7;
  if (0xfffe < *(int *)(param_1 + 0x118)) {
    iVar7 = *(int *)(param_1 + 0x118);
    if (iVar7 < 0xfffe) {
      *(undefined4 *)(param_1 + 0x118) = 0xfffe;
      if (*(int *)(param_1 + 0x11c) < 0xfffe) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar7 * 0x10 + *plVar1),0,(longlong)(0xfffe - iVar7) << 4);
    }
    else if (0xfffe < iVar7) {
      TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                (plVar1,0xfffe,iVar7 + -0xfffe,1);
    }
  }
  if (0 < *(int *)(param_1 + 0x118)) {
    do {
      lVar3 = *(longlong *)(*plVar1 + uVar9 * 0x10);
      if (lVar3 != 0) {
        *(short *)(lVar3 + 0x48) = (short)uVar9;
      }
      uVar5 = (short)uVar9 + 1;
      uVar9 = (ulonglong)uVar5;
    } while ((int)(uint)uVar5 < *(int *)(param_1 + 0x118));
  }
  return;
}



// FUNCTION 1421d5200 FUN_1421d5200 body=680 status=ok
// SIG undefined FUN_1421d5200(void)

longlong * FUN_1421d5200(longlong *param_1,longlong param_2,short *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong local_50 [4];
  undefined1 local_30;
  
  puVar3 = (undefined8 *)operator_new(0x28);
  puVar7 = (undefined8 *)0x0;
  puVar5 = puVar7;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined4 *)(puVar3 + 2) = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar5 = puVar3;
  }
  *param_1 = (longlong)puVar5;
  puVar4 = (undefined8 *)operator_new(0x18);
  puVar3 = puVar7;
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar4 + 1) = 1;
    *puVar4 = &PTR_DestroyObject_144fe7dc8;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
    puVar4[2] = puVar5;
    puVar3 = puVar4;
  }
  param_1[1] = (longlong)puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_1,puVar5,puVar5);
  puVar5 = (undefined8 *)*param_1;
  if ((short *)*puVar5 != param_3) {
    puVar3 = puVar7;
    if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
      lVar11 = -1;
      do {
        lVar11 = lVar11 + 1;
      } while (param_3[lVar11] != 0);
      puVar3 = (undefined8 *)(ulonglong)((int)lVar11 + 1);
    }
    *(undefined4 *)(puVar5 + 1) = 0;
    iVar9 = (int)puVar3;
    puVar4 = puVar7;
    if (*(int *)((longlong)puVar5 + 0xc) != iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar5,puVar3);
      puVar4 = (undefined8 *)(ulonglong)*(uint *)(puVar5 + 1);
    }
    iVar2 = (int)puVar4 + iVar9;
    *(int *)(puVar5 + 1) = iVar2;
    if (*(int *)((longlong)puVar5 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar5);
    }
    if (iVar9 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)*puVar5,param_3,(longlong)iVar9 * 2);
    }
  }
  lVar11 = *param_1;
  iVar9 = *(int *)(param_2 + 0x118);
  iVar2 = *(int *)(lVar11 + 0x20);
  if (iVar2 < iVar9) {
    *(int *)(lVar11 + 0x20) = iVar9;
    iVar10 = iVar9 - iVar2;
    if (*(int *)(lVar11 + 0x24) < iVar9) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
                (lVar11 + 0x18,iVar2);
    }
    puVar6 = (undefined1 *)((longlong)iVar2 * 0x40 + *(longlong *)(lVar11 + 0x18));
    if (iVar10 != 0) {
      puVar5 = (undefined8 *)(puVar6 + 0x20);
      do {
        *puVar6 = 0;
        puVar6 = puVar6 + 0x40;
        *(undefined8 *)((longlong)puVar5 + -0x1c) = 0;
        puVar5[-2] = 0;
        puVar5[-1] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        *(undefined1 *)(puVar5 + 3) = 0;
        puVar5 = puVar5 + 8;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
  }
  else if (iVar9 < iVar2) {
    TArray<FNetFieldExport,FDefaultAllocator>::RemoveAtImpl(lVar11 + 0x18,iVar9,iVar2 - iVar9,1);
  }
  puVar5 = puVar7;
  puVar3 = puVar7;
  if (0 < *(int *)(param_2 + 0x118)) {
    do {
      lVar11 = *(longlong *)((longlong)puVar5 + *(longlong *)(param_2 + 0x110));
      if (*(int *)(lVar11 + 0x10) < 1) {
        puVar4 = &DAT_146aed670;
      }
      else {
        puVar4 = *(undefined8 **)(lVar11 + 8);
      }
      uVar1 = *puVar4;
      puVar6 = (undefined1 *)(*(longlong *)(*param_1 + 0x18) + (longlong)puVar3);
      local_50[0] = 0;
      local_50[1] = 0;
      local_50[2] = 0;
      local_50[3] = 0;
      local_30 = 0;
      *puVar6 = 0;
      *(int *)(puVar6 + 4) = (int)puVar7;
      *(undefined4 *)(puVar6 + 8) = 0;
      *(undefined8 *)(puVar6 + 0x10) = uVar1;
      FString::operator=(puVar6 + 0x18,local_50);
      FString::operator=(puVar6 + 0x28,local_50 + 2);
      puVar6[0x38] = local_30;
      if (local_50[2] != 0) {
        FMemory::Free();
      }
      if (local_50[0] != 0) {
        FMemory::Free();
      }
      uVar8 = (int)puVar7 + 1;
      puVar7 = (undefined8 *)(ulonglong)uVar8;
      puVar5 = puVar5 + 2;
      puVar3 = puVar3 + 8;
    } while ((int)uVar8 < *(int *)(param_2 + 0x118));
  }
  return param_1;
}



// FUNCTION 1421d54b0 FUN_1421d54b0 body=162 status=ok
// SIG undefined FUN_1421d54b0(void)

void FUN_1421d54b0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong local_18;
  longlong *local_10;
  
  plVar1 = (longlong *)(param_1 + 0x38);
  if (*plVar1 != 0) {
    FUN_1421da9e0();
    local_10 = (longlong *)0x0;
    if (plVar1 != &local_18) {
      *plVar1 = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x40,&local_10);
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
    TSet<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FUdpReassembledMessage,1>,0>,FDefaultSetAllocator>
    ::Reset(param_1 + 0x48);
  }
  return;
}



// FUNCTION 1421d5560 FUN_1421d5560 body=20 status=ok
// SIG undefined FUN_1421d5560(void)

void FUN_1421d5560(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FGameplayTagNode::_scalar_deleting_destructor_(*(longlong *)(param_1 + 0x10),1);
    return;
  }
  return;
}



// FUNCTION 1421d5580 DestroyObject body=61 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FNetFieldExportGroup,SharedPointerInternals::DefaultDeleter<FNetFieldExportGroup>_>
     ::DestroyObject(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    TArray<FNetFieldExport,FDefaultAllocator>::~TArray<FNetFieldExport,FDefaultAllocator>
              (plVar1 + 3);
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(plVar1,0x28);
    return;
  }
  return;
}



// FUNCTION 1421d55c0 DoesContainerMatchTagQuery body=104 status=ok
// SIG undefined DoesContainerMatchTagQuery(void)

ulonglong UBlueprintGameplayTagLibrary::DoesContainerMatchTagQuery
                    (undefined8 param_1,longlong param_2)

{
  byte bVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  longlong local_28;
  undefined4 local_20;
  uint local_1c;
  undefined1 local_18;
  
  local_18 = 0;
  if (0 < *(int *)(param_2 + 0x20)) {
    local_1c = (uint)**(byte **)(param_2 + 0x18);
    uVar2 = 0;
    if ((1 < *(int *)(param_2 + 0x20)) &&
       (local_20 = 2, *(char *)(*(longlong *)(param_2 + 0x18) + 1) != '\0')) {
      local_28 = param_2;
      bVar1 = FUN_1421d5950(&local_28,param_1,0);
      uVar2 = (ulonglong)bVar1;
    }
    return uVar2;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1421d5630 DoesTagAssetInterfaceHaveTag body=213 status=ok
// SIG undefined DoesTagAssetInterfaceHaveTag(void)

ulonglong UBlueprintGameplayTagLibrary::DoesTagAssetInterfaceHaveTag
                    (longlong *param_1,longlong param_2)

{
  ulonglong in_RAX;
  longlong *plVar1;
  ulonglong uVar2;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  if ((*param_1 == 0) || (plVar1 = (longlong *)param_1[1], plVar1 == (longlong *)0x0)) {
    return in_RAX & 0xffffffffffffff00;
  }
  local_28 = (longlong *)0x0;
  local_20 = 0;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  (**(code **)(*plVar1 + 0x10))(plVar1,&local_28);
  if (param_2 != 0) {
    for (plVar1 = local_28; plVar1 != local_28 + (int)local_20; plVar1 = plVar1 + 1) {
      if (*plVar1 == param_2) goto LAB_1421d56f9;
    }
    for (plVar1 = local_18; plVar1 != local_18 + (int)local_10; plVar1 = plVar1 + 1) {
      if (*plVar1 == param_2) goto LAB_1421d56f9;
    }
  }
  uVar2 = 0;
LAB_1421d56d1:
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return uVar2;
LAB_1421d56f9:
  uVar2 = 1;
  goto LAB_1421d56d1;
}



// FUNCTION 1421d5710 DoneAddingNativeTags body=88 status=ok
// SIG undefined DoneAddingNativeTags(void)

void UGameplayTagsManager::DoneAddingNativeTags(longlong param_1)

{
  undefined8 uVar1;
  
  if ((DAT_146b17150 != 0) && (*(char *)(param_1 + 0x10a) == '\0')) {
    uVar1 = FUN_1421d9c10();
    TBaseMulticastDelegate<void>::Broadcast(uVar1);
    *(undefined1 *)(param_1 + 0x10a) = 1;
    FUN_1421d54b0(param_1);
    FUN_1421d3a10(param_1);
    uVar1 = FUN_1421d9ba0();
    TBaseMulticastDelegate<void>::Broadcast(uVar1);
    return;
  }
  return;
}



// FUNCTION 1421d5770 EmitTokens body=456 status=ok
// SIG undefined EmitTokens(void)

void FGameplayTagQueryExpression::EmitTokens(int *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  
  iVar2 = (int)param_2[1];
  iVar5 = *param_1;
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
  }
  *(char *)((longlong)iVar2 + *param_2) = (char)iVar5;
  iVar2 = *param_1;
  if (0 < iVar2) {
    if (iVar2 < 4) {
      iVar2 = (int)param_2[1];
      iVar5 = param_1[8];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      uVar11 = 0;
      *(char *)((longlong)iVar2 + *param_2) = (char)iVar5;
      plVar10 = *(longlong **)(param_1 + 6);
      uVar6 = (longlong)param_1[8] & 0x1fffffffffffffff;
      if (plVar10 + param_1[8] < plVar10) {
        uVar6 = uVar11;
      }
      if (uVar6 != 0) {
        do {
          plVar4 = (longlong *)*param_3;
          uVar3 = *(uint *)(param_3 + 1);
          lVar1 = *plVar10;
          for (plVar8 = plVar4; plVar8 != plVar4 + (int)uVar3; plVar8 = plVar8 + 1) {
            if (*plVar8 == lVar1) {
              uVar9 = (longlong)plVar8 - (longlong)plVar4 >> 3;
              if ((int)uVar9 != -1) goto LAB_1421d58ec;
              break;
            }
          }
          *(uint *)(param_3 + 1) = uVar3 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < (int)(uVar3 + 1)) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,uVar3);
          }
          uVar9 = (ulonglong)uVar3;
          *(longlong *)(*param_3 + (longlong)(int)uVar3 * 8) = lVar1;
LAB_1421d58ec:
          iVar2 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
          }
          plVar10 = plVar10 + 1;
          uVar11 = uVar11 + 1;
          *(char *)((longlong)iVar2 + *param_2) = (char)uVar9;
        } while (uVar11 != uVar6);
      }
    }
    else if (iVar2 < 7) {
      iVar2 = (int)param_2[1];
      iVar5 = param_1[4];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      *(char *)((longlong)iVar2 + *param_2) = (char)iVar5;
      lVar7 = *(longlong *)(param_1 + 2);
      lVar1 = lVar7 + (longlong)param_1[4] * 0x28;
      if (lVar7 != lVar1) {
        do {
          EmitTokens(lVar7,param_2,param_3);
          lVar7 = lVar7 + 0x28;
        } while (lVar7 != lVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1421d5940 EqualEqual_GameplayTagContainer body=5 status=ok
// SIG undefined EqualEqual_GameplayTagContainer(void)

ulonglong UBlueprintGameplayTagLibrary::EqualEqual_GameplayTagContainer
                    (longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong in_RAX;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong alStack_28 [4];
  
  iVar5 = (int)param_1[1];
  if (iVar5 != (int)param_2[1]) {
    return in_RAX & 0xffffffffffffff00;
  }
  plVar6 = (longlong *)*param_1;
  iVar7 = 0;
  alStack_28[0] = 0;
  plVar1 = plVar6 + iVar5;
  alStack_28[1] = 0;
  alStack_28[2] = 0;
  alStack_28[3] = 0;
  if (plVar6 != plVar1) {
    do {
      if ((int)param_2[1] != 0) {
        plVar4 = (longlong *)*param_2;
        plVar2 = plVar4 + (int)param_2[1];
        if (plVar4 != plVar2) {
          do {
            if (*plVar4 == *plVar6) {
              FUN_1421d33b0(alStack_28,plVar6);
              break;
            }
            plVar4 = plVar4 + 1;
          } while (plVar4 != plVar2);
        }
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
    iVar5 = (int)param_1[1];
    iVar7 = (int)alStack_28[1];
  }
  lVar3 = alStack_28[0];
  if (alStack_28[2] != 0) {
    FMemory::Free();
  }
  if (lVar3 != 0) {
    FMemory::Free(lVar3);
  }
  return (ulonglong)(iVar7 == iVar5);
}



// FUNCTION 1421d5950 FUN_1421d5950 body=1092 status=ok
// SIG undefined FUN_1421d5950(void)

ulonglong FUN_1421d5950(longlong *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  
  iVar11 = (int)param_1[1];
  if ((iVar11 < 0) || (lVar3 = *param_1, *(int *)(lVar3 + 0x20) <= iVar11)) {
    *(undefined1 *)(param_1 + 2) = 1;
    uVar7 = (longlong)iVar11;
switchD_1421d59c0_default:
    return uVar7 & 0xffffffffffffff00;
  }
  iVar8 = iVar11 + 1;
  *(int *)(param_1 + 1) = iVar8;
  uVar7 = *(ulonglong *)(lVar3 + 0x18);
  if ((char)param_1[2] != '\0') goto switchD_1421d59c0_default;
  uVar6 = *(byte *)((longlong)iVar11 + *(ulonglong *)(lVar3 + 0x18)) - 1;
  uVar7 = (ulonglong)uVar6;
  switch(uVar6) {
  case 0:
    uVar7 = 0;
    if ((-1 < iVar8) && (iVar8 < *(int *)(lVar3 + 0x20))) {
      *(int *)(param_1 + 1) = iVar11 + 2;
      iVar11 = 0;
      bVar2 = *(byte *)((longlong)iVar8 + *(longlong *)(lVar3 + 0x18));
      if (bVar2 == 0) {
        return 0;
      }
LAB_1421d5a00:
      iVar8 = (int)param_1[1];
      if ((-1 < iVar8) && (iVar8 < *(int *)(lVar3 + 0x20))) {
        *(int *)(param_1 + 1) = iVar8 + 1;
        if ((char)param_1[2] != '\0') {
          return 0;
        }
        if ((param_3 == '\0') &&
           (lVar4 = *(longlong *)
                     (*(longlong *)(lVar3 + 8) +
                     (ulonglong)*(byte *)((longlong)iVar8 + *(longlong *)(lVar3 + 0x18)) * 8),
           lVar4 != 0)) {
          plVar9 = (longlong *)*param_2;
          plVar1 = plVar9 + (int)param_2[1];
          for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
            if (*plVar9 == lVar4) goto LAB_1421d5a84;
          }
          plVar9 = (longlong *)param_2[2];
          plVar1 = plVar9 + (int)param_2[3];
          for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
            if (*plVar9 == lVar4) goto LAB_1421d5a84;
          }
        }
        goto LAB_1421d5a8b;
      }
      break;
    }
    break;
  case 1:
    uVar7 = 1;
    if ((-1 < iVar8) && (iVar8 < *(int *)(lVar3 + 0x20))) {
      *(int *)(param_1 + 1) = iVar11 + 2;
      iVar11 = 0;
      bVar2 = *(byte *)((longlong)iVar8 + *(longlong *)(lVar3 + 0x18));
      if (bVar2 == 0) {
        return 1;
      }
      while( true ) {
        iVar8 = (int)param_1[1];
        if ((iVar8 < 0) || (*(int *)(lVar3 + 0x20) <= iVar8)) break;
        *(int *)(param_1 + 1) = iVar8 + 1;
        if ((char)param_1[2] != '\0') {
          return 0;
        }
        if (param_3 == '\0') {
          lVar4 = *(longlong *)
                   (*(longlong *)(lVar3 + 8) +
                   (ulonglong)*(byte *)((longlong)iVar8 + *(longlong *)(lVar3 + 0x18)) * 8);
          if (lVar4 != 0) {
            plVar9 = (longlong *)*param_2;
            plVar1 = plVar9 + (int)param_2[1];
            for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
              if (*plVar9 == lVar4) goto LAB_1421d5b64;
            }
            plVar9 = (longlong *)param_2[2];
            plVar1 = plVar9 + (int)param_2[3];
            for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
              if (*plVar9 == lVar4) goto LAB_1421d5b64;
            }
          }
          param_3 = '\x01';
          uVar7 = 0;
        }
LAB_1421d5b64:
        iVar11 = iVar11 + 1;
        if ((int)(uint)bVar2 <= iVar11) {
          return uVar7;
        }
      }
    }
    break;
  case 2:
    uVar7 = 1;
    if ((-1 < iVar8) && (iVar8 < *(int *)(lVar3 + 0x20))) {
      *(int *)(param_1 + 1) = iVar11 + 2;
      iVar11 = 0;
      bVar2 = *(byte *)((longlong)iVar8 + *(longlong *)(lVar3 + 0x18));
      if (bVar2 == 0) {
        return 1;
      }
LAB_1421d5bb0:
      iVar8 = (int)param_1[1];
      if ((-1 < iVar8) && (iVar8 < *(int *)(lVar3 + 0x20))) {
        *(int *)(param_1 + 1) = iVar8 + 1;
        if ((char)param_1[2] != '\0') {
          return 0;
        }
        if ((param_3 == '\0') &&
           (lVar4 = *(longlong *)
                     (*(longlong *)(lVar3 + 8) +
                     (ulonglong)*(byte *)((longlong)iVar8 + *(longlong *)(lVar3 + 0x18)) * 8),
           lVar4 != 0)) {
          plVar9 = (longlong *)*param_2;
          plVar1 = plVar9 + (int)param_2[1];
          for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
            if (*plVar9 == lVar4) goto LAB_1421d5c34;
          }
          plVar9 = (longlong *)param_2[2];
          plVar1 = plVar9 + (int)param_2[3];
          for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
            if (*plVar9 == lVar4) goto LAB_1421d5c34;
          }
        }
        goto LAB_1421d5c3a;
      }
      break;
    }
    break;
  case 3:
    uVar7 = 0;
    if ((-1 < iVar8) && (iVar8 < *(int *)(lVar3 + 0x20))) {
      *(int *)(param_1 + 1) = iVar11 + 2;
      bVar2 = *(byte *)((longlong)iVar8 + *(longlong *)(lVar3 + 0x18));
      if (bVar2 != 0) {
        uVar10 = (ulonglong)bVar2;
        do {
          cVar5 = FUN_1421d5950(param_1,param_2,param_3);
          if ((param_3 == '\0') && (cVar5 == '\x01')) {
            uVar7 = 1;
            param_3 = '\x01';
          }
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        return uVar7;
      }
      return 0;
    }
    goto LAB_1421d5cad;
  case 4:
    uVar7 = 1;
    if ((-1 < iVar8) && (iVar8 < *(int *)(lVar3 + 0x20))) {
      *(int *)(param_1 + 1) = iVar11 + 2;
      bVar2 = *(byte *)((longlong)iVar8 + *(longlong *)(lVar3 + 0x18));
      if (bVar2 != 0) {
        uVar10 = (ulonglong)bVar2;
        do {
          cVar5 = FUN_1421d5950(param_1,param_2,param_3);
          if ((param_3 == '\0') && (cVar5 == '\0')) {
            uVar7 = 0;
            param_3 = '\x01';
          }
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        return uVar7;
      }
      return 1;
    }
    goto LAB_1421d5cad;
  case 5:
    uVar7 = 1;
    if ((-1 < iVar8) && (iVar8 < *(int *)(lVar3 + 0x20))) {
      *(int *)(param_1 + 1) = iVar11 + 2;
      bVar2 = *(byte *)((longlong)iVar8 + *(longlong *)(lVar3 + 0x18));
      if (bVar2 != 0) {
        uVar10 = (ulonglong)bVar2;
        do {
          cVar5 = FUN_1421d5950(param_1,param_2,param_3);
          if ((param_3 == '\0') && (cVar5 == '\x01')) {
            uVar7 = 0;
            param_3 = '\x01';
          }
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        return uVar7;
      }
      return 1;
    }
LAB_1421d5cad:
    *(undefined1 *)(param_1 + 2) = 1;
    return 0;
  default:
    goto switchD_1421d59c0_default;
  }
  *(undefined1 *)(param_1 + 2) = 1;
  return 0;
LAB_1421d5c34:
  param_3 = '\x01';
  uVar7 = 0;
LAB_1421d5c3a:
  iVar11 = iVar11 + 1;
  if ((int)(uint)bVar2 <= iVar11) {
    return uVar7;
  }
  goto LAB_1421d5bb0;
LAB_1421d5a84:
  param_3 = '\x01';
  uVar7 = 1;
LAB_1421d5a8b:
  iVar11 = iVar11 + 1;
  if ((int)(uint)bVar2 <= iVar11) {
    return uVar7;
  }
  goto LAB_1421d5a00;
}



// FUNCTION 1421d5db0 FUN_1421d5db0 body=453 status=ok
// SIG undefined FUN_1421d5db0(void)

void FUN_1421d5db0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  *(undefined4 *)(param_1 + 3) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x1c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 2,0);
  }
  plVar8 = (longlong *)*param_1;
  plVar2 = plVar8 + (int)param_1[1];
  do {
    if (plVar8 == plVar2) {
      return;
    }
    if (DAT_146aed668 == 0) {
      FUN_1421d75c0();
    }
    if (*(int *)(DAT_146aed668 + 0x50) != *(int *)(DAT_146aed668 + 0x7c)) {
      lVar3 = *plVar8;
      lVar6 = *(longlong *)(DAT_146aed668 + 0x88);
      if (*(longlong *)(DAT_146aed668 + 0x88) == 0) {
        lVar6 = DAT_146aed668 + 0x80;
      }
      iVar4 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                               (longlong)*(int *)(DAT_146aed668 + 0x90) - 1U) * 4);
      if (iVar4 != -1) {
        do {
          plVar7 = (longlong *)((longlong)iVar4 * 0x20 + *(longlong *)(DAT_146aed668 + 0x48));
          if (*plVar7 == lVar3) {
            if (iVar4 != -1) goto LAB_1421d5e82;
            break;
          }
          iVar4 = (int)plVar7[3];
        } while (iVar4 != -1);
      }
    }
    plVar7 = (longlong *)0x0;
LAB_1421d5e82:
    plVar5 = plVar7 + 1;
    if (plVar7 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    if (plVar5 != (longlong *)0x0) {
      lVar3 = *plVar5;
      plVar7 = (longlong *)plVar5[1];
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      if (lVar3 == 0) {
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar7 + 1;
          lVar3 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
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
      }
      else {
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar7 + 1;
          lVar6 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
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
        if (lVar3 != -8) {
          lVar6 = *(longlong *)(lVar3 + 0x18);
          lVar3 = lVar6 + (longlong)*(int *)(lVar3 + 0x20) * 8;
          for (; lVar6 != lVar3; lVar6 = lVar6 + 8) {
            TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
            AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 2,lVar6);
          }
        }
      }
    }
    plVar8 = plVar8 + 1;
  } while( true );
}



// FUNCTION 1421d5f80 FUN_1421d5f80 body=755 status=ok
// SIG undefined FUN_1421d5f80(void)

longlong * FUN_1421d5f80(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  bool bVar10;
  longlong local_res10;
  longlong local_58;
  undefined8 local_50;
  longlong local_48 [2];
  longlong local_38 [2];
  
  plVar8 = (longlong *)(param_1 + 0xa8);
  plVar2 = (longlong *)*plVar8;
  iVar1 = *(int *)(param_1 + 0xb0);
  plVar3 = plVar2 + (longlong)iVar1 * 4;
  for (; plVar2 != plVar3; plVar2 = plVar2 + 4) {
    if (*plVar2 == param_2) {
      return plVar2;
    }
  }
  *(int *)(param_1 + 0xb0) = iVar1 + 1;
  local_res10 = param_2;
  if (*(int *)(param_1 + 0xb4) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar8,iVar1);
  }
  lVar5 = local_res10;
  plVar8 = (longlong *)((longlong)iVar1 * 0x20 + *plVar8);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    *plVar8 = local_res10;
    plVar8[2] = 0;
    plVar8[3] = 0;
    *(char *)(plVar8 + 1) = param_3;
  }
  if (param_3 == '\x01') {
    plVar3 = (longlong *)UGameplayTagsSettings::GetPrivateStaticClass();
    lVar5 = plVar3[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      lVar5 = plVar3[0x1f];
    }
    plVar8[2] = lVar5;
  }
  else {
    if (param_3 == '\x02') {
      if (local_res10 == 0) {
        FUN_1417846f0(param_1,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
      }
      uVar4 = UGameplayTagsList::GetPrivateStaticClass();
      lVar5 = FUN_1417985e0(uVar4,param_1,lVar5,0x40,0,0,0,0,0);
      plVar8[2] = lVar5;
      puVar6 = (undefined8 *)FName::ToString(&local_res10,local_38);
      puVar7 = &DAT_143f3eda8;
      if (*(int *)(puVar6 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*puVar6;
      }
      puVar6 = (undefined8 *)FPaths::ProjectConfigDir(local_48);
      if (*(int *)(puVar6 + 1) != 0) {
        puVar7 = (undefined2 *)*puVar6;
      }
      FString::PrintfImpl(&local_58,L"%sTags/%s",puVar7,puVar9);
      lVar5 = plVar8[2];
      plVar3 = (longlong *)(lVar5 + 0x28);
      if (plVar3 != &local_58) {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        *plVar3 = local_58;
        local_58 = 0;
        *(undefined4 *)(lVar5 + 0x30) = (undefined4)local_50;
        *(undefined4 *)(lVar5 + 0x34) = local_50._4_4_;
        local_50 = 0;
      }
      if (local_58 != 0) {
        FMemory::Free();
      }
      bVar10 = local_48[0] != 0;
      local_48[0] = local_38[0];
      if (bVar10) {
        FMemory::Free();
        local_48[0] = local_38[0];
      }
    }
    else {
      if (param_3 != '\x03') {
        return plVar8;
      }
      if (local_res10 == 0) {
        FUN_1417846f0(param_1,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
      }
      uVar4 = URestrictedGameplayTagsList::GetPrivateStaticClass();
      lVar5 = FUN_1417985e0(uVar4,param_1,lVar5,0x40,0,0,0,0,0);
      plVar8[3] = lVar5;
      puVar6 = (undefined8 *)FName::ToString(&local_res10,local_48);
      puVar7 = &DAT_143f3eda8;
      if (*(int *)(puVar6 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*puVar6;
      }
      puVar6 = (undefined8 *)FPaths::ProjectConfigDir(local_38);
      if (*(int *)(puVar6 + 1) != 0) {
        puVar7 = (undefined2 *)*puVar6;
      }
      FString::PrintfImpl(&local_58,L"%sTags/%s",puVar7,puVar9);
      lVar5 = plVar8[3];
      plVar3 = (longlong *)(lVar5 + 0x28);
      if (plVar3 != &local_58) {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        *plVar3 = local_58;
        local_58 = 0;
        *(undefined4 *)(lVar5 + 0x30) = (undefined4)local_50;
        *(undefined4 *)(lVar5 + 0x34) = local_50._4_4_;
        local_50 = 0;
      }
      if (local_58 != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  return plVar8;
}



// FUNCTION 1421d6280 FUN_1421d6280 body=1126 status=ok
// SIG undefined FUN_1421d6280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1421d6280(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  undefined1 auStack_128 [32];
  char local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong *local_b8;
  longlong local_b0;
  uint local_a8 [2];
  longlong local_a0;
  longlong local_98;
  int local_90;
  int local_88;
  char local_84;
  int local_80;
  longlong local_78;
  longlong local_70;
  int local_68;
  undefined8 local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  *(undefined4 *)(param_4 + 1) = 0;
  local_b8 = param_4;
  local_b0 = param_3;
  if (*(int *)((longlong)param_4 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_4,0);
  }
  local_c0 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (param_2 != 0) {
    lVar8 = FUN_1428dfc70();
    lVar14 = param_2;
    do {
      if (lVar14 == lVar8) {
        if (local_c0 == 0) {
          return;
        }
        local_108 = '\0';
        local_50 = '\0';
        local_a8[0] = 5;
        local_c8 = param_2;
        FUN_14044bc80(&local_a0,&local_c0,&local_c8);
        FUN_14045a130(local_a8);
        cVar6 = '\0';
        iVar19 = local_88;
        lVar14 = local_78;
joined_r0x0001421d635d:
        local_88 = iVar19;
        local_78 = lVar14;
        if (local_84 == '\0') {
          lVar8 = 0;
          iVar19 = *(int *)(lVar14 + 0xc);
          if (iVar19 < (int)DAT_1469e91c4) {
            uVar15 = iVar19 >> 0x1f & 0xffff;
            uVar7 = iVar19 + uVar15;
            lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                    (longlong)(int)((uVar7 & 0xffff) - uVar15) * 0x18;
          }
          if ((*(uint *)(lVar8 + 8) >> 0x1d & 1) == 0) {
            uVar9 = UGameplayTagAssetInterface::GetPrivateStaticClass();
            plVar10 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar14,uVar9);
            if (plVar10 == (longlong *)0x0) {
              local_108 = cVar6;
              if (cVar6 == '\0') {
                local_108 = '\x01';
              }
            }
            else {
              local_e8 = 0;
              local_e0 = 0;
              local_d8 = 0;
              local_d0 = 0;
              (**(code **)(*plVar10 + 0x10))(plVar10,&local_e8);
              local_f8 = 0;
              local_f0 = 0;
              local_100 = param_3;
              if (0 < *(int *)(param_3 + 0x20)) {
                local_f8 = (ulonglong)CONCAT14(**(byte **)(param_3 + 0x18),1);
                if (1 < *(int *)(param_3 + 0x20)) {
                  local_f8 = CONCAT44((uint)**(byte **)(param_3 + 0x18),2);
                  if ((*(char *)(*(longlong *)(param_3 + 0x18) + 1) != '\0') &&
                     (cVar6 = FUN_1421d5950(&local_100,&local_e8,0), cVar6 != '\0')) {
                    iVar19 = (int)param_4[1];
                    *(int *)(param_4 + 1) = iVar19 + 1;
                    if (*(int *)((longlong)param_4 + 0xc) < iVar19 + 1) {
                      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                (param_4,iVar19);
                    }
                    *(longlong *)(*param_4 + (longlong)iVar19 * 8) = lVar14;
                  }
                }
              }
              if (local_d8 != 0) {
                FMemory::Free();
              }
              if (local_e8 != 0) {
                FMemory::Free();
              }
            }
          }
          lVar8 = local_a0;
          iVar19 = local_88 + 1;
          if (iVar19 < local_68 + local_90) {
            lVar18 = (longlong)iVar19 * 8;
            iVar17 = local_68;
            iVar16 = local_90;
            do {
              if (iVar19 < iVar16) {
                lVar14 = *(longlong *)(lVar18 + local_98);
              }
              else {
                lVar14 = *(longlong *)(local_70 + (longlong)(iVar19 - iVar16) * 8);
              }
              local_80 = local_80 + 1;
              if ((lVar14 != 0) &&
                 (lVar11 = AActor::GetLevel(lVar14), iVar17 = local_68, iVar16 = local_90,
                 lVar11 != 0)) {
                if ((local_a8[0] & 1) != 0) {
                  iVar1 = *(int *)(lVar14 + 0xc);
                  if (iVar1 < (int)DAT_1469e91c4) {
                    uVar15 = iVar1 >> 0x1f & 0xffff;
                    uVar7 = iVar1 + uVar15;
                    lVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                             (longlong)(int)((uVar7 & 0xffff) - uVar15) * 0x18;
                  }
                  else {
                    lVar12 = 0;
                  }
                  if ((*(uint *)(lVar12 + 8) >> 0x1d & 1) != 0) goto LAB_1421d6645;
                }
                if (((local_a8[0] >> 1 & 1) == 0) ||
                   (cVar6 = FOutputDevice::CanBeUsedOnAnyThread(lVar14), iVar17 = local_68,
                   iVar16 = local_90, cVar6 != '\0')) {
                  if ((local_a8[0] >> 2 & 1) != 0) {
                    if (((*(byte *)(lVar11 + 0x204) & 0x10) == 0) &&
                       ((*(byte *)(lVar11 + 0x205) & 0x10) == 0)) {
                      bVar5 = false;
                    }
                    else {
                      bVar5 = true;
                    }
                    piVar2 = *(int **)(lVar11 + 600);
                    if (((*(longlong *)(lVar11 + 0xc0) == 0) ||
                        (piVar13 = (int *)UWorld::GetActiveLevelCollection(), piVar13 == (int *)0x0)
                        ) || (piVar2 == piVar13)) {
                      bVar3 = true;
                    }
                    else {
                      bVar3 = false;
                    }
                    if ((piVar2 == (int *)0x0) || (*piVar2 == 2)) {
                      bVar4 = true;
                    }
                    else {
                      bVar4 = false;
                    }
                    if ((bVar3) || (bVar3 = false, bVar4)) {
                      bVar3 = true;
                    }
                    iVar17 = local_68;
                    iVar16 = local_90;
                    if ((!bVar5) || (!bVar3)) goto LAB_1421d6645;
                  }
                  lVar11 = ULevel::GetWorld(lVar11);
                  iVar17 = local_68;
                  iVar16 = local_90;
                  if (lVar11 == lVar8) {
                    lVar11 = AActor::GetLevel(lVar14);
                    param_4 = local_b8;
                    param_3 = local_b0;
                    cVar6 = local_108;
                    if (lVar11 == *(longlong *)(lVar8 + 0x30)) goto joined_r0x0001421d635d;
                    lVar11 = UVoipListenerSynthComponent::GetPrivateStaticClass();
                    if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                         (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
                      bVar5 = false;
                    }
                    else {
                      bVar5 = true;
                    }
                    iVar17 = local_68;
                    iVar16 = local_90;
                    param_4 = local_b8;
                    param_3 = local_b0;
                    cVar6 = local_108;
                    if (!bVar5) goto joined_r0x0001421d635d;
                  }
                }
              }
LAB_1421d6645:
              iVar19 = iVar19 + 1;
              lVar18 = lVar18 + 8;
              if (iVar17 + iVar16 <= iVar19) break;
            } while( true );
          }
          local_78 = 0;
          local_84 = '\x01';
        }
        if (local_50 == '\0') {
          return;
        }
        local_50 = 0;
        UWorld::RemoveOnActorSpawnedHandler(local_a0,local_58);
        if (local_70 != 0) {
          FMemory::Free();
        }
        if (local_98 == 0) {
          return;
        }
        FMemory::Free();
        return;
      }
      lVar14 = *(longlong *)(lVar14 + 0x30);
    } while (lVar14 != 0);
  }
  return;
}



// FUNCTION 1421d66f0 GetDebugStringFromGameplayTag body=35 status=ok
// SIG undefined GetDebugStringFromGameplayTag(void)

undefined8
UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTag(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FName::ToString(local_res10,param_1);
  return param_1;
}



// FUNCTION 1421d6720 GetDebugStringFromGameplayTagContainer body=332 status=ok
// SIG undefined GetDebugStringFromGameplayTagContainer(void)

longlong *
UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTagContainer
          (longlong *param_1,longlong *param_2)

{
  void *_Dst;
  undefined4 *puVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_28;
  int local_20;
  
  iVar4 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (0 < (int)param_2[1]) {
    do {
      FName::ToString(*param_2 + (longlong)iVar4 * 8,&local_28);
      _Src = local_28;
      iVar5 = 0;
      if (local_20 != 0) {
        iVar5 = local_20 + -1;
      }
      if (iVar5 != 0) {
        iVar3 = (int)param_1[1];
        iVar2 = (uint)(iVar3 == 0) + iVar3 + iVar5;
        *(int *)(param_1 + 1) = iVar2;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
        }
        _Dst = (void *)(*param_1 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar5 * 2);
        *(undefined2 *)((longlong)iVar5 * 2 + (longlong)_Dst) = 0;
      }
      if (local_28 != (void *)0x0) {
        FMemory::Free(local_28);
      }
      iVar5 = (int)param_2[1];
      if (iVar4 < iVar5 + -1) {
        iVar5 = (int)param_1[1];
        iVar3 = (3 - (uint)(iVar5 != 0)) + iVar5;
        *(int *)(param_1 + 1) = iVar3;
        if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar5);
        }
        puVar1 = (undefined4 *)(*param_1 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
        *puVar1 = 0x20002c;
        *(undefined2 *)(puVar1 + 1) = 0;
        iVar5 = (int)param_2[1];
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  return param_1;
}



// FUNCTION 1421d6870 GetGameplayTagParents body=105 status=ok
// SIG undefined GetGameplayTagParents(void)

undefined8 * FGameplayTagContainer::GetGameplayTagParents(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  TArray<FName,FDefaultAllocator>::operator=(param_2,param_1);
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar1 = lVar2 + (longlong)*(int *)(param_1 + 0x18) * 8;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 8) {
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2,lVar2);
  }
  return param_2;
}



// FUNCTION 1421d68e0 FUN_1421d68e0 body=273 status=ok
// SIG undefined FUN_1421d68e0(void)

undefined2 FUN_1421d68e0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined2 uVar7;
  longlong *plVar8;
  
  plVar6 = (longlong *)0x0;
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    lVar2 = *param_2;
    lVar4 = *(longlong *)(param_1 + 0x88);
    if (*(longlong *)(param_1 + 0x88) == 0) {
      lVar4 = param_1 + 0x80;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                             (longlong)*(int *)(param_1 + 0x90) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar8 = (longlong *)((longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x48));
        if (*plVar8 == lVar2) {
          if (iVar3 != -1) goto LAB_1421d6962;
          break;
        }
        iVar3 = (int)plVar8[3];
      } while (iVar3 != -1);
    }
  }
  plVar8 = plVar6;
LAB_1421d6962:
  plVar5 = plVar8 + 1;
  if (plVar8 == (longlong *)0x0) {
    plVar5 = plVar6;
  }
  if (plVar5 != (longlong *)0x0) {
    plVar6 = (longlong *)plVar5[1];
    lVar2 = *plVar5;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    if (lVar2 != 0) {
      uVar7 = *(undefined2 *)(lVar2 + 0x48);
      goto LAB_1421d6997;
    }
  }
  uVar7 = *(undefined2 *)(param_1 + 0x34);
LAB_1421d6997:
  if (plVar6 == (longlong *)0x0) {
    return uVar7;
  }
  LOCK();
  plVar8 = plVar6 + 1;
  lVar2 = *plVar8;
  *(int *)plVar8 = (int)*plVar8 + -1;
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
  return uVar7;
}



// FUNCTION 1421d6a00 FUN_1421d6a00 body=42 status=ok
// SIG undefined FUN_1421d6a00(void)

void FUN_1421d6a00(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x30))();
  if (lVar1 != 0) {
    FGameplayTagContainer::AppendTags(param_2,lVar1);
    return;
  }
  return;
}



// FUNCTION 1421d6a30 FUN_1421d6a30 body=378 status=ok
// SIG undefined FUN_1421d6a30(void)

undefined8 FUN_1421d6a30(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *local_28;
  longlong *local_20;
  longlong *local_18;
  longlong *local_10;
  
  local_28 = (longlong *)(**(code **)(*param_1 + 0x30))();
  if (local_28 != (longlong *)0x0) {
    if ((int)param_2[1] != 0) {
      plVar6 = (longlong *)*param_2;
      plVar1 = plVar6 + (int)param_2[1];
      if (plVar6 != plVar1) {
        plVar3 = (longlong *)*local_28;
        do {
          if (plVar3 != plVar3 + (int)local_28[1]) {
            plVar2 = plVar3;
            do {
              if (*plVar2 == *plVar6) goto LAB_1421d6acd;
              plVar2 = plVar2 + 1;
            } while (plVar2 != plVar3 + (int)local_28[1]);
          }
          plVar4 = (longlong *)local_28[2];
          plVar2 = plVar4 + (int)local_28[3];
          if (plVar4 == plVar2) {
            return 0;
          }
          while (*plVar4 != *plVar6) {
            plVar4 = plVar4 + 1;
            if (plVar4 == plVar2) {
              return 0;
            }
          }
LAB_1421d6acd:
          plVar6 = plVar6 + 1;
        } while (plVar6 != plVar1);
      }
    }
    return 1;
  }
  local_20 = local_28;
  local_18 = local_28;
  local_10 = local_28;
  (**(code **)(*param_1 + 0x10))(param_1,&local_28);
  if ((int)param_2[1] != 0) {
    plVar6 = (longlong *)*param_2;
    plVar1 = plVar6 + (int)param_2[1];
    if (plVar6 != plVar1) {
      do {
        if (local_28 != local_28 + (int)local_20) {
          plVar3 = local_28;
          do {
            if (*plVar3 == *plVar6) goto LAB_1421d6b72;
            plVar3 = plVar3 + 1;
          } while (plVar3 != local_28 + (int)local_20);
        }
        if (local_18 == local_18 + (int)local_10) {
LAB_1421d6b6e:
          uVar5 = 0;
          goto LAB_1421d6b7d;
        }
        plVar3 = local_18;
        while (*plVar3 != *plVar6) {
          plVar3 = plVar3 + 1;
          if (plVar3 == local_18 + (int)local_10) goto LAB_1421d6b6e;
        }
LAB_1421d6b72:
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar1);
    }
  }
  uVar5 = 1;
LAB_1421d6b7d:
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return uVar5;
}



// FUNCTION 1421d6bb0 HasAllMatchingGameplayTags body=247 status=ok
// SIG undefined HasAllMatchingGameplayTags(void)

bool UBlueprintGameplayTagLibrary::HasAllMatchingGameplayTags(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  if ((*param_1 == 0) || (plVar1 = (longlong *)param_1[1], plVar1 == (longlong *)0x0)) {
    return (int)param_2[1] == 0;
  }
  local_28 = (longlong *)0x0;
  local_20 = 0;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  (**(code **)(*plVar1 + 0x10))(plVar1,&local_28);
  if ((int)param_2[1] != 0) {
    plVar4 = (longlong *)*param_2;
    plVar1 = plVar4 + (int)param_2[1];
    if (plVar4 != plVar1) {
      do {
        if (local_28 != local_28 + (int)local_20) {
          plVar2 = local_28;
          do {
            if (*plVar2 == *plVar4) goto LAB_1421d6c62;
            plVar2 = plVar2 + 1;
          } while (plVar2 != local_28 + (int)local_20);
        }
        if (local_18 == local_18 + (int)local_10) {
LAB_1421d6c5e:
          bVar3 = false;
          goto LAB_1421d6c6d;
        }
        plVar2 = local_18;
        while (*plVar2 != *plVar4) {
          plVar2 = plVar2 + 1;
          if (plVar2 == local_18 + (int)local_10) goto LAB_1421d6c5e;
        }
LAB_1421d6c62:
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar1);
    }
  }
  bVar3 = true;
LAB_1421d6c6d:
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return bVar3;
}



// FUNCTION 1421d6cb0 HasAllTags body=239 status=ok
// SIG undefined HasAllTags(void)

ulonglong UBlueprintGameplayTagLibrary::HasAllTags(longlong *param_1,longlong *param_2,char param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  iVar2 = (int)param_2[1];
  plVar4 = (longlong *)(longlong)iVar2;
  if (param_3 == '\0') {
    if (iVar2 != 0) {
      param_2 = (longlong *)*param_2;
      plVar3 = param_2 + (longlong)plVar4;
      if (param_2 != plVar3) {
        plVar5 = (longlong *)*param_1;
        do {
          if (plVar5 != plVar5 + (int)param_1[1]) {
            plVar4 = plVar5;
            do {
              if (*plVar4 == *param_2) goto LAB_1421d6d8b;
              plVar4 = plVar4 + 1;
            } while (plVar4 != plVar5 + (int)param_1[1]);
          }
          puVar6 = (undefined8 *)param_1[2];
          plVar4 = (longlong *)(longlong)(int)param_1[3];
          puVar1 = puVar6 + (longlong)plVar4;
          if (puVar6 == puVar1) {
LAB_1421d6d80:
            return (ulonglong)plVar4 & 0xffffffffffffff00;
          }
          plVar4 = (longlong *)*param_2;
          while ((longlong *)*puVar6 != plVar4) {
            puVar6 = puVar6 + 1;
            if (puVar6 == puVar1) goto LAB_1421d6d80;
          }
LAB_1421d6d8b:
          param_2 = param_2 + 1;
        } while (param_2 != plVar3);
      }
      return CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
    }
  }
  else if (iVar2 != 0) {
    param_2 = (longlong *)*param_2;
    plVar4 = param_2 + (longlong)plVar4;
    if (param_2 != plVar4) {
      plVar3 = (longlong *)*param_1;
      while (plVar5 = plVar3, plVar3 != plVar3 + (int)param_1[1]) {
        while (*plVar5 != *param_2) {
          plVar5 = plVar5 + 1;
          if (plVar5 == plVar3 + (int)param_1[1]) goto LAB_1421d6cfe;
        }
        param_2 = param_2 + 1;
        if (param_2 == plVar4) {
          return CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
        }
      }
LAB_1421d6cfe:
      return (ulonglong)plVar5 & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)(int3)((uint)iVar2 >> 8),1);
}



// FUNCTION 1421d6da0 FUN_1421d6da0 body=378 status=ok
// SIG undefined FUN_1421d6da0(void)

ulonglong FUN_1421d6da0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *local_28;
  longlong *local_20;
  longlong *local_18;
  longlong *local_10;
  
  local_28 = (longlong *)(**(code **)(*param_1 + 0x30))();
  if (local_28 != (longlong *)0x0) {
    iVar2 = (int)param_2[1];
    plVar3 = local_28;
    if (iVar2 != 0) {
      param_2 = (longlong *)*param_2;
      plVar7 = param_2 + iVar2;
      plVar3 = (longlong *)(longlong)iVar2;
      if (param_2 != plVar7) {
        plVar4 = (longlong *)*local_28;
        do {
          if (plVar4 != plVar4 + (int)local_28[1]) {
            plVar3 = plVar4;
            do {
              if (*plVar3 == *param_2) goto LAB_1421d6e46;
              plVar3 = plVar3 + 1;
            } while (plVar3 != plVar4 + (int)local_28[1]);
          }
          puVar5 = (undefined8 *)local_28[2];
          plVar3 = (longlong *)(longlong)(int)local_28[3];
          puVar1 = puVar5 + (longlong)plVar3;
          if (puVar5 != puVar1) {
            plVar3 = (longlong *)*param_2;
            do {
              if ((longlong *)*puVar5 == plVar3) {
LAB_1421d6e46:
                return CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
              }
              puVar5 = puVar5 + 1;
            } while (puVar5 != puVar1);
          }
          param_2 = param_2 + 1;
        } while (param_2 != plVar7);
      }
    }
    return (ulonglong)plVar3 & 0xffffffffffffff00;
  }
  local_20 = local_28;
  local_18 = local_28;
  local_10 = local_28;
  (**(code **)(*param_1 + 0x10))(param_1,&local_28);
  if ((int)param_2[1] != 0) {
    plVar7 = (longlong *)*param_2;
    plVar3 = plVar7 + (int)param_2[1];
    if (plVar7 != plVar3) {
      do {
        if (local_28 != local_28 + (int)local_20) {
          plVar4 = local_28;
          do {
            if (*plVar4 == *plVar7) goto LAB_1421d6f16;
            plVar4 = plVar4 + 1;
          } while (plVar4 != local_28 + (int)local_20);
        }
        if (local_18 != local_18 + (int)local_10) {
          plVar4 = local_18;
          do {
            if (*plVar4 == *plVar7) goto LAB_1421d6f16;
            plVar4 = plVar4 + 1;
          } while (plVar4 != local_18 + (int)local_10);
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar3);
    }
  }
  uVar6 = 0;
LAB_1421d6ee9:
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return uVar6;
LAB_1421d6f16:
  uVar6 = 1;
  goto LAB_1421d6ee9;
}



// FUNCTION 1421d6f20 HasAnyTags body=239 status=ok
// SIG undefined HasAnyTags(void)

ulonglong UBlueprintGameplayTagLibrary::HasAnyTags(longlong *param_1,longlong *param_2,char param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  iVar2 = (int)param_2[1];
  plVar4 = (longlong *)(longlong)iVar2;
  if (param_3 == '\0') {
    if (iVar2 != 0) {
      param_2 = (longlong *)*param_2;
      plVar3 = param_2 + (longlong)plVar4;
      if (param_2 != plVar3) {
        plVar5 = (longlong *)*param_1;
        do {
          if (plVar5 != plVar5 + (int)param_1[1]) {
            plVar4 = plVar5;
            do {
              if (*plVar4 == *param_2) goto LAB_1421d7004;
              plVar4 = plVar4 + 1;
            } while (plVar4 != plVar5 + (int)param_1[1]);
          }
          puVar6 = (undefined8 *)param_1[2];
          plVar4 = (longlong *)(longlong)(int)param_1[3];
          puVar1 = puVar6 + (longlong)plVar4;
          if (puVar6 != puVar1) {
            plVar4 = (longlong *)*param_2;
            do {
              if ((longlong *)*puVar6 == plVar4) {
LAB_1421d7004:
                return CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
              }
              puVar6 = puVar6 + 1;
            } while (puVar6 != puVar1);
          }
          param_2 = param_2 + 1;
        } while (param_2 != plVar3);
      }
      return (ulonglong)plVar4 & 0xffffffffffffff00;
    }
  }
  else if (iVar2 != 0) {
    param_2 = (longlong *)*param_2;
    plVar4 = param_2 + (longlong)plVar4;
    if (param_2 != plVar4) {
      plVar3 = (longlong *)*param_1;
      do {
        plVar5 = plVar3;
        if (plVar3 != plVar3 + (int)param_1[1]) {
          do {
            if (*plVar5 == *param_2) {
              return CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
            }
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar3 + (int)param_1[1]);
        }
        param_2 = param_2 + 1;
      } while (param_2 != plVar4);
      return (ulonglong)plVar5 & 0xffffffffffffff00;
    }
  }
  return (ulonglong)(uint7)(int7)(int3)((uint)iVar2 >> 8) << 8;
}



// FUNCTION 1421d7010 FUN_1421d7010 body=326 status=ok
// SIG undefined FUN_1421d7010(void)

ulonglong FUN_1421d7010(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x30))();
  if (plVar2 != (longlong *)0x0) {
    if (param_2 != 0) {
      plVar4 = (longlong *)*plVar2;
      plVar1 = plVar4 + (int)plVar2[1];
      for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
        plVar3 = (longlong *)(longlong)(int)plVar2[1];
        if (*plVar4 == param_2) goto LAB_1421d7090;
      }
      plVar4 = (longlong *)plVar2[2];
      plVar2 = (longlong *)(longlong)(int)plVar2[3];
      plVar1 = plVar4 + (longlong)plVar2;
      for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
        plVar3 = plVar2;
        if (*plVar4 == param_2) {
LAB_1421d7090:
          return CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
        }
      }
    }
    return (ulonglong)plVar2 & 0xffffffffffffff00;
  }
  local_28 = (longlong *)0x0;
  local_20 = 0;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  (**(code **)(*param_1 + 0x10))(param_1,&local_28);
  if (param_2 != 0) {
    for (plVar2 = local_28; plVar2 != local_28 + (int)local_20; plVar2 = plVar2 + 1) {
      if (*plVar2 == param_2) goto LAB_1421d7152;
    }
    for (plVar2 = local_18; plVar2 != local_18 + (int)local_10; plVar2 = plVar2 + 1) {
      if (*plVar2 == param_2) goto LAB_1421d7152;
    }
  }
  uVar5 = 0;
LAB_1421d7120:
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return uVar5;
LAB_1421d7152:
  uVar5 = 1;
  goto LAB_1421d7120;
}



// FUNCTION 1421d7160 HasTag body=132 status=ok
// SIG undefined HasTag(void)

ulonglong UBlueprintGameplayTagLibrary::HasTag(longlong *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  if (param_3 == '\0') {
    if (param_2 == 0) {
      return 0;
    }
    plVar3 = (longlong *)*param_1;
    uVar2 = (ulonglong)(int)param_1[1];
    plVar1 = plVar3 + uVar2;
    for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      if (*plVar3 == param_2) goto LAB_1421d71e1;
    }
    plVar3 = (longlong *)param_1[2];
    uVar2 = (ulonglong)(int)param_1[3];
    plVar1 = plVar3 + uVar2;
    if (plVar3 != plVar1) {
      while (*plVar3 != param_2) {
        plVar3 = plVar3 + 1;
        if (plVar3 == plVar1) {
          return (ulonglong)(uint7)(int7)(int3)((uint)(int)param_1[3] >> 8) << 8;
        }
      }
LAB_1421d71e1:
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  else {
    if (param_2 == 0) {
      return 0;
    }
    plVar3 = (longlong *)*param_1;
    uVar2 = (ulonglong)(int)param_1[1];
    plVar1 = plVar3 + uVar2;
    for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      if (*plVar3 == param_2) goto LAB_1421d71e1;
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1421d71f0 FUN_1421d71f0 body=446 status=ok
// SIG undefined FUN_1421d71f0(void)

undefined8 FUN_1421d71f0(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)0x0;
  iVar3 = (int)((ulonglong)param_3 >> 0x20);
  if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x174)) {
    lVar6 = *(longlong *)(param_1 + 0x180);
    if (*(longlong *)(param_1 + 0x180) == 0) {
      lVar6 = param_1 + 0x178;
    }
    iVar4 = *(int *)(lVar6 + ((longlong)(iVar3 + (int)param_3) &
                             (longlong)*(int *)(param_1 + 0x188) - 1U) * 4);
    if (iVar4 != -1) {
      do {
        plVar7 = (longlong *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar4 * 0x18);
        if (*(longlong *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar4 * 0x18) == param_3) {
          if (iVar4 != -1) goto LAB_1421d7283;
          break;
        }
        iVar4 = (int)plVar7[2];
      } while (iVar4 != -1);
    }
  }
  plVar7 = plVar8;
LAB_1421d7283:
  plVar5 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar5 = plVar8;
  }
  if (plVar5 != (longlong *)0x0) {
    *param_2 = *plVar5;
    return 1;
  }
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    lVar6 = *(longlong *)(param_1 + 0x88);
    if (*(longlong *)(param_1 + 0x88) == 0) {
      lVar6 = param_1 + 0x80;
    }
    iVar3 = *(int *)(lVar6 + ((longlong)(iVar3 + (int)param_3) &
                             (longlong)*(int *)(param_1 + 0x90) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar7 = (longlong *)((longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x48));
        if (*plVar7 == param_3) {
          if (iVar3 != -1) goto LAB_1421d7312;
          break;
        }
        iVar3 = (int)plVar7[3];
      } while (iVar3 != -1);
    }
  }
  plVar7 = plVar8;
LAB_1421d7312:
  plVar5 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar5 = plVar8;
  }
  if (plVar5 != (longlong *)0x0) {
    lVar6 = *plVar5;
    plVar8 = (longlong *)plVar5[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar8 + 1;
        lVar2 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
    }
    if (lVar6 != 0) {
      *param_2 = param_3;
      return 1;
    }
  }
  *param_2 = 0;
  return 0;
}



// FUNCTION 1421d73b0 ImportTextItem body=320 status=ok
// SIG undefined ImportTextItem(void)

undefined1 FGameplayTag::ImportTextItem(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  wint_t wVar2;
  wint_t wVar3;
  longlong lVar4;
  undefined8 *puVar5;
  wint_t *pwVar6;
  short *psVar7;
  undefined8 local_38;
  short *local_30;
  undefined8 local_28;
  
  local_30 = (short *)0x0;
  local_28 = 0;
  lVar4 = UPropertyHelpers::ReadToken(*param_2,&local_30,1);
  if (lVar4 != 0) {
    pwVar6 = &DAT_144fe6770;
    psVar7 = &DAT_143f3eda8;
    if ((int)local_28 != 0) {
      psVar7 = local_30;
    }
    do {
      wVar2 = *(wint_t *)((longlong)(psVar7 + -0xa27f33b8) + (longlong)pwVar6);
      if ((wVar2 == 0) && (*pwVar6 == 0)) goto LAB_1421d74b2;
      if (wVar2 != *pwVar6) {
        wVar2 = towlower(wVar2);
        wVar3 = towlower(*pwVar6);
        if (wVar2 != wVar3) goto LAB_1421d744c;
      }
      pwVar6 = pwVar6 + 1;
    } while( true );
  }
  uVar1 = 0;
LAB_1421d74c4:
  if (local_30 != (short *)0x0) {
    FMemory::Free();
  }
  return uVar1;
LAB_1421d744c:
  if ((wVar2 == wVar3) || ((int)local_28 < 2)) {
LAB_1421d74b2:
    local_38 = 0;
    *param_1 = 0;
    uVar1 = 1;
  }
  else if (*local_30 == 0x28) {
    uVar1 = 0;
  }
  else {
    psVar7 = &DAT_143f3eda8;
    if ((int)local_28 != 0) {
      psVar7 = local_30;
    }
    if (DAT_146aed668 == 0) {
      FUN_1421d75c0();
    }
    lVar4 = DAT_146aed668;
    puVar5 = (undefined8 *)FName::FName(&local_38,psVar7,1);
    uVar1 = FUN_1421d71f0(lVar4,param_1,*puVar5);
  }
  goto LAB_1421d74c4;
}



// FUNCTION 1421d74f0 FUN_1421d74f0 body=193 status=ok
// SIG undefined FUN_1421d74f0(void)

undefined8
FUN_1421d74f0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong local_18 [2];
  
  local_18[1] = 0x16;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"FGameplayTagContainer",0x2c);
  uVar1 = FGameplayTagContainer::StaticStruct();
  lVar2 = FUN_14171d9a0(uVar1,*param_2,param_1,param_4,param_3,param_5,local_18,0);
  *param_2 = lVar2;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FUN_1421d5db0(param_1);
  }
  return 1;
}



// FUNCTION 1421d75c0 FUN_1421d75c0 body=1358 status=ok
// SIG undefined FUN_1421d75c0(void)

void FUN_1421d75c0(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined2 *puVar16;
  int iVar17;
  void *pvVar18;
  undefined8 *puVar19;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 in_stack_ffffffffffffff38;
  void *local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68 [2];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  
  uVar2 = (uint)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
  local_res8 = 0;
  uVar4 = GetTransientPackage();
  local_res10 = 0;
  FUN_1417846f0(uVar4,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar5 = UGameplayTagsManager::GetPrivateStaticClass();
  DAT_146aed668 = FUN_1417985e0(uVar5,uVar4,0,0,(ulonglong)uVar2 << 0x20,0,0,0,0);
  iVar17 = *(int *)(DAT_146aed668 + 0xc);
  pvVar6 = (void *)0x0;
  if (iVar17 < (int)DAT_1469e91c4) {
    uVar13 = iVar17 >> 0x1f & 0xffff;
    uVar2 = iVar17 + uVar13;
    pvVar6 = (void *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                     (longlong)(int)((uVar2 & 0xffff) - uVar13) * 0x18);
  }
  *(uint *)((longlong)pvVar6 + 8) = *(uint *)((longlong)pvVar6 + 8) | 0x40000000;
  plVar7 = (longlong *)UGameplayTagsSettings::GetPrivateStaticClass();
  lVar12 = plVar7[0x1f];
  if (lVar12 == 0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    lVar12 = plVar7[0x1f];
  }
  puVar8 = (undefined8 *)FPaths::ProjectConfigDir(&local_78);
  if (*(int *)(puVar8 + 1) == 0) {
    puVar16 = &DAT_143f3eda8;
  }
  else {
    puVar16 = (undefined2 *)*puVar8;
  }
  FString::PrintfImpl(local_68,L"%sDefaultEngine.ini",puVar16);
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
  plVar7 = local_68;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  FConfigCacheIni::GetArray(DAT_1468b6148,L"GameplayTags",L"+GameplayTagTableList",&local_88,plVar7)
  ;
  if (0 < (int)local_80) {
    plVar9 = local_88 + (longlong)(int)local_80 * 2;
    for (plVar15 = local_88; plVar15 != plVar9; plVar15 = plVar15 + 2) {
      iVar17 = (int)plVar15[1];
      pvVar6 = (void *)*plVar15;
      local_98 = (void *)0x0;
      local_90._4_4_ = (undefined4)((ulonglong)local_90 >> 0x20);
      pvVar18 = (void *)0x0;
      uVar3 = 0;
      if (iVar17 != 0) {
        local_90._0_4_ = iVar17;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,iVar17,0);
        pvVar18 = local_98;
        _guard_xfg_dispatch_icall_nop(local_98,pvVar6,(longlong)iVar17 * 2);
        iVar17 = (int)local_90;
        uVar3 = local_90._4_4_;
      }
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_98 = (void *)0x0;
      local_90 = 0;
      local_78 = pvVar18;
      local_70 = iVar17;
      local_6c = uVar3;
      FUN_1417978e0(&local_58,&local_78);
      lVar11 = *(longlong *)(lVar12 + 0x68);
      iVar17 = *(int *)(lVar12 + 0x70);
      for (lVar14 = lVar11; lVar14 != lVar11 + (longlong)iVar17 * 0x18; lVar14 = lVar14 + 0x18) {
        cVar1 = FSoftObjectPath::operator==(lVar14,&local_58);
        if (cVar1 != '\0') {
          if ((int)((lVar14 - lVar11) / 0x18) != -1) goto LAB_1421d786d;
          break;
        }
      }
      iVar17 = *(int *)(lVar12 + 0x70);
      *(int *)(lVar12 + 0x70) = iVar17 + 1;
      if (*(int *)(lVar12 + 0x74) < iVar17 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(lVar12 + 0x68,iVar17);
      }
      puVar8 = (undefined8 *)(*(longlong *)(lVar12 + 0x68) + (longlong)iVar17 * 0x18);
      *puVar8 = local_58;
      puVar8[1] = 0;
      puVar8[1] = local_50;
      local_50 = 0;
      *(undefined4 *)(puVar8 + 2) = (undefined4)local_48;
      *(undefined4 *)((longlong)puVar8 + 0x14) = local_48._4_4_;
      local_48 = 0;
LAB_1421d786d:
      if (local_50 != 0) {
        FMemory::Free();
      }
    }
  }
  lVar12 = DAT_146aed668;
  plVar15 = (longlong *)(DAT_146aed668 + 0x130);
  *(undefined4 *)(DAT_146aed668 + 0x138) = 0;
  if (*(int *)(lVar12 + 0x13c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar15,0);
  }
  plVar9 = (longlong *)UGameplayTagsSettings::GetPrivateStaticClass();
  lVar11 = plVar9[0x1f];
  if (lVar11 == 0) {
    (**(code **)(*plVar9 + 0x368))(plVar9);
    lVar11 = plVar9[0x1f];
  }
  puVar19 = *(undefined8 **)(lVar11 + 0x68);
  puVar8 = puVar19 + (longlong)*(int *)(lVar11 + 0x70) * 3;
  for (; puVar19 != puVar8; puVar19 = puVar19 + 3) {
    local_58 = *puVar19;
    FString::FString(&local_50,puVar19 + 1);
    puVar10 = (undefined8 *)FSoftObjectPath::ToString(&local_58,&local_78);
    if (*(int *)(puVar10 + 1) == 0) {
      puVar16 = &DAT_143f3eda8;
    }
    else {
      puVar16 = (undefined2 *)*puVar10;
    }
    uVar4 = USoundMix::GetPrivateStaticClass();
    plVar7 = (longlong *)((ulonglong)plVar7 & 0xffffffff00000000);
    lVar11 = FUN_141799c90(uVar4,0,puVar16,0,plVar7,0,1);
    if (local_78 != (void *)0x0) {
      FMemory::Free();
    }
    if (((lVar11 != 0) && (cVar1 = FUN_141790400(), cVar1 != '\0')) &&
       (lVar14 = FUN_1417a53c0(lVar11), lVar14 != 0)) {
      lVar14 = FUN_1417a53c0(lVar11);
      FUN_141740c00(lVar14 + 0x200,lVar11);
    }
    iVar17 = *(int *)(lVar12 + 0x138);
    *(int *)(lVar12 + 0x138) = iVar17 + 1;
    if (*(int *)(lVar12 + 0x13c) < iVar17 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar15,iVar17);
    }
    *(longlong *)(*plVar15 + (longlong)iVar17 * 8) = lVar11;
    if (local_50 != 0) {
      FMemory::Free();
    }
  }
  FUN_1421d3a10(DAT_146aed668);
  lVar12 = DAT_146aed668;
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar7 + 1,lVar12);
    plVar7[2] = (longlong)UGameplayTagsManager::DoneAddingNativeTags;
    lVar12 = FDelegateHandle::GenerateNewID();
    plVar7[4] = lVar12;
    *plVar7 = (longlong)&PTR_FUN_143f4d1b8;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af040,1);
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_res8);
    iVar17 = DAT_1464af048;
    lVar12 = (longlong)DAT_1464af048;
    DAT_1464af048 = DAT_1464af048 + 1;
    if (DAT_1464af04c < DAT_1464af048) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af040,iVar17);
    }
    puVar8 = (undefined8 *)(lVar12 * 0x10 + DAT_1464af040);
    *puVar8 = plVar7;
    *(undefined4 *)(puVar8 + 1) = 3;
  }
  plVar7 = local_88;
  for (iVar17 = (int)local_80; iVar17 != 0; iVar17 = iVar17 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421d7b10 FUN_1421d7b10 body=39 status=ok
// SIG undefined FUN_1421d7b10(void)

void FUN_1421d7b10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144fe7348;
    return;
  }
  return;
}



// FUNCTION 1421d7b40 FUN_1421d7b40 body=821 status=ok
// SIG undefined FUN_1421d7b40(void)

int FUN_1421d7b40(longlong param_1,ulonglong param_2,longlong *param_3,longlong *param_4,
                 undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined1 param_8,
                 undefined1 param_9)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ulonglong local_res10;
  longlong *local_res18;
  ulonglong local_res20;
  undefined8 local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  longlong *plStack_78;
  longlong local_70;
  longlong local_68;
  undefined8 *local_60;
  longlong *local_58;
  
  bVar6 = false;
  bVar5 = false;
  local_res20 = local_res20 & 0xffffffff00000000;
  iVar13 = 0;
  iVar7 = (int)param_4[1];
  iVar12 = -1;
  iVar14 = iVar12;
  iVar10 = iVar12;
  local_res10 = param_2;
  local_res18 = param_3;
  if (0 < iVar7) {
    lVar15 = 0;
    do {
      if (*(ulonglong **)(lVar15 + *param_4) != (ulonglong *)0x0) {
        uVar3 = **(ulonglong **)(lVar15 + *param_4);
        iVar14 = iVar13;
        if (uVar3 == local_res10) break;
        local_res20 = uVar3;
        iVar7 = FName::Compare(&local_res20,&local_res10);
        if ((0 < iVar7) && (iVar10 == -1)) {
          iVar10 = iVar13;
        }
      }
      iVar7 = (int)param_4[1];
      iVar13 = iVar13 + 1;
      lVar15 = lVar15 + 0x10;
      iVar14 = iVar12;
    } while (iVar13 < iVar7);
  }
  plVar4 = local_res18;
  if (iVar14 == -1) {
    iVar14 = iVar7;
    if (iVar10 != -1) {
      iVar14 = iVar10;
    }
    lVar15 = operator_new(0x50);
    if (lVar15 == 0) {
      local_a0 = 0;
    }
    else {
      lVar11 = *plVar4;
      if (lVar11 == *(longlong *)(param_1 + 0x38)) {
        lVar11 = 0;
        plVar9 = &local_80;
        local_80 = 0;
        plStack_78 = (longlong *)0x0;
        bVar6 = false;
        bVar5 = true;
      }
      else {
        local_88 = (longlong *)plVar4[1];
        if (local_88 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_88 + 1) = (int)local_88[1] + 1;
          UNLOCK();
        }
        plVar9 = &local_90;
        bVar6 = true;
        bVar5 = false;
        local_90 = lVar11;
      }
      local_68 = plVar9[1];
      plVar9[1] = 0;
      *plVar9 = 0;
      local_70 = lVar11;
      local_a0 = FUN_1421d1e10(lVar15,local_res10,&local_70,param_7,param_8,param_9);
    }
    local_98 = (longlong *)operator_new(0x18);
    if (local_98 != (longlong *)0x0) {
      *(undefined4 *)(local_98 + 1) = 1;
      *local_98 = (longlong)&PTR_FUN_144fe7dd8;
      *(undefined4 *)((longlong)local_98 + 0xc) = 1;
      local_98[2] = local_a0;
    }
    SharedPointerInternals::EnableSharedFromThis(&local_a0,local_a0,local_a0);
    plVar9 = plStack_78;
    if ((bVar5) && (plStack_78 != (longlong *)0x0)) {
      LOCK();
      plVar1 = plStack_78 + 1;
      lVar15 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plStack_78)(plStack_78);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plStack_78 + 8))(plStack_78,1);
        }
      }
    }
    plVar9 = local_88;
    if ((bVar6) && (local_88 != (longlong *)0x0)) {
      LOCK();
      plVar1 = local_88 + 1;
      lVar15 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_88 + 8))(local_88,1);
        }
      }
    }
    iVar7 = (int)param_4[1];
    *(int *)(param_4 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_4 + 0xc) < iVar7 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_4,iVar7);
    }
    lVar11 = (longlong)iVar14 * 0x10;
    _guard_xfg_dispatch_icall_nop
              ((void *)(*param_4 + lVar11 + 0x10),(void *)(*param_4 + lVar11),
               (longlong)(iVar7 - iVar14) << 4);
    lVar15 = *param_4;
    *(longlong *)(lVar15 + lVar11) = local_a0;
    *(longlong **)(lVar15 + 8 + lVar11) = local_98;
    if (local_98 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_98 + 1) = (int)local_98[1] + 1;
      UNLOCK();
    }
    if (*(int *)(local_a0 + 0x10) < 1) {
      puVar8 = &DAT_146aed670;
    }
    else {
      puVar8 = *(undefined8 **)(local_a0 + 8);
    }
    local_a8 = *puVar8;
    local_60 = &local_a8;
    local_58 = &local_a0;
    FUN_1421d12c0(param_1 + 0x48,&local_res18,&local_60,0);
    plVar9 = local_98;
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_98 + 1;
      lVar15 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*local_98)(local_98);
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
  plVar4 = (longlong *)plVar4[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar4 + 1;
    lVar15 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
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
  return iVar14;
}



// FUNCTION 1421d7e80 IsEmpty body=8 status=ok
// SIG undefined IsEmpty(void)

bool FGameplayTagQuery::IsEmpty(longlong param_1)

{
  return *(int *)(param_1 + 0x20) == 0;
}



// FUNCTION 1421d7e90 IsGameplayTagValid body=14 status=ok
// SIG undefined IsGameplayTagValid(void)

bool UBlueprintGameplayTagLibrary::IsGameplayTagValid(longlong param_1)

{
  return param_1 != 0;
}



// FUNCTION 1421d7ea0 MakeGameplayTagContainerFromArray body=116 status=ok
// SIG undefined MakeGameplayTagContainerFromArray(void)

longlong *
UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromArray
          (longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 != 0) {
    if (0 < iVar1) {
      TArray<void_*,FDefaultAllocator>::ResizeTo();
      iVar2 = (int)param_1[1];
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*param_1 + (longlong)iVar2 * 8),(void *)*param_2,(longlong)iVar1 << 3);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar1;
  }
  FUN_1421d5db0(param_1);
  return param_1;
}



// FUNCTION 1421d7f20 MakeGameplayTagContainerFromTag body=49 status=ok
// SIG undefined MakeGameplayTagContainerFromTag(void)

undefined8 *
UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromTag
          (undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_res10[0] = param_2;
  FUN_1421d3220(param_1,local_res10);
  return param_1;
}



// FUNCTION 1421d7f60 MakeGameplayTagQuery body=91 status=ok
// SIG undefined MakeGameplayTagQuery(void)

undefined8 UBlueprintGameplayTagLibrary::MakeGameplayTagQuery(undefined8 param_1,longlong param_2)

{
  FGameplayTagQuery::FGameplayTagQuery();
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1421d7fc0 MakeLiteralGameplayTagContainer body=119 status=ok
// SIG undefined MakeLiteralGameplayTagContainer(void)

longlong *
UBlueprintGameplayTagLibrary::MakeLiteralGameplayTagContainer(longlong *param_1,longlong *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(int *)(param_1 + 3) = (int)param_2[3];
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  if (param_2[2] != 0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1421d8040 FUN_1421d8040 body=477 status=ok
// SIG undefined FUN_1421d8040(void)

ulonglong FUN_1421d8040(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  if (DAT_146aed668 == 0) {
    FUN_1421d75c0();
  }
  uVar5 = *(int *)(DAT_146aed668 + 0x50) - *(int *)(DAT_146aed668 + 0x7c);
  plVar7 = (longlong *)(ulonglong)uVar5;
  if (uVar5 != 0) {
    lVar4 = *param_1;
    lVar6 = *(longlong *)(DAT_146aed668 + 0x88);
    if (*(longlong *)(DAT_146aed668 + 0x88) == 0) {
      lVar6 = DAT_146aed668 + 0x80;
    }
    uVar5 = *(uint *)(lVar6 + ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                              (longlong)*(int *)(DAT_146aed668 + 0x90) - 1U) * 4);
    plVar7 = (longlong *)(ulonglong)uVar5;
    if (uVar5 != 0xffffffff) {
      do {
        plVar10 = (longlong *)((longlong)(int)plVar7 * 0x20 + *(longlong *)(DAT_146aed668 + 0x48));
        if (*plVar10 == lVar4) {
          if ((int)plVar7 != -1) goto LAB_1421d80e2;
          break;
        }
        plVar7 = (longlong *)(ulonglong)*(uint *)(plVar10 + 3);
      } while (*(uint *)(plVar10 + 3) != 0xffffffff);
    }
  }
  plVar10 = (longlong *)0x0;
LAB_1421d80e2:
  plVar9 = plVar10 + 1;
  if (plVar10 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  if (plVar9 != (longlong *)0x0) {
    lVar4 = *plVar9;
    plVar10 = (longlong *)plVar9[1];
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    if (lVar4 == 0) {
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar10 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        uVar5 = (int)lVar4 - 1;
        plVar7 = (longlong *)(ulonglong)uVar5;
        if (uVar5 == 0) {
          plVar7 = (longlong *)(**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            plVar7 = (longlong *)(**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
    else {
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar10 + 1;
        lVar6 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        uVar5 = (int)lVar6 - 1;
        plVar7 = (longlong *)(ulonglong)uVar5;
        if (uVar5 == 0) {
          plVar7 = (longlong *)(**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            plVar7 = (longlong *)(**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      if (((longlong *)(lVar4 + 8) != (longlong *)0x0) &&
         (plVar7 = (longlong *)(longlong)(int)param_2[1], (int)param_2[1] != 0)) {
        param_2 = (longlong *)*param_2;
        plVar10 = param_2 + (longlong)plVar7;
        if (param_2 != plVar10) {
          plVar9 = *(longlong **)(lVar4 + 8);
          do {
            if (plVar9 != plVar9 + *(int *)(lVar4 + 0x10)) {
              plVar7 = plVar9;
              do {
                if (*plVar7 == *param_2) goto LAB_1421d81ce;
                plVar7 = plVar7 + 1;
              } while (plVar7 != plVar9 + *(int *)(lVar4 + 0x10));
            }
            puVar8 = *(undefined8 **)(lVar4 + 0x18);
            plVar7 = (longlong *)(longlong)*(int *)(lVar4 + 0x20);
            puVar2 = puVar8 + (longlong)plVar7;
            if (puVar8 != puVar2) {
              plVar7 = (longlong *)*param_2;
              do {
                if ((longlong *)*puVar8 == plVar7) {
LAB_1421d81ce:
                  return CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
                }
                puVar8 = puVar8 + 1;
              } while (puVar8 != puVar2);
            }
            param_2 = param_2 + 1;
          } while (param_2 != plVar10);
        }
      }
    }
  }
  return (ulonglong)plVar7 & 0xffffffffffffff00;
}



// FUNCTION 1421d8220 MatchesAnyTags body=77 status=ok
// SIG undefined MatchesAnyTags(void)

longlong UBlueprintGameplayTagLibrary::MatchesAnyTags
                   (longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  uint7 uVar4;
  longlong lVar3;
  longlong local_res8 [4];
  
  if (param_3 == '\0') {
    local_res8[0] = param_1;
    lVar3 = FUN_1421d8040(local_res8);
    return lVar3;
  }
  iVar2 = (int)param_2[1];
  uVar4 = (uint7)(int3)((uint)iVar2 >> 8);
  if (iVar2 != 0) {
    param_2 = (longlong *)*param_2;
    plVar1 = param_2 + iVar2;
    for (; param_2 != plVar1; param_2 = param_2 + 1) {
      if (*param_2 == param_1) {
        return CONCAT71(uVar4,1);
      }
    }
  }
  return (ulonglong)uVar4 << 8;
}



// FUNCTION 1421d8270 FUN_1421d8270 body=433 status=ok
// SIG undefined FUN_1421d8270(void)

ulonglong FUN_1421d8270(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (DAT_146aed668 == 0) {
    FUN_1421d75c0();
  }
  uVar4 = *(int *)(DAT_146aed668 + 0x50) - *(int *)(DAT_146aed668 + 0x7c);
  uVar6 = (ulonglong)uVar4;
  if (uVar4 != 0) {
    lVar3 = *param_1;
    lVar5 = *(longlong *)(DAT_146aed668 + 0x88);
    if (*(longlong *)(DAT_146aed668 + 0x88) == 0) {
      lVar5 = DAT_146aed668 + 0x80;
    }
    uVar4 = *(uint *)(lVar5 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                              (longlong)*(int *)(DAT_146aed668 + 0x90) - 1U) * 4);
    uVar6 = (ulonglong)uVar4;
    if (uVar4 != 0xffffffff) {
      do {
        plVar8 = (longlong *)((longlong)(int)uVar6 * 0x20 + *(longlong *)(DAT_146aed668 + 0x48));
        if (*plVar8 == lVar3) {
          if ((int)uVar6 != -1) goto LAB_1421d8312;
          break;
        }
        uVar6 = (ulonglong)*(uint *)(plVar8 + 3);
      } while (*(uint *)(plVar8 + 3) != 0xffffffff);
    }
  }
  plVar8 = (longlong *)0x0;
LAB_1421d8312:
  plVar7 = plVar8 + 1;
  if (plVar8 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  if (plVar7 != (longlong *)0x0) {
    lVar3 = *plVar7;
    plVar8 = (longlong *)plVar7[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    if (lVar3 == 0) {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar8 + 1;
        lVar3 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        uVar4 = (int)lVar3 - 1;
        uVar6 = (ulonglong)uVar4;
        if (uVar4 == 0) {
          uVar6 = (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            uVar6 = (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
    }
    else {
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar8 + 1;
        lVar5 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        uVar4 = (int)lVar5 - 1;
        uVar6 = (ulonglong)uVar4;
        if (uVar4 == 0) {
          uVar6 = (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            uVar6 = (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      if (((longlong *)(lVar3 + 8) != (longlong *)0x0) && (lVar5 = *param_2, lVar5 != 0)) {
        plVar7 = *(longlong **)(lVar3 + 8);
        uVar6 = (ulonglong)*(int *)(lVar3 + 0x10);
        plVar8 = plVar7 + uVar6;
        for (; plVar7 != plVar8; plVar7 = plVar7 + 1) {
          if (*plVar7 == lVar5) goto LAB_1421d83d5;
        }
        plVar7 = *(longlong **)(lVar3 + 0x18);
        uVar6 = (ulonglong)*(int *)(lVar3 + 0x20);
        plVar8 = plVar7 + uVar6;
        for (; plVar7 != plVar8; plVar7 = plVar7 + 1) {
          if (*plVar7 == lVar5) {
LAB_1421d83d5:
            return CONCAT71((int7)(uVar6 >> 8),1);
          }
        }
      }
    }
  }
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 1421d8430 MatchesTag body=62 status=ok
// SIG undefined MatchesTag(void)

ulonglong UBlueprintGameplayTagLibrary::MatchesTag(longlong param_1,longlong param_2,char param_3)

{
  ulonglong uVar1;
  longlong local_res8;
  longlong local_res10 [3];
  
  if (param_3 == '\0') {
    local_res8 = param_1;
    local_res10[0] = param_2;
    uVar1 = FUN_1421d8270(&local_res8,local_res10);
  }
  else {
    uVar1 = 0;
    if (param_2 != 0) {
      return (ulonglong)(param_1 == param_2);
    }
  }
  return uVar1;
}



// FUNCTION 1421d8470 FUN_1421d8470 body=25 status=ok
// SIG undefined FUN_1421d8470(void)

undefined1 FUN_1421d8470(void)

{
  undefined1 *in_R9;
  
  FUN_1421d8660();
  *in_R9 = 1;
  return 1;
}



// FUNCTION 1421d8490 FUN_1421d8490 body=458 status=ok
// SIG undefined FUN_1421d8490(void)

undefined8 FUN_1421d8490(longlong *param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  byte local_res8 [8];
  char local_res10 [8];
  
  local_res10[0] = (int)param_1[1] == 0;
  (**(code **)(*param_2 + 0x58))(param_2,local_res10,1);
  if (local_res10[0] == '\0') {
    if (DAT_146aed668 == 0) {
      FUN_1421d75c0();
    }
    if ((*(byte *)(param_2 + 5) & 2) == 0) {
      local_res8[0] = 0;
      (**(code **)(*param_2 + 0x58))(param_2,local_res8);
      uVar4 = 0;
      iVar3 = 0;
      *(undefined4 *)(param_1 + 1) = 0;
      if (*(uint *)((longlong)param_1 + 0xc) != (uint)local_res8[0]) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1);
        iVar3 = (int)param_1[1];
      }
      bVar2 = local_res8[0];
      uVar5 = (uint)local_res8[0];
      *(uint *)(param_1 + 1) = iVar3 + (uint)local_res8[0];
      if (*(int *)((longlong)param_1 + 0xc) < (int)(iVar3 + (uint)local_res8[0])) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
      }
      puVar1 = (undefined8 *)(*param_1 + (longlong)iVar3 * 8);
      if (bVar2 != 0) {
        do {
          *puVar1 = 0;
          puVar1 = puVar1 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if (local_res8[0] != 0) {
        do {
          FUN_1421d8660(*param_1 + uVar4 * 8,param_2,param_3,param_4);
          bVar2 = (char)uVar4 + 1;
          uVar4 = (ulonglong)bVar2;
        } while (bVar2 < local_res8[0]);
      }
      FUN_1421d5db0(param_1);
    }
    else {
      bVar2 = ('\x01' << ((byte)*(undefined4 *)(DAT_146aed668 + 0x30) & 0x1f)) - 1;
      local_res8[0] = *(byte *)(param_1 + 1);
      if (bVar2 < *(byte *)(param_1 + 1)) {
        local_res8[0] = bVar2;
      }
      (**(code **)(*param_2 + 0x58))(param_2,local_res8);
      iVar3 = 0;
      if (local_res8[0] != 0) {
        do {
          FUN_1421d8660(*param_1 + (longlong)iVar3 * 8,param_2,param_3,param_4);
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(uint)local_res8[0]);
      }
    }
  }
  else if (0 < (int)param_1[1]) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((*(int *)((longlong)param_1 + 0xc) < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
    }
    *(undefined4 *)(param_1 + 3) = 0;
    if ((*(int *)((longlong)param_1 + 0x1c) < 0) && (*(int *)((longlong)param_1 + 0x1c) != 0)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 2,0);
    }
  }
  *param_4 = 1;
  return 1;
}



// FUNCTION 1421d8660 FUN_1421d8660 body=1137 status=ok
// SIG undefined FUN_1421d8660(void)

undefined8 FUN_1421d8660(longlong *param_1,longlong *param_2,longlong param_3,undefined1 *param_4)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  ushort local_c8 [8];
  longlong local_b8;
  longlong *plStack_b0;
  uint local_a8 [2];
  undefined8 local_a0;
  longlong local_98 [5];
  longlong local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  longlong local_48;
  longlong *plStack_40;
  
  if (DAT_146aed668 == 0) {
    FUN_1421d75c0();
  }
  lVar5 = DAT_146aed668;
  if (*(char *)(DAT_146aed668 + 0x108) == '\0') {
    (**(code **)(*param_2 + 0x40))(param_2,param_1);
  }
  else {
    local_c8[0] = 0xffff;
    if (param_3 != 0) {
      lVar7 = UPackageMapClient::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (((bVar3) && (*(longlong *)(param_3 + 0x130) != 0)) &&
         ((*(byte *)(*(longlong *)(param_3 + 0x130) + 0xa4) & 1) != 0)) {
        local_b8 = 0;
        plStack_b0 = (longlong *)0x0;
        local_98[0] = 0;
        local_98[1] = 0x1c;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98,0);
        FGenericPlatformString::Memcpy(local_98[0],L"NetworkGameplayTagNodeIndex",0x38);
        plVar8 = (longlong *)FUN_1425e5d60(param_3,local_68,local_98);
        if (&local_b8 != plVar8) {
          local_b8 = *plVar8;
          *plVar8 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_b0,plVar8 + 1);
        }
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_60 + 1;
          lVar7 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)local_60 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_60 + 8))(local_60,1);
            }
          }
        }
        if (local_98[0] != 0) {
          FMemory::Free();
        }
        lVar7 = local_b8;
        plVar8 = plStack_b0;
        if ((*(byte *)(param_2 + 5) & 2) != 0) {
          if (local_b8 == 0) {
            plVar8 = (longlong *)FUN_1421d5200(local_58,lVar5,L"NetworkGameplayTagNodeIndex");
            if (&local_b8 != plVar8) {
              local_b8 = *plVar8;
              *plVar8 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_b0,plVar8 + 1);
              lVar7 = local_b8;
            }
            if (local_50 != (longlong *)0x0) {
              LOCK();
              plVar8 = local_50 + 1;
              lVar4 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              lVar7 = local_b8;
              if ((int)lVar4 == 1) {
                (**(code **)*local_50)(local_50);
                LOCK();
                piVar1 = (int *)((longlong)local_50 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                lVar7 = local_b8;
                if (iVar2 == 1) {
                  (**(code **)(*local_50 + 8))(local_50,1);
                  lVar7 = local_b8;
                }
              }
            }
            local_98[2] = 0;
            local_98[3] = 0x1c;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98 + 2,0);
            FGenericPlatformString::Memcpy(local_98[2],L"NetworkGameplayTagNodeIndex",0x38);
            plVar8 = plStack_b0;
            local_48 = local_b8;
            plStack_40 = plStack_b0;
            if (plStack_b0 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
              UNLOCK();
              lVar7 = local_b8;
            }
            FUN_1425db5d0(param_3,local_98 + 2,&local_48);
            if (local_98[2] != 0) {
              FMemory::Free();
            }
          }
          local_c8[0] = FUN_1421d68e0(lVar5,param_1);
          if ((local_c8[0] == *(ushort *)(lVar5 + 0x34)) || (local_c8[0] == 0xffff)) {
            local_c8[0] = 0xffff;
          }
          else {
            FUN_1425f5f30(param_3,lVar7,local_c8[0]);
          }
        }
        local_a8[0] = (uint)local_c8[0];
        (**(code **)(*param_2 + 0x68))(param_2,local_a8);
        local_c8[0] = (ushort)local_a8[0];
        if ((*(byte *)(param_2 + 5) & 1) != 0) {
          if (((local_c8[0] == 0xffff) || (lVar7 == 0)) ||
             (*(int *)(lVar7 + 0x20) <= (int)(local_a8[0] & 0xffff))) {
            local_70 = 0;
          }
          else {
            *param_1 = *(longlong *)
                        ((ulonglong)(local_a8[0] & 0xffff) * 0x40 + 0x10 +
                        *(longlong *)(lVar7 + 0x18));
            if (DAT_146aed668 == 0) {
              FUN_1421d75c0();
            }
            FUN_1421da6a0(DAT_146aed668,&local_70,*param_1,0);
            if (local_70 == 0) {
              if (*(char *)((ulonglong)local_c8[0] * 0x40 + 0x38 + *(longlong *)(lVar7 + 0x18)) ==
                  '\0') {
                *(undefined1 *)((ulonglong)local_c8[0] * 0x40 + 0x38 + *(longlong *)(lVar7 + 0x18))
                     = 1;
              }
            }
          }
          local_a0 = 0;
          *param_1 = local_70;
        }
        plVar6 = plStack_b0;
        *param_4 = 1;
        if (plVar8 == (longlong *)0x0) {
          return 1;
        }
        LOCK();
        plVar8 = plVar8 + 1;
        lVar5 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar5 != 1) {
          return 1;
        }
        (**(code **)*plStack_b0)(plStack_b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 != 1) {
          return 1;
        }
        (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
        return 1;
      }
    }
    if ((*(byte *)(param_2 + 5) & 2) == 0) {
      FUN_1421dac20(param_2,local_c8,*(undefined4 *)(lVar5 + 0x2c),*(undefined4 *)(lVar5 + 0x28));
      if ((int)(uint)local_c8[0] < *(int *)(lVar5 + 0x118)) {
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x110) + (ulonglong)local_c8[0] * 0x10);
        if (*(int *)(lVar5 + 0x10) < 1) {
          *param_1 = DAT_146aed670;
        }
        else {
          *param_1 = **(longlong **)(lVar5 + 8);
        }
      }
      else {
        *param_1 = 0;
      }
    }
    else {
      local_c8[0] = FUN_1421d68e0(lVar5,param_1);
      FUN_1421dac20(param_2,local_c8,*(undefined4 *)(lVar5 + 0x2c),*(undefined4 *)(lVar5 + 0x28));
    }
  }
  *param_4 = 1;
  return 1;
}



// FUNCTION 1421d8ae0 NotEqual_GameplayTag body=7 status=ok
// SIG undefined NotEqual_GameplayTag(void)

bool UBlueprintGameplayTagLibrary::NotEqual_GameplayTag(longlong param_1,longlong param_2)

{
  return param_1 != param_2;
}



// FUNCTION 1421d8af0 NotEqual_GameplayTagContainer body=19 status=ok
// SIG undefined NotEqual_GameplayTagContainer(void)

bool UBlueprintGameplayTagLibrary::NotEqual_GameplayTagContainer(void)

{
  char cVar1;
  
  cVar1 = FGameplayTagContainer::operator==();
  return cVar1 == '\0';
}



// FUNCTION 1421d8b10 FUN_1421d8b10 body=4098 status=ok
// SIG undefined FUN_1421d8b10(void)

bool FUN_1421d8b10(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  wchar_t *pwVar9;
  undefined2 *puVar10;
  wchar_t *pwVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  uint uVar18;
  uint uVar19;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  wchar_t *local_148;
  undefined8 local_140;
  wchar_t *local_138;
  undefined8 local_130;
  wchar_t *local_128;
  undefined8 local_120;
  wchar_t *local_118;
  undefined8 local_110;
  wchar_t *local_108;
  undefined8 local_100;
  undefined2 *local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined8 local_a0;
  longlong local_98 [11];
  
  pwVar16 = (wchar_t *)0x0;
  uVar19 = 0;
  local_98[5] = 2;
  local_98[6] = 0;
  local_98[7] = 0;
  local_98[8] = 0;
  local_98[9] = 0;
  local_98[4] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98 + 4,0);
  FGenericPlatformString::Memcpy(local_98[4],&DAT_144fe51d4,4);
  local_98[2] = 0;
  local_98[3] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98 + 2,0);
  FGenericPlatformString::Memcpy(local_98[2],&DAT_144fe529c,4);
  local_148 = (wchar_t *)*param_2;
  *param_2 = 0;
  local_140 = param_2[1];
  param_2[1] = 0;
  cVar3 = FString::StartsWith(&local_148,local_98 + 4,0);
  if ((cVar3 == '\0') || (cVar3 = FString::EndsWith(&local_148,local_98 + 2,0), cVar3 == '\0'))
  goto LAB_1421d9a6e;
  uVar18 = 0;
  if ((int)local_140 == 0) {
    pwVar11 = L"";
    uVar8 = uVar18;
  }
  else {
    pwVar11 = local_148;
    uVar8 = (int)local_140 - 1;
  }
  local_128 = (wchar_t *)0x0;
  uVar5 = uVar18;
  if (-1 < (int)(uVar8 - 1)) {
    uVar5 = uVar8 - 1;
  }
  uVar8 = uVar5 + 1;
  if (uVar5 == 0) {
    uVar8 = uVar19;
  }
  local_120._4_4_ = 0;
  pwVar9 = pwVar16;
  uVar12 = uVar18;
  local_120._0_4_ = uVar8;
  if ((0 < (int)uVar8) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0), uVar12 = local_120._4_4_,
     uVar8 = (uint)local_120, pwVar9 = local_128, 0 < (int)(uint)local_120)) {
    wcsncpy(local_128,pwVar11,(longlong)(int)uVar5);
    pwVar9[(int)uVar5] = L'\0';
  }
  if (local_148 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  local_140 = CONCAT44(uVar12,uVar8);
  if (uVar8 == 0) {
    pwVar11 = L"";
    uVar8 = uVar18;
  }
  else {
    pwVar11 = pwVar9;
    uVar8 = uVar8 - 1;
  }
  local_128 = (wchar_t *)0x0;
  local_120 = (ulonglong)(uint)local_120;
  uVar5 = uVar18;
  if (-1 < (int)(uVar8 - 1)) {
    uVar5 = uVar8 - 1;
  }
  lVar15 = -1;
  pwVar11 = pwVar11 + ((longlong)(int)uVar8 - (longlong)(int)uVar5);
  pwVar17 = pwVar16;
  uVar8 = uVar18;
  uVar5 = uVar18;
  local_148 = pwVar9;
  if ((pwVar11 != (wchar_t *)0x0) && (*pwVar11 != L'\0')) {
    do {
      lVar15 = lVar15 + 1;
    } while (pwVar11[lVar15] != L'\0');
    uVar12 = (int)lVar15 + 1;
    local_120 = (ulonglong)uVar12;
    uVar8 = uVar12;
    uVar5 = uVar19;
    if (0 < (int)uVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
      uVar8 = (uint)local_120;
      uVar5 = local_120._4_4_;
    }
    pwVar17 = local_128;
    FGenericPlatformString::Memcpy(local_128,pwVar11,(longlong)(int)uVar12 * 2);
  }
  if (local_148 != (wchar_t *)0x0) {
    FMemory::Free(local_148);
  }
  local_140 = CONCAT44(uVar5,uVar8);
  local_f8 = (undefined2 *)0x0;
  local_f0 = 2;
  local_148 = pwVar17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
  FGenericPlatformString::Memcpy(local_f8,&DAT_144fe535c,4);
  iVar14 = (int)local_f0;
  puVar10 = &DAT_143f3eda8;
  if ((int)local_f0 != 0) {
    puVar10 = local_f8;
  }
  iVar4 = FUN_141592950(&local_148,puVar10,0,0,0xffffffff);
  iVar6 = (int)local_140;
  if (-1 < iVar4) {
    uVar8 = iVar14 - 1;
    if (iVar14 == 0) {
      uVar8 = uVar19;
    }
    uVar8 = uVar8 + iVar4;
    uVar5 = uVar8 + 0x7fffffff;
    uVar12 = (int)local_140 - 1;
    if ((int)local_140 == 0) {
      uVar12 = uVar19;
    }
    if (uVar8 < uVar12) {
      uVar12 = uVar8;
    }
    uVar8 = (int)local_140 - 1;
    if ((int)local_140 == 0) {
      uVar8 = uVar19;
    }
    uVar13 = uVar12;
    if ((uVar12 <= uVar5) && (uVar13 = uVar8, uVar5 < uVar8)) {
      uVar13 = uVar5;
    }
    local_128 = (wchar_t *)0x0;
    pwVar11 = L"";
    if ((int)local_140 != 0) {
      pwVar11 = local_148;
    }
    iVar14 = uVar13 - uVar12;
    iVar6 = iVar14 + 1;
    if (iVar14 == 0) {
      iVar6 = 0;
    }
    local_120._4_4_ = 0;
    pwVar9 = pwVar16;
    uVar8 = uVar19;
    local_120._0_4_ = iVar6;
    if ((0 < iVar6) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0), uVar8 = local_120._4_4_,
       iVar6 = (uint)local_120, pwVar9 = local_128, 0 < (int)(uint)local_120)) {
      wcsncpy(local_128,pwVar11 + (int)uVar12,(longlong)iVar14);
      pwVar9[iVar14] = L'\0';
    }
    if (local_148 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_140 = CONCAT44(uVar8,iVar6);
    local_148 = pwVar9;
  }
  pwVar11 = L"";
  uVar8 = uVar18;
  if (iVar6 != 0) {
    pwVar11 = local_148;
    uVar8 = iVar6 - 1;
  }
  local_128 = (wchar_t *)0x0;
  uVar5 = uVar18;
  if (-1 < (int)(uVar8 - 1)) {
    uVar5 = uVar8 - 1;
  }
  uVar8 = uVar5 + 1;
  if (uVar5 == 0) {
    uVar8 = uVar19;
  }
  local_120._4_4_ = 0;
  pwVar9 = pwVar16;
  uVar12 = uVar18;
  local_120._0_4_ = uVar8;
  if ((0 < (int)uVar8) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0), uVar12 = local_120._4_4_,
     uVar8 = (uint)local_120, pwVar9 = local_128, 0 < (int)(uint)local_120)) {
    wcsncpy(local_128,pwVar11,(longlong)(int)uVar5);
    pwVar9[(int)uVar5] = L'\0';
  }
  if (local_148 != (wchar_t *)0x0) {
    FMemory::Free(local_148);
  }
  local_140 = CONCAT44(uVar12,uVar8);
  if (uVar8 == 0) {
    pwVar11 = L"";
    uVar8 = uVar18;
  }
  else {
    pwVar11 = pwVar9;
    uVar8 = uVar8 - 1;
  }
  local_128 = (wchar_t *)0x0;
  local_120 = (ulonglong)(uint)local_120;
  uVar5 = uVar19;
  if (-1 < (int)(uVar8 - 1)) {
    uVar5 = uVar8 - 1;
  }
  pwVar11 = pwVar11 + ((longlong)(int)uVar8 - (longlong)(int)uVar5);
  pwVar17 = pwVar16;
  uVar8 = uVar19;
  uVar5 = uVar19;
  local_148 = pwVar9;
  if ((pwVar11 != (wchar_t *)0x0) && (*pwVar11 != L'\0')) {
    lVar15 = -1;
    do {
      lVar15 = lVar15 + 1;
    } while (pwVar11[lVar15] != L'\0');
    uVar12 = (int)lVar15 + 1;
    local_120 = (ulonglong)uVar12;
    uVar8 = uVar12;
    if (0 < (int)uVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
      uVar8 = (uint)local_120;
      uVar5 = local_120._4_4_;
    }
    pwVar17 = local_128;
    FGenericPlatformString::Memcpy(local_128,pwVar11,(longlong)(int)uVar12 * 2);
  }
  if (local_148 != (wchar_t *)0x0) {
    FMemory::Free(local_148);
  }
  local_140 = CONCAT44(uVar5,uVar8);
  local_118 = (wchar_t *)0x0;
  local_110 = 0;
  local_138 = (wchar_t *)0x0;
  local_130 = 0;
  local_128 = (wchar_t *)0x0;
  local_120 = 2;
  local_148 = pwVar17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
  pwVar11 = local_128;
  FGenericPlatformString::Memcpy(local_128,&DAT_144fe538c,4);
  local_98[0] = 0;
  local_98[1] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_98,0);
  FGenericPlatformString::Memcpy(local_98[0],&DAT_144fe53bc,4);
  while( true ) {
    pwVar9 = L"";
    if ((uint)local_120 != 0) {
      pwVar9 = pwVar11;
    }
    uVar8 = FUN_141592950(&local_148,pwVar9,0,0,0xffffffff);
    if ((int)uVar8 < 0) break;
    if ((int)local_140 == 0) {
      pwVar11 = L"";
      uVar5 = uVar19;
    }
    else {
      pwVar11 = local_148;
      uVar5 = (int)local_140 - 1;
    }
    local_e8 = (wchar_t *)0x0;
    if ((int)uVar8 < (int)uVar5) {
      uVar5 = uVar8;
    }
    uVar12 = uVar5 + 1;
    if (uVar5 == 0) {
      uVar12 = uVar19;
    }
    local_e0._4_4_ = 0;
    pwVar9 = pwVar16;
    uVar13 = uVar19;
    local_e0._0_4_ = uVar12;
    if (0 < (int)uVar12) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
      uVar13 = local_e0._4_4_;
      uVar12 = (uint)local_e0;
      pwVar9 = local_e8;
      if (0 < (int)(uint)local_e0) {
        wcsncpy(local_e8,pwVar11,(longlong)(int)uVar5);
        pwVar9[(int)uVar5] = L'\0';
      }
    }
    iVar14 = (int)local_140;
    if (local_118 != (wchar_t *)0x0) {
      FMemory::Free(local_118);
      iVar14 = (int)local_140;
    }
    local_e8 = (wchar_t *)0x0;
    local_110 = CONCAT44(uVar13,uVar12);
    local_e0 = 0;
    uVar5 = uVar18;
    if ((uint)local_120 != 0) {
      uVar5 = (uint)local_120 - 1;
    }
    uVar5 = uVar5 + uVar8;
    uVar8 = uVar5 + 0x7fffffff;
    uVar12 = iVar14 - 1;
    if (iVar14 == 0) {
      uVar12 = uVar19;
    }
    if (uVar5 < uVar12) {
      uVar12 = uVar5;
    }
    uVar5 = iVar14 - 1;
    if (iVar14 == 0) {
      uVar5 = uVar19;
    }
    uVar13 = uVar12;
    if ((uVar12 <= uVar8) && (uVar13 = uVar5, uVar8 < uVar5)) {
      uVar13 = uVar8;
    }
    local_d8 = (wchar_t *)0x0;
    pwVar11 = L"";
    if (iVar14 != 0) {
      pwVar11 = local_148;
    }
    iVar14 = uVar13 - uVar12;
    uVar8 = iVar14 + 1;
    if (iVar14 == 0) {
      uVar8 = uVar19;
    }
    local_d0._4_4_ = 0;
    pwVar17 = pwVar16;
    uVar5 = uVar19;
    local_118 = pwVar9;
    local_d0._0_4_ = uVar8;
    if ((0 < (int)uVar8) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0), uVar5 = local_d0._4_4_,
       uVar8 = (uint)local_d0, pwVar17 = local_d8, 0 < (int)(uint)local_d0)) {
      wcsncpy(local_d8,pwVar11 + (int)uVar12,(longlong)iVar14);
      pwVar17[iVar14] = L'\0';
    }
    if (local_138 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    iVar14 = (int)local_f0;
    local_d8 = (wchar_t *)0x0;
    puVar10 = &DAT_143f3eda8;
    if ((int)local_f0 != 0) {
      puVar10 = local_f8;
    }
    local_130 = CONCAT44(uVar5,uVar8);
    local_d0 = 0;
    local_138 = pwVar17;
    iVar6 = FUN_141592950(&local_118,puVar10,0,0,0xffffffff);
    if (-1 < iVar6) {
      uVar8 = iVar14 - 1;
      if (iVar14 == 0) {
        uVar8 = uVar19;
      }
      uVar8 = uVar8 + iVar6;
      uVar5 = uVar8 + 0x7fffffff;
      uVar12 = (int)local_110 - 1;
      if ((int)local_110 == 0) {
        uVar12 = uVar19;
      }
      if (uVar8 < uVar12) {
        uVar12 = uVar8;
      }
      uVar8 = (int)local_110 - 1;
      if ((int)local_110 == 0) {
        uVar8 = uVar19;
      }
      uVar13 = uVar12;
      if ((uVar12 <= uVar5) && (uVar13 = uVar8, uVar5 < uVar8)) {
        uVar13 = uVar5;
      }
      local_c8 = (wchar_t *)0x0;
      pwVar11 = L"";
      if ((int)local_110 != 0) {
        pwVar11 = local_118;
      }
      iVar14 = uVar13 - uVar12;
      uVar8 = iVar14 + 1;
      if (iVar14 == 0) {
        uVar8 = uVar19;
      }
      local_c0._4_4_ = 0;
      pwVar9 = pwVar16;
      uVar5 = uVar19;
      local_c0._0_4_ = uVar8;
      if ((0 < (int)uVar8) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0), uVar5 = local_c0._4_4_,
         uVar8 = (uint)local_c0, pwVar9 = local_c8, 0 < (int)(uint)local_c0)) {
        wcsncpy(local_c8,pwVar11 + (int)uVar12,(longlong)iVar14);
        pwVar9[iVar14] = L'\0';
      }
      if (local_118 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      local_c8 = (wchar_t *)0x0;
      local_110 = CONCAT44(uVar5,uVar8);
      local_c0 = 0;
      local_118 = pwVar9;
    }
    cVar3 = FString::EndsWith(&local_118,local_98 + 2,0);
    if (cVar3 != '\0') {
      if ((int)local_110 == 0) {
        pwVar11 = L"";
        uVar8 = uVar18;
      }
      else {
        pwVar11 = local_118;
        uVar8 = (int)local_110 - 1;
      }
      local_b8 = (wchar_t *)0x0;
      uVar5 = uVar19;
      if (-1 < (int)(uVar8 - 1)) {
        uVar5 = uVar8 - 1;
      }
      uVar8 = uVar5 + 1;
      if (uVar5 == 0) {
        uVar8 = uVar19;
      }
      local_b0._4_4_ = 0;
      pwVar9 = pwVar16;
      uVar12 = uVar19;
      local_b0._0_4_ = uVar8;
      if ((0 < (int)uVar8) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0), uVar12 = local_b0._4_4_,
         uVar8 = (uint)local_b0, pwVar9 = local_b8, 0 < (int)(uint)local_b0)) {
        wcsncpy(local_b8,pwVar11,(longlong)(int)uVar5);
        pwVar9[(int)uVar5] = L'\0';
      }
      if (local_118 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      local_b8 = (wchar_t *)0x0;
      local_110 = CONCAT44(uVar12,uVar8);
      local_b0 = 0;
      local_118 = pwVar9;
      cVar3 = FString::StartsWith(&local_118,local_98,0);
      if ((cVar3 != '\0') && (cVar3 = FString::EndsWith(&local_118,local_98,0), cVar3 != '\0')) {
        if ((int)local_110 == 0) {
          pwVar11 = L"";
          uVar8 = uVar18;
        }
        else {
          pwVar11 = local_118;
          uVar8 = (int)local_110 - 1;
        }
        local_a8 = (wchar_t *)0x0;
        uVar5 = uVar19;
        if (-1 < (int)(uVar8 - 1)) {
          uVar5 = uVar8 - 1;
        }
        uVar8 = uVar5 + 1;
        if (uVar5 == 0) {
          uVar8 = uVar19;
        }
        local_a0._4_4_ = 0;
        pwVar9 = pwVar16;
        uVar12 = uVar19;
        local_a0._0_4_ = uVar8;
        if ((0 < (int)uVar8) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0), uVar12 = local_a0._4_4_,
           uVar8 = (uint)local_a0, pwVar9 = local_a8, 0 < (int)(uint)local_a0)) {
          wcsncpy(local_a8,pwVar11,(longlong)(int)uVar5);
          pwVar9[(int)uVar5] = L'\0';
        }
        if (local_118 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        local_a8 = (wchar_t *)0x0;
        local_110 = CONCAT44(uVar12,uVar8);
        local_a0 = 0;
        if (uVar8 == 0) {
          pwVar11 = L"";
          uVar8 = uVar18;
        }
        else {
          pwVar11 = pwVar9;
          uVar8 = uVar8 - 1;
        }
        local_108 = (wchar_t *)0x0;
        local_100 = local_100 & 0xffffffff;
        uVar5 = uVar19;
        if (-1 < (int)(uVar8 - 1)) {
          uVar5 = uVar8 - 1;
        }
        pwVar11 = pwVar11 + ((longlong)(int)uVar8 - (longlong)(int)uVar5);
        pwVar17 = pwVar16;
        uVar8 = uVar19;
        uVar5 = uVar19;
        local_118 = pwVar9;
        if ((pwVar11 != (wchar_t *)0x0) && (*pwVar11 != L'\0')) {
          lVar15 = -1;
          do {
            lVar2 = lVar15 + 1;
            lVar15 = lVar15 + 1;
          } while (pwVar11[lVar2] != L'\0');
          uVar12 = (int)lVar15 + 1;
          local_100 = (ulonglong)uVar12;
          uVar8 = uVar12;
          if (0 < (int)uVar12) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
            uVar8 = (uint)local_100;
            uVar5 = local_100._4_4_;
          }
          pwVar17 = local_108;
          FGenericPlatformString::Memcpy(local_108,pwVar11,(longlong)(int)uVar12 * 2);
        }
        if (local_118 != (wchar_t *)0x0) {
          FMemory::Free(local_118);
        }
        local_108 = (wchar_t *)0x0;
        local_110 = CONCAT44(uVar5,uVar8);
        local_100 = 0;
        local_118 = pwVar17;
      }
    }
    pwVar11 = local_138;
    lVar15 = (longlong)(int)(uint)local_130;
    local_140 = CONCAT44(local_140._4_4_,(uint)local_130);
    if (((uint)local_130 == 0) && (local_140._4_4_ == 0)) {
      local_140 = local_130 & 0xffffffff;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_148,local_130 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop(local_148,pwVar11,lVar15 * 2);
    }
    pwVar11 = L"";
    if ((int)local_110 != 0) {
      pwVar11 = local_118;
    }
    FName::FName(local_res20,pwVar11,1);
    if (DAT_146aed668 == 0) {
      FUN_1421d75c0();
    }
    FUN_1421da6a0(DAT_146aed668,local_res18);
    FUN_1421d3220(local_98 + 6,local_res18);
    pwVar11 = local_128;
  }
  if ((int)(uint)local_130 < 2) {
    if (local_138 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_130 = local_140;
    iVar14 = (int)local_140;
    local_138 = local_148;
    local_140 = 0;
    local_148 = (wchar_t *)0x0;
    if (1 < iVar14) goto LAB_1421d965d;
  }
  else {
LAB_1421d965d:
    iVar14 = (int)local_f0;
    puVar10 = &DAT_143f3eda8;
    if ((int)local_f0 != 0) {
      puVar10 = local_f8;
    }
    iVar6 = FUN_141592950(&local_138,puVar10,0,0,0xffffffff);
    if (-1 < iVar6) {
      uVar8 = iVar14 - 1;
      if (iVar14 == 0) {
        uVar8 = uVar19;
      }
      uVar8 = uVar8 + iVar6;
      uVar5 = uVar8 + 0x7fffffff;
      uVar12 = (uint)local_130 - 1;
      if ((uint)local_130 == 0) {
        uVar12 = uVar19;
      }
      if (uVar8 < uVar12) {
        uVar12 = uVar8;
      }
      uVar8 = (uint)local_130 - 1;
      if ((uint)local_130 == 0) {
        uVar8 = uVar19;
      }
      uVar13 = uVar12;
      if ((uVar12 <= uVar5) && (uVar13 = uVar8, uVar5 < uVar8)) {
        uVar13 = uVar5;
      }
      local_108 = (wchar_t *)0x0;
      pwVar11 = L"";
      if ((uint)local_130 != 0) {
        pwVar11 = local_138;
      }
      iVar14 = uVar13 - uVar12;
      uVar8 = iVar14 + 1;
      if (iVar14 == 0) {
        uVar8 = uVar19;
      }
      local_100 = (ulonglong)uVar8;
      pwVar9 = pwVar16;
      uVar5 = uVar19;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
        pwVar9 = local_108;
        uVar8 = (uint)local_100;
        uVar5 = local_100._4_4_;
        if (0 < (int)(uint)local_100) {
          wcsncpy(local_108,pwVar11 + (int)uVar12,(longlong)iVar14);
          pwVar9[iVar14] = L'\0';
        }
      }
      if (local_138 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      local_130 = CONCAT44(uVar5,uVar8);
      local_138 = pwVar9;
    }
    cVar3 = FString::EndsWith(&local_138,local_98 + 2,0);
    if (cVar3 == '\0') {
LAB_1421d9995:
      uVar18 = (uint)local_130;
    }
    else {
      if ((uint)local_130 == 0) {
        pwVar11 = L"";
        uVar8 = uVar18;
      }
      else {
        pwVar11 = local_138;
        uVar8 = (uint)local_130 - 1;
      }
      local_108 = (wchar_t *)0x0;
      uVar5 = uVar19;
      if (-1 < (int)(uVar8 - 1)) {
        uVar5 = uVar8 - 1;
      }
      uVar8 = uVar5 + 1;
      if (uVar5 == 0) {
        uVar8 = uVar19;
      }
      local_100 = (ulonglong)uVar8;
      pwVar9 = pwVar16;
      uVar12 = uVar19;
      if (0 < (int)uVar8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
        pwVar9 = local_108;
        uVar8 = (uint)local_100;
        uVar12 = local_100._4_4_;
        if (0 < (int)(uint)local_100) {
          wcsncpy(local_108,pwVar11,(longlong)(int)uVar5);
          pwVar9[(int)uVar5] = L'\0';
        }
      }
      if (local_138 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      local_130 = CONCAT44(uVar12,uVar8);
      local_138 = pwVar9;
      cVar3 = FString::StartsWith(&local_138,local_98,0);
      if ((cVar3 == '\0') || (cVar3 = FString::EndsWith(&local_138,local_98,0), cVar3 == '\0'))
      goto LAB_1421d9995;
      if ((uint)local_130 == 0) {
        pwVar11 = L"";
        uVar8 = uVar18;
      }
      else {
        pwVar11 = local_138;
        uVar8 = (uint)local_130 - 1;
      }
      local_108 = (wchar_t *)0x0;
      uVar5 = uVar19;
      if (-1 < (int)(uVar8 - 1)) {
        uVar5 = uVar8 - 1;
      }
      uVar8 = uVar5 + 1;
      if (uVar5 == 0) {
        uVar8 = uVar19;
      }
      local_100._4_4_ = 0;
      pwVar9 = pwVar16;
      uVar12 = uVar19;
      local_100._0_4_ = uVar8;
      if ((0 < (int)uVar8) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0), uVar12 = local_100._4_4_,
         uVar8 = (uint)local_100, pwVar9 = local_108, 0 < (int)(uint)local_100)) {
        wcsncpy(local_108,pwVar11,(longlong)(int)uVar5);
        pwVar9[(int)uVar5] = L'\0';
      }
      if (local_138 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      local_130 = CONCAT44(uVar12,uVar8);
      if (uVar8 == 0) {
        pwVar11 = L"";
      }
      else {
        uVar18 = uVar8 - 1;
        pwVar11 = pwVar9;
      }
      local_108 = (wchar_t *)0x0;
      local_100 = (ulonglong)(uint)local_100;
      uVar8 = uVar19;
      if (-1 < (int)(uVar18 - 1)) {
        uVar8 = uVar18 - 1;
      }
      pwVar11 = pwVar11 + ((longlong)(int)uVar18 - (longlong)(int)uVar8);
      uVar18 = 0;
      local_138 = pwVar9;
      if ((pwVar11 != (wchar_t *)0x0) && (uVar18 = 0, *pwVar11 != L'\0')) {
        lVar15 = -1;
        do {
          lVar15 = lVar15 + 1;
        } while (pwVar11[lVar15] != L'\0');
        uVar8 = (int)lVar15 + 1;
        local_100 = (ulonglong)uVar8;
        uVar18 = uVar8;
        if (0 < (int)uVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
          uVar18 = (uint)local_100;
          uVar19 = local_100._4_4_;
        }
        pwVar16 = local_108;
        FGenericPlatformString::Memcpy(local_108,pwVar11,(longlong)(int)uVar8 * 2);
      }
      if (local_138 != (wchar_t *)0x0) {
        FMemory::Free(local_138);
      }
      local_130 = CONCAT44(uVar19,uVar18);
      local_138 = pwVar16;
    }
    pwVar16 = L"";
    if (uVar18 != 0) {
      pwVar16 = local_138;
    }
    puVar7 = (undefined8 *)FName::FName(local_res20,pwVar16,1);
    uVar1 = *puVar7;
    if (DAT_146aed668 == 0) {
      FUN_1421d75c0();
    }
    FUN_1421da6a0(DAT_146aed668,local_res18,uVar1,1);
    FUN_1421d3220(local_98 + 6,local_res18);
    pwVar11 = local_128;
  }
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  if (pwVar11 != (wchar_t *)0x0) {
    FMemory::Free(pwVar11);
  }
  if (local_138 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_118 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_f8 != (undefined2 *)0x0) {
    FMemory::Free(local_f8);
  }
LAB_1421d9a6e:
  cVar3 = FGameplayTagContainer::operator==(param_1,local_98 + 6);
  if (local_148 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (local_98[2] != 0) {
    FMemory::Free();
  }
  if (local_98[4] != 0) {
    FMemory::Free();
  }
  if (local_98[8] != 0) {
    FMemory::Free();
  }
  if (local_98[6] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return cVar3 == '\0';
}



// FUNCTION 1421d9b20 NotEqual_TagTag body=119 status=ok
// SIG undefined NotEqual_TagTag(void)

bool UBlueprintGameplayTagLibrary::NotEqual_TagTag(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined8 local_res8;
  undefined2 *local_18;
  int local_10;
  
  local_res8 = param_1;
  FName::ToString(&local_res8,&local_18);
  if ((int)param_2[1] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  puVar2 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar2 = local_18;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return iVar1 != 0;
}



// FUNCTION 1421d9ba0 FUN_1421d9ba0 body=108 status=ok
// SIG undefined FUN_1421d9ba0(void)

undefined * FUN_1421d9ba0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aed71c) {
    _Init_thread_header(&DAT_146aed71c);
    if (DAT_146aed71c == -1) {
      atexit((_func_5014 *)&LAB_143ea7880);
      _Init_thread_footer(&DAT_146aed71c);
      return &DAT_146529e30;
    }
  }
  return &DAT_146529e30;
}



// FUNCTION 1421d9c10 FUN_1421d9c10 body=108 status=ok
// SIG undefined FUN_1421d9c10(void)

undefined * FUN_1421d9c10(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aed720) {
    _Init_thread_header(&DAT_146aed720);
    if (DAT_146aed720 == -1) {
      atexit((_func_5014 *)&LAB_143ea7890);
      _Init_thread_footer(&DAT_146aed720);
      return &DAT_146529e48;
    }
  }
  return &DAT_146529e48;
}



// FUNCTION 1421d9c80 FUN_1421d9c80 body=437 status=ok
// SIG undefined FUN_1421d9c80(void)

void FUN_1421d9c80(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *local_28;
  undefined8 local_20;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aed714) && (_Init_thread_header(&DAT_146aed714), DAT_146aed714 == -1))
  {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146529dd0,0);
    FGenericPlatformString::Memcpy
              (DAT_146529dd0,L"UGameplayTagsManager::PopulateTreeFromDataTable",0x60);
    atexit((_func_5014 *)&LAB_143ea7860);
    _Init_thread_footer(&DAT_146aed714);
  }
  uVar8 = 0;
  local_28 = (longlong *)0x0;
  puVar4 = &DAT_143f3eda8;
  if (DAT_146529dd8 != 0) {
    puVar4 = DAT_146529dd0;
  }
  local_20 = 0;
  FUN_1421d15f0(param_2,puVar4,&local_28);
  lVar2 = UObjectBaseUtility::GetOutermost(param_2);
  plVar5 = (longlong *)(param_1 + 0xa8);
  plVar3 = (longlong *)*plVar5;
  iVar1 = *(int *)(param_1 + 0xb0);
  lVar2 = *(longlong *)(lVar2 + 0x18);
  plVar7 = plVar3 + (longlong)iVar1 * 4;
  for (; plVar3 != plVar7; plVar3 = plVar3 + 4) {
    if (*plVar3 == lVar2) goto LAB_1421d9d64;
  }
  *(int *)(param_1 + 0xb0) = iVar1 + 1;
  if (*(int *)(param_1 + 0xb4) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar5);
  }
  plVar5 = (longlong *)(*plVar5 + (longlong)iVar1 * 0x20);
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = lVar2;
    *(undefined1 *)(plVar5 + 1) = 4;
    plVar5[2] = 0;
    plVar5[3] = 0;
  }
LAB_1421d9d64:
  plVar5 = local_28;
  uVar6 = (ulonglong)((longlong)(local_28 + (int)local_20) + (7 - (longlong)local_28)) >> 3;
  if (local_28 + (int)local_20 < local_28) {
    uVar6 = uVar8;
  }
  plVar7 = local_28;
  if (uVar6 != 0) {
    do {
      if (*plVar7 != 0) {
        FUN_1421d3550(param_1,*plVar7,lVar2,0);
      }
      plVar7 = plVar7 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar6);
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  return;
}



// FUNCTION 1421d9e50 FUN_1421d9e50 body=285 status=ok
// SIG undefined FUN_1421d9e50(void)

longlong * FUN_1421d9e50(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)0x0;
  plVar5 = (longlong *)(ulonglong)(*(byte *)(param_2 + 5) & 0x41);
  if (((*(byte *)(param_2 + 5) & 0x41) == 0x41) &&
     (plVar5 = (longlong *)(ulonglong)*(uint *)(param_2 + 6),
     (*(uint *)(param_2 + 6) & 0x401000) == 0)) {
    if (DAT_146aed668 == 0) {
      FUN_1421d75c0();
    }
    lVar1 = *param_1;
    if (*(int *)(DAT_146aed668 + 0x148) != *(int *)(DAT_146aed668 + 0x174)) {
      lVar3 = *(longlong *)(DAT_146aed668 + 0x180);
      if (*(longlong *)(DAT_146aed668 + 0x180) == 0) {
        lVar3 = DAT_146aed668 + 0x178;
      }
      iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                               (longlong)*(int *)(DAT_146aed668 + 0x188) - 1U) * 4);
      if (iVar2 != -1) {
        do {
          plVar6 = (longlong *)(*(longlong *)(DAT_146aed668 + 0x140) + (longlong)iVar2 * 0x18);
          if (*(longlong *)(*(longlong *)(DAT_146aed668 + 0x140) + (longlong)iVar2 * 0x18) == lVar1)
          {
            if (iVar2 != -1) goto LAB_1421d9f13;
            break;
          }
          iVar2 = (int)plVar6[2];
        } while (iVar2 != -1);
      }
    }
    plVar6 = plVar7;
LAB_1421d9f13:
    plVar5 = plVar6 + 1;
    if (plVar6 == (longlong *)0x0) {
      plVar5 = plVar7;
    }
    if ((plVar5 != (longlong *)0x0) && (*plVar5 != 0)) {
      *param_1 = *plVar5;
    }
  }
  if (((*(byte *)(param_2 + 5) & 2) != 0) && (plVar5 = plVar7, *param_1 != 0)) {
    lVar1 = *param_2;
    uVar4 = FGameplayTag::StaticStruct();
    plVar5 = (longlong *)(**(code **)(lVar1 + 0x108))(param_2,uVar4,param_1);
  }
  return plVar5;
}



// FUNCTION 1421d9f70 RedirectTagsForContainer body=1384 status=ok
// SIG undefined RedirectTagsForContainer(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UGameplayTagsManager::RedirectTagsForContainer(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  uint *puVar11;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  uint uStack_160;
  int iStack_15c;
  undefined8 local_158;
  undefined8 local_150;
  longlong local_148;
  longlong *local_140;
  undefined8 uStack_138;
  uint *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 local_118 [8];
  longlong local_110;
  longlong *local_108;
  longlong *local_100;
  undefined8 uStack_f8;
  uint *puStack_f0;
  uint uStack_e8;
  int iStack_e4;
  undefined8 uStack_e0;
  longlong local_d8 [2];
  uint local_c8 [4];
  uint *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  longlong local_88 [2];
  uint local_78 [4];
  uint *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_58 = 0xffffffff;
  local_88[0] = 0;
  local_88[1] = 0;
  local_68 = (uint *)0x0;
  local_60 = 0;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_b8 = (uint *)0x0;
  local_b0 = 0;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0xffffffff;
  plVar6 = (longlong *)0x0;
  plVar5 = plVar6;
  while ((iVar10 = (int)plVar5, -1 < iVar10 && (iVar10 < (int)param_2[1]))) {
    local_110 = *(longlong *)(*param_2 + (longlong)iVar10 * 8);
    if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x174)) {
      lVar3 = *(longlong *)(param_1 + 0x180);
      if (*(longlong *)(param_1 + 0x180) == 0) {
        lVar3 = param_1 + 0x178;
      }
      iVar2 = *(int *)(lVar3 + ((longlong)((int)((ulonglong)local_110 >> 0x20) + (int)local_110) &
                               (longlong)*(int *)(param_1 + 0x188) - 1U) * 4);
      if (iVar2 != -1) {
        do {
          plVar5 = (longlong *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar2 * 0x18);
          if (*(longlong *)(*(longlong *)(param_1 + 0x140) + (longlong)iVar2 * 0x18) == local_110) {
            if (iVar2 != -1) goto LAB_1421da083;
            break;
          }
          iVar2 = (int)plVar5[2];
        } while (iVar2 != -1);
      }
    }
    plVar5 = plVar6;
LAB_1421da083:
    plVar9 = plVar5 + 1;
    if (plVar5 == (longlong *)0x0) {
      plVar9 = plVar6;
    }
    local_108 = plVar9;
    if (plVar9 != (longlong *)0x0) {
      FUN_140800100(local_88,local_118,&local_110,0);
      local_150 = 0;
      if (*plVar9 != 0) {
        FUN_14058cbf0(local_d8,&local_148,&local_108);
      }
    }
    plVar5 = (longlong *)(ulonglong)(iVar10 + 1);
  }
  iVar10 = (int)local_60;
  puStack_130 = local_78;
  local_178._0_4_ = 0;
  local_178._4_4_ = 1;
  local_168._4_4_ = 0;
  uStack_160 = 0;
  if ((int)local_60 != 0) {
    puVar11 = local_78;
    if (local_68 != (uint *)0x0) {
      puVar11 = local_68;
    }
    uVar1 = *puVar11;
    plVar5 = plVar6;
    plVar9 = plVar6;
    while (uVar1 == 0) {
      iVar2 = (int)plVar5;
      uStack_160 = (int)plVar9 + 0x20;
      plVar9 = (longlong *)(ulonglong)uStack_160;
      local_178._0_4_ = iVar2 + 1;
      plVar5 = (longlong *)(ulonglong)(uint)local_178;
      if ((int)((int)local_60 + -1 + ((int)local_60 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar2) {
        local_168._4_4_ = (int)local_60;
        goto LAB_1421da185;
      }
      uVar1 = puVar11[(longlong)iVar2 + 1];
    }
    local_178._4_4_ = uVar1 - 1 & uVar1 ^ uVar1;
    iVar2 = 0x1f;
    if (local_178._4_4_ != 0) {
      for (; local_178._4_4_ >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (local_178._4_4_ == 0) {
      iVar2 = 0x20;
    }
    else {
      iVar2 = 0x1f - iVar2;
    }
    local_168._4_4_ = (uStack_160 - iVar2) + 0x1f;
    if ((int)local_60 < local_168._4_4_) {
      local_168._4_4_ = (int)local_60;
    }
  }
LAB_1421da185:
  uStack_138 = CONCAT44(local_178._4_4_,(uint)local_178);
  local_140 = local_88;
  uStack_128 = CONCAT44(local_168._4_4_,0xffffffff);
  local_158 = CONCAT44(iStack_15c,uStack_160);
  uStack_170 = (uint *)CONCAT44(local_178._4_4_,(uint)local_178);
  uStack_160 = 0xffffffff;
  iStack_15c = local_168._4_4_;
  uStack_120 = local_158;
  local_178 = local_140;
  local_168 = puStack_130;
LAB_1421da1c0:
  if (((iStack_15c != iVar10) || (local_168 != local_78)) || (local_178 != local_88)) {
    lVar3 = *(longlong *)(*local_178 + (longlong)iStack_15c * 0x10);
    if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
      lVar4 = *(longlong *)(param_1 + 0x88);
      if (*(longlong *)(param_1 + 0x88) == 0) {
        lVar4 = param_1 + 0x80;
      }
      iVar2 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                               (longlong)*(int *)(param_1 + 0x90) - 1U) * 4);
      if (iVar2 != -1) {
        do {
          if (*(longlong *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x48)) == lVar3) {
            local_148 = lVar3;
            if (iVar2 != -1) goto LAB_1421da25f;
            break;
          }
          iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x48));
        } while (iVar2 != -1);
      }
    }
    local_148 = 0;
LAB_1421da25f:
    iVar2 = (int)param_2[1];
    plVar5 = (longlong *)*param_2;
    local_150 = 0;
    plVar9 = plVar5;
    if (local_148 == 0) {
      for (plVar8 = plVar5; plVar8 != plVar5 + iVar2; plVar8 = plVar8 + 1) {
        if (*plVar8 == lVar3) goto joined_r0x0001421da2c9;
      }
    }
    else {
      for (; plVar9 != plVar5 + iVar2; plVar9 = plVar9 + 1) {
        if (*plVar9 == local_148) goto LAB_1421da2e0;
      }
    }
    goto LAB_1421da315;
  }
  iVar10 = (int)local_b0;
  uStack_170 = local_c8;
  local_178._0_4_ = 0;
  local_178._4_4_ = 1;
  local_168._4_4_ = 0;
  uStack_160 = 0;
  if ((int)local_b0 != 0) {
    puVar11 = local_c8;
    if (local_b8 != (uint *)0x0) {
      puVar11 = local_b8;
    }
    uVar1 = *puVar11;
    plVar5 = plVar6;
    while (uVar1 == 0) {
      iVar2 = (int)plVar6;
      uStack_160 = (int)plVar5 + 0x20;
      plVar5 = (longlong *)(ulonglong)uStack_160;
      local_178._0_4_ = iVar2 + 1;
      plVar6 = (longlong *)(ulonglong)(uint)local_178;
      if ((int)((int)local_b0 + -1 + ((int)local_b0 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar2) {
        local_168._4_4_ = (int)local_b0;
        goto LAB_1421da3d7;
      }
      uVar1 = puVar11[(longlong)iVar2 + 1];
    }
    local_178._4_4_ = -uVar1 & uVar1;
    iVar2 = 0x1f;
    if (local_178._4_4_ != 0) {
      for (; local_178._4_4_ >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (local_178._4_4_ == 0) {
      iVar2 = 0x20;
    }
    else {
      iVar2 = 0x1f - iVar2;
    }
    local_168._4_4_ = (uStack_160 - iVar2) + 0x1f;
    if ((int)local_b0 < local_168._4_4_) {
      local_168._4_4_ = (int)local_b0;
    }
  }
LAB_1421da3d7:
  uStack_128._0_4_ = 0xffffffff;
  uStack_128._4_4_ = local_168._4_4_;
  uStack_120 = CONCAT44(iStack_15c,uStack_160);
  local_140 = local_d8;
  uStack_f8 = CONCAT44(local_178._4_4_,(uint)local_178);
  local_168._0_4_ = -1 << ((byte)local_b0 & 0x1f);
  local_168._4_4_ = (int)local_b0;
  uStack_138._0_4_ = (uint)local_178;
  uStack_138._4_4_ = local_178._4_4_;
  puStack_130 = uStack_170;
  local_100 = local_140;
  puStack_f0 = uStack_170;
  uStack_e0 = uStack_120;
  uStack_e8 = (uint)uStack_128;
  iStack_e4 = uStack_128._4_4_;
  while (((uStack_128._4_4_ != iVar10 || (puStack_130 != local_c8)) || (local_140 != local_d8))) {
    FUN_1421d3220(param_2,*(undefined8 *)(*local_140 + (longlong)uStack_128._4_4_ * 0x10));
    uStack_128._0_4_ = (uint)uStack_128 & ~uStack_138._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_138);
  }
  local_90 = 0;
  if (local_98 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_d8);
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_88);
  return;
joined_r0x0001421da2c9:
  if (plVar9 == plVar5 + iVar2) goto LAB_1421da315;
  if (*plVar9 == *plVar8) goto LAB_1421da2e0;
  plVar9 = plVar9 + 1;
  goto joined_r0x0001421da2c9;
LAB_1421da2e0:
  iVar7 = (int)((longlong)plVar9 - (longlong)plVar5 >> 3);
  if (iVar7 != -1) {
    ::_guard_xfg_dispatch_icall_nop
              (plVar5 + iVar7,plVar5 + iVar7 + 1,(longlong)((iVar2 - iVar7) + -1) << 3);
    *(int *)(param_2 + 1) = (int)param_2[1] + -1;
    FUN_1421d5db0(param_2);
  }
LAB_1421da315:
  uStack_160 = uStack_160 & ~uStack_170._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_170);
  goto LAB_1421da1c0;
}



// FUNCTION 1421da4e0 RemoveAtImpl body=202 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FNetFieldExport,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + 0x18 + (longlong)param_2 * 0x40);
    iVar3 = param_3;
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x40),
                 (void *)((longlong)(param_2 + param_3) * 0x40 + *param_1),(longlong)iVar1 << 6);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FPartyReservation,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1421da5b0 RemoveGameplayTag body=5 status=ok
// SIG undefined RemoveGameplayTag(void)

undefined8 UBlueprintGameplayTagLibrary::RemoveGameplayTag(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)*param_1;
  plVar3 = plVar1;
  while( true ) {
    if (plVar3 == plVar1 + (int)param_1[1]) {
      return 0;
    }
    if (*plVar3 == param_2) break;
    plVar3 = plVar3 + 1;
  }
  iVar2 = (int)((longlong)plVar3 - (longlong)plVar1 >> 3);
  if (iVar2 == -1) {
    return 0;
  }
  ::_guard_xfg_dispatch_icall_nop
            (plVar1 + iVar2,plVar1 + iVar2 + 1,(longlong)(((int)param_1[1] - iVar2) + -1) << 3);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  FUN_1421d5db0(param_1);
  return 1;
}



// FUNCTION 1421da5c0 RemoveGameplayTag body=114 status=ok
// SIG undefined RemoveGameplayTag(void)

undefined8 UBlueprintGameplayTagLibrary::RemoveGameplayTag(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)*param_1;
  plVar3 = plVar1;
  while( true ) {
    if (plVar3 == plVar1 + (int)param_1[1]) {
      return 0;
    }
    if (*plVar3 == param_2) break;
    plVar3 = plVar3 + 1;
  }
  iVar2 = (int)((longlong)plVar3 - (longlong)plVar1 >> 3);
  if (iVar2 == -1) {
    return 0;
  }
  ::_guard_xfg_dispatch_icall_nop
            (plVar1 + iVar2,plVar1 + iVar2 + 1,(longlong)(((int)param_1[1] - iVar2) + -1) << 3);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  FUN_1421d5db0(param_1);
  return 1;
}



// FUNCTION 1421da640 RequestGameplayTag body=83 status=ok
// SIG undefined RequestGameplayTag(void)

undefined8
FGameplayTag::RequestGameplayTag(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  if (DAT_146aed668 == 0) {
    FUN_1421d75c0();
  }
  FUN_1421da6a0(DAT_146aed668,param_1,param_2,param_3);
  return param_1;
}



// FUNCTION 1421da6a0 FUN_1421da6a0 body=410 status=ok
// SIG undefined FUN_1421da6a0(void)

longlong * FUN_1421da6a0(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined1 local_res8 [8];
  longlong local_res18 [2];
  
  iVar1 = (int)((ulonglong)param_3 >> 0x20);
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    lVar3 = *(longlong *)(param_1 + 0x88);
    if (*(longlong *)(param_1 + 0x88) == 0) {
      lVar3 = param_1 + 0x80;
    }
    iVar2 = *(int *)(lVar3 + ((longlong)(iVar1 + (int)param_3) &
                             (longlong)*(int *)(param_1 + 0x90) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)((longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x48)) == param_3) {
          if (iVar2 != -1) {
            *param_2 = param_3;
            return param_2;
          }
          break;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + *(longlong *)(param_1 + 0x48));
      } while (iVar2 != -1);
    }
  }
  if (param_4 != '\0') {
    local_res18[0] = param_3;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146aed718) &&
       (_Init_thread_header(&DAT_146aed718), DAT_146aed718 == -1)) {
      atexit(FUN_143ea78a0);
      _Init_thread_footer(&DAT_146aed718);
    }
    if (DAT_146529de8 != DAT_146529e14) {
      puVar4 = DAT_146529e20;
      if (DAT_146529e20 == (undefined *)0x0) {
        puVar4 = &DAT_146529e18;
      }
      for (iVar1 = *(int *)(puVar4 + (longlong)(int)(iVar1 + (int)param_3 & DAT_146529e28 - 1U) * 4)
          ; iVar1 != -1; iVar1 = *(int *)(DAT_146529de0 + 8 + (longlong)iVar1 * 0x10)) {
        if (*(longlong *)(DAT_146529de0 + (longlong)iVar1 * 0x10) == param_3) {
          if (iVar1 != -1) goto LAB_1421da7ef;
          break;
        }
      }
    }
    FUN_140800100(&DAT_146529de0,local_res8,local_res18,0);
  }
LAB_1421da7ef:
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1421da840 FUN_1421da840 body=326 status=ok
// SIG undefined FUN_1421da840(void)

undefined8 * FUN_1421da840(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_18;
  longlong *local_10;
  
  plVar6 = (longlong *)0x0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    lVar2 = *param_3;
    lVar4 = *(longlong *)(param_1 + 0x88);
    if (*(longlong *)(param_1 + 0x88) == 0) {
      lVar4 = param_1 + 0x80;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                             (longlong)*(int *)(param_1 + 0x90) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar7 = (longlong *)((longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0x48));
        if (*plVar7 == lVar2) {
          if (iVar3 != -1) goto LAB_1421da8d2;
          break;
        }
        iVar3 = (int)plVar7[3];
      } while (iVar3 != -1);
    }
  }
  plVar7 = plVar6;
LAB_1421da8d2:
  plVar5 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar5 = plVar6;
  }
  plVar7 = plVar6;
  if (plVar5 != (longlong *)0x0) {
    plVar7 = (longlong *)*plVar5;
    plVar6 = (longlong *)plVar5[1];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
  }
  if (plVar7 != (longlong *)0x0) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_18 = plVar7;
    local_10 = plVar6;
    UGameplayTagsManager::AddChildrenTags(param_1,param_2,&local_18,1,0);
  }
  if (plVar6 == (longlong *)0x0) {
    return param_2;
  }
  LOCK();
  plVar7 = plVar6 + 1;
  lVar2 = *plVar7;
  *(int *)plVar7 = (int)*plVar7 + -1;
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
  return param_2;
}



// FUNCTION 1421da990 Reset body=66 status=ok
// SIG undefined Reset(void)

void FGameplayTagContainer::Reset(longlong param_1,int param_2)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) < param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x10,param_2);
  }
  return;
}



// FUNCTION 1421da9e0 FUN_1421da9e0 body=254 status=ok
// SIG undefined FUN_1421da9e0(void)

void FUN_1421da9e0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 local_28;
  longlong *local_20;
  
  uVar6 = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x14)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 1,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((*(int *)((longlong)param_1 + 0x24) < 0) && (*(int *)((longlong)param_1 + 0x24) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 3,0);
  }
  *(undefined2 *)(param_1 + 9) = 0xffff;
  uVar8 = uVar6;
  if (0 < *(int *)(param_1 + 6)) {
    do {
      FUN_1421da9e0(*(undefined8 *)(param_1[5] + uVar6));
      uVar7 = (int)uVar8 + 1;
      uVar6 = uVar6 + 0x10;
      uVar8 = (ulonglong)uVar7;
    } while ((int)uVar7 < *(int *)(param_1 + 6));
  }
  TArray<TSharedPtr<IDataSeriesElement,1>,TSizedDefaultAllocator<32>_>::Empty(param_1 + 5,0);
  local_20 = (longlong *)0x0;
  if (param_1 + 7 != &local_28) {
    param_1[7] = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 8,&local_20);
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
  return;
}



// FUNCTION 1421daae0 FUN_1421daae0 body=250 status=ok
// SIG undefined FUN_1421daae0(void)

undefined8 FUN_1421daae0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_18;
  undefined8 local_10;
  
  if ((int)param_2[8] < 0x178) {
    local_18 = 0;
    local_10 = 0;
    FUN_14172b230(param_2,&local_18);
    if (local_18 != 0) {
      FMemory::Free();
    }
  }
  else {
    FUN_14172b230(param_2,param_1);
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    if (((*(byte *)(param_2 + 5) & 0x40) != 0) && ((*(uint *)(param_2 + 6) & 0x401000) == 0)) {
      lVar1 = param_2[0xf];
      if (DAT_146aed668 == 0) {
        FUN_1421d75c0();
      }
      UGameplayTagsManager::RedirectTagsForContainer(DAT_146aed668,param_1,lVar1);
    }
    FUN_1421d5db0(param_1);
  }
  if ((*(byte *)(param_2 + 5) & 2) == 0) {
    return 1;
  }
  lVar4 = *param_1;
  lVar1 = lVar4 + (longlong)(int)param_1[1] * 8;
  for (; lVar4 != lVar1; lVar4 = lVar4 + 8) {
    lVar2 = *param_2;
    uVar3 = FGameplayTag::StaticStruct();
    (**(code **)(lVar2 + 0x108))(param_2,uVar3,lVar4);
  }
  return 1;
}



// FUNCTION 1421dabe0 FUN_1421dabe0 body=49 status=ok
// SIG undefined FUN_1421dabe0(void)

undefined8 FUN_1421dabe0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  if (*param_2 == 6) {
    (**(code **)(*param_3 + 0x40))(param_3,param_1);
    return 1;
  }
  return 0;
}


