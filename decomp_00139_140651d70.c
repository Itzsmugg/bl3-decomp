// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140651d70 FUN_140651d70 body=77 status=ok
// SIG undefined FUN_140651d70(void)

void FUN_140651d70(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_res18 [8];
  undefined8 local_res20;
  
  local_res20 = UNodeMappingContainer::StaticClass();
  FUN_14058cbf0(param_2,local_res18,&local_res20,0);
  local_res20 = USkeleton::GetPrivateStaticClass();
  FUN_14058cbf0(param_2,local_res18,&local_res20,0);
  return;
}



// FUNCTION 140651dc0 GetCompatibleUserDecorationsImpl body=46 status=ok
// SIG undefined GetCompatibleUserDecorationsImpl(void)

void UMovieSceneAudioTrack::GetCompatibleUserDecorationsImpl(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_res18 [8];
  undefined8 local_res20;
  
  local_res20 = UCameraShake::GetPrivateStaticClass();
  FUN_14058cbf0(param_2,local_res18,&local_res20,0);
  return;
}



// FUNCTION 140651df0 GetCompatibleUserDecorationsImpl body=46 status=ok
// SIG undefined GetCompatibleUserDecorationsImpl(void)

void UMovieSceneAudioTrack::GetCompatibleUserDecorationsImpl(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_res18 [8];
  undefined8 local_res20;
  
  local_res20 = USkeleton::GetPrivateStaticClass();
  FUN_14058cbf0(param_2,local_res18,&local_res20,0);
  return;
}



// FUNCTION 140651e20 GetCompatibleUserDecorationsImpl body=46 status=ok
// SIG undefined GetCompatibleUserDecorationsImpl(void)

void UMovieSceneAudioTrack::GetCompatibleUserDecorationsImpl(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_res18 [8];
  undefined8 local_res20;
  
  local_res20 = UNodeMappingContainer::StaticClass();
  FUN_14058cbf0(param_2,local_res18,&local_res20,0);
  return;
}



// FUNCTION 140651e50 GetCompatibleUserDecorationsImpl body=46 status=ok
// SIG undefined GetCompatibleUserDecorationsImpl(void)

void UMovieSceneAudioTrack::GetCompatibleUserDecorationsImpl(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_res18 [8];
  undefined8 local_res20;
  
  local_res20 = UTexture::GetPrivateStaticClass();
  FUN_14058cbf0(param_2,local_res18,&local_res20,0);
  return;
}



// FUNCTION 140651e80 FUN_140651e80 body=1068 status=ok
// SIG undefined FUN_140651e80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float FUN_140651e80(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  uint *puVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  int local_250;
  uint uStack_24c;
  uint *puStack_248;
  int local_240;
  int iStack_23c;
  int iStack_238;
  undefined4 uStack_234;
  int local_230;
  int local_22c;
  undefined1 local_228 [8];
  undefined1 local_220 [4];
  undefined1 local_21c [4];
  longlong *local_218;
  undefined8 uStack_210;
  uint *local_208;
  uint uStack_200;
  int iStack_1fc;
  undefined8 local_1f8;
  longlong *local_1f0;
  undefined8 uStack_1e8;
  uint *puStack_1e0;
  uint uStack_1d8;
  int iStack_1d4;
  undefined8 uStack_1d0;
  undefined **local_1c8 [5];
  byte local_19e;
  undefined8 local_138;
  undefined8 local_130;
  undefined **local_128 [5];
  byte local_fe;
  undefined8 local_98;
  undefined8 local_90;
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
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  iVar14 = 0;
  local_230 = 0;
  iVar13 = 0;
  if (param_1 != (longlong *)0x0) {
    FArchive::FArchive(local_128);
    local_fe = local_fe | 0x20;
    local_128[0] = &PTR_FUN_1440265a0;
    local_98 = 0;
    local_90 = 0;
    (**(code **)(*param_1 + 0xa8))(param_1,local_128);
    plVar12 = (longlong *)param_1[8];
    local_22c = (int)local_90;
    local_88 = 0;
    plVar3 = plVar12 + (int)param_1[9];
    local_80 = 0;
    local_68 = (uint *)0x0;
    local_60 = 0;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    iVar10 = 0;
    iVar13 = 0;
    if (plVar12 != plVar3) {
      do {
        lVar6 = *plVar12;
        if (lVar6 != 0) {
          plVar8 = *(longlong **)(lVar6 + 0x40);
          plVar1 = plVar8 + *(int *)(lVar6 + 0x48);
          for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
            lVar6 = *plVar8;
            if (lVar6 != 0) {
              local_258 = *(undefined8 *)(lVar6 + 0x30);
              TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>
              ::Emplace<FObjectReplicator_*_const_&>(&local_88,local_220,&local_258,0);
              local_258 = *(undefined8 *)(lVar6 + 0x50);
              TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>
              ::Emplace<FObjectReplicator_*_const_&>(&local_88,local_21c,&local_258);
              uVar9 = 0;
              puVar7 = *(undefined8 **)(lVar6 + 0x38);
              uVar15 = (longlong)*(int *)(lVar6 + 0x40) & 0x1fffffffffffffff;
              if (puVar7 + *(int *)(lVar6 + 0x40) < puVar7) {
                uVar15 = uVar9;
              }
              if (uVar15 != 0) {
                do {
                  local_258 = *puVar7;
                  TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>
                  ::Emplace<FObjectReplicator_*_const_&>(&local_88,local_228,&local_258,0);
                  uVar9 = uVar9 + 1;
                  puVar7 = puVar7 + 1;
                } while (uVar9 != uVar15);
              }
            }
          }
        }
        plVar12 = plVar12 + 1;
      } while (plVar12 != plVar3);
      iVar10 = (int)local_60;
      iVar13 = local_230;
    }
    iVar14 = local_22c;
    local_250 = 0;
    puStack_248 = local_78;
    uStack_24c = 1;
    iStack_23c = 0;
    iStack_238 = 0;
    if (iVar10 != 0) {
      puVar11 = local_78;
      if (local_68 != (uint *)0x0) {
        puVar11 = local_68;
      }
      uVar2 = *puVar11;
      iStack_238 = 0;
      local_250 = 0;
      while (uVar2 == 0) {
        lVar6 = (longlong)local_250;
        iStack_238 = iStack_238 + 0x20;
        iVar5 = local_250 + 1;
        bVar4 = (int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_250;
        local_250 = iVar5;
        iStack_23c = iVar10;
        if (bVar4) goto LAB_14065214f;
        uVar2 = puVar11[lVar6 + 1];
      }
      uStack_24c = -uVar2 & uVar2;
      iVar5 = 0x1f;
      if (uStack_24c != 0) {
        for (; uStack_24c >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uStack_24c == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      iStack_23c = (iStack_238 - iVar5) + 0x1f;
      if (iVar10 < iStack_23c) {
        iStack_23c = iVar10;
      }
    }
LAB_14065214f:
    uStack_200 = 0xffffffff;
    iStack_1fc = iStack_23c;
    local_1f8 = CONCAT44(uStack_234,iStack_238);
    local_218 = &local_88;
    uStack_210 = CONCAT44(uStack_24c,local_250);
    local_240 = -1 << ((byte)iVar10 & 0x1f);
    iStack_23c = iVar10;
    local_208 = puStack_248;
    local_1f0 = local_218;
    uStack_1e8 = uStack_210;
    puStack_1e0 = puStack_248;
    uStack_1d0 = local_1f8;
    uStack_1d8 = uStack_200;
    iStack_1d4 = iStack_1fc;
    while (((iStack_1fc != iVar10 || (local_208 != local_78)) || (local_218 != &local_88))) {
      plVar3 = *(longlong **)(*local_218 + (longlong)iStack_1fc * 0x10);
      FArchive::FArchive(local_1c8);
      local_19e = local_19e | 0x20;
      local_1c8[0] = &PTR_FUN_1440265a0;
      local_138 = 0;
      local_130 = 0;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0xa8))(plVar3,local_1c8);
      }
      iVar13 = iVar13 + (int)local_130;
      FArchive::~FArchive(local_1c8);
      uStack_200 = uStack_200 & ~uStack_210._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_210);
    }
    local_40 = 0;
    if (local_48 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_88);
    FArchive::~FArchive(local_128);
  }
  return ((float)iVar13 + (float)iVar14) * 0.0009765625;
}



// FUNCTION 1406522b0 FUN_1406522b0 body=173 status=ok
// SIG undefined FUN_1406522b0(void)

void FUN_1406522b0(longlong *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  longlong local_res8;
  undefined2 *local_18;
  int local_10;
  
  cVar1 = (**(code **)(*param_1 + 0x2c0))();
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x2a8))(param_1,param_2,param_3);
    local_res8 = param_1[3];
    if ((*(longlong *)(param_1[2] + 0x18) != local_res8) &&
       ((*(int *)(param_2 + 8) == 0 || (*(int *)(param_3 + 8) == 0)))) {
      FName::ToString(&local_res8,&local_18);
      puVar3 = &DAT_143f3eda8;
      if (local_10 != 0) {
        puVar3 = local_18;
      }
      uVar2 = FUN_141672640();
      FOutputDevice::LogfImpl
                (uVar2,
                 L"Warning, OnGetTestCommands() returned empty array for %s.  Did you forget to override the OnGetTestCommands function?"
                 ,puVar3);
      if (local_18 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140652360 FUN_140652360 body=1829 status=ok
// SIG undefined FUN_140652360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140652360(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  void *_Dst;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined2 *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined1 *puVar19;
  uint *puVar20;
  longlong *plVar21;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  longlong *local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  uint uStack_1c8;
  int iStack_1c4;
  undefined8 local_1c0;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined8 uStack_1a8;
  uint *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  longlong local_188;
  undefined8 local_180;
  uint local_178 [4];
  uint *local_168;
  undefined8 local_160;
  undefined4 local_158;
  int local_154;
  undefined1 local_150 [8];
  ulonglong local_148;
  int local_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
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
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  puVar8 = (undefined8 *)*param_1;
  puVar17 = puVar8 + (longlong)*(int *)(param_1 + 1) * 2;
  puVar14 = (undefined1 *)0x0;
  local_188 = 0;
  local_180 = 0;
  local_168 = (uint *)0x0;
  local_160 = 0;
  local_158 = 0xffffffff;
  local_154 = 0;
  local_148 = 0;
  local_140 = 0;
  for (; puVar8 != puVar17; puVar8 = puVar8 + 2) {
    if (*(int *)(puVar8 + 1) == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = (undefined2 *)*puVar8;
    }
    FName::FName(&local_1f8,puVar15,1);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
              (&local_188,local_1b8,&local_1f8,0);
  }
  puVar8 = (undefined8 *)FName::FName(&local_1f8,"AssetRegistry",1);
  lVar9 = FModuleManager::GetModulePtr_Internal(*puVar8);
  if ((0 < (int)local_180 - local_154) && (lVar9 != 0)) {
    local_138 = 0;
    local_130 = 0;
    local_128 = 0;
    local_120 = 0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 0;
    local_100 = 0;
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
    local_58 = 0;
    lVar9 = FUN_1428dfc70();
    uVar4 = local_100;
    lVar18 = (longlong)(int)local_100;
    uVar11 = *(undefined8 *)(lVar9 + 0x18);
    iVar5 = (int)local_100 + 1;
    local_100 = CONCAT44(local_100._4_4_,iVar5);
    if (local_100._4_4_ < iVar5) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_108,uVar4 & 0xffffffff);
    }
    *(undefined8 *)(local_108 + lVar18 * 8) = uVar11;
    FName::FName(&local_1f8,L"/Game",1);
    uVar4 = local_120;
    lVar9 = (longlong)(int)local_120;
    iVar5 = (int)local_120 + 1;
    local_120 = CONCAT44(local_120._4_4_,iVar5);
    if (local_120._4_4_ < iVar5) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_128,uVar4 & 0xffffffff);
    }
    *(undefined8 *)(local_128 + lVar9 * 8) = local_1f8;
    local_58 = CONCAT22(local_58._2_2_,0x101);
    local_1f0 = (longlong *)0x0;
    local_1e8 = 0;
    puVar8 = (undefined8 *)FName::FName(&local_1f8,"AssetRegistry",1);
    plVar10 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar8);
    if (plVar10 != (longlong *)0x0) {
      plVar10 = (longlong *)(**(code **)(*plVar10 + 0x48))(plVar10);
      (**(code **)(*plVar10 + 0x40))(plVar10,&local_138,&local_1f0);
      puVar8 = (undefined8 *)FName::FName(&local_1f8,"GbxBlueprintHelper",1);
      plVar10 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar8);
      if (plVar10 != (longlong *)0x0) {
        uVar11 = (**(code **)(*plVar10 + 0x40))(plVar10);
        FUN_142ea6e80(uVar11,&local_138,&local_1f0);
      }
    }
    if ((0 < (int)local_1e8) &&
       (plVar10 = local_1f0 + (longlong)(int)local_1e8 * 0xb, local_1f0 != plVar10)) {
      lVar9 = local_188;
      plVar21 = local_1f0 + 1;
LAB_140652610:
      if ((int)local_180 != local_154) {
        lVar18 = plVar21[2];
        puVar19 = local_150;
        if (local_148 != 0) {
          puVar19 = puVar14;
        }
        for (iVar5 = *(int *)((local_148 | (ulonglong)puVar19) +
                             (longlong)
                             (int)((int)((ulonglong)lVar18 >> 0x20) + (int)lVar18 & local_140 - 1U)
                             * 4); iVar5 != -1; iVar5 = *(int *)(lVar9 + 8 + (longlong)iVar5 * 0x10)
            ) {
          if (*(longlong *)(lVar9 + (longlong)iVar5 * 0x10) == lVar18) {
            if (iVar5 != -1) goto LAB_1406526b8;
            break;
          }
        }
        lVar18 = *plVar21;
        for (iVar5 = *(int *)((local_148 | (ulonglong)puVar19) +
                             (longlong)
                             (int)((int)((ulonglong)lVar18 >> 0x20) + (int)lVar18 & local_140 - 1U)
                             * 4); iVar5 != -1; iVar5 = *(int *)(lVar9 + 8 + (longlong)iVar5 * 0x10)
            ) {
          if (*(longlong *)(lVar9 + (longlong)iVar5 * 0x10) == lVar18) {
            if (iVar5 != -1) goto LAB_1406526b8;
            break;
          }
        }
        goto LAB_14065279f;
      }
    }
LAB_1406527b8:
    FUN_1404be960(&local_1f0);
    FARFilter::~FARFilter(&local_138);
  }
  if (0 < (int)local_180 - local_154) {
    iVar5 = (int)local_160;
    puStack_1a0 = local_178;
    local_1e0._0_4_ = 0;
    local_1f0 = (longlong *)0x0;
    local_1e8 = 0;
    local_1e0._4_4_ = 1;
    local_1d0._4_4_ = 0;
    uStack_1c8 = 0;
    if ((int)local_160 != 0) {
      puVar20 = local_178;
      if (local_168 != (uint *)0x0) {
        puVar20 = local_168;
      }
      uVar2 = *puVar20;
      puVar19 = puVar14;
      while (uVar2 == 0) {
        iVar6 = (int)puVar14;
        uStack_1c8 = (int)puVar19 + 0x20;
        puVar19 = (undefined1 *)(ulonglong)uStack_1c8;
        local_1e0._0_4_ = iVar6 + 1;
        puVar14 = (undefined1 *)(ulonglong)(uint)local_1e0;
        if ((int)((int)local_160 + -1 + ((int)local_160 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) {
          local_1d0._4_4_ = (int)local_160;
          goto LAB_1406528ad;
        }
        uVar2 = puVar20[(longlong)iVar6 + 1];
      }
      local_1e0._4_4_ = -uVar2 & uVar2;
      iVar6 = 0x1f;
      if (local_1e0._4_4_ != 0) {
        for (; local_1e0._4_4_ >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (local_1e0._4_4_ == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      local_1d0._4_4_ = (uStack_1c8 - iVar6) + 0x1f;
      if ((int)local_160 < local_1d0._4_4_) {
        local_1d0._4_4_ = (int)local_160;
      }
    }
LAB_1406528ad:
    uStack_1a8 = CONCAT44(local_1e0._4_4_,(uint)local_1e0);
    local_1b0 = &local_188;
    uStack_198 = CONCAT44(local_1d0._4_4_,0xffffffff);
    local_1c0 = CONCAT44(iStack_1c4,uStack_1c8);
    uStack_1d8 = CONCAT44(local_1e0._4_4_,(uint)local_1e0);
    uStack_1c8 = 0xffffffff;
    iStack_1c4 = local_1d0._4_4_;
    uStack_190 = local_1c0;
    local_1e0 = local_1b0;
    local_1d0 = puStack_1a0;
    while( true ) {
      if ((iStack_1c4 == iVar5) && (local_1d0 == local_178)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((bVar3) && (local_1e0 == &local_188)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) break;
      local_1f8 = *(undefined8 *)(*local_1e0 + (longlong)iStack_1c4 * 0x10);
      FName::ToString(&local_1f8,&local_1f0);
      plVar10 = local_1f0;
      iVar6 = 0;
      if ((int)local_1e8 != 0) {
        iVar6 = (int)local_1e8 + -1;
      }
      if (iVar6 != 0) {
        iVar13 = (int)param_3[1];
        iVar7 = (uint)(iVar13 == 0) + iVar6 + iVar13;
        *(int *)(param_3 + 1) = iVar7;
        if (*(int *)((longlong)param_3 + 0xc) < iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar13);
        }
        _Dst = (void *)(*param_3 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,plVar10,(longlong)iVar6 * 2);
        *(undefined2 *)((longlong)_Dst + (longlong)iVar6 * 2) = 0;
      }
      iVar6 = (int)param_3[1];
      iVar13 = (2 - (uint)(iVar6 != 0)) + iVar6;
      *(int *)(param_3 + 1) = iVar13;
      if (*(int *)((longlong)param_3 + 0xc) < iVar13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar6);
      }
      puVar15 = (undefined2 *)(*param_3 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)) * 2);
      *puVar15 = 0x2c;
      puVar15[1] = 0;
      uStack_1c8 = uStack_1c8 & ~uStack_1d8._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1d8);
    }
    if (local_1f0 != (longlong *)0x0) {
      FMemory::Free(local_1f0);
    }
  }
  local_140 = 0;
  if (local_148 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_188);
  return;
LAB_1406526b8:
  lVar18 = FUN_14064fc70(plVar21 + -1);
  lVar9 = local_188;
  if (lVar18 != 0) {
    lVar9 = FUN_14171bfe0();
    lVar16 = *(longlong *)(lVar18 + 0x10);
    if ((*(int *)(lVar16 + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar16 + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar16 = lVar18;
    }
    lVar9 = local_188;
    if (lVar16 != 0) {
      lVar9 = FUN_14171bfe0();
      if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      lVar9 = local_188;
      if (bVar3) {
        lVar12 = FUN_1428dfc70();
        lVar18 = lVar16;
        do {
          if (lVar18 == lVar12) {
            iVar5 = (int)param_2[1];
            *(int *)(param_2 + 1) = iVar5 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar5 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
            }
            *(longlong *)(*param_2 + (longlong)iVar5 * 8) = lVar16;
            TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove(&local_188,plVar21[2])
            ;
            TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove(&local_188,*plVar21);
            lVar9 = local_188;
            break;
          }
          lVar18 = *(longlong *)(lVar18 + 0x30);
          lVar9 = local_188;
        } while (lVar18 != 0);
      }
    }
  }
LAB_14065279f:
  plVar1 = plVar21 + 10;
  plVar21 = plVar21 + 0xb;
  if (plVar1 == plVar10) goto LAB_1406527b8;
  goto LAB_140652610;
}



// FUNCTION 140652a90 FUN_140652a90 body=213 status=ok
// SIG undefined FUN_140652a90(void)

undefined8 FUN_140652a90(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xa8);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000140652ac9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(*plVar3 + 0x298))(plVar3);
    return uVar4;
  }
  plVar3 = (longlong *)FUN_140651210(param_1 + 0xb8);
  if (plVar3 != (longlong *)0x0) {
    plVar6 = (longlong *)plVar3[0x1f];
    if (plVar6 == (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      plVar6 = (longlong *)plVar3[0x1f];
      if (plVar6 == (longlong *)0x0) {
        return 0x2000001;
      }
    }
    lVar5 = FUN_14066fd50();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x000140652b4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar6 + 0x298))(plVar6);
      return uVar4;
    }
  }
  return 0x2000001;
}



// FUNCTION 140652b90 FUN_140652b90 body=1017 status=ok
// SIG undefined FUN_140652b90(void)

undefined8 FUN_140652b90(longlong param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  uint7 uVar8;
  undefined8 *puVar4;
  undefined7 uVar9;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined7 extraout_var;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  bVar2 = false;
  iVar1 = *param_2;
  puVar7 = (undefined8 *)0x0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  puVar11 = puVar7;
  if (param_1 == 0) {
LAB_140652bf7:
    *param_2 = -1;
    puVar4 = puVar7;
  }
  else {
    if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x48))) {
      bVar2 = true;
    }
    if ((!bVar2) ||
       (puVar11 = *(undefined8 **)(*(longlong *)(param_1 + 0x40) + (longlong)iVar1 * 8),
       puVar11 == (undefined8 *)0x0)) goto LAB_140652bf7;
    *param_2 = iVar1;
    puVar4 = (undefined8 *)puVar11[5];
  }
  *(undefined8 **)(param_2 + 2) = puVar4;
  puVar10 = puVar7;
  if (param_1 != 0) {
    uVar8 = (uint7)((ulonglong)puVar4 >> 8);
    if ((iVar1 < 0) || (*(int *)(param_1 + 0x48) <= iVar1)) {
      puVar4 = (undefined8 *)((ulonglong)uVar8 << 8);
    }
    else {
      puVar4 = (undefined8 *)CONCAT71(uVar8,1);
    }
    if ((((char)puVar4 != '\0') &&
        (puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x40) + (longlong)iVar1 * 8),
        puVar4 != (undefined8 *)0x0)) && (0 < *(int *)(puVar4 + 9))) {
      puVar4 = (undefined8 *)puVar4[8];
      puVar10 = (undefined8 *)*puVar4;
    }
  }
  uVar9 = (undefined7)((ulonglong)puVar4 >> 8);
  *(bool *)(param_2 + 8) = puVar10 != (undefined8 *)0x0;
  if (puVar10 == (undefined8 *)0x0) goto LAB_140652f6d;
  param_2[4] = (uint)(puVar10[6] != 0) + (uint)(puVar10[10] != 0) + *(int *)(puVar10 + 8);
  puVar4 = (undefined8 *)puVar10[9];
  if (puVar4 == (undefined8 *)0x0) {
LAB_140652cb5:
    puVar4 = puVar7;
  }
  else {
    lVar5 = FUN_1429cec90();
    if ((*(int *)(puVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(puVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140652cb5;
  }
  *(bool *)((longlong)param_2 + 0x21) = puVar4 != (undefined8 *)0x0;
  puVar4 = (undefined8 *)puVar10[9];
  if (puVar4 == (undefined8 *)0x0) {
LAB_140652d00:
    puVar4 = puVar7;
  }
  else {
    lVar5 = UParticleModuleTypeDataGpu::GetPrivateStaticClass();
    if ((*(int *)(puVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(puVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140652d00;
  }
  *(bool *)((longlong)param_2 + 0x22) = puVar4 != (undefined8 *)0x0;
  puVar4 = (undefined8 *)puVar10[9];
  if (puVar4 == (undefined8 *)0x0) {
LAB_140652d4b:
    puVar4 = puVar7;
  }
  else {
    lVar5 = UTextureRenderTargetCube::GetPrivateStaticClass();
    if ((*(int *)(puVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(puVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140652d4b;
  }
  *(bool *)((longlong)param_2 + 0x23) = puVar4 != (undefined8 *)0x0;
  lVar5 = puVar10[9];
  if (lVar5 == 0) {
LAB_140652d96:
    lVar5 = puVar10[9];
    if (lVar5 != 0) {
      lVar6 = FUN_1429d0ee0();
      lVar5 = *(longlong *)(lVar5 + 0x10);
      if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_140652dd5;
    }
    uVar3 = 0;
  }
  else {
    lVar6 = UMovieSceneIntegerSection::GetPrivateStaticClass();
    lVar5 = *(longlong *)(lVar5 + 0x10);
    if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140652d96;
LAB_140652dd5:
    uVar3 = 1;
  }
  *(undefined1 *)(param_2 + 9) = uVar3;
  param_2[5] = -0x80000000;
  local_38 = 0;
  local_28 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = param_2;
    *puVar7 = &PTR_FUN_143f77b70;
  }
  local_68[0] = &LAB_140642730;
  FUN_140636110(puVar11,local_68);
  param_2[6] = 0x4f000000;
  local_38 = 0;
  local_28 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = param_2;
    *puVar7 = &PTR_FUN_143f77b70;
  }
  local_68[0] = &LAB_140642710;
  FUN_1406362d0(puVar11,local_68);
  param_2[7] = 0x800000;
  local_38 = 0;
  local_28 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_FUN_143f77b70;
    puVar7[1] = param_2;
  }
  local_68[0] = &LAB_1406426d0;
  FUN_1406358d0(puVar11,local_68);
  local_38 = 0;
  local_28 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_FUN_143f77b70;
    puVar7[1] = param_2;
  }
  local_68[0] = &LAB_1406426d0;
  FUN_140635ae0(puVar11,local_68);
  local_38 = 0;
  local_28 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_FUN_143f77b70;
    puVar7[1] = param_2;
  }
  local_68[0] = &LAB_1406426e0;
  FUN_140635cf0(puVar11,local_68);
  local_38 = 0;
  local_28 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_58);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_FUN_143f77b70;
    puVar7[1] = param_2;
  }
  local_68[0] = &LAB_1406426e0;
  FUN_140635f00(puVar11,local_68);
  uVar9 = extraout_var;
LAB_140652f6d:
  return CONCAT71(uVar9,*param_2 != -1);
}



// FUNCTION 140652f90 FUN_140652f90 body=757 status=ok
// SIG undefined FUN_140652f90(void)

ulonglong FUN_140652f90(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined1 local_res8 [8];
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  int local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  uint local_38;
  undefined4 uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  _guard_xfg_dispatch_icall_nop(param_2,0,0x60);
  puVar5 = (undefined8 *)FName::FName(local_res8,"GbxTest",1);
  plVar6 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar5);
  iVar9 = 0;
  uVar7 = 0;
  if (plVar6 != (longlong *)0x0) {
    local_68 = (longlong *)0x0;
    local_60 = 0;
    (**(code **)(*plVar6 + 0x90))(plVar6,param_1,&local_68);
    uVar7 = (ulonglong)(int)local_60;
    plVar6 = local_68 + uVar7;
    for (plVar10 = local_68; plVar10 != plVar6; plVar10 = plVar10 + 1) {
      lVar11 = *plVar10;
      if (lVar11 != 0) {
        lVar8 = FUN_140665440();
        iVar4 = *(int *)(lVar8 + 0x90);
        uVar7 = (longlong)iVar4;
        if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < iVar4) ||
           (uVar7 = *(ulonglong *)(*(longlong *)(lVar11 + 0x10) + 0x88),
           *(longlong *)(uVar7 + (longlong)iVar4 * 8) != lVar8 + 0x88)) {
          uVar7 = uVar7 & 0xffffffffffffff00;
        }
        else {
          uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
        }
        if ((char)uVar7 != '\0') {
          iVar4 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar4 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
          }
          uVar7 = *param_2;
          *(longlong *)(uVar7 + (longlong)iVar4 * 8) = lVar11;
        }
      }
    }
    if (local_68 != (longlong *)0x0) {
      uVar7 = FMemory::Free(local_68);
    }
  }
  if (param_1 == 0) {
    uVar7 = uVar7 & 0xffffffffffffff00;
  }
  else {
    *(undefined4 *)((longlong)param_2 + 0x24) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)((longlong)param_2 + 0x2c) = *(undefined4 *)(param_1 + 100);
    bVar2 = *(byte *)(param_1 + 0x98) & 1;
    *(byte *)((longlong)param_2 + 0x54) = bVar2;
    if (bVar2 == 0) {
      fVar12 = 0.0;
    }
    else {
      fVar12 = *(float *)(param_1 + 0xac) - *(float *)(param_1 + 0xa0);
      fVar15 = *(float *)(param_1 + 0xa8) - *(float *)(param_1 + 0x9c);
      fVar14 = *(float *)(param_1 + 0xb0) - *(float *)(param_1 + 0xa4);
      fVar12 = SQRT((fVar15 * fVar15 + fVar12 * fVar12 + fVar14 * fVar14) * 0.25);
    }
    *(float *)(param_2 + 4) = fVar12;
    *(undefined4 *)((longlong)param_2 + 0x34) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x78);
    *(byte *)((longlong)param_2 + 0x55) = *(byte *)(param_1 + 0x60) & 1;
    uVar13 = FUN_140651e80(param_1);
    *(undefined4 *)(param_2 + 6) = uVar13;
    uVar7 = 0x7fffffff;
    *(undefined2 *)((longlong)param_2 + 0x56) = 0x101;
    *(undefined4 *)(param_2 + 7) = 0x7fffffff;
    *(undefined4 *)((longlong)param_2 + 0x3c) = 0x80000000;
    if (0 < *(int *)((longlong)param_2 + 0x34)) {
      do {
        uStack_50 = 0;
        local_58 = iVar9;
        FUN_140652b90(param_1,&local_58);
        *(int *)((longlong)param_2 + 0x44) =
             *(int *)((longlong)param_2 + 0x44) + (local_38 >> 8 & 0xff);
        *(uint *)(param_2 + 9) = (int)param_2[9] + (local_38 >> 0x10 & 0xff);
        *(int *)((longlong)param_2 + 0x4c) = *(int *)((longlong)param_2 + 0x4c) + (local_38 >> 0x18)
        ;
        *(uint *)(param_2 + 10) = (int)param_2[10] + (uStack_34 & 0xff);
        iVar4 = local_48;
        if ((int)param_2[7] <= local_48) {
          iVar4 = (int)param_2[7];
        }
        *(int *)(param_2 + 7) = iVar4;
        iVar4 = local_48;
        if (local_48 <= *(int *)((longlong)param_2 + 0x3c)) {
          iVar4 = *(int *)((longlong)param_2 + 0x3c);
        }
        *(int *)((longlong)param_2 + 0x3c) = iVar4;
        if ((*(char *)((longlong)param_2 + 0x57) == '\0') || ((char)local_38 == '\0')) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
        *(undefined1 *)((longlong)param_2 + 0x57) = uVar3;
        if ((*(char *)((longlong)param_2 + 0x56) == '\0') || (uStack_34._1_1_ == '\0')) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
        *(undefined1 *)((longlong)param_2 + 0x56) = uVar3;
        iVar4 = (int)param_2[3];
        lVar11 = (longlong)iVar4;
        *(int *)(param_2 + 3) = iVar4 + 1;
        if (*(int *)((longlong)param_2 + 0x1c) < iVar4 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2 + 2,iVar4);
        }
        uVar7 = param_2[2];
        iVar9 = iVar9 + 1;
        puVar5 = (undefined8 *)(uVar7 + lVar11 * 0x30);
        *puVar5 = CONCAT44(uStack_54,local_58);
        puVar5[1] = uStack_50;
        puVar5 = (undefined8 *)(uVar7 + 0x10 + lVar11 * 0x30);
        *puVar5 = CONCAT44(uStack_44,local_48);
        puVar5[1] = uStack_40;
        puVar1 = (uint *)(uVar7 + 0x20 + lVar11 * 0x30);
        *puVar1 = local_38;
        puVar1[1] = uStack_34;
        puVar1[2] = uStack_30;
        puVar1[3] = uStack_2c;
      } while (iVar9 < *(int *)((longlong)param_2 + 0x34));
      uVar7 = (ulonglong)(uint)param_2[7];
    }
    if ((int)uVar7 == 0x7fffffff) {
      *(undefined4 *)(param_2 + 7) = 0x80000000;
    }
    if (*(int *)((longlong)param_2 + 0x3c) == -0x80000000) {
      *(undefined4 *)((longlong)param_2 + 0x3c) = 0x7fffffff;
    }
    uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
  }
  return uVar7;
}



// FUNCTION 140653290 FUN_140653290 body=470 status=ok
// SIG undefined FUN_140653290(void)

undefined8 FUN_140653290(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  longlong *local_28;
  undefined8 local_20;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FName::FName(local_res8,"GbxTest",1);
  plVar5 = (longlong *)FModuleManager::GetModulePtr_Internal();
  if (plVar5 != (longlong *)0x0) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    (**(code **)(*plVar5 + 0x90))(plVar5,param_1,&local_28);
    plVar5 = local_28 + (int)local_20;
    for (plVar7 = local_28; plVar7 != plVar5; plVar7 = plVar7 + 1) {
      lVar2 = *plVar7;
      if (lVar2 != 0) {
        lVar6 = FUN_140665290();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          iVar1 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
          }
          *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
        }
      }
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  if (param_1 != 0) {
    uVar4 = FUN_14256ec20(param_1,0);
    *(undefined1 *)(param_2 + 2) = uVar4;
    uVar4 = FUN_14256ec20(param_1,1);
    *(undefined1 *)((longlong)param_2 + 0x11) = uVar4;
    uVar4 = FUN_14256ec20(param_1,2);
    *(undefined1 *)((longlong)param_2 + 0x12) = uVar4;
    uVar4 = FUN_14256ec20(param_1,3);
    *(undefined1 *)((longlong)param_2 + 0x13) = uVar4;
    uVar4 = FUN_14256ec20(param_1,4);
    *(undefined1 *)((longlong)param_2 + 0x14) = uVar4;
    uVar4 = FUN_14256ec20(param_1,5);
    *(undefined1 *)((longlong)param_2 + 0x15) = uVar4;
    uVar4 = FUN_14256ec20(param_1,6);
    *(undefined1 *)((longlong)param_2 + 0x16) = uVar4;
    uVar4 = FUN_14256ec20(param_1,7);
    *(undefined1 *)((longlong)param_2 + 0x17) = uVar4;
    uVar4 = FUN_14256ec20(param_1,8);
    *(undefined1 *)(param_2 + 3) = uVar4;
    *(bool *)((longlong)param_2 + 0x19) = *(longlong *)(param_1 + 0x88) != 0;
    return 1;
  }
  return 0;
}



// FUNCTION 140653470 FUN_140653470 body=105 status=ok
// SIG undefined FUN_140653470(void)

bool FUN_140653470(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_28 [32];
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  if (param_1 != 0) {
    puVar5 = (undefined4 *)USkeletalMesh::GetBounds(param_1,local_28);
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *(undefined4 *)param_2 = *puVar5;
    *(undefined4 *)((longlong)param_2 + 4) = uVar1;
    *(undefined4 *)(param_2 + 1) = uVar2;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
    param_2[2] = *(undefined8 *)(puVar5 + 4);
    *(undefined4 *)(param_2 + 3) = puVar5[6];
    iVar4 = FUN_14277f670(param_1);
    *(int *)((longlong)param_2 + 0x1c) = iVar4;
    *(bool *)(param_2 + 4) = 0 < iVar4;
  }
  return param_1 != 0;
}



// FUNCTION 1406534e0 FUN_1406534e0 body=307 status=ok
// SIG undefined FUN_1406534e0(void)

ulonglong FUN_1406534e0(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  iVar1 = *param_2;
  plVar3 = (longlong *)0x0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  if ((((param_1 == 0) || (plVar3 = *(longlong **)(param_1 + 0x40), plVar3 == (longlong *)0x0)) ||
      (iVar1 < 0)) || ((int)plVar3[1] <= iVar1)) {
    *param_2 = -1;
    return (ulonglong)plVar3 & 0xffffffffffffff00;
  }
  plVar3 = *(longlong **)(*plVar3 + (longlong)iVar1 * 8);
  iVar2 = FUN_1427dcd10();
  param_2[1] = iVar2;
  param_2[2] = *(int *)((longlong)plVar3 + 0x16c);
  param_2[3] = (int)plVar3[0x21];
  param_2[4] = (int)plVar3[1];
  iVar2 = (int)plVar3[1];
  piVar4 = (int *)(longlong)iVar2;
  if (0 < iVar2) {
    lVar6 = 0;
    piVar4 = (int *)(*plVar3 + 8);
    do {
      if (*piVar4 == 0) {
        uVar5 = CONCAT71((int7)((ulonglong)piVar4 >> 8),1);
        goto LAB_140653595;
      }
      lVar6 = lVar6 + 1;
      piVar4 = piVar4 + 0x42;
    } while (lVar6 < iVar2);
  }
  uVar5 = (ulonglong)piVar4 & 0xffffffffffffff00;
LAB_140653595:
  *(char *)(param_2 + 6) = (char)uVar5;
  if (iVar1 < *(int *)(param_1 + 0xd0)) {
    lVar6 = *(longlong *)(param_1 + 200);
    param_2[5] = *(int *)(lVar6 + (longlong)iVar1 * 0x30);
    *param_2 = iVar1;
    return CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
  }
  param_2[5] = 0;
  *param_2 = iVar1;
  return CONCAT71((int7)(uVar5 >> 8),1);
}



// FUNCTION 140653620 FUN_140653620 body=300 status=ok
// SIG undefined FUN_140653620(void)

undefined8 FUN_140653620(longlong param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  int local_28;
  undefined8 local_24;
  undefined8 uStack_1c;
  float local_14;
  undefined1 local_10;
  
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  if ((param_1 != 0) && (uVar3 = *(ulonglong *)(param_1 + 0x40), uVar3 != 0)) {
    iVar1 = *(int *)(uVar3 + 8);
    *param_2 = iVar1;
    if (0 < iVar1) {
      iVar5 = 0;
      param_2[3] = 0x7fffffff;
      param_2[5] = 0x7fffffff;
      param_2[7] = 0x7f7fffff;
      do {
        local_10 = 1;
        local_24 = 0;
        uStack_1c = 0;
        local_28 = iVar5;
        FUN_1406534e0(param_1,&local_28);
        iVar4 = (int)local_24;
        if ((int)local_24 <= param_2[1]) {
          iVar4 = param_2[1];
        }
        param_2[1] = iVar4;
        fVar6 = (float)param_2[7];
        if (local_14 <= (float)param_2[7]) {
          fVar6 = local_14;
        }
        fVar7 = local_14;
        if (local_14 <= (float)param_2[8]) {
          fVar7 = (float)param_2[8];
        }
        if (local_24._4_4_ <= param_2[2]) {
          local_24._4_4_ = param_2[2];
        }
        param_2[7] = (int)fVar6;
        iVar4 = (int)uStack_1c;
        if (param_2[3] <= (int)uStack_1c) {
          iVar4 = param_2[3];
        }
        param_2[3] = iVar4;
        iVar4 = (int)uStack_1c;
        if ((int)uStack_1c <= param_2[4]) {
          iVar4 = param_2[4];
        }
        param_2[4] = iVar4;
        param_2[8] = (int)fVar7;
        uVar2 = uStack_1c._4_4_;
        if (param_2[5] <= (int)uStack_1c._4_4_) {
          uVar2 = param_2[5];
        }
        param_2[5] = uVar2;
        uVar2 = param_2[6];
        uVar3 = (ulonglong)uVar2;
        param_2[2] = local_24._4_4_;
        if ((int)uStack_1c._4_4_ <= (int)uVar2) {
          uStack_1c._4_4_ = uVar2;
        }
        iVar5 = iVar5 + 1;
        param_2[6] = uStack_1c._4_4_;
      } while (iVar5 < iVar1);
    }
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return 0;
}



// FUNCTION 140653750 FUN_140653750 body=315 status=ok
// SIG undefined FUN_140653750(void)

undefined8 FUN_140653750(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  longlong *local_28;
  undefined8 local_20;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FName::FName(local_res8,"GbxTest",1);
  plVar4 = (longlong *)FModuleManager::GetModulePtr_Internal();
  if (plVar4 != (longlong *)0x0) {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    (**(code **)(*plVar4 + 0x90))(plVar4,param_1,&local_28);
    plVar4 = local_28 + (int)local_20;
    for (plVar6 = local_28; plVar6 != plVar4; plVar6 = plVar6 + 1) {
      lVar2 = *plVar6;
      if (lVar2 != 0) {
        lVar5 = FUN_140665500();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          iVar1 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
          }
          *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
        }
      }
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  if (param_1 != 0) {
    *(undefined1 *)(param_2 + 2) = 1;
    return 1;
  }
  return 0;
}



// FUNCTION 140653890 FUN_140653890 body=103 status=ok
// SIG undefined FUN_140653890(void)

undefined8 FUN_140653890(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_28 [32];
  
  uVar3 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  if (param_1 != 0) {
    puVar2 = (undefined8 *)UStaticMesh::GetBounds(param_1,local_28);
    uVar3 = puVar2[1];
    *param_2 = *puVar2;
    param_2[1] = uVar3;
    param_2[2] = puVar2[2];
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(puVar2 + 3);
    iVar1 = *(int *)(param_1 + 0xf0);
    *(int *)((longlong)param_2 + 0x1c) = iVar1;
    *(bool *)(param_2 + 4) = 0 < iVar1;
    uVar3 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  return uVar3;
}



// FUNCTION 140653900 FUN_140653900 body=240 status=ok
// SIG undefined FUN_140653900(void)

undefined8 FUN_140653900(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  iVar1 = *param_2;
  param_2[0] = 0;
  param_2[1] = 0;
  plVar6 = (longlong *)0x0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  plVar7 = plVar6;
  if (param_1 != 0) {
    plVar7 = *(longlong **)(param_1 + 0x38);
  }
  if (((plVar7 == (longlong *)0x0) || (iVar1 < 0)) || ((int)plVar7[1] <= iVar1)) {
    *param_2 = -1;
    return 0;
  }
  lVar2 = *(longlong *)(*plVar7 + (longlong)iVar1 * 8);
  iVar4 = FUN_14281e810(lVar2);
  param_2[1] = iVar4;
  iVar4 = FStaticMeshLODResources::GetNumVertices(lVar2);
  param_2[2] = iVar4;
  iVar4 = FUN_14281e800(lVar2);
  param_2[3] = iVar4;
  param_2[4] = *(int *)(lVar2 + 0x480);
  if (0 < *(int *)(lVar2 + 0x480)) {
    piVar5 = (int *)(*(longlong *)(lVar2 + 0x478) + 8);
    do {
      if (*piVar5 == 0) {
        uVar3 = 1;
        goto LAB_1406539b4;
      }
      plVar6 = (longlong *)((longlong)plVar6 + 1);
      piVar5 = piVar5 + 6;
    } while ((longlong)plVar6 < (longlong)*(int *)(lVar2 + 0x480));
  }
  uVar3 = 0;
LAB_1406539b4:
  *(undefined1 *)(param_2 + 6) = uVar3;
  iVar4 = *(int *)((longlong)plVar7 + (longlong)iVar1 * 4 + 0x20);
  param_2[5] = iVar4;
  *param_2 = iVar1;
  return CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1);
}



// FUNCTION 1406539f0 FUN_1406539f0 body=291 status=ok
// SIG undefined FUN_1406539f0(void)

undefined8 FUN_1406539f0(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int local_28;
  undefined8 local_24;
  undefined8 uStack_1c;
  float local_14;
  undefined1 local_10;
  
  uVar3 = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  if (param_1 != 0) {
    iVar2 = UStaticMesh::GetNumLODs();
    *param_2 = iVar2;
    if (0 < iVar2) {
      param_2[3] = 0x7fffffff;
      param_2[5] = 0x7fffffff;
      param_2[7] = 0x7f7fffff;
      if ((*(longlong *)(param_1 + 0x38) != 0) && (iVar5 = 0, 0 < iVar2)) {
        do {
          local_10 = 1;
          local_24 = 0;
          uStack_1c = 0;
          local_28 = iVar5;
          FUN_140653900(param_1,&local_28);
          fVar6 = (float)param_2[7];
          if (local_14 <= (float)param_2[7]) {
            fVar6 = local_14;
          }
          iVar4 = (int)local_24;
          if ((int)local_24 <= param_2[1]) {
            iVar4 = param_2[1];
          }
          param_2[1] = iVar4;
          param_2[7] = (int)fVar6;
          if (local_24._4_4_ <= param_2[2]) {
            local_24._4_4_ = param_2[2];
          }
          iVar4 = (int)uStack_1c;
          if (param_2[3] <= (int)uStack_1c) {
            iVar4 = param_2[3];
          }
          fVar6 = (float)param_2[8];
          if ((float)param_2[8] <= local_14) {
            fVar6 = local_14;
          }
          iVar1 = (int)uStack_1c;
          if ((int)uStack_1c <= param_2[4]) {
            iVar1 = param_2[4];
          }
          param_2[3] = iVar4;
          param_2[4] = iVar1;
          param_2[8] = (int)fVar6;
          iVar4 = uStack_1c._4_4_;
          if (param_2[5] <= uStack_1c._4_4_) {
            iVar4 = param_2[5];
          }
          param_2[5] = iVar4;
          param_2[2] = local_24._4_4_;
          if (uStack_1c._4_4_ <= param_2[6]) {
            uStack_1c._4_4_ = param_2[6];
          }
          iVar5 = iVar5 + 1;
          param_2[6] = uStack_1c._4_4_;
        } while (iVar5 < iVar2);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 140653b20 FUN_140653b20 body=503 status=ok
// SIG undefined FUN_140653b20(void)

/* WARNING: Removing unreachable block (ram,0x000140653bb1) */
/* WARNING: Removing unreachable block (ram,0x000140653bc0) */
/* WARNING: Removing unreachable block (ram,0x000140653bc8) */
/* WARNING: Removing unreachable block (ram,0x000140653be4) */
/* WARNING: Removing unreachable block (ram,0x000140653bf8) */
/* WARNING: Removing unreachable block (ram,0x000140653bf4) */
/* WARNING: Removing unreachable block (ram,0x000140653bfa) */
/* WARNING: Removing unreachable block (ram,0x000140653bfe) */
/* WARNING: Removing unreachable block (ram,0x000140653c0d) */
/* WARNING: Removing unreachable block (ram,0x000140653c17) */
/* WARNING: Removing unreachable block (ram,0x000140653c1e) */
/* WARNING: Removing unreachable block (ram,0x000140653c27) */
/* WARNING: Removing unreachable block (ram,0x000140653c40) */

undefined8 FUN_140653b20(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  char cVar6;
  char cVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  puVar4 = (undefined8 *)FName::FName(local_res8,"GbxTest");
  plVar5 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar4);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x90))(plVar5,param_1);
  }
  if (param_1 == 0) {
    return 0;
  }
  lVar10 = *(longlong *)(param_1 + 0xa0);
  if (lVar10 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(lVar10 + 0x50) + *(int *)(lVar10 + 0x60) + *(int *)(lVar10 + 0x70) +
            *(int *)(lVar10 + 0x40) + *(int *)(lVar10 + 0x30);
  }
  *(int *)(param_2 + 2) = iVar3;
  *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x90);
  iVar3 = UStaticMesh::GetNumLODs(param_1);
  if (0 < iVar3) {
    lVar10 = 0;
    if (0 < iVar3) {
      do {
        iVar9 = 0;
        lVar1 = *(longlong *)(**(longlong **)(param_1 + 0x38) + lVar10 * 8);
        if (0 < *(int *)(lVar1 + 0x480)) {
          cVar7 = *(char *)(param_2 + 5);
          lVar8 = 0;
          cVar6 = *(char *)((longlong)param_2 + 0x29);
          do {
            lVar2 = *(longlong *)(lVar1 + 0x478);
            if ((cVar7 != '\0') || (*(char *)(lVar8 + 0x15 + lVar2) != '\0')) {
              cVar7 = '\x01';
            }
            *(char *)(param_2 + 5) = cVar7;
            if ((cVar6 != '\0') || (*(char *)(lVar8 + 0x14 + lVar2) != '\0')) {
              cVar6 = '\x01';
            }
            iVar9 = iVar9 + 1;
            *(char *)((longlong)param_2 + 0x29) = cVar6;
            lVar8 = lVar8 + 0x18;
          } while (iVar9 < *(int *)(lVar1 + 0x480));
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar3);
    }
  }
  return 1;
}



// FUNCTION 140653d20 FUN_140653d20 body=578 status=ok
// SIG undefined FUN_140653d20(void)

ulonglong FUN_140653d20(longlong param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong local_res8;
  longlong *local_38;
  undefined8 local_30;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  puVar4 = (undefined8 *)FName::FName(&local_res8,"GbxTest",1);
  plVar5 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar4);
  uVar6 = 0;
  if (plVar5 != (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    local_30 = 0;
    (**(code **)(*plVar5 + 0x90))(plVar5,param_1,&local_38);
    uVar6 = (ulonglong)(int)local_30;
    plVar5 = local_38 + uVar6;
    for (plVar10 = local_38; plVar10 != plVar5; plVar10 = plVar10 + 1) {
      lVar9 = *plVar10;
      if (lVar9 != 0) {
        lVar7 = FUN_140665ad0();
        iVar1 = *(int *)(lVar7 + 0x90);
        uVar6 = (longlong)iVar1;
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < iVar1) ||
           (uVar6 = *(ulonglong *)(*(longlong *)(lVar9 + 0x10) + 0x88),
           *(longlong *)(uVar6 + (longlong)iVar1 * 8) != lVar7 + 0x88)) {
          uVar6 = uVar6 & 0xffffffffffffff00;
        }
        else {
          uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
        }
        if ((char)uVar6 != '\0') {
          iVar1 = (int)param_2[1];
          uVar6 = (ulonglong)iVar1;
          *(int *)(param_2 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
          }
          *(longlong *)(*param_2 + uVar6 * 8) = lVar9;
        }
      }
    }
    if (local_38 != (longlong *)0x0) {
      uVar6 = FMemory::Free(local_38);
    }
  }
  if (param_1 != 0) {
    uVar3 = *(undefined1 *)(param_1 + 0x48);
    uVar8 = UEnum::GetPrivateStaticClass();
    lVar9 = FUN_141799410(uVar8,0xffffffffffffffff,L"TextureCompressionSettings",1);
    if (lVar9 == 0) {
      local_res8 = 0;
    }
    else {
      UEnum::GetNameByValue(lVar9,&local_res8,uVar3);
    }
    param_2[2] = local_res8;
    uVar3 = *(undefined1 *)(param_1 + 0x4a);
    uVar8 = UEnum::GetPrivateStaticClass();
    lVar9 = FUN_141799410(uVar8,0xffffffffffffffff,L"TextureGroup",1);
    if (lVar9 == 0) {
      local_res8 = 0;
    }
    else {
      UEnum::GetNameByValue(lVar9,&local_res8,uVar3);
    }
    param_2[3] = local_res8;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x40);
    lVar9 = UTexture2D::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
         ) != lVar9 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar3 = FUN_1428545b0(param_1);
      *(undefined1 *)((longlong)param_2 + 0x24) = uVar3;
      *(byte *)((longlong)param_2 + 0x25) = *(byte *)(param_1 + 0x4b) & 1;
      return 1;
    }
    *(undefined1 *)((longlong)param_2 + 0x24) = 0;
    *(byte *)((longlong)param_2 + 0x25) = *(byte *)(param_1 + 0x4b) & 1;
    return 1;
  }
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 140653f70 thunk_FUN_140653290 body=5 status=ok
// SIG undefined thunk_FUN_140653290(void)

undefined8 thunk_FUN_140653290(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStackX_8 [8];
  longlong *plStack_28;
  undefined8 uStack_20;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FName::FName(auStackX_8,"GbxTest",1);
  plVar5 = (longlong *)FModuleManager::GetModulePtr_Internal();
  if (plVar5 != (longlong *)0x0) {
    plStack_28 = (longlong *)0x0;
    uStack_20 = 0;
    (**(code **)(*plVar5 + 0x90))(plVar5,param_1,&plStack_28);
    plVar5 = plStack_28 + (int)uStack_20;
    for (plVar7 = plStack_28; plVar7 != plVar5; plVar7 = plVar7 + 1) {
      lVar2 = *plVar7;
      if (lVar2 != 0) {
        lVar6 = FUN_140665290();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          iVar1 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
          }
          *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
        }
      }
    }
    if (plStack_28 != (longlong *)0x0) {
      FMemory::Free(plStack_28);
    }
  }
  if (param_1 != 0) {
    uVar4 = FUN_14256ec20(param_1,0);
    *(undefined1 *)(param_2 + 2) = uVar4;
    uVar4 = FUN_14256ec20(param_1,1);
    *(undefined1 *)((longlong)param_2 + 0x11) = uVar4;
    uVar4 = FUN_14256ec20(param_1,2);
    *(undefined1 *)((longlong)param_2 + 0x12) = uVar4;
    uVar4 = FUN_14256ec20(param_1,3);
    *(undefined1 *)((longlong)param_2 + 0x13) = uVar4;
    uVar4 = FUN_14256ec20(param_1,4);
    *(undefined1 *)((longlong)param_2 + 0x14) = uVar4;
    uVar4 = FUN_14256ec20(param_1,5);
    *(undefined1 *)((longlong)param_2 + 0x15) = uVar4;
    uVar4 = FUN_14256ec20(param_1,6);
    *(undefined1 *)((longlong)param_2 + 0x16) = uVar4;
    uVar4 = FUN_14256ec20(param_1,7);
    *(undefined1 *)((longlong)param_2 + 0x17) = uVar4;
    uVar4 = FUN_14256ec20(param_1,8);
    *(undefined1 *)(param_2 + 3) = uVar4;
    *(bool *)((longlong)param_2 + 0x19) = *(longlong *)(param_1 + 0x88) != 0;
    return 1;
  }
  return 0;
}



// FUNCTION 140653f80 FUN_140653f80 body=11 status=ok
// SIG undefined FUN_140653f80(void)

void FUN_140653f80(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = param_2;
  FUN_140652b90(param_1,param_3);
  return;
}



// FUNCTION 140653f90 thunk_FUN_140652f90 body=5 status=ok
// SIG undefined thunk_FUN_140652f90(void)

ulonglong thunk_FUN_140652f90(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined1 auStackX_8 [8];
  longlong *plStack_68;
  undefined8 uStack_60;
  int iStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  int iStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  uint uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  _guard_xfg_dispatch_icall_nop(param_2,0,0x60);
  puVar5 = (undefined8 *)FName::FName(auStackX_8,"GbxTest",1);
  plVar6 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar5);
  iVar9 = 0;
  uVar7 = 0;
  if (plVar6 != (longlong *)0x0) {
    plStack_68 = (longlong *)0x0;
    uStack_60 = 0;
    (**(code **)(*plVar6 + 0x90))(plVar6,param_1,&plStack_68);
    uVar7 = (ulonglong)(int)uStack_60;
    plVar6 = plStack_68 + uVar7;
    for (plVar10 = plStack_68; plVar10 != plVar6; plVar10 = plVar10 + 1) {
      lVar11 = *plVar10;
      if (lVar11 != 0) {
        lVar8 = FUN_140665440();
        iVar4 = *(int *)(lVar8 + 0x90);
        uVar7 = (longlong)iVar4;
        if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < iVar4) ||
           (uVar7 = *(ulonglong *)(*(longlong *)(lVar11 + 0x10) + 0x88),
           *(longlong *)(uVar7 + (longlong)iVar4 * 8) != lVar8 + 0x88)) {
          uVar7 = uVar7 & 0xffffffffffffff00;
        }
        else {
          uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
        }
        if ((char)uVar7 != '\0') {
          iVar4 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar4 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
          }
          uVar7 = *param_2;
          *(longlong *)(uVar7 + (longlong)iVar4 * 8) = lVar11;
        }
      }
    }
    if (plStack_68 != (longlong *)0x0) {
      uVar7 = FMemory::Free(plStack_68);
    }
  }
  if (param_1 == 0) {
    uVar7 = uVar7 & 0xffffffffffffff00;
  }
  else {
    *(undefined4 *)((longlong)param_2 + 0x24) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)((longlong)param_2 + 0x2c) = *(undefined4 *)(param_1 + 100);
    bVar2 = *(byte *)(param_1 + 0x98) & 1;
    *(byte *)((longlong)param_2 + 0x54) = bVar2;
    if (bVar2 == 0) {
      fVar12 = 0.0;
    }
    else {
      fVar12 = *(float *)(param_1 + 0xac) - *(float *)(param_1 + 0xa0);
      fVar15 = *(float *)(param_1 + 0xa8) - *(float *)(param_1 + 0x9c);
      fVar14 = *(float *)(param_1 + 0xb0) - *(float *)(param_1 + 0xa4);
      fVar12 = SQRT((fVar15 * fVar15 + fVar12 * fVar12 + fVar14 * fVar14) * 0.25);
    }
    *(float *)(param_2 + 4) = fVar12;
    *(undefined4 *)((longlong)param_2 + 0x34) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x78);
    *(byte *)((longlong)param_2 + 0x55) = *(byte *)(param_1 + 0x60) & 1;
    uVar13 = FUN_140651e80(param_1);
    *(undefined4 *)(param_2 + 6) = uVar13;
    uVar7 = 0x7fffffff;
    *(undefined2 *)((longlong)param_2 + 0x56) = 0x101;
    *(undefined4 *)(param_2 + 7) = 0x7fffffff;
    *(undefined4 *)((longlong)param_2 + 0x3c) = 0x80000000;
    if (0 < *(int *)((longlong)param_2 + 0x34)) {
      do {
        uStack_50 = 0;
        iStack_58 = iVar9;
        FUN_140652b90(param_1,&iStack_58);
        *(int *)((longlong)param_2 + 0x44) =
             *(int *)((longlong)param_2 + 0x44) + (uStack_38 >> 8 & 0xff);
        *(uint *)(param_2 + 9) = (int)param_2[9] + (uStack_38 >> 0x10 & 0xff);
        *(int *)((longlong)param_2 + 0x4c) =
             *(int *)((longlong)param_2 + 0x4c) + (uStack_38 >> 0x18);
        *(uint *)(param_2 + 10) = (int)param_2[10] + (uStack_34 & 0xff);
        iVar4 = iStack_48;
        if ((int)param_2[7] <= iStack_48) {
          iVar4 = (int)param_2[7];
        }
        *(int *)(param_2 + 7) = iVar4;
        iVar4 = iStack_48;
        if (iStack_48 <= *(int *)((longlong)param_2 + 0x3c)) {
          iVar4 = *(int *)((longlong)param_2 + 0x3c);
        }
        *(int *)((longlong)param_2 + 0x3c) = iVar4;
        if ((*(char *)((longlong)param_2 + 0x57) == '\0') || ((char)uStack_38 == '\0')) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
        *(undefined1 *)((longlong)param_2 + 0x57) = uVar3;
        if ((*(char *)((longlong)param_2 + 0x56) == '\0') || (uStack_34._1_1_ == '\0')) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
        *(undefined1 *)((longlong)param_2 + 0x56) = uVar3;
        iVar4 = (int)param_2[3];
        lVar11 = (longlong)iVar4;
        *(int *)(param_2 + 3) = iVar4 + 1;
        if (*(int *)((longlong)param_2 + 0x1c) < iVar4 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2 + 2,iVar4);
        }
        uVar7 = param_2[2];
        iVar9 = iVar9 + 1;
        puVar5 = (undefined8 *)(uVar7 + lVar11 * 0x30);
        *puVar5 = CONCAT44(uStack_54,iStack_58);
        puVar5[1] = uStack_50;
        puVar5 = (undefined8 *)(uVar7 + 0x10 + lVar11 * 0x30);
        *puVar5 = CONCAT44(uStack_44,iStack_48);
        puVar5[1] = uStack_40;
        puVar1 = (uint *)(uVar7 + 0x20 + lVar11 * 0x30);
        *puVar1 = uStack_38;
        puVar1[1] = uStack_34;
        puVar1[2] = uStack_30;
        puVar1[3] = uStack_2c;
      } while (iVar9 < *(int *)((longlong)param_2 + 0x34));
      uVar7 = (ulonglong)(uint)param_2[7];
    }
    if ((int)uVar7 == 0x7fffffff) {
      *(undefined4 *)(param_2 + 7) = 0x80000000;
    }
    if (*(int *)((longlong)param_2 + 0x3c) == -0x80000000) {
      *(undefined4 *)((longlong)param_2 + 0x3c) = 0x7fffffff;
    }
    uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
  }
  return uVar7;
}



// FUNCTION 140653fa0 FUN_140653fa0 body=66 status=ok
// SIG undefined FUN_140653fa0(void)

void FUN_140653fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140653620();
  FUN_140653470(param_1,param_3);
  FUN_140653750(param_1,param_4);
  return;
}



// FUNCTION 140653ff0 FUN_140653ff0 body=11 status=ok
// SIG undefined FUN_140653ff0(void)

void FUN_140653ff0(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = param_2;
  FUN_1406534e0(param_1,param_3);
  return;
}



// FUNCTION 140654000 FUN_140654000 body=132 status=ok
// SIG undefined FUN_140654000(void)

void FUN_140654000(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 local_28 [32];
  
  FUN_1406539f0();
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  if (param_1 != 0) {
    puVar5 = (undefined4 *)UStaticMesh::GetBounds(param_1,local_28);
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    *(undefined4 *)param_3 = *puVar5;
    *(undefined4 *)((longlong)param_3 + 4) = uVar2;
    *(undefined4 *)(param_3 + 1) = uVar3;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar4;
    param_3[2] = *(undefined8 *)(puVar5 + 4);
    *(undefined4 *)(param_3 + 3) = puVar5[6];
    iVar1 = *(int *)(param_1 + 0xf0);
    *(int *)((longlong)param_3 + 0x1c) = iVar1;
    *(bool *)(param_3 + 4) = 0 < iVar1;
  }
  FUN_140653b20(param_1,param_4);
  return;
}



// FUNCTION 140654090 FUN_140654090 body=11 status=ok
// SIG undefined FUN_140654090(void)

void FUN_140654090(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = param_2;
  FUN_140653900(param_1,param_3);
  return;
}



// FUNCTION 1406540a0 thunk_FUN_140653d20 body=5 status=ok
// SIG undefined thunk_FUN_140653d20(void)

ulonglong thunk_FUN_140653d20(longlong param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lStackX_8;
  longlong *plStack_38;
  undefined8 uStack_30;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  puVar4 = (undefined8 *)FName::FName(&lStackX_8,"GbxTest",1);
  plVar5 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar4);
  uVar6 = 0;
  if (plVar5 != (longlong *)0x0) {
    plStack_38 = (longlong *)0x0;
    uStack_30 = 0;
    (**(code **)(*plVar5 + 0x90))(plVar5,param_1,&plStack_38);
    uVar6 = (ulonglong)(int)uStack_30;
    plVar5 = plStack_38 + uVar6;
    for (plVar10 = plStack_38; plVar10 != plVar5; plVar10 = plVar10 + 1) {
      lVar9 = *plVar10;
      if (lVar9 != 0) {
        lVar7 = FUN_140665ad0();
        iVar1 = *(int *)(lVar7 + 0x90);
        uVar6 = (longlong)iVar1;
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < iVar1) ||
           (uVar6 = *(ulonglong *)(*(longlong *)(lVar9 + 0x10) + 0x88),
           *(longlong *)(uVar6 + (longlong)iVar1 * 8) != lVar7 + 0x88)) {
          uVar6 = uVar6 & 0xffffffffffffff00;
        }
        else {
          uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
        }
        if ((char)uVar6 != '\0') {
          iVar1 = (int)param_2[1];
          uVar6 = (ulonglong)iVar1;
          *(int *)(param_2 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
          }
          *(longlong *)(*param_2 + uVar6 * 8) = lVar9;
        }
      }
    }
    if (plStack_38 != (longlong *)0x0) {
      uVar6 = FMemory::Free(plStack_38);
    }
  }
  if (param_1 != 0) {
    uVar3 = *(undefined1 *)(param_1 + 0x48);
    uVar8 = UEnum::GetPrivateStaticClass();
    lVar9 = FUN_141799410(uVar8,0xffffffffffffffff,L"TextureCompressionSettings",1);
    if (lVar9 == 0) {
      lStackX_8 = 0;
    }
    else {
      UEnum::GetNameByValue(lVar9,&lStackX_8,uVar3);
    }
    param_2[2] = lStackX_8;
    uVar3 = *(undefined1 *)(param_1 + 0x4a);
    uVar8 = UEnum::GetPrivateStaticClass();
    lVar9 = FUN_141799410(uVar8,0xffffffffffffffff,L"TextureGroup",1);
    if (lVar9 == 0) {
      lStackX_8 = 0;
    }
    else {
      UEnum::GetNameByValue(lVar9,&lStackX_8,uVar3);
    }
    param_2[3] = lStackX_8;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x40);
    lVar9 = UTexture2D::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
         ) != lVar9 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar3 = FUN_1428545b0(param_1);
      *(undefined1 *)((longlong)param_2 + 0x24) = uVar3;
      *(byte *)((longlong)param_2 + 0x25) = *(byte *)(param_1 + 0x4b) & 1;
      return 1;
    }
    *(undefined1 *)((longlong)param_2 + 0x24) = 0;
    *(byte *)((longlong)param_2 + 0x25) = *(byte *)(param_1 + 0x4b) & 1;
    return 1;
  }
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 1406540c0 FUN_1406540c0 body=24 status=ok
// SIG undefined FUN_1406540c0(void)

undefined8 FUN_1406540c0(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x60))();
  return param_2;
}



// FUNCTION 1406540e0 FUN_1406540e0 body=218 status=ok
// SIG undefined FUN_1406540e0(void)

void FUN_1406540e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  longlong local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  FName::AppendString(param_1 + 0xd8,&local_28);
  iVar3 = (int)local_20 + -1;
  if ((int)local_20 < 1) {
    iVar3 = 0;
  }
  iVar2 = ((int)local_20 < 1) + 1 + (int)local_20;
  local_20 = CONCAT44(local_20._4_4_,iVar2);
  if (local_20._4_4_ < iVar2) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28);
  }
  *(undefined2 *)(local_28 + (longlong)iVar3 * 2) = 0x20;
  *(undefined2 *)(local_28 + 2 + (longlong)iVar3 * 2) = 0;
  FName::AppendString(param_1 + 0xb8,&local_28);
  if (local_28 != 0) {
    FMemory::Free();
  }
  uVar1 = FUN_140650d50(param_1);
  FUN_1406541c0(param_1,uVar1,param_2,param_3);
  return;
}



// FUNCTION 1406541c0 FUN_1406541c0 body=1488 status=ok
// SIG undefined FUN_1406541c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406541c0(longlong param_1,byte param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong **pplVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_1c8 [32];
  longlong *local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  longlong *local_180;
  undefined8 local_178;
  longlong *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
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
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_150 = param_4;
  puVar5 = (undefined8 *)FName::FName(local_148,"GbxTest",1);
  uVar9 = *puVar5;
  uVar6 = FUN_14168dc80();
  plVar7 = (longlong *)FUN_141690010(uVar6,uVar9);
  local_160 = 0;
  local_158 = 0;
  cVar3 = (**(code **)(*plVar7 + 0x60))(plVar7,param_2,&local_160,&local_158);
  if (cVar3 != '\0') {
    TArray<FString,FDefaultAllocator>::Append<FString,FDefaultAllocator>(local_150,local_160);
    TArray<FString,FDefaultAllocator>::Append<FString,FDefaultAllocator>(param_3,local_158);
    return;
  }
  local_170 = (longlong *)0x0;
  local_168 = 0;
  local_180 = (longlong *)0x0;
  local_178 = 0;
  switch(param_2) {
  case 0:
    if (param_1 != 0) {
      FUN_140654b20(param_1,&local_180,&local_170);
    }
    break;
  case 2:
    local_190 = 0;
    local_188 = 0;
    local_138 = 0;
    local_130 = 0;
    local_128 = 0;
    local_120 = 0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 0;
    local_100 = 0;
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
    local_58 = 1;
    FName::FName(&local_1a8,L"/Game",1);
    uVar2 = local_120;
    lVar8 = (longlong)(int)local_120;
    iVar12 = (int)local_120 + 1;
    local_120 = CONCAT44(local_120._4_4_,iVar12);
    if (local_120._4_4_ < iVar12) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_128,uVar2 & 0xffffffff);
    }
    *(longlong **)(local_128 + lVar8 * 8) = local_1a8;
    puVar5 = (undefined8 *)FName::FName(&local_1a0,"AssetRegistry",1);
    plVar10 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar5);
    if (plVar10 != (longlong *)0x0) {
      plVar10 = (longlong *)(**(code **)(*plVar10 + 0x48))(plVar10);
      (**(code **)(*plVar10 + 0x40))(plVar10,&local_138,&local_190);
    }
    goto LAB_1406543b9;
  case 4:
    local_1a0 = (longlong *)0x0;
    local_198 = 0;
    FUN_14064f030(&local_1a0);
    FUN_140643830(&local_1a0,&local_180,&local_170);
    plVar10 = local_1a0;
    for (iVar12 = (int)local_198; iVar12 != 0; iVar12 = iVar12 + -1) {
      if (*plVar10 != 0) {
        FMemory::Free();
      }
      plVar10 = plVar10 + 2;
    }
    if (local_1a0 != (longlong *)0x0) {
      FMemory::Free(local_1a0);
    }
    break;
  case 5:
    local_190 = 0;
    local_188 = 0;
    local_138 = 0;
    local_130 = 0;
    local_128 = 0;
    local_120 = 0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 0;
    local_100 = 0;
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
    local_58 = 0;
    lVar8 = FUN_142f71d80();
    uVar2 = local_100;
    lVar13 = (longlong)(int)local_100;
    uVar9 = *(undefined8 *)(lVar8 + 0x18);
    iVar12 = (int)local_100 + 1;
    local_100 = CONCAT44(local_100._4_4_,iVar12);
    if (local_100._4_4_ < iVar12) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_108,uVar2 & 0xffffffff);
    }
    *(undefined8 *)(local_108 + lVar13 * 8) = uVar9;
    local_58._0_2_ = CONCAT11(1,(undefined1)local_58);
    FName::FName(&local_1a8,L"/Game",1);
    uVar2 = local_120;
    lVar8 = (longlong)(int)local_120;
    iVar12 = (int)local_120 + 1;
    local_120 = CONCAT44(local_120._4_4_,iVar12);
    if (local_120._4_4_ < iVar12) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (&local_128,uVar2 & 0xffffffff);
    }
    *(longlong **)(local_128 + lVar8 * 8) = local_1a8;
    local_58 = CONCAT31(local_58._1_3_,1);
    puVar5 = (undefined8 *)FName::FName(&local_1a0,"GbxBlueprintHelper",1);
    plVar10 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar5);
    if (plVar10 != (longlong *)0x0) {
      uVar9 = (**(code **)(*plVar10 + 0x40))(plVar10);
      FUN_142ea6e80(uVar9,&local_138,&local_190);
    }
LAB_1406543b9:
    FARFilter::~FARFilter(&local_138);
    FUN_140643680(&local_190,&local_180,&local_170);
    FUN_1404be960(&local_190);
    break;
  case 6:
    if (param_1 != 0) {
      FUN_1406547c0(param_1,&local_180,&local_170);
    }
    break;
  case 7:
    local_1a0 = (longlong *)0x0;
    local_198 = 0;
    FUN_14064f5a0(&local_1a0);
    FUN_140643680(&local_1a0,&local_180,&local_170);
    FUN_1404be960(&local_1a0);
    break;
  case 8:
    if (param_1 == 0) break;
    cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xa8);
    if (cVar3 == '\0') {
      cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xa8);
      if (cVar3 == '\0') {
        puVar5 = (undefined8 *)FName::FName(&local_1a0,"GbxTest",1);
        plVar10 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar5);
        if (plVar10 == (longlong *)0x0) goto LAB_140654649;
        (**(code **)(*plVar10 + 0x58))(plVar10,&local_1a8,param_1 + 0xb8);
      }
      else {
LAB_140654649:
        FWeakObjectPtr::operator=(&local_1a8,0);
      }
      cVar3 = FWeakObjectPtr::IsValid(&local_1a8);
      if (cVar3 == '\0') {
        FWeakObjectPtr::operator=(&local_1a0,0);
        pplVar11 = &local_1a0;
      }
      else {
        pplVar11 = &local_1a8;
      }
      uVar1 = *(undefined4 *)pplVar11;
      uVar4 = *(undefined4 *)((longlong)pplVar11 + 4);
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0xa8);
      uVar4 = *(undefined4 *)(param_1 + 0xac);
    }
    local_190 = CONCAT44(uVar4,uVar1);
    cVar3 = FWeakObjectPtr::IsValid(&local_190);
    if (cVar3 != '\0') {
      plVar10 = (longlong *)FWeakObjectPtr::Get(&local_190);
      (**(code **)(*plVar10 + 0x290))(plVar10,&local_170,&local_180);
    }
  }
  TArray<FString,FDefaultAllocator>::Append<FString,FDefaultAllocator>(local_150,&local_170);
  TArray<FString,FDefaultAllocator>::Append<FString,FDefaultAllocator>(param_3,&local_180);
  if ((param_2 < 8) && ((0xb4U >> (param_2 & 0x1f) & 1) != 0)) {
    (**(code **)(*plVar7 + 0x50))(plVar7,param_2,&local_170,&local_180);
  }
  plVar7 = local_180;
  for (iVar12 = (int)local_178; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_180 != (longlong *)0x0) {
    FMemory::Free(local_180);
  }
  plVar7 = local_170;
  for (iVar12 = (int)local_168; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_170 != (longlong *)0x0) {
    FMemory::Free(local_170);
  }
  return;
}



// FUNCTION 1406547c0 FUN_1406547c0 body=855 status=ok
// SIG undefined FUN_1406547c0(void)

void FUN_1406547c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  longlong lVar14;
  undefined8 *local_res8;
  undefined8 local_res10;
  undefined8 *local_res20;
  longlong local_148 [4];
  undefined2 *local_128;
  int local_120;
  undefined2 *local_118;
  int local_110;
  undefined8 *local_108 [2];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined2 *local_98;
  undefined2 *local_90;
  undefined2 *local_88;
  undefined2 *local_80;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [16];
  undefined1 local_50 [24];
  
  puVar13 = (undefined2 *)0x0;
  local_res8 = (undefined8 *)0x0;
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    return;
  }
  local_res10 = param_2;
  puVar8 = (undefined8 *)FName::FName(local_78,L"HierarchicalCommands",1);
  FAssetDataTagMapSharedView::FindTag(param_1 + 0xe0,&local_res8,*puVar8);
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = (longlong *)0x0;
  lStack_c0 = 0;
  local_b8 = 0;
  if (local_res8 == (undefined8 *)0x0) {
    return;
  }
  if (*(int *)(local_res8 + 1) == 0) {
    puVar10 = &DAT_143f3eda8;
  }
  else {
    puVar10 = (undefined2 *)*local_res8;
  }
  cVar6 = FUN_14064f8e0(puVar10,&local_f8);
  if (cVar6 == '\0') goto LAB_140654aaf;
  puVar8 = (undefined8 *)FName::FName(local_70,L"TestCommands",1);
  FAssetDataTagMapSharedView::FindTag(&local_d0,&local_res20,*puVar8);
  puVar8 = (undefined8 *)FName::FName(local_68,L"DisplayNames",1);
  FAssetDataTagMapSharedView::FindTag(&local_d0,local_108,*puVar8);
  if ((local_res20 == (undefined8 *)0x0) || (local_108[0] == (undefined8 *)0x0)) goto LAB_140654aaf;
  pvVar3 = (void *)*local_res20;
  local_120 = *(int *)(local_res20 + 1);
  lVar14 = (longlong)local_120;
  local_128 = (undefined2 *)0x0;
  if (local_120 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_128,local_120,0);
    puVar13 = local_128;
    _guard_xfg_dispatch_icall_nop(local_128,pvVar3,lVar14 * 2);
  }
  iVar7 = local_120;
  local_118 = (undefined2 *)0x0;
  local_110 = *(int *)(local_108[0] + 1);
  lVar14 = (longlong)local_110;
  pvVar3 = (void *)*local_108[0];
  if (local_110 == 0) {
    puVar10 = (undefined2 *)0x0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_118,local_110,0);
    puVar10 = local_118;
    _guard_xfg_dispatch_icall_nop(local_118,pvVar3,lVar14 * 2);
  }
  iVar4 = local_110;
  if (iVar7 == 0) {
    puVar12 = &DAT_143f3eda8;
LAB_1406549aa:
    iVar7 = MNP_OverrideOutput_WC(puVar12);
    local_90 = puVar12 + iVar7;
  }
  else {
    puVar12 = puVar13;
    if (puVar13 != (undefined2 *)0x0) goto LAB_1406549aa;
    local_90 = (undefined2 *)0x0;
  }
  local_80 = (undefined2 *)0x0;
  puVar11 = &DAT_143f3eda8;
  local_98 = puVar12;
  if ((iVar4 == 0) || (puVar11 = puVar10, local_88 = puVar10, puVar10 != (undefined2 *)0x0)) {
    iVar7 = MNP_OverrideOutput_WC(puVar11);
    local_80 = puVar11 + iVar7;
    local_88 = puVar11;
  }
  local_148[2] = 0;
  local_148[3] = 0;
  uVar9 = FUN_14063db30(local_60,PTR_DAT_14621c750);
  FUN_14063d200(&local_98,local_148 + 2,uVar9,1);
  local_148[0] = 0;
  local_148[1] = 0;
  uVar9 = FUN_14063db30(local_50,PTR_DAT_14621c750);
  FUN_14063d200(&local_88,local_148,uVar9,1);
  FUN_140643440(local_148,local_148 + 2,local_res10,param_3);
  if (local_148[0] != 0) {
    FMemory::Free();
  }
  if (local_148[2] != 0) {
    FMemory::Free();
  }
  if (puVar10 != (undefined2 *)0x0) {
    FMemory::Free(puVar10);
  }
  if (puVar13 != (undefined2 *)0x0) {
    FMemory::Free(puVar13);
  }
LAB_140654aaf:
  if (lStack_c0 != 0) {
    FMemory::Free();
  }
  plVar5 = local_c8;
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c8 + 1;
    lVar14 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar14 == 1) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_c8 + 8))(local_c8,1);
      }
    }
  }
  return;
}



// FUNCTION 140654b20 FUN_140654b20 body=532 status=ok
// SIG undefined FUN_140654b20(void)

void FUN_140654b20(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  wchar_t **ppwVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  wchar_t *local_58;
  undefined8 local_50;
  longlong local_48 [2];
  
  pwVar9 = (wchar_t *)0x0;
  uVar8 = 0;
  local_58 = (wchar_t *)0x0;
  local_50 = 0;
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,8);
    uVar4 = (uint)local_50 + 8;
    local_50 = CONCAT44(local_50._4_4_,uVar4);
    if ((int)local_50._4_4_ < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
      uVar4 = (uint)local_50;
    }
    builtin_wcsncpy(local_58,L"RunOnce",8);
    pwVar11 = local_58;
  }
  else {
    ppwVar2 = (wchar_t **)FName::ToString(param_1 + 0xd0,local_48);
    pwVar11 = pwVar9;
    uVar4 = uVar8;
    if (&local_58 != ppwVar2) {
      pwVar11 = *ppwVar2;
      *ppwVar2 = (wchar_t *)0x0;
      uVar4 = *(uint *)(ppwVar2 + 1);
      ppwVar2[1] = (wchar_t *)0x0;
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  local_58 = (wchar_t *)0x0;
  local_50 = local_50 & 0xffffffff;
  pwVar10 = L"";
  if (uVar4 != 0) {
    pwVar10 = pwVar11;
  }
  lVar5 = -1;
  if ((pwVar10 != (wchar_t *)0x0) && (*pwVar10 != L'\0')) {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (pwVar10[lVar7] != L'\0');
    uVar6 = (int)lVar7 + 1;
    local_50 = (ulonglong)uVar6;
    uVar8 = uVar6;
    if (0 < (int)uVar6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      uVar8 = (uint)local_50;
    }
    FGenericPlatformString::Memcpy(local_58,pwVar10,(longlong)(int)uVar6 * 2);
  }
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
  }
  pwVar10 = local_58;
  uVar6 = 0;
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
  local_58 = (wchar_t *)0x0;
  pwVar12 = L"";
  if (uVar4 != 0) {
    pwVar12 = pwVar11;
  }
  *puVar3 = pwVar10;
  *(uint *)(puVar3 + 1) = uVar8;
  *(uint *)((longlong)puVar3 + 0xc) = local_50._4_4_;
  local_50 = local_50 & 0xffffffff;
  uVar8 = uVar6;
  if ((pwVar12 != (wchar_t *)0x0) && (*pwVar12 != L'\0')) {
    do {
      lVar5 = lVar5 + 1;
    } while (pwVar12[lVar5] != L'\0');
    uVar4 = (int)lVar5 + 1;
    local_50 = (ulonglong)uVar4;
    uVar6 = uVar4;
    uVar8 = 0;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      uVar6 = (uint)local_50;
      uVar8 = local_50._4_4_;
    }
    pwVar9 = local_58;
    FGenericPlatformString::Memcpy(local_58,pwVar12,(longlong)(int)uVar4 * 2);
  }
  iVar1 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
  *puVar3 = pwVar9;
  *(uint *)(puVar3 + 1) = uVar6;
  *(uint *)((longlong)puVar3 + 0xc) = uVar8;
  if (pwVar11 != (wchar_t *)0x0) {
    FMemory::Free(pwVar11);
  }
  return;
}



// FUNCTION 140654d40 FUN_140654d40 body=130 status=ok
// SIG undefined FUN_140654d40(void)

undefined8 FUN_140654d40(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  param_1 = param_1 + 0x28;
  cVar1 = FWeakObjectPtr::IsValid(param_1);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1);
    lVar3 = (**(code **)(*plVar2 + 0xfa8))(plVar2);
    if (lVar3 != 0) {
      cVar1 = FWeakObjectPtr::IsValid(param_1);
      if (cVar1 == '\0') {
        lVar3 = 0;
      }
      else {
        plVar2 = (longlong *)FWeakObjectPtr::Get(param_1);
        lVar3 = (**(code **)(*plVar2 + 0xfa8))(plVar2);
      }
      if ((0 < *(int *)(lVar3 + 0x48)) &&
         (plVar2 = *(longlong **)
                    (*(longlong *)(lVar3 + 0x40) + -8 + (longlong)*(int *)(lVar3 + 0x48) * 8),
         plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140654db3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*plVar2 + 0x278))();
        return uVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 140654dd0 FUN_140654dd0 body=1045 status=ok
// SIG undefined FUN_140654dd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140654dd0(undefined8 param_1,longlong *param_2,int param_3,int param_4,int param_5,int param_6,
             undefined4 param_7,uint param_8,float param_9)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_388 [36];
  undefined8 uStack_364;
  undefined8 uStack_35c;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined4 uStack_33c;
  undefined4 local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  float local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  float fStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  uint uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_248;
  undefined8 local_1f8;
  int local_1f0;
  int local_1ec;
  undefined8 local_1e8;
  int local_1e0;
  int local_1dc;
  longlong *local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  longlong local_130;
  undefined4 local_128;
  undefined1 local_120 [64];
  longlong local_e0;
  undefined4 local_d8;
  char local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  local_2c8 = 1.0;
  local_1f0 = (int)((1.0 / param_9) * (float)param_5);
  local_1ec = (int)((float)param_6 * (1.0 / param_9));
  if ((local_1f0 < 1) || (local_1ec < 1)) {
    uVar3 = 0;
  }
  else {
    fVar6 = (float)param_6 * 0.5;
    fVar5 = (float)param_5 * 0.5;
    fStack_2b4 = 1.0;
    lVar2 = 0;
    local_1b0 = _DAT_1468b5d78;
    uStack_1a8 = uRam00000001468b5d80;
    local_1a0 = _DAT_1468b5d78;
    uStack_198 = uRam00000001468b5d80;
    local_248 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_190 = _DAT_1464aa6c0;
    uStack_188 = _DAT_1464aa6c8;
    local_1d0 = 0;
    local_178 = 0x42c80000;
    local_bc = 0xbf800000;
    local_98 = 0;
    uStack_90 = 0;
    local_320 = param_7;
    local_1c8 = 0;
    local_1c0 = 0xffffffff;
    local_1b8 = 0;
    local_180 = 0;
    local_170 = 0;
    local_168 = 0;
    local_150 = 0;
    local_148 = 0;
    local_308 = 0x3f800000;
    uStack_300 = 0;
    local_140 = 0xffffffff;
    iVar4 = 0;
    local_13c = 0;
    local_130 = 0;
    local_128 = 0;
    local_d0 = '\0';
    local_c8 = 0xffffffffffffffff;
    local_c0 = 0x3f800000;
    local_b8 = 0;
    local_318 = CONCAT44((float)param_4 + fVar6,(float)param_3 + fVar5);
    local_b0 = 0;
    local_ac = 0x100;
    local_a8 = 0x42b40000;
    local_a4 = 0x42b40000;
    local_a0 = 0;
    local_78 = 0;
    local_74 = 0;
    local_6c = 0;
    local_68 = 1;
    local_66 = 0;
    local_1f8 = 0;
    local_1e8 = 0;
    local_310 = param_7;
    local_2f8 = 0xbf80000000000000;
    uStack_2f0 = 0;
    local_2e8 = 0;
    uStack_2e0 = 0xbf800000;
    local_2d8 = 0;
    uStack_2d0 = 0x3f80000000000000;
    if (fVar6 != 0.0) {
      fStack_2b4 = 1.0 / fVar6;
    }
    if (fVar5 != 0.0) {
      local_2c8 = 1.0 / fVar5;
    }
    uStack_2a0 = param_8 ^ 0x80000000;
    uStack_35c = 0;
    uStack_364 = 0;
    uStack_350 = 0;
    uStack_2c4 = 0;
    uStack_2c0 = 0;
    uStack_2bc = 0;
    local_348 = 0;
    uStack_33c = 0;
    local_2b8 = 0;
    uStack_2b0 = 0;
    uStack_2ac = 0;
    local_2a8 = 0;
    uStack_2a4 = 0;
    uStack_29c = 0;
    local_298 = 0;
    uStack_290 = 0x3f8000003f800000;
    local_1e0 = local_1f0;
    local_1dc = local_1ec;
    local_1d8 = param_2;
    lVar1 = operator_new(0x1aa0);
    if (lVar1 != 0) {
      lVar2 = FUN_142742170(lVar1,&local_318);
    }
    *(undefined4 *)(lVar2 + 0xf30) = 0x3f800000;
    *(undefined4 *)(lVar2 + 0xf34) = 0;
    *(undefined4 *)(lVar2 + 0xf38) = 0x3f800000;
    *(undefined4 *)(lVar2 + 0xf3c) = 0x3f800000;
    if ((*(uint *)(param_2 + 5) & 0x4000000) == 0) {
      *(undefined8 *)(lVar2 + 0xf90) = 0;
      *(undefined8 *)(lVar2 + 0xf98) = 0;
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 1) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,1);
      iVar4 = (int)param_2[1];
    }
    *(int *)(param_2 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
    }
    *(longlong *)(*param_2 + (longlong)iVar4 * 8) = lVar2;
    if (local_d0 != '\0') {
      local_d0 = '\0';
      local_d8 = 0;
      if (local_e0 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (local_120);
    }
    local_128 = 0;
    if (local_130 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_170);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1406551f0 FUN_1406551f0 body=18 status=ok
// SIG undefined FUN_1406551f0(void)

undefined8 FUN_1406551f0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001406551f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x148))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 140655210 FUN_140655210 body=91 status=ok
// SIG undefined FUN_140655210(void)

ulonglong FUN_140655210(longlong param_1)

{
  ulonglong uVar1;
  char local_res10 [24];
  
  local_res10[0] = '\0';
  FConfigCacheIni::GetBool
            (DAT_1468b6148,L"/Script/Engine.AutomationTestSettings",L"IgnoreErrorLogOutput",
             local_res10,&DAT_1468e2360);
  if (local_res10[0] != '\0') {
    return (ulonglong)*(byte *)(param_1 + 0x180);
  }
  uVar1 = FUN_14164f780(param_1);
  return uVar1;
}



// FUNCTION 140655270 FUN_140655270 body=68 status=ok
// SIG undefined FUN_140655270(void)

bool FUN_140655270(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x28);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x28);
    lVar3 = (**(code **)(*plVar2 + 0xfa8))(plVar2);
    if (lVar3 != 0) {
      return 0 < *(int *)(lVar3 + 0x48);
    }
  }
  return false;
}



// FUNCTION 1406552c0 FUN_1406552c0 body=674 status=ok
// SIG undefined FUN_1406552c0(void)

void FUN_1406552c0(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 uStack_3c;
  
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AssetRegistry",1);
  uVar8 = *puVar2;
  uVar3 = FUN_14168dc80();
  plVar4 = (longlong *)FUN_141690010(uVar3,uVar8);
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x48))(plVar4);
  FUN_140644720(param_1);
  FUN_140644a00(param_1);
  uVar3 = 0;
  plVar5 = (longlong *)(**(code **)(*plVar4 + 0x140))(plVar4);
  plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
  uVar8 = uVar3;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR_GetPoolName_143fc2050;
    plVar6[1] = param_1;
    *(undefined4 *)(plVar6 + 2) = 0x40641e40;
    *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
    *(undefined4 *)(plVar6 + 3) = 0;
    *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_3c;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[5] = lVar7;
    *plVar6 = (longlong)&PTR_GetPoolName_143fc2098;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar5,1);
    puVar2 = (undefined8 *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res10);
    iVar1 = (int)plVar5[1];
    uVar8 = *puVar2;
    *(int *)(plVar5 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar5 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar5,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar5);
    *puVar2 = plVar6;
    *(undefined4 *)(puVar2 + 1) = 3;
  }
  *(undefined8 *)(param_1 + 0x188) = uVar8;
  plVar5 = (longlong *)(**(code **)(*plVar4 + 0x148))(plVar4);
  plVar6 = (longlong *)FMemory::Realloc(0,0x30);
  uVar8 = uVar3;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR_GetPoolName_143fc2050;
    plVar6[1] = param_1;
    *(undefined4 *)(plVar6 + 2) = 0x40641ec0;
    *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
    *(undefined4 *)(plVar6 + 3) = 0;
    *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_3c;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[5] = lVar7;
    *plVar6 = (longlong)&PTR_GetPoolName_143fc2098;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar5,1);
    puVar2 = (undefined8 *)(**(code **)(*plVar6 + 0x20))(plVar6,local_res10);
    iVar1 = (int)plVar5[1];
    uVar8 = *puVar2;
    *(int *)(plVar5 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar5 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar5,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar5);
    *puVar2 = plVar6;
    *(undefined4 *)(puVar2 + 1) = 3;
  }
  *(undefined8 *)(param_1 + 400) = uVar8;
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x150))(plVar4);
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar5 != (longlong *)0x0) {
    plVar5[1] = param_1;
    *plVar5 = (longlong)&PTR_GetPoolName_143fc1ab0;
    *(undefined4 *)(plVar5 + 2) = 0x40641ed0;
    *(undefined4 *)((longlong)plVar5 + 0x14) = 1;
    *(undefined4 *)(plVar5 + 3) = 0;
    *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_3c;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar5[5] = lVar7;
    *plVar5 = (longlong)&PTR_GetPoolName_143fc1af8;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar4,1);
    puVar2 = (undefined8 *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
    iVar1 = (int)plVar4[1];
    uVar3 = *puVar2;
    *(int *)(plVar4 + 1) = iVar1 + 1;
    if (*(int *)((longlong)plVar4 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar4);
    *puVar2 = plVar5;
    *(undefined4 *)(puVar2 + 1) = 3;
  }
  *(undefined8 *)(param_1 + 0x198) = uVar3;
  FUN_1406442e0(param_1);
  return;
}



// FUNCTION 140655570 Init body=224 status=ok
// SIG undefined Init(void)

void FGCObject::Init(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
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
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}



// FUNCTION 140655650 Init body=78 status=ok
// SIG void Init(SysAllocBase * param_1)

/* public: static void __cdecl Scaleform::GFx::System::Init(class Scaleform::SysAllocBase * __ptr64)
    */

void __cdecl Scaleform::GFx::System::Init(SysAllocBase *param_1)

{
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
                    /* 0x655650  228  ?Init@System@GFx@Scaleform@@SAXPEAVSysAllocBase@3@@Z */
  local_48[0] = 0;
  local_40 = 0x10;
  local_38 = 0x4000;
  local_30 = 0x4000;
  local_28 = 0x40000;
  local_20 = 0;
  local_18 = 1;
  local_10 = 0;
  Init((HeapDesc *)local_48,param_1);
  return;
}



// FUNCTION 1406556a0 Init body=78 status=ok
// SIG void Init(SysAllocBase * param_1)

/* public: static void __cdecl Scaleform::System::Init(class Scaleform::SysAllocBase * __ptr64) */

void __cdecl Scaleform::System::Init(SysAllocBase *param_1)

{
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
                    /* 0x6556a0  230  ?Init@System@Scaleform@@SAXPEAVSysAllocBase@2@@Z */
  local_48[0] = 0;
  local_40 = 0x10;
  local_38 = 0x4000;
  local_30 = 0x4000;
  local_28 = 0x40000;
  local_20 = 0;
  local_18 = 1;
  local_10 = 0;
  Init((HeapDesc *)local_48,param_1);
  return;
}



// FUNCTION 1406556f0 FUN_1406556f0 body=431 status=ok
// SIG undefined FUN_1406556f0(void)

undefined8 * FUN_1406556f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x1d0);
  if (puVar1 != (undefined8 *)0x0) {
    _guard_xfg_dispatch_icall_nop(puVar1 + 2,0,0x1c0);
    *puVar1 = &PTR_FUN_144024d38;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1[1] = &PTR__scalar_deleting_destructor__143f73ca8;
    FGCObject::Init(puVar1 + 1);
    *puVar1 = &PTR_FUN_144024e08;
    puVar1[1] = &PTR_LAB_144024ed8;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
    *(undefined4 *)(puVar1 + 9) = 0xffffffff;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x9c) = 0;
    *(undefined4 *)(puVar1 + 0x13) = 0xffffffff;
    puVar1[0x15] = 0;
    *(undefined4 *)(puVar1 + 0x16) = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    *(undefined4 *)((longlong)puVar1 + 0xec) = 0;
    *(undefined4 *)(puVar1 + 0x1d) = 0xffffffff;
    puVar1[0x1f] = 0;
    *(undefined4 *)(puVar1 + 0x20) = 0;
    puVar1[0x21] = 0;
    puVar1[0x22] = 0;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
    *(undefined4 *)((longlong)puVar1 + 0x13c) = 0;
    *(undefined4 *)(puVar1 + 0x27) = 0xffffffff;
    puVar1[0x29] = 0;
    *(undefined4 *)(puVar1 + 0x2a) = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 2;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 2;
    puVar1[0x31] = 0;
    puVar1[0x32] = 0;
    puVar1[0x33] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0;
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    puVar1[0x38] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1406558a0 FUN_1406558a0 body=165 status=ok
// SIG undefined FUN_1406558a0(void)

void FUN_1406558a0(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x124) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0x124);
  iVar5 = *(int *)(param_1 + 0x118) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x110);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_140655901:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
        if (cVar4 == '\0') goto LAB_140655901;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x124);
  }
  *(int *)(param_1 + 0x124) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x110),0);
    return;
  }
  return;
}



// FUNCTION 140655950 FUN_140655950 body=129 status=ok
// SIG undefined FUN_140655950(void)

void FUN_140655950(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468567c0) {
    _Init_thread_header(&DAT_1468567c0);
    if (DAT_1468567c0 == -1) {
      FName::FName(&DAT_1468567b8,L"GbxPerfAnalytics",1);
      _Init_thread_footer(&DAT_1468567c0);
    }
  }
  uVar1 = DAT_1468567b8;
  uVar2 = FUN_14168dc80();
  FModuleManager::IsModuleLoaded(uVar2,uVar1);
  return;
}



// FUNCTION 1406559e0 FUN_1406559e0 body=147 status=ok
// SIG undefined FUN_1406559e0(void)

ulonglong FUN_1406559e0(undefined8 param_1,undefined8 *param_2,char param_3,byte param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  longlong local_18 [2];
  
  if (param_3 == '\0') {
    uVar3 = FName::ToString(param_1,local_18);
    if (*(int *)(param_2 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar1 = FUN_141592950(uVar3,puVar4,param_4 ^ 1,0,0xffffffff);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    return (ulonglong)(iVar1 != -1);
  }
  if (*(int *)(param_2 + 1) != 0) {
    uVar2 = FName::operator==<wchar_t>(param_1,*param_2);
    return uVar2;
  }
  uVar2 = FName::operator==<wchar_t>(param_1,&DAT_143f3eda8);
  return uVar2;
}



// FUNCTION 140655a80 FUN_140655a80 body=62 status=ok
// SIG undefined FUN_140655a80(void)

void FUN_140655a80(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"GbxTest",1);
  plVar2 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0xa0))(plVar2);
    return;
  }
  return;
}



// FUNCTION 140655ac0 FUN_140655ac0 body=986 status=ok
// SIG undefined FUN_140655ac0(void)

undefined8 FUN_140655ac0(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  wchar_t *pwVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  void *_Src_00;
  undefined2 *puVar9;
  undefined4 uVar10;
  void *local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [8];
  void *local_190;
  int local_188;
  undefined4 local_184;
  void *local_180;
  int local_178;
  undefined4 local_174;
  void *local_170;
  ulonglong local_168;
  undefined2 *local_160;
  undefined8 local_158;
  undefined1 local_148 [4];
  int local_144;
  int local_140;
  longlong local_138;
  uint local_124;
  longlong local_120;
  longlong local_108;
  longlong local_b8;
  longlong local_98;
  longlong local_78;
  longlong local_48;
  
  local_160 = (undefined2 *)0x0;
  local_158 = 0;
  cVar1 = FUN_1416f0740(param_2,0,&local_160,1);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_1415c3d50();
    puVar9 = &DAT_143f3eda8;
    puVar4 = &DAT_143f3eda8;
    if ((int)local_158 != 0) {
      puVar4 = local_160;
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x18))(plVar2,puVar4,0);
    if (puVar3 != (undefined8 *)0x0) {
      FPackageFileSummary::FPackageFileSummary(local_148);
      operator<<(puVar3,local_148);
      (**(code **)*puVar3)(puVar3,1);
      if ((local_124 & 0x20000) == 0) {
        local_1a8 = (void *)0x0;
        local_1a0 = 0xb;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
        _Src_00 = local_1a8;
        FGenericPlatformString::Memcpy(local_1a8,L"Simulation",0x16);
        if (*(int *)(param_2 + 1) != 0) {
          puVar9 = (undefined2 *)*param_2;
        }
        FString::PrintfImpl(&local_170,L"%s is an asset file that is not a map.",puVar9);
        local_198[0] = 3;
        local_190 = (void *)0x0;
        local_188 = (int)local_1a0;
        if ((int)local_1a0 == 0) {
          local_184 = 0;
        }
        else {
LAB_140655d36:
          local_190 = (void *)0x0;
          local_198[0] = 3;
          lVar7 = (longlong)(int)local_1a0;
          local_188 = (int)local_1a0;
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_190,(int)local_1a0,0);
          _guard_xfg_dispatch_icall_nop(local_190,_Src_00,lVar7 * 2);
        }
LAB_140655d58:
        _Src = local_170;
        local_180 = (void *)0x0;
        iVar6 = (int)local_168;
        local_178 = iVar6;
        if (iVar6 == 0) {
          local_174 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_180,local_168 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_180,_Src,(longlong)iVar6 * 2);
        }
        FUN_140656f60(param_1,local_198);
        if (local_180 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_190 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_170 != (void *)0x0) {
          FMemory::Free();
        }
        if (_Src_00 != (void *)0x0) {
          FMemory::Free(_Src_00);
        }
        uVar8 = 0;
      }
      else {
        if (local_144 < 0xd6) {
          local_1a8 = (void *)0x0;
          local_1a0 = 0xb;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
          _Src_00 = local_1a8;
          FGenericPlatformString::Memcpy(local_1a8,L"Simulation",0x16);
          if (*(int *)(param_2 + 1) != 0) {
            puVar9 = (undefined2 *)*param_2;
          }
          uVar10 = 0xd6;
          pwVar5 = L"%s is a map with version v%d, but the oldest version that can be loaded is v%d"
          ;
LAB_140655d0b:
          FString::PrintfImpl(&local_170,pwVar5,puVar9,local_144,uVar10);
          local_198[0] = 3;
          local_190 = (void *)0x0;
          local_188 = (int)local_1a0;
          if ((int)local_1a0 != 0) goto LAB_140655d36;
          local_184 = 0;
          goto LAB_140655d58;
        }
        if (0x204 < local_144) {
          local_1a8 = (void *)0x0;
          local_1a0 = 0xb;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
          _Src_00 = local_1a8;
          FGenericPlatformString::Memcpy(local_1a8,L"Simulation",0x16);
          if (*(int *)(param_2 + 1) != 0) {
            puVar9 = (undefined2 *)*param_2;
          }
          uVar10 = 0x204;
          pwVar5 = L"%s is a map with version v%d, but the newest version that can be loaded is v%d"
          ;
          goto LAB_140655d0b;
        }
        if (0x1a < local_140) {
          local_1a8 = (void *)0x0;
          local_1a0 = 0xb;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
          _Src_00 = local_1a8;
          FGenericPlatformString::Memcpy(local_1a8,L"Simulation",0x16);
          if (*(int *)(param_2 + 1) != 0) {
            puVar9 = (undefined2 *)*param_2;
          }
          uVar10 = 0x1a;
          pwVar5 = 
          L"%s is a map with licensee version v%d, but the newest version that can be loaded is v%d"
          ;
          local_144 = local_140;
          goto LAB_140655d0b;
        }
        uVar8 = 1;
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
      if (local_78 != 0) {
        FMemory::Free();
      }
      if (local_98 != 0) {
        FMemory::Free();
      }
      if (local_b8 != 0) {
        FMemory::Free();
      }
      if (local_108 != 0) {
        FMemory::Free();
      }
      if (local_120 != 0) {
        FMemory::Free();
      }
      if (local_138 != 0) {
        FMemory::Free();
      }
      goto LAB_140655e5e;
    }
  }
  uVar8 = 0;
LAB_140655e5e:
  if (local_160 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar8;
}



// FUNCTION 140655ea0 FUN_140655ea0 body=349 status=ok
// SIG undefined FUN_140655ea0(void)

ulonglong FUN_140655ea0(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined8 *local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468567b0) {
    _Init_thread_header(&DAT_1468567b0);
    if (DAT_1468567b0 == -1) {
      FName::FName(&DAT_1468567a8,"NativeParentClass",1);
      _Init_thread_footer(&DAT_1468567b0);
    }
  }
  uVar3 = UBlueprint::GetPrivateStaticClass();
  if (*(longlong *)(param_2 + 0x20) == *(longlong *)(uVar3 + 0x18)) {
    FAssetDataTagMapSharedView::FindTag(param_2 + 0x28,local_res10,DAT_1468567a8);
    uVar3 = 0;
    if (local_res10[0] != (undefined8 *)0x0) {
      if (*(int *)(local_res10[0] + 1) == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = (undefined2 *)*local_res10[0];
      }
      plVar4 = (longlong *)FName::FName(local_res10,puVar6,1);
      lVar2 = *plVar4;
      if (*(int *)(param_1 + 0xc0) != *(int *)(param_1 + 0xec)) {
        lVar5 = *(longlong *)(param_1 + 0xf8);
        if (*(longlong *)(param_1 + 0xf8) == 0) {
          lVar5 = param_1 + 0xf0;
        }
        uVar1 = *(uint *)(lVar5 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                                  (longlong)*(int *)(param_1 + 0x100) - 1U) * 4);
        if (uVar1 != 0xffffffff) {
          do {
            uVar3 = (ulonglong)uVar1;
            if (*(longlong *)(*(longlong *)(param_1 + 0xb8) + (longlong)(int)uVar1 * 0x10) == lVar2)
            goto LAB_140655f9c;
            uVar1 = *(uint *)(*(longlong *)(param_1 + 0xb8) + 8 + (longlong)(int)uVar1 * 0x10);
          } while (uVar1 != 0xffffffff);
        }
      }
      uVar3 = 0xffffffff;
LAB_140655f9c:
      return CONCAT71((int7)(uVar3 >> 8),(int)uVar3 != -1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140656000 FUN_140656000 body=265 status=ok
// SIG undefined FUN_140656000(void)

void FUN_140656000(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  
  puVar5 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 1) == 0) {
    puVar6 = &DAT_143f3eda8;
  }
  else {
    puVar6 = (undefined2 *)*param_1;
  }
  uVar3 = UObject::GetPrivateStaticClass();
  lVar4 = FUN_141799410(uVar3,0,puVar6,0);
  *param_2 = lVar4;
  if (lVar4 == 0) {
    if (*(int *)(param_1 + 1) != 0) {
      puVar5 = (undefined2 *)*param_1;
    }
    uVar3 = UObject::GetPrivateStaticClass();
    lVar4 = FUN_141799c90(uVar3,0,puVar5,0,0,0,1);
    *param_2 = lVar4;
  }
  plVar1 = (longlong *)*param_2;
  lVar4 = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar4 = UBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar4 = plVar1[0x1f];
      if (lVar4 == 0) {
        (**(code **)(*plVar1 + 0x368))(plVar1);
        lVar4 = plVar1[0x1f];
      }
      *param_2 = lVar4;
    }
    else {
      lVar4 = *param_2;
    }
  }
  if (lVar4 == 0) {
    FUN_14065bb80(param_1,param_2);
  }
  return;
}



// FUNCTION 140656110 FUN_140656110 body=106 status=ok
// SIG undefined FUN_140656110(void)

longlong FUN_140656110(undefined8 param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_res10 [3];
  
  local_res10[0] = 0;
  FUN_140656000(param_1,local_res10);
  lVar3 = local_res10[0];
  if (local_res10[0] != 0) {
    lVar4 = ACineCameraActor::GetPrivateStaticClass();
    lVar1 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 140656180 FUN_140656180 body=106 status=ok
// SIG undefined FUN_140656180(void)

longlong FUN_140656180(undefined8 param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_res10 [3];
  
  local_res10[0] = 0;
  FUN_140656000(param_1,local_res10);
  lVar3 = local_res10[0];
  if (local_res10[0] != 0) {
    lVar4 = UCameraShake::GetPrivateStaticClass();
    lVar1 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 1406561f0 FUN_1406561f0 body=106 status=ok
// SIG undefined FUN_1406561f0(void)

longlong FUN_1406561f0(undefined8 param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_res10 [3];
  
  local_res10[0] = 0;
  FUN_140656000(param_1,local_res10);
  lVar3 = local_res10[0];
  if (local_res10[0] != 0) {
    lVar4 = USkeleton::GetPrivateStaticClass();
    lVar1 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 140656260 FUN_140656260 body=106 status=ok
// SIG undefined FUN_140656260(void)

longlong FUN_140656260(undefined8 param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_res10 [3];
  
  local_res10[0] = 0;
  FUN_140656000(param_1,local_res10);
  lVar3 = local_res10[0];
  if (local_res10[0] != 0) {
    lVar4 = UNodeMappingContainer::StaticClass();
    lVar1 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 1406562d0 FUN_1406562d0 body=106 status=ok
// SIG undefined FUN_1406562d0(void)

longlong FUN_1406562d0(undefined8 param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_res10 [3];
  
  local_res10[0] = 0;
  FUN_140656000(param_1,local_res10);
  lVar3 = local_res10[0];
  if (local_res10[0] != 0) {
    lVar4 = UTexture::GetPrivateStaticClass();
    lVar1 = *(longlong *)(lVar3 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 140656340 FUN_140656340 body=95 status=ok
// SIG undefined FUN_140656340(void)

void FUN_140656340(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  
  if (*(int *)(param_1 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_1;
  }
  uVar1 = UObject::GetPrivateStaticClass();
  lVar2 = FUN_141799410(uVar1,0,puVar3,0);
  *param_2 = lVar2;
  if (lVar2 == 0) {
    FUN_14065bb80(param_1,param_2);
  }
  return;
}



// FUNCTION 1406563a0 FUN_1406563a0 body=1417 status=ok
// SIG undefined FUN_1406563a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1406563a0(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  undefined1 uStack_187;
  undefined2 *local_180;
  uint local_178;
  uint local_174;
  undefined4 local_170;
  int local_168 [2];
  longlong *local_160;
  undefined8 local_158;
  void *local_150;
  longlong *local_148;
  undefined8 local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [128];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  puVar3 = (undefined8 *)FName::FName(&local_150,"GbxTest",1);
  plVar4 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar3);
  if (plVar4 == (longlong *)0x0) {
    return 0xffffffff;
  }
  puVar9 = &DAT_143f3eda8;
  local_170 = 0;
  local_138 = (longlong *)0x0;
  local_130 = 0;
  local_148 = (longlong *)0x0;
  local_140 = 0;
  local_128 = 0;
  local_120 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0xffffffff;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar11 = &DAT_143f3eda8;
  }
  else {
    puVar11 = (undefined2 *)*param_2;
  }
  FUN_140657cd0(puVar11,&local_138,&local_148,&local_128);
  local_188 = 0;
  uStack_187 = 0;
  puVar3 = (undefined8 *)FUN_14064e1a0(L"Plan",&local_128);
  if (puVar3 != (undefined8 *)0x0) {
    if (*(int *)(puVar3 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*puVar3;
    }
    uVar5 = UEnum::GetPrivateStaticClass();
    lVar6 = FUN_141799410(uVar5,0xffffffffffffffff,L"EGbxTestPlan",1);
    if (lVar6 != 0) {
      puVar3 = (undefined8 *)FName::FName(local_168,puVar11,1);
      iVar2 = UEnum::GetValueByName(lVar6,*puVar3,0);
      if (iVar2 != -1) {
        local_188 = (char)iVar2;
      }
    }
  }
  puVar3 = (undefined8 *)FUN_14064e1a0(L"Format",&local_128);
  if (puVar3 != (undefined8 *)0x0) {
    if (*(int *)(puVar3 + 1) != 0) {
      puVar9 = (undefined2 *)*puVar3;
    }
    uVar5 = UEnum::GetPrivateStaticClass();
    lVar6 = FUN_141799410(uVar5,0xffffffffffffffff,L"EGbxTestPlanOutput",1);
    if (lVar6 != 0) {
      puVar3 = (undefined8 *)FName::FName(local_168,puVar9,1);
      iVar2 = UEnum::GetValueByName(lVar6,*puVar3,0);
      if (iVar2 != -1) {
        uStack_187 = (char)iVar2;
      }
    }
  }
  puVar9 = (undefined2 *)0x0;
  local_160 = (longlong *)0x0;
  local_158 = 0;
  (**(code **)(*plVar4 + 0x88))(plVar4,&local_188,&local_160);
  iVar2 = 0;
  plVar7 = local_160 + (longlong)(int)local_158 * 2;
  local_180 = (undefined2 *)0x0;
  local_174 = 0;
  puVar11 = puVar9;
  puVar12 = puVar9;
  for (plVar4 = local_160; plVar4 != plVar7; plVar4 = plVar4 + 2) {
    iVar2 = (int)puVar9;
    local_178 = (3 - (uint)(iVar2 != 0)) + iVar2;
    if ((int)puVar12 < (int)local_178) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_180,puVar9);
      puVar12 = (undefined2 *)(ulonglong)local_174;
      puVar11 = local_180;
    }
    uVar1 = local_178;
    puVar9 = (undefined2 *)(ulonglong)local_178;
    *(undefined4 *)(puVar11 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0))) = 0xa000d;
    *(undefined2 *)((longlong)(puVar11 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0))) + 4) = 0;
    local_150 = (void *)*plVar4;
    local_168[0] = (int)plVar4[1] + -1;
    if ((int)plVar4[1] == 0) {
      local_168[0] = 0;
    }
    if (local_168[0] != 0) {
      lVar6 = (longlong)(int)local_178;
      local_178 = local_178 + (local_178 == 0) + local_168[0];
      if ((int)puVar12 < (int)local_178) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_180,puVar9);
        puVar12 = (undefined2 *)(ulonglong)local_174;
        puVar11 = local_180;
      }
      puVar9 = (undefined2 *)(ulonglong)local_178;
      lVar8 = (longlong)local_168[0];
      _guard_xfg_dispatch_icall_nop(puVar11 + (lVar6 - (ulonglong)(uVar1 != 0)),local_150,lVar8 * 2)
      ;
      (puVar11 + (lVar6 - (ulonglong)(uVar1 != 0)))[lVar8] = 0;
    }
    iVar2 = (int)puVar9;
  }
  lVar6 = -1;
  puVar3 = (undefined8 *)FUN_14064e1a0(L"Output",&local_128);
  if (puVar3 == (undefined8 *)0x0) goto LAB_1406567fe;
  local_178 = *(uint *)(puVar3 + 1);
  lVar8 = (longlong)(int)local_178;
  _Src = (void *)*puVar3;
  local_180 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
            (&local_180,(5 - (uint)(local_178 != 0)) + local_178,0);
  puVar9 = local_180;
  _guard_xfg_dispatch_icall_nop(local_180,_Src,lVar8 * 2);
  uVar1 = local_178;
  lVar8 = (longlong)(int)local_178;
  local_178 = (5 - (uint)(local_178 != 0)) + local_178;
  if ((int)local_174 < (int)local_178) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_180,uVar1);
    puVar9 = local_180;
  }
  puVar12 = &DAT_143f3eda8;
  if (local_178 != 0) {
    puVar12 = puVar9;
  }
  builtin_wcsncpy(puVar9 + (lVar8 - (ulonglong)(uVar1 != 0)),L".txt",5);
  puVar10 = &DAT_143f3eda8;
  if (((iVar2 == 0) || (puVar10 = puVar11, puVar11 != (undefined2 *)0x0)) &&
     (puVar12 != (undefined2 *)0x0)) {
    plVar4 = (longlong *)FUN_1415c3d50();
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,puVar12,0);
    if (plVar4 == (longlong *)0x0) goto LAB_1406567e4;
    do {
      lVar6 = lVar6 + 1;
    } while (puVar10[lVar6] != 0);
    TStringConversion<TStringConvert<wchar_t,char>,128>::
    TStringConversion<TStringConvert<wchar_t,char>,128>(local_d8,puVar10);
    (**(code **)(*plVar4 + 0x50))(plVar4,local_50,(longlong)(int)lVar6);
    if (local_58 != 0) {
      FMemory::Free();
    }
    (**(code **)(*plVar4 + 0xe8))(plVar4);
    (**(code **)*plVar4)(plVar4,1);
    local_170 = 0;
  }
  else {
LAB_1406567e4:
    local_170 = 0xfffffffe;
  }
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
LAB_1406567fe:
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free(puVar11);
  }
  plVar4 = local_160;
  for (iVar2 = (int)local_158; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_160 != (longlong *)0x0) {
    FMemory::Free(local_160);
  }
  local_e0 = 0;
  if (local_e8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(&local_128,0);
  if (local_108 != 0) {
    FMemory::Free();
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  plVar7 = local_148;
  plVar4 = local_148;
  for (iVar2 = (int)local_140; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (plVar7 != (longlong *)0x0) {
    FMemory::Free(plVar7);
  }
  plVar7 = local_138;
  plVar4 = local_138;
  for (iVar2 = (int)local_130; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (plVar7 != (longlong *)0x0) {
    FMemory::Free(plVar7);
  }
  return local_170;
}



// FUNCTION 140656930 FUN_140656930 body=77 status=ok
// SIG undefined FUN_140656930(void)

undefined8 * FUN_140656930(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140654d40();
  if (lVar1 != 0) {
    lVar1 = FUN_140654d40(param_1);
    *param_2 = *(undefined8 *)(lVar1 + 0x18);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 140656980 FUN_140656980 body=229 status=ok
// SIG undefined FUN_140656980(void)

void FUN_140656980(undefined8 param_1,char param_2)

{
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  if (param_2 == '\0') {
    local_28 = DAT_1469ea5b8;
    local_20 = DAT_1469ea5c0;
    local_18 = DAT_1469ea5c8;
  }
  else if (param_2 == '\x01') {
    local_28 = DAT_1469ea5d0;
    local_20 = DAT_1469ea5d8;
    local_18 = DAT_1469ea5e0;
  }
  else if (param_2 == '\x02') {
    local_28 = DAT_1469ea600;
    local_20 = DAT_1469ea608;
    local_18 = DAT_1469ea610;
  }
  else if (param_2 == '\x03') {
    local_28 = DAT_1469ea5e8;
    local_20 = DAT_1469ea5f0;
    local_18 = DAT_1469ea5f8;
  }
  else {
    local_28 = DAT_1469eae28;
    local_20 = DAT_1469eae30;
    local_18 = DAT_1469eae38;
  }
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_1406587a0(param_1,&local_28);
  return;
}



// FUNCTION 140656a70 FUN_140656a70 body=107 status=ok
// SIG undefined FUN_140656a70(void)

void FUN_140656a70(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    plVar1 = (longlong *)FUN_140651180();
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140656a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x570))(plVar1);
      return;
    }
  }
  local_28 = DAT_1469ea570;
  local_20 = DAT_1469ea578;
  local_18 = DAT_1469ea580;
  if (DAT_1469ea580 != 0) {
    LOCK();
    *(int *)(DAT_1469ea580 + 8) = *(int *)(DAT_1469ea580 + 8) + 1;
    UNLOCK();
  }
  FUN_1406587a0(param_1,&local_28);
  return;
}



// FUNCTION 140656ae0 FUN_140656ae0 body=114 status=ok
// SIG undefined FUN_140656ae0(void)

void FUN_140656ae0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x30);
  for (iVar2 = *(int *)(param_1 + 0x38); iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_14217f430(plVar1 + 2);
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 6;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x30,0);
  }
  *(undefined1 *)(param_1 + 0x52) = 1;
  return;
}



// FUNCTION 140656b60 FUN_140656b60 body=30 status=ok
// SIG undefined FUN_140656b60(void)

undefined4 FUN_140656b60(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140651180();
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 0x698);
  }
  return 0;
}



// FUNCTION 140656b80 FUN_140656b80 body=413 status=ok
// SIG undefined FUN_140656b80(void)

void FUN_140656b80(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *local_48;
  longlong *local_40;
  undefined **local_38;
  undefined1 local_30;
  longlong local_28;
  undefined4 local_20;
  undefined8 local_18;
  
  lVar3 = operator_new(0x48);
  plVar8 = (longlong *)0x0;
  plVar4 = plVar8;
  if (lVar3 != 0) {
    local_20 = *(undefined4 *)(param_1 + 0x138);
    uVar6 = *param_2;
    local_38 = &PTR__scalar_deleting_destructor__143f73ca8;
    local_30 = 0;
    local_28 = param_1;
    FGCObject::Init(&local_38);
    local_38 = &PTR__scalar_deleting_destructor__144027750;
    local_18 = uVar6;
    plVar4 = (longlong *)FUN_14063ddd0(lVar3,&local_38);
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar7 = plVar8;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar4;
    plVar7 = plVar5;
  }
  plVar5 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = plVar8;
  }
  local_48 = plVar4;
  local_40 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    if ((*plVar5 != 0) && (plVar5[1] != 0)) {
      piVar1 = (int *)(plVar5[1] + 8);
      LOCK();
      iVar2 = *piVar1;
      if (iVar2 == 0) {
        *piVar1 = 0;
        iVar2 = 0;
      }
      UNLOCK();
      if (0 < iVar2) goto LAB_140656cf0;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar4;
    plVar4 = (longlong *)plVar5[1];
    if (plVar7 != plVar4) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar4 = (longlong *)plVar5[1];
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      plVar5[1] = (longlong)plVar7;
    }
    if (plVar7 != (longlong *)0x0) {
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
  }
LAB_140656cf0:
  uVar6 = FUN_141649d10();
  FUN_1416473a0(uVar6,&local_48);
  return;
}



// FUNCTION 140656d20 FUN_140656d20 body=545 status=ok
// SIG undefined FUN_140656d20(void)

void FUN_140656d20(longlong param_1,int param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  
  if (param_2 - 2U < 2) {
    *(undefined8 *)(param_1 + 0x68) = param_4;
    if (param_2 == 3) {
      lVar12 = param_3[1];
      lVar4 = *param_3;
      *(undefined4 *)(param_1 + 0x78) = 0;
      if (*(int *)(param_1 + 0x7c) != (int)((lVar12 - lVar4) / 0x18)) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                  (param_1 + 0x70);
      }
      plVar2 = (longlong *)param_3[1];
      for (param_3 = (longlong *)*param_3; param_3 != plVar2; param_3 = param_3 + 3) {
        if (*param_3 != 0) {
          iVar1 = *(int *)(param_1 + 0x78);
          *(int *)(param_1 + 0x78) = iVar1 + 1;
          if (*(int *)(param_1 + 0x7c) < iVar1 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeGrow(param_1 + 0x70,iVar1);
          }
          uVar5 = *(undefined4 *)((longlong)param_3 + 4);
          lVar12 = param_3[1];
          uVar6 = *(undefined4 *)((longlong)param_3 + 0xc);
          puVar10 = (undefined4 *)((longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x70));
          *puVar10 = (int)*param_3;
          puVar10[1] = uVar5;
          puVar10[2] = (int)lVar12;
          puVar10[3] = uVar6;
          *(longlong *)(puVar10 + 4) = param_3[2];
          puVar10[6] = 1;
        }
      }
    }
  }
  else {
    plVar2 = (longlong *)param_3[1];
    param_3 = (longlong *)*param_3;
    if (param_3 != plVar2) {
      uVar13 = 0;
      do {
        if (*param_3 != 0) {
          plVar3 = *(longlong **)(param_1 + 0x70);
          iVar1 = *(int *)(param_1 + 0x78);
          lVar12 = (longlong)iVar1 * 0x20;
          for (plVar9 = plVar3; plVar9 != plVar3 + (longlong)iVar1 * 4; plVar9 = plVar9 + 4) {
            if (((*plVar9 == *param_3) && (plVar9[1] == param_3[1])) && (plVar9[2] == param_3[2])) {
              iVar8 = (int)((longlong)plVar9 - (longlong)plVar3 >> 5);
              if (iVar8 != -1) {
                lVar12 = (longlong)iVar8;
                iVar1 = (int)plVar3[lVar12 * 4 + 3];
                if (param_2 == 0) {
                  *(int *)(plVar3 + lVar12 * 4 + 3) = iVar1 + 1;
                }
                else if ((0 < iVar1) &&
                        (*(int *)(plVar3 + lVar12 * 4 + 3) = iVar1 + -1, iVar1 + -1 == 0)) {
                  iVar1 = *(int *)(param_1 + 0x78);
                  iVar11 = (iVar1 - iVar8) + -1;
                  if (iVar11 != 0) {
                    _guard_xfg_dispatch_icall_nop
                              ((void *)(*(longlong *)(param_1 + 0x70) + lVar12 * 0x20),
                               (void *)((longlong)(iVar8 + 1) * 0x20 + *(longlong *)(param_1 + 0x70)
                                       ),(longlong)iVar11 << 5);
                    iVar1 = *(int *)(param_1 + 0x78);
                  }
                  *(int *)(param_1 + 0x78) = iVar1 + -1;
                  TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(param_1 + 0x70);
                }
                goto LAB_140656df4;
              }
              break;
            }
          }
          if (param_2 == 0) {
            *(int *)(param_1 + 0x78) = iVar1 + 1;
            if (*(int *)(param_1 + 0x7c) < iVar1 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
              ::ResizeGrow(param_1 + 0x70,iVar1,plVar3 + (longlong)iVar1 * 4,plVar3,uVar13);
            }
            lVar4 = *(longlong *)(param_1 + 0x70);
            uVar5 = *(undefined4 *)((longlong)param_3 + 4);
            lVar7 = param_3[1];
            uVar6 = *(undefined4 *)((longlong)param_3 + 0xc);
            puVar10 = (undefined4 *)(lVar12 + lVar4);
            *puVar10 = (int)*param_3;
            puVar10[1] = uVar5;
            puVar10[2] = (int)lVar7;
            puVar10[3] = uVar6;
            *(longlong *)(lVar12 + 0x10 + lVar4) = param_3[2];
            *(undefined4 *)(lVar12 + 0x18 + lVar4) = 1;
          }
        }
LAB_140656df4:
        param_3 = param_3 + 3;
      } while (param_3 != plVar2);
    }
  }
  return;
}



// FUNCTION 140656f60 FUN_140656f60 body=867 status=ok
// SIG undefined FUN_140656f60(void)

void FUN_140656f60(longlong param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined8 *puVar5;
  LARGE_INTEGER LVar6;
  undefined4 uVar7;
  void *pvVar8;
  undefined2 *puVar9;
  longlong lVar10;
  void *pvVar11;
  LARGE_INTEGER local_res10;
  longlong local_78 [2];
  undefined8 local_68;
  void *local_60;
  int local_58;
  undefined4 local_54;
  LARGE_INTEGER local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  
  if ((*(int *)(param_2 + 0x10) == 0) || (*(int *)(param_2 + 0x10) == 1)) {
    bVar1 = *param_2;
    if (bVar1 < 2) {
      FAutomationTestBase::AddInfo(param_1,param_2 + 0x18,0);
      FUN_14065e3b0(param_1 + 0x110);
      return;
    }
    if (bVar1 != 2) {
      if (1 < (byte)(bVar1 - 3)) {
        return;
      }
      FAutomationTestBase::AddError(param_1,param_2 + 0x18,0);
      FUN_14065e3b0(param_1 + 0x110);
      *(undefined1 *)(param_1 + 0x180) = 1;
      return;
    }
    FAutomationTestBase::AddWarning(param_1,param_2 + 0x18,0);
    FUN_14065e3b0(param_1 + 0x110);
    return;
  }
  if (*(int *)(param_2 + 0x20) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = *(undefined2 **)(param_2 + 0x18);
  }
  FString::PrintfImpl(local_78,L"(%s) %s",*(undefined8 *)(param_2 + 8),puVar9);
  bVar1 = *param_2;
  if (bVar1 == 0) {
    FAutomationTestBase::AddInfo(param_1,local_78,0);
    local_res10.QuadPart = 0x15f;
    LVar6.QuadPart = 0x15f;
    if (*(char *)(param_1 + 0x130) != '\0') {
      QueryPerformanceCounter(&local_res10);
      *(double *)(param_1 + 0x128) = (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0;
    }
  }
  else {
    if (bVar1 == 1) {
      FAutomationTestBase::AddInfo(param_1,local_78,0);
      local_res10.QuadPart = 0xcd;
    }
    else {
      if (bVar1 != 2) {
        if (1 < (byte)(bVar1 - 3)) {
          if (local_78[0] == 0) {
            return;
          }
          FMemory::Free();
          return;
        }
        FAutomationTestBase::AddError(param_1,local_78,0);
        local_res10.QuadPart = 0x164;
        LVar6.QuadPart = 0x164;
        FUN_14065e3b0(param_1 + 0x110);
        *(undefined1 *)(param_1 + 0x180) = 1;
        goto LAB_1406570d2;
      }
      FAutomationTestBase::AddWarning(param_1,local_78,0);
      local_res10.QuadPart = 0x163;
    }
    LVar6 = local_res10;
    FUN_14065e3b0(param_1 + 0x110);
  }
LAB_1406570d2:
  pvVar8 = (void *)0x0;
  local_68 = *(undefined8 *)(param_1 + 0x68);
  pvVar3 = *(void **)(param_1 + 0x70);
  local_58 = *(int *)(param_1 + 0x78);
  lVar10 = (longlong)local_58;
  local_60 = (void *)0x0;
  uVar7 = 0;
  if (local_58 == 0) {
    local_54 = 0;
  }
  else {
    TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(&local_60,local_58,0);
    _guard_xfg_dispatch_icall_nop(local_60,pvVar3,lVar10 << 5);
  }
  pvVar3 = *(void **)(param_2 + 8);
  local_40 = *(int *)(param_2 + 0x10);
  lVar10 = (longlong)local_40;
  local_48 = (void *)0x0;
  local_50 = LVar6;
  if (local_40 == 0) {
    local_3c = 0;
    pvVar11 = pvVar8;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
    pvVar11 = local_48;
    _guard_xfg_dispatch_icall_nop(local_48,pvVar3,lVar10 * 2);
  }
  local_30 = *(int *)(param_2 + 0x20);
  lVar10 = (longlong)local_30;
  pvVar3 = *(void **)(param_2 + 0x18);
  local_38 = (void *)0x0;
  if (local_30 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
    pvVar8 = local_38;
    _guard_xfg_dispatch_icall_nop(local_38,pvVar3,lVar10 * 2);
    pvVar11 = local_48;
    uVar7 = local_2c;
  }
  iVar4 = local_30;
  iVar2 = *(int *)(param_1 + 0x88);
  *(int *)(param_1 + 0x88) = iVar2 + 1;
  if (*(int *)(param_1 + 0x8c) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x80,iVar2);
  }
  puVar5 = (undefined8 *)((longlong)iVar2 * 0x40 + *(longlong *)(param_1 + 0x80));
  *puVar5 = local_68;
  puVar5[1] = local_60;
  *(int *)(puVar5 + 2) = local_58;
  *(undefined4 *)((longlong)puVar5 + 0x14) = local_54;
  *(LARGE_INTEGER *)(puVar5 + 3) = local_50;
  puVar5[4] = pvVar11;
  *(int *)(puVar5 + 5) = local_40;
  *(undefined4 *)((longlong)puVar5 + 0x2c) = local_3c;
  puVar5[6] = pvVar8;
  *(undefined4 *)((longlong)puVar5 + 0x3c) = uVar7;
  *(int *)(puVar5 + 7) = iVar4;
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406572d0 FUN_1406572d0 body=615 status=ok
// SIG undefined FUN_1406572d0(void)

void FUN_1406572d0(longlong param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  longlong *local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong *local_28;
  
  if (*(char *)(param_1 + 0x181) == param_2) {
    return;
  }
  if (*(char *)(param_1 + 0x181) != '\0') {
    FUN_140483870(&DAT_1464b57d0,param_1);
    *(char *)(param_1 + 0x181) = param_2;
    return;
  }
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  local_28 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = param_1;
    *plVar3 = (longlong)&DAT_143f3ed00;
    plVar3[2] = (longlong)FUN_140657540;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[4] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3ed48;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464b57d0,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
    iVar2 = DAT_1464b57d8;
    lVar4 = (longlong)DAT_1464b57d8;
    DAT_1464b57d8 = DAT_1464b57d8 + 1;
    if (DAT_1464b57dc < DAT_1464b57d8) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464b57d0,iVar2);
    }
    puVar5 = (undefined8 *)(lVar4 * 0x10 + DAT_1464b57d0);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  plVar3 = (longlong *)operator_new(0x30);
  plVar8 = (longlong *)0x0;
  local_48 = plVar8;
  if (plVar3 != (longlong *)0x0) {
    uStack_30 = *(undefined4 *)(param_1 + 0x138);
    plVar3[1] = 0;
    plVar3[2] = 0;
    local_38._0_4_ = (undefined4)param_1;
    local_38._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
    plVar3[3] = 0;
    *plVar3 = (longlong)&PTR_FUN_1440277f8;
    *(undefined4 *)(plVar3 + 4) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar3 + 0x24) = local_38._4_4_;
    *(undefined4 *)(plVar3 + 5) = uStack_30;
    *(undefined4 *)((longlong)plVar3 + 0x2c) = uStack_2c;
    local_48 = plVar3;
    local_38 = param_1;
  }
  plVar6 = (longlong *)operator_new(0x18);
  plVar3 = plVar8;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
    plVar6[2] = (longlong)local_48;
    plVar3 = plVar6;
  }
  plVar6 = local_48 + 1;
  if (local_48 == (longlong *)0x0) {
    plVar6 = plVar8;
  }
  local_40 = plVar3;
  if (plVar6 != (longlong *)0x0) {
    if ((*plVar6 != 0) && (plVar6[1] != 0)) {
      piVar1 = (int *)(plVar6[1] + 8);
      LOCK();
      iVar2 = *piVar1;
      if (iVar2 == 0) {
        *piVar1 = 0;
        iVar2 = 0;
      }
      UNLOCK();
      if (0 < iVar2) goto LAB_1406574fc;
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    *plVar6 = (longlong)local_48;
    plVar8 = (longlong *)plVar6[1];
    if (plVar3 != plVar8) {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)plVar6[1];
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      plVar6[1] = (longlong)plVar3;
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar3 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
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
  }
LAB_1406574fc:
  uVar7 = FUN_141649d10();
  FUN_1416473a0(uVar7,&local_48);
  *(char *)(param_1 + 0x181) = param_2;
  return;
}



// FUNCTION 140657540 FUN_140657540 body=814 status=ok
// SIG undefined FUN_140657540(void)

void FUN_140657540(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xb0);
  if (cVar3 != '\0') {
    return;
  }
  if (DAT_1468c21d9 == '\0') {
    return;
  }
  plVar5 = (longlong *)operator_new(0x38);
  plVar9 = (longlong *)0x0;
  local_58 = plVar9;
  if (plVar5 != (longlong *)0x0) {
    uStack_30 = *(undefined4 *)(param_1 + 0x138);
    plVar5[1] = 0;
    plVar5[2] = 0;
    local_38._0_4_ = (undefined4)param_1;
    local_38._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
    local_28 = 2;
    plVar5[3] = 0;
    *(undefined4 *)(plVar5 + 4) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar5 + 0x24) = local_38._4_4_;
    *(undefined4 *)(plVar5 + 5) = uStack_30;
    *(undefined4 *)((longlong)plVar5 + 0x2c) = uStack_2c;
    *plVar5 = (longlong)&PTR_FUN_144027788;
    plVar5[6] = CONCAT44(uStack_24,2);
    local_58 = plVar5;
    local_38 = param_1;
  }
  plVar6 = (longlong *)operator_new(0x18);
  plVar5 = plVar9;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
    plVar6[2] = (longlong)local_58;
    plVar5 = plVar6;
  }
  plVar6 = local_58 + 1;
  if (local_58 == (longlong *)0x0) {
    plVar6 = plVar9;
  }
  local_50 = plVar5;
  if (plVar6 != (longlong *)0x0) {
    if ((*plVar6 != 0) && (plVar6[1] != 0)) {
      piVar1 = (int *)(plVar6[1] + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) goto LAB_1406576d8;
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    *plVar6 = (longlong)local_58;
    plVar8 = (longlong *)plVar6[1];
    if (plVar5 != plVar8) {
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)plVar6[1];
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      plVar6[1] = (longlong)plVar5;
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar5 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
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
LAB_1406576d8:
  uVar7 = FUN_141649d10();
  FUN_1416473a0(uVar7,&local_58);
  plVar6 = (longlong *)operator_new(0x38);
  plVar5 = plVar9;
  if (plVar6 != (longlong *)0x0) {
    uStack_30 = *(undefined4 *)(param_1 + 0x138);
    local_38 = param_1;
    FWeakObjectPtr::operator=(&local_28,param_2);
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (longlong)&PTR_FUN_144027808;
    plVar6[3] = 0;
    *(undefined4 *)(plVar6 + 4) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar6 + 0x24) = local_38._4_4_;
    *(undefined4 *)(plVar6 + 5) = uStack_30;
    *(undefined4 *)((longlong)plVar6 + 0x2c) = uStack_2c;
    *(undefined4 *)(plVar6 + 6) = local_28;
    *(undefined4 *)((longlong)plVar6 + 0x34) = uStack_24;
    plVar5 = plVar6;
  }
  plVar8 = (longlong *)operator_new(0x18);
  plVar6 = plVar9;
  if (plVar8 != (longlong *)0x0) {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_143f3f2e0;
    plVar8[2] = (longlong)plVar5;
    plVar6 = plVar8;
  }
  plVar8 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar8 = plVar9;
  }
  local_48 = plVar5;
  local_40 = plVar6;
  if (plVar8 != (longlong *)0x0) {
    if ((*plVar8 != 0) && (plVar8[1] != 0)) {
      piVar1 = (int *)(plVar8[1] + 8);
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 0;
        iVar4 = 0;
      }
      UNLOCK();
      if (0 < iVar4) goto LAB_14065782e;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *plVar8 = (longlong)plVar5;
    plVar5 = (longlong *)plVar8[1];
    if (plVar6 != plVar5) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)plVar8[1];
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      plVar8[1] = (longlong)plVar6;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
LAB_14065782e:
  uVar7 = FUN_141649d10();
  FUN_1416473a0(uVar7,&local_48);
  return;
}



// FUNCTION 140657870 FUN_140657870 body=727 status=ok
// SIG undefined FUN_140657870(void)

void FUN_140657870(longlong param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4,
                  undefined4 param_5,char param_6,undefined1 param_7)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined1 local_res8 [8];
  undefined2 *local_a8;
  int local_a0;
  undefined2 *local_98;
  int local_90;
  undefined1 local_88 [8];
  undefined2 *local_80;
  longlong local_70;
  longlong local_60;
  
  if (*(char *)(param_1 + 0x130) == '\0') {
    FUN_1417006f0(&local_a8);
    cVar1 = FUN_140655ac0(param_1,&local_a8);
    if (cVar1 == '\0') {
      puVar4 = (undefined8 *)FName::FName(local_res8,"GbxTest",1);
      plVar5 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar4);
      if (plVar5 != (longlong *)0x0) {
        puVar7 = &DAT_143f3eda8;
        if (local_a0 != 0) {
          puVar7 = local_a8;
        }
        FUN_1406505a0(param_1,&local_98);
        puVar9 = &DAT_143f3eda8;
        if (local_90 != 0) {
          puVar9 = local_98;
        }
        FUN_14063dfa0(local_88,4,puVar9,puVar7);
        if (local_98 != (undefined2 *)0x0) {
          FMemory::Free(local_98);
        }
        (**(code **)(*plVar5 + 0xc0))(plVar5,local_88);
        if (local_60 != 0) {
          FMemory::Free();
        }
        if (local_70 != 0) {
          FMemory::Free();
        }
        if (local_80 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
    }
    else {
      iVar3 = (int)param_3[1];
      if (iVar3 == 0) {
        FUN_14064c850(param_1,&local_a8,param_7);
        FUN_14064cd70(param_1,0,param_4,param_5,1,1);
      }
      else {
        if (param_6 != '\0') {
          FUN_14064c850(param_1,&local_a8,param_7);
          iVar3 = (int)param_3[1];
        }
        iVar3 = iVar3 + -1;
        if (-1 < iVar3) {
          lVar8 = 0;
          do {
            if (param_6 == '\0') {
              FUN_14064c850(param_1,&local_a8,param_7);
            }
            if ((param_6 == '\0') || (lVar8 == 0)) {
              uVar6 = 1;
            }
            else {
              uVar6 = 0;
            }
            if ((param_6 == '\0') || (lVar8 == iVar3)) {
              uVar2 = 1;
            }
            else {
              uVar2 = 0;
            }
            FUN_14064cd70(param_1,*(undefined8 *)(*param_3 + lVar8 * 8),param_4,param_5,uVar6,uVar2)
            ;
            lVar8 = lVar8 + 1;
          } while (lVar8 <= iVar3);
        }
      }
    }
  }
  else {
    puVar4 = (undefined8 *)FName::FName(local_res8,"GbxTest",1);
    plVar5 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar4);
    if (plVar5 == (longlong *)0x0) {
      return;
    }
    if (*(int *)(param_2 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*param_2;
    }
    FUN_1406505a0(param_1,&local_98);
    puVar9 = &DAT_143f3eda8;
    if (local_90 != 0) {
      puVar9 = local_98;
    }
    FUN_14063dfa0(local_88,5,puVar9,puVar7);
    if (local_98 != (undefined2 *)0x0) {
      FMemory::Free(local_98);
    }
    (**(code **)(*plVar5 + 0xc0))(plVar5,local_88);
    if (local_60 != 0) {
      FMemory::Free();
    }
    local_a8 = local_80;
    if (local_70 != 0) {
      FMemory::Free();
      local_a8 = local_80;
    }
  }
  if (local_a8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140657b60 FUN_140657b60 body=69 status=ok
// SIG undefined FUN_140657b60(void)

void FUN_140657b60(longlong param_1)

{
  LARGE_INTEGER local_res8 [4];
  
  if (*(char *)(param_1 + 0x130) != '\0') {
    QueryPerformanceCounter(local_res8);
    *(double *)(param_1 + 0x128) = (double)local_res8[0].QuadPart * DAT_1468b02f8 + 16777216.0;
  }
  return;
}



// FUNCTION 140657bc0 FUN_140657bc0 body=151 status=ok
// SIG undefined FUN_140657bc0(void)

void FUN_140657bc0(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = 0;
  iVar2 = (int)param_2[1] + -1;
  if (-1 < iVar2) {
    lVar3 = 0;
    do {
      FUN_14064cd70(param_1,*(undefined8 *)(*param_2 + lVar3 * 8),param_3,param_4,iVar1 == 0,
                    iVar1 == iVar2);
      iVar1 = iVar1 + 1;
      lVar3 = lVar3 + 1;
    } while (lVar3 <= iVar2);
  }
  return;
}



// FUNCTION 140657c80 FUN_140657c80 body=80 status=ok
// SIG undefined FUN_140657c80(void)

undefined8 * FUN_140657c80(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140651180();
  if (lVar1 != 0) {
    lVar1 = FUN_140651180(param_1);
    *param_2 = *(undefined8 *)(lVar1 + 0x688);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 140657cd0 FUN_140657cd0 body=393 status=ok
// SIG undefined FUN_140657cd0(void)

void FUN_140657cd0(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res18 [8];
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  FUN_14043ebd0();
  iVar4 = (int)param_3[1] + -1;
  if (-1 < iVar4) {
    lVar6 = (longlong)(int)param_3[1] << 4;
    lVar5 = (longlong)iVar4 << 4;
    do {
      local_58 = (longlong *)0x0;
      local_50 = 0;
      iVar1 = FUN_141594550(*param_3 + lVar5,&local_58,&DAT_144024f48,1);
      if (iVar1 == 2) {
        local_48 = local_58;
        local_40 = FUN_14159cee0(local_58 + 2,local_38,0);
        TSet<TTuple<FString,TArray<physx::PxBase_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TArray<physx::PxBase_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,TArray<physx::PxBase_*,FDefaultAllocator>_&&>_>
                  (param_4,local_res18,&local_48,0);
        if (local_38[0] != 0) {
          FMemory::Free();
        }
        if (*(longlong *)(lVar5 + *param_3) != 0) {
          FMemory::Free();
        }
        iVar1 = (int)param_3[1];
        iVar2 = (iVar1 - iVar4) + -1;
        if (iVar2 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar5 + *param_3),(void *)(lVar6 + *param_3),(longlong)iVar2 << 4);
          iVar1 = (int)param_3[1];
        }
        *(int *)(param_3 + 1) = iVar1 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_3);
      }
      plVar3 = local_58;
      for (iVar1 = (int)local_50; iVar1 != 0; iVar1 = iVar1 + -1) {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 2;
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free(local_58);
      }
      lVar6 = lVar6 + -0x10;
      lVar5 = lVar5 + -0x10;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  return;
}



// FUNCTION 140657e60 FUN_140657e60 body=43 status=ok
// SIG undefined FUN_140657e60(void)

void FUN_140657e60(longlong param_1)

{
  FUN_1406421a0(param_1 + 0xb0);
  return;
}



// FUNCTION 140657e90 FUN_140657e90 body=30 status=ok
// SIG undefined FUN_140657e90(void)

void FUN_140657e90(longlong param_1)

{
  FUN_1406421a0(param_1 + 0xb0);
  return;
}



// FUNCTION 140657eb0 FUN_140657eb0 body=98 status=ok
// SIG undefined FUN_140657eb0(void)

void FUN_140657eb0(undefined4 *param_1)

{
  longlong lVar1;
  undefined4 *local_38;
  undefined1 *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined1 local_10 [8];
  
  lVar1 = FUN_140650cb0();
  if (lVar1 != 0) {
    local_28 = *param_1;
    uStack_24 = param_1[1];
    uStack_20 = param_1[2];
    uStack_1c = param_1[3];
    local_18 = *(undefined8 *)(param_1 + 4);
    local_38 = &local_28;
    local_30 = local_10;
    FUN_1406422c0(lVar1 + 0x88,1,&local_38,0);
  }
  return;
}



// FUNCTION 140657f20 FUN_140657f20 body=57 status=ok
// SIG undefined FUN_140657f20(void)

void FUN_140657f20(longlong param_1,longlong param_2)

{
  longlong local_18;
  longlong local_10;
  
  local_10 = param_2 + 0x18;
  local_18 = param_2;
  FUN_1406422c0(param_1 + 0x88,1,&local_18,0);
  return;
}



// FUNCTION 140657f60 FUN_140657f60 body=62 status=ok
// SIG undefined FUN_140657f60(void)

void FUN_140657f60(void)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar1 = FUN_140650cb0();
  if (lVar1 != 0) {
    local_18 = 0;
    uStack_10 = 0;
    FUN_1406422c0(lVar1 + 0x88,2,&local_18,0);
  }
  return;
}



// FUNCTION 140657fa0 FUN_140657fa0 body=424 status=ok
// SIG undefined FUN_140657fa0(void)

/* WARNING: Removing unreachable block (ram,0x0001406580f5) */

void FUN_140657fa0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 *local_58;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 local_30;
  
  lVar5 = *param_1;
  local_58 = (undefined2 *)0x0;
  lVar8 = (longlong)(int)param_1[1] * 0x58 + lVar5;
  local_50 = 0;
  local_38 = (undefined2 *)0x0;
  local_30 = 0;
  uVar2 = local_48;
  uVar3 = local_40;
  if (lVar5 != lVar8) {
    do {
      local_40 = uVar3;
      local_48 = uVar2;
      FName::ToString(lVar5,&local_58);
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar1);
      }
      puVar7 = local_58;
      puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_2);
      *puVar4 = 0;
      lVar9 = (longlong)(int)local_50;
      *(int *)(puVar4 + 1) = (int)local_50;
      if ((int)local_50 == 0) {
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar4,local_50 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar4,puVar7,lVar9 * 2);
      }
      FName::ToString(lVar5 + 0x10,&local_58);
      FName::ToString(lVar5 + 0x18,&local_38);
      puVar7 = &DAT_143f3eda8;
      if ((int)local_30 != 0) {
        puVar7 = local_38;
      }
      puVar6 = &DAT_143f3eda8;
      if ((int)local_50 != 0) {
        puVar6 = local_58;
      }
      FString::PrintfImpl(&local_48,L"%s.%s",puVar6,puVar7);
      iVar1 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar1);
      }
      puVar4 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_3);
      *puVar4 = 0;
      *puVar4 = local_48;
      local_48 = 0;
      uVar2 = local_48;
      *(undefined4 *)(puVar4 + 1) = (undefined4)local_40;
      *(undefined4 *)((longlong)puVar4 + 0xc) = local_40._4_4_;
      local_40 = 0;
      uVar3 = local_40;
      local_40 = 0;
      local_48 = 0;
      lVar5 = lVar5 + 0x58;
    } while (lVar5 != lVar8);
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_58 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140658150 PostLoad body=5 status=ok
// SIG undefined PostLoad(void)

void ULandscapeSplineControlPoint::PostLoad(longlong param_1)

{
  if ((*(uint *)(*(longlong *)(param_1 + 0x10) + 0xb4) >> 10 & 1) != 0) {
    FUN_14175be70(param_1,0,0,0,0);
  }
  return;
}



// FUNCTION 140658160 Prepend body=221 status=ok
// SIG Matrix2x4<float> * Prepend(Matrix2x4<float> * this, Matrix2x4<float> * param_1)

/* public: class Scaleform::Render::Matrix2x4<float> & __ptr64 __cdecl
   Scaleform::Render::Matrix2x4<float>::Prepend(class Scaleform::Render::Matrix2x4<float> const &
   __ptr64) __ptr64 */

Matrix2x4<float> * __thiscall
Scaleform::Render::Matrix2x4<float>::Prepend(Matrix2x4<float> *this,Matrix2x4<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
                    /* 0x658160  332
                       ?Prepend@?$Matrix2x4@M@Render@Scaleform@@QEAAAEAV123@AEBV123@@Z */
  fVar1 = *(float *)this;
  fVar2 = *(float *)(this + 4);
  fVar3 = *(float *)(this + 0x14);
  fVar4 = *(float *)(this + 0x10);
  *(float *)this = fVar1 * *(float *)param_1 + fVar2 * *(float *)(param_1 + 0x10);
  *(float *)(this + 0x10) = fVar3 * *(float *)(param_1 + 0x10) + fVar4 * *(float *)param_1;
  *(float *)(this + 4) = fVar2 * *(float *)(param_1 + 0x14) + fVar1 * *(float *)(param_1 + 4);
  fVar5 = *(float *)(param_1 + 4);
  fVar6 = *(float *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(float *)(this + 0x14) = fVar4 * fVar5 + fVar3 * fVar6;
  *(float *)(this + 0xc) =
       fVar2 * *(float *)(param_1 + 0x1c) + fVar1 * *(float *)(param_1 + 0xc) +
       *(float *)(this + 0xc);
  *(float *)(this + 0x1c) =
       fVar4 * *(float *)(param_1 + 0xc) + fVar3 * *(float *)(param_1 + 0x1c) +
       *(float *)(this + 0x1c);
  return this;
}



// FUNCTION 140658240 FUN_140658240 body=107 status=ok
// SIG undefined FUN_140658240(void)

void FUN_140658240(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    plVar1 = (longlong *)FUN_140651180();
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140658264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x578))(plVar1);
      return;
    }
  }
  local_28 = DAT_1469ea558;
  local_20 = DAT_1469ea560;
  local_18 = DAT_1469ea568;
  if (DAT_1469ea568 != 0) {
    LOCK();
    *(int *)(DAT_1469ea568 + 8) = *(int *)(DAT_1469ea568 + 8) + 1;
    UNLOCK();
  }
  FUN_1406587a0(param_1,&local_28);
  return;
}



// FUNCTION 1406582b0 FUN_1406582b0 body=421 status=ok
// SIG undefined FUN_1406582b0(void)

void FUN_1406582b0(longlong param_1,char *param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  if ((*(float *)(param_2 + 0x30) <= *(float *)(param_1 + 0x3c)) && (param_2[0x38] == '\0')) {
    param_2[0x38] = *(float *)(param_2 + 0x34) <= *(float *)(param_1 + 0x3c);
    cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x20);
    if (cVar4 == '\0') {
      if (*(char *)(param_1 + 0x48) == '\0') {
        *(undefined1 *)(param_1 + 0x48) = 1;
      }
      param_2[0x38] = '\x01';
    }
    else {
      plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x20);
      if (*param_2 == '\x04') {
        fVar8 = *(float *)(param_1 + 0x3c);
        fVar1 = *(float *)(param_2 + 0x30);
        fVar2 = *(float *)(param_2 + 0x34);
        fVar7 = fVar8 - fVar1;
        if (*(float *)(param_1 + 0x38) <= fVar8 - fVar1) {
          fVar7 = *(float *)(param_1 + 0x38);
        }
        if ((fVar2 < fVar8) && (fVar7 = fVar7 - (fVar8 - fVar2), fVar7 <= 0.0)) {
          fVar7 = 0.0;
        }
        fVar8 = *(float *)(param_2 + 0x2c);
        if (fVar1 < fVar2) {
          fVar8 = fVar8 * (fVar7 / (fVar2 - fVar1));
        }
        local_58 = *(undefined8 *)(param_2 + 8);
        local_50 = *(undefined8 *)(param_2 + 0x10);
        local_48 = *(longlong *)(param_2 + 0x18);
        if (local_48 != 0) {
          LOCK();
          *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
          UNLOCK();
        }
        lVar3 = *plVar6;
        uVar5 = FKey::IsGamepadKey();
        (**(code **)(lVar3 + 0xd08))(plVar6,&local_58,fVar8,fVar7,1,uVar5);
      }
      else {
        DAT_146af29d4 = 1;
        local_40 = *(undefined8 *)(param_2 + 8);
        local_38 = *(undefined8 *)(param_2 + 0x10);
        local_30 = *(longlong *)(param_2 + 0x18);
        cVar4 = *param_2;
        if (local_30 != 0) {
          LOCK();
          *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
          UNLOCK();
        }
        lVar3 = *plVar6;
        uVar5 = FKey::IsGamepadKey();
        (**(code **)(lVar3 + 0xcf0))(plVar6,&local_40,cVar4,*(undefined4 *)(param_2 + 0x28),uVar5);
        DAT_146af29d4 = 0;
      }
    }
  }
  return;
}



// FUNCTION 140658460 FUN_140658460 body=396 status=ok
// SIG undefined FUN_140658460(void)

void FUN_140658460(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  int local_res8;
  
  lVar8 = *(longlong *)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x30);
  lVar11 = (longlong)iVar5 * 0x40 + lVar8;
  if (lVar8 != lVar11) {
    do {
      FUN_1406582b0(param_1,lVar8);
      lVar8 = lVar8 + 0x40;
    } while (lVar8 != lVar11);
    iVar5 = *(int *)(param_1 + 0x30);
  }
  if (iVar5 != 0) {
    iVar7 = 0;
    bVar13 = *(char *)(*(longlong *)(param_1 + 0x28) + 0x38) == '\0';
    local_res8 = 0;
    lVar8 = 0;
    lVar11 = (longlong)iVar5;
    iVar5 = 0;
    do {
      lVar8 = lVar8 + 1;
      iVar12 = iVar5 + 1;
      if (lVar8 < lVar11) {
        pcVar6 = (char *)(*(longlong *)(param_1 + 0x28) + 0x38 + lVar8 * 0x40);
        do {
          if (bVar13 != (*pcVar6 == '\0')) break;
          iVar12 = iVar12 + 1;
          lVar8 = lVar8 + 1;
          pcVar6 = pcVar6 + 0x40;
        } while (lVar8 < lVar11);
      }
      iVar9 = iVar12 - iVar5;
      if (bVar13 == false) {
        if (iVar9 != 0) {
          plVar10 = (longlong *)((longlong)iVar5 * 0x40 + 0x18 + *(longlong *)(param_1 + 0x28));
          do {
            plVar3 = (longlong *)*plVar10;
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
            plVar10 = plVar10 + 8;
            iVar9 = iVar9 + -1;
            iVar7 = local_res8;
          } while (iVar9 != 0);
        }
      }
      else {
        if (iVar7 != iVar5) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar7 * 0x40 + *(longlong *)(param_1 + 0x28)),
                     (void *)((longlong)iVar5 * 0x40 + *(longlong *)(param_1 + 0x28)),
                     (longlong)iVar9 << 6);
        }
        local_res8 = iVar7 + iVar9;
        iVar7 = local_res8;
      }
      bVar13 = (bool)(bVar13 ^ 1);
      iVar5 = iVar12;
    } while (lVar8 < lVar11);
    *(int *)(param_1 + 0x30) = iVar7;
  }
  return;
}



// FUNCTION 1406585f0 FUN_1406585f0 body=95 status=ok
// SIG undefined FUN_1406585f0(void)

void FUN_1406585f0(undefined4 *param_1)

{
  longlong lVar1;
  undefined4 *local_38;
  undefined1 *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined1 local_10 [8];
  
  lVar1 = FUN_140650cb0();
  if (lVar1 != 0) {
    local_28 = *param_1;
    uStack_24 = param_1[1];
    uStack_20 = param_1[2];
    uStack_1c = param_1[3];
    local_18 = *(undefined8 *)(param_1 + 4);
    local_38 = &local_28;
    local_30 = local_10;
    FUN_1406422c0(lVar1 + 0x88,0,&local_38,0);
  }
  return;
}



// FUNCTION 140658650 FUN_140658650 body=54 status=ok
// SIG undefined FUN_140658650(void)

void FUN_140658650(longlong param_1,longlong param_2)

{
  longlong local_18;
  longlong local_10;
  
  local_10 = param_2 + 0x18;
  local_18 = param_2;
  FUN_1406422c0(param_1 + 0x88,0,&local_18,0);
  return;
}



// FUNCTION 140658690 FUN_140658690 body=263 status=ok
// SIG undefined FUN_140658690(void)

void FUN_140658690(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  
  lVar6 = FUN_14270bb10();
  if (lVar6 != 0) {
    plVar7 = (longlong *)FUN_1422312c0(param_1);
    if (plVar7 != (longlong *)0x0) {
      lVar8 = FUN_142e4e4a0();
      if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
          lVar8 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        lVar8 = (**(code **)(*plVar7 + 0x3c0))(plVar7);
        if (lVar8 != 0) {
          local_28 = *param_2;
          uVar4 = *(undefined4 *)(lVar6 + 0x108);
          local_20 = param_2[1];
          local_18 = param_2[2];
          if (local_18 != 0) {
            LOCK();
            *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
            UNLOCK();
          }
          FUN_142ef09f0(lVar8,&local_28,param_3,uVar4);
        }
      }
    }
  }
  plVar7 = (longlong *)param_2[2];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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



// FUNCTION 1406587a0 FUN_1406587a0 body=216 status=ok
// SIG undefined FUN_1406587a0(void)

void FUN_1406587a0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  param_1 = param_1 + 0x28;
  cVar6 = FWeakObjectPtr::IsValid(param_1);
  if (cVar6 != '\0') {
    local_38 = *param_2;
    local_30 = param_2[1];
    local_28 = param_2[2];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    uVar7 = FWeakObjectPtr::Get(param_1);
    FUN_140658690(uVar7,&local_38,0);
    local_20 = *param_2;
    local_18 = param_2[1];
    local_10 = param_2[2];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    uVar7 = FWeakObjectPtr::Get(param_1);
    FUN_140658690(uVar7,&local_20,1);
  }
  plVar4 = (longlong *)param_2[2];
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



// FUNCTION 140658880 FUN_140658880 body=84 status=ok
// SIG undefined FUN_140658880(void)

void FUN_140658880(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar1 = FUN_140650cb0();
  if (lVar1 != 0) {
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    local_18 = 0;
    uStack_10 = 0;
    FUN_1406422c0(lVar1 + 0x88,2,&local_18,*(undefined8 *)(lVar2 + 0x18));
  }
  return;
}



// FUNCTION 1406588e0 FUN_1406588e0 body=216 status=ok
// SIG undefined FUN_1406588e0(void)

ulonglong FUN_1406588e0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  
  iVar2 = (int)param_1[1];
  iVar1 = (int)param_2[1];
  uVar3 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  if ((int)uVar3 != 0) {
    uVar3 = (ulonglong)(iVar1 - 1);
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    if (((int)uVar3 != 0) && (uVar3 = 0, DAT_1468b6148 != 0)) {
      puVar4 = &DAT_143f3eda8;
      if (iVar1 == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = (undefined2 *)*param_2;
      }
      if (iVar2 != 0) {
        puVar4 = (undefined2 *)*param_1;
      }
      iVar2 = FConfigCacheIni::GetArray(DAT_1468b6148,puVar4,puVar5,param_3,&DAT_1468e2360);
      if (*param_1 != 0) {
        FMemory::Free();
      }
      if (*param_2 != 0) {
        FMemory::Free();
      }
      return (ulonglong)(0 < iVar2);
    }
  }
  if (*param_1 != 0) {
    uVar3 = FMemory::Free();
  }
  if (*param_2 != 0) {
    uVar3 = FMemory::Free();
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1406589c0 FUN_1406589c0 body=5 status=ok
// SIG undefined FUN_1406589c0(void)

undefined1 FUN_1406589c0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}



// FUNCTION 1406589d0 FUN_1406589d0 body=129 status=ok
// SIG undefined FUN_1406589d0(void)

void * FUN_1406589d0(undefined8 param_1,void *param_2,ulonglong param_3,ulonglong param_4,
                    size_t param_5)

{
  void *_Dst;
  
  if (param_4 == param_3) {
    return param_2;
  }
  _Dst = _aligned_malloc(param_4,param_5);
  if (_Dst != (void *)0x0) {
    if (param_3 < param_4) {
      param_4 = param_3;
    }
    _guard_xfg_dispatch_icall_nop(_Dst,param_2,param_4);
    _aligned_free(param_2);
  }
  return _Dst;
}



// FUNCTION 140658a60 FUN_140658a60 body=145 status=ok
// SIG undefined FUN_140658a60(void)

ulonglong FUN_140658a60(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  
  if (param_2 != 0) {
    FString::operator=(param_2 + 0x98,param_3);
    if (*(int *)(param_2 + 0xa0) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = *(undefined2 **)(param_2 + 0x98);
    }
    lVar2 = -1;
    do {
      lVar1 = lVar2 + 1;
      lVar2 = lVar2 + 1;
    } while (puVar4[lVar1] != 0);
    uVar3 = FUN_14063b3e0(puVar4,puVar4 + lVar2,param_2 + 0x28,param_1,0,1);
    return uVar3;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140658b00 FUN_140658b00 body=74 status=ok
// SIG undefined FUN_140658b00(void)

void FUN_140658b00(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  lVar2 = -1;
  do {
    lVar1 = lVar2 + 1;
    lVar2 = lVar2 + 1;
  } while (puVar3[lVar1] != 0);
  FUN_14063b3e0(puVar3,puVar3 + lVar2,0,param_1,0x10,1);
  return;
}



// FUNCTION 140658b50 FUN_140658b50 body=571 status=ok
// SIG undefined FUN_140658b50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_140658b50(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  size_t _Count;
  undefined2 *puVar7;
  longlong lVar8;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined2 *local_c0;
  undefined4 local_b8;
  undefined1 local_a8 [8];
  wchar_t local_a0;
  undefined6 uStack_9e;
  undefined8 local_90;
  ulonglong local_88;
  undefined2 local_80;
  undefined6 uStack_7e;
  longlong local_70;
  ulonglong uStack_68;
  undefined2 local_60;
  undefined6 uStack_5e;
  undefined8 local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  puVar4 = &DAT_143f3eda8;
  if (*(int *)(param_4 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_4;
  }
  if (*(int *)(param_3 + 1) != 0) {
    puVar4 = (undefined2 *)*param_3;
  }
  lVar6 = -1;
  local_90 = 0;
  local_a0 = L'\0';
  lVar8 = -1;
  local_70 = 0;
  uStack_68 = 7;
  local_80 = 0;
  local_88 = 7;
  do {
    lVar8 = lVar8 + 1;
  } while (puVar4[lVar8] != 0);
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::assign(&local_80);
  local_50 = 0;
  uStack_48 = 7;
  local_60 = 0;
  do {
    lVar6 = lVar6 + 1;
  } while (puVar7[lVar6] != 0);
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::assign
            (&local_60,puVar7,lVar6);
  puVar4 = &local_80;
  if (7 < uStack_68) {
    puVar4 = (undefined2 *)CONCAT62(uStack_7e,local_80);
  }
  puVar7 = &local_80;
  if (7 < uStack_68) {
    puVar7 = (undefined2 *)CONCAT62(uStack_7e,local_80);
  }
  local_b8 = 0;
  local_c0 = &local_60;
  local_c8 = param_2;
  FUN_14063b4e0(local_a8,&local_a0,puVar7,puVar4 + local_70);
  if (7 < uStack_48) {
    lVar8 = CONCAT62(uStack_5e,local_60);
    uVar5 = uStack_48 * 2 + 2;
    lVar6 = lVar8;
    if (0xfff < uVar5) {
      lVar6 = *(longlong *)(lVar8 + -8);
      uVar5 = uStack_48 * 2 + 0x29;
      if (0x1f < (lVar8 - lVar6) - 8U) goto LAB_140658cc0;
    }
    FMemory::operator_delete(lVar6,uVar5);
  }
  if (7 < uStack_68) {
    lVar8 = CONCAT62(uStack_7e,local_80);
    uVar5 = uStack_68 * 2 + 2;
    lVar6 = lVar8;
    if (0xfff < uVar5) {
      lVar6 = *(longlong *)(lVar8 + -8);
      uVar5 = uStack_68 * 2 + 0x29;
      if (0x1f < (lVar8 - lVar6) - 8U) {
LAB_140658cc0:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar6,uVar5);
  }
  _Count = (size_t)(int)local_90;
  pwVar2 = (wchar_t *)CONCAT62(uStack_9e,local_a0);
  *param_1 = 0;
  pwVar3 = &local_a0;
  if (7 < local_88) {
    pwVar3 = pwVar2;
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  iVar1 = (int)local_90 + 1;
  if ((int)local_90 == 0) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 1) = iVar1;
  if (0 < iVar1) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    pwVar2 = (wchar_t *)CONCAT62(uStack_9e,local_a0);
    if (0 < *(int *)(param_1 + 1)) {
      pwVar2 = (wchar_t *)*param_1;
      wcsncpy(pwVar2,pwVar3,_Count);
      pwVar2[_Count] = L'\0';
      pwVar2 = (wchar_t *)CONCAT62(uStack_9e,local_a0);
    }
  }
  if (7 < local_88) {
    uVar5 = local_88 * 2 + 2;
    pwVar3 = pwVar2;
    if (0xfff < uVar5) {
      pwVar3 = *(wchar_t **)(pwVar2 + -4);
      uVar5 = local_88 * 2 + 0x29;
      if (0x1f < (ulonglong)((longlong)pwVar2 + (-8 - (longlong)pwVar3))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(pwVar3,uVar5);
  }
  return param_1;
}



// FUNCTION 140658d90 FUN_140658d90 body=145 status=ok
// SIG undefined FUN_140658d90(void)

ulonglong FUN_140658d90(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  
  if (param_2 != 0) {
    FString::operator=(param_2 + 0x98,param_3);
    if (*(int *)(param_2 + 0xa0) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = *(undefined2 **)(param_2 + 0x98);
    }
    lVar2 = -1;
    do {
      lVar1 = lVar2 + 1;
      lVar2 = lVar2 + 1;
    } while (puVar4[lVar1] != 0);
    uVar3 = FUN_14063b8d0(puVar4,puVar4 + lVar2,param_2 + 0x28,param_1,0,puVar4);
    return uVar3;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140658e30 FUN_140658e30 body=1220 status=ok
// SIG undefined FUN_140658e30(void)

void FUN_140658e30(longlong param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 local_res8 [8];
  
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xa8);
  if (cVar3 != '\0') {
    lVar4 = FWeakObjectPtr::Get(param_1 + 0xa8);
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar5 != (longlong *)0x0) {
      plVar5[1] = param_1;
      *plVar5 = (longlong)&DAT_143f3ed00;
      plVar5[2] = (longlong)FUN_140656f60;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar6;
      *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    uVar9 = 0;
    uVar10 = uVar9;
    if (plVar5 != (longlong *)0x0) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar4 + 0x70,1);
      puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
      iVar1 = *(int *)(lVar4 + 0x78);
      uVar10 = *puVar7;
      *(int *)(lVar4 + 0x78) = iVar1 + 1;
      if (*(int *)(lVar4 + 0x7c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar4 + 0x70,iVar1);
      }
      lVar6 = *(longlong *)(lVar4 + 0x70);
      *(longlong **)(lVar6 + (longlong)iVar1 * 0x10) = plVar5;
      *(undefined4 *)(lVar6 + 8 + (longlong)iVar1 * 0x10) = 3;
    }
    *(undefined8 *)(param_1 + 0x140) = uVar10;
    plVar5 = (longlong *)(lVar4 + 0x88);
    plVar8 = (longlong *)FMemory::Realloc(0,0x30);
    uVar10 = uVar9;
    if (plVar8 != (longlong *)0x0) {
      plVar8[1] = param_1;
      *plVar8 = (longlong)&PTR_GetPoolName_144027858;
      plVar8[2] = (longlong)FUN_140656d20;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar8[4] = lVar6;
      *plVar8 = (longlong)&PTR_GetPoolName_1440278a0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar5,1);
      puVar7 = (undefined8 *)(**(code **)(*plVar8 + 0x20))(plVar8,local_res8);
      iVar1 = *(int *)(lVar4 + 0x90);
      uVar10 = *puVar7;
      *(int *)(lVar4 + 0x90) = iVar1 + 1;
      if (*(int *)(lVar4 + 0x94) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar5,iVar1);
      }
      lVar6 = *plVar5;
      *(longlong **)(lVar6 + (longlong)iVar1 * 0x10) = plVar8;
      *(undefined4 *)(lVar6 + 8 + (longlong)iVar1 * 0x10) = 3;
    }
    *(undefined8 *)(param_1 + 0x148) = uVar10;
    if (lVar4 != 0) {
      lVar6 = UViewport::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        plVar5 = (longlong *)(lVar4 + 0xb0);
        plVar8 = (longlong *)FMemory::Realloc(0,0x30);
        uVar10 = uVar9;
        if (plVar8 != (longlong *)0x0) {
          plVar8[1] = param_1;
          *plVar8 = (longlong)&PTR_GetPoolName_1440278e8;
          plVar8[2] = (longlong)FUN_140657870;
          lVar6 = FDelegateHandle::GenerateNewID();
          plVar8[4] = lVar6;
          *plVar8 = (longlong)&PTR_GetPoolName_144027930;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar5,1);
          puVar7 = (undefined8 *)(**(code **)(*plVar8 + 0x20))(plVar8,local_res8);
          iVar1 = *(int *)(lVar4 + 0xb8);
          uVar10 = *puVar7;
          *(int *)(lVar4 + 0xb8) = iVar1 + 1;
          if (*(int *)(lVar4 + 0xbc) < iVar1 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar5,iVar1);
          }
          puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar5);
          *puVar7 = plVar8;
          *(undefined4 *)(puVar7 + 1) = 3;
        }
        *(undefined8 *)(param_1 + 0x150) = uVar10;
        puVar7 = (undefined8 *)FUN_140634b70(lVar4 + 0xe0,local_res8,param_1,FUN_140657b60);
        plVar5 = (longlong *)(lVar4 + 200);
        *(undefined8 *)(param_1 + 0x158) = *puVar7;
        plVar8 = (longlong *)FMemory::Realloc(0,0x30);
        uVar10 = uVar9;
        if (plVar8 != (longlong *)0x0) {
          plVar8[1] = param_1;
          *plVar8 = (longlong)&DAT_143f3ed00;
          plVar8[2] = (longlong)FUN_140657bc0;
          lVar6 = FDelegateHandle::GenerateNewID();
          plVar8[4] = lVar6;
          *plVar8 = (longlong)&PTR_GetPoolName_143f3ed48;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar5,1);
          puVar7 = (undefined8 *)(**(code **)(*plVar8 + 0x20))(plVar8,local_res8);
          iVar1 = *(int *)(lVar4 + 0xd0);
          uVar10 = *puVar7;
          *(int *)(lVar4 + 0xd0) = iVar1 + 1;
          if (*(int *)(lVar4 + 0xd4) < iVar1 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar5,iVar1);
          }
          puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar5);
          *puVar7 = plVar8;
          *(undefined4 *)(puVar7 + 1) = 3;
        }
        *(undefined8 *)(param_1 + 0x160) = uVar10;
        puVar7 = (undefined8 *)FUN_140634b70(lVar4 + 0xf8,local_res8,param_1,&LAB_140657c60);
        plVar5 = (longlong *)(lVar4 + 0x110);
        *(undefined8 *)(param_1 + 0x168) = *puVar7;
        plVar8 = (longlong *)FMemory::Realloc(0,0x30);
        uVar10 = uVar9;
        if (plVar8 != (longlong *)0x0) {
          plVar8[1] = param_1;
          *plVar8 = (longlong)&DAT_143f3ed00;
          plVar8[2] = (longlong)FUN_1406572d0;
          lVar6 = FDelegateHandle::GenerateNewID();
          plVar8[4] = lVar6;
          *plVar8 = (longlong)&PTR_GetPoolName_143f3ed48;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar5,1);
          puVar7 = (undefined8 *)(**(code **)(*plVar8 + 0x20))(plVar8,local_res8);
          iVar1 = *(int *)(lVar4 + 0x118);
          uVar10 = *puVar7;
          *(int *)(lVar4 + 0x118) = iVar1 + 1;
          if (*(int *)(lVar4 + 0x11c) < iVar1 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar5,iVar1);
          }
          puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar5);
          *puVar7 = plVar8;
          *(undefined4 *)(puVar7 + 1) = 3;
        }
        *(undefined8 *)(param_1 + 0x170) = uVar10;
        plVar8 = (longlong *)(lVar4 + 0x128);
        plVar5 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar5 != (longlong *)0x0) {
          plVar5[1] = param_1;
          *plVar5 = (longlong)&DAT_143f3ed00;
          plVar5[2] = (longlong)FUN_140656b80;
          lVar6 = FDelegateHandle::GenerateNewID();
          plVar5[4] = lVar6;
          *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
          puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
          iVar1 = *(int *)(lVar4 + 0x130);
          uVar9 = *puVar7;
          *(int *)(lVar4 + 0x130) = iVar1 + 1;
          if (*(int *)(lVar4 + 0x134) < iVar1 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar1);
          }
          puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar8);
          *puVar7 = plVar5;
          *(undefined4 *)(puVar7 + 1) = 3;
        }
        *(undefined8 *)(param_1 + 0x178) = uVar9;
      }
    }
  }
  return;
}



// FUNCTION 140659300 FUN_140659300 body=539 status=ok
// SIG undefined FUN_140659300(void)

void FUN_140659300(longlong *param_1)

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
  undefined8 *puVar11;
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
      uVar12 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
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
      uVar8 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_14065943f;
        uVar8 = puVar13[lVar5 + 1];
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
LAB_14065943f:
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
        puVar11 = (undefined8 *)((longlong)iStack_1c * 0x88 + *param_1);
        uVar8 = (int)((ulonglong)*puVar11 >> 0x20) + (int)*puVar11 & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar11 + 0x84) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar11 + 0x10) =
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



// FUNCTION 140659520 Rehash body=530 status=ok
// SIG undefined Rehash(void)

void TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Rehash(longlong *param_1)

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
        if (bVar4) goto LAB_14065965f;
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
LAB_14065965f:
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
        uVar8 = (int)((ulonglong)*puVar13 >> 0x20) + (int)*puVar13 & (int)*plVar2 - 1U;
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



// FUNCTION 140659740 FUN_140659740 body=284 status=ok
// SIG undefined FUN_140659740(void)

undefined8 FUN_140659740(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar6 = (longlong)(int)param_1[9] - 1;
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  iVar5 = *(int *)((longlong)plVar7 +
                  ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) & uVar6) * 4);
  if (iVar5 != -1) {
    lVar2 = *param_1;
    do {
      lVar3 = (longlong)iVar5 * 0x88;
      if (*(longlong *)(lVar3 + lVar2) == param_2) {
        lVar8 = (longlong)iVar5 * 0x88;
        lVar3 = lVar8 + lVar2;
        uVar6 = (longlong)*(int *)(lVar3 + 0x84) & uVar6;
        piVar4 = (int *)((longlong)plVar7 + uVar6 * 4);
        iVar1 = *(int *)((longlong)plVar7 + uVar6 * 4);
        goto joined_r0x0001406597ef;
      }
      iVar5 = *(int *)(lVar3 + 0x80 + lVar2);
    } while (iVar5 != -1);
  }
  return 0;
joined_r0x0001406597ef:
  if (iVar1 == -1) {
LAB_140659820:
    FUN_140640250(*param_1 + 8 + lVar8);
    TSparseArray<TSetElement<TTuple<wchar_t,FCharacterList::FCharacterListEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar5,1);
    return 1;
  }
  if (iVar1 == iVar5) {
    *piVar4 = *(int *)(lVar3 + 0x80);
    goto LAB_140659820;
  }
  piVar4 = (int *)((longlong)iVar1 * 0x88 + 0x80 + lVar2);
  iVar1 = *piVar4;
  goto joined_r0x0001406597ef;
}



// FUNCTION 140659860 Remove body=299 status=ok
// SIG undefined Remove(void)

undefined8
TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Remove
          (longlong *param_1,longlong param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong *plVar6;
  int *piVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar8 = (longlong)(int)param_1[9] - 1;
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  iVar9 = *(int *)((longlong)plVar6 +
                  ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) & uVar8) * 4);
  if (iVar9 != -1) {
    lVar3 = *param_1;
    do {
      lVar10 = (longlong)iVar9;
      if (*(longlong *)(lVar3 + lVar10 * 0x10) == param_2) {
        piVar7 = (int *)((longlong)plVar6 +
                        ((longlong)*(int *)(lVar3 + 0xc + lVar10 * 0x10) & uVar8) * 4);
        iVar2 = *piVar7;
        goto joined_r0x0001406598eb;
      }
      iVar9 = *(int *)(lVar3 + 8 + lVar10 * 0x10);
    } while (iVar9 != -1);
  }
  return 0;
joined_r0x0001406598eb:
  if (iVar2 == -1) {
LAB_140659910:
    bVar4 = (byte)iVar9 & 0x1f;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = iVar9;
    }
    lVar3 = *param_1;
    uVar5 = 0xffffffff;
    *(undefined4 *)(lVar3 + lVar10 * 0x10) = 0xffffffff;
    if (0 < *(int *)((longlong)param_1 + 0x34)) {
      uVar5 = (undefined4)param_1[6];
    }
    *(undefined4 *)(lVar3 + 4 + lVar10 * 0x10) = uVar5;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
    *(int *)(param_1 + 6) = iVar9;
    plVar6 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar6 = param_1 + 2;
    }
    puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4
                     );
    *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
    return 1;
  }
  if (iVar2 == iVar9) {
    *piVar7 = *(int *)(lVar3 + lVar10 * 0x10 + 8);
    goto LAB_140659910;
  }
  piVar7 = (int *)(lVar3 + 8 + (longlong)iVar2 * 0x10);
  iVar2 = *piVar7;
  goto joined_r0x0001406598eb;
}



// FUNCTION 140659990 RemoveAtUninitialized body=181 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<wchar_t,FCharacterList::FCharacterListEntry>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
    lVar8 = uVar10 * 0x88;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x88 + *param_1) = iVar9;
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
      lVar8 = lVar8 + 0x88;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140659a50 FUN_140659a50 body=335 status=ok
// SIG undefined FUN_140659a50(void)

void FUN_140659a50(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  short *psVar5;
  undefined8 local_38;
  ulonglong local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  plVar1 = DAT_146856788;
  local_20 = 0xe;
  local_28 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"%m_[%d_%r_%c]",0x1c);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x78))(plVar1,local_18);
  if (*(int *)(puVar2 + 1) == 0) {
    psVar5 = &DAT_143f3eda8;
  }
  else {
    psVar5 = (short *)*puVar2;
  }
  local_38 = 0;
  local_30 = 0;
  if ((psVar5 != (short *)0x0) && (*psVar5 != 0)) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (psVar5[lVar4] != 0);
    uVar3 = (int)lVar4 + 1;
    local_30 = (ulonglong)uVar3;
    if (0 < (int)uVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    FGenericPlatformString::Memcpy(local_38,psVar5,(longlong)(int)uVar3 * 2);
  }
  FUN_14065b480(param_1,&local_38,0x42c80000,1,0,0x3f800000,0x800,0x800,0x49435000,0x49435000,
                0x49435000,&local_28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140659ba0 FUN_140659ba0 body=2783 status=ok
// SIG undefined FUN_140659ba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140659ba0(longlong param_1)

{
  void *pvVar1;
  char cVar2;
  DWORD DVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  longlong *plVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  byte bVar12;
  int iVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_408 [32];
  double local_3e8;
  double local_3e0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  double local_3c0;
  double local_3b8;
  double local_3b0;
  undefined4 local_3a8;
  char *local_398;
  uint local_390;
  int local_38c;
  char *local_388;
  undefined8 uStack_380;
  char *local_378;
  undefined8 uStack_370;
  ulonglong local_368;
  undefined8 uStack_360;
  int local_358;
  ulonglong local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  uint local_338;
  void *local_330;
  ulonglong local_328;
  char *local_320;
  longlong *local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined8 local_2ec;
  uint local_2e4;
  undefined1 local_2d8 [40];
  uint local_2b0;
  uint local_2ac;
  char *local_230;
  undefined1 local_228 [432];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_408;
  if ((float)*(int *)(param_1 + 0xb0) < *(float *)(param_1 + 200) ||
      (float)*(int *)(param_1 + 0xb0) == *(float *)(param_1 + 200)) {
    uVar4 = CONCAT71((int7)(local_78 >> 8),1);
  }
  else {
    lVar5 = FHdrImageWrapper::GetHeight(*(undefined8 *)(param_1 + 0x80));
    pcVar16 = (char *)0x0;
    local_320 = (char *)(lVar5 + 0x68);
    if (lVar5 == 0) {
      local_320 = pcVar16;
    }
    local_368 = 0xf9ffffffffffffff;
    local_318 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x1b8);
    local_2e4 = local_2e4 & 0xfffffff4 | 4;
    local_310 = 0xf9ffffffffffffff;
    local_308 = 0xffffffffffffffff;
    local_300 = 0;
    local_2ec = 0x3f800000;
    if (((local_318 != (longlong *)0x0) && (lVar6 = (**(code **)(*local_318 + 0x208))(), lVar6 != 0)
        ) && ((cVar2 = FUN_1415ad720(&DAT_1468e2448), cVar2 != '\0' ||
              ((DAT_1468c21ae == '\0' || (DVar3 = GetCurrentThreadId(), DVar3 == DAT_1468c21c0))))))
    {
      local_2e4 = local_2e4 | 8;
      uVar20 = FUN_1428ccc70(lVar6);
      local_2ec = CONCAT44(uVar20,(undefined4)local_2ec);
    }
    local_2e4 = local_2e4 | 8;
    local_2f8 = 0;
    local_2f0 = 0;
    FUN_142743490(local_2d8,&local_320);
    local_2ac = -(uint)(*(char *)(param_1 + 0x44) != '\0') & 0x1000 | local_2ac & 0x34c7efbe |
                0x8000000;
    uVar10 = 0x100;
    if (*(char *)(param_1 + 0x45) != '\0') {
      uVar10 = 0x4000100;
    }
    local_2b0 = uVar10 | local_2b0 & 0x7273914e;
    pcVar7 = (char *)operator_new(0x20);
    local_230 = pcVar16;
    if (pcVar7 != (char *)0x0) {
      local_3e8 = (double)CONCAT44(local_3e8._4_4_,0x3f800000);
      FLegacyScreenPercentageDriver::FLegacyScreenPercentageDriver(pcVar7,local_2d8,0x3f800000,0);
      *(undefined ***)pcVar7 = &PTR_FUN_1450e89a0;
      local_230 = pcVar7;
    }
    fVar21 = *(float *)(param_1 + 0x9c);
    iVar13 = *(int *)(param_1 + 0xb8);
    iVar11 = *(int *)(param_1 + 0xb4);
    fVar22 = *(float *)(param_1 + 0x90);
    pcVar7 = pcVar16;
    if (lVar5 != 0) {
      pcVar7 = (char *)(lVar5 + 0x68);
    }
    uVar20 = FSceneViewFamily::GetFeatureLevel(local_2d8);
    local_3d8._0_4_ = 0x3f800000;
    local_3e0._0_4_ = 0;
    local_3e8._0_4_ = uVar20;
    FUN_142899f20(local_228,pcVar7,0,*(undefined8 *)(param_1 + 0x20));
    FUN_1428aa700(local_228,0);
    local_3c8 = (double)CONCAT44(local_3c8._4_4_,*(undefined4 *)(param_1 + 0x38));
    local_3d0 = (double)CONCAT44(local_3d0._4_4_,1.0 / (fVar21 - fVar22));
    local_3d8 = (double)CONCAT44(local_3d8._4_4_,fVar21);
    local_3e0 = (double)CONCAT44(local_3e0._4_4_,iVar13);
    local_3e8 = (double)CONCAT44(local_3e8._4_4_,iVar11);
    FUN_140654dd0(*(undefined8 *)(param_1 + 0x20),local_2d8,(int)*(float *)(param_1 + 0xc4),
                  (int)*(float *)(param_1 + 200));
    local_388 = (char *)0x3f800000;
    uStack_380 = 0x3f8000003f800000;
    FUN_1428a0af0(local_228,&local_388);
    plVar8 = (longlong *)GetRendererModule();
    (**(code **)(*plVar8 + 0x40))(plVar8,local_228,local_2d8);
    FUN_1428aa700(local_228,0);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0xbc);
    FUN_14064e6c0(param_1 + 0xd0,&local_330);
    pvVar1 = local_330;
    fVar22 = 1.0 / *(float *)(param_1 + 0x38);
    iVar18 = *(int *)(param_1 + 0x30);
    fVar21 = (float)iVar13 * fVar22;
    iVar17 = (int)ROUND((fVar21 + fVar21) - 0.5) >> 1;
    fVar22 = (float)iVar11 * fVar22;
    local_368 = CONCAT44(local_368._4_4_,(int)ROUND((fVar22 + fVar22) - 0.5) >> 1);
    iVar13 = (int)local_328;
    if (iVar18 < 2) {
      local_388 = (char *)0x0;
      uStack_380 = CONCAT44(uStack_380._4_4_,iVar13);
      uVar19 = 0;
      if (iVar13 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_388,local_328 & 0xffffffff,0);
        pcVar16 = local_388;
        _guard_xfg_dispatch_icall_nop(local_388,pvVar1,(longlong)iVar13 * 2);
        uVar19 = (int)uStack_380;
      }
    }
    else {
      iVar11 = iVar13 + -1;
      if (iVar13 == 0) {
        iVar11 = 0;
      }
      if ((iVar18 != 0) || (iVar13 = 1, iVar11 == 0)) {
        iVar13 = 0;
      }
      pvVar1 = *(void **)(param_1 + 0x28);
      local_398 = (char *)0x0;
      local_390 = iVar18;
      if ((iVar18 == 0) && (iVar11 + iVar13 == 0)) {
        local_38c = 0;
        uVar10 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_398,iVar18 + iVar11 + iVar13,0);
        pcVar16 = local_398;
        _guard_xfg_dispatch_icall_nop(local_398,pvVar1,(longlong)iVar18 * 2);
        uVar10 = local_390;
      }
      pvVar1 = local_330;
      uVar19 = uVar10;
      if (iVar11 != 0) {
        local_390 = uVar10 + (uVar10 == 0) + iVar11;
        if (local_38c < (int)local_390) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_398,uVar10);
          pcVar16 = local_398;
        }
        uVar19 = local_390;
        pcVar7 = pcVar16 + ((longlong)(int)uVar10 - (ulonglong)(uVar10 != 0)) * 2;
        _guard_xfg_dispatch_icall_nop(pcVar7,pvVar1,(longlong)iVar11 * 2);
        (pcVar7 + (longlong)iVar11 * 2)[0] = '\0';
        (pcVar7 + (longlong)iVar11 * 2)[1] = '\0';
      }
    }
    lVar5 = FHdrImageWrapper::GetHeight(*(undefined8 *)(param_1 + 0x80));
    uVar4 = local_368;
    iVar13 = (int)local_368;
    uStack_33c = 0x467a0000;
    local_390 = (int)local_368 * iVar17;
    local_348 = 6;
    uStack_340 = CONCAT31(uStack_340._1_3_,1);
    local_338 = (local_338 >> 8 & 0xff) << 8;
    local_398 = (char *)0x0;
    local_38c = 0;
    if (((int)local_390 < 1) ||
       (TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_398), (int)local_390 < 1)) {
      if (local_398 != (char *)0x0) {
        FMemory::Free(local_398);
      }
      cVar2 = '\0';
    }
    else {
      uStack_360 = CONCAT44(uStack_33c,uStack_340);
      local_388 = (char *)0x0;
      local_368 = local_348;
      local_378 = (char *)0x0;
      local_358 = local_338;
      uStack_370._0_4_ = iVar13;
      uStack_370._4_4_ = iVar17;
      uStack_380._0_4_ = iVar13;
      uStack_380._4_4_ = iVar17;
      FUN_1428863d0(lVar5 + 0x68,&local_398,&local_368,&local_378);
      for (pcVar7 = local_398; pcVar7 != local_398 + (longlong)(int)local_390 * 4;
          pcVar7 = pcVar7 + 4) {
        pcVar7[3] = -1;
        if (((pcVar7[2] == -1) && (pcVar7[1] == '\0')) && (*pcVar7 == -1)) {
          *(undefined4 *)pcVar7 = DAT_1468b5ad4;
        }
      }
      local_388 = (char *)0x0;
      uStack_380 = 0;
      FImageUtils::CompressImageArray(uVar4 & 0xffffffff,iVar17,&local_398,&local_388);
      uStack_370 = CONCAT44(uStack_370._4_4_,(int)uStack_380);
      pcVar7 = "";
      if (uVar19 != 0) {
        pcVar7 = pcVar16;
      }
      local_378 = local_388;
      uVar9 = FUN_1415c3d50();
      cVar2 = FUN_14167ef40(&local_378,pcVar7,uVar9,0);
      if (local_388 != (char *)0x0) {
        FMemory::Free();
      }
      if (local_398 != (char *)0x0) {
        FMemory::Free();
      }
    }
    if (pcVar16 != (char *)0x0) {
      FMemory::Free(pcVar16);
    }
    if (cVar2 == '\0') {
      *(undefined1 *)(param_1 + 0x100) = 1;
    }
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
    fVar21 = (float)*(int *)(param_1 + 0xb4) + *(float *)(param_1 + 0xc4);
    *(float *)(param_1 + 0xc4) = fVar21;
    if (fVar21 < (float)*(int *)(param_1 + 0xac)) {
      fVar21 = *(float *)(param_1 + 200);
    }
    else {
      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
      *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
      fVar21 = (float)*(int *)(param_1 + 0xb8) + *(float *)(param_1 + 200);
      *(float *)(param_1 + 0xc4) = (float)*(int *)(param_1 + 0xa4);
      *(float *)(param_1 + 200) = fVar21;
    }
    if (fVar21 < (float)*(int *)(param_1 + 0xb0)) {
      bVar12 = 0;
    }
    else {
      local_378 = (char *)0x0;
      uStack_370 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_378,0);
      pcVar7 = local_378;
      FGenericPlatformString::Memcpy(local_378,L".txt");
      local_368 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x18);
      FName::ToString(&local_368,&local_388);
      pcVar16 = local_388;
      uVar10 = *(uint *)(param_1 + 0x30);
      if ((int)uVar10 < 2) {
        uVar4 = uStack_380 & 0xffffffff;
        iVar11 = uStack_380._4_4_;
        local_388 = (char *)0x0;
        uStack_380 = 0;
      }
      else {
        if ((int)uStack_380 == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = (int)uStack_380 + -1;
        }
        pcVar16 = (char *)0x0;
        if ((uVar10 != 0) || (pcVar7 = (char *)0x1, iVar13 == 0)) {
          pcVar7 = pcVar16;
        }
        pvVar1 = *(void **)(param_1 + 0x28);
        iVar11 = iVar13 + (int)pcVar7;
        local_398 = (char *)0x0;
        local_390 = uVar10;
        if ((uVar10 == 0) && (iVar11 == 0)) {
          local_38c = 0;
          uVar4 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_398,uVar10 + iVar11,0);
          pcVar16 = local_398;
          _guard_xfg_dispatch_icall_nop(local_398,pvVar1,(longlong)(int)uVar10 * 2);
          uVar4 = (ulonglong)local_390;
        }
        pcVar14 = local_388;
        pcVar7 = local_378;
        iVar11 = local_38c;
        if (iVar13 != 0) {
          iVar18 = (int)uVar4;
          local_390 = iVar13 + (uint)(iVar18 == 0) + iVar18;
          if (local_38c < (int)local_390) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_398,uVar4);
            pcVar16 = local_398;
          }
          iVar11 = local_38c;
          uVar4 = (ulonglong)local_390;
          pcVar7 = pcVar16 + ((longlong)iVar18 - (ulonglong)(iVar18 != 0)) * 2;
          _guard_xfg_dispatch_icall_nop(pcVar7,pcVar14,(longlong)iVar13 * 2);
          (pcVar7 + (longlong)iVar13 * 2)[0] = '\0';
          (pcVar7 + (longlong)iVar13 * 2)[1] = '\0';
          pcVar7 = local_378;
        }
      }
      pcVar15 = (char *)0x0;
      uVar19 = (uint)uVar4;
      pcVar14 = pcVar15;
      uVar10 = (uint)uStack_370;
      if (1 < (int)uVar19) {
        if ((uint)uStack_370 == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = (uint)uStack_370 - 1;
        }
        if ((uVar19 != 0) || (pcVar7 = (char *)0x1, iVar13 == 0)) {
          pcVar7 = pcVar15;
        }
        local_398 = pcVar16;
        local_390 = uVar19;
        local_38c = iVar11;
        if (iVar11 < (int)(iVar13 + (int)pcVar7 + uVar19)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_398);
          uVar4 = (ulonglong)local_390;
        }
        uVar10 = (uint)uVar4;
        pcVar14 = local_378;
        pcVar7 = local_398;
        pcVar16 = pcVar15;
        if (iVar13 != 0) {
          local_390 = iVar13 + (uint)(uVar10 == 0) + uVar10;
          if (local_38c < (int)local_390) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_398,uVar4,0);
          }
          uVar19 = local_390;
          pcVar7 = local_398;
          pcVar14 = local_398 + ((longlong)(int)uVar10 - (ulonglong)(uVar10 != 0)) * 2;
          _guard_xfg_dispatch_icall_nop(pcVar14,local_378,(longlong)iVar13 * 2);
          (pcVar14 + (longlong)iVar13 * 2)[0] = '\0';
          (pcVar14 + (longlong)iVar13 * 2)[1] = '\0';
          pcVar14 = local_378;
          uVar10 = uVar19;
        }
      }
      fVar21 = *(float *)(param_1 + 0x38);
      local_3a8 = GetChangeListNumberForPerfTesting();
      local_3d8 = (double)*(float *)(param_1 + 0x98);
      local_3b8 = (double)(*(float *)(param_1 + 0x9c) - *(float *)(param_1 + 0x90));
      local_3b0 = (double)fVar21;
      local_3c0 = (double)(*(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x8c));
      local_3c8 = (double)(*(float *)(param_1 + 0x94) - *(float *)(param_1 + 0x88));
      local_3e0 = (double)*(float *)(param_1 + 0x94);
      local_3d0 = (double)*(float *)(param_1 + 0x9c);
      local_3e8 = (double)*(float *)(param_1 + 0x90);
      FString::PrintfImpl(&local_378,
                          L"Min Corner [ %f, %f, %f]\r\nMax Corner [%f, %f, %f]\r\nWidth = %f\r\nHeight = %f\r\nDepth = %f\r\nDensity = %f\r\nBuildNumber = %d"
                          ,(double)*(float *)(param_1 + 0x88),(double)*(float *)(param_1 + 0x8c));
      pcVar15 = "";
      if (uVar10 != 0) {
        pcVar15 = pcVar7;
      }
      uVar9 = FUN_1415c3d50();
      local_3e8 = (double)((ulonglong)local_3e8 & 0xffffffff00000000);
      cVar2 = FUN_14167efa0(&local_378,pcVar15,0,uVar9);
      if (local_378 != (char *)0x0) {
        FMemory::Free();
      }
      if (pcVar7 != (char *)0x0) {
        FMemory::Free(pcVar7);
      }
      if (pcVar16 != (char *)0x0) {
        FMemory::Free(pcVar16);
      }
      if (local_388 != (char *)0x0) {
        FMemory::Free();
      }
      if (pcVar14 != (char *)0x0) {
        FMemory::Free(pcVar14);
      }
      if (cVar2 == '\0') {
        *(undefined1 *)(param_1 + 0x100) = 1;
      }
      bVar12 = 1;
    }
    if (local_330 != (void *)0x0) {
      FMemory::Free();
    }
    FUN_14289d030(local_228);
    FUN_142745e10(local_2d8);
    uVar4 = (ulonglong)bVar12;
  }
  return uVar4;
}



// FUNCTION 14065a680 FUN_14065a680 body=812 status=ok
// SIG undefined FUN_14065a680(void)

void FUN_14065a680(longlong param_1,undefined1 param_2,void **param_3,longlong *param_4)

{
  undefined2 *puVar1;
  void *pvVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  void *pvVar11;
  void *pvVar12;
  void *local_80;
  int local_78;
  int local_74;
  undefined1 local_70 [8];
  longlong local_68 [2];
  longlong local_58 [3];
  
  iVar7 = *(int *)(param_1 + 0xa8);
  if ((iVar7 != 0) && (iVar7 != 1)) {
    pvVar2 = *(void **)(param_1 + 0xa0);
    pvVar12 = (void *)0x0;
    iVar8 = 0;
    local_80 = (void *)0x0;
    local_78 = iVar7;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,iVar7 + 1,0);
    pvVar11 = local_80;
    _guard_xfg_dispatch_icall_nop(local_80,pvVar2,(longlong)iVar7 * 2);
    iVar7 = local_78;
    lVar9 = (longlong)local_78;
    local_78 = (2 - (uint)(local_78 != 0)) + local_78;
    if (local_74 < local_78) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,iVar7);
      pvVar11 = local_80;
    }
    puVar1 = (undefined2 *)((longlong)pvVar11 + (lVar9 - (ulonglong)(iVar7 != 0)) * 2);
    *puVar1 = 0x2e;
    puVar1[1] = 0;
    iVar7 = *(int *)(param_3 + 1);
    if (local_78 < 2) {
      pvVar2 = *param_3;
      local_80 = (void *)0x0;
      local_78 = iVar7;
      if (iVar7 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,iVar7,0);
        pvVar12 = local_80;
        _guard_xfg_dispatch_icall_nop(local_80,pvVar2,(longlong)iVar7 * 2);
        iVar7 = local_78;
        iVar8 = local_74;
      }
    }
    else {
      iVar8 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar8 = 0;
      }
      if ((local_78 != 0) || (iVar7 = 1, iVar8 == 0)) {
        iVar7 = 0;
      }
      iVar7 = iVar7 + iVar8 + local_78;
      local_80 = pvVar11;
      if (local_74 < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_80,iVar7);
      }
      iVar5 = local_78;
      pvVar2 = *param_3;
      pvVar12 = local_80;
      iVar7 = local_78;
      if (iVar8 != 0) {
        lVar9 = (longlong)local_78;
        local_78 = iVar8 + (uint)(local_78 == 0) + local_78;
        if (local_74 < local_78) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,iVar5);
        }
        iVar7 = local_78;
        pvVar12 = local_80;
        pvVar11 = (void *)((longlong)local_80 + (lVar9 - (ulonglong)(iVar5 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar11,pvVar2,(longlong)iVar8 * 2);
        *(undefined2 *)((longlong)iVar8 * 2 + (longlong)pvVar11) = 0;
      }
      pvVar11 = (void *)0x0;
      iVar8 = local_74;
    }
    if (param_3 == &local_80) {
      if (pvVar12 != (void *)0x0) {
        FMemory::Free(pvVar12);
      }
    }
    else {
      if (*param_3 != (void *)0x0) {
        FMemory::Free();
      }
      *param_3 = pvVar12;
      *(int *)(param_3 + 1) = iVar7;
      *(int *)((longlong)param_3 + 0xc) = iVar8;
    }
    if (pvVar11 != (void *)0x0) {
      FMemory::Free(pvVar11);
    }
  }
  local_70[0] = param_2;
  FString::FString(local_68,param_3);
  FString::FString(local_58,param_4);
  bVar4 = false;
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
  iVar7 = *(int *)(param_1 + 0x84);
  iVar8 = *(int *)(param_1 + 0x78) + -1;
  lVar9 = (longlong)iVar8;
  if (-1 < iVar8) {
    lVar10 = lVar9 << 4;
    bVar4 = false;
    do {
      if (((*(int *)(lVar10 + 8 + *(longlong *)(param_1 + 0x70)) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + *(longlong *)(param_1 + 0x70)),
          plVar3 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar3 + 0x40))(plVar3,local_70), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar10 = lVar10 + -0x10;
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
    iVar7 = *(int *)(param_1 + 0x84);
  }
  *(int *)(param_1 + 0x84) = iVar7 + -1;
  if (bVar4) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x70,0);
  }
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  if (*param_3 != (void *)0x0) {
    FMemory::Free();
  }
  if (*param_4 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14065a9b0 FUN_14065a9b0 body=159 status=ok
// SIG undefined FUN_14065a9b0(void)

void FUN_14065a9b0(undefined1 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  lVar1 = FUN_140650cb0();
  if (lVar1 != 0) {
    uVar2 = FString::FString(local_28,param_3);
    uVar3 = FString::FString(local_18,param_2);
    FUN_14065a680(lVar1,param_1,uVar3,uVar2);
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  if (*param_3 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14065aa50 FUN_14065aa50 body=413 status=ok
// SIG undefined FUN_14065aa50(void)

void FUN_14065aa50(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  void *_Src;
  void *_Src_00;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined2 *puVar9;
  void *local_68;
  ulonglong local_60;
  void *local_58;
  ulonglong local_50;
  undefined1 local_48 [8];
  void *local_40;
  int local_38;
  undefined4 local_34;
  void *local_30;
  int local_28;
  undefined4 local_24;
  
  local_60 = 0x12;
  local_68 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  _Src = local_68;
  FGenericPlatformString::Memcpy(local_68,L"GbxTestPolicyInfo",0x24);
  if (*(int *)(param_1 + 0x60) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = *(undefined2 **)(param_1 + 0x58);
  }
  FString::PrintfImpl(&local_58,L"Contact=%s",puVar9);
  lVar6 = (longlong)(int)local_60;
  local_48[0] = 0;
  local_40 = (void *)0x0;
  local_38 = (int)local_60;
  if ((int)local_60 == 0) {
    local_34 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,local_60 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_40,_Src,lVar6 * 2);
  }
  _Src_00 = local_58;
  local_30 = (void *)0x0;
  iVar7 = (int)local_50;
  local_28 = iVar7;
  if (iVar7 == 0) {
    local_24 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_30,local_50 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_30,_Src_00,(longlong)iVar7 * 2);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  bVar3 = false;
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
  iVar7 = *(int *)(param_1 + 0x84);
  iVar5 = *(int *)(param_1 + 0x78) + -1;
  lVar6 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar8 = lVar6 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x70);
      if ((*(int *)(lVar8 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar8 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_14065ab92:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,local_48);
        if (cVar4 == '\0') goto LAB_14065ab92;
      }
      lVar8 = lVar8 + -0x10;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
    iVar7 = *(int *)(param_1 + 0x84);
  }
  *(int *)(param_1 + 0x84) = iVar7 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x70),0);
  }
  if (local_30 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14065abf0 FUN_14065abf0 body=331 status=ok
// SIG undefined FUN_14065abf0(void)

void FUN_14065abf0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5,char param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *local_58;
  undefined1 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined1 local_30 [8];
  
  local_58 = (undefined4 *)0x0;
  lVar1 = *param_5;
  if (lVar1 != 0) {
    local_48 = (undefined4)*param_5;
    uStack_44 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_40 = (undefined4)param_5[1];
    uStack_3c = *(undefined4 *)((longlong)param_5 + 0xc);
    local_38 = param_5[2];
    local_58 = &local_48;
    local_50 = local_30;
    FUN_1406422c0(param_1 + 0x88,0,&local_58,0);
  }
  if (param_6 == '\x01') {
    uVar2 = FString::FString(&local_58,param_4);
    uVar3 = FString::FString(&local_48,param_3);
    param_6 = '\x01';
  }
  else {
    uVar2 = FString::FString(&local_48,param_4);
    uVar3 = FString::FString(&local_58,param_3);
    if (param_2 != '\0') {
      param_6 = '\0';
    }
  }
  FUN_14065a680(param_1,param_6,uVar3,uVar2);
  if (lVar1 != 0) {
    local_48 = (undefined4)*param_5;
    uStack_44 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_40 = (undefined4)param_5[1];
    uStack_3c = *(undefined4 *)((longlong)param_5 + 0xc);
    local_58 = &local_48;
    local_38 = param_5[2];
    local_50 = local_30;
    FUN_1406422c0(param_1 + 0x88,1,&local_58,0);
  }
  return;
}



// FUNCTION 14065ad40 FUN_14065ad40 body=341 status=ok
// SIG undefined FUN_14065ad40(void)

void FUN_14065ad40(char param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,char param_5
                  )

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_68 [2];
  undefined4 *local_58;
  undefined1 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined1 local_30 [8];
  
  lVar2 = FUN_140650cb0();
  if (lVar2 != 0) {
    local_38 = param_4[2];
    lVar1 = *param_4;
    local_68[0] = 0;
    if (lVar1 != 0) {
      local_48 = (undefined4)*param_4;
      uStack_44 = *(undefined4 *)((longlong)param_4 + 4);
      uStack_40 = (undefined4)param_4[1];
      uStack_3c = *(undefined4 *)((longlong)param_4 + 0xc);
      local_68[0] = 0;
      local_38 = param_4[2];
      local_58 = &local_48;
      local_50 = local_30;
      FUN_1406422c0(lVar2 + 0x88,0,&local_58,0);
    }
    uVar3 = FString::FString(&local_58,param_3);
    uVar4 = FString::FString(local_68,param_2);
    if (param_5 == '\x01') {
      param_5 = '\x01';
    }
    else if (param_1 != '\0') {
      param_5 = '\0';
    }
    FUN_14065a680(lVar2,param_5,uVar4,uVar3);
    if (lVar1 != 0) {
      local_48 = (undefined4)*param_4;
      uStack_44 = *(undefined4 *)((longlong)param_4 + 4);
      uStack_40 = (undefined4)param_4[1];
      uStack_3c = *(undefined4 *)((longlong)param_4 + 0xc);
      local_58 = &local_48;
      local_68[0] = 0;
      local_38 = param_4[2];
      local_50 = local_30;
      FUN_1406422c0(lVar2 + 0x88,1,&local_58,0);
    }
  }
  return;
}



// FUNCTION 14065aea0 FUN_14065aea0 body=272 status=ok
// SIG undefined FUN_14065aea0(void)

void FUN_14065aea0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *local_38;
  undefined1 local_30 [4];
  uint local_2c;
  longlong local_28;
  uint local_20;
  int local_1c;
  
  TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator(&local_38,param_1);
  if (local_1c < *(int *)(local_28 + 0x18)) {
    do {
      FUN_14063ff40((longlong)local_1c * 0x30 + 8 + *local_38);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
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
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1 + 0x38;
      }
      uVar2 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar3 + uVar2 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 14065afc0 FUN_14065afc0 body=35 status=ok
// SIG undefined FUN_14065afc0(void)

void FUN_14065afc0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140650cb0();
  if (lVar1 != 0) {
    TBaseMulticastDelegate<void>::Broadcast(lVar1 + 0xe0);
    return;
  }
  return;
}



// FUNCTION 14065aff0 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeGrow
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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x88,0);
  iVar4 = (int)(uVar3 / 0x88);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x88,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 14065b080 ResizeTo body=118 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x88,0);
    iVar3 = (int)(uVar1 / 0x88);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x88,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 14065b100 FUN_14065b100 body=554 status=ok
// SIG undefined FUN_14065b100(void)

bool FUN_14065b100(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  short *psVar6;
  undefined8 local_res8;
  undefined8 local_res18;
  undefined8 local_res20;
  short *local_78;
  int local_70;
  undefined4 local_68 [2];
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xa8);
  if (cVar1 != '\0') {
    local_res8 = *(undefined8 *)(param_1 + 0xa8);
    goto LAB_14065b1c4;
  }
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0xa8);
  if (cVar1 == '\0') {
    puVar3 = (undefined8 *)FName::FName(&local_res20,"GbxTest",1);
    plVar2 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar3);
    if (plVar2 == (longlong *)0x0) goto LAB_14065b183;
    (**(code **)(*plVar2 + 0x58))(plVar2,&local_res18,param_1 + 0xb8);
  }
  else {
LAB_14065b183:
    FWeakObjectPtr::operator=(&local_res18,0);
  }
  cVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (cVar1 == '\0') {
    FWeakObjectPtr::operator=(&local_res8,0);
  }
  else {
    local_res20 = local_res18;
    FUN_14065bd90(param_1,&local_res20);
    local_res8 = local_res18;
  }
LAB_14065b1c4:
  *(undefined1 *)(param_1 + 0x180) = 0;
  cVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (cVar1 == '\0') {
    puVar3 = (undefined8 *)FName::FName(&local_res18,"GbxTest",1);
    plVar2 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar3);
    if (plVar2 != (longlong *)0x0) {
      FUN_1406505a0(param_1,&local_78);
      local_68[0] = 1;
      psVar6 = &DAT_143f3eda8;
      if (local_70 != 0) {
        psVar6 = local_78;
      }
      local_58 = 0;
      local_60 = 0;
      if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
        lVar5 = -1;
        do {
          lVar5 = lVar5 + 1;
        } while (psVar6[lVar5] != 0);
        uVar4 = (int)lVar5 + 1;
        local_58 = (ulonglong)uVar4;
        if (0 < (int)uVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_60,0);
        }
        FGenericPlatformString::Memcpy(local_60,psVar6,(longlong)(int)uVar4 * 2);
      }
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      if (local_78 != (short *)0x0) {
        FMemory::Free(local_78);
      }
      (**(code **)(*plVar2 + 0xc0))(plVar2,local_68);
      if (local_40 != 0) {
        FMemory::Free();
      }
      if (local_50 != 0) {
        FMemory::Free();
      }
      if (local_60 != 0) {
        FMemory::Free();
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x130) = 0;
    *(undefined1 *)(param_1 + 0x181) = 0;
    plVar2 = (longlong *)FWeakObjectPtr::Get(&local_res8);
    (**(code **)(*plVar2 + 0x2a0))(plVar2,param_2);
  }
  return *(char *)(param_1 + 0x180) == '\0';
}



// FUNCTION 14065b330 FUN_14065b330 body=122 status=ok
// SIG undefined FUN_14065b330(void)

void FUN_14065b330(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x2b8))();
  FString::operator=(param_1 + 0x14,param_2);
  (**(code **)(*param_1 + 0x2b0))(param_1,param_2);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xac)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x14,0);
  }
  if ((undefined2 *)param_1[0x14] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x14] = 0;
  }
  return;
}



// FUNCTION 14065b3b0 FUN_14065b3b0 body=196 status=ok
// SIG undefined FUN_14065b3b0(void)

void FUN_14065b3b0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
  bVar3 = false;
  iVar6 = *(int *)(param_1 + 0xdc);
  iVar5 = *(int *)(param_1 + 0xd0) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 200);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_14065b426:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3,param_4);
        if (cVar4 == '\0') goto LAB_14065b426;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0xdc);
  }
  *(int *)(param_1 + 0xdc) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 200),0);
    return;
  }
  return;
}



// FUNCTION 14065b480 FUN_14065b480 body=1128 status=ok
// SIG undefined FUN_14065b480(void)

ulonglong FUN_14065b480(ulonglong param_1,wchar_t **param_2,undefined4 param_3,undefined1 param_4,
                       undefined1 param_5,undefined4 param_6,int param_7,int param_8,
                       undefined4 param_9,undefined4 param_10,undefined4 param_11,
                       undefined4 **param_12)

{
  wchar_t *_Src;
  undefined4 *_Src_00;
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined4 **ppuVar4;
  ulonglong uVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;
  ulonglong local_1b8;
  wchar_t *local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  int local_19c;
  int local_198;
  undefined2 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined8 local_184;
  undefined4 local_17c;
  undefined4 *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_148 [256];
  char local_48;
  
  uVar5 = 0;
  if (param_1 != 0) {
    lVar3 = FUN_142a2f930();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) goto LAB_14065b4f1;
  }
  param_1 = uVar5;
LAB_14065b4f1:
  iVar2 = *(int *)(param_2 + 1);
  if ((iVar2 != 0) && (0 < iVar2 + -1)) {
    iVar6 = iVar2 + -1;
    if (iVar2 < 1) {
      iVar6 = 0;
    }
    iVar2 = (iVar2 < 1) + 1 + iVar2;
    *(int *)(param_2 + 1) = iVar2;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
    (*param_2)[iVar6] = L'/';
    (*param_2)[(longlong)iVar6 + 1] = L'\0';
  }
  local_1b0 = (wchar_t *)0x0;
  local_1a8 = 0;
  local_178 = (undefined4 *)0x0;
  local_170 = 0;
  local_1b8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1b0,0x1d);
  iVar2 = (int)local_1a8 + 0x1d;
  local_1a8 = CONCAT44(local_1a8._4_4_,iVar2);
  if (local_1a8._4_4_ < iVar2) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b0);
  }
  local_19c = 0x100;
  local_198 = 0x100;
  builtin_wcsncpy(local_1b0,L"../../Saved/PerfMapCaptures/",0x1d);
  local_194 = 1;
  local_18c = 0x49480000;
  local_188 = 0x49480000;
  local_184 = 0x49480000;
  local_17c = 0;
  local_1a0 = 0x42c80000;
  local_190 = 0x3f800000;
  if (local_178 != (undefined4 *)&DAT_14401f638) {
    bVar8 = local_170._4_4_ != 0xb;
    local_170 = (ulonglong)local_170._4_4_ << 0x20;
    if (bVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_178,0xb);
      uVar5 = local_170 & 0xffffffff;
    }
    iVar2 = (int)uVar5 + 0xb;
    local_170 = CONCAT44(local_170._4_4_,iVar2);
    if ((int)local_170._4_4_ < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178);
    }
    *local_178 = 0x6d0025;
    local_178[1] = 0x5b005f;
    local_178[2] = 0x720025;
    local_178[3] = 0x25005f;
    local_178[4] = 0x5d0063;
    *(undefined2 *)(local_178 + 5) = 0;
  }
  local_1b8 = param_1;
  if (&local_1b0 != param_2) {
    iVar2 = *(int *)(param_2 + 1);
    _Src = *param_2;
    local_1a8 = CONCAT44(local_1a8._4_4_,iVar2);
    if ((iVar2 == 0) && (local_1a8._4_4_ == 0)) {
      local_1a8 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_1b0,iVar2,local_1a8._4_4_);
      _guard_xfg_dispatch_icall_nop(local_1b0,_Src,(longlong)iVar2 * 2);
    }
  }
  local_190 = param_6;
  local_194 = CONCAT11(param_5,param_4);
  if (param_7 < 0x40) {
    local_19c = 0x40;
  }
  else {
    local_19c = 0x800;
    if (param_7 < 0x800) {
      local_19c = param_7;
    }
  }
  if (param_8 < 0x40) {
    local_198 = 0x40;
  }
  else {
    local_198 = 0x800;
    if (param_8 < 0x800) {
      local_198 = param_8;
    }
  }
  ppuVar4 = &local_178;
  local_18c = param_9;
  local_184 = CONCAT44(local_184._4_4_,param_11);
  local_188 = param_10;
  puVar7 = local_178;
  local_1a0 = param_3;
  if (ppuVar4 != param_12) {
    iVar2 = *(int *)(param_12 + 1);
    _Src_00 = *param_12;
    local_170 = CONCAT44(local_170._4_4_,iVar2);
    if ((iVar2 == 0) && (local_170._4_4_ == 0)) {
      local_170 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_178,iVar2,local_170._4_4_);
      puVar7 = local_178;
      ppuVar4 = _guard_xfg_dispatch_icall_nop(local_178,_Src_00,(longlong)iVar2 * 2);
    }
  }
  if (param_1 == 0) {
    if (puVar7 != (undefined4 *)0x0) {
      ppuVar4 = (undefined4 **)FMemory::Free(puVar7);
    }
    if (local_1b0 != (wchar_t *)0x0) {
      ppuVar4 = (undefined4 **)FMemory::Free();
    }
    if (*param_2 != (wchar_t *)0x0) {
      ppuVar4 = (undefined4 **)FMemory::Free();
    }
    if (*param_12 != (undefined4 *)0x0) {
      ppuVar4 = (undefined4 **)FMemory::Free();
    }
    return (ulonglong)ppuVar4 & 0xffffffffffffff00;
  }
  local_168 = 0xffffffffffffffff;
  local_160 = 0;
  local_158 = 0;
  FUN_14063e680(local_148,&local_1b8,&local_168);
  bVar8 = false;
  if (local_48 == '\0') {
    do {
      cVar1 = FUN_140659ba0(local_148);
    } while (cVar1 == '\0');
    bVar8 = local_48 == '\0';
  }
  FUN_1406402f0(local_148);
  if (local_178 != (undefined4 *)0x0) {
    FMemory::Free();
  }
  if (local_1b0 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (*param_2 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  if (*param_12 != (undefined4 *)0x0) {
    FMemory::Free();
  }
  return (ulonglong)bVar8;
}



// FUNCTION 14065b8f0 FUN_14065b8f0 body=641 status=ok
// SIG undefined FUN_14065b8f0(void)

void FUN_14065b8f0(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int local_res8 [2];
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_res20;
  int iStack_5c;
  
  iVar3 = (int)param_2[1];
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = -1;
  }
  plVar7 = (longlong *)0x0;
  iVar2 = iVar4;
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  local_res20 = param_4;
  if (0 < iVar2) {
    if (iVar3 < 1) {
      iVar4 = 0;
    }
    iVar3 = (iVar3 < 1) + 1 + iVar3;
    *(int *)(param_2 + 1) = iVar3;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
    *(undefined2 *)(*param_2 + (longlong)iVar4 * 2) = 0x2f;
    *(undefined2 *)(*param_2 + 2 + (longlong)iVar4 * 2) = 0;
  }
  *param_3 = param_1;
  FString::operator=(param_3 + 1,param_2);
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 400) == 0) {
      plVar9 = (longlong *)(param_1 + 0x400);
    }
    else {
      plVar9 = *(longlong **)(*(longlong *)(param_1 + 400) + 0x98);
    }
    iVar3 = *(int *)(local_res20 + 4);
    FWeakObjectPtr::operator=(&local_res10,*(undefined8 *)(local_res20 + 0x10));
    local_res18 = local_res10;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(plVar9,local_res8,&local_res18);
    plVar8 = plVar7;
    if (local_res8[0] != -1) {
      plVar8 = (longlong *)((longlong)local_res8[0] * 0x20 + *plVar9);
    }
    plVar5 = plVar8 + 1;
    if (plVar8 == (longlong *)0x0) {
      plVar5 = plVar7;
    }
    plVar8 = plVar7;
    if (plVar5 != (longlong *)0x0) {
      plVar8 = (longlong *)*plVar5;
    }
    if ((plVar8 != (longlong *)0x0) &&
       (iVar4 = TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
                ::Num(plVar8,iVar3), 0 < iVar4)) {
      iStack_5c = -1;
      TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(plVar8,(int)plVar8[1] - *(int *)((longlong)plVar8 + 0x34),0);
      if ((int)plVar8[9] != 0) {
        plVar5 = (longlong *)plVar8[8];
        if ((longlong *)plVar8[8] == (longlong *)0x0) {
          plVar5 = plVar8 + 7;
        }
        iStack_5c = *(int *)((longlong)plVar5 +
                            ((longlong)(int)plVar8[9] - 1U & (longlong)iVar3) * 4);
        if (iStack_5c != -1) {
          do {
            iVar4 = *(int *)(*plVar8 + 0x10 + (longlong)iStack_5c * 0x18);
            if (*(int *)(*plVar8 + (longlong)iStack_5c * 0x18) == iVar3) break;
            iStack_5c = iVar4;
          } while (iVar4 != -1);
        }
      }
      if ((iStack_5c != -1) && (*(longlong *)(*plVar8 + 8 + (longlong)iStack_5c * 0x18) != 0))
      goto LAB_14065bb19;
    }
    lVar6 = operator_new(0x108);
    lVar1 = local_res20;
    if (lVar6 != 0) {
      plVar7 = (longlong *)FUN_14063e680(lVar6,param_3,local_res20);
    }
    FUN_142514cf0(plVar9,*(undefined8 *)(lVar1 + 0x10),iVar3,plVar7);
  }
LAB_14065bb19:
  if (*param_2 != 0) {
    FMemory::Free();
  }
  if (param_3[8] != 0) {
    FMemory::Free();
  }
  if (param_3[1] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14065bb80 FUN_14065bb80 body=381 status=ok
// SIG undefined FUN_14065bb80(void)

void FUN_14065bb80(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  longlong *local_28;
  undefined8 local_20;
  undefined2 *local_18;
  int local_10;
  
  FUN_1417006f0(&local_18,param_1);
  if ((1 < local_10) && (cVar4 = FUN_1416f0740(&local_18,0,0,1), cVar4 != '\0')) {
    puVar6 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar6 = local_18;
    }
    lVar5 = FUN_14178ae20(0,puVar6);
    if (lVar5 == 0) {
      puVar6 = &DAT_143f3eda8;
      if (local_10 != 0) {
        puVar6 = local_18;
      }
      lVar5 = LoadPackage(0,puVar6,0,0);
    }
    else {
      UPackage::FullyLoad(lVar5);
    }
    if (lVar5 != 0) {
      local_28 = (longlong *)0x0;
      local_20 = 0;
      FUN_1417a5b30(lVar5,&local_28,1,0,0);
      plVar1 = local_28 + (int)local_20;
      for (plVar7 = local_28; plVar7 != plVar1; plVar7 = plVar7 + 1) {
        plVar2 = (longlong *)*plVar7;
        if (plVar2 != (longlong *)0x0) {
          lVar5 = UBlueprintGeneratedClass::GetPrivateStaticClass();
          if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            lVar5 = plVar2[0x1f];
            if (lVar5 == 0) {
              (**(code **)(*plVar2 + 0x368))(plVar2);
              lVar5 = plVar2[0x1f];
            }
            *param_2 = lVar5;
            break;
          }
        }
      }
      if (local_28 != (longlong *)0x0) {
        FMemory::Free(local_28);
      }
    }
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14065bd00 SetIdentity body=28 status=ok
// SIG void SetIdentity(Matrix2x4<float> * this)

/* public: void __cdecl Scaleform::Render::Matrix2x4<float>::SetIdentity(void) __ptr64 */

void __thiscall Scaleform::Render::Matrix2x4<float>::SetIdentity(Matrix2x4<float> *this)

{
                    /* 0x65bd00  410  ?SetIdentity@?$Matrix2x4@M@Render@Scaleform@@QEAAXXZ */
  *(undefined8 *)this = 0x3f800000;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined8 *)(this + 0x14) = 0x3f800000;
  return;
}



// FUNCTION 14065bd20 SetIdentity body=40 status=ok
// SIG void SetIdentity(Matrix3x4<float> * this)

/* public: void __cdecl Scaleform::Render::Matrix3x4<float>::SetIdentity(void) __ptr64 */

void __thiscall Scaleform::Render::Matrix3x4<float>::SetIdentity(Matrix3x4<float> *this)

{
                    /* 0x65bd20  412  ?SetIdentity@?$Matrix3x4@M@Render@Scaleform@@QEAAXXZ */
  *(undefined8 *)(this + 4) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0x3f800000;
  *(undefined4 *)this = 0x3f800000;
  *(undefined4 *)(this + 0x14) = 0x3f800000;
  return;
}



// FUNCTION 14065bd50 SetIdentity body=54 status=ok
// SIG void SetIdentity(Matrix4x4<float> * this)

/* public: void __cdecl Scaleform::Render::Matrix4x4<float>::SetIdentity(void) __ptr64 */

void __thiscall Scaleform::Render::Matrix4x4<float>::SetIdentity(Matrix4x4<float> *this)

{
                    /* 0x65bd50  414  ?SetIdentity@?$Matrix4x4@M@Render@Scaleform@@QEAAXXZ */
  *(undefined8 *)(this + 4) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x34) = 0;
  *(undefined4 *)this = 0x3f800000;
  *(undefined4 *)(this + 0x14) = 0x3f800000;
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  return;
}



// FUNCTION 14065bd90 FUN_14065bd90 body=86 status=ok
// SIG undefined FUN_14065bd90(void)

void FUN_14065bd90(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = operator!=<UPrimitiveComponent,UPrimitiveComponent,FWeakObjectPtr>(param_1 + 0xa8);
  if (cVar1 != '\0') {
    FUN_14065e450(param_1);
    *(undefined4 *)(param_1 + 0xa8) = *param_2;
    *(undefined4 *)(param_1 + 0xac) = param_2[1];
    FUN_140658e30(param_1);
  }
  return;
}



// FUNCTION 14065bdf0 FUN_14065bdf0 body=131 status=ok
// SIG undefined FUN_14065bdf0(void)

void FUN_14065bdf0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_18;
  longlong local_10;
  
  lVar1 = FUN_140650cb0();
  if (lVar1 != 0) {
    if (param_1 == (longlong *)0x0) {
      uVar3 = 0;
    }
    else {
      lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      uVar3 = *(undefined8 *)(lVar2 + 0x18);
    }
    local_18 = *param_2;
    local_10 = local_18 + (longlong)(int)param_2[1] * 0x18;
    FUN_1406422c0(lVar1 + 0x88,3,&local_18,uVar3);
  }
  return;
}



// FUNCTION 14065be80 FUN_14065be80 body=107 status=ok
// SIG undefined FUN_14065be80(void)

void FUN_14065be80(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_18;
  longlong local_10;
  
  if (param_2 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_2 + 0x148))(param_2);
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
  }
  local_18 = *param_3;
  local_10 = local_18 + (longlong)(int)param_3[1] * 0x18;
  FUN_1406422c0(param_1 + 0x88,3,&local_18,uVar2);
  return;
}



// FUNCTION 14065bef0 FUN_14065bef0 body=39 status=ok
// SIG undefined FUN_14065bef0(void)

undefined1 FUN_14065bef0(undefined8 param_1)

{
  longlong local_18 [3];
  
  UObjectBaseUtility::GetFullName(param_1,local_18,0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 0;
}



// FUNCTION 14065bf20 FUN_14065bf20 body=776 status=ok
// SIG undefined FUN_14065bf20(void)

void FUN_14065bf20(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  int local_res10 [2];
  undefined8 local_90;
  undefined8 local_88 [2];
  int local_78;
  int iStack_74;
  
  if (((longlong *)*param_1 != (longlong *)0x0) &&
     (lVar8 = (**(code **)(*(longlong *)*param_1 + 0x148))(), lVar8 != 0)) {
    if (*(longlong *)(lVar8 + 400) == 0) {
      plVar13 = (longlong *)(lVar8 + 0x400);
    }
    else {
      plVar13 = *(longlong **)(*(longlong *)(lVar8 + 400) + 0x98);
    }
    iVar2 = param_5[1];
    uVar4 = *(undefined8 *)(param_5 + 4);
    FWeakObjectPtr::operator=(&local_90,uVar4);
    local_88[0] = local_90;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(plVar13,local_res10,local_88);
    plVar12 = (longlong *)0x0;
    plVar9 = plVar12;
    if (local_res10[0] != -1) {
      plVar9 = (longlong *)((longlong)local_res10[0] * 0x20 + *plVar13);
    }
    plVar11 = plVar9 + 1;
    if (plVar9 == (longlong *)0x0) {
      plVar11 = plVar12;
    }
    if (plVar11 != (longlong *)0x0) {
      plVar12 = (longlong *)*plVar11;
    }
    if ((plVar12 != (longlong *)0x0) &&
       (iVar7 = TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
                ::Num(plVar12,iVar2), 0 < iVar7)) {
      iStack_74 = -1;
      local_78 = iVar2;
      TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(plVar12,(int)plVar12[1] - *(int *)((longlong)plVar12 + 0x34),0);
      iVar7 = -1;
      if ((int)plVar12[9] != 0) {
        plVar9 = (longlong *)plVar12[8];
        if ((longlong *)plVar12[8] == (longlong *)0x0) {
          plVar9 = plVar12 + 7;
        }
        iVar7 = *(int *)((longlong)plVar9 + ((longlong)(int)plVar12[9] - 1U & (longlong)iVar2) * 4);
        iStack_74 = iVar7;
        if (iVar7 != -1) {
          do {
            iVar3 = *(int *)(*plVar12 + 0x10 + (longlong)iVar7 * 0x18);
            iStack_74 = iVar7;
            if (*(int *)(*plVar12 + (longlong)iVar7 * 0x18) == iVar2) break;
            iVar7 = iVar3;
            iStack_74 = iVar3;
          } while (iVar3 != -1);
        }
      }
      if ((iStack_74 != -1) && (*(longlong *)(*plVar12 + 8 + (longlong)iVar7 * 0x18) != 0))
      goto LAB_14065c1da;
    }
    puVar10 = (undefined8 *)operator_new(0x50);
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      plVar12 = (longlong *)param_2[2];
      uVar5 = *param_2;
      uVar6 = param_2[1];
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      lVar8 = *param_1;
      *puVar10 = &PTR_FUN_144024f00;
      puVar10[1] = lVar8;
      puVar10[2] = *(undefined8 *)(param_5 + 2);
      *(undefined4 *)(puVar10 + 3) = *param_5;
      FWeakObjectPtr::operator=((longlong)puVar10 + 0x1c,uVar4);
      puVar10[5] = uVar5;
      puVar10[6] = uVar6;
      puVar10[7] = plVar12;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      *(undefined4 *)(puVar10 + 8) = param_4;
      *(undefined4 *)(puVar10 + 9) = param_3;
      *(undefined4 *)((longlong)puVar10 + 0x44) = 0;
      *(undefined2 *)((longlong)puVar10 + 0x4c) = 1;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar12 + 1;
        lVar8 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
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
    }
    FUN_142514cf0(plVar13,uVar4,iVar2,puVar10);
  }
LAB_14065c1da:
  plVar13 = (longlong *)param_2[2];
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar13 + 1;
    lVar8 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  return;
}



// FUNCTION 14065c230 FUN_14065c230 body=202 status=ok
// SIG undefined FUN_14065c230(void)

void FUN_14065c230(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  
  plVar6 = (longlong *)*param_1;
  if (plVar6 != (longlong *)0x0) {
    local_38 = *param_2;
    local_30 = param_2[1];
    local_28 = param_2[2];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
      plVar6 = (longlong *)*param_1;
    }
    lVar4 = *plVar6;
    uVar5 = FKey::IsGamepadKey(param_2);
    (**(code **)(lVar4 + 0xcf0))(*param_1,&local_38,param_3,param_4,uVar5);
  }
  plVar6 = (longlong *)param_2[2];
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
  return;
}



// FUNCTION 14065c300 FUN_14065c300 body=672 status=ok
// SIG undefined FUN_14065c300(void)

void FUN_14065c300(longlong *param_1,longlong *param_2,undefined8 param_3,uint param_4,uint param_5,
                  undefined4 *param_6)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  int local_res8 [2];
  longlong *local_68;
  longlong *local_60;
  int local_58;
  int iStack_54;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  lVar9 = (**(code **)(*param_1 + 0x148))();
  if (lVar9 == 0) {
    return;
  }
  if (*param_2 == 0) {
    return;
  }
  UWorld::GetPlayerControllerIterator(lVar9,&local_60);
  while( true ) {
    if (local_58 < 0) {
      return;
    }
    if ((int)local_60[1] <= local_58) {
      return;
    }
    lVar10 = FWeakObjectPtr::Get(*local_60 + (longlong)local_58 * 8);
    if (lVar10 == *param_2) break;
    local_58 = local_58 + 1;
  }
  if (*(longlong *)(lVar9 + 400) == 0) {
    plVar14 = (longlong *)(lVar9 + 0x400);
  }
  else {
    plVar14 = *(longlong **)(*(longlong *)(lVar9 + 400) + 0x98);
  }
  iVar2 = param_6[1];
  FWeakObjectPtr::operator=(&local_68,*(undefined8 *)(param_6 + 4));
  local_60 = local_68;
  TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
  ::FindId(plVar14,local_res8,&local_60);
  plVar13 = (longlong *)0x0;
  plVar11 = plVar13;
  if (local_res8[0] != -1) {
    plVar11 = (longlong *)((longlong)local_res8[0] * 0x20 + *plVar14);
  }
  plVar15 = plVar11 + 1;
  if (plVar11 == (longlong *)0x0) {
    plVar15 = plVar13;
  }
  if (plVar15 != (longlong *)0x0) {
    plVar13 = (longlong *)*plVar15;
  }
  if ((plVar13 != (longlong *)0x0) &&
     (iVar8 = TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
              ::Num(plVar13,iVar2), 0 < iVar8)) {
    iStack_54 = -1;
    local_58 = iVar2;
    TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
    ::ConditionalRehash(plVar13,(int)plVar13[1] - *(int *)((longlong)plVar13 + 0x34),0);
    iVar8 = -1;
    if ((int)plVar13[9] != 0) {
      plVar11 = (longlong *)plVar13[8];
      if ((longlong *)plVar13[8] == (longlong *)0x0) {
        plVar11 = plVar13 + 7;
      }
      iVar8 = *(int *)((longlong)plVar11 + ((longlong)(int)plVar13[9] - 1U & (longlong)iVar2) * 4);
      iStack_54 = iVar8;
      if (iVar8 != -1) {
        do {
          iVar3 = *(int *)(*plVar13 + 0x10 + (longlong)iVar8 * 0x18);
          iStack_54 = iVar8;
          if (*(int *)(*plVar13 + (longlong)iVar8 * 0x18) == iVar2) break;
          iVar8 = iVar3;
          iStack_54 = iVar3;
        } while (iVar3 != -1);
      }
    }
    if ((iStack_54 != -1) && (*(longlong *)(*plVar13 + 8 + (longlong)iVar8 * 0x18) != 0)) {
      return;
    }
  }
  puVar12 = (undefined8 *)operator_new(0x50);
  if (puVar12 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x0;
  }
  else {
    lVar9 = *param_2;
    uVar4 = *param_6;
    uVar5 = param_6[1];
    uVar6 = param_6[2];
    uVar7 = param_6[3];
    *puVar12 = &PTR_FUN_144024f28;
    uVar1 = *(undefined8 *)(param_6 + 4);
    *(undefined4 *)(puVar12 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar12 + 0xc) = uVar5;
    *(undefined4 *)(puVar12 + 2) = uVar6;
    *(undefined4 *)((longlong)puVar12 + 0x14) = uVar7;
    puVar12[3] = uVar1;
    FWeakObjectPtr::operator=(puVar12 + 4,lVar9);
    puVar12[5] = 0;
    puVar12[6] = 0;
    *(uint *)(puVar12 + 8) = param_4 & 0x7fffffff;
    *(uint *)((longlong)puVar12 + 0x44) = param_5 & 0x7fffffff;
    puVar12[7] = 0;
    *(undefined2 *)(puVar12 + 9) = 0x100;
    *(undefined1 *)((longlong)puVar12 + 0x4a) = 0;
    FUN_140642410(puVar12,param_3);
  }
  FUN_142514cf0(plVar14,*(undefined8 *)(param_6 + 4),iVar2,puVar12);
  return;
}



// FUNCTION 14065c5a0 FUN_14065c5a0 body=39 status=ok
// SIG undefined FUN_14065c5a0(void)

longlong FUN_14065c5a0(longlong param_1)

{
  return (*(longlong *)(param_1 + 0x40) - *(longlong *)(param_1 + 0x38)) / 0x18;
}



// FUNCTION 14065c5d0 FUN_14065c5d0 body=478 status=ok
// SIG undefined FUN_14065c5d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14065c5d0(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_1088 [32];
  ulonglong local_1068;
  undefined1 local_1060;
  undefined1 *local_1058;
  ulonglong local_1050;
  undefined1 local_1048 [4096];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1088;
  lVar6 = (longlong)(int)param_2[1];
  puVar4 = (undefined1 *)0x0;
  lVar2 = *param_2;
  lVar1 = lVar2 + lVar6 * 4;
  if (lVar6 < 0x21) {
    if (1 < lVar6) {
      FUN_140639e30(lVar2,lVar1);
    }
  }
  else {
    uVar5 = lVar6 - (lVar6 >> 1);
    if (0x400 < uVar5) {
      uVar3 = 0x7fffffffffffffff;
      if ((longlong)uVar5 < 0x7fffffffffffffff) {
        uVar3 = uVar5;
      }
      uVar5 = uVar3;
      if (uVar3 < 0x4000000000000000) {
        for (; 0 < (longlong)uVar5; uVar5 = (longlong)uVar5 / 2) {
          local_1058 = (undefined1 *)operator_new(uVar5 * 4,&DAT_146bcbba8);
          if (local_1058 != (undefined1 *)0x0) {
            puVar4 = local_1058;
            if (0x400 < uVar5) goto LAB_14065c6e5;
            break;
          }
        }
      }
      FMemory::operator_delete(puVar4);
      uVar5 = 0x400;
    }
    local_1058 = local_1048;
LAB_14065c6e5:
    local_1068 = uVar5;
    local_1060 = param_3;
    local_1050 = uVar5;
    FUN_14063c730(lVar2,lVar1,lVar6,local_1058);
    if (0x400 < local_1050) {
      FMemory::operator_delete(local_1058);
    }
  }
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14065c7b0 FUN_14065c7b0 body=93 status=ok
// SIG undefined FUN_14065c7b0(void)

longlong * FUN_14065c7b0(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  FUN_14063c470(*param_2,*param_2 + (longlong)(int)param_2[1] * 4,(longlong)(int)param_2[1],param_3)
  ;
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14065c810 FUN_14065c810 body=478 status=ok
// SIG undefined FUN_14065c810(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14065c810(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_1088 [32];
  ulonglong local_1068;
  undefined1 local_1060;
  undefined1 *local_1058;
  ulonglong local_1050;
  undefined1 local_1048 [4096];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1088;
  lVar6 = (longlong)(int)param_2[1];
  puVar4 = (undefined1 *)0x0;
  lVar2 = *param_2;
  lVar1 = lVar2 + lVar6 * 8;
  if (lVar6 < 0x21) {
    if (1 < lVar6) {
      FUN_140639f20(lVar2,lVar1);
    }
  }
  else {
    uVar5 = lVar6 - (lVar6 >> 1);
    if (0x200 < uVar5) {
      uVar3 = 0x7fffffffffffffff;
      if ((longlong)uVar5 < 0x7fffffffffffffff) {
        uVar3 = uVar5;
      }
      uVar5 = uVar3;
      if (uVar3 < 0x2000000000000000) {
        for (; 0 < (longlong)uVar5; uVar5 = (longlong)uVar5 / 2) {
          local_1058 = (undefined1 *)operator_new(uVar5 * 8,&DAT_146bcbba8);
          if (local_1058 != (undefined1 *)0x0) {
            puVar4 = local_1058;
            if (0x200 < uVar5) goto LAB_14065c925;
            break;
          }
        }
      }
      FMemory::operator_delete(puVar4);
      uVar5 = 0x200;
    }
    local_1058 = local_1048;
LAB_14065c925:
    local_1068 = uVar5;
    local_1060 = param_3;
    local_1050 = uVar5;
    FUN_14063c840(lVar2,lVar1,lVar6,local_1058);
    if (0x200 < local_1050) {
      FMemory::operator_delete(local_1058);
    }
  }
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14065c9f0 FUN_14065c9f0 body=493 status=ok
// SIG undefined FUN_14065c9f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_14065c9f0(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_1088 [32];
  ulonglong local_1068;
  undefined1 local_1060;
  undefined1 *local_1058;
  ulonglong local_1050;
  undefined1 local_1048 [4096];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1088;
  lVar5 = (longlong)(int)param_2[1];
  puVar3 = (undefined1 *)0x0;
  lVar1 = *param_2;
  lVar6 = lVar5 * 0x10 + lVar1;
  if (lVar5 < 0x21) {
    if (1 < lVar5) {
      FUN_14063a270(lVar1,lVar6);
    }
  }
  else {
    uVar4 = lVar5 - (lVar5 >> 1);
    if (0x100 < uVar4) {
      uVar2 = 0x7fffffffffffffff;
      if ((longlong)uVar4 < 0x7fffffffffffffff) {
        uVar2 = uVar4;
      }
      uVar4 = uVar2;
      if (uVar2 < 0x1000000000000000) {
        for (; 0 < (longlong)uVar4; uVar4 = (longlong)uVar4 / 2) {
          local_1058 = (undefined1 *)operator_new(uVar4 << 4,&DAT_146bcbba8);
          if (local_1058 != (undefined1 *)0x0) {
            puVar3 = local_1058;
            if (0x100 < uVar4) goto LAB_14065cb14;
            break;
          }
        }
      }
      FMemory::operator_delete(puVar3);
      uVar4 = 0x100;
    }
    local_1058 = local_1048;
LAB_14065cb14:
    local_1068 = uVar4;
    local_1060 = param_3;
    local_1050 = uVar4;
    FUN_14063c950(lVar1,lVar6,lVar5,local_1058);
    if (0x100 < local_1050) {
      FMemory::operator_delete(local_1058);
    }
  }
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14065cbf0 FUN_14065cbf0 body=35 status=ok
// SIG undefined FUN_14065cbf0(void)

void FUN_14065cbf0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140650cb0();
  if (lVar1 != 0) {
    TBaseMulticastDelegate<void>::Broadcast(lVar1 + 0xf8);
    return;
  }
  return;
}



// FUNCTION 14065cc20 FUN_14065cc20 body=528 status=ok
// SIG undefined FUN_14065cc20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14065cc20(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  undefined1 auStack_f8 [32];
  int local_d8;
  uint uStack_d4;
  uint *puStack_d0;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  int iStack_b0;
  uint uStack_ac;
  uint *local_a8;
  uint uStack_a0;
  int iStack_9c;
  undefined8 local_98;
  longlong *local_90;
  undefined8 uStack_88;
  uint *puStack_80;
  uint uStack_78;
  int iStack_74;
  undefined8 uStack_70;
  longlong local_68 [2];
  uint local_58 [4];
  uint *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (param_2 != 0) {
    local_38 = 0xffffffff;
    local_68[0] = 0;
    local_68[1] = 0;
    local_48 = (uint *)0x0;
    local_40 = 0;
    local_34 = 0;
    local_28 = 0;
    local_20 = 0;
    (**(code **)(*param_1 + 0x278))(param_1,local_68);
    iVar2 = (int)local_40;
    puStack_d0 = local_58;
    local_d8 = 0;
    uStack_d4 = 1;
    iStack_c4 = 0;
    iStack_c0 = 0;
    if ((int)local_40 != 0) {
      puVar5 = local_58;
      if (local_48 != (uint *)0x0) {
        puVar5 = local_48;
      }
      uVar1 = *puVar5;
      iStack_c0 = 0;
      local_d8 = 0;
      while (uVar1 == 0) {
        iStack_c0 = iStack_c0 + 0x20;
        if ((int)((int)local_40 + -1 + ((int)local_40 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_d8) {
          iStack_c4 = (int)local_40;
          local_d8 = local_d8 + 1;
          goto LAB_14065cd34;
        }
        uVar1 = puVar5[(longlong)local_d8 + 1];
        local_d8 = local_d8 + 1;
      }
      uStack_d4 = -uVar1 & uVar1;
      iVar3 = 0x1f;
      if (uStack_d4 != 0) {
        for (; uStack_d4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      if (uStack_d4 == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = 0x1f - iVar3;
      }
      iStack_c4 = (iStack_c0 - iVar3) + 0x1f;
      if ((int)local_40 < iStack_c4) {
        iStack_c4 = (int)local_40;
      }
    }
LAB_14065cd34:
    uStack_a0 = 0xffffffff;
    iStack_9c = iStack_c4;
    local_98 = CONCAT44(uStack_bc,iStack_c0);
    local_90 = local_68;
    uStack_88 = CONCAT44(uStack_d4,local_d8);
    local_c8 = -1 << ((byte)local_40 & 0x1f);
    iStack_c4 = (int)local_40;
    iStack_b0 = local_d8;
    uStack_ac = uStack_d4;
    local_a8 = puStack_d0;
    puStack_80 = puStack_d0;
    uStack_70 = local_98;
    local_b8 = local_90;
    uStack_78 = uStack_a0;
    iStack_74 = iStack_9c;
    while (((iStack_9c != iVar2 || (local_a8 != local_58)) || (local_b8 != local_68))) {
      lVar4 = param_2;
      do {
        if (lVar4 == *(longlong *)(*local_b8 + (longlong)iStack_9c * 0x10)) {
          local_20 = 0;
          if (local_28 != 0) {
            FMemory::Free();
          }
          TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                    (local_68);
          return 1;
        }
        lVar4 = *(longlong *)(lVar4 + 0x30);
      } while (lVar4 != 0);
      uStack_a0 = uStack_a0 & ~uStack_ac;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_b0);
    }
    local_20 = 0;
    if (local_28 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_68);
  }
  return 0;
}



// FUNCTION 14065ce30 FUN_14065ce30 body=81 status=ok
// SIG undefined FUN_14065ce30(void)

void FUN_14065ce30(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  local_res8 = (float)param_2;
  DAT_1468c2198 = (undefined4)(longlong)local_res8;
  uStackX_c = (float)((ulonglong)param_2 >> 0x20);
  DAT_1468c219c = (undefined4)(longlong)uStackX_c;
  FScreenshotRequest::RequestScreenshot(param_1,param_3,param_4);
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14065ce90 FUN_14065ce90 body=253 status=ok
// SIG undefined FUN_14065ce90(void)

void FUN_14065ce90(undefined8 param_1,char *param_2,undefined1 param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *local_28;
  undefined8 local_20;
  undefined1 local_18 [16];
  
  if (*param_2 != '\0') {
    local_28 = (undefined2 *)0x0;
    local_20 = 0x1d;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar1 = local_28;
    FGenericPlatformString::Memcpy(local_28,L"expected false, but was true",0x3a);
    puVar3 = &DAT_143f3eda8;
    puVar4 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar4 = puVar1;
    }
    if ((int)param_5[1] != 0) {
      puVar3 = (undefined2 *)*param_5;
    }
    FString::PrintfImpl(&local_28,L"%s (%s)",puVar3,puVar4);
    uVar2 = FString::FString(local_18,param_4);
    FUN_14065a680(param_1,param_3,uVar2,&local_28);
    if (puVar1 != (undefined2 *)0x0) {
      FMemory::Free(puVar1);
    }
  }
  if (*param_4 != 0) {
    FMemory::Free();
  }
  if (*param_5 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 14065cf90 FUN_14065cf90 body=364 status=ok
// SIG undefined FUN_14065cf90(void)

void FUN_14065cf90(char *param_1,undefined1 param_2,longlong *param_3,longlong *param_4)

{
  undefined2 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  lVar2 = FUN_140650cb0();
  if (lVar2 != 0) {
    plVar3 = (longlong *)FString::FString(local_48,param_4);
    plVar4 = (longlong *)FString::FString(local_38,param_3);
    if (*param_1 != '\0') {
      local_50 = 0x1d;
      local_58 = (undefined2 *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      puVar1 = local_58;
      FGenericPlatformString::Memcpy(local_58,L"expected false, but was true",0x3a);
      puVar6 = &DAT_143f3eda8;
      puVar7 = &DAT_143f3eda8;
      if ((int)local_50 != 0) {
        puVar7 = puVar1;
      }
      if ((int)plVar3[1] != 0) {
        puVar6 = (undefined2 *)*plVar3;
      }
      FString::PrintfImpl(&local_58,L"%s (%s)",puVar6,puVar7);
      uVar5 = FString::FString(local_28,plVar4);
      FUN_14065a680(lVar2,param_2,uVar5,&local_58);
      if (puVar1 != (undefined2 *)0x0) {
        FMemory::Free(puVar1);
      }
    }
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    if (*plVar3 != 0) {
      FMemory::Free();
    }
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  if (*param_4 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14065d100 FUN_14065d100 body=253 status=ok
// SIG undefined FUN_14065d100(void)

void FUN_14065d100(undefined8 param_1,char *param_2,undefined1 param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *local_28;
  undefined8 local_20;
  undefined1 local_18 [16];
  
  if (*param_2 == '\0') {
    local_28 = (undefined2 *)0x0;
    local_20 = 0x1d;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar1 = local_28;
    FGenericPlatformString::Memcpy(local_28,L"expected true, but was false",0x3a);
    puVar3 = &DAT_143f3eda8;
    puVar4 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar4 = puVar1;
    }
    if ((int)param_5[1] != 0) {
      puVar3 = (undefined2 *)*param_5;
    }
    FString::PrintfImpl(&local_28,L"%s (%s)",puVar3,puVar4);
    uVar2 = FString::FString(local_18,param_4);
    FUN_14065a680(param_1,param_3,uVar2,&local_28);
    if (puVar1 != (undefined2 *)0x0) {
      FMemory::Free(puVar1);
    }
  }
  if (*param_4 != 0) {
    FMemory::Free();
  }
  if (*param_5 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 14065d200 FUN_14065d200 body=364 status=ok
// SIG undefined FUN_14065d200(void)

void FUN_14065d200(char *param_1,undefined1 param_2,longlong *param_3,longlong *param_4)

{
  undefined2 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  lVar2 = FUN_140650cb0();
  if (lVar2 != 0) {
    plVar3 = (longlong *)FString::FString(local_48,param_4);
    plVar4 = (longlong *)FString::FString(local_38,param_3);
    if (*param_1 == '\0') {
      local_50 = 0x1d;
      local_58 = (undefined2 *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      puVar1 = local_58;
      FGenericPlatformString::Memcpy(local_58,L"expected true, but was false",0x3a);
      puVar6 = &DAT_143f3eda8;
      puVar7 = &DAT_143f3eda8;
      if ((int)local_50 != 0) {
        puVar7 = puVar1;
      }
      if ((int)plVar3[1] != 0) {
        puVar6 = (undefined2 *)*plVar3;
      }
      FString::PrintfImpl(&local_58,L"%s (%s)",puVar6,puVar7);
      uVar5 = FString::FString(local_28,plVar4);
      FUN_14065a680(lVar2,param_2,uVar5,&local_58);
      if (puVar1 != (undefined2 *)0x0) {
        FMemory::Free(puVar1);
      }
    }
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    if (*plVar3 != 0) {
      FMemory::Free();
    }
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  if (*param_4 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14065d370 FUN_14065d370 body=462 status=ok
// SIG undefined FUN_14065d370(void)

void FUN_14065d370(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5,longlong *param_6,longlong *param_7,undefined4 param_8)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined2 *puVar7;
  short *psVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *local_78;
  ulonglong local_70;
  short *local_68;
  int local_60;
  undefined1 local_58 [48];
  
  uVar1 = *param_2;
  cVar2 = FUN_140634db0(uVar1,param_3,param_4,param_8);
  if (cVar2 != '\0') goto LAB_14065d4f4;
  FUN_140636770(&local_68,uVar1,param_3,param_4);
  puVar10 = &DAT_143f3eda8;
  psVar8 = &DAT_143f3eda8;
  if (local_60 != 0) {
    psVar8 = local_68;
  }
  puVar7 = (undefined2 *)0x0;
  local_78 = (undefined2 *)0x0;
  local_70 = 0;
  if ((psVar8 == (short *)0x0) || (*psVar8 == 0)) {
LAB_14065d47d:
    puVar9 = &DAT_143f3eda8;
  }
  else {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (psVar8[lVar5] != 0);
    uVar4 = (int)lVar5 + 1;
    local_70 = (ulonglong)uVar4;
    uVar6 = uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
      uVar6 = (uint)local_70;
    }
    puVar7 = local_78;
    FGenericPlatformString::Memcpy(local_78,psVar8,(longlong)(int)uVar4 * 2);
    puVar9 = puVar7;
    if (uVar6 == 0) goto LAB_14065d47d;
  }
  if ((int)param_7[1] != 0) {
    puVar10 = (undefined2 *)*param_7;
  }
  FString::PrintfImpl(&local_78,L"%s (%s)",puVar10,puVar9);
  uVar3 = FString::FString(local_58,param_6);
  FUN_14065a680(param_1,param_5,uVar3,&local_78);
  if (puVar7 != (undefined2 *)0x0) {
    FMemory::Free(puVar7);
  }
  if (local_68 != (short *)0x0) {
    FMemory::Free();
  }
LAB_14065d4f4:
  if (*param_6 != 0) {
    FMemory::Free();
  }
  if (*param_7 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14065d540 FUN_14065d540 body=574 status=ok
// SIG undefined FUN_14065d540(void)

void FUN_14065d540(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                  longlong *param_5,longlong *param_6,undefined4 param_7)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  undefined2 *puVar9;
  short *psVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 *local_90;
  ulonglong local_88;
  short *local_80;
  int local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [40];
  
  lVar2 = FUN_140650cb0();
  if (lVar2 == 0) goto LAB_14065d732;
  plVar3 = (longlong *)FString::FString(local_70,param_6);
  plVar4 = (longlong *)FString::FString(local_60,param_5);
  cVar1 = FUN_140634db0(*param_1,param_2,param_3,param_7);
  if (cVar1 == '\0') {
    FUN_140636770(&local_80,*param_1,param_2,param_3);
    puVar12 = &DAT_143f3eda8;
    psVar10 = &DAT_143f3eda8;
    if (local_78 != 0) {
      psVar10 = local_80;
    }
    puVar9 = (undefined2 *)0x0;
    local_90 = (undefined2 *)0x0;
    local_88 = 0;
    if ((psVar10 == (short *)0x0) || (*psVar10 == 0)) {
LAB_14065d68a:
      puVar11 = &DAT_143f3eda8;
    }
    else {
      lVar7 = -1;
      do {
        lVar7 = lVar7 + 1;
      } while (psVar10[lVar7] != 0);
      uVar6 = (int)lVar7 + 1;
      local_88 = (ulonglong)uVar6;
      uVar8 = uVar6;
      if (0 < (int)uVar6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,0);
        uVar8 = (uint)local_88;
      }
      puVar9 = local_90;
      FGenericPlatformString::Memcpy(local_90,psVar10,(longlong)(int)uVar6 * 2);
      puVar11 = puVar9;
      if (uVar8 == 0) goto LAB_14065d68a;
    }
    if ((int)plVar3[1] != 0) {
      puVar12 = (undefined2 *)*plVar3;
    }
    FString::PrintfImpl(&local_90,L"%s (%s)",puVar12,puVar11);
    uVar5 = FString::FString(local_50,plVar4);
    FUN_14065a680(lVar2,param_4,uVar5,&local_90);
    if (puVar9 != (undefined2 *)0x0) {
      FMemory::Free(puVar9);
    }
    if (local_80 != (short *)0x0) {
      FMemory::Free();
    }
  }
  if (*plVar4 != 0) {
    FMemory::Free();
  }
  if (*plVar3 != 0) {
    FMemory::Free();
  }
LAB_14065d732:
  if (*param_5 != 0) {
    FMemory::Free();
  }
  if (*param_6 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14065d780 FUN_14065d780 body=243 status=ok
// SIG undefined FUN_14065d780(void)

void FUN_14065d780(undefined8 param_1,float *param_2,float param_3,float param_4,undefined1 param_5,
                  longlong *param_6,longlong *param_7)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  double dVar5;
  undefined2 *local_38;
  int local_30;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  fVar1 = *param_2;
  if ((fVar1 < param_3) || (param_4 < fVar1)) {
    dVar5 = (double)param_4;
    FString::PrintfImpl(&local_38,L"expected a value to be in a range, but %f is not in [%f, %f]",
                        (double)fVar1,(double)param_3,dVar5);
    puVar3 = &DAT_143f3eda8;
    puVar4 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar4 = local_38;
    }
    if ((int)param_7[1] != 0) {
      puVar3 = (undefined2 *)*param_7;
    }
    FString::PrintfImpl(local_28,L"%s (%s)",puVar3,puVar4,dVar5);
    uVar2 = FString::FString(local_18,param_6);
    FUN_14065a680(param_1,param_5,uVar2,local_28);
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (*param_6 != 0) {
    FMemory::Free();
  }
  if (*param_7 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14065d880 FUN_14065d880 body=428 status=ok
// SIG undefined FUN_14065d880(void)

void FUN_14065d880(float *param_1,float param_2,float param_3,undefined1 param_4,longlong *param_5,
                  longlong *param_6)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  double dVar8;
  undefined2 *local_88;
  int local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [48];
  
  lVar2 = FUN_140650cb0();
  if (lVar2 != 0) {
    plVar3 = (longlong *)FString::FString(local_68,param_6);
    plVar4 = (longlong *)FString::FString(local_58,param_5);
    fVar1 = *param_1;
    if ((fVar1 < param_2) || (param_3 < fVar1)) {
      dVar8 = (double)param_3;
      FString::PrintfImpl(&local_88,L"expected a value to be in a range, but %f is not in [%f, %f]",
                          (double)fVar1,(double)param_2,dVar8);
      puVar6 = &DAT_143f3eda8;
      puVar7 = &DAT_143f3eda8;
      if (local_80 != 0) {
        puVar7 = local_88;
      }
      if ((int)plVar3[1] != 0) {
        puVar6 = (undefined2 *)*plVar3;
      }
      FString::PrintfImpl(local_78,L"%s (%s)",puVar6,puVar7,dVar8);
      uVar5 = FString::FString(local_48,plVar4);
      FUN_14065a680(lVar2,param_4,uVar5,local_78);
      if (local_88 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    if (*plVar3 != 0) {
      FMemory::Free();
    }
  }
  if (*param_5 != 0) {
    FMemory::Free();
  }
  if (*param_6 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14065da30 FUN_14065da30 body=411 status=ok
// SIG undefined FUN_14065da30(void)

void FUN_14065da30(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5,longlong *param_6,longlong *param_7)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined2 *puVar7;
  short *psVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *local_58;
  ulonglong local_50;
  short *local_48;
  int local_40;
  undefined1 local_38 [16];
  
  uVar1 = *param_2;
  cVar2 = FUN_140634d10(uVar1,param_3,param_4);
  if (cVar2 != '\0') goto LAB_14065db83;
  FUN_1406366a0(&local_48,uVar1,param_3,param_4);
  puVar10 = &DAT_143f3eda8;
  psVar8 = &DAT_143f3eda8;
  if (local_40 != 0) {
    psVar8 = local_48;
  }
  puVar7 = (undefined2 *)0x0;
  local_58 = (undefined2 *)0x0;
  local_50 = 0;
  if ((psVar8 == (short *)0x0) || (*psVar8 == 0)) {
LAB_14065db1c:
    puVar9 = &DAT_143f3eda8;
  }
  else {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (psVar8[lVar5] != 0);
    uVar4 = (int)lVar5 + 1;
    local_50 = (ulonglong)uVar4;
    uVar6 = uVar4;
    if (0 < (int)uVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      uVar6 = (uint)local_50;
    }
    puVar7 = local_58;
    FGenericPlatformString::Memcpy(local_58,psVar8,(longlong)(int)uVar4 * 2);
    puVar9 = puVar7;
    if (uVar6 == 0) goto LAB_14065db1c;
  }
  if ((int)param_7[1] != 0) {
    puVar10 = (undefined2 *)*param_7;
  }
  FString::PrintfImpl(&local_58,L"%s (%s)",puVar10,puVar9);
  uVar3 = FString::FString(local_38,param_6);
  FUN_14065a680(param_1,param_5,uVar3,&local_58);
  if (puVar7 != (undefined2 *)0x0) {
    FMemory::Free(puVar7);
  }
  if (local_48 != (short *)0x0) {
    FMemory::Free();
  }
LAB_14065db83:
  if (*param_6 != 0) {
    FMemory::Free();
  }
  if (*param_7 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14065dbd0 FUN_14065dbd0 body=541 status=ok
// SIG undefined FUN_14065dbd0(void)

void FUN_14065dbd0(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                  longlong *param_5,longlong *param_6)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  undefined2 *puVar10;
  short *psVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined2 *local_80;
  ulonglong local_78;
  short *local_70;
  int local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [24];
  
  lVar3 = FUN_140650cb0();
  if (lVar3 == 0) goto LAB_14065dda1;
  plVar4 = (longlong *)FString::FString(local_60,param_6);
  plVar5 = (longlong *)FString::FString(local_50,param_5);
  uVar1 = *param_1;
  cVar2 = FUN_140634d10(uVar1,param_2,param_3);
  if (cVar2 == '\0') {
    FUN_1406366a0(&local_70,uVar1,param_2,param_3);
    puVar13 = &DAT_143f3eda8;
    psVar11 = &DAT_143f3eda8;
    if (local_68 != 0) {
      psVar11 = local_70;
    }
    puVar10 = (undefined2 *)0x0;
    local_80 = (undefined2 *)0x0;
    local_78 = 0;
    if ((psVar11 == (short *)0x0) || (*psVar11 == 0)) {
LAB_14065dd01:
      puVar12 = &DAT_143f3eda8;
    }
    else {
      lVar8 = -1;
      do {
        lVar8 = lVar8 + 1;
      } while (psVar11[lVar8] != 0);
      uVar7 = (int)lVar8 + 1;
      local_78 = (ulonglong)uVar7;
      uVar9 = uVar7;
      if (0 < (int)uVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,0);
        uVar9 = (uint)local_78;
      }
      puVar10 = local_80;
      FGenericPlatformString::Memcpy(local_80,psVar11,(longlong)(int)uVar7 * 2);
      puVar12 = puVar10;
      if (uVar9 == 0) goto LAB_14065dd01;
    }
    if ((int)plVar4[1] != 0) {
      puVar13 = (undefined2 *)*plVar4;
    }
    FString::PrintfImpl(&local_80,L"%s (%s)",puVar13,puVar12);
    uVar6 = FString::FString(local_40,plVar5);
    FUN_14065a680(lVar3,param_4,uVar6,&local_80);
    if (puVar10 != (undefined2 *)0x0) {
      FMemory::Free(puVar10);
    }
    if (local_70 != (short *)0x0) {
      FMemory::Free();
    }
  }
  if (*plVar5 != 0) {
    FMemory::Free();
  }
  if (*plVar4 != 0) {
    FMemory::Free();
  }
LAB_14065dda1:
  if (*param_5 != 0) {
    FMemory::Free();
  }
  if (*param_6 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14065ddf0 FUN_14065ddf0 body=216 status=ok
// SIG undefined FUN_14065ddf0(void)

void FUN_14065ddf0(undefined8 param_1,int *param_2,int param_3,int param_4,undefined1 param_5,
                  longlong *param_6,longlong *param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *local_38;
  int local_30;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  iVar1 = *param_2;
  if ((iVar1 < param_3) || (param_4 < iVar1)) {
    FString::PrintfImpl(&local_38,L"expected a value to be in a range, but %d is not in [%d, %d]",
                        iVar1,param_3,param_4);
    puVar3 = &DAT_143f3eda8;
    puVar4 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar4 = local_38;
    }
    if ((int)param_7[1] != 0) {
      puVar3 = (undefined2 *)*param_7;
    }
    FString::PrintfImpl(local_28,L"%s (%s)",puVar3,puVar4,param_4);
    uVar2 = FString::FString(local_18,param_6);
    FUN_14065a680(param_1,param_5,uVar2,local_28);
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (*param_6 != 0) {
    FMemory::Free();
  }
  if (*param_7 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14065ded0 FUN_14065ded0 body=388 status=ok
// SIG undefined FUN_14065ded0(void)

void FUN_14065ded0(int *param_1,int param_2,int param_3,undefined1 param_4,longlong *param_5,
                  longlong *param_6)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *local_78;
  int local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  lVar2 = FUN_140650cb0();
  if (lVar2 != 0) {
    plVar3 = (longlong *)FString::FString(local_58,param_6);
    plVar4 = (longlong *)FString::FString(local_48,param_5);
    iVar1 = *param_1;
    if ((iVar1 < param_2) || (param_3 < iVar1)) {
      FString::PrintfImpl(&local_78,L"expected a value to be in a range, but %d is not in [%d, %d]",
                          iVar1,param_2,param_3);
      puVar6 = &DAT_143f3eda8;
      puVar7 = &DAT_143f3eda8;
      if (local_70 != 0) {
        puVar7 = local_78;
      }
      if ((int)plVar3[1] != 0) {
        puVar6 = (undefined2 *)*plVar3;
      }
      FString::PrintfImpl(local_68,L"%s (%s)",puVar6,puVar7,param_3);
      uVar5 = FString::FString(local_38,plVar4);
      FUN_14065a680(lVar2,param_4,uVar5,local_68);
      if (local_78 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    if (*plVar3 != 0) {
      FMemory::Free();
    }
  }
  if (*param_5 != 0) {
    FMemory::Free();
  }
  if (*param_6 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14065e080 FUN_14065e080 body=527 status=ok
// SIG undefined FUN_14065e080(void)

undefined8 * FUN_14065e080(undefined8 *param_1,undefined1 param_2)

{
  longlong lVar1;
  
  switch(param_2) {
  case 0:
    *param_1 = DAT_1469ea5b8;
    param_1[1] = DAT_1469ea5c0;
    lVar1 = DAT_1469ea5c8;
    break;
  case 1:
    *param_1 = DAT_1469ea5d0;
    param_1[1] = DAT_1469ea5d8;
    lVar1 = DAT_1469ea5e0;
    break;
  case 2:
    *param_1 = DAT_1469ea600;
    param_1[1] = DAT_1469ea608;
    lVar1 = DAT_1469ea610;
    break;
  case 3:
    *param_1 = DAT_1469ea5e8;
    param_1[1] = DAT_1469ea5f0;
    lVar1 = DAT_1469ea5f8;
    break;
  case 4:
    *param_1 = DAT_1469ea540;
    param_1[1] = DAT_1469ea548;
    lVar1 = DAT_1469ea550;
    break;
  case 5:
    *param_1 = DAT_1469ea4f8;
    param_1[1] = DAT_1469ea500;
    lVar1 = DAT_1469ea508;
    break;
  case 6:
    *param_1 = DAT_1469ea528;
    param_1[1] = DAT_1469ea530;
    lVar1 = DAT_1469ea538;
    break;
  case 7:
    *param_1 = DAT_1469ea510;
    param_1[1] = DAT_1469ea518;
    lVar1 = DAT_1469ea520;
    break;
  case 8:
    *param_1 = DAT_1469ea468;
    param_1[1] = DAT_1469ea470;
    lVar1 = DAT_1469ea478;
    break;
  case 9:
    *param_1 = DAT_1469ea558;
    param_1[1] = DAT_1469ea560;
    lVar1 = DAT_1469ea568;
    break;
  case 10:
    *param_1 = DAT_1469ea588;
    param_1[1] = DAT_1469ea590;
    lVar1 = DAT_1469ea598;
    break;
  case 0xb:
    *param_1 = DAT_1469ea480;
    param_1[1] = DAT_1469ea488;
    lVar1 = DAT_1469ea490;
    break;
  case 0xc:
    *param_1 = DAT_1469ea570;
    param_1[1] = DAT_1469ea578;
    lVar1 = DAT_1469ea580;
    break;
  case 0xd:
    *param_1 = DAT_1469ea5a0;
    param_1[1] = DAT_1469ea5a8;
    lVar1 = DAT_1469ea5b0;
    break;
  default:
    *param_1 = DAT_1469eae28;
    param_1[1] = DAT_1469eae30;
    lVar1 = DAT_1469eae38;
  }
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 14065e2d0 FUN_14065e2d0 body=83 status=ok
// SIG undefined FUN_14065e2d0(void)

wchar_t * FUN_14065e2d0(undefined1 param_1)

{
  switch(param_1) {
  case 0:
    return L"equal to";
  case 1:
    return L"not equal to";
  case 2:
    return L"greater than";
  case 3:
    return L"greater than or equal to";
  case 4:
    return L"less than";
  case 5:
    return L"less than or equal to";
  default:
    return L"uncomparable to";
  }
}



// FUNCTION 14065e340 FUN_14065e340 body=83 status=ok
// SIG undefined FUN_14065e340(void)

undefined * FUN_14065e340(undefined1 param_1)

{
  switch(param_1) {
  case 0:
    return &DAT_144022ba4;
  case 1:
    return &DAT_144022c44;
  case 2:
    return &DAT_14401f82c;
  case 3:
    return &DAT_144022cf4;
  case 4:
    return &DAT_14401f854;
  case 5:
    return &DAT_144022ef4;
  default:
    return &DAT_14401f87c;
  }
}



// FUNCTION 14065e3b0 FUN_14065e3b0 body=63 status=ok
// SIG undefined FUN_14065e3b0(void)

void FUN_14065e3b0(longlong param_1)

{
  LARGE_INTEGER local_res8 [4];
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    QueryPerformanceCounter(local_res8);
    *(double *)(param_1 + 0x18) = (double)local_res8[0].QuadPart * DAT_1468b02f8 + 16777216.0;
  }
  return;
}



// FUNCTION 14065e400 FUN_14065e400 body=71 status=ok
// SIG undefined FUN_14065e400(void)

void FUN_14065e400(longlong param_1)

{
  FMulticastDelegateBase<FWeakObjectPtr>::Clear(param_1 + 0x70);
  FMulticastDelegateBase<FWeakObjectPtr>::Clear(param_1 + 0xb0);
  FMulticastDelegateBase<FWeakObjectPtr>::Clear(param_1 + 0xf8);
  FMulticastDelegateBase<FWeakObjectPtr>::Clear(param_1 + 0x110);
  FMulticastDelegateBase<FWeakObjectPtr>::Clear(param_1 + 0x128);
  return;
}



// FUNCTION 14065e450 FUN_14065e450 body=1116 status=ok
// SIG undefined FUN_14065e450(void)

void FUN_14065e450(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xa8);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0xa8);
    lVar5 = *(longlong *)(param_1 + 0x140);
    uVar8 = 0;
    uVar7 = uVar8;
    uVar10 = uVar8;
    if (0 < *(int *)(lVar3 + 0x78)) {
      do {
        plVar11 = (longlong *)(*(longlong *)(lVar3 + 0x70) + uVar10);
        if ((((int)plVar11[1] != 0) && (plVar4 = (longlong *)*plVar11, plVar4 != (longlong *)0x0))
           && (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8),
              *plVar4 == lVar5)) {
          if (((int)plVar11[1] != 0) && (plVar4 = (longlong *)*plVar11, plVar4 != (longlong *)0x0))
          {
            (**(code **)(*plVar4 + 0x28))(plVar4,0);
            if (*plVar11 != 0) {
              lVar5 = FMemory::Realloc(*plVar11,0,0);
              *plVar11 = lVar5;
            }
            *(undefined4 *)(plVar11 + 1) = 0;
          }
          break;
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        uVar10 = uVar10 + 0x10;
      } while ((int)uVar6 < *(int *)(lVar3 + 0x78));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar3 + 0x70,0);
    lVar5 = *(longlong *)(param_1 + 0x148);
    uVar7 = uVar8;
    uVar10 = uVar8;
    if (0 < *(int *)(lVar3 + 0x90)) {
      do {
        plVar11 = (longlong *)(*(longlong *)(lVar3 + 0x88) + uVar10);
        if ((((int)plVar11[1] != 0) && (plVar4 = (longlong *)*plVar11, plVar4 != (longlong *)0x0))
           && (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8),
              *plVar4 == lVar5)) {
          if (((int)plVar11[1] != 0) && (plVar4 = (longlong *)*plVar11, plVar4 != (longlong *)0x0))
          {
            (**(code **)(*plVar4 + 0x28))(plVar4,0);
            if (*plVar11 != 0) {
              lVar5 = FMemory::Realloc(*plVar11,0,0);
              *plVar11 = lVar5;
            }
            *(undefined4 *)(plVar11 + 1) = 0;
          }
          break;
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        uVar10 = uVar10 + 0x10;
      } while ((int)uVar6 < *(int *)(lVar3 + 0x90));
    }
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar3 + 0x88,0);
    if (lVar3 != 0) {
      lVar5 = UViewport::GetPrivateStaticClass();
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
        lVar5 = *(longlong *)(param_1 + 0x150);
        iVar9 = 0;
        if (0 < *(int *)(lVar3 + 0xb8)) {
          lVar12 = 0;
          do {
            plVar11 = (longlong *)(*(longlong *)(lVar3 + 0xb0) + lVar12);
            if ((((int)plVar11[1] != 0) &&
                (plVar4 = (longlong *)*plVar11, plVar4 != (longlong *)0x0)) &&
               (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8),
               *plVar4 == lVar5)) {
              if (((int)plVar11[1] != 0) &&
                 (plVar4 = (longlong *)*plVar11, plVar4 != (longlong *)0x0)) {
                (**(code **)(*plVar4 + 0x28))(plVar4,0);
                if (*plVar11 != 0) {
                  lVar5 = FMemory::Realloc(*plVar11,0,0);
                  *plVar11 = lVar5;
                }
                *(undefined4 *)(plVar11 + 1) = 0;
              }
              break;
            }
            iVar9 = iVar9 + 1;
            lVar12 = lVar12 + 0x10;
          } while (iVar9 < *(int *)(lVar3 + 0xb8));
        }
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar3 + 0xb0,0);
        TBaseMulticastDelegate<void>::Remove(lVar3 + 0xe0,*(undefined8 *)(param_1 + 0x158));
        lVar5 = *(longlong *)(param_1 + 0x160);
        uVar7 = uVar8;
        uVar10 = uVar8;
        if (0 < *(int *)(lVar3 + 0xd0)) {
          do {
            plVar11 = (longlong *)(*(longlong *)(lVar3 + 200) + uVar10);
            if ((((int)plVar11[1] != 0) &&
                (plVar4 = (longlong *)*plVar11, plVar4 != (longlong *)0x0)) &&
               (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8),
               *plVar4 == lVar5)) {
              if (((int)plVar11[1] != 0) &&
                 (plVar4 = (longlong *)*plVar11, plVar4 != (longlong *)0x0)) {
                (**(code **)(*plVar4 + 0x28))(plVar4,0);
                if (*plVar11 != 0) {
                  lVar5 = FMemory::Realloc(*plVar11,0,0);
                  *plVar11 = lVar5;
                }
                *(undefined4 *)(plVar11 + 1) = 0;
              }
              break;
            }
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
            uVar10 = uVar10 + 0x10;
          } while ((int)uVar6 < *(int *)(lVar3 + 0xd0));
        }
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar3 + 200,0);
        TBaseMulticastDelegate<void>::Remove(lVar3 + 0xf8,*(undefined8 *)(param_1 + 0x168));
        lVar5 = *(longlong *)(param_1 + 0x170);
        uVar7 = uVar8;
        uVar10 = uVar8;
        if (0 < *(int *)(lVar3 + 0x118)) {
          do {
            plVar11 = (longlong *)(*(longlong *)(lVar3 + 0x110) + uVar10);
            if ((((int)plVar11[1] != 0) &&
                (plVar4 = (longlong *)*plVar11, plVar4 != (longlong *)0x0)) &&
               (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8),
               *plVar4 == lVar5)) {
              if (((int)plVar11[1] != 0) &&
                 (plVar4 = (longlong *)*plVar11, plVar4 != (longlong *)0x0)) {
                (**(code **)(*plVar4 + 0x28))(plVar4,0);
                if (*plVar11 != 0) {
                  lVar5 = FMemory::Realloc(*plVar11,0,0);
                  *plVar11 = lVar5;
                }
                *(undefined4 *)(plVar11 + 1) = 0;
              }
              break;
            }
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
            uVar10 = uVar10 + 0x10;
          } while ((int)uVar6 < *(int *)(lVar3 + 0x118));
        }
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar3 + 0x110,0);
        lVar5 = *(longlong *)(param_1 + 0x178);
        uVar7 = uVar8;
        if (0 < *(int *)(lVar3 + 0x130)) {
          do {
            plVar11 = (longlong *)(*(longlong *)(lVar3 + 0x128) + uVar7);
            if ((((int)plVar11[1] != 0) &&
                (plVar4 = (longlong *)*plVar11, plVar4 != (longlong *)0x0)) &&
               (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8),
               *plVar4 == lVar5)) {
              if (((int)plVar11[1] != 0) &&
                 (plVar4 = (longlong *)*plVar11, plVar4 != (longlong *)0x0)) {
                (**(code **)(*plVar4 + 0x28))(plVar4,0);
                if (*plVar11 != 0) {
                  lVar5 = FMemory::Realloc(*plVar11,0,0);
                  *plVar11 = lVar5;
                }
                *(undefined4 *)(plVar11 + 1) = 0;
              }
              break;
            }
            uVar6 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar6;
            uVar7 = uVar7 + 0x10;
          } while ((int)uVar6 < *(int *)(lVar3 + 0x130));
        }
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(lVar3 + 0x128,0);
      }
    }
  }
  return;
}



// FUNCTION 14065e8b0 FUN_14065e8b0 body=1111 status=ok
// SIG undefined FUN_14065e8b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14065e8b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  short *psVar10;
  short *psVar11;
  short *psVar12;
  undefined1 auStack_128 [32];
  short *local_108;
  undefined8 local_100;
  int local_f8 [2];
  longlong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  short *local_c0;
  int local_b8;
  longlong local_b0 [2];
  undefined1 local_a0 [44];
  undefined4 local_74;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  if ((*(int *)(*(longlong *)(param_1 + 0x30) + 0x138) == *(int *)(param_1 + 0x38)) &&
     (*(longlong *)(param_1 + 0x40) != 0)) {
    lVar1 = FUN_1428dfc70();
    for (lVar3 = *(longlong *)(param_1 + 0x40); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar1) {
        if (*(longlong *)(param_1 + 0x40) == 0) {
          return 1;
        }
        puVar6 = *(undefined8 **)(DAT_146b17150 + 0xc18);
        puVar5 = puVar6 + *(int *)(DAT_146b17150 + 0xc20);
        while( true ) {
          if (puVar6 == puVar5) {
            return 1;
          }
          if (((*(char *)*puVar6 - 1U & 0xfd) == 0) &&
             (lVar3 = *(longlong *)((char *)*puVar6 + 0x288), lVar3 != 0)) break;
          puVar6 = puVar6 + 1;
        }
        FActorSpawnParameters::FActorSpawnParameters(local_a0);
        local_74 = 0x40;
        local_48 = _DAT_1468563b0 & _DAT_1468563c0;
        uStack_44 = uRam00000001468563b4 & uRam00000001468563c4;
        uStack_40 = uRam00000001468563b8 & uRam00000001468563c8;
        uStack_3c = uRam00000001468563bc & uRam00000001468563cc;
        lVar8 = 0;
        local_68 = 0;
        uStack_64 = 0;
        uStack_60 = 0;
        uStack_5c = uRam00000001468563bc;
        local_58 = 0;
        uStack_50 = 0;
        lVar1 = lVar8;
        if (*(longlong *)(param_1 + 0x40) != 0) {
          lVar2 = FUN_1428dfc70();
          for (lVar4 = *(longlong *)(param_1 + 0x40);
              (lVar1 = lVar8, lVar4 != 0 && (lVar1 = *(longlong *)(param_1 + 0x40), lVar4 != lVar2))
              ; lVar4 = *(longlong *)(lVar4 + 0x30)) {
          }
        }
        lVar3 = FUN_142550d00(lVar3,lVar1,&local_68,local_a0);
        if (lVar3 != 0) {
          FWeakObjectPtr::operator=(*(longlong *)(param_1 + 0x30) + 0xb0,lVar3);
          return 1;
        }
        lVar3 = lVar8;
        if (*(longlong *)(param_1 + 0x40) != 0) {
          lVar4 = FUN_1428dfc70();
          for (lVar1 = *(longlong *)(param_1 + 0x40);
              (lVar3 = lVar8, lVar1 != 0 && (lVar3 = *(longlong *)(param_1 + 0x40), lVar1 != lVar4))
              ; lVar1 = *(longlong *)(lVar1 + 0x30)) {
          }
        }
        puVar5 = (undefined8 *)UObjectBaseUtility::GetFullName(lVar3,local_b0,0);
        if (*(int *)(puVar5 + 1) == 0) {
          psVar10 = &DAT_143f3eda8;
        }
        else {
          psVar10 = (short *)*puVar5;
        }
        puVar6 = *(undefined8 **)(DAT_146b17150 + 0xc18);
        puVar5 = puVar6 + *(int *)(DAT_146b17150 + 0xc20);
        if (puVar6 == puVar5) {
LAB_14065eac7:
          local_108 = (short *)0x0;
          local_100 = 0;
        }
        else {
          while (((*(char *)*puVar6 - 1U & 0xfd) != 0 ||
                 (lVar3 = *(longlong *)((char *)*puVar6 + 0x288), lVar3 == 0))) {
            puVar6 = puVar6 + 1;
            if (puVar6 == puVar5) goto LAB_14065eac7;
          }
          FUN_1428cc8c0(lVar3,&local_108);
          psVar12 = local_108;
          if ((int)local_100 != 0) goto LAB_14065ead4;
        }
        psVar12 = &DAT_143f3eda8;
LAB_14065ead4:
        FUN_1406505a0(*(undefined8 *)(param_1 + 0x30),&local_c0);
        local_f8[0] = 6;
        lVar3 = -1;
        psVar11 = &DAT_143f3eda8;
        if (local_b8 != 0) {
          psVar11 = local_c0;
        }
        local_f0 = 0;
        local_e8 = 0;
        if ((psVar11 != (short *)0x0) && (*psVar11 != 0)) {
          lVar1 = -1;
          do {
            lVar1 = lVar1 + 1;
          } while (psVar11[lVar1] != 0);
          uVar9 = (int)lVar1 + 1;
          local_e8 = (ulonglong)uVar9;
          if (0 < (int)uVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f0,0);
          }
          FGenericPlatformString::Memcpy(local_f0,psVar11,(longlong)(int)uVar9 * 2);
        }
        local_e0 = 0;
        local_d8 = 0;
        if ((psVar12 != (short *)0x0) && (*psVar12 != 0)) {
          lVar1 = -1;
          do {
            lVar1 = lVar1 + 1;
          } while (psVar12[lVar1] != 0);
          uVar9 = (int)lVar1 + 1;
          local_d8 = (ulonglong)uVar9;
          if (0 < (int)uVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e0,0);
          }
          FGenericPlatformString::Memcpy(local_e0,psVar12,(longlong)(int)uVar9 * 2);
        }
        local_d0 = 0;
        local_c8 = 0;
        if ((psVar10 != (short *)0x0) && (*psVar10 != 0)) {
          do {
            lVar3 = lVar3 + 1;
          } while (psVar10[lVar3] != 0);
          uVar9 = (int)lVar3 + 1;
          local_c8 = (ulonglong)uVar9;
          if (0 < (int)uVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d0,0);
          }
          FGenericPlatformString::Memcpy(local_d0,psVar10,(longlong)(int)uVar9 * 2);
        }
        if (local_c0 != (short *)0x0) {
          FMemory::Free();
        }
        if (local_108 != (short *)0x0) {
          FMemory::Free();
        }
        if (local_b0[0] != 0) {
          FMemory::Free();
        }
        lVar3 = *(longlong *)(param_1 + 0x30);
        *(int *)(lVar3 + 0x138) = *(int *)(lVar3 + 0x138) + 1;
        *(undefined1 *)(lVar3 + 0x130) = 0;
        *(undefined1 *)(lVar3 + 0x181) = 0;
        puVar5 = (undefined8 *)FName::FName(&local_108,"GbxTest",1);
        plVar7 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar5);
        if ((plVar7 != (longlong *)0x0) && (local_f8[0] != 0)) {
          (**(code **)(*plVar7 + 0xc0))(plVar7,local_f8);
        }
        if (local_d0 != 0) {
          FMemory::Free();
        }
        if (local_e0 != 0) {
          FMemory::Free();
        }
        if (local_f0 == 0) {
          return 1;
        }
        FMemory::Free();
        return 1;
      }
    }
  }
  return 1;
}



// FUNCTION 14065ed10 FUN_14065ed10 body=273 status=ok
// SIG undefined FUN_14065ed10(void)

undefined8 FUN_14065ed10(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined2 *local_18;
  int local_10;
  
  if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x138) == *(int *)(param_1 + 0x28)) {
    puVar4 = *(undefined8 **)(DAT_146b17150 + 0xc18);
    puVar1 = puVar4 + *(int *)(DAT_146b17150 + 0xc20);
    if (puVar4 != puVar1) {
      while (((*(char *)*puVar4 - 1U & 0xfd) != 0 ||
             (lVar2 = *(longlong *)((char *)*puVar4 + 0x288), lVar2 == 0))) {
        puVar4 = puVar4 + 1;
        if (puVar4 == puVar1) {
          return 1;
        }
      }
      if (*(int *)(param_1 + 0x38) == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = *(undefined2 **)(param_1 + 0x30);
      }
      FString::PrintfImpl(&local_18,L"Open %s",puVar6);
      puVar6 = &DAT_143f3eda8;
      if (local_10 != 0) {
        puVar6 = local_18;
      }
      lVar3 = *(longlong *)(DAT_146b17150 + 0x28);
      uVar5 = FUN_141672640();
      (**(code **)(lVar3 + 8))(DAT_146b17150 + 0x28,lVar2,puVar6,uVar5);
      if (local_18 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      return 1;
    }
  }
  return 1;
}



// FUNCTION 14065ee30 FUN_14065ee30 body=241 status=ok
// SIG undefined FUN_14065ee30(void)

bool FUN_14065ee30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 local_28;
  longlong local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x138) == *(int *)(param_1 + 0x28)) {
    lVar4 = FUN_141649d10();
    if ((**(longlong **)(lVar4 + 0x178) == 0) ||
       ((**(longlong **)(lVar4 + 0x178) != 0 && (*(longlong *)**(undefined8 **)(lVar4 + 0x178) == 0)
        ))) {
      return *(char *)(*(longlong *)(param_1 + 0x20) + 0x181) == '\0';
    }
    puVar5 = (undefined8 *)
             TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_18);
    local_28 = *puVar5;
    local_20 = puVar5[1];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    uVar6 = FUN_141649d10();
    FUN_1416473a0(uVar6,&local_28);
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
    }
  }
  return true;
}



// FUNCTION 14065ef30 FUN_14065ef30 body=147 status=ok
// SIG undefined FUN_14065ef30(void)

undefined8 FUN_14065ef30(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x138) == *(int *)(param_1 + 0x28)) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x30);
    lVar3 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x20) + 0xa8);
    if (lVar3 != 0) {
      lVar4 = UViewport::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        FUN_1406706e0(lVar3,uVar2);
      }
    }
    return 1;
  }
  return 1;
}



// FUNCTION 14065efd0 FUN_14065efd0 body=137 status=ok
// SIG undefined FUN_14065efd0(void)

undefined8 FUN_14065efd0(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  double dVar4;
  BOOL BVar5;
  ulonglong uVar6;
  undefined4 extraout_var;
  double dVar7;
  LARGE_INTEGER local_res8 [4];
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(lVar2 + 0x138) == *(uint *)(param_1 + 0x28)) {
    fVar1 = *(float *)(param_1 + 0x34);
    dVar4 = 0.0;
    if (*(float *)(param_1 + 0x30) < 0.0) {
      dVar7 = 0.0;
    }
    else {
      dVar7 = (double)*(float *)(param_1 + 0x30);
    }
    *(double *)(lVar2 + 0x110) = dVar7;
    if (0.0 <= fVar1) {
      dVar4 = (double)fVar1;
    }
    *(double *)(lVar2 + 0x118) = dVar4;
    BVar5 = QueryPerformanceCounter(local_res8);
    uVar6 = CONCAT44(extraout_var,BVar5);
    dVar4 = (double)local_res8[0].QuadPart * DAT_1468b02f8;
    *(undefined1 *)(lVar2 + 0x130) = 1;
    dVar4 = dVar4 + 16777216.0;
    auVar3._8_4_ = SUB84(dVar4,0);
    auVar3._0_8_ = dVar4;
    auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *(undefined1 (*) [16])(lVar2 + 0x120) = auVar3;
  }
  return CONCAT71((int7)(uVar6 >> 8),1);
}



// FUNCTION 14065f070 FUN_14065f070 body=184 status=ok
// SIG undefined FUN_14065f070(void)

undefined8 FUN_14065f070(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  BOOL BVar4;
  undefined4 extraout_var;
  uint7 uVar6;
  ulonglong uVar5;
  bool bVar7;
  double dVar8;
  LARGE_INTEGER local_res8 [4];
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  uVar1 = *(uint *)(param_1 + 0x28);
  uVar5 = (ulonglong)uVar1;
  if (*(uint *)(lVar2 + 0x138) != uVar1) {
    return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  }
  bVar7 = *(char *)(lVar2 + 0x130) == '\0';
  if (!bVar7) {
    BVar4 = QueryPerformanceCounter(local_res8);
    dVar8 = (double)local_res8[0].QuadPart * DAT_1468b02f8 + 16777216.0;
    if ((*(double *)(lVar2 + 0x110) == 0.0) ||
       (dVar8 - *(double *)(lVar2 + 0x128) < *(double *)(lVar2 + 0x110))) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    uVar6 = (uint7)(CONCAT44(extraout_var,BVar4) >> 8);
    if ((*(double *)(lVar2 + 0x118) == 0.0) ||
       (dVar8 - *(double *)(lVar2 + 0x120) < *(double *)(lVar2 + 0x118))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar7) && (bVar3)) {
      uVar5 = CONCAT71(uVar6,1);
    }
    else {
      uVar5 = (ulonglong)uVar6 << 8;
    }
    *(char *)(lVar2 + 0x130) = (char)uVar5;
    bVar7 = (char)uVar5 == '\0';
  }
  return CONCAT71((int7)(uVar5 >> 8),bVar7);
}



// FUNCTION 14065f130 FUN_14065f130 body=211 status=ok
// SIG undefined FUN_14065f130(void)

undefined8 FUN_14065f130(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x138) == *(int *)(param_1 + 0x28)) {
    lVar5 = 0;
    puVar4 = *(undefined8 **)(DAT_146b17150 + 0xc18);
    puVar1 = puVar4 + *(int *)(DAT_146b17150 + 0xc20);
    for (; (lVar6 = 0, puVar4 != puVar1 &&
           (((*(char *)*puVar4 - 1U & 0xfd) != 0 ||
            (lVar6 = *(longlong *)((char *)*puVar4 + 0x288), lVar6 == 0)))); puVar4 = puVar4 + 1) {
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
    cVar3 = FWeakObjectPtr::IsValid(lVar2 + 0xb0);
    if (cVar3 != '\0') {
      lVar5 = FWeakObjectPtr::Get(lVar2 + 0xb0);
    }
    if ((lVar6 != 0) && (lVar5 != 0)) {
      FUN_142543860(lVar6,lVar5,0,0);
    }
    return 1;
  }
  return 1;
}



// FUNCTION 14065f240 FUN_14065f240 body=95 status=ok
// SIG undefined FUN_14065f240(void)

undefined8 FUN_14065f240(longlong param_1)

{
  BOOL BVar1;
  undefined4 extraout_var;
  LARGE_INTEGER local_res8 [4];
  
  if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x138) != *(int *)(param_1 + 0x28)) {
    return CONCAT71((uint7)(uint3)((uint)*(int *)(param_1 + 0x28) >> 8),1);
  }
  BVar1 = QueryPerformanceCounter(local_res8);
  return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),
                  (double)*(float *)(param_1 + 0x30) <=
                  ((double)local_res8[0].QuadPart * DAT_1468b02f8 + 16777216.0) -
                  *(double *)(param_1 + 0x18));
}



// FUNCTION 14065f2a0 FUN_14065f2a0 body=203 status=ok
// SIG undefined FUN_14065f2a0(void)

void FUN_14065f2a0(longlong param_1,undefined8 param_2)

{
  double dVar1;
  char cVar2;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  cVar2 = '\0';
  dVar1 = (double)local_res8.QuadPart * DAT_1468b02f8;
  do {
    QueryPerformanceCounter(&local_res8);
    if (10.0 <= (double)local_res8.QuadPart * DAT_1468b02f8 - dVar1) break;
    cVar2 = FUN_140659ba0(param_1);
  } while (cVar2 == '\0');
  FWeakObjectPtr::operator=(&local_res8,*(undefined8 *)(param_1 + 0x18));
  FLatentResponse::FinishAndTriggerIf
            (param_2,cVar2,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 8),&local_res8)
  ;
  return;
}



// FUNCTION 14065f370 FUN_14065f370 body=247 status=ok
// SIG undefined FUN_14065f370(void)

void FUN_14065f370(longlong param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  if (*(char *)(param_1 + 0x4d) != '\0') {
    local_res8 = *(undefined4 *)(param_1 + 0x1c);
    local_resc = *(undefined4 *)(param_1 + 0x20);
    puVar7 = &local_res8;
    FLatentResponse::FinishAndTriggerIf
              (param_2,*(char *)(param_1 + 0x4d),*(undefined8 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x18),puVar7);
    uVar8 = (undefined4)((ulonglong)puVar7 >> 0x20);
  }
  fVar6 = *(float *)(param_2 + 0x74);
  fVar1 = *(float *)(param_1 + 0x40);
  fVar5 = fVar6 + *(float *)(param_1 + 0x44);
  *(float *)(param_1 + 0x44) = fVar5;
  *(bool *)(param_1 + 0x4d) = fVar1 <= fVar5;
  if (fVar1 <= fVar5) {
    fVar6 = fVar5 - fVar1;
  }
  plVar4 = *(longlong **)(param_1 + 8);
  fVar5 = *(float *)(param_1 + 0x48);
  if (plVar4 != (longlong *)0x0) {
    local_48 = *(undefined8 *)(param_1 + 0x28);
    local_40 = *(undefined8 *)(param_1 + 0x30);
    local_38 = *(longlong *)(param_1 + 0x38);
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 8);
    }
    lVar2 = *plVar4;
    uVar3 = FKey::IsGamepadKey();
    (**(code **)(lVar2 + 0xd08))
              (*(undefined8 *)(param_1 + 8),&local_48,(fVar6 / fVar1) * fVar5,fVar6,
               CONCAT44(uVar8,1),uVar3);
  }
  return;
}



// FUNCTION 14065f470 FUN_14065f470 body=240 status=ok
// SIG undefined FUN_14065f470(void)

void FUN_14065f470(longlong param_1,longlong param_2)

{
  char cVar1;
  float fVar2;
  undefined1 local_res8 [8];
  
  if (*(char *)(param_1 + 0x4a) != '\0') {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x20);
    if (cVar1 != '\0') {
      FWeakObjectPtr::Get(param_1 + 0x20);
    }
    FWeakObjectPtr::operator=(local_res8,*(undefined8 *)(param_1 + 0x18));
    FLatentResponse::FinishAndTriggerIf
              (param_2,*(undefined1 *)(param_1 + 0x4a),*(undefined8 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 8),local_res8);
  }
  fVar2 = *(float *)(param_2 + 0x74);
  *(float *)(param_1 + 0x38) = fVar2;
  *(float *)(param_1 + 0x3c) = fVar2 + *(float *)(param_1 + 0x3c);
  if (*(float *)(param_1 + 0x40) <= 0.0) {
LAB_14065f50f:
    if (0 < *(int *)(param_1 + 0x30)) {
      FUN_140658460(param_1);
      if (0 < *(int *)(param_1 + 0x30)) goto LAB_14065f53c;
    }
    if ((*(float *)(param_1 + 0x44) <= 0.0) ||
       (fVar2 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x38),
       *(float *)(param_1 + 0x44) = fVar2, fVar2 <= 0.0)) goto LAB_14065f551;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x40) - fVar2;
    *(float *)(param_1 + 0x40) = fVar2;
    if (fVar2 <= 0.0) goto LAB_14065f50f;
  }
LAB_14065f53c:
  if (*(char *)(param_1 + 0x4a) == '\0') {
    *(undefined1 *)(param_1 + 0x4a) = 0;
    return;
  }
LAB_14065f551:
  *(undefined1 *)(param_1 + 0x4a) = 1;
  return;
}



// FUNCTION 14065f560 FUN_14065f560 body=91 status=ok
// SIG undefined FUN_14065f560(void)

void FUN_14065f560(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 local_res8 [8];
  
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar1 + -1;
  FWeakObjectPtr::operator=(local_res8,*(undefined8 *)(param_1 + 0x20));
  FLatentResponse::FinishAndTriggerIf
            (param_2,iVar1 < 1,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10),
             local_res8);
  return;
}



// FUNCTION 14065f5c0 FUN_14065f5c0 body=144 status=ok
// SIG undefined FUN_14065f5c0(void)

void FUN_14065f5c0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0x52) == '\0') {
      if (*(char *)(lVar1 + 0x50) != '\0') {
        uVar2 = 0;
        goto LAB_14065f609;
      }
    }
    else {
      *(undefined2 *)(lVar1 + 0x51) = 0;
      *(undefined1 *)(lVar1 + 0x50) = 0;
      *(undefined4 *)(lVar1 + 0x28) = 0;
      if (*(int *)(lVar1 + 0x2c) != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar1 + 0x20,0);
      }
    }
  }
  uVar2 = 1;
LAB_14065f609:
  FWeakObjectPtr::operator=(local_res8,*(undefined8 *)(param_1 + 0x28));
  FLatentResponse::FinishAndTriggerIf
            (param_2,uVar2,*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x18),
             local_res8);
  return;
}



// FUNCTION 14065f650 FUN_14065f650 body=505 status=ok
// SIG undefined FUN_14065f650(void)

void FUN_14065f650(undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  int local_res20 [2];
  undefined8 local_58;
  undefined8 local_50 [2];
  int local_40;
  int iStack_3c;
  
  lVar8 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar8 != 0) {
    if (*(longlong *)(lVar8 + 400) == 0) {
      plVar12 = (longlong *)(lVar8 + 0x400);
    }
    else {
      plVar12 = *(longlong **)(*(longlong *)(lVar8 + 400) + 0x98);
    }
    iVar1 = param_3[1];
    FWeakObjectPtr::operator=(&local_58,*(undefined8 *)(param_3 + 4));
    local_50[0] = local_58;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(plVar12,local_res20,local_50);
    plVar11 = (longlong *)0x0;
    plVar10 = plVar11;
    if (local_res20[0] != -1) {
      plVar10 = (longlong *)((longlong)local_res20[0] * 0x20 + *plVar12);
    }
    plVar9 = plVar10 + 1;
    if (plVar10 == (longlong *)0x0) {
      plVar9 = plVar11;
    }
    plVar10 = plVar11;
    if (plVar9 != (longlong *)0x0) {
      plVar10 = (longlong *)*plVar9;
    }
    if ((plVar10 != (longlong *)0x0) &&
       (iVar7 = TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
                ::Num(plVar10,iVar1), 0 < iVar7)) {
      iStack_3c = -1;
      local_40 = iVar1;
      TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(plVar10,(int)plVar10[1] - *(int *)((longlong)plVar10 + 0x34),0);
      iVar7 = -1;
      if ((int)plVar10[9] != 0) {
        plVar9 = (longlong *)plVar10[8];
        if ((longlong *)plVar10[8] == (longlong *)0x0) {
          plVar9 = plVar10 + 7;
        }
        iVar7 = *(int *)((longlong)plVar9 + ((longlong)(int)plVar10[9] - 1U & (longlong)iVar1) * 4);
        iStack_3c = iVar7;
        if (iVar7 != -1) {
          do {
            iVar2 = *(int *)(*plVar10 + 0x10 + (longlong)iVar7 * 0x18);
            iStack_3c = iVar7;
            if (*(int *)(*plVar10 + (longlong)iVar7 * 0x18) == iVar1) break;
            iVar7 = iVar2;
            iStack_3c = iVar2;
          } while (iVar2 != -1);
        }
      }
      if ((iStack_3c != -1) && (*(longlong *)(*plVar10 + 8 + (longlong)iVar7 * 0x18) != 0)) {
        return;
      }
    }
    plVar10 = (longlong *)operator_new(0x28);
    if (plVar10 != (longlong *)0x0) {
      uVar3 = *param_3;
      uVar4 = param_3[1];
      uVar5 = param_3[2];
      uVar6 = param_3[3];
      *(undefined4 *)(plVar10 + 1) = param_2;
      lVar8 = *(longlong *)(param_3 + 4);
      *(undefined4 *)(plVar10 + 2) = uVar3;
      *(undefined4 *)((longlong)plVar10 + 0x14) = uVar4;
      *(undefined4 *)(plVar10 + 3) = uVar5;
      *(undefined4 *)((longlong)plVar10 + 0x1c) = uVar6;
      *plVar10 = (longlong)&PTR_FUN_1440271f8;
      plVar10[4] = lVar8;
      plVar11 = plVar10;
    }
    FUN_142514cf0(plVar12,*(undefined8 *)(param_3 + 4),iVar1,plVar11);
  }
  return;
}



// FUNCTION 14065f850 FUN_14065f850 body=275 status=ok
// SIG undefined FUN_14065f850(void)

void FUN_14065f850(longlong param_1,wchar_t param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  void *pvVar5;
  
  if ((*(int *)(*(longlong *)(param_1 + 8) + 8) != 6) ||
     ((*(byte *)(*(longlong *)(param_1 + 8) + 0xc) & 4) != 0)) {
    puVar3 = (undefined8 *)operator_new(0x30);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar3 + 1) = 6;
      *puVar3 = &PTR__scalar_deleting_destructor__1440279b8;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
    }
    puVar3[3] = *(undefined8 *)(param_1 + 8);
    lVar4 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(lVar4 + 0x10) != 0) {
      puVar3[2] = *(longlong *)(lVar4 + 0x10);
      *(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x18) = puVar3;
      lVar4 = *(longlong *)(param_1 + 8);
    }
    *(undefined8 **)(lVar4 + 0x10) = puVar3;
    *(undefined8 **)(param_1 + 8) = puVar3;
  }
  if ((*(uint *)(param_1 + 0x10) >> 8 & 1) == 0) {
    if ((*(uint *)(param_1 + 0x10) >> 0xb & 1) != 0) {
      param_2 = FUN_140664350(*(undefined8 *)(param_1 + 0x18),param_2);
    }
  }
  else {
    param_2 = std::ctype<wchar_t>::tolower
                        (*(ctype<wchar_t> **)(*(longlong *)(param_1 + 0x18) + 8),param_2);
  }
  lVar4 = *(longlong *)(param_1 + 8);
  uVar2 = *(uint *)(lVar4 + 0x24);
  if (*(uint *)(lVar4 + 0x20) <= uVar2) {
    uVar1 = uVar2 + 0x10;
    pvVar5 = realloc(*(void **)(lVar4 + 0x28),(ulonglong)uVar1 * 2);
    if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::_guard_xfg_dispatch_icall_nop();
    }
    *(void **)(lVar4 + 0x28) = pvVar5;
    uVar2 = *(uint *)(lVar4 + 0x24);
    *(uint *)(lVar4 + 0x20) = uVar1;
  }
  *(wchar_t *)(*(longlong *)(lVar4 + 0x28) + (ulonglong)uVar2 * 2) = param_2;
  *(int *)(lVar4 + 0x24) = *(int *)(lVar4 + 0x24) + 1;
  return;
}



// FUNCTION 14065f970 FUN_14065f970 body=167 status=ok
// SIG undefined FUN_14065f970(void)

void FUN_14065f970(longlong param_1,wchar_t param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint *puVar4;
  void *pvVar5;
  
  if ((*(uint *)(param_1 + 0x10) & 0x100) != 0) {
    param_2 = std::ctype<wchar_t>::tolower
                        (*(ctype<wchar_t> **)(*(longlong *)(param_1 + 0x18) + 8),param_2);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  puVar4 = *(uint **)(lVar2 + 0x30);
  if (puVar4 == (uint *)0x0) {
    puVar4 = (uint *)operator_new(0x10);
    if (puVar4 != (uint *)0x0) {
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
    }
    *(uint **)(lVar2 + 0x30) = puVar4;
  }
  uVar3 = puVar4[1];
  if (*puVar4 <= uVar3) {
    uVar1 = uVar3 + 0x10;
    pvVar5 = realloc(*(void **)(puVar4 + 2),(ulonglong)uVar1 * 2);
    if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::_guard_xfg_dispatch_icall_nop();
    }
    *(void **)(puVar4 + 2) = pvVar5;
    uVar3 = puVar4[1];
    *puVar4 = uVar1;
  }
  *(wchar_t *)(*(longlong *)(puVar4 + 2) + (ulonglong)uVar3 * 2) = param_2;
  puVar4[1] = puVar4[1] + 1;
  return;
}



// FUNCTION 14065fa20 FUN_14065fa20 body=156 status=ok
// SIG undefined FUN_14065fa20(void)

void FUN_14065fa20(longlong param_1,wchar_t param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  
  if ((ushort)param_2 < 0x100) {
    if ((*(uint *)(param_1 + 0x10) & 0x100) != 0) {
      param_2 = std::ctype<wchar_t>::tolower
                          (*(ctype<wchar_t> **)(*(longlong *)(param_1 + 0x18) + 8),param_2);
    }
    lVar1 = *(longlong *)(param_1 + 8);
    puVar2 = *(undefined8 **)(lVar1 + 0x28);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)operator_new(0x20);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
      }
      *(undefined8 **)(lVar1 + 0x28) = puVar2;
    }
    pbVar3 = (byte *)((longlong)puVar2 + (ulonglong)((ushort)param_2 >> 3));
    *pbVar3 = *pbVar3 | (byte)(1 << ((ushort)param_2 & 7));
    return;
  }
  FUN_14065f970(param_1,param_2);
  return;
}



// FUNCTION 14065fac0 _Add_class body=141 status=ok
// SIG undefined _Add_class(void)

void std::_Builder<char_const_*,char,std::regex_traits<char>_>::_Add_class(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 7;
    *puVar1 = &PTR__scalar_deleting_destructor__1440279c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(undefined2 *)(puVar1 + 8) = 0;
    puVar1[9] = 0;
  }
  puVar1[3] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar2 + 0x10) != 0) {
    puVar1[2] = *(longlong *)(lVar2 + 0x10);
    *(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x18) = puVar1;
    lVar2 = *(longlong *)(param_1 + 8);
  }
  *(undefined8 **)(lVar2 + 0x10) = puVar1;
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



// FUNCTION 14065fb50 FUN_14065fb50 body=712 status=ok
// SIG undefined FUN_14065fb50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014065fc71) */
/* WARNING: Removing unreachable block (ram,0x00014065fd89) */

void FUN_14065fb50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  bool bVar4;
  wchar_t *_Dst;
  short *****pppppsVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte *pbVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined2 local_e8 [4];
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  undefined2 local_a8;
  undefined2 uStack_a6;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  ulonglong uStack_90;
  uint local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  ulonglong uStack_70;
  short ****local_68 [2];
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  lVar1 = *(longlong *)(param_1 + 8);
  local_e0 = param_1;
  local_d8 = param_4;
  local_d0 = param_3;
  local_c8 = param_2;
  FUN_14063d3b0(*(undefined8 *)(param_1 + 0x18),local_68,param_2,param_3);
  uVar10 = 0;
  do {
    puVar6 = *(undefined8 **)(param_1 + 0x18);
    local_98 = 0;
    local_a8 = 0;
    local_e8[0] = (undefined2)uVar10;
    uStack_90 = 7;
    _Dst = (wchar_t *)std::allocator<wchar_t>::allocate(local_c0,1);
    _guard_xfg_dispatch_icall_nop(_Dst,local_e8,2);
    std::ctype<wchar_t>::tolower((ctype<wchar_t> *)puVar6[1],_Dst,_Dst + 1);
    plVar2 = (longlong *)*puVar6;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_88,_Dst,_Dst + 1);
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Tidy_deallocate
              ();
    uStack_90 = uStack_70;
    local_98 = local_78;
    uVar13 = local_88;
    uStack_70 = 7;
    local_78 = 0;
    local_88 = local_88 & 0xffff0000;
    local_a8 = (undefined2)uVar13;
    uStack_a6 = (undefined2)(uVar13 >> 0x10);
    uStack_a4 = uStack_84;
    uStack_a0 = uStack_80;
    uStack_9c = uStack_7c;
    if (_Dst != (wchar_t *)0x0) {
      FMemory::operator_delete(_Dst,2);
    }
    puVar3 = (undefined2 *)CONCAT44(uStack_a4,CONCAT22(uStack_a6,local_a8));
    pppppsVar5 = local_68;
    if (7 < local_50) {
      pppppsVar5 = (short *****)local_68[0];
    }
    puVar11 = &local_a8;
    if (7 < uStack_90) {
      puVar11 = puVar3;
    }
    if (local_98 == local_58) {
      if (local_98 != 0) {
        lVar12 = (longlong)puVar11 - (longlong)pppppsVar5;
        lVar7 = local_98;
        do {
          if (*(short *)(lVar12 + (longlong)pppppsVar5) != *(short *)pppppsVar5) goto LAB_14065fce8;
          pppppsVar5 = (short *****)((longlong)pppppsVar5 + 2);
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      bVar4 = true;
    }
    else {
LAB_14065fce8:
      bVar4 = false;
    }
    if (7 < uStack_90) {
      uVar8 = uStack_90 * 2 + 2;
      puVar11 = puVar3;
      if (0xfff < uVar8) {
        puVar11 = *(undefined2 **)(puVar3 + -4);
        uVar8 = uStack_90 * 2 + 0x29;
        if (0x1f < (ulonglong)((longlong)puVar3 + (-8 - (longlong)puVar11))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(puVar11,uVar8);
    }
    if (bVar4) {
      puVar6 = *(undefined8 **)(lVar1 + 0x28);
      if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)operator_new(0x20);
        if (puVar6 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)0x0;
        }
        else {
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
          puVar6[3] = 0;
        }
        *(undefined8 **)(lVar1 + 0x28) = puVar6;
      }
      pbVar9 = (byte *)((uVar10 >> 3) + (longlong)puVar6);
      *pbVar9 = *pbVar9 | (byte)(1 << ((uint)uVar10 & 7));
    }
    uVar13 = (uint)uVar10 + 1;
    uVar10 = (ulonglong)uVar13;
    param_1 = local_e0;
    if (0xff < uVar13) {
      local_f8 = lVar1 + 0x48;
      FUN_140660d10(local_e0,local_c8,local_d0,local_d8);
      if (7 < local_50) {
        uVar10 = local_50 * 2 + 2;
        pppppsVar5 = (short *****)local_68[0];
        if (0xfff < uVar10) {
          pppppsVar5 = (short *****)local_68[0][-1];
          uVar10 = local_50 * 2 + 0x29;
          if (0x1f < (ulonglong)((longlong)local_68[0] + (-8 - (longlong)pppppsVar5))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(pppppsVar5,uVar10);
      }
      return;
    }
  } while( true );
}



// FUNCTION 14065fe20 FUN_14065fe20 body=225 status=ok
// SIG undefined FUN_14065fe20(void)

void FUN_14065fe20(longlong param_1,ushort param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  wchar_t wVar5;
  uint uVar6;
  ulonglong uVar7;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar6 = 0;
  uVar7 = 0;
  do {
    wVar5 = (wchar_t)uVar6;
    if (param_2 == 0xffff) {
      if (wVar5 != L'_') {
        bVar2 = std::ctype<wchar_t>::is
                          (*(ctype<wchar_t> **)(*(longlong *)(param_1 + 0x18) + 8),0x107,wVar5);
        if (!bVar2) goto LAB_14065fe8c;
      }
      bVar2 = true;
    }
    else {
      bVar2 = std::ctype<wchar_t>::is
                        (*(ctype<wchar_t> **)(*(longlong *)(param_1 + 0x18) + 8),param_2,wVar5);
    }
LAB_14065fe8c:
    if (bVar2 != (bool)param_3) {
      puVar3 = *(undefined8 **)(lVar1 + 0x28);
      if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)operator_new();
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar3[3] = 0;
        }
        *(undefined8 **)(lVar1 + 0x28) = puVar3;
      }
      pbVar4 = (byte *)((uVar7 >> 3) + (longlong)puVar3);
      *pbVar4 = *pbVar4 | (byte)(1 << (uVar6 & 7));
    }
    uVar6 = uVar6 + 1;
    uVar7 = uVar7 + 1;
    if (0xff < uVar6) {
      *(ushort *)(lVar1 + 0x40) = *(ushort *)(lVar1 + 0x40) | param_2;
      return;
    }
  } while( true );
}



// FUNCTION 14065ff10 FUN_14065ff10 body=574 status=ok
// SIG undefined FUN_14065ff10(void)

void FUN_14065ff10(longlong param_1,wchar_t param_2,wchar_t param_3)

{
  longlong lVar1;
  wchar_t wVar2;
  uint uVar3;
  uint *puVar4;
  void *pvVar5;
  uint *puVar6;
  byte *pbVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  
  if ((*(uint *)(param_1 + 0x10) & 0x100) != 0) {
    param_2 = std::ctype<wchar_t>::tolower
                        (*(ctype<wchar_t> **)(*(longlong *)(param_1 + 0x18) + 8),param_2);
    param_3 = std::ctype<wchar_t>::tolower
                        (*(ctype<wchar_t> **)(*(longlong *)(param_1 + 0x18) + 8),param_3);
  }
  uVar9 = (uint)(ushort)param_2;
  uVar10 = (uint)(ushort)param_3;
  lVar1 = *(longlong *)(param_1 + 8);
  if (uVar9 <= uVar10) {
    puVar8 = (uint *)0x0;
    do {
      if (*(uint *)(param_1 + 0x20) <= uVar10) {
        if (uVar10 < uVar9) {
          return;
        }
        if (uVar10 - uVar9 < *(uint *)(param_1 + 0x24)) goto joined_r0x00014065fff2;
        puVar6 = *(uint **)(lVar1 + 0x38);
        if (*(uint **)(lVar1 + 0x38) == (uint *)0x0) {
          puVar6 = (uint *)operator_new(0x10);
          if (puVar6 != (uint *)0x0) {
            puVar6[0] = 0;
            puVar6[1] = 0;
            puVar6[2] = 0;
            puVar6[3] = 0;
            puVar8 = puVar6;
          }
          *(uint **)(lVar1 + 0x38) = puVar8;
          puVar6 = puVar8;
        }
        uVar10 = puVar6[1];
        if (*puVar6 <= uVar10) {
          uVar3 = uVar10 + 0x10;
          pvVar5 = realloc(*(void **)(puVar6 + 2),(ulonglong)uVar3 * 2);
          if (pvVar5 == (void *)0x0) goto LAB_140660149;
          *(void **)(puVar6 + 2) = pvVar5;
          uVar10 = puVar6[1];
          *puVar6 = uVar3;
        }
        *(short *)(*(longlong *)(puVar6 + 2) + (ulonglong)uVar10 * 2) = (short)uVar9;
        puVar6[1] = puVar6[1] + 1;
        puVar8 = *(uint **)(lVar1 + 0x38);
        uVar9 = puVar8[1];
        if (*puVar8 <= uVar9) {
          uVar10 = uVar9 + 0x10;
          pvVar5 = realloc(*(void **)(puVar8 + 2),(ulonglong)uVar10 * 2);
          if (pvVar5 == (void *)0x0) goto LAB_140660149;
          *(void **)(puVar8 + 2) = pvVar5;
          uVar9 = puVar8[1];
          *puVar8 = uVar10;
        }
        *(wchar_t *)(*(longlong *)(puVar8 + 2) + (ulonglong)uVar9 * 2) = param_3;
        puVar8[1] = puVar8[1] + 1;
        return;
      }
      puVar6 = *(uint **)(lVar1 + 0x28);
      if (puVar6 == (uint *)0x0) {
        puVar4 = (uint *)operator_new(0x20);
        puVar6 = puVar8;
        if (puVar4 != (uint *)0x0) {
          puVar4[0] = 0;
          puVar4[1] = 0;
          puVar4[2] = 0;
          puVar4[3] = 0;
          puVar4[4] = 0;
          puVar4[5] = 0;
          puVar4[6] = 0;
          puVar4[7] = 0;
          puVar6 = puVar4;
        }
        *(uint **)(lVar1 + 0x28) = puVar6;
      }
      uVar3 = uVar9 & 7;
      pbVar7 = (byte *)((ulonglong)(uVar9 >> 3) + (longlong)puVar6);
      uVar9 = uVar9 + 1;
      *pbVar7 = *pbVar7 | (byte)(1 << uVar3);
    } while (uVar9 <= uVar10);
  }
  return;
joined_r0x00014065fff2:
  if (uVar10 < uVar9) {
    return;
  }
  wVar2 = (wchar_t)uVar9;
  if ((*(uint *)(param_1 + 0x10) & 0x100) != 0) {
    wVar2 = std::ctype<wchar_t>::tolower
                      (*(ctype<wchar_t> **)(*(longlong *)(param_1 + 0x18) + 8),wVar2);
  }
  lVar1 = *(longlong *)(param_1 + 8);
  puVar6 = *(uint **)(lVar1 + 0x30);
  if (puVar6 == (uint *)0x0) {
    puVar4 = (uint *)operator_new(0x10);
    puVar6 = puVar8;
    if (puVar4 != (uint *)0x0) {
      puVar4[0] = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar6 = puVar4;
    }
    *(uint **)(lVar1 + 0x30) = puVar6;
  }
  if (*puVar6 <= puVar6[1]) {
    uVar3 = puVar6[1] + 0x10;
    pvVar5 = realloc(*(void **)(puVar6 + 2),(ulonglong)uVar3 * 2);
    if (pvVar5 == (void *)0x0) {
LAB_140660149:
                    /* WARNING: Subroutine does not return */
      std::_guard_xfg_dispatch_icall_nop();
    }
    *(void **)(puVar6 + 2) = pvVar5;
    *puVar6 = uVar3;
  }
  uVar9 = uVar9 + 1;
  *(wchar_t *)(*(longlong *)(puVar6 + 2) + (ulonglong)puVar6[1] * 2) = wVar2;
  puVar6[1] = puVar6[1] + 1;
  goto joined_r0x00014065fff2;
}



// FUNCTION 140660150 FUN_140660150 body=785 status=ok
// SIG undefined FUN_140660150(void)

void FUN_140660150(longlong *param_1,int param_2,int param_3,byte param_4)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  
  lVar11 = param_1[1];
  if ((*(int *)(lVar11 + 8) == 6) && (*(int *)(lVar11 + 0x24) != 1)) {
    uVar3 = *(int *)(lVar11 + 0x24) - 1;
    *(uint *)(lVar11 + 0x24) = uVar3;
    FUN_14065f850(param_1,*(undefined2 *)(*(longlong *)(lVar11 + 0x28) + (ulonglong)uVar3 * 2));
    lVar11 = param_1[1];
  }
  if ((*(int *)(lVar11 + 8) == 9) || (*(int *)(lVar11 + 8) == 0xe)) {
    lVar11 = *(longlong *)(lVar11 + 0x20);
  }
  if ((param_2 == 0) && (param_3 == 1)) {
    puVar4 = (undefined8 *)operator_new(0x20);
    puVar8 = (undefined8 *)0x0;
    puVar10 = puVar8;
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = 0x11;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *puVar4 = &PTR_FUN_144027650;
      puVar10 = puVar4;
    }
    puVar5 = (undefined8 *)operator_new(0x30);
    puVar4 = puVar8;
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[1] = 0x10;
      puVar5[2] = 0;
      puVar5[3] = 0;
      *puVar5 = &PTR__scalar_deleting_destructor__144027670;
      puVar5[4] = puVar10;
      puVar5[5] = 0;
      puVar4 = puVar5;
    }
    puVar6 = (undefined8 *)operator_new(0x30);
    puVar5 = puVar8;
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[1] = 0x10;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *puVar6 = &PTR__scalar_deleting_destructor__144027670;
      puVar6[4] = puVar10;
      puVar6[5] = 0;
      puVar5 = puVar6;
    }
    puVar7 = (undefined8 *)operator_new(0x20);
    puVar6 = puVar8;
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[1] = 8;
      *puVar7 = &PTR_FUN_144027650;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar6 = puVar7;
    }
    puVar7 = (undefined8 *)operator_new(0x28);
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[1] = 9;
      *puVar7 = &PTR_FUN_144027660;
      puVar7[4] = puVar6;
      puVar8 = puVar7;
    }
    puVar5[2] = puVar6;
    puVar6[3] = puVar5;
    puVar6[2] = puVar8;
    puVar8[3] = puVar6;
    puVar8[2] = puVar10;
    puVar4[5] = puVar5;
    puVar10[3] = param_1[1];
    lVar9 = param_1[1];
    if (*(longlong *)(lVar9 + 0x10) != 0) {
      puVar10[2] = *(longlong *)(lVar9 + 0x10);
      *(undefined8 **)(*(longlong *)(param_1[1] + 0x10) + 0x18) = puVar10;
      lVar9 = param_1[1];
    }
    *(undefined8 **)(lVar9 + 0x10) = puVar10;
    param_1[1] = (longlong)puVar10;
    *(undefined8 **)(*(longlong *)(lVar11 + 0x18) + 0x10) = puVar4;
    puVar4[3] = *(undefined8 *)(lVar11 + 0x18);
    *(undefined8 **)(lVar11 + 0x18) = puVar4;
    puVar4[2] = lVar11;
    if (param_4 == 0) {
      lVar9 = puVar5[2];
      uVar2 = *(undefined8 *)(lVar11 + 0x18);
      *(undefined8 *)(lVar11 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
      *(undefined8 *)(lVar9 + 0x18) = uVar2;
      uVar2 = puVar4[2];
      puVar4[2] = puVar5[2];
      puVar5[2] = uVar2;
    }
  }
  else {
    puVar4 = (undefined8 *)operator_new(0x28);
    puVar10 = (undefined8 *)0x0;
    puVar8 = puVar10;
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[1] = 0x13;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *puVar4 = &PTR_FUN_144027660;
      puVar4[4] = 0;
      puVar8 = puVar4;
    }
    puVar4 = (undefined8 *)operator_new(0x38);
    if (puVar4 != (undefined8 *)0x0) {
      iVar1 = *(int *)(*param_1 + 0x24);
      *(int *)(*param_1 + 0x24) = iVar1 + 1;
      *(undefined4 *)(puVar4 + 1) = 0x12;
      *(uint *)((longlong)puVar4 + 0xc) = (uint)param_4 * 2;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *puVar4 = &PTR_FUN_144027678;
      *(int *)(puVar4 + 4) = param_2;
      *(int *)((longlong)puVar4 + 0x24) = param_3;
      puVar4[5] = puVar8;
      *(int *)(puVar4 + 6) = iVar1;
      *(undefined4 *)((longlong)puVar4 + 0x34) = 0xffffffff;
      puVar10 = puVar4;
    }
    puVar8[4] = puVar10;
    puVar8[3] = param_1[1];
    lVar9 = param_1[1];
    if (*(longlong *)(lVar9 + 0x10) != 0) {
      puVar8[2] = *(longlong *)(lVar9 + 0x10);
      *(undefined8 **)(*(longlong *)(param_1[1] + 0x10) + 0x18) = puVar8;
      lVar9 = param_1[1];
    }
    *(undefined8 **)(lVar9 + 0x10) = puVar8;
    param_1[1] = (longlong)puVar8;
    *(undefined8 **)(*(longlong *)(lVar11 + 0x18) + 0x10) = puVar10;
    puVar10[3] = *(undefined8 *)(lVar11 + 0x18);
    *(undefined8 **)(lVar11 + 0x18) = puVar10;
    puVar10[2] = lVar11;
  }
  return;
}



// FUNCTION 140660470 FUN_140660470 body=1132 status=ok
// SIG undefined FUN_140660470(void)

undefined8 FUN_140660470(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  
  uVar7 = 0;
  iVar6 = *(int *)(param_1 + 0x7c);
  do {
    if (iVar6 == -1) {
      return uVar7;
    }
    if (iVar6 == 0x7c) {
      return uVar7;
    }
    if (iVar6 == 0x29) {
      if (*(int *)(param_1 + 0x1c) != 0) {
        return uVar7;
      }
      if ((*(uint *)(param_1 + 0x80) & 0x10000000) == 0) goto LAB_14066089f;
LAB_140660754:
      if (iVar6 == 0x7d) {
        if ((*(uint *)(param_1 + 0x80) & 0x10000000) == 0) {
                    /* WARNING: Subroutine does not return */
          std::_Parser<char_const_*,char,std::regex_traits<char>_>::_Error(param_1,6);
        }
      }
      else if ((iVar6 == 0x5d) && ((*(uint *)(param_1 + 0x80) & 0x10000000) == 0)) {
LAB_1406608ad:
                    /* WARNING: Subroutine does not return */
        std::_Parser<char_const_*,char,std::regex_traits<char>_>::_Error(param_1,4);
      }
      FUN_14065f850(param_1 + 0x40);
LAB_14066078d:
      FUN_140663240(param_1);
LAB_140660795:
      iVar6 = *(int *)(param_1 + 0x7c);
      iVar10 = 0;
      iVar11 = -1;
      if (iVar6 != 0x2a) {
        if (iVar6 == 0x2b) {
          iVar10 = 1;
        }
        else if (iVar6 == 0x3f) {
          iVar11 = 1;
        }
        else {
          if (iVar6 != 0x7b) goto LAB_14066086e;
          FUN_140663240(param_1);
          cVar5 = FUN_140661830(param_1);
          if (cVar5 == '\0') goto LAB_1406608d4;
          iVar6 = *(int *)(param_1 + 0x7c);
          iVar10 = *(int *)(param_1 + 0x74);
          iVar4 = iVar10;
          if (iVar6 == 0x2c) {
            FUN_140663240(param_1);
            if (*(int *)(param_1 + 0x7c) != 0x7d) {
              cVar5 = FUN_140661830(param_1);
              if (cVar5 == '\0') goto LAB_1406608d4;
              iVar6 = *(int *)(param_1 + 0x7c);
              iVar4 = *(int *)(param_1 + 0x74);
              goto LAB_140660810;
            }
          }
          else {
LAB_140660810:
            iVar11 = iVar4;
            if (iVar6 != 0x7d) goto LAB_1406608d4;
          }
          if ((iVar11 != -1) && (iVar11 < iVar10)) {
LAB_1406608d4:
                    /* WARNING: Subroutine does not return */
            std::_Parser<char_const_*,char,std::regex_traits<char>_>::_Error(param_1,7);
          }
        }
      }
      puVar2 = (uint *)(*(longlong *)(param_1 + 0x48) + 0xc);
      *puVar2 = *puVar2 | 4;
      FUN_140663240(param_1);
      if (((*(uint *)(param_1 + 0x80) & 0x400) == 0) || (*(int *)(param_1 + 0x7c) != 0x3f)) {
        uVar7 = 1;
      }
      else {
        uVar7 = 0;
        FUN_140663240(param_1);
      }
      FUN_140660150(param_1 + 0x40,iVar10,iVar11,uVar7);
    }
    else {
      if (iVar6 == 0x2e) {
        std::_Builder<char_const_*,char,std::regex_traits<char>_>::_New_node(param_1 + 0x40);
        goto LAB_14066078d;
      }
      if (iVar6 == 0x5c) {
        FUN_140663240(param_1);
        if ((*(byte *)(param_1 + 0x80) & 0x80) != 0) {
          if (*(short *)(param_1 + 0x78) == 0x62) {
            std::_Builder<char_const_*,char,std::regex_traits<char>_>::_New_node(param_1 + 0x40);
            FUN_140663240(param_1);
          }
          else {
            if (*(short *)(param_1 + 0x78) != 0x42) goto LAB_140660546;
            std::_Builder<char_const_*,char,std::regex_traits<char>_>::_New_node(param_1 + 0x40);
            puVar2 = (uint *)(*(longlong *)(param_1 + 0x48) + 0xc);
            *puVar2 = *puVar2 ^ 1;
            FUN_140663240(param_1);
          }
          goto LAB_14066086e;
        }
LAB_140660546:
        FUN_1406608f0(param_1);
        goto LAB_140660795;
      }
      if (iVar6 == 0x5b) {
        FUN_140663240(param_1);
        std::_Builder<char_const_*,char,std::regex_traits<char>_>::_Add_class(param_1 + 0x40);
        iVar6 = *(int *)(param_1 + 0x7c);
        if (iVar6 == 0x5e) {
          puVar2 = (uint *)(*(longlong *)(param_1 + 0x48) + 0xc);
          *puVar2 = *puVar2 ^ 1;
          FUN_140663240(param_1);
          iVar6 = *(int *)(param_1 + 0x7c);
        }
        if (((*(uint *)(param_1 + 0x80) & 0x20000000) != 0) && (iVar6 == 0x5d)) {
          FUN_14065fa20(param_1 + 0x40);
          FUN_140663240(param_1);
        }
        FUN_140661390(param_1);
        if (*(int *)(param_1 + 0x7c) != 0x5d) goto LAB_1406608ad;
        goto LAB_14066078d;
      }
      if (iVar6 != 0x28) {
        if (iVar6 == 0x5e) {
          std::_Builder<char_const_*,char,std::regex_traits<char>_>::_New_node(param_1 + 0x40,2);
          FUN_140663240(param_1);
        }
        else {
          if (iVar6 != 0x24) {
            if (((iVar6 - 0x2aU < 2) || (iVar6 == 0x3f)) || (iVar6 == 0x7b)) {
                    /* WARNING: Subroutine does not return */
              std::_Parser<char_const_*,char,std::regex_traits<char>_>::_Error(param_1,10);
            }
            goto LAB_140660754;
          }
          std::_Builder<char_const_*,char,std::regex_traits<char>_>::_New_node(param_1 + 0x40,3);
          FUN_140663240(param_1);
        }
        goto LAB_14066086e;
      }
      FUN_140663240(param_1);
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      if (((*(uint *)(param_1 + 0x80) >> 0x1b & 1) == 0) && (*(int *)(param_1 + 0x7c) == 0x29))
      goto LAB_14066089f;
      if (((*(uint *)(param_1 + 0x80) & 0x20) == 0) || (*(int *)(param_1 + 0x7c) != 0x3f)) {
        lVar1 = param_1 + 0x40;
        if ((*(uint *)(param_1 + 0x70) & 0x200) == 0) {
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
          lVar8 = std::_Builder<char_const_*,char,std::regex_traits<char>_>::_Begin_capture_group
                            (lVar1,*(undefined4 *)(param_1 + 0x18));
          FUN_140661900(param_1);
          std::_Builder<char_const_*,char,std::regex_traits<char>_>::_End_group(lVar1,lVar8);
          std::vector<bool,std::allocator<bool>_>::resize
                    ((longlong *)(param_1 + 0x20),*(int *)(param_1 + 0x18) + 1,0);
          lVar1 = *(longlong *)(param_1 + 0x20);
          uVar9 = (ulonglong)(*(uint *)(lVar8 + 0x20) >> 5);
          *(uint *)(lVar1 + uVar9 * 4) =
               *(uint *)(lVar1 + uVar9 * 4) | 1 << (*(uint *)(lVar8 + 0x20) & 0x1f);
        }
        else {
          uVar7 = std::_Builder<char_const_*,char,std::regex_traits<char>_>::_New_node(lVar1,8);
          FUN_140661900(param_1);
          std::_Builder<char_const_*,char,std::regex_traits<char>_>::_End_group(lVar1,uVar7);
        }
LAB_1406606d0:
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
        bVar3 = true;
      }
      else {
        FUN_140663240(param_1);
        iVar6 = *(int *)(param_1 + 0x7c);
        FUN_140663240(param_1);
        if (iVar6 == 0x3a) {
          std::_Parser<char_const_*,char,std::regex_traits<char>_>::_Do_noncapture_group();
          goto LAB_1406606d0;
        }
        if (iVar6 == 0x21) {
          std::_Parser<char_const_*,char,std::regex_traits<char>_>::_Do_assert_group(param_1,1);
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
          bVar3 = false;
        }
        else {
          if (iVar6 != 0x3d) {
                    /* WARNING: Subroutine does not return */
            std::_Parser<char_const_*,char,std::regex_traits<char>_>::_Error(param_1,0xe);
          }
          std::_Parser<char_const_*,char,std::regex_traits<char>_>::_Do_assert_group(param_1,0);
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
          bVar3 = false;
        }
      }
      if (*(int *)(param_1 + 0x7c) != 0x29) {
LAB_14066089f:
                    /* WARNING: Subroutine does not return */
        std::_Parser<char_const_*,char,std::regex_traits<char>_>::_Error(param_1,5);
      }
      FUN_140663240(param_1);
      if (bVar3) goto LAB_140660795;
    }
LAB_14066086e:
    iVar6 = *(int *)(param_1 + 0x7c);
    uVar7 = 1;
  } while( true );
}



// FUNCTION 1406608f0 FUN_1406608f0 body=368 status=ok
// SIG undefined FUN_1406608f0(void)

void FUN_1406608f0(longlong param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (((*(uint *)(param_1 + 0x80) & 0x100) == 0) || (cVar2 = FUN_140661830(), cVar2 == '\0')) {
    cVar2 = FUN_140660eb0(param_1);
    if (cVar2 != '\0') {
      FUN_14065f850(param_1 + 0x40,*(undefined2 *)(param_1 + 0x74));
      return;
    }
    if (((*(uint *)(param_1 + 0x80) & 0x20000) != 0) &&
       (cVar2 = FUN_140660e00(param_1,1), cVar2 != '\0')) {
      return;
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x74);
    uVar5 = (ulonglong)(int)uVar1;
    if (uVar1 != 0) {
      if (((((*(uint *)(param_1 + 0x80) >> 9 & 1) == 0) || (uVar1 < 10)) &&
          (uVar5 <= *(uint *)(param_1 + 0x18))) &&
         ((uVar5 < *(ulonglong *)(param_1 + 0x38) &&
          ((*(uint *)(*(longlong *)(param_1 + 0x20) + (uVar5 >> 5) * 4) >> ((byte)uVar1 & 0x1f) & 1)
           != 0)))) {
        puVar3 = (undefined8 *)operator_new(0x28);
        if (puVar3 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar3 + 1) = 0xf;
          *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
          puVar3[2] = 0;
          puVar3[3] = 0;
          *puVar3 = &PTR_FUN_144027660;
          *(uint *)(puVar3 + 4) = uVar1;
        }
        puVar3[3] = *(undefined8 *)(param_1 + 0x48);
        lVar4 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(lVar4 + 0x10) != 0) {
          puVar3[2] = *(longlong *)(lVar4 + 0x10);
          *(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) + 0x18) = puVar3;
          lVar4 = *(longlong *)(param_1 + 0x48);
        }
        *(undefined8 **)(lVar4 + 0x10) = puVar3;
        *(undefined8 **)(param_1 + 0x48) = puVar3;
        return;
      }
                    /* WARNING: Subroutine does not return */
      std::_Parser<char_const_*,char,std::regex_traits<char>_>::_Error(param_1,3);
    }
    if ((*(uint *)(param_1 + 0x80) >> 0x14 & 1) != 0) {
      FUN_14065f850(param_1 + 0x40,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::_Parser<char_const_*,char,std::regex_traits<char>_>::_Error(param_1,2);
}



// FUNCTION 140660a70 FUN_140660a70 body=53 status=ok
// SIG undefined FUN_140660a70(void)

ulonglong FUN_140660a70(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 8) + 8);
  uVar2 = (ulonglong)uVar1;
  if ((uVar1 < 0x15) && ((0x102100U >> (uVar1 & 0x1f) & 1) != 0)) {
LAB_140660a9f:
    return CONCAT71((int7)(uVar2 >> 8),1);
  }
  if (uVar1 == 2) {
    uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 8) + 0x18);
    if ((*(uint *)(uVar2 + 8) < 0x15) && ((0x102100U >> (*(uint *)(uVar2 + 8) & 0x1f) & 1) != 0))
    goto LAB_140660a9f;
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 140660ab0 _Begin_capture_group body=136 status=ok
// SIG undefined _Begin_capture_group(void)

undefined8 *
std::_Builder<char_const_*,char,std::regex_traits<char>_>::_Begin_capture_group
          (longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = &PTR_FUN_144027660;
    *(undefined4 *)(puVar1 + 4) = param_2;
  }
  puVar1[3] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar2 + 0x10) != 0) {
    puVar1[2] = *(longlong *)(lVar2 + 0x10);
    *(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x18) = puVar1;
    lVar2 = *(longlong *)(param_1 + 8);
  }
  *(undefined8 **)(lVar2 + 0x10) = puVar1;
  *(undefined8 **)(param_1 + 8) = puVar1;
  return puVar1;
}



// FUNCTION 140660b40 FUN_140660b40 body=209 status=ok
// SIG undefined FUN_140660b40(void)

ulonglong FUN_140660b40(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  uint uVar5;
  
  uVar4 = 0;
  if (*(uint *)(param_1 + 0xc4) != 0) {
    do {
      in_RAX = uVar4 & 0x1f;
      uVar5 = 1 << (sbyte)in_RAX;
      if (((*(uint *)(*(longlong *)(param_1 + 0x48) + (uVar4 >> 5) * 4) & uVar5) != 0) &&
         (in_RAX = *(ulonglong *)(param_1 + 8), (*(uint *)(in_RAX + (uVar4 >> 5) * 4) & uVar5) != 0)
         ) {
        in_RAX = *(ulonglong *)(param_1 + 0x28);
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x68) + uVar4 * 0x10);
        lVar2 = *(longlong *)(in_RAX + uVar4 * 0x10);
        if (lVar1 != lVar2) {
          lVar3 = *(longlong *)(param_1 + 0x98);
          return CONCAT71((int7)((ulonglong)lVar3 >> 8),
                          (longlong)(lVar1 - lVar3 & 0xfffffffffffffffeU) <
                          (longlong)(lVar2 - lVar3 & 0xfffffffffffffffeU));
        }
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 8 + uVar4 * 0x10);
        lVar2 = *(longlong *)(in_RAX + 8 + uVar4 * 0x10);
        if (lVar1 != lVar2) {
          lVar3 = *(longlong *)(param_1 + 0x98);
          return CONCAT71((int7)((ulonglong)lVar3 >> 8),
                          (longlong)(lVar1 - lVar3 & 0xfffffffffffffffeU) <
                          (longlong)(lVar2 - lVar3 & 0xfffffffffffffffeU));
        }
      }
      uVar5 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_1 + 0xc4));
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140660c20 _Calculate_loop_simplicity body=240 status=ok
// SIG undefined _Calculate_loop_simplicity(void)

void std::_Calculate_loop_simplicity(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    do {
      if (param_1 == 0) {
        return;
      }
      iVar1 = *(int *)(param_1 + 8);
      lVar3 = param_3;
      if (9 < iVar1) {
        if (iVar1 < 0xc) {
          _Calculate_loop_simplicity(*(undefined8 *)(param_1 + 0x20),0,0);
        }
        else if (iVar1 == 0x10) {
          if (param_3 != 0) {
            *(undefined4 *)(param_3 + 0x34) = 0;
          }
          for (lVar2 = *(longlong *)(param_1 + 0x28); lVar2 != 0;
              lVar2 = *(longlong *)(lVar2 + 0x28)) {
            _Calculate_loop_simplicity
                      (*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x20),param_3);
          }
        }
        else if (iVar1 == 0x12) {
          lVar3 = param_1;
          if (param_3 != 0) {
            *(undefined4 *)(param_3 + 0x34) = 0;
            *(undefined4 *)(param_1 + 0x34) = 0;
            lVar3 = param_3;
          }
        }
        else if (((iVar1 == 0x13) && (param_3 == *(longlong *)(param_1 + 0x20))) &&
                (lVar3 = 0, *(int *)(param_3 + 0x34) == -1)) {
          *(undefined4 *)(param_3 + 0x34) = 1;
        }
      }
      param_1 = *(longlong *)(param_1 + 0x10);
      param_3 = lVar3;
    } while (param_1 != param_2);
  }
  return;
}



// FUNCTION 140660d10 FUN_140660d10 body=229 status=ok
// SIG undefined FUN_140660d10(void)

void FUN_140660d10(undefined8 param_1,undefined2 *param_2,undefined2 *param_3,uint param_4,
                  uint *param_5)

{
  undefined2 uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  void *pvVar5;
  uint *puVar6;
  
  puVar3 = *(uint **)param_5;
  puVar6 = puVar3;
  if (puVar3 != (uint *)0x0) {
    do {
      puVar6 = puVar3;
      if (*puVar3 <= param_4) break;
      puVar6 = *(uint **)(puVar3 + 6);
      param_5 = puVar3 + 6;
      puVar3 = puVar6;
    } while (puVar6 != (uint *)0x0);
    if ((puVar6 != (uint *)0x0) && (param_4 == *puVar6)) goto LAB_140660d8d;
  }
  puVar4 = (uint *)operator_new();
  puVar3 = (uint *)0x0;
  if (puVar4 != (uint *)0x0) {
    *puVar4 = param_4;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar3 = puVar4;
  }
  *(uint **)param_5 = puVar3;
  *(uint **)(puVar3 + 6) = puVar6;
  puVar6 = *(uint **)param_5;
LAB_140660d8d:
  if (param_2 != param_3) {
    uVar2 = puVar6[3];
    do {
      uVar1 = *param_2;
      if (puVar6[2] <= uVar2) {
        pvVar5 = realloc(*(void **)(puVar6 + 4),(ulonglong)(uVar2 + 0x10) * 2);
        if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::_guard_xfg_dispatch_icall_nop();
        }
        *(void **)(puVar6 + 4) = pvVar5;
        puVar6[2] = uVar2 + 0x10;
      }
      param_2 = param_2 + 1;
      *(undefined2 *)(*(longlong *)(puVar6 + 4) + (ulonglong)puVar6[3] * 2) = uVar1;
      puVar6[3] = puVar6[3] + 1;
      uVar2 = puVar6[3];
    } while (param_2 != param_3);
  }
  return;
}



// FUNCTION 140660e00 FUN_140660e00 body=171 status=ok
// SIG undefined FUN_140660e00(void)

undefined2 FUN_140660e00(longlong *param_1,char param_2)

{
  longlong lVar1;
  bool bVar2;
  short sVar3;
  
  lVar1 = *param_1;
  if (lVar1 != param_1[2]) {
    sVar3 = FUN_14063ced0(param_1[0xd],lVar1,lVar1 + 2,*(uint *)(param_1 + 0xe) >> 8 & 0xffffff01);
    if (sVar3 != 0) {
      if (param_2 != '\0') {
        std::_Builder<char_const_*,char,std::regex_traits<char>_>::_Add_class(param_1 + 8);
      }
      bVar2 = std::ctype<wchar_t>::is
                        (*(ctype<wchar_t> **)(param_1[0xd] + 8),1,*(wchar_t *)(param_1 + 0xf));
      FUN_14065fe20(param_1 + 8,sVar3,bVar2);
      FUN_140663240(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140660eb0 FUN_140660eb0 body=652 status=ok
// SIG undefined FUN_140660eb0(void)

undefined8 FUN_140660eb0(longlong *param_1)

{
  short *psVar1;
  short sVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  int iVar9;
  
  if (*(int *)((longlong)param_1 + 0x7c) == -1) goto LAB_14066112f;
  if (((*(uint *)(param_1 + 0x10) & 0x10000) == 0) ||
     (cVar4 = FUN_140662050(param_1,(short)param_1[0xf]), cVar4 == '\0')) {
    uVar8 = *(uint *)(param_1 + 0x10);
    if ((uVar8 >> 0xf & 1) != 0) {
      if ((short)param_1[0xf] == 0x61) {
        *(undefined4 *)((longlong)param_1 + 0x74) = 7;
        FUN_140663240(param_1);
        goto LAB_140661089;
      }
      if ((short)param_1[0xf] == 0x62) {
        *(undefined4 *)((longlong)param_1 + 0x74) = 8;
        goto LAB_140660f15;
      }
    }
    sVar2 = (short)param_1[0xf];
    if (sVar2 == 99) {
      if ((uVar8 >> 0x12 & 1) == 0) goto LAB_140660fc1;
      FUN_140663240(param_1);
      bVar5 = std::ctype<wchar_t>::is
                        (*(ctype<wchar_t> **)(param_1[0xd] + 8),0x103,*(wchar_t *)(param_1 + 0xf));
      if (!bVar5) goto LAB_14066112f;
      *(uint *)((longlong)param_1 + 0x74) = *(ushort *)(param_1 + 0xf) & 0x1f;
      FUN_140663240(param_1);
    }
    else if (sVar2 == 0x78) {
      if ((uVar8 >> 0xc & 1) == 0) {
LAB_140660fc1:
        if ((uVar8 >> 0xd & 1) != 0) {
          iVar9 = 3;
          *(undefined4 *)((longlong)param_1 + 0x74) = 0;
          do {
            if ((7 < (ushort)(*(ushort *)(param_1 + 0xf) - 0x30)) ||
               (iVar6 = *(ushort *)(param_1 + 0xf) - 0x30, iVar6 == -1)) break;
            iVar9 = iVar9 + -1;
            *(int *)((longlong)param_1 + 0x74) = iVar6 + *(int *)((longlong)param_1 + 0x74) * 8;
            psVar7 = (short *)*param_1;
            if (psVar7 != (short *)param_1[2]) {
              if (((*psVar7 == 0x5c) && (psVar1 = psVar7 + 1, psVar1 != (short *)param_1[2])) &&
                 ((((*(uint *)(param_1 + 0x10) & 8) == 0 && ((ushort)(*psVar1 - 0x28U) < 2)) ||
                  (((*(uint *)(param_1 + 0x10) & 0x10) == 0 && ((*psVar1 - 0x7bU & 0xfffd) == 0)))))
                 ) {
                psVar7 = psVar1;
              }
              *param_1 = (longlong)(psVar7 + 1);
            }
            FUN_140663660(param_1);
          } while (iVar9 != 0);
          if (iVar9 != 3) {
            if (*(int *)((longlong)param_1 + 0x74) == 0) goto LAB_14066112f;
            goto LAB_140661089;
          }
        }
        uVar8 = *(uint *)(param_1 + 0x10);
        uVar3 = *(ushort *)(param_1 + 0xf);
        if ((uVar8 >> 0x16 & 1) != 0) {
          switch(uVar3) {
          case 0x44:
          case 0x53:
          case 0x57:
          case 99:
          case 100:
          case 0x73:
          case 0x77:
            goto switchD_1406610dc_caseD_44;
          default:
switchD_1406610dc_caseD_45:
            *(uint *)((longlong)param_1 + 0x74) = (uint)uVar3;
            FUN_140663240(param_1);
            return 1;
          }
        }
        switch(uVar3 - 0x22) {
        case 0:
        case 0xd:
          uVar8 = uVar8 >> 0x18;
          break;
        default:
          goto switchD_1406610dc_caseD_44;
        case 2:
        case 8:
        case 0xc:
        case 0x39:
        case 0x3a:
        case 0x3c:
        case 0x5a:
          goto switchD_1406610dc_caseD_45;
        case 6:
        case 7:
        case 9:
        case 0x1d:
        case 0x59:
        case 0x5b:
          uVar8 = uVar8 >> 0x17;
        }
        if ((uVar8 & 1) != 0) goto switchD_1406610dc_caseD_45;
switchD_1406610dc_caseD_44:
        return 0;
      }
      FUN_140663240(param_1);
      FUN_140662870(param_1,2);
    }
    else {
      if ((sVar2 != 0x75) || ((uVar8 >> 0xb & 1) == 0)) goto LAB_140660fc1;
      FUN_140663240(param_1);
      FUN_140662870(param_1,4);
    }
  }
  else {
LAB_140660f15:
    FUN_140663240(param_1);
  }
LAB_140661089:
  if (*(uint *)((longlong)param_1 + 0x74) < 0x10000) {
    *(uint *)((longlong)param_1 + 0x74) = *(uint *)((longlong)param_1 + 0x74) & 0xffff;
    return 1;
  }
LAB_14066112f:
                    /* WARNING: Subroutine does not return */
  std::_Parser<char_const_*,char,std::regex_traits<char>_>::_Error(param_1,2);
}



// FUNCTION 1406611f0 FUN_1406611f0 body=412 status=ok
// SIG undefined FUN_1406611f0(void)

bool FUN_1406611f0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x7c);
  if (iVar1 != 0x5c) {
    if (iVar1 != 0x5b) {
      if ((iVar1 != 0x5d) && (iVar1 != -1)) {
        *(uint *)(param_1 + 0x74) = (uint)*(ushort *)(param_1 + 0x78);
        FUN_140663240();
        return true;
      }
      return false;
    }
    FUN_140663240();
    uVar2 = *(uint *)(param_1 + 0x7c);
    if ((uVar2 < 0x3e) && ((0x2400400000000000U >> ((longlong)(int)uVar2 & 0x3fU) & 1) != 0)) {
      FUN_140663240(param_1);
      FUN_140661ea0(param_1,uVar2);
      return (bool)2;
    }
    *(undefined4 *)(param_1 + 0x74) = 0x5b;
    return true;
  }
  FUN_140663240();
  uVar2 = *(uint *)(param_1 + 0x80);
  if ((uVar2 >> 0x15 & 1) != 0) {
    if (((uVar2 >> 0xe & 1) == 0) || (*(short *)(param_1 + 0x78) != 0x5c)) {
      if (((uVar2 >> 0x11 & 1) != 0) && (cVar3 = FUN_140660e00(param_1,0), cVar3 != '\0')) {
        return (bool)2;
      }
      cVar3 = FUN_140661830(param_1);
      if (cVar3 == '\0') {
        cVar3 = FUN_140660eb0(param_1);
        return cVar3 != '\0';
      }
      if (*(int *)(param_1 + 0x74) != 0) {
                    /* WARNING: Subroutine does not return */
        std::_Parser<char_const_*,char,std::regex_traits<char>_>::_Error(param_1,2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x74) = 0x5c;
      FUN_140663240(param_1);
    }
    return true;
  }
  if (((uVar2 >> 0x10 & 1) == 0) ||
     (cVar3 = FUN_140662050(param_1,*(undefined2 *)(param_1 + 0x78)), cVar3 == '\0')) {
    if ((*(uint *)(param_1 + 0x80) & 0x8000) == 0) {
LAB_1406612e3:
      *(undefined4 *)(param_1 + 0x74) = 0x5c;
      return true;
    }
    if (*(short *)(param_1 + 0x78) == 0x61) {
      uVar4 = 7;
    }
    else {
      if (*(short *)(param_1 + 0x78) != 0x62) goto LAB_1406612e3;
      uVar4 = 8;
    }
    *(undefined4 *)(param_1 + 0x74) = uVar4;
  }
  FUN_140663240(param_1);
  return true;
}



// FUNCTION 140661390 FUN_140661390 body=1167 status=ok
// SIG undefined FUN_140661390(void)

void FUN_140661390(longlong *param_1)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  short *psVar8;
  
LAB_1406613c0:
  while (iVar7 = *(int *)((longlong)param_1 + 0x7c), iVar7 != 0x5c) {
    if (iVar7 != 0x5b) {
      if (iVar7 == 0x5d) {
        return;
      }
      if (iVar7 == -1) {
        return;
      }
      psVar8 = (short *)*param_1;
      *(uint *)((longlong)param_1 + 0x74) = (uint)*(ushort *)(param_1 + 0xf);
      if (psVar8 != (short *)param_1[2]) {
        if (((*psVar8 == 0x5c) && (psVar1 = psVar8 + 1, psVar1 != (short *)param_1[2])) &&
           ((((*(uint *)(param_1 + 0x10) & 8) == 0 && ((ushort)(*psVar1 - 0x28U) < 2)) ||
            (((*(uint *)(param_1 + 0x10) & 0x10) == 0 && ((*psVar1 - 0x7bU & 0xfffd) == 0)))))) {
          psVar8 = psVar1;
        }
        *param_1 = (longlong)(psVar8 + 1);
      }
      FUN_140663660(param_1);
      goto LAB_1406616ea;
    }
    psVar8 = (short *)*param_1;
    if (psVar8 != (short *)param_1[2]) {
      if (((*psVar8 == 0x5c) && (psVar1 = psVar8 + 1, psVar1 != (short *)param_1[2])) &&
         ((((*(uint *)(param_1 + 0x10) & 8) == 0 && ((ushort)(*psVar1 - 0x28U) < 2)) ||
          (((*(uint *)(param_1 + 0x10) & 0x10) == 0 && ((*psVar1 - 0x7bU & 0xfffd) == 0)))))) {
        psVar8 = psVar1;
      }
      *param_1 = (longlong)(psVar8 + 1);
    }
    FUN_140663660(param_1);
    uVar3 = *(uint *)((longlong)param_1 + 0x7c);
    if ((0x3d < uVar3) || ((0x2400400000000000U >> ((longlong)(int)uVar3 & 0x3fU) & 1) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x74) = 0x5b;
      goto LAB_1406616ea;
    }
    psVar8 = (short *)*param_1;
    if (psVar8 != (short *)param_1[2]) {
      if (((*psVar8 == 0x5c) && (psVar1 = psVar8 + 1, psVar1 != (short *)param_1[2])) &&
         ((((*(uint *)(param_1 + 0x10) & 8) == 0 && ((ushort)(*psVar1 - 0x28U) < 2)) ||
          (((*(uint *)(param_1 + 0x10) & 0x10) == 0 && ((*psVar1 - 0x7bU & 0xfffd) == 0)))))) {
        psVar8 = psVar1;
      }
      *param_1 = (longlong)(psVar8 + 1);
    }
    FUN_140663660(param_1);
    FUN_140661ea0(param_1,uVar3);
  }
  psVar8 = (short *)*param_1;
  if (psVar8 != (short *)param_1[2]) {
    if (((*psVar8 == 0x5c) && (psVar1 = psVar8 + 1, psVar1 != (short *)param_1[2])) &&
       ((((*(uint *)(param_1 + 0x10) & 8) == 0 && ((ushort)(*psVar1 - 0x28U) < 2)) ||
        (((*(uint *)(param_1 + 0x10) & 0x10) == 0 && ((*psVar1 - 0x7bU & 0xfffd) == 0)))))) {
      psVar8 = psVar1;
    }
    *param_1 = (longlong)(psVar8 + 1);
  }
  FUN_140663660(param_1);
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 >> 0x15 & 1) == 0) {
    if ((uVar3 >> 0x10 & 1) == 0) {
LAB_14066154a:
      if ((uVar3 >> 0xf & 1) == 0) {
LAB_14066158a:
        *(undefined4 *)((longlong)param_1 + 0x74) = 0x5c;
      }
      else if ((short)param_1[0xf] == 0x61) {
        *(undefined4 *)((longlong)param_1 + 0x74) = 7;
        FUN_140663240(param_1);
      }
      else {
        if ((short)param_1[0xf] != 0x62) goto LAB_14066158a;
        *(undefined4 *)((longlong)param_1 + 0x74) = 8;
        FUN_140663240(param_1);
      }
    }
    else {
      sVar2 = (short)param_1[0xf];
      if (sVar2 == 0x66) {
        *(undefined4 *)((longlong)param_1 + 0x74) = 0xc;
        FUN_140663240(param_1);
      }
      else if (sVar2 == 0x6e) {
        *(undefined4 *)((longlong)param_1 + 0x74) = 10;
        FUN_140663240(param_1);
      }
      else if (sVar2 == 0x72) {
        *(undefined4 *)((longlong)param_1 + 0x74) = 0xd;
        FUN_140663240(param_1);
      }
      else if (sVar2 == 0x74) {
        *(undefined4 *)((longlong)param_1 + 0x74) = 9;
        FUN_140663240(param_1);
      }
      else {
        if (sVar2 != 0x76) goto LAB_14066154a;
        *(undefined4 *)((longlong)param_1 + 0x74) = 0xb;
        FUN_140663240(param_1);
      }
    }
  }
  else {
    if (((uVar3 >> 0xe & 1) == 0) || ((short)param_1[0xf] != 0x5c)) {
      if (((uVar3 >> 0x11 & 1) == 0) || (cVar4 = FUN_140660e00(param_1,0), cVar4 == '\0')) {
        cVar4 = FUN_140661830(param_1);
        if (cVar4 == '\0') {
          cVar4 = FUN_140660eb0(param_1);
          cVar4 = cVar4 != '\0';
        }
        else {
          if (*(int *)((longlong)param_1 + 0x74) != 0) goto LAB_140661805;
          cVar4 = '\x01';
        }
      }
      else {
        cVar4 = '\x02';
      }
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x74) = 0x5c;
      FUN_140663240(param_1);
      cVar4 = '\x01';
    }
    if (cVar4 == '\0') {
      return;
    }
    if (cVar4 == '\x02') goto LAB_1406613c0;
  }
LAB_1406616ea:
  if ((*(int *)((longlong)param_1 + 0x74) == 0) && ((*(uint *)(param_1 + 0x10) & 0x100000) == 0)) {
LAB_140661805:
                    /* WARNING: Subroutine does not return */
    std::_Parser<char_const_*,char,std::regex_traits<char>_>::_Error(param_1,2);
  }
  if (*(int *)((longlong)param_1 + 0x7c) == 0x2d) {
    psVar8 = (short *)*param_1;
    if (psVar8 != (short *)param_1[2]) {
      if (((*psVar8 == 0x5c) && (psVar1 = psVar8 + 1, psVar1 != (short *)param_1[2])) &&
         ((((*(uint *)(param_1 + 0x10) & 8) == 0 && ((ushort)(*psVar1 - 0x28U) < 2)) ||
          (((*(uint *)(param_1 + 0x10) & 0x10) == 0 && ((*psVar1 - 0x7bU & 0xfffd) == 0)))))) {
        psVar8 = psVar1;
      }
      *param_1 = (longlong)(psVar8 + 1);
    }
    FUN_140663660(param_1);
    uVar6 = *(ushort *)((longlong)param_1 + 0x74);
    iVar7 = FUN_1406611f0(param_1);
    if (iVar7 == 0) {
      FUN_14065fa20(param_1 + 8,*(undefined2 *)((longlong)param_1 + 0x74));
      FUN_14065fa20(param_1 + 8,0x2d);
      return;
    }
    if (iVar7 != 2) {
      if ((*(uint *)(param_1 + 0xe) & 0x800) != 0) {
        uVar5 = FUN_140664350(param_1[0xd],*(undefined2 *)((longlong)param_1 + 0x74));
        *(uint *)((longlong)param_1 + 0x74) = (uint)uVar5;
        uVar6 = FUN_140664350(param_1[0xd],uVar6);
      }
      if (uVar6 <= *(ushort *)((longlong)param_1 + 0x74)) {
        FUN_14065ff10(param_1 + 8);
        goto LAB_1406613c0;
      }
    }
                    /* WARNING: Subroutine does not return */
    std::_Parser<char_const_*,char,std::regex_traits<char>_>::_Error(param_1,8);
  }
  FUN_14065fa20(param_1 + 8);
  goto LAB_1406613c0;
}



// FUNCTION 140661830 FUN_140661830 body=195 status=ok
// SIG undefined FUN_140661830(void)

bool FUN_140661830(longlong *param_1)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  iVar4 = 0x7fffffff;
  do {
    if (9 < (ushort)(*(ushort *)(param_1 + 0xf) - 0x30)) break;
    iVar3 = *(ushort *)(param_1 + 0xf) - 0x30;
    if (iVar3 == -1) break;
    iVar4 = iVar4 + -1;
    psVar2 = (short *)*param_1;
    *(int *)((longlong)param_1 + 0x74) = iVar3 + *(int *)((longlong)param_1 + 0x74) * 10;
    if (psVar2 != (short *)param_1[2]) {
      if (((*psVar2 == 0x5c) && (psVar1 = psVar2 + 1, psVar1 != (short *)param_1[2])) &&
         ((((*(uint *)(param_1 + 0x10) & 8) == 0 && ((ushort)(*psVar1 - 0x28U) < 2)) ||
          (((*(uint *)(param_1 + 0x10) & 0x10) == 0 && ((*psVar1 - 0x7bU & 0xfffd) == 0)))))) {
        psVar2 = psVar1;
      }
      *param_1 = (longlong)(psVar2 + 1);
    }
    FUN_140663660(param_1);
  } while (iVar4 != 0);
  return iVar4 != 0x7fffffff;
}



// FUNCTION 140661900 FUN_140661900 body=729 status=ok
// SIG undefined FUN_140661900(void)

void FUN_140661900(longlong *param_1)

{
  short *psVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  short *psVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  lVar3 = param_1[9];
  cVar6 = FUN_140660470();
  if (cVar6 == '\0') {
    if (*(int *)((longlong)param_1 + 0x7c) != 0x7c) {
      return;
    }
    uVar7 = std::_Builder<char_const_*,char,std::regex_traits<char>_>::_New_node(param_1 + 8,8);
    std::_Builder<char_const_*,char,std::regex_traits<char>_>::_End_group(param_1 + 8,uVar7);
  }
  puVar8 = (undefined8 *)operator_new(0x20);
  puVar13 = (undefined8 *)0x0;
  puVar14 = puVar13;
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[1] = 0x11;
    puVar8[2] = 0;
    puVar8[3] = 0;
    *puVar8 = &PTR_FUN_144027650;
    puVar14 = puVar8;
  }
  puVar14[3] = param_1[9];
  lVar10 = param_1[9];
  if (*(longlong *)(lVar10 + 0x10) != 0) {
    puVar14[2] = *(longlong *)(lVar10 + 0x10);
    *(undefined8 **)(*(longlong *)(param_1[9] + 0x10) + 0x18) = puVar14;
    lVar10 = param_1[9];
  }
  *(undefined8 **)(lVar10 + 0x10) = puVar14;
  param_1[9] = (longlong)puVar14;
  puVar9 = (undefined8 *)operator_new(0x30);
  puVar8 = puVar13;
  if (puVar9 != (undefined8 *)0x0) {
    puVar9[1] = 0x10;
    puVar9[2] = 0;
    puVar9[3] = 0;
    *puVar9 = &PTR__scalar_deleting_destructor__144027670;
    puVar9[4] = puVar14;
    puVar9[5] = 0;
    puVar8 = puVar9;
  }
  lVar10 = *(longlong *)(lVar3 + 0x10);
  *(undefined8 **)(*(longlong *)(lVar10 + 0x18) + 0x10) = puVar8;
  puVar8[3] = *(undefined8 *)(lVar10 + 0x18);
  *(undefined8 **)(lVar10 + 0x18) = puVar8;
  puVar8[2] = lVar10;
  iVar2 = *(int *)((longlong)param_1 + 0x7c);
  while (iVar2 == 0x7c) {
    psVar11 = (short *)*param_1;
    if (psVar11 != (short *)param_1[2]) {
      if (((*psVar11 == 0x5c) && (psVar1 = psVar11 + 1, psVar1 != (short *)param_1[2])) &&
         ((((*(uint *)(param_1 + 0x10) & 8) == 0 && ((ushort)(*psVar1 - 0x28U) < 2)) ||
          (((*(uint *)(param_1 + 0x10) & 0x10) == 0 && ((*psVar1 - 0x7bU & 0xfffd) == 0)))))) {
        psVar11 = psVar1;
      }
      *param_1 = (longlong)(psVar11 + 1);
    }
    FUN_140663660(param_1);
    cVar6 = FUN_140660470(param_1);
    if (cVar6 == '\0') {
      lVar10 = std::_Builder<char_const_*,char,std::regex_traits<char>_>::_New_node(param_1 + 8,8);
      iVar2 = *(int *)(lVar10 + 8);
      if (iVar2 == 8) {
        uVar12 = 9;
      }
      else if (iVar2 == 10) {
        uVar12 = 0xc;
      }
      else {
        uVar12 = 0xe;
        if (iVar2 == 0xb) {
          uVar12 = 0xc;
        }
      }
      puVar9 = (undefined8 *)operator_new(0x28);
      puVar8 = puVar13;
      if (puVar9 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar9 + 1) = uVar12;
        *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        *puVar9 = &PTR_FUN_144027660;
        puVar9[4] = lVar10;
        puVar8 = puVar9;
      }
      puVar8[3] = param_1[9];
      lVar10 = param_1[9];
      if (*(longlong *)(lVar10 + 0x10) != 0) {
        puVar8[2] = *(longlong *)(lVar10 + 0x10);
        *(undefined8 **)(*(longlong *)(param_1[9] + 0x10) + 0x18) = puVar8;
        lVar10 = param_1[9];
      }
      *(undefined8 **)(lVar10 + 0x10) = puVar8;
      param_1[9] = (longlong)puVar8;
    }
    lVar10 = *(longlong *)(lVar3 + 0x10);
    lVar4 = puVar14[2];
    puVar14[2] = 0;
    lVar5 = param_1[9];
    param_1[9] = (longlong)puVar14;
    puVar14[2] = 0;
    *(undefined8 **)(lVar5 + 0x10) = puVar14;
    for (lVar5 = *(longlong *)(lVar10 + 0x28); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)) {
      lVar10 = lVar5;
    }
    puVar9 = (undefined8 *)operator_new(0x30);
    puVar8 = puVar13;
    if (puVar9 != (undefined8 *)0x0) {
      puVar9[1] = 0x10;
      puVar9[3] = 0;
      *puVar9 = &PTR__scalar_deleting_destructor__144027670;
      puVar9[4] = puVar14;
      puVar9[5] = 0;
      puVar8 = puVar9;
    }
    *(undefined8 **)(lVar10 + 0x28) = puVar8;
    puVar8[2] = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar10 + 0x28);
    iVar2 = *(int *)((longlong)param_1 + 0x7c);
  }
  return;
}



// FUNCTION 140661be0 _Do_assert_group body=227 status=ok
// SIG undefined _Do_assert_group(void)

void std::_Parser<char_const_*,char,std::regex_traits<char>_>::_Do_assert_group
               (longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(uint *)(puVar1 + 1) = (param_2 & 0xff) + 10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144027668;
    puVar1[4] = 0;
  }
  puVar4 = (undefined8 *)0x0;
  puVar2 = (undefined8 *)operator_new(0x20);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 1;
    *puVar2 = &PTR_FUN_144027650;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar4 = puVar2;
  }
  puVar1[3] = *(undefined8 *)(param_1 + 0x48);
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(lVar3 + 0x10) != 0) {
    puVar1[2] = *(longlong *)(lVar3 + 0x10);
    *(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) + 0x18) = puVar1;
    lVar3 = *(longlong *)(param_1 + 0x48);
  }
  *(undefined8 **)(lVar3 + 0x10) = puVar1;
  puVar1[4] = puVar4;
  puVar4[3] = puVar1;
  *(undefined8 **)(param_1 + 0x48) = puVar4;
  FUN_140661900(param_1);
  _Builder<char_const_*,char,std::regex_traits<char>_>::_End_group(param_1 + 0x40,puVar1);
  *(undefined8 **)(param_1 + 0x48) = puVar1;
  return;
}



// FUNCTION 140661cd0 FUN_140661cd0 body=458 status=ok
// SIG undefined FUN_140661cd0(void)

bool FUN_140661cd0(longlong *param_1,longlong param_2)

{
  char cVar1;
  wchar_t wVar2;
  wchar_t wVar3;
  wchar_t *pwVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  bool bVar10;
  
  pwVar8 = (wchar_t *)*param_1;
  wVar2 = *pwVar8;
  if ((*(uint *)(param_1 + 0x17) & 0x100) != 0) {
    wVar2 = std::ctype<wchar_t>::tolower(*(ctype<wchar_t> **)(param_1[0x1a] + 8),wVar2);
    pwVar8 = (wchar_t *)*param_1;
  }
  pwVar7 = pwVar8 + 1;
  if ((*(longlong *)(param_2 + 0x20) != 0) &&
     (pwVar4 = (wchar_t *)FUN_14063a4f0(pwVar8), pwVar4 != pwVar8)) {
    uVar5 = 1;
    pwVar7 = pwVar4;
    goto LAB_140661ddf;
  }
  lVar9 = *(longlong *)(param_2 + 0x38);
  if (lVar9 != 0) {
    wVar3 = wVar2;
    if ((*(uint *)(param_1 + 0x17) & 0x800) != 0) {
      wVar3 = FUN_140664350(param_1[0x1a]);
      lVar9 = *(longlong *)(param_2 + 0x38);
    }
    uVar6 = 0;
    if (*(uint *)(lVar9 + 4) != 0) {
      do {
        if (((ushort)*(wchar_t *)(*(longlong *)(lVar9 + 8) + uVar6 * 2) <= (ushort)wVar3) &&
           ((ushort)wVar3 <=
            (ushort)*(wchar_t *)(*(longlong *)(lVar9 + 8) + (ulonglong)((int)uVar6 + 1) * 2)))
        goto LAB_140661e71;
        uVar5 = (int)uVar6 + 2;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(lVar9 + 4));
    }
  }
  if ((ushort)wVar2 < 0x100) {
    if ((*(longlong *)(param_2 + 0x28) != 0) &&
       (uVar5 = 1,
       (*(byte *)((ulonglong)((ushort)wVar2 >> 3) + *(longlong *)(param_2 + 0x28)) &
       (byte)(1 << ((byte)wVar2 & 7))) != 0)) goto LAB_140661ddf;
  }
  else {
    lVar9 = *(longlong *)(param_2 + 0x30);
    if (lVar9 != 0) {
      pwVar4 = *(wchar_t **)(lVar9 + 8);
      pwVar8 = pwVar4 + *(uint *)(lVar9 + 4);
      if (pwVar4 != pwVar8) {
        do {
          if (*pwVar4 == wVar2) break;
          pwVar4 = pwVar4 + 1;
        } while (pwVar4 != pwVar8);
        if (pwVar4 != pwVar8) {
          uVar5 = 1;
          goto LAB_140661ddf;
        }
      }
    }
    if ((*(short *)(param_2 + 0x40) != 0) &&
       (cVar1 = FUN_140663ea0(param_1[0x1a],wVar2), cVar1 != '\0')) {
      uVar5 = 1;
      goto LAB_140661ddf;
    }
    if ((*(longlong *)(param_2 + 0x48) != 0) &&
       (cVar1 = FUN_14063a580(wVar2,*(longlong *)(param_2 + 0x48),param_1[0x1a]), cVar1 != '\0')) {
LAB_140661e71:
      uVar5 = 1;
      goto LAB_140661ddf;
    }
  }
  uVar5 = 0;
LAB_140661ddf:
  bVar10 = uVar5 != (*(uint *)(param_2 + 0xc) & 1);
  if (bVar10) {
    *param_1 = (longlong)pwVar7;
  }
  return bVar10;
}



// FUNCTION 140661ea0 FUN_140661ea0 body=418 status=ok
// SIG undefined FUN_140661ea0(void)

void FUN_140661ea0(longlong *param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  longlong lVar3;
  short sVar4;
  short *psVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  lVar7 = 0;
  if (param_2 == 0x3a) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
    if ((param_2 != 0x3d) && (uVar6 = 0xe, param_2 == 0x2e)) {
      uVar6 = 0;
    }
  }
  lVar3 = *param_1;
  iVar2 = *(int *)((longlong)param_1 + 0x7c);
  while ((((iVar2 != 0x3a && (iVar2 != 0x3d)) && (iVar2 != 0x2e)) && (iVar2 != -1))) {
    psVar5 = (short *)*param_1;
    if (psVar5 != (short *)param_1[2]) {
      if (((*psVar5 == 0x5c) && (psVar1 = psVar5 + 1, psVar1 != (short *)param_1[2])) &&
         ((((*(uint *)(param_1 + 0x10) & 8) == 0 && ((ushort)(*psVar1 - 0x28U) < 2)) ||
          (((*(uint *)(param_1 + 0x10) & 0x10) == 0 && ((*psVar1 - 0x7bU & 0xfffd) == 0)))))) {
        psVar5 = psVar1;
      }
      *param_1 = (longlong)(psVar5 + 1);
    }
    FUN_140663660(param_1);
    lVar7 = lVar7 + 1;
    iVar2 = *(int *)((longlong)param_1 + 0x7c);
  }
  if (iVar2 == param_2) {
    if (param_2 == 0x3a) {
      sVar4 = FUN_14063ced0(param_1[0xd],lVar3,*param_1,*(uint *)(param_1 + 0xe) >> 8 & 0xffffff01);
      if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        std::_Parser<char_const_*,char,std::regex_traits<char>_>::_Error(param_1,1);
      }
      FUN_14065fe20(param_1 + 8,sVar4,0);
    }
    else if (param_2 == 0x3d) {
      if (lVar3 == *param_1) {
LAB_14066203a:
                    /* WARNING: Subroutine does not return */
        std::_Parser<char_const_*,char,std::regex_traits<char>_>::_Error(param_1,0);
      }
      FUN_14065fb50(param_1 + 8,lVar3,*param_1,lVar7);
    }
    else if (param_2 == 0x2e) {
      if (lVar3 == *param_1) goto LAB_14066203a;
      FUN_140660d10(param_1 + 8,lVar3,*param_1,lVar7,param_1[9] + 0x20);
    }
    FUN_140663240(param_1);
    if (*(int *)((longlong)param_1 + 0x7c) == 0x5d) {
      FUN_140663240(param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::_Parser<char_const_*,char,std::regex_traits<char>_>::_Error(param_1,uVar6);
}



// FUNCTION 140662050 FUN_140662050 body=83 status=ok
// SIG undefined FUN_140662050(void)

undefined1 FUN_140662050(longlong param_1,short param_2)

{
  if (param_2 == 0x66) {
    *(undefined4 *)(param_1 + 0x74) = 0xc;
    return 1;
  }
  if (param_2 == 0x6e) {
    *(undefined4 *)(param_1 + 0x74) = 10;
    return 1;
  }
  if (param_2 == 0x72) {
    *(undefined4 *)(param_1 + 0x74) = 0xd;
    return 1;
  }
  if (param_2 == 0x74) {
    *(undefined4 *)(param_1 + 0x74) = 9;
    return 1;
  }
  if (param_2 == 0x76) {
    *(undefined4 *)(param_1 + 0x74) = 0xb;
    return 1;
  }
  return 0;
}



// FUNCTION 1406620b0 FUN_1406620b0 body=534 status=ok
// SIG undefined FUN_1406620b0(void)

undefined8 FUN_1406620b0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong local_res8;
  longlong local_a8;
  longlong local_a0 [3];
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_68;
  longlong local_60 [3];
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  
  std::_Tgt_state_t<char_const_*>::_Tgt_state_t<char_const_*>(&local_a8,param_1);
  lVar3 = local_88;
  lVar9 = local_a8;
  if (param_2 != 0) {
    plVar1 = param_1 + 1;
    plVar2 = param_1 + 5;
    do {
      *param_1 = lVar9;
      if (plVar1 != local_a0) {
        std::vector<unsigned_int,std::allocator<unsigned_int>_>::operator=(plVar1,local_a0);
        param_1[4] = lVar3;
      }
      if (plVar2 != &local_80) {
        std::
        vector<std::_Tgt_state_t<char_const_*>::_Grp_t,std::allocator<std::_Tgt_state_t<char_const_*>::_Grp_t>_>
        ::_Assign_range<std::_Tgt_state_t<char_const_*>::_Grp_t_*>
                  (plVar2,local_80,local_78,(undefined1)local_res8);
      }
      cVar5 = FUN_140662c80(param_1,*(undefined8 *)(param_2 + 0x10));
      if (cVar5 != '\0') {
        if ((char)param_1[0x19] == '\0') {
          uVar7 = 1;
        }
        else {
          std::_Tgt_state_t<char_const_*>::_Tgt_state_t<char_const_*>(&local_68,param_1);
          uVar6 = *param_1 - lVar9 >> 1;
          local_res8 = uVar6;
          for (lVar3 = *(longlong *)(param_2 + 0x28); lVar3 != 0;
              lVar3 = *(longlong *)(lVar3 + 0x28)) {
            *param_1 = lVar9;
            if (plVar1 != local_a0) {
              std::vector<unsigned_int,std::allocator<unsigned_int>_>::operator=(plVar1,local_a0);
              param_1[4] = local_88;
            }
            if (plVar2 != &local_80) {
              std::
              vector<std::_Tgt_state_t<char_const_*>::_Grp_t,std::allocator<std::_Tgt_state_t<char_const_*>::_Grp_t>_>
              ::_Assign_range<std::_Tgt_state_t<char_const_*>::_Grp_t_*>
                        (plVar2,local_80,local_78,uVar6 & 0xff);
            }
            cVar5 = FUN_140662c80(param_1,*(undefined8 *)(lVar3 + 0x10));
            if (cVar5 != '\0') {
              lVar4 = *param_1;
              uVar8 = lVar4 - local_a8 >> 1;
              lVar9 = local_a8;
              if ((longlong)local_res8 < (longlong)uVar8) {
                local_68 = lVar4;
                if (local_60 != plVar1) {
                  std::vector<unsigned_int,std::allocator<unsigned_int>_>::operator=
                            (local_60,plVar1);
                  local_48 = param_1[4];
                }
                lVar9 = local_a8;
                local_res8 = uVar8;
                if (&local_40 != plVar2) {
                  std::
                  vector<std::_Tgt_state_t<char_const_*>::_Grp_t,std::allocator<std::_Tgt_state_t<char_const_*>::_Grp_t>_>
                  ::_Assign_range<std::_Tgt_state_t<char_const_*>::_Grp_t_*>
                            (&local_40,*plVar2,param_1[6],uVar6 & 0xff);
                  lVar9 = local_a8;
                }
              }
            }
          }
          *param_1 = local_68;
          if (plVar1 != local_60) {
            std::vector<unsigned_int,std::allocator<unsigned_int>_>::operator=(plVar1,local_60);
            param_1[4] = local_48;
          }
          if (plVar2 != &local_40) {
            std::
            vector<std::_Tgt_state_t<char_const_*>::_Grp_t,std::allocator<std::_Tgt_state_t<char_const_*>::_Grp_t>_>
            ::_Assign_range<std::_Tgt_state_t<char_const_*>::_Grp_t_*>
                      (plVar2,local_40,local_38,local_res8 & 0xff);
          }
          uVar7 = 1;
          std::
          _Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>::
          ~_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>
                    (&local_68);
        }
        goto LAB_140662154;
      }
      param_2 = *(longlong *)(param_2 + 0x28);
    } while (param_2 != 0);
  }
  uVar7 = 0;
LAB_140662154:
  std::_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>::
  ~_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>
            (&local_a8);
  return uVar7;
}



// FUNCTION 1406622d0 _Do_noncapture_group body=70 status=ok
// SIG undefined _Do_noncapture_group(void)

void std::_Parser<char_const_*,char,std::regex_traits<char>_>::_Do_noncapture_group
               (longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = _Builder<char_const_*,char,std::regex_traits<char>_>::_New_node(param_1 + 0x40,8);
  FUN_140661900(param_1);
  _Builder<char_const_*,char,std::regex_traits<char>_>::_End_group(param_1 + 0x40,uVar1);
  return;
}



// FUNCTION 140662320 _Do_rep0 body=613 status=ok
// SIG undefined _Do_rep0(void)

char std::_Matcher<char_const_*,char,std::regex_traits<char>,char_const_*>::_Do_rep0
               (ulonglong *param_1,longlong param_2,char param_3)

{
  ulonglong uVar1;
  char cVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  int iVar7;
  bool bVar9;
  undefined1 local_res8;
  ulonglong local_b8;
  ulonglong local_b0 [3];
  ulonglong local_98;
  ulonglong local_90 [3];
  ulonglong local_78;
  ulonglong local_70 [3];
  ulonglong local_58;
  ulonglong local_50;
  undefined8 local_48;
  int iVar8;
  
  iVar7 = 0;
  _Tgt_state_t<char_const_*>::_Tgt_state_t<char_const_*>(&local_78,param_1);
  if (0 < *(int *)(param_2 + 0x20)) {
    uVar4 = *param_1;
    do {
      cVar2 = FUN_140662c80(param_1,*(undefined8 *)(param_2 + 0x10));
      if (cVar2 == '\0') {
        *param_1 = local_78;
        if (param_1 + 1 != local_70) {
          vector<unsigned_int,std::allocator<unsigned_int>_>::operator=(param_1 + 1,local_70);
          param_1[4] = local_58;
        }
        if (param_1 + 5 != &local_50) {
          vector<std::_Tgt_state_t<char_const_*>::_Grp_t,std::allocator<std::_Tgt_state_t<char_const_*>::_Grp_t>_>
          ::_Assign_range<std::_Tgt_state_t<char_const_*>::_Grp_t_*>
                    (param_1 + 5,local_50,local_48,local_res8);
        }
        cVar2 = '\0';
        goto LAB_140662566;
      }
      iVar8 = *(int *)(param_2 + 0x20) + -1;
      if (uVar4 != *param_1) {
        iVar8 = iVar7;
      }
      iVar7 = iVar8 + 1;
      uVar4 = *param_1;
    } while (iVar7 < *(int *)(param_2 + 0x20));
  }
  _Tgt_state_t<char_const_*>::_Tgt_state_t<char_const_*>(&local_b8,param_1);
  uVar4 = *param_1;
  cVar2 = '\0';
  cVar3 = FUN_140662c80(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10));
  uVar6 = uVar4;
  if (cVar3 != '\0') {
    if (param_3 == '\0') {
LAB_140662539:
      cVar2 = '\x01';
      goto LAB_140662555;
    }
    local_b8 = *param_1;
    if (local_b0 != param_1 + 1) {
      vector<unsigned_int,std::allocator<unsigned_int>_>::operator=(local_b0,param_1 + 1);
      local_98 = param_1[4];
    }
    if (local_90 != param_1 + 5) {
      vector<std::_Tgt_state_t<char_const_*>::_Grp_t,std::allocator<std::_Tgt_state_t<char_const_*>::_Grp_t>_>
      ::_Assign_range<std::_Tgt_state_t<char_const_*>::_Grp_t_*>
                (local_90,param_1[5],param_1[6],uVar4 & 0xff);
    }
    cVar2 = '\x01';
  }
  do {
    if ((*(int *)(param_2 + 0x24) != -1) &&
       (bVar9 = *(int *)(param_2 + 0x24) <= iVar7, iVar7 = iVar7 + 1, bVar9)) break;
    *param_1 = uVar6;
    puVar5 = param_1 + 1;
    if (puVar5 != local_70) {
      vector<unsigned_int,std::allocator<unsigned_int>_>::operator=(puVar5,local_70);
      param_1[4] = local_58;
    }
    cVar3 = FUN_140662c80(param_1,*(undefined8 *)(param_2 + 0x10));
    if (cVar3 == '\0') break;
    uVar1 = *param_1;
    cVar3 = FUN_140662c80(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10));
    if (cVar3 != '\0') {
      if (param_3 == '\0') goto LAB_140662539;
      local_b8 = *param_1;
      if (local_b0 != puVar5) {
        vector<unsigned_int,std::allocator<unsigned_int>_>::operator=(local_b0,puVar5);
        local_98 = param_1[4];
      }
      if (local_90 != param_1 + 5) {
        vector<std::_Tgt_state_t<char_const_*>::_Grp_t,std::allocator<std::_Tgt_state_t<char_const_*>::_Grp_t>_>
        ::_Assign_range<std::_Tgt_state_t<char_const_*>::_Grp_t_*>
                  (local_90,param_1[5],param_1[6],uVar4 & 0xff);
      }
      cVar2 = '\x01';
    }
    bVar9 = uVar6 != uVar1;
    uVar6 = uVar1;
  } while (bVar9);
  puVar5 = &local_b8;
  if (cVar2 == '\0') {
    puVar5 = &local_78;
  }
  _Tgt_state_t<char_const_*>::operator=(param_1,puVar5);
LAB_140662555:
  _Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>::
  ~_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>
            (&local_b8);
LAB_140662566:
  _Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>::
  ~_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>
            (&local_78);
  return cVar2;
}



// FUNCTION 140662590 _Do_rep body=536 status=ok
// SIG undefined _Do_rep(void)

ulonglong std::_Matcher<char_const_*,char,std::regex_traits<char>,char_const_*>::_Do_rep
                    (longlong *param_1,longlong param_2,char param_3,int param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  byte bVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined1 local_res10;
  longlong local_78 [2];
  longlong local_68;
  longlong local_60 [3];
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  
  if (*(int *)(param_2 + 0x34) == 1) {
    uVar5 = _Do_rep0();
    return uVar5;
  }
  bVar4 = 0;
  _Tgt_state_t<char_const_*>::_Tgt_state_t<char_const_*>(&local_68,param_1);
  piVar7 = (int *)((ulonglong)*(uint *)(param_2 + 0x30) * 0x10 + param_1[0x10]);
  iVar1 = *piVar7;
  plVar2 = *(longlong **)(piVar7 + 2);
  local_78[0] = *param_1;
  if ((param_4 == 0) || (*plVar2 != local_78[0])) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((*(int *)(param_2 + 0x24) < 0) || (param_4 < *(int *)(param_2 + 0x24))) {
    if (param_4 < *(int *)(param_2 + 0x20)) {
      if (bVar3) {
LAB_140662686:
        *piVar7 = param_4 + 1;
        *(longlong **)(piVar7 + 2) = local_78;
        uVar6 = *(undefined8 *)(param_2 + 0x10);
      }
      else {
        uVar6 = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10);
      }
      goto LAB_140662734;
    }
    if (param_3 != '\0') {
      if (bVar3) {
        *piVar7 = param_4 + 1;
        *(longlong **)(piVar7 + 2) = local_78;
        bVar4 = FUN_140662c80(param_1,*(undefined8 *)(param_2 + 0x10));
        if (bVar4 != 0) goto LAB_1406626d2;
      }
      else if (1 < param_4) goto LAB_14066274d;
      *piVar7 = iVar1;
      *(longlong **)(piVar7 + 2) = plVar2;
      _Tgt_state_t<char_const_*>::operator=(param_1,&local_68);
      goto LAB_14066272c;
    }
    bVar4 = FUN_140662c80(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10));
    if (bVar4 != 0) goto LAB_1406626d2;
    if (bVar3) {
      _Tgt_state_t<char_const_*>::operator=(param_1,&local_68);
      goto LAB_140662686;
    }
  }
  else {
LAB_14066272c:
    uVar6 = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10);
LAB_140662734:
    bVar4 = FUN_140662c80(param_1,uVar6);
    if (bVar4 != 0) goto LAB_1406626d2;
  }
LAB_14066274d:
  *param_1 = local_68;
  if (param_1 + 1 != local_60) {
    vector<unsigned_int,std::allocator<unsigned_int>_>::operator=(param_1 + 1,local_60);
    param_1[4] = local_48;
  }
  if (param_1 + 5 != &local_40) {
    local_res10 = (undefined1)iVar1;
    vector<std::_Tgt_state_t<char_const_*>::_Grp_t,std::allocator<std::_Tgt_state_t<char_const_*>::_Grp_t>_>
    ::_Assign_range<std::_Tgt_state_t<char_const_*>::_Grp_t_*>
              (param_1 + 5,local_40,local_38,local_res10);
  }
LAB_1406626d2:
  *piVar7 = iVar1;
  *(longlong **)(piVar7 + 2) = plVar2;
  _Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>::
  ~_Tgt_state_t<std::_String_const_iterator<std::_String_val<std::_Simple_types<char>_>_>_>
            (&local_68);
  return (ulonglong)bVar4;
}



// FUNCTION 1406627b0 _End_group body=176 status=ok
// SIG undefined _End_group(void)

void std::_Builder<char_const_*,char,std::regex_traits<char>_>::_End_group
               (longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == 8) {
    uVar2 = 9;
  }
  else {
    uVar2 = 0xc;
    if ((iVar1 != 10) && (uVar2 = 0xe, iVar1 == 0xb)) {
      uVar2 = 0xc;
    }
  }
  puVar3 = (undefined8 *)operator_new(0x28);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = uVar2;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = &PTR_FUN_144027660;
    puVar3[4] = param_2;
  }
  puVar3[3] = *(undefined8 *)(param_1 + 8);
  lVar4 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar4 + 0x10) != 0) {
    puVar3[2] = *(longlong *)(lVar4 + 0x10);
    *(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x18) = puVar3;
    lVar4 = *(longlong *)(param_1 + 8);
  }
  *(undefined8 **)(lVar4 + 0x10) = puVar3;
  *(undefined8 **)(param_1 + 8) = puVar3;
  return;
}



// FUNCTION 140662860 _Error body=11 status=ok
// SIG undefined _Error(void)

void std::_Parser<char_const_*,char,std::regex_traits<char>_>::_Error
               (undefined8 param_1,error_type param_2)

{
                    /* WARNING: Subroutine does not return */
  std::_guard_xfg_dispatch_icall_nop(param_2);
}



// FUNCTION 140662870 FUN_140662870 body=260 status=ok
// SIG undefined FUN_140662870(void)

void FUN_140662870(longlong *param_1,int param_2)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  short *psVar4;
  
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    uVar2 = *(ushort *)(param_1 + 0xf);
    if ((ushort)(uVar2 - 0x30) < 10) {
      iVar3 = uVar2 - 0x30;
    }
    else if ((ushort)(uVar2 - 0x61) < 6) {
      iVar3 = uVar2 - 0x57;
    }
    else {
      if (5 < (ushort)(uVar2 - 0x41)) break;
      iVar3 = uVar2 - 0x37;
    }
    if (iVar3 == -1) break;
    param_2 = param_2 + -1;
    *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) * 0x10 + iVar3;
    psVar4 = (short *)*param_1;
    if (psVar4 != (short *)param_1[2]) {
      if (((*psVar4 == 0x5c) && (psVar1 = psVar4 + 1, psVar1 != (short *)param_1[2])) &&
         ((((*(uint *)(param_1 + 0x10) & 8) == 0 && ((ushort)(*psVar1 - 0x28U) < 2)) ||
          (((*(uint *)(param_1 + 0x10) & 0x10) == 0 && ((*psVar1 - 0x7bU & 0xfffd) == 0)))))) {
        psVar4 = psVar1;
      }
      *param_1 = (longlong)(psVar4 + 1);
    }
    FUN_140663660(param_1);
  }
  if (param_2 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Parser<char_const_*,char,std::regex_traits<char>_>::_Error(param_1,2);
}



// FUNCTION 140662980 _Insert_x body=494 status=ok
// SIG undefined _Insert_x(void)

ulonglong std::vector<bool,std::allocator<bool>_>::_Insert_x
                    (uint *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 local_res8 [2];
  uint *local_28;
  uint *local_18;
  undefined4 *puStack_10;
  
  uVar6 = (*param_2 - *(longlong *)param_1 >> 2) * 0x20 + param_2[1];
  if (param_3 != 0) {
    if (0x7fffffffffffffffU - *(longlong *)(param_1 + 6) < param_3) {
      _Xlen(param_1);
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
    local_res8[0] = 0;
    puStack_10 = local_res8;
    local_18 = param_1;
    vector<unsigned_int,std::allocator<unsigned_int>_>::
    _Resize<<lambda_f5f77627601f5a8a55cdb6434a10ac65>_>
              (param_1,param_3 + 0x1f + *(longlong *)(param_1 + 6) >> 5,&local_18);
    uVar5 = *(ulonglong *)(param_1 + 6);
    if (uVar5 == 0) {
      *(ulonglong *)(param_1 + 6) = param_3;
    }
    else {
      lVar2 = *(longlong *)param_1;
      if (((longlong)uVar5 < 0) && (uVar5 != 0)) {
        lVar1 = -((~uVar5 >> 5) * 4 + 4);
      }
      else {
        lVar1 = (uVar5 >> 5) * 4;
      }
      local_18 = (uint *)(lVar2 + lVar1);
      uVar4 = (ulonglong)((uint)uVar5 & 0x1f);
      uVar5 = uVar5 + param_3;
      *(ulonglong *)(param_1 + 6) = uVar5;
      if (((longlong)uVar5 < 0) && (uVar5 != 0)) {
        lVar1 = -((~uVar5 >> 5) * 4 + 4);
      }
      else {
        lVar1 = (uVar5 >> 5) * 4;
      }
      local_28 = (uint *)(lVar2 + lVar1);
      uVar5 = (ulonglong)((uint)uVar5 & 0x1f);
      if (((longlong)uVar6 < 0) && (uVar6 != 0)) {
        lVar1 = -((~uVar6 >> 5) * 4 + 4);
      }
      else {
        lVar1 = (uVar6 >> 5) * 4;
      }
      while (((uint *)(lVar2 + lVar1) != local_18 || (((uint)uVar6 & 0x1f) != uVar4))) {
        if (uVar4 == 0) {
          uVar4 = 0x1f;
          local_18 = local_18 + -1;
        }
        else {
          uVar4 = uVar4 - 1;
        }
        if (uVar5 == 0) {
          uVar5 = 0x1f;
          local_28 = local_28 + -1;
        }
        else {
          uVar5 = uVar5 - 1;
        }
        if ((*local_18 & 1 << ((byte)uVar4 & 0x1f)) == 0) {
          *local_28 = *local_28 & ~(1 << ((uint)uVar5 & 0x1f));
        }
        else {
          *local_28 = *local_28 | 1 << ((uint)uVar5 & 0x1f);
        }
      }
    }
  }
  return uVar6;
}



// FUNCTION 140662b70 FUN_140662b70 body=68 status=ok
// SIG undefined FUN_140662b70(void)

ulonglong FUN_140662b70(longlong *param_1)

{
  ulonglong in_RAX;
  short *psVar1;
  
  psVar1 = (short *)(*param_1 + 2);
  if ((psVar1 != (short *)param_1[2]) &&
     ((((*(uint *)(param_1 + 0x10) & 8) == 0 &&
       (in_RAX = (ulonglong)(ushort)(*psVar1 - 0x28U), (ushort)(*psVar1 - 0x28U) < 2)) ||
      (((*(uint *)(param_1 + 0x10) & 0x10) == 0 &&
       (in_RAX = (ulonglong)(ushort)(*psVar1 - 0x7bU), (*psVar1 - 0x7bU & 0xfffd) == 0)))))) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140662bc0 FUN_140662bc0 body=183 status=ok
// SIG undefined FUN_140662bc0(void)

ulonglong FUN_140662bc0(undefined8 *param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  ulonglong uVar4;
  byte bVar5;
  
  uVar2 = *(uint *)((longlong)param_1 + 0xbc);
  uVar4 = (ulonglong)uVar2;
  if (((uVar2 >> 8 & 1) == 0) && (puVar3 = (ushort *)*param_1, puVar3 == (ushort *)param_1[0x13])) {
    if (puVar3 == (ushort *)param_1[0x14]) {
      return (ulonglong)CONCAT31((int3)(uVar2 >> 8),(uVar2 & 0xc) == 0);
    }
    if ((uVar2 & 4) == 0) {
      uVar1 = *puVar3;
      uVar4 = (ulonglong)uVar1;
      if ((uVar1 < 0x7b) && (uVar4 = (ulonglong)(byte)uVar1, (&DAT_144027550)[uVar4] != '\0')) {
        return 1;
      }
    }
  }
  else {
    puVar3 = (ushort *)*param_1;
    if (puVar3 != (ushort *)param_1[0x14]) {
      if ((puVar3[-1] < 0x7b) && ((&DAT_144027550)[(byte)puVar3[-1]] != '\0')) {
        bVar5 = 1;
      }
      else {
        bVar5 = 0;
      }
      uVar1 = *puVar3;
      uVar4 = (ulonglong)uVar1;
      if ((uVar1 < 0x7b) && (uVar4 = (ulonglong)(byte)uVar1, (&DAT_144027550)[uVar4] != '\0')) {
        return (ulonglong)(bVar5 ^ 1);
      }
      return CONCAT71((int7)(uVar4 >> 8),bVar5);
    }
    if ((uVar2 & 8) == 0) {
      uVar1 = puVar3[-1];
      uVar4 = (ulonglong)uVar1;
      if ((uVar1 < 0x7b) && (uVar4 = (ulonglong)(byte)uVar1, (&DAT_144027550)[uVar4] != '\0')) {
        return 1;
      }
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 140662c80 FUN_140662c80 body=1226 status=ok
// SIG undefined FUN_140662c80(void)

bool FUN_140662c80(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  short *psVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined4 uVar13;
  bool bVar14;
  longlong local_48;
  longlong local_40 [2];
  longlong local_30;
  longlong local_28;
  
  iVar10 = (int)param_1[0x1c];
  if (0 < iVar10) {
    iVar10 = iVar10 + -1;
    *(int *)(param_1 + 0x1c) = iVar10;
    if (iVar10 < 1) {
                    /* WARNING: Subroutine does not return */
      std::_guard_xfg_dispatch_icall_nop(0xc);
    }
  }
  if ((0 < *(int *)((longlong)param_1 + 0xdc)) &&
     (iVar8 = *(int *)((longlong)param_1 + 0xdc) + -1, *(int *)((longlong)param_1 + 0xdc) = iVar8,
     iVar8 < 1)) {
                    /* WARNING: Subroutine does not return */
    std::_guard_xfg_dispatch_icall_nop(0xb);
  }
  bVar14 = false;
  bVar12 = false;
  if (param_2 != 0) {
LAB_140662d10:
    iVar10 = *(int *)(param_2 + 8);
    switch(iVar10) {
    case 1:
    case 8:
    case 9:
    case 0x11:
    case 0x14:
      break;
    case 2:
      if (((*(uint *)((longlong)param_1 + 0xbc) >> 8 & 1) == 0) && (*param_1 == param_1[0x13])) {
        bVar14 = (bool)((byte)*(uint *)((longlong)param_1 + 0xbc) & 1);
      }
      else {
        bVar14 = *(short *)(*param_1 + -2) != 10;
      }
      break;
    case 3:
      if ((short *)*param_1 == (short *)param_1[0x14]) {
        bVar14 = (bool)((byte)(*(uint *)((longlong)param_1 + 0xbc) >> 1) & 1);
      }
      else {
        bVar14 = *(short *)*param_1 != 10;
      }
      break;
    case 4:
      bVar6 = FUN_140662bc0(param_1);
      bVar14 = bVar6 == ((byte)*(undefined4 *)(param_2 + 0xc) & 1);
      break;
    case 5:
      psVar3 = (short *)*param_1;
      if (((psVar3 == (short *)param_1[0x14]) || (*psVar3 == 10)) || (*psVar3 == 0xd)) {
LAB_1406630e4:
        bVar12 = true;
LAB_1406630e8:
        iVar10 = (int)param_1[0x1c];
        goto LAB_1406630ee;
      }
      *param_1 = (longlong)(psVar3 + 1);
      break;
    case 6:
      lVar9 = FUN_140638890(*param_1,param_1[0x14],*(longlong *)(param_2 + 0x28),
                            *(longlong *)(param_2 + 0x28) + (ulonglong)*(uint *)(param_2 + 0x24) * 2
                            ,param_1[0x1a],(int)param_1[0x17]);
      if (lVar9 == *param_1) goto LAB_1406630e4;
      *param_1 = lVar9;
      break;
    case 7:
      if ((*param_1 == param_1[0x14]) || (cVar7 = FUN_140661cd0(param_1,param_2), cVar7 == '\0'))
      goto LAB_1406630e4;
      bVar14 = false;
      goto LAB_1406630c9;
    case 10:
    case 0xb:
      lVar9 = *param_1;
      std::_Bt_state_t<char_const_*>::_Bt_state_t<char_const_*>(&local_48,param_1);
      cVar7 = FUN_140662c80(param_1,*(undefined8 *)(param_2 + 0x20));
      if ((bool)cVar7 == (iVar10 == 0xb)) {
        *param_1 = local_48;
        if (param_1 + 1 != local_40) {
          std::vector<unsigned_int,std::allocator<unsigned_int>_>::operator=(param_1 + 1,local_40);
          param_1[4] = local_28;
        }
        bVar14 = true;
      }
      else {
        *param_1 = lVar9;
      }
      if (local_40[0] != 0) {
        uVar11 = local_30 - local_40[0] & 0xfffffffffffffffc;
        lVar9 = local_40[0];
        if (0xfff < uVar11) {
          lVar9 = *(longlong *)(local_40[0] + -8);
          uVar11 = uVar11 + 0x27;
          if (0x1f < (local_40[0] - lVar9) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        FMemory::operator_delete(lVar9,uVar11);
      }
      break;
    case 0xc:
      goto switchD_140662d2c_caseD_c;
    case 0xd:
      *(longlong *)(param_1[5] + (ulonglong)*(uint *)(param_2 + 0x20) * 0x10) = *param_1;
      uVar11 = param_1[4];
      if (*(uint *)(param_2 + 0x20) < uVar11) {
        do {
          uVar11 = uVar11 - 1;
          puVar1 = (uint *)(param_1[1] + (uVar11 >> 5) * 4);
          *puVar1 = *puVar1 & ~(1 << ((uint)uVar11 & 0x1f));
        } while (*(uint *)(param_2 + 0x20) < uVar11);
      }
      break;
    case 0xe:
      lVar9 = *(longlong *)(param_2 + 0x20);
      if ((*(char *)((longlong)param_1 + 0xc1) != '\0') || (*(int *)(lVar9 + 0x20) != 0)) {
        uVar11 = (ulonglong)(*(uint *)(lVar9 + 0x20) >> 5);
        *(uint *)(param_1[1] + uVar11 * 4) =
             *(uint *)(param_1[1] + uVar11 * 4) | 1 << (*(uint *)(lVar9 + 0x20) & 0x1f);
        *(longlong *)(param_1[5] + 8 + (ulonglong)*(uint *)(lVar9 + 0x20) * 0x10) = *param_1;
      }
      break;
    case 0xf:
      uVar2 = *(uint *)(param_2 + 0x20);
      if ((*(uint *)(param_1[1] + (ulonglong)(uVar2 >> 5) * 4) >> ((byte)uVar2 & 0x1f) & 1) != 0) {
        lVar9 = *param_1;
        lVar4 = *(longlong *)(param_1[5] + (ulonglong)uVar2 * 0x10);
        lVar5 = *(longlong *)(param_1[5] + ((ulonglong)uVar2 * 8 + 4) * 2);
        if ((lVar4 != lVar5) &&
           (lVar9 = FUN_140638890(lVar9,param_1[0x14],lVar4,lVar5,param_1[0x1a],(int)param_1[0x17]),
           lVar9 == *param_1)) goto LAB_1406630e4;
        *param_1 = lVar9;
      }
      break;
    case 0x10:
      cVar7 = FUN_1406620b0(param_1,param_2);
      if (cVar7 == '\0') {
        bVar14 = true;
      }
      goto switchD_140662d2c_caseD_c;
    case 0x12:
      uVar2 = CONCAT31((uint3)(*(uint *)(param_2 + 0xc) >> 9),(char)(*(uint *)(param_2 + 0xc) >> 1))
      ;
      uVar13 = 0;
LAB_140663029:
      cVar7 = std::_Matcher<char_const_*,char,std::regex_traits<char>,char_const_*>::_Do_rep
                        (param_1,param_2,uVar2 & 0xffffff01,uVar13);
      if (cVar7 == '\0') {
        bVar14 = true;
      }
      goto switchD_140662d2c_caseD_c;
    case 0x13:
      param_2 = *(longlong *)(param_2 + 0x20);
      if (*(int *)(param_2 + 0x34) == 0) {
        uVar2 = CONCAT31((uint3)(*(uint *)(param_2 + 0xc) >> 9),
                         (char)(*(uint *)(param_2 + 0xc) >> 1));
        uVar13 = *(undefined4 *)((ulonglong)*(uint *)(param_2 + 0x30) * 0x10 + param_1[0x10]);
        goto LAB_140663029;
      }
      goto switchD_140662d2c_caseD_c;
    case 0x15:
      if ((((*(uint *)((longlong)param_1 + 0xbc) & 0x2020) == 0) || (param_1[0x13] != *param_1)) &&
         (((char)param_1[0x1b] == '\0' || (*param_1 == param_1[0x14])))) {
        if (((char)param_1[0x18] == '\0') || (cVar7 = FUN_140660b40(param_1), cVar7 != '\0')) {
          std::_Tgt_state_t<char_const_*>::operator=(param_1 + 8,param_1);
          *(undefined1 *)(param_1 + 0x18) = 1;
        }
      }
      else {
        bVar14 = true;
      }
switchD_140662d2c_caseD_c:
      param_2 = 0;
      break;
    default:
                    /* WARNING: Subroutine does not return */
      std::_guard_xfg_dispatch_icall_nop(0xd);
    }
    bVar12 = bVar14;
    if (bVar14 != false) goto LAB_1406630e8;
LAB_1406630c9:
    bVar12 = bVar14;
    if ((param_2 == 0) || (param_2 = *(longlong *)(param_2 + 0x10), param_2 == 0))
    goto LAB_1406630e8;
    goto LAB_140662d10;
  }
LAB_1406630ee:
  if (0 < iVar10) {
    *(int *)(param_1 + 0x1c) = iVar10 + 1;
  }
  return bVar12 == false;
}



// FUNCTION 1406631b0 _New_node body=129 status=ok
// SIG undefined _New_node(void)

undefined8 *
std::_Builder<char_const_*,char,std::regex_traits<char>_>::_New_node
          (longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = param_2;
    *puVar1 = &PTR_FUN_144027650;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
  }
  puVar1[3] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar2 + 0x10) != 0) {
    puVar1[2] = *(longlong *)(lVar2 + 0x10);
    *(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x18) = puVar1;
    lVar2 = *(longlong *)(param_1 + 8);
  }
  *(undefined8 **)(lVar2 + 0x10) = puVar1;
  *(undefined8 **)(param_1 + 8) = puVar1;
  return puVar1;
}



// FUNCTION 140663240 FUN_140663240 body=95 status=ok
// SIG undefined FUN_140663240(void)

void FUN_140663240(longlong *param_1)

{
  short *psVar1;
  short *psVar2;
  
  psVar2 = (short *)*param_1;
  if (psVar2 != (short *)param_1[2]) {
    if ((*psVar2 == 0x5c) && (psVar1 = psVar2 + 1, psVar1 != (short *)param_1[2])) {
      if ((((*(uint *)(param_1 + 0x10) & 8) == 0) && ((ushort)(*psVar1 - 0x28U) < 2)) ||
         (((*(uint *)(param_1 + 0x10) & 0x10) == 0 && ((*psVar1 - 0x7bU & 0xfffd) == 0)))) {
        psVar2 = psVar1;
      }
    }
    *param_1 = (longlong)(psVar2 + 1);
  }
  FUN_140663660();
  return;
}



// FUNCTION 1406632a0 FUN_1406632a0 body=639 status=ok
// SIG undefined FUN_1406632a0(void)

ushort * FUN_1406632a0(longlong param_1,ushort *param_2,ushort *param_3,longlong param_4)

{
  ushort uVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  if (param_4 == 0) {
    param_4 = *(longlong *)(param_1 + 0xb0);
  }
  if (param_2 == param_3) {
    return param_2;
  }
  do {
    if (param_4 == 0) {
      return param_2;
    }
    switch(*(undefined4 *)(param_4 + 8)) {
    case 1:
    case 8:
    case 9:
    case 0xd:
    case 0xe:
    case 0x14:
      param_4 = *(longlong *)(param_4 + 0x10);
      break;
    case 2:
      if (param_2[-1] == 10) {
        return param_2;
      }
      goto LAB_140663304;
    case 3:
      goto switchD_1406632f1_caseD_3;
    default:
      return param_2;
    case 6:
      goto switchD_1406632f1_caseD_6;
    case 7:
      goto LAB_140663390;
    case 0xc:
    case 0x15:
      param_4 = 0;
      break;
    case 0x10:
      goto switchD_1406632f1_caseD_10;
    }
  } while( true );
LAB_140663390:
  uVar1 = *param_2;
  if ((*(longlong *)(param_4 + 0x20) == 0) ||
     (puVar6 = (ushort *)FUN_14063a4f0(), puVar6 == param_2)) {
    lVar9 = *(longlong *)(param_4 + 0x38);
    if (lVar9 != 0) {
      uVar4 = uVar1;
      if ((*(uint *)(param_1 + 0xb8) & 0x800) != 0) {
        uVar4 = FUN_140664350();
        lVar9 = *(longlong *)(param_4 + 0x38);
      }
      uVar8 = 0;
      if (*(uint *)(lVar9 + 4) != 0) {
        do {
          if ((*(ushort *)(*(longlong *)(lVar9 + 8) + uVar8 * 2) <= uVar4) &&
             (uVar4 <= *(ushort *)(*(longlong *)(lVar9 + 8) + (ulonglong)((int)uVar8 + 1) * 2)))
          goto LAB_1406634c1;
          uVar7 = (int)uVar8 + 2;
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 < *(uint *)(lVar9 + 4));
      }
    }
    if (uVar1 < 0x100) {
      if (*(longlong *)(param_4 + 0x28) != 0) {
        bVar3 = *(byte *)((ulonglong)(uVar1 >> 3) + *(longlong *)(param_4 + 0x28)) &
                (byte)(1 << ((byte)uVar1 & 7));
LAB_1406634bf:
        if (bVar3 != 0) {
LAB_1406634c1:
          uVar7 = 1;
          goto LAB_1406634ca;
        }
      }
    }
    else {
      lVar9 = *(longlong *)(param_4 + 0x30);
      if (lVar9 != 0) {
        puVar5 = *(ushort **)(lVar9 + 8);
        puVar6 = puVar5 + *(uint *)(lVar9 + 4);
        if (puVar5 != puVar6) {
          do {
            if (*puVar5 == uVar1) break;
            puVar5 = puVar5 + 1;
          } while (puVar5 != puVar6);
          if (puVar5 != puVar6) {
            uVar7 = 1;
            goto LAB_1406634ca;
          }
        }
      }
      if ((*(short *)(param_4 + 0x40) != 0) && (cVar2 = FUN_140663ea0(), cVar2 != '\0')) {
        uVar7 = 1;
        goto LAB_1406634ca;
      }
      if (*(longlong *)(param_4 + 0x48) != 0) {
        bVar3 = FUN_14063a580(uVar1,*(longlong *)(param_4 + 0x48),*(undefined8 *)(param_1 + 0xd0));
        goto LAB_1406634bf;
      }
    }
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
LAB_1406634ca:
  if (uVar7 != (*(uint *)(param_4 + 0xc) & 1)) {
    return param_2;
  }
  param_2 = param_2 + 1;
  if (param_2 == param_3) {
    return param_2;
  }
  goto LAB_140663390;
switchD_1406632f1_caseD_10:
  do {
    if (param_4 == 0) {
      return param_3;
    }
    param_3 = (ushort *)FUN_1406632a0(param_1,param_2,param_3,*(undefined8 *)(param_4 + 0x10));
    param_4 = *(longlong *)(param_4 + 0x28);
  } while (param_2 != param_3);
  return param_3;
switchD_1406632f1_caseD_6:
  do {
    puVar6 = param_2 + 1;
    puVar5 = (ushort *)
             FUN_140638890(param_2,puVar6,*(longlong *)(param_4 + 0x28),
                           *(longlong *)(param_4 + 0x28) + 2,*(undefined8 *)(param_1 + 0xd0),
                           *(undefined4 *)(param_1 + 0xb8));
    if (puVar5 != param_2) {
      return param_2;
    }
    param_2 = puVar6;
  } while (puVar6 != param_3);
  return puVar6;
switchD_1406632f1_caseD_3:
  do {
    if (*param_2 == 10) {
      return param_2;
    }
    param_2 = param_2 + 1;
  } while (param_2 != param_3);
  return param_2;
  while (param_2 = param_2 + 1, param_2 != param_3) {
LAB_140663304:
    if (*param_2 == 10) break;
  }
  if (param_2 != param_3) {
    param_2 = param_2 + 1;
  }
  return param_2;
}



// FUNCTION 140663580 _Tidy body=112 status=ok
// SIG undefined _Tidy(void)

void std::basic_regex<char,std::regex_traits<char>_>::_Tidy(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x2c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      puVar4 = (undefined8 *)*param_1;
      while (puVar4 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)puVar4[2];
        puVar4[2] = 0;
        (**(code **)*puVar4)(puVar4,1);
        puVar4 = puVar3;
      }
      *param_1 = 0;
      return;
    }
  }
  *param_1 = 0;
  return;
}



// FUNCTION 1406635f0 _Tidy_deallocate body=97 status=ok
// SIG undefined _Tidy_deallocate(void)

void std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Tidy_deallocate
               (longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (7 < (ulonglong)param_1[3]) {
    lVar2 = *param_1;
    lVar1 = param_1[3] * 2;
    uVar4 = lVar1 + 2;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      uVar4 = lVar1 + 0x29;
      if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(lVar3,uVar4);
  }
  param_1[3] = 7;
  param_1[2] = 0;
  *(undefined2 *)param_1 = 0;
  return;
}



// FUNCTION 140663660 FUN_140663660 body=363 status=ok
// SIG undefined FUN_140663660(void)

void FUN_140663660(longlong *param_1)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  bool bVar5;
  
  if ((ushort *)*param_1 == (ushort *)param_1[2]) {
    *(undefined2 *)(param_1 + 0xf) = 0xffff;
    uVar3 = 0xffffffff;
  }
  else {
    uVar1 = *(ushort *)*param_1;
    *(ushort *)(param_1 + 0xf) = uVar1;
    pcVar4 = _guard_xfg_dispatch_icall_nop("()$^.*+?[]|\\-{},:=!\n\r\b",(uint)uVar1);
    if (pcVar4 == (char *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)*(ushort *)(param_1 + 0xf);
    }
  }
  *(uint *)((longlong)param_1 + 0x7c) = uVar3;
  switch((short)param_1[0xf]) {
  case 10:
    if ((*(byte *)(param_1 + 0x10) & 4) == 0) {
      return;
    }
    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
      return;
    }
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0x7c;
    return;
  default:
    goto switchD_1406636d6_caseD_b;
  case 0x24:
    if ((*(uint *)(param_1 + 0x10) & 0x2000000) == 0) {
      return;
    }
    if ((short *)(*param_1 + 2) == (short *)param_1[2]) {
      return;
    }
    if (*(short *)(*param_1 + 2) == 10) {
      return;
    }
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
    return;
  case 0x28:
  case 0x29:
    bVar5 = (*(byte *)(param_1 + 0x10) & 8) == 0;
    break;
  case 0x2a:
    if ((*(uint *)(param_1 + 0x10) & 0x4000000) == 0) {
      return;
    }
    cVar2 = FUN_140660a70(param_1 + 8);
    if (cVar2 == '\0') {
      return;
    }
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
    return;
  case 0x2b:
  case 0x3f:
    bVar5 = (*(byte *)(param_1 + 0x10) & 1) == 0;
    break;
  case 0x5c:
    cVar2 = FUN_140662b70(param_1);
    if (cVar2 == '\0') {
      return;
    }
    uVar1 = *(ushort *)(*param_1 + 2);
    *(ushort *)(param_1 + 0xf) = uVar1;
    *(uint *)((longlong)param_1 + 0x7c) = (uint)uVar1;
    return;
  case 0x5e:
    if ((*(uint *)(param_1 + 0x10) & 0x2000000) == 0) {
      return;
    }
    cVar2 = FUN_140660a70(param_1 + 8);
    bVar5 = cVar2 == '\0';
    break;
  case 0x7b:
  case 0x7d:
    bVar5 = (*(byte *)(param_1 + 0x10) & 0x10) == 0;
    break;
  case 0x7c:
    bVar5 = (*(byte *)(param_1 + 0x10) & 2) == 0;
  }
  if (bVar5) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
switchD_1406636d6_caseD_b:
  return;
}



// FUNCTION 140663870 _Trim body=101 status=ok
// SIG undefined _Trim(void)

void std::vector<bool,std::allocator<bool>_>::_Trim(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  
  if (param_2 < 0x8000000000000000) {
    lVar3 = *param_1;
    uVar5 = param_2 + 0x1f >> 5;
    if ((uVar5 < (ulonglong)(param_1[1] - lVar3 >> 2)) &&
       (lVar1 = lVar3 + uVar5 * 4, lVar1 != param_1[1])) {
      param_1[1] = lVar1;
    }
    param_1[3] = param_2;
    if ((param_2 & 0x1f) != 0) {
      puVar2 = (uint *)(lVar3 + -4 + uVar5 * 4);
      *puVar2 = *puVar2 & (1 << ((byte)param_2 & 0x1f)) - 1U;
    }
    return;
  }
  _Xlen();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}



// FUNCTION 1406638e0 _Xlen_string body=16 status=ok
// SIG undefined _Xlen_string(void)

void std::_Xlen_string(void)

{
                    /* WARNING: Subroutine does not return */
  std::_guard_xfg_dispatch_icall_nop("string too long");
}



// FUNCTION 140663900 _Xlen body=16 status=ok
// SIG undefined _Xlen(void)

void std::vector<bool,std::allocator<bool>_>::_Xlen(void)

{
                    /* WARNING: Subroutine does not return */
  std::_guard_xfg_dispatch_icall_nop("vector<bool> too long");
}



// FUNCTION 140663920 allocate body=116 status=ok
// SIG undefined allocate(void)

void std::allocator<unsigned_int>::allocate(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = param_2 * 4;
  if (param_2 < 0x4000000000000000) {
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        operator_new(uVar1);
        return;
      }
      return;
    }
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  uVar3 = uVar1 + 0x27;
  if (uVar3 <= uVar1) {
    uVar3 = 0xffffffffffffffff;
  }
  lVar2 = operator_new(uVar3);
  if (lVar2 != 0) {
    *(longlong *)((lVar2 + 0x27U & 0xffffffffffffffe0) - 8) = lVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}



// FUNCTION 1406639a0 allocate body=115 status=ok
// SIG undefined allocate(void)

void std::allocator<std::_Tgt_state_t<char_const_*>::_Grp_t>::allocate
               (undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = param_2 << 4;
  if (param_2 < 0x1000000000000000) {
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        operator_new(uVar1);
        return;
      }
      return;
    }
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  uVar3 = uVar1 + 0x27;
  if (uVar3 <= uVar1) {
    uVar3 = 0xffffffffffffffff;
  }
  lVar2 = operator_new(uVar3);
  if (lVar2 != 0) {
    *(longlong *)((lVar2 + 0x27U & 0xffffffffffffffe0) - 8) = lVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}



// FUNCTION 140663a20 allocate body=112 status=ok
// SIG undefined allocate(void)

void std::allocator<wchar_t>::allocate(undefined8 param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = param_2 * 2;
  if (param_2 < 0x8000000000000000) {
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        operator_new(uVar1);
        return;
      }
      return;
    }
  }
  else {
    uVar1 = 0xffffffffffffffff;
  }
  uVar3 = uVar1 + 0x27;
  if (uVar3 <= uVar1) {
    uVar3 = 0xffffffffffffffff;
  }
  lVar2 = operator_new(uVar3);
  if (lVar2 != 0) {
    *(longlong *)((lVar2 + 0x27U & 0xffffffffffffffe0) - 8) = lVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invalid_parameter_noinfo_noreturn();
}



// FUNCTION 140663aa0 assign body=290 status=ok
// SIG undefined assign(void)

longlong *
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::assign
          (longlong *param_1,void *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  void *_Dst;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *_Dst_00;
  
  uVar2 = param_1[3];
  if (uVar2 < param_3) {
    if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      _Xlen_string();
    }
    uVar4 = param_3 | 7;
    uVar6 = 0x7ffffffffffffffe;
    if (((uVar4 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) &&
       (uVar1 = (uVar2 >> 1) + uVar2, uVar6 = uVar4, uVar4 < uVar1)) {
      uVar6 = uVar1;
    }
    _Dst = (void *)allocator<wchar_t>::allocate(param_1,uVar6 + 1);
    param_1[3] = uVar6;
    param_1[2] = param_3;
    ::_guard_xfg_dispatch_icall_nop(_Dst,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)_Dst) = 0;
    if (7 < uVar2) {
      lVar3 = *param_1;
      uVar6 = uVar2 * 2 + 2;
      lVar5 = lVar3;
      if (0xfff < uVar6) {
        lVar5 = *(longlong *)(lVar3 + -8);
        uVar6 = uVar2 * 2 + 0x29;
        if (0x1f < (lVar3 - lVar5) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      FMemory::operator_delete(lVar5,uVar6);
    }
    *param_1 = (longlong)_Dst;
  }
  else {
    _Dst_00 = param_1;
    if (7 < uVar2) {
      _Dst_00 = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    ::_guard_xfg_dispatch_icall_nop(_Dst_00,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)_Dst_00) = 0;
  }
  return param_1;
}



// FUNCTION 140663bd0 deallocate body=66 status=ok
// SIG undefined deallocate(void)

void std::allocator<unsigned_int>::deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 4;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FMemory::operator_delete(lVar1,uVar2);
  return;
}



// FUNCTION 140663c20 deallocate body=65 status=ok
// SIG undefined deallocate(void)

void std::allocator<std::_Tgt_state_t<char_const_*>::_Grp_t>::deallocate
               (undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0x10;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  FMemory::operator_delete(lVar1,uVar2);
  return;
}



// FUNCTION 140663c70 erase body=556 status=ok
// SIG undefined erase(void)

longlong *
std::vector<bool,std::allocator<bool>_>::erase
          (longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint *puVar7;
  ulonglong uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  
  puVar7 = (uint *)*param_1;
  uVar2 = param_1[3];
  uStack_30 = 0;
  puVar5 = puVar7;
  if (uVar2 != 0) {
    uVar6 = (*param_3 - (longlong)puVar7 >> 2) * 0x20 + param_3[1];
    if (((longlong)uVar6 < 0) && (uVar6 != 0)) {
      lVar1 = -((~uVar6 >> 5) * 4 + 4);
    }
    else {
      lVar1 = (uVar6 >> 5) * 4;
    }
    puVar5 = (uint *)((longlong)puVar7 + lVar1);
    uStack_30 = (ulonglong)((uint)uVar6 & 0x1f);
  }
  uStack_20 = 0;
  puVar4 = puVar7;
  if (uVar2 != 0) {
    uVar6 = (*param_4 - (longlong)puVar7 >> 2) * 0x20 + param_4[1];
    if (((longlong)uVar6 < 0) && (uVar6 != 0)) {
      lVar1 = -((~uVar6 >> 5) * 4 + 4);
    }
    else {
      lVar1 = (uVar6 >> 5) * 4;
    }
    puVar4 = (uint *)((longlong)puVar7 + lVar1);
    uStack_20 = (ulonglong)((uint)uVar6 & 0x1f);
  }
  uVar6 = ((longlong)puVar5 - (longlong)puVar7 >> 2) * 0x20 + uStack_30;
  if ((puVar5 != puVar4) || (uStack_30 != uStack_20)) {
    if (((longlong)uVar2 < 0) && (uVar2 != 0)) {
      lVar1 = -((~uVar2 >> 5) * 4 + 4);
    }
    else {
      lVar1 = (uVar2 >> 5) * 4;
    }
    while ((puVar4 != (uint *)((longlong)puVar7 + lVar1) || (uStack_20 != ((uint)uVar2 & 0x1f)))) {
      if ((*puVar4 & 1 << ((byte)uStack_20 & 0x1f)) == 0) {
        uVar3 = *puVar5 & ~(1 << ((uint)uStack_30 & 0x1f));
      }
      else {
        uVar3 = *puVar5 | 1 << ((uint)uStack_30 & 0x1f);
      }
      *puVar5 = uVar3;
      if (uStack_30 < 0x1f) {
        uStack_30 = uStack_30 + 1;
      }
      else {
        uStack_30 = 0;
        puVar5 = puVar5 + 1;
      }
      if (uStack_20 < 0x1f) {
        uStack_20 = uStack_20 + 1;
      }
      else {
        uStack_20 = 0;
        puVar4 = puVar4 + 1;
      }
    }
    _Trim(param_1,((longlong)puVar5 - *param_1 >> 2) * 0x20 + uStack_30);
    puVar7 = (uint *)*param_1;
  }
  if (((longlong)uVar6 < 0) && (uVar6 != 0)) {
    local_28 = -((~uVar6 >> 5) * 4 + 4);
  }
  else {
    local_28 = (uVar6 >> 5) * 4;
  }
  local_28 = (longlong)puVar7 + local_28;
  *param_2 = local_28;
  param_2[1] = (ulonglong)((uint)uVar6 & 0x1f);
  return param_2;
}



// FUNCTION 140663ea0 FUN_140663ea0 body=74 status=ok
// SIG undefined FUN_140663ea0(void)

bool FUN_140663ea0(longlong param_1,wchar_t param_2,short param_3)

{
  bool bVar1;
  
  if (param_3 != -1) {
                    /* WARNING: Could not recover jumptable at 0x000140663ebd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar1 = std::ctype<wchar_t>::is(*(ctype<wchar_t> **)(param_1 + 8),param_3,param_2);
    return bVar1;
  }
  if (param_2 != L'_') {
    bVar1 = std::ctype<wchar_t>::is(*(ctype<wchar_t> **)(param_1 + 8),0x107,param_2);
    if (!bVar1) {
      return bVar1;
    }
  }
  return true;
}



// FUNCTION 140663ef0 FUN_140663ef0 body=119 status=ok
// SIG undefined FUN_140663ef0(void)

longlong FUN_140663ef0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  if (param_2 < (ulonglong)((*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10)) / 0x18))
  {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + param_2 * 0x18);
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x58);
  }
  if ((char)plVar1[2] != '\0') {
    return plVar1[1] - *plVar1 >> 1;
  }
  return 0;
}



// FUNCTION 140663f70 push_back body=341 status=ok
// SIG undefined push_back(void)

void std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::push_back
               (undefined8 *param_1,undefined2 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *_Src;
  size_t _Size;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *pvVar6;
  
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  if (uVar4 < uVar2) {
    param_1[2] = uVar4 + 1;
    if (7 < uVar2) {
      param_1 = (undefined8 *)*param_1;
    }
    *(undefined2 *)((longlong)param_1 + uVar4 * 2) = param_2;
    *(undefined2 *)((longlong)param_1 + uVar4 * 2 + 2) = 0;
    return;
  }
  if (uVar4 == 0x7ffffffffffffffe) {
                    /* WARNING: Subroutine does not return */
    _Xlen_string();
  }
  uVar3 = uVar4 + 1 | 7;
  uVar5 = 0x7ffffffffffffffe;
  if (((uVar3 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) &&
     (uVar1 = (uVar2 >> 1) + uVar2, uVar5 = uVar3, uVar3 < uVar1)) {
    uVar5 = uVar1;
  }
  _Dst = (void *)allocator<wchar_t>::allocate(param_1,uVar5 + 1);
  _Size = uVar4 * 2;
  param_1[2] = uVar4 + 1;
  param_1[3] = uVar5;
  if (uVar2 < 8) {
    ::_guard_xfg_dispatch_icall_nop(_Dst,param_1,_Size);
    *(undefined2 *)(_Size + (longlong)_Dst) = param_2;
    *(undefined2 *)(_Size + 2 + (longlong)_Dst) = 0;
  }
  else {
    _Src = (void *)*param_1;
    ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,_Size);
    *(undefined2 *)(_Size + (longlong)_Dst) = param_2;
    uVar4 = uVar2 * 2 + 2;
    *(undefined2 *)(_Size + 2 + (longlong)_Dst) = 0;
    pvVar6 = _Src;
    if (0xfff < uVar4) {
      pvVar6 = *(void **)((longlong)_Src + -8);
      uVar4 = uVar2 * 2 + 0x29;
      if (0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar6))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(pvVar6,uVar4);
  }
  *param_1 = _Dst;
  return;
}



// FUNCTION 1406640d0 resize body=550 status=ok
// SIG undefined resize(void)

void std::vector<bool,std::allocator<bool>_>::resize
               (longlong *param_1,ulonglong param_2,char param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint *puVar6;
  uint *puVar7;
  longlong local_38;
  ulonglong uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  undefined1 local_18 [16];
  
  uVar4 = param_1[3];
  if (uVar4 < param_2) {
    if (((longlong)uVar4 < 0) && (uVar4 != 0)) {
      local_38 = -((~uVar4 >> 5) * 4 + 4);
    }
    else {
      local_38 = (uVar4 >> 5) * 4;
    }
    local_38 = *param_1 + local_38;
    uVar2 = (uint)uVar4 & 0x1f;
    uStack_30 = (ulonglong)uVar2;
    lVar5 = param_2 - uVar4;
    local_28 = local_38;
    uStack_20 = (ulonglong)uVar2;
    uVar4 = _Insert_x(param_1,&local_28,lVar5);
    if (((longlong)uVar4 < 0) && (uVar4 != 0)) {
      lVar1 = -((~uVar4 >> 5) * 4 + 4);
    }
    else {
      lVar1 = (uVar4 >> 5) * 4;
    }
    puVar6 = (uint *)(*param_1 + lVar1);
    uVar2 = (uint)uVar4 & 0x1f;
    uVar4 = (ulonglong)uVar2;
    if ((lVar5 < 0) && (uVar4 < (ulonglong)-lVar5)) {
      lVar1 = -((~(uVar4 + lVar5) >> 5) * 4 + 4);
    }
    else {
      lVar1 = (uVar4 + lVar5 >> 5) * 4;
    }
    puVar7 = (uint *)((longlong)puVar6 + lVar1);
    while ((puVar6 != puVar7 || (uVar4 != (uVar2 + (int)lVar5 & 0x1f)))) {
      if (param_3 == '\0') {
        uVar3 = *puVar6 & ~(1 << ((uint)uVar4 & 0x1f));
      }
      else {
        uVar3 = *puVar6 | 1 << ((uint)uVar4 & 0x1f);
      }
      *puVar6 = uVar3;
      if (uVar4 < 0x1f) {
        uVar4 = uVar4 + 1;
      }
      else {
        uVar4 = 0;
        puVar6 = puVar6 + 1;
      }
    }
  }
  else if (param_2 < uVar4) {
    if (((longlong)uVar4 < 0) && (uVar4 != 0)) {
      local_38 = -((~uVar4 >> 5) * 4 + 4);
    }
    else {
      local_38 = (uVar4 >> 5) * 4;
    }
    local_38 = *param_1 + local_38;
    if (((longlong)param_2 < 0) && (param_2 != 0)) {
      local_28 = -((~param_2 >> 5) * 4 + 4);
    }
    else {
      local_28 = (param_2 >> 5) * 4;
    }
    local_28 = *param_1 + local_28;
    uStack_30 = (ulonglong)((uint)uVar4 & 0x1f);
    uStack_20 = (ulonglong)((uint)param_2 & 0x1f);
    erase(param_1,local_18,&local_28,&local_38);
  }
  return;
}



// FUNCTION 140664300 FUN_140664300 body=68 status=ok
// SIG undefined FUN_140664300(void)

undefined1 FUN_140664300(undefined8 *param_1)

{
  undefined1 uVar1;
  
  uVar1 = Scaleform::SysAlloc::shutdownHeapEngine();
  if (param_1[1] != 0) {
    *(undefined1 *)(param_1[1] + 0x10) = 0;
    (**(code **)*param_1)(param_1,0);
    param_1[1] = 0;
  }
  return uVar1;
}



// FUNCTION 140664350 FUN_140664350 body=171 status=ok
// SIG undefined FUN_140664350(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined2 FUN_140664350(undefined8 *param_1,undefined2 param_2)

{
  undefined8 ****ppppuVar1;
  ulonglong uVar2;
  undefined2 uVar3;
  undefined1 auStack_58 [32];
  undefined2 local_38;
  undefined1 local_36 [6];
  undefined8 ***local_30 [2];
  longlong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  (**(code **)(*(longlong *)*param_1 + 0x20))((longlong *)*param_1,local_30,&local_38,local_36);
  uVar3 = local_38;
  if (local_20 == 1) {
    ppppuVar1 = local_30;
    if (7 < local_18) {
      ppppuVar1 = (undefined8 ****)local_30[0];
    }
    uVar3 = *(undefined2 *)ppppuVar1;
  }
  if (7 < local_18) {
    uVar2 = local_18 * 2 + 2;
    ppppuVar1 = (undefined8 ****)local_30[0];
    if (0xfff < uVar2) {
      ppppuVar1 = (undefined8 ****)local_30[0][-1];
      uVar2 = local_18 * 2 + 0x29;
      if (0x1f < (ulonglong)((longlong)local_30[0] + (-8 - (longlong)ppppuVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FMemory::operator_delete(ppppuVar1,uVar2);
  }
  return uVar3;
}



// FUNCTION 140664420 FUN_140664420 body=53 status=ok
// SIG undefined FUN_140664420(void)

void FUN_140664420(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_14402cbf0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 140664480 FUN_140664480 body=162 status=ok
// SIG undefined FUN_140664480(void)

longlong FUN_140664480(void)

{
  if (DAT_146856d80 == 0) {
    FUN_14171ccd0(L"/Script/GbxTest",L"GbxTestContentAuditCommandlet",&DAT_146856d80,FUN_140447710,
                  0x80,0x10000008,0,L"Engine",FUN_140665c60,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14291cef0,&LAB_140447700,0);
  }
  return DAT_146856d80;
}



// FUNCTION 140664530 FUN_140664530 body=162 status=ok
// SIG undefined FUN_140664530(void)

longlong FUN_140664530(void)

{
  if (DAT_146856d90 == 0) {
    FUN_14171ccd0(L"/Script/GbxTest",L"GbxTestJiraCommandlet",&DAT_146856d90,FUN_140447710,0x80,
                  0x10000008,0,L"Engine",FUN_140665c60,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14291cef0,&LAB_140447700,0);
  }
  return DAT_146856d90;
}



// FUNCTION 140664600 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USequenceRenderSettings::GetPrivateStaticClass(void)

{
  if (DAT_146856da0 == 0) {
    FUN_14171ccd0(L"/Script/GbxTest",L"GbxTestContentAuditSettings",&DAT_146856da0,FUN_140447710,
                  0x38,0x10000006,0,L"Editor",FUN_140665c90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146856da0;
}



// FUNCTION 1406646b0 FUN_1406646b0 body=162 status=ok
// SIG undefined FUN_1406646b0(void)

longlong FUN_1406646b0(void)

{
  if (DAT_146856db0 == 0) {
    FUN_14171ccd0(L"/Script/GbxTest",L"GbxTestParticleMaterialAuditCommandlet",&DAT_146856db0,
                  FUN_140447710,0x80,0x10000008,0,L"Engine",FUN_140665c60,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14291cef0,&LAB_140447700,0);
  }
  return DAT_146856db0;
}



// FUNCTION 140664770 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USequenceRenderSettings::GetPrivateStaticClass(void)

{
  if (DAT_146856dc0 == 0) {
    FUN_14171ccd0(L"/Script/GbxTest",L"GbxTestSettings",&DAT_146856dc0,FUN_140447710,0x38,0x10000006
                  ,0,L"Game",&LAB_140665cc0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146856dc0;
}



// FUNCTION 140664820 FUN_140664820 body=151 status=ok
// SIG undefined FUN_140664820(void)

longlong FUN_140664820(void)

{
  if (DAT_146856f18 == 0) {
    FUN_14171ccd0(L"/Script/GbxTest",L"MatcherFunctionality",&DAT_146856f18,FUN_140666780,0xa8,
                  0x10000000,0,L"Engine",FUN_140665cd0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146856f18;
}



// FUNCTION 1406648c0 FUN_1406648c0 body=47 status=ok
// SIG undefined FUN_1406648c0(void)

longlong FUN_1406648c0(void)

{
  if (DAT_146856e00 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146856e00,&PTR_Z_Construct_UPackage__Script_Engine_14621e8b0);
  }
  return DAT_146856e00;
}



// FUNCTION 1406648f0 FUN_1406648f0 body=47 status=ok
// SIG undefined FUN_1406648f0(void)

longlong FUN_1406648f0(void)

{
  if (DAT_146856e40 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146856e40,&PTR_Z_Construct_UPackage__Script_Engine_14621eaf0);
  }
  return DAT_146856e40;
}



// FUNCTION 140664920 FUN_140664920 body=53 status=ok
// SIG undefined FUN_140664920(void)

void FUN_140664920(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &PTR_FUN_14402d378;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 140664960 FUN_140664960 body=162 status=ok
// SIG undefined FUN_140664960(void)

longlong FUN_140664960(void)

{
  if (DAT_146856ea8 == 0) {
    FUN_14171ccd0(L"/Script/GbxTest",L"PerformanceSnapshotCollector",&DAT_146856ea8,FUN_1406667e0,
                  0x38,0x10000000,0,L"Engine",FUN_140665d50,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146856ea8;
}



// FUNCTION 140664a10 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UPaperFlipbook::GetPrivateStaticClass(void)

{
  if (DAT_146856f60 == 0) {
    FUN_14171ccd0(L"/Script/GbxTest",L"RegexFunctionality",&DAT_146856f60,
                  StaticRegisterNativesUPaperFlipbook,0x50,0x10000000,0,L"Engine",FUN_140665d90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146856f60;
}



// FUNCTION 140664ab0 FUN_140664ab0 body=53 status=ok
// SIG undefined FUN_140664ab0(void)

void FUN_140664ab0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 2;
    *puVar1 = &PTR_FUN_14402d490;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return;
  }
  return;
}



// FUNCTION 140664af0 FUN_140664af0 body=47 status=ok
// SIG undefined FUN_140664af0(void)

longlong FUN_140664af0(void)

{
  if (DAT_146856ea0 == 0) {
    FUN_141786440(&DAT_146856ea0,&PTR_FUN_14402a750);
  }
  return DAT_146856ea0;
}



// FUNCTION 140664b20 FUN_140664b20 body=47 status=ok
// SIG undefined FUN_140664b20(void)

longlong FUN_140664b20(void)

{
  if (DAT_146856e80 == 0) {
    FUN_141786a30(&DAT_146856e80,&PTR_FUN_14621f4e0);
  }
  return DAT_146856e80;
}



// FUNCTION 140664b50 FUN_140664b50 body=47 status=ok
// SIG undefined FUN_140664b50(void)

longlong FUN_140664b50(void)

{
  if (DAT_146856e88 == 0) {
    FUN_141786a30(&DAT_146856e88,&PTR_FUN_14621f5e0);
  }
  return DAT_146856e88;
}



// FUNCTION 140664b80 FUN_140664b80 body=47 status=ok
// SIG undefined FUN_140664b80(void)

longlong FUN_140664b80(void)

{
  if (DAT_146856e90 == 0) {
    FUN_141786a30(&DAT_146856e90,&PTR_FUN_14621f720);
  }
  return DAT_146856e90;
}



// FUNCTION 140664bb0 FUN_140664bb0 body=47 status=ok
// SIG undefined FUN_140664bb0(void)

longlong FUN_140664bb0(void)

{
  if (DAT_146856e98 == 0) {
    FUN_141786a30(&DAT_146856e98,&PTR_FUN_14621f760);
  }
  return DAT_146856e98;
}



// FUNCTION 140664be0 FUN_140664be0 body=47 status=ok
// SIG undefined FUN_140664be0(void)

longlong FUN_140664be0(void)

{
  if (DAT_146856f10 == 0) {
    FUN_141786440(&DAT_146856f10,&PTR_FUN_14402acb0);
  }
  return DAT_146856f10;
}



// FUNCTION 140664c10 FUN_140664c10 body=47 status=ok
// SIG undefined FUN_140664c10(void)

longlong FUN_140664c10(void)

{
  if (DAT_146856ec8 == 0) {
    FUN_141786a30(&DAT_146856ec8,&PTR_FUN_14621f870);
  }
  return DAT_146856ec8;
}



// FUNCTION 140664c40 FUN_140664c40 body=47 status=ok
// SIG undefined FUN_140664c40(void)

longlong FUN_140664c40(void)

{
  if (DAT_146856ed0 == 0) {
    FUN_141786a30(&DAT_146856ed0,&PTR_FUN_14621f920);
  }
  return DAT_146856ed0;
}



// FUNCTION 140664c70 FUN_140664c70 body=47 status=ok
// SIG undefined FUN_140664c70(void)

longlong FUN_140664c70(void)

{
  if (DAT_146856ed8 == 0) {
    FUN_141786a30(&DAT_146856ed8,&PTR_FUN_14621f9a0);
  }
  return DAT_146856ed8;
}



// FUNCTION 140664ca0 FUN_140664ca0 body=47 status=ok
// SIG undefined FUN_140664ca0(void)

longlong FUN_140664ca0(void)

{
  if (DAT_146856ee0 == 0) {
    FUN_141786a30(&DAT_146856ee0,&PTR_FUN_14621fa50);
  }
  return DAT_146856ee0;
}


