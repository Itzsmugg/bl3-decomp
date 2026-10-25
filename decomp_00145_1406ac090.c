// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1406ac090 FUN_1406ac090 body=66 status=ok
// SIG undefined FUN_1406ac090(void)

undefined8 * FUN_1406ac090(undefined8 *param_1,ulonglong param_2)

{
  FUN_1406ad890(param_1 + 1);
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x230);
  }
  return param_1;
}



// FUNCTION 1406ac0e0 FUN_1406ac0e0 body=162 status=ok
// SIG undefined FUN_1406ac0e0(void)

undefined8 * FUN_1406ac0e0(longlong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined4 *)param_1[1];
  uVar5 = ((undefined8 *)*param_1)[1];
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = uVar5;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(param_2 + 2) = *puVar1;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar2;
  *(undefined4 *)(param_2 + 3) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar4;
  param_2[4] = 0;
  FUN_1406ac540(param_2 + 4,*(undefined8 *)(puVar1 + 4),puVar1[6],0,0);
  *(undefined4 *)(param_2 + 6) = puVar1[8];
  *(undefined4 *)((longlong)param_2 + 0x34) = puVar1[9];
  param_2[7] = *(undefined8 *)(puVar1 + 10);
  *(undefined1 *)(param_2 + 8) = *(undefined1 *)(puVar1 + 0xc);
  *(undefined1 *)((longlong)param_2 + 0x41) = *(undefined1 *)((longlong)puVar1 + 0x31);
  *(undefined1 *)((longlong)param_2 + 0x42) = *(undefined1 *)((longlong)puVar1 + 0x32);
  *(undefined4 *)((longlong)param_2 + 0x44) = puVar1[0xd];
  FString::FString(param_2 + 9,puVar1 + 0xe);
  FString::FString(param_2 + 0xb,puVar1 + 0x12);
  FString::FString(param_2 + 0xd,puVar1 + 0x16);
  return param_2;
}



// FUNCTION 1406ac190 FUN_1406ac190 body=122 status=ok
// SIG undefined FUN_1406ac190(void)

longlong FUN_1406ac190(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  FString::FString(param_2,*param_1);
  FString::FString(param_2 + 0x10,lVar1);
  FString::FString(param_2 + 0x20,lVar1 + 0x10);
  FString::FString(param_2 + 0x30,lVar1 + 0x20);
  FString::FString(param_2 + 0x40,lVar1 + 0x30);
  FString::FString(param_2 + 0x50,lVar1 + 0x40);
  *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(lVar1 + 0x50);
  return param_2;
}



// FUNCTION 1406ac210 FUN_1406ac210 body=217 status=ok
// SIG undefined FUN_1406ac210(void)

undefined8 FUN_1406ac210(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_18;
  int local_10;
  
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_10 = 3;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    plVar1[1] = param_3;
    *plVar1 = (longlong)&DAT_143f3ed00;
    plVar1[2] = param_4;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  TBaseMulticastDelegate<void>::Add(param_1,param_2,&local_18);
  plVar1 = local_18;
  if (local_10 != 0) {
    if (local_18 == (longlong *)0x0) {
      return param_2;
    }
    (**(code **)(*local_18 + 0x28))(local_18,0);
    plVar1 = (longlong *)FMemory::Realloc(plVar1,0,0);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return param_2;
}



// FUNCTION 1406ac2f0 FUN_1406ac2f0 body=342 status=ok
// SIG undefined FUN_1406ac2f0(void)

void FUN_1406ac2f0(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 uVar6;
  char cVar7;
  longlong *plVar8;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  plVar3 = (longlong *)param_4[1];
  local_48 = *param_4;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_3 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar8 = (longlong *)0x0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_40 = plVar3;
  uVar6 = FUN_1406b2e90(DAT_146857fe0,&local_48,&local_38);
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar7 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    if (cVar7 != '\0') {
      if ((int)param_2[1] != 0) {
        plVar8 = (longlong *)*param_2;
      }
      (**(code **)(*plVar8 + 0x40))(plVar8,uVar6,&local_38);
    }
  }
  FUN_1406ad4f0(&local_18);
  FUN_1406ad4f0(&local_28);
  FUN_1406ad4f0(&local_38);
  if (plVar4 != (longlong *)0x0) {
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
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 1406ac450 FUN_1406ac450 body=238 status=ok
// SIG undefined FUN_1406ac450(void)

void FUN_1406ac450(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_18 [2];
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_14404bee8;
    FWeakObjectPtr::operator=(plVar2 + 1,param_2);
    plVar2[2] = param_3;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_14404bf30;
  }
  if (local_18 != param_1) {
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



// FUNCTION 1406ac540 FUN_1406ac540 body=269 status=ok
// SIG undefined FUN_1406ac540(void)

void FUN_1406ac540(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  FUN_1406bbfe0(param_1,param_3 + param_5,param_4);
  lVar1 = *param_1;
  if (param_3 != 0) {
    param_2 = param_2 + 0x20;
    do {
      FString::FString(lVar1,param_2 + -0x20);
      FString::FString(lVar1 + 0x10,param_2 + -0x10);
      FString::FString(lVar1 + 0x20,param_2);
      FString::FString(lVar1 + 0x30,param_2 + 0x10);
      FString::FString(lVar1 + 0x40,param_2 + 0x20);
      FString::FString(lVar1 + 0x50,param_2 + 0x30);
      *(undefined1 *)(lVar1 + 0x60) = *(undefined1 *)(param_2 + 0x40);
      FString::FString(lVar1 + 0x68,param_2 + 0x48);
      *(undefined4 *)(lVar1 + 0x78) = *(undefined4 *)(param_2 + 0x58);
      FString::FString(lVar1 + 0x80,param_2 + 0x60);
      FString::FString(lVar1 + 0x90,param_2 + 0x70);
      lVar1 = lVar1 + 0xa0;
      param_2 = param_2 + 0xa0;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1406ac650 FUN_1406ac650 body=624 status=ok
// SIG undefined FUN_1406ac650(void)

int * FUN_1406ac650(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  void *_Dst;
  uint uVar8;
  char cVar9;
  void *_Src;
  bool bVar10;
  int local_res8 [2];
  
  iVar7 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar6 + 1) {
      TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
                (param_1,iVar6);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar6 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar6 * 0x80 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x80 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar6;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar6 & 0x1f);
  _Src = (void *)((longlong)iVar6 * 0x80 + *param_1);
  FUN_1406ac0e0(param_3,_Src);
  *(undefined4 *)((longlong)_Src + 0x78) = 0xffffffff;
  bVar10 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FUN_1406b2690(param_1,local_res8,_Src);
    bVar10 = local_res8[0] != -1;
    if (bVar10) {
      _Dst = (void *)((longlong)local_res8[0] * 0x80 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x68) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)((longlong)_Dst + 0x58) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
        FMemory::Free();
      }
      FUN_1406ad5c0((longlong)_Dst + 0x20);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x78);
      FUN_140483a60(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1406ac897;
    }
  }
  uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar8) {
    uVar4 = (uVar8 >> 1) + 8;
    iVar7 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    iVar6 = 0x20;
    cVar9 = '\0';
    if (uVar4 != 0) {
      iVar6 = 0x1f - iVar7;
    }
    uVar4 = (uVar8 >> 1) + 7;
    iVar7 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar9 = '\x1f' - (char)iVar7;
    }
    iVar7 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar9 & 0x1f);
  }
  if (((int)uVar8 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    iVar7 = *param_2;
    uVar8 = FCrc::MemCrc_DEPRECATED(_Src,0x10);
    uVar8 = (int)param_1[9] - 1U & uVar8;
    *(uint *)((longlong)_Src + 0x7c) = uVar8;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0x78) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) = iVar7
    ;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    FUN_1406b8d40(param_1);
  }
LAB_1406ac897:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 1406ac8c0 FUN_1406ac8c0 body=671 status=ok
// SIG undefined FUN_1406ac8c0(void)

uint * FUN_1406ac8c0(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  int iVar10;
  void *_Dst;
  uint uVar11;
  char cVar12;
  undefined8 *_Src;
  undefined4 uVar13;
  bool bVar14;
  uint local_res8 [2];
  
  iVar10 = 1;
  uVar13 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar11 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar11 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar11 = *(uint *)(param_1 + 6);
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)((longlong)(int)uVar11 * 0x70 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)((longlong)iVar7 * 0x70 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = uVar11;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 +
                   (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar11 & 0x1f);
  _Src = (undefined8 *)((longlong)(int)uVar11 * 0x70 + *param_1);
  FUN_1406ac190(param_3,_Src);
  *(undefined4 *)(_Src + 0xd) = 0xffffffff;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FOnlineAchievementDesc>,TDefaultMapHashableKeyFuncs<FString,FOnlineAchievementDesc,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar11 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar14 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    if (bVar14) {
      _Dst = (void *)(lVar9 * 0x70 + *param_1);
      FUN_1406ad7a0(_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x68);
      uVar4 = *param_2;
      bVar2 = (byte)uVar4 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0x70 + *param_1) = uVar4;
      }
      puVar5 = (undefined4 *)((longlong)(int)uVar4 * 0x70 + *param_1);
      *puVar5 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar13 = (undefined4)param_1[6];
      }
      puVar5[1] = uVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar4;
      plVar6 = (longlong *)param_1[4];
      *param_2 = uVar11;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar6 +
                       (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_1406acb3b;
    }
  }
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar11) {
    uVar4 = (uVar11 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar12 = '\0';
    if (uVar4 != 0) {
      iVar7 = 0x1f - iVar10;
    }
    uVar4 = (uVar11 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar4 != 0) {
      cVar12 = '\x1f' - (char)iVar10;
    }
    iVar10 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    uVar11 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*_Src;
    }
    uVar4 = FUN_140438070(puVar8);
    uVar4 = (int)param_1[9] - 1U & uVar4;
    *(uint *)((longlong)_Src + 0x6c) = uVar4;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0xd) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(uint *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) =
         uVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<FString,FOnlineAchievementDesc>,TDefaultMapHashableKeyFuncs<FString,FOnlineAchievementDesc,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1406acb3b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1406acb60 FUN_1406acb60 body=585 status=ok
// SIG undefined FUN_1406acb60(void)

int FUN_1406acb60(longlong *param_1,longlong *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  
  iVar3 = (int)param_1[1];
  lVar12 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  iVar13 = 0;
  if (*(int *)(*param_2 + 0x10) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = *(undefined2 **)(*param_2 + 8);
  }
  if (*(int *)(*param_1 + 0x10) == 0) {
    psVar4 = &DAT_143f3eda8;
  }
  else {
    psVar4 = *(short **)(*param_1 + 8);
  }
  lVar8 = (longlong)puVar9 - (longlong)psVar4;
  do {
    sVar1 = *psVar4;
    sVar2 = *(short *)((longlong)psVar4 + lVar8);
    if (sVar1 != sVar2) break;
    psVar4 = psVar4 + 1;
  } while (sVar2 != 0);
  bVar15 = sVar1 != sVar2;
  lVar8 = 0;
  iVar7 = 0;
  do {
    lVar8 = lVar8 + 1;
    iVar14 = iVar7 + 1;
    if (lVar8 < lVar12) {
      puVar11 = (undefined8 *)(*param_1 + 8 + lVar8 * 0x58);
      do {
        if (*(int *)(*param_2 + 0x10) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = *(undefined2 **)(*param_2 + 8);
        }
        if (*(int *)(puVar11 + 1) == 0) {
          psVar4 = &DAT_143f3eda8;
        }
        else {
          psVar4 = (short *)*puVar11;
        }
        lVar10 = (longlong)puVar9 - (longlong)psVar4;
        do {
          sVar1 = *psVar4;
          sVar2 = *(short *)((longlong)psVar4 + lVar10);
          if (sVar1 != sVar2) break;
          psVar4 = psVar4 + 1;
        } while (sVar2 != 0);
        if (bVar15 != (sVar1 != sVar2)) break;
        iVar14 = iVar14 + 1;
        lVar8 = lVar8 + 1;
        puVar11 = puVar11 + 0xb;
      } while (lVar8 < lVar12);
    }
    iVar6 = iVar14 - iVar7;
    if (bVar15 == false) {
      if (iVar6 != 0) {
        puVar11 = (undefined8 *)((longlong)iVar7 * 0x58 + 0x28 + *param_1);
        do {
          TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>::
          ~TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>(puVar11 + 2);
          iVar7 = *(int *)(puVar11 + 1);
          plVar5 = (longlong *)*puVar11;
          if (iVar7 != 0) {
            do {
              if (*plVar5 != 0) {
                FMemory::Free();
              }
              plVar5 = plVar5 + 2;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            plVar5 = (longlong *)*puVar11;
          }
          if (plVar5 != (longlong *)0x0) {
            FMemory::Free(plVar5);
          }
          if (puVar11[-2] != 0) {
            FMemory::Free();
          }
          if (puVar11[-4] != 0) {
            FMemory::Free();
          }
          puVar11 = puVar11 + 0xb;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    else {
      if (iVar13 != iVar7) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar13 * 0x58 + *param_1),
                   (void *)((longlong)iVar7 * 0x58 + *param_1),(longlong)iVar6 * 0x58);
      }
      iVar13 = iVar13 + iVar6;
    }
    bVar15 = (bool)(bVar15 ^ 1);
    iVar7 = iVar14;
    if (lVar12 <= lVar8) {
      *(int *)(param_1 + 1) = iVar13;
      return iVar3 - iVar13;
    }
  } while( true );
}



// FUNCTION 1406acdb0 FUN_1406acdb0 body=285 status=ok
// SIG undefined FUN_1406acdb0(void)

undefined8 * FUN_1406acdb0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  
  *param_1 = &PTR_GetPoolName_14404c5a8;
  param_1[1] = 0;
  iVar5 = *(int *)(param_2 + 1);
  puVar6 = (undefined8 *)*param_2;
  *(int *)(param_1 + 2) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 1,iVar5,0);
    puVar4 = (undefined8 *)param_1[1];
    do {
      *puVar4 = 0;
      iVar1 = *(int *)(puVar6 + 1);
      _Src = (void *)*puVar6;
      *(int *)(puVar4 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar4,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar4,_Src,(longlong)iVar1 * 2);
      }
      puVar4 = puVar4 + 2;
      puVar6 = puVar6 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  if (((param_2 + 2 != param_1 + 3) && (*(int *)(param_2 + 3) != 0)) &&
     (plVar2 = (longlong *)param_2[2], plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))();
  }
  uVar3 = FDelegateHandle::GenerateNewID();
  param_1[6] = uVar3;
  *param_1 = &PTR_GetPoolName_14404c5f0;
  return param_1;
}



// FUNCTION 1406aced0 FUN_1406aced0 body=355 status=ok
// SIG undefined FUN_1406aced0(void)

undefined8 * FUN_1406aced0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  *param_1 = *param_2;
  FString::FString(param_1 + 1,param_2 + 1);
  FString::FString(param_1 + 3,param_2 + 3);
  param_1[5] = 0;
  iVar4 = *(int *)(param_2 + 6);
  puVar5 = (undefined8 *)param_2[5];
  *(int *)(param_1 + 6) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 5,iVar4,0);
    puVar2 = (undefined8 *)param_1[5];
    do {
      *puVar2 = 0;
      iVar1 = *(int *)(puVar5 + 1);
      _Src = (void *)*puVar5;
      *(int *)(puVar2 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar2,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar2,_Src,(longlong)iVar1 * 2);
      }
      puVar2 = puVar2 + 2;
      puVar5 = puVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[7] = 0;
  iVar4 = *(int *)(param_2 + 8);
  lVar6 = param_2[7];
  *(int *)(param_1 + 8) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_1 + 7,iVar4,0);
    lVar3 = param_1[7];
    lVar6 = lVar6 + 0x20;
    do {
      FString::FString(lVar3,lVar6 + -0x20);
      FString::FString(lVar3 + 0x10,lVar6 + -0x10);
      FString::FString(lVar3 + 0x20,lVar6);
      lVar3 = lVar3 + 0x30;
      lVar6 = lVar6 + 0x30;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  param_1[10] = param_2[10];
  return param_1;
}



// FUNCTION 1406ad040 FUN_1406ad040 body=234 status=ok
// SIG undefined FUN_1406ad040(void)

longlong FUN_1406ad040(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  
  FString::FString();
  FString::FString(param_1 + 0x10,param_2 + 0x10);
  FString::FString(param_1 + 0x20,param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = 0;
  iVar3 = *(int *)(param_2 + 0x40);
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  *(int *)(param_1 + 0x40) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 0x38,iVar3,0);
    puVar2 = *(undefined8 **)(param_1 + 0x38);
    do {
      *puVar2 = 0;
      iVar1 = *(int *)(puVar4 + 1);
      _Src = (void *)*puVar4;
      *(int *)(puVar2 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar2,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar2,_Src,(longlong)iVar1 * 2);
      }
      puVar2 = puVar2 + 2;
      puVar4 = puVar4 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  return param_1;
}



// FUNCTION 1406ad130 FUN_1406ad130 body=618 status=ok
// SIG undefined FUN_1406ad130(void)

undefined8 * FUN_1406ad130(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14404bb60;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 0xf,0);
  FGenericPlatformString::Memcpy(param_1[0xf],&DAT_143f3edc8,10);
  FWeakObjectPtr::operator=(param_1 + 0x11,0);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  puVar1 = param_1 + 0x14;
  *puVar1 = &PTR__purecall_143f740d8;
  plVar3 = (longlong *)FUN_1404cfca0();
  iVar2 = (int)plVar3[1];
  *(int *)(plVar3 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar2);
  }
  *(undefined8 **)(*plVar3 + (longlong)iVar2 * 8) = puVar1;
  *param_1 = &PTR__scalar_deleting_destructor__14404bc10;
  *puVar1 = &PTR_LAB_14404bcc0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x454e4000;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x454e4000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  return param_1;
}



// FUNCTION 1406ad3a0 FUN_1406ad3a0 body=164 status=ok
// SIG undefined FUN_1406ad3a0(void)

longlong FUN_1406ad3a0(longlong param_1,longlong param_2)

{
  FString::FString();
  FString::FString(param_1 + 0x10,param_2 + 0x10);
  FString::FString(param_1 + 0x20,param_2 + 0x20);
  FString::FString(param_1 + 0x30,param_2 + 0x30);
  FString::FString(param_1 + 0x40,param_2 + 0x40);
  FString::FString(param_1 + 0x50,param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  FString::FString(param_1 + 0x68,param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  FString::FString(param_1 + 0x80,param_2 + 0x80);
  FString::FString(param_1 + 0x90,param_2 + 0x90);
  return param_1;
}



// FUNCTION 1406ad450 ~GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator> body=150 status=ok
// SIG undefined ~GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>(void)

void rapidjson::
     GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
     ::
     ~GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
               (longlong param_1)

{
  longlong *plVar1;
  void *_Memory;
  void *pvVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    _Memory = (void *)*plVar1;
    if (_Memory != (void *)0x0) {
      do {
        pvVar2 = _Memory;
        if (_Memory == (void *)plVar1[2]) break;
        pvVar2 = *(void **)((longlong)_Memory + 0x10);
        free(_Memory);
        *plVar1 = (longlong)pvVar2;
        _Memory = pvVar2;
      } while (pvVar2 != (void *)0x0);
      if ((pvVar2 != (void *)0x0) && (pvVar2 == (void *)plVar1[2])) {
        *(undefined8 *)((longlong)pvVar2 + 8) = 0;
      }
    }
    FMemory::operator_delete(plVar1[4],1);
    FMemory::operator_delete(plVar1,0x28);
  }
  free(*(void **)(param_1 + 0x30));
  FMemory::operator_delete(*(undefined8 *)(param_1 + 0x28),1);
  return;
}



// FUNCTION 1406ad4f0 FUN_1406ad4f0 body=200 status=ok
// SIG undefined FUN_1406ad4f0(void)

void FUN_1406ad4f0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      iVar3 = (int)plVar4[8];
      plVar1 = (longlong *)plVar4[7];
      if (iVar3 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        plVar1 = (longlong *)plVar4[7];
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      if (plVar4[4] != 0) {
        FMemory::Free();
      }
      if (plVar4[2] != 0) {
        FMemory::Free();
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar4 = (longlong *)*param_1;
  }
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar4);
  return;
}



// FUNCTION 1406ad5c0 FUN_1406ad5c0 body=211 status=ok
// SIG undefined FUN_1406ad5c0(void)

void FUN_1406ad5c0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (plVar1[0x12] != 0) {
        FMemory::Free();
      }
      if (plVar1[0x10] != 0) {
        FMemory::Free();
      }
      if (plVar1[0xd] != 0) {
        FMemory::Free();
      }
      if (plVar1[10] != 0) {
        FMemory::Free();
      }
      if (plVar1[8] != 0) {
        FMemory::Free();
      }
      if (plVar1[6] != 0) {
        FMemory::Free();
      }
      if (plVar1[4] != 0) {
        FMemory::Free();
      }
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0x14;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 1406ad6a0 ~TArray<FShapeDataPaintSpline,TSizedDefaultAllocator<32>_> body=142 status=ok
// SIG undefined ~TArray<FShapeDataPaintSpline,TSizedDefaultAllocator<32>_>(void)

void TArray<FShapeDataPaintSpline,TSizedDefaultAllocator<32>_>::
     ~TArray<FShapeDataPaintSpline,TSizedDefaultAllocator<32>_>(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (plVar1[8] != 0) {
        FMemory::Free();
      }
      if (plVar1[6] != 0) {
        FMemory::Free();
      }
      if (plVar1[4] != 0) {
        FMemory::Free();
      }
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0xb;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 1406ad730 FUN_1406ad730 body=103 status=ok
// SIG undefined FUN_1406ad730(void)

void FUN_1406ad730(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 3);
  iVar2 = *(int *)(param_1 + 2);
  plVar1 = (longlong *)param_1[1];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[1];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  *param_1 = IDelegateInstance::vftable;
  return;
}



// FUNCTION 1406ad7a0 FUN_1406ad7a0 body=103 status=ok
// SIG undefined FUN_1406ad7a0(void)

void FUN_1406ad7a0(longlong *param_1)

{
  if (param_1[10] != 0) {
    FMemory::Free();
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
    return;
  }
  return;
}



// FUNCTION 1406ad810 ~FAccelByteModelsGlobalStatItemValueResponse body=128 status=ok
// SIG undefined ~FAccelByteModelsGlobalStatItemValueResponse(void)

void FAccelByteModelsGlobalStatItemValueResponse::~FAccelByteModelsGlobalStatItemValueResponse
               (longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[8];
  plVar1 = (longlong *)param_1[7];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[7];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
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



// FUNCTION 1406ad890 FUN_1406ad890 body=227 status=ok
// SIG undefined FUN_1406ad890(void)

void FUN_1406ad890(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__14404bc10;
  param_1[0x14] = &PTR_LAB_14404bcc0;
  FUN_1406aacd0();
  FAccelByteModelsGlobalStatItemValueResponse::~FAccelByteModelsGlobalStatItemValueResponse
            (param_1 + 0x3a);
  FUN_1406ad980(param_1 + 0x25);
  if (param_1[0x22] != 0) {
    FMemory::Free();
  }
  if (param_1[0x20] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1e] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1c] != 0) {
    FMemory::Free();
  }
  if (param_1[0x1a] != 0) {
    FMemory::Free();
  }
  plVar1 = (longlong *)param_1[0x19];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  plVar1 = (longlong *)param_1[0x18];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  FUN_1404bf750(param_1 + 0x14);
  FUN_1406ada20(param_1);
  return;
}



// FUNCTION 1406ad980 FUN_1406ad980 body=151 status=ok
// SIG undefined FUN_1406ad980(void)

void FUN_1406ad980(longlong *param_1)

{
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
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
    return;
  }
  return;
}



// FUNCTION 1406ada20 FUN_1406ada20 body=118 status=ok
// SIG undefined FUN_1406ada20(void)

void FUN_1406ada20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14404bb60;
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xd);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xb);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 9);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 7);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 5);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 3);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 1);
  return;
}



// FUNCTION 1406adaa0 FUN_1406adaa0 body=554 status=ok
// SIG undefined FUN_1406adaa0(void)

longlong * FUN_1406adaa0(longlong *param_1,longlong *param_2)

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
  plVar1 = param_2 + 8;
  plVar2 = param_1 + 8;
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 9) = (int)param_2[9];
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
    param_2[9] = 0;
  }
  plVar1 = param_2 + 10;
  plVar2 = param_1 + 10;
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 0xb) = (int)param_2[0xb];
    *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
    param_2[0xb] = 0;
  }
  plVar1 = param_2 + 0xd;
  plVar2 = param_1 + 0xd;
  *(char *)(param_1 + 0xc) = (char)param_2[0xc];
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 0xe) = (int)param_2[0xe];
    *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
    param_2[0xe] = 0;
  }
  plVar1 = param_2 + 0x10;
  plVar2 = param_1 + 0x10;
  *(int *)(param_1 + 0xf) = (int)param_2[0xf];
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 0x11) = (int)param_2[0x11];
    *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
    param_2[0x11] = 0;
  }
  plVar2 = param_2 + 0x12;
  plVar1 = param_1 + 0x12;
  if (plVar1 != plVar2) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar2;
    *plVar2 = 0;
    *(int *)(param_1 + 0x13) = (int)param_2[0x13];
    *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
    param_2[0x13] = 0;
  }
  return param_1;
}



// FUNCTION 1406adcd0 FUN_1406adcd0 body=164 status=ok
// SIG undefined FUN_1406adcd0(void)

longlong FUN_1406adcd0(longlong param_1,longlong param_2)

{
  FString::operator=();
  FString::operator=(param_1 + 0x10,param_2 + 0x10);
  FString::operator=(param_1 + 0x20,param_2 + 0x20);
  FString::operator=(param_1 + 0x30,param_2 + 0x30);
  FString::operator=(param_1 + 0x40,param_2 + 0x40);
  FString::operator=(param_1 + 0x50,param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x60) = *(undefined1 *)(param_2 + 0x60);
  FString::operator=(param_1 + 0x68,param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  FString::operator=(param_1 + 0x80,param_2 + 0x80);
  FString::operator=(param_1 + 0x90,param_2 + 0x90);
  return param_1;
}



// FUNCTION 1406add80 FUN_1406add80 body=325 status=ok
// SIG undefined FUN_1406add80(void)

longlong * FUN_1406add80(longlong *param_1,longlong *param_2)

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
  plVar1 = param_2 + 8;
  plVar2 = param_1 + 8;
  if (plVar2 != plVar1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    *plVar2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 9) = (int)param_2[9];
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
    param_2[9] = 0;
  }
  *(int *)(param_1 + 10) = (int)param_2[10];
  return param_1;
}



// FUNCTION 1406aded0 FUN_1406aded0 body=610 status=ok
// SIG undefined FUN_1406aded0(void)

void FUN_1406aded0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  bool bVar8;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  longlong local_88 [10];
  undefined4 local_38;
  
  local_98 = *param_3;
  plVar6 = (longlong *)0x0;
  bVar8 = false;
  local_90 = param_3[1];
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  local_88[8] = 0;
  local_88[9] = 0;
  local_38 = 0;
  local_a8 = (longlong *)0x0;
  local_a0 = 0;
  if (local_90 != 0) {
    LOCK();
    *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
    UNLOCK();
  }
  cVar4 = FUN_1406b4550(DAT_146857fe0,&local_98,&local_a8);
  plVar1 = local_a8;
  iVar7 = (int)local_a0;
  if (cVar4 != '\0') {
    bVar8 = 0 < (int)local_a0;
    plVar5 = local_88;
    if (0 < (int)local_a0) {
      plVar5 = local_a8;
    }
    FString::operator=(local_88,plVar5);
    FString::operator=(local_88 + 2,plVar5 + 2);
    FString::operator=(local_88 + 4,plVar5 + 4);
    FString::operator=(local_88 + 6,plVar5 + 6);
    FString::operator=(local_88 + 8,plVar5 + 8);
    local_38 = (undefined4)plVar5[10];
  }
  if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_1 + 0x18))();
    if (cVar4 != '\0') {
      if ((int)param_1[1] != 0) {
        plVar6 = (longlong *)*param_1;
      }
      (**(code **)(*plVar6 + 0x40))(plVar6,bVar8,local_88);
    }
  }
  if (iVar7 != 0) {
    plVar6 = plVar1 + 6;
    do {
      if (plVar6[2] != 0) {
        FMemory::Free();
      }
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      if (plVar6[-2] != 0) {
        FMemory::Free();
      }
      if (plVar6[-4] != 0) {
        FMemory::Free();
      }
      if (plVar6[-6] != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 0xb;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (local_88[8] != 0) {
    FMemory::Free();
  }
  if (local_88[6] != 0) {
    FMemory::Free();
  }
  if (local_88[4] != 0) {
    FMemory::Free();
  }
  if (local_88[2] != 0) {
    FMemory::Free();
  }
  if (local_88[0] != 0) {
    FMemory::Free();
  }
  plVar6 = *(longlong **)(param_2 + 8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar6)(plVar6);
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
  plVar6 = (longlong *)param_3[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar6)(plVar6);
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



// FUNCTION 1406ae140 FUN_1406ae140 body=548 status=ok
// SIG undefined FUN_1406ae140(void)

void FUN_1406ae140(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  bool bVar8;
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8 [12];
  undefined1 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_28 = *param_3;
  plVar6 = (longlong *)0x0;
  uVar7 = 0;
  local_20 = param_3[1];
  bVar8 = false;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  local_c8[4] = 0;
  local_c8[5] = 0;
  local_c8[6] = 0;
  local_c8[7] = 0;
  local_c8[8] = 0;
  local_c8[9] = 0;
  local_c8[10] = 0;
  local_c8[0xb] = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_d8 = (longlong *)0x0;
  local_d0 = 0;
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  cVar4 = FUN_1406b3ab0(DAT_146857fe0,&local_28,&local_d8);
  if (cVar4 != '\0') {
    uVar7 = 1;
    bVar8 = 0 < (int)local_d0;
    plVar5 = local_c8;
    if (0 < (int)local_d0) {
      plVar5 = local_d8;
    }
    FUN_1406adcd0(local_c8,plVar5);
  }
  if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_1 + 0x18))();
    if (cVar4 != '\0') {
      if ((int)param_1[1] != 0) {
        plVar6 = (longlong *)*param_1;
      }
      (**(code **)(*plVar6 + 0x40))(plVar6,uVar7,bVar8,local_c8);
    }
  }
  FUN_1406ad5c0(&local_d8);
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_c8[10] != 0) {
    FMemory::Free();
  }
  if (local_c8[8] != 0) {
    FMemory::Free();
  }
  if (local_c8[6] != 0) {
    FMemory::Free();
  }
  if (local_c8[4] != 0) {
    FMemory::Free();
  }
  if (local_c8[2] != 0) {
    FMemory::Free();
  }
  if (local_c8[0] != 0) {
    FMemory::Free();
  }
  plVar6 = *(longlong **)(param_2 + 8);
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
  plVar6 = (longlong *)param_3[1];
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
  return;
}



// FUNCTION 1406ae370 FUN_1406ae370 body=911 status=ok
// SIG undefined FUN_1406ae370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406ae370(longlong *param_1,char param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98 [2];
  code *local_88;
  undefined8 local_80;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar5 = *param_1;
  if (param_2 == '\0') {
    plVar2 = (longlong *)0x0;
    local_a8 = 0;
    local_58 = (longlong *)0x0;
    local_a0 = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_88 = (code *)0x0;
    local_80 = 0;
    local_78[0] = 0;
    local_78[1] = 0;
    local_78[2] = 0;
    local_78[3] = 0;
    FUN_1406add80(lVar5 + 0xd0,&local_a8);
    if (local_78[2] != 0) {
      FMemory::Free();
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    if (local_88 != (code *)0x0) {
      FMemory::Free();
    }
    if (local_98[0] != 0) {
      FMemory::Free();
    }
    if (local_a8 != 0) {
      FMemory::Free();
    }
    lVar5 = *param_1;
    if (((*(int *)(lVar5 + 0x70) != 0) && (*(longlong **)(lVar5 + 0x68) != (longlong *)0x0)) &&
       (cVar1 = (**(code **)(**(longlong **)(lVar5 + 0x68) + 0x18))(), cVar1 != '\0')) {
      if (*(int *)(lVar5 + 0x70) != 0) {
        plVar2 = *(longlong **)(lVar5 + 0x68);
      }
      (**(code **)(*plVar2 + 0x40))(plVar2);
    }
  }
  else {
    FString::operator=(lVar5 + 0xd0,param_3);
    FString::operator=(lVar5 + 0xe0,param_3 + 0x10);
    FString::operator=(lVar5 + 0xf0,param_3 + 0x20);
    FString::operator=(lVar5 + 0x100,param_3 + 0x30);
    FString::operator=(lVar5 + 0x110,param_3 + 0x40);
    *(undefined4 *)(lVar5 + 0x120) = *(undefined4 *)(param_3 + 0x50);
    lVar5 = *param_1;
    if ((*(longlong *)(lVar5 + 0xb8) == 0) &&
       (cVar1 = FWeakObjectPtr::IsValid(lVar5 + 0x88), cVar1 != '\0')) {
      plVar2 = (longlong *)FWeakObjectPtr::Get(lVar5 + 0x88);
      lVar3 = (**(code **)(*plVar2 + 0x148))(plVar2);
      if (lVar3 != 0) {
        local_b8 = FUN_1406bca90;
        uStack_b0 = 0;
        plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
        if (plVar2 != (longlong *)0x0) {
          plVar2[1] = lVar5;
          *plVar2 = (longlong)&PTR_GetPoolName_143f77a38;
          *(undefined4 *)(plVar2 + 2) = (undefined4)local_b8;
          *(undefined4 *)((longlong)plVar2 + 0x14) = local_b8._4_4_;
          *(undefined4 *)(plVar2 + 3) = uStack_b0;
          *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_ac;
          lVar4 = FDelegateHandle::GenerateNewID();
          plVar2[5] = lVar4;
          *plVar2 = (longlong)&PTR_GetPoolName_143f77a80;
        }
        if (*(longlong *)(lVar3 + 400) == 0) {
          uVar6 = *(undefined8 *)(lVar3 + 0x3f8);
        }
        else {
          uVar6 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
        }
        local_a8 = 0;
        local_a0 = (ulonglong)local_a0._4_4_ << 0x20;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x30))(plVar2,&local_a8);
        }
        FWeakObjectPtr::operator=(local_98,0);
        local_98[1] = 0;
        local_c0 = 0;
        local_c8 = 1;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        local_88 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar6,lVar5 + 0xb8,&local_a8,0x41200000);
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
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          lVar5 = FMemory::Realloc(plVar2,0,0);
          if (lVar5 != 0) {
            FMemory::Free(lVar5);
          }
        }
      }
    }
    lVar5 = *param_1;
    lVar3 = *(longlong *)(lVar5 + 200);
    if (lVar3 != 0) {
      if ((*(longlong *)(lVar3 + 0x70) == 0) || (*(char *)(lVar3 + 0x40) == '\0')) {
        lVar4 = FUN_1406b2850(&local_b8);
        if ((1 < *(int *)(lVar4 + 8)) && (1 < *(int *)(lVar5 + 0xd8))) {
          FString::operator=(lVar3 + 0x20,lVar4);
          FString::operator=(lVar3 + 0x30,lVar5 + 0xd0);
          FUN_1406b5b10(lVar3);
        }
      }
      else {
        lVar4 = FUN_1406b2850(&local_b8);
        if ((1 < *(int *)(lVar4 + 8)) && (1 < *(int *)(lVar5 + 0xd8))) {
          FString::operator=(lVar3 + 0x20,lVar4);
          FString::operator=(lVar3 + 0x30,lVar5 + 0xd0);
        }
      }
      if (local_b8 != (code *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1406ae700 FUN_1406ae700 body=206 status=ok
// SIG undefined FUN_1406ae700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1406ae700(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  lVar5 = DAT_146857fe0;
  if ((DAT_146857fe0 != 0) && (DAT_1468c2185 == '\0')) {
    lVar5 = 0;
    if (DAT_146857ff0 != 0) {
      iVar2 = *(int *)(DAT_146857ff0 + 0xc);
      lVar4 = lVar5;
      if (iVar2 < (int)DAT_1469e91c4) {
        uVar6 = iVar2 >> 0x1f & 0xffff;
        uVar3 = iVar2 + uVar6;
        lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
      }
      *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) & 0xbfffffff;
      DAT_146857ff0 = 0;
    }
    iVar2 = *(int *)(DAT_146857fe0 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar6 = iVar2 >> 0x1f & 0xffff;
      uVar3 = iVar2 + uVar6;
      lVar4 = (longlong)(int)((uVar3 & 0xffff) - uVar6);
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8);
      puVar1 = (uint *)(lVar5 + 8 + lVar4 * 0x18);
      *puVar1 = *puVar1 & 0xbfffffff;
      DAT_146857fe0 = 0;
      return lVar5 + lVar4 * 0x18;
    }
    _DAT_00000008 = _DAT_00000008 & 0xbfffffff;
  }
  DAT_146857fe0 = lVar5;
  return lVar5;
}



// FUNCTION 1406ae7d0 FUN_1406ae7d0 body=695 status=ok
// SIG undefined FUN_1406ae7d0(void)

void FUN_1406ae7d0(longlong *param_1,char param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 uVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  int iVar13;
  longlong local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined4 local_b7;
  undefined2 local_b3;
  undefined1 local_b1;
  longlong *local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined4 local_9f;
  undefined2 local_9b;
  undefined1 local_99;
  longlong local_98;
  longlong local_90;
  longlong local_88 [2];
  longlong local_78;
  longlong local_68;
  longlong *local_50;
  int local_48;
  
  puVar11 = (undefined2 *)0x0;
  *(undefined1 *)(*param_1 + 0x221) = 0;
  if (param_2 == '\0') {
    return;
  }
  bVar2 = *(int *)(param_3 + 0x18) < 1;
  if (bVar2) {
    local_b7 = 0;
    plVar6 = &local_e8;
    local_b3 = 0;
    local_b1 = 0;
    local_9f = 0;
    local_9b = 0;
    local_99 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = (longlong *)0x0;
    local_a8 = 0;
    local_a0 = 0;
  }
  else {
    plVar6 = (longlong *)FUN_1406ad040(local_88,*(undefined8 *)(param_3 + 0x10));
    puVar11 = (undefined2 *)*plVar6;
  }
  *plVar6 = 0;
  lVar3 = plVar6[1];
  plVar6[1] = 0;
  lVar7 = plVar6[2];
  plVar6[2] = 0;
  plVar6[3] = 0;
  local_90 = lVar7;
  lVar7 = plVar6[4];
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar1 = (longlong *)plVar6[7];
  plVar6[7] = 0;
  plVar5 = local_b0;
  iVar12 = (int)plVar6[8];
  plVar6[8] = 0;
  lVar4 = plVar6[9];
  local_98 = lVar7;
  if (bVar2) {
    plVar6 = local_b0;
    for (iVar13 = (int)local_a8; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (plVar5 != (longlong *)0x0) {
      FMemory::Free(plVar5);
    }
    if (local_c8 != 0) {
      FMemory::Free();
    }
    if (local_d8 != 0) {
      FMemory::Free();
    }
    if (local_e8 != 0) {
      FMemory::Free();
    }
  }
  plVar6 = local_50;
  iVar13 = local_48;
  if (!bVar2) {
    for (; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 2;
    }
    if (local_50 != (longlong *)0x0) {
      FMemory::Free(local_50);
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
    if (local_78 != 0) {
      FMemory::Free();
    }
    if (local_88[0] != 0) {
      FMemory::Free();
    }
  }
  if ((char)lVar4 != '\0') {
    if ((int)param_1[2] == 0) {
      puVar10 = &DAT_143f3eda8;
    }
    else {
      puVar10 = (undefined2 *)param_1[1];
    }
    puVar9 = &DAT_143f3eda8;
    if ((int)lVar3 != 0) {
      puVar9 = puVar11;
    }
    iVar13 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar10);
    if (iVar13 == 0) {
      uVar8 = 1;
      goto LAB_1406ae9cf;
    }
  }
  uVar8 = 0;
LAB_1406ae9cf:
  *(undefined1 *)(*param_1 + 0x221) = uVar8;
  lVar7 = *param_1;
  if (*(char *)(lVar7 + 0x221) == '\0') {
    FUN_1406aee90(lVar7);
    lVar7 = *param_1;
  }
  FUN_1406b1620(lVar7 + 0x48,*(undefined1 *)(lVar7 + 0x220),*(undefined1 *)(lVar7 + 0x221));
  plVar6 = plVar1;
  for (; iVar12 != 0; iVar12 = iVar12 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (local_98 != 0) {
    FMemory::Free(local_98);
  }
  if (local_90 != 0) {
    FMemory::Free(local_90);
  }
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free(puVar11);
  }
  return;
}



// FUNCTION 1406aea90 FUN_1406aea90 body=399 status=ok
// SIG undefined FUN_1406aea90(void)

void FUN_1406aea90(longlong *param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  plVar5 = (longlong *)0x0;
  local_28 = 0;
  local_20 = 0;
  if (param_4 != '\0') {
    local_18 = *param_3;
    local_10 = param_3[1];
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    cVar4 = FUN_1406b4550(DAT_146857fe0,&local_18,&local_28);
    if (cVar4 != '\0') {
      uVar6 = 1;
      goto LAB_1406aeafa;
    }
  }
  uVar6 = 0;
LAB_1406aeafa:
  if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_1 + 0x18))();
    if (cVar4 != '\0') {
      if ((int)param_1[1] != 0) {
        plVar5 = (longlong *)*param_1;
      }
      (**(code **)(*plVar5 + 0x40))(plVar5,uVar6,&local_28);
    }
  }
  if ((int)local_20 != 0) {
    plVar5 = (longlong *)(local_28 + 0x30);
    iVar7 = (int)local_20;
    do {
      if (plVar5[2] != 0) {
        FMemory::Free();
      }
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      if (plVar5[-2] != 0) {
        FMemory::Free();
      }
      if (plVar5[-4] != 0) {
        FMemory::Free();
      }
      if (plVar5[-6] != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 0xb;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  plVar5 = *(longlong **)(param_2 + 8);
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
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  plVar5 = (longlong *)param_3[1];
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
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 1406aec20 FUN_1406aec20 body=9 status=ok
// SIG undefined FUN_1406aec20(void)

void FUN_1406aec20(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001406aec23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa8))();
  return;
}



// FUNCTION 1406aec30 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_d8e34ae39ecb18b94489326e440868a5>,1>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 1);
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1406aec80 FUN_1406aec80 body=52 status=ok
// SIG undefined FUN_1406aec80(void)

undefined8 FUN_1406aec80(undefined8 param_1,ulonglong param_2)

{
  FUN_1406ad730();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1406aecc0 FUN_1406aecc0 body=110 status=ok
// SIG undefined FUN_1406aecc0(void)

undefined8 * FUN_1406aecc0(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14404be28;
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  param_1[2] = 0;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1406aed30 FUN_1406aed30 body=147 status=ok
// SIG undefined FUN_1406aed30(void)

undefined8 * FUN_1406aed30(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_StartProfileThreadUsage_14404bde0;
  FUN_1406be420();
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
  FUN_1404bf750(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1406aedd0 FUN_1406aedd0 body=189 status=ok
// SIG undefined FUN_1406aedd0(void)

undefined8 * FUN_1406aedd0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_14404bd98;
  FUN_1406be2d0();
  plVar4 = (longlong *)param_1[0xf];
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
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  FUN_1404bf750(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1406aee90 FUN_1406aee90 body=942 status=ok
// SIG undefined FUN_1406aee90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406aee90(longlong param_1)

{
  void *pvVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  void *pvVar5;
  longlong lVar6;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  int local_e0;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  longlong local_c8 [3];
  undefined4 local_b0;
  undefined8 *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  plVar2 = (longlong *)UNavCollisionBase::GetPrivateStaticClass();
  lVar4 = plVar2[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar4 = plVar2[0x1f];
  }
  plVar2 = (longlong *)0x0;
  local_d8 = (void *)0x0;
  local_d0 = *(int *)(lVar4 + 0x60);
  lVar6 = (longlong)local_d0;
  pvVar5 = *(void **)(lVar4 + 0x58);
  if (local_d0 == 0) {
    local_cc = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d8,local_d0,0);
    _guard_xfg_dispatch_icall_nop(local_d8,pvVar5,lVar6 * 2);
  }
  plVar3 = (longlong *)operator_new(0x28);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = 0;
    plVar3[1] = 0x10000;
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar2 = plVar3;
  }
  local_48 = &local_38;
  local_38 = 0;
  local_68 = &local_58;
  local_58 = 0;
  local_88 = &local_78;
  local_78 = 0;
  local_a8 = &local_98;
  local_90 = 0x3000000000000;
  local_30 = 0x3000000000000;
  local_50 = 0x3000000000000;
  local_70 = 0x3000000000000;
  local_98 = 0;
  local_a0 = plVar2;
  local_80 = plVar2;
  local_60 = plVar2;
  local_40 = plVar2;
  FUN_142ab6050(&local_a8,"active",1);
  FUN_142ab64b0(&local_a8,&DAT_1440463fc,&local_d8);
  FUN_142ab64b0(&local_a8,"version",param_1 + 0x1e0);
  UE4Function_Private::
  TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
  ::Call(&local_88,&DAT_14404653c,&local_a8);
  UE4Function_Private::
  TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
  ::Call(&local_68,"overlay",&local_88);
  UE4Function_Private::
  TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
  ::Call(&local_48,&DAT_14404b300,&local_68);
  local_c8[0] = 0;
  local_c8[1] = 0;
  FUN_142ab6640(&local_48,local_c8);
  local_e8 = (longlong *)0x0;
  local_e0 = 0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar3 == (longlong *)0x0) {
    if (((local_e0 != 0) && (local_e8 != (longlong *)0x0)) &&
       ((**(code **)(*local_e8 + 0x28))(local_e8,0), local_e8 != (longlong *)0x0)) {
      local_e8 = (longlong *)FMemory::Realloc(local_e8,0,0);
    }
  }
  else {
    plVar3[1] = param_1;
    *plVar3 = (longlong)&PTR_GetPoolName_14404c518;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_14404c560;
    FUN_1406b0110(plVar3,&local_e8);
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    lVar4 = FMemory::Realloc(plVar3,0,0);
    if (lVar4 != 0) {
      FMemory::Free(lVar4);
    }
  }
  local_c8[2] = 0;
  local_b0 = 0;
  if ((local_e0 != 0) && (local_e8 != (longlong *)0x0)) {
    (**(code **)(*local_e8 + 0x30))(local_e8,local_c8 + 2);
  }
  FUN_1406bb210(local_c8,local_c8 + 2);
  if (local_e0 != 0) {
    if (local_e8 == (longlong *)0x0) goto LAB_1406af18f;
    (**(code **)(*local_e8 + 0x28))(local_e8,0);
    if (local_e8 != (longlong *)0x0) {
      local_e8 = (longlong *)FMemory::Realloc(local_e8,0,0);
    }
    local_e0 = 0;
  }
  if (local_e8 != (longlong *)0x0) {
    FMemory::Free(local_e8);
  }
LAB_1406af18f:
  if (local_c8[0] != 0) {
    FMemory::Free();
  }
  if (plVar2 != (longlong *)0x0) {
    pvVar5 = (void *)*plVar2;
    if (pvVar5 != (void *)0x0) {
      do {
        if (pvVar5 == (void *)plVar2[2]) break;
        pvVar1 = *(void **)((longlong)pvVar5 + 0x10);
        free(pvVar5);
        *plVar2 = (longlong)pvVar1;
        pvVar5 = pvVar1;
      } while (pvVar1 != (void *)0x0);
      lVar4 = *plVar2;
      if ((lVar4 != 0) && (lVar4 == plVar2[2])) {
        *(undefined8 *)(lVar4 + 8) = 0;
      }
    }
    FMemory::operator_delete(plVar2[4],1);
    FMemory::operator_delete(plVar2,0x28);
  }
  free((void *)0x0);
  FMemory::operator_delete(0,1);
  if (local_d8 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406af240 FUN_1406af240 body=749 status=ok
// SIG undefined FUN_1406af240(void)

longlong * FUN_1406af240(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 *_Src;
  int local_res8;
  longlong local_res20;
  undefined2 *local_80;
  undefined8 local_78;
  undefined2 *local_70;
  undefined8 local_68;
  undefined2 *local_60;
  int local_58;
  int local_54;
  
  *param_1 = 0;
  param_1[1] = 0;
  local_res8 = 0;
  if ((int)param_3[1] < 1) {
    return param_1;
  }
  local_res20 = 0;
  do {
    if (0x63f < local_res20) {
      return param_1;
    }
    lVar1 = *param_3;
    local_70 = (undefined2 *)0x0;
    iVar6 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      iVar6 = 0;
    }
    local_68._0_4_ = iVar6 + 2;
    local_68._4_4_ = 0;
    if (0 < (int)local_68) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_70,0);
    }
    iVar4 = local_68._4_4_;
    iVar3 = (int)local_68;
    puVar7 = local_70;
    *local_70 = 0x26;
    _guard_xfg_dispatch_icall_nop(local_70 + 1,(void *)*param_2,(longlong)iVar6 * 2);
    puVar7[(longlong)iVar6 + 1] = 0;
    iVar6 = *(int *)(local_res20 + 8 + lVar1);
    local_70 = (undefined2 *)0x0;
    local_68 = 0;
    if (iVar3 < 2) {
      local_60 = (undefined2 *)0x0;
      pvVar2 = *(void **)(local_res20 + lVar1);
      local_58 = iVar6;
      if (iVar6 == 0) {
        local_54 = 0;
        _Src = (undefined2 *)0x0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_60,iVar6);
        _Src = local_60;
        _guard_xfg_dispatch_icall_nop(local_60,pvVar2,(longlong)iVar6 * 2);
        iVar6 = local_58;
      }
    }
    else {
      iVar5 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      if ((iVar3 != 0) || (iVar6 = 1, iVar5 == 0)) {
        iVar6 = 0;
      }
      local_80 = puVar7;
      local_78._4_4_ = iVar4;
      if (iVar4 < iVar6 + iVar3 + iVar5) {
        local_78._0_4_ = iVar3;
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_80);
        iVar3 = (int)local_78;
      }
      pvVar2 = *(void **)(local_res20 + lVar1);
      _Src = local_80;
      iVar6 = iVar3;
      iVar4 = local_78._4_4_;
      if (iVar5 != 0) {
        local_78._0_4_ = iVar3 + (uint)(iVar3 == 0) + iVar5;
        if (local_78._4_4_ < (int)local_78) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,iVar3);
        }
        iVar4 = local_78._4_4_;
        iVar6 = (int)local_78;
        _Src = local_80;
        puVar7 = local_80 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0));
        _guard_xfg_dispatch_icall_nop(puVar7,pvVar2,(longlong)iVar5 * 2);
        puVar7[iVar5] = 0;
      }
      local_80 = (undefined2 *)0x0;
      local_78 = 0;
      puVar7 = (undefined2 *)0x0;
      local_54 = iVar4;
    }
    if ((iVar6 != 0) && (iVar6 = iVar6 + -1, iVar6 != 0)) {
      iVar3 = (int)param_1[1];
      iVar4 = (uint)(iVar3 == 0) + iVar3 + iVar6;
      *(int *)(param_1 + 1) = iVar4;
      if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,iVar3,0);
      }
      pvVar2 = (void *)(*param_1 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar2,_Src,(longlong)iVar6 * 2);
      *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar2) = 0;
    }
    if (_Src != (undefined2 *)0x0) {
      FMemory::Free(_Src);
    }
    if (puVar7 != (undefined2 *)0x0) {
      FMemory::Free(puVar7);
    }
    local_res8 = local_res8 + 1;
    local_res20 = local_res20 + 0x10;
  } while (local_res8 < (int)param_3[1]);
  return param_1;
}



// FUNCTION 1406af530 FUN_1406af530 body=1580 status=ok
// SIG undefined FUN_1406af530(void)

longlong * FUN_1406af530(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined2 **ppuVar2;
  void *pvVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  undefined2 *puVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  undefined2 *puVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  int iVar19;
  undefined2 *puVar20;
  void *local_d8;
  uint local_d0;
  int local_cc;
  int local_c8;
  uint uStack_c4;
  uint *puStack_c0;
  undefined4 local_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined2 *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  int iStack_68;
  uint uStack_64;
  uint *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  pvVar8 = DAT_14622cc60;
  pvVar7 = (void *)0x0;
  local_d8 = (void *)0x0;
  uVar12 = (uint)DAT_14622cc68;
  local_d0 = uVar12;
  if (uVar12 == 0) {
    local_cc = 0;
    uVar14 = DAT_14622cc68;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d8,DAT_14622cc68 & 0xffffffff,0);
    pvVar7 = local_d8;
    _guard_xfg_dispatch_icall_nop(local_d8,pvVar8,(longlong)(int)uVar12 * 2);
    uVar14 = (ulonglong)local_d0;
  }
  iVar9 = local_cc;
  iVar19 = *(int *)(param_3 + 0x34);
  if (0 < iVar19) {
    iVar13 = 100;
    if (iVar19 < 0x65) {
      iVar13 = iVar19;
    }
    *(int *)(param_3 + 0x34) = iVar13;
    FString::PrintfImpl(&local_a8);
    puVar20 = local_a8;
    if ((int)local_a0 == 0) {
      iVar19 = 0;
    }
    else {
      iVar19 = (int)local_a0 + -1;
    }
    if (iVar19 != 0) {
      iVar13 = (int)uVar14;
      local_d0 = (uint)(iVar13 == 0) + iVar19 + iVar13;
      if (iVar9 < (int)local_d0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,uVar14 & 0xffffffff);
        pvVar7 = local_d8;
      }
      uVar14 = (ulonglong)local_d0;
      pvVar8 = (void *)((longlong)pvVar7 + ((longlong)iVar13 - (ulonglong)(iVar13 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar8,puVar20,(longlong)iVar19 * 2);
      *(undefined2 *)((longlong)iVar19 * 2 + (longlong)pvVar8) = 0;
    }
    if (local_a8 != (undefined2 *)0x0) {
      FMemory::Free(local_a8);
    }
  }
  puVar20 = &DAT_143f3eda8;
  if (*(int *)(param_3 + 0x40) < 2) {
LAB_1406af99f:
    if (1 < *(int *)(param_3 + 0x50)) {
      if (*(int *)(param_3 + 0x50) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = *(undefined2 **)(param_3 + 0x48);
      }
      FString::PrintfImpl(&local_c8,L"&user_login=%s",puVar15);
      if ((int)puStack_c0 == 0) {
        iVar19 = 0;
      }
      else {
        iVar19 = (int)puStack_c0 + -1;
      }
      pvVar8 = (void *)CONCAT44(uStack_c4,local_c8);
      if (iVar19 != 0) {
        iVar9 = (int)uVar14;
        local_d0 = (uint)(iVar9 == 0) + iVar9 + iVar19;
        if (local_cc < (int)local_d0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,uVar14 & 0xffffffff);
          pvVar7 = local_d8;
        }
        uVar14 = (ulonglong)local_d0;
        pvVar3 = (void *)((longlong)pvVar7 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar3,pvVar8,(longlong)iVar19 * 2);
        *(undefined2 *)((longlong)iVar19 * 2 + (longlong)pvVar3) = 0;
        pvVar8 = (void *)CONCAT44(uStack_c4,local_c8);
      }
      if (pvVar8 != (void *)0x0) {
        FMemory::Free(pvVar8);
      }
    }
    uVar12 = (uint)uVar14;
    if (1 < *(int *)(param_3 + 0x60)) {
      if (*(int *)(param_3 + 0x60) != 0) {
        puVar20 = *(undefined2 **)(param_3 + 0x58);
      }
      FString::PrintfImpl(&local_c8,L"&language=%s",puVar20);
      if ((int)puStack_c0 == 0) {
        iVar19 = 0;
      }
      else {
        iVar19 = (int)puStack_c0 + -1;
      }
      pvVar8 = (void *)CONCAT44(uStack_c4,local_c8);
      if (iVar19 != 0) {
        local_d0 = (uVar12 == 0) + uVar12 + iVar19;
        if (local_cc < (int)local_d0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,uVar14 & 0xffffffff);
          pvVar7 = local_d8;
        }
        uVar4 = local_d0;
        pvVar3 = (void *)((longlong)pvVar7 + ((longlong)(int)uVar12 - (ulonglong)(uVar12 != 0)) * 2)
        ;
        _guard_xfg_dispatch_icall_nop(pvVar3,pvVar8,(longlong)iVar19 * 2);
        *(undefined2 *)((longlong)iVar19 * 2 + (longlong)pvVar3) = 0;
        pvVar8 = (void *)CONCAT44(uStack_c4,local_c8);
        uVar12 = uVar4;
      }
      if (pvVar8 != (void *)0x0) {
        FMemory::Free(pvVar8);
      }
    }
    *param_2 = (longlong)pvVar7;
    *(int *)((longlong)param_2 + 0xc) = local_cc;
    *(uint *)(param_2 + 1) = uVar12;
  }
  else {
    iVar19 = *(int *)(param_1 + 0x50);
    puStack_c0 = (uint *)(param_1 + 0x38);
    local_a8 = (undefined2 *)0x0;
    local_a0 = 0;
    local_c8 = 0;
    plVar1 = (longlong *)(param_1 + 0x28);
    uStack_c4 = 1;
    iStack_b4 = 0;
    iStack_b0 = 0;
    if (iVar19 != 0) {
      puVar18 = *(uint **)(param_1 + 0x48);
      if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
        puVar18 = puStack_c0;
      }
      uVar12 = *puVar18;
      while (uVar12 == 0) {
        lVar11 = (longlong)local_c8;
        iStack_b0 = iStack_b0 + 0x20;
        iVar9 = local_c8 + 1;
        bVar5 = (int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_c8;
        local_c8 = iVar9;
        if (bVar5) goto LAB_1406af745;
        uVar12 = puVar18[lVar11 + 1];
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
      iStack_b4 = (iStack_b0 - iVar9) + 0x1f;
      if (iVar19 < iStack_b4) {
LAB_1406af745:
        iStack_b4 = iVar19;
      }
    }
    local_b8 = 0xffffffff;
    uStack_90 = CONCAT44(uStack_c4,local_c8);
    uVar12 = *(uint *)(param_1 + 0x50);
    uStack_80 = CONCAT44(iStack_b4,0xffffffff);
    uStack_78 = CONCAT44(uStack_ac,iStack_b0);
    uVar4 = *(uint *)(param_1 + 0x50);
    uVar16 = -1 << ((byte)uVar4 & 0x1f);
    uVar17 = uVar4 & 0xffffffe0;
    uStack_88 = CONCAT44(uVar4,uVar16);
    iStack_68 = local_c8;
    uStack_64 = uStack_c4;
    local_98 = plVar1;
    local_60 = puStack_c0;
    uStack_58 = uStack_80;
    local_50 = uStack_78;
    local_70 = plVar1;
    uVar6 = uStack_88;
    if (uVar4 != uVar12) {
      puVar18 = *(uint **)(param_1 + 0x48);
      if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
        puVar18 = puStack_c0;
      }
      uVar16 = puVar18[(int)uVar4 >> 5] & uVar16;
      iVar19 = (int)uVar4 >> 5;
      while (uVar16 == 0) {
        uVar17 = uVar17 + 0x20;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar19)
        goto LAB_1406af820;
        uVar16 = puVar18[(longlong)iVar19 + 1];
        uStack_88 = 0xffffffff;
        iVar19 = iVar19 + 1;
      }
      uVar16 = -uVar16 & uVar16;
      iVar19 = 0x1f;
      if (uVar16 != 0) {
        for (; uVar16 >> iVar19 == 0; iVar19 = iVar19 + -1) {
        }
      }
      if (uVar16 == 0) {
        iVar19 = 0x20;
      }
      else {
        iVar19 = 0x1f - iVar19;
      }
      iVar19 = (uVar17 - iVar19) + 0x1f;
      uStack_88 = CONCAT44(iVar19,(undefined4)uStack_88);
      uVar6 = uStack_88;
      if ((int)uVar12 < iVar19) {
LAB_1406af820:
        uStack_88 = CONCAT44(uVar12,(undefined4)uStack_88);
        uVar6 = uStack_88;
      }
    }
    while( true ) {
      if (((uStack_58._4_4_ == (int)((ulonglong)uVar6 >> 0x20)) && (local_60 == puStack_c0)) &&
         (local_70 == plVar1)) goto LAB_1406af9b7;
      ppuVar2 = (undefined2 **)(*local_70 + (longlong)uStack_58._4_4_ * 0x28);
      if (*(int *)(param_3 + 0x40) == 0) {
        puVar15 = &DAT_143f3eda8;
      }
      else {
        puVar15 = *(undefined2 **)(param_3 + 0x38);
      }
      if (*(int *)(ppuVar2 + 3) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = ppuVar2[2];
      }
      iVar19 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar15);
      if (iVar19 == 0) break;
      uStack_58 = CONCAT44(uStack_58._4_4_,(uint)uStack_58 & ~uStack_64);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_68);
    }
    if (&local_a8 != ppuVar2) {
      iVar19 = *(int *)(ppuVar2 + 1);
      puVar15 = *ppuVar2;
      local_a0 = CONCAT44(local_a0._4_4_,iVar19);
      if (iVar19 == 0) {
        iVar19 = 0;
        puVar10 = local_a8;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,iVar19,0);
        puVar10 = local_a8;
        _guard_xfg_dispatch_icall_nop(local_a8,puVar15,(longlong)iVar19 * 2);
        iVar19 = (int)local_a0;
      }
      if (1 < iVar19) {
        puVar15 = &DAT_143f3eda8;
        if (iVar19 != 0) {
          puVar15 = puVar10;
        }
        FString::PrintfImpl(&local_c8,L"&game_id=%s",puVar15);
        if ((int)puStack_c0 == 0) {
          iVar19 = 0;
        }
        else {
          iVar19 = (int)puStack_c0 + -1;
        }
        pvVar8 = (void *)CONCAT44(uStack_c4,local_c8);
        if (iVar19 != 0) {
          iVar9 = (int)uVar14;
          local_d0 = (uint)(iVar9 == 0) + iVar19 + iVar9;
          if (local_cc < (int)local_d0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,uVar14 & 0xffffffff);
            pvVar7 = local_d8;
          }
          uVar14 = (ulonglong)local_d0;
          pvVar3 = (void *)((longlong)pvVar7 + ((longlong)iVar9 - (ulonglong)(iVar9 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar3,pvVar8,(longlong)iVar19 * 2);
          *(undefined2 *)((longlong)iVar19 * 2 + (longlong)pvVar3) = 0;
          pvVar8 = (void *)CONCAT44(uStack_c4,local_c8);
          puVar10 = local_a8;
        }
        if (pvVar8 != (void *)0x0) {
          FMemory::Free(pvVar8);
        }
        if (puVar10 != (undefined2 *)0x0) {
          FMemory::Free(puVar10);
        }
        goto LAB_1406af99f;
      }
    }
LAB_1406af9b7:
    *param_2 = 0;
    param_2[1] = 0;
    if (local_a8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
  }
  return param_2;
}



// FUNCTION 1406afb60 FUN_1406afb60 body=630 status=ok
// SIG undefined FUN_1406afb60(void)

undefined8 FUN_1406afb60(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  double dVar8;
  longlong local_58 [10];
  
  local_58[1] = 6;
  local_58[6] = 0;
  local_58[7] = 0;
  local_58[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],L"error",0xc);
  cVar5 = FUN_1416b40a0(*param_2,local_58,local_58 + 6);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (cVar5 == '\0') {
    if (local_58[6] != 0) {
      FMemory::Free();
    }
    plVar7 = (longlong *)param_2[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
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
    plVar7 = *(longlong **)(param_3 + 8);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
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
    uVar6 = 0;
  }
  else {
    local_58[2] = 0;
    local_58[3] = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58 + 2,0);
    FGenericPlatformString::Memcpy(local_58[2],L"status",0xe);
    dVar8 = (double)FJsonObject::GetNumberField(*param_2,local_58 + 2);
    if (local_58[2] != 0) {
      FMemory::Free();
    }
    local_58[4] = 0;
    local_58[5] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58 + 4,0);
    FGenericPlatformString::Memcpy(local_58[4],L"message",0x10);
    FJsonObject::GetStringField(*param_2,local_58 + 8,local_58 + 4);
    if (local_58[4] != 0) {
      FMemory::Free();
    }
    if ((((int)dVar8 == 0x191) && (DAT_146858058 != 0)) && (DAT_146858050 != (longlong *)0x0)) {
      cVar5 = (**(code **)(*DAT_146858050 + 0x18))();
      if (cVar5 != '\0') {
        plVar7 = (longlong *)0x0;
        if (DAT_146858058 != 0) {
          plVar7 = DAT_146858050;
        }
        (**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    if (local_58[8] != 0) {
      FMemory::Free();
    }
    if (local_58[6] != 0) {
      FMemory::Free();
    }
    plVar7 = (longlong *)param_2[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
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
    plVar7 = *(longlong **)(param_3 + 8);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
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
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 1406afde0 FUN_1406afde0 body=110 status=ok
// SIG undefined FUN_1406afde0(void)

void FUN_1406afde0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new();
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_14404c128;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    if ((((longlong *)(param_1 + 8) != puVar2 + 1) && (*(int *)(param_1 + 0x10) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 8), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar2 = &PTR_GetPoolName_14404c170;
  }
  return;
}



// FUNCTION 1406afe50 FUN_1406afe50 body=110 status=ok
// SIG undefined FUN_1406afe50(void)

void FUN_1406afe50(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new();
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_14404c098;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    if ((((longlong *)(param_1 + 8) != puVar2 + 1) && (*(int *)(param_1 + 0x10) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 8), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar2 = &PTR_GetPoolName_14404c0e0;
  }
  return;
}



// FUNCTION 1406afec0 FUN_1406afec0 body=110 status=ok
// SIG undefined FUN_1406afec0(void)

void FUN_1406afec0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new();
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_14404bf78;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    if ((((longlong *)(param_1 + 8) != puVar2 + 1) && (*(int *)(param_1 + 0x10) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 8), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar2 = &PTR_GetPoolName_14404bfc0;
  }
  return;
}



// FUNCTION 1406aff30 FUN_1406aff30 body=110 status=ok
// SIG undefined FUN_1406aff30(void)

void FUN_1406aff30(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new();
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_14404c008;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    if ((((longlong *)(param_1 + 8) != puVar2 + 1) && (*(int *)(param_1 + 0x10) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 8), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar2 = &PTR_GetPoolName_14404c050;
  }
  return;
}



// FUNCTION 1406affa0 FUN_1406affa0 body=110 status=ok
// SIG undefined FUN_1406affa0(void)

void FUN_1406affa0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new();
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_14404c1b8;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    if ((((longlong *)(param_1 + 8) != puVar2 + 1) && (*(int *)(param_1 + 0x10) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 8), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar2 = &PTR_GetPoolName_14404c200;
  }
  return;
}



// FUNCTION 1406b0010 FUN_1406b0010 body=110 status=ok
// SIG undefined FUN_1406b0010(void)

void FUN_1406b0010(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new();
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_14404c248;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 0;
    if ((((longlong *)(param_1 + 8) != puVar2 + 1) && (*(int *)(param_1 + 0x10) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 8), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))();
    }
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar2 = &PTR_GetPoolName_14404c290;
  }
  return;
}



// FUNCTION 1406b0080 FUN_1406b0080 body=58 status=ok
// SIG undefined FUN_1406b0080(void)

void FUN_1406b0080(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14404be58;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_14404bea0;
  }
  return;
}



// FUNCTION 1406b00c0 FUN_1406b00c0 body=66 status=ok
// SIG undefined FUN_1406b00c0(void)

void FUN_1406b00c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14404c368;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_14404c3b0;
  }
  return;
}



// FUNCTION 1406b0110 FUN_1406b0110 body=66 status=ok
// SIG undefined FUN_1406b0110(void)

void FUN_1406b0110(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14404c518;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_14404c560;
  }
  return;
}



// FUNCTION 1406b0160 FUN_1406b0160 body=91 status=ok
// SIG undefined FUN_1406b0160(void)

void FUN_1406b0160(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14404c488;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    FString::FString(puVar1 + 2,param_1 + 0x10);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar1 = &PTR_GetPoolName_14404c4d0;
  }
  return;
}



// FUNCTION 1406b01c0 FUN_1406b01c0 body=66 status=ok
// SIG undefined FUN_1406b01c0(void)

void FUN_1406b01c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14404c2d8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_14404c320;
  }
  return;
}



// FUNCTION 1406b0210 FUN_1406b0210 body=91 status=ok
// SIG undefined FUN_1406b0210(void)

void FUN_1406b0210(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_14404c3f8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    FString::FString(puVar1 + 2,param_1 + 0x10);
    puVar1[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar1 = &PTR_GetPoolName_14404c440;
  }
  return;
}



// FUNCTION 1406b0270 FUN_1406b0270 body=294 status=ok
// SIG undefined FUN_1406b0270(void)

void FUN_1406b0270(longlong param_1)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  
  puVar3 = (undefined8 *)operator_new();
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_14404c5a8;
    puVar3[1] = 0;
    iVar5 = *(int *)(param_1 + 0x10);
    puVar6 = *(undefined8 **)(param_1 + 8);
    *(int *)(puVar3 + 2) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)((longlong)puVar3 + 0x14) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar3 + 1,iVar5,0);
      puVar4 = (undefined8 *)puVar3[1];
      do {
        *puVar4 = 0;
        iVar1 = *(int *)(puVar6 + 1);
        _Src = (void *)*puVar6;
        *(int *)(puVar4 + 1) = iVar1;
        if (iVar1 == 0) {
          *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar4,iVar1,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar4,_Src,(longlong)iVar1 * 2);
        }
        puVar4 = puVar4 + 2;
        puVar6 = puVar6 + 2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    puVar3[3] = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
    if ((((longlong *)(param_1 + 0x18) != puVar3 + 3) && (*(int *)(param_1 + 0x20) != 0)) &&
       (plVar2 = *(longlong **)(param_1 + 0x18), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))();
    }
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
    *puVar3 = &PTR_GetPoolName_14404c5f0;
  }
  return;
}



// FUNCTION 1406b03a0 FUN_1406b03a0 body=78 status=ok
// SIG undefined FUN_1406b03a0(void)

void FUN_1406b03a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14404bee8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_FUN_14404bf30;
  }
  return;
}



// FUNCTION 1406b03f0 FUN_1406b03f0 body=204 status=ok
// SIG undefined FUN_1406b03f0(void)

void FUN_1406b03f0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    puVar3 = (undefined8 *)(*param_1 + 0x28);
    do {
      TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>::
      ~TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>(puVar3 + 2);
      iVar4 = *(int *)(puVar3 + 1);
      plVar1 = (longlong *)*puVar3;
      if (iVar4 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar1 = (longlong *)*puVar3;
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      if (puVar3[-2] != 0) {
        FMemory::Free();
      }
      if (puVar3[-4] != 0) {
        FMemory::Free();
      }
      puVar3 = puVar3 + 0xb;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(param_1,param_2);
  return;
}



// FUNCTION 1406b04c0 FUN_1406b04c0 body=1340 status=ok
// SIG undefined FUN_1406b04c0(void)

void FUN_1406b04c0(longlong param_1,undefined8 *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  undefined2 *puVar6;
  longlong lVar7;
  
  psVar4 = &DAT_143f3eda8;
  iVar3 = *(int *)(param_2 + 1);
  puVar6 = &DAT_143f3eda8;
  if (DAT_14622ce18 != 0) {
    puVar6 = DAT_14622ce10;
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
  if (sVar1 == sVar2) {
    return;
  }
  puVar6 = &DAT_143f3eda8;
  if (DAT_14622ce28 != 0) {
    puVar6 = DAT_14622ce20;
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
    puVar6 = &DAT_143f3eda8;
    if (DAT_14622ce48 != 0) {
      puVar6 = DAT_14622ce40;
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
      puVar6 = &DAT_143f3eda8;
      if (DAT_14622ce58 != 0) {
        puVar6 = DAT_14622ce50;
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
        puVar6 = &DAT_143f3eda8;
        if (DAT_14622ce68 != 0) {
          puVar6 = DAT_14622ce60;
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
        if (sVar1 == sVar2) goto LAB_1406b09f1;
        puVar6 = &DAT_143f3eda8;
        if (DAT_14622ce78 != 0) {
          puVar6 = DAT_14622ce70;
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
          puVar6 = &DAT_143f3eda8;
          if (DAT_14622ce88 != 0) {
            puVar6 = DAT_14622ce80;
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
            puVar6 = &DAT_143f3eda8;
            if (DAT_14622ce98 != 0) {
              puVar6 = DAT_14622ce90;
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
              puVar6 = &DAT_143f3eda8;
              if (DAT_14622cea8 != 0) {
                puVar6 = DAT_14622cea0;
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
                puVar6 = &DAT_143f3eda8;
                if (DAT_14622ceb8 != 0) {
                  puVar6 = DAT_14622ceb0;
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
                  puVar6 = &DAT_143f3eda8;
                  if (DAT_14622cec8 != 0) {
                    puVar6 = DAT_14622cec0;
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
                  if (sVar1 == sVar2) goto LAB_1406b09e8;
                  puVar6 = &DAT_143f3eda8;
                  if (DAT_14622ce38 != 0) {
                    puVar6 = DAT_14622ce30;
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
                  if (sVar1 == sVar2) goto LAB_1406b09f1;
                  puVar6 = &DAT_143f3eda8;
                  if (DAT_14622ced8 != 0) {
                    puVar6 = DAT_14622ced0;
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
                    puVar6 = &DAT_143f3eda8;
                    if (DAT_14622cee8 != 0) {
                      puVar6 = DAT_14622cee0;
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
                      puVar6 = &DAT_143f3eda8;
                      if (DAT_14622cef8 != 0) {
                        puVar6 = DAT_14622cef0;
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
                      if (sVar1 == sVar2) {
LAB_1406b09e8:
                        FUN_1406bd0e0(param_1);
                        return;
                      }
                      puVar6 = &DAT_143f3eda8;
                      if (DAT_14622cf08 != 0) {
                        puVar6 = DAT_14622cf00;
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
                      if (sVar1 == sVar2) {
                        *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
                        return;
                      }
                      puVar6 = &DAT_143f3eda8;
                      if (DAT_14622cf18 != 0) {
                        puVar6 = DAT_14622cf10;
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
                        puVar6 = &DAT_143f3eda8;
                        if (DAT_14622cf28 != 0) {
                          puVar6 = DAT_14622cf20;
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
                          puVar6 = &DAT_143f3eda8;
                          if (DAT_14622cf38 != 0) {
                            puVar6 = DAT_14622cf30;
                          }
                          if (iVar3 != 0) {
                            psVar4 = (short *)*param_2;
                          }
                          lVar7 = (longlong)puVar6 - (longlong)psVar4;
                          do {
                            sVar1 = *psVar4;
                            sVar2 = *(short *)((longlong)psVar4 + lVar7);
                            if (sVar1 != sVar2) break;
                            psVar4 = psVar4 + 1;
                          } while (sVar2 != 0);
                          if (sVar1 != sVar2) {
                            return;
                          }
                          goto LAB_1406b09e8;
                        }
                      }
                      goto LAB_1406b09f1;
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
  }
LAB_1406b09f1:
  FUN_1406bdc50(param_1);
  return;
}



// FUNCTION 1406b0a00 FUN_1406b0a00 body=179 status=ok
// SIG undefined FUN_1406b0a00(void)

void FUN_1406b0a00(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res20 [8];
  
  local_res20[0] = param_4;
  FUN_1406ac2f0(param_1 + 0x18,param_1 + 8,param_2,param_3,local_res20);
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
  plVar4 = *(longlong **)(param_3 + 8);
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



// FUNCTION 1406b0ac0 FUN_1406b0ac0 body=428 status=ok
// SIG undefined FUN_1406b0ac0(void)

void FUN_1406b0ac0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 uVar6;
  char cVar7;
  longlong *plVar8;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  plVar3 = (longlong *)param_3[1];
  local_28 = *param_3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_2 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar8 = (longlong *)0x0;
  local_38 = 0;
  local_30 = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_20 = plVar3;
  uVar6 = FUN_1406b3250(DAT_146857fe0,&local_28,&local_38);
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
    if (cVar7 != '\0') {
      if (*(int *)(param_1 + 0x10) != 0) {
        plVar8 = *(longlong **)(param_1 + 8);
      }
      (**(code **)(*plVar8 + 0x40))(plVar8,uVar6,&local_38);
    }
  }
  FUN_1406ad4f0(&local_38);
  if (plVar4 != (longlong *)0x0) {
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
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar3 = *(longlong **)(param_2 + 8);
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
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
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
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return;
}



// FUNCTION 1406b0c70 FUN_1406b0c70 body=216 status=ok
// SIG undefined FUN_1406b0c70(void)

void FUN_1406b0c70(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_28 = *param_3;
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_1406aded0(param_1 + 8,&local_18,&local_28);
  plVar4 = (longlong *)param_2[1];
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



// FUNCTION 1406b0d50 FUN_1406b0d50 body=216 status=ok
// SIG undefined FUN_1406b0d50(void)

void FUN_1406b0d50(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_28 = *param_3;
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_1406ae140(param_1 + 8,&local_18,&local_28);
  plVar4 = (longlong *)param_2[1];
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



// FUNCTION 1406b0e30 FUN_1406b0e30 body=304 status=ok
// SIG undefined FUN_1406b0e30(void)

void FUN_1406b0e30(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar4 = *(longlong **)(param_3 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_2 + 8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound(param_1 + 8,param_4);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  plVar4 = *(longlong **)(param_2 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  plVar4 = *(longlong **)(param_3 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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



// FUNCTION 1406b0f60 FUN_1406b0f60 body=216 status=ok
// SIG undefined FUN_1406b0f60(void)

void FUN_1406b0f60(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_28 = *param_3;
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_1406aea90(param_1 + 8,&local_18,&local_28);
  plVar4 = (longlong *)param_2[1];
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



// FUNCTION 1406b1050 FUN_1406b1050 body=123 status=ok
// SIG undefined FUN_1406b1050(void)

void FUN_1406b1050(longlong param_1,char param_2,char param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    if ((param_3 == '\0') || (*(char *)(param_4 + 0x60) == '\0')) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
  }
  FUN_1406adcd0(*(longlong *)(param_1 + 8) + 0x128,param_4);
  lVar1 = *(longlong *)(param_1 + 8);
  if (cVar2 != *(char *)(lVar1 + 0x1c8)) {
    *(char *)(lVar1 + 0x1c8) = cVar2;
    TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound
              (*(longlong *)(param_1 + 8) + 0x28,*(undefined1 *)(*(longlong *)(param_1 + 8) + 0x1c8)
              );
    lVar1 = *(longlong *)(param_1 + 8);
  }
  TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound
            (lVar1 + 0x38,*(undefined1 *)(lVar1 + 0x1c8));
  return;
}



// FUNCTION 1406b1120 FUN_1406b1120 body=410 status=ok
// SIG undefined FUN_1406b1120(void)

void FUN_1406b1120(longlong param_1,char param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int local_res10;
  
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x220) = 0;
  if (param_2 != '\0') {
    puVar7 = (undefined8 *)*param_3;
    local_res10 = 0;
    puVar8 = puVar7 + (longlong)*(int *)(param_3 + 1) * 10;
    if (puVar7 != puVar8) {
      do {
        if (*(int *)(param_1 + 0x18) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = *(undefined2 **)(param_1 + 0x10);
        }
        if (*(int *)(puVar7 + 1) == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = (undefined2 *)*puVar7;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
        if (iVar3 == 0) {
          *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x220) = 1;
          lVar2 = *(longlong *)(param_1 + 8);
          FString::operator=(lVar2 + 0x1d0,puVar7);
          FString::operator=(lVar2 + 0x1e0,puVar7 + 2);
          FString::operator=(lVar2 + 0x1f0,puVar7 + 4);
          puVar1 = (undefined8 *)(lVar2 + 0x208);
          *(undefined1 *)(lVar2 + 0x200) = *(undefined1 *)(puVar7 + 6);
          if (puVar1 != puVar7 + 7) {
            plVar6 = (longlong *)*puVar1;
            for (iVar3 = *(int *)(lVar2 + 0x210); iVar3 != 0; iVar3 = iVar3 + -1) {
              if (*plVar6 != 0) {
                FMemory::Free();
              }
              plVar6 = plVar6 + 2;
            }
            TArray<FString,FDefaultAllocator>::CopyToEmpty<FString>
                      (puVar1,puVar7[7],*(undefined4 *)(puVar7 + 8),*(undefined4 *)(lVar2 + 0x214),0
                      );
          }
          local_res10 = local_res10 + 1;
          *(undefined1 *)(lVar2 + 0x218) = *(undefined1 *)(puVar7 + 9);
        }
        puVar7 = puVar7 + 10;
      } while (puVar7 != puVar8);
      if (0 < local_res10) {
        FUN_1406bc5b0(*(undefined8 *)(param_1 + 8));
      }
    }
    lVar2 = *(longlong *)(param_1 + 8);
    FUN_1406b1620(lVar2 + 0x48,*(undefined1 *)(lVar2 + 0x220),*(undefined1 *)(lVar2 + 0x221));
  }
  return;
}



// FUNCTION 1406b12c0 FUN_1406b12c0 body=269 status=ok
// SIG undefined FUN_1406b12c0(void)

void FUN_1406b12c0(longlong param_1,char param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *local_18;
  int local_10;
  uint local_c;
  
  if (param_2 != '\0') {
    lVar6 = *param_3;
    plVar7 = (longlong *)0x0;
    local_18 = (longlong *)0x0;
    local_c = 0;
    local_10 = 0;
    lVar5 = (longlong)(int)param_3[1] * 0x58 + lVar6;
    plVar3 = plVar7;
    if (lVar6 != lVar5) {
      while( true ) {
        iVar1 = local_10;
        lVar4 = (longlong)local_10;
        local_10 = local_10 + 1;
        if ((int)plVar3 < local_10) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_18,iVar1);
        }
        FString::FString(local_18 + lVar4 * 2,lVar6 + 0x20);
        lVar6 = lVar6 + 0x58;
        if (lVar6 == lVar5) break;
        plVar3 = (longlong *)(ulonglong)local_c;
      }
    }
    plVar3 = local_18;
    iVar1 = local_10;
    if (((*(int *)(param_1 + 0x20) != 0) && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))(), plVar3 = local_18,
       iVar1 = local_10, cVar2 != '\0')) {
      if (*(int *)(param_1 + 0x20) != 0) {
        plVar7 = *(longlong **)(param_1 + 0x18);
      }
      (**(code **)(*plVar7 + 0x40))(plVar7,&local_18);
      plVar3 = local_18;
      iVar1 = local_10;
    }
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1406b13d0 FUN_1406b13d0 body=250 status=ok
// SIG undefined FUN_1406b13d0(void)

void FUN_1406b13d0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  uVar7 = FWeakObjectPtr::Get(param_1 + 8);
  local_28 = *param_3;
  pcVar4 = *(code **)(param_1 + 0x10);
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  local_10 = param_2[1];
  local_18 = *param_2;
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  (*pcVar4)(uVar7,&local_18,&local_28,param_4);
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  plVar5 = (longlong *)param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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



// FUNCTION 1406b14d0 ExecuteIfBound body=76 status=ok
// SIG undefined ExecuteIfBound(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong TBaseDelegate<void>::ExecuteIfBound(longlong *param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    in_RAX = (**(code **)(*(longlong *)*param_1 + 0x18))();
    if ((char)in_RAX != '\0') {
      if ((int)param_1[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001406b1502. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*(longlong *)*param_1 + 0x40))();
        return uVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x0001406b1510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(_DAT_00000000 + 0x40))();
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1406b1520 ExecuteIfBound body=106 status=ok
// SIG undefined ExecuteIfBound(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound
                    (longlong *param_1,undefined1 param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    in_RAX = (**(code **)(*(longlong *)*param_1 + 0x18))();
    if ((char)in_RAX != '\0') {
      if ((int)param_1[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001406b1562. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,param_2);
        return uVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x0001406b1579. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(_DAT_00000000 + 0x40))(0,param_2);
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1406b1590 FUN_1406b1590 body=135 status=ok
// SIG undefined FUN_1406b1590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1406b1590(longlong *param_1,undefined1 param_2,undefined4 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    in_RAX = (**(code **)(*(longlong *)*param_1 + 0x18))();
    if ((char)in_RAX != '\0') {
      if ((int)param_1[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001406b15e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,param_2,param_3);
        return uVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x0001406b1601. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(_DAT_00000000 + 0x40))(0,param_2,param_3);
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1406b1620 FUN_1406b1620 body=138 status=ok
// SIG undefined FUN_1406b1620(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1406b1620(longlong *param_1,undefined1 param_2,undefined1 param_3)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    in_RAX = (**(code **)(*(longlong *)*param_1 + 0x18))();
    if ((char)in_RAX != '\0') {
      if ((int)param_1[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001406b1674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*(longlong *)*param_1 + 0x40))((longlong *)*param_1,param_2,param_3);
        return uVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x0001406b1694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(_DAT_00000000 + 0x40))(0,param_2,param_3);
      return uVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1406b16b0 FUN_1406b16b0 body=233 status=ok
// SIG undefined FUN_1406b16b0(void)

undefined8 FUN_1406b16b0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  if (((*(char *)(param_1 + 0x30) != '\0') && (*(char *)(param_1 + 0x31) != '\0')) &&
     (*(char *)(param_1 + 0x32) != '\0')) {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      lVar1 = FWeakObjectPtr::Get(param_1 + 0x20);
      if (lVar1 != 0) {
        lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 0x28));
        if (lVar1 != 0) {
          local_18 = 0;
          local_10 = 0;
          if (&local_18 != (undefined8 *)(param_1 + 0x10)) {
            FUN_1406ac540(&local_18,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),
                          0,0);
          }
          plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x20);
          uVar3 = FUN_14178ac60(plVar2,*(undefined8 *)(param_1 + 0x28));
          (**(code **)(*plVar2 + 0x208))(plVar2,uVar3,&local_18);
          FUN_1406ad5c0(&local_18);
        }
      }
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1406b17a0 FUN_1406b17a0 body=365 status=ok
// SIG undefined FUN_1406b17a0(void)

undefined8
FUN_1406b17a0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res20 [8];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_38 = *param_3;
  local_30 = (longlong *)param_3[1];
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_2[1];
  local_28 = *param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_res20[0] = param_4;
  local_20 = plVar4;
  FUN_1406ac2f0(param_1 + 0x18,param_1 + 8,&local_28,&local_38,local_res20);
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
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  plVar4 = (longlong *)param_2[1];
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
  return 1;
}



// FUNCTION 1406b1910 FUN_1406b1910 body=214 status=ok
// SIG undefined FUN_1406b1910(void)

undefined8 FUN_1406b1910(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_28 = *param_3;
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_1406b0ac0(param_1,&local_18,&local_28);
  plVar4 = (longlong *)param_2[1];
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
  return 1;
}



// FUNCTION 1406b19f0 FUN_1406b19f0 body=356 status=ok
// SIG undefined FUN_1406b19f0(void)

undefined8 FUN_1406b19f0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  plVar4 = (longlong *)param_3[1];
  local_38 = *param_3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_2[1];
  local_28 = *param_2;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_30 = plVar4;
  local_20 = plVar5;
  FUN_1406aded0(param_1 + 8,&local_28,&local_38);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  return 1;
}



// FUNCTION 1406b1b60 FUN_1406b1b60 body=356 status=ok
// SIG undefined FUN_1406b1b60(void)

undefined8 FUN_1406b1b60(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  plVar4 = (longlong *)param_3[1];
  local_38 = *param_3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_2[1];
  local_28 = *param_2;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_30 = plVar4;
  local_20 = plVar5;
  FUN_1406ae140(param_1 + 8,&local_28,&local_38);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  return 1;
}



// FUNCTION 1406b1cd0 FUN_1406b1cd0 body=214 status=ok
// SIG undefined FUN_1406b1cd0(void)

undefined8 FUN_1406b1cd0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_28 = *param_3;
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_1406b0e30(param_1,&local_18,&local_28);
  plVar4 = (longlong *)param_2[1];
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
  return 1;
}



// FUNCTION 1406b1db0 FUN_1406b1db0 body=356 status=ok
// SIG undefined FUN_1406b1db0(void)

undefined8 FUN_1406b1db0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  plVar4 = (longlong *)param_3[1];
  local_38 = *param_3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_2[1];
  local_28 = *param_2;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_30 = plVar4;
  local_20 = plVar5;
  FUN_1406aea90(param_1 + 8,&local_28,&local_38);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  return 1;
}



// FUNCTION 1406b1f20 FUN_1406b1f20 body=20 status=ok
// SIG undefined FUN_1406b1f20(void)

undefined1 FUN_1406b1f20(longlong param_1)

{
  FUN_1406ae700(param_1 + 8);
  return 1;
}



// FUNCTION 1406b1f40 FUN_1406b1f40 body=126 status=ok
// SIG undefined FUN_1406b1f40(void)

undefined8 FUN_1406b1f40(longlong param_1,char param_2,char param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    if ((param_3 == '\0') || (*(char *)(param_4 + 0x60) == '\0')) {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x01';
    }
  }
  FUN_1406adcd0(*(longlong *)(param_1 + 8) + 0x128,param_4);
  lVar1 = *(longlong *)(param_1 + 8);
  if (cVar2 != *(char *)(lVar1 + 0x1c8)) {
    *(char *)(lVar1 + 0x1c8) = cVar2;
    TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound
              (*(longlong *)(param_1 + 8) + 0x28,*(undefined1 *)(*(longlong *)(param_1 + 8) + 0x1c8)
              );
    lVar1 = *(longlong *)(param_1 + 8);
  }
  TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound
            (lVar1 + 0x38,*(undefined1 *)(lVar1 + 0x1c8));
  return 1;
}



// FUNCTION 1406b1fc0 FUN_1406b1fc0 body=49 status=ok
// SIG undefined FUN_1406b1fc0(void)

undefined8 FUN_1406b1fc0(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x221) = param_2;
  lVar1 = *(longlong *)(param_1 + 8);
  FUN_1406b1620(lVar1 + 0x48,*(undefined1 *)(lVar1 + 0x220),*(undefined1 *)(lVar1 + 0x221));
  return 1;
}



// FUNCTION 1406b2000 FUN_1406b2000 body=20 status=ok
// SIG undefined FUN_1406b2000(void)

undefined1 FUN_1406b2000(longlong param_1)

{
  FUN_1406ae7d0(param_1 + 8);
  return 1;
}



// FUNCTION 1406b2020 FUN_1406b2020 body=20 status=ok
// SIG undefined FUN_1406b2020(void)

undefined1 FUN_1406b2020(longlong param_1)

{
  FUN_1406ae370(param_1 + 8);
  return 1;
}



// FUNCTION 1406b2040 FUN_1406b2040 body=412 status=ok
// SIG undefined FUN_1406b2040(void)

undefined8 FUN_1406b2040(longlong param_1,char param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int local_res10;
  
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x220) = 0;
  if (param_2 != '\0') {
    puVar7 = (undefined8 *)*param_3;
    local_res10 = 0;
    puVar8 = puVar7 + (longlong)*(int *)(param_3 + 1) * 10;
    if (puVar7 != puVar8) {
      do {
        if (*(int *)(param_1 + 0x18) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = *(undefined2 **)(param_1 + 0x10);
        }
        if (*(int *)(puVar7 + 1) == 0) {
          puVar4 = &DAT_143f3eda8;
        }
        else {
          puVar4 = (undefined2 *)*puVar7;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
        if (iVar3 == 0) {
          *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x220) = 1;
          lVar2 = *(longlong *)(param_1 + 8);
          FString::operator=(lVar2 + 0x1d0,puVar7);
          FString::operator=(lVar2 + 0x1e0,puVar7 + 2);
          FString::operator=(lVar2 + 0x1f0,puVar7 + 4);
          puVar1 = (undefined8 *)(lVar2 + 0x208);
          *(undefined1 *)(lVar2 + 0x200) = *(undefined1 *)(puVar7 + 6);
          if (puVar1 != puVar7 + 7) {
            plVar6 = (longlong *)*puVar1;
            for (iVar3 = *(int *)(lVar2 + 0x210); iVar3 != 0; iVar3 = iVar3 + -1) {
              if (*plVar6 != 0) {
                FMemory::Free();
              }
              plVar6 = plVar6 + 2;
            }
            TArray<FString,FDefaultAllocator>::CopyToEmpty<FString>
                      (puVar1,puVar7[7],*(undefined4 *)(puVar7 + 8),*(undefined4 *)(lVar2 + 0x214),0
                      );
          }
          local_res10 = local_res10 + 1;
          *(undefined1 *)(lVar2 + 0x218) = *(undefined1 *)(puVar7 + 9);
        }
        puVar7 = puVar7 + 10;
      } while (puVar7 != puVar8);
      if (0 < local_res10) {
        FUN_1406bc5b0(*(undefined8 *)(param_1 + 8));
      }
    }
    lVar2 = *(longlong *)(param_1 + 8);
    FUN_1406b1620(lVar2 + 0x48,*(undefined1 *)(lVar2 + 0x220),*(undefined1 *)(lVar2 + 0x221));
  }
  return 1;
}



// FUNCTION 1406b21e0 FUN_1406b21e0 body=271 status=ok
// SIG undefined FUN_1406b21e0(void)

undefined8 FUN_1406b21e0(longlong param_1,char param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *local_18;
  int local_10;
  uint local_c;
  
  if (param_2 != '\0') {
    lVar6 = *param_3;
    plVar7 = (longlong *)0x0;
    local_18 = (longlong *)0x0;
    local_c = 0;
    local_10 = 0;
    lVar5 = (longlong)(int)param_3[1] * 0x58 + lVar6;
    plVar3 = plVar7;
    if (lVar6 != lVar5) {
      while( true ) {
        iVar1 = local_10;
        lVar4 = (longlong)local_10;
        local_10 = local_10 + 1;
        if ((int)plVar3 < local_10) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_18,iVar1);
        }
        FString::FString(local_18 + lVar4 * 2,lVar6 + 0x20);
        lVar6 = lVar6 + 0x58;
        if (lVar6 == lVar5) break;
        plVar3 = (longlong *)(ulonglong)local_c;
      }
    }
    plVar3 = local_18;
    iVar1 = local_10;
    if (((*(int *)(param_1 + 0x20) != 0) && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))(), plVar3 = local_18,
       iVar1 = local_10, cVar2 != '\0')) {
      if (*(int *)(param_1 + 0x20) != 0) {
        plVar7 = *(longlong **)(param_1 + 0x18);
      }
      (**(code **)(*plVar7 + 0x40))(plVar7,&local_18);
      plVar3 = local_18;
      iVar1 = local_10;
    }
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return 1;
}



// FUNCTION 1406b22f0 FUN_1406b22f0 body=533 status=ok
// SIG undefined FUN_1406b22f0(void)

undefined8
FUN_1406b22f0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  
  lVar9 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar9 != 0) {
    plVar4 = (longlong *)param_3[1];
    uVar5 = *param_3;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    plVar6 = (longlong *)param_2[1];
    uVar7 = *param_2;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    uVar10 = FWeakObjectPtr::Get(param_1 + 8);
    pcVar8 = *(code **)(param_1 + 0x10);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    local_48 = uVar5;
    local_40 = plVar4;
    local_38 = uVar7;
    local_30 = plVar6;
    (*pcVar8)(uVar10,&local_38,&local_48,param_4);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar9 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
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
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar9 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
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
    plVar4 = (longlong *)param_3[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      lVar9 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
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
    return 1;
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar4 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
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
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar4 + 1;
    lVar9 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
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
  return 0;
}



// FUNCTION 1406b2510 FUN_1406b2510 body=205 status=ok
// SIG undefined FUN_1406b2510(void)

void FUN_1406b2510(void)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = DAT_146857ff0;
  if (*(char *)(DAT_146857ff0 + 0x88) != '\0') {
    if (DAT_146857fe8 != (longlong *)0x0) {
      (**(code **)(*DAT_146857fe8 + 0x10))();
      if (DAT_146857fe8 != (longlong *)0x0) {
        (**(code **)(*DAT_146857fe8 + 0x28))(DAT_146857fe8,1);
      }
      DAT_146857fe8 = (longlong *)0x0;
    }
    (**(code **)(**(longlong **)(lVar1 + 0x90) + 8))();
    *(undefined1 *)(lVar1 + 0x88) = 0;
    FUN_1406b03f0(lVar1 + 0x58,0);
    FUN_1406b03f0(lVar1 + 0x68,0);
    plVar2 = *(longlong **)(lVar1 + 0x78);
    for (iVar3 = *(int *)(lVar1 + 0x80); iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
    }
    *(undefined4 *)(lVar1 + 0x80) = 0;
    if (*(int *)(lVar1 + 0x84) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo((undefined8 *)(lVar1 + 0x78),0);
    }
  }
  return;
}



// FUNCTION 1406b25e0 FUN_1406b25e0 body=170 status=ok
// SIG undefined FUN_1406b25e0(void)

longlong FUN_1406b25e0(longlong *param_1,longlong param_2)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  short *psVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar3 = *param_1;
  lVar8 = (longlong)(int)param_1[1] * 0x58 + lVar3;
  if (lVar3 != lVar8) {
    lVar7 = lVar3;
    do {
      if (*(int *)(param_2 + 0x10) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = *(undefined2 **)(param_2 + 8);
      }
      if (*(int *)(lVar7 + 0x10) == 0) {
        psVar4 = &DAT_143f3eda8;
      }
      else {
        psVar4 = *(short **)(lVar7 + 8);
      }
      lVar6 = (longlong)puVar5 - (longlong)psVar4;
      do {
        sVar1 = *psVar4;
        sVar2 = *(short *)((longlong)psVar4 + lVar6);
        if (sVar1 != sVar2) break;
        psVar4 = psVar4 + 1;
      } while (sVar2 != 0);
      if (sVar1 == sVar2) {
        return (lVar7 - lVar3) / 0x58;
      }
      lVar7 = lVar7 + 0x58;
    } while (lVar7 != lVar8);
  }
  return 0xffffffff;
}



// FUNCTION 1406b2690 FUN_1406b2690 body=210 status=ok
// SIG undefined FUN_1406b2690(void)

int * FUN_1406b2690(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar1 = FCrc::MemCrc_DEPRECATED(param_3,0x10);
    plVar2 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar2 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar1) * 4);
    if (iVar1 != -1) {
      do {
        piVar3 = (int *)((longlong)iVar1 * 0x80 + *param_1);
        if (((piVar3[1] == param_3[1] && piVar3[2] == param_3[2]) && piVar3[3] == param_3[3]) &&
            *param_3 == *piVar3) {
          *param_2 = iVar1;
          return param_2;
        }
        iVar1 = piVar3[0x1e];
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1406b2770 FindId body=223 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<FString,FOnlineAchievementDesc>,TDefaultMapHashableKeyFuncs<FString,FOnlineAchievementDesc,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*param_3;
    }
    iVar1 = FUN_140438070(puVar6);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar1 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar1) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        lVar7 = (longlong)iVar1 * 0x70;
        if (*(int *)(param_3 + 1) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = (undefined2 *)*param_3;
        }
        if (*(int *)(lVar7 + 8 + lVar4) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = *(undefined2 **)(lVar7 + lVar4);
        }
        iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
        if (iVar2 == 0) {
          *param_2 = iVar1;
          return param_2;
        }
        lVar4 = *param_1;
        iVar1 = *(int *)(lVar7 + 0x68 + lVar4);
      } while (iVar1 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1406b2850 FUN_1406b2850 body=254 status=ok
// SIG undefined FUN_1406b2850(void)

undefined8 * FUN_1406b2850(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *_Src;
  bool bVar3;
  bool bVar4;
  void **ppvVar5;
  void *pvVar6;
  void *local_38;
  int local_30;
  undefined4 uStack_2c;
  void *local_28;
  undefined8 local_20;
  
  pvVar6 = (void *)0x0;
  if (DAT_146857fe0 == 0) {
    local_20 = 0;
    ppvVar5 = &local_28;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    iVar1 = *(int *)(DAT_146857fe0 + 0x130);
    _Src = *(void **)(DAT_146857fe0 + 0x128);
    local_38 = (void *)0x0;
    local_30 = iVar1;
    if (iVar1 == 0) {
      ppvVar5 = &local_38;
      uStack_2c = 0;
      bVar4 = true;
      bVar3 = false;
      pvVar6 = (void *)0x0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,iVar1,0);
      pvVar6 = local_38;
      _guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar1 * 2);
      ppvVar5 = &local_38;
      bVar4 = true;
      bVar3 = false;
    }
  }
  *ppvVar5 = (void *)0x0;
  uVar2 = *(undefined4 *)(ppvVar5 + 1);
  *param_1 = pvVar6;
  *(undefined4 *)(param_1 + 1) = uVar2;
  ppvVar5[1] = (void *)0x0;
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)ppvVar5 + 0xc);
  if (bVar3) {
    if (local_28 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar4) && (local_38 != (void *)0x0)) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1406b2950 FUN_1406b2950 body=1343 status=ok
// SIG undefined FUN_1406b2950(void)

longlong * FUN_1406b2950(longlong param_1,longlong *param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  short *psVar6;
  longlong lVar7;
  undefined2 *puVar8;
  int iVar9;
  short *psVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined2 *local_28;
  undefined8 local_20;
  
  local_20 = 6;
  *param_2 = 0;
  param_2[1] = 0;
  local_28 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  puVar5 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"Siren",0xc);
  psVar10 = &DAT_143f3eda8;
  puVar8 = &DAT_143f3eda8;
  if ((int)local_20 != 0) {
    puVar8 = puVar5;
  }
  if (*(int *)(param_1 + 0x58) == 0) {
    psVar6 = &DAT_143f3eda8;
  }
  else {
    psVar6 = *(short **)(param_1 + 0x50);
  }
  lVar7 = (longlong)puVar8 - (longlong)psVar6;
  do {
    sVar2 = *psVar6;
    sVar3 = *(short *)((longlong)psVar6 + lVar7);
    if (sVar2 != sVar3) break;
    psVar6 = psVar6 + 1;
  } while (sVar3 != 0);
  if (puVar5 != (undefined2 *)0x0) {
    FMemory::Free(puVar5);
  }
  if (sVar2 == sVar3) {
    iVar9 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar9);
    }
    puVar11 = (undefined8 *)((longlong)iVar9 * 0x10 + *param_2);
    *puVar11 = 0;
    iVar9 = (int)DAT_14622cd28;
    pvVar12 = DAT_14622cd20;
  }
  else {
    local_28 = (undefined2 *)0x0;
    local_20 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    puVar5 = local_28;
    FGenericPlatformString::Memcpy(local_28,L"Operative",0x14);
    puVar8 = &DAT_143f3eda8;
    if ((int)local_20 != 0) {
      puVar8 = puVar5;
    }
    if (*(int *)(param_1 + 0x58) == 0) {
      psVar6 = &DAT_143f3eda8;
    }
    else {
      psVar6 = *(short **)(param_1 + 0x50);
    }
    lVar7 = (longlong)puVar8 - (longlong)psVar6;
    do {
      sVar2 = *psVar6;
      sVar3 = *(short *)((longlong)psVar6 + lVar7);
      if (sVar2 != sVar3) break;
      psVar6 = psVar6 + 1;
    } while (sVar3 != 0);
    if (puVar5 != (undefined2 *)0x0) {
      FMemory::Free(puVar5);
    }
    if (sVar2 == sVar3) {
      iVar9 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar9 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar9);
      }
      puVar11 = (undefined8 *)((longlong)iVar9 * 0x10 + *param_2);
      *puVar11 = 0;
      iVar9 = (int)DAT_14622cd58;
      pvVar12 = DAT_14622cd50;
    }
    else {
      local_28 = (undefined2 *)0x0;
      local_20 = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      puVar5 = local_28;
      FGenericPlatformString::Memcpy(local_28,L"Beastmaster",0x18);
      puVar8 = &DAT_143f3eda8;
      if ((int)local_20 != 0) {
        puVar8 = puVar5;
      }
      if (*(int *)(param_1 + 0x58) == 0) {
        psVar6 = &DAT_143f3eda8;
      }
      else {
        psVar6 = *(short **)(param_1 + 0x50);
      }
      lVar7 = (longlong)puVar8 - (longlong)psVar6;
      do {
        sVar2 = *psVar6;
        sVar3 = *(short *)((longlong)psVar6 + lVar7);
        if (sVar2 != sVar3) break;
        psVar6 = psVar6 + 1;
      } while (sVar3 != 0);
      if (puVar5 != (undefined2 *)0x0) {
        FMemory::Free(puVar5);
      }
      if (sVar2 == sVar3) {
        iVar9 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar9 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar9);
        }
        puVar11 = (undefined8 *)((longlong)iVar9 * 0x10 + *param_2);
        *puVar11 = 0;
        iVar9 = (int)DAT_14622cd38;
        pvVar12 = DAT_14622cd30;
      }
      else {
        local_28 = (undefined2 *)0x0;
        local_20 = 7;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
        puVar5 = local_28;
        FGenericPlatformString::Memcpy(local_28,L"Gunner",0xe);
        puVar8 = &DAT_143f3eda8;
        if ((int)local_20 != 0) {
          puVar8 = puVar5;
        }
        if (*(int *)(param_1 + 0x58) != 0) {
          psVar10 = *(short **)(param_1 + 0x50);
        }
        lVar7 = (longlong)puVar8 - (longlong)psVar10;
        do {
          sVar2 = *psVar10;
          sVar3 = *(short *)((longlong)psVar10 + lVar7);
          if (sVar2 != sVar3) break;
          psVar10 = psVar10 + 1;
        } while (sVar3 != 0);
        if (puVar5 != (undefined2 *)0x0) {
          FMemory::Free(puVar5);
        }
        if (sVar2 != sVar3) goto LAB_1406b2c52;
        iVar9 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar9 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar9);
        }
        puVar11 = (undefined8 *)((longlong)iVar9 * 0x10 + *param_2);
        *puVar11 = 0;
        iVar9 = (int)DAT_14622cd48;
        pvVar12 = DAT_14622cd40;
      }
    }
  }
  *(int *)(puVar11 + 1) = iVar9;
  if (iVar9 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar11,iVar9,0);
    _guard_xfg_dispatch_icall_nop((void *)*puVar11,pvVar12,(longlong)iVar9 * 2);
  }
LAB_1406b2c52:
  if (*(char *)(param_1 + 0x60) != '\0') {
    iVar9 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar9);
    }
    puVar11 = (undefined8 *)((longlong)iVar9 * 0x10 + *param_2);
    *puVar11 = 0;
    uVar4 = DAT_14622cd68;
    pvVar12 = DAT_14622cd60;
    iVar9 = (int)DAT_14622cd68;
    *(int *)(puVar11 + 1) = iVar9;
    if (iVar9 == 0) {
      *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar11,uVar4 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop((void *)*puVar11,pvVar12,(longlong)iVar9 * 2);
    }
  }
  if (0 < *(int *)(param_1 + 100)) {
    iVar9 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar9);
    }
    puVar11 = (undefined8 *)((longlong)iVar9 * 0x10 + *param_2);
    *puVar11 = 0;
    uVar4 = DAT_14622cd78;
    pvVar12 = DAT_14622cd70;
    iVar9 = (int)DAT_14622cd78;
    *(int *)(puVar11 + 1) = iVar9;
    if (iVar9 == 0) {
      *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar11,uVar4 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop((void *)*puVar11,pvVar12,(longlong)iVar9 * 2);
    }
  }
  cVar1 = *(char *)(param_1 + 0x68);
  if (cVar1 == '\x02') {
    iVar9 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar9);
    }
    puVar11 = (undefined8 *)((longlong)iVar9 * 0x10 + *param_2);
    *puVar11 = 0;
    iVar9 = (int)DAT_14622cdc8;
    pvVar12 = DAT_14622cdc0;
  }
  else if (cVar1 == '\x03') {
    iVar9 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar9);
    }
    puVar11 = (undefined8 *)((longlong)iVar9 * 0x10 + *param_2);
    *puVar11 = 0;
    iVar9 = (int)DAT_14622cdd8;
    pvVar12 = DAT_14622cdd0;
  }
  else if (cVar1 == '\x04') {
    iVar9 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar9);
    }
    puVar11 = (undefined8 *)((longlong)iVar9 * 0x10 + *param_2);
    *puVar11 = 0;
    iVar9 = (int)DAT_14622cde8;
    pvVar12 = DAT_14622cde0;
  }
  else if (cVar1 == '\b') {
    iVar9 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar9);
    }
    puVar11 = (undefined8 *)((longlong)iVar9 * 0x10 + *param_2);
    *puVar11 = 0;
    iVar9 = (int)DAT_14622cdf8;
    pvVar12 = DAT_14622cdf0;
  }
  else {
    if (cVar1 != '\t') {
      return param_2;
    }
    iVar9 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar9);
    }
    puVar11 = (undefined8 *)((longlong)iVar9 * 0x10 + *param_2);
    *puVar11 = 0;
    iVar9 = (int)DAT_14622ce08;
    pvVar12 = DAT_14622ce00;
  }
  *(int *)(puVar11 + 1) = iVar9;
  if (iVar9 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar11,iVar9,0);
    _guard_xfg_dispatch_icall_nop((void *)*puVar11,pvVar12,(longlong)iVar9 * 2);
  }
  return param_2;
}



// FUNCTION 1406b2e90 FUN_1406b2e90 body=949 status=ok
// SIG undefined FUN_1406b2e90(void)

undefined8 FUN_1406b2e90(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  longlong local_a8 [7];
  longlong local_70;
  longlong local_68 [2];
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  
  plVar6 = (longlong *)*param_2;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)param_2[1];
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar6 + 1;
      lVar2 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
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
    return 0;
  }
  local_c8 = 0;
  plStack_c0 = (longlong *)0x0;
  uVar5 = (**(code **)(*plVar6 + 0x48))(plVar6,local_68);
  TJsonReaderFactory<wchar_t>::Create(local_b8,uVar5);
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  cVar3 = FUN_1404a7f60(local_b8,&local_c8);
  plVar8 = local_b0;
  plVar6 = plStack_c0;
  uVar5 = local_c8;
  if (cVar3 == '\0') {
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_b0 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    if (plStack_c0 == (longlong *)0x0) goto LAB_1406b306d;
    LOCK();
    plVar6 = plStack_c0 + 1;
    iVar4 = (int)*plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
  }
  else {
    local_a8[6] = *param_2;
    local_70 = param_2[1];
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
      UNLOCK();
    }
    local_58 = local_c8;
    plStack_50 = plStack_c0;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
      UNLOCK();
    }
    cVar3 = FUN_1406afb60(param_1,&local_58,local_a8 + 6);
    plVar8 = local_b0;
    if (cVar3 == '\0') {
      local_a8[1] = 6;
      local_a8[0] = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
      FGenericPlatformString::Memcpy(local_a8[0],L"panel",0xc);
      local_48 = uVar5;
      plStack_40 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        uVar5 = local_c8;
        plVar6 = plStack_c0;
      }
      FUN_1406bc070(&local_48,local_a8,param_3);
      if (local_a8[0] != 0) {
        FMemory::Free();
      }
      local_a8[2] = 0;
      local_a8[3] = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 2,0);
      FGenericPlatformString::Memcpy(local_a8[2],L"overlay",0x10);
      uVar7 = uVar5;
      plVar8 = (longlong *)0x0;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        uVar7 = local_c8;
        plVar8 = plStack_c0;
      }
      local_38 = uVar5;
      plStack_30 = plVar6;
      FUN_1406bc070(&local_38,local_a8 + 2,param_3 + 0x10);
      if (local_a8[2] != 0) {
        FMemory::Free();
      }
      local_a8[4] = 0;
      local_a8[5] = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 4,0);
      FGenericPlatformString::Memcpy(local_a8[4],L"component",0x14);
      plVar6 = (longlong *)0x0;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        plVar6 = plStack_c0;
      }
      local_28 = uVar7;
      plStack_20 = plVar8;
      FUN_1406bc070(&local_28,local_a8 + 4,param_3 + 0x20);
      if (local_a8[4] != 0) {
        FMemory::Free();
      }
      plVar8 = local_b0;
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_b0 + 1;
        lVar2 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        plVar6 = plStack_c0;
        if ((int)lVar2 == 1) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar6 = plStack_c0;
          if (iVar4 == 1) {
            (**(code **)(*local_b0 + 8))(local_b0,1);
            plVar6 = plStack_c0;
          }
        }
      }
      plVar8 = plStack_c0;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar6 + 1;
        lVar2 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar2 == 1) {
          (**(code **)*plStack_c0)(plStack_c0);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
          }
        }
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
      return 1;
    }
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_b0 + 1;
      lVar2 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      plVar6 = plStack_c0;
      if ((int)lVar2 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar6 = plStack_c0;
        if (iVar4 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
          plVar6 = plStack_c0;
        }
      }
    }
    if (plVar6 == (longlong *)0x0) goto LAB_1406b306d;
    LOCK();
    plVar6 = plVar6 + 1;
    iVar4 = (int)*plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
  }
  plVar6 = plStack_c0;
  if (iVar4 == 1) {
    (**(code **)*plStack_c0)(plStack_c0);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
    }
  }
LAB_1406b306d:
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
  return 0;
}



// FUNCTION 1406b3250 FUN_1406b3250 body=2140 status=ok
// SIG undefined FUN_1406b3250(void)

undefined8 FUN_1406b3250(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 local_1a8;
  longlong *plStack_1a0;
  undefined1 local_198 [8];
  longlong *local_190;
  longlong *local_188;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  undefined1 local_148;
  longlong *local_140;
  undefined8 local_138;
  undefined1 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98 [2];
  undefined8 local_88;
  longlong *plStack_80;
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48;
  
  plVar9 = (longlong *)*param_2;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)param_2[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar9 + 1;
      lVar14 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    return 0;
  }
  local_1a8 = 0;
  plStack_1a0 = (longlong *)0x0;
  uVar3 = (**(code **)(*plVar9 + 0x48))(plVar9,local_98);
  TJsonReaderFactory<wchar_t>::Create(local_198,uVar3);
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  cVar2 = FUN_1404a7f60(local_198,&local_1a8);
  plVar6 = local_190;
  plVar9 = plStack_1a0;
  if (cVar2 == '\0') {
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_190 + 1;
      lVar14 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar14 == 1) {
        (**(code **)*local_190)(local_190);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_190 + 8))(local_190,1);
        }
      }
    }
    if (plStack_1a0 == (longlong *)0x0) goto LAB_1406b349a;
    LOCK();
    plVar9 = plStack_1a0 + 1;
    iVar7 = (int)*plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
  }
  else {
    local_a8 = *param_2;
    local_a0 = param_2[1];
    if (local_a0 != 0) {
      LOCK();
      *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
      UNLOCK();
    }
    local_88 = local_1a8;
    plStack_80 = plStack_1a0;
    if (plStack_1a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_1a0 + 1) = (int)plStack_1a0[1] + 1;
      UNLOCK();
    }
    cVar2 = FUN_1406afb60(param_1,&local_88,&local_a8);
    if (cVar2 == '\0') {
      local_120 = 5;
      local_128 = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
      FGenericPlatformString::Memcpy(local_128,L"data",10);
      cVar2 = FUN_1416b3850(local_1a8,&local_128,&local_c0);
      if (local_128 != 0) {
        FMemory::Free();
      }
      if (cVar2 != '\0') {
        plVar6 = (longlong *)*local_c0;
        plVar8 = plVar6 + (longlong)(int)local_c0[1] * 2;
        plVar12 = local_190;
        for (; local_190 = plVar12, local_188 = plVar6, plVar6 != plVar8; plVar6 = plVar6 + 2) {
          plVar9 = (longlong *)plVar6[1];
          puVar4 = (undefined8 *)*plVar6;
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
          }
          local_b0 = plVar9;
          if (puVar4 == (undefined8 *)0x0) {
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              plVar12 = plVar9 + 1;
              lVar14 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*plVar9)(plVar9);
                LOCK();
                piVar1 = (int *)((longlong)plVar9 + 0xc);
                iVar7 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar9 + 8))(plVar9,1);
                }
              }
            }
          }
          else {
            puVar4 = (undefined8 *)(**(code **)*puVar4)(puVar4);
            plVar12 = (longlong *)puVar4[1];
            uVar3 = *puVar4;
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              UNLOCK();
            }
            local_110 = 3;
            local_178 = 0;
            local_170 = 0;
            local_168 = 0;
            local_160 = 0;
            local_158 = 0;
            local_150 = 0;
            local_140 = (longlong *)0x0;
            local_138 = 0;
            local_130 = 0;
            local_118 = 0;
            local_c8 = plVar12;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
            FGenericPlatformString::Memcpy(local_118,&DAT_144046e24,6);
            plVar5 = (longlong *)FJsonObject::GetStringField(uVar3,local_78,&local_118);
            if (&local_178 != plVar5) {
              local_178 = *plVar5;
              *plVar5 = 0;
              local_170 = plVar5[1];
              plVar5[1] = 0;
            }
            if (local_78[0] != 0) {
              FMemory::Free();
            }
            if (local_118 != 0) {
              FMemory::Free();
            }
            local_108 = 0;
            local_100 = 8;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
            FGenericPlatformString::Memcpy(local_108,L"version",0x10);
            plVar5 = (longlong *)FJsonObject::GetStringField(uVar3,local_68,&local_108);
            if (&local_168 != plVar5) {
              local_168 = *plVar5;
              *plVar5 = 0;
              local_160 = plVar5[1];
              plVar5[1] = 0;
            }
            if (local_68[0] != 0) {
              FMemory::Free();
            }
            if (local_108 != 0) {
              FMemory::Free();
            }
            local_f8 = 0;
            local_f0 = 5;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
            FGenericPlatformString::Memcpy(local_f8,L"name",10);
            plVar5 = (longlong *)FJsonObject::GetStringField(uVar3,local_58,&local_f8);
            if (&local_158 != plVar5) {
              local_158 = *plVar5;
              *plVar5 = 0;
              local_150 = plVar5[1];
              plVar5[1] = 0;
            }
            if (local_58[0] != 0) {
              FMemory::Free();
            }
            if (local_f8 != 0) {
              FMemory::Free();
            }
            local_e8 = 0;
            local_e0 = 0xd;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
            FGenericPlatformString::Memcpy(local_e8,L"can_activate",0x1a);
            local_148 = FUN_1416b2ba0(uVar3,&local_e8);
            if (local_e8 != 0) {
              FMemory::Free();
            }
            local_d8 = 0;
            local_d0 = 5;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
            FGenericPlatformString::Memcpy(local_d8,L"type",10);
            cVar2 = FUN_1416b3850(local_1a8,&local_d8,&local_b8);
            if (local_d8 != 0) {
              FMemory::Free();
            }
            if (cVar2 != '\0') {
              plVar5 = (longlong *)*local_b8;
              plVar13 = plVar5 + (longlong)(int)local_b8[1] * 2;
              plVar6 = local_188;
              plVar12 = local_c8;
              for (; local_188 = plVar6, local_c8 = plVar12, plVar5 != plVar13; plVar5 = plVar5 + 2)
              {
                plVar9 = (longlong *)plVar5[1];
                lVar14 = *plVar5;
                if (plVar9 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
                  UNLOCK();
                }
                if (lVar14 != 0) {
                  plVar6 = (longlong *)FJsonValue::AsString();
                  lVar14 = (longlong)(int)(uint)local_138;
                  iVar7 = (uint)local_138 + 1;
                  local_138 = CONCAT44(local_138._4_4_,iVar7);
                  if (local_138._4_4_ < iVar7) {
                    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_140);
                  }
                  plVar12 = local_140 + lVar14 * 2;
                  *plVar12 = 0;
                  *plVar12 = *plVar6;
                  *plVar6 = 0;
                  *(int *)(plVar12 + 1) = (int)plVar6[1];
                  *(undefined4 *)((longlong)plVar12 + 0xc) = *(undefined4 *)((longlong)plVar6 + 0xc)
                  ;
                  plVar6[1] = 0;
                  if (local_48 != 0) {
                    FMemory::Free();
                  }
                }
                if (plVar9 != (longlong *)0x0) {
                  LOCK();
                  plVar6 = plVar9 + 1;
                  lVar14 = *plVar6;
                  *(int *)plVar6 = (int)*plVar6 + -1;
                  UNLOCK();
                  if ((int)lVar14 == 1) {
                    (**(code **)*plVar9)(plVar9);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar9 + 0xc);
                    iVar7 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar7 == 1) {
                      (**(code **)(*plVar9 + 8))(plVar9,1);
                    }
                  }
                }
                plVar9 = local_b0;
                plVar6 = local_188;
                plVar12 = local_c8;
              }
            }
            iVar7 = (int)param_3[1];
            *(int *)(param_3 + 1) = iVar7 + 1;
            if (*(int *)((longlong)param_3 + 0xc) < iVar7 + 1) {
              TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_3,iVar7);
            }
            FUN_1406ad040((longlong)iVar7 * 0x50 + *param_3,&local_178);
            plVar13 = local_140;
            uVar11 = local_138 & 0xffffffff;
            plVar5 = local_140;
            uVar10 = (uint)local_138;
            while (uVar10 != 0) {
              if (*plVar5 != 0) {
                FMemory::Free();
              }
              plVar5 = plVar5 + 2;
              uVar10 = (int)uVar11 - 1;
              uVar11 = (ulonglong)uVar10;
            }
            if (plVar13 != (longlong *)0x0) {
              FMemory::Free(plVar13);
            }
            if (local_158 != 0) {
              FMemory::Free();
            }
            if (local_168 != 0) {
              FMemory::Free();
            }
            if (local_178 != 0) {
              FMemory::Free();
            }
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              plVar5 = plVar12 + 1;
              lVar14 = *plVar5;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
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
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              plVar12 = plVar9 + 1;
              lVar14 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*plVar9)(plVar9);
                LOCK();
                piVar1 = (int *)((longlong)plVar9 + 0xc);
                iVar7 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar9 + 8))(plVar9,1);
                }
              }
            }
          }
          plVar9 = plStack_1a0;
          plVar12 = local_190;
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar12 + 1;
          lVar14 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          plVar9 = plStack_1a0;
          if ((int)lVar14 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar9 = plStack_1a0;
            if (iVar7 == 1) {
              (**(code **)(*local_190 + 8))(local_190,1);
              plVar9 = plStack_1a0;
            }
          }
        }
        plVar6 = plStack_1a0;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar9 + 1;
          lVar14 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*plStack_1a0)(plStack_1a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plStack_1a0 + 8))(plStack_1a0,1);
            }
          }
        }
        plVar9 = (longlong *)param_2[1];
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar9 + 1;
          lVar14 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar7 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar7 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        return 1;
      }
    }
    plVar6 = local_190;
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_190 + 1;
      lVar14 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      plVar9 = plStack_1a0;
      if ((int)lVar14 == 1) {
        (**(code **)*local_190)(local_190);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar9 = plStack_1a0;
        if (iVar7 == 1) {
          (**(code **)(*local_190 + 8))(local_190,1);
          plVar9 = plStack_1a0;
        }
      }
    }
    if (plVar9 == (longlong *)0x0) goto LAB_1406b349a;
    LOCK();
    plVar9 = plVar9 + 1;
    iVar7 = (int)*plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
  }
  plVar9 = plStack_1a0;
  if (iVar7 == 1) {
    (**(code **)*plStack_1a0)(plStack_1a0);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      (**(code **)(*plStack_1a0 + 8))(plStack_1a0,1);
    }
  }
LAB_1406b349a:
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
  return 0;
}



// FUNCTION 1406b3ab0 FUN_1406b3ab0 body=2711 status=ok
// SIG undefined FUN_1406b3ab0(void)

undefined8 FUN_1406b3ab0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  wint_t wVar4;
  wint_t wVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *plVar9;
  wint_t *pwVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  double dVar15;
  undefined8 local_268;
  longlong *plStack_260;
  undefined1 local_258 [8];
  longlong *local_250;
  longlong *local_248;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  int local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  longlong local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100;
  longlong *local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0 [3];
  undefined8 local_c8;
  longlong *plStack_c0;
  longlong local_b8 [2];
  longlong local_a8 [2];
  longlong local_98 [2];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  
  plVar12 = (longlong *)*param_2;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = (longlong *)param_2[1];
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar12 + 1;
      lVar11 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    return 0;
  }
  local_268 = 0;
  plStack_260 = (longlong *)0x0;
  uVar6 = (**(code **)(*plVar12 + 0x48))(plVar12,local_e0);
  TJsonReaderFactory<wchar_t>::Create(local_258,uVar6);
  if (local_e0[0] != 0) {
    FMemory::Free();
  }
  cVar3 = FUN_1404a7f60(local_258,&local_268);
  plVar13 = local_250;
  plVar12 = plStack_260;
  if (cVar3 == '\0') {
    if (local_250 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_250 + 1;
      lVar11 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_250)(local_250);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_250 + 8))(local_250,1);
        }
      }
    }
    if (plStack_260 == (longlong *)0x0) goto LAB_1406b3d09;
    LOCK();
    plVar12 = plStack_260 + 1;
    iVar8 = (int)*plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
  }
  else {
    local_f0 = *param_2;
    local_e8 = param_2[1];
    if (local_e8 != 0) {
      LOCK();
      *(int *)(local_e8 + 8) = *(int *)(local_e8 + 8) + 1;
      UNLOCK();
    }
    local_c8 = local_268;
    plStack_c0 = plStack_260;
    if (plStack_260 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_260 + 1) = (int)plStack_260[1] + 1;
      UNLOCK();
    }
    cVar3 = FUN_1406afb60(param_1,&local_c8,&local_f0);
    if (cVar3 == '\0') {
      local_190 = 5;
      local_198 = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
      FGenericPlatformString::Memcpy(local_198,L"data",10);
      cVar3 = FUN_1416b3850(local_268,&local_198,&local_f8);
      if (local_198 != 0) {
        FMemory::Free();
      }
      if (cVar3 != '\0') {
        plVar13 = (longlong *)*local_f8;
        plVar9 = plVar13 + (longlong)(int)local_f8[1] * 2;
        plVar2 = local_250;
joined_r0x0001406b3d4c:
        local_250 = plVar2;
        local_248 = plVar13;
        if (plVar13 == plVar9) {
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            plVar12 = plVar2 + 1;
            lVar11 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            plVar12 = plStack_260;
            if ((int)lVar11 == 1) {
              (**(code **)*plVar2)(plVar2);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar12 = plStack_260;
              if (iVar8 == 1) {
                (**(code **)(*local_250 + 8))(local_250,1);
                plVar12 = plStack_260;
              }
            }
          }
          plVar13 = plStack_260;
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            plVar12 = plVar12 + 1;
            lVar11 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plStack_260)(plStack_260);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plStack_260 + 8))(plStack_260,1);
              }
            }
          }
          plVar12 = (longlong *)param_2[1];
          if (plVar12 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar12 + 1;
            lVar11 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              iVar8 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar12 + 8))(plVar12,1);
              }
            }
          }
          return 1;
        }
        pwVar10 = &DAT_144046d98;
        plVar12 = (longlong *)plVar13[1];
        puVar7 = (undefined8 *)*plVar13;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        if (puVar7 != (undefined8 *)0x0) {
          puVar7 = (undefined8 *)(**(code **)*puVar7)(puVar7);
          plVar13 = (longlong *)puVar7[1];
          uVar6 = *puVar7;
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
          }
          local_180 = 3;
          local_238 = 0;
          local_230 = 0;
          local_228 = 0;
          local_220 = 0;
          local_218 = 0;
          local_210 = 0;
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
          local_1b8 = 0;
          local_1b0 = 0;
          local_1a8 = 0;
          local_1a0 = 0;
          local_188 = 0;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_188,0);
          FGenericPlatformString::Memcpy(local_188,&DAT_144046d54,6);
          puVar7 = (undefined8 *)FJsonObject::GetStringField(uVar6,local_b8,&local_188);
          if (&local_238 != puVar7) {
            local_238 = *puVar7;
            *puVar7 = 0;
            local_230 = puVar7[1];
            puVar7[1] = 0;
          }
          if (local_b8[0] != 0) {
            FMemory::Free();
          }
          if (local_188 != 0) {
            FMemory::Free();
          }
          local_178 = 0;
          local_170 = 8;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_178,0);
          FGenericPlatformString::Memcpy(local_178,L"user_id",0x10);
          puVar7 = (undefined8 *)FJsonObject::GetStringField(uVar6,local_a8,&local_178);
          if (&local_228 != puVar7) {
            local_228 = *puVar7;
            *puVar7 = 0;
            local_220 = puVar7[1];
            puVar7[1] = 0;
          }
          if (local_a8[0] != 0) {
            FMemory::Free();
          }
          if (local_178 != 0) {
            FMemory::Free();
          }
          local_168 = 0;
          local_160 = 10;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_168,0);
          FGenericPlatformString::Memcpy(local_168,L"user_name",0x14);
          puVar7 = (undefined8 *)FJsonObject::GetStringField(uVar6,local_98,&local_168);
          if (&local_208 != puVar7) {
            local_208 = *puVar7;
            *puVar7 = 0;
            local_200 = puVar7[1];
            puVar7[1] = 0;
          }
          if (local_98[0] != 0) {
            FMemory::Free();
          }
          if (local_168 != 0) {
            FMemory::Free();
          }
          local_158 = 0;
          local_150 = 8;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
          FGenericPlatformString::Memcpy(local_158,L"game_id",0x10);
          puVar7 = (undefined8 *)FJsonObject::GetStringField(uVar6,local_88,&local_158);
          if (&local_1f8 != puVar7) {
            local_1f8 = *puVar7;
            *puVar7 = 0;
            local_1f0 = puVar7[1];
            puVar7[1] = 0;
          }
          if (local_88[0] != 0) {
            FMemory::Free();
          }
          if (local_158 != 0) {
            FMemory::Free();
          }
          local_148 = 0;
          local_140 = 5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
          FGenericPlatformString::Memcpy(local_148,L"type",10);
          puVar7 = (undefined8 *)FJsonObject::GetStringField(uVar6,local_78,&local_148);
          if (*(int *)(puVar7 + 1) == 0) {
            puVar14 = &DAT_143f3eda8;
          }
          else {
            puVar14 = (undefined2 *)*puVar7;
          }
          do {
            wVar4 = *(wint_t *)((longlong)pwVar10 + (longlong)(puVar14 + -0xa20236cc));
            if ((wVar4 == 0) && (*pwVar10 == 0)) {
              iVar8 = 0;
              goto LAB_1406b40f1;
            }
            if (wVar4 != *pwVar10) {
              wVar4 = towlower(wVar4);
              wVar5 = towlower(*pwVar10);
              if (wVar4 != wVar5) goto LAB_1406b40e7;
            }
            pwVar10 = pwVar10 + 1;
          } while( true );
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar12 + 1;
          lVar11 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        goto LAB_1406b444a;
      }
    }
    plVar13 = local_250;
    if (local_250 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_250 + 1;
      lVar11 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      plVar12 = plStack_260;
      if ((int)lVar11 == 1) {
        (**(code **)*local_250)(local_250);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar12 = plStack_260;
        if (iVar8 == 1) {
          (**(code **)(*local_250 + 8))(local_250,1);
          plVar12 = plStack_260;
        }
      }
    }
    if (plVar12 == (longlong *)0x0) goto LAB_1406b3d09;
    LOCK();
    plVar12 = plVar12 + 1;
    iVar8 = (int)*plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
  }
  plVar12 = plStack_260;
  if (iVar8 == 1) {
    (**(code **)*plStack_260)(plStack_260);
    LOCK();
    piVar1 = (int *)((longlong)plVar12 + 0xc);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*plStack_260 + 8))(plStack_260,1);
    }
  }
LAB_1406b3d09:
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
  return 0;
LAB_1406b40e7:
  iVar8 = (uint)wVar4 - (uint)wVar5;
LAB_1406b40f1:
  local_1d8 = iVar8 == 0;
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  if (local_148 != 0) {
    FMemory::Free();
  }
  local_138 = 0;
  local_130 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
  FGenericPlatformString::Memcpy(local_138,L"title",0xc);
  puVar7 = (undefined8 *)FJsonObject::GetStringField(uVar6,local_68,&local_138);
  if (&local_1d0 != puVar7) {
    local_1d0 = *puVar7;
    *puVar7 = 0;
    local_1c8 = puVar7[1];
    puVar7[1] = 0;
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  if (local_138 != 0) {
    FMemory::Free();
  }
  local_128 = 0;
  local_120 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
  FGenericPlatformString::Memcpy(local_128,L"viewer_count",0x1a);
  dVar15 = (double)FJsonObject::GetNumberField(uVar6,&local_128);
  local_1c0 = (int)dVar15;
  if (local_128 != 0) {
    FMemory::Free();
  }
  local_118 = 0;
  local_110 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
  FGenericPlatformString::Memcpy(local_118,L"started_at",0x16);
  puVar7 = (undefined8 *)FJsonObject::GetStringField(uVar6,local_58,&local_118);
  if (&local_1b8 != puVar7) {
    local_1b8 = *puVar7;
    *puVar7 = 0;
    local_1b0 = puVar7[1];
    puVar7[1] = 0;
  }
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_118 != 0) {
    FMemory::Free();
  }
  local_108 = 0;
  local_100 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
  FGenericPlatformString::Memcpy(local_108,L"language",0x12);
  puVar7 = (undefined8 *)FJsonObject::GetStringField(uVar6,local_48,&local_108);
  if (&local_1a8 != puVar7) {
    local_1a8 = *puVar7;
    *puVar7 = 0;
    local_1a0 = puVar7[1];
    puVar7[1] = 0;
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_108 != 0) {
    FMemory::Free();
  }
  iVar8 = (int)param_3[1];
  *(int *)(param_3 + 1) = iVar8 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar8 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::ResizeGrow
              (param_3,iVar8);
  }
  lVar11 = (longlong)iVar8 * 0xa0 + *param_3;
  FString::FString(lVar11,&local_238);
  FString::FString(lVar11 + 0x10,&local_228);
  FString::FString(lVar11 + 0x20,&local_218);
  FString::FString(lVar11 + 0x30,&local_208);
  FString::FString(lVar11 + 0x40,&local_1f8);
  FString::FString(lVar11 + 0x50,&local_1e8);
  *(undefined1 *)(lVar11 + 0x60) = local_1d8;
  FString::FString(lVar11 + 0x68,&local_1d0);
  *(int *)(lVar11 + 0x78) = local_1c0;
  FString::FString(lVar11 + 0x80,&local_1b8);
  FString::FString(lVar11 + 0x90,&local_1a8);
  FUN_1406ad980(&local_238);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar13 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  plVar13 = local_248;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar12 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar13 = local_248;
      if (iVar8 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
        plVar13 = local_248;
      }
    }
  }
LAB_1406b444a:
  plVar13 = plVar13 + 2;
  plVar12 = plStack_260;
  plVar2 = local_250;
  goto joined_r0x0001406b3d4c;
}



// FUNCTION 1406b4550 FUN_1406b4550 body=2026 status=ok
// SIG undefined FUN_1406b4550(void)

undefined8 FUN_1406b4550(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  double dVar12;
  longlong *local_res20;
  undefined8 local_1a8;
  longlong *plStack_1a0;
  undefined1 local_198 [8];
  longlong *local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  int local_138;
  longlong local_128;
  undefined8 local_120;
  longlong local_118;
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
  longlong local_b8;
  longlong local_b0;
  longlong local_a8 [2];
  undefined8 local_98;
  longlong *plStack_90;
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  
  plVar9 = (longlong *)*param_2;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)param_2[1];
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar9 + 1;
      lVar8 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    return 0;
  }
  local_1a8 = 0;
  plStack_1a0 = (longlong *)0x0;
  uVar5 = (**(code **)(*plVar9 + 0x48))(plVar9,local_a8);
  TJsonReaderFactory<wchar_t>::Create(local_198,uVar5);
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  cVar3 = FUN_1404a7f60(local_198,&local_1a8);
  plVar11 = local_190;
  plVar9 = plStack_1a0;
  if (cVar3 == '\0') {
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_190 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_190)(local_190);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_190 + 8))(local_190,1);
        }
      }
    }
    if (plStack_1a0 == (longlong *)0x0) goto LAB_1406b4794;
    LOCK();
    plVar9 = plStack_1a0 + 1;
    iVar4 = (int)*plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
  }
  else {
    local_b8 = *param_2;
    local_b0 = param_2[1];
    if (local_b0 != 0) {
      LOCK();
      *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
      UNLOCK();
    }
    local_98 = local_1a8;
    plStack_90 = plStack_1a0;
    if (plStack_1a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_1a0 + 1) = (int)plStack_1a0[1] + 1;
      UNLOCK();
    }
    cVar3 = FUN_1406afb60(param_1,&local_98,&local_b8);
    if (cVar3 == '\0') {
      local_120 = 5;
      local_128 = 0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
      FGenericPlatformString::Memcpy(local_128,L"data",10);
      cVar3 = FUN_1416b3850(local_1a8,&local_128,&local_res20);
      if (local_128 != 0) {
        FMemory::Free();
      }
      if (cVar3 != '\0') {
        plVar11 = (longlong *)*local_res20;
        plVar10 = plVar11 + (longlong)(int)local_res20[1] * 2;
        plVar2 = local_190;
        for (; local_190 = plVar2, plVar11 != plVar10; plVar11 = plVar11 + 2) {
          plVar9 = (longlong *)plVar11[1];
          puVar6 = (undefined8 *)*plVar11;
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
          }
          if (puVar6 != (undefined8 *)0x0) {
            puVar6 = (undefined8 *)(**(code **)*puVar6)(puVar6);
            plVar2 = (longlong *)puVar6[1];
            uVar5 = *puVar6;
            if (plVar2 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
              UNLOCK();
            }
            local_110 = 3;
            local_188 = 0;
            local_180 = 0;
            local_178 = 0;
            local_170 = 0;
            local_168 = 0;
            local_160 = 0;
            local_158 = 0;
            local_150 = 0;
            local_148 = 0;
            local_140 = 0;
            local_118 = 0;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
            FGenericPlatformString::Memcpy(local_118,&DAT_144046c38,6);
            plVar7 = (longlong *)FJsonObject::GetStringField(uVar5,local_88,&local_118);
            if (&local_188 != plVar7) {
              local_188 = *plVar7;
              *plVar7 = 0;
              local_180 = plVar7[1];
              plVar7[1] = 0;
            }
            if (local_88[0] != 0) {
              FMemory::Free();
            }
            if (local_118 != 0) {
              FMemory::Free();
            }
            local_100 = 6;
            local_108 = 0;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
            FGenericPlatformString::Memcpy(local_108,L"login",0xc);
            plVar7 = (longlong *)FJsonObject::GetStringField(uVar5,local_78,&local_108);
            if (&local_178 != plVar7) {
              local_178 = *plVar7;
              *plVar7 = 0;
              local_170 = plVar7[1];
              plVar7[1] = 0;
            }
            if (local_78[0] != 0) {
              FMemory::Free();
            }
            if (local_108 != 0) {
              FMemory::Free();
            }
            local_f0 = 0xd;
            local_f8 = 0;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
            FGenericPlatformString::Memcpy(local_f8,L"display_name",0x1a);
            plVar7 = (longlong *)FJsonObject::GetStringField(uVar5,local_68,&local_f8);
            if (&local_168 != plVar7) {
              local_168 = *plVar7;
              *plVar7 = 0;
              local_160 = plVar7[1];
              plVar7[1] = 0;
            }
            if (local_68[0] != 0) {
              FMemory::Free();
            }
            if (local_f8 != 0) {
              FMemory::Free();
            }
            local_e0 = 5;
            local_e8 = 0;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
            FGenericPlatformString::Memcpy(local_e8,L"type",10);
            plVar7 = (longlong *)FJsonObject::GetStringField(uVar5,local_58,&local_e8);
            if (&local_158 != plVar7) {
              local_158 = *plVar7;
              *plVar7 = 0;
              local_150 = plVar7[1];
              plVar7[1] = 0;
            }
            if (local_58[0] != 0) {
              FMemory::Free();
            }
            if (local_e8 != 0) {
              FMemory::Free();
            }
            local_d0 = 0xc;
            local_d8 = 0;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
            FGenericPlatformString::Memcpy(local_d8,L"description",0x18);
            plVar7 = (longlong *)FJsonObject::GetStringField(uVar5,local_48,&local_d8);
            if (&local_148 != plVar7) {
              local_148 = *plVar7;
              *plVar7 = 0;
              local_140 = plVar7[1];
              plVar7[1] = 0;
            }
            if (local_48[0] != 0) {
              FMemory::Free();
            }
            if (local_d8 != 0) {
              FMemory::Free();
            }
            local_c0 = 0xb;
            local_c8 = 0;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
            FGenericPlatformString::Memcpy(local_c8,L"view_count",0x16);
            dVar12 = (double)FJsonObject::GetNumberField(uVar5,&local_c8);
            local_138 = (int)dVar12;
            if (local_c8 != 0) {
              FMemory::Free();
            }
            iVar4 = (int)param_3[1];
            *(int *)(param_3 + 1) = iVar4 + 1;
            if (*(int *)((longlong)param_3 + 0xc) < iVar4 + 1) {
              TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(param_3,iVar4);
            }
            lVar8 = (longlong)iVar4 * 0x58 + *param_3;
            FString::FString(lVar8,&local_188);
            FString::FString(lVar8 + 0x10,&local_178);
            FString::FString(lVar8 + 0x20,&local_168);
            FString::FString(lVar8 + 0x30,&local_158);
            FString::FString(lVar8 + 0x40,&local_148);
            *(int *)(lVar8 + 0x50) = local_138;
            if (local_148 != 0) {
              FMemory::Free();
            }
            if (local_158 != 0) {
              FMemory::Free();
            }
            if (local_168 != 0) {
              FMemory::Free();
            }
            if (local_178 != 0) {
              FMemory::Free();
            }
            if (local_188 != 0) {
              FMemory::Free();
            }
            if (plVar2 != (longlong *)0x0) {
              LOCK();
              plVar7 = plVar2 + 1;
              lVar8 = *plVar7;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)lVar8 == 1) {
                (**(code **)*plVar2)(plVar2);
                LOCK();
                piVar1 = (int *)((longlong)plVar2 + 0xc);
                iVar4 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*plVar2 + 8))(plVar2,1);
                }
              }
            }
          }
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar9 + 1;
            lVar8 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          plVar9 = plStack_1a0;
          plVar2 = local_190;
        }
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar2 + 1;
          lVar8 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          plVar9 = plStack_1a0;
          if ((int)lVar8 == 1) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar9 = plStack_1a0;
            if (iVar4 == 1) {
              (**(code **)(*local_190 + 8))(local_190,1);
              plVar9 = plStack_1a0;
            }
          }
        }
        plVar11 = plStack_1a0;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar9 + 1;
          lVar8 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plStack_1a0)(plStack_1a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plStack_1a0 + 8))(plStack_1a0,1);
            }
          }
        }
        plVar9 = (longlong *)param_2[1];
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar9 + 1;
          lVar8 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
        return 1;
      }
    }
    plVar11 = local_190;
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_190 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      plVar9 = plStack_1a0;
      if ((int)lVar8 == 1) {
        (**(code **)*local_190)(local_190);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar9 = plStack_1a0;
        if (iVar4 == 1) {
          (**(code **)(*local_190 + 8))(local_190,1);
          plVar9 = plStack_1a0;
        }
      }
    }
    if (plVar9 == (longlong *)0x0) goto LAB_1406b4794;
    LOCK();
    plVar9 = plVar9 + 1;
    iVar4 = (int)*plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
  }
  plVar9 = plStack_1a0;
  if (iVar4 == 1) {
    (**(code **)*plStack_1a0)(plStack_1a0);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plStack_1a0 + 8))(plStack_1a0,1);
    }
  }
LAB_1406b4794:
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
  return 0;
}



// FUNCTION 1406b4d40 FUN_1406b4d40 body=479 status=ok
// SIG undefined FUN_1406b4d40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406b4d40(longlong param_1,undefined8 param_2)

{
  void *pvVar1;
  longlong lVar2;
  void *_Memory;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined1 auStack_f8 [32];
  undefined4 local_d8 [2];
  longlong local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  longlong *local_b8;
  undefined8 *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  plVar5 = (longlong *)0x0;
  local_68 = 0;
  uStack_60 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = (longlong *)0x0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0x400;
  local_38 = 0;
  local_30 = 0;
  plVar4 = (longlong *)operator_new(0x28);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = 0;
    plVar4[1] = 0x10000;
    plVar4[2] = 0;
    plVar4[3] = 0;
    plVar4[4] = 0;
    plVar5 = plVar4;
  }
  local_c0 = &local_88;
  local_b8 = plVar5;
  local_78 = plVar5;
  local_70 = plVar5;
  FUN_142ab5a90(&local_c0,&local_88,param_2);
  local_d0 = 0;
  local_c8 = 0;
  cVar3 = FUN_142ab6cb0(&local_c0,&DAT_144048184,&local_d0);
  if (cVar3 != '\0') {
    local_b0 = &local_a0;
    local_a8 = local_78;
    local_a0 = 0;
    local_98 = 0x3000000000000;
    cVar3 = FUN_142ab6bc0(&local_c0,"payload",&local_b0);
    if (cVar3 != '\0') {
      local_d8[0] = 0;
      cVar3 = FUN_142ab69b0(&local_b0,"event_id",local_d8);
      uVar6 = local_d8[0];
      if (cVar3 == '\0') {
        uVar6 = 0;
      }
      (**(code **)(**(longlong **)(param_1 + 8) + 0x88))
                (*(longlong **)(param_1 + 8),uVar6,&local_d0,&local_b0);
    }
  }
  if (local_d0 != 0) {
    FMemory::Free();
  }
  plVar5 = local_70;
  if (local_70 != (longlong *)0x0) {
    _Memory = (void *)*local_70;
    while ((_Memory != (void *)0x0 && (_Memory != (void *)plVar5[2]))) {
      pvVar1 = *(void **)((longlong)_Memory + 0x10);
      free(_Memory);
      *plVar5 = (longlong)pvVar1;
      _Memory = pvVar1;
    }
    lVar2 = *plVar5;
    if ((lVar2 != 0) && (lVar2 == plVar5[2])) {
      *(undefined8 *)(lVar2 + 8) = 0;
    }
    FMemory::operator_delete(plVar5[4],1);
    FMemory::operator_delete(plVar5,0x28);
  }
  free(local_58);
  FMemory::operator_delete(uStack_60,1);
  return;
}



// FUNCTION 1406b4f20 FUN_1406b4f20 body=187 status=ok
// SIG undefined FUN_1406b4f20(void)

void FUN_1406b4f20(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_res8;
  int local_res18 [4];
  
  local_res18[0] = 0;
  FUTF8ToTCHAR_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
            (local_res18,0x7fffffff,param_2,param_3);
  lVar2 = *(longlong *)(param_1 + 0x100);
  *(int *)(param_1 + 0x110) = local_res18[0];
  uVar1 = local_res18[0] + param_4;
  if (uVar1 < 0x81) {
    if (lVar2 == 0) goto LAB_1406b4f9a;
    lVar4 = 0;
  }
  else {
    if ((lVar2 == 0) && (uVar1 == 0)) goto LAB_1406b4f9a;
    lVar4 = (longlong)(int)uVar1 * 2;
  }
  uVar3 = FMemory::Realloc(lVar2,lVar4,0);
  *(undefined8 *)(param_1 + 0x100) = uVar3;
LAB_1406b4f9a:
  local_res8 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    local_res8 = param_1;
  }
  *(longlong *)(param_1 + 0x108) = local_res8;
  FUTF8ToTCHAR_Convert::Convert_Impl<wchar_t_*>(&local_res8,uVar1,param_2,param_3 + param_4);
  return;
}



// FUNCTION 1406b5010 FUN_1406b5010 body=1474 status=ok
// SIG undefined FUN_1406b5010(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406b5010(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  int *piVar1;
  wchar_t *pwVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined2 *puVar15;
  undefined1 auStack_198 [32];
  longlong *local_178;
  longlong *local_168;
  undefined8 local_160;
  longlong local_158;
  longlong *local_150;
  longlong local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  wchar_t *local_128;
  int local_120;
  undefined4 local_11c;
  longlong local_118;
  undefined8 local_110;
  undefined8 *local_108;
  wchar_t *local_100;
  int local_f8;
  undefined4 local_f4;
  longlong *local_f0;
  wchar_t **local_e8;
  longlong local_e0 [2];
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  longlong *local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  *(longlong *)(param_1 + 8) = param_4;
  if ((param_4 != 0) && (1 < *(int *)(param_2 + 1))) {
    local_168 = (longlong *)0x0;
    local_160 = 0;
    local_148 = 0;
    local_140 = 4;
    local_108 = param_3;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
    lVar11 = local_148;
    FGenericPlatformString::Memcpy(local_148,&DAT_144047b48,8);
    lVar14 = (longlong)(int)local_160;
    iVar5 = (int)local_160 + 1;
    if (local_160._4_4_ < iVar5) {
      uVar13 = local_160 & 0xffffffff;
      local_160._0_4_ = iVar5;
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_168,uVar13);
      iVar5 = (int)local_160;
    }
    local_160._0_4_ = iVar5;
    plVar8 = local_168 + lVar14 * 2;
    local_138 = 0;
    local_130 = 3;
    *plVar8 = lVar11;
    *(undefined4 *)(plVar8 + 1) = (undefined4)local_140;
    *(undefined4 *)((longlong)plVar8 + 0xc) = local_140._4_4_;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
    lVar11 = local_138;
    FGenericPlatformString::Memcpy(local_138,&DAT_144047b50,6);
    iVar5 = (int)local_160;
    lVar14 = (longlong)(int)local_160;
    local_160._0_4_ = (int)local_160 + 1;
    if (local_160._4_4_ < (int)local_160) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_168,iVar5);
    }
    plVar8 = local_168 + lVar14 * 2;
    local_118 = 0;
    local_110 = 0xe;
    *plVar8 = lVar11;
    *(undefined4 *)(plVar8 + 1) = (undefined4)local_130;
    *(undefined4 *)((longlong)plVar8 + 0xc) = local_130._4_4_;
    local_98 = 0;
    local_90 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
    FGenericPlatformString::Memcpy(local_118,L"Authorization",0x1c);
    local_128 = (wchar_t *)0x0;
    local_11c = 0;
    iVar5 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar5 = 0;
    }
    local_120 = iVar5 + 0xd;
    if (0 < local_120) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    }
    uVar4 = local_11c;
    iVar3 = local_120;
    pwVar2 = local_128;
    builtin_wcsncpy(local_128,L"GBX1-BEARER ",0xc);
    _guard_xfg_dispatch_icall_nop(local_128 + 0xc,(void *)*local_108,(longlong)iVar5 * 2);
    pwVar2[(longlong)iVar5 + 0xc] = L'\0';
    local_f0 = &local_118;
    local_e8 = &local_100;
    local_100 = pwVar2;
    local_f8 = iVar3;
    local_f4 = uVar4;
    FUN_140497620(&local_98,&local_108,&local_f0,0);
    if (local_100 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_118 != 0) {
      FMemory::Free();
    }
    if (*(int *)(param_2 + 1) == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = (undefined2 *)*param_2;
    }
    FString::PrintfImpl(local_e0,L"wss://%s",puVar15);
    puVar6 = (undefined8 *)FName::FName(local_d0,"WebSockets",1);
    uVar12 = *puVar6;
    uVar7 = FUN_14168dc80();
    plVar8 = (longlong *)FUN_141690010(uVar7,uVar12);
    local_178 = &local_98;
    plVar8 = (longlong *)(**(code **)(*plVar8 + 0x48))(plVar8,local_a8,local_e0,&local_168);
    local_150 = (longlong *)plVar8[1];
    local_158 = *plVar8;
    if (local_150 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_150 + 1) = (int)local_150[1] + 1;
      UNLOCK();
    }
    plVar8 = (longlong *)(param_1 + 0x10);
    if (plVar8 != &local_158) {
      *plVar8 = local_158;
      local_158 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x18,&local_150);
    }
    plVar9 = local_150;
    if (local_150 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_150 + 1;
      lVar11 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_150 + 8))(local_150,1);
        }
      }
    }
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_a0 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    if ((longlong *)*plVar8 == (longlong *)0x0) {
      FUN_1406be420(param_1);
    }
    else {
      plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar8 + 0x30))();
      plVar10 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar10 != (longlong *)0x0) {
        plVar10[1] = param_1;
        *plVar10 = (longlong)&DAT_143f3ed00;
        plVar10[2] = (longlong)AK::MemoryMgr::StartProfileThreadUsage;
        lVar11 = FDelegateHandle::GenerateNewID();
        plVar10[4] = lVar11;
        *plVar10 = (longlong)&PTR_GetPoolName_143f3ed48;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar9,1);
        (**(code **)(*plVar10 + 0x20))(plVar10,local_c8);
        iVar5 = (int)plVar9[1];
        *(int *)(plVar9 + 1) = iVar5 + 1;
        if (*(int *)((longlong)plVar9 + 0xc) < iVar5 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar5);
        }
        puVar6 = (undefined8 *)((longlong)iVar5 * 0x10 + *plVar9);
        *puVar6 = plVar10;
        *(undefined4 *)(puVar6 + 1) = 3;
      }
      uVar12 = (**(code **)(*(longlong *)*plVar8 + 0x38))();
      FUN_1406ac210(uVar12,local_c0,param_1,FUN_1406b6f60);
      uVar12 = (**(code **)(*(longlong *)*plVar8 + 0x48))();
      FUN_1406ac210(uVar12,local_b8,param_1,&LAB_1406b6fd0);
      plVar9 = (longlong *)(**(code **)(*(longlong *)*plVar8 + 0x40))();
      plVar10 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar10 != (longlong *)0x0) {
        plVar10[1] = param_1;
        *plVar10 = (longlong)&DAT_143f3ed00;
        plVar10[2] = (longlong)&LAB_1406b6ef0;
        lVar11 = FDelegateHandle::GenerateNewID();
        plVar10[4] = lVar11;
        *plVar10 = (longlong)&PTR_GetPoolName_143f3ed48;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar9,1);
        (**(code **)(*plVar10 + 0x20))(plVar10,local_b0);
        iVar5 = (int)plVar9[1];
        *(int *)(plVar9 + 1) = iVar5 + 1;
        if (*(int *)((longlong)plVar9 + 0xc) < iVar5 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar9,iVar5);
        }
        puVar6 = (undefined8 *)((longlong)iVar5 * 0x10 + *plVar9);
        *puVar6 = plVar10;
        *(undefined4 *)(puVar6 + 1) = 3;
      }
      (**(code **)(*(longlong *)*plVar8 + 8))();
    }
    if (local_e0[0] != 0) {
      FMemory::Free();
    }
    local_50 = 0;
    if (local_58 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(&local_98,0);
    if (local_78 != 0) {
      FMemory::Free();
    }
    if (local_98 != 0) {
      FMemory::Free();
    }
    plVar8 = local_168;
    for (iVar5 = (int)local_160; iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*plVar8 != 0) {
        FMemory::Free();
      }
      plVar8 = plVar8 + 2;
    }
    if (local_168 != (longlong *)0x0) {
      FMemory::Free(local_168);
    }
  }
  return;
}



// FUNCTION 1406b55e0 FUN_1406b55e0 body=1324 status=ok
// SIG undefined FUN_1406b55e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406b55e0(longlong param_1)

{
  int *piVar1;
  void *pvVar2;
  ulonglong uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined2 **ppuVar15;
  longlong lVar16;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined4 local_1a8 [2];
  longlong local_1a0 [2];
  undefined2 *local_190;
  ulonglong local_188;
  wchar_t *local_180;
  undefined8 local_178;
  undefined8 *local_170;
  int local_168;
  undefined4 local_164;
  undefined8 local_160;
  void *local_158;
  int local_150;
  undefined4 local_14c;
  void *local_148;
  int local_140;
  undefined4 local_13c;
  longlong *local_138;
  longlong *local_130;
  wchar_t *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 *local_118;
  int local_110;
  undefined4 local_10c;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined1 local_f0 [24];
  undefined1 local_d8 [128];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  uVar7 = FName::FName(local_108,L"WINDOWS",1);
  plVar8 = (longlong *)FUN_1419c6b80(uVar7);
  puVar12 = &DAT_143f3eda8;
  if (DAT_14622ccc8 != 0) {
    puVar12 = DAT_14622ccc0;
  }
  TStringConversion<TStringConvert<wchar_t,char>,128>::
  TStringConversion<TStringConvert<wchar_t,char>,128>(local_d8,puVar12);
  plVar8 = (longlong *)(**(code **)(*plVar8 + 0x38))(plVar8,local_50);
  if (local_58 != 0) {
    FMemory::Free();
  }
  do {
    cVar5 = (**(code **)(*plVar8 + 8))(plVar8);
  } while (cVar5 == '\0');
  iVar6 = (**(code **)(*plVar8 + 0x10))(plVar8);
  if (iVar6 == 0) {
    plVar8 = (longlong *)(**(code **)(*plVar8 + 0x18))(plVar8);
    puVar14 = (undefined8 *)0x0;
    local_1a8[0] = 0;
    (**(code **)(*plVar8 + 0x28))(plVar8,local_1a8);
    uVar7 = FName::FName(local_100,L"WINDOWS",1);
    plVar8 = (longlong *)FUN_1419c6b80(uVar7);
    (**(code **)(*plVar8 + 0x70))(plVar8,&local_138,0,0);
    (**(code **)(*local_138 + 0x10))(local_138,local_1a8[0]);
    (**(code **)(*local_138 + 0x30))(local_138,0x1a0b);
    local_1a0[0] = 0;
    local_1a0[1] = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1a0,0);
    FGenericPlatformString::Memcpy(local_1a0[0],L"TwitchChatWriter",0x22);
    local_160 = 0x119;
    uVar7 = FName::FName(local_f8,L"WINDOWS",1);
    plVar8 = (longlong *)FUN_1419c6b80(uVar7);
    uVar7 = (**(code **)(*plVar8 + 0x18))(plVar8,&local_160,local_1a0,0);
    *(undefined8 *)(param_1 + 0x90) = uVar7;
    if (local_1a0[0] != 0) {
      FMemory::Free();
    }
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))
                      (*(longlong **)(param_1 + 0x90),local_138);
    if (cVar5 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x90) + 8))();
    }
    else {
      local_190 = (undefined2 *)0x0;
      local_188 = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_190,0);
      puVar12 = local_190;
      FGenericPlatformString::Memcpy(local_190,L"MrBot",0xc);
      uVar3 = local_188;
      uVar7 = *(undefined8 *)(param_1 + 0x90);
      iVar6 = (int)local_188;
      lVar16 = (longlong)(int)local_188;
      *(undefined1 *)(param_1 + 0x88) = 1;
      if (DAT_146857fe8 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)operator_new(0x38);
        if (puVar9 != (undefined8 *)0x0) {
          puVar9[1] = 0;
          *puVar9 = &PTR_LAB_14404be28;
          puVar9[2] = 0;
          puVar9[3] = 0;
          puVar9[4] = 0;
          puVar9[5] = 0;
          *(undefined1 *)(puVar9 + 6) = 1;
          local_1b8 = 0xffffffffffffffff;
          uVar10 = FUN_1415d42a0(puVar9,L"FIRCClientListenerThread",0,2);
          puVar9[2] = uVar10;
          puVar14 = puVar9;
        }
        ppuVar15 = (undefined2 **)(puVar14 + 4);
        DAT_146857fe8 = puVar14;
        if (ppuVar15 != &local_190) {
          *(int *)(puVar14 + 5) = iVar6;
          if ((iVar6 == 0) && (*(int *)((longlong)puVar14 + 0x2c) == 0)) {
            *(undefined4 *)((longlong)puVar14 + 0x2c) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppuVar15,uVar3 & 0xffffffff);
            _guard_xfg_dispatch_icall_nop(*ppuVar15,puVar12,lVar16 * 2);
          }
        }
        DAT_146857fe8[1] = param_1;
        DAT_146857fe8[3] = uVar7;
      }
      local_180 = (wchar_t *)0x0;
      local_178 = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_180,0);
      local_128 = local_180;
      builtin_wcsncpy(local_180,L"PASS ",6);
      local_120 = (undefined4)local_178;
      local_11c = local_178._4_4_;
      FUN_1406bda00(param_1,&local_128);
      iVar13 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar13 = 0;
      }
      local_170 = (undefined8 *)0x0;
      local_164 = 0;
      local_168 = iVar13 + 6;
      if (0 < local_168) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_170,0);
      }
      iVar4 = local_168;
      puVar14 = local_170;
      *local_170 = 0x4b00430049004e;
      *(undefined2 *)(local_170 + 1) = 0x20;
      _guard_xfg_dispatch_icall_nop((void *)((longlong)local_170 + 10),puVar12,(longlong)iVar13 * 2)
      ;
      *(undefined2 *)((longlong)puVar14 + (longlong)iVar13 * 2 + 10) = 0;
      local_10c = local_164;
      local_118 = puVar14;
      local_110 = iVar4;
      FUN_1406bda00(param_1,&local_118);
      puVar11 = &DAT_143f3eda8;
      if (iVar6 != 0) {
        puVar11 = puVar12;
      }
      FString::PrintfImpl(local_f0,L"USER %s 8 * :%s",puVar11,puVar11);
      FUN_1406bda00(param_1,local_f0);
      pvVar2 = DAT_14622cd00;
      local_158 = (void *)0x0;
      iVar6 = (int)DAT_14622cd08;
      local_150 = iVar6;
      if (iVar6 == 0) {
        local_14c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_158,DAT_14622cd08 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_158,pvVar2,(longlong)iVar6 * 2);
      }
      FUN_1406bda00(param_1,&local_158);
      pvVar2 = DAT_14622cd10;
      local_148 = (void *)0x0;
      iVar6 = (int)DAT_14622cd18;
      local_140 = iVar6;
      if (iVar6 == 0) {
        local_13c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_148,DAT_14622cd18 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_148,pvVar2,(longlong)iVar6 * 2);
      }
      FUN_1406bda00(param_1,&local_148);
      if (puVar12 != (undefined2 *)0x0) {
        FMemory::Free(puVar12);
      }
    }
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_130 + 1;
      lVar16 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar1 = (int *)((longlong)local_130 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_130 + 8))(local_130,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 1406b5b10 FUN_1406b5b10 body=1201 status=ok
// SIG undefined FUN_1406b5b10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406b5b10(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_138 [32];
  longlong *local_118;
  longlong *local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined1 local_a8 [8];
  undefined1 local_a0 [8];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  longlong *local_88;
  longlong local_78;
  undefined8 local_70;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_e0 = 4;
  local_108 = (longlong *)0x0;
  local_100 = 0;
  local_e8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  lVar8 = local_e8;
  FGenericPlatformString::Memcpy(local_e8,&DAT_144048d38,8);
  lVar11 = (longlong)(int)local_100;
  iVar2 = (int)local_100 + 1;
  if (local_100._4_4_ < iVar2) {
    uVar10 = local_100 & 0xffffffff;
    local_100._0_4_ = iVar2;
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_108,uVar10);
    iVar2 = (int)local_100;
  }
  local_100._0_4_ = iVar2;
  plVar5 = local_108 + lVar11 * 2;
  local_d8 = 0;
  local_d0 = 3;
  *plVar5 = lVar8;
  *(undefined4 *)(plVar5 + 1) = (undefined4)local_e0;
  *(undefined4 *)((longlong)plVar5 + 0xc) = local_e0._4_4_;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
  lVar8 = local_d8;
  FGenericPlatformString::Memcpy(local_d8,&DAT_1440482d4,6);
  iVar2 = (int)local_100;
  lVar11 = (longlong)(int)local_100;
  local_100._0_4_ = (int)local_100 + 1;
  if (local_100._4_4_ < (int)local_100) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_108,iVar2);
  }
  plVar5 = local_108 + lVar11 * 2;
  *plVar5 = lVar8;
  *(undefined4 *)(plVar5 + 1) = (undefined4)local_d0;
  *(undefined4 *)((longlong)plVar5 + 0xc) = local_d0._4_4_;
  local_c8 = 0;
  local_c0 = 0x24;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
  FGenericPlatformString::Memcpy(local_c8,L"wss://metadata.twitch.tv/api/ingest",0x48);
  _guard_xfg_dispatch_icall_nop(&local_78,0,0x50);
  puVar3 = (undefined8 *)FName::FName(local_b8,"WebSockets",1);
  uVar9 = *puVar3;
  uVar4 = FUN_14168dc80();
  plVar5 = (longlong *)FUN_141690010(uVar4,uVar9);
  local_78 = 0;
  local_118 = &local_78;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_44 = 0;
  local_48 = 0xffffffff;
  local_38 = 0;
  local_30 = 0;
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x48))(plVar5,local_90,&local_c8,&local_108);
  local_f0 = (longlong *)plVar5[1];
  local_f8 = *plVar5;
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)(param_1 + 0x70);
  if (plVar5 != &local_f8) {
    *plVar5 = local_f8;
    local_f8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x78,&local_f0);
  }
  plVar6 = local_f0;
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_f0 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_88 + 1;
    lVar8 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  local_30 = 0;
  if (local_38 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(&local_78,0);
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_78 != 0) {
    FMemory::Free();
  }
  if ((longlong *)*plVar5 == (longlong *)0x0) {
    FUN_1406be2d0(param_1);
  }
  else {
    plVar6 = (longlong *)(**(code **)(*(longlong *)*plVar5 + 0x30))();
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar7 != (longlong *)0x0) {
      plVar7[1] = param_1;
      *plVar7 = (longlong)&DAT_143f3ed00;
      plVar7[2] = (longlong)FUN_1406b6f30;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[4] = lVar8;
      *plVar7 = (longlong)&PTR_GetPoolName_143f3ed48;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
      (**(code **)(*plVar7 + 0x20))(plVar7,local_b0);
      iVar2 = (int)plVar6[1];
      *(int *)(plVar6 + 1) = iVar2 + 1;
      if (*(int *)((longlong)plVar6 + 0xc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar2);
      }
      puVar3 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar6);
      *puVar3 = plVar7;
      *(undefined4 *)(puVar3 + 1) = 3;
    }
    uVar9 = (**(code **)(*(longlong *)*plVar5 + 0x38))();
    FUN_1406ac210(uVar9,local_a8,param_1,&LAB_1406b6fc0);
    uVar9 = (**(code **)(*(longlong *)*plVar5 + 0x48))();
    FUN_1406ac210(uVar9,local_a0,param_1,FUN_1406b6fe0);
    plVar6 = (longlong *)(**(code **)(*(longlong *)*plVar5 + 0x40))();
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar7 != (longlong *)0x0) {
      plVar7[1] = param_1;
      *plVar7 = (longlong)&DAT_143f3ed00;
      plVar7[2] = (longlong)&LAB_1406b6f20;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[4] = lVar8;
      *plVar7 = (longlong)&PTR_GetPoolName_143f3ed48;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar6,1);
      (**(code **)(*plVar7 + 0x20))(plVar7,local_98);
      iVar2 = (int)plVar6[1];
      *(int *)(plVar6 + 1) = iVar2 + 1;
      if (*(int *)((longlong)plVar6 + 0xc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar6,iVar2);
      }
      puVar3 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar6);
      *puVar3 = plVar7;
      *(undefined4 *)(puVar3 + 1) = 3;
    }
    (**(code **)(*(longlong *)*plVar5 + 8))();
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  plVar5 = local_108;
  for (iVar2 = (int)local_100; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_108 != (longlong *)0x0) {
    FMemory::Free(local_108);
  }
  return;
}



// FUNCTION 1406b5fd0 FUN_1406b5fd0 body=75 status=ok
// SIG undefined FUN_1406b5fd0(void)

undefined8 * FUN_1406b5fd0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x230);
  if (puVar1 != (undefined8 *)0x0) {
    _guard_xfg_dispatch_icall_nop(puVar1 + 1,0,0x228);
    *puVar1 = &PTR_FUN_14404bd18;
    FUN_1406ad130(puVar1 + 1);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1406b6030 FUN_1406b6030 body=517 status=ok
// SIG undefined FUN_1406b6030(void)

void FUN_1406b6030(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined2 *local_a8;
  int local_a0;
  undefined1 local_98 [16];
  longlong local_88;
  void *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  
  FString::ToLower(param_1,&local_a8);
  puVar6 = &DAT_143f3eda8;
  if (local_a0 != 0) {
    puVar6 = local_a8;
  }
  FString::PrintfImpl(local_98,L"JOIN #%s",puVar6);
  FUN_1406bda00(DAT_146857ff0,local_98);
  local_80 = (void *)0x0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  FWeakObjectPtr::operator=(&local_40,0);
  puVar6 = local_a8;
  local_38 = 0;
  local_78 = CONCAT44(local_78._4_4_,local_a0);
  if ((local_a0 == 0) && (local_78._4_4_ == 0)) {
    local_78 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,local_a0);
    _guard_xfg_dispatch_icall_nop(local_80,puVar6,(longlong)local_a0 * 2);
  }
  local_40 = *param_2;
  local_3c = param_2[1];
  local_38 = *(undefined8 *)(param_2 + 2);
  plVar3 = (longlong *)FDateTime::Now(local_res8);
  plVar4 = (longlong *)FDateTime::FDateTime(local_res10,0x7b2,1,1,0,0,0,0);
  lVar1 = DAT_146857ff0;
  lVar5 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(*plVar3 - *plVar4),8) + (*plVar3 - *plVar4);
  local_88 = (lVar5 >> 0x17) - (lVar5 >> 0x3f);
  iVar2 = FUN_1406b25e0(DAT_146857ff0 + 0x58,&local_88);
  if (iVar2 == -1) {
    iVar2 = *(int *)(lVar1 + 0x60);
    *(int *)(lVar1 + 0x60) = iVar2 + 1;
    if (*(int *)(lVar1 + 100) < iVar2 + 1) {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(lVar1 + 0x58,iVar2);
    }
    FUN_1406aced0((longlong)iVar2 * 0x58 + *(longlong *)(lVar1 + 0x58),&local_88);
  }
  TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>::
  ~TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>(&local_50);
  plVar3 = local_60;
  for (iVar2 = (int)local_58; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_60 != (longlong *)0x0) {
    FMemory::Free(local_60);
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  if (local_80 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406b6240 FUN_1406b6240 body=2105 status=ok
// SIG undefined FUN_1406b6240(void)

void FUN_1406b6240(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int *piVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 local_138;
  longlong *plStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118 [8];
  longlong *local_110;
  int local_108 [2];
  longlong local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  int *local_d0;
  undefined1 local_c8 [4];
  undefined1 local_c4 [4];
  longlong *local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  undefined8 local_48;
  longlong *plStack_40;
  
  local_b8 = *param_3;
  local_b0 = param_3[1];
  local_128 = 0;
  local_120 = 0;
  if (local_b0 != 0) {
    LOCK();
    *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
    UNLOCK();
  }
  local_a8 = *param_2;
  local_a0 = param_2[1];
  if (local_a0 != 0) {
    LOCK();
    *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
    UNLOCK();
  }
  cVar4 = FUN_1406b8870(param_1,&local_128,&local_a8,&local_b8,param_4);
  if (cVar4 == '\0') {
    plVar2 = (longlong *)param_2[1];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar2 + 1;
      lVar15 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar15 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar11 = (int *)((longlong)plVar2 + 0xc);
        iVar5 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
    plVar2 = (longlong *)param_3[1];
    if (plVar2 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar9 = plVar2 + 1;
    lVar15 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar15 != 1) {
      return;
    }
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar11 = (int *)((longlong)plVar2 + 0xc);
    iVar5 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar5 != 1) {
      return;
    }
    (**(code **)(*plVar2 + 8))(plVar2,1);
    return;
  }
  plVar2 = (longlong *)(param_1 + 200);
  if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
    iVar5 = FCrc::MemCrc_DEPRECATED(&local_128,0x10);
    lVar15 = *(longlong *)(param_1 + 0x108);
    if (*(longlong *)(param_1 + 0x108) == 0) {
      lVar15 = param_1 + 0x100;
    }
    iVar5 = *(int *)(lVar15 + ((longlong)*(int *)(param_1 + 0x110) - 1U & (longlong)iVar5) * 4);
    if (iVar5 != -1) {
      do {
        piVar11 = (int *)((longlong)iVar5 * 0x80 + *plVar2);
        if (((piVar11[1] == local_128._4_4_ && piVar11[2] == (int)local_120) &&
            piVar11[3] == local_120._4_4_) && (int)local_128 == *piVar11) {
          if (iVar5 != -1) {
            if (*(int *)(param_1 + 0xd0) == *(int *)(param_1 + 0xfc)) goto LAB_1406b64ab;
            iVar5 = FCrc::MemCrc_DEPRECATED(&local_128,0x10);
            lVar15 = *(longlong *)(param_1 + 0x108);
            if (*(longlong *)(param_1 + 0x108) == 0) {
              lVar15 = param_1 + 0x100;
            }
            iVar5 = *(int *)(lVar15 + ((longlong)*(int *)(param_1 + 0x110) - 1U & (longlong)iVar5) *
                                      4);
            if (iVar5 == -1) goto LAB_1406b64ab;
            goto LAB_1406b6470;
          }
          break;
        }
        iVar5 = piVar11[0x1e];
      } while (iVar5 != -1);
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
  return;
  while (iVar5 = local_d0[0x1e], iVar5 != -1) {
LAB_1406b6470:
    local_d0 = (int *)((longlong)iVar5 * 0x80 + *plVar2);
    if (((local_d0[1] == local_128._4_4_ && local_d0[2] == (int)local_120) &&
        local_d0[3] == local_120._4_4_) && (int)local_128 == *local_d0) {
      if (iVar5 != -1) goto LAB_1406b64ae;
      break;
    }
  }
LAB_1406b64ab:
  local_d0 = (int *)0x0;
LAB_1406b64ae:
  local_d0 = local_d0 + 4;
  local_138 = 0;
  plStack_130 = (longlong *)0x0;
  uVar6 = (**(code **)(*(longlong *)*param_3 + 0x48))((longlong *)*param_3,local_58);
  TJsonReaderFactory<wchar_t>::Create(local_118,uVar6);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  cVar4 = FUN_1404a7f60(local_118,&local_138);
  plVar9 = plStack_130;
  if (cVar4 != '\0') {
    local_98 = *param_3;
    local_90 = param_3[1];
    if (local_90 != 0) {
      LOCK();
      *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
      UNLOCK();
    }
    local_48 = local_138;
    plStack_40 = plStack_130;
    if (plStack_130 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_130 + 1) = (int)plStack_130[1] + 1;
      UNLOCK();
    }
    cVar4 = FUN_1406afb60(param_1,&local_48,&local_98);
    if (cVar4 != '\0') {
      FUN_1406b9180(plVar2,&local_128);
      plVar2 = local_110;
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_110 + 1;
        lVar15 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        plVar9 = plStack_130;
        if ((int)lVar15 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar11 = (int *)((longlong)plVar2 + 0xc);
          iVar5 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          plVar9 = plStack_130;
          if (iVar5 == 1) {
            (**(code **)(*local_110 + 8))(local_110,1);
            plVar9 = plStack_130;
          }
        }
      }
      plVar2 = plStack_130;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar9 + 1;
        lVar15 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*plStack_130)(plStack_130);
          LOCK();
          piVar11 = (int *)((longlong)plVar2 + 0xc);
          iVar5 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plStack_130 + 8))(plStack_130,1);
          }
        }
      }
LAB_1406b6892:
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
      return;
    }
    local_100 = 0;
    local_f8 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_100,0);
    FGenericPlatformString::Memcpy(local_100,L"data",10);
    cVar4 = FUN_1416b3850(local_138,&local_100,&local_c0);
    if (local_100 != 0) {
      FMemory::Free();
    }
    if (cVar4 != '\0') {
      plVar14 = (longlong *)*local_c0;
      plVar12 = plVar14 + (longlong)(int)local_c0[1] * 2;
      for (; plVar14 != plVar12; plVar14 = plVar14 + 2) {
        plVar9 = (longlong *)plVar14[1];
        puVar7 = (undefined8 *)*plVar14;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        if (puVar7 != (undefined8 *)0x0) {
          puVar7 = (undefined8 *)(**(code **)*puVar7)();
          plVar3 = (longlong *)puVar7[1];
          uVar6 = *puVar7;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
            UNLOCK();
          }
          local_e8 = 3;
          local_f0 = 0;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f0,0);
          FGenericPlatformString::Memcpy(local_f0,&DAT_1440469cc,6);
          FJsonObject::GetStringField(uVar6,local_68,&local_f0);
          if (local_f0 != 0) {
            FMemory::Free();
          }
          local_d8 = 5;
          local_e0 = 0;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e0,0);
          FGenericPlatformString::Memcpy(local_e0,L"name",10);
          FJsonObject::GetStringField(uVar6,local_78,&local_e0);
          if (local_e0 != 0) {
            FMemory::Free();
          }
          local_80 = local_78;
          local_88 = local_68;
          TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                    (param_1 + 0x28,local_c8,&local_88,0);
          if (local_78[0] != 0) {
            FMemory::Free();
          }
          if (local_68[0] != 0) {
            FMemory::Free();
          }
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            lVar15 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar11 = (int *)((longlong)plVar3 + 0xc);
              iVar5 = *piVar11;
              *piVar11 = *piVar11 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3);
              }
            }
          }
        }
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar9 + 1;
          lVar15 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar11 = (int *)((longlong)plVar9 + 0xc);
            iVar5 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9);
            }
          }
        }
        plVar9 = plStack_130;
      }
      if ((char)local_d0[0xc] == '\0') {
        FUN_1406bdf10(param_1,local_d0);
        plVar2 = local_110;
        if (local_110 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_110 + 1;
          lVar15 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          plVar9 = plStack_130;
          if ((int)lVar15 == 1) {
            (**(code **)*local_110)(local_110);
            LOCK();
            piVar11 = (int *)((longlong)plVar2 + 0xc);
            iVar5 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            plVar9 = plStack_130;
            if (iVar5 == 1) {
              (**(code **)(*local_110 + 8))(local_110,1);
              plVar9 = plStack_130;
            }
          }
        }
        plVar2 = plStack_130;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar9 + 1;
          lVar15 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar15 == 1) {
            (**(code **)*plStack_130)(plStack_130);
            LOCK();
            piVar11 = (int *)((longlong)plVar2 + 0xc);
            iVar5 = *piVar11;
            *piVar11 = *piVar11 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plStack_130 + 8))(plStack_130,1);
            }
          }
        }
        goto LAB_1406b6892;
      }
      lVar15 = *(longlong *)(local_d0 + 4);
      lVar13 = (longlong)local_d0[6] * 0xa0 + lVar15;
      if (lVar15 != lVar13) {
        lVar10 = lVar15 + 0x40;
        do {
          piVar11 = (int *)TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
                           ::FindId(param_1 + 0x28,local_c4,lVar10);
          if (*piVar11 != -1) {
            TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
            ::FindId(param_1 + 0x28,local_108,lVar10);
            if (local_108[0] == -1) {
              lVar8 = 0;
            }
            else {
              lVar8 = *(longlong *)(param_1 + 0x28) + (longlong)local_108[0] * 0x28;
            }
            FString::operator=(lVar10 + 0x10,lVar8 + 0x10);
          }
          lVar15 = lVar15 + 0xa0;
          lVar10 = lVar10 + 0xa0;
        } while (lVar15 != lVar13);
      }
      *(undefined1 *)((longlong)local_d0 + 0x31) = 1;
      cVar4 = FUN_1406b16b0();
      if (cVar4 != '\0') {
        FUN_1406b9180(plVar2,&local_128);
      }
    }
  }
  plVar2 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_110 + 1;
    lVar15 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    plVar9 = plStack_130;
    if ((int)lVar15 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar11 = (int *)((longlong)plVar2 + 0xc);
      iVar5 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      plVar9 = plStack_130;
      if (iVar5 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
        plVar9 = plStack_130;
      }
    }
  }
  plVar2 = plStack_130;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar9 + 1;
    lVar15 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plStack_130)(plStack_130);
      LOCK();
      piVar11 = (int *)((longlong)plVar2 + 0xc);
      iVar5 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plStack_130 + 8))(plStack_130,1);
      }
    }
  }
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar2 + 1;
    lVar15 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar11 = (int *)((longlong)plVar2 + 0xc);
      iVar5 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  plVar2 = (longlong *)param_3[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar2 + 1;
    lVar15 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar15 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar11 = (int *)((longlong)plVar2 + 0xc);
      iVar5 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return;
}



// FUNCTION 1406b6a80 FUN_1406b6a80 body=1134 status=ok
// SIG undefined FUN_1406b6a80(void)

void FUN_1406b6a80(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  void *_Src;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  void **ppvVar11;
  int iVar12;
  longlong lVar13;
  longlong *local_d8;
  int local_d0;
  longlong local_c8;
  longlong *plStack_c0;
  void *local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  longlong *plStack_90;
  longlong local_88;
  longlong *plStack_80;
  undefined1 local_78 [8];
  longlong *local_70;
  longlong local_68 [2];
  longlong local_58 [2];
  longlong *local_48;
  
  lVar13 = 0;
  cVar7 = FWeakObjectPtr::IsValid(param_1 + 0x11);
  if (cVar7 == '\0') {
    return;
  }
  uVar8 = FWeakObjectPtr::Get(param_1 + 0x11);
  FUN_142450450(uVar8,&local_98);
  lVar9 = FUN_142b45e90();
  uVar8 = *(undefined8 *)(lVar9 + 0x18);
  if (local_98 == 0) {
    plVar10 = &local_c8;
    local_c8 = 0;
    plStack_c0 = (longlong *)0x0;
    bVar6 = false;
    bVar5 = false;
    bVar4 = true;
  }
  else {
    local_88 = local_98;
    plStack_80 = plStack_90;
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
      UNLOCK();
    }
    plVar10 = (longlong *)FUN_142b4a990(uVar8,local_78,&local_88);
    bVar6 = true;
    bVar5 = true;
    bVar4 = false;
    lVar13 = *plVar10;
  }
  plVar3 = (longlong *)plVar10[1];
  plVar10[1] = 0;
  *plVar10 = 0;
  plVar10 = plStack_c0;
  if ((bVar4) && (plStack_c0 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_c0 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
      }
    }
  }
  if ((bVar5) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_70 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  plVar10 = plStack_80;
  if ((bVar6) && (plStack_80 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_80 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  uVar8 = 0;
  if ((lVar13 == 0) || (param_2 != 0)) {
    (**(code **)(*param_1 + 0x10))(param_1);
    goto LAB_1406b6e31;
  }
  uVar8 = (**(code **)(*param_1 + 0x20))(param_1,local_58);
  uVar8 = FString::ToLower(uVar8,local_68);
  FUN_142b49520(lVar13,&local_b8,uVar8);
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  _Src = local_b8;
  lVar9 = DAT_146857fe0;
  if ((DAT_146857fe0 != 0) && (ppvVar11 = (void **)(DAT_146857fe0 + 0x128), ppvVar11 != &local_b8))
  {
    piVar2 = (int *)(DAT_146857fe0 + 0x134);
    iVar12 = (int)local_b0;
    *(int *)(DAT_146857fe0 + 0x130) = iVar12;
    if ((iVar12 == 0) && (*piVar2 == 0)) {
      *(undefined4 *)(lVar9 + 0x134) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar11,local_b0 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop(*ppvVar11,_Src,(longlong)iVar12 * 2);
    }
    param_2 = 0;
  }
  uVar8 = 1;
  if ((int)param_1[0x1b] < 2) {
    local_d8 = (longlong *)0x0;
    local_d0 = 0;
    plVar10 = (longlong *)FMemory::Realloc(0,0x20);
    local_48 = plVar10;
    if (plVar10 == (longlong *)0x0) {
      if (((local_d0 != 0) && (local_d8 != (longlong *)0x0)) &&
         ((**(code **)(*local_d8 + 0x28))(local_d8,0), local_d8 != (longlong *)0x0)) {
        local_d8 = (longlong *)FMemory::Realloc(local_d8,0,0);
      }
    }
    else {
      plVar10[1] = (longlong)param_1;
      *plVar10 = (longlong)&PTR_GetPoolName_14404c2d8;
      lVar9 = FDelegateHandle::GenerateNewID();
      plVar10[3] = lVar9;
      *plVar10 = (longlong)&PTR_GetPoolName_14404c320;
      FUN_1406b01c0(plVar10,&local_d8);
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x28))(plVar10,0);
      local_48 = (longlong *)FMemory::Realloc(plVar10,0,0);
      if (local_48 != (longlong *)0x0) {
        FMemory::Free(local_48);
      }
    }
    local_a8 = 0;
    local_a0 = 0;
    if ((local_d0 != 0) && (local_d8 != (longlong *)0x0)) {
      (**(code **)(*local_d8 + 0x30))(local_d8,&local_a8);
    }
    FUN_1406baaf0(&local_a8);
    if (local_d0 == 0) {
LAB_1406b6dfd:
      if (local_d8 != (longlong *)0x0) {
        FMemory::Free(local_d8);
      }
    }
    else if (local_d8 != (longlong *)0x0) {
      (**(code **)(*local_d8 + 0x28))(local_d8,0);
      if (local_d8 != (longlong *)0x0) {
        local_d8 = (longlong *)FMemory::Realloc(local_d8,0,0);
      }
      local_d0 = 0;
      goto LAB_1406b6dfd;
    }
    FUN_1406bc820(param_1);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free();
  }
LAB_1406b6e31:
  if (lVar13 != 0) {
    TBaseMulticastDelegate<void>::Remove(lVar13 + 0x180,param_1[0x15]);
    param_1[0x15] = 0;
  }
  FUN_1406b1590(param_1 + 3,uVar8,param_2);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar3 + 1;
    lVar13 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_90 + 1;
    lVar13 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar2 = (int *)((longlong)plStack_90 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
  return;
}



// FUNCTION 1406b6f30 FUN_1406b6f30 body=39 status=ok
// SIG undefined FUN_1406b6f30(void)

void FUN_1406b6f30(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 local_18 [16];
  
  puVar4 = (undefined4 *)FGuid::NewGuid(local_18);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *(undefined4 *)(param_1 + 0xc) = *puVar4;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  FUN_1406bd0e0(param_1);
  return;
}



// FUNCTION 1406b6f60 FUN_1406b6f60 body=82 status=ok
// SIG undefined FUN_1406b6f60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1406b6f60(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (((lVar1 != 0) && (*(int *)(lVar1 + 0x70) != 0)) &&
     (*(longlong **)(lVar1 + 0x68) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x68) + 0x18))();
    if (cVar2 != '\0') {
      if (*(int *)(lVar1 + 0x70) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001406b6f9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(lVar1 + 0x68) + 0x40))();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0001406b6fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_00000000 + 0x40))();
      return;
    }
  }
  return;
}



// FUNCTION 1406b6fe0 FUN_1406b6fe0 body=704 status=ok
// SIG undefined FUN_1406b6fe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406b6fe0(longlong param_1,undefined8 param_2)

{
  void *pvVar1;
  longlong lVar2;
  void *_Memory;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  longlong local_e0;
  undefined8 local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined8 *local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  plVar5 = (longlong *)0x0;
  local_68 = 0;
  uStack_60 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = (longlong *)0x0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0x400;
  local_38 = 0;
  local_30 = 0;
  plVar4 = (longlong *)operator_new(0x28);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = 0;
    plVar4[1] = 0x10000;
    plVar4[2] = 0;
    plVar4[3] = 0;
    plVar4[4] = 0;
    plVar5 = plVar4;
  }
  local_c8 = &local_88;
  local_c0 = plVar5;
  local_78 = plVar5;
  local_70 = plVar5;
  FUN_142ab5a90(&local_c8,&local_88,param_2);
  local_a8 = &local_98;
  local_e8[0] = 0;
  local_a0 = local_78;
  local_cc = 0;
  local_98 = 0;
  local_90 = 0x3000000000000;
  local_d0 = 0;
  cVar3 = FUN_142ab68b0(&local_c8,"connected",local_e8);
  if (cVar3 != '\0') {
    *(undefined1 *)(param_1 + 0x40) = local_e8[0];
  }
  cVar3 = FUN_142ab6930(&local_c8,"flushed",&local_cc);
  if (cVar3 != '\0') {
    local_e0 = 0;
    local_d8 = 0x3c;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e0,0);
    FGenericPlatformString::Memcpy
              (local_e0,L"Flushed message received - properly closing this connection",0x78);
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x10))
              (*(longlong **)(param_1 + 0x70),1000,&local_e0);
    if (local_e0 != 0) {
      FMemory::Free();
    }
  }
  cVar3 = FUN_142ab6930(&local_c8,"reconnect",&local_d0);
  if (cVar3 != '\0') {
    *(undefined1 *)(param_1 + 0x40) = 0;
    FUN_1406be2d0(param_1);
    if (local_d0 < 1) {
      FUN_1406b5b10(param_1);
    }
    else {
      *(float *)(param_1 + 0x44) = (float)local_d0 * 0.001;
    }
  }
  cVar3 = FUN_142ab6bc0(&local_c8,"error",&local_a8);
  if (cVar3 != '\0') {
    local_e0 = 0;
    local_d8 = 0;
    local_b8 = 0;
    local_b0 = 0;
    cVar3 = FUN_142ab6cb0(&local_a8,&DAT_144049134,&local_e0);
    if ((cVar3 != '\0') && (cVar3 = FUN_142ab6cb0(&local_a8,"message",&local_b8), cVar3 != '\0')) {
      FUN_1406b04c0(param_1,&local_e0);
    }
    if (local_b8 != 0) {
      FMemory::Free();
    }
    if (local_e0 != 0) {
      FMemory::Free();
    }
  }
  plVar5 = local_70;
  if (local_70 != (longlong *)0x0) {
    _Memory = (void *)*local_70;
    while ((_Memory != (void *)0x0 && (_Memory != (void *)plVar5[2]))) {
      pvVar1 = *(void **)((longlong)_Memory + 0x10);
      free(_Memory);
      *plVar5 = (longlong)pvVar1;
      _Memory = pvVar1;
    }
    lVar2 = *plVar5;
    if ((lVar2 != 0) && (lVar2 == plVar5[2])) {
      *(undefined8 *)(lVar2 + 8) = 0;
    }
    FMemory::operator_delete(plVar5[4],1);
    FMemory::operator_delete(plVar5,0x28);
  }
  free(local_58);
  FMemory::operator_delete(uStack_60,1);
  return;
}



// FUNCTION 1406b72a0 FUN_1406b72a0 body=1473 status=ok
// SIG undefined FUN_1406b72a0(void)

void FUN_1406b72a0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  int local_a8;
  int local_a4;
  longlong local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  
  local_68 = *param_3;
  plVar10 = (longlong *)0x0;
  local_60 = param_3[1];
  local_d8 = 0;
  local_d0 = 0;
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
  }
  local_58 = *param_2;
  local_50 = param_2[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  cVar2 = FUN_1406b8870(param_1,&local_d8,&local_58,&local_68,param_4);
  if (cVar2 == '\0') {
    plVar10 = (longlong *)param_2[1];
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar10 + 1;
      lVar4 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar8 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    plVar10 = (longlong *)param_3[1];
    if (plVar10 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar11 = plVar10 + 1;
    lVar4 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar4 != 1) {
      return;
    }
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar8 = (int *)((longlong)plVar10 + 0xc);
    iVar3 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return;
    }
    (**(code **)(*plVar10 + 8))(plVar10,1);
    return;
  }
  plVar11 = (longlong *)(param_1 + 200);
  local_70 = plVar11;
  if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
    iVar3 = FCrc::MemCrc_DEPRECATED(&local_d8,0x10);
    lVar4 = *(longlong *)(param_1 + 0x108);
    if (*(longlong *)(param_1 + 0x108) == 0) {
      lVar4 = param_1 + 0x100;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x110) - 1U & (longlong)iVar3) * 4);
    if (iVar3 != -1) {
      do {
        piVar8 = (int *)((longlong)iVar3 * 0x80 + *plVar11);
        if (((piVar8[3] == local_d0._4_4_ && piVar8[2] == (int)local_d0) &&
            piVar8[1] == local_d8._4_4_) && *piVar8 == (int)local_d8) {
          if (iVar3 != -1) {
            if (*(int *)(param_1 + 0xd0) == *(int *)(param_1 + 0xfc)) goto LAB_1406b752b;
            iVar3 = FCrc::MemCrc_DEPRECATED(&local_d8,0x10);
            lVar4 = *(longlong *)(param_1 + 0x108);
            if (*(longlong *)(param_1 + 0x108) == 0) {
              lVar4 = param_1 + 0x100;
            }
            iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x110) - 1U & (longlong)iVar3) *
                                     4);
            if (iVar3 == -1) goto LAB_1406b752b;
            goto LAB_1406b74f0;
          }
          break;
        }
        iVar3 = piVar8[0x1e];
      } while (iVar3 != -1);
    }
  }
  goto LAB_1406b7454;
  while (iVar3 = (int)plVar9[0xf], iVar3 != -1) {
LAB_1406b74f0:
    plVar9 = (longlong *)((longlong)iVar3 * 0x80 + *plVar11);
    if (((*(int *)((longlong)plVar9 + 0xc) == local_d0._4_4_ && (int)plVar9[1] == (int)local_d0) &&
        *(int *)((longlong)plVar9 + 4) == local_d8._4_4_) && (int)*plVar9 == (int)local_d8) {
      if (iVar3 != -1) goto LAB_1406b752e;
      break;
    }
  }
LAB_1406b752b:
  plVar9 = plVar10;
LAB_1406b752e:
  local_48 = *param_3;
  local_40 = param_3[1];
  local_a0 = 0;
  local_98 = 0;
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  local_90 = plVar9 + 2;
  cVar2 = FUN_1406b3ab0(param_1,&local_48,&local_a0);
  plVar1 = local_90;
  if (cVar2 != '\0') {
    iVar3 = 0;
    local_b0 = 0;
    local_c8 = (longlong *)0x0;
    local_c0 = 0;
    local_b8 = (longlong *)0x0;
    local_80 = (longlong)(int)local_98 * 0xa0 + local_a0;
    plVar9 = plVar9 + 2;
    iVar6 = iVar3;
    if (local_a0 != local_80) {
      local_78 = (longlong *)(param_1 + 0x78);
      lVar4 = local_a0 + 0x10;
      do {
        plVar11 = local_78;
        piVar8 = (int *)TSet<TTuple<FString,FOnlineAchievementDesc>,TDefaultMapHashableKeyFuncs<FString,FOnlineAchievementDesc,0>,FDefaultSetAllocator>
                        ::FindId(local_78,local_88,lVar4);
        if (*piVar8 == -1) {
          iVar7 = iVar3 + 1;
          local_b0 = CONCAT44(local_b0._4_4_,iVar7);
          if (local_b0._4_4_ < iVar7) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_b8,iVar3);
            plVar10 = local_b8;
            iVar7 = (int)local_b0;
          }
          FString::FString(plVar10 + (longlong)iVar3 * 2,lVar4);
          iVar3 = iVar7;
        }
        else {
          TSet<TTuple<FString,FOnlineAchievementDesc>,TDefaultMapHashableKeyFuncs<FString,FOnlineAchievementDesc,0>,FDefaultSetAllocator>
          ::FindId(plVar11,&local_a8,lVar4);
          if (local_a8 == -1) {
            lVar5 = 0;
          }
          else {
            lVar5 = (longlong)local_a8 * 0x70 + *plVar11;
          }
          FString::operator=(lVar4 + 0x10,lVar5 + 0x30);
        }
        piVar8 = (int *)TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
                        ::FindId(param_1 + 0x28,local_84,lVar4 + 0x30);
        if (*piVar8 == -1) {
          iVar7 = iVar6 + 1;
          local_c0 = CONCAT44(local_c0._4_4_,iVar7);
          if (local_c0._4_4_ < iVar7) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_c8,iVar6);
            iVar7 = (int)local_c0;
          }
          FString::FString(local_c8 + (longlong)iVar6 * 2,lVar4 + 0x30);
          iVar6 = iVar7;
        }
        else {
          TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
          ::FindId(param_1 + 0x28,&local_a4,lVar4 + 0x30);
          if (local_a4 == -1) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(param_1 + 0x28) + (longlong)local_a4 * 0x28;
          }
          FString::operator=(lVar4 + 0x40,lVar5 + 0x10);
        }
        iVar7 = (int)plVar1[3];
        *(int *)(plVar1 + 3) = iVar7 + 1;
        if (*(int *)((longlong)plVar1 + 0x1c) < iVar7 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<160,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar1 + 2,iVar7);
        }
        FUN_1406ad3a0((longlong)iVar7 * 0xa0 + plVar1[2],lVar4 + -0x10);
        lVar5 = lVar4 + 0x90;
        plVar9 = local_90;
        plVar11 = local_70;
        lVar4 = lVar4 + 0xa0;
      } while (lVar5 != local_80);
    }
    plVar1 = local_c8;
    *(undefined1 *)(plVar9 + 6) = 1;
    *(bool *)((longlong)plVar9 + 0x32) = iVar3 == 0;
    *(bool *)((longlong)plVar9 + 0x31) = iVar6 == 0;
    if (0 < iVar3) {
      FUN_1406bb670(param_1,&local_d8,&local_b8);
    }
    if (0 < iVar6) {
      FUN_1406b9580(param_1,&local_d8,&local_c8);
    }
    cVar2 = FUN_1406b16b0(plVar9);
    plVar9 = plVar1;
    if (cVar2 != '\0') {
      FUN_1406b9180(plVar11,&local_d8);
    }
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar9 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 2;
    }
    plVar11 = plVar10;
    if (plVar1 != (longlong *)0x0) {
      FMemory::Free(plVar1);
    }
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar11 != 0) {
        FMemory::Free();
      }
      plVar11 = plVar11 + 2;
    }
    if (plVar10 != (longlong *)0x0) {
      FMemory::Free(plVar10);
    }
    FUN_1406ad5c0(&local_a0);
    plVar10 = (longlong *)param_2[1];
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar10 + 1;
      lVar4 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar8 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    plVar10 = (longlong *)param_3[1];
    if (plVar10 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar11 = plVar10 + 1;
    lVar4 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar4 != 1) {
      return;
    }
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar8 = (int *)((longlong)plVar10 + 0xc);
    iVar3 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar3 != 1) {
      return;
    }
    (**(code **)(*plVar10 + 8))(plVar10,1);
    return;
  }
  FUN_1406ad5c0(&local_a0);
LAB_1406b7454:
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
  return;
}



// FUNCTION 1406b7870 FUN_1406b7870 body=1366 status=ok
// SIG undefined FUN_1406b7870(void)

void FUN_1406b7870(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4)

{
  longlong *plVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int *piVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  ulonglong local_b0;
  int local_a8;
  int local_a4;
  longlong local_a0;
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  int *local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  
  local_80 = *param_3;
  local_78 = param_3[1];
  local_c8 = 0;
  local_c0 = 0;
  if (local_78 != 0) {
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
    UNLOCK();
  }
  local_70 = *param_2;
  local_68 = param_2[1];
  if (local_68 != 0) {
    LOCK();
    *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
    UNLOCK();
  }
  cVar3 = FUN_1406b8870(param_1,&local_c8,&local_70,&local_80,param_4);
  if (cVar3 == '\0') {
    plVar8 = (longlong *)param_2[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar10 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    plVar8 = (longlong *)param_3[1];
    if (plVar8 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar1 = plVar8 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 != 1) {
      return;
    }
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar10 = (int *)((longlong)plVar8 + 0xc);
    iVar4 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar4 != 1) {
      return;
    }
    (**(code **)(*plVar8 + 8))(plVar8,1);
    return;
  }
  plVar8 = (longlong *)(param_1 + 200);
  local_88 = plVar8;
  if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
    iVar4 = FCrc::MemCrc_DEPRECATED(&local_c8,0x10);
    lVar7 = *(longlong *)(param_1 + 0x108);
    if (*(longlong *)(param_1 + 0x108) == 0) {
      lVar7 = param_1 + 0x100;
    }
    iVar4 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x110) - 1U & (longlong)iVar4) * 4);
    if (iVar4 != -1) {
      do {
        piVar10 = (int *)((longlong)iVar4 * 0x80 + *plVar8);
        if (((piVar10[3] == local_c0._4_4_ && piVar10[2] == (int)local_c0) &&
            piVar10[1] == local_c8._4_4_) && (int)local_c8 == *piVar10) {
          if (iVar4 != -1) {
            if (*(int *)(param_1 + 0xd0) == *(int *)(param_1 + 0xfc)) goto LAB_1406b7aeb;
            iVar4 = FCrc::MemCrc_DEPRECATED(&local_c8,0x10);
            lVar7 = *(longlong *)(param_1 + 0x108);
            if (*(longlong *)(param_1 + 0x108) == 0) {
              lVar7 = param_1 + 0x100;
            }
            iVar4 = *(int *)(lVar7 + ((longlong)*(int *)(param_1 + 0x110) - 1U & (longlong)iVar4) *
                                     4);
            if (iVar4 == -1) goto LAB_1406b7aeb;
            goto LAB_1406b7ab0;
          }
          break;
        }
        iVar4 = piVar10[0x1e];
      } while (iVar4 != -1);
    }
  }
  goto LAB_1406b7a14;
  while (iVar4 = piVar10[0x1e], iVar4 != -1) {
LAB_1406b7ab0:
    piVar10 = (int *)((longlong)iVar4 * 0x80 + *plVar8);
    if (((piVar10[3] == local_c0._4_4_ && piVar10[2] == (int)local_c0) &&
        piVar10[1] == local_c8._4_4_) && *piVar10 == (int)local_c8) {
      if (iVar4 != -1) goto LAB_1406b7aee;
      break;
    }
  }
LAB_1406b7aeb:
  piVar10 = (int *)0x0;
LAB_1406b7aee:
  local_90 = piVar10 + 4;
  local_b8 = 0;
  local_b0 = 0;
  local_60 = *param_3;
  local_58 = param_3[1];
  if (local_58 != 0) {
    LOCK();
    *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
    UNLOCK();
  }
  cVar3 = FUN_1406b4550(param_1,&local_60,&local_b8);
  if (cVar3 != '\0') {
    uVar12 = (ulonglong)(int)local_b0;
    lVar9 = uVar12 * 0x58 + local_b8;
    for (lVar7 = local_b8; lVar7 != lVar9; lVar7 = lVar7 + 0x58) {
      local_50 = lVar7;
      local_48 = lVar7;
      FUN_1406ac8c0(param_1 + 0x78,local_98,&local_50,0);
    }
    lVar7 = *(longlong *)(piVar10 + 8);
    lVar9 = (longlong)piVar10[10] * 0xa0 + lVar7;
    local_a0 = lVar9;
    if (lVar7 != lVar9) {
      plVar8 = (longlong *)(param_1 + 0x78);
      piVar10 = (int *)(lVar7 + 0x2c);
      do {
        piVar5 = (int *)TSet<TTuple<FString,FOnlineAchievementDesc>,TDefaultMapHashableKeyFuncs<FString,FOnlineAchievementDesc,0>,FDefaultSetAllocator>
                        ::FindId(plVar8,local_94,piVar10 + -7);
        if (*piVar5 != -1) {
          TSet<TTuple<FString,FOnlineAchievementDesc>,TDefaultMapHashableKeyFuncs<FString,FOnlineAchievementDesc,0>,FDefaultSetAllocator>
          ::FindId(plVar8,&local_a8,piVar10 + -7);
          if (local_a8 == -1) {
            lVar6 = 0;
          }
          else {
            lVar6 = (longlong)local_a8 * 0x70 + *plVar8;
          }
          piVar5 = piVar10 + -3;
          if (piVar5 != (int *)(lVar6 + 0x30)) {
            iVar4 = *(int *)(lVar6 + 0x38);
            pvVar2 = *(void **)(lVar6 + 0x30);
            piVar10[-1] = iVar4;
            if ((iVar4 == 0) && (*piVar10 == 0)) {
              *piVar10 = 0;
              lVar9 = local_a0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(piVar5,iVar4);
              _guard_xfg_dispatch_icall_nop(*(void **)piVar5,pvVar2,(longlong)iVar4 * 2);
              lVar9 = local_a0;
            }
          }
          TSet<TTuple<FString,FOnlineAchievementDesc>,TDefaultMapHashableKeyFuncs<FString,FOnlineAchievementDesc,0>,FDefaultSetAllocator>
          ::FindId(plVar8,&local_a4,piVar10 + -7);
          if (local_a4 == -1) {
            lVar6 = 0;
          }
          else {
            lVar6 = (longlong)local_a4 * 0x70 + *plVar8;
          }
          piVar5 = piVar10 + 1;
          if (piVar5 != (int *)(lVar6 + 0x20)) {
            iVar4 = *(int *)(lVar6 + 0x28);
            pvVar2 = *(void **)(lVar6 + 0x20);
            piVar10[3] = iVar4;
            if ((iVar4 == 0) && (piVar10[4] == 0)) {
              piVar10[4] = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(piVar5,iVar4);
              _guard_xfg_dispatch_icall_nop(*(void **)piVar5,pvVar2,(longlong)iVar4 * 2);
            }
          }
        }
        lVar7 = lVar7 + 0xa0;
        piVar10 = piVar10 + 0x28;
      } while (lVar7 != lVar9);
      uVar12 = local_b0 & 0xffffffff;
    }
    *(undefined1 *)((longlong)local_90 + 0x32) = 1;
    cVar3 = FUN_1406b16b0();
    if (cVar3 != '\0') {
      FUN_1406b9180(local_88,&local_c8);
    }
    if ((int)uVar12 != 0) {
      plVar8 = (longlong *)(local_b8 + 0x30);
      do {
        if (plVar8[2] != 0) {
          FMemory::Free();
        }
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        if (plVar8[-2] != 0) {
          FMemory::Free();
        }
        if (plVar8[-4] != 0) {
          FMemory::Free();
        }
        if (plVar8[-6] != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 0xb;
        uVar11 = (int)uVar12 - 1;
        uVar12 = (ulonglong)uVar11;
      } while (uVar11 != 0);
    }
    if (local_b8 != 0) {
      FMemory::Free(local_b8);
    }
    plVar8 = (longlong *)param_2[1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar10 = (int *)((longlong)plVar8 + 0xc);
        iVar4 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    plVar8 = (longlong *)param_3[1];
    if (plVar8 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar1 = plVar8 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 != 1) {
      return;
    }
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar10 = (int *)((longlong)plVar8 + 0xc);
    iVar4 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar4 != 1) {
      return;
    }
    (**(code **)(*plVar8 + 8))(plVar8,1);
    return;
  }
  FUN_1406b9180(plVar8,&local_c8);
  TArray<FShapeDataPaintSpline,TSizedDefaultAllocator<32>_>::
  ~TArray<FShapeDataPaintSpline,TSizedDefaultAllocator<32>_>(&local_b8);
LAB_1406b7a14:
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
  return;
}



// FUNCTION 1406b7dd0 FUN_1406b7dd0 body=2719 status=ok
// SIG undefined FUN_1406b7dd0(void)

void FUN_1406b7dd0(longlong param_1,undefined8 *param_2)

{
  short *psVar1;
  undefined8 uVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  wchar_t *pwVar8;
  uint uVar9;
  wchar_t *pwVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  longlong lVar14;
  longlong *plVar15;
  wchar_t *pwVar16;
  uint uVar17;
  longlong lVar18;
  undefined2 *puVar19;
  undefined2 *puVar20;
  undefined2 *puVar21;
  int iVar22;
  wchar_t *pwVar23;
  bool bVar24;
  wchar_t *local_res18;
  wchar_t *local_res20;
  wchar_t *local_c8;
  ulonglong local_c0;
  wchar_t *local_b8;
  int local_b0;
  undefined4 local_ac;
  longlong local_a8;
  ulonglong local_a0;
  wchar_t local_98 [4];
  void *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [8];
  undefined8 local_48;
  
  pwVar23 = L"";
  piVar13 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar13 < DAT_146858100) && (_Init_thread_header(&DAT_146858100), DAT_146858100 == -1)) {
    if (*(int *)(param_1 + 0x28) == 0) {
      puVar19 = &DAT_143f3eda8;
      puVar21 = &DAT_143f3eda8;
      puVar20 = &DAT_143f3eda8;
    }
    else {
      puVar19 = *(undefined2 **)(param_1 + 0x20);
      puVar21 = *(undefined2 **)(param_1 + 0x20);
      puVar20 = *(undefined2 **)(param_1 + 0x20);
    }
    FString::PrintfImpl(&DAT_1468580f0,L"%s!%s@%s.tmi.twitch.tv JOIN #",puVar20,puVar21,puVar19);
    atexit((_func_5014 *)&LAB_143e40e50);
    _Init_thread_footer(&DAT_146858100);
  }
  if ((*piVar13 < DAT_146858118) && (_Init_thread_header(&DAT_146858118), DAT_146858118 == -1)) {
    if (*(int *)(param_1 + 0x28) == 0) {
      puVar19 = &DAT_143f3eda8;
      puVar21 = &DAT_143f3eda8;
      puVar20 = &DAT_143f3eda8;
    }
    else {
      puVar19 = *(undefined2 **)(param_1 + 0x20);
      puVar21 = *(undefined2 **)(param_1 + 0x20);
      puVar20 = *(undefined2 **)(param_1 + 0x20);
    }
    FString::PrintfImpl(&DAT_146858108,L"%s!%s@%s.tmi.twitch.tv PART #",puVar20,puVar21,puVar19);
    atexit((_func_5014 *)&LAB_143e40e70);
    _Init_thread_footer(&DAT_146858118);
  }
  if ((*piVar13 < DAT_14685811c) && (_Init_thread_header(&DAT_14685811c), DAT_14685811c == -1)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14622cf50,0);
    FGenericPlatformString::Memcpy(DAT_14622cf50,L".tmi.twitch.tv PRIVMSG #",0x32);
    atexit((_func_5014 *)&LAB_143e41370);
    _Init_thread_footer(&DAT_14685811c);
  }
  lVar18 = -1;
  puVar19 = &DAT_143f3eda8;
  if (DAT_14622cf58 != 0) {
    puVar19 = DAT_14622cf50;
  }
  iVar3 = FUN_141592950(param_2,puVar19,1,0,0xffffffff);
  if (iVar3 == -1) {
    puVar19 = &DAT_143f3eda8;
    if (DAT_14622ccd8 != 0) {
      puVar19 = DAT_14622ccd0;
    }
    iVar3 = FUN_141592950(param_2,puVar19,1,0,0xffffffff);
    _Src = DAT_14622cce0;
    if (iVar3 != -1) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      local_c8 = (wchar_t *)0x0;
      iVar3 = (int)DAT_14622cce8;
      local_c0 = CONCAT44(local_c0._4_4_,iVar3);
      if (iVar3 == 0) {
        local_c0 = DAT_14622cce8 & 0xffffffff;
        FUN_1406bda00(uVar2,&local_c8);
        return;
      }
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,DAT_14622cce8 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_c8,_Src,(longlong)iVar3 * 2);
      FUN_1406bda00(uVar2,&local_c8);
      return;
    }
    puVar19 = &DAT_143f3eda8;
    if (DAT_1468580f8 != 0) {
      puVar19 = DAT_1468580f0;
    }
    iVar3 = FUN_141592950(param_2,puVar19,1,0,0xffffffff);
    if (iVar3 == -1) {
      puVar19 = &DAT_143f3eda8;
      if (DAT_146858110 != 0) {
        puVar19 = DAT_146858108;
      }
      iVar3 = FUN_141592950(param_2,puVar19,1,0,0xffffffff);
      if (iVar3 == -1) {
        puVar19 = &DAT_143f3eda8;
        if (DAT_14622ccf8 != 0) {
          puVar19 = DAT_14622ccf0;
        }
        iVar3 = FUN_141592950(param_2,puVar19,1,0,0xffffffff);
        if (iVar3 == -1) {
          return;
        }
        puVar19 = &DAT_143f3eda8;
        if (DAT_14622ccf8 != 0) {
          puVar19 = DAT_14622ccf0;
        }
        iVar5 = FUN_141592950(param_2,puVar19,1,0,0xffffffff);
        iVar3 = 0;
        iVar4 = iVar3;
        if (DAT_14622ccf8 != 0) {
          iVar4 = DAT_14622ccf8 + -1;
        }
        iVar22 = iVar3;
        if (*(int *)(param_2 + 1) != 0) {
          pwVar23 = (wchar_t *)*param_2;
          iVar22 = *(int *)(param_2 + 1) + -1;
        }
        iVar4 = iVar22 - (iVar5 + iVar4);
        if ((-1 < iVar4) && (iVar3 = iVar22, iVar4 < iVar22)) {
          iVar3 = iVar4;
        }
        local_c8 = (wchar_t *)0x0;
        pwVar23 = pwVar23 + ((longlong)iVar22 - (longlong)iVar3);
        if (pwVar23 == (wchar_t *)0x0) {
          return;
        }
        if (*pwVar23 == L'\0') {
          return;
        }
        do {
          lVar18 = lVar18 + 1;
        } while (pwVar23[lVar18] != L'\0');
        uVar11 = (int)lVar18 + 1;
        local_c0 = (ulonglong)uVar11;
        if (0 < (int)uVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
        }
        pwVar16 = local_c8;
        FGenericPlatformString::Memcpy(local_c8,pwVar23,(longlong)(int)uVar11 * 2);
      }
      else {
        puVar19 = &DAT_143f3eda8;
        if (DAT_146858110 != 0) {
          puVar19 = DAT_146858108;
        }
        iVar3 = FUN_141592950(param_2,puVar19,1,0,0xffffffff);
        pwVar16 = (wchar_t *)0x0;
        uVar17 = 0;
        uVar11 = uVar17;
        if (DAT_146858110 != 0) {
          uVar11 = DAT_146858110 - 1;
        }
        uVar7 = uVar17;
        if (*(int *)(param_2 + 1) != 0) {
          pwVar23 = (wchar_t *)*param_2;
          uVar7 = *(int *)(param_2 + 1) - 1;
        }
        uVar9 = uVar7 - (iVar3 + uVar11);
        uVar11 = 0;
        if ((-1 < (int)uVar9) && (uVar11 = uVar7, (int)uVar9 < (int)uVar7)) {
          uVar11 = uVar9;
        }
        local_c8 = (wchar_t *)0x0;
        local_c0 = (ulonglong)(uint)local_c0;
        pwVar23 = pwVar23 + ((longlong)(int)uVar7 - (longlong)(int)uVar11);
        uVar11 = 0;
        if ((pwVar23 != (wchar_t *)0x0) && (uVar11 = uVar17, *pwVar23 != L'\0')) {
          do {
            lVar18 = lVar18 + 1;
          } while (pwVar23[lVar18] != L'\0');
          uVar17 = (int)lVar18 + 1;
          local_c0 = (ulonglong)uVar17;
          uVar11 = uVar17;
          if (0 < (int)uVar17) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
            uVar11 = (uint)local_c0;
          }
          pwVar16 = local_c8;
          FGenericPlatformString::Memcpy(local_c8,pwVar23,(longlong)(int)uVar17 * 2);
        }
        lVar18 = *(longlong *)(param_1 + 8);
        local_90 = (void *)0x0;
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        local_70 = (longlong *)0x0;
        local_68 = 0;
        local_60 = 0;
        local_58 = 0;
        FWeakObjectPtr::operator=(local_50,0);
        local_48 = 0;
        local_88 = CONCAT44(local_88._4_4_,uVar11);
        if ((uVar11 == 0) && (local_88._4_4_ == 0)) {
          local_88 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_90,uVar11);
          _guard_xfg_dispatch_icall_nop(local_90,pwVar16,(longlong)(int)uVar11 * 2);
        }
        local_res18 = local_98;
        FUN_1406acb60(lVar18 + 0x68,&local_res18);
        TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>::
        ~TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>(&local_60);
        plVar15 = local_70;
        for (iVar3 = (int)local_68; iVar3 != 0; iVar3 = iVar3 + -1) {
          if (*plVar15 != 0) {
            FMemory::Free();
          }
          plVar15 = plVar15 + 2;
        }
        if (local_70 != (longlong *)0x0) {
          FMemory::Free(local_70);
        }
        if (local_80 != 0) {
          FMemory::Free();
        }
        if (local_90 != (void *)0x0) {
          FMemory::Free();
        }
      }
    }
    else {
      puVar19 = &DAT_143f3eda8;
      if (DAT_1468580f8 != 0) {
        puVar19 = DAT_1468580f0;
      }
      iVar3 = FUN_141592950(param_2,puVar19,1,0,0xffffffff);
      pwVar23 = (wchar_t *)0x0;
      uVar17 = 0;
      uVar11 = uVar17;
      if (DAT_1468580f8 != 0) {
        uVar11 = DAT_1468580f8 - 1;
      }
      if (*(int *)(param_2 + 1) == 0) {
        puVar19 = &DAT_143f3eda8;
        uVar7 = uVar17;
      }
      else {
        puVar19 = (undefined2 *)*param_2;
        uVar7 = *(int *)(param_2 + 1) - 1;
      }
      uVar9 = uVar7 - (iVar3 + uVar11);
      uVar11 = 0;
      if ((-1 < (int)uVar9) && (uVar11 = uVar7, (int)uVar9 < (int)uVar7)) {
        uVar11 = uVar9;
      }
      local_c8 = (wchar_t *)0x0;
      local_c0 = (ulonglong)(uint)local_c0;
      psVar1 = puVar19 + ((longlong)(int)uVar7 - (longlong)(int)uVar11);
      pwVar16 = pwVar23;
      uVar11 = 0;
      if ((psVar1 != (short *)0x0) && (uVar11 = uVar17, *psVar1 != 0)) {
        do {
          lVar18 = lVar18 + 1;
        } while (psVar1[lVar18] != 0);
        uVar17 = (int)lVar18 + 1;
        local_c0 = (ulonglong)uVar17;
        uVar11 = uVar17;
        if (0 < (int)uVar17) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
          uVar11 = (uint)local_c0;
        }
        pwVar16 = local_c8;
        FGenericPlatformString::Memcpy(local_c8,psVar1,(longlong)(int)uVar17 * 2);
      }
      lVar18 = *(longlong *)(param_1 + 8);
      if (0 < *(int *)(lVar18 + 0x60)) {
        local_res18 = (wchar_t *)(lVar18 + 0x58);
        pwVar8 = pwVar23;
        do {
          lVar14 = *(longlong *)(lVar18 + 0x58) + (longlong)pwVar23;
          pwVar10 = L"";
          if (uVar11 != 0) {
            pwVar10 = pwVar16;
          }
          if (*(int *)(lVar14 + 0x10) == 0) {
            puVar19 = &DAT_143f3eda8;
          }
          else {
            puVar19 = *(undefined2 **)(lVar14 + 8);
          }
          iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar19,pwVar10);
          if (iVar3 == 0) {
            plVar15 = (longlong *)(lVar18 + 0x68);
            iVar3 = FUN_1406b25e0(plVar15,lVar14);
            if (iVar3 == -1) {
              iVar3 = *(int *)(lVar18 + 0x70);
              *(int *)(lVar18 + 0x70) = iVar3 + 1;
              if (*(int *)(lVar18 + 0x74) < iVar3 + 1) {
                TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(plVar15,iVar3);
              }
              FUN_1406aced0((longlong)iVar3 * 0x58 + *plVar15,lVar14);
            }
            FUN_1406b9330(local_res18,pwVar8,1,1);
            break;
          }
          uVar17 = (int)pwVar8 + 1;
          pwVar8 = (wchar_t *)(ulonglong)uVar17;
          pwVar23 = pwVar23 + 0x2c;
        } while ((int)uVar17 < *(int *)(lVar18 + 0x60));
      }
    }
  }
  else {
    pwVar16 = (wchar_t *)*param_2;
    iVar3 = *(int *)(param_2 + 1);
    pwVar8 = pwVar16;
    if (pwVar16 == pwVar16 + iVar3) {
      return;
    }
    while (*pwVar8 != L'!') {
      pwVar8 = pwVar8 + 1;
      if (pwVar8 == pwVar16 + iVar3) {
        return;
      }
    }
    iVar4 = (int)((longlong)pwVar8 - (longlong)pwVar16 >> 1);
    if (iVar4 == -1) {
      return;
    }
    local_res18 = L"";
    if (iVar3 != 0) {
      local_res18 = pwVar16;
    }
    pwVar8 = (wchar_t *)0x0;
    iVar22 = 0;
    iVar5 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar5 = iVar22;
    }
    iVar3 = iVar22;
    if ((-1 < iVar4) && (iVar3 = iVar5, iVar4 < iVar5)) {
      iVar3 = iVar4;
    }
    local_c8 = (wchar_t *)0x0;
    uVar11 = iVar3 + 1;
    if (iVar3 == 0) {
      uVar11 = 0;
    }
    local_c0 = (ulonglong)uVar11;
    bVar24 = uVar11 == 0;
    pwVar16 = pwVar8;
    if (0 < (int)uVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
      pwVar16 = local_c8;
      uVar11 = (uint)local_c0;
      bVar24 = (uint)local_c0 == 0;
      if (0 < (int)(uint)local_c0) {
        wcsncpy(local_c8,local_res18,(longlong)iVar3);
        bVar24 = uVar11 == 0;
        pwVar16[iVar3] = L'\0';
      }
    }
    if (bVar24) {
      pwVar10 = L"";
      iVar3 = iVar22;
    }
    else {
      pwVar10 = pwVar16;
      iVar3 = uVar11 - 1;
    }
    local_c0 = 0;
    iVar5 = 0;
    iVar4 = iVar5;
    if (-1 < iVar3 + -1) {
      iVar4 = iVar3 + -1;
    }
    local_c8 = (wchar_t *)0x0;
    pwVar10 = pwVar10 + ((longlong)iVar3 - (longlong)iVar4);
    if ((pwVar10 != (wchar_t *)0x0) && (*pwVar10 != L'\0')) {
      lVar14 = -1;
      do {
        lVar14 = lVar14 + 1;
      } while (pwVar10[lVar14] != L'\0');
      uVar11 = (int)lVar14 + 1;
      local_c0 = (ulonglong)uVar11;
      if (0 < (int)uVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
      }
      FGenericPlatformString::Memcpy(local_c8,pwVar10,(longlong)(int)uVar11 * 2);
    }
    if (pwVar16 != (wchar_t *)0x0) {
      FMemory::Free(pwVar16);
    }
    puVar19 = &DAT_143f3eda8;
    if (DAT_14622cf58 != 0) {
      puVar19 = DAT_14622cf50;
    }
    iVar4 = FUN_141592950(param_2,puVar19,1,0,0xffffffff);
    iVar3 = iVar5;
    if (DAT_14622cf58 != 0) {
      iVar3 = DAT_14622cf58 + -1;
    }
    if (*(int *)(param_2 + 1) == 0) {
      puVar19 = &DAT_143f3eda8;
      iVar6 = iVar5;
    }
    else {
      puVar19 = (undefined2 *)*param_2;
      iVar6 = *(int *)(param_2 + 1) + -1;
    }
    iVar4 = iVar6 - (iVar3 + iVar4);
    iVar3 = iVar5;
    if ((-1 < iVar4) && (iVar3 = iVar6, iVar4 < iVar6)) {
      iVar3 = iVar4;
    }
    local_b8 = (wchar_t *)0x0;
    local_ac = 0;
    psVar1 = puVar19 + ((longlong)iVar6 - (longlong)iVar3);
    iVar3 = iVar5;
    if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
      lVar14 = -1;
      do {
        lVar14 = lVar14 + 1;
      } while (psVar1[lVar14] != 0);
      iVar4 = (int)lVar14 + 1;
      local_b0 = iVar4;
      if (0 < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
      }
      iVar3 = local_b0;
      pwVar8 = local_b8;
      FGenericPlatformString::Memcpy(local_b8,psVar1,(longlong)iVar4 * 2);
    }
    for (pwVar16 = pwVar8; pwVar16 != pwVar8 + iVar3; pwVar16 = pwVar16 + 1) {
      if (*pwVar16 == L':') {
        iVar4 = (int)((longlong)pwVar16 - (longlong)pwVar8 >> 1);
        if (iVar4 != -1) {
          if (iVar3 == 0) {
            local_res18 = L"";
            iVar6 = iVar22;
          }
          else {
            iVar6 = iVar3 + -1;
            local_res18 = pwVar8;
          }
          iVar12 = iVar5;
          if ((-1 < iVar4 + -1) && (iVar12 = iVar6, iVar4 <= iVar6)) {
            iVar12 = iVar4 + -1;
          }
          local_ac = 0;
          local_b0 = iVar12 + 1;
          if (iVar12 == 0) {
            local_b0 = iVar22;
          }
          local_res20 = (wchar_t *)0x0;
          local_b8 = (wchar_t *)0x0;
          if (0 < local_b0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
            local_res20 = local_b8;
            if (0 < local_b0) {
              wcsncpy(local_b8,local_res18,(longlong)iVar12);
              local_res20[iVar12] = L'\0';
            }
          }
          if (iVar3 != 0) {
            iVar22 = iVar3 + -1;
            pwVar23 = pwVar8;
          }
          iVar3 = iVar22 - (iVar4 + 1);
          if ((-1 < iVar3) && (iVar5 = iVar22, iVar3 < iVar22)) {
            iVar5 = iVar3;
          }
          local_a8 = 0;
          local_a0 = 0;
          pwVar23 = pwVar23 + ((longlong)iVar22 - (longlong)iVar5);
          if ((pwVar23 != (wchar_t *)0x0) && (*pwVar23 != L'\0')) {
            do {
              lVar18 = lVar18 + 1;
            } while (pwVar23[lVar18] != L'\0');
            uVar11 = (int)lVar18 + 1;
            local_a0 = (ulonglong)uVar11;
            if (0 < (int)uVar11) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
            }
            FGenericPlatformString::Memcpy(local_a8,pwVar23,(longlong)(int)uVar11 * 2);
          }
          FUN_1406b8af0(*(undefined8 *)(param_1 + 8),&local_b8,&local_c8,&local_a8);
          if (local_a8 != 0) {
            FMemory::Free();
          }
          if (local_b8 != (wchar_t *)0x0) {
            FMemory::Free();
          }
        }
        break;
      }
    }
    pwVar16 = local_c8;
    if (pwVar8 != (wchar_t *)0x0) {
      FMemory::Free(pwVar8);
      pwVar16 = local_c8;
    }
  }
  if (pwVar16 != (wchar_t *)0x0) {
    FMemory::Free(pwVar16);
  }
  return;
}



// FUNCTION 1406b8870 FUN_1406b8870 body=521 status=ok
// SIG undefined FUN_1406b8870(void)

undefined8
FUN_1406b8870(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             char param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  longlong local_48 [2];
  wchar_t *local_38;
  int local_30;
  wchar_t *local_28;
  int local_20;
  wchar_t *local_18;
  int local_10;
  
  (**(code **)(*(longlong *)*param_3 + 0x10))((longlong *)*param_3,local_48,&DAT_14622cbf0);
  cVar5 = FUN_141678c50(local_48,param_2);
  if (cVar5 == '\0') {
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    plVar3 = (longlong *)param_3[1];
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
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    plVar3 = (longlong *)param_4[1];
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
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    uVar7 = 0;
  }
  else if (param_5 == '\0') {
    FUN_1406b9180(param_1 + 200,param_2);
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_4);
    uVar7 = 0;
  }
  else {
    (**(code **)(*(longlong *)*param_4 + 0x10))((longlong *)*param_4,&local_18,&DAT_14622cc10);
    pwVar8 = L"";
    if (local_10 != 0) {
      pwVar8 = local_18;
    }
    iVar6 = _wtoi(pwVar8);
    *(int *)(param_1 + 0x118) = iVar6;
    (**(code **)(*(longlong *)*param_4 + 0x10))((longlong *)*param_4,&local_28,&DAT_14622cc20);
    pwVar8 = L"";
    if (local_20 != 0) {
      pwVar8 = local_28;
    }
    iVar6 = _wtoi(pwVar8);
    *(int *)(param_1 + 0x11c) = iVar6;
    (**(code **)(*(longlong *)*param_4 + 0x10))((longlong *)*param_4,&local_38,&DAT_14622cc30);
    pwVar8 = L"";
    if (local_30 != 0) {
      pwVar8 = local_38;
    }
    iVar6 = _wtoi(pwVar8);
    *(longlong *)(param_1 + 0x120) = (longlong)iVar6;
    if (local_38 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_28 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_18 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_3);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_4);
    uVar7 = 1;
  }
  return uVar7;
}



// FUNCTION 1406b8a80 FUN_1406b8a80 body=110 status=ok
// SIG undefined FUN_1406b8a80(void)

void FUN_1406b8a80(longlong *param_1)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined1 local_28 [16];
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FString::ToLower(param_1,local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(local_28,L"PART #%s",puVar2);
  FUN_1406bda00(DAT_146857ff0,local_28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1406b8af0 FUN_1406b8af0 body=578 status=ok
// SIG undefined FUN_1406b8af0(void)

void FUN_1406b8af0(longlong param_1,void **param_2,void **param_3,void **param_4)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  void *local_48;
  ulonglong local_40;
  void *local_38;
  int local_30;
  int local_2c;
  void *local_28;
  undefined8 local_20;
  
  lVar7 = *(longlong *)(param_1 + 0x68);
  lVar8 = (longlong)*(int *)(param_1 + 0x70) * 0x58 + lVar7;
  while( true ) {
    if (lVar7 == lVar8) {
      return;
    }
    if (*(int *)(param_2 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = *param_2;
    }
    if (*(int *)(lVar7 + 0x10) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = *(undefined2 **)(lVar7 + 8);
    }
    iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
    if (iVar4 == 0) break;
    lVar7 = lVar7 + 0x58;
  }
  if (lVar7 == 0) {
    return;
  }
  local_48 = (void *)0x0;
  local_2c = 0;
  local_40 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_20._4_4_ = 0;
  if (&local_48 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    pvVar3 = *param_2;
    local_40 = (ulonglong)uVar1;
    local_20._4_4_ = 0;
    if (uVar1 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,uVar1);
      _guard_xfg_dispatch_icall_nop(local_48,pvVar3,(longlong)(int)uVar1 * 2);
    }
  }
  iVar4 = local_20._4_4_;
  if (&local_38 != param_3) {
    local_30 = *(int *)(param_3 + 1);
    lVar8 = (longlong)local_30;
    pvVar3 = *param_3;
    if ((local_30 == 0) && (local_2c == 0)) {
      local_2c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,local_2c);
      _guard_xfg_dispatch_icall_nop(local_38,pvVar3,lVar8 * 2);
      iVar4 = local_20._4_4_;
    }
  }
  if (&local_28 != param_4) {
    iVar2 = *(int *)(param_4 + 1);
    pvVar3 = *param_4;
    local_20 = CONCAT44(local_20._4_4_,iVar2);
    if ((iVar2 == 0) && (iVar4 == 0)) {
      local_20 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,iVar2);
      _guard_xfg_dispatch_icall_nop(local_28,pvVar3,(longlong)iVar2 * 2);
    }
  }
  iVar4 = TArray<FString,FDefaultAllocator>::Find(lVar7 + 0x28,param_3);
  if (iVar4 == -1) {
    iVar4 = *(int *)(lVar7 + 0x30);
    *(int *)(lVar7 + 0x30) = iVar4 + 1;
    if (*(int *)(lVar7 + 0x34) < iVar4 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar7 + 0x28,iVar4);
    }
    FString::FString((longlong)iVar4 * 0x10 + *(longlong *)(lVar7 + 0x28),param_3);
  }
  iVar4 = *(int *)(lVar7 + 0x40);
  *(int *)(lVar7 + 0x40) = iVar4 + 1;
  if (*(int *)(lVar7 + 0x44) < iVar4 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow((longlong *)(lVar7 + 0x38),iVar4);
  }
  lVar7 = (longlong)iVar4 * 0x30 + *(longlong *)(lVar7 + 0x38);
  FString::FString(lVar7,&local_48);
  FString::FString(lVar7 + 0x10,&local_38);
  FString::FString(lVar7 + 0x20,&local_28);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_48 == (void *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 1406b8d40 FUN_1406b8d40 body=535 status=ok
// SIG undefined FUN_1406b8d40(void)

void FUN_1406b8d40(longlong *param_1)

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
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_1406b8e6f;
        uVar5 = puVar12[lVar6 + 1];
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
LAB_1406b8e6f:
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
        lVar6 = (longlong)iStack_2c * 0x80 + *param_1;
        uVar5 = FCrc::MemCrc_DEPRECATED(lVar6,0x10);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x7c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x78) =
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



// FUNCTION 1406b8f60 Rehash body=543 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FString,FOnlineAchievementDesc>,TDefaultMapHashableKeyFuncs<FString,FOnlineAchievementDesc,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_1406b908f;
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
LAB_1406b908f:
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
        puVar11 = (undefined8 *)((longlong)iStack_2c * 0x70 + *param_1);
        if (*(int *)(puVar11 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar11;
        }
        uVar5 = FUN_140438070(puVar9);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)((longlong)puVar11 + 0x6c) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar11 + 0xd) =
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



// FUNCTION 1406b9180 FUN_1406b9180 body=417 status=ok
// SIG undefined FUN_1406b9180(void)

undefined8 FUN_1406b9180(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar2 = FCrc::MemCrc_DEPRECATED(param_2,0x10);
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  iVar2 = *(int *)((longlong)plVar6 + ((longlong)iVar2 & uVar7) * 4);
  if (iVar2 == -1) {
    return 0;
  }
  lVar4 = *param_1;
  while( true ) {
    lVar3 = (longlong)iVar2;
    piVar5 = (int *)(lVar3 * 0x80 + lVar4);
    if (((piVar5[1] == param_2[1] && piVar5[2] == param_2[2]) && piVar5[3] == param_2[3]) &&
        *param_2 == *piVar5) break;
    iVar2 = piVar5[0x1e];
    if (iVar2 == -1) {
      return 0;
    }
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar7 = (longlong)*(int *)(lVar3 * 0x80 + 0x7c + lVar4) & uVar7;
    piVar5 = (int *)((longlong)plVar6 + uVar7 * 4);
    iVar1 = *(int *)((longlong)plVar6 + uVar7 * 4);
    while (iVar1 != -1) {
      if (iVar1 == iVar2) {
        *piVar5 = *(int *)(lVar3 * 0x80 + 0x78 + lVar4);
        break;
      }
      piVar5 = (int *)(lVar4 + 0x78 + (longlong)iVar1 * 0x80);
      iVar1 = *piVar5;
    }
  }
  lVar4 = lVar3 * 0x80 + *param_1;
  if (*(longlong *)(lVar4 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(lVar4 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(lVar4 + 0x48) != 0) {
    FMemory::Free();
  }
  FUN_1406ad5c0(lVar4 + 0x20);
  FUN_140483a60(param_1,iVar2,1);
  return 1;
}



// FUNCTION 1406b9330 FUN_1406b9330 body=283 status=ok
// SIG undefined FUN_1406b9330(void)

void FUN_1406b9330(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(*param_1 + 0x28 + (longlong)param_2 * 0x58);
    iVar2 = param_3;
    do {
      TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>::
      ~TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>(puVar3 + 2);
      iVar4 = *(int *)(puVar3 + 1);
      plVar1 = (longlong *)*puVar3;
      if (iVar4 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar1 = (longlong *)*puVar3;
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      if (puVar3[-2] != 0) {
        FMemory::Free();
      }
      if (puVar3[-4] != 0) {
        FMemory::Free();
      }
      puVar3 = puVar3 + 0xb;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = (int)param_1[1];
    iVar4 = (iVar2 - param_2) - param_3;
    if (iVar4 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x58),
                 (void *)((longlong)(param_2 + param_3) * 0x58 + *param_1),(longlong)iVar4 * 0x58);
      iVar2 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar2 - param_3;
    if (param_4 != '\0') {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1406b9450 FUN_1406b9450 body=292 status=ok
// SIG undefined FUN_1406b9450(void)

void FUN_1406b9450(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(*param_1 + 0x28 + (longlong)param_2 * 0x58);
    iVar2 = param_3;
    do {
      TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>::
      ~TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>(puVar3 + 2);
      iVar4 = *(int *)(puVar3 + 1);
      plVar1 = (longlong *)*puVar3;
      if (iVar4 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar1 = (longlong *)*puVar3;
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      if (puVar3[-2] != 0) {
        FMemory::Free();
      }
      if (puVar3[-4] != 0) {
        FMemory::Free();
      }
      puVar3 = puVar3 + 0xb;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = (int)param_1[1];
    iVar4 = (iVar2 - param_2) - param_3;
    if (param_3 <= iVar4) {
      iVar4 = param_3;
    }
    if (iVar4 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x58),
                 (void *)((longlong)(iVar2 - iVar4) * 0x58 + *param_1),(longlong)iVar4 * 0x58);
      iVar2 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar2 - param_3;
    if (param_4 != '\0') {
      TArray<FCloudFileHeader,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1406b9580 FUN_1406b9580 body=907 status=ok
// SIG undefined FUN_1406b9580(void)

void FUN_1406b9580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  void *_Dst;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  void *pvVar14;
  void *local_a8;
  uint local_a0;
  int local_9c;
  void *local_98;
  uint local_90;
  int local_8c;
  longlong *local_88;
  longlong *local_80;
  longlong local_78 [2];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58 [4];
  longlong local_38 [2];
  
  plVar5 = (longlong *)FHttpModule::Get();
  (**(code **)(*plVar5 + 0x40))(plVar5,&local_88);
  uVar6 = (**(code **)(*local_88 + 0x80))();
  FUN_1406ac450(uVar6,param_1,FUN_1406b6240);
  pvVar14 = (void *)0x0;
  local_78[1] = 4;
  local_78[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
  FGenericPlatformString::Memcpy(local_78[0],&DAT_144046890,8);
  plVar5 = local_88;
  puVar7 = (undefined8 *)FUN_1406af240(local_38,local_78,param_3);
  pvVar2 = DAT_14622cc70;
  uVar12 = (uint)DAT_14622cc78;
  if ((int)uVar12 < 2) {
    local_98 = (void *)0x0;
    local_90 = *(uint *)(puVar7 + 1);
    lVar10 = (longlong)(int)local_90;
    pvVar2 = (void *)*puVar7;
    if (local_90 == 0) {
      local_8c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,local_90,0);
      _guard_xfg_dispatch_icall_nop(local_98,pvVar2,lVar10 * 2);
    }
  }
  else {
    iVar9 = *(int *)(puVar7 + 1) + -1;
    if (*(int *)(puVar7 + 1) == 0) {
      iVar9 = 0;
    }
    if ((uVar12 != 0) || (iVar4 = 1, iVar9 == 0)) {
      iVar4 = 0;
    }
    local_a8 = (void *)0x0;
    local_a0 = uVar12;
    if ((uVar12 == 0) && (iVar4 + iVar9 == 0)) {
      local_9c = 0;
      uVar13 = DAT_14622cc78;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,iVar4 + iVar9 + uVar12,0);
      pvVar14 = local_a8;
      _guard_xfg_dispatch_icall_nop(local_a8,pvVar2,(longlong)(int)uVar12 * 2);
      uVar13 = (ulonglong)local_a0;
    }
    uVar12 = (uint)uVar13;
    pvVar2 = (void *)*puVar7;
    local_98 = pvVar14;
    local_90 = uVar12;
    local_8c = local_9c;
    if (iVar9 != 0) {
      local_a0 = (uint)(uVar12 == 0) + iVar9 + uVar12;
      if (local_9c < (int)local_a0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,uVar13 & 0xffffffff);
        pvVar14 = local_a8;
      }
      iVar4 = local_9c;
      uVar3 = local_a0;
      _Dst = (void *)((longlong)pvVar14 + ((longlong)(int)uVar12 - (ulonglong)(uVar12 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,pvVar2,(longlong)iVar9 * 2);
      *(undefined2 *)((longlong)iVar9 * 2 + (longlong)_Dst) = 0;
      local_98 = pvVar14;
      local_90 = uVar3;
      local_8c = iVar4;
    }
  }
  (**(code **)(*plVar5 + 0x50))(plVar5,&local_98);
  if (local_98 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  plVar5 = local_88;
  plVar8 = (longlong *)UNavCollisionBase::GetPrivateStaticClass();
  lVar10 = plVar8[0x1f];
  if (lVar10 == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar10 = plVar8[0x1f];
  }
  local_68 = (void *)0x0;
  local_60 = *(int *)(lVar10 + 0x30);
  lVar11 = (longlong)local_60;
  pvVar2 = *(void **)(lVar10 + 0x28);
  if (local_60 == 0) {
    local_5c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_60,0);
    _guard_xfg_dispatch_icall_nop(local_68,pvVar2,lVar11 * 2);
  }
  (**(code **)(*plVar5 + 0x68))(plVar5,&DAT_14622cc00,&local_68);
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  plVar5 = local_88;
  FUN_141682af0(param_2,local_58 + 2,0);
  (**(code **)(*plVar5 + 0x68))(plVar5,&DAT_14622cbf0,local_58 + 2);
  if (local_58[2] != 0) {
    FMemory::Free();
  }
  local_58[0] = 0;
  local_58[1] = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],&DAT_144046898,8);
  (**(code **)(*local_88 + 0x48))(local_88,local_58);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  (**(code **)(*local_88 + 0x78))();
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_80 + 1;
    lVar10 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  return;
}



// FUNCTION 1406b9910 FUN_1406b9910 body=907 status=ok
// SIG undefined FUN_1406b9910(void)

void FUN_1406b9910(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  void *_Dst;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  void *pvVar14;
  void *local_a8;
  uint local_a0;
  int local_9c;
  void *local_98;
  uint local_90;
  int local_8c;
  longlong *local_88;
  longlong *local_80;
  longlong local_78 [2];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58 [4];
  longlong local_38 [2];
  
  plVar5 = (longlong *)FHttpModule::Get();
  (**(code **)(*plVar5 + 0x40))(plVar5,&local_88);
  uVar6 = (**(code **)(*local_88 + 0x80))();
  FUN_1406ac450(uVar6,param_1,FUN_1406b6240);
  pvVar14 = (void *)0x0;
  local_78[1] = 6;
  local_78[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
  FGenericPlatformString::Memcpy(local_78[0],L"name=",0xc);
  plVar5 = local_88;
  puVar7 = (undefined8 *)FUN_1406af240(local_38,local_78,param_3);
  pvVar2 = DAT_14622cc70;
  uVar12 = (uint)DAT_14622cc78;
  if ((int)uVar12 < 2) {
    local_98 = (void *)0x0;
    local_90 = *(uint *)(puVar7 + 1);
    lVar10 = (longlong)(int)local_90;
    pvVar2 = (void *)*puVar7;
    if (local_90 == 0) {
      local_8c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,local_90,0);
      _guard_xfg_dispatch_icall_nop(local_98,pvVar2,lVar10 * 2);
    }
  }
  else {
    iVar9 = *(int *)(puVar7 + 1) + -1;
    if (*(int *)(puVar7 + 1) == 0) {
      iVar9 = 0;
    }
    if ((uVar12 != 0) || (iVar4 = 1, iVar9 == 0)) {
      iVar4 = 0;
    }
    local_a8 = (void *)0x0;
    local_a0 = uVar12;
    if ((uVar12 == 0) && (iVar4 + iVar9 == 0)) {
      local_9c = 0;
      uVar13 = DAT_14622cc78;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,iVar4 + iVar9 + uVar12,0);
      pvVar14 = local_a8;
      _guard_xfg_dispatch_icall_nop(local_a8,pvVar2,(longlong)(int)uVar12 * 2);
      uVar13 = (ulonglong)local_a0;
    }
    uVar12 = (uint)uVar13;
    pvVar2 = (void *)*puVar7;
    local_98 = pvVar14;
    local_90 = uVar12;
    local_8c = local_9c;
    if (iVar9 != 0) {
      local_a0 = (uint)(uVar12 == 0) + iVar9 + uVar12;
      if (local_9c < (int)local_a0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,uVar13 & 0xffffffff);
        pvVar14 = local_a8;
      }
      iVar4 = local_9c;
      uVar3 = local_a0;
      _Dst = (void *)((longlong)pvVar14 + ((longlong)(int)uVar12 - (ulonglong)(uVar12 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,pvVar2,(longlong)iVar9 * 2);
      *(undefined2 *)((longlong)iVar9 * 2 + (longlong)_Dst) = 0;
      local_98 = pvVar14;
      local_90 = uVar3;
      local_8c = iVar4;
    }
  }
  (**(code **)(*plVar5 + 0x50))(plVar5,&local_98);
  if (local_98 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  plVar5 = local_88;
  plVar8 = (longlong *)UNavCollisionBase::GetPrivateStaticClass();
  lVar10 = plVar8[0x1f];
  if (lVar10 == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar10 = plVar8[0x1f];
  }
  local_68 = (void *)0x0;
  local_60 = *(int *)(lVar10 + 0x30);
  lVar11 = (longlong)local_60;
  pvVar2 = *(void **)(lVar10 + 0x28);
  if (local_60 == 0) {
    local_5c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_60,0);
    _guard_xfg_dispatch_icall_nop(local_68,pvVar2,lVar11 * 2);
  }
  (**(code **)(*plVar5 + 0x68))(plVar5,&DAT_14622cc00,&local_68);
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  plVar5 = local_88;
  FUN_141682af0(param_2,local_58 + 2,0);
  (**(code **)(*plVar5 + 0x68))(plVar5,&DAT_14622cbf0,local_58 + 2);
  if (local_58[2] != 0) {
    FMemory::Free();
  }
  local_58[0] = 0;
  local_58[1] = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_58,0);
  FGenericPlatformString::Memcpy(local_58[0],&DAT_144046888,8);
  (**(code **)(*local_88 + 0x48))(local_88,local_58);
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  (**(code **)(*local_88 + 0x78))();
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_80 + 1;
    lVar10 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  return;
}



// FUNCTION 1406b9ca0 FUN_1406b9ca0 body=1082 status=ok
// SIG undefined FUN_1406b9ca0(void)

void FUN_1406b9ca0(longlong *param_1)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong **pplVar7;
  longlong lVar8;
  longlong lVar9;
  void *_Dst;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  void *local_b8;
  uint local_b0;
  int local_ac;
  void *local_a8;
  uint local_a0;
  int local_9c;
  longlong *local_98;
  longlong *local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78 [3];
  undefined4 local_60;
  longlong *local_58 [2];
  longlong local_48 [2];
  
  if ((DAT_146857fe0 != 0) && (1 < *(int *)(DAT_146857fe0 + 0x130))) {
    plVar5 = (longlong *)FHttpModule::Get();
    (**(code **)(*plVar5 + 0x40))(plVar5,&local_98);
    (**(code **)(*local_98 + 0x50))(local_98,&DAT_14622cc90);
    plVar5 = local_98;
    plVar6 = (longlong *)FUN_1406b2850(local_48);
    pvVar2 = DAT_14622cbd0;
    local_a8 = (void *)0x0;
    uVar10 = (uint)DAT_14622cbd8;
    if ((int)uVar10 < 2) {
      local_a8 = (void *)*plVar6;
      *plVar6 = 0;
      local_a0 = *(uint *)(plVar6 + 1);
      plVar6[1] = 0;
      local_9c = *(int *)((longlong)plVar6 + 0xc);
    }
    else {
      iVar12 = (int)plVar6[1] + -1;
      if ((int)plVar6[1] == 0) {
        iVar12 = 0;
      }
      if ((uVar10 != 0) || (iVar4 = 1, iVar12 == 0)) {
        iVar4 = 0;
      }
      local_b8 = (void *)0x0;
      local_b0 = uVar10;
      if ((uVar10 == 0) && (iVar12 + iVar4 == 0)) {
        local_ac = 0;
        uVar11 = DAT_14622cbd8;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,iVar12 + iVar4 + uVar10,0);
        local_a8 = local_b8;
        _guard_xfg_dispatch_icall_nop(local_b8,pvVar2,(longlong)(int)uVar10 * 2);
        uVar11 = (ulonglong)local_b0;
      }
      uVar10 = (uint)uVar11;
      pvVar2 = (void *)*plVar6;
      local_a0 = uVar10;
      local_9c = local_ac;
      if (iVar12 != 0) {
        local_b0 = (uint)(uVar10 == 0) + iVar12 + uVar10;
        if (local_ac < (int)local_b0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,uVar11 & 0xffffffff);
          local_a8 = local_b8;
        }
        iVar4 = local_ac;
        uVar3 = local_b0;
        _Dst = (void *)(((longlong)(int)uVar10 - (ulonglong)(uVar10 != 0)) * 2 + (longlong)local_a8)
        ;
        _guard_xfg_dispatch_icall_nop(_Dst,pvVar2,(longlong)iVar12 * 2);
        *(undefined2 *)((longlong)iVar12 * 2 + (longlong)_Dst) = 0;
        local_a0 = uVar3;
        local_9c = iVar4;
      }
    }
    (**(code **)(*plVar5 + 0x68))(plVar5,&DAT_14622cbe0,&local_a8);
    if (local_a8 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    plVar5 = local_98;
    plVar6 = (longlong *)UNavCollisionBase::GetPrivateStaticClass();
    lVar8 = plVar6[0x1f];
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0x368))(plVar6);
      lVar8 = plVar6[0x1f];
    }
    local_88 = (void *)0x0;
    local_80 = *(int *)(lVar8 + 0x30);
    lVar9 = (longlong)local_80;
    pvVar2 = *(void **)(lVar8 + 0x28);
    if (local_80 == 0) {
      local_7c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,local_80,0);
      _guard_xfg_dispatch_icall_nop(local_88,pvVar2,lVar9 * 2);
    }
    (**(code **)(*plVar5 + 0x68))(plVar5,&DAT_14622cc00,&local_88);
    if (local_88 != (void *)0x0) {
      FMemory::Free();
    }
    local_78[0] = 0;
    local_78[1] = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
    FGenericPlatformString::Memcpy(local_78[0],&DAT_144049d38,8);
    (**(code **)(*local_98 + 0x48))(local_98,local_78);
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    plVar5 = local_98;
    local_78[2] = 0;
    local_60 = 0;
    if (((param_1 != local_78 + 2) && ((int)param_1[1] != 0)) &&
       (plVar6 = (longlong *)*param_1, plVar6 != (longlong *)0x0)) {
      (**(code **)(*plVar6 + 0x30))(plVar6,local_78 + 2);
    }
    pplVar7 = (longlong **)(**(code **)(*plVar5 + 0x80))(plVar5);
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    local_58[0] = plVar5;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_GetPoolName_14404c128;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      TBaseDelegate<FSlateBrush_const_*>::operator=(plVar5 + 1,local_78 + 2);
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar8;
      *plVar5 = (longlong)&PTR_GetPoolName_14404c170;
    }
    if (local_58 != pplVar7) {
      if (plVar5 == (longlong *)0x0) {
        if ((*(int *)(pplVar7 + 1) != 0) && (plVar6 = *pplVar7, plVar6 != (longlong *)0x0)) {
          (**(code **)(*plVar6 + 0x28))(plVar6,0);
          if (*pplVar7 != (longlong *)0x0) {
            plVar6 = (longlong *)FMemory::Realloc(*pplVar7,0,0);
            *pplVar7 = plVar6;
          }
          *(undefined4 *)(pplVar7 + 1) = 0;
        }
      }
      else {
        (**(code **)(*plVar5 + 0x30))(plVar5,pplVar7);
      }
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      local_58[0] = (longlong *)FMemory::Realloc(plVar5,0,0);
      if (local_58[0] != (longlong *)0x0) {
        FMemory::Free(local_58[0]);
      }
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_78 + 2);
    (**(code **)(*local_98 + 0x78))();
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_90 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1);
  return;
}



// FUNCTION 1406ba0e0 FUN_1406ba0e0 body=1082 status=ok
// SIG undefined FUN_1406ba0e0(void)

void FUN_1406ba0e0(longlong *param_1)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong **pplVar7;
  longlong lVar8;
  longlong lVar9;
  void *_Dst;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  void *local_b8;
  uint local_b0;
  int local_ac;
  void *local_a8;
  uint local_a0;
  int local_9c;
  longlong *local_98;
  longlong *local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78 [3];
  undefined4 local_60;
  longlong *local_58 [2];
  longlong local_48 [2];
  
  if ((DAT_146857fe0 != 0) && (1 < *(int *)(DAT_146857fe0 + 0x130))) {
    plVar5 = (longlong *)FHttpModule::Get();
    (**(code **)(*plVar5 + 0x40))(plVar5,&local_98);
    (**(code **)(*local_98 + 0x50))(local_98,&DAT_14622cca0);
    plVar5 = local_98;
    plVar6 = (longlong *)FUN_1406b2850(local_48);
    pvVar2 = DAT_14622cbd0;
    local_a8 = (void *)0x0;
    uVar10 = (uint)DAT_14622cbd8;
    if ((int)uVar10 < 2) {
      local_a8 = (void *)*plVar6;
      *plVar6 = 0;
      local_a0 = *(uint *)(plVar6 + 1);
      plVar6[1] = 0;
      local_9c = *(int *)((longlong)plVar6 + 0xc);
    }
    else {
      iVar12 = (int)plVar6[1] + -1;
      if ((int)plVar6[1] == 0) {
        iVar12 = 0;
      }
      if ((uVar10 != 0) || (iVar4 = 1, iVar12 == 0)) {
        iVar4 = 0;
      }
      local_b8 = (void *)0x0;
      local_b0 = uVar10;
      if ((uVar10 == 0) && (iVar12 + iVar4 == 0)) {
        local_ac = 0;
        uVar11 = DAT_14622cbd8;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,iVar12 + iVar4 + uVar10,0);
        local_a8 = local_b8;
        _guard_xfg_dispatch_icall_nop(local_b8,pvVar2,(longlong)(int)uVar10 * 2);
        uVar11 = (ulonglong)local_b0;
      }
      uVar10 = (uint)uVar11;
      pvVar2 = (void *)*plVar6;
      local_a0 = uVar10;
      local_9c = local_ac;
      if (iVar12 != 0) {
        local_b0 = (uint)(uVar10 == 0) + iVar12 + uVar10;
        if (local_ac < (int)local_b0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,uVar11 & 0xffffffff);
          local_a8 = local_b8;
        }
        iVar4 = local_ac;
        uVar3 = local_b0;
        _Dst = (void *)(((longlong)(int)uVar10 - (ulonglong)(uVar10 != 0)) * 2 + (longlong)local_a8)
        ;
        _guard_xfg_dispatch_icall_nop(_Dst,pvVar2,(longlong)iVar12 * 2);
        *(undefined2 *)((longlong)iVar12 * 2 + (longlong)_Dst) = 0;
        local_a0 = uVar3;
        local_9c = iVar4;
      }
    }
    (**(code **)(*plVar5 + 0x68))(plVar5,&DAT_14622cbe0,&local_a8);
    if (local_a8 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    plVar5 = local_98;
    plVar6 = (longlong *)UNavCollisionBase::GetPrivateStaticClass();
    lVar8 = plVar6[0x1f];
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0x368))(plVar6);
      lVar8 = plVar6[0x1f];
    }
    local_88 = (void *)0x0;
    local_80 = *(int *)(lVar8 + 0x30);
    lVar9 = (longlong)local_80;
    pvVar2 = *(void **)(lVar8 + 0x28);
    if (local_80 == 0) {
      local_7c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,local_80,0);
      _guard_xfg_dispatch_icall_nop(local_88,pvVar2,lVar9 * 2);
    }
    (**(code **)(*plVar5 + 0x68))(plVar5,&DAT_14622cc00,&local_88);
    if (local_88 != (void *)0x0) {
      FMemory::Free();
    }
    local_78[0] = 0;
    local_78[1] = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
    FGenericPlatformString::Memcpy(local_78[0],&DAT_144048d30,8);
    (**(code **)(*local_98 + 0x48))(local_98,local_78);
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    plVar5 = local_98;
    local_78[2] = 0;
    local_60 = 0;
    if (((param_1 != local_78 + 2) && ((int)param_1[1] != 0)) &&
       (plVar6 = (longlong *)*param_1, plVar6 != (longlong *)0x0)) {
      (**(code **)(*plVar6 + 0x30))(plVar6,local_78 + 2);
    }
    pplVar7 = (longlong **)(**(code **)(*plVar5 + 0x80))(plVar5);
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    local_58[0] = plVar5;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_GetPoolName_14404c098;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      TBaseDelegate<FSlateBrush_const_*>::operator=(plVar5 + 1,local_78 + 2);
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar8;
      *plVar5 = (longlong)&PTR_GetPoolName_14404c0e0;
    }
    if (local_58 != pplVar7) {
      if (plVar5 == (longlong *)0x0) {
        if ((*(int *)(pplVar7 + 1) != 0) && (plVar6 = *pplVar7, plVar6 != (longlong *)0x0)) {
          (**(code **)(*plVar6 + 0x28))(plVar6,0);
          if (*pplVar7 != (longlong *)0x0) {
            plVar6 = (longlong *)FMemory::Realloc(*pplVar7,0,0);
            *pplVar7 = plVar6;
          }
          *(undefined4 *)(pplVar7 + 1) = 0;
        }
      }
      else {
        (**(code **)(*plVar5 + 0x30))(plVar5,pplVar7);
      }
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      local_58[0] = (longlong *)FMemory::Realloc(plVar5,0,0);
      if (local_58[0] != (longlong *)0x0) {
        FMemory::Free(local_58[0]);
      }
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_78 + 2);
    (**(code **)(*local_98 + 0x78))();
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_90 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1);
  return;
}



// FUNCTION 1406ba520 FUN_1406ba520 body=1474 status=ok
// SIG undefined FUN_1406ba520(void)

void FUN_1406ba520(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong **pplVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  void *pvVar11;
  undefined2 *puVar12;
  void *pvVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  void *local_e8;
  uint local_e0;
  int local_dc;
  void *local_d8;
  uint local_d0;
  int local_cc;
  void *local_c8;
  uint local_c0;
  int local_bc;
  void *local_b8;
  uint local_b0;
  int local_ac;
  longlong *local_a8;
  longlong *local_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  longlong local_88 [2];
  void *local_78;
  ulonglong local_70;
  longlong local_68;
  undefined4 local_60;
  longlong *local_58 [2];
  longlong local_48 [2];
  
  if (((DAT_146857fe0 != 0) && (1 < *(int *)(DAT_146857fe0 + 0x130))) && (1 < *(int *)(param_1 + 1))
     ) {
    plVar4 = (longlong *)FHttpModule::Get();
    (**(code **)(*plVar4 + 0x40))(plVar4,&local_a8);
    plVar4 = local_a8;
    if (*(int *)(param_1 + 1) == 0) {
      puVar12 = &DAT_143f3eda8;
    }
    else {
      puVar12 = (undefined2 *)*param_1;
    }
    FString::PrintfImpl(&local_78,L"&user_id=%s",puVar12);
    pvVar13 = local_78;
    pvVar2 = DAT_14622cc60;
    pvVar11 = (void *)0x0;
    uVar14 = (uint)DAT_14622cc68;
    iVar10 = 0;
    uVar15 = (uint)local_70;
    if ((int)uVar14 < 2) {
      local_c8 = (void *)0x0;
      local_c0 = uVar15;
      if (uVar15 == 0) {
        local_bc = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,local_70 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_c8,pvVar13,(longlong)(int)uVar15 * 2);
      }
    }
    else {
      iVar8 = uVar15 - 1;
      if (uVar15 == 0) {
        iVar8 = iVar10;
      }
      if ((uVar14 != 0) || (iVar3 = 1, iVar8 == 0)) {
        iVar3 = iVar10;
      }
      local_e8 = (void *)0x0;
      local_e0 = uVar14;
      if ((uVar14 == 0) && (iVar3 + iVar8 == 0)) {
        local_dc = 0;
        pvVar13 = pvVar11;
        uVar16 = DAT_14622cc68;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,uVar14 + iVar3 + iVar8,0);
        pvVar13 = local_e8;
        _guard_xfg_dispatch_icall_nop(local_e8,pvVar2,(longlong)(int)uVar14 * 2);
        uVar16 = (ulonglong)local_e0;
      }
      pvVar2 = local_78;
      uVar15 = (uint)uVar16;
      local_c8 = pvVar13;
      local_c0 = uVar15;
      local_bc = local_dc;
      if (iVar8 != 0) {
        local_e0 = (uVar15 == 0) + uVar15 + iVar8;
        if (local_dc < (int)local_e0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,uVar16 & 0xffffffff);
          local_c8 = local_e8;
        }
        iVar3 = local_dc;
        uVar14 = local_e0;
        pvVar13 = (void *)((longlong)local_c8 +
                          ((longlong)(int)uVar15 - (ulonglong)(uVar15 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar13,pvVar2,(longlong)iVar8 * 2);
        *(undefined2 *)((longlong)iVar8 * 2 + (longlong)pvVar13) = 0;
        local_c0 = uVar14;
        local_bc = iVar3;
      }
    }
    (**(code **)(*plVar4 + 0x50))(plVar4,&local_c8);
    if (local_c8 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free();
    }
    plVar4 = local_a8;
    plVar5 = (longlong *)FUN_1406b2850(local_48);
    pvVar2 = DAT_14622cbd0;
    uVar15 = (uint)DAT_14622cbd8;
    if ((int)uVar15 < 2) {
      local_b8 = (void *)*plVar5;
      *plVar5 = 0;
      local_b0 = *(uint *)(plVar5 + 1);
      plVar5[1] = 0;
      local_ac = *(int *)((longlong)plVar5 + 0xc);
    }
    else {
      iVar8 = (int)plVar5[1] + -1;
      if ((int)plVar5[1] == 0) {
        iVar8 = iVar10;
      }
      if ((uVar15 != 0) || (iVar3 = 1, iVar8 == 0)) {
        iVar3 = iVar10;
      }
      local_d8 = (void *)0x0;
      local_d0 = uVar15;
      if ((uVar15 == 0) && (iVar3 + iVar8 == 0)) {
        local_cc = 0;
        uVar16 = DAT_14622cbd8;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d8,uVar15 + iVar3 + iVar8,0);
        pvVar11 = local_d8;
        _guard_xfg_dispatch_icall_nop(local_d8,pvVar2,(longlong)(int)uVar15 * 2);
        uVar16 = (ulonglong)local_d0;
      }
      uVar15 = (uint)uVar16;
      pvVar2 = (void *)*plVar5;
      local_b8 = pvVar11;
      local_b0 = uVar15;
      local_ac = local_cc;
      if (iVar8 != 0) {
        local_d0 = (uint)(uVar15 == 0) + iVar8 + uVar15;
        if (local_cc < (int)local_d0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,uVar16 & 0xffffffff);
          local_b8 = local_d8;
        }
        iVar10 = local_cc;
        uVar14 = local_d0;
        pvVar11 = (void *)(((longlong)(int)uVar15 - (ulonglong)(uVar15 != 0)) * 2 +
                          (longlong)local_b8);
        _guard_xfg_dispatch_icall_nop(pvVar11,pvVar2,(longlong)iVar8 * 2);
        *(undefined2 *)((longlong)iVar8 * 2 + (longlong)pvVar11) = 0;
        local_b0 = uVar14;
        local_ac = iVar10;
      }
    }
    (**(code **)(*plVar4 + 0x68))(plVar4,&DAT_14622cbe0,&local_b8);
    if (local_b8 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    plVar4 = local_a8;
    plVar5 = (longlong *)UNavCollisionBase::GetPrivateStaticClass();
    lVar7 = plVar5[0x1f];
    if (lVar7 == 0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      lVar7 = plVar5[0x1f];
    }
    local_98 = (void *)0x0;
    local_90 = *(int *)(lVar7 + 0x30);
    lVar9 = (longlong)local_90;
    pvVar2 = *(void **)(lVar7 + 0x28);
    if (local_90 == 0) {
      local_8c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,local_90,0);
      _guard_xfg_dispatch_icall_nop(local_98,pvVar2,lVar9 * 2);
    }
    (**(code **)(*plVar4 + 0x68))(plVar4,&DAT_14622cc00,&local_98);
    if (local_98 != (void *)0x0) {
      FMemory::Free();
    }
    local_88[0] = 0;
    local_88[1] = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_88,0);
    FGenericPlatformString::Memcpy(local_88[0],&DAT_144047ea0,8);
    (**(code **)(*local_a8 + 0x48))(local_a8,local_88);
    if (local_88[0] != 0) {
      FMemory::Free();
    }
    plVar4 = local_a8;
    local_68 = 0;
    local_60 = 0;
    if (((param_2 != &local_68) && ((int)param_2[1] != 0)) &&
       (plVar5 = (longlong *)*param_2, plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x30))(plVar5,&local_68);
    }
    pplVar6 = (longlong **)(**(code **)(*plVar4 + 0x80))(plVar4);
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    local_58[0] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_GetPoolName_14404c008;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      TBaseDelegate<FSlateBrush_const_*>::operator=(plVar4 + 1,&local_68);
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar4[4] = lVar7;
      *plVar4 = (longlong)&PTR_GetPoolName_14404c050;
    }
    if (local_58 != pplVar6) {
      if (plVar4 == (longlong *)0x0) {
        if ((*(int *)(pplVar6 + 1) != 0) && (plVar5 = *pplVar6, plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          if (*pplVar6 != (longlong *)0x0) {
            plVar5 = (longlong *)FMemory::Realloc(*pplVar6,0,0);
            *pplVar6 = plVar5;
          }
          *(undefined4 *)(pplVar6 + 1) = 0;
        }
      }
      else {
        (**(code **)(*plVar4 + 0x30))(plVar4,pplVar6);
      }
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      local_58[0] = (longlong *)FMemory::Realloc(plVar4,0,0);
      if (local_58[0] != (longlong *)0x0) {
        FMemory::Free(local_58[0]);
      }
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_68);
    (**(code **)(*local_a8 + 0x78))();
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
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2);
  return;
}



// FUNCTION 1406baaf0 FUN_1406baaf0 body=1082 status=ok
// SIG undefined FUN_1406baaf0(void)

void FUN_1406baaf0(longlong *param_1)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong **pplVar7;
  longlong lVar8;
  longlong lVar9;
  void *_Dst;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  void *local_b8;
  uint local_b0;
  int local_ac;
  void *local_a8;
  uint local_a0;
  int local_9c;
  longlong *local_98;
  longlong *local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78 [3];
  undefined4 local_60;
  longlong *local_58 [2];
  longlong local_48 [2];
  
  if ((DAT_146857fe0 != 0) && (1 < *(int *)(DAT_146857fe0 + 0x130))) {
    plVar5 = (longlong *)FHttpModule::Get();
    (**(code **)(*plVar5 + 0x40))(plVar5,&local_98);
    (**(code **)(*local_98 + 0x50))(local_98,&DAT_14622cc80);
    plVar5 = local_98;
    plVar6 = (longlong *)FUN_1406b2850(local_48);
    pvVar2 = DAT_14622cbd0;
    local_a8 = (void *)0x0;
    uVar10 = (uint)DAT_14622cbd8;
    if ((int)uVar10 < 2) {
      local_a8 = (void *)*plVar6;
      *plVar6 = 0;
      local_a0 = *(uint *)(plVar6 + 1);
      plVar6[1] = 0;
      local_9c = *(int *)((longlong)plVar6 + 0xc);
    }
    else {
      iVar12 = (int)plVar6[1] + -1;
      if ((int)plVar6[1] == 0) {
        iVar12 = 0;
      }
      if ((uVar10 != 0) || (iVar4 = 1, iVar12 == 0)) {
        iVar4 = 0;
      }
      local_b8 = (void *)0x0;
      local_b0 = uVar10;
      if ((uVar10 == 0) && (iVar12 + iVar4 == 0)) {
        local_ac = 0;
        uVar11 = DAT_14622cbd8;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b8,iVar12 + iVar4 + uVar10,0);
        local_a8 = local_b8;
        _guard_xfg_dispatch_icall_nop(local_b8,pvVar2,(longlong)(int)uVar10 * 2);
        uVar11 = (ulonglong)local_b0;
      }
      uVar10 = (uint)uVar11;
      pvVar2 = (void *)*plVar6;
      local_a0 = uVar10;
      local_9c = local_ac;
      if (iVar12 != 0) {
        local_b0 = (uint)(uVar10 == 0) + iVar12 + uVar10;
        if (local_ac < (int)local_b0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,uVar11 & 0xffffffff);
          local_a8 = local_b8;
        }
        iVar4 = local_ac;
        uVar3 = local_b0;
        _Dst = (void *)(((longlong)(int)uVar10 - (ulonglong)(uVar10 != 0)) * 2 + (longlong)local_a8)
        ;
        _guard_xfg_dispatch_icall_nop(_Dst,pvVar2,(longlong)iVar12 * 2);
        *(undefined2 *)((longlong)iVar12 * 2 + (longlong)_Dst) = 0;
        local_a0 = uVar3;
        local_9c = iVar4;
      }
    }
    (**(code **)(*plVar5 + 0x68))(plVar5,&DAT_14622cbe0,&local_a8);
    if (local_a8 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    plVar5 = local_98;
    plVar6 = (longlong *)UNavCollisionBase::GetPrivateStaticClass();
    lVar8 = plVar6[0x1f];
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0x368))(plVar6);
      lVar8 = plVar6[0x1f];
    }
    local_88 = (void *)0x0;
    local_80 = *(int *)(lVar8 + 0x30);
    lVar9 = (longlong)local_80;
    pvVar2 = *(void **)(lVar8 + 0x28);
    if (local_80 == 0) {
      local_7c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_88,local_80,0);
      _guard_xfg_dispatch_icall_nop(local_88,pvVar2,lVar9 * 2);
    }
    (**(code **)(*plVar5 + 0x68))(plVar5,&DAT_14622cc00,&local_88);
    if (local_88 != (void *)0x0) {
      FMemory::Free();
    }
    local_78[0] = 0;
    local_78[1] = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
    FGenericPlatformString::Memcpy(local_78[0],&DAT_144047108,8);
    (**(code **)(*local_98 + 0x48))(local_98,local_78);
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    plVar5 = local_98;
    local_78[2] = 0;
    local_60 = 0;
    if (((param_1 != local_78 + 2) && ((int)param_1[1] != 0)) &&
       (plVar6 = (longlong *)*param_1, plVar6 != (longlong *)0x0)) {
      (**(code **)(*plVar6 + 0x30))(plVar6,local_78 + 2);
    }
    pplVar7 = (longlong **)(**(code **)(*plVar5 + 0x80))(plVar5);
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    local_58[0] = plVar5;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_GetPoolName_14404bf78;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      TBaseDelegate<FSlateBrush_const_*>::operator=(plVar5 + 1,local_78 + 2);
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar8;
      *plVar5 = (longlong)&PTR_GetPoolName_14404bfc0;
    }
    if (local_58 != pplVar7) {
      if (plVar5 == (longlong *)0x0) {
        if ((*(int *)(pplVar7 + 1) != 0) && (plVar6 = *pplVar7, plVar6 != (longlong *)0x0)) {
          (**(code **)(*plVar6 + 0x28))(plVar6,0);
          if (*pplVar7 != (longlong *)0x0) {
            plVar6 = (longlong *)FMemory::Realloc(*pplVar7,0,0);
            *pplVar7 = plVar6;
          }
          *(undefined4 *)(pplVar7 + 1) = 0;
        }
      }
      else {
        (**(code **)(*plVar5 + 0x30))(plVar5,pplVar7);
      }
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      local_58[0] = (longlong *)FMemory::Realloc(plVar5,0,0);
      if (local_58[0] != (longlong *)0x0) {
        FMemory::Free(local_58[0]);
      }
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_78 + 2);
    (**(code **)(*local_98 + 0x78))();
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_90 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1);
  return;
}



// FUNCTION 1406baf30 FUN_1406baf30 body=731 status=ok
// SIG undefined FUN_1406baf30(void)

void FUN_1406baf30(undefined4 param_1,void **param_2,void **param_3,void **param_4,
                  undefined4 *param_5)

{
  void *pvVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 local_res8 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  longlong *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  longlong local_38 [2];
  
  lVar2 = DAT_146857fe0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  FWeakObjectPtr::operator=(&local_a8,0);
  local_a0 = 0;
  local_90 = (void *)0x0;
  local_88 = 0;
  local_80 = (void *)0x0;
  local_78 = 0;
  local_70 = (void *)0x0;
  local_68 = 0;
  puVar4 = (undefined8 *)FGuid::NewGuid(local_38);
  local_c8 = *puVar4;
  uStack_c0 = puVar4[1];
  local_a8 = *param_5;
  local_a4 = param_5[1];
  local_a0 = *(undefined8 *)(param_5 + 2);
  local_94 = param_1;
  if (&local_90 != param_2) {
    iVar6 = *(int *)(param_2 + 1);
    pvVar1 = *param_2;
    local_88 = CONCAT44(local_88._4_4_,iVar6);
    if ((iVar6 == 0) && (local_88._4_4_ == 0)) {
      local_88 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_90,iVar6);
      _guard_xfg_dispatch_icall_nop(local_90,pvVar1,(longlong)iVar6 * 2);
    }
  }
  if (&local_80 != param_3) {
    iVar6 = *(int *)(param_3 + 1);
    pvVar1 = *param_3;
    local_78 = CONCAT44(local_78._4_4_,iVar6);
    if ((iVar6 == 0) && (local_78._4_4_ == 0)) {
      local_78 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_80,iVar6);
      _guard_xfg_dispatch_icall_nop(local_80,pvVar1,(longlong)iVar6 * 2);
    }
  }
  if (&local_70 != param_4) {
    iVar6 = *(int *)(param_4 + 1);
    pvVar1 = *param_4;
    local_68 = CONCAT44(local_68._4_4_,iVar6);
    if ((iVar6 == 0) && (local_68._4_4_ == 0)) {
      local_68 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_70,iVar6);
      _guard_xfg_dispatch_icall_nop(local_70,pvVar1,(longlong)iVar6 * 2);
    }
  }
  local_48 = &local_c8;
  local_40 = &local_c8;
  FUN_1406ac650(lVar2 + 200,local_res8,&local_48,0);
  FUN_1406af530(lVar2,&local_48,&local_c8);
  if ((*(int *)(param_2 + 1) < 2) || (1 < (int)local_40)) {
    FUN_1406bdf10(lVar2,&local_c8);
  }
  else {
    local_58 = (longlong *)0x0;
    local_50 = 1;
    plVar5 = (longlong *)FUN_141f2eb00(local_38,param_2);
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_58,0);
    plVar3 = local_58;
    *local_58 = 0;
    *local_58 = *plVar5;
    *plVar5 = 0;
    *(int *)(local_58 + 1) = (int)plVar5[1];
    *(undefined4 *)((longlong)local_58 + 0xc) = *(undefined4 *)((longlong)plVar5 + 0xc);
    plVar5[1] = 0;
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    FUN_1406b9910(lVar2,&local_c8,&local_58);
    plVar5 = plVar3;
    for (iVar6 = (int)local_50; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 2;
    }
    if (plVar3 != (longlong *)0x0) {
      FMemory::Free(plVar3);
    }
  }
  if (local_48 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_80 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free();
  }
  FUN_1406ad5c0(&local_b8);
  if (*param_2 != (void *)0x0) {
    FMemory::Free();
  }
  if (*param_3 != (void *)0x0) {
    FMemory::Free();
  }
  if (*param_4 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406bb210 FUN_1406bb210 body=1118 status=ok
// SIG undefined FUN_1406bb210(void)

void FUN_1406bb210(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong **pplVar7;
  longlong lVar8;
  longlong lVar9;
  void *_Dst;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  void *local_c8;
  uint local_c0;
  int local_bc;
  longlong *local_b8;
  longlong *local_b0;
  void *local_a8;
  uint local_a0;
  int local_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  longlong local_88 [3];
  undefined4 local_70;
  longlong *local_68 [2];
  longlong local_58 [3];
  
  if ((DAT_146857fe0 != 0) && (1 < *(int *)(DAT_146857fe0 + 0x130))) {
    plVar5 = (longlong *)FHttpModule::Get();
    (**(code **)(*plVar5 + 0x40))(plVar5,&local_b8);
    (**(code **)(*local_b8 + 0x50))(local_b8,&DAT_14622cc90);
    plVar5 = local_b8;
    plVar6 = (longlong *)FUN_1406b2850(local_58);
    pvVar2 = DAT_14622cbd0;
    local_a8 = (void *)0x0;
    uVar10 = (uint)DAT_14622cbd8;
    if ((int)uVar10 < 2) {
      local_a8 = (void *)*plVar6;
      *plVar6 = 0;
      local_a0 = *(uint *)(plVar6 + 1);
      plVar6[1] = 0;
      local_9c = *(int *)((longlong)plVar6 + 0xc);
    }
    else {
      iVar12 = (int)plVar6[1] + -1;
      if ((int)plVar6[1] == 0) {
        iVar12 = 0;
      }
      if ((uVar10 != 0) || (iVar4 = 1, iVar12 == 0)) {
        iVar4 = 0;
      }
      local_c8 = (void *)0x0;
      local_c0 = uVar10;
      if ((uVar10 == 0) && (iVar12 + iVar4 == 0)) {
        local_bc = 0;
        uVar11 = DAT_14622cbd8;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,uVar10 + iVar12 + iVar4,0);
        local_a8 = local_c8;
        _guard_xfg_dispatch_icall_nop(local_c8,pvVar2,(longlong)(int)uVar10 * 2);
        uVar11 = (ulonglong)local_c0;
      }
      uVar10 = (uint)uVar11;
      pvVar2 = (void *)*plVar6;
      local_a0 = uVar10;
      local_9c = local_bc;
      if (iVar12 != 0) {
        local_c0 = (uint)(uVar10 == 0) + iVar12 + uVar10;
        if (local_bc < (int)local_c0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,uVar11 & 0xffffffff);
          local_a8 = local_c8;
        }
        iVar4 = local_bc;
        uVar3 = local_c0;
        _Dst = (void *)(((longlong)(int)uVar10 - (ulonglong)(uVar10 != 0)) * 2 + (longlong)local_a8)
        ;
        _guard_xfg_dispatch_icall_nop(_Dst,pvVar2,(longlong)iVar12 * 2);
        *(undefined2 *)((longlong)iVar12 * 2 + (longlong)_Dst) = 0;
        local_a0 = uVar3;
        local_9c = iVar4;
      }
    }
    (**(code **)(*plVar5 + 0x68))(plVar5,&DAT_14622cbe0,&local_a8);
    if (local_a8 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    plVar5 = local_b8;
    plVar6 = (longlong *)UNavCollisionBase::GetPrivateStaticClass();
    lVar8 = plVar6[0x1f];
    if (lVar8 == 0) {
      (**(code **)(*plVar6 + 0x368))(plVar6);
      lVar8 = plVar6[0x1f];
    }
    local_98 = (void *)0x0;
    local_90 = *(int *)(lVar8 + 0x30);
    lVar9 = (longlong)local_90;
    pvVar2 = *(void **)(lVar8 + 0x28);
    if (local_90 == 0) {
      local_8c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,local_90,0);
      _guard_xfg_dispatch_icall_nop(local_98,pvVar2,lVar9 * 2);
    }
    (**(code **)(*plVar5 + 0x68))(plVar5,&DAT_14622cc00,&local_98);
    if (local_98 != (void *)0x0) {
      FMemory::Free();
    }
    (**(code **)(*local_b8 + 0x68))(local_b8,&DAT_14622cc40,&DAT_14622cc50);
    local_88[0] = 0;
    local_88[1] = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_88,0);
    FGenericPlatformString::Memcpy(local_88[0],&DAT_14404a0a0,8);
    (**(code **)(*local_b8 + 0x48))(local_b8,local_88);
    if (local_88[0] != 0) {
      FMemory::Free();
    }
    (**(code **)(*local_b8 + 0x60))(local_b8,param_1);
    plVar5 = local_b8;
    local_88[2] = 0;
    local_70 = 0;
    if (((param_2 != local_88 + 2) && ((int)param_2[1] != 0)) &&
       (plVar6 = (longlong *)*param_2, plVar6 != (longlong *)0x0)) {
      (**(code **)(*plVar6 + 0x30))(plVar6,local_88 + 2);
    }
    pplVar7 = (longlong **)(**(code **)(*plVar5 + 0x80))(plVar5);
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    local_68[0] = plVar5;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_GetPoolName_14404c1b8;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      TBaseDelegate<FSlateBrush_const_*>::operator=(plVar5 + 1,local_88 + 2);
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar8;
      *plVar5 = (longlong)&PTR_GetPoolName_14404c200;
    }
    if (local_68 != pplVar7) {
      if (plVar5 == (longlong *)0x0) {
        if ((*(int *)(pplVar7 + 1) != 0) && (plVar6 = *pplVar7, plVar6 != (longlong *)0x0)) {
          (**(code **)(*plVar6 + 0x28))(plVar6,0);
          if (*pplVar7 != (longlong *)0x0) {
            plVar6 = (longlong *)FMemory::Realloc(*pplVar7,0,0);
            *pplVar7 = plVar6;
          }
          *(undefined4 *)(pplVar7 + 1) = 0;
        }
      }
      else {
        (**(code **)(*plVar5 + 0x30))(plVar5,pplVar7);
      }
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      local_68[0] = (longlong *)FMemory::Realloc(plVar5,0,0);
      if (local_68[0] != (longlong *)0x0) {
        FMemory::Free(local_68[0]);
      }
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_88 + 2);
    (**(code **)(*local_b8 + 0x78))();
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_b0 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2);
  return;
}



// FUNCTION 1406bb670 FUN_1406bb670 body=907 status=ok
// SIG undefined FUN_1406bb670(void)

void FUN_1406bb670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  void *_Dst;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  void *pvVar14;
  void *local_a8;
  uint local_a0;
  int local_9c;
  void *local_98;
  uint local_90;
  int local_8c;
  longlong *local_88;
  longlong *local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68 [6];
  longlong local_38 [2];
  
  plVar5 = (longlong *)FHttpModule::Get();
  (**(code **)(*plVar5 + 0x40))(plVar5,&local_88);
  uVar6 = (**(code **)(*local_88 + 0x80))();
  FUN_1406ac450(uVar6,param_1,FUN_1406b7870);
  pvVar14 = (void *)0x0;
  local_68[3] = 4;
  local_68[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
  FGenericPlatformString::Memcpy(local_68[2],&DAT_1440469e8,8);
  plVar5 = local_88;
  puVar7 = (undefined8 *)FUN_1406af240(local_38,local_68 + 2,param_3);
  pvVar2 = DAT_14622cc80;
  uVar12 = (uint)DAT_14622cc88;
  if ((int)uVar12 < 2) {
    local_98 = (void *)0x0;
    local_90 = *(uint *)(puVar7 + 1);
    lVar10 = (longlong)(int)local_90;
    pvVar2 = (void *)*puVar7;
    if (local_90 == 0) {
      local_8c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,local_90,0);
      _guard_xfg_dispatch_icall_nop(local_98,pvVar2,lVar10 * 2);
    }
  }
  else {
    iVar9 = *(int *)(puVar7 + 1) + -1;
    if (*(int *)(puVar7 + 1) == 0) {
      iVar9 = 0;
    }
    if ((uVar12 != 0) || (iVar4 = 1, iVar9 == 0)) {
      iVar4 = 0;
    }
    local_a8 = (void *)0x0;
    local_a0 = uVar12;
    if ((uVar12 == 0) && (iVar4 + iVar9 == 0)) {
      local_9c = 0;
      uVar13 = DAT_14622cc88;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a8,iVar4 + iVar9 + uVar12,0);
      pvVar14 = local_a8;
      _guard_xfg_dispatch_icall_nop(local_a8,pvVar2,(longlong)(int)uVar12 * 2);
      uVar13 = (ulonglong)local_a0;
    }
    uVar12 = (uint)uVar13;
    pvVar2 = (void *)*puVar7;
    local_98 = pvVar14;
    local_90 = uVar12;
    local_8c = local_9c;
    if (iVar9 != 0) {
      local_a0 = (uint)(uVar12 == 0) + iVar9 + uVar12;
      if (local_9c < (int)local_a0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,uVar13 & 0xffffffff);
        pvVar14 = local_a8;
      }
      iVar4 = local_9c;
      uVar3 = local_a0;
      _Dst = (void *)((longlong)pvVar14 + ((longlong)(int)uVar12 - (ulonglong)(uVar12 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(_Dst,pvVar2,(longlong)iVar9 * 2);
      *(undefined2 *)((longlong)iVar9 * 2 + (longlong)_Dst) = 0;
      local_98 = pvVar14;
      local_90 = uVar3;
      local_8c = iVar4;
    }
  }
  (**(code **)(*plVar5 + 0x50))(plVar5,&local_98);
  if (local_98 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  plVar5 = local_88;
  plVar8 = (longlong *)UNavCollisionBase::GetPrivateStaticClass();
  lVar10 = plVar8[0x1f];
  if (lVar10 == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar10 = plVar8[0x1f];
  }
  local_78 = (void *)0x0;
  local_70 = *(int *)(lVar10 + 0x30);
  lVar11 = (longlong)local_70;
  pvVar2 = *(void **)(lVar10 + 0x28);
  if (local_70 == 0) {
    local_6c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,local_70,0);
    _guard_xfg_dispatch_icall_nop(local_78,pvVar2,lVar11 * 2);
  }
  (**(code **)(*plVar5 + 0x68))(plVar5,&DAT_14622cc00,&local_78);
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
  plVar5 = local_88;
  FUN_141682af0(param_2,local_68 + 4,0);
  (**(code **)(*plVar5 + 0x68))(plVar5,&DAT_14622cbf0,local_68 + 4);
  if (local_68[4] != 0) {
    FMemory::Free();
  }
  local_68[0] = 0;
  local_68[1] = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy(local_68[0],&DAT_1440469f0,8);
  (**(code **)(*local_88 + 0x48))(local_88,local_68);
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  (**(code **)(*local_88 + 0x78))();
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_80 + 1;
    lVar10 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  return;
}



// FUNCTION 1406bba00 FUN_1406bba00 body=1493 status=ok
// SIG undefined FUN_1406bba00(void)

void FUN_1406bba00(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  longlong **pplVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  void *pvVar14;
  void *pvVar15;
  void *pvVar16;
  void *local_f8;
  uint local_f0;
  int local_ec;
  void *local_e8;
  uint local_e0;
  uint local_dc;
  void *local_d8;
  uint local_d0;
  int local_cc;
  void *local_c8;
  uint local_c0;
  uint local_bc;
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8 [2];
  void *local_98;
  int local_90;
  undefined4 local_8c;
  longlong local_88 [3];
  undefined4 local_70;
  longlong *local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  
  if (((DAT_146857fe0 != 0) && (1 < *(int *)(DAT_146857fe0 + 0x130))) &&
     (*(int *)(param_1 + 8) < 0x65)) {
    plVar4 = (longlong *)FHttpModule::Get();
    (**(code **)(*plVar4 + 0x40))(plVar4,&local_b8);
    pvVar16 = (void *)0x0;
    local_a8[1] = 4;
    local_a8[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
    FGenericPlatformString::Memcpy(local_a8[0],&DAT_14404a6c0,8);
    plVar4 = local_b8;
    puVar5 = (undefined8 *)FUN_1406af240(local_58,local_a8,param_1);
    pvVar14 = DAT_14622cc80;
    uVar12 = (uint)DAT_14622cc88;
    if ((int)uVar12 < 2) {
      local_d8 = (void *)0x0;
      local_d0 = *(uint *)(puVar5 + 1);
      lVar10 = (longlong)(int)local_d0;
      pvVar14 = (void *)*puVar5;
      if (local_d0 == 0) {
        local_cc = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d8,local_d0,0);
        _guard_xfg_dispatch_icall_nop(local_d8,pvVar14,lVar10 * 2);
      }
    }
    else {
      iVar9 = *(int *)(puVar5 + 1) + -1;
      if (*(int *)(puVar5 + 1) == 0) {
        iVar9 = 0;
      }
      if ((uVar12 != 0) || (iVar3 = 1, iVar9 == 0)) {
        iVar3 = 0;
      }
      local_f8 = (void *)0x0;
      local_f0 = uVar12;
      if ((uVar12 == 0) && (iVar9 + iVar3 == 0)) {
        local_ec = 0;
        uVar13 = DAT_14622cc88;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f8,uVar12 + iVar9 + iVar3,0);
        pvVar16 = local_f8;
        _guard_xfg_dispatch_icall_nop(local_f8,pvVar14,(longlong)(int)uVar12 * 2);
        uVar13 = (ulonglong)local_f0;
      }
      uVar12 = (uint)uVar13;
      pvVar14 = (void *)*puVar5;
      local_d8 = pvVar16;
      local_d0 = uVar12;
      local_cc = local_ec;
      if (iVar9 != 0) {
        local_f0 = (uint)(uVar12 == 0) + iVar9 + uVar12;
        if (local_ec < (int)local_f0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,uVar13 & 0xffffffff);
          local_d8 = local_f8;
        }
        iVar3 = local_ec;
        uVar2 = local_f0;
        pvVar16 = (void *)((longlong)local_d8 +
                          ((longlong)(int)uVar12 - (ulonglong)(uVar12 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar16,pvVar14,(longlong)iVar9 * 2);
        *(undefined2 *)((longlong)iVar9 * 2 + (longlong)pvVar16) = 0;
        local_d0 = uVar2;
        local_cc = iVar3;
      }
    }
    pvVar14 = (void *)0x0;
    (**(code **)(*plVar4 + 0x50))(plVar4,&local_d8);
    if (local_d8 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    if (local_a8[0] != 0) {
      FMemory::Free();
    }
    plVar4 = local_b8;
    plVar6 = (longlong *)UNavCollisionBase::GetPrivateStaticClass();
    lVar10 = plVar6[0x1f];
    if (lVar10 == 0) {
      (**(code **)(*plVar6 + 0x368))(plVar6);
      lVar10 = plVar6[0x1f];
    }
    local_98 = (void *)0x0;
    local_90 = *(int *)(lVar10 + 0x30);
    lVar11 = (longlong)local_90;
    pvVar16 = *(void **)(lVar10 + 0x28);
    if (local_90 == 0) {
      local_8c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,local_90,0);
      _guard_xfg_dispatch_icall_nop(local_98,pvVar16,lVar11 * 2);
    }
    (**(code **)(*plVar4 + 0x68))(plVar4,&DAT_14622cc00,&local_98);
    if (local_98 != (void *)0x0) {
      FMemory::Free();
    }
    plVar4 = local_b8;
    puVar7 = (ulonglong *)FUN_1406b2850(local_48);
    pvVar16 = DAT_14622cbd0;
    uVar12 = (uint)DAT_14622cbd8;
    if ((int)uVar12 < 2) {
      local_c8 = (void *)*puVar7;
      *puVar7 = 0;
      uVar13 = puVar7[1];
      local_bc = *(uint *)((longlong)puVar7 + 0xc);
      puVar7[1] = 0;
      local_c0 = (uint)uVar13;
    }
    else {
      pvVar15 = (void *)(ulonglong)((int)puVar7[1] - 1);
      if ((int)puVar7[1] == 0) {
        pvVar15 = pvVar14;
      }
      iVar9 = (int)pvVar15;
      if ((uVar12 != 0) || (iVar3 = 1, iVar9 == 0)) {
        iVar3 = 0;
      }
      local_e8 = (void *)0x0;
      local_e0 = uVar12;
      if ((uVar12 == 0) && (iVar3 + iVar9 == 0)) {
        local_dc = 0;
        uVar13 = DAT_14622cbd8;
        pvVar16 = pvVar14;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,iVar3 + iVar9 + uVar12,0);
        pvVar14 = local_e8;
        _guard_xfg_dispatch_icall_nop(local_e8,pvVar16,(longlong)(int)uVar12 * 2);
        pvVar16 = (void *)(ulonglong)local_dc;
        uVar13 = (ulonglong)local_e0;
      }
      uVar12 = (uint)uVar13;
      local_bc = (uint)pvVar16;
      pvVar16 = (void *)*puVar7;
      local_c8 = pvVar14;
      local_c0 = uVar12;
      if (iVar9 != 0) {
        local_e0 = (uint)(uVar12 == 0) + iVar9 + uVar12;
        if ((int)local_bc < (int)local_e0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,uVar13 & 0xffffffff);
          local_c8 = local_e8;
          local_bc = local_dc;
        }
        uVar2 = local_e0;
        pvVar14 = (void *)((longlong)local_c8 +
                          ((longlong)(int)uVar12 - (ulonglong)(uVar12 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar14,pvVar16,(longlong)iVar9 * 2);
        *(undefined2 *)((longlong)iVar9 * 2 + (longlong)pvVar14) = 0;
        local_c0 = uVar2;
      }
    }
    (**(code **)(*plVar4 + 0x68))(plVar4,&DAT_14622cbe0,&local_c8);
    if (local_c8 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    local_88[0] = 0;
    local_88[1] = 4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_88,0);
    FGenericPlatformString::Memcpy(local_88[0],&DAT_14404a6c8,8);
    (**(code **)(*local_b8 + 0x48))(local_b8,local_88);
    if (local_88[0] != 0) {
      FMemory::Free();
    }
    plVar4 = local_b8;
    local_88[2] = 0;
    local_70 = 0;
    if (((param_2 != local_88 + 2) && ((int)param_2[1] != 0)) &&
       (plVar6 = (longlong *)*param_2, plVar6 != (longlong *)0x0)) {
      (**(code **)(*plVar6 + 0x30))(plVar6,local_88 + 2);
    }
    pplVar8 = (longlong **)(**(code **)(*plVar4 + 0x80))(plVar4);
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    local_68[0] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = (longlong)&PTR_GetPoolName_14404c248;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      TBaseDelegate<FSlateBrush_const_*>::operator=(plVar4 + 1,local_88 + 2);
      lVar10 = FDelegateHandle::GenerateNewID();
      plVar4[4] = lVar10;
      *plVar4 = (longlong)&PTR_GetPoolName_14404c290;
    }
    if (local_68 != pplVar8) {
      if (plVar4 == (longlong *)0x0) {
        if ((*(int *)(pplVar8 + 1) != 0) && (plVar6 = *pplVar8, plVar6 != (longlong *)0x0)) {
          (**(code **)(*plVar6 + 0x28))(plVar6,0);
          if (*pplVar8 != (longlong *)0x0) {
            plVar6 = (longlong *)FMemory::Realloc(*pplVar8,0,0);
            *pplVar8 = plVar6;
          }
          *(undefined4 *)(pplVar8 + 1) = 0;
        }
      }
      else {
        (**(code **)(*plVar4 + 0x30))(plVar4,pplVar8);
      }
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,0);
      local_68[0] = (longlong *)FMemory::Realloc(plVar4,0,0);
      if (local_68[0] != (longlong *)0x0) {
        FMemory::Free(local_68[0]);
      }
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(local_88 + 2);
    (**(code **)(*local_b8 + 0x78))();
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_b0 + 1;
      lVar10 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_2);
  return;
}



// FUNCTION 1406bbfe0 FUN_1406bbfe0 body=132 status=ok
// SIG undefined FUN_1406bbfe0(void)

void FUN_1406bbfe0(longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0xa0,0);
    iVar3 = (int)(uVar1 / 0xa0);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0xa0,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 1406bc070 FUN_1406bc070 body=1332 status=ok
// SIG undefined FUN_1406bc070(void)

undefined8 FUN_1406bc070(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  int local_res20;
  undefined8 *local_128;
  longlong local_120;
  undefined8 local_118;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined1 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  char local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  
  if (*param_1 != 0) {
    local_b0 = 5;
    local_b8 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b8,0);
    FGenericPlatformString::Memcpy(local_b8,L"data",10);
    cVar5 = FUN_1416b3e60(*param_1,&local_b8,&local_128);
    if (local_b8 != 0) {
      FMemory::Free();
    }
    if ((cVar5 == '\0') || (cVar5 = FUN_1416b3e60(*local_128,param_2,&local_128), cVar5 == '\0')) {
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1);
      uVar7 = 0;
    }
    else {
      local_res20 = 1;
      local_120 = 0;
      local_118 = 0;
      FString::AppendInt(&local_120,1);
      cVar5 = FUN_1416b3e60(*local_128,&local_120,&local_128);
      while (cVar5 != '\0') {
        plVar2 = (longlong *)local_128[1];
        uVar7 = *local_128;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
        }
        local_108 = 0;
        local_100 = 0;
        local_f8 = 0;
        local_f0 = 0;
        local_e8 = 0;
        local_e0 = 0;
        local_d8 = 0;
        local_d0 = (longlong *)0x0;
        local_c8 = 0;
        local_a8 = 0;
        local_a0 = 7;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_a8,0);
        FGenericPlatformString::Memcpy(local_a8,L"active",0xe);
        cVar5 = FUN_1416b2ba0(uVar7,&local_a8);
        local_c0 = cVar5;
        if (local_a8 != 0) {
          FMemory::Free();
        }
        if (cVar5 != '\0') {
          local_98 = 0;
          local_90 = 3;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
          FGenericPlatformString::Memcpy(local_98,&DAT_1440461c8,6);
          plVar6 = (longlong *)FJsonObject::GetStringField(uVar7,local_68,&local_98);
          if (&local_108 != plVar6) {
            local_108 = *plVar6;
            *plVar6 = 0;
            local_100 = plVar6[1];
            plVar6[1] = 0;
          }
          if (local_68[0] != 0) {
            FMemory::Free();
          }
          if (local_98 != 0) {
            FMemory::Free();
          }
          local_88 = 0;
          local_80 = 8;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
          FGenericPlatformString::Memcpy(local_88,L"version",0x10);
          plVar6 = (longlong *)FJsonObject::GetStringField(uVar7,local_58,&local_88);
          if (&local_f8 != plVar6) {
            local_f8 = *plVar6;
            *plVar6 = 0;
            local_f0 = plVar6[1];
            plVar6[1] = 0;
          }
          if (local_58[0] != 0) {
            FMemory::Free();
          }
          if (local_88 != 0) {
            FMemory::Free();
          }
          local_78 = 0;
          local_70 = 5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
          FGenericPlatformString::Memcpy(local_78,L"name",10);
          plVar6 = (longlong *)FJsonObject::GetStringField(uVar7,local_48,&local_78);
          if (&local_e8 != plVar6) {
            local_e8 = *plVar6;
            *plVar6 = 0;
            local_e0 = plVar6[1];
            plVar6[1] = 0;
          }
          if (local_48[0] != 0) {
            FMemory::Free();
          }
          if (local_78 != 0) {
            FMemory::Free();
          }
          local_c8 = CONCAT44(local_c8._4_4_,1);
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_d0,0);
          FString::FString(local_d0,param_2);
          local_d8 = 1;
        }
        iVar8 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar8 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar8 + 1) {
          TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_3,iVar8);
        }
        FUN_1406ad040((longlong)iVar8 * 0x50 + *param_3,&local_108);
        plVar4 = local_d0;
        plVar6 = local_d0;
        for (iVar8 = (int)local_c8; iVar8 != 0; iVar8 = iVar8 + -1) {
          if (*plVar6 != 0) {
            FMemory::Free();
          }
          plVar6 = plVar6 + 2;
        }
        if (plVar4 != (longlong *)0x0) {
          FMemory::Free(plVar4);
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
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar2 + 1;
          lVar3 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
        }
        if (local_120 != 0) {
          FMemory::Free();
        }
        local_res20 = local_res20 + 1;
        local_120 = 0;
        local_118 = 0;
        FString::AppendInt(&local_120,local_res20);
        cVar5 = FUN_1416b3e60(*local_128,&local_120,&local_128);
      }
      if (local_120 != 0) {
        FMemory::Free();
      }
      plVar2 = (longlong *)param_1[1];
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar2 + 1;
        lVar3 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar2 + 8))(plVar2,1);
          }
        }
      }
      uVar7 = 1;
    }
    return uVar7;
  }
  plVar2 = (longlong *)param_1[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return 0;
}



// FUNCTION 1406bc5b0 FUN_1406bc5b0 body=614 status=ok
// SIG undefined FUN_1406bc5b0(void)

void FUN_1406bc5b0(void *param_1)

{
  void *pvVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *pvVar8;
  void *_Src;
  longlong *local_58;
  int local_50;
  void *local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  
  pvVar8 = (void *)0x0;
  local_58 = (longlong *)0x0;
  uVar7 = 0;
  local_50 = 0;
  plVar2 = (longlong *)UNavCollisionBase::GetPrivateStaticClass();
  lVar3 = plVar2[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar3 = plVar2[0x1f];
  }
  iVar4 = *(int *)(lVar3 + 0x60);
  pvVar6 = *(void **)(lVar3 + 0x58);
  local_48 = (void *)0x0;
  local_40 = (void *)CONCAT44(local_40._4_4_,iVar4);
  if (iVar4 == 0) {
    uVar5 = 0;
    _Src = pvVar8;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar4,0);
    _Src = local_48;
    _guard_xfg_dispatch_icall_nop(local_48,pvVar6,(longlong)iVar4 * 2);
    uVar5 = (ulonglong)local_40 & 0xffffffff;
  }
  local_40 = (void *)0x0;
  iVar4 = (int)uVar5;
  pvVar6 = pvVar8;
  local_48 = param_1;
  local_38 = iVar4;
  if (iVar4 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,uVar5,0);
    pvVar6 = local_40;
    _guard_xfg_dispatch_icall_nop(local_40,_Src,(longlong)iVar4 * 2);
    uVar7 = local_34;
  }
  iVar4 = local_38;
  pvVar1 = local_48;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 == (longlong *)0x0) {
    if (((local_50 != 0) && (local_58 != (longlong *)0x0)) &&
       ((**(code **)(*local_58 + 0x28))(local_58,0), local_58 != (longlong *)0x0)) {
      local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
    }
  }
  else {
    *plVar2 = (longlong)&PTR_GetPoolName_14404c488;
    plVar2[1] = (longlong)pvVar1;
    plVar2[2] = (longlong)pvVar6;
    *(int *)(plVar2 + 3) = iVar4;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uVar7;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_14404c4d0;
    FUN_1406b0160(plVar2,&local_58);
    pvVar6 = pvVar8;
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  local_48 = (void *)0x0;
  local_40 = (void *)((ulonglong)local_40 & 0xffffffff00000000);
  if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
    (**(code **)(*local_58 + 0x30))(local_58,&local_48);
  }
  FUN_1406b9ca0(&local_48);
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  if (local_50 != 0) {
    if (local_58 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_58 + 0x28))(local_58,0);
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
    }
    local_50 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}



// FUNCTION 1406bc820 FUN_1406bc820 body=614 status=ok
// SIG undefined FUN_1406bc820(void)

void FUN_1406bc820(void *param_1)

{
  void *pvVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *pvVar8;
  void *_Src;
  longlong *local_58;
  int local_50;
  void *local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  
  pvVar8 = (void *)0x0;
  local_58 = (longlong *)0x0;
  uVar7 = 0;
  local_50 = 0;
  plVar2 = (longlong *)UNavCollisionBase::GetPrivateStaticClass();
  lVar3 = plVar2[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar3 = plVar2[0x1f];
  }
  iVar4 = *(int *)(lVar3 + 0x60);
  pvVar6 = *(void **)(lVar3 + 0x58);
  local_48 = (void *)0x0;
  local_40 = (void *)CONCAT44(local_40._4_4_,iVar4);
  if (iVar4 == 0) {
    uVar5 = 0;
    _Src = pvVar8;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar4,0);
    _Src = local_48;
    _guard_xfg_dispatch_icall_nop(local_48,pvVar6,(longlong)iVar4 * 2);
    uVar5 = (ulonglong)local_40 & 0xffffffff;
  }
  local_40 = (void *)0x0;
  iVar4 = (int)uVar5;
  pvVar6 = pvVar8;
  local_48 = param_1;
  local_38 = iVar4;
  if (iVar4 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,uVar5,0);
    pvVar6 = local_40;
    _guard_xfg_dispatch_icall_nop(local_40,_Src,(longlong)iVar4 * 2);
    uVar7 = local_34;
  }
  iVar4 = local_38;
  pvVar1 = local_48;
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 == (longlong *)0x0) {
    if (((local_50 != 0) && (local_58 != (longlong *)0x0)) &&
       ((**(code **)(*local_58 + 0x28))(local_58,0), local_58 != (longlong *)0x0)) {
      local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
    }
  }
  else {
    *plVar2 = (longlong)&PTR_GetPoolName_14404c3f8;
    plVar2[1] = (longlong)pvVar1;
    plVar2[2] = (longlong)pvVar6;
    *(int *)(plVar2 + 3) = iVar4;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uVar7;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_14404c440;
    FUN_1406b0210(plVar2,&local_58);
    pvVar6 = pvVar8;
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  local_48 = (void *)0x0;
  local_40 = (void *)((ulonglong)local_40 & 0xffffffff00000000);
  if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
    (**(code **)(*local_58 + 0x30))(local_58,&local_48);
  }
  FUN_1406ba0e0(&local_48);
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  if (local_50 != 0) {
    if (local_58 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_58 + 0x28))(local_58,0);
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
    }
    local_50 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}



// FUNCTION 1406bca90 FUN_1406bca90 body=363 status=ok
// SIG undefined FUN_1406bca90(void)

void FUN_1406bca90(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_28;
  int local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_28 = (longlong *)0x0;
  local_20 = 0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20,0);
  if (plVar1 == (longlong *)0x0) {
    if (((local_20 != 0) && (local_28 != (longlong *)0x0)) &&
       ((**(code **)(*local_28 + 0x28))(local_28,0), local_28 != (longlong *)0x0)) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
  }
  else {
    plVar1[1] = param_1;
    *plVar1 = (longlong)&PTR_GetPoolName_14404c368;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_14404c3b0;
    FUN_1406b00c0(plVar1,&local_28);
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    lVar2 = FMemory::Realloc(plVar1,0,0);
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  local_18 = 0;
  local_10 = 0;
  if ((local_20 != 0) && (local_28 != (longlong *)0x0)) {
    (**(code **)(*local_28 + 0x30))(local_28,&local_18);
  }
  FUN_1406ba520(param_1 + 0xd0,&local_18);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 1406bcc00 FUN_1406bcc00 body=733 status=ok
// SIG undefined FUN_1406bcc00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1406bcc00(longlong param_1)

{
  longlong lVar1;
  short *psVar2;
  char cVar3;
  int iVar4;
  BOOL BVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  ulonglong local_198;
  uint local_190;
  int local_18c;
  longlong *local_188;
  undefined8 local_180;
  uint local_178;
  undefined4 local_174;
  longlong local_170;
  ulonglong local_168;
  undefined1 local_158 [256];
  longlong local_58;
  short *local_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  if (*(char *)(param_1 + 0x30) != '\0') {
    do {
      plVar7 = *(longlong **)(param_1 + 0x18);
      local_198 = 0;
      local_18c = 0;
      uVar10 = 0;
      uVar14 = 0;
      if (plVar7 != (longlong *)0x0) {
        do {
          cVar3 = (**(code **)(*plVar7 + 0x30))(plVar7,&local_178);
          if (cVar3 == '\0') break;
          uVar6 = 0xffe3;
          if (local_178 < 0xffe4) {
            uVar6 = local_178;
          }
          uVar6 = uVar6 + 1;
          iVar9 = (int)uVar10;
          if (iVar9 < (int)uVar6) {
            uVar11 = (ulonglong)uVar6;
            local_190 = uVar6;
            if (local_18c < (int)uVar6) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_198,uVar10);
LAB_1406bcce5:
              uVar11 = (ulonglong)local_190;
              uVar14 = local_198;
            }
          }
          else {
            uVar11 = uVar10;
            if (((int)uVar6 < iVar9) && (iVar4 = iVar9 - uVar6, iVar4 != 0)) {
              iVar8 = (iVar9 - iVar4) - uVar6;
              if (iVar8 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)(int)uVar6 + uVar14),
                           (void *)((longlong)(int)(iVar4 + uVar6) + uVar14),(longlong)iVar8);
              }
              local_190 = iVar9 - iVar4;
              TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_198);
              goto LAB_1406bcce5;
            }
          }
          iVar9 = (int)uVar11 + -1;
          local_174 = 0;
          local_1a8 = 0;
          (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))
                    (*(longlong **)(param_1 + 0x18),uVar14,iVar9,&local_174);
          if (0 < (int)uVar11) {
            *(undefined1 *)((longlong)iVar9 + uVar14) = 0;
            local_58 = 0;
            if (uVar14 == 0) {
              local_48 = 0;
              local_50 = (short *)0x0;
            }
            else {
              lVar13 = -1;
              do {
                lVar13 = lVar13 + 1;
              } while (*(char *)(uVar14 + lVar13) != '\0');
              FUN_1406b4f20(local_158,uVar14,lVar13,1);
            }
            psVar2 = local_50;
            local_168 = 0;
            local_170 = 0;
            if ((local_50 != (short *)0x0) && (*local_50 != 0)) {
              lVar13 = -1;
              do {
                lVar1 = lVar13 + 1;
                lVar13 = lVar13 + 1;
              } while (local_50[lVar1] != 0);
              uVar6 = (int)lVar13 + 1;
              local_168 = (ulonglong)uVar6;
              if (0 < (int)uVar6) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_170,0);
              }
              FGenericPlatformString::Memcpy(local_170,psVar2,(longlong)(int)uVar6 * 2);
            }
            local_188 = (longlong *)0x0;
            local_180 = 0;
            FString::ParseIntoArrayLines(&local_170,&local_188,1);
            do {
              BVar5 = TryEnterCriticalSection
                                ((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 8) + 0x30));
            } while (BVar5 == 0);
            plVar12 = local_188 + (longlong)(int)local_180 * 2;
            for (plVar7 = local_188; plVar7 != plVar12; plVar7 = plVar7 + 2) {
              FUN_1406b7dd0(param_1,plVar7);
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 8) + 0x30));
            plVar7 = local_188;
            for (iVar9 = (int)local_180; iVar9 != 0; iVar9 = iVar9 + -1) {
              if (*plVar7 != 0) {
                FMemory::Free();
              }
              plVar7 = plVar7 + 2;
            }
            if (local_188 != (longlong *)0x0) {
              FMemory::Free(local_188);
            }
            if (local_170 != 0) {
              FMemory::Free();
            }
            if (local_58 != 0) {
              FMemory::Free();
            }
          }
          plVar7 = *(longlong **)(param_1 + 0x18);
          uVar10 = uVar11;
        } while (plVar7 != (longlong *)0x0);
        if (uVar14 != 0) {
          FMemory::Free(uVar14);
        }
      }
    } while (*(char *)(param_1 + 0x30) != '\0');
  }
  return 0;
}



// FUNCTION 1406bcee0 FUN_1406bcee0 body=506 status=ok
// SIG undefined FUN_1406bcee0(void)

void FUN_1406bcee0(undefined2 **param_1,longlong *param_2)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 local_98 [16];
  longlong local_88 [3];
  undefined2 *local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30 [8];
  undefined8 local_28;
  
  local_70 = (undefined2 *)0x0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  FWeakObjectPtr::operator=(local_30,0);
  local_28 = 0;
  if (&local_70 != param_1) {
    iVar7 = *(int *)(param_1 + 1);
    puVar5 = *param_1;
    local_68 = CONCAT44(local_68._4_4_,iVar7);
    if ((iVar7 == 0) && (local_68._4_4_ == 0)) {
      local_68 = 0;
      local_68._0_4_ = 0;
      goto LAB_1406bcf7e;
    }
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_70,iVar7);
    _guard_xfg_dispatch_icall_nop(local_70,puVar5,(longlong)iVar7 * 2);
  }
LAB_1406bcf7e:
  lVar10 = *(longlong *)(DAT_146857ff0 + 0x68);
  lVar11 = (longlong)*(int *)(DAT_146857ff0 + 0x70) * 0x58 + lVar10;
  if (lVar10 != lVar11) {
    puVar5 = &DAT_143f3eda8;
    do {
      puVar8 = &DAT_143f3eda8;
      if ((int)local_68 != 0) {
        puVar8 = local_70;
      }
      if (*(int *)(lVar10 + 0x10) == 0) {
        psVar3 = &DAT_143f3eda8;
      }
      else {
        psVar3 = *(short **)(lVar10 + 8);
      }
      lVar9 = (longlong)puVar8 - (longlong)psVar3;
      do {
        sVar1 = *psVar3;
        sVar2 = *(short *)((longlong)psVar3 + lVar9);
        if (sVar1 != sVar2) break;
        psVar3 = psVar3 + 1;
      } while (sVar2 != 0);
      if (sVar1 == sVar2) {
        if ((int)param_2[1] == 0) {
          puVar8 = &DAT_143f3eda8;
        }
        else {
          puVar8 = (undefined2 *)*param_2;
        }
        puVar4 = (undefined8 *)FString::ToLower(param_1,local_88);
        if (*(int *)(puVar4 + 1) != 0) {
          puVar5 = (undefined2 *)*puVar4;
        }
        FString::PrintfImpl(local_98,L"PRIVMSG #%s :%s",puVar5,puVar8);
        FUN_1406bda00(DAT_146857ff0,local_98);
        if (local_88[0] != 0) {
          FMemory::Free();
        }
        break;
      }
      lVar10 = lVar10 + 0x58;
    } while (lVar10 != lVar11);
  }
  TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>::
  ~TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>(&local_40);
  plVar6 = local_50;
  for (iVar7 = (int)local_48; iVar7 != 0; iVar7 = iVar7 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_50 != (longlong *)0x0) {
    FMemory::Free(local_50);
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_70 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (*param_1 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406bd0e0 FUN_1406bd0e0 body=1007 status=ok
// SIG undefined FUN_1406bd0e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406bd0e0(longlong param_1)

{
  void *_Src;
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_178 [32];
  longlong *local_158;
  ulonglong local_150;
  void *local_148;
  int local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong uVar8;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  if ((1 < *(int *)(param_1 + 0x38)) && (1 < *(int *)(param_1 + 0x28))) {
    plVar2 = (longlong *)UNavCollisionBase::GetPrivateStaticClass();
    lVar3 = plVar2[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar3 = plVar2[0x1f];
    }
    puVar5 = (undefined8 *)0x0;
    local_148 = (void *)0x0;
    local_140 = *(int *)(lVar3 + 0x70);
    lVar6 = (longlong)local_140;
    _Src = *(void **)(lVar3 + 0x68);
    if (local_140 == 0) {
      local_13c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_148,local_140,0);
      _guard_xfg_dispatch_icall_nop(local_148,_Src,lVar6 * 2);
    }
    local_e8 = 0;
    local_138 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_130 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0x400;
    local_e0 = 0;
    puVar4 = (undefined8 *)operator_new(0x28);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0x10000;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar5 = puVar4;
    }
    local_b8 = &local_a8;
    local_a8 = 0;
    local_58 = &local_48;
    local_48 = 0;
    local_98 = &local_88;
    local_88 = 0;
    local_78 = &local_68;
    local_a0 = 0x3000000000000;
    local_40 = 0x3000000000000;
    local_80 = 0x3000000000000;
    local_68 = 0;
    local_60 = 0x4000000000000;
    local_128 = puVar5;
    local_120 = puVar5;
    local_b0 = puVar5;
    local_90 = puVar5;
    local_70 = puVar5;
    local_50 = puVar5;
    FUN_142ab5020(&local_78,param_1 + 0x30);
    FUN_1406b2950(param_1,&local_158);
    uVar8 = local_150;
    local_d8 = &local_c8;
    local_d0 = local_90;
    local_c0 = 0x4000000000000;
    local_c8 = 0;
    uVar7 = (uint)local_150;
    if (0 < (int)uVar7) {
      FUN_142ab5fa0(&local_d8,local_150 & 0xffffffff);
    }
    plVar1 = local_158;
    for (plVar2 = local_158; plVar2 != local_158 + (longlong)(int)uVar7 * 2; plVar2 = plVar2 + 2) {
      FUN_142ab5020(&local_d8,plVar2);
    }
    UE4Function_Private::
    TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
    ::Call(&local_98,&DAT_144049204,&local_d8);
    FUN_142ab6050(&local_98,"active",1);
    UE4Function_Private::
    TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
    ::Call(&local_58,"_metadata",&local_98);
    FUN_142ab64b0(&local_b8,"token",param_1 + 0x20);
    UE4Function_Private::
    TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
    ::Call(&local_b8,"broadcaster_ids",&local_78);
    FUN_142ab64b0(&local_b8,"game_id",&local_148);
    local_158 = (longlong *)0x0;
    local_150 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,0);
    FGenericPlatformString::Memcpy(local_158,L"prod",10);
    FUN_142ab64b0(&local_b8,&DAT_144046354,&local_158);
    if (local_158 != (longlong *)0x0) {
      FMemory::Free();
    }
    UE4Function_Private::
    TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
    ::Call(&local_b8,&DAT_144049bf4,&local_58);
    plVar2 = plVar1;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      local_d8 = &local_c8;
      local_158 = (longlong *)0x0;
      local_d0 = local_b0;
      local_150 = 0;
      local_c0 = 0x3000000000000;
      local_c8 = 0;
      UE4Function_Private::
      TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
      ::Call(&local_d8,"connect",&local_b8);
      FUN_142ab6640(&local_d8,&local_158);
      (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))
                (*(longlong **)(param_1 + 0x70),&local_158);
      if (local_158 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    while (uVar7 != 0) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      uVar7 = (int)uVar8 - 1;
      uVar8 = (ulonglong)uVar7;
      plVar2 = plVar2 + 2;
    }
    if (plVar1 != (longlong *)0x0) {
      FMemory::Free(plVar1);
    }
    rapidjson::
    GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
    ::
    ~GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
              (&local_138);
    if (local_148 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1406bd4d0 FUN_1406bd4d0 body=703 status=ok
// SIG undefined FUN_1406bd4d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406bd4d0(longlong param_1)

{
  void *pvVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  void *_Memory;
  longlong *plVar5;
  uint uVar6;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  ulonglong local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong uVar7;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if ((*(longlong *)(param_1 + 0x70) != 0) && (*(char *)(param_1 + 0x40) != '\0')) {
    plVar4 = (longlong *)operator_new(0x28);
    plVar5 = (longlong *)0x0;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0x10000;
      plVar4[2] = 0;
      plVar4[3] = 0;
      plVar4[4] = 0;
      plVar5 = plVar4;
    }
    local_58 = &local_48;
    local_48 = 0;
    local_40 = 0x3000000000000;
    local_50 = plVar5;
    FUN_1406b2950(param_1,&local_c8);
    uVar7 = local_c0;
    plVar3 = local_c8;
    local_98 = &local_88;
    uVar6 = (uint)local_c0;
    local_88 = 0;
    local_80 = 0x4000000000000;
    local_90 = plVar5;
    for (plVar4 = local_c8; plVar4 != local_c8 + (longlong)(int)uVar6 * 2; plVar4 = plVar4 + 2) {
      FUN_142ab5020(&local_98,plVar4);
    }
    local_78 = &local_68;
    local_68 = 0;
    local_b8 = &local_a8;
    local_a0 = 0x4000000000000;
    local_60 = 0x4000000000000;
    local_a8 = 0;
    local_c8 = (longlong *)0x0;
    local_c0 = 0xf;
    local_b0 = plVar5;
    local_70 = plVar5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
    FGenericPlatformString::Memcpy(local_c8,L"_metadata.tags",0x1e);
    FUN_142ab5020(&local_b8,&local_c8);
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free();
    }
    FUN_142ab4ae0(&local_b8,&local_98);
    FUN_142ab4ae0(&local_78,&local_b8);
    UE4Function_Private::
    TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
    ::Call(&local_58,"delta",&local_78);
    plVar4 = plVar3;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      local_c8 = (longlong *)0x0;
      local_c0 = 0;
      FUN_142ab6640(&local_58,&local_c8);
      (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))
                (*(longlong **)(param_1 + 0x70),&local_c8);
      if (local_c8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    while (uVar6 != 0) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      uVar6 = (int)uVar7 - 1;
      uVar7 = (ulonglong)uVar6;
      plVar4 = plVar4 + 2;
    }
    if (plVar3 != (longlong *)0x0) {
      FMemory::Free(plVar3);
    }
    if (plVar5 != (longlong *)0x0) {
      _Memory = (void *)*plVar5;
      if ((void *)*plVar5 != (void *)0x0) {
        do {
          if (_Memory == (void *)plVar5[2]) break;
          pvVar1 = *(void **)((longlong)_Memory + 0x10);
          free(_Memory);
          *plVar5 = (longlong)pvVar1;
          _Memory = pvVar1;
        } while (pvVar1 != (void *)0x0);
        lVar2 = *plVar5;
        if ((lVar2 != 0) && (lVar2 == plVar5[2])) {
          *(undefined8 *)(lVar2 + 8) = 0;
        }
      }
      FMemory::operator_delete(plVar5[4],1);
      FMemory::operator_delete(plVar5,0x28);
    }
    free((void *)0x0);
    FMemory::operator_delete(0,1);
  }
  return;
}



// FUNCTION 1406bd790 FUN_1406bd790 body=622 status=ok
// SIG undefined FUN_1406bd790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406bd790(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  char *pcVar4;
  bool bVar5;
  undefined1 auStack_128 [32];
  longlong local_108 [4];
  undefined4 local_e8;
  longlong local_e0 [3];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  puVar2 = (undefined8 *)0x0;
  local_e8 = 0;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    if (*(longlong *)(param_1 + 8) != 0) {
      TBaseDelegate<void>::ExecuteIfBound(*(longlong *)(param_1 + 8) + 0x68);
    }
  }
  else {
    local_c8 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_c0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0x400;
    local_78 = 0;
    local_70 = 0;
    puVar1 = (undefined8 *)operator_new(0x28);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0x10000;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar2 = puVar1;
    }
    local_68 = &local_58;
    plVar3 = *(longlong **)(param_1 + 8);
    local_58 = 0;
    local_50 = 0x3000000000000;
    bVar5 = plVar3 == (longlong *)0x0;
    local_b8 = puVar2;
    local_b0 = puVar2;
    local_60 = puVar2;
    if (bVar5) {
      local_108[0] = 0;
      local_108[1] = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108,0);
      FGenericPlatformString::Memcpy(local_108[0],L"error",0xc);
      plVar3 = local_108;
    }
    else {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x28))(plVar3,local_e0);
    }
    FUN_142ab64b0(&local_68,"channel_id",plVar3);
    if ((bVar5) && (local_108[0] != 0)) {
      FMemory::Free();
    }
    if ((!bVar5) && (local_e0[0] != 0)) {
      FMemory::Free();
    }
    if (param_3 == '\0') {
      FUN_142ab64b0(&local_68,&DAT_144047c94,param_2);
      pcVar4 = "payload";
    }
    else {
      FUN_142ab64b0(param_4,"payload_type",param_2);
      local_108[0] = 0;
      local_108[1] = 0x18;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108,0);
      FGenericPlatformString::Memcpy(local_108[0],L"GenericExtensionMessage",0x30);
      FUN_142ab64b0(&local_68,&DAT_144047b94,local_108);
      if (local_108[0] != 0) {
        FMemory::Free();
      }
      pcVar4 = "payload";
    }
    UE4Function_Private::
    TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
    ::Call(&local_68,pcVar4,param_4);
    local_108[2] = 0;
    local_108[3] = 0;
    FUN_142ab6640(&local_68,local_108 + 2);
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))
              (*(longlong **)(param_1 + 0x10),local_108 + 2);
    if (local_108[2] != 0) {
      FMemory::Free();
    }
    rapidjson::
    GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
    ::
    ~GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
              (&local_c8);
  }
  return;
}



// FUNCTION 1406bda00 FUN_1406bda00 body=578 status=ok
// SIG undefined FUN_1406bda00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406bda00(longlong param_1,longlong *param_2)

{
  uint uVar1;
  void *_Dst;
  int iVar2;
  undefined1 *_Src;
  int iVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined2 *puVar7;
  int iVar8;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined4 local_e8 [4];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  uint local_48;
  ulonglong local_38;
  ulonglong uVar6;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  puVar4 = (undefined1 *)0x0;
  local_f8 = (undefined1 *)0x0;
  local_f0 = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
  _Src = local_f8;
  FGenericPlatformString::Memcpy(local_f8,&DAT_144047410,6);
  if (((int)local_f0 != 0) && (iVar8 = (int)local_f0 + -1, iVar8 != 0)) {
    iVar2 = (int)param_2[1];
    iVar3 = (uint)(iVar2 == 0) + iVar2 + iVar8;
    *(int *)(param_2 + 1) = iVar3;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    _Dst = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar8 * 2);
    *(undefined2 *)((longlong)iVar8 * 2 + (longlong)_Dst) = 0;
  }
  if (_Src != (undefined1 *)0x0) {
    FMemory::Free(_Src);
  }
  local_e8[0] = 0;
  if ((int)param_2[1] == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  local_58 = (undefined1 *)0x0;
  if (puVar7 == (undefined2 *)0x0) {
    local_48 = 0;
    local_50 = (undefined1 *)0x0;
  }
  else {
    uVar5 = 0xffffffffffffffff;
    do {
      uVar6 = uVar5;
      uVar5 = uVar6 + 1;
    } while (puVar7[uVar5] != 0);
    local_f8 = (undefined1 *)((ulonglong)local_f8 & 0xffffffff00000000);
    FTCHARToUTF8_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
              (&local_f8,(int)uVar5 * 4,puVar7,uVar5 & 0xffffffff);
    local_48 = (uint)local_f8;
    uVar1 = (uint)local_f8 + 1;
    if ((0x80 < uVar1) && (uVar1 != 0)) {
      puVar4 = (undefined1 *)FMemory::Realloc(0,(longlong)(int)uVar1,0);
      local_58 = puVar4;
    }
    local_f8 = local_d8;
    if (puVar4 != (undefined1 *)0x0) {
      local_f8 = puVar4;
    }
    local_50 = local_f8;
    FTCHARToUTF8_Convert::Convert_Impl<char_*>(&local_f8,uVar1,puVar7,(int)uVar6 + 2);
    puVar4 = (undefined1 *)(ulonglong)local_48;
  }
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x50))
            (*(longlong **)(param_1 + 0x90),local_50,puVar4,local_e8);
  if (local_58 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406bdc50 FUN_1406bdc50 body=702 status=ok
// SIG undefined FUN_1406bdc50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1406bdc50(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 auStack_148 [32];
  longlong *local_128;
  ulonglong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong uVar7;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  if ((*(longlong *)(param_1 + 0x70) != 0) && (*(char *)(param_1 + 0x40) != '\0')) {
    puVar3 = (undefined8 *)0x0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_118 = 0;
    local_110 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0x400;
    puVar2 = (undefined8 *)operator_new(0x28);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0x10000;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar3 = puVar2;
    }
    local_78 = &local_68;
    local_68 = 0;
    local_48 = 0;
    local_98 = &local_88;
    local_60 = 0x3000000000000;
    local_40 = 0x3000000000000;
    local_88 = 0;
    local_80 = 0x3000000000000;
    local_108 = puVar3;
    local_100 = puVar3;
    local_90 = puVar3;
    local_70 = puVar3;
    local_58 = &local_48;
    local_50 = puVar3;
    FUN_1406b2950(param_1,&local_128);
    uVar7 = local_120;
    local_b8 = &local_a8;
    local_b0 = local_90;
    local_a8 = 0;
    local_a0 = 0x4000000000000;
    uVar6 = (uint)local_120;
    if (0 < (int)uVar6) {
      FUN_142ab5fa0(&local_b8,local_120 & 0xffffffff);
    }
    plVar1 = local_128;
    plVar5 = local_128 + (longlong)(int)uVar6 * 2;
    for (plVar4 = local_128; plVar4 != plVar5; plVar4 = plVar4 + 2) {
      FUN_142ab5020(&local_b8,plVar4);
    }
    UE4Function_Private::
    TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
    ::Call(&local_98,&DAT_144049f50,&local_b8);
    FUN_142ab6050(&local_98,"active",1);
    UE4Function_Private::
    TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
    ::Call(&local_58,"_metadata",&local_98);
    UE4Function_Private::
    TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
    ::Call(&local_78,&DAT_144049f6c,&local_58);
    plVar4 = plVar1;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      local_b8 = &local_a8;
      local_128 = (longlong *)0x0;
      local_b0 = local_70;
      local_120 = 0;
      local_a0 = 0x3000000000000;
      local_a8 = 0;
      UE4Function_Private::
      TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
      ::Call(&local_b8,"refresh",&local_78);
      FUN_142ab6640(&local_b8,&local_128);
      (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))
                (*(longlong **)(param_1 + 0x70),&local_128);
      if (local_128 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    while (uVar6 != 0) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      uVar6 = (int)uVar7 - 1;
      uVar7 = (ulonglong)uVar6;
      plVar4 = plVar4 + 2;
    }
    if (plVar1 != (longlong *)0x0) {
      FMemory::Free(plVar1);
    }
    rapidjson::
    GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
    ::
    ~GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
              (&local_118);
  }
  return;
}



// FUNCTION 1406bdf10 FUN_1406bdf10 body=482 status=ok
// SIG undefined FUN_1406bdf10(void)

void FUN_1406bdf10(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *local_68;
  longlong *local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48 [4];
  longlong local_28 [2];
  
  plVar3 = (longlong *)FHttpModule::Get();
  (**(code **)(*plVar3 + 0x40))(plVar3,&local_68);
  uVar4 = (**(code **)(*local_68 + 0x80))();
  FUN_1406ac450(uVar4,param_1,FUN_1406b72a0);
  plVar3 = local_68;
  lVar6 = *local_68;
  uVar4 = FUN_1406af530(param_1,local_28,param_2);
  (**(code **)(lVar6 + 0x50))(plVar3,uVar4);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  plVar3 = local_68;
  plVar5 = (longlong *)UNavCollisionBase::GetPrivateStaticClass();
  lVar6 = plVar5[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 0x368))(plVar5);
    lVar6 = plVar5[0x1f];
  }
  local_58 = (void *)0x0;
  local_50 = *(int *)(lVar6 + 0x30);
  lVar7 = (longlong)local_50;
  _Src = *(void **)(lVar6 + 0x28);
  if (local_50 == 0) {
    local_4c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
    _guard_xfg_dispatch_icall_nop(local_58,_Src,lVar7 * 2);
  }
  (**(code **)(*plVar3 + 0x68))(plVar3,&DAT_14622cc00,&local_58);
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  plVar3 = local_68;
  FUN_141682af0(param_2,local_48 + 2,0);
  (**(code **)(*plVar3 + 0x68))(plVar3,&DAT_14622cbf0,local_48 + 2);
  if (local_48[2] != 0) {
    FMemory::Free();
  }
  local_48[0] = 0;
  local_48[1] = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],&DAT_1440465a0,8);
  (**(code **)(*local_68 + 0x48))(local_68,local_48);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  (**(code **)(*local_68 + 0x78))();
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_60 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return;
}



// FUNCTION 1406be100 FUN_1406be100 body=459 status=ok
// SIG undefined FUN_1406be100(void)

void FUN_1406be100(longlong param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined1 uVar2;
  
  FString::operator=(param_1 + 0x50);
  *(undefined1 *)(param_1 + 0x60) = param_3;
  *(undefined4 *)(param_1 + 100) = param_4;
  iVar1 = FUN_141592950(param_5,L"Sanctuary3",1,0,0xffffffff);
  if (iVar1 == -1) {
    iVar1 = FUN_141592950(param_5,L"Raid1",1,0,0xffffffff);
    if ((iVar1 == -1) && (iVar1 = FUN_141592950(param_5,L"Takedown",1,0,0xffffffff), iVar1 == -1)) {
      iVar1 = FUN_141592950(param_5,L"ProvingGrounds",1,0,0xffffffff);
      if (iVar1 == -1) {
        iVar1 = FUN_141592950(param_5,L"Slaughters",1,0,0xffffffff);
        if (iVar1 == -1) {
          iVar1 = FUN_141592950(param_5,L"FrostSite",1,0,0xffffffff);
          if (iVar1 == -1) {
            iVar1 = FUN_141592950(param_5,L"Dandelion",1,0,0xffffffff);
            if (iVar1 == -1) {
              iVar1 = FUN_141592950(param_5,L"Hibiscus",1,0,0xffffffff);
              if (iVar1 == -1) {
                iVar1 = FUN_141592950(param_5,L"Geranium",1,0,0xffffffff);
                if (iVar1 == -1) {
                  iVar1 = FUN_141592950(param_5,L"Daffodil",1,0,0xffffffff);
                  uVar2 = 1;
                  if (iVar1 != -1) {
                    uVar2 = 8;
                  }
                }
                else {
                  uVar2 = 7;
                }
              }
              else {
                uVar2 = 6;
              }
            }
            else {
              uVar2 = 5;
            }
          }
          else {
            uVar2 = 9;
          }
        }
        else {
          uVar2 = 3;
        }
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 4;
    }
    *(undefined1 *)(param_1 + 0x68) = uVar2;
  }
  FUN_1406bd4d0(param_1);
  return;
}



// FUNCTION 1406be2d0 FUN_1406be2d0 body=325 status=ok
// SIG undefined FUN_1406be2d0(void)

void FUN_1406be2d0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong local_28;
  longlong *local_20;
  longlong local_18 [2];
  
  plVar1 = (longlong *)(param_1 + 0x70);
  if ((longlong *)*plVar1 == (longlong *)0x0) {
    *(undefined1 *)(param_1 + 0x40) = 0;
    return;
  }
  uVar7 = (**(code **)(*(longlong *)*plVar1 + 0x30))();
  FUN_140483870(uVar7,param_1);
  uVar7 = (**(code **)(*(longlong *)*plVar1 + 0x38))();
  FUN_140483870(uVar7,param_1);
  uVar7 = (**(code **)(*(longlong *)*plVar1 + 0x48))();
  FUN_140483870(uVar7,param_1);
  uVar7 = (**(code **)(*(longlong *)*plVar1 + 0x40))();
  FUN_140483870(uVar7,param_1);
  cVar6 = (**(code **)(*(longlong *)*plVar1 + 0x18))();
  if (cVar6 != '\0') {
    local_18[0] = 0;
    local_18[1] = 0;
    (**(code **)(*(longlong *)*plVar1 + 0x10))((longlong *)*plVar1,1000,local_18);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  local_20 = (longlong *)0x0;
  if (plVar1 != &local_28) {
    *plVar1 = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x78,&local_20);
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
      *(undefined1 *)(param_1 + 0x40) = 0;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 1406be420 FUN_1406be420 body=315 status=ok
// SIG undefined FUN_1406be420(void)

void FUN_1406be420(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  longlong local_28;
  longlong *local_20;
  longlong local_18 [2];
  
  plVar1 = (longlong *)(param_1 + 0x10);
  if ((longlong *)*plVar1 != (longlong *)0x0) {
    uVar7 = (**(code **)(*(longlong *)*plVar1 + 0x30))();
    FUN_140483870(uVar7,param_1);
    uVar7 = (**(code **)(*(longlong *)*plVar1 + 0x38))();
    FUN_140483870(uVar7,param_1);
    uVar7 = (**(code **)(*(longlong *)*plVar1 + 0x48))();
    FUN_140483870(uVar7,param_1);
    uVar7 = (**(code **)(*(longlong *)*plVar1 + 0x40))();
    FUN_140483870(uVar7,param_1);
    cVar6 = (**(code **)(*(longlong *)*plVar1 + 0x18))();
    if (cVar6 != '\0') {
      local_18[0] = 0;
      local_18[1] = 0;
      (**(code **)(*(longlong *)*plVar1 + 0x10))((longlong *)*plVar1,1000,local_18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
    }
    local_20 = (longlong *)0x0;
    if (plVar1 != &local_28) {
      *plVar1 = 0;
      local_28 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x18,&local_20);
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
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x70))();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 1406be570 FUN_1406be570 body=123 status=ok
// SIG undefined FUN_1406be570(void)

void FUN_1406be570(longlong param_1,float param_2)

{
  float fVar1;
  
  if (0.0 < *(float *)(param_1 + 0x44)) {
    fVar1 = *(float *)(param_1 + 0x44) - param_2;
    *(float *)(param_1 + 0x44) = fVar1;
    if (fVar1 <= 0.0) {
      if (*(longlong *)(param_1 + 0x70) == 0) {
        FUN_1406b5b10();
      }
      else {
        FUN_1406bd0e0();
      }
    }
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    param_2 = *(float *)(param_1 + 0x48) - param_2;
    *(float *)(param_1 + 0x48) = param_2;
    if (param_2 <= 0.0) {
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 8);
      FUN_1406bd4d0(param_1);
    }
  }
  return;
}



// FUNCTION 1406be5f0 FUN_1406be5f0 body=662 status=ok
// SIG undefined FUN_1406be5f0(void)

void FUN_1406be5f0(longlong param_1)

{
  BOOL BVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  undefined8 local_res8;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (BVar1 != 0) {
    uVar2 = FDateTime::Now(&local_res8);
    lVar3 = FDateTime::ToUnixTimestamp(uVar2);
    uVar7 = 0;
    uVar8 = uVar7;
    if (0 < *(int *)(param_1 + 0x38)) {
      do {
        if (lVar3 - *(longlong *)(uVar8 + *(longlong *)(param_1 + 0x30)) < 10) {
          uVar7 = (ulonglong)((int)uVar7 + 1);
          uVar8 = uVar8 + 0x58;
        }
        else {
          FUN_1406b9450(param_1 + 0x30,uVar7,1,1);
        }
      } while ((int)uVar7 < *(int *)(param_1 + 0x38));
    }
    lVar3 = *(longlong *)(param_1 + 0x40);
    lVar11 = (longlong)*(int *)(param_1 + 0x48) * 0x58 + lVar3;
    if (lVar3 != lVar11) {
      plVar12 = (longlong *)(lVar3 + 0x50);
      do {
        uVar8 = (ulonglong)(int)plVar12[-2];
        plVar10 = (longlong *)plVar12[-3];
        plVar9 = plVar10 + uVar8 * 6;
        if (plVar10 != plVar9) {
          local_res8 = 0;
          do {
            if ((*plVar12 == 0) || (lVar4 = FWeakObjectPtr::Get(plVar12 + -1), lVar4 == 0)) {
              bVar13 = false;
            }
            else {
              lVar4 = UObject::FindFunction(lVar4,*plVar12);
              bVar13 = lVar4 != 0;
            }
            if (bVar13) {
              local_68 = 0;
              local_60 = 0;
              local_58 = 0;
              local_50 = 0;
              local_48 = 0;
              local_40 = 0;
              FString::operator=(&local_68,plVar10);
              FString::operator=(&local_58,plVar10 + 2);
              FString::operator=(&local_48,plVar10 + 4);
              plVar5 = (longlong *)FWeakObjectPtr::Get(plVar12 + -1);
              uVar2 = FUN_14178ac60(plVar5,*plVar12);
              (**(code **)(*plVar5 + 0x208))(plVar5,uVar2,&local_68);
              if (local_48 != 0) {
                FMemory::Free();
              }
              if (local_58 != 0) {
                FMemory::Free();
              }
              if (local_68 != 0) {
                FMemory::Free();
              }
            }
            plVar10 = plVar10 + 6;
          } while (plVar10 != plVar9);
          uVar8 = (ulonglong)*(uint *)(plVar12 + -2);
          plVar10 = (longlong *)plVar12[-3];
        }
        uVar6 = (uint)uVar8;
        while (uVar6 != 0) {
          if (plVar10[4] != 0) {
            FMemory::Free();
          }
          if (plVar10[2] != 0) {
            FMemory::Free();
          }
          if (*plVar10 != 0) {
            FMemory::Free();
          }
          plVar10 = plVar10 + 6;
          uVar6 = (int)uVar8 - 1;
          uVar8 = (ulonglong)uVar6;
        }
        *(undefined4 *)(plVar12 + -2) = 0;
        if (*(int *)((longlong)plVar12 + -0xc) != 0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeTo(plVar12 + -3,0);
        }
        lVar3 = lVar3 + 0x58;
        plVar12 = plVar12 + 0xb;
      } while (lVar3 != lVar11);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  }
  return;
}



// FUNCTION 1406be890 ToUnixTimestamp body=93 status=ok
// SIG undefined ToUnixTimestamp(void)

longlong FDateTime::ToUnixTimestamp(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 local_res8 [32];
  
  plVar1 = (longlong *)FDateTime(local_res8,0x7b2,1,1,0,0,0,0);
  lVar2 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(*param_1 - *plVar1),8) +
          (*param_1 - *plVar1);
  return (lVar2 >> 0x17) - (lVar2 >> 0x3f);
}



// FUNCTION 1406be8f0 FUN_1406be8f0 body=47 status=ok
// SIG undefined FUN_1406be8f0(void)

longlong FUN_1406be8f0(void)

{
  if (DAT_1468581b0 == 0) {
    FUN_141786440(&DAT_1468581b0,&PTR_FUN_14404ce20);
  }
  return DAT_1468581b0;
}



// FUNCTION 1406be920 FUN_1406be920 body=47 status=ok
// SIG undefined FUN_1406be920(void)

longlong FUN_1406be920(void)

{
  if (DAT_1468581a8 == 0) {
    FUN_141786a30(&DAT_1468581a8,&PTR_FUN_14622dd90);
  }
  return DAT_1468581a8;
}



// FUNCTION 1406be950 FUN_1406be950 body=53 status=ok
// SIG undefined FUN_1406be950(void)

void FUN_1406be950(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &PTR_FUN_14404dd28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1406be990 FUN_1406be990 body=53 status=ok
// SIG undefined FUN_1406be990(void)

void FUN_1406be990(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_14404de40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1406be9d0 FUN_1406be9d0 body=53 status=ok
// SIG undefined FUN_1406be9d0(void)

void FUN_1406be9d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &PTR_FUN_14404df58;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1406bea10 FUN_1406bea10 body=53 status=ok
// SIG undefined FUN_1406bea10(void)

void FUN_1406bea10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_14404e070;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1406bea50 FUN_1406bea50 body=53 status=ok
// SIG undefined FUN_1406bea50(void)

void FUN_1406bea50(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &PTR_FUN_14404e188;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1406beab0 FUN_1406beab0 body=47 status=ok
// SIG undefined FUN_1406beab0(void)

longlong FUN_1406beab0(void)

{
  if (DAT_146858120 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146858120,&PTR_s__Script_GbxTwitch_14404d7e8);
  }
  return DAT_146858120;
}



// FUNCTION 1406beae0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UNavCollisionBase::GetPrivateStaticClass(void)

{
  if (DAT_146858130 == 0) {
    FUN_14171ccd0(L"/Script/GbxTwitch",L"GbxTwitchSettings",&DAT_146858130,FUN_140447710,0x78,
                  0x10000004,0,L"Engine",InternalConstructor<UTutorialEvents>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146858130;
}



// FUNCTION 1406beb90 FUN_1406beb90 body=151 status=ok
// SIG undefined FUN_1406beb90(void)

longlong FUN_1406beb90(void)

{
  if (DAT_1468581b8 == 0) {
    FUN_14171ccd0(L"/Script/GbxTwitch",L"TwitchAPI",&DAT_1468581b8,FUN_1406c0560,0x138,0x10000000,0,
                  L"Engine",FUN_1406beed0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468581b8;
}



// FUNCTION 1406bec30 FUN_1406bec30 body=151 status=ok
// SIG undefined FUN_1406bec30(void)

longlong FUN_1406bec30(void)

{
  if (DAT_146858218 == 0) {
    FUN_14171ccd0(L"/Script/GbxTwitch",L"TwitchIRCClient",&DAT_146858218,FUN_1406c0590,0x98,
                  0x10000000,0,L"Engine",FUN_1406befa0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146858218;
}



// FUNCTION 1406becd0 FUN_1406becd0 body=47 status=ok
// SIG undefined FUN_1406becd0(void)

longlong FUN_1406becd0(void)

{
  if (DAT_146858210 == 0) {
    FUN_141786440(&DAT_146858210,&PTR_FUN_14404d4d0);
  }
  return DAT_146858210;
}



// FUNCTION 1406bed00 FUN_1406bed00 body=47 status=ok
// SIG undefined FUN_1406bed00(void)

longlong FUN_1406bed00(void)

{
  if (DAT_1468581e8 == 0) {
    FUN_141786a30(&DAT_1468581e8,&PTR_FUN_14622e190);
  }
  return DAT_1468581e8;
}



// FUNCTION 1406bed30 FUN_1406bed30 body=47 status=ok
// SIG undefined FUN_1406bed30(void)

longlong FUN_1406bed30(void)

{
  if (DAT_1468581f0 == 0) {
    FUN_141786a30(&DAT_1468581f0,&PTR_FUN_14622e1d0);
  }
  return DAT_1468581f0;
}



// FUNCTION 1406bed60 FUN_1406bed60 body=47 status=ok
// SIG undefined FUN_1406bed60(void)

longlong FUN_1406bed60(void)

{
  if (DAT_1468581f8 == 0) {
    FUN_141786a30(&DAT_1468581f8,&PTR_FUN_14622e250);
  }
  return DAT_1468581f8;
}



// FUNCTION 1406bed90 FUN_1406bed90 body=47 status=ok
// SIG undefined FUN_1406bed90(void)

longlong FUN_1406bed90(void)

{
  if (DAT_146858200 == 0) {
    FUN_141786a30(&DAT_146858200,&PTR_FUN_14622e290);
  }
  return DAT_146858200;
}



// FUNCTION 1406bedc0 FUN_1406bedc0 body=47 status=ok
// SIG undefined FUN_1406bedc0(void)

longlong FUN_1406bedc0(void)

{
  if (DAT_146858208 == 0) {
    FUN_141786a30(&DAT_146858208,&PTR_FUN_14622e340);
  }
  return DAT_146858208;
}



// FUNCTION 1406bedf0 FUN_1406bedf0 body=53 status=ok
// SIG undefined FUN_1406bedf0(void)

void FUN_1406bedf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_14404e570;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1406bee30 FUN_1406bee30 body=53 status=ok
// SIG undefined FUN_1406bee30(void)

void FUN_1406bee30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_14404e688;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1406bee80 InternalConstructor<UTutorialEvents> body=80 status=ok
// SIG undefined InternalConstructor<UTutorialEvents>(void)

void InternalConstructor<UTutorialEvents>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1417818c0(puVar1);
    *puVar1 = &PTR__scalar_deleting_destructor__14404d810;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
  }
  return;
}



// FUNCTION 1406beed0 FUN_1406beed0 body=202 status=ok
// SIG undefined FUN_1406beed0(void)

void FUN_1406beed0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1417818c0(puVar1);
    *puVar1 = &PTR_FUN_14404dab0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x5c) = 0;
    puVar1[0xd] = 0;
    *(undefined4 *)(puVar1 + 0xe) = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    *(undefined4 *)(puVar1 + 0x15) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xac) = 0;
    puVar1[0x17] = 0;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    *(undefined4 *)(puVar1 + 0x1f) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0xfc) = 0;
    puVar1[0x21] = 0;
    *(undefined4 *)(puVar1 + 0x22) = 0;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
  }
  return;
}



// FUNCTION 1406befa0 FUN_1406befa0 body=196 status=ok
// SIG undefined FUN_1406befa0(void)

void FUN_1406befa0(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1417818c0(puVar3);
    puVar1 = puVar3 + 5;
    *puVar1 = &PTR__purecall_143f740d8;
    plVar4 = (longlong *)FUN_1404cfca0();
    iVar2 = (int)plVar4[1];
    *(int *)(plVar4 + 1) = iVar2 + 1;
    if (*(int *)((longlong)plVar4 + 0xc) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4,iVar2);
    }
    *(undefined8 **)(*plVar4 + (longlong)iVar2 * 8) = puVar1;
    *puVar3 = &PTR_FUN_14404e2b0;
    *puVar1 = &PTR_FUN_14404e528;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar3 + 6));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar3 + 6),4000);
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    *(undefined1 *)(puVar3 + 0x11) = 0;
  }
  return;
}



// FUNCTION 1406bf070 FUN_1406bf070 body=192 status=ok
// SIG undefined FUN_1406bf070(void)

void FUN_1406bf070(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    puVar4 = (undefined8 *)(lVar1 + 0x28);
    do {
      TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>::
      ~TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>(puVar4 + 2);
      iVar5 = *(int *)(puVar4 + 1);
      plVar2 = (longlong *)*puVar4;
      if (iVar5 != 0) {
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        plVar2 = (longlong *)*puVar4;
      }
      if (plVar2 != (longlong *)0x0) {
        FMemory::Free(plVar2);
      }
      if (puVar4[-2] != 0) {
        FMemory::Free();
      }
      if (puVar4[-4] != 0) {
        FMemory::Free();
      }
      puVar4 = puVar4 + 0xb;
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



// FUNCTION 1406bf130 FUN_1406bf130 body=121 status=ok
// SIG undefined FUN_1406bf130(void)

void FUN_1406bf130(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>::
  ~TArray<FInAppPurchaseRestoreInfo,FDefaultAllocator>(param_1 + 0x38);
  iVar2 = *(int *)(param_1 + 0x30);
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x28);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406bf1b0 FUN_1406bf1b0 body=530 status=ok
// SIG undefined FUN_1406bf1b0(void)

longlong * FUN_1406bf1b0(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined4 *puVar11;
  
  if (param_1 == param_2) {
    return param_1;
  }
  plVar7 = (longlong *)*param_1;
  for (iVar6 = (int)param_1[1]; iVar6 != 0; iVar6 = iVar6 + -1) {
    iVar8 = (int)plVar7[8];
    plVar4 = (longlong *)plVar7[7];
    if (iVar8 != 0) {
      do {
        if (*plVar4 != 0) {
          FMemory::Free();
        }
        plVar4 = plVar4 + 2;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      plVar4 = (longlong *)plVar7[7];
    }
    if (plVar4 != (longlong *)0x0) {
      FMemory::Free(plVar4);
    }
    if (plVar7[4] != 0) {
      FMemory::Free();
    }
    if (plVar7[2] != 0) {
      FMemory::Free();
    }
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 10;
  }
  iVar6 = (int)param_2[1];
  lVar10 = *param_2;
  *(int *)(param_1 + 1) = iVar6;
  if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FDungeonMarkerInfo,FDefaultAllocator>::ResizeForCopy(param_1,iVar6);
    lVar3 = *param_1;
    if (iVar6 != 0) {
      lVar10 = lVar10 + 0x10;
      puVar11 = (undefined4 *)(lVar3 + 0x44);
      do {
        FString::FString(lVar3,lVar10 + -0x10);
        FString::FString(puVar11 + -0xd,lVar10);
        FString::FString(puVar11 + -9,lVar10 + 0x10);
        *(undefined1 *)(puVar11 + -5) = *(undefined1 *)(lVar10 + 0x20);
        *(undefined8 *)(puVar11 + -3) = 0;
        iVar8 = *(int *)(lVar10 + 0x30);
        puVar9 = *(undefined8 **)(lVar10 + 0x28);
        puVar11[-1] = iVar8;
        if (iVar8 == 0) {
          *puVar11 = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar11 + -3,iVar8,0);
          puVar5 = *(undefined8 **)(puVar11 + -3);
          do {
            *puVar5 = 0;
            iVar2 = *(int *)(puVar9 + 1);
            _Src = (void *)*puVar9;
            *(int *)(puVar5 + 1) = iVar2;
            if (iVar2 == 0) {
              *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar5,iVar2,0);
              _guard_xfg_dispatch_icall_nop((void *)*puVar5,_Src,(longlong)iVar2 * 2);
            }
            puVar5 = puVar5 + 2;
            puVar9 = puVar9 + 2;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        puVar1 = (undefined1 *)(lVar10 + 0x38);
        lVar10 = lVar10 + 0x50;
        *(undefined1 *)(puVar11 + 1) = *puVar1;
        puVar11 = puVar11 + 0x14;
        lVar3 = lVar3 + 0x50;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return param_1;
}



// FUNCTION 1406bf3d0 FUN_1406bf3d0 body=459 status=ok
// SIG undefined FUN_1406bf3d0(void)

longlong * FUN_1406bf3d0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_1 != param_2) {
    plVar1 = (longlong *)*param_1;
    for (iVar3 = (int)param_1[1]; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (plVar1[0x12] != 0) {
        FMemory::Free();
      }
      if (plVar1[0x10] != 0) {
        FMemory::Free();
      }
      if (plVar1[0xd] != 0) {
        FMemory::Free();
      }
      if (plVar1[10] != 0) {
        FMemory::Free();
      }
      if (plVar1[8] != 0) {
        FMemory::Free();
      }
      if (plVar1[6] != 0) {
        FMemory::Free();
      }
      if (plVar1[4] != 0) {
        FMemory::Free();
      }
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0x14;
    }
    iVar3 = (int)param_2[1];
    lVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar3;
    if ((iVar3 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1406bbfe0(param_1,iVar3);
      lVar4 = *param_1;
      if (iVar3 != 0) {
        lVar2 = lVar2 + 0x20;
        do {
          FString::FString(lVar4,lVar2 + -0x20);
          FString::FString(lVar4 + 0x10,lVar2 + -0x10);
          FString::FString(lVar4 + 0x20,lVar2);
          FString::FString(lVar4 + 0x30,lVar2 + 0x10);
          FString::FString(lVar4 + 0x40,lVar2 + 0x20);
          FString::FString(lVar4 + 0x50,lVar2 + 0x30);
          *(undefined1 *)(lVar4 + 0x60) = *(undefined1 *)(lVar2 + 0x40);
          FString::FString(lVar4 + 0x68,lVar2 + 0x48);
          *(undefined4 *)(lVar4 + 0x78) = *(undefined4 *)(lVar2 + 0x58);
          FString::FString(lVar4 + 0x80,lVar2 + 0x60);
          FString::FString(lVar4 + 0x90,lVar2 + 0x70);
          lVar4 = lVar4 + 0xa0;
          lVar2 = lVar2 + 0xa0;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  return param_1;
}



// FUNCTION 1406bf5b0 `scalar_deleting_destructor' body=126 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong USubDSurface::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1406bf630 FUN_1406bf630 body=287 status=ok
// SIG undefined FUN_1406bf630(void)

longlong FUN_1406bf630(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  FUN_1406c0060(param_1 + 200,0);
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  FUN_1406c0240(param_1 + 0x78,0);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x28,0);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x138);
  }
  return param_1;
}



// FUNCTION 1406bf750 FUN_1406bf750 body=166 status=ok
// SIG undefined FUN_1406bf750(void)

longlong FUN_1406bf750(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x80);
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x78);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FUN_1406bf070(param_1 + 0x68);
  FUN_1406bf070(param_1 + 0x58);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  FUN_1404bf750(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1406bf800 FUN_1406bf800 body=83 status=ok
// SIG undefined FUN_1406bf800(void)

void FUN_1406bf800(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x58);
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  FWeakObjectPtr::operator=((longlong)param_2 + 0x48,0);
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  return;
}



// FUNCTION 1406bf8a0 FUN_1406bf8a0 body=111 status=ok
// SIG undefined FUN_1406bf8a0(void)

void FUN_1406bf8a0(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0xa0);
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined1 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined4 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  *(undefined8 *)((longlong)param_2 + 0x90) = 0;
  *(undefined8 *)((longlong)param_2 + 0x98) = 0;
  return;
}



// FUNCTION 1406bf910 FUN_1406bf910 body=105 status=ok
// SIG undefined FUN_1406bf910(void)

void FUN_1406bf910(undefined8 param_1,undefined8 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2 + 3,0,0x50);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  FWeakObjectPtr::operator=(param_2 + 4,0);
  param_2[5] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  return;
}



// FUNCTION 1406bf980 FUN_1406bf980 body=62 status=ok
// SIG undefined FUN_1406bf980(void)

void FUN_1406bf980(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x58);
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined4 *)((longlong)param_2 + 0x50) = 0;
  return;
}



// FUNCTION 1406bf9c0 FUN_1406bf9c0 body=119 status=ok
// SIG undefined FUN_1406bf9c0(void)

undefined1 FUN_1406bf9c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x20;
    do {
      FUN_1406bf1b0(param_2 + -0x20,param_3 + -0x20 + param_2);
      FUN_1406bf1b0(param_2 + -0x10,param_3 + -0x10 + param_2);
      FUN_1406bf1b0(param_2,param_3 + param_2);
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1406bfa40 FUN_1406bfa40 body=390 status=ok
// SIG undefined FUN_1406bfa40(void)

undefined8 FUN_1406bfa40(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  
  if (param_4 != 0) {
    puVar7 = (undefined4 *)(param_3 + 0x4c);
    do {
      *param_2 = *(undefined8 *)(puVar7 + -0x13);
      FString::operator=(param_2 + 1,puVar7 + -0x11);
      FString::operator=(param_2 + 3,puVar7 + -0xd);
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_2 + 5,puVar7 + -9);
      plVar1 = param_2 + 7;
      if (plVar1 != (longlong *)(puVar7 + -5)) {
        plVar3 = (longlong *)*plVar1;
        for (iVar5 = *(int *)(param_2 + 8); iVar5 != 0; iVar5 = iVar5 + -1) {
          if (plVar3[4] != 0) {
            FMemory::Free();
          }
          if (plVar3[2] != 0) {
            FMemory::Free();
          }
          if (*plVar3 != 0) {
            FMemory::Free();
          }
          plVar3 = plVar3 + 6;
        }
        iVar5 = puVar7[-3];
        lVar4 = *(longlong *)(puVar7 + -5);
        *(int *)(param_2 + 8) = iVar5;
        if ((iVar5 == 0) && (*(int *)((longlong)param_2 + 0x44) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x44) = 0;
        }
        else {
          TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(plVar1,iVar5);
          lVar6 = *plVar1;
          if (iVar5 != 0) {
            lVar4 = lVar4 + 0x20;
            do {
              FString::FString(lVar6,lVar4 + -0x20);
              FString::FString(lVar6 + 0x10,lVar4 + -0x10);
              FString::FString(lVar6 + 0x20,lVar4);
              lVar6 = lVar6 + 0x30;
              lVar4 = lVar4 + 0x30;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
      }
      *(undefined4 *)(param_2 + 9) = puVar7[-1];
      *(undefined4 *)((longlong)param_2 + 0x4c) = *puVar7;
      puVar2 = (undefined8 *)(puVar7 + 1);
      puVar7 = puVar7 + 0x16;
      param_2[10] = *puVar2;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xb;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1406bfbd0 FUN_1406bfbd0 body=119 status=ok
// SIG undefined FUN_1406bfbd0(void)

undefined1 FUN_1406bfbd0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x20;
    do {
      FString::operator=(param_2 + -0x20,param_3 + -0x20 + param_2);
      FString::operator=(param_2 + -0x10,param_3 + -0x10 + param_2);
      FString::operator=(param_2,param_3 + param_2);
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1406bfc50 FUN_1406bfc50 body=151 status=ok
// SIG undefined FUN_1406bfc50(void)

undefined8 FUN_1406bfc50(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x20;
    do {
      FString::operator=(param_2 + -0x20,param_3 + -0x20 + param_2);
      FString::operator=(param_2 + -0x10,param_3 + -0x10 + param_2);
      FString::operator=(param_2,param_3 + param_2);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10 + param_2);
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                (param_2 + 0x18,param_3 + 0x18 + param_2);
      *(undefined1 *)(param_2 + 0x28) = *(undefined1 *)(param_3 + 0x28 + param_2);
      param_2 = param_2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1406bfcf0 FUN_1406bfcf0 body=237 status=ok
// SIG undefined FUN_1406bfcf0(void)

undefined8 FUN_1406bfcf0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x20;
    do {
      FString::operator=(param_2 + -0x20,param_3 + -0x20 + param_2);
      FString::operator=(param_2 + -0x10,param_3 + -0x10 + param_2);
      FString::operator=(param_2,param_3 + param_2);
      FString::operator=(param_2 + 0x10,param_3 + 0x10 + param_2);
      FString::operator=(param_2 + 0x20,param_3 + 0x20 + param_2);
      FString::operator=(param_2 + 0x30,param_3 + 0x30 + param_2);
      *(undefined1 *)(param_2 + 0x40) = *(undefined1 *)(param_3 + 0x40 + param_2);
      FString::operator=(param_2 + 0x48,param_3 + 0x48 + param_2);
      *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(param_3 + 0x58 + param_2);
      FString::operator=(param_2 + 0x60,param_3 + 0x60 + param_2);
      FString::operator=(param_2 + 0x70,param_3 + 0x70 + param_2);
      param_2 = param_2 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1406bfde0 FUN_1406bfde0 body=204 status=ok
// SIG undefined FUN_1406bfde0(void)

undefined8 FUN_1406bfde0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar5 = (undefined8 *)(param_2 + 0x28);
    do {
      puVar1 = (undefined4 *)(param_3 + -0x28 + (longlong)puVar5);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(puVar5 + -5) = *puVar1;
      *(undefined4 *)((longlong)puVar5 + -0x24) = uVar2;
      *(undefined4 *)(puVar5 + -4) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -0x1c) = uVar4;
      FUN_1406bf3d0(puVar5 + -3,param_3 + -0x18 + (longlong)puVar5);
      *(undefined4 *)(puVar5 + -1) = *(undefined4 *)(param_3 + -8 + (longlong)puVar5);
      *(undefined4 *)((longlong)puVar5 + -4) = *(undefined4 *)(param_3 + -4 + (longlong)puVar5);
      *puVar5 = *(undefined8 *)(param_3 + (longlong)puVar5);
      *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(param_3 + 8 + (longlong)puVar5);
      *(undefined1 *)((longlong)puVar5 + 9) = *(undefined1 *)(param_3 + 9 + (longlong)puVar5);
      *(undefined1 *)((longlong)puVar5 + 10) = *(undefined1 *)(param_3 + 10 + (longlong)puVar5);
      *(undefined4 *)((longlong)puVar5 + 0xc) = *(undefined4 *)(param_3 + 0xc + (longlong)puVar5);
      FString::operator=(puVar5 + 2,param_3 + 0x10 + (longlong)puVar5);
      FString::operator=(puVar5 + 4,param_3 + 0x20 + (longlong)puVar5);
      FString::operator=(puVar5 + 6,param_3 + 0x30 + (longlong)puVar5);
      puVar5 = puVar5 + 0xd;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1406bfeb0 FUN_1406bfeb0 body=158 status=ok
// SIG undefined FUN_1406bfeb0(void)

undefined8 FUN_1406bfeb0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x20;
    do {
      FString::operator=(param_2 + -0x20,param_3 + -0x20 + param_2);
      FString::operator=(param_2 + -0x10,param_3 + -0x10 + param_2);
      FString::operator=(param_2,param_3 + param_2);
      FString::operator=(param_2 + 0x10,param_3 + 0x10 + param_2);
      FString::operator=(param_2 + 0x20,param_3 + 0x20 + param_2);
      *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30 + param_2);
      param_2 = param_2 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1406bff50 Destruct body=40 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FPlayerMuteList>::Destruct(undefined8 param_1,longlong param_2)

{
  FUN_1406ad4f0(param_2 + 0x20);
  FUN_1406ad4f0(param_2 + 0x10);
  FUN_1406ad4f0(param_2);
  return;
}



// FUNCTION 1406bffb0 FUN_1406bffb0 body=65 status=ok
// SIG undefined FUN_1406bffb0(void)

void FUN_1406bffb0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_1406ad5c0(param_2 + 0x10);
  return;
}



// FUNCTION 1406c0000 Destruct body=89 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FPaintParticle_Mesh>::Destruct
               (undefined8 param_1,longlong *param_2)

{
  if (param_2[8] != 0) {
    FMemory::Free();
  }
  if (param_2[6] != 0) {
    FMemory::Free();
  }
  if (param_2[4] != 0) {
    FMemory::Free();
  }
  if (param_2[2] != 0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1406c0060 FUN_1406c0060 body=471 status=ok
// SIG undefined FUN_1406c0060(void)

void FUN_1406c0060(longlong *param_1,int param_2)

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
      if (bVar3) goto LAB_1406c0131;
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
LAB_1406c0131:
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
      if (*(longlong *)(lVar5 + 0x68) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 0x58) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar5 + 0x48) != 0) {
        FMemory::Free();
      }
      FUN_1406ad5c0(lVar5 + 0x20);
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



// FUNCTION 1406c0240 FUN_1406c0240 body=503 status=ok
// SIG undefined FUN_1406c0240(void)

void FUN_1406c0240(longlong *param_1,int param_2)

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
      if (bVar3) goto LAB_1406c0311;
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
LAB_1406c0311:
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
      plVar6 = (longlong *)((longlong)iStack_2c * 0x70 + *param_1);
      if (plVar6[10] != 0) {
        FMemory::Free();
      }
      if (plVar6[8] != 0) {
        FMemory::Free();
      }
      if (plVar6[6] != 0) {
        FMemory::Free();
      }
      if (plVar6[4] != 0) {
        FMemory::Free();
      }
      if (plVar6[2] != 0) {
        FMemory::Free();
      }
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo
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



// FUNCTION 1406c0440 FUN_1406c0440 body=4 status=ok
// SIG undefined FUN_1406c0440(void)

undefined8 FUN_1406c0440(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



// FUNCTION 1406c0450 FUN_1406c0450 body=6 status=ok
// SIG undefined FUN_1406c0450(void)

undefined8 FUN_1406c0450(void)

{
  return 0x9bdf596e;
}



// FUNCTION 1406c0460 FUN_1406c0460 body=6 status=ok
// SIG undefined FUN_1406c0460(void)

undefined8 FUN_1406c0460(void)

{
  return 0xc4cf895e;
}



// FUNCTION 1406c0470 FUN_1406c0470 body=6 status=ok
// SIG undefined FUN_1406c0470(void)

undefined8 FUN_1406c0470(void)

{
  return 0x287449c3;
}



// FUNCTION 1406c0480 FUN_1406c0480 body=6 status=ok
// SIG undefined FUN_1406c0480(void)

undefined8 FUN_1406c0480(void)

{
  return 0xb177db54;
}



// FUNCTION 1406c0490 FUN_1406c0490 body=6 status=ok
// SIG undefined FUN_1406c0490(void)

undefined8 FUN_1406c0490(void)

{
  return 0xec999cd6;
}



// FUNCTION 1406c04a0 FUN_1406c04a0 body=6 status=ok
// SIG undefined FUN_1406c04a0(void)

undefined8 FUN_1406c04a0(void)

{
  return 0x630f652b;
}



// FUNCTION 1406c04b0 FUN_1406c04b0 body=6 status=ok
// SIG undefined FUN_1406c04b0(void)

undefined8 FUN_1406c04b0(void)

{
  return 0xf9d42638;
}



// FUNCTION 1406c04d0 ResizeForCopy body=132 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FDungeonMarkerInfo,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x50,0);
    iVar3 = (int)(uVar1 / 0x50);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x50,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 1406c0560 FUN_1406c0560 body=34 status=ok
// SIG undefined FUN_1406c0560(void)

void FUN_1406c0560(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1406beb90();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_RequestTwitchStreams_14404e2a0,1);
  return;
}



// FUNCTION 1406c0590 FUN_1406c0590 body=34 status=ok
// SIG undefined FUN_1406c0590(void)

void FUN_1406c0590(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1406bec30();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ExitChatBot_14404e7a0,5);
  return;
}



// FUNCTION 1406c05c0 FUN_1406c05c0 body=113 status=ok
// SIG undefined FUN_1406c05c0(void)

void FUN_1406c05c0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146858168 == 0) {
    if (DAT_146858120 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146858120,&PTR_s__Script_GbxTwitch_14404d7e8);
    }
    lVar1 = DAT_146858120;
    uVar2 = FUN_1406c0450();
    DAT_146858168 = GetStaticStruct(FUN_1406c09d0,lVar1,L"TwitchActiveExtensionsInfo",0x30,uVar2);
  }
  return;
}



// FUNCTION 1406c0640 FUN_1406c0640 body=113 status=ok
// SIG undefined FUN_1406c0640(void)

void FUN_1406c0640(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468581c8 == 0) {
    if (DAT_146858120 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146858120,&PTR_s__Script_GbxTwitch_14404d7e8);
    }
    lVar1 = DAT_146858120;
    uVar2 = FUN_1406c0470();
    DAT_1468581c8 = GetStaticStruct(FUN_1406c0a00,lVar1,L"TwitchChannel",0x58,uVar2);
  }
  return;
}



// FUNCTION 1406c06c0 FUN_1406c06c0 body=113 status=ok
// SIG undefined FUN_1406c06c0(void)

void FUN_1406c06c0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468581d8 == 0) {
    if (DAT_146858120 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146858120,&PTR_s__Script_GbxTwitch_14404d7e8);
    }
    lVar1 = DAT_146858120;
    uVar2 = FUN_1406c0460();
    DAT_1468581d8 = GetStaticStruct(FUN_1406c0a30,lVar1,L"TwitchChannelMessage",0x30,uVar2);
  }
  return;
}



// FUNCTION 1406c0740 FUN_1406c0740 body=113 status=ok
// SIG undefined FUN_1406c0740(void)

void FUN_1406c0740(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146858178 == 0) {
    if (DAT_146858120 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146858120,&PTR_s__Script_GbxTwitch_14404d7e8);
    }
    lVar1 = DAT_146858120;
    uVar2 = FUN_1406c0480();
    DAT_146858178 = GetStaticStruct(FUN_1406c0a60,lVar1,L"TwitchExtensionInfo",0x50,uVar2);
  }
  return;
}



// FUNCTION 1406c07c0 FUN_1406c07c0 body=113 status=ok
// SIG undefined FUN_1406c07c0(void)

void FUN_1406c07c0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146858198 == 0) {
    if (DAT_146858120 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146858120,&PTR_s__Script_GbxTwitch_14404d7e8);
    }
    lVar1 = DAT_146858120;
    uVar2 = FUN_1406c0490();
    DAT_146858198 = GetStaticStruct(FUN_1406c0a90,lVar1,L"TwitchStreamInfo",0xa0,uVar2);
  }
  return;
}



// FUNCTION 1406c0840 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FFileManifestData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146858158 == 0) {
    if (DAT_146858120 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146858120,&PTR_s__Script_GbxTwitch_14404d7e8);
    }
    lVar1 = DAT_146858120;
    uVar2 = FUN_1406c04a0();
    DAT_146858158 = GetStaticStruct(FUN_1406c0ac0,lVar1,L"TwitchStreamsRequest",0x68,uVar2);
  }
  return;
}



// FUNCTION 1406c08c0 FUN_1406c08c0 body=113 status=ok
// SIG undefined FUN_1406c08c0(void)

void FUN_1406c08c0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146858188 == 0) {
    if (DAT_146858120 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146858120,&PTR_s__Script_GbxTwitch_14404d7e8);
    }
    lVar1 = DAT_146858120;
    uVar2 = FUN_1406c04b0();
    DAT_146858188 = GetStaticStruct(FUN_1406c0af0,lVar1,L"TwitchUserInfo",0x58,uVar2);
  }
  return;
}



// FUNCTION 1406c0940 FUN_1406c0940 body=47 status=ok
// SIG undefined FUN_1406c0940(void)

longlong FUN_1406c0940(void)

{
  if (DAT_146858128 == 0) {
    FUN_141786440(&DAT_146858128,&PTR_GetPrivateStaticClass_14404cf40);
  }
  return DAT_146858128;
}



// FUNCTION 1406c0970 FUN_1406c0970 body=47 status=ok
// SIG undefined FUN_1406c0970(void)

longlong FUN_1406c0970(void)

{
  if (DAT_1468581c0 == 0) {
    FUN_141786a30(&DAT_1468581c0,&PTR_FUN_14622de10);
  }
  return DAT_1468581c0;
}



// FUNCTION 1406c09a0 FUN_1406c09a0 body=47 status=ok
// SIG undefined FUN_1406c09a0(void)

longlong FUN_1406c09a0(void)

{
  if (DAT_146858150 == 0) {
    FUN_141786a30(&DAT_146858150,&PTR_FUN_14622d150);
  }
  return DAT_146858150;
}



// FUNCTION 1406c09d0 FUN_1406c09d0 body=47 status=ok
// SIG undefined FUN_1406c09d0(void)

longlong FUN_1406c09d0(void)

{
  if (DAT_146858170 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146858170,&PTR_FUN_14622d5f0);
  }
  return DAT_146858170;
}



// FUNCTION 1406c0a00 FUN_1406c0a00 body=47 status=ok
// SIG undefined FUN_1406c0a00(void)

longlong FUN_1406c0a00(void)

{
  if (DAT_1468581d0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468581d0,&PTR_FUN_14622e020);
  }
  return DAT_1468581d0;
}



// FUNCTION 1406c0a30 FUN_1406c0a30 body=47 status=ok
// SIG undefined FUN_1406c0a30(void)

longlong FUN_1406c0a30(void)

{
  if (DAT_1468581e0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468581e0,&PTR_FUN_14622e110);
  }
  return DAT_1468581e0;
}



// FUNCTION 1406c0a60 FUN_1406c0a60 body=47 status=ok
// SIG undefined FUN_1406c0a60(void)

longlong FUN_1406c0a60(void)

{
  if (DAT_146858180 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146858180,&PTR_FUN_14622d7e0);
  }
  return DAT_146858180;
}



// FUNCTION 1406c0a90 FUN_1406c0a90 body=47 status=ok
// SIG undefined FUN_1406c0a90(void)

longlong FUN_1406c0a90(void)

{
  if (DAT_1468581a0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468581a0,&PTR_FUN_14622dc00);
  }
  return DAT_1468581a0;
}



// FUNCTION 1406c0ac0 FUN_1406c0ac0 body=47 status=ok
// SIG undefined FUN_1406c0ac0(void)

longlong FUN_1406c0ac0(void)

{
  if (DAT_146858160 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146858160,&PTR_FUN_14622d4b0);
  }
  return DAT_146858160;
}



// FUNCTION 1406c0af0 FUN_1406c0af0 body=47 status=ok
// SIG undefined FUN_1406c0af0(void)

longlong FUN_1406c0af0(void)

{
  if (DAT_146858190 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146858190,&PTR_FUN_14622d940);
  }
  return DAT_146858190;
}



// FUNCTION 1406c0b60 FUN_1406c0b60 body=300 status=ok
// SIG undefined FUN_1406c0b60(void)

void FUN_1406c0b60(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  void *local_38;
  ulonglong local_30;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_38 = (void *)0x0;
  local_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FWeakObjectPtr::operator=(&local_48,0);
  local_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  _Src = local_38;
  local_28 = (void *)0x0;
  local_18 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = (longlong)(int)local_30;
  local_14 = local_44;
  local_10 = local_40;
  local_20 = (int)local_30;
  if ((int)local_30 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_30 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_28,_Src,lVar1 * 2);
  }
  FUN_1406b6030(&local_28,&local_18);
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406c0c90 execCopyTextToClipboard body=207 status=ok
// SIG undefined execCopyTextToClipboard(void)

void UUGBPFunctionLibrary::execCopyTextToClipboard(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  void *local_28;
  ulonglong local_20;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  _Src = local_28;
  local_18 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = (longlong)(int)local_20;
  local_10 = (int)local_20;
  if ((int)local_20 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_20 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_18,_Src,lVar1 * 2);
  }
  FUN_1406b8a80(&local_18);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406c0d60 FUN_1406c0d60 body=634 status=ok
// SIG undefined FUN_1406c0d60(void)

void FUN_1406c0d60(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined4 local_res10 [2];
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  void *local_78;
  ulonglong local_70;
  void *local_68;
  ulonglong local_60;
  void *local_58;
  ulonglong local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_78 = (void *)0x0;
  local_70 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  FWeakObjectPtr::operator=(&local_88,0);
  local_80 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  pvVar1 = local_78;
  local_48 = (void *)0x0;
  local_18 = local_88;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_70;
  local_14 = local_84;
  local_10 = local_80;
  local_40 = (int)local_70;
  if ((int)local_70 == 0) {
    local_3c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_70 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_48,pvVar1,lVar2 * 2);
  }
  pvVar1 = local_68;
  lVar2 = (longlong)(int)local_60;
  local_38 = (void *)0x0;
  local_30 = (int)local_60;
  if ((int)local_60 == 0) {
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_60 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_38,pvVar1,lVar2 * 2);
  }
  pvVar1 = local_58;
  lVar2 = (longlong)(int)local_50;
  local_28 = (void *)0x0;
  local_20 = (int)local_50;
  if ((int)local_50 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_50 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_28,pvVar1,lVar2 * 2);
  }
  FUN_1406baf30(local_res10[0],&local_28,&local_38,&local_48,&local_18);
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406c0fe0 FUN_1406c0fe0 body=343 status=ok
// SIG undefined FUN_1406c0fe0(void)

void FUN_1406c0fe0(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  longlong lVar2;
  void *local_48;
  ulonglong local_40;
  void *local_38;
  ulonglong local_30;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_38 = (void *)0x0;
  local_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = (void *)0x0;
  local_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  pvVar1 = local_48;
  local_28 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_40;
  local_20 = (int)local_40;
  if ((int)local_40 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_40 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_28,pvVar1,lVar2 * 2);
  }
  pvVar1 = local_38;
  lVar2 = (longlong)(int)local_30;
  local_18 = (void *)0x0;
  local_10 = (int)local_30;
  if ((int)local_30 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_30 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_18,pvVar1,lVar2 * 2);
  }
  FUN_1406bcee0(&local_18,&local_28);
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406c1140 FUN_1406c1140 body=440 status=ok
// SIG undefined FUN_1406c1140(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1406c1140(longlong param_1)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  void **ppvVar7;
  undefined1 local_res8 [8];
  void *local_28;
  ulonglong local_20;
  
  FUN_1406c5640();
  if (DAT_146858228 == 0) {
    lVar3 = operator_new(600);
    lVar4 = 0;
    if (lVar3 != 0) {
      lVar4 = FUN_1406c43e0(lVar3);
    }
    local_28 = (void *)0x0;
    local_20 = 7;
    DAT_146858228 = lVar4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    _Src = local_28;
    FGenericPlatformString::Memcpy(local_28,L"218054",0xe);
    lVar4 = DAT_146858228;
    ppvVar7 = (void **)(DAT_146858228 + 0x20);
    if (ppvVar7 != &local_28) {
      piVar1 = (int *)(DAT_146858228 + 0x2c);
      lVar3 = (longlong)(int)local_20;
      *(int *)(DAT_146858228 + 0x28) = (int)local_20;
      if (((int)local_20 == 0) && (*piVar1 == 0)) {
        *(undefined4 *)(lVar4 + 0x2c) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar7,local_20 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*ppvVar7,_Src,lVar3 * 2);
      }
    }
    if (_Src != (void *)0x0) {
      FMemory::Free(_Src);
    }
  }
  plVar5 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_GetPoolName_144051170;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar5[2] = lVar4;
    *plVar5 = (longlong)&PTR_GetPoolName_1440511b8;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af190,1);
    (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
    iVar2 = DAT_1464af198;
    lVar4 = (longlong)DAT_1464af198;
    DAT_1464af198 = DAT_1464af198 + 1;
    if (DAT_1464af19c < DAT_1464af198) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af190,iVar2);
    }
    puVar6 = (undefined8 *)(lVar4 * 0x10 + _DAT_1464af190);
    *puVar6 = plVar5;
    *(undefined4 *)(puVar6 + 1) = 2;
  }
  plVar5 = (longlong *)FUN_141593110();
  lVar4 = *plVar5;
  puVar6 = (undefined8 *)FName::FName(local_res8,"StreamingInteraction",1);
  lVar3 = param_1 + 0x10;
  if (param_1 == -8) {
    lVar3 = 0;
  }
  (**(code **)(lVar4 + 0x18))(plVar5,*puVar6,lVar3);
  return;
}



// FUNCTION 1406c1300 ShutdownModule body=85 status=ok
// SIG undefined ShutdownModule(void)

void FEditableMeshModule::ShutdownModule(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  plVar1 = (longlong *)FUN_141593110();
  puVar2 = (undefined8 *)FName::FName(local_res8,"StreamingInteraction",1);
  lVar3 = param_1 + 0x10;
  if (param_1 == -8) {
    lVar3 = 0;
  }
  (**(code **)(*plVar1 + 0x20))(plVar1,*puVar2,lVar3);
  return;
}



// FUNCTION 1406c1360 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
UE::MovieScene::
TEntityBuilder<UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAddConditional<FGuid>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceFloatChannel>_>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_1406c46a0(param_1 + 1);
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 1406c13b0 FUN_1406c13b0 body=273 status=ok
// SIG undefined FUN_1406c13b0(void)

void FUN_1406c13b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  puVar3 = (undefined8 *)FName::FName(local_res8,"GbxStreamingInteraction",1);
  uVar1 = *puVar3;
  uVar4 = FUN_14168dc80();
  FUN_141690010(uVar4,uVar1);
  puVar3 = (undefined8 *)FName::FName(local_res8,"GbxMixer",1);
  uVar1 = *puVar3;
  uVar4 = FUN_14168dc80();
  FModuleManager::GetModule(uVar4,uVar1);
  lVar2 = DAT_146858220;
  plVar5 = (longlong *)UWorldComposition::StaticClass();
  lVar6 = plVar5[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 0x368))(plVar5);
    lVar6 = plVar5[0x1f];
  }
  FString::operator=(lVar2 + 0x70,lVar6 + 0x28);
  plVar5 = (longlong *)UWorldComposition::StaticClass();
  lVar6 = plVar5[0x1f];
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 0x368))(plVar5);
    lVar6 = plVar5[0x1f];
  }
  FString::operator=(lVar2 + 0x80,lVar6 + 0x38);
  FWeakObjectPtr::operator=(param_1 + 0x88,param_2);
  FString::operator=(param_1 + 0x90,param_3);
  return;
}



// FUNCTION 1406c14d0 FUN_1406c14d0 body=47 status=ok
// SIG undefined FUN_1406c14d0(void)

void FUN_1406c14d0(longlong param_1)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x88) = local_res8;
  *(undefined4 *)(param_1 + 0x8c) = local_resc;
  return;
}



// FUNCTION 1406c1500 FUN_1406c1500 body=62 status=ok
// SIG undefined FUN_1406c1500(void)

undefined8 * FUN_1406c1500(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Mixer",0xc);
  return param_2;
}



// FUNCTION 1406c1540 GetDescription body=62 status=ok
// SIG undefined GetDescription(void)

undefined8 * UCopyLayerAction::GetDescription(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"TODO",10);
  return param_2;
}



// FUNCTION 1406c1580 GetVerb body=30 status=ok
// SIG undefined GetVerb(void)

undefined8 FCurlHttpRequest::GetVerb(longlong param_1,undefined8 param_2)

{
  FString::FString(param_2,param_1 + 0x78);
  return param_2;
}



// FUNCTION 1406c15a0 FUN_1406c15a0 body=317 status=ok
// SIG undefined FUN_1406c15a0(void)

undefined8 FUN_1406c15a0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  longlong local_18 [2];
  
  if (*(int *)(param_1 + 0xa8) < 2) {
    TBaseDelegate<void,enum_ECheckBoxState>::ExecuteIfBound(param_1 + 0x28,0);
    return 0;
  }
  puVar4 = (undefined8 *)FName::FName(local_res8,"GbxMixer",1);
  uVar2 = *puVar4;
  uVar5 = FUN_14168dc80();
  FModuleManager::GetModule(uVar5,uVar2);
  lVar8 = DAT_146858220;
  FUN_1406c72e0(DAT_146858220,param_1 + 0xb0,param_1 + 0xa0);
  plVar1 = (longlong *)(lVar8 + 0x30);
  plVar6 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar6 != (longlong *)0x0) {
    plVar6[1] = param_1;
    *plVar6 = (longlong)&PTR_GetPoolName_1440513b0;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[3] = lVar7;
    *plVar6 = (longlong)&PTR_GetPoolName_1440513f8;
  }
  if (local_18 != plVar1) {
    if (plVar6 == (longlong *)0x0) {
      if ((*(int *)(lVar8 + 0x38) != 0) && (plVar3 = (longlong *)*plVar1, plVar3 != (longlong *)0x0)
         ) {
        (**(code **)(*plVar3 + 0x28))(plVar3,0);
        if (*plVar1 != 0) {
          lVar7 = FMemory::Realloc(*plVar1,0,0);
          *plVar1 = lVar7;
        }
        *(undefined4 *)(lVar8 + 0x38) = 0;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x30))(plVar6,plVar1);
    }
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    lVar8 = FMemory::Realloc(plVar6,0,0);
    if (lVar8 != 0) {
      FMemory::Free(lVar8);
    }
  }
  return 1;
}



// FUNCTION 1406c16e0 FUN_1406c16e0 body=319 status=ok
// SIG undefined FUN_1406c16e0(void)

void FUN_1406c16e0(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 local_res10 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  
  puVar4 = (undefined8 *)FName::FName(local_res10,"GbxMixer",1);
  uVar1 = *puVar4;
  uVar5 = FUN_14168dc80();
  FModuleManager::GetModule(uVar5,uVar1);
  uStack_10 = DAT_146858228;
  lVar8 = DAT_146858220;
  if ((DAT_146858228 != 0) && (DAT_146858220 != 0)) {
    cVar3 = FUN_1406c78f0(DAT_146858220);
    if (cVar3 != '\0') {
      plVar9 = (longlong *)(lVar8 + 0x60);
      local_18 = param_1;
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_GetPoolName_1440514d0;
        *(undefined4 *)(plVar6 + 1) = (undefined4)local_18;
        *(undefined4 *)((longlong)plVar6 + 0xc) = local_18._4_4_;
        *(undefined4 *)(plVar6 + 2) = (undefined4)uStack_10;
        *(undefined4 *)((longlong)plVar6 + 0x14) = uStack_10._4_4_;
        lVar7 = FDelegateHandle::GenerateNewID();
        plVar6[4] = lVar7;
        *plVar6 = (longlong)&PTR_GetPoolName_144051518;
      }
      if (&local_18 != plVar9) {
        if (plVar6 == (longlong *)0x0) {
          if ((*(int *)(lVar8 + 0x68) != 0) &&
             (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x28))(plVar2,0);
            if (*plVar9 != 0) {
              lVar7 = FMemory::Realloc(*plVar9,0,0);
              *plVar9 = lVar7;
            }
            *(undefined4 *)(lVar8 + 0x68) = 0;
          }
        }
        else {
          (**(code **)(*plVar6 + 0x30))(plVar6,plVar9);
        }
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        lVar8 = FMemory::Realloc(plVar6,0,0);
        if (lVar8 != 0) {
          FMemory::Free(lVar8);
        }
      }
    }
  }
  return;
}



// FUNCTION 1406c1820 FUN_1406c1820 body=214 status=ok
// SIG undefined FUN_1406c1820(void)

void FUN_1406c1820(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  
  puVar4 = (undefined8 *)FName::FName(local_res8,"GbxMixer",1);
  uVar1 = *puVar4;
  uVar5 = FUN_14168dc80();
  FModuleManager::GetModule(uVar5,uVar1);
  lVar2 = DAT_146858228;
  plVar6 = (longlong *)0x0;
  if (DAT_146858228 != 0) {
    FUN_1406c5260(DAT_146858228);
    TSet<TTuple<int,UActorChannel::FPacketRepKeyInfo>,TDefaultMapHashableKeyFuncs<int,UActorChannel::FPacketRepKeyInfo,0>,FDefaultSetAllocator>
    ::Empty(lVar2 + 0x70,0);
    FUN_1406c5d10(lVar2 + 0x168,0);
    FUN_1406c5d90(lVar2 + 0x118,0);
    FUN_1406c5c90(lVar2 + 0x1b8,0);
    TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
    ::Empty(lVar2 + 0x208,0);
    *(undefined8 *)(lVar2 + 0x110) = 0;
  }
  if ((*(int *)(param_1 + 0x60) != 0) && (*(longlong **)(param_1 + 0x58) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x18))();
    if (cVar3 != '\0') {
      if (*(int *)(param_1 + 0x60) != 0) {
        plVar6 = *(longlong **)(param_1 + 0x58);
      }
      (**(code **)(*plVar6 + 0x40))(plVar6);
    }
  }
  return;
}



// FUNCTION 1406c1900 FUN_1406c1900 body=101 status=ok
// SIG undefined FUN_1406c1900(void)

void FUN_1406c1900(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((int)param_3[1] == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = (longlong *)*param_3;
  }
  if ((plVar2 != (longlong *)0x0) ||
     (((int)param_3[1] != 0 && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)))) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    if (*param_3 != 0) {
      lVar1 = FMemory::Realloc(*param_3,0,0);
      *param_3 = lVar1;
    }
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if (*param_3 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1406c1970 FUN_1406c1970 body=427 status=ok
// SIG undefined FUN_1406c1970(void)

void FUN_1406c1970(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  
  puVar6 = (undefined8 *)FName::FName(local_res8,"GbxMixer",1);
  uVar1 = *puVar6;
  uVar7 = FUN_14168dc80();
  FModuleManager::GetModule(uVar7,uVar1);
  plVar3 = DAT_146858220;
  cVar4 = FConfigCacheIni::GetString
                    (DAT_1468b6148,PTR_u_MixerInteractiveStreamingService_14622e588,
                     L"MixerAccessToken",param_1 + 0xa0,&DAT_1468e2420);
  cVar5 = FConfigCacheIni::GetString
                    (DAT_1468b6148,PTR_u_MixerInteractiveStreamingService_14622e588,
                     L"MixerTokenType",param_1 + 0xb0,&DAT_1468e2420);
  if ((cVar4 == '\0') || (cVar5 == '\0')) {
    cVar4 = FWeakObjectPtr::IsValid(param_1 + 0x88);
    if ((cVar4 != '\0') && (plVar3 != (longlong *)0x0)) {
      cVar4 = FUN_1406ca3a0(plVar3);
      if (cVar4 != '\0') {
        uStack_10 = plVar3;
        local_18 = param_1;
        plVar8 = (longlong *)FMemory::Realloc(0,0x30);
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = (longlong)&PTR_GetPoolName_144051320;
          *(undefined4 *)(plVar8 + 1) = (undefined4)local_18;
          *(undefined4 *)((longlong)plVar8 + 0xc) = local_18._4_4_;
          *(undefined4 *)(plVar8 + 2) = (undefined4)uStack_10;
          *(undefined4 *)((longlong)plVar8 + 0x14) = uStack_10._4_4_;
          lVar9 = FDelegateHandle::GenerateNewID();
          plVar8[4] = lVar9;
          *plVar8 = (longlong)&PTR_GetPoolName_144051368;
        }
        if (&local_18 != plVar3) {
          if (plVar8 == (longlong *)0x0) {
            if (((int)plVar3[1] != 0) && (plVar2 = (longlong *)*plVar3, plVar2 != (longlong *)0x0))
            {
              (**(code **)(*plVar2 + 0x28))(plVar2,0);
              if (*plVar3 != 0) {
                lVar9 = FMemory::Realloc(*plVar3,0,0);
                *plVar3 = lVar9;
              }
              *(undefined4 *)(plVar3 + 1) = 0;
            }
          }
          else {
            (**(code **)(*plVar8 + 0x30))(plVar8,plVar3);
          }
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x28))(plVar8,0);
          lVar9 = FMemory::Realloc(plVar8,0,0);
          if (lVar9 != 0) {
            FMemory::Free(lVar9);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1406c1b20 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TCapsuleShadowingUpsamplePS<1,1>::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1406c46a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 1406c1b60 FUN_1406c1b60 body=230 status=ok
// SIG undefined FUN_1406c1b60(void)

void FUN_1406c1b60(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_18 [2];
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    plVar2[1] = param_2;
    *plVar2 = (longlong)&PTR_GetPoolName_143f4d0e0;
    plVar2[2] = param_3;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f4d128;
  }
  if (local_18 != param_1) {
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



// FUNCTION 1406c1c50 FUN_1406c1c50 body=201 status=ok
// SIG undefined FUN_1406c1c50(void)

undefined8 FUN_1406c1c50(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  int local_48 [2];
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong *plStack_18;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  cVar6 = FUN_1404a6f40(0,local_48);
  if ((cVar6 == '\0') || (local_48[0] != 5)) {
    uVar7 = 0;
  }
  else {
    TArray<TSharedPtr<OculusHMD::FLayer,1>,FDefaultAllocator>::operator=(param_2,&local_30);
    uVar7 = 1;
  }
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_18 + 8))(plStack_18,1);
      }
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_30);
  if (local_40 != 0) {
    FMemory::Free();
  }
  return uVar7;
}



// FUNCTION 1406c1d20 Emplace<TPairInitializer<FName_const_&,FPtr_const_&>_> body=420 status=ok
// SIG undefined Emplace<TPairInitializer<FName_const_&,FPtr_const_&>_>(void)

int * TSet<TTuple<FName,FPtr>,TDefaultMapHashableKeyFuncs<FName,FPtr,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,FPtr_const_&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  int local_38 [2];
  longlong *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  bVar7 = false;
  plVar3 = (longlong *)param_3[1];
  lVar1 = *(longlong *)*param_3;
  *param_2 = local_38[0];
  *local_30 = lVar1;
  local_30[1] = *plVar3;
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  iVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar6 != 1) {
    if (iVar6 != 0) {
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = param_1 + 7;
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar4 != -1) {
        do {
          if (*(longlong *)(*param_1 + (longlong)iVar4 * 0x18) == lVar1) goto LAB_1406c1ded;
          iVar4 = *(int *)(*param_1 + 0x10 + (longlong)iVar4 * 0x18);
        } while (iVar4 != -1);
      }
    }
    iVar4 = -1;
LAB_1406c1ded:
    bVar7 = iVar4 != -1;
    if (bVar7) {
      ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar4 * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,local_38[0],1);
      *param_2 = iVar4;
      goto LAB_1406c1e9c;
    }
  }
  cVar2 = TSet<TTuple<FName,IOnlineFactory_*>,TDefaultMapHashableKeyFuncs<FName,IOnlineFactory_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar6,0);
  if (cVar2 == '\0') {
    uVar5 = (int)((ulonglong)*local_30 >> 0x20) + (int)*local_30 & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x14) = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         *param_2;
  }
LAB_1406c1e9c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 1406c1ed0 FUN_1406c1ed0 body=756 status=ok
// SIG undefined FUN_1406c1ed0(void)

int * FUN_1406c1ed0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  longlong lVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  longlong *plVar18;
  void *_Dst;
  bool local_res8;
  
  uVar16 = 0xffffffff;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar17 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar17 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar17 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1,iVar17);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar17 = (int)param_1[6];
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar14 = *(int *)(*param_1 + 4 + (longlong)iVar17 * 0x50);
    *(int *)(param_1 + 6) = iVar14;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar14 * 0x50) = 0xffffffff;
    }
  }
  plVar18 = (longlong *)param_1[4];
  *param_2 = iVar17;
  if (plVar18 == (longlong *)0x0) {
    plVar18 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar18 +
                   (longlong)((int)(iVar17 + (iVar17 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar17 & 0x1f);
  lVar4 = param_3[1];
  plVar18 = (longlong *)((longlong)iVar17 * 0x50 + *param_1);
  *plVar18 = *(longlong *)*param_3;
  FText::FText(plVar18 + 1,lVar4);
  *(undefined4 *)(plVar18 + 4) = *(undefined4 *)(lVar4 + 0x18);
  uVar6 = *(undefined4 *)(lVar4 + 0x24);
  uVar7 = *(undefined4 *)(lVar4 + 0x28);
  uVar8 = *(undefined4 *)(lVar4 + 0x2c);
  local_res8 = false;
  *(undefined4 *)(plVar18 + 5) = *(undefined4 *)(lVar4 + 0x20);
  *(undefined4 *)((longlong)plVar18 + 0x2c) = uVar6;
  *(undefined4 *)(plVar18 + 6) = uVar7;
  *(undefined4 *)((longlong)plVar18 + 0x34) = uVar8;
  plVar18[7] = *(longlong *)(lVar4 + 0x30);
  plVar18[8] = *(longlong *)(lVar4 + 0x38);
  *(undefined4 *)(plVar18 + 9) = 0xffffffff;
  iVar17 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar17 != 1) {
    lVar4 = *plVar18;
    iVar14 = iVar15;
    if (iVar17 != 0) {
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar12 +
                       ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar10 != -1) {
        do {
          iVar14 = iVar10;
          if (*(longlong *)(*param_1 + (longlong)iVar10 * 0x50) == lVar4) break;
          iVar10 = *(int *)(*param_1 + 0x48 + (longlong)iVar10 * 0x50);
          iVar14 = iVar15;
        } while (iVar10 != -1);
      }
    }
    local_res8 = iVar14 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar14 * 0x50 + *param_1);
      plVar12 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar12 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,plVar18,0x48);
      iVar15 = *param_2;
      bVar5 = (byte)iVar15 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x50) = iVar15;
      }
      puVar11 = (undefined4 *)((longlong)iVar15 * 0x50 + *param_1);
      *puVar11 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar16 = (undefined4)param_1[6];
      }
      puVar11[1] = uVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar15;
      plVar18 = (longlong *)param_1[4];
      *param_2 = iVar14;
      if (plVar18 == (longlong *)0x0) {
        plVar18 = param_1 + 2;
      }
      puVar3 = (uint *)((longlong)plVar18 +
                       (longlong)((int)(iVar15 + (iVar15 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar3 = *puVar3 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_1406c219c;
    }
  }
  cVar9 = TSet<TTuple<FName,FLevelStreamingSharedTrackData::FVisibilityData>,TDefaultMapHashableKeyFuncs<FName,FLevelStreamingSharedTrackData::FVisibilityData,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar17,0);
  if (cVar9 == '\0') {
    uVar13 = (int)((ulonglong)*plVar18 >> 0x20) + (int)*plVar18 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar18 + 0x4c) = uVar13;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)(plVar18 + 9) =
         *(undefined4 *)
          ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar18 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar18 = param_1 + 7;
    }
    *(int *)((longlong)plVar18 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         *param_2;
  }
LAB_1406c219c:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1406c21d0 FUN_1406c21d0 body=569 status=ok
// SIG undefined FUN_1406c21d0(void)

int * FUN_1406c21d0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0x28);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x28) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  puVar1 = (uint *)(*param_1 + (longlong)iVar9 * 0x28);
  puVar2 = (undefined8 *)param_3[1];
  *puVar1 = *(uint *)*param_3;
  *(undefined8 *)(puVar1 + 2) = *puVar2;
  FString::FString(puVar1 + 4,puVar2 + 1);
  puVar1[8] = 0xffffffff;
  bVar10 = false;
  iVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar9 != 1) {
    if (iVar9 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar6 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar1) * 4);
      if (iVar7 != -1) {
        do {
          if (*(uint *)(*param_1 + (longlong)iVar7 * 0x28) == *puVar1) goto LAB_1406c232b;
          iVar7 = *(int *)(*param_1 + 0x20 + (longlong)iVar7 * 0x28);
        } while (iVar7 != -1);
      }
    }
    iVar7 = -1;
LAB_1406c232b:
    bVar10 = iVar7 != -1;
    if (bVar10) {
      lVar3 = *param_1;
      if (*(longlong *)(lVar3 + 0x10 + (longlong)iVar7 * 0x28) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar3 + (longlong)iVar7 * 0x28),puVar1,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar7;
      goto LAB_1406c23e0;
    }
  }
  cVar4 = TSet<TTuple<int,FResidentChunk>,TDefaultMapHashableKeyFuncs<int,FResidentChunk,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar9,0);
  if (cVar4 == '\0') {
    uVar8 = (int)param_1[9] - 1U & *puVar1;
    puVar1[9] = uVar8;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    puVar1[8] = *(uint *)((longlong)plVar6 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         *param_2;
  }
LAB_1406c23e0:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar10;
  }
  return param_2;
}



// FUNCTION 1406c2410 FUN_1406c2410 body=620 status=ok
// SIG undefined FUN_1406c2410(void)

int * FUN_1406c2410(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  void *_Dst;
  bool bVar13;
  
  iVar9 = -1;
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
    iVar7 = *(int *)((longlong)iVar11 * 0x20 + 4 + *param_1);
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar7 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar12 = (uint *)((longlong)plVar6 +
                    (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar12 = *puVar12 | 1 << ((byte)iVar11 & 0x1f);
  puVar3 = (undefined8 *)param_3[1];
  puVar12 = (uint *)((longlong)iVar11 * 0x20 + *param_1);
  *puVar12 = *(uint *)*param_3;
  *(undefined8 *)(puVar12 + 2) = *puVar3;
  lVar4 = puVar3[1];
  *(longlong *)(puVar12 + 4) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  puVar12[6] = 0xffffffff;
  bVar13 = false;
  iVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar11 != 1) {
    iVar8 = iVar9;
    if (iVar11 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar6 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar12) * 4);
      if (iVar7 != -1) {
        do {
          iVar8 = iVar7;
          if (*(uint *)((longlong)iVar7 * 0x20 + *param_1) == *puVar12) break;
          iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + *param_1);
          iVar8 = iVar9;
        } while (iVar7 != -1);
      }
    }
    bVar13 = iVar8 != -1;
    if (bVar13) {
      _Dst = (void *)((longlong)iVar8 * 0x20 + *param_1);
      plVar6 = *(longlong **)((longlong)_Dst + 0x10);
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
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,puVar12,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar8;
      goto LAB_1406c2654;
    }
  }
  cVar5 = TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar11,0);
  if (cVar5 == '\0') {
    uVar10 = (int)param_1[9] - 1U & *puVar12;
    puVar12[7] = uVar10;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    puVar12[6] = *(uint *)((longlong)plVar6 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_1406c2654:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 1406c2680 FUN_1406c2680 body=552 status=ok
// SIG undefined FUN_1406c2680(void)

int * FUN_1406c2680(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *_Src;
  int iVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar16 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar16 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar16 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar16);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar16 = (int)param_1[6];
    iVar13 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar4 = *(int *)(*param_1 + 4 + (longlong)iVar16 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
    }
  }
  plVar15 = (longlong *)param_1[4];
  *param_2 = iVar16;
  if (plVar15 == (longlong *)0x0) {
    plVar15 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar15 +
                   (longlong)((int)(iVar16 + (iVar16 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar16 & 0x1f);
  puVar5 = (undefined4 *)*param_3;
  uVar8 = puVar5[1];
  uVar9 = puVar5[2];
  uVar10 = puVar5[3];
  _Src = (undefined4 *)(*param_1 + (longlong)iVar16 * 0x28);
  puVar6 = (undefined8 *)param_3[1];
  *_Src = *puVar5;
  _Src[1] = uVar8;
  _Src[2] = uVar9;
  _Src[3] = uVar10;
  *(undefined8 *)(_Src + 4) = *puVar6;
  lVar17 = puVar6[1];
  *(longlong *)(_Src + 6) = lVar17;
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  _Src[8] = 0xffffffff;
  bVar18 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    lVar17 = (longlong)local_res8[0];
    bVar18 = local_res8[0] != -1;
    if (bVar18) {
      lVar7 = *param_1;
      plVar15 = *(longlong **)(lVar7 + 0x18 + lVar17 * 0x28);
      iVar16 = local_res8[0];
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar15 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar2 = (int *)((longlong)plVar15 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          iVar16 = local_res8[0];
          if (iVar4 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
            iVar16 = local_res8[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar7 + lVar17 * 0x28),_Src,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar16;
      goto LAB_1406c2888;
    }
  }
  cVar12 = TSet<TTuple<FGuid,FLevelSequenceBindingReferenceArray>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceBindingReferenceArray,0>,FDefaultSetAllocator>
           ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar12 == '\0') {
    iVar16 = *param_2;
    uVar14 = FCrc::MemCrc_DEPRECATED(_Src,0x10);
    uVar14 = (int)param_1[9] - 1U & uVar14;
    _Src[9] = uVar14;
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    _Src[8] = *(undefined4 *)
               ((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(int *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         iVar16;
  }
LAB_1406c2888:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar18;
  }
  return param_2;
}



// FUNCTION 1406c28b0 FUN_1406c28b0 body=757 status=ok
// SIG undefined FUN_1406c28b0(void)

uint * FUN_1406c28b0(longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined8 *_Src;
  int iVar10;
  uint uVar11;
  char cVar12;
  undefined4 uVar13;
  longlong *plVar14;
  bool bVar15;
  uint local_res8 [2];
  
  iVar10 = 1;
  uVar13 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar11 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar11 + 1)) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,uVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar11 = *(uint *)(param_1 + 6);
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)(*param_1 + 4 + (longlong)(int)uVar11 * 0x30);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x30) = 0xffffffff;
    }
  }
  plVar14 = (longlong *)param_1[4];
  *param_2 = uVar11;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar14 +
                   (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar11 & 0x1f);
  puVar2 = (undefined8 *)param_3[1];
  _Src = (undefined8 *)((longlong)(int)uVar11 * 0x30 + *param_1);
  FString::FString(_Src,*param_3);
  _Src[2] = *puVar2;
  _Src[3] = 0;
  _Src[3] = puVar2[1];
  puVar2[1] = 0;
  *(undefined4 *)(_Src + 4) = *(undefined4 *)(puVar2 + 2);
  *(undefined4 *)((longlong)_Src + 0x24) = *(undefined4 *)((longlong)puVar2 + 0x14);
  puVar2[2] = 0;
  *(undefined4 *)(_Src + 5) = 0xffffffff;
  local_res8[0] = local_res8[0] & 0xffffff00;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar11 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar15 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar15);
    if (bVar15) {
      plVar14 = (longlong *)(lVar9 * 0x30 + *param_1);
      if (plVar14[3] != 0) {
        FMemory::Free();
      }
      if (*plVar14 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(plVar14,_Src,0x28);
      uVar5 = *param_2;
      bVar3 = (byte)uVar5 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x30) = uVar5;
      }
      puVar6 = (undefined4 *)((longlong)(int)uVar5 * 0x30 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar13 = (undefined4)param_1[6];
      }
      puVar6[1] = uVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar5;
      plVar14 = (longlong *)param_1[4];
      *param_2 = uVar11;
      if (plVar14 == (longlong *)0x0) {
        plVar14 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar14 +
                       (longlong)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1406c2b80;
    }
  }
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar11) {
    uVar5 = (uVar11 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar12 = '\0';
    if (uVar5 != 0) {
      iVar7 = 0x1f - iVar10;
    }
    uVar5 = (uVar11 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar12 = '\x1f' - (char)iVar10;
    }
    iVar10 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    uVar11 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar8 = &DAT_143f3eda8;
    }
    else {
      puVar8 = (undefined2 *)*_Src;
    }
    uVar5 = FUN_140438070(puVar8);
    uVar5 = (int)param_1[9] - 1U & uVar5;
    *(uint *)((longlong)_Src + 0x2c) = uVar5;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 5) =
         *(undefined4 *)
          ((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(uint *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         uVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1406c2b80:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}


