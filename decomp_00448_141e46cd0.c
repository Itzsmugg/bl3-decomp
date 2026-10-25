// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141e46cd0 Empty body=518 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  
  iVar6 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_78 = 0;
  uStack_74 = 1;
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar6 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar3 = *puVar8;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar3 == 0) {
      lVar4 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar7 = local_78 + 1;
      bVar2 = (int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar7;
      if (bVar2) goto LAB_141e46da1;
      uVar3 = puVar8[lVar4 + 1];
    }
    uStack_74 = -uVar3 & uVar3;
    iVar7 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_64 = (iStack_60 - iVar7) + 0x1f;
    if (iVar6 < iStack_64) {
LAB_141e46da1:
      iStack_64 = iVar6;
    }
  }
  local_50 = local_78;
  uStack_4c = uStack_74;
  local_40 = 0xffffffff;
  iStack_3c = iStack_64;
  iStack_38 = iStack_60;
  puStack_48 = puVar1;
  if (iStack_64 < iVar6) {
    do {
      lVar4 = (longlong)iStack_3c * 400 + *param_1;
      FDescriptorSetRemappingInfo::~FDescriptorSetRemappingInfo(lVar4 + 0x48);
      iVar6 = *(int *)(lVar4 + 0x38);
      plVar5 = *(longlong **)(lVar4 + 0x30);
      if (iVar6 != 0) {
        do {
          if (*plVar5 != 0) {
            FMemory::Free();
          }
          plVar5 = plVar5 + 3;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        plVar5 = *(longlong **)(lVar4 + 0x30);
      }
      if (plVar5 != (longlong *)0x0) {
        FMemory::Free(plVar5);
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (iStack_3c < (int)puStack_48[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<400,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar3 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141e46ee0 EndEmulatedRenderPass body=52 status=ok
// SIG undefined EndEmulatedRenderPass(void)

void FTransitionAndLayoutManager::EndEmulatedRenderPass(longlong param_1,longlong param_2)

{
  (*DAT_146ab0318)(*(undefined8 *)(param_2 + 0x40));
  *(undefined1 *)(param_2 + 0x2c) = 1;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  return;
}



// FUNCTION 141e46f20 EndRealRenderPass body=528 status=ok
// SIG undefined EndRealRenderPass(void)

void FTransitionAndLayoutManager::EndRealRenderPass(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int local_res8;
  ulonglong local_58;
  longlong local_50;
  int local_48;
  int iStack_44;
  longlong local_40;
  undefined8 local_38;
  
  (*DAT_146ab0318)(*(undefined8 *)(param_2 + 0x40));
  *(undefined1 *)(param_2 + 0x2c) = 1;
  if (*(char *)(param_1 + 0xf4) != '\0') {
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    iStack_44 = 0;
    local_40 = 0;
    local_38 = 0;
    local_res8 = 0;
    if (0 < *(int *)(param_1 + 0xf0)) {
      plVar4 = (longlong *)(param_1 + 0x100);
      iVar3 = 0;
      do {
        lVar2 = plVar4[2];
        local_48 = iVar3 + 1;
        if (iStack_44 < local_48) {
          TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(&local_50,iVar3);
        }
        lVar1 = (longlong)iVar3 * 0x48;
        *(undefined8 *)(lVar1 + local_50) = 0;
        *(undefined8 *)(lVar1 + 8 + local_50) = 0;
        *(undefined8 *)(lVar1 + 0x10 + local_50) = 0;
        *(undefined8 *)(lVar1 + 0x18 + local_50) = 0;
        *(undefined8 *)(lVar1 + 0x20 + local_50) = 0;
        *(undefined8 *)(lVar1 + 0x28 + local_50) = 0;
        *(undefined8 *)(lVar1 + 0x30 + local_50) = 0;
        *(undefined8 *)(lVar1 + 0x38 + local_50) = 0;
        *(undefined8 *)(lVar1 + 0x40 + local_50) = 0;
        *(undefined4 *)(lVar1 + local_50) = 0x2d;
        *(longlong *)(lVar1 + 0x28 + local_50) = lVar2;
        *(undefined4 *)(lVar1 + 0x30 + local_50) = 1;
        *(undefined4 *)(lVar1 + 0x38 + local_50) = 1;
        *(undefined4 *)(lVar1 + 0x40 + local_50) = 1;
        *(undefined8 *)(lVar1 + 0x20 + local_50) = 0xffffffffffffffff;
        *(undefined4 *)(local_50 + 0x34 + lVar1) = *(undefined4 *)(param_1 + 0xfc);
        *(undefined4 *)(local_50 + 0x3c + lVar1) = *(undefined4 *)(param_1 + 0xf8);
        *(undefined4 *)(lVar1 + 0x10 + local_50) = 0x100;
        *(undefined4 *)(lVar1 + 0x18 + local_50) = 2;
        *(undefined4 *)(lVar1 + 0x14 + local_50) = 0x20;
        *(undefined4 *)(lVar1 + 0x1c + local_50) = 5;
        lVar2 = *plVar4;
        plVar4 = plVar4 + 3;
        local_58 = local_58 | 0x8000000400;
        local_res8 = local_res8 + 1;
        *(undefined4 *)
         (*(longlong *)(lVar2 + (longlong)*(int *)(param_1 + 0xf8) * 0x10) +
         (longlong)*(int *)(param_1 + 0xfc) * 4) = 5;
        iVar3 = local_48;
      } while (local_res8 < *(int *)(param_1 + 0xf0));
      if ((0 < local_48) || (0 < (int)local_38)) {
        VulkanRHI::FPendingBarrier::InnerExecute(&local_58,param_2,1);
      }
    }
    if (*(char *)(param_1 + 0xf5) != '\0') {
      FGenerateMipsInfo::Reset(param_1 + 0xf0);
    }
    if (local_40 != 0) {
      FMemory::Free();
    }
    if (local_50 != 0) {
      FMemory::Free();
    }
  }
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  return;
}



// FUNCTION 141e47140 FindId body=201 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry>,TDefaultMapHashableKeyFuncs<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar1 = *(int *)(param_3 + 2);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar6 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar1) * 4);
    if (iVar6 != -1) {
      lVar2 = *param_1;
      do {
        lVar5 = (longlong)iVar6;
        if (iVar1 == *(int *)(lVar2 + 0x10 + lVar5 * 0x30)) {
          iVar3 = *(int *)(lVar2 + 8 + lVar5 * 0x30);
          if ((*(int *)(param_3 + 1) == iVar3) &&
             ((iVar3 == 0 ||
              (iVar3 = ::_guard_xfg_dispatch_icall_nop
                                 ((void *)*param_3,*(void **)(lVar2 + lVar5 * 0x30),
                                  (longlong)iVar3 * 0x18), iVar3 == 0)))) {
            *param_2 = iVar6;
            return param_2;
          }
        }
        iVar6 = *(int *)(lVar2 + 0x28 + lVar5 * 0x30);
      } while (iVar6 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141e47210 FindId body=194 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FVulkanDSetKey,VkDescriptorSet_T_*>,TDefaultMapHashableKeyFuncs<FVulkanDSetKey,VkDescriptorSet_T_*,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = *param_3;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    iVar7 = *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar7 != -1) {
      lVar3 = *param_1;
      do {
        lVar1 = lVar3 + (longlong)iVar7 * 0x28;
        if (*(int *)(lVar3 + (longlong)iVar7 * 0x28) == iVar2) {
          puVar4 = *(undefined8 **)(lVar1 + 8);
          iVar5 = *(int *)(puVar4 + 1);
          if ((iVar5 == *(int *)(*(undefined8 **)(param_3 + 2) + 1)) &&
             (iVar5 = ::_guard_xfg_dispatch_icall_nop
                                ((void *)*puVar4,(void *)**(undefined8 **)(param_3 + 2),
                                 (longlong)iVar5), iVar5 == 0)) {
            *param_2 = iVar7;
            return param_2;
          }
        }
        iVar7 = *(int *)(lVar1 + 0x20);
      } while (iVar7 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141e472e0 FindId body=179 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>,TDefaultMapHashableKeyFuncs<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar1 = *param_3;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    iVar6 = *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar1) * 4);
    if (iVar6 != -1) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)iVar6 * 0x68;
        if (*(int *)(lVar7 + lVar2) == iVar1) {
          puVar3 = *(undefined8 **)(lVar7 + 8 + lVar2);
          iVar4 = *(int *)(puVar3 + 1);
          if ((iVar4 == *(int *)(*(undefined8 **)(param_3 + 2) + 1)) &&
             (iVar4 = ::_guard_xfg_dispatch_icall_nop
                                ((void *)*puVar3,(void *)**(undefined8 **)(param_3 + 2),
                                 (longlong)iVar4), iVar4 == 0)) {
            *param_2 = iVar6;
            return param_2;
          }
        }
        iVar6 = *(int *)(lVar7 + 0x60 + lVar2);
      } while (iVar6 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141e473a0 FindId body=175 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*>,TDefaultMapHashableKeyFuncs<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)(param_3 + 0x40)) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        lVar5 = (longlong)iVar4 * 400 + lVar1;
        cVar2 = FVulkanDescriptorSetsLayoutInfo::operator==(lVar5,param_3);
        if (cVar2 != '\0') {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)(lVar5 + 0x188);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 141e47450 FUN_141e47450 body=873 status=ok
// SIG undefined FUN_141e47450(void)

longlong *
FUN_141e47450(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,int *param_5
             )

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  BOOL BVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 local_res20 [8];
  longlong local_148;
  undefined8 local_140;
  longlong *local_138;
  longlong local_130;
  longlong *local_128;
  undefined8 local_120;
  longlong local_118;
  longlong *plStack_110;
  undefined8 local_108;
  longlong **local_100;
  undefined **local_f8 [18];
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  
  plVar8 = (longlong *)0x0;
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  if (param_4 != &local_118) {
    *param_4 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_4 + 1,&plStack_110);
    plVar9 = plStack_110;
    if (plStack_110 != (longlong *)0x0) {
      LOCK();
      plVar10 = plStack_110 + 1;
      lVar7 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_110)(plStack_110);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_110 + 8))(plStack_110,1);
        }
      }
    }
  }
  lVar6 = FUN_141e43a60(param_1,param_2);
  local_148 = 0;
  local_140 = 0;
  local_120 = 0;
  FArchive::FArchive(local_f8);
  local_68 = 0;
  local_f8[0] = &PTR_FUN_143f4a100;
  local_60 = &local_148;
  local_58 = 0;
  FArchive::SetIsSaving(local_f8,1);
  FArchive::SetIsPersistent(local_f8,0);
  lVar7 = local_140;
  uVar2 = local_140._4_4_;
  local_140 = (ulonglong)local_140._4_4_ << 0x20;
  if ((lVar7 < 0) && (uVar2 != 0)) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_148,0);
  }
  FUN_141e3bb50(local_f8,lVar6);
  iVar3 = FCrc::MemCrc32(local_148,local_140 & 0xffffffff,0);
  FArchive::~FArchive(local_f8);
  if (local_148 != 0) {
    FMemory::Free();
  }
  if (*(int *)(param_1 + 0x1e8) != *(int *)(param_1 + 0x214)) {
    lVar7 = *(longlong *)(param_1 + 0x220);
    if (*(longlong *)(param_1 + 0x220) == 0) {
      lVar7 = param_1 + 0x218;
    }
    iVar4 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x228) - 1U & (longlong)iVar3) * 4);
    if (iVar4 != -1) {
      do {
        plVar9 = (longlong *)(*(longlong *)(param_1 + 0x1e0) + (longlong)iVar4 * 0x18);
        if (*(int *)(*(longlong *)(param_1 + 0x1e0) + (longlong)iVar4 * 0x18) == iVar3) {
          if (iVar4 != -1) goto LAB_141e47603;
          break;
        }
        iVar4 = (int)plVar9[2];
      } while (iVar4 != -1);
    }
  }
  plVar9 = plVar8;
LAB_141e47603:
  plVar10 = plVar9 + 1;
  if (plVar9 == (longlong *)0x0) {
    plVar10 = plVar8;
  }
  if (plVar10 == (longlong *)0x0) {
    local_130 = lVar6;
    plVar9 = (longlong *)operator_new(0x18);
    if (plVar9 != (longlong *)0x0) {
      *(undefined4 *)(plVar9 + 1) = 1;
      *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
      *plVar9 = (longlong)&PTR_FUN_144ea50c0;
      plVar9[2] = lVar6;
      plVar8 = plVar9;
    }
    local_128 = plVar8;
    SharedPointerInternals::EnableSharedFromThis(&local_130,lVar6,lVar6);
    if (param_4 != &local_130) {
      *param_4 = local_130;
      local_130 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_4 + 1,&local_128);
      plVar8 = local_128;
    }
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
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    *param_5 = iVar3;
    local_138 = (longlong *)0x0;
  }
  else {
    lVar7 = *plVar10;
    if (*(char *)(lVar7 + 0x4a0) == '\0') {
      FUN_141e5ef90(lVar7 + 0x38,*param_2,*(undefined4 *)(param_2[1] + 0xd0));
      *(undefined1 *)(lVar7 + 0x4a0) = 1;
    }
    lVar7 = operator_new(0x50);
    if (lVar7 != 0) {
      plVar8 = (longlong *)
               FVulkanRHIGraphicsPipelineState::FVulkanRHIGraphicsPipelineState
                         (lVar7,param_2,*plVar10,*(undefined4 *)((longlong)param_2 + 0x4c));
    }
    local_138 = plVar8;
    BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
    if (BVar5 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
    }
    local_100 = &local_138;
    local_108 = param_3;
    FUN_141e31890(param_1 + 0x40,local_res20,&local_108,0);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
    LOCK();
    *(int *)(local_138 + 1) = (int)local_138[1] + 1;
    UNLOCK();
    if (lVar6 != 0) {
      FUN_141e3f740(lVar6,1);
    }
  }
  return local_138;
}



// FUNCTION 141e477c0 FUN_141e477c0 body=67 status=ok
// SIG undefined FUN_141e477c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_141e477c0(longlong param_1,undefined8 param_2)

{
  int local_res8 [8];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x380),local_res8,param_2);
  if (local_res8[0] != -1) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x380) + 8 + (longlong)local_res8[0] * 0x18);
  }
  return _DAT_00000008;
}



// FUNCTION 141e47810 FindOrAddLayout body=142 status=ok
// SIG undefined FindOrAddLayout(void)

undefined4
FTransitionAndLayoutManager::FindOrAddLayout(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_res8 [2];
  undefined8 local_res10;
  undefined4 local_res18 [4];
  undefined8 *local_18;
  undefined4 *local_10;
  
  plVar1 = (longlong *)(param_1 + 0xa0);
  local_res10 = param_2;
  local_res18[0] = param_3;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res8);
  puVar3 = (undefined4 *)0x0;
  if (local_res8[0] != -1) {
    puVar3 = (undefined4 *)(*plVar1 + (longlong)local_res8[0] * 0x18);
  }
  puVar2 = puVar3 + 2;
  if (puVar3 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  if (puVar2 == (undefined4 *)0x0) {
    local_18 = &local_res10;
    local_10 = local_res18;
    TSet<TTuple<VkImage_T_*,enum_VkImageLayout>,TDefaultMapHashableKeyFuncs<VkImage_T_*,enum_VkImageLayout,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<VkImage_T_*_const_&,enum_VkImageLayout_&&>_>
              (plVar1,local_res8,&local_18,0);
    return local_res18[0];
  }
  return *puVar2;
}



// FUNCTION 141e478a0 FUN_141e478a0 body=865 status=ok
// SIG undefined FUN_141e478a0(void)

undefined8 * FUN_141e478a0(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  void *_Src;
  undefined8 uVar1;
  BOOL BVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int local_res8 [2];
  undefined8 *local_res20;
  undefined8 *local_78;
  undefined8 **local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined8 local_44;
  undefined4 local_3c;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5a));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5a));
  }
  TSet<TTuple<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*>,TDefaultMapHashableKeyFuncs<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x46,local_res8,param_2);
  puVar6 = (undefined8 *)0x0;
  puVar3 = puVar6;
  if (local_res8[0] != -1) {
    puVar3 = (undefined8 *)((longlong)local_res8[0] * 400 + param_1[0x46]);
  }
  puVar4 = puVar3 + 0x30;
  if (puVar3 == (undefined8 *)0x0) {
    puVar4 = puVar6;
  }
  if (puVar4 == (undefined8 *)0x0) {
    if (param_3 == '\0') {
      puVar3 = (undefined8 *)operator_new(0x218);
      if (puVar3 != (undefined8 *)0x0) {
        FVulkanLayout::FVulkanLayout(puVar3,*param_1);
        *puVar3 = &PTR__scalar_deleting_destructor__144ea4c50;
        puVar3[0x3d] = 0;
        puVar3[0x3e] = 0;
        puVar3[0x3f] = 0;
        *(undefined4 *)(puVar3 + 0x40) = 0;
        puVar3[0x41] = 0;
        *(undefined1 *)(puVar3 + 0x42) = 0;
        puVar6 = puVar3;
      }
    }
    else {
      puVar3 = (undefined8 *)operator_new(0x278);
      if (puVar3 != (undefined8 *)0x0) {
        FVulkanLayout::FVulkanLayout(puVar3);
        *puVar3 = &PTR__scalar_deleting_destructor__144ea4c40;
        *(undefined4 *)(puVar3 + 0x4c) = 0;
        puVar3[0x4d] = 0;
        *(undefined1 *)(puVar3 + 0x4e) = 0;
        _guard_xfg_dispatch_icall_nop(puVar3 + 0x3d,0,0x78);
        puVar6 = puVar3;
      }
    }
    uVar1 = param_2[1];
    puVar3 = puVar6 + 8;
    puVar6[2] = *param_2;
    puVar6[3] = uVar1;
    uVar1 = param_2[3];
    puVar6[4] = param_2[2];
    puVar6[5] = uVar1;
    puVar6[6] = param_2[4];
    *(undefined4 *)(puVar6 + 7) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)(puVar6 + 10) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((longlong)puVar6 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x44);
    local_res20 = puVar6;
    if (puVar3 != param_2 + 6) {
      plVar7 = (longlong *)*puVar3;
      for (iVar5 = *(int *)(puVar6 + 9); iVar5 != 0; iVar5 = iVar5 + -1) {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 3;
      }
      TArray<FVulkanDescriptorSetsLayoutInfo::FSetLayout,TSizedDefaultAllocator<32>_>::
      CopyToEmpty<FVulkanDescriptorSetsLayoutInfo::FSetLayout,int>
                (puVar3,param_2[6],*(undefined4 *)(param_2 + 7),
                 *(undefined4 *)((longlong)puVar6 + 0x4c),0);
    }
    puVar3 = puVar6 + 0xb;
    if (puVar3 != param_2 + 9) {
      plVar7 = (longlong *)*puVar3;
      for (iVar5 = *(int *)(puVar6 + 0xc); iVar5 != 0; iVar5 = iVar5 + -1) {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 3;
      }
      TArray<FDescriptorSetRemappingInfo::FSetInfo,FDefaultAllocator>::
      CopyToEmpty<FDescriptorSetRemappingInfo::FSetInfo>
                (puVar3,param_2[9],*(undefined4 *)(param_2 + 10),
                 *(undefined4 *)((longlong)puVar6 + 100),0);
    }
    TStaticArray<FDescriptorSetRemappingInfo::FStageInfo,5,8>::TArrayStorage::operator=
              (puVar6 + 0xd,param_2 + 0xb);
    puVar3 = puVar6 + 0x30;
    if (puVar3 != param_2 + 0x2e) {
      iVar5 = *(int *)(param_2 + 0x2f);
      _Src = (void *)param_2[0x2e];
      *(int *)(puVar6 + 0x31) = iVar5;
      if ((iVar5 == 0) && (*(int *)((longlong)puVar6 + 0x18c) == 0)) {
        *(undefined4 *)((longlong)puVar6 + 0x18c) = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(puVar3,iVar5);
        _guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar5 << 2);
      }
    }
    puVar3 = local_res20;
    FUN_141e421c0(local_res20 + 2,param_1 + 0x50);
    local_68 = 0x1e;
    uStack_48 = 0;
    local_64 = 0;
    local_5c = 0;
    local_44 = 0;
    local_3c = 0;
    local_54 = *(undefined4 *)(puVar3 + 0x34);
    uStack_50 = (undefined4)puVar3[0x33];
    local_4c = (undefined4)((ulonglong)puVar3[0x33] >> 0x20);
    iVar5 = (*DAT_146ab0100)(*(undefined8 *)(puVar3[1] + 8),&local_68,0,puVar3 + 0x3c);
    if (iVar5 != 0) {
      FUN_141e67d70(iVar5,
                    "VulkanRHI::vkCreatePipelineLayout(Device->GetInstanceHandle(), &PipelineLayoutCreateInfo, VULKAN_CPU_ALLOCATOR, &PipelineLayout)"
                    ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanShaders.cpp"
                    ,0x11b);
    }
    local_70 = &local_res20;
    local_78 = param_2;
    FUN_141e32ac0(param_1 + 0x46,local_res8,&local_78,0);
    puVar3 = local_res20;
  }
  else {
    puVar3 = (undefined8 *)*puVar4;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5a));
  return puVar3;
}



// FUNCTION 141e47c10 FindOrAddLayoutRW body=150 status=ok
// SIG undefined FindOrAddLayoutRW(void)

longlong FTransitionAndLayoutManager::FindOrAddLayoutRW
                   (longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int local_res8 [2];
  undefined8 local_res10;
  undefined4 local_res18 [4];
  undefined8 *local_18;
  undefined4 *local_10;
  
  plVar1 = (longlong *)(param_1 + 0xa0);
  local_res10 = param_2;
  local_res18[0] = param_3;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res8);
  lVar3 = 0;
  if (local_res8[0] != -1) {
    lVar3 = *plVar1 + (longlong)local_res8[0] * 0x18;
  }
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  if (lVar2 == 0) {
    local_18 = &local_res10;
    local_10 = local_res18;
    TSet<TTuple<VkImage_T_*,enum_VkImageLayout>,TDefaultMapHashableKeyFuncs<VkImage_T_*,enum_VkImageLayout,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<VkImage_T_*_const_&,enum_VkImageLayout_&&>_>
              (plVar1,local_res8,&local_18,0);
    lVar2 = *plVar1 + (longlong)local_res8[0] * 0x18 + 8;
  }
  return lVar2;
}



// FUNCTION 141e47cb0 GC body=532 status=ok
// SIG undefined GC(void)

void FVulkanDescriptorPoolsManager::GC(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  BOOL BVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  bool bVar12;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  iVar9 = *(int *)(param_1 + 0x40) + -1;
  if (-1 < iVar9) {
    lVar11 = *(longlong *)(param_1 + 0x38);
    lVar8 = (longlong)iVar9;
    do {
      lVar1 = *(longlong *)(lVar11 + lVar8 * 8);
      if ((*(char *)(lVar1 + 0x5c) == '\0') && (10 < (uint)(DAT_1464aaa90 - *(int *)(lVar1 + 0x58)))
         ) {
        iVar7 = *(int *)(param_1 + 0x40);
        iVar4 = (iVar7 - iVar9) + -1;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(lVar11 + (longlong)iVar9 * 8),
                     (void *)(lVar11 + (longlong)(iVar7 - iVar4) * 8),(longlong)iVar4 << 3);
          iVar7 = *(int *)(param_1 + 0x40);
        }
        *(int *)(param_1 + 0x40) = iVar7 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x38);
        lVar11 = *(longlong *)(param_1 + 8);
        if (lVar11 == 0) {
          puVar5 = (undefined8 *)operator_new(0x28);
          puVar10 = (undefined8 *)0x0;
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = &PTR_Abandon_144ea4fe8;
            puVar5[1] = lVar1;
            *(undefined4 *)(puVar5 + 2) = 0;
            puVar5[3] = 0;
            puVar5[4] = 0;
            puVar10 = puVar5;
          }
          *(undefined8 **)(param_1 + 8) = puVar10;
        }
        else {
          LOCK();
          bVar12 = *(int *)(lVar11 + 0x10) == 0;
          if (bVar12) {
            *(int *)(lVar11 + 0x10) = 0;
          }
          UNLOCK();
          if (bVar12) {
LAB_141e47dca:
            if (*(longlong *)(lVar11 + 0x20) != 0) {
              (**(code **)(**(longlong **)(lVar11 + 0x18) + 0x20))
                        (*(longlong **)(lVar11 + 0x18),0xffffffff,0);
              goto LAB_141e47de5;
            }
          }
          else {
            lVar11 = *(longlong *)(param_1 + 8);
            plVar6 = *(longlong **)(lVar11 + 0x20);
            if (plVar6 == (longlong *)0x0) {
              LOCK();
              bVar12 = *(int *)(lVar11 + 0x10) == 0;
              if (bVar12) {
                *(int *)(lVar11 + 0x10) = 0;
              }
              UNLOCK();
              if (!bVar12) {
                FAsyncTask<FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker>::DoWork
                          (lVar11);
              }
              goto LAB_141e47dca;
            }
            cVar2 = (**(code **)(*plVar6 + 0x18))(plVar6,lVar11);
            if (cVar2 == '\0') goto LAB_141e47dca;
            FAsyncTask<FVulkanDescriptorPoolsManager::FVulkanAsyncPoolSetDeletionWorker>::DoWork
                      (lVar11);
            if (*(longlong **)(lVar11 + 0x18) != (longlong *)0x0) {
              (**(code **)(**(longlong **)(lVar11 + 0x18) + 0x10))();
            }
LAB_141e47de5:
            *(undefined8 *)(lVar11 + 0x20) = 0;
          }
          *(longlong *)(*(longlong *)(param_1 + 8) + 8) = lVar1;
          puVar10 = *(undefined8 **)(param_1 + 8);
        }
        lVar11 = DAT_1468b5010;
        LOCK();
        *(int *)(puVar10 + 2) = *(int *)(puVar10 + 2) + 1;
        UNLOCK();
        plVar6 = (longlong *)puVar10[3];
        puVar10[4] = lVar11;
        if (lVar11 == 0) {
          FUN_1415b5910();
          puVar10[3] = 0;
          lVar11 = puVar10[1];
          if (lVar11 != 0) {
            FVulkanDescriptorPoolSetContainer::~FVulkanDescriptorPoolSetContainer(lVar11);
            FMemory::operator_delete(lVar11,0x60);
          }
          puVar10[1] = 0;
          LOCK();
          *(int *)(puVar10 + 2) = *(int *)(puVar10 + 2) + -1;
          UNLOCK();
        }
        else {
          if (plVar6 == (longlong *)0x0) {
            plVar6 = (longlong *)FUN_1415ab270(1);
            puVar10[3] = plVar6;
          }
          (**(code **)(*plVar6 + 0x18))();
          (**(code **)(*(longlong *)puVar10[4] + 0x10))((longlong *)puVar10[4],puVar10);
        }
        break;
      }
      iVar9 = iVar9 + -1;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x000141e47ebd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// FUNCTION 141e47ed0 FUN_141e47ed0 body=761 status=ok
// SIG undefined FUN_141e47ed0(void)

bool FUN_141e47ed0(int *param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_res8;
  longlong local_48;
  
  bVar5 = true;
  local_res8 = 0;
  if (0 < param_1[0x22]) {
    local_48 = 0;
    do {
      uVar12 = 0x8040;
      uVar13 = 0x8040;
      piVar7 = *(int **)(param_1 + 0x20);
      if (*(int **)(param_1 + 0x20) == (int *)0x0) {
        piVar7 = param_1 + 0x18;
      }
      lVar6 = *(longlong *)((longlong)piVar7 + local_48);
      iVar10 = *param_1;
      if (iVar10 == 0) {
        uVar12 = 0x40;
        uVar13 = 0x20;
LAB_141e47f7c:
        if (lVar6 != 0) {
          if (*(longlong *)(lVar6 + 0x50) == 0) {
            if (*(longlong *)(lVar6 + 0x28) == 0) {
              if (*(longlong *)(lVar6 + 0x20) == 0) {
                if (*(longlong *)(lVar6 + 0x58) == 0) goto LAB_141e48183;
                iVar10 = (int)param_3[1];
                *(int *)(param_3 + 1) = iVar10 + 1;
                if (*(int *)((longlong)param_3 + 0xc) < iVar10 + 1) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>
                  ::ResizeGrow(param_3,iVar10);
                }
                lVar6 = *(longlong *)(lVar6 + 0x58);
              }
              else {
                iVar10 = (int)param_3[1];
                *(int *)(param_3 + 1) = iVar10 + 1;
                if (*(int *)((longlong)param_3 + 0xc) < iVar10 + 1) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>
                  ::ResizeGrow(param_3,iVar10);
                }
                lVar6 = *(longlong *)(lVar6 + 0x20);
              }
              uVar9 = *(undefined8 *)(lVar6 + 0x78);
              uVar3 = *(uint *)(lVar6 + 0x80);
              uVar2 = *(uint *)(lVar6 + 0x1c);
              goto LAB_141e4814e;
            }
            iVar10 = (int)param_4[1];
            *(int *)(param_4 + 1) = iVar10 + 1;
            if (*(int *)((longlong)param_4 + 0xc) < iVar10 + 1) {
              TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_4,iVar10);
            }
            puVar1 = (undefined8 *)(*param_4 + (longlong)iVar10 * 0x48);
            lVar6 = (**(code **)(**(longlong **)(lVar6 + 0x28) + 0x48))();
            if (param_1[0x26] - 1U < 2) {
              iVar10 = 5 - (uint)((*(uint *)(lVar6 + 0x78) & 6) != 0);
            }
            else {
              iVar10 = 1;
            }
            piVar7 = (int *)FTransitionAndLayoutManager::FindOrAddLayoutRW
                                      (param_2,*(undefined8 *)(lVar6 + 0x18),0);
            iVar4 = *piVar7;
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1[2] = 0;
            puVar1[3] = 0;
            puVar1[4] = 0;
            puVar1[5] = 0;
            puVar1[6] = 0;
            puVar1[7] = 0;
            puVar1[8] = 0;
            iVar8 = *(int *)(lVar6 + 0x60);
            if ((iVar8 < 0) || (iVar8 < 3)) {
LAB_141e48093:
              iVar8 = 1;
            }
            else if (iVar8 == 3) {
              iVar8 = 6;
            }
            else if (iVar8 == 5) {
              iVar8 = *(int *)(lVar6 + 0x58);
            }
            else {
              if (iVar8 != 6) goto LAB_141e48093;
              iVar8 = *(int *)(lVar6 + 0x58) * 6;
            }
            *(int *)(puVar1 + 3) = iVar4;
            *(int *)((longlong)puVar1 + 0x1c) = iVar10;
            *(undefined4 *)puVar1 = 0x2d;
            *(undefined4 *)(puVar1 + 2) = uVar12;
            *(undefined4 *)((longlong)puVar1 + 0x14) = uVar13;
            puVar1[5] = *(undefined8 *)(lVar6 + 0x18);
            *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(lVar6 + 0x78);
            *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(lVar6 + 0x70);
            *(int *)(puVar1 + 8) = iVar8;
            puVar1[4] = 0xffffffffffffffff;
            *piVar7 = iVar10;
          }
          else {
            iVar10 = (int)param_3[1];
            *(int *)(param_3 + 1) = iVar10 + 1;
            if (*(int *)((longlong)param_3 + 0xc) < iVar10 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
              ResizeGrow(param_3,iVar10);
            }
            lVar6 = *(longlong *)(lVar6 + 0x50);
            uVar2 = *(uint *)(lVar6 + 0x18);
            uVar3 = *(uint *)(lVar6 + 0x78);
            uVar9 = *(undefined8 *)(lVar6 + 0x70);
LAB_141e4814e:
            puVar11 = (undefined4 *)((longlong)iVar10 * 0x38 + *param_3);
            *(undefined8 *)(puVar11 + 1) = 0;
            puVar11[3] = 0;
            *(undefined8 *)(puVar11 + 6) = 0;
            *(ulonglong *)(puVar11 + 10) = (ulonglong)uVar3;
            *(ulonglong *)(puVar11 + 0xc) = (ulonglong)uVar2;
            *(undefined8 *)(puVar11 + 8) = uVar9;
            puVar11[5] = uVar13;
            puVar11[4] = uVar12;
            *puVar11 = 0x2c;
          }
          bVar5 = false;
        }
      }
      else {
        if (iVar10 == 1) {
          uVar12 = 0x20;
          uVar13 = 0x40;
          goto LAB_141e47f7c;
        }
        if (iVar10 == 2) {
          uVar12 = 0x60;
          uVar13 = 0x60;
          goto LAB_141e47f7c;
        }
        if (iVar10 != 3) goto LAB_141e47f7c;
      }
LAB_141e48183:
      local_res8 = local_res8 + 1;
      local_48 = local_48 + 8;
    } while (local_res8 < param_1[0x22]);
  }
  return !bVar5;
}



// FUNCTION 141e481d0 FUN_141e481d0 body=318 status=ok
// SIG undefined FUN_141e481d0(void)

void FUN_141e481d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  
  iVar1 = *(int *)(param_1 + 0x38);
  lVar6 = (longlong)iVar1;
  uVar3 = FCrc::MemCrc32(param_1 + 0x44,4,iVar1);
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  if (0 < iVar1) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x30);
      uVar3 = FCrc::MemCrc32(*(undefined8 *)(lVar2 + lVar4),*(int *)(lVar2 + 8 + lVar4) * 0x18,0);
      *(undefined4 *)(lVar2 + 0x10 + lVar4) = uVar3;
      uVar3 = FCrc::MemCrc32(*(longlong *)(param_1 + 0x30) + (longlong)iVar5 * 0x18 + 0x10,4);
      iVar5 = iVar5 + 1;
      *(undefined4 *)(param_1 + 0x40) = uVar3;
      lVar4 = lVar4 + 0x18;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  piVar7 = (int *)(param_1 + 0x70);
  lVar4 = 5;
  lVar6 = param_1 + 0x8a;
  do {
    uVar3 = FCrc::MemCrc32(lVar6 + -2,2,*(undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = uVar3;
    uVar3 = FCrc::MemCrc32(lVar6,2,uVar3);
    *(undefined4 *)(param_1 + 0x40) = uVar3;
    uVar3 = FCrc::MemCrc32(*(undefined8 *)(piVar7 + -6),piVar7[-4] * 4,uVar3);
    *(undefined4 *)(param_1 + 0x40) = uVar3;
    uVar3 = FCrc::MemCrc32(*(undefined8 *)(piVar7 + -2),*piVar7 * 6,uVar3);
    *(undefined4 *)(param_1 + 0x40) = uVar3;
    uVar3 = FCrc::MemCrc32(*(undefined8 *)(piVar7 + 2),piVar7[4] * 2,uVar3);
    lVar6 = lVar6 + 0x38;
    *(undefined4 *)(param_1 + 0x40) = uVar3;
    piVar7 = piVar7 + 0xe;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}



// FUNCTION 141e48310 FUN_141e48310 body=105 status=ok
// SIG undefined FUN_141e48310(void)

undefined4 FUN_141e48310(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x3b9acdeb) {
    if (param_1 == 0x3b9acdea) {
      return 0x8000;
    }
    switch(param_1) {
    case 2:
      return 0x100;
    case 3:
      return 0x400;
    case 4:
    case 5:
      return 0x20;
    case 6:
      return 0x800;
    case 7:
      return 0x1000;
    }
  }
  else {
    uVar1 = 0;
    if (param_1 == 0x3b9c9308) {
      uVar1 = 0x600;
    }
  }
  return uVar1;
}



// FUNCTION 141e483a0 GetActiveCmdBuffer body=46 status=ok
// SIG undefined GetActiveCmdBuffer(void)

undefined8 FVulkanCommandBufferManager::GetActiveCmdBuffer(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    SubmitUploadCmdBuffer(param_1,0,0);
    return *(undefined8 *)(param_1 + 0x70);
  }
  return *(undefined8 *)(param_1 + 0x70);
}



// FUNCTION 141e483d0 GetDSetsKey body=138 status=ok
// SIG undefined GetDSetsKey(void)

longlong FVulkanCommonPipelineDescriptorState::GetDSetsKey(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xc0) != '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    iVar3 = *(int *)(param_1 + 0x18) * 0xc;
    TDataKeyBase<1>::SetData(param_1 + 0xa8,uVar1,iVar3);
    uVar2 = FCrc::MemCrc32(uVar1,iVar3,0);
    *(undefined4 *)(param_1 + 0xa8) = uVar2;
    *(undefined1 *)(param_1 + 0xc0) = 0;
    return param_1 + 0xa8;
  }
  return param_1 + 0xa8;
}



// FUNCTION 141e48460 GetDescriptorSets body=485 status=ok
// SIG undefined GetDescriptorSets(void)

void FVulkanDescriptorSetCache::GetDescriptorSets
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               void *param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  void *_Src;
  int iVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  int local_88 [20];
  
  iVar3 = DAT_1464c9560;
  iVar6 = 0;
  if (0 < DAT_1464c9560) {
    iVar1 = *(int *)(param_1 + 0x10);
    lVar7 = 0;
    do {
      if (iVar1 <= iVar6) break;
      lVar2 = *(longlong *)(lVar7 + *(longlong *)(param_1 + 8));
      TSet<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>,TDefaultMapHashableKeyFuncs<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry,0>,FDefaultSetAllocator>
      ::FindId(lVar2 + 0x20,local_88,param_2);
      if (local_88[0] == -1) {
        lVar5 = 0;
      }
      else {
        lVar5 = (longlong)local_88[0] * 0x68 + *(longlong *)(lVar2 + 0x20);
      }
      _Src = (void *)(lVar5 + 0x18);
      if (lVar5 == 0) {
        _Src = (void *)0x0;
      }
      if (_Src != (void *)0x0) {
        ::_guard_xfg_dispatch_icall_nop(param_5,_Src,(longlong)*(int *)((longlong)_Src + 0x40) << 3)
        ;
        *(undefined4 *)(lVar2 + 0xc0) = DAT_1464aaa90;
        return;
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 8;
    } while (iVar6 < iVar3);
  }
  cVar4 = FCachedPool::CreateDescriptorSets
                    (**(undefined8 **)(param_1 + 8),param_2,param_3,param_4,param_5);
  while (cVar4 == '\0') {
    if (*(float *)(param_1 + 0x20) <= 0.0) {
      fVar9 = 0.0;
    }
    else {
      fVar9 = 2.0;
    }
    lVar7 = **(longlong **)(param_1 + 8);
    fVar8 = (float)(*(int *)(lVar7 + 0x78) - *(int *)(lVar7 + 0xa4)) /
            (float)*(uint *)(lVar7 + 0x10);
    if (fVar8 <= 0.5) {
      fVar8 = 0.5;
    }
    *(float *)(param_1 + 0x20) = (fVar8 + *(float *)(param_1 + 0x20) * fVar9) / (fVar9 + 1.0);
    FUN_141e40ca0(param_1);
    cVar4 = FCachedPool::CreateDescriptorSets
                      (**(undefined8 **)(param_1 + 8),param_2,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 141e48650 FUN_141e48650 body=102 status=ok
// SIG undefined FUN_141e48650(void)

undefined8 FUN_141e48650(int param_1)

{
  if (param_1 < 0x3b9acdeb) {
    if (param_1 == 0x3b9acdea) {
      return 5;
    }
    switch(param_1) {
    case 1:
      return 9;
    case 2:
      return 2;
    case 3:
      return 3;
    case 4:
      return 7;
    case 5:
      return 6;
    case 6:
      return 4;
    case 7:
      return 1;
    }
  }
  else if (param_1 == 0x3b9c9308) {
    return 10;
  }
  return 0;
}



// FUNCTION 141e486e0 GetInitializer body=29 status=ok
// SIG undefined GetInitializer(void)

undefined8 FVulkanBlendState::GetInitializer(longlong param_1,undefined8 param_2)

{
  FBlendStateInitializerRHI::FBlendStateInitializerRHI(param_2,param_1 + 0x118);
  return 1;
}



// FUNCTION 141e48730 GetKey body=122 status=ok
// SIG undefined GetKey(void)

longlong FVulkanDescriptorSetWriter::GetKey(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    iVar3 = (*(int *)(param_1 + 0x18) + 1) * 0xc;
    TDataKeyBase<1>::SetData(param_1 + 0x38,uVar1,iVar3);
    uVar2 = FCrc::MemCrc32(uVar1,iVar3,0);
    *(undefined4 *)(param_1 + 0x38) = uVar2;
    *(undefined1 *)(param_1 + 0x50) = 0;
    return param_1 + 0x38;
  }
  return param_1 + 0x38;
}



// FUNCTION 141e487c0 GetOrCreateComputePipeline body=447 status=ok
// SIG undefined GetOrCreateComputePipeline(void)

longlong FVulkanPipelineStateCacheManager::GetOrCreateComputePipeline
                   (longlong param_1,longlong param_2)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  LARGE_INTEGER local_res8;
  longlong local_res10;
  longlong *local_res18 [2];
  
  local_res10 = *(longlong *)(param_2 + 0x50);
  SRWLock = (PSRWLOCK)(param_1 + 0x130);
  AcquireSRWLockShared(SRWLock);
  plVar1 = (longlong *)(param_1 + 0x138);
  if (*(int *)(param_1 + 0x140) != *(int *)(param_1 + 0x16c)) {
    lVar4 = *(longlong *)(param_1 + 0x178);
    if (*(longlong *)(param_1 + 0x178) == 0) {
      lVar4 = param_1 + 0x170;
    }
    iVar2 = *(int *)(lVar4 + ((longlong)
                              ((int)((ulonglong)local_res10 >> 0x20) * 0x17 + (int)local_res10) &
                             (longlong)*(int *)(param_1 + 0x180) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar5 = (longlong *)(*plVar1 + (longlong)iVar2 * 0x18);
        if (*(longlong *)(*plVar1 + (longlong)iVar2 * 0x18) == local_res10) {
          if (iVar2 != -1) goto LAB_141e48863;
          break;
        }
        iVar2 = (int)plVar5[2];
      } while (iVar2 != -1);
    }
  }
  plVar5 = (longlong *)0x0;
LAB_141e48863:
  plVar3 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 != (longlong *)0x0) {
    lVar4 = *plVar3;
    ReleaseSRWLockShared(SRWLock);
    return lVar4;
  }
  ReleaseSRWLockShared(SRWLock);
  QueryPerformanceCounter(&local_res8);
  lVar4 = FUN_141e42b60(param_1,param_2);
  *(longlong *)(lVar4 + 0x38) = param_2;
  QueryPerformanceCounter(&local_res8);
  AcquireSRWLockExclusive(SRWLock);
  if (*(int *)(param_1 + 0x140) != *(int *)(param_1 + 0x16c)) {
    lVar6 = *(longlong *)(param_1 + 0x178);
    if (*(longlong *)(param_1 + 0x178) == 0) {
      lVar6 = param_1 + 0x170;
    }
    iVar2 = *(int *)(lVar6 + ((longlong)
                              ((int)((ulonglong)local_res10 >> 0x20) * 0x17 + (int)local_res10) &
                             (longlong)*(int *)(param_1 + 0x180) - 1U) * 4);
    if (iVar2 != -1) {
      do {
        lVar6 = *plVar1 + (longlong)iVar2 * 0x18;
        if (*(longlong *)(*plVar1 + (longlong)iVar2 * 0x18) == local_res10) {
          if ((iVar2 != -1) && (lVar6 != 0)) goto LAB_141e48964;
          break;
        }
        iVar2 = *(int *)(lVar6 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res18[0] = &local_res10;
  FUN_141e315a0(plVar1,&local_res8,local_res18,0);
  lVar6 = *plVar1 + (longlong)(int)local_res8.s.LowPart * 0x18;
LAB_141e48964:
  *(longlong *)(lVar6 + 8) = lVar4;
  ReleaseSRWLockExclusive(SRWLock);
  return lVar4;
}



// FUNCTION 141e48980 GetOrCreateFramebuffer body=653 status=ok
// SIG undefined GetOrCreateFramebuffer(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FTransitionAndLayoutManager::GetOrCreateFramebuffer
          (longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,undefined8 param_5)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  int local_b8 [2];
  longlong *local_b0;
  undefined1 local_a8 [8];
  int *local_a0;
  longlong **local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b8[0] = *(int *)(param_4 + 0x340);
  local_88 = *(undefined8 *)(param_3 + 8);
  local_80 = *(undefined8 *)(param_3 + 0x20);
  local_78 = *(undefined8 *)(param_3 + 0x38);
  local_70 = *(undefined8 *)(param_3 + 0x50);
  local_68 = *(undefined8 *)(param_3 + 0x68);
  local_60 = *(undefined8 *)(param_3 + 0x80);
  local_58 = *(undefined8 *)(param_3 + 0x98);
  local_50 = *(undefined8 *)(param_3 + 0xb0);
  local_b8[0] = FCrc::MemCrc32(&local_88,0x40);
  plVar5 = (longlong *)0x0;
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    lVar4 = *(longlong *)(param_1 + 0x90);
    if (*(longlong *)(param_1 + 0x90) == 0) {
      lVar4 = param_1 + 0x88;
    }
    iVar2 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x98) - 1U & (longlong)local_b8[0]) * 4);
    if (iVar2 != -1) {
      do {
        plVar3 = (longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar2 * 0x18);
        if (*(int *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar2 * 0x18) == local_b8[0]) {
          if (iVar2 != -1) goto LAB_141e48ae3;
          break;
        }
        iVar2 = (int)plVar3[2];
      } while (iVar2 != -1);
    }
  }
  plVar3 = plVar5;
LAB_141e48ae3:
  local_b0 = plVar3 + 1;
  if (plVar3 == (longlong *)0x0) {
    local_b0 = plVar5;
  }
  if (local_b0 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x10);
    local_b0 = plVar5;
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      local_b0 = plVar3;
    }
    local_a0 = local_b8;
    local_98 = &local_b0;
    TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,unsigned___int64_const_&>_>
              (param_1 + 0x50,local_a8,&local_a0,0);
  }
  else {
    local_b0 = (longlong *)*local_b0;
    plVar3 = plVar5;
    plVar7 = plVar5;
    if (0 < (int)local_b0[1]) {
      do {
        cVar1 = FVulkanFramebuffer::Matches(*(undefined8 *)((longlong)plVar7 + *local_b0),param_3);
        if (cVar1 != '\0') {
          return *(longlong **)(*local_b0 + (longlong)(int)plVar3 * 8);
        }
        uVar6 = (int)plVar3 + 1;
        plVar3 = (longlong *)(ulonglong)uVar6;
        plVar7 = plVar7 + 1;
      } while ((int)uVar6 < (int)local_b0[1]);
    }
  }
  lVar4 = operator_new(0xe8);
  if (lVar4 != 0) {
    local_c8 = param_5;
    plVar5 = (longlong *)FUN_141e57830(lVar4,param_2,param_3,param_4);
  }
  plVar3 = local_b0;
  iVar2 = (int)local_b0[1];
  *(int *)(local_b0 + 1) = iVar2 + 1;
  if (*(int *)((longlong)local_b0 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_b0,iVar2);
  }
  *(longlong **)(*plVar3 + (longlong)iVar2 * 8) = plVar5;
  return plVar5;
}



// FUNCTION 141e48c10 GetOrCreateHandle body=255 status=ok
// SIG undefined GetOrCreateHandle(void)

undefined8 FVulkanShader::GetOrCreateHandle(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int local_res8 [2];
  undefined1 local_res20 [8];
  undefined8 local_38;
  int *local_30;
  undefined8 *local_28;
  
  if (*(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x124)) {
    lVar2 = *(longlong *)(param_1 + 0x130);
    if (*(longlong *)(param_1 + 0x130) == 0) {
      lVar2 = param_1 + 0x128;
    }
    iVar1 = *(int *)(lVar2 + ((longlong)*(int *)(param_1 + 0x138) - 1U & (longlong)param_3) * 4);
    if (iVar1 != -1) {
      lVar2 = *(longlong *)(param_1 + 0xf0);
      do {
        puVar4 = (undefined8 *)(lVar2 + (longlong)iVar1 * 0x18);
        if (*(int *)(lVar2 + (longlong)iVar1 * 0x18) == param_3) {
          if (iVar1 != -1) goto LAB_141e48c83;
          break;
        }
        iVar1 = *(int *)(puVar4 + 2);
      } while (iVar1 != -1);
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_141e48c83:
  puVar3 = puVar4 + 1;
  if (puVar4 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  if (puVar3 == (undefined8 *)0x0) {
    local_res8[0] = param_3;
    local_38 = FUN_141e45660(param_2,param_1 + 0x148,*(undefined4 *)(param_1 + 0x144),param_1 + 0x20
                             ,*(undefined4 *)(param_1 + 0x140));
    local_30 = local_res8;
    local_28 = &local_38;
    FUN_1404981d0((longlong *)(param_1 + 0xf0),local_res20,&local_30,0);
    return local_38;
  }
  return *puVar3;
}



// FUNCTION 141e48d10 FUN_141e48d10 body=519 status=ok
// SIG undefined FUN_141e48d10(void)

undefined8 * FUN_141e48d10(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  BOOL BVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int local_res8 [2];
  undefined1 local_res18 [8];
  undefined8 *local_res20;
  int *local_38;
  undefined8 **local_30;
  
  local_res8[0] = *(int *)((longlong)param_3 + 0x344);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x3b);
  BVar4 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar4 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  puVar13 = (undefined8 *)0x0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    ((longlong)(int)param_1[9] - 1U & (longlong)local_res8[0]) * 4);
    if (iVar5 != -1) {
      do {
        puVar7 = (undefined8 *)(*param_1 + (longlong)iVar5 * 0x18);
        if (*(int *)(*param_1 + (longlong)iVar5 * 0x18) == local_res8[0]) {
          if (iVar5 != -1) goto LAB_141e48db3;
          break;
        }
        iVar5 = *(int *)(puVar7 + 2);
      } while (iVar5 != -1);
    }
  }
  puVar7 = puVar13;
LAB_141e48db3:
  puVar12 = puVar7 + 1;
  if (puVar7 == (undefined8 *)0x0) {
    puVar12 = puVar13;
  }
  LeaveCriticalSection(lpCriticalSection);
  if (puVar12 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)operator_new(0x370);
    if (puVar7 != (undefined8 *)0x0) {
      lVar11 = 6;
      puVar13 = param_3;
      puVar12 = puVar7;
      do {
        puVar10 = puVar12;
        puVar8 = puVar13;
        uVar9 = puVar8[1];
        *puVar10 = *puVar8;
        puVar10[1] = uVar9;
        uVar9 = puVar8[3];
        puVar10[2] = puVar8[2];
        puVar10[3] = uVar9;
        uVar9 = puVar8[5];
        puVar10[4] = puVar8[4];
        puVar10[5] = uVar9;
        uVar9 = puVar8[7];
        puVar10[6] = puVar8[6];
        puVar10[7] = uVar9;
        uVar9 = puVar8[9];
        puVar10[8] = puVar8[8];
        puVar10[9] = uVar9;
        uVar9 = puVar8[0xb];
        puVar10[10] = puVar8[10];
        puVar10[0xb] = uVar9;
        uVar9 = puVar8[0xd];
        puVar10[0xc] = puVar8[0xc];
        puVar10[0xd] = uVar9;
        uVar9 = puVar8[0xf];
        puVar10[0xe] = puVar8[0xe];
        puVar10[0xf] = uVar9;
        lVar11 = lVar11 + -1;
        puVar13 = puVar8 + 0x10;
        puVar12 = puVar10 + 0x10;
      } while (lVar11 != 0);
      uVar9 = puVar8[0x11];
      puVar10[0x10] = puVar8[0x10];
      puVar10[0x11] = uVar9;
      uVar9 = puVar8[0x13];
      puVar10[0x12] = puVar8[0x12];
      puVar10[0x13] = uVar9;
      uVar9 = puVar8[0x15];
      puVar10[0x14] = puVar8[0x14];
      puVar10[0x15] = uVar9;
      uVar1 = *(undefined4 *)((longlong)puVar8 + 0xb4);
      uVar2 = *(undefined4 *)(puVar8 + 0x17);
      uVar3 = *(undefined4 *)((longlong)puVar8 + 0xbc);
      *(undefined4 *)(puVar10 + 0x16) = *(undefined4 *)(puVar8 + 0x16);
      *(undefined4 *)((longlong)puVar10 + 0xb4) = uVar1;
      *(undefined4 *)(puVar10 + 0x17) = uVar2;
      *(undefined4 *)((longlong)puVar10 + 0xbc) = uVar3;
      uVar1 = *(undefined4 *)((longlong)puVar8 + 0xc4);
      uVar2 = *(undefined4 *)(puVar8 + 0x19);
      uVar3 = *(undefined4 *)((longlong)puVar8 + 0xcc);
      *(undefined4 *)(puVar10 + 0x18) = *(undefined4 *)(puVar8 + 0x18);
      *(undefined4 *)((longlong)puVar10 + 0xc4) = uVar1;
      *(undefined4 *)(puVar10 + 0x19) = uVar2;
      *(undefined4 *)((longlong)puVar10 + 0xcc) = uVar3;
      puVar10[0x1a] = puVar8[0x1a];
      puVar7[0x6b] = 0;
      *(uint *)(puVar7 + 0x6c) = (uint)*(byte *)((longlong)param_3 + 0x33a);
      puVar7[0x6d] = param_2;
      uVar9 = FUN_141e45a70(param_2,param_3);
      puVar7[0x6b] = uVar9;
      puVar13 = puVar7;
    }
    local_res20 = puVar13;
    BVar4 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar4 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    local_38 = local_res8;
    local_30 = &local_res20;
    TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,unsigned___int64_const_&>_>
              (param_1,local_res18,&local_38,0);
    LeaveCriticalSection(lpCriticalSection);
    return local_res20;
  }
  return (undefined8 *)*puVar12;
}



// FUNCTION 141e48f20 FUN_141e48f20 body=880 status=ok
// SIG undefined FUN_141e48f20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_141e48f20(undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_2d8 [32];
  undefined8 *local_2b8;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined4 local_264;
  longlong local_258;
  undefined4 local_250;
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
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  longlong *local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined1 local_180 [312];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  lVar1 = *param_3;
  FUN_141e5ef90(param_4,*param_2,*(undefined4 *)(lVar1 + 0xa0));
  uVar2 = 0;
  local_268 = 0xffffffff;
  local_298 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_290 = 0;
  local_278 = 0;
  local_270 = 0;
  local_264 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = 0;
  local_240 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0xffffffff;
  local_214 = 0;
  local_208 = 0;
  local_200 = 0;
  local_198 = (longlong *)0x0;
  local_190 = 0;
  local_188 = 0;
  local_184 = 0xffffffff;
  FDescriptorSetRemappingInfo::FDescriptorSetRemappingInfo(local_180);
  local_1c8 = 0;
  local_1c0 = 0;
  uVar4 = 1;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_2b8 = &local_298;
  FUN_141e4ac10(&local_1c8,1,0,lVar1 + 0x20);
  if (param_3[1] != 0) {
    local_2b8 = &local_298;
    FUN_141e4ac10(&local_1c8,0x10,1,param_3[1] + 0x20);
  }
  if (param_3[2] != 0) {
    local_2b8 = &local_298;
    FUN_141e4ac10(&local_1c8,8,2,param_3[2] + 0x20);
  }
  if (param_3[3] != 0) {
    lVar1 = param_3[4];
    local_2b8 = &local_298;
    FUN_141e4ac10(&local_1c8,2,3,param_3[3] + 0x20);
    local_2b8 = &local_298;
    FUN_141e4ac10(&local_1c8,4,4,lVar1 + 0x20);
  }
  local_2a8 = 0;
  local_2a0 = 0;
  FUN_141e33ba0(&local_1c8,&local_298,&local_2a8);
  lVar1 = FUN_141e478a0(param_1,&local_1c8,1);
  if (*(char *)(lVar1 + 0x270) == '\0') {
    *(undefined8 *)(lVar1 + 0x1e8) = *(undefined8 *)(lVar1 + 0x78);
    *(undefined8 *)(lVar1 + 0x210) = *(undefined8 *)(lVar1 + 0x68);
    *(undefined8 *)(lVar1 + 0x238) = *(undefined8 *)(lVar1 + 0x88);
    *(undefined8 *)(lVar1 + 0x1f0) = *(undefined8 *)(lVar1 + 0xb0);
    *(undefined8 *)(lVar1 + 0x218) = *(undefined8 *)(lVar1 + 0xa0);
    *(undefined8 *)(lVar1 + 0x240) = *(undefined8 *)(lVar1 + 0xc0);
    *(undefined8 *)(lVar1 + 0x1f8) = *(undefined8 *)(lVar1 + 0xe8);
    *(undefined8 *)(lVar1 + 0x220) = *(undefined8 *)(lVar1 + 0xd8);
    *(undefined8 *)(lVar1 + 0x248) = *(undefined8 *)(lVar1 + 0xf8);
    *(undefined8 *)(lVar1 + 0x200) = *(undefined8 *)(lVar1 + 0x120);
    *(undefined8 *)(lVar1 + 0x228) = *(undefined8 *)(lVar1 + 0x110);
    *(undefined8 *)(lVar1 + 0x250) = *(undefined8 *)(lVar1 + 0x130);
    *(undefined8 *)(lVar1 + 0x208) = *(undefined8 *)(lVar1 + 0x158);
    *(undefined8 *)(lVar1 + 0x230) = *(undefined8 *)(lVar1 + 0x148);
    *(undefined8 *)(lVar1 + 600) = *(undefined8 *)(lVar1 + 0x168);
    *(longlong **)(lVar1 + 0x268) = (longlong *)(lVar1 + 0x58);
    uVar7 = uVar2;
    if (0 < *(int *)(lVar1 + 0x60)) {
      do {
        if (0 < *(int *)(uVar2 + 8 + *(longlong *)(lVar1 + 0x58))) {
          *(uint *)(lVar1 + 0x260) = *(uint *)(lVar1 + 0x260) | uVar4;
        }
        uVar6 = (int)uVar7 + 1;
        uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
        uVar2 = uVar2 + 0x18;
        uVar7 = (ulonglong)uVar6;
      } while ((int)uVar6 < *(int *)(lVar1 + 0x60));
    }
    *(undefined1 *)(lVar1 + 0x270) = 1;
  }
  FDescriptorSetRemappingInfo::~FDescriptorSetRemappingInfo(local_180);
  plVar3 = local_198;
  for (iVar5 = (int)local_190; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 3;
  }
  if (local_198 != (longlong *)0x0) {
    FMemory::Free(local_198);
  }
  local_200 = 0;
  if (local_208 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_248);
  local_250 = 0;
  if (local_258 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_298);
  return lVar1;
}



// FUNCTION 141e492b0 FUN_141e492b0 body=88 status=ok
// SIG undefined FUN_141e492b0(void)

undefined8 FUN_141e492b0(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (0x3b9acdea < param_1) {
    if (param_1 == 0x3b9c9308) {
switchD_141e492d6_caseD_3:
      uVar1 = 0x300;
    }
switchD_141e492d6_default:
    return uVar1;
  }
  if (param_1 == 0x3b9acdea) {
switchD_141e492d6_caseD_0:
    return 1;
  }
  switch(param_1) {
  case 0:
  case 1:
    goto switchD_141e492d6_caseD_0;
  case 2:
    return 0x400;
  case 3:
    goto switchD_141e492d6_caseD_3;
  case 4:
  case 5:
    return 0x80;
  case 6:
  case 7:
    return 0x1000;
  default:
    goto switchD_141e492d6_default;
  }
}



// FUNCTION 141e49330 Init body=333 status=ok
// SIG undefined Init(void)

void FPackedUniformBuffers::Init(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar4 = *(int *)(param_2 + 0x48);
  lVar6 = param_1[1];
  iVar3 = (int)lVar6 + iVar4;
  *(int *)(param_1 + 1) = iVar3;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow();
  }
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)(int)lVar6 * 0x10 + *param_1),0,(longlong)iVar4 << 4);
  iVar4 = *(int *)(param_2 + 0x48);
  iVar3 = 0;
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      lVar5 = *param_1 + lVar6;
      iVar4 = *(int *)(*(longlong *)(param_2 + 0x40) + lVar6) + *(int *)(lVar5 + 8);
      *(int *)(lVar5 + 8) = iVar4;
      if (*(int *)(lVar5 + 0xc) < iVar4) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow();
      }
      iVar4 = *(int *)(param_2 + 0x48);
      iVar3 = iVar3 + 1;
      lVar6 = lVar6 + 0x10;
    } while (iVar3 < iVar4);
  }
  plVar1 = param_1 + 2;
  *param_3 = (1L << ((byte)iVar4 & 0x3f)) + -1;
  if (plVar1 != (longlong *)(param_2 + 0x70)) {
    iVar4 = *(int *)(param_2 + 0x78);
    pvVar2 = *(void **)(param_2 + 0x70);
    *(int *)(param_1 + 3) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)param_1 + 0x1c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    else {
      FUN_141e527b0(plVar1,iVar4);
      ::_guard_xfg_dispatch_icall_nop((void *)*plVar1,pvVar2,(longlong)iVar4 * 10);
    }
  }
  plVar1 = param_1 + 4;
  if (plVar1 == (longlong *)(param_2 + 0x60)) {
    return;
  }
  iVar4 = *(int *)(param_2 + 0x68);
  pvVar2 = *(void **)(param_2 + 0x60);
  *(int *)(param_1 + 5) = iVar4;
  if ((iVar4 == 0) && (*(int *)((longlong)param_1 + 0x2c) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    return;
  }
  TArray<int,FDefaultAllocator>::ResizeForCopy(plVar1,iVar4);
  ::_guard_xfg_dispatch_icall_nop((void *)*plVar1,pvVar2,(longlong)iVar4 << 2);
  return;
}



// FUNCTION 141e49480 FUN_141e49480 body=553 status=ok
// SIG undefined FUN_141e49480(void)

void FUN_141e49480(longlong param_1)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  cVar1 = FUN_141e61d10();
  if (cVar1 == '\0') {
    LowLevelFatalErrorHandler
              ("Unknown",0xd4,
               L"Failed to find all required Vulkan entry points; make sure your driver supports Vulkan!"
              );
    FDebug::AssertFailed
              (&DAT_144e9ca8f,"Unknown",0xd4,
               L"Failed to find all required Vulkan entry points; make sure your driver supports Vulkan!"
              );
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar4 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.GPUCrashDebugging");
  if ((plVar4 == (longlong *)0x0) || (iVar2 = (**(code **)(*plVar4 + 0x68))(plVar4), iVar2 == 0)) {
    uVar5 = FCommandLine::Get();
    cVar1 = FParse::Param(uVar5,L"gpucrashdebugging");
    DAT_146aafbfc = 0;
    if (cVar1 == '\0') goto LAB_141e4952c;
  }
  DAT_146aafbfc = 1;
LAB_141e4952c:
  FUN_141e49800(param_1);
  lVar7 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aafe90) && (_Init_thread_header(&DAT_146aafe90), DAT_146aafe90 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar4 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.Streaming.PoolSize")
    ;
    lVar6 = lVar7;
    if (plVar4 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar4 + 0x38))(plVar4);
    }
    DAT_146aafe88 = lVar6;
    _Init_thread_footer(&DAT_146aafe90);
  }
  lVar6 = DAT_146aafe88;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
    lVar7 = 4;
  }
  if (DAT_146ab6310 < 1) {
    if (0 < *(int *)(lVar7 + lVar6)) {
      DAT_146ab6308 = (longlong)*(int *)(lVar7 + lVar6) << 0x14;
      VulkanRHI::FDeviceMemoryManager::GetTotalMemory(*(longlong *)(param_1 + 0x70) + 0x10,1);
    }
    return;
  }
  lVar7 = VulkanRHI::FDeviceMemoryManager::GetTotalMemory(*(longlong *)(param_1 + 0x70) + 0x10,1);
  fVar8 = (float)lVar7;
  if (lVar7 < 0) {
    fVar8 = fVar8 + 1.8446744e+19;
  }
  DAT_146ab6308 = (longlong)(float)(int)((float)DAT_146ab6310 * 9.536743e-09 * fVar8) << 0x14;
  return;
}



// FUNCTION 141e496b0 FUN_141e496b0 body=331 status=ok
// SIG undefined FUN_141e496b0(void)

void FUN_141e496b0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 local_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 local_14;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aafe74) {
    _Init_thread_header(&DAT_146aafe74);
    if (DAT_146aafe74 == -1) {
      uVar6 = FCommandLine::Get();
      DAT_146aafe70 = FParse::Param(uVar6,L"vkNoPipelineCacheLoad");
      _Init_thread_footer(&DAT_146aafe74);
    }
  }
  lVar1 = DAT_146aafc78;
  if (DAT_146aafe70 != '\0') goto LAB_141e49749;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 == DAT_1468c21c0) goto LAB_141e49731;
    lVar5 = 4;
  }
  else {
LAB_141e49731:
    lVar5 = 0;
  }
  if (*(int *)(lVar5 + lVar1) != 0) {
    FUN_141e4a040(param_1,param_2);
  }
LAB_141e49749:
  if (param_1[0x31] == 0) {
    local_38 = 0x11;
    local_34 = 0;
    local_2c = 0;
    local_24 = 0;
    local_1c = 0;
    local_14 = 0;
    iVar4 = (*DAT_146ab00c8)(*(undefined8 *)(*param_1 + 8),&local_38,0);
    if (iVar4 != 0) {
      FUN_141e67d70(iVar4,
                    "VulkanRHI::vkCreatePipelineCache(Device->GetInstanceHandle(), &PipelineCacheInfo, VULKAN_CPU_ALLOCATOR, &PipelineCache)"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                    ,0x1b1);
    }
  }
  return;
}



// FUNCTION 141e49800 FUN_141e49800 body=1173 status=ok
// SIG undefined FUN_141e49800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141e49800(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  DWORD DVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  undefined1 local_res8 [8];
  longlong *local_38;
  ulonglong local_30;
  
  FUN_141edc760(local_res8,0);
  if (*(longlong *)(param_1 + 0x70) != 0) goto LAB_141e49c85;
  DAT_146ab62e4 = 0;
  DAT_1464c9c58 = 0;
  FUN_141e44e00(param_1);
  FUN_141e53090(param_1);
  lVar10 = *(longlong *)(param_1 + 0x70);
  DAT_146ab6324 = 1;
  DAT_146ab6325 = 0;
  DAT_146ab62ec = *(int *)(*(longlong *)(param_1 + 0x70) + 0xa38) != 0;
  DAT_1464c9c59 = 0;
  DAT_146ab62fe = 1;
  DAT_146ab62df = 1;
  iVar4 = (**(code **)(*DAT_146aafd78 + 0x68))();
  DAT_146ab6326 = iVar4 != 0;
  iVar4 = (**(code **)(*DAT_146aafd78 + 0x68))();
  DAT_146ab6328 = 1 < iVar4;
  DAT_1464c9c18 = DAT_146ab6326 != '\0';
  cVar3 = IsRHIDeviceIntel();
  lVar2 = DAT_146aafa10;
  if (cVar3 == '\0') {
LAB_141e4993d:
    DAT_146ab62f0 = 0;
  }
  else {
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar5 = GetCurrentThreadId();
      lVar7 = 4;
      if (DVar5 == DAT_1468c21c0) goto LAB_141e4991c;
    }
    else {
LAB_141e4991c:
      lVar7 = 0;
    }
    if ((*(int *)(lVar7 + lVar2) < 1) ||
       (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18b8) ==
        *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18b0))) goto LAB_141e4993d;
    DAT_146ab62f0 = 1;
  }
  DAT_1464c9c1a = 1;
  DAT_146ab62f5 = 1;
  DAT_146ab62c9 = 1;
  if (*(int *)(lVar10 + 0x7b4) <= DAT_1464c9c5c) {
    DAT_1464c9c5c = *(int *)(lVar10 + 0x7b4);
  }
  if (*(int *)(lVar10 + 0x7b4) <= DAT_1464c9c60) {
    DAT_1464c9c60 = *(int *)(lVar10 + 0x7b4);
  }
  DAT_1464c9c64 = *(uint *)(lVar10 + 0x7b4);
  iVar4 = 0x1f;
  if (DAT_1464c9c64 != 0) {
    for (; DAT_1464c9c64 >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  if (DAT_1464c9c64 == 0) {
    iVar4 = 0x20;
  }
  else {
    iVar4 = 0x1f - iVar4;
  }
  uVar6 = DAT_1464c9c64 - 1;
  iVar12 = 0x1f;
  if (uVar6 != 0) {
    for (; uVar6 >> iVar12 == 0; iVar12 = iVar12 + -1) {
    }
  }
  if (uVar6 == 0) {
    iVar12 = 0x20;
  }
  else {
    iVar12 = 0x1f - iVar12;
  }
  DAT_1464c9c0c = (0x20U - iVar12 & ~((iVar4 << 0x1a) >> 0x1f)) + 1;
  if (0xd < DAT_1464c9c0c) {
    DAT_1464c9c0c = 0xe;
  }
  _DAT_1464c9c68 = *(undefined4 *)(lVar10 + 0x7bc);
  _DAT_1464c9c28 = *(undefined4 *)(lVar10 + 0x7c0);
  DAT_1464c9c23 = 1;
  DAT_146ab62e8 = 1;
  DAT_1464c9c11 = 1;
  FUN_141e2e880();
  DAT_146ab62f4 = 1;
  DAT_146ab633a = 1;
  puVar8 = (undefined8 *)FRenderResource::GetResourceList();
  for (puVar8 = (undefined8 *)*puVar8; puVar8 != (undefined8 *)0x0; puVar8 = (undefined8 *)*puVar8)
  {
    (**(code **)(*(longlong *)puVar8[2] + 0x18))();
  }
  puVar8 = (undefined8 *)FRenderResource::GetResourceList();
  for (puVar8 = (undefined8 *)*puVar8; puVar8 != (undefined8 *)0x0; puVar8 = (undefined8 *)*puVar8)
  {
    (**(code **)(*(longlong *)puVar8[2] + 8))();
  }
  local_38 = (longlong *)0x0;
  local_30 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"Vulkan",0xe);
  FHardwareInfo::RegisterHardwareInfo(DAT_146aafd30,&local_38);
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  DAT_1464c9c24 = 0x3f800000;
  DAT_146ab62c8 = 1;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar1 = DAT_1468b1f88;
  local_38 = (longlong *)0x0;
  plVar9 = (longlong *)FMemory::Realloc(0,0x20);
  local_30 = CONCAT44(local_30._4_4_,2);
  local_38 = plVar9;
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar9[1] = (longlong)FUN_141e52fe0;
    lVar10 = FDelegateHandle::GenerateNewID();
    plVar9[3] = lVar10;
    *plVar9 = (longlong)&PTR_GetPoolName_143f3f090;
  }
  uVar11 = (**(code **)(*plVar1 + 0x88))
                     (plVar1,L"r.Vulkan.SavePipelineCache",L"Save pipeline cache.",&local_38,0);
  *(undefined8 *)(param_1 + 0x90) = uVar11;
  if ((int)local_30 == 0) {
LAB_141e49b8b:
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  else if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = local_30 & 0xffffffff00000000;
    goto LAB_141e49b8b;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar1 = DAT_1468b1f88;
  local_38 = (longlong *)0x0;
  plVar9 = (longlong *)FMemory::Realloc(0,0x20);
  local_30 = CONCAT44(local_30._4_4_,2);
  local_38 = plVar9;
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar9[1] = (longlong)FUN_141e50750;
    lVar10 = FDelegateHandle::GenerateNewID();
    plVar9[3] = lVar10;
    *plVar9 = (longlong)&PTR_GetPoolName_143f3f090;
  }
  uVar11 = (**(code **)(*plVar1 + 0x88))
                     (plVar1,L"r.Vulkan.RebuildPipelineCache",L"Rebuilds pipeline cache.",&local_38,
                      0);
  *(undefined8 *)(param_1 + 0x98) = uVar11;
  if ((int)local_30 != 0) {
    if (local_38 == (longlong *)0x0) goto LAB_141e49c85;
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = local_30 & 0xffffffff00000000;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
LAB_141e49c85:
  FUN_141edd460(local_res8);
  return;
}



// FUNCTION 141e49ca0 FUN_141e49ca0 body=39 status=ok
// SIG undefined FUN_141e49ca0(void)

void FUN_141e49ca0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144ea42c8;
    return;
  }
  return;
}



// FUNCTION 141e49cd0 FUN_141e49cd0 body=568 status=ok
// SIG undefined FUN_141e49cd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141e49cd0(longlong param_1,char param_2)

{
  double dVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  double dVar7;
  uint uVar8;
  LARGE_INTEGER local_res8 [2];
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_68 [10];
  
  iVar4 = (*DAT_146ab0040)(*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),
                           *(undefined8 *)(param_1 + 0x18));
  if (iVar4 == 3) {
    iVar4 = (*DAT_146ab0068)(*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),
                             *(undefined8 *)(param_1 + 0x10),0,*(uint *)(param_1 + 0x40),
                             (ulonglong)*(uint *)(param_1 + 0x40) << 3,
                             *(undefined8 *)(param_1 + 0x28),8,9);
    if (iVar4 == 0) {
LAB_141e49efa:
      *(undefined4 *)(param_1 + 0x38) = 3;
      return 1;
    }
    if (iVar4 != 1) {
      FUN_141e67d70(iVar4,"Result",
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQuery.cpp",
                    0xba);
      return 0;
    }
  }
  iVar4 = 1;
  if (param_2 != '\0') {
    QueryPerformanceCounter(local_68);
    QueryPerformanceCounter(local_res8);
    uVar2 = DAT_1464a8214;
    dVar1 = (double)local_res8[0].QuadPart * DAT_1468b02f8;
    do {
      FUN_1416b1810(0);
      cVar3 = IsInActualRenderingThread();
      if (cVar3 != '\0') {
        plVar6 = (longlong *)FTaskGraphInterface::Get();
        (**(code **)(*plVar6 + 0x30))(plVar6,uVar2);
      }
      iVar5 = (*DAT_146ab0040)(*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),
                               *(undefined8 *)(param_1 + 0x18));
      if (iVar5 == 3) {
        iVar4 = (*DAT_146ab0068)(*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),
                                 *(undefined8 *)(param_1 + 0x10),0,*(uint *)(param_1 + 0x40),
                                 (ulonglong)*(uint *)(param_1 + 0x40) << 3,
                                 *(undefined8 *)(param_1 + 0x28),8,9);
      }
      if (iVar4 == 0) {
        QueryPerformanceCounter(&local_res20);
        DAT_146ac3acc = DAT_146ac3acc + (local_res20.s.LowPart - local_68[0]._0_4_);
        _DAT_146ac3aec = _DAT_146ac3aec + 1;
        goto LAB_141e49efa;
      }
      if (iVar4 != 1) {
        FUN_141e67d70(iVar4,"Result",
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQuery.cpp",
                      0x9b);
      }
      uVar8 = 0x40000000;
      if (*(int *)(param_1 + 0x24) != 2) {
        uVar8 = 0x3fe00000;
      }
      QueryPerformanceCounter(&local_res18);
      dVar7 = (double)local_res18.QuadPart * DAT_1468b02f8 - dVar1;
    } while (dVar7 < (double)((ulonglong)uVar8 << 0x20) ||
             dVar7 == (double)((ulonglong)uVar8 << 0x20));
  }
  return 0;
}



// FUNCTION 141e49f10 FUN_141e49f10 body=277 status=ok
// SIG undefined FUN_141e49f10(void)

void FUN_141e49f10(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  
  if (((((*(byte *)((longlong)param_2 + 0x2d) & 4) == 0) || (*param_2 != *(longlong *)(param_1 + 8))
       ) || (param_2[1] != *(longlong *)(param_1 + 0x10))) ||
     (param_2[2] != *(longlong *)(param_1 + 0x18))) {
    (*DAT_146ab01d0)(param_2[8],0,1,param_1 + 8);
    uVar1 = *(undefined4 *)(param_1 + 0xc);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar3 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)param_2 + 4) = uVar1;
    *(undefined4 *)(param_2 + 1) = uVar2;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
    param_2[2] = *(longlong *)(param_1 + 0x18);
    *(byte *)((longlong)param_2 + 0x2d) = *(byte *)((longlong)param_2 + 0x2d) | 4;
  }
  iVar5 = *(int *)(param_1 + 0x20);
  if ((iVar5 < 0) || (0x7fffffff < (uint)(*(int *)(param_1 + 0x28) + iVar5))) {
    iVar5 = 0;
  }
  *(int *)(param_1 + 0x20) = iVar5;
  iVar5 = *(int *)(param_1 + 0x24);
  if ((iVar5 < 0) || (0x7fffffff < (uint)(*(int *)(param_1 + 0x2c) + iVar5))) {
    iVar5 = 0;
  }
  *(int *)(param_1 + 0x24) = iVar5;
  bVar4 = *(byte *)((longlong)param_2 + 0x2d);
  if ((((bVar4 & 8) == 0) || (param_2[3] != *(longlong *)(param_1 + 0x20))) ||
     (param_2[4] != *(longlong *)(param_1 + 0x28))) {
    (*DAT_146ab01d8)(param_2[8],0,1,param_1 + 0x20);
    uVar1 = *(undefined4 *)(param_1 + 0x24);
    uVar2 = *(undefined4 *)(param_1 + 0x28);
    uVar3 = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)param_2 + 0x1c) = uVar1;
    *(undefined4 *)(param_2 + 4) = uVar2;
    *(undefined4 *)((longlong)param_2 + 0x24) = uVar3;
    *(byte *)((longlong)param_2 + 0x2d) = *(byte *)((longlong)param_2 + 0x2d) | 8;
    bVar4 = *(byte *)((longlong)param_2 + 0x2d);
  }
  if (((bVar4 & 0x10) == 0) || ((int)param_2[5] != *(int *)(param_1 + 0x34))) {
    (*DAT_146ab0210)(param_2[8],3);
    bVar4 = *(byte *)((longlong)param_2 + 0x2d) | 0x10;
    *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_1 + 0x34);
  }
  *(byte *)((longlong)param_2 + 0x2d) = bVar4 & 0xfe;
  return;
}



// FUNCTION 141e4a040 FUN_141e4a040 body=657 status=ok
// SIG undefined FUN_141e4a040(void)

undefined8 FUN_141e4a040(longlong *param_1,longlong *param_2)

{
  void *_Src;
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 local_res8;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18;
  longlong local_98;
  undefined8 local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined2 *local_78;
  int local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  int iStack_50;
  int local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  
  uVar7 = 0;
  puVar5 = (undefined8 *)*param_2;
  puVar6 = puVar5 + (longlong)(int)param_2[1] * 2;
  for (; puVar5 != puVar6; puVar5 = puVar5 + 2) {
    QueryPerformanceCounter(&local_res10);
    local_80 = *(int *)(puVar5 + 1);
    lVar4 = (longlong)local_80;
    _Src = (void *)*puVar5;
    local_88 = (void *)0x0;
    if (local_80 == 0) {
      local_7c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,local_80,0);
      _guard_xfg_dispatch_icall_nop(local_88,_Src,lVar4 * 2);
    }
    FUN_141e24810(&local_78,*param_1,&local_88);
    local_98 = 0;
    puVar3 = &DAT_143f3eda8;
    if (local_70 != 0) {
      puVar3 = local_78;
    }
    local_90 = 0;
    cVar1 = FUN_141676460(&local_98,puVar3);
    if ((cVar1 != '\0') && (cVar1 = FUN_141e2a2a0(*param_1,&local_98), cVar1 != '\0')) {
      local_68 = 0x11;
      local_54 = 0;
      local_64 = 0;
      local_5c = 0;
      iStack_50 = (int)local_90;
      local_4c = (int)local_90 >> 0x1f;
      uStack_48 = (undefined4)local_98;
      local_44 = (undefined4)((ulonglong)local_98 >> 0x20);
      if (param_1[0x31] == 0) {
        iVar2 = (*DAT_146ab00c8)();
        if (iVar2 != 0) {
          FUN_141e67d70(iVar2,
                        "VulkanRHI::vkCreatePipelineCache(Device->GetInstanceHandle(), &PipelineCacheInfo, VULKAN_CPU_ALLOCATOR, &PipelineCache)"
                        ,
                        "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                        ,0x131);
        }
      }
      else {
        iVar2 = (*DAT_146ab00c8)(*(undefined8 *)(*param_1 + 8),&local_68,0,&local_res8);
        if (iVar2 != 0) {
          FUN_141e67d70(iVar2,
                        "VulkanRHI::vkCreatePipelineCache(Device->GetInstanceHandle(), &PipelineCacheInfo, VULKAN_CPU_ALLOCATOR, &TempPipelineCache)"
                        ,
                        "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                        ,0x137);
        }
        iVar2 = (*DAT_146ab00e0)(*(undefined8 *)(*param_1 + 8),param_1[0x31],1,&local_res8);
        if (iVar2 != 0) {
          FUN_141e67d70(iVar2,
                        "VulkanRHI::vkMergePipelineCaches(Device->GetInstanceHandle(), PipelineCache, 1, &TempPipelineCache)"
                        ,
                        "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                        ,0x138);
        }
        (*DAT_146ab00d0)(*(undefined8 *)(*param_1 + 8),local_res8);
      }
      QueryPerformanceCounter(&local_res18);
      uVar7 = 1;
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
    if (local_78 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if (param_1[0x31] == 0) {
    local_68 = 0x11;
    local_64 = 0;
    local_5c = 0;
    local_54 = 0;
    iStack_50 = 0;
    local_4c = 0;
    uStack_48 = 0;
    local_44 = 0;
    iVar2 = (*DAT_146ab00c8)(*(undefined8 *)(*param_1 + 8),&local_68,0);
    if (iVar2 != 0) {
      FUN_141e67d70(iVar2,
                    "VulkanRHI::vkCreatePipelineCache(Device->GetInstanceHandle(), &PipelineCacheInfo, VULKAN_CPU_ALLOCATOR, &PipelineCache)"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                    ,0x176);
    }
  }
  return uVar7;
}



// FUNCTION 141e4a2e0 FUN_141e4a2e0 body=61 status=ok
// SIG undefined FUN_141e4a2e0(void)

void FUN_141e4a2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8)

{
  FUN_141e651d0(param_1,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



// FUNCTION 141e4a320 LockTexture2D_RenderThread body=47 status=ok
// SIG undefined LockTexture2D_RenderThread(void)

void FVulkanDynamicRHI::LockTexture2D_RenderThread
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6,undefined1 param_7)

{
  FUN_141e650a0(param_1,param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 141e4a350 NotifyDeletedRenderTarget body=740 status=ok
// SIG undefined NotifyDeletedRenderTarget(void)

void FTransitionAndLayoutManager::NotifyDeletedRenderTarget
               (longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  longlong lVar13;
  int local_98;
  uint uStack_94;
  int iStack_90;
  uint uStack_8c;
  undefined8 local_88;
  uint uStack_80;
  int iStack_7c;
  undefined1 local_78 [16];
  longlong *local_68;
  char local_60;
  char cStack_5f;
  longlong *local_58;
  int iStack_50;
  uint uStack_4c;
  uint *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  plVar1 = (longlong *)(param_1 + 0x50);
  iVar10 = *(int *)(param_1 + 0x78);
  puStack_48 = (uint *)(param_1 + 0x60);
  local_88._4_4_ = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_94 = 1;
  if (iVar10 != 0) {
    puVar11 = *(uint **)(param_1 + 0x70);
    if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
      puVar11 = puStack_48;
    }
    uVar8 = *puVar11;
    uStack_80 = 0;
    local_98 = 0;
    while (uVar8 == 0) {
      lVar9 = (longlong)local_98;
      uStack_80 = uStack_80 + 0x20;
      iVar12 = local_98 + 1;
      bVar5 = (int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar12;
      if (bVar5) goto LAB_141e4a41d;
      uVar8 = puVar11[lVar9 + 1];
    }
    uStack_94 = -uVar8 & uVar8;
    iVar12 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    local_88._4_4_ = (uStack_80 - iVar12) + 0x1f;
    if (iVar10 < local_88._4_4_) {
LAB_141e4a41d:
      local_88._4_4_ = iVar10;
    }
  }
  auStack_40._4_4_ = local_88._4_4_;
  auStack_40._0_4_ = 0xffffffff;
  auStack_40._8_4_ = uStack_80;
  auStack_40._12_4_ = iStack_7c;
  iStack_50 = local_98;
  uStack_4c = uStack_94;
  local_60 = '\0';
  cStack_5f = '\0';
  local_30._0_4_ = SUB84(plVar1,0);
  local_30._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_80 = 0xffffffff;
  iStack_7c = local_88._4_4_;
  iStack_90 = local_98;
  uStack_8c = uStack_94;
  local_78._8_4_ = (undefined4)local_30;
  local_78._0_8_ = auStack_40._8_8_;
  local_78._12_4_ = local_30._4_4_;
  bVar5 = local_88._4_4_ < *(int *)(param_1 + 0x78);
  local_68 = plVar1;
  local_58 = plVar1;
  local_30 = plVar1;
  local_88 = puStack_48;
  if (bVar5) {
    do {
      plVar2 = *(longlong **)(*plVar1 + 8 + (longlong)iStack_7c * 0x18);
      iVar12 = (int)plVar2[1];
      iVar10 = iVar12 + -1;
      if (-1 < iVar10) {
        lVar9 = (longlong)iVar10 * 8;
        lVar13 = lVar9;
        do {
          lVar3 = *plVar2;
          uVar8 = 0;
          lVar4 = *(longlong *)(lVar3 + lVar13);
          if (*(uint *)(lVar4 + 0x4c) != 0) {
            plVar7 = (longlong *)(lVar4 + 0x50);
            do {
              if (*plVar7 == param_3) goto LAB_141e4a50c;
              uVar8 = uVar8 + 1;
              plVar7 = plVar7 + 1;
            } while (uVar8 < *(uint *)(lVar4 + 0x4c));
          }
          if (*(longlong *)(lVar4 + 0xd0) == param_3) {
LAB_141e4a50c:
            iVar12 = (int)plVar2[1];
            iVar6 = (iVar12 - iVar10) + -1;
            if (0 < iVar6) {
              iVar6 = 1;
            }
            if (iVar6 != 0) {
              ::_guard_xfg_dispatch_icall_nop
                        ((void *)(lVar3 + lVar9),(void *)(lVar3 + (longlong)(iVar12 - iVar6) * 8),
                         (longlong)iVar6 << 3);
              iVar12 = (int)plVar2[1];
            }
            *(int *)(plVar2 + 1) = iVar12 + -1;
            FVulkanFramebuffer::Destroy(lVar4,param_2);
            if (lVar4 == *(longlong *)(param_1 + 0x1d0)) {
              *(undefined8 *)(param_1 + 0x1d0) = 0;
            }
            FVulkanFramebuffer::~FVulkanFramebuffer(lVar4);
            FMemory::operator_delete(lVar4,0xe8);
          }
          lVar9 = lVar9 + -8;
          lVar13 = lVar13 + -8;
          iVar10 = iVar10 + -1;
        } while (-1 < iVar10);
        iVar12 = (int)plVar2[1];
      }
      iVar10 = iStack_7c;
      if (iVar12 == 0) {
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(plVar2,0x10);
        TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
        ::Remove(local_78._8_8_,iVar10);
        local_60 = '\x01';
      }
      uStack_80 = uStack_80 & ~uStack_8c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
    } while (iStack_7c < (int)local_88[6]);
    if ((local_60 != '\0') && (cStack_5f != '\0')) {
      TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34));
    }
  }
  return;
}



// FUNCTION 141e4a640 FUN_141e4a640 body=138 status=ok
// SIG undefined FUN_141e4a640(void)

void FUN_141e4a640(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int local_res10 [6];
  undefined **local_18;
  undefined4 local_10;
  
  local_18 = &PTR_PTR_1464c0b40;
  local_10 = 0;
  lVar1 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(lVar1 + 0x38,local_res10,&local_18);
  plVar3 = (longlong *)0x0;
  if (local_res10[0] != -1) {
    plVar3 = (longlong *)((longlong)local_res10[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
  }
  plVar2 = plVar3 + 2;
  if (plVar3 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  if (*(char *)(*(longlong *)(*plVar2 + 0x48) + 0x28) == '\0') {
    FUN_1419f3850();
  }
  return;
}



// FUNCTION 141e4a6d0 PrepareForDispatch body=205 status=ok
// SIG undefined PrepareForDispatch(void)

void FVulkanPendingComputeState::PrepareForDispatch(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  iVar5 = (**(code **)(*DAT_146aafdc0 + 0x68))();
  if (iVar5 < 1) {
    cVar4 = FUN_141e34cb0(uVar2,uVar1,param_2);
  }
  else {
    cVar4 = FUN_141e347e0();
  }
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  (*DAT_146ab01c8)(uVar1,1,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10));
  if (cVar4 != '\0') {
    lVar3 = *(longlong *)(param_1 + 0x20);
    (*DAT_146ab0218)(uVar1,1,*(undefined8 *)
                              (*(longlong *)(*(longlong *)(lVar3 + 0x110) + 0x18) + 0x1e0),0,
                     *(undefined4 *)(lVar3 + 0x70),*(undefined8 *)(lVar3 + 0x68),
                     *(undefined4 *)(lVar3 + 0x88),*(undefined8 *)(lVar3 + 0x80));
  }
  return;
}



// FUNCTION 141e4a7a0 FUN_141e4a7a0 body=559 status=ok
// SIG undefined FUN_141e4a7a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e4a7a0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 auStack_278 [32];
  ulonglong *local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_240;
  longlong local_238 [32];
  ulonglong local_138 [32];
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  if (*(char *)(*(longlong *)(param_1 + 0x40) + 0x49) != '\0') {
    FVulkanPendingGfxState::UpdateInputAttachments
              (param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x2a8) + 0x4b0));
  }
  uVar1 = *(undefined8 *)(param_1 + 0x2a8);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  iVar5 = (**(code **)(*DAT_146aafdc0 + 0x68))();
  if (iVar5 < 1) {
    cVar4 = FUN_141e34eb0(uVar2,uVar1,param_2);
  }
  else {
    cVar4 = FUN_141e349e0();
  }
  FUN_141e49f10(param_1,param_2);
  if (cVar4 != '\0') {
    lVar3 = *(longlong *)(param_1 + 0x48);
    local_240 = *(undefined8 *)(lVar3 + 0x80);
    local_248 = *(undefined4 *)(lVar3 + 0x88);
    local_250 = *(undefined8 *)(lVar3 + 0x68);
    local_258 = (ulonglong *)CONCAT44(local_258._4_4_,*(undefined4 *)(lVar3 + 0x70));
    (*DAT_146ab0218)(*(undefined8 *)(param_2 + 0x40),0,
                     *(undefined8 *)
                      (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x210) + 0x18) + 0x18) +
                      0x1e0));
  }
  if ((*(char *)(param_1 + 0x2a0) != '\0') &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18), *(int *)(lVar3 + 0x298) != 0)) {
    iVar5 = 0;
    uVar9 = 0;
    local_38 = 0;
    if (*(int *)(lVar3 + 0x6c) != 0) {
      do {
        if (*(int *)(lVar3 + 0x80) != *(int *)(lVar3 + 0xac)) {
          lVar7 = *(longlong *)(lVar3 + 0xb8);
          if (*(longlong *)(lVar3 + 0xb8) == 0) {
            lVar7 = lVar3 + 0xb0;
          }
          uVar6 = *(uint *)(lVar7 + ((longlong)*(int *)(lVar3 + 0xc0) - 1U & (longlong)(int)uVar9) *
                                    4);
          if (uVar6 != 0xffffffff) {
            do {
              puVar8 = (uint *)((longlong)(int)uVar6 * 0x10 + *(longlong *)(lVar3 + 0x78));
              if (*puVar8 == uVar9) {
                if (uVar6 != 0xffffffff) goto LAB_141e4a930;
                break;
              }
              uVar6 = puVar8[2];
            } while (uVar6 != 0xffffffff);
          }
        }
        puVar8 = (uint *)0x0;
LAB_141e4a930:
        lVar7 = *(longlong *)(param_1 + ((ulonglong)puVar8[1] + 10) * 0x10);
        if (lVar7 != 0) {
          uVar6 = *(uint *)(param_1 + 8 + ((ulonglong)puVar8[1] + 10) * 0x10);
          local_238[iVar5] = lVar7;
          local_138[local_38] = (ulonglong)uVar6;
          iVar5 = local_38 + 1;
          local_38 = iVar5;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(lVar3 + 0x6c));
      if (0 < iVar5) {
        local_258 = local_138;
        (*DAT_146ab0228)(*(undefined8 *)(param_2 + 0x40),0,iVar5,local_238);
      }
    }
    *(undefined1 *)(param_1 + 0x2a0) = 0;
  }
  return;
}



// FUNCTION 141e4a9d0 FUN_141e4a9d0 body=576 status=ok
// SIG undefined FUN_141e4a9d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141e4a9d0(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 local_res8 [2];
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 *puStack_80;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 *puStack_68;
  undefined4 uStack_60;
  undefined4 local_5c;
  
  iVar5 = 0;
  local_98 = 0x3b9acde9;
  local_94 = 0;
  local_8c = 0;
  local_84 = 0;
  puStack_80 = (undefined8 *)0x0;
  local_74 = 0;
  uStack_60 = 0;
  local_5c = 0;
  local_res8[0] = 0;
  if (param_4 != 0) {
    local_res8[0] = *(undefined8 *)(param_4 + 0x18);
    puStack_80 = local_res8;
    local_8c = 0x100000000;
  }
  puVar1 = (undefined4 *)(param_1 + 0x20);
  uStack_78 = 1;
  uStack_70 = (undefined4)param_1;
  local_6c = (undefined4)((ulonglong)param_1 >> 0x20);
  puStack_68 = puVar1;
  if (*(char *)(param_1 + 0x80) != '\0') {
    iVar5 = FUN_141ed0a30();
  }
  if ((DAT_1464c954c != 0) && (0 < iVar5)) {
    QueryPerformanceCounter(&local_res18);
    dVar2 = ((double)CONCAT44(local_res18.s.HighPart,local_res18.s.LowPart) * DAT_1468b02f8 +
            16777216.0) - DAT_1468e2430;
    dVar3 = *(double *)(param_1 + 0x50) - dVar2;
    if (0.0 < dVar3) {
      QueryPerformanceCounter(&local_res20);
      FUN_1416b1810((float)dVar3);
      QueryPerformanceCounter(&local_res18);
      iVar6 = local_res18.s.LowPart - local_res20._0_4_;
      cVar4 = FUN_1415e13e0();
      if (cVar4 == '\0') {
        cVar4 = IsInActualRenderingThread();
        if (cVar4 != '\0') {
          DAT_146ac3ad0 = DAT_146ac3ad0 + iVar6;
          _DAT_146ac3af0 = _DAT_146ac3af0 + 1;
        }
      }
      else {
        _DAT_146ab6390 = _DAT_146ab6390 + iVar6;
      }
    }
    dVar3 = (double)iVar5 * 0.016666666666666666 + *(double *)(param_1 + 0x50);
    if (dVar3 <= dVar2) {
      dVar3 = dVar2;
    }
    *(double *)(param_1 + 0x50) = dVar3;
  }
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
  QueryPerformanceCounter(&local_res20);
  iVar5 = FUN_141e2a840(*param_3,&local_98);
  QueryPerformanceCounter(&local_res18);
  cVar4 = FUN_1415e13e0();
  if (cVar4 == '\0') {
    cVar4 = IsInActualRenderingThread();
    if (cVar4 != '\0') {
      DAT_146ac3ad0 = DAT_146ac3ad0 + (local_res18.s.LowPart - local_res20._0_4_);
      _DAT_146ac3af0 = _DAT_146ac3af0 + 1;
    }
  }
  else {
    _DAT_146ab6390 = _DAT_146ab6390 + (local_res18.s.LowPart - local_res20._0_4_);
  }
  *puVar1 = 0xffffffff;
  if (iVar5 == -0x3b9acdec) {
    return 0xffffffff;
  }
  if (iVar5 == -1000000000) {
    return 0xfffffffe;
  }
  if ((iVar5 != 0) && (iVar5 != 0x3b9acdeb)) {
    FUN_141e67d70(iVar5,"PresentResult",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp",
                  0x4c2);
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return 0;
}



// FUNCTION 141e4ac10 FUN_141e4ac10 body=752 status=ok
// SIG undefined FUN_141e4ac10(void)

void FUN_141e4ac10(undefined8 param_1,uint param_2,int param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  uint uVar9;
  longlong lVar10;
  uint *puVar11;
  longlong *plVar12;
  uint *puVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  longlong lVar16;
  uint *puVar17;
  uint uVar18;
  uint **ppuVar19;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [8];
  uint *local_68;
  undefined8 *local_60;
  uint *local_58;
  undefined8 *local_50;
  uint *local_48;
  undefined8 *local_40;
  
  lVar3 = DAT_146aafde0;
  cVar7 = FUN_1415ad720(&DAT_1468e2448);
  lVar16 = 4;
  if (((cVar7 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar8 = GetCurrentThreadId(), DVar8 != DAT_1468c21c0)) {
    lVar10 = 4;
  }
  else {
    lVar10 = 0;
  }
  lVar6 = DAT_146aafde0;
  if (*(int *)(lVar10 + lVar3) != 1) {
    cVar7 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar7 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar8 = GetCurrentThreadId(), DVar8 == DAT_1468c21c0)) {
      lVar16 = 0;
    }
    if (*(int *)(lVar16 + lVar6) != 2) {
      bVar5 = false;
      goto LAB_141e4acb8;
    }
  }
  bVar5 = true;
LAB_141e4acb8:
  puVar17 = (uint *)*param_4;
  puVar1 = puVar17 + (longlong)*(int *)(param_4 + 1) * 10;
  if (puVar17 == puVar1) {
    *(undefined8 **)(CONCAT44(param_5._4_4_,(uint)param_5) + 0xa0 + (longlong)param_3 * 8) = param_4
    ;
    return;
  }
  plVar4 = (longlong *)CONCAT44(param_5._4_4_,(uint)param_5);
LAB_141e4acf0:
  plVar14 = plVar4;
  if (!bVar5) {
    local_40 = &param_5;
    ppuVar19 = &local_48;
    puVar15 = local_70;
    param_5._0_4_ = param_2;
    local_48 = puVar17;
    goto LAB_141e4aea1;
  }
  uVar2 = *puVar17;
  if ((int)plVar4[0xb] != *(int *)((longlong)plVar4 + 0x84)) {
    plVar12 = (longlong *)plVar4[0x12];
    if ((longlong *)plVar4[0x12] == (longlong *)0x0) {
      plVar12 = plVar4 + 0x11;
    }
    uVar9 = *(uint *)((longlong)plVar12 +
                     ((longlong)(int)plVar4[0x13] - 1U & (longlong)(int)uVar2) * 4);
    if (uVar9 != 0xffffffff) {
      do {
        puVar13 = (uint *)((longlong)(int)uVar9 * 0x10 + plVar4[10]);
        if (*puVar13 == uVar2) {
          if (uVar9 != 0xffffffff) goto LAB_141e4ad61;
          break;
        }
        uVar9 = puVar13[2];
      } while (uVar9 != 0xffffffff);
    }
  }
  puVar13 = (uint *)0x0;
LAB_141e4ad61:
  puVar11 = puVar13 + 1;
  if (puVar13 == (uint *)0x0) {
    puVar11 = (uint *)0x0;
  }
  if (puVar11 == (uint *)0x0) {
    if (((short)puVar17[1] != -1) && ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34))) {
      plVar12 = (longlong *)plVar4[8];
      if ((longlong *)plVar4[8] == (longlong *)0x0) {
        plVar12 = plVar4 + 7;
      }
      uVar9 = *(uint *)((longlong)plVar12 +
                       ((longlong)(int)plVar4[9] - 1U & (longlong)(int)uVar2) * 4);
      if (uVar9 != 0xffffffff) {
        lVar3 = *plVar4;
        uVar18 = uVar9;
        do {
          puVar13 = (uint *)((longlong)(int)uVar18 * 0x10 + lVar3);
          if (*puVar13 == uVar2) {
            if (((uVar18 != 0xffffffff) && (puVar13 != (uint *)0x0)) &&
               (puVar13 != (uint *)0xfffffffffffffffc)) {
              uVar18 = 0;
              goto joined_r0x000141e4ae12;
            }
            break;
          }
          uVar18 = puVar13[2];
        } while (uVar18 != 0xffffffff);
      }
    }
    local_50 = &param_5;
    ppuVar19 = &local_58;
    puVar15 = local_74;
    param_5._0_4_ = param_2;
    local_58 = puVar17;
    goto LAB_141e4aea1;
  }
  *puVar11 = *puVar11 | param_2;
  goto LAB_141e4aeaf;
joined_r0x000141e4ae12:
  if (uVar9 == 0xffffffff) goto LAB_141e4ae50;
  lVar16 = (longlong)(int)uVar9;
  if (*(uint *)(lVar3 + lVar16 * 0x10) == uVar2) {
    if (uVar9 != 0xffffffff) {
      uVar18 = *(uint *)(lVar3 + 4 + lVar16 * 0x10);
      TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
      ::Remove(plVar4);
    }
    goto LAB_141e4ae50;
  }
  uVar9 = *(uint *)(lVar3 + 8 + lVar16 * 0x10);
  goto joined_r0x000141e4ae12;
LAB_141e4ae50:
  param_5._0_4_ = uVar18 | param_2;
  local_60 = &param_5;
  ppuVar19 = &local_68;
  puVar15 = local_78;
  plVar14 = plVar4 + 10;
  local_68 = puVar17;
LAB_141e4aea1:
  FUN_1417ab330(plVar14,puVar15,ppuVar19,0);
LAB_141e4aeaf:
  puVar17 = puVar17 + 10;
  if (puVar17 == puVar1) {
    plVar4[(longlong)param_3 + 0x14] = (longlong)param_4;
    return;
  }
  goto LAB_141e4acf0;
}



// FUNCTION 141e4af00 FUN_141e4af00 body=725 status=ok
// SIG undefined FUN_141e4af00(void)

void FUN_141e4af00(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  int local_b8;
  uint uStack_b4;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int iStack_90;
  uint uStack_8c;
  uint *local_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  longlong *local_70;
  undefined8 uStack_68;
  uint *puStack_60;
  uint uStack_58;
  uint uStack_54;
  undefined8 uStack_50;
  
  uStack_b4 = 1;
  plVar1 = (longlong *)(param_1 + 0xf0);
  local_b8 = 0;
  uVar2 = *(uint *)(param_1 + 0x118);
  local_88 = (uint *)(param_1 + 0x100);
  uStack_a4 = 0;
  iStack_a0 = 0;
  if (uVar2 != 0) {
    puVar14 = *(uint **)(param_1 + 0x110);
    if (*(uint **)(param_1 + 0x110) == (uint *)0x0) {
      puVar14 = local_88;
    }
    uVar3 = *puVar14;
    iStack_a0 = 0;
    local_b8 = 0;
    while (uVar3 == 0) {
      lVar8 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar11 = local_b8 + 1;
      bVar16 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar11;
      if (bVar16) goto LAB_141e4afca;
      uVar3 = puVar14[lVar8 + 1];
    }
    uStack_b4 = -uVar3 & uVar3;
    iVar11 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_a4 = (iStack_a0 - iVar11) + 0x1f;
    if ((int)uVar2 < (int)uStack_a4) {
LAB_141e4afca:
      uStack_a4 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x118);
  uStack_80 = 0xffffffff;
  uStack_7c = uStack_a4;
  local_78 = CONCAT44(uStack_9c,iStack_a0);
  uStack_68 = CONCAT44(uStack_b4,local_b8);
  uVar13 = uVar3 & 0xffffffe0;
  iStack_90 = local_b8;
  uStack_8c = uStack_b4;
  local_70 = plVar1;
  puStack_60 = local_88;
  uStack_50 = local_78;
  uStack_58 = uStack_80;
  uStack_54 = uStack_7c;
  uStack_a4 = uVar3;
  if (uVar3 != uVar2) {
    puVar14 = *(uint **)(param_1 + 0x110);
    if (*(uint **)(param_1 + 0x110) == (uint *)0x0) {
      puVar14 = local_88;
    }
    uVar7 = puVar14[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar11 = (int)uVar3 >> 5;
    while (uVar7 == 0) {
      uVar13 = uVar13 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
      goto LAB_141e4b092;
      uVar7 = puVar14[(longlong)iVar11 + 1];
      iVar11 = iVar11 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar11 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_a4 = (uVar13 - iVar11) + 0x1f;
    if ((int)uVar2 < (int)uStack_a4) {
LAB_141e4b092:
      uStack_a4 = uVar2;
    }
  }
  do {
    if ((uStack_7c == uStack_a4) && (local_88 == (uint *)(param_1 + 0x100))) {
      TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
      ::Empty(plVar1,0);
      return;
    }
    lVar8 = *(longlong *)(param_1 + 0x158);
    plVar12 = (longlong *)(lVar8 + 0x18e0);
    lVar4 = *(longlong *)(*plVar1 + 8 + (longlong)(int)uStack_7c * 0x18);
    lVar5 = (longlong)*(int *)(lVar8 + 0x18e8);
    if (*(int *)(lVar8 + 0x18e8) != 0) {
      iVar15 = 0;
      lVar9 = 0;
      bVar16 = *(longlong *)*plVar12 != lVar4;
      iVar11 = 0;
      do {
        lVar9 = lVar9 + 1;
        iVar10 = iVar11 + 1;
        if (lVar9 < lVar5) {
          plVar6 = (longlong *)(*plVar12 + lVar9 * 8);
          do {
            if (bVar16 != (*plVar6 != lVar4)) break;
            iVar10 = iVar10 + 1;
            lVar9 = lVar9 + 1;
            plVar6 = plVar6 + 1;
          } while (lVar9 < lVar5);
        }
        if (bVar16 != false) {
          if (iVar15 != iVar11) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar12 + (longlong)iVar15 * 8),
                       (void *)(*plVar12 + (longlong)iVar11 * 8),(longlong)(iVar10 - iVar11) << 3);
          }
          iVar15 = iVar15 + (iVar10 - iVar11);
        }
        bVar16 = (bool)(bVar16 ^ 1);
        iVar11 = iVar10;
      } while (lVar9 < lVar5);
      *(int *)(lVar8 + 0x18e8) = iVar15;
    }
    FUN_141e254e0(*(longlong *)(param_1 + 0x158) + 0x3b0,0xb,lVar4);
    uStack_80 = uStack_80 & ~uStack_8c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
  } while( true );
}



// FUNCTION 141e4b1e0 PushNewPool body=503 status=ok
// SIG undefined PushNewPool(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FVulkanTypedDescriptorPoolSet::PushNewPool(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 local_ac;
  int local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined8 uStack_98;
  int local_90 [22];
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  bVar7 = 2;
  if (*(uint *)(param_1 + 2) < 3) {
    bVar7 = (byte)(int)param_1[2];
  }
  iVar12 = 0x20 << (bVar7 & 0x1f);
  plVar5 = (longlong *)operator_new(0x28);
  puVar8 = (undefined8 *)0x0;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    lVar2 = *param_1;
    lVar3 = param_1[1];
    plVar5[3] = lVar3;
    *plVar5 = lVar2;
    *(undefined8 *)((longlong)plVar5 + 0xc) = 0;
    plVar5[4] = 0;
    *(int *)(plVar5 + 1) = iVar12;
    local_38 = 0;
    local_34 = 0;
    puVar6 = puVar8;
    puVar10 = puVar8;
    puVar11 = puVar8;
    do {
      iVar9 = (int)puVar10;
      iVar1 = *(int *)(lVar3 + (longlong)iVar9 * 4);
      if (iVar1 != 0) {
        iVar4 = (int)puVar11;
        local_38 = iVar4 + 1;
        if ((int)puVar6 < (int)local_38) {
          TArray<VkDescriptorPoolSize,TFixedAllocator<11>_>::ResizeGrow(local_90,puVar11);
        }
        local_90[(longlong)iVar4 * 2] = iVar9;
        local_90[(longlong)iVar4 * 2 + 1] = iVar1 * iVar12;
        puVar6 = (undefined8 *)(ulonglong)local_34;
        puVar11 = (undefined8 *)(ulonglong)local_38;
      }
      puVar10 = (undefined8 *)(ulonglong)(iVar9 + 1U);
    } while (iVar9 + 1U < 0xb);
    local_b8 = 0x21;
    local_9c = 0;
    local_b4 = 0;
    local_ac = 0;
    uStack_98 = local_90;
    _local_a4 = CONCAT44((int)puVar11,iVar12);
    iVar12 = (*DAT_146ab0130)(*(undefined8 *)(*plVar5 + 8),&local_b8,0,plVar5 + 4);
    if (iVar12 != 0) {
      FUN_141e67d70(iVar12,
                    "VulkanRHI::vkCreateDescriptorPool(Device->GetInstanceHandle(), &PoolInfo, VULKAN_CPU_ALLOCATOR, &DescriptorPool)"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                    ,0x34);
    }
  }
  lVar2 = param_1[4];
  puVar6 = (undefined8 *)operator_new(0x10);
  if (lVar2 == 0) {
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = plVar5;
      puVar6[1] = 0;
      puVar8 = puVar6;
    }
    param_1[3] = (longlong)puVar8;
  }
  else {
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = plVar5;
      puVar6[1] = 0;
      puVar8 = puVar6;
    }
    *(undefined8 **)(param_1[4] + 8) = puVar8;
    puVar8 = *(undefined8 **)(param_1[4] + 8);
  }
  param_1[4] = (longlong)puVar8;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return plVar5;
}



// FUNCTION 141e4b3e0 RHIAliasTextureResources body=76 status=ok
// SIG undefined RHIAliasTextureResources(void)

void FVulkanDynamicRHI::RHIAliasTextureResources
               (undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    lVar1 = (**(code **)(*param_2 + 0x48))(param_2);
    lVar2 = (**(code **)(*param_3 + 0x48))(param_3);
    if ((lVar1 != 0) && (lVar2 != 0)) {
      FVulkanTextureBase::AliasTextureResources(lVar1,lVar2);
    }
  }
  return;
}



// FUNCTION 141e4b450 FUN_141e4b450 body=37 status=ok
// SIG undefined FUN_141e4b450(void)

void FUN_141e4b450(longlong param_1)

{
  RHIPrivateBeginFrame();
  DAT_146aaf9a4 = DAT_146aaf9a4 + 1;
  FUN_141e5b4e0(param_1 + 0x510);
  return;
}



// FUNCTION 141e4b480 FUN_141e4b480 body=1066 status=ok
// SIG undefined FUN_141e4b480(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e4b480(longlong param_1,undefined8 *param_2,wchar_t *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  char cVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  wchar_t *pwVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined1 auStack_6a8 [32];
  undefined8 *local_688;
  undefined4 *local_680;
  ulonglong local_678;
  undefined8 local_670;
  undefined4 local_668;
  undefined8 local_660;
  undefined4 local_658;
  undefined4 uStack_654;
  uint uStack_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 local_644;
  undefined8 local_640;
  undefined1 local_638 [656];
  undefined1 local_3a8 [864];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_6a8;
  lVar18 = *(longlong *)(param_1 + 0x2d8);
  if (*(longlong *)(lVar18 + 0x78) != 0) {
    FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar18,0,0);
  }
  lVar18 = *(longlong *)(lVar18 + 0x70);
  uVar15 = 0;
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    (*DAT_146ab0318)(*(undefined8 *)(lVar18 + 0x40));
    *(undefined1 *)(lVar18 + 0x2c) = 1;
    *(undefined8 *)(param_1 + 0x4a8) = 0;
  }
  *(undefined1 *)(param_1 + 0x4a0) = 0;
  if (DAT_146aaf890 == 0) {
    if (*(char *)(param_1 + 0x198) == '\0') goto LAB_141e4b553;
    FUN_141e29600(param_1);
    *(undefined1 *)(param_1 + 0x198) = 0;
  }
  else {
    FVulkanCommandBufferManager::SubmitActiveCmdBuffer(*(undefined8 *)(param_1 + 0x2d8),0);
    FVulkanCommandBufferManager::PrepareForNewActiveCommandBuffer(*(undefined8 *)(param_1 + 0x2d8));
  }
  lVar18 = *(longlong *)(param_1 + 0x2d8);
  if (*(longlong *)(lVar18 + 0x78) != 0) {
    FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar18,0,0);
  }
  lVar18 = *(longlong *)(lVar18 + 0x70);
LAB_141e4b553:
  lVar14 = 2;
  puVar8 = param_2;
  puVar9 = (undefined8 *)(param_1 + 0x10);
  do {
    puVar13 = puVar9;
    puVar11 = puVar8;
    uVar12 = puVar11[1];
    *puVar13 = *puVar11;
    puVar13[1] = uVar12;
    uVar12 = puVar11[3];
    puVar13[2] = puVar11[2];
    puVar13[3] = uVar12;
    uVar12 = puVar11[5];
    puVar13[4] = puVar11[4];
    puVar13[5] = uVar12;
    uVar12 = puVar11[7];
    puVar13[6] = puVar11[6];
    puVar13[7] = uVar12;
    uVar12 = puVar11[9];
    puVar13[8] = puVar11[8];
    puVar13[9] = uVar12;
    uVar12 = puVar11[0xb];
    puVar13[10] = puVar11[10];
    puVar13[0xb] = uVar12;
    uVar12 = puVar11[0xd];
    puVar13[0xc] = puVar11[0xc];
    puVar13[0xd] = uVar12;
    uVar12 = puVar11[0xf];
    puVar13[0xe] = puVar11[0xe];
    puVar13[0xf] = uVar12;
    lVar14 = lVar14 + -1;
    puVar8 = puVar11 + 0x10;
    puVar9 = puVar13 + 0x10;
  } while (lVar14 != 0);
  uVar12 = puVar11[0x11];
  puVar13[0x10] = puVar11[0x10];
  puVar13[0x11] = uVar12;
  pwVar16 = L"<unnamed RenderPass>";
  if (param_3 != (wchar_t *)0x0) {
    pwVar16 = param_3;
  }
  uVar12 = puVar11[0x13];
  puVar13[0x12] = puVar11[0x12];
  puVar13[0x13] = uVar12;
  uVar12 = puVar11[0x15];
  puVar13[0x14] = puVar11[0x14];
  puVar13[0x15] = uVar12;
  uVar12 = puVar11[0x17];
  puVar13[0x16] = puVar11[0x16];
  puVar13[0x17] = uVar12;
  uVar5 = *(undefined4 *)((longlong)puVar11 + 0xc4);
  uVar6 = *(undefined4 *)(puVar11 + 0x19);
  uVar7 = *(undefined4 *)((longlong)puVar11 + 0xcc);
  *(undefined4 *)(puVar13 + 0x18) = *(undefined4 *)(puVar11 + 0x18);
  *(undefined4 *)((longlong)puVar13 + 0xc4) = uVar5;
  *(undefined4 *)(puVar13 + 0x19) = uVar6;
  *(undefined4 *)((longlong)puVar13 + 0xcc) = uVar7;
  uVar5 = *(undefined4 *)((longlong)puVar11 + 0xd4);
  uVar6 = *(undefined4 *)(puVar11 + 0x1b);
  uVar7 = *(undefined4 *)((longlong)puVar11 + 0xdc);
  *(undefined4 *)(puVar13 + 0x1a) = *(undefined4 *)(puVar11 + 0x1a);
  *(undefined4 *)((longlong)puVar13 + 0xd4) = uVar5;
  *(undefined4 *)(puVar13 + 0x1b) = uVar6;
  *(undefined4 *)((longlong)puVar13 + 0xdc) = uVar7;
  uVar5 = DAT_1464aa73c;
  if (*(char *)(param_1 + 0x519) != '\0') {
    lVar14 = *(longlong *)(param_1 + 0x2d8);
    uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0x188) + 0x1440);
    if (*(longlong *)(lVar14 + 0x78) != 0) {
      FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar14,0,0);
    }
    FUN_141e62790(param_1 + 0x510,*(undefined8 *)(*(longlong *)(lVar14 + 0x70) + 0x40),uVar12,
                  pwVar16);
  }
  if (*(longlong *)(param_1 + 0x180) == 0) {
    (**(code **)(*(longlong *)(param_1 + 0x510) + 0x18))
              ((longlong *)(param_1 + 0x510),pwVar16,uVar5);
  }
  if (*(char *)((longlong)param_2 + 0x10c) != '\0') {
    lVar14 = FUN_141e40630(*(undefined8 *)(param_1 + 0x188));
    *(longlong *)(param_1 + 0x4e0) = lVar14;
    uVar5 = DAT_1464aaa90;
    _guard_xfg_dispatch_icall_nop
              (*(void **)(lVar14 + 0x58),0,(ulonglong)(uint)(*(int *)(lVar14 + 100) << 3));
    *(undefined4 *)(lVar14 + 0x40) = 0;
    *(undefined4 *)(lVar14 + 0x78) = uVar5;
    (*DAT_146ab0050)(*(undefined8 *)(*(longlong *)(lVar14 + 8) + 8),*(undefined8 *)(lVar14 + 0x18));
    (*DAT_146ab02e8)(*(undefined8 *)(lVar18 + 0x40),*(undefined8 *)(lVar14 + 0x10),0,
                     *(undefined4 *)(lVar14 + 0x20));
    cVar10 = IsRHIDeviceIntel();
    if (cVar10 != '\0') {
      local_660 = 0;
      local_668 = 0;
      uStack_64c = 0;
      local_670 = 0;
      uStack_654 = 0;
      uStack_650 = 0;
      local_680 = &local_658;
      local_678 = local_678 & 0xffffffff00000000;
      uStack_648 = 0x1000;
      local_688 = (undefined8 *)CONCAT44(local_688._4_4_,1);
      local_658 = 0x2e;
      local_644 = 0x2000;
      (*DAT_146ab02d0)(*(undefined8 *)(lVar18 + 0x40),0x1000,0x4000,0);
    }
    (*DAT_146ab02b8)(*(undefined8 *)(lVar18 + 0x40),*(undefined8 *)(lVar14 + 0x18),0x2000);
    *(undefined4 *)(lVar14 + 0x38) = 1;
  }
  FUN_141e37de0(local_3a8,*(undefined8 *)(param_1 + 0x188),param_2);
  uVar12 = FUN_141e48d10(param_1 + 0x2e0,*(undefined8 *)(param_1 + 0x188),local_3a8);
  local_640 = uVar12;
  FUN_1404999a0(local_638);
  FUN_141ebe4d0(param_2,local_638);
  plVar1 = (longlong *)(param_1 + 0x4e8);
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x4f4)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar1,0);
  }
  uVar3 = *(uint *)((longlong)param_2 + 0x114);
  if (uVar3 != 0) {
    plVar17 = param_2 + 0x23;
    do {
      lVar14 = *plVar17;
      if (lVar14 != 0) {
        iVar4 = *(int *)(param_1 + 0x4f0);
        local_658 = (undefined4)lVar14;
        uStack_654 = (undefined4)((ulonglong)lVar14 >> 0x20);
        *(int *)(param_1 + 0x4f0) = iVar4 + 1;
        uStack_650 = uVar15;
        if (*(int *)(param_1 + 0x4f4) < iVar4 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar4);
        }
        puVar2 = (undefined4 *)(*plVar1 + (longlong)iVar4 * 0x10);
        *puVar2 = local_658;
        puVar2[1] = uStack_654;
        puVar2[2] = uStack_650;
        puVar2[3] = uStack_64c;
      }
      uVar15 = uVar15 + 1;
      plVar17 = plVar17 + 1;
      uVar12 = local_640;
    } while (uVar15 < uVar3);
  }
  local_688 = (undefined8 *)uVar12;
  local_670 = FTransitionAndLayoutManager::GetOrCreateFramebuffer
                        (param_1 + 0x2e0,*(undefined8 *)(param_1 + 0x188),local_638,local_3a8);
  local_680 = (undefined4 *)local_3a8;
  local_688 = param_2;
  local_678 = uVar12;
  FUN_141e417a0(param_1 + 0x2e0,param_1,*(undefined8 *)(param_1 + 0x188),lVar18);
  FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_638);
  return;
}



// FUNCTION 141e4b8b0 FUN_141e4b8b0 body=263 status=ok
// SIG undefined FUN_141e4b8b0(void)

void FUN_141e4b8b0(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  
  if ((*(int *)(param_2 + 0x18) == 1) && (*(longlong *)(param_1 + 0x4e0) != 0)) {
    if (*(int *)(param_2 + 0x38) == 2) {
      uVar2 = *(uint *)(param_2 + 0x28);
      lVar3 = *(longlong *)(param_2 + 0x30);
      puVar1 = (ulonglong *)(*(longlong *)(lVar3 + 0x58) + (ulonglong)(uVar2 >> 6) * 8);
      *puVar1 = *puVar1 & ~(1L << (uVar2 & 0x3f));
      *(undefined8 *)(*(longlong *)(lVar3 + 0x48) + (longlong)(int)uVar2 * 8) = 0;
      *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
    }
    *(undefined4 *)(param_2 + 0x38) = 1;
    lVar3 = *(longlong *)(param_1 + 0x4e0);
    uVar2 = *(uint *)(lVar3 + 0x40);
    puVar1 = (ulonglong *)(*(longlong *)(lVar3 + 0x58) + (ulonglong)(uVar2 >> 6) * 8);
    *puVar1 = *puVar1 | 1L << (uVar2 & 0x3f);
    *(int *)(lVar3 + 0x40) = *(int *)(lVar3 + 0x40) + 1;
    *(longlong *)(*(longlong *)(lVar3 + 0x48) + (longlong)(int)uVar2 * 8) = param_2;
    *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0x4e0);
    *(uint *)(param_2 + 0x28) = uVar2;
    lVar3 = *(longlong *)(param_1 + 0x2d8);
    if (*(longlong *)(lVar3 + 0x78) != 0) {
      FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar3,0,0);
    }
    (*DAT_146ab02d8)(*(undefined8 *)(*(longlong *)(lVar3 + 0x70) + 0x40),
                     *(undefined8 *)(*(longlong *)(param_1 + 0x4e0) + 0x10),uVar2,1);
  }
  return;
}



// FUNCTION 141e4b9c0 FUN_141e4b9c0 body=186 status=ok
// SIG undefined FUN_141e4b9c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141e4b9c0(longlong param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                  float *param_5)

{
  longlong *plVar1;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int iStack_24;
  undefined4 local_20;
  int local_1c;
  int iStack_18;
  undefined4 local_14;
  
  local_40 = 1;
  local_38 = 1;
  local_2c = 1;
  local_48 = (int)(param_4[2] - *param_4);
  local_44 = (int)(param_4[3] - param_4[1]);
  local_30 = 0;
  local_20 = DAT_1468b5cb0;
  local_14 = DAT_1468b5cb0;
  _local_28 = CONCAT44((int)param_4[1],(int)*param_4);
  _local_1c = CONCAT44((int)param_5[1],(int)*param_5);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x18b0);
  (**(code **)(*plVar1 + 0x2f8))(plVar1,param_2,param_3,&local_48);
  return;
}



// FUNCTION 141e4ba80 FUN_141e4ba80 body=714 status=ok
// SIG undefined FUN_141e4ba80(void)

void FUN_141e4ba80(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *local_res10;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    local_res10 = param_2;
    FUN_141e50040(param_1,0,&local_res10,1);
    plVar9 = local_res10;
    lVar1 = (**(code **)(*local_res10 + 8))(local_res10);
    lVar2 = (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar3 = (**(code **)(*plVar9 + 0x18))(plVar9);
    local_res10 = (longlong *)(**(code **)(*plVar9 + 0x20))(plVar9);
    lVar4 = (**(code **)(*param_3 + 8))(param_3);
    lVar5 = (**(code **)(*param_3 + 0x10))(param_3);
    lVar6 = (**(code **)(*param_3 + 0x18))(param_3);
    lVar7 = (**(code **)(*param_3 + 0x20))(param_3);
    lVar8 = *(longlong *)(param_1 + 0x2d8);
    if (*(longlong *)(lVar8 + 0x78) != 0) {
      FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar8,0,0);
    }
    lVar8 = *(longlong *)(lVar8 + 0x70);
    if (*(char *)(lVar8 + 0x2c) == '\x02') {
      (*DAT_146ab0318)(*(undefined8 *)(lVar8 + 0x40));
      *(undefined1 *)(lVar8 + 0x2c) = 1;
      *(undefined8 *)(param_1 + 0x4a8) = 0;
      if (DAT_146aaf890 != 0) {
        FVulkanCommandBufferManager::SubmitActiveCmdBuffer(*(undefined8 *)(param_1 + 0x2d8),0);
        FVulkanCommandBufferManager::PrepareForNewActiveCommandBuffer
                  (*(undefined8 *)(param_1 + 0x2d8));
        lVar8 = FVulkanCommandBufferManager::GetActiveCmdBuffer(*(undefined8 *)(param_1 + 0x2d8));
      }
    }
    if ((lVar1 == 0) || (lVar4 == 0)) {
      if ((local_res10 == (longlong *)0x0) || (lVar7 == 0)) {
        if ((lVar1 == 0) || (lVar7 == 0)) {
          if ((lVar3 == 0) || (lVar6 == 0)) {
            if (lVar2 == 0) {
              return;
            }
            if (lVar5 == 0) {
              return;
            }
            if (*(longlong *)(lVar2 + 0x88) == *(longlong *)(lVar5 + 0x88)) {
              return;
            }
            uVar11 = *(undefined4 *)(lVar2 + 0x68);
            lVar4 = lVar5 + 0x78;
            plVar9 = (longlong *)(lVar2 + 0x78);
            uVar10 = *(undefined4 *)(lVar5 + 0x68);
          }
          else {
            if (*(longlong *)(lVar3 + 0x88) == *(longlong *)(lVar6 + 0x88)) {
              return;
            }
            lVar4 = lVar6 + 0x78;
            uVar11 = 1;
            plVar9 = (longlong *)(lVar3 + 0x78);
            uVar10 = 1;
          }
        }
        else {
          if (*(longlong *)(lVar1 + 0x80) == *(longlong *)(lVar7 + 0x80)) {
            return;
          }
          lVar4 = lVar7 + 0x70;
          uVar11 = 6;
          plVar9 = (longlong *)(lVar1 + 0x70);
          uVar10 = 1;
        }
      }
      else {
        if (local_res10[0x10] == *(longlong *)(lVar7 + 0x80)) {
          return;
        }
        lVar4 = lVar7 + 0x70;
        uVar11 = 6;
        plVar9 = local_res10 + 0xe;
        uVar10 = 6;
      }
    }
    else {
      if (*(longlong *)(lVar1 + 0x80) == *(longlong *)(lVar4 + 0x80)) {
        return;
      }
      lVar4 = lVar4 + 0x70;
      uVar11 = 1;
      plVar9 = (longlong *)(lVar1 + 0x70);
      uVar10 = 1;
    }
    <lambda_24908703bb04cd999d453686f6064f77>::operator()
              (&local_res10,param_1 + 0x2e0,lVar8,plVar9,lVar4,uVar10,uVar11,param_4);
  }
  return;
}



// FUNCTION 141e4bd50 RHICreateBlendState body=68 status=ok
// SIG undefined RHICreateBlendState(void)

longlong *
FVulkanDynamicRHI::RHICreateBlendState(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = operator_new(0x158);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_141e363a0(lVar1,param_3);
  }
  *param_2 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e4bda0 RHICreateBoundShaderState body=325 status=ok
// SIG undefined RHICreateBoundShaderState(void)

longlong *
FVulkanDynamicRHI::RHICreateBoundShaderState
          (undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  longlong local_38 [2];
  
  GetCachedBoundShaderState_Threadsafe(local_38,param_3,param_4,param_7,param_5,param_6,param_8);
  if (local_38[0] == 0) {
    puVar1 = (undefined8 *)operator_new(0x58);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      *puVar1 = &PTR_FUN_143f3ece8;
      *(undefined4 *)(puVar1 + 1) = 0;
      *puVar1 = &PTR__scalar_deleting_destructor__144ea4408;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      *(undefined2 *)(puVar1 + 2) = 0x100;
      FCachedBoundShaderStateLink::FCachedBoundShaderStateLink
                (puVar1 + 3,param_3,param_4,param_7,param_5,param_6,param_8,puVar1,0);
      FCachedBoundShaderStateLink_Threadsafe::AddToCache(puVar1 + 3);
    }
    *param_2 = (longlong)puVar1;
    if (puVar1 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
      UNLOCK();
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_38);
  }
  else {
    *param_2 = local_38[0];
    local_38[0] = 0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_38);
  }
  return param_2;
}



// FUNCTION 141e4bef0 FUN_141e4bef0 body=52 status=ok
// SIG undefined FUN_141e4bef0(void)

longlong * FUN_141e4bef0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FVulkanShaderFactory::CreateShader<TVulkanBaseShader<FRHIComputeShader,5,32>_>
                    (*(longlong *)(param_1 + 0x70) + 0x470,param_3);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e4bf30 RHICreateDepthStencilState body=262 status=ok
// SIG undefined RHICreateDepthStencilState(void)

undefined8 *
FVulkanDynamicRHI::RHICreateDepthStencilState
          (undefined8 param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar1 + 1) = 0;
    *puVar1 = &PTR_FUN_144ea4338;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    *(undefined2 *)(puVar1 + 2) = 0x100;
    puVar1[3] = 0x7000101;
    *(undefined4 *)(puVar1 + 4) = 7;
    *(undefined2 *)((longlong)puVar1 + 0x24) = 0xffff;
    *(undefined1 *)(puVar1 + 3) = *param_3;
    *(undefined1 *)((longlong)puVar1 + 0x19) = param_3[1];
    *(undefined1 *)((longlong)puVar1 + 0x1a) = param_3[2];
    *(undefined1 *)((longlong)puVar1 + 0x1b) = param_3[3];
    *(undefined1 *)((longlong)puVar1 + 0x1c) = param_3[4];
    *(undefined1 *)((longlong)puVar1 + 0x1d) = param_3[5];
    *(undefined1 *)((longlong)puVar1 + 0x1e) = param_3[6];
    *(undefined1 *)((longlong)puVar1 + 0x1f) = param_3[7];
    *(undefined1 *)(puVar1 + 4) = param_3[8];
    *(undefined1 *)((longlong)puVar1 + 0x21) = param_3[9];
    *(undefined1 *)((longlong)puVar1 + 0x22) = param_3[10];
    *(undefined1 *)((longlong)puVar1 + 0x23) = param_3[0xb];
    *(undefined1 *)((longlong)puVar1 + 0x24) = param_3[0xc];
    *(undefined1 *)((longlong)puVar1 + 0x25) = param_3[0xd];
  }
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e4c040 FUN_141e4c040 body=366 status=ok
// SIG undefined FUN_141e4c040(void)

undefined8 * FUN_141e4c040(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_res18 [2];
  undefined8 *local_48;
  undefined8 **local_40;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  lVar2 = *(longlong *)(param_1 + 0x70);
  uVar3 = FCrc::MemCrc32(*param_3,uVar1,0);
  local_res10 = CONCAT44(uVar3,uVar1);
  puVar4 = (undefined8 *)
           FVulkanShaderFactory::LookupShader<TVulkanBaseShader<FRHIDomainShader,2,4>_>
                     (lVar2 + 0x470);
  if (puVar4 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(400);
    puVar4 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_143f3ece8;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *(undefined2 *)(puVar5 + 2) = 0x100;
      puVar5[3] = 0;
      puVar5[4] = 0;
      *(undefined4 *)(puVar5 + 5) = 0;
      *puVar5 = &PTR_FUN_144d838d0;
      FVulkanShader::FVulkanShader(puVar5 + 6,lVar2,2,4);
      *puVar5 = &PTR__scalar_deleting_destructor__144ea4410;
      puVar5[6] = &PTR_LAB_144ea4418;
      puVar4 = puVar5;
    }
    FVulkanShader::Setup(puVar4 + 6,param_3,local_res10);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x470));
    local_48 = &local_res10;
    local_res18[0] = puVar4 + 6;
    if (puVar4 == (undefined8 *)0x0) {
      local_res18[0] = (undefined8 *)0x0;
    }
    local_40 = local_res18;
    FUN_141e32e00(lVar2 + 0x518,local_res8,&local_48,0);
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x470));
  }
  *param_2 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e4c1b0 FUN_141e4c1b0 body=366 status=ok
// SIG undefined FUN_141e4c1b0(void)

undefined8 * FUN_141e4c1b0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_res18 [2];
  undefined8 *local_48;
  undefined8 **local_40;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  lVar2 = *(longlong *)(param_1 + 0x70);
  uVar3 = FCrc::MemCrc32(*param_3,uVar1,0);
  local_res10 = CONCAT44(uVar3,uVar1);
  puVar4 = (undefined8 *)
           FVulkanShaderFactory::LookupShader<TVulkanBaseShader<FRHIGeometryShader,4,8>_>
                     (lVar2 + 0x470);
  if (puVar4 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(400);
    puVar4 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_143f3ece8;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *(undefined2 *)(puVar5 + 2) = 0x100;
      puVar5[3] = 0;
      puVar5[4] = 0;
      *(undefined4 *)(puVar5 + 5) = 0;
      *puVar5 = &PTR_FUN_144d838d0;
      FVulkanShader::FVulkanShader(puVar5 + 6,lVar2,4,8);
      *puVar5 = &PTR__scalar_deleting_destructor__144ea4410;
      puVar5[6] = &PTR_LAB_144ea4418;
      puVar4 = puVar5;
    }
    FVulkanShader::Setup(puVar4 + 6,param_3,local_res10);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x470));
    local_48 = &local_res10;
    local_res18[0] = puVar4 + 6;
    if (puVar4 == (undefined8 *)0x0) {
      local_res18[0] = (undefined8 *)0x0;
    }
    local_40 = local_res18;
    FUN_141e32e00(lVar2 + 0x5b8,local_res8,&local_48,0);
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x470));
  }
  *param_2 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e4c320 FUN_141e4c320 body=662 status=ok
// SIG undefined FUN_141e4c320(void)

longlong * FUN_141e4c320(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar2;
  BOOL BVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int local_res8 [4];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108 [2];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined **local_e8 [18];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  
  local_128 = 0;
  local_120 = 0;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x1930);
  local_res20 = 0;
  local_108[0] = param_3;
  FArchive::FArchive(local_e8);
  local_58 = 0;
  local_e8[0] = &PTR_FUN_143f4a100;
  local_50 = &local_128;
  local_48 = 0;
  FArchive::SetIsSaving(local_e8,1);
  FArchive::SetIsPersistent(local_e8,0);
  uVar2 = local_120._4_4_;
  local_120 = (ulonglong)local_120._4_4_ << 0x20;
  if ((int)uVar2 < 0x100) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_128,0x100);
  }
  FUN_141e3eec0(local_108,local_e8);
  local_res8[0] = FCrc::MemCrc32(local_128,local_120 & 0xffffffff,0);
  FArchive::~FArchive(local_e8);
  if (local_128 != 0) {
    FMemory::Free();
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar6 + 0x90);
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (*(int *)(lVar6 + 0x48) != *(int *)(lVar6 + 0x74)) {
    lVar5 = *(longlong *)(lVar6 + 0x80);
    if (*(longlong *)(lVar6 + 0x80) == 0) {
      lVar5 = lVar6 + 0x78;
    }
    iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(lVar6 + 0x88) - 1U & (longlong)local_res8[0]) * 4);
    if (iVar4 != -1) {
      do {
        plVar7 = (longlong *)(*(longlong *)(lVar6 + 0x40) + (longlong)iVar4 * 0x18);
        if (*(int *)(*(longlong *)(lVar6 + 0x40) + (longlong)iVar4 * 0x18) == local_res8[0]) {
          if (iVar4 != -1) goto LAB_141e4c483;
          break;
        }
        iVar4 = (int)plVar7[2];
      } while (iVar4 != -1);
    }
  }
  plVar7 = (longlong *)0x0;
LAB_141e4c483:
  plVar8 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  LeaveCriticalSection(lpCriticalSection);
  if ((plVar8 == (longlong *)0x0) || (lVar6 = *plVar8, lVar6 == 0)) {
    local_res18[0] = 0;
    local_118 = 0;
    uStack_110 = (longlong *)0x0;
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafc28);
    if (BVar3 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafc28);
    }
    lVar6 = FUN_141e47450(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x1930),param_3,local_res8
                          ,&local_118,local_res18);
    if (lVar6 == 0) {
      local_f8 = (undefined4)local_118;
      uStack_f4 = local_118._4_4_;
      uStack_f0 = (undefined4)uStack_110;
      uStack_ec = uStack_110._4_4_;
      lVar6 = FUN_141e428b0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x1930),param_3,
                            local_res8[0],&local_f8,local_res18[0]);
      *param_2 = lVar6;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aafc28);
    }
    else {
      *param_2 = lVar6;
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aafc28);
      plVar7 = uStack_110;
      if (uStack_110 != (longlong *)0x0) {
        LOCK();
        plVar8 = uStack_110 + 1;
        lVar6 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*uStack_110)(uStack_110);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*uStack_110 + 8))(uStack_110,1);
          }
        }
      }
    }
  }
  else {
    *param_2 = lVar6;
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e4c5c0 FUN_141e4c5c0 body=366 status=ok
// SIG undefined FUN_141e4c5c0(void)

undefined8 * FUN_141e4c5c0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_res18 [2];
  undefined8 *local_48;
  undefined8 **local_40;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  lVar2 = *(longlong *)(param_1 + 0x70);
  uVar3 = FCrc::MemCrc32(*param_3,uVar1,0);
  local_res10 = CONCAT44(uVar3,uVar1);
  puVar4 = (undefined8 *)
           FVulkanShaderFactory::LookupShader<TVulkanBaseShader<FRHIHullShader,1,2>_>(lVar2 + 0x470)
  ;
  if (puVar4 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(400);
    puVar4 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_143f3ece8;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *(undefined2 *)(puVar5 + 2) = 0x100;
      puVar5[3] = 0;
      puVar5[4] = 0;
      *(undefined4 *)(puVar5 + 5) = 0;
      *puVar5 = &PTR_FUN_144d838d0;
      FVulkanShader::FVulkanShader(puVar5 + 6,lVar2,1,2);
      *puVar5 = &PTR__scalar_deleting_destructor__144ea4410;
      puVar5[6] = &PTR_LAB_144ea4418;
      puVar4 = puVar5;
    }
    FVulkanShader::Setup(puVar4 + 6,param_3,local_res10);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x470));
    local_48 = &local_res10;
    local_res18[0] = puVar4 + 6;
    if (puVar4 == (undefined8 *)0x0) {
      local_res18[0] = (undefined8 *)0x0;
    }
    local_40 = local_res18;
    FUN_141e32e00(lVar2 + 0x4c8,local_res8,&local_48,0);
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x470));
  }
  *param_2 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e4c730 FUN_141e4c730 body=366 status=ok
// SIG undefined FUN_141e4c730(void)

undefined8 * FUN_141e4c730(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_res18 [2];
  undefined8 *local_48;
  undefined8 **local_40;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  lVar2 = *(longlong *)(param_1 + 0x70);
  uVar3 = FCrc::MemCrc32(*param_3,uVar1,0);
  local_res10 = CONCAT44(uVar3,uVar1);
  puVar4 = (undefined8 *)
           FVulkanShaderFactory::LookupShader<TVulkanBaseShader<FRHIPixelShader,3,16>_>
                     (lVar2 + 0x470);
  if (puVar4 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(400);
    puVar4 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_143f3ece8;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *(undefined2 *)(puVar5 + 2) = 0x100;
      puVar5[3] = 0;
      puVar5[4] = 0;
      *(undefined4 *)(puVar5 + 5) = 0;
      *puVar5 = &PTR_FUN_144d838d0;
      FVulkanShader::FVulkanShader(puVar5 + 6,lVar2,3,0x10);
      *puVar5 = &PTR__scalar_deleting_destructor__144ea4410;
      puVar5[6] = &PTR_LAB_144ea4418;
      puVar4 = puVar5;
    }
    FVulkanShader::Setup(puVar4 + 6,param_3,local_res10);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x470));
    local_48 = &local_res10;
    local_res18[0] = puVar4 + 6;
    if (puVar4 == (undefined8 *)0x0) {
      local_res18[0] = (undefined8 *)0x0;
    }
    local_40 = local_res18;
    FUN_141e32e00(lVar2 + 0x568,local_res8,&local_48,0);
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x470));
  }
  *param_2 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e4c8a0 FUN_141e4c8a0 body=304 status=ok
// SIG undefined FUN_141e4c8a0(void)

undefined8 * FUN_141e4c8a0(undefined8 param_1,undefined8 *param_2,undefined1 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  puVar2 = (undefined8 *)operator_new(0x68);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 == (undefined8 *)0x0) goto LAB_141e4c9b6;
  *puVar2 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(puVar2 + 1) = 0;
  *puVar2 = &PTR_FUN_144ea4328;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *(undefined2 *)(puVar2 + 2) = 0x100;
  *(undefined1 *)(puVar2 + 0xb) = *param_3;
  *(undefined1 *)((longlong)puVar2 + 0x59) = param_3[1];
  *(undefined4 *)((longlong)puVar2 + 0x5c) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(puVar2 + 0xc) = *(undefined4 *)(param_3 + 8);
  *(undefined1 *)((longlong)puVar2 + 100) = param_3[0xc];
  *(undefined1 *)((longlong)puVar2 + 0x65) = param_3[0xd];
  *(undefined4 *)(puVar2 + 3) = 0x17;
  *(undefined8 *)((longlong)puVar2 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x34) = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0x3f800000;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 1;
  cVar1 = *(char *)(puVar2 + 0xb);
  uVar4 = 2;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
      if (cVar1 != '\x02') {
        uVar4 = 0x7fffffff;
      }
    }
  }
  cVar1 = *(char *)((longlong)puVar2 + 0x59);
  *(undefined4 *)((longlong)puVar2 + 0x34) = uVar4;
  if (cVar1 == '\0') {
LAB_141e4c986:
    uVar4 = 0;
  }
  else if (cVar1 == '\x01') {
    uVar4 = 1;
  }
  else {
    uVar4 = 2;
    if (cVar1 != '\x02') goto LAB_141e4c986;
  }
  *(undefined4 *)(puVar2 + 7) = uVar4;
  *(undefined4 *)((longlong)puVar2 + 0x4c) = *(undefined4 *)(puVar2 + 0xc);
  *(float *)((longlong)puVar2 + 0x44) = *(float *)((longlong)puVar2 + 0x5c);
  *(uint *)(puVar2 + 8) = (uint)(*(float *)((longlong)puVar2 + 0x5c) != 0.0);
  puVar3 = puVar2;
LAB_141e4c9b6:
  *param_2 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e4c9d0 FUN_141e4c9d0 body=528 status=ok
// SIG undefined FUN_141e4c9d0(void)

undefined8 * FUN_141e4c9d0(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_3 == 1) {
    puVar4 = (undefined8 *)operator_new(0x40);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_143f3ece8;
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = &PTR__scalar_deleting_destructor__144ea4450;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      *(undefined2 *)(puVar4 + 2) = 0x100;
      *(undefined4 *)(puVar4 + 3) = 1;
      puVar4[4] = 0;
      *(undefined4 *)(puVar4 + 5) = 0xffffffff;
      puVar4[6] = 0;
      *(undefined4 *)(puVar4 + 7) = 0;
      goto LAB_141e4ca31;
    }
  }
  else {
    if (param_3 == 2) {
      uVar5 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18b0) + 0x2d8) + 0x70)
      ;
      puVar4 = (undefined8 *)operator_new(0x90);
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        lVar2 = *(longlong *)(param_1 + 0x70);
        *puVar4 = &PTR_FUN_143f3ece8;
        *(undefined4 *)(puVar4 + 1) = 0;
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
        *(undefined2 *)(puVar4 + 2) = 0x100;
        *(undefined4 *)(puVar4 + 3) = 2;
        puVar4[4] = 0;
        *(undefined4 *)(puVar4 + 5) = 0xffffffff;
        *puVar4 = &PTR__scalar_deleting_destructor__144ea4458;
        FUN_141e37b40(puVar4 + 6,lVar2,uVar5,8,2);
        puVar4[0xd] = 0;
        puVar4[6] = &PTR__scalar_deleting_destructor__144ea4448;
        *(undefined4 *)(puVar4 + 0xe) = 4;
        puVar4[0xf] = 0;
        puVar4[0x10] = 0;
        puVar4[0x11] = 0;
        iVar1 = *(int *)(puVar4 + 0x10);
        iVar3 = iVar1 + 8;
        *(int *)(puVar4 + 0x10) = iVar3;
        if (*(int *)((longlong)puVar4 + 0x84) < iVar3) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(puVar4 + 0xf);
        }
        _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar1 * 0x10 + puVar4[0xf]),0,0x80);
        uVar5 = FUN_141e22090(lVar2 + 0x3f0,*(int *)(puVar4 + 0xe) << 3,2,1);
        puVar4[0x11] = uVar5;
      }
      *param_2 = puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
        UNLOCK();
      }
      return param_2;
    }
    puVar4 = (undefined8 *)operator_new(0x30);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_143f3ece8;
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = &PTR_FUN_144d838d0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      *(undefined2 *)(puVar4 + 2) = 0x100;
      *(int *)(puVar4 + 3) = param_3;
      puVar4[4] = 0;
      *(undefined4 *)(puVar4 + 5) = 0xffffffff;
      goto LAB_141e4ca31;
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_141e4ca31:
  *param_2 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e4cbe0 RHICreateRenderQuery_RenderThread body=26 status=ok
// SIG undefined RHICreateRenderQuery_RenderThread(void)

undefined8
FOpenGLDynamicRHI::RHICreateRenderQuery_RenderThread
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_141e4c9d0(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 141e4cc00 FUN_141e4cc00 body=553 status=ok
// SIG undefined FUN_141e4cc00(void)

longlong * FUN_141e4cc00(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  BOOL BVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int local_res8 [2];
  undefined1 local_res20 [8];
  undefined8 *local_88;
  int *local_80;
  undefined8 **local_78;
  undefined1 local_68 [80];
  
  FUN_141e545d0(param_3,*(undefined8 *)(param_1 + 0x70),local_68);
  local_res8[0] = FCrc::MemCrc32(local_68,0x50);
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafde8);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aafde8);
  }
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (*(int *)(lVar1 + 0x1868) != *(int *)(lVar1 + 0x1894)) {
    lVar4 = *(longlong *)(lVar1 + 0x18a0);
    if (*(longlong *)(lVar1 + 0x18a0) == 0) {
      lVar4 = lVar1 + 0x1898;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(lVar1 + 0x18a8) - 1U & (longlong)local_res8[0]) * 4
                    );
    if (iVar3 != -1) {
      lVar4 = *(longlong *)(lVar1 + 0x1860);
      do {
        plVar7 = (longlong *)(lVar4 + (longlong)iVar3 * 0x18);
        if (*(int *)(lVar4 + (longlong)iVar3 * 0x18) == local_res8[0]) {
          if (iVar3 != -1) goto LAB_141e4ccd3;
          break;
        }
        iVar3 = (int)plVar7[2];
      } while (iVar3 != -1);
    }
  }
  plVar7 = (longlong *)0x0;
LAB_141e4ccd3:
  plVar5 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  if (plVar5 == (longlong *)0x0) {
    puVar6 = (undefined8 *)operator_new(0x28);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x70);
      *puVar6 = &PTR_FUN_143f3ece8;
      *(undefined4 *)(puVar6 + 1) = 0;
      *puVar6 = &PTR_FUN_144ea4318;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      *(undefined2 *)(puVar6 + 2) = 0x100;
      puVar6[3] = 0;
      *(undefined4 *)(puVar6 + 4) = 0;
      *(undefined1 *)((longlong)puVar6 + 0x24) = 0;
      iVar3 = (*DAT_146ab0110)(*(undefined8 *)(lVar4 + 8),local_68,0);
      if (iVar3 != 0) {
        FUN_141e67d70(iVar3,
                      "VulkanRHI::vkCreateSampler(InDevice.GetInstanceHandle(), &InInfo, VULKAN_CPU_ALLOCATOR, &Sampler)"
                      ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanState.cpp"
                      ,0xde);
      }
      if (DAT_1464c9c14 < 2) {
        LOCK();
        UNLOCK();
        iVar3 = (int)DAT_146aafd60;
        DAT_146aafd60 = DAT_146aafd60 + 1;
        *(int *)(puVar6 + 4) = iVar3 + 1;
      }
    }
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
      UNLOCK();
    }
    local_80 = local_res8;
    local_78 = &local_88;
    local_88 = puVar6;
    FUN_141e32510((longlong *)(lVar1 + 0x1860),local_res20,&local_80,0);
    *param_2 = (longlong)local_88;
    local_88 = (undefined8 *)0x0;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_88);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aafde8);
  }
  else {
    lVar1 = *plVar5;
    *param_2 = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aafde8);
  }
  return param_2;
}



// FUNCTION 141e4ce30 RHICreateTextureReference_RenderThread body=26 status=ok
// SIG undefined RHICreateTextureReference_RenderThread(void)

undefined8
FOpenGLDynamicRHI::RHICreateTextureReference_RenderThread
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_141e63830(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 141e4ce50 FUN_141e4ce50 body=32 status=ok
// SIG undefined FUN_141e4ce50(void)

undefined8
FUN_141e4ce50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  FUN_141e63900(param_1,param_2,param_4,param_5);
  return param_2;
}



// FUNCTION 141e4ce70 FUN_141e4ce70 body=50 status=ok
// SIG undefined FUN_141e4ce70(void)

undefined8
FUN_141e4ce70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  FUN_141e639f0(param_1,param_2,param_4,param_5,param_6,param_7);
  return param_2;
}



// FUNCTION 141e4ceb0 FUN_141e4ceb0 body=212 status=ok
// SIG undefined FUN_141e4ceb0(void)

undefined8 *
FUN_141e4ceb0(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0xa0);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *puVar2 = &PTR_FUN_143f3ece8;
    *(undefined4 *)(puVar2 + 1) = 0;
    *puVar2 = &PTR_FUN_144d838e0;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *(undefined4 *)(puVar2 + 4) = param_5;
    *(undefined2 *)(puVar2 + 2) = 0x100;
    *(undefined4 *)(puVar2 + 3) = param_3;
    *(undefined4 *)((longlong)puVar2 + 0x1c) = param_4;
    FUN_141e20860(puVar2 + 5,uVar1,0x20,param_4,param_5,param_6,0);
    *puVar2 = &PTR__scalar_deleting_destructor__144ea4468;
    puVar2[5] = &PTR_LAB_144ea4470;
  }
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e4cf90 FUN_141e4cf90 body=277 status=ok
// SIG undefined FUN_141e4cf90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_141e4cf90(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_a8 = param_10;
  lVar1 = operator_new(0x118);
  lVar2 = 0;
  if (lVar1 != 0) {
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_b0 = &local_98;
    local_98 = 0;
    uStack_90 = 0;
    local_b8 = local_a8;
    local_c0 = param_9;
    local_c8 = param_7;
    local_d0 = param_6;
    local_d8 = param_5;
    local_88 = 1;
    local_84 = _DAT_1468b5d78;
    uStack_80 = uRam00000001468b5d7c;
    uStack_7c = uRam00000001468b5d80;
    uStack_78 = uRam00000001468b5d84;
    local_74 = 0;
    lVar2 = FUN_141e58b70(lVar1,*(undefined8 *)(param_1 + 0x70),param_3,param_4);
  }
  *param_2 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e4d0b0 RHICreateTexture3D_RenderThread body=92 status=ok
// SIG undefined RHICreateTexture3D_RenderThread(void)

undefined8
FVulkanDynamicRHI::RHICreateTexture3D_RenderThread
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8,
          undefined4 param_9,undefined8 param_10)

{
  FUN_141e63cb0(param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return param_2;
}



// FUNCTION 141e4d110 FUN_141e4d110 body=367 status=ok
// SIG undefined FUN_141e4d110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_141e4d110(longlong param_1,longlong *param_2,uint param_3,undefined4 param_4,undefined4 param_5,
             undefined4 param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9,
             undefined4 param_10)

{
  bool bVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_a8 = param_8;
  local_b0 = param_9;
  local_b8 = param_10;
  if ((param_3 < 0x2d) && ((0x100000101800U >> ((longlong)(int)param_3 & 0x3fU) & 1) != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_74 = 0;
  local_98 = 0;
  uStack_90 = 0;
  puVar2 = (undefined4 *)&DAT_1464c9cb8;
  if (bVar1) {
    puVar2 = (undefined4 *)&DAT_1464c9ce8;
  }
  lVar4 = 0;
  local_70 = 0;
  local_68 = 0;
  local_88 = *puVar2;
  uStack_84 = puVar2[1];
  uStack_80 = puVar2[2];
  uStack_7c = puVar2[3];
  local_78 = puVar2[4];
  local_60 = 0;
  lVar3 = operator_new(0x110);
  if (lVar3 != 0) {
    local_c8 = &local_98;
    local_d0 = local_b8;
    local_d8 = local_b0;
    local_e0 = local_a8;
    local_e8 = param_7;
    local_f0 = param_6;
    local_f8 = param_5;
    lVar4 = FUN_141e58740(lVar3,*(undefined8 *)(param_1 + 0x70),param_3,param_4);
  }
  *param_2 = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e4d280 FUN_141e4d280 body=335 status=ok
// SIG undefined FUN_141e4d280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_141e4d280(longlong param_1,longlong *param_2,uint param_3,undefined4 param_4,undefined4 param_5,
             undefined4 param_6,undefined4 param_7,undefined8 param_8,undefined4 param_9)

{
  bool bVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_a0 = param_8;
  local_a8 = param_9;
  if ((param_3 < 0x2d) && ((0x100000101800U >> ((longlong)(int)param_3 & 0x3fU) & 1) != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_74 = 0;
  local_98 = 0;
  uStack_90 = 0;
  puVar2 = (undefined4 *)&DAT_1464c9cb8;
  if (bVar1) {
    puVar2 = (undefined4 *)&DAT_1464c9ce8;
  }
  lVar4 = 0;
  local_70 = 0;
  local_68 = 0;
  local_88 = *puVar2;
  uStack_84 = puVar2[1];
  uStack_80 = puVar2[2];
  uStack_7c = puVar2[3];
  local_78 = puVar2[4];
  local_60 = 0;
  lVar3 = operator_new(0x110);
  if (lVar3 != 0) {
    local_b0 = &local_98;
    local_b8 = local_a8;
    local_c0 = local_a0;
    local_c8 = param_7;
    local_d0 = param_6;
    local_d8 = param_5;
    lVar4 = FUN_141e588d0(lVar3,*(undefined8 *)(param_1 + 0x70),param_3,param_4);
  }
  *param_2 = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e4d3d0 RHICreateTexture2D_RenderThread body=92 status=ok
// SIG undefined RHICreateTexture2D_RenderThread(void)

undefined8
FVulkanDynamicRHI::RHICreateTexture2D_RenderThread
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9,undefined8 param_10)

{
  FUN_141e63c00(param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return param_2;
}



// FUNCTION 141e4d430 RHICreateTexture3D_RenderThread body=92 status=ok
// SIG undefined RHICreateTexture3D_RenderThread(void)

undefined8
FVulkanDynamicRHI::RHICreateTexture3D_RenderThread
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8,
          undefined4 param_9,undefined8 param_10)

{
  FUN_141e63d60(param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return param_2;
}



// FUNCTION 141e4d490 RHICreateTextureCubeArray_RenderThread body=75 status=ok
// SIG undefined RHICreateTextureCubeArray_RenderThread(void)

undefined8
FVulkanDynamicRHI::RHICreateTextureCubeArray_RenderThread
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
          undefined8 param_9)

{
  FUN_141e63fc0(param_1,param_2,param_4,param_5,param_6,param_7,param_8,param_9);
  return param_2;
}



// FUNCTION 141e4d4e0 FUN_141e4d4e0 body=285 status=ok
// SIG undefined FUN_141e4d4e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_141e4d4e0(longlong param_1,longlong *param_2,uint param_3,undefined4 param_4,undefined1 param_5,
             undefined4 param_6,undefined4 param_7,undefined8 param_8,undefined4 param_9)

{
  bool bVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 *local_88;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_78 = param_9;
  if ((param_3 < 0x2d) && ((0x100000101800U >> ((longlong)(int)param_3 & 0x3fU) & 1) != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  puVar2 = (undefined4 *)&DAT_1464c9cb8;
  if (bVar1) {
    puVar2 = (undefined4 *)&DAT_1464c9ce8;
  }
  local_70 = *puVar2;
  uStack_6c = puVar2[1];
  uStack_68 = puVar2[2];
  uStack_64 = puVar2[3];
  local_60 = puVar2[4];
  lVar3 = operator_new(0x110);
  lVar4 = 0;
  if (lVar3 != 0) {
    local_88 = &local_70;
    local_90 = 0;
    local_98 = local_78;
    local_a0 = param_8;
    local_a8 = param_7;
    local_b0 = param_6;
    local_b8 = param_5;
    lVar4 = FUN_141e59700(lVar3,*(undefined8 *)(param_1 + 0x70),param_3,param_4);
  }
  *param_2 = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e4d600 RHICreateTextureCube_RenderThread body=64 status=ok
// SIG undefined RHICreateTextureCube_RenderThread(void)

undefined8
FVulkanDynamicRHI::RHICreateTextureCube_RenderThread
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  FUN_141e63f10(param_1,param_2,param_4,param_5,param_6,param_7,param_8);
  return param_2;
}



// FUNCTION 141e4d640 RHICreateTextureReference_RenderThread body=26 status=ok
// SIG undefined RHICreateTextureReference_RenderThread(void)

undefined8
FOpenGLDynamicRHI::RHICreateTextureReference_RenderThread
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_141e64070(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 141e4d660 FUN_141e4d660 body=41 status=ok
// SIG undefined FUN_141e4d660(void)

undefined8
FUN_141e4d660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  FUN_141e64480(param_1,param_2,param_4,param_5,param_6);
  return param_2;
}



// FUNCTION 141e4d690 FUN_141e4d690 body=31 status=ok
// SIG undefined FUN_141e4d690(void)

undefined8
FUN_141e4d690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  FUN_141e645d0(param_1,param_2,param_4,param_5);
  return param_2;
}



// FUNCTION 141e4d6b0 FUN_141e4d6b0 body=32 status=ok
// SIG undefined FUN_141e4d6b0(void)

undefined8
FUN_141e4d6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  FUN_141e646a0(param_1,param_2,param_4,param_5);
  return param_2;
}



// FUNCTION 141e4d6d0 FUN_141e4d6d0 body=365 status=ok
// SIG undefined FUN_141e4d6d0(void)

undefined8 * FUN_141e4d6d0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_res18 [2];
  undefined8 *local_48;
  undefined8 **local_40;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  lVar2 = *(longlong *)(param_1 + 0x70);
  uVar3 = FCrc::MemCrc32(*param_3,uVar1,0);
  local_res10 = CONCAT44(uVar3,uVar1);
  puVar4 = (undefined8 *)
           FVulkanShaderFactory::LookupShader<TVulkanBaseShader<FRHIVertexShader,0,1>_>
                     (lVar2 + 0x470);
  if (puVar4 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new(400);
    puVar4 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_143f3ece8;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *(undefined2 *)(puVar5 + 2) = 0x100;
      puVar5[3] = 0;
      puVar5[4] = 0;
      *(undefined4 *)(puVar5 + 5) = 0;
      *puVar5 = &PTR_FUN_144d838d0;
      FVulkanShader::FVulkanShader(puVar5 + 6,lVar2,0,1);
      *puVar5 = &PTR__scalar_deleting_destructor__144ea4410;
      puVar5[6] = &PTR_LAB_144ea4418;
      puVar4 = puVar5;
    }
    FVulkanShader::Setup(puVar4 + 6,param_3,local_res10);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x470));
    local_48 = &local_res10;
    local_res18[0] = puVar4 + 6;
    if (puVar4 == (undefined8 *)0x0) {
      local_res18[0] = (undefined8 *)0x0;
    }
    local_40 = local_res18;
    FUN_141e32e00(lVar2 + 0x478,local_res8,&local_48,0);
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x470));
  }
  *param_2 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e4d840 FUN_141e4d840 body=473 status=ok
// SIG undefined FUN_141e4d840(void)

void FUN_141e4d840(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x2d8);
  if (*(longlong *)(lVar1 + 0x78) != 0) {
    FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar1,0,0);
  }
  lVar1 = *(longlong *)(lVar1 + 0x70);
  iVar2 = 0;
  if (*(char *)(lVar1 + 0x2c) == '\x02') {
    (*DAT_146ab0318)(*(undefined8 *)(lVar1 + 0x40));
    *(undefined1 *)(lVar1 + 0x2c) = 1;
    *(undefined8 *)(param_1 + 0x4a8) = 0;
    if (DAT_146aaf890 != 0) {
      FVulkanCommandBufferManager::SubmitActiveCmdBuffer(*(undefined8 *)(param_1 + 0x2d8),0);
      FVulkanCommandBufferManager::PrepareForNewActiveCommandBuffer
                (*(undefined8 *)(param_1 + 0x2d8));
      lVar1 = *(longlong *)(param_1 + 0x2d8);
      if (*(longlong *)(lVar1 + 0x78) != 0) {
        FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar1,0,0);
      }
      lVar1 = *(longlong *)(lVar1 + 0x70);
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x660) + 0x10))(*(longlong **)(param_1 + 0x660),lVar1,0);
  FUN_141e620d0(param_2,param_1,lVar1,*(undefined8 *)(param_1 + 400),
                *(undefined8 *)(*(longlong *)(param_1 + 0x188) + 0x1430),param_4);
  TRefCountPtr<FRHIIndexBuffer>::operator=(*(longlong *)(param_1 + 0x178) + 0x88,0);
  lVar1 = *(longlong *)(param_1 + 0x2d8);
  if (*(longlong *)(lVar1 + 0x78) != 0) {
    FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar1,0,0);
  }
  FUN_141e67110(*(undefined8 *)(param_1 + 0x660),*(undefined8 *)(lVar1 + 0x70));
  if (*(longlong *)(param_1 + 0x660) != 0) {
    lVar1 = FUN_141e5f760(*(longlong *)(param_1 + 0x660),0);
    dVar3 = (double)lVar1;
    if (lVar1 < 0) {
      dVar3 = dVar3 + 1.8446744073709552e+19;
    }
    dVar4 = (double)DAT_146ab6340;
    if (DAT_146ab6340 < 0) {
      dVar4 = dVar4 + 1.8446744073709552e+19;
    }
    iVar2 = (int)((dVar3 / dVar4) / DAT_1468b02f8);
  }
  DAT_146b17160 = iVar2;
  DAT_146b17164 = iVar2;
  FUN_1415b2020(iVar2,iVar2,0);
  lVar1 = *(longlong *)(param_1 + 0x2d8);
  if (*(longlong *)(lVar1 + 0x78) != 0) {
    FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar1,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x000141e4da15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x660) + 8))
            (*(longlong **)(param_1 + 0x660),*(undefined8 *)(lVar1 + 0x70),0);
  return;
}



// FUNCTION 141e4da20 FUN_141e4da20 body=521 status=ok
// SIG undefined FUN_141e4da20(void)

/* WARNING: Removing unreachable block (ram,0x000141e4dbad) */
/* WARNING: Removing unreachable block (ram,0x000141e4dbc3) */
/* WARNING: Removing unreachable block (ram,0x000141e4dbdd) */

void FUN_141e4da20(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  FUN_141e5e220(param_1 + 0x510);
  VulkanRHI::FStagingManager::ProcessPendingFree(*(longlong *)(param_1 + 0x188) + 0x3f0,0,1);
  VulkanRHI::FResourceHeapManager::ReleaseFreedPages(*(longlong *)(param_1 + 0x188) + 0x248);
  if (DAT_1464c9c14 < 2) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x460);
    iVar8 = *(int *)(lVar3 + 0x10);
    if (DAT_1464c9560 < iVar8) {
      do {
        if ((uint)(DAT_1464aaa90 -
                  *(int *)(*(longlong *)(*(longlong *)(lVar3 + 8) + -8 + (longlong)iVar8 * 8) + 0xc0
                          )) < 0xb) break;
        puVar7 = (undefined8 *)(lVar3 + 0x18);
        lVar2 = (longlong)iVar8 * 8 + -8;
        puVar1 = (undefined8 *)(lVar2 + *(longlong *)(lVar3 + 8));
        if (puVar7 != puVar1) {
          uVar4 = *puVar7;
          *puVar7 = *puVar1;
          *puVar1 = 0;
          TDefaultDelete<FVulkanDescriptorSetCache::FCachedPool>::operator()(puVar7,uVar4);
        }
        puVar7 = (undefined8 *)(*(longlong *)(lVar3 + 8) + lVar2);
        TDefaultDelete<FVulkanDescriptorSetCache::FCachedPool>::operator()(puVar7,*puVar7);
        iVar6 = *(int *)(lVar3 + 0x10);
        iVar5 = (iVar6 - (iVar8 + -1)) + -1;
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(lVar3 + 8) + lVar2),
                     (void *)(*(longlong *)(lVar3 + 8) + (longlong)iVar8 * 8),(longlong)iVar5 << 3);
          iVar6 = *(int *)(lVar3 + 0x10);
        }
        iVar8 = iVar6 + -1;
        *(int *)(lVar3 + 0x10) = iVar8;
      } while (DAT_1464c9560 < iVar8);
    }
  }
  else {
    FVulkanDescriptorPoolsManager::GC(*(undefined8 *)(*(longlong *)(param_1 + 0x188) + 0x468));
  }
  if (DAT_1464aaa90 == -1) {
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x188) + 0x1408);
    do {
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
    *(longlong *)(param_1 + 0x508) = *(longlong *)(param_1 + 0x508) + 1;
  }
  else {
    *(longlong *)(param_1 + 0x508) = *(longlong *)(param_1 + 0x508) + 1;
  }
  return;
}



// FUNCTION 141e4dc30 FUN_141e4dc30 body=423 status=ok
// SIG undefined FUN_141e4dc30(void)

void FUN_141e4dc30(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar1 = param_1[0x5b];
  if (*(longlong *)(lVar1 + 0x78) != 0) {
    FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar1,0,0);
  }
  lVar1 = *(longlong *)(lVar1 + 0x70);
  lVar7 = 0;
  if (*(char *)((longlong)param_1 + 0x11c) == '\0') {
    FTransitionAndLayoutManager::EndRealRenderPass(param_1 + 0x5c);
    goto LAB_141e4dd06;
  }
  lVar6 = param_1[0x9c];
  *(undefined4 *)(lVar6 + 0x38) = 2;
  *(longlong *)(lVar6 + 0x68) = lVar1;
  *(undefined8 *)(lVar6 + 0x70) = *(undefined8 *)(lVar1 + 0x98);
  param_1[0x9c] = 0;
  FTransitionAndLayoutManager::EndRealRenderPass(param_1 + 0x5c);
  lVar1 = DAT_146aafcd0;
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar5 = GetCurrentThreadId();
    lVar6 = 4;
    if (DVar5 == DAT_1468c21c0) goto LAB_141e4dcd7;
  }
  else {
LAB_141e4dcd7:
    lVar6 = lVar7;
  }
  if ((*(int *)(lVar6 + lVar1) != 0) && (FUN_141e2df30(param_1), (char)param_1[0x33] != '\0')) {
    FUN_141e29600(param_1);
    *(undefined1 *)(param_1 + 0x33) = 0;
  }
LAB_141e4dd06:
  plVar3 = param_1;
  if ((char)param_1[0x2d] == '\0') {
    do {
      if (plVar3[2] == 0) break;
      lVar1 = plVar3[3];
      if (lVar1 != 0) {
        FUN_141e4ba80(param_1,plVar3[2],lVar1,param_1 + 0x1d);
      }
      lVar7 = lVar7 + 1;
      plVar3 = plVar3 + 3;
    } while (lVar7 < 8);
    if ((param_1[0x1a] != 0) && (param_1[0x1b] != 0)) {
      FUN_141e4ba80(param_1,param_1[0x1a],param_1[0x1b],param_1 + 0x1d);
    }
  }
  if (*(char *)((longlong)param_1 + 0x519) != '\0') {
    lVar1 = param_1[0x5b];
    uVar2 = *(undefined8 *)(param_1[0x31] + 0x1440);
    if (*(longlong *)(lVar1 + 0x78) != 0) {
      FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar1,0,0);
    }
    FUN_141e62080(param_1 + 0xa2,*(undefined8 *)(*(longlong *)(lVar1 + 0x70) + 0x40),uVar2);
  }
  if (param_1[0x30] == 0) {
    (**(code **)(param_1[0xa2] + 0x20))();
  }
  return;
}



// FUNCTION 141e4dde0 FUN_141e4dde0 body=298 status=ok
// SIG undefined FUN_141e4dde0(void)

void FUN_141e4dde0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(param_2 + 0x18) == 1) {
    if (*(longlong *)(param_1 + 0x4e0) != 0) {
      *(undefined4 *)(param_2 + 0x38) = 2;
      lVar1 = *(longlong *)(param_1 + 0x2d8);
      if (*(longlong *)(lVar1 + 0x78) != 0) {
        FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar1,0,0);
      }
                    /* WARNING: Could not recover jumptable at 0x000141e4de53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_146ab02e0)(*(undefined8 *)(*(longlong *)(lVar1 + 0x70) + 0x40),
                       *(undefined8 *)(*(longlong *)(param_1 + 0x4e0) + 0x10),
                       *(undefined4 *)(param_2 + 0x28));
      return;
    }
  }
  else if (*(int *)(param_2 + 0x18) == 2) {
    uVar2 = (ulonglong)(*(int *)(param_2 + 0x68) + 1) % (ulonglong)*(uint *)(param_2 + 0x70);
    iVar5 = (int)uVar2;
    *(int *)(param_2 + 0x68) = iVar5;
    lVar1 = *(longlong *)(param_1 + 0x2d8);
    if (*(longlong *)(lVar1 + 0x78) != 0) {
      FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar1,0,0);
    }
    lVar1 = *(longlong *)(lVar1 + 0x70);
    (*DAT_146ab02f0)(*(undefined8 *)(lVar1 + 0x40),1,*(undefined8 *)(param_2 + 0x40),uVar2);
    FVulkanCmdBuffer::AddPendingTimestampQuery
              (lVar1,uVar2,1,*(undefined8 *)(param_2 + 0x40),
               *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18));
    *(longlong *)(*(longlong *)(param_2 + 0x78) + (longlong)iVar5 * 0x10) = lVar1;
    *(undefined8 *)(*(longlong *)(param_2 + 0x78) + 8 + (longlong)iVar5 * 0x10) =
         *(undefined8 *)(lVar1 + 0x98);
    uVar3 = *(int *)(param_2 + 0x6c) + 1;
    uVar4 = *(uint *)(param_2 + 0x70);
    if (uVar3 <= *(uint *)(param_2 + 0x70)) {
      uVar4 = uVar3;
    }
    *(uint *)(param_2 + 0x6c) = uVar4;
  }
  return;
}



// FUNCTION 141e4df10 FUN_141e4df10 body=149 status=ok
// SIG undefined FUN_141e4df10(void)

longlong FUN_141e4df10(longlong param_1)

{
  char cVar1;
  DWORD DVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = DAT_146aafd80;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  lVar5 = 0;
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    lVar3 = 4;
    if (DVar2 != DAT_1468c21c0) goto LAB_141e4df5c;
  }
  lVar3 = lVar5;
LAB_141e4df5c:
  if (1 < *(int *)(lVar3 + lVar4)) {
    lVar4 = operator_new(0x18);
    if (lVar4 != 0) {
      lVar5 = FUN_141e20280(lVar4,*(undefined8 *)(param_1 + 0x70));
    }
    return lVar5;
  }
  return 0;
}



// FUNCTION 141e4dfe0 FUN_141e4dfe0 body=840 status=ok
// SIG undefined FUN_141e4dfe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_141e4dfe0(longlong param_1,longlong param_2,longlong *param_3,char param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_28 [2];
  
  uVar3 = *(uint *)(param_2 + 0x18);
  uVar1 = (ulonglong)uVar3;
  if (uVar3 == 1) {
    uVar3 = *(int *)(param_2 + 0x38) - 3;
    uVar1 = (ulonglong)uVar3;
    if (uVar3 < 2) {
      lVar2 = *(longlong *)(param_2 + 0x20);
      *param_3 = lVar2;
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    }
    if (*(int *)(param_2 + 0x38) != 0) {
      uVar3 = *(uint *)(*(longlong *)(param_2 + 0x30) + 0x38);
      uVar1 = (ulonglong)uVar3;
      if ((uVar3 == 3) ||
         ((uVar3 == 2 &&
          (uVar1 = FUN_141e49cd0(*(longlong *)(param_2 + 0x30),param_4), (char)uVar1 != '\0')))) {
        uVar3 = *(uint *)(param_2 + 0x28);
        lVar2 = *(longlong *)(param_2 + 0x30);
        *(undefined8 *)(param_2 + 0x20) =
             *(undefined8 *)(*(longlong *)(lVar2 + 0x28) + (longlong)(int)uVar3 * 8);
        *(ulonglong *)(*(longlong *)(lVar2 + 0x58) + (ulonglong)(uVar3 >> 6) * 8) =
             *(ulonglong *)(*(longlong *)(lVar2 + 0x58) + (ulonglong)(uVar3 >> 6) * 8) &
             ~(1L << (uVar3 & 0x3f));
        *(undefined8 *)(*(longlong *)(lVar2 + 0x48) + (longlong)(int)uVar3 * 8) = 0;
        lVar2 = *(longlong *)(param_2 + 0x20);
        *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
        *(undefined4 *)(param_2 + 0x38) = 3;
        *param_3 = lVar2;
        return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
      }
    }
  }
  else if (uVar3 == 2) {
    uVar3 = *(uint *)(param_2 + 0x68);
    if ((param_4 == '\0') && (uVar5 = 1, 1 < *(uint *)(param_2 + 0x6c))) {
      do {
        plVar4 = (longlong *)((longlong)(int)uVar3 * 0x10 + *(longlong *)(param_2 + 0x78));
        if ((ulonglong)plVar4[1] < *(ulonglong *)(*plVar4 + 0x98)) {
          lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x88) + 0x10);
          FUN_141e29710(*(undefined8 *)(lVar2 + 0x28),*(undefined4 *)(lVar2 + 0x1c),
                        *(undefined4 *)(lVar2 + 0x18));
          lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x88) + 0x10);
          lVar2 = *(longlong *)
                   (*(longlong *)(*(longlong *)(lVar2 + 0x28) + 0x18) +
                    (ulonglong)*(uint *)(lVar2 + 0x24) + (longlong)(int)uVar3 * 8);
          goto LAB_141e4e172;
        }
        uVar5 = uVar5 + 1;
        uVar3 = ((*(uint *)(param_2 + 0x70) - 1) + uVar3) % *(uint *)(param_2 + 0x70);
      } while (uVar5 < *(uint *)(param_2 + 0x6c));
    }
    if ((*(int *)(param_2 + 0x6c) != 0) || (uVar1 = 0, param_4 != '\0')) {
      if ((*(int *)(param_2 + 0x6c) == *(int *)(param_2 + 0x70)) || (param_4 != '\0')) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      QueryPerformanceCounter(local_28);
      if (bVar6) {
        plVar4 = (longlong *)((longlong)(int)uVar3 * 0x10 + *(longlong *)(param_2 + 0x78));
        bVar6 = plVar4[1] == *(longlong *)(*plVar4 + 0x98);
        if (bVar6) {
          if (DAT_146ab6e8c != 0) {
            FRHICommandListExecutor::ExecuteList(&DAT_146ab6e68,&DAT_146ab6e78);
          }
          FUN_141ed93a0(&DAT_146ab6e78);
          if (DAT_146ab6383 != '\0') {
            FRHICommandListBase::WaitForRHIThreadTasks(&DAT_146ab6e78);
          }
          FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,1);
          FUN_141e2fe70(*(undefined8 *)(param_1 + 0x70));
        }
        if ((bVar6) && (plVar4[1] == *(longlong *)(*plVar4 + 0x98))) {
          FUN_141e309b0(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18b0) + 0x2d8),*plVar4,
                        0x41200000);
        }
      }
      lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x88) + 0x10);
      FUN_141e29710(*(undefined8 *)(lVar2 + 0x28),*(undefined4 *)(lVar2 + 0x1c),
                    *(undefined4 *)(lVar2 + 0x18));
      QueryPerformanceCounter(&local_res10);
      _DAT_146ac3aec = _DAT_146ac3aec + 1;
      DAT_146ac3acc = DAT_146ac3acc + (local_res10.s.LowPart - local_28[0]._0_4_);
      lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x88) + 0x10);
      lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x28) + 0x18) +
                (ulonglong)*(uint *)(lVar2 + 0x24) + (longlong)(int)uVar3 * 8);
LAB_141e4e172:
      dVar7 = (double)lVar2;
      if (lVar2 < 0) {
        dVar7 = dVar7 + 1.8446744073709552e+19;
      }
      dVar8 = (double)DAT_146ab6340;
      if (DAT_146ab6340 < 0) {
        dVar8 = dVar8 + 1.8446744073709552e+19;
      }
      lVar2 = 0;
      dVar7 = (dVar7 / dVar8) * 1000000.0;
      if ((9.223372036854776e+18 <= dVar7) &&
         (dVar7 = dVar7 - 9.223372036854776e+18, dVar7 < 9.223372036854776e+18)) {
        lVar2 = -0x8000000000000000;
      }
      *param_3 = (longlong)dVar7 + lVar2;
      return CONCAT71((int7)((ulonglong)((longlong)dVar7 + lVar2) >> 8),1);
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 141e4e330 FUN_141e4e330 body=95 status=ok
// SIG undefined FUN_141e4e330(void)

void FUN_141e4e330(undefined8 param_1,longlong *param_2,longlong *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_2 + 8))(param_2);
  *param_4 = *(undefined4 *)(lVar1 + 0x60);
  *param_5 = *(undefined4 *)(lVar1 + 100);
  *param_3 = (ulonglong)*(uint *)(*(longlong *)(lVar1 + 0xd0) + 0x24) +
             *(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0xd0) + 0x28) + 0x18);
  lVar1 = *(longlong *)(lVar1 + 0xd0);
  FUN_141e29710(*(undefined8 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x1c),
                *(undefined4 *)(lVar1 + 0x18));
  return;
}



// FUNCTION 141e4e390 FUN_141e4e390 body=88 status=ok
// SIG undefined FUN_141e4e390(void)

void FUN_141e4e390(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_3 + 8))(param_3);
  *param_5 = *(undefined4 *)(lVar1 + 0x60);
  *param_6 = *(undefined4 *)(lVar1 + 100);
  *param_4 = (ulonglong)*(uint *)(*(longlong *)(lVar1 + 0xd0) + 0x24) +
             *(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0xd0) + 0x28) + 0x18);
  lVar1 = *(longlong *)(lVar1 + 0xd0);
  FUN_141e29710(*(undefined8 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x1c),
                *(undefined4 *)(lVar1 + 0x18));
  return;
}



// FUNCTION 141e4e3f0 FUN_141e4e3f0 body=55 status=ok
// SIG undefined FUN_141e4e3f0(void)

void FUN_141e4e3f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x2d8);
  if (*(longlong *)(lVar1 + 0x78) != 0) {
    FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar1,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x000141e4e420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_146ab0310)(*(undefined8 *)(*(longlong *)(lVar1 + 0x70) + 0x40),0);
  return;
}



// FUNCTION 141e4e430 FUN_141e4e430 body=137 status=ok
// SIG undefined FUN_141e4e430(void)

void FUN_141e4e430(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x519) != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x2d8);
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x188) + 0x1440);
    if (*(longlong *)(lVar1 + 0x78) != 0) {
      FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar1,0,0);
    }
    FUN_141e62080(param_1 + 0x510,*(undefined8 *)(*(longlong *)(lVar1 + 0x70) + 0x40),uVar2);
  }
  if (*(longlong *)(param_1 + 0x180) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141e4e4af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0x510) + 0x20))();
    return;
  }
  return;
}



// FUNCTION 141e4e4c0 FUN_141e4e4c0 body=165 status=ok
// SIG undefined FUN_141e4e4c0(void)

void FUN_141e4e4c0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x519) != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x2d8);
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x188) + 0x1440);
    if (*(longlong *)(lVar1 + 0x78) != 0) {
      FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar1,0,0);
    }
    FUN_141e62790(param_1 + 0x510,*(undefined8 *)(*(longlong *)(lVar1 + 0x70) + 0x40),uVar2,param_2)
    ;
  }
  if (*(longlong *)(param_1 + 0x180) == 0) {
    (**(code **)(*(longlong *)(param_1 + 0x510) + 0x18))
              ((longlong *)(param_1 + 0x510),param_2,param_3);
  }
  return;
}



// FUNCTION 141e4e570 FUN_141e4e570 body=1143 status=ok
// SIG undefined FUN_141e4e570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_141e4e570(longlong param_1,longlong *param_2,int *param_3,ulonglong param_4,
                  longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  undefined2 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  int iStackX_24;
  undefined1 auStack_158 [32];
  longlong *local_138;
  undefined8 *local_130;
  undefined4 local_128;
  undefined4 *local_120;
  undefined4 local_118;
  undefined8 local_110;
  longlong local_108;
  int local_100;
  longlong local_f8 [3];
  undefined4 local_e0;
  int local_d8;
  int local_d4;
  longlong local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  int local_70;
  int local_6c;
  uint local_68;
  int local_64;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_108 = param_1;
  lVar3 = (**(code **)(*param_2 + 0x18))(param_2);
  iStackX_24 = (int)(param_4 >> 0x20);
  uVar7 = (uint)param_4;
  local_100 = param_3[3] - param_3[1];
  iVar11 = param_3[2] - *param_3;
  local_d4 = (iStackX_24 - uVar7) * local_100 * iVar11;
  iVar12 = local_d4 * 8;
  local_d8 = iVar11;
  if (*(int *)((longlong)param_5 + 0xc) < iVar12) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_5);
  }
  if (DAT_146aafc04 == 2) {
    lVar3 = param_5[1];
    iVar11 = (int)lVar3 + iVar12;
    *(int *)(param_5 + 1) = iVar11;
    if (*(int *)((longlong)param_5 + 0xc) < iVar11) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_5);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*param_5 + (longlong)(int)lVar3 * 8),0,(longlong)iVar12 << 3);
  }
  else {
    FUN_141e2a5e0(*(undefined8 *)(local_108 + 0x70));
    local_d0 = FVulkanCommandBufferManager::GetUploadCmdBuffer
                         (*(undefined8 *)
                           (*(longlong *)(*(longlong *)(local_108 + 0x70) + 0x18b0) + 0x2d8));
    local_f8[0] = FUN_141e22090(*(longlong *)(local_108 + 0x70) + 0x3f0,iVar12,2,1);
    if (DAT_146aafc04 == 0) {
      local_88 = *(undefined4 *)(lVar3 + 0x98);
      local_84 = *(undefined4 *)(lVar3 + 0x9c);
      local_80 = *(undefined4 *)(lVar3 + 0xe8);
      local_70 = *param_3;
      local_6c = param_3[1];
      local_60 = local_100;
      local_90 = 0;
      local_7c = 0;
      local_74 = 1;
      local_68 = uVar7;
      local_64 = iVar11;
      local_5c = iStackX_24 - uVar7;
      piVar4 = (int *)FTransitionAndLayoutManager::FindOrAddLayoutRW
                                (*(longlong *)(*(longlong *)(local_108 + 0x70) + 0x18b0) + 0x2e0,
                                 *(undefined8 *)(lVar3 + 0x88),0);
      puVar13 = (undefined8 *)(local_d0 + 0x40);
      iVar12 = *piVar4;
      if (iVar12 != 6) {
        local_138 = local_f8 + 1;
        local_f8[1] = 1;
        local_f8[2] = 1;
        local_e0 = 1;
        VulkanSetImageLayout(*puVar13,*(undefined8 *)(lVar3 + 0x88),iVar12,6);
      }
      local_130 = &local_90;
      local_138 = (longlong *)CONCAT44(local_138._4_4_,1);
      (*DAT_146ab0280)(*puVar13,*(undefined8 *)(lVar3 + 0x88),6,*(undefined8 *)(local_f8[0] + 0x18))
      ;
      if ((iVar12 == 0) || (*piVar4 == 6)) {
        *piVar4 = 6;
        iVar11 = local_d8;
      }
      else {
        local_138 = local_f8 + 1;
        local_f8[1] = 1;
        local_f8[2] = 1;
        local_e0 = 1;
        VulkanSetImageLayout(*puVar13,*(undefined8 *)(lVar3 + 0x88),6);
        iVar11 = local_d8;
      }
    }
    else {
      puVar13 = (undefined8 *)(local_d0 + 0x40);
      local_138 = (longlong *)CONCAT44(local_138._4_4_,0x3c003c00);
      (*DAT_146ab0290)(*puVar13,*(undefined8 *)(local_f8[0] + 0x18),0,iVar12);
    }
    local_110 = 0;
    local_118 = 0;
    local_98 = (ulonglong)*(uint *)(local_f8[0] + 0x24);
    local_a8 = *(undefined8 *)(local_f8[0] + 0x18);
    local_120 = &local_c8;
    local_128 = 1;
    local_130 = (undefined8 *)0x0;
    local_138 = (longlong *)((ulonglong)local_138 & 0xffffffff00000000);
    local_c4 = 0;
    local_bc = 0;
    local_b0 = 0;
    local_c8 = 0x2c;
    local_b8 = 0x1000;
    local_b4 = 0x2000;
    local_a0 = 0;
    (*DAT_146ab02d0)(*puVar13,0x1000,0x4000,0);
    lVar2 = local_108;
    FVulkanCommandBufferManager::SubmitUploadCmdBuffer
              (*(undefined8 *)(*(longlong *)(*(longlong *)(local_108 + 0x70) + 0x18b0) + 0x2d8),0,0)
    ;
    FUN_141e2a740(*(undefined8 *)(lVar2 + 0x70));
    lVar1 = *(longlong *)(local_f8[0] + 0x10);
    FUN_141e29710(*(undefined8 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x1c),
                  *(undefined4 *)(lVar1 + 0x18));
    TArray<FFloat16Color,FDefaultAllocator>::SetNum(param_5,local_d4,1);
    puVar10 = (undefined2 *)*param_5;
    while ((int)uVar7 < iStackX_24) {
      iVar12 = param_3[1];
      if (iVar12 < param_3[3]) {
        iVar5 = param_3[2];
        do {
          uVar8 = (ulonglong)*param_3;
          puVar6 = (undefined2 *)
                   (*(longlong *)(*(longlong *)(*(longlong *)(local_f8[0] + 0x10) + 0x28) + 0x18) +
                    ((ulonglong)(uint)(*(int *)(lVar3 + 0x98) * iVar12) +
                     (ulonglong)(uint)((int)param_4 * local_100 * iVar11) + uVar8) * 8 +
                   (ulonglong)*(uint *)(*(longlong *)(local_f8[0] + 0x10) + 0x24));
          puVar9 = puVar10;
          if (*param_3 < iVar5) {
            do {
              uVar7 = (int)uVar8 + 1;
              uVar8 = (ulonglong)uVar7;
              puVar10 = puVar9 + 4;
              *puVar9 = *puVar6;
              puVar9[1] = puVar6[1];
              puVar9[2] = puVar6[2];
              puVar9[3] = puVar6[3];
              iVar5 = param_3[2];
              puVar6 = puVar6 + 4;
              puVar9 = puVar10;
            } while ((int)uVar7 < iVar5);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < param_3[3]);
      }
      uVar7 = (int)param_4 + 1;
      param_4 = (ulonglong)uVar7;
      lVar2 = local_108;
    }
    FUN_141e2d4b0(*(longlong *)(lVar2 + 0x70) + 0x3f0,local_d0,local_f8);
    FVulkanCommandBufferManager::PrepareForNewActiveCommandBuffer
              (*(undefined8 *)(*(longlong *)(*(longlong *)(lVar2 + 0x70) + 0x18b0) + 0x2d8));
  }
  return;
}



// FUNCTION 141e4e9f0 FUN_141e4e9f0 body=3099 status=ok
// SIG undefined FUN_141e4e9f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e4e9f0(longlong param_1,longlong *param_2,int *param_3,longlong *param_4,
                  longlong param_5)

{
  ushort uVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  longlong lVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  ushort *puVar12;
  int iVar13;
  float fVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  void *pvVar17;
  undefined4 *_Dst;
  undefined1 *puVar18;
  float fVar19;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  undefined8 *local_170;
  undefined4 local_168;
  undefined4 *local_160;
  undefined4 local_158;
  undefined8 local_150;
  float local_148;
  int local_140 [2];
  longlong local_138;
  undefined8 local_130;
  float local_128;
  float local_124;
  int local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_100 = param_1;
  lVar5 = (**(code **)(*param_2 + 8))(param_2);
  iVar9 = (param_3[2] - *param_3) * (param_3[3] - param_3[1]);
  local_130 = lVar5;
  if (DAT_146aafc04 == 2) {
    iVar13 = 0;
    *(undefined4 *)(param_4 + 1) = 0;
    iVar8 = 0;
    if (*(int *)((longlong)param_4 + 0xc) != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_4);
      iVar8 = *(int *)((longlong)param_4 + 0xc);
      iVar13 = (int)param_4[1];
    }
    *(int *)(param_4 + 1) = iVar13 + iVar9;
    if (iVar8 < iVar13 + iVar9) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_4);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*param_4 + (longlong)iVar13 * 4),0,(longlong)iVar9 << 2);
  }
  else {
    FUN_141e2a5e0(*(undefined8 *)(param_1 + 0x70));
    local_f0 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18b0);
    local_f8 = FVulkanCommandBufferManager::GetUploadCmdBuffer(*(undefined8 *)(local_f0 + 0x2d8));
    iVar8 = 4;
    if (*(int *)(lVar5 + 0x88) == 0x61) {
      iVar8 = 8;
    }
    uVar16 = (ulonglong)(uint)(iVar8 * iVar9);
    local_138 = FUN_141e22090(*(longlong *)(param_1 + 0x70) + 0x3f0,uVar16,2,1);
    if (DAT_146aafc04 == 0) {
      local_a0 = *(undefined4 *)(lVar5 + 0xe0);
      local_a8 = *(undefined4 *)(lVar5 + 0x60);
      local_a4 = *(undefined4 *)(lVar5 + 100);
      local_9c = (uint)*(byte *)(param_5 + 0x13);
      local_b0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      local_94 = 1;
      local_7c = 1;
      local_84 = local_a8;
      local_80 = local_a4;
      piVar6 = (int *)FTransitionAndLayoutManager::FindOrAddLayoutRW
                                (*(longlong *)(*(longlong *)(local_100 + 0x70) + 0x18b0) + 0x2e0,
                                 *(undefined8 *)(lVar5 + 0x80),0);
      puVar15 = (undefined8 *)(local_f8 + 0x40);
      iVar8 = *piVar6;
      if (iVar8 != 6) {
        local_178 = &local_118;
        local_118 = 1;
        local_110 = 1;
        local_108 = 1;
        VulkanSetImageLayout(*puVar15,*(undefined8 *)(local_130 + 0x80),iVar8,6);
      }
      local_170 = &local_b0;
      local_178 = (undefined8 *)CONCAT44(local_178._4_4_,1);
      (*DAT_146ab0280)(*puVar15,*(undefined8 *)(local_130 + 0x80),6,
                       *(undefined8 *)(local_138 + 0x18));
      lVar5 = local_130;
      if ((iVar8 == 0) || (*piVar6 == 6)) {
        *piVar6 = 6;
      }
      else {
        local_178 = &local_118;
        local_118 = 1;
        local_110 = 1;
        local_108 = 1;
        VulkanSetImageLayout(*puVar15,*(undefined8 *)(local_130 + 0x80),6);
      }
    }
    else {
      puVar15 = (undefined8 *)(local_f8 + 0x40);
      local_178 = (undefined8 *)CONCAT44(local_178._4_4_,0xffffffff);
      (*DAT_146ab0290)(*puVar15,*(undefined8 *)(local_138 + 0x18),0,uVar16);
    }
    local_150 = 0;
    local_158 = 0;
    local_c8 = *(undefined8 *)(local_138 + 0x18);
    local_160 = &local_e8;
    local_168 = 1;
    local_e4 = 0;
    local_dc = 0;
    local_d0 = 0;
    local_e8 = 0x2c;
    local_d8 = 0x1000;
    local_d4 = 0x8000;
    local_c0 = 0;
    local_170 = (undefined8 *)0x0;
    local_178 = (undefined8 *)((ulonglong)local_178 & 0xffffffff00000000);
    local_b8 = uVar16;
    (*DAT_146ab02d0)(*puVar15,0x1000,0x4000,0);
    FVulkanCommandBufferManager::SubmitUploadCmdBuffer(*(undefined8 *)(local_f0 + 0x2d8),0,0);
    FUN_141e2a740(*(undefined8 *)(local_100 + 0x70));
    lVar2 = *(longlong *)(local_138 + 0x10);
    FUN_141e29710(*(undefined8 *)(lVar2 + 0x28),*(undefined4 *)(lVar2 + 0x1c),
                  *(undefined4 *)(lVar2 + 0x18));
    iVar8 = (int)param_4[1];
    if (iVar8 < iVar9) {
      *(int *)(param_4 + 1) = iVar9;
      if (*(int *)((longlong)param_4 + 0xc) < iVar9) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_4,iVar8);
      }
    }
    else if ((iVar9 < iVar8) && (iVar9 != iVar8)) {
      *(int *)(param_4 + 1) = iVar9;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_4);
    }
    iVar9 = *(int *)(lVar5 + 0x88);
    _Dst = (undefined4 *)*param_4;
    if (iVar9 == 0x61) {
      local_140[0] = param_3[1];
      if (local_140[0] < param_3[3]) {
        uVar16 = (ulonglong)_tls_index;
        pvVar17 = ThreadLocalStoragePointer;
        do {
          local_120 = *param_3;
          puVar12 = (ushort *)
                    (*(longlong *)(*(longlong *)(*(longlong *)(local_138 + 0x10) + 0x28) + 0x18) +
                     (ulonglong)*(uint *)(*(longlong *)(local_138 + 0x10) + 0x24) +
                    ((ulonglong)(uint)(local_140[0] * *(int *)(local_130 + 0x60)) +
                    (longlong)local_120) * 8);
          if (local_120 < param_3[2]) {
            do {
              uVar1 = *puVar12;
              fVar14 = (float)((uVar1 & 0xffff8000) << 0x10);
              if ((uVar1 & 0x7c00) == 0) {
                uVar10 = uVar1 & 0x3ff;
                if ((uVar1 & 0x3ff) != 0) {
                  if ((*(int *)(*(longlong *)((longlong)pvVar17 + uVar16 * 8) + 0x38) <
                       DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1))
                  {
                    DAT_1468509d8 = 1.442695;
                    _Init_thread_footer(&DAT_1468509dc);
                  }
                  fVar19 = _guard_xfg_dispatch_icall_nop((float)uVar10);
                  iVar9 = 10 - (int)(fVar19 * DAT_1468509d8);
                  pvVar17 = ThreadLocalStoragePointer;
                  fVar14 = (float)(uVar10 << ((char)iVar9 + 0xdU & 0x1f) & 0x7fffff |
                                   (0x71U - iVar9 & 0xff) << 0x17 | (uint)fVar14);
                }
              }
              else if ((uVar1 & 0x7c00) == 0x7c00) {
                fVar14 = (float)((uint)fVar14 | 0x477fe000);
              }
              else {
                fVar14 = (float)(((uVar1 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar1 & 0x3ff) << 0xd |
                                (uint)fVar14);
              }
              local_148 = fVar14;
              iVar9 = (int)(local_148 * 255.0);
              uVar4 = 0;
              uVar3 = uVar4;
              if ((-1 < iVar9) && (uVar3 = 0xff, iVar9 < 0xff)) {
                uVar3 = (char)iVar9;
              }
              *(undefined1 *)((longlong)_Dst + 2) = uVar3;
              uVar1 = puVar12[1];
              fVar14 = (float)((uVar1 & 0xffff8000) << 0x10);
              if ((uVar1 & 0x7c00) == 0) {
                uVar10 = uVar1 & 0x3ff;
                if ((uVar1 & 0x3ff) != 0) {
                  if ((*(int *)(*(longlong *)((longlong)pvVar17 + uVar16 * 8) + 0x38) <
                       DAT_1468509dc) && (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1))
                  {
                    DAT_1468509d8 = 1.442695;
                    _Init_thread_footer(&DAT_1468509dc);
                  }
                  fVar19 = _guard_xfg_dispatch_icall_nop((float)uVar10);
                  iVar9 = 10 - (int)(fVar19 * DAT_1468509d8);
                  fVar14 = (float)(uVar10 << ((char)iVar9 + 0xdU & 0x1f) & 0x7fffff |
                                   (0x71U - iVar9 & 0xff) << 0x17 | (uint)fVar14);
                }
              }
              else if ((uVar1 & 0x7c00) == 0x7c00) {
                fVar14 = (float)((uint)fVar14 | 0x477fe000);
              }
              else {
                fVar14 = (float)(((uVar1 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar1 & 0x3ff) << 0xd |
                                (uint)fVar14);
              }
              local_148 = fVar14;
              iVar9 = (int)(local_148 * 255.0);
              uVar3 = uVar4;
              if ((-1 < iVar9) && (uVar3 = 0xff, iVar9 < 0xff)) {
                uVar3 = (char)iVar9;
              }
              *(undefined1 *)((longlong)_Dst + 1) = uVar3;
              uVar1 = puVar12[2];
              fVar14 = (float)((uVar1 & 0xffff8000) << 0x10);
              if ((uVar1 & 0x7c00) == 0) {
                uVar10 = uVar1 & 0x3ff;
                if ((uVar1 & 0x3ff) != 0) {
                  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar16 * 8) +
                               0x38) < DAT_1468509dc) &&
                     (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
                    DAT_1468509d8 = 1.442695;
                    _Init_thread_footer(&DAT_1468509dc);
                  }
                  fVar19 = _guard_xfg_dispatch_icall_nop((float)uVar10);
                  iVar9 = 10 - (int)(fVar19 * DAT_1468509d8);
                  fVar14 = (float)(uVar10 << ((char)iVar9 + 0xdU & 0x1f) & 0x7fffff |
                                   (0x71U - iVar9 & 0xff) << 0x17 | (uint)fVar14);
                }
              }
              else if ((uVar1 & 0x7c00) == 0x7c00) {
                fVar14 = (float)((uint)fVar14 | 0x477fe000);
              }
              else {
                fVar14 = (float)(((uVar1 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar1 & 0x3ff) << 0xd |
                                (uint)fVar14);
              }
              local_148 = fVar14;
              iVar9 = (int)(local_148 * 255.0);
              uVar3 = uVar4;
              if ((-1 < iVar9) && (uVar3 = 0xff, iVar9 < 0xff)) {
                uVar3 = (char)iVar9;
              }
              *(undefined1 *)_Dst = uVar3;
              uVar1 = puVar12[3];
              fVar14 = (float)((uVar1 & 0xffff8000) << 0x10);
              if ((uVar1 & 0x7c00) == 0) {
                uVar10 = uVar1 & 0x3ff;
                if ((uVar1 & 0x3ff) != 0) {
                  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar16 * 8) +
                               0x38) < DAT_1468509dc) &&
                     (_Init_thread_header(&DAT_1468509dc), DAT_1468509dc == -1)) {
                    DAT_1468509d8 = 1.442695;
                    _Init_thread_footer(&DAT_1468509dc);
                  }
                  fVar19 = _guard_xfg_dispatch_icall_nop((float)uVar10);
                  iVar9 = 10 - (int)(fVar19 * DAT_1468509d8);
                  fVar14 = (float)(uVar10 << ((char)iVar9 + 0xdU & 0x1f) & 0x7fffff |
                                   (0x71U - iVar9 & 0xff) << 0x17 | (uint)fVar14);
                }
              }
              else if ((uVar1 & 0x7c00) == 0x7c00) {
                fVar14 = (float)((uint)fVar14 | 0x477fe000);
              }
              else {
                fVar14 = (float)(((uVar1 >> 10 & 0x1f) + 0x70) * 0x800000 | (uVar1 & 0x3ff) << 0xd |
                                (uint)fVar14);
              }
              local_148 = fVar14;
              pvVar17 = ThreadLocalStoragePointer;
              iVar9 = (int)(local_148 * 255.0);
              if ((-1 < iVar9) && (uVar4 = 0xff, iVar9 < 0xff)) {
                uVar4 = (undefined1)iVar9;
              }
              puVar12 = puVar12 + 4;
              local_120 = local_120 + 1;
              *(undefined1 *)((longlong)_Dst + 3) = uVar4;
              _Dst = _Dst + 1;
            } while (local_120 < param_3[2]);
          }
          local_140[0] = local_140[0] + 1;
        } while (local_140[0] < param_3[3]);
      }
    }
    else if (iVar9 == 0x40) {
      iVar9 = param_3[1];
      if (iVar9 < param_3[3]) {
        iVar8 = param_3[2];
        do {
          uVar16 = (ulonglong)*param_3;
          puVar11 = (uint *)(*(longlong *)
                              (*(longlong *)(*(longlong *)(local_138 + 0x10) + 0x28) + 0x18) +
                             ((uint)(*(int *)(lVar5 + 0x60) * iVar9) + uVar16) * 4 +
                            (ulonglong)*(uint *)(*(longlong *)(local_138 + 0x10) + 0x24));
          if (*param_3 < iVar8) {
            do {
              uVar10 = *puVar11;
              local_130 = CONCAT44((float)(uVar10 >> 10 & 0x3ff) * 0.0009775171,
                                   (float)(uVar10 & 0x3ff) * 0.0009775171);
              local_128 = (float)(uVar10 >> 0x14 & 0x3ff) * 0.0009775171;
              local_124 = (float)(uVar10 >> 0x1e) * 0.33333334;
              puVar7 = (undefined4 *)FLinearColor::Quantize(&local_130,local_140);
              uVar10 = (int)uVar16 + 1;
              uVar16 = (ulonglong)uVar10;
              puVar11 = puVar11 + 1;
              *_Dst = *puVar7;
              _Dst = _Dst + 1;
              iVar8 = param_3[2];
            } while ((int)uVar10 < iVar8);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < param_3[3]);
      }
    }
    else if (iVar9 == 0x25) {
      iVar9 = param_3[1];
      if (iVar9 < param_3[3]) {
        iVar8 = param_3[2];
        do {
          uVar16 = (ulonglong)*param_3;
          puVar18 = (undefined1 *)
                    (*(longlong *)(*(longlong *)(*(longlong *)(local_138 + 0x10) + 0x28) + 0x18) +
                     ((uint)(*(int *)(lVar5 + 0x60) * iVar9) + uVar16) * 4 +
                    (ulonglong)*(uint *)(*(longlong *)(local_138 + 0x10) + 0x24));
          if (*param_3 < iVar8) {
            do {
              *(undefined1 *)((longlong)_Dst + 2) = *puVar18;
              uVar10 = (int)uVar16 + 1;
              uVar16 = (ulonglong)uVar10;
              *(undefined1 *)((longlong)_Dst + 1) = puVar18[1];
              *(undefined1 *)_Dst = puVar18[2];
              *(undefined1 *)((longlong)_Dst + 3) = puVar18[3];
              _Dst = _Dst + 1;
              iVar8 = param_3[2];
              puVar18 = puVar18 + 4;
            } while ((int)uVar10 < iVar8);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < param_3[3]);
      }
    }
    else if (iVar9 == 0x5b) {
      iVar9 = param_3[1];
      if (iVar9 < param_3[3]) {
        iVar8 = param_3[2];
        do {
          uVar16 = (ulonglong)*param_3;
          puVar12 = (ushort *)
                    (*(longlong *)(*(longlong *)(*(longlong *)(local_138 + 0x10) + 0x28) + 0x18) +
                     ((uint)(*(int *)(lVar5 + 0x60) * iVar9) + uVar16) * 8 +
                    (ulonglong)*(uint *)(*(longlong *)(local_138 + 0x10) + 0x24));
          if (*param_3 < iVar8) {
            do {
              local_130 = CONCAT44((float)puVar12[1] * 1.5259022e-05,(float)*puVar12 * 1.5259022e-05
                                  );
              local_128 = (float)puVar12[2] * 1.5259022e-05;
              local_124 = (float)puVar12[3] * 1.5259022e-05;
              puVar7 = (undefined4 *)FLinearColor::Quantize(&local_130,local_140);
              uVar10 = (int)uVar16 + 1;
              uVar16 = (ulonglong)uVar10;
              puVar12 = puVar12 + 4;
              *_Dst = *puVar7;
              _Dst = _Dst + 1;
              iVar8 = param_3[2];
            } while ((int)uVar10 < iVar8);
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < param_3[3]);
      }
    }
    else if (iVar9 == 0x2c) {
      iVar9 = param_3[1];
      pvVar17 = (void *)(*(longlong *)(*(longlong *)(*(longlong *)(local_138 + 0x10) + 0x28) + 0x18)
                         + ((ulonglong)(uint)(*(int *)(lVar5 + 0x60) * iVar9) + (longlong)*param_3)
                           * 4 + (ulonglong)*(uint *)(*(longlong *)(local_138 + 0x10) + 0x24));
      if (iVar9 < param_3[3]) {
        do {
          iVar8 = param_3[2];
          iVar13 = *param_3;
          _guard_xfg_dispatch_icall_nop(_Dst,pvVar17,(longlong)(iVar8 - iVar13) * 4);
          _Dst = _Dst + (iVar8 - iVar13);
          iVar9 = iVar9 + 1;
          pvVar17 = (void *)((longlong)pvVar17 + (ulonglong)*(uint *)(lVar5 + 0x60) * 4);
        } while (iVar9 < param_3[3]);
      }
    }
    FUN_141e2d4b0(*(longlong *)(local_100 + 0x70) + 0x3f0,local_f8,&local_138);
    FVulkanCommandBufferManager::PrepareForNewActiveCommandBuffer(*(undefined8 *)(local_f0 + 0x2d8))
    ;
  }
  return;
}



// FUNCTION 141e4f610 RHIReadSurfaceData body=252 status=ok
// SIG undefined RHIReadSurfaceData(void)

void FVulkanDynamicRHI::RHIReadSurfaceData
               (undefined8 param_1,undefined8 param_2,undefined4 *param_3,longlong *param_4,
               undefined8 *param_5)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  local_58 = 0;
  local_50 = 0;
  local_38 = *param_5;
  uStack_30 = param_5[1];
  local_28 = *(undefined4 *)(param_5 + 2);
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  FUN_141e4e9f0(local_48,param_2,&local_48,&local_58,&local_38);
  lVar7 = local_58;
  lVar1 = local_58 + (longlong)(int)local_50 * 4;
  for (lVar9 = local_58; lVar9 != lVar1; lVar9 = lVar9 + 4) {
    puVar8 = (undefined4 *)FLinearColor::FLinearColor(&local_48,lVar9);
    iVar3 = (int)param_4[1];
    *(int *)(param_4 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_4 + 0xc) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_4,iVar3);
    }
    uVar4 = puVar8[1];
    uVar5 = puVar8[2];
    uVar6 = puVar8[3];
    puVar2 = (undefined4 *)(*param_4 + (longlong)iVar3 * 0x10);
    *puVar2 = *puVar8;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
  }
  if (lVar7 != 0) {
    FMemory::Free(lVar7);
  }
  return;
}



// FUNCTION 141e4f710 FUN_141e4f710 body=406 status=ok
// SIG undefined FUN_141e4f710(void)

void FUN_141e4f710(longlong param_1,longlong *param_2,undefined4 *param_3,longlong *param_4,
                  int param_5,int param_6,undefined4 param_7)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (DAT_146aafc04 == 2) {
    lVar2 = (**(code **)(*param_2 + 0x20))(param_2);
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*param_2 + 8))(param_2);
    }
    else {
      lVar2 = (**(code **)(*param_2 + 0x20))();
    }
    iVar5 = 0;
    iVar6 = (*(uint *)(lVar2 + 0x94) >> ((byte)param_7 & 0x1f)) *
            (*(uint *)(lVar2 + 0x90) >> ((byte)param_7 & 0x1f));
    *(undefined4 *)(param_4 + 1) = 0;
    iVar4 = 0;
    if (*(int *)((longlong)param_4 + 0xc) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_4);
      iVar4 = *(int *)((longlong)param_4 + 0xc);
      iVar5 = (int)param_4[1];
    }
    iVar1 = iVar5 + iVar6;
    *(int *)(param_4 + 1) = iVar1;
    if (iVar4 < iVar1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_4);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*param_4 + (longlong)iVar5 * 8),0,(longlong)iVar6 << 3);
  }
  else {
    FUN_141e2a5e0(*(undefined8 *)(param_1 + 0x70));
    uVar3 = FVulkanCommandBufferManager::GetUploadCmdBuffer
                      (*(undefined8 *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18b0) + 0x2d8));
    lVar2 = (**(code **)(*param_2 + 0x20))(param_2);
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*param_2 + 8))(param_2);
    }
    else {
      lVar2 = (**(code **)(*param_2 + 0x20))();
      param_6 = param_5 + param_6 * 6;
    }
    local_18 = *param_3;
    uStack_14 = param_3[1];
    uStack_10 = param_3[2];
    uStack_c = param_3[3];
    FUN_141e3eb30(local_28,*(undefined8 *)(param_1 + 0x70),uVar3,lVar2 + 0x70,param_7,param_6,
                  &local_18,param_4);
    FVulkanCommandBufferManager::PrepareForNewActiveCommandBuffer
              (*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18b0) + 0x2d8));
  }
  return;
}



// FUNCTION 141e4f8b0 FUN_141e4f8b0 body=662 status=ok
// SIG undefined FUN_141e4f8b0(void)

void FUN_141e4f8b0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  byte bVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 *puVar13;
  int local_res8 [2];
  longlong *local_38;
  undefined8 *local_30;
  undefined8 *puVar12;
  
  lVar4 = *(longlong *)(param_1 + 0x2d8);
  if (*(longlong *)(lVar4 + 0x78) != 0) {
    FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar4,0,0);
  }
  lVar4 = *(longlong *)(lVar4 + 0x70);
  puVar12 = (undefined8 *)0x0;
  puVar13 = *(undefined8 **)(param_1 + 0x4f8);
  plVar1 = puVar13 + 8;
  bVar9 = ~(*(byte *)(lVar4 + 0x2d) >> 1) & 1;
  if (param_2 == *plVar1) {
    if (bVar9 == 0) goto LAB_141e4fa24;
  }
  else {
    *plVar1 = param_2;
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(puVar13 + 10,local_res8,param_2);
    puVar7 = puVar12;
    if (local_res8[0] != -1) {
      puVar7 = (undefined8 *)(puVar13[10] + (longlong)local_res8[0] * 0x18);
    }
    puVar5 = puVar7 + 1;
    if (puVar7 == (undefined8 *)0x0) {
      puVar5 = puVar12;
    }
    if (puVar5 == (undefined8 *)0x0) {
      lVar6 = operator_new(0x218);
      puVar7 = puVar12;
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)
                 FVulkanGraphicsPipelineDescriptorState::FVulkanGraphicsPipelineDescriptorState
                           (lVar6,*puVar13,param_2);
      }
      local_30 = puVar13 + 9;
      *local_30 = puVar7;
      local_38 = plVar1;
      FUN_1405c0510(puVar13 + 10,local_res8,&local_38,0);
      bVar9 = 1;
      *(uint *)(puVar13 + 6) = (uint)*(byte *)(param_2 + 0x48);
    }
    else {
      bVar9 = 1;
      puVar13[9] = *puVar5;
      *(uint *)(puVar13 + 6) = (uint)*(byte *)(param_2 + 0x48);
    }
  }
  lVar6 = puVar13[9];
  *(undefined8 *)(lVar6 + 0x1e8) = *(undefined8 *)(lVar6 + 0x1c0);
  *(undefined8 *)(lVar6 + 0x1f0) = *(undefined8 *)(lVar6 + 0x1c8);
  *(undefined4 *)(lVar6 + 0x1f8) = *(undefined4 *)(lVar6 + 0x1d0);
  *(undefined4 *)(lVar6 + 0x1fc) = *(undefined4 *)(lVar6 + 0x1d4);
  *(undefined4 *)(lVar6 + 0x200) = *(undefined4 *)(lVar6 + 0x1d8);
  *(undefined4 *)(lVar6 + 0x204) = *(undefined4 *)(lVar6 + 0x1dc);
  *(undefined8 *)(lVar6 + 0x208) = *(undefined8 *)(lVar6 + 0x1e0);
  *(undefined1 *)(lVar6 + 0x90) = 1;
  if (bVar9 != 0) {
    (*DAT_146ab01c8)(*(undefined8 *)(lVar4 + 0x40),0,
                     *(undefined8 *)
                      (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x4f8) + 0x40) + 0x18) +
                      0x10));
    *(byte *)(lVar4 + 0x2d) = *(byte *)(lVar4 + 0x2d) | 2;
    *(undefined4 *)(*(longlong *)(param_1 + 0x4f8) + 0x34) = 0;
  }
LAB_141e4fa24:
  puVar13 = puVar12;
  if (0 < *(int *)(param_1 + 0x4f0)) {
    do {
      lVar4 = *(longlong *)(param_1 + 0x4f8);
      lVar10 = (longlong)*(int *)((longlong)puVar13 + *(longlong *)(param_1 + 0x4e8) + 8);
      lVar6 = *(longlong *)((longlong)puVar13 + *(longlong *)(param_1 + 0x4e8));
      lVar8 = *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x48) + 200) + 0x30);
      uVar3 = *(undefined2 *)(lVar8 + 2 + lVar10 * 4);
      uVar2 = *(undefined1 *)(lVar8 + lVar10 * 4);
      if (lVar6 != 0) {
        FUN_141e67a60(lVar6);
        if (*(longlong *)(lVar6 + 0x20) == 0) {
          if (*(longlong *)(lVar6 + 0x60) == 0) {
            if (*(longlong *)(lVar6 + 0x28) != 0) {
              lVar8 = *(longlong *)(lVar4 + 0x2a8);
              TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
              ::FindId(lVar8 + 0x380,local_res8,*(undefined8 *)(lVar6 + 0x38));
              if (local_res8[0] == -1) {
                lVar8 = 0;
              }
              else {
                lVar8 = *(longlong *)(lVar8 + 0x380) + (longlong)local_res8[0] * 0x18;
              }
              FVulkanCommonPipelineDescriptorState::SetUAVTextureView
                        (*(undefined8 *)(lVar4 + 0x48),uVar2,uVar3,lVar6 + 0x30,
                         *(undefined4 *)(lVar8 + 8));
            }
          }
          else {
            FVulkanCommonPipelineDescriptorState::SetSRVBufferViewState
                      (*(undefined8 *)(lVar4 + 0x48),uVar2,uVar3);
          }
        }
        else {
          FUN_141e53ce0(*(undefined8 *)(lVar4 + 0x48),uVar2,uVar3);
        }
      }
      uVar11 = (int)puVar12 + 1;
      puVar12 = (undefined8 *)(ulonglong)uVar11;
      puVar13 = puVar13 + 2;
    } while ((int)uVar11 < *(int *)(param_1 + 0x4f0));
  }
  return;
}



// FUNCTION 141e4fb50 FUN_141e4fb50 body=494 status=ok
// SIG undefined FUN_141e4fb50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e4fb50(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 *param_4,
                  uint param_5,longlong param_6)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_318 [32];
  undefined8 local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined1 local_2c8 [424];
  longlong local_120 [8];
  uint local_e0;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  if (param_4 == (undefined4 *)0x0) {
    local_2f8 = 0;
    uStack_2f0 = 0;
    uStack_2ec = 0x22;
    local_2d8 = 0;
    uStack_2d4 = 0;
    uStack_2d0 = 0;
    uStack_2cc = 0x22;
  }
  else {
    local_2d8 = *param_4;
    uStack_2d4 = param_4[1];
    uStack_2d0 = param_4[2];
    uStack_2cc = param_4[3];
  }
  if (((int)param_2 == 1) && ((param_3 == (longlong *)0x0 || (*param_3 == 0)))) {
    param_2 = 0;
  }
  FUN_140c63b80(local_2c8,param_2,param_3,&local_2d8);
  if (param_5 != 0) {
    uVar7 = (ulonglong)param_5;
    plVar8 = local_120;
    local_e0 = param_5;
    do {
      lVar6 = *(longlong *)((param_6 - (longlong)local_120) + (longlong)plVar8);
      puVar3 = (undefined8 *)*plVar8;
      *plVar8 = lVar6;
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          if ((*(char *)(puVar3 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
            LOCK();
            bVar9 = *(int *)((longlong)puVar3 + 0xc) == 0;
            if (bVar9) {
              *(int *)((longlong)puVar3 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar9) {
              uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar5 == 0) {
                lVar6 = 0;
              }
              else {
                lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar6 + 8) = puVar3;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
      }
      plVar8 = plVar8 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_141e4fd40(param_1,local_2c8);
  FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(local_2c8);
  return;
}



// FUNCTION 141e4fd40 FUN_141e4fd40 body=750 status=ok
// SIG undefined FUN_141e4fd40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e4fd40(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_3e8 [32];
  longlong *local_3c8;
  undefined1 *local_3c0;
  longlong *local_3b8;
  longlong *local_3b0;
  undefined8 local_3a8;
  int iStack_3a0;
  undefined4 uStack_39c;
  undefined1 local_398 [840];
  int local_50;
  int local_4c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_3e8;
  FUN_141e383e0(local_398,*(undefined8 *)(param_1 + 0x188),param_2);
  FTransitionAndLayoutManager::FGenerateMipsInfo::Reset(param_1 + 0x3d0);
  plVar9 = (longlong *)0x0;
  plVar4 = plVar9;
  plVar5 = plVar9;
  if ((local_50 != 0) && (plVar4 = (longlong *)0x0, plVar5 = (longlong *)0x0, local_4c != 0)) {
    plVar4 = (longlong *)FUN_141e48d10(param_1 + 0x2e0,*(undefined8 *)(param_1 + 0x188),local_398);
    local_3c8 = plVar4;
    plVar5 = (longlong *)
             FTransitionAndLayoutManager::GetOrCreateFramebuffer
                       (param_1 + 0x2e0,*(undefined8 *)(param_1 + 0x188),param_2,local_398);
  }
  if ((((plVar5 == *(longlong **)(param_1 + 0x4b0)) && (plVar4 != (longlong *)0x0)) &&
      (lVar7 = *(longlong *)(param_1 + 0x4a8), lVar7 != 0)) &&
     (*(int *)(lVar7 + 0x340) == (int)plVar4[0x68])) {
    plVar6 = plVar9;
    plVar10 = plVar9;
    if ((ulonglong)*(byte *)(lVar7 + 0x334) != 0) {
      do {
        if ((((*(int *)((longlong)plVar6 + 0xdc + (longlong)plVar4) == 1) ||
             (*(int *)((longlong)plVar6 + 0xe4 + (longlong)plVar4) == 1)) ||
            ((*(int *)((longlong)(plVar6 + 0x1c) + (longlong)plVar4) == 0 &&
             (*(int *)((longlong)plVar6 + lVar7 + 0xe0) == 1)))) ||
           (((*(int *)((longlong)(plVar6 + 0x1d) + (longlong)plVar4) == 0 &&
             (*(int *)((longlong)plVar6 + lVar7 + 0xe8) == 1)) ||
            (*(int *)((longlong)(plVar6 + 0x1e) + (longlong)plVar4) !=
             *(int *)((longlong)plVar6 + lVar7 + 0xf0))))) goto LAB_141e4fe8b;
        plVar10 = (longlong *)((longlong)plVar10 + 1);
        plVar6 = (longlong *)((longlong)plVar6 + 0x24);
      } while ((longlong)plVar10 < (longlong)(ulonglong)*(byte *)(lVar7 + 0x334));
    }
  }
  else {
LAB_141e4fe8b:
    lVar7 = *(longlong *)(param_1 + 0x2d8);
    if (*(longlong *)(lVar7 + 0x78) != 0) {
      FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar7,0,0);
    }
    lVar7 = *(longlong *)(lVar7 + 0x70);
    if (*(char *)(lVar7 + 0x2c) == '\x02') {
      (*DAT_146ab0318)(*(undefined8 *)(lVar7 + 0x40));
      *(undefined1 *)(lVar7 + 0x2c) = 1;
      *(undefined8 *)(param_1 + 0x4a8) = 0;
      if (DAT_146aaf890 != 0) {
        FVulkanCommandBufferManager::SubmitActiveCmdBuffer(*(undefined8 *)(param_1 + 0x2d8),0);
        FVulkanCommandBufferManager::PrepareForNewActiveCommandBuffer
                  (*(undefined8 *)(param_1 + 0x2d8));
        lVar7 = *(longlong *)(param_1 + 0x2d8);
        if (*(longlong *)(lVar7 + 0x78) != 0) {
          FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar7,0,0);
        }
        lVar7 = *(longlong *)(lVar7 + 0x70);
      }
    }
    if (*(char *)(param_1 + 0x198) != '\0') {
      FUN_141e29600(param_1);
      lVar7 = *(longlong *)(param_1 + 0x2d8);
      *(undefined1 *)(param_1 + 0x198) = 0;
      if (*(longlong *)(lVar7 + 0x78) != 0) {
        FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar7,0,0);
      }
      lVar7 = *(longlong *)(lVar7 + 0x70);
    }
    if (((plVar4 != (longlong *)0x0) && (plVar5 != (longlong *)0x0)) &&
       (((param_2[0x32] != 0 || (1 < (int)param_2[0x18])) ||
        (((int)param_2[0x18] == 1 && (*param_2 != 0)))))) {
      local_3c0 = local_398;
      local_3c8 = param_2;
      local_3b8 = plVar4;
      local_3b0 = plVar5;
      FUN_141e41230(param_1 + 0x2e0,param_1,*(undefined8 *)(param_1 + 0x188),lVar7);
    }
    plVar4 = (longlong *)(param_1 + 0x4e8);
    *(undefined4 *)(param_1 + 0x4f0) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x4f4)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar4,0);
    }
    uVar2 = *(uint *)(param_2 + 0x3d);
    if (uVar2 != 0) {
      param_2 = param_2 + 0x35;
      do {
        local_3a8 = *param_2;
        iVar8 = (int)plVar9;
        if (local_3a8 != 0) {
          iVar3 = *(int *)(param_1 + 0x4f0);
          *(int *)(param_1 + 0x4f0) = iVar3 + 1;
          iStack_3a0 = iVar8;
          if (*(int *)(param_1 + 0x4f4) < iVar3 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar4,iVar3);
          }
          puVar1 = (undefined4 *)(*plVar4 + (longlong)iVar3 * 0x10);
          *puVar1 = (undefined4)local_3a8;
          puVar1[1] = local_3a8._4_4_;
          puVar1[2] = iStack_3a0;
          puVar1[3] = uStack_39c;
        }
        plVar9 = (longlong *)(ulonglong)(iVar8 + 1U);
        param_2 = param_2 + 1;
      } while (iVar8 + 1U < uVar2);
    }
  }
  return;
}



// FUNCTION 141e50040 FUN_141e50040 body=371 status=ok
// SIG undefined FUN_141e50040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e50040(undefined8 param_1,undefined4 param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_108 [32];
  undefined4 local_e8 [2];
  undefined1 local_e0 [72];
  undefined1 *local_98;
  uint local_90;
  uint local_8c;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  if (0 < param_4) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
    puVar2 = (undefined1 *)0x0;
    local_98 = (undefined1 *)0x0;
    local_8c = 0;
    local_90 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_4c = 0xffffffff;
    puVar3 = puVar2;
    puVar4 = puVar2;
    puVar5 = puVar2;
    if (0 < param_4) {
      do {
        plVar1 = *(longlong **)(param_3 + (longlong)puVar3 * 8);
        if (plVar1 != (longlong *)0x0) {
          local_90 = (int)puVar4 + 1;
          if ((int)puVar2 < (int)local_90) {
            TArray<FRHITexture_*,TInlineAllocator<9,FDefaultAllocator>_>::ResizeGrow
                      (local_e0,puVar4);
            puVar5 = local_98;
          }
          puVar2 = local_e0;
          if (puVar5 != (undefined1 *)0x0) {
            puVar2 = puVar5;
          }
          *(longlong **)(puVar2 + (longlong)(int)puVar4 * 8) = plVar1;
          plVar1 = (longlong *)(**(code **)(*plVar1 + 0x48))(plVar1);
          (**(code **)(*plVar1 + 0x20))(plVar1,param_1,param_2);
          puVar2 = (undefined1 *)(ulonglong)local_8c;
          puVar4 = (undefined1 *)(ulonglong)local_90;
          puVar5 = local_98;
        }
        puVar3 = puVar3 + 1;
      } while ((longlong)puVar3 < (longlong)param_4);
      if (0 < (int)puVar4) {
        local_e8[0] = param_2;
        FUN_141e55010(param_1,local_e8);
        puVar5 = local_98;
      }
      if (local_68 != 0) {
        FMemory::Free();
        puVar5 = local_98;
      }
      if (puVar5 != (undefined1 *)0x0) {
        FMemory::Free(puVar5);
      }
    }
  }
  return;
}



// FUNCTION 141e501c0 FUN_141e501c0 body=382 status=ok
// SIG undefined FUN_141e501c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e501c0(undefined8 param_1,undefined4 param_2,longlong param_3,int param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_108 [32];
  undefined4 local_e8 [2];
  undefined1 local_e0 [72];
  undefined1 *local_98;
  uint local_90;
  uint local_8c;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  if (0 < param_4) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
    puVar2 = (undefined1 *)0x0;
    local_98 = (undefined1 *)0x0;
    local_8c = 0;
    local_90 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_4c = param_5;
    puVar3 = puVar2;
    puVar4 = puVar2;
    puVar5 = puVar2;
    if (0 < param_4) {
      do {
        plVar1 = *(longlong **)(param_3 + (longlong)puVar3 * 8);
        if (plVar1 != (longlong *)0x0) {
          local_90 = (int)puVar4 + 1;
          if ((int)puVar2 < (int)local_90) {
            TArray<FRHITexture_*,TInlineAllocator<9,FDefaultAllocator>_>::ResizeGrow
                      (local_e0,puVar4);
            puVar5 = local_98;
          }
          puVar2 = local_e0;
          if (puVar5 != (undefined1 *)0x0) {
            puVar2 = puVar5;
          }
          *(longlong **)(puVar2 + (longlong)(int)puVar4 * 8) = plVar1;
          plVar1 = (longlong *)(**(code **)(*plVar1 + 0x48))(plVar1);
          (**(code **)(*plVar1 + 0x20))(plVar1,param_1,param_2);
          puVar2 = (undefined1 *)(ulonglong)local_8c;
          puVar4 = (undefined1 *)(ulonglong)local_90;
          puVar5 = local_98;
        }
        puVar3 = puVar3 + 1;
      } while ((longlong)puVar3 < (longlong)param_4);
      if (0 < (int)puVar4) {
        local_e8[0] = param_2;
        FUN_141e55010(param_1,local_e8);
        puVar5 = local_98;
      }
      if (local_68 != 0) {
        FMemory::Free();
        puVar5 = local_98;
      }
      if (puVar5 != (undefined1 *)0x0) {
        FMemory::Free(puVar5);
      }
    }
  }
  return;
}



// FUNCTION 141e50340 FUN_141e50340 body=355 status=ok
// SIG undefined FUN_141e50340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e50340(undefined8 param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
                  int param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined4 local_e0 [20];
  longlong local_90;
  undefined8 local_88;
  undefined1 local_80 [32];
  undefined1 *local_60;
  uint local_58;
  uint uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  puVar1 = (undefined1 *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_60 = (undefined1 *)0x0;
  local_58 = 0;
  uStack_54 = 0;
  local_50 = 0;
  local_44 = 0xffffffff;
  puVar3 = puVar1;
  puVar4 = puVar1;
  puVar5 = puVar1;
  local_e8 = param_1;
  if (0 < (longlong)param_5) {
    do {
      lVar2 = *(longlong *)(param_4 + (longlong)puVar3 * 8);
      if (lVar2 != 0) {
        local_58 = (int)puVar4 + 1;
        if ((int)puVar1 < (int)local_58) {
          TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                    (local_80,puVar4);
          lVar2 = *(longlong *)(param_4 + (longlong)puVar3 * 8);
          puVar5 = local_60;
        }
        puVar1 = local_80;
        if (puVar5 != (undefined1 *)0x0) {
          puVar1 = puVar5;
        }
        *(longlong *)(puVar1 + (longlong)(int)puVar4 * 8) = lVar2;
        puVar1 = (undefined1 *)(ulonglong)uStack_54;
        puVar4 = (undefined1 *)(ulonglong)local_58;
        puVar5 = local_60;
      }
      puVar3 = puVar3 + 1;
    } while ((longlong)puVar3 < (longlong)param_5);
    if (0 < (int)puVar4) {
      local_50 = param_6;
      local_e0[0] = param_2;
      local_48 = param_3;
      FUN_141e55010(local_e8,local_e0);
      puVar5 = local_60;
    }
    if (puVar5 != (undefined1 *)0x0) {
      FMemory::Free(puVar5);
    }
    if (local_90 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 141e504b0 RHIUnlockTexture2D body=27 status=ok
// SIG undefined RHIUnlockTexture2D(void)

void FVulkanDynamicRHI::RHIUnlockTexture2D
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  FUN_141e5ffb0(param_1,0,param_2,param_3,param_4);
  return;
}



// FUNCTION 141e504d0 RHIUpdateTexture2D body=45 status=ok
// SIG undefined RHIUpdateTexture2D(void)

void FVulkanDynamicRHI::RHIUpdateTexture2D
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6)

{
  FUN_141e60220(param_1,0,param_2,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 141e50500 RHIUpdateTexture3D body=56 status=ok
// SIG undefined RHIUpdateTexture3D(void)

void FVulkanDynamicRHI::RHIUpdateTexture3D
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  FUN_141e604b0(param_1,0,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 141e50540 ReadFrom body=516 status=ok
// SIG undefined ReadFrom(void)

void FVulkanPipelineStateCacheManager::FGfxPipelineEntry::FRenderTargets::ReadFrom
               (longlong *param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0xcd);
  lVar10 = 8;
  *(undefined1 *)((longlong)param_1 + 0x41) = *(undefined1 *)((longlong)param_2 + 0x335);
  lVar6 = 8;
  *(bool *)((longlong)param_1 + 0x42) = *(char *)((longlong)param_2 + 0x337) != '\0';
  *(bool *)((longlong)param_1 + 0x43) = *(char *)(param_2 + 0xce) != '\0';
  *(undefined1 *)((longlong)param_1 + 0x44) = *(undefined1 *)((longlong)param_2 + 0x33a);
  *(undefined4 *)(param_1 + 9) = param_2[0xd0];
  *(float *)((longlong)param_1 + 0x4c) = (float)(uint)param_2[0xd2];
  *(float *)(param_1 + 10) = (float)(uint)param_2[0xd3];
  *(float *)((longlong)param_1 + 0x54) = (float)(uint)param_2[0xd4];
  puVar7 = param_2;
  do {
    lVar2 = param_1[1];
    iVar3 = (int)lVar2 + 1;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1);
    }
    puVar4 = (undefined4 *)((longlong)(int)lVar2 * 0x10 + *param_1);
    *puVar4 = *puVar7;
    piVar1 = puVar7 + 1;
    puVar7 = puVar7 + 2;
    *(longlong *)(puVar4 + 2) = (longlong)*piVar1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  puVar7 = param_2 + 0x12;
  do {
    lVar6 = param_1[3];
    iVar3 = (int)lVar6 + 1;
    *(int *)(param_1 + 3) = iVar3;
    if (*(int *)((longlong)param_1 + 0x1c) < iVar3) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 2);
    }
    puVar4 = (undefined4 *)((longlong)(int)lVar6 * 0x10 + param_1[2]);
    *puVar4 = *puVar7;
    piVar1 = puVar7 + 1;
    puVar7 = puVar7 + 2;
    *(longlong *)(puVar4 + 2) = (longlong)*piVar1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  *(undefined4 *)(param_1 + 4) = param_2[0x10];
  param_1[5] = (longlong)(int)param_2[0x11];
  lVar6 = param_1[7];
  iVar3 = (int)lVar6 + 0x11;
  *(int *)(param_1 + 7) = iVar3;
  if (*(int *)((longlong)param_1 + 0x3c) < iVar3) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1 + 6);
  }
  ::_guard_xfg_dispatch_icall_nop((void *)((longlong)(int)lVar6 * 0x20 + param_1[6]),0,0x220);
  uVar9 = 0;
  uVar5 = uVar9;
  puVar7 = param_2 + 0x36;
  do {
    lVar6 = param_1[6];
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar8;
    *(undefined4 *)(uVar5 + lVar6) = puVar7[-1];
    *(undefined1 *)(uVar5 + 4 + lVar6) = *(undefined1 *)(puVar7 + -2);
    *(undefined1 *)(uVar5 + 5 + lVar6) = *(undefined1 *)puVar7;
    *(undefined1 *)(uVar5 + 6 + lVar6) = *(undefined1 *)(puVar7 + 1);
    *(undefined1 *)(uVar5 + 7 + lVar6) = *(undefined1 *)(puVar7 + 2);
    *(undefined1 *)(uVar5 + 8 + lVar6) = *(undefined1 *)(puVar7 + 3);
    *(undefined1 *)(uVar5 + 9 + lVar6) = *(undefined1 *)(puVar7 + 4);
    *(longlong *)(uVar5 + 0x10 + lVar6) = (longlong)(int)puVar7[5];
    *(longlong *)(uVar5 + 0x18 + lVar6) = (longlong)(int)puVar7[6];
    uVar5 = uVar5 + 0x20;
    puVar7 = puVar7 + 9;
  } while (uVar8 < 0x11);
  return;
}



// FUNCTION 141e50750 FUN_141e50750 body=87 status=ok
// SIG undefined FUN_141e50750(void)

void FUN_141e50750(void)

{
  undefined8 uVar1;
  char cVar2;
  DWORD DVar3;
  
  uVar1 = *(undefined8 *)(*(longlong *)(DAT_146aafea8 + 0x70) + 0x1930);
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) goto LAB_141e5079a;
  }
  FUN_141ee24f0(0);
LAB_141e5079a:
  FUN_141e46420(uVar1);
  return;
}



// FUNCTION 141e507b0 Rehash body=521 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry>,TDefaultMapHashableKeyFuncs<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_141e508ef;
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
LAB_141e508ef:
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
        lVar6 = (longlong)iStack_1c * 0x30 + *param_1;
        uVar5 = (int)*plVar2 - 1U & *(uint *)(lVar6 + 0x10);
        *(uint *)(lVar6 + 0x2c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x28) =
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



// FUNCTION 141e509c0 Rehash body=516 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry>,TDefaultMapHashableKeyFuncs<FVulkanDSetsKey,FVulkanDescriptorSetCache::FSetsEntry,0>,FDefaultSetAllocator>
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
  uint *puVar11;
  ulonglong uVar12;
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
      uVar12 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
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
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puStack_28;
      }
      uVar5 = *puVar11;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_141e50aff;
        uVar5 = puVar11[lVar6 + 1];
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
LAB_141e50aff:
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
        puVar11 = (uint *)((longlong)iStack_1c * 0x68 + *param_1);
        uVar5 = (int)*plVar2 - 1U & *puVar11;
        puVar11[0x19] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar11[0x18] =
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



// FUNCTION 141e50bd0 Rehash body=529 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*>,TDefaultMapHashableKeyFuncs<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_141e50d0f;
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
LAB_141e50d0f:
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
        lVar6 = (longlong)iStack_1c * 400 + *param_1;
        uVar5 = (int)*plVar2 - 1U & *(uint *)(lVar6 + 0x40);
        *(uint *)(lVar6 + 0x18c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x188) =
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



// FUNCTION 141e50df0 Release body=168 status=ok
// SIG undefined Release(void)

int TVulkanBaseShader<FRHIComputeShader,5,32>::Release(longlong param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  puVar1 = (undefined8 *)(param_1 + -0x38);
  LOCK();
  piVar2 = (int *)(param_1 + -0x30);
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar3 + -1 == 0) {
    if ((*(char *)(param_1 + -0x28) == '\0') &&
       ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0'))))
    {
      LOCK();
      bVar7 = *(int *)(param_1 + -0x2c) == 0;
      if (bVar7) {
        *(int *)(param_1 + -0x2c) = 1;
      }
      UNLOCK();
      if (bVar7) {
        uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
        if (uVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
        }
        *(undefined8 **)(lVar6 + 8) = puVar1;
        FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940,uVar5);
        return 0;
      }
    }
    else {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return iVar3 + -1;
}



// FUNCTION 141e50ea0 Release body=168 status=ok
// SIG undefined Release(void)

int TVulkanBaseShader<FRHIDomainShader,2,4>::Release(longlong param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  puVar1 = (undefined8 *)(param_1 + -0x30);
  LOCK();
  piVar2 = (int *)(param_1 + -0x28);
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (iVar3 + -1 == 0) {
    if ((*(char *)(param_1 + -0x20) == '\0') &&
       ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0'))))
    {
      LOCK();
      bVar7 = *(int *)(param_1 + -0x24) == 0;
      if (bVar7) {
        *(int *)(param_1 + -0x24) = 1;
      }
      UNLOCK();
      if (bVar7) {
        uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
        if (uVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
        }
        *(undefined8 **)(lVar6 + 8) = puVar1;
        FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940,uVar5);
        return 0;
      }
    }
    else {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return iVar3 + -1;
}



// FUNCTION 141e50f50 ReleasePoolSet body=27 status=ok
// SIG undefined ReleasePoolSet(void)

void FVulkanDescriptorPoolsManager::ReleasePoolSet(undefined8 param_1,longlong param_2)

{
  FVulkanDescriptorPoolSetContainer::Reset(param_2);
  *(undefined1 *)(param_2 + 0x5c) = 0;
  return;
}



// FUNCTION 141e50f70 Remove body=231 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<unsigned_int,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned_int,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  int *piVar8;
  undefined4 *puVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar3 = *param_1;
    lVar7 = (longlong)
            (int)((int)param_1[9] - 1U & *(uint *)(lVar3 + 0xc + (longlong)param_2 * 0x10));
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    piVar8 = (int *)((longlong)plVar6 + lVar7 * 4);
    iVar2 = *(int *)((longlong)plVar6 + lVar7 * 4);
    while (iVar2 != -1) {
      if (iVar2 == param_2) {
        *piVar8 = *(int *)(lVar3 + 8 + (longlong)param_2 * 0x10);
        break;
      }
      piVar8 = (int *)(lVar3 + 8 + (longlong)iVar2 * 0x10);
      iVar2 = *piVar8;
    }
  }
  bVar4 = (byte)param_2 & 0x1f;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  uVar5 = 0xffffffff;
  puVar9 = (undefined4 *)((longlong)param_2 * 0x10 + *param_1);
  *puVar9 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  puVar9[1] = uVar5;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  *(int *)(param_1 + 6) = param_2;
  plVar6 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 +
                   (longlong)((int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
  return;
}



// FUNCTION 141e51060 RemoveAtImpl body=195 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + (longlong)param_2 * 0x18);
    iVar3 = param_3;
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x18),
                 (void *)(*param_1 + (longlong)(param_2 + param_3) * 0x18),(longlong)iVar1 * 0x18);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 141e51130 FUN_141e51130 body=306 status=ok
// SIG undefined FUN_141e51130(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141e51130(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  
  if (*(char *)(param_1 + 0x80) == '\0') {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_141ed0a30();
  }
  if ((DAT_1464c9548 != 0) && (0 < iVar4)) {
    QueryPerformanceCounter(&local_res8);
    dVar3 = (double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) * DAT_1468b02f8;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    dVar3 = dVar3 + 16777216.0;
    dVar1 = (double)iVar4 * 16.666666666666668;
    dVar2 = (dVar3 - *(double *)(param_1 + 0x40)) * 1000.0 + *(double *)(param_1 + 0x48);
    *(double *)(param_1 + 0x48) = dVar2;
    dVar2 = dVar2 / (double)*(uint *)(param_1 + 0x38) + dVar1 * 0.1;
    if (1000 < *(uint *)(param_1 + 0x38)) {
      *(double *)(param_1 + 0x48) = dVar2;
      *(undefined4 *)(param_1 + 0x38) = 1;
    }
    if (dVar2 < dVar1) {
      QueryPerformanceCounter(&local_res10);
      FUN_1416b1810((float)((dVar1 - dVar2) * 0.0010000000474974513));
      QueryPerformanceCounter(&local_res8);
      DAT_146ac3ad0 = DAT_146ac3ad0 + (local_res8.s.LowPart - local_res10._0_4_);
      _DAT_146ac3af0 = _DAT_146ac3af0 + 1;
    }
    *(double *)(param_1 + 0x40) = dVar3;
  }
  return;
}



// FUNCTION 141e51270 FUN_141e51270 body=294 status=ok
// SIG undefined FUN_141e51270(void)

void FUN_141e51270(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *_Dst;
  ulonglong uVar4;
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
      plVar1 = *(longlong **)(*local_38 + 0x10 + (longlong)local_1c * 0x28);
      if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(plVar1,0x10);
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
  iVar2 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2)
  ;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar4 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1 + 0x38;
      }
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar3 + uVar4 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 141e513a0 FUN_141e513a0 body=294 status=ok
// SIG undefined FUN_141e513a0(void)

void FUN_141e513a0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *_Dst;
  ulonglong uVar4;
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
      plVar1 = *(longlong **)((longlong)local_1c * 0x68 + *local_38 + 0x10);
      if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        FMemory::operator_delete(plVar1,0x10);
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  uVar5 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar2 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2)
  ;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar4 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1 + 0x38;
      }
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar3 + uVar4 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 141e514d0 Reset body=197 status=ok
// SIG undefined Reset(void)

void FTransitionAndLayoutManager::FGenerateMipsInfo::Reset(undefined4 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  
  *(undefined8 *)(param_1 + 2) = 0xffffffffffffffff;
  *param_1 = 0;
  puVar4 = (undefined8 *)(param_1 + 4);
  *(undefined2 *)(param_1 + 1) = 0;
  lVar3 = 8;
  do {
    iVar1 = *(int *)((longlong)puVar4 + 0xc);
    plVar2 = (longlong *)*puVar4;
    iVar5 = *(int *)(puVar4 + 1);
    if (iVar1 < 0) {
      if (iVar5 != 0) {
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar1 = *(int *)((longlong)puVar4 + 0xc);
      }
      *(undefined4 *)(puVar4 + 1) = 0;
      if (iVar1 != 0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(puVar4,0);
      }
    }
    else {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 2;
      }
      *(undefined4 *)(puVar4 + 1) = 0;
    }
    puVar4[2] = 0;
    puVar4 = puVar4 + 3;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}



// FUNCTION 141e515a0 Reset body=599 status=ok
// SIG undefined Reset(void)

void FVulkanDescriptorPoolSetContainer::Reset(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  uint uVar12;
  uint *puVar13;
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
  
  uStack_94 = 1;
  plVar1 = (longlong *)(param_1 + 8);
  uVar3 = *(uint *)(param_1 + 0x30);
  puVar2 = (uint *)(param_1 + 0x18);
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar13 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar4 = *puVar13;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar7 = local_98 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar7;
      if (bVar6) goto LAB_141e5166c;
      uVar4 = puVar13[lVar9 + 1];
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
LAB_141e5166c:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x30);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar12 = uVar4 & 0xffffffe0;
  iStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar2;
  local_50 = plVar1;
  puStack_40 = puVar2;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar4;
  if (uVar4 != uVar3) {
    puVar13 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar8 = puVar13[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_141e51732;
      uVar8 = puVar13[(longlong)iVar7 + 1];
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
    uStack_84 = (uVar12 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_141e51732:
      uStack_84 = uVar3;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar2))) {
    lVar9 = *(longlong *)(*plVar1 + 8 + (longlong)(int)uStack_5c * 0x18);
    plVar10 = *(longlong **)(lVar9 + 0x18);
    uVar11 = 0;
    if (plVar10 != (longlong *)0x0) {
      do {
        plVar5 = (longlong *)*plVar10;
        if ((plVar5[4] != 0) &&
           (iVar7 = (*DAT_146ab0140)(*(undefined8 *)(*plVar5 + 8),plVar5[4],0), iVar7 != 0)) {
          FUN_141e67d70(iVar7,
                        "VulkanRHI::vkResetDescriptorPool(Device->GetInstanceHandle(), DescriptorPool, 0)"
                        ,
                        "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.cpp"
                        ,0x5f);
        }
        *(undefined4 *)((longlong)plVar5 + 0xc) = 0;
        plVar10 = (longlong *)plVar10[1];
      } while (plVar10 != (longlong *)0x0);
      uVar11 = *(undefined8 *)(lVar9 + 0x18);
    }
    *(undefined8 *)(lVar9 + 0x20) = uVar11;
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 141e51800 FUN_141e51800 body=350 status=ok
// SIG undefined FUN_141e51800(void)

void FUN_141e51800(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 local_res8;
  undefined1 in_stack_00000050;
  
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  uVar6 = 0;
  *(undefined1 *)(param_1 + 0x80) = in_stack_00000050;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  puVar3 = *(undefined8 **)(param_1 + 0x70);
  uVar5 = (longlong)*(int *)(param_1 + 0x78) & 0x1fffffffffffffff;
  if (puVar3 + *(int *)(param_1 + 0x78) < puVar3) {
    uVar5 = uVar6;
  }
  if (uVar5 != 0) {
    do {
      local_res8 = *puVar3;
      FUN_141e2d700(*(longlong *)(param_1 + 8) + 0x438,&local_res8);
      uVar6 = uVar6 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar6 != uVar5);
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x70,0);
  }
  uVar6 = 0;
  plVar4 = *(longlong **)(param_1 + 0x60);
  uVar5 = (longlong)*(int *)(param_1 + 0x68) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(param_1 + 0x68) < plVar4) {
    uVar5 = uVar6;
  }
  if (uVar5 != 0) {
    do {
      puVar3 = (undefined8 *)*plVar4;
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
      plVar4 = plVar4 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar5);
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x60,0);
  }
  FUN_141e51960(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 141e51960 FUN_141e51960 body=3427 status=ok
// SIG undefined FUN_141e51960(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e51960(undefined8 *param_1)

{
  undefined2 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 *puVar6;
  void *_Src;
  bool bVar7;
  char cVar8;
  undefined1 uVar9;
  char cVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  DWORD DVar15;
  undefined *puVar16;
  int *piVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong *plVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  int *piVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  ulonglong uVar29;
  int *piVar30;
  bool bVar31;
  uint *in_stack_00000028;
  uint in_stack_00000030;
  uint in_stack_00000038;
  uint *in_stack_00000040;
  undefined8 *in_stack_00000048;
  longlong in_stack_00000050;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  undefined4 *local_190;
  char local_188;
  char local_187;
  char local_186;
  uint local_184;
  undefined4 *local_180;
  ulonglong local_178;
  uint local_170;
  int local_16c;
  undefined8 local_168;
  uint local_160;
  int local_15c;
  undefined4 local_158;
  undefined8 *local_150;
  ulonglong local_148;
  longlong local_140;
  int *local_138;
  uint local_130;
  undefined4 local_12c;
  undefined4 local_128 [2];
  uint *local_120;
  int *local_118;
  uint local_110;
  undefined4 local_10c;
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  longlong local_100;
  undefined8 *local_f8;
  void *local_f0;
  int local_e8;
  undefined4 local_d8;
  undefined1 local_d4 [20];
  undefined8 local_c0;
  uint local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  uint local_ac;
  uint local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  longlong local_78;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  byte local_44;
  undefined4 local_40;
  byte local_3c;
  ulonglong local_30;
  undefined4 *puVar28;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_120 = in_stack_00000040;
  puVar28 = (undefined4 *)0x0;
  uVar25 = 0;
  local_f8 = in_stack_00000048;
  local_100 = in_stack_00000050;
  local_168 = 0;
  local_150 = param_1;
  iVar11 = (*DAT_146ab0368)(*(undefined8 *)(param_1[1] + 0x680),param_1[3],&local_160,0);
  if (iVar11 < 0) {
    FUN_141e67d70(iVar11,
                  "VulkanRHI::vkGetPhysicalDeviceSurfaceFormatsKHR(Device.GetPhysicalHandle(), Surface, &NumFormats, nullptr)"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                  ,0xd1);
  }
  local_138 = (int *)0x0;
  local_12c = 0;
  local_130 = local_160;
  if (0 < (int)local_160) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_138);
  }
  uVar26 = local_130;
  piVar30 = local_138;
  _guard_xfg_dispatch_icall_nop(local_138,0,(longlong)(int)local_160 << 3);
  iVar11 = (*DAT_146ab0368)(*(undefined8 *)(param_1[1] + 0x680),param_1[3],&local_160,piVar30);
  if (iVar11 < 0) {
    FUN_141e67d70(iVar11,
                  "VulkanRHI::vkGetPhysicalDeviceSurfaceFormatsKHR(Device.GetPhysicalHandle(), Surface, &NumFormats, Formats.GetData())"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                  ,0xd6);
  }
  uVar13 = *in_stack_00000028;
  if (uVar13 == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146aafea0) &&
       (_Init_thread_header(&DAT_146aafea0), DAT_146aafea0 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar20 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))();
      puVar21 = puVar28;
      if (plVar20 != (longlong *)0x0) {
        puVar21 = (undefined4 *)(**(code **)(*plVar20 + 0x38))(plVar20);
      }
      DAT_146aafe98 = puVar21;
      _Init_thread_footer(&DAT_146aafea0);
    }
    uVar13 = 0;
    if (DAT_146aafe98 != (undefined4 *)0x0) {
      uVar12 = EDefaultBackBufferPixelFormat::FromInt(*DAT_146aafe98);
      uVar13 = EDefaultBackBufferPixelFormat::Convert2PixelFormat(uVar12);
    }
    *in_stack_00000028 = uVar13;
    if (uVar13 != 0) goto LAB_141e51ae2;
LAB_141e51bc2:
    piVar23 = piVar30;
    puVar21 = puVar28;
    if (0 < (int)uVar26) {
      do {
        piVar17 = &DAT_1464ca1cc;
        puVar22 = puVar28;
        do {
          uVar13 = (uint)puVar22;
          if (*piVar23 == *piVar17) {
            *in_stack_00000028 = uVar13;
            local_168 = *(undefined8 *)piVar23;
            goto LAB_141e51c0d;
          }
          puVar22 = (undefined4 *)(ulonglong)(uVar13 + 1);
          piVar17 = piVar17 + 10;
        } while ((longlong)piVar17 < 0x1464cabf4);
        uVar13 = *in_stack_00000028;
LAB_141e51c0d:
        if (uVar13 != 0) goto LAB_141e51c4d;
        uVar13 = (int)puVar21 + 1;
        piVar23 = piVar23 + 2;
        puVar21 = (undefined4 *)(ulonglong)uVar13;
      } while ((int)uVar13 < (int)uVar26);
    }
    puVar21 = puVar28;
    piVar23 = piVar30;
    if (0 < (int)uVar26) {
      do {
        if (*piVar23 == DAT_1464ca1cc) {
          local_168 = *(undefined8 *)(piVar30 + (longlong)(int)puVar21 * 2);
          break;
        }
        uVar13 = (int)puVar21 + 1;
        puVar21 = (undefined4 *)(ulonglong)uVar13;
        piVar23 = piVar23 + 2;
      } while ((int)uVar13 < (int)uVar26);
    }
  }
  else {
LAB_141e51ae2:
    if ((&DAT_1464ca1d0)[(longlong)(int)uVar13 * 0x28] != '\0') {
      puVar21 = puVar28;
      piVar23 = piVar30;
      uVar14 = uVar13;
      if (0 < (int)uVar26) {
        do {
          if (*piVar23 == (&DAT_1464ca1cc)[(longlong)(int)uVar13 * 10]) {
            local_168 = *(undefined8 *)(piVar30 + (longlong)(int)puVar21 * 2);
            uVar13 = *in_stack_00000028;
            goto LAB_141e51bba;
          }
          uVar14 = (int)puVar21 + 1;
          puVar21 = (undefined4 *)(ulonglong)uVar14;
          piVar23 = piVar23 + 2;
        } while ((int)uVar14 < (int)uVar26);
        uVar14 = *in_stack_00000028;
      }
      if (DAT_1464c95c8 != DAT_1464c95f4) {
        puVar16 = DAT_1464c9600;
        if (DAT_1464c9600 == (undefined *)0x0) {
          puVar16 = &DAT_1464c95f8;
        }
        for (iVar11 = *(int *)(puVar16 + (longlong)(int)(DAT_1464c9608 - 1U & uVar13) * 4);
            iVar11 != -1; iVar11 = *(int *)(DAT_1464c95c0 + 4 + (longlong)iVar11 * 0xc)) {
          if (*(uint *)(DAT_1464c95c0 + (longlong)iVar11 * 0xc) == uVar14) {
            if (iVar11 != -1) goto LAB_141e51bb4;
            break;
          }
        }
      }
      FUN_14044be50(&DAT_1464c95c0,local_108,in_stack_00000028,0);
    }
LAB_141e51bb4:
    *in_stack_00000028 = 0;
    uVar13 = uVar25;
LAB_141e51bba:
    if (uVar13 == 0) goto LAB_141e51bc2;
  }
LAB_141e51c4d:
  if (*in_stack_00000028 == 0) {
    local_180 = (undefined4 *)0x0;
    local_178 = 0;
    puVar21 = puVar28;
    if (0 < (int)uVar26) {
      local_148 = (ulonglong)uVar26;
      local_140 = 0;
      puVar22 = puVar28;
      do {
        lVar24 = local_140;
        iVar11 = (int)puVar28;
        if (local_140 == 0) {
          uVar25 = (2 - (uint)(iVar11 != 0)) + iVar11;
          local_178 = CONCAT44(local_178._4_4_,uVar25);
          if ((int)puVar22 < (int)uVar25) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_180);
            puVar22 = (undefined4 *)(local_178 >> 0x20);
            puVar21 = local_180;
            uVar25 = (uint)local_178;
          }
          puVar1 = (undefined2 *)
                   ((longlong)puVar21 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
          *puVar1 = 0x28;
          puVar1[1] = 0;
        }
        else {
          uVar25 = (3 - (uint)(iVar11 != 0)) + iVar11;
          local_178 = CONCAT44(local_178._4_4_,uVar25);
          if ((int)puVar22 < (int)uVar25) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_180);
            puVar22 = (undefined4 *)(local_178 >> 0x20);
            puVar21 = local_180;
            uVar25 = (uint)local_178;
          }
          puVar28 = (undefined4 *)
                    ((longlong)puVar21 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2);
          *puVar28 = 0x20002c;
          *(undefined2 *)(puVar28 + 1) = 0;
        }
        puVar28 = (undefined4 *)(ulonglong)uVar25;
        FString::PrintfImpl(&local_f0,&DAT_144e9d224,piVar30[lVar24 * 2]);
        _Src = local_f0;
        if (local_e8 == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = local_e8 + -1;
        }
        if (iVar11 != 0) {
          uVar26 = iVar11 + (uint)(uVar25 == 0) + uVar25;
          local_178 = CONCAT44(local_178._4_4_,uVar26);
          if ((int)puVar22 < (int)uVar26) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_180,puVar28);
            puVar22 = (undefined4 *)(local_178 >> 0x20);
            puVar21 = local_180;
            uVar26 = (uint)local_178;
          }
          puVar28 = (undefined4 *)(ulonglong)uVar26;
          puVar1 = (undefined2 *)
                   ((longlong)puVar21 + ((longlong)(int)uVar25 - (ulonglong)(uVar25 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(puVar1,_Src,(longlong)iVar11 * 2);
          puVar1[iVar11] = 0;
          lVar24 = local_140;
        }
        uVar25 = (uint)puVar22;
        if (local_f0 != (void *)0x0) {
          FMemory::Free(local_f0);
        }
        local_140 = lVar24 + 1;
        local_148 = local_148 - 1;
        piVar30 = local_138;
      } while (local_148 != 0);
      local_148 = 0;
      uVar26 = local_130;
    }
    iVar11 = (int)puVar28;
    if (uVar26 != 0) {
      iVar27 = (2 - (uint)(iVar11 != 0)) + iVar11;
      local_178 = CONCAT44(local_178._4_4_,iVar27);
      if ((int)uVar25 < iVar27) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_180,puVar28);
        puVar21 = local_180;
        iVar27 = (uint)local_178;
      }
      puVar1 = (undefined2 *)((longlong)puVar21 + ((longlong)iVar11 - (ulonglong)(iVar11 != 0)) * 2)
      ;
      *puVar1 = 0x29;
      puVar1[1] = 0;
      iVar11 = iVar27;
    }
    local_198 = (undefined4 *)&DAT_143f3eda8;
    if (iVar11 != 0) {
      local_198 = puVar21;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x13c,
               L"Unable to find a pixel format for the swapchain; swapchain returned %d Vulkan formats %s"
               ,uVar26);
    local_190 = (undefined4 *)&DAT_143f3eda8;
    if (iVar11 != 0) {
      local_190 = puVar21;
    }
    local_198 = (undefined4 *)CONCAT44(local_198._4_4_,uVar26);
    FDebug::AssertFailed
              (&DAT_144e9cd26,"Unknown",0x13c,
               L"Unable to find a pixel format for the swapchain; swapchain returned %d Vulkan formats %s"
              );
    param_1 = local_150;
    if (puVar21 != (undefined4 *)0x0) {
      FMemory::Free(puVar21);
      param_1 = local_150;
    }
  }
  if (piVar30 != (int *)0x0) {
    FMemory::Free(piVar30);
  }
  lVar24 = param_1[1];
  if (*(longlong *)(lVar24 + 0x1430) == 0) {
    uVar19 = param_1[3];
    local_128[0] = 0;
    iVar11 = (*DAT_146ab0358)(*(undefined8 *)(lVar24 + 0x680),
                              *(undefined4 *)(*(longlong *)(lVar24 + 0x1418) + 8),uVar19,local_128);
    if (iVar11 != 0) {
      FUN_141e67d70(iVar11,
                    "VulkanRHI::vkGetPhysicalDeviceSurfaceSupportKHR(PhysicalDevice, FamilyIndex, Surface, &bSupportsPresent)"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                    ,0x4d4);
    }
    local_15c = 0;
    iVar11 = (*DAT_146ab0358)(*(undefined8 *)(lVar24 + 0x680),
                              *(undefined4 *)(*(longlong *)(lVar24 + 0x1420) + 8),uVar19,&local_15c)
    ;
    if (iVar11 != 0) {
      FUN_141e67d70(iVar11,
                    "VulkanRHI::vkGetPhysicalDeviceSurfaceSupportKHR(PhysicalDevice, FamilyIndex, Surface, &bSupportsPresent)"
                    ,
                    "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                    ,0x4d4);
    }
    bVar31 = local_15c != 1;
    iVar11 = *(int *)(*(longlong *)(lVar24 + 0x1428) + 8);
    if ((iVar11 != *(int *)(*(longlong *)(lVar24 + 0x1418) + 8)) &&
       (iVar11 != *(int *)(*(longlong *)(lVar24 + 0x1420) + 8))) {
      local_150 = (undefined8 *)((ulonglong)local_150 & 0xffffffff00000000);
      iVar11 = (*DAT_146ab0358)(*(undefined8 *)(lVar24 + 0x680),iVar11,uVar19,&local_150);
      if (iVar11 != 0) {
        FUN_141e67d70(iVar11,
                      "VulkanRHI::vkGetPhysicalDeviceSurfaceSupportKHR(PhysicalDevice, FamilyIndex, Surface, &bSupportsPresent)"
                      ,
                      "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                      ,0x4d4);
      }
    }
    lVar5 = DAT_146aafa28;
    cVar8 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar8 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar15 = GetCurrentThreadId();
      lVar18 = 4;
      if (DVar15 == DAT_1468c21c0) goto LAB_141e51ffd;
    }
    else {
LAB_141e51ffd:
      lVar18 = 0;
    }
    if (((*(int *)(lVar5 + lVar18) == 0) ||
        (*(int *)(*(longlong *)(lVar24 + 0x1420) + 8) ==
         *(int *)(*(longlong *)(lVar24 + 0x1418) + 8))) || (bVar31)) {
      uVar19 = *(undefined8 *)(lVar24 + 0x1418);
    }
    else {
      uVar9 = IsRHIDeviceIntel();
      *(undefined1 *)(lVar24 + 0x1439) = uVar9;
      uVar19 = *(undefined8 *)(lVar24 + 0x1420);
    }
    *(undefined8 *)(lVar24 + 0x1430) = uVar19;
  }
  local_170 = 0;
  iVar11 = 2;
  iVar27 = (*DAT_146ab0370)(*(undefined8 *)(param_1[1] + 0x680),param_1[3],&local_170,0);
  if (iVar27 != 0) {
    FUN_141e67d70(iVar27,
                  "VulkanRHI::vkGetPhysicalDeviceSurfacePresentModesKHR(Device.GetPhysicalHandle(), Surface, &NumFoundPresentModes, nullptr)"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                  ,0x14c);
  }
  lVar24 = (longlong)(int)local_170;
  local_118 = (int *)0x0;
  local_10c = 0;
  local_110 = local_170;
  if (0 < (int)local_170) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_118);
  }
  piVar30 = local_118;
  _guard_xfg_dispatch_icall_nop(local_118,0,lVar24 << 2);
  iVar27 = (*DAT_146ab0370)(*(undefined8 *)(param_1[1] + 0x680),param_1[3],&local_170,piVar30);
  if (iVar27 != 0) {
    FUN_141e67d70(iVar27,
                  "VulkanRHI::vkGetPhysicalDeviceSurfacePresentModesKHR(Device.GetPhysicalHandle(), Surface, &NumFoundPresentModes, FoundPresentModes.GetData())"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                  ,0x151);
  }
  bVar4 = false;
  bVar31 = false;
  local_188 = '\0';
  bVar3 = false;
  uVar29 = 0;
  bVar2 = false;
  bVar7 = false;
  if ((ulonglong)local_170 != 0) {
    do {
      bVar3 = bVar7;
      bVar31 = bVar2;
      iVar27 = piVar30[(int)uVar29];
      if (iVar27 == 0) {
        bVar4 = true;
      }
      else if (iVar27 == 1) {
        bVar31 = true;
      }
      else if (iVar27 == 2) {
        bVar3 = true;
      }
      else if (iVar27 == 3) {
        local_188 = '\x01';
      }
      uVar29 = uVar29 + 1;
      bVar2 = bVar31;
      bVar7 = bVar3;
    } while (uVar29 < local_170);
  }
  local_16c = -1;
  uVar19 = FCommandLine::Get();
  cVar8 = FParse::Value(uVar19,L"vulkanpresentmode=",&local_16c);
  if (cVar8 == '\0') {
LAB_141e521c0:
    if (local_16c != -1) goto LAB_141e5220d;
  }
  else {
    if (local_16c == 0) {
      if (bVar4) {
        iVar11 = 0;
        goto LAB_141e5220d;
      }
    }
    else {
      if (local_16c == 1) {
        iVar11 = 2 - (uint)bVar31;
        bVar2 = bVar31;
      }
      else {
        bVar2 = bVar3;
        if (local_16c != 2) goto LAB_141e521ad;
      }
      if (bVar2) goto LAB_141e521c0;
    }
LAB_141e521ad:
    local_16c = -1;
  }
  if (DAT_146aafab0 == (longlong *)0x0) {
    cVar8 = '\0';
  }
  else {
    cVar8 = (**(code **)(*DAT_146aafab0 + 0x10))();
  }
  if ((bVar4) && ((cVar8 != '\0' || (*(char *)(param_1 + 0x10) == '\0')))) {
    iVar11 = 0;
  }
  else if (bVar31) {
    iVar11 = 1;
  }
  else {
    iVar11 = 2;
    if (!bVar3) {
      iVar11 = *piVar30;
    }
  }
LAB_141e5220d:
  uVar19 = FCommandLine::Get();
  cVar8 = FParse::Param(uVar19,L"VKPresentMailbox");
  uVar19 = FCommandLine::Get();
  local_187 = FParse::Param(uVar19,L"VKPresentImmediate");
  uVar19 = FCommandLine::Get();
  local_186 = FParse::Param(uVar19,L"VKPresentFIFO");
  uVar19 = FCommandLine::Get();
  cVar10 = FParse::Param(uVar19,L"VKPresentFIFORelaxed");
  iVar27 = iVar11;
  if (cVar8 == '\0') {
    if (local_187 == '\0') {
      if (local_186 == '\0') {
        if ((cVar10 != '\0') && (local_188 != '\0')) {
          iVar27 = 3;
        }
      }
      else if (bVar3) {
        iVar27 = 2;
      }
    }
    else {
      iVar27 = 0;
      if (!bVar4) {
        iVar27 = iVar11;
      }
    }
  }
  else if (bVar31) {
    iVar27 = 1;
  }
  DAT_146aafea4 = 0;
  if (piVar30 != (int *)0x0) {
    FMemory::Free(piVar30);
  }
  iVar11 = (*DAT_146ab0360)(*(undefined8 *)(param_1[1] + 0x680),param_1[3],&local_68);
  if (iVar11 < 0) {
    FUN_141e67d70(iVar11,
                  "VulkanRHI::vkGetPhysicalDeviceSurfaceCapabilitiesKHR(Device.GetPhysicalHandle(), Surface, &SurfProperties)"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                  ,0x1fa);
  }
  if ((local_44 & 1) != 0) {
    local_40 = 1;
  }
  local_148 = CONCAT44(local_148._4_4_,local_40);
  uVar12 = 1;
  if ((local_3c & 1) == 0) {
    uVar12 = 8;
  }
  local_140 = CONCAT44(local_140._4_4_,uVar12);
  uVar25 = *local_120;
  uVar26 = uVar25;
  if (((local_64 != 0) && (uVar26 = local_68, local_68 <= uVar25)) &&
     (uVar26 = local_64, uVar25 < local_64)) {
    uVar26 = uVar25;
  }
  uVar25 = local_60;
  if (local_60 == 0xffffffff) {
    uVar25 = in_stack_00000030;
  }
  uVar13 = local_5c;
  if (local_5c == 0xffffffff) {
    uVar13 = in_stack_00000038;
  }
  if (((DAT_146ab632a == '\0') || (cVar8 = FUN_141ee42d0(), cVar8 == '\0')) ||
     ((int)local_168 != 0x40)) {
    local_158 = local_168._4_4_;
  }
  else {
    local_158 = 0x3b9c6048;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  local_d8 = 0x3b9acde8;
  _guard_xfg_dispatch_icall_nop(local_d4,0,100);
  lVar24 = local_100;
  local_c0 = param_1[3];
  local_b4 = (int)local_168;
  local_b0 = local_158;
  local_a0 = 0x14;
  if (DAT_1464c9490 == 1) {
    local_a0 = 0x16;
  }
  local_ac = uVar25;
  if (uVar25 == 0) {
    local_ac = in_stack_00000030;
  }
  local_88 = (undefined4)local_148;
  local_84 = (undefined4)local_140;
  local_a8 = uVar13;
  if (uVar13 == 0) {
    local_a8 = in_stack_00000038;
  }
  local_a4 = 1;
  local_9c = 0;
  *local_120 = uVar26;
  local_78 = local_100;
  local_7c = 1;
  local_b8 = uVar26;
  local_80 = iVar27;
  iVar11 = (*DAT_146ab0358)(*(undefined8 *)(param_1[1] + 0x680),
                            *(undefined4 *)(*(longlong *)(param_1[1] + 0x1430) + 8),param_1[3],
                            local_104);
  if (iVar11 != 0) {
    FUN_141e67d70(iVar11,
                  "VulkanRHI::vkGetPhysicalDeviceSurfaceSupportKHR(Device.GetPhysicalHandle(), Device.GetPresentQueue()->GetFamilyIndex(), Surface, &bSupportsPresent)"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                  ,0x23c);
  }
  iVar11 = (*DAT_146ab0328)(*(undefined8 *)(param_1[1] + 8),&local_d8,0,param_1);
  if (iVar11 < 0) {
    FUN_141e67d70(iVar11,
                  "VulkanRHI::vkCreateSwapchainKHR(Device.GetInstanceHandle(), &SwapChainInfo, VULKAN_CPU_ALLOCATOR, &SwapChain)"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                  ,0x243);
  }
  if (lVar24 != 0) {
    (*DAT_146ab0330)(*(undefined8 *)(param_1[1] + 8),lVar24,0);
  }
  uVar25 = local_ac;
  if (in_stack_00000030 <= local_ac) {
    uVar25 = in_stack_00000030;
  }
  *(uint *)(param_1 + 6) = uVar25;
  uVar25 = local_a8;
  if (in_stack_00000038 <= local_a8) {
    uVar25 = in_stack_00000038;
  }
  *(uint *)((longlong)param_1 + 0x34) = uVar25;
  iVar11 = (*DAT_146ab0338)(*(undefined8 *)(param_1[1] + 8),*param_1,&local_184,0);
  if (iVar11 < 0) {
    FUN_141e67d70(iVar11,
                  "VulkanRHI::vkGetSwapchainImagesKHR(Device.GetInstanceHandle(), SwapChain, &NumSwapChainImages, nullptr)"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                  ,0x26a);
  }
  puVar6 = local_f8;
  iVar11 = *(int *)(local_f8 + 1);
  *(uint *)(local_f8 + 1) = local_184 + iVar11;
  if (*(int *)((longlong)local_f8 + 0xc) < (int)(local_184 + iVar11)) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(local_f8);
  }
  iVar11 = (*DAT_146ab0338)(*(undefined8 *)(param_1[1] + 8),*param_1,&local_184,*puVar6);
  if (iVar11 < 0) {
    FUN_141e67d70(iVar11,
                  "VulkanRHI::vkGetSwapchainImagesKHR(Device.GetInstanceHandle(), SwapChain, &NumSwapChainImages, OutImages.GetData())"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                  ,0x26d);
  }
  iVar11 = *(int *)(param_1 + 0xf);
  *(uint *)(param_1 + 0xf) = iVar11 + local_184;
  if (*(int *)((longlong)param_1 + 0x7c) < (int)(iVar11 + local_184)) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xe);
  }
  uVar25 = 0;
  uVar29 = 0;
  if (local_184 != 0) {
    do {
      lVar24 = param_1[0xe];
      uVar19 = FUN_141e23860(param_1[1] + 0x438,1);
      iVar11 = (int)uVar29;
      uVar13 = iVar11 + 1;
      uVar29 = (ulonglong)uVar13;
      *(undefined8 *)(lVar24 + (longlong)iVar11 * 8) = uVar19;
    } while (uVar13 < local_184);
  }
  iVar11 = *(int *)(param_1 + 0xd);
  *(uint *)(param_1 + 0xd) = iVar11 + uVar26;
  if (*(int *)((longlong)param_1 + 0x6c) < (int)(iVar11 + uVar26)) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xc);
  }
  if (uVar26 != 0) {
    do {
      lVar24 = operator_new(0x20);
      uVar29 = 0;
      if (lVar24 != 0) {
        uVar29 = FUN_141e20010(lVar24,param_1[1]);
      }
      *(ulonglong *)((longlong)(int)uVar25 * 8 + param_1[0xc]) = uVar29;
      LOCK();
      piVar30 = (int *)(*(longlong *)(param_1[0xc] + (longlong)(int)uVar25 * 8) + 8);
      *piVar30 = *piVar30 + 1;
      UNLOCK();
      uVar25 = uVar25 + 1;
    } while (uVar25 < uVar26);
  }
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  return;
}



// FUNCTION 141e526d0 FUN_141e526d0 body=66 status=ok
// SIG undefined FUN_141e526d0(void)

void FUN_141e526d0(longlong param_1,longlong param_2)

{
  (*DAT_146ab0050)(*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000141e5270b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_146ab02e8)(*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(param_1 + 0x10),0,
                   *(undefined4 *)(param_1 + 0x20));
  return;
}



// FUNCTION 141e52720 ResizeForCopy body=130 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FDescriptorSetRemappingInfo::FUBRemappingInfo,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 6,0);
    iVar3 = (int)(uVar1 / 6);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 6,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 141e527b0 FUN_141e527b0 body=130 status=ok
// SIG undefined FUN_141e527b0(void)

void FUN_141e527b0(longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 10,0);
    iVar3 = (int)(uVar1 / 10);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 10,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 141e52840 ResizeGrow body=240 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FRHITexture_*,TInlineAllocator<9,FDefaultAllocator>_>::ResizeGrow
               (void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x50);
  if (uVar1 < 10) {
    uVar2 = 9;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x54) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 * 8,0);
    uVar2 = (uint)(uVar3 >> 3);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x54) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x48);
  if (uVar2 < 10) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 3);
    pvVar4 = *(void **)((longlong)param_1 + 0x48);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 3,0);
        *(void **)((longlong)param_1 + 0x48) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 3);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 3;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar5;
  return;
}



// FUNCTION 141e52930 ResizeGrow body=151 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<400,8>_>,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

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
  uVar4 = FMemory::QuantizeSize(lVar3 * 400,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 8);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 400,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 141e529d0 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FDescriptorSetRemappingInfo::FUBRemappingInfo,FDefaultAllocator>::ResizeGrow
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
  uVar3 = FMemory::QuantizeSize(lVar2 * 6,0);
  iVar4 = (int)(uVar3 / 6);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 6,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 141e52a60 ResizeGrow body=138 status=ok
// SIG undefined ResizeGrow(void)

void TArray<CrossCompiler::FUniformBufferCopyInfo,FDefaultAllocator>::ResizeGrow(longlong *param_1)

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
  uVar3 = FMemory::QuantizeSize(lVar2 * 10,0);
  iVar4 = (int)(uVar3 / 10);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 10,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 141e52af0 ResizeGrow body=8 status=ok
// SIG undefined ResizeGrow(void)

void TArray<VkDescriptorPoolSize,TFixedAllocator<11>_>::ResizeGrow(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x5c) = 0xb;
  return;
}



// FUNCTION 141e52b00 FUN_141e52b00 body=262 status=ok
// SIG undefined FUN_141e52b00(void)

void FUN_141e52b00(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x4008);
  if (uVar1 < 0x101) {
    uVar2 = 0x100;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x400c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 << 6,0);
    uVar2 = (uint)(uVar3 >> 6);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x400c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x4000);
  if (uVar2 < 0x101) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 6);
    pvVar4 = *(void **)((longlong)param_1 + 0x4000);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 6,0);
        *(void **)((longlong)param_1 + 0x4000) = pvVar4;
      }
      _guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 6);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 6;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x4000) = uVar5;
  return;
}



// FUNCTION 141e52c10 ResizeShrink body=165 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<VkExtensionProperties,FDefaultAllocator>::ResizeShrink(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0x104) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0x104,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0xfc0fc0fc0fc0fc1) * auVar1,0);
        iVar4 = (int)(uVar3 / 0x104);
      }
      goto LAB_141e52c84;
    }
    if (iVar4 == 0) goto LAB_141e52c84;
  }
  iVar4 = iVar5;
LAB_141e52c84:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x104,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 141e52cc0 FUN_141e52cc0 body=118 status=ok
// SIG undefined FUN_141e52cc0(void)

void FUN_141e52cc0(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 6,0);
    iVar3 = (int)(uVar1 / 6);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 6,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 141e52d40 ResizeTo body=118 status=ok
// SIG undefined ResizeTo(void)

void TArray<CrossCompiler::FUniformBufferCopyInfo,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 10,0);
    iVar3 = (int)(uVar1 / 10);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 10,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 141e52dc0 FUN_141e52dc0 body=535 status=ok
// SIG undefined FUN_141e52dc0(void)

void FUN_141e52dc0(longlong *param_1,undefined8 param_2,char param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  char *pcVar7;
  char *pcVar8;
  ulonglong local_res8;
  undefined2 *local_68;
  int local_60;
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  
  if ((*(char *)((longlong)param_1 + 9) != '\0') && (param_3 == '\0')) {
    return;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x12);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  local_res8 = 0;
  iVar2 = (*DAT_146ab00d8)(*(undefined8 *)(*param_1 + 8),param_1[0x31],&local_res8,0);
  if (iVar2 != 0) {
    FUN_141e67d70(iVar2,
                  "VulkanRHI::vkGetPipelineCacheData(Device->GetInstanceHandle(), PipelineCache, &Size, nullptr)"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp",
                  0x20d);
  }
  if (local_res8 < 0x20) goto LAB_141e52fb9;
  uVar3 = operator_new();
  iVar2 = (*DAT_146ab00d8)(*(undefined8 *)(*param_1 + 8),param_1[0x31],&local_res8,uVar3);
  if (iVar2 == 0) {
    uVar4 = FString::FString(local_58,param_2);
    FUN_141e24810(&local_68,*param_1,uVar4);
    plVar5 = (longlong *)FUN_1415c3d50();
    puVar6 = &DAT_143f3eda8;
    if (local_60 != 0) {
      puVar6 = local_68;
    }
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,puVar6,0);
    (**(code **)(*plVar5 + 0x50))(plVar5,uVar3,local_res8);
    (**(code **)*plVar5)(plVar5,1);
    if (local_68 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  else {
    if ((iVar2 == 5) || (iVar2 == -1)) {
      (*DAT_146ab00d0)(*(undefined8 *)(*param_1 + 8),param_1[0x31],0);
      local_48 = 0x11;
      local_44 = 0;
      local_3c = 0;
      local_34 = 0;
      local_2c = 0;
      local_24 = 0;
      iVar2 = (*DAT_146ab00c8)(*(undefined8 *)(*param_1 + 8),&local_48,0,param_1 + 0x31);
      if (iVar2 == 0) goto LAB_141e52fa9;
      uVar4 = 0x230;
      pcVar8 = "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp";
      pcVar7 = 
      "VulkanRHI::vkCreatePipelineCache(Device->GetInstanceHandle(), &PipelineCacheInfo, VULKAN_CPU_ALLOCATOR, &PipelineCache)"
      ;
    }
    else {
      uVar4 = 0x234;
      pcVar8 = "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp";
      pcVar7 = "Result";
    }
    FUN_141e67d70(iVar2,pcVar7,pcVar8,uVar4);
  }
LAB_141e52fa9:
  FMemory::operator_delete(uVar3);
LAB_141e52fb9:
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 141e52fe0 FUN_141e52fe0 body=165 status=ok
// SIG undefined FUN_141e52fe0(void)

void FUN_141e52fe0(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong local_28;
  int local_20;
  int local_1c;
  longlong local_18 [3];
  
  plVar2 = (longlong *)FUN_14167d0d0(local_18);
  lVar1 = plVar2[1];
  local_28 = *plVar2;
  *plVar2 = 0;
  local_20 = (int)plVar2[1];
  local_1c = *(int *)((longlong)plVar2 + 0xc);
  plVar2[1] = 0;
  if (local_1c < (int)((0x11 - (uint)((int)lVar1 != 0)) + local_20)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28);
  }
  FString::PathAppend(&local_28,L"VulkanPSO.cache",0xf);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  FUN_141e52dc0(*(undefined8 *)(*(longlong *)(DAT_146aafea8 + 0x70) + 0x1930),&local_28,0);
  if (local_28 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141e53090 FUN_141e53090 body=2178 status=ok
// SIG undefined FUN_141e53090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e53090(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  DWORD DVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  longlong *plVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint uVar20;
  int iVar21;
  undefined1 auStack_228 [32];
  undefined1 local_208 [4];
  uint local_204;
  uint local_200;
  uint local_1fc;
  longlong local_1f8;
  int local_1f0;
  int local_1ec;
  undefined8 local_1e8;
  uint uStack_1e0;
  int iStack_1dc;
  longlong *local_1d8;
  undefined8 local_1d0;
  undefined8 *local_1c8;
  int local_1c0;
  int local_1bc;
  uint local_1b8;
  longlong local_1b0;
  longlong *local_1a8;
  uint local_1a0;
  int local_19c;
  longlong *local_198;
  void *local_190;
  uint local_188;
  undefined4 local_184;
  undefined8 local_180;
  uint uStack_178;
  int iStack_174;
  undefined8 local_170;
  uint uStack_168;
  undefined4 uStack_164;
  undefined1 local_158 [256];
  longlong local_58;
  short *local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  plVar17 = (longlong *)0x0;
  local_1fc = 0;
  local_1f8 = param_1;
  iVar5 = (*DAT_146aaff10)(*(undefined8 *)(param_1 + 0x38),&local_1fc,0);
  if (iVar5 == -3) {
    FUN_1416a4860(0,
                  L"Cannot find a compatible Vulkan device or driver. Try updating your video driver to a more recent version and make sure your video card supports Vulkan.\n\n"
                  ,L"Vulkan device not available");
    _dynamic_initializer_for__GSystemSettings__(1);
LAB_141e53116:
    FUN_141e67d70(iVar5,"Result",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp",0x1ee)
    ;
  }
  else if (iVar5 < 0) goto LAB_141e53116;
  lVar13 = (longlong)(int)local_1fc;
  local_190 = (void *)0x0;
  local_184 = 0;
  local_188 = local_1fc;
  if (0 < (int)local_1fc) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_190);
  }
  pvVar3 = local_190;
  _guard_xfg_dispatch_icall_nop(local_190,0,lVar13 << 3);
  iVar5 = (*DAT_146aaff10)(*(undefined8 *)(param_1 + 0x38),&local_1fc,pvVar3);
  if (iVar5 < 0) {
    FUN_141e67d70(iVar5,
                  "VulkanRHI::vkEnumeratePhysicalDevices(Instance, &GpuCount, PhysicalDevices.GetData())"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp",499);
  }
  local_198 = (longlong *)0x0;
  local_1b8 = 0;
  piVar15 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  local_1d8 = (longlong *)0x0;
  local_200 = 0;
  local_1d0 = 0;
  local_1a8 = (longlong *)0x0;
  local_204 = 0;
  local_19c = 0;
  local_1c8 = (undefined8 *)0x0;
  local_1f0 = 0;
  local_1bc = 0;
  if ((*piVar15 < DAT_146850178) && (_Init_thread_header(&DAT_146850178), DAT_146850178 == -1)) {
    FName::FName(&DAT_146850170,&DAT_143f3ef90,1);
    _Init_thread_footer(&DAT_146850178);
  }
  uVar11 = DAT_146850170;
  plVar7 = (longlong *)FUN_141593110();
  iVar5 = (**(code **)(*plVar7 + 8))(plVar7,uVar11);
  plVar7 = plVar17;
  if (iVar5 < 1) {
    local_1b0 = 0;
    plVar8 = plVar17;
  }
  else {
    if ((*piVar15 < DAT_146850178) && (_Init_thread_header(&DAT_146850178), DAT_146850178 == -1)) {
      FName::FName(&DAT_146850170,&DAT_143f3ef90,1);
      _Init_thread_footer(&DAT_146850178);
    }
    uVar11 = DAT_146850170;
    plVar8 = (longlong *)FUN_141593110();
    local_1e8 = (longlong *)0x0;
    iStack_1dc = 0;
    local_180 = plVar8;
    iVar5 = (**(code **)(*plVar8 + 8))(plVar8,uVar11);
    local_1b0 = CONCAT44(local_1b0._4_4_,iVar5);
    plVar12 = plVar17;
    plVar9 = plVar17;
    uVar16 = 0;
    if (0 < iVar5) {
      do {
        lVar13 = (**(code **)(*plVar8 + 0x10))(plVar8,uVar11,plVar12);
        plVar8 = (longlong *)(lVar13 + -8);
        if (lVar13 == 0) {
          plVar8 = plVar17;
        }
        uStack_1e0 = (int)plVar7 + 1;
        if (iStack_1dc < (int)uStack_1e0) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_1e8,plVar7);
          plVar9 = local_1e8;
        }
        uVar16 = (int)plVar12 + 1;
        plVar9[(int)plVar7] = (longlong)plVar8;
        plVar7 = (longlong *)(ulonglong)uStack_1e0;
        plVar8 = local_180;
        plVar12 = (longlong *)(ulonglong)uVar16;
      } while ((int)uVar16 < (int)local_1b0);
      plVar7 = (longlong *)(ulonglong)local_200;
      uVar16 = uStack_1e0;
    }
    AlgoImpl::
    IntroSortInternal<IHeadMountedDisplayModule_*,FIdentityFunctor,TDereferenceWrapper<IHeadMountedDisplayModule_*,IHeadMountedDisplayModule::FCompareModulePriority>_>
              (plVar9,(longlong)(int)uVar16,local_208[0],local_208);
    plVar8 = (longlong *)*plVar9;
    FMemory::Free(plVar9);
    local_1b0 = (**(code **)(*plVar8 + 0x60))(plVar8);
    param_1 = local_1f8;
    plVar8 = (longlong *)(ulonglong)local_204;
  }
  uVar16 = local_204;
  if (local_1fc != 0) {
    plVar12 = plVar17;
    while( true ) {
      lVar13 = operator_new(0x1938);
      uVar14 = (uint)plVar12;
      plVar9 = plVar17;
      if (lVar13 != 0) {
        plVar9 = (longlong *)
                 FUN_141e20350(lVar13,*(undefined8 *)
                                       ((longlong)local_190 + (longlong)(int)uVar14 * 8));
      }
      iVar5 = *(int *)(param_1 + 0x68);
      *(int *)(param_1 + 0x68) = iVar5 + 1;
      if (*(int *)(param_1 + 0x6c) < iVar5 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  ((longlong *)(param_1 + 0x60),iVar5);
      }
      *(longlong **)(*(longlong *)(param_1 + 0x60) + (longlong)iVar5 * 8) = plVar9;
      cVar4 = FUN_141e2ac20(plVar9,plVar12);
      if ((((local_198 == (longlong *)0x0) && (local_1b0 != 0)) &&
          ((*(byte *)(plVar9 + 0x31a) & 8) != 0)) && (local_1b0 == plVar9[0x13e])) {
        local_1b8 = uVar14;
        local_198 = plVar9;
      }
      if (cVar4 == '\0') {
        iVar5 = (int)plVar8;
        local_204 = iVar5 + 1;
        local_1a0 = local_204;
        local_180 = plVar9;
        uStack_178 = uVar14;
        if (local_19c < (int)local_204) {
          TArray<`FVulkanDynamicRHI::SelectAndInitDevice'::`2'::FDeviceInfo,FDefaultAllocator>::
          ResizeGrow(&local_1a8,plVar8);
        }
        plVar7 = local_1a8;
        uVar18 = (undefined4)local_180;
        uVar19 = local_180._4_4_;
        uVar20 = uStack_178;
        iVar21 = iStack_174;
        local_204 = local_1a0;
      }
      else {
        iVar5 = (int)plVar7;
        local_200 = iVar5 + 1;
        local_1d0 = CONCAT44(local_1d0._4_4_,local_200);
        local_1e8 = plVar9;
        uStack_1e0 = uVar14;
        if (local_1d0._4_4_ < (int)local_200) {
          TArray<`FVulkanDynamicRHI::SelectAndInitDevice'::`2'::FDeviceInfo,FDefaultAllocator>::
          ResizeGrow(&local_1d8,plVar7);
          local_200 = (uint)local_1d0;
        }
        plVar7 = local_1d8;
        uVar18 = (undefined4)local_1e8;
        uVar19 = local_1e8._4_4_;
        uVar20 = uStack_1e0;
        iVar21 = iStack_1dc;
      }
      iVar2 = local_1f0;
      uVar16 = local_204;
      lVar13 = (longlong)local_1f0;
      local_1f0 = local_1f0 + 1;
      plVar7 = plVar7 + (longlong)iVar5 * 2;
      *(undefined4 *)plVar7 = uVar18;
      *(undefined4 *)((longlong)plVar7 + 4) = uVar19;
      *(uint *)(plVar7 + 1) = uVar20;
      *(int *)((longlong)plVar7 + 0xc) = iVar21;
      local_1c0 = local_1f0;
      local_170 = plVar9;
      uStack_168 = uVar14;
      if (local_1bc < local_1f0) {
        TArray<`FVulkanDynamicRHI::SelectAndInitDevice'::`2'::FDeviceInfo,FDefaultAllocator>::
        ResizeGrow(&local_1c8,iVar2);
      }
      plVar7 = (longlong *)(ulonglong)local_200;
      plVar12 = (longlong *)(ulonglong)(uVar14 + 1);
      puVar1 = local_1c8 + lVar13 * 2;
      *(undefined4 *)puVar1 = (undefined4)local_170;
      *(undefined4 *)((longlong)puVar1 + 4) = local_170._4_4_;
      *(uint *)(puVar1 + 1) = uStack_168;
      *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_164;
      local_1f0 = local_1c0;
      if (local_1fc <= uVar14 + 1) break;
      plVar8 = (longlong *)(ulonglong)local_204;
    }
  }
  uVar14 = 0xffffffff;
  if (local_198 != (longlong *)0x0) {
    *(longlong **)(local_1f8 + 0x70) = local_198;
    uVar14 = local_1b8;
  }
  plVar7 = local_1d8;
  uVar20 = local_200;
  if (uVar16 != 0) {
    if (local_1d0._4_4_ < (int)(local_200 + uVar16)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&local_1d8);
      uVar20 = (uint)local_1d0;
    }
    plVar7 = local_1d8;
    _guard_xfg_dispatch_icall_nop
              (local_1d8 + (longlong)(int)uVar20 * 2,local_1a8,(longlong)(int)uVar16 << 4);
    uVar20 = uVar20 + uVar16;
  }
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  plVar8 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.GraphicsAdapter");
  lVar13 = -1;
  if ((plVar8 == (longlong *)0x0) || (lVar10 = (**(code **)(*plVar8 + 0x38))(plVar8), lVar10 == 0))
  {
    local_1ec = -1;
  }
  else {
    cVar4 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar6 = GetCurrentThreadId();
      plVar8 = (longlong *)&DAT_00000004;
      if (DVar6 == DAT_1468c21c0) goto LAB_141e5356c;
    }
    else {
LAB_141e5356c:
      plVar8 = plVar17;
    }
    local_1ec = *(int *)((longlong)plVar8 + lVar10);
  }
  uVar11 = FCommandLine::Get();
  FParse::Value(uVar11,L"graphicsadapter=",&local_1ec);
  if (uVar14 == 0xffffffff) {
    if (local_1ec < (int)local_1fc) {
      if (local_1ec < 0) {
        if (local_1ec == -2) {
          uVar14 = *(uint *)(local_1c8 + 1);
          *(undefined8 *)(local_1f8 + 0x70) = *local_1c8;
        }
        else if (((int)uVar20 < 1) || (local_1ec != -1)) {
          uVar14 = 0;
        }
        else {
          uVar11 = FCommandLine::Get();
          cVar4 = FParse::Param(uVar11,L"preferAMD");
          if (cVar4 == '\0') {
            uVar11 = FCommandLine::Get();
            cVar4 = FParse::Param(uVar11,L"preferIntel");
            if (cVar4 == '\0') {
              uVar11 = FCommandLine::Get();
              cVar4 = FParse::Param(uVar11,L"preferNvidia");
              iVar5 = -1;
              if (cVar4 != '\0') {
                iVar5 = 0x10de;
              }
            }
            else {
              iVar5 = 0x8086;
            }
          }
          else {
            iVar5 = 0x1002;
          }
          if (((1 < (int)uVar20) && (iVar5 != -1)) &&
             (plVar8 = plVar17, plVar12 = plVar7, 0 < (int)uVar20)) {
            do {
              iVar21 = (int)plVar8;
              if (*(int *)(*plVar12 + 0x690) == iVar5) {
                uVar14 = *(uint *)(plVar7 + (longlong)iVar21 * 2 + 1);
                *(longlong *)(local_1f8 + 0x70) = plVar7[(longlong)iVar21 * 2];
                if (uVar14 == 0xffffffff) {
                  *(longlong *)(local_1f8 + 0x70) = *plVar7;
                  uVar14 = *(uint *)(plVar7 + 1);
                }
                goto LAB_141e536df;
              }
              plVar8 = (longlong *)(ulonglong)(iVar21 + 1U);
              plVar12 = plVar12 + 2;
            } while ((int)(iVar21 + 1U) < (int)uVar20);
          }
          *(longlong *)(local_1f8 + 0x70) = *plVar7;
          uVar14 = *(uint *)(plVar7 + 1);
        }
        goto LAB_141e536df;
      }
    }
    else {
      local_1ec = 0;
    }
    uVar14 = *(uint *)(local_1c8 + (longlong)local_1ec * 2 + 1);
    *(undefined8 *)(local_1f8 + 0x70) = local_1c8[(longlong)local_1ec * 2];
  }
LAB_141e536df:
  puVar1 = local_1c8;
  lVar10 = *(longlong *)(local_1f8 + 0x70);
  DAT_146ab62d8 = *(undefined4 *)(lVar10 + 0x690);
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_158,lVar10 + 0x69c);
  if (DAT_146ab6ae8 != local_50) {
    plVar8 = plVar17;
    if ((local_50 != (short *)0x0) && (*local_50 != 0)) {
      do {
        lVar13 = lVar13 + 1;
      } while (local_50[lVar13] != 0);
      plVar8 = (longlong *)(ulonglong)((int)lVar13 + 1);
    }
    DAT_146ab6af0 = 0;
    iVar5 = (int)plVar8;
    if (DAT_146ab6af4 != iVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&DAT_146ab6ae8,plVar8);
      plVar17 = (longlong *)(ulonglong)DAT_146ab6af0;
    }
    DAT_146ab6af0 = iVar5 + (int)plVar17;
    if (DAT_146ab6af4 < (int)DAT_146ab6af0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146ab6ae8,plVar17);
    }
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop(DAT_146ab6ae8,local_50,(longlong)iVar5 * 2);
    }
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  FUN_141e5b800(uVar14,lVar10 + 0x688);
  FUN_141e28a40(*(undefined8 *)(local_1f8 + 0x70),uVar14);
  cVar4 = IsRHIDeviceIntel();
  if (cVar4 != '\0') {
    FString::PrintfImpl(&local_1e8,L"%d.%d",*(uint *)(lVar10 + 0x68c) >> 0x16,
                        *(uint *)(lVar10 + 0x68c) >> 0xe & 0xff);
    if (DAT_146ab6b08 != (longlong *)0x0) {
      FMemory::Free();
    }
    DAT_146ab6b08 = local_1e8;
    DAT_146ab6b10._0_4_ = uStack_1e0;
    DAT_146ab6b10._4_4_ = iStack_1dc;
  }
  if (puVar1 != (undefined8 *)0x0) {
    FMemory::Free(puVar1);
  }
  if (local_1a8 != (longlong *)0x0) {
    FMemory::Free(local_1a8);
  }
  if (plVar7 != (longlong *)0x0) {
    FMemory::Free(plVar7);
  }
  if (local_190 != (void *)0x0) {
    FMemory::Free(local_190);
  }
  return;
}



// FUNCTION 141e53920 SetData body=259 status=ok
// SIG undefined SetData(void)

void TDataKeyBase<1>::SetData(longlong param_1,void *param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 local_res8;
  
  puVar1 = (undefined8 *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar3 = *(longlong **)(param_1 + 8);
    goto LAB_141e539bd;
  }
  plVar3 = (longlong *)operator_new(0x10);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = 0;
    plVar3[1] = 0;
  }
  if (puVar1 == &local_res8) {
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      goto LAB_141e539a1;
    }
  }
  else {
    plVar4 = (longlong *)*puVar1;
    *puVar1 = plVar3;
    if (plVar4 != (longlong *)0x0) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
LAB_141e539a1:
      FMemory::operator_delete(plVar4);
    }
  }
  plVar3 = (longlong *)*puVar1;
  *(longlong **)(param_1 + 8) = plVar3;
LAB_141e539bd:
  uVar2 = *(uint *)(plVar3 + 1);
  if ((int)uVar2 < (int)param_3) {
    *(uint *)(plVar3 + 1) = param_3;
    if (*(int *)((longlong)plVar3 + 0xc) < (int)param_3) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(plVar3);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)(int)uVar2 + *plVar3),0,(longlong)(int)(param_3 - uVar2));
  }
  else if (((int)param_3 < (int)uVar2) && (param_3 != uVar2)) {
    *(uint *)(plVar3 + 1) = param_3;
    TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(plVar3);
  }
  ::_guard_xfg_dispatch_icall_nop((void *)**(undefined8 **)(param_1 + 8),param_2,(ulonglong)param_3)
  ;
  return;
}



// FUNCTION 141e53a30 SetNum body=118 status=ok
// SIG undefined SetNum(void)

void TArray<FFloat16Color,FDefaultAllocator>::SetNum
               (longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (int)param_1[1];
  iVar3 = (int)param_2;
  if (iVar2 < iVar3) {
    iVar4 = iVar3 - iVar2;
    *(int *)(param_1 + 1) = iVar3;
    if (*(int *)((longlong)param_1 + 0xc) < iVar3) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
    }
    puVar1 = (undefined8 *)(*param_1 + (longlong)iVar2 * 8);
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
  }
  else if (iVar3 < iVar2) {
    TArray<unsigned___int64,FDefaultAllocator>::RemoveAtImpl(param_1,param_2,iVar2 - iVar3,param_3);
    return;
  }
  return;
}



// FUNCTION 141e53ab0 SetSRVBufferViewState body=156 status=ok
// SIG undefined SetSRVBufferViewState(void)

void FVulkanCommonPipelineDescriptorState::SetSRVBufferViewState
               (longlong param_1,byte param_2,uint param_3,longlong param_4)

{
  longlong *plVar1;
  bool bVar2;
  
  plVar1 = (longlong *)((ulonglong)param_2 * 0x58 + *(longlong *)(param_1 + 0x98));
  *(longlong *)((ulonglong)param_3 * 0x40 + 0x38 + *plVar1) = param_4 + 0x20;
  TRefCountPtr<FRHIIndexBuffer>::operator=(plVar1[4] + (longlong)(int)param_3 * 8);
  if (DAT_1464c9c14 < 2) {
    bVar2 = *(int *)(plVar1[6] + (ulonglong)param_3 * 0xc) != *(int *)(param_4 + 0x28);
    if (bVar2) {
      *(int *)(plVar1[6] + (ulonglong)param_3 * 0xc) = *(int *)(param_4 + 0x28);
    }
    *(byte *)(plVar1 + 10) = *(byte *)(plVar1 + 10) | bVar2;
  }
  else {
    bVar2 = true;
  }
  *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | bVar2;
  *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | bVar2;
  return;
}



// FUNCTION 141e53b50 SetSRVForUBResource body=190 status=ok
// SIG undefined SetSRVForUBResource(void)

void FVulkanPendingComputeState::SetSRVForUBResource
               (longlong param_1,byte param_2,undefined4 param_3,longlong param_4)

{
  longlong lVar1;
  byte bVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    FUN_141e67790(param_4);
    if (*(int *)(param_4 + 0x68) == 0) {
      if (*(longlong *)(param_4 + 0x48) == 0) {
        uVar3 = FUN_141e477c0(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_4 + 0x38));
        lVar1 = *(longlong *)(param_1 + 0x20);
        bVar2 = FVulkanDescriptorSetWriter::WriteImage
                          ((ulonglong)param_2 * 0x58 + *(longlong *)(lVar1 + 0x98),param_3,
                           param_4 + 0x30,uVar3);
        *(byte *)(lVar1 + 0x90) = *(byte *)(lVar1 + 0x90) | bVar2;
        *(byte *)(lVar1 + 0xc0) = *(byte *)(lVar1 + 0xc0) | bVar2;
      }
      else {
        FUN_141e53ce0(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
      }
    }
    else {
      FVulkanCommonPipelineDescriptorState::SetSRVBufferViewState
                (*(undefined8 *)(param_1 + 0x20),param_2,param_3,
                 *(undefined8 *)
                  (*(longlong *)(param_4 + 0x60) + (longlong)*(int *)(param_4 + 0x70) * 8));
    }
  }
  return;
}



// FUNCTION 141e53c10 FUN_141e53c10 body=205 status=ok
// SIG undefined FUN_141e53c10(void)

void FUN_141e53c10(longlong param_1,byte param_2,undefined4 param_3,longlong param_4,int param_5)

{
  longlong lVar1;
  byte bVar2;
  
  if (param_4 != 0) {
    FUN_141e67790(param_4);
    if (*(int *)(param_4 + 0x68) == 0) {
      if (*(longlong *)(param_4 + 0x48) == 0) {
        if (param_5 == 0x7fffffff) {
          param_5 = FUN_141e477c0(*(undefined8 *)(param_1 + 0x2a8),*(undefined8 *)(param_4 + 0x38));
        }
        lVar1 = *(longlong *)(param_1 + 0x48);
        bVar2 = FVulkanDescriptorSetWriter::WriteImage
                          ((ulonglong)param_2 * 0x58 + *(longlong *)(lVar1 + 0x98),param_3,
                           param_4 + 0x30,param_5);
        *(byte *)(lVar1 + 0x90) = *(byte *)(lVar1 + 0x90) | bVar2;
        *(byte *)(lVar1 + 0xc0) = *(byte *)(lVar1 + 0xc0) | bVar2;
      }
      else {
        FUN_141e53ce0(*(undefined8 *)(param_1 + 0x48),param_2,param_3);
      }
    }
    else {
      FVulkanCommonPipelineDescriptorState::SetSRVBufferViewState
                (*(undefined8 *)(param_1 + 0x48),param_2,param_3,
                 *(undefined8 *)
                  (*(longlong *)(param_4 + 0x60) + (longlong)*(int *)(param_4 + 0x70) * 8));
    }
  }
  return;
}



// FUNCTION 141e53ce0 FUN_141e53ce0 body=234 status=ok
// SIG undefined FUN_141e53ce0(void)

void FUN_141e53ce0(longlong param_1,byte param_2,ulonglong param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  
  lVar8 = *(longlong *)(param_4 + 0x70);
  uVar2 = *(uint *)(param_4 + 0x1c);
  uVar14 = (ulonglong)uVar2;
  uVar3 = *(uint *)(param_4 + 0x80);
  uVar16 = (ulonglong)uVar3;
  plVar15 = (longlong *)((ulonglong)param_2 * 0x58 + *(longlong *)(param_1 + 0x98));
  plVar9 = *(longlong **)((param_3 & 0xffffffff) * 0x40 + 0x30 + *plVar15);
  if (DAT_1464c9c14 < 2) {
    piVar1 = (int *)(plVar15[6] + (param_3 & 0xffffffff) * 0xc);
    iVar4 = *(int *)(lVar8 + 0x68);
    iVar5 = *piVar1;
    if (iVar5 != iVar4) {
      *piVar1 = iVar4;
      *plVar9 = *(longlong *)(lVar8 + 0x60);
    }
    uVar6 = piVar1[1];
    if (uVar6 != uVar3) {
      piVar1[1] = uVar3;
      plVar9[1] = uVar16;
    }
    uVar7 = piVar1[2];
    if (uVar7 != uVar2) {
      piVar1[2] = uVar2;
      plVar9[2] = uVar14;
    }
    bVar13 = uVar7 != uVar2 || (uVar6 != uVar3 || iVar5 != iVar4);
    *(byte *)(plVar15 + 10) = *(byte *)(plVar15 + 10) | bVar13;
  }
  else {
    lVar8 = *(longlong *)(lVar8 + 0x60);
    lVar10 = *plVar9;
    *plVar9 = lVar8;
    uVar11 = plVar9[1];
    plVar9[1] = uVar16;
    uVar12 = plVar9[2];
    plVar9[2] = uVar14;
    bVar13 = uVar12 != uVar14 || uVar11 != uVar16;
    if (lVar10 != lVar8) {
      bVar13 = true;
    }
  }
  *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | bVar13;
  *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | bVar13;
  return;
}



// FUNCTION 141e53dd0 FUN_141e53dd0 body=781 status=ok
// SIG undefined FUN_141e53dd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e53dd0(longlong param_1,undefined1 param_2,undefined4 param_3,longlong param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int *piVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  int *piVar9;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  undefined4 local_98;
  int local_94;
  int local_90 [2];
  longlong local_88;
  longlong *local_80;
  int *local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 local_58;
  ulonglong local_50;
  
  if (param_4 == 0) {
    return;
  }
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_98 = param_3;
  FUN_141e67a60(param_4);
  if (*(longlong *)(param_4 + 0x20) != 0) {
    FUN_141e53ce0(*(undefined8 *)(param_1 + 0x20),param_2,local_98);
    return;
  }
  if (*(longlong *)(param_4 + 0x60) != 0) {
    FVulkanCommonPipelineDescriptorState::SetSRVBufferViewState
              (*(undefined8 *)(param_1 + 0x20),param_2,local_98);
    return;
  }
  if (*(longlong *)(param_4 + 0x28) == 0) {
    return;
  }
  iVar1 = FTransitionAndLayoutManager::FindOrAddLayout
                    (*(longlong *)(param_1 + 0x78) + 0x2e0,*(undefined8 *)(param_4 + 0x38),0);
  if (iVar1 == 1) goto LAB_141e540a6;
  plVar6 = *(longlong **)(param_4 + 0x28);
  if (plVar6 == (longlong *)0x0) {
LAB_141e53f53:
    puVar5 = (undefined4 *)&DAT_00000078;
    puVar7 = (undefined4 *)&DAT_00000078;
    plVar6 = (longlong *)&DAT_00000018;
  }
  else {
    lVar3 = (**(code **)(*plVar6 + 8))(plVar6);
    if ((lVar3 == 0) && (lVar3 = (**(code **)(*plVar6 + 0x28))(plVar6), lVar3 == 0)) {
      lVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
      if ((lVar3 != 0) || (lVar3 = (**(code **)(*plVar6 + 0x18))(plVar6), lVar3 != 0)) {
        puVar7 = (undefined4 *)(lVar3 + 0xe8);
        puVar5 = (undefined4 *)(lVar3 + 0xe8);
        plVar6 = (longlong *)(lVar3 + 0x88);
        goto LAB_141e53f5e;
      }
      lVar3 = (**(code **)(*plVar6 + 0x20))(plVar6);
      if (lVar3 == 0) {
        LowLevelFatalErrorHandler("Unknown",0x2c5,L"Unknown Vulkan RHI texture type");
        FDebug::AssertFailed(&DAT_143f3f584,"Unknown",0x2c5,L"Unknown Vulkan RHI texture type");
        goto LAB_141e53f53;
      }
    }
    puVar7 = (undefined4 *)(lVar3 + 0xe0);
    puVar5 = (undefined4 *)(lVar3 + 0xe0);
    plVar6 = (longlong *)(lVar3 + 0x80);
  }
LAB_141e53f5e:
  local_88 = FVulkanCommandBufferManager::GetActiveCmdBuffer
                       (*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x2d8));
  plVar8 = (longlong *)(*(longlong *)(param_1 + 0x78) + 0x380);
  local_80 = (longlong *)*plVar6;
  local_70 = plVar8;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(plVar8,local_90);
  piVar4 = (int *)0x0;
  if (local_90[0] != -1) {
    piVar4 = (int *)(*plVar8 + (longlong)local_90[0] * 0x18);
  }
  local_94 = 1;
  piVar9 = piVar4 + 2;
  if (piVar4 == (int *)0x0) {
    piVar9 = (int *)0x0;
  }
  if (piVar9 == (int *)0x0) {
    local_68 = *puVar7;
    local_a8 = &local_68;
    local_58 = 1;
    uStack_64 = 0;
    uStack_60 = 1;
    VulkanRHI::ImagePipelineBarrier(*(undefined8 *)(local_88 + 0x40),*plVar6,0,8);
    local_78 = &local_94;
    local_80 = plVar6;
    TSet<TTuple<VkImage_T_*,enum_VkImageLayout>,TDefaultMapHashableKeyFuncs<VkImage_T_*,enum_VkImageLayout,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<VkImage_T_*_const_&,enum_VkImageLayout_&&>_>
              (local_70,local_90,&local_80,0);
  }
  else if (*piVar9 != 1) {
    local_68 = *puVar5;
    local_58 = 1;
    uStack_64 = 0;
    uStack_60 = 1;
    uVar2 = FUN_141e48650();
    local_a8 = &local_68;
    VulkanRHI::ImagePipelineBarrier(*(undefined8 *)(local_88 + 0x40),local_80,uVar2,8);
    *piVar9 = local_94;
  }
LAB_141e540a6:
  local_a8 = (undefined4 *)CONCAT44(local_a8._4_4_,1);
  FVulkanCommonPipelineDescriptorState::SetUAVTextureView
            (*(undefined8 *)(param_1 + 0x20),param_2,local_98,param_4 + 0x30);
  return;
}



// FUNCTION 141e540e0 SetUAVTextureView body=183 status=ok
// SIG undefined SetUAVTextureView(void)

void FVulkanCommonPipelineDescriptorState::SetUAVTextureView
               (longlong param_1,byte param_2,ulonglong param_3,longlong *param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  
  plVar5 = (longlong *)((ulonglong)param_2 * 0x58 + *(longlong *)(param_1 + 0x98));
  lVar3 = *(longlong *)((param_3 & 0xffffffff) * 0x40 + 0x28 + *plVar5);
  if (DAT_1464c9c14 < 2) {
    lVar1 = plVar5[6] + (param_3 & 0xffffffff) * 0xc;
    iVar2 = (int)param_4[2];
    bVar6 = *(int *)(lVar1 + 4) != iVar2;
    if (bVar6) {
      *(int *)(lVar1 + 4) = iVar2;
      *(longlong *)(lVar3 + 8) = *param_4;
    }
    bVar7 = *(int *)(lVar1 + 8) != param_5;
    if (bVar7) {
      *(int *)(lVar1 + 8) = param_5;
      *(int *)(lVar3 + 0x10) = param_5;
    }
    bVar7 = bVar7 || bVar6;
    *(byte *)(plVar5 + 10) = *(byte *)(plVar5 + 10) | bVar7;
    *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | bVar7;
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | bVar7;
    return;
  }
  lVar1 = *param_4;
  lVar4 = *(longlong *)(lVar3 + 8);
  *(longlong *)(lVar3 + 8) = lVar1;
  iVar2 = *(int *)(lVar3 + 0x10);
  *(int *)(lVar3 + 0x10) = param_5;
  bVar6 = iVar2 != param_5 || lVar4 != lVar1;
  *(byte *)(param_1 + 0x90) = *(byte *)(param_1 + 0x90) | bVar6;
  *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | bVar6;
  return;
}



// FUNCTION 141e541a0 Setup body=418 status=ok
// SIG undefined Setup(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FVulkanShader::Setup(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_128 [32];
  undefined2 local_108;
  longlong local_f8;
  int local_f0;
  undefined4 local_ec;
  undefined **local_e8 [18];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  char local_38 [24];
  ulonglong local_20;
  longlong lVar5;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  FArchive::FArchive(local_e8);
  local_e8[0] = &PTR_FUN_143f4a3a0;
  lVar5 = 0;
  local_48 = 0x7fffffffffffffff;
  local_58 = 0;
  local_50 = param_2;
  FArchive::SetIsLoading(local_e8,1);
  FArchive::SetIsPersistent(local_e8,1);
  FUN_141e3c770(local_e8,param_1 + 0x20);
  FUN_1408bda20(local_e8,param_1 + 0x148);
  TCString<wchar_t>::SprintfImpl
            (local_38,"main_%0.8x_%0.8x",(longlong)*(int *)(param_1 + 0x150) << 2,
             *(undefined4 *)(param_1 + 0xbc));
  iVar7 = 0;
  local_f8 = 0;
  uVar6 = 0;
  local_ec = 0;
  if (local_38[0] != '\0') {
    lVar5 = -1;
    do {
      lVar4 = lVar5 + 1;
      lVar2 = lVar5 + 1;
      lVar5 = lVar4;
    } while (local_38[lVar2] != '\0');
    iVar3 = (int)lVar4 + 1;
    local_f0 = iVar3;
    if (0 < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
    }
    uVar6 = local_ec;
    iVar7 = local_f0;
    lVar5 = local_f8;
    local_108 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_f8,iVar3,local_38,iVar3);
  }
  plVar1 = (longlong *)(param_1 + 8);
  if (plVar1 == &local_f8) {
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
  else {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = lVar5;
    *(int *)(param_1 + 0x10) = iVar7;
    *(undefined4 *)(param_1 + 0x14) = uVar6;
  }
  FArchive::~FArchive(local_e8);
  return;
}



// FUNCTION 141e54350 FUN_141e54350 body=595 status=ok
// SIG undefined FUN_141e54350(void)

ulonglong FUN_141e54350(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,
                       undefined8 *param_5,longlong param_6,longlong param_7,longlong param_8,
                       undefined8 *param_9)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  bool bVar14;
  
  param_1[6] = param_3;
  uVar8 = 0;
  *param_1 = param_4;
  iVar3 = (int)param_2[1];
  *(int *)(param_1 + 3) = iVar3;
  param_1[1] = param_7;
  plVar10 = (longlong *)param_1[4];
  for (iVar9 = (int)param_1[5]; iVar9 != 0; iVar9 = iVar9 + -1) {
    puVar11 = (undefined8 *)*plVar10;
    if (puVar11 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar11 + 1);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if ((*(char *)(puVar11 + 2) == '\0') &&
           ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')
            ))) {
          LOCK();
          bVar14 = *(int *)((longlong)puVar11 + 0xc) == 0;
          if (bVar14) {
            *(int *)((longlong)puVar11 + 0xc) = 1;
          }
          UNLOCK();
          if (bVar14) {
            uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
            uVar6 = uVar8;
            if (uVar5 != 0) {
              uVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
            }
            *(undefined8 **)(uVar6 + 8) = puVar11;
            FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          }
        }
        else {
          (**(code **)*puVar11)(puVar11,1);
        }
      }
    }
    plVar10 = plVar10 + 1;
  }
  plVar10 = param_1 + 4;
  iVar9 = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != iVar3) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar10,iVar3);
    iVar9 = (int)param_1[5];
  }
  uVar5 = *(uint *)(param_1 + 3);
  uVar6 = (ulonglong)uVar5;
  *(uint *)(param_1 + 5) = iVar9 + uVar5;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)(iVar9 + uVar5)) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar10,iVar9);
  }
  puVar11 = (undefined8 *)(*plVar10 + (longlong)iVar9 * 8);
  if (uVar5 != 0) {
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
  }
  if (0 < (int)param_2[1]) {
    puVar7 = (undefined4 *)(param_4 + 0x20);
    puVar13 = (undefined4 *)(param_3 + 8);
    uVar6 = uVar8;
    uVar12 = uVar8;
    do {
      puVar7[-8] = 0x23;
      puVar7[-2] = (int)uVar6;
      *puVar7 = 1;
      puVar7[1] = *(undefined4 *)(*param_2 + uVar12 * 4);
      switch(*(undefined4 *)(*param_2 + uVar12 * 4)) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 10:
        if (param_3 != 0) {
          puVar13[-2] = *(undefined4 *)(param_8 + 0x20);
          puVar13[-1] = *(undefined4 *)(param_9 + 2);
          *puVar13 = 1;
        }
        *param_5 = *(undefined8 *)(param_8 + 0x18);
        param_5[1] = *param_9;
        *(undefined4 *)(param_5 + 2) = 1;
        *(undefined8 **)(puVar7 + 2) = param_5;
        param_5 = param_5 + 3;
        break;
      case 8:
        *(char *)(uVar12 + param_1[1]) = (char)uVar8;
        uVar8 = (ulonglong)((int)uVar8 + 1);
      case 6:
      case 7:
        *(longlong *)(puVar7 + 4) = param_6;
        param_6 = param_6 + 0x18;
      }
      puVar7 = puVar7 + 0x10;
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar12 = uVar12 + 1;
      puVar13 = puVar13 + 3;
    } while ((int)uVar5 < (int)param_2[1]);
  }
  return uVar8;
}



// FUNCTION 141e545d0 FUN_141e545d0 body=718 status=ok
// SIG undefined FUN_141e545d0(void)

int FUN_141e545d0(byte *param_1,longlong param_2,undefined4 *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  
  *param_3 = 0x1f;
  *(undefined8 *)(param_3 + 1) = 0;
  *(undefined8 *)(param_3 + 3) = 0;
  *(undefined8 *)(param_3 + 5) = 0;
  *(undefined8 *)(param_3 + 7) = 0;
  *(undefined8 *)(param_3 + 9) = 0;
  *(undefined8 *)(param_3 + 0xb) = 0;
  *(undefined8 *)(param_3 + 0xd) = 0;
  *(undefined8 *)(param_3 + 0xf) = 0;
  *(undefined8 *)(param_3 + 0x11) = 0;
  param_3[0x13] = 0;
  bVar1 = *param_1;
  uVar9 = 0x7fffffff;
  if (bVar1 == 0) {
    uVar4 = 0;
  }
  else if (((bVar1 == 1) || (bVar1 == 2)) || ((2 < bVar1 && (bVar1 < 5)))) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0x7fffffff;
  }
  param_3[5] = uVar4;
  bVar1 = *param_1;
  if (bVar1 == 0) {
    uVar4 = 0;
  }
  else if (((bVar1 == 1) || (bVar1 == 2)) || ((2 < bVar1 && (bVar1 < 5)))) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0x7fffffff;
  }
  param_3[6] = uVar4;
  bVar1 = *param_1;
  if ((bVar1 == 0) || (bVar1 == 1)) {
LAB_141e5469a:
    uVar4 = 0;
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 == 3) goto LAB_141e5469a;
      if (bVar1 != 4) {
        uVar4 = 0x7fffffff;
        goto LAB_141e5469c;
      }
    }
    uVar4 = 1;
  }
LAB_141e5469c:
  param_3[7] = uVar4;
  bVar1 = param_1[1];
  uVar4 = 3;
  if (bVar1 == 0) {
    uVar5 = 0;
  }
  else if (bVar1 == 1) {
    uVar5 = 2;
  }
  else if (bVar1 == 2) {
    uVar5 = 1;
  }
  else if (bVar1 == 3) {
    uVar5 = 3;
  }
  else {
    uVar5 = 0x7fffffff;
  }
  param_3[8] = uVar5;
  bVar1 = param_1[2];
  if (bVar1 == 0) {
    uVar5 = 0;
  }
  else if (bVar1 == 1) {
    uVar5 = 2;
  }
  else if (bVar1 == 2) {
    uVar5 = 1;
  }
  else if (bVar1 == 3) {
    uVar5 = 3;
  }
  else {
    uVar5 = 0x7fffffff;
  }
  param_3[9] = uVar5;
  bVar1 = param_1[3];
  if (bVar1 == 0) {
    uVar4 = 0;
  }
  else if (bVar1 == 1) {
    uVar4 = 2;
  }
  else if (bVar1 == 2) {
    uVar4 = 1;
  }
  else if (bVar1 != 3) {
    uVar4 = 0x7fffffff;
  }
  param_3[10] = uVar4;
  fVar10 = 1.0;
  param_3[0xb] = *(undefined4 *)(param_1 + 4);
  param_3[0xd] = 0x3f800000;
  if (*param_1 != 0) {
    uVar6 = *(uint *)(param_1 + 0x10);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_1469fcd28) {
      _Init_thread_header(&DAT_1469fcd28);
      if (DAT_1469fcd28 == -1) {
        if (DAT_1468b1f88 == (longlong *)0x0) {
          IConsoleManager::SetupSingleton();
        }
        plVar7 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.MaxAnisotropy");
        lVar8 = 0;
        if (plVar7 != (longlong *)0x0) {
          lVar8 = (**(code **)(*plVar7 + 0x38))(plVar7);
        }
        DAT_1469fcd20 = lVar8;
        _Init_thread_footer(&DAT_1469fcd28);
      }
    }
    uVar3 = *(uint *)(DAT_1469fcd20 + 4);
    if (0 < (int)uVar6) {
      uVar3 = uVar6;
    }
    if ((int)uVar3 < 1) {
      uVar6 = 1;
    }
    else {
      uVar6 = 0x10;
      if ((int)uVar3 < 0x10) {
        uVar6 = uVar3;
      }
    }
    fVar11 = (float)uVar6;
    if (1.0 <= fVar11) {
      fVar10 = *(float *)(param_2 + 0x8c0);
      if (fVar11 <= *(float *)(param_2 + 0x8c0)) {
        fVar10 = fVar11;
      }
    }
    else {
      fVar10 = 1.0;
    }
    param_3[0xd] = fVar10;
  }
  param_3[0xc] = (uint)(1.0 < fVar10);
  param_3[0xe] = (uint)(param_1[0x18] != 0);
  if (param_1[0x18] == 0) {
    uVar9 = 0;
  }
  else if (param_1[0x18] == 1) {
    uVar9 = 1;
  }
  param_3[0xf] = uVar9;
  param_3[0x10] = *(undefined4 *)(param_1 + 8);
  param_3[0x11] = *(undefined4 *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 0x14);
  param_3[0x12] = -(uint)(iVar2 != 0) & 4;
  return -iVar2;
}



// FUNCTION 141e548a0 FUN_141e548a0 body=1025 status=ok
// SIG undefined FUN_141e548a0(void)

void FUN_141e548a0(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  ulonglong uVar8;
  char cVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  int local_b8;
  uint uStack_b4;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  int iStack_58;
  uint uStack_54;
  uint *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uVar10 = FCommandLine::Get();
  cVar9 = FParse::Param(uVar10,L"savevulkanpsocacheonexit");
  if (cVar9 != '\0') {
    FUN_141e52fe0();
  }
  FUN_141e2a740(*(undefined8 *)(param_1 + 0x70));
  EmptyCachedBoundShaderStates();
  FUN_141e5e1f0();
  if (DAT_146ab62c8 != '\0') {
    DAT_146ab62c8 = '\0';
    DAT_146ab62f5 = 0;
    puVar11 = (undefined8 *)FRenderResource::GetResourceList();
    for (puVar11 = (undefined8 *)*puVar11; puVar11 != (undefined8 *)0x0;
        puVar11 = (undefined8 *)*puVar11) {
      (**(code **)(*(longlong *)puVar11[2] + 0x20))();
    }
    puVar11 = (undefined8 *)FRenderResource::GetResourceList();
    for (puVar11 = (undefined8 *)*puVar11; puVar11 != (undefined8 *)0x0;
        puVar11 = (undefined8 *)*puVar11) {
      (**(code **)(*(longlong *)puVar11[2] + 0x10))();
    }
    lVar6 = *(longlong *)(param_1 + 0x70);
    plVar14 = (longlong *)(lVar6 + 0x1860);
    local_b8 = 0;
    uVar4 = *(uint *)(lVar6 + 0x1888);
    puVar1 = (uint *)(lVar6 + 0x1870);
    uStack_b4 = 1;
    uStack_a4 = 0;
    iStack_a0 = 0;
    if (uVar4 != 0) {
      puVar16 = *(uint **)(lVar6 + 0x1880);
      if (*(uint **)(lVar6 + 0x1880) == (uint *)0x0) {
        puVar16 = puVar1;
      }
      uVar5 = *puVar16;
      iStack_a0 = 0;
      local_b8 = 0;
      while (uVar5 == 0) {
        lVar13 = (longlong)local_b8;
        iStack_a0 = iStack_a0 + 0x20;
        iVar12 = local_b8 + 1;
        bVar7 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b8;
        local_b8 = iVar12;
        if (bVar7) goto LAB_141e54a1f;
        uVar5 = puVar16[lVar13 + 1];
      }
      uStack_b4 = -uVar5 & uVar5;
      iVar12 = 0x1f;
      if (uStack_b4 != 0) {
        for (; uStack_b4 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      if (uStack_b4 == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - iVar12;
      }
      uStack_a4 = (iStack_a0 - iVar12) + 0x1f;
      if ((int)uVar4 < (int)uStack_a4) {
LAB_141e54a1f:
        uStack_a4 = uVar4;
      }
    }
    uVar5 = *(uint *)(lVar6 + 0x1888);
    uStack_80 = CONCAT44(uStack_b4,local_b8);
    uStack_48 = CONCAT44(uStack_a4,0xffffffff);
    uStack_68 = CONCAT44(uStack_9c,iStack_a0);
    iVar12 = (int)uVar5 >> 5;
    local_88._4_4_ = (undefined4)((ulonglong)plVar14 >> 0x20);
    uVar17 = -1 << ((byte)uVar5 & 0x1f);
    uVar15 = uVar5 & 0xffffffe0;
    local_88 = CONCAT44(local_88._4_4_,iVar12);
    uStack_78 = CONCAT44(uVar5,uVar17);
    uStack_70 = CONCAT44(uStack_a4,uVar5) & 0xffffffffffffffe0;
    iStack_58 = local_b8;
    uStack_54 = uStack_b4;
    local_50 = puVar1;
    local_40 = uStack_68;
    local_60 = plVar14;
    uVar10 = uStack_78;
    if (uVar5 != uVar4) {
      puVar16 = *(uint **)(lVar6 + 0x1880);
      if (*(uint **)(lVar6 + 0x1880) == (uint *)0x0) {
        puVar16 = puVar1;
      }
      uVar17 = puVar16[iVar12] & uVar17;
      while (uVar17 == 0) {
        uVar15 = uVar15 + 0x20;
        uVar8 = uStack_70 >> 0x20;
        uStack_70 = CONCAT44((int)uVar8,uVar15);
        local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
        local_88 = CONCAT44(local_88._4_4_,iVar12 + 1);
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
        goto LAB_141e54afc;
        uVar17 = puVar16[(longlong)iVar12 + 1];
        uStack_78 = 0xffffffff;
        iVar12 = iVar12 + 1;
      }
      uVar17 = -uVar17 & uVar17;
      iVar12 = 0x1f;
      if (uVar17 != 0) {
        for (; uVar17 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      if (uVar17 == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - iVar12;
      }
      iVar12 = (uVar15 - iVar12) + 0x1f;
      uStack_78 = CONCAT44(iVar12,(undefined4)uStack_78);
      uVar10 = uStack_78;
      if ((int)uVar4 < iVar12) {
LAB_141e54afc:
        uStack_78 = CONCAT44(uVar4,(undefined4)uStack_78);
        uVar10 = uStack_78;
      }
    }
    while( true ) {
      if (((uStack_48._4_4_ == (int)((ulonglong)uVar10 >> 0x20)) && (local_50 == puVar1)) &&
         (local_60 == plVar14)) break;
      (*DAT_146ab0118)(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 8),
                       *(undefined8 *)
                        (*(longlong *)(*local_60 + 8 + (longlong)uStack_48._4_4_ * 0x18) + 0x18),0);
      uStack_48 = CONCAT44(uStack_48._4_4_,(uint)uStack_48 & ~uStack_54);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_58);
    }
    TSet<TTuple<unsigned_int,TRefCountPtr<FRHISamplerState>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TRefCountPtr<FRHISamplerState>,0>,FDefaultSetAllocator>
    ::Empty(*(longlong *)(param_1 + 0x70) + 0x1860,0);
    FUN_141ec6070(0);
    FUN_141ec6070(0);
  }
  FUN_141e24c40(*(undefined8 *)(param_1 + 0x70));
  lVar6 = *(longlong *)(param_1 + 0x70);
  if (lVar6 != 0) {
    FUN_141e214e0(lVar6);
    FMemory::operator_delete(lVar6,0x1938);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  DAT_146aafab0 = 0;
  local_90 = (longlong *)0x0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&DAT_146aafab8,&local_90);
  plVar14 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_90 + 1;
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar3 = (int *)((longlong)plVar14 + 0xc);
      iVar12 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  (*DAT_146aaff08)(*(undefined8 *)(param_1 + 0x38),0);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,*(undefined8 *)(param_1 + 0x90),1);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,*(undefined8 *)(param_1 + 0x98),1);
  FUN_141e5ef60();
  return;
}



// FUNCTION 141e54cb0 FUN_141e54cb0 body=78 status=ok
// SIG undefined FUN_141e54cb0(void)

undefined8 FUN_141e54cb0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0;
  case 1:
    return 1;
  case 2:
    return 2;
  case 3:
    return 3;
  case 4:
    return 4;
  case 5:
    return 5;
  case 6:
    return 6;
  case 7:
    return 7;
  default:
    return 0x7fffffff;
  }
}



// FUNCTION 141e54d20 FUN_141e54d20 body=751 status=ok
// SIG undefined FUN_141e54d20(void)

void FUN_141e54d20(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *_Src;
  ulonglong uVar3;
  int iVar4;
  BOOL BVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 local_res8;
  undefined8 *local_res10;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined8 *puStack_58;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  puVar8 = *(undefined8 **)(param_2 + 0x90);
  local_res8 = *(undefined8 *)(param_2 + 0x40);
  local_64 = 0;
  local_5c = 0;
  local_4c = 0;
  local_84 = 0;
  local_7c = 0;
  local_74 = 0;
  uStack_70 = 0;
  local_6c = 0;
  uStack_68 = 0;
  puStack_58 = &local_res8;
  local_88 = 4;
  uStack_60 = 1;
  uStack_48 = (undefined4)param_4;
  uStack_44 = (undefined4)((ulonglong)param_4 >> 0x20);
  local_98 = 0;
  local_90 = 0;
  local_res10 = puVar8;
  uStack_50 = param_3;
  if (0 < *(int *)(param_2 + 0x68)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_98);
    uVar11 = 0;
    plVar9 = *(longlong **)(param_2 + 0x60);
    uVar10 = (longlong)*(int *)(param_2 + 0x68) & 0x1fffffffffffffff;
    if (plVar9 + *(int *)(param_2 + 0x68) < plVar9) {
      uVar10 = uVar11;
    }
    lVar6 = local_98;
    if (uVar10 != 0) {
      do {
        uVar3 = local_90;
        lVar7 = (longlong)(int)local_90;
        uVar2 = *(undefined8 *)(*plVar9 + 0x18);
        iVar4 = (int)local_90 + 1;
        local_90 = CONCAT44(local_90._4_4_,iVar4);
        if (local_90._4_4_ < iVar4) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                    (&local_98,uVar3 & 0xffffffff);
          lVar6 = local_98;
        }
        plVar9 = plVar9 + 1;
        *(undefined8 *)(lVar6 + lVar7 * 8) = uVar2;
        uVar11 = uVar11 + 1;
        puVar8 = local_res10;
      } while (uVar11 != uVar10);
    }
    local_7c = CONCAT44(*(undefined4 *)(param_2 + 0x68),(undefined4)local_7c);
    uStack_68 = (undefined4)*(undefined8 *)(param_2 + 0x50);
    local_64 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x50) >> 0x20);
    uStack_70 = (undefined4)lVar6;
    local_6c = (undefined4)((ulonglong)lVar6 >> 0x20);
  }
  iVar4 = (*DAT_146aaff70)(*param_1,1,&local_88,*puVar8);
  if (iVar4 != 0) {
    FUN_141e67d70(iVar4,"VulkanRHI::vkQueueSubmit(Queue, 1, &SubmitInfo, Fence->GetHandle())",
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQueue.cpp",0x43
                 );
  }
  *(undefined1 *)(param_2 + 0x2c) = 4;
  *(undefined4 *)(param_2 + 0x58) = 0;
  if (0x7fffffff < *(uint *)(param_2 + 0x5c)) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_2 + 0x50,0);
  }
  puVar8 = (undefined8 *)(param_2 + 0x60);
  puVar1 = (undefined8 *)(param_2 + 0x70);
  if (puVar1 != puVar8) {
    iVar4 = *(int *)(param_2 + 0x68);
    _Src = (void *)*puVar8;
    *(int *)(param_2 + 0x78) = iVar4;
    if ((iVar4 == 0) && (*(int *)(param_2 + 0x7c) == 0)) {
      *(undefined4 *)(param_2 + 0x7c) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar4);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar4 << 3);
    }
  }
  *(undefined4 *)(param_2 + 0x68) = 0;
  if ((*(int *)(param_2 + 0x6c) < 0) && (*(int *)(param_2 + 0x6c) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(puVar8,0);
  }
  *(undefined8 *)(param_2 + 0xa0) = *(undefined8 *)(param_2 + 0x98);
  if (DAT_146aafbf8 != 0) {
    FUN_141e30ab0(param_1[2] + 0x438,*(undefined8 *)(param_2 + 0x90),200000000);
    if (*(int *)(*(longlong *)(param_2 + 0x90) + 8) != 1) {
      FUN_141e24000(param_1[2] + 0x438);
    }
    FVulkanCommandBufferPool::RefreshFenceStatus(*(undefined8 *)(param_2 + 0xa8),0);
  }
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  }
  param_1[8] = param_2;
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  param_1[10] = param_1[10] + 1;
  param_1[9] = uVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  FVulkanCommandBufferPool::RefreshFenceStatus(*(undefined8 *)(param_2 + 0xa8),param_2);
  VulkanRHI::FStagingManager::ProcessPendingFree(param_1[2] + 0x3f0,0,0);
  if (local_98 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141e55010 FUN_141e55010 body=2986 status=ok
// SIG undefined FUN_141e55010(void)

void FUN_141e55010(longlong param_1,int *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  undefined4 uVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  uint uVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  int iVar22;
  int *piVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  bool bVar26;
  uint local_res10;
  longlong local_res18;
  ulonglong in_stack_fffffffffffffee8;
  undefined8 in_stack_fffffffffffffef0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  int local_a0;
  longlong local_98;
  int local_90 [2];
  undefined4 local_88 [2];
  int local_80 [2];
  int *local_78;
  longlong local_70;
  longlong **local_68;
  longlong *local_60;
  longlong *local_58 [3];
  
  uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffef0 >> 0x20);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aafe80) && (_Init_thread_header(&DAT_146aafe80), DAT_146aafe80 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146aafe78 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.ProfileGPU.ShowTransitions");
    _Init_thread_footer(&DAT_146aafe80);
  }
  (**(code **)(*DAT_146aafe78 + 0x68))();
  if (param_2[0x16] < 1) {
    if (*(char *)(*(longlong *)(param_1 + 0x188) + 0x1438) == '\0') {
      bVar26 = true;
    }
    else {
      bVar26 = param_1 != *(longlong *)(*(longlong *)(param_1 + 0x188) + 0x18b8);
    }
    lVar9 = *(longlong *)(param_1 + 0x2d8);
    if (*(longlong *)(lVar9 + 0x78) != 0) {
      FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar9,0,0);
    }
    local_res18 = *(longlong *)(lVar9 + 0x70);
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = (longlong *)0x0;
    local_a8 = 0;
    cVar4 = FUN_141e47ed0(param_2,param_1 + 0x2e0,&local_c0,&local_b0);
    if (cVar4 == '\0') goto LAB_141e55b1b;
    bVar3 = false;
    for (plVar12 = local_b0; plVar12 != local_b0 + (longlong)(int)local_a8 * 9;
        plVar12 = plVar12 + 9) {
      bVar3 = (bool)(bVar3 | (int)plVar12[3] == 2);
    }
    lVar9 = *(longlong *)(param_1 + 0x188);
    if ((*(char *)(lVar9 + 0x1438) != '\0') &&
       ((lVar11 = *(longlong *)(lVar9 + 0x18b8), param_1 == lVar11 ||
        ((*(longlong *)(param_2 + 0x24) != 0 && ((uint)param_2[0x26] < 2)))))) {
      local_68 = &local_b0;
      iVar22 = param_2[0x26];
      local_60 = &local_c0;
      lVar2 = *(longlong *)(*(longlong *)(lVar9 + 0x18b0) + 0x2d8);
      uVar7 = *(undefined4 *)
               (*(longlong *)(*(longlong *)(*(longlong *)(lVar9 + 0x18b0) + 0x188) + 0x1418) + 8);
      uVar1 = *(undefined4 *)(*(longlong *)(*(longlong *)(lVar11 + 0x188) + 0x1420) + 8);
      if (*(longlong *)(lVar2 + 0x78) != 0) {
        FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar2,0,0);
      }
      uVar24 = *(undefined8 *)(lVar2 + 0x70);
      lVar9 = *(longlong *)(lVar11 + 0x2d8);
      if (*(longlong *)(lVar9 + 0x70) == 0) {
        FVulkanCommandBufferManager::PrepareForNewActiveCommandBuffer(lVar9);
        lVar9 = *(longlong *)(lVar11 + 0x2d8);
      }
      if (*(longlong *)(lVar9 + 0x78) != 0) {
        FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar9,0,0);
      }
      uVar14 = 0x8000;
      uVar19 = 0x800;
      if (iVar22 != 1) {
        uVar14 = 0x800;
        uVar19 = 0x8000;
        uVar1 = uVar7;
        uVar7 = uVar1;
      }
      uVar21 = *(undefined8 *)(lVar9 + 0x70);
      if (iVar22 != 1) {
        uVar21 = uVar24;
        uVar24 = *(undefined8 *)(lVar9 + 0x70);
      }
      <lambda_44b253514e53c75da30c0b826ddceba7>::operator()
                (&local_68,uVar1,uVar7,uVar21,uVar24,CONCAT44(uVar6,uVar19),uVar14);
      goto LAB_141e55b1b;
    }
    iVar22 = param_2[0x26];
    uVar8 = 0x10000;
    uVar6 = 0x10000;
    if (iVar22 == 0) {
      uVar6 = 0x800;
LAB_141e55a5e:
      uVar8 = 0x8000;
    }
    else if (iVar22 == 1) {
      uVar8 = 0x800;
      uVar6 = 0x8000;
    }
    else {
      if (iVar22 == 2) {
        uVar6 = 0x8000;
        goto LAB_141e55a5e;
      }
      if (iVar22 == 3) {
        uVar6 = 0x8800;
        uVar8 = 0x800;
      }
    }
    if (((int)local_b8 != 0) && (*(longlong *)(param_1 + 0x4a8) != 0)) {
      (*DAT_146ab0318)(*(undefined8 *)(local_res18 + 0x40));
      *(undefined1 *)(local_res18 + 0x2c) = 1;
      *(undefined8 *)(param_1 + 0x4a8) = 0;
      if (DAT_146aaf890 != 0) {
        FVulkanCommandBufferManager::SubmitActiveCmdBuffer(*(undefined8 *)(param_1 + 0x2d8),0);
        FVulkanCommandBufferManager::PrepareForNewActiveCommandBuffer
                  (*(undefined8 *)(param_1 + 0x2d8));
        lVar9 = *(longlong *)(param_1 + 0x2d8);
        if (*(longlong *)(lVar9 + 0x78) != 0) {
          FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar9,0,0);
        }
        local_res18 = *(longlong *)(lVar9 + 0x70);
      }
    }
    uVar18 = uVar8 | 0x8000;
    if (!bVar3) {
      uVar18 = uVar8;
    }
    (*DAT_146ab02d0)(*(undefined8 *)(local_res18 + 0x40),uVar18,uVar6,0,
                     in_stack_fffffffffffffee8 & 0xffffffff00000000,0,(int)local_b8,local_c0,
                     (int)local_a8,local_b0);
LAB_141e55b1b:
    if (*(longlong *)(param_2 + 0x24) != 0) {
      FVulkanComputeFence::WriteCmd
                (*(longlong *)(param_2 + 0x24),*(undefined8 *)(local_res18 + 0x40),bVar26);
    }
    if (local_b0 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_c0 == 0) {
      return;
    }
    FMemory::Free();
    return;
  }
  lVar9 = *(longlong *)(param_1 + 0x2d8);
  if (*(longlong *)(lVar9 + 0x78) != 0) {
    FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar9,0,0);
  }
  lVar9 = *(longlong *)(lVar9 + 0x70);
  iVar22 = *param_2;
  local_98 = lVar9;
  if ((iVar22 == 0) || (iVar22 == 5)) {
    piVar10 = (int *)0x0;
    bVar26 = false;
    if ((*(longlong *)(param_1 + 0x4a8) != 0) && (0 < param_2[0x16])) {
      piVar16 = piVar10;
      piVar17 = piVar10;
      piVar23 = piVar10;
      do {
        piVar15 = *(int **)(param_2 + 0x14);
        if (*(int **)(param_2 + 0x14) == (int *)0x0) {
          piVar15 = param_2 + 2;
        }
        lVar11 = (**(code **)(**(longlong **)((longlong)piVar15 + (longlong)piVar17) + 0x48))();
        lVar9 = *(longlong *)(param_1 + 0x4b0);
        lVar11 = *(longlong *)(lVar11 + 0x18);
        if (*(uint *)(lVar9 + 0x4c) != 0) {
          plVar12 = (longlong *)(lVar9 + 0x50);
          piVar15 = piVar10;
          do {
            if (*plVar12 == lVar11) goto LAB_141e5535f;
            uVar8 = (int)piVar15 + 1;
            piVar15 = (int *)(ulonglong)uVar8;
            plVar12 = plVar12 + 1;
          } while (uVar8 < *(uint *)(lVar9 + 0x4c));
        }
        if (*(longlong *)(lVar9 + 0xd0) == lVar11) {
LAB_141e5535f:
          piVar23 = (int *)(ulonglong)((int)piVar23 + 1);
          FTransitionAndLayoutManager::FindOrAddLayout(param_1 + 0x2e0,lVar11,0);
        }
        uVar8 = (int)piVar16 + 1;
        piVar16 = (int *)(ulonglong)uVar8;
        piVar17 = piVar17 + 2;
      } while ((int)uVar8 < param_2[0x16]);
      bVar26 = (int)piVar23 != 0;
    }
    bVar3 = false;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_a0 = 0;
    if (0 < param_2[0x16]) {
      local_b0 = (longlong *)(param_1 + 0x380);
      local_70 = 0;
      do {
        plVar12 = local_b0;
        piVar16 = *(int **)(param_2 + 0x14);
        if (*(int **)(param_2 + 0x14) == (int *)0x0) {
          piVar16 = param_2 + 2;
        }
        lVar9 = (**(code **)(**(longlong **)((longlong)piVar16 + local_70) + 0x48))();
        local_88[0] = 0;
        local_58[0] = *(longlong **)(lVar9 + 0x18);
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(plVar12,local_90);
        piVar16 = piVar10;
        if (local_90[0] != -1) {
          piVar16 = (int *)(*plVar12 + (longlong)local_90[0] * 0x18);
        }
        local_78 = piVar16 + 2;
        if (piVar16 == (int *)0x0) {
          local_78 = piVar10;
        }
        if (local_78 == (int *)0x0) {
          local_68 = local_58;
          local_60 = (longlong *)local_88;
          TSet<TTuple<VkImage_T_*,enum_VkImageLayout>,TDefaultMapHashableKeyFuncs<VkImage_T_*,enum_VkImageLayout,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<VkImage_T_*_const_&,enum_VkImageLayout_&&>_>
                    (plVar12,local_80,&local_68,0);
          local_78 = (int *)(*plVar12 + (longlong)local_80[0] * 0x18 + 8);
        }
        if (*param_2 == 0) {
          *local_78 = 0;
        }
        iVar22 = *(int *)(lVar9 + 0x60);
        uVar8 = 1;
        if ((-1 < iVar22) && (2 < iVar22)) {
          if (iVar22 == 3) {
            uVar8 = 6;
          }
          else if (iVar22 == 5) {
            uVar8 = *(uint *)(lVar9 + 0x58);
          }
          else if (iVar22 == 6) {
            uVar8 = *(int *)(lVar9 + 0x58) * 6;
          }
        }
        if (iVar22 == 6) {
          uVar8 = uVar8 / 6;
        }
        uVar18 = *(uint *)(lVar9 + 0x78);
        uVar13 = uVar18 & 6;
        bVar3 = (bool)(bVar3 | uVar13 != 0);
        local_c0 = *(longlong *)(lVar9 + 0x18);
        iVar22 = param_2[0x27];
        iVar5 = (int)local_d8;
        if (iVar22 < 0) {
          uVar6 = *(undefined4 *)(lVar9 + 0x70);
          lVar9 = (longlong)(int)local_d8;
          local_d8._0_4_ = (int)local_d8 + 1;
          if (local_d8._4_4_ < (int)local_d8) {
            TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(&local_e0);
          }
          *(undefined8 *)(local_e0 + lVar9 * 0x48) = 0;
          *(undefined8 *)(local_e0 + 8 + lVar9 * 0x48) = 0;
          *(undefined8 *)(local_e0 + 0x10 + lVar9 * 0x48) = 0;
          *(undefined8 *)(local_e0 + 0x18 + lVar9 * 0x48) = 0;
          *(undefined8 *)(local_e0 + 0x20 + lVar9 * 0x48) = 0;
          *(undefined8 *)(local_e0 + 0x28 + lVar9 * 0x48) = 0;
          *(undefined8 *)(local_e0 + 0x30 + lVar9 * 0x48) = 0;
          *(undefined8 *)(local_e0 + 0x38 + lVar9 * 0x48) = 0;
          *(undefined8 *)(local_e0 + 0x40 + lVar9 * 0x48) = 0;
          *(undefined4 *)(local_e0 + 0x38 + lVar9 * 0x48) = uVar6;
        }
        else {
          lVar9 = (longlong)(int)local_d8;
          local_d8._0_4_ = (int)local_d8 + 1;
          if (local_d8._4_4_ < (int)local_d8) {
            TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(&local_e0);
          }
          *(undefined8 *)(local_e0 + lVar9 * 0x48) = 0;
          *(undefined8 *)(local_e0 + 8 + lVar9 * 0x48) = 0;
          *(undefined8 *)(local_e0 + 0x10 + lVar9 * 0x48) = 0;
          *(undefined8 *)(local_e0 + 0x18 + lVar9 * 0x48) = 0;
          *(undefined8 *)(local_e0 + 0x20 + lVar9 * 0x48) = 0;
          *(undefined8 *)(local_e0 + 0x28 + lVar9 * 0x48) = 0;
          *(undefined8 *)(local_e0 + 0x30 + lVar9 * 0x48) = 0;
          *(undefined8 *)(local_e0 + 0x38 + lVar9 * 0x48) = 0;
          *(undefined8 *)(local_e0 + 0x40 + lVar9 * 0x48) = 0;
          *(int *)(local_e0 + 0x34 + lVar9 * 0x48) = iVar22;
          *(undefined4 *)(local_e0 + 0x38 + lVar9 * 0x48) = 1;
        }
        piVar16 = local_78;
        lVar9 = (longlong)iVar5;
        *(undefined8 *)(local_e0 + 0x20 + lVar9 * 0x48) = 0xffffffffffffffff;
        *(uint *)(local_e0 + 0x40 + lVar9 * 0x48) = uVar8;
        *(uint *)(local_e0 + 0x30 + lVar9 * 0x48) = uVar18;
        *(longlong *)(local_e0 + 0x28 + lVar9 * 0x48) = local_c0;
        *(undefined4 *)(local_e0 + lVar9 * 0x48) = 0x2d;
        switch(uVar13 != 0) {
        case false:
          uVar24 = 6;
          break;
        case true:
          uVar24 = 7;
        }
        iVar22 = *local_78;
        if (iVar22 < 0x3b9acdeb) {
          if (iVar22 == 0x3b9acdea) {
            piVar17 = (int *)0x5;
          }
          else {
            switch(iVar22) {
            default:
              piVar17 = piVar10;
              break;
            case 1:
              piVar17 = (int *)&DAT_00000009;
              break;
            case 2:
              piVar17 = (int *)0x2;
              break;
            case 3:
              piVar17 = (int *)0x3;
              break;
            case 4:
              piVar17 = (int *)0x7;
              break;
            case 5:
              piVar17 = (int *)&DAT_00000006;
              break;
            case 6:
              piVar17 = (int *)&DAT_00000004;
              break;
            case 7:
              piVar17 = (int *)0x1;
            }
          }
        }
        else {
          piVar17 = (int *)0x0;
          if (iVar22 == 0x3b9c9308) {
            piVar17 = (int *)0xa;
          }
        }
        lVar9 = local_e0 + (longlong)iVar5 * 0x48;
        uVar8 = FUN_141e26f50(piVar17,lVar9 + 0x10,lVar9 + 0x18);
        local_e8._0_4_ = (uint)local_e8 | uVar8;
        uVar8 = FUN_141e26f50(uVar24,lVar9 + 0x14,lVar9 + 0x1c);
        local_e8 = CONCAT44(local_e8._4_4_ | uVar8,(uint)local_e8);
        local_70 = local_70 + 8;
        *piVar16 = 5 - (uint)(uVar13 != 0);
        local_a0 = local_a0 + 1;
      } while (local_a0 < param_2[0x16]);
    }
    if (*(longlong *)(param_1 + 0x4a8) == 0) {
LAB_141e55744:
      lVar9 = local_98;
      if (bVar26) goto LAB_141e5574c;
    }
    else {
      if (bVar3) {
        if (*(char *)(*(longlong *)(param_1 + 0x4a8) + 0x33b) != '\x01') {
          bVar26 = true;
        }
        goto LAB_141e55744;
      }
LAB_141e5574c:
      lVar9 = local_98;
      (*DAT_146ab0318)(*(undefined8 *)(local_98 + 0x40));
      *(undefined1 *)(lVar9 + 0x2c) = 1;
      *(undefined8 *)(param_1 + 0x4a8) = 0;
      if (DAT_146aaf890 != 0) {
        FVulkanCommandBufferManager::SubmitActiveCmdBuffer(*(undefined8 *)(param_1 + 0x2d8),0);
        FVulkanCommandBufferManager::PrepareForNewActiveCommandBuffer
                  (*(undefined8 *)(param_1 + 0x2d8));
        lVar9 = *(longlong *)(param_1 + 0x2d8);
        if (*(longlong *)(lVar9 + 0x78) != 0) {
          FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar9,0,0);
        }
        lVar9 = *(longlong *)(lVar9 + 0x70);
      }
    }
LAB_141e557a7:
    if ((0 < (int)local_d8) || (0 < (int)local_c8)) {
      VulkanRHI::FPendingBarrier::InnerExecute(&local_e8,lVar9,1);
    }
  }
  else {
    if (iVar22 != 1) {
      if ((iVar22 == 4) && (*(char *)(lVar9 + 0x2c) == '\x02')) {
        (*DAT_146ab0318)(*(undefined8 *)(lVar9 + 0x40));
        *(undefined1 *)(lVar9 + 0x2c) = 1;
        *(undefined8 *)(param_1 + 0x4a8) = 0;
        if (DAT_146aaf890 != 0) {
          FVulkanCommandBufferManager::SubmitActiveCmdBuffer(*(undefined8 *)(param_1 + 0x2d8),0);
          FVulkanCommandBufferManager::PrepareForNewActiveCommandBuffer
                    (*(undefined8 *)(param_1 + 0x2d8));
          FVulkanCommandBufferManager::GetActiveCmdBuffer(*(undefined8 *)(param_1 + 0x2d8));
        }
      }
      goto LAB_141e557e1;
    }
    uVar20 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_res10 = 0;
    if (param_2[0x16] < 1) goto LAB_141e557e1;
    uVar25 = uVar20;
    do {
      piVar10 = *(int **)(param_2 + 0x14);
      if (*(int **)(param_2 + 0x14) == (int *)0x0) {
        piVar10 = param_2 + 2;
      }
      lVar9 = (**(code **)(**(longlong **)((longlong)piVar10 + uVar25) + 0x48))();
      uVar8 = *(uint *)(lVar9 + 0x78);
      piVar10 = (int *)FTransitionAndLayoutManager::FindOrAddLayoutRW
                                 (param_1 + 0x2e0,*(undefined8 *)(lVar9 + 0x18),0);
      if (*param_2 == 1) {
        *piVar10 = 0;
      }
      if ((uVar8 & 1) == 0) {
        iVar22 = 3;
      }
      else {
        iVar22 = (*(uint *)(lVar9 + 0x38) & 1) + 1;
      }
      uVar18 = (uint)uVar20;
      if (*piVar10 != iVar22) {
        iVar5 = *(int *)(lVar9 + 0x60);
        if ((iVar5 < 0) || (iVar5 < 3)) {
LAB_141e55206:
          uVar18 = 1;
        }
        else if (iVar5 == 3) {
          uVar18 = 6;
        }
        else if (iVar5 == 5) {
          uVar18 = *(uint *)(lVar9 + 0x58);
        }
        else {
          if (iVar5 != 6) goto LAB_141e55206;
          uVar18 = *(int *)(lVar9 + 0x58) * 6;
        }
        if (iVar5 == 6) {
          uVar18 = uVar18 / 6;
        }
        if (param_2[0x27] < 1) {
          iVar5 = VulkanRHI::FPendingBarrier::AddImageBarrier
                            (&local_e8,*(undefined8 *)(lVar9 + 0x18),uVar8,
                             *(undefined4 *)(lVar9 + 0x70),uVar18);
        }
        else {
          iVar5 = FUN_141e41050(&local_e8,*(undefined8 *)(lVar9 + 0x18),uVar8,param_2[0x27],1,uVar18
                               );
        }
        uVar6 = FUN_141e48650(iVar22);
        uVar7 = FUN_141e48650(*piVar10);
        lVar9 = local_e0 + (longlong)iVar5 * 0x48;
        uVar8 = FUN_141e26f50(uVar7,lVar9 + 0x10,lVar9 + 0x18);
        local_e8._0_4_ = (uint)local_e8 | uVar8;
        uVar8 = FUN_141e26f50(uVar6,lVar9 + 0x14);
        local_e8 = CONCAT44(local_e8._4_4_ | uVar8,(uint)local_e8);
        *piVar10 = iVar22;
        uVar18 = local_res10;
      }
      local_res10 = uVar18 + 1;
      uVar20 = (ulonglong)local_res10;
      uVar25 = uVar25 + 8;
    } while ((int)local_res10 < param_2[0x16]);
    if (0 < (int)local_d8) {
      lVar9 = local_98;
      if (*(longlong *)(param_1 + 0x4a8) != 0) goto LAB_141e5574c;
      goto LAB_141e557a7;
    }
  }
  if (local_d0 != 0) {
    FMemory::Free();
  }
  if (local_e0 != 0) {
    FMemory::Free();
  }
LAB_141e557e1:
  lVar9 = *(longlong *)(param_1 + 0x2d8);
  if (*(longlong *)(lVar9 + 0x78) != 0) {
    FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar9,0,0);
  }
  if ((*(char *)(*(longlong *)(lVar9 + 0x70) + 0x2c) == '\x01') &&
     (*(char *)(param_1 + 0x198) != '\0')) {
    FUN_141e29600(param_1);
    *(undefined1 *)(param_1 + 0x198) = 0;
    if (*(longlong *)(*(longlong *)(param_1 + 0x2d8) + 0x78) != 0) {
      FVulkanCommandBufferManager::SubmitUploadCmdBuffer(*(longlong *)(param_1 + 0x2d8),0,0);
    }
  }
  return;
}



// FUNCTION 141e55c30 FUN_141e55c30 body=375 status=ok
// SIG undefined FUN_141e55c30(void)

undefined4 FUN_141e55c30(int param_1,char param_2)

{
  undefined4 uVar1;
  
  uVar1 = (&DAT_1464ca1cc)[(longlong)param_1 * 10];
  if ((param_2 != '\0') && (0 < DAT_1464c9c14)) {
    switch(uVar1) {
    case 9:
      uVar1 = 0xf;
      if (DAT_1464c9c14 < 2) {
        uVar1 = 9;
      }
      return uVar1;
    case 0x10:
      return 0x16;
    case 0x17:
      return 0x1d;
    case 0x25:
      return 0x2b;
    case 0x2c:
      return 0x32;
    case 0x33:
      return 0x39;
    case 0x83:
      return 0x84;
    case 0x85:
      return 0x86;
    case 0x87:
      return 0x88;
    case 0x89:
      return 0x8a;
    case 0x91:
      return 0x92;
    case 0x93:
      return 0x94;
    case 0x95:
      return 0x96;
    case 0x97:
      return 0x98;
    case 0x9d:
      return 0x9e;
    case 0x9f:
      return 0xa0;
    case 0xa1:
      return 0xa2;
    case 0xa3:
      return 0xa4;
    case 0xa5:
      return 0xa6;
    case 0xa7:
      return 0xa8;
    case 0xa9:
      return 0xaa;
    case 0xab:
      return 0xac;
    case 0xad:
      return 0xae;
    case 0xaf:
      return 0xb0;
    case 0xb1:
      return 0xb2;
    case 0xb3:
      return 0xb4;
    case 0xb5:
      return 0xb6;
    case 0xb7:
      uVar1 = 0xb8;
    }
  }
  return uVar1;
}



// FUNCTION 141e55f00 UpdateInputAttachments body=470 status=ok
// SIG undefined UpdateInputAttachments(void)

void FVulkanPendingGfxState::UpdateInputAttachments(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ushort *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  bool bVar12;
  
  iVar7 = 0;
  lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 200) + 0x80);
  if (0 < *(int *)(lVar3 + 0x130)) {
    lVar6 = 0;
    do {
      puVar5 = (ushort *)(*(longlong *)(lVar3 + 0x128) + lVar6);
      if (*(char *)((longlong)puVar5 + 3) == '\0') {
        lVar8 = *(longlong *)(param_1 + 0x48);
        plVar9 = (longlong *)*param_2;
        plVar10 = (longlong *)((ulonglong)(byte)puVar5[1] * 0x58 + *(longlong *)(lVar8 + 0x98));
        lVar4 = *(longlong *)((ulonglong)*puVar5 * 0x40 + 0x28 + *plVar10);
        if (DAT_1464c9c14 < 2) {
          lVar1 = plVar10[6] + (ulonglong)*puVar5 * 0xc;
          iVar2 = (int)plVar9[2];
          bVar11 = *(int *)(lVar1 + 4) != iVar2;
          if (bVar11) {
            *(int *)(lVar1 + 4) = iVar2;
            *(longlong *)(lVar4 + 8) = *plVar9;
          }
          bVar12 = *(int *)(lVar1 + 8) != 1;
          if (bVar12) {
            *(undefined4 *)(lVar1 + 8) = 1;
            *(undefined4 *)(lVar4 + 0x10) = 1;
          }
          bVar12 = bVar12 || bVar11;
          *(byte *)(plVar10 + 10) = *(byte *)(plVar10 + 10) | bVar12;
        }
        else {
          bVar12 = *(longlong *)(lVar4 + 8) != *plVar9;
          *(longlong *)(lVar4 + 8) = *plVar9;
          bVar11 = *(int *)(lVar4 + 0x10) == 1;
          *(undefined4 *)(lVar4 + 0x10) = 1;
LAB_141e56097:
          bVar12 = (bool)(!bVar11 | bVar12);
        }
LAB_141e5609c:
        *(byte *)(lVar8 + 0x90) = *(byte *)(lVar8 + 0x90) | bVar12;
        *(byte *)(lVar8 + 0xc0) = *(byte *)(lVar8 + 0xc0) | bVar12;
      }
      else if (*(char *)((longlong)puVar5 + 3) == '\x01') {
        lVar8 = *(longlong *)(param_1 + 0x48);
        plVar9 = (longlong *)((ulonglong)(byte)puVar5[1] * 0x58 + *(longlong *)(lVar8 + 0x98));
        lVar4 = *(longlong *)((ulonglong)*puVar5 * 0x40 + 0x28 + *plVar9);
        if (1 < DAT_1464c9c14) {
          bVar12 = *(longlong *)(lVar4 + 8) != param_2[2];
          *(longlong *)(lVar4 + 8) = param_2[2];
          bVar11 = *(int *)(lVar4 + 0x10) == 4;
          *(undefined4 *)(lVar4 + 0x10) = 4;
          goto LAB_141e56097;
        }
        lVar1 = plVar9[6] + (ulonglong)*puVar5 * 0xc;
        iVar2 = (int)param_2[4];
        bVar11 = *(int *)(lVar1 + 4) != iVar2;
        if (bVar11) {
          *(int *)(lVar1 + 4) = iVar2;
          *(longlong *)(lVar4 + 8) = param_2[2];
        }
        bVar12 = *(int *)(lVar1 + 8) != 4;
        if (bVar12) {
          *(undefined4 *)(lVar1 + 8) = 4;
          *(undefined4 *)(lVar4 + 0x10) = 4;
        }
        bVar12 = bVar12 || bVar11;
        *(byte *)(plVar9 + 10) = *(byte *)(plVar9 + 10) | bVar12;
        goto LAB_141e5609c;
      }
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 4;
    } while (iVar7 < *(int *)(lVar3 + 0x130));
  }
  return;
}



// FUNCTION 141e56100 FUN_141e56100 body=231 status=ok
// SIG undefined FUN_141e56100(void)

void FUN_141e56100(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  puVar11 = (undefined8 *)*param_1;
  puVar10 = puVar11 + (longlong)(int)param_1[1] * 8;
  do {
    if (puVar11 == puVar10) {
      return;
    }
    iVar3 = *(int *)((longlong)puVar11 + 0x24);
    if (iVar3 < 0) {
LAB_141e5615a:
      iVar3 = *(int *)(param_2 + 0x4008);
      *(int *)(param_2 + 0x4008) = iVar3 + 1;
      if (*(int *)(param_2 + 0x400c) < iVar3 + 1) {
        FUN_141e52b00(param_2,iVar3);
      }
      uVar7 = puVar11[1];
      lVar9 = *(longlong *)(param_2 + 0x4000);
      if (*(longlong *)(param_2 + 0x4000) == 0) {
        lVar9 = param_2;
      }
      lVar8 = (longlong)iVar3 * 0x40;
      *(undefined8 *)(lVar9 + lVar8) = *puVar11;
      ((undefined8 *)(lVar9 + lVar8))[1] = uVar7;
      uVar7 = puVar11[3];
      puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar8);
      *puVar1 = puVar11[2];
      puVar1[1] = uVar7;
      uVar4 = *(undefined4 *)((longlong)puVar11 + 0x24);
      uVar5 = *(undefined4 *)(puVar11 + 5);
      uVar6 = *(undefined4 *)((longlong)puVar11 + 0x2c);
      puVar2 = (undefined4 *)(lVar9 + 0x20 + lVar8);
      *puVar2 = *(undefined4 *)(puVar11 + 4);
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
      uVar4 = *(undefined4 *)((longlong)puVar11 + 0x34);
      uVar5 = *(undefined4 *)(puVar11 + 7);
      uVar6 = *(undefined4 *)((longlong)puVar11 + 0x3c);
      puVar2 = (undefined4 *)(lVar9 + 0x30 + lVar8);
      *puVar2 = *(undefined4 *)(puVar11 + 6);
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      puVar2[3] = uVar6;
    }
    else {
      if (3 < iVar3) {
        if (5 < iVar3) {
          if (iVar3 < 9) {
            lVar9 = *(longlong *)puVar11[6];
            goto LAB_141e56158;
          }
          if (iVar3 == 10) goto LAB_141e5614f;
        }
        goto LAB_141e5615a;
      }
LAB_141e5614f:
      lVar9 = *(longlong *)(puVar11[5] + 8);
LAB_141e56158:
      if (lVar9 != 0) goto LAB_141e5615a;
    }
    puVar11 = puVar11 + 8;
  } while( true );
}



// FUNCTION 141e561f0 VulkanSetImageLayout body=247 status=ok
// SIG undefined VulkanSetImageLayout(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void VulkanSetImageLayout
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 *local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined4 local_34;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_78 = 0x2d;
  uStack_48 = *param_5;
  uStack_44 = param_5[1];
  uStack_40 = param_5[2];
  uStack_3c = *(undefined8 *)(param_5 + 3);
  local_74 = 0;
  local_6c = 0;
  local_34 = 0;
  local_64 = 0;
  uStack_50 = (undefined4)param_2;
  local_4c = (undefined4)((ulonglong)param_2 >> 0x20);
  uStack_58 = 0xffffffff;
  local_54 = 0xffffffff;
  local_5c = param_4;
  uStack_60 = param_3;
  uVar1 = FUN_141e48310(param_3);
  local_6c = CONCAT44(uVar1,(undefined4)local_6c);
  uVar1 = FUN_141e48310(param_4);
  _local_64 = CONCAT44(uStack_60,uVar1);
  uVar1 = FUN_141e492b0(param_4);
  uVar2 = FUN_141e492b0(param_3);
  local_80 = &local_78;
  local_88 = 1;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  (*DAT_146ab02d0)(param_1,uVar2,uVar1,0);
  return;
}



// FUNCTION 141e562f0 VulkanSetImageLayout body=38 status=ok
// SIG undefined VulkanSetImageLayout(void)

void FVulkanDynamicRHI::VulkanSetImageLayout
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5)

{
  ::VulkanSetImageLayout(param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 141e56320 WriteImage body=136 status=ok
// SIG undefined WriteImage(void)

ulonglong FVulkanDescriptorSetWriter::WriteImage
                    (longlong *param_1,uint param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  
  lVar3 = *(longlong *)((ulonglong)param_2 * 0x40 + 0x28 + *param_1);
  if (DAT_1464c9c14 < 2) {
    lVar1 = param_1[6] + (ulonglong)param_2 * 0xc;
    iVar2 = (int)param_3[2];
    bVar5 = *(int *)(lVar1 + 4) != iVar2;
    if (bVar5) {
      *(int *)(lVar1 + 4) = iVar2;
      *(longlong *)(lVar3 + 8) = *param_3;
    }
    bVar6 = *(int *)(lVar1 + 8) != param_4;
    if (bVar6) {
      *(int *)(lVar1 + 8) = param_4;
      *(int *)(lVar3 + 0x10) = param_4;
    }
    bVar6 = bVar6 || bVar5;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | bVar6;
    return (ulonglong)bVar6;
  }
  lVar1 = *param_3;
  lVar4 = *(longlong *)(lVar3 + 8);
  *(longlong *)(lVar3 + 8) = lVar1;
  iVar2 = *(int *)(lVar3 + 0x10);
  *(int *)(lVar3 + 0x10) = param_4;
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),iVar2 != param_4 || lVar4 != lVar1);
}



// FUNCTION 141e563b0 FUN_141e563b0 body=191 status=ok
// SIG undefined FUN_141e563b0(void)

longlong FUN_141e563b0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  int iVar5;
  
  lVar1 = *param_1;
  puVar2 = (undefined8 *)param_1[1];
  iVar5 = *(int *)(lVar1 + 0x100);
  *(int *)(param_2 + 0x100) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)(param_2 + 0x104) = 0;
  }
  else {
    FUN_141a09aa0(param_2,iVar5,0);
    puVar3 = (undefined1 *)(param_2 + 2);
    lVar4 = lVar1 - param_2;
    do {
      puVar3[-2] = puVar3[lVar4 + -2];
      puVar3[-1] = puVar3[lVar4 + -1];
      *puVar3 = puVar3[lVar4];
      puVar3[1] = puVar3[lVar4 + 1];
      *(undefined2 *)(puVar3 + 2) = *(undefined2 *)(puVar3 + lVar4 + 2);
      *(undefined2 *)(puVar3 + 4) = *(undefined2 *)(puVar3 + lVar4 + 4);
      puVar3 = puVar3 + 8;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined4 *)(param_2 + 0x108) = *(undefined4 *)(lVar1 + 0x108);
  *(undefined8 *)(param_2 + 0x110) = *puVar2;
  *puVar2 = 0;
  return param_2;
}



// FUNCTION 141e56470 FUN_141e56470 body=696 status=ok
// SIG undefined FUN_141e56470(void)

uint * FUN_141e56470(longlong *param_1,uint *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  char cVar14;
  uint uVar15;
  ulonglong *_Src;
  uint uVar16;
  bool bVar17;
  uint local_res8 [2];
  
  iVar13 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar12 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar12 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,uVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar12 = *(uint *)(param_1 + 6);
    iVar2 = *(int *)((longlong)(int)uVar12 * 0x20 + 4 + *param_1);
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = uVar12;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar9 +
                   (longlong)((int)(uVar12 + ((int)uVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar12 & 0x1f);
  puVar3 = (undefined4 *)*param_3;
  _Src = (ulonglong *)((longlong)(int)uVar12 * 0x20 + *param_1);
  uVar4 = *puVar3;
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  _Src[2] = 0;
  *(undefined4 *)_Src = uVar4;
  *(undefined4 *)((longlong)_Src + 4) = uVar5;
  *(undefined4 *)(_Src + 1) = uVar6;
  *(undefined4 *)((longlong)_Src + 0xc) = uVar7;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar16 != 1) {
    TSet<TTuple<FTextureLock,VulkanRHI::FStagingBuffer_*>,TDefaultMapHashableKeyFuncs<FTextureLock,VulkanRHI::FStagingBuffer_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar8 = local_res8[0];
    lVar11 = (longlong)(int)local_res8[0];
    bVar17 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar17);
    if (bVar17) {
      _guard_xfg_dispatch_icall_nop((void *)(lVar11 * 0x20 + *param_1),_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,uVar12,1);
      *param_2 = uVar8;
      goto LAB_141e566fa;
    }
  }
  if (3 < uVar16) {
    uVar8 = (uVar16 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar10 = 0x20;
    cVar14 = '\0';
    if (uVar8 != 0) {
      iVar10 = 0x1f - iVar13;
    }
    uVar8 = (uVar16 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar8 != 0) {
      cVar14 = '\x1f' - (char)iVar13;
    }
    iVar13 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar16 < 1) || (((int)param_1[9] != 0 && (iVar13 <= (int)param_1[9])))) {
    iVar13 = (int)(*_Src >> 4);
    uVar8 = 0x9e3779b9U - iVar13 ^ iVar13 << 8;
    uVar16 = -(iVar13 + uVar8) ^ uVar8 >> 0xd;
    uVar15 = (iVar13 - uVar8) - uVar16 ^ uVar16 >> 0xc;
    uVar8 = (uVar8 - uVar15) - uVar16 ^ uVar15 << 0x10;
    uVar16 = (uVar16 - uVar8) - uVar15 ^ uVar8 >> 5;
    uVar15 = (uVar15 - uVar8) - uVar16 ^ uVar16 >> 3;
    uVar8 = (uVar8 - uVar15) - uVar16 ^ uVar15 << 10;
    uVar16 = (((int)_Src[1] << 8 ^ *(uint *)((longlong)_Src + 0xc)) << 8 ^ uVar8 >> 0xf ^
             (uVar16 - uVar8) - uVar15) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar16;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(uint *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
         uVar12;
  }
  else {
    *(int *)(param_1 + 9) = iVar13;
    TSet<TTuple<FTextureLock,VulkanRHI::FStagingBuffer_*>,TDefaultMapHashableKeyFuncs<FTextureLock,VulkanRHI::FStagingBuffer_*,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141e566fa:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 141e56730 FUN_141e56730 body=677 status=ok
// SIG undefined FUN_141e56730(void)

int * FUN_141e56730(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  uint *_Src;
  uint *puVar13;
  int iVar14;
  bool bVar15;
  
  iVar6 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x10);
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x10) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar10;
  lVar4 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  bVar15 = false;
  puVar13 = (uint *)((longlong)plVar5 + lVar4);
  *puVar13 = *puVar13 | 1 << ((byte)iVar10 & 0x1f);
  puVar13 = (uint *)param_3[1];
  lVar7 = (longlong)iVar10 * 0x10;
  _Src = (uint *)(*param_1 + lVar7);
  *_Src = *(uint *)*param_3;
  _Src[1] = *puVar13;
  _Src[2] = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    iVar9 = iVar14;
    if (uVar12 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*_Src) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(uint *)(*param_1 + (longlong)iVar8 * 0x10) == *_Src) break;
          iVar8 = *(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10);
          iVar9 = iVar14;
        } while (iVar8 != -1);
      }
    }
    bVar15 = iVar9 != -1;
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar9 * 0x10 + *param_1),_Src,8);
      bVar2 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = iVar10;
      }
      lVar1 = *param_1;
      *(undefined4 *)(lVar7 + lVar1) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      *(int *)(lVar7 + 4 + lVar1) = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar5 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      puVar13 = (uint *)((longlong)plVar5 + lVar4);
      *puVar13 = *puVar13 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_141e569b0;
    }
  }
  if (3 < uVar12) {
    uVar3 = (uVar12 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar6 = 0x20;
    if (uVar3 != 0) {
      iVar6 = 0x1f - iVar14;
    }
    uVar3 = (uVar12 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar3 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x1f' - (char)iVar14;
    }
    iVar6 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar6 <= (int)param_1[9])))) {
    uVar12 = (int)param_1[9] - 1U & *_Src;
    _Src[3] = uVar12;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    _Src[2] = *(uint *)((longlong)plVar5 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Rehash
              (param_1);
  }
LAB_141e569b0:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 141e569e0 FUN_141e569e0 body=710 status=ok
// SIG undefined FUN_141e569e0(void)

int * FUN_141e569e0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint *_Src;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  
  iVar12 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x28);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x28) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar11;
  lVar6 = (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  bVar16 = false;
  puVar14 = (uint *)((longlong)plVar7 + lVar6);
  *puVar14 = *puVar14 | 1 << ((byte)iVar11 & 0x1f);
  puVar14 = (uint *)param_3[1];
  lVar1 = (longlong)iVar11 * 0x28;
  _Src = (uint *)(*param_1 + lVar1);
  *_Src = *(uint *)*param_3;
  uVar13 = puVar14[1];
  uVar5 = puVar14[2];
  uVar4 = puVar14[3];
  _Src[2] = *puVar14;
  _Src[3] = uVar13;
  _Src[4] = uVar5;
  _Src[5] = uVar4;
  *(undefined8 *)(_Src + 6) = *(undefined8 *)(puVar14 + 4);
  _Src[8] = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    iVar10 = iVar15;
    if (uVar13 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar7 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*_Src) * 4);
      if (iVar9 != -1) {
        do {
          iVar10 = iVar9;
          if (*(uint *)(*param_1 + (longlong)iVar9 * 0x28) == *_Src) break;
          iVar9 = *(int *)(*param_1 + 0x20 + (longlong)iVar9 * 0x28);
          iVar10 = iVar15;
        } while (iVar9 != -1);
      }
    }
    bVar16 = iVar10 != -1;
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar10 * 0x28),_Src,0x20);
      bVar3 = (byte)iVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar11;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar1 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar2) = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar11;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar14 = (uint *)((longlong)plVar7 + lVar6);
      *puVar14 = *puVar14 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_141e56c81;
    }
  }
  if (3 < uVar13) {
    uVar5 = (uVar13 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar12 = 0x20;
    cVar8 = '\0';
    if (uVar5 != 0) {
      iVar12 = 0x1f - iVar15;
    }
    uVar5 = (uVar13 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar8 = '\x1f' - (char)iVar15;
    }
    iVar12 = 1 << (~(byte)((iVar12 << 0x1a) >> 0x1f) & 0x20U - cVar8 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar12 <= (int)param_1[9])))) {
    uVar13 = (int)param_1[9] - 1U & *_Src;
    _Src[9] = uVar13;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    _Src[8] = *(uint *)((longlong)plVar7 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_141e56c81:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 141e56cb0 FUN_141e56cb0 body=713 status=ok
// SIG undefined FUN_141e56cb0(void)

int * FUN_141e56cb0(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  int iVar9;
  void *_Buf2;
  void *pvVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  
  iVar12 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar5 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
      FUN_141ddce10(param_1,iVar5);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar5 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)((longlong)iVar5 * 0x120 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar9 * 0x120 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar5;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar5 & 0x1f);
  _Buf2 = (void *)((longlong)iVar5 * 0x120 + *param_1);
  FUN_141e563b0(param_3,_Buf2);
  *(undefined4 *)((longlong)_Buf2 + 0x118) = 0xffffffff;
  bVar13 = false;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 != 1) {
    iVar6 = iVar12;
    if (iVar5 != 0) {
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar8 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)*(int *)((longlong)_Buf2 + 0x108))
                      * 4);
      if (iVar9 != -1) {
        lVar2 = *param_1;
        do {
          pvVar10 = (void *)((longlong)iVar9 * 0x120 + lVar2);
          if ((*(int *)((longlong)pvVar10 + 0x100) == *(int *)((longlong)_Buf2 + 0x100)) &&
             (iVar6 = _guard_xfg_dispatch_icall_nop
                                (pvVar10,_Buf2,(longlong)*(int *)((longlong)pvVar10 + 0x100) << 3),
             iVar6 == 0)) {
            bVar13 = true;
          }
          else {
            bVar13 = false;
          }
          iVar6 = iVar9;
        } while ((!bVar13) &&
                (iVar9 = *(int *)((longlong)pvVar10 + 0x118), iVar6 = iVar12, iVar9 != -1));
      }
    }
    bVar13 = iVar6 != -1;
    if (bVar13) {
      pvVar10 = (void *)((longlong)iVar6 * 0x120 + *param_1);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>((longlong)pvVar10 + 0x110);
      _guard_xfg_dispatch_icall_nop(pvVar10,_Buf2,0x118);
      iVar5 = *param_2;
      bVar3 = (byte)iVar5 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x120 + *param_1) = iVar5;
      }
      puVar7 = (undefined4 *)((longlong)iVar5 * 0x120 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar12 = (int)param_1[6];
      }
      puVar7[1] = iVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar5;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar6;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar8 +
                       (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_141e56f54;
    }
  }
  cVar4 = FUN_141e5bab0(param_1,iVar5,0);
  if (cVar4 == '\0') {
    uVar11 = (int)param_1[9] - 1U & *(uint *)((longlong)_Buf2 + 0x108);
    *(uint *)((longlong)_Buf2 + 0x11c) = uVar11;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Buf2 + 0x118) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_141e56f54:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 141e56f80 FUN_141e56f80 body=852 status=ok
// SIG undefined FUN_141e56f80(void)

void FUN_141e56f80(longlong param_1,longlong param_2,void *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  void *_Dst;
  size_t _Size;
  longlong local_res20;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_4c;
  
  puVar5 = *(uint **)(param_2 + 0x18);
  lVar7 = 0;
  uVar3 = *puVar5;
  _Size = (size_t)(int)uVar3;
  uVar4 = puVar5[8];
  if ((DAT_146ab03c8 == 0) || (DAT_146ab7024 != '\0')) {
    bVar6 = false;
    if (0 < (int)uVar3) {
      lVar7 = FUN_141e22d90(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x248) + 0x248,uVar3,0x12,
                            6,
                            "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUniformBuffer.cpp"
                            ,0x16d);
      _guard_xfg_dispatch_icall_nop
                ((void *)((ulonglong)*(uint *)(lVar7 + 0x14) +
                         *(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0x20) + 0x18) + 0x18)),
                 param_3,(ulonglong)uVar3);
      VulkanRHI::FBufferSuballocation::Flush(lVar7);
    }
  }
  else {
    bVar6 = true;
  }
  uVar12 = 0;
  if (0 < (int)uVar4) {
    uVar12 = (longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8;
    puVar8 = (undefined8 *)((longlong)(int)(uVar4 * 8) + uVar12);
    if (DAT_146ab6eb0 < puVar8) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8);
      uVar12 = (longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8;
      puVar8 = (undefined8 *)((longlong)(int)(uVar4 * 8) + uVar12);
    }
    DAT_146ab6ea8 = puVar8;
    if (0 < (int)uVar4) {
      lVar11 = 0;
      do {
        *(undefined8 *)(uVar12 + lVar11 * 8) =
             *(undefined8 *)
              ((ulonglong)*(ushort *)(*(longlong *)(puVar5 + 2) + lVar11 * 2) + (longlong)param_3);
        lVar11 = lVar11 + 1;
      } while (lVar11 < (int)uVar4);
    }
  }
  local_58 = (undefined4)uVar12;
  uStack_54 = (undefined4)(uVar12 >> 0x20);
  if (bVar6) {
    _Dst = (void *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
    puVar8 = (undefined8 *)(_Size + (longlong)_Dst);
    if (DAT_146ab6eb0 < puVar8) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,uVar3 + 0x10);
      _Dst = (void *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
      puVar8 = (undefined8 *)(_Size + (longlong)_Dst);
    }
    DAT_146ab6ea8 = puVar8;
    _guard_xfg_dispatch_icall_nop(_Dst,param_3,_Size);
    puVar10 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 7;
    if (DAT_146ab6eb0 < puVar8) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x40);
      puVar10 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
      puVar8 = puVar10 + 7;
    }
    DAT_146ab6e8c = DAT_146ab6e8c + 1;
    DAT_146ab6ea8 = puVar8;
    *DAT_146ab6e80 = puVar10;
    DAT_146ab6e80 = puVar10 + 1;
    puVar10[2] = local_68;
    puVar10[3] = param_2;
    puVar10[1] = 0;
    ppuVar9 = &PTR_FUN_144eb2bb0;
    *(undefined4 *)(puVar10 + 4) = local_58;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uStack_54;
    *(uint *)(puVar10 + 5) = uVar4;
    *(uint *)((longlong)puVar10 + 0x2c) = uVar3;
    puVar10[6] = _Dst;
  }
  else {
    puVar10 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 6;
    if (DAT_146ab6eb0 < puVar8) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x38);
      puVar10 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
      puVar8 = puVar10 + 6;
    }
    DAT_146ab6e8c = DAT_146ab6e8c + 1;
    local_68._0_4_ = (undefined4)param_2;
    local_68._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
    uStack_60 = (undefined4)lVar7;
    uStack_5c = (undefined4)((ulonglong)lVar7 >> 0x20);
    DAT_146ab6ea8 = puVar8;
    *DAT_146ab6e80 = puVar10;
    DAT_146ab6e80 = puVar10 + 1;
    *DAT_146ab6e80 = 0;
    ppuVar9 = &PTR_ExecuteAndDestruct_144eb2bb8;
    *(undefined4 *)(puVar10 + 2) = (undefined4)local_68;
    *(undefined4 *)((longlong)puVar10 + 0x14) = local_68._4_4_;
    *(undefined4 *)(puVar10 + 3) = uStack_60;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uStack_5c;
    *(undefined4 *)(puVar10 + 4) = local_58;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uStack_54;
    *(uint *)(puVar10 + 5) = uVar4;
    *(undefined4 *)((longlong)puVar10 + 0x2c) = uStack_4c;
  }
  *puVar10 = ppuVar9;
  FRHICommandListImmediate::RHIThreadFence(&DAT_146ab6e78,&local_res20,1);
  if (local_res20 != 0) {
    LOCK();
    piVar1 = (int *)(local_res20 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  return;
}



// FUNCTION 141e572e0 FUN_141e572e0 body=502 status=ok
// SIG undefined FUN_141e572e0(void)

void FUN_141e572e0(undefined8 param_1,longlong param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  void *_Dst;
  size_t _Size;
  longlong local_res20;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  
  piVar3 = *(int **)(param_2 + 0x18);
  uVar7 = 0;
  iVar1 = piVar3[8];
  iVar2 = *piVar3;
  _Size = (size_t)iVar2;
  if (0 < iVar1) {
    uVar7 = (longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8;
    puVar4 = (undefined8 *)((longlong)(iVar1 * 8) + uVar7);
    if (DAT_146ab6eb0 < puVar4) {
      FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8);
      uVar7 = (longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8;
      puVar4 = (undefined8 *)((longlong)(iVar1 * 8) + uVar7);
    }
    DAT_146ab6ea8 = puVar4;
    if (0 < iVar1) {
      lVar6 = 0;
      do {
        *(undefined8 *)(uVar7 + lVar6 * 8) =
             *(undefined8 *)
              ((ulonglong)*(ushort *)(*(longlong *)(piVar3 + 2) + lVar6 * 2) + (longlong)param_3);
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar1);
    }
  }
  _Dst = (void *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = (undefined8 *)(_Size + (longlong)_Dst);
  if (DAT_146ab6eb0 < puVar4) {
    FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,iVar2 + 0x10);
    _Dst = (void *)((longlong)DAT_146ab6ea8 + 0xfU & 0xfffffffffffffff0);
    puVar4 = (undefined8 *)(_Size + (longlong)_Dst);
  }
  DAT_146ab6ea8 = puVar4;
  _guard_xfg_dispatch_icall_nop(_Dst,param_3,_Size);
  puVar5 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
  puVar4 = puVar5 + 7;
  if (DAT_146ab6eb0 < puVar4) {
    FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x40);
    puVar5 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 7;
  }
  DAT_146ab6e8c = DAT_146ab6e8c + 1;
  uStack_40 = SUB84(_Dst,0);
  uStack_3c = (undefined4)((ulonglong)_Dst >> 0x20);
  DAT_146ab6ea8 = puVar4;
  *DAT_146ab6e80 = puVar5;
  DAT_146ab6e80 = puVar5 + 1;
  puVar5[2] = param_2;
  puVar5[3] = uVar7;
  puVar5[1] = 0;
  *(int *)(puVar5 + 4) = iVar1;
  *(undefined4 *)((longlong)puVar5 + 0x24) = uStack_44;
  *(undefined4 *)(puVar5 + 5) = uStack_40;
  *(undefined4 *)((longlong)puVar5 + 0x2c) = uStack_3c;
  *puVar5 = &PTR_ExecuteAndDestruct_144eb2bc0;
  puVar5[6] = CONCAT44(uStack_34,iVar2);
  FRHICommandListImmediate::RHIThreadFence(&DAT_146ab6e78,&local_res20,1);
  if (local_res20 != 0) {
    LOCK();
    piVar3 = (int *)(local_res20 + 0x48);
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      FGraphEvent::Recycle();
    }
  }
  return;
}



// FUNCTION 141e574e0 FUN_141e574e0 body=703 status=ok
// SIG undefined FUN_141e574e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_141e574e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
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
  
  uVar5 = uRam00000001468b5d84;
  uVar4 = uRam00000001468b5d80;
  uVar3 = uRam00000001468b5d7c;
  uVar2 = _DAT_1468b5d78;
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[3] = 0;
  param_1[4] = CONCAT44(uVar2,1);
  param_1[5] = CONCAT44(uVar4,uVar3);
  *(undefined4 *)(param_1 + 6) = uVar5;
  param_1[9] = param_1 + 10;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_4;
  *(undefined4 *)(param_1 + 8) = param_7;
  *(undefined4 *)((longlong)param_1 + 0x34) = 1;
  *(undefined4 *)(param_1 + 7) = 1;
  param_1[10] = 0xc7efffffe0000000;
  param_1[0xb] = 0;
  uVar11 = 0;
  *param_1 = &PTR_FUN_144d83940;
  *(undefined4 *)(param_1 + 0xc) = param_5;
  *(undefined4 *)((longlong)param_1 + 100) = param_6;
  uStack_48 = uRam00000001468b5d84;
  uStack_4c = uRam00000001468b5d80;
  uStack_50 = uRam00000001468b5d7c;
  local_54 = _DAT_1468b5d78;
  param_1[0xd] = &PTR__scalar_deleting_destructor__144eb2708;
  local_58 = 1;
  local_68 = 0;
  uStack_60 = 0;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_141e584c0(param_1 + 0xe,param_2,1,param_4,param_5,param_6,1,1,1,1,0,param_7,&local_68);
  puVar10 = param_1 + 0x1d;
  *puVar10 = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    iVar6 = 1;
    if (*(int *)(param_1 + 0x1b) != 0) {
      iVar6 = *(int *)(param_1 + 0x1b);
    }
    uVar11 = uVar11 & 0xffffffffffffff00;
    uVar7 = FUN_141e67300(param_2,lVar1,1,*(undefined4 *)(param_1 + 0x1c),param_4,
                          *(undefined4 *)((longlong)param_1 + 0x8c),0,iVar6,0,1,uVar11,0);
    *puVar10 = uVar7;
    param_1[0x1e] = lVar1;
    if (DAT_1464c9c14 < 2) {
      LOCK();
      UNLOCK();
      iVar6 = (int)DAT_146aafd58;
      DAT_146aafd58 = DAT_146aafd58 + 1;
      *(int *)(param_1 + 0x1f) = iVar6 + 1;
    }
  }
  if (*(int *)(param_1 + 0x1c) == *(int *)((longlong)param_1 + 0xe4)) {
    param_1[0x20] = puVar10;
  }
  else {
    puVar8 = (undefined8 *)operator_new(0x18);
    puVar10 = (undefined8 *)0x0;
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = 0;
      puVar8[1] = 0;
      *(undefined4 *)(puVar8 + 2) = 0;
      puVar10 = puVar8;
    }
    uVar7 = param_1[0x10];
    param_1[0x20] = puVar10;
    uVar9 = FUN_141e67300(param_2,uVar7,*(undefined4 *)(param_1 + 0x19),
                          *(undefined4 *)((longlong)param_1 + 0xe4),
                          *(undefined4 *)((longlong)param_1 + 0x9c),
                          *(undefined4 *)((longlong)param_1 + 0x8c),0,1,0,1,
                          uVar11 & 0xffffffffffffff00,0);
    *puVar10 = uVar9;
    puVar10[1] = uVar7;
    if (DAT_1464c9c14 < 2) {
      LOCK();
      UNLOCK();
      iVar6 = (int)DAT_146aafd58;
      DAT_146aafd58 = DAT_146aafd58 + 1;
      *(int *)(puVar10 + 2) = iVar6 + 1;
    }
  }
  param_1[0x22] = param_3;
  *param_1 = &PTR__scalar_deleting_destructor__144eb2a30;
  param_1[0xd] = &PTR_LAB_144eb2a88;
  return param_1;
}



// FUNCTION 141e577a0 FUN_141e577a0 body=136 status=ok
// SIG undefined FUN_141e577a0(void)

undefined8 *
FUN_141e577a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  longlong lVar1;
  
  FGPUProfilerEventNode::FGPUProfilerEventNode();
  *param_1 = &PTR_FUN_144eb26c8;
  param_1[0xb] = &PTR__scalar_deleting_destructor__144e9c070;
  param_1[0xd] = param_5;
  *(undefined2 *)(param_1 + 0xe) = 0;
  param_1[0xf] = param_4;
  param_1[0x10] = 0;
  lVar1 = *(longlong *)(param_4 + 0x2d8);
  if (*(longlong *)(lVar1 + 0x78) != 0) {
    FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar1,0,0);
  }
  FUN_141e5fbf0(param_1 + 0xb,*(undefined8 *)(lVar1 + 0x70));
  return param_1;
}



// FUNCTION 141e57830 FUN_141e57830 body=2013 status=ok
// SIG undefined FUN_141e57830(void)

longlong *
FUN_141e57830(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined4 uVar16;
  uint *puVar17;
  uint local_res8;
  undefined4 uVar18;
  undefined4 uVar19;
  int iVar20;
  undefined8 local_c8;
  undefined8 uStack_c0;
  int local_b8;
  undefined4 uStack_b4;
  int local_b0;
  longlong *local_a8;
  longlong local_a0;
  undefined8 local_98;
  uint *local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  ulonglong uVar15;
  
  uVar14 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_3 + 0xc0);
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  local_a8 = param_1 + 0x12;
  *local_a8 = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  bVar3 = *(byte *)(param_4 + 0x334);
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(uint *)((longlong)param_1 + 0xc) != (uint)bVar3) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1);
  }
  uVar16 = *(undefined4 *)(param_4 + 0x350);
  local_res8 = 0;
  local_b0 = 0;
  iVar7 = 1;
  uVar12 = 0;
  if (0 < *(int *)(param_3 + 0xc0)) {
    puVar17 = (uint *)(param_3 + 0xc);
    do {
      if (*(longlong **)(puVar17 + -3) != (longlong *)0x0) {
        local_90 = puVar17;
        lVar8 = (**(code **)(**(longlong **)(puVar17 + -3) + 0x48))();
        local_b8 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_a8[-8] = *(longlong *)(lVar8 + 0x18);
        iVar20 = *(int *)(lVar8 + 0x60);
        local_res8 = puVar17[-1];
        if (iVar20 == 1) {
          uStack_c0 = *(undefined8 *)(lVar8 + 0x18);
          local_c8 = FUN_141e67300(*(undefined8 *)(lVar8 + 0x10),uStack_c0,1,
                                   *(undefined4 *)(lVar8 + 0x78),*(undefined4 *)(lVar8 + 0x34),
                                   *(undefined4 *)(lVar8 + 0x24),local_res8,1,0,1,1,0);
          if (DAT_1464c9c14 < 2) {
            LOCK();
            UNLOCK();
            local_b8 = (int)DAT_146aafd58 + 1;
            DAT_146aafd58 = DAT_146aafd58 + 1;
          }
        }
        else {
          if (iVar20 == 3) {
            uVar18 = *(undefined4 *)(lVar8 + 0x34);
            uVar12 = *puVar17;
            uVar19 = *(undefined4 *)(lVar8 + 0x24);
            iVar20 = 1;
            uVar13 = 1;
          }
          else {
            if (iVar20 == 2) {
              iVar20 = *(int *)(lVar8 + 0x30);
              uVar19 = *(undefined4 *)(lVar8 + 0x24);
              uVar18 = *(undefined4 *)(lVar8 + 0x34);
              uVar12 = 0;
            }
            else {
              if (iVar20 != 5) goto LAB_141e57b65;
              uVar12 = *puVar17;
              uVar6 = FUN_141e5f660(lVar8 + 8);
              if (uVar12 < uVar6) {
                iVar20 = 1;
              }
              else {
                iVar20 = *(int *)(lVar8 + 0x60);
                if ((iVar20 < 0) || (iVar20 < 3)) {
LAB_141e57b45:
                  iVar20 = 1;
                }
                else if (iVar20 == 3) {
                  iVar20 = 6;
                }
                else if (iVar20 == 5) {
                  iVar20 = *(int *)(lVar8 + 0x58);
                }
                else {
                  if (iVar20 != 6) goto LAB_141e57b45;
                  iVar20 = *(int *)(lVar8 + 0x58) * 6;
                }
                uVar12 = 0;
              }
              uVar19 = *(undefined4 *)(lVar8 + 0x24);
              uVar18 = *(undefined4 *)(lVar8 + 0x34);
            }
            uVar13 = 5;
          }
          uStack_c0 = *(undefined8 *)(lVar8 + 0x18);
          local_c8 = FUN_141e67300(*(undefined8 *)(lVar8 + 0x10),uStack_c0,uVar13,
                                   *(undefined4 *)(lVar8 + 0x78),uVar18,uVar19,local_res8,1,uVar12,
                                   iVar20,1,0);
          if (DAT_1464c9c14 < 2) {
            LOCK();
            UNLOCK();
            local_b8 = (int)DAT_146aafd58 + 1;
            DAT_146aafd58 = DAT_146aafd58 + 1;
          }
        }
LAB_141e57b65:
        iVar20 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar20 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar20 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_1,iVar20);
        }
        lVar8 = *param_1;
        puVar1 = (undefined4 *)(lVar8 + (longlong)iVar20 * 0x18);
        *puVar1 = (undefined4)local_c8;
        puVar1[1] = local_c8._4_4_;
        puVar1[2] = (undefined4)uStack_c0;
        puVar1[3] = uStack_c0._4_4_;
        *(ulonglong *)(lVar8 + 0x10 + (longlong)iVar20 * 0x18) = CONCAT44(uStack_b4,local_b8);
        iVar20 = (int)param_1[6];
        *(int *)(param_1 + 6) = iVar20 + 1;
        if (*(int *)((longlong)param_1 + 0x34) < iVar20 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 5,iVar20);
        }
        puVar17 = local_90;
        *(undefined8 *)(param_1[5] + (longlong)iVar20 * 8) = local_c8;
        *(int *)((longlong)param_1 + 0x4c) = *(int *)((longlong)param_1 + 0x4c) + 1;
        if (*(char *)(param_3 + 0x188) != '\0') {
          lVar8 = (**(code **)(**(longlong **)(local_90 + 0x2f) + 0x48))();
          local_b8 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          *local_a8 = *(longlong *)(lVar8 + 0x18);
          iVar20 = *(int *)(lVar8 + 0x60);
          if ((iVar20 - 1U & 0xfffffffb) == 0) {
            iVar10 = iVar7;
            if ((-1 < iVar20) && (2 < iVar20)) {
              if (iVar20 == 3) {
                iVar10 = 6;
              }
              else if (iVar20 == 5) {
                iVar10 = *(int *)(lVar8 + 0x58);
              }
              else if (iVar20 == 6) {
                iVar10 = *(int *)(lVar8 + 0x58) * 6;
              }
            }
            uStack_c0 = *(undefined8 *)(lVar8 + 0x18);
            uVar12 = *puVar17;
            if ((int)*puVar17 < 1) {
              uVar12 = 0;
            }
            local_c8 = FUN_141e67300(*(undefined8 *)(lVar8 + 0x10),uStack_c0,iVar20,
                                     *(undefined4 *)(lVar8 + 0x78),*(undefined4 *)(lVar8 + 0x34),
                                     *(undefined4 *)(lVar8 + 0x24),local_res8,1,uVar12,iVar10,1,0);
            if (DAT_1464c9c14 < 2) {
              LOCK();
              UNLOCK();
              local_b8 = (int)DAT_146aafd58 + 1;
              DAT_146aafd58 = DAT_146aafd58 + 1;
            }
          }
          iVar20 = (int)param_1[1];
          *(int *)(param_1 + 1) = iVar20 + 1;
          if (*(int *)((longlong)param_1 + 0xc) < iVar20 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(param_1,iVar20);
          }
          lVar8 = *param_1;
          puVar1 = (undefined4 *)(lVar8 + (longlong)iVar20 * 0x18);
          *puVar1 = (undefined4)local_c8;
          puVar1[1] = local_c8._4_4_;
          puVar1[2] = (undefined4)uStack_c0;
          puVar1[3] = uStack_c0._4_4_;
          *(ulonglong *)(lVar8 + 0x10 + (longlong)iVar20 * 0x18) = CONCAT44(uStack_b4,local_b8);
          iVar20 = (int)param_1[6];
          *(int *)(param_1 + 6) = iVar20 + 1;
          if (*(int *)((longlong)param_1 + 0x34) < iVar20 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 5,iVar20);
          }
          *(undefined8 *)(param_1[5] + (longlong)iVar20 * 8) = local_c8;
        }
      }
      local_a8 = local_a8 + 1;
      local_b0 = local_b0 + 1;
      puVar17 = puVar17 + 6;
      uVar12 = local_res8;
      local_90 = puVar17;
    } while (local_b0 < *(int *)(param_3 + 0xc0));
  }
  if (*(char *)(param_4 + 0x337) != '\0') {
    lVar8 = (**(code **)(**(longlong **)(param_3 + 400) + 0x48))();
    param_1[0x1a] = *(longlong *)(lVar8 + 0x18);
    puVar1 = *(undefined4 **)(lVar8 + 0x98);
    uVar18 = puVar1[1];
    uVar19 = puVar1[2];
    uVar5 = puVar1[3];
    *(undefined4 *)(param_1 + 2) = *puVar1;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar18;
    *(undefined4 *)(param_1 + 3) = uVar19;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
    param_1[4] = *(longlong *)(puVar1 + 4);
    if ((*(int *)((longlong)param_1 + 0x4c) == 0) && (*(int *)(lVar8 + 0x60) == 3)) {
      uVar13 = *(undefined8 *)(lVar8 + 0x18);
      local_b8 = 0;
      uVar9 = FUN_141e67300(*(undefined8 *)(lVar8 + 0x10),uVar13,5,*(undefined4 *)(lVar8 + 0x78),
                            *(undefined4 *)(lVar8 + 0x34),*(undefined4 *)(lVar8 + 0x24),uVar12,1,0,6
                            ,1,0);
      if (DAT_1464c9c14 < 2) {
        LOCK();
        UNLOCK();
        local_b8 = (int)DAT_146aafd58 + 1;
        DAT_146aafd58 = DAT_146aafd58 + 1;
      }
      iVar7 = (int)param_1[1];
      uVar16 = 6;
      *(int *)(param_1 + 1) = iVar7 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1,iVar7);
      }
      lVar8 = *param_1;
      local_c8._0_4_ = (undefined4)uVar9;
      local_c8._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
      uStack_c0._0_4_ = (undefined4)uVar13;
      uStack_c0._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
      puVar1 = (undefined4 *)(lVar8 + (longlong)iVar7 * 0x18);
      *puVar1 = (undefined4)local_c8;
      puVar1[1] = local_c8._4_4_;
      puVar1[2] = (undefined4)uStack_c0;
      puVar1[3] = uStack_c0._4_4_;
      *(ulonglong *)(lVar8 + 0x10 + (longlong)iVar7 * 0x18) = CONCAT44(uStack_b4,local_b8);
      iVar7 = (int)param_1[6];
      *(int *)(param_1 + 6) = iVar7 + 1;
      if (*(int *)((longlong)param_1 + 0x34) < iVar7 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 5,iVar7);
      }
      *(undefined8 *)(param_1[5] + (longlong)iVar7 * 8) = uVar9;
    }
    else {
      iVar7 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar7 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1,iVar7);
      }
      lVar4 = *param_1;
      uVar18 = *(undefined4 *)(lVar8 + 0x84);
      uVar19 = *(undefined4 *)(lVar8 + 0x88);
      uVar5 = *(undefined4 *)(lVar8 + 0x8c);
      puVar1 = (undefined4 *)(lVar4 + (longlong)iVar7 * 0x18);
      *puVar1 = *(undefined4 *)(lVar8 + 0x80);
      puVar1[1] = uVar18;
      puVar1[2] = uVar19;
      puVar1[3] = uVar5;
      *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar7 * 0x18) = *(undefined8 *)(lVar8 + 0x90);
    }
  }
  local_a0 = 0;
  local_98 = 0;
  iVar7 = 0;
  if ((int)param_1[1] != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_a0,(int)param_1[1]);
    iVar7 = (int)param_1[1];
    uVar14 = local_98 & 0xffffffff;
  }
  uStack_68 = (undefined4)uVar14;
  puVar11 = (undefined8 *)*param_1;
  puVar2 = puVar11 + (longlong)iVar7 * 3;
  lVar8 = local_a0;
  for (; puVar11 != puVar2; puVar11 = puVar11 + 3) {
    uVar12 = (int)uVar14 + 1;
    uVar15 = (ulonglong)uVar12;
    local_98._4_4_ = (int)(local_98 >> 0x20);
    local_98 = CONCAT44(local_98._4_4_,uVar12);
    if (local_98._4_4_ < (int)uVar12) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_a0,uVar14);
      uVar15 = local_98 & 0xffffffff;
      lVar8 = local_a0;
    }
    uStack_68 = (undefined4)uVar15;
    *(undefined8 *)(lVar8 + (longlong)(int)uVar14 * 8) = *puVar11;
    uVar14 = uVar15;
  }
  local_88 = 0x25;
  local_74 = 0;
  local_64 = 0;
  local_84 = 0;
  local_7c = 0;
  local_4c = 0;
  uStack_60 = (undefined4)lVar8;
  local_5c = (undefined4)((ulonglong)lVar8 >> 0x20);
  uStack_70 = (undefined4)*(undefined8 *)(param_5 + 0x358);
  local_6c = (undefined4)((ulonglong)*(undefined8 *)(param_5 + 0x358) >> 0x20);
  uStack_58 = *(undefined4 *)(param_4 + 0x348);
  _local_54 = CONCAT44(uVar16,*(undefined4 *)(param_4 + 0x34c));
  iVar7 = (*DAT_146ab0160)(*(undefined8 *)(param_2 + 8),&local_88,0,param_1 + 7);
  if (iVar7 < 0) {
    FUN_141e67d70(iVar7,
                  "VulkanRHI::vkCreateFramebuffer(Device.GetInstanceHandle(), &CreateInfo, VULKAN_CPU_ALLOCATOR, &Framebuffer)"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp",
                  0x1c8);
  }
  *(undefined4 *)(param_1 + 8) = uStack_58;
  *(undefined4 *)((longlong)param_1 + 0x44) = local_54;
  if (lVar8 != 0) {
    FMemory::Free(lVar8);
  }
  return param_1;
}



// FUNCTION 141e58010 FVulkanShaderResourceView body=256 status=ok
// SIG undefined FVulkanShaderResourceView(void)

undefined8 *
FVulkanShaderResourceView::FVulkanShaderResourceView
          (undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
          undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[3] = param_2;
  *param_1 = &PTR__scalar_deleting_destructor__144eb29c0;
  *(undefined4 *)(param_1 + 4) = param_6;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xffffffff;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = param_5;
  param_1[0xf] = param_4;
  param_1[0x10] = param_3;
  if (param_3 != 0) {
    LOCK();
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
    UNLOCK();
  }
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  if (param_1[0xf] != 0) {
    iVar1 = *(int *)(param_1[0xf] + 0x18);
    iVar2 = *(int *)(param_1 + 0xd);
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    iVar3 = iVar2 + iVar1;
    *(int *)(param_1 + 0xd) = iVar3;
    if (*(int *)((longlong)param_1 + 0x6c) < iVar3) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xc);
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(param_1[0xc] + (longlong)iVar2 * 8),0,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 141e58110 FUN_141e58110 body=940 status=ok
// SIG undefined FUN_141e58110(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_141e58110(undefined8 *param_1,longlong param_2,int param_3,undefined4 param_4,undefined4 param_5
             ,undefined4 param_6,undefined4 param_7,int param_8,undefined4 param_9,
             undefined4 param_10,undefined4 param_11,longlong param_12)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  byte bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  int local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  longlong *local_e8;
  undefined8 *local_e0;
  undefined4 *local_d8;
  undefined1 *local_d0;
  undefined1 local_c8;
  longlong local_b8;
  undefined1 local_a8 [52];
  int local_74;
  byte local_70;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_e0 = param_1 + 3;
  local_d8 = (undefined4 *)((longlong)param_1 + 0x1c);
  plVar1 = param_1 + 7;
  *(undefined4 *)(param_1 + 6) = param_11;
  *param_1 = &PTR__scalar_deleting_destructor__144eb2700;
  local_d0 = local_a8;
  local_c8 = 0;
  param_1[1] = param_2;
  param_1[2] = 0;
  *(undefined4 *)local_e0 = 0;
  *local_d8 = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_6;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 4) = param_5;
  *(undefined4 *)(param_1 + 5) = param_7;
  *(undefined4 *)((longlong)param_1 + 0x2c) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x34) = 1;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x7fffffff;
  *(int *)(param_1 + 0xb) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 1;
  param_1[0xc] = 0;
  local_f0 = *(undefined4 *)(param_1 + 6);
  local_f8 = param_10;
  local_100 = param_9;
  local_108 = param_8;
  *(undefined4 *)(param_1 + 0xd) = param_9;
  *(undefined4 *)((longlong)param_1 + 0x6c) = param_10;
  param_1[0xe] = 0;
  local_110 = param_7;
  local_118 = param_6;
  local_e8 = plVar1;
  local_b8 = param_2;
  uVar6 = FUN_141e5c090(param_2,param_3,param_4);
  param_1[2] = uVar6;
  uVar13 = 6;
  if ((param_3 == 3) || (iVar5 = 1, param_3 == 6)) {
    iVar5 = 6;
  }
  iVar2 = *(int *)((longlong)param_1 + 0x2c);
  uVar12 = 4;
  *(int *)(param_1 + 10) = iVar5 * param_8;
  if (iVar2 != 0xb) {
    if ((iVar2 == 0xc) || (iVar2 == 0x14)) {
      uVar13 = 2;
    }
    else if (iVar2 == 0x2c) {
      uVar13 = 4;
    }
    else {
      uVar13 = 1;
    }
  }
  *(undefined4 *)(param_1 + 0xe) = uVar13;
  if (((iVar2 == 0xb) || (iVar2 == 0xc)) || (iVar2 == 0x14)) {
    uVar12 = 2;
  }
  else if (iVar2 != 0x2c) {
    uVar12 = 1;
  }
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar12;
  if (local_74 != 0) {
    *(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) | 2;
  }
  uVar3 = *(uint *)(param_1 + 6);
  local_118 = 0x22d;
  lVar7 = FUN_141e5b0f0(param_2 + 0x248,plVar1,(uVar3 >> 0x12 & 1) + 1,
                        "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                       );
  puVar9 = (undefined8 *)param_1[0xc];
  param_1[0xc] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  if (puVar9 != (undefined8 *)0x0) {
    LOCK();
    piVar8 = (int *)(puVar9 + 1);
    iVar5 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)*puVar9)(puVar9,1);
    }
  }
  FUN_141e23fb0(param_1[0xc],param_1[1],param_1[2]);
  lVar7 = *plVar1;
  if (lVar7 < 1) {
    lVar7 = -((longlong)
              ((ulonglong)((uint)((longlong)(0x3ffU - lVar7) >> 0x3f) & 0x3ff) +
              (0x3ffU - lVar7 & 0xfffffffffffffc00)) >> 10);
  }
  else {
    lVar7 = (longlong)
            ((ulonglong)((uint)((longlong)(lVar7 + 0x3ffU) >> 0x3f) & 0x3ff) +
            (lVar7 + 0x3ffU & 0xfffffffffffffc00)) >> 10;
  }
  piVar8 = &DAT_146ab6300;
  if ((uVar3 & 7) != 0) {
    piVar8 = &DAT_146ab6304;
  }
  LOCK();
  iVar5 = *piVar8;
  *piVar8 = *piVar8 + (int)lVar7;
  UNLOCK();
  *(int *)((longlong)param_1 + 0x54) = local_74;
  if (((local_70 & 4) != 0) && ((*(uint *)(param_1 + 6) & 5) != 0)) {
    bVar11 = (byte)(*(uint *)(param_1 + 6) >> 0x11) & 1;
    cVar4 = IsInRenderingThread(CONCAT44((int)((ulonglong)lVar7 >> 0x20),iVar5));
    if ((cVar4 == '\0') || (DAT_146ab6383 == '\0')) {
      FUN_141e5f9b0(param_1,*(undefined8 *)(param_1[1] + 0x18b0),param_12 + 0x10,bVar11);
    }
    else {
      puVar10 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 6;
      if (DAT_146ab6eb0 < puVar9) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x38);
        puVar10 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
        puVar9 = puVar10 + 6;
      }
      DAT_146ab6e8c = DAT_146ab6e8c + 1;
      DAT_146ab6ea8 = puVar9;
      *DAT_146ab6e80 = puVar10;
      DAT_146ab6e80 = puVar10 + 1;
      *DAT_146ab6e80 = 0;
      *puVar10 = &PTR_LAB_144eb2b00;
      puVar10[2] = param_1;
      uVar6 = *(undefined8 *)(param_12 + 0x18);
      puVar10[3] = *(undefined8 *)(param_12 + 0x10);
      puVar10[4] = uVar6;
      *(undefined4 *)(puVar10 + 5) = *(undefined4 *)(param_12 + 0x20);
      *(byte *)((longlong)puVar10 + 0x2c) = bVar11;
    }
  }
  return param_1;
}



// FUNCTION 141e584c0 FUN_141e584c0 body=324 status=ok
// SIG undefined FUN_141e584c0(void)

undefined8 *
FUN_141e584c0(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined4 param_12,
             longlong param_13)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  *(undefined4 *)((longlong)param_1 + 0x2c) = param_4;
  *param_1 = &PTR__scalar_deleting_destructor__144eb2700;
  param_1[2] = param_11;
  uVar4 = 1;
  *(undefined4 *)(param_1 + 4) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x24) = param_6;
  *(undefined4 *)(param_1 + 5) = param_7;
  *(undefined4 *)(param_1 + 6) = param_12;
  *(undefined4 *)(param_1 + 10) = param_8;
  param_1[3] = 0;
  param_1[1] = param_2;
  *(undefined4 *)((longlong)param_1 + 0x34) = 1;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0xb) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  iVar3 = *(int *)((longlong)param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0xd) = param_9;
  *(undefined4 *)((longlong)param_1 + 0x6c) = param_10;
  param_1[0xe] = 0;
  uVar2 = (&DAT_1464ca1cc)[(longlong)iVar3 * 10];
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  if (iVar3 == 0xb) {
    uVar2 = 6;
  }
  else if ((iVar3 == 0xc) || (iVar3 == 0x14)) {
    uVar2 = 2;
  }
  else if (iVar3 == 0x2c) {
    uVar2 = 4;
  }
  else {
    uVar2 = 1;
  }
  *(undefined4 *)(param_1 + 0xe) = uVar2;
  if (((iVar3 == 0xb) || (iVar3 == 0xc)) || (iVar3 == 0x14)) {
    uVar4 = 2;
  }
  else if (iVar3 == 0x2c) {
    uVar4 = 4;
  }
  uVar1 = *(uint *)(param_1 + 6);
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar4;
  if ((uVar1 >> 0x11 & 1) != 0) {
    iVar3 = *(int *)((longlong)param_1 + 0x54);
    if (iVar3 == 0x7fffffff) {
      iVar3 = 0;
    }
    *(int *)((longlong)param_1 + 0x54) = iVar3;
  }
  if ((param_1[2] != 0) && ((uVar1 & 5) != 0)) {
    FUN_141e5f9b0(param_1,*(undefined8 *)(param_2 + 0x18b0),param_13 + 0x10,
                  (byte)(uVar1 >> 0x11) & 1);
  }
  return param_1;
}



// FUNCTION 141e58610 FVulkanTexture2D body=301 status=ok
// SIG undefined FVulkanTexture2D(void)

undefined8 *
FVulkanTexture2D::FVulkanTexture2D
          (undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,longlong param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  iVar4 = 1;
  if (param_6 != 0) {
    iVar4 = param_6;
  }
  *param_1 = &PTR_FUN_144d838f0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[3] = 0;
  uVar1 = *(undefined4 *)(param_9 + 0x14);
  uVar2 = *(undefined4 *)(param_9 + 0x18);
  uVar3 = *(undefined4 *)(param_9 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_9 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_9 + 0x20);
  *(int *)((longlong)param_1 + 0x34) = iVar4;
  *(undefined4 *)(param_1 + 7) = param_7;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_3;
  param_1[9] = param_1 + 10;
  *(undefined4 *)(param_1 + 8) = param_8;
  param_1[10] = 0xc7efffffe0000000;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_144d83940;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  *(undefined4 *)((longlong)param_1 + 100) = param_5;
  FUN_141e58cb0(param_1 + 0xd,param_2,1,param_3,param_4,param_5,1,1,iVar4,param_7,param_8,param_9);
  *param_1 = &PTR_FUN_144eb2730;
  param_1[0xd] = &PTR_LAB_144eb2788;
  return param_1;
}



// FUNCTION 141e58740 FUN_141e58740 body=399 status=ok
// SIG undefined FUN_141e58740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_141e58740(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,longlong param_11)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_144d838f0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[3] = 0;
  uVar1 = *(undefined8 *)(param_11 + 0x18);
  local_38 = 1;
  local_24 = 0;
  param_1[4] = *(undefined8 *)(param_11 + 0x10);
  param_1[5] = uVar1;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_11 + 0x20);
  *(undefined4 *)(param_1 + 7) = param_7;
  param_1[9] = param_1 + 10;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_3;
  *(undefined4 *)(param_1 + 8) = param_10;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_6;
  param_1[10] = 0xc7efffffe0000000;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_144d83940;
  *(undefined4 *)((longlong)param_1 + 100) = param_5;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  local_48 = 0;
  uStack_40 = 0;
  local_34 = _DAT_1468b5d78;
  uStack_30 = uRam00000001468b5d7c;
  uStack_2c = uRam00000001468b5d80;
  uStack_28 = uRam00000001468b5d84;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  FVulkanTextureBase::FVulkanTextureBase
            (param_1 + 0xd,param_2,1,param_3,param_4,param_5,1,1,param_6,param_7,param_8,0,param_9,
             param_10,&local_48);
  *param_1 = &PTR_FUN_144eb2730;
  param_1[0xd] = &PTR_LAB_144eb2788;
  return param_1;
}



// FUNCTION 141e588d0 FUN_141e588d0 body=380 status=ok
// SIG undefined FUN_141e588d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_141e588d0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
             undefined4 param_9,longlong param_10)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_144d838f0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[3] = 0;
  uVar1 = *(undefined8 *)(param_10 + 0x18);
  local_38 = 1;
  local_24 = 0;
  param_1[4] = *(undefined8 *)(param_10 + 0x10);
  param_1[5] = uVar1;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_10 + 0x20);
  *(undefined4 *)(param_1 + 7) = param_7;
  param_1[9] = param_1 + 10;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_3;
  *(undefined4 *)(param_1 + 8) = param_9;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_6;
  param_1[10] = 0xc7efffffe0000000;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_144d83940;
  *(undefined4 *)((longlong)param_1 + 100) = param_5;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  local_48 = 0;
  uStack_40 = 0;
  local_34 = _DAT_1468b5d78;
  uStack_30 = uRam00000001468b5d7c;
  uStack_2c = uRam00000001468b5d80;
  uStack_28 = uRam00000001468b5d84;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  FVulkanTextureBase::FVulkanTextureBase
            (param_1 + 0xd,param_2,1,param_3,param_4,param_5,1,1,param_6,param_7,param_8,0,param_9,
             &local_48);
  *param_1 = &PTR_FUN_144eb2730;
  param_1[0xd] = &PTR_LAB_144eb2788;
  return param_1;
}



// FUNCTION 141e58a50 FUN_141e58a50 body=283 status=ok
// SIG undefined FUN_141e58a50(void)

undefined8 *
FUN_141e58a50(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             longlong param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_144d838f0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[3] = 0;
  uVar1 = *(undefined4 *)(param_9 + 0x14);
  uVar2 = *(undefined4 *)(param_9 + 0x18);
  uVar3 = *(undefined4 *)(param_9 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_9 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_9 + 0x20);
  param_1[9] = param_1 + 10;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_7;
  *(undefined4 *)(param_1 + 8) = param_8;
  *(undefined4 *)(param_1 + 7) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_3;
  param_1[10] = 0xc7efffffe0000000;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_144d83998;
  *(undefined4 *)((longlong)param_1 + 100) = param_5;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  *(undefined4 *)(param_1 + 0xd) = param_6;
  FUN_141e58cb0(param_1 + 0xe,param_2,5,param_3,param_4,param_5,1,param_6,param_7,1,param_8,param_9)
  ;
  *param_1 = &PTR_FUN_144eb27b0;
  param_1[0xe] = &PTR_LAB_144eb2800;
  return param_1;
}



// FUNCTION 141e58b70 FUN_141e58b70 body=316 status=ok
// SIG undefined FUN_141e58b70(void)

undefined8 *
FUN_141e58b70(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
             undefined4 param_9,longlong param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_144d838f0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[3] = 0;
  uVar1 = *(undefined4 *)(param_10 + 0x14);
  uVar2 = *(undefined4 *)(param_10 + 0x18);
  uVar3 = *(undefined4 *)(param_10 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_10 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_10 + 0x20);
  param_1[9] = param_1 + 10;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_7;
  *(undefined4 *)(param_1 + 8) = param_9;
  *(undefined4 *)(param_1 + 7) = 1;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_3;
  param_1[10] = 0xc7efffffe0000000;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_144d83998;
  *(undefined4 *)(param_1 + 0xd) = param_6;
  *(undefined4 *)((longlong)param_1 + 100) = param_5;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  FVulkanTextureBase::FVulkanTextureBase
            (param_1 + 0xe,param_2,5,param_3,param_4,param_5,1,param_7,1,1,param_8,0,param_9,
             param_10);
  *param_1 = &PTR_FUN_144eb27b0;
  param_1[0xe] = &PTR_LAB_144eb2800;
  return param_1;
}



// FUNCTION 141e58cb0 FUN_141e58cb0 body=1118 status=ok
// SIG undefined FUN_141e58cb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_141e58cb0(undefined8 *param_1,longlong param_2,int param_3,int param_4,undefined4 param_5,
             int param_6,uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,
             longlong *param_12)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  void *_Src;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_118 [32];
  longlong local_f8;
  int local_f0;
  uint local_e8;
  uint local_e0;
  uint local_d8;
  uint local_d0;
  uint local_c8;
  longlong *local_c0;
  char local_b8;
  int local_b4;
  longlong *local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_c0 = param_12;
  local_c8 = param_11;
  local_b0 = param_12;
  local_d0 = param_10;
  local_d8 = param_9;
  local_e0 = param_8;
  local_e8 = param_7;
  local_f0 = param_6;
  *param_1 = &PTR__scalar_deleting_destructor__144eb2708;
  local_f8 = CONCAT44(local_f8._4_4_,param_5);
  local_b4 = param_4;
  FUN_141e58110(param_1 + 1);
  puVar10 = param_1 + 0x10;
  *puVar10 = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  iVar5 = *(int *)((longlong)param_1 + 0x24);
  local_b8 = param_3 - 4U < 3;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 4) = (&DAT_1464ca1cc)[(longlong)local_b4 * 10];
    iVar5 = FUN_141e55c30(local_b4,(byte)(param_11 >> 4) & 1);
    *(int *)((longlong)param_1 + 0x24) = iVar5;
  }
  if (param_3 != 0x7fffffff) {
    local_d0 = param_7;
    if (local_b8 != '\0') {
      local_d0 = param_8;
    }
    if (local_d0 < 2) {
      local_d0 = 1;
    }
    uVar2 = param_1[3];
    local_e0 = 1;
    if (param_9 != 0) {
      local_e0 = param_9;
    }
    local_c0 = (longlong *)0x0;
    local_c8 = local_c8 & 0xffffff00;
    local_d8 = 0;
    local_e8 = 0;
    local_f8 = CONCAT44(local_f8._4_4_,*(undefined4 *)((longlong)param_1 + 0x34));
    local_f0 = iVar5;
    uVar8 = FUN_141e67300(param_2,uVar2,param_3);
    param_1[0x11] = uVar2;
    *puVar10 = uVar8;
    if (DAT_1464c9c14 < 2) {
      LOCK();
      UNLOCK();
      iVar5 = (int)DAT_146aafd58;
      DAT_146aafd58 = DAT_146aafd58 + 1;
      *(int *)(param_1 + 0x12) = iVar5 + 1;
    }
  }
  if (*(int *)(param_1 + 0xf) == *(int *)((longlong)param_1 + 0x7c)) {
    param_1[0x13] = puVar10;
  }
  else {
    puVar11 = (undefined8 *)operator_new(0x18);
    puVar10 = (undefined8 *)0x0;
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = 0;
      puVar11[1] = 0;
      *(undefined4 *)(puVar11 + 2) = 0;
      puVar10 = puVar11;
    }
    param_1[0x13] = puVar10;
    if (local_b8 != '\0') {
      param_7 = param_8;
    }
    local_f0 = *(int *)((longlong)param_1 + 0x24);
    local_d0 = param_7;
    if (param_7 < 2) {
      local_d0 = 1;
    }
    uVar2 = param_1[3];
    local_e0 = 1;
    if (param_9 != 0) {
      local_e0 = param_9;
    }
    local_c0 = (longlong *)0x0;
    local_c8 = local_c8 & 0xffffff00;
    local_d8 = 0;
    local_e8 = 0;
    local_f8 = CONCAT44(local_f8._4_4_,*(undefined4 *)((longlong)param_1 + 0x34));
    uVar8 = FUN_141e67300(param_2,uVar2,*(undefined4 *)(param_1 + 0xc),
                          *(undefined4 *)((longlong)param_1 + 0x7c));
    *puVar10 = uVar8;
    puVar10[1] = uVar2;
    if (DAT_1464c9c14 < 2) {
      LOCK();
      UNLOCK();
      iVar5 = (int)DAT_146aafd58;
      DAT_146aafd58 = DAT_146aafd58 + 1;
      *(int *)(puVar10 + 2) = iVar5 + 1;
    }
  }
  plVar4 = local_b0;
  if ((longlong *)*local_b0 == (longlong *)0x0) {
    FUN_141e5fd80(param_2,param_1[3],0);
  }
  else {
    uVar6 = (**(code **)(*(longlong *)*local_b0 + 0x10))();
    lVar9 = FUN_141e22090(param_2 + 0x3f0,uVar6,1,0);
    uVar1 = *(uint *)(*(longlong *)(lVar9 + 0x10) + 0x24);
    lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x28) + 0x18);
    uVar7 = (**(code **)(*(longlong *)*plVar4 + 0x10))();
    _Src = (void *)(**(code **)(*(longlong *)*local_b0 + 8))();
    _guard_xfg_dispatch_icall_nop((void *)((ulonglong)uVar1 + lVar3),_Src,(ulonglong)uVar7);
    (**(code **)(*(longlong *)*local_b0 + 0x18))();
    if ((param_3 == 6) || (param_3 == 3)) {
      local_98 = 6;
    }
    else {
      local_98 = 1;
    }
    uStack_64 = *(undefined4 *)(param_1 + 5);
    local_60 = *(undefined4 *)((longlong)param_1 + 0x2c);
    uStack_88 = param_1[5];
    local_98 = param_8 * local_98;
    local_80 = *(undefined4 *)(param_1 + 0xf);
    uStack_5c = *(undefined4 *)(param_1 + 6);
    uStack_a0 = *(undefined4 *)(param_1 + 0xe);
    local_70 = 0;
    uStack_68 = 0;
    local_90 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    local_a8 = 1;
    uStack_9c = 0;
    iStack_74 = local_98;
    if (DAT_146ab6383 == '\0') {
      local_f8 = lVar9;
      FUN_141e5feb0(*(undefined8 *)(param_2 + 0x18b0),param_1 + 1,&local_a8,&local_90);
    }
    else {
      puVar11 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
      puVar10 = puVar11 + 0xe;
      if (DAT_146ab6eb0 < puVar10) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x78);
        puVar11 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
        puVar10 = puVar11 + 0xe;
      }
      DAT_146ab6e8c = DAT_146ab6e8c + 1;
      DAT_146ab6ea8 = puVar10;
      *DAT_146ab6e80 = puVar11;
      DAT_146ab6e80 = puVar11 + 1;
      *DAT_146ab6e80 = 0;
      *puVar11 = &PTR_FUN_144eb2af0;
      puVar11[2] = param_1 + 1;
      puVar11[3] = local_a8;
      puVar11[4] = CONCAT44(uStack_9c,uStack_a0);
      *(int *)(puVar11 + 5) = local_98;
      puVar11[6] = local_90;
      puVar11[7] = uStack_88;
      puVar11[8] = CONCAT44(uStack_7c,local_80);
      puVar11[9] = CONCAT44(iStack_74,uStack_78);
      puVar11[10] = local_70;
      puVar11[0xb] = CONCAT44(uStack_64,uStack_68);
      puVar11[0xc] = CONCAT44(uStack_5c,local_60);
      puVar11[0xd] = lVar9;
    }
  }
  return param_1;
}



// FUNCTION 141e59110 FVulkanTextureBase body=601 status=ok
// SIG undefined FVulkanTextureBase(void)

undefined8 *
FVulkanTextureBase::FVulkanTextureBase
          (undefined8 *param_1,undefined8 param_2,int param_3,undefined4 param_4,undefined8 param_5,
          undefined8 param_6,uint param_7,uint param_8,uint param_9,undefined8 param_10,
          ulonglong param_11,undefined8 param_12,undefined4 *param_13,undefined8 param_14,
          ulonglong param_15)

{
  undefined4 uVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  
  *param_1 = &PTR__scalar_deleting_destructor__144eb2708;
  uVar11 = param_11;
  FUN_141e584c0(param_1 + 1);
  puVar10 = param_1 + 0x10;
  *puVar10 = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  bVar3 = param_3 - 4U < 3;
  param_1[0x13] = 0;
  uVar9 = 1;
  *(undefined1 *)(param_1 + 0x14) = 0;
  uVar1 = *param_13;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 4) = *param_13;
  if ((param_3 != 0x7fffffff) && (param_1[3] != 0)) {
    uVar8 = param_7;
    if (bVar3) {
      uVar8 = param_8;
    }
    if (uVar8 < 2) {
      uVar8 = uVar9;
    }
    param_15 = param_15 & 0xffffffffffffff00;
    uVar7 = uVar9;
    if (*(int *)(param_1 + 0xe) != 0) {
      uVar7 = *(uint *)(param_1 + 0xe);
    }
    uVar11 = CONCAT44((int)(uVar11 >> 0x20),uVar8);
    FVulkanTextureView::Create
              (puVar10,param_2,param_1[3],param_3,*(undefined4 *)(param_1 + 0xf),param_4,uVar1,0,
               uVar7,0,uVar11,param_13,param_15);
  }
  if (*(int *)(param_1 + 0xf) == *(int *)((longlong)param_1 + 0x7c)) {
    param_1[0x13] = puVar10;
  }
  else {
    puVar5 = (undefined8 *)operator_new(0x18);
    puVar10 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
      *(undefined4 *)(puVar5 + 2) = 0;
      puVar10 = puVar5;
    }
    param_1[0x13] = puVar10;
    if (bVar3) {
      param_7 = param_8;
    }
    if (param_7 < 2) {
      param_7 = uVar9;
    }
    uVar2 = param_1[3];
    if (param_9 != 0) {
      uVar9 = param_9;
    }
    uVar6 = FUN_141e67300(param_2,uVar2,*(undefined4 *)(param_1 + 0xc),
                          *(undefined4 *)((longlong)param_1 + 0x7c),
                          *(undefined4 *)((longlong)param_1 + 0x34),
                          *(undefined4 *)((longlong)param_1 + 0x24),0,uVar9,0,param_7,
                          uVar11 & 0xffffffffffffff00,param_13,param_15);
    *puVar10 = uVar6;
    puVar10[1] = uVar2;
    if (DAT_1464c9c14 < 2) {
      LOCK();
      UNLOCK();
      iVar4 = (int)DAT_146aafd58;
      DAT_146aafd58 = DAT_146aafd58 + 1;
      *(int *)(puVar10 + 2) = iVar4 + 1;
    }
  }
  FUN_141e5fd80(param_2,param_11,5);
  return param_1;
}



// FUNCTION 141e59370 FVulkanTextureBase body=547 status=ok
// SIG undefined FVulkanTextureBase(void)

undefined8 *
FVulkanTextureBase::FVulkanTextureBase
          (undefined8 *param_1,undefined8 param_2,int param_3,undefined4 param_4,undefined8 param_5,
          undefined8 param_6,uint param_7,uint param_8,uint param_9,undefined8 param_10,
          ulonglong param_11,undefined8 param_12,undefined4 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 in_stack_ffffffffffffffc0;
  ulonglong uVar9;
  
  *param_1 = &PTR__scalar_deleting_destructor__144eb2708;
  uVar9 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20),param_13);
  FUN_141e584c0(param_1 + 1);
  puVar8 = param_1 + 0x10;
  *puVar8 = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  bVar2 = param_3 - 4U < 3;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  uVar7 = 1;
  if ((param_3 != 0x7fffffff) && (param_1[3] != 0)) {
    uVar6 = param_7;
    if (bVar2) {
      uVar6 = param_8;
    }
    if (uVar6 < 2) {
      uVar6 = uVar7;
    }
    param_11 = CONCAT44((int)(param_11 >> 0x20),uVar6);
    uVar6 = uVar7;
    if (*(int *)(param_1 + 0xe) != 0) {
      uVar6 = *(uint *)(param_1 + 0xe);
    }
    FVulkanTextureView::Create
              (puVar8,param_2,param_1[3],param_3,*(undefined4 *)(param_1 + 0xf),param_4,
               *(undefined4 *)((longlong)param_1 + 0x24),0,uVar6,0,param_11,
               uVar9 & 0xffffffffffffff00,param_14);
  }
  if (*(int *)(param_1 + 0xf) == *(int *)((longlong)param_1 + 0x7c)) {
    param_1[0x13] = puVar8;
  }
  else {
    puVar4 = (undefined8 *)operator_new(0x18);
    puVar8 = (undefined8 *)0x0;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined4 *)(puVar4 + 2) = 0;
      puVar8 = puVar4;
    }
    param_1[0x13] = puVar8;
    if (bVar2) {
      param_7 = param_8;
    }
    if (param_7 < 2) {
      param_7 = uVar7;
    }
    uVar1 = param_1[3];
    if (param_9 != 0) {
      uVar7 = param_9;
    }
    uVar5 = FUN_141e67300(param_2,uVar1,*(undefined4 *)(param_1 + 0xc),
                          *(undefined4 *)((longlong)param_1 + 0x7c),
                          *(undefined4 *)((longlong)param_1 + 0x34),
                          *(undefined4 *)((longlong)param_1 + 0x24),0,uVar7,0,param_7,
                          param_11 & 0xffffffffffffff00,0);
    *puVar8 = uVar5;
    puVar8[1] = uVar1;
    if (DAT_1464c9c14 < 2) {
      LOCK();
      UNLOCK();
      iVar3 = (int)DAT_146aafd58;
      DAT_146aafd58 = DAT_146aafd58 + 1;
      *(int *)(puVar8 + 2) = iVar3 + 1;
    }
  }
  return param_1;
}



// FUNCTION 141e595a0 FUN_141e595a0 body=352 status=ok
// SIG undefined FUN_141e595a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_141e595a0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             char param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined8 param_9,undefined8 *param_10)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_38 = 1;
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_144d838f0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[3] = 0;
  uVar1 = param_10[1];
  local_40 = 0;
  local_24 = 0;
  param_1[4] = *param_10;
  param_1[5] = uVar1;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_10 + 2);
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_3;
  param_1[9] = param_1 + 10;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_7;
  *(undefined4 *)(param_1 + 7) = 1;
  *(undefined4 *)(param_1 + 8) = param_8;
  param_1[10] = 0xc7efffffe0000000;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_144d83a38;
  local_48 = param_9;
  uVar1 = 3;
  if (param_5 != '\0') {
    uVar1 = 6;
  }
  *(undefined4 *)(param_1 + 0xc) = param_4;
  local_20 = 0;
  local_34 = _DAT_1468b5d78;
  uStack_30 = uRam00000001468b5d7c;
  uStack_2c = uRam00000001468b5d80;
  uStack_28 = uRam00000001468b5d84;
  local_18 = 0;
  local_10 = 0;
  FUN_141e58cb0(param_1 + 0xd,param_2,uVar1,param_3,param_4,param_4,1,param_6,param_7,1,param_8,
                &local_48);
  *param_1 = &PTR_FUN_144eb28a0;
  param_1[0xd] = &PTR_LAB_144eb28f0;
  return param_1;
}



// FUNCTION 141e59700 FUN_141e59700 body=387 status=ok
// SIG undefined FUN_141e59700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_141e59700(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             char param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
             undefined4 param_9,undefined8 param_10,undefined8 *param_11)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_38 = 1;
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_144d838f0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[3] = 0;
  uVar1 = param_11[1];
  local_40 = 0;
  local_24 = 0;
  param_1[4] = *param_11;
  param_1[5] = uVar1;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_11 + 2);
  param_1[9] = param_1 + 10;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_7;
  *(undefined4 *)(param_1 + 7) = 1;
  *(undefined4 *)(param_1 + 8) = param_9;
  param_1[10] = 0xc7efffffe0000000;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_144d83a38;
  local_48 = param_10;
  uVar1 = 3;
  if (param_5 != '\0') {
    uVar1 = 6;
  }
  *(undefined4 *)(param_1 + 0xc) = param_4;
  local_20 = 0;
  local_34 = _DAT_1468b5d78;
  uStack_30 = uRam00000001468b5d7c;
  uStack_2c = uRam00000001468b5d80;
  uStack_28 = uRam00000001468b5d84;
  local_18 = 0;
  local_10 = 0;
  FVulkanTextureBase::FVulkanTextureBase
            (param_1 + 0xd,param_2,uVar1,param_3,param_4,param_4,1,param_6,param_7,1,param_8,0,
             param_9,&local_48);
  *param_1 = &PTR_FUN_144eb28a0;
  param_1[0xd] = &PTR_LAB_144eb28f0;
  return param_1;
}



// FUNCTION 141e59890 FUN_141e59890 body=573 status=ok
// SIG undefined FUN_141e59890(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141e59890(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong in_stack_ffffffffffffff70;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  puVar5 = (undefined8 *)0x0;
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[4] = 1;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  if (param_3 == (undefined8 *)0x0) {
    param_3 = param_1 + 10;
  }
  param_1[9] = param_3;
  param_1[10] = 0xc7efffffe0000000;
  param_1[0xb] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144d83a88;
  param_1[0xc] = 0;
  uStack_3c = uRam00000001468b5d80;
  local_44 = _DAT_1468b5d78;
  param_1[0xd] = &PTR__scalar_deleting_destructor__144eb2708;
  local_58 = 0;
  uStack_50 = 0;
  uVar6 = 0;
  local_48 = 1;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  FUN_141e584c0(param_1 + 0xe,param_2,0x7fffffff,0,0,0,0,1,1,1,0,
                in_stack_ffffffffffffff70 & 0xffffffff00000000,&local_58);
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  if (*(int *)(param_1 + 0x1c) == *(int *)((longlong)param_1 + 0xe4)) {
    param_1[0x20] = param_1 + 0x1d;
  }
  else {
    puVar3 = (undefined8 *)operator_new(0x18);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 2) = 0;
      puVar5 = puVar3;
    }
    uVar1 = param_1[0x10];
    param_1[0x20] = puVar5;
    uVar4 = FUN_141e67300(param_2,uVar1,*(undefined4 *)(param_1 + 0x19),
                          *(undefined4 *)((longlong)param_1 + 0xe4),
                          *(undefined4 *)((longlong)param_1 + 0x9c),
                          *(undefined4 *)((longlong)param_1 + 0x8c),0,1,0,1,
                          uVar6 & 0xffffffffffffff00,0);
    puVar5[1] = uVar1;
    *puVar5 = uVar4;
    if (DAT_1464c9c14 < 2) {
      LOCK();
      UNLOCK();
      iVar2 = (int)DAT_146aafd58;
      DAT_146aafd58 = DAT_146aafd58 + 1;
      *(int *)(puVar5 + 2) = iVar2 + 1;
    }
  }
  *param_1 = &PTR__scalar_deleting_destructor__144eb2918;
  param_1[0xd] = &PTR_LAB_144eb2968;
  return param_1;
}



// FUNCTION 141e59ad0 FUN_141e59ad0 body=440 status=ok
// SIG undefined FUN_141e59ad0(void)

undefined8 * FUN_141e59ad0(undefined8 *param_1,undefined4 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  bool bVar13;
  
  *param_1 = &PTR_FUN_143f3ece8;
  plVar1 = param_1 + 5;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_144d838e0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0x100;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = *param_2;
  *param_1 = &PTR__scalar_deleting_destructor__144eb29a0;
  *plVar1 = 0;
  param_1[6] = 0;
  uVar3 = param_2[8];
  if (uVar3 != 0) {
    *(undefined4 *)(param_1 + 6) = 0;
    if (*(uint *)((longlong)param_1 + 0x34) != uVar3) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1);
    }
    iVar4 = *(int *)(param_1 + 6);
    iVar8 = iVar4 + uVar3;
    *(int *)(param_1 + 6) = iVar8;
    if (*(int *)((longlong)param_1 + 0x34) < iVar8) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar1 + (longlong)iVar4 * 8),0,(longlong)(int)uVar3 << 3);
    uVar12 = 0;
    if (uVar3 != 0) {
      do {
        lVar11 = (longlong)(int)uVar12;
        puVar5 = *(undefined8 **)(*plVar1 + lVar11 * 8);
        lVar6 = *(longlong *)
                 ((ulonglong)*(ushort *)(*(longlong *)(param_2 + 2) + lVar11 * 2) + param_3);
        *(longlong *)(*plVar1 + lVar11 * 8) = lVar6;
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          UNLOCK();
        }
        if (puVar5 != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(puVar5 + 1);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            if ((*(char *)(puVar5 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar7 = FOutputDevice::CanBeUsedOnAnyThread(), cVar7 == '\0')))) {
              LOCK();
              bVar13 = *(int *)((longlong)puVar5 + 0xc) == 0;
              if (bVar13) {
                *(int *)((longlong)puVar5 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar13) {
                uVar9 = FLockFreeLinkPolicy::AllocLockFreeLink();
                uVar10 = 0;
                if (uVar9 != 0) {
                  uVar10 = (&DAT_1468a81f8)[uVar9 >> 0xe] + (ulonglong)(uVar9 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(uVar10 + 8) = puVar5;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar5)(puVar5,1);
            }
          }
        }
        uVar9 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar9;
      } while (uVar9 < uVar3);
    }
    return param_1;
  }
  return param_1;
}



// FUNCTION 141e59c90 FUN_141e59c90 body=269 status=ok
// SIG undefined FUN_141e59c90(void)

longlong * FUN_141e59c90(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  lVar3 = 0;
  *param_1 = param_2;
  param_1[1] = 0;
  if (*(char *)(param_2 + 0x220) == '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146ab0528) {
      _Init_thread_header(&DAT_146ab0528);
      if (DAT_146ab0528 == -1) {
        DAT_146ab0524 = FWindowsPlatformMisc::VerifyWindowsVersion(10);
        _Init_thread_footer(&DAT_146ab0528);
      }
    }
    cVar1 = IsRHIDeviceIntel();
    if ((cVar1 != '\0') && (DAT_146ab0524 != '\0')) {
      cVar1 = VulkanRHI::FDeviceMemoryManager::SupportsMemoryType(param_2 + 0x10,7);
      if (cVar1 != '\0') goto LAB_141e59cb7;
    }
    lVar2 = operator_new(0x38);
    if (lVar2 == 0) goto LAB_141e59d4c;
    uVar4 = 6;
  }
  else {
LAB_141e59cb7:
    lVar2 = operator_new(0x38);
    if (lVar2 == 0) goto LAB_141e59d4c;
    uVar4 = 7;
  }
  lVar3 = FVulkanRingBuffer::FVulkanRingBuffer(lVar2,param_2,0x1000000,0x10,uVar4);
LAB_141e59d4c:
  param_1[1] = lVar3;
  return param_1;
}



// FUNCTION 141e59da0 FVulkanVertexBuffer body=133 status=ok
// SIG undefined FVulkanVertexBuffer(void)

undefined8 *
FVulkanVertexBuffer::FVulkanVertexBuffer
          (undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          undefined8 param_5,undefined8 param_6)

{
  *param_1 = &PTR_FUN_143f3ece8;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *param_1 = &PTR_FUN_144d838e8;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_4;
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined2 *)(param_1 + 2) = 0x100;
  FUN_141e20860(param_1 + 4,param_2,0x80,param_3,param_4,param_5,param_6);
  *param_1 = &PTR_FUN_144eb2990;
  param_1[4] = &PTR_LAB_144eb2998;
  return param_1;
}



// FUNCTION 141e59e30 FUN_141e59e30 body=192 status=ok
// SIG undefined FUN_141e59e30(void)

undefined8 * FUN_141e59e30(undefined8 *param_1)

{
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  _guard_xfg_dispatch_icall_nop((void *)((longlong)param_1 + 0x264),0,0x200);
  _guard_xfg_dispatch_icall_nop(param_1 + 0x1c,0,0x180);
  return param_1;
}



// FUNCTION 141e59ef0 ~FVulkanFramebuffer body=64 status=ok
// SIG undefined ~FVulkanFramebuffer(void)

void FVulkanFramebuffer::~FVulkanFramebuffer(longlong *param_1)

{
  if (param_1[0x1b] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141e59f30 ~OGLInputStream body=11 status=ok
// SIG undefined ~OGLInputStream(void)

void OGLInputStream::~OGLInputStream(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144da0c80;
  return;
}



// FUNCTION 141e59f40 ~FVulkanTextureBase body=137 status=ok
// SIG undefined ~FVulkanTextureBase(void)

void FVulkanTextureBase::~FVulkanTextureBase(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR__scalar_deleting_destructor__144eb2708;
  DestroyViews();
  if ((undefined8 *)param_1[0x13] != param_1 + 0x10) {
    FMemory::operator_delete((undefined8 *)param_1[0x13],0x18);
  }
  param_1[1] = &PTR__scalar_deleting_destructor__144eb2700;
  FVulkanSurface::Destroy(param_1 + 1);
  puVar3 = (undefined8 *)param_1[0xd];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *param_1 = &PTR_FUN_144024f50;
  return;
}



// FUNCTION 141e59fd0 ~FVulkanUniformBufferUploader body=47 status=ok
// SIG undefined ~FVulkanUniformBufferUploader(void)

void FVulkanUniformBufferUploader::~FVulkanUniformBufferUploader(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FVulkanRingBuffer::~FVulkanRingBuffer(lVar1);
    FMemory::operator_delete(lVar1,0x38);
    return;
  }
  return;
}



// FUNCTION 141e5a000 FUN_141e5a000 body=645 status=ok
// SIG undefined FUN_141e5a000(void)

void FUN_141e5a000(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  bool bVar13;
  
  *param_1 = &PTR__scalar_deleting_destructor__144eb2ab0;
  lVar7 = param_1[0x14];
  uVar6 = 0;
  param_1[0x14] = 0;
  if (lVar7 != 0) {
    TD3D11Texture2D<FD3D11BaseTexture2D>::Release(lVar7 + 0x68);
  }
  lVar7 = param_1[0x13];
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0x110) = 0;
    *(undefined8 *)(lVar7 + 0xe8) = 0;
    *(undefined4 *)(lVar7 + 0xf8) = 0;
    *(undefined8 *)(lVar7 + 0x80) = 0;
    lVar7 = param_1[0x13];
    param_1[0x13] = 0;
    if (lVar7 != 0) {
      TD3D11Texture2D<FD3D11BaseTexture2D>::Release(lVar7 + 0x68);
    }
  }
  puVar5 = param_1 + 4;
  lVar7 = 3;
  plVar4 = param_1 + 10;
  do {
    puVar2 = (undefined8 *)puVar5[3];
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar8 == 1) && (puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
    if (*plVar4 != 0) {
      FUN_141e254e0(param_1[3] + 0x3b0,4);
      plVar4[1] = 0;
      *plVar4 = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
    }
    FUN_141e2a260(param_1[3],*puVar5);
    FUN_141e2a280(param_1[3],*puVar5);
    *puVar5 = 0;
    plVar4 = plVar4 + 3;
    puVar5 = puVar5 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  FUN_141e46350(param_1[0x1e]);
  lVar7 = param_1[0x1e];
  if (lVar7 != 0) {
    if (*(longlong *)(lVar7 + 0x70) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar7 + 0x60) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar7,0x88);
  }
  lVar7 = param_1[0x1a];
  param_1[0x1e] = 0;
  lVar3 = (longlong)*(int *)(lVar7 + 0x80);
  if (*(int *)(lVar7 + 0x80) != 0) {
    bVar13 = (undefined8 *)**(longlong **)(lVar7 + 0x78) != param_1;
    uVar9 = uVar6;
    uVar11 = uVar6;
    do {
      iVar8 = (int)uVar9;
      uVar6 = uVar6 + 1;
      uVar9 = (ulonglong)(iVar8 + 1);
      if ((longlong)uVar6 < lVar3) {
        plVar4 = (longlong *)(*(longlong *)(lVar7 + 0x78) + uVar6 * 8);
        do {
          if (bVar13 != ((undefined8 *)*plVar4 != param_1)) break;
          uVar9 = (ulonglong)((int)uVar9 + 1);
          uVar6 = uVar6 + 1;
          plVar4 = plVar4 + 1;
        } while ((longlong)uVar6 < lVar3);
      }
      iVar12 = (int)uVar9 - iVar8;
      if (bVar13 != false) {
        iVar10 = (int)uVar11;
        if (iVar10 != iVar8) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(lVar7 + 0x78) + (longlong)iVar10 * 8),
                     (void *)(*(longlong *)(lVar7 + 0x78) + (longlong)iVar8 * 8),
                     (longlong)iVar12 << 3);
        }
        uVar11 = (ulonglong)(uint)(iVar10 + iVar12);
      }
      bVar13 = (bool)(bVar13 ^ 1);
    } while ((longlong)uVar6 < lVar3);
    *(int *)(lVar7 + 0x80) = (int)uVar11;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x22);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    TD3D11Texture2D<FD3D11BaseTexture2D>::Release(param_1[0x14] + 0x68);
  }
  if (param_1[0x13] != 0) {
    TD3D11Texture2D<FD3D11BaseTexture2D>::Release(param_1[0x13] + 0x68);
  }
  *param_1 = &PTR_FUN_143f3ece8;
  return;
}



// FUNCTION 141e5a290 FUN_141e5a290 body=220 status=ok
// SIG undefined FUN_141e5a290(void)

void FUN_141e5a290(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int local_res8 [2];
  undefined **local_18;
  undefined4 local_10;
  
  if ((char)param_1[1] != '\0') {
    local_18 = &PTR_PTR_1464c0b40;
    local_10 = 0;
    lVar1 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(lVar1 + 0x38,local_res8,&local_18);
    plVar3 = (longlong *)0x0;
    if (local_res8[0] != -1) {
      plVar3 = (longlong *)((longlong)local_res8[0] * 0x20 + *(longlong *)(lVar1 + 0x38));
    }
    plVar2 = plVar3 + 2;
    if (plVar3 == (longlong *)0x0) {
      plVar2 = (longlong *)0x0;
    }
    if (*(char *)(*(longlong *)(*plVar2 + 0x48) + 0x28) == '\0') {
      FUN_1419f3850();
    }
  }
  VulkanRHI::FTempFrameAllocationBuffer::Reset(*(longlong *)(*param_1 + 0x18b0) + 0x1f8);
  if (DAT_1464c9490 != 1) {
    return;
  }
  FUN_141e25fd0(*(undefined8 *)(*(longlong *)(*param_1 + 0x18b0) + 0x2d8));
  return;
}



// FUNCTION 141e5a370 FUN_141e5a370 body=209 status=ok
// SIG undefined FUN_141e5a370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e5a370(undefined8 param_1,longlong param_2,longlong param_3,int param_4,void *param_5)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  ulonglong *local_68;
  void *local_58;
  longlong lStack_50;
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  size_t local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x2d8) + 0x70);
  local_58 = (void *)0x0;
  lStack_50 = 0;
  local_48 = 0;
  VulkanRHI::FTempFrameAllocationBuffer::Alloc(param_2 + 0x1f8,param_4,0x10,&local_58);
  _guard_xfg_dispatch_icall_nop(local_58,param_5,(longlong)param_4);
  local_40 = (ulonglong)(uint)(*(int *)(lStack_50 + 0x14) + (int)local_48);
  local_38 = (ulonglong)*(uint *)(*(longlong *)(param_3 + 0x40) + 0x14);
  local_68 = &local_40;
  local_30 = (longlong)param_4;
  (*DAT_146ab0260)(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lStack_50 + 0x28),
                   *(undefined8 *)(*(longlong *)(*(longlong *)(param_3 + 0x40) + 0x20) + 0x60),1);
  return;
}



// FUNCTION 141e5a4b0 FUN_141e5a4b0 body=97 status=ok
// SIG undefined FUN_141e5a4b0(void)

undefined8 * FUN_141e5a4b0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144eb2b80;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141e5a520 FUN_141e5a520 body=97 status=ok
// SIG undefined FUN_141e5a520(void)

undefined8 * FUN_141e5a520(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144eb2b70;
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141e5a590 FUN_141e5a590 body=97 status=ok
// SIG undefined FUN_141e5a590(void)

undefined8 * FUN_141e5a590(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144eb2b90;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141e5a600 FUN_141e5a600 body=97 status=ok
// SIG undefined FUN_141e5a600(void)

undefined8 * FUN_141e5a600(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144eb2b60;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141e5a670 `scalar_deleting_destructor' body=114 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FVulkanBackBuffer::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x10] = 0;
  *param_1 = &PTR_FUN_144eb2730;
  param_1[0xd] = &PTR_LAB_144eb2788;
  FVulkanTextureBase::~FVulkanTextureBase();
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 141e5a6f0 `scalar_deleting_destructor' body=86 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FVulkanComputeFence::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144eb29c8;
  param_1[5] = &PTR_LAB_144eb29e0;
  VulkanRHI::FGPUEvent::~FGPUEvent();
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 141e5a750 `scalar_deleting_destructor' body=81 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FVulkanEmulatedUniformBuffer::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>::
  ~TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>(param_1 + 5);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141e5a7b0 FUN_141e5a7b0 body=179 status=ok
// SIG undefined FUN_141e5a7b0(void)

undefined8 * FUN_141e5a7b0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_144eb26c8;
  FUN_141e2d4b0(param_1[0xd] + 0x3f0,0,param_1[0x10] + 0x58);
  puVar1 = (undefined8 *)param_1[0x10];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0x10] = 0;
  param_1[0xb] = &PTR_FUN_144da0c80;
  *param_1 = &PTR_FUN_144da0c28;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 141e5a870 `scalar_deleting_destructor' body=102 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FVulkanRealUniformBuffer::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144eb29b0;
  if (param_1[8] != 0) {
    FUN_141e66e60(param_1[7] + 0x248);
  }
  TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>::
  ~TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>(param_1 + 5);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141e5a8e0 `scalar_deleting_destructor' body=110 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FVulkanShaderResourceView::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144eb29c0;
  FUN_141e5ba30();
  param_1[3] = 0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x10);
  TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>::
  ~TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>(param_1 + 0xc);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 5);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 141e5a950 FUN_141e5a950 body=97 status=ok
// SIG undefined FUN_141e5a950(void)

undefined8 * FUN_141e5a950(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144eb29e8;
  if (param_1[6] != 0) {
    FUN_141e2d4b0(param_1[8] + 0x3f0,0,param_1 + 6);
  }
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141e5a9c0 `scalar_deleting_destructor' body=102 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FVulkanSurface::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR__scalar_deleting_destructor__144eb2700;
  Destroy();
  puVar3 = (undefined8 *)param_1[0xc];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 141e5aa30 FUN_141e5aa30 body=126 status=ok
// SIG undefined FUN_141e5aa30(void)

undefined8 * FUN_141e5aa30(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144eb2730;
  param_1[0xd] = &PTR_LAB_144eb2788;
  if ((*(uint *)(param_1 + 0x14) & 0x810007) != 0) {
    FUN_141e2a280(param_1[0xf],param_1[0x10]);
  }
  FVulkanTextureBase::~FVulkanTextureBase(param_1 + 0xd);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 141e5aab0 FUN_141e5aab0 body=126 status=ok
// SIG undefined FUN_141e5aab0(void)

undefined8 * FUN_141e5aab0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144eb27b0;
  param_1[0xe] = &PTR_LAB_144eb2800;
  if ((*(uint *)(param_1 + 8) & 0x810007) != 0) {
    FUN_141e2a280(param_1[0x10],param_1[0x11]);
  }
  FVulkanTextureBase::~FVulkanTextureBase(param_1 + 0xe);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 141e5ab30 FUN_141e5ab30 body=126 status=ok
// SIG undefined FUN_141e5ab30(void)

undefined8 * FUN_141e5ab30(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144eb2828;
  param_1[0xe] = &PTR_LAB_144eb2878;
  if ((*(uint *)(param_1 + 8) & 0x810007) != 0) {
    FUN_141e2a280(param_1[0x10],param_1[0x11]);
  }
  FVulkanTextureBase::~FVulkanTextureBase(param_1 + 0xe);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 141e5abb0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FVulkanTextureBase::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FVulkanTextureBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 141e5abf0 FUN_141e5abf0 body=123 status=ok
// SIG undefined FUN_141e5abf0(void)

undefined8 * FUN_141e5abf0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_144eb28a0;
  param_1[0xd] = &PTR_LAB_144eb28f0;
  if ((*(uint *)(param_1 + 8) & 0x810007) != 0) {
    FUN_141e2a280(param_1[0xf],param_1[0x10]);
  }
  FVulkanTextureBase::~FVulkanTextureBase(param_1 + 0xd);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 141e5ac70 `scalar_deleting_destructor' body=75 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FVulkanTextureReference::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FVulkanTextureBase::~FVulkanTextureBase(param_1 + 0xd);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 0xc);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 141e5acc0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FVulkanUniformBuffer::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>::
  ~TArray<TRefCountPtr<FRHIRenderQuery>,TSizedDefaultAllocator<32>_>(param_1 + 5);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141e5ad10 `scalar_deleting_destructor' body=222 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FVulkanUnorderedAccessView::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144eb29b8;
  if (param_1[6] != 0) {
    FUN_141e254e0(param_1[3] + 0x3b0,4);
    param_1[7] = 0;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0xc,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 10,0);
  TRefCountPtr<FRHITexture>::operator=(param_1 + 5,0);
  param_1[3] = 0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xc);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xb);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 10);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(param_1 + 5);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 4);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 141e5adf0 FUN_141e5adf0 body=66 status=ok
// SIG undefined FUN_141e5adf0(void)

undefined8 * FUN_141e5adf0(undefined8 *param_1,ulonglong param_2)

{
  FUN_141e21670(param_1 + 4);
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 141e5ae40 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<FCanvas>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 141e5ae70 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FCullObjectsForVolumeCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141e5a000();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 141e5aeb0 FUN_141e5aeb0 body=386 status=ok
// SIG undefined FUN_141e5aeb0(void)

void FUN_141e5aeb0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x110);
    local_28 = 0;
    local_18 = 0;
    puVar4 = (undefined8 *)FUN_140438ef0(0x10,local_48);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_1444f8620;
      puVar4[1] = FUN_141e5d0c0;
    }
    local_58[0] = &LAB_140c6b520;
    cVar3 = FUN_141e5dbb0(uVar1,local_58);
    if (cVar3 == '\0') {
      LowLevelFatalErrorHandler("Unknown",0xe8,L"Swapchain acquire image index failed!");
      FDebug::AssertFailed(&DAT_144ea51cd,"Unknown",0xe8,L"Swapchain acquire image index failed!");
    }
    lVar2 = *(longlong *)(param_1 + 0x110);
    if (lVar2 != 0) {
      uVar5 = (ulonglong)*(uint *)(lVar2 + 0xe8);
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(lVar2 + 0x58 + uVar5 * 0x18);
      *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(lVar2 + 0x50 + uVar5 * 0x18);
      *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(lVar2 + 0x60 + uVar5 * 0x18);
      puVar6 = (undefined4 *)
               FTransitionAndLayoutManager::FindOrAddLayoutRW
                         (param_2 + 0x2e0,*(undefined8 *)(lVar2 + 0x58 + uVar5 * 0x18),0);
      *puVar6 = 0;
      lVar2 = *(longlong *)(param_2 + 0x2d8);
      if (*(longlong *)(lVar2 + 0x78) != 0) {
        FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar2,0,0);
      }
      lVar2 = *(longlong *)(lVar2 + 0x70);
      if (*(char *)(lVar2 + 0x2c) == '\x02') {
        FTransitionAndLayoutManager::EndEmulatedRenderPass(param_2 + 0x2e0,lVar2);
      }
      FVulkanCmdBuffer::AddWaitSemaphore
                (lVar2,0x400,*(undefined8 *)(*(longlong *)(param_1 + 0x110) + 0x108));
    }
  }
  return;
}



// FUNCTION 141e5b040 AliasTextureResources body=166 status=ok
// SIG undefined AliasTextureResources(void)

void FVulkanTextureBase::AliasTextureResources(longlong param_1,longlong param_2)

{
  DestroyViews();
  FVulkanSurface::Destroy(param_1 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  if (*(undefined8 **)(param_1 + 0x98) != (undefined8 *)(param_1 + 0x80)) {
    **(undefined8 **)(param_1 + 0x98) = **(undefined8 **)(param_2 + 0x98);
    *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 8) =
         *(undefined8 *)(*(longlong *)(param_2 + 0x98) + 8);
    *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x10) =
         *(undefined4 *)(*(longlong *)(param_2 + 0x98) + 0x10);
  }
  *(undefined1 *)(param_1 + 0xa0) = 1;
  return;
}



// FUNCTION 141e5b0f0 FUN_141e5b0f0 body=622 status=ok
// SIG undefined FUN_141e5b0f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e5b0f0(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4,
                  undefined4 param_5)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined8 local_1b0;
  uint local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined1 local_178 [256];
  longlong local_78;
  undefined8 local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  uVar6 = 0;
  local_188 = param_5;
  uVar4 = param_2[4];
  uVar1 = **(uint **)(param_1 + 0x10);
  if (uVar1 != 0) {
    puVar5 = *(uint **)(param_1 + 0x10) + 1;
    uVar3 = uVar6;
    do {
      if (uVar4 == 0) break;
      if (((uVar4 & 1) != 0) && ((*puVar5 & param_3) == param_3)) goto LAB_141e5b187;
      uVar4 = uVar4 >> 1;
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + 2;
    } while (uVar3 < uVar1);
  }
  FUN_141e67d70(0xfffffff8,
                "DeviceMemoryManager->GetMemoryTypeFromProperties(MemoryReqs.memoryTypeBits, MemoryPropertyFlags, &TypeIndex)"
                ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Public\\VulkanMemory.h",0x31a);
  uVar3 = uVar6;
LAB_141e5b187:
  uVar7 = (undefined1)(param_3 >> 1);
  if (*(longlong *)((longlong)(int)uVar3 * 8 + *(longlong *)(param_1 + 0x18)) == 0) {
    TStringConversion<TStringConvert<char,wchar_t>,128>::
    TStringConversion<TStringConvert<char,wchar_t>,128>(local_178,param_4);
    local_198 = CONCAT44(local_198._4_4_,local_188);
    local_1a0 = local_70;
    local_1b0 = CONCAT44(local_1b0._4_4_,param_2[4]);
    local_1b8 = *param_2;
    local_1a8 = param_3;
    LowLevelFatalErrorHandler
              ("Unknown",0x31e,
               L"Missing memory type index %d, MemSize %d, MemPropTypeBits %u, MemPropertyFlags %u, %s(%d)"
               ,uVar3);
    if (local_78 != 0) {
      FMemory::Free();
    }
    TStringConversion<TStringConvert<char,wchar_t>,128>::
    TStringConversion<TStringConvert<char,wchar_t>,128>(local_178,param_4);
    local_190 = local_188;
    local_198 = local_70;
    local_1a8 = param_2[4];
    local_1a0 = CONCAT44(local_1a0._4_4_,param_3);
    local_1b0 = CONCAT44(local_1b0._4_4_,*param_2);
    local_1b8 = uVar3;
    FDebug::AssertFailed
              (&DAT_143f3f584,"Unknown",0x31e,
               L"Missing memory type index %d, MemSize %d, MemPropTypeBits %u, MemPropertyFlags %u, %s(%d)"
              );
    if (local_78 != 0) {
      FMemory::Free();
    }
  }
  local_1a8 = local_188;
  local_1b8 = CONCAT31(local_1b8._1_3_,uVar7) & 0xffffff01;
  local_1b0 = param_4;
  lVar2 = FUN_141e239d0(*(undefined8 *)((longlong)(int)uVar3 * 8 + *(longlong *)(param_1 + 0x18)),0,
                        *param_2,param_2[2]);
  if (lVar2 == 0) {
    uVar4 = param_2[4];
    uVar1 = **(uint **)(param_1 + 0x10);
    if (uVar1 != 0) {
      puVar5 = *(uint **)(param_1 + 0x10) + 1;
      do {
        if (uVar4 == 0) break;
        if ((((uVar4 & 1) != 0) && ((*puVar5 & param_3) == param_3)) && (uVar3 != uVar6))
        goto LAB_141e5b304;
        uVar4 = uVar4 >> 1;
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 2;
      } while (uVar6 < uVar1);
    }
    FUN_141e67d70(0xfffffff8,
                  "DeviceMemoryManager->GetMemoryTypeFromPropertiesExcluding(MemoryReqs.memoryTypeBits, MemoryPropertyFlags, TypeIndex, &TypeIndex)"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Public\\VulkanMemory.h",0x323
                 );
    uVar6 = uVar3;
LAB_141e5b304:
    local_1a8 = local_188;
    local_1b8 = CONCAT31(local_1b8._1_3_,uVar7) & 0xffffff01;
    local_1b0 = param_4;
    FUN_141e239d0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)uVar6 * 8),0,
                  *param_2,param_2[2]);
  }
  return;
}



// FUNCTION 141e5b360 FUN_141e5b360 body=376 status=ok
// SIG undefined FUN_141e5b360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_141e5b360(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
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
  
  lVar3 = 0;
  local_58 = 1;
  local_44 = 0;
  local_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_54 = _DAT_1468b5d78;
  uStack_50 = uRam00000001468b5d7c;
  uStack_4c = uRam00000001468b5d80;
  uStack_48 = uRam00000001468b5d84;
  local_38 = 0;
  local_30 = 0;
  lVar2 = operator_new(0x110);
  if (lVar2 != 0) {
    lVar3 = FVulkanTexture2D::FVulkanTexture2D
                      (lVar2,*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_4 + 0x3c),param_6
                       ,param_7,param_5,*(undefined4 *)(param_4 + 0x38),
                       *(undefined4 *)(param_4 + 0x40),&local_68);
  }
  puVar5 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar5 + 8;
  if (*(undefined8 **)(param_3 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(param_3 + 0x30,0x48);
    puVar5 = (undefined8 *)(*(longlong *)(param_3 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 8;
  }
  *(undefined8 **)(param_3 + 0x30) = puVar4;
  *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
  **(undefined8 **)(param_3 + 8) = puVar5;
  *(undefined8 **)(param_3 + 8) = puVar5 + 1;
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18b0);
  *puVar5 = &PTR_FUN_144eb2b30;
  *(undefined4 *)(puVar5 + 5) = param_5;
  puVar5[7] = param_8;
  puVar5[1] = 0;
  puVar5[2] = uVar1;
  puVar5[3] = param_4;
  puVar5[4] = lVar3;
  *(undefined4 *)((longlong)puVar5 + 0x2c) = param_6;
  *(undefined4 *)(puVar5 + 6) = param_7;
  *param_2 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 141e5b4e0 FUN_141e5b4e0 body=749 status=ok
// SIG undefined FUN_141e5b4e0(void)

void FUN_141e5b4e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  char cVar8;
  longlong *plVar9;
  int *piVar10;
  bool bVar11;
  
  plVar9 = (longlong *)0x0;
  bVar11 = false;
  if ((DAT_146aafbfc != '\0') && ((*(byte *)(param_1[0x1c] + 0x18d0) & 0xc0) != 0)) {
    piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38);
    if ((*piVar10 < DAT_146ab0490) && (_Init_thread_header(&DAT_146ab0490), DAT_146ab0490 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar7 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.gpucrash.collectionenable");
      plVar6 = plVar9;
      if (plVar7 != (longlong *)0x0) {
        plVar6 = (longlong *)(**(code **)(*plVar7 + 0x38))(plVar7);
      }
      DAT_146ab0488 = plVar6;
      _Init_thread_footer(&DAT_146ab0490);
    }
    if ((*piVar10 < DAT_146ab04a0) && (_Init_thread_header(&DAT_146ab04a0), DAT_146ab04a0 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar7 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.gpucrash.datadepth");
      plVar6 = plVar9;
      if (plVar7 != (longlong *)0x0) {
        plVar6 = (longlong *)(**(code **)(*plVar7 + 0x38))(plVar7);
      }
      DAT_146ab0498 = plVar6;
      _Init_thread_footer(&DAT_146ab04a0);
    }
    if (DAT_146ab0488 != (longlong *)0x0) {
      bVar11 = *(int *)((longlong)DAT_146ab0488 + 4) != 0;
    }
    *(bool *)((longlong)param_1 + 9) = bVar11;
    if (DAT_146ab0498 == (longlong *)0x0) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = *(undefined4 *)((longlong)DAT_146ab0498 + 4);
    }
    *(undefined4 *)(param_1 + 5) = uVar5;
  }
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[7] = 0;
  *(undefined1 *)((longlong)param_1 + 10) = DAT_146ab62fc;
  cVar4 = DAT_146ab62fd;
  *(char *)((longlong)param_1 + 0xb) = DAT_146ab62fd;
  if (cVar4 == '\0') {
    cVar8 = *(char *)((longlong)param_1 + 10);
  }
  else {
    *(undefined1 *)((longlong)param_1 + 10) = 0;
    cVar8 = '\0';
  }
  if (cVar8 == '\0') {
    if (*(char *)((longlong)param_1 + 0xc) != '\0') goto LAB_141e5b5c6;
    if (cVar4 != '\0') goto LAB_141e5b5b4;
LAB_141e5b5ca:
    if (*(char *)((longlong)param_1 + 0xc) != '\0') {
      FUN_141e5dee0(param_1 + 0x19,0);
      SetEmitDrawEvents(*(undefined1 *)((longlong)param_1 + 0xd));
    }
  }
  else {
LAB_141e5b5b4:
    uVar3 = FUN_14164b510();
    *(undefined1 *)((longlong)param_1 + 0xd) = uVar3;
    cVar4 = *(char *)((longlong)param_1 + 0xb);
    if (*(char *)((longlong)param_1 + 10) == '\0') {
LAB_141e5b5c6:
      if (cVar4 == '\0') goto LAB_141e5b5ca;
LAB_141e5b5f4:
      if (*(int *)((longlong)param_1 + 0x1c) != 0) {
        *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + -1;
        goto LAB_141e5b6a1;
      }
    }
    else if (cVar4 != '\0') goto LAB_141e5b5f4;
    SetEmitDrawEvents(1);
    *(undefined1 *)(param_1 + 1) = 1;
    plVar6 = (longlong *)operator_new(0x48);
    if (plVar6 != (longlong *)0x0) {
      lVar1 = param_1[0x1d];
      lVar2 = param_1[0x1c];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = (longlong)&PTR_FUN_144ea4358;
      plVar6[3] = (longlong)&PTR__scalar_deleting_destructor__144e9c070;
      plVar6[5] = lVar2;
      *(undefined2 *)(plVar6 + 6) = 0;
      plVar6[7] = lVar1;
      plVar6[8] = 0;
      lVar1 = *(longlong *)(lVar1 + 0x2d8);
      if (*(longlong *)(lVar1 + 0x78) != 0) {
        FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar1,0,0);
      }
      FUN_141e5fbf0(plVar6 + 3,*(undefined8 *)(lVar1 + 0x70));
      plVar9 = plVar6;
    }
    param_1[6] = (longlong)plVar9;
    (**(code **)(*plVar9 + 8))(plVar9);
  }
LAB_141e5b6a1:
  *(undefined1 *)((longlong)param_1 + 0xc) = *(undefined1 *)((longlong)param_1 + 0xb);
  cVar4 = FUN_14164b510();
  if (cVar4 == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141e5b6e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,L"FRAME",0xff00ff00);
  return;
}



// FUNCTION 141e5b800 FUN_141e5b800 body=520 status=ok
// SIG undefined FUN_141e5b800(void)

void FUN_141e5b800(uint param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 local_res18 [2];
  undefined1 local_38 [24];
  char *local_20;
  uint local_18;
  longlong local_10;
  
  uVar6 = FCommandLine::Get();
  cVar2 = FParse::Param(uVar6,L"novendordevice");
  cVar3 = IsRHIDeviceIntel();
  if ((cVar3 == '\0') || (cVar2 != '\0')) {
    cVar2 = IsRHIDeviceIntel();
    if ((cVar2 != '\0') &&
       ((iVar4 = FUN_141592950(&DAT_146ab6ae8,L"RTX 20",1,0,0xffffffff), iVar4 != -1 &&
        ((*(uint *)(param_2 + 4) & 0xffc00000) < 0x6b800000)))) {
      IConsoleVariable::SetWithCurrentPriority(DAT_146aafd78,0);
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      uVar6 = (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.RHICmdBypass");
      IConsoleVariable::SetWithCurrentPriority(uVar6,1);
    }
  }
  else {
    local_res18[0] = 0;
    iVar4 = agsInit(local_res18,0,local_38);
    if (iVar4 == 0) {
      if ((((param_1 < local_18) && (local_20 != (char *)0x0)) && (*local_20 != '\0')) &&
         (iVar4 = *(int *)((ulonglong)param_1 * 0x70 + 8 + local_10), iVar4 - 1U < 2)) {
        iVar5 = atoi(local_20);
        cVar2 = *local_20;
        while (('/' < cVar2 && (cVar2 < ':'))) {
          pcVar7 = local_20 + 1;
          local_20 = local_20 + 1;
          cVar2 = *pcVar7;
        }
        if (cVar2 == '.') {
          pcVar7 = local_20 + 1;
          atoi(pcVar7);
          cVar2 = *pcVar7;
          while (('/' < cVar2 && (cVar2 < ':'))) {
            pcVar1 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
            cVar2 = *pcVar1;
          }
          if ((cVar2 == '.') && (atoi(pcVar7 + 1), iVar5 - 1U < 0x11)) {
            FUN_1416a4860(0,
                          L"There are known issues with older Vulkan Radeon drivers; the recommended version is 19.4.1; please try updating your driver to that version."
                          ,L"Vulkan driver version");
            _dynamic_initializer_for__GSystemSettings__(1);
          }
        }
        if ((DAT_146ab62dc != '\0') || (DAT_146ab62dc = '\0', iVar4 == 1)) {
          DAT_146ab62dc = '\x01';
        }
      }
      agsDeInit(local_res18[0]);
      return;
    }
  }
  return;
}



// FUNCTION 141e5ba30 FUN_141e5ba30 body=128 status=ok
// SIG undefined FUN_141e5ba30(void)

void FUN_141e5ba30(longlong param_1)

{
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x80,0);
  *(undefined8 *)(param_1 + 0x78) = 0;
  TArray<TRefCountPtr<FVulkanBufferView>,FDefaultAllocator>::Empty(param_1 + 0x60,0);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if ((*(longlong *)(param_1 + 0x18) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    FUN_141e254e0(*(longlong *)(param_1 + 0x18) + 0x3b0,4);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  TRefCountPtr<FRHITexture>::operator=(param_1 + 0x28,0);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  return;
}



// FUNCTION 141e5bab0 FUN_141e5bab0 body=161 status=ok
// SIG undefined FUN_141e5bab0(void)

undefined8 FUN_141e5bab0(longlong param_1,uint param_2,char param_3)

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
      FUN_141e66bf0(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141e5bb60 CopyImageToBackBuffer body=931 status=ok
// SIG undefined CopyImageToBackBuffer(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void CopyImageToBackBuffer
               (longlong param_1,byte param_2,undefined8 param_3,undefined8 param_4,int param_5,
               int param_6,int param_7,int param_8)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  int local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_b8 = 1;
  local_c8 = 0;
  local_c0 = (undefined8 *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(&local_c0,0);
  uVar3 = local_b8;
  *local_c0 = 0;
  local_c0[1] = 0;
  local_c0[2] = 0;
  local_c0[3] = 0;
  local_c0[4] = 0;
  local_c0[5] = 0;
  local_c0[6] = 0;
  local_c0[7] = 0;
  local_c0[8] = 0;
  *(undefined4 *)local_c0 = 0x2d;
  local_c0[5] = param_3;
  *(undefined4 *)(local_c0 + 6) = 1;
  *(undefined4 *)(local_c0 + 7) = 1;
  *(undefined4 *)(local_c0 + 8) = 1;
  local_c0[4] = 0xffffffffffffffff;
  lVar6 = (longlong)(int)local_b8;
  iVar4 = (int)local_b8 + 1;
  local_b8 = CONCAT44(local_b8._4_4_,iVar4);
  if (local_b8._4_4_ < iVar4) {
    TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(&local_c0,uVar3 & 0xffffffff);
  }
  puVar2 = local_c0;
  lVar1 = lVar6 * 0x48;
  local_c0[lVar6 * 9] = 0;
  local_c0[lVar6 * 9 + 1] = 0;
  local_c0[lVar6 * 9 + 2] = 0;
  local_c0[lVar6 * 9 + 3] = 0;
  local_c0[lVar6 * 9 + 4] = 0;
  local_c0[lVar6 * 9 + 5] = 0;
  local_c0[lVar6 * 9 + 6] = 0;
  local_c0[lVar6 * 9 + 7] = 0;
  local_c0[lVar6 * 9 + 8] = 0;
  *(undefined4 *)(local_c0 + lVar6 * 9) = 0x2d;
  local_c0[lVar6 * 9 + 5] = param_4;
  *(undefined4 *)(local_c0 + lVar6 * 9 + 6) = 1;
  *(undefined4 *)(local_c0 + lVar6 * 9 + 7) = 1;
  *(undefined4 *)(local_c0 + lVar6 * 9 + 8) = 1;
  local_c0[lVar6 * 9 + 4] = 0xffffffffffffffff;
  iVar4 = (uint)param_2 * 4 + 2;
  uVar5 = FUN_141e26f50(iVar4,local_c0 + 2,local_c0 + 3);
  *(undefined4 *)((longlong)puVar2 + 0x14) = 0x800;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = 6;
  *(undefined4 *)(local_c0 + lVar6 * 9 + 2) = 0;
  *(undefined4 *)(local_c0 + lVar6 * 9 + 3) = 0;
  *(undefined4 *)((longlong)local_c0 + lVar1 + 0x14) = 0x1000;
  *(undefined4 *)((longlong)local_c0 + lVar1 + 0x1c) = 7;
  local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 | uVar5) | 0x100000000001;
  if ((0 < (int)local_b8) || (0 < (int)local_a8)) {
    VulkanRHI::FPendingBarrier::InnerExecute(&local_c8,param_1,1);
  }
  if ((param_5 == param_7) && (param_6 == param_8)) {
    local_d8 = &local_98;
    local_60 = CONCAT44(param_6,param_5);
    local_e0 = 1;
    local_e8 = 7;
    local_94 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    uStack_6c = 0;
    uStack_68 = 0;
    local_64 = 0;
    local_58 = 1;
    local_98 = 1;
    local_8c = 1;
    local_7c = 1;
    local_70 = 1;
    (*DAT_146ab0268)(*(undefined8 *)(param_1 + 0x40),param_3,6,param_4);
  }
  else {
    local_d0 = 1;
    local_d8 = &local_98;
    local_7c = param_5;
    local_54 = param_7;
    local_50 = param_8;
    local_e0 = 1;
    local_e8 = 7;
    local_94 = 0;
    local_70 = 1;
    uStack_6c = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = CONCAT44(1,param_6);
    local_98 = 1;
    local_8c = 1;
    local_60 = 0;
    local_58 = 0;
    local_4c = 1;
    uStack_68 = 0;
    local_64 = 1;
    (*DAT_146ab0270)(*(undefined8 *)(param_1 + 0x40),param_3,6,param_4);
  }
  *(undefined4 *)(local_c0 + 2) = 0x800;
  *(undefined4 *)(local_c0 + 3) = 6;
  local_c8._0_4_ = 0x1000;
  local_c8._4_4_ = 0;
  uVar5 = FUN_141e26f50(iVar4,(longlong)local_c0 + 0x14,(longlong)local_c0 + 0x1c);
  *(undefined4 *)(local_c0 + lVar6 * 9 + 2) = 0x1000;
  *(undefined4 *)(local_c0 + lVar6 * 9 + 3) = 7;
  *(undefined4 *)((longlong)local_c0 + lVar1 + 0x14) = 0;
  *(undefined4 *)((longlong)local_c0 + lVar1 + 0x1c) = 0x3b9acdea;
  local_c8 = CONCAT44(local_c8._4_4_ | uVar5,(uint)local_c8) | 0x100001000;
  if ((0 < (int)local_b8) || (0 < (int)local_a8)) {
    VulkanRHI::FPendingBarrier::InnerExecute(&local_c8,param_1,1);
  }
  if (local_b0 != 0) {
    FMemory::Free();
  }
  if (local_c0 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141e5bf10 Create body=181 status=ok
// SIG undefined Create(void)

void FVulkanTextureView::Create
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
               undefined1 param_13)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_141e67300(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                        param_11,param_13,param_12);
  *param_1 = uVar2;
  param_1[1] = param_3;
  if (DAT_1464c9c14 < 2) {
    LOCK();
    UNLOCK();
    iVar1 = (int)DAT_146aafd58;
    DAT_146aafd58 = DAT_146aafd58 + 1;
    *(int *)(param_1 + 2) = iVar1 + 1;
  }
  return;
}



// FUNCTION 141e5bfd0 Create body=177 status=ok
// SIG undefined Create(void)

void FVulkanTextureView::Create
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined1 param_12)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_141e67300(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                        param_11,param_12,0);
  *param_1 = uVar2;
  param_1[1] = param_3;
  if (DAT_1464c9c14 < 2) {
    LOCK();
    UNLOCK();
    iVar1 = (int)DAT_146aafd58;
    DAT_146aafd58 = DAT_146aafd58 + 1;
    *(int *)(param_1 + 2) = iVar1 + 1;
  }
  return;
}



// FUNCTION 141e5c090 FUN_141e5c090 body=839 status=ok
// SIG undefined FUN_141e5c090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_141e5c090(longlong param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
             undefined4 param_6,int param_7,undefined4 param_8,uint param_9,uint param_10,
             undefined8 param_11,undefined4 *param_12,undefined4 *param_13,undefined4 *param_14,
             byte param_15)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 auStack_e8 [32];
  uint local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_a8 [24];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b8 = param_11;
  local_c8 = 1;
  if ((param_10 >> 0x12 & 1) == 0) {
    local_c8 = (uint)param_15;
  }
  puVar5 = local_a8;
  if (param_14 != (undefined4 *)0x0) {
    puVar5 = param_14;
  }
  *puVar5 = 0xe;
  _guard_xfg_dispatch_icall_nop(puVar5 + 1,0,0x54);
  switch(param_2) {
  case 1:
  case 3:
  case 5:
  case 6:
    puVar5[5] = 1;
    break;
  case 2:
    puVar5[5] = 2;
  }
  uVar1 = (&DAT_1464ca1cc)[(longlong)param_3 * 10];
  puVar5[6] = uVar1;
  if (param_12 != (undefined4 *)0x0) {
    *param_12 = uVar1;
  }
  if (param_13 != (undefined4 *)0x0) {
    uVar1 = FUN_141e55c30(param_3,param_10 >> 4 & 0xffffff01);
    *param_13 = uVar1;
    puVar5[6] = uVar1;
  }
  puVar5[8] = param_5;
  iVar4 = 1;
  puVar5[7] = param_4;
  uVar1 = 1;
  if (param_2 == 2) {
    uVar1 = param_6;
  }
  puVar5[9] = uVar1;
  puVar5[10] = param_8;
  if ((param_2 == 3) || (param_2 == 6)) {
    iVar4 = 6;
  }
  uVar2 = 0;
  puVar5[0xb] = iVar4 * param_7;
  if ((param_2 == 3) || (param_2 == 6)) {
    uVar2 = 0x10;
  }
  puVar5[4] = uVar2;
  if ((param_10 & 0x10) != 0) {
    uVar2 = uVar2 | 8;
    puVar5[4] = uVar2;
  }
  if (((*(byte *)(param_1 + 0x18d0) & 1) != 0) && (puVar5[5] == 2)) {
    puVar5[4] = uVar2 | 0x20;
  }
  iVar4 = 1;
  if ((char)local_c8 == '\0') {
    iVar4 = *(int *)(&DAT_144eb26a8 + (longlong)param_2 * 4);
  }
  puVar5[0xd] = iVar4;
  uVar2 = 7;
  puVar5[0xe] = 7;
  if ((param_10 >> 0x11 & 1) == 0) {
    if ((param_10 & 5) != 0) {
      uVar2 = ((~param_10 & 1) + 1) * 0x10 | 7;
LAB_141e5c268:
      puVar5[0xd] = 0;
      iVar4 = 0;
      goto LAB_141e5c26e;
    }
    if ((param_10 >> 0x1a & 1) != 0) {
      uVar2 = 0x27;
      goto LAB_141e5c268;
    }
    if ((param_10 & 2) != 0) {
      uVar2 = 0x17;
      goto LAB_141e5c268;
    }
  }
  else {
    uVar2 = 0xf;
LAB_141e5c26e:
    puVar5[0xe] = uVar2;
  }
  if ((param_10 >> 0x10 & 1) != 0) {
    uVar2 = uVar2 | 8;
    puVar5[0xe] = uVar2;
  }
  *(undefined8 *)(puVar5 + 0xf) = 0;
  *(undefined8 *)(puVar5 + 0x12) = 0;
  if ((iVar4 == 1) && (1 < param_9)) {
    param_9 = 1;
  }
  switch(param_9) {
  case 1:
    puVar5[0xc] = 1;
    break;
  case 2:
    puVar5[0xc] = 2;
    break;
  case 4:
    puVar5[0xc] = 4;
    break;
  case 8:
    puVar5[0xc] = 8;
    break;
  case 0x10:
    puVar5[0xc] = 0x10;
    break;
  case 0x20:
    puVar5[0xc] = 0x20;
    break;
  case 0x40:
    puVar5[0xc] = 0x40;
  }
  if (iVar4 == 1) {
    uVar3 = *(uint *)(param_1 + 0xaf0 + (longlong)(int)puVar5[6] * 0xc);
  }
  else {
    if (iVar4 != 0) goto LAB_141e5c344;
    uVar3 = *(uint *)(param_1 + 0xaf4 + (longlong)(int)puVar5[6] * 0xc);
  }
  if ((uVar3 & 1) == 0) {
    uVar2 = uVar2 & 0xfffffffb;
    puVar5[0xe] = uVar2;
  }
  if ((uVar3 & 2) == 0) {
    uVar2 = uVar2 & 0xfffffff7;
    puVar5[0xe] = uVar2;
  }
  if (-1 < (char)uVar3) {
    uVar2 = uVar2 & 0xffffffef;
    puVar5[0xe] = uVar2;
  }
  if ((uVar3 >> 9 & 1) == 0) {
    puVar5[0xe] = uVar2 & 0xffffffdf;
  }
LAB_141e5c344:
  iVar4 = (*DAT_146ab0090)(*(undefined8 *)(param_1 + 8),puVar5,0,&local_c8);
  if (iVar4 != 0) {
    FUN_141e67d70(iVar4,
                  "VulkanRHI::vkCreateImage(InDevice.GetInstanceHandle(), &ImageCreateInfo, VULKAN_CPU_ALLOCATOR, &Image)"
                  ,"D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp",
                  0x19b);
  }
  local_c0 = CONCAT44(uStack_c4,local_c8);
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x18f0,&local_c0);
  (*DAT_146aaffd8)(*(undefined8 *)(param_1 + 8),CONCAT44(uStack_c4,local_c8),local_b8);
  return CONCAT44(uStack_c4,local_c8);
}



// FUNCTION 141e5c460 FUN_141e5c460 body=143 status=ok
// SIG undefined FUN_141e5c460(void)

void FUN_141e5c460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  HMODULE pHVar2;
  undefined4 local_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  local_38 = 0x3b9aed28;
  local_34 = 0;
  local_2c = 0;
  local_24 = 0;
  uStack_20 = 0;
  local_1c = 0;
  uStack_18 = 0;
  local_14 = 0;
  pHVar2 = GetModuleHandleW((LPCWSTR)0x0);
  uStack_18 = (undefined4)param_1;
  local_14 = (undefined4)((ulonglong)param_1 >> 0x20);
  uStack_20 = SUB84(pHVar2,0);
  local_1c = (undefined4)((ulonglong)pHVar2 >> 0x20);
  iVar1 = (*DAT_146ab0390)(param_2,&local_38,0,param_3);
  if (iVar1 != 0) {
    FUN_141e67d70(iVar1,
                  "VulkanDynamicAPI::vkCreateWin32SurfaceKHR(Instance, &SurfaceCreateInfo, VULKAN_CPU_ALLOCATOR, OutSurface)"
                  ,
                  "D:\\Oak\\main\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\Windows\\VulkanWindowsPlatform.cpp"
                  ,0x9d);
  }
  return;
}



// FUNCTION 141e5c4f0 FUN_141e5c4f0 body=1068 status=ok
// SIG undefined FUN_141e5c4f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141e5c4f0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined4 local_e8;
  undefined4 *local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined4 local_b8 [2];
  longlong local_b0;
  undefined8 local_a8;
  longlong local_98 [2];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  uVar6 = 0;
  local_b8[0] = 3;
  local_b0 = 0;
  local_a8 = 0;
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    lVar3 = operator_new(0x88);
    uVar5 = uVar6;
    if (lVar3 != 0) {
      local_f8 = (undefined8 *)(param_1 + 0xe4);
      local_d0 = CONCAT31(local_d0._1_3_,*(undefined1 *)(param_1 + 0x104));
      local_d8 = &local_b0;
      local_e0 = local_b8;
      local_e8 = *(undefined4 *)(param_1 + 0xdc);
      local_f0 = (undefined8 *)CONCAT44(local_f0._4_4_,*(undefined4 *)(param_1 + 0xd8));
      uVar5 = FUN_141e39080(lVar3,*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x38),
                            *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0xf8));
    }
    *(ulonglong *)(param_1 + 0xf0) = uVar5;
  }
  else {
    local_f8 = (undefined8 *)(param_1 + 0xe4);
    local_d0 = CONCAT31(local_d0._1_3_,*(undefined1 *)(param_1 + 0x104));
    local_d8 = &local_b0;
    local_e0 = local_b8;
    local_e8 = *(undefined4 *)(param_1 + 0xdc);
    local_f0 = (undefined8 *)CONCAT44(local_f0._4_4_,*(undefined4 *)(param_1 + 0xd8));
    FUN_141e51800(*(longlong *)(param_1 + 0xf0),
                  *(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x38),
                  *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0xf8));
  }
  lVar3 = FVulkanCommandBufferManager::GetUploadCmdBuffer
                    (*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18b0) + 0x2d8))
  ;
  uVar5 = uVar6;
  uVar8 = uVar6;
  if (0 < (int)local_a8) {
    do {
      local_c0 = 0;
      local_c8 = 0;
      local_d0 = 1;
      local_d8 = (longlong *)((ulonglong)local_d8 & 0xffffffff00000000);
      local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,1);
      local_e8 = 0;
      *(undefined8 *)(param_1 + 0x20 + uVar5 * 8) = *(undefined8 *)(uVar8 + local_b0);
      uVar1 = *(undefined8 *)(uVar8 + local_b0);
      local_f0 = (undefined8 *)
                 CONCAT44(local_f0._4_4_,(&DAT_1464ca1cc)[(longlong)*(int *)(param_1 + 0xe4) * 10]);
      local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,*(int *)(param_1 + 0xe4));
      uVar4 = FUN_141e67300(*(undefined8 *)(param_1 + 0x18),uVar1,1);
      *(undefined8 *)(param_1 + 0x50 + uVar5 * 0x18) = uVar4;
      *(undefined8 *)(param_1 + 0x58 + uVar5 * 0x18) = uVar1;
      if (DAT_1464c9c14 < 2) {
        LOCK();
        UNLOCK();
        iVar2 = (int)DAT_146aafd58;
        DAT_146aafd58 = DAT_146aafd58 + 1;
        *(int *)(param_1 + 0x60 + uVar5 * 0x18) = iVar2 + 1;
      }
      local_40 = 0;
      local_38 = 0;
      local_f8 = &local_58;
      local_58 = 1;
      local_50 = 1;
      local_48 = 1;
      VulkanRHI::ImagePipelineBarrier
                (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(uVar8 + local_b0),0,1);
      local_f0 = &local_58;
      local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,1);
      (*DAT_146ab0298)(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(uVar8 + local_b0),7,&local_40);
      local_f8 = &local_58;
      VulkanRHI::ImagePipelineBarrier
                (*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(uVar8 + local_b0),1);
      uVar7 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar7;
      uVar8 = uVar8 + 8;
    } while ((int)uVar7 < (int)local_a8);
  }
  FVulkanCommandBufferManager::SubmitUploadCmdBuffer
            (*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18b0) + 0x2d8),0,0);
  lVar3 = operator_new(0x118);
  uVar5 = uVar6;
  if (lVar3 != 0) {
    local_e8 = 9;
    local_f0 = (undefined8 *)CONCAT44(local_f0._4_4_,*(undefined4 *)(param_1 + 0xdc));
    local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,*(undefined4 *)(param_1 + 0xd8));
    uVar5 = FUN_141e574e0(lVar3,*(undefined8 *)(param_1 + 0x18),param_1,
                          *(undefined4 *)(param_1 + 0xe4));
  }
  lVar3 = *(longlong *)(param_1 + 0x98);
  *(ulonglong *)(param_1 + 0x98) = uVar5;
  if (uVar5 != 0) {
    LOCK();
    *(int *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1;
    UNLOCK();
  }
  if (lVar3 != 0) {
    TD3D11Texture2D<FD3D11BaseTexture2D>::Release(lVar3 + 0x68);
  }
  if (local_b0 != 0) {
    FMemory::Free();
  }
  if (DAT_1464c9490 == 1) {
    lVar3 = operator_new(0x110);
    if (lVar3 != 0) {
      local_d8 = local_98;
      local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,9);
      local_e8 = 1;
      local_f0 = (undefined8 *)CONCAT44(local_f0._4_4_,1);
      local_f8 = (undefined8 *)CONCAT44(local_f8._4_4_,*(undefined4 *)(param_1 + 0xdc));
      local_98[0] = 0;
      local_98[1] = 0;
      local_88 = 1;
      local_84 = _DAT_1468b5d78;
      uStack_80 = uRam00000001468b5d7c;
      uStack_7c = uRam00000001468b5d80;
      uStack_78 = uRam00000001468b5d84;
      local_74 = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      uVar6 = FVulkanTexture2D::FVulkanTexture2D
                        (lVar3,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0xe4),
                         *(undefined4 *)(param_1 + 0xd8));
    }
    lVar3 = *(longlong *)(param_1 + 0xa0);
    *(ulonglong *)(param_1 + 0xa0) = uVar6;
    if (uVar6 != 0) {
      LOCK();
      *(int *)(uVar6 + 8) = *(int *)(uVar6 + 8) + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      TD3D11Texture2D<FD3D11BaseTexture2D>::Release(lVar3 + 0x68);
    }
  }
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  return;
}



// FUNCTION 141e5c920 FUN_141e5c920 body=332 status=ok
// SIG undefined FUN_141e5c920(void)

undefined8 * FUN_141e5c920(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_144eb2b80;
  *(undefined1 *)(plVar6 + 5) = 0;
  plVar6[6] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141e5ca70 FUN_141e5ca70 body=332 status=ok
// SIG undefined FUN_141e5ca70(void)

undefined8 * FUN_141e5ca70(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_144eb2b70;
  *(undefined1 *)(plVar6 + 5) = 0;
  plVar6[6] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141e5cbc0 FUN_141e5cbc0 body=332 status=ok
// SIG undefined FUN_141e5cbc0(void)

undefined8 * FUN_141e5cbc0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_144eb2b90;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141e5cd10 FUN_141e5cd10 body=332 status=ok
// SIG undefined FUN_141e5cd10(void)

undefined8 * FUN_141e5cd10(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_144eb2b60;
  *(undefined1 *)(plVar6 + 3) = 0;
  plVar6[4] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 141e5ce60 Destroy body=117 status=ok
// SIG undefined Destroy(void)

void FVulkanFramebuffer::Destroy(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  FUN_141e254e0(param_2 + 0x3b0,7,*(undefined8 *)(param_1 + 0x38));
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  uVar3 = uVar2;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      FUN_141e254e0(param_2 + 0x3b0,4,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + uVar3));
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
      uVar3 = uVar3 + 8;
    } while ((int)uVar1 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 141e5cee0 Destroy body=307 status=ok
// SIG undefined Destroy(void)

undefined8 FVulkanSurface::Destroy(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 in_RAX;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar7;
  undefined8 uVar6;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  if (*(char *)(param_1 + 0x5c) != '\0') {
    cVar2 = IsInRenderingThread();
    if ((cVar2 == '\0') || (DAT_146ab6383 == '\0')) {
      FUN_141e2a260(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    }
    else {
      puVar9 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
      puVar4 = puVar9 + 4;
      if (DAT_146ab6eb0 < puVar4) {
        FMemStackBase::AllocateNewChunk(&DAT_146ab6ea8,0x28);
        puVar9 = (undefined8 *)((longlong)DAT_146ab6ea8 + 7U & 0xfffffffffffffff8);
        puVar4 = puVar9 + 4;
      }
      DAT_146ab6e8c = DAT_146ab6e8c + 1;
      DAT_146ab6ea8 = puVar4;
      *DAT_146ab6e80 = puVar9;
      uVar6 = *(undefined8 *)(param_1 + 8);
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      DAT_146ab6e80 = puVar9 + 1;
      puVar9[1] = 0;
      *puVar9 = &PTR_LAB_144eb2b20;
      puVar9[2] = uVar1;
      puVar9[3] = uVar6;
    }
    uVar8 = 0;
    *(undefined1 *)(param_1 + 0x5c) = 0;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      uVar8 = (ulonglong)*(uint *)(param_1 + 0x38);
      FUN_141e254e0(*(longlong *)(param_1 + 8) + 0x3b0,3);
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    lVar5 = -((longlong)(uVar8 + 0x3ff) >> 10);
    iVar3 = (int)lVar5;
    uVar7 = (undefined4)((ulonglong)lVar5 >> 0x20);
    if ((*(byte *)(param_1 + 0x30) & 7) == 0) {
      LOCK();
      uVar6 = CONCAT44(uVar7,DAT_146ab6300);
      DAT_146ab6300 = DAT_146ab6300 + iVar3;
      UNLOCK();
      return uVar6;
    }
    LOCK();
    in_RAX = CONCAT44(uVar7,DAT_146ab6304);
    UNLOCK();
    DAT_146ab6304 = DAT_146ab6304 + iVar3;
  }
  return in_RAX;
}



// FUNCTION 141e5d020 DestroyViews body=151 status=ok
// SIG undefined DestroyViews(void)

void FVulkanTextureBase::DestroyViews(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0xa0) == '\0') {
    plVar1 = (longlong *)(param_1 + 0x80);
    if (*plVar1 != 0) {
      FUN_141e254e0(*(longlong *)(param_1 + 0x10) + 0x3b0,4);
      *(undefined8 *)(param_1 + 0x88) = 0;
      *plVar1 = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
    }
    plVar2 = *(longlong **)(param_1 + 0x98);
    if ((plVar2 != plVar1) && (*plVar2 != 0)) {
      FUN_141e254e0(*(longlong *)(param_1 + 0x10) + 0x3b0,4);
      plVar2[1] = 0;
      *plVar2 = 0;
      *(undefined4 *)(plVar2 + 2) = 0;
    }
  }
  return;
}



// FUNCTION 141e5d0c0 FUN_141e5d0c0 body=40 status=ok
// SIG undefined FUN_141e5d0c0(void)

void FUN_141e5d0c0(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_141e404d0(*(undefined8 *)(param_1 + 0xf0),param_1 + 0x108);
  *(undefined4 *)(param_1 + 0xe8) = uVar1;
  return;
}



// FUNCTION 141e5d0f0 FUN_141e5d0f0 body=1418 status=ok
// SIG undefined FUN_141e5d0f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e5d0f0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,int param_5
                  ,int param_6,int *param_7)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  undefined1 auStack_4c8 [32];
  undefined4 local_4a8;
  uint local_4a0;
  undefined1 *local_498;
  undefined8 local_488;
  undefined8 *local_480;
  undefined8 local_478;
  longlong local_470;
  undefined8 local_468;
  ulonglong local_460;
  undefined8 *local_458;
  undefined8 local_450;
  longlong local_448;
  undefined8 local_440;
  ulonglong local_438;
  longlong local_430;
  undefined8 local_428;
  undefined8 local_420;
  int *local_418;
  undefined1 local_408 [8];
  undefined4 local_400 [238];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_4c8;
  uVar8 = *(uint *)(param_3 + 0x34);
  uVar2 = *(uint *)(param_2 + 0x34);
  uVar4 = uVar8;
  if (uVar2 <= uVar8) {
    uVar4 = uVar2;
  }
  uVar14 = (ulonglong)uVar4;
  local_418 = param_7;
  iVar18 = uVar2 - uVar4;
  iVar13 = uVar8 - uVar4;
  local_438 = param_1;
  local_430 = param_3;
  lVar9 = FVulkanCommandBufferManager::GetUploadCmdBuffer(*(undefined8 *)(param_1 + 0x2d8));
  local_420 = *(undefined8 *)(lVar9 + 0x40);
  _guard_xfg_dispatch_icall_nop(local_408,0,uVar14 * 0x44);
  if (uVar4 != 0) {
    puVar10 = local_400;
    iVar11 = iVar13;
    do {
      puVar10[6] = iVar11;
      puVar10[-1] = iVar11 + (iVar18 - iVar13);
      *puVar10 = 0;
      puVar10[7] = 0;
      iVar15 = param_5 >> ((byte)iVar11 & 0x1f);
      iVar16 = param_6 >> ((byte)iVar11 & 0x1f);
      puVar10[-2] = 1;
      puVar10[1] = 1;
      puVar10[5] = 1;
      iVar6 = 1;
      if (iVar15 != 0) {
        iVar6 = iVar15;
      }
      puVar10[0xc] = iVar6;
      puVar10[8] = 1;
      puVar10[0xe] = 1;
      iVar6 = 1;
      if (iVar16 != 0) {
        iVar6 = iVar16;
      }
      iVar11 = iVar11 + 1;
      puVar10[0xd] = iVar6;
      uVar14 = uVar14 - 1;
      puVar10 = puVar10 + 0x11;
    } while (uVar14 != 0);
  }
  local_488 = 0;
  local_480 = (undefined8 *)0x0;
  local_478 = 1;
  uVar3 = *(undefined8 *)(local_430 + 0x80);
  local_470 = 0;
  local_468 = 0;
  TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(&local_480,0);
  *local_480 = 0;
  local_480[1] = 0;
  local_480[2] = 0;
  local_480[3] = 0;
  local_480[4] = 0;
  local_480[5] = 0;
  local_480[6] = 0;
  local_480[7] = 0;
  local_480[8] = 0;
  *(undefined4 *)local_480 = 0x2d;
  local_480[5] = uVar3;
  *(undefined4 *)(local_480 + 6) = 1;
  *(uint *)(local_480 + 7) = uVar4;
  *(undefined4 *)(local_480 + 8) = 1;
  local_480[4] = 0xffffffffffffffff;
  *(int *)((longlong)local_480 + 0x34) = iVar13;
  *(undefined4 *)(local_480 + 2) = 0;
  *(undefined4 *)(local_480 + 3) = 0;
  *(undefined4 *)((longlong)local_480 + 0x14) = 0x1000;
  lVar17 = local_438 + 0x2e0;
  *(undefined4 *)((longlong)local_480 + 0x1c) = 7;
  local_488 = local_488 | 0x100000000001;
  iVar11 = FTransitionAndLayoutManager::FindOrAddLayout(lVar17,*(undefined8 *)(param_2 + 0x80),0);
  uVar14 = local_478;
  local_438 = CONCAT44(local_438._4_4_,iVar11);
  if (iVar11 != 6) {
    lVar12 = (longlong)(int)local_478;
    local_428 = *(undefined8 *)(param_2 + 0x80);
    iVar11 = (int)local_478 + 1;
    local_478 = CONCAT44(local_478._4_4_,iVar11);
    if (local_478._4_4_ < iVar11) {
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(&local_480,uVar14 & 0xffffffff);
    }
    lVar1 = lVar12 * 0x48;
    local_480[lVar12 * 9] = 0;
    local_480[lVar12 * 9 + 1] = 0;
    local_480[lVar12 * 9 + 2] = 0;
    local_480[lVar12 * 9 + 3] = 0;
    local_480[lVar12 * 9 + 4] = 0;
    local_480[lVar12 * 9 + 5] = 0;
    local_480[lVar12 * 9 + 6] = 0;
    local_480[lVar12 * 9 + 7] = 0;
    local_480[lVar12 * 9 + 8] = 0;
    local_480[lVar12 * 9 + 5] = local_428;
    *(undefined4 *)(local_480 + lVar12 * 9) = 0x2d;
    *(undefined4 *)(local_480 + lVar12 * 9 + 6) = 1;
    *(uint *)(local_480 + lVar12 * 9 + 7) = uVar4;
    *(undefined4 *)(local_480 + lVar12 * 9 + 8) = 1;
    local_480[lVar12 * 9 + 4] = 0xffffffffffffffff;
    *(int *)(lVar1 + 0x34 + (longlong)local_480) = iVar18;
    uVar7 = FUN_141e48650(local_438 & 0xffffffff);
    puVar5 = local_480;
    uVar8 = FUN_141e26f50(uVar7,local_480 + lVar12 * 9 + 2,local_480 + lVar12 * 9 + 3);
    *(undefined4 *)((longlong)puVar5 + lVar1 + 0x14) = 0x800;
    *(undefined4 *)((longlong)puVar5 + lVar1 + 0x1c) = 6;
    local_488 = CONCAT44(local_488._4_4_,(uint)local_488 | uVar8) | 0x100000000000;
  }
  if ((0 < (int)local_478) || (0 < (int)local_468)) {
    VulkanRHI::FPendingBarrier::InnerExecute(&local_488,lVar9,1);
  }
  if (local_470 != 0) {
    FMemory::Free();
  }
  if (local_480 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  puVar10 = (undefined4 *)
            FTransitionAndLayoutManager::FindOrAddLayoutRW(lVar17,*(undefined8 *)(param_2 + 0x80),0)
  ;
  lVar12 = local_430;
  *puVar10 = 6;
  local_498 = local_408;
  local_4a8 = 7;
  local_4a0 = uVar4;
  (*DAT_146ab0268)(local_420,*(undefined8 *)(param_2 + 0x80),6,*(undefined8 *)(local_430 + 0x80));
  uVar3 = *(undefined8 *)(lVar12 + 0x80);
  local_450 = 1;
  local_460 = 0;
  local_458 = (undefined8 *)0x0;
  local_448 = 0;
  local_440 = 0;
  TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow();
  *local_458 = 0;
  local_458[1] = 0;
  local_458[2] = 0;
  local_458[3] = 0;
  local_458[4] = 0;
  local_458[5] = 0;
  local_458[6] = 0;
  local_458[7] = 0;
  local_458[8] = 0;
  *(undefined4 *)local_458 = 0x2d;
  local_458[5] = uVar3;
  *(undefined4 *)(local_458 + 6) = 1;
  *(uint *)(local_458 + 7) = uVar4;
  *(undefined4 *)(local_458 + 8) = 1;
  local_458[4] = 0xffffffffffffffff;
  *(int *)((longlong)local_458 + 0x34) = iVar13;
  *(undefined4 *)(local_458 + 2) = 0x1000;
  *(undefined4 *)(local_458 + 3) = 7;
  *(undefined4 *)((longlong)local_458 + 0x14) = 0x20;
  *(undefined4 *)((longlong)local_458 + 0x1c) = 5;
  lVar12 = (longlong)(int)local_450;
  local_460 = local_460 | 0x8000001000;
  uVar3 = *(undefined8 *)(param_2 + 0x80);
  iVar13 = (int)local_450 + 1;
  local_450 = CONCAT44(local_450._4_4_,iVar13);
  if (local_450._4_4_ < iVar13) {
    TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(&local_458);
  }
  local_458[lVar12 * 9] = 0;
  local_458[lVar12 * 9 + 1] = 0;
  local_458[lVar12 * 9 + 2] = 0;
  local_458[lVar12 * 9 + 3] = 0;
  local_458[lVar12 * 9 + 4] = 0;
  local_458[lVar12 * 9 + 5] = 0;
  local_458[lVar12 * 9 + 6] = 0;
  local_458[lVar12 * 9 + 7] = 0;
  local_458[lVar12 * 9 + 8] = 0;
  *(undefined4 *)(local_458 + lVar12 * 9) = 0x2d;
  local_458[lVar12 * 9 + 5] = uVar3;
  *(undefined4 *)(local_458 + lVar12 * 9 + 6) = 1;
  *(uint *)(local_458 + lVar12 * 9 + 7) = uVar4;
  *(undefined4 *)(local_458 + lVar12 * 9 + 8) = 1;
  local_458[lVar12 * 9 + 4] = 0xffffffffffffffff;
  *(int *)((longlong)local_458 + lVar12 * 0x48 + 0x34) = iVar18;
  *(undefined4 *)(local_458 + lVar12 * 9 + 2) = 0x800;
  *(undefined4 *)(local_458 + lVar12 * 9 + 3) = 6;
  *(undefined4 *)((longlong)local_458 + lVar12 * 0x48 + 0x14) = 0x20;
  *(undefined4 *)((longlong)local_458 + lVar12 * 0x48 + 0x1c) = 5;
  local_460 = local_460 | 0x8000001000;
  if ((0 < (int)local_450) || (0 < (int)local_440)) {
    VulkanRHI::FPendingBarrier::InnerExecute(&local_460,lVar9,1);
  }
  if (local_448 != 0) {
    FMemory::Free();
  }
  if (local_458 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  puVar10 = (undefined4 *)
            FTransitionAndLayoutManager::FindOrAddLayoutRW
                      (lVar17,*(undefined8 *)(local_430 + 0x80),0);
  *puVar10 = 5;
  puVar10 = (undefined4 *)
            FTransitionAndLayoutManager::FindOrAddLayoutRW(lVar17,*(undefined8 *)(param_2 + 0x80),0)
  ;
  *puVar10 = 5;
  LOCK();
  *local_418 = *local_418 + -1;
  UNLOCK();
  return;
}



// FUNCTION 141e5d680 FUN_141e5d680 body=1319 status=ok
// SIG undefined FUN_141e5d680(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141e5d680(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,int param_7,int *param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_4d8 [32];
  int local_4b8;
  uint local_4b0;
  undefined1 *local_4a8;
  int local_498;
  undefined8 local_490;
  longlong local_488;
  undefined8 local_480;
  longlong local_478;
  undefined8 local_470;
  undefined8 local_468;
  longlong local_460;
  undefined8 local_458;
  longlong local_450;
  undefined8 local_448;
  int local_440;
  longlong local_438;
  longlong local_430;
  undefined8 local_428;
  int *local_420;
  int *local_418;
  undefined1 local_408 [8];
  undefined4 local_400 [238];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_4d8;
  uVar5 = *(uint *)(param_3 + 0x34);
  uVar2 = *(uint *)(param_3 + 0x68);
  if (*(uint *)(param_2 + 0x68) <= *(uint *)(param_3 + 0x68)) {
    uVar2 = *(uint *)(param_2 + 0x68);
  }
  local_418 = param_8;
  uVar1 = *(uint *)(param_2 + 0x34);
  uVar13 = uVar5;
  if (uVar1 <= uVar5) {
    uVar13 = uVar1;
  }
  local_498 = uVar1 - uVar13;
  iVar12 = uVar5 - uVar13;
  local_440 = iVar12;
  local_438 = FVulkanCommandBufferManager::GetUploadCmdBuffer(*(undefined8 *)(param_1 + 0x2d8));
  iVar3 = *(int *)(param_3 + 0xd0);
  local_428 = *(undefined8 *)(local_438 + 0x40);
  local_468 = 0;
  local_460 = 0;
  local_458 = 0;
  local_450 = 0;
  iVar8 = 6;
  local_448 = 0;
  if ((iVar3 < 0) || (iVar3 < 3)) {
LAB_141e5d75a:
    local_4b8 = 1;
  }
  else {
    local_4b8 = iVar8;
    if (iVar3 != 3) {
      if (iVar3 == 5) {
        local_4b8 = *(int *)(param_3 + 200);
      }
      else {
        if (iVar3 != 6) goto LAB_141e5d75a;
        local_4b8 = *(int *)(param_3 + 200) * 6;
      }
    }
  }
  iVar3 = VulkanRHI::FPendingBarrier::AddImageBarrier
                    (&local_468,*(undefined8 *)(param_3 + 0x88),1,uVar13);
  lVar7 = (longlong)iVar3 * 0x48;
  *(int *)(lVar7 + 0x34 + local_460) = iVar12;
  *(undefined4 *)(lVar7 + 0x10 + local_460) = 0;
  *(undefined4 *)(lVar7 + 0x18 + local_460) = 0;
  *(undefined4 *)(lVar7 + 0x14 + local_460) = 0x1000;
  *(undefined4 *)(lVar7 + 0x1c + local_460) = 7;
  local_430 = param_1 + 0x2e0;
  local_468 = local_468 | 0x100000000001;
  local_420 = (int *)FTransitionAndLayoutManager::FindOrAddLayoutRW
                               (local_430,*(undefined8 *)(param_3 + 0x88),0);
  uVar14 = (ulonglong)uVar13;
  *local_420 = 7;
  _guard_xfg_dispatch_icall_nop(local_408,0,uVar14 * 0x44);
  iVar3 = iVar12;
  if (uVar13 != 0) {
    iVar11 = local_498 - iVar12;
    puVar10 = local_400;
    do {
      puVar10[6] = iVar12;
      puVar10[-1] = iVar11 + iVar12;
      *puVar10 = 0;
      puVar10[7] = 0;
      iVar6 = param_6 >> ((byte)iVar12 & 0x1f);
      iVar9 = param_7 >> ((byte)iVar12 & 0x1f);
      puVar10[-2] = 1;
      puVar10[1] = uVar2;
      puVar10[5] = 1;
      iVar3 = 1;
      if (iVar6 != 0) {
        iVar3 = iVar6;
      }
      puVar10[0xc] = iVar3;
      puVar10[8] = uVar2;
      puVar10[0xe] = 1;
      iVar3 = 1;
      if (iVar9 != 0) {
        iVar3 = iVar9;
      }
      iVar12 = iVar12 + 1;
      puVar10[0xd] = iVar3;
      uVar14 = uVar14 - 1;
      puVar10 = puVar10 + 0x11;
      iVar3 = local_440;
    } while (uVar14 != 0);
  }
  iVar12 = FTransitionAndLayoutManager::FindOrAddLayout(local_430,*(undefined8 *)(param_2 + 0x88),0)
  ;
  if (iVar12 != 6) {
    iVar11 = *(int *)(param_2 + 0xd0);
    if ((iVar11 < 0) || (iVar11 < 3)) {
LAB_141e5d8e3:
      local_4b8 = 1;
    }
    else {
      local_4b8 = iVar8;
      if (iVar11 != 3) {
        if (iVar11 == 5) {
          local_4b8 = *(int *)(param_2 + 200);
        }
        else {
          if (iVar11 != 6) goto LAB_141e5d8e3;
          local_4b8 = *(int *)(param_2 + 200) * 6;
        }
      }
    }
    iVar11 = VulkanRHI::FPendingBarrier::AddImageBarrier
                       (&local_468,*(undefined8 *)(param_2 + 0x88),1,uVar13);
    *(int *)((longlong)iVar11 * 0x48 + 0x34 + local_460) = local_498;
    uVar4 = FUN_141e48650(iVar12);
    lVar7 = (longlong)iVar11 * 0x48 + local_460;
    uVar5 = FUN_141e26f50(uVar4,lVar7 + 0x10,lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x14) = 0x800;
    *(undefined4 *)(lVar7 + 0x1c) = 6;
    local_468 = CONCAT44(local_468._4_4_,(uint)local_468 | uVar5) | 0x100000000000;
  }
  if ((0 < (int)local_458) || (0 < (int)local_448)) {
    VulkanRHI::FPendingBarrier::InnerExecute(&local_468,local_438,1);
  }
  local_4a8 = local_408;
  local_4b8 = 7;
  local_4b0 = uVar13;
  (*DAT_146ab0268)(local_428,*(undefined8 *)(param_2 + 0x88),6,*(undefined8 *)(param_3 + 0x88));
  local_490 = 0;
  local_488 = 0;
  local_480 = 0;
  local_478 = 0;
  local_470 = 0;
  iVar11 = *(int *)(param_2 + 0xd0);
  if ((iVar11 < 0) || (iVar11 < 3)) {
LAB_141e5d9f3:
    local_4b8 = 1;
  }
  else {
    local_4b8 = iVar8;
    if (iVar11 != 3) {
      if (iVar11 == 5) {
        local_4b8 = *(int *)(param_2 + 200);
      }
      else {
        if (iVar11 != 6) goto LAB_141e5d9f3;
        local_4b8 = *(int *)(param_2 + 200) * 6;
      }
    }
  }
  iVar11 = VulkanRHI::FPendingBarrier::AddImageBarrier
                     (&local_490,*(undefined8 *)(param_2 + 0x88),1,uVar13);
  lVar7 = (longlong)iVar11 * 0x48;
  *(int *)(lVar7 + 0x34 + local_488) = local_498;
  uVar4 = FUN_141e48650(iVar12);
  *(undefined4 *)(lVar7 + 0x10 + local_488) = 0x800;
  *(undefined4 *)(lVar7 + 0x18 + local_488) = 6;
  local_490 = local_490 | 0x1000;
  uVar5 = FUN_141e26f50(uVar4,local_488 + 0x14 + lVar7,local_488 + 0x1c + lVar7);
  iVar11 = *(int *)(param_3 + 0xd0);
  if ((-1 < iVar11) && (2 < iVar11)) {
    if (iVar11 == 3) goto LAB_141e5daa8;
    if (iVar11 == 5) {
      iVar8 = *(int *)(param_3 + 200);
      goto LAB_141e5daa8;
    }
    if (iVar11 == 6) {
      iVar8 = *(int *)(param_3 + 200) * 6;
      goto LAB_141e5daa8;
    }
  }
  iVar8 = 1;
LAB_141e5daa8:
  local_4b8 = iVar8;
  local_490._4_4_ = local_490._4_4_ | uVar5;
  iVar8 = VulkanRHI::FPendingBarrier::AddImageBarrier
                    (&local_490,*(undefined8 *)(param_3 + 0x88),1,uVar13);
  lVar7 = (longlong)iVar8 * 0x48;
  *(int *)(lVar7 + 0x34 + local_488) = iVar3;
  *(undefined4 *)(lVar7 + 0x10 + local_488) = 0x1000;
  *(undefined4 *)(lVar7 + 0x18 + local_488) = 7;
  local_490._0_4_ = (uint)local_490 | 0x1000;
  uVar5 = FUN_141e26f50(uVar4,lVar7 + local_488 + 0x14,local_488 + 0x1c + lVar7);
  local_490 = CONCAT44(local_490._4_4_ | uVar5,(uint)local_490);
  *local_420 = iVar12;
  if ((0 < (int)local_480) || (0 < (int)local_470)) {
    VulkanRHI::FPendingBarrier::InnerExecute(&local_490,local_438,1);
  }
  if (local_478 != 0) {
    FMemory::Free();
  }
  if (local_488 != 0) {
    FMemory::Free();
  }
  LOCK();
  *local_418 = *local_418 + -1;
  UNLOCK();
  if (local_450 != 0) {
    FMemory::Free();
  }
  if (local_460 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141e5dbb0 FUN_141e5dbb0 body=268 status=ok
// SIG undefined FUN_141e5dbb0(void)

byte FUN_141e5dbb0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong local_38 [2];
  
  uVar5 = 0;
  plVar1 = param_2 + 2;
  iVar6 = 4;
  uVar3 = uVar5;
  local_38[0] = param_1;
  if (*(int *)(param_2 + 8) != 0) {
    plVar4 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar4 = plVar1;
    }
    if (plVar4 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar4 + 8))();
    }
  }
  iVar2 = (*(code *)*param_2)(uVar3,local_38);
  for (; (iVar2 < 0 && (0 < iVar6)); iVar6 = iVar6 + -1) {
    FUN_141e66680(param_1,*(undefined8 *)(param_1 + 0xf8),1);
    FUN_141e2fe70(*(undefined8 *)(param_1 + 0x18));
    FUN_141e2a740(*(undefined8 *)(param_1 + 0x18));
    uVar3 = uVar5;
    local_38[0] = param_1;
    if (*(int *)(param_2 + 8) != 0) {
      plVar4 = (longlong *)param_2[6];
      if ((longlong *)param_2[6] == (longlong *)0x0) {
        plVar4 = plVar1;
      }
      if (plVar4 != (longlong *)0x0) {
        uVar3 = (**(code **)(*plVar4 + 8))();
      }
    }
    iVar2 = (*(code *)*param_2)(uVar3,local_38);
  }
  if (*(int *)(param_2 + 8) != 0) {
    plVar4 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar4 = plVar1;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (param_2[6] != 0) {
    FMemory::Free();
  }
  return (byte)((uint)iVar2 >> 0x1f) ^ 1;
}



// FUNCTION 141e5dcc0 FUN_141e5dcc0 body=540 status=ok
// SIG undefined FUN_141e5dcc0(void)

void FUN_141e5dcc0(longlong param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  uint local_res8 [2];
  undefined4 *local_18;
  uint local_10;
  undefined4 local_c;
  
  uVar6 = *(uint *)(*(longlong *)(param_1 + 0xe0) + 0x18d0);
  if ((uVar6 & 0x40) == 0) {
    if ((char)uVar6 < '\0') {
      local_res8[0] = 0;
      local_18 = (undefined4 *)0x0;
      local_c = 0;
      uVar1 = **(undefined8 **)(*(longlong *)(param_1 + 0xe0) + 0x1418);
      (*DAT_146ab03b8)(uVar1,local_res8,0);
      uVar6 = local_res8[0];
      if (local_res8[0] != 0) {
        local_10 = local_res8[0];
        puVar2 = (undefined4 *)0x0;
        puVar7 = (undefined4 *)0x0;
        if (0 < (int)local_res8[0]) {
          FUN_140fd5770(&local_18,0);
          puVar2 = local_18;
          puVar7 = local_18;
        }
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar2 = 0x3b9deeb0;
          *(undefined8 *)(puVar2 + 1) = 0;
          *(undefined8 *)(puVar2 + 3) = 0;
          *(undefined8 *)(puVar2 + 5) = 0;
          puVar2[7] = 0;
          puVar2 = puVar2 + 8;
        }
        (*DAT_146ab03b8)(uVar1,local_res8,puVar7);
        uVar6 = 0;
        if (local_res8[0] != 0) {
          do {
            if (*(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x124)) {
              lVar4 = *(longlong *)(param_1 + 0x130);
              if (*(longlong *)(param_1 + 0x130) == 0) {
                lVar4 = param_1 + 0x128;
              }
              iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x138) - 1U &
                                       (longlong)(int)puVar7[(longlong)(int)uVar6 * 8 + 6]) * 4);
              if (iVar3 != -1) {
                do {
                  if (*(int *)((longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0xf0)) ==
                      puVar7[(longlong)(int)uVar6 * 8 + 6]) break;
                  iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)(param_1 + 0xf0));
                } while (iVar3 != -1);
              }
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < local_res8[0]);
        }
        plVar5 = (longlong *)FUN_141672640();
        (**(code **)(*plVar5 + 0x48))(plVar5);
        plVar5 = (longlong *)FUN_141672640();
        (**(code **)(*plVar5 + 0x18))(plVar5);
        if (puVar7 != (undefined4 *)0x0) {
          FMemory::Free(puVar7);
        }
      }
    }
  }
  else if (*param_2 != 0) {
    uVar8 = (ulonglong)*param_2;
    do {
      param_2 = param_2 + 1;
      if (*(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x124)) {
        lVar4 = *(longlong *)(param_1 + 0x130);
        if (*(longlong *)(param_1 + 0x130) == 0) {
          lVar4 = param_1 + 0x128;
        }
        iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x138) - 1U & (longlong)(int)*param_2
                                 ) * 4);
        if (iVar3 != -1) {
          do {
            if (*(uint *)((longlong)iVar3 * 0x20 + *(longlong *)(param_1 + 0xf0)) == *param_2)
            break;
            iVar3 = *(int *)((longlong)iVar3 * 0x20 + 0x18 + *(longlong *)(param_1 + 0xf0));
          } while (iVar3 != -1);
        }
      }
      uVar8 = uVar8 - 1;
      if (uVar8 == 0) {
        return;
      }
    } while( true );
  }
  return;
}



// FUNCTION 141e5dee0 FUN_141e5dee0 body=235 status=ok
// SIG undefined FUN_141e5dee0(void)

void FUN_141e5dee0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  for (iVar2 = *(int *)(param_1 + 1); iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = (undefined8 *)*plVar3;
    *puVar1 = &PTR_FUN_144ea4358;
    FUN_141e2d4b0(puVar1[5] + 0x3f0,0,puVar1[8] + 0x58);
    if ((undefined8 *)puVar1[8] != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)puVar1[8])();
    }
    puVar1[8] = 0;
    puVar1[3] = &PTR_FUN_144da0c80;
    *puVar1 = &PTR_FUN_144da0c50;
    if (puVar1[1] != 0) {
      FMemory::Free();
    }
    FMemory::Free(*plVar3);
    plVar3 = plVar3 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 141e5dfd0 FUN_141e5dfd0 body=117 status=ok
// SIG undefined FUN_141e5dfd0(void)

void FUN_141e5dfd0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_141e5e050();
  cVar1 = FUN_141e5bab0(param_1,param_2);
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



// FUNCTION 141e5e050 FUN_141e5e050 body=407 status=ok
// SIG undefined FUN_141e5e050(void)

void FUN_141e5e050(longlong *param_1,int param_2)

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
      if (bVar3) goto LAB_141e5e121;
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
LAB_141e5e121:
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
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>
                ((longlong)iStack_1c * 0x120 + 0x110 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_141ddd500(param_1,param_2);
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



// FUNCTION 141e5e1f0 FUN_141e5e1f0 body=14 status=ok
// SIG undefined FUN_141e5e1f0(void)

void FUN_141e5e1f0(void)

{
  FUN_141e5dfd0(&DAT_1464c9720,0);
  return;
}



// FUNCTION 141e5e220 FUN_141e5e220 body=194 status=ok
// SIG undefined FUN_141e5e220(void)

void FUN_141e5e220(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  
  cVar2 = FUN_14164b510();
  if (cVar2 != '\0') {
    lVar1 = param_1[7];
    while (lVar1 != 0) {
      (**(code **)(*param_1 + 0x20))(param_1);
      lVar1 = param_1[7];
    }
    *(undefined1 *)(param_1 + 0x1b) = 1;
  }
  puVar3 = (undefined8 *)0x0;
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
    puVar3 = (undefined8 *)param_1[6];
  }
  if ((*(char *)((longlong)param_1 + 10) != '\0') && ((char)param_1[1] != '\0')) {
    FUN_141e2fe70(*(undefined8 *)(param_1[0x1d] + 0x188));
    SetEmitDrawEvents(*(undefined1 *)((longlong)param_1 + 0xd));
    FUN_141ec0990(param_1[6]);
    DAT_146ab62fc = 0;
    puVar3 = (undefined8 *)param_1[6];
    *(undefined1 *)((longlong)param_1 + 10) = 0;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
    param_1[6] = 0;
  }
  FUN_1415b23e0(DAT_146ab632c,DAT_146ab632c,0);
  FUN_141ec2500(param_1);
  return;
}



// FUNCTION 141e5e2f0 FUN_141e5e2f0 body=235 status=ok
// SIG undefined FUN_141e5e2f0(void)

void FUN_141e5e2f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if ((DAT_146ab6339 != '\0') && (*(char *)(param_1 + 0x18) != '\0')) {
    if (param_2 == 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x2d8);
      if (*(longlong *)(lVar1 + 0x78) != 0) {
        FVulkanCommandBufferManager::SubmitUploadCmdBuffer(lVar1,0,0);
      }
      param_2 = *(longlong *)(lVar1 + 0x70);
    }
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x38) * 2;
    (*DAT_146ab02f0)(*(undefined8 *)(param_2 + 0x40),1,
                     *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10),iVar2 + 1);
    FVulkanCmdBuffer::AddPendingTimestampQuery
              (param_2,iVar2,2,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10),
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 0x18));
    *(longlong *)
     (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x48) + ((longlong)iVar2 + 1) * 0x10) = param_2;
    *(undefined8 *)
     (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x48) + 8 + ((longlong)iVar2 + 1) * 0x10) =
         *(undefined8 *)(param_2 + 0x98);
    lVar1 = *(longlong *)(param_1 + 0x28);
    uVar3 = *(int *)(lVar1 + 0x3c) + 1;
    uVar4 = *(uint *)(lVar1 + 0x40);
    if (uVar3 <= *(uint *)(lVar1 + 0x40)) {
      uVar4 = uVar3;
    }
    *(uint *)(lVar1 + 0x3c) = uVar4;
    *(undefined2 *)(param_1 + 0x18) = 0x100;
  }
  return;
}


