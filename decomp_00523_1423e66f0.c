// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1423e66f0 NotEqual_PrimaryAssetId body=24 status=ok
// SIG undefined NotEqual_PrimaryAssetId(void)

ulonglong UKismetSystemLibrary::NotEqual_PrimaryAssetId(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = *param_2;
  if ((*param_1 == uVar1) && (uVar1 = param_2[1], param_1[1] == uVar1)) {
    return uVar1 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)(uVar1 >> 8),1);
}



// FUNCTION 1423e6710 FUN_1423e6710 body=603 status=ok
// SIG undefined FUN_1423e6710(void)

undefined8 * FUN_1423e6710(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined1 local_res8 [8];
  int local_res18 [2];
  undefined8 *local_res20;
  int *local_48;
  undefined8 **ppuStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  
  puVar5 = (undefined8 *)0x0;
  local_res20 = (undefined8 *)0x0;
  local_res18[0] = FCrc::MemCrc_DEPRECATED(param_2,0x10,0);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar4 +
                    ((longlong)(int)param_1[9] - 1U & (longlong)local_res18[0]) * 4);
    if (iVar1 != -1) {
      lVar3 = *param_1;
      iVar8 = iVar1;
      do {
        if (*(int *)(lVar3 + (longlong)iVar8 * 0x18) == local_res18[0]) {
          if (iVar8 != -1) goto joined_r0x0001423e6860;
          break;
        }
        iVar8 = *(int *)(lVar3 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  if (((char)param_1[0xb] == '\0') || (cVar2 = FWeakObjectPtr::IsValid(param_1 + 10), cVar2 == '\0')
     ) {
    ppuStack_40 = (undefined8 **)local_res8;
    local_res8[0] = 0;
    local_48 = (int *)&DAT_14060d670;
    local_38 = 0x4060d670;
    uStack_34 = 1;
    puStack_30 = (undefined1 *)ppuStack_40;
    lVar3 = FUN_1415d8310(&local_38,&DAT_146216a38);
    lVar3 = operator_new(0x158,lVar3 + 0x18,1);
    if (lVar3 != 0) {
      local_48 = (int *)0x3e;
      uVar6 = (**(code **)(**(longlong **)(DAT_146b17150 + 0x3c0) + 0x2a8))
                        (*(longlong **)(DAT_146b17150 + 0x3c0),0,0);
      puVar5 = (undefined8 *)FUN_1423e4450(lVar3,uVar6,param_2,local_48);
    }
  }
  else {
    ppuStack_40 = (undefined8 **)local_res8;
    local_res8[0] = 0;
    local_48 = (int *)&DAT_14060d670;
    local_38 = 0x4060d670;
    uStack_34 = 1;
    puStack_30 = (undefined1 *)ppuStack_40;
    lVar3 = FUN_1415d8310(&local_38,&DAT_146216a38);
    lVar3 = operator_new(0x158,lVar3 + 0x18,1);
    if (lVar3 != 0) {
      plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 10);
      puVar5 = (undefined8 *)FName::FName(&local_48,"GizmoColor",1);
      uVar6 = (**(code **)(*plVar4 + 0x2a8))(plVar4,0,0);
      puVar5 = (undefined8 *)FUN_1423e4450(lVar3,uVar6,param_2,*puVar5);
    }
  }
  local_48 = local_res18;
  ppuStack_40 = &local_res20;
  local_res20 = puVar5;
  FUN_141711280(param_1,local_res8,&local_48,0);
  return local_res20;
joined_r0x0001423e6860:
  if (iVar1 == -1) {
LAB_1423e6890:
    puVar9 = puVar5;
LAB_1423e6893:
    puVar7 = puVar9 + 1;
    if (puVar9 == (undefined8 *)0x0) {
      puVar7 = puVar5;
    }
    return (undefined8 *)*puVar7;
  }
  puVar9 = (undefined8 *)(lVar3 + (longlong)iVar1 * 0x18);
  if (*(int *)(lVar3 + (longlong)iVar1 * 0x18) == local_res18[0]) {
    if (iVar1 != -1) goto LAB_1423e6893;
    goto LAB_1423e6890;
  }
  iVar1 = *(int *)(puVar9 + 2);
  goto joined_r0x0001423e6860;
}



// FUNCTION 1423e6990 FUN_1423e6990 body=52 status=ok
// SIG undefined FUN_1423e6990(void)

undefined8 FUN_1423e6990(undefined8 param_1,ulonglong param_2)

{
  FUN_140ce2670();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x878);
  }
  return param_1;
}



// FUNCTION 1423e69d0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
AARSharedWorldPlayerController::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1404575e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x578);
  }
  return param_1;
}



// FUNCTION 1423e6a10 `scalar_deleting_destructor' body=82 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FCanvasTriangleItem::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1450861e0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f4c5f0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1423e6a70 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FConsoleOutputDevice::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1423e6ab0 `scalar_deleting_destructor' body=107 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FControlChannelOutBunch::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 1423e6b20 FUN_1423e6b20 body=329 status=ok
// SIG undefined FUN_1423e6b20(void)

longlong FUN_1423e6b20(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x470);
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x440) != 0) {
    FMemory::Free();
  }
  FUN_1416b5c20(param_1 + 0x430);
  if (*(longlong *)(param_1 + 0x420) != 0) {
    FMemory::Free();
  }
  iVar1 = *(int *)(param_1 + 0x418);
  plVar2 = *(longlong **)(param_1 + 0x410);
  if (iVar1 != 0) {
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 6;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    plVar2 = *(longlong **)(param_1 + 0x410);
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  if (*(longlong *)(param_1 + 0x400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3a0) != 0) {
    FMemory::Free();
  }
  FUN_14271e9f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4a0);
  }
  return param_1;
}



// FUNCTION 1423e6c70 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FInBunch::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 1423e6cc0 `scalar_deleting_destructor' body=107 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UCurveTable::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  *(undefined ***)(param_1 + 0x28) = &PTR__purecall_1450709b0;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1423e6d30 `scalar_deleting_destructor' body=96 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UDataTable::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1423e6d90 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UReporterGraph::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FUN_1423e5e80(param_1 + 0x60);
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x50);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 1423e6de0 FUN_1423e6de0 body=641 status=ok
// SIG undefined FUN_1423e6de0(void)

void FUN_1423e6de0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint *puVar13;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  uint uStack_80;
  int iStack_7c;
  undefined1 local_78 [16];
  longlong *local_68;
  undefined2 local_60;
  longlong *local_58;
  undefined8 uStack_50;
  uint *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  local_88 = (uint *)CONCAT44(local_88._4_4_,(undefined4)local_88);
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (local_88 = (uint *)CONCAT44(local_88._4_4_,(undefined4)local_88),
     *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x60) != 0)) {
    plVar1 = (longlong *)(param_1 + 0x30);
    iVar2 = *(int *)(param_1 + 0x58);
    puStack_48 = (uint *)(param_1 + 0x40);
    local_98 = 0x100000000;
    local_88._4_4_ = 0;
    uStack_80 = 0;
    if (iVar2 != 0) {
      puVar13 = *(uint **)(param_1 + 0x50);
      if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
        puVar13 = puStack_48;
      }
      uVar10 = *puVar13;
      uStack_80 = 0;
      iVar11 = 0;
      while (uVar10 == 0) {
        uStack_80 = uStack_80 + 0x20;
        uVar9 = (ulonglong)local_98 >> 0x20;
        local_98 = CONCAT44((int)uVar9,iVar11 + 1);
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar11) goto LAB_1423e6ebd;
        uVar10 = puVar13[(longlong)iVar11 + 1];
        iVar11 = iVar11 + 1;
      }
      uVar10 = -uVar10 & uVar10;
      iVar11 = 0x1f;
      if (uVar10 != 0) {
        for (; uVar10 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      local_98 = CONCAT44(uVar10,(undefined4)local_98);
      if (uVar10 == 0) {
        iVar11 = 0x20;
      }
      else {
        iVar11 = 0x1f - iVar11;
      }
      local_88._4_4_ = (uStack_80 - iVar11) + 0x1f;
      if (iVar2 < local_88._4_4_) {
LAB_1423e6ebd:
        local_88._4_4_ = iVar2;
      }
    }
    auStack_40._4_4_ = local_88._4_4_;
    auStack_40._0_4_ = 0xffffffff;
    auStack_40._8_4_ = uStack_80;
    auStack_40._12_4_ = iStack_7c;
    uStack_50 = local_98;
    local_60 = 0;
    local_30._0_4_ = SUB84(plVar1,0);
    local_30._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
    uStack_80 = 0xffffffff;
    iStack_7c = local_88._4_4_;
    uStack_90 = local_98;
    local_78._8_4_ = (undefined4)local_30;
    local_78._0_8_ = auStack_40._8_8_;
    local_78._12_4_ = local_30._4_4_;
    bVar8 = local_88._4_4_ < *(int *)(param_1 + 0x58);
    local_68 = plVar1;
    local_58 = plVar1;
    local_30 = plVar1;
    local_88 = puStack_48;
    if (bVar8) {
      do {
        lVar3 = *(longlong *)(*plVar1 + 8 + (longlong)iStack_7c * 0x18);
        if (lVar3 != 0) {
          lVar12 = *(longlong *)(param_2 + 8);
          if (lVar12 == 0) {
            FReferenceCollector::CreateVerySlowReferenceCollectorArchive(param_2);
            lVar12 = *(longlong *)(param_2 + 8);
          }
          uVar4 = *(undefined8 *)(lVar12 + 0x90);
          uVar5 = *(undefined8 *)(lVar12 + 0x78);
          uVar6 = *(undefined8 *)(lVar12 + 0x98);
          uVar7 = *(undefined8 *)(lVar12 + 0xa0);
          *(longlong *)(lVar12 + 0x90) = param_1;
          *(undefined8 *)(lVar12 + 0x78) = 0;
          *(undefined8 *)(lVar12 + 0x98) = 0;
          *(undefined8 *)(lVar12 + 0xa0) = 0;
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0x298))
                    (*(longlong **)(param_1 + 0x28),lVar12,lVar3);
          *(undefined8 *)(lVar12 + 0x90) = uVar4;
          *(undefined8 *)(lVar12 + 0x78) = uVar5;
          *(undefined8 *)(lVar12 + 0x98) = uVar6;
          *(undefined8 *)(lVar12 + 0xa0) = uVar7;
        }
        uStack_80 = uStack_80 & ~uStack_90._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
      } while (iStack_7c < (int)local_88[6]);
      if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
        TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
      }
    }
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 1423e7070 FUN_1423e7070 body=354 status=ok
// SIG undefined FUN_1423e7070(void)

void FUN_1423e7070(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  longlong local_res10 [2];
  undefined8 local_res20;
  longlong *local_38;
  undefined8 *local_30;
  
  plVar4 = *(longlong **)(param_1 + 0x28);
  plVar3 = plVar4;
  local_res10[0] = param_2;
  if (plVar4 == (longlong *)0x0) {
    plVar3 = (longlong *)FTableRowBase::StaticStruct();
    plVar4 = *(longlong **)(param_1 + 0x28);
  }
  lVar2 = local_res10[0];
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)FTableRowBase::StaticStruct();
  }
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
    lVar5 = *(longlong *)(param_1 + 0x70);
    if (*(longlong *)(param_1 + 0x70) == 0) {
      lVar5 = param_1 + 0x68;
    }
    iVar1 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                             (longlong)*(int *)(param_1 + 0x78) - 1U) * 4);
    if (iVar1 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x30);
      do {
        lVar6 = (longlong)iVar1;
        if (*(longlong *)(lVar5 + lVar6 * 0x18) == lVar2) {
          if (iVar1 != -1) {
            lVar2 = *(longlong *)(lVar5 + 8 + lVar6 * 0x18);
            TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
            ::Remove(param_1 + 0x30);
            if (lVar2 != 0) {
              (**(code **)(*plVar4 + 0x2b0))(plVar4,lVar2,1);
              FMemory::Free(lVar2);
            }
          }
          break;
        }
        iVar1 = *(int *)(lVar5 + 0x10 + lVar6 * 0x18);
      } while (iVar1 != -1);
    }
  }
  local_res20 = FMemory::Malloc((longlong)
                                ((int)plVar3[8] + -1 + *(int *)((longlong)plVar3 + 0x44) &
                                -*(int *)((longlong)plVar3 + 0x44)),0);
  (**(code **)(*plVar3 + 0x2a8))(plVar3,local_res20,1);
  FUN_141717f80(plVar3,local_res20,param_3,1);
  local_38 = local_res10;
  local_30 = &local_res20;
  FUN_1404a88c0(param_1 + 0x30,local_res8,&local_38,0);
  return;
}



// FUNCTION 1423e71e0 FUN_1423e71e0 body=180 status=ok
// SIG undefined FUN_1423e71e0(void)

void FUN_1423e71e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  
  UPackageMapClient::AppendExportBunches(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x68));
  if (*(char *)(*(longlong *)(param_1 + 0x28) + 0x17e8) == '\0') {
    iVar1 = *(int *)(param_1 + 0x178);
    if (*(int *)(param_1 + 0x178) != 0) {
      if (iVar1 != 0) {
        iVar2 = (int)param_2[1];
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + iVar1) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
          iVar2 = (int)param_2[1];
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_2 + (longlong)iVar2 * 8),*(void **)(param_1 + 0x170),
                   (longlong)iVar1 << 3);
        *(int *)(param_2 + 1) = (int)param_2[1] + iVar1;
      }
      *(undefined4 *)(param_1 + 0x178) = 0;
      if (*(int *)(param_1 + 0x17c) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x170,0);
      }
    }
  }
  return;
}



// FUNCTION 1423e72b0 FUN_1423e72b0 body=423 status=ok
// SIG undefined FUN_1423e72b0(void)

void FUN_1423e72b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined2 local_res8 [4];
  undefined1 local_118 [144];
  longlong local_88;
  undefined8 local_78;
  longlong local_28;
  longlong local_18;
  
  if ((*(char *)(*(longlong *)(param_1 + 0x28) + 0x17e8) == '\0') && (0 < *(int *)(param_1 + 0x168))
     ) {
    TArray<FNetworkGUID,FDefaultAllocator>::Append<FNetworkGUID,FDefaultAllocator>
              (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x68) + 800,param_1 + 0x160);
    *(undefined4 *)(param_1 + 0x168) = 0;
    if (*(int *)(param_1 + 0x16c) != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x160,0);
    }
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x68);
  if (0 < *(int *)(lVar1 + 0x328)) {
    FOutBunch::FOutBunch(local_118,param_2);
    (**(code **)(*param_2 + 0x168))(param_2);
    plVar2 = (longlong *)param_2[1];
    local_res8[0] = *(undefined2 *)(lVar1 + 0x328);
    if ((undefined2 *)plVar2[1] < (undefined2 *)*plVar2 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res8,2);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res8,2);
      }
    }
    else {
      local_res8[0] = *(undefined2 *)*plVar2;
      *plVar2 = *plVar2 + 2;
    }
    iVar3 = 0;
    if (0 < *(int *)(lVar1 + 0x328)) {
      do {
        (**(code **)(*param_2 + 0x68))(param_2,*(longlong *)(lVar1 + 800) + (longlong)iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(lVar1 + 0x328));
    }
    (**(code **)(*param_2 + 0x58))(param_2,local_88,local_78);
    *(byte *)((longlong)param_2 + 0xe9) = *(byte *)((longlong)param_2 + 0xe9) | 4;
    *(undefined4 *)(lVar1 + 0x328) = 0;
    if (*(int *)(lVar1 + 0x32c) != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo((longlong *)(lVar1 + 800),0);
    }
    if (local_18 != 0) {
      FMemory::Free();
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(local_118);
  }
  return;
}



// FUNCTION 1423e7460 FUN_1423e7460 body=347 status=ok
// SIG undefined FUN_1423e7460(void)

void FUN_1423e7460(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined2 local_res8 [4];
  undefined1 local_118 [144];
  longlong local_88;
  undefined8 local_78;
  longlong local_28;
  longlong local_18;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x68);
  if (0 < *(int *)(lVar1 + 0x328)) {
    FOutBunch::FOutBunch(local_118);
    (**(code **)(*param_2 + 0x168))(param_2);
    plVar2 = (longlong *)param_2[1];
    local_res8[0] = *(undefined2 *)(lVar1 + 0x328);
    if ((undefined2 *)plVar2[1] < (undefined2 *)*plVar2 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res8,2);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res8,2);
      }
    }
    else {
      local_res8[0] = *(undefined2 *)*plVar2;
      *plVar2 = *plVar2 + 2;
    }
    iVar3 = 0;
    if (0 < *(int *)(lVar1 + 0x328)) {
      do {
        (**(code **)(*param_2 + 0x68))(param_2,*(longlong *)(lVar1 + 800) + (longlong)iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(lVar1 + 0x328));
    }
    (**(code **)(*param_2 + 0x58))(param_2,local_88,local_78);
    *(byte *)((longlong)param_2 + 0xe9) = *(byte *)((longlong)param_2 + 0xe9) | 4;
    *(undefined4 *)(lVar1 + 0x328) = 0;
    if (*(int *)(lVar1 + 0x32c) != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo((longlong *)(lVar1 + 800),0);
    }
    if (local_18 != 0) {
      FMemory::Free();
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(local_118);
  }
  return;
}



// FUNCTION 1423e75c0 FUN_1423e75c0 body=184 status=ok
// SIG undefined FUN_1423e75c0(void)

void FUN_1423e75c0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(longlong **)(param_1 + 0x7b8) != (longlong *)0x0) &&
     (lVar2 = (**(code **)(**(longlong **)(param_1 + 0x7b8) + 0x6e8))(), lVar2 != 0)) {
    lVar3 = UUGPlayerInputComponent::GetPrivateStaticClass();
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
      FUN_14246fd50(lVar2 + 0x210,*(float *)(param_1 + 0x864) * *(float *)(param_1 + 0x860));
      *(float *)(lVar2 + 0x21c) = *(float *)(param_1 + 0x868) * *(float *)(param_1 + 0x860);
      *(float *)(lVar2 + 0x220) = *(float *)(param_1 + 0x86c) * *(float *)(param_1 + 0x860);
    }
  }
  return;
}



// FUNCTION 1423e76c0 BeginDestroy body=39 status=ok
// SIG undefined BeginDestroy(void)

void UChannel::BeginDestroy(longlong param_1)

{
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    FUN_1423e8eb0(param_1,1);
  }
  FUN_1417502d0(param_1);
  return;
}



// FUNCTION 1423e76f0 FUN_1423e76f0 body=1257 status=ok
// SIG undefined FUN_1423e76f0(void)

void FUN_1423e76f0(longlong param_1,char param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  void *pvVar12;
  void *pvVar13;
  void *pvVar14;
  undefined1 local_res8 [8];
  uint local_res18;
  int local_res20 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  longlong local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined8 *local_60;
  undefined8 local_58;
  longlong local_50;
  char local_48;
  undefined8 local_40;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    iVar1 = *(int *)((longlong)plVar2 + 0xc);
    pvVar13 = (void *)0x0;
    pvVar14 = pvVar13;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar10 = iVar1 >> 0x1f & 0xffff;
      uVar5 = iVar1 + uVar10;
      pvVar14 = (void *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                        (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18);
    }
    if ((((*(uint *)((longlong)pvVar14 + 8) >> 0x1d & 1) == 0) &&
        (((*(longlong *)(param_1 + 0xf0) == 0 ||
          (plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xf0) + 0x58), plVar3 == (longlong *)0x0)
          ) || (cVar4 = (**(code **)(*plVar3 + 0x3a0))(), cVar4 == '\0')))) &&
       (((param_2 == '\0' || (*(longlong *)(param_1 + 0xf8) == 0)) ||
        (*(int *)(*(longlong *)(param_1 + 0xf8) + 0xf0) < 1)))) {
      FUN_142725990(*(undefined8 *)(param_1 + 0x2b0),*(undefined8 *)(param_1 + 0x2c0),plVar2);
      if (0 < *(int *)(param_1 + 600)) {
        local_res18 = 0;
        pvVar14 = pvVar13;
        pvVar9 = pvVar13;
        do {
          uVar5 = (uint)pvVar9;
          lVar8 = *(longlong *)(param_1 + 0x250);
          if (*(longlong *)(param_1 + 0x250) == 0) {
            lVar8 = param_1 + 0x150;
          }
          lVar8 = *(longlong *)(lVar8 + (longlong)pvVar14);
          lVar6 = UObject::FindFunction(plVar2,*(undefined8 *)(lVar8 + 0x48));
          if (lVar6 != 0) {
            cVar4 = *(char *)(lVar6 + 0x8c);
            if (cVar4 == '\0') {
              (**(code **)(*plVar2 + 0x208))(plVar2,lVar6,0);
            }
            else if (cVar4 == '\x01') {
              (**(code **)(*plVar2 + 0x208))
                        (plVar2,lVar6,
                         (longlong)*(int *)(lVar8 + 0x44) + **(longlong **)(param_1 + 0x2c0));
            }
            else if (cVar4 == '\x02') {
              uStack_80 = local_res8;
              local_res8[0] = 0;
              local_88 = 0x4060d670;
              uStack_84 = 1;
              lVar7 = FUN_1415d8310(&local_88,&DAT_146216a38);
              local_60 = (undefined8 *)(lVar7 + 0x18);
              local_58 = *local_60;
              local_50 = *(longlong *)(lVar7 + 0x28);
              local_48 = '\0';
              local_40 = *(undefined8 *)(lVar7 + 0x30);
              *(undefined8 ***)(lVar7 + 0x30) = &local_60;
              *(int *)(lVar7 + 0x38) = *(int *)(lVar7 + 0x38) + 1;
              uStack_80 = local_res8;
              local_88 = 0x4060d670;
              uStack_84 = 1;
              local_res8[0] = 0;
              lVar7 = FUN_1415d8310(&local_88,&DAT_146216a38);
              lVar7 = operator_new(1,lVar7 + 0x18,1,*(undefined2 *)(lVar6 + 0x8e),0);
              local_70 = *(longlong **)(lVar6 + 0x38);
              local_68 = 0xffffffff;
              local_64 = 0x101;
              local_62 = 0;
              local_78 = lVar6;
              FUN_140472e10(&local_78);
              plVar3 = local_70;
              pvVar12 = (void *)((longlong)*(int *)(lVar8 + 0x44) + **(longlong **)(param_1 + 0x2c0)
                                );
              pvVar9 = (void *)(*(int *)((longlong)local_70 + 0x44) + lVar7);
              if (pvVar9 != pvVar12) {
                if ((*(uint *)(local_70 + 7) >> 0x1e & 1) == 0) {
                  (**(code **)(*local_70 + 0x2e8))(local_70,pvVar9,pvVar12,(int)local_70[6]);
                }
                else {
                  _guard_xfg_dispatch_icall_nop
                            (pvVar9,pvVar12,
                             (longlong)(*(int *)((longlong)local_70 + 0x34) * (int)local_70[6]));
                }
              }
              local_70 = (longlong *)plVar3[5];
              FUN_140472e10(&local_78);
              lVar8 = *(longlong *)(param_1 + 0x250);
              if (*(longlong *)(param_1 + 0x250) == 0) {
                lVar8 = param_1 + 0x150;
              }
              TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
              ::FindId(param_1 + 0x260,local_res20,*(undefined8 *)(lVar8 + (longlong)pvVar14));
              pvVar9 = pvVar13;
              if (local_res20[0] != -1) {
                pvVar9 = (void *)((longlong)local_res20[0] * 0x20 + *(longlong *)(param_1 + 0x260));
              }
              pvVar12 = (void *)((longlong)pvVar9 + 8);
              if (pvVar9 == (void *)0x0) {
                pvVar12 = pvVar13;
              }
              pvVar9 = (void *)(*(int *)((longlong)local_70 + 0x44) + lVar7);
              if (pvVar9 != pvVar12) {
                if ((*(uint *)(local_70 + 7) >> 0x1e & 1) == 0) {
                  (**(code **)(*local_70 + 0x2e8))(local_70,pvVar9,pvVar12,(int)local_70[6]);
                }
                else {
                  _guard_xfg_dispatch_icall_nop
                            (pvVar9,pvVar12,
                             (longlong)(*(int *)((longlong)local_70 + 0x34) * (int)local_70[6]));
                }
              }
              (**(code **)(*plVar2 + 0x208))(plVar2,lVar6,lVar7);
              uVar5 = local_res18;
              if (local_48 == '\0') {
                local_48 = '\x01';
                *(int *)(local_60 + 4) = *(int *)(local_60 + 4) + -1;
                if (local_50 != local_60[2]) {
                  FMemStackBase::FreeChunks();
                }
                *local_60 = local_58;
                local_60[3] = local_40;
                local_58 = 0;
                if (local_48 == '\0') {
                  local_48 = '\x01';
                  *(int *)(local_60 + 4) = *(int *)(local_60 + 4) + -1;
                  if (local_50 != local_60[2]) {
                    FMemStackBase::FreeChunks();
                  }
                  *local_60 = local_58;
                  local_60[3] = local_40;
                }
              }
            }
            uVar10 = *(uint *)((longlong)plVar2 + 0xc);
            pvVar9 = pvVar13;
            if ((int)uVar10 < (int)DAT_1469e91c4) {
              uVar11 = uVar10 & 0xffff;
              if ((int)uVar10 < 0) {
                uVar10 = uVar10 + 0xffff;
                uVar11 = uVar11 - 0x10000;
              }
              pvVar9 = (void *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar10 >> 0x10) * 8) +
                               (longlong)(int)uVar11 * 0x18);
            }
            if ((*(uint *)((longlong)pvVar9 + 8) >> 0x1d & 1) != 0) break;
          }
          local_res18 = uVar5 + 1;
          pvVar9 = (void *)(ulonglong)local_res18;
          pvVar14 = (void *)((longlong)pvVar14 + 8);
        } while ((int)local_res18 < *(int *)(param_1 + 600));
      }
      *(undefined4 *)(param_1 + 600) = 0;
      if ((*(int *)(param_1 + 0x25c) < 0) && (*(int *)(param_1 + 0x25c) != 0)) {
        TArray<FSkeletalMeshSkinningData_*,TInlineAllocator<32,TSizedDefaultAllocator<32>_>_>::
        ResizeTo(param_1 + 0x150,0);
      }
      TSet<TTuple<__int64_*,FString>,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>,FDefaultSetAllocator>
      ::Empty(param_1 + 0x260,0);
      iVar1 = *(int *)((longlong)plVar2 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar10 = iVar1 >> 0x1f & 0xffff;
        uVar5 = iVar1 + uVar10;
        pvVar13 = (void *)(*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                          (longlong)(int)((uVar5 & 0xffff) - uVar10) * 0x18);
      }
      if ((*(uint *)((longlong)pvVar13 + 8) >> 0x1d & 1) == 0) {
        (**(code **)(*plVar2 + 0x1e8))(plVar2);
      }
    }
  }
  return;
}



// FUNCTION 1423e7c10 FUN_1423e7c10 body=135 status=ok
// SIG undefined FUN_1423e7c10(void)

ulonglong FUN_1423e7c10(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int local_res8 [4];
  undefined8 local_res18;
  undefined8 local_res20;
  
  FWeakObjectPtr::operator=(&local_res18);
  local_res20 = local_res18;
  TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x98,local_res8,&local_res20);
  plVar3 = (longlong *)0x0;
  if (local_res8[0] != -1) {
    plVar3 = (longlong *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x98));
  }
  plVar1 = plVar3 + 1;
  if (plVar3 == (longlong *)0x0) {
    plVar1 = (longlong *)0x0;
  }
  if (plVar1 == (longlong *)0x0) {
    return 1;
  }
  if (*(int *)(*plVar1 + 0x338) < 1) {
    uVar2 = FUN_1423f5b70();
    return uVar2;
  }
  return (ulonglong)plVar1 & 0xffffffffffffff00;
}



// FUNCTION 1423e7ca0 FUN_1423e7ca0 body=1422 status=ok
// SIG undefined FUN_1423e7ca0(void)

void FUN_1423e7ca0(undefined8 *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  longlong lVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  longlong lVar18;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (param_1[0x1f] != 0) {
    FUN_1423fdc50();
  }
  if (param_1[0x1e] != 0) {
    plVar2 = param_1 + 0x59;
    uVar14 = *(uint *)(param_1 + 0x5e);
    puVar1 = (uint *)(param_1 + 0x5b);
    local_98 = 0;
    uStack_94 = 1;
    uStack_84 = 0;
    iStack_80 = 0;
    if (uVar14 != 0) {
      puVar17 = (uint *)param_1[0x5d];
      if ((uint *)param_1[0x5d] == (uint *)0x0) {
        puVar17 = puVar1;
      }
      uVar16 = *puVar17;
      iStack_80 = 0;
      local_98 = 0;
      while (uVar16 == 0) {
        lVar12 = (longlong)local_98;
        iStack_80 = iStack_80 + 0x20;
        iVar8 = local_98 + 1;
        bVar4 = (int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
        local_98 = iVar8;
        if (bVar4) goto LAB_1423e7dac;
        uVar16 = puVar17[lVar12 + 1];
      }
      uStack_94 = -uVar16 & uVar16;
      iVar8 = 0x1f;
      if (uStack_94 != 0) {
        for (; uStack_94 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_94 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_84 = (iStack_80 - iVar8) + 0x1f;
      if ((int)uVar14 < (int)uStack_84) {
LAB_1423e7dac:
        uStack_84 = uVar14;
      }
    }
    uVar16 = *(uint *)(param_1 + 0x5e);
    uStack_60 = CONCAT44(uStack_84,0xffffffff);
    local_58 = CONCAT44(uStack_7c,iStack_80);
    uStack_48 = CONCAT44(uStack_94,local_98);
    uVar15 = uVar16 & 0xffffffe0;
    iStack_70 = local_98;
    uStack_6c = uStack_94;
    local_68 = puVar1;
    local_50 = plVar2;
    puStack_40 = puVar1;
    uStack_38 = uStack_60;
    uStack_30 = local_58;
    uStack_84 = uVar16;
    if (uVar16 != uVar14) {
      puVar17 = (uint *)param_1[0x5d];
      if ((uint *)param_1[0x5d] == (uint *)0x0) {
        puVar17 = puVar1;
      }
      uVar11 = puVar17[(int)uVar16 >> 5] & -1 << ((byte)uVar16 & 0x1f);
      iVar8 = (int)uVar16 >> 5;
      while (uVar11 == 0) {
        uVar15 = uVar15 + 0x20;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
        goto LAB_1423e7e72;
        uVar11 = puVar17[(longlong)iVar8 + 1];
        iVar8 = iVar8 + 1;
      }
      uVar11 = -uVar11 & uVar11;
      iVar8 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uVar11 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_84 = (uVar15 - iVar8) + 0x1f;
      if ((int)uVar14 < (int)uStack_84) {
LAB_1423e7e72:
        uStack_84 = uVar14;
      }
    }
LAB_1423e7e80:
    if ((uStack_60._4_4_ != uStack_84) || (local_68 != puVar1)) {
      piVar3 = (int *)(*plVar2 + (longlong)(int)uStack_60._4_4_ * 0xc);
      lVar12 = *(longlong *)(param_1[0x1e] + 0x58);
      if (*(int *)(lVar12 + 0x400) != *(int *)(lVar12 + 0x42c)) {
        iVar8 = *piVar3;
        lVar18 = *(longlong *)(lVar12 + 0x438);
        if (*(longlong *)(lVar12 + 0x438) == 0) {
          lVar18 = lVar12 + 0x430;
        }
        iVar6 = *(int *)(lVar18 + ((longlong)*(int *)(lVar12 + 0x440) - 1U & (longlong)iVar8) * 4);
        if (iVar6 != -1) {
          do {
            piVar13 = (int *)((longlong)iVar6 * 0x60 + *(longlong *)(lVar12 + 0x3f8));
            if (*piVar13 == iVar8) {
              if (iVar6 != -1) goto LAB_1423e7f24;
              break;
            }
            iVar6 = piVar13[0x16];
          } while (iVar6 != -1);
        }
      }
      piVar13 = (int *)0x0;
LAB_1423e7f24:
      if (piVar13[4] != piVar13[0xf]) {
        iVar8 = (int)((ulonglong)param_1 >> 4);
        uVar16 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar14 = -(uVar16 + iVar8) ^ uVar16 >> 0xd;
        uVar15 = (iVar8 - uVar16) - uVar14 ^ uVar14 >> 0xc;
        uVar16 = (uVar16 - uVar15) - uVar14 ^ uVar15 << 0x10;
        uVar14 = (uVar14 - uVar16) - uVar15 ^ uVar16 >> 5;
        uVar15 = (uVar15 - uVar16) - uVar14 ^ uVar14 >> 3;
        uVar16 = (uVar16 - uVar15) - uVar14 ^ uVar15 << 10;
        piVar10 = *(int **)(piVar13 + 0x12);
        if (*(int **)(piVar13 + 0x12) == (int *)0x0) {
          piVar10 = piVar13 + 0x10;
        }
        iVar8 = piVar10[((longlong)(int)((uVar14 - uVar16) - uVar15) ^ (ulonglong)(uVar16 >> 0xf)) &
                        (longlong)piVar13[0x14] - 1U];
        if (iVar8 != -1) {
          lVar12 = *(longlong *)(piVar13 + 2);
          do {
            lVar18 = (longlong)iVar8;
            if (*(undefined8 **)(lVar12 + lVar18 * 0x10) == param_1) {
              uVar7 = (longlong)*(int *)(lVar12 + 0xc + lVar18 * 0x10) &
                      (longlong)piVar13[0x14] - 1U;
              piVar9 = piVar10 + uVar7;
              iVar6 = piVar10[uVar7];
              goto joined_r0x0001423e8028;
            }
            iVar8 = *(int *)(lVar12 + 8 + lVar18 * 0x10);
          } while (iVar8 != -1);
        }
      }
      goto LAB_1423e80c5;
    }
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
              (*(longlong *)(param_1[0x1e] + 0x58) + 0x450,param_1);
    piVar3 = (int *)(*(longlong *)(param_1[0x1e] + 0x58) + 0x448);
    *piVar3 = *piVar3 - *(int *)(param_1 + 99);
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
              (*(longlong *)(param_1[0x1e] + 0x58) + 0x4a0,param_1);
  }
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(param_1 + 0x59,0);
  *(undefined4 *)(param_1 + 99) = 0;
  param_1[2] = 0;
  FWeakObjectPtr::operator=((longlong)param_1 + 0x35c,0);
  *(uint *)(param_1 + 0x1d) = *(uint *)(param_1 + 0x1d) & 0xfffffffd;
  *param_1 = 0;
  param_1[0x1e] = 0;
  param_1[0x68] = 0;
  *(undefined1 *)(param_1 + 0x6b) = 0;
  TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 5,0);
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (*(int *)((longlong)param_1 + 0xd4) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x19,0);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (*(int *)((longlong)param_1 + 0xe4) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x1b,0);
  }
  lVar12 = param_1[0x58];
  param_1[0x58] = 0;
  if (lVar12 != 0) {
    FUN_14271eb50(lVar12);
    FMemory::operator_delete(lVar12,0x510);
  }
  return;
joined_r0x0001423e8028:
  if (iVar6 == -1) goto LAB_1423e8051;
  if (iVar6 == iVar8) {
    *piVar9 = *(int *)(lVar12 + lVar18 * 0x10 + 8);
    goto LAB_1423e8051;
  }
  piVar9 = (int *)(lVar12 + 8 + (longlong)iVar6 * 0x10);
  iVar6 = *piVar9;
  goto joined_r0x0001423e8028;
LAB_1423e8051:
  bVar5 = (byte)iVar8 & 0x1f;
  if (piVar13[0xf] != 0) {
    *(int *)(*(longlong *)(piVar13 + 2) + (longlong)piVar13[0xe] * 0x10) = iVar8;
  }
  lVar12 = *(longlong *)(piVar13 + 2);
  *(undefined4 *)(lVar12 + lVar18 * 0x10) = 0xffffffff;
  if (piVar13[0xf] < 1) {
    iVar6 = -1;
  }
  else {
    iVar6 = piVar13[0xe];
  }
  *(int *)(lVar12 + 4 + lVar18 * 0x10) = iVar6;
  piVar13[0xf] = piVar13[0xf] + 1;
  piVar13[0xe] = iVar8;
  piVar10 = *(int **)(piVar13 + 10);
  if (*(int **)(piVar13 + 10) == (int *)0x0) {
    piVar10 = piVar13 + 6;
  }
  if (iVar8 < 0) {
    iVar8 = iVar8 + 0x1f;
  }
  piVar10[iVar8 >> 5] = piVar10[iVar8 >> 5] & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
LAB_1423e80c5:
  if (piVar13[4] == piVar13[0xf]) {
    TSet<TTuple<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::Remove(*(longlong *)(param_1[0x1e] + 0x58) + 0x3f8,piVar3);
  }
  uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_6c);
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  goto LAB_1423e7e80;
}



// FUNCTION 1423e8230 FUN_1423e8230 body=942 status=ok
// SIG undefined FUN_1423e8230(void)

undefined8 FUN_1423e8230(longlong *param_1,char param_2)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  int *piVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  int local_res8 [2];
  longlong *local_res18;
  
  lVar7 = param_1[5];
  plVar10 = *(longlong **)(lVar7 + 0x1650);
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x288))(plVar10,param_1);
    lVar7 = param_1[5];
  }
  cVar3 = (**(code **)(**(longlong **)(lVar7 + 0x58) + 0x368))();
  if ((((cVar3 == '\0') && (0 < (int)param_1[0x1e])) && (-1 < *(int *)((longlong)param_1 + 0x34)))
     && (param_2 == '\0')) {
    lVar7 = param_1[5];
    plVar10 = (longlong *)(lVar7 + 0x16a8);
    if (*(int *)(lVar7 + 0x16b0) != *(int *)(lVar7 + 0x16dc)) {
      iVar1 = (int)param_1[0xe];
      lVar15 = *(longlong *)(lVar7 + 0x16e8);
      if (*(longlong *)(lVar7 + 0x16e8) == 0) {
        lVar15 = lVar7 + 0x16e0;
      }
      iVar6 = *(int *)(lVar15 + ((longlong)*(int *)(lVar7 + 0x16f0) - 1U & (longlong)iVar1) * 4);
      if (iVar6 != -1) {
        do {
          piVar9 = (int *)((longlong)iVar6 * 0x20 + *plVar10);
          if (*piVar9 == iVar1) {
            if ((iVar6 != -1) && (piVar9 != (int *)0x0)) goto LAB_1423e8339;
            break;
          }
          iVar6 = piVar9[6];
        } while (iVar6 != -1);
      }
    }
    local_res18 = param_1 + 0xe;
    FUN_1423e32e0(plVar10,local_res8,&local_res18,0);
    piVar9 = (int *)((longlong)local_res8[0] * 0x20 + *plVar10);
LAB_1423e8339:
    lVar7 = param_1[5];
    FUN_1423e85e0(param_1,0);
    param_1[5] = lVar7;
    iVar1 = piVar9[4];
    piVar9[4] = iVar1 + 1;
    if (piVar9[5] < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(piVar9 + 2,iVar1);
    }
    *(longlong **)(*(longlong *)(piVar9 + 2) + (longlong)iVar1 * 8) = param_1;
    uVar8 = 0;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  }
  else {
    bVar5 = false;
    if ((cVar3 == '\0') && (param_1[0xd] != 0)) {
      if (((*(byte *)(param_1[0xd] + 0x90) & 0x20) == 0) ||
         (cVar4 = (**(code **)(**(longlong **)(param_1[5] + 0x58) + 0x398))(), cVar4 != '\0')) {
        if (((*(byte *)(param_1 + 6) & 4) == 0) || ((*(byte *)(param_1[0xd] + 0x90) & 0x20) != 0)) {
          if (((*(byte *)((longlong *)param_1[0xd] + 0x12) & 1) == 0) &&
             ((lVar7 = (**(code **)(*(longlong *)param_1[0xd] + 0x148))(), lVar7 != 0 &&
              (DAT_1468c217e == '\0')))) {
            FUN_1423e9ff0(param_1);
          }
        }
        else {
          *(undefined1 *)(param_1[0xd] + 0x129) = 2;
          FUN_1425c55c0(*(undefined8 *)(param_1[5] + 0x58),param_1[0xd],param_1[5]);
          bVar5 = true;
        }
      }
      else if ((*(byte *)(param_1 + 6) & 0x40) == 0) {
        *(undefined1 *)(param_1[0xd] + 0x128) = 3;
        FUN_14223ef90(param_1[0xd],0);
        *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 0x40;
        lVar7 = (**(code **)(*(longlong *)param_1[0xd] + 0x148))();
        if ((lVar7 != 0) && (DAT_1468c217e == '\0')) {
          (**(code **)(*(longlong *)param_1[0xd] + 0x588))();
        }
      }
    }
    (**(code **)(*param_1 + 0x280))(param_1);
    if (((param_2 == '\0') && (cVar3 == '\0')) && (bVar5)) {
      uVar8 = 1;
    }
    else {
      uVar8 = 0;
    }
    FUN_1423e8710(param_1,uVar8);
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Empty(param_1 + 0x20,0)
    ;
    uVar12 = 0;
    uVar11 = uVar12;
    uVar14 = uVar12;
    if (0 < (int)param_1[0x2f]) {
      do {
        puVar2 = *(undefined8 **)(uVar11 + param_1[0x2e]);
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        uVar13 = (int)uVar14 + 1;
        uVar11 = uVar11 + 8;
        uVar14 = (ulonglong)uVar13;
      } while ((int)uVar13 < (int)param_1[0x2f]);
    }
    *(undefined4 *)(param_1 + 0x2f) = 0;
    if (*(int *)((longlong)param_1 + 0x17c) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x2e,0);
    }
    *(undefined4 *)(param_1 + 0x2d) = 0;
    if (*(int *)((longlong)param_1 + 0x16c) != 0) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x2c,0);
    }
    uVar11 = uVar12;
    if (0 < (int)param_1[0x1e]) {
      do {
        puVar2 = *(undefined8 **)(uVar12 + param_1[0x1d]);
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        uVar13 = (int)uVar11 + 1;
        uVar12 = uVar12 + 8;
        uVar11 = (ulonglong)uVar13;
      } while ((int)uVar13 < (int)param_1[0x1e]);
      *(undefined4 *)(param_1 + 0x1e) = 0;
      if (*(int *)((longlong)param_1 + 0xf4) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x1d,0);
      }
      plVar10 = *(longlong **)(param_1[5] + 0x68);
      if (plVar10 != (longlong *)0x0) {
        lVar7 = UPackageMapClient::GetPrivateStaticClass();
        if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
            != lVar7 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          (**(code **)(*plVar10 + 0x2f8))(plVar10,param_1 + 0xe,0);
        }
      }
    }
    if (*(int *)((longlong)param_1 + 0x34) < 0) {
      uVar8 = 1;
    }
    else {
      uVar8 = FUN_1423e85e0(param_1,param_2);
    }
  }
  return uVar8;
}



// FUNCTION 1423e85e0 FUN_1423e85e0 body=302 status=ok
// SIG undefined FUN_1423e85e0(void)

undefined8 FUN_1423e85e0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong local_res8;
  
  iVar4 = *(int *)(param_1 + 0x34);
  if ((iVar4 == 0) && (iVar4 = 0, (*(byte *)(param_1 + 0x30) & 2) == 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2f8))();
    iVar4 = *(int *)(param_1 + 0x34);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x58);
  if ((puVar1 != (undefined8 *)0x0) && ((*(byte *)(*(longlong *)(param_1 + 0x28) + 0xa4) & 1) == 0))
  {
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x15b0) + (longlong)iVar4 * 4) =
         *(undefined4 *)(puVar1 + 0x1c);
    puVar1 = *(undefined8 **)(param_1 + 0x58);
  }
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)puVar1[0x18];
    (**(code **)*puVar1)(puVar1,1);
    puVar1 = puVar2;
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)puVar1[0x18];
    (**(code **)*puVar1)(puVar1,1);
    puVar1 = puVar2;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  local_res8 = param_1;
  TArray<FName,FDefaultAllocator>::Remove(*(longlong *)(param_1 + 0x28) + 0x70,&local_res8);
  local_res8 = param_1;
  TArray<FName,FDefaultAllocator>::Remove(*(longlong *)(param_1 + 0x28) + 0x17f0,&local_res8);
  lVar3 = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(*(longlong *)(lVar3 + 0x1580) + (longlong)*(int *)(param_1 + 0x34) * 8) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 1423e8710 FUN_1423e8710 body=566 status=ok
// SIG undefined FUN_1423e8710(void)

void FUN_1423e8710(longlong param_1,char param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  undefined8 local_b8;
  uint *puStack_b0;
  undefined4 local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined8 uStack_90;
  uint *local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  longlong *local_68;
  undefined2 local_60;
  longlong *local_58;
  undefined1 *puStack_50;
  uint *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  plVar1 = (longlong *)(param_1 + 0x98);
  local_b8 = (undefined1 *)0x100000000;
  iVar2 = *(int *)(param_1 + 0xc0);
  puStack_b0 = (uint *)(param_1 + 0xa8);
  iStack_a4 = 0;
  iStack_a0 = 0;
  if (iVar2 != 0) {
    puVar8 = *(uint **)(param_1 + 0xb8);
    if (*(uint **)(param_1 + 0xb8) == (uint *)0x0) {
      puVar8 = puStack_b0;
    }
    uVar5 = *puVar8;
    iStack_a0 = 0;
    iVar6 = 0;
    while (uVar5 == 0) {
      iStack_a0 = iStack_a0 + 0x20;
      uVar3 = (ulonglong)local_b8 >> 0x20;
      local_b8 = (undefined1 *)CONCAT44((int)uVar3,iVar6 + 1);
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1423e87dd;
      uVar5 = puVar8[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar5 = -uVar5 & uVar5;
    iVar6 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    local_b8 = (undefined1 *)CONCAT44(uVar5,SUB84(local_b8,0));
    if (uVar5 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_a4 = (iStack_a0 - iVar6) + 0x1f;
    if (iVar2 < iStack_a4) {
LAB_1423e87dd:
      iStack_a4 = iVar2;
    }
  }
  local_a8 = 0xffffffff;
  uStack_80 = CONCAT44(iStack_a4,0xffffffff);
  auStack_40._8_4_ = iStack_a0;
  auStack_40._0_8_ = uStack_80;
  auStack_40._12_4_ = uStack_9c;
  puStack_50 = local_b8;
  local_60 = 0;
  local_30._0_4_ = SUB84(plVar1,0);
  local_30._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_90 = local_b8;
  local_78._8_4_ = (undefined4)local_30;
  local_78._0_8_ = auStack_40._8_8_;
  local_78._12_4_ = local_30._4_4_;
  iVar2 = iStack_a4;
  local_98 = plVar1;
  local_88 = puStack_b0;
  local_68 = plVar1;
  local_58 = plVar1;
  puStack_48 = puStack_b0;
  local_30 = plVar1;
  if (iStack_a4 < *(int *)(param_1 + 0xc0)) {
    do {
      plVar4 = local_98;
      if ((param_2 == '\0') ||
         (lVar7 = (longlong)iVar2 * 0x20,
         *(longlong *)(*(longlong *)(lVar7 + 8 + *local_98) + 0x10) == 0)) {
        FUN_1423e7ca0(*(undefined8 *)((longlong)iVar2 * 0x20 + 8 + *local_98));
      }
      else {
        FWeakObjectPtr::operator=(local_res18);
        local_b8 = local_res18;
        puStack_b0 = (uint *)(*plVar4 + 8 + lVar7);
        FUN_1423e3c70(*(longlong *)(param_1 + 0x28) + 0x16f8,local_res8,&local_b8,0);
        FUN_1423fdc50(*(undefined8 *)(lVar7 + 8 + *plVar4),param_1);
      }
      uStack_80 = CONCAT44(uStack_80._4_4_,(uint)uStack_80 & ~uStack_90._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
      iVar2 = uStack_80._4_4_;
    } while (uStack_80._4_4_ < (int)local_88[6]);
    if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
      TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),
                          CONCAT71((uint7)(uint3)((ulonglong)uStack_80 >> 0x28),1));
    }
  }
  TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
  ::Empty(plVar1,0);
  *(undefined8 *)(param_1 + 0x90) = 0;
  return;
}



// FUNCTION 1423e8950 FUN_1423e8950 body=704 status=ok
// SIG undefined FUN_1423e8950(void)

undefined8 FUN_1423e8950(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined1 local_res8 [8];
  undefined1 local_118 [144];
  longlong local_88;
  undefined8 local_78;
  byte local_30;
  longlong local_28;
  longlong local_18;
  
  uVar7 = 0;
  if ((((((*(uint *)(param_1 + 6) & 2) == 0) && (lVar6 = param_1[5], *(int *)(lVar6 + 300) - 2U < 2)
        ) && ((*(uint *)(param_1 + 6) >> 9 & 1) == 0)) &&
      ((uVar7 = 0, *(longlong *)(lVar6 + 0x138) == 0 ||
       (*(int *)(*(longlong *)(lVar6 + 0x138) + 0x1cc) == 2)))) &&
     (((*(byte *)(lVar6 + 0xa4) & 1) != 0 ||
      ((*(longlong *)(*(longlong *)(lVar6 + 0x58) + 0x90) != 0 ||
       (**(int **)(lVar6 + 0x15a0) != *(int *)(lVar6 + 0x15e4))))))) {
    FUN_1423e4ec0(local_118,param_1,1);
    uVar1 = *(uint *)(param_1 + 6);
    *(uint *)(param_1 + 6) = uVar1 | 0x200;
    local_30 = ((byte)((uVar1 | 0x200) >> 2) & 1 | 4) << 3 | local_30 & 0xf7;
    (**(code **)(*param_1 + 0x2c8))(param_1,local_res8,local_118,0);
    if (local_18 != 0) {
      FMemory::Free();
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(local_118);
    uVar7 = local_78;
  }
  if (param_1[0xd] != 0) {
    lVar6 = param_1[5];
    uVar8 = 0;
    if (((lVar6 != 0) && ((*(byte *)(param_1 + 6) & 4) != 0)) &&
       ((*(byte *)(lVar6 + 0xa4) & 1) == 0)) {
      if (*(longlong **)(lVar6 + 0x58) != (longlong *)0x0) {
        cVar2 = (**(code **)(**(longlong **)(lVar6 + 0x58) + 0x368))();
        if (cVar2 == '\0') {
          *(undefined1 *)(param_1[0xd] + 0x129) = 2;
        }
        FUN_1425c55c0(*(undefined8 *)(param_1[5] + 0x58),param_1[0xd],param_1[5]);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146af2438) &&
         (_Init_thread_header(&DAT_146af2438), DAT_146af2438 == -1)) {
        if (DAT_1468b1f88 == (longlong *)0x0) {
          IConsoleManager::SetupSingleton();
        }
        plVar5 = (longlong *)
                 (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"net.DormancyValidate");
        lVar6 = 0;
        if (plVar5 != (longlong *)0x0) {
          lVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
        }
        DAT_146af2430 = lVar6;
        _Init_thread_footer(&DAT_146af2438);
      }
      lVar6 = DAT_146af2430;
      if (DAT_146af2430 != 0) {
        cVar2 = FUN_1415ad720(&DAT_1468e2448);
        if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
           (DVar3 = GetCurrentThreadId(), DVar3 != DAT_1468c21c0)) {
          lVar4 = 4;
        }
        else {
          lVar4 = 0;
        }
        uVar8 = 0;
        if (0 < *(int *)(lVar4 + lVar6)) {
          uVar8 = 1;
        }
      }
    }
    if (param_1[5] != 0) {
      FUN_1423f96d0(param_1[5],param_1[0xd]);
    }
    param_1[0xd] = 0;
    FUN_1423e8710(param_1,uVar8);
  }
  return uVar7;
}



// FUNCTION 1423e8c10 FUN_1423e8c10 body=305 status=ok
// SIG undefined FUN_1423e8c10(void)

undefined8 FUN_1423e8c10(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 local_res8 [32];
  undefined1 local_118 [144];
  longlong local_88;
  undefined8 local_78;
  byte local_30;
  longlong local_28;
  longlong local_18;
  
  if ((((((*(uint *)(param_1 + 6) & 2) == 0) && (lVar2 = param_1[5], *(int *)(lVar2 + 300) - 2U < 2)
        ) && ((*(uint *)(param_1 + 6) >> 9 & 1) == 0)) &&
      ((*(longlong *)(lVar2 + 0x138) == 0 || (*(int *)(*(longlong *)(lVar2 + 0x138) + 0x1cc) == 2)))
      ) && (((*(byte *)(lVar2 + 0xa4) & 1) != 0 ||
            ((*(longlong *)(*(longlong *)(lVar2 + 0x58) + 0x90) != 0 ||
             (**(int **)(lVar2 + 0x15a0) != *(int *)(lVar2 + 0x15e4))))))) {
    FUN_1423e4ec0(local_118,param_1,1);
    uVar1 = *(uint *)(param_1 + 6);
    *(uint *)(param_1 + 6) = uVar1 | 0x200;
    local_30 = ((byte)((uVar1 | 0x200) >> 2) & 1 | 4) << 3 | local_30 & 0xf7;
    (**(code **)(*param_1 + 0x2c8))(param_1,local_res8,local_118,0);
    if (local_18 != 0) {
      FMemory::Free();
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(local_118);
    return local_78;
  }
  return 0;
}



// FUNCTION 1423e8d50 FUN_1423e8d50 body=243 status=ok
// SIG undefined FUN_1423e8d50(void)

undefined8 FUN_1423e8d50(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar3 = 0;
  if (lVar2 == 0) {
    return 0;
  }
  if (((((*(uint *)(lVar2 + 0x4c) & 0x40) != 0) && (*(int *)(lVar2 + 0x54) == 0x20)) &&
      (*(int *)(lVar2 + 0x58) == 0xff0000)) &&
     ((uVar3 = 0, *(int *)(lVar2 + 0x5c) == 0xff00 && (uVar3 = 0, *(int *)(lVar2 + 0x60) == 0xff))))
  {
    uVar3 = 2;
  }
  if ((*(uint *)(lVar2 + 0x4c) & 4) == 0) {
    return uVar3;
  }
  iVar1 = *(int *)(lVar2 + 0x50);
  if (iVar1 == 0x31545844) {
    return 5;
  }
  if (iVar1 == 0x33545844) {
    return 6;
  }
  if (iVar1 == 0x35545844) {
    return 7;
  }
  if ((iVar1 == 0x32495441) || (iVar1 == 0x53354342)) {
switchD_1423e8e23_caseD_47:
    uVar3 = 0x17;
  }
  else {
    if ((iVar1 + 0xaccbbcbeU & 0xfdffffff) == 0) {
      return 0x27;
    }
    if (iVar1 == 0x71) {
switchD_1423e8e23_caseD_a:
      return 10;
    }
    if ((iVar1 == 0x30315844) && ((undefined4 *)param_1[1] != (undefined4 *)0x0)) {
      switch(*(undefined4 *)param_1[1]) {
      case 10:
        goto switchD_1423e8e23_caseD_a;
      default:
        break;
      case 0x47:
      case 0x48:
      case 0x4a:
      case 0x4b:
      case 0x4d:
      case 0x4e:
      case 0x50:
      case 0x51:
      case 0x53:
      case 0x54:
        goto switchD_1423e8e23_caseD_47;
      case 0x57:
      case 0x58:
      case 0x5b:
      case 0x5d:
        return 2;
      }
    }
  }
  return uVar3;
}



// FUNCTION 1423e8eb0 FUN_1423e8eb0 body=176 status=ok
// SIG undefined FUN_1423e8eb0(void)

void FUN_1423e8eb0(longlong *param_1,undefined1 param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  lVar6 = 0;
  lVar4 = lVar6;
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar3 = iVar1 + uVar5;
    lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
            (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
  }
  if (((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) &&
     (cVar2 = (**(code **)(*param_1 + 0x2e8))(param_1,param_2), cVar2 != '\0')) {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    *(uint *)(lVar6 + 8) = *(uint *)(lVar6 + 8) | 0x20000000;
  }
  return;
}



// FUNCTION 1423e8f60 FUN_1423e8f60 body=777 status=ok
// SIG undefined FUN_1423e8f60(void)

undefined8 * FUN_1423e8f60(longlong *param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  wchar_t wVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  short *psVar10;
  wchar_t *pwVar11;
  int iVar12;
  wchar_t *local_res8;
  longlong local_88;
  longlong local_80;
  wchar_t *local_78;
  int local_70;
  undefined4 local_6c;
  undefined **local_68;
  undefined2 local_60;
  short *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  
  pwVar11 = (wchar_t *)0x0;
  if (param_1[0xa1] != 0) {
    local_48 = pwVar11;
    if (*(longlong *)(DAT_146b17150 + 0x7b0) != 0) {
      local_48 = *(wchar_t **)(*(longlong *)(DAT_146b17150 + 0x7b0) + 0x50);
    }
    local_68 = &PTR__scalar_deleting_destructor__145086198;
    local_58 = (short *)0x0;
    local_50 = 0;
    local_60 = 0;
    iVar8 = 0;
    iVar12 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar12 = 0;
    }
    lVar9 = (longlong)iVar12 * 2 + 2;
    lVar3 = FMemory::Malloc(lVar9,0);
    local_80 = lVar3;
    uVar4 = FMemory::Malloc(lVar9,0);
    if (*(int *)(param_3 + 1) == 0) {
      local_res8 = L"";
    }
    else {
      local_res8 = (wchar_t *)*param_3;
      iVar8 = *(int *)(param_3 + 1) + -1;
    }
    iVar7 = 0;
    if ((-1 < iVar12) && (iVar7 = iVar8, iVar12 < iVar8)) {
      iVar7 = iVar12;
    }
    local_78 = (wchar_t *)0x0;
    local_6c = 0;
    iVar8 = iVar7 + 1;
    if (iVar7 == 0) {
      iVar8 = 0;
    }
    local_88 = lVar3;
    local_70 = iVar8;
    if ((0 < iVar8) &&
       (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0), iVar8 = local_70,
       pwVar11 = local_78, 0 < local_70)) {
      wcsncpy(local_78,local_res8,(longlong)iVar7);
      pwVar11[iVar7] = L'\0';
    }
    lVar9 = local_80;
    pwVar6 = L"";
    if (iVar8 != 0) {
      pwVar6 = pwVar11;
    }
    lVar3 = local_80 - (longlong)pwVar6;
    do {
      wVar1 = *pwVar6;
      *(wchar_t *)((longlong)pwVar6 + lVar3) = wVar1;
      pwVar6 = pwVar6 + 1;
    } while (wVar1 != L'\0');
    if (pwVar11 != (wchar_t *)0x0) {
      FMemory::Free(pwVar11);
    }
    cVar2 = FParse::Line(&local_88,uVar4,iVar12 + 1,0);
    while (cVar2 != '\0') {
      lVar3 = *(longlong *)(param_1[0xa1] + 0x28);
      uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      cVar2 = (**(code **)(lVar3 + 8))(param_1[0xa1] + 0x28,uVar5,uVar4,&local_68);
      if (cVar2 == '\0') {
        *(longlong *)(param_1[0xa1] + 0x30) = param_1[0x10a];
        lVar3 = *(longlong *)(param_1[0xa1] + 0x28);
        uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
        (**(code **)(lVar3 + 8))(param_1[0xa1] + 0x28,uVar5,uVar4,&local_68);
        *(longlong **)(param_1[0xa1] + 0x30) = param_1;
      }
      cVar2 = FParse::Line(&local_88,uVar4,iVar12 + 1,0);
    }
    FMemory::Free(lVar9);
    FMemory::Free(uVar4);
    if (param_4 == '\0') {
      psVar10 = &DAT_143f3eda8;
      if ((int)local_50 != 0) {
        psVar10 = local_58;
      }
      *param_2 = 0;
      param_2[1] = 0;
      if ((psVar10 != (short *)0x0) && (*psVar10 != 0)) {
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while (psVar10[lVar9] != 0);
        iVar8 = (int)lVar9 + 1;
        *(int *)(param_2 + 1) = iVar8;
        if (0 < iVar8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
        }
        FGenericPlatformString::Memcpy(*param_2,psVar10,(longlong)iVar8 * 2);
      }
      if (local_58 == (short *)0x0) {
        return param_2;
      }
      FMemory::Free();
      return param_2;
    }
    if (local_58 != (short *)0x0) {
      FMemory::Free();
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1423e9270 FUN_1423e9270 body=105 status=ok
// SIG undefined FUN_1423e9270(void)

void FUN_1423e9270(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)*(int *)(param_1 + 8) << 5,(longlong)*(int *)(param_1 + 0xc) << 5);
  iVar1 = *(int *)(param_1 + 0x2c) + 0x1f;
  iVar2 = *(int *)(param_1 + 0x28) + 0x1f;
                    /* WARNING: Could not recover jumptable at 0x0001423e92d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
  return;
}



// FUNCTION 1423e92e0 FUN_1423e92e0 body=114 status=ok
// SIG undefined FUN_1423e92e0(void)

void FUN_1423e92e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)*(int *)(param_1 + 8) * 0xc,(longlong)*(int *)(param_1 + 0xc) * 0xc);
  iVar1 = *(int *)(param_1 + 0x2c) + 0x1f;
  iVar2 = *(int *)(param_1 + 0x28) + 0x1f;
                    /* WARNING: Could not recover jumptable at 0x0001423e934e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
  return;
}



// FUNCTION 1423e9360 FUN_1423e9360 body=1979 status=ok
// SIG undefined FUN_1423e9360(void)

void FUN_1423e9360(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint *puVar12;
  longlong lVar13;
  uint uVar14;
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
  
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)*(int *)(param_1 + 0x20) * 0x30,
             (longlong)*(int *)(param_1 + 0x24) * 0x30);
  plVar1 = (longlong *)(param_1 + 0x28);
  FUN_1423e9270(plVar1,param_2);
  lVar10 = (longlong)*(int *)(param_1 + 0x70) << 2;
  (**(code **)(*param_2 + 0x78))(param_2,lVar10,lVar10);
  uVar3 = *(uint *)(param_1 + 0x50);
  puVar2 = (uint *)(param_1 + 0x38);
  iVar8 = 0;
  uStack_94 = 1;
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar12 = *(uint **)(param_1 + 0x48);
    if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar4 = *puVar12;
    iStack_80 = iVar8;
    local_98 = iVar8;
    while (uVar4 == 0) {
      lVar10 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar7 = local_98 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar7;
      if (bVar6) goto LAB_1423e947d;
      uVar4 = puVar12[lVar10 + 1];
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
LAB_1423e947d:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x50);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar14 = uVar4 & 0xffffffe0;
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
    puVar12 = *(uint **)(param_1 + 0x48);
    if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar9 = puVar12[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar9 == 0) {
      uVar14 = uVar14 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1423e9554;
      uVar9 = puVar12[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar9 = -uVar9 & uVar9;
    iVar7 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_84 = (uVar14 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_1423e9554:
      uStack_84 = uVar3;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar2))) {
    plVar5 = *(longlong **)((longlong)(int)uStack_5c * 0x20 + 8 + *plVar1);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,param_2);
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  plVar1 = (longlong *)(param_1 + 0x78);
  FUN_1423e9270(plVar1,param_2);
  lVar10 = (longlong)*(int *)(param_1 + 0xc0) << 2;
  (**(code **)(*param_2 + 0x78))(param_2,lVar10,lVar10);
  uVar3 = *(uint *)(param_1 + 0xa0);
  puVar2 = (uint *)(param_1 + 0x88);
  uStack_94 = 1;
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar12 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar4 = *puVar12;
    iStack_80 = iVar8;
    local_98 = iVar8;
    while (uVar4 == 0) {
      lVar10 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar7 = local_98 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar7;
      if (bVar6) goto LAB_1423e966d;
      uVar4 = puVar12[lVar10 + 1];
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
LAB_1423e966d:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0xa0);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar14 = uVar4 & 0xffffffe0;
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
    puVar12 = *(uint **)(param_1 + 0x98);
    if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar9 = puVar12[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar9 == 0) {
      uVar14 = uVar14 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1423e9744;
      uVar9 = puVar12[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar9 = -uVar9 & uVar9;
    iVar7 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_84 = (uVar14 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_1423e9744:
      uStack_84 = uVar3;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar2))) {
    plVar5 = *(longlong **)((longlong)(int)uStack_5c * 0x20 + 8 + *plVar1);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,param_2);
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)*(int *)(param_1 + 0xd0) << 2,(longlong)*(int *)(param_1 + 0xd4) << 2
            );
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)*(int *)(param_1 + 0xe0) << 2,(longlong)*(int *)(param_1 + 0xe4) << 2
            );
  FUN_1422c53b0(param_1 + 0x100,param_2);
  lVar10 = (longlong)*(int *)(param_1 + 0x148) << 2;
  (**(code **)(*param_2 + 0x78))(param_2,lVar10,lVar10);
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)*(int *)(param_1 + 600) << 3,(longlong)*(int *)(param_1 + 0x25c) << 3
            );
  plVar1 = (longlong *)(param_1 + 0x260);
  FUN_1423e9270(plVar1,param_2);
  lVar10 = (longlong)*(int *)(param_1 + 0x2a8) << 2;
  (**(code **)(*param_2 + 0x78))(param_2,lVar10,lVar10);
  uVar3 = *(uint *)(param_1 + 0x288);
  puVar2 = (uint *)(param_1 + 0x270);
  uStack_94 = 1;
  local_98 = 0;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar12 = *(uint **)(param_1 + 0x280);
    if (*(uint **)(param_1 + 0x280) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar4 = *puVar12;
    iStack_80 = iVar8;
    local_98 = iVar8;
    while (uVar4 == 0) {
      lVar10 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar8 = local_98 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar8;
      if (bVar6) goto LAB_1423e98dd;
      uVar4 = puVar12[lVar10 + 1];
    }
    uStack_94 = -uVar4 & uVar4;
    iVar8 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_84 = (iStack_80 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_1423e98dd:
      uStack_84 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x288);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,iStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar14 = uVar4 & 0xffffffe0;
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
    puVar12 = *(uint **)(param_1 + 0x280);
    if (*(uint **)(param_1 + 0x280) == (uint *)0x0) {
      puVar12 = puVar2;
    }
    uVar9 = puVar12[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar8 = (int)uVar4 >> 5;
    while (uVar9 == 0) {
      uVar14 = uVar14 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_1423e99a2;
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
    uStack_84 = (uVar14 - iVar8) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_1423e99a2:
      uStack_84 = uVar3;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar2))) {
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)((longlong)(int)uStack_5c * 0x20 + 0x10 + *plVar1),
               (longlong)*(int *)((longlong)(int)uStack_5c * 0x20 + 0x14 + *plVar1));
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    (**(code **)(*param_2 + 0x78))(param_2,0x510,0x510);
    FUN_142728250(*(undefined8 *)(param_1 + 0x2c0),param_2);
  }
  FUN_1423e92e0(param_1 + 0x2c8,param_2);
  lVar10 = (longlong)*(int *)(param_1 + 0x310) << 2;
  (**(code **)(*param_2 + 0x78))(param_2,lVar10,lVar10);
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)*(int *)(param_1 + 0x338) << 4,
             (longlong)*(int *)(param_1 + 0x33c) << 4);
  plVar1 = *(longlong **)(param_1 + 0x340);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x1f8))(plVar1,param_2);
  }
  (**(code **)(*param_2 + 0x78))
            (param_2,(longlong)*(int *)(param_1 + 0x350) * 0x70,
             (longlong)*(int *)(param_1 + 0x354) * 0x70);
  lVar10 = *(longlong *)(param_1 + 0x348);
  lVar13 = (longlong)*(int *)(param_1 + 0x350) * 0x70 + lVar10;
  for (; lVar10 != lVar13; lVar10 = lVar10 + 0x70) {
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(lVar10 + 0x10),(longlong)*(int *)(lVar10 + 0x14));
    FUN_1423e92e0(lVar10 + 0x20,param_2);
    lVar11 = (longlong)*(int *)(lVar10 + 0x68) << 2;
    (**(code **)(*param_2 + 0x78))(param_2,lVar11,lVar11);
  }
  return;
}



// FUNCTION 1423e9b20 FUN_1423e9b20 body=84 status=ok
// SIG undefined FUN_1423e9b20(void)

void FUN_1423e9b20(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145088a88;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_145088ad0;
  }
  return;
}



// FUNCTION 1423e9b80 FUN_1423e9b80 body=98 status=ok
// SIG undefined FUN_1423e9b80(void)

void FUN_1423e9b80(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((lVar1 != 0) &&
     ((lVar3 = *(longlong *)(lVar1 + 0x90), lVar3 != 0 ||
      ((0 < *(int *)(lVar1 + 0xa0) && (lVar3 = **(longlong **)(lVar1 + 0x98), lVar3 != 0)))))) {
    lVar1 = **(longlong **)(lVar3 + 0x68);
    uVar2 = FUN_141672640();
    (**(code **)(lVar1 + 0x2d0))(*(undefined8 *)(lVar3 + 0x68),uVar2);
  }
  return;
}



// FUNCTION 1423e9c20 FUN_1423e9c20 body=70 status=ok
// SIG undefined FUN_1423e9c20(void)

void FUN_1423e9c20(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  if (*(longlong **)(param_1 + 0x528) != (longlong *)0x0) {
    lVar1 = **(longlong **)(param_1 + 0x528);
    fVar2 = (float)(**(code **)(lVar1 + 0x778))();
    (**(code **)(lVar1 + 0x780))(*(undefined8 *)(param_1 + 0x528),fVar2 - 1.0);
  }
  return;
}



// FUNCTION 1423e9c70 FUN_1423e9c70 body=421 status=ok
// SIG undefined FUN_1423e9c70(void)

void FUN_1423e9c70(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  uint local_38;
  longlong *local_30;
  uint uStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  uint uStack_10;
  
  lVar8 = *(longlong *)(param_1 + 0x38);
  if ((lVar8 != 0) &&
     ((lVar7 = *(longlong *)(lVar8 + 0x90), lVar7 != 0 ||
      ((0 < *(int *)(lVar8 + 0xa0) && (lVar7 = **(longlong **)(lVar8 + 0x98), lVar7 != 0)))))) {
    local_58 = 0;
    uStack_54 = 1;
    plVar2 = *(longlong **)(*(longlong *)(lVar7 + 0x58) + 0x528);
    iVar1 = (int)plVar2[5];
    puStack_20 = (uint *)(plVar2 + 2);
    local_48._4_4_ = 0;
    uStack_40 = 0;
    if (iVar1 != 0) {
      puVar9 = (uint *)plVar2[4];
      if ((uint *)plVar2[4] == (uint *)0x0) {
        puVar9 = puStack_20;
      }
      uVar6 = *puVar9;
      local_58 = 0;
      uStack_40 = 0;
      while (uVar6 == 0) {
        lVar8 = (longlong)(int)local_58;
        uStack_40 = uStack_40 + 0x20;
        uVar6 = local_58 + 1;
        bVar4 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_58;
        local_58 = uVar6;
        if (bVar4) goto LAB_1423e9d6f;
        uVar6 = puVar9[lVar8 + 1];
      }
      uStack_54 = -uVar6 & uVar6;
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
LAB_1423e9d6f:
        local_48._4_4_ = iVar1;
      }
    }
    uStack_28 = local_58;
    uStack_24 = uStack_54;
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    uStack_10 = uStack_40;
    uStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_40 = 0xffffffff;
    iStack_3c = local_48._4_4_;
    bVar4 = local_48._4_4_ < iVar1;
    local_30 = plVar2;
    local_48 = puStack_20;
    if (bVar4) {
      do {
        puVar3 = *(undefined8 **)(*plVar2 + (longlong)iStack_3c * 0x18);
        if (*(int *)(puVar3 + 7) != *(int *)((longlong)puVar3 + 100)) {
          FUN_142227350(*puVar3,0,1);
          return;
        }
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
      return;
    }
  }
  return;
}



// FUNCTION 1423e9e20 FUN_1423e9e20 body=255 status=ok
// SIG undefined FUN_1423e9e20(void)

undefined8 FUN_1423e9e20(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  bool bVar7;
  longlong local_28 [2];
  longlong local_18 [2];
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    puVar4 = (undefined8 *)UChannel::Describe(param_1,local_28);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*puVar4;
    }
    FString::PrintfImpl(param_2,L"Actor: None %s",puVar6);
  }
  else {
    puVar4 = (undefined8 *)UChannel::Describe(param_1,local_18);
    puVar6 = &DAT_143f3eda8;
    if (*(int *)(puVar4 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*puVar4;
    }
    lVar3 = *(longlong *)(param_1 + 0x68);
    uVar1 = *(undefined1 *)(lVar3 + 0x95);
    uVar2 = *(undefined1 *)(lVar3 + 0x128);
    puVar4 = (undefined8 *)UObjectBaseUtility::GetFullName(lVar3,local_28,0);
    if (*(int *)(puVar4 + 1) != 0) {
      puVar6 = (undefined2 *)*puVar4;
    }
    FString::PrintfImpl(param_2,L"[UActorChannel] Actor: %s, Role: %i, RemoteRole: %i %s",puVar6,
                        uVar2,uVar1,puVar5);
    bVar7 = local_28[0] != 0;
    local_28[0] = local_18[0];
    if (bVar7) {
      FMemory::Free();
      local_28[0] = local_18[0];
    }
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1423e9f20 Describe body=161 status=ok
// SIG undefined Describe(void)

undefined8 UChannel::Describe(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  bool bVar4;
  longlong local_18 [2];
  
  bVar4 = false;
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 == (longlong *)0x0) {
    pwVar3 = L"NULL CONNECTION";
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x298))(plVar1,local_18);
    if (*(int *)(puVar2 + 1) == 0) {
      pwVar3 = L"";
      bVar4 = true;
    }
    else {
      pwVar3 = (wchar_t *)*puVar2;
      bVar4 = true;
    }
  }
  FString::PrintfImpl(param_2,L"[UChannel] ChIndex: %d, Closing: %d %s",
                      *(undefined4 *)(param_1 + 0x34),*(uint *)(param_1 + 0x30) >> 1 & 1,pwVar3);
  if ((bVar4) && (local_18[0] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1423e9fd0 Describe body=23 status=ok
// SIG undefined Describe(void)

undefined8 UControlChannel::Describe(undefined8 param_1,undefined8 param_2)

{
  UChannel::Describe();
  return param_2;
}



// FUNCTION 1423e9ff0 FUN_1423e9ff0 body=1170 status=ok
// SIG undefined FUN_1423e9ff0(void)

void FUN_1423e9ff0(longlong param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  DWORD DVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 local_res8;
  undefined8 local_res10;
  uint local_a8;
  uint uStack_a4;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  uint uStack_80;
  uint uStack_7c;
  uint *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar19 = 0;
  uVar18 = uVar19;
  uVar15 = uVar19;
  if (0 < *(int *)(param_1 + 0x158)) {
    do {
      plVar14 = *(longlong **)(uVar15 + *(longlong *)(param_1 + 0x150));
      if (plVar14 != (longlong *)0x0) {
        FUN_1423f3330(param_1,plVar14);
        if ((*(longlong *)(param_1 + 0x28) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) != 0)) {
          FWeakObjectPtr::operator=(&local_res8,plVar14);
          local_res10 = local_res8;
          FUN_1423f93b0(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 0x300,&local_res10);
        }
        (**(code **)(**(longlong **)(param_1 + 0x68) + 0x2d0))
                  (*(longlong **)(param_1 + 0x68),plVar14);
        (**(code **)(*plVar14 + 0x1f0))(plVar14);
        uVar7 = *(uint *)((longlong)plVar14 + 0xc);
        uVar10 = uVar19;
        if ((int)uVar7 < (int)DAT_1469e91c4) {
          uVar12 = uVar7 & 0xffff;
          if ((int)uVar7 < 0) {
            uVar7 = uVar7 + 0xffff;
            uVar12 = uVar12 - 0x10000;
          }
          uVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                   (longlong)(int)uVar12 * 0x18;
        }
        *(uint *)(uVar10 + 8) = *(uint *)(uVar10 + 8) | 0x20000000;
      }
      uVar7 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar7;
      uVar15 = uVar15 + 8;
    } while ((int)uVar7 < *(int *)(param_1 + 0x158));
  }
  *(undefined4 *)(param_1 + 0x158) = 0;
  if (*(int *)(param_1 + 0x15c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x150,0);
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1423f3330(param_1);
    lVar4 = *(longlong *)(param_1 + 0x68);
    plVar14 = (longlong *)(lVar4 + 0x2b0);
    local_a8 = 0;
    uVar7 = *(uint *)(lVar4 + 0x2d8);
    puVar1 = (uint *)(lVar4 + 0x2c0);
    uStack_a4 = 1;
    uStack_94 = 0;
    uStack_90 = 0;
    if (uVar7 != 0) {
      puVar17 = *(uint **)(lVar4 + 0x2d0);
      if (*(uint **)(lVar4 + 0x2d0) == (uint *)0x0) {
        puVar17 = puVar1;
      }
      uVar12 = *puVar17;
      uVar18 = uVar19;
      uVar15 = uVar19;
      while (uVar12 == 0) {
        iVar8 = (int)uVar18;
        uStack_90 = (int)uVar15 + 0x20;
        uVar15 = (ulonglong)uStack_90;
        local_a8 = iVar8 + 1;
        uVar18 = (ulonglong)local_a8;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
        goto LAB_1423ea1ec;
        uVar12 = puVar17[(longlong)iVar8 + 1];
      }
      uStack_a4 = -uVar12 & uVar12;
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
      uStack_94 = (uStack_90 - iVar8) + 0x1f;
      if ((int)uVar7 < (int)uStack_94) {
LAB_1423ea1ec:
        uStack_94 = uVar7;
      }
    }
    uVar12 = *(uint *)(lVar4 + 0x2d8);
    uStack_70 = CONCAT44(uStack_94,0xffffffff);
    local_68 = CONCAT44(uStack_8c,uStack_90);
    uStack_58 = CONCAT44(uStack_a4,local_a8);
    uVar16 = uVar12 & 0xffffffe0;
    uStack_80 = local_a8;
    uStack_7c = uStack_a4;
    local_78 = puVar1;
    local_60 = plVar14;
    puStack_50 = puVar1;
    uStack_48 = uStack_70;
    uStack_40 = local_68;
    uStack_94 = uVar12;
    if (uVar12 != uVar7) {
      puVar17 = *(uint **)(lVar4 + 0x2d0);
      if (*(uint **)(lVar4 + 0x2d0) == (uint *)0x0) {
        puVar17 = puVar1;
      }
      uVar13 = puVar17[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
      iVar8 = (int)uVar12 >> 5;
      while (uVar13 == 0) {
        uVar16 = uVar16 + 0x20;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
        goto LAB_1423ea2b1;
        uVar13 = puVar17[(longlong)iVar8 + 1];
        iVar8 = iVar8 + 1;
      }
      uVar13 = -uVar13 & uVar13;
      iVar8 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uVar13 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_94 = (uVar16 - iVar8) + 0x1f;
      if ((int)uVar7 < (int)uStack_94) {
LAB_1423ea2b1:
        uStack_94 = uVar7;
      }
    }
    while( true ) {
      if ((uStack_70._4_4_ == uStack_94) && (local_78 == puVar1)) break;
      if (*(longlong *)(*plVar14 + (longlong)(int)uStack_70._4_4_ * 0x10) != 0) {
        FUN_1423f3330(param_1);
      }
      uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_7c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
    }
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x1f0))();
    FUN_142227350(*(undefined8 *)(param_1 + 0x68),1);
  }
  lVar4 = DAT_146aff5e0;
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar9 = GetCurrentThreadId();
    uVar18 = 4;
    if (DVar9 != DAT_1468c21c0) goto LAB_1423ea379;
  }
  uVar18 = uVar19;
LAB_1423ea379:
  if (0 < *(int *)(uVar18 + lVar4)) {
    iVar8 = *(int *)(param_1 + 0x70);
    if ((((iVar8 != 0) && (*(longlong *)(param_1 + 0x28) != 0)) &&
        (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58), lVar4 != 0)) &&
       ((lVar4 = *(longlong *)(lVar4 + 0xe0), lVar4 != 0 &&
        (*(int *)(lVar4 + 0xb0) != *(int *)(lVar4 + 0xdc))))) {
      lVar20 = *(longlong *)(lVar4 + 0xe8);
      if (*(longlong *)(lVar4 + 0xe8) == 0) {
        lVar20 = lVar4 + 0xe0;
      }
      uVar18 = (longlong)*(int *)(lVar4 + 0xf0) - 1;
      iVar3 = *(int *)(lVar20 + ((longlong)iVar8 & uVar18) * 4);
      if (iVar3 != -1) {
        lVar5 = *(longlong *)(lVar4 + 0xa8);
        while (lVar11 = (longlong)iVar3, *(int *)(lVar5 + lVar11 * 0xc) != iVar8) {
          iVar3 = *(int *)(lVar5 + 4 + lVar11 * 0xc);
          if (iVar3 == -1) {
            return;
          }
        }
        uVar18 = (longlong)*(int *)(lVar5 + 8 + lVar11 * 0xc) & uVar18;
        puVar2 = (undefined4 *)(lVar20 + uVar18 * 4);
        iVar8 = *(int *)(lVar20 + uVar18 * 4);
        while (iVar8 != -1) {
          if (iVar8 == iVar3) {
            *puVar2 = *(undefined4 *)(lVar5 + lVar11 * 0xc + 4);
            break;
          }
          lVar20 = (longlong)iVar8 * 3 + 1;
          puVar2 = (undefined4 *)(lVar5 + lVar20 * 4);
          iVar8 = *(int *)(lVar5 + lVar20 * 4);
        }
        TSparseArray<TSetElement<unsigned_char>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::RemoveAtUninitialized((longlong *)(lVar4 + 0xa8),iVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 1423ea490 FUN_1423ea490 body=465 status=ok
// SIG undefined FUN_1423ea490(void)

undefined8
FUN_1423ea490(longlong param_1,float param_2,float *param_3,float param_4,longlong *param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined4 uVar10;
  longlong *plVar9;
  undefined4 uVar12;
  longlong *plVar11;
  undefined4 uVar14;
  longlong *plVar13;
  longlong local_98 [2];
  longlong local_88 [2];
  undefined1 local_78 [96];
  
  plVar1 = param_5;
  uVar6 = 0;
  if (param_5 != (longlong *)0x0) {
    local_98[0] = local_88[0];
    plVar9 = local_98;
    plVar11 = param_5;
    plVar13 = param_5;
    UCanvas::CreateFontRenderInfo
              (*(undefined8 *)(param_1 + 0x4a8),local_78,0,1,plVar9,param_5,param_5);
    uVar3 = UEngine::GetSmallFont();
    iVar7 = 0;
    iVar2 = (**(code **)(*plVar1 + 0x6c8))(plVar1);
    if (0 < iVar2) {
      do {
        lVar4 = (**(code **)(*plVar1 + 0x560))(plVar1,iVar7);
        uVar10 = (undefined4)((ulonglong)plVar9 >> 0x20);
        uVar12 = (undefined4)((ulonglong)plVar11 >> 0x20);
        uVar14 = (undefined4)((ulonglong)plVar13 >> 0x20);
        if (lVar4 != 0) {
          *param_3 = param_4 + *param_3;
          param_5 = *(longlong **)(lVar4 + 0x18);
          puVar5 = (undefined8 *)FName::ToString(&param_5,local_88);
          if (*(int *)(puVar5 + 1) == 0) {
            puVar8 = &DAT_143f3eda8;
          }
          else {
            puVar8 = (undefined2 *)*puVar5;
          }
          FString::PrintfImpl(local_98,L"Material: \'%s\'",puVar8);
          plVar13 = (longlong *)CONCAT44(uVar14,0x3f800000);
          plVar11 = (longlong *)CONCAT44(uVar12,0x3f800000);
          plVar9 = (longlong *)CONCAT44(uVar10,*param_3);
          UCanvas::DrawText(*(undefined8 *)(param_1 + 0x4a8),uVar3,local_98,param_2 + param_4,plVar9
                            ,plVar11,plVar13,local_78);
          if (local_98[0] != 0) {
            FMemory::Free();
          }
          if (local_88[0] != 0) {
            FMemory::Free();
          }
          uVar6 = 1;
        }
        iVar7 = iVar7 + 1;
        iVar2 = (**(code **)(*plVar1 + 0x6c8))(plVar1);
      } while (iVar7 < iVar2);
    }
  }
  return uVar6;
}



// FUNCTION 1423ea670 FUN_1423ea670 body=368 status=ok
// SIG undefined FUN_1423ea670(void)

void FUN_1423ea670(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 local_res18 [16];
  undefined8 in_stack_ffffffffffffff98;
  undefined8 local_38;
  undefined4 local_30;
  
  uVar2 = (uint)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  uVar3 = GetTransientPackage();
  uVar4 = UCanvas::GetPrivateStaticClass();
  lVar5 = FUN_141799410(uVar4,uVar3,L"DebugCanvasObject",0);
  if (lVar5 == 0) {
    plVar6 = (longlong *)FName::FName(local_res18,L"DebugCanvasObject",1);
    lVar5 = *plVar6;
    uVar3 = GetTransientPackage();
    lVar8 = 0;
    if (lVar5 == 0) {
      FUN_1417846f0(uVar3,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    uVar4 = UCanvas::GetPrivateStaticClass();
    lVar5 = FUN_1417985e0(uVar4,uVar3,lVar5,0,(ulonglong)uVar2 << 0x20,0,0,0,0);
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar7;
      lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar7) * 0x18;
    }
    *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | 0x40000000;
  }
  FUN_1428af580(lVar5,*(int *)(param_3 + 0x370) - *(int *)(param_3 + 0x368),
                *(int *)(param_3 + 0x374) - *(int *)(param_3 + 0x36c),param_3,param_4);
  FUN_1428be4f0(lVar5);
  FUN_1428bc8b0(lVar5,param_3);
  local_38 = *param_1;
  local_30 = *(undefined4 *)(param_1 + 1);
  FUN_1423ea7e0(&local_38,lVar5);
  return;
}



// FUNCTION 1423ea7e0 FUN_1423ea7e0 body=406 status=ok
// SIG undefined FUN_1423ea7e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423ea7e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  if ((param_2 != 0) && (iVar6 = 0, 0 < DAT_146af23b0)) {
    lVar10 = 0;
    do {
      cVar3 = FUN_14277a4d0(param_1,iVar6);
      if ((((cVar3 != '\0') && (cVar3 = FUN_14277a4d0(&DAT_146af23b8,iVar6), cVar3 != '\0')) &&
          (iVar8 = *(int *)(lVar10 + 8 + DAT_146af23a8), 0 < iVar8)) &&
         (iVar8 = iVar8 + -1, -1 < iVar8)) {
        lVar7 = (longlong)iVar8 << 4;
        lVar9 = lVar7;
        do {
          lVar2 = *(longlong *)(lVar10 + DAT_146af23a8);
          if (((*(int *)(lVar7 + 8 + lVar2) == 0) ||
              (*(longlong **)(lVar7 + lVar2) == (longlong *)0x0)) ||
             (cVar3 = (**(code **)(**(longlong **)(lVar7 + lVar2) + 0x18))(), cVar3 == '\0')) {
            plVar1 = (longlong *)(lVar10 + DAT_146af23a8);
            TBaseDelegate<FText>::~TBaseDelegate<FText>
                      (*(longlong *)(lVar10 + DAT_146af23a8) + lVar9);
            iVar5 = (int)plVar1[1];
            iVar4 = (iVar5 - iVar8) + -1;
            if (0 < iVar4) {
              iVar4 = 1;
            }
            if (iVar4 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar9 + *plVar1),
                         (void *)((longlong)(iVar5 - iVar4) * 0x10 + *plVar1),(longlong)iVar4 << 4);
              iVar5 = (int)plVar1[1];
            }
            *(int *)(plVar1 + 1) = iVar5 + -1;
          }
          else if (*(int *)(lVar7 + 8 + lVar2) == 0) {
            (**(code **)(_DAT_00000000 + 0x38))(0,param_2,0);
          }
          else {
            (**(code **)(**(longlong **)(lVar7 + lVar2) + 0x38))
                      (*(longlong **)(lVar7 + lVar2),param_2);
          }
          lVar9 = lVar9 + -0x10;
          lVar7 = lVar7 + -0x10;
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
      }
      iVar6 = iVar6 + 1;
      lVar10 = lVar10 + 0x10;
    } while (iVar6 < DAT_146af23b0);
  }
  return;
}



// FUNCTION 1423ea980 FUN_1423ea980 body=814 status=ok
// SIG undefined FUN_1423ea980(void)

void FUN_1423ea980(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_res8;
  float local_resc;
  float local_res18;
  float local_res1c;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined1 local_108 [16];
  undefined1 local_f8 [20];
  undefined4 local_e4;
  
  if ((char)param_1[5] != '\0') {
    fVar6 = *(float *)(param_1 + 7);
    fVar7 = *(float *)((longlong)param_1 + 0x3c);
    iVar5 = *(int *)(param_2 + 0x40);
    fVar8 = (float)*(int *)(param_2 + 0x44);
    local_res8 = (float)iVar5 * *(float *)(param_1 + 6);
    local_resc = fVar8 - fVar8 * *(float *)((longlong)param_1 + 0x34);
    FLinearColor::FLinearColor(local_108,param_1 + 0x13);
    local_res18 = (float)iVar5 * fVar6 - local_res8;
    local_res1c = (fVar8 - fVar8 * fVar7) - local_resc;
    FCanvasTileItem::FCanvasTileItem(local_f8,&local_res8,DAT_146ac3d68,&local_res18,local_108);
    local_e4 = 2;
    UCanvas::DrawItem(param_2,local_f8,&local_res8);
    if (*(int *)((longlong)param_1 + 0x8c) == 0) {
      UReporterGraph::DrawAxes(param_1,param_2);
      FUN_1423eb900(param_1,param_2);
    }
    else if (*(int *)((longlong)param_1 + 0x8c) == 1) {
      FUN_1423eb900(param_1,param_2);
      UReporterGraph::DrawAxes(param_1,param_2);
    }
    FUN_1423ec140(param_1,param_2);
    if ((*(byte *)(param_1 + 0x14) & 2) == 0) {
      uVar2 = UEngine::GetSmallFont();
    }
    else {
      uVar2 = UEngine::GetTinyFont();
    }
    iVar5 = 0;
    if (0 < (int)param_1[0xb]) {
      lVar3 = 0;
      do {
        fVar6 = *(float *)(lVar3 + param_1[10]);
        if (*(float *)((longlong)param_1 + 0x4c) <= fVar6) {
          return;
        }
        fVar7 = (-1.0 / (*(float *)(param_1 + 9) - *(float *)(param_1 + 8))) *
                *(float *)(param_1 + 8);
        if (0.0 <= fVar7) {
          if (1.0 <= fVar7) {
            fVar7 = 1.0;
          }
        }
        else {
          fVar7 = 0.0;
        }
        fVar6 = (fVar6 - *(float *)((longlong)param_1 + 0x44)) /
                (*(float *)((longlong)param_1 + 0x4c) - *(float *)((longlong)param_1 + 0x44));
        if (0.0 <= fVar6) {
          if (1.0 <= fVar6) {
            fVar6 = 1.0;
          }
        }
        else {
          fVar6 = 0.0;
        }
        local_res8 = *(float *)(param_1 + 7);
        local_resc = (*(float *)((longlong)param_1 + 0x3c) - *(float *)((longlong)param_1 + 0x34)) *
                     fVar6 + *(float *)((longlong)param_1 + 0x34);
        local_res18 = (local_res8 - *(float *)(param_1 + 6)) * fVar7 + *(float *)(param_1 + 6);
        local_res1c = local_resc;
        FUN_1423ec570(param_1,param_2,&local_res18,&local_res8,
                      param_1[10] + 4 + (longlong)iVar5 * 0x28,1);
        (**(code **)(*param_1 + 0x280))(param_1,&local_res20,&local_res8,param_2);
        lVar1 = param_1[10];
        if (*(int *)(lVar3 + 0x20 + lVar1) == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = *(undefined2 **)(lVar3 + 0x18 + lVar1);
        }
        FUN_1428a6e00(*(undefined8 *)(param_2 + 0x260),local_res20,local_res24,puVar4,uVar2,
                      lVar1 + (longlong)iVar5 * 0x28 + 4,&DAT_1464aa6e0);
        iVar5 = iVar5 + 1;
        lVar3 = lVar3 + 0x28;
      } while (iVar5 < (int)param_1[0xb]);
    }
  }
  return;
}



// FUNCTION 1423eacb0 DrawAxes body=590 status=ok
// SIG undefined DrawAxes(void)

void UReporterGraph::DrawAxes(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  int local_res8 [2];
  int local_res10 [2];
  float local_res18;
  float fStackX_1c;
  float local_res20;
  float fStackX_24;
  undefined2 *local_90;
  int local_88;
  
  fVar1 = *(float *)(param_1 + 0x3c);
  fVar2 = *(float *)(param_1 + 0x34);
  fVar3 = *(float *)(param_1 + 0x30);
  fVar4 = *(float *)(param_1 + 0x38);
  local_res18 = fVar4;
  fStackX_1c = fVar2;
  local_res20 = fVar3;
  fStackX_24 = fVar2;
  if ((*(byte *)(param_1 + 0xa0) & 2) == 0) {
    uVar7 = UEngine::GetSmallFont();
  }
  else {
    uVar7 = UEngine::GetTinyFont();
  }
  FString::PrintfImpl(&local_90,L"%.2f",(double)*(float *)(param_1 + 0x48));
  puVar8 = &DAT_143f3eda8;
  if (local_88 != 0) {
    puVar8 = local_90;
  }
  StringSize(uVar7,local_res8,local_res10,puVar8);
  if (local_90 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  uVar5 = CONCAT44(fStackX_24,local_res20);
  fVar4 = ((fVar4 - fVar3) * (float)*(int *)(param_2 + 0x40) * 0.7) / (float)local_res8[0];
  iVar6 = -((int)ROUND(-0.5 - (fVar4 + fVar4)) >> 1);
  *(int *)(param_1 + 0x80) = iVar6;
  FUN_1423eaf00(param_1,param_2,uVar5,CONCAT44(fStackX_1c,local_res18),(float)iVar6,0);
  FString::PrintfImpl(&local_90,L"%.2f",(double)*(float *)(param_1 + 0x4c));
  puVar8 = &DAT_143f3eda8;
  if (local_88 != 0) {
    puVar8 = local_90;
  }
  StringSize(uVar7,local_res8,local_res10,puVar8);
  if (local_90 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  fVar2 = ((fVar1 - fVar2) * (float)*(int *)(param_2 + 0x44) * 0.7) / (float)local_res10[0];
  iVar6 = -((int)ROUND(-0.5 - (fVar2 + fVar2)) >> 1);
  *(int *)(param_1 + 0x84) = iVar6;
  FUN_1423eaf00(param_1,param_2,uVar5,CONCAT44(fVar1,fVar3),(float)iVar6,1);
  return;
}



// FUNCTION 1423eaf00 FUN_1423eaf00 body=2558 status=ok
// SIG undefined FUN_1423eaf00(void)

void FUN_1423eaf00(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  float param_5,int param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  float fVar11;
  char cVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined4 *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  undefined2 *puVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [12];
  undefined1 auVar30 [12];
  undefined1 auVar31 [12];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float local_res8;
  float local_resc;
  undefined8 local_1a8;
  float local_1a0;
  float fStack_19c;
  undefined2 *local_198;
  undefined8 local_190;
  float local_188;
  float local_184;
  undefined2 *local_180;
  int local_178;
  undefined4 local_174;
  float local_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  undefined8 local_160;
  undefined **local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined1 local_118 [16];
  undefined4 local_108;
  undefined8 local_f8;
  undefined1 local_f0 [8];
  undefined1 local_e8 [176];
  
  local_150 = (undefined4)DAT_1468b5d88;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_108 = 0;
  local_120 = 0;
  pfVar1 = (float *)(param_1 + 0xe);
  local_158 = &PTR_FUN_14416c998;
  local_118 = ZEXT816(0);
  local_130 = *(longlong *)pfVar1;
  uStack_128 = param_1[0xf];
  local_14c = DAT_1468b5d88._4_4_;
  local_160 = param_3;
  local_f8 = param_4;
  puVar16 = (undefined4 *)(**(code **)(*param_1 + 0x280))(param_1,&local_188,&local_f8,param_2);
  puVar17 = (undefined8 *)(**(code **)(*param_1 + 0x280))(param_1,&local_1a0,&local_160,param_2);
  auVar15 = local_118;
  local_120 = *puVar17;
  local_118._4_4_ = *puVar16;
  local_118._12_4_ = auVar15._12_4_;
  local_118._8_4_ = puVar16[1];
  (*(code *)local_158[3])(&local_158,*(undefined8 *)(param_2 + 0x260));
  fVar28 = *(float *)(param_1 + 9);
  fVar32 = *(float *)((longlong)param_1 + 0x4c);
  fVar2 = *(float *)(param_1 + 8);
  fVar3 = *(float *)((longlong)param_1 + 0x44);
  fVar27 = 1.0 / param_5;
  fVar25 = SQRT((local_160._4_4_ - local_f8._4_4_) * (local_160._4_4_ - local_f8._4_4_) +
                ((float)local_160 - (float)local_f8) * ((float)local_160 - (float)local_f8));
  fVar35 = fVar25 * fVar27;
  local_170 = *pfVar1;
  fStack_16c = *(float *)((longlong)param_1 + 0x74);
  fStack_168 = *(float *)(param_1 + 0xf);
  fStack_164 = *(float *)((longlong)param_1 + 0x7c);
  iVar21 = (int)param_1[0x11];
  cVar12 = (char)param_6;
  fVar33 = 0.0;
  local_res8 = (float)local_160;
  local_resc = local_160._4_4_;
  if (iVar21 == 0) {
    fVar34 = 1.0;
  }
  else {
    fVar34 = param_5;
    fVar25 = fVar35;
    if (iVar21 != 1) {
      if (iVar21 == 2) {
        local_170 = local_170 * 0.125;
        fStack_16c = fStack_16c * 0.125;
        fStack_168 = fStack_168 * 0.125;
        fStack_164 = fStack_164 * 0.125;
        if ((char)param_6 == '\0') {
          fVar33 = (float)local_f8 - (float)local_160;
        }
      }
      goto LAB_1423eb152;
    }
  }
  param_5 = fVar25;
  fVar35 = param_5;
  if ((char)param_6 == '\0') {
    fVar33 = ((float)local_f8 - (float)local_160) * -0.05;
    local_resc = local_160._4_4_ - ((float)local_f8 - (float)local_160) * -0.025;
  }
  else {
    local_res8 = (float)local_160 - (local_f8._4_4_ - local_160._4_4_) * -0.025;
  }
LAB_1423eb152:
  param_5 = fVar35;
  fVar14 = fStack_164;
  fVar13 = fStack_168;
  fVar35 = fStack_16c;
  fVar25 = local_170;
  if ((*(byte *)(param_1 + 0x14) & 2) == 0) {
    uVar18 = UEngine::GetSmallFont();
  }
  else {
    uVar18 = UEngine::GetTinyFont();
  }
  fVar11 = param_5;
  fVar4 = *(float *)(param_1 + 7);
  fVar5 = *(float *)((longlong)param_1 + 0x3c);
  iVar21 = 0;
  fVar6 = *(float *)(param_1 + 6);
  fVar7 = *(float *)((longlong)param_1 + 0x34);
  if (0.0 < fVar34 + 1.0) {
    fVar26 = 0.0;
    do {
      if (cVar12 == '\0') {
        fVar26 = (fVar28 - fVar2) * fVar27 * fVar26 + *(float *)(param_1 + 8);
      }
      else {
        fVar26 = (fVar32 - fVar3) * fVar27 * fVar26 + *(float *)((longlong)param_1 + 0x44);
      }
      FString::PrintfImpl(&local_198,L"%1.2f",(double)fVar26);
      puVar20 = &DAT_143f3eda8;
      if ((int)local_190 != 0) {
        puVar20 = local_198;
      }
      StringSize(uVar18,&param_6,&param_5,puVar20);
      (**(code **)(*param_1 + 0x280))(param_1,&local_1a8,&local_res8,param_2);
      if (cVar12 == '\0') {
        if ((int)param_1[0x11] == 2) {
          auVar29 = ZEXT812(0x40a00000);
        }
        else {
          auVar29._0_8_ = (ulonglong)(uint)((float)*(int *)(param_2 + 0x44) * fVar33) ^ 0x80000000;
          auVar29._8_4_ = 0;
        }
        auVar8._4_8_ = auVar29._4_8_;
        auVar8._0_4_ = auVar29._0_4_ + local_1a8._4_4_;
        puVar20 = &DAT_143f3eda8;
        if ((int)local_190 != 0) {
          puVar20 = local_198;
        }
        FUN_1428a6e00(*(undefined8 *)(param_2 + 0x260),(float)local_1a8 - (float)param_6 * 0.5,
                      auVar8._0_8_,puVar20,uVar18,pfVar1,&DAT_1464aa6e0);
        local_188 = local_res8;
        local_184 = (fVar5 - fVar7) + local_resc;
        local_158 = &PTR_FUN_14416c998;
        local_150 = (undefined4)DAT_1468b5d88;
        local_118 = ZEXT416(0);
        local_14c = DAT_1468b5d88._4_4_;
        local_148 = 0;
        local_140 = 0;
        local_138 = 0;
        local_108 = 0;
        local_120 = 0;
        local_130 = CONCAT44(fVar35,fVar25);
        uStack_128 = CONCAT44(fVar14,fVar13);
        puVar16 = (undefined4 *)
                  (**(code **)(*param_1 + 0x280))(param_1,&local_180,&local_188,param_2);
        puVar17 = (undefined8 *)
                  (**(code **)(*param_1 + 0x280))(param_1,&local_170,&local_res8,param_2);
        auVar15 = local_118;
        local_120 = *puVar17;
        local_118._4_4_ = *puVar16;
        local_118._12_4_ = auVar15._12_4_;
        local_118._8_4_ = puVar16[1];
        (*(code *)local_158[3])(&local_158,*(undefined8 *)(param_2 + 0x260));
        local_res8 = local_res8 + fVar11;
      }
      else {
        puVar20 = &DAT_143f3eda8;
        if ((int)local_190 != 0) {
          puVar20 = local_198;
        }
        FUN_1428a6e00(*(undefined8 *)(param_2 + 0x260),((float)local_1a8 - (float)param_6) - 4.0,
                      local_1a8._4_4_ - (float)(int)param_5 * 0.5,puVar20,uVar18,pfVar1,
                      &DAT_1464aa6e0);
        local_158 = &PTR_FUN_14416c998;
        local_150 = (undefined4)DAT_1468b5d88;
        local_148 = 0;
        local_140 = 0;
        _local_1a0 = CONCAT44(local_resc,(fVar4 - fVar6) + local_res8);
        local_14c = DAT_1468b5d88._4_4_;
        local_118 = ZEXT416(0);
        local_138 = 0;
        local_108 = 0;
        local_120 = 0;
        local_130 = CONCAT44(fVar35,fVar25);
        uStack_128 = CONCAT44(fVar14,fVar13);
        puVar16 = (undefined4 *)(**(code **)(*param_1 + 0x280))(param_1,local_f0,&local_1a0,param_2)
        ;
        puVar17 = (undefined8 *)
                  (**(code **)(*param_1 + 0x280))(param_1,local_e8,&local_res8,param_2);
        auVar15 = local_118;
        local_120 = *puVar17;
        local_118._4_4_ = *puVar16;
        local_118._12_4_ = auVar15._12_4_;
        local_118._8_4_ = puVar16[1];
        (*(code *)local_158[3])(&local_158,*(undefined8 *)(param_2 + 0x260));
        local_resc = local_resc + fVar11;
      }
      if (local_198 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      iVar21 = iVar21 + 1;
      fVar26 = (float)iVar21;
    } while (fVar26 < fVar34 + 1.0);
  }
  uVar19 = 0;
  if (((cVar12 != '\0') && ((*(byte *)(param_1 + 0x14) & 8) != 0)) &&
     (uVar23 = uVar19, 0 < (int)param_1[0xd])) {
    do {
      if (*(int *)(uVar19 + 8 + param_1[0xc]) != 0) {
        fVar28 = ((float)local_160 - *(float *)(param_1 + 8)) /
                 (*(float *)(param_1 + 9) - *(float *)(param_1 + 8));
        if (0.0 <= fVar28) {
          if (1.0 <= fVar28) {
            fVar28 = 1.0;
          }
        }
        else {
          fVar28 = 0.0;
        }
        fVar32 = (*(float *)(uVar19 + 0x24 + param_1[0xc]) - *(float *)((longlong)param_1 + 0x44)) /
                 (*(float *)((longlong)param_1 + 0x4c) - *(float *)((longlong)param_1 + 0x44));
        if (0.0 <= fVar32) {
          if (1.0 <= fVar32) {
            fVar32 = 1.0;
          }
        }
        else {
          fVar32 = 0.0;
        }
        local_188 = (*(float *)(param_1 + 7) - *(float *)(param_1 + 6)) * fVar28 +
                    *(float *)(param_1 + 6);
        local_184 = (*(float *)((longlong)param_1 + 0x3c) - *(float *)((longlong)param_1 + 0x34)) *
                    fVar32 + *(float *)((longlong)param_1 + 0x34);
        (**(code **)(*param_1 + 0x280))(param_1,&local_1a8,&local_188,param_2);
        FString::PrintfImpl(&local_180,L"%.2f",(double)*(float *)(uVar19 + 0x24 + param_1[0xc]));
        puVar20 = &DAT_143f3eda8;
        if (local_178 != 0) {
          puVar20 = local_180;
        }
        StringSize(uVar18,&param_6,&param_5,puVar20);
        if ((int)param_1[0x11] == 2) {
          auVar30 = ZEXT812(0x40a00000);
        }
        else {
          auVar30._0_8_ = (ulonglong)(uint)((float)*(int *)(param_2 + 0x44) * fVar33) ^ 0x80000000;
          auVar30._8_4_ = 0;
        }
        puVar20 = &DAT_143f3eda8;
        if (local_178 != 0) {
          puVar20 = local_180;
        }
        auVar9._4_8_ = auVar30._4_8_;
        auVar9._0_4_ = auVar30._0_4_ + local_1a8._4_4_;
        lVar24 = (longlong)(int)uVar23 * 0x40;
        FUN_1428a6e00(*(undefined8 *)(param_2 + 0x260),(float)local_1a8 - (float)param_6 * 0.5,
                      auVar9._0_8_,puVar20,uVar18,param_1[0xc] + 0x10 + lVar24,&DAT_1464aa6e0);
        fVar28 = ((float)((ulonglong)
                          *(undefined8 *)
                           (*(longlong *)(uVar19 + param_1[0xc]) + -8 +
                           (longlong)*(int *)(uVar19 + 8 + param_1[0xc]) * 8) >> 0x20) -
                 *(float *)((longlong)param_1 + 0x44)) /
                 (*(float *)((longlong)param_1 + 0x4c) - *(float *)((longlong)param_1 + 0x44));
        if (0.0 <= fVar28) {
          if (1.0 <= fVar28) {
            fVar28 = 1.0;
          }
        }
        else {
          fVar28 = 0.0;
        }
        _local_1a0 = CONCAT44((*(float *)((longlong)param_1 + 0x3c) -
                              *(float *)((longlong)param_1 + 0x34)) * fVar28 +
                              *(float *)((longlong)param_1 + 0x34),(int)param_1[7]);
        puVar17 = (undefined8 *)
                  (**(code **)(*param_1 + 0x280))(param_1,&local_170,&local_1a0,param_2);
        local_1a8 = *puVar17;
        FString::PrintfImpl(&local_198,L"%.2f",(double)*(float *)(uVar19 + 0x2c + param_1[0xc]));
        if (local_180 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_180 = local_198;
        puVar20 = &DAT_143f3eda8;
        if ((int)local_190 != 0) {
          puVar20 = local_198;
        }
        local_178 = (int)local_190;
        local_198 = (undefined2 *)0x0;
        local_174 = local_190._4_4_;
        local_190 = 0;
        StringSize(uVar18,&param_6,&param_5,puVar20);
        if ((int)param_1[0x11] == 2) {
          auVar31 = ZEXT812(0x40a00000);
        }
        else {
          auVar31._0_8_ = (ulonglong)(uint)((float)*(int *)(param_2 + 0x44) * fVar33) ^ 0x80000000;
          auVar31._8_4_ = 0;
        }
        puVar20 = &DAT_143f3eda8;
        if (local_178 != 0) {
          puVar20 = local_180;
        }
        auVar10._4_8_ = auVar31._4_8_;
        auVar10._0_4_ = auVar31._0_4_ + local_1a8._4_4_;
        FUN_1428a6e00(*(undefined8 *)(param_2 + 0x260),(float)local_1a8 - (float)param_6 * 0.5,
                      auVar10._0_8_,puVar20,uVar18,param_1[0xc] + 0x10 + lVar24,&DAT_1464aa6e0);
        if (local_180 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
      uVar22 = (int)uVar23 + 1;
      uVar19 = uVar19 + 0x40;
      uVar23 = (ulonglong)uVar22;
    } while ((int)uVar22 < (int)param_1[0xd]);
  }
  return;
}



// FUNCTION 1423eb900 FUN_1423eb900 body=2109 status=ok
// SIG undefined FUN_1423eb900(void)

void FUN_1423eb900(longlong *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined4 *puVar7;
  undefined8 *puVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  undefined2 *puVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_res8;
  undefined8 local_res10;
  int local_res18 [2];
  float local_res20;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float fStack_1a4;
  float local_1a0;
  float fStack_19c;
  undefined **local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined1 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined1 local_158 [16];
  undefined4 local_148;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  undefined8 local_120;
  undefined1 local_118 [8];
  undefined2 *local_110;
  int local_108;
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined1 local_f0 [176];
  
  fVar20 = (float)*(int *)(param_2 + 0x44);
  fVar20 = (*(float *)((longlong)param_1 + 0x3c) - *(float *)((longlong)param_1 + 0x34)) /
           ABS((fVar20 - fVar20 * *(float *)((longlong)param_1 + 0x3c)) -
               (fVar20 - fVar20 * *(float *)((longlong)param_1 + 0x34)));
  local_res20 = fVar20;
  if ((*(byte *)(param_1 + 0x14) & 2) == 0) {
    local_120 = UEngine::GetSmallFont();
  }
  else {
    local_120 = UEngine::GetTinyFont();
  }
  StringSize(local_120,local_res18,local_118,&DAT_145076194);
  local_res8 = 0.0;
  if (((*(byte *)(param_1 + 0x14) & 4) != 0) && (*(int *)((longlong)param_1 + 0x8c) == 0)) {
    fVar18 = (*(float *)((longlong)param_1 + 0x9c) - *(float *)(param_1 + 8)) /
             (*(float *)(param_1 + 9) - *(float *)(param_1 + 8));
    if (0.0 <= fVar18) {
      fVar17 = fVar18;
      if (1.0 <= fVar18) {
        fVar17 = 1.0;
      }
    }
    else {
      fVar17 = 0.0;
    }
    local_1b8 = *(float *)(param_1 + 6);
    local_1b4 = *(float *)((longlong)param_1 + 0x34);
    local_res10 = CONCAT44((*(float *)((longlong)param_1 + 0x3c) - local_1b4) * 1.0 + local_1b4,
                           fVar17 * (*(float *)(param_1 + 7) - local_1b8) + local_1b8);
    if (0.0 <= fVar18) {
      if (1.0 <= fVar18) {
        fVar18 = 1.0;
      }
    }
    else {
      fVar18 = 0.0;
    }
    local_188 = 0;
    local_18c = DAT_1468b5d88._4_4_;
    local_180 = 0;
    local_1b8 = fVar18 * (*(float *)(param_1 + 7) - local_1b8) + local_1b8;
    local_190 = (undefined4)DAT_1468b5d88;
    local_178 = 0;
    local_158 = ZEXT416(0);
    local_198 = &PTR_FUN_14416c998;
    local_148 = 0;
    local_160 = 0;
    local_170 = DAT_1464aa6c0;
    uStack_16c = DAT_1464aa6c4;
    uStack_168 = DAT_1464aa6c8;
    uStack_164 = DAT_1464aa6cc;
    puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x280))(param_1,&local_1a0,&local_res10,param_2);
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x280))(param_1,&local_1a8,&local_1b8,param_2);
    auVar6 = local_158;
    local_160 = *puVar8;
    local_158._4_4_ = *puVar7;
    local_158._12_4_ = auVar6._12_4_;
    local_158._8_4_ = puVar7[1];
    (*(code *)local_198[3])(&local_198,*(undefined8 *)(param_2 + 0x260));
  }
  uVar13 = 0;
  uVar16 = uVar13;
  if (0 < (int)param_1[0xd]) {
    do {
      if (((*(byte *)(param_1 + 0x14) & 1) != 0) && ((uVar16 & 1) != 0)) {
        local_res8 = local_res8 + fVar20;
      }
      lVar10 = param_1[0xc];
      iVar14 = 1;
      iVar15 = (int)uVar16;
      if (1 < *(int *)(lVar10 + 8 + uVar13)) {
        lVar11 = 8;
        do {
          lVar5 = *(longlong *)(uVar13 + lVar10);
          fVar20 = *(float *)(param_1 + 8);
          fVar18 = *(float *)(lVar5 + -8 + lVar11);
          fVar17 = *(float *)(lVar5 + -4 + lVar11);
          fVar1 = *(float *)(lVar5 + lVar11);
          fVar2 = *(float *)(lVar5 + 4 + lVar11);
          fVar21 = 1.0 / (*(float *)(param_1 + 9) - fVar20);
          local_res10 = CONCAT44(local_res10._4_4_,fVar17);
          fVar22 = (fVar18 - fVar20) * fVar21;
          if (0.0 <= fVar22) {
            if (1.0 <= fVar22) {
              fVar22 = 1.0;
            }
          }
          else {
            fVar22 = 0.0;
          }
          fVar3 = *(float *)((longlong)param_1 + 0x44);
          fVar19 = 1.0 / (*(float *)((longlong)param_1 + 0x4c) - fVar3);
          fVar17 = (fVar17 - fVar3) * fVar19;
          if (0.0 <= fVar17) {
            if (1.0 <= fVar17) {
              fVar17 = 1.0;
            }
          }
          else {
            fVar17 = 0.0;
          }
          fVar4 = *(float *)((longlong)param_1 + 0x34);
          fVar23 = *(float *)((longlong)param_1 + 0x3c) - fVar4;
          fVar21 = (fVar1 - fVar20) * fVar21;
          fVar20 = fVar22 * (*(float *)(param_1 + 7) - *(float *)(param_1 + 6)) +
                   *(float *)(param_1 + 6);
          fStack_1a4 = fVar17 * fVar23 + fVar4;
          if (0.0 <= fVar21) {
            if (1.0 <= fVar21) {
              fVar21 = 1.0;
            }
          }
          else {
            fVar21 = 0.0;
          }
          fVar19 = (fVar2 - fVar3) * fVar19;
          if (0.0 <= fVar19) {
            if (1.0 <= fVar19) {
              fVar19 = 1.0;
            }
          }
          else {
            fVar19 = 0.0;
          }
          fVar17 = fVar21 * (*(float *)(param_1 + 7) - *(float *)(param_1 + 6)) +
                   *(float *)(param_1 + 6);
          fStack_19c = fVar19 * fVar23 + fVar4;
          local_1a8 = fVar20;
          local_1a0 = fVar17;
          if (*(int *)((longlong)param_1 + 0x8c) == 0) {
            if ((uVar16 & 1) == 0) {
              fVar21 = -1.0;
            }
            else {
              fVar21 = 1.0;
            }
            fVar21 = fVar21 * local_res8;
            local_178 = 0;
            local_198 = &PTR_FUN_14416c998;
            local_12c = fStack_1a4 + fVar21;
            local_188 = 0;
            local_134 = fStack_19c + fVar21;
            local_180 = 0;
            local_138 = fVar17 + fVar21;
            local_148 = 0;
            local_130 = fVar20 + fVar21;
            local_160 = 0;
            local_18c = DAT_1468b5d88._4_4_;
            puVar7 = (undefined4 *)(lVar10 + 0x10 + uVar13);
            local_170 = *puVar7;
            uStack_16c = puVar7[1];
            uStack_168 = puVar7[2];
            uStack_164 = puVar7[3];
            local_190 = (undefined4)DAT_1468b5d88;
            local_158 = ZEXT816(0);
            puVar7 = (undefined4 *)
                     (**(code **)(*param_1 + 0x280))(param_1,local_100,&local_138,param_2);
            puVar8 = (undefined8 *)
                     (**(code **)(*param_1 + 0x280))(param_1,local_f8,&local_130,param_2);
            auVar6 = local_158;
            local_160 = *puVar8;
            local_158._4_4_ = *puVar7;
            local_158._12_4_ = auVar6._12_4_;
            local_158._8_4_ = puVar7[1];
            (*(code *)local_198[3])(&local_198,*(undefined8 *)(param_2 + 0x260));
            if ((((*(byte *)(param_1 + 0x14) & 4) != 0) &&
                (fVar20 = *(float *)((longlong)param_1 + 0x9c), fVar18 <= fVar20)) &&
               (fVar20 < fVar1)) {
              fVar20 = (fVar20 - fVar18) / (fVar1 - fVar18);
              fVar17 = (fVar2 - (float)local_res10) * fVar20 + (float)local_res10;
              fVar20 = (((fVar1 - fVar18) * fVar20 + fVar18) - *(float *)(param_1 + 8)) /
                       (*(float *)(param_1 + 9) - *(float *)(param_1 + 8));
              if (0.0 <= fVar20) {
                if (1.0 <= fVar20) {
                  fVar20 = 1.0;
                }
              }
              else {
                fVar20 = 0.0;
              }
              fVar18 = (fVar17 - *(float *)((longlong)param_1 + 0x44)) /
                       (*(float *)((longlong)param_1 + 0x4c) - *(float *)((longlong)param_1 + 0x44))
              ;
              if (0.0 <= fVar18) {
                if (1.0 <= fVar18) {
                  fVar18 = 1.0;
                }
              }
              else {
                fVar18 = 0.0;
              }
              local_128 = (*(float *)(param_1 + 7) - *(float *)(param_1 + 6)) * fVar20 +
                          *(float *)(param_1 + 6);
              local_124 = (*(float *)((longlong)param_1 + 0x3c) -
                          *(float *)((longlong)param_1 + 0x34)) * fVar18 +
                          *(float *)((longlong)param_1 + 0x34);
              pfVar9 = (float *)(**(code **)(*param_1 + 0x280))(param_1,local_f0,&local_128,param_2)
              ;
              lVar10 = param_1[0xc];
              fVar20 = *pfVar9;
              fVar18 = pfVar9[1];
              FString::PrintfImpl(&local_110,L"%1.2f",(double)fVar17);
              puVar12 = &DAT_143f3eda8;
              if (local_108 != 0) {
                puVar12 = local_110;
              }
              FUN_1428a6e00(*(undefined8 *)(param_2 + 0x260),fVar21 + fVar20 + (float)local_res18[0]
                            ,fVar21 + fVar18,puVar12,local_120,
                            lVar10 + 0x10 + (longlong)iVar15 * 0x40,&DAT_1464aa6e0);
              if (local_110 != (undefined2 *)0x0) {
                FMemory::Free();
              }
            }
          }
          else {
            local_res10 = CONCAT44(fStack_1a4,fVar20);
            local_1b4 = fVar3 * fVar23 + fVar4;
            local_1b8 = fVar20;
            local_1b0 = fVar17;
            local_1ac = fStack_19c;
            FUN_1423ec8f0(param_1,param_2,&local_1b8,&local_1b0,&local_res10,
                          lVar10 + 0x10 + (longlong)iVar15 * 0x40);
            local_res10 = CONCAT44(fStack_19c,local_1a0);
            local_1b4 = (*(float *)((longlong)param_1 + 0x3c) - *(float *)((longlong)param_1 + 0x34)
                        ) * *(float *)((longlong)param_1 + 0x44) +
                        *(float *)((longlong)param_1 + 0x34);
            local_1b8 = fVar20;
            local_1b0 = fVar17;
            local_1ac = local_1b4;
            FUN_1423ec8f0(param_1,param_2,&local_1b8,&local_1b0,&local_res10,
                          param_1[0xc] + 0x10 + (longlong)iVar15 * 0x40);
          }
          lVar10 = param_1[0xc];
          iVar14 = iVar14 + 1;
          lVar11 = lVar11 + 8;
          fVar20 = local_res20;
        } while (iVar14 < *(int *)(lVar10 + 8 + uVar13));
      }
      uVar13 = uVar13 + 0x40;
      uVar16 = (ulonglong)(iVar15 + 1U);
    } while ((int)(iVar15 + 1U) < (int)param_1[0xd]);
  }
  return;
}



// FUNCTION 1423ec140 FUN_1423ec140 body=1060 status=ok
// SIG undefined FUN_1423ec140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423ec140(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  short *psVar10;
  uint uVar11;
  undefined2 *puVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_268 [32];
  int local_248 [2];
  undefined4 local_240;
  float fStack_23c;
  undefined1 local_238 [8];
  longlong local_230;
  ulonglong local_228;
  float local_220;
  undefined4 local_21c;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined1 local_200 [8];
  longlong *local_1f8;
  undefined **local_1e8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined1 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  uint local_1a8;
  uint local_1a4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined2 local_160;
  undefined1 local_15e;
  undefined8 local_15c;
  undefined8 uStack_154;
  undefined1 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 local_140 [136];
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined8 local_a0;
  longlong *local_60;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  fStack_23c = (float)((ulonglong)param_1[7] >> 0x20);
  _local_240 = CONCAT44(fStack_23c,(int)param_1[6]);
  local_218 = param_2;
  if ((*(byte *)(param_1 + 0x14) & 2) == 0) {
    uVar7 = UEngine::GetSmallFont();
  }
  else {
    uVar7 = UEngine::GetTinyFont();
  }
  StringSize(uVar7,local_248,local_238,L"99.99");
  uVar14 = 0;
  iVar13 = -local_248[0];
  uVar15 = uVar14;
  if (0 < (int)param_1[0xd]) {
    do {
      (**(code **)(*param_1 + 0x280))(param_1,&local_220,&local_240,param_2);
      iVar6 = iVar13;
      if ((int)param_1[0x12] == 0) {
        if (*(int *)(uVar14 + 0x38 + param_1[0xc]) == 0) {
          puVar12 = &DAT_143f3eda8;
        }
        else {
          puVar12 = *(undefined2 **)(uVar14 + 0x30 + param_1[0xc]);
        }
        StringSize(uVar7,local_248,local_238,puVar12);
        iVar6 = local_248[0] + 10;
      }
      *(float *)((longlong)param_1 + 0x94) = (float)iVar6;
      if (*(int *)(uVar14 + 0x38 + param_1[0xc]) == 0) {
        psVar10 = &DAT_143f3eda8;
      }
      else {
        psVar10 = *(short **)(uVar14 + 0x30 + param_1[0xc]);
      }
      local_228 = 0;
      local_230 = 0;
      if ((psVar10 != (short *)0x0) && (*psVar10 != 0)) {
        lVar8 = -1;
        do {
          lVar4 = lVar8 + 1;
          lVar8 = lVar8 + 1;
        } while (psVar10[lVar4] != 0);
        uVar11 = (int)lVar8 + 1;
        local_228 = (ulonglong)uVar11;
        if (0 < (int)uVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_230,0);
        }
        FGenericPlatformString::Memcpy(local_230,psVar10,(longlong)(int)uVar11 * 2);
      }
      lVar8 = param_1[0xc];
      uVar9 = FText::FromString(local_200,&local_230);
      local_1a8 = local_1a8 & 0xfffffffc;
      local_1a4 = local_1a4 & 0xfffffffe;
      local_1c0 = _DAT_1464aa6c0;
      uStack_1b8 = _DAT_1464aa6c8;
      local_1a0 = 0;
      uStack_198 = 0;
      local_1d8 = 0;
      local_1d0 = 0;
      local_1c8 = 0;
      local_1e0 = (undefined4)DAT_1468b5d88;
      uStack_1dc = DAT_1468b5d88._4_4_;
      local_180 = _DAT_1464aa6e0;
      uStack_178 = _DAT_1464aa6e8;
      local_1e8 = &PTR__scalar_deleting_destructor__1444d54b8;
      local_15c = _DAT_1464aa6e0;
      uStack_154 = _DAT_1464aa6e8;
      local_1b0 = 0;
      local_1ac = 0x3f800000;
      local_190 = 0;
      uStack_188 = 0;
      local_160 = 0;
      local_170 = (undefined4)DAT_1468b5d88;
      uStack_16c = DAT_1468b5d88._4_4_;
      uStack_168 = (undefined4)DAT_1468b5d88;
      uStack_164 = DAT_1468b5d88._4_4_;
      local_15e = 0;
      local_14c = 1;
      FCanvasTileItem::FCanvasTileItem
                (local_140,&DAT_1468b5d88,&DAT_1468b5d88,lVar8 + 0x10 + uVar14);
      puVar3 = (undefined8 *)(lVar8 + 0x10 + uVar14);
      local_1c0 = *puVar3;
      uStack_1b8 = puVar3[1];
      local_148 = 0x3f800000;
      local_144 = 0x3f800000;
      local_1d8 = CONCAT44(2,(undefined4)local_1d8);
      local_1e8 = &PTR_FUN_1444d5500;
      FText::FText(local_b8,uVar9);
      plVar5 = local_1f8;
      local_48 = '\0';
      local_1d8 = CONCAT44(2,(undefined4)local_1d8);
      local_a0 = uVar7;
      if (local_1f8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1f8 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_1f8)(local_1f8);
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
      if (local_230 != 0) {
        FMemory::Free();
      }
      FLinearColor::FLinearColor(&local_210,&DAT_1464aa734);
      local_1a8 = local_1a8 | 2;
      local_180 = local_210;
      uStack_178 = uStack_208;
      local_170 = 0x3f800000;
      uStack_16c = 0x3f800000;
      puVar3 = (undefined8 *)(uVar14 + 0x10 + param_1[0xc]);
      local_1c0 = *puVar3;
      uStack_1b8 = puVar3[1];
      FUN_1428a6df0(local_218,&local_1e8,local_220 - *(float *)((longlong)param_1 + 0x94),local_21c)
      ;
      plVar5 = local_60;
      _local_240 = CONCAT44(fStack_23c -
                            (*(float *)((longlong)param_1 + 0x3c) -
                            *(float *)((longlong)param_1 + 0x34)) / (float)(int)param_1[0xd],
                            local_240);
      if ((local_48 != '\0') && (local_48 = '\0', local_60 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_60)(local_60);
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
      plVar5 = local_b0;
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_b0 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_b0)(local_b0);
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
      uVar11 = (int)uVar15 + 1;
      uVar14 = uVar14 + 0x40;
      param_2 = local_218;
      uVar15 = (ulonglong)uVar11;
    } while ((int)uVar11 < (int)param_1[0xd]);
  }
  return;
}



// FUNCTION 1423ec570 FUN_1423ec570 body=896 status=ok
// SIG undefined FUN_1423ec570(void)

void FUN_1423ec570(longlong *param_1,longlong param_2,float *param_3,float *param_4,
                  undefined4 *param_5,int param_6)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float local_108;
  float local_104;
  undefined **local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined1 local_98 [8];
  undefined1 local_90 [120];
  
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_f8 = &PTR_FUN_14416c998;
  local_ec = DAT_1468b5d88._4_4_;
  local_f0 = (undefined4)DAT_1468b5d88;
  local_a8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_d0 = *param_5;
  uStack_cc = param_5[1];
  uStack_c8 = param_5[2];
  uStack_c4 = param_5[3];
  if (param_6 == 0) {
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x280))(param_1,&param_5,param_4,param_2);
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x280))(param_1,local_98,param_3,param_2);
    local_c0 = *puVar3;
    local_b8 = CONCAT44(*puVar2,(undefined4)local_b8);
    uStack_b0 = CONCAT44(uStack_b0._4_4_,puVar2[1]);
    (*(code *)local_f8[3])(&local_f8,*(undefined8 *)(param_2 + 0x260));
  }
  else if (param_6 == 1) {
    fVar7 = *param_4 - *param_3;
    fVar8 = param_4[1] - param_3[1];
    fVar9 = 5.0 / (float)*(int *)(param_2 + 0x40);
    fVar4 = fVar8 * fVar8 + fVar7 * fVar7;
    if (fVar4 <= 1e-08) {
      fVar7 = 0.0;
      fVar8 = 0.0;
    }
    else {
      auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar6._0_4_;
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar7 = fVar7 * fVar5;
      fVar8 = fVar8 * fVar5;
    }
    uVar1 = *(undefined8 *)param_3;
    local_108 = (float)uVar1;
    param_5._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    if (0.0 < (*param_4 - local_108) * fVar7 + (param_4[1] - param_5._4_4_) * fVar8) {
      fVar4 = fVar7 * fVar9;
      fVar9 = fVar8 * fVar9;
      local_104 = param_5._4_4_;
      param_5 = (undefined4 *)uVar1;
      do {
        local_108 = fVar4 + local_108;
        local_104 = fVar9 + local_104;
        puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x280))(param_1,local_90,&local_108,param_2);
        puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x280))(param_1,local_98,&param_5,param_2);
        local_c0 = *puVar3;
        local_b8 = CONCAT44(*puVar2,(undefined4)local_b8);
        uStack_b0 = CONCAT44(uStack_b0._4_4_,puVar2[1]);
        (*(code *)local_f8[3])(&local_f8,*(undefined8 *)(param_2 + 0x260));
        local_108 = param_5._0_4_ + fVar4 + fVar4;
        local_104 = param_5._4_4_ + fVar9 + fVar9;
        param_5 = (undefined4 *)CONCAT44(local_104,local_108);
      } while (0.0 < fVar8 * (param_4[1] - local_104) + (*param_4 - local_108) * fVar7);
    }
  }
  return;
}



// FUNCTION 1423ec8f0 FUN_1423ec8f0 body=670 status=ok
// SIG undefined FUN_1423ec8f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423ec8f0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined **local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 *local_178;
  undefined8 local_170;
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  undefined1 local_158 [8];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 local_138 [16];
  
  uVar8 = DAT_146ac3d68;
  puVar9 = (uint *)(**(code **)(*param_1 + 0x280))(param_1,local_168,param_5,param_2);
  puVar10 = (undefined4 *)(**(code **)(*param_1 + 0x280))(param_1,local_160,param_4,param_2);
  puVar11 = (undefined4 *)(**(code **)(*param_1 + 0x280))(param_1,local_158,param_3,param_2);
  uVar7 = DAT_1468b5d88._4_4_;
  uVar6 = (undefined4)DAT_1468b5d88;
  local_1c0 = *puVar11;
  local_1bc = puVar11[1];
  local_1a0 = _DAT_1464aa6c0;
  uStack_198 = _DAT_1464aa6c8;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_178 = (undefined4 *)0x0;
  local_1c8 = &PTR__scalar_deleting_destructor__1450861e0;
  local_190 = uVar8;
  local_150 = _DAT_1464aa6c0;
  uStack_148 = _DAT_1464aa6c8;
  local_188 = 0;
  uStack_180 = 0;
  uVar2 = *puVar11;
  uVar3 = puVar11[1];
  uVar4 = *puVar10;
  uVar5 = puVar10[1];
  uVar1 = puVar9[1];
  local_138 = ZEXT416(*puVar9);
  local_170 = 1;
  TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(&local_178,0);
  *local_178 = uVar2;
  local_178[1] = uVar3;
  local_178[2] = uVar6;
  local_178[3] = uVar7;
  local_178[4] = (undefined4)local_150;
  local_178[5] = local_150._4_4_;
  local_178[6] = (undefined4)uStack_148;
  local_178[7] = uStack_148._4_4_;
  local_178[8] = uVar4;
  local_178[9] = uVar5;
  local_178[10] = uVar6;
  local_178[0xb] = uVar7;
  local_178[0xc] = (undefined4)local_150;
  local_178[0xd] = local_150._4_4_;
  local_178[0xe] = (undefined4)uStack_148;
  local_178[0xf] = uStack_148._4_4_;
  local_178[0x10] = local_138._0_4_;
  local_178[0x11] = uVar1;
  local_178[0x12] = uVar6;
  local_178[0x13] = uVar7;
  local_178[0x14] = (undefined4)local_150;
  local_178[0x15] = local_150._4_4_;
  local_178[0x16] = (undefined4)uStack_148;
  local_178[0x17] = uStack_148._4_4_;
  FCanvasTriangleItem::SetColor(&local_1c8,param_6);
  FUN_1428a6cf0(param_2,&local_1c8);
  local_1c8 = &PTR__scalar_deleting_destructor__1450861e0;
  if (local_178 != (undefined4 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1423ecb90 Empty body=143 status=ok
// SIG undefined Empty(void)

void TArray<FObjectReplicator::FRPCPendingLocalCall,FDefaultAllocator>::Empty
               (longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar1 = (longlong *)(*param_1 + 0x60);
    do {
      *(undefined4 *)(plVar1 + 1) = 0;
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (plVar1 + -8);
      if (plVar1[-0xb] != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0xe;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 1423ecc20 FUN_1423ecc20 body=414 status=ok
// SIG undefined FUN_1423ecc20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423ecc20(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  uint uStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  plVar1 = (longlong *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x58);
  puStack_28 = (uint *)(param_1 + 0x40);
  local_78 = 0;
  uStack_74 = 1;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar2 != 0) {
    puVar8 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar8 = puStack_28;
    }
    uVar6 = *puVar8;
    local_78 = 0;
    uStack_60 = 0;
    while (uVar6 == 0) {
      lVar7 = (longlong)(int)local_78;
      uStack_60 = uStack_60 + 0x20;
      uVar6 = local_78 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_78;
      local_78 = uVar6;
      if (bVar4) goto LAB_1423eccdf;
      uVar6 = puVar8[lVar7 + 1];
    }
    uStack_74 = -uVar6 & uVar6;
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
    local_68._4_4_ = (uStack_60 - iVar5) + 0x1f;
    if (iVar2 < local_68._4_4_) {
LAB_1423eccdf:
      local_68._4_4_ = iVar2;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  uStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  uStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar4 = local_68._4_4_ < *(int *)(param_1 + 0x58);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar4) {
    do {
      puVar3 = *(undefined8 **)(*plVar1 + 8 + (longlong)iStack_5c * 0x18);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  FUN_1406c5d90(plVar1,0);
  _DAT_146531fa8 = _DAT_146531fa8 + 1;
  return;
}



// FUNCTION 1423ecdc0 FUN_1423ecdc0 body=461 status=ok
// SIG undefined FUN_1423ecdc0(void)

void FUN_1423ecdc0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  plVar6 = *(longlong **)(param_1 + 0x28);
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)FTableRowBase::StaticStruct();
  }
  plVar1 = (longlong *)(param_1 + 0x30);
  local_78 = 0;
  uStack_74 = 1;
  iVar2 = *(int *)(param_1 + 0x58);
  puStack_28 = (uint *)(param_1 + 0x40);
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar2 != 0) {
    puVar9 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar9 = puStack_28;
    }
    uVar3 = *puVar9;
    uStack_60 = 0;
    local_78 = 0;
    while (uVar3 == 0) {
      lVar8 = (longlong)local_78;
      uStack_60 = uStack_60 + 0x20;
      iVar7 = local_78 + 1;
      bVar5 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar7;
      if (bVar5) goto LAB_1423ece9f;
      uVar3 = puVar9[lVar8 + 1];
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
    local_68._4_4_ = (uStack_60 - iVar7) + 0x1f;
    if (iVar2 < local_68._4_4_) {
LAB_1423ece9f:
      local_68._4_4_ = iVar2;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  iStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  iStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar5 = local_68._4_4_ < *(int *)(param_1 + 0x58);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar5) {
    do {
      uVar4 = *(undefined8 *)(*plVar1 + 8 + (longlong)iStack_5c * 0x18);
      (**(code **)(*plVar6 + 0x2b0))(plVar6,uVar4,1);
      FMemory::Free(uVar4);
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  FUN_1406c5d90(plVar1,0);
  return;
}



// FUNCTION 1423ecfa0 FUN_1423ecfa0 body=222 status=ok
// SIG undefined FUN_1423ecfa0(void)

void FUN_1423ecfa0(longlong param_1,longlong param_2,undefined4 param_3,undefined1 *param_4,
                  undefined4 *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
      lVar2 = *(longlong *)(param_1 + 0x70);
      if (*(longlong *)(param_1 + 0x70) == 0) {
        lVar2 = param_1 + 0x68;
      }
      iVar1 = *(int *)(lVar2 + ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                               (longlong)*(int *)(param_1 + 0x78) - 1U) * 4);
      if (iVar1 != -1) {
        do {
          plVar4 = (longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 0x18);
          if (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 0x18) == param_2) {
            if (iVar1 != -1) goto LAB_1423ed034;
            break;
          }
          iVar1 = (int)plVar4[2];
        } while (iVar1 != -1);
      }
    }
    plVar4 = (longlong *)0x0;
LAB_1423ed034:
    plVar3 = plVar4 + 1;
    if (plVar4 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
    }
    if (((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) && (param_5 != (undefined4 *)0x0)) {
      uVar5 = FRichCurve::Eval(*plVar3,param_3,0);
      *param_5 = uVar5;
      *param_4 = 0;
      return;
    }
  }
  *param_4 = 1;
  return;
}



// FUNCTION 1423ed080 Execute body=102 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,ADebugCameraController,TTypeWrapper<void>___cdecl(enum_ETouchIndex::Type,FVector)>
     ::Execute(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  local_10 = *(undefined4 *)(param_3 + 1);
  local_18 = *param_3;
  (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,&local_18);
  return;
}



// FUNCTION 1423ed0f0 ExecuteIfSafe body=128 status=ok
// SIG undefined ExecuteIfSafe(void)

bool TBaseUObjectMethodDelegateInstance<0,ADebugCameraController,void___cdecl(enum_ETouchIndex::Type,FVector)>
     ::ExecuteIfSafe(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    local_10 = *(undefined4 *)(param_3 + 1);
    local_18 = *param_3;
    (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,&local_18);
  }
  return lVar1 != 0;
}



// FUNCTION 1423ed170 FindId body=148 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,uint *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(param_3[1] ^ *param_3) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2;
        if ((*(uint *)(lVar1 + lVar4 * 0x18) == *param_3) &&
           (*(uint *)(lVar1 + 4 + lVar4 * 0x18) == param_3[1])) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar1 + 0x10 + lVar4 * 0x18);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1423ed210 FUN_1423ed210 body=719 status=ok
// SIG undefined FUN_1423ed210(void)

undefined8 * FUN_1423ed210(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  undefined4 local_res20;
  undefined4 local_res24;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  longlong *plStack_80;
  undefined8 local_78;
  longlong *local_70;
  undefined4 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  local_res20 = *param_2;
  local_res24 = param_2[1];
  TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x98,local_res8,&local_res20);
  puVar9 = (undefined8 *)0x0;
  puVar7 = puVar9;
  if (local_res8[0] != -1) {
    puVar7 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x98));
  }
  puVar5 = puVar7 + 1;
  if (puVar7 == (undefined8 *)0x0) {
    puVar5 = puVar9;
  }
  if (puVar5 != (undefined8 *)0x0) {
    return puVar5;
  }
  local_98 = *param_2;
  lVar10 = *(longlong *)(param_1 + 0x28);
  local_94 = param_2[1];
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
  ::FindId(lVar10 + 0x16f8,local_res10,&local_98);
  puVar7 = puVar9;
  if (local_res10[0] != -1) {
    puVar7 = (undefined8 *)((longlong)local_res10[0] * 0x20 + *(longlong *)(lVar10 + 0x16f8));
  }
  puVar5 = puVar7 + 1;
  if (puVar7 == (undefined8 *)0x0) {
    puVar5 = puVar9;
  }
  if (puVar5 == (undefined8 *)0x0) {
    uVar6 = FWeakObjectPtr::Get(param_2);
    puVar7 = (undefined8 *)
             (**(code **)(**(longlong **)(param_1 + 0x28) + 0x340))
                       (*(longlong **)(param_1 + 0x28),local_48,uVar6);
    if (&local_88 != puVar7) {
      local_88 = *puVar7;
      *puVar7 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_80,puVar7 + 1);
    }
    if (local_40 == (longlong *)0x0) goto LAB_1423ed3cc;
    LOCK();
    plVar8 = local_40 + 1;
    lVar10 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar10 != 1) goto LAB_1423ed3cc;
    (**(code **)*local_40)(local_40);
    LOCK();
    piVar1 = (int *)((longlong)local_40 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 != 1) goto LAB_1423ed3cc;
    lVar10 = *local_40;
  }
  else {
    local_70 = (longlong *)puVar5[1];
    local_88 = *puVar5;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    local_78 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_80,&local_70);
    plVar8 = local_70;
    if (local_70 == (longlong *)0x0) goto LAB_1423ed3cc;
    LOCK();
    plVar2 = local_70 + 1;
    lVar10 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar10 != 1) goto LAB_1423ed3cc;
    (**(code **)*local_70)(local_70);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 != 1) goto LAB_1423ed3cc;
    lVar10 = *local_70;
    local_40 = local_70;
  }
  (**(code **)(lVar10 + 8))(local_40,1);
LAB_1423ed3cc:
  plVar8 = plStack_80;
  local_58 = local_88;
  plStack_50 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
    UNLOCK();
  }
  local_60 = &local_58;
  local_68 = param_2;
  FUN_1423e3c70(param_1 + 0x98,local_res18,&local_68,0);
  plVar2 = plStack_50;
  lVar10 = (longlong)local_res18[0] * 0x20 + *(longlong *)(param_1 + 0x98);
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_50 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    plVar8 = plStack_80;
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar8 = plStack_80;
      if (iVar3 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
        plVar8 = plStack_80;
      }
    }
  }
  local_90 = *param_2;
  local_8c = param_2[1];
  TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
  ::Remove(*(longlong *)(param_1 + 0x28) + 0x16f8,&local_90);
  FUN_1423fd970(*(undefined8 *)(lVar10 + 8),param_1);
  plVar2 = plStack_80;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar8 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_80 + 8))(plStack_80,1);
      }
    }
  }
  return (undefined8 *)(lVar10 + 8);
}



// FUNCTION 1423ed4e0 FUN_1423ed4e0 body=391 status=ok
// SIG undefined FUN_1423ed4e0(void)

longlong FUN_1423ed4e0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined2 *local_48;
  int local_40;
  longlong local_38 [2];
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  lVar5 = UStruct::FindPropertyByName(*(undefined8 *)(param_1 + 0x28),*param_2);
  lVar10 = lVar5;
  if (lVar5 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    lVar6 = UUserDefinedStruct::GetPrivateStaticClass();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FName::ToString(param_2,&local_48);
      local_28 = *(longlong *)(param_1 + 0x28);
      if (local_28 == 0) {
        local_20 = 0;
      }
      else {
        local_20 = *(longlong *)(local_28 + 0x38);
      }
      local_18 = 0xffffffff;
      local_14 = 0x101;
      local_12 = 0;
      FUN_140472e10(&local_28);
      lVar1 = local_20;
      while (lVar10 = lVar5, local_20 = lVar1, lVar1 != 0) {
        puVar7 = (undefined8 *)
                 (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2d8))
                           (*(longlong **)(param_1 + 0x28),local_38,*(undefined8 *)(lVar1 + 0x18));
        if (*(int *)(puVar7 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar7;
        }
        puVar8 = &DAT_143f3eda8;
        if (local_40 != 0) {
          puVar8 = local_48;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
        if (local_38[0] != 0) {
          FMemory::Free();
        }
        lVar10 = lVar1;
        if (iVar4 == 0) break;
        local_20 = *(longlong *)(lVar1 + 0x28);
        FUN_140472e10(&local_28);
        lVar1 = local_20;
      }
      if (local_48 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  cVar3 = DataTableUtils::IsSupportedTableProperty(lVar10);
  if (cVar3 == '\0') {
    lVar10 = 0;
  }
  return lVar10;
}



// FUNCTION 1423ed670 FUN_1423ed670 body=27 status=ok
// SIG undefined FUN_1423ed670(void)

void FUN_1423ed670(undefined8 param_1)

{
  FUN_141755460();
  FUN_1423ecc20(param_1);
  return;
}



// FUNCTION 1423ed690 PostLoad body=50 status=ok
// SIG undefined PostLoad(void)

void UVectorFieldStatic::PostLoad(undefined8 param_1)

{
  char cVar1;
  
  FUN_141755460();
  cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar1 == '\0') {
    FUN_1423ecdc0(param_1);
    return;
  }
  return;
}



// FUNCTION 1423ed6d0 FUN_1423ed6d0 body=106 status=ok
// SIG undefined FUN_1423ed6d0(void)

undefined1 FUN_1423ed6d0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((((param_3 != 0) && (lVar1 = *param_1, lVar1 != 0)) && (param_2 != 0)) &&
     (*(longlong *)(lVar1 + 0x28) == param_2)) {
    lVar1 = FUN_140c74740(lVar1,param_1[1],0);
    if (lVar1 != 0) {
      FUN_141717f80(param_2,param_3,lVar1,1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1423ed740 Generic_GetDataTableRowFromName body=91 status=ok
// SIG undefined Generic_GetDataTableRowFromName(void)

undefined1
UDataTableFunctionLibrary::Generic_GetDataTableRowFromName
          (longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((param_3 != 0) && (param_1 != 0)) {
    lVar1 = FUN_140c74740(param_1,param_2,0);
    if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
      FUN_141717f80(*(longlong *)(param_1 + 0x28),param_3,lVar1,1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1423ed7a0 FUN_1423ed7a0 body=85 status=ok
// SIG undefined FUN_1423ed7a0(void)

int FUN_1423ed7a0(longlong param_1)

{
  return (*(int *)(param_1 + 0x40c) + *(int *)(param_1 + 0x3fc) * 4 + *(int *)(param_1 + 0x3ec)) *
         0x14 + ((*(int *)(param_1 + 0x3bc) + *(int *)(param_1 + 0x3ac)) * 4 +
                 (*(int *)(param_1 + 0x41c) + *(int *)(param_1 + 0x3dc)) * 6 +
                *(int *)(param_1 + 300)) * 8 + *(int *)(param_1 + 0x3cc) * 0x1c;
}



// FUNCTION 1423ed800 FUN_1423ed800 body=576 status=ok
// SIG undefined FUN_1423ed800(void)

ulonglong * FUN_1423ed800(ulonglong *param_1,longlong param_2,longlong *param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint local_b8;
  uint uStack_b4;
  uint *puStack_b0;
  undefined4 local_a8;
  int iStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_98;
  uint local_90;
  uint local_8c;
  longlong *local_88;
  undefined8 uStack_80;
  uint *local_78;
  uint uStack_70;
  int iStack_6c;
  uint local_68;
  undefined4 uStack_64;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  undefined4 uStack_48;
  int iStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  
  uVar7 = 0;
  local_98 = 0;
  local_8c = 0;
  uVar10 = 0;
  if ((param_2 == 0) || (*param_3 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    lVar3 = FUN_1423ed4e0(param_2,param_3);
    uVar5 = uVar7;
    uVar11 = 0;
    if (lVar3 != 0) {
      local_88 = (longlong *)(param_2 + 0x30);
      uStack_b4 = 1;
      iVar1 = *(int *)(param_2 + 0x58);
      puStack_b0 = (uint *)(param_2 + 0x40);
      local_b8 = 0;
      iStack_a4 = 0;
      uStack_a0 = 0;
      if (iVar1 != 0) {
        puVar9 = *(uint **)(param_2 + 0x50);
        if (*(uint **)(param_2 + 0x50) == (uint *)0x0) {
          puVar9 = puStack_b0;
        }
        uVar11 = *puVar9;
        uVar8 = uVar7;
        while (uVar11 == 0) {
          iVar2 = (int)uVar5;
          uStack_a0 = (int)uVar8 + 0x20;
          uVar8 = (ulonglong)uStack_a0;
          local_b8 = iVar2 + 1;
          uVar5 = (ulonglong)local_b8;
          if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar2) goto LAB_1423ed91f;
          uVar11 = puVar9[(longlong)iVar2 + 1];
        }
        uStack_b4 = -uVar11 & uVar11;
        iVar2 = 0x1f;
        if (uStack_b4 != 0) {
          for (; uStack_b4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        if (uStack_b4 == 0) {
          iVar2 = 0x20;
        }
        else {
          iVar2 = 0x1f - iVar2;
        }
        iStack_a4 = (uStack_a0 - iVar2) + 0x1f;
        if (iVar1 < iStack_a4) {
LAB_1423ed91f:
          iStack_a4 = iVar1;
        }
      }
      local_a8 = 0xffffffff;
      uStack_80 = CONCAT44(uStack_b4,local_b8);
      uStack_48 = 0xffffffff;
      iStack_44 = iStack_a4;
      uStack_40 = uStack_a0;
      uStack_3c = uStack_9c;
      uStack_70 = 0xffffffff;
      iStack_6c = iStack_a4;
      local_68 = uStack_a0;
      uStack_64 = uStack_9c;
      uVar8 = uVar7;
      uVar5 = 0;
      uVar12 = uVar7;
      uVar11 = uVar10;
      local_78 = puStack_b0;
      local_60 = local_88;
      uStack_58 = uStack_80;
      puStack_50 = puStack_b0;
      if (iStack_a4 < iVar1) {
        do {
          puVar4 = (undefined8 *)
                   FUN_1423f04f0(&local_b8,lVar3,
                                 *(undefined8 *)(*local_88 + 8 + (longlong)iStack_6c * 0x18),param_4
                                );
          local_90 = (int)uVar8 + 1;
          uVar5 = uVar12;
          if ((int)uVar7 < (int)local_90) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_98);
            uVar7 = (ulonglong)local_8c;
            uVar5 = local_98;
          }
          uVar11 = local_90;
          uVar12 = (ulonglong)local_90;
          uVar10 = (uint)uVar7;
          puVar6 = (undefined8 *)((longlong)(int)uVar8 * 0x10 + uVar5);
          *puVar6 = 0;
          *puVar6 = *puVar4;
          *puVar4 = 0;
          *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
          *(undefined4 *)((longlong)puVar6 + 0xc) = *(undefined4 *)((longlong)puVar4 + 0xc);
          puVar4[1] = 0;
          if (CONCAT44(uStack_b4,local_b8) != 0) {
            FMemory::Free();
          }
          uStack_70 = uStack_70 & ~uStack_80._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
          uVar8 = uVar12;
          uVar12 = uVar5;
        } while (iStack_6c < (int)local_78[6]);
      }
    }
    *param_1 = uVar5;
    *(uint *)(param_1 + 1) = uVar11;
    *(uint *)((longlong)param_1 + 0xc) = uVar10;
  }
  return param_1;
}



// FUNCTION 1423eda40 GetCurves body=460 status=ok
// SIG undefined GetCurves(void)

longlong * UCurveTable::GetCurves(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint *puVar10;
  uint local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int iStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  uint uStack_70;
  uint uStack_6c;
  uint *local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  uint uStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  *param_2 = 0;
  plVar1 = (longlong *)(param_1 + 8);
  param_2[1] = 0;
  iVar3 = *(int *)(param_1 + 0x30);
  local_68 = (uint *)(param_1 + 0x18);
  local_98 = 0;
  uStack_94 = 1;
  iStack_84 = 0;
  uStack_80 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar10 = local_68;
    }
    uVar9 = *puVar10;
    local_98 = 0;
    uStack_80 = 0;
    while (uVar9 == 0) {
      lVar8 = (longlong)(int)local_98;
      uStack_80 = uStack_80 + 0x20;
      uVar9 = local_98 + 1;
      bVar6 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_98;
      local_98 = uVar9;
      if (bVar6) goto LAB_1423edb0d;
      uVar9 = puVar10[lVar8 + 1];
    }
    uStack_94 = -uVar9 & uVar9;
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
    iStack_84 = (uStack_80 - iVar7) + 0x1f;
    if (iVar3 < iStack_84) {
LAB_1423edb0d:
      iStack_84 = iVar3;
    }
  }
  uStack_60 = CONCAT44(iStack_84,0xffffffff);
  auStack_20._8_4_ = uStack_80;
  auStack_20._0_8_ = uStack_60;
  auStack_20._12_4_ = uStack_7c;
  uStack_30 = local_98;
  uStack_2c = uStack_94;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_70 = local_98;
  uStack_6c = uStack_94;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  local_48 = plVar1;
  local_38 = plVar1;
  puStack_28 = local_68;
  local_10 = plVar1;
  if (iStack_84 < *(int *)(param_1 + 0x30)) {
    do {
      iVar3 = (int)param_2[1];
      uVar4 = *(undefined8 *)(*plVar1 + (longlong)iStack_84 * 0x18);
      uVar5 = *(undefined8 *)(*plVar1 + 8 + (longlong)iStack_84 * 0x18);
      *(int *)(param_2 + 1) = iVar3 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
      }
      local_98 = (uint)uVar4;
      uStack_94 = (uint)((ulonglong)uVar4 >> 0x20);
      uStack_90 = (undefined4)uVar5;
      uStack_8c = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar2 = (undefined4 *)(*param_2 + (longlong)iVar3 * 0x10);
      *puVar2 = local_98;
      puVar2[1] = uStack_94;
      puVar2[2] = uStack_90;
      puVar2[3] = uStack_8c;
      uStack_60 = CONCAT44(uStack_60._4_4_,(uint)uStack_60 & ~uStack_6c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
      iStack_84 = uStack_60._4_4_;
    } while (uStack_60._4_4_ < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return param_2;
}



// FUNCTION 1423edc10 GetCurves body=414 status=ok
// SIG undefined GetCurves(void)

longlong * UCurveTable::GetCurves(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
  int local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_64;
  int iStack_60;
  int iStack_50;
  uint uStack_4c;
  uint *local_48;
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
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = *(int *)(param_1 + 0x30);
  local_48 = (uint *)(param_1 + 0x18);
  local_78 = 0;
  uStack_74 = 1;
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar2 != 0) {
    puVar9 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar9 = local_48;
    }
    uVar3 = *puVar9;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar8 = local_78 + 1;
      bVar6 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar8;
      if (bVar6) goto LAB_1423edcdd;
      uVar3 = puVar9[lVar7 + 1];
    }
    uStack_74 = -uVar3 & uVar3;
    iVar8 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    iStack_64 = (iStack_60 - iVar8) + 0x1f;
    if (iVar2 < iStack_64) {
LAB_1423edcdd:
      iStack_64 = iVar2;
    }
  }
  uStack_18 = 0xffffffff;
  iStack_14 = iStack_64;
  iStack_10 = iStack_60;
  iStack_28 = local_78;
  uStack_24 = uStack_74;
  uStack_40 = 0xffffffff;
  iStack_3c = iStack_64;
  iStack_50 = local_78;
  uStack_4c = uStack_74;
  local_38 = iStack_60;
  local_30 = (longlong *)(param_1 + 8);
  puStack_20 = local_48;
  if (iStack_64 < iVar2) {
    do {
      iVar2 = (int)param_2[1];
      lVar7 = *(longlong *)(param_1 + 8);
      uVar4 = *(undefined8 *)(lVar7 + (longlong)iStack_3c * 0x18);
      uVar5 = *(undefined8 *)(lVar7 + 8 + (longlong)iStack_3c * 0x18);
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
      }
      local_78 = (int)uVar4;
      uStack_74 = (uint)((ulonglong)uVar4 >> 0x20);
      uStack_70 = (undefined4)uVar5;
      uStack_6c = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar1 = (undefined4 *)(*param_2 + (longlong)iVar2 * 0x10);
      *puVar1 = local_78;
      puVar1[1] = uStack_74;
      puVar1[2] = uStack_70;
      puVar1[3] = uStack_6c;
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  return param_2;
}



// FUNCTION 1423eddb0 FUN_1423eddb0 body=335 status=ok
// SIG undefined FUN_1423eddb0(void)

longlong FUN_1423eddb0(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = *param_1;
  iVar2 = 1;
  if (*(int *)(lVar3 + 0x18) != 0) {
    iVar2 = *(int *)(lVar3 + 0x18);
  }
  lVar4 = 0;
  lVar5 = lVar4;
  if (lVar3 == 0) goto switchD_1423edeaf_caseD_b;
  if (((((*(uint *)(lVar3 + 0x4c) & 0x40) != 0) && (*(int *)(lVar3 + 0x54) == 0x20)) &&
      (*(int *)(lVar3 + 0x58) == 0xff0000)) &&
     ((lVar4 = 0, *(int *)(lVar3 + 0x5c) == 0xff00 && (lVar4 = 0, *(int *)(lVar3 + 0x60) == 0xff))))
  {
    lVar4 = 2;
  }
  lVar5 = lVar3;
  if ((*(uint *)(lVar3 + 0x4c) & 4) == 0) goto switchD_1423edeaf_caseD_b;
  iVar1 = *(int *)(lVar3 + 0x50);
  if (iVar1 == 0x31545844) {
    lVar4 = 5;
    goto switchD_1423edeaf_caseD_b;
  }
  if (iVar1 == 0x33545844) {
    lVar4 = 6;
    goto switchD_1423edeaf_caseD_b;
  }
  if (iVar1 == 0x35545844) {
    lVar4 = 7;
    goto switchD_1423edeaf_caseD_b;
  }
  if ((iVar1 == 0x32495441) || (iVar1 == 0x53354342)) {
switchD_1423edeaf_caseD_47:
    lVar4 = 0x17;
    goto switchD_1423edeaf_caseD_b;
  }
  if ((iVar1 + 0xaccbbcbeU & 0xfdffffff) == 0) {
    lVar4 = 0x27;
    goto switchD_1423edeaf_caseD_b;
  }
  if (iVar1 == 0x71) {
switchD_1423edeaf_caseD_a:
    lVar4 = 10;
  }
  else {
    if ((iVar1 != 0x30315844) || ((undefined4 *)param_1[1] == (undefined4 *)0x0))
    goto switchD_1423edeaf_caseD_b;
    switch(*(undefined4 *)param_1[1]) {
    case 10:
      goto switchD_1423edeaf_caseD_a;
    case 0x47:
    case 0x48:
    case 0x4a:
    case 0x4b:
    case 0x4d:
    case 0x4e:
    case 0x50:
    case 0x51:
    case 0x53:
    case 0x54:
      goto switchD_1423edeaf_caseD_47;
    case 0x57:
    case 0x58:
    case 0x5b:
    case 0x5d:
      lVar4 = 2;
    }
  }
switchD_1423edeaf_caseD_b:
  iVar2 = CalcTextureSize(*(undefined4 *)(lVar5 + 0xc),*(undefined4 *)(lVar5 + 8),lVar4,iVar2);
  lVar3 = 0x90;
  if (param_1[1] == 0) {
    lVar3 = 0x7c;
  }
  return (ulonglong)(uint)(iVar2 * param_2) + lVar3 + *param_1;
}



// FUNCTION 1423edf70 GetDataTableColumnAsString body=68 status=ok
// SIG undefined GetDataTableColumnAsString(void)

undefined8 *
UDataTableFunctionLibrary::GetDataTableColumnAsString
          (undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong local_res18 [2];
  
  if ((param_2 != 0) && (param_3 != 0)) {
    local_res18[0] = param_3;
    FUN_1423ed800(param_1,param_2,local_res18,0);
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1423edfc0 GetDataTableRowNames body=140 status=ok
// SIG undefined GetDataTableRowNames(void)

void UDataTableFunctionLibrary::GetDataTableRowNames(longlong param_1,longlong *param_2)

{
  longlong local_18;
  undefined8 local_10;
  
  if (param_1 == 0) {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2,0);
      return;
    }
  }
  else {
    local_18 = 0;
    local_10 = 0;
    TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
    GetKeys<FDefaultAllocator>(param_1 + 0x30,&local_18);
    if (param_2 != &local_18) {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      *param_2 = local_18;
      *(undefined4 *)(param_2 + 1) = (undefined4)local_10;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_10._4_4_;
      return;
    }
    if (local_18 != 0) {
      FMemory::Free();
      return;
    }
  }
  return;
}



// FUNCTION 1423ee050 FUN_1423ee050 body=6642 status=ok
// SIG undefined FUN_1423ee050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423ee050(longlong param_1,longlong *param_2,undefined8 param_3,uint param_4,
                  longlong *param_5)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  float *pfVar15;
  float *pfVar16;
  longlong lVar17;
  ulonglong uVar18;
  float *pfVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong *puVar22;
  int iVar23;
  uint uVar24;
  undefined1 *puVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auStack_558 [32];
  float *local_538;
  longlong *local_530;
  undefined1 *local_528;
  longlong *local_520;
  longlong *local_518;
  uint local_510;
  longlong *local_508;
  uint local_500;
  longlong *local_4f8;
  undefined1 local_4e8;
  undefined1 local_4e7;
  undefined1 local_4e6;
  undefined1 local_4e5;
  uint local_4e4;
  undefined1 local_4e0;
  undefined1 local_4df;
  undefined1 local_4de;
  undefined1 local_4dd;
  undefined1 local_4dc;
  undefined1 local_4db;
  undefined1 local_4da;
  undefined1 local_4d9;
  undefined1 local_4d8;
  undefined1 local_4d7;
  undefined1 local_4d6;
  undefined1 local_4d5;
  undefined1 local_4d4;
  undefined1 local_4d3;
  undefined1 local_4d2;
  undefined1 local_4d1;
  undefined1 local_4d0;
  undefined1 local_4cf;
  undefined1 local_4ce;
  undefined1 local_4cd;
  undefined1 local_4cc;
  undefined1 local_4cb;
  undefined1 local_4ca;
  undefined1 local_4c9;
  undefined1 local_4c8;
  undefined1 local_4c7;
  undefined1 local_4c6;
  undefined1 local_4c5;
  longlong *local_4c0;
  longlong *local_4b8;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  uint local_498;
  float local_490;
  float local_48c;
  float local_488;
  undefined8 local_478;
  undefined8 uStack_470;
  float local_468;
  uint uStack_464;
  float fStack_460;
  uint uStack_45c;
  float local_458;
  float fStack_454;
  uint uStack_450;
  uint uStack_44c;
  float local_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  uint local_438;
  uint local_434;
  longlong local_430;
  longlong local_428;
  float *local_420;
  float local_418;
  float local_414;
  float local_410;
  float local_408;
  float local_404;
  float local_400;
  float local_3f8;
  float local_3f4;
  float local_3f0;
  float local_3e8;
  float local_3e4;
  float local_3e0;
  longlong local_3d8;
  longlong local_3d0;
  longlong *local_3c8;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  float local_3b0;
  float local_3ac;
  float local_3a8;
  float local_3a0;
  uint local_39c;
  float local_398;
  float local_390;
  float local_38c;
  uint local_388;
  float local_380;
  float local_37c;
  float local_378;
  longlong local_370;
  undefined8 local_368;
  undefined1 local_360 [4];
  undefined1 local_35c [4];
  undefined *local_358;
  undefined1 *puStack_350;
  undefined *local_348;
  undefined1 *puStack_340;
  uint *local_338;
  longlong **local_330;
  undefined *local_328;
  undefined1 *puStack_320;
  undefined *local_318;
  undefined1 *puStack_310;
  uint *local_308;
  longlong **local_300;
  undefined1 local_2f8 [8];
  undefined1 local_2f0 [16];
  undefined1 local_2e0 [16];
  undefined1 local_2d0 [16];
  undefined1 local_2c0 [16];
  longlong local_2b0 [2];
  undefined1 local_2a0 [8];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  longlong local_268 [2];
  float local_258 [4];
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  longlong local_1a8;
  int local_1a0;
  undefined1 auStack_17c [8];
  int local_174;
  undefined1 local_170 [8];
  undefined1 *local_168;
  int local_160;
  undefined1 local_158 [8];
  char local_150;
  undefined1 local_f8 [8];
  undefined1 local_f0;
  ulonglong local_e8 [22];
  
  local_e8[0] = DAT_1468387a8 ^ (ulonglong)auStack_558;
  puVar25 = auStack_17c;
  lVar12 = 2;
  local_4b8 = param_5;
  do {
    *(undefined8 *)(puVar25 + -0x2c) = 0;
    *(undefined8 *)(puVar25 + -0x24) = 0;
    *(undefined8 *)(puVar25 + -0xc) = 0;
    *(undefined8 *)(puVar25 + -4) = 0;
    *(undefined4 *)(puVar25 + 4) = 0xffffffff;
    *(undefined4 *)(puVar25 + 8) = 0;
    *(undefined8 *)(puVar25 + 0x14) = 0;
    *(undefined4 *)(puVar25 + 0x1c) = 0;
    *(undefined4 *)(puVar25 + 0x24) = 0xffffffff;
    *(undefined4 *)(puVar25 + 0x28) = 0;
    puVar25[0x2c] = 0;
    puVar25 = puVar25 + 0x60;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  local_498 = param_4;
  local_3c8 = param_2;
  uVar6 = FWeakObjectPtr::Get(param_1 + 0x490);
  local_f0 = 1;
  FWeakObjectPtr::operator=(local_f8,uVar6);
  local_4e4 = 0;
  if (0 < (int)param_2[1]) {
    local_428 = 0;
    do {
      uVar5 = local_4e4;
      uVar18 = 0;
      uVar24 = local_4e4;
      if ((param_4 >> (local_4e4 & 0x1f) & 1) != 0) {
        local_538 = (float *)((ulonglong)local_538 & 0xffffffffffffff00);
        local_430 = *(longlong *)(*param_2 + local_428 * 8);
        plVar13 = (longlong *)param_5[0x11];
        if ((longlong *)param_5[0x11] == (longlong *)0x0) {
          plVar13 = param_5 + 0xf;
        }
        plVar13 = (longlong *)plVar13[local_428];
        (**(code **)(*plVar13 + 0x20))(plVar13,0,*(undefined4 *)(param_1 + 0x3a8),0);
        lVar12 = *(longlong *)(param_1 + 0x3a0);
        lVar17 = (longlong)*(int *)(param_1 + 0x3a8) * 0x20 + lVar12;
        for (; lVar12 != lVar17; lVar12 = lVar12 + 0x20) {
          FLinearColor::FLinearColor(local_2f0,lVar12 + 0x18);
          local_520 = (longlong *)CONCAT71(local_520._1_7_,0.0 < *(float *)(lVar12 + 0x1c));
          local_528 = (undefined1 *)((ulonglong)local_528 & 0xffffffff00000000);
          local_530 = (longlong *)CONCAT44(local_530._4_4_,*(float *)(lVar12 + 0x1c));
          local_538 = (float *)((ulonglong)local_538 & 0xffffffffffffff00);
          (**(code **)(*plVar13 + 0x38))(plVar13,lVar12,lVar12 + 0xc);
        }
        uVar20 = uVar18;
        if (0 < *(int *)(param_1 + 0x3b8)) {
          do {
            lVar12 = *(longlong *)(param_1 + 0x3b0) + uVar18;
            FLinearColor::FLinearColor(local_2e0,lVar12 + 0x18);
            local_528 = (undefined1 *)((ulonglong)local_528 & 0xffffffff00000000);
            local_530 = (longlong *)((ulonglong)local_530 & 0xffffffffffffff00);
            local_538 = (float *)CONCAT44(local_538._4_4_,*(undefined4 *)(lVar12 + 0x1c));
            FUN_142703420(plVar13,lVar12,lVar12 + 0xc);
            uVar24 = (int)uVar20 + 1;
            uVar18 = uVar18 + 0x20;
            uVar20 = (ulonglong)uVar24;
          } while ((int)uVar24 < *(int *)(param_1 + 0x3b8));
        }
        local_538 = (float *)((ulonglong)local_538 & 0xffffffffffffff00);
        (**(code **)(*plVar13 + 0x20))(plVar13,0,*(int *)(param_1 + 0x3c8) * 5);
        pfVar19 = *(float **)(param_1 + 0x3c0);
        pfVar16 = pfVar19 + (longlong)*(int *)(param_1 + 0x3c8) * 7;
        if (pfVar19 != pfVar16) {
          pfVar15 = pfVar19 + 5;
          do {
            local_490 = pfVar15[-2] - *pfVar19;
            local_48c = pfVar15[-1] - pfVar15[-4];
            fVar33 = *pfVar15 - pfVar15[-3];
            fVar42 = SQRT(local_48c * local_48c + local_490 * local_490 + fVar33 * fVar33);
            local_488 = 1.0 / fVar42;
            local_490 = local_488 * local_490;
            local_48c = local_488 * local_48c;
            local_488 = local_488 * fVar33;
            FVector::FindBestAxisVectors(&local_490,&local_3a0,&local_390);
            local_478 = CONCAT44(local_48c,local_490);
            local_468 = local_3a0;
            uStack_464 = local_39c;
            fStack_460 = local_398;
            local_458 = local_390;
            fStack_454 = local_38c;
            local_448 = *pfVar19;
            uStack_450 = local_388;
            fStack_444 = pfVar15[-4];
            fStack_440 = pfVar15[-3];
            uStack_470 = (ulonglong)(uint)local_488;
            uStack_45c = 0;
            uStack_44c = 0;
            fStack_43c = 1.0;
            FLinearColor::FLinearColor(local_2d0,pfVar15 + 1);
            local_528 = (undefined1 *)((ulonglong)local_528 & 0xffffffff00000000);
            local_530 = (longlong *)((ulonglong)local_530 & 0xffffffffffffff00);
            local_538 = (float *)CONCAT44(local_538._4_4_,0x41000000);
            FUN_1427036b0(plVar13,&local_478,local_2d0,fVar42);
            pfVar19 = pfVar19 + 7;
            pfVar15 = pfVar15 + 7;
          } while (pfVar19 != pfVar16);
        }
        uVar20 = 0;
        uVar18 = uVar20;
        if (0 < *(int *)(param_1 + 1000)) {
          do {
            lVar12 = *(longlong *)(param_1 + 0x3e0) + uVar20;
            FLinearColor::FLinearColor(local_2c0,lVar12 + 0xc);
            local_538 = (float *)((ulonglong)local_538 & 0xffffffffffffff00);
            FUN_1427073b0(plVar13,lVar12,*(undefined4 *)(lVar12 + 0x10));
            uVar24 = (int)uVar18 + 1;
            uVar20 = uVar20 + 0x14;
            uVar18 = (ulonglong)uVar24;
          } while ((int)uVar24 < *(int *)(param_1 + 1000));
        }
        pfVar19 = *(float **)(param_1 + 0x3d0);
        pfVar16 = pfVar19 + (longlong)*(int *)(param_1 + 0x3d8) * 0xc;
        if (pfVar19 != pfVar16) {
          pfVar15 = pfVar19 + 10;
          local_420 = pfVar16;
LAB_1423ee542:
          plVar8 = (longlong *)0x0;
          fVar33 = pfVar15[-1];
          fVar42 = *pfVar15;
          fVar1 = pfVar15[-2];
          fVar27 = pfVar15[1];
          fVar29 = -fVar33 + -fVar33;
          uVar24 = *(uint *)(param_1 + 0x488);
          fVar28 = fVar42 + fVar42;
          fVar34 = -fVar42 + -fVar42;
          local_418 = (fVar33 * fVar29 - fVar28 * fVar42) + 1.0;
          local_410 = fVar28 * fVar1 + fVar29 * fVar27;
          fVar30 = fVar1 + fVar1;
          local_414 = fVar28 * fVar27 - fVar29 * fVar1;
          local_3e8 = fVar34 * fVar27 + fVar33 * fVar30;
          fVar29 = -fVar1 + -fVar1;
          local_3e4 = (fVar34 * fVar42 - fVar30 * fVar1) + 1.0;
          local_3e0 = fVar30 * fVar27 - fVar33 * fVar34;
          fVar30 = fVar33 + fVar33;
          local_3f4 = fVar42 * fVar30 + fVar29 * fVar27;
          fVar28 = pfVar15[-6];
          local_3f8 = fVar30 * fVar27 - fVar42 * fVar29;
          local_3f0 = (fVar1 * fVar29 - fVar33 * fVar30) + 1.0;
          local_404 = local_3f4 * fVar28 + pfVar15[-9];
          local_408 = local_3f8 * fVar28 + *pfVar19;
          local_400 = local_3f0 * fVar28 + pfVar15[-8];
          if ((uVar24 == 2) || (uVar24 == 1)) {
            FLinearColor::FLinearColor(local_2b0,pfVar15 + -5);
            bVar26 = *(int *)(param_1 + 0x488) == 2;
            local_4f8 = (longlong *)CONCAT71(local_4f8._1_7_,1);
            iVar23 = 0;
            local_500 = 0;
            if (bVar26) {
              iVar23 = 2;
            }
            uVar3 = 0x10;
            if (bVar26) {
              uVar3 = 9;
            }
            local_508 = (longlong *)CONCAT44(local_508._4_4_,(float)iVar23);
            local_510 = local_510 & 0xffffff00;
            local_518 = (longlong *)CONCAT44(local_518._4_4_,uVar3);
            local_530 = local_2b0;
            local_520 = (longlong *)CONCAT44(local_520._4_4_,pfVar15[-6]);
            local_528 = (undefined1 *)CONCAT44(local_528._4_4_,pfVar15[-7]);
            local_538 = &local_3f8;
            FUN_1427069d0(plVar13,&local_408,&local_418);
            uVar24 = *(uint *)(param_1 + 0x488);
          }
          if ((uVar24 & 0xfffffffd) == 0) {
            local_4de = *(undefined1 *)((longlong)pfVar15 + -0x12);
            local_4df = *(undefined1 *)((longlong)pfVar15 + -0x13);
            local_4e0 = *(undefined1 *)(pfVar15 + -5);
            local_4dd = *(undefined1 *)(param_1 + 0x48c);
            plVar7 = (longlong *)FLinearColor::FLinearColor(local_208,&local_4e0);
            local_4c0 = (longlong *)0x0;
            local_478 = *plVar7;
            uStack_470 = plVar7[1];
            local_438 = FCrc::MemCrc_DEPRECATED(&local_478,0x10);
            if (local_1a0 != local_174) {
              puVar25 = local_170;
              if (local_168 != (undefined1 *)0x0) {
                puVar25 = local_168;
              }
              iVar23 = *(int *)(puVar25 + (longlong)(int)(local_160 - 1U & local_438) * 4);
              for (iVar4 = iVar23; iVar4 != -1;
                  iVar4 = *(int *)(local_1a8 + 0x10 + (longlong)iVar4 * 0x18)) {
                if (*(uint *)(local_1a8 + (longlong)iVar4 * 0x18) == local_438) {
                  if (iVar4 != -1) {
                    if (iVar23 == -1) goto LAB_1423ee932;
                    goto LAB_1423ee910;
                  }
                  break;
                }
              }
            }
            if ((local_150 == '\0') || (cVar2 = FWeakObjectPtr::IsValid(local_158), cVar2 == '\0'))
            {
              uStack_4a0 = &local_4e7;
              local_4e7 = 0;
              local_348 = &DAT_14060d670;
              local_4a8 = &DAT_14060d670;
              puStack_340 = uStack_4a0;
              lVar12 = FUN_1415d8310(&local_4a8,&DAT_146216a38);
              plVar7 = (longlong *)operator_new(0x158,lVar12 + 0x18,1);
              if (plVar7 != (longlong *)0x0) {
                local_3d8 = 0x3e;
                lVar12 = (**(code **)(**(longlong **)(DAT_146b17150 + 0x3c0) + 0x2a8))
                                   (*(longlong **)(DAT_146b17150 + 0x3c0),0,0);
                FUN_14257dfd0(plVar7);
                *plVar7 = (longlong)&PTR__scalar_deleting_destructor__1440fad20;
                plVar7[0x2a] = local_3d8;
                plVar7[0x27] = lVar12;
                plVar7[0x28] = local_478;
                plVar7[0x29] = uStack_470;
                plVar8 = plVar7;
              }
            }
            else {
              uStack_4a0 = &local_4e8;
              local_4e8 = 0;
              local_358 = &DAT_14060d670;
              local_4a8 = &DAT_14060d670;
              puStack_350 = uStack_4a0;
              lVar12 = FUN_1415d8310(&local_4a8,&DAT_146216a38);
              plVar7 = (longlong *)operator_new(0x158,lVar12 + 0x18,1);
              if (plVar7 != (longlong *)0x0) {
                plVar8 = (longlong *)FWeakObjectPtr::Get(local_158);
                plVar9 = (longlong *)FName::FName(local_2a0,"GizmoColor",1);
                lVar12 = *plVar9;
                lVar17 = (**(code **)(*plVar8 + 0x2a8))(plVar8,0,0);
                FUN_14257dfd0(plVar7);
                plVar7[0x27] = lVar17;
                *plVar7 = (longlong)&PTR__scalar_deleting_destructor__1440fad20;
                plVar7[0x2a] = lVar12;
                plVar7[0x28] = local_478;
                plVar7[0x29] = uStack_470;
                plVar8 = plVar7;
              }
            }
            local_338 = &local_438;
            local_330 = &local_4c0;
            local_4c0 = plVar8;
            FUN_141711280(&local_1a8,local_360,&local_338,0);
            pfVar16 = local_420;
            uVar5 = local_4e4;
            goto LAB_1423eea4a;
          }
          goto LAB_1423eea97;
        }
LAB_1423eeaa8:
        pfVar19 = *(float **)(param_1 + 0x3f0);
        pfVar16 = pfVar19 + (longlong)*(int *)(param_1 + 0x3f8) * 0x14;
        local_420 = pfVar16;
        if (pfVar19 != pfVar16) {
          puVar25 = (undefined1 *)((longlong)pfVar19 + 0x1d);
LAB_1423eead2:
          plVar8 = (longlong *)0x0;
          uVar24 = *(uint *)(param_1 + 0x488);
          if ((uVar24 == 2) || (uVar24 == 1)) {
            FLinearColor::FLinearColor(local_298,puVar25 + -1);
            fVar33 = *(float *)(puVar25 + 3);
            fVar42 = *(float *)(puVar25 + 7);
            fVar1 = *(float *)(puVar25 + 0xb);
            fVar27 = *(float *)(puVar25 + 0xf);
            local_520 = (longlong *)CONCAT71(local_520._1_7_,1);
            fVar28 = fVar42 + fVar42;
            fVar29 = fVar1 + fVar1;
            local_528 = (undefined1 *)((ulonglong)local_528 & 0xffffffff00000000);
            iVar23 = 0;
            if (*(int *)(param_1 + 0x488) == 2) {
              iVar23 = 2;
            }
            fVar35 = fVar33 * (fVar33 + fVar33);
            fVar31 = (fVar33 + fVar33) * fVar27;
            fVar30 = *(float *)(puVar25 + 0x23);
            fVar34 = *(float *)(puVar25 + 0x27);
            fVar32 = *(float *)(puVar25 + 0x2b);
            fStack_460 = (fVar31 + fVar29 * fVar42) * fVar34;
            local_458 = (fVar28 * fVar27 + fVar29 * fVar33) * fVar32;
            local_468 = fVar34 * (fVar28 * fVar33 - fVar29 * fVar27);
            fStack_454 = fVar32 * (fVar29 * fVar42 - fVar31);
            uStack_464 = (uint)((fRam0000000146af23d4 - (fVar1 * fVar29 + fVar35)) * fVar34) &
                         uRam0000000146af23e4;
            uStack_450 = (uint)((fRam0000000146af23d8 - (fVar42 * fVar28 + fVar35)) * fVar32) &
                         uRam0000000146af23e8;
            uStack_45c = (uint)((fRam0000000146af23dc - (fVar35 + fVar35)) *
                               *(float *)(puVar25 + 0x2f)) & uRam0000000146af23ec;
            local_448 = *(float *)(puVar25 + 0x13);
            fStack_444 = *(float *)(puVar25 + 0x17);
            fStack_440 = *(float *)(puVar25 + 0x1b);
            fStack_43c = fRam0000000146af23dc;
            local_530 = (longlong *)CONCAT44(local_530._4_4_,(float)iVar23);
            local_538 = (float *)((ulonglong)local_538 & 0xffffffffffffff00);
            local_478 = CONCAT44((fVar29 * fVar27 + fVar28 * fVar33) * fVar30,
                                 (uint)((_DAT_146af23d0 - (fVar1 * fVar29 + fVar42 * fVar28)) *
                                       fVar30) & _DAT_146af23e0);
            uStack_470 = CONCAT44(uStack_45c,fVar30 * (fVar29 * fVar33 - fVar28 * fVar27));
            uStack_44c = uStack_45c;
            FUN_142705830(plVar13,&local_478,pfVar19);
            uVar24 = *(uint *)(param_1 + 0x488);
          }
          if ((uVar24 & 0xfffffffd) == 0) {
            local_4da = puVar25[1];
            local_4db = *puVar25;
            local_4dc = puVar25[-1];
            local_4d9 = *(undefined1 *)(param_1 + 0x48c);
            plVar7 = (longlong *)FLinearColor::FLinearColor(local_1f8,&local_4dc);
            local_4c0 = (longlong *)0x0;
            local_478 = *plVar7;
            uStack_470 = plVar7[1];
            local_434 = FCrc::MemCrc_DEPRECATED(&local_478,0x10);
            if (local_1a0 != local_174) {
              puVar14 = local_170;
              if (local_168 != (undefined1 *)0x0) {
                puVar14 = local_168;
              }
              iVar23 = *(int *)(puVar14 + (longlong)(int)(local_160 - 1U & local_434) * 4);
              for (iVar4 = iVar23; iVar4 != -1;
                  iVar4 = *(int *)(local_1a8 + 0x10 + (longlong)iVar4 * 0x18)) {
                if (*(uint *)(local_1a8 + (longlong)iVar4 * 0x18) == local_434) {
                  if (iVar4 != -1) {
                    if (iVar23 == -1) goto LAB_1423eede2;
                    goto LAB_1423eedc0;
                  }
                  break;
                }
              }
            }
            if ((local_150 == '\0') || (cVar2 = FWeakObjectPtr::IsValid(local_158), cVar2 == '\0'))
            {
              uStack_4a0 = &local_4e5;
              local_4e5 = 0;
              local_318 = &DAT_14060d670;
              local_4a8 = &DAT_14060d670;
              puStack_310 = uStack_4a0;
              lVar12 = FUN_1415d8310(&local_4a8,&DAT_146216a38);
              plVar7 = (longlong *)operator_new(0x158,lVar12 + 0x18,1);
              if (plVar7 != (longlong *)0x0) {
                local_3d0 = 0x3e;
                lVar12 = (**(code **)(**(longlong **)(DAT_146b17150 + 0x3c0) + 0x2a8))
                                   (*(longlong **)(DAT_146b17150 + 0x3c0),0,0);
                FUN_14257dfd0(plVar7);
                *plVar7 = (longlong)&PTR__scalar_deleting_destructor__1440fad20;
                plVar7[0x2a] = local_3d0;
                plVar7[0x27] = lVar12;
                plVar7[0x28] = local_478;
                plVar7[0x29] = uStack_470;
                plVar8 = plVar7;
              }
            }
            else {
              uStack_4a0 = &local_4e6;
              local_4e6 = 0;
              local_328 = &DAT_14060d670;
              local_4a8 = &DAT_14060d670;
              puStack_320 = uStack_4a0;
              lVar12 = FUN_1415d8310(&local_4a8,&DAT_146216a38);
              plVar7 = (longlong *)operator_new(0x158,lVar12 + 0x18,1);
              if (plVar7 != (longlong *)0x0) {
                plVar8 = (longlong *)FWeakObjectPtr::Get(local_158);
                plVar9 = (longlong *)FName::FName(local_2f8,"GizmoColor",1);
                lVar12 = *plVar9;
                lVar17 = (**(code **)(*plVar8 + 0x2a8))(plVar8,0,0);
                FUN_14257dfd0(plVar7);
                plVar7[0x27] = lVar17;
                *plVar7 = (longlong)&PTR__scalar_deleting_destructor__1440fad20;
                plVar7[0x2a] = lVar12;
                plVar7[0x28] = local_478;
                plVar7[0x29] = uStack_470;
                plVar8 = plVar7;
              }
            }
            local_308 = &local_434;
            local_300 = &local_4c0;
            local_4c0 = plVar8;
            FUN_141711280(&local_1a8,local_35c,&local_308);
            pfVar16 = local_420;
            uVar5 = local_4e4;
            goto LAB_1423eeefa;
          }
          goto LAB_1423ef208;
        }
LAB_1423ef22b:
        lVar12 = *(longlong *)(param_1 + 0x420);
        local_370 = 0;
        local_368 = 0;
        lVar17 = (longlong)*(int *)(param_1 + 0x428) * 0x50 + lVar12;
        uVar24 = local_4e4;
        for (; local_4e4 = uVar24, lVar12 != lVar17; lVar12 = lVar12 + 0x50) {
          uVar24 = *(uint *)(param_1 + 0x488);
          if ((uVar24 == 2) || (uVar24 == 1)) {
            FLinearColor::FLinearColor(local_288,lVar12 + 0x48);
            local_508 = (longlong *)CONCAT71(local_508._1_7_,1);
            iVar23 = 0;
            bVar26 = *(int *)(param_1 + 0x488) == 2;
            local_510 = 0;
            if (bVar26) {
              iVar23 = 2;
            }
            uVar3 = 0x10;
            if (bVar26) {
              uVar3 = 9;
            }
            local_528 = local_288;
            local_518 = (longlong *)CONCAT44(local_518._4_4_,(float)iVar23);
            local_520 = (longlong *)((ulonglong)local_520 & 0xffffffffffffff00);
            local_530 = (longlong *)CONCAT44(local_530._4_4_,uVar3);
            local_538 = (float *)CONCAT44(local_538._4_4_,*(undefined4 *)(lVar12 + 0x44));
            DrawWireCone(plVar13,&local_370,lVar12,0x3f800000);
            uVar24 = *(uint *)(param_1 + 0x488);
          }
          if ((uVar24 & 0xfffffffd) == 0) {
            local_4d6 = *(undefined1 *)(lVar12 + 0x4a);
            local_4d7 = *(undefined1 *)(lVar12 + 0x49);
            local_4d8 = *(undefined1 *)(lVar12 + 0x48);
            local_4d5 = *(undefined1 *)(param_1 + 0x48c);
            puVar10 = (undefined8 *)FLinearColor::FLinearColor(local_1e8,&local_4d8);
            local_4a8 = (undefined *)*puVar10;
            uStack_4a0 = (undefined1 *)puVar10[1];
            local_538 = (float *)FUN_1423e6710(&local_1a8,&local_4a8);
            local_520 = local_4b8;
            local_528 = (undefined1 *)CONCAT44(local_528._4_4_,uVar5);
            local_530 = (longlong *)((ulonglong)local_530 & 0xffffffffffffff00);
            FUN_142709a50(lVar12,*(undefined4 *)(lVar12 + 0x40),*(undefined4 *)(lVar12 + 0x44));
          }
          uVar24 = local_4e4;
        }
        for (iVar23 = 0; (-1 < iVar23 && (iVar23 < *(int *)(param_1 + 0x408))); iVar23 = iVar23 + 1)
        {
          lVar12 = (longlong)iVar23;
          if ((local_430 != 0) &&
             (cVar2 = FConvexVolume::IntersectBox
                                (local_430 + 0x1070,
                                 *(longlong *)(param_1 + 0x400) + 4 + lVar12 * 0x14,&DAT_1468b5d90),
             cVar2 != '\0')) {
            uVar5 = *(uint *)(param_1 + 0x488);
            if ((uVar5 == 2) || (uVar5 == 1)) {
              lVar17 = *(longlong *)(param_1 + 0x400);
              local_4d4 = *(undefined1 *)(lVar17 + 0x10 + lVar12 * 0x14);
              local_4d3 = *(undefined1 *)(lVar17 + 0x11 + lVar12 * 0x14);
              local_4d2 = *(undefined1 *)(lVar17 + 0x12 + lVar12 * 0x14);
              local_4d1 = 0xff;
              FLinearColor::FLinearColor(local_278,&local_4d4);
              local_518 = (longlong *)CONCAT71(local_518._1_7_,1);
              iVar4 = 0;
              local_520 = (longlong *)((ulonglong)local_520 & 0xffffffff00000000);
              if (*(int *)(param_1 + 0x488) == 2) {
                iVar4 = 2;
              }
              local_528 = (undefined1 *)CONCAT44(local_528._4_4_,(float)iVar4);
              local_530 = (longlong *)((ulonglong)local_530 & 0xffffffffffffff00);
              local_538 = (float *)CONCAT44(local_538._4_4_,0x14);
              DrawWireSphere(plVar13,*(longlong *)(param_1 + 0x400) + 4 + lVar12 * 0x14,local_278,
                             *(undefined4 *)(*(longlong *)(param_1 + 0x400) + lVar12 * 0x14));
              uVar5 = *(uint *)(param_1 + 0x488);
            }
            if ((uVar5 & 0xfffffffd) == 0) {
              lVar17 = *(longlong *)(param_1 + 0x400);
              local_4d0 = *(undefined1 *)(lVar17 + 0x10 + lVar12 * 0x14);
              local_4cf = *(undefined1 *)(lVar17 + 0x11 + lVar12 * 0x14);
              local_4ce = *(undefined1 *)(lVar17 + 0x12 + lVar12 * 0x14);
              local_4cd = *(undefined1 *)(param_1 + 0x48c);
              puVar10 = (undefined8 *)FLinearColor::FLinearColor(local_1d8,&local_4d0);
              lVar17 = *(longlong *)(param_1 + 0x400);
              local_4a8 = (undefined *)*puVar10;
              uStack_4a0 = (undefined1 *)puVar10[1];
              local_3c0 = *(undefined4 *)(lVar17 + lVar12 * 0x14);
              local_3bc = local_3c0;
              local_3b8 = local_3c0;
              local_538 = (float *)FUN_1423e6710(&local_1a8,&local_4a8);
              local_518 = local_4b8;
              local_520 = (longlong *)CONCAT44(local_520._4_4_,uVar24);
              local_528 = (undefined1 *)((ulonglong)local_528 & 0xffffffffffffff00);
              local_530 = (longlong *)((ulonglong)local_530 & 0xffffffffffffff00);
              GetSphereMesh(lVar17 + 4 + lVar12 * 0x14,&local_3c0,0x14);
            }
          }
        }
        for (iVar23 = 0; (lVar12 = local_430, -1 < iVar23 && (iVar23 < *(int *)(param_1 + 0x448)));
            iVar23 = iVar23 + 1) {
          if (local_430 != 0) {
            lVar12 = (longlong)iVar23 * 0x3c;
            cVar2 = FConvexVolume::IntersectBox
                              (local_430 + 0x1070,*(longlong *)(param_1 + 0x440) + 4 + lVar12,
                               &DAT_1468b5d90);
            if (cVar2 != '\0') {
              uVar5 = *(uint *)(param_1 + 0x488);
              if ((uVar5 == 2) || (uVar5 == 1)) {
                lVar17 = *(longlong *)(param_1 + 0x440);
                fVar33 = *(float *)(lVar12 + lVar17);
                fVar42 = *(float *)(lVar12 + 0x30 + lVar17);
                fVar28 = *(float *)(lVar12 + 0x14 + lVar17) - fVar33;
                fVar1 = *(float *)(lVar12 + 0x34 + lVar17);
                fVar27 = *(float *)(lVar12 + 0x38 + lVar17);
                if (fVar28 <= 1.0) {
                  fVar28 = 1.0;
                }
                local_3b0 = fVar33 * fVar42 + *(float *)(lVar12 + 4 + lVar17);
                local_3ac = fVar33 * fVar1 + *(float *)(lVar12 + 8 + lVar17);
                fVar28 = fVar28 + fVar28;
                local_3a8 = fVar33 * fVar27 + *(float *)(lVar12 + 0xc + lVar17);
                fVar33 = (fVar28 * fVar1 + local_3ac) - local_3ac;
                fVar29 = (fVar28 * fVar27 + local_3a8) - local_3a8;
                fVar28 = (fVar28 * fVar42 + local_3b0) - local_3b0;
                fVar33 = SQRT(fVar33 * fVar33 + fVar28 * fVar28 + fVar29 * fVar29) * 0.5;
                local_3b0 = fVar33 * fVar42 + local_3b0;
                local_3ac = fVar33 * fVar1 + local_3ac;
                local_3a8 = fVar33 * fVar27 + local_3a8;
                FLinearColor::FLinearColor(local_268,lVar17 + 0x10 + lVar12);
                lVar17 = *(longlong *)(param_1 + 0x440);
                bVar26 = *(int *)(param_1 + 0x488) == 2;
                local_4f8 = (longlong *)CONCAT71(local_4f8._1_7_,1);
                iVar4 = 0;
                if (bVar26) {
                  iVar4 = 2;
                }
                local_500 = 0;
                uVar3 = 0x10;
                if (bVar26) {
                  uVar3 = 9;
                }
                local_538 = (float *)(lVar17 + 0x30 + lVar12);
                local_508 = (longlong *)CONCAT44(local_508._4_4_,(float)iVar4);
                local_510 = local_510 & 0xffffff00;
                local_518 = (longlong *)CONCAT44(local_518._4_4_,uVar3);
                local_530 = local_268;
                local_520 = (longlong *)
                            CONCAT44(local_520._4_4_,*(undefined4 *)(lVar12 + 0x14 + lVar17));
                local_528 = (undefined1 *)CONCAT44(local_528._4_4_,*(undefined4 *)(lVar12 + lVar17))
                ;
                FUN_142705d30(plVar13,&local_3b0,lVar17 + 0x18 + lVar12);
                uVar5 = *(uint *)(param_1 + 0x488);
              }
              if ((uVar5 & 0xfffffffd) == 0) {
                FLinearColor::FLinearColor(local_258,*(longlong *)(param_1 + 0x440) + 0x10 + lVar12)
                ;
                lVar17 = *(longlong *)(param_1 + 0x440);
                local_4cc = *(undefined1 *)(lVar12 + 0x10 + lVar17);
                local_4cb = *(undefined1 *)(lVar12 + 0x11 + lVar17);
                local_4ca = *(undefined1 *)(lVar12 + 0x12 + lVar17);
                local_4c9 = *(undefined1 *)(param_1 + 0x48c);
                puVar10 = (undefined8 *)FLinearColor::FLinearColor(local_1c8,&local_4cc);
                lVar17 = *(longlong *)(param_1 + 0x440);
                local_4a8 = (undefined *)*puVar10;
                uStack_4a0 = (undefined1 *)puVar10[1];
                local_518 = (longlong *)FUN_1423e6710(&local_1a8,&local_4a8);
                local_4f8 = local_4b8;
                local_508 = (longlong *)((ulonglong)local_508 & 0xffffffffffffff00);
                local_510 = local_510 & 0xffffff00;
                local_520 = (longlong *)CONCAT44(local_520._4_4_,0x10);
                local_538 = local_258;
                local_528 = (undefined1 *)
                            CONCAT44(local_528._4_4_,*(undefined4 *)(lVar12 + 0x14 + lVar17));
                local_530 = (longlong *)CONCAT44(local_530._4_4_,*(undefined4 *)(lVar12 + lVar17));
                local_500 = uVar24;
                GetCapsuleMesh(lVar17 + 4 + lVar12,lVar17 + 0x18 + lVar12,lVar17 + 0x24 + lVar12);
              }
            }
          }
        }
        lVar21 = *(longlong *)(param_1 + 0x430);
        lVar17 = lVar21 + (longlong)*(int *)(param_1 + 0x438) * 0x28;
        if (lVar21 != lVar17) {
          puVar25 = (undefined1 *)(lVar21 + 0x21);
          do {
            local_538 = (float *)((ulonglong)local_538 & 0xffffffffffffff00);
            FUN_1424290d0(&local_478,*(undefined4 *)(lVar12 + 0x1a38),1);
            FUN_14242c440(&local_478,lVar21);
            FUN_14242bfc0(&local_478,puVar25 + -0x11);
            local_4c6 = puVar25[1];
            local_4c7 = *puVar25;
            local_4c8 = puVar25[-1];
            local_4c5 = *(undefined1 *)(param_1 + 0x48c);
            puVar10 = (undefined8 *)FLinearColor::FLinearColor(local_1b8,&local_4c8);
            local_4a8 = (undefined *)*puVar10;
            uStack_4a0 = (undefined1 *)puVar10[1];
            lVar11 = 0;
            if (puVar25[2] == -1) {
              lVar11 = 0x60;
            }
            uVar6 = FUN_1423e6710((longlong)&local_1a8 + lVar11,&local_4a8);
            local_520 = local_4b8;
            local_528 = (undefined1 *)CONCAT44(local_528._4_4_,uVar24);
            local_530 = (longlong *)((ulonglong)local_530 & 0xffffffffffffff00);
            local_538 = (float *)((ulonglong)local_538 & 0xffffffffffffff00);
            FDynamicMeshBuilder::GetMesh(&local_478,&DAT_1464aa7d0,uVar6);
            FDynamicMeshBuilder::~FDynamicMeshBuilder(&local_478);
            lVar21 = lVar21 + 0x28;
            puVar25 = puVar25 + 0x28;
          } while (lVar21 != lVar17);
        }
        param_5 = local_4b8;
        param_2 = local_3c8;
        param_4 = local_498;
        if (local_370 != 0) {
          FMemory::Free();
          param_5 = local_4b8;
          param_2 = local_3c8;
          param_4 = local_498;
        }
      }
      local_4e4 = uVar24 + 1;
      local_428 = local_428 + 1;
    } while ((int)local_4e4 < (int)param_2[1]);
  }
  lVar12 = 2;
  puVar22 = local_e8;
  do {
    lVar12 = lVar12 + -1;
    *(undefined4 *)(puVar22 + -3) = 0;
    if (puVar22[-4] != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (puVar22 + -0xc);
    puVar22 = puVar22 + -0xc;
  } while (lVar12 != 0);
  return;
  while (iVar23 = *(int *)(local_1a8 + 0x10 + lVar12 * 0x18), iVar23 != -1) {
LAB_1423ee910:
    lVar12 = (longlong)iVar23;
    if (*(uint *)(local_1a8 + lVar12 * 0x18) == local_438) {
      plVar7 = (longlong *)(local_1a8 + lVar12 * 0x18);
      if (iVar23 != -1) goto LAB_1423ee935;
      break;
    }
  }
LAB_1423ee932:
  plVar7 = plVar8;
LAB_1423ee935:
  local_4c0 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    local_4c0 = plVar8;
  }
  local_4c0 = (longlong *)*local_4c0;
LAB_1423eea4a:
  local_508 = local_4b8;
  local_518 = (longlong *)((ulonglong)local_518 & 0xffffffffffffff00);
  local_528 = (undefined1 *)CONCAT44(local_528._4_4_,0x10);
  local_530 = (longlong *)CONCAT44(local_530._4_4_,pfVar15[-6]);
  local_538 = (float *)CONCAT44(local_538._4_4_,pfVar15[-7]);
  local_520 = local_4c0;
  local_510 = uVar5;
  GetCylinderMesh(&local_408,&local_418);
LAB_1423eea97:
  pfVar19 = pfVar19 + 0xc;
  pfVar15 = pfVar15 + 0xc;
  if (pfVar19 == pfVar16) goto LAB_1423eeaa8;
  goto LAB_1423ee542;
  while (iVar23 = *(int *)(local_1a8 + 0x10 + lVar12 * 0x18), iVar23 != -1) {
LAB_1423eedc0:
    lVar12 = (longlong)iVar23;
    if (*(uint *)(local_1a8 + lVar12 * 0x18) == local_434) {
      plVar7 = (longlong *)(local_1a8 + lVar12 * 0x18);
      if (iVar23 != -1) goto LAB_1423eede5;
      break;
    }
  }
LAB_1423eede2:
  plVar7 = plVar8;
LAB_1423eede5:
  local_4c0 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    local_4c0 = plVar8;
  }
  local_4c0 = (longlong *)*local_4c0;
LAB_1423eeefa:
  local_37c = (*(float *)(puVar25 + -0xd) - *(float *)(puVar25 + -0x19)) * 0.5;
  local_380 = (*(float *)(puVar25 + -0x11) - *pfVar19) * 0.5;
  fVar33 = *(float *)(puVar25 + 3);
  fVar42 = *(float *)(puVar25 + 7);
  fVar1 = *(float *)(puVar25 + 0xb);
  fVar27 = *(float *)(puVar25 + 0xf);
  fVar31 = fVar42 + fVar42;
  fVar32 = fVar1 + fVar1;
  local_378 = (*(float *)(puVar25 + -9) - *(float *)(puVar25 + -0x15)) * 0.5;
  fVar35 = (fVar33 + fVar33) * fVar33;
  fVar34 = (fVar33 + fVar33) * fVar27;
  fVar28 = *(float *)(puVar25 + 0x23);
  fVar29 = *(float *)(puVar25 + 0x27);
  fVar30 = *(float *)(puVar25 + 0x2b);
  fVar49 = (fVar32 * fVar27 + fVar31 * fVar33) * fVar28;
  fVar50 = (fVar34 + fVar32 * fVar42) * fVar29;
  fVar51 = (fVar31 * fVar27 + fVar32 * fVar33) * fVar30;
  fVar39 = fVar29 * (fVar31 * fVar33 - fVar32 * fVar27);
  fVar40 = fVar30 * (fVar32 * fVar42 - fVar34);
  fVar41 = fVar28 * (fVar32 * fVar33 - fVar31 * fVar27);
  fVar34 = (float)((uint)((_DAT_146af23d0 - (fVar32 * fVar1 + fVar31 * fVar42)) * fVar28) &
                  _DAT_146af23e0);
  fVar32 = (float)((uint)((fRam0000000146af23d4 - (fVar32 * fVar1 + fVar35)) * fVar29) &
                  uRam0000000146af23e4);
  fVar31 = (float)((uint)((fRam0000000146af23d8 - (fVar31 * fVar42 + fVar35)) * fVar30) &
                  uRam0000000146af23e8);
  fVar35 = (float)((uint)((fRam0000000146af23dc - (fVar35 + fVar35)) * *(float *)(puVar25 + 0x2f)) &
                  uRam0000000146af23ec);
  local_478 = CONCAT44(fVar40,fVar51);
  uStack_470 = CONCAT44(fVar35,fVar31);
  fVar33 = *(float *)(puVar25 + 0x13);
  fVar42 = *(float *)(puVar25 + 0x17);
  fVar1 = *(float *)(puVar25 + 0x1b);
  fVar48 = (*pfVar19 + *(float *)(puVar25 + -0x11)) * 0.5;
  fVar47 = (*(float *)(puVar25 + -0x19) + *(float *)(puVar25 + -0xd)) * 0.5;
  fVar46 = (*(float *)(puVar25 + -0x15) + *(float *)(puVar25 + -9)) * 0.5;
  local_4a8 = (undefined *)CONCAT44(fVar49,fVar34);
  uStack_4a0 = (undefined1 *)CONCAT44(fVar35,fVar41);
  fVar43 = fRam0000000146af23dc * 0.0 + 0.0;
  fVar44 = fRam0000000146af23dc * 0.0 + 0.0;
  fVar45 = fRam0000000146af23dc * 0.0 + 0.0;
  fVar36 = 0.0 - fRam0000000146af23dc * 0.0;
  fVar37 = 0.0 - fRam0000000146af23dc * 0.0;
  fVar38 = 0.0 - fRam0000000146af23dc * 0.0;
  fVar27 = (float)((uint)(_DAT_146af23d0 - 0.0) & _DAT_146af23e0);
  fVar28 = (float)((uint)(fRam0000000146af23d4 - 0.0) & uRam0000000146af23e4);
  fVar29 = (float)((uint)(fRam0000000146af23d8 - 0.0) & uRam0000000146af23e8);
  fVar30 = (float)((uint)(fRam0000000146af23dc - 0.0) & uRam0000000146af23ec);
  local_248 = fVar43 * fVar39 + fVar27 * fVar34 + fVar38 * fVar51 + fVar30 * fVar33;
  fStack_244 = fVar43 * fVar32 + fVar27 * fVar49 + fVar38 * fVar40 + fVar30 * fVar42;
  fStack_240 = fVar43 * fVar50 + fVar27 * fVar41 + fVar38 * fVar31 + fVar30 * fVar1;
  fStack_23c = fVar43 * fVar35 + fVar27 * fVar35 + fVar38 * fVar35 + fVar30 * fRam0000000146af23dc;
  local_238 = fVar28 * fVar39 + fVar36 * fVar34 + fVar44 * fVar51 + fVar30 * fVar33;
  fStack_234 = fVar28 * fVar32 + fVar36 * fVar49 + fVar44 * fVar40 + fVar30 * fVar42;
  fStack_230 = fVar28 * fVar50 + fVar36 * fVar41 + fVar44 * fVar31 + fVar30 * fVar1;
  fStack_22c = fVar28 * fVar35 + fVar36 * fVar35 + fVar44 * fVar35 + fVar30 * fRam0000000146af23dc;
  local_530 = local_4b8;
  local_538 = (float *)CONCAT44(local_538._4_4_,uVar5);
  local_228 = fVar37 * fVar39 + fVar45 * fVar34 + fVar29 * fVar51 + fVar30 * fVar33;
  fStack_224 = fVar37 * fVar32 + fVar45 * fVar49 + fVar29 * fVar40 + fVar30 * fVar42;
  fStack_220 = fVar37 * fVar50 + fVar45 * fVar41 + fVar29 * fVar31 + fVar30 * fVar1;
  fStack_21c = fVar37 * fVar35 + fVar45 * fVar35 + fVar29 * fVar35 + fVar30 * fRam0000000146af23dc;
  local_218 = fVar47 * fVar39 + fVar48 * fVar34 + fVar46 * fVar51 + fRam0000000146af23dc * fVar33;
  fStack_214 = fVar47 * fVar32 + fVar48 * fVar49 + fVar46 * fVar40 + fRam0000000146af23dc * fVar42;
  fStack_210 = fVar47 * fVar50 + fVar48 * fVar41 + fVar46 * fVar31 + fRam0000000146af23dc * fVar1;
  fStack_20c = fVar47 * fVar35 + fVar48 * fVar35 + fVar46 * fVar35 +
               fRam0000000146af23dc * fRam0000000146af23dc;
  FUN_142708e30(&local_248,&local_380);
LAB_1423ef208:
  pfVar19 = pfVar19 + 0x14;
  puVar25 = puVar25 + 0x50;
  if (pfVar19 == pfVar16) goto LAB_1423ef22b;
  goto LAB_1423eead2;
}



// FUNCTION 1423efa50 GetFromIndex body=55 status=ok
// SIG undefined GetFromIndex(void)

longlong FClassNetCache::GetFromIndex(int *param_1,int param_2)

{
  int iVar1;
  
  while( true ) {
    if (param_1 == (int *)0x0) {
      return 0;
    }
    iVar1 = *param_1;
    if ((iVar1 <= param_2) && (param_2 < param_1[10] + iVar1)) break;
    param_1 = *(int **)(param_1 + 2);
  }
  return *(longlong *)(param_1 + 8) + (longlong)(param_2 - iVar1) * 0x18;
}



// FUNCTION 1423efa90 FUN_1423efa90 body=560 status=ok
// SIG undefined FUN_1423efa90(void)

undefined8 FUN_1423efa90(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *_Dst;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *_Src;
  longlong lVar8;
  undefined8 local_res18 [2];
  void *local_88;
  int local_80;
  int local_7c;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  int local_4c;
  undefined8 local_48;
  longlong *local_40;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x28) + 0xa4) & 1) != 0) {
    local_78 = (void *)0x0;
    local_70 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    _Src = local_78;
    FGenericPlatformString::Memcpy(local_78,L"_ClassNetCache",0x1e);
    local_res18[0] = *(undefined8 *)(param_2 + 0x18);
    FName::ToString(local_res18,&local_68);
    if ((int)local_60 < 2) {
      local_50 = (int)local_70;
      local_4c = local_70._4_4_;
      local_58 = _Src;
      _Src = (void *)0x0;
    }
    else {
      iVar7 = 0;
      if ((int)local_70 != 0) {
        iVar7 = (int)local_70 + -1;
      }
      if (((int)local_60 != 0) || (iVar6 = 1, iVar7 == 0)) {
        iVar6 = 0;
      }
      iVar4 = local_60._4_4_;
      iVar6 = iVar6 + (int)local_60;
      local_88 = local_68;
      local_68 = (void *)0x0;
      local_80 = (int)local_60;
      local_7c = local_60._4_4_;
      local_60 = 0;
      if (iVar4 < iVar6 + iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_88);
      }
      iVar6 = local_80;
      local_58 = local_88;
      local_50 = local_80;
      local_4c = local_7c;
      if (iVar7 != 0) {
        lVar8 = (longlong)local_80;
        local_80 = local_80 + (uint)(local_80 == 0) + iVar7;
        if (local_7c < local_80) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,iVar6);
        }
        iVar5 = local_7c;
        iVar4 = local_80;
        pvVar3 = local_88;
        _Dst = (void *)((longlong)local_88 + (lVar8 - (ulonglong)(iVar6 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)iVar7 * 2 + (longlong)_Dst) = 0;
        local_58 = pvVar3;
        local_50 = iVar4;
        local_4c = iVar5;
      }
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free();
    }
    if (_Src != (void *)0x0) {
      FMemory::Free(_Src);
    }
    FUN_1425e5d60(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x68),&local_48,&local_58);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free();
    }
    return local_48;
  }
  return 0;
}



// FUNCTION 1423efcc0 FUN_1423efcc0 body=1381 status=ok
// SIG undefined FUN_1423efcc0(void)

void ** FUN_1423efcc0(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  void *_Dst;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  void **ppvVar10;
  longlong lVar11;
  undefined1 *puVar12;
  int iVar13;
  void **ppvVar14;
  int iVar15;
  void **ppvVar16;
  longlong lVar17;
  undefined8 *puVar18;
  void *pvVar19;
  undefined8 uVar20;
  undefined8 local_res20;
  void *local_c8;
  int local_c0;
  int local_bc;
  void *local_b8;
  int local_b0;
  int local_ac;
  void *local_a8;
  undefined8 local_a0;
  void **local_98;
  longlong *plStack_90;
  void *local_88;
  undefined8 local_80;
  void **local_78;
  void **local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58 [2];
  void **local_48 [2];
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x28) + 0xa4) & 1) == 0) {
    return (void **)0x0;
  }
  lVar9 = *(longlong *)(param_2 + 0x10);
  uVar20 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x68);
  local_a8 = (void *)0x0;
  local_a0 = 0xf;
  local_68 = uVar20;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
  pvVar19 = local_a8;
  FGenericPlatformString::Memcpy(local_a8,L"_ClassNetCache",0x1e);
  local_60 = *(undefined8 *)(lVar9 + 0x18);
  FName::ToString(&local_60,&local_88);
  iVar8 = 0;
  if ((int)local_80 < 2) {
    local_b0 = (int)local_a0;
    local_b8 = pvVar19;
    local_ac = local_a0._4_4_;
    local_a8 = (void *)0x0;
    pvVar19 = (void *)0x0;
  }
  else {
    if ((int)local_a0 != 0) {
      iVar8 = (int)local_a0 + -1;
    }
    if (((int)local_80 != 0) || (iVar13 = 1, iVar8 == 0)) {
      iVar13 = 0;
    }
    iVar15 = local_80._4_4_;
    iVar13 = (int)local_80 + iVar13;
    local_c8 = local_88;
    local_88 = (void *)0x0;
    local_c0 = (int)local_80;
    local_bc = local_80._4_4_;
    local_80 = 0;
    if (iVar15 < iVar13 + iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_c8);
    }
    iVar13 = local_c0;
    uVar20 = local_68;
    local_b8 = local_c8;
    local_b0 = local_c0;
    local_ac = local_bc;
    if (iVar8 != 0) {
      lVar17 = (longlong)local_c0;
      local_c0 = local_c0 + (uint)(local_c0 == 0) + iVar8;
      if (local_bc < local_c0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,iVar13);
      }
      iVar7 = local_bc;
      iVar15 = local_c0;
      pvVar6 = local_c8;
      _Dst = (void *)((longlong)local_c8 + (lVar17 - (ulonglong)(iVar13 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,pvVar19,(longlong)iVar8 * 2);
      *(undefined2 *)((longlong)_Dst + (longlong)iVar8 * 2) = 0;
      uVar20 = local_68;
      local_b8 = pvVar6;
      local_b0 = iVar15;
      local_ac = iVar7;
    }
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free();
  }
  if (pvVar19 != (void *)0x0) {
    FMemory::Free(pvVar19);
  }
  FUN_1425e5d60(uVar20,&local_98,&local_b8);
  if (local_98 == (void **)0x0) {
    lVar9 = FUN_14171a990(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 0xf0),lVar9);
    ppvVar10 = (void **)operator_new(0x28);
    ppvVar16 = (void **)0x0;
    ppvVar14 = ppvVar16;
    if (ppvVar10 != (void **)0x0) {
      *ppvVar10 = (void *)0x0;
      ppvVar10[1] = (void *)0x0;
      *(undefined4 *)(ppvVar10 + 2) = 0;
      ppvVar10[3] = (void *)0x0;
      ppvVar10[4] = (void *)0x0;
      ppvVar14 = ppvVar10;
    }
    local_78 = ppvVar14;
    ppvVar10 = (void **)operator_new(0x18);
    local_70 = ppvVar16;
    if (ppvVar10 != (void **)0x0) {
      *(undefined4 *)(ppvVar10 + 1) = 1;
      *ppvVar10 = &PTR_DestroyObject_144fe7dc8;
      *(undefined4 *)((longlong)ppvVar10 + 0xc) = 1;
      ppvVar10[2] = ppvVar14;
      local_70 = ppvVar10;
    }
    SharedPointerInternals::EnableSharedFromThis(&local_78,ppvVar14,ppvVar14);
    local_98 = local_78;
    local_78 = (void **)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_90,&local_70);
    ppvVar14 = local_70;
    if (local_70 != (void **)0x0) {
      LOCK();
      ppvVar10 = local_70 + 1;
      iVar8 = *(int *)ppvVar10;
      *(int *)ppvVar10 = *(int *)ppvVar10 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)ppvVar14 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)((longlong)*ppvVar14 + 8))(ppvVar14,1);
        }
      }
    }
    ppvVar14 = local_98;
    pvVar19 = local_b8;
    if (local_98 != &local_b8) {
      lVar17 = (longlong)local_b0;
      *(int *)(local_98 + 1) = local_b0;
      if ((local_b0 == 0) && (*(int *)((longlong)local_98 + 0xc) == 0)) {
        *(undefined4 *)((longlong)local_98 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(local_98,local_b0);
        _guard_xfg_dispatch_icall_nop(*ppvVar14,pvVar19,lVar17 * 2);
      }
    }
    for (; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 8)) {
      lVar17 = 0;
      iVar8 = 0;
      if (0 < *(int *)(lVar9 + 0x28)) {
        do {
          lVar3 = *(longlong *)(lVar17 + *(longlong *)(lVar9 + 0x20));
          if (lVar3 == 0) {
LAB_1423f0074:
            bVar4 = false;
          }
          else {
            lVar11 = UProperty::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) goto LAB_1423f0074;
            lVar11 = UStructProperty::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if ((!bVar4) || ((*(uint *)(*(longlong *)(lVar3 + 0x70) + 0x88) & 0x100000) == 0))
            goto LAB_1423f0074;
            bVar4 = true;
          }
          if (lVar3 == 0) {
LAB_1423f00b5:
            lVar11 = 0;
          }
          else {
            lVar11 = FUN_14171c5d0();
            if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            lVar11 = lVar3;
            if (!bVar5) goto LAB_1423f00b5;
          }
          ppvVar14 = local_98;
          if ((bVar4) || (lVar11 != 0)) {
            if (lVar3 == 0) {
              local_res20 = 0;
              puVar18 = &local_res20;
            }
            else {
              puVar18 = local_58;
              local_58[0] = *(undefined8 *)(lVar3 + 0x18);
            }
            iVar15 = (int)ppvVar16;
            lVar3 = *(longlong *)(lVar9 + 0x20);
            iVar13 = *(int *)(local_98 + 4);
            *(int *)(local_98 + 4) = iVar13 + 1;
            if (*(int *)((longlong)local_98 + 0x24) < iVar13 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
              ResizeGrow(local_98 + 3,iVar13);
            }
            ppvVar16 = (void **)(ulonglong)(iVar15 + 1);
            puVar12 = (undefined1 *)((longlong)iVar13 * 0x40 + (longlong)ppvVar14[3]);
            *(undefined4 *)(puVar12 + 8) = *(undefined4 *)(lVar17 + 0xc + lVar3);
            uVar20 = *puVar18;
            *(int *)(puVar12 + 4) = iVar15;
            *(undefined8 *)(puVar12 + 0x10) = uVar20;
            *puVar12 = 0;
            *(undefined8 *)(puVar12 + 0x18) = 0;
            *(undefined8 *)(puVar12 + 0x20) = 0;
            *(undefined8 *)(puVar12 + 0x28) = 0;
            *(undefined8 *)(puVar12 + 0x30) = 0;
            puVar12[0x38] = 0;
          }
          lVar17 = lVar17 + 0x18;
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(lVar9 + 0x28));
      }
      uVar20 = local_68;
    }
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
      UNLOCK();
    }
    local_48[0] = local_98;
    FUN_1425db5d0(uVar20,&local_b8,local_48);
  }
  ppvVar16 = local_98;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_90 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plStack_90 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free();
  }
  return ppvVar16;
}



// FUNCTION 1423f0230 GetPreloadDependencies body=78 status=ok
// SIG undefined GetPreloadDependencies(void)

void UDataTable::GetPreloadDependencies(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  UObject::GetPreloadDependencies();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 1423f0280 GetPrimaryAssetId body=333 status=ok
// SIG undefined GetPrimaryAssetId(void)

undefined8 * UPrimaryDataAsset::GetPrimaryAssetId(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 local_res8;
  undefined1 local_res18 [8];
  longlong local_28 [2];
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *param_2 = *(undefined8 *)(lVar3 + 0x18);
    param_2[1] = uVar2;
    return param_2;
  }
  lVar1 = *(longlong *)(lVar3 + 0x30);
  if (((*(uint *)(lVar3 + 0xb4) & 0x10000080) != 0) ||
     (lVar3 = GetPrivateStaticClass(), lVar1 == lVar3)) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  while( true ) {
    if (lVar1 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
      return param_2;
    }
    lVar3 = *(longlong *)(lVar1 + 0x30);
    lVar4 = GetPrivateStaticClass();
    if (lVar3 == lVar4) break;
    if ((*(uint *)(lVar1 + 0xb4) & 0x10000080) != 0) goto LAB_1423f0322;
    lVar1 = *(longlong *)(lVar1 + 0x30);
  }
  if ((*(uint *)(lVar1 + 0xb4) & 0x10000080) == 0) {
    lVar3 = UObjectBaseUtility::GetOutermost(lVar1);
    local_res8 = *(undefined8 *)(lVar3 + 0x18);
    puVar5 = (undefined8 *)FPackageName::GetShortFName(local_res18,&local_res8);
    goto LAB_1423f0348;
  }
LAB_1423f0322:
  puVar5 = (undefined8 *)(lVar1 + 0x18);
LAB_1423f0348:
  uVar2 = *puVar5;
  lVar3 = UObjectBaseUtility::GetOutermost(param_1);
  local_res8 = *(undefined8 *)(lVar3 + 0x18);
  FName::ToString(&local_res8,local_28);
  puVar5 = (undefined8 *)FUN_1416f9cf0(local_res18,local_28);
  param_2[1] = *puVar5;
  *param_2 = uVar2;
  if (local_28[0] == 0) {
    return param_2;
  }
  FMemory::Free();
  return param_2;
}



// FUNCTION 1423f03d0 FUN_1423f03d0 body=281 status=ok
// SIG undefined FUN_1423f03d0(void)

undefined8 * FUN_1423f03d0(undefined8 *param_1,longlong param_2,byte param_3)

{
  bool bVar1;
  void *_Src;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10;
  void *local_18;
  int local_10;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  lVar2 = UUserDefinedStruct::GetPrivateStaticClass();
  lVar3 = UField::GetOwnerStruct(param_2);
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && ((~param_3 & 1) == 0)) {
    local_res10 = *(undefined8 *)(param_2 + 0x18);
    FName::ToString(&local_res10,&local_18);
    _Src = local_18;
    *param_1 = 0;
    *(int *)(param_1 + 1) = local_10;
    if (local_10 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,local_10,0);
      _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)local_10 * 2);
    }
    if (local_18 != (void *)0x0) {
      FMemory::Free(local_18);
    }
  }
  else {
    local_res10 = *(undefined8 *)(param_2 + 0x18);
    FName::ToString(&local_res10,param_1);
  }
  return param_1;
}



// FUNCTION 1423f04f0 FUN_1423f04f0 body=420 status=ok
// SIG undefined FUN_1423f04f0(void)

longlong * FUN_1423f04f0(longlong *param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if ((param_2 != 0) && (cVar1 = DataTableUtils::IsSupportedTableProperty(param_2), cVar1 != '\0'))
  {
    if (*(int *)(param_2 + 0x30) == 1) {
      FUN_1423f06a0(param_2,*(int *)(param_2 + 0x44) + param_3,0,0,param_4,param_1);
      return param_1;
    }
    iVar2 = (int)param_1[1];
    iVar3 = iVar2 + -1;
    if (iVar2 < 1) {
      iVar3 = iVar5;
    }
    iVar2 = (iVar2 < 1) + 1 + iVar2;
    *(int *)(param_1 + 1) = iVar2;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
    }
    *(undefined2 *)(*param_1 + (longlong)iVar3 * 2) = 0x28;
    *(undefined2 *)(*param_1 + 2 + (longlong)iVar3 * 2) = 0;
    if (0 < *(int *)(param_2 + 0x30)) {
      do {
        FUN_1423f06a0(param_2,(longlong)*(int *)(param_2 + 0x44) +
                              *(int *)(param_2 + 0x34) * iVar4 + param_3,iVar4,2,param_4,param_1);
        iVar4 = iVar4 + 1;
        if (*(int *)(param_2 + 0x30) <= iVar4) break;
        iVar2 = (int)param_1[1];
        iVar3 = iVar2 + -1;
        if (iVar2 < 1) {
          iVar3 = iVar5;
        }
        iVar2 = (iVar2 < 1) + 1 + iVar2;
        *(int *)(param_1 + 1) = iVar2;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
        }
        *(undefined2 *)(*param_1 + (longlong)iVar3 * 2) = 0x2c;
        *(undefined2 *)(*param_1 + 2 + (longlong)iVar3 * 2) = 0;
      } while (iVar4 < *(int *)(param_2 + 0x30));
    }
    iVar4 = (int)param_1[1];
    iVar2 = iVar4 + -1;
    if (iVar4 < 1) {
      iVar2 = iVar5;
    }
    iVar4 = (iVar4 < 1) + 1 + iVar4;
    *(int *)(param_1 + 1) = iVar4;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
    }
    *(undefined2 *)(*param_1 + (longlong)iVar2 * 2) = 0x29;
    *(undefined2 *)(*param_1 + 2 + (longlong)iVar2 * 2) = 0;
  }
  return param_1;
}



// FUNCTION 1423f06a0 FUN_1423f06a0 body=631 status=ok
// SIG undefined FUN_1423f06a0(void)

void FUN_1423f06a0(longlong *param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                  byte param_5,longlong *param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  void *_Src;
  void *local_38;
  int local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (((~param_5 & 2) == 0) && (param_1 != (longlong *)0x0)) {
    lVar8 = UEnumProperty::GetPrivateStaticClass();
    if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      lVar8 = param_1[0xf];
      uVar9 = (**(code **)(*(longlong *)param_1[0xe] + 0x3a8))((longlong *)param_1[0xe],param_2);
    }
    else {
      lVar8 = UByteProperty::GetPrivateStaticClass();
      if ((*(int *)(param_1[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_1[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
          lVar8 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (!bVar6) goto LAB_1423f08d5;
      lVar8 = (**(code **)(*param_1 + 0x380))(param_1);
      uVar9 = (ulonglong)*param_2;
    }
    if (lVar8 != 0) {
      lVar10 = UUserDefinedEnum::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        uVar11 = FUN_1417373a0(lVar8,local_28,uVar9);
        puVar12 = (undefined8 *)FTextInspector::GetSourceString(uVar11);
        if (puVar12 == (undefined8 *)0x0) {
          puVar12 = (undefined8 *)FText::ToString(uVar11);
        }
        local_30 = *(int *)(puVar12 + 1);
        lVar8 = (longlong)local_30;
        _Src = (void *)0x0;
        pvVar5 = (void *)*puVar12;
        local_38 = (void *)0x0;
        if (local_30 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
          _Src = local_38;
          _guard_xfg_dispatch_icall_nop(local_38,pvVar5,lVar8 * 2);
          if ((local_30 != 0) && (iVar3 = local_30 + -1, iVar3 != 0)) {
            iVar4 = (int)param_6[1];
            iVar7 = (uint)(iVar4 == 0) + iVar4 + iVar3;
            *(int *)(param_6 + 1) = iVar7;
            if (*(int *)((longlong)param_6 + 0xc) < iVar7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_6,iVar4);
            }
            pvVar5 = (void *)(*param_6 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar5,_Src,(longlong)iVar3 * 2);
            *(undefined2 *)((longlong)iVar3 * 2 + (longlong)pvVar5) = 0;
          }
        }
        if (_Src != (void *)0x0) {
          FMemory::Free(_Src);
        }
        if (local_20 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar1 = local_20 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 != 1) {
          return;
        }
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 != 1) {
          return;
        }
        (**(code **)(*local_20 + 8))(local_20,1);
        return;
      }
    }
  }
LAB_1423f08d5:
  FUN_141754d30(param_1,param_6,param_2,param_2,0,param_4,0);
  return;
}



// FUNCTION 1423f0920 GetResourceSizeEx body=117 status=ok
// SIG undefined GetResourceSizeEx(void)

void UDataTable::GetResourceSizeEx(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_141758340();
  iVar2 = *(int *)(param_1 + 0x5c) + 0x1f;
  lVar3 = (ulonglong)
          (uint)((((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) + *(int *)(param_1 + 0x3c) * 6 +
                 *(int *)(param_1 + 0x78)) * 4) + *(longlong *)(param_2 + 8);
  *(longlong *)(param_2 + 8) = lVar3;
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    *(longlong *)(param_2 + 8) =
         (*(int *)(lVar1 + 0x40) + -1 + *(int *)(lVar1 + 0x44) & -*(int *)(lVar1 + 0x44)) *
         (*(int *)(param_1 + 0x38) - *(int *)(param_1 + 100)) + lVar3;
  }
  return;
}



// FUNCTION 1423f09a0 FUN_1423f09a0 body=899 status=ok
// SIG undefined FUN_1423f09a0(void)

ulonglong * FUN_1423f09a0(longlong param_1,ulonglong *param_2,undefined8 param_3,char param_4)

{
  undefined4 *puVar1;
  void *pvVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined4 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 local_res18;
  char local_res20;
  ulonglong local_c8;
  uint local_c0;
  uint local_bc;
  void *local_b8;
  longlong local_b0;
  ulonglong uStack_a8;
  undefined4 local_a0;
  undefined2 uStack_9c;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  undefined8 local_98;
  ulonglong uStack_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  longlong local_80;
  longlong local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  longlong local_60 [5];
  
  local_res18 = param_3;
  local_res20 = param_4;
  local_80 = FUN_140c74740(param_1,param_3,0);
  if (local_80 == 0) {
    puVar4 = (undefined8 *)FName::ToString(&local_res18,&local_c8);
    if (*(int *)(puVar4 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*puVar4;
    }
    FString::PrintfImpl(param_2,L"Row \"%s\" not found",puVar11);
    if (local_c8 != 0) {
      FMemory::Free();
      return param_2;
    }
  }
  else {
    local_b0 = *(longlong *)(param_1 + 0x28);
    uVar6 = 0;
    uVar5 = 0;
    uVar12 = 0;
    local_c8 = 0;
    local_bc = 0;
    uStack_a8 = uVar6;
    if (local_b0 != 0) {
      uStack_a8 = *(ulonglong *)(local_b0 + 0x38);
    }
    local_a0 = 0xffffffff;
    uStack_9c = 0x101;
    uStack_9a = 0;
    FUN_140472e10(&local_b0);
    uVar3 = uStack_a8;
    local_68 = CONCAT17(uStack_99,CONCAT16(uStack_9a,CONCAT24(uStack_9c,local_a0)));
    local_88 = 0xffffffff;
    local_78 = local_b0;
    uStack_70 = uStack_a8;
    local_84 = 0x101;
    local_98 = 0;
    uStack_90 = 0;
    local_82 = 0;
    FUN_140472e10(&local_98);
    uVar13 = uVar6;
    uVar14 = uVar6;
    if (uVar3 != uStack_90) {
      do {
        uVar3 = uStack_70;
        iVar7 = (int)uVar6;
        if ((iVar7 != 0) && (0 < iVar7 + -1)) {
          local_c0 = iVar7 + 2;
          if ((int)uVar13 < (int)local_c0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,uVar6);
            uVar13 = (ulonglong)local_bc;
            uVar14 = local_c8;
          }
          uVar6 = (ulonglong)local_c0;
          puVar1 = (undefined4 *)(uVar14 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
          *puVar1 = 0x20002c;
          *(undefined2 *)(puVar1 + 1) = 0;
        }
        uVar8 = (uint)uVar6;
        if (param_4 != '\0') {
          puVar4 = (undefined8 *)FUN_1423f03d0(local_60,uVar3,1);
          local_b8 = (void *)*puVar4;
          iVar7 = *(int *)(puVar4 + 1) + -1;
          if (*(int *)(puVar4 + 1) == 0) {
            iVar7 = 0;
          }
          uVar9 = uVar8;
          if (iVar7 != 0) {
            local_c0 = uVar8 + (uVar8 == 0) + iVar7;
            if ((int)uVar13 < (int)local_c0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,uVar6);
              uVar13 = (ulonglong)local_bc;
              uVar14 = local_c8;
            }
            uVar9 = local_c0;
            pvVar2 = (void *)(uVar14 + ((longlong)(int)uVar8 - (ulonglong)(uVar8 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar2,local_b8,(longlong)iVar7 * 2);
            *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar2) = 0;
          }
          if (local_60[0] != 0) {
            FMemory::Free();
          }
          local_c0 = (2 - (uint)(uVar9 != 0)) + uVar9;
          if ((int)uVar13 < (int)local_c0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,uVar9);
            uVar13 = (ulonglong)local_bc;
            uVar14 = local_c8;
          }
          uVar6 = (ulonglong)local_c0;
          puVar11 = (undefined2 *)(uVar14 + ((longlong)(int)uVar9 - (ulonglong)(uVar9 != 0)) * 2);
          *puVar11 = 0x3d;
          puVar11[1] = 0;
        }
        puVar4 = (undefined8 *)FUN_1423f04f0(&local_b0,uVar3,local_80,2);
        local_b8 = (void *)*puVar4;
        iVar7 = *(int *)(puVar4 + 1) + -1;
        if (*(int *)(puVar4 + 1) == 0) {
          iVar7 = 0;
        }
        if (iVar7 != 0) {
          iVar10 = (int)uVar6;
          local_c0 = iVar10 + (uint)(iVar10 == 0) + iVar7;
          if ((int)uVar13 < (int)local_c0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,uVar6);
            uVar13 = (ulonglong)local_bc;
            uVar14 = local_c8;
          }
          uVar6 = (ulonglong)local_c0;
          pvVar2 = (void *)(uVar14 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar2,local_b8,(longlong)iVar7 * 2);
          *(undefined2 *)((longlong)iVar7 * 2 + (longlong)pvVar2) = 0;
        }
        uVar12 = (undefined4)uVar13;
        uVar5 = (undefined4)uVar6;
        if (local_b0 != 0) {
          FMemory::Free();
        }
        uStack_70 = *(ulonglong *)(uVar3 + 0x28);
        FUN_140472e10(&local_78);
        param_4 = local_res20;
      } while (uStack_70 != uStack_90);
    }
    *param_2 = uVar14;
    *(undefined4 *)(param_2 + 1) = uVar5;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar12;
  }
  return param_2;
}



// FUNCTION 1423f0d30 FUN_1423f0d30 body=402 status=ok
// SIG undefined FUN_1423f0d30(void)

undefined8 * FUN_1423f0d30(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  uint *puVar9;
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
  
  plVar1 = (longlong *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x58);
  local_58 = 0;
  uStack_54 = 1;
  puStack_20 = (uint *)(param_1 + 0x40);
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (iVar3 != 0) {
    puVar9 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar9 = puStack_20;
    }
    uVar4 = *puVar9;
    uStack_40 = 0;
    local_58 = 0;
    while (uVar4 == 0) {
      lVar8 = (longlong)local_58;
      uStack_40 = uStack_40 + 0x20;
      iVar7 = local_58 + 1;
      bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar7;
      if (bVar5) goto LAB_1423f0dff;
      uVar4 = puVar9[lVar8 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
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
    local_48._4_4_ = (uStack_40 - iVar7) + 0x1f;
    if (iVar3 < local_48._4_4_) {
LAB_1423f0dff:
      local_48._4_4_ = iVar3;
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
  bVar5 = local_48._4_4_ < iVar3;
  local_30 = plVar1;
  local_48 = puStack_20;
  if (bVar5) {
    do {
      if (*(longlong *)(*plVar1 + 8 + (longlong)iStack_3c * 0x18) == param_3) {
        puVar2 = (undefined8 *)(*plVar1 + (longlong)iStack_3c * 0x18);
        if (puVar2 != (undefined8 *)0x0) {
          uVar6 = *puVar2;
          goto LAB_1423f0e8e;
        }
        break;
      }
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  uVar6 = 0;
LAB_1423f0e8e:
  *param_2 = uVar6;
  return param_2;
}



// FUNCTION 1423f0ed0 GetRowNames body=36 status=ok
// SIG undefined GetRowNames(void)

undefined8 * UDataTable::GetRowNames(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
  GetKeys<FDefaultAllocator>(param_1 + 0x30);
  return param_2;
}



// FUNCTION 1423f0f40 FUN_1423f0f40 body=70 status=ok
// SIG undefined FUN_1423f0f40(void)

void FUN_1423f0f40(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  if (*(longlong **)(param_1 + 0x528) != (longlong *)0x0) {
    lVar1 = **(longlong **)(param_1 + 0x528);
    fVar2 = (float)(**(code **)(lVar1 + 0x778))();
    (**(code **)(lVar1 + 0x780))(*(undefined8 *)(param_1 + 0x528),fVar2 + 1.0);
  }
  return;
}



// FUNCTION 1423f0f90 FUN_1423f0f90 body=86 status=ok
// SIG undefined FUN_1423f0f90(void)

void FUN_1423f0f90(longlong param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  
  FUN_1423f0ff0();
  *(double *)(param_1 + 0x78) =
       (double)*(float *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 0x170);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58);
  fVar1 = *(float *)(lVar3 + 0x170);
  fVar2 = *(float *)(lVar3 + 0x6c);
  *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xfffffffd;
  *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
  *(double *)(param_1 + 0x80) = (double)(fVar1 - fVar2);
  return;
}



// FUNCTION 1423f0ff0 FUN_1423f0ff0 body=117 status=ok
// SIG undefined FUN_1423f0ff0(void)

void FUN_1423f0ff0(longlong param_1,longlong *param_2,undefined4 param_3,byte param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_2 + 0x280))(param_2);
  if (lVar1 != 0) {
    param_2 = (longlong *)param_2[0x32e];
  }
  *(longlong **)(param_1 + 0x28) = param_2;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffffcff;
  *(uint *)(param_1 + 0x38) = (uint)param_4;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  *(undefined8 *)(param_1 + 0x3c) = 0xffffffffffffffff;
  return;
}



// FUNCTION 1423f1070 Init body=41 status=ok
// SIG undefined Init(void)

void UControlChannel::Init(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  FUN_1423f0ff0();
  if (param_4 == '\0') {
    *(undefined1 *)(param_1 + 0x68) = 1;
  }
  return;
}



// FUNCTION 1423f10a0 FUN_1423f10a0 body=1486 status=ok
// SIG undefined FUN_1423f10a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1423f10a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined **ppuVar8;
  longlong *plVar9;
  undefined **ppuVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  int *piVar14;
  longlong lVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_288 [32];
  undefined ***local_268;
  int *local_260;
  undefined8 *local_258;
  undefined4 local_250;
  longlong local_248;
  int local_240 [2];
  undefined8 local_238;
  longlong *plStack_230;
  int local_228;
  int local_224;
  longlong *local_220;
  longlong local_218;
  int local_210 [2];
  longlong *plStack_208;
  longlong local_200;
  longlong *plStack_1f8;
  undefined1 local_1f0 [8];
  int *local_1e8;
  longlong *local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined **local_1c8;
  longlong *local_1c0;
  int *local_1b8;
  int *local_1b0;
  longlong local_1a8;
  undefined1 local_1a0 [8];
  longlong *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined **local_178 [18];
  longlong local_e8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  byte local_8f;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *plStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  ppuVar10 = (undefined **)0x0;
  local_240[0] = 0;
  local_248 = param_1;
  local_1d8 = param_2;
  cVar5 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xf0) + 0x58) + 0x368))();
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10);
  lVar7 = operator_new(0x510);
  ppuVar8 = ppuVar10;
  if (lVar7 != 0) {
    ppuVar8 = (undefined **)FRepState::FRepState(lVar7);
  }
  plVar11 = (longlong *)(param_1 + 0x2c0);
  local_1e0 = plVar11;
  if (plVar11 == &local_1a8) {
    if (ppuVar8 != (undefined **)0x0) {
      FUN_14271eb50(ppuVar8);
      FMemory::operator_delete(ppuVar8,0x510);
    }
  }
  else {
    lVar7 = *plVar11;
    *plVar11 = (longlong)ppuVar8;
    param_1 = local_248;
    if (lVar7 != 0) {
      FUN_14271eb50(lVar7);
      FMemory::operator_delete(lVar7,0x510);
      param_1 = local_248;
    }
  }
  bVar17 = cVar5 == '\0';
  if (bVar17) {
    plVar9 = &local_200;
    local_200 = 0;
    plStack_1f8 = (longlong *)0x0;
  }
  else {
    plVar9 = (longlong *)
             FUN_1425bd720(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x58),local_1a0,
                           *(undefined8 *)(param_1 + 0x10));
    ppuVar10 = (undefined **)*plVar9;
  }
  local_1c8 = ppuVar10;
  local_1c0 = (longlong *)plVar9[1];
  plVar9[1] = 0;
  *plVar9 = 0;
  plVar9 = plStack_1f8;
  if ((bVar17) && (plStack_1f8 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_1f8 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_1f8)(plStack_1f8);
      LOCK();
      piVar14 = (int *)((longlong)plVar9 + 0xc);
      iVar16 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plStack_1f8 + 8))(plStack_1f8,1);
      }
    }
  }
  if ((!bVar17) && (local_198 != (longlong *)0x0)) {
    LOCK();
    plVar9 = local_198 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_198)(local_198);
      LOCK();
      piVar14 = (int *)((longlong)local_198 + 0xc);
      iVar16 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_198 + 8))(local_198,1);
      }
    }
  }
  lVar15 = local_248;
  local_268 = &local_1c8;
  FUN_14272ff10(*(undefined8 *)(local_248 + 0x2b0),*plVar11,uVar3,param_2);
  plVar9 = *(longlong **)(lVar15 + 0x2b8);
  lVar7 = *plVar11;
  uVar3 = *(undefined8 *)(lVar15 + 0x2b0);
  puVar13 = (undefined8 *)(lVar7 + 0x60);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_238 = uVar3;
  plStack_230 = plVar9;
  if (&local_238 != puVar13) {
    local_238 = *puVar13;
    plStack_230 = *(longlong **)(lVar7 + 0x68);
    *puVar13 = uVar3;
    *(longlong **)(lVar7 + 0x68) = plVar9;
    local_68 = uVar3;
    plStack_60 = plVar9;
  }
  plVar11 = plStack_230;
  if (plStack_230 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_230 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_230)(plStack_230);
      LOCK();
      piVar14 = (int *)((longlong)plVar11 + 0xc);
      iVar16 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plStack_230 + 8))(plStack_230,1);
      }
    }
  }
  if (cVar5 != '\0') {
    plVar11 = (longlong *)(*(longlong *)(lVar15 + 0x2b0) + 0x10);
    local_218 = (longlong)*(int *)(*(longlong *)(lVar15 + 0x2b0) + 0x18);
    local_220 = plVar11;
    if (0 < local_218) {
      lVar7 = 0;
      do {
        iVar16 = 0;
        lVar4 = *plVar11;
        lVar12 = lVar15;
        if (((*(byte *)(lVar7 + 0x2c + lVar4) & 8) != 0) &&
           (plVar11 = local_220, 0 < *(int *)(*(longlong *)(lVar7 + lVar4) + 0x30))) {
          local_1b8 = local_240;
          plVar9 = (longlong *)(lVar15 + 0x28);
          local_1d0 = lVar15 + 0x78;
          local_190 = 0;
          uStack_188 = 0;
          do {
            FNetBitWriter::FNetBitWriter
                      (local_178,*(undefined8 *)(*(longlong *)(lVar12 + 0xf0) + 0x68),0x400);
            local_8f = local_8f & 0xf8;
            local_178[0] = &PTR__scalar_deleting_destructor__1450864f0;
            local_a8 = 0;
            local_b8 = 0;
            uStack_b0 = 0;
            local_a0 = 0;
            local_98 = 0;
            local_90 = 0;
            local_88 = 0;
            local_80 = 0;
            local_78 = 0;
            local_70 = 0;
            local_228 = (uint)*(ushort *)(*(longlong *)(lVar7 + lVar4) + 0x40) + iVar16;
            if (*(int *)(lVar15 + 0x30) != *(int *)(lVar15 + 0x5c)) {
              lVar12 = *(longlong *)(lVar15 + 0x68);
              if (*(longlong *)(lVar15 + 0x68) == 0) {
                lVar12 = lVar15 + 0x60;
              }
              iVar6 = *(int *)(lVar12 + ((longlong)*(int *)(lVar15 + 0x70) - 1U &
                                        (longlong)local_228) * 4);
              if (iVar6 != -1) {
                do {
                  piVar14 = (int *)((longlong)iVar6 * 0x20 + *plVar9);
                  if (*piVar14 == local_228) {
                    if ((iVar6 != -1) && (piVar14 != (int *)0x0)) goto LAB_1423f14ac;
                    break;
                  }
                  iVar6 = piVar14[6];
                } while (iVar6 != -1);
              }
            }
            local_1e8 = &local_228;
            FUN_1423e3100(plVar9,&local_224,&local_1e8,0);
            piVar14 = (int *)((longlong)local_224 * 0x20 + *plVar9);
LAB_1423f14ac:
            piVar2 = piVar14 + 2;
            local_210[0] = 0;
            local_210[1] = 0;
            plStack_208 = (longlong *)0x0;
            if (piVar2 != local_210) {
              piVar2[0] = 0;
              piVar2[1] = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(piVar14 + 4,&plStack_208);
              plVar11 = plStack_208;
              if (plStack_208 != (longlong *)0x0) {
                LOCK();
                plVar1 = plStack_208 + 1;
                lVar12 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar12 == 1) {
                  (**(code **)*plStack_208)(plStack_208);
                  LOCK();
                  piVar14 = (int *)((longlong)plVar11 + 0xc);
                  iVar6 = *piVar14;
                  *piVar14 = *piVar14 + -1;
                  UNLOCK();
                  if (iVar6 == 1) {
                    (**(code **)(*plStack_208 + 8))(plStack_208,1);
                  }
                }
              }
            }
            local_250 = *(undefined4 *)(*local_1e0 + 0x4b4);
            local_258 = &local_190;
            local_268 = local_178;
            local_260 = piVar2;
            FUN_1423fcc50(*(undefined8 *)(local_248 + 0xf0),local_1d8,*(undefined8 *)(lVar7 + lVar4)
                          ,iVar16);
            local_240[0] = (uint)*(ushort *)(*(longlong *)(lVar7 + lVar4) + 0x40) + iVar16;
            local_1b0 = piVar2;
            FUN_1423e3850(local_1d0,local_1f0,&local_1b8,0);
            if (local_78 != 0) {
              FMemory::Free();
            }
            if (local_88 != 0) {
              FMemory::Free();
            }
            if (local_e8 != 0) {
              FMemory::Free();
            }
            FArchive::~FArchive(local_178);
            iVar16 = iVar16 + 1;
            plVar11 = local_220;
            lVar12 = local_248;
          } while (iVar16 < *(int *)(*(longlong *)(lVar7 + lVar4) + 0x30));
        }
        lVar7 = lVar7 + 0x30;
        local_218 = local_218 + -1;
        lVar15 = lVar12;
      } while (local_218 != 0);
      local_218 = 0;
    }
  }
  plVar11 = local_1c0;
  if (local_1c0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_1c0 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_1c0)(local_1c0);
      LOCK();
      piVar14 = (int *)((longlong)plVar11 + 0xc);
      iVar16 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  return;
}



// FUNCTION 1423f1670 FUN_1423f1670 body=375 status=ok
// SIG undefined FUN_1423f1670(void)

void FUN_1423f1670(undefined8 *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  undefined8 *local_res10;
  undefined1 local_38 [8];
  longlong *local_30;
  
  param_1[2] = param_2;
  FWeakObjectPtr::operator=((longlong)param_1 + 0x35c);
  if (param_1[2] != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    *(uint *)(param_1 + 0x1d) = *(uint *)(param_1 + 0x1d) & 0xfffffffd;
    param_1[0x68] = 0;
    *(undefined1 *)(param_1 + 0x6b) = 0;
    *param_1 = uVar5;
    param_1[0x1e] = param_3;
    lVar6 = param_1[0x58];
    param_1[0x58] = 0;
    if (lVar6 != 0) {
      FUN_14271eb50(lVar6);
      FMemory::operator_delete(lVar6,0x510);
    }
    param_1[0x1f] = 0;
    *(undefined4 *)(param_1 + 99) = 0;
    puVar7 = (undefined8 *)FUN_1425bff60(*(undefined8 *)(param_1[0x1e] + 0x58),local_38,*param_1);
    puVar3 = param_1 + 0x56;
    if (puVar3 != puVar7) {
      *puVar3 = *puVar7;
      *puVar7 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x57,puVar7 + 1);
    }
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
    if (param_4 != '\0') {
      param_2 = FUN_14178ca30(param_1[2]);
    }
    FUN_1423f10a0(param_1,param_2);
    FUN_14272c200(*puVar3,param_1 + 0x19,param_1 + 0x1b);
    local_res10 = param_1;
    TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::
    Emplace<FObjectReplicator_*_const_&>
              (*(longlong *)(param_1[0x1e] + 0x58) + 0x4a0,local_res8,&local_res10,0);
  }
  return;
}



// FUNCTION 1423f17f0 FUN_1423f17f0 body=3553 status=ok
// SIG undefined FUN_1423f17f0(void)

void FUN_1423f17f0(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 local_368;
  byte local_360;
  undefined8 local_358;
  undefined8 local_350;
  longlong *local_348;
  undefined8 local_340;
  byte local_338;
  undefined8 local_330;
  undefined8 local_328;
  longlong *local_320;
  undefined8 local_318;
  byte local_310;
  undefined8 local_308;
  undefined8 local_300;
  longlong *local_2f8;
  undefined8 local_2f0;
  byte local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  longlong *local_2d0;
  undefined8 local_2c8;
  byte local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  longlong *local_2a8;
  undefined8 local_2a0;
  byte local_298;
  undefined8 local_290;
  undefined8 local_288;
  longlong *local_280;
  undefined8 local_278;
  byte local_270;
  undefined8 local_268;
  undefined8 local_260;
  longlong *local_258;
  undefined8 local_250;
  byte local_248;
  undefined8 local_240;
  undefined8 local_238;
  longlong *local_230;
  undefined8 local_228;
  byte local_220;
  undefined8 local_218;
  undefined8 local_210;
  longlong *local_208;
  undefined8 local_200;
  byte local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  longlong *local_1e0;
  undefined8 local_1d8;
  byte local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  byte local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong *local_190;
  undefined8 local_188;
  byte local_180;
  undefined8 local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined8 local_160;
  byte local_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  byte local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [16];
  undefined1 local_68 [24];
  undefined1 local_50 [16];
  undefined1 local_40 [24];
  
  plVar6 = DAT_1469e9878;
  uVar5 = DAT_1469e9870;
  uVar8 = DAT_1469e9868;
  if (DAT_146af243c == '\0') {
    DAT_146af243c = '\x01';
    if (DAT_1469e9878 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469e9878 + 1) = (int)DAT_1469e9878[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_res8,"DebugCamera_Select",1);
    local_368 = *puVar7;
    local_360 = local_360 & 0xf0;
    local_358 = uVar8;
    local_350 = uVar5;
    local_348 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    UPlayerInput::AddEngineDefinedActionMapping(&local_368);
    plVar6 = local_348;
    if (local_348 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_348 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_348)(local_348);
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
    plVar6 = DAT_1469e9968;
    uVar5 = DAT_1469e9960;
    uVar8 = DAT_1469e9958;
    if (DAT_1469e9968 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469e9968 + 1) = (int)DAT_1469e9968[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_res10,"DebugCamera_Unselect",1);
    local_340 = *puVar7;
    local_338 = local_338 & 0xf0;
    local_330 = uVar8;
    local_328 = uVar5;
    local_320 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    }
    UPlayerInput::AddEngineDefinedActionMapping(&local_340);
    plVar6 = local_320;
    if (local_320 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_320 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_320)(local_320);
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
    plVar6 = DAT_1469e9ef0;
    uVar5 = DAT_1469e9ee8;
    uVar8 = DAT_1469e9ee0;
    if (DAT_1469e9ef0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469e9ef0 + 1) = (int)DAT_1469e9ef0[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_res18,"DebugCamera_IncreaseSpeed",1);
    local_318 = *puVar7;
    local_310 = local_310 & 0xf0;
    local_308 = uVar8;
    local_300 = uVar5;
    local_2f8 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    }
    UPlayerInput::AddEngineDefinedActionMapping(&local_318);
    plVar6 = local_2f8;
    if (local_2f8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_2f8 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_2f8)(local_2f8);
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
    plVar6 = DAT_1469e9830;
    uVar5 = DAT_1469e9828;
    uVar8 = DAT_1469e9820;
    if (DAT_1469e9830 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469e9830 + 1) = (int)DAT_1469e9830[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_res20,"DebugCamera_IncreaseSpeed",1);
    local_2f0 = *puVar7;
    local_2e8 = local_2e8 & 0xf0;
    local_2e0 = uVar8;
    local_2d8 = uVar5;
    local_2d0 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    }
    UPlayerInput::AddEngineDefinedActionMapping(&local_2f0);
    plVar6 = local_2d0;
    if (local_2d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_2d0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_2d0)(local_2d0);
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
    plVar6 = DAT_1469e9f08;
    uVar5 = DAT_1469e9f00;
    uVar8 = DAT_1469e9ef8;
    if (DAT_1469e9f08 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469e9f08 + 1) = (int)DAT_1469e9f08[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_e0,"DebugCamera_DecreaseSpeed",1);
    local_2c8 = *puVar7;
    local_2c0 = local_2c0 & 0xf0;
    local_2b8 = uVar8;
    local_2b0 = uVar5;
    local_2a8 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    }
    UPlayerInput::AddEngineDefinedActionMapping(&local_2c8);
    plVar6 = local_2a8;
    if (local_2a8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_2a8 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_2a8)(local_2a8);
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
    plVar6 = DAT_1469e9848;
    uVar5 = DAT_1469e9840;
    uVar8 = DAT_1469e9838;
    if (DAT_1469e9848 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469e9848 + 1) = (int)DAT_1469e9848[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_d8,"DebugCamera_DecreaseSpeed",1);
    local_2a0 = *puVar7;
    local_298 = local_298 & 0xf0;
    local_290 = uVar8;
    local_288 = uVar5;
    local_280 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    }
    UPlayerInput::AddEngineDefinedActionMapping(&local_2a0);
    plVar6 = local_280;
    if (local_280 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_280 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_280)(local_280);
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
    plVar6 = DAT_1469ea190;
    uVar5 = DAT_1469ea188;
    uVar8 = DAT_1469ea180;
    if (DAT_1469ea190 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469ea190 + 1) = (int)DAT_1469ea190[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_d0,"DebugCamera_IncreaseFOV",1);
    local_278 = *puVar7;
    local_270 = local_270 & 0xf0;
    local_268 = uVar8;
    local_260 = uVar5;
    local_258 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    }
    UPlayerInput::AddEngineDefinedActionMapping(&local_278);
    plVar6 = local_258;
    if (local_258 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_258 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_258)(local_258);
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
    plVar6 = DAT_1469ea1d8;
    uVar5 = DAT_1469ea1d0;
    uVar8 = DAT_1469ea1c8;
    if (DAT_1469ea1d8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469ea1d8 + 1) = (int)DAT_1469ea1d8[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_c8,"DebugCamera_DecreaseFOV",1);
    local_250 = *puVar7;
    local_248 = local_248 & 0xf0;
    local_240 = uVar8;
    local_238 = uVar5;
    local_230 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    }
    UPlayerInput::AddEngineDefinedActionMapping(&local_250);
    plVar6 = local_230;
    if (local_230 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_230 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_230)(local_230);
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
    plVar6 = DAT_1469e98f0;
    uVar5 = DAT_1469e98e8;
    uVar8 = DAT_1469e98e0;
    if (DAT_1469e98f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469e98f0 + 1) = (int)DAT_1469e98f0[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_c0,"DebugCamera_ToggleDisplay",1);
    local_228 = *puVar7;
    local_220 = local_220 & 0xf0;
    local_218 = uVar8;
    local_210 = uVar5;
    local_208 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    }
    UPlayerInput::AddEngineDefinedActionMapping(&local_228);
    plVar6 = local_208;
    if (local_208 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_208 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_208)(local_208);
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
    plVar6 = DAT_1469e9bf0;
    uVar5 = DAT_1469e9be8;
    uVar8 = DAT_1469e9be0;
    if (DAT_1469e9bf0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469e9bf0 + 1) = (int)DAT_1469e9bf0[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_b8,"DebugCamera_FreezeRendering",1);
    local_200 = *puVar7;
    local_1f8 = local_1f8 & 0xf0;
    local_1f0 = uVar8;
    local_1e8 = uVar5;
    local_1e0 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    }
    UPlayerInput::AddEngineDefinedActionMapping(&local_200);
    plVar6 = local_1e0;
    if (local_1e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1e0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_1e0)(local_1e0);
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
    plVar6 = DAT_1469ea5b0;
    uVar5 = DAT_1469ea5a8;
    uVar8 = DAT_1469ea5a0;
    if (DAT_1469ea5b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469ea5b0 + 1) = (int)DAT_1469ea5b0[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_b0,"DebugCamera_Select",1);
    local_1d8 = *puVar7;
    local_1d0 = local_1d0 & 0xf0;
    local_1c8 = uVar8;
    local_1c0 = uVar5;
    local_1b8 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    }
    UPlayerInput::AddEngineDefinedActionMapping(&local_1d8);
    plVar6 = local_1b8;
    if (local_1b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1b8 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_1b8)(local_1b8);
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
    plVar6 = DAT_1469ea580;
    uVar5 = DAT_1469ea578;
    uVar8 = DAT_1469ea570;
    if (DAT_1469ea580 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469ea580 + 1) = (int)DAT_1469ea580[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_a8,"DebugCamera_IncreaseSpeed",1);
    local_1b0 = *puVar7;
    local_1a8 = local_1a8 & 0xf0;
    local_1a0 = uVar8;
    local_198 = uVar5;
    local_190 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    }
    UPlayerInput::AddEngineDefinedActionMapping(&local_1b0);
    plVar6 = local_190;
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_190 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_190)(local_190);
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
    plVar6 = DAT_1469ea568;
    uVar5 = DAT_1469ea560;
    uVar8 = DAT_1469ea558;
    if (DAT_1469ea568 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469ea568 + 1) = (int)DAT_1469ea568[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_a0,"DebugCamera_DecreaseSpeed",1);
    local_188 = *puVar7;
    local_180 = local_180 & 0xf0;
    local_178 = uVar8;
    local_170 = uVar5;
    local_168 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    }
    UPlayerInput::AddEngineDefinedActionMapping(&local_188);
    plVar6 = local_168;
    if (local_168 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_168 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_168)(local_168);
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
    plVar6 = DAT_1469ea5c8;
    uVar5 = DAT_1469ea5c0;
    uVar8 = DAT_1469ea5b8;
    if (DAT_1469ea5c8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469ea5c8 + 1) = (int)DAT_1469ea5c8[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_98,"DebugCamera_IncreaseFOV",1);
    local_160 = *puVar7;
    local_158 = local_158 & 0xf0;
    local_150 = uVar8;
    local_148 = uVar5;
    local_140 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    }
    UPlayerInput::AddEngineDefinedActionMapping(&local_160);
    plVar6 = local_140;
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_140 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_140)(local_140);
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
    plVar6 = DAT_1469ea5e0;
    uVar5 = DAT_1469ea5d8;
    uVar8 = DAT_1469ea5d0;
    if (DAT_1469ea5e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_1469ea5e0 + 1) = (int)DAT_1469ea5e0[1] + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_90,"DebugCamera_DecreaseFOV",1);
    local_138 = *puVar7;
    local_130 = local_130 & 0xf0;
    local_128 = uVar8;
    local_120 = uVar5;
    local_118 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
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
    }
    UPlayerInput::AddEngineDefinedActionMapping(&local_138);
    plVar6 = local_118;
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_118 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_118)(local_118);
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
    local_110 = DAT_1469ea528;
    local_108 = DAT_1469ea530;
    local_100 = DAT_1469ea538;
    if (DAT_1469ea538 != 0) {
      LOCK();
      *(int *)(DAT_1469ea538 + 8) = *(int *)(DAT_1469ea538 + 8) + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_88,"DebugCamera_ToggleDisplay",1);
    uVar8 = FUN_1423e4980(local_78,*puVar7,&local_110,0,0,0,0);
    UPlayerInput::AddEngineDefinedActionMapping(uVar8);
    FKey::~FKey(local_68);
    local_f8 = DAT_1469ea540;
    local_f0 = DAT_1469ea548;
    local_e8 = DAT_1469ea550;
    if (DAT_1469ea550 != 0) {
      LOCK();
      *(int *)(DAT_1469ea550 + 8) = *(int *)(DAT_1469ea550 + 8) + 1;
      UNLOCK();
    }
    puVar7 = (undefined8 *)FName::FName(local_80,"DebugCamera_FreezeRendering",1);
    uVar8 = FUN_1423e4980(local_50,*puVar7,&local_f8,0,0,0,0);
    UPlayerInput::AddEngineDefinedActionMapping(uVar8);
    FKey::~FKey(local_40);
  }
  return;
}



// FUNCTION 1423f25e0 IsKeyHandleValid body=69 status=ok
// SIG undefined IsKeyHandleValid(void)

undefined4 FStringCurve::IsKeyHandleValid(longlong param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FIndexedCurve::IsKeyHandleValid();
  if (cVar1 != '\0') {
    iVar2 = FIndexedCurve::GetIndex(param_1,param_2);
    if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x70))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1423f2630 IsNetReady body=26 status=ok
// SIG undefined IsNetReady(void)

undefined8 UChannel::IsNetReady(longlong param_1)

{
  undefined8 uVar1;
  
  if (0xfe < *(int *)(param_1 + 0x4c)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001423f2643. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2d8))();
  return uVar1;
}



// FUNCTION 1423f2650 IsSupportedTableProperty body=892 status=ok
// SIG undefined IsSupportedTableProperty(void)

ulonglong DataTableUtils::IsSupportedTableProperty(longlong param_1)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_1 != 0) {
    lVar2 = UIntProperty::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      in_RAX = uVar3 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)in_RAX == '\0') {
      lVar2 = UNumericProperty::GetPrivateStaticClass();
      iVar1 = *(int *)(lVar2 + 0x90);
      uVar3 = (longlong)iVar1;
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < iVar1) ||
         (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
         *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
        in_RAX = uVar3 & 0xffffffffffffff00;
      }
      else {
        in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
      }
      if ((char)in_RAX == '\0') {
        lVar2 = UDoubleProperty::GetPrivateStaticClass();
        iVar1 = *(int *)(lVar2 + 0x90);
        uVar3 = (longlong)iVar1;
        if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < iVar1) ||
           (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
           *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
          in_RAX = uVar3 & 0xffffffffffffff00;
        }
        else {
          in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
        }
        if ((char)in_RAX == '\0') {
          lVar2 = UFloatProperty::GetPrivateStaticClass();
          iVar1 = *(int *)(lVar2 + 0x90);
          uVar3 = (longlong)iVar1;
          if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < iVar1) ||
             (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
             *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
            in_RAX = uVar3 & 0xffffffffffffff00;
          }
          else {
            in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
          }
          if ((char)in_RAX == '\0') {
            lVar2 = UNameProperty::GetPrivateStaticClass();
            iVar1 = *(int *)(lVar2 + 0x90);
            uVar3 = (longlong)iVar1;
            if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < iVar1) ||
               (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
               *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
              in_RAX = uVar3 & 0xffffffffffffff00;
            }
            else {
              in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
            }
            if ((char)in_RAX == '\0') {
              lVar2 = UStrProperty::GetPrivateStaticClass();
              iVar1 = *(int *)(lVar2 + 0x90);
              uVar3 = (longlong)iVar1;
              if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < iVar1) ||
                 (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
                 *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
                in_RAX = uVar3 & 0xffffffffffffff00;
              }
              else {
                in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
              }
              if ((char)in_RAX == '\0') {
                lVar2 = UBoolProperty::GetPrivateStaticClass();
                iVar1 = *(int *)(lVar2 + 0x90);
                uVar3 = (longlong)iVar1;
                if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < iVar1) ||
                   (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
                   *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
                  in_RAX = uVar3 & 0xffffffffffffff00;
                }
                else {
                  in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
                }
                if ((char)in_RAX == '\0') {
                  lVar2 = UObjectPropertyBase::GetPrivateStaticClass();
                  iVar1 = *(int *)(lVar2 + 0x90);
                  uVar3 = (longlong)iVar1;
                  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < iVar1) ||
                     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
                     *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
                    in_RAX = uVar3 & 0xffffffffffffff00;
                  }
                  else {
                    in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
                  }
                  if ((char)in_RAX == '\0') {
                    lVar2 = UStructProperty::GetPrivateStaticClass();
                    iVar1 = *(int *)(lVar2 + 0x90);
                    uVar3 = (longlong)iVar1;
                    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < iVar1) ||
                       (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
                       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
                      in_RAX = uVar3 & 0xffffffffffffff00;
                    }
                    else {
                      in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
                    }
                    if ((char)in_RAX == '\0') {
                      lVar2 = UByteProperty::GetPrivateStaticClass();
                      iVar1 = *(int *)(lVar2 + 0x90);
                      uVar3 = (longlong)iVar1;
                      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < iVar1) ||
                         (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
                         *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
                        in_RAX = uVar3 & 0xffffffffffffff00;
                      }
                      else {
                        in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
                      }
                      if ((char)in_RAX == '\0') {
                        lVar2 = UTextProperty::GetPrivateStaticClass();
                        iVar1 = *(int *)(lVar2 + 0x90);
                        uVar3 = (longlong)iVar1;
                        if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < iVar1) ||
                           (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
                           *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
                          in_RAX = uVar3 & 0xffffffffffffff00;
                        }
                        else {
                          in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
                        }
                        if ((char)in_RAX == '\0') {
                          lVar2 = UArrayProperty::GetPrivateStaticClass();
                          iVar1 = *(int *)(lVar2 + 0x90);
                          uVar3 = (longlong)iVar1;
                          if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < iVar1) ||
                             (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
                             *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
                            in_RAX = uVar3 & 0xffffffffffffff00;
                          }
                          else {
                            in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
                          }
                          if ((char)in_RAX == '\0') {
                            lVar2 = USetProperty::GetPrivateStaticClass();
                            iVar1 = *(int *)(lVar2 + 0x90);
                            uVar3 = (longlong)iVar1;
                            if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < iVar1) ||
                               (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
                               *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
                              in_RAX = uVar3 & 0xffffffffffffff00;
                            }
                            else {
                              in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
                            }
                            if ((char)in_RAX == '\0') {
                              lVar2 = UMapProperty::GetPrivateStaticClass();
                              iVar1 = *(int *)(lVar2 + 0x90);
                              uVar3 = (longlong)iVar1;
                              if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < iVar1) ||
                                 (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
                                 *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
                                in_RAX = uVar3 & 0xffffffffffffff00;
                              }
                              else {
                                in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
                              }
                              if ((char)in_RAX == '\0') {
                                lVar2 = UEnumProperty::GetPrivateStaticClass();
                                iVar1 = *(int *)(lVar2 + 0x90);
                                uVar3 = (longlong)iVar1;
                                if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < iVar1) ||
                                   (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
                                   *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
                                  in_RAX = uVar3 & 0xffffffffffffff00;
                                }
                                else {
                                  in_RAX = CONCAT71((int7)(uVar3 >> 8),1);
                                }
                                if ((char)in_RAX == '\0') goto LAB_1423f29c4;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
LAB_1423f29c4:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1423f29d0 IsValid2DTexture body=44 status=ok
// SIG undefined IsValid2DTexture(void)

ulonglong FDDSLoadHelper::IsValid2DTexture(ulonglong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = *param_1;
  if (((uVar1 != 0) && ((*(uint *)(uVar1 + 0x6c) & 0x200200) == 0)) &&
     ((uVar1 = param_1[1], uVar1 == 0 ||
      ((*(int *)(uVar1 + 4) == 3 && (*(int *)(uVar1 + 0xc) == 1)))))) {
    return CONCAT71((int7)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1423f2a00 IsValidCurve body=362 status=ok
// SIG undefined IsValidCurve(void)

ulonglong UCurveTable::IsValidCurve(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined1 auStack_18 [16];
  
  plVar1 = (longlong *)(param_1 + 8);
  uVar2 = *(uint *)(param_1 + 0x30);
  puStack_20 = (uint *)(param_1 + 0x18);
  local_58 = 0;
  uStack_54 = 1;
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (uVar2 != 0) {
    puVar7 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar7 = puStack_20;
    }
    uVar3 = *puVar7;
    uStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar6 = (longlong)local_58;
      uStack_40 = uStack_40 + 0x20;
      iVar5 = local_58 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar5;
      if (bVar4) goto LAB_1423f2abf;
      uVar3 = puVar7[lVar6 + 1];
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
    local_48._4_4_ = (uStack_40 - iVar5) + 0x1f;
    if ((int)uVar2 < (int)local_48._4_4_) {
LAB_1423f2abf:
      local_48._4_4_ = uVar2;
    }
  }
  auStack_18._4_4_ = local_48._4_4_;
  auStack_18._0_4_ = 0xffffffff;
  auStack_18._8_4_ = uStack_40;
  auStack_18._12_4_ = uStack_3c;
  iStack_28 = local_58;
  uStack_24 = uStack_54;
  iStack_50 = local_58;
  uStack_4c = uStack_54;
  local_38 = auStack_18._8_8_;
  uStack_40 = 0xffffffff;
  uStack_3c = local_48._4_4_;
  bVar4 = (int)local_48._4_4_ < (int)uVar2;
  local_48 = (uint *)(ulonglong)local_48._4_4_;
  if (bVar4) {
    lVar6 = *(longlong *)(param_2 + 8);
    local_30 = plVar1;
    local_48 = puStack_20;
    do {
      if (lVar6 == *(longlong *)(*plVar1 + 8 + (longlong)(int)uStack_3c * 0x18)) {
        return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
      }
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
    } while ((int)uStack_3c < (int)local_48[6]);
  }
  return (ulonglong)local_48 & 0xffffffffffffff00;
}



// FUNCTION 1423f2b70 FUN_1423f2b70 body=249 status=ok
// SIG undefined FUN_1423f2b70(void)

ulonglong FUN_1423f2b70(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  int *piVar6;
  int *local_res8;
  int local_res10 [2];
  int local_res18 [2];
  
  plVar1 = (longlong *)(param_1 + 0x180);
  local_res10[0] = param_2;
  if (*(int *)(param_1 + 0x188) != *(int *)(param_1 + 0x1b4)) {
    lVar4 = *(longlong *)(param_1 + 0x1c0);
    if (*(longlong *)(param_1 + 0x1c0) == 0) {
      lVar4 = param_1 + 0x1b8;
    }
    uVar2 = *(uint *)(lVar4 + ((longlong)*(int *)(param_1 + 0x1c8) - 1U & (longlong)param_2) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        uVar5 = (ulonglong)uVar2;
        piVar6 = (int *)((longlong)(int)uVar2 * 0x10 + *plVar1);
        if (*piVar6 == param_2) {
          if ((uVar2 != 0xffffffff) && (piVar6 != (int *)0x0)) goto LAB_1423f2c0f;
          break;
        }
        uVar2 = piVar6[2];
      } while (uVar2 != 0xffffffff);
    }
  }
  local_res8 = local_res10;
  uVar5 = FUN_14058d450(plVar1,local_res18,&local_res8,0);
  piVar6 = (int *)((longlong)local_res18[0] * 0x10 + *plVar1);
LAB_1423f2c0f:
  if (piVar6[1] != param_3) {
    piVar6[1] = param_3;
    iVar3 = *(int *)(param_1 + 0x228);
    *(int *)(param_1 + 0x228) = iVar3 + 1;
    if (*(int *)(param_1 + 0x22c) < iVar3 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x220,iVar3);
    }
    *(int *)(*(longlong *)(param_1 + 0x220) + (longlong)iVar3 * 4) = local_res10[0];
    return CONCAT71((uint7)(uint3)((uint)local_res10[0] >> 8),1);
  }
  return uVar5 & 0xffffffffffffff00;
}



// FUNCTION 1423f2c70 FUN_1423f2c70 body=1243 status=ok
// SIG undefined FUN_1423f2c70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1423f2c70(longlong param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 ******ppppppuVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  undefined8 *******local_110;
  undefined8 local_108;
  uint uStack_100;
  uint uStack_fc;
  undefined8 local_f8;
  uint uStack_f0;
  int iStack_ec;
  undefined1 local_e8 [16];
  longlong *local_d8;
  undefined2 local_d0;
  int local_c8 [2];
  undefined8 *******local_c0;
  undefined8 *******local_b8;
  longlong *local_b0;
  uint uStack_a8;
  uint uStack_a4;
  uint *puStack_a0;
  undefined1 auStack_98 [16];
  undefined8 local_88;
  longlong local_78;
  undefined8 local_70;
  uint local_68 [4];
  uint *local_58;
  undefined8 local_50;
  undefined4 local_48;
  int local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar5 = *(longlong *)(param_1 + 0x38);
  if ((lVar5 != 0) &&
     ((lVar4 = *(longlong *)(lVar5 + 0x90), lVar4 != 0 ||
      ((0 < *(int *)(lVar5 + 0xa0) && (lVar4 = **(longlong **)(lVar5 + 0x98), lVar4 != 0)))))) {
    uVar8 = 0;
    local_70._0_4_ = 0;
    local_b0 = (longlong *)(lVar4 + 0x1600);
    local_78 = 0;
    puStack_a0 = (uint *)(lVar4 + 0x1610);
    local_70 = 0;
    local_58 = (uint *)0x0;
    local_50 = 0;
    local_48 = 0xffffffff;
    local_44 = 0;
    local_38 = 0;
    local_30 = 0;
    iVar9 = *(int *)(lVar4 + 0x1628);
    local_108._0_4_ = 0;
    local_108._4_4_ = 1;
    local_f8._4_4_ = 0;
    uStack_f0 = 0;
    if (iVar9 != 0) {
      puVar7 = *(uint **)(lVar4 + 0x1620);
      if (*(uint **)(lVar4 + 0x1620) == (uint *)0x0) {
        puVar7 = puStack_a0;
      }
      uVar3 = *puVar7;
      local_108._0_4_ = uVar8;
      uStack_f0 = uVar8;
      while (uVar3 == 0) {
        lVar5 = (longlong)(int)(uint)local_108;
        uStack_f0 = uStack_f0 + 0x20;
        uVar3 = (uint)local_108 + 1;
        bVar1 = (int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)(uint)local_108;
        local_f8._4_4_ = iVar9;
        local_108._0_4_ = uVar3;
        if (bVar1) goto LAB_1423f2dec;
        uVar3 = puVar7[lVar5 + 1];
      }
      local_108._4_4_ = uVar3 - 1 & uVar3 ^ uVar3;
      iVar2 = 0x1f;
      if (local_108._4_4_ != 0) {
        for (; local_108._4_4_ >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      if (local_108._4_4_ == 0) {
        iVar2 = 0x20;
      }
      else {
        iVar2 = 0x1f - iVar2;
      }
      local_f8._4_4_ = (uStack_f0 - iVar2) + 0x1f;
      if (iVar9 < local_f8._4_4_) {
        local_f8._4_4_ = iVar9;
      }
    }
LAB_1423f2dec:
    auStack_98._4_4_ = local_f8._4_4_;
    auStack_98._0_4_ = 0xffffffff;
    auStack_98._8_8_ = CONCAT44(iStack_ec,uStack_f0);
    uStack_a8 = (uint)local_108;
    uStack_a4 = local_108._4_4_;
    _uStack_100 = CONCAT44(local_108._4_4_,(uint)local_108);
    uStack_f0 = 0xffffffff;
    iStack_ec = local_f8._4_4_;
    local_e8._0_8_ = auStack_98._8_8_;
    bVar1 = local_f8._4_4_ < iVar9;
    local_108 = local_b0;
    local_f8 = puStack_a0;
    if (bVar1) {
      do {
        ppppppuVar6 = *(undefined8 *******)
                       (*(longlong *)
                         (*(longlong *)(*local_108 + 8 + (longlong)iStack_ec * 0x18) + 0x68) + 0x10)
        ;
        while (local_110 = (undefined8 *******)ppppppuVar6, ppppppuVar6 != (undefined8 ******)0x0) {
          lVar5 = UBlueprintGeneratedClass::GetPrivateStaticClass();
          if ((*(int *)(ppppppuVar6[2] + 0x12) < *(int *)(lVar5 + 0x90)) ||
             (ppppppuVar6[2][0x11][*(int *)(lVar5 + 0x90)] != (undefined8 ***)(lVar5 + 0x88))) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) break;
          ppppppuVar6 = local_110[6];
        }
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(&local_78,local_c8,local_110);
        if ((local_c8[0] == -1) || (lVar5 = local_78 + (longlong)local_c8[0] * 0x18, lVar5 == 0)) {
          local_b8 = &local_110;
          TSet<TTuple<VkImage_T_*,enum_VkImageLayout>,TDefaultMapHashableKeyFuncs<VkImage_T_*,enum_VkImageLayout,0>,FDefaultSetAllocator>
          ::Emplace<TKeyInitializer<VkImage_T_*_const_&>_>(&local_78,&local_c0,&local_b8,0);
          lVar5 = local_78 + (longlong)(int)local_c0 * 0x18;
        }
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        uStack_f0 = uStack_f0 & ~uStack_fc;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_100);
      } while (iStack_ec < (int)local_f8[6]);
    }
    local_b8 = (undefined8 *******)local_118;
    local_110 = &local_b8;
    if (0 < (int)local_70 - local_44) {
      TSparseArray<TSetElement<TTuple<unsigned_int,TUniqueObj<TArray<FSlateElementBatch,TInlineAllocator<2,FDefaultAllocator>_>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Compact(&local_78);
      local_c0 = &local_110;
      AlgoImpl::
      IntroSortInternal<FLookTarget,FIdentityFunctor,TDereferenceWrapper<FLookTarget,<lambda_66aa26fd76087ff9daa01959cf6ca9fb>_>_>
                (local_78,(longlong)((int)local_70 - local_44),local_118[0],&local_c0);
    }
    TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
    ::Rehash(&local_78);
    puStack_a0 = local_68;
    local_108._0_4_ = 0;
    local_108._4_4_ = 1;
    local_f8._4_4_ = 0;
    uStack_f0 = 0;
    if ((int)local_50 != 0) {
      puVar7 = local_68;
      if (local_58 != (uint *)0x0) {
        puVar7 = local_58;
      }
      uVar3 = *puVar7;
      local_108._0_4_ = uVar8;
      uStack_f0 = uVar8;
      while (uVar3 == 0) {
        uStack_f0 = uStack_f0 + 0x20;
        if ((int)((int)local_50 + -1 + ((int)local_50 + -1 >> 0x1f & 0x1fU)) >> 5 <=
            (int)(uint)local_108) {
          local_f8._4_4_ = (int)local_50;
          local_108._0_4_ = (uint)local_108 + 1;
          goto LAB_1423f305a;
        }
        uVar3 = puVar7[(longlong)(int)(uint)local_108 + 1];
        local_108._0_4_ = (uint)local_108 + 1;
      }
      local_108._4_4_ = -uVar3 & uVar3;
      iVar9 = 0x1f;
      if (local_108._4_4_ != 0) {
        for (; local_108._4_4_ >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (local_108._4_4_ == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      local_f8._4_4_ = (uStack_f0 - iVar9) + 0x1f;
      if ((int)local_50 < local_f8._4_4_) {
        local_f8._4_4_ = (int)local_50;
      }
    }
LAB_1423f305a:
    auStack_98._4_4_ = local_f8._4_4_;
    auStack_98._0_4_ = 0xffffffff;
    auStack_98._8_4_ = uStack_f0;
    auStack_98._12_4_ = iStack_ec;
    local_b0 = &local_78;
    uStack_a8 = (uint)local_108;
    uStack_a4 = local_108._4_4_;
    local_d8 = &local_78;
    local_d0 = 0;
    local_88._0_4_ = SUB84(&local_78,0);
    local_88._4_4_ = (undefined4)((ulonglong)&local_78 >> 0x20);
    uStack_100 = (uint)local_108;
    uStack_fc = local_108._4_4_;
    uStack_f0 = 0xffffffff;
    iStack_ec = local_f8._4_4_;
    local_e8._8_4_ = (undefined4)local_88;
    local_e8._0_8_ = auStack_98._8_8_;
    local_e8._12_4_ = local_88._4_4_;
    bVar1 = local_f8._4_4_ < (int)local_50;
    local_108 = local_b0;
    local_88 = &local_78;
    local_f8 = puStack_a0;
    if (bVar1) {
      do {
        uStack_f0 = uStack_f0 & ~uStack_fc;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_100);
      } while (iStack_ec < (int)local_f8[6]);
      if (((char)local_d0 != '\0') && (local_d0._1_1_ != '\0')) {
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_d8,(int)local_d8[1] - *(int *)((longlong)local_d8 + 0x34),1);
      }
    }
    local_30 = 0;
    if (local_38 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_78);
  }
  return;
}



// FUNCTION 1423f3150 FUN_1423f3150 body=467 status=ok
// SIG undefined FUN_1423f3150(void)

undefined8 FUN_1423f3150(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  int local_res8 [2];
  undefined8 local_res10;
  undefined1 local_res18 [8];
  longlong local_res20;
  undefined **local_e8;
  undefined8 local_e0;
  int *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined ***pppuStack_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 local_50;
  
  uVar9 = 0;
  local_res10 = param_2;
  if ((param_1[0x56] != 0) &&
     (cVar2 = FUN_142731260(param_1[0x56],param_1[0x58],param_2), cVar2 != '\0')) {
    uVar9 = 1;
  }
  uVar6 = 0;
  piVar5 = (int *)param_1[0x19];
  lVar1 = param_1[2];
  uVar8 = (longlong)(int)param_1[0x1a] & 0x3fffffffffffffff;
  if (piVar5 + (int)param_1[0x1a] < piVar5) {
    uVar8 = uVar6;
  }
  local_68 = local_res10;
  if (uVar8 != 0) {
    do {
      plVar3 = (longlong *)((longlong)*piVar5 * 0x10 + *(longlong *)(*param_1 + 0xd8));
      local_res20 = *plVar3;
      local_58 = 0;
      local_50 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_88 = 0;
      local_84 = 0;
      local_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_60 = 0;
      local_e0 = *(undefined8 *)(param_1[0x1e] + 0x58);
      pppuStack_90 = &local_e8;
      local_e8 = &PTR_FUN_145086ba8;
      local_98 = *(longlong *)(local_res20 + 0x70);
      uVar7 = local_68;
      if (lVar1 != 0) {
        lVar4 = (longlong)*(int *)(local_res20 + 0x44) +
                *(int *)(local_res20 + 0x34) * (int)plVar3[1] + lVar1;
        cVar2 = (**(code **)(**(longlong **)(local_98 + 0x90) + 0x70))
                          (*(longlong **)(local_98 + 0x90),&local_c8,lVar4);
        if (cVar2 != '\0') {
          local_d8 = local_res8;
          local_res8[0] = (int)lVar4 - (int)lVar1;
          local_d0 = &local_res20;
          TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_const_&,unsigned___int64_const_&>_>
                    (param_1 + 0x20,local_res18,&local_d8,0);
          uVar9 = 1;
        }
        uVar7 = local_res10;
        if (local_58 != 0) {
          FMemory::Free();
          uVar7 = local_res10;
        }
      }
      piVar5 = piVar5 + 1;
      uVar6 = uVar6 + 1;
      local_68 = uVar7;
    } while (uVar6 != uVar8);
  }
  return uVar9;
}



// FUNCTION 1423f3330 FUN_1423f3330 body=896 status=ok
// SIG undefined FUN_1423f3330(void)

void FUN_1423f3330(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  longlong *plVar14;
  int local_res10 [2];
  int local_res18 [2];
  undefined8 local_res20;
  uint local_b8;
  uint uStack_b4;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint *local_80;
  uint uStack_78;
  uint uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint *puStack_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 uStack_48;
  
  if ((((param_2 != 0) && (*DAT_146af2308 != 0)) && (*(longlong *)(param_1 + 0x28) != 0)) &&
     ((plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x58), plVar4 != (longlong *)0x0 &&
      (cVar7 = (**(code **)(*plVar4 + 0x368))(plVar4), cVar7 == '\0')))) {
    FWeakObjectPtr::operator=(&local_res20,param_2);
    lVar5 = plVar4[0x1c];
    local_98 = local_res20;
    TSet<TTuple<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USkeletalMesh,FWeakObjectPtr>,int,0>,FDefaultSetAllocator>
    ::FindId(lVar5 + 0x50,local_res10,&local_98);
    plVar10 = (longlong *)0x0;
    local_res18[0] = 0;
    if ((local_res10[0] != -1) &&
       (lVar5 = *(longlong *)(lVar5 + 0x50) + (longlong)local_res10[0] * 0x14, lVar5 != 0)) {
      local_res18[0] = *(int *)(lVar5 + 8);
    }
    if (local_res18[0] != 0) {
      if ((int)plVar4[0x80] != *(int *)((longlong)plVar4 + 0x42c)) {
        plVar9 = (longlong *)plVar4[0x87];
        if ((longlong *)plVar4[0x87] == (longlong *)0x0) {
          plVar9 = plVar4 + 0x86;
        }
        iVar8 = *(int *)((longlong)plVar9 +
                        ((longlong)(int)plVar4[0x88] - 1U & (longlong)local_res18[0]) * 4);
        if (iVar8 != -1) {
          do {
            plVar9 = (longlong *)((longlong)iVar8 * 0x60 + plVar4[0x7f]);
            if ((int)*plVar9 == local_res18[0]) {
              if (iVar8 != -1) goto LAB_1423f3465;
              break;
            }
            iVar8 = (int)plVar9[0xb];
          } while (iVar8 != -1);
        }
      }
      plVar9 = plVar10;
LAB_1423f3465:
      plVar14 = plVar9 + 1;
      if (plVar9 == (longlong *)0x0) {
        plVar14 = plVar10;
      }
      if (plVar14 != (longlong *)0x0) {
        uVar2 = *(uint *)(plVar14 + 5);
        puVar1 = (uint *)(plVar14 + 2);
        local_b8 = 0;
        uStack_b4 = 1;
        uStack_a4 = 0;
        uStack_a0 = 0;
        if (uVar2 != 0) {
          puVar12 = (uint *)plVar14[4];
          if ((uint *)plVar14[4] == (uint *)0x0) {
            puVar12 = puVar1;
          }
          uVar3 = *puVar12;
          plVar9 = plVar10;
          while (uVar3 == 0) {
            iVar8 = (int)plVar10;
            uStack_a0 = (int)plVar9 + 0x20;
            plVar9 = (longlong *)(ulonglong)uStack_a0;
            local_b8 = iVar8 + 1;
            plVar10 = (longlong *)(ulonglong)local_b8;
            if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
            goto LAB_1423f353c;
            uVar3 = puVar12[(longlong)iVar8 + 1];
          }
          uStack_b4 = -uVar3 & uVar3;
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
          uStack_a4 = (uStack_a0 - iVar8) + 0x1f;
          if ((int)uVar2 < (int)uStack_a4) {
LAB_1423f353c:
            uStack_a4 = uVar2;
          }
        }
        uVar3 = *(uint *)(plVar14 + 5);
        uStack_78 = 0xffffffff;
        uStack_74 = uStack_a4;
        local_70 = CONCAT44(uStack_9c,uStack_a0);
        uStack_60 = CONCAT44(uStack_b4,local_b8);
        uVar13 = uVar3 & 0xffffffe0;
        local_68._0_4_ = SUB84(plVar14,0);
        local_68._4_4_ = (undefined4)((ulonglong)plVar14 >> 0x20);
        local_90 = (undefined4)local_68;
        uStack_8c = local_68._4_4_;
        uStack_88 = local_b8;
        uStack_84 = uStack_b4;
        local_80 = puVar1;
        local_68 = plVar14;
        puStack_58 = puVar1;
        uStack_48 = local_70;
        uStack_50 = uStack_78;
        uStack_4c = uStack_74;
        uStack_a4 = uVar3;
        if (uVar3 != uVar2) {
          puVar12 = (uint *)plVar14[4];
          if ((uint *)plVar14[4] == (uint *)0x0) {
            puVar12 = puVar1;
          }
          uVar11 = puVar12[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
          iVar8 = (int)uVar3 >> 5;
          while (uVar11 == 0) {
            uVar13 = uVar13 + 0x20;
            if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
            goto LAB_1423f3602;
            uVar11 = puVar12[(longlong)iVar8 + 1];
            iVar8 = iVar8 + 1;
          }
          uVar11 = -uVar11 & uVar11;
          iVar8 = 0x1f;
          if (uVar11 != 0) {
            for (; uVar11 >> iVar8 == 0; iVar8 = iVar8 + -1) {
            }
          }
          if (uVar11 == 0) {
            iVar8 = 0x20;
          }
          else {
            iVar8 = 0x1f - iVar8;
          }
          uStack_a4 = (uVar13 - iVar8) + 0x1f;
          if ((int)uVar2 < (int)uStack_a4) {
LAB_1423f3602:
            uStack_a4 = uVar2;
          }
        }
        while( true ) {
          if (((uStack_74 == uStack_a4) && (local_80 == puVar1)) &&
             ((longlong *)CONCAT44(uStack_8c,local_90) == plVar14)) break;
          uVar6 = *(undefined8 *)
                   (*(longlong *)CONCAT44(uStack_8c,local_90) + (longlong)(int)uStack_74 * 0x10);
          local_98 = uVar6;
          cVar7 = FUN_1423f3150(uVar6,local_res18);
          if (cVar7 == '\0') {
            TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                      (plVar4 + 0x8a,&local_res20,uVar6);
          }
          else {
            TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::
            Emplace<FObjectReplicator_*_const_&>(plVar4 + 0x8a,local_res10,&local_98,0);
          }
          uStack_78 = uStack_78 & ~uStack_84;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_88);
        }
      }
    }
  }
  return;
}



// FUNCTION 1423f36d0 FUN_1423f36d0 body=399 status=ok
// SIG undefined FUN_1423f36d0(void)

void FUN_1423f36d0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined1 *param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined1 local_res10 [8];
  ulonglong in_stack_ffffffffffffffb8;
  undefined1 local_38 [8];
  longlong local_30 [3];
  longlong *local_18;
  
  if ((*(uint *)(param_2 + 0x88) & 0x400) == 0) {
    FUN_1425c0b00(*(undefined8 *)(param_1 + 8),local_30 + 2,param_2);
    if ((param_4 == 0) ||
       (lVar4 = *(longlong *)(param_4 + 0x130), (*(byte *)(lVar4 + 0xa4) & 1) == 0)) {
      FUN_14273b470(local_30[2],param_2,param_3,param_4,param_5,param_6);
    }
    else if ((*(byte *)(param_3 + 0x28) & 2) == 0) {
      local_38[0] = 0;
      FUN_1427363f0(local_30[2],lVar4,0,param_5,param_3,param_6,
                    in_stack_ffffffffffffffb8 & 0xffffffffffffff00,local_38);
    }
    else {
      local_30[0] = 0;
      local_30[1] = 0;
      FUN_142739d70(local_30[2],0,0,param_5,lVar4,param_3,local_30);
      if (local_30[0] != 0) {
        FMemory::Free();
      }
    }
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
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
  else {
    local_res10[0] = 1;
    cVar5 = (**(code **)(**(longlong **)(param_2 + 0x90) + 0x60))
                      (*(longlong **)(param_2 + 0x90),param_3,param_4,local_res10,param_5);
    if (cVar5 == '\0') {
      *param_6 = 1;
      return;
    }
  }
  return;
}



// FUNCTION 1423f3860 FUN_1423f3860 body=342 status=ok
// SIG undefined FUN_1423f3860(void)

void FUN_1423f3860(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x28);
  if ((lVar5 == 0) || (plVar4 = *(longlong **)(lVar5 + 0x58), plVar4 == (longlong *)0x0)) {
    plVar4 = (longlong *)0x0;
LAB_1423f38ad:
    lVar3 = 0;
  }
  else {
    lVar3 = plVar4[0x1a];
    if (lVar3 == 0) goto LAB_1423f38ad;
    lVar2 = *(longlong *)(lVar3 + 0x108);
    if (lVar2 != 0) goto LAB_1423f38b1;
  }
  lVar2 = 0;
LAB_1423f38b1:
  if (lVar2 != 0) {
    FUN_14241ae80(lVar2,param_1,param_2);
    lVar5 = *(longlong *)(param_1 + 0x28);
  }
  (**(code **)(**(longlong **)(param_1 + 0x68) + 1000))
            (*(longlong **)(param_1 + 0x68),param_3,lVar5);
  if (((((plVar4 != (longlong *)0x0) &&
        (cVar1 = (**(code **)(*plVar4 + 0x368))(plVar4), cVar1 == '\0')) &&
       (1 < *(byte *)(*(longlong *)(param_1 + 0x68) + 0x129))) &&
      ((*(undefined1 *)(*(longlong *)(param_1 + 0x68) + 0x129) = 1, lVar3 != 0 &&
       (cVar1 = FUN_1428cfb20(lVar3), cVar1 != '\0')))) && (lVar2 != 0)) {
    FUN_1425e3cc0(*(undefined8 *)(lVar2 + 0x528),*(undefined8 *)(param_1 + 0x68),
                  *(undefined8 *)(lVar2 + 0x120),0);
    FUN_1425bdd80(lVar2,*(undefined8 *)(param_1 + 0x68),0);
    if ((0 < *(int *)(lVar2 + 0xa0)) && (lVar5 = **(longlong **)(lVar2 + 0x98), lVar5 != 0)) {
      FNetworkObjectList::MarkActive
                (*(undefined8 *)(lVar2 + 0x528),*(undefined8 *)(param_1 + 0x68),lVar5,
                 *(undefined8 *)(lVar2 + 0x120));
      FNetworkObjectList::ClearRecentlyDormantConnection
                (*(undefined8 *)(lVar2 + 0x528),*(undefined8 *)(param_1 + 0x68),lVar5,
                 *(undefined8 *)(lVar2 + 0x120));
    }
  }
  return;
}



// FUNCTION 1423f39c0 FUN_1423f39c0 body=897 status=ok
// SIG undefined FUN_1423f39c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423f39c0(longlong *param_1,longlong *param_2)

{
  float *pfVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined7 uVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 in_stack_ffffffffffffff58;
  ulonglong uVar18;
  ulonglong in_stack_ffffffffffffff60;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68 [2];
  longlong local_58;
  undefined4 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [32];
  
  uVar14 = (uint)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  lVar7 = param_2[0xa1];
  param_1[0x10a] = (longlong)param_2;
  param_1[0x10b] = lVar7;
  (**(code **)(*param_2 + 0x7a8))(param_2,local_68,&local_58);
  uVar12 = (**(code **)(*(longlong *)param_2[0xa5] + 0x778))();
  plVar10 = (longlong *)0x0;
  (**(code **)(*param_1 + 0x718))(param_1,0x142);
  plVar9 = &local_58;
  (**(code **)(*param_1 + 0x730))(param_1,local_68,plVar9);
  plVar2 = (longlong *)param_1[0xa5];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x780))(plVar2,uVar12);
    (**(code **)(*(longlong *)param_1[0xa5] + 0x740))((longlong *)param_1[0xa5],0);
  }
  lVar7 = param_1[0x107];
  if (lVar7 == 0) {
    lVar7 = param_2[0xa5];
    FUN_1417846f0(lVar7,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar6 = FUN_142927f80();
    in_stack_ffffffffffffff60 = 0;
    lVar7 = FUN_1417985e0(uVar6,lVar7,0,0,(ulonglong)uVar14 << 0x20,0,0,0,0);
    param_1[0x107] = lVar7;
    plVar9 = plVar10;
    if (lVar7 == 0) goto LAB_1423f3cfb;
  }
  uVar11 = (undefined7)((ulonglong)plVar9 >> 8);
  FUN_142398ec0(lVar7,1);
  (**(code **)(*param_2 + 0x310))(param_2,0);
  (**(code **)(*(longlong *)param_2[0xa5] + 0x310))((longlong *)param_2[0xa5],0);
  *(undefined4 *)(param_1[0x107] + 0x6f4) = uVar12;
  FUN_142397000(param_1[0x107],1,CONCAT71(uVar11,1),0);
  lVar7 = param_1[0x107];
  local_48 = local_68[0];
  pfVar1 = (float *)(lVar7 + 0x280);
  if (((*(float *)(lVar7 + 0x1f8) != *pfVar1) ||
      (*(float *)(lVar7 + 0x1fc) != *(float *)(lVar7 + 0x284))) ||
     (*(float *)(lVar7 + 0x200) != *(float *)(lVar7 + 0x288))) {
    local_78 = *(longlong *)*(undefined1 (*) [12])(lVar7 + 0x1f8);
    auVar13._12_4_ = 0;
    auVar13._0_12_ = *(undefined1 (*) [12])(lVar7 + 0x1f8);
    fVar3 = (float)DAT_146af2400;
    fVar4 = DAT_146af2400._4_4_;
    fVar5 = DAT_146af2400._8_4_;
    auVar13 = divps(auVar13,_DAT_146af2400);
    fVar15 = (float)local_78 - (float)(int)auVar13._0_4_ * fVar3;
    fVar16 = (float)((ulonglong)local_78 >> 0x20) - (float)(int)auVar13._4_4_ * fVar4;
    fVar17 = *(float *)(lVar7 + 0x200) - (float)(int)auVar13._8_4_ * fVar5;
    fVar15 = (float)(((uint)(fVar15 + fVar3) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                    (uint)(fVar15 + fVar3));
    fVar16 = (float)(((uint)(fVar16 + fVar4) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                    (uint)(fVar16 + fVar4));
    fVar17 = (float)(((uint)(fVar17 + fVar5) ^ (uint)fVar17) & -(uint)(0.0 <= fVar17) ^
                    (uint)(fVar17 + fVar5));
    uVar14 = ((uint)(fVar17 - fVar5) ^ (uint)fVar17) & -(uint)(fRam0000000146af23f8 < fVar17) ^
             (uint)fVar17;
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar14);
    *(ulonglong *)pfVar1 =
         CONCAT44(((uint)(fVar16 - fVar4) ^ (uint)fVar16) & -(uint)(fRam0000000146af23f4 < fVar16) ^
                  (uint)fVar16,
                  ((uint)(fVar15 - fVar3) ^ (uint)fVar15) & -(uint)(_DAT_146af23f0 < fVar15) ^
                  (uint)fVar15);
    *(uint *)(lVar7 + 0x288) = uVar14;
    puVar8 = (undefined8 *)FRotator::Quaternion(pfVar1,local_38);
    uVar6 = puVar8[1];
    *(undefined8 *)(lVar7 + 0x270) = *puVar8;
    *(undefined8 *)(lVar7 + 0x278) = uVar6;
  }
  local_78 = *(longlong *)(lVar7 + 0x270);
  uStack_70 = *(undefined8 *)(lVar7 + 0x278);
  uVar18 = 0;
  FUN_142397be0(lVar7,&local_48,&local_78,0,0,in_stack_ffffffffffffff60 & 0xffffffffffffff00);
  local_48 = local_58;
  local_40 = CONCAT44(local_40._4_4_,local_50);
  FUN_142398470(param_1[0x107],&local_48,0,0,uVar18 & 0xffffffffffffff00);
  FUN_14234b150(param_1[0x107]);
  local_48 = 0;
  local_40 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"show camfrustums",0x22);
  (**(code **)(*param_1 + 0xd28))(param_1,&local_78,&local_48,1);
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
LAB_1423f3cfb:
  uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  UWorld::AddController(uVar6,param_1);
  FUN_1429257a0(param_1,param_2);
  return;
}



// FUNCTION 1423f3d50 FUN_1423f3d50 body=395 status=ok
// SIG undefined FUN_1423f3d50(void)

void FUN_1423f3d50(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong local_28 [4];
  
  if ((*(byte *)(param_1 + 0x106) & 2) != 0) {
    local_28[0] = 0;
    local_28[1] = 0x10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Memcpy(local_28[0],L"FreezeRendering",0x20);
    (**(code **)(*param_1 + 0xd28))(param_1,local_28 + 2,local_28,1);
    if (local_28[2] != 0) {
      FMemory::Free();
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    *(uint *)(param_1 + 0x106) = *(uint *)(param_1 + 0x106) & 0xfffffffd;
  }
  FUN_142398ec0(param_1[0x107],0,1);
  local_28[0] = 0;
  local_28[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"show camfrustums",0x22);
  (**(code **)(*param_1 + 0xd28))(param_1,local_28 + 2,local_28,1);
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  FUN_142359580(param_1[0x107]);
  (**(code **)(*param_2 + 0x310))(param_2,1);
  (**(code **)(*(longlong *)param_2[0xa5] + 0x310))((longlong *)param_2[0xa5],1);
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  (**(code **)(*param_1 + 0x718))(param_1,0x145);
  uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  UWorld::RemoveController(uVar1,param_1);
  FUN_142925970(param_1,param_2);
  return;
}



// FUNCTION 1423f3ee0 FUN_1423f3ee0 body=166 status=ok
// SIG undefined FUN_1423f3ee0(void)

void FUN_1423f3ee0(longlong *param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((param_2 == 0) &&
     ((*(float *)(param_1 + 0x10e) != 0.0 || (*(float *)((longlong)param_1 + 0x874) != 0.0)))) {
    fVar1 = *param_3;
    fVar2 = param_3[1];
    fVar3 = *(float *)((longlong)param_1 + 0x874);
    (**(code **)(*param_1 + 0xca0))(0,(fVar1 - *(float *)(param_1 + 0x10e)) * 0.1);
    (**(code **)(*param_1 + 0xc98))(param_1,(fVar2 - fVar3) * 0.1);
    *(float *)(param_1 + 0x10e) = fVar1;
    *(float *)((longlong)param_1 + 0x874) = fVar2;
  }
  return;
}



// FUNCTION 1423f3fe0 FUN_1423f3fe0 body=190 status=ok
// SIG undefined FUN_1423f3fe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423f3fe0(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_38 [16];
  longlong *local_28;
  longlong local_20;
  undefined1 local_10;
  uint local_c;
  
  FUN_1427125d0();
  DAT_146af1a70 = 0;
  _DAT_146af1a60 = 0;
  if (param_1[0xa4] != 0) {
    FUN_142227350(param_1[0xa4],0,1);
  }
  FActorSpawnParameters::FActorSpawnParameters(local_38);
  local_20 = param_1[0x2a];
  local_c = local_c | 0x40;
  local_10 = 1;
  local_28 = param_1;
  uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  uVar2 = FUN_142923f90();
  lVar3 = UWorld::SpawnActor(uVar1,uVar2,0,0,local_38);
  param_1[0xa4] = lVar3;
  (**(code **)(*param_1 + 0x718))(param_1,0x145);
  return;
}



// FUNCTION 1423f40f0 FUN_1423f40f0 body=2118 status=ok
// SIG undefined FUN_1423f40f0(void)

void FUN_1423f40f0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint uVar15;
  uint *puVar16;
  byte bVar17;
  ulonglong local_res8;
  ulonglong local_res18;
  uint local_res20 [2];
  uint local_1c8 [4];
  undefined8 local_1b8;
  uint uStack_1b0;
  uint uStack_1ac;
  undefined8 local_1a8;
  uint uStack_1a0;
  int iStack_19c;
  undefined1 local_198 [16];
  longlong *local_188;
  undefined2 local_180;
  undefined1 local_178 [8];
  undefined1 local_170 [8];
  longlong *local_168;
  uint uStack_160;
  uint uStack_15c;
  uint *puStack_158;
  undefined1 auStack_150 [16];
  undefined8 local_140;
  undefined **local_138;
  longlong *local_130;
  byte local_10f;
  longlong local_a8;
  longlong local_98;
  byte local_50;
  longlong local_48;
  longlong local_38;
  
  if ((*(byte *)(param_1 + 6) & 0x20) != 0) {
    return;
  }
  uVar14 = 0;
  cVar3 = '\0';
  local_res20[0] = 0;
  if (param_1[0xd] == 0) {
    if ((*(byte *)((longlong)param_2 + 0xdc) & 1) == 0) {
      return;
    }
    local_res18 = 0;
    cVar3 = (**(code **)(**(longlong **)(param_1[5] + 0x68) + 0x298))
                      (*(longlong **)(param_1[5] + 0x68),param_2,param_1,&local_res18);
    if (local_res18 == 0) {
LAB_1423f4295:
      if (((cVar3 == '\0') && ((*(byte *)((longlong)param_2 + 0xdc) & 0x12) == 0x12)) &&
         (cVar3 = (**(code **)(*param_2 + 0xa0))(param_2), cVar3 != '\0')) {
        if (*(longlong *)(param_1[5] + 0x58) != 0) {
          FUN_1429244d0();
        }
        FUN_1423fcda0(param_1,0);
        return;
      }
      lVar8 = param_1[5];
      *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 0x20;
      if ((*(byte *)(lVar8 + 0xa4) & 1) != 0) {
        return;
      }
      lVar9 = **(longlong **)(lVar8 + 0x1580);
      if (lVar9 == 0) {
        return;
      }
      if ((*(byte *)(lVar9 + 0x30) & 2) != 0) {
        return;
      }
      FUN_1423e4ec0(&local_138,lVar9,0);
      local_50 = local_50 | 0x20;
      local_138 = &PTR__scalar_deleting_destructor__1450868e8;
      local_res8 = CONCAT71(local_res8._1_7_,0x10);
      if ((undefined1 *)local_130[1] < (undefined1 *)*local_130 + 1) {
        FBitWriter::Serialize(&local_138,&local_res8,1);
      }
      else {
        local_res8 = CONCAT71(local_res8._1_7_,*(undefined1 *)*local_130);
        *local_130 = *local_130 + 1;
      }
      if ((undefined4 *)local_130[1] < (undefined4 *)*local_130 + 1) {
        (*(code *)local_138[10])(&local_138,(longlong)param_1 + 0x34,4);
        if ((local_10f & 0x10) != 0) {
          FArchive::ByteSwap(&local_138,(longlong)param_1 + 0x34,4);
        }
      }
      else {
        *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)*local_130;
        *local_130 = *local_130 + 4;
      }
      (**(code **)(*(longlong *)**(undefined8 **)(lVar8 + 0x1580) + 0x2c8))
                ((longlong *)**(undefined8 **)(lVar8 + 0x1580),local_178,&local_138,1);
      if (local_38 != 0) {
        FMemory::Free();
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
      if (local_a8 != 0) {
        FMemory::Free();
      }
      FArchive::~FArchive(&local_138);
      return;
    }
    iVar1 = *(int *)(local_res18 + 0xc);
    uVar12 = uVar14;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar15 = iVar1 >> 0x1f & 0xffff;
      uVar6 = iVar1 + uVar15;
      uVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
               (longlong)(int)((uVar6 & 0xffff) - uVar15) * 0x18;
    }
    if ((*(uint *)(uVar12 + 8) >> 0x1d & 1) != 0) goto LAB_1423f4295;
    FUN_1423fcda0(param_1,local_res18);
    (**(code **)(*param_1 + 0x300))(param_1,param_1[0xd],param_2);
    local_res20[0] = local_res20[0] | 2;
    *(undefined4 *)(param_1[0xd] + 0xd0) = *(undefined4 *)((longlong)param_1 + 0x74);
  }
  bVar17 = *(byte *)((longlong)param_2 + 0xdc) >> 3 & 1;
  bVar4 = (**(code **)(*param_1 + 0x2f8))(param_1);
  if (bVar17 != bVar4) {
    (**(code **)(*(longlong *)param_1[0xd] + 0x2b8))((longlong *)param_1[0xd],bVar17);
    (**(code **)(*param_1 + 0x2f0))(param_1,bVar17);
  }
  lVar8 = (**(code **)(*(longlong *)param_1[0xd] + 0x4a8))();
  if (lVar8 != param_1[5]) {
    if (lVar8 == 0) goto LAB_1423f442b;
    lVar9 = UIpConnection::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((!bVar2) || (*(longlong *)(lVar8 + 0x1970) != param_1[5])) goto LAB_1423f442b;
  }
  local_res20[0] = local_res20[0] | 1;
LAB_1423f442b:
  local_res20[0] =
       local_res20[0] ^ ((uint)*(byte *)((longlong)param_2 + 0xdd) << 3 ^ local_res20[0]) & 0x20;
  cVar5 = (**(code **)(*param_2 + 0xa0))(param_2);
  while( true ) {
    if (((cVar5 != '\0') || (param_1[5] == 0)) || (*(int *)(param_1[5] + 300) == 1))
    goto LAB_1423f470b;
    FNetBitReader::FNetBitReader(&local_138,param_2[0x16],0,0);
    local_res18 = local_res18 & 0xffffffffffffff00;
    local_res8 = local_res8 & 0xffffffffffffff00;
    uVar10 = FUN_1423f53d0(param_1,param_2);
    uVar12 = uVar14;
    if (-1 < (char)param_2[5]) {
      if ((char)local_res8 == '\0') {
        local_1c8[0] = 0;
        (**(code **)(*param_2 + 0x68))(param_2,local_1c8);
        if ((char)param_2[5] < '\0') {
          uVar12 = 0;
        }
        else {
          FUN_1416950d0(&local_138,param_2);
          uVar12 = uVar10;
        }
      }
      else {
        FUN_1416950d0(&local_138,param_2);
      }
    }
    if ((char)param_2[5] < '\0') break;
    if (local_98 != 0) {
      if (uVar12 == 0) {
LAB_1423f4695:
        if (param_1[0xd] != 0) {
          uVar6 = *(uint *)(param_1[0xd] + 0xc);
          uVar12 = uVar14;
          if ((int)uVar6 < (int)DAT_1469e91c4) {
            uVar15 = uVar6 & 0xffff;
            if ((int)uVar6 < 0) {
              uVar6 = uVar6 + 0xffff;
              uVar15 = uVar15 - 0x10000;
            }
            uVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                     (longlong)(int)uVar15 * 0x18;
          }
          if ((*(uint *)(uVar12 + 8) >> 0x1d & 1) == 0) goto LAB_1423f46e0;
        }
      }
      else {
        uVar6 = *(uint *)(uVar12 + 0xc);
        uVar10 = uVar14;
        if ((int)uVar6 < (int)DAT_1469e91c4) {
          uVar15 = uVar6 & 0xffff;
          if ((int)uVar6 < 0) {
            uVar6 = uVar6 + 0xffff;
            uVar15 = uVar15 - 0x10000;
          }
          uVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                   (longlong)(int)uVar15 * 0x18;
        }
        if ((*(uint *)(uVar10 + 8) >> 0x1d & 1) != 0) goto LAB_1423f4695;
        FWeakObjectPtr::operator=(local_178,uVar12);
        puVar11 = (ulonglong *)FUN_1423ed210(param_1,local_178);
        local_res8 = local_res8 & 0xffffffffffffff00;
        cVar5 = FUN_1423f5f30(*puVar11,&local_138,local_res20,local_res18 & 0xff,&local_res8);
        if (cVar5 != '\0') {
          if (param_1[0xd] != 0) {
            uVar6 = *(uint *)(param_1[0xd] + 0xc);
            uVar12 = uVar14;
            if ((int)uVar6 < (int)DAT_1469e91c4) {
              uVar15 = uVar6 & 0xffff;
              if ((int)uVar6 < 0) {
                uVar6 = uVar6 + 0xffff;
                uVar15 = uVar15 - 0x10000;
              }
              uVar12 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                       (longlong)(int)uVar15 * 0x18;
            }
            if ((*(uint *)(uVar12 + 8) >> 0x1d & 1) == 0) {
              if ((char)local_res8 != '\0') {
                local_res8 = *puVar11;
                TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>
                ::Emplace<FObjectReplicator_*_const_&>
                          (*(longlong *)(param_1[5] + 0x58) + 0x450,local_170);
              }
              goto LAB_1423f46e0;
            }
          }
          goto LAB_1423f47be;
        }
        plVar13 = (longlong *)param_1[5];
        if ((*(byte *)((longlong)plVar13 + 0xa4) & 1) == 0) goto LAB_1423f45dc;
      }
      *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 0x20;
    }
LAB_1423f46e0:
    if (local_a8 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(&local_138);
    cVar5 = (**(code **)(*param_2 + 0xa0))(param_2);
  }
  plVar13 = (longlong *)param_1[5];
  if ((*(byte *)((longlong)plVar13 + 0xa4) & 1) == 0) {
LAB_1423f45dc:
    (**(code **)(*plVar13 + 0x2f8))();
    if (local_a8 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(&local_138);
    return;
  }
LAB_1423f47be:
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 0x20;
  if (local_a8 != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(&local_138);
LAB_1423f470b:
  local_188 = param_1 + 0x13;
  iVar1 = (int)param_1[0x18];
  puStack_158 = (uint *)(param_1 + 0x15);
  local_1b8._0_4_ = 0;
  local_1b8._4_4_ = 1;
  local_1a8._4_4_ = 0;
  uStack_1a0 = 0;
  if (iVar1 != 0) {
    puVar16 = (uint *)param_1[0x17];
    if ((uint *)param_1[0x17] == (uint *)0x0) {
      puVar16 = puStack_158;
    }
    uVar6 = *puVar16;
    uVar12 = uVar14;
    while (uVar6 == 0) {
      iVar7 = (int)uVar12;
      uStack_1a0 = (int)uVar14 + 0x20;
      uVar14 = (ulonglong)uStack_1a0;
      local_1b8._0_4_ = iVar7 + 1;
      uVar12 = (ulonglong)(uint)local_1b8;
      if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1423f47f1;
      uVar6 = puVar16[(longlong)iVar7 + 1];
    }
    local_1b8._4_4_ = -uVar6 & uVar6;
    iVar7 = 0x1f;
    if (local_1b8._4_4_ != 0) {
      for (; local_1b8._4_4_ >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (local_1b8._4_4_ == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    local_1a8._4_4_ = (uStack_1a0 - iVar7) + 0x1f;
    if (iVar1 < local_1a8._4_4_) {
LAB_1423f47f1:
      local_1a8._4_4_ = iVar1;
    }
  }
  auStack_150._4_4_ = local_1a8._4_4_;
  auStack_150._0_4_ = 0xffffffff;
  auStack_150._8_4_ = uStack_1a0;
  auStack_150._12_4_ = iStack_19c;
  uStack_160 = (uint)local_1b8;
  uStack_15c = local_1b8._4_4_;
  local_180 = 0;
  local_140._0_4_ = SUB84(local_188,0);
  local_140._4_4_ = (undefined4)((ulonglong)local_188 >> 0x20);
  uStack_1a0 = 0xffffffff;
  iStack_19c = local_1a8._4_4_;
  uStack_1b0 = (uint)local_1b8;
  uStack_1ac = local_1b8._4_4_;
  local_198._8_4_ = (undefined4)local_140;
  local_198._0_8_ = auStack_150._8_8_;
  local_198._12_4_ = local_140._4_4_;
  bVar2 = local_1a8._4_4_ < (int)param_1[0x18];
  local_1b8 = local_188;
  local_168 = local_188;
  local_140 = local_188;
  local_1a8 = puStack_158;
  if (bVar2) {
    do {
      lVar8 = *(longlong *)((longlong)iStack_19c * 0x20 + 8 + *local_1b8);
      if (*(longlong **)(lVar8 + 0x10) != (longlong *)0x0) {
        if ((*(longlong *)
              (*(longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0xf8) + 0x28) + 0x58) + 0x90) != 0)
           && (*(char *)(lVar8 + 0x358) != '\0')) {
          (**(code **)(**(longlong **)(lVar8 + 0x10) + 0x1e0))();
          *(undefined1 *)(lVar8 + 0x358) = 0;
        }
        FUN_1423e76f0(lVar8,1);
      }
      uStack_1a0 = uStack_1a0 & ~uStack_1ac;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1b0);
    } while (iStack_19c < (int)local_1a8[6]);
    if (((char)local_180 != '\0') && (local_180._1_1_ != '\0')) {
      TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_188,(int)local_188[1] - *(int *)((longlong)local_188 + 0x34),1);
    }
  }
  if (((longlong *)param_1[0xd] != (longlong *)0x0) && (cVar3 != '\0')) {
    (**(code **)(*(longlong *)param_1[0xd] + 0x420))();
  }
  return;
}



// FUNCTION 1423f4940 FUN_1423f4940 body=1591 status=ok
// SIG undefined FUN_1423f4940(void)

bool FUN_1423f4940(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  bool bVar18;
  float fVar19;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res10;
  uint local_b8;
  uint uStack_b4;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  uint uStack_90;
  uint uStack_8c;
  uint *puStack_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 uStack_78;
  longlong *local_70;
  uint uStack_68;
  uint uStack_64;
  uint *local_60;
  uint uStack_58;
  uint uStack_54;
  undefined8 local_50;
  longlong *local_48;
  
  QueryPerformanceCounter(&local_res10);
  uVar11 = 0;
  uStack_b4 = 1;
  local_70 = (longlong *)(param_1 + 0x100);
  uVar13 = *(uint *)(param_1 + 0x128);
  puStack_88 = (uint *)(param_1 + 0x110);
  local_b8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  if (uVar13 != 0) {
    puVar17 = *(uint **)(param_1 + 0x120);
    if (*(uint **)(param_1 + 0x120) == (uint *)0x0) {
      puVar17 = puStack_88;
    }
    uVar1 = *puVar17;
    uVar10 = uVar11;
    uVar14 = uVar11;
    while (uVar1 == 0) {
      iVar6 = (int)uVar10;
      uStack_a0 = (int)uVar14 + 0x20;
      uVar14 = (ulonglong)uStack_a0;
      local_b8 = iVar6 + 1;
      uVar10 = (ulonglong)local_b8;
      uStack_a4 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
      goto LAB_1423f4a2a;
      uVar1 = puVar17[(longlong)iVar6 + 1];
    }
    uStack_b4 = uVar1 - 1 & uVar1 ^ uVar1;
    iVar6 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_a4 = (uStack_a0 - iVar6) + 0x1f;
    if ((int)uVar13 < (int)uStack_a4) {
      uStack_a4 = uVar13;
    }
  }
LAB_1423f4a2a:
  uStack_90 = local_b8;
  uStack_8c = uStack_b4;
  uStack_58 = 0xffffffff;
  uStack_54 = uStack_a4;
  uStack_78 = CONCAT44(uStack_9c,uStack_a0);
  local_60 = puStack_88;
  local_50 = uStack_78;
  local_48 = local_70;
  uStack_80 = uStack_58;
  uStack_7c = uStack_54;
  uStack_68 = uStack_90;
  uStack_64 = uStack_8c;
  if ((int)uStack_a4 < (int)uVar13) {
    do {
      plVar4 = local_48;
      uVar13 = uStack_54;
      plVar2 = local_70;
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58);
      lVar7 = (longlong)(int)uStack_54;
      lVar8 = FUN_1425e6270(*(undefined8 *)(lVar8 + 0xe0),*local_70 + lVar7 * 0xc,
                            CONCAT71((int7)((ulonglong)lVar8 >> 8),1));
      if ((lVar8 != 0) ||
         (cVar5 = FNetGUIDCache::IsGUIDBroken
                            (*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 0xe0),
                             *plVar2 + lVar7 * 0xc,1), cVar5 != '\0')) {
        TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Remove
                  (plVar4,uVar13);
      }
      uStack_58 = uStack_58 & ~uStack_64;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_68);
    } while ((int)uStack_54 < (int)local_60[6]);
  }
  if (*(int *)(param_1 + 0xf0) == 0) {
    bVar18 = true;
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0x28);
    plVar2 = *(longlong **)(lVar8 + 0x58);
    piVar9 = DAT_146af22c8;
    if (*(int *)((longlong)plVar2 + 0x53c) == -1) {
      piVar9 = DAT_146af22b0;
    }
    if ((*piVar9 == 0) ||
       (fVar19 = (float)*piVar9,
       *(float *)(plVar2 + 0xa1) <= fVar19 && fVar19 != *(float *)(plVar2 + 0xa1))) {
      bVar18 = true;
    }
    else {
      bVar18 = false;
    }
    if (*(int *)(param_1 + 0x108) == *(int *)(param_1 + 0x134)) {
      if ((*(int *)(param_1 + 0x34) != -1) && (*(int *)(lVar8 + 0x16b0) != *(int *)(lVar8 + 0x16dc))
         ) {
        lVar7 = *(longlong *)(lVar8 + 0x16e8);
        if (*(longlong *)(lVar8 + 0x16e8) == 0) {
          lVar7 = lVar8 + 0x16e0;
        }
        iVar6 = *(int *)(lVar7 + ((longlong)*(int *)(lVar8 + 0x16f0) - 1U &
                                 (longlong)*(int *)(param_1 + 0x70)) * 4);
        if (iVar6 != -1) {
          do {
            if (*(int *)((longlong)iVar6 * 0x20 + *(longlong *)(lVar8 + 0x16a8)) ==
                *(int *)(param_1 + 0x70)) {
              if (iVar6 != -1) goto LAB_1423f4e48;
              break;
            }
            iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *(longlong *)(lVar8 + 0x16a8));
          } while (iVar6 != -1);
        }
      }
      if ((bVar18) &&
         (cVar5 = (**(code **)(*plVar2 + 0x3a8))(plVar2,*(undefined4 *)(param_1 + 0x70)),
         cVar5 == '\0')) {
        uVar10 = uVar11;
        uVar14 = uVar11;
        if (0 < *(int *)(param_1 + 0xf0)) {
          do {
            FUN_1423f40f0(param_1,*(undefined8 *)(uVar14 + *(longlong *)(param_1 + 0xe8)));
            puVar3 = *(undefined8 **)(uVar14 + *(longlong *)(param_1 + 0xe8));
            if (puVar3 != (undefined8 *)0x0) {
              (**(code **)*puVar3)(puVar3,1);
            }
            uVar13 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar13;
            uVar14 = uVar14 + 8;
          } while ((int)uVar13 < *(int *)(param_1 + 0xf0));
        }
        *(undefined4 *)(param_1 + 0xf0) = 0;
        if (*(int *)(param_1 + 0xf4) != 0) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xe8,0);
        }
        plVar2 = (longlong *)(param_1 + 0x98);
        uStack_b4 = 1;
        uVar13 = *(uint *)(param_1 + 0xc0);
        puVar17 = (uint *)(param_1 + 0xa8);
        local_b8 = 0;
        uStack_a4 = 0;
        uStack_a0 = 0;
        if (uVar13 != 0) {
          puVar16 = *(uint **)(param_1 + 0xb8);
          if (*(uint **)(param_1 + 0xb8) == (uint *)0x0) {
            puVar16 = puVar17;
          }
          uVar1 = *puVar16;
          uVar10 = uVar11;
          while (uVar1 == 0) {
            iVar6 = (int)uVar11;
            uStack_a0 = (int)uVar10 + 0x20;
            uVar10 = (ulonglong)uStack_a0;
            local_b8 = iVar6 + 1;
            uVar11 = (ulonglong)local_b8;
            if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
            goto LAB_1423f4d0e;
            uVar1 = puVar16[(longlong)iVar6 + 1];
          }
          uStack_b4 = uVar1 - 1 & uVar1 ^ uVar1;
          iVar6 = 0x1f;
          if (uStack_b4 != 0) {
            for (; uStack_b4 >> iVar6 == 0; iVar6 = iVar6 + -1) {
            }
          }
          if (uStack_b4 == 0) {
            iVar6 = 0x20;
          }
          else {
            iVar6 = 0x1f - iVar6;
          }
          uStack_a4 = (uStack_a0 - iVar6) + 0x1f;
          if ((int)uVar13 < (int)uStack_a4) {
LAB_1423f4d0e:
            uStack_a4 = uVar13;
          }
        }
        uVar1 = *(uint *)(param_1 + 0xc0);
        uStack_78 = CONCAT44(uStack_9c,uStack_a0);
        uStack_90 = local_b8;
        uStack_8c = uStack_b4;
        uStack_58 = 0xffffffff;
        uStack_54 = uStack_a4;
        uVar15 = uVar1 & 0xffffffe0;
        uStack_80 = 0xffffffff;
        uStack_7c = uStack_a4;
        puStack_88 = puVar17;
        local_70 = plVar2;
        local_60 = puVar17;
        local_50 = uStack_78;
        uStack_68 = uStack_90;
        uStack_64 = uStack_8c;
        uStack_a4 = uVar1;
        if (uVar1 != uVar13) {
          puVar16 = *(uint **)(param_1 + 0xb8);
          if (*(uint **)(param_1 + 0xb8) == (uint *)0x0) {
            puVar16 = puVar17;
          }
          uVar12 = puVar16[(int)uVar1 >> 5] & -1 << ((byte)uVar1 & 0x1f);
          iVar6 = (int)uVar1 >> 5;
          while (uVar12 == 0) {
            uVar15 = uVar15 + 0x20;
            if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
            goto LAB_1423f4de8;
            uVar12 = puVar16[(longlong)iVar6 + 1];
            iVar6 = iVar6 + 1;
          }
          uVar12 = uVar12 - 1 & uVar12 ^ uVar12;
          iVar6 = 0x1f;
          if (uVar12 != 0) {
            for (; uVar12 >> iVar6 == 0; iVar6 = iVar6 + -1) {
            }
          }
          if (uVar12 == 0) {
            iVar6 = 0x20;
          }
          else {
            iVar6 = 0x1f - iVar6;
          }
          uStack_a4 = (uVar15 - iVar6) + 0x1f;
          if ((int)uVar13 < (int)uStack_a4) {
LAB_1423f4de8:
            uStack_a4 = uVar13;
          }
        }
        while( true ) {
          if ((uStack_7c == uStack_a4) && (puStack_88 == puVar17)) {
            bVar18 = true;
          }
          else {
            bVar18 = false;
          }
          if (bVar18) break;
          FUN_1423e76f0(*(undefined8 *)((longlong)(int)uStack_7c * 0x20 + 8 + *plVar2),
                        CONCAT71((int7)(int3)(uStack_7c >> 8),1));
          uStack_80 = uStack_80 & ~uStack_8c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
        }
      }
    }
LAB_1423f4e48:
    if (*(int *)(param_1 + 0xf0) < 1) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x68);
      if (plVar2 != (longlong *)0x0) {
        lVar8 = UPackageMapClient::GetPrivateStaticClass();
        if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
            lVar8 + 0x88)) {
          bVar18 = false;
        }
        else {
          bVar18 = true;
        }
        if (bVar18) {
          (**(code **)(*plVar2 + 0x2f8))(plVar2,param_1 + 0x70,0);
        }
      }
    }
    else {
      QueryPerformanceCounter(&local_res8);
      if (30.0 < ((double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) * DAT_1468b02f8 +
                 16777216.0) - *(double *)(param_1 + 0xf8)) {
        QueryPerformanceCounter(&local_res8);
        *(double *)(param_1 + 0xf8) =
             (double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) * DAT_1468b02f8 +
             16777216.0;
      }
    }
    QueryPerformanceCounter(&local_res8);
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58);
    *(float *)(lVar8 + 0x508) =
         (float)((double)(local_res8.s.LowPart - local_res10._0_4_) * DAT_1468b02f8 * 1000.0) +
         *(float *)(lVar8 + 0x508);
    bVar18 = *(int *)(param_1 + 0xf0) == 0;
  }
  return bVar18;
}



// FUNCTION 1423f4f80 QueuePropertyRepNotify body=391 status=ok
// SIG undefined QueuePropertyRepNotify(void)

void FObjectReplicator::QueuePropertyRepNotify
               (longlong param_1,undefined8 param_2,longlong param_3,undefined1 param_4,
               longlong param_5)

{
  int iVar1;
  longlong lVar2;
  longlong local_res18 [2];
  int local_18 [2];
  longlong *local_10;
  
  if ((*(ulonglong *)(param_3 + 0x38) & 0x100000000) != 0) {
    local_res18[0] = param_3;
    TArray<UProperty_*,TInlineAllocator<32,FDefaultAllocator>_>::AddUniqueImpl<UProperty_*_const_&>
              (param_1 + 0x150,local_res18);
    lVar2 = FUN_14178ac60(param_2,*(undefined8 *)(local_res18[0] + 0x48));
    if (*(char *)(lVar2 + 0x8c) != '\0') {
      if (*(int *)(local_res18[0] + 0x30) != 1) {
        TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
        ::FindId(param_1 + 0x260,local_18);
        if ((local_18[0] == -1) ||
           (lVar2 = (longlong)local_18[0] * 0x20 + *(longlong *)(param_1 + 0x260), lVar2 == 0)) {
          local_10 = local_res18;
          FUN_1407b9130(param_1 + 0x260,local_18,&local_10,0);
          lVar2 = (longlong)local_18[0] * 0x20 + *(longlong *)(param_1 + 0x260);
        }
        iVar1 = *(int *)(lVar2 + 0x10);
        *(int *)(lVar2 + 0x10) = iVar1 + 1;
        if (*(int *)(lVar2 + 0x14) < iVar1 + 1) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow((longlong *)(lVar2 + 8),iVar1);
        }
        *(undefined1 *)((longlong)iVar1 + *(longlong *)(lVar2 + 8)) = param_4;
        return;
      }
      if (0 < *(int *)(param_5 + 8)) {
        TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
        ::FindId(param_1 + 0x260,local_18);
        if ((local_18[0] == -1) ||
           (lVar2 = (longlong)local_18[0] * 0x20 + *(longlong *)(param_1 + 0x260), lVar2 == 0)) {
          local_10 = local_res18;
          FUN_1407b9130(param_1 + 0x260,local_18,&local_10,0);
          lVar2 = (longlong)local_18[0] * 0x20 + *(longlong *)(param_1 + 0x260);
        }
        TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(lVar2 + 8,param_5);
      }
    }
  }
  return;
}



// FUNCTION 1423f5110 FUN_1423f5110 body=611 status=ok
// SIG undefined FUN_1423f5110(void)

void FUN_1423f5110(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    iVar9 = 0;
    if (0 < *(int *)(param_1 + 0x338)) {
      plVar7 = *(longlong **)(param_1 + 0x330);
      do {
        if (*plVar7 == *(longlong *)(param_2 + 0x18)) {
          if (iVar9 != -1) goto LAB_1423f51b2;
          break;
        }
        iVar9 = iVar9 + 1;
        plVar7 = plVar7 + 2;
      } while (iVar9 < *(int *)(param_1 + 0x338));
    }
    plVar7 = (longlong *)(param_1 + 0x330);
    iVar9 = *(int *)(param_1 + 0x338);
    *(int *)(param_1 + 0x338) = iVar9 + 1;
    if (*(int *)(param_1 + 0x33c) < iVar9 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar9);
    }
    *(undefined8 *)(*plVar7 + (longlong)iVar9 * 0x10) = *(undefined8 *)(param_2 + 0x18);
    *(undefined4 *)(*plVar7 + 8 + (longlong)iVar9 * 0x10) = 0;
LAB_1423f51b2:
    lVar6 = *(longlong *)(param_1 + 0x330);
    lVar10 = (longlong)iVar9;
    piVar1 = (int *)(lVar6 + 8 + lVar10 * 0x10);
    *piVar1 = *piVar1 + 1;
    lVar2 = DAT_146af2350;
    cVar3 = FUN_1415ad720();
    if (((cVar3 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
      lVar8 = 4;
    }
    else {
      lVar8 = 0;
    }
    if (*(int *)(lVar8 + lVar2) < *(int *)(lVar6 + 8 + lVar10 * 0x10)) {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x68);
      *(undefined4 *)(lVar6 + 0x328) = 0;
      if (0x7fffffff < *(uint *)(lVar6 + 0x32c)) {
        TArray<float,FDefaultAllocator>::ResizeTo(lVar6 + 800,0);
      }
    }
    else {
      *(undefined4 *)(*(longlong *)(param_1 + 0x330) + 0xc + lVar10 * 0x10) =
           *(undefined4 *)
            (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0xf8) + 0x28) + 0x58) + 0x170);
      plVar7 = *(longlong **)(param_1 + 0x340);
      if (plVar7 == (longlong *)0x0) {
        lVar6 = operator_new();
        if (lVar6 == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = (longlong *)FUN_1423e4ec0(lVar6,*(undefined8 *)(param_1 + 0xf8),0);
        }
        *(longlong **)(param_1 + 0x340) = plVar7;
      }
      (**(code **)(*plVar7 + 0x58))
                (plVar7,*(undefined8 *)(param_3 + 0x90),*(undefined8 *)(param_3 + 0xa0));
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x68);
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 0x328) != 0) {
          lVar2 = *(longlong *)(param_1 + 0xf8);
          iVar9 = *(int *)(lVar6 + 0x328);
          if (iVar9 != 0) {
            iVar5 = *(int *)(lVar2 + 0x168);
            if (*(int *)(lVar2 + 0x16c) < iVar5 + iVar9) {
              TArray<float,FDefaultAllocator>::ResizeTo((longlong *)(lVar2 + 0x160));
              iVar5 = *(int *)(lVar2 + 0x168);
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(lVar2 + 0x160) + (longlong)iVar5 * 4),
                       *(void **)(lVar6 + 800),(longlong)iVar9 << 2);
            *(int *)(lVar2 + 0x168) = *(int *)(lVar2 + 0x168) + iVar9;
          }
          *(undefined4 *)(lVar6 + 0x328) = 0;
          if ((*(int *)(lVar6 + 0x32c) < 0) && (*(int *)(lVar6 + 0x32c) != 0)) {
            TArray<float,FDefaultAllocator>::ResizeTo(lVar6 + 800,0);
          }
        }
        if ((*(byte *)(*(longlong *)(param_1 + 0xf0) + 0xa4) & 1) == 0) {
          UPackageMapClient::AppendExportBunches(lVar6,*(longlong *)(param_1 + 0xf8) + 0x170);
        }
      }
    }
  }
  return;
}



// FUNCTION 1423f5380 QueueRemoteFunctionBunch body=77 status=ok
// SIG undefined QueueRemoteFunctionBunch(void)

void UActorChannel::QueueRemoteFunctionBunch
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  FWeakObjectPtr::operator=(local_18);
  puVar1 = (undefined8 *)FUN_1423ed210(param_1,local_18);
  FUN_1423f5110(*puVar1,param_3,param_4);
  return;
}



// FUNCTION 1423f53d0 FUN_1423f53d0 body=1423 status=ok
// SIG undefined FUN_1423f53d0(void)

longlong * FUN_1423f53d0(longlong param_1,longlong *param_2,undefined1 *param_3,undefined1 *param_4)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  int iVar17;
  bool bVar18;
  undefined4 local_res8 [2];
  int local_res10 [2];
  undefined1 *local_res18;
  undefined1 *local_res20;
  int *piVar19;
  longlong *local_58;
  longlong local_50 [2];
  ulonglong uVar16;
  
  local_res18 = param_3;
  cVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x28) + 0x58) + 0x368))();
  bVar18 = false;
  *param_3 = 0;
  if (-1 < (char)param_2[5]) {
    lVar4 = param_2[0x15];
    if (lVar4 < param_2[0x14]) {
      bVar18 = (*(byte *)((longlong)(int)(lVar4 >> 3) + param_2[0x12]) & '\x01' << ((byte)lVar4 & 7)
               ) != 0;
      param_2[0x15] = lVar4 + 1;
    }
    else {
      FUN_1416952d0(param_2);
    }
  }
  *param_4 = bVar18;
  cVar2 = (char)param_2[5];
  if (cVar2 < '\0') {
    return (longlong *)0x0;
  }
  lVar4 = param_2[0x15];
  bVar18 = false;
  if (lVar4 < param_2[0x14]) {
    bVar18 = (*(byte *)((longlong)(int)(lVar4 >> 3) + param_2[0x12]) & '\x01' << ((byte)lVar4 & 7))
             != 0;
    param_2[0x15] = lVar4 + 1;
  }
  else {
    FUN_1416952d0(param_2);
    cVar2 = (char)param_2[5];
  }
  if (cVar2 < '\0') {
    return (longlong *)0x0;
  }
  if (bVar18) {
    return *(longlong **)(param_1 + 0x68);
  }
  uVar11 = 0;
  local_res8[0] = 0;
  local_58 = (longlong *)0x0;
  uVar3 = UObject::GetPrivateStaticClass();
  plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x68);
  (**(code **)(*plVar9 + 0x280))(plVar9,param_2,uVar3,&local_58,local_res8);
  if ((char)*(byte *)(param_2 + 5) < '\0') {
    *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 0x80;
    return (longlong *)0x0;
  }
  cVar2 = (**(code **)(*param_2 + 0xa0))(param_2);
  plVar9 = local_58;
  if (cVar2 != '\0') goto LAB_1423f55da;
  if (local_58 == (longlong *)0x0) {
LAB_1423f55d0:
    if (cVar1 != '\0') {
      if (local_58 != (longlong *)0x0) {
        return local_58;
      }
      goto LAB_1423f55da;
    }
  }
  else {
    lVar4 = FUN_1428dfc70();
    if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar18 = false;
    }
    else {
      bVar18 = true;
    }
    if (bVar18) goto LAB_1423f55da;
    cVar2 = UObjectBaseUtility::IsIn(local_58,*(undefined8 *)(param_1 + 0x68));
    if (cVar2 != '\0') goto LAB_1423f55d0;
    if (cVar1 != '\0') goto LAB_1423f55da;
  }
  cVar1 = (char)param_2[5];
  bVar18 = false;
  if (cVar1 < '\0') {
    return (longlong *)0x0;
  }
  lVar4 = param_2[0x15];
  if (lVar4 < param_2[0x14]) {
    bVar18 = (*(byte *)((longlong)(int)(lVar4 >> 3) + param_2[0x12]) & '\x01' << ((byte)lVar4 & 7))
             != 0;
    param_2[0x15] = lVar4 + 1;
  }
  else {
    FUN_1416952d0(param_2,1);
    cVar1 = (char)param_2[5];
  }
  if (cVar1 < '\0') {
    return (longlong *)0x0;
  }
  if (bVar18) {
    if (local_58 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    return local_58;
  }
  local_res10[0] = 0;
  local_50[0] = 0;
  uVar3 = UObject::GetPrivateStaticClass();
  piVar19 = local_res10;
  plVar9 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x68);
  (**(code **)(*plVar9 + 0x280))(plVar9,param_2,uVar3,local_50,piVar19);
  lVar4 = local_50[0];
  if (local_res10[0] == 0) {
    if (local_58 != (longlong *)0x0) {
      FUN_1423f3330(param_1);
      lVar4 = (longlong)*(int *)(param_1 + 0x158);
      plVar9 = local_58;
      if (*(int *)(param_1 + 0x158) != 0) {
        local_res20 = (undefined1 *)((ulonglong)local_res20 & 0xffffffff00000000);
        bVar18 = (longlong *)**(longlong **)(param_1 + 0x150) != local_58;
        uVar10 = uVar11;
        uVar13 = uVar11;
        uVar16 = uVar11;
        do {
          iVar14 = (int)uVar16;
          iVar12 = (int)uVar13;
          uVar10 = uVar10 + 1;
          uVar13 = (ulonglong)(iVar12 + 1);
          if ((longlong)uVar10 < lVar4) {
            plVar7 = (longlong *)(*(longlong *)(param_1 + 0x150) + uVar10 * 8);
            do {
              if (bVar18 != ((longlong *)*plVar7 != plVar9)) break;
              uVar13 = (ulonglong)((int)uVar13 + 1);
              uVar10 = uVar10 + 1;
              plVar7 = plVar7 + 1;
            } while ((longlong)uVar10 < lVar4);
          }
          iVar17 = (int)uVar13 - iVar12;
          if (bVar18 != false) {
            if (iVar14 != iVar12) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar14 * 8),
                         (void *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar12 * 8),
                         (longlong)iVar17 << 3);
              plVar9 = local_58;
              iVar14 = (int)local_res20;
            }
            uVar15 = iVar14 + iVar17;
            uVar16 = (ulonglong)uVar15;
            local_res20 = (undefined1 *)CONCAT44(local_res20._4_4_,uVar15);
          }
          bVar18 = (bool)(bVar18 ^ 1);
        } while ((longlong)uVar10 < lVar4);
        *(int *)(param_1 + 0x158) = (int)uVar16;
        param_3 = local_res18;
      }
      if ((*(longlong *)(param_1 + 0x28) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) != 0)) {
        FWeakObjectPtr::operator=(&local_res18);
        local_res20 = local_res18;
        FUN_1423f93b0(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 0x300,&local_res20);
        plVar9 = local_58;
      }
      (**(code **)(**(longlong **)(param_1 + 0x68) + 0x2d0))(*(longlong **)(param_1 + 0x68),plVar9);
      (**(code **)(*local_58 + 0x1f0))();
      iVar14 = *(int *)((longlong)local_58 + 0xc);
      if (iVar14 < (int)DAT_1469e91c4) {
        uVar8 = iVar14 >> 0x1f & 0xffff;
        uVar15 = iVar14 + uVar8;
        uVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar15 >> 0x10) * 8) +
                 (longlong)(int)((uVar15 & 0xffff) - uVar8) * 0x18;
      }
      *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) | 0x20000000;
    }
    *param_3 = 1;
    return (longlong *)0x0;
  }
  if (local_50[0] != 0) {
    lVar5 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar18 = false;
    }
    else {
      bVar18 = true;
    }
    if (bVar18) {
      lVar5 = UObject::GetPrivateStaticClass();
      if (lVar4 != lVar5) {
        lVar6 = FUN_1428dfc70();
        lVar5 = lVar4;
        while (lVar5 != lVar6) {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          if (lVar5 == 0) {
            if (local_58 == (longlong *)0x0) {
              uVar3 = *(undefined8 *)(param_1 + 0x68);
              local_res18 = (undefined1 *)0x0;
              local_res20 = (undefined1 *)0x0;
              FUN_1417846f0(uVar3,
                            L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                           );
              local_58 = (longlong *)
                         FUN_1417985e0(lVar4,uVar3,0,0,(ulonglong)piVar19 & 0xffffffff00000000,0,0,0
                                       ,0);
              (**(code **)(**(longlong **)(param_1 + 0x68) + 0x2c8))
                        (*(longlong **)(param_1 + 0x68),local_58);
              FUN_1425efea0(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 0xe0),local_res8
                            ,local_58);
              iVar14 = *(int *)(param_1 + 0x158);
              *(int *)(param_1 + 0x158) = iVar14 + 1;
              if (*(int *)(param_1 + 0x15c) < iVar14 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (param_1 + 0x150,iVar14);
              }
              *(longlong **)(*(longlong *)(param_1 + 0x150) + (longlong)iVar14 * 8) = local_58;
              FUN_140ac3dd0(*(longlong *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 0xe0) + 0xa8,
                            &local_res18,local_res8,0);
              return local_58;
            }
            return local_58;
          }
        }
      }
      goto LAB_1423f55da;
    }
  }
  if (local_58 != (longlong *)0x0) {
    return local_58;
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x28) + 0xa4) & 1) != 0) {
    return (longlong *)0x0;
  }
LAB_1423f55da:
  *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 0x80;
  return (longlong *)0x0;
}



// FUNCTION 1423f5960 FUN_1423f5960 body=514 status=ok
// SIG undefined FUN_1423f5960(void)

undefined8
FUN_1423f5960(longlong param_1,undefined8 param_2,int *param_3,longlong param_4,longlong *param_5,
             longlong *param_6,undefined8 param_7)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  plVar4 = param_6;
  plVar3 = param_5;
  lVar8 = 0;
  *param_6 = 0;
  if ((int)param_5[0x14] == (int)param_5[0x15]) {
    return 0;
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x28) + 0xa4) & 1) == 0) {
    param_6._0_4_ = 0;
    (**(code **)(*param_5 + 0x60))(param_5,&param_6,*param_3 + 1 + param_3[10]);
    if ((char)*(byte *)(plVar3 + 5) < '\0') {
      return 0;
    }
    if (param_3[10] + *param_3 < (int)param_6) {
      *(byte *)(plVar3 + 5) = *(byte *)(plVar3 + 5) | 0x80;
      return 0;
    }
    lVar8 = FClassNetCache::GetFromIndex(param_3);
    *plVar4 = lVar8;
LAB_1423f5b23:
    param_5._0_4_ = 0;
    (**(code **)(*plVar3 + 0x68))(plVar3,&param_5);
    if ((-1 < (char)plVar3[5]) &&
       (FUN_1416950d0(param_7,plVar3,param_5._0_4_), -1 < (char)plVar3[5])) {
      return 1;
    }
  }
  else {
    if (param_4 == 0) {
      *(byte *)(param_5 + 5) = *(byte *)(param_5 + 5) | 0x80;
      return 0;
    }
    param_6._0_4_ = 0;
    iVar1 = 2;
    if (1 < *(int *)(param_4 + 0x20)) {
      iVar1 = *(int *)(param_4 + 0x20);
    }
    (**(code **)(*param_5 + 0x60))(param_5,&param_6,iVar1);
    if ((char)*(byte *)(plVar3 + 5) < '\0') {
      return 0;
    }
    if ((int)param_6 < *(int *)(param_4 + 0x20)) {
      lVar10 = (longlong)(int)param_6 * 0x40 + *(longlong *)(param_4 + 0x18);
      iVar1 = *(int *)(lVar10 + 8);
      lVar7 = lVar8;
      if (iVar1 != 0) {
        for (; param_3 != (int *)0x0; param_3 = *(int **)(param_3 + 2)) {
          lVar7 = lVar8;
          if (param_3[0x22] != param_3[0x2d]) {
            piVar6 = *(int **)(param_3 + 0x30);
            if (*(int **)(param_3 + 0x30) == (int *)0x0) {
              piVar6 = param_3 + 0x2e;
            }
            iVar5 = piVar6[(longlong)param_3[0x32] - 1U & (longlong)iVar1];
            if (iVar5 != -1) {
              lVar2 = *(longlong *)(param_3 + 0x20);
              do {
                lVar9 = (longlong)iVar5;
                if (*(int *)(lVar2 + lVar9 * 0x18) == iVar1) {
                  if (((iVar5 != -1) && (lVar2 = lVar2 + lVar9 * 0x18, lVar2 != 0)) &&
                     (lVar7 = *(longlong *)(lVar2 + 8), lVar7 != 0)) goto LAB_1423f5a96;
                  break;
                }
                iVar5 = *(int *)(lVar2 + 0x10 + lVar9 * 0x18);
              } while (iVar5 != -1);
            }
          }
        }
LAB_1423f5a96:
        *plVar4 = lVar7;
        if ((lVar7 == 0) && (*(char *)(lVar10 + 0x38) == '\0')) {
          *(undefined1 *)(lVar10 + 0x38) = 1;
        }
        goto LAB_1423f5b23;
      }
    }
    *(byte *)(plVar3 + 5) = *(byte *)(plVar3 + 5) | 0x80;
  }
  return 0;
}



// FUNCTION 1423f5b70 FUN_1423f5b70 body=94 status=ok
// SIG undefined FUN_1423f5b70(void)

undefined8 FUN_1423f5b70(longlong param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return 1;
  }
  if ((*(byte *)(param_1 + 0xe8) & 1) == 0) {
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar3 = 0;
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + 0x28);
    do {
      if (*(longlong *)(pbVar1 + -0x20) != 0) {
        return 0;
      }
      if ((*pbVar1 & 8) != 0) {
        return 0;
      }
      lVar3 = lVar3 + 1;
      pbVar1 = pbVar1 + 0x30;
    } while (lVar3 < *(int *)(param_1 + 0x20));
  }
  uVar2 = FRepLayout::ReadyForDormancy
                    (*(undefined8 *)(param_1 + 0x2b0),*(undefined8 *)(param_1 + 0x2c0));
  return uVar2;
}



// FUNCTION 1423f5bd0 FUN_1423f5bd0 body=530 status=ok
// SIG undefined FUN_1423f5bd0(void)

undefined8 FUN_1423f5bd0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  byte *pbVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  plVar1 = (longlong *)(param_1 + 0x98);
  iVar2 = *(int *)(param_1 + 0xc0);
  puStack_28 = (uint *)(param_1 + 0xa8);
  local_78 = 0;
  uStack_74 = 1;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar2 != 0) {
    puVar10 = *(uint **)(param_1 + 0xb8);
    if (*(uint **)(param_1 + 0xb8) == (uint *)0x0) {
      puVar10 = puStack_28;
    }
    uVar3 = *puVar10;
    uStack_60 = 0;
    local_78 = 0;
    while (uVar3 == 0) {
      lVar9 = (longlong)local_78;
      uStack_60 = uStack_60 + 0x20;
      iVar7 = local_78 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar7;
      if (bVar4) goto LAB_1423f5c8f;
      uVar3 = puVar10[lVar9 + 1];
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
    local_68._4_4_ = (uStack_60 - iVar7) + 0x1f;
    if (iVar2 < local_68._4_4_) {
LAB_1423f5c8f:
      local_68._4_4_ = iVar2;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  iStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  iStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar4 = local_68._4_4_ < *(int *)(param_1 + 0xc0);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar4) {
    do {
      lVar9 = *(longlong *)((longlong)iStack_5c * 0x20 + 8 + *plVar1);
      if (*(longlong *)(lVar9 + 0x10) != 0) {
        if ((*(byte *)(lVar9 + 0xe8) & 1) == 0) {
LAB_1423f5db1:
          if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
            TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
            ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
          }
          return 0;
        }
        lVar8 = 0;
        if (0 < *(int *)(lVar9 + 0x20)) {
          pbVar6 = (byte *)(*(longlong *)(lVar9 + 0x18) + 0x28);
          do {
            if ((*(longlong *)(pbVar6 + -0x20) != 0) || ((*pbVar6 & 8) != 0)) goto LAB_1423f5db1;
            lVar8 = lVar8 + 1;
            pbVar6 = pbVar6 + 0x30;
          } while (lVar8 < *(int *)(lVar9 + 0x20));
        }
        cVar5 = FRepLayout::ReadyForDormancy
                          (*(undefined8 *)(lVar9 + 0x2b0),*(undefined8 *)(lVar9 + 0x2c0));
        if (cVar5 == '\0') goto LAB_1423f5db1;
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return 1;
}



// FUNCTION 1423f5df0 FUN_1423f5df0 body=123 status=ok
// SIG undefined FUN_1423f5df0(void)

byte FUN_1423f5df0(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return (byte)~*(byte *)(param_1 + 5) >> 7;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2,4);
  }
  return (byte)~*(byte *)(param_1 + 5) >> 7;
}



// FUNCTION 1423f5e70 ReceivedAcks body=182 status=ok
// SIG undefined ReceivedAcks(void)

void UChannel::ReceivedAcks(longlong param_1)

{
  byte bVar1;
  bool bVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x58);
  bVar2 = false;
  if (puVar3 != (undefined8 *)0x0) {
    while (bVar1 = *(byte *)(puVar3 + 0x1d), (bVar1 & 1) != 0) {
      if ((bVar1 & 2) != 0) {
        if ((bVar1 & 0x40) != 0) {
          do {
            if ((*(byte *)(puVar3 + 0x1d) & 1) == 0) goto LAB_1423f5f02;
          } while (((*(byte *)((longlong)puVar3 + 0xe9) & 1) == 0) &&
                  (puVar3 = (undefined8 *)puVar3[0x18], puVar3 != (undefined8 *)0x0));
        }
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
        puVar3 = *(undefined8 **)(param_1 + 0x58);
      }
      if ((bVar2) || ((*(byte *)(puVar3 + 0x1d) & 4) != 0)) {
        bVar2 = true;
      }
      *(undefined8 *)(param_1 + 0x58) = puVar3[0x18];
      (**(code **)*puVar3)(puVar3,1);
      puVar3 = *(undefined8 **)(param_1 + 0x58);
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
      if (puVar3 == (undefined8 *)0x0) break;
    }
LAB_1423f5f02:
    if (bVar2) goto LAB_1423f5f11;
  }
  if (((byte)*(undefined4 *)(param_1 + 0x30) & 0x11) != 0x11) {
    return;
  }
LAB_1423f5f11:
  FUN_1423e8eb0(param_1,0);
  return;
}



// FUNCTION 1423f5f30 FUN_1423f5f30 body=2113 status=ok
// SIG undefined FUN_1423f5f30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1423f5f30(undefined8 *param_1,longlong param_2,uint *param_3,char param_4,
                       undefined1 *param_5)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  void *_Src;
  char cVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong lVar14;
  size_t _Size;
  undefined1 auStack_278 [32];
  undefined8 *local_258;
  longlong **local_250;
  undefined8 *local_248;
  char *local_240;
  uint local_238;
  char local_228;
  char local_227;
  undefined1 local_226 [14];
  longlong local_218;
  undefined8 local_210;
  longlong *local_208;
  longlong local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  ulonglong local_1e8;
  undefined1 local_1e0 [8];
  undefined8 local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  uint *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined **local_1a8;
  undefined8 local_1a0;
  undefined8 *local_198;
  longlong *local_190;
  undefined8 local_188 [5];
  byte local_160;
  void *local_f8;
  int local_f0;
  int local_e8;
  undefined4 uStack_e4;
  int local_e0;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined ***pppuStack_90;
  undefined8 local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  local_218 = param_1[2];
  local_226._6_8_ = param_5;
  uVar8 = 0;
  if (local_218 != 0) {
    local_1d8 = *(undefined8 *)(*(longlong *)(param_1[0x1f] + 0x28) + 0x68);
    local_1c8 = param_2;
    local_1c0 = param_3;
    cVar5 = (**(code **)(**(longlong **)(*(longlong *)(param_1[0x1f] + 0x28) + 0x58) + 0x368))();
    if ((*DAT_146af2368 < 1) || (local_226[1] = 1, cVar5 != '\0')) {
      local_226[1] = 0;
    }
    local_228 = cVar5;
    uVar8 = FUN_14171a990(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(param_1[0x1f] + 0x28) + 0x58) + 0xf0),
                          *param_1);
    if (uVar8 != 0) {
      local_227 = '\0';
      lVar12 = local_218;
      local_1e8 = uVar8;
      if (param_4 == '\0') {
LAB_1423f60d2:
        local_1f0 = FUN_1423efa90(param_1[0x1f],*param_1);
        FNetBitReader::FNetBitReader(local_188,*(undefined8 *)(param_2 + 0xb0),0,0);
        local_248 = local_188;
        local_250 = &local_208;
        local_208 = (longlong *)0x0;
        local_258 = (undefined8 *)param_2;
        cVar6 = FUN_1423f5960(param_1[0x1f],lVar12,local_1e8,local_1f0);
        plVar3 = local_208;
        do {
          local_208 = plVar3;
          if (cVar6 == '\0') {
            if ((cVar5 == '\0') && (local_227 != '\0')) {
              FUN_1423fe3b0(param_1);
            }
            if (((*(char *)(param_1 + 0x6b) != '\0') &&
                (plVar3 = (longlong *)param_1[2], plVar3 != (longlong *)0x0)) &&
               ((int)plVar3[1] < 0)) {
              (**(code **)(*plVar3 + 0x240))();
            }
            uVar8 = 1;
LAB_1423f6726:
            if (local_f8 != (void *)0x0) {
              FMemory::Free();
            }
            FArchive::~FArchive(local_188);
            return uVar8;
          }
          if (*(char *)(param_2 + 0x28) < '\0') {
LAB_1423f66eb:
            uVar8 = 0;
            goto LAB_1423f6726;
          }
          if ((plVar3 != (longlong *)0x0) && ((char)plVar3[2] == '\0')) {
            lVar11 = *plVar3;
            if (lVar11 == 0) {
LAB_1423f61a2:
              lVar11 = 0;
            }
            else {
              lVar9 = UProperty::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (!bVar4) goto LAB_1423f61a2;
            }
            if (lVar11 != 0) {
              if ((cVar5 == '\0') &&
                 ((*(byte *)(param_1[3] + 0x28 + (ulonglong)*(ushort *)(lVar11 + 0x40) * 0x30) & 2)
                  != 0)) {
                if (*(char *)(param_1 + 0x6b) == '\0') {
                  *(undefined1 *)(param_1 + 0x6b) = 1;
                  if ((longlong *)param_1[2] != (longlong *)0x0) {
                    (**(code **)(*(longlong *)param_1[2] + 0x1d8))();
                  }
                }
                local_226._2_4_ = 0;
                if ((*(int *)(lVar11 + 0x30) == 1) ||
                   (FUN_141694b60(local_188,local_226 + 2),
                   (uint)local_226._2_4_ < *(uint *)(lVar11 + 0x30))) {
                  local_1b8 = 0;
                  local_1b0 = 0;
                  lVar14 = (longlong)(*(int *)(lVar11 + 0x34) * local_226._2_4_) +
                           (longlong)*(int *)(lVar11 + 0x44);
                  lVar9 = UStructProperty::GetPrivateStaticClass();
                  if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                    bVar4 = false;
                  }
                  else {
                    bVar4 = true;
                  }
                  if ((bVar4) &&
                     (lVar9 = *(longlong *)(lVar11 + 0x70), local_1d0 = lVar11,
                     (*(uint *)(lVar9 + 0x88) & 0x100000) != 0)) {
                    plVar2 = *(longlong **)(lVar9 + 0x90);
                    local_58 = 0;
                    local_50 = 0;
                    local_88 = local_88 & 0xffff000000000000;
                    local_80 = 0;
                    local_68 = 0;
                    local_60 = 0;
                    local_c8 = 0;
                    puStack_c0 = (undefined8 *)0x0;
                    local_b8 = 0;
                    uStack_b0 = 0;
                    local_a8 = 0;
                    uStack_a0 = 0;
                    local_98 = 0;
                    pppuStack_90 = (undefined ***)0x0;
                    local_78 = 0;
                    uStack_70 = 0;
                    local_1a0 = *(undefined8 *)(*(longlong *)(param_1[0x1f] + 0x28) + 0x58);
                    local_1a8 = &PTR_FUN_145086ba8;
                    local_210 = *(undefined8 *)(lVar11 + 0x18);
                    FName::ToString(&local_210,&local_200);
                    if (local_58 != 0) {
                      FMemory::Free();
                    }
                    local_58 = local_200;
                    local_50 = local_1f8;
                    local_a8 = local_1d8;
                    puStack_c0 = local_188;
                    pppuStack_90 = &local_1a8;
                    local_88._0_6_ = (uint6)(uint5)local_88;
                    local_200 = 0;
                    local_1f8 = 0;
                    local_98 = lVar9;
                    (**(code **)(*plVar2 + 0x70))(plVar2,&local_c8,lVar14 + lVar12);
                    if (((local_160 & 0x80) == 0) && (local_e8 == local_e0)) {
                      if (local_88._3_1_ != '\0') {
                        local_198 = &local_210;
                        local_210 = CONCAT44(local_210._4_4_,(int)lVar14);
                        local_190 = &local_1d0;
                        TSet<TTuple<int,unsigned___int64>,TDefaultMapHashableKeyFuncs<int,unsigned___int64,0>,FDefaultSetAllocator>
                        ::Emplace<TPairInitializer<int_const_&,unsigned___int64_const_&>_>
                                  (param_1 + 0x20,local_1e0,&local_198,0);
                        *(undefined1 *)local_226._6_8_ = 1;
                      }
                      param_5 = (undefined1 *)local_226._6_8_;
                      if (local_88._4_1_ != '\0') {
                        local_227 = '\x01';
                      }
                      local_258 = &local_1b8;
                      FObjectReplicator::QueuePropertyRepNotify
                                (param_1,local_218,lVar11,local_226._2_4_);
                      cVar5 = local_228;
                      if (local_58 != 0) {
                        FMemory::Free();
                        cVar5 = local_228;
                      }
                    }
                    else {
                      *(undefined1 *)(plVar3 + 2) = 1;
                      param_5 = (undefined1 *)local_226._6_8_;
                      cVar5 = local_228;
                      if (local_58 != 0) {
                        FMemory::Free();
                        param_5 = (undefined1 *)local_226._6_8_;
                        cVar5 = local_228;
                      }
                    }
                    goto LAB_1423f63c9;
                  }
                }
              }
              goto LAB_1423f66eb;
            }
            lVar11 = *plVar3;
            if (lVar11 == 0) {
LAB_1423f64f7:
              lVar11 = 0;
            }
            else {
              lVar9 = FUN_14171c5d0();
              if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (!bVar4) goto LAB_1423f64f7;
            }
            if (lVar11 == 0) goto LAB_1423f66eb;
            uVar8 = 0;
            local_226[0] = '\0';
            local_248 = &local_c8;
            local_c8 = 0;
            local_250 = (longlong **)local_226;
            puStack_c0 = (undefined8 *)0x0;
            local_258 = (undefined8 *)CONCAT71(local_258._1_7_,local_226[1]);
            local_a8 = 0;
            uStack_a0 = 0;
            local_98 = 0xffffffff;
            local_88 = 0;
            local_80 = local_80 & 0xffffffff00000000;
            cVar6 = FUN_1423f8a40(param_1,local_188,param_3,plVar3);
            if (cVar6 == '\0') {
LAB_1423f66c2:
              local_80 = local_80 & 0xffffffff00000000;
              if (local_88 != 0) {
                FMemory::Free();
              }
              TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                        (&local_c8);
              goto LAB_1423f6726;
            }
            if (local_226[0] == '\0') {
              uVar7 = *(uint *)(lVar12 + 0xc);
              if ((int)uVar7 < (int)DAT_1469e91c4) {
                uVar10 = uVar7 & 0xffff;
                if ((int)uVar7 < 0) {
                  uVar7 = uVar7 + 0xffff;
                  uVar10 = uVar10 - 0x10000;
                }
                uVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                        (longlong)(int)uVar10 * 0x18;
              }
              if ((*(uint *)(uVar8 + 8) >> 0x1d & 1) != 0) {
                uVar8 = 1;
                goto LAB_1423f66c2;
              }
            }
            else {
              iVar1 = *(int *)(param_1 + 0x6a);
              *(int *)(param_1 + 0x6a) = iVar1 + 1;
              if (*(int *)((longlong)param_1 + 0x354) < iVar1 + 1) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::
                ResizeGrow(param_1 + 0x69,iVar1);
              }
              _Src = local_f8;
              puVar13 = (undefined4 *)((longlong)iVar1 * 0x70 + param_1[0x69]);
              *puVar13 = (int)plVar3[1];
              puVar13[1] = *param_3;
              *(undefined8 *)(puVar13 + 2) = 0;
              _Size = (size_t)local_f0;
              puVar13[4] = local_f0;
              if (local_f0 == 0) {
                puVar13[5] = 0;
              }
              else {
                TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar13 + 2,local_f0,0);
                _guard_xfg_dispatch_icall_nop(*(void **)(puVar13 + 2),_Src,_Size);
              }
              *(ulonglong *)(puVar13 + 6) = CONCAT44(uStack_e4,local_e8);
              *(undefined8 *)(puVar13 + 8) = 0;
              *(undefined8 *)(puVar13 + 10) = 0;
              *(undefined8 *)(puVar13 + 0x10) = 0;
              *(undefined8 *)(puVar13 + 0x12) = 0;
              puVar13[0x14] = 0xffffffff;
              puVar13[0x15] = 0;
              *(undefined8 *)(puVar13 + 0x18) = 0;
              puVar13[0x1a] = 0;
              TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::operator=
                        (puVar13 + 8,&local_c8);
              *param_5 = 1;
              *(uint *)(param_1 + 0x1d) = *(uint *)(param_1 + 0x1d) | 4;
              local_227 = '\x01';
            }
            local_80 = local_80 & 0xffffffff00000000;
            if (local_88 != 0) {
              FMemory::Free();
            }
            TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                      (&local_c8);
          }
LAB_1423f63c9:
          param_2 = local_1c8;
          local_248 = local_188;
          local_250 = &local_208;
          local_258 = (undefined8 *)local_1c8;
          cVar6 = FUN_1423f5960(param_1[0x1f],local_218,local_1e8);
          lVar12 = local_218;
          param_3 = local_1c0;
          plVar3 = local_208;
        } while( true );
      }
      if (cVar5 == '\0') {
        if (*(char *)(param_1 + 0x6b) == '\0') {
          *(undefined1 *)(param_1 + 0x6b) = 1;
          if ((longlong *)param_1[2] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[2] + 0x1d8))();
          }
        }
        lVar12 = local_218;
        cVar6 = (**(code **)(**(longlong **)(param_1[0x1e] + 0x58) + 0x3c8))
                          (*(longlong **)(param_1[0x1e] + 0x58),local_218);
        local_226[0] = '\0';
        local_240 = &local_227;
        local_238 = cVar6 != '\0' | 2;
        if ((*param_3 & 0x40) == 0) {
          local_238 = (uint)(cVar6 != '\0');
        }
        local_248 = (undefined8 *)local_226;
        local_258 = (undefined8 *)lVar12;
        local_250 = (longlong **)param_2;
        uVar8 = FUN_142735da0(param_1[0x56],param_1[0x1f],*param_1,param_1[0x58]);
        if ((char)uVar8 != '\0') {
          if (local_226[0] != '\0') {
            *param_5 = 1;
          }
          goto LAB_1423f60d2;
        }
      }
    }
  }
  return uVar8 & 0xffffffffffffff00;
}



// FUNCTION 1423f6780 FUN_1423f6780 body=943 status=ok
// SIG undefined FUN_1423f6780(void)

void FUN_1423f6780(LARGE_INTEGER param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  LARGE_INTEGER local_res8 [2];
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  LARGE_INTEGER local_38 [2];
  
  if ((*(byte *)(param_1.QuadPart + 0x30) & 0x60) == 0) {
    cVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1.QuadPart + 0x28) + 0x58) + 0x368))();
    if (cVar3 != '\0') {
      if ((*(byte *)((longlong)param_2 + 0xdd) & 2) != 0) {
        *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 0x80;
        return;
      }
LAB_1423f69a1:
      FUN_1423f40f0(param_1.QuadPart,param_2);
      return;
    }
    uVar7 = 0;
    if ((*(byte *)((longlong)param_2 + 0xdd) & 2) != 0) {
      plVar1 = (longlong *)param_2[1];
      uVar9 = (ulonglong)local_res8[0] >> 0x10;
      local_res8[0].QuadPart = local_res8[0].QuadPart & 0xffffffffffff0000;
      if ((undefined2 *)plVar1[1] < (undefined2 *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res8,2);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res8,2);
        }
      }
      else {
        local_res8[0].QuadPart._2_6_ = (int6)uVar9;
        local_res8[0].s.LowPart._0_2_ = *(undefined2 *)*plVar1;
        *plVar1 = *plVar1 + 2;
      }
      uVar9 = uVar7;
      if ((undefined2)local_res8[0].s.LowPart != 0) {
        do {
          local_res18[0] = 0;
          (**(code **)(*param_2 + 0x68))(param_2,local_res18);
          cVar3 = FUN_1425f4530(*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(param_1.QuadPart + 0x28) + 0x58) +
                                 0xe0));
          if ((cVar3 != '\0') &&
             (cVar3 = FNetGUIDCache::IsGUIDLoaded
                                (*(undefined8 *)
                                  (*(longlong *)(*(longlong *)(param_1.QuadPart + 0x28) + 0x58) +
                                  0xe0),local_res18), cVar3 == '\0')) {
            FUN_140ac3dd0(param_1.QuadPart + 0x100,local_res20,local_res18,0);
            local_38[0] = param_1;
            TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
            AddUniqueImpl<UGeometryCacheComponent_*_const_&>
                      (*(longlong *)(param_1.QuadPart + 0x28) + 0x17f0,local_38);
          }
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
        } while ((int)uVar8 < (int)(uint)(ushort)local_res8[0]._0_2_);
      }
    }
    if ((*(longlong *)(param_1.QuadPart + 0x68) == 0) &&
       ((*(byte *)((longlong)param_2 + 0xdc) & 1) != 0)) {
      lVar6 = param_2[0x15];
      (**(code **)(*param_2 + 0x68))(param_2,param_1.QuadPart + 0x70);
      param_2[0x15] = lVar6;
    }
    if ((*(int *)(param_1.QuadPart + 0x108) - *(int *)(param_1.QuadPart + 0x134) < 1) &&
       (*(int *)(param_1.QuadPart + 0xf0) < 1)) {
      lVar6 = *(longlong *)(param_1.QuadPart + 0x28);
      if (*(int *)(lVar6 + 0x16b0) != *(int *)(lVar6 + 0x16dc)) {
        lVar5 = *(longlong *)(lVar6 + 0x16e8);
        if (*(longlong *)(lVar6 + 0x16e8) == 0) {
          lVar5 = lVar6 + 0x16e0;
        }
        iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(lVar6 + 0x16f0) - 1U &
                                 (longlong)*(int *)(param_1.QuadPart + 0x70)) * 4);
        if (iVar4 != -1) {
          do {
            if (*(int *)((longlong)iVar4 * 0x20 + *(longlong *)(lVar6 + 0x16a8)) ==
                *(int *)(param_1.QuadPart + 0x70)) {
              if (iVar4 != -1) goto LAB_1423f69bc;
              break;
            }
            iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)(lVar6 + 0x16a8));
          } while (iVar4 != -1);
        }
      }
      cVar3 = (**(code **)(**(longlong **)(lVar6 + 0x58) + 0x3a8))
                        (*(longlong **)(lVar6 + 0x58),*(undefined4 *)(param_1.QuadPart + 0x70));
      if (cVar3 == '\0') goto LAB_1423f69a1;
    }
LAB_1423f69bc:
    lVar6 = *(longlong *)(param_1.QuadPart + 0x28);
    if (*(int *)(lVar6 + 0x16b0) != *(int *)(lVar6 + 0x16dc)) {
      lVar5 = *(longlong *)(lVar6 + 0x16e8);
      if (*(longlong *)(lVar6 + 0x16e8) == 0) {
        lVar5 = lVar6 + 0x16e0;
      }
      iVar4 = *(int *)(lVar5 + ((longlong)*(int *)(lVar6 + 0x16f0) - 1U &
                               (longlong)*(int *)(param_1.QuadPart + 0x70)) * 4);
      if (iVar4 != -1) {
        do {
          if (*(int *)((longlong)iVar4 * 0x20 + *(longlong *)(lVar6 + 0x16a8)) ==
              *(int *)(param_1.QuadPart + 0x70)) break;
          iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)(lVar6 + 0x16a8));
        } while (iVar4 != -1);
      }
    }
    if (*(int *)(param_1.QuadPart + 0xf0) == 0) {
      QueryPerformanceCounter(local_res8);
      *(double *)(param_1.QuadPart + 0xf8) =
           (double)local_res8[0].QuadPart * DAT_1468b02f8 + 16777216.0;
    }
    lVar6 = operator_new(0xe0);
    if (lVar6 != 0) {
      uVar7 = FInBunch::FInBunch(lVar6,param_2);
    }
    iVar4 = *(int *)(param_1.QuadPart + 0xf0);
    *(int *)(param_1.QuadPart + 0xf0) = iVar4 + 1;
    if (*(int *)(param_1.QuadPart + 0xf4) < iVar4 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                (param_1.QuadPart + 0xe8,iVar4);
    }
    *(ulonglong *)(*(longlong *)(param_1.QuadPart + 0xe8) + (longlong)iVar4 * 8) = uVar7;
    local_res8[0] = param_1;
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>
              (*(longlong *)(param_1.QuadPart + 0x28) + 0x17f0,local_res8);
    plVar1 = *(longlong **)(*(longlong *)(param_1.QuadPart + 0x28) + 0x68);
    if (plVar1 != (longlong *)0x0) {
      lVar6 = UPackageMapClient::GetPrivateStaticClass();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        (**(code **)(*plVar1 + 0x2f8))
                  (plVar1,param_1.QuadPart + 0x70,CONCAT71((int7)((ulonglong)(lVar6 + 0x88) >> 8),1)
                  );
      }
    }
  }
  return;
}



// FUNCTION 1423f6b30 RemoveSection body=83 status=ok
// SIG undefined RemoveSection(void)

void UMovieSceneTrack::RemoveSection(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/Channel.h",0x61,
             L"Pure virtual not implemented (%s)",L"UChannel::ReceivedBunch");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine/Channel.h",0x61,
             L"Pure virtual not implemented (%s)",L"UChannel::ReceivedBunch");
  return;
}



// FUNCTION 1423f6b90 FUN_1423f6b90 body=4309 status=ok
// SIG undefined FUN_1423f6b90(void)

void FUN_1423f6b90(longlong param_1,longlong *param_2)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  longlong *plVar16;
  uint uVar17;
  ushort *puVar18;
  char local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_4d8;
  undefined1 local_4d7 [3];
  uint local_4d4;
  int local_4d0;
  undefined4 local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0 [2];
  longlong local_4a8 [10];
  ushort *local_458;
  int local_450;
  longlong local_448 [34];
  undefined1 local_338 [8];
  undefined **local_330;
  undefined8 local_328;
  longlong *plStack_320;
  longlong local_318;
  undefined8 local_310;
  undefined **local_308;
  undefined8 local_300;
  longlong *plStack_2f8;
  longlong local_2f0;
  undefined8 local_2e8;
  undefined1 local_2e0 [16];
  undefined1 *local_2d0;
  undefined1 **local_2c8;
  undefined1 local_2c0 [16];
  undefined1 *local_2b0;
  undefined1 **local_2a8;
  undefined **local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined1 local_278 [8];
  undefined1 local_270 [8];
  undefined **local_268;
  longlong *local_260;
  byte local_23f;
  longlong local_1d8;
  byte local_180;
  longlong local_178;
  longlong local_168;
  undefined **local_158;
  longlong *local_150;
  longlong local_c8;
  byte local_70;
  longlong local_68;
  longlong local_58;
  
  if ((*(longlong **)(param_1 + 0x28) != (longlong *)0x0) && (*(char *)(param_1 + 0x68) != '\0')) {
    if (((longlong)(param_2[0x14] + 7U & 0xfffffffffffffff8) < 0x10) ||
       (*(char *)param_2[0x12] != '\x16')) {
                    /* WARNING: Could not recover jumptable at 0x0001423f6cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2f8))();
      return;
    }
    if (((char *)param_2[0x12])[1] == '\x01') {
      *(byte *)((longlong)param_2 + 0x29) = *(byte *)((longlong)param_2 + 0x29) & 0xef;
      *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x150) = 0;
    }
    else {
      *(byte *)((longlong)param_2 + 0x29) = *(byte *)((longlong)param_2 + 0x29) | 0x10;
      *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x150) = 1;
    }
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  cVar5 = (**(code **)(*param_2 + 0xa0))(param_2);
  if (cVar5 == '\0') {
    do {
      if ((*(longlong *)(param_1 + 0x28) == 0) ||
         (*(int *)(*(longlong *)(param_1 + 0x28) + 300) == 1)) break;
      plVar15 = (longlong *)param_2[1];
      if ((char *)plVar15[1] < (char *)*plVar15 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res8,1);
      }
      else {
        local_res8[0] = *(char *)*plVar15;
        *plVar15 = *plVar15 + 1;
      }
      if ((char)param_2[5] < '\0') break;
      lVar13 = *(longlong *)(param_1 + 0x28);
      lVar3 = param_2[0x15];
      lVar12 = *(longlong *)(*(longlong *)(lVar13 + 0x58) + 0x90);
      if ((lVar12 == 0) && (iVar14 = *(int *)(lVar13 + 0x1934), iVar14 != 2)) {
        if (local_res8[0] == '\x16') {
          if (iVar14 == 0) {
            iVar6 = rand();
            iVar7 = rand();
            iVar8 = rand();
            iVar9 = rand();
            iVar14 = 0xfe;
            if ((int)((float)iVar9 * 0.00778222) < 0xff) {
              iVar14 = (int)((float)iVar9 * 0.00778222);
            }
            uVar17 = 0xfe;
            if ((int)((float)iVar8 * 0.00778222) < 0xff) {
              uVar17 = (int)((float)iVar8 * 0.00778222);
            }
            uVar10 = 0xfe;
            if ((int)((float)iVar7 * 0.00778222) < 0xff) {
              uVar10 = (int)((float)iVar7 * 0.00778222);
            }
            uVar11 = 0xfe;
            if ((int)((float)iVar6 * 0.00778222) < 0xff) {
              uVar11 = (int)((float)iVar6 * 0.00778222);
            }
            *(uint *)(*(longlong *)(param_1 + 0x28) + 0x1938) =
                 ((iVar14 << 8 | uVar17) << 8 | uVar10) << 8 | uVar11;
            *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x1934) = 1;
            plVar16 = *(longlong **)(param_1 + 0x28);
            plVar15 = plVar16 + 0x327;
            lVar13 = *(longlong *)plVar16[0x2b0];
            if ((lVar13 != 0) && ((*(byte *)(lVar13 + 0x30) & 2) == 0)) {
              FUN_1423e4ec0(&local_268,lVar13,0);
              local_180 = local_180 | 0x20;
              local_268 = &PTR__scalar_deleting_destructor__1450868e8;
              local_4d8 = 0x17;
              if ((undefined1 *)local_260[1] < (undefined1 *)*local_260 + 1) {
                FBitWriter::Serialize(&local_268,&local_4d8,1);
              }
              else {
                local_4d8 = *(undefined1 *)*local_260;
                *local_260 = *local_260 + 1;
              }
              if ((undefined4 *)local_260[1] < (undefined4 *)*local_260 + 1) {
                (*(code *)local_268[10])(&local_268,plVar15,4);
                if ((local_23f & 0x10) != 0) {
                  FArchive::ByteSwap(&local_268,plVar15,4);
                }
              }
              else {
                *(undefined4 *)plVar15 = *(undefined4 *)*local_260;
                *local_260 = *local_260 + 4;
              }
              plVar15 = *(longlong **)plVar16[0x2b0];
              (**(code **)(*plVar15 + 0x2c8))(plVar15,local_270,&local_268,1);
              if (local_168 != 0) {
                FMemory::Free();
              }
              if (local_178 != 0) {
                FMemory::Free();
              }
              if (local_1d8 != 0) {
                FMemory::Free();
              }
              FArchive::~FArchive(&local_268);
              plVar16 = *(longlong **)(param_1 + 0x28);
            }
            (**(code **)(*plVar16 + 0x2c8))(plVar16,0);
            lVar13 = *(longlong *)(param_1 + 0x28);
            if (*(char *)(lVar13 + 0x193c) != '\0') {
              *(undefined1 *)(lVar13 + 0x193d) = *(undefined1 *)(lVar13 + 0x193b);
              *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x193e) =
                   *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0x193a);
              *(char *)(*(longlong *)(param_1 + 0x28) + 0x193f) =
                   (char)((uint)*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x1938) >> 8);
            }
          }
        }
        else if ((local_res8[0] == '\x18') && (iVar14 == 1)) {
          FString::PrintfImpl(&local_458,L"895fcf626f55798667e4e94cb7a636af %u",
                              *(undefined4 *)(lVar13 + 0x1938));
          uVar17 = 0xffffffff;
          puVar18 = &DAT_143f3eda8;
          if (local_450 != 0) {
            puVar18 = local_458;
          }
          uVar2 = *puVar18;
          while (puVar18 = puVar18 + 1, uVar2 != 0) {
            uVar17 = *(uint *)(&DAT_1464aaab0 + (ulonglong)((uVar2 ^ uVar17) & 0xff) * 4) ^
                     uVar17 >> 8;
            uVar17 = *(uint *)(&DAT_1464aaab0 + (ulonglong)((uVar2 >> 8 ^ uVar17) & 0xff) * 4) ^
                     uVar17 >> 8;
            uVar17 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(uVar17 & 0xff) * 4) ^ uVar17 >> 8;
            uVar17 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(uVar17 & 0xff) * 4) ^ uVar17 >> 8;
            uVar2 = *puVar18;
          }
          plVar15 = (longlong *)param_2[1];
          if ((uint *)plVar15[1] < (uint *)*plVar15 + 1) {
            (**(code **)(*param_2 + 0x50))(param_2,&local_4d4,4);
            if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_2,&local_4d4,4);
            }
          }
          else {
            local_4d4 = *(uint *)*plVar15;
            *plVar15 = *plVar15 + 4;
          }
          if (local_4d4 == ~uVar17) {
            *(undefined4 *)((longlong)*(longlong **)(param_1 + 0x28) + 0x1934) = 2;
            plVar15 = *(longlong **)(param_1 + 0x28);
            lVar13 = *(longlong *)plVar15[0x2b0];
            if ((lVar13 != 0) && ((*(byte *)(lVar13 + 0x30) & 2) == 0)) {
              FUN_1423e4ec0(&local_158,lVar13,0);
              local_70 = local_70 | 0x20;
              local_158 = &PTR__scalar_deleting_destructor__1450868e8;
              local_res20[0] = 0x19;
              if ((undefined1 *)local_150[1] < (undefined1 *)*local_150 + 1) {
                FBitWriter::Serialize(&local_158,local_res20,1);
              }
              else {
                local_res20[0] = *(undefined1 *)*local_150;
                *local_150 = *local_150 + 1;
              }
              plVar15 = *(longlong **)plVar15[0x2b0];
              (**(code **)(*plVar15 + 0x2c8))(plVar15,local_278,&local_158,1);
              if (local_58 != 0) {
                FMemory::Free();
              }
              if (local_68 != 0) {
                FMemory::Free();
              }
              if (local_c8 != 0) {
                FMemory::Free();
              }
              FArchive::~FArchive(&local_158);
              plVar15 = *(longlong **)(param_1 + 0x28);
            }
            (**(code **)(*plVar15 + 0x2c8))(plVar15,0);
          }
          else {
            (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2f8))();
          }
          if (local_458 != (ushort *)0x0) {
            FMemory::Free();
          }
        }
      }
      else if (local_res8[0] == '\x10') {
        if (lVar12 == 0) {
          plVar15 = (longlong *)param_2[1];
          if ((int *)plVar15[1] < (int *)*plVar15 + 1) {
            (**(code **)(*param_2 + 0x50))(param_2,&local_4d0,4);
            if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_2,&local_4d0,4);
            }
          }
          else {
            local_4d0 = *(int *)*plVar15;
            *plVar15 = *plVar15 + 4;
          }
          if ((((-1 < (char)param_2[5]) && (-1 < local_4d0)) &&
              (local_4d0 < *(int *)(*(longlong *)(param_1 + 0x28) + 0x1588))) &&
             (lVar13 = *(longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x1580) +
                        (longlong)local_4d0 * 8), lVar13 != 0)) {
            lVar12 = FUN_1428e6c20();
            if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if ((bVar4) && (*(longlong **)(lVar13 + 0x68) != (longlong *)0x0)) {
              plVar15 = *(longlong **)(param_1 + 0x28);
              plVar16 = (longlong *)plVar15[6];
              if (*(longlong **)(lVar13 + 0x68) == plVar16) {
                (**(code **)(*plVar15 + 0x2f8))(plVar15);
              }
              else if (plVar16 != (longlong *)0x0) {
                (**(code **)(*plVar16 + 0xd30))(plVar16,lVar13);
              }
            }
          }
        }
      }
      else if (local_res8[0] == '\x14') {
        plVar15 = (longlong *)param_2[1];
        local_4a8[0] = 0;
        local_4a8[1] = 0;
        if ((undefined1 *)plVar15[1] < (undefined1 *)*plVar15 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,local_res18,1);
        }
        else {
          local_res18[0] = *(undefined1 *)*plVar15;
          *plVar15 = *plVar15 + 1;
        }
        FUN_14158ce90(param_2,local_4a8);
        if (-1 < (char)param_2[5]) {
          lVar12 = *(longlong *)(param_1 + 0x28);
          lVar13 = *(longlong *)(*(longlong *)(lVar12 + 0x58) + 0xd0);
          if ((lVar13 == 0) || (plVar15 = *(longlong **)(lVar13 + 400), plVar15 == (longlong *)0x0))
          {
            lVar13 = FUN_142876190(DAT_146b17150);
            if ((lVar13 == 0) ||
               (plVar15 = *(longlong **)(lVar13 + 0x240), plVar15 == (longlong *)0x0))
            goto LAB_1423f737f;
            lVar12 = *(longlong *)(param_1 + 0x28);
          }
          (**(code **)(*plVar15 + 0x2f8))(plVar15,lVar12,local_res18[0],local_4a8);
        }
LAB_1423f737f:
        if (local_4a8[0] != 0) {
          FMemory::Free();
        }
      }
      else if (local_res8[0] == '\x13') {
        local_4a8[2] = 0;
        local_4a8[3] = 0;
        FUN_14158ce90(param_2,local_4a8 + 2);
        if (-1 < (char)param_2[5]) {
          if (local_4a8[2] != 0) {
            FMemory::Free();
          }
          break;
        }
        if (local_4a8[2] != 0) {
          FMemory::Free();
        }
      }
      else {
        plVar15 = *(longlong **)(*(longlong *)(lVar13 + 0x58) + 0x168);
        (**(code **)(*plVar15 + 0x18))(plVar15,lVar13,local_res8[0],param_2);
      }
      if (((longlong)(int)lVar3 == param_2[0x15]) && (-1 < (char)param_2[5])) {
        switch(local_res8[0]) {
        case '\0':
          plVar15 = (longlong *)param_2[1];
          local_448[2] = 0;
          local_448[3] = 0;
          local_448[0] = 0;
          local_448[1] = 0;
          if ((undefined4 *)plVar15[1] < (undefined4 *)*plVar15 + 1) {
            (**(code **)(*param_2 + 0x50))(param_2,&local_4cc,4);
            if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_2,&local_4cc,4);
            }
          }
          else {
            local_4cc = *(undefined4 *)*plVar15;
            *plVar15 = *plVar15 + 4;
          }
          FUN_14158ce90(param_2,local_448 + 2);
          FUN_14158ce90(param_2,local_448);
          if (local_448[0] != 0) {
            FMemory::Free();
          }
          if (local_448[2] != 0) {
            FMemory::Free();
          }
          break;
        case '\x01':
          local_448[8] = 0;
          local_448[9] = 0;
          local_448[6] = 0;
          local_448[7] = 0;
          local_448[4] = 0;
          local_448[5] = 0;
          FUN_14158ce90(param_2,local_448 + 8);
          FUN_14158ce90(param_2,local_448 + 6);
          FUN_14158ce90(param_2,local_448 + 4);
          if (local_448[4] != 0) {
            FMemory::Free();
          }
          if (local_448[6] != 0) {
            FMemory::Free();
          }
          if (local_448[8] != 0) {
            FMemory::Free();
          }
          break;
        case '\x02':
          plVar15 = (longlong *)param_2[1];
          if ((undefined4 *)plVar15[1] < (undefined4 *)*plVar15 + 1) {
            (**(code **)(*param_2 + 0x50))(param_2,&local_4c8,4);
            if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_2,&local_4c8,4);
            }
          }
          else {
            local_4c8 = *(undefined4 *)*plVar15;
            *plVar15 = *plVar15 + 4;
          }
          break;
        case '\x03':
          local_448[10] = 0;
          local_448[0xb] = 0;
          FUN_14158ce90(param_2,local_448 + 10);
          if (local_448[10] != 0) {
            FMemory::Free();
          }
          break;
        case '\x04':
          plVar15 = (longlong *)param_2[1];
          if ((undefined4 *)plVar15[1] < (undefined4 *)*plVar15 + 1) {
            (**(code **)(*param_2 + 0x50))(param_2,&local_4c4,4);
            if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_2,&local_4c4,4);
            }
          }
          else {
            local_4c4 = *(undefined4 *)*plVar15;
            *plVar15 = *plVar15 + 4;
          }
          break;
        case '\x05':
          local_448[0x10] = 0;
          local_448[0x11] = 0;
          local_330 = &PTR_FUN_143f740c8;
          local_448[0xe] = 0;
          local_328 = 0;
          plStack_320 = (longlong *)0x0;
          local_448[0xf] = 0;
          local_318 = 0;
          local_310 = 0;
          local_448[0xc] = 0;
          local_448[0xd] = 0;
          FUN_14158ce90(param_2,local_448 + 0x10);
          FUN_14158ce90(param_2,local_448 + 0xe);
          FUN_1425da060(param_2,&local_330);
          FUN_14158ce90(param_2,local_448 + 0xc);
          if (local_448[0xc] != 0) {
            FMemory::Free();
          }
          local_330 = &PTR_FUN_143f740c8;
          if (local_318 != 0) {
            FMemory::Free();
          }
          plVar15 = plStack_320;
          local_330 = &PTR_FUN_143f73d18;
          if (plStack_320 != (longlong *)0x0) {
            LOCK();
            plVar16 = plStack_320 + 1;
            lVar13 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
              (**(code **)*plStack_320)(plStack_320);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              iVar14 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (**(code **)(*plVar15 + 8))(plVar15,1);
              }
            }
          }
          if (local_448[0xe] != 0) {
            FMemory::Free();
          }
          if (local_448[0x10] != 0) {
            FMemory::Free();
          }
          break;
        case '\x06':
          local_448[0x12] = 0;
          local_448[0x13] = 0;
          FUN_14158ce90(param_2,local_448 + 0x12);
          if (local_448[0x12] != 0) {
            FMemory::Free();
          }
          break;
        default:
          plVar15 = *(longlong **)(param_1 + 0x28);
          goto LAB_1423f7c0d;
        case '\t':
        case '\x15':
        case '\x19':
        case '\x1a':
        case '\x1c':
        case '\x1d':
        case ' ':
          break;
        case '\n':
          local_448[0x14] = 0;
          local_448[0x15] = 0;
          local_308 = &PTR_FUN_143f740c8;
          local_2f0 = 0;
          local_300 = 0;
          plStack_2f8 = (longlong *)0x0;
          local_2e8 = 0;
          FUN_14158ce90(param_2,local_448 + 0x14);
          FUN_1425da060(param_2,&local_308);
          local_308 = &PTR_FUN_143f740c8;
          if (local_2f0 != 0) {
            FMemory::Free();
          }
          plVar15 = plStack_2f8;
          local_308 = &PTR_FUN_143f73d18;
          if (plStack_2f8 != (longlong *)0x0) {
            LOCK();
            plVar16 = plStack_2f8 + 1;
            lVar13 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)lVar13 == 1) {
              (**(code **)*plStack_2f8)(plStack_2f8);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              iVar14 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (**(code **)(*plVar15 + 8))(plVar15,1);
              }
            }
          }
          if (local_448[0x14] != 0) {
            FMemory::Free();
          }
          break;
        case '\f':
          local_448[0x16] = 0;
          local_448[0x17] = 0;
          FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_2e0,param_2);
          local_2d0 = local_2e0;
          local_2c8 = &local_2d0;
          FUN_141661f40(&local_2d0,local_448 + 0x16);
          FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_2e0);
          break;
        case '\r':
          local_448[0x18] = 0;
          local_448[0x19] = 0;
          FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_2c0,param_2);
          local_2b0 = local_2c0;
          local_2a8 = &local_2b0;
          FUN_141661f40(&local_2b0,local_448 + 0x18);
          FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_2c0);
          break;
        case '\x0f':
          plVar15 = (longlong *)param_2[1];
          if ((undefined4 *)plVar15[1] < (undefined4 *)*plVar15 + 1) {
            (**(code **)(*param_2 + 0x50))(param_2,&local_4c0,4);
            if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_2,&local_4c0,4);
            }
          }
          else {
            local_4c0 = *(undefined4 *)*plVar15;
            *plVar15 = *plVar15 + 4;
          }
          break;
        case '\x10':
          plVar15 = (longlong *)param_2[1];
          if ((undefined4 *)plVar15[1] < (undefined4 *)*plVar15 + 1) {
            (**(code **)(*param_2 + 0x50))(param_2,&local_4bc,4);
            if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_2,&local_4bc,4);
            }
          }
          else {
            local_4bc = *(undefined4 *)*plVar15;
            *plVar15 = *plVar15 + 4;
          }
          break;
        case '\x11':
          local_448[0x1a] = 0;
          local_448[0x1b] = 0;
          FUN_14158ce90(param_2,local_448 + 0x1a);
          if (local_448[0x1a] != 0) {
            FMemory::Free();
          }
          break;
        case '\x12':
          local_4b0[0] = 0;
          local_448[0x1c] = 0;
          local_448[0x1d] = 0;
          (**(code **)(*param_2 + 0x68))(param_2,local_4b0);
          FUN_14158ce90(param_2,local_448 + 0x1c);
          if (local_448[0x1c] != 0) {
            FMemory::Free();
          }
          break;
        case '\x16':
          plVar15 = (longlong *)param_2[1];
          if ((undefined1 *)plVar15[1] < (undefined1 *)*plVar15 + 1) {
            (**(code **)(*param_2 + 0x50))(param_2,local_4d7,1);
          }
          else {
            local_4d7[0] = *(undefined1 *)*plVar15;
            *plVar15 = *plVar15 + 1;
          }
          break;
        case '\x17':
          plVar15 = (longlong *)param_2[1];
          if ((undefined4 *)plVar15[1] < (undefined4 *)*plVar15 + 1) {
            (**(code **)(*param_2 + 0x50))(param_2,&local_4b8,4);
            if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_2,&local_4b8,4);
            }
          }
          else {
            local_4b8 = *(undefined4 *)*plVar15;
            *plVar15 = *plVar15 + 4;
          }
          break;
        case '\x18':
          FUN_1423f5df0(param_2,local_338);
          break;
        case '\x1b':
          local_448[0x1e] = 0;
          local_448[0x1f] = 0;
          local_2a0 = &PTR_FUN_143f740c8;
          local_288 = 0;
          local_298 = 0;
          uStack_290 = 0;
          local_280 = 0;
          FUN_14158ce90(param_2,local_448 + 0x1e);
          FUN_1425da060(param_2,&local_2a0);
          plVar15 = (longlong *)param_2[1];
          if ((undefined4 *)plVar15[1] < (undefined4 *)*plVar15 + 1) {
            (**(code **)(*param_2 + 0x50))(param_2,&local_4b4,4);
            if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(param_2,&local_4b4,4);
            }
          }
          else {
            local_4b4 = *(undefined4 *)*plVar15;
            *plVar15 = *plVar15 + 4;
          }
          FUN_1404bf980(&local_2a0);
          if (local_448[0x1e] != 0) {
            FMemory::Free();
          }
          break;
        case '\x1e':
          local_448[0x20] = 0;
          local_448[0x21] = 0;
          FUN_14158ce90(param_2,local_448 + 0x20);
          if (local_448[0x20] != 0) {
            FMemory::Free();
          }
          break;
        case '\x1f':
          local_4a8[4] = 0;
          local_4a8[5] = 0;
          FUN_14158ce90(param_2,local_4a8 + 4);
          if (local_4a8[4] != 0) {
            FMemory::Free();
          }
          break;
        case '!':
          local_4a8[6] = 0;
          local_4a8[7] = 0;
          FUN_14158ce90(param_2,local_4a8 + 6);
          if (local_4a8[6] != 0) {
            FMemory::Free();
          }
          break;
        case '\"':
          local_4a8[8] = 0;
          local_4a8[9] = 0;
          FUN_14158ce90(param_2,local_4a8 + 8);
          if (local_4a8[8] != 0) {
            FMemory::Free();
          }
        }
      }
      if (((char)param_2[5] < '\0') ||
         (cVar5 = (**(code **)(*param_2 + 0xa0))(param_2), cVar5 != '\0')) break;
    } while( true );
  }
  if (((char)param_2[5] < '\0') &&
     (plVar15 = *(longlong **)(param_1 + 0x28), plVar15 != (longlong *)0x0)) {
LAB_1423f7c0d:
    (**(code **)(*plVar15 + 0x2f8))();
  }
  return;
}



// FUNCTION 1423f7d00 FUN_1423f7d00 body=1053 status=ok
// SIG undefined FUN_1423f7d00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1423f7d00(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  int *piVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *plStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if ((param_1[2] != 0) && (*param_1 != 0)) {
    FUN_142737650(param_1[0x56],param_1[0x58],param_2);
    iVar14 = (int)param_1[4] + -1;
    if (-1 < iVar14) {
      uVar12 = (ulonglong)iVar14;
      lVar13 = uVar12 * 0x30;
LAB_1423f7da0:
      lVar11 = *(longlong *)(lVar13 + 8 + param_1[3]);
      while (lVar11 != 0) {
        if (*(int *)(lVar11 + 0x24) < param_2) {
          *(undefined8 *)(lVar13 + 8 + param_1[3]) = *(undefined8 *)(lVar11 + 8);
          plVar9 = *(longlong **)(lVar11 + 0x18);
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar9 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar10 = (int *)((longlong)plVar9 + 0xc);
              iVar8 = *piVar10;
              *piVar10 = *piVar10 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          FMemory::operator_delete(lVar11);
          lVar11 = *(longlong *)(lVar13 + 8 + param_1[3]);
        }
        else {
          if (*(int *)(lVar11 + 0x20) <= param_2) {
            if (*(longlong *)(lVar11 + 0x10) != 0) {
              if ((int)param_1[6] == *(int *)((longlong)param_1 + 0x5c)) goto LAB_1423f7e8e;
              plVar9 = (longlong *)param_1[0xd];
              if ((longlong *)param_1[0xd] == (longlong *)0x0) {
                plVar9 = param_1 + 0xc;
              }
              iVar8 = *(int *)((longlong)plVar9 + ((longlong)(int)param_1[0xe] - 1U & uVar12) * 4);
              if (iVar8 == -1) goto LAB_1423f7e8e;
              goto LAB_1423f7e70;
            }
            if ((*(byte *)(lVar13 + 0x28 + param_1[3]) & 2) == 0) goto LAB_1423f8061;
            if ((int)param_1[6] == *(int *)((longlong)param_1 + 0x5c)) goto LAB_1423f7fee;
            plVar9 = (longlong *)param_1[0xd];
            if ((longlong *)param_1[0xd] == (longlong *)0x0) {
              plVar9 = param_1 + 0xc;
            }
            iVar8 = *(int *)((longlong)plVar9 + ((longlong)(int)param_1[0xe] - 1U & uVar12) * 4);
            if (iVar8 == -1) goto LAB_1423f7fee;
            goto LAB_1423f7fd0;
          }
          lVar11 = *(longlong *)(lVar11 + 8);
        }
      }
      goto LAB_1423f80ca;
    }
  }
  return;
  while (iVar8 = piVar10[6], iVar8 != -1) {
LAB_1423f7e70:
    piVar10 = (int *)((longlong)iVar8 * 0x20 + param_1[5]);
    if (*piVar10 == iVar14) {
      if (iVar8 != -1) goto LAB_1423f7e90;
      break;
    }
  }
LAB_1423f7e8e:
  piVar10 = (int *)0x0;
LAB_1423f7e90:
  piVar2 = piVar10 + 2;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  if (piVar2 != (int *)&local_78) {
    piVar2[0] = 0;
    piVar2[1] = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(piVar10 + 4,&plStack_70);
    plVar9 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar3 = (int *)((longlong)plVar9 + 0xc);
        iVar8 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plStack_70 + 8))(plStack_70,1);
        }
      }
    }
  }
  plVar9 = *(longlong **)(lVar11 + 0x18);
  uVar5 = *(undefined8 *)(lVar11 + 0x10);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_88 = uVar5;
  plStack_80 = plVar9;
  if ((int *)&local_88 != piVar2) {
    local_88 = *(undefined8 *)piVar2;
    plStack_80 = *(longlong **)(piVar10 + 4);
    *(undefined8 *)piVar2 = uVar5;
    *(longlong **)(piVar10 + 4) = plVar9;
    local_58 = uVar5;
    plStack_50 = plVar9;
  }
  plVar9 = plStack_80;
  if (plStack_80 == (longlong *)0x0) goto LAB_1423f8061;
  LOCK();
  plVar1 = plStack_80 + 1;
  lVar6 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar6 != 1) goto LAB_1423f8061;
  (**(code **)*plStack_80)(plStack_80);
  LOCK();
  piVar10 = (int *)((longlong)plVar9 + 0xc);
  iVar8 = *piVar10;
  *piVar10 = *piVar10 + -1;
  UNLOCK();
  plVar9 = plStack_80;
  goto joined_r0x0001423f7f7b;
  while (iVar8 = piVar10[6], iVar8 != -1) {
LAB_1423f7fd0:
    piVar10 = (int *)((longlong)iVar8 * 0x20 + param_1[5]);
    if (*piVar10 == iVar14) {
      if (iVar8 != -1) goto LAB_1423f7ff0;
      break;
    }
  }
LAB_1423f7fee:
  piVar10 = (int *)0x0;
LAB_1423f7ff0:
  piVar2 = piVar10 + 2;
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  if (piVar2 == (int *)&local_68) goto LAB_1423f8061;
  piVar2[0] = 0;
  piVar2[1] = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(piVar10 + 4,&plStack_60);
  plVar9 = plStack_60;
  if (plStack_60 == (longlong *)0x0) goto LAB_1423f8061;
  LOCK();
  plVar1 = plStack_60 + 1;
  lVar6 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar6 != 1) goto LAB_1423f8061;
  (**(code **)*plStack_60)(plStack_60);
  LOCK();
  piVar10 = (int *)((longlong)plVar9 + 0xc);
  iVar8 = *piVar10;
  *piVar10 = *piVar10 + -1;
  UNLOCK();
  plVar9 = plStack_60;
joined_r0x0001423f7f7b:
  if (iVar8 == 1) {
    (**(code **)(*plVar9 + 8))(plVar9,1);
  }
LAB_1423f8061:
  do {
    plVar9 = *(longlong **)(lVar11 + 0x18);
    lVar6 = *(longlong *)(lVar11 + 8);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar10 = (int *)((longlong)plVar9 + 0xc);
        iVar8 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    FMemory::operator_delete(lVar11);
    lVar11 = lVar6;
  } while (lVar6 != 0);
  *(undefined8 *)(lVar13 + 8 + param_1[3]) = 0;
  puVar4 = (uint *)(lVar13 + 0x28 + param_1[3]);
  *puVar4 = *puVar4 | 8;
LAB_1423f80ca:
  uVar12 = uVar12 - 1;
  lVar13 = lVar13 + -0x30;
  iVar14 = iVar14 + -1;
  if (iVar14 < 0) {
    return;
  }
  goto LAB_1423f7da0;
}



// FUNCTION 1423f8120 FUN_1423f8120 body=810 status=ok
// SIG undefined FUN_1423f8120(void)

void FUN_1423f8120(longlong param_1,uint param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  uint *puVar7;
  int *piVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  int *local_res8;
  int local_res10 [2];
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  uint uStack_80;
  int iStack_7c;
  undefined1 local_78 [16];
  longlong *local_68;
  undefined2 local_60;
  longlong *local_58;
  uint uStack_50;
  uint uStack_4c;
  uint *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  for (lVar5 = *(longlong *)(param_1 + 0x58); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0xc0)) {
    if ((*(uint *)(lVar5 + 0xe4) == param_2) && ((*(byte *)(lVar5 + 0xe8) & 1) == 0)) {
      FUN_1425cc170(*(undefined8 *)(param_1 + 0x28),lVar5,0);
    }
  }
  puVar10 = (uint *)0x0;
  plVar1 = (longlong *)(param_1 + 0x98);
  iVar9 = *(int *)(param_1 + 0xc0);
  puStack_48 = (uint *)(param_1 + 0xa8);
  local_98 = 0;
  uStack_94 = 1;
  local_88._4_4_ = 0;
  uStack_80 = 0;
  if (iVar9 != 0) {
    puVar7 = *(uint **)(param_1 + 0xb8);
    if (*(uint **)(param_1 + 0xb8) == (uint *)0x0) {
      puVar7 = puStack_48;
    }
    uVar12 = *puVar7;
    puVar6 = puVar10;
    puVar11 = puVar10;
    while (uVar12 == 0) {
      iVar3 = (int)puVar6;
      uStack_80 = (int)puVar11 + 0x20;
      puVar11 = (uint *)(ulonglong)uStack_80;
      local_98 = iVar3 + 1;
      puVar6 = (uint *)(ulonglong)local_98;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar3) goto LAB_1423f821f;
      uVar12 = puVar7[(longlong)iVar3 + 1];
    }
    uStack_94 = -uVar12 & uVar12;
    iVar3 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar3 = 0x20;
    }
    else {
      iVar3 = 0x1f - iVar3;
    }
    local_88._4_4_ = (uStack_80 - iVar3) + 0x1f;
    if (iVar9 < local_88._4_4_) {
LAB_1423f821f:
      local_88._4_4_ = iVar9;
    }
  }
  auStack_40._4_4_ = local_88._4_4_;
  auStack_40._0_4_ = 0xffffffff;
  auStack_40._8_4_ = uStack_80;
  auStack_40._12_4_ = iStack_7c;
  uStack_50 = local_98;
  uStack_4c = uStack_94;
  local_60 = 0;
  local_30._0_4_ = SUB84(plVar1,0);
  local_30._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_80 = 0xffffffff;
  iStack_7c = local_88._4_4_;
  uStack_90 = local_98;
  uStack_8c = uStack_94;
  local_78._8_4_ = (undefined4)local_30;
  local_78._0_8_ = auStack_40._8_8_;
  local_78._12_4_ = local_30._4_4_;
  bVar2 = local_88._4_4_ < *(int *)(param_1 + 0xc0);
  local_68 = plVar1;
  local_58 = plVar1;
  local_30 = plVar1;
  local_88 = puStack_48;
  if (bVar2) {
    do {
      FUN_1423f7d00(*(undefined8 *)((longlong)iStack_7c * 0x20 + 8 + *plVar1),param_2);
      uStack_80 = uStack_80 & ~uStack_8c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
    } while (iStack_7c < (int)local_88[6]);
    if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
      TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
    }
  }
  uVar12 = param_2 & 0x8000003f;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xffffffc0) + 1;
  }
  if (*(int *)(param_1 + 0x1d8) != *(int *)(param_1 + 0x204)) {
    lVar5 = *(longlong *)(param_1 + 0x210);
    if (*(longlong *)(param_1 + 0x210) == 0) {
      lVar5 = param_1 + 0x208;
    }
    uVar4 = *(uint *)(lVar5 + ((longlong)*(int *)(param_1 + 0x218) - 1U & (longlong)(int)uVar12) * 4
                     );
    if (uVar4 != 0xffffffff) {
      do {
        puVar7 = (uint *)(*(longlong *)(param_1 + 0x1d0) + (longlong)(int)uVar4 * 0x28);
        if (*(uint *)(*(longlong *)(param_1 + 0x1d0) + (longlong)(int)uVar4 * 0x28) == uVar12) {
          if (uVar4 != 0xffffffff) goto LAB_1423f8363;
          break;
        }
        uVar4 = puVar7[8];
      } while (uVar4 != 0xffffffff);
    }
  }
  puVar7 = puVar10;
LAB_1423f8363:
  puVar6 = puVar7 + 2;
  if (puVar7 == (uint *)0x0) {
    puVar6 = puVar10;
  }
  if ((puVar6 != (uint *)0x0) && (*puVar6 == param_2)) {
    while ((iVar9 = (int)puVar10, -1 < iVar9 && (iVar9 < (int)puVar6[4]))) {
      plVar1 = (longlong *)(param_1 + 0x180);
      local_res8 = (int *)(*(longlong *)(puVar6 + 2) + (longlong)iVar9 * 4);
      if (*(int *)(param_1 + 0x188) != *(int *)(param_1 + 0x1b4)) {
        lVar5 = *(longlong *)(param_1 + 0x1c0);
        if (*(longlong *)(param_1 + 0x1c0) == 0) {
          lVar5 = param_1 + 0x1b8;
        }
        iVar3 = *(int *)(lVar5 + ((longlong)*(int *)(param_1 + 0x1c8) - 1U & (longlong)*local_res8)
                                 * 4);
        if (iVar3 != -1) {
          do {
            piVar8 = (int *)((longlong)iVar3 * 0x10 + *plVar1);
            if (*piVar8 == *local_res8) {
              if ((iVar3 != -1) && (piVar8 != (int *)0x0)) goto LAB_1423f8425;
              break;
            }
            iVar3 = piVar8[2];
          } while (iVar3 != -1);
        }
      }
      FUN_14058d450(plVar1,local_res10,&local_res8,0);
      piVar8 = (int *)((longlong)local_res10[0] * 0x10 + *plVar1);
LAB_1423f8425:
      piVar8[1] = -1;
      puVar10 = (uint *)(ulonglong)(iVar9 + 1);
    }
  }
  return;
}



// FUNCTION 1423f8450 ReceivedNak body=92 status=ok
// SIG undefined ReceivedNak(void)

void UChannel::ReceivedNak(longlong param_1,int param_2)

{
  longlong lVar1;
  
  for (lVar1 = *(longlong *)(param_1 + 0x58); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0xc0)) {
    if ((*(int *)(lVar1 + 0xe4) == param_2) && ((*(byte *)(lVar1 + 0xe8) & 1) == 0)) {
      FUN_1425cc170(*(undefined8 *)(param_1 + 0x28),lVar1,0);
    }
  }
  return;
}



// FUNCTION 1423f84b0 FUN_1423f84b0 body=1411 status=ok
// SIG undefined FUN_1423f84b0(void)

undefined8 FUN_1423f84b0(longlong *param_1,undefined8 *param_2,undefined1 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 *puVar6;
  byte bVar7;
  int iVar8;
  wchar_t *pwVar9;
  undefined8 *puVar10;
  undefined8 uVar12;
  bool bVar13;
  longlong local_28 [2];
  undefined8 *puVar11;
  
  bVar7 = *(byte *)((longlong)param_2 + 0xdc);
  if ((bVar7 & 0x10) != 0) {
    *(undefined4 *)(*(longlong *)(param_1[5] + 0x15a0) + (longlong)*(int *)(param_2 + 0x1a) * 4) =
         *(undefined4 *)(param_2 + 0x1b);
    bVar7 = *(byte *)((longlong)param_2 + 0xdc);
  }
  puVar10 = param_2;
  if ((bVar7 & 0x20) != 0) {
    puVar6 = (undefined8 *)param_1[0xc];
    puVar11 = (undefined8 *)0x0;
    puVar10 = (undefined8 *)0x0;
    if ((bVar7 & 0x40) == 0) {
      if (puVar6 != (undefined8 *)0x0) {
        iVar8 = *(int *)(param_2 + 0x1b);
        bVar13 = iVar8 == *(int *)(puVar6 + 0x1b) + 1;
        if ((bVar13) || (iVar8 == *(int *)(puVar6 + 0x1b))) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        bVar2 = *(byte *)((longlong)puVar6 + 0xdc);
        if ((bVar2 & 0x10) != 0) {
          bVar4 = bVar13;
        }
        if (((-1 < (char)bVar2) && (bVar4)) && (((bVar2 ^ bVar7) & 0x10) == 0)) {
          if (((*(byte *)((longlong)param_2 + 0xdd) & 1) == 0) &&
             (*(int *)(param_2 + 0x14) != *(int *)(param_2 + 0x15))) {
            FBitReader::AppendDataFromChecked
                      (puVar6,(longlong)(int)((longlong)param_2[0x15] >> 3) + param_2[0x12]);
            puVar6 = (undefined8 *)param_1[0xc];
            iVar8 = *(int *)(param_2 + 0x1b);
          }
          *(int *)(puVar6 + 0x1b) = iVar8;
          local_28[0] = 0;
          if (-1 < *(char *)((longlong)param_2 + 0xdc)) {
            local_28[1] = 0x18;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
            uVar12 = 0x30;
            pwVar9 = L"Received Partial Bunch.";
            goto LAB_1423f890a;
          }
          local_28[1] = 0x19;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
          lVar5 = local_28[0];
          FGenericPlatformString::Memcpy(local_28[0],L"Completed Partial Bunch.",0x32);
          if (lVar5 != 0) {
            FMemory::Free(lVar5);
          }
          puVar10 = (undefined8 *)param_1[0xc];
          *(byte *)((longlong)puVar10 + 0xdc) = *(byte *)((longlong)puVar10 + 0xdc) | 0x80;
          pbVar1 = (byte *)(param_1[0xc] + 0xdc);
          *pbVar1 = *pbVar1 ^ (*(byte *)(param_1[0xc] + 0xdc) ^ *(byte *)((longlong)param_2 + 0xdc))
                              & 2;
          pbVar1 = (byte *)(param_1[0xc] + 0xdc);
          *pbVar1 = *pbVar1 ^ (*(byte *)(param_1[0xc] + 0xdc) ^ *(byte *)((longlong)param_2 + 0xdc))
                              & 4;
          pbVar1 = (byte *)(param_1[0xc] + 0xdc);
          *pbVar1 = *pbVar1 ^ (*(byte *)(param_1[0xc] + 0xdc) ^ *(byte *)((longlong)param_2 + 0xdc))
                              & 8;
          pbVar1 = (byte *)(param_1[0xc] + 0xdd);
          *pbVar1 = *pbVar1 ^ (*(byte *)(param_1[0xc] + 0xdd) ^ *(byte *)((longlong)param_2 + 0xdd))
                              & 2;
          goto LAB_1423f894a;
        }
      }
      *param_3 = 1;
      puVar6 = (undefined8 *)param_1[0xc];
      if (puVar6 != (undefined8 *)0x0) {
        if ((*(byte *)((longlong)puVar6 + 0xdc) & 0x10) != 0) {
          return 0;
        }
        (**(code **)*puVar6)(puVar6,1);
        param_1[0xc] = 0;
      }
    }
    else {
      if (puVar6 != (undefined8 *)0x0) {
        if ((-1 < (char)*(byte *)((longlong)puVar6 + 0xdc)) &&
           ((*(byte *)((longlong)puVar6 + 0xdc) & 0x10) != 0)) goto LAB_1423f89eb;
        (**(code **)*puVar6)(puVar6,1);
        param_1[0xc] = 0;
      }
      puVar6 = (undefined8 *)operator_new(0xe0);
      puVar10 = puVar11;
      if (puVar6 != (undefined8 *)0x0) {
        FNetBitReader::FNetBitReader(puVar6,0,0,0);
        *puVar6 = &PTR__scalar_deleting_destructor__1450866f0;
        *(undefined4 *)(puVar6 + 0x17) = *(undefined4 *)(param_2 + 0x17);
        puVar6[0x18] = param_2[0x18];
        puVar6[0x19] = param_2[0x19];
        *(undefined4 *)(puVar6 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
        *(undefined4 *)((longlong)puVar6 + 0xd4) = *(undefined4 *)((longlong)param_2 + 0xd4);
        *(undefined4 *)(puVar6 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
        *(byte *)((longlong)puVar6 + 0xdc) =
             *(byte *)((longlong)puVar6 + 0xdc) ^
             (*(byte *)((longlong)puVar6 + 0xdc) ^ *(byte *)((longlong)param_2 + 0xdc)) & 1;
        bVar7 = (*(byte *)((longlong)puVar6 + 0xdc) ^ *(byte *)((longlong)param_2 + 0xdc)) & 2 ^
                *(byte *)((longlong)puVar6 + 0xdc);
        *(byte *)((longlong)puVar6 + 0xdc) = bVar7;
        bVar7 = (bVar7 ^ *(byte *)((longlong)param_2 + 0xdc)) & 4 ^ bVar7;
        *(byte *)((longlong)puVar6 + 0xdc) = bVar7;
        bVar7 = (bVar7 ^ *(byte *)((longlong)param_2 + 0xdc)) & 8 ^ bVar7;
        *(byte *)((longlong)puVar6 + 0xdc) = bVar7;
        bVar7 = (bVar7 ^ *(byte *)((longlong)param_2 + 0xdc)) & 0x10 ^ bVar7;
        *(byte *)((longlong)puVar6 + 0xdc) = bVar7;
        bVar7 = (bVar7 ^ *(byte *)((longlong)param_2 + 0xdc)) & 0x20 ^ bVar7;
        *(byte *)((longlong)puVar6 + 0xdc) = bVar7;
        bVar7 = (bVar7 ^ *(byte *)((longlong)param_2 + 0xdc)) & 0x40 ^ bVar7;
        *(byte *)((longlong)puVar6 + 0xdc) = bVar7;
        *(byte *)((longlong)puVar6 + 0xdc) =
             (bVar7 ^ *(byte *)((longlong)param_2 + 0xdc)) & 0x7f ^
             *(byte *)((longlong)param_2 + 0xdc);
        *(byte *)((longlong)puVar6 + 0xdd) =
             *(byte *)((longlong)puVar6 + 0xdd) ^
             (*(byte *)((longlong)puVar6 + 0xdd) ^ *(byte *)((longlong)param_2 + 0xdd)) & 1;
        bVar7 = (*(byte *)((longlong)puVar6 + 0xdd) ^ *(byte *)((longlong)param_2 + 0xdd)) & 2 ^
                *(byte *)((longlong)puVar6 + 0xdd);
        *(byte *)((longlong)puVar6 + 0xdd) = bVar7;
        *(byte *)((longlong)puVar6 + 0xdd) =
             (bVar7 ^ *(byte *)((longlong)param_2 + 0xdd)) & 4 ^ bVar7;
        FUN_1416951c0(puVar6,*(undefined4 *)((longlong)param_2 + 0x54));
        FArchiveState::SetGameNetVer(puVar6,*(undefined4 *)(param_2 + 0xb));
        puVar6[0x16] = param_2[0x16];
        puVar6[7] = 0x400;
        puVar6[0x15] = 0;
        puVar10 = puVar6;
      }
      param_1[0xc] = (longlong)puVar10;
      if (((*(byte *)((longlong)param_2 + 0xdd) & 1) == 0) &&
         (*(int *)(param_2 + 0x14) != *(int *)(param_2 + 0x15))) {
        FBitReader::AppendDataFromChecked
                  (puVar10,(longlong)(int)((longlong)param_2[0x15] >> 3) + param_2[0x12]);
        local_28[0] = 0;
        local_28[1] = 0x1c;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
        uVar12 = 0x38;
        pwVar9 = L"Received new partial bunch.";
      }
      else {
        local_28[0] = 0;
        local_28[1] = 0x38;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
        uVar12 = 0x70;
        pwVar9 = L"Received New partial bunch. It only contained NetGUIDs.";
      }
LAB_1423f890a:
      lVar5 = local_28[0];
      FGenericPlatformString::Memcpy(local_28[0],pwVar9,uVar12);
      puVar10 = puVar11;
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
    }
LAB_1423f894a:
    if ((((*(byte *)(param_1[5] + 0xa4) & 1) == 0) && (param_1[0xc] != 0)) &&
       (0x80000 < (longlong)(*(longlong *)(param_1[0xc] + 0xa0) + 7U & 0xfffffffffffffff8)))
    goto LAB_1423f8977;
  }
  if (puVar10 == (undefined8 *)0x0) {
    return 0;
  }
  if ((*(byte *)((longlong)puVar10 + 0xdc) & 1) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(puVar10 + 0x17);
    uVar3 = *(undefined4 *)(param_2 + 0x17);
    *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 1;
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  if (((*(int *)((longlong)param_1 + 0x44) == 4) || ((int)param_1[7] != 0)) ||
     ((*(uint *)(param_1 + 6) & 1) != 0)) {
    if ((*(byte *)(param_1 + 6) & 2) == 0) {
      (**(code **)(*param_1 + 0x298))(param_1,puVar10);
    }
    bVar7 = *(byte *)((longlong)puVar10 + 0xdc);
    if ((bVar7 & 2) == 0) {
      return 0;
    }
    *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xfffffffb;
    *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | bVar7 & 4;
    FUN_1423e8eb0(param_1,0);
    return 1;
  }
  if ((*(byte *)((longlong)puVar10 + 0xdc) & 0x10) == 0) {
    if ((*(byte *)(param_1[5] + 0xa4) & 1) != 0) {
      *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 0x20;
      return 0;
    }
LAB_1423f89eb:
    *param_3 = 1;
    return 0;
  }
LAB_1423f8977:
  *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 0x80;
  return 0;
}



// FUNCTION 1423f8a40 FUN_1423f8a40 body=1314 status=ok
// SIG undefined FUN_1423f8a40(void)

undefined8
FUN_1423f8a40(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,char param_5,
             undefined1 *param_6,longlong param_7)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 local_res20 [8];
  undefined8 in_stack_fffffffffffffef8;
  uint uVar15;
  undefined1 local_e8 [8];
  undefined8 *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  char local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined *local_88;
  undefined1 *puStack_80;
  undefined *local_78;
  undefined1 *puStack_70;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  
  uVar15 = (uint)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
  cVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xf0) + 0x58) + 0x368))();
  plVar14 = *(longlong **)(param_1 + 0x10);
  local_68 = *(undefined8 *)(*param_4 + 0x18);
  local_a0 = plVar14;
  uVar7 = UObject::FindFunction(plVar14);
  if ((uVar7 == 0) || ((*(uint *)(uVar7 + 0x88) & 0x40) == 0)) {
LAB_1423f8ac6:
    if (cVar4 == '\0') {
      *(undefined1 *)(param_4 + 2) = 1;
      return 1;
    }
    return 0;
  }
  uVar6 = 0x1004000;
  if (cVar4 != '\0') {
    uVar6 = 0x200000;
  }
  if ((*(uint *)(uVar7 + 0x88) & uVar6) == 0) goto LAB_1423f8ac6;
  plVar11 = *(longlong **)(*(longlong *)(param_1 + 0xf0) + 0x58);
  cVar5 = (**(code **)(*plVar11 + 0x3f0))(plVar11,plVar14,uVar7,param_3);
  if (cVar5 == '\0') {
    return 1;
  }
  if ((param_5 == '\0') || (bVar3 = true, (*(byte *)(uVar7 + 0x88) & 0x80) == 0)) {
    bVar3 = false;
  }
  puStack_80 = local_res20;
  local_res20[0] = 0;
  local_88 = &DAT_14060d670;
  local_58 = 0x4060d670;
  uStack_54 = 1;
  puStack_50 = puStack_80;
  lVar8 = FUN_1415d8310(&local_58,&DAT_146216a38);
  local_e0 = (undefined8 *)(lVar8 + 0x18);
  local_78 = &DAT_14060d670;
  local_e8[0] = 0;
  local_d8 = *local_e0;
  local_d0 = *(longlong *)(lVar8 + 0x28);
  local_c8 = '\0';
  local_c0 = *(undefined8 *)(lVar8 + 0x30);
  *(undefined8 ***)(lVar8 + 0x30) = &local_e0;
  *(int *)(lVar8 + 0x38) = *(int *)(lVar8 + 0x38) + 1;
  puStack_70 = local_e8;
  local_48 = 0x4060d670;
  uStack_44 = 1;
  puStack_40 = puStack_70;
  lVar8 = FUN_1415d8310(&local_48,&DAT_146216a38);
  lVar8 = operator_new(1,lVar8 + 0x18,1,*(undefined2 *)(uVar7 + 0x8e),(ulonglong)uVar15 << 0x20);
  FUN_1425bf040(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x58),&local_98,uVar7);
  FUN_142735fa0(local_98,plVar14,uVar7,*(undefined8 *)(param_1 + 0xf8),param_2,lVar8,param_7);
  if ((*(char *)(param_2 + 0x28) < '\0') || (*(int *)(param_2 + 0xa0) != *(int *)(param_2 + 0xa8)))
  {
    if (cVar4 == '\0') {
      *(undefined1 *)(param_4 + 2) = 1;
      uVar12 = 1;
      goto LAB_1423f8e4a;
    }
  }
  else {
    FUN_14171fe20();
    if ((bVar3) &&
       ((0 < *(int *)(param_7 + 8) - *(int *)(param_7 + 0x34) || (0 < *(int *)(param_1 + 0x350)))))
    {
      *param_6 = 1;
    }
    else {
      uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 0x68);
      plVar11 = *(longlong **)(*(longlong *)(param_1 + 0xf0) + 0x58);
      cVar4 = (**(code **)(*plVar11 + 0x3e0))(plVar11,uVar12,uVar7,lVar8);
      if (cVar4 != '\0') {
        lVar9 = FUN_1428761d0(DAT_146b17150,
                              *(undefined8 *)
                               (*(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x58) + 0xd0));
        if (lVar9 != 0) {
          plVar11 = *(longlong **)(lVar9 + 0x248);
          plVar10 = (longlong *)0x0;
          if (plVar14 != *(longlong **)(*(longlong *)(param_1 + 0xf8) + 0x68)) {
            plVar10 = plVar14;
          }
          plVar13 = plVar11 + (longlong)*(int *)(lVar9 + 0x250) * 2;
          plVar14 = local_a0;
          for (; local_a0 = plVar14, plVar11 != plVar13; plVar11 = plVar11 + 2) {
            plVar14 = (longlong *)*plVar11;
            if ((plVar14 != (longlong *)0x0) &&
               (plVar14 != *(longlong **)(*(longlong *)(param_1 + 0xf0) + 0x58))) {
              cVar4 = (**(code **)(*plVar14 + 0x3d8))(plVar14,uVar12,uVar7);
              if (cVar4 != '\0') {
                (**(code **)(*(longlong *)*plVar11 + 0x2e8))
                          ((longlong *)*plVar11,uVar12,uVar7,lVar8,0,0,plVar10);
              }
            }
            plVar14 = local_a0;
          }
        }
      }
      FUN_14171fe20();
      (**(code **)(*plVar14 + 0x208))(plVar14,uVar7,lVar8);
    }
    local_b0 = *(longlong **)(uVar7 + 0x38);
    local_a8 = 0xffffffff;
    local_a4 = 0x101;
    local_a2 = 0;
    local_b8 = uVar7;
    FUN_140472e10(&local_b8);
    plVar14 = local_b0;
    while ((local_b0 = plVar14, plVar14 != (longlong *)0x0 && (((uint)plVar14[7] & 0x480) == 0x80)))
    {
      if ((~(byte)((ulonglong)plVar14[7] >> 0x24) & 1) != 0) {
        (**(code **)(*plVar14 + 0x328))(plVar14,*(int *)((longlong)plVar14 + 0x44) + lVar8);
      }
      local_b0 = (longlong *)plVar14[5];
      FUN_140472e10(&local_b8);
      plVar14 = local_b0;
    }
    if (local_c8 == '\0') {
      local_c8 = '\x01';
      *(int *)(local_e0 + 4) = *(int *)(local_e0 + 4) + -1;
      if (local_d0 != local_e0[2]) {
        FMemStackBase::FreeChunks();
      }
      *local_e0 = local_d8;
      local_e0[3] = local_c0;
      local_d8 = 0;
    }
    lVar8 = FUN_14171fe10();
    if (lVar8 == 0) {
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar14 = local_90 + 1;
        lVar8 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar1 = (int *)((longlong)local_90 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_90 + 8))(local_90,1);
          }
        }
      }
      if (local_c8 != '\0') {
        return 1;
      }
      local_c8 = 1;
      *(int *)(local_e0 + 4) = *(int *)(local_e0 + 4) + -1;
      if (local_d0 != local_e0[2]) {
        FMemStackBase::FreeChunks();
      }
      *local_e0 = local_d8;
      local_e0[3] = local_c0;
      return 1;
    }
  }
  uVar12 = 0;
LAB_1423f8e4a:
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_90 + 1;
    lVar8 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  if (local_c8 == '\0') {
    local_c8 = 1;
    *(int *)(local_e0 + 4) = *(int *)(local_e0 + 4) + -1;
    if (local_d0 != local_e0[2]) {
      FMemStackBase::FreeChunks(local_e0);
    }
    *local_e0 = local_d8;
    local_e0[3] = local_c0;
    return uVar12;
  }
  return uVar12;
}



// FUNCTION 1423f8f70 FUN_1423f8f70 body=487 status=ok
// SIG undefined FUN_1423f8f70(void)

void FUN_1423f8f70(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 local_res10 [8];
  
  lVar8 = 0;
  if (((*(byte *)(param_2 + 0xdd) & 1) == 0) ||
     ((*(byte *)(*(longlong *)(param_1 + 0x28) + 0xa4) & 1) != 0)) goto LAB_1423f8ffa;
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x68);
  if (lVar7 == 0) {
LAB_1423f8fe2:
    lVar7 = lVar8;
  }
  else {
    lVar6 = UPackageMapClient::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_1423f8fe2;
  }
  FUN_1425ef250(lVar7,param_2);
  if (*(char *)(param_2 + 0x28) < '\0') {
    return;
  }
LAB_1423f8ffa:
  if (((*(byte *)(*(longlong *)(param_1 + 0x28) + 0xa4) & 1) == 0) ||
     ((*(byte *)(param_1 + 0x30) & 0x20) == 0)) {
    if (((*(byte *)(param_2 + 0xdc) & 0x10) == 0) ||
       (iVar2 = *(int *)(param_2 + 0xd8),
       iVar2 == *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x15a0) +
                        (longlong)*(int *)(param_1 + 0x34) * 4) + 1)) {
      cVar5 = FUN_1423f84b0(param_1,param_2,param_3);
      if (((-1 < *(char *)(param_2 + 0x28)) && (cVar5 == '\0')) &&
         (puVar9 = *(undefined8 **)(param_1 + 0x50), puVar9 != (undefined8 *)0x0)) {
        while (*(int *)(puVar9 + 0x1b) ==
               *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x15a0) +
                       (longlong)*(int *)(param_1 + 0x34) * 4) + 1) {
          uVar3 = puVar9[0x18];
          *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
          *(undefined8 *)(param_1 + 0x50) = uVar3;
          cVar5 = FUN_1423f84b0(param_1,puVar9,local_res10);
          if (*(char *)(param_2 + 0x28) < '\0') {
            return;
          }
          if (puVar9 != (undefined8 *)0x0) {
            (**(code **)*puVar9)(puVar9,1);
          }
          if (cVar5 != '\0') {
            return;
          }
          puVar9 = *(undefined8 **)(param_1 + 0x50);
          if (puVar9 == (undefined8 *)0x0) {
            return;
          }
        }
      }
    }
    else {
      plVar1 = (longlong *)(param_1 + 0x50);
      lVar7 = *(longlong *)(param_1 + 0x50);
      while (lVar7 != 0) {
        if (iVar2 == *(int *)(lVar7 + 0xd8)) {
          return;
        }
        if (iVar2 < *(int *)(lVar7 + 0xd8)) break;
        plVar1 = (longlong *)(lVar7 + 0xc0);
        lVar7 = *plVar1;
      }
      lVar7 = operator_new(0xe0);
      if (lVar7 != 0) {
        lVar8 = FInBunch::FInBunch(lVar7,param_2);
      }
      *(longlong *)(lVar8 + 0xc0) = *plVar1;
      *plVar1 = lVar8;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
      if (0xff < *(int *)(param_1 + 0x48)) {
        *(byte *)(param_2 + 0x28) = *(byte *)(param_2 + 0x28) | 0x80;
      }
    }
  }
  return;
}



// FUNCTION 1423f9160 Register body=319 status=ok
// SIG undefined Register(void)

undefined8 * UDebugDrawService::Register(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  
  iVar1 = FUN_1427703d0(param_2);
  uVar4 = 0;
  *param_1 = 0;
  if (iVar1 != -1) {
    lVar6 = (longlong)DAT_146af23b0;
    if (DAT_146af23b0 <= iVar1) {
      iVar5 = (iVar1 - DAT_146af23b0) + 1;
      DAT_146af23b0 = DAT_146af23b0 + iVar5;
      if (DAT_146af23b4 < DAT_146af23b0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146af23a8);
      }
      ::_guard_xfg_dispatch_icall_nop((void *)(lVar6 * 0x10 + DAT_146af23a8),0,(longlong)iVar5 << 4)
      ;
    }
    lVar6 = (longlong)iVar1 * 0x10;
    plVar7 = (longlong *)(DAT_146af23a8 + lVar6);
    iVar5 = (int)plVar7[1];
    *(int *)(plVar7 + 1) = iVar5 + 1;
    if (*(int *)((longlong)plVar7 + 0xc) < iVar5 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7,iVar5);
    }
    plVar7 = (longlong *)((longlong)iVar5 * 0x10 + *plVar7);
    *plVar7 = 0;
    *(undefined4 *)(plVar7 + 1) = 0;
    if (((param_3 != plVar7) && ((int)param_3[1] != 0)) && ((longlong *)*param_3 != (longlong *)0x0)
       ) {
      (**(code **)(*(longlong *)*param_3 + 0x30))();
    }
    lVar3 = (longlong)*(int *)(lVar6 + 8 + DAT_146af23a8);
    if ((*(int *)(*(longlong *)(lVar6 + DAT_146af23a8) + -8 + lVar3 * 0x10) != 0) &&
       (plVar7 = *(longlong **)(*(longlong *)(lVar6 + DAT_146af23a8) + -0x10 + lVar3 * 0x10),
       plVar7 != (longlong *)0x0)) {
      puVar2 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res8);
      uVar4 = *puVar2;
    }
    *param_1 = uVar4;
    FUN_142781db0(&DAT_146af23b8,iVar1,1);
  }
  return param_1;
}



// FUNCTION 1423f92a0 Remove body=257 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  plVar8 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar8 = param_1 + 7;
  }
  iVar4 = *(int *)((longlong)plVar8 + ((longlong)(int)(param_2[1] ^ *param_2) & uVar7) * 4);
  if (iVar4 != -1) {
    lVar6 = *param_1;
    do {
      lVar2 = lVar6 + (longlong)iVar4 * 0x18;
      if ((*(uint *)(lVar6 + (longlong)iVar4 * 0x18) == *param_2) &&
         (*(uint *)(lVar2 + 4) == param_2[1])) {
        uVar7 = (longlong)*(int *)(lVar2 + 0x14) & uVar7;
        puVar3 = (undefined4 *)((longlong)plVar8 + uVar7 * 4);
        iVar5 = *(int *)((longlong)plVar8 + uVar7 * 4);
        goto joined_r0x0001423f9347;
      }
      iVar4 = *(int *)(lVar2 + 0x10);
    } while (iVar4 != -1);
  }
  return 0;
joined_r0x0001423f9347:
  if (iVar5 == -1) {
LAB_1423f9373:
    TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar4,1);
    return 1;
  }
  if (iVar5 == iVar4) {
    *puVar3 = *(undefined4 *)(lVar2 + 0x10);
    goto LAB_1423f9373;
  }
  lVar1 = (longlong)iVar5 * 3 + 2;
  iVar5 = *(int *)(lVar6 + lVar1 * 8);
  puVar3 = (undefined4 *)(lVar6 + lVar1 * 8);
  goto joined_r0x0001423f9347;
}



// FUNCTION 1423f93b0 FUN_1423f93b0 body=508 status=ok
// SIG undefined FUN_1423f93b0(void)

undefined8 FUN_1423f93b0(longlong *param_1,uint *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
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
  piVar11 = (int *)((longlong)plVar8 + lVar10 * 4);
  iVar3 = *(int *)((longlong)plVar8 + lVar10 * 4);
  while( true ) {
    if (iVar3 == -1) {
      return 0;
    }
    local_res8 = *param_2;
    local_resc = param_2[1];
    puVar12 = (undefined4 *)((longlong)iVar3 * 0x20 + *param_1);
    local_res18 = *puVar12;
    local_res1c = puVar12[1];
    cVar7 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_res18,&local_res8);
    if (cVar7 != '\0') break;
    iVar3 = puVar12[6];
    piVar11 = puVar12 + 6;
  }
  iVar3 = *piVar11;
  lVar10 = (longlong)iVar3;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar5 = *param_1;
    lVar9 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar10 * 0x20 + 0x1c + lVar5));
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    piVar11 = (int *)((longlong)plVar8 + lVar9 * 4);
    iVar4 = *(int *)((longlong)plVar8 + lVar9 * 4);
    while (iVar4 != -1) {
      if (iVar4 == iVar3) {
        *piVar11 = *(int *)(lVar10 * 0x20 + 0x18 + lVar5);
        break;
      }
      piVar11 = (int *)(lVar5 + 0x18 + (longlong)iVar4 * 0x20);
      iVar4 = *piVar11;
    }
  }
  uVar13 = 0xffffffff;
  plVar8 = *(longlong **)(lVar10 * 0x20 + *param_1 + 0x10);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar11 = (int *)((longlong)plVar8 + 0xc);
      iVar4 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  bVar6 = (byte)iVar3 & 0x1f;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar3;
  }
  puVar12 = (undefined4 *)(lVar10 * 0x20 + *param_1);
  *puVar12 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar13 = (undefined4)param_1[6];
  }
  puVar12[1] = uVar13;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  *(int *)(param_1 + 6) = iVar3;
  plVar8 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 & ~(1 << bVar6 | 1U >> 0x20 - bVar6);
  return 1;
}



// FUNCTION 1423f95b0 Remove body=276 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  iVar5 = *(int *)((longlong)plVar6 + ((longlong)*param_2 & uVar7) * 4);
  if (iVar5 != -1) {
    lVar2 = *param_1;
    do {
      lVar3 = (longlong)iVar5 * 0x60;
      if (*(int *)(lVar3 + lVar2) == *param_2) {
        lVar3 = (longlong)iVar5 * 0x60;
        uVar7 = (longlong)*(int *)(lVar3 + 0x5c + lVar2) & uVar7;
        piVar4 = (int *)((longlong)plVar6 + uVar7 * 4);
        iVar1 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x0001423f964c;
      }
      iVar5 = *(int *)(lVar3 + 0x58 + lVar2);
    } while (iVar5 != -1);
  }
  return 0;
joined_r0x0001423f964c:
  if (iVar1 == -1) {
LAB_1423f9673:
    lVar3 = *param_1 + lVar3;
    *(undefined4 *)(lVar3 + 0x50) = 0;
    if (*(longlong *)(lVar3 + 0x48) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar3 + 8);
    TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar5,1);
    return 1;
  }
  if (iVar1 == iVar5) {
    *piVar4 = *(int *)(lVar3 + lVar2 + 0x58);
    goto LAB_1423f9673;
  }
  piVar4 = (int *)((longlong)iVar1 * 0x60 + 0x58 + lVar2);
  iVar1 = *piVar4;
  goto joined_r0x0001423f964c;
}



// FUNCTION 1423f96d0 FUN_1423f96d0 body=88 status=ok
// SIG undefined FUN_1423f96d0(void)

void FUN_1423f96d0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  
  FWeakObjectPtr::operator=(&local_res8);
  local_res18[0] = local_res8;
  TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x1600,local_res18);
  plVar1 = *(longlong **)(param_1 + 0x1650);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x280))(plVar1,param_2);
  }
  return;
}



// FUNCTION 1423f9730 FUN_1423f9730 body=258 status=ok
// SIG undefined FUN_1423f9730(void)

void FUN_1423f9730(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)(*param_1 + 0x18 + (longlong)param_2 * 0x30);
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
      plVar7 = plVar7 + 6;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x30),
                 (void *)((longlong)(param_2 + param_3) * 0x30 + *param_1),(longlong)iVar5 * 0x30);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FCloudFile,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1423f9840 RemoveAtImpl body=226 status=ok
// SIG undefined RemoveAtImpl(void)

void TArray<FObjectReplicator::FRPCPendingLocalCall,FDefaultAllocator>::RemoveAtImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + 0x60 + (longlong)param_2 * 0x70);
    iVar3 = param_3;
    do {
      *(undefined4 *)(plVar2 + 1) = 0;
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (plVar2 + -8);
      if (plVar2[-0xb] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xe;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x70),
                 (void *)((longlong)(param_2 + param_3) * 0x70 + *param_1),(longlong)iVar1 * 0x70);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FSvoNode,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1423f9930 FUN_1423f9930 body=4006 status=ok
// SIG undefined FUN_1423f9930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1423f9930(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  bool bVar9;
  longlong lVar10;
  char cVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  undefined2 *puVar23;
  uint *puVar24;
  byte bVar25;
  byte bVar26;
  undefined1 local_res18 [8];
  uint local_res20;
  undefined8 *local_3a8;
  undefined8 local_3a0;
  longlong local_398;
  char local_390;
  undefined8 local_388;
  uint local_380;
  int iStack_37c;
  int local_378;
  undefined8 local_370;
  uint *puStack_368;
  undefined8 uStack_360;
  int iStack_358;
  int iStack_354;
  undefined8 uStack_350;
  undefined4 local_348;
  uint local_344;
  uint local_340;
  uint local_33c;
  int local_338;
  uint uStack_334;
  uint *puStack_330;
  undefined4 local_328;
  int iStack_324;
  int iStack_320;
  undefined4 uStack_31c;
  int local_318;
  uint uStack_314;
  uint *puStack_310;
  undefined4 local_308;
  int iStack_304;
  int iStack_300;
  undefined4 uStack_2fc;
  longlong local_2f8;
  longlong *local_2e8;
  undefined8 uStack_2e0;
  uint *local_2d8;
  undefined8 uStack_2d0;
  undefined1 local_2c8 [16];
  longlong *local_2b8;
  undefined2 local_2b0;
  longlong *local_2a8;
  longlong *plStack_2a0;
  uint *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  longlong *local_278;
  undefined8 uStack_270;
  uint *local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  longlong *local_248;
  undefined2 local_240;
  longlong *local_238;
  undefined8 uStack_230;
  uint *local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  longlong *local_208;
  undefined2 local_200;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  LARGE_INTEGER local_1e8;
  undefined8 local_1e0;
  uint *local_1d8;
  longlong local_1d0;
  LARGE_INTEGER local_1c8;
  undefined2 *local_1c0;
  int local_1b8;
  undefined *local_1a8;
  undefined1 *puStack_1a0;
  uint local_198 [2];
  longlong local_190 [3];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  longlong local_168 [5];
  byte local_140;
  longlong local_d8;
  ulonglong local_c8;
  byte local_80;
  longlong local_78;
  longlong local_68;
  
  plVar2 = param_1 + 0xd;
  lVar15 = (**(code **)(*(longlong *)param_1[0xd] + 0x148))();
  if ((lVar15 == 0) || (*(longlong *)(lVar15 + 0x108) != *(longlong *)(param_1[5] + 0x58))) {
    bVar25 = 0;
  }
  else {
    bVar25 = 1;
  }
  QueryPerformanceCounter(&local_1e8);
  dVar4 = (double)local_1e8.QuadPart * DAT_1468b02f8;
  if (bVar25 == 0) {
    _DAT_146af1a58 = _DAT_146af1a58 + 1;
  }
  if ((*(uint *)(param_1 + 6) >> 8 & 1) == 0) {
LAB_1423f99f1:
    lVar15 = UWorld::GetWorldSettings(lVar15,0);
    bVar9 = false;
    if ((*(int *)((longlong)param_1 + 0x3c) == -1) || (*(int *)(lVar15 + 0x618) < 1)) {
LAB_1423f9aba:
      bVar26 = 0;
    }
    else {
      lVar19 = *(longlong *)(lVar15 + 0x610);
      bVar3 = true;
      lVar15 = (longlong)*(int *)(lVar15 + 0x618) * 0x30 + lVar19;
      for (; lVar19 != lVar15; lVar19 = lVar19 + 0x30) {
        cVar11 = (**(code **)(*(longlong *)*plVar2 + 0x2b0))((longlong *)*plVar2,lVar19);
        if (cVar11 == '\0') {
          bVar3 = false;
          break;
        }
      }
      cVar11 = (**(code **)(*param_1 + 0x2f8))(param_1);
      if (cVar11 == '\0') {
        bVar8 = false;
        if (bVar3 == false) goto LAB_1423f9a86;
        bVar9 = true;
      }
      else {
        if (bVar3) {
          uVar20 = 0;
          goto LAB_1423fa853;
        }
        bVar8 = true;
LAB_1423f9a86:
        bVar9 = false;
      }
      (**(code **)(*param_1 + 0x2f0))(param_1,bVar3);
      if ((!bVar8) && (!bVar9)) goto LAB_1423f9aba;
      bVar26 = 1;
    }
    if ((*(byte *)(param_1 + 0x11) & 4) == 0) {
      FUN_1423e4ec0(local_168,param_1);
      if ((local_140 & 0x80) == 0) {
        if (bVar9) {
          local_80 = local_80 | 0x30;
        }
        uVar14 = *(uint *)(param_1 + 0x11);
        local_res20 = 0;
        *(uint *)(param_1 + 0x11) = uVar14 | 4;
        if ((*(int *)((longlong)param_1 + 0x3c) == -1) || (*(char *)(param_1[5] + 0x17e8) != '\0'))
        {
          plVar16 = (longlong *)*plVar2;
          local_res20 = 2;
          local_80 = (*(byte *)(plVar16 + 0x12) & 1 | 8) << 2 | local_80 & 0xfb;
        }
        else {
          puVar24 = (uint *)CONCAT44(uStack_360._4_4_,(undefined4)uStack_360);
          if (((uVar14 & 1) == 0) && (puVar24 = uStack_360, (*(byte *)(param_1 + 6) & 1) != 0)) {
            uStack_334 = 1;
            *(uint *)(param_1 + 0x11) = uVar14 | 5;
            local_370 = param_1 + 0x13;
            local_338 = 0;
            iVar18 = (int)param_1[0x18];
            puStack_330 = (uint *)(param_1 + 0x15);
            iStack_324 = 0;
            iStack_320 = 0;
            if (iVar18 != 0) {
              puVar24 = (uint *)param_1[0x17];
              if ((uint *)param_1[0x17] == (uint *)0x0) {
                puVar24 = puStack_330;
              }
              uVar14 = *puVar24;
              local_338 = 0;
              iStack_320 = 0;
              while (uVar14 == 0) {
                lVar15 = (longlong)local_338;
                iStack_320 = iStack_320 + 0x20;
                iVar17 = local_338 + 1;
                bVar3 = (int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_338;
                local_338 = iVar17;
                if (bVar3) goto LAB_1423f9c84;
                uVar14 = puVar24[lVar15 + 1];
              }
              uStack_334 = uVar14 - 1 & uVar14 ^ uVar14;
              local_1f8 = 0x1f;
              if (uStack_334 != 0) {
                for (; uStack_334 >> local_1f8 == 0; local_1f8 = local_1f8 + -1) {
                }
              }
              if (uStack_334 == 0) {
                iVar17 = 0x20;
              }
              else {
                iVar17 = 0x1f - local_1f8;
              }
              iStack_324 = (iStack_320 - iVar17) + 0x1f;
              if (iVar18 < iStack_324) {
LAB_1423f9c84:
                iStack_324 = iVar18;
              }
            }
            local_328 = 0xffffffff;
            uStack_260 = CONCAT44(iStack_324,0xffffffff);
            auVar6._8_4_ = iStack_320;
            auVar6._0_8_ = uStack_260;
            auVar6._12_4_ = uStack_31c;
            iStack_354 = iStack_324;
            uStack_280._0_4_ = SUB84(local_370,0);
            uStack_280._4_4_ = (undefined4)((ulonglong)local_370 >> 0x20);
            puStack_368 = (uint *)CONCAT44(uStack_334,local_338);
            iStack_358 = -1;
            uStack_350 = auVar6._8_8_;
            local_240 = 0;
            uStack_288 = uStack_350;
            local_258._8_4_ = (undefined4)uStack_280;
            local_258._0_8_ = uStack_350;
            local_258._12_4_ = uStack_280._4_4_;
            iVar18 = iStack_324;
            local_278 = local_370;
            uStack_270 = puStack_368;
            local_268 = puStack_330;
            local_248 = local_370;
            puVar24 = puStack_330;
            uStack_280 = local_370;
            uStack_360 = puStack_330;
            if (iStack_324 < (int)param_1[0x18]) {
              do {
                lVar15 = *(longlong *)((longlong)iVar18 * 0x20 + 8 + *local_278);
                if (*(longlong *)(lVar15 + 0x10) != 0) {
                  FRepLayout::OpenAcked
                            (*(undefined8 *)(lVar15 + 0x2b0),*(undefined8 *)(lVar15 + 0x2c0));
                  *(uint *)(lVar15 + 0xe8) = *(uint *)(lVar15 + 0xe8) | 2;
                }
                uStack_260 = CONCAT44(uStack_260._4_4_,(uint)uStack_260 & ~uStack_270._4_4_);
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_270);
                iVar18 = uStack_260._4_4_;
              } while (uStack_260._4_4_ < (int)local_268[6]);
              puVar24 = uStack_360;
              if (((char)local_240 != '\0') && (local_240._1_1_ != '\0')) {
                TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
                ::ConditionalRehash(local_248,
                                    (int)local_248[1] - *(int *)((longlong)local_248 + 0x34),1);
                puVar24 = uStack_360;
              }
            }
          }
          plVar16 = (longlong *)*plVar2;
          uStack_360 = puVar24;
        }
        lVar15 = (**(code **)(*plVar16 + 0x4a8))(plVar16);
        if (lVar15 == param_1[5]) {
LAB_1423f9e0b:
          local_res20 = local_res20 | 1;
        }
        else {
          if (lVar15 != 0) {
            lVar19 = UIpConnection::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x90) < *(int *)(lVar19 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar19 + 0x90) * 8) != lVar19 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((bVar3) && (*(longlong *)(lVar15 + 0x1970) == param_1[5])) goto LAB_1423f9e0b;
          }
          local_res20 = local_res20 & 0xfffffffe;
        }
        if (((local_res20 & 2) != 0) && ((int)param_1[7] != 0)) {
          (**(code **)(**(longlong **)(param_1[5] + 0x68) + 0x298))
                    (*(longlong **)(param_1[5] + 0x68),local_168,param_1,plVar2);
          bVar26 = 1;
          (**(code **)(*(longlong *)*plVar2 + 0x3f8))((longlong *)*plVar2,local_168);
        }
        lVar15 = *plVar2;
        local_33c = (uint)*(byte *)(lVar15 + 0x95);
        lVar19 = lVar15;
        local_1d0 = lVar15;
        if ((local_33c == 2) && ((local_res20 & 1) == 0)) {
          FUN_14223d640(lVar15,0,0);
          lVar19 = *plVar2;
        }
        local_res18[0] = 0;
        uVar14 = 0;
        if (*(char *)(lVar19 + 0x95) == '\x01') {
          uVar14 = 4;
        }
        puStack_1a0 = local_res18;
        local_res20 = (*(byte *)(lVar19 + 200) & 2 | (uint)bVar25 << 2) << 2 |
                      uVar14 | local_res20 & 0xffffffe3;
        local_1a8 = &DAT_14060d670;
        local_178 = 0x4060d670;
        uStack_174 = 1;
        uStack_170 = puStack_1a0;
        lVar19 = FUN_1415d8310(&local_178,&DAT_146216a38);
        local_3a8 = (undefined8 *)(lVar19 + 0x18);
        local_3a0 = *local_3a8;
        local_398 = *(longlong *)(lVar19 + 0x28);
        local_390 = '\0';
        local_388 = *(undefined8 *)(lVar19 + 0x30);
        *(undefined8 ***)(lVar19 + 0x30) = &local_3a8;
        *(int *)(lVar19 + 0x38) = *(int *)(lVar19 + 0x38) + 1;
        if (bVar9) {
LAB_1423fa234:
          uVar20 = 0;
          if (bVar26 != 0) {
            (**(code **)(*param_1 + 0x2c8))(param_1,&local_380);
            uVar20 = local_c8;
            if (!bVar9) {
              local_2a8 = param_1 + 0x13;
              local_370 = (longlong *)0x100000000;
              iVar18 = (int)param_1[0x18];
              puStack_368 = (uint *)(param_1 + 0x15);
              uStack_360._4_4_ = 0;
              iStack_358 = 0;
              if (iVar18 != 0) {
                puVar24 = (uint *)param_1[0x17];
                if ((uint *)param_1[0x17] == (uint *)0x0) {
                  puVar24 = puStack_368;
                }
                uVar14 = *puVar24;
                iVar17 = 0;
                iStack_358 = 0;
                while (uVar14 == 0) {
                  iStack_358 = iStack_358 + 0x20;
                  uVar20 = (ulonglong)local_370 >> 0x20;
                  local_370 = (longlong *)CONCAT44((int)uVar20,iVar17 + 1);
                  if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar17)
                  goto LAB_1423fa327;
                  uVar14 = puVar24[(longlong)iVar17 + 1];
                  iVar17 = iVar17 + 1;
                }
                uVar14 = -uVar14 & uVar14;
                local_1f0 = 0x1f;
                if (uVar14 != 0) {
                  for (; uVar14 >> local_1f0 == 0; local_1f0 = local_1f0 + -1) {
                  }
                }
                local_370 = (longlong *)CONCAT44(uVar14,SUB84(local_370,0));
                if (uVar14 == 0) {
                  iVar17 = 0x20;
                }
                else {
                  iVar17 = 0x1f - local_1f0;
                }
                uStack_360._4_4_ = (iStack_358 - iVar17) + 0x1f;
                if (iVar18 < uStack_360._4_4_) {
LAB_1423fa327:
                  uStack_360._4_4_ = iVar18;
                }
              }
              uStack_360._0_4_ = 0xffffffff;
              uStack_290 = CONCAT44(uStack_360._4_4_,0xffffffff);
              auVar5._8_4_ = iStack_358;
              auVar5._0_8_ = uStack_290;
              auVar5._12_4_ = iStack_354;
              uStack_280._0_4_ = SUB84(local_2a8,0);
              uStack_280._4_4_ = (undefined4)((ulonglong)local_2a8 >> 0x20);
              uStack_288 = auVar5._8_8_;
              plStack_2a0 = local_370;
              local_200 = 0;
              uStack_230 = local_370;
              local_218._8_4_ = (undefined4)uStack_280;
              local_218._0_8_ = uStack_288;
              local_218._12_4_ = uStack_280._4_4_;
              iVar18 = uStack_360._4_4_;
              puStack_298 = puStack_368;
              local_238 = local_2a8;
              local_228 = puStack_368;
              uStack_220 = uStack_290;
              local_208 = local_2a8;
              uStack_280 = local_2a8;
              if (uStack_360._4_4_ < (int)param_1[0x18]) {
                do {
                  bVar26 = local_80 >> 5 & 1;
                  lVar15 = *(longlong *)((longlong)iVar18 * 0x20 + *local_238 + 8);
                  if (*(longlong *)(lVar15 + 0x10) != 0) {
                    uVar14 = *(uint *)(*(longlong *)(lVar15 + 0xf8) + 0x30);
                    if ((uVar14 >> 8 & 1) == 0) {
                      FUN_142732580(*(undefined8 *)(lVar15 + 0x2b0),*(undefined8 *)(lVar15 + 0x2c0),
                                    &local_380,bVar26);
                    }
                    local_378 = 0;
                    if (0 < *(int *)(lVar15 + 0xd0)) {
                      local_2f8 = 0;
                      do {
                        lVar22 = (longlong)*(int *)(local_2f8 + *(longlong *)(lVar15 + 200)) * 0x30
                                 + *(longlong *)(lVar15 + 0x18);
                        lVar19 = *(longlong *)(lVar22 + 8);
                        lVar10 = lVar22;
                        while (lVar19 != 0) {
                          lVar21 = lVar19;
                          if (*(int *)(lVar19 + 0x20) == -1) {
                            if ((uVar14 & 0x100) == 0) {
                              *(uint *)(lVar19 + 0x28) = *(uint *)(lVar19 + 0x28) & 0xfffffffe;
                              *(ulonglong *)(lVar19 + 0x20) = CONCAT44(iStack_37c,local_380);
                              *(uint *)(lVar19 + 0x28) = *(uint *)(lVar19 + 0x28) | (uint)bVar26;
                              *(uint *)(lVar22 + 0x28) = *(uint *)(lVar22 + 0x28) & 0xfffffffe;
                              *(uint *)(lVar22 + 0x28) = *(uint *)(lVar22 + 0x28) | (uint)bVar26;
                              *(ulonglong *)(lVar22 + 0x20) = CONCAT44(iStack_37c,local_380);
                            }
                            else {
                              *(undefined8 *)(lVar10 + 8) = *(undefined8 *)(lVar19 + 8);
                              plVar2 = *(longlong **)(lVar19 + 0x18);
                              if (plVar2 != (longlong *)0x0) {
                                LOCK();
                                plVar16 = plVar2 + 1;
                                lVar21 = *plVar16;
                                *(int *)plVar16 = (int)*plVar16 + -1;
                                UNLOCK();
                                if ((int)lVar21 == 1) {
                                  (**(code **)*plVar2)(plVar2);
                                  LOCK();
                                  piVar1 = (int *)((longlong)plVar2 + 0xc);
                                  iVar18 = *piVar1;
                                  *piVar1 = *piVar1 + -1;
                                  UNLOCK();
                                  if (iVar18 == 1) {
                                    (**(code **)(*plVar2 + 8))(plVar2,1);
                                  }
                                }
                              }
                              FMemory::operator_delete(lVar19,0x30);
                              lVar21 = lVar10;
                            }
                          }
                          lVar10 = lVar21;
                          lVar19 = *(longlong *)(lVar21 + 8);
                        }
                        local_378 = local_378 + 1;
                        local_2f8 = local_2f8 + 4;
                      } while (local_378 < *(int *)(lVar15 + 0xd0));
                    }
                  }
                  uStack_220 = CONCAT44(uStack_220._4_4_,(uint)uStack_220 & ~uStack_230._4_4_);
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_230);
                  iVar18 = uStack_220._4_4_;
                } while (uStack_220._4_4_ < (int)local_228[6]);
                if (((char)local_200 != '\0') && (local_200._1_1_ != '\0')) {
                  TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
                  ::ConditionalRehash(local_208,
                                      (int)local_208[1] - *(int *)((longlong)local_208 + 0x34),1);
                }
              }
              if ((0 < (int)param_1[0x45]) && ((int)local_380 <= iStack_37c)) {
                plVar2 = param_1 + 0x3a;
                uVar14 = local_380;
                do {
                  local_344 = uVar14 & 0x8000003f;
                  if ((int)local_344 < 0) {
                    local_344 = (local_344 - 1 | 0xffffffc0) + 1;
                  }
                  if ((int)param_1[0x3b] != *(int *)((longlong)param_1 + 0x204)) {
                    plVar16 = (longlong *)param_1[0x42];
                    if ((longlong *)param_1[0x42] == (longlong *)0x0) {
                      plVar16 = param_1 + 0x41;
                    }
                    iVar18 = *(int *)((longlong)plVar16 +
                                     ((longlong)(int)param_1[0x43] - 1U & (longlong)(int)local_344)
                                     * 4);
                    if (iVar18 != -1) {
                      do {
                        lVar15 = *plVar2 + (longlong)iVar18 * 0x28;
                        if (*(uint *)(*plVar2 + (longlong)iVar18 * 0x28) == local_344) {
                          if ((iVar18 != -1) && (lVar15 != 0)) goto LAB_1423fa636;
                          break;
                        }
                        iVar18 = *(int *)(lVar15 + 0x20);
                      } while (iVar18 != -1);
                    }
                  }
                  local_1d8 = &local_344;
                  FUN_1423e2e30(plVar2,&local_340,&local_1d8,0);
                  lVar15 = *plVar2 + (longlong)(int)local_340 * 0x28;
LAB_1423fa636:
                  if ((*(uint *)(lVar15 + 8) != uVar14) &&
                     (iVar18 = *(int *)(lVar15 + 0x18), *(undefined4 *)(lVar15 + 0x18) = 0,
                     *(int *)(lVar15 + 0x1c) != iVar18)) {
                    TArray<float,FDefaultAllocator>::ResizeTo();
                  }
                  *(uint *)(lVar15 + 8) = uVar14;
                  iVar18 = (int)param_1[0x45];
                  if (iVar18 != 0) {
                    iVar17 = *(int *)(lVar15 + 0x18);
                    if (*(int *)(lVar15 + 0x1c) < iVar17 + iVar18) {
                      TArray<float,FDefaultAllocator>::ResizeTo(lVar15 + 0x10);
                      iVar17 = *(int *)(lVar15 + 0x18);
                    }
                    _guard_xfg_dispatch_icall_nop
                              ((void *)(*(longlong *)(lVar15 + 0x10) + (longlong)iVar17 * 4),
                               (void *)param_1[0x44],(longlong)iVar18 << 2);
                    *(int *)(lVar15 + 0x18) = *(int *)(lVar15 + 0x18) + iVar18;
                  }
                  uVar14 = uVar14 + 1;
                } while ((int)uVar14 <= iStack_37c);
              }
              uVar20 = local_c8;
              if ((*(byte *)(param_1[0xd] + 0x90) & 1) != 0) {
                lVar15 = param_1[5];
                iVar18 = *(int *)(lVar15 + 0x88);
                *(int *)(lVar15 + 0x88) = iVar18 + 1;
                if (*(int *)(lVar15 + 0x8c) < iVar18 + 1) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                            (lVar15 + 0x80,iVar18);
                }
                *(longlong *)(*(longlong *)(lVar15 + 0x80) + (longlong)iVar18 * 8) = param_1[0xd];
                uVar20 = local_c8;
              }
            }
          }
          *(undefined4 *)(param_1 + 0x45) = 0;
          if (*(int *)((longlong)param_1 + 0x22c) != 0) {
            TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x44,0);
          }
          param_1[0x10] = (longlong)(double)*(float *)(*(longlong *)(param_1[5] + 0x58) + 0x170);
          if (local_390 == '\0') {
            local_390 = '\x01';
            *(int *)(local_3a8 + 4) = *(int *)(local_3a8 + 4) + -1;
            if (local_398 != local_3a8[2]) {
              FMemStackBase::FreeChunks();
            }
            *local_3a8 = local_3a0;
            local_3a8[3] = local_388;
            local_3a0 = 0;
          }
          *(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 0x11) & 0xfffffff9;
          lVar15 = local_1d0;
        }
        else {
          bVar12 = FUN_1423faf30(param_1[0x12],local_168,local_res20);
          bVar13 = (**(code **)(*(longlong *)*plVar2 + 0x2c0))((longlong *)*plVar2,param_1);
          bVar26 = bVar26 | bVar12 | bVar13;
          if (*(char *)(param_1[5] + 0x17e8) == '\0') {
            uStack_314 = 1;
            local_370 = param_1 + 0x13;
            local_318 = 0;
            iVar18 = (int)param_1[0x18];
            puStack_310 = (uint *)(param_1 + 0x15);
            iStack_304 = 0;
            iStack_300 = 0;
            if (iVar18 != 0) {
              puVar24 = (uint *)param_1[0x17];
              if ((uint *)param_1[0x17] == (uint *)0x0) {
                puVar24 = puStack_310;
              }
              uVar14 = *puVar24;
              local_318 = 0;
              iStack_300 = 0;
              while (uVar14 == 0) {
                lVar15 = (longlong)local_318;
                iStack_300 = iStack_300 + 0x20;
                iVar17 = local_318 + 1;
                bVar3 = (int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_318;
                local_318 = iVar17;
                if (bVar3) goto LAB_1423fa0d3;
                uVar14 = puVar24[lVar15 + 1];
              }
              uStack_314 = -uVar14 & uVar14;
              local_1f4 = 0x1f;
              if (uStack_314 != 0) {
                for (; uStack_314 >> local_1f4 == 0; local_1f4 = local_1f4 + -1) {
                }
              }
              if (uStack_314 == 0) {
                iVar17 = 0x20;
              }
              else {
                iVar17 = 0x1f - local_1f4;
              }
              iStack_304 = (iStack_300 - iVar17) + 0x1f;
              if (iVar18 < iStack_304) {
LAB_1423fa0d3:
                iStack_304 = iVar18;
              }
            }
            local_308 = 0xffffffff;
            uStack_2d0 = CONCAT44(iStack_304,0xffffffff);
            auVar7._8_4_ = iStack_300;
            auVar7._0_8_ = uStack_2d0;
            auVar7._12_4_ = uStack_2fc;
            iStack_354 = iStack_304;
            uStack_280._0_4_ = SUB84(local_370,0);
            uStack_280._4_4_ = (undefined4)((ulonglong)local_370 >> 0x20);
            puStack_368 = (uint *)CONCAT44(uStack_314,local_318);
            iStack_358 = -1;
            uStack_350 = auVar7._8_8_;
            local_2b0 = 0;
            uStack_288 = uStack_350;
            local_2c8._8_4_ = (undefined4)uStack_280;
            local_2c8._0_8_ = uStack_350;
            local_2c8._12_4_ = uStack_280._4_4_;
            iVar18 = iStack_304;
            local_2e8 = local_370;
            uStack_2e0 = puStack_368;
            local_2d8 = puStack_310;
            local_2b8 = local_370;
            uStack_360 = puStack_310;
            uStack_280 = local_370;
            if (iStack_304 < (int)param_1[0x18]) {
              do {
                plVar2 = local_2e8;
                lVar15 = (longlong)iVar18 * 0x20;
                cVar11 = FWeakObjectPtr::IsValid(*local_2e8 + lVar15);
                if (cVar11 == '\0') {
                  lVar19 = *(longlong *)(lVar15 + 8 + *plVar2);
                  if (*(int *)(lVar19 + 8) != 0) {
                    FBitWriter::WriteBit(local_168,0);
                    FBitWriter::WriteBit(local_168,0);
                    (**(code **)(local_168[0] + 0x68))(local_168,lVar19 + 8);
                    FBitWriter::WriteBit(local_168,0);
                    local_348 = 0;
                    (**(code **)(local_168[0] + 0x68))(local_168,&local_348);
                    local_80 = local_80 | 0x20;
                    bVar26 = 1;
                  }
                  FUN_1423e7ca0(*(undefined8 *)(lVar15 + 8 + *plVar2));
                  TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
                  ::Remove(local_2c8._8_8_);
                  local_2b0 = CONCAT11(local_2b0._1_1_,1);
                }
                uStack_2d0 = CONCAT44(uStack_2d0._4_4_,(uint)uStack_2d0 & ~uStack_2e0._4_4_);
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_2e0);
                iVar18 = uStack_2d0._4_4_;
              } while (uStack_2d0._4_4_ < (int)local_2d8[6]);
              if (((char)local_2b0 != '\0') && (local_2b0._1_1_ != '\0')) {
                TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
                ::ConditionalRehash(local_2b8,
                                    (int)local_2b8[1] - *(int *)((longlong)local_2b8 + 0x34),1);
              }
            }
            goto LAB_1423fa234;
          }
          if (bVar26 != 0) {
            (**(code **)(*param_1 + 0x2c8))(param_1,local_198,local_168,1);
          }
          if (local_390 == '\0') {
            local_390 = '\x01';
            *(int *)(local_3a8 + 4) = *(int *)(local_3a8 + 4) + -1;
            if (local_398 != local_3a8[2]) {
              FMemStackBase::FreeChunks();
            }
            *local_3a8 = local_3a0;
            local_3a8[3] = local_388;
            local_3a0 = 0;
          }
          *(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 0x11) & 0xfffffffb;
          uVar20 = (ulonglong)bVar26;
        }
        if (local_390 == '\0') {
          local_390 = '\x01';
          *(int *)(local_3a8 + 4) = *(int *)(local_3a8 + 4) + -1;
          if (local_398 != local_3a8[2]) {
            FMemStackBase::FreeChunks();
          }
          *local_3a8 = local_3a0;
          local_3a8[3] = local_388;
          local_3a0 = 0;
        }
        uVar14 = local_33c;
        if (*(byte *)(lVar15 + 0x95) != local_33c) {
          FUN_14223ef90(lVar15,local_33c != 0);
          if ((char)uVar14 == '\x02') {
            FUN_14223d640(lVar15,1,0);
          }
        }
      }
      else {
        uVar20 = 0;
      }
      if (local_68 != 0) {
        FMemory::Free();
      }
      if (local_78 != 0) {
        FMemory::Free();
      }
      if (local_d8 != 0) {
        FMemory::Free();
      }
      FArchive::~FArchive(local_168);
      goto LAB_1423fa853;
    }
    local_1e0 = *(undefined8 *)(*plVar2 + 0x18);
    FName::ToString(&local_1e0,&local_1c0);
    puVar23 = &DAT_143f3eda8;
    if (local_1b8 != 0) {
      puVar23 = local_1c0;
    }
    FString::PrintfImpl(local_190,
                        L"Attempt to replicate \'%s\' while already replicating that Actor!",puVar23
                       );
    if (local_1c0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_190[0] != 0) {
      FMemory::Free();
    }
  }
  else if (*(int *)((longlong)param_1 + 0x4c) < 1) {
    *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xfffffeff;
    goto LAB_1423f99f1;
  }
  uVar20 = 0;
LAB_1423fa853:
  if (bVar25 == 0) {
    QueryPerformanceCounter(&local_1c8);
    DAT_146af1a50 = DAT_146af1a50 + ((double)local_1c8.QuadPart * DAT_1468b02f8 - dVar4);
  }
  return uVar20;
}



// FUNCTION 1423fa8e0 FUN_1423fa8e0 body=1602 status=ok
// SIG undefined FUN_1423fa8e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1423fa8e0(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  int *piVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  undefined4 local_res18 [2];
  undefined1 auStack_1e8 [32];
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  int *local_1b8;
  undefined4 local_1b0;
  longlong local_1a8;
  undefined8 *local_1a0;
  int local_198;
  int local_194;
  undefined8 local_190;
  longlong *plStack_188;
  int local_180 [2];
  longlong local_178;
  undefined8 local_168;
  longlong *plStack_160;
  undefined8 local_158;
  longlong *plStack_150;
  undefined8 local_148;
  int *local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128 [18];
  longlong local_98;
  ulonglong local_68 [2];
  longlong *plStack_58;
  undefined8 local_50;
  longlong *plStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  if ((int)param_1[0x1a] != 0) {
    lVar18 = param_1[2];
    lVar16 = *(longlong *)(param_1[0x1f] + 0x28);
    local_res18[0] = param_3;
    local_1a8 = lVar16;
    local_1a0 = param_2;
    local_130 = lVar18;
    FRepState::BuildConditionMap(local_68,local_res18);
    local_148 = FUN_1423efcc0(param_1[0x1f],lVar18);
    FNetBitWriter::FNetBitWriter
              (local_128,*(undefined8 *)(*(longlong *)(param_1[0x1f] + 0x28) + 0x68));
    local_194 = 0;
    if (0 < (int)param_1[0x1a]) {
      local_178 = 0;
      do {
        local_198 = *(int *)(param_1[0x19] + local_178 * 4);
        lVar14 = (longlong)local_198 * 0x30 + param_1[3];
        uVar7 = *(undefined8 *)((longlong)local_198 * 0x10 + *(longlong *)(*param_1 + 0xd8));
        local_138 = uVar7;
        if ((local_178 < 0) || ((int)param_1[0x1c] <= local_194)) {
          uVar17 = *(uint *)(lVar14 + 0x28);
LAB_1423faa49:
          *(uint *)(lVar14 + 0x28) = uVar17 & 0xfffffff7;
          local_158 = 0;
          plStack_150 = (longlong *)0x0;
          FUN_141693430();
          if (*(char *)(param_1[0x1e] + 0x17e8) == '\0') {
            plVar11 = (longlong *)(lVar14 + 8);
            iVar10 = *(int *)(lVar16 + 0x1574);
            lVar18 = *(longlong *)(lVar14 + 8);
            plVar15 = plVar11;
            while (lVar18 != 0) {
              plVar15 = (longlong *)(lVar18 + 8);
              if (*(int *)(lVar18 + 0x24) <= iVar10) {
                *plVar11 = *(longlong *)(lVar18 + 8);
                plVar15 = *(longlong **)(lVar18 + 0x18);
                if (plVar15 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plVar15 + 1;
                  lVar16 = *plVar1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)lVar16 == 1) {
                    (**(code **)*plVar15)(plVar15);
                    LOCK();
                    piVar13 = (int *)((longlong)plVar15 + 0xc);
                    iVar5 = *piVar13;
                    *piVar13 = *piVar13 + -1;
                    UNLOCK();
                    if (iVar5 == 1) {
                      (**(code **)(*plVar15 + 8))(plVar15,1);
                    }
                  }
                }
                FMemory::operator_delete(lVar18,0x30);
                plVar15 = plVar11;
              }
              lVar18 = *plVar15;
            }
            if ((int)param_1[6] != *(int *)((longlong)param_1 + 0x5c)) {
              plVar11 = (longlong *)param_1[0xd];
              if ((longlong *)param_1[0xd] == (longlong *)0x0) {
                plVar11 = param_1 + 0xc;
              }
              iVar10 = *(int *)((longlong)plVar11 +
                               ((longlong)(int)param_1[0xe] - 1U & (longlong)local_198) * 4);
              if (iVar10 != -1) {
                do {
                  piVar13 = (int *)((longlong)iVar10 * 0x20 + param_1[5]);
                  if (*piVar13 == local_198) {
                    if ((iVar10 != -1) && (piVar13 != (int *)0x0)) goto LAB_1423facb0;
                    break;
                  }
                  iVar10 = piVar13[6];
                } while (iVar10 != -1);
              }
            }
            local_140 = &local_198;
            FUN_1423e3100(param_1 + 5,local_180,&local_140,0);
            piVar13 = (int *)((longlong)local_180[0] * 0x20 + param_1[5]);
LAB_1423facb0:
            lVar18 = local_130;
            uVar7 = local_138;
            piVar2 = piVar13 + 2;
            local_1b0 = local_res18[0];
            local_1c0 = &local_158;
            local_1c8 = local_128;
            local_1b8 = piVar2;
            cVar9 = FUN_1423fcc50(local_1a8,local_130,local_138);
            if (cVar9 != '\0') {
              puVar12 = (undefined4 *)operator_new();
              if (puVar12 != (undefined4 *)0x0) {
                *puVar12 = 0xdf41c9a3;
                *(undefined8 *)(puVar12 + 2) = 0;
                *(undefined8 *)(puVar12 + 4) = 0;
                *(undefined8 *)(puVar12 + 6) = 0;
                *(undefined8 *)(puVar12 + 8) = 0xffffffffffffffff;
                puVar12[10] = puVar12[10] & 0xfffffff0;
              }
              *plVar15 = (longlong)puVar12;
              puVar3 = (undefined8 *)(puVar12 + 4);
              plVar11 = *(longlong **)(piVar13 + 4);
              uVar8 = *(undefined8 *)piVar2;
              if (plVar11 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
                UNLOCK();
              }
              local_190 = uVar8;
              plStack_188 = plVar11;
              if (&local_190 != puVar3) {
                local_190 = *puVar3;
                plStack_188 = *(longlong **)(puVar12 + 6);
                *puVar3 = uVar8;
                *(longlong **)(puVar12 + 6) = plVar11;
                local_68[1] = uVar8;
                plStack_58 = plVar11;
              }
              plVar11 = plStack_188;
              if (plStack_188 != (longlong *)0x0) {
                LOCK();
                plVar15 = plStack_188 + 1;
                lVar16 = *plVar15;
                *(int *)plVar15 = (int)*plVar15 + -1;
                UNLOCK();
                if ((int)lVar16 == 1) {
                  (**(code **)*plStack_188)(plStack_188);
                  LOCK();
                  piVar4 = (int *)((longlong)plVar11 + 0xc);
                  iVar10 = *piVar4;
                  *piVar4 = *piVar4 + -1;
                  UNLOCK();
                  if (iVar10 == 1) {
                    (**(code **)(*plStack_188 + 8))(plStack_188,1);
                  }
                }
              }
              local_168 = local_158;
              plStack_160 = plStack_150;
              if (plStack_150 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
                UNLOCK();
              }
              if ((int *)&local_168 != piVar2) {
                local_168 = *(undefined8 *)piVar2;
                plStack_160 = *(longlong **)(piVar13 + 4);
                local_50 = local_158;
                plStack_48 = plStack_150;
                *(undefined8 *)piVar2 = local_158;
                *(longlong **)(piVar13 + 4) = plStack_150;
              }
              plVar11 = plStack_160;
              if (plStack_160 != (longlong *)0x0) {
                LOCK();
                plVar15 = plStack_160 + 1;
                lVar16 = *plVar15;
                *(int *)plVar15 = (int)*plVar15 + -1;
                UNLOCK();
                if ((int)lVar16 == 1) {
                  (**(code **)*plStack_160)(plStack_160);
                  LOCK();
                  piVar13 = (int *)((longlong)plVar11 + 0xc);
                  iVar10 = *piVar13;
                  *piVar13 = *piVar13 + -1;
                  UNLOCK();
                  if (iVar10 == 1) {
                    (**(code **)(*plStack_160 + 8))(plStack_160,1);
                  }
                }
              }
              local_1c0 = local_128;
              local_1c8 = local_1a0;
              FUN_1423ffc60(param_1,lVar18,uVar7);
            }
            plVar11 = plStack_150;
            lVar16 = local_1a8;
            param_2 = local_1a0;
            if (plStack_150 != (longlong *)0x0) {
              LOCK();
              plVar15 = plStack_150 + 1;
              lVar14 = *plVar15;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*plStack_150)(plStack_150);
                LOCK();
                piVar13 = (int *)((longlong)plVar11 + 0xc);
                iVar10 = *piVar13;
                *piVar13 = *piVar13 + -1;
                UNLOCK();
                lVar16 = local_1a8;
                param_2 = local_1a0;
                if (iVar10 == 1) {
                  (**(code **)(*plVar11 + 8))(plVar11,1);
                  lVar16 = local_1a8;
                  param_2 = local_1a0;
                }
              }
            }
          }
          else {
            if ((int)param_1[0x10] != *(int *)((longlong)param_1 + 0xac)) {
              plVar11 = (longlong *)param_1[0x17];
              if ((longlong *)param_1[0x17] == (longlong *)0x0) {
                plVar11 = param_1 + 0x16;
              }
              iVar10 = *(int *)((longlong)plVar11 +
                               ((longlong)(int)param_1[0x18] - 1U & (longlong)local_198) * 4);
              if (iVar10 != -1) {
                do {
                  local_1b8 = (int *)((longlong)iVar10 * 0x20 + param_1[0xf]);
                  if (*local_1b8 == local_198) {
                    if (iVar10 != -1) goto LAB_1423faaf0;
                    break;
                  }
                  iVar10 = local_1b8[6];
                } while (iVar10 != -1);
              }
            }
            local_1b8 = (int *)0x0;
LAB_1423faaf0:
            local_1b8 = local_1b8 + 2;
            local_1b0 = local_res18[0];
            local_1c0 = &local_158;
            local_1c8 = local_128;
            cVar9 = FUN_1423fcc50(lVar16,lVar18,uVar7);
            if (cVar9 != '\0') {
              local_1c0 = local_128;
              local_1c8 = param_2;
              FUN_1423ffc60(param_1,lVar18,uVar7);
            }
            plVar11 = plStack_150;
            if (plStack_150 != (longlong *)0x0) {
              LOCK();
              plVar15 = plStack_150 + 1;
              lVar14 = *plVar15;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*plStack_150)(plStack_150);
                LOCK();
                piVar13 = (int *)((longlong)plVar11 + 0xc);
                iVar10 = *piVar13;
                *piVar13 = *piVar13 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*plVar11 + 8))(plVar11,1);
                }
              }
            }
          }
        }
        else {
          uVar17 = *(uint *)(lVar14 + 0x28);
          if (((uVar17 & 8) != 0) ||
             (uVar6 = *(uint *)(param_1[0x1b] + local_178 * 4),
             (local_68[uVar6 >> 6] >> (uVar6 & 0x3f) & 1) != 0)) goto LAB_1423faa49;
        }
        local_194 = local_194 + 1;
        local_178 = local_178 + 1;
      } while (local_194 < (int)param_1[0x1a]);
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(local_128);
  }
  return;
}



// FUNCTION 1423faf30 FUN_1423faf30 body=621 status=ok
// SIG undefined FUN_1423faf30(void)

ulonglong FUN_1423faf30(undefined8 *param_1,longlong param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  ulonglong in_RAX;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  uint local_res18 [2];
  undefined1 local_d8 [144];
  longlong local_48;
  longlong local_38;
  
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(param_1[0x1f] + 0x28);
    local_res18[0] = param_3;
    FNetBitWriter::FNetBitWriter(local_d8,*(undefined8 *)(param_2 + 0xb8),0x2000);
    lVar6 = param_1[0x58];
    lVar7 = param_1[100];
    iVar1 = *(int *)(*(longlong *)(param_1[0x1e] + 0x58) + 0x350);
    lVar5 = param_1[0x1f];
    if (((((*(uint *)(lVar5 + 0x88) >> 1 & 1) != 0) || (DAT_146531fac == 0)) ||
        ((local_res18[0] & 2) != 0)) ||
       ((*(int *)(lVar6 + 0x4cc) < 2 || (*(int *)(lVar7 + 0x20) != iVar1)))) {
      FUN_142726050(*(undefined8 *)(lVar7 + 8),lVar6,*(undefined8 *)(lVar7 + 0x18),lVar2,local_res18
                   );
      *(int *)(lVar7 + 0x20) = iVar1;
      lVar7 = param_1[100];
      lVar6 = param_1[0x58];
      lVar5 = param_1[0x1f];
    }
    uVar4 = FUN_142738560(param_1[0x56],lVar6,*(undefined8 *)(lVar7 + 0x18),lVar2,*param_1,lVar5,
                          local_d8,local_res18);
    FUN_1423fa8e0(param_1,local_d8,local_res18[0]);
    if (*(char *)(lVar3 + 0x17e8) == '\0') {
      *(uint *)(param_1 + 0x1d) = *(uint *)(param_1 + 0x1d) & 0xfffffffe;
      lVar3 = param_1[0x68];
      *(uint *)(param_1 + 0x1d) = *(uint *)(param_1 + 0x1d) | (uint)(local_38 == 0);
      if ((lVar3 != 0) && (0 < *(longlong *)(lVar3 + 0xa0))) {
        FBitWriter::SerializeBits(local_d8,*(undefined8 *)(lVar3 + 0x90));
        (**(code **)(*(longlong *)param_1[0x68] + 0x168))();
        *(undefined4 *)(param_1 + 0x67) = 0;
        if (*(int *)((longlong)param_1 + 0x33c) != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x66,0);
        }
      }
      bVar8 = local_38 != 0;
      if (local_38 != 0) {
        FUN_1423ffa60(param_1[0x1f],lVar2,param_2,uVar4,local_d8);
      }
    }
    else if (local_38 == 0) {
      bVar8 = false;
    }
    else {
      FUN_1423ffa60(param_1[0x1f],lVar2,param_2,uVar4,local_d8);
      bVar8 = true;
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(local_d8);
    return (ulonglong)bVar8;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1423fb1a0 FUN_1423fb1a0 body=284 status=ok
// SIG undefined FUN_1423fb1a0(void)

char FUN_1423fb1a0(longlong param_1,undefined8 param_2,longlong param_3,undefined4 *param_4)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [144];
  longlong local_48;
  
  cVar2 = FNetGUIDCache::SupportsObject
                    (*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 0xe0),
                     param_2,0);
  if (cVar2 == '\0') {
    FUN_1425dc910(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 0xe0),
                  local_res8,param_2);
  }
  FWeakObjectPtr::operator=(&local_e8,param_2);
  local_e0 = local_e8;
  piVar3 = (int *)TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
                  ::FindId(param_1 + 0x98,local_res8,&local_e0);
  iVar1 = *piVar3;
  if (iVar1 == -1) {
    *(byte *)(param_3 + 0xe8) = *(byte *)(param_3 + 0xe8) | 0x20;
  }
  puVar4 = (undefined8 *)FUN_1423ed210(param_1,&local_e8);
  cVar2 = FUN_1423faf30(*puVar4,param_3,*param_4);
  if ((iVar1 == -1) && (cVar2 == '\0')) {
    FNetBitWriter::FNetBitWriter(local_d8);
    FUN_1423ffa60(param_1,param_2,param_3,0,local_d8);
    if (local_48 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(local_d8);
    cVar2 = '\x01';
  }
  return cVar2;
}



// FUNCTION 1423fb2c0 FUN_1423fb2c0 body=568 status=ok
// SIG undefined FUN_1423fb2c0(void)

void FUN_1423fb2c0(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint *puVar8;
  int local_res8 [2];
  undefined8 local_res10;
  int local_88;
  uint uStack_84;
  int iStack_80;
  uint uStack_7c;
  undefined8 local_78;
  uint uStack_70;
  int iStack_6c;
  undefined1 local_68 [16];
  longlong *local_58;
  undefined2 local_50;
  longlong *local_48;
  int iStack_40;
  uint uStack_3c;
  uint *puStack_38;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 == 0) {
    lVar4 = FTableRowBase::StaticStruct();
  }
  plVar7 = (longlong *)param_2[1];
  local_res8[0] = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 100);
  if ((int *)plVar7[1] < (int *)*plVar7 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar7;
    *plVar7 = *plVar7 + 4;
  }
  plVar7 = (longlong *)(param_1 + 0x30);
  local_88 = 0;
  uStack_84 = 1;
  iVar1 = *(int *)(param_1 + 0x58);
  puStack_38 = (uint *)(param_1 + 0x40);
  local_78._4_4_ = 0;
  uStack_70 = 0;
  if (iVar1 != 0) {
    puVar8 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar8 = puStack_38;
    }
    uVar2 = *puVar8;
    uStack_70 = 0;
    local_88 = 0;
    while (uVar2 == 0) {
      lVar6 = (longlong)local_88;
      uStack_70 = uStack_70 + 0x20;
      iVar5 = local_88 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar5;
      if (bVar3) goto LAB_1423fb3ef;
      uVar2 = puVar8[lVar6 + 1];
    }
    uStack_84 = -uVar2 & uVar2;
    iVar5 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_78._4_4_ = (uStack_70 - iVar5) + 0x1f;
    if (iVar1 < local_78._4_4_) {
LAB_1423fb3ef:
      local_78._4_4_ = iVar1;
    }
  }
  auStack_30._4_4_ = local_78._4_4_;
  auStack_30._0_4_ = 0xffffffff;
  auStack_30._8_4_ = uStack_70;
  auStack_30._12_4_ = iStack_6c;
  iStack_40 = local_88;
  uStack_3c = uStack_84;
  local_50 = 0;
  local_20._0_4_ = SUB84(plVar7,0);
  local_20._4_4_ = (undefined4)((ulonglong)plVar7 >> 0x20);
  uStack_70 = 0xffffffff;
  iStack_6c = local_78._4_4_;
  iStack_80 = local_88;
  uStack_7c = uStack_84;
  local_68._8_4_ = (undefined4)local_20;
  local_68._0_8_ = auStack_30._8_8_;
  local_68._12_4_ = local_20._4_4_;
  bVar3 = local_78._4_4_ < *(int *)(param_1 + 0x58);
  local_58 = plVar7;
  local_48 = plVar7;
  local_20 = plVar7;
  local_78 = puStack_38;
  if (bVar3) {
    do {
      lVar6 = (longlong)iStack_6c;
      local_res10 = *(undefined8 *)(lVar6 * 0x18 + *plVar7);
      (**(code **)(*param_2 + 0x40))(param_2,&local_res10);
      FUN_141725e50(lVar4,param_2,*(undefined8 *)(lVar6 * 0x18 + 8 + *plVar7),0);
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
    } while (iStack_6c < (int)local_78[6]);
    if (((char)local_50 != '\0') && (local_50._1_1_ != '\0')) {
      TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 1423fb500 FUN_1423fb500 body=439 status=ok
// SIG undefined FUN_1423fb500(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423fb500(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_res8;
  longlong local_18 [2];
  
  if (DAT_146af1a70 != 0) {
    lVar2 = FUN_142548760(DAT_146af1a70,0);
    if (lVar2 != 0) {
      local_res8 = *(undefined8 *)(lVar2 + 0x18);
      FName::ToString(&local_res8,local_18);
      FOutputDevice::CanBeUsedOnAnyThread(local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
  }
  uVar3 = FWeakObjectPtr::Get(param_2 + 0x6c);
  *(undefined8 *)(param_1 + 0x840) = uVar3;
  uVar3 = FWeakObjectPtr::Get(param_2 + 0x74);
  *(undefined8 *)(param_1 + 0x848) = uVar3;
  _DAT_146af1a60 = *(undefined8 *)(param_1 + 0x840);
  _DAT_146af1a68 = *(undefined8 *)(param_1 + 0x848);
  DAT_146af1a70 = 0;
  lVar2 = *(longlong *)(param_1 + 0x848);
  if (lVar2 != 0) {
    lVar4 = FUN_142a232e0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (0 < *(int *)(lVar2 + 0x760))) {
      local_18[0] = 0;
      local_18[1] = 0;
      plVar5 = (longlong *)FUN_1423d3320(lVar2,*(undefined8 *)(lVar2 + 0x758),local_18);
      if ((plVar5 != (longlong *)0x0) && ((longlong *)*plVar5 != (longlong *)0x0)) {
        DAT_146af1a70 = (**(code **)(*(longlong *)*plVar5 + 0x30))();
        if (DAT_146af1a70 != 0) {
          lVar2 = FUN_142548760(DAT_146af1a70,0);
          if (lVar2 != 0) {
            local_res8 = *(undefined8 *)(lVar2 + 0x18);
            FName::ToString(&local_res8,local_18);
            FOutputDevice::CanBeUsedOnAnyThread(local_18);
            if (local_18[0] != 0) {
              FMemory::Free();
            }
          }
        }
      }
    }
  }
  FUN_1429257e0(param_1,*(undefined8 *)(param_1 + 0x840),param_2 + 0x20,param_2 + 0x38,param_2);
  return;
}



// FUNCTION 1423fb6c0 FUN_1423fb6c0 body=369 status=ok
// SIG undefined FUN_1423fb6c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1423fb6c0(longlong *param_1)

{
  char cVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  undefined1 *local_190;
  undefined *local_188;
  undefined1 local_178 [8];
  undefined8 local_170;
  float local_168;
  float local_160;
  float local_15c;
  float local_158;
  undefined1 local_150 [16];
  undefined1 local_140 [24];
  undefined1 local_128 [12];
  undefined4 local_11c;
  undefined1 local_98 [72];
  longlong local_50;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  (**(code **)(*param_1 + 0x7a8))(param_1,&local_160,local_150);
  _guard_xfg_dispatch_icall_nop(local_128,0,0x90);
  local_11c = 0x3f800000;
  local_170 = 0;
  local_198 = param_1;
  FUN_1422ffb20(local_98,0,local_178,1);
  pfVar2 = (float *)FRotator::Vector(local_150,local_140);
  local_168 = local_158 + pfVar2[2] * 100000.0;
  local_170 = CONCAT44(local_15c + pfVar2[1] * 100000.0,*pfVar2 * 100000.0 + local_160);
  uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  local_188 = &DAT_146aefe68;
  local_190 = local_98;
  local_198 = (longlong *)CONCAT44(local_198._4_4_,2);
  cVar1 = UWorld::LineTraceSingleByChannel(uVar3,local_128,&local_160,&local_170);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0xf40))(param_1,local_128);
  }
  if (local_30 != 0) {
    FMemory::Free();
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1423fb840 FUN_1423fb840 body=2522 status=ok
// SIG undefined FUN_1423fb840(void)

undefined8 *
FUN_1423fb840(longlong *param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  int *piVar1;
  void *_Src;
  undefined4 uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  byte bVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  byte bVar14;
  byte bVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  uint local_res8 [2];
  undefined8 *local_res10;
  undefined8 *local_res18;
  undefined8 local_188;
  undefined8 local_180;
  int local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  longlong *local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined **local_148;
  longlong *local_140;
  longlong local_b8;
  byte local_60;
  longlong local_58;
  longlong local_48;
  
  if (*(int *)((longlong)param_1 + 0x34) == -1) {
    *param_2 = 0xffffffffffffffff;
    return param_2;
  }
  if (((*(int *)((longlong)param_1 + 0x3c) == -1) || (*(char *)(param_1[5] + 0x17e8) != '\0')) &&
     ((int)param_1[7] != 0)) {
    bVar7 = *(byte *)(param_3 + 0x1d);
    *(byte *)(param_3 + 0x1d) = bVar7 | 2;
    *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xffffffef;
    *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | (~(uint)(bVar7 >> 5) & 1) << 4;
  }
  lVar18 = param_1[5];
  iVar20 = -0x50;
  if (*(char *)(lVar18 + 0x193c) != '\0') {
    iVar20 = -0x68;
  }
  iVar20 = (iVar20 - *(int *)(lVar18 + 0x128)) + *(int *)(lVar18 + 0xa0) * 8;
  lVar17 = (longlong)iVar20;
  lVar18 = ((longlong)(lVar17 + (ulonglong)(iVar20 >> 0x1f & 7)) >> 3) * 8;
  local_res10 = param_2;
  local_res18 = param_3;
  local_180 = (void *)lVar18;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146af2428) && (_Init_thread_header(&DAT_146af2428), DAT_146af2428 == -1))
  {
    atexit((_func_5014 *)&LAB_143eaafd0);
    _Init_thread_footer(&DAT_146af2428);
  }
  plVar16 = (longlong *)0x0;
  DAT_146af2420 = 0;
  if ((DAT_146af2424 < 0) && (DAT_146af2424 != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146af2418,0);
  }
  lVar22 = param_1[5];
  if ((*(byte *)(lVar22 + 0xa4) & 1) == 0) {
    (**(code **)(*param_1 + 0x2b8))(param_1,&DAT_146af2418);
    lVar22 = param_1[5];
  }
  plVar10 = (longlong *)(param_4 & 0xff);
  if (DAT_146af2420 != 0) {
    plVar10 = plVar16;
  }
  local_res8[0] = (uint)plVar10;
  cVar6 = (**(code **)(**(longlong **)(lVar22 + 0x58) + 0x368))();
  if (cVar6 != '\0') {
    (**(code **)(*param_1 + 0x2c0))(param_1,param_3);
    if ((*(byte *)((longlong)param_3 + 0xe9) & 4) != 0) {
      plVar10 = plVar16;
    }
    local_res8[0] = (uint)plVar10;
  }
  local_168 = (longlong *)0x0;
  if ((((((char)plVar10 != '\0') &&
        (lVar22 = param_1[5], *(int *)(lVar22 + 0x328) == *(int *)(param_3 + 0x1b))) &&
       (*(char *)(lVar22 + 0x240) != '\0')) &&
      ((*(longlong *)(lVar22 + 0x238) != 0 &&
       (*(longlong *)(lVar22 + 0x238) == *(longlong *)(lVar22 + 0x550))))) &&
     (*(longlong *)(lVar22 + 0x2f0) + param_3[0x14] <= lVar17)) {
    (**(code **)(*(longlong *)(lVar22 + 0x250) + 0x58))((longlong *)(lVar22 + 0x250),param_3[0x12]);
    *(byte *)(param_1[5] + 0x338) = *(byte *)(param_1[5] + 0x338) | *(byte *)(param_3 + 0x1d) & 0x20
    ;
    *(byte *)(param_1[5] + 0x338) = *(byte *)(param_1[5] + 0x338) | *(byte *)(param_3 + 0x1d) & 2;
    *(byte *)(param_1[5] + 0x338) = *(byte *)(param_1[5] + 0x338) | *(byte *)(param_3 + 0x1d) & 4;
    local_168 = *(longlong **)(param_1[5] + 0x248);
    param_3 = (undefined8 *)(param_1[5] + 0x250);
    local_res18 = param_3;
    FUN_1425c6c40();
    piVar1 = (int *)(*(longlong *)(param_1[5] + 0x58) + 0x1ac);
    *piVar1 = *piVar1 + -1;
  }
  iVar20 = DAT_146af2420;
  lVar22 = param_3[0x14];
  if (lVar17 < lVar22) {
    lVar17 = param_3[0x12];
    local_res8[0] = local_res8[0] & 0xffffff00;
    while (0 < lVar22) {
      lVar9 = operator_new(0x110);
      plVar10 = plVar16;
      if (lVar9 != 0) {
        plVar10 = (longlong *)FUN_1423e4ec0(lVar9,param_1,0);
      }
      if (lVar22 <= lVar18) {
        lVar18 = lVar22;
      }
      (**(code **)(*plVar10 + 0x58))(plVar10,lVar17);
      iVar20 = DAT_146af2420;
      lVar9 = (longlong)DAT_146af2420;
      DAT_146af2420 = DAT_146af2420 + 1;
      if (DAT_146af2424 < DAT_146af2420) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146af2418,iVar20);
      }
      lVar17 = lVar17 + (lVar18 >> 3);
      *(longlong **)(DAT_146af2418 + lVar9 * 8) = plVar10;
      lVar22 = lVar22 - lVar18;
      lVar18 = (longlong)local_180;
      param_3 = local_res18;
    }
  }
  else {
    lVar18 = (longlong)DAT_146af2420;
    DAT_146af2420 = DAT_146af2420 + 1;
    if (DAT_146af2424 < DAT_146af2420) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&DAT_146af2418,iVar20);
    }
    *(undefined8 **)(DAT_146af2418 + lVar18 * 8) = param_3;
  }
  bVar7 = *(byte *)(param_3 + 0x1d);
  iVar21 = *(int *)((longlong)param_1 + 0x4c) + DAT_146af2420;
  local_188 = 0xffffffffffffffff;
  iVar20 = (bVar7 >> 2 & 1) + 0x100;
  if (((0 < DAT_146af1a78) && (DAT_146af1a78 <= DAT_146af2420)) &&
     (((*(byte *)(param_1[5] + 0xa4) & 1) == 0 && (iVar21 < iVar20)))) {
    *(byte *)(param_3 + 0x1d) = bVar7 | 0x20;
    *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 0x100;
    bVar7 = *(byte *)(param_3 + 0x1d);
  }
  if (((bVar7 & 0x20) == 0) || (iVar21 < iVar20)) {
    plVar10 = plVar16;
    plVar13 = plVar16;
    if (0 < DAT_146af2420) {
      do {
        plVar3 = local_168;
        plVar19 = *(longlong **)(DAT_146af2418 + (longlong)plVar10 * 8);
        bVar7 = *(byte *)((longlong)plVar19 + 0xe9);
        *(byte *)(plVar19 + 0x1d) =
             *(byte *)(plVar19 + 0x1d) ^
             (*(byte *)(param_3 + 0x1d) ^ *(byte *)(plVar19 + 0x1d)) & 0x20;
        bVar14 = (*(byte *)(param_3 + 0x1d) ^ *(byte *)(plVar19 + 0x1d)) & 2 ^
                 *(byte *)(plVar19 + 0x1d);
        *(byte *)(plVar19 + 0x1d) = bVar14;
        bVar14 = (bVar14 ^ *(byte *)(param_3 + 0x1d)) & 4 ^ bVar14;
        *(byte *)(plVar19 + 0x1d) = bVar14;
        bVar14 = (bVar14 ^ *(byte *)(param_3 + 0x1d)) & 8 ^ bVar14;
        *(byte *)(plVar19 + 0x1d) = bVar14;
        bVar14 = (bVar14 ^ *(byte *)(param_3 + 0x1d)) & 0x10 ^ bVar14;
        *(byte *)(plVar19 + 0x1d) = bVar14;
        *(undefined4 *)(plVar19 + 0x1b) = *(undefined4 *)(param_3 + 0x1b);
        *(undefined4 *)((longlong)plVar19 + 0xdc) = *(undefined4 *)((longlong)param_3 + 0xdc);
        if ((bVar7 & 2) == 0) {
          bVar7 = *(byte *)((longlong)param_3 + 0xe9) & 4 | bVar7;
          *(byte *)((longlong)plVar19 + 0xe9) = bVar7;
        }
        iVar20 = (int)plVar13;
        if (1 < DAT_146af2420) {
          bVar15 = 0;
          if (iVar20 == 0) {
            bVar15 = 0x80;
          }
          bVar15 = bVar15 | bVar14 & 0x3f | 0x40;
          *(byte *)(plVar19 + 0x1d) = bVar15;
          *(byte *)((longlong)plVar19 + 0xe9) = iVar20 == DAT_146af2420 + -1 | bVar7 & 0xfe;
          bVar14 = 0xfd;
          if (iVar20 == 0) {
            bVar14 = 0xff;
          }
          bVar14 = bVar14 & bVar15;
          *(byte *)(plVar19 + 0x1d) = bVar14;
          if (((*(byte *)(param_3 + 0x1d) & 4) == 0) || (DAT_146af2420 + -1 != iVar20)) {
            bVar14 = bVar14 & 0xfb;
            *(byte *)(plVar19 + 0x1d) = bVar14;
          }
          else {
            bVar14 = bVar14 & 0xfb | 4;
            *(byte *)(plVar19 + 0x1d) = bVar14;
          }
        }
        lVar18 = param_1[5];
        if (*(char *)(lVar18 + 0x17e8) == '\0') {
          if ((bVar14 & 0x20) == 0) {
            *(undefined8 *)(lVar18 + 0x248) = 0;
          }
          else if (local_168 == (longlong *)0x0) {
            plVar19[0x18] = 0;
            iVar21 = *(int *)((longlong)param_1 + 0x34);
            lVar18 = *(longlong *)(param_1[5] + 0x1590);
            piVar1 = (int *)(lVar18 + (longlong)iVar21 * 4);
            *piVar1 = *piVar1 + 1;
            *(undefined4 *)(plVar19 + 0x1c) = *(undefined4 *)(lVar18 + (longlong)iVar21 * 4);
            *(int *)((longlong)param_1 + 0x4c) = *(int *)((longlong)param_1 + 0x4c) + 1;
            lVar18 = operator_new(0x110);
            plVar13 = plVar16;
            if (lVar18 != 0) {
              plVar13 = (longlong *)FOutBunch::FOutBunch(lVar18,plVar19);
            }
            plVar19 = param_1 + 0xb;
            lVar18 = param_1[0xb];
            while (lVar18 != 0) {
              plVar19 = (longlong *)(lVar18 + 0xc0);
              lVar18 = *plVar19;
            }
            *plVar19 = (longlong)plVar13;
            *(longlong **)(param_1[5] + 0x248) = plVar13;
            plVar19 = plVar13;
          }
          else {
            plVar19[0x18] = local_168[0x18];
            FOutBunch::operator=(local_168,plVar19);
            *(longlong **)(param_1[5] + 0x248) = plVar3;
            plVar19 = plVar3;
          }
          lVar18 = param_1[5];
          if (*(char *)(lVar18 + 0x17e8) != '\0') goto LAB_1423fc05f;
          *(byte *)(plVar19 + 0x1d) = *(byte *)(plVar19 + 0x1d) & 0xfe;
          uVar8 = FUN_1425cc170(param_1[5],plVar19,(undefined1)local_res8[0]);
          if ((*(int *)((longlong)param_1 + 0x3c) == -1) && ((int)param_1[7] != 0)) {
            local_180 = (void *)CONCAT44(uVar8,uVar8);
            *(void **)((longlong)param_1 + 0x3c) = local_180;
          }
          if ((*(byte *)(plVar19 + 0x1d) & 4) != 0) {
            (**(code **)(*param_1 + 0x280))(param_1);
          }
        }
        else {
LAB_1423fc05f:
          uVar8 = FUN_1425cc170(lVar18,plVar19,(undefined1)local_res8[0]);
        }
        uVar4 = uVar8;
        uVar5 = uVar8;
        uVar2 = uVar8;
        if (plVar10 != (longlong *)0x0) {
          uVar4 = local_170;
          uVar5 = uStack_16c;
          uVar2 = (undefined4)local_188;
        }
        uStack_16c = uVar5;
        local_170 = uVar4;
        local_188 = CONCAT44(uVar2,uVar8);
        FOutBunch::operator=(param_1[5] + 0x250,plVar19);
        lVar18 = param_1[5];
        plVar19 = *(longlong **)(lVar18 + 0x550);
        local_160 = CONCAT31(local_160._1_3_,*(byte *)(lVar18 + 0x4d8) >> 7);
        uStack_158._0_4_ = SUB84(plVar19,0);
        uStack_158._4_4_ = (undefined4)((ulonglong)plVar19 >> 0x20);
        *(undefined4 *)(lVar18 + 0x230) = local_160;
        *(undefined4 *)(lVar18 + 0x234) = uStack_15c;
        *(undefined4 *)(lVar18 + 0x238) = (undefined4)uStack_158;
        *(undefined4 *)(lVar18 + 0x23c) = uStack_158._4_4_;
        plVar10 = (longlong *)((longlong)plVar10 + 1);
        plVar13 = (longlong *)(ulonglong)(iVar20 + 1U);
        uStack_158 = plVar19;
      } while ((int)(iVar20 + 1U) < DAT_146af2420);
      bVar7 = *(byte *)(param_3 + 0x1d);
    }
    iVar20 = DAT_146af2420;
    if (((bVar7 & 2) != 0) && (*(char *)(param_1[5] + 0x17e8) == '\0')) {
      *(undefined8 *)((longlong)param_1 + 0x3c) = local_188;
      iVar20 = DAT_146af2420;
    }
    while ((iVar21 = (int)plVar16, -1 < iVar21 && (iVar21 < iVar20))) {
      puVar12 = *(undefined8 **)(DAT_146af2418 + (longlong)iVar21 * 8);
      if ((puVar12 != param_3) && (puVar12 != (undefined8 *)0x0)) {
        (**(code **)*puVar12)(puVar12,1);
        iVar20 = DAT_146af2420;
      }
      plVar16 = (longlong *)(ulonglong)(iVar21 + 1);
    }
    *local_res10 = local_188;
  }
  else {
    uVar11 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (&local_160,L"Outgoing reliable buffer overflow",L"NetworkErrors",
                        &DAT_145079900);
    puVar12 = (undefined8 *)FText::ToString(uVar11);
    local_180 = (void *)0x0;
    local_178 = *(int *)(puVar12 + 1);
    lVar18 = (longlong)local_178;
    _Src = (void *)*puVar12;
    if (local_178 == 0) {
      local_174 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_180,local_178,0);
      _guard_xfg_dispatch_icall_nop(local_180,_Src,lVar18 * 2);
    }
    if (uStack_158 != (longlong *)0x0) {
      LOCK();
      plVar16 = uStack_158 + 1;
      lVar18 = *plVar16;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*uStack_158)(uStack_158);
        LOCK();
        piVar1 = (int *)((longlong)uStack_158 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*uStack_158 + 8))(uStack_158,1);
        }
      }
    }
    plVar16 = (longlong *)param_1[5];
    lVar18 = *(longlong *)plVar16[0x2b0];
    if ((lVar18 != 0) && ((*(byte *)(lVar18 + 0x30) & 2) == 0)) {
      FUN_1423e4ec0(&local_148,lVar18,0);
      local_60 = local_60 | 0x20;
      local_148 = &PTR__scalar_deleting_destructor__1450868e8;
      local_res8[0] = CONCAT31(local_res8[0]._1_3_,6);
      if ((undefined1 *)local_140[1] < (undefined1 *)*local_140 + 1) {
        FBitWriter::Serialize(&local_148,local_res8,1);
      }
      else {
        local_res8[0] = CONCAT31(local_res8[0]._1_3_,*(undefined1 *)*local_140);
        *local_140 = *local_140 + 1;
      }
      FUN_14158ce90(&local_148,&local_180);
      plVar16 = *(longlong **)plVar16[0x2b0];
      (**(code **)(*plVar16 + 0x2c8))(plVar16,&local_170,&local_148,1);
      if (local_48 != 0) {
        FMemory::Free();
      }
      if (local_58 != 0) {
        FMemory::Free();
      }
      if (local_b8 != 0) {
        FMemory::Free();
      }
      FArchive::~FArchive(&local_148);
      plVar16 = (longlong *)param_1[5];
    }
    (**(code **)(*plVar16 + 0x2c8))(plVar16,1);
    (**(code **)(*(longlong *)param_1[5] + 0x2f8))();
    puVar12 = local_res10;
    *local_res10 = 0xffffffffffffffff;
    local_res10 = puVar12;
    if (local_180 != (void *)0x0) {
      FMemory::Free();
      local_res10 = puVar12;
    }
  }
  return local_res10;
}



// FUNCTION 1423fc220 FUN_1423fc220 body=304 status=ok
// SIG undefined FUN_1423fc220(void)

undefined8 * FUN_1423fc220(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  if ((*(int *)(param_1 + 0x78) < 1) &&
     (*(int *)(param_1 + 0x4c) < (int)((*(byte *)(param_3 + 0xe8) >> 2 & 1) + 0xff))) {
    if (-1 < *(char *)(param_3 + 0x28)) {
      FUN_1423fb840(param_1,param_2);
      return param_2;
    }
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2f8))();
  }
  else if (*(int *)(param_1 + 0x78) < 0x8000) {
    lVar5 = (longlong)*(int *)(param_1 + 0x78);
    plVar1 = (longlong *)(param_1 + 0x70);
    iVar4 = *(int *)(param_1 + 0x78) + 1;
    *(int *)(param_1 + 0x78) = iVar4;
    if (*(int *)(param_1 + 0x7c) < iVar4) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar1);
    }
    lVar3 = *plVar1;
    *(undefined8 *)(lVar3 + lVar5 * 0x18) = 0;
    *(undefined8 *)(lVar3 + 8 + lVar5 * 0x18) = 0;
    *(undefined8 *)(lVar3 + 0x10 + lVar5 * 0x18) = 0;
    puVar2 = (undefined8 *)(*plVar1 + lVar5 * 0x18);
    iVar4 = (int)(*(longlong *)(param_3 + 0xa0) + 7 >> 3) + *(int *)(*plVar1 + 8 + lVar5 * 0x18);
    *(int *)(puVar2 + 1) = iVar4;
    if (*(int *)((longlong)puVar2 + 0xc) < iVar4) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(puVar2);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)*puVar2,*(void **)(param_3 + 0x90),*(longlong *)(param_3 + 0xa0) + 7 >> 3);
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_3 + 0xa0);
  }
  else {
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 300) = 1;
  }
  *param_2 = 0xffffffffffffffff;
  return param_2;
}



// FUNCTION 1423fc350 FUN_1423fc350 body=113 status=ok
// SIG undefined FUN_1423fc350(void)

undefined8 FUN_1423fc350(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1,4);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_14158ce90(param_2,param_1 + 2);
  return 1;
}



// FUNCTION 1423fc3d0 FUN_1423fc3d0 body=427 status=ok
// SIG undefined FUN_1423fc3d0(void)

void FUN_1423fc3d0(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint *puVar7;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  FUN_141763960();
  if ((*(byte *)(param_2 + 0x2a) & 0x20) != 0) {
    plVar6 = (longlong *)(param_1 + 0x98);
    local_78 = 0;
    uStack_74 = 1;
    iVar1 = *(int *)(param_1 + 0xc0);
    puStack_28 = (uint *)(param_1 + 0xa8);
    local_68._4_4_ = 0;
    uStack_60 = 0;
    if (iVar1 != 0) {
      puVar7 = *(uint **)(param_1 + 0xb8);
      if (*(uint **)(param_1 + 0xb8) == (uint *)0x0) {
        puVar7 = puStack_28;
      }
      uVar2 = *puVar7;
      uStack_60 = 0;
      local_78 = 0;
      while (uVar2 == 0) {
        lVar5 = (longlong)local_78;
        uStack_60 = uStack_60 + 0x20;
        iVar4 = local_78 + 1;
        bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar4;
        if (bVar3) goto LAB_1423fc4af;
        uVar2 = puVar7[lVar5 + 1];
      }
      uStack_74 = -uVar2 & uVar2;
      iVar4 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_68._4_4_ = (uStack_60 - iVar4) + 0x1f;
      if (iVar1 < local_68._4_4_) {
LAB_1423fc4af:
        local_68._4_4_ = iVar1;
      }
    }
    auStack_20._4_4_ = local_68._4_4_;
    auStack_20._0_4_ = 0xffffffff;
    auStack_20._8_4_ = uStack_60;
    auStack_20._12_4_ = iStack_5c;
    iStack_30 = local_78;
    uStack_2c = uStack_74;
    local_40 = 0;
    local_10._0_4_ = SUB84(plVar6,0);
    local_10._4_4_ = (undefined4)((ulonglong)plVar6 >> 0x20);
    uStack_60 = 0xffffffff;
    iStack_5c = local_68._4_4_;
    iStack_70 = local_78;
    uStack_6c = uStack_74;
    local_58._8_4_ = (undefined4)local_10;
    local_58._0_8_ = auStack_20._8_8_;
    local_58._12_4_ = local_10._4_4_;
    bVar3 = local_68._4_4_ < *(int *)(param_1 + 0xc0);
    local_48 = plVar6;
    local_38 = plVar6;
    local_10 = plVar6;
    local_68 = puStack_28;
    if (bVar3) {
      do {
        FUN_1423e9360(*(undefined8 *)((longlong)iStack_5c * 0x20 + 8 + *plVar6),param_2);
        uStack_60 = uStack_60 & ~uStack_6c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
      } while (iStack_5c < (int)local_68[6]);
      if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
        TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
      }
    }
  }
  return;
}



// FUNCTION 1423fc580 FUN_1423fc580 body=1324 status=ok
// SIG undefined FUN_1423fc580(void)

void FUN_1423fc580(longlong param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint *puVar11;
  int local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint uStack_a0;
  int iStack_9c;
  undefined1 local_98 [16];
  longlong *local_88;
  undefined2 local_80;
  undefined8 *local_78;
  longlong *local_70;
  int iStack_68;
  uint uStack_64;
  uint *puStack_60;
  undefined1 auStack_58 [16];
  undefined8 local_48;
  undefined8 *puVar10;
  
  FUN_141763960();
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 2) == 0) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 0x20) != 0) {
        plVar4 = (longlong *)(param_1 + 0x30);
        FUN_1422c53b0(plVar4,param_2);
        lVar8 = (longlong)*(int *)(param_1 + 0x78) << 2;
        (**(code **)(*param_2 + 0x78))(param_2,lVar8,lVar8);
        lVar8 = (longlong)(*(int *)(param_1 + 0x38) - *(int *)(param_1 + 100)) * 0x70;
        (**(code **)(*param_2 + 0x78))(param_2,lVar8,lVar8);
        iVar1 = *(int *)(param_1 + 0x58);
        puStack_60 = (uint *)(param_1 + 0x40);
        local_b8._0_4_ = 0;
        local_b8._4_4_ = 1;
        local_a8._4_4_ = 0;
        uStack_a0 = 0;
        if (iVar1 != 0) {
          puVar11 = *(uint **)(param_1 + 0x50);
          if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
            puVar11 = puStack_60;
          }
          uVar9 = *puVar11;
          local_b8._0_4_ = 0;
          uStack_a0 = 0;
          while (uVar9 == 0) {
            lVar8 = (longlong)(int)local_b8;
            uStack_a0 = uStack_a0 + 0x20;
            iVar7 = (int)local_b8 + 1;
            bVar2 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_b8;
            local_b8._0_4_ = iVar7;
            if (bVar2) goto LAB_1423fca0d;
            uVar9 = puVar11[lVar8 + 1];
          }
          local_b8._4_4_ = -uVar9 & uVar9;
          iVar7 = 0x1f;
          if (local_b8._4_4_ != 0) {
            for (; local_b8._4_4_ >> iVar7 == 0; iVar7 = iVar7 + -1) {
            }
          }
          if (local_b8._4_4_ == 0) {
            iVar7 = 0x20;
          }
          else {
            iVar7 = 0x1f - iVar7;
          }
          local_a8._4_4_ = (uStack_a0 - iVar7) + 0x1f;
          if (iVar1 < local_a8._4_4_) {
LAB_1423fca0d:
            local_a8._4_4_ = iVar1;
          }
        }
        auStack_58._4_4_ = local_a8._4_4_;
        auStack_58._0_4_ = 0xffffffff;
        auStack_58._8_4_ = uStack_a0;
        auStack_58._12_4_ = iStack_9c;
        iStack_68 = (int)local_b8;
        uStack_64 = local_b8._4_4_;
        uStack_b0._0_4_ = (int)local_b8;
        uStack_b0._4_4_ = local_b8._4_4_;
        local_98._4_4_ = iStack_9c;
        local_98._0_4_ = uStack_a0;
        uStack_a0 = 0xffffffff;
        iStack_9c = local_a8._4_4_;
        bVar2 = local_a8._4_4_ < iVar1;
        local_b8 = plVar4;
        local_70 = plVar4;
        local_a8 = puStack_60;
        if (bVar2) {
          do {
            lVar8 = *(longlong *)(*local_b8 + 8 + (longlong)iStack_9c * 0x18);
            (**(code **)(*param_2 + 0x78))
                      (param_2,(longlong)*(int *)(lVar8 + 0x68) * 0x1c,
                       (longlong)*(int *)(lVar8 + 0x6c) * 0x1c);
            uStack_a0 = uStack_a0 & ~uStack_b0._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b0);
          } while (iStack_9c < (int)local_a8[6]);
        }
      }
    }
    else {
      local_res10[0] = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 100);
      plVar4 = (longlong *)param_2[1];
      if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res10,4);
        }
      }
      else {
        local_res10[0] = *(int *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      local_88 = (longlong *)(param_1 + 0x30);
      iVar1 = *(int *)(param_1 + 0x58);
      puStack_60 = (uint *)(param_1 + 0x40);
      local_b8._0_4_ = 0;
      local_b8._4_4_ = 1;
      local_a8._4_4_ = 0;
      uStack_a0 = 0;
      if (iVar1 != 0) {
        puVar11 = *(uint **)(param_1 + 0x50);
        if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
          puVar11 = puStack_60;
        }
        uVar9 = *puVar11;
        uStack_a0 = 0;
        local_b8._0_4_ = 0;
        while (uVar9 == 0) {
          lVar8 = (longlong)(int)local_b8;
          uStack_a0 = uStack_a0 + 0x20;
          iVar7 = (int)local_b8 + 1;
          bVar2 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_b8;
          local_b8._0_4_ = iVar7;
          if (bVar2) goto LAB_1423fc80f;
          uVar9 = puVar11[lVar8 + 1];
        }
        local_b8._4_4_ = -uVar9 & uVar9;
        iVar7 = 0x1f;
        if (local_b8._4_4_ != 0) {
          for (; local_b8._4_4_ >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        if (local_b8._4_4_ == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - iVar7;
        }
        local_a8._4_4_ = (uStack_a0 - iVar7) + 0x1f;
        if (iVar1 < local_a8._4_4_) {
LAB_1423fc80f:
          local_a8._4_4_ = iVar1;
        }
      }
      auStack_58._4_4_ = local_a8._4_4_;
      auStack_58._0_4_ = 0xffffffff;
      auStack_58._8_4_ = uStack_a0;
      auStack_58._12_4_ = iStack_9c;
      iStack_68 = (int)local_b8;
      uStack_64 = local_b8._4_4_;
      local_80 = 0;
      local_48._0_4_ = SUB84(local_88,0);
      local_48._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
      uStack_a0 = 0xffffffff;
      iStack_9c = local_a8._4_4_;
      uStack_b0._0_4_ = (int)local_b8;
      uStack_b0._4_4_ = local_b8._4_4_;
      local_98._8_4_ = (undefined4)local_48;
      local_98._0_8_ = auStack_58._8_8_;
      local_98._12_4_ = local_48._4_4_;
      bVar2 = local_a8._4_4_ < *(int *)(param_1 + 0x58);
      local_b8 = local_88;
      local_70 = local_88;
      local_48 = local_88;
      local_a8 = puStack_60;
      if (bVar2) {
        do {
          plVar4 = local_b8;
          lVar8 = (longlong)iStack_9c;
          local_res18 = *(undefined8 *)(*local_b8 + lVar8 * 0x18);
          (**(code **)(*param_2 + 0x40))(param_2,&local_res18);
          uVar5 = *(undefined8 *)(*plVar4 + 8 + lVar8 * 0x18);
          plVar4 = (longlong *)FRichCurve::StaticStruct();
          lVar8 = *plVar4;
          uVar6 = FRichCurve::StaticStruct();
          (**(code **)(lVar8 + 0x2a0))(plVar4,param_2,uVar5,uVar6,0,0);
          uStack_a0 = uStack_a0 & ~uStack_b0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b0);
        } while (iStack_9c < (int)local_a8[6]);
        if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
          TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_88,(int)local_88[1] - *(int *)((longlong)local_88 + 0x34),1);
          return;
        }
      }
    }
  }
  else {
    plVar4 = (longlong *)param_2[1];
    if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res10,4);
      }
    }
    else {
      local_res10[0] = *(int *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    if (0 < local_res10[0]) {
      local_b8 = &local_res20;
      uStack_b0 = &local_78;
      puVar10 = (undefined8 *)0x0;
      do {
        local_res20 = 0;
        (**(code **)(*param_2 + 0x40))(param_2,&local_res20);
        puVar3 = (undefined8 *)operator_new(0x70);
        local_78 = (undefined8 *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar3[5] = 0;
          puVar3[6] = 0;
          *(undefined4 *)(puVar3 + 7) = 0xffffffff;
          *(undefined4 *)((longlong)puVar3 + 0x3c) = 0;
          puVar3[9] = 0;
          *(undefined4 *)(puVar3 + 10) = 0;
          *puVar3 = &PTR_FUN_14413ebc8;
          *(undefined2 *)(puVar3 + 0xb) = 0x404;
          *(undefined4 *)((longlong)puVar3 + 0x5c) = 0x7f7fffff;
          puVar3[0xc] = 0;
          puVar3[0xd] = 0;
          local_78 = puVar3;
        }
        plVar4 = (longlong *)FRichCurve::StaticStruct();
        lVar8 = *plVar4;
        uVar5 = FRichCurve::StaticStruct();
        (**(code **)(lVar8 + 0x2a0))(plVar4,param_2,local_78,uVar5,0,0);
        FUN_141711540(param_1 + 0x30,&local_res18,&local_b8,0);
        uVar9 = (int)puVar10 + 1;
        puVar10 = (undefined8 *)(ulonglong)uVar9;
      } while ((int)uVar9 < local_res10[0]);
      return;
    }
  }
  return;
}



// FUNCTION 1423fcab0 FUN_1423fcab0 body=402 status=ok
// SIG undefined FUN_1423fcab0(void)

void FUN_1423fcab0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int local_res8 [2];
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 *local_38;
  undefined8 *local_30;
  
  FUN_141763960();
  if (((*(longlong *)(param_1 + 0x28) != 0) &&
      ((*(uint *)(*(longlong *)(param_1 + 0x28) + 8) >> 10 & 1) != 0)) &&
     (lVar2 = FUN_1417a53c0(), lVar2 != 0)) {
    FUN_141740c00(lVar2 + 0x200,*(undefined8 *)(param_1 + 0x28));
  }
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 2) != 0) {
      FUN_1423fb2c0(param_1,param_2);
      return;
    }
  }
  else {
    FUN_1423ecdc0(param_1);
    plVar3 = *(longlong **)(param_1 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)FTableRowBase::StaticStruct();
    }
    plVar1 = (longlong *)param_2[1];
    if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res8,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    iVar4 = 0;
    if (0 < local_res8[0]) {
      local_38 = &local_res18;
      local_30 = &local_res20;
      do {
        local_res18 = 0;
        (**(code **)(*param_2 + 0x40))(param_2,&local_res18);
        local_res20 = FMemory::Malloc((longlong)
                                      ((int)plVar3[8] + -1 + *(int *)((longlong)plVar3 + 0x44) &
                                      -*(int *)((longlong)plVar3 + 0x44)),0);
        (**(code **)(*plVar3 + 0x2a8))(plVar3,local_res20,1);
        FUN_141725e50(plVar3,param_2,local_res20,0);
        FUN_1404a88c0(param_1 + 0x30,local_res10,&local_38,0);
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_res8[0]);
    }
  }
  return;
}



// FUNCTION 1423fcc50 FUN_1423fcc50 body=327 status=ok
// SIG undefined FUN_1423fcc50(void)

ulonglong FUN_1423fcc50(longlong param_1,longlong param_2,longlong param_3,int param_4,
                       longlong *param_5,undefined8 param_6,undefined8 *param_7,undefined4 param_8)

{
  longlong *plVar1;
  byte bVar2;
  ulonglong in_RAX;
  int local_res20 [2];
  undefined **local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined ***local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_53;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_68 = *(longlong *)(param_3 + 0x70);
  if ((*(uint *)(local_68 + 0x88) & 0x100000) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  local_a0 = *(longlong *)(param_1 + 0x58);
  local_28 = 0;
  local_20 = 0;
  local_90 = 0;
  local_70 = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_38 = 0;
  local_a8 = &PTR_FUN_145086ba8;
  local_78 = *(undefined8 *)(param_1 + 0x68);
  local_80 = *param_7;
  local_88 = param_6;
  local_60 = &local_a8;
  local_48 = 0;
  uStack_40 = 0;
  local_98 = param_5;
  local_res20[0] = param_4;
  if ((local_a0 == 0) || (*(longlong *)(local_a0 + 0xd0) == 0)) {
    local_53 = 0;
  }
  else {
    local_53 = FUN_1428cfb20();
    local_68 = *(longlong *)(param_3 + 0x70);
  }
  local_30 = param_8;
  plVar1 = *(longlong **)(local_68 + 0x90);
  if (*(int *)(param_3 + 0x30) != 1) {
    (**(code **)(*param_5 + 0x68))(param_5,local_res20);
  }
  bVar2 = (**(code **)(*plVar1 + 0x70))
                    (plVar1,&local_98,
                     (longlong)*(int *)(param_3 + 0x44) +
                     *(int *)(param_3 + 0x34) * local_res20[0] + param_2);
  if (local_28 != 0) {
    FMemory::Free();
  }
  return (ulonglong)bVar2;
}



// FUNCTION 1423fcda0 FUN_1423fcda0 body=676 status=ok
// SIG undefined FUN_1423fcda0(void)

void FUN_1423fcda0(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  longlong *local_res10;
  undefined1 local_res18 [8];
  undefined1 *local_138;
  longlong **local_130;
  undefined1 local_128 [40];
  byte local_100;
  longlong local_98;
  byte local_40;
  longlong local_38;
  longlong local_28;
  
  if (((*(longlong *)(param_1[5] + 0x58) != 0) &&
      (*(longlong *)(*(longlong *)(param_1[5] + 0x58) + 0xd0) != 0)) && (param_2 != 0)) {
    AActor::GetLevel(param_2);
  }
  param_1[0xd] = param_2;
  if (-1 < *(int *)((longlong)param_1 + 0x34)) {
    lVar6 = (longlong)*(int *)((longlong)param_1 + 0x34) * 4;
    iVar1 = *(int *)(lVar6 + *(longlong *)(param_1[5] + 0x15b0));
    if (0 < iVar1) {
      piVar4 = (int *)(lVar6 + *(longlong *)(param_1[5] + 0x1590));
      iVar2 = *piVar4;
      *piVar4 = iVar1 + -1;
      lVar6 = param_1[5];
      iVar5 = *(int *)((longlong)param_1 + 0x34);
      iVar1 = *(int *)(*(longlong *)(lVar6 + 0x15b0) + (longlong)iVar5 * 4);
      while (iVar1 <= iVar2) {
        FUN_1423e4ec0(local_128,param_1,0);
        if ((local_100 & 0x80) != 0) {
          LowLevelFatalErrorHandler
                    ("Unknown",0x825,
                     L"SetChannelActor failed. Overflow while sending reliable bunch synchronization."
                    );
          FDebug::AssertFailed
                    (&DAT_1450766ff,"Unknown",0x825,
                     L"SetChannelActor failed. Overflow while sending reliable bunch synchronization."
                    );
          if (local_28 != 0) {
            FMemory::Free();
          }
          if (local_38 != 0) {
            FMemory::Free();
          }
          if (local_98 != 0) {
            FMemory::Free();
          }
          FArchive::~FArchive(local_128);
          iVar5 = *(int *)((longlong)param_1 + 0x34);
          lVar6 = param_1[5];
          break;
        }
        local_40 = local_40 | 0x20;
        (**(code **)(*param_1 + 0x2c8))(param_1,local_res8,local_128,0);
        piVar4 = (int *)(*(longlong *)(param_1[5] + 0x15b0) +
                        (longlong)*(int *)((longlong)param_1 + 0x34) * 4);
        *piVar4 = *piVar4 + 1;
        if (local_28 != 0) {
          FMemory::Free();
        }
        if (local_38 != 0) {
          FMemory::Free();
        }
        if (local_98 != 0) {
          FMemory::Free();
        }
        FArchive::~FArchive(local_128);
        lVar6 = param_1[5];
        iVar5 = *(int *)((longlong)param_1 + 0x34);
        iVar1 = *(int *)(*(longlong *)(lVar6 + 0x15b0) + (longlong)iVar5 * 4);
      }
      *(int *)(*(longlong *)(lVar6 + 0x1590) + (longlong)iVar5 * 4) = iVar2;
      *(undefined4 *)
       (*(longlong *)(param_1[5] + 0x15b0) + (longlong)*(int *)((longlong)param_1 + 0x34) * 4) = 0;
      param_2 = param_1[0xd];
    }
  }
  if (param_2 != 0) {
    lVar6 = param_1[5];
    local_res10 = param_1;
    FWeakObjectPtr::operator=(local_res18,param_2);
    local_138 = local_res18;
    local_130 = &local_res10;
    FUN_1423e3a30(lVar6 + 0x1600,local_res8,&local_138,0);
    plVar3 = *(longlong **)(lVar6 + 0x1650);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x278))(plVar3,param_2,local_res10);
    }
    FWeakObjectPtr::operator=(local_res8,param_1[0xd]);
    plVar3 = (longlong *)FUN_1423ed210(param_1,local_res8);
    param_1[0x12] = *plVar3;
    lVar6 = *(longlong *)(param_1[5] + 0x58);
    FNetworkObjectList::MarkActive
              (*(undefined8 *)(lVar6 + 0x528),param_1[0xd],param_1[5],*(undefined8 *)(lVar6 + 0x120)
              );
    lVar6 = *(longlong *)(param_1[5] + 0x58);
    FNetworkObjectList::ClearRecentlyDormantConnection
              (*(undefined8 *)(lVar6 + 0x528),param_1[0xd],param_1[5],*(undefined8 *)(lVar6 + 0x120)
              );
  }
  return;
}



// FUNCTION 1423fd050 FUN_1423fd050 body=322 status=ok
// SIG undefined FUN_1423fd050(void)

undefined8 FUN_1423fd050(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  undefined1 local_128 [16];
  undefined1 local_118 [144];
  longlong local_88;
  undefined8 local_78;
  byte local_30;
  longlong local_28;
  longlong local_18;
  
  if (((*(byte *)(param_1 + 6) & 2) == 0) && (uVar4 = *(int *)(param_1[5] + 300) - 2, uVar4 < 2)) {
    FUN_1423e4ec0(local_118,param_1,CONCAT71((uint7)(uint3)(uVar4 >> 8),1));
    local_30 = local_30 & 0xf7 | 0x20;
    uVar2 = FWeakObjectPtr::Get(param_2 + 8);
    lVar1 = **(longlong **)(param_1[5] + 0x68);
    uVar3 = FString::FString(local_128,param_2 + 0x20);
    (**(code **)(lVar1 + 0x278))
              (*(undefined8 *)(param_1[5] + 0x68),local_118,uVar2,*(undefined4 *)(param_2 + 0x1c),
               uVar3);
    (**(code **)(*param_1 + 0x2c8))(param_1,local_res8,local_118,0);
    if (local_18 != 0) {
      FMemory::Free();
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(local_118);
    return local_78;
  }
  return 0;
}



// FUNCTION 1423fd1a0 FUN_1423fd1a0 body=130 status=ok
// SIG undefined FUN_1423fd1a0(void)

void FUN_1423fd1a0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    FWeakObjectPtr::operator=(&local_res8,lVar1);
    local_res10 = local_res8;
    TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,UActorChannel_*,0>,FDefaultSetAllocator>
    ::Remove(lVar2 + 0x1600,&local_res10);
    plVar3 = *(longlong **)(lVar2 + 0x1650);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x280))(plVar3,lVar1);
    }
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 2;
    return;
  }
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 2;
  return;
}



// FUNCTION 1423fd240 FUN_1423fd240 body=18 status=ok
// SIG undefined FUN_1423fd240(void)

void FUN_1423fd240(longlong *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10c) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001423fd24b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf28))();
  return;
}



// FUNCTION 1423fd260 FUN_1423fd260 body=223 status=ok
// SIG undefined FUN_1423fd260(void)

void FUN_1423fd260(longlong *param_1)

{
  byte *pbVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_142718410();
  if (param_1[0xf7] != 0) {
    FUN_14223c460(param_1[0xf7],0);
    pbVar1 = (byte *)(param_1[0xf7] + 0x34);
    *pbVar1 = *pbVar1 ^ ((byte)(*(uint *)(param_1 + 0xe9) >> 2) ^ *(byte *)(param_1[0xf7] + 0x34)) &
                        1;
    lVar3 = (**(code **)(*(longlong *)param_1[0xf7] + 0x6e8))();
    if (lVar3 != 0) {
      lVar4 = UUGPlayerInputComponent::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        *(uint *)(lVar3 + 0x230) = *(uint *)(lVar3 + 0x230) | 1;
        *(byte *)(lVar3 + 0x3c) =
             *(byte *)(lVar3 + 0x3c) ^
             ((byte)(*(uint *)(param_1 + 0xe9) >> 2) ^ *(byte *)(lVar3 + 0x3c)) & 1;
        *(undefined4 *)((longlong)param_1 + 0x864) = *(undefined4 *)(lVar3 + 0x214);
        *(undefined4 *)(param_1 + 0x10d) = *(undefined4 *)(lVar3 + 0x21c);
        *(undefined4 *)((longlong)param_1 + 0x86c) = *(undefined4 *)(lVar3 + 0x220);
        (**(code **)(*param_1 + 0xf28))(param_1);
      }
    }
  }
  return;
}



// FUNCTION 1423fd340 FUN_1423fd340 body=767 status=ok
// SIG undefined FUN_1423fd340(void)

void FUN_1423fd340(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [8];
  code *local_18;
  undefined4 uStack_10;
  
  FUN_1427186f0();
  FUN_1423f17f0();
  local_18 = FUN_1423fb6c0;
  uStack_10 = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,"DebugCamera_Select",1);
  UInputComponent::BindAction<AFlarePlayerController>
            (*(undefined8 *)(param_1 + 0x130),*puVar1,0,param_1,&local_18);
  local_18 = FUN_1423fe330;
  uStack_10 = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,"DebugCamera_Unselect",1);
  UInputComponent::BindAction<AFlarePlayerController>
            (*(undefined8 *)(param_1 + 0x130),*puVar1,0,param_1,&local_18);
  local_18 = (code *)&LAB_1423f0f10;
  uStack_10 = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,"DebugCamera_IncreaseSpeed",1);
  UInputComponent::BindAction<AFlarePlayerController>
            (*(undefined8 *)(param_1 + 0x130),*puVar1,0,param_1,&local_18);
  local_18 = (code *)&LAB_1423e9bf0;
  uStack_10 = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,"DebugCamera_DecreaseSpeed",1);
  UInputComponent::BindAction<AFlarePlayerController>
            (*(undefined8 *)(param_1 + 0x130),*puVar1,0,param_1,&local_18);
  local_18 = FUN_1423f0f40;
  uStack_10 = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,"DebugCamera_IncreaseFOV",1);
  UInputComponent::BindAction<AFlarePlayerController>
            (*(undefined8 *)(param_1 + 0x130),*puVar1,0,param_1,&local_18);
  local_18 = FUN_1423e9c20;
  uStack_10 = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,"DebugCamera_DecreaseFOV",1);
  UInputComponent::BindAction<AFlarePlayerController>
            (*(undefined8 *)(param_1 + 0x130),*puVar1,0,param_1,&local_18);
  local_18 = (code *)&LAB_1423fe150;
  uStack_10 = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,"DebugCamera_ToggleDisplay",1);
  UInputComponent::BindAction<AFlarePlayerController>
            (*(undefined8 *)(param_1 + 0x130),*puVar1,0,param_1,&local_18);
  local_18 = (code *)&LAB_1423e696c;
  uStack_10 = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,"DebugCamera_FreezeRendering",1);
  UInputComponent::BindAction<AFlarePlayerController>
            (*(undefined8 *)(param_1 + 0x130),*puVar1,0,param_1,&local_18);
  local_18 = (code *)&LAB_1423f3f90;
  uStack_10 = 0;
  FUN_1423e2c70(*(undefined8 *)(param_1 + 0x130),0,param_1,&local_18);
  local_18 = (code *)&LAB_1423f3fb0;
  uStack_10 = 0;
  FUN_1423e2c70(*(undefined8 *)(param_1 + 0x130),1,param_1,&local_18);
  local_18 = FUN_1423f3ee0;
  uStack_10 = 0;
  FUN_1423e2c70(*(undefined8 *)(param_1 + 0x130),2,param_1,&local_18);
  return;
}



// FUNCTION 1423fd660 FUN_1423fd660 body=304 status=ok
// SIG undefined FUN_1423fd660(void)

longlong * FUN_1423fd660(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong local_58;
  undefined4 local_50;
  undefined1 local_4c [12];
  undefined1 local_40 [16];
  longlong *local_30;
  undefined1 local_18;
  uint local_14;
  
  if (param_1[0xf7] == 0) {
    cVar1 = (**(code **)(*param_1 + 0x768))();
    if (cVar1 != '\0') {
      lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar2 + 0x148) != 0) {
        FActorSpawnParameters::FActorSpawnParameters(local_40);
        local_58 = param_1[0xf9];
        local_50 = (undefined4)param_1[0xfa];
        local_14 = local_14 | 0x40;
        local_18 = 1;
        local_30 = param_1;
        uVar3 = AGenericItem::GetPrivateStaticClass();
        uVar4 = (**(code **)(*param_1 + 0x720))(param_1,local_4c);
        uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
        plVar6 = (longlong *)UWorld::SpawnActor(uVar5,uVar3,&local_58,uVar4,local_40);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x770))(plVar6,param_1);
          (**(code **)(*plVar6 + 0x7a8))(plVar6);
          if ((*(byte *)((longlong)plVar6 + 0x34) & 4) != 0) {
            AActor::SetActorTickEnabled(plVar6,1);
          }
          return plVar6;
        }
      }
    }
  }
  plVar6 = (longlong *)FUN_142718ae0(param_1);
  return plVar6;
}



// FUNCTION 1423fd790 FUN_1423fd790 body=476 status=ok
// SIG undefined FUN_1423fd790(void)

void FUN_1423fd790(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  longlong local_res8;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  uint uStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  if ((*(byte *)(param_1 + 0x30) & 0x84) == 0) {
    plVar1 = (longlong *)(param_1 + 0x98);
    iVar2 = *(int *)(param_1 + 0xc0);
    puStack_28 = (uint *)(param_1 + 0xa8);
    local_78 = 0;
    uStack_74 = 1;
    local_68._4_4_ = 0;
    uStack_60 = 0;
    if (iVar2 != 0) {
      puVar7 = *(uint **)(param_1 + 0xb8);
      if (*(uint **)(param_1 + 0xb8) == (uint *)0x0) {
        puVar7 = puStack_28;
      }
      uVar6 = *puVar7;
      local_78 = 0;
      uStack_60 = 0;
      while (uVar6 == 0) {
        lVar5 = (longlong)(int)local_78;
        uStack_60 = uStack_60 + 0x20;
        uVar6 = local_78 + 1;
        bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_78;
        local_78 = uVar6;
        if (bVar3) goto LAB_1423fd86d;
        uVar6 = puVar7[lVar5 + 1];
      }
      uStack_74 = -uVar6 & uVar6;
      iVar4 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_68._4_4_ = (uStack_60 - iVar4) + 0x1f;
      if (iVar2 < local_68._4_4_) {
LAB_1423fd86d:
        local_68._4_4_ = iVar2;
      }
    }
    auStack_20._4_4_ = local_68._4_4_;
    auStack_20._0_4_ = 0xffffffff;
    auStack_20._8_4_ = uStack_60;
    auStack_20._12_4_ = iStack_5c;
    uStack_30 = local_78;
    uStack_2c = uStack_74;
    local_40 = 0;
    local_10._0_4_ = SUB84(plVar1,0);
    local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
    uStack_70 = local_78;
    uStack_6c = uStack_74;
    uStack_60 = 0xffffffff;
    iStack_5c = local_68._4_4_;
    local_58._8_4_ = (undefined4)local_10;
    local_58._0_8_ = auStack_20._8_8_;
    local_58._12_4_ = local_10._4_4_;
    bVar3 = local_68._4_4_ < *(int *)(param_1 + 0xc0);
    local_48 = plVar1;
    local_38 = plVar1;
    local_10 = plVar1;
    local_68 = puStack_28;
    if (bVar3) {
      do {
        lVar5 = *(longlong *)((longlong)iStack_5c * 0x20 + 8 + *plVar1);
        if (*(longlong *)(lVar5 + 0x10) != 0) {
          puVar7 = (uint *)(lVar5 + 0xe8);
          *puVar7 = *puVar7 & 0xfffffffe;
        }
        uStack_60 = uStack_60 & ~uStack_6c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
      } while (iStack_5c < (int)local_68[6]);
      if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
        TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
      }
    }
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80;
    local_res8 = param_1;
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>
              (*(longlong *)(param_1 + 0x28) + 0x17f0,&local_res8);
  }
  return;
}



// FUNCTION 1423fd970 FUN_1423fd970 body=728 status=ok
// SIG undefined FUN_1423fd970(void)

void FUN_1423fd970(longlong *param_1,longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  int iVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 local_res8 [8];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  ulonglong uVar13;
  
  lVar4 = param_1[2];
  if ((lVar4 != 0) && (*param_1 != 0)) {
    lVar5 = *(longlong *)(lVar4 + 0x10);
    if ((lVar5 != 0) && (*param_1 != lVar5)) {
      *param_1 = lVar5;
    }
    param_1[0x1f] = param_2;
    puVar7 = (undefined4 *)
             FUN_1425e6a00(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x58) + 0xe0),local_res8,
                           lVar4,0);
    uVar18 = 0;
    *(undefined4 *)(param_1 + 1) = *puVar7;
    iVar11 = (int)param_1[4];
    iVar3 = *(int *)(*param_1 + 0xe0);
    if (iVar11 < iVar3) {
      *(int *)(param_1 + 4) = iVar3;
      iVar14 = iVar3 - iVar11;
      if (*(int *)((longlong)param_1 + 0x24) < iVar3) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 3,iVar11);
      }
      puVar7 = (undefined4 *)((longlong)iVar11 * 0x30 + param_1[3]);
      if (iVar14 != 0) {
        puVar8 = puVar7 + 9;
        do {
          *puVar7 = 0xdf41c9a3;
          puVar7 = puVar7 + 0xc;
          *(undefined8 *)(puVar8 + -7) = 0;
          *(undefined8 *)(puVar8 + -5) = 0;
          *(undefined8 *)(puVar8 + -3) = 0;
          *(undefined8 *)(puVar8 + -1) = 0xffffffffffffffff;
          puVar8[1] = puVar8[1] & 0xfffffff0;
          puVar8 = puVar8 + 0xc;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
    }
    else if (iVar3 < iVar11) {
      FUN_1423f9730(param_1 + 3,iVar3,iVar11 - iVar3,1);
    }
    lVar5 = param_1[0x56];
    lVar17 = (longlong)*(int *)(lVar5 + 0x18);
    uVar16 = uVar18;
    if (0 < lVar17) {
      do {
        plVar15 = (longlong *)(*(longlong *)(lVar5 + 0x10) + uVar16);
        uVar12 = *(uint *)((longlong)plVar15 + 0x2c);
        if (((uVar12 & 8) != 0) && (lVar9 = *plVar15, uVar13 = uVar18, 0 < *(int *)(lVar9 + 0x30)))
        {
          do {
            iVar11 = (int)uVar13;
            uVar12 = iVar11 + 1;
            uVar13 = (ulonglong)uVar12;
            puVar2 = (uint *)(param_1[3] + 0x28 +
                             (longlong)(int)((uint)*(ushort *)(lVar9 + 0x40) + iVar11) * 0x30);
            *puVar2 = *puVar2 | 2;
            lVar9 = *plVar15;
          } while ((int)uVar12 < *(int *)(lVar9 + 0x30));
          uVar12 = *(uint *)((longlong)plVar15 + 0x2c);
        }
        if (((uVar12 & 4) != 0) && (lVar9 = *plVar15, uVar13 = uVar18, 0 < *(int *)(lVar9 + 0x30)))
        {
          do {
            uVar12 = (int)uVar13 + 1;
            puVar2 = (uint *)(param_1[3] + 0x28 +
                             (longlong)(int)((uint)*(ushort *)(lVar9 + 0x40) + (int)uVar13) * 0x30);
            *puVar2 = *puVar2 | 4;
            lVar9 = *plVar15;
            uVar13 = (ulonglong)uVar12;
          } while ((int)uVar12 < *(int *)(lVar9 + 0x30));
        }
        lVar17 = lVar17 + -1;
        uVar16 = uVar16 + 0x30;
      } while (lVar17 != 0);
    }
    cVar6 = (**(code **)(**(longlong **)(param_1[0x1e] + 0x58) + 0x368))();
    if (cVar6 != '\0') {
      lVar5 = *(longlong *)(*(longlong *)(param_1[0x1e] + 0x58) + 0xd0);
      if (((lVar5 == 0) || (*(longlong **)(lVar5 + 0x38) == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(**(longlong **)(lVar5 + 0x38) + 0x368))(), cVar6 == '\0')) {
        plVar10 = (longlong *)FUN_1425c05a0(*(undefined8 *)(param_1[0x1e] + 0x58),local_38,lVar4);
        plVar15 = local_30;
        if (param_1 + 100 != plVar10) {
          param_1[100] = *plVar10;
          *plVar10 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x65,plVar10 + 1);
          plVar15 = local_30;
        }
      }
      else {
        plVar10 = (longlong *)FUN_1425c05a0(*(undefined8 *)(lVar5 + 0x38),local_48,lVar4);
        plVar15 = local_40;
        if (param_1 + 100 != plVar10) {
          param_1[100] = *plVar10;
          *plVar10 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x65,plVar10 + 1);
          plVar15 = local_40;
        }
      }
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar15 + 1;
        lVar4 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1423fdc50 FUN_1423fdc50 body=391 status=ok
// SIG undefined FUN_1423fdc50(void)

void FUN_1423fdc50(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  
  iVar10 = *(int *)(param_1 + 0x20) + -1;
  lVar13 = (longlong)iVar10;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (-1 < iVar10) {
    lVar11 = lVar13 * 0x30;
    do {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + lVar11);
      *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 8 + lVar11) = 0;
      puVar3 = (uint *)(*(longlong *)(param_1 + 0x18) + 0x28 + lVar11);
      *puVar3 = *puVar3 & 0xfffffff7;
      while (lVar5 != 0) {
        plVar12 = *(longlong **)(lVar5 + 0x18);
        lVar6 = *(longlong *)(lVar5 + 8);
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar12 + 1;
          lVar9 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        FMemory::operator_delete(lVar5,0x30);
        lVar5 = lVar6;
      }
      lVar11 = lVar11 + -0x30;
      lVar13 = lVar13 + -1;
    } while (-1 < lVar13);
  }
  iVar10 = *(int *)(param_1 + 0x20);
  if (iVar10 != 0) {
    plVar12 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x18);
    do {
      plVar7 = (longlong *)*plVar12;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar7 + 1;
        lVar13 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
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
      plVar12 = plVar12 + 6;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x18,0);
  }
  TArray<FObjectReplicator::FRPCPendingLocalCall,FDefaultAllocator>::Empty(param_1 + 0x348,0);
  puVar8 = *(undefined8 **)(param_1 + 0x340);
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)*puVar8)(puVar8,1);
    *(undefined8 *)(param_1 + 0x340) = 0;
  }
  return;
}



// FUNCTION 1423fdde0 FUN_1423fdde0 body=55 status=ok
// SIG undefined FUN_1423fdde0(void)

void FUN_1423fdde0(longlong *param_1)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 6) & 0x80) != 0) {
    cVar1 = (**(code **)(*param_1 + 0x2d0))(param_1,0);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x2e0))(param_1);
    }
  }
  FUN_1423f4940(param_1);
  return;
}



// FUNCTION 1423fde20 FUN_1423fde20 body=54 status=ok
// SIG undefined FUN_1423fde20(void)

void FUN_1423fde20(longlong *param_1)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 6) & 0x80) != 0) {
    cVar1 = (**(code **)(*param_1 + 0x2d0))(param_1,0);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001423fde49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x2e0))(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1423fde60 FUN_1423fde60 body=614 status=ok
// SIG undefined FUN_1423fde60(void)

void FUN_1423fde60(longlong *param_1)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  undefined **local_128 [5];
  byte local_100;
  longlong local_98;
  byte local_40;
  longlong local_38;
  longlong local_28;
  
  if (((*(byte *)(param_1 + 6) & 0x80) != 0) &&
     (cVar3 = (**(code **)(*param_1 + 0x2d0))(), cVar3 != '\0')) {
    (**(code **)(*param_1 + 0x2e0))(param_1);
  }
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    lVar6 = param_1[0xb];
    iVar5 = 0;
    lVar4 = lVar6;
    if (lVar6 != 0) {
      do {
        pbVar1 = (byte *)(lVar4 + 0xe8);
        lVar4 = *(longlong *)(lVar4 + 0xc0);
        iVar2 = iVar5 + 1;
        if ((*pbVar1 & 1) != 0) {
          iVar2 = iVar5;
        }
        iVar5 = iVar2;
      } while (lVar4 != 0);
      if ((iVar5 < 9) && (lVar6 != 0)) {
        do {
          if (((*(byte *)(lVar6 + 0xe8) & 1) == 0) &&
             (1.0 < (float)((double)*(float *)(*(longlong *)(param_1[5] + 0x58) + 0x170) -
                           *(double *)(lVar6 + 0xd0)))) {
            FUN_1425cc170(param_1[5],lVar6,0);
          }
          lVar6 = *(longlong *)(lVar6 + 0xc0);
        } while (lVar6 != 0);
        return;
      }
    }
  }
  else {
    iVar5 = (int)param_1[0xf];
    while( true ) {
      if (iVar5 < 1) {
        return;
      }
      if ((*(byte *)(param_1 + 6) & 2) != 0) {
        return;
      }
      FUN_1423e4ec0(local_128,param_1,0);
      local_40 = local_40 | 0x20;
      local_128[0] = &PTR__scalar_deleting_destructor__1450868e8;
      if ((local_100 & 0x80) != 0) break;
      FBitWriter::SerializeBits
                (local_128,*(undefined8 *)param_1[0xe],
                 *(undefined4 *)((undefined8 *)param_1[0xe] + 2));
      if ((local_100 & 0x80) != 0) {
        (**(code **)(*(longlong *)param_1[5] + 0x2f8))();
        break;
      }
      FUN_1423fb840(param_1,local_res8,local_128,1);
      if (*(longlong *)param_1[0xe] != 0) {
        FMemory::Free();
      }
      iVar5 = (int)param_1[0xf];
      if (iVar5 + -1 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)param_1[0xe],(void *)(param_1[0xe] + 0x18),(longlong)(iVar5 + -1) * 0x18)
        ;
        iVar5 = (int)param_1[0xf];
      }
      *(int *)(param_1 + 0xf) = iVar5 + -1;
      TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink(param_1 + 0xe);
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_38 != 0) {
        FMemory::Free();
      }
      if (local_98 != 0) {
        FMemory::Free();
      }
      FArchive::~FArchive(local_128);
      iVar5 = (int)param_1[0xf];
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(local_128);
  }
  return;
}



// FUNCTION 1423fe170 FUN_1423fe170 body=144 status=ok
// SIG undefined FUN_1423fe170(void)

void FUN_1423fe170(longlong *param_1)

{
  longlong local_28 [4];
  
  local_28[1] = 0x10;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"FreezeRendering",0x20);
  (**(code **)(*param_1 + 0xd28))(param_1,local_28 + 2,local_28,1);
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  *(uint *)(param_1 + 0x106) = *(uint *)(param_1 + 0x106) ^ 2;
  return;
}



// FUNCTION 1423fe200 FUN_1423fe200 body=302 status=ok
// SIG undefined FUN_1423fe200(void)

void FUN_1423fe200(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 local_res10 [8];
  
  iVar7 = 0;
  plVar10 = DAT_146af23a8;
  if (0 < DAT_146af23b0) {
    do {
      plVar1 = (longlong *)*plVar10;
      lVar2 = plVar10[1];
      for (plVar9 = plVar1; plVar9 != plVar1 + (longlong)(int)lVar2 * 2; plVar9 = plVar9 + 2) {
        lVar3 = 0;
        if (((int)plVar9[1] != 0) && (plVar4 = (longlong *)*plVar9, plVar4 != (longlong *)0x0)) {
          plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res10);
          lVar3 = *plVar4;
        }
        if (lVar3 == param_1) {
          iVar8 = (int)((longlong)plVar9 - (longlong)plVar1 >> 4);
          if (iVar8 != -1) {
            TBaseDelegate<FText>::~TBaseDelegate<FText>(*plVar10 + (longlong)iVar8 * 0x10);
            iVar6 = (int)plVar10[1];
            iVar5 = (iVar6 - iVar8) + -1;
            if (0 < iVar5) {
              iVar5 = 1;
            }
            if (iVar5 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar8 * 0x10 + *plVar10),
                         (void *)((longlong)(iVar6 - iVar5) * 0x10 + *plVar10),(longlong)iVar5 << 4)
              ;
              iVar6 = (int)plVar10[1];
            }
            *(int *)(plVar10 + 1) = iVar6 + -1;
            if (iVar6 + -1 == 0) {
              FUN_142781db0(&DAT_146af23b8,iVar7,0);
            }
          }
          break;
        }
      }
      iVar7 = iVar7 + 1;
      plVar10 = plVar10 + 2;
    } while (iVar7 < DAT_146af23b0);
  }
  return;
}



// FUNCTION 1423fe330 FUN_1423fe330 body=125 status=ok
// SIG undefined FUN_1423fe330(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423fe330(longlong param_1)

{
  longlong lVar1;
  undefined8 local_res8 [4];
  longlong local_18 [2];
  
  if (DAT_146af1a70 != 0) {
    lVar1 = FUN_142548760(DAT_146af1a70,0);
    if (lVar1 != 0) {
      local_res8[0] = *(undefined8 *)(lVar1 + 0x18);
      FName::ToString(local_res8,local_18);
      FOutputDevice::CanBeUsedOnAnyThread(local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
  }
  *(undefined8 *)(param_1 + 0x840) = 0;
  *(undefined8 *)(param_1 + 0x848) = 0;
  _DAT_146af1a60 = 0;
  _DAT_146af1a68 = 0;
  DAT_146af1a70 = 0;
  return;
}



// FUNCTION 1423fe3b0 FUN_1423fe3b0 body=3171 status=ok
// SIG undefined FUN_1423fe3b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1423fe3b0(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined1 *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  uint *puVar16;
  uint *puVar17;
  longlong *plVar18;
  ulonglong uVar19;
  uint uVar20;
  uint *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  uint *puStack_190;
  uint local_188;
  uint uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  int local_178;
  int local_174;
  uint *local_170;
  int iStack_168;
  uint uStack_164;
  uint *local_160;
  uint uStack_158;
  uint uStack_154;
  undefined8 local_150;
  longlong *local_148;
  longlong local_140;
  uint *local_138;
  undefined8 uStack_130;
  uint *puStack_128;
  uint uStack_120;
  uint uStack_11c;
  undefined8 uStack_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 *puStack_d0;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined8 local_c0;
  longlong *local_b8;
  int *piStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  uint local_78 [4];
  uint *local_68;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  undefined1 local_50 [8];
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_148 = param_1;
  cVar5 = (**(code **)(**(longlong **)(param_1[0x1e] + 0x58) + 0x368))();
  if (cVar5 == '\0') {
    uVar19 = 0;
    local_88 = 0;
    local_80 = 0;
    local_68 = (uint *)0x0;
    local_60 = 0;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = (undefined1 *)0x0;
    local_40 = 0;
    local_178 = 0;
    local_60._0_4_ = 0;
    if ((param_1[0x56] != 0) && (local_60._0_4_ = 0, param_1[0x58] != 0)) {
      FUN_14272bae0(param_1[0x56],param_1[0x58],&local_88,&local_178);
    }
    piVar9 = (int *)param_1[0x19];
    lVar22 = param_1[2];
    uVar23 = (longlong)(int)param_1[0x1a] & 0x3fffffffffffffff;
    if (piVar9 + (int)param_1[0x1a] < piVar9) {
      uVar23 = uVar19;
    }
    iVar8 = (int)local_60;
    if (uVar23 != 0) {
      do {
        plVar14 = (longlong *)((longlong)*piVar9 * 0x10 + *(longlong *)(*param_1 + 0xd8));
        lVar15 = *plVar14;
        local_98 = 0;
        local_90 = 0;
        local_108 = 0;
        uStack_100 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_c8 = 0;
        local_c4 = 0;
        local_c0 = 0;
        local_a8 = 0;
        local_a0 = 0;
        puStack_190 = *(uint **)(param_1[0x1e] + 0x58);
        puStack_d0 = &local_198;
        local_b8 = &local_88;
        piStack_b0 = &local_178;
        local_198 = &PTR_FUN_145086ba8;
        local_d8 = *(longlong *)(lVar15 + 0x70);
        if ((lVar22 != 0) &&
           ((**(code **)(**(longlong **)(local_d8 + 0x90) + 0x70))
                      (*(longlong **)(local_d8 + 0x90),&local_108,
                       (longlong)*(int *)(lVar15 + 0x44) +
                       *(int *)(lVar15 + 0x34) * (int)plVar14[1] + lVar22), local_98 != 0)) {
          FMemory::Free();
        }
        piVar9 = piVar9 + 1;
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar23);
      iVar8 = (int)local_60;
    }
    lVar22 = param_1[0x69];
    local_140 = (longlong)(int)param_1[0x6a] * 0x70 + lVar22;
    if (lVar22 != local_140) {
      puVar17 = (uint *)(lVar22 + 0x30);
      do {
        uVar6 = puVar17[6];
        local_198._0_4_ = 0;
        local_198._4_4_ = 1;
        uStack_184 = 0;
        iStack_180 = 0;
        if (uVar6 != 0) {
          puVar21 = *(uint **)(puVar17 + 4);
          if (*(uint **)(puVar17 + 4) == (uint *)0x0) {
            puVar21 = puVar17;
          }
          uVar2 = *puVar21;
          while (uVar2 == 0) {
            lVar15 = (longlong)(int)local_198;
            iStack_180 = iStack_180 + 0x20;
            iVar8 = (int)local_198 + 1;
            bVar3 = (int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_198;
            local_198._0_4_ = iVar8;
            if (bVar3) goto LAB_1423fe681;
            uVar2 = puVar21[lVar15 + 1];
          }
          local_198._4_4_ = -uVar2 & uVar2;
          iVar8 = 0x1f;
          if (local_198._4_4_ != 0) {
            for (; local_198._4_4_ >> iVar8 == 0; iVar8 = iVar8 + -1) {
            }
          }
          if (local_198._4_4_ == 0) {
            iVar8 = 0x20;
          }
          else {
            iVar8 = 0x1f - iVar8;
          }
          uStack_184 = (iStack_180 - iVar8) + 0x1f;
          if ((int)uVar6 < (int)uStack_184) {
LAB_1423fe681:
            uStack_184 = uVar6;
          }
        }
        uStack_158 = 0xffffffff;
        uStack_154 = uStack_184;
        local_150 = CONCAT44(uStack_17c,iStack_180);
        puVar21 = puVar17 + -4;
        uVar2 = puVar17[6];
        uStack_130._0_4_ = (int)local_198;
        uStack_130._4_4_ = local_198._4_4_;
        local_188 = -1 << ((byte)uVar6 & 0x1f);
        uVar20 = uVar6 & 0xffffffe0;
        iStack_168 = (int)local_198;
        uStack_164 = local_198._4_4_;
        puStack_190 = puVar17;
        uStack_184 = uVar6;
        local_160 = puVar17;
        local_138 = puVar21;
        puStack_128 = puVar17;
        uStack_118 = local_150;
        uStack_120 = uStack_158;
        uStack_11c = uStack_154;
        local_170 = puVar21;
        if (uVar6 != uVar2) {
          puVar16 = *(uint **)(puVar17 + 4);
          if (*(uint **)(puVar17 + 4) == (uint *)0x0) {
            puVar16 = puVar17;
          }
          uVar13 = puVar16[(int)uVar6 >> 5] & local_188;
          iVar8 = (int)uVar6 >> 5;
          while (uVar13 == 0) {
            uVar20 = uVar20 + 0x20;
            if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
            goto LAB_1423fe764;
            uVar13 = puVar16[(longlong)iVar8 + 1];
            local_188 = 0xffffffff;
            iVar8 = iVar8 + 1;
          }
          uVar13 = -uVar13 & uVar13;
          iVar8 = 0x1f;
          if (uVar13 != 0) {
            for (; uVar13 >> iVar8 == 0; iVar8 = iVar8 + -1) {
            }
          }
          if (uVar13 == 0) {
            iVar8 = 0x20;
          }
          else {
            iVar8 = 0x1f - iVar8;
          }
          uStack_184 = (uVar20 - iVar8) + 0x1f;
          uVar6 = uStack_184;
          if ((int)uVar2 < (int)uStack_184) {
LAB_1423fe764:
            uStack_184 = uVar2;
            uVar6 = uVar2;
          }
        }
        while (((uStack_154 != uVar6 || (local_160 != puVar17)) || (local_170 != puVar21))) {
          FUN_140ac3dd0(&local_88,&local_174,
                        *(longlong *)local_170 + (longlong)(int)uStack_154 * 0xc,0);
          uStack_158 = uStack_158 & ~uStack_164;
          local_178 = puVar17[-8] +
                      local_178 +
                      (((int)(puVar17[7] + 0x1f + ((int)(puVar17[7] + 0x1f) >> 0x1f & 0x1fU)) >> 5)
                       + puVar17[-1] * 3 + puVar17[0xe]) * 4;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_168);
        }
        lVar22 = lVar22 + 0x70;
        puVar17 = puVar17 + 0x1c;
      } while (lVar22 != local_140);
      param_1 = local_148;
      iVar8 = (int)local_60;
    }
    local_198 = (undefined **)0x100000000;
    puStack_190 = local_78;
    uStack_184 = 0;
    iStack_180 = 0;
    if (iVar8 != 0) {
      puVar17 = local_78;
      if (local_68 != (uint *)0x0) {
        puVar17 = local_68;
      }
      uVar6 = *puVar17;
      iVar7 = 0;
      while (uVar6 == 0) {
        iStack_180 = iStack_180 + 0x20;
        local_198._4_4_ = (uint)((ulonglong)local_198 >> 0x20);
        local_198 = (undefined **)CONCAT44(local_198._4_4_,iVar7 + 1);
        uStack_184 = iVar8;
        if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1423fe8cb;
        uVar6 = puVar17[(longlong)iVar7 + 1];
        iVar7 = iVar7 + 1;
      }
      uVar6 = -uVar6 & uVar6;
      iVar7 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      local_198 = (undefined **)CONCAT44(uVar6,(int)local_198);
      if (uVar6 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_184 = (iStack_180 - iVar7) + 0x1f;
      if (iVar8 < (int)uStack_184) {
        uStack_184 = iVar8;
      }
    }
LAB_1423fe8cb:
    uStack_158 = 0xffffffff;
    uStack_154 = uStack_184;
    local_150 = CONCAT44(uStack_17c,iStack_180);
    local_138 = (uint *)&local_88;
    uStack_130 = (longlong *)local_198;
    plVar1 = uStack_130;
    local_188 = -1 << ((byte)iVar8 & 0x1f);
    plVar14 = param_1 + 0x59;
    uStack_130._0_4_ = (int)local_198;
    uStack_130._4_4_ = (uint)((ulonglong)local_198 >> 0x20);
    iStack_168 = (int)uStack_130;
    uStack_164 = uStack_130._4_4_;
    uStack_184 = iVar8;
    local_160 = puStack_190;
    uStack_130 = plVar1;
    puStack_128 = puStack_190;
    uStack_118 = local_150;
    local_170 = local_138;
    uStack_120 = uStack_158;
    uStack_11c = uStack_154;
    while (((uStack_154 != iVar8 || (local_160 != local_78)) || (local_170 != (uint *)&local_88))) {
      plVar1 = (longlong *)(*(longlong *)local_170 + (longlong)(int)uStack_154 * 0xc);
      if ((int)param_1[0x5a] != *(int *)((longlong)param_1 + 0x2fc)) {
        plVar18 = (longlong *)param_1[0x61];
        if ((longlong *)param_1[0x61] == (longlong *)0x0) {
          plVar18 = param_1 + 0x60;
        }
        iVar7 = *(int *)((longlong)plVar18 +
                        ((longlong)(int)param_1[0x62] - 1U & (longlong)(int)*plVar1) * 4);
        if (iVar7 != -1) {
          do {
            if (*(int *)(*plVar14 + (longlong)iVar7 * 0xc) == (int)*plVar1) {
              if (iVar7 != -1) goto LAB_1423fea77;
              break;
            }
            iVar7 = *(int *)(*plVar14 + 4 + (longlong)iVar7 * 0xc);
          } while (iVar7 != -1);
        }
      }
      lVar22 = *(longlong *)(param_1[0x1e] + 0x58);
      plVar18 = (longlong *)(lVar22 + 0x3f8);
      local_198 = (undefined **)param_1;
      if (*(int *)(lVar22 + 0x400) != *(int *)(lVar22 + 0x42c)) {
        lVar15 = *(longlong *)(lVar22 + 0x438);
        if (*(longlong *)(lVar22 + 0x438) == 0) {
          lVar15 = lVar22 + 0x430;
        }
        iVar7 = *(int *)(lVar15 + ((longlong)*(int *)(lVar22 + 0x440) - 1U & (longlong)(int)*plVar1)
                                  * 4);
        if (iVar7 != -1) {
          do {
            piVar9 = (int *)((longlong)iVar7 * 0x60 + *plVar18);
            if (*piVar9 == (int)*plVar1) {
              if ((iVar7 != -1) && (piVar9 != (int *)0x0)) goto LAB_1423fea61;
              break;
            }
            iVar7 = piVar9[0x16];
          } while (iVar7 != -1);
        }
      }
      local_148 = plVar1;
      FUN_1423e35c0(plVar18,&local_174,&local_148,0);
      piVar9 = (int *)((longlong)local_174 * 0x60 + *plVar18);
LAB_1423fea61:
      TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::
      Emplace<FObjectReplicator_*_const_&>(piVar9 + 2,&local_140,&local_198);
LAB_1423fea77:
      uStack_158 = uStack_158 & ~uStack_164;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_168);
    }
    uVar6 = *(uint *)(param_1 + 0x5e);
    puVar17 = (uint *)(param_1 + 0x5b);
    local_198._0_4_ = 0;
    local_198._4_4_ = 1;
    uStack_184 = 0;
    iStack_180 = 0;
    if (uVar6 != 0) {
      puVar21 = (uint *)param_1[0x5d];
      if ((uint *)param_1[0x5d] == (uint *)0x0) {
        puVar21 = puVar17;
      }
      uVar2 = *puVar21;
      local_198._0_4_ = 0;
      while (uVar2 == 0) {
        lVar22 = (longlong)(int)local_198;
        iStack_180 = iStack_180 + 0x20;
        iVar8 = (int)local_198 + 1;
        bVar3 = (int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_198;
        local_198._0_4_ = iVar8;
        if (bVar3) goto LAB_1423feb42;
        uVar2 = puVar21[lVar22 + 1];
      }
      local_198._4_4_ = -uVar2 & uVar2;
      iVar8 = 0x1f;
      if (local_198._4_4_ != 0) {
        for (; local_198._4_4_ >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (local_198._4_4_ == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_184 = (iStack_180 - iVar8) + 0x1f;
      if ((int)uVar6 < (int)uStack_184) {
LAB_1423feb42:
        uStack_184 = uVar6;
      }
    }
    uVar2 = *(uint *)(param_1 + 0x5e);
    uStack_158 = 0xffffffff;
    uStack_154 = uStack_184;
    local_150 = CONCAT44(uStack_17c,iStack_180);
    local_188 = -1 << ((byte)uVar2 & 0x1f);
    uStack_130._0_4_ = (int)local_198;
    uStack_130._4_4_ = local_198._4_4_;
    uVar20 = uVar2 & 0xffffffe0;
    iStack_168 = (int)local_198;
    uStack_164 = local_198._4_4_;
    puStack_190 = puVar17;
    uStack_184 = uVar2;
    local_160 = puVar17;
    local_138 = (uint *)plVar14;
    puStack_128 = puVar17;
    uStack_118 = local_150;
    local_170 = (uint *)plVar14;
    uStack_120 = uStack_158;
    uStack_11c = uStack_154;
    if (uVar2 != uVar6) {
      puVar21 = (uint *)param_1[0x5d];
      if ((uint *)param_1[0x5d] == (uint *)0x0) {
        puVar21 = puVar17;
      }
      uVar13 = puVar21[(int)uVar2 >> 5] & local_188;
      iVar8 = (int)uVar2 >> 5;
      while (uVar13 == 0) {
        uVar20 = uVar20 + 0x20;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
        goto LAB_1423fec24;
        uVar13 = puVar21[(longlong)iVar8 + 1];
        local_188 = 0xffffffff;
        iVar8 = iVar8 + 1;
      }
      uVar13 = -uVar13 & uVar13;
      iVar8 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uVar13 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_184 = (uVar20 - iVar8) + 0x1f;
      uVar2 = uStack_184;
      if ((int)uVar6 < (int)uStack_184) {
LAB_1423fec24:
        uStack_184 = uVar6;
        uVar2 = uVar6;
      }
    }
LAB_1423fec31:
    if (((uStack_154 != uVar2) || (local_160 != puVar17)) || (local_170 != (uint *)plVar14)) {
      puVar21 = (uint *)(*(longlong *)local_170 + (longlong)(int)uStack_154 * 0xc);
      if ((int)local_80 != local_54) {
        puVar10 = local_50;
        if (local_48 != (undefined1 *)0x0) {
          puVar10 = local_48;
        }
        for (iVar8 = *(int *)(puVar10 + (longlong)(int)(local_40 - 1U & *puVar21) * 4); iVar8 != -1;
            iVar8 = *(int *)(local_88 + 4 + (longlong)iVar8 * 0xc)) {
          if (*(uint *)(local_88 + (longlong)iVar8 * 0xc) == *puVar21) {
            if (iVar8 != -1) goto LAB_1423fef07;
            break;
          }
        }
      }
      lVar22 = *(longlong *)(param_1[0x1e] + 0x58);
      if (*(int *)(lVar22 + 0x400) != *(int *)(lVar22 + 0x42c)) {
        lVar15 = *(longlong *)(lVar22 + 0x438);
        if (*(longlong *)(lVar22 + 0x438) == 0) {
          lVar15 = lVar22 + 0x430;
        }
        uVar6 = *(uint *)(lVar15 + ((longlong)*(int *)(lVar22 + 0x440) - 1U &
                                   (longlong)(int)*puVar21) * 4);
        if (uVar6 != 0xffffffff) {
          do {
            puVar16 = (uint *)((longlong)(int)uVar6 * 0x60 + *(longlong *)(lVar22 + 0x3f8));
            if (*puVar16 == *puVar21) {
              if (uVar6 != 0xffffffff) goto LAB_1423fed45;
              break;
            }
            uVar6 = puVar16[0x16];
          } while (uVar6 != 0xffffffff);
        }
      }
      puVar16 = (uint *)0x0;
LAB_1423fed45:
      if (puVar16[4] != puVar16[0xf]) {
        iVar8 = (int)((ulonglong)param_1 >> 4);
        uVar20 = iVar8 << 8 ^ 0x9e3779b9U - iVar8;
        uVar6 = -(uVar20 + iVar8) ^ uVar20 >> 0xd;
        uVar13 = (iVar8 - uVar20) - uVar6 ^ uVar6 >> 0xc;
        uVar20 = (uVar20 - uVar13) - uVar6 ^ uVar13 << 0x10;
        uVar6 = (uVar6 - uVar20) - uVar13 ^ uVar20 >> 5;
        uVar13 = (uVar13 - uVar20) - uVar6 ^ uVar6 >> 3;
        uVar20 = (uVar20 - uVar13) - uVar6 ^ uVar13 << 10;
        puVar12 = *(uint **)(puVar16 + 0x12);
        if (*(uint **)(puVar16 + 0x12) == (uint *)0x0) {
          puVar12 = puVar16 + 0x10;
        }
        uVar6 = puVar12[((longlong)(int)((uVar6 - uVar20) - uVar13) ^ (ulonglong)(uVar20 >> 0xf)) &
                        (longlong)(int)puVar16[0x14] - 1U];
        if (uVar6 != 0xffffffff) {
          lVar22 = *(longlong *)(puVar16 + 2);
          do {
            lVar15 = (longlong)(int)uVar6;
            if (*(longlong **)(lVar22 + lVar15 * 0x10) == param_1) {
              uVar19 = (longlong)*(int *)(lVar22 + 0xc + lVar15 * 0x10) &
                       (longlong)(int)puVar16[0x14] - 1U;
              puVar11 = puVar12 + uVar19;
              uVar20 = puVar12[uVar19];
              goto joined_r0x0001423fee49;
            }
            uVar6 = *(uint *)(lVar22 + 8 + lVar15 * 0x10);
          } while (uVar6 != 0xffffffff);
        }
      }
      goto LAB_1423feee5;
    }
    piVar9 = (int *)(*(longlong *)(param_1[0x1e] + 0x58) + 0x448);
    *piVar9 = *piVar9 - (int)param_1[99];
    *(int *)(param_1 + 99) = local_178;
    piVar9 = (int *)(*(longlong *)(param_1[0x1e] + 0x58) + 0x448);
    *piVar9 = *piVar9 + local_178;
    if (param_1 + 0x59 != &local_88) {
      TSparseArray<TSetElement<TTuple<FGameplayTag,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=(param_1 + 0x59,&local_88);
      puVar10 = local_48;
      if (local_48 == (undefined1 *)0x0) {
        _guard_xfg_dispatch_icall_nop(param_1 + 0x60,local_50,4);
      }
      if (param_1[0x61] != 0) {
        FMemory::Free();
        puVar10 = local_48;
      }
      param_1[0x61] = (longlong)puVar10;
      local_48 = (undefined1 *)0x0;
      *(int *)(param_1 + 0x62) = local_40;
    }
    local_40 = 0;
    if (local_48 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_88);
  }
  return;
joined_r0x0001423fee49:
  if (uVar20 == 0xffffffff) goto LAB_1423fee71;
  if (uVar20 == uVar6) {
    *puVar11 = *(uint *)(lVar22 + lVar15 * 0x10 + 8);
    goto LAB_1423fee71;
  }
  puVar11 = (uint *)(lVar22 + 8 + (longlong)(int)uVar20 * 0x10);
  uVar20 = *puVar11;
  goto joined_r0x0001423fee49;
LAB_1423fee71:
  bVar4 = (byte)uVar6 & 0x1f;
  if (puVar16[0xf] != 0) {
    *(uint *)(*(longlong *)(puVar16 + 2) + (longlong)(int)puVar16[0xe] * 0x10) = uVar6;
  }
  lVar22 = *(longlong *)(puVar16 + 2);
  *(undefined4 *)(lVar22 + lVar15 * 0x10) = 0xffffffff;
  if ((int)puVar16[0xf] < 1) {
    uVar20 = 0xffffffff;
  }
  else {
    uVar20 = puVar16[0xe];
  }
  *(uint *)(lVar22 + 4 + lVar15 * 0x10) = uVar20;
  puVar16[0xf] = puVar16[0xf] + 1;
  puVar16[0xe] = uVar6;
  puVar12 = *(uint **)(puVar16 + 10);
  if (*(uint **)(puVar16 + 10) == (uint *)0x0) {
    puVar12 = puVar16 + 6;
  }
  if ((int)uVar6 < 0) {
    uVar6 = uVar6 + 0x1f;
  }
  puVar12[(int)uVar6 >> 5] = puVar12[(int)uVar6 >> 5] & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
LAB_1423feee5:
  if (puVar16[4] == puVar16[0xf]) {
    TSet<TTuple<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::Remove(*(longlong *)(param_1[0x1e] + 0x58) + 0x3f8,puVar21);
  }
LAB_1423fef07:
  uStack_158 = uStack_158 & ~uStack_164;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_168);
  goto LAB_1423fec31;
}



// FUNCTION 1423ff040 FUN_1423ff040 body=2467 status=ok
// SIG undefined FUN_1423ff040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1423ff040(undefined8 *param_1,byte *param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulonglong uVar10;
  undefined8 uVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  undefined **ppuVar18;
  byte bVar19;
  uint uVar20;
  uint *puVar21;
  uint *puVar22;
  longlong *plVar23;
  undefined1 auStack_2c8 [32];
  byte *local_2a8;
  byte *local_2a0;
  undefined8 *local_298;
  byte local_288;
  byte local_287;
  char local_286;
  undefined8 local_280;
  uint *puStack_278;
  undefined4 local_270;
  uint uStack_26c;
  int iStack_268;
  undefined4 uStack_264;
  undefined **local_260;
  uint *local_258;
  int local_250;
  uint uStack_24c;
  uint *puStack_248;
  uint local_240;
  uint uStack_23c;
  int iStack_238;
  undefined4 uStack_234;
  int *local_230;
  undefined8 local_228;
  longlong *local_218;
  undefined8 uStack_210;
  uint *puStack_208;
  uint uStack_200;
  uint uStack_1fc;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  longlong *local_1e8;
  undefined2 local_1e0;
  byte *local_1d8;
  longlong *local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  undefined8 uStack_1b8;
  uint *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 local_188 [144];
  longlong local_f8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined ***pppuStack_90;
  undefined8 local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  int *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  uVar3 = param_1[2];
  if (uVar3 != 0) {
    iVar14 = *(int *)(uVar3 + 0xc);
    lVar15 = 0;
    if (iVar14 < (int)DAT_1469e91c4) {
      uVar16 = iVar14 >> 0x1f & 0xffff;
      uVar13 = iVar14 + uVar16;
      lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar13 >> 0x10) * 8) +
               (longlong)(int)((uVar13 & 0xffff) - uVar16) * 0x18;
    }
    if ((*(uint *)(lVar15 + 8) >> 0x1d & 1) == 0) {
      if (*(int *)(param_1[0x1e] + 300) == 1) {
        return;
      }
      local_2a8 = &local_288;
      local_288 = 0;
      local_2a0 = param_2;
      local_1d8 = param_2;
      FUN_14273e1c0(param_1[0x56],param_1[0x58],*(undefined8 *)(param_1[0x1e] + 0x68),uVar3);
      local_218 = param_1 + 0x20;
      uVar13 = *(uint *)(param_1 + 0x25);
      puStack_278 = (uint *)(param_1 + 0x22);
      local_280 = (undefined **)0x100000000;
      uStack_26c = 0;
      iStack_268 = 0;
      if (uVar13 != 0) {
        puVar21 = (uint *)param_1[0x24];
        if ((uint *)param_1[0x24] == (uint *)0x0) {
          puVar21 = puStack_278;
        }
        uVar16 = *puVar21;
        iStack_268 = 0;
        iVar14 = 0;
        while (uVar16 == 0) {
          iStack_268 = iStack_268 + 0x20;
          uVar10 = (ulonglong)local_280 >> 0x20;
          local_280 = (undefined **)CONCAT44((int)uVar10,iVar14 + 1);
          if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar14)
          goto LAB_1423ff1d5;
          uVar16 = puVar21[(longlong)iVar14 + 1];
          iVar14 = iVar14 + 1;
        }
        uVar16 = uVar16 - 1 & uVar16 ^ uVar16;
        iVar14 = 0x1f;
        if (uVar16 != 0) {
          for (; uVar16 >> iVar14 == 0; iVar14 = iVar14 + -1) {
          }
        }
        local_280 = (undefined **)CONCAT44(uVar16,SUB84(local_280,0));
        if (uVar16 == 0) {
          iVar14 = 0x20;
        }
        else {
          iVar14 = 0x1f - iVar14;
        }
        uStack_26c = (iStack_268 - iVar14) + 0x1f;
        if ((int)uVar13 < (int)uStack_26c) {
LAB_1423ff1d5:
          uStack_26c = uVar13;
        }
      }
      local_270 = 0xffffffff;
      auVar9._4_4_ = uStack_26c;
      auVar9._0_4_ = 0xffffffff;
      auVar9._8_4_ = iStack_268;
      auVar9._12_4_ = uStack_264;
      uStack_198._0_4_ = SUB84(local_218,0);
      uStack_198._4_4_ = (undefined4)((ulonglong)local_218 >> 0x20);
      local_1e0 = 0;
      uStack_200 = 0xffffffff;
      uStack_1fc = uStack_26c;
      uStack_210 = local_280;
      uStack_1f8 = auVar9._8_8_;
      auVar8._8_4_ = (undefined4)uStack_198;
      auVar8._0_8_ = uStack_1f8;
      auVar8._12_4_ = uStack_198._4_4_;
      local_1f0 = auVar8._8_8_;
      puStack_208 = puStack_278;
      local_1e8 = local_218;
      uStack_198 = local_218;
      if ((int)uStack_26c < *(int *)(param_1 + 0x25)) {
        do {
          uVar13 = uStack_1fc;
          lVar15 = *(longlong *)(*local_218 + 8 + (longlong)(int)uStack_1fc * 0x18);
          iVar14 = *(int *)(*local_218 + (longlong)(int)uStack_1fc * 0x18);
          lVar4 = *(longlong *)(lVar15 + 0x70);
          plVar23 = *(longlong **)(lVar4 + 0x90);
          local_58 = (int *)0x0;
          local_50 = 0;
          local_88 = local_88 & 0xffff000000000000;
          local_80 = 0;
          local_68 = 0;
          local_60 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = 0;
          pppuStack_90 = (undefined ***)0x0;
          local_78 = 0;
          uStack_70 = 0;
          local_258 = *(uint **)(param_1[0x1e] + 0x58);
          local_260 = &PTR_FUN_145086ba8;
          local_1d0 = *(longlong **)(lVar15 + 0x18);
          FName::ToString(&local_1d0,&local_230);
          if (local_58 != (int *)0x0) {
            FMemory::Free();
          }
          uVar10 = local_88;
          local_58 = local_230;
          local_50 = local_228;
          local_230 = (int *)0x0;
          local_228 = 0;
          local_a8 = *(undefined8 *)(param_1[0x1e] + 0x68);
          pppuStack_90 = &local_260;
          local_88._0_3_ = CONCAT12(local_288,(undefined2)local_88);
          local_88 = CONCAT71(local_88._1_7_,1);
          uVar11 = local_88;
          local_88._6_2_ = SUB82(uVar10,6);
          local_88._0_6_ = (uint6)(uint5)uVar11;
          local_98 = lVar4;
          local_80 = uVar3;
          (**(code **)(*plVar23 + 0x70))(plVar23,&local_c8,uVar3 + (longlong)iVar14);
          local_288 = local_288 | local_88._1_1_;
          *local_1d8 = *local_1d8 | local_88._3_1_;
          if (local_88._1_1_ != 0) {
            local_2a8 = (byte *)&local_280;
            local_280 = (undefined **)0x0;
            puStack_278 = (uint *)0x0;
            FObjectReplicator::QueuePropertyRepNotify(param_1,uVar3,lVar15,0);
          }
          if (local_88._3_1_ == 0) {
            TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
            ::Remove(local_1f0,uVar13);
            local_1e0 = CONCAT11(local_1e0._1_1_,1);
          }
          if (local_58 != (int *)0x0) {
            FMemory::Free();
          }
          uStack_200 = uStack_200 & ~uStack_210._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_210);
        } while ((int)uStack_1fc < (int)puStack_208[6]);
        if (((char)local_1e0 != '\0') && (local_1e0._1_1_ != '\0')) {
          TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_1e8,(int)local_1e8[1] - *(int *)((longlong)local_1e8 + 0x34),
                              (longlong)L"Cannot send Names on the control channel" + 0x11);
        }
      }
      if (local_288 != 0) {
        if ((longlong *)param_1[2] != (longlong *)0x0) {
          (**(code **)(*(longlong *)param_1[2] + 0x1e0))();
        }
        FUN_1423fe3b0(param_1);
      }
      FUN_1423e76f0(param_1,0);
      plVar23 = *(longlong **)(param_1[0x1e] + 0x68);
      if (plVar23 == (longlong *)0x0) {
        return;
      }
      local_1d0 = plVar23;
      lVar15 = UPackageMapClient::GetPrivateStaticClass();
      if ((*(int *)(plVar23[2] + 0x90) < *(int *)(lVar15 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar23[2] + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8) !=
          lVar15 + 0x88)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (!bVar7) {
        return;
      }
      if (param_1[0x1f] == 0) {
        return;
      }
      local_286 = (**(code **)(**(longlong **)(param_1[0x1e] + 0x58) + 0x368))();
      local_230 = (int *)FUN_14171a990(*(undefined8 *)(*(longlong *)(param_1[0x1e] + 0x58) + 0xf0),
                                       *param_1);
      iVar14 = *(int *)(param_1 + 0x6a);
      do {
        if (iVar14 < 1) {
          return;
        }
        plVar23 = (longlong *)0x0;
        piVar5 = (int *)param_1[0x69];
        iVar14 = *piVar5;
        for (piVar6 = local_230; piVar6 != (int *)0x0; piVar6 = *(int **)(piVar6 + 2)) {
          iVar2 = *piVar6;
          if ((iVar2 <= iVar14) && (iVar14 < piVar6[10] + iVar2)) {
            plVar23 = (longlong *)(*(longlong *)(piVar6 + 8) + (longlong)(iVar14 - iVar2) * 0x18);
            break;
          }
        }
        FNetBitReader::FNetBitReader
                  (local_188,*(undefined8 *)(param_1[0x1e] + 0x68),*(undefined8 *)(piVar5 + 2),
                   *(undefined8 *)(piVar5 + 6));
        local_287 = 0;
        plVar1 = (longlong *)(piVar5 + 8);
        uStack_24c = 1;
        uVar13 = piVar5[0x12];
        puVar21 = (uint *)(piVar5 + 0xc);
        local_250 = 0;
        uStack_23c = 0;
        iStack_238 = 0;
        if (uVar13 != 0) {
          puVar22 = *(uint **)(piVar5 + 0x10);
          if (*(uint **)(piVar5 + 0x10) == (uint *)0x0) {
            puVar22 = puVar21;
          }
          uVar16 = *puVar22;
          while (uVar16 == 0) {
            lVar15 = (longlong)local_250;
            iStack_238 = iStack_238 + 0x20;
            iVar14 = local_250 + 1;
            bVar7 = (int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_250;
            local_250 = iVar14;
            if (bVar7) goto LAB_1423ff64a;
            uVar16 = puVar22[lVar15 + 1];
          }
          uStack_24c = -uVar16 & uVar16;
          iVar14 = 0x1f;
          if (uStack_24c != 0) {
            for (; uStack_24c >> iVar14 == 0; iVar14 = iVar14 + -1) {
            }
          }
          if (uStack_24c == 0) {
            iVar14 = 0x20;
          }
          else {
            iVar14 = 0x1f - iVar14;
          }
          uStack_23c = (iStack_238 - iVar14) + 0x1f;
          if ((int)uVar13 < (int)uStack_23c) {
LAB_1423ff64a:
            uStack_23c = uVar13;
          }
        }
        uVar16 = piVar5[0x12];
        uStack_1a8 = CONCAT44(uStack_23c,0xffffffff);
        uStack_1f8 = CONCAT44(uStack_234,iStack_238);
        uStack_1b8 = CONCAT44(uStack_24c,local_250);
        local_240 = -1 << ((byte)uVar16 & 0x1f);
        uVar20 = uVar16 & 0xffffffe0;
        uStack_210 = (undefined **)CONCAT44(uStack_24c,local_250);
        uStack_200 = 0xffffffff;
        uStack_1fc = uStack_23c;
        puStack_248 = puVar21;
        uStack_23c = uVar16;
        local_218 = plVar1;
        puStack_208 = puVar21;
        local_1c0 = plVar1;
        puStack_1b0 = puVar21;
        uStack_1a0 = uStack_1f8;
        if (uVar16 != uVar13) {
          puVar22 = *(uint **)(piVar5 + 0x10);
          if (*(uint **)(piVar5 + 0x10) == (uint *)0x0) {
            puVar22 = puVar21;
          }
          uVar17 = puVar22[(int)uVar16 >> 5] & local_240;
          iVar14 = (int)uVar16 >> 5;
          while (uVar17 == 0) {
            uVar20 = uVar20 + 0x20;
            if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar14)
            goto LAB_1423ff71a;
            uVar17 = puVar22[(longlong)iVar14 + 1];
            local_240 = 0xffffffff;
            iVar14 = iVar14 + 1;
          }
          uVar17 = -uVar17 & uVar17;
          iVar14 = 0x1f;
          if (uVar17 != 0) {
            for (; uVar17 >> iVar14 == 0; iVar14 = iVar14 + -1) {
            }
          }
          if (uVar17 == 0) {
            iVar14 = 0x20;
          }
          else {
            iVar14 = 0x1f - iVar14;
          }
          uStack_23c = (uVar20 - iVar14) + 0x1f;
          uVar16 = uStack_23c;
          if ((int)uVar13 < (int)uStack_23c) {
LAB_1423ff71a:
            uStack_23c = uVar13;
            uVar16 = uVar13;
          }
        }
        while( true ) {
          if ((uStack_1fc == uVar16) && (puStack_208 == puVar21)) {
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
          if ((bVar7) && (local_218 == plVar1)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          bVar19 = local_287;
          if (!bVar7) goto LAB_1423ff78d;
          cVar12 = (**(code **)(*local_1d0 + 0x2f0))
                             (local_1d0,*local_218 + (longlong)(int)uStack_1fc * 0xc);
          if (cVar12 != '\0') break;
          uStack_200 = uStack_200 & ~uStack_210._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_210);
        }
        bVar19 = 1;
LAB_1423ff78d:
        local_c8 = 0;
        uStack_c0 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0xffffffff;
        local_88 = 0;
        local_80 = local_80 & 0xffffffff00000000;
        local_287 = 0;
        local_260 = (undefined **)0x0;
        local_258 = (uint *)0xa;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_260,0);
        ppuVar18 = local_260;
        FGenericPlatformString::Memcpy(local_260,L"(Unknown)",0x14);
        if (plVar23 == (longlong *)0x0) {
LAB_1423ff8a7:
          if ((local_286 != '\0') && ((*(byte *)(param_1[0x1e] + 0xa4) & 1) == 0)) {
            TArray<FObjectReplicator::FRPCPendingLocalCall,FDefaultAllocator>::Empty
                      (param_1 + 0x69,0);
            *local_1d8 = 0;
            (**(code **)(*(longlong *)param_1[0x1e] + 0x2f8))();
LAB_1423ff955:
            if (ppuVar18 != (undefined **)0x0) {
              FMemory::Free(ppuVar18);
            }
            local_80 = local_80 & 0xffffffff00000000;
            if (local_88 != 0) {
              FMemory::Free();
            }
            TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                      (&local_c8);
            if (local_f8 != 0) {
              FMemory::Free();
            }
            FArchive::~FArchive(local_188);
            return;
          }
        }
        else {
          local_1c8 = *(undefined8 *)(*plVar23 + 0x18);
          FName::ToString(&local_1c8,&local_280);
          if (ppuVar18 != (undefined **)0x0) {
            FMemory::Free(ppuVar18);
          }
          ppuVar18 = local_280;
          local_258 = puStack_278;
          local_298 = &local_c8;
          local_2a0 = &local_287;
          local_2a8 = (byte *)CONCAT71(local_2a8._1_7_,bVar19);
          local_280 = (undefined **)0x0;
          puStack_278 = (uint *)0x0;
          cVar12 = FUN_1423f8a40(param_1,local_188,piVar5 + 1,plVar23);
          if (cVar12 == '\0') goto LAB_1423ff8a7;
          if (local_287 != 0) {
            TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::operator=
                      (piVar5 + 8,&local_c8);
            *local_1d8 = 1;
            goto LAB_1423ff955;
          }
        }
        TArray<FObjectReplicator::FRPCPendingLocalCall,FDefaultAllocator>::RemoveAtImpl
                  (param_1 + 0x69,0,1,1);
        if (ppuVar18 != (undefined **)0x0) {
          FMemory::Free(ppuVar18);
        }
        local_80 = local_80 & 0xffffffff00000000;
        if (local_88 != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                  (&local_c8);
        if (local_f8 != 0) {
          FMemory::Free();
        }
        FArchive::~FArchive(local_188);
        iVar14 = *(int *)(param_1 + 0x6a);
      } while( true );
    }
  }
  *param_2 = 0;
  return;
}



// FUNCTION 1423ff9f0 ValidateAgainstState body=97 status=ok
// SIG undefined ValidateAgainstState(void)

undefined8 FObjectReplicator::ValidateAgainstState(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  
  if ((((*(longlong *)(param_1 + 0x2b0) != 0) && (*(longlong *)(param_1 + 0x2c0) != 0)) &&
      (*(longlong *)(param_1 + 800) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 800) + 0x18), lVar1 != 0)) {
    cVar2 = FUN_14271c1e0(*(longlong *)(param_1 + 0x2b0),*(longlong *)(param_1 + 0x2c0) + 0x70,
                          *(undefined8 *)(lVar1 + 0x820),param_2,0);
    if (cVar2 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1423ffa60 FUN_1423ffa60 body=246 status=ok
// SIG undefined FUN_1423ffa60(void)

int FUN_1423ffa60(longlong param_1,longlong *param_2,longlong *param_3,undefined1 param_4,
                 longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  longlong *local_res8;
  longlong local_res10;
  undefined4 local_res20 [2];
  
  lVar2 = param_3[0x14];
  local_res8 = param_2;
  FBitWriter::WriteBit(param_3,param_4);
  bVar4 = local_res8 == *(longlong **)(param_1 + 0x68);
  FBitWriter::WriteBit(param_3,bVar4);
  if (!bVar4) {
    (**(code **)(*param_3 + 0x30))(param_3,&local_res8);
    cVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x28) + 0x58) + 0x368))();
    if (cVar3 != '\0') {
      cVar3 = (**(code **)(*local_res8 + 0x1b8))();
      if (cVar3 == '\0') {
        FBitWriter::WriteBit(param_3,0);
        local_res10 = local_res8[2];
        (**(code **)(*param_3 + 0x30))(param_3,&local_res10);
      }
      else {
        FBitWriter::WriteBit(param_3,1);
      }
    }
  }
  local_res20[0] = *(undefined4 *)(param_5 + 0xa0);
  (**(code **)(*param_3 + 0x68))(param_3,local_res20);
  lVar1 = param_3[0x14];
  (**(code **)(*param_3 + 0x58))
            (param_3,*(undefined8 *)(param_5 + 0x90),*(undefined8 *)(param_5 + 0xa0));
  return (int)lVar1 - (int)lVar2;
}



// FUNCTION 1423ffb60 FUN_1423ffb60 body=241 status=ok
// SIG undefined FUN_1423ffb60(void)

int FUN_1423ffb60(longlong param_1,longlong *param_2,int *param_3,longlong param_4,longlong param_5,
                 longlong param_6)

{
  longlong lVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 local_res8 [2];
  
  lVar1 = param_2[0x14];
  if ((*(byte *)(*(longlong *)(param_1 + 0x28) + 0xa4) & 1) == 0) {
    uVar4 = (ulonglong)*(uint *)(param_4 + 8);
    iVar5 = *param_3 + 1 + param_3[10];
  }
  else {
    uVar3 = 0;
    if (0 < *(int *)(param_5 + 0x20)) {
      piVar2 = (int *)(*(longlong *)(param_5 + 0x18) + 8);
      uVar4 = uVar3;
      do {
        if (*piVar2 == *(int *)(param_4 + 0xc)) goto LAB_1423ffbc7;
        uVar4 = (ulonglong)((int)uVar4 + 1);
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 0x10;
      } while ((longlong)uVar3 < (longlong)*(int *)(param_5 + 0x20));
    }
    uVar4 = 0xffffffff;
LAB_1423ffbc7:
    FUN_1425f5f30(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x68),param_5,uVar4);
    iVar5 = 2;
    if (1 < *(int *)(param_5 + 0x20)) {
      iVar5 = *(int *)(param_5 + 0x20);
    }
  }
  FBitWriter::WriteIntWrapped(param_2,uVar4,iVar5);
  local_res8[0] = *(undefined4 *)(param_6 + 0xa0);
  (**(code **)(*param_2 + 0x68))(param_2,local_res8);
  (**(code **)(*param_2 + 0x58))(param_2,*(undefined8 *)(param_6 + 0x90),local_res8[0]);
  return (int)param_2[0x14] - (int)lVar1;
}



// FUNCTION 1423ffc60 FUN_1423ffc60 body=355 status=ok
// SIG undefined FUN_1423ffc60(void)

void FUN_1423ffc60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int local_res8 [2];
  
  piVar2 = (int *)FUN_14171a990(*(undefined8 *)(*(longlong *)(param_1[0x1e] + 0x58) + 0xf0),*param_1
                               );
  uVar4 = 0;
  uVar5 = uVar4;
  for (piVar3 = piVar2; piVar3 != (int *)0x0; piVar3 = *(int **)(piVar3 + 2)) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(piVar3 + 0xc,local_res8,param_3);
    uVar5 = uVar4;
    if (((local_res8[0] != -1) &&
        (lVar1 = *(longlong *)(piVar3 + 0xc) + (longlong)local_res8[0] * 0x18, lVar1 != 0)) &&
       (uVar5 = *(ulonglong *)(lVar1 + 8), uVar5 != 0)) break;
  }
  if ((*(byte *)(*(longlong *)(param_1[0x1f] + 0x28) + 0xa4) & 1) == 0) {
    uVar6 = (ulonglong)*(uint *)(uVar5 + 8);
    iVar7 = *piVar2 + 1 + piVar2[10];
  }
  else {
    if (0 < *(int *)(param_4 + 0x20)) {
      piVar3 = (int *)(*(longlong *)(param_4 + 0x18) + 8);
      uVar6 = uVar4;
      do {
        if (*piVar3 == *(int *)(uVar5 + 0xc)) goto LAB_1423ffd4a;
        uVar6 = (ulonglong)((int)uVar6 + 1);
        uVar4 = uVar4 + 1;
        piVar3 = piVar3 + 0x10;
      } while ((longlong)uVar4 < (longlong)*(int *)(param_4 + 0x20));
    }
    uVar6 = 0xffffffff;
LAB_1423ffd4a:
    FUN_1425f5f30(*(undefined8 *)(*(longlong *)(param_1[0x1f] + 0x28) + 0x68),param_4,uVar6);
    iVar7 = 2;
    if (1 < *(int *)(param_4 + 0x20)) {
      iVar7 = *(int *)(param_4 + 0x20);
    }
  }
  FBitWriter::WriteIntWrapped(param_5,uVar6,iVar7);
  local_res8[0] = *(int *)(param_6 + 0xa0);
  (**(code **)(*param_5 + 0x68))(param_5,local_res8);
  (**(code **)(*param_5 + 0x58))(param_5,*(undefined8 *)(param_6 + 0x90),local_res8[0]);
  return;
}



// FUNCTION 1423ffdd0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TGlobalResource<FDistanceFieldVolumeTextureAtlas>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~TGlobalResource<FDistanceFieldVolumeTextureAtlas>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 1423ffe10 FUN_1423ffe10 body=502 status=ok
// SIG undefined FUN_1423ffe10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1423ffe10(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  uStack_bc = 0;
  local_b8 = 0;
  uStack_b4 = 0;
  local_b0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_60 = 0;
  local_50 = 0;
  local_d8 = 0;
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  FString::FString(param_2,*param_1);
  *(undefined8 *)(param_2 + 0x10) = local_d8;
  *(undefined8 *)(param_2 + 0x18) = local_d0;
  *(undefined8 *)(param_2 + 0x20) = local_c8;
  *(undefined4 *)(param_2 + 0x28) = local_c0;
  *(ulonglong *)(param_2 + 0x2c) = CONCAT44(local_b8,uStack_bc);
  *(undefined4 *)(param_2 + 0x34) = uStack_b4;
  *(undefined8 *)(param_2 + 0x38) = local_b0;
  *(undefined8 *)(param_2 + 0x40) = local_a8;
  *(longlong **)(param_2 + 0x48) = plStack_a0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined4 *)(param_2 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x84) = 0;
  *(undefined8 *)(param_2 + 0x90) = 0;
  *(undefined4 *)(param_2 + 0x98) = 0;
  plStack_a0 = (longlong *)0x0;
  local_a8 = 0;
  TSparseArray<TSetElement<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 0x50,&local_98);
  lVar5 = local_58;
  if (local_58 == 0) {
    _guard_xfg_dispatch_icall_nop((void *)(param_2 + 0x88),&local_60,4);
  }
  if (*(longlong *)(param_2 + 0x90) != 0) {
    FMemory::Free();
    lVar5 = local_58;
  }
  *(longlong *)(param_2 + 0x90) = lVar5;
  *(undefined4 *)(param_2 + 0x98) = (undefined4)local_50;
  *(undefined8 *)(param_2 + 0xa0) = local_48;
  *(undefined4 *)(param_2 + 0xa8) = (undefined4)local_40;
  *(undefined4 *)(param_2 + 0xac) = local_40._4_4_;
  local_40 = 0;
  local_58 = 0;
  local_48 = 0;
  local_50 = local_50 & 0xffffffff00000000;
  TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_98);
  plVar4 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_a0 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_a0)(plStack_a0);
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
  return param_2;
}



// FUNCTION 142400010 Append<FDefaultSetAllocator> body=700 status=ok
// SIG undefined Append<FDefaultSetAllocator>(void)

void TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
     ::Append<FDefaultSetAllocator>(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint *puVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 local_res8 [8];
  uint local_98;
  uint uStack_94;
  uint uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  uint uStack_70;
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
  
  if (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34) <
      (((int)param_2[1] - *(int *)(param_1 + 0x34)) - *(int *)((longlong)param_2 + 0x34)) +
      *(int *)(param_1 + 8)) {
    FUN_1405effc0();
  }
  uVar2 = *(uint *)(param_2 + 5);
  puVar1 = (uint *)(param_2 + 2);
  uVar9 = 0;
  uStack_94 = 1;
  local_98 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  if (uVar2 != 0) {
    puVar6 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar6 = puVar1;
    }
    uVar3 = *puVar6;
    uVar10 = uVar9;
    uVar5 = uVar9;
    while (uVar3 == 0) {
      iVar4 = (int)uVar10;
      uStack_80 = (int)uVar5 + 0x20;
      uVar5 = (ulonglong)uStack_80;
      local_98 = iVar4 + 1;
      uVar10 = (ulonglong)local_98;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1424000fc;
      uVar3 = puVar6[(longlong)iVar4 + 1];
    }
    uStack_94 = -uVar3 & uVar3;
    iVar4 = 0x1f;
    if (uStack_94 != 0) {
      for (; uStack_94 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_94 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_84 = (uStack_80 - iVar4) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_1424000fc:
      uStack_84 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_2 + 5);
  uStack_60 = 0xffffffff;
  uStack_5c = uStack_84;
  local_58 = CONCAT44(uStack_7c,uStack_80);
  uStack_48 = CONCAT44(uStack_94,local_98);
  uVar11 = uVar3 & 0xffffffe0;
  uStack_70 = local_98;
  uStack_6c = uStack_94;
  local_68 = puVar1;
  local_50 = param_2;
  puStack_40 = puVar1;
  uStack_30 = local_58;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_84 = uVar3;
  if (uVar3 != uVar2) {
    puVar6 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar6 = puVar1;
    }
    uVar8 = puVar6[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar4 = (int)uVar3 >> 5;
    while (uVar8 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1424001c1;
      uVar8 = puVar6[(longlong)iVar4 + 1];
      iVar4 = iVar4 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar4 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_84 = (uVar11 - iVar4) + 0x1f;
    if ((int)uVar2 < (int)uStack_84) {
LAB_1424001c1:
      uStack_84 = uVar2;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
    FUN_142400b00(param_1,local_res8,(longlong)(int)uStack_5c * 0x10 + *param_2,0);
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_2 + 0xc)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,0);
  }
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  iVar4 = (int)param_2[5] + 0x1f;
  puVar6 = (uint *)param_2[4];
  if ((uint *)param_2[4] == (uint *)0x0) {
    puVar6 = puVar1;
  }
  ::_guard_xfg_dispatch_icall_nop
            (puVar6,0,(longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_2 + 5) = 0;
  if (0 < (int)*(uint *)(param_2 + 9)) {
    uVar10 = (ulonglong)*(uint *)(param_2 + 9);
    do {
      plVar7 = (longlong *)param_2[8];
      if ((longlong *)param_2[8] == (longlong *)0x0) {
        plVar7 = param_2 + 7;
      }
      uVar5 = (longlong)(int)param_2[9] - 1U & uVar9;
      uVar9 = uVar9 + 1;
      *(undefined4 *)((longlong)plVar7 + uVar5 * 4) = 0xffffffff;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return;
}



// FUNCTION 1424002d0 FUN_1424002d0 body=459 status=ok
// SIG undefined FUN_1424002d0(void)

longlong FUN_1424002d0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong **pplVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  byte *pbVar6;
  byte local_68;
  longlong *local_58;
  int local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FWeakObjectPtr::operator=(&local_48,0);
  lVar5 = *param_4;
  lVar3 = param_4[1];
  local_40 = 0;
  local_38 = 0;
  FWeakObjectPtr::operator=(&local_48,0);
  local_40 = 0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar4 == (longlong *)0x0) {
    if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x28))(local_58,0);
      if (local_58 != (longlong *)0x0) {
        local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
      }
      local_50 = 0;
    }
  }
  else {
    *plVar4 = (longlong)&PTR_FUN_1444f7eb0;
    FWeakObjectPtr::operator=(plVar4 + 1,param_3);
    plVar4[2] = lVar5;
    plVar4[3] = lVar3;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_1444f7ef8;
    FUN_140cf7730(plVar4,&local_58);
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    lVar5 = FMemory::Realloc(plVar4,0,0);
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
  plVar4 = (longlong *)(param_1 + 0x198);
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(int *)(param_1 + 0x1a0) = iVar2 + 1;
  if (*(int *)(param_1 + 0x1a4) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar4,iVar2);
  }
  pbVar6 = (byte *)((longlong)iVar2 * 0x38 + *plVar4);
  *pbVar6 = local_68 & 0xfd | 1;
  pplVar1 = (longlong **)(pbVar6 + 0x10);
  *(undefined8 *)(pbVar6 + 8) = param_2;
  *pplVar1 = (longlong *)0x0;
  pbVar6[0x18] = 0;
  pbVar6[0x19] = 0;
  pbVar6[0x1a] = 0;
  pbVar6[0x1b] = 0;
  if (((&local_58 != pplVar1) && (local_50 != 0)) && (local_58 != (longlong *)0x0)) {
    (**(code **)(*local_58 + 0x30))(local_58,pplVar1);
  }
  *(undefined4 *)(pbVar6 + 0x20) = local_48;
  *(undefined4 *)(pbVar6 + 0x24) = local_44;
  *(undefined8 *)(pbVar6 + 0x28) = local_40;
  *(undefined4 *)(pbVar6 + 0x30) = local_38;
  iVar2 = *(int *)(param_1 + 0x1a0);
  lVar5 = *plVar4;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_58);
  return (longlong)(iVar2 + -1) * 0x38 + lVar5;
}



// FUNCTION 1424004a0 FUN_1424004a0 body=575 status=ok
// SIG undefined FUN_1424004a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424004a0(char *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_98 [32];
  float local_78;
  float local_74;
  undefined8 local_70 [4];
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  uVar6 = 0;
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0x20] = '\0';
  cVar3 = (**(code **)(*param_2 + 0x2a0))(param_2);
  iVar5 = 0;
  if (cVar3 == '\0') {
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    local_70[0] = 0;
    if (*(int *)(param_1 + 0x1c) != 1) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x10,1);
      uVar6 = *(uint *)(param_1 + 0x18);
    }
    *(uint *)(param_1 + 0x18) = uVar6 + 1;
    if (*(int *)(param_1 + 0x1c) < (int)(uVar6 + 1)) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x10);
    }
    builtin_strncpy(param_1,"\x01\x01\x01",4);
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    **(undefined4 **)(param_1 + 0x10) = (undefined4)local_70[0];
  }
  else {
    (**(code **)(param_2[5] + 0x48))(param_2 + 5,&local_78,&local_74);
    fVar13 = (local_74 - local_78) * 0.007874016;
    cVar3 = (**(code **)(*param_2 + 0x280))(param_2);
    uVar9 = (cVar3 != '\x01') + 1;
    cVar4 = (**(code **)(*param_2 + 0x288))(param_2);
    *param_1 = cVar3;
    fVar12 = 0.0;
    param_1[1] = -0x80;
    param_1[2] = (cVar3 != '\x01') + '\x01';
    param_1[3] = cVar3 != '\x01';
    if (0.0 < fVar13) {
      fVar12 = 1.0 / fVar13;
    }
    *(float *)(param_1 + 4) = fVar12;
    plVar1 = (longlong *)(param_1 + 0x10);
    *(float *)(param_1 + 8) = local_78;
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    uVar7 = 0x100;
    if (cVar3 == '\x01') {
      uVar7 = 0x80;
    }
    if (*(uint *)(param_1 + 0x1c) != uVar7) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
      iVar5 = *(int *)(param_1 + 0x18);
    }
    *(uint *)(param_1 + 0x18) = uVar7 + iVar5;
    if (*(int *)(param_1 + 0x1c) < (int)(uVar7 + iVar5)) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar5 * 4),0,(ulonglong)uVar7 << 2);
    param_1[0x20] = cVar4;
    uVar7 = uVar6;
    uVar8 = uVar6;
    do {
      (**(code **)(*param_2 + 0x290))(param_2,(float)uVar8 * fVar13 + local_78,local_70);
      puVar11 = local_70;
      uVar10 = uVar6;
      do {
        iVar5 = uVar7 + uVar10;
        uVar10 = uVar10 + 1;
        uVar2 = *(undefined4 *)puVar11;
        puVar11 = (undefined8 *)((longlong)puVar11 + 4);
        *(undefined4 *)(*plVar1 + (longlong)iVar5 * 4) = uVar2;
      } while (uVar10 < uVar9);
      uVar8 = uVar8 + 1;
      uVar7 = uVar7 + uVar9;
    } while (uVar8 < 0x80);
  }
  return;
}



// FUNCTION 1424006e0 FUN_1424006e0 body=705 status=ok
// SIG undefined FUN_1424006e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1424006e0(char *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_98 [32];
  float local_78;
  float local_74;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  iVar7 = 0;
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0x20] = '\0';
  cVar3 = (**(code **)(*param_2 + 0x2a8))(param_2);
  if (cVar3 == '\0') {
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    local_70 = 0;
    local_68 = 0;
    if (*(int *)(param_1 + 0x1c) != 3) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x10,3);
      iVar7 = *(int *)(param_1 + 0x18);
    }
    *(int *)(param_1 + 0x18) = iVar7 + 3;
    if (*(int *)(param_1 + 0x1c) < iVar7 + 3) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x10);
    }
    builtin_strncpy(param_1,"\x01\x01\x03",4);
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    **(undefined4 **)(param_1 + 0x10) = (undefined4)local_70;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 4) = local_70._4_4_;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = (undefined4)local_68;
  }
  else {
    (**(code **)(param_2[5] + 0x48))(param_2 + 5,&local_78,&local_74);
    fVar15 = (local_74 - local_78) * 0.007874016;
    cVar3 = (**(code **)(*param_2 + 0x280))(param_2);
    uVar8 = 6;
    if (cVar3 == '\x01') {
      uVar8 = 3;
    }
    cVar4 = (**(code **)(*param_2 + 0x288))(param_2);
    *param_1 = cVar3;
    fVar14 = 0.0;
    param_1[1] = -0x80;
    uVar13 = 3;
    if (cVar3 == '\x01') {
      uVar13 = 0;
    }
    param_1[2] = (char)uVar8;
    param_1[3] = (char)uVar13;
    if (0.0 < fVar15) {
      fVar14 = 1.0 / fVar15;
    }
    *(float *)(param_1 + 4) = fVar14;
    plVar1 = (longlong *)(param_1 + 0x10);
    *(float *)(param_1 + 8) = local_78;
    iVar7 = 0;
    uVar13 = uVar8 * 0x80;
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    if (*(uint *)(param_1 + 0x1c) != uVar13) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
      iVar7 = *(int *)(param_1 + 0x18);
    }
    *(uint *)(param_1 + 0x18) = uVar13 + iVar7;
    if (*(int *)(param_1 + 0x1c) < (int)(uVar13 + iVar7)) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar7 * 4),0,(ulonglong)uVar13 << 2);
    param_1[0x20] = cVar4;
    uVar13 = 0;
    iVar7 = 0;
    do {
      (**(code **)(*param_2 + 0x290))(param_2,(float)uVar13 * fVar15 + local_78);
      uVar9 = 0;
      if (cVar3 != '\x01') {
        uVar5 = (uVar8 - 4 >> 2) + 1;
        uVar12 = (ulonglong)uVar5;
        uVar9 = (ulonglong)(uVar5 * 4);
        puVar10 = (undefined4 *)((longlong)&local_70 + 4);
        iVar11 = iVar7;
        do {
          lVar6 = (longlong)iVar11;
          iVar11 = iVar11 + 4;
          *(undefined4 *)(*plVar1 + lVar6 * 4) = puVar10[-1];
          *(undefined4 *)(*plVar1 + 4 + lVar6 * 4) = *puVar10;
          *(undefined4 *)(*plVar1 + 8 + lVar6 * 4) = puVar10[1];
          *(undefined4 *)(*plVar1 + 0xc + lVar6 * 4) = puVar10[2];
          uVar12 = uVar12 - 1;
          puVar10 = puVar10 + 4;
        } while (uVar12 != 0);
      }
      if ((uint)uVar9 < uVar8) {
        puVar10 = (undefined4 *)((longlong)&local_70 + uVar9 * 4);
        do {
          iVar11 = (int)uVar9;
          uVar5 = iVar11 + 1;
          uVar9 = (ulonglong)uVar5;
          uVar2 = *puVar10;
          puVar10 = puVar10 + 1;
          *(undefined4 *)(*plVar1 + (longlong)(iVar7 + iVar11) * 4) = uVar2;
        } while (uVar5 < uVar8);
      }
      uVar13 = uVar13 + 1;
      iVar7 = iVar7 + uVar8;
    } while (uVar13 < 0x80);
  }
  return;
}



// FUNCTION 1424009b0 Emplace<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&> body=329 status=ok
// SIG undefined Emplace<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>(void)

uint * TSet<TWeakObjectPtr<UObject,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,0>,FDefaultSetAllocator>
       ::Emplace<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
                 (longlong *param_1,uint *param_2,uint *param_3,undefined1 *param_4)

{
  char cVar1;
  longlong *plVar2;
  uint uVar3;
  bool bVar4;
  uint local_res8;
  uint uStackX_c;
  undefined8 local_res10;
  uint local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<int,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar4 = false;
  *param_2 = local_38[0];
  *local_30 = *param_3;
  local_30[1] = param_3[1];
  local_30[2] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res8 = *local_30;
    uStackX_c = local_30[1];
    local_res10 = *(undefined8 *)local_30;
    TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::FindId(param_1,&local_res8);
    uVar3 = local_res8;
    bVar4 = local_res8 != 0xffffffff;
    if (bVar4) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)(int)local_res8 * 0x10 + *param_1),local_30,8);
      TSparseArray<TSetElement<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = uVar3;
      goto LAB_142400add;
    }
  }
  cVar1 = ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  if (cVar1 == '\0') {
    uVar3 = (local_30[1] ^ *local_30) & (int)param_1[9] - 1U;
    local_30[3] = uVar3;
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    local_30[2] = *(uint *)((longlong)plVar2 +
                           ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    *(uint *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar3) * 4) =
         *param_2;
  }
LAB_142400add:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar4;
  }
  return param_2;
}



// FUNCTION 142400b00 FUN_142400b00 body=569 status=ok
// SIG undefined FUN_142400b00(void)

uint * FUN_142400b00(longlong *param_1,uint *param_2,uint *param_3,undefined1 *param_4)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  uint *puVar8;
  bool bVar9;
  uint local_res8;
  uint uStackX_c;
  undefined8 local_res10;
  
  iVar5 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar6 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar6 + 1)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,uVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar6 = *(uint *)(param_1 + 6);
    iVar1 = *(int *)(*param_1 + 4 + (longlong)(int)uVar6 * 0x10);
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  plVar3 = (longlong *)param_1[4];
  *param_2 = uVar6;
  if (plVar3 == (longlong *)0x0) {
    plVar3 = param_1 + 2;
  }
  puVar8 = (uint *)((longlong)plVar3 +
                   (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar8 = *puVar8 | 1 << ((byte)uVar6 & 0x1f);
  puVar8 = (uint *)((longlong)(int)uVar6 * 0x10 + *param_1);
  *puVar8 = *param_3;
  bVar9 = false;
  puVar8[1] = param_3[1];
  puVar8[2] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res8 = *puVar8;
    uStackX_c = puVar8[1];
    local_res10 = *(undefined8 *)puVar8;
    TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::FindId(param_1,&local_res8,&local_res10);
    uVar6 = local_res8;
    bVar9 = local_res8 != 0xffffffff;
    if (bVar9) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)(int)local_res8 * 0x10 + *param_1),puVar8,8);
      TSparseArray<TSetElement<TLruCache<int,TSharedPtr<FImgMediaFrame,1>,DefaultKeyComparer<int>_>::FCacheEntry_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = uVar6;
      goto LAB_142400d18;
    }
  }
  uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar6) {
    uVar2 = (uVar6 >> 1) + 8;
    iVar5 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar4 = 0x20;
    cVar7 = '\0';
    if (uVar2 != 0) {
      iVar4 = 0x1f - iVar5;
    }
    uVar2 = (uVar6 >> 1) + 7;
    iVar5 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar2 != 0) {
      cVar7 = '\x1f' - (char)iVar5;
    }
    iVar5 = 1 << (~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x20U - cVar7 & 0x1f);
  }
  if (((int)uVar6 < 1) || (((int)param_1[9] != 0 && (iVar5 <= (int)param_1[9])))) {
    uVar6 = (puVar8[1] ^ *puVar8) & (int)param_1[9] - 1U;
    puVar8[3] = uVar6;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    puVar8[2] = *(uint *)((longlong)plVar3 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(uint *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar5;
    TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_142400d18:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 142400d40 FUN_142400d40 body=666 status=ok
// SIG undefined FUN_142400d40(void)

int * FUN_142400d40(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  void *_Dst;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  bool local_res8;
  undefined8 local_48;
  undefined8 local_40;
  
  uVar8 = 0xffffffff;
  iVar7 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar5 = *(int *)((longlong)iVar10 * 0x20 + 4 + *param_1);
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar5 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar3 = (longlong *)param_1[4];
  *param_2 = iVar10;
  local_48 = 0;
  if (plVar3 == (longlong *)0x0) {
    plVar3 = param_1 + 2;
  }
  local_40 = 0;
  puVar11 = (uint *)((longlong)plVar3 +
                    (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar11 = *puVar11 | 1 << ((byte)iVar10 & 0x1f);
  puVar11 = (uint *)((longlong)iVar10 * 0x20 + *param_1);
  *puVar11 = *(uint *)*param_3;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  TIndirectArray<FReplayExternalData,FDefaultAllocator>::
  ~TIndirectArray<FReplayExternalData,FDefaultAllocator>(&local_48);
  puVar11[6] = 0xffffffff;
  iVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (iVar10 != 1) {
    iVar6 = iVar7;
    if (iVar10 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar11) * 4);
      if (iVar5 != -1) {
        do {
          iVar6 = iVar5;
          if (*(uint *)((longlong)iVar5 * 0x20 + *param_1) == *puVar11) break;
          iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *param_1);
          iVar6 = iVar7;
        } while (iVar5 != -1);
      }
    }
    local_res8 = iVar6 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar6 * 0x20 + *param_1);
      TIndirectArray<FReplayExternalData,FDefaultAllocator>::
      ~TIndirectArray<FReplayExternalData,FDefaultAllocator>((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,puVar11,0x18);
      iVar7 = *param_2;
      bVar1 = (byte)iVar7 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar7;
      }
      puVar4 = (undefined4 *)((longlong)iVar7 * 0x20 + *param_1);
      *puVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar8 = (undefined4)param_1[6];
      }
      puVar4[1] = uVar8;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar7;
      plVar3 = (longlong *)param_1[4];
      *param_2 = iVar6;
      if (plVar3 == (longlong *)0x0) {
        plVar3 = param_1 + 2;
      }
      puVar11 = (uint *)((longlong)plVar3 +
                        (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar11 = *puVar11 & ~(1 << bVar1 | 1U >> 0x20 - bVar1);
      goto LAB_142400fb6;
    }
  }
  cVar2 = TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar10,0);
  if (cVar2 == '\0') {
    uVar9 = (int)param_1[9] - 1U & *puVar11;
    puVar11[7] = uVar9;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    puVar11[6] = *(uint *)((longlong)plVar3 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
LAB_142400fb6:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 142400fe0 Emplace<TKeyInitializer<FNetworkGUID_const_&>_> body=422 status=ok
// SIG undefined Emplace<TKeyInitializer<FNetworkGUID_const_&>_>(void)

int * TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FNetworkGUID_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_68 [2];
  uint *local_60;
  undefined8 local_48;
  
  TSparseArray<TSetElement<TTuple<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_68);
  puVar1 = (uint *)*param_3;
  bVar7 = false;
  *param_2 = local_68[0];
  *local_60 = *puVar1;
  local_60[2] = 0xffffffff;
  local_60[3] = 0;
  local_60[4] = 0;
  *(byte *)(local_60 + 0xc) = (byte)local_60[0xc] & 0xf0;
  local_60[6] = 0;
  local_60[7] = 0;
  local_60[8] = 0;
  local_60[10] = 0;
  local_60[0xb] = 0;
  local_60[0xe] = 0xffffffff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_48 = 0;
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_60) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)((longlong)iVar4 * 0x40 + *param_1) == *local_60) goto LAB_1424010bb;
          iVar4 = *(int *)((longlong)iVar4 * 0x40 + 0x38 + *param_1);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_1424010bb:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      ::_guard_xfg_dispatch_icall_nop((void *)((longlong)iVar4 * 0x40 + *param_1),local_60,0x38);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_68[0],1);
      *param_2 = iVar4;
      goto LAB_14240115c;
    }
  }
  cVar2 = ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)param_1[9] - 1U & *local_60;
    local_60[0xf] = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    local_60[0xe] =
         *(uint *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_14240115c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 142401190 FUN_142401190 body=510 status=ok
// SIG undefined FUN_142401190(void)

int * FUN_142401190(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *_Src;
  bool bVar9;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<184,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar7 * 0xb8 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0xb8 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar7 & 0x1f);
  _Src = (undefined8 *)((longlong)iVar7 * 0xb8 + *param_1);
  FUN_1423ffe10(param_3,_Src);
  *(undefined4 *)(_Src + 0x16) = 0xffffffff;
  bVar9 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    bVar9 = local_res8[0] != -1;
    if (bVar9) {
      plVar8 = (longlong *)((longlong)local_res8[0] * 0xb8 + *param_1);
      FUN_142405280(plVar8 + 2);
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar8,_Src,0xb0);
      TSparseArray<TSetElement<TTuple<FString,FConfigSection>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_14240136b;
    }
  }
  cVar3 = TSet<TTuple<FString,FConfigSection>,TDefaultMapHashableKeyFuncs<FString,FConfigSection,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar3 == '\0') {
    iVar7 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*_Src;
    }
    uVar5 = FUN_140438070(puVar6);
    uVar5 = (int)param_1[9] - 1U & uVar5;
    *(uint *)((longlong)_Src + 0xb4) = uVar5;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x16) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) = iVar7
    ;
  }
LAB_14240136b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 142401390 FUN_142401390 body=734 status=ok
// SIG undefined FUN_142401390(void)

uint * FUN_142401390(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 *_Src;
  void *_Dst;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  char cVar13;
  undefined4 uVar14;
  bool bVar15;
  uint local_res8 [2];
  
  iVar12 = 1;
  uVar14 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar10 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar10 + 1)) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,uVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar10 = *(uint *)(param_1 + 6);
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)(int)uVar10 * 0x28);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x28) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = uVar10;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 +
                   (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar10 & 0x1f);
  _Src = (undefined8 *)(*param_1 + (longlong)(int)uVar10 * 0x28);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined8 *)param_3[1];
  *_Src = 0;
  *_Src = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(_Src + 1) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)((longlong)_Src + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  _Src[2] = *puVar3;
  _Src[3] = puVar3[1];
  puVar3[1] = 0;
  *puVar3 = 0;
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar10 = local_res8[0];
    lVar11 = (longlong)(int)local_res8[0];
    bVar15 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar15);
    if (bVar15) {
      _Dst = (void *)(*param_1 + lVar11 * 0x28);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                (_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x20);
      uVar6 = *param_2;
      bVar4 = (byte)uVar6 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = uVar6;
      }
      lVar11 = *param_1;
      *(undefined4 *)(lVar11 + (longlong)(int)uVar6 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar14 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar11 + 4 + (longlong)(int)uVar6 * 0x28) = uVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar6;
      plVar7 = (longlong *)param_1[4];
      *param_2 = uVar10;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar7 +
                       (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_14240164a;
    }
  }
  uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar10) {
    uVar6 = (uVar10 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar13 = '\0';
    if (uVar6 != 0) {
      iVar8 = 0x1f - iVar12;
    }
    uVar6 = (uVar10 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar13 = '\x1f' - (char)iVar12;
    }
    iVar12 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar13 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar12 <= (int)param_1[9])))) {
    uVar10 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*_Src;
    }
    uVar6 = FUN_140438070(puVar9);
    uVar6 = (int)param_1[9] - 1U & uVar6;
    *(uint *)((longlong)_Src + 0x24) = uVar6;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(uint *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
         uVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14240164a:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 142401670 FUN_142401670 body=642 status=ok
// SIG undefined FUN_142401670(void)

uint * FUN_142401670(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  void *_Dst;
  uint uVar9;
  ulonglong *_Src;
  bool bVar10;
  uint local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar5 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar5 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar5 + 1)) {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1,uVar5);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar5 = *(uint *)(param_1 + 6);
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)((longlong)(int)uVar5 * 0x60 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar8 * 0x60 + *param_1) = 0xffffffff;
    }
  }
  plVar4 = (longlong *)param_1[4];
  *param_2 = uVar5;
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar4 +
                   (longlong)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar5 & 0x1f);
  _Src = (ulonglong *)((longlong)(int)uVar5 * 0x60 + *param_1);
  TPairInitializer<ULevel_*_&,TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>_&&>
  ::
  operator<ULevel_*,TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>_TTuple<ULevel_*,TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>
            (param_3,_Src);
  *(undefined4 *)(_Src + 0xb) = 0xffffffff;
  iVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (iVar8 != 1) {
    TSet<TTuple<ABasePlayerController_*,FKillsCounter>,TDefaultMapHashableKeyFuncs<ABasePlayerController_*,FKillsCounter,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,*_Src);
    uVar5 = local_res8[0];
    lVar7 = (longlong)(int)local_res8[0];
    bVar10 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar10);
    if (bVar10) {
      _Dst = (void *)(lVar7 * 0x60 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x58);
      TSparseArray<TSetElement<TTuple<unsigned___int64,TSet<IAkUserEventCallbackPackage_*,DefaultKeyFuncs<IAkUserEventCallbackPackage_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = uVar5;
      goto LAB_1424018bf;
    }
  }
  cVar2 = TSet<TTuple<UHoudiniAssetComponent_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<UHoudiniAssetComponent_*,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar8,0);
  if (cVar2 == '\0') {
    iVar8 = (int)(*_Src >> 4);
    uVar6 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
    uVar9 = -(uVar6 + iVar8) ^ uVar6 >> 0xd;
    uVar5 = (iVar8 - uVar6) - uVar9 ^ uVar9 >> 0xc;
    uVar6 = (uVar6 - uVar5) - uVar9 ^ uVar5 << 0x10;
    uVar9 = (uVar9 - uVar6) - uVar5 ^ uVar6 >> 5;
    uVar5 = (uVar5 - uVar6) - uVar9 ^ uVar9 >> 3;
    uVar6 = (uVar6 - uVar5) - uVar9 ^ uVar5 << 10;
    uVar5 = ((uVar9 - uVar6) - uVar5 ^ uVar6 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x5c) = uVar5;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0xb) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(uint *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_1424018bf:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 142401900 Emplace<TPairInitializer<FNetworkGUID_const_&,FNetGuidCacheObject_const_&>_> body=488 status=ok
// SIG undefined Emplace<TPairInitializer<FNetworkGUID_const_&,FNetGuidCacheObject_const_&>_>(void)

int * TSet<TTuple<FNetworkGUID,FNetGuidCacheObject>,TDefaultMapHashableKeyFuncs<FNetworkGUID,FNetGuidCacheObject,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FNetworkGUID_const_&,FNetGuidCacheObject_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  uint *puVar2;
  char cVar3;
  longlong *plVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  int local_38 [2];
  uint *local_30;
  
  TSparseArray<TSetElement<TTuple<FShaderCacheKey,TTuple<unsigned_int,TArray<unsigned_char,FDefaultAllocator>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar1 = (uint *)param_3[1];
  bVar9 = false;
  puVar2 = (uint *)*param_3;
  *param_2 = local_38[0];
  *local_30 = *puVar2;
  local_30[2] = *puVar1;
  local_30[3] = puVar1[1];
  local_30[4] = puVar1[2];
  *(undefined8 *)(local_30 + 6) = *(undefined8 *)(puVar1 + 4);
  local_30[8] = puVar1[6];
  *(undefined8 *)(local_30 + 10) = *(undefined8 *)(puVar1 + 8);
  *(byte *)(local_30 + 0xc) = (byte)local_30[0xc] ^ ((byte)local_30[0xc] ^ (byte)puVar1[10]) & 1;
  bVar5 = ((byte)local_30[0xc] ^ (byte)puVar1[10]) & 2 ^ (byte)local_30[0xc];
  *(byte *)(local_30 + 0xc) = bVar5;
  bVar5 = (bVar5 ^ (byte)puVar1[10]) & 4 ^ bVar5;
  *(byte *)(local_30 + 0xc) = bVar5;
  *(byte *)(local_30 + 0xc) = (bVar5 ^ (byte)puVar1[10]) & 8 ^ bVar5;
  local_30[0xe] = 0xffffffff;
  iVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar8 != 1) {
    if (iVar8 != 0) {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar4 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*local_30) * 4);
      if (iVar6 != -1) {
        do {
          if (*(uint *)((longlong)iVar6 * 0x40 + *param_1) == *local_30) goto LAB_142401a1e;
          iVar6 = *(int *)((longlong)iVar6 * 0x40 + 0x38 + *param_1);
        } while (iVar6 != -1);
      }
    }
    iVar6 = -1;
LAB_142401a1e:
    bVar9 = iVar6 != -1;
    if (bVar9) {
      ::_guard_xfg_dispatch_icall_nop((void *)((longlong)iVar6 * 0x40 + *param_1),local_30,0x38);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,FSocketSubsystemSteam::FSteamP2PConnectionInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar6;
      goto LAB_142401abf;
    }
  }
  cVar3 = ConditionalRehash(param_1,iVar8,0);
  if (cVar3 == '\0') {
    uVar7 = (int)param_1[9] - 1U & *local_30;
    local_30[0xf] = uVar7;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    local_30[0xe] =
         *(uint *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_142401abf:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 142401af0 HeapSortInternal<FDistanceFieldVolumeTexture_*,FIdentityFunctor,TDereferenceWrapper<FDistanceFieldVolumeTexture_*,FCompareVolumeAllocation>_> body=660 status=ok
// SIG undefined HeapSortInternal<FDistanceFieldVolumeTexture_*,FIdentityFunctor,TDereferenceWrapper<FDistanceFieldVolumeTexture_*,FCompareVolumeAllocation>_>(void)

void AlgoImpl::
     HeapSortInternal<FDistanceFieldVolumeTexture_*,FIdentityFunctor,TDereferenceWrapper<FDistanceFieldVolumeTexture_*,FCompareVolumeAllocation>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int local_7c;
  int local_70;
  int local_64;
  int local_58;
  int local_4c;
  int local_40;
  int local_34;
  int local_28;
  
  iVar7 = (param_2 + -2) / 2;
  if (-1 < iVar7) {
    iVar8 = iVar7 * 2 + 1;
    iVar6 = iVar8;
    iVar10 = iVar7;
joined_r0x000142401b36:
    do {
      if (iVar8 < param_2) {
        iVar8 = iVar7 * 2;
        iVar9 = iVar8 + 1;
        if (iVar8 + 2 < param_2) {
          uVar1 = *(undefined8 *)(*(longlong *)param_1[(longlong)iVar8 + 2] + 0x18);
          uVar2 = *(undefined8 *)(*(longlong *)param_1[iVar9] + 0x18);
          local_70 = (int)uVar1;
          local_58 = (int)uVar2;
          if ((int)((ulonglong)uVar2 >> 0x20) * *(int *)(*(longlong *)param_1[iVar9] + 0x20) *
              local_58 <
              (int)((ulonglong)uVar1 >> 0x20) *
              *(int *)(*(longlong *)param_1[(longlong)iVar8 + 2] + 0x20) * local_70) {
            iVar9 = iVar8;
          }
          iVar9 = iVar9 + 1;
        }
        plVar3 = (longlong *)param_1[iVar7];
        lVar11 = *(longlong *)param_1[iVar9];
        lVar4 = *plVar3;
        uVar1 = *(undefined8 *)(lVar4 + 0x18);
        uVar2 = *(undefined8 *)(lVar11 + 0x18);
        local_40 = (int)uVar1;
        local_28 = (int)uVar2;
        if ((int)((ulonglong)uVar2 >> 0x20) * local_28 * *(int *)(lVar11 + 0x20) <
            (int)((ulonglong)uVar1 >> 0x20) * *(int *)(lVar4 + 0x20) * local_40) {
          param_1[iVar7] = (longlong *)param_1[iVar9];
          iVar8 = iVar9 * 2 + 1;
          param_1[iVar9] = plVar3;
          iVar7 = iVar9;
          goto joined_r0x000142401b36;
        }
      }
      iVar8 = iVar6 + -2;
      iVar7 = iVar10 + -1;
      iVar6 = iVar8;
      iVar10 = iVar7;
    } while (-1 < iVar7);
  }
  param_2 = param_2 + -1;
  lVar11 = (longlong)param_2;
  if (0 < param_2) {
    do {
      iVar7 = 0;
      uVar1 = *param_1;
      *param_1 = param_1[lVar11];
      param_1[lVar11] = uVar1;
      if (1 < param_2) {
        do {
          iVar6 = iVar7 * 2;
          iVar8 = iVar6 + 1;
          if (iVar6 + 2 < param_2) {
            uVar1 = *(undefined8 *)(*(longlong *)param_1[(longlong)iVar6 + 2] + 0x18);
            uVar2 = *(undefined8 *)(*(longlong *)param_1[iVar8] + 0x18);
            local_34 = (int)uVar1;
            local_4c = (int)uVar2;
            if ((int)((ulonglong)uVar2 >> 0x20) * *(int *)(*(longlong *)param_1[iVar8] + 0x20) *
                local_4c <
                (int)((ulonglong)uVar1 >> 0x20) *
                *(int *)(*(longlong *)param_1[(longlong)iVar6 + 2] + 0x20) * local_34) {
              iVar8 = iVar6;
            }
            iVar8 = iVar8 + 1;
          }
          plVar3 = (longlong *)param_1[iVar7];
          lVar4 = *(longlong *)param_1[iVar8];
          lVar5 = *plVar3;
          uVar1 = *(undefined8 *)(lVar5 + 0x18);
          uVar2 = *(undefined8 *)(lVar4 + 0x18);
          local_64 = (int)uVar1;
          local_7c = (int)uVar2;
          if ((int)((ulonglong)uVar1 >> 0x20) * *(int *)(lVar5 + 0x20) * local_64 <=
              (int)((ulonglong)uVar2 >> 0x20) * *(int *)(lVar4 + 0x20) * local_7c) break;
          param_1[iVar7] = (longlong *)param_1[iVar8];
          param_1[iVar8] = plVar3;
          iVar7 = iVar8;
        } while (iVar8 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar11 = lVar11 + -1;
    } while (0 < lVar11);
  }
  return;
}



// FUNCTION 142401d90 HeapSortInternal<FActorPriority,FIdentityFunctor,TDereferenceWrapper<FActorPriority,FCompareFActorPriority>_> body=417 status=ok
// SIG undefined HeapSortInternal<FActorPriority,FIdentityFunctor,TDereferenceWrapper<FActorPriority,FCompareFActorPriority>_>(void)

void AlgoImpl::
     HeapSortInternal<FActorPriority,FIdentityFunctor,TDereferenceWrapper<FActorPriority,FCompareFActorPriority>_>
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
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  int *piVar13;
  
  iVar7 = (param_2 + -2) / 2;
  if (-1 < iVar7) {
    iVar8 = iVar7 * 2 + 1;
    iVar1 = iVar8;
    iVar11 = iVar7;
joined_r0x000142401dba:
    do {
      if (iVar8 < param_2) {
        iVar8 = iVar7 * 2;
        iVar10 = iVar8 + 1;
        if (iVar8 + 2 < param_2) {
          if (*(int *)(param_1 + (longlong)iVar10 * 4) <
              *(int *)(param_1 + ((longlong)iVar8 + 2) * 4)) {
            iVar10 = iVar8;
          }
          iVar10 = iVar10 + 1;
        }
        piVar13 = (int *)(param_1 + (longlong)iVar7 * 4);
        piVar9 = (int *)(param_1 + (longlong)iVar10 * 4);
        if (*piVar9 < *piVar13) {
          if (piVar13 != piVar9) {
            uVar2 = *(undefined8 *)(piVar9 + 2);
            uVar3 = *(undefined8 *)piVar13;
            uVar4 = *(undefined8 *)(piVar13 + 2);
            uVar5 = *(undefined8 *)(piVar13 + 4);
            uVar6 = *(undefined8 *)(piVar13 + 6);
            *(undefined8 *)piVar13 = *(undefined8 *)piVar9;
            *(undefined8 *)(piVar13 + 2) = uVar2;
            uVar2 = *(undefined8 *)(piVar9 + 6);
            *(undefined8 *)(piVar13 + 4) = *(undefined8 *)(piVar9 + 4);
            *(undefined8 *)(piVar13 + 6) = uVar2;
            *(undefined8 *)piVar9 = uVar3;
            *(undefined8 *)(piVar9 + 2) = uVar4;
            *(undefined8 *)(piVar9 + 4) = uVar5;
            *(undefined8 *)(piVar9 + 6) = uVar6;
          }
          iVar8 = iVar10 * 2 + 1;
          iVar7 = iVar10;
          goto joined_r0x000142401dba;
        }
      }
      iVar8 = iVar1 + -2;
      iVar7 = iVar11 + -1;
      iVar1 = iVar8;
      iVar11 = iVar7;
    } while (-1 < iVar7);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar12 = param_1 + (longlong)param_2 * 4;
    do {
      if (param_1 != puVar12) {
        uVar2 = puVar12[1];
        uVar3 = *param_1;
        uVar4 = param_1[1];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        *param_1 = *puVar12;
        param_1[1] = uVar2;
        uVar2 = puVar12[3];
        param_1[2] = puVar12[2];
        param_1[3] = uVar2;
        *puVar12 = uVar3;
        puVar12[1] = uVar4;
        puVar12[2] = uVar5;
        puVar12[3] = uVar6;
      }
      iVar7 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar7 * 2;
          iVar8 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            if (*(int *)(param_1 + (longlong)iVar8 * 4) <
                *(int *)(param_1 + ((longlong)iVar1 + 2) * 4)) {
              iVar8 = iVar1;
            }
            iVar8 = iVar8 + 1;
          }
          piVar13 = (int *)(param_1 + (longlong)iVar7 * 4);
          piVar9 = (int *)(param_1 + (longlong)iVar8 * 4);
          if (*piVar13 <= *piVar9) break;
          if (piVar13 != piVar9) {
            uVar2 = *(undefined8 *)(piVar9 + 2);
            uVar3 = *(undefined8 *)piVar13;
            uVar4 = *(undefined8 *)(piVar13 + 2);
            uVar5 = *(undefined8 *)(piVar13 + 4);
            uVar6 = *(undefined8 *)(piVar13 + 6);
            *(undefined8 *)piVar13 = *(undefined8 *)piVar9;
            *(undefined8 *)(piVar13 + 2) = uVar2;
            uVar2 = *(undefined8 *)(piVar9 + 6);
            *(undefined8 *)(piVar13 + 4) = *(undefined8 *)(piVar9 + 4);
            *(undefined8 *)(piVar13 + 6) = uVar2;
            *(undefined8 *)piVar9 = uVar3;
            *(undefined8 *)(piVar9 + 2) = uVar4;
            *(undefined8 *)(piVar9 + 4) = uVar5;
            *(undefined8 *)(piVar9 + 6) = uVar6;
          }
          iVar7 = iVar8;
        } while (iVar8 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar12 = puVar12 + -4;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142401f40 HeapSortInternal<FGuid,FIdentityFunctor,TDereferenceWrapper<FGuid,<lambda_f34bf2750abe2b63b4e62b5d67307e3c>_>_> body=471 status=ok
// SIG undefined HeapSortInternal<FGuid,FIdentityFunctor,TDereferenceWrapper<FGuid,<lambda_f34bf2750abe2b63b4e62b5d67307e3c>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FGuid,FIdentityFunctor,TDereferenceWrapper<FGuid,<lambda_f34bf2750abe2b63b4e62b5d67307e3c>_>_>
               (undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  
  iVar7 = (param_2 + -2) / 2;
  if (-1 < iVar7) {
    iVar8 = iVar7 * 2 + 1;
    iVar10 = iVar8;
    iVar13 = iVar7;
joined_r0x000142401f86:
    do {
      if (iVar8 < param_2) {
        iVar8 = iVar7 * 2;
        iVar9 = iVar8 + 1;
        if (iVar8 + 2 < param_2) {
          cVar6 = <lambda_f34bf2750abe2b63b4e62b5d67307e3c>::operator()
                            (param_4,param_1 + (longlong)(iVar8 + 2) * 2,
                             param_1 + (longlong)iVar9 * 2);
          if (cVar6 != '\0') {
            iVar9 = iVar8;
          }
          iVar9 = iVar9 + 1;
        }
        puVar11 = param_1 + (longlong)iVar9 * 2;
        puVar14 = param_1 + (longlong)iVar7 * 2;
        cVar6 = <lambda_f34bf2750abe2b63b4e62b5d67307e3c>::operator()(param_4,puVar14,puVar11);
        if (cVar6 != '\0') {
          if (puVar14 != puVar11) {
            uVar1 = *(undefined4 *)((longlong)puVar11 + 4);
            uVar2 = *(undefined4 *)(puVar11 + 1);
            uVar3 = *(undefined4 *)((longlong)puVar11 + 0xc);
            uVar4 = *puVar14;
            uVar5 = puVar14[1];
            *(undefined4 *)puVar14 = *(undefined4 *)puVar11;
            *(undefined4 *)((longlong)puVar14 + 4) = uVar1;
            *(undefined4 *)(puVar14 + 1) = uVar2;
            *(undefined4 *)((longlong)puVar14 + 0xc) = uVar3;
            *puVar11 = uVar4;
            puVar11[1] = uVar5;
          }
          iVar8 = iVar9 * 2 + 1;
          iVar7 = iVar9;
          goto joined_r0x000142401f86;
        }
      }
      iVar8 = iVar10 + -2;
      iVar7 = iVar13 + -1;
      iVar10 = iVar8;
      iVar13 = iVar7;
    } while (-1 < iVar7);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar14 = param_1 + (longlong)param_2 * 2;
    do {
      if (param_1 != puVar14) {
        uVar1 = *(undefined4 *)((longlong)puVar14 + 4);
        uVar2 = *(undefined4 *)(puVar14 + 1);
        uVar3 = *(undefined4 *)((longlong)puVar14 + 0xc);
        uVar4 = *param_1;
        uVar5 = param_1[1];
        *(undefined4 *)param_1 = *(undefined4 *)puVar14;
        *(undefined4 *)((longlong)param_1 + 4) = uVar1;
        *(undefined4 *)(param_1 + 1) = uVar2;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
        *puVar14 = uVar4;
        puVar14[1] = uVar5;
      }
      iVar7 = 0;
      if (1 < param_2) {
        do {
          iVar8 = iVar7 * 2;
          iVar10 = iVar8 + 1;
          if (iVar8 + 2 < param_2) {
            cVar6 = <lambda_f34bf2750abe2b63b4e62b5d67307e3c>::operator()
                              (param_4,param_1 + (longlong)(iVar8 + 2) * 2,
                               param_1 + (longlong)iVar10 * 2);
            if (cVar6 != '\0') {
              iVar10 = iVar8;
            }
            iVar10 = iVar10 + 1;
          }
          puVar12 = param_1 + (longlong)iVar10 * 2;
          puVar11 = param_1 + (longlong)iVar7 * 2;
          cVar6 = <lambda_f34bf2750abe2b63b4e62b5d67307e3c>::operator()(param_4,puVar11,puVar12);
          if (cVar6 == '\0') break;
          if (puVar11 != puVar12) {
            uVar1 = *(undefined4 *)((longlong)puVar12 + 4);
            uVar2 = *(undefined4 *)(puVar12 + 1);
            uVar3 = *(undefined4 *)((longlong)puVar12 + 0xc);
            uVar4 = *puVar11;
            uVar5 = puVar11[1];
            *(undefined4 *)puVar11 = *(undefined4 *)puVar12;
            *(undefined4 *)((longlong)puVar11 + 4) = uVar1;
            *(undefined4 *)(puVar11 + 1) = uVar2;
            *(undefined4 *)((longlong)puVar11 + 0xc) = uVar3;
            *puVar12 = uVar4;
            puVar12[1] = uVar5;
          }
          iVar7 = iVar10;
        } while (iVar10 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar14 = puVar14 + -2;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142402120 HeapSortInternal<FMeshDistanceFieldStats,FIdentityFunctor,TDereferenceWrapper<FMeshDistanceFieldStats,`FDistanceFieldVolumeTextureAtlas::ListMeshDistanceFields'::`2'::FMeshDistanceFieldStatsSorter>_> body=449 status=ok
// SIG undefined HeapSortInternal<FMeshDistanceFieldStats,FIdentityFunctor,TDereferenceWrapper<FMeshDistanceFieldStats,`FDistanceFieldVolumeTextureAtlas::ListMeshDistanceFields'::`2'::FMeshDistanceFieldStatsSorter>_>(void)

void AlgoImpl::
     HeapSortInternal<FMeshDistanceFieldStats,FIdentityFunctor,TDereferenceWrapper<FMeshDistanceFieldStats,_FDistanceFieldVolumeTextureAtlas::ListMeshDistanceFields_::_2_::FMeshDistanceFieldStatsSorter>_>
               (undefined8 *param_1,int param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  
  iVar12 = (param_2 + -2) / 2;
  if (-1 < iVar12) {
    iVar13 = iVar12 * 2 + 1;
    iVar5 = iVar13;
    iVar15 = iVar12;
joined_r0x00014240214a:
    do {
      if (iVar13 < param_2) {
        iVar13 = iVar12 * 2;
        iVar14 = iVar13 + 1;
        if (iVar13 + 2 < param_2) {
          if ((ulonglong)param_1[(longlong)iVar14 * 3] <
              (ulonglong)param_1[((longlong)iVar13 + 2) * 3]) {
            iVar14 = iVar13;
          }
          iVar14 = iVar14 + 1;
        }
        puVar1 = param_1 + (longlong)iVar14 * 3;
        puVar2 = param_1 + (longlong)iVar12 * 3;
        if (*puVar1 < (ulonglong)param_1[(longlong)iVar12 * 3]) {
          if (puVar2 != puVar1) {
            uVar6 = puVar1[1];
            uVar7 = *puVar2;
            uVar8 = puVar2[1];
            uVar3 = puVar2[2];
            *puVar2 = *puVar1;
            puVar2[1] = uVar6;
            puVar2[2] = puVar1[2];
            *puVar1 = uVar7;
            puVar1[1] = uVar8;
            puVar1[2] = uVar3;
          }
          iVar13 = iVar14 * 2 + 1;
          iVar12 = iVar14;
          goto joined_r0x00014240214a;
        }
      }
      iVar13 = iVar5 + -2;
      iVar12 = iVar15 + -1;
      iVar5 = iVar13;
      iVar15 = iVar12;
    } while (-1 < iVar12);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar16 = param_1 + (longlong)param_2 * 3;
    do {
      if (param_1 != puVar16) {
        uVar9 = puVar16[1];
        uVar10 = *param_1;
        uVar11 = param_1[1];
        uVar4 = param_1[2];
        *param_1 = *puVar16;
        param_1[1] = uVar9;
        param_1[2] = puVar16[2];
        *puVar16 = uVar10;
        puVar16[1] = uVar11;
        puVar16[2] = uVar4;
      }
      iVar12 = 0;
      if (1 < param_2) {
        do {
          iVar5 = iVar12 * 2;
          iVar13 = iVar5 + 1;
          if (iVar5 + 2 < param_2) {
            if ((ulonglong)param_1[(longlong)iVar13 * 3] <
                (ulonglong)param_1[((longlong)iVar5 + 2) * 3]) {
              iVar13 = iVar5;
            }
            iVar13 = iVar13 + 1;
          }
          puVar1 = param_1 + (longlong)iVar13 * 3;
          puVar2 = param_1 + (longlong)iVar12 * 3;
          if ((ulonglong)param_1[(longlong)iVar12 * 3] <= *puVar1) break;
          if (puVar2 != puVar1) {
            uVar6 = puVar1[1];
            uVar7 = *puVar2;
            uVar8 = puVar2[1];
            uVar3 = puVar2[2];
            *puVar2 = *puVar1;
            puVar2[1] = uVar6;
            puVar2[2] = puVar1[2];
            *puVar1 = uVar7;
            puVar1[1] = uVar8;
            puVar1[2] = uVar3;
          }
          iVar12 = iVar13;
        } while (iVar13 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar16 = puVar16 + -3;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1424022f0 HeapSortInternal<FTextureLODGroup,FIdentityFunctor,TDereferenceWrapper<FTextureLODGroup,<lambda_ca7c2040311208138d81214d43c595ab>_>_> body=651 status=ok
// SIG undefined HeapSortInternal<FTextureLODGroup,FIdentityFunctor,TDereferenceWrapper<FTextureLODGroup,<lambda_ca7c2040311208138d81214d43c595ab>_>_>(void)

void AlgoImpl::
     HeapSortInternal<FTextureLODGroup,FIdentityFunctor,TDereferenceWrapper<FTextureLODGroup,<lambda_ca7c2040311208138d81214d43c595ab>_>_>
               (undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  byte *pbVar15;
  int iVar16;
  undefined8 *puVar17;
  int iVar18;
  byte *pbVar19;
  
  iVar13 = (param_2 + -2) / 2;
  if (-1 < iVar13) {
    iVar14 = iVar13 * 2 + 1;
    iVar1 = iVar14;
    iVar16 = iVar13;
joined_r0x000142402325:
    do {
      if (iVar14 < param_2) {
        iVar14 = iVar13 * 2;
        iVar18 = iVar14 + 1;
        if (iVar14 + 2 < param_2) {
          if (*(byte *)(param_1 + ((longlong)iVar14 + 2) * 10) <
              *(byte *)(param_1 + (longlong)iVar18 * 10)) {
            iVar18 = iVar14;
          }
          iVar18 = iVar18 + 1;
        }
        pbVar15 = (byte *)(param_1 + (longlong)iVar18 * 10);
        pbVar19 = (byte *)(param_1 + (longlong)iVar13 * 10);
        if (*pbVar19 < *pbVar15) {
          if (pbVar19 != pbVar15) {
            uVar2 = *(undefined8 *)(pbVar15 + 8);
            uVar3 = *(undefined8 *)pbVar19;
            uVar4 = *(undefined8 *)(pbVar19 + 8);
            uVar5 = *(undefined8 *)(pbVar19 + 0x10);
            uVar6 = *(undefined8 *)(pbVar19 + 0x18);
            uVar7 = *(undefined8 *)(pbVar19 + 0x20);
            uVar8 = *(undefined8 *)(pbVar19 + 0x28);
            uVar9 = *(undefined8 *)(pbVar19 + 0x30);
            uVar10 = *(undefined8 *)(pbVar19 + 0x38);
            uVar11 = *(undefined8 *)(pbVar19 + 0x40);
            uVar12 = *(undefined8 *)(pbVar19 + 0x48);
            *(undefined8 *)pbVar19 = *(undefined8 *)pbVar15;
            *(undefined8 *)(pbVar19 + 8) = uVar2;
            uVar2 = *(undefined8 *)(pbVar15 + 0x18);
            *(undefined8 *)(pbVar19 + 0x10) = *(undefined8 *)(pbVar15 + 0x10);
            *(undefined8 *)(pbVar19 + 0x18) = uVar2;
            uVar2 = *(undefined8 *)(pbVar15 + 0x28);
            *(undefined8 *)(pbVar19 + 0x20) = *(undefined8 *)(pbVar15 + 0x20);
            *(undefined8 *)(pbVar19 + 0x28) = uVar2;
            uVar2 = *(undefined8 *)(pbVar15 + 0x38);
            *(undefined8 *)(pbVar19 + 0x30) = *(undefined8 *)(pbVar15 + 0x30);
            *(undefined8 *)(pbVar19 + 0x38) = uVar2;
            uVar2 = *(undefined8 *)(pbVar15 + 0x48);
            *(undefined8 *)(pbVar19 + 0x40) = *(undefined8 *)(pbVar15 + 0x40);
            *(undefined8 *)(pbVar19 + 0x48) = uVar2;
            *(undefined8 *)pbVar15 = uVar3;
            *(undefined8 *)(pbVar15 + 8) = uVar4;
            *(undefined8 *)(pbVar15 + 0x10) = uVar5;
            *(undefined8 *)(pbVar15 + 0x18) = uVar6;
            *(undefined8 *)(pbVar15 + 0x20) = uVar7;
            *(undefined8 *)(pbVar15 + 0x28) = uVar8;
            *(undefined8 *)(pbVar15 + 0x30) = uVar9;
            *(undefined8 *)(pbVar15 + 0x38) = uVar10;
            *(undefined8 *)(pbVar15 + 0x40) = uVar11;
            *(undefined8 *)(pbVar15 + 0x48) = uVar12;
          }
          iVar14 = iVar18 * 2 + 1;
          iVar13 = iVar18;
          goto joined_r0x000142402325;
        }
      }
      iVar14 = iVar1 + -2;
      iVar13 = iVar16 + -1;
      iVar1 = iVar14;
      iVar16 = iVar13;
    } while (-1 < iVar13);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar17 = param_1 + (longlong)param_2 * 10;
    do {
      if (param_1 != puVar17) {
        uVar2 = puVar17[1];
        uVar3 = *param_1;
        uVar4 = param_1[1];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        uVar7 = param_1[4];
        uVar8 = param_1[5];
        uVar9 = param_1[6];
        uVar10 = param_1[7];
        uVar11 = param_1[8];
        uVar12 = param_1[9];
        *param_1 = *puVar17;
        param_1[1] = uVar2;
        uVar2 = puVar17[3];
        param_1[2] = puVar17[2];
        param_1[3] = uVar2;
        uVar2 = puVar17[5];
        param_1[4] = puVar17[4];
        param_1[5] = uVar2;
        uVar2 = puVar17[7];
        param_1[6] = puVar17[6];
        param_1[7] = uVar2;
        uVar2 = puVar17[9];
        param_1[8] = puVar17[8];
        param_1[9] = uVar2;
        *puVar17 = uVar3;
        puVar17[1] = uVar4;
        puVar17[2] = uVar5;
        puVar17[3] = uVar6;
        puVar17[4] = uVar7;
        puVar17[5] = uVar8;
        puVar17[6] = uVar9;
        puVar17[7] = uVar10;
        puVar17[8] = uVar11;
        puVar17[9] = uVar12;
      }
      iVar13 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar13 * 2;
          iVar14 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            if (*(byte *)(param_1 + ((longlong)iVar1 + 2) * 10) <
                *(byte *)(param_1 + (longlong)iVar14 * 10)) {
              iVar14 = iVar1;
            }
            iVar14 = iVar14 + 1;
          }
          pbVar15 = (byte *)(param_1 + (longlong)iVar14 * 10);
          pbVar19 = (byte *)(param_1 + (longlong)iVar13 * 10);
          if (*pbVar15 <= *pbVar19) break;
          if (pbVar19 != pbVar15) {
            uVar2 = *(undefined8 *)(pbVar15 + 8);
            uVar3 = *(undefined8 *)pbVar19;
            uVar4 = *(undefined8 *)(pbVar19 + 8);
            uVar5 = *(undefined8 *)(pbVar19 + 0x10);
            uVar6 = *(undefined8 *)(pbVar19 + 0x18);
            uVar7 = *(undefined8 *)(pbVar19 + 0x20);
            uVar8 = *(undefined8 *)(pbVar19 + 0x28);
            uVar9 = *(undefined8 *)(pbVar19 + 0x30);
            uVar10 = *(undefined8 *)(pbVar19 + 0x38);
            uVar11 = *(undefined8 *)(pbVar19 + 0x40);
            uVar12 = *(undefined8 *)(pbVar19 + 0x48);
            *(undefined8 *)pbVar19 = *(undefined8 *)pbVar15;
            *(undefined8 *)(pbVar19 + 8) = uVar2;
            uVar2 = *(undefined8 *)(pbVar15 + 0x18);
            *(undefined8 *)(pbVar19 + 0x10) = *(undefined8 *)(pbVar15 + 0x10);
            *(undefined8 *)(pbVar19 + 0x18) = uVar2;
            uVar2 = *(undefined8 *)(pbVar15 + 0x28);
            *(undefined8 *)(pbVar19 + 0x20) = *(undefined8 *)(pbVar15 + 0x20);
            *(undefined8 *)(pbVar19 + 0x28) = uVar2;
            uVar2 = *(undefined8 *)(pbVar15 + 0x38);
            *(undefined8 *)(pbVar19 + 0x30) = *(undefined8 *)(pbVar15 + 0x30);
            *(undefined8 *)(pbVar19 + 0x38) = uVar2;
            uVar2 = *(undefined8 *)(pbVar15 + 0x48);
            *(undefined8 *)(pbVar19 + 0x40) = *(undefined8 *)(pbVar15 + 0x40);
            *(undefined8 *)(pbVar19 + 0x48) = uVar2;
            *(undefined8 *)pbVar15 = uVar3;
            *(undefined8 *)(pbVar15 + 8) = uVar4;
            *(undefined8 *)(pbVar15 + 0x10) = uVar5;
            *(undefined8 *)(pbVar15 + 0x18) = uVar6;
            *(undefined8 *)(pbVar15 + 0x20) = uVar7;
            *(undefined8 *)(pbVar15 + 0x28) = uVar8;
            *(undefined8 *)(pbVar15 + 0x30) = uVar9;
            *(undefined8 *)(pbVar15 + 0x38) = uVar10;
            *(undefined8 *)(pbVar15 + 0x40) = uVar11;
            *(undefined8 *)(pbVar15 + 0x48) = uVar12;
          }
          iVar13 = iVar14;
        } while (iVar14 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar17 = puVar17 + -10;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142402580 IntroSortInternal<FDistanceFieldVolumeTexture_*,FIdentityFunctor,TDereferenceWrapper<FDistanceFieldVolumeTexture_*,FCompareVolumeAllocation>_> body=847 status=ok
// SIG undefined IntroSortInternal<FDistanceFieldVolumeTexture_*,FIdentityFunctor,TDereferenceWrapper<FDistanceFieldVolumeTexture_*,FCompareVolumeAllocation>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FDistanceFieldVolumeTexture_*,FIdentityFunctor,TDereferenceWrapper<FDistanceFieldVolumeTexture_*,FCompareVolumeAllocation>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  float fVar15;
  undefined1 auStack_428 [44];
  undefined8 local_3fc;
  undefined8 local_3f0;
  undefined8 local_3e4;
  undefined8 local_3d8;
  undefined8 local_3cc;
  undefined8 local_3c0;
  undefined8 local_3b4;
  undefined8 local_3a8;
  undefined8 local_39c;
  undefined8 local_390;
  undefined8 local_384;
  undefined8 local_378;
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_428;
    lStack_340 = param_1 + (param_2 - 1) * 8;
    fVar15 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar15 = fVar15 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar15 = ::_guard_xfg_dispatch_icall_nop(fVar15);
    local_338 = (undefined4)(longlong)(fVar15 + fVar15);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar14 = &local_348;
    do {
      puVar11 = (undefined8 *)*plVar14;
      puVar4 = (undefined8 *)plVar14[1];
      lVar1 = plVar14[2];
      local_358._0_4_ = (int)lVar1;
      lVar7 = (longlong)puVar4 - (longlong)puVar11;
      puVar12 = puVar11;
      puVar13 = puVar4;
      if ((int)local_358 != 0) {
LAB_142402650:
        lVar8 = (lVar7 >> 3) + 1;
        if (8 < lVar8) {
          if (lVar8 < 0) {
            lVar8 = (lVar7 >> 3) + 2;
          }
          puVar9 = puVar13 + 1;
          uVar2 = puVar12[lVar8 >> 1];
          puVar12[lVar8 >> 1] = *puVar12;
          *puVar12 = uVar2;
          puVar11 = puVar12;
LAB_142402680:
          puVar11 = puVar11 + 1;
          if (puVar11 <= puVar13) goto code_r0x000142402689;
          goto LAB_1424026e3;
        }
        for (; puVar4 = puVar12, puVar11 = puVar12, puVar12 < puVar13; puVar13 = puVar13 + -1) {
          while (puVar9 = puVar4, puVar11 = puVar11 + 1, puVar11 <= puVar13) {
            local_39c = *(undefined8 *)(*(longlong *)*puVar9 + 0x18);
            local_384 = *(undefined8 *)(*(longlong *)*puVar11 + 0x18);
            local_390._0_4_ = (int)local_39c;
            iVar6 = (int)((ulonglong)local_39c >> 0x20) * *(int *)(*(longlong *)*puVar9 + 0x20) *
                    (int)local_390;
            local_378._0_4_ = (int)local_384;
            iVar5 = (int)((ulonglong)local_384 >> 0x20) * *(int *)(*(longlong *)*puVar11 + 0x20) *
                    (int)local_378;
            puVar4 = puVar11;
            local_390 = local_39c;
            local_378 = local_384;
            if (iVar6 <= iVar5) {
              puVar4 = puVar9;
            }
          }
          uVar2 = *puVar9;
          *puVar9 = *puVar13;
          *puVar13 = uVar2;
        }
        goto LAB_1424027ed;
      }
LAB_1424027de:
      local_358 = lVar1;
      HeapSortInternal<FDistanceFieldVolumeTexture_*,FIdentityFunctor,TDereferenceWrapper<FDistanceFieldVolumeTexture_*,FCompareVolumeAllocation>_>
                (puVar11,puVar4,param_3,param_4);
LAB_1424027ed:
      plVar14 = plVar14 + -3;
    } while (&local_348 <= plVar14);
  }
  return;
code_r0x000142402689:
  local_3fc = *(undefined8 *)(*(longlong *)*puVar12 + 0x18);
  local_3e4 = *(undefined8 *)(*(longlong *)*puVar11 + 0x18);
  local_3f0._0_4_ = (int)local_3fc;
  iVar6 = (int)((ulonglong)local_3fc >> 0x20) * *(int *)(*(longlong *)*puVar12 + 0x20) *
          (int)local_3f0;
  local_3d8._0_4_ = (int)local_3e4;
  iVar5 = (int)((ulonglong)local_3e4 >> 0x20) * *(int *)(*(longlong *)*puVar11 + 0x20) *
          (int)local_3d8;
  local_3f0 = local_3fc;
  local_3d8 = local_3e4;
  if (iVar6 <= iVar5) goto LAB_142402680;
LAB_1424026e3:
  do {
    puVar10 = puVar9;
    plVar3 = (longlong *)puVar10[-1];
    puVar9 = puVar10 + -1;
    if (puVar9 <= puVar12) break;
    local_3cc = *(undefined8 *)(*plVar3 + 0x18);
    local_3b4 = *(undefined8 *)(*(longlong *)*puVar12 + 0x18);
    local_3c0._0_4_ = (int)local_3cc;
    iVar6 = (int)((ulonglong)local_3cc >> 0x20) * *(int *)(*plVar3 + 0x20) * (int)local_3c0;
    local_3a8._0_4_ = (int)local_3b4;
    iVar5 = (int)((ulonglong)local_3b4 >> 0x20) * *(int *)(*(longlong *)*puVar12 + 0x20) *
            (int)local_3a8;
    local_3c0 = local_3cc;
    local_3a8 = local_3b4;
  } while (iVar6 <= iVar5);
  if (puVar11 <= puVar9) {
    uVar2 = *puVar11;
    *puVar11 = plVar3;
    *puVar9 = uVar2;
    goto LAB_142402680;
  }
  uVar2 = *puVar12;
  *puVar12 = plVar3;
  *puVar9 = uVar2;
  local_358._0_4_ = (int)local_358 + -1;
  if ((longlong)((longlong)puVar9 + (-8 - (longlong)puVar12) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar13 - (longlong)puVar11 & 0xfffffffffffffff8U)) {
    if (puVar11 < puVar13) {
      *plVar14 = (longlong)puVar11;
      plVar14[1] = (longlong)puVar13;
      *(int *)(plVar14 + 2) = (int)local_358;
      plVar14 = plVar14 + 3;
    }
    if (puVar9 <= puVar12 + 1) goto LAB_1424027ed;
    puVar13 = puVar10 + -2;
    puVar11 = puVar12;
  }
  else {
    if (puVar12 + 1 < puVar9) {
      *plVar14 = (longlong)puVar12;
      plVar14[1] = (longlong)(puVar10 + -2);
      *(int *)(plVar14 + 2) = (int)local_358;
      plVar14 = plVar14 + 3;
    }
    if (puVar13 <= puVar11) goto LAB_1424027ed;
  }
  lVar7 = (longlong)puVar13 - (longlong)puVar11;
  puVar12 = puVar11;
  if ((int)local_358 == 0) goto LAB_1424027de;
  goto LAB_142402650;
}



// FUNCTION 1424028d0 IntroSortInternal<FActorPriority,FIdentityFunctor,TDereferenceWrapper<FActorPriority,FCompareFActorPriority>_> body=703 status=ok
// SIG undefined IntroSortInternal<FActorPriority,FIdentityFunctor,TDereferenceWrapper<FActorPriority,FCompareFActorPriority>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FActorPriority,FIdentityFunctor,TDereferenceWrapper<FActorPriority,FCompareFActorPriority>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  int *piVar15;
  longlong *plVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
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
      piVar21 = (int *)*plVar16;
      piVar19 = (int *)plVar16[1];
      lVar1 = plVar16[2];
      local_338._0_4_ = (int)lVar1;
      lVar14 = ((longlong)piVar19 - (longlong)piVar21 >> 5) + 1;
      piVar20 = piVar21;
      if ((int)local_338 != 0) {
LAB_1424029a0:
        if (8 < lVar14) {
          piVar21 = piVar20 + (lVar14 / 2) * 8;
          if (piVar21 != piVar20) {
            iVar2 = piVar20[1];
            iVar3 = piVar20[2];
            iVar4 = piVar20[3];
            iVar5 = *piVar21;
            iVar6 = piVar21[1];
            iVar7 = piVar21[2];
            iVar8 = piVar21[3];
            uVar10 = *(undefined8 *)(piVar21 + 4);
            uVar11 = *(undefined8 *)(piVar21 + 6);
            *piVar21 = *piVar20;
            piVar21[1] = iVar2;
            piVar21[2] = iVar3;
            piVar21[3] = iVar4;
            uVar9 = *(undefined8 *)(piVar20 + 6);
            *(undefined8 *)(piVar21 + 4) = *(undefined8 *)(piVar20 + 4);
            *(undefined8 *)(piVar21 + 6) = uVar9;
            *piVar20 = iVar5;
            piVar20[1] = iVar6;
            piVar20[2] = iVar7;
            piVar20[3] = iVar8;
            *(undefined8 *)(piVar20 + 4) = uVar10;
            *(undefined8 *)(piVar20 + 6) = uVar11;
          }
          piVar17 = piVar19 + 8;
          piVar21 = piVar20;
LAB_1424029f0:
          piVar15 = piVar21;
          piVar21 = piVar15 + 8;
          if (piVar21 <= piVar19) goto code_r0x0001424029f9;
          goto LAB_142402a00;
        }
        for (; piVar17 = piVar20, piVar21 = piVar20, piVar20 < piVar19; piVar19 = piVar19 + -8) {
          while (piVar15 = piVar17, piVar21 = piVar21 + 8, piVar21 <= piVar19) {
            piVar17 = piVar21;
            if (*piVar15 <= *piVar21) {
              piVar17 = piVar15;
            }
          }
          if (piVar15 != piVar19) {
            uVar9 = *(undefined8 *)(piVar19 + 2);
            uVar10 = *(undefined8 *)piVar15;
            uVar11 = *(undefined8 *)(piVar15 + 2);
            uVar12 = *(undefined8 *)(piVar15 + 4);
            uVar13 = *(undefined8 *)(piVar15 + 6);
            *(undefined8 *)piVar15 = *(undefined8 *)piVar19;
            *(undefined8 *)(piVar15 + 2) = uVar9;
            uVar9 = *(undefined8 *)(piVar19 + 6);
            *(undefined8 *)(piVar15 + 4) = *(undefined8 *)(piVar19 + 4);
            *(undefined8 *)(piVar15 + 6) = uVar9;
            *(undefined8 *)piVar19 = uVar10;
            *(undefined8 *)(piVar19 + 2) = uVar11;
            *(undefined8 *)(piVar19 + 4) = uVar12;
            *(undefined8 *)(piVar19 + 6) = uVar13;
          }
        }
        goto LAB_142402aef;
      }
LAB_142402ae0:
      local_338 = lVar1;
      HeapSortInternal<FActorPriority,FIdentityFunctor,TDereferenceWrapper<FActorPriority,FCompareFActorPriority>_>
                (piVar21,lVar14,param_3,param_4);
LAB_142402aef:
      plVar16 = plVar16 + -3;
    } while (&local_328 <= plVar16);
  }
  return;
code_r0x0001424029f9:
  if (*piVar20 <= *piVar21) goto LAB_1424029f0;
LAB_142402a00:
  do {
    piVar18 = piVar17;
    piVar17 = piVar18 + -8;
    if (piVar17 <= piVar20) break;
  } while (*piVar17 <= *piVar20);
  if (piVar21 <= piVar17) {
    if (piVar21 != piVar17) {
      iVar2 = piVar18[-7];
      iVar3 = piVar18[-6];
      iVar4 = piVar18[-5];
      iVar5 = *piVar21;
      iVar6 = piVar15[9];
      iVar7 = piVar15[10];
      iVar8 = piVar15[0xb];
      uVar10 = *(undefined8 *)(piVar15 + 0xc);
      uVar11 = *(undefined8 *)(piVar15 + 0xe);
      *piVar21 = *piVar17;
      piVar15[9] = iVar2;
      piVar15[10] = iVar3;
      piVar15[0xb] = iVar4;
      uVar9 = *(undefined8 *)(piVar18 + -2);
      *(undefined8 *)(piVar15 + 0xc) = *(undefined8 *)(piVar18 + -4);
      *(undefined8 *)(piVar15 + 0xe) = uVar9;
      *piVar17 = iVar5;
      piVar18[-7] = iVar6;
      piVar18[-6] = iVar7;
      piVar18[-5] = iVar8;
      *(undefined8 *)(piVar18 + -4) = uVar10;
      *(undefined8 *)(piVar18 + -2) = uVar11;
    }
    goto LAB_1424029f0;
  }
  if (piVar20 != piVar17) {
    iVar2 = piVar18[-7];
    iVar3 = piVar18[-6];
    iVar4 = piVar18[-5];
    iVar5 = *piVar20;
    iVar6 = piVar20[1];
    iVar7 = piVar20[2];
    iVar8 = piVar20[3];
    uVar10 = *(undefined8 *)(piVar20 + 4);
    uVar11 = *(undefined8 *)(piVar20 + 6);
    *piVar20 = *piVar17;
    piVar20[1] = iVar2;
    piVar20[2] = iVar3;
    piVar20[3] = iVar4;
    uVar9 = *(undefined8 *)(piVar18 + -2);
    *(undefined8 *)(piVar20 + 4) = *(undefined8 *)(piVar18 + -4);
    *(undefined8 *)(piVar20 + 6) = uVar9;
    *piVar17 = iVar5;
    piVar18[-7] = iVar6;
    piVar18[-6] = iVar7;
    piVar18[-5] = iVar8;
    *(undefined8 *)(piVar18 + -4) = uVar10;
    *(undefined8 *)(piVar18 + -2) = uVar11;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)piVar17 + (-0x20 - (longlong)piVar20) & 0xffffffffffffffe0U) <
      (longlong)((longlong)piVar19 - (longlong)piVar21 & 0xffffffffffffffe0U)) {
    if (piVar21 < piVar19) {
      *plVar16 = (longlong)piVar21;
      plVar16[1] = (longlong)piVar19;
      *(int *)(plVar16 + 2) = (int)local_338;
      plVar16 = plVar16 + 3;
    }
    if (piVar17 <= piVar20 + 8) goto LAB_142402aef;
    piVar19 = piVar18 + -0x10;
    piVar21 = piVar20;
  }
  else {
    if (piVar20 + 8 < piVar17) {
      *plVar16 = (longlong)piVar20;
      plVar16[1] = (longlong)(piVar18 + -0x10);
      *(int *)(plVar16 + 2) = (int)local_338;
      plVar16 = plVar16 + 3;
    }
    if (piVar19 <= piVar21) goto LAB_142402aef;
  }
  lVar14 = ((longlong)piVar19 - (longlong)piVar21 >> 5) + 1;
  piVar20 = piVar21;
  if ((int)local_338 == 0) goto LAB_142402ae0;
  goto LAB_1424029a0;
}



// FUNCTION 142402b90 IntroSortInternal<FGuid,FIdentityFunctor,TDereferenceWrapper<FGuid,<lambda_f34bf2750abe2b63b4e62b5d67307e3c>_>_> body=702 status=ok
// SIG undefined IntroSortInternal<FGuid,FIdentityFunctor,TDereferenceWrapper<FGuid,<lambda_f34bf2750abe2b63b4e62b5d67307e3c>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FGuid,FIdentityFunctor,TDereferenceWrapper<FGuid,<lambda_f34bf2750abe2b63b4e62b5d67307e3c>_>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  float fVar16;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_2 * 0x10 + -0x10 + param_1;
    fVar16 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar16 = fVar16 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar16 = ::_guard_xfg_dispatch_icall_nop(fVar16);
    local_338 = (undefined4)(longlong)(fVar16 + fVar16);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar12 = &local_348;
    do {
      puVar14 = (undefined8 *)*plVar12;
      puVar15 = (undefined8 *)plVar12[1];
      local_358 = plVar12[2];
      lVar7 = ((longlong)puVar15 - (longlong)puVar14 >> 4) + 1;
      puVar13 = puVar14;
      iVar11 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_142402c70:
        if (8 < lVar7) {
          puVar14 = puVar13 + (lVar7 / 2) * 2;
          if (puVar14 != puVar13) {
            uVar3 = *(undefined4 *)((longlong)puVar13 + 4);
            uVar4 = *(undefined4 *)(puVar13 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar13 + 0xc);
            uVar1 = *puVar14;
            uVar2 = puVar14[1];
            *(undefined4 *)puVar14 = *(undefined4 *)puVar13;
            *(undefined4 *)((longlong)puVar14 + 4) = uVar3;
            *(undefined4 *)(puVar14 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar14 + 0xc) = uVar5;
            *puVar13 = uVar1;
            puVar13[1] = uVar2;
          }
          puVar8 = puVar15 + 2;
          puVar14 = puVar13;
LAB_142402ca6:
          puVar10 = puVar14;
          puVar14 = puVar10 + 2;
          if (puVar14 <= puVar15) goto code_r0x000142402caf;
          goto LAB_142402cc1;
        }
        for (; puVar8 = puVar13, puVar14 = puVar13, puVar13 < puVar15; puVar15 = puVar15 + -2) {
          while (puVar14 = puVar14 + 2, puVar14 <= puVar15) {
            cVar6 = <lambda_f34bf2750abe2b63b4e62b5d67307e3c>::operator()(param_4,puVar8,puVar14);
            if (cVar6 != '\0') {
              puVar8 = puVar14;
            }
          }
          if (puVar8 != puVar15) {
            uVar3 = *(undefined4 *)((longlong)puVar15 + 4);
            uVar4 = *(undefined4 *)(puVar15 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar15 + 0xc);
            uVar1 = *puVar8;
            uVar2 = puVar8[1];
            *(undefined4 *)puVar8 = *(undefined4 *)puVar15;
            *(undefined4 *)((longlong)puVar8 + 4) = uVar3;
            *(undefined4 *)(puVar8 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar8 + 0xc) = uVar5;
            *puVar15 = uVar1;
            puVar15[1] = uVar2;
          }
        }
        goto LAB_142402d96;
      }
LAB_142402d87:
      HeapSortInternal<FGuid,FIdentityFunctor,TDereferenceWrapper<FGuid,<lambda_f34bf2750abe2b63b4e62b5d67307e3c>_>_>
                (puVar14,lVar7,param_3,param_4);
LAB_142402d96:
      plVar12 = plVar12 + -3;
    } while (&local_348 <= plVar12);
  }
  return;
code_r0x000142402caf:
  cVar6 = <lambda_f34bf2750abe2b63b4e62b5d67307e3c>::operator()(param_4,puVar13,puVar14);
  if (cVar6 == '\0') goto LAB_142402ca6;
LAB_142402cc1:
  do {
    puVar9 = puVar8;
    puVar8 = puVar9 + -2;
    if (puVar8 <= puVar13) break;
    cVar6 = <lambda_f34bf2750abe2b63b4e62b5d67307e3c>::operator()(param_4,puVar8,puVar13);
  } while (cVar6 == '\0');
  if (puVar14 <= puVar8) {
    if (puVar14 != puVar8) {
      uVar3 = *(undefined4 *)((longlong)puVar9 + -0xc);
      uVar4 = *(undefined4 *)(puVar9 + -1);
      uVar5 = *(undefined4 *)((longlong)puVar9 + -4);
      uVar1 = *puVar14;
      uVar2 = puVar10[3];
      *(undefined4 *)puVar14 = *(undefined4 *)puVar8;
      *(undefined4 *)((longlong)puVar10 + 0x14) = uVar3;
      *(undefined4 *)(puVar10 + 3) = uVar4;
      *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar5;
      *puVar8 = uVar1;
      puVar9[-1] = uVar2;
    }
    goto LAB_142402ca6;
  }
  if (puVar13 != puVar8) {
    uVar3 = *(undefined4 *)((longlong)puVar9 + -0xc);
    uVar4 = *(undefined4 *)(puVar9 + -1);
    uVar5 = *(undefined4 *)((longlong)puVar9 + -4);
    uVar1 = *puVar13;
    uVar2 = puVar13[1];
    *(undefined4 *)puVar13 = *(undefined4 *)puVar8;
    *(undefined4 *)((longlong)puVar13 + 4) = uVar3;
    *(undefined4 *)(puVar13 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar13 + 0xc) = uVar5;
    *puVar8 = uVar1;
    puVar9[-1] = uVar2;
  }
  iVar11 = iVar11 + -1;
  if ((longlong)((longlong)puVar8 + (-0x10 - (longlong)puVar13) & 0xfffffffffffffff0U) <
      (longlong)((longlong)puVar15 - (longlong)puVar14 & 0xfffffffffffffff0U)) {
    if (puVar14 < puVar15) {
      *plVar12 = (longlong)puVar14;
      plVar12[1] = (longlong)puVar15;
      *(int *)(plVar12 + 2) = iVar11;
      plVar12 = plVar12 + 3;
    }
    if (puVar8 <= puVar13 + 2) goto LAB_142402d96;
    puVar15 = puVar9 + -4;
    puVar14 = puVar13;
  }
  else {
    if (puVar13 + 2 < puVar8) {
      *plVar12 = (longlong)puVar13;
      plVar12[1] = (longlong)(puVar9 + -4);
      *(int *)(plVar12 + 2) = iVar11;
      plVar12 = plVar12 + 3;
    }
    if (puVar15 <= puVar14) goto LAB_142402d96;
  }
  lVar7 = ((longlong)puVar15 - (longlong)puVar14 >> 4) + 1;
  puVar13 = puVar14;
  if (iVar11 == 0) goto LAB_142402d87;
  goto LAB_142402c70;
}



// FUNCTION 142402e50 IntroSortInternal<FMeshDistanceFieldStats,FIdentityFunctor,TDereferenceWrapper<FMeshDistanceFieldStats,`FDistanceFieldVolumeTextureAtlas::ListMeshDistanceFields'::`2'::FMeshDistanceFieldStatsSorter>_> body=816 status=ok
// SIG undefined IntroSortInternal<FMeshDistanceFieldStats,FIdentityFunctor,TDereferenceWrapper<FMeshDistanceFieldStats,`FDistanceFieldVolumeTextureAtlas::ListMeshDistanceFields'::`2'::FMeshDistanceFieldStatsSorter>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FMeshDistanceFieldStats,FIdentityFunctor,TDereferenceWrapper<FMeshDistanceFieldStats,_FDistanceFieldVolumeTextureAtlas::ListMeshDistanceFields_::_2_::FMeshDistanceFieldStatsSorter>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  longlong *plVar15;
  float fVar16;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_1 + param_2 * 0x18 + -0x18;
    fVar16 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar16 = fVar16 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar16 = ::_guard_xfg_dispatch_icall_nop(fVar16);
    local_328 = (undefined4)(longlong)(fVar16 + fVar16);
    ::_guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar15 = &local_338;
    do {
      puVar14 = (ulonglong *)*plVar15;
      puVar9 = (ulonglong *)plVar15[1];
      lVar1 = plVar15[2];
      local_348._0_4_ = (int)lVar1;
      lVar8 = ((longlong)puVar9 - (longlong)puVar14) / 0x18 + 1;
      puVar13 = puVar14;
      if ((int)local_348 != 0) {
LAB_142402f40:
        if (8 < lVar8) {
          if (lVar8 < 0) {
            lVar8 = lVar8 + 1;
          }
          puVar14 = puVar13 + (lVar8 >> 1) * 3;
          if (puVar14 != puVar13) {
            uVar3 = *(undefined4 *)((longlong)puVar13 + 4);
            uVar7 = puVar13[1];
            uVar4 = *(undefined4 *)((longlong)puVar13 + 0xc);
            uVar5 = *puVar14;
            uVar6 = puVar14[1];
            uVar2 = puVar14[2];
            *(int *)puVar14 = (int)*puVar13;
            *(undefined4 *)((longlong)puVar14 + 4) = uVar3;
            *(int *)(puVar14 + 1) = (int)uVar7;
            *(undefined4 *)((longlong)puVar14 + 0xc) = uVar4;
            puVar14[2] = puVar13[2];
            *puVar13 = uVar5;
            puVar13[1] = uVar6;
            puVar13[2] = uVar2;
          }
          puVar11 = puVar9 + 3;
          puVar14 = puVar13;
LAB_142402f90:
          puVar10 = puVar14;
          puVar14 = puVar10 + 3;
          if (puVar14 <= puVar9) goto code_r0x000142402f99;
          goto LAB_142402fa1;
        }
        for (; puVar11 = puVar13, puVar14 = puVar13, puVar13 < puVar9; puVar9 = puVar9 + -3) {
          while (puVar10 = puVar11, puVar14 = puVar14 + 3, puVar14 <= puVar9) {
            puVar11 = puVar14;
            if (*puVar10 <= *puVar14) {
              puVar11 = puVar10;
            }
          }
          if (puVar10 != puVar9) {
            uVar5 = puVar9[1];
            uVar6 = *puVar10;
            uVar7 = puVar10[1];
            uVar2 = puVar10[2];
            *puVar10 = *puVar9;
            puVar10[1] = uVar5;
            puVar10[2] = puVar9[2];
            *puVar9 = uVar6;
            puVar9[1] = uVar7;
            puVar9[2] = uVar2;
          }
        }
        goto LAB_1424030cd;
      }
LAB_1424030be:
      local_348 = lVar1;
      HeapSortInternal<FMeshDistanceFieldStats,FIdentityFunctor,TDereferenceWrapper<FMeshDistanceFieldStats,_FDistanceFieldVolumeTextureAtlas::ListMeshDistanceFields_::_2_::FMeshDistanceFieldStatsSorter>_>
                (puVar14,lVar8,param_3,param_4);
LAB_1424030cd:
      plVar15 = plVar15 + -3;
    } while (&local_338 <= plVar15);
  }
  return;
code_r0x000142402f99:
  if (*puVar13 <= *puVar14) goto LAB_142402f90;
LAB_142402fa1:
  do {
    puVar12 = puVar11;
    puVar11 = puVar12 + -3;
    if (puVar11 <= puVar13) break;
  } while (*puVar11 <= *puVar13);
  if (puVar14 <= puVar11) {
    if (puVar14 != puVar11) {
      uVar3 = *(undefined4 *)((longlong)puVar12 + -0x14);
      uVar7 = puVar12[-2];
      uVar4 = *(undefined4 *)((longlong)puVar12 + -0xc);
      uVar5 = *puVar14;
      uVar6 = puVar10[4];
      uVar2 = puVar10[5];
      *(int *)puVar14 = (int)*puVar11;
      *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar3;
      *(int *)(puVar10 + 4) = (int)uVar7;
      *(undefined4 *)((longlong)puVar10 + 0x24) = uVar4;
      puVar10[5] = puVar12[-1];
      *puVar11 = uVar5;
      puVar12[-2] = uVar6;
      puVar12[-1] = uVar2;
    }
    goto LAB_142402f90;
  }
  if (puVar13 != puVar11) {
    uVar3 = *(undefined4 *)((longlong)puVar12 + -0x14);
    uVar7 = puVar12[-2];
    uVar4 = *(undefined4 *)((longlong)puVar12 + -0xc);
    uVar5 = *puVar13;
    uVar6 = puVar13[1];
    uVar2 = puVar13[2];
    *(int *)puVar13 = (int)*puVar11;
    *(undefined4 *)((longlong)puVar13 + 4) = uVar3;
    *(int *)(puVar13 + 1) = (int)uVar7;
    *(undefined4 *)((longlong)puVar13 + 0xc) = uVar4;
    puVar13[2] = puVar12[-1];
    *puVar11 = uVar5;
    puVar12[-2] = uVar6;
    puVar12[-1] = uVar2;
  }
  local_348._0_4_ = (int)local_348 + -1;
  lVar8 = (longlong)puVar11 + (-0x18 - (longlong)puVar13);
  lVar8 = lVar8 / 6 + (lVar8 >> 0x3f);
  if ((lVar8 >> 2) - (lVar8 >> 0x3f) < ((longlong)puVar9 - (longlong)puVar14) / 0x18) {
    if (puVar14 < puVar9) {
      *plVar15 = (longlong)puVar14;
      plVar15[1] = (longlong)puVar9;
      *(int *)(plVar15 + 2) = (int)local_348;
      plVar15 = plVar15 + 3;
    }
    if (puVar11 <= puVar13 + 3) goto LAB_1424030cd;
    puVar9 = puVar12 + -6;
    puVar14 = puVar13;
  }
  else {
    if (puVar13 + 3 < puVar11) {
      *plVar15 = (longlong)puVar13;
      plVar15[1] = (longlong)(puVar12 + -6);
      *(int *)(plVar15 + 2) = (int)local_348;
      plVar15 = plVar15 + 3;
    }
    if (puVar9 <= puVar14) goto LAB_1424030cd;
  }
  lVar8 = ((longlong)puVar9 - (longlong)puVar14) / 0x18 + 1;
  puVar13 = puVar14;
  if ((int)local_348 == 0) goto LAB_1424030be;
  goto LAB_142402f40;
}



// FUNCTION 142403180 IntroSortInternal<FTextureLODGroup,FIdentityFunctor,TDereferenceWrapper<FTextureLODGroup,<lambda_ca7c2040311208138d81214d43c595ab>_>_> body=1062 status=ok
// SIG undefined IntroSortInternal<FTextureLODGroup,FIdentityFunctor,TDereferenceWrapper<FTextureLODGroup,<lambda_ca7c2040311208138d81214d43c595ab>_>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FTextureLODGroup,FIdentityFunctor,TDereferenceWrapper<FTextureLODGroup,<lambda_ca7c2040311208138d81214d43c595ab>_>_>
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
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  byte *pbVar20;
  longlong lVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar26;
  longlong *plVar27;
  float fVar28;
  undefined1 auStack_388 [48];
  longlong local_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  byte *pbVar25;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_388;
    lStack_340 = param_2 * 0x50 + -0x50 + param_1;
    fVar28 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar28 = fVar28 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar28 = ::_guard_xfg_dispatch_icall_nop(fVar28);
    local_338 = (undefined4)(longlong)(fVar28 + fVar28);
    ::_guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar27 = &local_348;
    do {
      pbVar20 = (byte *)*plVar27;
      pbVar22 = (byte *)plVar27[1];
      lVar1 = plVar27[2];
      local_358._0_4_ = (int)lVar1;
      lVar21 = ((longlong)pbVar22 - (longlong)pbVar20) / 0x50 + 1;
      pbVar26 = pbVar20;
      if ((int)local_358 != 0) {
LAB_142403280:
        if (8 < lVar21) {
          if (lVar21 < 0) {
            lVar21 = lVar21 + 1;
          }
          pbVar20 = pbVar26 + (lVar21 >> 1) * 0x50;
          if (pbVar20 != pbVar26) {
            uVar9 = *(undefined8 *)(pbVar26 + 8);
            uVar2 = *(undefined4 *)pbVar20;
            uVar3 = *(undefined4 *)(pbVar20 + 4);
            uVar4 = *(undefined4 *)(pbVar20 + 8);
            uVar5 = *(undefined4 *)(pbVar20 + 0xc);
            uVar10 = *(undefined8 *)(pbVar20 + 0x10);
            uVar11 = *(undefined8 *)(pbVar20 + 0x18);
            uVar12 = *(undefined8 *)(pbVar20 + 0x20);
            uVar13 = *(undefined8 *)(pbVar20 + 0x28);
            uVar14 = *(undefined8 *)(pbVar20 + 0x30);
            uVar15 = *(undefined8 *)(pbVar20 + 0x38);
            uVar16 = *(undefined8 *)(pbVar20 + 0x40);
            uVar17 = *(undefined8 *)(pbVar20 + 0x48);
            *(undefined8 *)pbVar20 = *(undefined8 *)pbVar26;
            *(undefined8 *)(pbVar20 + 8) = uVar9;
            uVar9 = *(undefined8 *)(pbVar26 + 0x18);
            *(undefined8 *)(pbVar20 + 0x10) = *(undefined8 *)(pbVar26 + 0x10);
            *(undefined8 *)(pbVar20 + 0x18) = uVar9;
            uVar9 = *(undefined8 *)(pbVar26 + 0x28);
            *(undefined8 *)(pbVar20 + 0x20) = *(undefined8 *)(pbVar26 + 0x20);
            *(undefined8 *)(pbVar20 + 0x28) = uVar9;
            uVar9 = *(undefined8 *)(pbVar26 + 0x38);
            *(undefined8 *)(pbVar20 + 0x30) = *(undefined8 *)(pbVar26 + 0x30);
            *(undefined8 *)(pbVar20 + 0x38) = uVar9;
            uVar6 = *(undefined4 *)(pbVar26 + 0x44);
            uVar7 = *(undefined4 *)(pbVar26 + 0x48);
            uVar8 = *(undefined4 *)(pbVar26 + 0x4c);
            *(undefined4 *)(pbVar20 + 0x40) = *(undefined4 *)(pbVar26 + 0x40);
            *(undefined4 *)(pbVar20 + 0x44) = uVar6;
            *(undefined4 *)(pbVar20 + 0x48) = uVar7;
            *(undefined4 *)(pbVar20 + 0x4c) = uVar8;
            *(undefined4 *)pbVar26 = uVar2;
            *(undefined4 *)(pbVar26 + 4) = uVar3;
            *(undefined4 *)(pbVar26 + 8) = uVar4;
            *(undefined4 *)(pbVar26 + 0xc) = uVar5;
            *(undefined8 *)(pbVar26 + 0x10) = uVar10;
            *(undefined8 *)(pbVar26 + 0x18) = uVar11;
            *(undefined8 *)(pbVar26 + 0x20) = uVar12;
            *(undefined8 *)(pbVar26 + 0x28) = uVar13;
            *(undefined8 *)(pbVar26 + 0x30) = uVar14;
            *(undefined8 *)(pbVar26 + 0x38) = uVar15;
            *(undefined8 *)(pbVar26 + 0x40) = uVar16;
            *(undefined8 *)(pbVar26 + 0x48) = uVar17;
          }
          pbVar24 = pbVar22 + 0x50;
          pbVar20 = pbVar26;
LAB_142403302:
          pbVar23 = pbVar20;
          pbVar20 = pbVar23 + 0x50;
          if (pbVar20 <= pbVar22) goto code_r0x00014240330b;
          goto LAB_142403314;
        }
        for (; pbVar24 = pbVar26, pbVar20 = pbVar26, pbVar26 < pbVar22; pbVar22 = pbVar22 + -0x50) {
          while (pbVar23 = pbVar24, pbVar20 = pbVar20 + 0x50, pbVar20 <= pbVar22) {
            pbVar24 = pbVar20;
            if (*pbVar20 <= *pbVar23) {
              pbVar24 = pbVar23;
            }
          }
          if (pbVar23 != pbVar22) {
            uVar9 = *(undefined8 *)(pbVar22 + 8);
            uVar10 = *(undefined8 *)pbVar23;
            uVar11 = *(undefined8 *)(pbVar23 + 8);
            uVar12 = *(undefined8 *)(pbVar23 + 0x10);
            uVar13 = *(undefined8 *)(pbVar23 + 0x18);
            uVar14 = *(undefined8 *)(pbVar23 + 0x20);
            uVar15 = *(undefined8 *)(pbVar23 + 0x28);
            uVar16 = *(undefined8 *)(pbVar23 + 0x30);
            uVar17 = *(undefined8 *)(pbVar23 + 0x38);
            uVar18 = *(undefined8 *)(pbVar23 + 0x40);
            uVar19 = *(undefined8 *)(pbVar23 + 0x48);
            *(undefined8 *)pbVar23 = *(undefined8 *)pbVar22;
            *(undefined8 *)(pbVar23 + 8) = uVar9;
            uVar9 = *(undefined8 *)(pbVar22 + 0x18);
            *(undefined8 *)(pbVar23 + 0x10) = *(undefined8 *)(pbVar22 + 0x10);
            *(undefined8 *)(pbVar23 + 0x18) = uVar9;
            uVar9 = *(undefined8 *)(pbVar22 + 0x28);
            *(undefined8 *)(pbVar23 + 0x20) = *(undefined8 *)(pbVar22 + 0x20);
            *(undefined8 *)(pbVar23 + 0x28) = uVar9;
            uVar9 = *(undefined8 *)(pbVar22 + 0x38);
            *(undefined8 *)(pbVar23 + 0x30) = *(undefined8 *)(pbVar22 + 0x30);
            *(undefined8 *)(pbVar23 + 0x38) = uVar9;
            uVar9 = *(undefined8 *)(pbVar22 + 0x48);
            *(undefined8 *)(pbVar23 + 0x40) = *(undefined8 *)(pbVar22 + 0x40);
            *(undefined8 *)(pbVar23 + 0x48) = uVar9;
            *(undefined8 *)pbVar22 = uVar10;
            *(undefined8 *)(pbVar22 + 8) = uVar11;
            *(undefined8 *)(pbVar22 + 0x10) = uVar12;
            *(undefined8 *)(pbVar22 + 0x18) = uVar13;
            *(undefined8 *)(pbVar22 + 0x20) = uVar14;
            *(undefined8 *)(pbVar22 + 0x28) = uVar15;
            *(undefined8 *)(pbVar22 + 0x30) = uVar16;
            *(undefined8 *)(pbVar22 + 0x38) = uVar17;
            *(undefined8 *)(pbVar22 + 0x40) = uVar18;
            *(undefined8 *)(pbVar22 + 0x48) = uVar19;
          }
        }
        goto LAB_1424034b4;
      }
LAB_1424034a5:
      local_358 = lVar1;
      HeapSortInternal<FTextureLODGroup,FIdentityFunctor,TDereferenceWrapper<FTextureLODGroup,<lambda_ca7c2040311208138d81214d43c595ab>_>_>
                (pbVar20,lVar21,param_3,param_4);
LAB_1424034b4:
      plVar27 = plVar27 + -3;
    } while (&local_348 <= plVar27);
  }
  return;
code_r0x00014240330b:
  if (*pbVar20 <= *pbVar26) goto LAB_142403302;
LAB_142403314:
  do {
    pbVar25 = pbVar24;
    pbVar24 = pbVar25 + -0x50;
    if (pbVar24 <= pbVar26) break;
  } while (*pbVar26 <= *pbVar24);
  if (pbVar20 <= pbVar24) {
    if (pbVar20 != pbVar24) {
      uVar9 = *(undefined8 *)(pbVar25 + -0x48);
      uVar2 = *(undefined4 *)pbVar20;
      uVar3 = *(undefined4 *)(pbVar23 + 0x54);
      uVar4 = *(undefined4 *)(pbVar23 + 0x58);
      uVar5 = *(undefined4 *)(pbVar23 + 0x5c);
      uVar10 = *(undefined8 *)(pbVar23 + 0x60);
      uVar11 = *(undefined8 *)(pbVar23 + 0x68);
      uVar12 = *(undefined8 *)(pbVar23 + 0x70);
      uVar13 = *(undefined8 *)(pbVar23 + 0x78);
      uVar14 = *(undefined8 *)(pbVar23 + 0x80);
      uVar15 = *(undefined8 *)(pbVar23 + 0x88);
      uVar16 = *(undefined8 *)(pbVar23 + 0x90);
      uVar17 = *(undefined8 *)(pbVar23 + 0x98);
      *(undefined8 *)pbVar20 = *(undefined8 *)pbVar24;
      *(undefined8 *)(pbVar23 + 0x58) = uVar9;
      uVar9 = *(undefined8 *)(pbVar25 + -0x38);
      *(undefined8 *)(pbVar23 + 0x60) = *(undefined8 *)(pbVar25 + -0x40);
      *(undefined8 *)(pbVar23 + 0x68) = uVar9;
      uVar9 = *(undefined8 *)(pbVar25 + -0x28);
      *(undefined8 *)(pbVar23 + 0x70) = *(undefined8 *)(pbVar25 + -0x30);
      *(undefined8 *)(pbVar23 + 0x78) = uVar9;
      uVar9 = *(undefined8 *)(pbVar25 + -0x18);
      *(undefined8 *)(pbVar23 + 0x80) = *(undefined8 *)(pbVar25 + -0x20);
      *(undefined8 *)(pbVar23 + 0x88) = uVar9;
      uVar6 = *(undefined4 *)(pbVar25 + -0xc);
      uVar7 = *(undefined4 *)(pbVar25 + -8);
      uVar8 = *(undefined4 *)(pbVar25 + -4);
      *(undefined4 *)(pbVar23 + 0x90) = *(undefined4 *)(pbVar25 + -0x10);
      *(undefined4 *)(pbVar23 + 0x94) = uVar6;
      *(undefined4 *)(pbVar23 + 0x98) = uVar7;
      *(undefined4 *)(pbVar23 + 0x9c) = uVar8;
      *(undefined4 *)pbVar24 = uVar2;
      *(undefined4 *)(pbVar25 + -0x4c) = uVar3;
      *(undefined4 *)(pbVar25 + -0x48) = uVar4;
      *(undefined4 *)(pbVar25 + -0x44) = uVar5;
      *(undefined8 *)(pbVar25 + -0x40) = uVar10;
      *(undefined8 *)(pbVar25 + -0x38) = uVar11;
      *(undefined8 *)(pbVar25 + -0x30) = uVar12;
      *(undefined8 *)(pbVar25 + -0x28) = uVar13;
      *(undefined8 *)(pbVar25 + -0x20) = uVar14;
      *(undefined8 *)(pbVar25 + -0x18) = uVar15;
      *(undefined8 *)(pbVar25 + -0x10) = uVar16;
      *(undefined8 *)(pbVar25 + -8) = uVar17;
    }
    goto LAB_142403302;
  }
  if (pbVar26 != pbVar24) {
    uVar9 = *(undefined8 *)(pbVar25 + -0x48);
    uVar2 = *(undefined4 *)pbVar26;
    uVar3 = *(undefined4 *)(pbVar26 + 4);
    uVar4 = *(undefined4 *)(pbVar26 + 8);
    uVar5 = *(undefined4 *)(pbVar26 + 0xc);
    uVar10 = *(undefined8 *)(pbVar26 + 0x10);
    uVar11 = *(undefined8 *)(pbVar26 + 0x18);
    uVar12 = *(undefined8 *)(pbVar26 + 0x20);
    uVar13 = *(undefined8 *)(pbVar26 + 0x28);
    uVar14 = *(undefined8 *)(pbVar26 + 0x30);
    uVar15 = *(undefined8 *)(pbVar26 + 0x38);
    uVar16 = *(undefined8 *)(pbVar26 + 0x40);
    uVar17 = *(undefined8 *)(pbVar26 + 0x48);
    *(undefined8 *)pbVar26 = *(undefined8 *)pbVar24;
    *(undefined8 *)(pbVar26 + 8) = uVar9;
    uVar9 = *(undefined8 *)(pbVar25 + -0x38);
    *(undefined8 *)(pbVar26 + 0x10) = *(undefined8 *)(pbVar25 + -0x40);
    *(undefined8 *)(pbVar26 + 0x18) = uVar9;
    uVar9 = *(undefined8 *)(pbVar25 + -0x28);
    *(undefined8 *)(pbVar26 + 0x20) = *(undefined8 *)(pbVar25 + -0x30);
    *(undefined8 *)(pbVar26 + 0x28) = uVar9;
    uVar9 = *(undefined8 *)(pbVar25 + -0x18);
    *(undefined8 *)(pbVar26 + 0x30) = *(undefined8 *)(pbVar25 + -0x20);
    *(undefined8 *)(pbVar26 + 0x38) = uVar9;
    uVar6 = *(undefined4 *)(pbVar25 + -0xc);
    uVar7 = *(undefined4 *)(pbVar25 + -8);
    uVar8 = *(undefined4 *)(pbVar25 + -4);
    *(undefined4 *)(pbVar26 + 0x40) = *(undefined4 *)(pbVar25 + -0x10);
    *(undefined4 *)(pbVar26 + 0x44) = uVar6;
    *(undefined4 *)(pbVar26 + 0x48) = uVar7;
    *(undefined4 *)(pbVar26 + 0x4c) = uVar8;
    *(undefined4 *)pbVar24 = uVar2;
    *(undefined4 *)(pbVar25 + -0x4c) = uVar3;
    *(undefined4 *)(pbVar25 + -0x48) = uVar4;
    *(undefined4 *)(pbVar25 + -0x44) = uVar5;
    *(undefined8 *)(pbVar25 + -0x40) = uVar10;
    *(undefined8 *)(pbVar25 + -0x38) = uVar11;
    *(undefined8 *)(pbVar25 + -0x30) = uVar12;
    *(undefined8 *)(pbVar25 + -0x28) = uVar13;
    *(undefined8 *)(pbVar25 + -0x20) = uVar14;
    *(undefined8 *)(pbVar25 + -0x18) = uVar15;
    *(undefined8 *)(pbVar25 + -0x10) = uVar16;
    *(undefined8 *)(pbVar25 + -8) = uVar17;
  }
  local_358._0_4_ = (int)local_358 + -1;
  if ((longlong)(pbVar24 + (-0x50 - (longlong)pbVar26)) / 0x50 <
      ((longlong)pbVar22 - (longlong)pbVar20) / 0x50) {
    if (pbVar20 < pbVar22) {
      *plVar27 = (longlong)pbVar20;
      plVar27[1] = (longlong)pbVar22;
      *(int *)(plVar27 + 2) = (int)local_358;
      plVar27 = plVar27 + 3;
    }
    if (pbVar24 <= pbVar26 + 0x50) goto LAB_1424034b4;
    pbVar22 = pbVar25 + -0xa0;
    pbVar20 = pbVar26;
  }
  else {
    if (pbVar26 + 0x50 < pbVar24) {
      *plVar27 = (longlong)pbVar26;
      plVar27[1] = (longlong)(pbVar25 + -0xa0);
      *(int *)(plVar27 + 2) = (int)local_358;
      plVar27 = plVar27 + 3;
    }
    if (pbVar22 <= pbVar20) goto LAB_1424034b4;
  }
  lVar21 = ((longlong)pbVar22 - (longlong)pbVar20) / 0x50 + 1;
  pbVar26 = pbVar20;
  if ((int)local_358 == 0) goto LAB_1424034a5;
  goto LAB_142403280;
}



// FUNCTION 1424035b0 FUN_1424035b0 body=187 status=ok
// SIG undefined FUN_1424035b0(void)

undefined8 * FUN_1424035b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_145093320;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"NewDecalComponent",1);
  uVar1 = *puVar2;
  uVar3 = FUN_142923000();
  lVar4 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x8b] = lVar4;
  *(undefined8 *)(lVar4 + 0x1f8) = 0xc2b40000;
  *(undefined4 *)(lVar4 + 0x200) = 0;
  *(byte *)(param_1[0x8b] + 0x708) = *(byte *)(param_1[0x8b] + 0x708) | 1;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  param_1[0x2d] = param_1[0x8b];
  return param_1;
}



// FUNCTION 142403670 FUN_142403670 body=919 status=ok
// SIG undefined FUN_142403670(void)

undefined8 * FUN_142403670(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 local_28;
  float local_20;
  longlong local_18;
  undefined8 local_10;
  
  FUN_1426850b0();
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) | 0x40;
  *param_1 = &PTR_FUN_145093a10;
  param_1[0x8b] = &PTR_LAB_145094270;
  *(undefined1 *)((longlong)param_1 + 0x95) = 1;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0x7f;
  *(undefined4 *)(param_1 + 0x29) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0;
  *(undefined1 *)((longlong)param_1 + 0x12a) = 1;
  uVar1 = DAT_146af2488;
  uVar2 = FUN_142a175e0();
  lVar3 = FUN_141752410(param_1,uVar1,uVar2,uVar2,1,0,0);
  param_1[0x9a] = lVar3;
  *(undefined4 *)(lVar3 + 0x710) = 0x420c0000;
  (**(code **)(*(longlong *)param_1[0x9a] + 0x640))((longlong *)param_1[0x9a],DAT_146aefc78);
  *(undefined1 *)(param_1[0x9a] + 0x303) = 0;
  FUN_142398900(param_1[0x9a],1);
  FUN_14234fe40(param_1[0x9a],0);
  *(byte *)(param_1[0x9a] + 0x700) = *(byte *)(param_1[0x9a] + 0x700) | 4;
  param_1[0x2d] = param_1[0x9a];
  uVar1 = DAT_146af2480;
  uVar2 = FUN_1429365a0();
  uVar4 = FUN_1429d7b60();
  lVar3 = FUN_141752410(param_1,uVar1,uVar4,uVar2,1,0,0);
  param_1[0x99] = lVar3;
  *(undefined8 *)(lVar3 + 0x178) = param_1[0x9a];
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146af28c8) {
    _Init_thread_header(&DAT_146af28c8);
    if (DAT_146af28c8 == -1) {
      FUN_141785db0(L"/Engine/EngineMeshes/Sphere");
      local_18 = 0;
      local_10 = 0x1c;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      FGenericPlatformString::Memcpy(local_18,L"/Engine/EngineMeshes/Sphere",0x38);
      FUN_14179acf0(&local_18,1);
      DAT_146af28c0 = FUN_14095c6b0(&local_18);
      if (DAT_146af28c0 == 0) {
        FUN_14178ab20(L"/Engine/EngineMeshes/Sphere");
      }
      if (local_18 != 0) {
        FMemory::Free();
      }
      _Init_thread_footer(&DAT_146af28c8);
    }
  }
  uVar1 = DAT_146af2490;
  uVar2 = FUN_142a232e0();
  plVar5 = (longlong *)FUN_141752410(param_1,uVar1,uVar2,uVar2,0,0,0);
  param_1[0x9b] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x928))(plVar5,DAT_146af28c0);
    *(byte *)(param_1[0x9b] + 0x2f8) = *(byte *)(param_1[0x9b] + 0x2f8) | 0x10;
    *(byte *)(param_1[0x9b] + 0x2f8) = *(byte *)(param_1[0x9b] + 0x2f8) | 0x20;
    *(byte *)(param_1[0x9b] + 0x2f0) = *(byte *)(param_1[0x9b] + 0x2f0) | 0x20;
    *(byte *)(param_1[0x9b] + 0x2f1) = *(byte *)(param_1[0x9b] + 0x2f1) | 0x80;
    *(byte *)(param_1[0x9b] + 0x2f1) = *(byte *)(param_1[0x9b] + 0x2f1) & 0xdf;
    *(byte *)(param_1[0x9b] + 0x2f1) = *(byte *)(param_1[0x9b] + 0x2f1) & 0xbf;
    *(undefined1 *)(param_1[0x9b] + 0x38) = 0;
    FUN_142399e30(param_1[0x9b],param_1[0x2d],0);
    (**(code **)(*(longlong *)param_1[0x9b] + 0x640))((longlong *)param_1[0x9b],DAT_146aefc78);
    local_20 = *(float *)(param_1[0x9a] + 0x710) * 0.00625;
    local_10 = CONCAT44(local_10._4_4_,local_20);
    local_28 = CONCAT44(local_20,local_20);
    (**(code **)(*(longlong *)param_1[0x9b] + 0x3f8))((longlong *)param_1[0x9b],&local_28);
    FUN_1423974f0(param_1[0x9b],0);
    FUN_14234fe40(param_1[0x9b],0);
  }
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) | 1;
  *(undefined4 *)(param_1 + 0x98) = 0x42340000;
  *(undefined4 *)((longlong)param_1 + 0x4c4) = 0x42340000;
  return param_1;
}



// FUNCTION 142403a10 FUN_142403a10 body=156 status=ok
// SIG undefined FUN_142403a10(void)

undefined8 * FUN_142403a10(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_1426d3840();
  *param_1 = &PTR__scalar_deleting_destructor__145094300;
  plVar1 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  *(undefined4 *)(param_1 + 0x92) = *(undefined4 *)(lVar2 + 0x3c);
  plVar1 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  *(undefined4 *)(param_1 + 0x93) = *(undefined4 *)(lVar2 + 0x40);
  (**(code **)(*(longlong *)param_1[0x8e] + 0x638))((longlong *)param_1[0x8e],0);
  return param_1;
}



// FUNCTION 142403ab0 FComposableFloatDistribution body=163 status=ok
// SIG undefined FComposableFloatDistribution(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FComposableFloatDistribution::FComposableFloatDistribution(undefined4 *param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  iVar1 = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  local_28 = 0;
  if (param_1[7] != 1) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 4,1);
    iVar1 = param_1[6];
  }
  param_1[6] = iVar1 + 1;
  if ((int)param_1[7] < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 4);
  }
  *param_1 = 0x10101;
  *(undefined8 *)(param_1 + 1) = 0;
  **(undefined4 **)(param_1 + 4) = (undefined4)local_28;
  return param_1;
}



// FUNCTION 142403b60 FComposableVectorDistribution body=198 status=ok
// SIG undefined FComposableVectorDistribution(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FComposableVectorDistribution::FComposableVectorDistribution(undefined4 *param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  iVar1 = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  local_28 = 0;
  local_20 = 0;
  if (param_1[7] != 3) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 4,3);
    iVar1 = param_1[6];
  }
  param_1[6] = iVar1 + 3;
  if ((int)param_1[7] < iVar1 + 3) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 4);
  }
  *param_1 = 0x30101;
  *(undefined8 *)(param_1 + 1) = 0;
  **(undefined4 **)(param_1 + 4) = (undefined4)local_28;
  *(undefined4 *)(*(longlong *)(param_1 + 4) + 4) = local_28._4_4_;
  *(undefined4 *)(*(longlong *)(param_1 + 4) + 8) = (undefined4)local_20;
  return param_1;
}



// FUNCTION 142403c30 FDialogueContext body=64 status=ok
// SIG undefined FDialogueContext(void)

undefined8 * FDialogueContext::FDialogueContext(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 1,0);
  *(undefined8 *)param_1[1] = 0;
  return param_1;
}



// FUNCTION 142403c70 FDialogueContextMapping body=125 status=ok
// SIG undefined FDialogueContextMapping(void)

undefined8 * FDialogueContextMapping::FDialogueContextMapping(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 1,0);
  *(undefined8 *)param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 4,0);
  FGenericPlatformString::Memcpy(param_1[4],L"{ContextHash}",0x1c);
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 142403cf0 FDialogueWaveParameter body=68 status=ok
// SIG undefined FDialogueWaveParameter(void)

undefined8 * FDialogueWaveParameter::FDialogueWaveParameter(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 2,0);
  *(undefined8 *)param_1[2] = 0;
  return param_1;
}



// FUNCTION 142403d40 FDistributionLookupTable body=166 status=ok
// SIG undefined FDistributionLookupTable(void)

undefined1 *
FDistributionLookupTable::FDistributionLookupTable(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  iVar1 = *(int *)(param_2 + 0x18);
  _Src = *(void **)(param_2 + 0x10);
  *(int *)(param_1 + 0x18) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 0x10,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x10),_Src,(longlong)iVar1 << 2);
  }
  param_1[0x20] = param_2[0x20];
  return param_1;
}



// FUNCTION 142403df0 FGotoTimeInSecondsTask body=97 status=ok
// SIG undefined FGotoTimeInSecondsTask(void)

undefined8 *
FGotoTimeInSecondsTask::FGotoTimeInSecondsTask
          (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_145094ff8;
  FWeakObjectPtr::operator=(param_1 + 3);
  *(undefined4 *)((longlong)param_1 + 0x24) = param_3;
  *param_1 = &PTR_FUN_145095728;
  param_1[5] = 0;
  param_1[6] = 0xffffffffffffffff;
  return param_1;
}



// FUNCTION 142403e60 FInputAxisKeyMapping body=146 status=ok
// SIG undefined FInputAxisKeyMapping(void)

undefined8 *
FInputAxisKeyMapping::FInputAxisKeyMapping
          (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *(undefined4 *)(param_1 + 1) = param_4;
  *param_1 = param_2;
  param_1[2] = *param_3;
  param_1[3] = param_3[1];
  lVar4 = param_3[2];
  param_1[4] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_3[2];
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
    return param_1;
  }
  return param_1;
}



// FUNCTION 142403f00 FNetworkDemoHeader body=127 status=ok
// SIG undefined FNetworkDemoHeader(void)

undefined4 * FNetworkDemoHeader::FNetworkDemoHeader(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  *param_1 = 0x2cf5a13d;
  param_1[1] = 0xb;
  uVar1 = FUN_1416727f0(1);
  param_1[2] = uVar1;
  uVar1 = FUN_1416722f0();
  param_1[3] = uVar1;
  uVar1 = FUN_141672630();
  param_1[4] = uVar1;
  uVar2 = FEngineVersion::Current();
  uVar1 = FEngineVersionBase::GetChangelist(uVar2);
  param_1[5] = uVar1;
  puVar3 = (undefined8 *)FEngineVersion::Current();
  *(undefined8 *)(param_1 + 6) = *puVar3;
  param_1[8] = *(undefined4 *)(puVar3 + 1);
  FString::FString(param_1 + 10,puVar3 + 2);
  param_1[0xe] = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  return param_1;
}



// FUNCTION 142403f80 FUN_142403f80 body=217 status=ok
// SIG undefined FUN_142403f80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_142403f80(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_2 + 0x30);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_2 + 0x98);
  }
  *param_1 = lVar2;
  if (*(longlong **)(param_2 + 0x30) == (longlong *)0x0) {
    lVar2 = *(longlong *)(param_2 + 0x98);
  }
  else {
    lVar2 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x758))();
  }
  param_1[1] = lVar2;
  lVar3 = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x168), lVar2 != 0)) {
    lVar3 = *(longlong *)(lVar2 + 0x220);
    uVar1 = *(undefined4 *)(lVar2 + 0x228);
  }
  param_1[2] = lVar3;
  *(undefined4 *)(param_1 + 3) = uVar1;
  return param_1;
}



// FUNCTION 142404060 FUN_142404060 body=79 status=ok
// SIG undefined FUN_142404060(void)

undefined8 * FUN_142404060(undefined8 *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  
  *param_1 = param_2;
  lVar1 = 0x1980;
  if ((char)param_2[0x2fd] == '\0') {
    lVar1 = 0x1970;
  }
  *(undefined4 *)(param_1 + 2) = param_3;
  param_1[1] = lVar1 + (longlong)param_2;
  (**(code **)(*param_2 + 0x2c8))(param_2,0);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_1[1] + 8);
  return param_1;
}



// FUNCTION 1424040b0 FUN_1424040b0 body=150 status=ok
// SIG undefined FUN_1424040b0(void)

longlong * FUN_1424040b0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_res8;
  
  *param_1 = (longlong)param_2;
  lVar2 = (**(code **)(*param_2 + 0x90))(param_2);
  plVar1 = (longlong *)*param_1;
  param_1[1] = lVar2;
  local_res8 = 0;
  if (*(longlong *)plVar1[1] + 8U <= (ulonglong)((longlong *)plVar1[1])[1]) {
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 8;
    return param_1;
  }
  (**(code **)(*plVar1 + 0x50))(plVar1,&local_res8,8);
  if ((*(byte *)((longlong)plVar1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(plVar1,&local_res8,8);
  }
  return param_1;
}



// FUNCTION 142404150 FUN_142404150 body=91 status=ok
// SIG undefined FUN_142404150(void)

undefined8 * FUN_142404150(undefined8 *param_1)

{
  FUN_1425adbf0();
  *param_1 = &PTR_FUN_145094c70;
  param_1[5] = &PTR_LAB_145094fe8;
  param_1[0x32e] = 0;
  param_1[0x32f] = 0;
  param_1[0x330] = 0;
  param_1[0x331] = 0;
  *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 1;
  *(undefined4 *)(param_1 + 0x14) = 0x800;
  return param_1;
}



// FUNCTION 1424041b0 FUN_1424041b0 body=1086 status=ok
// SIG undefined FUN_1424041b0(void)

undefined8 * FUN_1424041b0(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  FUN_1425ae280();
  *param_1 = &PTR_FUN_145095018;
  param_1[5] = &PTR_LAB_145095440;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  *(undefined4 *)(param_1 + 0xbb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5dc) = 0;
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  *(undefined4 *)(param_1 + 0xc5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x62c) = 0;
  param_1[199] = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  *(undefined4 *)(param_1 + 0xcf) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x67c) = 0;
  param_1[0xd1] = 0;
  *(undefined4 *)(param_1 + 0xd2) = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6cc) = 0;
  param_1[0xdb] = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  *(undefined4 *)(param_1 + 0xe3) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x71c) = 0;
  param_1[0xe5] = 0;
  *(undefined4 *)(param_1 + 0xe6) = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 2;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 2;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 2;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  *(undefined4 *)(param_1 + 0xf9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7cc) = 0;
  param_1[0xfb] = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  *(undefined4 *)(param_1 + 0x105) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x82c) = 0;
  param_1[0x107] = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  *(undefined4 *)(param_1 + 0x10f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x87c) = 0;
  param_1[0x111] = 0;
  *(undefined4 *)(param_1 + 0x112) = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  *(undefined4 *)(param_1 + 0x11d) = 0;
  FURL::FURL(param_1 + 0x11f,0);
  uVar1 = FGuid::NewGuid(local_18);
  FUN_141682af0(uVar1,local_28,0);
  FString::ToLower(local_28,param_1 + 0x12d);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  FNetworkDemoHeader::FNetworkDemoHeader(param_1 + 0x12f);
  *(undefined4 *)(param_1 + 0x13c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x9e4) = 0;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  param_1[0x147] = 0;
  param_1[0x148] = 0;
  *(undefined4 *)(param_1 + 0x149) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa4c) = 0;
  param_1[0x14b] = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  param_1[0x14d] = 0;
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  param_1[0x150] = 0;
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  *(undefined4 *)(param_1 + 0x155) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xaac) = 0;
  param_1[0x157] = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  param_1[0x159] = 0;
  param_1[0x15a] = 0;
  param_1[0x15d] = 0;
  param_1[0x15e] = 0;
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  *(undefined4 *)(param_1 + 0x163) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb1c) = 0;
  param_1[0x165] = 0;
  *(undefined4 *)(param_1 + 0x166) = 0;
  param_1[0x167] = 0;
  param_1[0x168] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  *(undefined4 *)(param_1 + 0xab) = 0;
  *(undefined1 *)(param_1 + 0x113) = 0;
  *(undefined2 *)(param_1 + 0x16c) = 0;
  return param_1;
}



// FUNCTION 1424045f0 UDemoPendingNetGame body=44 status=ok
// SIG undefined UDemoPendingNetGame(void)

undefined8 * UDemoPendingNetGame::UDemoPendingNetGame(undefined8 *param_1)

{
  UPendingNetGame::UPendingNetGame();
  *param_1 = &PTR__scalar_deleting_destructor__145095450;
  param_1[5] = &PTR_GetPoolName_1450956e8;
  return param_1;
}



// FUNCTION 142404620 UDeveloperSettings body=55 status=ok
// SIG undefined UDeveloperSettings(void)

undefined8 * UDeveloperSettings::UDeveloperSettings(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_145093088;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 142404660 UDeviceProfile body=400 status=ok
// SIG undefined UDeviceProfile(void)

undefined8 * UDeviceProfile::UDeviceProfile(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong local_28;
  int local_20;
  int local_1c;
  longlong local_18 [2];
  
  UGameplayTagsDeveloperSettings::UGameplayTagsDeveloperSettings();
  iVar4 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145095768;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (((undefined *)param_1[9] != &DAT_1450897ac) &&
     (*(undefined4 *)(param_1 + 10) = 0, *(int *)((longlong)param_1 + 0x54) < 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 9);
  }
  if ((undefined *)param_1[7] != &DAT_14508987c) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)((longlong)param_1 + 0x44) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 7);
      iVar4 = *(int *)(param_1 + 8);
    }
    *(int *)(param_1 + 8) = iVar4;
    if (*(int *)((longlong)param_1 + 0x44) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 7);
    }
  }
  *(undefined1 *)(param_1 + 0xc) = 1;
  plVar2 = (longlong *)FPaths::EngineConfigDir(local_18);
  lVar3 = plVar2[1];
  local_28 = *plVar2;
  *plVar2 = 0;
  local_20 = (int)plVar2[1];
  local_1c = *(int *)((longlong)plVar2 + 0xc);
  plVar2[1] = 0;
  iVar4 = local_20;
  if (local_1c < (int)((0x13 - (uint)((int)lVar3 != 0)) + local_20)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo();
    iVar4 = local_20;
  }
  local_20 = (0x13 - (uint)(iVar4 != 0)) + iVar4;
  if (local_1c < local_20) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar4);
  }
  lVar1 = local_28;
  lVar3 = (longlong)iVar4 - (ulonglong)(iVar4 != 0);
  builtin_wcsncpy((wchar_t *)(local_28 + lVar3 * 2),L"Devicepr",8);
  lVar3 = local_28 + lVar3 * 2;
  ((wchar_t *)(lVar3 + 0x10))[0] = L'o';
  ((wchar_t *)(lVar3 + 0x10))[1] = L'f';
  ((wchar_t *)(lVar3 + 0x14))[0] = L'i';
  ((wchar_t *)(lVar3 + 0x14))[1] = L'l';
  ((wchar_t *)(lVar3 + 0x18))[0] = L'e';
  ((wchar_t *)(lVar3 + 0x18))[1] = L's';
  ((wchar_t *)(lVar3 + 0x1c))[0] = L'.';
  ((wchar_t *)(lVar3 + 0x1c))[1] = L'i';
  *(undefined4 *)(lVar3 + 0x20) = 0x69006e;
  *(undefined2 *)(lVar3 + 0x24) = 0;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  return param_1;
}



// FUNCTION 1424047f0 UDialogueSoundWaveProxy body=49 status=ok
// SIG undefined UDialogueSoundWaveProxy(void)

undefined8 * UDialogueSoundWaveProxy::UDialogueSoundWaveProxy(undefined8 *param_1)

{
  USoundBase::USoundBase();
  *param_1 = &PTR__scalar_deleting_destructor__145095ed0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return param_1;
}



// FUNCTION 142404830 UDialogueVoice body=42 status=ok
// SIG undefined UDialogueVoice(void)

undefined8 * UDialogueVoice::UDialogueVoice(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_1450959e0;
  FGuid::NewGuid((longlong)param_1 + 0x2c);
  return param_1;
}



// FUNCTION 142404860 UDialogueWave body=304 status=ok
// SIG undefined UDialogueWave(void)

undefined8 * UDialogueWave::UDialogueWave(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__145095c58;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FGuid::NewGuid(param_1 + 0xc);
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffd;
  local_38 = 1;
  puStack_40 = (undefined8 *)0x0;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&puStack_40,0);
  local_20 = 0xe;
  local_30 = 0;
  uStack_28 = 0;
  *puStack_40 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&uStack_28,0);
  uVar2 = uStack_28;
  FGenericPlatformString::Memcpy(uStack_28,L"{ContextHash}",0x1c);
  iVar1 = *(int *)(param_1 + 0xb);
  *(int *)(param_1 + 0xb) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x5c) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 10,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x38 + param_1[10]);
  *puVar3 = 0;
  puVar3[1] = puStack_40;
  *(undefined4 *)(puVar3 + 2) = (undefined4)local_38;
  *(undefined4 *)((longlong)puVar3 + 0x14) = local_38._4_4_;
  puVar3[3] = local_30;
  puVar3[4] = uVar2;
  *(undefined4 *)(puVar3 + 5) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = local_20._4_4_;
  puVar3[6] = 0;
  return param_1;
}



// FUNCTION 142404990 UDemoPendingNetGame body=44 status=ok
// SIG undefined UDemoPendingNetGame(void)

undefined8 * UDemoPendingNetGame::UDemoPendingNetGame(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_145096218;
  param_1[5] = &PTR_GetPoolName_1440124c0;
  return param_1;
}



// FUNCTION 1424049c0 FUN_1424049c0 body=52 status=ok
// SIG undefined FUN_1424049c0(void)

undefined8 * FUN_1424049c0(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xfffffffe;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
  *param_1 = &PTR_FUN_1450969e8;
  param_1[5] = &PTR_SetMonitoring_145096c90;
  return param_1;
}



// FUNCTION 142404a00 FUN_142404a00 body=65 status=ok
// SIG undefined FUN_142404a00(void)

undefined8 * FUN_142404a00(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xfffffffe;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
  *param_1 = &PTR__scalar_deleting_destructor__145098348;
  param_1[5] = &PTR_Count_1450985f0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 142404a50 FUN_142404a50 body=72 status=ok
// SIG undefined FUN_142404a50(void)

undefined8 * FUN_142404a50(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xfffffffe;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
  *param_1 = &PTR_FUN_145098678;
  param_1[5] = &PTR_SetMonitoring_145096c90;
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f800000;
  return param_1;
}



// FUNCTION 142404aa0 FUN_142404aa0 body=52 status=ok
// SIG undefined FUN_142404aa0(void)

undefined8 * FUN_142404aa0(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xfffffffe;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
  *param_1 = &PTR_FUN_145096d18;
  param_1[5] = &PTR_SetMonitoring_145096fc0;
  return param_1;
}



// FUNCTION 142404ae0 FUN_142404ae0 body=65 status=ok
// SIG undefined FUN_142404ae0(void)

undefined8 * FUN_142404ae0(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xfffffffe;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
  *param_1 = &PTR__scalar_deleting_destructor__145098010;
  param_1[5] = &PTR_Count_1450982c0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 142404b30 FUN_142404b30 body=52 status=ok
// SIG undefined FUN_142404b30(void)

undefined8 * FUN_142404b30(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xfffffffe;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
  *param_1 = &PTR_FUN_145097048;
  param_1[5] = &PTR_SetMonitoring_1450972f8;
  return param_1;
}



// FUNCTION 142404b70 FUN_142404b70 body=65 status=ok
// SIG undefined FUN_142404b70(void)

undefined8 * FUN_142404b70(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xfffffffe;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
  *param_1 = &PTR__scalar_deleting_destructor__145097980;
  param_1[5] = &PTR_Count_145097c30;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 142404bc0 FUN_142404bc0 body=121 status=ok
// SIG undefined FUN_142404bc0(void)

undefined8 * FUN_142404bc0(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xfffffffe;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
  *param_1 = &PTR_FUN_1450976c8;
  param_1[5] = &PTR_SetMonitoring_1450972f8;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0x3f8000003f800000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0x3f8000003f800000;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3f800000;
  return param_1;
}



// FUNCTION 142404c40 FUN_142404c40 body=66 status=ok
// SIG undefined FUN_142404c40(void)

undefined8 * FUN_142404c40(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xfffffffe;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
  *param_1 = &PTR_FUN_145097380;
  param_1[5] = &PTR_SetMonitoring_145097640;
  *(undefined2 *)((longlong)param_1 + 0x55) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x57) = 1;
  *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) & 0xfffffffe;
  return param_1;
}



// FUNCTION 142404c90 FUN_142404c90 body=84 status=ok
// SIG undefined FUN_142404c90(void)

undefined8 * FUN_142404c90(undefined8 *param_1)

{
  FUN_141781840();
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xfffffffe;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 2;
  *param_1 = &PTR__scalar_deleting_destructor__145097cb8;
  param_1[5] = &PTR_Count_145097f88;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(uint *)(param_1 + 10) = *(uint *)(param_1 + 10) & 0xfffffffc;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x1010000;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(uint *)((longlong)param_1 + 0x5c) = *(uint *)((longlong)param_1 + 0x5c) & 0xfffffffe;
  return param_1;
}



// FUNCTION 142404cf0 FUN_142404cf0 body=109 status=ok
// SIG undefined FUN_142404cf0(void)

void FUN_142404cf0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 8);
    do {
      if (plVar2[3] != 0) {
        FMemory::Free();
      }
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



// FUNCTION 142404d60 ~TArray<FPlaybackPacket,FDefaultAllocator> body=86 status=ok
// SIG undefined ~TArray<FPlaybackPacket,FDefaultAllocator>(void)

void TArray<FPlaybackPacket,FDefaultAllocator>::~TArray<FPlaybackPacket,FDefaultAllocator>
               (undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 142404dc0 ~TGlobalResource<FDistanceFieldVolumeTextureAtlas> body=97 status=ok
// SIG undefined ~TGlobalResource<FDistanceFieldVolumeTextureAtlas>(void)

void TGlobalResource<FDistanceFieldVolumeTextureAtlas>::
     ~TGlobalResource<FDistanceFieldVolumeTextureAtlas>(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145092f88;
  FRenderResource::ReleaseResource();
  if (param_1[0x1d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  FUN_141edd2d0(param_1);
  return;
}



// FUNCTION 142404e30 ~TIndirectArray<FReplayExternalData,FDefaultAllocator> body=158 status=ok
// SIG undefined ~TIndirectArray<FReplayExternalData,FDefaultAllocator>(void)

void TIndirectArray<FReplayExternalData,FDefaultAllocator>::
     ~TIndirectArray<FReplayExternalData,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  plVar2 = (longlong *)*param_1;
  for (iVar3 = (int)param_1[1]; iVar3 != 0; iVar3 = iVar3 + -1) {
    lVar1 = *plVar2;
    if (*(longlong *)(lVar1 + 0x90) != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(lVar1);
    FMemory::Free(*plVar2);
    plVar2 = plVar2 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142404ed0 ~TOptional<FActorIteratorState> body=70 status=ok
// SIG undefined ~TOptional<FActorIteratorState>(void)

void TOptional<FActorIteratorState>::~TOptional<FActorIteratorState>(undefined8 *param_1)

{
  if (*(char *)(param_1 + 10) != '\0') {
    *(undefined1 *)(param_1 + 10) = 0;
    UWorld::RemoveOnActorSpawnedHandler(*param_1,param_1[9]);
    if (param_1[6] != 0) {
      FMemory::Free();
    }
    if (param_1[1] != 0) {
      FMemory::Free();
      return;
    }
  }
  return;
}



// FUNCTION 142404f20 ~TSparseArray<TSetElement<TTuple<FString,FRollbackNetStartupActorInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=451 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FString,FRollbackNetStartupActorInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FString,FRollbackNetStartupActorInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FString,FRollbackNetStartupActorInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint *puVar8;
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
  local_58 = 0;
  uStack_54 = 1;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar3 = *puVar8;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar7 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar7;
      if (bVar4) goto LAB_142404fe1;
      uVar3 = puVar8[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
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
    if (iVar2 < iStack_44) {
LAB_142404fe1:
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
      plVar6 = (longlong *)((longlong)iStack_1c * 0xb8 + *param_1);
      FUN_142405280(plVar6 + 2);
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FOnlineSessionSearchResult,FDefaultAllocator>::ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1424050f0 FUN_1424050f0 body=105 status=ok
// SIG undefined FUN_1424050f0(void)

void FUN_1424050f0(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468509e4) {
    _Init_thread_header(&DAT_1468509e4);
    if (DAT_1468509e4 == -1) {
      uVar1 = FCommandLine::Get();
      DAT_1468509e0 = FParse::Param(uVar1,L"nullrhi");
      _Init_thread_footer(&DAT_1468509e4);
    }
  }
  return;
}



// FUNCTION 142405160 ~FNetworkDemoHeader body=151 status=ok
// SIG undefined ~FNetworkDemoHeader(void)

void FNetworkDemoHeader::~FNetworkDemoHeader(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
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
      plVar1 = plVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x40);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142405200 ~FPackageMapAckState body=127 status=ok
// SIG undefined ~FPackageMapAckState(void)

void FPackageMapAckState::~FPackageMapAckState(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}



// FUNCTION 142405280 FUN_142405280 body=132 status=ok
// SIG undefined FUN_142405280(void)

void FUN_142405280(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<TSharedRef<FUniqueNetId_const_,0>,TSharedRef<FOnlineUserStatsPair<FVariantData>,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x40);
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
  return;
}



// FUNCTION 142405310 FUN_142405310 body=1126 status=ok
// SIG undefined FUN_142405310(void)

void FUN_142405310(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0xb68) != 0) {
    FMemory::Free();
  }
  iVar4 = *(int *)(param_1 + 0xb58);
  plVar5 = *(longlong **)(param_1 + 0xb50);
  if (iVar4 != 0) {
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    plVar5 = *(longlong **)(param_1 + 0xb50);
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  if (*(longlong *)(param_1 + 0xb38) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xb30) = 0;
  if (*(longlong *)(param_1 + 0xb28) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<ULevel_*,TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xae8,0);
  if (*(longlong *)(param_1 + 0xb08) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xae8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xac8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xac0) = 0;
  if (*(longlong *)(param_1 + 0xab8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,AHomeCharacter_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xa78,0);
  if (*(longlong *)(param_1 + 0xa98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa78) != 0) {
    FMemory::Free();
  }
  iVar4 = *(int *)(param_1 + 0xa70);
  plVar5 = *(longlong **)(param_1 + 0xa68);
  if (iVar4 != 0) {
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    plVar5 = *(longlong **)(param_1 + 0xa68);
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  *(undefined4 *)(param_1 + 0xa60) = 0;
  if (*(longlong *)(param_1 + 0xa58) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<FNetworkGUID>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xa18);
  iVar4 = *(int *)(param_1 + 0xa08);
  plVar5 = *(longlong **)(param_1 + 0xa00);
  if (iVar4 != 0) {
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    plVar5 = *(longlong **)(param_1 + 0xa00);
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  if (*(longlong *)(param_1 + 0x9e8) != 0) {
    FMemory::Free();
  }
  FNetworkDemoHeader::~FNetworkDemoHeader(param_1 + 0x978);
  if (*(longlong *)(param_1 + 0x968) != 0) {
    FMemory::Free();
  }
  FURL::~FURL(param_1 + 0x8f8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x8e0);
  plVar5 = *(longlong **)(param_1 + 0x8d8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  plVar5 = *(longlong **)(param_1 + 0x8c8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x8b0);
  if (*(longlong *)(param_1 + 0x8a0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x890) = 0;
  if (*(longlong *)(param_1 + 0x888) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x848);
  *(undefined4 *)(param_1 + 0x840) = 0;
  if (*(longlong *)(param_1 + 0x838) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x7f8);
  iVar4 = *(int *)(param_1 + 0x7f0);
  plVar5 = *(longlong **)(param_1 + 0x7e8);
  if (iVar4 != 0) {
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    plVar5 = *(longlong **)(param_1 + 0x7e8);
  }
  if (plVar5 != (longlong *)0x0) {
    FMemory::Free(plVar5);
  }
  *(undefined4 *)(param_1 + 0x7e0) = 0;
  if (*(longlong *)(param_1 + 0x7d8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FNetworkGUID,TIndirectArray<FReplayExternalData,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x798,0);
  if (*(longlong *)(param_1 + 0x7b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x798) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x780);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x768);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x750);
  FPackageMapAckState::~FPackageMapAckState(param_1 + 0x648);
  *(undefined4 *)(param_1 + 0x640) = 0;
  if (*(longlong *)(param_1 + 0x638) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FRollbackNetStartupActorInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FRollbackNetStartupActorInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x5f8);
  *(undefined4 *)(param_1 + 0x5f0) = 0;
  if (*(longlong *)(param_1 + 0x5e8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x5a8,0);
  if (*(longlong *)(param_1 + 0x5c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x598) != 0) {
    FMemory::Free();
  }
  plVar5 = *(longlong **)(param_1 + 0x570);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  FUN_1404bfe50(param_1);
  return;
}



// FUNCTION 142405780 operator= body=188 status=ok
// SIG undefined operator=(void)

longlong *
TArray<FLevelNameAndTime,FDefaultAllocator>::operator=(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_1 != param_2) {
    plVar2 = (longlong *)*param_1;
    for (iVar4 = (int)param_1[1]; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 3;
    }
    iVar4 = (int)param_2[1];
    lVar3 = *param_2;
    *(int *)(param_1 + 1) = iVar4;
    if ((iVar4 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1,iVar4);
      lVar5 = *param_1;
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        FString::FString(lVar5,lVar3);
        puVar1 = (undefined4 *)(lVar3 + 0x10);
        lVar3 = lVar3 + 0x18;
        *(undefined4 *)(lVar5 + 0x10) = *puVar1;
        lVar5 = lVar5 + 0x18;
      }
    }
  }
  return param_1;
}



// FUNCTION 142405840 operator= body=502 status=ok
// SIG undefined operator=(void)

longlong *
TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::operator=
          (longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  uint local_48;
  undefined4 uStack_44;
  longlong *local_40;
  uint uStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  if (param_1 != param_2) {
    uVar7 = 0;
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != iVar9) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,iVar9);
    }
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    uVar3 = iVar9 + 0x1f + (iVar9 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
    if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
      *(uint *)((longlong)param_1 + 0x2c) = uVar3;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 2,0);
    }
    cVar2 = TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::ConditionalRehash
                      (param_1,iVar9,1);
    if ((cVar2 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
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
    puStack_30 = (uint *)(param_2 + 2);
    local_68 = 0;
    uStack_64 = 1;
    local_58._4_4_ = 0;
    uStack_50 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_30;
      }
      uVar3 = *puVar11;
      uVar8 = uVar7;
      while (uVar3 == 0) {
        iVar4 = (int)uVar8;
        uStack_50 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_50;
        local_68 = iVar4 + 1;
        uVar8 = (ulonglong)local_68;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_14240599b;
        uVar3 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_64 = -uVar3 & uVar3;
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
      if (iVar9 < local_58._4_4_) {
LAB_14240599b:
        local_58._4_4_ = iVar9;
      }
    }
    uStack_38 = local_68;
    uStack_34 = uStack_64;
    uStack_28 = 0xffffffff;
    iStack_24 = local_58._4_4_;
    uStack_20 = uStack_50;
    uStack_1c = iStack_4c;
    uStack_60 = local_68;
    uStack_5c = uStack_64;
    local_48 = uStack_50;
    uStack_44 = iStack_4c;
    uStack_50 = 0xffffffff;
    iStack_4c = local_58._4_4_;
    bVar1 = local_58._4_4_ < iVar9;
    local_40 = param_2;
    local_58 = puStack_30;
    if (bVar1) {
      do {
        FUN_141b1d480(param_1,local_res8,(longlong)iStack_4c * 0x10 + *param_2,0);
        uStack_50 = uStack_50 & ~uStack_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
      } while (iStack_4c < (int)local_58[6]);
    }
  }
  return param_1;
}



// FUNCTION 142405a40 operator= body=669 status=ok
// SIG undefined operator=(void)

longlong *
TSparseArray<TSetElement<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
::operator=(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
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
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar2 = *puVar7;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar2 == 0) {
        lVar6 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar4 = local_78 + 1;
        bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar4;
        if (bVar3) goto LAB_142405b1d;
        uVar2 = puVar7[lVar6 + 1];
      }
      uStack_74 = -uVar2 & uVar2;
      iVar4 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (iStack_60 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_142405b1d:
        uStack_64 = uVar1;
      }
    }
    uVar2 = *(uint *)(param_1 + 5);
    local_40 = 0xffffffff;
    uStack_3c = uStack_64;
    uStack_38 = CONCAT44(uStack_5c,iStack_60);
    uVar8 = uVar2 & 0xffffffe0;
    local_50 = local_78;
    uStack_4c = uStack_74;
    puStack_48 = _Dst;
    uStack_64 = uVar2;
    if (uVar2 != uVar1) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar5 = puVar7[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
      iVar4 = (int)uVar2 >> 5;
      while (uVar5 == 0) {
        uVar8 = uVar8 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_142405bd3;
        uVar5 = puVar7[(longlong)iVar4 + 1];
        iVar4 = iVar4 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar4 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar5 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (uVar8 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_142405bd3:
        uStack_64 = uVar1;
      }
    }
    while ((uStack_3c != uStack_64 || (puStack_48 != _Dst))) {
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                (*param_1 + (longlong)(int)uStack_3c * 0x28);
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



// FUNCTION 142405ce0 operator= body=174 status=ok
// SIG undefined operator=(void)

undefined1 * FDistributionLookupTable::operator=(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  puVar1 = (undefined8 *)(param_1 + 0x10);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  if (puVar1 != (undefined8 *)(param_2 + 0x10)) {
    iVar2 = *(int *)(param_2 + 0x18);
    _Src = *(void **)(param_2 + 0x10);
    *(int *)(param_1 + 0x18) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x1c) == 0)) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    else {
      TArray<int,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 2);
    }
  }
  param_1[0x20] = param_2[0x20];
  return param_1;
}



// FUNCTION 142405d90 operator= body=363 status=ok
// SIG undefined operator=(void)

undefined4 * FNetworkDemoHeader::operator=(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  
  plVar4 = (longlong *)(param_2 + 10);
  *param_1 = *param_2;
  plVar1 = (longlong *)(param_1 + 10);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  param_1[8] = param_2[8];
  if (plVar1 != plVar4) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar4;
    *plVar4 = 0;
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    *(undefined8 *)(param_2 + 0xc) = 0;
  }
  puVar2 = (undefined8 *)(param_2 + 0x10);
  puVar3 = (undefined8 *)(param_1 + 0x10);
  param_1[0xe] = param_2[0xe];
  if (puVar3 != puVar2) {
    iVar5 = param_1[0x12];
    plVar4 = (longlong *)*puVar3;
    if (iVar5 != 0) {
      do {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 3;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      plVar4 = (longlong *)*puVar3;
    }
    if (plVar4 != (longlong *)0x0) {
      FMemory::Free(plVar4);
    }
    *puVar3 = *puVar2;
    *puVar2 = 0;
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    *(undefined8 *)(param_2 + 0x12) = 0;
  }
  puVar2 = (undefined8 *)(param_2 + 0x14);
  puVar3 = (undefined8 *)(param_1 + 0x14);
  if (puVar3 != puVar2) {
    iVar5 = param_1[0x16];
    plVar4 = (longlong *)*puVar3;
    if (iVar5 != 0) {
      do {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      plVar4 = (longlong *)*puVar3;
    }
    if (plVar4 != (longlong *)0x0) {
      FMemory::Free(plVar4);
    }
    *puVar3 = *puVar2;
    *puVar2 = 0;
    param_1[0x16] = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    *(undefined8 *)(param_2 + 0x16) = 0;
  }
  return param_1;
}



// FUNCTION 142405f00 operator= body=163 status=ok
// SIG undefined operator=(void)

undefined4 * FTextureLayout3d::operator=(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((longlong)param_1 + 0xd) = *(undefined1 *)((longlong)param_2 + 0xd);
  if (param_1 + 4 != param_2 + 4) {
    if (*(longlong *)(param_2 + 0x22) == 0) {
      ::_guard_xfg_dispatch_icall_nop(param_1 + 4,param_2 + 4,0x78);
    }
    if (*(longlong *)(param_1 + 0x22) != 0) {
      FMemory::Free();
    }
    *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
    *(undefined8 *)(param_2 + 0x22) = 0;
    param_1[0x24] = param_2[0x24];
    param_1[0x25] = param_2[0x25];
    *(undefined8 *)(param_2 + 0x24) = 0;
  }
  return param_1;
}



// FUNCTION 142405fb0 operator= body=200 status=ok
// SIG undefined operator=(void)

longlong FURL::operator=(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  
  FString::operator=();
  FString::operator=(param_1 + 0x10,param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  FString::operator=(param_1 + 0x28,param_2 + 0x28);
  FString::operator=(param_1 + 0x38,param_2 + 0x38);
  puVar1 = (undefined8 *)(param_1 + 0x48);
  if (puVar1 != (undefined8 *)(param_2 + 0x48)) {
    plVar2 = (longlong *)*puVar1;
    for (iVar3 = *(int *)(param_1 + 0x50); iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    TArray<FString,FDefaultAllocator>::CopyToEmpty<FString>
              (puVar1,*(undefined8 *)(param_2 + 0x48),*(undefined4 *)(param_2 + 0x50),
               *(undefined4 *)(param_1 + 0x54),0);
  }
  FString::operator=(param_1 + 0x58,param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  return param_1;
}



// FUNCTION 142406080 FUN_142406080 body=122 status=ok
// SIG undefined FUN_142406080(void)

longlong * FUN_142406080(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  FUN_14158ce90();
  puVar1 = *(undefined4 **)param_1[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_1[1])[1]) {
    *(undefined4 *)(param_2 + 0x10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x10,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 0x10,4);
  }
  return param_1;
}



// FUNCTION 142406100 FUN_142406100 body=1172 status=ok
// SIG undefined FUN_142406100(void)

longlong * FUN_142406100(longlong *param_1,int *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  void *pvVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined4 local_res8;
  longlong *local_58;
  ulonglong local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  
  piVar4 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar4 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,4);
    }
  }
  else {
    *param_2 = *piVar4;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if (*param_2 != 0x2cf5a13d) {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x80;
    return param_1;
  }
  puVar1 = (uint *)(param_2 + 1);
  puVar5 = *(uint **)param_1[1];
  if ((uint *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,puVar1,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,puVar1,4);
    }
  }
  else {
    *puVar1 = *puVar5;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if (4 < *puVar1) {
    piVar4 = *(int **)param_1[1];
    if ((int *)((undefined8 *)param_1[1])[1] < piVar4 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 2,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2 + 2,4);
      }
    }
    else {
      param_2[2] = *piVar4;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    piVar4 = *(int **)param_1[1];
    if ((int *)((undefined8 *)param_1[1])[1] < piVar4 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 3,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2 + 3,4);
      }
    }
    else {
      param_2[3] = *piVar4;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    piVar4 = *(int **)param_1[1];
    if ((int *)((undefined8 *)param_1[1])[1] < piVar4 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 4,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2 + 4,4);
      }
    }
    else {
      param_2[4] = *piVar4;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    pvVar9 = (void *)0x0;
    if (*puVar1 < 0xb) {
      piVar4 = *(int **)param_1[1];
      if ((int *)((undefined8 *)param_1[1])[1] < piVar4 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,param_2 + 5,4);
        if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_1,param_2 + 5,4);
        }
      }
      else {
        param_2[5] = *piVar4;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        local_58 = (longlong *)0x0;
        local_50 = 0;
        FEngineVersion::Set(param_2 + 6,0,0,0,param_2[5],&local_58);
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
    }
    else {
      operator<<(param_1,param_2 + 6);
    }
    if (*puVar1 < 6) {
      local_58 = (longlong *)0x0;
      local_50 = 0;
      FUN_14158ce90(param_1,&local_58);
      plVar10 = local_58;
      lVar13 = (longlong)(int)(uint)local_50;
      local_48 = (void *)0x0;
      local_40 = (uint)local_50;
      if ((uint)local_50 == 0) {
        local_res8 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_50 & 0xffffffff,0);
        pvVar9 = local_48;
        _guard_xfg_dispatch_icall_nop(local_48,plVar10,lVar13 * 2);
        local_res8 = local_3c;
      }
      iVar8 = local_40;
      iVar3 = param_2[0x12];
      lVar13 = (longlong)iVar3;
      param_2[0x12] = iVar3 + 1;
      if (param_2[0x13] < iVar3 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_2 + 0x10,iVar3);
      }
      lVar6 = *(longlong *)(param_2 + 0x10);
      *(void **)(lVar6 + lVar13 * 0x18) = pvVar9;
      *(int *)(lVar6 + 8 + lVar13 * 0x18) = iVar8;
      *(undefined4 *)(lVar6 + 0xc + lVar13 * 0x18) = local_res8;
      *(undefined4 *)(lVar6 + 0x10 + lVar13 * 0x18) = 0;
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    else if (*puVar1 == 6) {
      local_58 = (longlong *)0x0;
      local_50 = 0;
      FUN_1415a1810(param_1,&local_58);
      uVar12 = (uint)local_50;
      uVar14 = (ulonglong)(int)(uint)local_50;
      plVar11 = local_58 + uVar14 * 2;
      for (plVar10 = local_58; plVar7 = local_58, plVar10 != plVar11; plVar10 = plVar10 + 2) {
        FString::FString(&local_48,plVar10);
        iVar3 = param_2[0x12];
        param_2[0x12] = iVar3 + 1;
        if (param_2[0x13] < iVar3 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2 + 0x10,iVar3);
        }
        puVar2 = (undefined8 *)(*(longlong *)(param_2 + 0x10) + (longlong)iVar3 * 0x18);
        *puVar2 = local_48;
        *(int *)(puVar2 + 1) = local_40;
        *(undefined4 *)((longlong)puVar2 + 0xc) = local_3c;
        *(undefined4 *)(puVar2 + 2) = 0;
      }
      while (uVar12 != 0) {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        uVar12 = (int)uVar14 - 1;
        uVar14 = (ulonglong)uVar12;
        plVar7 = plVar7 + 2;
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free(local_58);
      }
    }
    else {
      FUN_1424065a0(param_1,param_2 + 0x10);
    }
    if (8 < (uint)param_2[1]) {
      piVar4 = *(int **)param_1[1];
      if ((int *)((undefined8 *)param_1[1])[1] < piVar4 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0xe,4);
        if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_1,param_2 + 0xe,4);
        }
      }
      else {
        param_2[0xe] = *piVar4;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
    }
    FUN_1415a1810(param_1,param_2 + 0x14);
    return param_1;
  }
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 0x80;
  return param_1;
}



// FUNCTION 1424065a0 FUN_1424065a0 body=457 status=ok
// SIG undefined FUN_1424065a0(void)

longlong * FUN_1424065a0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  puVar5 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar8 = (longlong *)param_1[1];
  if ((int *)plVar8[1] < (int *)*plVar8 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar8;
    *plVar8 = *plVar8 + 4;
  }
  iVar3 = local_res8[0];
  bVar2 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar2) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0xaaaab)))) {
    if ((bVar2 & 1) != 0) {
      plVar8 = (longlong *)*param_2;
      for (iVar6 = (int)param_2[1]; iVar6 != 0; iVar6 = iVar6 + -1) {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 3;
      }
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                  (param_2,iVar3);
      }
      puVar9 = puVar5;
      if (0 < local_res8[0]) {
        do {
          iVar3 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar3 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(param_2,iVar3);
          }
          puVar1 = (undefined8 *)(*param_2 + (longlong)iVar3 * 0x18);
          puVar4 = puVar5;
          if (puVar1 != (undefined8 *)0x0) {
            *puVar1 = 0;
            puVar1[1] = 0;
            *(undefined4 *)(puVar1 + 2) = 0;
            puVar4 = puVar1;
          }
          FUN_142406080(param_1,puVar4);
          uVar7 = (int)puVar9 + 1;
          puVar9 = (undefined8 *)(ulonglong)uVar7;
        } while ((int)uVar7 < local_res8[0]);
      }
      return param_1;
    }
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_142406080(param_1,*param_2 + (longlong)(int)puVar5 * 0x18);
        uVar7 = (int)puVar5 + 1;
        puVar5 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar2 | 0x80;
  return param_1;
}



// FUNCTION 142406770 operator<< body=88 status=ok
// SIG undefined operator<<(void)

longlong operator<<(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_1424067d0();
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      uVar1 = FMemory::Realloc(*(longlong *)(param_2 + 0x40),0,0);
      *(undefined8 *)(param_2 + 0x40) = uVar1;
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::ConditionalRehash
              (param_2,*(int *)(param_2 + 8) - *(int *)(param_2 + 0x34),0);
  }
  return param_1;
}


