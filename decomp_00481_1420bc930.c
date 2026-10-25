// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1420bc930 ReloadTextureResources body=92 status=ok
// SIG undefined ReloadTextureResources(void)

void FSlateRHIRenderer::ReloadTextureResources(longlong param_1)

{
  undefined8 uVar1;
  longlong local_18 [2];
  
  uVar1 = *(undefined8 *)(param_1 + 0x200);
  FUN_1420bc490(uVar1);
  FUN_141ee24f0(0);
  FUN_1420a9200(uVar1);
  local_18[0] = 0;
  local_18[1] = 0;
  FSlateStyleRegistry::GetAllResources(local_18);
  FSlateRHIResourceManager::CreateTextures(uVar1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1420bc990 FUN_1420bc990 body=422 status=ok
// SIG undefined FUN_1420bc990(void)

undefined8 FUN_1420bc990(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar6 = GetTypeHash(param_2);
  lVar9 = (longlong)(int)((int)param_1[9] - 1U & uVar6);
  plVar7 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar7 = param_1 + 7;
  }
  piVar8 = (int *)((longlong)plVar7 + lVar9 * 4);
  iVar2 = *(int *)((longlong)plVar7 + lVar9 * 4);
  while( true ) {
    if (iVar2 == -1) {
      return 0;
    }
    lVar9 = (longlong)iVar2 * 0x30 + *param_1;
    cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar9,param_2);
    if ((((cVar5 != '\0') && (*(float *)(param_2 + 8) == *(float *)(lVar9 + 8))) &&
        (*(float *)(param_2 + 0xc) == *(float *)(lVar9 + 0xc))) &&
       (*(int *)(lVar9 + 0x10) == *(int *)(param_2 + 0x10))) break;
    iVar2 = *(int *)(lVar9 + 0x28);
    piVar8 = (int *)(lVar9 + 0x28);
  }
  iVar2 = *piVar8;
  lVar9 = (longlong)iVar2;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar4 = *param_1;
    lVar10 = (longlong)(int)(*(uint *)(lVar4 + 0x2c + lVar9 * 0x30) & (int)param_1[9] - 1U);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    piVar8 = (int *)((longlong)plVar7 + lVar10 * 4);
    iVar3 = *(int *)((longlong)plVar7 + lVar10 * 4);
    while (iVar3 != -1) {
      if (iVar3 == iVar2) {
        *piVar8 = *(int *)(lVar4 + 0x28 + lVar9 * 0x30);
        break;
      }
      piVar8 = (int *)((longlong)iVar3 * 0x30 + 0x28 + lVar4);
      iVar3 = *piVar8;
    }
  }
  plVar7 = *(longlong **)(lVar9 * 0x30 + *param_1 + 0x20);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar8 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar2,1);
  return 1;
}



// FUNCTION 1420bcb40 FUN_1420bcb40 body=233 status=ok
// SIG undefined FUN_1420bcb40(void)

void FUN_1420bcb40(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  
  lVar7 = (longlong)param_2;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar3 = *param_1;
    lVar5 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar3 + 0x2c + lVar7 * 0x30));
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    piVar6 = (int *)((longlong)plVar4 + lVar5 * 4);
    iVar2 = *(int *)((longlong)plVar4 + lVar5 * 4);
    while (iVar2 != -1) {
      if (iVar2 == param_2) {
        *piVar6 = *(int *)(lVar3 + 0x28 + lVar7 * 0x30);
        break;
      }
      piVar6 = (int *)(lVar3 + 0x28 + (longlong)iVar2 * 0x30);
      iVar2 = *piVar6;
    }
  }
  plVar4 = *(longlong **)(lVar7 * 0x30 + *param_1 + 0x20);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar6 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  TSparseArray<TSetElement<TTuple<FName,FOnlineSessionSearchParam>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 1420bcc30 Remove body=311 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FName,FNewTextureInfo>,TDefaultMapHashableKeyFuncs<FName,FNewTextureInfo,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  uVar10 = (longlong)(int)param_1[9] - 1;
  plVar9 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar9 = param_1 + 7;
  }
  iVar7 = *(int *)((longlong)plVar9 +
                  ((longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) & uVar10) * 4);
  if (iVar7 != -1) {
    lVar6 = *param_1;
    do {
      lVar8 = (longlong)iVar7;
      if (*(longlong *)(lVar6 + lVar8 * 0x28) == param_2) {
        lVar8 = lVar8 * 0x28;
        uVar10 = (longlong)*(int *)(lVar8 + 0x24 + lVar6) & uVar10;
        puVar4 = (undefined4 *)((longlong)plVar9 + uVar10 * 4);
        iVar5 = *(int *)((longlong)plVar9 + uVar10 * 4);
        goto joined_r0x0001420bcccd;
      }
      iVar7 = *(int *)(lVar6 + 0x20 + lVar8 * 0x28);
    } while (iVar7 != -1);
  }
  return 0;
joined_r0x0001420bcccd:
  if (iVar5 == -1) {
LAB_1420bccf2:
    plVar9 = *(longlong **)(lVar8 + 0x10 + *param_1);
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
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar7,1);
    return 1;
  }
  if (iVar5 == iVar7) {
    *puVar4 = *(undefined4 *)(lVar8 + lVar6 + 0x20);
    goto LAB_1420bccf2;
  }
  lVar3 = (longlong)iVar5 * 5 + 4;
  iVar5 = *(int *)(lVar6 + lVar3 * 8);
  puVar4 = (undefined4 *)(lVar6 + lVar3 * 8);
  goto joined_r0x0001420bcccd;
}



// FUNCTION 1420bcd70 FUN_1420bcd70 body=171 status=ok
// SIG undefined FUN_1420bcd70(void)

void FUN_1420bcd70(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*param_2 != 0) {
    plVar5 = (longlong *)(((ulonglong)*(byte *)(param_1 + 0x1e8) + 0x22) * 0x10 + param_1);
    iVar3 = (int)plVar5[1];
    *(int *)(plVar5 + 1) = iVar3 + 1;
    if (*(int *)((longlong)plVar5 + 0xc) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar5,iVar3);
    }
    plVar5 = (longlong *)((longlong)iVar3 * 0x10 + *plVar5);
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



// FUNCTION 1420bce20 FUN_1420bce20 body=677 status=ok
// SIG undefined FUN_1420bce20(void)

void FUN_1420bce20(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  longlong lVar9;
  char cVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  uint *puVar14;
  int local_b8;
  uint uStack_b4;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_90;
  uint *local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  longlong *local_68;
  char local_60;
  char cStack_5f;
  longlong *local_58;
  undefined8 uStack_50;
  uint *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  uStack_b4 = 1;
  plVar3 = (longlong *)(param_1 + 0xa0);
  iVar4 = *(int *)(param_1 + 200);
  iStack_a4 = 0;
  iStack_a0 = 0;
  local_88 = (uint *)(param_1 + 0xb0);
  local_b8 = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)(param_1 + 0xc0);
    if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
      puVar14 = local_88;
    }
    uVar5 = *puVar14;
    local_b8 = 0;
    iStack_a0 = 0;
    while (uVar5 == 0) {
      lVar13 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar11 = local_b8 + 1;
      bVar8 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar11;
      if (bVar8) goto LAB_1420bcef2;
      uVar5 = puVar14[lVar13 + 1];
    }
    uStack_b4 = -uVar5 & uVar5;
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
    iStack_a4 = (iStack_a0 - iVar11) + 0x1f;
    if (iVar4 < iStack_a4) {
LAB_1420bcef2:
      iStack_a4 = iVar4;
    }
  }
  uStack_80 = CONCAT44(iStack_a4,0xffffffff);
  auStack_40._8_4_ = iStack_a0;
  auStack_40._0_8_ = uStack_80;
  auStack_40._12_4_ = uStack_9c;
  uStack_90 = CONCAT44(uStack_b4,local_b8);
  local_60 = '\0';
  cStack_5f = '\0';
  local_30._0_4_ = SUB84(plVar3,0);
  local_30._4_4_ = (undefined4)((ulonglong)plVar3 >> 0x20);
  local_78._8_4_ = (undefined4)local_30;
  local_78._0_8_ = auStack_40._8_8_;
  local_78._12_4_ = local_30._4_4_;
  local_68 = plVar3;
  local_58 = plVar3;
  uStack_50 = uStack_90;
  puStack_48 = local_88;
  local_30 = plVar3;
  if (iStack_a4 < *(int *)(param_1 + 200)) {
    do {
      lVar13 = (longlong)uStack_80._4_4_ * 0x30;
      cVar10 = FWeakObjectPtr::IsValid(*plVar3 + lVar13);
      if (cVar10 == '\0') {
        iVar4 = (int)param_2[1];
        lVar6 = *plVar3;
        *(int *)(param_2 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar4);
        }
        puVar12 = (undefined8 *)((longlong)iVar4 * 0x10 + *param_2);
        *puVar12 = *(undefined8 *)(lVar6 + 0x18 + lVar13);
        lVar6 = *(longlong *)(lVar6 + 0x20 + lVar13);
        puVar12[1] = lVar6;
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          UNLOCK();
        }
        lVar13 = *(longlong *)(lVar13 + 0x18 + *plVar3);
        lVar6 = *(longlong *)(lVar13 + 0x10);
        *(undefined8 *)(lVar13 + 8) = 0;
        *(undefined8 *)(lVar13 + 0x18) = 0;
        if (lVar6 != 0) {
          if (*(undefined8 **)(lVar6 + 0x20) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar6 + 0x20) = 0;
          }
          plVar7 = *(longlong **)(lVar6 + 0x28);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar7 + 1;
            lVar9 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plVar7)(plVar7);
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
          FMemory::operator_delete(lVar6,0x30);
        }
        *(undefined8 *)(lVar13 + 0x10) = 0;
        *(undefined8 *)(lVar13 + 0x20) = 0;
        FUN_1420bcb40(local_78._8_8_,uStack_80._4_4_);
        local_60 = '\x01';
      }
      uStack_80 = CONCAT44(uStack_80._4_4_,(uint)uStack_80 & ~uStack_90._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
    } while (uStack_80._4_4_ < (int)local_88[6]);
    if ((local_60 != '\0') && (cStack_5f != '\0')) {
      TSet<TTuple<FMaterialKey,TSharedPtr<FSlateMaterialResource,0>_>,TDefaultMapHashableKeyFuncs<FMaterialKey,TSharedPtr<FSlateMaterialResource,0>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 1420bd0d0 FUN_1420bd0d0 body=649 status=ok
// SIG undefined FUN_1420bd0d0(void)

void FUN_1420bd0d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  longlong lVar9;
  char cVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  uint *puVar14;
  int local_b8;
  uint uStack_b4;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_90;
  uint *local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  longlong *local_68;
  char local_60;
  char cStack_5f;
  longlong *local_58;
  undefined8 uStack_50;
  uint *puStack_48;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  uStack_b4 = 1;
  plVar1 = (longlong *)(param_1 + 0x50);
  iVar4 = *(int *)(param_1 + 0x78);
  iStack_a4 = 0;
  iStack_a0 = 0;
  local_88 = (uint *)(param_1 + 0x60);
  local_b8 = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)(param_1 + 0x70);
    if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
      puVar14 = local_88;
    }
    uVar5 = *puVar14;
    local_b8 = 0;
    iStack_a0 = 0;
    while (uVar5 == 0) {
      lVar13 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar11 = local_b8 + 1;
      bVar8 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar11;
      if (bVar8) goto LAB_1420bd192;
      uVar5 = puVar14[lVar13 + 1];
    }
    uStack_b4 = -uVar5 & uVar5;
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
    iStack_a4 = (iStack_a0 - iVar11) + 0x1f;
    if (iVar4 < iStack_a4) {
LAB_1420bd192:
      iStack_a4 = iVar4;
    }
  }
  uStack_80 = CONCAT44(iStack_a4,0xffffffff);
  auStack_40._8_4_ = iStack_a0;
  auStack_40._0_8_ = uStack_80;
  auStack_40._12_4_ = uStack_9c;
  uStack_90 = CONCAT44(uStack_b4,local_b8);
  local_60 = '\0';
  cStack_5f = '\0';
  local_30._0_4_ = SUB84(plVar1,0);
  local_30._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  local_78._8_4_ = (undefined4)local_30;
  local_78._0_8_ = auStack_40._8_8_;
  local_78._12_4_ = local_30._4_4_;
  local_68 = plVar1;
  local_58 = plVar1;
  uStack_50 = uStack_90;
  puStack_48 = local_88;
  local_30 = plVar1;
  if (iStack_a4 < *(int *)(param_1 + 0x78)) {
    do {
      lVar13 = (longlong)uStack_80._4_4_ * 0x20;
      cVar10 = FWeakObjectPtr::IsValid(*plVar1 + lVar13);
      if (cVar10 == '\0') {
        iVar4 = (int)param_2[1];
        lVar6 = *plVar1;
        *(int *)(param_2 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar4);
        }
        puVar12 = (undefined8 *)((longlong)iVar4 * 0x10 + *param_2);
        *puVar12 = *(undefined8 *)(lVar6 + 8 + lVar13);
        lVar6 = *(longlong *)(lVar6 + 0x10 + lVar13);
        puVar12[1] = lVar6;
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
          UNLOCK();
        }
        lVar13 = *(longlong *)(lVar13 + 8 + *plVar1);
        lVar6 = *(longlong *)(lVar13 + 0x10);
        *(undefined8 *)(lVar13 + 8) = 0;
        if (lVar6 != 0) {
          if (*(undefined8 **)(lVar6 + 0x20) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar6 + 0x20) = 0;
          }
          plVar7 = *(longlong **)(lVar6 + 0x28);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar7 + 1;
            lVar9 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar3 = (int *)((longlong)plVar7 + 0xc);
              iVar4 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
          FMemory::operator_delete(lVar6,0x30);
        }
        *(undefined8 *)(lVar13 + 0x10) = 0;
        TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
        ::Remove(local_78._8_8_,uStack_80._4_4_);
        local_60 = '\x01';
      }
      uStack_80 = CONCAT44(uStack_80._4_4_,(uint)uStack_80 & ~uStack_90._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_90);
    } while (uStack_80._4_4_ < (int)local_88[6]);
    if ((local_60 != '\0') && (cStack_5f != '\0')) {
      TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_68,(int)local_68[1] - *(int *)((longlong)local_68 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 1420bd360 FUN_1420bd360 body=529 status=ok
// SIG undefined FUN_1420bd360(void)

void FUN_1420bd360(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  LARGE_INTEGER local_res8;
  longlong local_res10;
  longlong local_res18;
  LARGE_INTEGER local_res20;
  
  local_res10 = param_2;
  TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x2c0,&local_res10);
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
    plVar10 = *(longlong **)(param_1 + 0x210);
    FBaseGraphTask::GetSmallTaskAllocator();
    QueryPerformanceCounter(&local_res20);
    (**(code **)(*plVar10 + 0x20))(plVar10,local_res10);
    QueryPerformanceCounter(&local_res8);
    DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x210);
  pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar7 = TlsGetValue(*pDVar6);
  plVar10 = (longlong *)0x0;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)operator_new(0x18);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = 0;
      plVar7[1] = 0;
      *(undefined4 *)(plVar7 + 2) = 0;
      plVar10 = plVar7;
    }
    TlsSetValue(*pDVar6,plVar10);
    plVar7 = plVar10;
  }
  plVar10 = (longlong *)plVar7[1];
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)*plVar7;
    if (plVar10 == (longlong *)0x0) {
      lVar8 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar6 + 2);
      plVar7[1] = lVar8;
      if (lVar8 == 0) {
        puVar9 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar7[1] = (longlong)puVar9;
        lVar8 = 0x1f;
        do {
          puVar2 = puVar9 + 0x20;
          *puVar9 = puVar2;
          lVar8 = lVar8 + -1;
          puVar9 = puVar2;
        } while (lVar8 != 0);
        *puVar2 = 0;
      }
      plVar10 = (longlong *)plVar7[1];
      iVar11 = 0x20;
      *(undefined4 *)(plVar7 + 2) = 0x20;
    }
    else {
      iVar11 = 0x20;
      plVar7[1] = (longlong)plVar10;
      *(undefined4 *)(plVar7 + 2) = 0x20;
      *plVar7 = 0;
    }
  }
  else {
    iVar11 = (int)plVar7[2];
  }
  plVar7[1] = *plVar10;
  *(int *)(plVar7 + 2) = iVar11 + -1;
  *plVar10 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar10 + 1) = 0xff;
  *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
  *plVar10 = (longlong)&PTR_FUN_144f96660;
  *(undefined1 *)(plVar10 + 4) = 0;
  plVar10[5] = 0;
  plVar10[2] = lVar3;
  plVar10[3] = local_res10;
  lVar3 = plVar10[5];
  piVar1 = (int *)(lVar3 + 0x48);
  if (lVar3 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_res18 = lVar3;
  FUN_1409421c0(plVar10,0,0xff,1,0,0);
  if (lVar3 != 0) {
    LOCK();
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar11 == 1) {
      FGraphEvent::Recycle(local_res18);
    }
  }
  return;
}



// FUNCTION 1420bd580 FUN_1420bd580 body=38 status=ok
// SIG undefined FUN_1420bd580(void)

void FUN_1420bd580(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  TArray<FName,FDefaultAllocator>::Remove(*(longlong *)(param_1 + 200) + 0x2f8,local_res8);
  return;
}



// FUNCTION 1420bd5b0 FUN_1420bd5b0 body=107 status=ok
// SIG undefined FUN_1420bd5b0(void)

void FUN_1420bd5b0(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  int local_res8 [2];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0xc0),local_res8,*param_2);
  if (((local_res8[0] != -1) &&
      (lVar1 = *(longlong *)(param_1 + 0xc0) + (longlong)local_res8[0] * 0x18, lVar1 != 0)) &&
     (lVar1 = *(longlong *)(lVar1 + 8), lVar1 != 0)) {
    *(undefined4 *)(lVar1 + 0xd8) = param_3;
    *(undefined4 *)(lVar1 + 0xdc) = param_4;
  }
  return;
}



// FUNCTION 1420bd620 FUN_1420bd620 body=59 status=ok
// SIG undefined FUN_1420bd620(void)

void FUN_1420bd620(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FSlateShaderResourceProxy::_scalar_deleting_destructor_(*(longlong *)(param_1 + 0x10),1);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 1420bd660 ResetTexture body=50 status=ok
// SIG undefined ResetTexture(void)

void FSlateUTextureResource::ResetTexture(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FSlateShaderResourceProxy::_scalar_deleting_destructor_(*(longlong *)(param_1 + 0x10),1);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1420bd6a0 ResizeAllocation body=149 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<2,FDefaultAllocator>::ForElementType<FRenderThreadUpdateContext>::
     ResizeAllocation(void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x40);
  if (param_3 < 3) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 5);
    pvVar1 = *(void **)((longlong)param_1 + 0x40);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 0x40) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 5);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar2;
  return;
}



// FUNCTION 1420bd740 ResizeForCopy body=112 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FRenderThreadUpdateContext,TInlineAllocator<2,FDefaultAllocator>_>::ResizeForCopy
               (longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 5,0);
      iVar1 = (int)(uVar2 >> 5);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != param_3) {
    TInlineAllocator<2,FDefaultAllocator>::ForElementType<FRenderThreadUpdateContext>::
    ResizeAllocation(param_1,0,iVar1,0x20);
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  return;
}



// FUNCTION 1420bd7b0 ResizeGrow body=128 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FRenderThreadUpdateContext,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (uVar1 < 3) {
    iVar2 = 2;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x4c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 << 5,0);
    iVar2 = (int)(uVar3 >> 5);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x4c) = iVar2;
  TInlineAllocator<2,FDefaultAllocator>::ForElementType<FRenderThreadUpdateContext>::
  ResizeAllocation(param_1,param_2,iVar2,0x20);
  return;
}



// FUNCTION 1420bd830 FUN_1420bd830 body=737 status=ok
// SIG undefined FUN_1420bd830(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1420bd830(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined1 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined8 *local_98 [2];
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar1 = param_1 + 0x40;
  TArray<TRefCountPtr<FRHITexture2D>,TInlineAllocator<2,FDefaultAllocator>_>::Empty(lVar1,0);
  *(undefined4 *)(param_1 + 100) = *param_2;
  uVar6 = param_2[1];
  puVar7 = (undefined8 *)(ulonglong)uVar6;
  *(uint *)(param_1 + 0x68) = uVar6;
  *(undefined4 *)(param_1 + 0x60) = 2;
  if (((0 < *(int *)(param_1 + 100)) && (0 < (int)uVar6)) &&
     (uVar10 = 0, uVar11 = uVar10, 0 < *(int *)(param_1 + 0x6c))) {
    do {
      local_c8 = *(undefined4 *)(param_1 + 0x68);
      local_a0 = &local_78;
      local_c0 = *(undefined1 *)(param_1 + 0x60);
      local_a8 = 9;
      local_b0 = 1;
      local_64 = _DAT_1468b5d78;
      uStack_60 = uRam00000001468b5d7c;
      uStack_5c = uRam00000001468b5d80;
      uStack_58 = uRam00000001468b5d84;
      local_68 = 1;
      local_78 = 0;
      uStack_70 = 0;
      local_54 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_b8 = 1;
      local_98[0] = (undefined8 *)0x0;
      (**(code **)(*DAT_146ab6358 + 0x5e0))
                (DAT_146ab6358,&local_88,&DAT_146ab6e78,*(undefined4 *)(param_1 + 100));
      puVar7 = local_88;
      local_80 = local_88;
      local_88 = (undefined8 *)0x0;
      TRefCountPtr<FRHIIndexBuffer>::operator=(local_98,puVar7);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_88);
      iVar3 = *(int *)(param_1 + 0x58);
      *(int *)(param_1 + 0x58) = iVar3 + 1;
      if (*(int *)(param_1 + 0x5c) < iVar3 + 1) {
        TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
        ::ResizeGrow(lVar1,iVar3);
      }
      puVar4 = local_80;
      lVar9 = *(longlong *)(param_1 + 0x50);
      if (*(longlong *)(param_1 + 0x50) == 0) {
        lVar9 = lVar1;
      }
      *(undefined8 **)(lVar9 + (longlong)iVar3 * 8) = local_98[0];
      if (local_98[0] != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_98[0] + 1) = *(int *)(local_98[0] + 1) + 1;
        UNLOCK();
        puVar7 = local_80;
      }
      if (puVar7 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar7 + 1);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          if ((*(char *)(local_80 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))) {
            LOCK();
            bVar12 = *(int *)((longlong)puVar4 + 0xc) == 0;
            if (bVar12) {
              *(int *)((longlong)puVar4 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar12) {
              uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
              uVar8 = uVar10;
              if (uVar6 != 0) {
                uVar8 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(uVar8 + 8) = local_80;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
      }
      puVar4 = local_98[0];
      puVar7 = local_98[0];
      if (local_98[0] != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(local_98[0] + 1);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          if ((*(char *)(local_98[0] + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))) {
            puVar7 = (undefined8 *)0x0;
            LOCK();
            uVar6 = *(uint *)((longlong)puVar4 + 0xc);
            if (uVar6 == 0) {
              *(uint *)((longlong)puVar4 + 0xc) = 1;
            }
            else {
              puVar7 = (undefined8 *)(ulonglong)uVar6;
            }
            UNLOCK();
            if (uVar6 == 0) {
              uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
              uVar8 = uVar10;
              if (uVar6 != 0) {
                uVar8 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(uVar8 + 8) = local_98[0];
              puVar7 = (undefined8 *)FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            puVar7 = (undefined8 *)(**(code **)*puVar4)(puVar4,1);
          }
        }
      }
      uVar6 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar6;
    } while ((int)uVar6 < *(int *)(param_1 + 0x6c));
  }
  return puVar7;
}



// FUNCTION 1420bdb20 ResizeTo body=101 status=ok
// SIG undefined ResizeTo(void)

void TArray<FSceneView_*,TInlineAllocator<3,FDefaultAllocator>_>::ResizeTo
               (longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 4) {
      iVar1 = 3;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x24)) {
    *(int *)(param_1 + 0x24) = iVar1;
    FUN_141cf3ee0(param_1,*(undefined4 *)(param_1 + 0x20),iVar1,8);
  }
  return;
}



// FUNCTION 1420bdb90 ResizeTo body=101 status=ok
// SIG undefined ResizeTo(void)

void TArray<FRenderThreadUpdateContext,TInlineAllocator<2,FDefaultAllocator>_>::ResizeTo
               (longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 5,0);
      iVar1 = (int)(uVar2 >> 5);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x4c)) {
    *(int *)(param_1 + 0x4c) = iVar1;
    TInlineAllocator<2,FDefaultAllocator>::ForElementType<FRenderThreadUpdateContext>::
    ResizeAllocation(param_1,*(undefined4 *)(param_1 + 0x48),iVar1,0x20);
  }
  return;
}



// FUNCTION 1420bdc00 FUN_1420bdc00 body=131 status=ok
// SIG undefined FUN_1420bdc00(void)

void FUN_1420bdc00(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = (**(code **)(**(longlong **)(*param_2 + 0x498) + 0x68))();
  if (iVar5 == 0) {
    FSystemResolution::RequestResolutionChange(DAT_1465351f0,DAT_1465351f4,DAT_1465351f8);
    DAT_1465351fc = 1;
  }
  plVar3 = (longlong *)param_2[1];
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
  return;
}



// FUNCTION 1420bdc90 FUN_1420bdc90 body=41 status=ok
// SIG undefined FUN_1420bdc90(void)

void FUN_1420bdc90(void)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = GetMoviePlayer();
  if (lVar1 != 0) {
    plVar2 = (longlong *)GetMoviePlayer();
                    /* WARNING: Could not recover jumptable at 0x0001420bdcad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0xe0))(plVar2);
    return;
  }
  return;
}



// FUNCTION 1420bdd10 FUN_1420bdd10 body=1579 status=ok
// SIG undefined FUN_1420bdd10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1420bdd10(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ae7740) && (_Init_thread_header(&DAT_146ae7740), DAT_146ae7740 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.OutputDevice");
    uVar4 = 0;
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146ae7738 = uVar4;
    _Init_thread_footer(&DAT_146ae7740);
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x40);
  uVar5 = FUN_1404a0e20();
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c80;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = param_3;
  }
  if (*(short *)(param_1 + 0xca) != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c70;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar5;
  }
  lVar7 = 0;
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x40);
  uVar5 = FUN_1404a0e20();
  if (*(short *)(param_1 + 0xce) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xcc);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c80;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = param_4;
  }
  if (*(short *)(param_1 + 0xd2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd0);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c70;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar5;
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x40);
  uVar5 = FUN_141a156e0();
  if (*(short *)(param_1 + 0xd6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd4);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c80;
    puVar9[4] = param_5;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
  }
  if (*(short *)(param_1 + 0xda) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd8);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c70;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar5;
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*(undefined8 *)(lVar2 + 0x40),param_1 + 0xdc,&stack0x00000040,0);
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*(undefined8 *)(lVar2 + 0x40),param_1 + 0xe2,&stack0x00000038,0);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 0x38) < DAT_146ae7750) &&
     (_Init_thread_header(&DAT_146ae7750), DAT_146ae7750 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.OutputMinNits");
    lVar6 = lVar7;
    if (plVar3 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar3 + 0x40))(plVar3);
    }
    DAT_146ae7748 = lVar6;
    _Init_thread_footer(&DAT_146ae7750);
  }
  if ((*(int *)(lVar2 + 0x38) < DAT_146ae7760) &&
     (_Init_thread_header(&DAT_146ae7760), DAT_146ae7760 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.OutputMaxNits");
    if (plVar3 != (longlong *)0x0) {
      lVar7 = (**(code **)(*plVar3 + 0x40))(plVar3);
    }
    DAT_146ae7758 = lVar7;
    _Init_thread_footer(&DAT_146ae7760);
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_resc = *(undefined4 *)(DAT_146ae7758 + 4);
  local_res8 = *(undefined4 *)(DAT_146ae7748 + 4);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_2,*(undefined8 *)(lVar2 + 0x40),param_1 + 0xe8,&local_res8,0);
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x40);
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c80;
    puVar9[4] = param_6;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
  }
  return;
}



// FUNCTION 1420be340 FUN_1420be340 body=1579 status=ok
// SIG undefined FUN_1420be340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1420be340(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ae7710) && (_Init_thread_header(&DAT_146ae7710), DAT_146ae7710 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.OutputDevice");
    uVar4 = 0;
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146ae7708 = uVar4;
    _Init_thread_footer(&DAT_146ae7710);
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x40);
  uVar5 = FUN_1404a0e20();
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c80;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = param_3;
  }
  if (*(short *)(param_1 + 0xca) != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c70;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar5;
  }
  lVar7 = 0;
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x40);
  uVar5 = FUN_1404a0e20();
  if (*(short *)(param_1 + 0xce) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xcc);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c80;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = param_4;
  }
  if (*(short *)(param_1 + 0xd2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd0);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c70;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar5;
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x40);
  uVar5 = FUN_141a156e0();
  if (*(short *)(param_1 + 0xd6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd4);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c80;
    puVar9[4] = param_5;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
  }
  if (*(short *)(param_1 + 0xda) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd8);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c70;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar5;
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*(undefined8 *)(lVar2 + 0x40),param_1 + 0xdc,&stack0x00000040,0);
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*(undefined8 *)(lVar2 + 0x40),param_1 + 0xe2,&stack0x00000038,0);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 0x38) < DAT_146ae7720) &&
     (_Init_thread_header(&DAT_146ae7720), DAT_146ae7720 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.OutputMinNits");
    lVar6 = lVar7;
    if (plVar3 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar3 + 0x40))(plVar3);
    }
    DAT_146ae7718 = lVar6;
    _Init_thread_footer(&DAT_146ae7720);
  }
  if ((*(int *)(lVar2 + 0x38) < DAT_146ae7730) &&
     (_Init_thread_header(&DAT_146ae7730), DAT_146ae7730 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.OutputMaxNits");
    if (plVar3 != (longlong *)0x0) {
      lVar7 = (**(code **)(*plVar3 + 0x40))(plVar3);
    }
    DAT_146ae7728 = lVar7;
    _Init_thread_footer(&DAT_146ae7730);
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_resc = *(undefined4 *)(DAT_146ae7728 + 4);
  local_res8 = *(undefined4 *)(DAT_146ae7718 + 4);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_2,*(undefined8 *)(lVar2 + 0x40),param_1 + 0xe8,&local_res8,0);
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x40);
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c80;
    puVar9[4] = param_6;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
  }
  return;
}



// FUNCTION 1420be970 FUN_1420be970 body=1579 status=ok
// SIG undefined FUN_1420be970(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1420be970(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ae7770) && (_Init_thread_header(&DAT_146ae7770), DAT_146ae7770 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.Display.OutputDevice");
    uVar4 = 0;
    if (plVar3 != (longlong *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    _DAT_146ae7768 = uVar4;
    _Init_thread_footer(&DAT_146ae7770);
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x40);
  uVar5 = FUN_1404a0e20();
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c80;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = param_3;
  }
  if (*(short *)(param_1 + 0xca) != 0) {
    uVar1 = *(ushort *)(param_1 + 200);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c70;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar5;
  }
  lVar7 = 0;
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x40);
  uVar5 = FUN_1404a0e20();
  if (*(short *)(param_1 + 0xce) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xcc);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c80;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = param_4;
  }
  if (*(short *)(param_1 + 0xd2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd0);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c70;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar5;
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x40);
  uVar5 = FUN_141a156e0();
  if (*(short *)(param_1 + 0xd6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd4);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c80;
    puVar9[4] = param_5;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
  }
  if (*(short *)(param_1 + 0xda) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xd8);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c70;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
    puVar9[4] = uVar5;
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*(undefined8 *)(lVar2 + 0x40),param_1 + 0xdc,&stack0x00000040,0);
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*(undefined8 *)(lVar2 + 0x40),param_1 + 0xe2,&stack0x00000038,0);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar2 + 0x38) < DAT_146ae7780) &&
     (_Init_thread_header(&DAT_146ae7780), DAT_146ae7780 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.OutputMinNits");
    lVar6 = lVar7;
    if (plVar3 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar3 + 0x40))(plVar3);
    }
    DAT_146ae7778 = lVar6;
    _Init_thread_footer(&DAT_146ae7780);
  }
  if ((*(int *)(lVar2 + 0x38) < DAT_146ae7790) &&
     (_Init_thread_header(&DAT_146ae7790), DAT_146ae7790 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.HDR.OutputMaxNits");
    if (plVar3 != (longlong *)0x0) {
      lVar7 = (**(code **)(*plVar3 + 0x40))(plVar3);
    }
    DAT_146ae7788 = lVar7;
    _Init_thread_footer(&DAT_146ae7790);
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_resc = *(undefined4 *)(DAT_146ae7788 + 4);
  local_res8 = *(undefined4 *)(DAT_146ae7778 + 4);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  SetShaderValue<FRHIPixelShader_*,FVector2D,FRHICommandList>
            (param_2,*(undefined8 *)(lVar2 + 0x40),param_1 + 0xe8,&local_res8,0);
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x40);
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar9 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar8) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar9 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar8;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar9;
    *(undefined8 **)(param_2 + 8) = puVar9 + 1;
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_143f59c80;
    puVar9[4] = param_6;
    puVar9[2] = uVar4;
    *(uint *)(puVar9 + 3) = (uint)uVar1;
  }
  return;
}



// FUNCTION 1420befa0 SetSystemResolution body=54 status=ok
// SIG undefined SetSystemResolution(void)

void FSlateRHIRenderer::SetSystemResolution
               (undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  FSystemResolution::RequestResolutionChange(param_2,param_3,0);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x0001420befd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x38))();
  return;
}



// FUNCTION 1420befe0 FUN_1420befe0 body=59 status=ok
// SIG undefined FUN_1420befe0(void)

void FUN_1420befe0(undefined8 param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  FSystemResolution::RequestResolutionChange(param_2,param_3,param_4 ^ 1);
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
                    /* WARNING: Could not recover jumptable at 0x0001420bf017. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_1468b1f88 + 0x38))();
  return;
}



// FUNCTION 1420bf020 FUN_1420bf020 body=337 status=ok
// SIG undefined FUN_1420bf020(void)

void FUN_1420bf020(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  uVar3 = *param_4;
  if (*(char *)(lVar2 + 0x28) == '\0') {
    FUN_1419f3850(lVar2);
  }
  uVar4 = *(undefined8 *)(lVar2 + 0x40);
  if (*(short *)(param_1 + 0xc2) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc0);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    *puVar6 = &PTR_LAB_143f59c80;
    puVar6[2] = uVar4;
    puVar6[4] = param_3;
  }
  if (*(short *)(param_1 + 0xc6) != 0) {
    uVar1 = *(ushort *)(param_1 + 0xc4);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar5) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar5 = puVar6 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar5;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar6;
    *(undefined8 **)(param_2 + 8) = puVar6 + 1;
    puVar6[1] = 0;
    *puVar6 = &PTR_LAB_143f59c70;
    puVar6[2] = uVar4;
    *(uint *)(puVar6 + 3) = (uint)uVar1;
    puVar6[4] = uVar3;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_4);
  return;
}



// FUNCTION 1420bf190 FUN_1420bf190 body=403 status=ok
// SIG undefined FUN_1420bf190(void)

void FUN_1420bf190(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *_Dst;
  uint uVar9;
  undefined4 local_res20 [2];
  
  lVar4 = *(longlong *)(param_1 + 0x48);
  _Src = (void *)*param_3;
  iVar3 = *(int *)(param_3 + 1);
  local_res20[0] = param_4;
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  uVar5 = *(undefined8 *)(lVar4 + 0x40);
  uVar9 = (uint)*(ushort *)(param_1 + 0xe2);
  if (iVar3 * 0x10 <= (int)(uint)*(ushort *)(param_1 + 0xe2)) {
    uVar9 = iVar3 * 0x10;
  }
  if (0 < (int)uVar9) {
    uVar1 = *(ushort *)(param_1 + 0xde);
    uVar2 = *(ushort *)(param_1 + 0xe0);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar6 = (longlong)(int)uVar9 + (longlong)_Dst;
    if (*(ulonglong *)(param_2 + 0x38) < uVar6) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar9 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar6 = (longlong)(int)uVar9 + (longlong)_Dst;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar6;
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,(ulonglong)uVar9);
    puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar8 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar8 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar7 = puVar8 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar7;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar8;
    *(undefined8 **)(param_2 + 8) = puVar8 + 1;
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_143f594b0;
    puVar8[2] = uVar5;
    *(uint *)((longlong)puVar8 + 0x24) = (uint)uVar2;
    *(uint *)(puVar8 + 4) = (uint)uVar1;
    puVar8[3] = _Dst;
    *(uint *)(puVar8 + 5) = uVar9;
  }
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar4 + 0x28) == '\0') {
    FUN_1419f3850(lVar4);
  }
  SetShaderValue<FRHIPixelShader_*,unsigned_int,FRHICommandList>
            (param_2,*(undefined8 *)(lVar4 + 0x40),param_1 + 0xe4,local_res20,0);
  return;
}



// FUNCTION 1420bf330 FUN_1420bf330 body=89 status=ok
// SIG undefined FUN_1420bf330(void)

void FUN_1420bf330(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int local_res8 [2];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0xc0),local_res8,param_2);
  if (((local_res8[0] != -1) &&
      (lVar1 = *(longlong *)(param_1 + 0xc0) + (longlong)local_res8[0] * 0x18, lVar1 != 0)) &&
     (lVar1 = *(longlong *)(lVar1 + 8), lVar1 != 0)) {
    *(undefined8 *)(lVar1 + 0xf8) = param_3;
  }
  return;
}



// FUNCTION 1420bf390 FUN_1420bf390 body=76 status=ok
// SIG undefined FUN_1420bf390(void)

undefined8 FUN_1420bf390(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = FUN_1419ef5f0(uVar1);
  if (((2 < iVar2) && (1 < iVar2)) &&
     (((0x1d < uVar1 || ((0x28e71800U >> (uVar1 & 0x1f) & 1) == 0)) ||
      (((1 < iVar2 && (uVar1 < 0x1c)) && ((0x8c50000U >> (uVar1 & 0x1f) & 1) != 0)))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1420bf3e0 FUN_1420bf3e0 body=24 status=ok
// SIG undefined FUN_1420bf3e0(void)

bool FUN_1420bf3e0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2);
  return iVar1 == 5;
}



// FUNCTION 1420bf400 FUN_1420bf400 body=314 status=ok
// SIG undefined FUN_1420bf400(void)

void FUN_1420bf400(void)

{
  char cVar1;
  DWORD DVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar6 < DAT_146ae6680) && (_Init_thread_header(&DAT_146ae6680), DAT_146ae6680 == -1)) {
    atexit(FUN_143ea6420);
    _Init_thread_footer(&DAT_146ae6680);
  }
  lVar5 = 0;
  if ((*piVar6 < DAT_146ae6690) && (_Init_thread_header(&DAT_146ae6690), DAT_146ae6690 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar3 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.OneFrameThreadLag");
    lVar4 = lVar5;
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3);
    }
    DAT_146ae6688 = lVar4;
    _Init_thread_footer(&DAT_146ae6690);
  }
  lVar4 = DAT_146ae6688;
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)) {
    lVar5 = 4;
  }
  FFrameEndSync::Sync(&DAT_146ae6668,*(int *)(lVar5 + lVar4) != 0);
  return;
}



// FUNCTION 1420bf540 FUN_1420bf540 body=475 status=ok
// SIG undefined FUN_1420bf540(void)

void FUN_1420bf540(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  DWORD DVar4;
  DWORD *pDVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  longlong local_res8;
  undefined1 local_res20 [8];
  
  param_1 = param_1 + -0x68;
  FUN_1420bf720(param_1,0);
  if (DAT_146ab6383 != '\0') {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar4 = GetCurrentThreadId(), DVar4 == DAT_1468c21c0)))) {
      local_res8 = param_1;
      FUN_1420a9c20(&local_res8,2,local_res20);
      return;
    }
    pDVar5 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar6 = TlsGetValue(*pDVar5);
    plVar9 = (longlong *)0x0;
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)operator_new(0x18);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = 0;
        plVar6[1] = 0;
        *(undefined4 *)(plVar6 + 2) = 0;
        plVar9 = plVar6;
      }
      TlsSetValue(*pDVar5,plVar9);
      plVar6 = plVar9;
    }
    plVar9 = (longlong *)plVar6[1];
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)*plVar6;
      if (plVar9 == (longlong *)0x0) {
        lVar7 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar5 + 2);
        plVar6[1] = lVar7;
        if (lVar7 == 0) {
          puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar6[1] = (longlong)puVar8;
          lVar7 = 0x1f;
          do {
            puVar2 = puVar8 + 0x20;
            *puVar8 = puVar2;
            lVar7 = lVar7 + -1;
            puVar8 = puVar2;
          } while (lVar7 != 0);
          *puVar2 = 0;
        }
        plVar9 = (longlong *)plVar6[1];
        iVar10 = 0x20;
        *(undefined4 *)(plVar6 + 2) = 0x20;
      }
      else {
        iVar10 = 0x20;
        plVar6[1] = (longlong)plVar9;
        *(undefined4 *)(plVar6 + 2) = 0x20;
        *plVar6 = 0;
      }
    }
    else {
      iVar10 = (int)plVar6[2];
    }
    plVar6[1] = *plVar9;
    *(int *)(plVar6 + 2) = iVar10 + -1;
    *plVar9 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar9 + 1) = 0xff;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *(undefined1 *)(plVar9 + 3) = 0;
    *plVar9 = (longlong)&PTR_FUN_144f966c8;
    plVar9[4] = 0;
    plVar9[2] = param_1;
    lVar7 = plVar9[4];
    piVar1 = (int *)(lVar7 + 0x48);
    if (lVar7 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_140445100(plVar9,0,0xff,1,0,0);
    if (lVar7 != 0) {
      LOCK();
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        FGraphEvent::Recycle(lVar7);
      }
    }
  }
  return;
}



// FUNCTION 1420bf720 FUN_1420bf720 body=193 status=ok
// SIG undefined FUN_1420bf720(void)

void FUN_1420bf720(longlong param_1,char param_2)

{
  char cVar1;
  DWORD DVar2;
  BOOL BVar3;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar1 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar2 = GetCurrentThreadId(), DVar2 != DAT_1468c21c0)) {
    return;
  }
  cVar1 = FUN_1415e1500();
  if ((cVar1 == '\0') && ((param_2 != '\0' || (*(char *)(param_1 + 0x98) != '\0')))) {
    BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
    if (BVar3 != 0) {
      *(undefined1 *)(param_1 + 0x98) = 0;
      FUN_1420bd0d0(param_1 + 0xa0,param_1 + 0x1e0);
      FUN_1420bce20(param_1 + 0xa0,param_1 + 0x200);
                    /* WARNING: Could not recover jumptable at 0x0001420bf7c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
      return;
    }
    *(undefined1 *)(param_1 + 0x98) = 1;
  }
  return;
}



// FUNCTION 1420bf7f0 FUN_1420bf7f0 body=442 status=ok
// SIG undefined FUN_1420bf7f0(void)

void FUN_1420bf7f0(longlong *param_1,longlong *param_2,int param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_res8 [2];
  int local_res10 [2];
  longlong local_38;
  longlong local_30;
  
  lVar4 = *param_2;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x18,local_res8,lVar4);
  if (((local_res8[0] == -1) || (lVar3 = param_1[0x18] + (longlong)local_res8[0] * 0x18, lVar3 == 0)
      ) || (*(longlong *)(lVar3 + 8) == 0)) {
    local_30 = param_2[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    local_38 = lVar4;
    (**(code **)(*param_1 + 0x20))(param_1,&local_38);
  }
  lVar4 = *param_2;
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(param_1 + 0x18,local_res10,lVar4);
  if (local_res10[0] != -1) {
    lVar3 = param_1[0x18] + (longlong)local_res10[0] * 0x18;
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 8), lVar3 != 0)) {
      uVar6 = FSlateRenderer::IsViewportFullscreen(param_1,lVar4);
      iVar8 = DAT_1465351f0;
      if (param_3 != 0) {
        iVar8 = param_3;
      }
      iVar9 = DAT_1465351f4;
      if (param_4 != 0) {
        iVar9 = param_4;
      }
      iVar7 = (**(code **)(**(longlong **)(*param_2 + 0x498) + 0x68))();
      if (iVar7 == 1) {
        iVar8 = *(int *)(lVar3 + 0xd8);
        iVar9 = *(int *)(lVar3 + 0xdc);
      }
      FUN_1420a5790(param_1,lVar3,iVar8,iVar9,uVar6);
      iVar8 = (**(code **)(**(longlong **)(*param_2 + 0x498) + 0x68))();
      if ((iVar8 == 0) && (*(char *)(lVar3 + 0xe1) == '\0')) {
        FUN_14185bc30(*param_2,1);
      }
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
      iVar8 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 1420bf9b0 UpdateMaterial body=219 status=ok
// SIG undefined UpdateMaterial(void)

void FSlateMaterialResource::UpdateMaterial
               (longlong param_1,undefined8 param_2,float *param_3,undefined8 param_4)

{
  float fVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)operator_new(0x30);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      puVar2[2] = 0;
      *(undefined4 *)(puVar2 + 1) = 0x3f800000;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0x3f800000;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
    }
    *(undefined8 **)(param_1 + 0x10) = puVar2;
  }
  *(undefined8 *)(param_1 + 0x18) = param_4;
  fVar1 = param_3[1];
  *(int *)(puVar2 + 3) = (int)ROUND(*param_3 + *param_3 + 0.5) >> 1;
  *(int *)((longlong)puVar2 + 0x1c) = (int)ROUND(fVar1 + fVar1 + 0.5) >> 1;
  *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) = param_1;
  *(int *)(param_1 + 0x20) = (int)ROUND(*param_3 + *param_3 + 0.5) >> 1;
  *(int *)(param_1 + 0x24) = (int)ROUND(param_3[1] + param_3[1] + 0.5) >> 1;
  return;
}



// FUNCTION 1420bfa90 FUN_1420bfa90 body=546 status=ok
// SIG undefined FUN_1420bfa90(void)

void FUN_1420bfa90(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  DWORD DVar5;
  undefined8 uVar6;
  DWORD *pDVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong *plVar12;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  
  *(int *)(param_1 + 0x80) = param_2;
  if (param_2 != 0) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar4 = FUN_1415ad720(&DAT_1468e2448), cVar4 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar5 = GetCurrentThreadId(), DVar5 == DAT_1468c21c0)))) {
      uVar3 = *(undefined4 *)(param_1 + 0x84);
      uVar6 = FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_res20);
      FUN_1420bfcc0(param_1,uVar6,uVar3);
      QueryPerformanceCounter(&local_res18);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_res18.s.LowPart - local_res20._0_4_);
    }
    else {
      pDVar7 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar8 = TlsGetValue(*pDVar7);
      plVar12 = (longlong *)0x0;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = (longlong *)operator_new(0x18);
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = 0;
          plVar8[1] = 0;
          *(undefined4 *)(plVar8 + 2) = 0;
          plVar12 = plVar8;
        }
        TlsSetValue(*pDVar7,plVar12);
        plVar8 = plVar12;
      }
      plVar12 = (longlong *)plVar8[1];
      if (plVar12 == (longlong *)0x0) {
        plVar12 = (longlong *)*plVar8;
        if (plVar12 == (longlong *)0x0) {
          lVar9 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar7 + 2);
          plVar8[1] = lVar9;
          if (lVar9 == 0) {
            puVar10 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar8[1] = (longlong)puVar10;
            lVar9 = 0x1f;
            do {
              puVar2 = puVar10 + 0x20;
              *puVar10 = puVar2;
              lVar9 = lVar9 + -1;
              puVar10 = puVar2;
            } while (lVar9 != 0);
            *puVar2 = 0;
          }
          plVar12 = (longlong *)plVar8[1];
          iVar11 = 0x20;
          *(undefined4 *)(plVar8 + 2) = 0x20;
        }
        else {
          iVar11 = 0x20;
          plVar8[1] = (longlong)plVar12;
          *(undefined4 *)(plVar8 + 2) = 0x20;
          *plVar8 = 0;
        }
      }
      else {
        iVar11 = (int)plVar8[2];
      }
      plVar8[1] = *plVar12;
      *(int *)(plVar8 + 2) = iVar11 + -1;
      *plVar12 = (longlong)&PTR_FUN_143f3edd8;
      *(undefined4 *)(plVar12 + 1) = 0xff;
      *(undefined4 *)((longlong)plVar12 + 0xc) = 1;
      *(undefined1 *)(plVar12 + 4) = 0;
      *plVar12 = (longlong)&PTR_FUN_144f96718;
      plVar12[5] = 0;
      uVar3 = *(undefined4 *)(param_1 + 0x84);
      plVar12[2] = param_1;
      *(undefined4 *)(plVar12 + 3) = uVar3;
      lVar9 = plVar12[5];
      piVar1 = (int *)(lVar9 + 0x48);
      if (lVar9 != 0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      FUN_1409421c0(plVar12,0,0xff,1,0,0);
      if (lVar9 != 0) {
        LOCK();
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          FGraphEvent::Recycle(lVar9);
        }
      }
    }
    iVar11 = *(int *)(param_1 + 0x84) + 1;
    *(int *)(param_1 + 0x84) =
         iVar11 + (iVar11 / 3 + (iVar11 >> 0x1f) +
                  (int)(((longlong)iVar11 / 3 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU) >> 0x1f))
                  * -3;
  }
  return;
}



// FUNCTION 1420bfcc0 FUN_1420bfcc0 body=521 status=ok
// SIG undefined FUN_1420bfcc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1420bfcc0(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *_Dst;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined1 auStack_c8 [32];
  int local_a8;
  undefined8 *local_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  puVar6 = (undefined8 *)(param_1 + 8 + (longlong)param_3 * 0x10);
  if (0 < *(int *)(puVar6 + 1)) {
    iVar5 = *(int *)(puVar6 + 1) << 4;
    if (*(int *)(param_1 + 0x70) < iVar5) {
      iVar4 = *(int *)(param_1 + 0x74);
      if (*(int *)(param_1 + 0x74) <= iVar5) {
        iVar4 = iVar5;
      }
      if ((iVar4 != 0) && (iVar4 != *(int *)(param_1 + 0x70))) {
        TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x68,0);
        local_a0 = &local_88;
        local_78 = 1;
        local_74 = _DAT_1468b5d78;
        uStack_70 = uRam00000001468b5d7c;
        uStack_6c = uRam00000001468b5d80;
        uStack_68 = uRam00000001468b5d84;
        local_64 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        local_a8 = 2;
        (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_98,&DAT_146ab6e78,iVar4);
        TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x68,local_98);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_98);
        *(int *)(param_1 + 0x70) = iVar4;
      }
    }
    *(int *)(param_1 + 0x78) = iVar5;
  }
  if (DAT_146ab6383 == '\0') {
    local_a8 = *(int *)(puVar6 + 1) << 4;
    local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,1);
    _Dst = (void *)(**(code **)(*DAT_146ab6358 + 0x4b0))
                             (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x68),0);
    _guard_xfg_dispatch_icall_nop(_Dst,(void *)*puVar6,(longlong)*(int *)(puVar6 + 1) << 4);
    (**(code **)(*DAT_146ab6358 + 0x4b8))
              (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x68));
  }
  else {
    puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar2 = puVar3 + 4;
    if (*(undefined8 **)(param_2 + 0x38) < puVar2) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x28);
      puVar3 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar2 = puVar3 + 4;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar2;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar3;
    *(undefined8 **)(param_2 + 8) = puVar3 + 1;
    puVar3[1] = 0;
    *puVar3 = &PTR_ExecuteAndDestruct_144f96708;
    lVar1 = *(longlong *)(param_1 + 0x68);
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar3[3] = puVar6;
  }
  return;
}



// FUNCTION 1420bfed0 FUN_1420bfed0 body=3333 status=ok
// SIG undefined FUN_1420bfed0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420bfed0(longlong param_1,int *param_2,int *param_3,longlong *param_4,longlong param_5,
                  longlong *param_6,longlong *param_7,char *param_8,float *param_9,char param_10,
                  longlong param_11,longlong param_12,char param_13)

{
  char *pcVar1;
  byte bVar2;
  void *_Src;
  int *piVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  float *pfVar7;
  longlong lVar8;
  undefined8 *puVar9;
  float *pfVar10;
  undefined8 *puVar11;
  longlong lVar12;
  byte bVar13;
  float *pfVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  ulonglong *puVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_3d8 [32];
  undefined4 local_3b8;
  uint local_3a8;
  ulonglong local_3a0;
  undefined8 local_398;
  int3 local_390;
  undefined1 uStack_38d;
  undefined4 local_38c;
  undefined2 local_388;
  longlong *local_380;
  undefined8 local_378;
  longlong local_370;
  undefined4 local_368;
  undefined4 local_364;
  longlong local_360;
  int *local_358;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined4 local_300;
  undefined8 local_2fc;
  undefined8 local_2f4;
  undefined4 local_2ec;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a4;
  undefined8 local_29c;
  undefined4 local_294;
  undefined4 local_288;
  longlong local_1b8 [32];
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_3d8;
  local_360 = param_11;
  pcVar1 = (char *)(param_5 + 0x80);
  local_370 = param_12;
  local_3a0 = local_3a0 & 0xffffffff00000000;
  local_3a8 = 0;
  local_380 = param_4;
  local_378 = param_3;
  local_358 = param_2;
  if (*(char *)(param_5 + 0xc0) == param_8[0x40]) {
    if (*(char *)(param_5 + 0xc0) == '\0') {
LAB_1420c0069:
      if (param_13 == '\0') {
        return;
      }
    }
    else if (*pcVar1 == *param_8) {
      if ((*(char *)(param_5 + 0xa8) == param_8[0x28]) &&
         (((*(char *)(param_5 + 0xa8) == '\0' ||
           (cVar4 = FSlateClippingZone::operator==(param_5 + 0x84), cVar4 != '\0')) &&
          (iVar17 = *(int *)(param_5 + 0xb8), iVar17 == *(int *)(param_8 + 0x38))))) {
        pfVar7 = *(float **)(param_8 + 0x30);
        if (iVar17 != 0) {
          pfVar14 = pfVar7 + 5;
          pfVar10 = (float *)(*(longlong *)(param_5 + 0xb0) + 0x14);
          do {
            bVar13 = *(byte *)(pfVar10 + 3);
            bVar2 = *(byte *)(pfVar14 + 3);
            if (((((((bVar13 ^ bVar2) & 1) != 0) || (((bVar13 ^ bVar2) & 2) != 0)) ||
                 ((((bVar13 ^ bVar2) & 4) != 0 ||
                  ((*pfVar7 != pfVar10[-5] || (pfVar14[-4] != pfVar10[-4])))))) ||
                (pfVar14[-3] != pfVar10[-3])) ||
               ((((pfVar14[-2] != pfVar10[-2] || (pfVar14[-1] != pfVar10[-1])) ||
                 (*pfVar14 != *pfVar10)) ||
                ((pfVar14[1] != pfVar10[1] || (pfVar14[2] != pfVar10[2])))))) goto LAB_1420c0072;
            pfVar7 = pfVar7 + 9;
            pfVar14 = pfVar14 + 9;
            pfVar10 = pfVar10 + 9;
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
        }
        goto LAB_1420c0069;
      }
    }
  }
LAB_1420c0072:
  if (*(char *)(param_5 + 0xc0) == '\0') {
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar11 + 5;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 5;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    **(undefined8 **)(param_1 + 8) = puVar11;
    *(undefined8 **)(param_1 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_143f59430;
    *(undefined1 *)(puVar11 + 2) = 0;
    *(undefined8 *)((longlong)puVar11 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar11 + 0x1c) = 0;
    uVar6 = FUN_1409853f0();
    *(undefined8 *)(local_360 + 0x40) = uVar6;
    *local_358 = 0;
    goto LAB_1420c0aff;
  }
  if (*(char *)(param_5 + 0xa8) == '\0') {
    if ((uint)(*param_3 + *(int *)(param_5 + 0xb8)) < 0x100) {
      if (*param_3 == 0) goto LAB_1420c0325;
      pfVar7 = (float *)FSlateClippingZone::GetBoundingBox
                                  (*(longlong *)(param_5 + 0xb0) + -0x24 +
                                   (longlong)*(int *)(param_5 + 0xb8) * 0x24);
      puVar18 = (ulonglong *)(param_1 + 0x30);
      fVar24 = (float)((int)ROUND(pfVar7[1] + pfVar7[1] + 0.5) >> 1) + param_9[1];
      fVar25 = (float)((int)ROUND(pfVar7[3] + pfVar7[3] + 0.5) >> 1) + param_9[1];
      local_380 = (longlong *)
                  (longlong)((float)((int)ROUND(pfVar7[2] + pfVar7[2] + 0.5) >> 1) + *param_9);
      local_3a0 = (ulonglong)((float)((int)ROUND(*pfVar7 + *pfVar7 + 0.5) >> 1) + *param_9);
      if (param_10 == '\0') {
        puVar11 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar9 = puVar11 + 5;
        if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
          FMemStackBase::AllocateNewChunk(puVar18);
          puVar11 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
          puVar9 = puVar11 + 5;
        }
        *puVar18 = (ulonglong)puVar9;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar11;
        puVar9 = puVar11 + 1;
        *(undefined8 **)(param_1 + 8) = puVar9;
        *(int *)(puVar11 + 3) = (int)(longlong)fVar24;
        *(int *)(puVar11 + 4) = (int)(longlong)fVar25;
      }
      else {
        (**(code **)(*param_4 + 0x20))(param_4);
        fVar21 = (float)local_398._4_4_;
        puVar11 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar9 = puVar11 + 5;
        if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
          FMemStackBase::AllocateNewChunk(puVar18);
          puVar11 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
          puVar9 = puVar11 + 5;
        }
        *puVar18 = (ulonglong)puVar9;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar11;
        puVar9 = puVar11 + 1;
        *(undefined8 **)(param_1 + 8) = puVar9;
        *(int *)(puVar11 + 3) = (int)(fVar21 - fVar25);
        *(int *)(puVar11 + 4) = (int)(fVar21 - fVar24);
      }
      *puVar9 = 0;
      bVar13 = 1;
      *puVar11 = &PTR_LAB_143f59430;
      *(int *)((longlong)puVar11 + 0x14) = (int)local_3a0;
      *(int *)((longlong)puVar11 + 0x1c) = (int)local_380;
      *(undefined1 *)(puVar11 + 2) = 1;
      if (param_13 != '\0') goto LAB_1420c058b;
    }
    else {
      *param_3 = 0;
LAB_1420c0325:
      puVar18 = (ulonglong *)(param_1 + 0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 5;
      if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
        FMemStackBase::AllocateNewChunk(puVar18,0x30);
        puVar11 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar9 = puVar11 + 5;
      }
      *puVar18 = (ulonglong)puVar9;
      bVar13 = 2;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar11;
      *(undefined8 **)(param_1 + 8) = puVar11 + 1;
      puVar11[1] = 0;
      *puVar11 = &PTR_LAB_143f59430;
      *(undefined1 *)(puVar11 + 2) = 0;
      *(undefined8 *)((longlong)puVar11 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar11 + 0x1c) = 0;
LAB_1420c058b:
      puVar18 = (ulonglong *)(param_1 + 0x30);
      lStack_b0 = -0x100000000;
      local_b8 = *param_6;
      local_a8 = CONCAT62(local_a8._2_6_,0x101);
      local_398 = (undefined *)*param_7;
      _local_390 = CONCAT13(1,(uint3)bVar13 << 0x10);
      local_38c = 0x22;
      FUN_140c63b80(&local_348,1,&local_b8,&local_398);
      FRHICommandListBase::CacheActiveRenderTargets(param_1,local_288,&local_348,local_1b8);
      puVar11 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar11 + 0x54;
      if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
        FMemStackBase::AllocateNewChunk(puVar18,0x2a8);
        puVar11 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
        puVar9 = puVar11 + 0x54;
      }
      *puVar18 = (ulonglong)puVar9;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar11;
      *(undefined8 **)(param_1 + 8) = puVar11 + 1;
      puVar11[1] = 0;
      *puVar11 = &PTR_FUN_1444d5488;
      FUN_140c63680(puVar11 + 2,&local_348);
      FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(&local_348);
    }
    puVar18 = (ulonglong *)(param_1 + 0x30);
    lVar12 = 0;
    local_308 = 0;
    local_348 = 0;
    uStack_340 = 0;
    local_338 = 0;
    uStack_330 = 0;
    local_328 = 0;
    uStack_320 = 0;
    local_318 = 0;
    uStack_310 = 0;
    local_2e8 = 0;
    uStack_2e0 = 0;
    local_300 = 0;
    local_2fc = 0x26;
    local_2f4 = 0;
    local_2ec = 0;
    local_2d8 = 0;
    local_2d0 = 0;
    local_2c8 = 0;
    local_2c0 = 0;
    local_2b8 = 0;
    local_2b0 = 0;
    local_2a8 = 0;
    local_2a4 = 0;
    local_29c = 0;
    local_294 = 0;
    FUN_14049afe0(param_1,&local_348);
    local_318 = FUN_141b08790();
    uStack_310 = FUN_140985530();
    local_308 = FUN_1420b6520();
    lVar8 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
    _local_390 = 0;
    local_398 = &DAT_146ae5230;
    plVar16 = (longlong *)(lVar8 + 0x38);
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar16,&local_3a0,&local_398);
    if ((int)local_3a0 != -1) {
      lVar12 = (longlong)(int)local_3a0 * 0x20 + *plVar16;
    }
    plVar15 = (longlong *)(lVar12 + 0x10);
    if (lVar12 == 0) {
      plVar15 = (longlong *)0x0;
    }
    _local_390 = 0;
    local_398 = &DAT_146ae5380;
    lVar8 = *plVar15;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId(plVar16,&local_3a0,&local_398);
    if ((int)local_3a0 == -1) {
      lVar12 = 0;
    }
    else {
      lVar12 = (longlong)(int)local_3a0 * 0x20 + *plVar16;
    }
    plVar16 = (longlong *)(lVar12 + 0x10);
    uVar6 = 0;
    if (lVar12 == 0) {
      plVar16 = (longlong *)0x0;
    }
    lVar12 = *plVar16;
    local_348 = DAT_146500f50;
    if (lVar8 == 0) {
      local_398 = (undefined *)0x0;
      local_3a8 = 1;
    }
    else {
      local_398 = *(undefined **)(lVar8 + 0x48);
      if (*(char *)((longlong)local_398 + 0x28) == '\0') {
        FUN_1419f3850(local_398);
      }
      uVar6 = *(undefined8 *)((longlong)local_398 + 0x38);
    }
    uStack_340 = uVar6;
    if ((local_3a8 & 1) != 0) {
      local_3a8 = local_3a8 & 0xfffffffe;
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>();
    }
    if (lVar12 == 0) {
      uVar5 = local_3a8 | 2;
      local_328 = 0;
      local_398 = (undefined *)0x0;
    }
    else {
      lVar12 = *(longlong *)(lVar12 + 0x48);
      if (*(char *)(lVar12 + 0x28) == '\0') {
        FUN_1419f3850(lVar12);
      }
      local_328 = *(undefined8 *)(lVar12 + 0x40);
      uVar5 = local_3a8;
    }
    if ((uVar5 & 2) != 0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_398);
    }
    local_2fc = CONCAT44(local_2fc._4_4_,1);
    FUN_141ed6ac0(param_1,&local_348,2,1);
    lVar12 = *(longlong *)(lVar8 + 0x48);
    if (*(char *)(lVar12 + 0x28) == '\0') {
      FUN_1419f3850(lVar12);
    }
    local_3b8 = 0;
    SetShaderValue<FRHIComputeShader_*,FMatrix,FRHICommandList>
              (param_1,*(undefined8 *)(lVar12 + 0x38),lVar8 + 0xc0,local_370);
    if (param_10 == '\0') {
      uVar19 = 0x3f800000;
    }
    else {
      uVar19 = 0xbf800000;
    }
    lVar12 = *(longlong *)(lVar8 + 0x48);
    local_3a0 = CONCAT44(local_3a0._4_4_,uVar19);
    if (*(char *)(lVar12 + 0x28) == '\0') {
      FUN_1419f3850(lVar12);
    }
    local_3b8 = 0;
    FUN_1404986d0(param_1,*(undefined8 *)(lVar12 + 0x38),lVar8 + 0xc6,&local_3a0);
    plVar16 = *(longlong **)(param_5 + 0xb0);
    puVar11 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
    iVar17 = *local_378;
    puVar9 = puVar11 + 3;
    if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(puVar18);
      puVar11 = (undefined8 *)(*puVar18 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar11 + 3;
    }
    *puVar18 = (ulonglong)puVar9;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    local_3b8 = 8;
    **(undefined8 **)(param_1 + 8) = puVar11;
    *(undefined8 **)(param_1 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_143f489c0;
    *(int *)(puVar11 + 2) = iVar17 + 1;
    local_b8 = *plVar16;
    lStack_b0 = plVar16[1];
    local_a8 = plVar16[2];
    lStack_a0 = plVar16[3];
    FUN_141a14d80(param_1,1,2,&local_b8);
    local_308 = FUN_1420b6660();
    FUN_141ed6ac0(param_1,&local_348,2,1);
    piVar3 = local_378;
    iVar17 = 1;
    *local_378 = *local_378 + *(int *)(param_5 + 0xb8);
    if (1 < *(int *)(param_5 + 0xb8)) {
      lVar8 = 0x24;
      do {
        local_3b8 = 8;
        plVar16 = (longlong *)(lVar8 + *(longlong *)(param_5 + 0xb0));
        local_b8 = *plVar16;
        lStack_b0 = plVar16[1];
        plVar16 = (longlong *)(lVar8 + 0x10 + *(longlong *)(param_5 + 0xb0));
        local_a8 = *plVar16;
        lStack_a0 = plVar16[1];
        FUN_141a14d80(param_1,1,2,&local_b8);
        iVar17 = iVar17 + 1;
        lVar8 = lVar8 + 0x24;
      } while (iVar17 < *(int *)(param_5 + 0xb8));
    }
    uVar6 = FUN_1420b63e0();
    *(undefined8 *)(local_360 + 0x40) = uVar6;
    iVar17 = *piVar3;
  }
  else {
    if ((param_13 != '\0') && (*param_3 != 0)) {
      local_38c = 0xffffffff;
      _local_390 = 0;
      local_388 = 0x101;
      local_398 = (undefined *)*param_6;
      local_368 = 0x1010000;
      local_364 = 0x22;
      local_370 = *param_7;
      FUN_140c63b80(&local_348,1,&local_398,&local_370);
      FRHICommandListBase::CacheActiveRenderTargets(param_1,local_288,&local_348,local_1b8);
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 0x54;
      if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
        FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x2a8);
        puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar11 + 0x54;
      }
      *(undefined8 **)(param_1 + 0x30) = puVar9;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar11;
      *(undefined8 **)(param_1 + 8) = puVar11 + 1;
      puVar11[1] = 0;
      *puVar11 = &PTR_FUN_1444d5488;
      FUN_140c63680(puVar11 + 2);
      FRHISetRenderTargetsInfo::~FRHISetRenderTargetsInfo(&local_348);
    }
    fVar24 = *param_9;
    fVar25 = *(float *)(param_5 + 0x9c);
    fVar21 = *(float *)(param_5 + 0x84);
    fVar23 = param_9[1] + *(float *)(param_5 + 0x88);
    fVar22 = param_9[1] + *(float *)(param_5 + 0xa0);
    if (param_10 == '\0') {
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar11 + 5;
      if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
        FMemStackBase::AllocateNewChunk(param_1 + 0x30);
        puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar11 + 5;
      }
      *(undefined8 **)(param_1 + 0x30) = puVar9;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar11;
      *(undefined8 **)(param_1 + 8) = puVar11 + 1;
      puVar11[1] = 0;
      *puVar11 = &PTR_LAB_143f59430;
      *(int *)(puVar11 + 4) = (int)(longlong)fVar22;
      *(int *)(puVar11 + 3) = (int)(longlong)fVar23;
    }
    else {
      (**(code **)(*local_380 + 0x20))();
      fVar20 = (float)local_378._4_4_;
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
      local_3a8 = (uint)(fVar20 - fVar23);
      puVar9 = puVar11 + 5;
      if (*(undefined8 **)(param_1 + 0x38) < puVar9) {
        FMemStackBase::AllocateNewChunk(param_1 + 0x30);
        puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar11 + 5;
      }
      *(undefined8 **)(param_1 + 0x30) = puVar9;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      **(undefined8 **)(param_1 + 8) = puVar11;
      *(undefined8 **)(param_1 + 8) = puVar11 + 1;
      puVar11[1] = 0;
      *puVar11 = &PTR_LAB_143f59430;
      *(uint *)(puVar11 + 4) = local_3a8;
      *(int *)(puVar11 + 3) = (int)(fVar20 - fVar22);
    }
    *(int *)((longlong)puVar11 + 0x1c) = (int)(longlong)(fVar24 + fVar25);
    *(int *)((longlong)puVar11 + 0x14) = (int)(longlong)(fVar24 + fVar21);
    *(undefined1 *)(puVar11 + 2) = 1;
    uVar6 = FUN_1409853f0();
    *(undefined8 *)(local_360 + 0x40) = uVar6;
    iVar17 = 0;
  }
  *local_358 = iVar17;
  FUN_14049afe0(param_1,local_360);
LAB_1420c0aff:
  if (pcVar1 != param_8) {
    if (param_8[0x40] != '\0') {
      param_8[0x40] = '\0';
      if (*(longlong *)(param_8 + 0x30) != 0) {
        FMemory::Free();
      }
      if (param_8[0x28] != '\0') {
        param_8[0x28] = '\0';
      }
    }
    if (*(char *)(param_5 + 0xc0) != '\0') {
      *param_8 = *pcVar1;
      param_8[0x28] = '\0';
      if (*(char *)(param_5 + 0xa8) != '\0') {
        uVar6 = *(undefined8 *)(param_5 + 0x8c);
        *(undefined8 *)(param_8 + 4) = *(undefined8 *)(param_5 + 0x84);
        *(undefined8 *)(param_8 + 0xc) = uVar6;
        uVar6 = *(undefined8 *)(param_5 + 0x9c);
        *(undefined8 *)(param_8 + 0x14) = *(undefined8 *)(param_5 + 0x94);
        *(undefined8 *)(param_8 + 0x1c) = uVar6;
        *(undefined4 *)(param_8 + 0x24) = *(undefined4 *)(param_5 + 0xa4);
        param_8[0x28] = '\x01';
      }
      param_8[0x30] = '\0';
      param_8[0x31] = '\0';
      param_8[0x32] = '\0';
      param_8[0x33] = '\0';
      param_8[0x34] = '\0';
      param_8[0x35] = '\0';
      param_8[0x36] = '\0';
      param_8[0x37] = '\0';
      iVar17 = *(int *)(param_5 + 0xb8);
      _Src = *(void **)(param_5 + 0xb0);
      *(int *)(param_8 + 0x38) = iVar17;
      if (iVar17 == 0) {
        param_8[0x3c] = '\0';
        param_8[0x3d] = '\0';
        param_8[0x3e] = '\0';
        param_8[0x3f] = '\0';
      }
      else {
        TArray<FCustomMeshTriangle,FDefaultAllocator>::ResizeForCopy(param_8 + 0x30,iVar17,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(param_8 + 0x30),_Src,(longlong)iVar17 * 0x24);
      }
      param_8[0x40] = '\x01';
    }
  }
  return;
}



// FUNCTION 1420c0be0 UpdateTexture body=145 status=ok
// SIG undefined UpdateTexture(void)

void FSlateUTextureResource::UpdateTexture(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(param_1 + 0x10);
  *(longlong *)(param_1 + 8) = param_2;
  if (puVar6 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)operator_new();
    puVar6 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = 0;
      puVar5[2] = 0;
      *(undefined4 *)(puVar5 + 1) = 0x3f800000;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0x3f800000;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar6 = puVar5;
    }
    *(undefined8 **)(param_1 + 0x10) = puVar6;
  }
  plVar1 = *(longlong **)(param_2 + 0x60);
  puVar6[2] = param_1;
  uVar3 = (**(code **)(*plVar1 + 0x48))(plVar1);
  uVar4 = (**(code **)(*plVar1 + 0x40))(plVar1);
  lVar2 = *(longlong *)(param_1 + 0x10);
  *(undefined4 *)(lVar2 + 0x18) = uVar4;
  *(undefined4 *)(lVar2 + 0x1c) = uVar3;
  return;
}



// FUNCTION 1420c0c80 FUN_1420c0c80 body=860 status=ok
// SIG undefined FUN_1420c0c80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1420c0c80(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_128 [32];
  int local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined1 local_e8;
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  iVar1 = *(int *)(param_3 + 100);
  if (((0 < *(int *)(param_3 + 0x58)) && (0 < *(int *)(param_3 + 0x60))) && (0 < iVar1)) {
    local_e8 = *(int *)(DAT_146ae4b90 + 4) != 0;
    iVar7 = *(int *)(param_3 + 0x60) * 0x28;
    local_d0 = param_3;
    if (*(int *)(param_4 + 0x38) < iVar7) {
      iVar8 = *(int *)(param_4 + 0x3c);
      if (*(int *)(param_4 + 0x3c) <= iVar7) {
        iVar8 = iVar7;
      }
      if ((iVar8 != 0) && (iVar8 != *(int *)(param_4 + 0x38))) {
        TRefCountPtr<FRHIIndexBuffer>::operator=(param_4 + 0x30,0);
        local_100 = &local_c8;
        local_b8 = 1;
        local_b4 = _DAT_1468b5d78;
        uStack_b0 = uRam00000001468b5d7c;
        uStack_ac = uRam00000001468b5d80;
        uStack_a8 = uRam00000001468b5d84;
        local_a4 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_a0 = 0;
        local_98 = 0;
        local_90 = 0;
        local_108 = 2;
        (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_e0,&DAT_146ab6e78,iVar8);
        TRefCountPtr<FRHIIndexBuffer>::operator=(param_4 + 0x30,local_e0);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_e0);
        *(int *)(param_4 + 0x38) = iVar8;
      }
    }
    *(int *)(param_4 + 0x40) = iVar7;
    iVar1 = iVar1 * 4;
    if (*(int *)(param_5 + 0x40) < iVar1) {
      iVar8 = *(int *)(param_5 + 0x44);
      if (*(int *)(param_5 + 0x44) <= iVar1) {
        iVar8 = iVar1;
      }
      if ((iVar8 != 0) && (iVar8 != *(int *)(param_5 + 0x40))) {
        TRefCountPtr<FRHIIndexBuffer>::operator=(param_5 + 0x30,0);
        local_f8 = &local_88;
        local_78 = 1;
        local_74 = _DAT_1468b5d78;
        uStack_70 = uRam00000001468b5d7c;
        uStack_6c = uRam00000001468b5d80;
        uStack_68 = uRam00000001468b5d84;
        local_64 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_60 = 0;
        local_58 = 0;
        local_50 = 0;
        local_100 = (undefined8 *)CONCAT44(local_100._4_4_,2);
        local_108 = iVar8;
        (**(code **)(*DAT_146ab6358 + 0x4f0))(DAT_146ab6358,local_d8,&DAT_146ab6e78,4);
        TRefCountPtr<FRHIIndexBuffer>::operator=(param_5 + 0x30,local_d8);
        TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_d8);
        *(int *)(param_5 + 0x40) = iVar8;
      }
    }
    *(int *)(param_5 + 0x48) = iVar1;
    if (DAT_146ab6383 == '\0') {
      local_100._0_4_ = 1;
      local_108 = iVar7;
      uVar4 = (**(code **)(*DAT_146ab6358 + 0x4b0))
                        (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_4 + 0x30),0);
      local_100 = (undefined8 *)CONCAT44(local_100._4_4_,1);
      local_108 = iVar1;
      uVar5 = (**(code **)(*DAT_146ab6358 + 0x4f8))
                        (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_5 + 0x30),0);
      FUN_14182d350(local_d0,uVar4,uVar5,local_e8);
      (**(code **)(*DAT_146ab6358 + 0x4b8))
                (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_4 + 0x30));
      (**(code **)(*DAT_146ab6358 + 0x500))
                (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_5 + 0x30));
    }
    else {
      puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar3 = puVar6 + 6;
      if (*(undefined8 **)(param_2 + 0x38) < puVar3) {
        FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar3 = puVar6 + 6;
      }
      *(undefined8 **)(param_2 + 0x30) = puVar3;
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      **(undefined8 **)(param_2 + 8) = puVar6;
      *(undefined8 **)(param_2 + 8) = puVar6 + 1;
      puVar6[1] = 0;
      *puVar6 = &PTR_ExecuteAndDestruct_144f966a8;
      lVar2 = *(longlong *)(param_4 + 0x30);
      puVar6[2] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      lVar2 = *(longlong *)(param_5 + 0x30);
      puVar6[3] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      puVar6[4] = local_d0;
      *(undefined1 *)(puVar6 + 5) = local_e8;
    }
  }
  return;
}



// FUNCTION 1420c0fe0 FUN_1420c0fe0 body=1986 status=ok
// SIG undefined FUN_1420c0fe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420c0fe0(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4,
                  int *param_5,undefined8 *param_6)

{
  ushort uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong *plVar12;
  undefined1 auStack_238 [32];
  float local_218;
  float local_210;
  undefined4 local_208;
  undefined4 local_200;
  float local_1f8;
  float local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined4 local_1d0;
  longlong local_1c8;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  uint local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  longlong local_1a0;
  undefined8 *local_198;
  longlong *local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  undefined8 local_170;
  longlong *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined *local_150;
  undefined4 local_148;
  undefined *local_140;
  undefined4 local_138;
  undefined8 local_128;
  longlong *plStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  ulonglong local_dc;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_74;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  local_1b4 = 0;
  local_1c0 = 0;
  local_e0 = 0;
  local_d4 = 0;
  local_cc = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_84 = 0;
  local_7c = 0;
  local_74 = 0;
  local_198 = param_6;
  local_128 = 0;
  plStack_120 = (longlong *)0x0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0x26;
  local_c8 = 0;
  uStack_c0 = 0;
  local_190 = param_3;
  local_f8 = FUN_1404a0ce0();
  local_f0 = FUN_140985530();
  local_e8 = FUN_1409853f0();
  lVar3 = *param_4;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  local_1b0 = *param_5;
  local_1a8 = param_5[1];
  puVar9 = (undefined8 *)*param_1;
  lVar5 = param_4[5];
  uVar2 = *(undefined4 *)((longlong)param_4 + 0x2c);
  plVar8 = (longlong *)puVar9[10];
  if ((longlong *)puVar9[10] == (longlong *)0x0) {
    plVar8 = puVar9 + 8;
  }
  local_1c8 = *plVar8;
  if (local_1c8 != 0) {
    LOCK();
    *(int *)(local_1c8 + 8) = *(int *)(local_1c8 + 8) + 1;
    UNLOCK();
    puVar9 = (undefined8 *)*param_1;
  }
  local_1a0 = lVar3;
  local_188 = local_1c8;
  local_1ac = (**(code **)*puVar9)(puVar9);
  local_1c0 = (**(code **)(*(longlong *)*param_1 + 8))();
  lVar4 = FUN_1419ef210((&DAT_1464c9c48)[DAT_1464c9c14]);
  local_148 = 0;
  local_150 = &DAT_146b09c50;
  plVar8 = (longlong *)(lVar4 + 0x38);
  local_168 = plVar8;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(plVar8,&local_1bc,&local_150);
  if (local_1bc == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = (longlong)local_1bc * 0x20 + *plVar8;
  }
  plVar8 = (longlong *)(lVar4 + 0x10);
  if (lVar4 == 0) {
    plVar8 = (longlong *)0x0;
  }
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  lVar4 = *plVar8;
  puVar9 = puVar10 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar9;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  *(int *)((longlong)puVar10 + 0x1c) = (int)lVar5;
  puVar10[1] = 0;
  *(undefined4 *)(puVar10 + 4) = uVar2;
  plVar6 = (longlong *)0x0;
  *puVar10 = &PTR_LAB_143f59420;
  *(undefined4 *)((longlong)puVar10 + 0x24) = 0;
  puVar10[2] = 0;
  *(undefined4 *)(puVar10 + 3) = 0;
  plVar12 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  plVar8 = plVar12 + 1;
  local_180 = lVar3;
  if (*(longlong **)(param_2 + 0x38) < plVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    plVar12 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar8 = plVar12 + 1;
  }
  *(longlong **)(param_2 + 0x30) = plVar8;
  *plVar12 = local_180;
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar10 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar9;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[3] = plVar12;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar10 + 2) = 1;
  *(undefined4 *)(puVar10 + 4) = 1;
  *(undefined1 *)((longlong)puVar10 + 0x24) = 0;
  local_178 = local_1c8;
  plVar12 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  plVar8 = plVar12 + 1;
  if (*(longlong **)(param_2 + 0x38) < plVar8) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x10);
    plVar12 = (longlong *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    plVar8 = plVar12 + 1;
  }
  *(longlong **)(param_2 + 0x30) = plVar8;
  *plVar12 = local_178;
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar10 + 5;
  if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar9;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  local_170 = 0;
  **(undefined8 **)(param_2 + 8) = puVar10;
  *(undefined8 **)(param_2 + 8) = puVar10 + 1;
  puVar10[1] = 0;
  *puVar10 = &PTR_LAB_143f59470;
  *(undefined4 *)(puVar10 + 2) = 1;
  puVar10[3] = plVar12;
  *(undefined4 *)(puVar10 + 4) = 0;
  *(undefined1 *)((longlong)puVar10 + 0x24) = 0;
  FUN_141a19150(param_2,lVar3,0,0);
  TRefCountPtr<FRHIComputeShader>::~TRefCountPtr<FRHIComputeShader>(&local_170);
  FUN_14049afe0(param_2,&local_128);
  if ((int)param_4[0xe] != 0) {
    plVar8 = (longlong *)param_4[0xc];
    plVar12 = plVar6;
    if (plVar8 == (longlong *)0x0) {
      plVar12 = param_4 + 8;
    }
    if (plVar12 != (longlong *)0x0 || plVar8 != (longlong *)0x0) {
      plVar12 = plVar6;
      if ((int)param_4[0xe] != 0) {
        if (plVar8 == (longlong *)0x0) {
          plVar8 = param_4 + 8;
        }
        if (plVar8 != (longlong *)0x0) {
          plVar12 = (longlong *)(**(code **)(*plVar8 + 8))();
        }
      }
      (*(code *)param_4[6])(plVar12,param_2,&local_128);
    }
  }
  plVar8 = local_168;
  local_140 = &DAT_146b09b00;
  local_138 = 0;
  TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
  ::FindId(local_168,&local_1b8,&local_140);
  plVar12 = plVar6;
  if (local_1b8 != -1) {
    plVar12 = (longlong *)((longlong)local_1b8 * 0x20 + *plVar8);
  }
  plVar8 = plVar12 + 2;
  if (plVar12 == (longlong *)0x0) {
    plVar8 = plVar6;
  }
  lVar3 = *plVar8;
  lVar5 = (**(code **)(*local_190 + 0xe0))();
  local_128 = *(undefined8 *)(lVar5 + 0x30);
  if (lVar4 == 0) {
    local_160 = 0;
    uVar11 = 1;
  }
  else {
    lVar5 = *(longlong *)(lVar4 + 0x48);
    if (*(char *)(lVar5 + 0x28) == '\0') {
      FUN_1419f3850(lVar5);
    }
    plVar6 = *(longlong **)(lVar5 + 0x38);
    uVar11 = local_1b4;
  }
  uVar7 = 0;
  plStack_120 = plVar6;
  if ((uVar11 & 1) != 0) {
    uVar11 = uVar11 & 0xfffffffe;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_160);
  }
  if (lVar3 == 0) {
    uVar11 = uVar11 | 2;
    local_158 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar3 + 0x48);
    if (*(char *)(lVar5 + 0x28) == '\0') {
      FUN_1419f3850(lVar5);
    }
    uVar7 = *(undefined8 *)(lVar5 + 0x40);
  }
  plVar8 = (longlong *)0x0;
  local_108 = uVar7;
  if ((uVar11 & 2) != 0) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_158);
  }
  local_dc = local_dc & 0xffffffff00000000;
  FUN_141ed6ac0(param_2,&local_128,2,1);
  if ((int)param_4[0x18] != 0) {
    plVar6 = (longlong *)param_4[0x16];
    plVar12 = plVar8;
    if (plVar6 == (longlong *)0x0) {
      plVar12 = param_4 + 0x12;
    }
    if (plVar12 != (longlong *)0x0 || plVar6 != (longlong *)0x0) {
      if ((int)param_4[0x18] != 0) {
        if (plVar6 == (longlong *)0x0) {
          plVar6 = param_4 + 0x12;
        }
        if (plVar6 != (longlong *)0x0) {
          plVar8 = (longlong *)(**(code **)(*plVar6 + 8))();
        }
      }
      (*(code *)param_4[0x10])(plVar8);
    }
  }
  lVar5 = *(longlong *)(lVar3 + 0x48);
  local_198 = (undefined8 *)*local_198;
  if (*(char *)(lVar5 + 0x28) == '\0') {
    FUN_1419f3850(lVar5);
  }
  uVar7 = *(undefined8 *)(lVar5 + 0x40);
  if (*(short *)(lVar3 + 0xc2) != 0) {
    uVar1 = *(ushort *)(lVar3 + 0xc0);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59c80;
    puVar10[4] = local_1c8;
    puVar10[2] = uVar7;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
  }
  if (*(short *)(lVar3 + 0xc6) != 0) {
    uVar1 = *(ushort *)(lVar3 + 0xc4);
    puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar10 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30);
      puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar10 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar9;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar10;
    *(undefined8 **)(param_2 + 8) = puVar10 + 1;
    puVar10[1] = 0;
    *puVar10 = &PTR_LAB_143f59c70;
    puVar10[4] = local_198;
    puVar10[2] = uVar7;
    *(uint *)(puVar10 + 3) = (uint)uVar1;
  }
  local_1f0 = 1.0;
  if (local_1b0 == local_1ac) {
    local_1f8 = 1.0;
  }
  else {
    local_1f8 = (float)local_1b0 * (1.0 / (float)local_1ac) - 1.0 / (float)local_1ac;
  }
  if (local_1a8 != local_1c0) {
    local_1f0 = (float)local_1a8 * (1.0 / (float)local_1c0) - 1.0 / (float)local_1c0;
  }
  local_210 = *(float *)((longlong)param_4 + 0x24) - *(float *)((longlong)param_4 + 0x1c);
  local_218 = *(float *)(param_4 + 4) - *(float *)(param_4 + 3);
  local_1d0 = 0;
  local_1c8 = 0x100000001;
  local_1e0 = 0x100000001;
  local_1e8 = param_4[5];
  local_200 = 0;
  local_208 = 0;
  local_1d8 = lVar4;
  (**(code **)(*local_190 + 0xd8))(local_190,param_2);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_188);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_1a0);
  return;
}



// FUNCTION 1420c17b0 FUN_1420c17b0 body=115 status=ok
// SIG undefined FUN_1420c17b0(void)

undefined8 * FUN_1420c17b0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(uint *)(param_1 + 3) =
       *(uint *)(param_1 + 3) ^ (*(uint *)(param_1 + 3) ^ *(uint *)(param_2 + 3)) & 1;
  uVar2 = (*(uint *)(param_1 + 3) ^ *(uint *)(param_2 + 3)) & 2 ^ *(uint *)(param_1 + 3);
  *(uint *)(param_1 + 3) = uVar2;
  uVar2 = (uVar2 ^ *(uint *)(param_2 + 3)) & 4 ^ uVar2;
  *(uint *)(param_1 + 3) = uVar2;
  *(uint *)(param_1 + 3) = (uVar2 ^ *(uint *)(param_2 + 3)) & 8 ^ uVar2;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 1420c1830 FUN_1420c1830 body=510 status=ok
// SIG undefined FUN_1420c1830(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420c1830(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 ***pppuVar8;
  undefined1 auStack_98 [32];
  undefined **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 **local_60;
  longlong lStack_58;
  byte local_50;
  longlong local_48;
  longlong lStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ae7a80) {
    _Init_thread_header(&DAT_146ae7a80);
    if (DAT_146ae7a80 == -1) {
      FMovieSceneAnimTypeID::Unique(&DAT_146ae7a78);
      _Init_thread_footer(&DAT_146ae7a80);
    }
  }
  bVar7 = local_50 & 0xfe;
  local_68 = DAT_146ae7a78;
  local_50 = bVar7 | 2;
  local_78 = &PTR__scalar_deleting_destructor__144fb2638;
  if ((*(byte *)(param_3 + 2) & 1) != 0) {
    local_60 = (undefined8 **)*param_3;
    lStack_58 = param_3[1];
    bVar5 = *(byte *)(param_3 + 2) & 0xfe;
    *(byte *)(param_3 + 2) = bVar5;
    local_50 = (bVar5 ^ bVar7) & 2 ^ bVar7 | 1;
  }
  local_38 = (undefined4)param_3[5];
  local_48 = param_3[3];
  lStack_40 = param_3[4];
  iVar3 = (int)param_1[1];
  local_30 = (undefined1)param_3[6];
  local_34 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(int *)(param_1 + 1) = iVar3 + 1;
  local_70 = param_2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  pbVar2 = (byte *)(lVar4 + 0x40 + (longlong)iVar3 * 0x48);
  *pbVar2 = *pbVar2 & 0xfc;
  puVar1 = (undefined8 *)(lVar4 + (longlong)iVar3 * 0x48);
  puVar6 = (undefined8 *)FMemory::Malloc(0x50);
  bVar7 = *(byte *)(puVar1 + 8);
  *puVar1 = puVar6;
  *(byte *)(puVar1 + 8) = bVar7 | 1;
  if ((bVar7 & 2) != 0) {
    puVar6 = puVar1;
  }
  *puVar6 = &PTR_FUN_144f1b048;
  puVar6[1] = local_70;
  puVar6[2] = local_68;
  *puVar6 = &PTR__scalar_deleting_destructor__144fb2638;
  bVar7 = *(byte *)(puVar6 + 5);
  *(byte *)(puVar6 + 5) = bVar7 & 0xfe | 2;
  if ((local_50 & 1) != 0) {
    *(byte *)(puVar6 + 5) = bVar7 & 0xfe | 3;
    *(byte *)(puVar6 + 5) = *(byte *)(puVar6 + 5) & 0xfd;
    *(byte *)(puVar6 + 5) = *(byte *)(puVar6 + 5) | local_50 & 2;
    puVar6[3] = local_60;
    puVar6[4] = lStack_58;
    local_50 = local_50 & 0xfe;
  }
  puVar6[6] = local_48;
  puVar6[7] = lStack_40;
  *(undefined4 *)(puVar6 + 8) = local_38;
  *(undefined4 *)((longlong)puVar6 + 0x44) = local_34;
  *(undefined1 *)(puVar6 + 9) = local_30;
  if ((local_50 & 1) != 0) {
    pppuVar8 = &local_60;
    if ((local_50 & 2) == 0) {
      pppuVar8 = (undefined8 ***)local_60;
    }
    local_50 = local_50 & 0xfe;
    (*(code *)**pppuVar8)(local_34,0);
    if ((local_50 & 2) == 0) {
      FMemory::Free(local_60);
    }
  }
  return;
}



// FUNCTION 1420c1a30 FUN_1420c1a30 body=528 status=ok
// SIG undefined FUN_1420c1a30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1420c1a30(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined8 ***pppuVar8;
  undefined1 auStack_a8 [32];
  undefined **local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 **local_70;
  longlong lStack_68;
  longlong local_60;
  longlong lStack_58;
  byte local_50;
  longlong local_48;
  longlong lStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ae7a70) {
    _Init_thread_header(&DAT_146ae7a70);
    if (DAT_146ae7a70 == -1) {
      FMovieSceneAnimTypeID::Unique(&DAT_146ae7a68);
      _Init_thread_footer(&DAT_146ae7a70);
    }
  }
  bVar7 = local_50 & 0xfe;
  local_78 = DAT_146ae7a68;
  local_50 = bVar7 | 2;
  local_88 = &PTR__scalar_deleting_destructor__144fb2628;
  if ((*(byte *)(param_3 + 4) & 1) != 0) {
    local_70 = (undefined8 **)*param_3;
    lStack_68 = param_3[1];
    bVar5 = *(byte *)(param_3 + 4) & 0xfe;
    local_60 = param_3[2];
    lStack_58 = param_3[3];
    *(byte *)(param_3 + 4) = bVar5;
    local_50 = (bVar5 ^ bVar7) & 2 ^ bVar7 | 1;
  }
  local_38 = (undefined4)param_3[7];
  local_48 = param_3[5];
  lStack_40 = param_3[6];
  iVar3 = (int)param_1[1];
  local_30 = (undefined1)param_3[8];
  local_34 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 1) = iVar3 + 1;
  local_80 = param_2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar3 + 1) {
    TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
  }
  lVar4 = *param_1;
  pbVar2 = (byte *)(lVar4 + 0x40 + (longlong)iVar3 * 0x48);
  *pbVar2 = *pbVar2 & 0xfc;
  puVar1 = (undefined8 *)(lVar4 + (longlong)iVar3 * 0x48);
  puVar6 = (undefined8 *)FMemory::Malloc(0x60);
  bVar7 = *(byte *)(puVar1 + 8);
  *puVar1 = puVar6;
  *(byte *)(puVar1 + 8) = bVar7 | 1;
  if ((bVar7 & 2) != 0) {
    puVar6 = puVar1;
  }
  *puVar6 = &PTR_FUN_144f1b048;
  puVar6[1] = local_80;
  puVar6[2] = local_78;
  *puVar6 = &PTR__scalar_deleting_destructor__144fb2628;
  bVar7 = *(byte *)(puVar6 + 7);
  *(byte *)(puVar6 + 7) = bVar7 & 0xfe | 2;
  if ((local_50 & 1) != 0) {
    *(byte *)(puVar6 + 7) = bVar7 & 0xfe | 3;
    *(byte *)(puVar6 + 7) = *(byte *)(puVar6 + 7) & 0xfd;
    *(byte *)(puVar6 + 7) = *(byte *)(puVar6 + 7) | local_50 & 2;
    puVar6[3] = local_70;
    puVar6[4] = lStack_68;
    puVar6[5] = local_60;
    puVar6[6] = lStack_58;
    local_50 = local_50 & 0xfe;
  }
  puVar6[8] = local_48;
  puVar6[9] = lStack_40;
  *(undefined4 *)(puVar6 + 10) = local_38;
  *(undefined4 *)((longlong)puVar6 + 0x54) = local_34;
  *(undefined1 *)(puVar6 + 0xb) = local_30;
  if ((local_50 & 1) != 0) {
    pppuVar8 = &local_70;
    if ((local_50 & 2) == 0) {
      pppuVar8 = (undefined8 ***)local_70;
    }
    local_50 = local_50 & 0xfe;
    (*(code *)**pppuVar8)(local_34,0);
    if ((local_50 & 2) == 0) {
      FMemory::Free(local_70);
    }
  }
  return;
}



// FUNCTION 1420c1c40 FUN_1420c1c40 body=985 status=ok
// SIG undefined FUN_1420c1c40(void)

longlong FUN_1420c1c40(longlong param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  int iVar16;
  longlong local_res8;
  int local_res20 [2];
  longlong local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [8];
  longlong *local_40;
  
  local_res8 = param_1;
  cVar7 = FWeakObjectPtr::IsValid(param_1 + 0x10);
  if (cVar7 == '\0') {
    return 0;
  }
  plVar15 = *(longlong **)(param_1 + 0x28);
  local_98 = 0;
  plVar4 = plVar15 + *(int *)(param_1 + 0x30);
  if (plVar15 == plVar4) {
LAB_1420c1d7e:
    local_90 = 0;
    lVar10 = FWeakObjectPtr::Get(param_1 + 0x10);
    if ((lVar10 == 0) || (lVar10 = FUN_1420f14c0(lVar10,param_2,local_90), lVar10 == 0)) {
LAB_1420c1ddc:
      lVar10 = 0;
    }
    else {
      lVar11 = UUserWidget::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar11 + 0x90) * 8) != lVar11 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_1420c1ddc;
    }
    local_98 = lVar10;
    if (lVar10 == 0) goto LAB_1420c1fa8;
  }
  else {
    do {
      lVar10 = *plVar15;
      lVar11 = *(longlong *)(lVar10 + 0x10);
      if (param_2 != 0) {
        lVar8 = UUserWidget::GetPrivateStaticClass();
        lVar13 = param_2;
        do {
          lVar9 = param_2;
          if (lVar13 == lVar8) goto LAB_1420c1ce5;
          lVar13 = *(longlong *)(lVar13 + 0x30);
        } while (lVar13 != 0);
      }
      lVar9 = 0;
LAB_1420c1ce5:
      if (lVar11 == lVar9) {
        plVar4 = *(longlong **)(param_1 + 0x28);
        iVar3 = *(int *)(param_1 + 0x30);
        plVar15 = plVar4;
        goto joined_r0x0001420c1d14;
      }
      plVar15 = plVar15 + 1;
    } while (plVar15 != plVar4);
LAB_1420c1d77:
    if (local_98 == 0) goto LAB_1420c1d7e;
  }
  lVar10 = local_res8;
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(local_res8 + 0x38,&local_res8,local_98);
  if (((int)local_res8 == -1) ||
     (lVar11 = (longlong)(int)local_res8 * 0x20 + *(longlong *)(lVar10 + 0x38), lVar11 == 0)) {
    local_88 = &local_98;
    FUN_1420c4ed0(lVar10 + 0x38,local_res20,&local_88,0);
    lVar11 = (longlong)local_res20[0] * 0x20 + *(longlong *)(lVar10 + 0x38);
  }
  if (*(longlong *)(lVar11 + 8) == 0) {
    local_58 = *param_3;
    uStack_54 = param_3[1];
    uStack_50 = param_3[2];
    uStack_4c = param_3[3];
    puVar12 = (undefined8 *)FUN_14213eb80(local_98,local_48,&local_58);
    plVar4 = (longlong *)puVar12[1];
    local_70 = *puVar12;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_40 + 1;
      lVar13 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
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
    plVar15 = plVar4 + 1;
    local_80 = local_70;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar15 = (int)*plVar15 + 1;
      UNLOCK();
    }
    local_78 = plVar4;
    if ((undefined8 *)(lVar11 + 8) != &local_80) {
      *(undefined8 *)(lVar11 + 8) = local_70;
      local_80 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(lVar11 + 0x10,&local_78);
    }
    plVar6 = local_78;
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_78 + 1;
      lVar11 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      lVar11 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
  iVar3 = *(int *)(lVar10 + 0x20);
  *(int *)(lVar10 + 0x20) = iVar3 + 1;
  if (*(int *)(lVar10 + 0x24) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar10 + 0x18,iVar3);
  }
  *(longlong *)(*(longlong *)(lVar10 + 0x18) + (longlong)iVar3 * 8) = local_98;
LAB_1420c1fa8:
  lVar10 = local_98;
  if (local_98 != 0) {
    lVar13 = UUserWidget::GetPrivateStaticClass();
    lVar11 = *(longlong *)(lVar10 + 0x10);
    if ((*(int *)(lVar11 + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar11 + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8) !=
        lVar13 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      return lVar10;
    }
  }
  return 0;
joined_r0x0001420c1d14:
  local_98 = lVar10;
  if (plVar15 == plVar4 + iVar3) goto LAB_1420c1d77;
  if (*plVar15 == lVar10) {
    iVar14 = (int)((longlong)plVar15 - (longlong)plVar4 >> 3);
    if (iVar14 != -1) {
      iVar16 = (iVar3 - iVar14) + -1;
      if (0 < iVar16) {
        iVar16 = 1;
      }
      if (iVar16 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (plVar4 + iVar14,plVar4 + (iVar3 - iVar16),(longlong)iVar16 << 3);
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x28));
    }
    goto LAB_1420c1d77;
  }
  plVar15 = plVar15 + 1;
  goto joined_r0x0001420c1d14;
}



// FUNCTION 1420c2020 BlendValue<float,FWidgetTransform,7> body=410 status=ok
// SIG undefined BlendValue<float,FWidgetTransform,7>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void MovieScene::BlendValue<float,FWidgetTransform,7>
               (longlong param_1,longlong param_2,float param_3,char param_4,undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  float *pfVar9;
  float fVar10;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_80;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  pfVar9 = (float *)(param_1 + 0x20);
  uVar6 = 0;
  do {
    uVar8 = 1 << ((byte)uVar6 & 0x1f);
    if ((*(uint *)(param_2 + 0x1c) & uVar8) != 0) {
      uVar7 = uVar6 & 0xff;
      fVar10 = *(float *)(param_2 + uVar7 * 4);
      if (param_4 != '\x01') {
        if (param_4 != '\x04') {
          if (param_4 == '\x02') {
            fVar10 = fVar10 * param_3;
            if ((*(uint *)(param_1 + 0x58) & uVar8) != 0) {
              fVar10 = fVar10 + *(float *)(param_1 + 0x3c + uVar7 * 4);
            }
            *(float *)(param_1 + 0x3c + uVar7 * 4) = fVar10;
            *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | uVar8;
          }
          goto LAB_1420c2169;
        }
        if (*(char *)(param_1 + 0x7c) == '\0') {
          *(undefined4 *)(param_1 + 0x78) = 0;
          *(undefined1 *)(param_1 + 0x7c) = 1;
          puVar5 = (undefined8 *)
                   TMovieSceneInitialValueStore<FWidgetTransform>::GetInitialValue(param_5,local_b8)
          ;
          uVar3 = *puVar5;
          uVar4 = puVar5[1];
          uVar1 = *(undefined4 *)(puVar5 + 2);
          uVar2 = *(undefined4 *)((longlong)puVar5 + 0x14);
          local_68 = *(undefined4 *)(puVar5 + 2);
          uStack_64 = *(undefined4 *)((longlong)puVar5 + 0x14);
          local_80 = *(undefined4 *)(puVar5 + 3);
          local_98._0_4_ = (undefined4)uVar3;
          local_98._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          uStack_90._0_4_ = (undefined4)uVar4;
          uStack_90._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          *(undefined4 *)(param_1 + 0x5c) = (undefined4)local_98;
          *(undefined4 *)(param_1 + 0x60) = local_98._4_4_;
          *(undefined4 *)(param_1 + 100) = (undefined4)uStack_90;
          *(undefined4 *)(param_1 + 0x68) = uStack_90._4_4_;
          uStack_5c = 0x7f;
          *(undefined4 *)(param_1 + 0x6c) = uVar1;
          *(undefined4 *)(param_1 + 0x70) = uVar2;
          *(undefined4 *)(param_1 + 0x74) = local_80;
          *(undefined4 *)(param_1 + 0x78) = 0x7f;
          local_98 = uVar3;
          uStack_90 = uVar4;
          uStack_60 = local_80;
        }
        fVar10 = fVar10 + *(float *)(param_1 + 0x5c + uVar7 * 4);
      }
      fVar10 = fVar10 * param_3;
      if ((*(uint *)(param_1 + 0x1c) & uVar8) != 0) {
        fVar10 = fVar10 + *(float *)(param_1 + uVar7 * 4);
      }
      *(float *)(param_1 + uVar7 * 4) = fVar10;
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | uVar8;
      *pfVar9 = param_3 + *pfVar9;
    }
LAB_1420c2169:
    uVar8 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar8;
    pfVar9 = pfVar9 + 1;
    if (6 < (int)uVar8) {
      return;
    }
  } while( true );
}



// FUNCTION 1420c21c0 CallFunction<FMargin> body=159 status=ok
// SIG undefined CallFunction<FMargin>(void)

void FTrackInstancePropertyBindings::CallFunction<FMargin>
               (undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 local_28 [8];
  longlong local_20;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  FindOrAdd(param_1,local_28,param_2);
  lVar4 = FWeakObjectPtr::Get(local_18);
  if (lVar4 == 0) {
    lVar4 = FWeakObjectPtr::Get(local_28);
    if ((((lVar4 != 0) && (local_20 != 0)) && ((*(uint *)(lVar4 + 8) & 0x18000) == 0)) &&
       (puVar5 = (undefined4 *)(*(int *)(lVar4 + 0x44) + local_20), puVar5 != (undefined4 *)0x0)) {
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      uVar3 = param_3[3];
      *puVar5 = *param_3;
      puVar5[1] = uVar1;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
    }
  }
  else {
    (**(code **)(*param_2 + 0x208))(param_2,lVar4,param_3);
  }
  lVar4 = FWeakObjectPtr::Get(local_10);
  if (lVar4 != 0) {
    (**(code **)(*param_2 + 0x208))(param_2,lVar4,0);
  }
  return;
}



// FUNCTION 1420c2260 CallFunction<FWidgetTransform> body=175 status=ok
// SIG undefined CallFunction<FWidgetTransform>(void)

void FTrackInstancePropertyBindings::CallFunction<FWidgetTransform>
               (undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 local_28 [8];
  longlong local_20;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  FindOrAdd(param_1,local_28,param_2);
  lVar4 = FWeakObjectPtr::Get(local_18);
  if (lVar4 == 0) {
    lVar4 = FWeakObjectPtr::Get(local_28);
    if ((((lVar4 != 0) && (local_20 != 0)) && ((*(uint *)(lVar4 + 8) & 0x18000) == 0)) &&
       (puVar5 = (undefined4 *)(*(int *)(lVar4 + 0x44) + local_20), puVar5 != (undefined4 *)0x0)) {
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      uVar3 = param_3[3];
      *puVar5 = *param_3;
      puVar5[1] = uVar1;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(param_3 + 4);
      puVar5[6] = param_3[6];
    }
  }
  else {
    (**(code **)(*param_2 + 0x208))(param_2,lVar4,param_3);
  }
  lVar4 = FWeakObjectPtr::Get(local_10);
  if (lVar4 != 0) {
    (**(code **)(*param_2 + 0x208))(param_2,lVar4,0);
  }
  return;
}



// FUNCTION 1420c2310 FUN_1420c2310 body=376 status=ok
// SIG undefined FUN_1420c2310(void)

undefined8 * FUN_1420c2310(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar7 = (undefined8 *)
           FUN_1420c2490(local_18,param_1,param_1 + 0x2a8,*(undefined1 *)(param_1 + 0x2a0),
                         *(undefined1 *)(param_1 + 0x2a2),*(undefined1 *)(param_1 + 0x2a1));
  local_20 = (longlong *)puVar7[1];
  local_28 = *puVar7;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  puVar7 = (undefined8 *)(param_1 + 0x2b8);
  if (puVar7 != &local_28) {
    *puVar7 = local_28;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x2c0,&local_20);
  }
  plVar4 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 0x2c0);
  uVar5 = *puVar7;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_2 = uVar5;
  param_2[1] = plVar4;
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
  return param_2;
}



// FUNCTION 1420c2490 FUN_1420c2490 body=1814 status=ok
// SIG undefined FUN_1420c2490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1420c2490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5,undefined1 param_6)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_368 [32];
  undefined8 local_348;
  undefined1 local_338 [8];
  undefined8 local_330;
  undefined8 uStack_328;
  undefined1 *local_320;
  undefined8 local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined1 local_2c4;
  longlong local_2c0;
  undefined4 local_2b8;
  longlong *local_2b0 [3];
  undefined1 local_298 [592];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_368;
  uStack_328 = (longlong *)CONCAT44(uStack_328._4_4_,0x208);
  uStack_2d0 = 0x208;
  local_330 = ITypedUMGListView<UObject_*>::HandleItemDoubleClicked;
  uStack_2e0 = 0x208;
  local_2d8 = ITypedUMGListView<UObject_*>::HandleItemClicked;
  uStack_2f0 = 0;
  local_2e8 = FUN_142102590;
  uStack_300 = 0x208;
  local_2f8 = FUN_1421036a0;
  uStack_310 = 0x208;
  local_308 = ITypedUMGListView<UObject_*>::HandleSelectionChanged;
  local_318 = FUN_142100de0;
  local_2c4 = 1;
  local_2c0 = 0;
  local_2b8 = 0;
  local_2c8 = param_4;
  lVar5 = FUN_14068eb10(local_298);
  *(undefined8 *)(lVar5 + 0x148) = param_3;
  *(undefined1 *)(lVar5 + 0x208) = 1;
  plVar7 = (longlong *)(lVar5 + 0x1b0);
  *(undefined1 *)(lVar5 + 0x1d0) = param_5;
  *(undefined1 *)(lVar5 + 0x202) = param_6;
  *(undefined4 *)(lVar5 + 0x1a8) = param_4;
  *(undefined1 *)(lVar5 + 0x1ac) = 1;
  if (((&local_2c0 != plVar7) && (*(int *)(lVar5 + 0x1b8) != 0)) &&
     (plVar8 = (longlong *)*plVar7, plVar8 != (longlong *)0x0)) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    if (*plVar7 != 0) {
      lVar6 = FMemory::Realloc(*plVar7,0,0);
      *plVar7 = lVar6;
    }
    *(undefined4 *)(lVar5 + 0x1b8) = 0;
  }
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  local_2b0[0] = plVar7;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_144fb22c0;
    FWeakObjectPtr::operator=(plVar7 + 1,param_2);
    *(undefined4 *)(plVar7 + 2) = (undefined4)local_318;
    *(undefined4 *)((longlong)plVar7 + 0x14) = local_318._4_4_;
    *(undefined4 *)(plVar7 + 3) = uStack_310;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_30c;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar6;
  }
  pplVar2 = (longlong **)(lVar5 + 0x108);
  if (local_2b0 != pplVar2) {
    if (plVar7 == (longlong *)0x0) {
      if ((*(int *)(lVar5 + 0x110) != 0) && (plVar8 = *pplVar2, plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        if (*pplVar2 != (longlong *)0x0) {
          plVar8 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
          *pplVar2 = plVar8;
        }
        *(undefined4 *)(lVar5 + 0x110) = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x30))(plVar7,pplVar2);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_2b0[0] = (longlong *)FMemory::Realloc(plVar7,0,0);
    if (local_2b0[0] != (longlong *)0x0) {
      FMemory::Free(local_2b0[0]);
    }
  }
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  local_318 = (code *)plVar7;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_14428ae88;
    FWeakObjectPtr::operator=(plVar7 + 1,param_2);
    *(undefined4 *)(plVar7 + 2) = (undefined4)local_308;
    *(undefined4 *)((longlong)plVar7 + 0x14) = local_308._4_4_;
    *(undefined4 *)(plVar7 + 3) = uStack_300;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_2fc;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar6;
    *plVar7 = (longlong)&PTR_FUN_14428aed0;
  }
  plVar8 = (longlong *)(lVar5 + 0x198);
  if (&local_318 != plVar8) {
    if (plVar7 == (longlong *)0x0) {
      if ((*(int *)(lVar5 + 0x1a0) != 0) &&
         (plVar4 = (longlong *)*plVar8, plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        if (*plVar8 != 0) {
          lVar6 = FMemory::Realloc(*plVar8,0,0);
          *plVar8 = lVar6;
        }
        *(undefined4 *)(lVar5 + 0x1a0) = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x30))(plVar7,plVar8);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_318 = (code *)FMemory::Realloc(plVar7,0,0);
    if (local_318 != (code *)0x0) {
      FMemory::Free(local_318);
    }
  }
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  local_308 = (code *)plVar7;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar7 + 1,param_2);
    *(undefined4 *)(plVar7 + 2) = (undefined4)local_2f8;
    *(undefined4 *)((longlong)plVar7 + 0x14) = local_2f8._4_4_;
    *(undefined4 *)(plVar7 + 3) = uStack_2f0;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_2ec;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar6;
    *plVar7 = (longlong)&PTR_FUN_143fcff08;
  }
  plVar8 = (longlong *)(lVar5 + 0x118);
  if (&local_308 != plVar8) {
    if (plVar7 == (longlong *)0x0) {
      if ((*(int *)(lVar5 + 0x120) != 0) &&
         (plVar4 = (longlong *)*plVar8, plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        if (*plVar8 != 0) {
          lVar6 = FMemory::Realloc(*plVar8,0,0);
          *plVar8 = lVar6;
        }
        *(undefined4 *)(lVar5 + 0x120) = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x30))(plVar7,plVar8);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_308 = (code *)FMemory::Realloc(plVar7,0,0);
    if (local_308 != (code *)0x0) {
      FMemory::Free(local_308);
    }
  }
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  local_2f8 = (code *)plVar7;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_144012f30;
    FWeakObjectPtr::operator=(plVar7 + 1,param_2);
    *(undefined4 *)(plVar7 + 2) = (undefined4)local_2e8;
    *(undefined4 *)((longlong)plVar7 + 0x14) = local_2e8._4_4_;
    *(undefined4 *)(plVar7 + 3) = uStack_2e0;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_2dc;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar6;
    *plVar7 = (longlong)&PTR_FUN_144012f78;
  }
  plVar8 = (longlong *)(lVar5 + 0x138);
  if (&local_2f8 != plVar8) {
    if (plVar7 == (longlong *)0x0) {
      if ((*(int *)(lVar5 + 0x140) != 0) &&
         (plVar4 = (longlong *)*plVar8, plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        if (*plVar8 != 0) {
          lVar6 = FMemory::Realloc(*plVar8,0,0);
          *plVar8 = lVar6;
        }
        *(undefined4 *)(lVar5 + 0x140) = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x30))(plVar7,plVar8);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_2f8 = (code *)FMemory::Realloc(plVar7,0,0);
    if (local_2f8 != (code *)0x0) {
      FMemory::Free(local_2f8);
    }
  }
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  local_2e8 = (code *)plVar7;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar7 + 1,param_2);
    *(undefined4 *)(plVar7 + 2) = (undefined4)local_2d8;
    *(undefined4 *)((longlong)plVar7 + 0x14) = local_2d8._4_4_;
    *(undefined4 *)(plVar7 + 3) = uStack_2d0;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_2cc;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar6;
    *plVar7 = (longlong)&PTR_FUN_143fcff08;
  }
  plVar8 = (longlong *)(lVar5 + 0x178);
  if (&local_2e8 != plVar8) {
    if (plVar7 == (longlong *)0x0) {
      if ((*(int *)(lVar5 + 0x180) != 0) &&
         (plVar4 = (longlong *)*plVar8, plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        if (*plVar8 != 0) {
          lVar6 = FMemory::Realloc(*plVar8,0,0);
          *plVar8 = lVar6;
        }
        *(undefined4 *)(lVar5 + 0x180) = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x30))(plVar7,plVar8);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_2e8 = (code *)FMemory::Realloc(plVar7,0,0);
    if (local_2e8 != (code *)0x0) {
      FMemory::Free(local_2e8);
    }
  }
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  local_2d8 = (code *)plVar7;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar7 + 1,param_2);
    *(undefined4 *)(plVar7 + 2) = (undefined4)local_330;
    *(undefined4 *)((longlong)plVar7 + 0x14) = local_330._4_4_;
    *(undefined4 *)(plVar7 + 3) = (undefined4)uStack_328;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_328._4_4_;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar6;
    *plVar7 = (longlong)&PTR_FUN_143fcff08;
  }
  plVar8 = (longlong *)(lVar5 + 0x188);
  if (&local_2d8 != plVar8) {
    if (plVar7 == (longlong *)0x0) {
      if ((*(int *)(lVar5 + 400) != 0) && (plVar4 = (longlong *)*plVar8, plVar4 != (longlong *)0x0))
      {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        if (*plVar8 != 0) {
          lVar6 = FMemory::Realloc(*plVar8,0,0);
          *plVar8 = lVar6;
        }
        *(undefined4 *)(lVar5 + 400) = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x30))(plVar7,plVar8);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_2d8 = (code *)FMemory::Realloc(plVar7,0,0);
    if (local_2d8 != (code *)0x0) {
      FMemory::Free(local_2d8);
    }
  }
  plVar7 = (longlong *)operator_new(0x638);
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar7 + 1) = 1;
    *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
    *plVar7 = (longlong)&PTR_FUN_144fb2748;
    if (plVar7 + 2 != (longlong *)0x0) {
      FUN_1420ccc10(plVar7 + 2,0);
    }
  }
  plVar8 = plVar7 + 2;
  local_330 = (code *)plVar8;
  uStack_328 = plVar7;
  FUN_14044f790(&local_330,plVar8);
  local_320 = local_338;
  local_348 = 0x628;
  SWidget::SetDebugInfo
            (plVar8,"ListViewT<ItemType>",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Public\\Components/ListViewBase.h",0xb7);
  FUN_1420dacb0(&local_330,param_1,lVar5);
  plVar7 = uStack_328;
  if (uStack_328 != (longlong *)0x0) {
    LOCK();
    plVar8 = uStack_328 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*uStack_328)(uStack_328);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_328 + 8))(uStack_328,1);
      }
    }
  }
  FUN_1420d7ab0(local_298);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2c0);
  return param_1;
}



// FUNCTION 1420c2bb0 FUN_1420c2bb0 body=592 status=ok
// SIG undefined FUN_1420c2bb0(void)

undefined8 * FUN_1420c2bb0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined8 local_18;
  undefined4 local_10;
  
  local_38 = *(undefined4 *)(param_1 + 0x31c);
  local_20 = *(undefined4 *)(param_1 + 0x318);
  local_34 = 1;
  local_30 = 0;
  local_28 = 0;
  local_1c = 1;
  local_18 = 0;
  local_10 = 0;
  puVar7 = (undefined8 *)
           FUN_1420c2e00(local_48,param_1,param_1 + 0x2a8,*(undefined1 *)(param_1 + 800),&local_20,
                         &local_38,*(undefined1 *)(param_1 + 0x2a0),*(undefined1 *)(param_1 + 0x2a2)
                         ,*(undefined1 *)(param_1 + 0x321),*(undefined1 *)(param_1 + 0x2a1));
  local_50 = (longlong *)puVar7[1];
  local_58 = *puVar7;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
  puVar7 = (undefined8 *)(param_1 + 0x328);
  if (puVar7 != &local_58) {
    *puVar7 = local_58;
    local_58 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x330,&local_50);
  }
  local_60 = *(longlong **)(param_1 + 0x330);
  local_68 = *puVar7;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  if ((undefined8 *)(param_1 + 0x2b8) != &local_68) {
    *(undefined8 *)(param_1 + 0x2b8) = local_68;
    local_68 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x2c0,&local_60);
  }
  plVar4 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  plVar4 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
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
  plVar4 = *(longlong **)(param_1 + 0x330);
  uVar5 = *puVar7;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_2 = uVar5;
  param_2[1] = plVar4;
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
  return param_2;
}



// FUNCTION 1420c2e00 FUN_1420c2e00 body=2375 status=ok
// SIG undefined FUN_1420c2e00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1420c2e00(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined4 *param_5,undefined4 *param_6,undefined4 param_7,undefined1 param_8,
             undefined1 param_9,undefined1 param_10)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_3e8 [32];
  longlong local_3c8;
  longlong local_3c0;
  undefined4 local_3b8;
  longlong local_3b0;
  longlong local_3a8;
  longlong local_3a0;
  undefined1 local_398;
  undefined1 local_390;
  longlong local_388;
  undefined8 local_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 local_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 local_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  longlong *local_328;
  undefined4 *local_320;
  undefined4 *local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined4 local_2f8;
  undefined1 local_2f4;
  longlong local_2f0;
  undefined4 local_2e8;
  undefined1 local_2e0;
  undefined1 local_2df;
  longlong local_2d8;
  undefined4 local_2d0;
  longlong *local_2c8 [2];
  undefined1 local_2b8 [264];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined1 local_180 [32];
  undefined1 local_160 [24];
  undefined1 local_148 [24];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [24];
  undefined1 local_d8 [32];
  longlong *local_b8;
  undefined1 local_a8 [40];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3e8;
  local_310 = ITypedUMGListView<UObject_*>::HandleItemDoubleClicked;
  local_338 = ITypedUMGListView<UObject_*>::HandleItemClicked;
  uStack_360 = 0;
  local_348 = FUN_142102590;
  local_358 = ITypedUMGListView<UObject_*>::HandleSelectionChanged;
  local_368 = FUN_1421036a0;
  local_2d8 = 0;
  local_2d0 = 0;
  local_2f0 = 0;
  local_2e8 = 0;
  local_378 = FUN_142100de0;
  uStack_308 = (longlong *)CONCAT44(uStack_308._4_4_,0x208);
  uStack_330 = 0x208;
  uStack_340 = 0x208;
  uStack_350 = 0x208;
  uStack_370 = 0x208;
  local_2df = 1;
  local_2f8 = param_7;
  local_2f4 = 1;
  local_328 = param_1;
  local_2e0 = param_4;
  lVar7 = FUN_1418cd900(local_2b8);
  *(undefined1 *)(lVar7 + 0x228) = 1;
  *(undefined8 *)(lVar7 + 0x148) = param_3;
  *(undefined1 *)(lVar7 + 0x1f0) = param_8;
  *(undefined1 *)(lVar7 + 0x268) = param_9;
  *(undefined1 *)(lVar7 + 0x222) = param_10;
  *(undefined4 *)(lVar7 + 0x1d8) = param_7;
  plVar9 = (longlong *)(lVar7 + 0x1e0);
  *(undefined1 *)(lVar7 + 0x1dc) = 1;
  if (((&local_2f0 != plVar9) && (*(int *)(lVar7 + 0x1e8) != 0)) &&
     (plVar10 = (longlong *)*plVar9, plVar10 != (longlong *)0x0)) {
    (**(code **)(*plVar10 + 0x28))(plVar10,0);
    if (*plVar9 != 0) {
      lVar8 = FMemory::Realloc(*plVar9,0,0);
      *plVar9 = lVar8;
    }
    *(undefined4 *)(lVar7 + 0x1e8) = 0;
  }
  *(undefined4 *)(lVar7 + 0x150) = *param_5;
  *(undefined1 *)(lVar7 + 0x154) = *(undefined1 *)(param_5 + 1);
  local_320 = param_5 + 2;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x158,local_320);
  *(undefined4 *)(lVar7 + 0x168) = *param_6;
  *(undefined1 *)(lVar7 + 0x16c) = *(undefined1 *)(param_6 + 1);
  local_318 = param_6 + 2;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x170,local_318);
  *(undefined1 *)(lVar7 + 0x180) = param_4;
  plVar9 = (longlong *)(lVar7 + 0x188);
  *(undefined1 *)(lVar7 + 0x181) = 1;
  if (((&local_2d8 != plVar9) && (*(int *)(lVar7 + 400) != 0)) &&
     (plVar10 = (longlong *)*plVar9, plVar10 != (longlong *)0x0)) {
    (**(code **)(*plVar10 + 0x28))(plVar10,0);
    if (*plVar9 != 0) {
      lVar8 = FMemory::Realloc(*plVar9,0,0);
      *plVar9 = lVar8;
    }
    *(undefined4 *)(lVar7 + 400) = 0;
  }
  plVar9 = (longlong *)FMemory::Realloc(0,0x30);
  local_2c8[0] = plVar9;
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_FUN_144fb22c0;
    FWeakObjectPtr::operator=(plVar9 + 1,param_2);
    *(undefined4 *)(plVar9 + 2) = (undefined4)local_378;
    *(undefined4 *)((longlong)plVar9 + 0x14) = local_378._4_4_;
    *(undefined4 *)(plVar9 + 3) = uStack_370;
    *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_36c;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar9[5] = lVar8;
  }
  pplVar2 = (longlong **)(lVar7 + 0x108);
  if (local_2c8 != pplVar2) {
    if (plVar9 == (longlong *)0x0) {
      if ((*(int *)(lVar7 + 0x110) != 0) && (plVar10 = *pplVar2, plVar10 != (longlong *)0x0)) {
        (**(code **)(*plVar10 + 0x28))(plVar10,0);
        if (*pplVar2 != (longlong *)0x0) {
          plVar10 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
          *pplVar2 = plVar10;
        }
        *(undefined4 *)(lVar7 + 0x110) = 0;
      }
    }
    else {
      (**(code **)(*plVar9 + 0x30))(plVar9,pplVar2);
    }
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,0);
    local_2c8[0] = (longlong *)FMemory::Realloc(plVar9,0,0);
    if (local_2c8[0] != (longlong *)0x0) {
      FMemory::Free(local_2c8[0]);
    }
  }
  plVar9 = (longlong *)FMemory::Realloc(0,0x30);
  local_378 = (code *)plVar9;
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar9 + 1,param_2);
    *(undefined4 *)(plVar9 + 2) = (undefined4)local_368;
    *(undefined4 *)((longlong)plVar9 + 0x14) = local_368._4_4_;
    *(undefined4 *)(plVar9 + 3) = uStack_360;
    *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_35c;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar9[5] = lVar8;
    *plVar9 = (longlong)&PTR_FUN_143fcff08;
  }
  plVar10 = (longlong *)(lVar7 + 0x118);
  if (&local_378 != plVar10) {
    if (plVar9 == (longlong *)0x0) {
      if ((*(int *)(lVar7 + 0x120) != 0) &&
         (plVar4 = (longlong *)*plVar10, plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        if (*plVar10 != 0) {
          lVar8 = FMemory::Realloc(*plVar10,0,0);
          *plVar10 = lVar8;
        }
        *(undefined4 *)(lVar7 + 0x120) = 0;
      }
    }
    else {
      (**(code **)(*plVar9 + 0x30))(plVar9,plVar10);
    }
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,0);
    local_378 = (code *)FMemory::Realloc(plVar9,0,0);
    if (local_378 != (code *)0x0) {
      FMemory::Free(local_378);
    }
  }
  plVar9 = (longlong *)FMemory::Realloc(0,0x30);
  local_368 = (code *)plVar9;
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_FUN_14428ae88;
    FWeakObjectPtr::operator=(plVar9 + 1,param_2);
    *(undefined4 *)(plVar9 + 2) = (undefined4)local_358;
    *(undefined4 *)((longlong)plVar9 + 0x14) = local_358._4_4_;
    *(undefined4 *)(plVar9 + 3) = uStack_350;
    *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_34c;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar9[5] = lVar8;
    *plVar9 = (longlong)&PTR_FUN_14428aed0;
  }
  plVar10 = (longlong *)(lVar7 + 0x1c8);
  if (&local_368 != plVar10) {
    if (plVar9 == (longlong *)0x0) {
      if ((*(int *)(lVar7 + 0x1d0) != 0) &&
         (plVar4 = (longlong *)*plVar10, plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        if (*plVar10 != 0) {
          lVar8 = FMemory::Realloc(*plVar10,0,0);
          *plVar10 = lVar8;
        }
        *(undefined4 *)(lVar7 + 0x1d0) = 0;
      }
    }
    else {
      (**(code **)(*plVar9 + 0x30))(plVar9,plVar10);
    }
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,0);
    local_368 = (code *)FMemory::Realloc(plVar9,0,0);
    if (local_368 != (code *)0x0) {
      FMemory::Free(local_368);
    }
  }
  plVar9 = (longlong *)FMemory::Realloc(0,0x30);
  local_358 = (code *)plVar9;
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_FUN_144012f30;
    FWeakObjectPtr::operator=(plVar9 + 1,param_2);
    *(undefined4 *)(plVar9 + 2) = (undefined4)local_348;
    *(undefined4 *)((longlong)plVar9 + 0x14) = local_348._4_4_;
    *(undefined4 *)(plVar9 + 3) = uStack_340;
    *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_33c;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar9[5] = lVar8;
    *plVar9 = (longlong)&PTR_FUN_144012f78;
  }
  plVar10 = (longlong *)(lVar7 + 0x138);
  if (&local_358 != plVar10) {
    if (plVar9 == (longlong *)0x0) {
      if ((*(int *)(lVar7 + 0x140) != 0) &&
         (plVar4 = (longlong *)*plVar10, plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        if (*plVar10 != 0) {
          lVar8 = FMemory::Realloc(*plVar10,0,0);
          *plVar10 = lVar8;
        }
        *(undefined4 *)(lVar7 + 0x140) = 0;
      }
    }
    else {
      (**(code **)(*plVar9 + 0x30))(plVar9,plVar10);
    }
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,0);
    local_358 = (code *)FMemory::Realloc(plVar9,0,0);
    if (local_358 != (code *)0x0) {
      FMemory::Free(local_358);
    }
  }
  plVar9 = (longlong *)FMemory::Realloc(0,0x30);
  local_348 = (code *)plVar9;
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar9 + 1,param_2);
    *(undefined4 *)(plVar9 + 2) = (undefined4)local_338;
    *(undefined4 *)((longlong)plVar9 + 0x14) = local_338._4_4_;
    *(undefined4 *)(plVar9 + 3) = uStack_330;
    *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_32c;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar9[5] = lVar8;
    *plVar9 = (longlong)&PTR_FUN_143fcff08;
  }
  plVar10 = (longlong *)(lVar7 + 0x1a8);
  if (&local_348 != plVar10) {
    if (plVar9 == (longlong *)0x0) {
      if ((*(int *)(lVar7 + 0x1b0) != 0) &&
         (plVar4 = (longlong *)*plVar10, plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        if (*plVar10 != 0) {
          lVar8 = FMemory::Realloc(*plVar10,0,0);
          *plVar10 = lVar8;
        }
        *(undefined4 *)(lVar7 + 0x1b0) = 0;
      }
    }
    else {
      (**(code **)(*plVar9 + 0x30))(plVar9,plVar10);
    }
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,0);
    local_348 = (code *)FMemory::Realloc(plVar9,0,0);
    if (local_348 != (code *)0x0) {
      FMemory::Free(local_348);
    }
  }
  plVar9 = (longlong *)FMemory::Realloc(0,0x30);
  local_338 = (code *)plVar9;
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar9 + 1,param_2);
    *(undefined4 *)(plVar9 + 2) = (undefined4)local_310;
    *(undefined4 *)((longlong)plVar9 + 0x14) = local_310._4_4_;
    *(undefined4 *)(plVar9 + 3) = (undefined4)uStack_308;
    *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_308._4_4_;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar9[5] = lVar8;
    *plVar9 = (longlong)&PTR_FUN_143fcff08;
  }
  plVar10 = (longlong *)(lVar7 + 0x1b8);
  if (&local_338 != plVar10) {
    if (plVar9 == (longlong *)0x0) {
      if ((*(int *)(lVar7 + 0x1c0) != 0) &&
         (plVar4 = (longlong *)*plVar10, plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        if (*plVar10 != 0) {
          lVar8 = FMemory::Realloc(*plVar10,0,0);
          *plVar10 = lVar8;
        }
        *(undefined4 *)(lVar7 + 0x1c0) = 0;
      }
    }
    else {
      (**(code **)(*plVar9 + 0x30))(plVar9,plVar10);
    }
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,0);
    local_338 = (code *)FMemory::Realloc(plVar9,0,0);
    if (local_338 != (code *)0x0) {
      FMemory::Free(local_338);
    }
  }
  plVar10 = (longlong *)FUN_1420cb370();
  plVar9 = plVar10 + 2;
  local_310 = (code *)plVar9;
  uStack_308 = plVar10;
  FUN_14044f790(&local_310,plVar9);
  local_3c8 = 0x630;
  SWidget::SetDebugInfo
            (plVar9,"TileViewT<ItemType>",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Public\\Components/ListViewBase.h",0xd1);
  local_3b8 = *(undefined4 *)(lVar7 + 0x90);
  local_388 = lVar7 + 0xf8;
  local_3a0 = lVar7 + 0xe8;
  local_390 = *(undefined1 *)(lVar7 + 0xf1);
  local_3a8 = lVar7 + 200;
  local_3b0 = lVar7 + 0x98;
  local_398 = *(undefined1 *)(lVar7 + 0xf0);
  local_3c0 = lVar7 + 0x78;
  local_3c8 = lVar7 + 0x60;
  SWidget::SWidgetConstruct(plVar9,lVar7,lVar7 + 0x30,lVar7 + 0x40);
  FUN_1420eadf0(plVar9,lVar7);
  if (((char)plVar10[5] < '\0') || (cVar5 = (**(code **)(*plVar9 + 0x1e8))(plVar9), cVar5 != '\0'))
  {
    bVar6 = 1;
  }
  else {
    bVar6 = 0;
  }
  plVar4 = local_328;
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar6;
  *local_328 = (longlong)plVar9;
  local_328[1] = (longlong)plVar10;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar10 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_60);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_70);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_80);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_a8);
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
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b8 + 8))(local_b8,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_f0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_100);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_110);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_120);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_130);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_148);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_160);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_180);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_190);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1a0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1b0);
  FUN_140456c70(local_2b8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2f0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_320);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_318);
  return plVar4;
}



// FUNCTION 1420c3750 FUN_1420c3750 body=505 status=ok
// SIG undefined FUN_1420c3750(void)

undefined8 * FUN_1420c3750(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar7 = (undefined8 *)
           FUN_1420c3950(local_18,param_1,param_1 + 0x2a8,*(undefined1 *)(param_1 + 0x2a0),
                         *(undefined1 *)(param_1 + 0x2a2),*(undefined1 *)(param_1 + 0x2a1));
  local_20 = (longlong *)puVar7[1];
  local_28 = *puVar7;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  puVar7 = (undefined8 *)(param_1 + 0x318);
  if (puVar7 != &local_28) {
    *puVar7 = local_28;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 800,&local_20);
  }
  local_30 = *(longlong **)(param_1 + 800);
  local_38 = *puVar7;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  if ((undefined8 *)(param_1 + 0x2b8) != &local_38) {
    *(undefined8 *)(param_1 + 0x2b8) = local_38;
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x2c0,&local_30);
  }
  plVar4 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  plVar4 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  plVar4 = *(longlong **)(param_1 + 800);
  uVar5 = *puVar7;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_2 = uVar5;
  param_2[1] = plVar4;
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
  return param_2;
}



// FUNCTION 1420c3950 FUN_1420c3950 body=2498 status=ok
// SIG undefined FUN_1420c3950(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1420c3950(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5,undefined1 param_6)

{
  longlong **pplVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_3c8 [32];
  longlong local_3a8;
  longlong local_3a0;
  undefined4 local_398;
  longlong local_390;
  longlong local_388;
  longlong local_380;
  undefined1 local_378;
  undefined1 local_370;
  longlong local_368;
  undefined1 local_358 [8];
  undefined8 local_350;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined8 local_340;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined8 local_330;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined8 local_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined8 local_310;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined8 local_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined8 local_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined1 *local_2d0;
  undefined4 local_2c8;
  undefined1 local_2c4;
  longlong local_2c0;
  undefined4 local_2b8;
  longlong *local_2b0 [3];
  undefined1 local_298 [264];
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [32];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [24];
  undefined1 local_b8 [16];
  undefined1 local_a8 [24];
  undefined1 local_90 [24];
  undefined1 local_78 [16];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
  uStack_2d8 = CONCAT44(uStack_2d8._4_4_,0x208);
  uStack_2e8 = 0x208;
  local_2e0 = FUN_142100ca0;
  uStack_2f8 = 0x208;
  local_2f0 = (longlong *)&LAB_1404a6e20;
  uStack_308 = 0x208;
  local_300 = ITypedUMGListView<UObject_*>::HandleItemDoubleClicked;
  uStack_318 = 0x208;
  local_310 = ITypedUMGListView<UObject_*>::HandleItemClicked;
  uStack_328 = 0;
  local_320 = FUN_142102590;
  uStack_338 = 0x208;
  local_330 = FUN_1421036a0;
  local_340 = ITypedUMGListView<UObject_*>::HandleSelectionChanged;
  local_350 = FUN_142100de0;
  uStack_348 = 0x208;
  local_2c4 = 1;
  local_2c0 = 0;
  local_2b8 = 0;
  local_2c8 = param_4;
  lVar5 = FUN_1420cd670(local_298);
  *(undefined8 *)(lVar5 + 0x168) = param_3;
  *(undefined1 *)(lVar5 + 0x240) = 1;
  plVar7 = (longlong *)(lVar5 + 0x1e0);
  *(undefined1 *)(lVar5 + 0x200) = param_5;
  *(undefined1 *)(lVar5 + 0x219) = param_6;
  *(undefined4 *)(lVar5 + 0x1d8) = param_4;
  *(undefined1 *)(lVar5 + 0x1dc) = 1;
  if (((&local_2c0 != plVar7) && (*(int *)(lVar5 + 0x1e8) != 0)) &&
     (plVar8 = (longlong *)*plVar7, plVar8 != (longlong *)0x0)) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    if (*plVar7 != 0) {
      lVar6 = FMemory::Realloc(*plVar7,0,0);
      *plVar7 = lVar6;
    }
    *(undefined4 *)(lVar5 + 0x1e8) = 0;
  }
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  local_2b0[0] = plVar7;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_144fb22c0;
    FWeakObjectPtr::operator=(plVar7 + 1,param_2);
    *(undefined4 *)(plVar7 + 2) = (undefined4)local_350;
    *(undefined4 *)((longlong)plVar7 + 0x14) = local_350._4_4_;
    *(undefined4 *)(plVar7 + 3) = uStack_348;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_344;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar6;
  }
  pplVar1 = (longlong **)(lVar5 + 0x108);
  if (local_2b0 != pplVar1) {
    if (plVar7 == (longlong *)0x0) {
      if ((*(int *)(lVar5 + 0x110) != 0) && (plVar8 = *pplVar1, plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        if (*pplVar1 != (longlong *)0x0) {
          plVar8 = (longlong *)FMemory::Realloc(*pplVar1,0,0);
          *pplVar1 = plVar8;
        }
        *(undefined4 *)(lVar5 + 0x110) = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x30))(plVar7,pplVar1);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_2b0[0] = (longlong *)FMemory::Realloc(plVar7,0,0);
    if (local_2b0[0] != (longlong *)0x0) {
      FMemory::Free(local_2b0[0]);
    }
  }
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  local_350 = (code *)plVar7;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_14428ae88;
    FWeakObjectPtr::operator=(plVar7 + 1,param_2);
    *(undefined4 *)(plVar7 + 2) = (undefined4)local_340;
    *(undefined4 *)((longlong)plVar7 + 0x14) = local_340._4_4_;
    *(undefined4 *)(plVar7 + 3) = uStack_338;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_334;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar6;
    *plVar7 = (longlong)&PTR_FUN_14428aed0;
  }
  plVar8 = (longlong *)(lVar5 + 0x1b8);
  if (&local_350 != plVar8) {
    if (plVar7 == (longlong *)0x0) {
      if ((*(int *)(lVar5 + 0x1c0) != 0) &&
         (plVar2 = (longlong *)*plVar8, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar8 != 0) {
          lVar6 = FMemory::Realloc(*plVar8,0,0);
          *plVar8 = lVar6;
        }
        *(undefined4 *)(lVar5 + 0x1c0) = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x30))(plVar7,plVar8);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_350 = (code *)FMemory::Realloc(plVar7,0,0);
    if (local_350 != (code *)0x0) {
      FMemory::Free(local_350);
    }
  }
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  local_340 = (code *)plVar7;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar7 + 1,param_2);
    *(undefined4 *)(plVar7 + 2) = (undefined4)local_330;
    *(undefined4 *)((longlong)plVar7 + 0x14) = local_330._4_4_;
    *(undefined4 *)(plVar7 + 3) = uStack_328;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_324;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar6;
    *plVar7 = (longlong)&PTR_FUN_143fcff08;
  }
  plVar8 = (longlong *)(lVar5 + 0x118);
  if (&local_340 != plVar8) {
    if (plVar7 == (longlong *)0x0) {
      if ((*(int *)(lVar5 + 0x120) != 0) &&
         (plVar2 = (longlong *)*plVar8, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar8 != 0) {
          lVar6 = FMemory::Realloc(*plVar8,0,0);
          *plVar8 = lVar6;
        }
        *(undefined4 *)(lVar5 + 0x120) = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x30))(plVar7,plVar8);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_340 = (code *)FMemory::Realloc(plVar7,0,0);
    if (local_340 != (code *)0x0) {
      FMemory::Free(local_340);
    }
  }
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  local_330 = (code *)plVar7;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_144012f30;
    FWeakObjectPtr::operator=(plVar7 + 1,param_2);
    *(undefined4 *)(plVar7 + 2) = (undefined4)local_320;
    *(undefined4 *)((longlong)plVar7 + 0x14) = local_320._4_4_;
    *(undefined4 *)(plVar7 + 3) = uStack_318;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_314;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar6;
    *plVar7 = (longlong)&PTR_FUN_144012f78;
  }
  plVar8 = (longlong *)(lVar5 + 0x138);
  if (&local_330 != plVar8) {
    if (plVar7 == (longlong *)0x0) {
      if ((*(int *)(lVar5 + 0x140) != 0) &&
         (plVar2 = (longlong *)*plVar8, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar8 != 0) {
          lVar6 = FMemory::Realloc(*plVar8,0,0);
          *plVar8 = lVar6;
        }
        *(undefined4 *)(lVar5 + 0x140) = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x30))(plVar7,plVar8);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_330 = (code *)FMemory::Realloc(plVar7,0,0);
    if (local_330 != (code *)0x0) {
      FMemory::Free(local_330);
    }
  }
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  local_320 = (code *)plVar7;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar7 + 1,param_2);
    *(undefined4 *)(plVar7 + 2) = (undefined4)local_310;
    *(undefined4 *)((longlong)plVar7 + 0x14) = local_310._4_4_;
    *(undefined4 *)(plVar7 + 3) = uStack_308;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_304;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar6;
    *plVar7 = (longlong)&PTR_FUN_143fcff08;
  }
  plVar8 = (longlong *)(lVar5 + 0x198);
  if (&local_320 != plVar8) {
    if (plVar7 == (longlong *)0x0) {
      if ((*(int *)(lVar5 + 0x1a0) != 0) &&
         (plVar2 = (longlong *)*plVar8, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar8 != 0) {
          lVar6 = FMemory::Realloc(*plVar8,0,0);
          *plVar8 = lVar6;
        }
        *(undefined4 *)(lVar5 + 0x1a0) = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x30))(plVar7,plVar8);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_320 = (code *)FMemory::Realloc(plVar7,0,0);
    if (local_320 != (code *)0x0) {
      FMemory::Free(local_320);
    }
  }
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  local_310 = (code *)plVar7;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(plVar7 + 1,param_2);
    *(undefined4 *)(plVar7 + 2) = (undefined4)local_300;
    *(undefined4 *)((longlong)plVar7 + 0x14) = local_300._4_4_;
    *(undefined4 *)(plVar7 + 3) = uStack_2f8;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_2f4;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar6;
    *plVar7 = (longlong)&PTR_FUN_143fcff08;
  }
  plVar8 = (longlong *)(lVar5 + 0x1a8);
  if (&local_310 != plVar8) {
    if (plVar7 == (longlong *)0x0) {
      if ((*(int *)(lVar5 + 0x1b0) != 0) &&
         (plVar2 = (longlong *)*plVar8, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar8 != 0) {
          lVar6 = FMemory::Realloc(*plVar8,0,0);
          *plVar8 = lVar6;
        }
        *(undefined4 *)(lVar5 + 0x1b0) = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x30))(plVar7,plVar8);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_310 = (code *)FMemory::Realloc(plVar7,0,0);
    if (local_310 != (code *)0x0) {
      FMemory::Free(local_310);
    }
  }
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  local_300 = (code *)plVar7;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_144012f30;
    FWeakObjectPtr::operator=(plVar7 + 1,param_2);
    *(undefined4 *)(plVar7 + 2) = (undefined4)local_2f0;
    *(undefined4 *)((longlong)plVar7 + 0x14) = local_2f0._4_4_;
    *(undefined4 *)(plVar7 + 3) = uStack_2e8;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_2e4;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar6;
    *plVar7 = (longlong)&PTR_FUN_144012f78;
  }
  plVar8 = (longlong *)(lVar5 + 0x148);
  if (&local_300 != plVar8) {
    if (plVar7 == (longlong *)0x0) {
      if ((*(int *)(lVar5 + 0x150) != 0) &&
         (plVar2 = (longlong *)*plVar8, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar8 != 0) {
          lVar6 = FMemory::Realloc(*plVar8,0,0);
          *plVar8 = lVar6;
        }
        *(undefined4 *)(lVar5 + 0x150) = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x30))(plVar7,plVar8);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_300 = (code *)FMemory::Realloc(plVar7,0,0);
    if (local_300 != (code *)0x0) {
      FMemory::Free(local_300);
    }
  }
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  local_2f0 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_FUN_144089a20;
    FWeakObjectPtr::operator=(plVar7 + 1,param_2);
    *(undefined4 *)(plVar7 + 2) = (undefined4)local_2e0;
    *(undefined4 *)((longlong)plVar7 + 0x14) = local_2e0._4_4_;
    *(undefined4 *)(plVar7 + 3) = (undefined4)uStack_2d8;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_2d8._4_4_;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar6;
    *plVar7 = (longlong)&PTR_FUN_144089a68;
  }
  plVar8 = (longlong *)(lVar5 + 0x1c8);
  if (&local_2f0 != plVar8) {
    if (plVar7 == (longlong *)0x0) {
      if ((*(int *)(lVar5 + 0x1d0) != 0) &&
         (plVar2 = (longlong *)*plVar8, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar8 != 0) {
          lVar6 = FMemory::Realloc(*plVar8,0,0);
          *plVar8 = lVar6;
        }
        *(undefined4 *)(lVar5 + 0x1d0) = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x30))(plVar7,plVar8);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    local_2f0 = (longlong *)FMemory::Realloc(plVar7,0,0);
    if (local_2f0 != (longlong *)0x0) {
      FMemory::Free(local_2f0);
    }
  }
  lVar6 = FUN_1420cb410();
  plVar7 = (longlong *)(lVar6 + 0x10);
  local_2e0 = (code *)plVar7;
  uStack_2d8 = lVar6;
  FUN_14044f790(&local_2e0,plVar7);
  local_2d0 = local_358;
  local_3a8 = 0x6d8;
  SWidget::SetDebugInfo
            (plVar7,"TreeViewT<ItemType>",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\UMG\\Public\\Components/ListViewBase.h",0xeb);
  local_398 = *(undefined4 *)(lVar5 + 0x90);
  local_368 = lVar5 + 0xf8;
  local_380 = lVar5 + 0xe8;
  local_370 = *(undefined1 *)(lVar5 + 0xf1);
  local_388 = lVar5 + 200;
  local_390 = lVar5 + 0x98;
  local_378 = *(undefined1 *)(lVar5 + 0xf0);
  local_3a0 = lVar5 + 0x78;
  local_3a8 = lVar5 + 0x60;
  SWidget::SWidgetConstruct(plVar7,lVar5,lVar5 + 0x30,lVar5 + 0x40);
  FUN_1420eb650(plVar7,lVar5);
  if (-1 < *(char *)(lVar6 + 0x28)) {
    cVar3 = (**(code **)(*plVar7 + 0x1e8))(plVar7);
    if (cVar3 == '\0') {
      bVar4 = 0;
      goto LAB_1420c41e6;
    }
  }
  bVar4 = 1;
LAB_1420c41e6:
  *(byte *)(lVar6 + 0x29) = *(byte *)(lVar6 + 0x29) & 0xfe;
  *(byte *)(lVar6 + 0x29) = *(byte *)(lVar6 + 0x29) | bVar4;
  *param_1 = (longlong)plVar7;
  param_1[1] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_2e0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_78);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_90);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_a8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_b8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_d0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_e0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_f0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_100);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_110);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_120);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_140);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_150);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_160);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_170);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_180);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_190);
  FUN_140456c70(local_298);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2c0);
  return param_1;
}



// FUNCTION 1420c4320 FUN_1420c4320 body=236 status=ok
// SIG undefined FUN_1420c4320(void)

undefined4 * FUN_1420c4320(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_28 [2];
  
  plVar1 = (longlong *)(param_1 + 2);
  *param_1 = 0;
  *plVar1 = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar3 != (longlong *)0x0) {
    FUN_1420cd140(plVar3,param_2,param_3);
  }
  if (local_28 != plVar1) {
    if (plVar3 == (longlong *)0x0) {
      if ((param_1[4] != 0) && (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar4 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar4;
        }
        param_1[4] = 0;
      }
    }
    else {
      (**(code **)(*plVar3 + 0x30))(plVar3,plVar1);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar4 = FMemory::Realloc(plVar3,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  return param_1;
}



// FUNCTION 1420c4410 FUN_1420c4410 body=244 status=ok
// SIG undefined FUN_1420c4410(void)

longlong FUN_1420c4410(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_18 [2];
  
  plVar1 = (longlong *)(param_1 + 0x18);
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    FUN_1420ccec0(plVar3,param_2,param_3);
  }
  if (local_18 != plVar1) {
    if (plVar3 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0x20) != 0) &&
         (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar4 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar4;
        }
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
    }
    else {
      (**(code **)(*plVar3 + 0x30))(plVar3,plVar1);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar4 = FMemory::Realloc(plVar3,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  return param_1;
}



// FUNCTION 1420c4510 FUN_1420c4510 body=369 status=ok
// SIG undefined FUN_1420c4510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1420c4510(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uStackX_c;
  longlong local_28 [2];
  
  plVar1 = param_1 + 0x12;
  *param_1 = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 1) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  uVar3 = _DAT_1464aa6c8;
  param_1[4] = _DAT_1464aa6c0;
  param_1[5] = uVar3;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  uVar3 = DAT_1468b5d88;
  uVar6 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xc) = uVar6;
  *(undefined4 *)(param_1 + 0xb) = uVar6;
  *(undefined1 *)(param_1 + 0xd) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 100) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 3;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfc;
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar4 != (longlong *)0x0) {
    FUN_1420ccf40(plVar4,param_2,param_3);
  }
  if (local_28 != plVar1) {
    if (plVar4 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0x13) != 0) &&
         (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar5 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar5;
        }
        *(undefined4 *)(param_1 + 0x13) = 0;
      }
    }
    else {
      (**(code **)(*plVar4 + 0x30))(plVar4,plVar1);
    }
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    lVar5 = FMemory::Realloc(plVar4,0,0);
    if (lVar5 != 0) {
      FMemory::Free(lVar5);
    }
  }
  return param_1;
}



// FUNCTION 1420c4690 FUN_1420c4690 body=266 status=ok
// SIG undefined FUN_1420c4690(void)

undefined8 * FUN_1420c4690(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_28 [2];
  
  *param_1 = 0x3f800000;
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  plVar1 = param_1 + 6;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar3 != (longlong *)0x0) {
    FUN_1420ccfc0(plVar3,param_2,param_3);
  }
  if (local_28 != plVar1) {
    if (plVar3 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 7) != 0) && (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0))
      {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar4 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar4;
        }
        *(undefined4 *)(param_1 + 7) = 0;
      }
    }
    else {
      (**(code **)(*plVar3 + 0x30))(plVar3,plVar1);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar4 = FMemory::Realloc(plVar3,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  return param_1;
}



// FUNCTION 1420c47a0 FUN_1420c47a0 body=250 status=ok
// SIG undefined FUN_1420c47a0(void)

longlong FUN_1420c47a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_18 [2];
  
  FText::FText();
  *(undefined8 *)(param_1 + 0x20) = 0;
  plVar1 = (longlong *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    FUN_1420cd040(plVar3,param_2,param_3);
  }
  if (local_18 != plVar1) {
    if (plVar3 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0x28) != 0) &&
         (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar4 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar4;
        }
        *(undefined4 *)(param_1 + 0x28) = 0;
      }
    }
    else {
      (**(code **)(*plVar3 + 0x30))(plVar3,plVar1);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar4 = FMemory::Realloc(plVar3,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  return param_1;
}



// FUNCTION 1420c48a0 FUN_1420c48a0 body=247 status=ok
// SIG undefined FUN_1420c48a0(void)

undefined1 * FUN_1420c48a0(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_18 [2];
  
  plVar1 = (longlong *)(param_1 + 8);
  *param_1 = 0;
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[1] = 1;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    FUN_1420cd0c0(plVar3,param_2,param_3);
  }
  if (local_18 != plVar1) {
    if (plVar3 == (longlong *)0x0) {
      if ((*(int *)(param_1 + 0x10) != 0) &&
         (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar1 != 0) {
          lVar4 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar4;
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
    }
    else {
      (**(code **)(*plVar3 + 0x30))(plVar3,plVar1);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar4 = FMemory::Realloc(plVar3,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  return param_1;
}



// FUNCTION 1420c49a0 FUN_1420c49a0 body=338 status=ok
// SIG undefined FUN_1420c49a0(void)

undefined8 * FUN_1420c49a0(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  puVar10 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_18)
  ;
  plVar4 = (longlong *)puVar10[1];
  uVar11 = *puVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_144fb2070;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
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
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return param_1;
}



// FUNCTION 1420c4b00 FUN_1420c4b00 body=219 status=ok
// SIG undefined FUN_1420c4b00(void)

longlong FUN_1420c4b00(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  plVar1 = (longlong *)param_1[0x32];
  if (plVar1 == (longlong *)0x0) {
    uVar3 = FUN_1428cc3e0();
    plVar4 = param_1;
  }
  else {
    uVar3 = UGameInstance::GetFirstGamePlayer(plVar1);
    plVar4 = (longlong *)(**(code **)(*plVar1 + 0x148))(plVar1);
    param_1 = plVar1;
  }
  lVar5 = FUN_1420f0090(param_1,param_2,param_3,plVar4,uVar3);
  if (lVar5 != 0) {
    lVar6 = UUserWidget::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return lVar5;
    }
  }
  return 0;
}



// FUNCTION 1420c4be0 FUN_1420c4be0 body=101 status=ok
// SIG undefined FUN_1420c4be0(void)

undefined8 FUN_1420c4be0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if ((param_2 + 1U & 0xfffffffffffffffe) == 0) {
      param_2 = GetTransientPackage();
    }
    uVar1 = FUN_1417987a0(param_1,param_2,param_3,0xefffffff,0,0,0xff800000);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1420c4c50 FUN_1420c4c50 body=632 status=ok
// SIG undefined FUN_1420c4c50(void)

int * FUN_1420c4c50(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  void *_Dst;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  int local_res8 [2];
  ulonglong local_60;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0x48);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x48) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  bVar11 = false;
  puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  _Src = (ulonglong *)(*param_1 + (longlong)iVar9 * 0x48);
  uVar3 = *(ulonglong *)*param_3;
  *_Src = uVar3;
  *(undefined4 *)(_Src + 1) = 0xffffffff;
  *(undefined4 *)((longlong)_Src + 0xc) = 0;
  _Src[2] = local_60;
  _Src[3] = 0;
  _Src[4] = 0;
  _Src[5] = 0;
  _Src[6] = 0;
  _Src[7] = 0;
  *(undefined4 *)(_Src + 8) = 0xffffffff;
  iVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar9 != 1) {
    TSet<TTuple<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar3);
    bVar11 = local_res8[0] != -1;
    if (bVar11) {
      _Dst = (void *)(*param_1 + (longlong)local_res8[0] * 0x48);
      ``FOnlineSessionEOS::OnLobbyInviteReceived'::`2'::<lambda_1>::operator()'::`15'::<lambda_1>::
      ~<lambda_1>((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x40);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdNull,TSharedRef<FUserOnlineAccountNull,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1420c4e9e;
    }
  }
  cVar4 = TSet<TTuple<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry>,TDefaultMapHashableKeyFuncs<USceneComponent_*,SWorldWidgetScreenLayer::FComponentEntry,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar9,0);
  if (cVar4 == '\0') {
    iVar9 = (int)(*_Src >> 4);
    uVar8 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
    uVar10 = -(iVar9 + uVar8) ^ uVar8 >> 0xd;
    uVar7 = (iVar9 - uVar8) - uVar10 ^ uVar10 >> 0xc;
    uVar8 = (uVar8 - uVar7) - uVar10 ^ uVar7 << 0x10;
    uVar10 = (uVar10 - uVar8) - uVar7 ^ uVar8 >> 5;
    uVar7 = (uVar7 - uVar8) - uVar10 ^ uVar10 >> 3;
    uVar8 = (uVar8 - uVar7) - uVar10 ^ uVar7 << 10;
    uVar7 = ((uVar10 - uVar8) - uVar7 ^ uVar8 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x44) = uVar7;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 8) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar7) * 4) =
         *param_2;
  }
LAB_1420c4e9e:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar11;
  }
  return param_2;
}



// FUNCTION 1420c4ed0 FUN_1420c4ed0 body=741 status=ok
// SIG undefined FUN_1420c4ed0(void)

int * FUN_1420c4ed0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  void *_Dst;
  int iVar14;
  ulonglong *_Src;
  bool local_res8;
  int local_48 [4];
  
  iVar10 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar14 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar14);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar14 = (int)param_1[6];
    iVar4 = *(int *)((longlong)iVar14 * 0x20 + 4 + *param_1);
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar4 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar14;
  local_res8 = false;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar3 = *puVar3 | 1 << ((byte)iVar14 & 0x1f);
  _Src = (ulonglong *)((longlong)iVar14 * 0x20 + *param_1);
  uVar5 = *(ulonglong *)*param_3;
  *_Src = uVar5;
  _Src[1] = 0;
  _Src[2] = 0;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar13 != 1) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_48,uVar5);
    local_res8 = local_48[0] != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)local_48[0] * 0x20 + *param_1);
      plVar8 = *(longlong **)((longlong)_Dst + 0x10);
      iVar10 = local_48[0];
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar8 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar14 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          iVar10 = local_48[0];
          if (iVar14 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
            iVar10 = local_48[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar10;
      goto LAB_1420c5186;
    }
  }
  if (3 < uVar13) {
    uVar7 = (uVar13 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar9 = 0x20;
    cVar11 = '\0';
    if (uVar7 != 0) {
      iVar9 = 0x1f - iVar10;
    }
    uVar7 = (uVar13 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar7 != 0) {
      cVar11 = '\x1f' - (char)iVar10;
    }
    iVar10 = 1 << (~(byte)((iVar9 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    iVar10 = (int)(*_Src >> 4);
    uVar7 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
    uVar12 = -(iVar10 + uVar7) ^ uVar7 >> 0xd;
    uVar13 = (iVar10 - uVar7) - uVar12 ^ uVar12 >> 0xc;
    uVar7 = (uVar7 - uVar13) - uVar12 ^ uVar13 << 0x10;
    uVar12 = (uVar12 - uVar7) - uVar13 ^ uVar7 >> 5;
    uVar13 = (uVar13 - uVar7) - uVar12 ^ uVar12 >> 3;
    uVar7 = (uVar7 - uVar13) - uVar12 ^ uVar13 << 10;
    uVar13 = ((uVar12 - uVar7) - uVar13 ^ uVar7 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar13;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar14;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1420c5186:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1420c51c0 FUN_1420c51c0 body=685 status=ok
// SIG undefined FUN_1420c51c0(void)

int * FUN_1420c51c0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  void *_Dst;
  int iVar9;
  uint uVar10;
  char cVar11;
  uint *_Src;
  bool local_res8;
  int local_res10 [2];
  undefined8 *local_res18;
  uint local_res20;
  uint local_res24;
  
  iVar9 = 1;
  local_res18 = param_3;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar4 = *(int *)((longlong)iVar8 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar4 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar8;
  local_res8 = false;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar8 & 0x1f);
  puVar3 = (uint *)*local_res18;
  puVar5 = (undefined8 *)local_res18[1];
  _Src = (uint *)((longlong)iVar8 * 0x20 + *param_1);
  *_Src = *puVar3;
  _Src[1] = puVar3[1];
  *(undefined8 *)(_Src + 2) = *puVar5;
  *(undefined8 *)(_Src + 4) = puVar5[1];
  puVar5[1] = 0;
  *puVar5 = 0;
  _Src[6] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res20 = *_Src;
    local_res24 = _Src[1];
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res10,&local_res20);
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)local_res10[0] * 0x20 + *param_1);
      plVar7 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar9 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar9 == 1) && (plVar7 != (longlong *)0x0)) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res10[0];
      goto LAB_1420c5448;
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
    iVar8 = 0x20;
    cVar11 = '\0';
    if (uVar6 != 0) {
      iVar8 = 0x1f - iVar9;
    }
    uVar6 = (uVar10 >> 1) + 7;
    iVar9 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar11 = '\x1f' - (char)iVar9;
    }
    iVar9 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar10 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar10 = (*_Src ^ _Src[1]) & (int)param_1[9] - 1U;
    _Src[7] = uVar10;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    _Src[6] = *(uint *)((longlong)plVar7 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1420c5448:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1420c5470 Emplace<TPairInitializer<UObject_*_const_&,FSparseItemInfo_&&>_> body=444 status=ok
// SIG undefined Emplace<TPairInitializer<UObject_*_const_&,FSparseItemInfo_&&>_>(void)

int * TSet<TTuple<UObject_*,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<UObject_*,FSparseItemInfo,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UObject_*_const_&,FSparseItemInfo_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  char cVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  int local_res8 [2];
  int local_38 [2];
  ulonglong *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar9 = false;
  puVar1 = (undefined2 *)param_3[1];
  uVar2 = *(ulonglong *)*param_3;
  *param_2 = local_38[0];
  *local_30 = uVar2;
  *(undefined2 *)(local_30 + 1) = *puVar1;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
    bVar9 = local_res8[0] != -1;
    if (bVar9) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)local_res8[0] * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = local_res8[0];
      goto LAB_1420c5604;
    }
  }
  cVar3 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar7);
  if (cVar3 == '\0') {
    iVar7 = (int)(*local_30 >> 4);
    uVar6 = 0x9e3779b9U - iVar7 ^ iVar7 << 8;
    uVar8 = -(uVar6 + iVar7) ^ uVar6 >> 0xd;
    uVar5 = (iVar7 - uVar6) - uVar8 ^ uVar8 >> 0xc;
    uVar6 = (uVar6 - uVar5) - uVar8 ^ uVar5 << 0x10;
    uVar8 = (uVar8 - uVar6) - uVar5 ^ uVar6 >> 5;
    uVar5 = (uVar5 - uVar6) - uVar8 ^ uVar8 >> 3;
    uVar6 = (uVar6 - uVar5) - uVar8 ^ uVar5 << 10;
    uVar5 = ((uVar8 - uVar6) - uVar5 ^ uVar6 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x14) = uVar5;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_1420c5604:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 1420c5630 FUN_1420c5630 body=463 status=ok
// SIG undefined FUN_1420c5630(void)

undefined8 * FUN_1420c5630(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 local_res10;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [8];
  longlong local_20;
  longlong *local_18;
  longlong local_10;
  
  FMovieScenePropertySectionTemplate::GetPropertyTypeID(param_1,&local_res10);
  *param_2 = local_res10;
  lVar3 = FUN_1420c59d0(param_3);
  if (lVar3 == 0) {
    PropertyTemplate::FSectionData::FSectionData(local_28);
    uVar4 = FString::FString(local_38,param_1 + 0x28);
    FUN_141f54e40(local_28,*(undefined8 *)(param_1 + 0x20),uVar4,*(undefined8 *)(param_1 + 0x38),
                  *(undefined8 *)(param_1 + 0x40));
    plVar5 = (longlong *)operator_new();
    plVar6 = (longlong *)0x0;
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_144f51a88;
      plVar5[3] = 0;
      plVar5[4] = 0;
      plVar5[5] = 0;
      plVar5[6] = 0;
      plVar5[7] = local_10;
      plVar5[2] = (longlong)&PTR_FUN_144fb1a58;
      plVar5[8] = (longlong)&PTR_FUN_144f1bc30;
      plVar5[9] = local_20;
      plVar5[10] = (longlong)local_18;
      if (local_18 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_18 + 1) = (int)local_18[1] + 1;
        UNLOCK();
      }
      plVar5[0xb] = local_10;
      plVar6 = plVar5;
    }
    plVar5 = plVar6 + 2;
    local_58 = plVar5;
    local_50 = plVar6;
    FUN_14044f790(&local_58,plVar5);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_48 = plVar5;
    local_40 = plVar6;
    FMovieSceneBlendingAccumulator::DefineActuator(param_3,*param_2,&local_48);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar6)(plVar6);
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
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_18 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar1 = (int *)((longlong)local_18 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_18 + 8))(local_18,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 1420c5800 FUN_1420c5800 body=463 status=ok
// SIG undefined FUN_1420c5800(void)

undefined8 * FUN_1420c5800(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 local_res10;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [8];
  longlong local_20;
  longlong *local_18;
  longlong local_10;
  
  FMovieScenePropertySectionTemplate::GetPropertyTypeID(param_1,&local_res10);
  *param_2 = local_res10;
  lVar3 = FUN_1420c5af0(param_3);
  if (lVar3 == 0) {
    PropertyTemplate::FSectionData::FSectionData(local_28);
    uVar4 = FString::FString(local_38,param_1 + 0x28);
    FUN_141f54e40(local_28,*(undefined8 *)(param_1 + 0x20),uVar4,*(undefined8 *)(param_1 + 0x38),
                  *(undefined8 *)(param_1 + 0x40));
    plVar5 = (longlong *)operator_new();
    plVar6 = (longlong *)0x0;
    if (plVar5 != (longlong *)0x0) {
      *(undefined4 *)(plVar5 + 1) = 1;
      *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
      *plVar5 = (longlong)&PTR_FUN_144f51a88;
      plVar5[3] = 0;
      plVar5[4] = 0;
      plVar5[5] = 0;
      plVar5[6] = 0;
      plVar5[7] = local_10;
      plVar5[2] = (longlong)&PTR_FUN_144fb1a18;
      plVar5[8] = (longlong)&PTR_FUN_144f1bc30;
      plVar5[9] = local_20;
      plVar5[10] = (longlong)local_18;
      if (local_18 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_18 + 1) = (int)local_18[1] + 1;
        UNLOCK();
      }
      plVar5[0xb] = local_10;
      plVar6 = plVar5;
    }
    plVar5 = plVar6 + 2;
    local_58 = plVar5;
    local_50 = plVar6;
    FUN_14044f790(&local_58,plVar5);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_48 = plVar5;
    local_40 = plVar6;
    FMovieSceneBlendingAccumulator::DefineActuator(param_3,*param_2,&local_48);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      lVar3 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar6)(plVar6);
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
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_18 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar1 = (int *)((longlong)local_18 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_18 + 8))(local_18,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 1420c59d0 FUN_1420c59d0 body=279 status=ok
// SIG undefined FUN_1420c59d0(void)

longlong FUN_1420c59d0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar4 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar2 * 0x20 + *param_1);
        if (*plVar4 == param_2) {
          if (iVar2 != -1) goto LAB_1420c5a42;
          break;
        }
        iVar2 = (int)plVar4[3];
      } while (iVar2 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1420c5a42:
  plVar3 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 != (longlong *)0x0) {
    plVar4 = (longlong *)*plVar3;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146ae7a80) &&
       (_Init_thread_header(&DAT_146ae7a80), DAT_146ae7a80 == -1)) {
      FMovieSceneAnimTypeID::Unique(&DAT_146ae7a78);
      _Init_thread_footer(&DAT_146ae7a80);
    }
    lVar1 = DAT_146ae7a78;
    plVar4 = (longlong *)(**(code **)(*plVar4 + 8))(plVar4,local_res8);
    if (*plVar4 == lVar1) {
      return *plVar3;
    }
  }
  return 0;
}



// FUNCTION 1420c5af0 FUN_1420c5af0 body=279 status=ok
// SIG undefined FUN_1420c5af0(void)

longlong FUN_1420c5af0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar4 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        plVar4 = (longlong *)((longlong)iVar2 * 0x20 + *param_1);
        if (*plVar4 == param_2) {
          if (iVar2 != -1) goto LAB_1420c5b62;
          break;
        }
        iVar2 = (int)plVar4[3];
      } while (iVar2 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1420c5b62:
  plVar3 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  if (plVar3 != (longlong *)0x0) {
    plVar4 = (longlong *)*plVar3;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146ae7a70) &&
       (_Init_thread_header(&DAT_146ae7a70), DAT_146ae7a70 == -1)) {
      FMovieSceneAnimTypeID::Unique(&DAT_146ae7a68);
      _Init_thread_footer(&DAT_146ae7a70);
    }
    lVar1 = DAT_146ae7a68;
    plVar4 = (longlong *)(**(code **)(*plVar4 + 8))(plVar4,local_res8);
    if (*plVar4 == lVar1) {
      return *plVar3;
    }
  }
  return 0;
}



// FUNCTION 1420c5c10 FUN_1420c5c10 body=139 status=ok
// SIG undefined FUN_1420c5c10(void)

longlong FUN_1420c5c10(longlong param_1,longlong param_2)

{
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if (((int)param_2 != 0) || ((int)((ulonglong)param_2 >> 0x20) != 0)) {
    if (param_1 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(longlong *)(param_1 + 0x38);
    }
    local_18 = 0xffffffff;
    local_14 = 0x101;
    local_12 = 0;
    local_28 = param_1;
    FUN_1421069c0(&local_28);
    while (local_20 != 0) {
      if (*(longlong *)(local_20 + 0x18) == param_2) {
        return local_20;
      }
      local_20 = *(longlong *)(local_20 + 0x28);
      FUN_1421069c0(&local_28);
    }
  }
  return 0;
}



// FUNCTION 1420c5ca0 FUN_1420c5ca0 body=670 status=ok
// SIG undefined FUN_1420c5ca0(void)

longlong FUN_1420c5ca0(longlong *param_1)

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
        if ((int)((longlong)psVar8 - (longlong)psVar1 >> 1) != -1) goto LAB_1420c5ea1;
        break;
      }
      psVar8 = psVar8 + 1;
    } while (psVar8 != psVar13);
    do {
      if (psVar13 == psVar1) goto LAB_1420c5ea1;
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
LAB_1420c5ea1:
  plVar4 = (longlong *)UFont::GetPrivateStaticClass();
  if (plVar4[0x1f] == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
  }
  if ((int)param_1[1] != 0) {
    puVar14 = (undefined2 *)*param_1;
  }
  uVar5 = UFont::GetPrivateStaticClass();
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



// FUNCTION 1420c5f40 FUN_1420c5f40 body=110 status=ok
// SIG undefined FUN_1420c5f40(void)

undefined8 * FUN_1420c5f40(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ae7a80) {
    _Init_thread_header(&DAT_146ae7a80);
    if (DAT_146ae7a80 == -1) {
      FMovieSceneAnimTypeID::Unique(&DAT_146ae7a78);
      _Init_thread_footer(&DAT_146ae7a80);
    }
  }
  *param_1 = DAT_146ae7a78;
  return param_1;
}



// FUNCTION 1420c5fb0 FUN_1420c5fb0 body=110 status=ok
// SIG undefined FUN_1420c5fb0(void)

undefined8 * FUN_1420c5fb0(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ae7a70) {
    _Init_thread_header(&DAT_146ae7a70);
    if (DAT_146ae7a70 == -1) {
      FMovieSceneAnimTypeID::Unique(&DAT_146ae7a68);
      _Init_thread_footer(&DAT_146ae7a70);
    }
  }
  *param_1 = DAT_146ae7a68;
  return param_1;
}



// FUNCTION 1420c6020 GetCurrentValue<FMargin> body=95 status=ok
// SIG undefined GetCurrentValue<FMargin>(void)

undefined8 *
FTrackInstancePropertyBindings::GetCurrentValue<FMargin>(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_28 [8];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FindOrAdd(param_1,local_28);
  lVar1 = FWeakObjectPtr::Get(local_28);
  if ((((lVar1 == 0) || (CONCAT44(uStack_1c,uStack_20) == 0)) ||
      ((*(uint *)(lVar1 + 8) & 0x18000) != 0)) ||
     (puVar2 = (undefined4 *)((longlong)*(int *)(lVar1 + 0x44) + CONCAT44(uStack_1c,uStack_20)),
     puVar2 == (undefined4 *)0x0)) {
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
  }
  *param_2 = CONCAT44(uVar4,uVar3);
  param_2[1] = CONCAT44(uVar6,uVar5);
  return param_2;
}



// FUNCTION 1420c6090 GetCurrentValue<FWidgetTransform> body=203 status=ok
// SIG undefined GetCurrentValue<FWidgetTransform>(void)

undefined8 *
FTrackInstancePropertyBindings::GetCurrentValue<FWidgetTransform>
          (undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  longlong local_20;
  
  FindOrAdd(param_1,local_28);
  lVar1 = FWeakObjectPtr::Get(local_28);
  if ((((lVar1 == 0) || (local_20 == 0)) || ((*(uint *)(lVar1 + 8) & 0x18000) != 0)) ||
     (puVar2 = (undefined8 *)(*(int *)(lVar1 + 0x44) + local_20), puVar2 == (undefined8 *)0x0)) {
    local_30 = 0;
    local_48 = CONCAT44(DAT_1468b5d88._4_4_,(undefined4)DAT_1468b5d88);
    uStack_40 = CONCAT44(DAT_1464aa774,DAT_1464aa770);
    local_38 = CONCAT44(DAT_1468b5d88._4_4_,(undefined4)DAT_1468b5d88);
  }
  else {
    local_48 = *puVar2;
    uStack_40 = puVar2[1];
    local_38 = puVar2[2];
    local_30 = *(undefined4 *)(puVar2 + 3);
  }
  *param_2 = local_48;
  param_2[1] = uStack_40;
  param_2[2] = local_38;
  *(undefined4 *)(param_2 + 3) = local_30;
  return param_2;
}



// FUNCTION 1420c6160 FUN_1420c6160 body=304 status=ok
// SIG undefined FUN_1420c6160(void)

undefined8 FUN_1420c6160(undefined8 param_1,WriteBytesMem *param_2,uchar *param_3,longlong *param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uchar *puVar5;
  longlong lVar6;
  
  lVar3 = FUniqueNetIdString::GetBytes(param_2);
  if (lVar3 != 0) {
    uVar4 = FUniqueNetIdString::GetBytes();
    uVar4 = FUN_1420e6a20(param_1,uVar4,param_3);
    return uVar4;
  }
  puVar5 = AK::WriteBytesMem::Bytes(param_2);
  if (puVar5 == (uchar *)0x0) {
    return 0;
  }
  uVar4 = FCachedPropertyPath::GetLastSegment(param_2);
  lVar3 = FUniqueNetIdString::GetBytes(uVar4);
  *param_4 = lVar3;
  if (lVar3 != 0) {
    lVar6 = UArrayProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (iVar2 = IStreamingManager::GetNumWantingResources(uVar4), iVar2 != -1)) {
      puVar5 = AK::WriteBytesMem::Bytes(param_2);
      param_4 = *(longlong **)(lVar3 + 0x70);
      goto LAB_1420c6233;
    }
  }
  puVar5 = AK::WriteBytesMem::Bytes(param_2);
  param_4 = (longlong *)*param_4;
LAB_1420c6233:
  if (param_3 != puVar5) {
    if ((*(uint *)(param_4 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_3,puVar5,(longlong)*(int *)((longlong)param_4 + 0x34));
      return 1;
    }
    (**(code **)(*param_4 + 0x2e8))(param_4,param_3,puVar5,1);
  }
  return 1;
}



// FUNCTION 1420c6290 FUN_1420c6290 body=304 status=ok
// SIG undefined FUN_1420c6290(void)

undefined8 FUN_1420c6290(undefined8 param_1,WriteBytesMem *param_2,uchar *param_3,longlong *param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uchar *puVar5;
  longlong lVar6;
  
  lVar3 = FUniqueNetIdString::GetBytes(param_2);
  if (lVar3 != 0) {
    uVar4 = FUniqueNetIdString::GetBytes();
    uVar4 = FUN_1420e6ae0(param_1,uVar4,param_3);
    return uVar4;
  }
  puVar5 = AK::WriteBytesMem::Bytes(param_2);
  if (puVar5 == (uchar *)0x0) {
    return 0;
  }
  uVar4 = FCachedPropertyPath::GetLastSegment(param_2);
  lVar3 = FUniqueNetIdString::GetBytes(uVar4);
  *param_4 = lVar3;
  if (lVar3 != 0) {
    lVar6 = UArrayProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (iVar2 = IStreamingManager::GetNumWantingResources(uVar4), iVar2 != -1)) {
      puVar5 = AK::WriteBytesMem::Bytes(param_2);
      param_4 = *(longlong **)(lVar3 + 0x70);
      goto LAB_1420c6363;
    }
  }
  puVar5 = AK::WriteBytesMem::Bytes(param_2);
  param_4 = (longlong *)*param_4;
LAB_1420c6363:
  if (param_3 != puVar5) {
    if ((*(uint *)(param_4 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_3,puVar5,(longlong)*(int *)((longlong)param_4 + 0x34));
      return 1;
    }
    (**(code **)(*param_4 + 0x2e8))(param_4,param_3,puVar5,1);
  }
  return 1;
}



// FUNCTION 1420c63c0 FUN_1420c63c0 body=304 status=ok
// SIG undefined FUN_1420c63c0(void)

undefined8 FUN_1420c63c0(undefined8 param_1,WriteBytesMem *param_2,uchar *param_3,longlong *param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uchar *puVar5;
  longlong lVar6;
  
  lVar3 = FUniqueNetIdString::GetBytes(param_2);
  if (lVar3 != 0) {
    uVar4 = FUniqueNetIdString::GetBytes();
    uVar4 = FUN_1420e6ba0(param_1,uVar4,param_3);
    return uVar4;
  }
  puVar5 = AK::WriteBytesMem::Bytes(param_2);
  if (puVar5 == (uchar *)0x0) {
    return 0;
  }
  uVar4 = FCachedPropertyPath::GetLastSegment(param_2);
  lVar3 = FUniqueNetIdString::GetBytes(uVar4);
  *param_4 = lVar3;
  if (lVar3 != 0) {
    lVar6 = UArrayProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (iVar2 = IStreamingManager::GetNumWantingResources(uVar4), iVar2 != -1)) {
      puVar5 = AK::WriteBytesMem::Bytes(param_2);
      param_4 = *(longlong **)(lVar3 + 0x70);
      goto LAB_1420c6493;
    }
  }
  puVar5 = AK::WriteBytesMem::Bytes(param_2);
  param_4 = (longlong *)*param_4;
LAB_1420c6493:
  if (param_3 != puVar5) {
    if ((*(uint *)(param_4 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_3,puVar5,(longlong)*(int *)((longlong)param_4 + 0x34));
      return 1;
    }
    (**(code **)(*param_4 + 0x2e8))(param_4,param_3,puVar5,1);
  }
  return 1;
}



// FUNCTION 1420c64f0 FUN_1420c64f0 body=304 status=ok
// SIG undefined FUN_1420c64f0(void)

undefined8 FUN_1420c64f0(undefined8 param_1,WriteBytesMem *param_2,uchar *param_3,longlong *param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uchar *puVar5;
  longlong lVar6;
  
  lVar3 = FUniqueNetIdString::GetBytes(param_2);
  if (lVar3 != 0) {
    uVar4 = FUniqueNetIdString::GetBytes();
    uVar4 = FUN_1420e6c70(param_1,uVar4,param_3);
    return uVar4;
  }
  puVar5 = AK::WriteBytesMem::Bytes(param_2);
  if (puVar5 == (uchar *)0x0) {
    return 0;
  }
  uVar4 = FCachedPropertyPath::GetLastSegment(param_2);
  lVar3 = FUniqueNetIdString::GetBytes(uVar4);
  *param_4 = lVar3;
  if (lVar3 != 0) {
    lVar6 = UArrayProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (iVar2 = IStreamingManager::GetNumWantingResources(uVar4), iVar2 != -1)) {
      puVar5 = AK::WriteBytesMem::Bytes(param_2);
      param_4 = *(longlong **)(lVar3 + 0x70);
      goto LAB_1420c65c3;
    }
  }
  puVar5 = AK::WriteBytesMem::Bytes(param_2);
  param_4 = (longlong *)*param_4;
LAB_1420c65c3:
  if (param_3 != puVar5) {
    if ((*(uint *)(param_4 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_3,puVar5,(longlong)*(int *)((longlong)param_4 + 0x34));
      return 1;
    }
    (**(code **)(*param_4 + 0x2e8))(param_4,param_3,puVar5,1);
  }
  return 1;
}



// FUNCTION 1420c6620 FUN_1420c6620 body=304 status=ok
// SIG undefined FUN_1420c6620(void)

undefined8 FUN_1420c6620(undefined8 param_1,WriteBytesMem *param_2,uchar *param_3,longlong *param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uchar *puVar5;
  longlong lVar6;
  
  lVar3 = FUniqueNetIdString::GetBytes(param_2);
  if (lVar3 != 0) {
    uVar4 = FUniqueNetIdString::GetBytes();
    uVar4 = FUN_1420e6d30(param_1,uVar4,param_3);
    return uVar4;
  }
  puVar5 = AK::WriteBytesMem::Bytes(param_2);
  if (puVar5 == (uchar *)0x0) {
    return 0;
  }
  uVar4 = FCachedPropertyPath::GetLastSegment(param_2);
  lVar3 = FUniqueNetIdString::GetBytes(uVar4);
  *param_4 = lVar3;
  if (lVar3 != 0) {
    lVar6 = UArrayProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (iVar2 = IStreamingManager::GetNumWantingResources(uVar4), iVar2 != -1)) {
      puVar5 = AK::WriteBytesMem::Bytes(param_2);
      param_4 = *(longlong **)(lVar3 + 0x70);
      goto LAB_1420c66f3;
    }
  }
  puVar5 = AK::WriteBytesMem::Bytes(param_2);
  param_4 = (longlong *)*param_4;
LAB_1420c66f3:
  if (param_3 != puVar5) {
    if ((*(uint *)(param_4 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_3,puVar5,(longlong)*(int *)((longlong)param_4 + 0x34));
      return 1;
    }
    (**(code **)(*param_4 + 0x2e8))(param_4,param_3,puVar5,1);
  }
  return 1;
}



// FUNCTION 1420c6750 FUN_1420c6750 body=304 status=ok
// SIG undefined FUN_1420c6750(void)

undefined8 FUN_1420c6750(undefined8 param_1,WriteBytesMem *param_2,uchar *param_3,longlong *param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uchar *puVar5;
  longlong lVar6;
  
  lVar3 = FUniqueNetIdString::GetBytes(param_2);
  if (lVar3 != 0) {
    uVar4 = FUniqueNetIdString::GetBytes();
    uVar4 = FUN_1420e6df0(param_1,uVar4,param_3);
    return uVar4;
  }
  puVar5 = AK::WriteBytesMem::Bytes(param_2);
  if (puVar5 == (uchar *)0x0) {
    return 0;
  }
  uVar4 = FCachedPropertyPath::GetLastSegment(param_2);
  lVar3 = FUniqueNetIdString::GetBytes(uVar4);
  *param_4 = lVar3;
  if (lVar3 != 0) {
    lVar6 = UArrayProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (iVar2 = IStreamingManager::GetNumWantingResources(uVar4), iVar2 != -1)) {
      puVar5 = AK::WriteBytesMem::Bytes(param_2);
      param_4 = *(longlong **)(lVar3 + 0x70);
      goto LAB_1420c6823;
    }
  }
  puVar5 = AK::WriteBytesMem::Bytes(param_2);
  param_4 = (longlong *)*param_4;
LAB_1420c6823:
  if (param_3 != puVar5) {
    if ((*(uint *)(param_4 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_3,puVar5,(longlong)*(int *)((longlong)param_4 + 0x34));
      return 1;
    }
    (**(code **)(*param_4 + 0x2e8))(param_4,param_3,puVar5,1);
  }
  return 1;
}



// FUNCTION 1420c6880 FUN_1420c6880 body=304 status=ok
// SIG undefined FUN_1420c6880(void)

undefined8 FUN_1420c6880(undefined8 param_1,WriteBytesMem *param_2,uchar *param_3,longlong *param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uchar *puVar5;
  longlong lVar6;
  
  lVar3 = FUniqueNetIdString::GetBytes(param_2);
  if (lVar3 != 0) {
    uVar4 = FUniqueNetIdString::GetBytes();
    uVar4 = FUN_1420e6eb0(param_1,uVar4,param_3);
    return uVar4;
  }
  puVar5 = AK::WriteBytesMem::Bytes(param_2);
  if (puVar5 == (uchar *)0x0) {
    return 0;
  }
  uVar4 = FCachedPropertyPath::GetLastSegment(param_2);
  lVar3 = FUniqueNetIdString::GetBytes(uVar4);
  *param_4 = lVar3;
  if (lVar3 != 0) {
    lVar6 = UArrayProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (iVar2 = IStreamingManager::GetNumWantingResources(uVar4), iVar2 != -1)) {
      puVar5 = AK::WriteBytesMem::Bytes(param_2);
      param_4 = *(longlong **)(lVar3 + 0x70);
      goto LAB_1420c6953;
    }
  }
  puVar5 = AK::WriteBytesMem::Bytes(param_2);
  param_4 = (longlong *)*param_4;
LAB_1420c6953:
  if (param_3 != puVar5) {
    if ((*(uint *)(param_4 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_3,puVar5,(longlong)*(int *)((longlong)param_4 + 0x34));
      return 1;
    }
    (**(code **)(*param_4 + 0x2e8))(param_4,param_3,puVar5,1);
  }
  return 1;
}



// FUNCTION 1420c69b0 FUN_1420c69b0 body=304 status=ok
// SIG undefined FUN_1420c69b0(void)

undefined8 FUN_1420c69b0(undefined8 param_1,WriteBytesMem *param_2,uchar *param_3,longlong *param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uchar *puVar5;
  longlong lVar6;
  
  lVar3 = FUniqueNetIdString::GetBytes(param_2);
  if (lVar3 != 0) {
    uVar4 = FUniqueNetIdString::GetBytes();
    uVar4 = FUN_1420e6f70(param_1,uVar4,param_3);
    return uVar4;
  }
  puVar5 = AK::WriteBytesMem::Bytes(param_2);
  if (puVar5 == (uchar *)0x0) {
    return 0;
  }
  uVar4 = FCachedPropertyPath::GetLastSegment(param_2);
  lVar3 = FUniqueNetIdString::GetBytes(uVar4);
  *param_4 = lVar3;
  if (lVar3 != 0) {
    lVar6 = UArrayProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (iVar2 = IStreamingManager::GetNumWantingResources(uVar4), iVar2 != -1)) {
      puVar5 = AK::WriteBytesMem::Bytes(param_2);
      param_4 = *(longlong **)(lVar3 + 0x70);
      goto LAB_1420c6a83;
    }
  }
  puVar5 = AK::WriteBytesMem::Bytes(param_2);
  param_4 = (longlong *)*param_4;
LAB_1420c6a83:
  if (param_3 != puVar5) {
    if ((*(uint *)(param_4 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_3,puVar5,(longlong)*(int *)((longlong)param_4 + 0x34));
      return 1;
    }
    (**(code **)(*param_4 + 0x2e8))(param_4,param_3,puVar5,1);
  }
  return 1;
}



// FUNCTION 1420c6ae0 FUN_1420c6ae0 body=304 status=ok
// SIG undefined FUN_1420c6ae0(void)

undefined8 FUN_1420c6ae0(undefined8 param_1,WriteBytesMem *param_2,uchar *param_3,longlong *param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uchar *puVar5;
  longlong lVar6;
  
  lVar3 = FUniqueNetIdString::GetBytes(param_2);
  if (lVar3 != 0) {
    uVar4 = FUniqueNetIdString::GetBytes();
    uVar4 = FUN_1420e7040(param_1,uVar4,param_3);
    return uVar4;
  }
  puVar5 = AK::WriteBytesMem::Bytes(param_2);
  if (puVar5 == (uchar *)0x0) {
    return 0;
  }
  uVar4 = FCachedPropertyPath::GetLastSegment(param_2);
  lVar3 = FUniqueNetIdString::GetBytes(uVar4);
  *param_4 = lVar3;
  if (lVar3 != 0) {
    lVar6 = UArrayProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (iVar2 = IStreamingManager::GetNumWantingResources(uVar4), iVar2 != -1)) {
      puVar5 = AK::WriteBytesMem::Bytes(param_2);
      param_4 = *(longlong **)(lVar3 + 0x70);
      goto LAB_1420c6bb3;
    }
  }
  puVar5 = AK::WriteBytesMem::Bytes(param_2);
  param_4 = (longlong *)*param_4;
LAB_1420c6bb3:
  if (param_3 != puVar5) {
    if ((*(uint *)(param_4 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_3,puVar5,(longlong)*(int *)((longlong)param_4 + 0x34));
      return 1;
    }
    (**(code **)(*param_4 + 0x2e8))(param_4,param_3,puVar5,1);
  }
  return 1;
}



// FUNCTION 1420c6c10 GetStyle<FScrollBarStyle> body=100 status=ok
// SIG undefined GetStyle<FScrollBarStyle>(void)

longlong * USlateWidgetStyleAsset::GetStyle<FScrollBarStyle>(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  lVar2 = DAT_1469eb188;
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    return (longlong *)0x0;
  }
  plVar3 = (longlong *)(**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,local_res8);
    if (*plVar4 == lVar2) {
      return plVar3;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1420c6c80 GetStyle<FScrollBarStyle> body=100 status=ok
// SIG undefined GetStyle<FScrollBarStyle>(void)

longlong * USlateWidgetStyleAsset::GetStyle<FScrollBarStyle>(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  lVar2 = DAT_1469eb1a0;
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    return (longlong *)0x0;
  }
  plVar3 = (longlong *)(**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3,local_res8);
    if (*plVar4 == lVar2) {
      return plVar3;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1420c6cf0 FUN_1420c6cf0 body=794 status=ok
// SIG undefined FUN_1420c6cf0(void)

undefined8 FUN_1420c6cf0(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  void *pvVar9;
  
  uVar5 = FCachedPropertyPath::GetLastSegment(param_2);
  iVar4 = IStreamingManager::GetNumWantingResources(uVar5);
  plVar6 = (longlong *)FUniqueNetIdString::GetBytes(uVar5);
  if (plVar6 == (longlong *)0x0) {
    return 0;
  }
  lVar7 = UArrayProperty::GetPrivateStaticClass();
  if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    if (iVar4 != -1) {
      plVar8 = (longlong *)(*(int *)((longlong)plVar6 + 0x44) + param_1);
      iVar1 = *(int *)(plVar6[0xe] + 0x34);
      if ((iVar4 < 0) || ((int)plVar8[1] <= iVar4)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((((bVar2) &&
           (cVar3 = IsConcreteTypeCompatibleWithReflectedType<unsigned_char>(), cVar3 != '\0')) &&
          (cVar3 = PropertySizesMatch<unsigned_char>(plVar6[0xe]), cVar3 != '\0')) &&
         (((int)plVar8[1] != 0 &&
          (pvVar9 = (void *)((longlong)(iVar1 * iVar4) + *plVar8), pvVar9 != (void *)0x0)))) {
        FStringTable::SetOwnerAsset(param_2,pvVar9);
        plVar8 = (longlong *)plVar6[0xe];
        if (param_4 != pvVar9) {
          if ((*(uint *)(plVar8 + 7) >> 0x1e & 1) != 0) {
            _guard_xfg_dispatch_icall_nop
                      (param_4,pvVar9,(longlong)*(int *)((longlong)plVar8 + 0x34));
            *param_3 = plVar6[0xe];
            return 1;
          }
          (**(code **)(*plVar8 + 0x2e8))(plVar8,param_4,pvVar9,1);
        }
        *param_3 = plVar6[0xe];
        return 1;
      }
      return 0;
    }
    cVar3 = IsConcreteTypeCompatibleWithReflectedType<unsigned_char>(plVar6);
    if (cVar3 == '\0') {
      return 0;
    }
    cVar3 = PropertySizesMatch<unsigned_char>(plVar6);
    if (cVar3 == '\0') {
      return 0;
    }
    pvVar9 = (void *)(*(int *)((longlong)plVar6 + 0x44) + param_1);
    if (pvVar9 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar9);
    if (param_4 == pvVar9) goto LAB_1420c6ebe;
    if ((*(uint *)(plVar6 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar9,(longlong)*(int *)((longlong)plVar6 + 0x34));
      *param_3 = (longlong)plVar6;
      return 1;
    }
  }
  else {
    lVar7 = FUN_14171c5d0();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FNULLSceneInterface::SetFXSystem(param_2,plVar6);
      uVar5 = FUN_1420e6a20(param_1,plVar6,param_4);
      return uVar5;
    }
    lVar7 = UProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
    uVar5 = FCachedPropertyPath::GetLastSegment(param_2);
    iVar4 = IStreamingManager::GetNumWantingResources(uVar5);
    plVar6 = (longlong *)FUniqueNetIdString::GetBytes(uVar5);
    cVar3 = IsConcreteTypeCompatibleWithReflectedType<unsigned_char>(plVar6);
    if (cVar3 == '\0') {
      return 0;
    }
    if (iVar4 == -1) {
      iVar4 = 0;
    }
    cVar3 = PropertySizesMatch<unsigned_char>(plVar6);
    if (cVar3 == '\0') {
      return 0;
    }
    if ((int)plVar6[6] <= iVar4) {
      return 0;
    }
    pvVar9 = (void *)((longlong)*(int *)((longlong)plVar6 + 0x44) +
                     *(int *)((longlong)plVar6 + 0x34) * iVar4 + param_1);
    if (pvVar9 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar9);
    if (param_4 == pvVar9) goto LAB_1420c6ebe;
    if ((*(uint *)(plVar6 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar9,(longlong)*(int *)((longlong)plVar6 + 0x34));
      *param_3 = (longlong)plVar6;
      return 1;
    }
  }
  (**(code **)(*plVar6 + 0x2e8))(plVar6,param_4,pvVar9,1);
LAB_1420c6ebe:
  *param_3 = (longlong)plVar6;
  return 1;
}



// FUNCTION 1420c7010 FUN_1420c7010 body=784 status=ok
// SIG undefined FUN_1420c7010(void)

undefined8 FUN_1420c7010(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  void *pvVar9;
  
  uVar5 = FCachedPropertyPath::GetLastSegment(param_2);
  iVar4 = IStreamingManager::GetNumWantingResources(uVar5);
  plVar6 = (longlong *)FUniqueNetIdString::GetBytes(uVar5);
  if (plVar6 == (longlong *)0x0) {
    return 0;
  }
  lVar7 = UArrayProperty::GetPrivateStaticClass();
  if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    if (iVar4 != -1) {
      plVar8 = (longlong *)(*(int *)((longlong)plVar6 + 0x44) + param_1);
      iVar1 = *(int *)(plVar6[0xe] + 0x34);
      if ((iVar4 < 0) || ((int)plVar8[1] <= iVar4)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((((bVar2) &&
           (cVar3 = IsConcreteTypeCompatibleWithReflectedType<unsigned_char>(), cVar3 != '\0')) &&
          (cVar3 = PropertySizesMatch<unsigned_char>(plVar6[0xe]), cVar3 != '\0')) &&
         (((int)plVar8[1] != 0 &&
          (pvVar9 = (void *)((longlong)(iVar1 * iVar4) + *plVar8), pvVar9 != (void *)0x0)))) {
        FStringTable::SetOwnerAsset(param_2,pvVar9);
        plVar8 = (longlong *)plVar6[0xe];
        if (param_4 != pvVar9) {
          if ((*(uint *)(plVar8 + 7) >> 0x1e & 1) != 0) {
            _guard_xfg_dispatch_icall_nop
                      (param_4,pvVar9,(longlong)*(int *)((longlong)plVar8 + 0x34));
            *param_3 = plVar6[0xe];
            return 1;
          }
          (**(code **)(*plVar8 + 0x2e8))(plVar8,param_4,pvVar9,1);
        }
        *param_3 = plVar6[0xe];
        return 1;
      }
      return 0;
    }
    cVar3 = IsConcreteTypeCompatibleWithReflectedType<unsigned_char>(plVar6);
    if (cVar3 == '\0') {
      return 0;
    }
    cVar3 = PropertySizesMatch<unsigned_char>(plVar6);
    if (cVar3 == '\0') {
      return 0;
    }
    pvVar9 = (void *)(*(int *)((longlong)plVar6 + 0x44) + param_1);
    if (pvVar9 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar9);
    if (param_4 == pvVar9) goto LAB_1420c71db;
    if ((*(uint *)(plVar6 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar9,(longlong)*(int *)((longlong)plVar6 + 0x34));
      *param_3 = (longlong)plVar6;
      return 1;
    }
  }
  else {
    lVar7 = FUN_14171c5d0();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FNULLSceneInterface::SetFXSystem(param_2,plVar6);
      return 0;
    }
    lVar7 = UProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
    uVar5 = FCachedPropertyPath::GetLastSegment(param_2);
    iVar4 = IStreamingManager::GetNumWantingResources(uVar5);
    plVar6 = (longlong *)FUniqueNetIdString::GetBytes(uVar5);
    cVar3 = IsConcreteTypeCompatibleWithReflectedType<unsigned_char>(plVar6);
    if (cVar3 == '\0') {
      return 0;
    }
    if (iVar4 == -1) {
      iVar4 = 0;
    }
    cVar3 = PropertySizesMatch<unsigned_char>(plVar6);
    if (cVar3 == '\0') {
      return 0;
    }
    if ((int)plVar6[6] <= iVar4) {
      return 0;
    }
    pvVar9 = (void *)((longlong)*(int *)((longlong)plVar6 + 0x44) +
                     *(int *)((longlong)plVar6 + 0x34) * iVar4 + param_1);
    if (pvVar9 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar9);
    if (param_4 == pvVar9) goto LAB_1420c71db;
    if ((*(uint *)(plVar6 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar9,(longlong)*(int *)((longlong)plVar6 + 0x34));
      *param_3 = (longlong)plVar6;
      return 1;
    }
  }
  (**(code **)(*plVar6 + 0x2e8))(plVar6,param_4,pvVar9,1);
LAB_1420c71db:
  *param_3 = (longlong)plVar6;
  return 1;
}



// FUNCTION 1420c7320 FUN_1420c7320 body=874 status=ok
// SIG undefined FUN_1420c7320(void)

undefined8 FUN_1420c7320(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  void *pvVar10;
  
  uVar5 = FCachedPropertyPath::GetLastSegment(param_2);
  iVar4 = IStreamingManager::GetNumWantingResources(uVar5);
  plVar6 = (longlong *)FUniqueNetIdString::GetBytes(uVar5);
  if (plVar6 != (longlong *)0x0) {
    lVar7 = UArrayProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (iVar4 == -1) {
        cVar3 = IsConcreteTypeCompatibleWithReflectedType<int>(plVar6);
        if (((cVar3 != '\0') && (*(int *)((longlong)plVar6 + 0x34) == 4)) &&
           (pvVar10 = (void *)(*(int *)((longlong)plVar6 + 0x44) + param_1), pvVar10 != (void *)0x0)
           ) {
          FStringTable::SetOwnerAsset(param_2,pvVar10);
          if (param_4 != pvVar10) {
            if ((*(uint *)(plVar6 + 7) >> 0x1e & 1) != 0) {
              _guard_xfg_dispatch_icall_nop
                        (param_4,pvVar10,(longlong)*(int *)((longlong)plVar6 + 0x34));
              *param_3 = (longlong)plVar6;
              return 1;
            }
            (**(code **)(*plVar6 + 0x2e8))(plVar6,param_4,pvVar10,1);
          }
          *param_3 = (longlong)plVar6;
          return 1;
        }
      }
      else {
        plVar9 = (longlong *)(*(int *)((longlong)plVar6 + 0x44) + param_1);
        iVar1 = *(int *)(plVar6[0xe] + 0x34);
        if ((iVar4 < 0) || ((int)plVar9[1] <= iVar4)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((((bVar2) && (cVar3 = IsConcreteTypeCompatibleWithReflectedType<int>(), cVar3 != '\0'))
            && (*(int *)(plVar6[0xe] + 0x34) == 4)) &&
           (((int)plVar9[1] != 0 &&
            (pvVar10 = (void *)((longlong)(iVar1 * iVar4) + *plVar9), pvVar10 != (void *)0x0)))) {
          FStringTable::SetOwnerAsset(param_2,pvVar10);
          plVar9 = (longlong *)plVar6[0xe];
          if (param_4 != pvVar10) {
            if ((*(uint *)(plVar9 + 7) >> 0x1e & 1) != 0) {
              _guard_xfg_dispatch_icall_nop
                        (param_4,pvVar10,(longlong)*(int *)((longlong)plVar9 + 0x34));
              *param_3 = plVar6[0xe];
              return 1;
            }
            (**(code **)(*plVar9 + 0x2e8))(plVar9,param_4,pvVar10,1);
          }
          *param_3 = plVar6[0xe];
          return 1;
        }
      }
    }
    else {
      lVar7 = FUN_14171c5d0();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FNULLSceneInterface::SetFXSystem(param_2,plVar6);
        uVar5 = FUN_1420e6ae0(param_1,plVar6,param_4);
        return uVar5;
      }
      lVar7 = UProperty::GetPrivateStaticClass();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar5 = FCachedPropertyPath::GetLastSegment(param_2);
        iVar4 = IStreamingManager::GetNumWantingResources(uVar5);
        plVar9 = (longlong *)FUniqueNetIdString::GetBytes(uVar5);
        plVar6 = plVar9;
        if (plVar9 != (longlong *)0x0) {
          lVar7 = UEnumProperty::GetPrivateStaticClass();
          if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
              != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            plVar6 = (longlong *)plVar9[0xe];
          }
        }
        lVar7 = plVar6[2];
        lVar8 = UIntProperty::GetPrivateStaticClass();
        if (lVar7 == lVar8) {
          if (iVar4 == -1) {
            iVar4 = 0;
          }
          if (((*(int *)((longlong)plVar9 + 0x34) == 4) && (iVar4 < (int)plVar9[6])) &&
             (pvVar10 = (void *)((longlong)(iVar4 * 4) + param_1 + *(int *)((longlong)plVar9 + 0x44)
                                ), pvVar10 != (void *)0x0)) {
            FStringTable::SetOwnerAsset(param_2,pvVar10);
            if (param_4 != pvVar10) {
              if ((*(uint *)(plVar9 + 7) >> 0x1e & 1) != 0) {
                _guard_xfg_dispatch_icall_nop
                          (param_4,pvVar10,(longlong)*(int *)((longlong)plVar9 + 0x34));
                *param_3 = (longlong)plVar9;
                return 1;
              }
              (**(code **)(*plVar9 + 0x2e8))(plVar9,param_4,pvVar10,1);
            }
            *param_3 = (longlong)plVar9;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1420c7690 FUN_1420c7690 body=867 status=ok
// SIG undefined FUN_1420c7690(void)

undefined8 FUN_1420c7690(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  void *pvVar10;
  
  uVar5 = FCachedPropertyPath::GetLastSegment(param_2);
  iVar4 = IStreamingManager::GetNumWantingResources(uVar5);
  plVar6 = (longlong *)FUniqueNetIdString::GetBytes(uVar5);
  if (plVar6 != (longlong *)0x0) {
    lVar7 = UArrayProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (iVar4 == -1) {
        cVar3 = IsConcreteTypeCompatibleWithReflectedType<int>(plVar6);
        if (((cVar3 != '\0') && (*(int *)((longlong)plVar6 + 0x34) == 4)) &&
           (pvVar10 = (void *)(*(int *)((longlong)plVar6 + 0x44) + param_1), pvVar10 != (void *)0x0)
           ) {
          FStringTable::SetOwnerAsset(param_2,pvVar10);
          if (param_4 != pvVar10) {
            if ((*(uint *)(plVar6 + 7) >> 0x1e & 1) != 0) {
              _guard_xfg_dispatch_icall_nop
                        (param_4,pvVar10,(longlong)*(int *)((longlong)plVar6 + 0x34));
              *param_3 = (longlong)plVar6;
              return 1;
            }
            (**(code **)(*plVar6 + 0x2e8))(plVar6,param_4,pvVar10,1);
          }
          *param_3 = (longlong)plVar6;
          return 1;
        }
      }
      else {
        plVar9 = (longlong *)(*(int *)((longlong)plVar6 + 0x44) + param_1);
        iVar1 = *(int *)(plVar6[0xe] + 0x34);
        if ((iVar4 < 0) || ((int)plVar9[1] <= iVar4)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((((bVar2) && (cVar3 = IsConcreteTypeCompatibleWithReflectedType<int>(), cVar3 != '\0'))
            && (*(int *)(plVar6[0xe] + 0x34) == 4)) &&
           (((int)plVar9[1] != 0 &&
            (pvVar10 = (void *)((longlong)(iVar1 * iVar4) + *plVar9), pvVar10 != (void *)0x0)))) {
          FStringTable::SetOwnerAsset(param_2,pvVar10);
          plVar9 = (longlong *)plVar6[0xe];
          if (param_4 != pvVar10) {
            if ((*(uint *)(plVar9 + 7) >> 0x1e & 1) != 0) {
              _guard_xfg_dispatch_icall_nop
                        (param_4,pvVar10,(longlong)*(int *)((longlong)plVar9 + 0x34));
              *param_3 = plVar6[0xe];
              return 1;
            }
            (**(code **)(*plVar9 + 0x2e8))(plVar9,param_4,pvVar10,1);
          }
          *param_3 = plVar6[0xe];
          return 1;
        }
      }
    }
    else {
      lVar7 = FUN_14171c5d0();
      if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FNULLSceneInterface::SetFXSystem(param_2,plVar6);
      }
      else {
        lVar7 = UProperty::GetPrivateStaticClass();
        if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
            lVar7 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          uVar5 = FCachedPropertyPath::GetLastSegment(param_2);
          iVar4 = IStreamingManager::GetNumWantingResources(uVar5);
          plVar9 = (longlong *)FUniqueNetIdString::GetBytes(uVar5);
          plVar6 = plVar9;
          if (plVar9 != (longlong *)0x0) {
            lVar7 = UEnumProperty::GetPrivateStaticClass();
            if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
                lVar7 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              plVar6 = (longlong *)plVar9[0xe];
            }
          }
          lVar7 = plVar6[2];
          lVar8 = UIntProperty::GetPrivateStaticClass();
          if (lVar7 == lVar8) {
            if (iVar4 == -1) {
              iVar4 = 0;
            }
            if (((*(int *)((longlong)plVar9 + 0x34) == 4) && (iVar4 < (int)plVar9[6])) &&
               (pvVar10 = (void *)((longlong)(iVar4 * 4) +
                                  param_1 + *(int *)((longlong)plVar9 + 0x44)),
               pvVar10 != (void *)0x0)) {
              FStringTable::SetOwnerAsset(param_2,pvVar10);
              if (param_4 != pvVar10) {
                if ((*(uint *)(plVar9 + 7) >> 0x1e & 1) != 0) {
                  _guard_xfg_dispatch_icall_nop
                            (param_4,pvVar10,(longlong)*(int *)((longlong)plVar9 + 0x34));
                  *param_3 = (longlong)plVar9;
                  return 1;
                }
                (**(code **)(*plVar9 + 0x2e8))(plVar9,param_4,pvVar10,1);
              }
              *param_3 = (longlong)plVar9;
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1420c7a00 FUN_1420c7a00 body=787 status=ok
// SIG undefined FUN_1420c7a00(void)

undefined8 FUN_1420c7a00(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  void *pvVar8;
  longlong *plVar9;
  
  uVar4 = FCachedPropertyPath::GetLastSegment(param_2);
  iVar3 = IStreamingManager::GetNumWantingResources(uVar4);
  plVar5 = (longlong *)FUniqueNetIdString::GetBytes(uVar4);
  if (plVar5 == (longlong *)0x0) {
    return 0;
  }
  lVar6 = UArrayProperty::GetPrivateStaticClass();
  lVar7 = plVar5[2];
  if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    if (iVar3 != -1) {
      plVar9 = (longlong *)(*(int *)((longlong)plVar5 + 0x44) + param_1);
      iVar1 = *(int *)(plVar5[0xe] + 0x34);
      if ((iVar3 < 0) || ((int)plVar9[1] <= iVar3)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((((bVar2) &&
           (lVar7 = *(longlong *)(plVar5[0xe] + 0x10),
           lVar6 = UFloatProperty::GetPrivateStaticClass(), lVar7 == lVar6)) &&
          (*(int *)(plVar5[0xe] + 0x34) == 4)) &&
         (((int)plVar9[1] != 0 &&
          (pvVar8 = (void *)((longlong)(iVar1 * iVar3) + *plVar9), pvVar8 != (void *)0x0)))) {
        FStringTable::SetOwnerAsset(param_2,pvVar8);
        plVar9 = (longlong *)plVar5[0xe];
        if (param_4 != pvVar8) {
          if ((*(uint *)(plVar9 + 7) >> 0x1e & 1) != 0) {
            _guard_xfg_dispatch_icall_nop
                      (param_4,pvVar8,(longlong)*(int *)((longlong)plVar9 + 0x34));
            *param_3 = plVar5[0xe];
            return 1;
          }
          (**(code **)(*plVar9 + 0x2e8))(plVar9,param_4,pvVar8,1);
        }
        *param_3 = plVar5[0xe];
        return 1;
      }
      return 0;
    }
    lVar6 = UFloatProperty::GetPrivateStaticClass();
    if (lVar7 != lVar6) {
      return 0;
    }
    if (*(int *)((longlong)plVar5 + 0x34) != 4) {
      return 0;
    }
    pvVar8 = (void *)(*(int *)((longlong)plVar5 + 0x44) + param_1);
    if (pvVar8 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar8);
    if (param_4 == pvVar8) goto LAB_1420c7bca;
    if ((*(uint *)(plVar5 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar8,(longlong)*(int *)((longlong)plVar5 + 0x34));
      *param_3 = (longlong)plVar5;
      return 1;
    }
  }
  else {
    lVar7 = FUN_14171c5d0();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FNULLSceneInterface::SetFXSystem(param_2,plVar5);
      uVar4 = FUN_1420e6ba0(param_1,plVar5,param_4);
      return uVar4;
    }
    lVar7 = UProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
    uVar4 = FCachedPropertyPath::GetLastSegment(param_2);
    iVar3 = IStreamingManager::GetNumWantingResources(uVar4);
    plVar5 = (longlong *)FUniqueNetIdString::GetBytes(uVar4);
    lVar7 = plVar5[2];
    lVar6 = UFloatProperty::GetPrivateStaticClass();
    if (lVar7 != lVar6) {
      return 0;
    }
    if (iVar3 == -1) {
      iVar3 = 0;
    }
    if (*(int *)((longlong)plVar5 + 0x34) != 4) {
      return 0;
    }
    if ((int)plVar5[6] <= iVar3) {
      return 0;
    }
    pvVar8 = (void *)((longlong)(iVar3 * 4) + param_1 + *(int *)((longlong)plVar5 + 0x44));
    if (pvVar8 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar8);
    if (param_4 == pvVar8) goto LAB_1420c7bca;
    if ((*(uint *)(plVar5 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar8,(longlong)*(int *)((longlong)plVar5 + 0x34));
      *param_3 = (longlong)plVar5;
      return 1;
    }
  }
  (**(code **)(*plVar5 + 0x2e8))(plVar5,param_4,pvVar8,1);
LAB_1420c7bca:
  *param_3 = (longlong)plVar5;
  return 1;
}



// FUNCTION 1420c7d20 FUN_1420c7d20 body=777 status=ok
// SIG undefined FUN_1420c7d20(void)

undefined8 FUN_1420c7d20(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  void *pvVar8;
  longlong *plVar9;
  
  uVar4 = FCachedPropertyPath::GetLastSegment(param_2);
  iVar3 = IStreamingManager::GetNumWantingResources(uVar4);
  plVar5 = (longlong *)FUniqueNetIdString::GetBytes(uVar4);
  if (plVar5 == (longlong *)0x0) {
    return 0;
  }
  lVar6 = UArrayProperty::GetPrivateStaticClass();
  lVar7 = plVar5[2];
  if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    if (iVar3 != -1) {
      plVar9 = (longlong *)(*(int *)((longlong)plVar5 + 0x44) + param_1);
      iVar1 = *(int *)(plVar5[0xe] + 0x34);
      if ((iVar3 < 0) || ((int)plVar9[1] <= iVar3)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((((bVar2) &&
           (lVar7 = *(longlong *)(plVar5[0xe] + 0x10),
           lVar6 = UFloatProperty::GetPrivateStaticClass(), lVar7 == lVar6)) &&
          (*(int *)(plVar5[0xe] + 0x34) == 4)) &&
         (((int)plVar9[1] != 0 &&
          (pvVar8 = (void *)((longlong)(iVar1 * iVar3) + *plVar9), pvVar8 != (void *)0x0)))) {
        FStringTable::SetOwnerAsset(param_2,pvVar8);
        plVar9 = (longlong *)plVar5[0xe];
        if (param_4 != pvVar8) {
          if ((*(uint *)(plVar9 + 7) >> 0x1e & 1) != 0) {
            _guard_xfg_dispatch_icall_nop
                      (param_4,pvVar8,(longlong)*(int *)((longlong)plVar9 + 0x34));
            *param_3 = plVar5[0xe];
            return 1;
          }
          (**(code **)(*plVar9 + 0x2e8))(plVar9,param_4,pvVar8,1);
        }
        *param_3 = plVar5[0xe];
        return 1;
      }
      return 0;
    }
    lVar6 = UFloatProperty::GetPrivateStaticClass();
    if (lVar7 != lVar6) {
      return 0;
    }
    if (*(int *)((longlong)plVar5 + 0x34) != 4) {
      return 0;
    }
    pvVar8 = (void *)(*(int *)((longlong)plVar5 + 0x44) + param_1);
    if (pvVar8 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar8);
    if (param_4 == pvVar8) goto LAB_1420c7ee7;
    if ((*(uint *)(plVar5 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar8,(longlong)*(int *)((longlong)plVar5 + 0x34));
      *param_3 = (longlong)plVar5;
      return 1;
    }
  }
  else {
    lVar7 = FUN_14171c5d0();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FNULLSceneInterface::SetFXSystem(param_2,plVar5);
      return 0;
    }
    lVar7 = UProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
    uVar4 = FCachedPropertyPath::GetLastSegment(param_2);
    iVar3 = IStreamingManager::GetNumWantingResources(uVar4);
    plVar5 = (longlong *)FUniqueNetIdString::GetBytes(uVar4);
    lVar7 = plVar5[2];
    lVar6 = UFloatProperty::GetPrivateStaticClass();
    if (lVar7 != lVar6) {
      return 0;
    }
    if (iVar3 == -1) {
      iVar3 = 0;
    }
    if (*(int *)((longlong)plVar5 + 0x34) != 4) {
      return 0;
    }
    if ((int)plVar5[6] <= iVar3) {
      return 0;
    }
    pvVar8 = (void *)((longlong)(iVar3 * 4) + param_1 + *(int *)((longlong)plVar5 + 0x44));
    if (pvVar8 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar8);
    if (param_4 == pvVar8) goto LAB_1420c7ee7;
    if ((*(uint *)(plVar5 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar8,(longlong)*(int *)((longlong)plVar5 + 0x34));
      *param_3 = (longlong)plVar5;
      return 1;
    }
  }
  (**(code **)(*plVar5 + 0x2e8))(plVar5,param_4,pvVar8,1);
LAB_1420c7ee7:
  *param_3 = (longlong)plVar5;
  return 1;
}



// FUNCTION 1420c8030 FUN_1420c8030 body=829 status=ok
// SIG undefined FUN_1420c8030(void)

undefined8 FUN_1420c8030(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  void *pvVar9;
  
  uVar5 = FCachedPropertyPath::GetLastSegment(param_2);
  iVar4 = IStreamingManager::GetNumWantingResources(uVar5);
  plVar6 = (longlong *)FUniqueNetIdString::GetBytes(uVar5);
  if (plVar6 == (longlong *)0x0) {
    return 0;
  }
  lVar7 = UArrayProperty::GetPrivateStaticClass();
  if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    if (iVar4 != -1) {
      plVar8 = (longlong *)(*(int *)((longlong)plVar6 + 0x44) + param_1);
      iVar1 = *(int *)(plVar6[0xe] + 0x34);
      if ((iVar4 < 0) || ((int)plVar8[1] <= iVar4)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((((bVar2) &&
           (cVar3 = IsConcreteTypeCompatibleWithReflectedType<UObject_*>(), cVar3 != '\0')) &&
          (*(int *)(plVar6[0xe] + 0x34) == 8)) &&
         (((int)plVar8[1] != 0 &&
          (pvVar9 = (void *)((longlong)(iVar1 * iVar4) + *plVar8), pvVar9 != (void *)0x0)))) {
        FStringTable::SetOwnerAsset(param_2,pvVar9);
        plVar8 = (longlong *)plVar6[0xe];
        if (param_4 != pvVar9) {
          if ((*(uint *)(plVar8 + 7) >> 0x1e & 1) != 0) {
            _guard_xfg_dispatch_icall_nop
                      (param_4,pvVar9,(longlong)*(int *)((longlong)plVar8 + 0x34));
            *param_3 = plVar6[0xe];
            return 1;
          }
          (**(code **)(*plVar8 + 0x2e8))(plVar8,param_4,pvVar9,1);
        }
        *param_3 = plVar6[0xe];
        return 1;
      }
      return 0;
    }
    cVar3 = IsConcreteTypeCompatibleWithReflectedType<UObject_*>(plVar6);
    if (cVar3 == '\0') {
      return 0;
    }
    if (*(int *)((longlong)plVar6 + 0x34) != 8) {
      return 0;
    }
    pvVar9 = (void *)(*(int *)((longlong)plVar6 + 0x44) + param_1);
    if (pvVar9 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar9);
    if (param_4 == pvVar9) goto LAB_1420c81f5;
    if ((*(uint *)(plVar6 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar9,(longlong)*(int *)((longlong)plVar6 + 0x34));
      *param_3 = (longlong)plVar6;
      return 1;
    }
  }
  else {
    lVar7 = FUN_14171c5d0();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FNULLSceneInterface::SetFXSystem(param_2,plVar6);
      uVar5 = FUN_1420e6c70(param_1,plVar6,param_4);
      return uVar5;
    }
    lVar7 = UProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
    uVar5 = FCachedPropertyPath::GetLastSegment(param_2);
    iVar4 = IStreamingManager::GetNumWantingResources(uVar5);
    plVar6 = (longlong *)FUniqueNetIdString::GetBytes(uVar5);
    if (plVar6 == (longlong *)0x0) {
      return 0;
    }
    lVar7 = UObjectProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
    if (iVar4 == -1) {
      iVar4 = 0;
    }
    if (*(int *)((longlong)plVar6 + 0x34) != 8) {
      return 0;
    }
    if ((int)plVar6[6] <= iVar4) {
      return 0;
    }
    pvVar9 = (void *)((longlong)(iVar4 * 8) + param_1 + *(int *)((longlong)plVar6 + 0x44));
    if (pvVar9 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar9);
    if (param_4 == pvVar9) goto LAB_1420c81f5;
    if ((*(uint *)(plVar6 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar9,(longlong)*(int *)((longlong)plVar6 + 0x34));
      *param_3 = (longlong)plVar6;
      return 1;
    }
  }
  (**(code **)(*plVar6 + 0x2e8))(plVar6,param_4,pvVar9,1);
LAB_1420c81f5:
  *param_3 = (longlong)plVar6;
  return 1;
}



// FUNCTION 1420c8370 FUN_1420c8370 body=815 status=ok
// SIG undefined FUN_1420c8370(void)

undefined8 FUN_1420c8370(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  void *pvVar9;
  
  uVar5 = FCachedPropertyPath::GetLastSegment(param_2);
  iVar4 = IStreamingManager::GetNumWantingResources(uVar5);
  plVar6 = (longlong *)FUniqueNetIdString::GetBytes(uVar5);
  if (plVar6 == (longlong *)0x0) {
    return 0;
  }
  lVar7 = UArrayProperty::GetPrivateStaticClass();
  if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    if (iVar4 != -1) {
      plVar8 = (longlong *)(*(int *)((longlong)plVar6 + 0x44) + param_1);
      iVar1 = *(int *)(plVar6[0xe] + 0x34);
      if ((iVar4 < 0) || ((int)plVar8[1] <= iVar4)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((((bVar2) &&
           (cVar3 = IsConcreteTypeCompatibleWithReflectedType<UObject_*>(), cVar3 != '\0')) &&
          (*(int *)(plVar6[0xe] + 0x34) == 8)) &&
         (((int)plVar8[1] != 0 &&
          (pvVar9 = (void *)((longlong)(iVar1 * iVar4) + *plVar8), pvVar9 != (void *)0x0)))) {
        FStringTable::SetOwnerAsset(param_2,pvVar9);
        plVar8 = (longlong *)plVar6[0xe];
        if (param_4 != pvVar9) {
          if ((*(uint *)(plVar8 + 7) >> 0x1e & 1) != 0) {
            _guard_xfg_dispatch_icall_nop
                      (param_4,pvVar9,(longlong)*(int *)((longlong)plVar8 + 0x34));
            *param_3 = plVar6[0xe];
            return 1;
          }
          (**(code **)(*plVar8 + 0x2e8))(plVar8,param_4,pvVar9,1);
        }
        *param_3 = plVar6[0xe];
        return 1;
      }
      return 0;
    }
    cVar3 = IsConcreteTypeCompatibleWithReflectedType<UObject_*>(plVar6);
    if (cVar3 == '\0') {
      return 0;
    }
    if (*(int *)((longlong)plVar6 + 0x34) != 8) {
      return 0;
    }
    pvVar9 = (void *)(*(int *)((longlong)plVar6 + 0x44) + param_1);
    if (pvVar9 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar9);
    if (param_4 == pvVar9) goto LAB_1420c8532;
    if ((*(uint *)(plVar6 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar9,(longlong)*(int *)((longlong)plVar6 + 0x34));
      *param_3 = (longlong)plVar6;
      return 1;
    }
  }
  else {
    lVar7 = FUN_14171c5d0();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FNULLSceneInterface::SetFXSystem(param_2,plVar6);
      return 0;
    }
    lVar7 = UProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
    uVar5 = FCachedPropertyPath::GetLastSegment(param_2);
    iVar4 = IStreamingManager::GetNumWantingResources(uVar5);
    plVar6 = (longlong *)FUniqueNetIdString::GetBytes(uVar5);
    if (plVar6 == (longlong *)0x0) {
      return 0;
    }
    lVar7 = UObjectProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
    if (iVar4 == -1) {
      iVar4 = 0;
    }
    if (*(int *)((longlong)plVar6 + 0x34) != 8) {
      return 0;
    }
    if ((int)plVar6[6] <= iVar4) {
      return 0;
    }
    pvVar9 = (void *)((longlong)(iVar4 * 8) + param_1 + *(int *)((longlong)plVar6 + 0x44));
    if (pvVar9 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar9);
    if (param_4 == pvVar9) goto LAB_1420c8532;
    if ((*(uint *)(plVar6 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar9,(longlong)*(int *)((longlong)plVar6 + 0x34));
      *param_3 = (longlong)plVar6;
      return 1;
    }
  }
  (**(code **)(*plVar6 + 0x2e8))(plVar6,param_4,pvVar9,1);
LAB_1420c8532:
  *param_3 = (longlong)plVar6;
  return 1;
}



// FUNCTION 1420c86a0 FUN_1420c86a0 body=777 status=ok
// SIG undefined FUN_1420c86a0(void)

undefined8 FUN_1420c86a0(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  void *pvVar9;
  
  uVar5 = FCachedPropertyPath::GetLastSegment(param_2);
  iVar4 = IStreamingManager::GetNumWantingResources(uVar5);
  plVar6 = (longlong *)FUniqueNetIdString::GetBytes(uVar5);
  if (plVar6 == (longlong *)0x0) {
    return 0;
  }
  lVar7 = UArrayProperty::GetPrivateStaticClass();
  if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    if (iVar4 != -1) {
      plVar8 = (longlong *)(*(int *)((longlong)plVar6 + 0x44) + param_1);
      iVar1 = *(int *)(plVar6[0xe] + 0x34);
      if ((iVar4 < 0) || ((int)plVar8[1] <= iVar4)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((((bVar2) && (cVar3 = FUN_1420caf70(), cVar3 != '\0')) &&
          (*(int *)(plVar6[0xe] + 0x34) == 0x10)) &&
         (((int)plVar8[1] != 0 &&
          (pvVar9 = (void *)((longlong)(iVar1 * iVar4) + *plVar8), pvVar9 != (void *)0x0)))) {
        FStringTable::SetOwnerAsset(param_2,pvVar9);
        plVar8 = (longlong *)plVar6[0xe];
        if (param_4 != pvVar9) {
          if ((*(uint *)(plVar8 + 7) >> 0x1e & 1) != 0) {
            _guard_xfg_dispatch_icall_nop
                      (param_4,pvVar9,(longlong)*(int *)((longlong)plVar8 + 0x34));
            *param_3 = plVar6[0xe];
            return 1;
          }
          (**(code **)(*plVar8 + 0x2e8))(plVar8,param_4,pvVar9,1);
        }
        *param_3 = plVar6[0xe];
        return 1;
      }
      return 0;
    }
    cVar3 = FUN_1420caf70(plVar6);
    if (cVar3 == '\0') {
      return 0;
    }
    if (*(int *)((longlong)plVar6 + 0x34) != 0x10) {
      return 0;
    }
    pvVar9 = (void *)(*(int *)((longlong)plVar6 + 0x44) + param_1);
    if (pvVar9 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar9);
    if (param_4 == pvVar9) goto LAB_1420c8865;
    if ((*(uint *)(plVar6 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar9,(longlong)*(int *)((longlong)plVar6 + 0x34));
      *param_3 = (longlong)plVar6;
      return 1;
    }
  }
  else {
    lVar7 = FUN_14171c5d0();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FNULLSceneInterface::SetFXSystem(param_2,plVar6);
      uVar5 = FUN_1420e6d30(param_1,plVar6,param_4);
      return uVar5;
    }
    lVar7 = UProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
    uVar5 = FCachedPropertyPath::GetLastSegment(param_2);
    iVar4 = IStreamingManager::GetNumWantingResources(uVar5);
    plVar6 = (longlong *)FUniqueNetIdString::GetBytes(uVar5);
    cVar3 = FUN_1420caf70(plVar6);
    if (cVar3 == '\0') {
      return 0;
    }
    if (iVar4 == -1) {
      iVar4 = 0;
    }
    if (*(int *)((longlong)plVar6 + 0x34) != 0x10) {
      return 0;
    }
    if ((int)plVar6[6] <= iVar4) {
      return 0;
    }
    pvVar9 = (void *)((longlong)(iVar4 << 4) + *(int *)((longlong)plVar6 + 0x44) + param_1);
    if (pvVar9 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar9);
    if (param_4 == pvVar9) goto LAB_1420c8865;
    if ((*(uint *)(plVar6 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar9,(longlong)*(int *)((longlong)plVar6 + 0x34));
      *param_3 = (longlong)plVar6;
      return 1;
    }
  }
  (**(code **)(*plVar6 + 0x2e8))(plVar6,param_4,pvVar9,1);
LAB_1420c8865:
  *param_3 = (longlong)plVar6;
  return 1;
}



// FUNCTION 1420c89b0 FUN_1420c89b0 body=767 status=ok
// SIG undefined FUN_1420c89b0(void)

undefined8 FUN_1420c89b0(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  void *pvVar9;
  
  uVar5 = FCachedPropertyPath::GetLastSegment(param_2);
  iVar4 = IStreamingManager::GetNumWantingResources(uVar5);
  plVar6 = (longlong *)FUniqueNetIdString::GetBytes(uVar5);
  if (plVar6 == (longlong *)0x0) {
    return 0;
  }
  lVar7 = UArrayProperty::GetPrivateStaticClass();
  if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    if (iVar4 != -1) {
      plVar8 = (longlong *)(*(int *)((longlong)plVar6 + 0x44) + param_1);
      iVar1 = *(int *)(plVar6[0xe] + 0x34);
      if ((iVar4 < 0) || ((int)plVar8[1] <= iVar4)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((((bVar2) && (cVar3 = FUN_1420caf70(), cVar3 != '\0')) &&
          (*(int *)(plVar6[0xe] + 0x34) == 0x10)) &&
         (((int)plVar8[1] != 0 &&
          (pvVar9 = (void *)((longlong)(iVar1 * iVar4) + *plVar8), pvVar9 != (void *)0x0)))) {
        FStringTable::SetOwnerAsset(param_2,pvVar9);
        plVar8 = (longlong *)plVar6[0xe];
        if (param_4 != pvVar9) {
          if ((*(uint *)(plVar8 + 7) >> 0x1e & 1) != 0) {
            _guard_xfg_dispatch_icall_nop
                      (param_4,pvVar9,(longlong)*(int *)((longlong)plVar8 + 0x34));
            *param_3 = plVar6[0xe];
            return 1;
          }
          (**(code **)(*plVar8 + 0x2e8))(plVar8,param_4,pvVar9,1);
        }
        *param_3 = plVar6[0xe];
        return 1;
      }
      return 0;
    }
    cVar3 = FUN_1420caf70(plVar6);
    if (cVar3 == '\0') {
      return 0;
    }
    if (*(int *)((longlong)plVar6 + 0x34) != 0x10) {
      return 0;
    }
    pvVar9 = (void *)(*(int *)((longlong)plVar6 + 0x44) + param_1);
    if (pvVar9 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar9);
    if (param_4 == pvVar9) goto LAB_1420c8b72;
    if ((*(uint *)(plVar6 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar9,(longlong)*(int *)((longlong)plVar6 + 0x34));
      *param_3 = (longlong)plVar6;
      return 1;
    }
  }
  else {
    lVar7 = FUN_14171c5d0();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FNULLSceneInterface::SetFXSystem(param_2,plVar6);
      return 0;
    }
    lVar7 = UProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
    uVar5 = FCachedPropertyPath::GetLastSegment(param_2);
    iVar4 = IStreamingManager::GetNumWantingResources(uVar5);
    plVar6 = (longlong *)FUniqueNetIdString::GetBytes(uVar5);
    cVar3 = FUN_1420caf70(plVar6);
    if (cVar3 == '\0') {
      return 0;
    }
    if (iVar4 == -1) {
      iVar4 = 0;
    }
    if (*(int *)((longlong)plVar6 + 0x34) != 0x10) {
      return 0;
    }
    if ((int)plVar6[6] <= iVar4) {
      return 0;
    }
    pvVar9 = (void *)((longlong)(iVar4 << 4) + *(int *)((longlong)plVar6 + 0x44) + param_1);
    if (pvVar9 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar9);
    if (param_4 == pvVar9) goto LAB_1420c8b72;
    if ((*(uint *)(plVar6 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar9,(longlong)*(int *)((longlong)plVar6 + 0x34));
      *param_3 = (longlong)plVar6;
      return 1;
    }
  }
  (**(code **)(*plVar6 + 0x2e8))(plVar6,param_4,pvVar9,1);
LAB_1420c8b72:
  *param_3 = (longlong)plVar6;
  return 1;
}



// FUNCTION 1420c8cb0 FUN_1420c8cb0 body=851 status=ok
// SIG undefined FUN_1420c8cb0(void)

undefined8 FUN_1420c8cb0(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  void *pvVar9;
  
  uVar5 = FCachedPropertyPath::GetLastSegment(param_2);
  iVar4 = IStreamingManager::GetNumWantingResources(uVar5);
  plVar6 = (longlong *)FUniqueNetIdString::GetBytes(uVar5);
  if (plVar6 == (longlong *)0x0) {
    return 0;
  }
  lVar7 = UArrayProperty::GetPrivateStaticClass();
  if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    if (iVar4 != -1) {
      plVar8 = (longlong *)(*(int *)((longlong)plVar6 + 0x44) + param_1);
      iVar1 = *(int *)(plVar6[0xe] + 0x34);
      if ((iVar4 < 0) || ((int)plVar8[1] <= iVar4)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((((bVar2) &&
           (cVar3 = IsConcreteTypeCompatibleWithReflectedType<FSlateBrush>(), cVar3 != '\0')) &&
          (*(int *)(plVar6[0xe] + 0x34) == 0x88)) &&
         (((int)plVar8[1] != 0 &&
          (pvVar9 = (void *)((longlong)(iVar1 * iVar4) + *plVar8), pvVar9 != (void *)0x0)))) {
        FStringTable::SetOwnerAsset(param_2,pvVar9);
        plVar8 = (longlong *)plVar6[0xe];
        if (param_4 != pvVar9) {
          if ((*(uint *)(plVar8 + 7) >> 0x1e & 1) != 0) {
            _guard_xfg_dispatch_icall_nop
                      (param_4,pvVar9,(longlong)*(int *)((longlong)plVar8 + 0x34));
            *param_3 = plVar6[0xe];
            return 1;
          }
          (**(code **)(*plVar8 + 0x2e8))(plVar8,param_4,pvVar9,1);
        }
        *param_3 = plVar6[0xe];
        return 1;
      }
      return 0;
    }
    cVar3 = IsConcreteTypeCompatibleWithReflectedType<FSlateBrush>(plVar6);
    if (cVar3 == '\0') {
      return 0;
    }
    if (*(int *)((longlong)plVar6 + 0x34) != 0x88) {
      return 0;
    }
    pvVar9 = (void *)(*(int *)((longlong)plVar6 + 0x44) + param_1);
    if (pvVar9 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar9);
    if (param_4 == pvVar9) goto LAB_1420c8e7b;
    if ((*(uint *)(plVar6 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar9,(longlong)*(int *)((longlong)plVar6 + 0x34));
      *param_3 = (longlong)plVar6;
      return 1;
    }
  }
  else {
    lVar7 = FUN_14171c5d0();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FNULLSceneInterface::SetFXSystem(param_2,plVar6);
      uVar5 = FUN_1420e6df0(param_1,plVar6,param_4);
      return uVar5;
    }
    lVar7 = UProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
    uVar5 = FCachedPropertyPath::GetLastSegment(param_2);
    iVar4 = IStreamingManager::GetNumWantingResources(uVar5);
    plVar6 = (longlong *)FUniqueNetIdString::GetBytes(uVar5);
    if (plVar6 == (longlong *)0x0) {
      return 0;
    }
    lVar7 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
    lVar7 = FSlateBrush::StaticStruct();
    if (plVar6[0xe] != lVar7) {
      return 0;
    }
    if (iVar4 == -1) {
      iVar4 = 0;
    }
    if (*(int *)((longlong)plVar6 + 0x34) != 0x88) {
      return 0;
    }
    if ((int)plVar6[6] <= iVar4) {
      return 0;
    }
    pvVar9 = (void *)((longlong)*(int *)((longlong)plVar6 + 0x44) + iVar4 * 0x88 + param_1);
    if (pvVar9 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar9);
    if (param_4 == pvVar9) goto LAB_1420c8e7b;
    if ((*(uint *)(plVar6 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar9,(longlong)*(int *)((longlong)plVar6 + 0x34));
      *param_3 = (longlong)plVar6;
      return 1;
    }
  }
  (**(code **)(*plVar6 + 0x2e8))(plVar6,param_4,pvVar9,1);
LAB_1420c8e7b:
  *param_3 = (longlong)plVar6;
  return 1;
}



// FUNCTION 1420c9010 FUN_1420c9010 body=841 status=ok
// SIG undefined FUN_1420c9010(void)

undefined8 FUN_1420c9010(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  void *pvVar9;
  
  uVar5 = FCachedPropertyPath::GetLastSegment(param_2);
  iVar4 = IStreamingManager::GetNumWantingResources(uVar5);
  plVar6 = (longlong *)FUniqueNetIdString::GetBytes(uVar5);
  if (plVar6 == (longlong *)0x0) {
    return 0;
  }
  lVar7 = UArrayProperty::GetPrivateStaticClass();
  if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    if (iVar4 != -1) {
      plVar8 = (longlong *)(*(int *)((longlong)plVar6 + 0x44) + param_1);
      iVar1 = *(int *)(plVar6[0xe] + 0x34);
      if ((iVar4 < 0) || ((int)plVar8[1] <= iVar4)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((((bVar2) &&
           (cVar3 = IsConcreteTypeCompatibleWithReflectedType<FSlateBrush>(), cVar3 != '\0')) &&
          (*(int *)(plVar6[0xe] + 0x34) == 0x88)) &&
         (((int)plVar8[1] != 0 &&
          (pvVar9 = (void *)((longlong)(iVar1 * iVar4) + *plVar8), pvVar9 != (void *)0x0)))) {
        FStringTable::SetOwnerAsset(param_2,pvVar9);
        plVar8 = (longlong *)plVar6[0xe];
        if (param_4 != pvVar9) {
          if ((*(uint *)(plVar8 + 7) >> 0x1e & 1) != 0) {
            _guard_xfg_dispatch_icall_nop
                      (param_4,pvVar9,(longlong)*(int *)((longlong)plVar8 + 0x34));
            *param_3 = plVar6[0xe];
            return 1;
          }
          (**(code **)(*plVar8 + 0x2e8))(plVar8,param_4,pvVar9,1);
        }
        *param_3 = plVar6[0xe];
        return 1;
      }
      return 0;
    }
    cVar3 = IsConcreteTypeCompatibleWithReflectedType<FSlateBrush>(plVar6);
    if (cVar3 == '\0') {
      return 0;
    }
    if (*(int *)((longlong)plVar6 + 0x34) != 0x88) {
      return 0;
    }
    pvVar9 = (void *)(*(int *)((longlong)plVar6 + 0x44) + param_1);
    if (pvVar9 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar9);
    if (param_4 == pvVar9) goto LAB_1420c91d8;
    if ((*(uint *)(plVar6 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar9,(longlong)*(int *)((longlong)plVar6 + 0x34));
      *param_3 = (longlong)plVar6;
      return 1;
    }
  }
  else {
    lVar7 = FUN_14171c5d0();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FNULLSceneInterface::SetFXSystem(param_2,plVar6);
      return 0;
    }
    lVar7 = UProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
    uVar5 = FCachedPropertyPath::GetLastSegment(param_2);
    iVar4 = IStreamingManager::GetNumWantingResources(uVar5);
    plVar6 = (longlong *)FUniqueNetIdString::GetBytes(uVar5);
    if (plVar6 == (longlong *)0x0) {
      return 0;
    }
    lVar7 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
    lVar7 = FSlateBrush::StaticStruct();
    if (plVar6[0xe] != lVar7) {
      return 0;
    }
    if (iVar4 == -1) {
      iVar4 = 0;
    }
    if (*(int *)((longlong)plVar6 + 0x34) != 0x88) {
      return 0;
    }
    if ((int)plVar6[6] <= iVar4) {
      return 0;
    }
    pvVar9 = (void *)((longlong)*(int *)((longlong)plVar6 + 0x44) + iVar4 * 0x88 + param_1);
    if (pvVar9 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar9);
    if (param_4 == pvVar9) goto LAB_1420c91d8;
    if ((*(uint *)(plVar6 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar9,(longlong)*(int *)((longlong)plVar6 + 0x34));
      *param_3 = (longlong)plVar6;
      return 1;
    }
  }
  (**(code **)(*plVar6 + 0x2e8))(plVar6,param_4,pvVar9,1);
LAB_1420c91d8:
  *param_3 = (longlong)plVar6;
  return 1;
}



// FUNCTION 1420c9360 FUN_1420c9360 body=844 status=ok
// SIG undefined FUN_1420c9360(void)

undefined8 FUN_1420c9360(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  void *pvVar9;
  
  uVar5 = FCachedPropertyPath::GetLastSegment(param_2);
  iVar4 = IStreamingManager::GetNumWantingResources(uVar5);
  plVar6 = (longlong *)FUniqueNetIdString::GetBytes(uVar5);
  if (plVar6 == (longlong *)0x0) {
    return 0;
  }
  lVar7 = UArrayProperty::GetPrivateStaticClass();
  if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    if (iVar4 != -1) {
      plVar8 = (longlong *)(*(int *)((longlong)plVar6 + 0x44) + param_1);
      iVar1 = *(int *)(plVar6[0xe] + 0x34);
      if ((iVar4 < 0) || ((int)plVar8[1] <= iVar4)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((((bVar2) &&
           (cVar3 = IsConcreteTypeCompatibleWithReflectedType<FSlateColor>(), cVar3 != '\0')) &&
          (*(int *)(plVar6[0xe] + 0x34) == 0x28)) &&
         (((int)plVar8[1] != 0 &&
          (pvVar9 = (void *)((longlong)(iVar1 * iVar4) + *plVar8), pvVar9 != (void *)0x0)))) {
        FStringTable::SetOwnerAsset(param_2,pvVar9);
        plVar8 = (longlong *)plVar6[0xe];
        if (param_4 != pvVar9) {
          if ((*(uint *)(plVar8 + 7) >> 0x1e & 1) != 0) {
            _guard_xfg_dispatch_icall_nop
                      (param_4,pvVar9,(longlong)*(int *)((longlong)plVar8 + 0x34));
            *param_3 = plVar6[0xe];
            return 1;
          }
          (**(code **)(*plVar8 + 0x2e8))(plVar8,param_4,pvVar9,1);
        }
        *param_3 = plVar6[0xe];
        return 1;
      }
      return 0;
    }
    cVar3 = IsConcreteTypeCompatibleWithReflectedType<FSlateColor>(plVar6);
    if (cVar3 == '\0') {
      return 0;
    }
    if (*(int *)((longlong)plVar6 + 0x34) != 0x28) {
      return 0;
    }
    pvVar9 = (void *)(*(int *)((longlong)plVar6 + 0x44) + param_1);
    if (pvVar9 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar9);
    if (param_4 == pvVar9) goto LAB_1420c9525;
    if ((*(uint *)(plVar6 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar9,(longlong)*(int *)((longlong)plVar6 + 0x34));
      *param_3 = (longlong)plVar6;
      return 1;
    }
  }
  else {
    lVar7 = FUN_14171c5d0();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FNULLSceneInterface::SetFXSystem(param_2,plVar6);
      uVar5 = FUN_1420e6eb0(param_1,plVar6,param_4);
      return uVar5;
    }
    lVar7 = UProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
    uVar5 = FCachedPropertyPath::GetLastSegment(param_2);
    iVar4 = IStreamingManager::GetNumWantingResources(uVar5);
    plVar6 = (longlong *)FUniqueNetIdString::GetBytes(uVar5);
    if (plVar6 == (longlong *)0x0) {
      return 0;
    }
    lVar7 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
    lVar7 = FSlateColor::StaticStruct();
    if (plVar6[0xe] != lVar7) {
      return 0;
    }
    if (iVar4 == -1) {
      iVar4 = 0;
    }
    if (*(int *)((longlong)plVar6 + 0x34) != 0x28) {
      return 0;
    }
    if ((int)plVar6[6] <= iVar4) {
      return 0;
    }
    pvVar9 = (void *)((longlong)(iVar4 * 0x28) + param_1 + *(int *)((longlong)plVar6 + 0x44));
    if (pvVar9 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar9);
    if (param_4 == pvVar9) goto LAB_1420c9525;
    if ((*(uint *)(plVar6 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar9,(longlong)*(int *)((longlong)plVar6 + 0x34));
      *param_3 = (longlong)plVar6;
      return 1;
    }
  }
  (**(code **)(*plVar6 + 0x2e8))(plVar6,param_4,pvVar9,1);
LAB_1420c9525:
  *param_3 = (longlong)plVar6;
  return 1;
}



// FUNCTION 1420c96b0 FUN_1420c96b0 body=834 status=ok
// SIG undefined FUN_1420c96b0(void)

undefined8 FUN_1420c96b0(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  void *pvVar9;
  
  uVar5 = FCachedPropertyPath::GetLastSegment(param_2);
  iVar4 = IStreamingManager::GetNumWantingResources(uVar5);
  plVar6 = (longlong *)FUniqueNetIdString::GetBytes(uVar5);
  if (plVar6 == (longlong *)0x0) {
    return 0;
  }
  lVar7 = UArrayProperty::GetPrivateStaticClass();
  if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    if (iVar4 != -1) {
      plVar8 = (longlong *)(*(int *)((longlong)plVar6 + 0x44) + param_1);
      iVar1 = *(int *)(plVar6[0xe] + 0x34);
      if ((iVar4 < 0) || ((int)plVar8[1] <= iVar4)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((((bVar2) &&
           (cVar3 = IsConcreteTypeCompatibleWithReflectedType<FSlateColor>(), cVar3 != '\0')) &&
          (*(int *)(plVar6[0xe] + 0x34) == 0x28)) &&
         (((int)plVar8[1] != 0 &&
          (pvVar9 = (void *)((longlong)(iVar1 * iVar4) + *plVar8), pvVar9 != (void *)0x0)))) {
        FStringTable::SetOwnerAsset(param_2,pvVar9);
        plVar8 = (longlong *)plVar6[0xe];
        if (param_4 != pvVar9) {
          if ((*(uint *)(plVar8 + 7) >> 0x1e & 1) != 0) {
            _guard_xfg_dispatch_icall_nop
                      (param_4,pvVar9,(longlong)*(int *)((longlong)plVar8 + 0x34));
            *param_3 = plVar6[0xe];
            return 1;
          }
          (**(code **)(*plVar8 + 0x2e8))(plVar8,param_4,pvVar9,1);
        }
        *param_3 = plVar6[0xe];
        return 1;
      }
      return 0;
    }
    cVar3 = IsConcreteTypeCompatibleWithReflectedType<FSlateColor>(plVar6);
    if (cVar3 == '\0') {
      return 0;
    }
    if (*(int *)((longlong)plVar6 + 0x34) != 0x28) {
      return 0;
    }
    pvVar9 = (void *)(*(int *)((longlong)plVar6 + 0x44) + param_1);
    if (pvVar9 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar9);
    if (param_4 == pvVar9) goto LAB_1420c9872;
    if ((*(uint *)(plVar6 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar9,(longlong)*(int *)((longlong)plVar6 + 0x34));
      *param_3 = (longlong)plVar6;
      return 1;
    }
  }
  else {
    lVar7 = FUN_14171c5d0();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FNULLSceneInterface::SetFXSystem(param_2,plVar6);
      return 0;
    }
    lVar7 = UProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
    uVar5 = FCachedPropertyPath::GetLastSegment(param_2);
    iVar4 = IStreamingManager::GetNumWantingResources(uVar5);
    plVar6 = (longlong *)FUniqueNetIdString::GetBytes(uVar5);
    if (plVar6 == (longlong *)0x0) {
      return 0;
    }
    lVar7 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
    lVar7 = FSlateColor::StaticStruct();
    if (plVar6[0xe] != lVar7) {
      return 0;
    }
    if (iVar4 == -1) {
      iVar4 = 0;
    }
    if (*(int *)((longlong)plVar6 + 0x34) != 0x28) {
      return 0;
    }
    if ((int)plVar6[6] <= iVar4) {
      return 0;
    }
    pvVar9 = (void *)((longlong)(iVar4 * 0x28) + param_1 + *(int *)((longlong)plVar6 + 0x44));
    if (pvVar9 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar9);
    if (param_4 == pvVar9) goto LAB_1420c9872;
    if ((*(uint *)(plVar6 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar9,(longlong)*(int *)((longlong)plVar6 + 0x34));
      *param_3 = (longlong)plVar6;
      return 1;
    }
  }
  (**(code **)(*plVar6 + 0x2e8))(plVar6,param_4,pvVar9,1);
LAB_1420c9872:
  *param_3 = (longlong)plVar6;
  return 1;
}



// FUNCTION 1420c9a00 FUN_1420c9a00 body=782 status=ok
// SIG undefined FUN_1420c9a00(void)

undefined8 FUN_1420c9a00(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  void *pvVar8;
  longlong *plVar9;
  
  uVar4 = FCachedPropertyPath::GetLastSegment(param_2);
  iVar3 = IStreamingManager::GetNumWantingResources(uVar4);
  plVar5 = (longlong *)FUniqueNetIdString::GetBytes(uVar4);
  if (plVar5 == (longlong *)0x0) {
    return 0;
  }
  lVar6 = UArrayProperty::GetPrivateStaticClass();
  lVar7 = plVar5[2];
  if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    if (iVar3 != -1) {
      plVar9 = (longlong *)(*(int *)((longlong)plVar5 + 0x44) + param_1);
      iVar1 = *(int *)(plVar5[0xe] + 0x34);
      if ((iVar3 < 0) || ((int)plVar9[1] <= iVar3)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((((bVar2) &&
           (lVar7 = *(longlong *)(plVar5[0xe] + 0x10), lVar6 = UStrProperty::GetPrivateStaticClass()
           , lVar7 == lVar6)) && (*(int *)(plVar5[0xe] + 0x34) == 0x10)) &&
         (((int)plVar9[1] != 0 &&
          (pvVar8 = (void *)((longlong)(iVar1 * iVar3) + *plVar9), pvVar8 != (void *)0x0)))) {
        FStringTable::SetOwnerAsset(param_2,pvVar8);
        plVar9 = (longlong *)plVar5[0xe];
        if (param_4 != pvVar8) {
          if ((*(uint *)(plVar9 + 7) >> 0x1e & 1) != 0) {
            _guard_xfg_dispatch_icall_nop
                      (param_4,pvVar8,(longlong)*(int *)((longlong)plVar9 + 0x34));
            *param_3 = plVar5[0xe];
            return 1;
          }
          (**(code **)(*plVar9 + 0x2e8))(plVar9,param_4,pvVar8,1);
        }
        *param_3 = plVar5[0xe];
        return 1;
      }
      return 0;
    }
    lVar6 = UStrProperty::GetPrivateStaticClass();
    if (lVar7 != lVar6) {
      return 0;
    }
    if (*(int *)((longlong)plVar5 + 0x34) != 0x10) {
      return 0;
    }
    pvVar8 = (void *)(*(int *)((longlong)plVar5 + 0x44) + param_1);
    if (pvVar8 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar8);
    if (param_4 == pvVar8) goto LAB_1420c9bca;
    if ((*(uint *)(plVar5 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar8,(longlong)*(int *)((longlong)plVar5 + 0x34));
      *param_3 = (longlong)plVar5;
      return 1;
    }
  }
  else {
    lVar7 = FUN_14171c5d0();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FNULLSceneInterface::SetFXSystem(param_2,plVar5);
      uVar4 = FUN_1420e6f70(param_1,plVar5,param_4);
      return uVar4;
    }
    lVar7 = UProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
    uVar4 = FCachedPropertyPath::GetLastSegment(param_2);
    iVar3 = IStreamingManager::GetNumWantingResources(uVar4);
    plVar5 = (longlong *)FUniqueNetIdString::GetBytes(uVar4);
    lVar7 = plVar5[2];
    lVar6 = UStrProperty::GetPrivateStaticClass();
    if (lVar7 != lVar6) {
      return 0;
    }
    if (iVar3 == -1) {
      iVar3 = 0;
    }
    if (*(int *)((longlong)plVar5 + 0x34) != 0x10) {
      return 0;
    }
    if ((int)plVar5[6] <= iVar3) {
      return 0;
    }
    pvVar8 = (void *)((longlong)(iVar3 << 4) + *(int *)((longlong)plVar5 + 0x44) + param_1);
    if (pvVar8 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar8);
    if (param_4 == pvVar8) goto LAB_1420c9bca;
    if ((*(uint *)(plVar5 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar8,(longlong)*(int *)((longlong)plVar5 + 0x34));
      *param_3 = (longlong)plVar5;
      return 1;
    }
  }
  (**(code **)(*plVar5 + 0x2e8))(plVar5,param_4,pvVar8,1);
LAB_1420c9bca:
  *param_3 = (longlong)plVar5;
  return 1;
}



// FUNCTION 1420c9d10 FUN_1420c9d10 body=771 status=ok
// SIG undefined FUN_1420c9d10(void)

undefined8 FUN_1420c9d10(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  void *pvVar8;
  longlong *plVar9;
  
  uVar4 = FCachedPropertyPath::GetLastSegment(param_2);
  iVar3 = IStreamingManager::GetNumWantingResources(uVar4);
  plVar5 = (longlong *)FUniqueNetIdString::GetBytes(uVar4);
  if (plVar5 == (longlong *)0x0) {
    return 0;
  }
  lVar6 = UArrayProperty::GetPrivateStaticClass();
  lVar7 = plVar5[2];
  if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    if (iVar3 != -1) {
      plVar9 = (longlong *)(*(int *)((longlong)plVar5 + 0x44) + param_1);
      iVar1 = *(int *)(plVar5[0xe] + 0x34);
      if ((iVar3 < 0) || ((int)plVar9[1] <= iVar3)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((((bVar2) &&
           (lVar7 = *(longlong *)(plVar5[0xe] + 0x10), lVar6 = UStrProperty::GetPrivateStaticClass()
           , lVar7 == lVar6)) && (*(int *)(plVar5[0xe] + 0x34) == 0x10)) &&
         (((int)plVar9[1] != 0 &&
          (pvVar8 = (void *)((longlong)(iVar1 * iVar3) + *plVar9), pvVar8 != (void *)0x0)))) {
        FStringTable::SetOwnerAsset(param_2,pvVar8);
        plVar9 = (longlong *)plVar5[0xe];
        if (param_4 != pvVar8) {
          if ((*(uint *)(plVar9 + 7) >> 0x1e & 1) != 0) {
            _guard_xfg_dispatch_icall_nop
                      (param_4,pvVar8,(longlong)*(int *)((longlong)plVar9 + 0x34));
            *param_3 = plVar5[0xe];
            return 1;
          }
          (**(code **)(*plVar9 + 0x2e8))(plVar9,param_4,pvVar8,1);
        }
        *param_3 = plVar5[0xe];
        return 1;
      }
      return 0;
    }
    lVar6 = UStrProperty::GetPrivateStaticClass();
    if (lVar7 != lVar6) {
      return 0;
    }
    if (*(int *)((longlong)plVar5 + 0x34) != 0x10) {
      return 0;
    }
    pvVar8 = (void *)(*(int *)((longlong)plVar5 + 0x44) + param_1);
    if (pvVar8 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar8);
    if (param_4 == pvVar8) goto LAB_1420c9ed6;
    if ((*(uint *)(plVar5 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar8,(longlong)*(int *)((longlong)plVar5 + 0x34));
      *param_3 = (longlong)plVar5;
      return 1;
    }
  }
  else {
    lVar7 = FUN_14171c5d0();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FNULLSceneInterface::SetFXSystem(param_2,plVar5);
      return 0;
    }
    lVar7 = UProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
    uVar4 = FCachedPropertyPath::GetLastSegment(param_2);
    iVar3 = IStreamingManager::GetNumWantingResources(uVar4);
    plVar5 = (longlong *)FUniqueNetIdString::GetBytes(uVar4);
    lVar7 = plVar5[2];
    lVar6 = UStrProperty::GetPrivateStaticClass();
    if (lVar7 != lVar6) {
      return 0;
    }
    if (iVar3 == -1) {
      iVar3 = 0;
    }
    if (*(int *)((longlong)plVar5 + 0x34) != 0x10) {
      return 0;
    }
    if ((int)plVar5[6] <= iVar3) {
      return 0;
    }
    pvVar8 = (void *)((longlong)(iVar3 << 4) + *(int *)((longlong)plVar5 + 0x44) + param_1);
    if (pvVar8 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar8);
    if (param_4 == pvVar8) goto LAB_1420c9ed6;
    if ((*(uint *)(plVar5 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar8,(longlong)*(int *)((longlong)plVar5 + 0x34));
      *param_3 = (longlong)plVar5;
      return 1;
    }
  }
  (**(code **)(*plVar5 + 0x2e8))(plVar5,param_4,pvVar8,1);
LAB_1420c9ed6:
  *param_3 = (longlong)plVar5;
  return 1;
}



// FUNCTION 1420ca020 FUN_1420ca020 body=791 status=ok
// SIG undefined FUN_1420ca020(void)

undefined8 FUN_1420ca020(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  void *pvVar8;
  longlong *plVar9;
  
  uVar4 = FCachedPropertyPath::GetLastSegment(param_2);
  iVar3 = IStreamingManager::GetNumWantingResources(uVar4);
  plVar5 = (longlong *)FUniqueNetIdString::GetBytes(uVar4);
  if (plVar5 == (longlong *)0x0) {
    return 0;
  }
  lVar6 = UArrayProperty::GetPrivateStaticClass();
  lVar7 = plVar5[2];
  if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    if (iVar3 != -1) {
      plVar9 = (longlong *)(*(int *)((longlong)plVar5 + 0x44) + param_1);
      iVar1 = *(int *)(plVar5[0xe] + 0x34);
      if ((iVar3 < 0) || ((int)plVar9[1] <= iVar3)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((((bVar2) &&
           (lVar7 = *(longlong *)(plVar5[0xe] + 0x10),
           lVar6 = UTextProperty::GetPrivateStaticClass(), lVar7 == lVar6)) &&
          (*(int *)(plVar5[0xe] + 0x34) == 0x18)) &&
         (((int)plVar9[1] != 0 &&
          (pvVar8 = (void *)((longlong)(iVar1 * iVar3) + *plVar9), pvVar8 != (void *)0x0)))) {
        FStringTable::SetOwnerAsset(param_2,pvVar8);
        plVar9 = (longlong *)plVar5[0xe];
        if (param_4 != pvVar8) {
          if ((*(uint *)(plVar9 + 7) >> 0x1e & 1) != 0) {
            _guard_xfg_dispatch_icall_nop
                      (param_4,pvVar8,(longlong)*(int *)((longlong)plVar9 + 0x34));
            *param_3 = plVar5[0xe];
            return 1;
          }
          (**(code **)(*plVar9 + 0x2e8))(plVar9,param_4,pvVar8,1);
        }
        *param_3 = plVar5[0xe];
        return 1;
      }
      return 0;
    }
    lVar6 = UTextProperty::GetPrivateStaticClass();
    if (lVar7 != lVar6) {
      return 0;
    }
    if (*(int *)((longlong)plVar5 + 0x34) != 0x18) {
      return 0;
    }
    pvVar8 = (void *)(*(int *)((longlong)plVar5 + 0x44) + param_1);
    if (pvVar8 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar8);
    if (param_4 == pvVar8) goto LAB_1420ca1ea;
    if ((*(uint *)(plVar5 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar8,(longlong)*(int *)((longlong)plVar5 + 0x34));
      *param_3 = (longlong)plVar5;
      return 1;
    }
  }
  else {
    lVar7 = FUN_14171c5d0();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FNULLSceneInterface::SetFXSystem(param_2,plVar5);
      uVar4 = FUN_1420e7040(param_1,plVar5,param_4);
      return uVar4;
    }
    lVar7 = UProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
    uVar4 = FCachedPropertyPath::GetLastSegment(param_2);
    iVar3 = IStreamingManager::GetNumWantingResources(uVar4);
    plVar5 = (longlong *)FUniqueNetIdString::GetBytes(uVar4);
    lVar7 = plVar5[2];
    lVar6 = UTextProperty::GetPrivateStaticClass();
    if (lVar7 != lVar6) {
      return 0;
    }
    if (iVar3 == -1) {
      iVar3 = 0;
    }
    if (*(int *)((longlong)plVar5 + 0x34) != 0x18) {
      return 0;
    }
    if ((int)plVar5[6] <= iVar3) {
      return 0;
    }
    pvVar8 = (void *)((longlong)(iVar3 * 0x18) + param_1 + *(int *)((longlong)plVar5 + 0x44));
    if (pvVar8 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar8);
    if (param_4 == pvVar8) goto LAB_1420ca1ea;
    if ((*(uint *)(plVar5 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar8,(longlong)*(int *)((longlong)plVar5 + 0x34));
      *param_3 = (longlong)plVar5;
      return 1;
    }
  }
  (**(code **)(*plVar5 + 0x2e8))(plVar5,param_4,pvVar8,1);
LAB_1420ca1ea:
  *param_3 = (longlong)plVar5;
  return 1;
}



// FUNCTION 1420ca340 FUN_1420ca340 body=781 status=ok
// SIG undefined FUN_1420ca340(void)

undefined8 FUN_1420ca340(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  void *pvVar8;
  longlong *plVar9;
  
  uVar4 = FCachedPropertyPath::GetLastSegment(param_2);
  iVar3 = IStreamingManager::GetNumWantingResources(uVar4);
  plVar5 = (longlong *)FUniqueNetIdString::GetBytes(uVar4);
  if (plVar5 == (longlong *)0x0) {
    return 0;
  }
  lVar6 = UArrayProperty::GetPrivateStaticClass();
  lVar7 = plVar5[2];
  if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    if (iVar3 != -1) {
      plVar9 = (longlong *)(*(int *)((longlong)plVar5 + 0x44) + param_1);
      iVar1 = *(int *)(plVar5[0xe] + 0x34);
      if ((iVar3 < 0) || ((int)plVar9[1] <= iVar3)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((((bVar2) &&
           (lVar7 = *(longlong *)(plVar5[0xe] + 0x10),
           lVar6 = UTextProperty::GetPrivateStaticClass(), lVar7 == lVar6)) &&
          (*(int *)(plVar5[0xe] + 0x34) == 0x18)) &&
         (((int)plVar9[1] != 0 &&
          (pvVar8 = (void *)((longlong)(iVar1 * iVar3) + *plVar9), pvVar8 != (void *)0x0)))) {
        FStringTable::SetOwnerAsset(param_2,pvVar8);
        plVar9 = (longlong *)plVar5[0xe];
        if (param_4 != pvVar8) {
          if ((*(uint *)(plVar9 + 7) >> 0x1e & 1) != 0) {
            _guard_xfg_dispatch_icall_nop
                      (param_4,pvVar8,(longlong)*(int *)((longlong)plVar9 + 0x34));
            *param_3 = plVar5[0xe];
            return 1;
          }
          (**(code **)(*plVar9 + 0x2e8))(plVar9,param_4,pvVar8,1);
        }
        *param_3 = plVar5[0xe];
        return 1;
      }
      return 0;
    }
    lVar6 = UTextProperty::GetPrivateStaticClass();
    if (lVar7 != lVar6) {
      return 0;
    }
    if (*(int *)((longlong)plVar5 + 0x34) != 0x18) {
      return 0;
    }
    pvVar8 = (void *)(*(int *)((longlong)plVar5 + 0x44) + param_1);
    if (pvVar8 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar8);
    if (param_4 == pvVar8) goto LAB_1420ca507;
    if ((*(uint *)(plVar5 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar8,(longlong)*(int *)((longlong)plVar5 + 0x34));
      *param_3 = (longlong)plVar5;
      return 1;
    }
  }
  else {
    lVar7 = FUN_14171c5d0();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FNULLSceneInterface::SetFXSystem(param_2,plVar5);
      return 0;
    }
    lVar7 = UProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return 0;
    }
    uVar4 = FCachedPropertyPath::GetLastSegment(param_2);
    iVar3 = IStreamingManager::GetNumWantingResources(uVar4);
    plVar5 = (longlong *)FUniqueNetIdString::GetBytes(uVar4);
    lVar7 = plVar5[2];
    lVar6 = UTextProperty::GetPrivateStaticClass();
    if (lVar7 != lVar6) {
      return 0;
    }
    if (iVar3 == -1) {
      iVar3 = 0;
    }
    if (*(int *)((longlong)plVar5 + 0x34) != 0x18) {
      return 0;
    }
    if ((int)plVar5[6] <= iVar3) {
      return 0;
    }
    pvVar8 = (void *)((longlong)(iVar3 * 0x18) + param_1 + *(int *)((longlong)plVar5 + 0x44));
    if (pvVar8 == (void *)0x0) {
      return 0;
    }
    FStringTable::SetOwnerAsset(param_2,pvVar8);
    if (param_4 == pvVar8) goto LAB_1420ca507;
    if ((*(uint *)(plVar5 + 7) >> 0x1e & 1) != 0) {
      _guard_xfg_dispatch_icall_nop(param_4,pvVar8,(longlong)*(int *)((longlong)plVar5 + 0x34));
      *param_3 = (longlong)plVar5;
      return 1;
    }
  }
  (**(code **)(*plVar5 + 0x2e8))(plVar5,param_4,pvVar8,1);
LAB_1420ca507:
  *param_3 = (longlong)plVar5;
  return 1;
}



// FUNCTION 1420ca650 FUN_1420ca650 body=384 status=ok
// SIG undefined FUN_1420ca650(void)

undefined8 FUN_1420ca650(WriteBytesMem *param_1,undefined8 param_2,uchar *param_3,longlong *param_4)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  uchar *puVar7;
  longlong lVar8;
  undefined **local_28;
  uchar *local_20;
  longlong *local_18;
  
  cVar3 = FCachedPropertyPath::IsFullyResolved();
  if (cVar3 == '\0') {
    local_28 = &PTR_FUN_144fb2648;
    local_20 = param_3;
    local_18 = param_4;
    uVar6 = PropertyPathHelpersInternal::ResolvePropertyPath(param_2,param_1,&local_28);
    return uVar6;
  }
  lVar5 = FUniqueNetIdString::GetBytes(param_1);
  if (lVar5 != 0) {
    uVar6 = FUniqueNetIdString::GetBytes();
    uVar6 = FUN_1420e7110(param_2,uVar6,param_3);
    return uVar6;
  }
  puVar7 = AK::WriteBytesMem::Bytes(param_1);
  if (puVar7 == (uchar *)0x0) {
    return 0;
  }
  uVar6 = FCachedPropertyPath::GetLastSegment(param_1);
  lVar5 = FUniqueNetIdString::GetBytes(uVar6);
  *param_4 = lVar5;
  if (lVar5 != 0) {
    lVar8 = UArrayProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (iVar4 = IStreamingManager::GetNumWantingResources(uVar6), iVar4 != -1)) {
      puVar7 = AK::WriteBytesMem::Bytes(param_1);
      plVar1 = *(longlong **)(lVar5 + 0x70);
      if (param_3 == puVar7) {
        return 1;
      }
      if ((*(uint *)(plVar1 + 7) >> 0x1e & 1) == 0) {
        (**(code **)(*plVar1 + 0x2e8))(plVar1,param_3,puVar7,1);
        return 1;
      }
      _guard_xfg_dispatch_icall_nop(param_3,puVar7,(longlong)*(int *)((longlong)plVar1 + 0x34));
      return 1;
    }
  }
  lVar5 = *param_4;
  puVar7 = AK::WriteBytesMem::Bytes(param_1);
  *param_3 = (*(byte *)(lVar5 + 0x73) & puVar7[*(byte *)(lVar5 + 0x71)]) != 0;
  return 1;
}



// FUNCTION 1420ca7d0 FUN_1420ca7d0 body=757 status=ok
// SIG undefined FUN_1420ca7d0(void)

undefined8 FUN_1420ca7d0(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  void *pvVar9;
  longlong *plVar10;
  
  uVar4 = FCachedPropertyPath::GetLastSegment(param_2);
  iVar3 = IStreamingManager::GetNumWantingResources(uVar4);
  plVar5 = (longlong *)FUniqueNetIdString::GetBytes(uVar4);
  if (plVar5 != (longlong *)0x0) {
    lVar6 = UArrayProperty::GetPrivateStaticClass();
    lVar7 = plVar5[2];
    if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (iVar3 == -1) {
        lVar6 = UBoolProperty::GetPrivateStaticClass();
        if (((lVar7 == lVar6) && (*(int *)((longlong)plVar5 + 0x34) == 1)) &&
           (pvVar9 = (void *)(*(int *)((longlong)plVar5 + 0x44) + param_1), pvVar9 != (void *)0x0))
        {
          FStringTable::SetOwnerAsset(param_2,pvVar9);
          if (param_4 != pvVar9) {
            if ((*(uint *)(plVar5 + 7) >> 0x1e & 1) != 0) {
              _guard_xfg_dispatch_icall_nop
                        (param_4,pvVar9,(longlong)*(int *)((longlong)plVar5 + 0x34));
              *param_3 = (longlong)plVar5;
              return 1;
            }
            (**(code **)(*plVar5 + 0x2e8))(plVar5,param_4,pvVar9,1);
          }
          *param_3 = (longlong)plVar5;
          return 1;
        }
      }
      else {
        plVar10 = (longlong *)(*(int *)((longlong)plVar5 + 0x44) + param_1);
        iVar1 = *(int *)(plVar5[0xe] + 0x34);
        if ((iVar3 < 0) || ((int)plVar10[1] <= iVar3)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((((bVar2) &&
             (lVar7 = *(longlong *)(plVar5[0xe] + 0x10),
             lVar6 = UBoolProperty::GetPrivateStaticClass(), lVar7 == lVar6)) &&
            (*(int *)(plVar5[0xe] + 0x34) == 1)) &&
           (((int)plVar10[1] != 0 &&
            (pvVar9 = (void *)((longlong)(iVar1 * iVar3) + *plVar10), pvVar9 != (void *)0x0)))) {
          FStringTable::SetOwnerAsset(param_2,pvVar9);
          plVar10 = (longlong *)plVar5[0xe];
          if (param_4 != pvVar9) {
            if ((*(uint *)(plVar10 + 7) >> 0x1e & 1) != 0) {
              _guard_xfg_dispatch_icall_nop
                        (param_4,pvVar9,(longlong)*(int *)((longlong)plVar10 + 0x34));
              *param_3 = plVar5[0xe];
              return 1;
            }
            (**(code **)(*plVar10 + 0x2e8))(plVar10,param_4,pvVar9,1);
          }
          *param_3 = plVar5[0xe];
          return 1;
        }
      }
    }
    else {
      lVar7 = FUN_14171c5d0();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FNULLSceneInterface::SetFXSystem(param_2,plVar5);
        uVar4 = FUN_1420e7110(param_1,plVar5,param_4);
        return uVar4;
      }
      lVar7 = UProperty::GetPrivateStaticClass();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar4 = FCachedPropertyPath::GetLastSegment(param_2);
        iVar3 = IStreamingManager::GetNumWantingResources(uVar4);
        lVar6 = FUniqueNetIdString::GetBytes(uVar4);
        lVar7 = *(longlong *)(lVar6 + 0x10);
        lVar8 = UBoolProperty::GetPrivateStaticClass();
        if (lVar7 == lVar8) {
          if (iVar3 == -1) {
            iVar3 = 0;
          }
          if (((*(int *)(lVar6 + 0x34) == 1) && (iVar3 < *(int *)(lVar6 + 0x30))) &&
             (lVar7 = (longlong)iVar3 + *(int *)(lVar6 + 0x44) + param_1, lVar7 != 0)) {
            FStringTable::SetOwnerAsset(param_2,lVar7);
            lVar8 = FUniqueNetIdString::GetBytes(uVar4);
            *(bool *)param_4 =
                 (*(byte *)(lVar8 + 0x73) & *(byte *)((ulonglong)*(byte *)(lVar8 + 0x71) + lVar7))
                 != 0;
            *param_3 = lVar6;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1420caad0 FUN_1420caad0 body=751 status=ok
// SIG undefined FUN_1420caad0(void)

undefined8 FUN_1420caad0(longlong param_1,undefined8 param_2,longlong *param_3,void *param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  void *pvVar9;
  longlong *plVar10;
  
  uVar4 = FCachedPropertyPath::GetLastSegment(param_2);
  iVar3 = IStreamingManager::GetNumWantingResources(uVar4);
  plVar5 = (longlong *)FUniqueNetIdString::GetBytes(uVar4);
  if (plVar5 != (longlong *)0x0) {
    lVar6 = UArrayProperty::GetPrivateStaticClass();
    lVar7 = plVar5[2];
    if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (iVar3 == -1) {
        lVar6 = UBoolProperty::GetPrivateStaticClass();
        if (((lVar7 == lVar6) && (*(int *)((longlong)plVar5 + 0x34) == 1)) &&
           (pvVar9 = (void *)(*(int *)((longlong)plVar5 + 0x44) + param_1), pvVar9 != (void *)0x0))
        {
          FStringTable::SetOwnerAsset(param_2,pvVar9);
          if (param_4 != pvVar9) {
            if ((*(uint *)(plVar5 + 7) >> 0x1e & 1) != 0) {
              _guard_xfg_dispatch_icall_nop
                        (param_4,pvVar9,(longlong)*(int *)((longlong)plVar5 + 0x34));
              *param_3 = (longlong)plVar5;
              return 1;
            }
            (**(code **)(*plVar5 + 0x2e8))(plVar5,param_4,pvVar9,1);
          }
          *param_3 = (longlong)plVar5;
          return 1;
        }
      }
      else {
        plVar10 = (longlong *)(*(int *)((longlong)plVar5 + 0x44) + param_1);
        iVar1 = *(int *)(plVar5[0xe] + 0x34);
        if ((iVar3 < 0) || ((int)plVar10[1] <= iVar3)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((((bVar2) &&
             (lVar7 = *(longlong *)(plVar5[0xe] + 0x10),
             lVar6 = UBoolProperty::GetPrivateStaticClass(), lVar7 == lVar6)) &&
            (*(int *)(plVar5[0xe] + 0x34) == 1)) &&
           (((int)plVar10[1] != 0 &&
            (pvVar9 = (void *)((longlong)(iVar1 * iVar3) + *plVar10), pvVar9 != (void *)0x0)))) {
          FStringTable::SetOwnerAsset(param_2,pvVar9);
          plVar10 = (longlong *)plVar5[0xe];
          if (param_4 != pvVar9) {
            if ((*(uint *)(plVar10 + 7) >> 0x1e & 1) != 0) {
              _guard_xfg_dispatch_icall_nop
                        (param_4,pvVar9,(longlong)*(int *)((longlong)plVar10 + 0x34));
              *param_3 = plVar5[0xe];
              return 1;
            }
            (**(code **)(*plVar10 + 0x2e8))(plVar10,param_4,pvVar9,1);
          }
          *param_3 = plVar5[0xe];
          return 1;
        }
      }
    }
    else {
      lVar7 = FUN_14171c5d0();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        FNULLSceneInterface::SetFXSystem(param_2,plVar5);
      }
      else {
        lVar7 = UProperty::GetPrivateStaticClass();
        if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
            lVar7 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          uVar4 = FCachedPropertyPath::GetLastSegment(param_2);
          iVar3 = IStreamingManager::GetNumWantingResources(uVar4);
          lVar6 = FUniqueNetIdString::GetBytes(uVar4);
          lVar7 = *(longlong *)(lVar6 + 0x10);
          lVar8 = UBoolProperty::GetPrivateStaticClass();
          if (lVar7 == lVar8) {
            if (iVar3 == -1) {
              iVar3 = 0;
            }
            if (((*(int *)(lVar6 + 0x34) == 1) && (iVar3 < *(int *)(lVar6 + 0x30))) &&
               (lVar7 = (longlong)iVar3 + *(int *)(lVar6 + 0x44) + param_1, lVar7 != 0)) {
              FStringTable::SetOwnerAsset(param_2,lVar7);
              lVar8 = FUniqueNetIdString::GetBytes(uVar4);
              *(bool *)param_4 =
                   (*(byte *)(lVar8 + 0x73) & *(byte *)((ulonglong)*(byte *)(lVar8 + 0x71) + lVar7))
                   != 0;
              *param_3 = lVar6;
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1420cadc0 IsA<UUserWidget> body=69 status=ok
// SIG undefined IsA<UUserWidget>(void)

ulonglong UObjectBaseUtility::IsA<UUserWidget>(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UUserWidget::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1420cae10 IsConcreteTypeCompatibleWithReflectedType<unsigned_char> body=160 status=ok
// SIG undefined IsConcreteTypeCompatibleWithReflectedType<unsigned_char>(void)

bool IsConcreteTypeCompatibleWithReflectedType<unsigned_char>(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    lVar2 = UEnumProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      param_1 = *(longlong *)(param_1 + 0x70);
    }
    else {
      lVar2 = UBoolProperty::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return *(char *)(param_1 + 0x73) != -1;
      }
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = UByteProperty::GetPrivateStaticClass();
  return lVar2 == lVar3;
}



// FUNCTION 1420caeb0 IsConcreteTypeCompatibleWithReflectedType<int> body=93 status=ok
// SIG undefined IsConcreteTypeCompatibleWithReflectedType<int>(void)

bool IsConcreteTypeCompatibleWithReflectedType<int>(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    lVar2 = UEnumProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      param_1 = *(longlong *)(param_1 + 0x70);
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = UIntProperty::GetPrivateStaticClass();
  return lVar2 == lVar3;
}



// FUNCTION 1420caf10 IsConcreteTypeCompatibleWithReflectedType<UObject_*> body=84 status=ok
// SIG undefined IsConcreteTypeCompatibleWithReflectedType<UObject_*>(void)

ulonglong IsConcreteTypeCompatibleWithReflectedType<UObject_*>(longlong param_1)

{
  int iVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_1 != 0) {
    lVar2 = UObjectProperty::GetPrivateStaticClass();
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
    if ((char)in_RAX != '\0') {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1420caf70 FUN_1420caf70 body=181 status=ok
// SIG undefined FUN_1420caf70(void)

bool FUN_1420caf70(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ae8780) {
    _Init_thread_header(&DAT_146ae8780);
    if (DAT_146ae8780 == -1) {
      DAT_146ae8778 = FUN_14171a470();
      _Init_thread_footer(&DAT_146ae8780);
    }
  }
  if (param_1 != 0) {
    lVar2 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return *(longlong *)(param_1 + 0x70) == DAT_146ae8778;
    }
  }
  return false;
}



// FUNCTION 1420cb030 IsConcreteTypeCompatibleWithReflectedType<FSlateBrush> body=94 status=ok
// SIG undefined IsConcreteTypeCompatibleWithReflectedType<FSlateBrush>(void)

bool IsConcreteTypeCompatibleWithReflectedType<FSlateBrush>(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = FSlateBrush::StaticStruct();
      return *(longlong *)(param_1 + 0x70) == lVar2;
    }
  }
  return false;
}



// FUNCTION 1420cb090 IsConcreteTypeCompatibleWithReflectedType<FSlateColor> body=94 status=ok
// SIG undefined IsConcreteTypeCompatibleWithReflectedType<FSlateColor>(void)

bool IsConcreteTypeCompatibleWithReflectedType<FSlateColor>(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = FSlateColor::StaticStruct();
      return *(longlong *)(param_1 + 0x70) == lVar2;
    }
  }
  return false;
}



// FUNCTION 1420cb0f0 FUN_1420cb0f0 body=267 status=ok
// SIG undefined FUN_1420cb0f0(void)

undefined8 * FUN_1420cb0f0(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x408);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144fb2408;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x3f8);
      SComboButton::SComboButton(_Dst);
      *_Dst = &PTR_FUN_144fa4fd8;
      puVar1[0x43] = &PTR_FUN_144d695d0;
      puVar1[0x6d] = 0;
      puVar1[0x6e] = 0;
      *(undefined4 *)(puVar1 + 0x6f) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x37c) = 0;
      puVar1[0x70] = 0;
      puVar1[0x71] = 0;
      *(undefined4 *)(puVar1 + 0x72) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x394) = 0;
      puVar1[0x74] = 0;
      *(undefined4 *)(puVar1 + 0x75) = 0;
      puVar1[0x77] = 0;
      puVar1[0x78] = 0;
      puVar1[0x79] = 0;
      puVar1[0x7a] = 0;
      puVar1[0x7b] = 0;
      *(undefined4 *)(puVar1 + 0x7c) = 0;
      puVar1[0x7d] = 0;
      *(undefined4 *)(puVar1 + 0x7e) = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420cb200 FUN_1420cb200 body=127 status=ok
// SIG undefined FUN_1420cb200(void)

undefined8 * FUN_1420cb200(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x450);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_144044b48;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x440);
      FUN_1420ccdf0(_Dst);
      *_Dst = &PTR_StartProfileThreadUsage_144fb16c0;
      puVar1[3] = &PTR_LAB_144fb20b0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420cb280 FUN_1420cb280 body=239 status=ok
// SIG undefined FUN_1420cb280(void)

undefined8 * FUN_1420cb280(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x358);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144fb2738;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x348);
      FUN_1417f4470(_Dst);
      FGCObject::FGCObject(puVar1 + 0x60);
      *_Dst = &PTR_FUN_144fa2c10;
      puVar1[0x60] = &PTR_LAB_144fa2e38;
      puVar1[99] = &PTR_LAB_144fa2e50;
      puVar1[100] = 0;
      *(undefined4 *)(puVar1 + 0x65) = 0;
      puVar1[0x66] = 0;
      *(undefined4 *)(puVar1 + 0x67) = 0;
      puVar1[0x68] = 0;
      puVar1[0x69] = 0;
      *(undefined4 *)(puVar1 + 0x6a) = 0xffffffff;
      *(undefined2 *)((longlong)puVar1 + 0x354) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x356) = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420cb370 FUN_1420cb370 body=154 status=ok
// SIG undefined FUN_1420cb370(void)

undefined8 * FUN_1420cb370(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x640);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2 + 2;
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = &PTR_FUN_144fb29b8;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1420ccc10(puVar1,1);
      *(undefined1 *)(puVar2 + 199) = 1;
      *puVar1 = &PTR_FUN_144facf50;
      puVar2[0x60] = &PTR_LAB_144fad1c8;
      puVar2[0x86] = &PTR_LAB_144fad1e8;
      puVar2[0x88] = &PTR_IsPromotedBuild_144fa4f28;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420cb410 FUN_1420cb410 body=308 status=ok
// SIG undefined FUN_1420cb410(void)

undefined8 * FUN_1420cb410(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x6e8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2 + 2;
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = &PTR_LAB_144fb29c8;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1420ccc10(puVar1,2);
      *puVar1 = &PTR__scalar_deleting_destructor__144fad560;
      puVar2[0x60] = &PTR_LAB_144fad7f0;
      puVar2[0x86] = &PTR_LAB_144fad810;
      puVar2[0x88] = &PTR_IsPromotedBuild_144fad828;
      puVar2[199] = 0;
      *(undefined4 *)(puVar2 + 200) = 0;
      puVar2[0xc9] = 0;
      *(undefined4 *)(puVar2 + 0xca) = 0;
      puVar2[0xcb] = 0;
      puVar2[0xcc] = 0;
      puVar2[0xcd] = 0;
      puVar2[0xd0] = 0;
      puVar2[0xd1] = 0;
      *(undefined4 *)(puVar2 + 0xd2) = 0xffffffff;
      *(undefined4 *)((longlong)puVar2 + 0x694) = 0;
      puVar2[0xd4] = 0;
      *(undefined4 *)(puVar2 + 0xd5) = 0;
      puVar2[0xd6] = 0;
      puVar2[0xd7] = 0;
      puVar2[0xd8] = 0;
      puVar2[0xd9] = 0;
      puVar2[0xda] = 0;
      *(undefined4 *)(puVar2 + 0xdb) = 0;
      *(undefined2 *)(puVar2 + 0xdc) = 1;
      puVar2[0xb9] = puVar2 + 0xd8;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420cb550 NewIntrusiveReferenceController<SAutoRefreshViewport> body=201 status=ok
// SIG undefined NewIntrusiveReferenceController<SAutoRefreshViewport>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SAutoRefreshViewport>(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uStack_34;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  puVar2 = (undefined8 *)operator_new(0x3d8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2 + 2;
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = &PTR_LAB_144fb2488;
    if (puVar1 != (undefined8 *)0x0) {
      SViewport::SViewport(puVar1);
      *puVar1 = &PTR_FUN_144fae980;
      local_28 = 0xc2870000c2200000;
      uStack_20 = 0x3f80000000000000;
      puVar2[0x6e] = 0;
      puVar2[0x6f] = 0;
      puVar2[0x70] = 0;
      puVar2[0x71] = 0;
      local_18 = CONCAT44(uStack_34 & 0xffffffd6 | 0x16,0x40490fdb);
      FUN_1426f5a00(puVar2 + 0x72,&local_28);
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420cb620 NewIntrusiveReferenceController<SBackgroundBlur> body=172 status=ok
// SIG undefined NewIntrusiveReferenceController<SBackgroundBlur>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SBackgroundBlur>(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x348);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_DestroyObject_144fb23e8;
    if (_Dst != (undefined8 *)0x0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x338);
      FUN_1417f4470(_Dst);
      *_Dst = &PTR__scalar_deleting_destructor__144fa31d8;
      *(undefined4 *)(puVar1 + 0x61) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x30c) = 0;
      puVar1[0x62] = 0;
      *(undefined4 *)(puVar1 + 99) = 0;
      *(undefined1 *)((longlong)puVar1 + 0x324) = 0;
      *(undefined1 *)(puVar1 + 0x65) = 0;
      puVar1[0x66] = 0;
      *(undefined4 *)(puVar1 + 0x67) = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420cb6d0 FUN_1420cb6d0 body=348 status=ok
// SIG undefined FUN_1420cb6d0(void)

undefined8 * FUN_1420cb6d0(void)

{
  undefined8 *_Dst;
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x3f8);
  if (puVar3 != (undefined8 *)0x0) {
    _Dst = puVar3 + 2;
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &PTR_LAB_144fb2428;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,1000);
      FUN_1417f4470(_Dst);
      *_Dst = &PTR_FUN_144fa7690;
      puVar3[0x61] = DAT_1469eae28;
      puVar3[0x62] = DAT_1469eae30;
      lVar2 = DAT_1469eae38;
      puVar3[99] = DAT_1469eae38;
      if (lVar2 != 0) {
        LOCK();
        piVar1 = (int *)(lVar2 + 8);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      *(uint *)(puVar3 + 100) = *(uint *)(puVar3 + 100) & 0xfffffff0;
      *(undefined1 *)(puVar3 + 0x65) = 0;
      puVar3[0x66] = 0;
      *(undefined4 *)(puVar3 + 0x67) = 0;
      puVar3[0x68] = 0;
      puVar3[0x69] = 0;
      *(undefined1 *)(puVar3 + 0x6a) = 0;
      puVar3[0x6b] = 0;
      *(undefined4 *)(puVar3 + 0x6c) = 0;
      FText::FText(puVar3 + 0x6d);
      FText::FText(puVar3 + 0x70);
      puVar3[0x74] = 0;
      puVar3[0x75] = 0;
      puVar3[0x76] = 0;
      *(undefined4 *)(puVar3 + 0x77) = 0;
      puVar3[0x78] = 0;
      *(undefined4 *)(puVar3 + 0x79) = 0;
      puVar3[0x7a] = 0;
      puVar3[0x7b] = 0;
      puVar3[0x7c] = 0;
      puVar3[0x7d] = 0;
    }
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420cb830 FUN_1420cb830 body=152 status=ok
// SIG undefined FUN_1420cb830(void)

undefined8 * FUN_1420cb830(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x318);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144fb2498;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x308);
      FUN_1417f4470(_Dst);
      FGCObject::FGCObject(puVar1 + 0x60);
      *_Dst = &PTR_FUN_144fa29f0;
      puVar1[0x60] = &PTR_LAB_144fa2bf8;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420cb8d0 FUN_1420cb8d0 body=260 status=ok
// SIG undefined FUN_1420cb8d0(void)

undefined8 * FUN_1420cb8d0(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x2e0);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144fb2448;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x2d0);
      FUN_1417f46d0(_Dst);
      *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) & 0xf7;
      *_Dst = &PTR__scalar_deleting_destructor__144fa9608;
      *(undefined1 *)((longlong)puVar1 + 0x224) = 0;
      *(undefined1 *)(puVar1 + 0x45) = 0;
      puVar1[0x46] = 0;
      *(undefined4 *)(puVar1 + 0x47) = 0;
      puVar1[0x4c] = 0x3f800000;
      *(undefined4 *)(puVar1 + 0x4d) = 0x3f800000;
      *(undefined4 *)((longlong)puVar1 + 0x26c) = 0x3f800000;
      *(undefined1 *)(puVar1 + 0x4e) = 0;
      puVar1[0x4f] = 0;
      puVar1[0x50] = 0;
      *(undefined1 *)(puVar1 + 0x51) = 0;
      puVar1[0x52] = 0;
      *(undefined4 *)(puVar1 + 0x53) = 0;
      *(undefined1 *)(puVar1 + 0x55) = 0;
      puVar1[0x56] = 0;
      *(undefined4 *)(puVar1 + 0x57) = 0;
      puVar1[0x59] = 0;
      puVar1[0x5a] = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420cb9e0 FUN_1420cb9e0 body=116 status=ok
// SIG undefined FUN_1420cb9e0(void)

undefined8 * FUN_1420cb9e0(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x300);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144d61048;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x2f0);
      FUN_1417f4470(_Dst);
      *_Dst = &PTR_FUN_144d4ee28;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420cba60 FUN_1420cba60 body=228 status=ok
// SIG undefined FUN_1420cba60(void)

undefined8 * FUN_1420cba60(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x3a8);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2 + 2;
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = &PTR_LAB_144fb2478;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1417f4470(puVar1);
      *puVar1 = &PTR__scalar_deleting_destructor__144d73db8;
      *(undefined4 *)(puVar2 + 0x60) = 0;
      *(undefined1 *)((longlong)puVar2 + 0x304) = 0;
      puVar2[0x61] = 0;
      *(undefined4 *)(puVar2 + 0x62) = 0;
      *(undefined4 *)(puVar2 + 99) = 0;
      *(undefined1 *)((longlong)puVar2 + 0x31c) = 0;
      puVar2[100] = 0;
      *(undefined4 *)(puVar2 + 0x65) = 0;
      *(undefined4 *)(puVar2 + 0x66) = 0;
      *(undefined1 *)((longlong)puVar2 + 0x334) = 0;
      puVar2[0x67] = 0;
      *(undefined4 *)(puVar2 + 0x68) = 0;
      *(undefined2 *)(puVar2 + 0x69) = 0;
      puVar2[0x6a] = 0;
      *(undefined4 *)(puVar2 + 0x6b) = 0;
      puVar2[0x6d] = 0;
      *(undefined1 *)((longlong)puVar2 + 0x37c) = 0;
      *(undefined1 *)(puVar2 + 0x72) = 0;
      *(byte *)(puVar2 + 5) = *(byte *)(puVar2 + 5) & 0xf9;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420cbb50 NewIntrusiveReferenceController<SWorldWidgetScreenLayer> body=205 status=ok
// SIG undefined NewIntrusiveReferenceController<SWorldWidgetScreenLayer>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SWorldWidgetScreenLayer>(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x380);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144fb24a8;
    if (_Dst != (undefined8 *)0x0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x370);
      FUN_1417f4470(_Dst);
      *_Dst = &PTR_FUN_144faf8a8;
      FLocalPlayerContext::FLocalPlayerContext(puVar1 + 0x60);
      puVar1[100] = 0;
      puVar1[0x65] = 0;
      puVar1[0x68] = 0;
      puVar1[0x69] = 0;
      *(undefined4 *)(puVar1 + 0x6a) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x354) = 0;
      puVar1[0x6c] = 0;
      *(undefined4 *)(puVar1 + 0x6d) = 0;
      puVar1[0x6e] = 0;
      puVar1[0x6f] = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1420cbc20 NewObject<USaveGame> body=149 status=ok
// SIG undefined NewObject<USaveGame>(void)

void NewObject<USaveGame>
               (undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
               undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  if (param_3 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  FUN_1417985e0(param_2,param_1,param_3,param_4,0,param_5,param_6,param_7,0);
  return;
}



// FUNCTION 1420cbcc0 PropertySizesMatch<unsigned_char> body=94 status=ok
// SIG undefined PropertySizesMatch<unsigned_char>(void)

bool PropertySizesMatch<unsigned_char>(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = UBoolProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return *(char *)(param_1 + 0x73) != -1;
    }
  }
  return *(int *)(param_1 + 0x34) == 1;
}



// FUNCTION 1420cbd20 Resolve<FWidgetTransform> body=760 status=ok
// SIG undefined Resolve<FWidgetTransform>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void MovieScene::TMaskedBlendable<float,7>::Resolve<FWidgetTransform>
               (longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  byte bVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  int *piVar9;
  uint uVar10;
  longlong lVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined1 auStack_128 [32];
  byte local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong *local_f0;
  longlong local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  uint local_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98 [4];
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  char local_78;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  uVar6 = 0;
  cVar8 = '\0';
  local_78 = '\0';
  lVar11 = 0;
  local_bc = 0;
  local_108 = 0;
  lVar14 = (longlong)&local_d8 - param_1;
  pfVar12 = (float *)(param_1 + 0x20);
  local_f0 = param_3;
  local_e8 = lVar14;
  local_e0 = param_2;
  do {
    uVar10 = 1 << (local_108 & 0x1f);
    uVar7 = uVar10 & *(uint *)(param_1 + 0x1c);
    if (uVar7 == 0) {
      if ((*(uint *)(param_1 + 0x58) & uVar10) != 0) goto LAB_1420cbecc;
LAB_1420cbdb0:
      if (uVar7 != 0) {
        *(float *)(lVar14 + -0x20 + (longlong)pfVar12) = pfVar12[-8] / *pfVar12;
        goto LAB_1420cbdc6;
      }
    }
    else {
      if (*pfVar12 != 0.0) goto LAB_1420cbdb0;
LAB_1420cbecc:
      if (*(char *)(param_1 + 0x7c) == '\0') {
        *(undefined4 *)(param_1 + 0x78) = 0;
        iVar16 = 0;
        *(undefined1 *)(param_1 + 0x7c) = 1;
        iVar17 = -1;
        local_100 = 0xffffffff;
        uVar5 = local_100;
        if (param_3[2] != 0) {
          FWeakObjectPtr::operator=(&local_f8);
          local_100 = local_f8;
          uVar5 = local_100;
          local_100._4_4_ = (int)((ulonglong)local_f8 >> 0x20);
          iVar17 = (int)local_f8;
          iVar16 = local_100._4_4_;
        }
        local_100 = uVar5;
        uVar5 = local_100;
        plVar3 = (longlong *)*param_3;
        piVar9 = (int *)plVar3[3];
        piVar1 = piVar9 + (longlong)(int)plVar3[4] * 9;
        for (; piVar9 != piVar1; piVar9 = piVar9 + 9) {
          if ((*piVar9 == iVar17) && (piVar9[1] == iVar16)) {
            iStack_a0 = piVar9[8];
            local_a8 = (undefined4)*(undefined8 *)(piVar9 + 6);
            uStack_a4 = (undefined4)((ulonglong)*(undefined8 *)(piVar9 + 6) >> 0x20);
            iVar16 = piVar9[2];
            iVar17 = piVar9[3];
            iVar18 = piVar9[4];
            iVar19 = piVar9[5];
            goto LAB_1420cbfd0;
          }
        }
        (**(code **)(*plVar3 + 0x28))(plVar3,&local_b8,param_3[2]);
        iVar16 = local_b8;
        iVar17 = iStack_b4;
        iVar18 = iStack_b0;
        iVar19 = iStack_ac;
        if (param_3[3] != 0) {
          lVar14 = *param_3;
          iVar16 = *(int *)(lVar14 + 0x20);
          lVar13 = (longlong)iVar16;
          *(int *)(lVar14 + 0x20) = iVar16 + 1;
          if (*(int *)(lVar14 + 0x24) < iVar16 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<36,4>_>,FDefaultAllocator>::
            ResizeGrow(lVar14 + 0x18,iVar16);
          }
          lVar14 = *(longlong *)(lVar14 + 0x18);
          *(undefined8 *)(lVar14 + lVar13 * 0x24) = uVar5;
          puVar2 = (undefined8 *)(lVar14 + 8 + lVar13 * 0x24);
          *puVar2 = CONCAT44(iStack_b4,local_b8);
          puVar2[1] = CONCAT44(iStack_ac,iStack_b0);
          *(ulonglong *)(lVar14 + 0x18 + lVar13 * 0x24) = CONCAT44(uStack_a4,local_a8);
          *(int *)(lVar14 + 0x20 + lVar13 * 0x24) = iStack_a0;
          param_3 = local_f0;
          lVar14 = local_e8;
          iVar16 = local_b8;
          iVar17 = iStack_b4;
          iVar18 = iStack_b0;
          iVar19 = iStack_ac;
        }
LAB_1420cbfd0:
        *(int *)(param_1 + 0x5c) = iVar16;
        *(int *)(param_1 + 0x60) = iVar17;
        *(int *)(param_1 + 100) = iVar18;
        *(int *)(param_1 + 0x68) = iVar19;
        uStack_9c = 0x7f;
        *(undefined4 *)(param_1 + 0x6c) = local_a8;
        *(undefined4 *)(param_1 + 0x70) = uStack_a4;
        *(int *)(param_1 + 0x74) = iStack_a0;
        *(undefined4 *)(param_1 + 0x78) = 0x7f;
        cVar8 = local_78;
      }
      *(float *)(lVar14 + -0x20 + (longlong)pfVar12) = pfVar12[0xf];
LAB_1420cbdc6:
      uVar6 = local_bc | uVar10;
      local_bc = uVar6;
    }
    bVar4 = local_108;
    if ((*(uint *)(param_1 + 0x58) & uVar10) != 0) {
      fVar15 = pfVar12[7];
      if ((uVar6 & uVar10) != 0) {
        fVar15 = fVar15 + *(float *)((longlong)&local_d8 + lVar11 * 4);
      }
      *(float *)((longlong)&local_d8 + lVar11 * 4) = fVar15;
      uVar6 = local_bc | uVar10;
      local_bc = uVar6;
    }
    if ((uVar6 & uVar10) == 0) {
      if (cVar8 == '\0') {
        local_78 = '\x01';
        (**(code **)(*(longlong *)*param_3 + 0x28))((longlong *)*param_3,&local_b8,param_3[2]);
        cVar8 = '\x01';
        local_60 = local_a8;
        uStack_5c = uStack_a4;
        iStack_58 = iStack_a0;
        uStack_54 = 0x7f;
        local_88 = local_a8;
        uStack_84 = uStack_a4;
        iStack_80 = iStack_a0;
        uStack_7c = 0x7f;
      }
      *(undefined4 *)((longlong)&local_d8 + lVar11 * 4) = local_98[lVar11];
      uVar6 = local_bc | uVar10;
      local_bc = uVar6;
    }
    local_108 = bVar4 + 1;
    lVar11 = lVar11 + 1;
    pfVar12 = pfVar12 + 1;
    if (6 < local_108) {
      *local_e0 = local_d8;
      local_e0[1] = uStack_d0;
      *(undefined4 *)(local_e0 + 2) = local_c8;
      *(undefined4 *)(local_e0 + 3) = local_c0;
      *(undefined4 *)((longlong)local_e0 + 0x14) = local_c4;
      return;
    }
  } while( true );
}



// FUNCTION 1420cc020 FUN_1420cc020 body=548 status=ok
// SIG undefined FUN_1420cc020(void)

void FUN_1420cc020(longlong param_1,undefined8 param_2)

{
  float fVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 local_res8;
  undefined4 local_res18;
  uint local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_res8 = 0;
  if ((*(byte *)(param_1 + 0x100) & 1) == 0) {
    local_res18._1_1_ = 0;
    puVar2 = &local_res18;
  }
  else {
    puVar2 = &local_res8;
    local_res8._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x101));
    local_res8 = (uint)(ushort)local_res8;
  }
  FUN_1419bcef0(param_2,puVar2);
  if ((*(byte *)(param_1 + 0x100) & 2) == 0) {
    local_res18._1_1_ = 0;
    puVar2 = &local_res18;
  }
  else {
    puVar2 = &local_res8;
    local_res8._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x102));
  }
  FUN_1419bce90(param_2,puVar2);
  local_54 = 1;
  local_50 = 0;
  local_48 = 0;
  local_58 = (uint)*(byte *)(param_1 + 0x103);
  FUN_1419bc520(param_2,&local_58);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_50);
  local_58 = CONCAT22(local_58._2_2_,0x100);
  local_58 = CONCAT31(local_58._1_3_,*(undefined1 *)(param_1 + 0x105)) & 0xffffff01;
  local_50 = 0;
  local_48 = 0;
  FUN_1419bbb30(param_2,&local_58);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_50);
  fVar1 = *(float *)(param_1 + 0x108);
  if (fVar1 == 0.0) {
    local_58 = 0;
    puVar3 = &local_58;
    local_54 = 0;
    local_50 = 0;
    local_48 = 0;
  }
  else {
    puVar3 = &local_40;
    uStack_3c = CONCAT31(uStack_3c._1_3_,1);
    uStack_38 = 0;
    local_30 = 0;
    local_40 = fVar1;
  }
  FUN_1419bd180(param_2,puVar3);
  if (fVar1 == 0.0) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_50);
  }
  else {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_38);
  }
  local_40._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x104));
  uStack_38 = 0;
  local_30 = 0;
  FUN_1419bd240(param_2,&local_40);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_38);
  local_40 = *(float *)(param_1 + 0x10c);
  uStack_3c = *(undefined4 *)(param_1 + 0x110);
  uStack_38 = *(undefined8 *)(param_1 + 0x114);
  local_30 = CONCAT31(local_30._1_3_,1);
  local_28 = 0;
  local_20 = 0;
  FUN_1419bc740(param_2,&local_40);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  local_40 = *(float *)(param_1 + 0x11c);
  uStack_3c = CONCAT31(uStack_3c._1_3_,1);
  uStack_38 = 0;
  local_30 = 0;
  FUN_1419bc680(param_2,&local_40);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_38);
  return;
}



// FUNCTION 1420cc250 FUN_1420cc250 body=548 status=ok
// SIG undefined FUN_1420cc250(void)

void FUN_1420cc250(longlong param_1,undefined8 param_2)

{
  float fVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 local_res8;
  undefined4 local_res18;
  uint local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_res8 = 0;
  if ((*(byte *)(param_1 + 0x100) & 1) == 0) {
    local_res18._1_1_ = 0;
    puVar2 = &local_res18;
  }
  else {
    puVar2 = &local_res8;
    local_res8._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x101));
    local_res8 = (uint)(ushort)local_res8;
  }
  FUN_14195a330(param_2,puVar2);
  if ((*(byte *)(param_1 + 0x100) & 2) == 0) {
    local_res18._1_1_ = 0;
    puVar2 = &local_res18;
  }
  else {
    puVar2 = &local_res8;
    local_res8._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x102));
  }
  FUN_14195a280(param_2,puVar2);
  local_54 = 1;
  local_50 = 0;
  local_48 = 0;
  local_58 = (uint)*(byte *)(param_1 + 0x103);
  FUN_141958bc0(param_2,&local_58);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_50);
  local_58 = CONCAT22(local_58._2_2_,0x100);
  local_58 = CONCAT31(local_58._1_3_,*(undefined1 *)(param_1 + 0x105)) & 0xffffff01;
  local_50 = 0;
  local_48 = 0;
  FUN_141956120(param_2,&local_58);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_50);
  fVar1 = *(float *)(param_1 + 0x108);
  if (fVar1 == 0.0) {
    local_58 = 0;
    puVar3 = &local_58;
    local_54 = 0;
    local_50 = 0;
    local_48 = 0;
  }
  else {
    puVar3 = &local_40;
    uStack_3c = CONCAT31(uStack_3c._1_3_,1);
    uStack_38 = 0;
    local_30 = 0;
    local_40 = fVar1;
  }
  FUN_14195a640(param_2,puVar3);
  if (fVar1 == 0.0) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_50);
  }
  else {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_38);
  }
  local_40._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x104));
  uStack_38 = 0;
  local_30 = 0;
  FUN_14195a670(param_2,&local_40);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_38);
  local_40 = *(float *)(param_1 + 0x10c);
  uStack_3c = *(undefined4 *)(param_1 + 0x110);
  uStack_38 = *(undefined8 *)(param_1 + 0x114);
  local_30 = CONCAT31(local_30._1_3_,1);
  local_28 = 0;
  local_20 = 0;
  FUN_141958f40(param_2,&local_40);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  local_40 = *(float *)(param_1 + 0x11c);
  uStack_3c = CONCAT31(uStack_3c._1_3_,1);
  uStack_38 = 0;
  local_30 = 0;
  FUN_141958d30(param_2,&local_40);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_38);
  return;
}



// FUNCTION 1420cc480 FUN_1420cc480 body=548 status=ok
// SIG undefined FUN_1420cc480(void)

void FUN_1420cc480(longlong param_1,undefined8 param_2)

{
  float fVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 local_res8;
  undefined4 local_res18;
  uint local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_res8 = 0;
  if ((*(byte *)(param_1 + 0x100) & 1) == 0) {
    local_res18._1_1_ = 0;
    puVar2 = &local_res18;
  }
  else {
    puVar2 = &local_res8;
    local_res8._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x101));
    local_res8 = (uint)(ushort)local_res8;
  }
  SRichTextBlock::SetTextShapingMethod(param_2,puVar2);
  if ((*(byte *)(param_1 + 0x100) & 2) == 0) {
    local_res18._1_1_ = 0;
    puVar2 = &local_res18;
  }
  else {
    puVar2 = &local_res8;
    local_res8._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x102));
  }
  SRichTextBlock::SetTextFlowDirection(param_2,puVar2);
  local_54 = 1;
  local_50 = 0;
  local_48 = 0;
  local_58 = (uint)*(byte *)(param_1 + 0x103);
  FUN_1419bc530(param_2,&local_58);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_50);
  local_58 = CONCAT22(local_58._2_2_,0x100);
  local_58 = CONCAT31(local_58._1_3_,*(undefined1 *)(param_1 + 0x105)) & 0xffffff01;
  local_50 = 0;
  local_48 = 0;
  FUN_1419bbb40(param_2,&local_58);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_50);
  fVar1 = *(float *)(param_1 + 0x108);
  if (fVar1 == 0.0) {
    local_58 = 0;
    puVar3 = &local_58;
    local_54 = 0;
    local_50 = 0;
    local_48 = 0;
  }
  else {
    puVar3 = &local_40;
    uStack_3c = CONCAT31(uStack_3c._1_3_,1);
    uStack_38 = 0;
    local_30 = 0;
    local_40 = fVar1;
  }
  FUN_1419bd190(param_2,puVar3);
  if (fVar1 == 0.0) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_50);
  }
  else {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_38);
  }
  local_40._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x104));
  uStack_38 = 0;
  local_30 = 0;
  FUN_1419bd250(param_2,&local_40);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_38);
  local_40 = *(float *)(param_1 + 0x10c);
  uStack_3c = *(undefined4 *)(param_1 + 0x110);
  uStack_38 = *(undefined8 *)(param_1 + 0x114);
  local_30 = CONCAT31(local_30._1_3_,1);
  local_28 = 0;
  local_20 = 0;
  FUN_1419bc750(param_2,&local_40);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  local_40 = *(float *)(param_1 + 0x11c);
  uStack_3c = CONCAT31(uStack_3c._1_3_,1);
  uStack_38 = 0;
  local_30 = 0;
  FUN_1419bc690(param_2,&local_40);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_38);
  return;
}



// FUNCTION 1420cc6b0 FUN_1420cc6b0 body=548 status=ok
// SIG undefined FUN_1420cc6b0(void)

void FUN_1420cc6b0(longlong param_1,undefined8 param_2)

{
  float fVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 local_res8;
  undefined4 local_res18;
  uint local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  local_res8 = 0;
  if ((*(byte *)(param_1 + 0x100) & 1) == 0) {
    local_res18._1_1_ = 0;
    puVar2 = &local_res18;
  }
  else {
    puVar2 = &local_res8;
    local_res8._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x101));
    local_res8 = (uint)(ushort)local_res8;
  }
  SRichTextBlock::SetTextShapingMethod(param_2,puVar2);
  if ((*(byte *)(param_1 + 0x100) & 2) == 0) {
    local_res18._1_1_ = 0;
    puVar2 = &local_res18;
  }
  else {
    puVar2 = &local_res8;
    local_res8._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x102));
  }
  SRichTextBlock::SetTextFlowDirection(param_2,puVar2);
  local_54 = 1;
  local_50 = 0;
  local_48 = 0;
  local_58 = (uint)*(byte *)(param_1 + 0x103);
  FUN_1419bc570(param_2,&local_58);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_50);
  local_58 = CONCAT22(local_58._2_2_,0x100);
  local_58 = CONCAT31(local_58._1_3_,*(undefined1 *)(param_1 + 0x105)) & 0xffffff01;
  local_50 = 0;
  local_48 = 0;
  FUN_1419bbb80(param_2,&local_58);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_50);
  fVar1 = *(float *)(param_1 + 0x108);
  if (fVar1 == 0.0) {
    local_58 = 0;
    puVar3 = &local_58;
    local_54 = 0;
    local_50 = 0;
    local_48 = 0;
  }
  else {
    puVar3 = &local_40;
    uStack_3c = CONCAT31(uStack_3c._1_3_,1);
    uStack_38 = 0;
    local_30 = 0;
    local_40 = fVar1;
  }
  FUN_1419bd1d0(param_2,puVar3);
  if (fVar1 == 0.0) {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_50);
  }
  else {
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_38);
  }
  local_40._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x104));
  uStack_38 = 0;
  local_30 = 0;
  FUN_1419bd290(param_2,&local_40);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_38);
  local_40 = *(float *)(param_1 + 0x10c);
  uStack_3c = *(undefined4 *)(param_1 + 0x110);
  uStack_38 = *(undefined8 *)(param_1 + 0x114);
  local_30 = CONCAT31(local_30._1_3_,1);
  local_28 = 0;
  local_20 = 0;
  FUN_1419bc790(param_2,&local_40);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  local_40 = *(float *)(param_1 + 0x11c);
  uStack_3c = CONCAT31(uStack_3c._1_3_,1);
  uStack_38 = 0;
  local_30 = 0;
  FUN_1419bc6d0(param_2,&local_40);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&uStack_38);
  return;
}



// FUNCTION 1420cc8e0 FUN_1420cc8e0 body=618 status=ok
// SIG undefined FUN_1420cc8e0(void)

undefined8 FUN_1420cc8e0(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint *puVar11;
  uint uVar12;
  int local_a8;
  uint uStack_a4;
  int iStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  undefined8 local_78;
  longlong lStack_70;
  uint local_58;
  uint uStack_54;
  longlong *local_48;
  undefined8 uStack_40;
  uint *puStack_38;
  undefined8 uStack_30;
  ulonglong uStack_28;
  
  local_78 = *param_2;
  lVar5 = param_2[1];
  uStack_54 = *(uint *)(param_1 + 5);
  puVar1 = (uint *)(param_1 + 2);
  uVar2 = *(uint *)(param_1 + 5);
  local_58 = -1 << ((byte)uStack_54 & 0x1f);
  uVar12 = uStack_54 & 0xffffffe0;
  iVar8 = 0;
  if (uStack_54 != uVar2) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = puVar11[(int)uStack_54 >> 5] & local_58;
    iVar6 = (int)uStack_54 >> 5;
    while (uVar9 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1420cc9c5;
      uVar9 = puVar11[(longlong)iVar6 + 1];
      local_58 = 0xffffffff;
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
    uStack_54 = (uVar12 - iVar6) + 0x1f;
    if ((int)uVar2 < (int)uStack_54) {
LAB_1420cc9c5:
      uStack_54 = uVar2;
    }
  }
  uVar12 = uStack_54;
  local_a8 = 0;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  uStack_a4 = 1;
  local_98 = (uint *)0xffffffff;
  if (uVar2 != 0) {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = *puVar11;
    local_a8 = 0;
    while (uVar9 == 0) {
      local_98 = (uint *)0xffffffff;
      lVar10 = (longlong)local_a8;
      iVar8 = iVar8 + 0x20;
      iVar6 = local_a8 + 1;
      uStack_90._4_4_ = (uint)(uStack_90 >> 0x20);
      uStack_90 = CONCAT44(uStack_90._4_4_,iVar8);
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar6;
      if (bVar4) goto LAB_1420cca6b;
      uVar9 = puVar11[lVar10 + 1];
    }
    uStack_a4 = -uVar9 & uVar9;
    iVar6 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iVar8 = (iVar8 - iVar6) + 0x1f;
    local_98 = (uint *)CONCAT44(iVar8,0xffffffff);
    if ((int)uVar2 < iVar8) {
LAB_1420cca6b:
      local_98 = (uint *)CONCAT44(uVar2,(undefined4)local_98);
    }
  }
  local_88 = uStack_90;
  uStack_40 = CONCAT44(uStack_a4,local_a8);
  iVar8 = (int)local_78;
  uStack_30 = local_98;
  uStack_28 = uStack_90;
  iStack_a0 = local_a8;
  uStack_9c = uStack_a4;
  uStack_90 = (ulonglong)local_98;
  local_98 = puVar1;
  lStack_70 = lVar5;
  local_48 = param_1;
  puStack_38 = puVar1;
  do {
    if ((uStack_90._4_4_ == uVar12) && (local_98 == puVar1)) {
      return 1;
    }
    plVar3 = *(longlong **)(lVar5 + 0x6b0);
    if (plVar3 != plVar3 + *(int *)(lVar5 + 0x6b8)) {
      plVar7 = plVar3;
      do {
        if (*plVar7 == *(longlong *)(*param_1 + (longlong)(int)uStack_90._4_4_ * 0x10)) {
          iVar6 = (int)((longlong)plVar7 - (longlong)plVar3 >> 3);
          goto LAB_1420ccb03;
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar3 + *(int *)(lVar5 + 0x6b8));
    }
    iVar6 = -1;
LAB_1420ccb03:
    if (iVar6 <= iVar8) {
      return 0;
    }
    uStack_90 = CONCAT44(uStack_90._4_4_,(uint)uStack_90 & ~uStack_9c);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a0);
  } while( true );
}



// FUNCTION 1420ccb50 FUN_1420ccb50 body=186 status=ok
// SIG undefined FUN_1420ccb50(void)

longlong * FUN_1420ccb50(longlong *param_1,short *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong local_18;
  ulonglong local_10;
  
  FUN_141785db0();
  local_18 = 0;
  local_10 = 0;
  if ((param_2 != (short *)0x0) && (*param_2 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_2[lVar2] != 0);
    uVar1 = (int)lVar2 + 1;
    local_10 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,param_2,(longlong)(int)uVar1 * 2);
  }
  FUN_14179acf0(&local_18,1);
  lVar2 = FUN_1420c5ca0(&local_18);
  *param_1 = lVar2;
  if (lVar2 == 0) {
    FUN_14178ab20(param_2);
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1420ccc10 FUN_1420ccc10 body=477 status=ok
// SIG undefined FUN_1420ccc10(void)

undefined8 * FUN_1420ccc10(undefined8 *param_1)

{
  FUN_1419a8fd0();
  FGCObject::FGCObject(param_1 + 0x84);
  *param_1 = &PTR__scalar_deleting_destructor__144fa4c78;
  param_1[0x5e] = &PTR_LAB_144fa4ef0;
  param_1[0x84] = &PTR_LAB_144fa4f10;
  param_1[0x86] = &PTR_IsPromotedBuild_144fa4f28;
  param_1[0x87] = param_1;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)((longlong)param_1 + 0x474) = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0xffffffff;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c4) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  *(undefined4 *)((longlong)param_1 + 0x58c) = 0;
  *(undefined4 *)(param_1 + 0xb1) = 0xffffffff;
  param_1[0xb3] = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  param_1[0xbf] = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined2 *)(param_1 + 0xc1) = 0x101;
  param_1[0xc2] = 0;
  *(undefined4 *)(param_1 + 0xc3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x623) = 0;
  return param_1;
}



// FUNCTION 1420ccdf0 FUN_1420ccdf0 body=194 status=ok
// SIG undefined FUN_1420ccdf0(void)

undefined8 * FUN_1420ccdf0(undefined8 *param_1)

{
  *param_1 = &PTR__purecall_144043248;
  SBorder::SBorder(param_1 + 1);
  *param_1 = &PTR_StartProfileThreadUsage_144fb16c0;
  param_1[1] = &PTR_LAB_144fb1748;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3a4) = 1;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3dc) = 0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  return param_1;
}



// FUNCTION 1420ccec0 FUN_1420ccec0 body=117 status=ok
// SIG undefined FUN_1420ccec0(void)

undefined8 * FUN_1420ccec0(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_LAB_144fb2838;
  param_1[2] = *param_3;
  FWeakObjectPtr::operator=(param_1 + 3);
  uVar1 = FDelegateHandle::GenerateNewID();
  param_1[5] = uVar1;
  if (param_2 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 3);
    uVar1 = FUN_14178ac60(uVar1,*param_3);
    param_1[1] = uVar1;
  }
  return param_1;
}



// FUNCTION 1420ccf40 FUN_1420ccf40 body=117 status=ok
// SIG undefined FUN_1420ccf40(void)

undefined8 * FUN_1420ccf40(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_LAB_144fb2878;
  param_1[2] = *param_3;
  FWeakObjectPtr::operator=(param_1 + 3);
  uVar1 = FDelegateHandle::GenerateNewID();
  param_1[5] = uVar1;
  if (param_2 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 3);
    uVar1 = FUN_14178ac60(uVar1,*param_3);
    param_1[1] = uVar1;
  }
  return param_1;
}



// FUNCTION 1420ccfc0 FUN_1420ccfc0 body=117 status=ok
// SIG undefined FUN_1420ccfc0(void)

undefined8 * FUN_1420ccfc0(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_LAB_144fb2938;
  param_1[2] = *param_3;
  FWeakObjectPtr::operator=(param_1 + 3);
  uVar1 = FDelegateHandle::GenerateNewID();
  param_1[5] = uVar1;
  if (param_2 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 3);
    uVar1 = FUN_14178ac60(uVar1,*param_3);
    param_1[1] = uVar1;
  }
  return param_1;
}



// FUNCTION 1420cd040 FUN_1420cd040 body=117 status=ok
// SIG undefined FUN_1420cd040(void)

undefined8 * FUN_1420cd040(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_LAB_144fb28f8;
  param_1[2] = *param_3;
  FWeakObjectPtr::operator=(param_1 + 3);
  uVar1 = FDelegateHandle::GenerateNewID();
  param_1[5] = uVar1;
  if (param_2 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 3);
    uVar1 = FUN_14178ac60(uVar1,*param_3);
    param_1[1] = uVar1;
  }
  return param_1;
}



// FUNCTION 1420cd0c0 FUN_1420cd0c0 body=117 status=ok
// SIG undefined FUN_1420cd0c0(void)

undefined8 * FUN_1420cd0c0(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_LAB_144fb28b8;
  param_1[2] = *param_3;
  FWeakObjectPtr::operator=(param_1 + 3);
  uVar1 = FDelegateHandle::GenerateNewID();
  param_1[5] = uVar1;
  if (param_2 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 3);
    uVar1 = FUN_14178ac60(uVar1,*param_3);
    param_1[1] = uVar1;
  }
  return param_1;
}



// FUNCTION 1420cd140 FUN_1420cd140 body=117 status=ok
// SIG undefined FUN_1420cd140(void)

undefined8 * FUN_1420cd140(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_LAB_144fb2978;
  param_1[2] = *param_3;
  FWeakObjectPtr::operator=(param_1 + 3);
  uVar1 = FDelegateHandle::GenerateNewID();
  param_1[5] = uVar1;
  if (param_2 != 0) {
    uVar1 = FWeakObjectPtr::Get(param_1 + 3);
    uVar1 = FUN_14178ac60(uVar1,*param_3);
    param_1[1] = uVar1;
  }
  return param_1;
}



// FUNCTION 1420cd1c0 FUN_1420cd1c0 body=175 status=ok
// SIG undefined FUN_1420cd1c0(void)

undefined8 *
FUN_1420cd1c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_144fb1ad8;
  FWeakObjectPtr::operator=(param_1 + 1);
  param_1[2] = param_3;
  FUN_14080bc50(param_1 + 3,param_4);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_4 + 0x88);
  plVar1 = (longlong *)(param_4 + 0x90);
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (((plVar1 != param_1 + 0x15) && (*(int *)(param_4 + 0x98) != 0)) &&
     ((longlong *)*plVar1 != (longlong *)0x0)) {
    (**(code **)(*(longlong *)*plVar1 + 0x30))();
  }
  uVar2 = FDelegateHandle::GenerateNewID();
  param_1[0x17] = uVar2;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar1);
  FSlateBrush::~FSlateBrush(param_4);
  return param_1;
}



// FUNCTION 1420cd270 FUN_1420cd270 body=136 status=ok
// SIG undefined FUN_1420cd270(void)

undefined8 *
FUN_1420cd270(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_144fb1e68;
  FWeakObjectPtr::operator=(param_1 + 1);
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 3) = *param_4;
  plVar2 = (longlong *)(param_4 + 8);
  *(undefined1 *)((longlong)param_1 + 0x19) = param_4[1];
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((plVar2 != param_1 + 4) && (*(int *)(param_4 + 0x10) != 0)) &&
     ((longlong *)*plVar2 != (longlong *)0x0)) {
    (**(code **)(*(longlong *)*plVar2 + 0x30))();
  }
  uVar1 = FDelegateHandle::GenerateNewID();
  param_1[6] = uVar1;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar2);
  return param_1;
}



// FUNCTION 1420cd300 EURCMacro_FWriteRawDataToTexture body=104 status=ok
// SIG undefined EURCMacro_FWriteRawDataToTexture(void)

undefined8 *
`UAsyncTaskDownloadImage::HandleImageRequest'::`18'::EURCMacro_FWriteRawDataToTexture::
EURCMacro_FWriteRawDataToTexture(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 2) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(param_1 + 1,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[1],_Src,(longlong)iVar1);
  }
  return param_1;
}



// FUNCTION 1420cd370 FUN_1420cd370 body=761 status=ok
// SIG undefined FUN_1420cd370(void)

longlong FUN_1420cd370(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 local_58 [8];
  undefined1 local_50 [32];
  longlong *local_30;
  
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
  lVar8 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x110) = DAT_1469eb220;
  if (lVar8 != 0) {
    LOCK();
    piVar1 = (int *)(lVar8 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  plVar2 = DAT_1469eb140;
  puVar7 = (undefined8 *)FName::FName(local_res8,"ComboBox",1);
  local_res10 = *puVar7;
  local_res18 = local_res10;
  lVar8 = (**(code **)(*plVar2 + 0x80))(plVar2,DAT_1469eb170);
  if (lVar8 == 0) {
    lVar8 = FUN_141834a30();
  }
  *(longlong *)(param_1 + 0x118) = lVar8;
  *(undefined8 *)(param_1 + 0x120) = 0;
  plVar2 = DAT_1469eb140;
  puVar7 = (undefined8 *)FName::FName(local_res20,"TableView.Row",1);
  uVar10 = *puVar7;
  uVar11 = uVar10;
  lVar8 = (**(code **)(*plVar2 + 0x80))(plVar2,DAT_1469eb1e0);
  if (lVar8 == 0) {
    lVar8 = FUN_1418352d0();
  }
  *(longlong *)(param_1 + 0x128) = lVar8;
  *(undefined4 *)(param_1 + 0x130) = 0x40800000;
  *(undefined4 *)(param_1 + 0x134) = 0x40000000;
  *(undefined4 *)(param_1 + 0x138) = 0x40800000;
  *(undefined4 *)(param_1 + 0x13c) = 0x40000000;
  *(undefined1 *)(param_1 + 0x140) = 1;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  plVar2 = DAT_1469eb140;
  lVar8 = *DAT_1469eb140;
  puVar7 = (undefined8 *)FName::FName(local_58,"InvertedForeground",1);
  puVar9 = (undefined4 *)(**(code **)(lVar8 + 0x30))(plVar2,local_50,*puVar7,0,uVar10,uVar11);
  uVar4 = puVar9[1];
  uVar5 = puVar9[2];
  uVar6 = puVar9[3];
  *(undefined4 *)(param_1 + 0x158) = *puVar9;
  *(undefined4 *)(param_1 + 0x15c) = uVar4;
  *(undefined4 *)(param_1 + 0x160) = uVar5;
  *(undefined4 *)(param_1 + 0x164) = uVar6;
  *(undefined1 *)(param_1 + 0x168) = *(undefined1 *)(puVar9 + 4);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(puVar9 + 6);
  lVar8 = *(longlong *)(puVar9 + 8);
  *(longlong *)(param_1 + 0x178) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0x180) = 1;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
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
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined1 *)(param_1 + 0x1e9) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0x43e10000;
  *(undefined1 *)(param_1 + 0x208) = 0;
  *(undefined1 *)(param_1 + 0x228) = 0;
  *(undefined2 *)(param_1 + 0x230) = 1;
  *(undefined1 *)(param_1 + 0x232) = 1;
  return param_1;
}



// FUNCTION 1420cd670 FUN_1420cd670 body=602 status=ok
// SIG undefined FUN_1420cd670(void)

longlong FUN_1420cd670(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  
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
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0x41800000;
  *(undefined1 *)(param_1 + 0x174) = 1;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 3;
  *(undefined1 *)(param_1 + 0x1dc) = 1;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined1 *)(param_1 + 0x200) = 1;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined2 *)(param_1 + 0x218) = 0;
  *(undefined1 *)(param_1 + 0x21a) = 0;
  lVar1 = DAT_1469eb110;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar4 = 4;
    if (DVar3 != DAT_1468c21c0) goto LAB_1420cd884;
  }
  lVar4 = 0;
LAB_1420cd884:
  *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(lVar1 + lVar4);
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  *(undefined1 *)(param_1 + 0x242) = 0;
  *(undefined2 *)(param_1 + 0x240) = 0x101;
  return param_1;
}



// FUNCTION 1420cd8d0 FUN_1420cd8d0 body=408 status=ok
// SIG undefined FUN_1420cd8d0(void)

longlong FUN_1420cd8d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 local_20;
  undefined4 local_18;
  
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
  lVar3 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x110) = DAT_1469eb220;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0x40000000;
  *(undefined4 *)(param_1 + 0x124) = 0x40000000;
  *(undefined4 *)(param_1 + 0x128) = 0x40000000;
  *(undefined4 *)(param_1 + 300) = 0x40000000;
  *(undefined1 *)(param_1 + 0x130) = 1;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined1 *)(param_1 + 0x148) = 1;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined1 *)(param_1 + 0x154) = 1;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined1 *)(param_1 + 0x16c) = 0;
  *(undefined1 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  uVar2 = DAT_1464b9eec;
  local_20 = 0;
  local_18 = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9eec;
  *(undefined1 *)(param_1 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=
            ((undefined8 *)(param_1 + 0x80),&local_20,param_3,param_4,uVar2);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  return param_1;
}



// FUNCTION 1420cda70 FUN_1420cda70 body=798 status=ok
// SIG undefined FUN_1420cda70(void)

longlong FUN_1420cda70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined8 uVar7;
  undefined8 uVar8;
  
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
  plVar4 = DAT_1469eae38;
  uVar8 = DAT_1469eae30;
  uVar7 = DAT_1469eae28;
  if (DAT_1469eae38 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_1469eae38 + 1) = (int)DAT_1469eae38[1] + 1;
    UNLOCK();
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
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
  *(undefined8 *)(param_1 + 0x108) = uVar7;
  *(undefined8 *)(param_1 + 0x110) = uVar8;
  *(longlong **)(param_1 + 0x118) = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *(uint *)(param_1 + 0x120) = *(uint *)(param_1 + 0x120) & 0xfffffff0;
  *(undefined1 *)(param_1 + 0x128) = 1;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
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
  FUN_1417efd90(param_1 + 0x140);
  *(undefined1 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined1 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  plVar4 = DAT_1469eb140;
  puVar5 = (undefined8 *)FName::FName(local_res8,"Button",1);
  local_res10 = *puVar5;
  local_res18 = local_res10;
  lVar6 = (**(code **)(*plVar4 + 0x80))(plVar4,DAT_1469eb160);
  if (lVar6 == 0) {
    lVar6 = FUN_141834930();
  }
  *(longlong *)(param_1 + 0x1d0) = lVar6;
  plVar4 = DAT_1469eb140;
  puVar5 = (undefined8 *)FName::FName(local_res20,"NormalText",1);
  uVar7 = *puVar5;
  uVar8 = uVar7;
  lVar6 = (**(code **)(*plVar4 + 0x80))(plVar4,DAT_1469eb158);
  if (lVar6 == 0) {
    lVar6 = FUN_141835350();
  }
  *(longlong *)(param_1 + 0x1d8) = lVar6;
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1 + 0x1e0,&DAT_144fa78f0,L"InputKeySelector",L"DefaultKeySelectionText",uVar7,
             uVar8);
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_1 + 0x1f8,&DAT_143f61010,L"InputKeySelector",L"DefaultEmptyText");
  *(undefined2 *)(param_1 + 0x210) = 1;
  *(undefined1 *)(param_1 + 0x212) = 1;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined1 *)(param_1 + 0x248) = 1;
  return param_1;
}



// FUNCTION 1420cdd90 FUN_1420cdd90 body=309 status=ok
// SIG undefined FUN_1420cdd90(void)

longlong FUN_1420cdd90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 local_20;
  undefined4 local_18;
  
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
  lVar3 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x110) = DAT_1469eb220;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  uVar2 = DAT_1464b9eec;
  local_20 = 0;
  local_18 = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9eec;
  *(undefined1 *)(param_1 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=
            ((undefined8 *)(param_1 + 0x80),&local_20,param_3,param_4,uVar2);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  *(undefined1 *)(param_1 + 0x118) = 0;
  return param_1;
}



// FUNCTION 1420cded0 FUN_1420cded0 body=346 status=ok
// SIG undefined FUN_1420cded0(void)

longlong FUN_1420cded0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 local_20;
  undefined4 local_18;
  
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
  lVar3 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x110) = DAT_1469eb220;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x128) = 0;
  uVar2 = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  local_20 = 0;
  local_18 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=
            ((undefined8 *)(param_1 + 0x80),&local_20,param_3,param_4,uVar2);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 1;
  *(undefined2 *)(param_1 + 0x118) = 1;
  return param_1;
}



// FUNCTION 1420ce030 FArguments body=640 status=ok
// SIG undefined FArguments(void)

longlong SRichTextBlock::FArguments::FArguments(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  
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
  FText::FText(param_1 + 0x108);
  *(undefined1 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  FText::FText(param_1 + 0x138);
  *(undefined1 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined1 *)(param_1 + 0x16c) = 1;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined2 *)(param_1 + 0x180) = 0x100;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined2 *)(param_1 + 0x198) = 0x100;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(longlong **)(param_1 + 0x1d0) = DAT_1469eb140;
  plVar1 = DAT_1469eb140;
  puVar2 = (undefined8 *)FName::FName(local_res8,"NormalText",1);
  local_res10 = *puVar2;
  local_res18 = local_res10;
  lVar3 = (**(code **)(*plVar1 + 0x80))(plVar1,DAT_1469eb158);
  if (lVar3 == 0) {
    lVar3 = FUN_141835350();
  }
  *(longlong *)(param_1 + 0x1d8) = lVar3;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined1 *)(param_1 + 0x1f0) = 1;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x20c) = 1;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined1 *)(param_1 + 0x224) = 1;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined1 *)(param_1 + 0x239) = 0;
  *(undefined1 *)(param_1 + 0x23b) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined1 *)(param_1 + 0x264) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  return param_1;
}



// FUNCTION 1420ce2b0 FUN_1420ce2b0 body=375 status=ok
// SIG undefined FUN_1420ce2b0(void)

longlong FUN_1420ce2b0(longlong param_1)

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
  *(undefined4 *)(param_1 + 0x118) = 2;
  *(undefined8 *)(param_1 + 0x11c) = 2;
  *(undefined1 *)(param_1 + 0x124) = 1;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined1 *)(param_1 + 0x13c) = 1;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x154) = 1;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined2 *)(param_1 + 0x168) = 0x100;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined1 *)(param_1 + 0x180) = 0;
  return param_1;
}



// FUNCTION 1420ce430 FUN_1420ce430 body=304 status=ok
// SIG undefined FUN_1420ce430(void)

longlong FUN_1420ce430(longlong param_1)

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
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 0x120) = 1;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = DAT_1469eb218;
  lVar2 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x140) = DAT_1469eb220;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  return param_1;
}



// FUNCTION 1420ce560 FArguments body=347 status=ok
// SIG undefined FArguments(void)

longlong SWrapBox::FArguments::FArguments
                   (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 local_20;
  undefined4 local_18;
  
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
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x11c) = 1;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = (undefined4)DAT_1468b5d88;
  uVar2 = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x134) = uVar2;
  uVar1 = DAT_1464b9eec;
  local_20 = 0;
  local_18 = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9eec;
  *(undefined1 *)(param_1 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=
            ((undefined8 *)(param_1 + 0x80),&local_20,param_3,param_4,uVar1);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  return param_1;
}



// FUNCTION 1420ce6c0 FDynamicPropertyPath body=23 status=ok
// SIG undefined FDynamicPropertyPath(void)

undefined8 FDynamicPropertyPath::FDynamicPropertyPath(undefined8 param_1)

{
  FCachedPropertyPath::FCachedPropertyPath();
  return param_1;
}



// FUNCTION 1420ce6e0 FEventReply body=328 status=ok
// SIG undefined FEventReply(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FEventReply::FEventReply(undefined8 param_1,char param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [8];
  undefined8 local_190;
  undefined8 local_188;
  undefined1 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  uint local_e4;
  undefined1 local_d8 [8];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  uint local_24;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  if (param_2 == '\0') {
    local_e4 = local_e4 & 0xffffff00;
    puVar1 = local_198;
    local_190 = 0;
    local_188 = 0;
    local_178 = 0;
    local_170 = 0;
    local_118 = 0;
    local_110 = 0;
    local_198[0] = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0x20702;
  }
  else {
    local_24 = local_24 & 0xffffff00;
    puVar1 = local_d8;
    local_d8[0] = 1;
    local_d0 = 0;
    local_c8 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0x20702;
  }
  FReply::FReply(0,puVar1);
  if (param_2 == '\0') {
    FUN_140438c20(local_198);
  }
  else {
    FUN_140438c20(local_d8);
  }
  return param_1;
}



// FUNCTION 1420ce830 FUN_1420ce830 body=229 status=ok
// SIG undefined FUN_1420ce830(void)

undefined8 * FUN_1420ce830(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_140c630e0();
  *param_1 = &PTR_FUN_1440fbd78;
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  param_1[0xd] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  param_1[0xf] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  param_1[0x11] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  param_1[0x12] = *(undefined8 *)(param_2 + 0x90);
  param_1[0x13] = uVar1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  param_1[0x16] = *(undefined8 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined8 *)((longlong)param_1 + 0xbc) = *(undefined8 *)(param_2 + 0xbc);
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0xd0);
  return param_1;
}



// FUNCTION 1420ce920 FMovieScene2DTransformSectionTemplate body=861 status=ok
// SIG undefined FMovieScene2DTransformSectionTemplate(void)

undefined8 *
FMovieScene2DTransformSectionTemplate::FMovieScene2DTransformSectionTemplate
          (undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_143fcdb48;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  lVar4 = 2;
  *param_1 = &PTR_FUN_143fcdb90;
  lVar5 = 2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 0x10);
  lVar3 = param_2 - (longlong)param_1;
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  *param_1 = &PTR__scalar_deleting_destructor__144f1bc38;
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = 0;
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined8 *)(param_2 + 0x30) = 0;
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  puVar2 = param_1 + 9;
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *param_1 = &PTR__scalar_deleting_destructor__144f9dba8;
  lVar1 = (longlong)param_1 + 0xbc;
  do {
    *puVar2 = &PTR__scalar_deleting_destructor__144f23580;
    puVar2 = puVar2 + 0x14;
    *(undefined1 *)(lVar1 + -0x6c) = *(undefined1 *)(lVar3 + -0x6c + lVar1);
    *(undefined1 *)(lVar1 + -0x6b) = *(undefined1 *)(lVar3 + -0x6b + lVar1);
    *(undefined8 *)(lVar1 + -100) = 0;
    *(undefined8 *)(lVar1 + -100) = *(undefined8 *)(lVar3 + -100 + lVar1);
    *(undefined8 *)(lVar3 + -100 + lVar1) = 0;
    *(undefined4 *)(lVar1 + -0x5c) = *(undefined4 *)(lVar3 + -0x5c + lVar1);
    *(undefined4 *)(lVar1 + -0x58) = *(undefined4 *)(lVar3 + -0x58 + lVar1);
    *(undefined8 *)(lVar3 + -0x5c + lVar1) = 0;
    *(undefined8 *)(lVar1 + -0x54) = 0;
    *(undefined8 *)(lVar1 + -0x54) = *(undefined8 *)(lVar3 + -0x54 + lVar1);
    *(undefined8 *)(lVar3 + -0x54 + lVar1) = 0;
    *(undefined4 *)(lVar1 + -0x4c) = *(undefined4 *)(lVar3 + -0x4c + lVar1);
    *(undefined4 *)(lVar1 + -0x48) = *(undefined4 *)(lVar3 + -0x48 + lVar1);
    *(undefined8 *)(lVar3 + -0x4c + lVar1) = 0;
    *(undefined4 *)(lVar1 + -0x44) = *(undefined4 *)(lVar3 + -0x44 + lVar1);
    *(undefined1 *)(lVar1 + -0x40) = *(undefined1 *)(lVar3 + -0x40 + lVar1);
    *(undefined8 *)(lVar1 + -0x3c) = 0;
    *(undefined8 *)(lVar1 + -0x34) = 0;
    *(undefined8 *)(lVar1 + -0x2c) = 0;
    *(undefined8 *)(lVar1 + -0x24) = 0;
    *(undefined8 *)(lVar1 + -0xc) = 0;
    *(undefined8 *)(lVar1 + -4) = 0;
    *(undefined4 *)(lVar1 + 4) = 0xffffffff;
    *(undefined4 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x14) = 0;
    *(undefined4 *)(lVar1 + 0x1c) = 0;
    *(undefined8 *)(lVar1 + 0x24) = *(undefined8 *)(lVar3 + 0x24 + lVar1);
    lVar1 = lVar1 + 0xa0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(param_1 + 0x31,param_2 + 0x188);
  puVar2 = param_1 + 0x45;
  lVar5 = 2;
  lVar1 = (longlong)param_1 + 0x29c;
  do {
    *puVar2 = &PTR__scalar_deleting_destructor__144f23580;
    puVar2 = puVar2 + 0x14;
    *(undefined1 *)(lVar1 + -0x6c) = *(undefined1 *)(lVar3 + -0x6c + lVar1);
    *(undefined1 *)(lVar1 + -0x6b) = *(undefined1 *)(lVar3 + -0x6b + lVar1);
    *(undefined8 *)(lVar1 + -100) = 0;
    *(undefined8 *)(lVar1 + -100) = *(undefined8 *)(lVar3 + -100 + lVar1);
    *(undefined8 *)(lVar3 + -100 + lVar1) = 0;
    *(undefined4 *)(lVar1 + -0x5c) = *(undefined4 *)(lVar3 + -0x5c + lVar1);
    *(undefined4 *)(lVar1 + -0x58) = *(undefined4 *)(lVar3 + -0x58 + lVar1);
    *(undefined8 *)(lVar3 + -0x5c + lVar1) = 0;
    *(undefined8 *)(lVar1 + -0x54) = 0;
    *(undefined8 *)(lVar1 + -0x54) = *(undefined8 *)(lVar3 + -0x54 + lVar1);
    *(undefined8 *)(lVar3 + -0x54 + lVar1) = 0;
    *(undefined4 *)(lVar1 + -0x4c) = *(undefined4 *)(lVar3 + -0x4c + lVar1);
    *(undefined4 *)(lVar1 + -0x48) = *(undefined4 *)(lVar3 + -0x48 + lVar1);
    *(undefined8 *)(lVar3 + -0x4c + lVar1) = 0;
    *(undefined4 *)(lVar1 + -0x44) = *(undefined4 *)(lVar3 + -0x44 + lVar1);
    *(undefined1 *)(lVar1 + -0x40) = *(undefined1 *)(lVar3 + -0x40 + lVar1);
    *(undefined8 *)(lVar1 + -0x3c) = 0;
    *(undefined8 *)(lVar1 + -0x34) = 0;
    *(undefined8 *)(lVar1 + -0x2c) = 0;
    *(undefined8 *)(lVar1 + -0x24) = 0;
    *(undefined8 *)(lVar1 + -0xc) = 0;
    *(undefined8 *)(lVar1 + -4) = 0;
    *(undefined4 *)(lVar1 + 4) = 0xffffffff;
    *(undefined4 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x14) = 0;
    *(undefined4 *)(lVar1 + 0x1c) = 0;
    *(undefined8 *)(lVar1 + 0x24) = *(undefined8 *)(lVar3 + 0x24 + lVar1);
    lVar1 = lVar1 + 0xa0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar2 = param_1 + 0x6d;
  lVar1 = (longlong)param_1 + 0x3dc;
  do {
    *puVar2 = &PTR__scalar_deleting_destructor__144f23580;
    puVar2 = puVar2 + 0x14;
    *(undefined1 *)(lVar1 + -0x6c) = *(undefined1 *)(lVar1 + -0x6c + lVar3);
    *(undefined1 *)(lVar1 + -0x6b) = *(undefined1 *)(lVar1 + -0x6b + lVar3);
    *(undefined8 *)(lVar1 + -100) = 0;
    *(undefined8 *)(lVar1 + -100) = *(undefined8 *)(lVar1 + -100 + lVar3);
    *(undefined8 *)(lVar1 + -100 + lVar3) = 0;
    *(undefined4 *)(lVar1 + -0x5c) = *(undefined4 *)(lVar1 + -0x5c + lVar3);
    *(undefined4 *)(lVar1 + -0x58) = *(undefined4 *)(lVar1 + -0x58 + lVar3);
    *(undefined8 *)(lVar1 + -0x5c + lVar3) = 0;
    *(undefined8 *)(lVar1 + -0x54) = 0;
    *(undefined8 *)(lVar1 + -0x54) = *(undefined8 *)(lVar1 + -0x54 + lVar3);
    *(undefined8 *)(lVar1 + -0x54 + lVar3) = 0;
    *(undefined4 *)(lVar1 + -0x4c) = *(undefined4 *)(lVar1 + -0x4c + lVar3);
    *(undefined4 *)(lVar1 + -0x48) = *(undefined4 *)(lVar1 + -0x48 + lVar3);
    *(undefined8 *)(lVar1 + -0x4c + lVar3) = 0;
    *(undefined4 *)(lVar1 + -0x44) = *(undefined4 *)(lVar1 + -0x44 + lVar3);
    *(undefined1 *)(lVar1 + -0x40) = *(undefined1 *)(lVar1 + -0x40 + lVar3);
    *(undefined8 *)(lVar1 + -0x3c) = 0;
    *(undefined8 *)(lVar1 + -0x34) = 0;
    *(undefined8 *)(lVar1 + -0x2c) = 0;
    *(undefined8 *)(lVar1 + -0x24) = 0;
    *(undefined8 *)(lVar1 + -0xc) = 0;
    *(undefined8 *)(lVar1 + -4) = 0;
    *(undefined4 *)(lVar1 + 4) = 0xffffffff;
    *(undefined4 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x14) = 0;
    *(undefined4 *)(lVar1 + 0x1c) = 0;
    *(undefined8 *)(lVar1 + 0x24) = *(undefined8 *)(lVar1 + 0x24 + lVar3);
    lVar1 = lVar1 + 0xa0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *(undefined1 *)(param_1 + 0x95) = *(undefined1 *)(param_2 + 0x4a8);
  *(undefined4 *)((longlong)param_1 + 0x4ac) = *(undefined4 *)(param_2 + 0x4ac);
  return param_1;
}



// FUNCTION 1420cec80 FMovieScene2DTransformSectionTemplate body=812 status=ok
// SIG undefined FMovieScene2DTransformSectionTemplate(void)

undefined8 *
FMovieScene2DTransformSectionTemplate::FMovieScene2DTransformSectionTemplate
          (undefined8 *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  FMovieScenePropertySectionTemplate::FMovieScenePropertySectionTemplate
            (param_1,*(undefined8 *)(param_3 + 0x58),param_3 + 0x60);
  lVar5 = 2;
  *param_1 = &PTR__scalar_deleting_destructor__144f9dba8;
  puVar3 = param_1 + 9;
  lVar2 = (longlong)param_1 + 0xbc;
  lVar4 = 2;
  do {
    *puVar3 = &PTR__scalar_deleting_destructor__144f23580;
    puVar3 = puVar3 + 0x14;
    *(undefined2 *)(lVar2 + -0x6c) = 0x404;
    *(undefined8 *)(lVar2 + -100) = 0;
    *(undefined8 *)(lVar2 + -0x5c) = 0;
    *(undefined8 *)(lVar2 + -0x54) = 0;
    *(undefined8 *)(lVar2 + -0x4c) = 0;
    *(undefined4 *)(lVar2 + -0x44) = 0;
    *(undefined1 *)(lVar2 + -0x40) = 0;
    *(undefined8 *)(lVar2 + -0x3c) = 0;
    *(undefined8 *)(lVar2 + -0x34) = 0;
    *(undefined8 *)(lVar2 + -0x2c) = 0;
    *(undefined8 *)(lVar2 + -0x24) = 0;
    *(undefined8 *)(lVar2 + -0xc) = 0;
    *(undefined8 *)(lVar2 + -4) = 0;
    *(undefined4 *)(lVar2 + 4) = 0xffffffff;
    *(undefined4 *)(lVar2 + 8) = 0;
    *(undefined8 *)(lVar2 + 0x14) = 0;
    *(undefined4 *)(lVar2 + 0x1c) = 0;
    *(undefined4 *)(lVar2 + 0x24) = 60000;
    *(undefined4 *)(lVar2 + 0x28) = 1;
    lVar2 = lVar2 + 0xa0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  lVar4 = 2;
  param_1[0x31] = &PTR__scalar_deleting_destructor__144f23580;
  puVar3 = param_1 + 0x45;
  *(undefined2 *)(param_1 + 0x32) = 0x404;
  lVar2 = (longlong)param_1 + 0x29c;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1bc) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)(param_1 + 0x44) = 60000;
  *(undefined4 *)((longlong)param_1 + 0x224) = 1;
  do {
    *puVar3 = &PTR__scalar_deleting_destructor__144f23580;
    puVar3 = puVar3 + 0x14;
    *(undefined2 *)(lVar2 + -0x6c) = 0x404;
    *(undefined8 *)(lVar2 + -100) = 0;
    *(undefined8 *)(lVar2 + -0x5c) = 0;
    *(undefined8 *)(lVar2 + -0x54) = 0;
    *(undefined8 *)(lVar2 + -0x4c) = 0;
    *(undefined4 *)(lVar2 + -0x44) = 0;
    *(undefined1 *)(lVar2 + -0x40) = 0;
    *(undefined8 *)(lVar2 + -0x3c) = 0;
    *(undefined8 *)(lVar2 + -0x34) = 0;
    *(undefined8 *)(lVar2 + -0x2c) = 0;
    *(undefined8 *)(lVar2 + -0x24) = 0;
    *(undefined8 *)(lVar2 + -0xc) = 0;
    *(undefined8 *)(lVar2 + -4) = 0;
    *(undefined4 *)(lVar2 + 4) = 0xffffffff;
    *(undefined4 *)(lVar2 + 8) = 0;
    *(undefined8 *)(lVar2 + 0x14) = 0;
    *(undefined4 *)(lVar2 + 0x1c) = 0;
    *(undefined4 *)(lVar2 + 0x24) = 60000;
    *(undefined4 *)(lVar2 + 0x28) = 1;
    lVar2 = lVar2 + 0xa0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar3 = param_1 + 0x6d;
  lVar2 = (longlong)param_1 + 0x3dc;
  do {
    *puVar3 = &PTR__scalar_deleting_destructor__144f23580;
    puVar3 = puVar3 + 0x14;
    *(undefined2 *)(lVar2 + -0x6c) = 0x404;
    *(undefined8 *)(lVar2 + -100) = 0;
    *(undefined8 *)(lVar2 + -0x5c) = 0;
    *(undefined8 *)(lVar2 + -0x54) = 0;
    *(undefined8 *)(lVar2 + -0x4c) = 0;
    *(undefined4 *)(lVar2 + -0x44) = 0;
    *(undefined1 *)(lVar2 + -0x40) = 0;
    *(undefined8 *)(lVar2 + -0x3c) = 0;
    *(undefined8 *)(lVar2 + -0x34) = 0;
    *(undefined8 *)(lVar2 + -0x2c) = 0;
    *(undefined8 *)(lVar2 + -0x24) = 0;
    *(undefined8 *)(lVar2 + -0xc) = 0;
    *(undefined8 *)(lVar2 + -4) = 0;
    *(undefined4 *)(lVar2 + 4) = 0xffffffff;
    *(undefined4 *)(lVar2 + 8) = 0;
    *(undefined8 *)(lVar2 + 0x14) = 0;
    *(undefined4 *)(lVar2 + 0x1c) = 0;
    *(undefined4 *)(lVar2 + 0x24) = 60000;
    *(undefined4 *)(lVar2 + 0x28) = 1;
    lVar2 = lVar2 + 0xa0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(undefined1 *)(param_1 + 0x95) = *(undefined1 *)(param_2 + 0xc9);
  uVar1 = *(uint *)(param_2 + 0xe0);
  *(uint *)((longlong)param_1 + 0x4ac) = uVar1;
  if ((uVar1 & 1) != 0) {
    FMovieSceneFloatChannel::operator=(param_1 + 9,param_2 + 0xe8);
  }
  if ((uVar1 >> 1 & 1) != 0) {
    FMovieSceneFloatChannel::operator=(param_1 + 0x1d,param_2 + 0x188);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    FMovieSceneFloatChannel::operator=(param_1 + 0x31,param_2 + 0x228);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    FMovieSceneFloatChannel::operator=(param_1 + 0x45,param_2 + 0x2c8);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    FMovieSceneFloatChannel::operator=(param_1 + 0x59,param_2 + 0x368);
  }
  if ((uVar1 >> 5 & 1) != 0) {
    FMovieSceneFloatChannel::operator=(param_1 + 0x6d,param_2 + 0x408);
  }
  if ((uVar1 >> 6 & 1) != 0) {
    FMovieSceneFloatChannel::operator=(param_1 + 0x81,param_2 + 0x4a8);
  }
  return param_1;
}



// FUNCTION 1420cefb0 FUN_1420cefb0 body=330 status=ok
// SIG undefined FUN_1420cefb0(void)

undefined8 * FUN_1420cefb0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_28 [2];
  longlong local_18 [2];
  
  *param_1 = &PTR_FUN_144faeb88;
  plVar5 = param_1 + 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *plVar5 = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1 != param_1 + 0x1e) {
    do {
      *(undefined1 *)(plVar5 + -3) = 0;
      if (((local_28 != plVar5) && ((int)plVar5[1] != 0)) &&
         (plVar3 = (longlong *)*plVar5, plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        if (*plVar5 != 0) {
          lVar4 = FMemory::Realloc(*plVar5,0,0);
          *plVar5 = lVar4;
        }
        *(undefined4 *)(plVar5 + 1) = 0;
      }
      if (plVar5 + -2 != local_18) {
        plVar5[-2] = 0;
        plVar3 = (longlong *)plVar5[-1];
        plVar5[-1] = 0;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar3 + 8))();
          }
        }
      }
      plVar5 = plVar5 + 5;
    } while (plVar5 != param_1 + 0x22);
  }
  return param_1;
}



// FUNCTION 1420cf100 FUN_1420cf100 body=187 status=ok
// SIG undefined FUN_1420cf100(void)

undefined8 * FUN_1420cf100(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &DAT_146ae79d0;
  param_1[1] = &DAT_146501078;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146ae8718) {
    _Init_thread_header();
    if (DAT_146ae8718 == -1) {
      local_18 = 0;
      uStack_10 = 0;
      FUN_1417f0d70(&DAT_146ae7c68,&local_18);
      atexit((_func_5014 *)&LAB_143ea67d0);
      _Init_thread_footer();
    }
  }
  param_1[2] = &DAT_146ae7c68;
  param_1[4] = &DAT_146ae7a08;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  return param_1;
}



// FUNCTION 1420cf1d0 FUserWidgetPool body=111 status=ok
// SIG undefined FUserWidgetPool(void)

undefined8 * FUserWidgetPool::FUserWidgetPool(undefined8 *param_1,undefined8 param_2)

{
  FGCObject::FGCObject();
  *param_1 = &PTR__scalar_deleting_destructor__144fa2ed0;
  FWeakObjectPtr::operator=(param_1 + 2,param_2);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 1420cf240 FUN_1420cf240 body=480 status=ok
// SIG undefined FUN_1420cf240(void)

undefined8 * FUN_1420cf240(undefined8 *param_1,undefined1 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined1 local_res8 [8];
  undefined8 local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  puVar1 = param_1 + 3;
  *param_1 = &PTR__scalar_deleting_destructor__144fa9dc8;
  pvVar6 = ThreadLocalStoragePointer;
  param_1[1] = 0;
  param_1[2] = 0;
  *puVar1 = 0;
  param_1[4] = 0;
  *(undefined1 *)((longlong)param_1 + 0x2a) = param_2;
  *(undefined2 *)(param_1 + 5) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x2b) = param_3;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  if ((*(int *)(*(longlong *)((longlong)pvVar6 + (ulonglong)_tls_index * 8) + 0x38) < DAT_1468509e4)
     && (_Init_thread_header(&DAT_1468509e4), DAT_1468509e4 == -1)) {
    uVar10 = FCommandLine::Get();
    DAT_1468509e0 = FParse::Param(uVar10,L"nullrhi");
    _Init_thread_footer(&DAT_1468509e4);
  }
  if (((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) {
    FUN_14168dc80();
    puVar7 = (undefined8 *)FName::FName(local_res8,"SlateRHIRenderer",1);
    uVar10 = *puVar7;
    uVar8 = FUN_14168dc80();
    plVar9 = (longlong *)FUN_141690010(uVar8,uVar10);
    puVar7 = (undefined8 *)
             (**(code **)(*plVar9 + 0x48))
                       (plVar9,local_28,*(undefined1 *)((longlong)param_1 + 0x2a));
    local_30 = (longlong *)puVar7[1];
    local_38 = *puVar7;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    if (puVar1 != &local_38) {
      *puVar1 = local_38;
      local_38 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 4,&local_30);
    }
    plVar9 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_30 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar3 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_20 + 1;
      lVar5 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar3 = (int *)((longlong)local_20 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 1420cf420 SComboButton body=104 status=ok
// SIG undefined SComboButton(void)

undefined8 * SComboButton::SComboButton(undefined8 *param_1)

{
  FUN_141923690();
  *param_1 = &PTR_FUN_144d693b0;
  param_1[0x41] = &PTR_FUN_144d695d0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  return param_1;
}



// FUNCTION 1420cf490 FUN_1420cf490 body=701 status=ok
// SIG undefined FUN_1420cf490(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1420cf490(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uStackX_c;
  
  FUN_1417f4470();
  *param_1 = &PTR__scalar_deleting_destructor__144fa9dd8;
  param_1[0x5e] = &PTR_LAB_144fa9fe8;
  param_1[0x5f] = &PTR__purecall_143f48980;
  param_1[0x60] = param_1;
  FSlotBase::FSlotBase(param_1 + 0x61);
  param_1[0x62] = param_1;
  puVar3 = (undefined8 *)0x0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x5f] = &PTR_SetMonitoring_144d4edf8;
  param_1[0x61] = &PTR_LAB_144d4ee20;
  param_1[0x6b] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x6c) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x364) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x36c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x374) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x6f] = _DAT_1464aa6c0;
  param_1[0x70] = uVar1;
  *(undefined1 *)(param_1 + 0x71) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  uVar1 = DAT_1468b5d88;
  uVar4 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x77) = uVar4;
  *(undefined4 *)(param_1 + 0x76) = uVar4;
  *(undefined1 *)(param_1 + 0x78) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x3bc) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 3;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  *(byte *)(param_1 + 0x7b) = *(byte *)(param_1 + 0x7b) & 0xfc;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0;
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1440780a8;
    FGCObject::FGCObject(puVar2 + 1);
    puVar2[3] = 0;
    *puVar2 = &PTR__scalar_deleting_destructor__144fb1608;
    puVar2[1] = &PTR_LAB_144fb1618;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar3 = puVar2;
  }
  param_1[0x86] = puVar3;
  param_1[0x87] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x88) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x44c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x454) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x8b] = _DAT_1464aa6c0;
  param_1[0x8c] = uVar1;
  *(undefined1 *)(param_1 + 0x8d) = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  uVar1 = DAT_1468b5d88;
  *(undefined1 *)(param_1 + 0x94) = 0;
  uVar4 = (undefined4)uVar1;
  *(undefined4 *)(param_1 + 0x93) = uVar4;
  *(undefined4 *)(param_1 + 0x92) = uVar4;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x49c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x494) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = 3;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  *(byte *)(param_1 + 0x97) = *(byte *)(param_1 + 0x97) & 0xfc;
  param_1[0x98] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4e4) = 0;
  return param_1;
}



// FUNCTION 1420cf750 UAsyncTaskDownloadImage body=119 status=ok
// SIG undefined UAsyncTaskDownloadImage(void)

undefined8 * UAsyncTaskDownloadImage::UAsyncTaskDownloadImage(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase();
  lVar3 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144fa2748;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar4 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar4;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
    }
    *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | 0x40000000;
  }
  return param_1;
}



// FUNCTION 1420cf7d0 FUN_1420cf7d0 body=315 status=ok
// SIG undefined FUN_1420cf7d0(void)

undefined8 * FUN_1420cf7d0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined **local_98 [8];
  longlong *local_58;
  longlong *local_20;
  
  UWidget::UWidget();
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *param_1 = &PTR_FUN_144fa2ee8;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined1 *)((longlong)param_1 + 0x12a) = 1;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  uVar5 = FSlateNoResource::FSlateNoResource(local_98,&DAT_1468b5d88);
  FUN_14080bc50(param_1 + 0x27,uVar5);
  local_98[0] = &PTR__scalar_deleting_destructor__143f489a8;
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
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 0xb7) = 4;
  return param_1;
}



// FUNCTION 1420cf910 FUN_1420cf910 body=58 status=ok
// SIG undefined FUN_1420cf910(void)

undefined8 * FUN_1420cf910(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_144fa33e0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[7] = 0x4000000040800000;
  param_1[8] = 0x4000000040800000;
  *(undefined2 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 1420cf950 FUN_1420cf950 body=74 status=ok
// SIG undefined FUN_1420cf950(void)

undefined8 * FUN_1420cf950(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR__scalar_deleting_destructor__144fa0878;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  FCachedPropertyPath::FCachedPropertyPath(param_1 + 6);
  param_1[0xb] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144fa0b08;
  return param_1;
}



// FUNCTION 1420cf9a0 UBorder body=520 status=ok
// SIG undefined UBorder(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * UBorder::UBorder(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uStackX_c;
  
  UWidget::UWidget();
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *param_1 = &PTR_FUN_144fa3668;
  FWeakObjectPtr::operator=(param_1 + 0x26,0);
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x2b) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x2e] = _DAT_1464aa6c0;
  param_1[0x2f] = uVar1;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  uVar1 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x36) = uVar2;
  *(undefined4 *)(param_1 + 0x35) = uVar2;
  *(undefined1 *)(param_1 + 0x37) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x1b4) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 3;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) & 0xfc;
  FWeakObjectPtr::operator=(param_1 + 0x3b,0);
  param_1[0x3c] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x3f,0);
  param_1[0x40] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x42,0);
  param_1[0x43] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x44,0);
  param_1[0x45] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x46,0);
  param_1[0x47] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x48,0);
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) & 0xfe;
  uVar1 = _DAT_1464aa6c8;
  *(undefined8 *)((longlong)param_1 + 0x11c) = _DAT_1464aa6c0;
  *(undefined8 *)((longlong)param_1 + 0x124) = uVar1;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x3d] = _DAT_1464aa6c0;
  param_1[0x3e] = uVar1;
  param_1[0x28] = 0x4000000040800000;
  param_1[0x29] = 0x4000000040800000;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(byte *)((longlong)param_1 + 0x11a) = *(byte *)((longlong)param_1 + 0x11a) | 1;
  *(undefined4 *)(param_1 + 0x41) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0x3f800000;
  return param_1;
}



// FUNCTION 1420cfbb0 FUN_1420cfbb0 body=58 status=ok
// SIG undefined FUN_1420cfbb0(void)

undefined8 * FUN_1420cfbb0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_144fa3950;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[7] = 0x4000000040800000;
  param_1[8] = 0x4000000040800000;
  *(undefined2 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 1420cfbf0 FUN_1420cfbf0 body=78 status=ok
// SIG undefined FUN_1420cfbf0(void)

undefined8 * FUN_1420cfbf0(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR__scalar_deleting_destructor__144fa0878;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  FCachedPropertyPath::FCachedPropertyPath(param_1 + 6);
  param_1[0xb] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144fa0d98;
  *(undefined1 *)((longlong)param_1 + 0x61) = 0;
  return param_1;
}



// FUNCTION 1420cfc40 UButton body=295 status=ok
// SIG undefined UButton(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * UButton::UButton(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_328 [32];
  undefined1 local_308 [280];
  undefined8 local_1f0;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  UWidget::UWidget();
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *param_1 = &PTR_FUN_144fa3bd8;
  FUN_1417e8800(param_1 + 0x24);
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  FUN_14068f3e0(local_308);
  FButtonStyle::operator=(param_1 + 0x24,local_1f0);
  uVar3 = DAT_1464aa6cc;
  uVar2 = DAT_1464aa6c8;
  uVar1 = DAT_1464aa6c4;
  *(undefined4 *)(param_1 + 0x73) = DAT_1464aa6c0;
  *(undefined4 *)((longlong)param_1 + 0x39c) = uVar1;
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = uVar3;
  uVar3 = DAT_1464aa6cc;
  uVar2 = DAT_1464aa6c8;
  uVar1 = DAT_1464aa6c4;
  *(undefined4 *)(param_1 + 0x75) = DAT_1464aa6c0;
  *(undefined4 *)((longlong)param_1 + 0x3ac) = uVar1;
  *(undefined4 *)(param_1 + 0x76) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = uVar3;
  *(undefined2 *)(param_1 + 0x77) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3bb) = 1;
  FUN_140690f70(local_308);
  return param_1;
}



// FUNCTION 1420cfd70 UButtonSlot body=60 status=ok
// SIG undefined UButtonSlot(void)

undefined8 * UButtonSlot::UButtonSlot(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_144fa3ec0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[7] = 0x4000000040800000;
  param_1[8] = 0x4000000040800000;
  *(undefined2 *)(param_1 + 9) = 0x202;
  return param_1;
}



// FUNCTION 1420cfdb0 FUN_1420cfdb0 body=314 status=ok
// SIG undefined FUN_1420cfdb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1420cfdb0(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_168 [32];
  char local_148 [16];
  undefined1 local_138 [120];
  char local_c0;
  longlong *local_b8;
  int local_b0;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  UWidget::UWidget();
  plVar3 = (longlong *)0x0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 1;
  *param_1 = &PTR_FUN_144fa4150;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) & 0xfe;
  SCanvas::FArguments::FArguments(local_138);
  if (((local_b0 != 0) && (local_b8 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*local_b8 + 0x18))(), cVar1 != '\0')) {
    plVar2 = plVar3;
    if (local_b0 != 0) {
      plVar2 = local_b8;
    }
    (**(code **)(*plVar2 + 0x38))(plVar2,local_148);
    local_c0 = local_148[0];
  }
  if (local_c0 != DAT_1464b9ee8) {
    if (local_c0 == DAT_1464b9ee9) {
      plVar3 = (longlong *)0x1;
    }
    else if (local_c0 == DAT_1464b9eea) {
      plVar3 = (longlong *)0x2;
    }
    else if (local_c0 == DAT_1464b9eeb) {
      plVar3 = (longlong *)0x3;
    }
    else if (local_c0 == DAT_1464b9eec) {
      plVar3 = (longlong *)&DAT_00000004;
    }
  }
  *(char *)((longlong)param_1 + 0xb7) = (char)plVar3;
  if (local_30 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_138);
  return param_1;
}



// FUNCTION 1420cfef0 UCanvasPanelSlot body=74 status=ok
// SIG undefined UCanvasPanelSlot(void)

undefined8 * UCanvasPanelSlot::UCanvasPanelSlot(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_144fa4438;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[7] = 0;
  param_1[8] = 0x41f0000042c80000;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 1420cff40 FUN_1420cff40 body=494 status=ok
// SIG undefined FUN_1420cff40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1420cff40(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined1 auStack_358 [32];
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined1 local_328;
  undefined8 local_320;
  longlong *plStack_318;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined1 local_300 [280];
  undefined8 local_1e8;
  undefined1 local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong *local_190;
  int local_188;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_358;
  UWidget::UWidget();
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *param_1 = &PTR_FUN_144fa46c0;
  FWeakObjectPtr::operator=(param_1 + 0x24,0);
  param_1[0x25] = 0;
  FCheckBoxStyle::FCheckBoxStyle(param_1 + 0x26);
  *(undefined8 *)((longlong)param_1 + 0x704) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70c) = 0;
  param_1[0xe3] = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x724) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xe5) = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  FUN_1418cdb90(local_300);
  FCheckBoxStyle::operator=(param_1 + 0x26,local_1e8);
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined1 *)(param_1 + 0xe0) = local_1b0;
  if (((local_188 != 0) && (local_190 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*local_190 + 0x18))(), cVar5 != '\0')) {
    plVar6 = (longlong *)0x0;
    if (local_188 != 0) {
      plVar6 = local_190;
    }
    (**(code **)(*plVar6 + 0x38))(plVar6,&local_310);
    local_1a8 = local_310;
    uStack_1a4 = uStack_30c;
    uStack_1a0 = uStack_308;
    uStack_19c = uStack_304;
  }
  *(undefined4 *)((longlong)param_1 + 0x704) = local_1a8;
  *(undefined4 *)(param_1 + 0xe1) = uStack_1a4;
  *(undefined4 *)((longlong)param_1 + 0x70c) = uStack_1a0;
  *(undefined4 *)(param_1 + 0xe2) = uStack_19c;
  local_328 = 0;
  local_338 = DAT_1464aa6c0;
  uStack_334 = DAT_1464aa6c4;
  uStack_330 = DAT_1464aa6c8;
  uStack_32c = DAT_1464aa6cc;
  local_320 = 0;
  plStack_318 = (longlong *)0x0;
  FUN_140692440(param_1 + 0xe3,&local_338);
  plVar6 = plStack_318;
  if (plStack_318 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_318 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_318)(plStack_318);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_318 + 8))(plStack_318,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 0xe8) = 1;
  FUN_1418d1af0(local_300);
  return param_1;
}



// FUNCTION 1420d0130 FUN_1420d0130 body=78 status=ok
// SIG undefined FUN_1420d0130(void)

undefined8 * FUN_1420d0130(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR__scalar_deleting_destructor__144fa0878;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  FCachedPropertyPath::FCachedPropertyPath(param_1 + 6);
  param_1[0xb] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144fa12c8;
  *(undefined1 *)((longlong)param_1 + 0x61) = 0;
  return param_1;
}



// FUNCTION 1420d0180 FUN_1420d0180 body=414 status=ok
// SIG undefined FUN_1420d0180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1420d0180(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined1 local_178 [264];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  longlong *local_38;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  UWidget::UWidget();
  *param_1 = &PTR_FUN_144fa49a8;
  param_1[0x23] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x24) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  uVar5 = _DAT_1464aa6c8;
  param_1[0x27] = _DAT_1464aa6c0;
  param_1[0x28] = uVar5;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  local_188 = DAT_1468b5d88;
  uVar6 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x2f) = uVar6;
  *(undefined4 *)(param_1 + 0x2e) = uVar6;
  *(undefined1 *)(param_1 + 0x30) = 0;
  uVar5 = local_188;
  local_188._4_4_ = (undefined4)((ulonglong)local_188 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x17c) = local_188._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x174) = local_188._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x184) = 3;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(byte *)(param_1 + 0x33) = *(byte *)(param_1 + 0x33) & 0xfc;
  *(undefined1 *)(param_1 + 0x34) = 1;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  local_188 = uVar5;
  SCircularThrobber::FArguments::FArguments(local_178);
  FUN_1406922e0(param_1 + 0x23,local_70);
  *(undefined4 *)((longlong)param_1 + 0x104) = local_64;
  *(undefined4 *)(param_1 + 0x21) = local_60;
  *(undefined4 *)(param_1 + 0x20) = local_68;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_28);
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
  FUN_140456c70(local_178);
  return param_1;
}



// FUNCTION 1420d0320 FUN_1420d0320 body=78 status=ok
// SIG undefined FUN_1420d0320(void)

undefined8 * FUN_1420d0320(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR__scalar_deleting_destructor__144fa0878;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  FCachedPropertyPath::FCachedPropertyPath(param_1 + 6);
  param_1[0xb] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144fa1558;
  *(undefined1 *)((longlong)param_1 + 0x61) = 0;
  return param_1;
}



// FUNCTION 1420d0370 UComboBox body=110 status=ok
// SIG undefined UComboBox(void)

undefined8 * UComboBox::UComboBox(undefined8 *param_1)

{
  UWidget::UWidget();
  *param_1 = &PTR_FUN_144fa5200;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x22,0);
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x24) = 1;
  return param_1;
}



// FUNCTION 1420d03e0 FUN_1420d03e0 body=3129 status=ok
// SIG undefined FUN_1420d03e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1420d03e0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  void *pvVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  undefined1 auStack_668 [32];
  undefined8 *local_648;
  undefined2 *local_638;
  undefined8 local_630;
  undefined4 local_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined1 local_618;
  undefined8 local_610;
  longlong *plStack_608;
  undefined4 local_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined1 local_5f0;
  undefined8 local_5e8;
  longlong *plStack_5e0;
  undefined4 local_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined1 local_5c8;
  undefined8 local_5c0;
  longlong *plStack_5b8;
  undefined4 local_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined1 local_5a0;
  undefined8 local_598;
  longlong *plStack_590;
  undefined4 local_588;
  undefined4 uStack_584;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  undefined1 local_578;
  undefined8 local_570;
  longlong *plStack_568;
  undefined4 local_560;
  undefined4 uStack_55c;
  undefined4 uStack_558;
  undefined4 uStack_554;
  undefined1 local_550;
  undefined8 local_548;
  longlong *plStack_540;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined1 local_528;
  undefined8 local_520;
  longlong *plStack_518;
  undefined4 local_510;
  undefined4 uStack_50c;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined1 local_500;
  undefined8 local_4f8;
  longlong *plStack_4f0;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined1 local_4d8;
  undefined8 local_4d0;
  longlong *plStack_4c8;
  undefined4 local_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined1 local_4b0;
  undefined8 local_4a8;
  longlong *plStack_4a0;
  undefined4 local_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined1 local_488;
  undefined8 local_480;
  longlong *plStack_478;
  undefined4 local_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined1 local_460;
  undefined8 local_458;
  longlong *plStack_450;
  undefined4 local_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined1 local_438;
  undefined8 local_430;
  longlong *plStack_428;
  undefined4 local_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined1 local_410;
  undefined8 local_408;
  longlong *plStack_400;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined1 local_3e8;
  undefined8 local_3e0;
  longlong *plStack_3d8;
  undefined4 local_3d0;
  undefined1 local_3cc;
  undefined8 local_3c8;
  undefined4 local_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined1 local_3b0 [8];
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 local_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined1 local_2c8 [56];
  longlong *local_290;
  undefined1 local_278 [280];
  longlong local_160;
  longlong local_150;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_668;
  UWidget::UWidget();
  *param_1 = &PTR__scalar_deleting_destructor__144fa54d0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  FComboBoxStyle::FComboBoxStyle(param_1 + 0x24);
  FTableRowStyle::FTableRowStyle(param_1 + 0x9f);
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  FUN_1417efd90(param_1 + 0x179);
  param_1[0x183] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x184) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc24) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x185) = 0;
  param_1[0x186] = 0;
  param_1[0x187] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x189,0);
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  param_1[0x18e] = 0;
  param_1[399] = 0;
  param_1[400] = 0;
  param_1[0x191] = 0;
  param_1[0x192] = 0;
  param_1[0x193] = 0;
  param_1[0x194] = 0;
  param_1[0x195] = 0;
  param_1[0x196] = 0;
  FUN_14195f0e0(local_278);
  FButtonStyle::operator=(param_1 + 0x26,local_160 + 0x10);
  FUN_1406922e0(param_1 + 0x75,local_160 + 0x288);
  FUN_1406922e0(param_1 + 0x86,local_160 + 0x310);
  uVar6 = *(undefined4 *)(local_160 + 0x39c);
  uVar7 = *(undefined4 *)(local_160 + 0x3a0);
  uVar8 = *(undefined4 *)(local_160 + 0x3a4);
  *(undefined4 *)(param_1 + 0x97) = *(undefined4 *)(local_160 + 0x398);
  *(undefined4 *)((longlong)param_1 + 0x4bc) = uVar6;
  *(undefined4 *)(param_1 + 0x98) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x4c4) = uVar8;
  param_1[0x99] = *(undefined8 *)(local_160 + 0x3a8);
  param_1[0x9a] = *(undefined8 *)(local_160 + 0x3b0);
  *(undefined4 *)(param_1 + 0x9b) = *(undefined4 *)(local_160 + 0x3b8);
  *(undefined4 *)((longlong)param_1 + 0x4dc) = *(undefined4 *)(local_160 + 0x3bc);
  param_1[0x9c] = *(undefined8 *)(local_160 + 0x3c0);
  param_1[0x9d] = *(undefined8 *)(local_160 + 0x3c8);
  *(undefined4 *)(param_1 + 0x9e) = *(undefined4 *)(local_160 + 0x3d0);
  *(undefined4 *)((longlong)param_1 + 0x4f4) = *(undefined4 *)(local_160 + 0x3d4);
  FUN_1406922e0(param_1 + 0xa0,local_150 + 8);
  FUN_1406922e0(param_1 + 0xb1,local_150 + 0x90);
  FUN_1406922e0(param_1 + 0xc2,local_150 + 0x118);
  FUN_1406922e0(param_1 + 0xd3,local_150 + 0x1a0);
  FUN_1406922e0(param_1 + 0xe4,local_150 + 0x228);
  FUN_1406922e0(param_1 + 0xf5,local_150 + 0x2b0);
  FUN_1406922e0(param_1 + 0x106,local_150 + 0x338);
  FUN_1406922e0(param_1 + 0x117,local_150 + 0x3c0);
  FUN_1406922e0(param_1 + 0x128,local_150 + 0x448);
  FUN_140692440(param_1 + 0x139,local_150 + 0x4d0);
  FUN_140692440(param_1 + 0x13e,local_150 + 0x4f8);
  FUN_1406922e0(param_1 + 0x143,local_150 + 0x520);
  FUN_1406922e0(param_1 + 0x154,local_150 + 0x5a8);
  FUN_1406922e0(param_1 + 0x165,local_150 + 0x630);
  puVar5 = (undefined4 *)param_1[0xa7];
  if (puVar5 == (undefined4 *)0x0) {
    local_628 = *(undefined4 *)(param_1 + 0xa4);
    uStack_624 = *(undefined4 *)((longlong)param_1 + 0x524);
    uStack_620 = *(undefined4 *)(param_1 + 0xa5);
    uStack_61c = *(undefined4 *)((longlong)param_1 + 0x52c);
  }
  else {
    local_628 = *puVar5;
    uStack_624 = puVar5[1];
    uStack_620 = puVar5[2];
    uStack_61c = puVar5[3];
  }
  local_618 = 0;
  local_610 = 0;
  plStack_608 = (longlong *)0x0;
  local_3a8 = local_628;
  uStack_3a4 = uStack_624;
  uStack_3a0 = uStack_620;
  uStack_39c = uStack_61c;
  FUN_140692440(param_1 + 0xa4,&local_628);
  plVar3 = plStack_608;
  if (plStack_608 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_608 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_608)(plStack_608);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_608 + 8))(plStack_608,1);
      }
    }
  }
  puVar5 = (undefined4 *)param_1[0xb8];
  if (puVar5 == (undefined4 *)0x0) {
    local_600 = *(undefined4 *)(param_1 + 0xb5);
    uStack_5fc = *(undefined4 *)((longlong)param_1 + 0x5ac);
    uStack_5f8 = *(undefined4 *)(param_1 + 0xb6);
    uStack_5f4 = *(undefined4 *)((longlong)param_1 + 0x5b4);
  }
  else {
    local_600 = *puVar5;
    uStack_5fc = puVar5[1];
    uStack_5f8 = puVar5[2];
    uStack_5f4 = puVar5[3];
  }
  local_5f0 = 0;
  local_5e8 = 0;
  plStack_5e0 = (longlong *)0x0;
  local_398 = local_600;
  uStack_394 = uStack_5fc;
  uStack_390 = uStack_5f8;
  uStack_38c = uStack_5f4;
  FUN_140692440(param_1 + 0xb5,&local_600);
  plVar3 = plStack_5e0;
  if (plStack_5e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_5e0 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_5e0)(plStack_5e0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_5e0 + 8))(plStack_5e0,1);
      }
    }
  }
  puVar5 = (undefined4 *)param_1[0xc9];
  if (puVar5 == (undefined4 *)0x0) {
    local_5d8 = *(undefined4 *)(param_1 + 0xc6);
    uStack_5d4 = *(undefined4 *)((longlong)param_1 + 0x634);
    uStack_5d0 = *(undefined4 *)(param_1 + 199);
    uStack_5cc = *(undefined4 *)((longlong)param_1 + 0x63c);
  }
  else {
    local_5d8 = *puVar5;
    uStack_5d4 = puVar5[1];
    uStack_5d0 = puVar5[2];
    uStack_5cc = puVar5[3];
  }
  local_5c8 = 0;
  local_5c0 = 0;
  plStack_5b8 = (longlong *)0x0;
  local_388 = local_5d8;
  uStack_384 = uStack_5d4;
  uStack_380 = uStack_5d0;
  uStack_37c = uStack_5cc;
  FUN_140692440(param_1 + 0xc6,&local_5d8);
  plVar3 = plStack_5b8;
  if (plStack_5b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_5b8 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_5b8)(plStack_5b8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_5b8 + 8))(plStack_5b8,1);
      }
    }
  }
  puVar5 = (undefined4 *)param_1[0xda];
  if (puVar5 == (undefined4 *)0x0) {
    local_5b0 = *(undefined4 *)(param_1 + 0xd7);
    uStack_5ac = *(undefined4 *)((longlong)param_1 + 0x6bc);
    uStack_5a8 = *(undefined4 *)(param_1 + 0xd8);
    uStack_5a4 = *(undefined4 *)((longlong)param_1 + 0x6c4);
  }
  else {
    local_5b0 = *puVar5;
    uStack_5ac = puVar5[1];
    uStack_5a8 = puVar5[2];
    uStack_5a4 = puVar5[3];
  }
  local_5a0 = 0;
  local_598 = 0;
  plStack_590 = (longlong *)0x0;
  local_378 = local_5b0;
  uStack_374 = uStack_5ac;
  uStack_370 = uStack_5a8;
  uStack_36c = uStack_5a4;
  FUN_140692440(param_1 + 0xd7,&local_5b0);
  plVar3 = plStack_590;
  if (plStack_590 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_590 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_590)(plStack_590);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_590 + 8))(plStack_590,1);
      }
    }
  }
  puVar5 = (undefined4 *)param_1[0xeb];
  if (puVar5 == (undefined4 *)0x0) {
    local_588 = *(undefined4 *)(param_1 + 0xe8);
    uStack_584 = *(undefined4 *)((longlong)param_1 + 0x744);
    uStack_580 = *(undefined4 *)(param_1 + 0xe9);
    uStack_57c = *(undefined4 *)((longlong)param_1 + 0x74c);
  }
  else {
    local_588 = *puVar5;
    uStack_584 = puVar5[1];
    uStack_580 = puVar5[2];
    uStack_57c = puVar5[3];
  }
  local_578 = 0;
  local_570 = 0;
  plStack_568 = (longlong *)0x0;
  local_368 = local_588;
  uStack_364 = uStack_584;
  uStack_360 = uStack_580;
  uStack_35c = uStack_57c;
  FUN_140692440(param_1 + 0xe8,&local_588);
  plVar3 = plStack_568;
  if (plStack_568 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_568 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_568)(plStack_568);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_568 + 8))(plStack_568,1);
      }
    }
  }
  puVar5 = (undefined4 *)param_1[0xfc];
  if (puVar5 == (undefined4 *)0x0) {
    local_560 = *(undefined4 *)(param_1 + 0xf9);
    uStack_55c = *(undefined4 *)((longlong)param_1 + 0x7cc);
    uStack_558 = *(undefined4 *)(param_1 + 0xfa);
    uStack_554 = *(undefined4 *)((longlong)param_1 + 0x7d4);
  }
  else {
    local_560 = *puVar5;
    uStack_55c = puVar5[1];
    uStack_558 = puVar5[2];
    uStack_554 = puVar5[3];
  }
  local_550 = 0;
  local_548 = 0;
  plStack_540 = (longlong *)0x0;
  local_358 = local_560;
  uStack_354 = uStack_55c;
  uStack_350 = uStack_558;
  uStack_34c = uStack_554;
  FUN_140692440(param_1 + 0xf9,&local_560);
  plVar3 = plStack_540;
  if (plStack_540 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_540 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_540)(plStack_540);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_540 + 8))(plStack_540,1);
      }
    }
  }
  puVar5 = (undefined4 *)param_1[0x10d];
  if (puVar5 == (undefined4 *)0x0) {
    local_538 = *(undefined4 *)(param_1 + 0x10a);
    uStack_534 = *(undefined4 *)((longlong)param_1 + 0x854);
    uStack_530 = *(undefined4 *)(param_1 + 0x10b);
    uStack_52c = *(undefined4 *)((longlong)param_1 + 0x85c);
  }
  else {
    local_538 = *puVar5;
    uStack_534 = puVar5[1];
    uStack_530 = puVar5[2];
    uStack_52c = puVar5[3];
  }
  local_528 = 0;
  local_520 = 0;
  plStack_518 = (longlong *)0x0;
  local_348 = local_538;
  uStack_344 = uStack_534;
  uStack_340 = uStack_530;
  uStack_33c = uStack_52c;
  FUN_140692440(param_1 + 0x10a,&local_538);
  plVar3 = plStack_518;
  if (plStack_518 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_518 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_518)(plStack_518);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_518 + 8))(plStack_518,1);
      }
    }
  }
  puVar5 = (undefined4 *)param_1[0x11e];
  if (puVar5 == (undefined4 *)0x0) {
    local_510 = *(undefined4 *)(param_1 + 0x11b);
    uStack_50c = *(undefined4 *)((longlong)param_1 + 0x8dc);
    uStack_508 = *(undefined4 *)(param_1 + 0x11c);
    uStack_504 = *(undefined4 *)((longlong)param_1 + 0x8e4);
  }
  else {
    local_510 = *puVar5;
    uStack_50c = puVar5[1];
    uStack_508 = puVar5[2];
    uStack_504 = puVar5[3];
  }
  local_500 = 0;
  local_4f8 = 0;
  plStack_4f0 = (longlong *)0x0;
  local_338 = local_510;
  uStack_334 = uStack_50c;
  uStack_330 = uStack_508;
  uStack_32c = uStack_504;
  FUN_140692440(param_1 + 0x11b,&local_510);
  plVar3 = plStack_4f0;
  if (plStack_4f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_4f0 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_4f0)(plStack_4f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_4f0 + 8))(plStack_4f0,1);
      }
    }
  }
  puVar5 = (undefined4 *)param_1[0x12f];
  if (puVar5 == (undefined4 *)0x0) {
    local_4e8 = *(undefined4 *)(param_1 + 300);
    uStack_4e4 = *(undefined4 *)((longlong)param_1 + 0x964);
    uStack_4e0 = *(undefined4 *)(param_1 + 0x12d);
    uStack_4dc = *(undefined4 *)((longlong)param_1 + 0x96c);
  }
  else {
    local_4e8 = *puVar5;
    uStack_4e4 = puVar5[1];
    uStack_4e0 = puVar5[2];
    uStack_4dc = puVar5[3];
  }
  local_4d8 = 0;
  local_4d0 = 0;
  plStack_4c8 = (longlong *)0x0;
  local_328 = local_4e8;
  uStack_324 = uStack_4e4;
  uStack_320 = uStack_4e0;
  uStack_31c = uStack_4dc;
  FUN_140692440(param_1 + 300,&local_4e8);
  plVar3 = plStack_4c8;
  if (plStack_4c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_4c8 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_4c8)(plStack_4c8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_4c8 + 8))(plStack_4c8,1);
      }
    }
  }
  puVar5 = (undefined4 *)param_1[0x13c];
  if (puVar5 == (undefined4 *)0x0) {
    local_4c0 = *(undefined4 *)(param_1 + 0x139);
    uStack_4bc = *(undefined4 *)((longlong)param_1 + 0x9cc);
    uStack_4b8 = *(undefined4 *)(param_1 + 0x13a);
    uStack_4b4 = *(undefined4 *)((longlong)param_1 + 0x9d4);
  }
  else {
    local_4c0 = *puVar5;
    uStack_4bc = puVar5[1];
    uStack_4b8 = puVar5[2];
    uStack_4b4 = puVar5[3];
  }
  local_4b0 = 0;
  local_4a8 = 0;
  plStack_4a0 = (longlong *)0x0;
  local_318 = local_4c0;
  uStack_314 = uStack_4bc;
  uStack_310 = uStack_4b8;
  uStack_30c = uStack_4b4;
  FUN_140692440(param_1 + 0x139,&local_4c0);
  plVar3 = plStack_4a0;
  if (plStack_4a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_4a0 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_4a0)(plStack_4a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_4a0 + 8))(plStack_4a0,1);
      }
    }
  }
  puVar5 = (undefined4 *)param_1[0x141];
  if (puVar5 == (undefined4 *)0x0) {
    local_498 = *(undefined4 *)(param_1 + 0x13e);
    uStack_494 = *(undefined4 *)((longlong)param_1 + 0x9f4);
    uStack_490 = *(undefined4 *)(param_1 + 0x13f);
    uStack_48c = *(undefined4 *)((longlong)param_1 + 0x9fc);
  }
  else {
    local_498 = *puVar5;
    uStack_494 = puVar5[1];
    uStack_490 = puVar5[2];
    uStack_48c = puVar5[3];
  }
  local_488 = 0;
  local_480 = 0;
  plStack_478 = (longlong *)0x0;
  local_308 = local_498;
  uStack_304 = uStack_494;
  uStack_300 = uStack_490;
  uStack_2fc = uStack_48c;
  FUN_140692440(param_1 + 0x13e,&local_498);
  plVar3 = plStack_478;
  if (plStack_478 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_478 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_478)(plStack_478);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_478 + 8))(plStack_478,1);
      }
    }
  }
  puVar5 = (undefined4 *)param_1[0x14a];
  if (puVar5 == (undefined4 *)0x0) {
    local_470 = *(undefined4 *)(param_1 + 0x147);
    uStack_46c = *(undefined4 *)((longlong)param_1 + 0xa3c);
    uStack_468 = *(undefined4 *)(param_1 + 0x148);
    uStack_464 = *(undefined4 *)((longlong)param_1 + 0xa44);
  }
  else {
    local_470 = *puVar5;
    uStack_46c = puVar5[1];
    uStack_468 = puVar5[2];
    uStack_464 = puVar5[3];
  }
  local_460 = 0;
  local_458 = 0;
  plStack_450 = (longlong *)0x0;
  local_2f8 = local_470;
  uStack_2f4 = uStack_46c;
  uStack_2f0 = uStack_468;
  uStack_2ec = uStack_464;
  FUN_140692440(param_1 + 0x147,&local_470);
  plVar3 = plStack_450;
  if (plStack_450 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_450 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_450)(plStack_450);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_450 + 8))(plStack_450,1);
      }
    }
  }
  puVar5 = (undefined4 *)param_1[0x15b];
  if (puVar5 == (undefined4 *)0x0) {
    local_448 = *(undefined4 *)(param_1 + 0x158);
    uStack_444 = *(undefined4 *)((longlong)param_1 + 0xac4);
    uStack_440 = *(undefined4 *)(param_1 + 0x159);
    uStack_43c = *(undefined4 *)((longlong)param_1 + 0xacc);
  }
  else {
    local_448 = *puVar5;
    uStack_444 = puVar5[1];
    uStack_440 = puVar5[2];
    uStack_43c = puVar5[3];
  }
  local_438 = 0;
  local_430 = 0;
  plStack_428 = (longlong *)0x0;
  local_2e8 = local_448;
  uStack_2e4 = uStack_444;
  uStack_2e0 = uStack_440;
  uStack_2dc = uStack_43c;
  FUN_140692440(param_1 + 0x158,&local_448);
  plVar3 = plStack_428;
  if (plStack_428 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_428 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_428)(plStack_428);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_428 + 8))(plStack_428,1);
      }
    }
  }
  puVar5 = (undefined4 *)param_1[0x16c];
  if (puVar5 == (undefined4 *)0x0) {
    local_420 = *(undefined4 *)(param_1 + 0x169);
    uStack_41c = *(undefined4 *)((longlong)param_1 + 0xb4c);
    uStack_418 = *(undefined4 *)(param_1 + 0x16a);
    uStack_414 = *(undefined4 *)((longlong)param_1 + 0xb54);
  }
  else {
    local_420 = *puVar5;
    uStack_41c = puVar5[1];
    uStack_418 = puVar5[2];
    uStack_414 = puVar5[3];
  }
  local_410 = 0;
  local_408 = 0;
  plStack_400 = (longlong *)0x0;
  local_2d8 = local_420;
  uStack_2d4 = uStack_41c;
  uStack_2d0 = uStack_418;
  uStack_2cc = uStack_414;
  FUN_140692440(param_1 + 0x169,&local_420);
  plVar3 = plStack_400;
  if (plStack_400 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_400 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_400)(plStack_400);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_400 + 8))(plStack_400,1);
      }
    }
  }
  local_3e8 = 0;
  local_3f8 = DAT_1464aa6e0;
  uStack_3f4 = DAT_1464aa6e4;
  uStack_3f0 = DAT_1464aa6e8;
  uStack_3ec = DAT_1464aa6ec;
  local_3e0 = 0;
  plStack_3d8 = (longlong *)0x0;
  FUN_140692440(param_1 + 0x183,&local_3f8);
  plVar3 = plStack_3d8;
  if (plStack_3d8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_3d8 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_3d8)(plStack_3d8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_3d8 + 8))(plStack_3d8,1);
      }
    }
  }
  pvVar10 = ThreadLocalStoragePointer;
  uVar12 = (ulonglong)_tls_index;
  *(undefined1 *)(param_1 + 0x188) = 1;
  *(undefined4 *)(param_1 + 0x176) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0xbb4) = 0x40000000;
  *(undefined4 *)(param_1 + 0x177) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0xbbc) = 0x40000000;
  lVar9 = *(longlong *)((longlong)pvVar10 + uVar12 * 8);
  *(undefined4 *)(param_1 + 0x178) = 0x43e10000;
  *(undefined2 *)((longlong)param_1 + 0xbc4) = 0x101;
  if (*(int *)(lVar9 + 0x38) < DAT_146ae7b40) {
    _Init_thread_header(&DAT_146ae7b40);
    if (DAT_146ae7b40 == -1) {
      local_638 = (undefined2 *)0x0;
      local_630 = 0x1b;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_638,0);
      FGenericPlatformString::Memcpy(local_638,L"/Engine/EngineFonts/Roboto",0x36);
      local_648 = &DAT_1468e2360;
      FConfigCacheIni::GetString(DAT_1468b6148,L"SlateStyle",L"DefaultFontName",&local_638);
      puVar13 = &DAT_143f3eda8;
      if ((int)local_630 != 0) {
        puVar13 = local_638;
      }
      FUN_1420ccb50(&DAT_146ae7b38,puVar13);
      if (local_638 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      _Init_thread_footer(&DAT_146ae7b40);
    }
  }
  local_3d0 = 0;
  local_3cc = 0;
  local_3c8 = 0;
  local_3c0 = DAT_1464aa6e0;
  uStack_3bc = DAT_1464aa6e4;
  uStack_3b8 = DAT_1464aa6e8;
  uStack_3b4 = DAT_1464aa6ec;
  uVar11 = FName::FName(local_3b0,&DAT_144f997f4,1);
  local_648 = (undefined8 *)&local_3d0;
  uVar11 = FSlateFontInfo::FSlateFontInfo(local_2c8,DAT_146ae7b38,0x10,uVar11);
  FUN_141925d20(param_1 + 0x179,uVar11);
  if (local_290 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_290 + 1;
    lVar9 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_290)(local_290);
      LOCK();
      piVar2 = (int *)((longlong)local_290 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_290 + 8))(local_290,1);
      }
    }
  }
  FUN_141965540(local_278);
  return param_1;
}



// FUNCTION 1420d1020 UContentWidget body=56 status=ok
// SIG undefined UContentWidget(void)

undefined8 * UContentWidget::UContentWidget(undefined8 *param_1)

{
  UWidget::UWidget();
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144fa02e0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  return param_1;
}



// FUNCTION 1420d1060 UDragDropOperation body=74 status=ok
// SIG undefined UDragDropOperation(void)

undefined8 * UDragDropOperation::UDragDropOperation(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__144fa1028;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 9) = 5;
  return param_1;
}



// FUNCTION 1420d10b0 UDynamicEntryBox body=129 status=ok
// SIG undefined UDynamicEntryBox(void)

undefined8 * UDynamicEntryBox::UDynamicEntryBox(undefined8 *param_1)

{
  UWidget::UWidget();
  *param_1 = &PTR_FUN_144fa57b8;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x124) = 1;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  FUserWidgetPool::FUserWidgetPool(param_1 + 0x29,param_1);
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) | 1;
  *(undefined1 *)((longlong)param_1 + 0xb7) = 4;
  *(undefined1 *)((longlong)param_1 + 0x124) = 0;
  return param_1;
}



// FUNCTION 1420d1140 FUN_1420d1140 body=1582 status=ok
// SIG undefined FUN_1420d1140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1420d1140(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  undefined1 auStack_578 [32];
  undefined8 *local_558;
  undefined2 *local_548;
  undefined8 local_540;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined1 local_528;
  undefined8 local_520;
  longlong *plStack_518;
  undefined4 local_510;
  undefined1 local_50c;
  undefined8 local_508;
  undefined4 local_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined1 local_4f0 [8];
  undefined1 local_4e8 [56];
  longlong *local_4b0;
  undefined1 local_498 [241];
  undefined1 local_3a7;
  undefined8 local_300;
  undefined1 local_1f0;
  longlong *local_1e8;
  int local_1e0;
  undefined1 local_1d8;
  longlong *local_1d0;
  int local_1c8;
  undefined1 local_1c0;
  longlong *local_1b8;
  int local_1b0;
  undefined1 local_1a8;
  longlong *local_1a0;
  int local_198;
  undefined1 local_190;
  longlong *local_188;
  int local_180;
  undefined1 local_178;
  longlong *local_170;
  int local_168;
  undefined1 local_148;
  longlong *local_140;
  int local_138;
  undefined4 local_f0;
  longlong *local_e8;
  int local_e0;
  undefined1 local_d8;
  longlong *local_d0;
  int local_c8;
  undefined1 local_58;
  longlong *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_578;
  UWidget::UWidget();
  *param_1 = &PTR_FUN_144fa5d60;
  FText::FText(param_1 + 0x20);
  FWeakObjectPtr::operator=(param_1 + 0x23,0);
  plVar9 = (longlong *)0x0;
  param_1[0x24] = 0;
  FText::FText(param_1 + 0x25);
  FWeakObjectPtr::operator=(param_1 + 0x28,0);
  param_1[0x29] = 0;
  FEditableTextStyle::FEditableTextStyle(param_1 + 0x2a);
  FUN_1417efd90(param_1 + 0x71);
  param_1[0x7b] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3e4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined1 *)((longlong)param_1 + 0x40f) = 0;
  *(byte *)((longlong)param_1 + 0x412) = *(byte *)((longlong)param_1 + 0x412) & 0xfc;
  *(undefined2 *)((longlong)param_1 + 0x413) = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  SEditableText::FArguments::FArguments(local_498);
  FEditableTextStyle::operator=(param_1 + 0x2a,local_300);
  local_528 = 0;
  local_538 = DAT_1464aa6e0;
  uStack_534 = DAT_1464aa6e4;
  uStack_530 = DAT_1464aa6e8;
  uStack_52c = DAT_1464aa6ec;
  local_520 = 0;
  plStack_518 = (longlong *)0x0;
  FUN_140692440(param_1 + 0x7b,&local_538);
  plVar7 = plStack_518;
  if (plStack_518 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_518 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_518)(plStack_518);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_518 + 8))(plStack_518,1);
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146ae7b50) && (_Init_thread_header(&DAT_146ae7b50), DAT_146ae7b50 == -1))
  {
    local_548 = (undefined2 *)0x0;
    local_540 = 0x1b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_548,0);
    FGenericPlatformString::Memcpy(local_548,L"/Engine/EngineFonts/Roboto",0x36);
    local_558 = &DAT_1468e2360;
    FConfigCacheIni::GetString(DAT_1468b6148,L"SlateStyle",L"DefaultFontName",&local_548);
    puVar8 = &DAT_143f3eda8;
    if ((int)local_540 != 0) {
      puVar8 = local_548;
    }
    FUN_1420ccb50(&DAT_146ae7b48,puVar8);
    if (local_548 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    _Init_thread_footer(&DAT_146ae7b50);
  }
  local_510 = 0;
  local_50c = 0;
  local_508 = 0;
  local_500 = DAT_1464aa6e0;
  uStack_4fc = DAT_1464aa6e4;
  uStack_4f8 = DAT_1464aa6e8;
  uStack_4f4 = DAT_1464aa6ec;
  uVar6 = FName::FName(local_4f0,&DAT_144f98928,1);
  local_558 = (undefined8 *)&local_510;
  uVar6 = FSlateFontInfo::FSlateFontInfo(local_4e8,DAT_146ae7b48,0xc,uVar6);
  FUN_141925d20(param_1 + 0x71,uVar6);
  if (local_4b0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_4b0 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_4b0)(local_4b0);
      LOCK();
      piVar2 = (int *)((longlong)local_4b0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_4b0 + 8))(local_4b0,1);
      }
    }
  }
  if (((local_1e0 != 0) && (local_1e8 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*local_1e8 + 0x18))(), cVar5 != '\0')) {
    plVar7 = plVar9;
    if (local_1e0 != 0) {
      plVar7 = local_1e8;
    }
    local_1f0 = (**(code **)(*plVar7 + 0x38))();
  }
  *(undefined1 *)(param_1 + 0x80) = local_1f0;
  if (((local_1c8 != 0) && (local_1d0 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*local_1d0 + 0x18))(), cVar5 != '\0')) {
    plVar7 = plVar9;
    if (local_1c8 != 0) {
      plVar7 = local_1d0;
    }
    local_1d8 = (**(code **)(*plVar7 + 0x38))();
  }
  *(undefined1 *)((longlong)param_1 + 0x401) = local_1d8;
  if (((local_e0 != 0) && (local_e8 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*local_e8 + 0x18))(), cVar5 != '\0')) {
    plVar7 = plVar9;
    if (local_e0 != 0) {
      plVar7 = local_e8;
    }
    local_f0 = (**(code **)(*plVar7 + 0x38))();
  }
  *(undefined4 *)((longlong)param_1 + 0x404) = local_f0;
  if (((local_1b0 != 0) && (local_1b8 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*local_1b8 + 0x18))(), cVar5 != '\0')) {
    plVar7 = plVar9;
    if (local_1b0 != 0) {
      plVar7 = local_1b8;
    }
    local_1c0 = (**(code **)(*plVar7 + 0x38))();
  }
  *(undefined1 *)(param_1 + 0x81) = local_1c0;
  if (((local_198 != 0) && (local_1a0 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*local_1a0 + 0x18))(), cVar5 != '\0')) {
    plVar7 = plVar9;
    if (local_198 != 0) {
      plVar7 = local_1a0;
    }
    local_1a8 = (**(code **)(*plVar7 + 0x38))();
  }
  *(undefined1 *)((longlong)param_1 + 0x409) = local_1a8;
  if (((local_180 != 0) && (local_188 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*local_188 + 0x18))(), cVar5 != '\0')) {
    plVar7 = plVar9;
    if (local_180 != 0) {
      plVar7 = local_188;
    }
    local_190 = (**(code **)(*plVar7 + 0x38))();
  }
  *(undefined1 *)((longlong)param_1 + 0x40a) = local_190;
  if (((local_168 != 0) && (local_170 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*local_170 + 0x18))(), cVar5 != '\0')) {
    plVar7 = plVar9;
    if (local_168 != 0) {
      plVar7 = local_170;
    }
    local_178 = (**(code **)(*plVar7 + 0x38))();
  }
  *(undefined1 *)((longlong)param_1 + 0x40b) = local_178;
  if (((local_c8 != 0) && (local_d0 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*local_d0 + 0x18))(), cVar5 != '\0')) {
    plVar7 = plVar9;
    if (local_c8 != 0) {
      plVar7 = local_d0;
    }
    local_d8 = (**(code **)(*plVar7 + 0x38))();
  }
  *(undefined1 *)((longlong)param_1 + 0x40c) = local_d8;
  if (((local_138 != 0) && (local_140 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*local_140 + 0x18))(), cVar5 != '\0')) {
    plVar7 = plVar9;
    if (local_138 != 0) {
      plVar7 = local_140;
    }
    local_148 = (**(code **)(*plVar7 + 0x38))();
  }
  *(undefined1 *)((longlong)param_1 + 0x40d) = local_148;
  if (((local_48 != 0) && (local_50 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*local_50 + 0x18))(), cVar5 != '\0')) {
    if (local_48 != 0) {
      plVar9 = local_50;
    }
    local_58 = (**(code **)(*plVar9 + 0x38))(plVar9);
  }
  *(undefined1 *)((longlong)param_1 + 0xb6) = local_3a7;
  *(undefined1 *)(param_1 + 0x82) = local_58;
  FUN_141923fa0(local_498);
  return param_1;
}



// FUNCTION 1420d1770 FUN_1420d1770 body=1584 status=ok
// SIG undefined FUN_1420d1770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1420d1770(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *pvVar7;
  char cVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  longlong *plVar13;
  undefined1 auStack_5a8 [32];
  undefined8 *local_588;
  undefined2 *local_578;
  undefined8 local_570;
  undefined4 local_568;
  undefined1 local_564;
  undefined8 local_560;
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined1 local_548 [8];
  undefined4 local_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined1 local_530 [56];
  longlong *local_4f8;
  undefined1 local_4d8 [264];
  undefined8 local_3d0;
  undefined1 local_250;
  longlong *local_248;
  int local_240;
  undefined1 local_238;
  longlong *local_230;
  int local_228;
  undefined1 local_220;
  longlong *local_218;
  int local_210;
  undefined1 local_208;
  longlong *local_200;
  int local_1f8;
  undefined1 local_1f0;
  longlong *local_1e8;
  int local_1e0;
  undefined1 local_1d8;
  longlong *local_1d0;
  int local_1c8;
  undefined1 local_1a8;
  longlong *local_1a0;
  int local_198;
  undefined4 local_160;
  longlong *local_158;
  int local_150;
  undefined1 local_148;
  longlong *local_140;
  int local_138;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  longlong *local_b8;
  int local_b0;
  undefined1 local_60;
  longlong *local_58;
  int local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_5a8;
  UWidget::UWidget();
  *param_1 = &PTR_FUN_144fa6030;
  FText::FText(param_1 + 0x20);
  FWeakObjectPtr::operator=(param_1 + 0x23,0);
  plVar13 = (longlong *)0x0;
  param_1[0x24] = 0;
  FEditableTextBoxStyle::FEditableTextBoxStyle(param_1 + 0x25);
  FText::FText(param_1 + 0x124);
  FWeakObjectPtr::operator=(param_1 + 0x127,0);
  param_1[0x128] = 0;
  FUN_1417efd90(param_1 + 0x129);
  pvVar7 = ThreadLocalStoragePointer;
  uVar10 = (ulonglong)_tls_index;
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  *(undefined1 *)((longlong)param_1 + 0x9e7) = 0;
  *(byte *)((longlong)param_1 + 0x9ea) = *(byte *)((longlong)param_1 + 0x9ea) & 0xfc;
  lVar3 = *(longlong *)((longlong)pvVar7 + uVar10 * 8);
  *(undefined2 *)((longlong)param_1 + 0x9eb) = 0;
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  uVar9 = CONCAT44(DAT_1464aa6ec,DAT_1464aa6e8);
  param_1[0x133] = CONCAT44(DAT_1464aa6e4,DAT_1464aa6e0);
  param_1[0x134] = uVar9;
  uVar6 = DAT_1464aa6cc;
  uVar5 = DAT_1464aa6c8;
  uVar4 = DAT_1464aa6c4;
  *(undefined4 *)(param_1 + 0x135) = DAT_1464aa6c0;
  *(undefined4 *)((longlong)param_1 + 0x9ac) = uVar4;
  *(undefined4 *)(param_1 + 0x136) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x9b4) = uVar6;
  uVar6 = DAT_1464aa6ec;
  uVar5 = DAT_1464aa6e8;
  uVar4 = DAT_1464aa6e4;
  *(undefined4 *)(param_1 + 0x137) = DAT_1464aa6e0;
  *(undefined4 *)((longlong)param_1 + 0x9bc) = uVar4;
  *(undefined4 *)(param_1 + 0x138) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x9c4) = uVar6;
  if ((*(int *)(lVar3 + 0x38) < DAT_146ae7b60) &&
     (_Init_thread_header(&DAT_146ae7b60), DAT_146ae7b60 == -1)) {
    local_578 = (undefined2 *)0x0;
    local_570 = 0x1b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_578,0);
    FGenericPlatformString::Memcpy(local_578,L"/Engine/EngineFonts/Roboto",0x36);
    local_588 = &DAT_1468e2360;
    FConfigCacheIni::GetString(DAT_1468b6148,L"SlateStyle",L"DefaultFontName",&local_578);
    puVar12 = &DAT_143f3eda8;
    if ((int)local_570 != 0) {
      puVar12 = local_578;
    }
    FUN_1420ccb50(&DAT_146ae7b58,puVar12);
    if (local_578 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    _Init_thread_footer(&DAT_146ae7b60);
  }
  local_568 = 0;
  local_564 = 0;
  local_560 = 0;
  local_558 = DAT_1464aa6e0;
  uStack_554 = DAT_1464aa6e4;
  uStack_550 = DAT_1464aa6e8;
  uStack_54c = DAT_1464aa6ec;
  uVar9 = FName::FName(local_548,&DAT_144f98db4,1);
  local_588 = (undefined8 *)&local_568;
  uVar9 = FSlateFontInfo::FSlateFontInfo(local_530,DAT_146ae7b58,0xc,uVar9);
  FUN_141925d20(param_1 + 0x129,uVar9);
  if (local_4f8 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_4f8 + 1;
    lVar3 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_4f8)(local_4f8);
      LOCK();
      piVar1 = (int *)((longlong)local_4f8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_4f8 + 8))(local_4f8,1);
      }
    }
  }
  FUN_1418ce820(local_4d8);
  if (((local_240 != 0) && (local_248 != (longlong *)0x0)) &&
     (cVar8 = (**(code **)(*local_248 + 0x18))(), cVar8 != '\0')) {
    plVar11 = plVar13;
    if (local_240 != 0) {
      plVar11 = local_248;
    }
    local_250 = (**(code **)(*plVar11 + 0x38))();
  }
  *(undefined1 *)(param_1 + 0x139) = local_250;
  if (((local_228 != 0) && (local_230 != (longlong *)0x0)) &&
     (cVar8 = (**(code **)(*local_230 + 0x18))(), cVar8 != '\0')) {
    plVar11 = plVar13;
    if (local_228 != 0) {
      plVar11 = local_230;
    }
    local_238 = (**(code **)(*plVar11 + 0x38))();
  }
  *(undefined1 *)((longlong)param_1 + 0x9c9) = local_238;
  if (((local_150 != 0) && (local_158 != (longlong *)0x0)) &&
     (cVar8 = (**(code **)(*local_158 + 0x18))(), cVar8 != '\0')) {
    plVar11 = plVar13;
    if (local_150 != 0) {
      plVar11 = local_158;
    }
    local_160 = (**(code **)(*plVar11 + 0x38))();
  }
  *(undefined4 *)((longlong)param_1 + 0x9cc) = local_160;
  if (((local_b0 != 0) && (local_b8 != (longlong *)0x0)) &&
     (cVar8 = (**(code **)(*local_b8 + 0x18))(), cVar8 != '\0')) {
    plVar11 = plVar13;
    if (local_b0 != 0) {
      plVar11 = local_b8;
    }
    (**(code **)(*plVar11 + 0x38))(plVar11,&local_540);
    local_d0 = local_540;
    uStack_cc = uStack_53c;
    uStack_c8 = uStack_538;
    uStack_c4 = uStack_534;
  }
  *(undefined4 *)(param_1 + 0x13a) = local_d0;
  *(undefined4 *)((longlong)param_1 + 0x9d4) = uStack_cc;
  *(undefined4 *)(param_1 + 0x13b) = uStack_c8;
  *(undefined4 *)((longlong)param_1 + 0x9dc) = uStack_c4;
  if (((local_210 != 0) && (local_218 != (longlong *)0x0)) &&
     (cVar8 = (**(code **)(*local_218 + 0x18))(), cVar8 != '\0')) {
    plVar11 = plVar13;
    if (local_210 != 0) {
      plVar11 = local_218;
    }
    local_220 = (**(code **)(*plVar11 + 0x38))();
  }
  *(undefined1 *)(param_1 + 0x13c) = local_220;
  if (((local_1f8 != 0) && (local_200 != (longlong *)0x0)) &&
     (cVar8 = (**(code **)(*local_200 + 0x18))(), cVar8 != '\0')) {
    plVar11 = plVar13;
    if (local_1f8 != 0) {
      plVar11 = local_200;
    }
    local_208 = (**(code **)(*plVar11 + 0x38))();
  }
  *(undefined1 *)((longlong)param_1 + 0x9e1) = local_208;
  if (((local_1e0 != 0) && (local_1e8 != (longlong *)0x0)) &&
     (cVar8 = (**(code **)(*local_1e8 + 0x18))(), cVar8 != '\0')) {
    plVar11 = plVar13;
    if (local_1e0 != 0) {
      plVar11 = local_1e8;
    }
    local_1f0 = (**(code **)(*plVar11 + 0x38))();
  }
  *(undefined1 *)((longlong)param_1 + 0x9e2) = local_1f0;
  if (((local_1c8 != 0) && (local_1d0 != (longlong *)0x0)) &&
     (cVar8 = (**(code **)(*local_1d0 + 0x18))(), cVar8 != '\0')) {
    plVar11 = plVar13;
    if (local_1c8 != 0) {
      plVar11 = local_1d0;
    }
    local_1d8 = (**(code **)(*plVar11 + 0x38))();
  }
  *(undefined1 *)((longlong)param_1 + 0x9e3) = local_1d8;
  if (((local_138 != 0) && (local_140 != (longlong *)0x0)) &&
     (cVar8 = (**(code **)(*local_140 + 0x18))(), cVar8 != '\0')) {
    plVar11 = plVar13;
    if (local_138 != 0) {
      plVar11 = local_140;
    }
    local_148 = (**(code **)(*plVar11 + 0x38))();
  }
  *(undefined1 *)((longlong)param_1 + 0x9e4) = local_148;
  if (((local_198 != 0) && (local_1a0 != (longlong *)0x0)) &&
     (cVar8 = (**(code **)(*local_1a0 + 0x18))(), cVar8 != '\0')) {
    plVar11 = plVar13;
    if (local_198 != 0) {
      plVar11 = local_1a0;
    }
    local_1a8 = (**(code **)(*plVar11 + 0x38))();
  }
  *(undefined1 *)((longlong)param_1 + 0x9e5) = local_1a8;
  if (((local_50 != 0) && (local_58 != (longlong *)0x0)) &&
     (cVar8 = (**(code **)(*local_58 + 0x18))(), cVar8 != '\0')) {
    if (local_50 != 0) {
      plVar13 = local_58;
    }
    local_60 = (**(code **)(*plVar13 + 0x38))(plVar13);
  }
  *(undefined1 *)(param_1 + 0x13d) = local_60;
  FEditableTextBoxStyle::operator=(param_1 + 0x25,local_3d0);
  FUN_1418d2030(local_4d8);
  return param_1;
}



// FUNCTION 1420d1da0 FUN_1420d1da0 body=917 status=ok
// SIG undefined FUN_1420d1da0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1420d1da0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined1 auStack_3d8 [32];
  undefined8 local_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined1 local_398;
  undefined8 local_390;
  longlong *plStack_388;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined1 local_370 [32];
  longlong *local_350;
  undefined1 local_348 [264];
  longlong local_240;
  undefined4 local_238 [10];
  char local_210;
  longlong *local_208;
  int local_200;
  undefined8 local_1f8;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  longlong *local_108;
  int local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e0;
  int local_d8;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_3d8;
  UWidget::UWidget();
  *param_1 = &PTR_FUN_144fa6310;
  param_1[0x20] = &PTR_LAB_144fa65e0;
  FExpandableAreaStyle::FExpandableAreaStyle(param_1 + 0x21);
  plVar9 = (longlong *)0x0;
  param_1[0x45] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x46) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  uVar4 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
  param_1[0x49] = CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
  param_1[0x4a] = uVar4;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  local_3b8 = DAT_1468b5d88;
  uVar10 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x51) = uVar10;
  *(undefined4 *)(param_1 + 0x50) = uVar10;
  *(undefined1 *)(param_1 + 0x52) = 0;
  uVar4 = local_3b8;
  local_3b8._4_4_ = (undefined4)((ulonglong)local_3b8 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x28c) = local_3b8._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x284) = local_3b8._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x294) = 3;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) & 0xfc;
  param_1[0x56] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x57) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 700) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x58) = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x60] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x61] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) | 1;
  local_3b8 = uVar4;
  FUN_1419c01d0(local_348);
  FUN_1406922e0(param_1 + 0x22,local_240 + 8);
  FUN_1406922e0(param_1 + 0x33,local_240 + 0x90);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(local_240 + 0x118);
  local_398 = 0;
  local_390 = 0;
  plStack_388 = (longlong *)0x0;
  local_3a8 = DAT_1464aa6c0;
  uStack_3a4 = DAT_1464aa6c4;
  uStack_3a0 = DAT_1464aa6c8;
  uStack_39c = DAT_1464aa6cc;
  if (local_210 == '\0') {
    puVar8 = &local_3a8;
  }
  else {
    if (((local_200 != 0) && (local_208 != (longlong *)0x0)) &&
       (cVar6 = (**(code **)(*local_208 + 0x18))(), cVar6 != '\0')) {
      plVar7 = plVar9;
      if (local_200 != 0) {
        plVar7 = local_208;
      }
      (**(code **)(*plVar7 + 0x38))(plVar7,local_370);
      FUN_140692440(local_238,local_370);
      if (local_350 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_350 + 1;
        lVar5 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_350)(local_350);
          LOCK();
          piVar1 = (int *)((longlong)local_350 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_350 + 8))(local_350,1);
          }
        }
      }
    }
    puVar8 = local_238;
  }
  FUN_140692440(param_1 + 0x56,puVar8);
  plVar7 = plStack_388;
  if (plStack_388 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_388 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_388)(plStack_388);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_388 + 8))(plStack_388,1);
      }
    }
  }
  FUN_1406922e0(param_1 + 0x45,local_1f8);
  if (((local_d8 != 0) && (local_e0 != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(*local_e0 + 0x18))(), cVar6 != '\0')) {
    plVar7 = plVar9;
    if (local_d8 != 0) {
      plVar7 = local_e0;
    }
    (**(code **)(*plVar7 + 0x38))(plVar7,&local_3b8);
    local_f8 = (undefined4)local_3b8;
    uStack_f4 = local_3b8._4_4_;
    uStack_f0 = uStack_3b0;
    uStack_ec = uStack_3ac;
  }
  *(undefined4 *)(param_1 + 0x5e) = local_f8;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = uStack_f4;
  *(undefined4 *)(param_1 + 0x5f) = uStack_f0;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = uStack_ec;
  if (((local_100 != 0) && (local_108 != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(*local_108 + 0x18))(), cVar6 != '\0')) {
    if (local_100 != 0) {
      plVar9 = local_108;
    }
    (**(code **)(*plVar9 + 0x38))(plVar9,&local_380);
    local_120 = local_380;
    uStack_11c = uStack_37c;
    uStack_118 = uStack_378;
    uStack_114 = uStack_374;
  }
  *(undefined4 *)(param_1 + 0x5c) = local_120;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_11c;
  *(undefined4 *)(param_1 + 0x5d) = uStack_118;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = uStack_114;
  SExpandableArea::FArguments::~FArguments(local_348);
  return param_1;
}



// FUNCTION 1420d2140 FUN_1420d2140 body=74 status=ok
// SIG undefined FUN_1420d2140(void)

undefined8 * FUN_1420d2140(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR__scalar_deleting_destructor__144fa0878;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  FCachedPropertyPath::FCachedPropertyPath(param_1 + 6);
  param_1[0xb] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144fa17e8;
  return param_1;
}



// FUNCTION 1420d2190 FUN_1420d2190 body=324 status=ok
// SIG undefined FUN_1420d2190(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1420d2190(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_188 [32];
  char local_168 [16];
  undefined1 local_158 [120];
  char local_e0;
  longlong *local_d8;
  int local_d0;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  UWidget::UWidget();
  plVar3 = (longlong *)0x0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 1;
  *param_1 = &PTR_FUN_144fa6608;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) & 0xfe;
  SGridPanel::FArguments::FArguments(local_158);
  if (((local_d0 != 0) && (local_d8 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*local_d8 + 0x18))(), cVar1 != '\0')) {
    plVar2 = plVar3;
    if (local_d0 != 0) {
      plVar2 = local_d8;
    }
    (**(code **)(*plVar2 + 0x38))(plVar2,local_168);
    local_e0 = local_168[0];
  }
  if (local_e0 != DAT_1464b9ee8) {
    if (local_e0 == DAT_1464b9ee9) {
      plVar3 = (longlong *)0x1;
    }
    else if (local_e0 == DAT_1464b9eea) {
      plVar3 = (longlong *)0x2;
    }
    else if (local_e0 == DAT_1464b9eeb) {
      plVar3 = (longlong *)0x3;
    }
    else if (local_e0 == DAT_1464b9eec) {
      plVar3 = (longlong *)&DAT_00000004;
    }
  }
  *(char *)((longlong)param_1 + 0xb7) = (char)plVar3;
  SGridPanel::FArguments::~FArguments(local_158);
  return param_1;
}



// FUNCTION 1420d22e0 UGridSlot body=58 status=ok
// SIG undefined UGridSlot(void)

undefined8 * UGridSlot::UGridSlot(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_144fa68f0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  return param_1;
}



// FUNCTION 1420d2320 FUN_1420d2320 body=314 status=ok
// SIG undefined FUN_1420d2320(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1420d2320(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_168 [32];
  char local_148 [16];
  undefined1 local_138 [120];
  char local_c0;
  longlong *local_b8;
  int local_b0;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  UWidget::UWidget();
  plVar3 = (longlong *)0x0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 1;
  *param_1 = &PTR_FUN_144fa6b78;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) & 0xfe;
  SCanvas::FArguments::FArguments(local_138);
  if (((local_b0 != 0) && (local_b8 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*local_b8 + 0x18))(), cVar1 != '\0')) {
    plVar2 = plVar3;
    if (local_b0 != 0) {
      plVar2 = local_b8;
    }
    (**(code **)(*plVar2 + 0x38))(plVar2,local_148);
    local_c0 = local_148[0];
  }
  if (local_c0 != DAT_1464b9ee8) {
    if (local_c0 == DAT_1464b9ee9) {
      plVar3 = (longlong *)0x1;
    }
    else if (local_c0 == DAT_1464b9eea) {
      plVar3 = (longlong *)0x2;
    }
    else if (local_c0 == DAT_1464b9eeb) {
      plVar3 = (longlong *)0x3;
    }
    else if (local_c0 == DAT_1464b9eec) {
      plVar3 = (longlong *)&DAT_00000004;
    }
  }
  *(char *)((longlong)param_1 + 0xb7) = (char)plVar3;
  if (local_30 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_138);
  return param_1;
}



// FUNCTION 1420d2460 UHorizontalBoxSlot body=61 status=ok
// SIG undefined UHorizontalBoxSlot(void)

undefined8 * UHorizontalBoxSlot::UHorizontalBoxSlot(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_144fa6e60;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  return param_1;
}



// FUNCTION 1420d24a0 FUN_1420d24a0 body=332 status=ok
// SIG undefined FUN_1420d24a0(void)

undefined8 * FUN_1420d24a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStackX_c;
  
  UWidget::UWidget();
  *param_1 = &PTR_FUN_144fa70e8;
  param_1[0x20] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x21) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  uVar1 = CONCAT44(DAT_1464aa6cc,DAT_1464aa6c8);
  param_1[0x24] = CONCAT44(DAT_1464aa6c4,DAT_1464aa6c0);
  param_1[0x25] = uVar1;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  uVar1 = DAT_1468b5d88;
  uVar4 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  *(undefined4 *)(param_1 + 0x2b) = uVar4;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  uStackX_c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x164) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x15c) = uStackX_c;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 3;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfc;
  FWeakObjectPtr::operator=(param_1 + 0x31,0);
  param_1[0x32] = 0;
  uVar3 = DAT_1464aa6cc;
  uVar2 = DAT_1464aa6c8;
  uVar4 = DAT_1464aa6c4;
  *(undefined4 *)(param_1 + 0x33) = DAT_1464aa6c0;
  *(undefined4 *)((longlong)param_1 + 0x19c) = uVar4;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = uVar3;
  FWeakObjectPtr::operator=(param_1 + 0x35,0);
  param_1[0x36] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x37,0);
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  return param_1;
}



// FUNCTION 1420d25f0 FUN_1420d25f0 body=1022 status=ok
// SIG undefined FUN_1420d25f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1420d25f0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  undefined1 auStack_378 [32];
  undefined8 *local_358;
  undefined2 *local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined1 local_334;
  undefined8 local_330;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined1 local_318 [8];
  undefined1 local_310 [16];
  longlong *local_300;
  uint local_2f8;
  undefined1 local_2f0 [56];
  longlong *local_2b8;
  undefined1 local_298 [264];
  undefined1 local_190 [24];
  uint local_178;
  longlong *local_168;
  int local_160;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [24];
  undefined1 local_a0 [24];
  undefined1 local_88;
  undefined1 local_87;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_378;
  UWidget::UWidget();
  *param_1 = &PTR__scalar_deleting_destructor__144fa73b8;
  FUN_1417e8800(param_1 + 0x20);
  FUN_1417f2e90(param_1 + 0x6f);
  param_1[0xab] = DAT_1469eae28;
  param_1[0xac] = DAT_1469eae30;
  lVar3 = DAT_1469eae38;
  param_1[0xad] = DAT_1469eae38;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(uint *)(param_1 + 0xae) = *(uint *)(param_1 + 0xae) & 0xfffffff0;
  FUN_1417efd90(param_1 + 0xaf);
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  FText::FText(param_1 + 0xbd);
  FText::FText(param_1 + 0xc0);
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  FUN_1420cda70(local_298);
  FButtonStyle::operator=(param_1 + 0x20,local_c8);
  FTextBlockStyle::operator=(param_1 + 0x6f,local_c0);
  FText::operator=(param_1 + 0xbd,local_b8);
  FText::operator=(param_1 + 0xc0,local_a0);
  if ((local_160 != 0) && (local_168 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*local_168 + 0x18))();
    if (cVar4 != '\0') {
      plVar6 = (longlong *)0x0;
      if (local_160 != 0) {
        plVar6 = local_168;
      }
      (**(code **)(*plVar6 + 0x38))(plVar6,local_310);
      FKey::operator=(local_190,local_310);
      local_178 = local_178 ^ (local_178 ^ local_2f8) & 0xf;
      if (local_300 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_300 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
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
    }
  }
  FKey::operator=(param_1 + 0xab,local_190);
  *(uint *)(param_1 + 0xae) = *(uint *)(param_1 + 0xae) & 0xfffffff0;
  *(uint *)(param_1 + 0xae) = *(uint *)(param_1 + 0xae) | local_178 & 0xf;
  *(undefined1 *)(param_1 + 0xc3) = local_88;
  *(undefined1 *)((longlong)param_1 + 0x619) = local_87;
  TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>
            (param_1 + 0xc4,&DAT_1469ea4e0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146ae7b70) {
    _Init_thread_header(&DAT_146ae7b70);
    if (DAT_146ae7b70 == -1) {
      local_348 = (undefined2 *)0x0;
      local_340 = 0x1b;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_348,0);
      FGenericPlatformString::Memcpy(local_348,L"/Engine/EngineFonts/Roboto",0x36);
      local_358 = &DAT_1468e2360;
      FConfigCacheIni::GetString(DAT_1468b6148,L"SlateStyle",L"DefaultFontName",&local_348);
      puVar7 = &DAT_143f3eda8;
      if ((int)local_340 != 0) {
        puVar7 = local_348;
      }
      FUN_1420ccb50(&DAT_146ae7b68,puVar7);
      if (local_348 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      _Init_thread_footer(&DAT_146ae7b70);
    }
  }
  local_338 = 0;
  local_334 = 0;
  local_330 = 0;
  local_328 = DAT_1464aa6e0;
  uStack_324 = DAT_1464aa6e4;
  uStack_320 = DAT_1464aa6e8;
  uStack_31c = DAT_1464aa6ec;
  uVar5 = FName::FName(local_318,&DAT_144f98748,1);
  local_358 = (undefined8 *)&local_338;
  uVar5 = FSlateFontInfo::FSlateFontInfo(local_2f0,DAT_146ae7b68,0x18,uVar5);
  FUN_141925d20(param_1 + 0x70,uVar5);
  if (local_2b8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_2b8 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_2b8)(local_2b8);
      LOCK();
      piVar1 = (int *)((longlong)local_2b8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_2b8 + 8))(local_2b8,1);
      }
    }
  }
  FUN_1420d7c00(local_298);
  return param_1;
}



// FUNCTION 1420d29f0 FUN_1420d29f0 body=74 status=ok
// SIG undefined FUN_1420d29f0(void)

undefined8 * FUN_1420d29f0(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR__scalar_deleting_destructor__144fa0878;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  FCachedPropertyPath::FCachedPropertyPath(param_1 + 6);
  param_1[0xb] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144fa1a78;
  return param_1;
}



// FUNCTION 1420d2a40 UInvalidationBox body=83 status=ok
// SIG undefined UInvalidationBox(void)

undefined8 * UInvalidationBox::UInvalidationBox(undefined8 *param_1)

{
  UWidget::UWidget();
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *param_1 = &PTR_FUN_144fa7920;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x23) = 1;
  *(undefined1 *)((longlong)param_1 + 0xb7) = 4;
  return param_1;
}



// FUNCTION 1420d2aa0 FUN_1420d2aa0 body=480 status=ok
// SIG undefined FUN_1420d2aa0(void)

undefined8 * FUN_1420d2aa0(undefined8 *param_1)

{
  UWidget::UWidget();
  *param_1 = &PTR__scalar_deleting_destructor__144fa7c08;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  FUserWidgetPool::FUserWidgetPool(param_1 + 0x25,param_1);
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 2;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 2;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) | 1;
  *param_1 = &PTR_FUN_144fa7ef0;
  param_1[0x41] = &PTR_GetAddress_144fa81d8;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 2;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 2;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 2;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 2;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 2;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 2;
  *(undefined2 *)(param_1 + 0x54) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2a2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  return param_1;
}



// FUNCTION 1420d2c80 UListViewBase body=186 status=ok
// SIG undefined UListViewBase(void)

undefined8 * UListViewBase::UListViewBase(undefined8 *param_1)

{
  UWidget::UWidget();
  *param_1 = &PTR__scalar_deleting_destructor__144fa7c08;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  FUserWidgetPool::FUserWidgetPool(param_1 + 0x25,param_1);
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 2;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 2;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) | 1;
  return param_1;
}



// FUNCTION 1420d2d40 UMenuAnchor body=147 status=ok
// SIG undefined UMenuAnchor(void)

undefined8 * UMenuAnchor::UMenuAnchor(undefined8 *param_1)

{
  UWidget::UWidget();
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *param_1 = &PTR_FUN_144fa8250;
  param_1[0x23] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x24,0);
  param_1[0x25] = 0;
  *(undefined2 *)((longlong)param_1 + 0x131) = 0x101;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x26) = 3;
  return param_1;
}



// FUNCTION 1420d2de0 FUN_1420d2de0 body=74 status=ok
// SIG undefined FUN_1420d2de0(void)

undefined8 * FUN_1420d2de0(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR__scalar_deleting_destructor__144fa0878;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  FCachedPropertyPath::FCachedPropertyPath(param_1 + 6);
  param_1[0xb] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144fa1d08;
  return param_1;
}



// FUNCTION 1420d2e30 UMovieScene2DTransformSection body=699 status=ok
// SIG undefined UMovieScene2DTransformSection(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * UMovieScene2DTransformSection::UMovieScene2DTransformSection(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  UMovieSceneSection::UMovieSceneSection();
  *param_1 = &PTR_FUN_144f9d8c0;
  puVar4 = param_1 + 0x1d;
  lVar5 = 2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  lVar3 = (longlong)param_1 + 0x15c;
  lVar6 = 2;
  do {
    *puVar4 = &PTR__scalar_deleting_destructor__144f23580;
    puVar4 = puVar4 + 0x14;
    *(undefined2 *)(lVar3 + -0x6c) = 0x404;
    *(undefined8 *)(lVar3 + -100) = 0;
    *(undefined8 *)(lVar3 + -0x5c) = 0;
    *(undefined8 *)(lVar3 + -0x54) = 0;
    *(undefined8 *)(lVar3 + -0x4c) = 0;
    *(undefined4 *)(lVar3 + -0x44) = 0;
    *(undefined1 *)(lVar3 + -0x40) = 0;
    *(undefined8 *)(lVar3 + -0x3c) = 0;
    *(undefined8 *)(lVar3 + -0x34) = 0;
    *(undefined8 *)(lVar3 + -0x2c) = 0;
    *(undefined8 *)(lVar3 + -0x24) = 0;
    *(undefined8 *)(lVar3 + -0xc) = 0;
    *(undefined8 *)(lVar3 + -4) = 0;
    *(undefined4 *)(lVar3 + 4) = 0xffffffff;
    *(undefined4 *)(lVar3 + 8) = 0;
    *(undefined8 *)(lVar3 + 0x14) = 0;
    *(undefined4 *)(lVar3 + 0x1c) = 0;
    *(undefined4 *)(lVar3 + 0x24) = 60000;
    *(undefined4 *)(lVar3 + 0x28) = 1;
    lVar3 = lVar3 + 0xa0;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  param_1[0x45] = &PTR__scalar_deleting_destructor__144f23580;
  puVar4 = param_1 + 0x59;
  *(undefined2 *)(param_1 + 0x46) = 0x404;
  lVar3 = (longlong)param_1 + 0x33c;
  param_1[0x47] = 0;
  lVar6 = 2;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x25c) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  *(undefined4 *)(param_1 + 0x58) = 60000;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 1;
  do {
    *puVar4 = &PTR__scalar_deleting_destructor__144f23580;
    puVar4 = puVar4 + 0x14;
    *(undefined2 *)(lVar3 + -0x6c) = 0x404;
    *(undefined8 *)(lVar3 + -100) = 0;
    *(undefined8 *)(lVar3 + -0x5c) = 0;
    *(undefined8 *)(lVar3 + -0x54) = 0;
    *(undefined8 *)(lVar3 + -0x4c) = 0;
    *(undefined4 *)(lVar3 + -0x44) = 0;
    *(undefined1 *)(lVar3 + -0x40) = 0;
    *(undefined8 *)(lVar3 + -0x3c) = 0;
    *(undefined8 *)(lVar3 + -0x34) = 0;
    *(undefined8 *)(lVar3 + -0x2c) = 0;
    *(undefined8 *)(lVar3 + -0x24) = 0;
    *(undefined8 *)(lVar3 + -0xc) = 0;
    *(undefined8 *)(lVar3 + -4) = 0;
    *(undefined4 *)(lVar3 + 4) = 0xffffffff;
    *(undefined4 *)(lVar3 + 8) = 0;
    *(undefined8 *)(lVar3 + 0x14) = 0;
    *(undefined4 *)(lVar3 + 0x1c) = 0;
    *(undefined4 *)(lVar3 + 0x24) = 60000;
    *(undefined4 *)(lVar3 + 0x28) = 1;
    lVar3 = lVar3 + 0xa0;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  puVar4 = param_1 + 0x81;
  lVar3 = (longlong)param_1 + 0x47c;
  do {
    *puVar4 = &PTR__scalar_deleting_destructor__144f23580;
    puVar4 = puVar4 + 0x14;
    *(undefined2 *)(lVar3 + -0x6c) = 0x404;
    *(undefined8 *)(lVar3 + -100) = 0;
    *(undefined8 *)(lVar3 + -0x5c) = 0;
    *(undefined8 *)(lVar3 + -0x54) = 0;
    *(undefined8 *)(lVar3 + -0x4c) = 0;
    *(undefined4 *)(lVar3 + -0x44) = 0;
    *(undefined1 *)(lVar3 + -0x40) = 0;
    *(undefined8 *)(lVar3 + -0x3c) = 0;
    *(undefined8 *)(lVar3 + -0x34) = 0;
    *(undefined8 *)(lVar3 + -0x2c) = 0;
    *(undefined8 *)(lVar3 + -0x24) = 0;
    *(undefined8 *)(lVar3 + -0xc) = 0;
    *(undefined8 *)(lVar3 + -4) = 0;
    *(undefined4 *)(lVar3 + 4) = 0xffffffff;
    *(undefined4 *)(lVar3 + 8) = 0;
    *(undefined8 *)(lVar3 + 0x14) = 0;
    *(undefined4 *)(lVar3 + 0x1c) = 0;
    *(undefined4 *)(lVar3 + 0x24) = 60000;
    *(undefined4 *)(lVar3 + 0x28) = 1;
    lVar3 = lVar3 + 0xa0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  local_18 = _DAT_1464b00f8;
  uStack_14 = uRam00000001464b00fc;
  uStack_10 = uRam00000001464b0100;
  uStack_c = uRam00000001464b0104;
  iVar2 = UObjectBaseUtility::GetLinkerCustomVersion(param_1,&local_18);
  if (iVar2 < 4) {
    cVar1 = '\0';
  }
  else {
    local_18 = _DAT_1464b00f8;
    uStack_14 = uRam00000001464b00fc;
    uStack_10 = uRam00000001464b0100;
    uStack_c = uRam00000001464b0104;
    iVar2 = UObjectBaseUtility::GetLinkerCustomVersion(param_1,&local_18);
    cVar1 = (5 < iVar2) + '\x01';
  }
  *(undefined1 *)(param_1 + 10) = 1;
  *(char *)((longlong)param_1 + 0x51) = cVar1;
  *(undefined4 *)(param_1 + 0xa9) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x7f;
  *(undefined2 *)((longlong)param_1 + 0xc9) = 0x101;
  *(undefined1 *)(param_1 + 0x19) = 1;
  FUN_142142a30(param_1);
  return param_1;
}



// FUNCTION 1420d30f0 FUN_1420d30f0 body=53 status=ok
// SIG undefined FUN_1420d30f0(void)

undefined8 * FUN_1420d30f0(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 local_res8 [32];
  
  UMovieScenePropertyTrack::UMovieScenePropertyTrack();
  *(uint *)(param_1 + 10) = *(uint *)(param_1 + 10) | 0x11;
  *param_1 = &PTR__scalar_deleting_destructor__144f9dbf8;
  puVar1 = (undefined1 *)FMovieSceneBlendTypeField::All(local_res8);
  *(undefined1 *)((longlong)param_1 + 0x54) = *puVar1;
  return param_1;
}



// FUNCTION 1420d3130 FUN_1420d3130 body=939 status=ok
// SIG undefined FUN_1420d3130(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1420d3130(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined1 local_58 [24];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  UMovieSceneSection::UMovieSceneSection();
  plVar6 = (longlong *)0x0;
  *param_1 = &PTR_FUN_144f9df10;
  param_1[0x1c] = &PTR__scalar_deleting_destructor__144f23580;
  *(undefined2 *)(param_1 + 0x1d) = 0x404;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 60000;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 1;
  param_1[0x30] = &PTR__scalar_deleting_destructor__144f23580;
  *(undefined2 *)(param_1 + 0x31) = 0x404;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)(param_1 + 0x43) = 60000;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 1;
  param_1[0x44] = &PTR__scalar_deleting_destructor__144f23580;
  *(undefined2 *)(param_1 + 0x45) = 0x404;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x254) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  *(undefined4 *)(param_1 + 0x57) = 60000;
  *(undefined4 *)((longlong)param_1 + 700) = 1;
  param_1[0x58] = &PTR__scalar_deleting_destructor__144f23580;
  *(undefined2 *)(param_1 + 0x59) = 0x404;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2f4) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)(param_1 + 0x6b) = 60000;
  *(undefined4 *)((longlong)param_1 + 0x35c) = 1;
  *(undefined2 *)((longlong)param_1 + 0xc9) = 0x101;
  *(undefined1 *)(param_1 + 0x19) = 1;
  local_40 = 0;
  local_38 = 0;
  FUN_141fc6750(local_58);
  FUN_141fc6750(local_58,param_1 + 0x1c);
  FUN_141fc6750(local_58,param_1 + 0x44);
  FUN_141fc6750(local_58,param_1 + 0x58);
  plVar5 = (longlong *)operator_new(0x48);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_144f1c890;
    plVar5[2] = 0;
    plVar5[3] = 0;
    plVar5[7] = 0;
    if (local_40 == 0) {
      _guard_xfg_dispatch_icall_nop(plVar5 + 4,local_58,0x18);
    }
    if (plVar5[7] != 0) {
      FMemory::Free();
    }
    plVar5[7] = local_40;
    local_40 = 0;
    *(undefined4 *)(plVar5 + 8) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar5 + 0x44) = local_38._4_4_;
    local_38 = 0;
    plVar6 = plVar5;
  }
  plVar5 = plVar6 + 2;
  local_68 = plVar5;
  local_60 = plVar6;
  TSharedRef<FStringTable,1>::Init<FStringTable>(&local_68,plVar5);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_78 = plVar5;
  local_70 = plVar6;
  if ((longlong **)(param_1 + 0x1a) != &local_78) {
    param_1[0x1a] = plVar5;
    local_78 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x1b,&local_70);
  }
  plVar5 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  TArray<FMovieSceneChannelEntry,TInlineAllocator<1,FDefaultAllocator>_>::
  ~TArray<FMovieSceneChannelEntry,TInlineAllocator<1,FDefaultAllocator>_>(local_58);
  return param_1;
}



// FUNCTION 1420d34e0 FUN_1420d34e0 body=53 status=ok
// SIG undefined FUN_1420d34e0(void)

undefined8 * FUN_1420d34e0(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 local_res8 [32];
  
  UMovieScenePropertyTrack::UMovieScenePropertyTrack();
  *(uint *)(param_1 + 10) = *(uint *)(param_1 + 10) | 0x11;
  *param_1 = &PTR__scalar_deleting_destructor__144f9e248;
  puVar1 = (undefined1 *)FMovieSceneBlendTypeField::All(local_res8);
  *(undefined1 *)((longlong)param_1 + 0x54) = *puVar1;
  return param_1;
}



// FUNCTION 1420d3520 UMovieSceneWidgetMaterialTrack body=47 status=ok
// SIG undefined UMovieSceneWidgetMaterialTrack(void)

undefined8 * UMovieSceneWidgetMaterialTrack::UMovieSceneWidgetMaterialTrack(undefined8 *param_1)

{
  UMovieSceneMaterialTrack::UMovieSceneMaterialTrack();
  *param_1 = &PTR__scalar_deleting_destructor__144f9e5b0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  return param_1;
}



// FUNCTION 1420d3550 FUN_1420d3550 body=1274 status=ok
// SIG undefined FUN_1420d3550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1420d3550(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  undefined1 auStack_558 [32];
  undefined8 *local_538;
  undefined2 *local_528;
  undefined8 local_520;
  undefined4 local_518;
  undefined1 local_514;
  undefined8 local_510;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined1 local_4f8 [8];
  undefined1 local_4f0 [56];
  longlong *local_4b8;
  undefined1 local_498 [241];
  undefined1 local_3a7;
  undefined8 local_2a8;
  undefined1 local_1e0;
  longlong *local_1d8;
  int local_1d0;
  undefined1 local_160;
  longlong *local_158;
  int local_150;
  undefined1 local_148;
  longlong *local_140;
  int local_138;
  undefined1 local_130;
  longlong *local_128;
  int local_120;
  undefined1 local_118;
  longlong *local_110;
  int local_108;
  undefined1 local_100;
  longlong *local_f8;
  int local_f0;
  undefined1 local_48;
  longlong *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_558;
  UWidget::UWidget();
  plVar7 = (longlong *)0x0;
  *param_1 = &PTR_FUN_144fa5a90;
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfc;
  *(undefined4 *)((longlong)param_1 + 0x101) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(byte *)((longlong)param_1 + 0x105) = *(byte *)((longlong)param_1 + 0x105) & 0xfe;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3f800000;
  *param_1 = &PTR_FUN_144fa8538;
  FText::FText(param_1 + 0x24);
  FText::FText(param_1 + 0x27);
  FWeakObjectPtr::operator=(param_1 + 0x2a,0);
  param_1[0x2b] = 0;
  FUN_1417f2e90(param_1 + 0x2c);
  FUN_1417efd90(param_1 + 0x69);
  *(undefined1 *)((longlong)param_1 + 0x39d) = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  FUN_1419215b0(local_498);
  FTextBlockStyle::operator=(param_1 + 0x2c,local_2a8);
  if (((local_1d0 != 0) && (local_1d8 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*local_1d8 + 0x18))(), cVar4 != '\0')) {
    plVar6 = plVar7;
    if (local_1d0 != 0) {
      plVar6 = local_1d8;
    }
    local_1e0 = (**(code **)(*plVar6 + 0x38))();
  }
  *(undefined1 *)(param_1 + 0x68) = local_1e0;
  if (((local_150 != 0) && (local_158 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*local_158 + 0x18))(), cVar4 != '\0')) {
    plVar6 = plVar7;
    if (local_150 != 0) {
      plVar6 = local_158;
    }
    local_160 = (**(code **)(*plVar6 + 0x38))();
  }
  *(undefined1 *)(param_1 + 0x73) = local_160;
  if (((local_138 != 0) && (local_140 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*local_140 + 0x18))(), cVar4 != '\0')) {
    plVar6 = plVar7;
    if (local_138 != 0) {
      plVar6 = local_140;
    }
    local_148 = (**(code **)(*plVar6 + 0x38))();
  }
  *(undefined1 *)((longlong)param_1 + 0x399) = local_148;
  if (((local_120 != 0) && (local_128 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*local_128 + 0x18))(), cVar4 != '\0')) {
    plVar6 = plVar7;
    if (local_120 != 0) {
      plVar6 = local_128;
    }
    local_130 = (**(code **)(*plVar6 + 0x38))();
  }
  *(undefined1 *)((longlong)param_1 + 0x39a) = local_130;
  if (((local_108 != 0) && (local_110 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*local_110 + 0x18))(), cVar4 != '\0')) {
    plVar6 = plVar7;
    if (local_108 != 0) {
      plVar6 = local_110;
    }
    local_118 = (**(code **)(*plVar6 + 0x38))();
  }
  *(undefined1 *)((longlong)param_1 + 0x39b) = local_118;
  if (((local_f0 != 0) && (local_f8 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*local_f8 + 0x18))(), cVar4 != '\0')) {
    plVar6 = plVar7;
    if (local_f0 != 0) {
      plVar6 = local_f8;
    }
    local_100 = (**(code **)(*plVar6 + 0x38))();
  }
  *(undefined1 *)((longlong)param_1 + 0x39c) = local_100;
  *(undefined1 *)((longlong)param_1 + 0xb6) = local_3a7;
  if (((local_38 != 0) && (local_40 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*local_40 + 0x18))(), cVar4 != '\0')) {
    if (local_38 != 0) {
      plVar7 = local_40;
    }
    local_48 = (**(code **)(*plVar7 + 0x38))();
  }
  uVar8 = (ulonglong)_tls_index;
  *(byte *)((longlong)param_1 + 0x105) = *(byte *)((longlong)param_1 + 0x105) | 1;
  *(undefined1 *)((longlong)param_1 + 0x39e) = local_48;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0x38) <
       DAT_146ae7b80) && (_Init_thread_header(&DAT_146ae7b80), DAT_146ae7b80 == -1)) {
    local_528 = (undefined2 *)0x0;
    local_520 = 0x1b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_528,0);
    FGenericPlatformString::Memcpy(local_528,L"/Engine/EngineFonts/Roboto",0x36);
    local_538 = &DAT_1468e2360;
    FConfigCacheIni::GetString(DAT_1468b6148,L"SlateStyle",L"DefaultFontName",&local_528);
    puVar9 = &DAT_143f3eda8;
    if ((int)local_520 != 0) {
      puVar9 = local_528;
    }
    FUN_1420ccb50(&DAT_146ae7b78,puVar9);
    if (local_528 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    _Init_thread_footer(&DAT_146ae7b80);
  }
  local_518 = 0;
  local_514 = 0;
  local_510 = 0;
  local_508 = DAT_1464aa6e0;
  uStack_504 = DAT_1464aa6e4;
  uStack_500 = DAT_1464aa6e8;
  uStack_4fc = DAT_1464aa6ec;
  uVar5 = FName::FName(local_4f8,&DAT_144f97e9c,1);
  local_538 = (undefined8 *)&local_518;
  uVar5 = FSlateFontInfo::FSlateFontInfo(local_4f0,DAT_146ae7b78,0xc,uVar5);
  FUN_141925d20(param_1 + 0x69,uVar5);
  if (local_4b8 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_4b8 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_4b8)(local_4b8);
      LOCK();
      piVar1 = (int *)((longlong)local_4b8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_4b8 + 8))(local_4b8,1);
      }
    }
  }
  FUN_1417f9360(param_1 + 0x2d,param_1 + 0x69);
  FUN_141924260(local_498);
  return param_1;
}



// FUNCTION 1420d3a50 FUN_1420d3a50 body=1345 status=ok
// SIG undefined FUN_1420d3a50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1420d3a50(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  undefined1 auStack_768 [32];
  undefined8 *local_748;
  undefined2 *local_738;
  undefined8 local_730;
  undefined4 local_728;
  undefined4 uStack_724;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  undefined1 local_718;
  undefined8 local_710;
  longlong *plStack_708;
  undefined4 local_700;
  undefined4 uStack_6fc;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  undefined1 local_6f0;
  undefined8 local_6e8;
  longlong *plStack_6e0;
  undefined4 local_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  undefined1 local_6c8;
  undefined8 local_6c0;
  longlong *plStack_6b8;
  undefined4 local_6b0;
  undefined1 local_6ac;
  undefined8 local_6a8;
  undefined4 local_6a0;
  undefined4 uStack_69c;
  undefined4 uStack_698;
  undefined4 uStack_694;
  undefined1 local_690 [8];
  undefined1 local_688 [56];
  longlong *local_650;
  undefined1 local_638 [264];
  undefined8 local_530;
  undefined8 local_528;
  undefined1 local_368;
  longlong *local_360;
  int local_358;
  undefined1 local_2c0;
  longlong *local_2b8;
  int local_2b0;
  undefined1 local_60;
  longlong *local_58;
  int local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_768;
  UWidget::UWidget();
  plVar10 = (longlong *)0x0;
  *param_1 = &PTR_FUN_144fa5a90;
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfc;
  *(undefined4 *)((longlong)param_1 + 0x101) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(byte *)((longlong)param_1 + 0x105) = *(byte *)((longlong)param_1 + 0x105) & 0xfe;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3f800000;
  *param_1 = &PTR__scalar_deleting_destructor__144fa8808;
  FText::FText(param_1 + 0x24);
  FText::FText(param_1 + 0x27);
  FWeakObjectPtr::operator=(param_1 + 0x2a,0);
  param_1[0x2b] = 0;
  FEditableTextBoxStyle::FEditableTextBoxStyle(param_1 + 0x2c);
  FUN_1417f2e90(param_1 + 0x12a);
  *(undefined1 *)((longlong)param_1 + 0xb32) = 0;
  FUN_1417efd90(param_1 + 0x168);
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  param_1[0x17b] = 0;
  param_1[0x17c] = 0;
  param_1[0x17d] = 0;
  uVar8 = CONCAT44(DAT_1464aa6ec,DAT_1464aa6e8);
  param_1[0x172] = CONCAT44(DAT_1464aa6e4,DAT_1464aa6e0);
  param_1[0x173] = uVar8;
  uVar8 = _DAT_1464aa6c8;
  param_1[0x174] = _DAT_1464aa6c0;
  param_1[0x175] = uVar8;
  uVar6 = DAT_1464aa6ec;
  uVar5 = DAT_1464aa6e8;
  uVar4 = DAT_1464aa6e4;
  *(undefined4 *)(param_1 + 0x176) = DAT_1464aa6e0;
  *(undefined4 *)((longlong)param_1 + 0xbb4) = uVar4;
  *(undefined4 *)(param_1 + 0x177) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xbbc) = uVar6;
  FUN_1419219a0(local_638);
  if (((local_358 != 0) && (local_360 != (longlong *)0x0)) &&
     (cVar7 = (**(code **)(*local_360 + 0x18))(), cVar7 != '\0')) {
    plVar9 = plVar10;
    if (local_358 != 0) {
      plVar9 = local_360;
    }
    local_368 = (**(code **)(*plVar9 + 0x38))();
  }
  *(undefined1 *)(param_1 + 0x166) = local_368;
  FEditableTextBoxStyle::operator=(param_1 + 0x2c,local_530);
  FTextBlockStyle::operator=(param_1 + 0x12a,local_528);
  if (((local_2b0 != 0) && (local_2b8 != (longlong *)0x0)) &&
     (cVar7 = (**(code **)(*local_2b8 + 0x18))(), cVar7 != '\0')) {
    plVar9 = plVar10;
    if (local_2b0 != 0) {
      plVar9 = local_2b8;
    }
    local_2c0 = (**(code **)(*plVar9 + 0x38))();
  }
  *(undefined1 *)((longlong)param_1 + 0xb31) = local_2c0;
  if (((local_50 != 0) && (local_58 != (longlong *)0x0)) &&
     (cVar7 = (**(code **)(*local_58 + 0x18))(), cVar7 != '\0')) {
    if (local_50 != 0) {
      plVar10 = local_58;
    }
    local_60 = (**(code **)(*plVar10 + 0x38))();
  }
  uVar11 = (ulonglong)_tls_index;
  *(byte *)((longlong)param_1 + 0x105) = *(byte *)((longlong)param_1 + 0x105) | 1;
  *(undefined1 *)((longlong)param_1 + 0xb33) = local_60;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x38) <
       DAT_146ae7b90) && (_Init_thread_header(&DAT_146ae7b90), DAT_146ae7b90 == -1)) {
    local_738 = (undefined2 *)0x0;
    local_730 = 0x1b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_738,0);
    FGenericPlatformString::Memcpy(local_738,L"/Engine/EngineFonts/Roboto",0x36);
    local_748 = &DAT_1468e2360;
    FConfigCacheIni::GetString(DAT_1468b6148,L"SlateStyle",L"DefaultFontName",&local_738);
    puVar12 = &DAT_143f3eda8;
    if ((int)local_730 != 0) {
      puVar12 = local_738;
    }
    FUN_1420ccb50(&DAT_146ae7b88,puVar12);
    if (local_738 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    _Init_thread_footer(&DAT_146ae7b90);
  }
  local_6b0 = 0;
  local_6ac = 0;
  local_6a8 = 0;
  local_6a0 = DAT_1464aa6e0;
  uStack_69c = DAT_1464aa6e4;
  uStack_698 = DAT_1464aa6e8;
  uStack_694 = DAT_1464aa6ec;
  uVar8 = FName::FName(local_690,&DAT_144f98034,1);
  local_748 = (undefined8 *)&local_6b0;
  uVar8 = FSlateFontInfo::FSlateFontInfo(local_688,DAT_146ae7b88,0xc,uVar8);
  FUN_141925d20(param_1 + 0x168,uVar8);
  if (local_650 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_650 + 1;
    lVar3 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_650)(local_650);
      LOCK();
      piVar1 = (int *)((longlong)local_650 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_650 + 8))(local_650,1);
      }
    }
  }
  FUN_1417f9360(param_1 + 0x73,param_1 + 0x168);
  local_728 = *(undefined4 *)(param_1 + 0x172);
  uStack_724 = *(undefined4 *)((longlong)param_1 + 0xb94);
  uStack_720 = *(undefined4 *)(param_1 + 0x173);
  uStack_71c = *(undefined4 *)((longlong)param_1 + 0xb9c);
  local_718 = 0;
  local_710 = 0;
  plStack_708 = (longlong *)0x0;
  FUN_140692440(param_1 + 0x7d,&local_728);
  plVar10 = plStack_708;
  if (plStack_708 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_708 + 1;
    lVar3 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_708)(plStack_708);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_708 + 8))(plStack_708,1);
      }
    }
  }
  local_700 = *(undefined4 *)(param_1 + 0x174);
  uStack_6fc = *(undefined4 *)((longlong)param_1 + 0xba4);
  uStack_6f8 = *(undefined4 *)(param_1 + 0x175);
  uStack_6f4 = *(undefined4 *)((longlong)param_1 + 0xbac);
  local_6f0 = 0;
  local_6e8 = 0;
  plStack_6e0 = (longlong *)0x0;
  FUN_140692440(param_1 + 0x82,&local_700);
  plVar10 = plStack_6e0;
  if (plStack_6e0 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_6e0 + 1;
    lVar3 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_6e0)(plStack_6e0);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_6e0 + 8))(plStack_6e0,1);
      }
    }
  }
  local_6d8 = *(undefined4 *)(param_1 + 0x176);
  uStack_6d4 = *(undefined4 *)((longlong)param_1 + 0xbb4);
  uStack_6d0 = *(undefined4 *)(param_1 + 0x177);
  uStack_6cc = *(undefined4 *)((longlong)param_1 + 0xbbc);
  local_6c8 = 0;
  local_6c0 = 0;
  plStack_6b8 = (longlong *)0x0;
  FUN_140692440(param_1 + 0x87,&local_6d8);
  plVar10 = plStack_6b8;
  if (plStack_6b8 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_6b8 + 1;
    lVar3 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_6b8)(plStack_6b8);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_6b8 + 8))(plStack_6b8,1);
      }
    }
  }
  FUN_1419245b0(local_638);
  return param_1;
}



// FUNCTION 1420d3fa0 UNamedSlot body=83 status=ok
// SIG undefined UNamedSlot(void)

undefined8 * UNamedSlot::UNamedSlot(undefined8 *param_1)

{
  UWidget::UWidget();
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *param_1 = &PTR_FUN_144fa8ad8;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) | 1;
  *(undefined1 *)((longlong)param_1 + 0xb7) = 4;
  return param_1;
}



// FUNCTION 1420d4000 UNativeWidgetHost body=56 status=ok
// SIG undefined UNativeWidgetHost(void)

undefined8 * UNativeWidgetHost::UNativeWidgetHost(undefined8 *param_1)

{
  UWidget::UWidget();
  *param_1 = &PTR__scalar_deleting_destructor__144fa8dc0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) & 0xfe;
  return param_1;
}



// FUNCTION 1420d4040 FUN_1420d4040 body=314 status=ok
// SIG undefined FUN_1420d4040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1420d4040(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_168 [32];
  char local_148 [16];
  undefined1 local_138 [120];
  char local_c0;
  longlong *local_b8;
  int local_b0;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  UWidget::UWidget();
  plVar3 = (longlong *)0x0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 1;
  *param_1 = &PTR_FUN_144fa9090;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) & 0xfe;
  SOverlay::FArguments::FArguments(local_138);
  if (((local_b0 != 0) && (local_b8 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*local_b8 + 0x18))(), cVar1 != '\0')) {
    plVar2 = plVar3;
    if (local_b0 != 0) {
      plVar2 = local_b8;
    }
    (**(code **)(*plVar2 + 0x38))(plVar2,local_148);
    local_c0 = local_148[0];
  }
  if (local_c0 != DAT_1464b9ee8) {
    if (local_c0 == DAT_1464b9ee9) {
      plVar3 = (longlong *)0x1;
    }
    else if (local_c0 == DAT_1464b9eea) {
      plVar3 = (longlong *)0x2;
    }
    else if (local_c0 == DAT_1464b9eeb) {
      plVar3 = (longlong *)0x3;
    }
    else if (local_c0 == DAT_1464b9eec) {
      plVar3 = (longlong *)&DAT_00000004;
    }
  }
  *(char *)((longlong)param_1 + 0xb7) = (char)plVar3;
  if (local_30 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_138);
  return param_1;
}



// FUNCTION 1420d4180 UOverlaySlot body=53 status=ok
// SIG undefined UOverlaySlot(void)

undefined8 * UOverlaySlot::UOverlaySlot(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_144fa9378;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0x101;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 1420d41c0 FUN_1420d41c0 body=33 status=ok
// SIG undefined FUN_1420d41c0(void)

undefined8 * FUN_1420d41c0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_144fa0058;
  return param_1;
}



// FUNCTION 1420d41f0 UPanelWidget body=56 status=ok
// SIG undefined UPanelWidget(void)

undefined8 * UPanelWidget::UPanelWidget(undefined8 *param_1)

{
  UWidget::UWidget();
  *param_1 = &PTR__scalar_deleting_destructor__144fa02e0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 1;
  return param_1;
}



// FUNCTION 1420d4230 FUN_1420d4230 body=484 status=ok
// SIG undefined FUN_1420d4230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1420d4230(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_238 [32];
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined1 local_208;
  undefined8 local_200;
  longlong *plStack_1f8;
  undefined1 local_1e8 [264];
  longlong local_e0;
  undefined1 local_cc;
  undefined1 local_c0 [48];
  longlong *local_90;
  undefined1 local_80 [32];
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  UWidget::UWidget();
  *param_1 = &PTR_FUN_144fa9810;
  FProgressBarStyle::FProgressBarStyle(param_1 + 0x20);
  FWeakObjectPtr::operator=(param_1 + 0x5a,0);
  param_1[0x5b] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x5e,0);
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  SProgressBar::FArguments::FArguments(local_1e8);
  FUN_1406922e0(param_1 + 0x21,local_e0 + 8);
  FUN_1406922e0(param_1 + 0x32,local_e0 + 0x90);
  FUN_1406922e0(param_1 + 0x43,local_e0 + 0x118);
  local_208 = 0;
  local_218 = DAT_1464aa6c0;
  uStack_214 = DAT_1464aa6c4;
  uStack_210 = DAT_1464aa6c8;
  uStack_20c = DAT_1464aa6cc;
  local_200 = 0;
  plStack_1f8 = (longlong *)0x0;
  FUN_140692440(param_1 + 0x36,&local_218);
  plVar3 = plStack_1f8;
  if (plStack_1f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_1f8 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_1f8)(plStack_1f8);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_1f8 + 8))(plStack_1f8,1);
      }
    }
  }
  *(undefined2 *)((longlong)param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  uVar9 = DAT_1464aa6cc;
  uVar8 = DAT_1464aa6c8;
  uVar7 = DAT_1464aa6c4;
  uVar6 = DAT_1464aa6c0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5c) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = uVar7;
  *(undefined4 *)(param_1 + 0x5d) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = uVar9;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_60);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_80);
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_90 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_c0);
  local_cc = 0;
  FUN_140456c70(local_1e8);
  return param_1;
}



// FUNCTION 1420d4420 UPropertyBinding body=64 status=ok
// SIG undefined UPropertyBinding(void)

undefined8 * UPropertyBinding::UPropertyBinding(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR__scalar_deleting_destructor__144fa0878;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  FCachedPropertyPath::FCachedPropertyPath(param_1 + 6);
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 1420d4460 URetainerBox body=121 status=ok
// SIG undefined URetainerBox(void)

undefined8 * URetainerBox::URetainerBox(undefined8 *param_1)

{
  UWidget::UWidget();
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *param_1 = &PTR_FUN_144fa9ae0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined1 *)((longlong)param_1 + 0xb7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined2 *)(param_1 + 0x23) = 0x100;
  param_1[0x26] = DAT_146ae78d8;
  return param_1;
}



// FUNCTION 1420d44e0 FUN_1420d44e0 body=197 status=ok
// SIG undefined FUN_1420d44e0(void)

undefined8 * FUN_1420d44e0(undefined8 *param_1)

{
  UWidget::UWidget();
  *param_1 = &PTR_FUN_144fa5a90;
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfc;
  *(undefined4 *)((longlong)param_1 + 0x101) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(byte *)((longlong)param_1 + 0x105) = *(byte *)((longlong)param_1 + 0x105) & 0xfe;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3f800000;
  *param_1 = &PTR_FUN_144faa000;
  FText::FText(param_1 + 0x24);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  FUN_1417f2e90(param_1 + 0x2a);
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  return param_1;
}



// FUNCTION 1420d45b0 FUN_1420d45b0 body=33 status=ok
// SIG undefined FUN_1420d45b0(void)

undefined8 * FUN_1420d45b0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_144faa2f0;
  return param_1;
}



// FUNCTION 1420d45e0 FUN_1420d45e0 body=33 status=ok
// SIG undefined FUN_1420d45e0(void)

undefined8 * FUN_1420d45e0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_144faa570;
  return param_1;
}



// FUNCTION 1420d4610 USafeZone body=97 status=ok
// SIG undefined USafeZone(void)

undefined8 * USafeZone::USafeZone(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UWidget::UWidget(param_1,uVar1);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *param_1 = &PTR_FUN_144faa8a0;
  *(undefined4 *)(param_1 + 0x23) = 0x1010101;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb7) = 4;
  return param_1;
}



// FUNCTION 1420d4680 USafeZoneSlot body=69 status=ok
// SIG undefined USafeZoneSlot(void)

undefined8 * USafeZoneSlot::USafeZoneSlot(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *param_1 = &PTR_FUN_144faab88;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x3f8000003f800000;
  return param_1;
}



// FUNCTION 1420d46d0 UScaleBox body=108 status=ok
// SIG undefined UScaleBox(void)

undefined8 * UScaleBox::UScaleBox(undefined8 *param_1)

{
  UWidget::UWidget();
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *param_1 = &PTR_FUN_144faae10;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 0xb7) = 4;
  *(undefined2 *)(param_1 + 0x23) = 2;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x24) = 0;
  return param_1;
}



// FUNCTION 1420d4740 UScaleBoxSlot body=56 status=ok
// SIG undefined UScaleBoxSlot(void)

undefined8 * UScaleBoxSlot::UScaleBoxSlot(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_144fab0f8;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = 0x202;
  return param_1;
}



// FUNCTION 1420d4780 UScrollBar body=215 status=ok
// SIG undefined UScrollBar(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * UScrollBar::UScrollBar(undefined8 *param_1)

{
  undefined1 auStack_188 [32];
  undefined1 local_168 [264];
  undefined8 local_60;
  undefined1 local_58 [48];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  UWidget::UWidget();
  *param_1 = &PTR_FUN_144fab380;
  FUN_1417ec950(param_1 + 0x20);
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) & 0xfe;
  *(undefined2 *)(param_1 + 0xbb) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x5dc) = 0x41400000;
  *(undefined4 *)(param_1 + 0xbc) = 0x41400000;
  SScrollBar::FArguments::FArguments(local_168);
  FScrollBarStyle::operator=(param_1 + 0x20,local_60);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_28);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_58);
  FUN_140456c70(local_168);
  return param_1;
}



// FUNCTION 1420d4860 FUN_1420d4860 body=605 status=ok
// SIG undefined FUN_1420d4860(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1420d4860(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_1b8 [32];
  char local_198 [16];
  undefined1 local_188 [120];
  char local_110;
  longlong *local_108;
  int local_100;
  longlong local_80;
  longlong local_70;
  undefined8 local_68;
  longlong *local_58;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  UWidget::UWidget();
  plVar6 = (longlong *)0x0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 1;
  *param_1 = &PTR_FUN_144fab650;
  FScrollBoxStyle::FScrollBoxStyle(param_1 + 0x23);
  FUN_1417ec950(param_1 + 0x68);
  *(undefined2 *)(param_1 + 0x104) = 1;
  *(undefined1 *)((longlong)param_1 + 0x822) = 0;
  *(undefined4 *)((longlong)param_1 + 0x824) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x105) = 0x40a00000;
  *(undefined2 *)((longlong)param_1 + 0x82c) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x82e) = 0;
  *(undefined4 *)(param_1 + 0x106) = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) & 0xfe;
  SScrollBox::FArguments::FArguments(local_188);
  if (((local_100 != 0) && (local_108 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*local_108 + 0x18))(), cVar4 != '\0')) {
    plVar5 = plVar6;
    if (local_100 != 0) {
      plVar5 = local_108;
    }
    (**(code **)(*plVar5 + 0x38))(plVar5,local_198);
    local_110 = local_198[0];
  }
  if (local_110 != DAT_1464b9ee8) {
    if (local_110 == DAT_1464b9ee9) {
      plVar6 = (longlong *)0x1;
    }
    else if (local_110 == DAT_1464b9eea) {
      plVar6 = (longlong *)0x2;
    }
    else if (local_110 == DAT_1464b9eeb) {
      plVar6 = (longlong *)0x3;
    }
    else if (local_110 == DAT_1464b9eec) {
      plVar6 = (longlong *)&DAT_00000004;
    }
  }
  *(char *)((longlong)param_1 + 0xb7) = (char)plVar6;
  *(undefined1 *)((longlong)param_1 + 0xb6) = 1;
  FUN_1406922e0(param_1 + 0x24,local_70 + 8);
  FUN_1406922e0(param_1 + 0x35,local_70 + 0x90);
  FUN_1406922e0(param_1 + 0x46,local_70 + 0x118);
  FUN_1406922e0(param_1 + 0x57,local_70 + 0x1a0);
  FScrollBarStyle::operator=(param_1 + 0x68,local_68);
  *(undefined1 *)((longlong)param_1 + 0x834) = 1;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_38);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_58 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
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
  if (local_80 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_188);
  return param_1;
}



// FUNCTION 1420d4ac0 FUN_1420d4ac0 body=51 status=ok
// SIG undefined FUN_1420d4ac0(void)

undefined8 * FUN_1420d4ac0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_144fab938;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 1420d4b00 USizeBox body=93 status=ok
// SIG undefined USizeBox(void)

undefined8 * USizeBox::USizeBox(undefined8 *param_1)

{
  UWidget::UWidget();
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *param_1 = &PTR_FUN_144fabbc0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 0xb7) = 4;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x3f800000;
  return param_1;
}



// FUNCTION 1420d4b60 FUN_1420d4b60 body=114 status=ok
// SIG undefined FUN_1420d4b60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1420d4b60(undefined8 *param_1)

{
  undefined1 auStack_228 [32];
  undefined1 local_208 [496];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  FUN_141781840();
  *param_1 = &PTR_FUN_144fabea8;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  FUN_14068f180(local_208);
  FUN_140690ea0(local_208);
  return param_1;
}



// FUNCTION 1420d4be0 FUN_1420d4be0 body=51 status=ok
// SIG undefined FUN_1420d4be0(void)

undefined8 * FUN_1420d4be0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__144fb1300;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



// FUNCTION 1420d4c20 USlider body=378 status=ok
// SIG undefined USlider(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * USlider::USlider(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_288 [32];
  undefined1 local_268 [448];
  longlong local_a8;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  UWidget::UWidget();
  *param_1 = &PTR_FUN_144fac130;
  FWeakObjectPtr::operator=(param_1 + 0x21,0);
  param_1[0x22] = 0;
  FUN_1417f1100(param_1 + 0x23);
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  uVar3 = DAT_1464aa6cc;
  uVar2 = DAT_1464aa6c8;
  uVar1 = DAT_1464aa6c4;
  *(undefined4 *)((longlong)param_1 + 0x34c) = DAT_1464aa6c0;
  *(undefined4 *)(param_1 + 0x6a) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x354) = uVar2;
  *(undefined4 *)(param_1 + 0x6b) = uVar3;
  uVar4 = DAT_1464aa6cc;
  uVar3 = DAT_1464aa6c8;
  uVar2 = DAT_1464aa6c4;
  uVar1 = DAT_1464aa6c0;
  *(undefined4 *)(param_1 + 0x6e) = 0x3c23d70a;
  *(undefined4 *)((longlong)param_1 + 0x35c) = uVar1;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x364) = uVar3;
  *(undefined4 *)(param_1 + 0x6d) = uVar4;
  SSlider::FArguments::FArguments(local_268);
  FUN_1406922e0(param_1 + 0x24,local_a8 + 8);
  FUN_1406922e0(param_1 + 0x35,local_a8 + 0x90);
  FUN_1406922e0(param_1 + 0x46,local_a8 + 0x118);
  FUN_1406922e0(param_1 + 0x57,local_a8 + 0x1a0);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(local_a8 + 0x228);
  *(undefined1 *)((longlong)param_1 + 0x374) = 1;
  FUN_1419c0af0(local_268);
  return param_1;
}



// FUNCTION 1420d4da0 USpacer body=83 status=ok
// SIG undefined USpacer(void)

undefined8 * USpacer::USpacer(undefined8 *param_1)

{
  UWidget::UWidget();
  *param_1 = &PTR_FUN_144fac400;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x3f800000;
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 0xb7) = 4;
  return param_1;
}



// FUNCTION 1420d4e00 FUN_1420d4e00 body=1801 status=ok
// SIG undefined FUN_1420d4e00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1420d4e00(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined1 auStack_4f8 [32];
  undefined8 *local_4d8;
  undefined2 *local_4c8;
  undefined8 local_4c0;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined1 local_4a8;
  undefined8 local_4a0;
  longlong *plStack_498;
  undefined4 local_490;
  undefined1 local_48c;
  undefined8 local_488;
  undefined4 local_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined1 local_470 [8];
  undefined1 local_468 [56];
  longlong *local_430;
  undefined1 local_418 [264];
  undefined8 local_310;
  undefined4 local_308;
  longlong *local_300;
  int local_2f8;
  undefined4 local_2f0;
  char local_2ec;
  longlong *local_2e0;
  int local_2d8;
  undefined4 local_2d0;
  char local_2cc;
  longlong *local_2c0;
  int local_2b8;
  undefined4 local_2b0;
  char local_2ac;
  longlong *local_2a0;
  int local_298;
  undefined4 local_290;
  char local_28c;
  longlong *local_280;
  int local_278;
  undefined4 local_270;
  longlong *local_268;
  int local_260;
  undefined4 local_1d8;
  longlong *local_1d0;
  int local_1c8;
  undefined1 local_d8;
  longlong *local_d0;
  int local_c8;
  undefined1 local_c0;
  longlong *local_b8;
  int local_b0;
  undefined4 local_a8;
  longlong *local_a0;
  int local_98;
  undefined4 local_68;
  char local_64;
  undefined4 local_60;
  char local_5c;
  undefined4 local_58;
  char local_54;
  undefined4 local_50;
  char local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_4f8;
  UWidget::UWidget();
  *param_1 = &PTR_FUN_144fac6d0;
  FWeakObjectPtr::operator=(param_1 + 0x21,0);
  plVar10 = (longlong *)0x0;
  param_1[0x22] = 0;
  FSpinBoxStyle::FSpinBoxStyle(param_1 + 0x23);
  FUN_1417efd90(param_1 + 0x82);
  pvVar4 = ThreadLocalStoragePointer;
  uVar7 = (ulonglong)_tls_index;
  param_1[0x8e] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8f) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x47c) = 0x3f800000;
  lVar3 = *(longlong *)((longlong)pvVar4 + uVar7 * 8);
  *(undefined1 *)(param_1 + 0x90) = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  if ((*(int *)(lVar3 + 0x38) < DAT_146ae7ba0) &&
     (_Init_thread_header(&DAT_146ae7ba0), DAT_146ae7ba0 == -1)) {
    local_4c8 = (undefined2 *)0x0;
    local_4c0 = 0x1b;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4c8,0);
    FGenericPlatformString::Memcpy(local_4c8,L"/Engine/EngineFonts/Roboto",0x36);
    local_4d8 = &DAT_1468e2360;
    FConfigCacheIni::GetString(DAT_1468b6148,L"SlateStyle",L"DefaultFontName",&local_4c8);
    puVar9 = &DAT_143f3eda8;
    if ((int)local_4c0 != 0) {
      puVar9 = local_4c8;
    }
    FUN_1420ccb50(&DAT_146ae7b98,puVar9);
    if (local_4c8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    _Init_thread_footer(&DAT_146ae7ba0);
  }
  local_490 = 0;
  local_48c = 0;
  local_488 = 0;
  local_480 = DAT_1464aa6e0;
  uStack_47c = DAT_1464aa6e4;
  uStack_478 = DAT_1464aa6e8;
  uStack_474 = DAT_1464aa6ec;
  uVar6 = FName::FName(local_470,&DAT_144f9c478,1);
  local_4d8 = (undefined8 *)&local_490;
  uVar6 = FSlateFontInfo::FSlateFontInfo(local_468,DAT_146ae7b98,0xc,uVar6);
  FUN_141925d20(param_1 + 0x82,uVar6);
  if (local_430 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_430 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_430)(local_430);
      LOCK();
      piVar1 = (int *)((longlong)local_430 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_430 + 8))(local_430,1);
      }
    }
  }
  FUN_141920be0(local_418);
  if (((local_2f8 != 0) && (local_300 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*local_300 + 0x18))(), cVar5 != '\0')) {
    plVar8 = plVar10;
    if (local_2f8 != 0) {
      plVar8 = local_300;
    }
    local_308 = (**(code **)(*plVar8 + 0x38))();
  }
  uVar11 = 0;
  *(undefined4 *)(param_1 + 0x20) = local_308;
  if (((local_2d8 == 0) || (local_2e0 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*local_2e0 + 0x18))(), cVar5 == '\0')) {
LAB_1420d5075:
    local_68 = local_2f0;
    if (local_2ec == '\0') {
      local_68 = 0;
    }
  }
  else {
    plVar8 = plVar10;
    if (local_2d8 != 0) {
      plVar8 = local_2e0;
    }
    (**(code **)(*plVar8 + 0x38))(plVar8,&local_68);
    local_2ec = '\0';
    if (local_64 == '\0') goto LAB_1420d5075;
    local_2f0 = local_68;
    local_2ec = '\x01';
  }
  *(undefined4 *)((longlong)param_1 + 0x4dc) = local_68;
  if (((local_2b8 == 0) || (local_2c0 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*local_2c0 + 0x18))(), cVar5 == '\0')) {
LAB_1420d50fa:
    local_60 = local_2d0;
    if (local_2cc == '\0') {
      local_60 = 0;
    }
  }
  else {
    plVar8 = plVar10;
    if (local_2b8 != 0) {
      plVar8 = local_2c0;
    }
    (**(code **)(*plVar8 + 0x38))(plVar8,&local_60);
    local_2cc = '\0';
    if (local_5c == '\0') goto LAB_1420d50fa;
    local_2d0 = local_60;
    local_2cc = '\x01';
  }
  *(undefined4 *)(param_1 + 0x9c) = local_60;
  if (((local_298 == 0) || (local_2a0 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*local_2a0 + 0x18))(), cVar5 == '\0')) {
LAB_1420d517f:
    local_58 = local_2b0;
    if (local_2ac == '\0') {
      local_58 = 0;
    }
  }
  else {
    plVar8 = plVar10;
    if (local_298 != 0) {
      plVar8 = local_2a0;
    }
    (**(code **)(*plVar8 + 0x38))(plVar8,&local_58);
    local_2ac = '\0';
    if (local_54 == '\0') goto LAB_1420d517f;
    local_2b0 = local_58;
    local_2ac = '\x01';
  }
  *(undefined4 *)((longlong)param_1 + 0x4e4) = local_58;
  if (((local_278 != 0) && (local_280 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*local_280 + 0x18))(), cVar5 != '\0')) {
    plVar8 = plVar10;
    if (local_278 != 0) {
      plVar8 = local_280;
    }
    (**(code **)(*plVar8 + 0x38))(plVar8,&local_50);
    local_28c = '\0';
    if (local_4c != '\0') {
      local_290 = local_50;
      local_28c = '\x01';
      uVar11 = local_50;
      goto LAB_1420d5210;
    }
  }
  if (local_28c != '\0') {
    uVar11 = local_290;
  }
LAB_1420d5210:
  *(undefined4 *)(param_1 + 0x9d) = uVar11;
  if (((local_260 != 0) && (local_268 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*local_268 + 0x18))(), cVar5 != '\0')) {
    plVar8 = plVar10;
    if (local_260 != 0) {
      plVar8 = local_268;
    }
    local_270 = (**(code **)(*plVar8 + 0x38))();
  }
  *(undefined4 *)(param_1 + 0x81) = local_270;
  if (((local_1c8 != 0) && (local_1d0 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*local_1d0 + 0x18))(), cVar5 != '\0')) {
    plVar8 = plVar10;
    if (local_1c8 != 0) {
      plVar8 = local_1d0;
    }
    local_1d8 = (**(code **)(*plVar8 + 0x38))();
  }
  *(undefined4 *)((longlong)param_1 + 0x40c) = local_1d8;
  if (((local_98 != 0) && (local_a0 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*local_a0 + 0x18))(), cVar5 != '\0')) {
    plVar8 = plVar10;
    if (local_98 != 0) {
      plVar8 = local_a0;
    }
    local_a8 = (**(code **)(*plVar8 + 0x38))();
  }
  *(undefined4 *)((longlong)param_1 + 0x464) = local_a8;
  if (((local_c8 != 0) && (local_d0 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*local_d0 + 0x18))(), cVar5 != '\0')) {
    plVar8 = plVar10;
    if (local_c8 != 0) {
      plVar8 = local_d0;
    }
    local_d8 = (**(code **)(*plVar8 + 0x38))();
  }
  *(undefined1 *)(param_1 + 0x8d) = local_d8;
  if (((local_b0 != 0) && (local_b8 != (longlong *)0x0)) &&
     (cVar5 = (**(code **)(*local_b8 + 0x18))(), cVar5 != '\0')) {
    if (local_b0 != 0) {
      plVar10 = local_b8;
    }
    local_c0 = (**(code **)(*plVar10 + 0x38))(plVar10);
  }
  *(undefined1 *)((longlong)param_1 + 0x469) = local_c0;
  FSpinBoxStyle::operator=(param_1 + 0x23,local_310);
  local_4a8 = 0;
  local_4b8 = DAT_1464aa6e0;
  uStack_4b4 = DAT_1464aa6e4;
  uStack_4b0 = DAT_1464aa6e8;
  uStack_4ac = DAT_1464aa6ec;
  local_4a0 = 0;
  plStack_498 = (longlong *)0x0;
  FUN_140692440(param_1 + 0x8e,&local_4b8);
  plVar10 = plStack_498;
  if (plStack_498 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_498 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_498)(plStack_498);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_498 + 8))(plStack_498,1);
      }
    }
  }
  FUN_141923da0(local_418);
  return param_1;
}



// FUNCTION 1420d5510 FUN_1420d5510 body=78 status=ok
// SIG undefined FUN_1420d5510(void)

undefined8 * FUN_1420d5510(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR__scalar_deleting_destructor__144fa0878;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  FCachedPropertyPath::FCachedPropertyPath(param_1 + 6);
  param_1[0xb] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144fa1f98;
  *(undefined1 *)((longlong)param_1 + 0x61) = 0;
  return param_1;
}



// FUNCTION 1420d5560 FUN_1420d5560 body=815 status=ok
// SIG undefined FUN_1420d5560(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1420d5560(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  void *pvVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  undefined1 local_res8 [8];
  undefined2 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8;
  undefined8 local_a0;
  longlong *plStack_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70 [56];
  longlong *local_38;
  
  UWidget::UWidget();
  *param_1 = &PTR_FUN_144fa5a90;
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfc;
  *(undefined4 *)((longlong)param_1 + 0x101) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(byte *)((longlong)param_1 + 0x105) = *(byte *)((longlong)param_1 + 0x105) & 0xfe;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3f800000;
  *param_1 = &PTR_FUN_144fac9a0;
  FText::FText(param_1 + 0x24);
  FWeakObjectPtr::operator=(param_1 + 0x27,0);
  param_1[0x28] = 0;
  param_1[0x29] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x2e,0);
  param_1[0x2f] = 0;
  FUN_1417efd90(param_1 + 0x30);
  FWeakObjectPtr::operator=(param_1 + 0x3d,0);
  param_1[0x3e] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0x3f800000;
  local_a8 = 0;
  local_a0 = 0;
  plStack_98 = (longlong *)0x0;
  local_b8 = DAT_1464aa6c0;
  uStack_b4 = DAT_1464aa6c4;
  uStack_b0 = DAT_1464aa6c8;
  uStack_ac = DAT_1464aa6cc;
  FUN_140692440(param_1 + 0x29,&local_b8);
  plVar3 = plStack_98;
  if (plStack_98 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_98 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_98)(plStack_98);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_98 + 8))(plStack_98,1);
      }
    }
  }
  pvVar10 = ThreadLocalStoragePointer;
  uVar9 = uRam00000001468b5d84;
  uVar8 = uRam00000001468b5d80;
  uVar7 = uRam00000001468b5d7c;
  uVar6 = _DAT_1468b5d78;
  uVar12 = (ulonglong)_tls_index;
  *(undefined1 *)((longlong)param_1 + 0x1fd) = 0;
  *(undefined4 *)(param_1 + 0x3b) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = uVar7;
  *(undefined4 *)(param_1 + 0x3c) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = uVar9;
  if (*(int *)(*(longlong *)((longlong)pvVar10 + uVar12 * 8) + 0x38) < DAT_146ae7bb0) {
    _Init_thread_header(&DAT_146ae7bb0);
    if (DAT_146ae7bb0 == -1) {
      local_c8 = (undefined2 *)0x0;
      local_c0 = 0x1b;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
      FGenericPlatformString::Memcpy(local_c8,L"/Engine/EngineFonts/Roboto",0x36);
      FConfigCacheIni::GetString
                (DAT_1468b6148,L"SlateStyle",L"DefaultFontName",&local_c8,&DAT_1468e2360);
      puVar13 = &DAT_143f3eda8;
      if ((int)local_c0 != 0) {
        puVar13 = local_c8;
      }
      FUN_1420ccb50(&DAT_146ae7ba8,puVar13);
      if (local_c8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      _Init_thread_footer(&DAT_146ae7bb0);
    }
  }
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_80 = DAT_1464aa6e0;
  uStack_7c = DAT_1464aa6e4;
  uStack_78 = DAT_1464aa6e8;
  uStack_74 = DAT_1464aa6ec;
  uVar11 = FName::FName(local_res8,&DAT_144f9ccb4,1);
  uVar11 = FSlateFontInfo::FSlateFontInfo(local_70,DAT_146ae7ba8,0x18,uVar11,&local_90);
  FUN_141925d20(param_1 + 0x30,uVar11);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1420d5890 UTextLayoutWidget body=98 status=ok
// SIG undefined UTextLayoutWidget(void)

undefined8 * UTextLayoutWidget::UTextLayoutWidget(undefined8 *param_1)

{
  UWidget::UWidget();
  *param_1 = &PTR_FUN_144fa5a90;
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) & 0xfc;
  *(undefined4 *)((longlong)param_1 + 0x101) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(byte *)((longlong)param_1 + 0x105) = *(byte *)((longlong)param_1 + 0x105) & 0xfe;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x3f800000;
  return param_1;
}



// FUNCTION 1420d5900 UThrobber body=328 status=ok
// SIG undefined UThrobber(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * UThrobber::UThrobber(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined1 local_138 [264];
  undefined8 local_30;
  undefined4 local_28;
  uint local_24;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  UWidget::UWidget();
  *param_1 = &PTR_FUN_144facc80;
  param_1[0x22] = &PTR__scalar_deleting_destructor__143f489a8;
  *(undefined4 *)(param_1 + 0x23) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0x42000000;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  uVar1 = _DAT_1464aa6c8;
  param_1[0x26] = _DAT_1464aa6c0;
  param_1[0x27] = uVar1;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  local_148 = DAT_1468b5d88;
  uVar2 = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0x2e) = uVar2;
  *(undefined4 *)(param_1 + 0x2d) = uVar2;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  uVar1 = local_148;
  local_148._4_4_ = (undefined4)((ulonglong)local_148 >> 0x20);
  *(undefined4 *)((longlong)param_1 + 0x174) = local_148._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x16c) = local_148._4_4_;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 3;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) & 0xfc;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  local_148 = uVar1;
  SThrobber::FArguments::FArguments(local_138);
  FUN_1406922e0(param_1 + 0x22,local_30);
  *(byte *)((longlong)param_1 + 0x105) = (byte)local_24 & 1;
  *(byte *)((longlong)param_1 + 0x104) = (byte)(local_24 >> 1) & 1;
  *(undefined4 *)(param_1 + 0x20) = local_28;
  *(byte *)((longlong)param_1 + 0x106) = (byte)(local_24 >> 2) & 1;
  FUN_140456c70(local_138);
  return param_1;
}



// FUNCTION 1420d5a50 FUN_1420d5a50 body=97 status=ok
// SIG undefined FUN_1420d5a50(void)

undefined8 * FUN_1420d5a50(undefined8 *param_1)

{
  FUN_1420d2aa0();
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0x43000000;
  *param_1 = &PTR_FUN_144fad200;
  param_1[0x41] = &PTR_GetAddress_144fad4e8;
  *(undefined1 *)((longlong)param_1 + 0x321) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) | 1;
  *(undefined4 *)(param_1 + 99) = 0x43000000;
  return param_1;
}



// FUNCTION 1420d5ac0 FUN_1420d5ac0 body=155 status=ok
// SIG undefined FUN_1420d5ac0(void)

undefined8 * FUN_1420d5ac0(undefined8 *param_1)

{
  FUN_1420d2aa0();
  *param_1 = &PTR_FUN_144fad8d8;
  param_1[0x41] = &PTR_GetAddress_144fadbc0;
  param_1[99] = 0;
  param_1[100] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x65,0);
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 2;
  return param_1;
}



// FUNCTION 1420d5b60 FUN_1420d5b60 body=214 status=ok
// SIG undefined FUN_1420d5b60(void)

undefined8 * FUN_1420d5b60(undefined8 *param_1)

{
  FUN_141781840();
  FUN_141f3a120(param_1 + 5);
  *param_1 = &PTR_FUN_144f9fa40;
  param_1[5] = &PTR_LAB_144f9fcb8;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 900) = 0;
  FUN_141f39590(param_1 + 0x71);
  *(undefined4 *)(param_1 + 0xd4) = 60000;
  *(undefined8 *)((longlong)param_1 + 0x6a4) = 1;
  param_1[0xd7] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 2;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  *(byte *)((longlong)param_1 + 0x6f1) = *(byte *)((longlong)param_1 + 0x6f1) & 0xfe;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6ac) = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0xdd) = 0x3f800000;
  return param_1;
}



// FUNCTION 1420d5c40 FUN_1420d5c40 body=367 status=ok
// SIG undefined FUN_1420d5c40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1420d5c40(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_1b8 [32];
  char local_198 [16];
  undefined1 local_188 [120];
  char local_110;
  longlong *local_108;
  int local_100;
  longlong local_80;
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  UWidget::UWidget();
  plVar3 = (longlong *)0x0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 1;
  *param_1 = &PTR_FUN_144fadc38;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) & 0xfe;
  SUniformGridPanel::FArguments::FArguments(local_188);
  if (((local_100 != 0) && (local_108 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*local_108 + 0x18))(), cVar1 != '\0')) {
    plVar2 = plVar3;
    if (local_100 != 0) {
      plVar2 = local_108;
    }
    (**(code **)(*plVar2 + 0x38))(plVar2,local_198);
    local_110 = local_198[0];
  }
  if (local_110 != DAT_1464b9ee8) {
    if (local_110 == DAT_1464b9ee9) {
      plVar3 = (longlong *)0x1;
    }
    else if (local_110 == DAT_1464b9eea) {
      plVar3 = (longlong *)0x2;
    }
    else if (local_110 == DAT_1464b9eeb) {
      plVar3 = (longlong *)0x3;
    }
    else if (local_110 == DAT_1464b9eec) {
      plVar3 = (longlong *)&DAT_00000004;
    }
  }
  *(char *)((longlong)param_1 + 0xb7) = (char)plVar3;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_28);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_40);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_58);
  if (local_80 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_188);
  return param_1;
}



// FUNCTION 1420d5db0 UUniformGridSlot body=47 status=ok
// SIG undefined UUniformGridSlot(void)

undefined8 * UUniformGridSlot::UUniformGridSlot(undefined8 *param_1)

{
  FUN_141781840();
  param_1[9] = 0;
  *param_1 = &PTR_FUN_144fadf20;
  *(undefined2 *)(param_1 + 7) = 0x101;
  return param_1;
}



// FUNCTION 1420d5de0 FUN_1420d5de0 body=645 status=ok
// SIG undefined FUN_1420d5de0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1420d5de0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined8 local_30;
  longlong *plStack_28;
  
  UWidget::UWidget();
  *param_1 = &PTR_FUN_144f9f5b8;
  param_1[0x20] = &PTR_LAB_144f9fa18;
  FWeakObjectPtr::operator=(param_1 + 0x23,0);
  param_1[0x24] = 0;
  param_1[0x25] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x26) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  FWeakObjectPtr::operator=(param_1 + 0x2a,0);
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined1 *)((longlong)param_1 + 0x1ad) = 1;
  *(byte *)((longlong)param_1 + 0x1ac) = *(byte *)((longlong)param_1 + 0x1ac) & 0x9f | 0x18;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  FLocalPlayerContext::FLocalPlayerContext(param_1 + 0x3e);
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  uVar8 = 0;
  uVar9 = 0x3f8000003f800000;
  *(undefined1 *)((longlong)param_1 + 0xb7) = 4;
  param_1[0x37] = 0;
  param_1[0x38] = 0x3f8000003f800000;
  local_38 = 2;
  *(byte *)((longlong)param_1 + 0x1ac) = *(byte *)((longlong)param_1 + 0x1ac) & 0xfd | 1;
  uVar4 = _DAT_1464aa6c8;
  local_48 = 0x3f800000;
  uStack_44 = 0;
  uStack_40 = 0x3f800000;
  uStack_3c = 0x3f800000;
  param_1[0x21] = _DAT_1464aa6c0;
  param_1[0x22] = uVar4;
  local_30 = 0;
  plStack_28 = (longlong *)0x0;
  FUN_140692440(param_1 + 0x25,&local_48);
  plVar5 = plStack_28;
  if (plStack_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_28 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_28)(plStack_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_28 + 8))(plStack_28,1);
      }
    }
  }
  if (DAT_146ae871c == '\0') {
    DAT_146ae871c = '\x01';
    plVar5 = (longlong *)FMemory::Realloc(0,0x20,0,param_4,uVar8,uVar9);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_GetPoolName_144fb1630;
      plVar5[1] = (longlong)FUN_14210dc00;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar5[3] = lVar6;
      *plVar5 = (longlong)&PTR_GetPoolName_144fb1678;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146533320,1);
      (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
      iVar3 = DAT_146533328;
      lVar6 = (longlong)DAT_146533328;
      DAT_146533328 = DAT_146533328 + 1;
      if (DAT_14653332c < DAT_146533328) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146533320,iVar3);
      }
      puVar7 = (undefined8 *)(lVar6 * 0x10 + DAT_146533320);
      *puVar7 = plVar5;
      *(undefined4 *)(puVar7 + 1) = 2;
    }
  }
  return param_1;
}



// FUNCTION 1420d6070 FUN_1420d6070 body=314 status=ok
// SIG undefined FUN_1420d6070(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1420d6070(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_168 [32];
  char local_148 [16];
  undefined1 local_138 [120];
  char local_c0;
  longlong *local_b8;
  int local_b0;
  longlong local_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  UWidget::UWidget();
  plVar3 = (longlong *)0x0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 1;
  *param_1 = &PTR_FUN_144fae1a8;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(byte *)((longlong)param_1 + 0xb4) = *(byte *)((longlong)param_1 + 0xb4) & 0xfe;
  SCanvas::FArguments::FArguments(local_138);
  if (((local_b0 != 0) && (local_b8 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*local_b8 + 0x18))(), cVar1 != '\0')) {
    plVar2 = plVar3;
    if (local_b0 != 0) {
      plVar2 = local_b8;
    }
    (**(code **)(*plVar2 + 0x38))(plVar2,local_148);
    local_c0 = local_148[0];
  }
  if (local_c0 != DAT_1464b9ee8) {
    if (local_c0 == DAT_1464b9ee9) {
      plVar3 = (longlong *)0x1;
    }
    else if (local_c0 == DAT_1464b9eea) {
      plVar3 = (longlong *)0x2;
    }
    else if (local_c0 == DAT_1464b9eeb) {
      plVar3 = (longlong *)0x3;
    }
    else if (local_c0 == DAT_1464b9eec) {
      plVar3 = (longlong *)&DAT_00000004;
    }
  }
  *(char *)((longlong)param_1 + 0xb7) = (char)plVar3;
  if (local_30 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_138);
  return param_1;
}



// FUNCTION 1420d61b0 UVerticalBoxSlot body=61 status=ok
// SIG undefined UVerticalBoxSlot(void)

undefined8 * UVerticalBoxSlot::UVerticalBoxSlot(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_144fa6e60;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  return param_1;
}


