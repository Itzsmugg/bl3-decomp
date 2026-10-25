// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1426e9550 Rehash body=535 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_1426e968f;
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
LAB_1426e968f:
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
        puVar12 = (uint *)((longlong)iStack_1c * 0x90 + *param_1);
        uVar8 = (puVar12[1] ^ *puVar12) & (int)*plVar2 - 1U;
        puVar12[0x21] = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        puVar12[0x20] =
             *(uint *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
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



// FUNCTION 1426e9770 FUN_1426e9770 body=209 status=ok
// SIG undefined FUN_1426e9770(void)

void FUN_1426e9770(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x178);
  if (plVar1 != (longlong *)0x0) {
    if (*(longlong *)(param_1 + 0x208) != 0) {
      plVar1 = (longlong *)FUN_1426e2550(*(undefined4 *)(param_1 + 0x188));
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x358))
                  (plVar1,
                   "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicsHandleComponent.cpp"
                   ,0xe8);
        (**(code **)**(undefined8 **)(param_1 + 0x208))();
        (**(code **)**(undefined8 **)(param_1 + 0x210))();
        (**(code **)(*plVar1 + 0x360))(plVar1);
      }
      plVar1 = *(longlong **)(param_1 + 0x178);
      *(undefined8 *)(param_1 + 0x210) = 0;
      *(undefined8 *)(param_1 + 0x208) = 0;
    }
    *(uint *)(param_1 + 0x18c) = *(uint *)(param_1 + 0x18c) & 0xfffffffe;
    (**(code **)(*plVar1 + 0x628))(plVar1,*(undefined8 *)(param_1 + 0x180));
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined8 *)(param_1 + 0x180) = 0;
  }
  return;
}



// FUNCTION 1426e9850 Remove body=225 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<short,AFGHologram_*>,TDefaultMapHashableKeyFuncs<short,AFGHologram_*,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,short param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  iVar3 = *(int *)((longlong)plVar6 + ((longlong)param_2 & uVar7) * 4);
  if (iVar3 != -1) {
    lVar5 = *param_1;
    do {
      lVar8 = (longlong)iVar3;
      if (*(short *)(lVar5 + lVar8 * 0x18) == param_2) {
        uVar7 = (longlong)*(int *)(lVar5 + 0x14 + lVar8 * 0x18) & uVar7;
        puVar2 = (undefined4 *)((longlong)plVar6 + uVar7 * 4);
        iVar4 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x0001426e98e3;
      }
      iVar3 = *(int *)(lVar5 + 0x10 + lVar8 * 0x18);
    } while (iVar3 != -1);
  }
  return 0;
joined_r0x0001426e98e3:
  if (iVar4 == -1) {
LAB_1426e9908:
    TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar3,1);
    return 1;
  }
  if (iVar4 == iVar3) {
    *puVar2 = *(undefined4 *)(lVar5 + lVar8 * 0x18 + 0x10);
    goto LAB_1426e9908;
  }
  lVar1 = (longlong)iVar4 * 3 + 2;
  iVar4 = *(int *)(lVar5 + lVar1 * 8);
  puVar2 = (undefined4 *)(lVar5 + lVar1 * 8);
  goto joined_r0x0001426e98e3;
}



// FUNCTION 1426e9940 Remove body=443 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FBodyInstance_*,FPhysTarget>,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar8 = (int)(param_2 >> 4);
  uVar7 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
  uVar6 = (longlong)(int)param_1[9] - 1;
  uVar5 = -(uVar7 + iVar8) ^ uVar7 >> 0xd;
  uVar9 = (iVar8 - uVar7) - uVar5 ^ uVar5 >> 0xc;
  uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 << 0x10;
  uVar5 = (uVar5 - uVar7) - uVar9 ^ uVar7 >> 5;
  uVar9 = (uVar9 - uVar7) - uVar5 ^ uVar5 >> 3;
  uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 << 10;
  plVar11 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar11 = param_1 + 7;
  }
  iVar8 = *(int *)((longlong)plVar11 +
                  (((longlong)(int)((uVar5 - uVar7) - uVar9) ^ (ulonglong)(uVar7 >> 0xf)) & uVar6) *
                  4);
  if (iVar8 != -1) {
    lVar2 = *param_1;
    do {
      lVar3 = (longlong)iVar8 * 0xe0;
      if (*(ulonglong *)(lVar3 + lVar2) == param_2) {
        lVar10 = (longlong)iVar8 * 0xe0;
        lVar3 = lVar10 + lVar2;
        uVar6 = (longlong)*(int *)(lVar3 + 0xd4) & uVar6;
        piVar4 = (int *)((longlong)plVar11 + uVar6 * 4);
        iVar1 = *(int *)((longlong)plVar11 + uVar6 * 4);
        goto joined_r0x0001426e9a5e;
      }
      iVar8 = *(int *)(lVar3 + 0xd0 + lVar2);
    } while (iVar8 != -1);
  }
  return 0;
joined_r0x0001426e9a5e:
  if (iVar1 == -1) {
LAB_1426e9a90:
    lVar10 = *param_1 + lVar10;
    if (*(longlong *)(lVar10 + 0x40) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar10 + 0x30) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar10 + 0x20) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar10 + 0x10) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TStaticMeshDrawList<TMobileBasePassDrawingPolicy<FUniformLightMapPolicy>_>::FDrawingPolicyLink>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar8,1);
    return 1;
  }
  if (iVar1 == iVar8) {
    *piVar4 = *(int *)(lVar3 + 0xd0);
    goto LAB_1426e9a90;
  }
  piVar4 = (int *)((longlong)iVar1 * 0xe0 + 0xd0 + lVar2);
  iVar1 = *piVar4;
  goto joined_r0x0001426e9a5e;
}



// FUNCTION 1426e9b00 Remove body=485 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<physx::PxBase_*,FString>,TDefaultMapHashableKeyFuncs<physx::PxBase_*,FString,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,ulonglong param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  int *piVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar11 = (int)(param_2 >> 4);
  uVar13 = (longlong)(int)param_1[9] - 1;
  uVar10 = 0x9e3779b9U - iVar11 ^ iVar11 << 8;
  uVar7 = -(uVar10 + iVar11) ^ uVar10 >> 0xd;
  uVar12 = (iVar11 - uVar10) - uVar7 ^ uVar7 >> 0xc;
  uVar10 = (uVar10 - uVar12) - uVar7 ^ uVar12 << 0x10;
  uVar7 = (uVar7 - uVar10) - uVar12 ^ uVar10 >> 5;
  uVar12 = (uVar12 - uVar10) - uVar7 ^ uVar7 >> 3;
  uVar10 = (uVar10 - uVar12) - uVar7 ^ uVar12 << 10;
  plVar9 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar9 = param_1 + 7;
  }
  iVar11 = *(int *)((longlong)plVar9 +
                   (((longlong)(int)((uVar7 - uVar10) - uVar12) ^ (ulonglong)(uVar10 >> 0xf)) &
                   uVar13) * 4);
  if (iVar11 != -1) {
    lVar8 = *param_1;
    do {
      lVar5 = (longlong)iVar11 * 0x20;
      if (*(ulonglong *)(lVar5 + lVar8) == param_2) {
        lVar5 = (longlong)iVar11 * 0x20;
        uVar13 = (longlong)*(int *)(lVar8 + 0x1c + lVar5) & uVar13;
        piVar6 = (int *)((longlong)plVar9 + uVar13 * 4);
        iVar2 = *(int *)((longlong)plVar9 + uVar13 * 4);
        goto joined_r0x0001426e9c30;
      }
      iVar11 = *(int *)(lVar5 + 0x18 + lVar8);
    } while (iVar11 != -1);
  }
  return 0;
joined_r0x0001426e9c30:
  if (iVar2 == -1) {
LAB_1426e9c52:
    lVar8 = *param_1;
    if (*(longlong *)(lVar8 + 8 + lVar5) != 0) {
      FMemory::Free();
      lVar8 = *param_1;
    }
    bVar3 = (byte)iVar11 & 0x1f;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)((longlong)(int)param_1[6] * 0x20 + lVar8) = iVar11;
      lVar8 = *param_1;
    }
    uVar4 = 0xffffffff;
    *(undefined4 *)(lVar8 + lVar5) = 0xffffffff;
    if (0 < *(int *)((longlong)param_1 + 0x34)) {
      uVar4 = (undefined4)param_1[6];
    }
    *(undefined4 *)(lVar8 + 4 + lVar5) = uVar4;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
    *(int *)(param_1 + 6) = iVar11;
    plVar9 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar9 = param_1 + 2;
    }
    puVar1 = (uint *)((longlong)plVar9 +
                     (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
    return 1;
  }
  if (iVar2 == iVar11) {
    *piVar6 = *(int *)(lVar8 + lVar5 + 0x18);
    goto LAB_1426e9c52;
  }
  piVar6 = (int *)(lVar8 + 0x18 + (longlong)iVar2 * 0x20);
  iVar2 = *piVar6;
  goto joined_r0x0001426e9c30;
}



// FUNCTION 1426e9cf0 Remove body=379 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  int *piVar9;
  uint local_res8;
  uint local_resc;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  lVar7 = (longlong)(int)((param_2[1] ^ *param_2) & (int)param_1[9] - 1U);
  plVar5 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar5 = param_1 + 7;
  }
  piVar1 = (int *)((longlong)plVar5 + lVar7 * 4);
  iVar2 = *(int *)((longlong)plVar5 + lVar7 * 4);
  while( true ) {
    if (iVar2 == -1) {
      return 0;
    }
    local_res8 = *param_2;
    local_resc = param_2[1];
    puVar8 = (undefined4 *)((longlong)iVar2 * 0x90 + *param_1);
    local_res18 = *puVar8;
    local_res1c = puVar8[1];
    cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_res18,&local_res8);
    if (cVar4 != '\0') break;
    piVar1 = puVar8 + 0x20;
    iVar2 = *piVar1;
  }
  lVar7 = (longlong)*piVar1;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar3 = *param_1;
    lVar6 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar3 + 0x84 + lVar7 * 0x90));
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    piVar9 = (int *)((longlong)plVar5 + lVar6 * 4);
    iVar2 = *(int *)((longlong)plVar5 + lVar6 * 4);
    while (iVar2 != -1) {
      if (iVar2 == *piVar1) {
        *piVar9 = *(int *)(lVar3 + 0x80 + lVar7 * 0x90);
        break;
      }
      piVar9 = (int *)(lVar3 + 0x80 + (longlong)iVar2 * 0x90);
      iVar2 = *piVar9;
    }
  }
  TSparseArray<TSetElement<TTuple<FSlateFontKey,TSharedRef<FCharacterList,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,lVar7,1);
  return 1;
}



// FUNCTION 1426e9e70 Remove body=153 status=ok
// SIG undefined Remove(void)

void TSet<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget,0>,FDefaultSetAllocator>
     ::Remove(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_1;
    lVar4 = (longlong)
            (int)((int)param_1[9] - 1U & *(uint *)(lVar2 + 0x84 + (longlong)param_2 * 0x90));
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    piVar5 = (int *)((longlong)plVar3 + lVar4 * 4);
    iVar1 = *(int *)((longlong)plVar3 + lVar4 * 4);
    while (iVar1 != -1) {
      if (iVar1 == param_2) {
        *piVar5 = *(int *)(lVar2 + 0x80 + (longlong)param_2 * 0x90);
        break;
      }
      piVar5 = (int *)(lVar2 + 0x80 + (longlong)iVar1 * 0x90);
      iVar1 = *piVar5;
    }
  }
  TSparseArray<TSetElement<TTuple<FSlateFontKey,TSharedRef<FCharacterList,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 1426e9f10 Remove body=69 status=ok
// SIG undefined Remove(void)

void FPhysxSharedData::Remove(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  
  if ((param_2 != 0) && (cVar1 = (**(code **)(*(longlong *)*param_1 + 0x20))(), cVar1 != '\0')) {
    (**(code **)(*(longlong *)*param_1 + 0x18))((longlong *)*param_1,param_2);
    TSet<TTuple<physx::PxBase_*,FString>,TDefaultMapHashableKeyFuncs<physx::PxBase_*,FString,0>,FDefaultSetAllocator>
    ::Remove(param_1 + 1,param_2);
  }
  return;
}



// FUNCTION 1426e9f60 FUN_1426e9f60 body=387 status=ok
// SIG undefined FUN_1426e9f60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426e9f60(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar5 = FBodyInstance::GetPxRigidActor(param_2,param_3);
  TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x368 + (ulonglong)param_3 * 0x50,uVar5);
  uVar5 = FBodyInstance::GetPxRigidActor(param_2,(ulonglong)param_3);
  bVar2 = false;
  DAT_146534a6c = DAT_146534a6c + 1;
  lVar8 = (longlong)(DAT_146534a60 + -1);
  if (-1 < DAT_146534a60 + -1) {
    lVar7 = lVar8 << 4;
    bVar2 = false;
    do {
      if (((*(int *)(lVar7 + 8 + DAT_146534a58) == 0) ||
          (plVar1 = *(longlong **)(lVar7 + DAT_146534a58), plVar1 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(*plVar1 + 0x40))(plVar1,param_1,uVar5), cVar4 == '\0')) {
        bVar2 = true;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
  }
  iVar3 = DAT_146534a60;
  DAT_146534a6c = DAT_146534a6c + -1;
  if ((bVar2) && (DAT_146534a6c < 1)) {
    iVar6 = 0;
    if (0 < DAT_146534a60) {
      lVar8 = 0;
      do {
        if (((*(int *)(lVar8 + 8 + DAT_146534a58) == 0) ||
            (*(longlong **)(lVar8 + DAT_146534a58) == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(**(longlong **)(lVar8 + DAT_146534a58) + 0x10))(), cVar4 != '\0'))
        {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146534a58,iVar6,1,1);
        }
        else {
          iVar6 = iVar6 + 1;
          lVar8 = lVar8 + 0x10;
        }
      } while (iVar6 < DAT_146534a60);
    }
    _DAT_146534a68 = DAT_146534a60 * 2;
    if (_DAT_146534a68 < 3) {
      _DAT_146534a68 = 2;
    }
    if ((_DAT_146534a68 < iVar3) && (DAT_146534a64 != DAT_146534a60)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146534a58);
    }
  }
  return;
}



// FUNCTION 1426ea0f0 FUN_1426ea0f0 body=241 status=ok
// SIG undefined FUN_1426ea0f0(void)

void FUN_1426ea0f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  lVar2 = (longlong)*(int *)(param_1 + 0x2ba8);
  if (*(int *)(param_1 + 0x2ba8) != 0) {
    iVar6 = 0;
    bVar7 = **(longlong **)(param_1 + 0x2ba0) != param_2;
    lVar3 = 0;
    iVar4 = 0;
    do {
      lVar3 = lVar3 + 1;
      iVar5 = iVar4 + 1;
      if (lVar3 < lVar2) {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x2ba0) + lVar3 * 8);
        do {
          if (bVar7 != (*plVar1 != param_2)) break;
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + 1;
          plVar1 = plVar1 + 1;
        } while (lVar3 < lVar2);
      }
      if (bVar7 != false) {
        if (iVar6 != iVar4) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x2ba0) + (longlong)iVar6 * 8),
                     (void *)(*(longlong *)(param_1 + 0x2ba0) + (longlong)iVar4 * 8),
                     (longlong)(iVar5 - iVar4) << 3);
        }
        iVar6 = iVar6 + (iVar5 - iVar4);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar5;
    } while (lVar3 < lVar2);
    *(int *)(param_1 + 0x2ba8) = iVar6;
  }
  return;
}



// FUNCTION 1426ea1f0 FUN_1426ea1f0 body=141 status=ok
// SIG undefined FUN_1426ea1f0(void)

undefined8 FUN_1426ea1f0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  
  if (param_2 != 0) {
    uVar4 = 0;
    if (0 < *(int *)(param_1 + 0x2b58)) {
      lVar2 = *(longlong *)(param_1 + 0x2b50);
      uVar6 = uVar4;
      do {
        iVar5 = (int)uVar6;
        if (*(longlong *)(lVar2 + uVar4 * 8) == param_2) {
          iVar1 = *(int *)(param_1 + 0x2b58);
          iVar3 = (iVar1 - iVar5) + -1;
          if (iVar3 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar2 + (longlong)iVar5 * 8),
                       (void *)(lVar2 + (longlong)(iVar5 + 1) * 8),(longlong)iVar3 << 3);
            iVar1 = *(int *)(param_1 + 0x2b58);
          }
          *(int *)(param_1 + 0x2b58) = iVar1 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x2b50));
          return 1;
        }
        uVar6 = (ulonglong)(iVar5 + 1);
        uVar4 = uVar4 + 1;
      } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x2b58));
    }
  }
  return 0;
}



// FUNCTION 1426ea280 FUN_1426ea280 body=256 status=ok
// SIG undefined FUN_1426ea280(void)

void FUN_1426ea280(longlong param_1,char *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  lVar4 = (longlong)*(int *)(param_1 + 0x2f0);
  if (*(int *)(param_1 + 0x2f0) != 0) {
    iVar5 = 0;
    bVar6 = **(char **)(param_1 + 0x2e8) != *param_2;
    lVar1 = 0;
    iVar2 = 0;
    do {
      lVar1 = lVar1 + 1;
      iVar3 = iVar2 + 1;
      if (lVar1 < lVar4) {
        do {
          if (bVar6 != (*(char *)(*(longlong *)(param_1 + 0x2e8) + lVar1) != *param_2)) break;
          iVar3 = iVar3 + 1;
          lVar1 = lVar1 + 1;
        } while (lVar1 < lVar4);
      }
      if (bVar6 != false) {
        if (iVar5 != iVar2) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar5 + *(longlong *)(param_1 + 0x2e8)),
                     (void *)(*(longlong *)(param_1 + 0x2e8) + (longlong)iVar2),
                     (longlong)(iVar3 - iVar2));
        }
        iVar5 = iVar5 + (iVar3 - iVar2);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar2 = iVar3;
    } while (lVar1 < lVar4);
    *(int *)(param_1 + 0x2f0) = iVar5;
  }
  FUN_1426f06b0(param_1);
  return;
}



// FUNCTION 1426ea380 RemoveReplicatedTarget body=49 status=ok
// SIG undefined RemoveReplicatedTarget(void)

void FPhysicsReplication::RemoveReplicatedTarget(longlong param_1)

{
  undefined8 local_res8 [2];
  undefined8 local_res18 [2];
  
  FWeakObjectPtr::operator=(local_res8);
  local_res18[0] = local_res8[0];
  TSet<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 8,local_res18);
  return;
}



// FUNCTION 1426ea3c0 RemoveSingle body=109 status=ok
// SIG undefined RemoveSingle(void)

undefined8
TArray<FBodyInstance_*,FDefaultAllocator>::RemoveSingle(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != plVar1 + (int)param_1[1]) {
    plVar3 = plVar1;
    do {
      if (*plVar3 == *param_2) {
        iVar2 = (int)((longlong)plVar3 - (longlong)plVar1 >> 3);
        if (iVar2 == -1) {
          return 0;
        }
        ::_guard_xfg_dispatch_icall_nop
                  (plVar1 + iVar2,plVar1 + iVar2 + 1,(longlong)(((int)param_1[1] - iVar2) + -1) << 3
                  );
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        return 1;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1 + (int)param_1[1]);
  }
  return 0;
}



// FUNCTION 1426ea430 FUN_1426ea430 body=427 status=ok
// SIG undefined FUN_1426ea430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1426ea430(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_88 [48];
  undefined2 local_58 [4];
  longlong local_50 [4];
  ulonglong local_30;
  
  puVar9 = auStack_88;
  local_30 = DAT_1468387a8 ^ (ulonglong)local_58;
  (**(code **)(*param_1 + 0x358))(param_1,0,0);
  local_58[0] = 3;
  uVar5 = (**(code **)(*param_1 + 0x90))(param_1,local_58);
  uVar10 = (ulonglong)uVar5;
  if (uVar5 == 0) {
    (**(code **)(*param_1 + 0x360))(param_1);
  }
  else {
    if (uVar10 == 0) {
      plVar12 = (longlong *)0x0;
      puVar9 = auStack_88;
    }
    else {
      uVar7 = uVar10 * 8 + 0x1e;
      if (uVar7 <= uVar10 * 8 + 0xf) {
        uVar7 = 0xffffffffffffff0;
      }
      puVar9 = auStack_88 + -(uVar7 & 0xfffffffffffffff0);
      plVar12 = (longlong *)((longlong)local_50 + -(uVar7 & 0xfffffffffffffff0));
    }
    lVar1 = *param_1;
    local_58[0] = 3;
    *(undefined4 *)(puVar9 + 0x20) = 0;
    pcVar2 = *(code **)(lVar1 + 0x98);
    *(undefined8 *)(puVar9 + -8) = 0x1426ea50c;
    (*pcVar2)(param_1,local_58,plVar12,uVar10);
    plVar11 = plVar12;
    if (uVar5 != 0) {
      do {
        plVar8 = (longlong *)0x0;
        if ((short)((longlong *)*plVar11)[1] == 6) {
          plVar8 = (longlong *)*plVar11;
        }
        if (plVar8 != (longlong *)0x0) {
          pcVar2 = *(code **)(*plVar8 + 0x178);
          *(undefined8 *)(puVar9 + -8) = 0x1426ea543;
          pbVar6 = (byte *)(*pcVar2)(plVar8,local_58);
          if ((*pbVar6 & 1) != 0) {
            pcVar2 = *(code **)(*plVar8 + 0x1b8);
            *(undefined8 *)(puVar9 + -8) = 0x1426ea558;
            cVar4 = (*pcVar2)(plVar8,local_50);
            if (cVar4 != '\0') {
              pcVar2 = *(code **)(*plVar8 + 0xa8);
              *(undefined8 *)(puVar9 + -8) = 0x1426ea56f;
              (*pcVar2)(plVar8,local_50,1);
            }
          }
        }
        uVar10 = uVar10 - 1;
        plVar11 = plVar11 + 1;
      } while (uVar10 != 0);
    }
    pcVar2 = *(code **)(*param_1 + 0x70);
    *(undefined8 *)(puVar9 + -8) = 0x1426ea58b;
    (*pcVar2)(param_1,plVar12,uVar5,0);
    pcVar2 = *(code **)(*param_1 + 0x60);
    *(undefined8 *)(puVar9 + -8) = 0x1426ea59a;
    (*pcVar2)(param_1,plVar12,uVar5);
    pcVar2 = *(code **)(*param_1 + 0x360);
    *(undefined8 *)(puVar9 + -8) = 0x1426ea5a6;
    (*pcVar2)(param_1);
    uVar3 = *(undefined8 *)(param_2 + 0x218);
    *(undefined8 *)(puVar9 + -8) = 0x1426ea5b5;
    FUN_1426deee0(uVar3,param_2);
  }
  *(undefined8 *)(puVar9 + -8) = 0x1426ea5c1;
  return;
}



// FUNCTION 1426ea5e0 SaveGame body=117 status=ok
// SIG undefined SaveGame(void)

undefined1 FGenericSaveGameSystem::SaveGame(longlong *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined8 *in_stack_00000028;
  undefined8 local_28;
  undefined4 uStack_20;
  longlong local_18 [2];
  
  local_28 = *in_stack_00000028;
  uStack_20 = *(undefined4 *)(in_stack_00000028 + 1);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x38))((undefined4)local_28,local_18);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*puVar2;
  }
  uVar3 = FUN_1415c3d50();
  uVar1 = FUN_14167ef40(&local_28,puVar4,uVar3,0);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 1426ea670 FUN_1426ea670 body=595 status=ok
// SIG undefined FUN_1426ea670(void)

void FUN_1426ea670(longlong param_1,longlong param_2)

{
  byte bVar1;
  
  FUN_141763960();
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_1 + 0xb4);
    *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_1 + 0xbc);
    *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_1 + 0xc4);
    *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_1 + 0xcc);
    *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_1 + 0xd4);
    *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_1 + 0xd8);
    *(undefined1 *)(param_1 + 0x218) = *(undefined1 *)(param_1 + 0xdc);
    *(undefined1 *)(param_1 + 0x219) = *(undefined1 *)(param_1 + 0xdd);
    *(undefined1 *)(param_1 + 0x21a) = *(undefined1 *)(param_1 + 0xde);
    *(undefined8 *)(param_1 + 0x21c) = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0x224) = *(undefined8 *)(param_1 + 0xe8);
    *(undefined4 *)(param_1 + 0x22c) = *(undefined4 *)(param_1 + 0xf0);
    *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_1 + 0xf4);
    *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_1 + 0xf8);
    *(undefined1 *)(param_1 + 0x238) = *(undefined1 *)(param_1 + 0xfc);
    *(undefined1 *)(param_1 + 0x239) = *(undefined1 *)(param_1 + 0xfd);
    *(undefined8 *)(param_1 + 0x23c) = *(undefined8 *)(param_1 + 0x100);
    *(undefined8 *)(param_1 + 0x244) = *(undefined8 *)(param_1 + 0x108);
    *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)(param_1 + 0x110);
    *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_1 + 0x114);
    *(undefined1 *)(param_1 + 0x254) = *(undefined1 *)(param_1 + 0x118);
    *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_1 + 0x11c);
    *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)(param_1 + 0x124);
    *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_1 + 300);
    *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)(param_1 + 0x134);
    *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(param_1 + 0x13c);
    *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)(param_1 + 0x144);
    *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_1 + 0x14c);
    *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_1 + 0x154);
    *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_1 + 0x15c);
    *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_1 + 0x164);
    *(undefined8 *)(param_1 + 0x2a4) = *(undefined8 *)(param_1 + 0x168);
    *(undefined8 *)(param_1 + 0x2ac) = *(undefined8 *)(param_1 + 0x170);
    *(undefined8 *)(param_1 + 0x2b4) = *(undefined8 *)(param_1 + 0x178);
    *(undefined8 *)(param_1 + 700) = *(undefined8 *)(param_1 + 0x180);
    *(undefined8 *)(param_1 + 0x2c4) = *(undefined8 *)(param_1 + 0x188);
    *(undefined8 *)(param_1 + 0x2cc) = *(undefined8 *)(param_1 + 400);
    *(undefined8 *)(param_1 + 0x2d4) = *(undefined8 *)(param_1 + 0x198);
    *(undefined4 *)(param_1 + 0x2dc) = *(undefined4 *)(param_1 + 0x1a0);
    *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x1a4);
    *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_1 + 0x1ac);
    *(undefined1 *)(param_1 + 0x2ec) = *(undefined1 *)(param_1 + 0x1b0);
    *(byte *)(param_1 + 0x2f0) =
         *(byte *)(param_1 + 0x2f0) ^ (*(byte *)(param_1 + 0x2f0) ^ *(byte *)(param_1 + 0x1b4)) & 1;
    bVar1 = (*(byte *)(param_1 + 0x2f0) ^ *(byte *)(param_1 + 0x1b4)) & 2 ^
            *(byte *)(param_1 + 0x2f0);
    *(byte *)(param_1 + 0x2f0) = bVar1;
    bVar1 = (bVar1 ^ *(byte *)(param_1 + 0x1b4)) & 4 ^ bVar1;
    *(byte *)(param_1 + 0x2f0) = bVar1;
    bVar1 = (bVar1 ^ *(byte *)(param_1 + 0x1b4)) & 8 ^ bVar1;
    *(byte *)(param_1 + 0x2f0) = bVar1;
    *(byte *)(param_1 + 0x2f0) = (bVar1 ^ *(byte *)(param_1 + 0x1b4)) & 0x10 ^ bVar1;
  }
  return;
}



// FUNCTION 1426ea8d0 FUN_1426ea8d0 body=36 status=ok
// SIG undefined FUN_1426ea8d0(void)

void FUN_1426ea8d0(undefined1 *param_1,undefined1 param_2,byte param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = (uint)param_3 * 4 + 0x1c;
  if (uVar1 != 0) {
    for (uVar2 = (ulonglong)uVar1; uVar2 != 0; uVar2 = uVar2 - 1) {
      *param_1 = param_2;
      param_1 = param_1 + 1;
    }
  }
  return;
}



// FUNCTION 1426ea900 FUN_1426ea900 body=36 status=ok
// SIG undefined FUN_1426ea900(void)

void FUN_1426ea900(longlong param_1,char param_2,undefined4 param_3)

{
  *(byte *)(param_1 + 0x4a4) = *(byte *)(param_1 + 0x4a4) & 0xf7;
  *(byte *)(param_1 + 0x4a4) = *(byte *)(param_1 + 0x4a4) | param_2 << 3;
  *(undefined4 *)(param_1 + 0x3b0) = param_3;
  FUN_1426ce400();
  return;
}



// FUNCTION 1426ea930 FUN_1426ea930 body=18 status=ok
// SIG undefined FUN_1426ea930(void)

void FUN_1426ea930(longlong *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x33) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001426ea93b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x408))();
  return;
}



// FUNCTION 1426ea950 CanWorkWhenGamePaused body=12 status=ok
// SIG undefined CanWorkWhenGamePaused(void)

void UMediumSkipWidget::CanWorkWhenGamePaused(longlong param_1)

{
  FUN_1426ccf90(param_1 + 0x318);
  return;
}



// FUNCTION 1426ea960 CanWorkWhenGamePaused body=12 status=ok
// SIG undefined CanWorkWhenGamePaused(void)

void UMediumSkipWidget::CanWorkWhenGamePaused(longlong param_1)

{
  FConstraintInstance::SetAngularDriveParams(param_1 + 0x318);
  return;
}



// FUNCTION 1426ea970 FUN_1426ea970 body=46 status=ok
// SIG undefined FUN_1426ea970(void)

void FUN_1426ea970(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_18 [16];
  
  uVar1 = FRotator::Quaternion(param_2,local_18);
  FConstraintInstance::SetAngularOrientationTarget(param_1 + 0x318,uVar1);
  return;
}



// FUNCTION 1426ea9a0 FUN_1426ea9a0 body=18 status=ok
// SIG undefined FUN_1426ea9a0(void)

void FUN_1426ea9a0(longlong *param_1,undefined4 param_2)

{
  *(undefined4 *)((longlong)param_1 + 0x19c) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001426ea9ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x408))();
  return;
}



// FUNCTION 1426ea9c0 FUN_1426ea9c0 body=26 status=ok
// SIG undefined FUN_1426ea9c0(void)

void FUN_1426ea9c0(longlong param_1,undefined1 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 0x3ec) = param_2;
  *(undefined4 *)(param_1 + 0x3e4) = param_3;
  FUN_1426ce3c0();
  return;
}



// FUNCTION 1426ea9e0 FUN_1426ea9e0 body=26 status=ok
// SIG undefined FUN_1426ea9e0(void)

void FUN_1426ea9e0(longlong param_1,undefined1 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 0x3ed) = param_2;
  *(undefined4 *)(param_1 + 1000) = param_3;
  FUN_1426ce3c0();
  return;
}



// FUNCTION 1426eaa00 FUN_1426eaa00 body=26 status=ok
// SIG undefined FUN_1426eaa00(void)

void FUN_1426eaa00(longlong param_1,undefined1 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 0x408) = param_2;
  *(undefined4 *)(param_1 + 0x404) = param_3;
  FUN_1426ce3c0();
  return;
}



// FUNCTION 1426eaa20 CanWorkWhenGamePaused body=12 status=ok
// SIG undefined CanWorkWhenGamePaused(void)

void UMediumSkipWidget::CanWorkWhenGamePaused(longlong param_1)

{
  FUN_1426cd100(param_1 + 0x318);
  return;
}



// FUNCTION 1426eaa30 CanWorkWhenGamePaused body=12 status=ok
// SIG undefined CanWorkWhenGamePaused(void)

void UMediumSkipWidget::CanWorkWhenGamePaused(longlong param_1)

{
  FConstraintInstance::SetAngularVelocityDriveTwistAndSwing(param_1 + 0x318);
  return;
}



// FUNCTION 1426eaa40 CanWorkWhenGamePaused body=12 status=ok
// SIG undefined CanWorkWhenGamePaused(void)

void UMediumSkipWidget::CanWorkWhenGamePaused(longlong param_1)

{
  FConstraintInstance::SetAngularVelocityTarget(param_1 + 0x318);
  return;
}



// FUNCTION 1426eaa60 FUN_1426eaa60 body=22 status=ok
// SIG undefined FUN_1426eaa60(void)

void FUN_1426eaa60(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x1ea0) = *param_2;
  *(undefined4 *)(param_1 + 0x1ea8) = *(undefined4 *)(param_2 + 1);
  return;
}



// FUNCTION 1426eaa80 FUN_1426eaa80 body=125 status=ok
// SIG undefined FUN_1426eaa80(void)

void FUN_1426eaa80(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_2 + 0x18);
    FWeakObjectPtr::operator=(param_1 + 0x2f0);
    *(undefined8 *)(param_1 + 0x338) = param_3;
  }
  if (param_4 != 0) {
    *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_4 + 0x18);
    FWeakObjectPtr::operator=(param_1 + 0x2f8,param_4);
    *(undefined8 *)(param_1 + 0x340) = param_5;
  }
  FUN_1426e35d0(param_1);
  return;
}



// FUNCTION 1426eab00 CanWorkWhenGamePaused body=12 status=ok
// SIG undefined CanWorkWhenGamePaused(void)

void UMediumSkipWidget::CanWorkWhenGamePaused(longlong param_1)

{
  FUN_1426cd6d0(param_1 + 0x318);
  return;
}



// FUNCTION 1426eab10 CanWorkWhenGamePaused body=12 status=ok
// SIG undefined CanWorkWhenGamePaused(void)

void UMediumSkipWidget::CanWorkWhenGamePaused(longlong param_1)

{
  FConstraintInstance::SetRefOrientation(param_1 + 0x318);
  return;
}



// FUNCTION 1426eab20 FUN_1426eab20 body=15 status=ok
// SIG undefined FUN_1426eab20(void)

void FUN_1426eab20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1426cda20(param_1 + 0x318,param_2,param_3,0);
  return;
}



// FUNCTION 1426eab30 FUN_1426eab30 body=203 status=ok
// SIG undefined FUN_1426eab30(void)

void FUN_1426eab30(longlong *param_1,float *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  if ((*(uint *)(param_1 + 0x588) & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x93) = 0x3f800000;
    *(uint *)(param_1 + 0x588) = *(uint *)(param_1 + 0x588) | 0x10;
    *(undefined4 *)((longlong)param_1 + 0x49c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x94) = 0x3f800000;
  }
  if (((*(float *)(param_1 + 0x93) != *param_2) ||
      (*(float *)((longlong)param_1 + 0x49c) != param_2[1])) ||
     (*(float *)(param_1 + 0x94) != param_2[2])) {
    param_1[0x96] = param_1[0x93];
    uVar1 = *(undefined8 *)param_2;
    *(int *)(param_1 + 0x97) = (int)param_1[0x94];
    fVar2 = param_2[2];
    *(undefined8 *)((longlong)param_1 + 0x4a4) = uVar1;
    *(float *)((longlong)param_1 + 0x4ac) = fVar2;
    lVar4 = (**(code **)(*param_1 + 0x148))();
    uVar3 = *(undefined4 *)(lVar4 + 0x790);
    *(uint *)(param_1 + 0x588) = *(uint *)(param_1 + 0x588) | 0x20;
    *(undefined4 *)((longlong)param_1 + 0x4bc) = param_3;
    *(undefined4 *)(param_1 + 0x98) = uVar3;
  }
  return;
}



// FUNCTION 1426eac00 CanWorkWhenGamePaused body=12 status=ok
// SIG undefined CanWorkWhenGamePaused(void)

void UMediumSkipWidget::CanWorkWhenGamePaused(longlong param_1)

{
  FConstraintInstance::SetDisableCollision(param_1 + 0x318);
  return;
}



// FUNCTION 1426eac10 FUN_1426eac10 body=11 status=ok
// SIG undefined FUN_1426eac10(void)

void FUN_1426eac10(longlong param_1,int param_2,char param_3)

{
  *(char *)(param_2 + param_1) = param_3 * '\x02';
  return;
}



// FUNCTION 1426eac30 FUN_1426eac30 body=233 status=ok
// SIG undefined FUN_1426eac30(void)

void FUN_1426eac30(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res10;
  
  if (param_2 == (undefined4 *)0x0) {
    FWeakObjectPtr::operator=(&local_res10);
    param_1[2] = (undefined4)local_res10;
    param_1[3] = local_res10._4_4_;
    FWeakObjectPtr::operator=(&local_res10,0);
    *param_1 = (undefined4)local_res10;
    param_1[1] = local_res10._4_4_;
    *(undefined8 *)(param_1 + 6) = 0;
    param_1[4] = 0xffffffff;
  }
  else {
    param_1[4] = *param_2;
    cVar1 = FWeakObjectPtr::IsValid(param_2 + 0x50);
    if (cVar1 == '\0') {
      uVar3 = 0;
      local_res10 = 0;
    }
    else {
      lVar2 = FWeakObjectPtr::Get(param_2 + 0x50);
      uVar3 = *(undefined8 *)(lVar2 + 0x90);
    }
    *(undefined8 *)(param_1 + 6) = uVar3;
    cVar1 = FWeakObjectPtr::IsValid(param_2 + 0x4e);
    if (cVar1 != '\0') {
      param_1[2] = param_2[0x4e];
      param_1[3] = param_2[0x4f];
      lVar2 = FWeakObjectPtr::Get();
      FWeakObjectPtr::operator=(param_1,*(undefined8 *)(lVar2 + 0x118));
      return;
    }
  }
  return;
}



// FUNCTION 1426ead20 SetSecondFogDataFogDensity body=9 status=ok
// SIG undefined SetSecondFogDataFogDensity(void)

void UE::MovieScene::SetSecondFogDataFogDensity(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x200) = param_2;
  return;
}



// FUNCTION 1426ead30 FUN_1426ead30 body=798 status=ok
// SIG undefined FUN_1426ead30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426ead30(char *param_1,longlong param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
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
  undefined8 uVar13;
  char cVar14;
  longlong *plVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong *plVar19;
  bool bVar20;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined1 local_1a7 [3];
  int local_1a4;
  int local_1a0 [2];
  longlong local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  longlong *local_150;
  longlong local_148;
  undefined1 local_d8 [48];
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  plVar15 = (longlong *)FUN_142697a40(param_2);
  if (plVar15 != (longlong *)0x0) {
    pbVar16 = (byte *)(**(code **)(*plVar15 + 0x178))(plVar15,&local_1a8);
    if (((*pbVar16 & 1) != 0) &&
       (pbVar16 = (byte *)(**(code **)(*plVar15 + 0x60))(plVar15,local_1a7), (*pbVar16 & 8) == 0)) {
      if ((*param_1 == '\0') || (lVar18 = 2, (*(byte *)(param_2 + 0x12) & 8) == 0)) {
        lVar18 = 0;
      }
      if ((param_4 != '\0') && (cVar14 = FPhysScene::IsSubstepping(param_1,lVar18), cVar14 != '\0'))
      {
        lVar18 = *(longlong *)(param_1 + lVar18 * 8 + 0x2f0);
        local_198 = param_2;
        cVar14 = FBodyInstance::IsNonKinematic(param_2);
        if ((cVar14 == '\0') && ((*(byte *)(local_198 + 0x13) & 2) != 0)) {
          uVar2 = *param_3;
          uVar3 = param_3[1];
          uVar4 = param_3[2];
          uVar5 = param_3[3];
          uVar6 = param_3[4];
          uVar7 = param_3[5];
          local_148 = local_198;
          puVar17 = (undefined8 *)FUN_1426992a0(local_198,local_d8,1);
          uVar8 = *puVar17;
          uVar9 = puVar17[1];
          uVar10 = puVar17[2];
          uVar11 = puVar17[3];
          uVar12 = puVar17[4];
          uVar13 = puVar17[5];
          piVar1 = (int *)(lVar18 + 0xac);
          LOCK();
          bVar20 = *piVar1 == 0;
          if (bVar20) {
            *piVar1 = 0;
          }
          UNLOCK();
          plVar19 = (longlong *)((ulonglong)!bVar20 * 0x50 + lVar18);
          TSet<TTuple<FBodyInstance_*,FPhysTarget>,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>,FDefaultSetAllocator>
          ::FindId(plVar19,&local_1a4,local_198);
          if ((local_1a4 == -1) || (lVar18 = (longlong)local_1a4 * 0xe0 + *plVar19, lVar18 == 0)) {
            local_150 = &local_198;
            FUN_1426d1c40(plVar19,local_1a0,&local_150,0);
            lVar18 = (longlong)local_1a0[0] * 0xe0 + *plVar19;
          }
          *(undefined1 *)(lVar18 + 0xc0) = 1;
          *(longlong *)(lVar18 + 0x50) = local_148;
          *(undefined8 *)(lVar18 + 0x60) = uVar2;
          *(undefined8 *)(lVar18 + 0x68) = uVar3;
          *(undefined8 *)(lVar18 + 0x70) = uVar4;
          *(undefined8 *)(lVar18 + 0x78) = uVar5;
          *(undefined8 *)(lVar18 + 0x80) = uVar6;
          *(undefined8 *)(lVar18 + 0x88) = uVar7;
          *(undefined8 *)(lVar18 + 0x90) = uVar8;
          *(undefined8 *)(lVar18 + 0x98) = uVar9;
          *(undefined8 *)(lVar18 + 0xa0) = uVar10;
          *(undefined8 *)(lVar18 + 0xa8) = uVar11;
          *(undefined8 *)(lVar18 + 0xb0) = uVar12;
          *(undefined8 *)(lVar18 + 0xb8) = uVar13;
        }
      }
      local_190 = *(undefined4 *)param_3;
      local_18c = *(undefined4 *)((longlong)param_3 + 4);
      local_188 = *(undefined4 *)(param_3 + 1);
      local_184 = *(undefined4 *)((longlong)param_3 + 0xc);
      local_180 = *(undefined4 *)(param_3 + 2);
      local_17c = *(undefined4 *)((longlong)param_3 + 0x14);
      local_178 = *(undefined4 *)(param_3 + 3);
      (**(code **)(*plVar15 + 0x1b0))(plVar15,&local_190);
      return;
    }
    local_170 = *(undefined4 *)param_3;
    local_16c = *(undefined4 *)((longlong)param_3 + 4);
    local_168 = *(undefined4 *)(param_3 + 1);
    local_164 = *(undefined4 *)((longlong)param_3 + 0xc);
    local_160 = *(undefined4 *)(param_3 + 2);
    local_15c = *(undefined4 *)((longlong)param_3 + 0x14);
    local_158 = *(undefined4 *)(param_3 + 3);
    (**(code **)(*plVar15 + 0xa8))(plVar15,&local_170,1);
  }
  return;
}



// FUNCTION 1426eb060 FUN_1426eb060 body=36 status=ok
// SIG undefined FUN_1426eb060(void)

void FUN_1426eb060(longlong param_1,char param_2,undefined4 param_3)

{
  *(byte *)(param_1 + 0x4a4) = *(byte *)(param_1 + 0x4a4) & 0xef;
  *(byte *)(param_1 + 0x4a4) = *(byte *)(param_1 + 0x4a4) | param_2 << 4;
  *(undefined4 *)(param_1 + 0x3ac) = param_3;
  FUN_1426ce400();
  return;
}



// FUNCTION 1426eb090 FUN_1426eb090 body=18 status=ok
// SIG undefined FUN_1426eb090(void)

void FUN_1426eb090(longlong *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x32) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001426eb09b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x408))();
  return;
}



// FUNCTION 1426eb0b0 CanWorkWhenGamePaused body=12 status=ok
// SIG undefined CanWorkWhenGamePaused(void)

void UMediumSkipWidget::CanWorkWhenGamePaused(longlong param_1)

{
  FConstraintInstance::SetLinearDriveParams(param_1 + 0x318);
  return;
}



// FUNCTION 1426eb0c0 CanWorkWhenGamePaused body=12 status=ok
// SIG undefined CanWorkWhenGamePaused(void)

void UMediumSkipWidget::CanWorkWhenGamePaused(longlong param_1)

{
  FConstraintInstance::SetLinearPositionDrive(param_1 + 0x318);
  return;
}



// FUNCTION 1426eb0d0 CanWorkWhenGamePaused body=12 status=ok
// SIG undefined CanWorkWhenGamePaused(void)

void UMediumSkipWidget::CanWorkWhenGamePaused(longlong param_1)

{
  FConstraintInstance::SetLinearPositionTarget(param_1 + 0x318);
  return;
}



// FUNCTION 1426eb0e0 FUN_1426eb0e0 body=18 status=ok
// SIG undefined FUN_1426eb0e0(void)

void FUN_1426eb0e0(longlong *param_1,undefined4 param_2)

{
  *(undefined4 *)((longlong)param_1 + 0x194) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001426eb0eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x408))();
  return;
}



// FUNCTION 1426eb100 CanWorkWhenGamePaused body=12 status=ok
// SIG undefined CanWorkWhenGamePaused(void)

void UMediumSkipWidget::CanWorkWhenGamePaused(longlong param_1)

{
  FConstraintInstance::SetLinearVelocityDrive(param_1 + 0x318);
  return;
}



// FUNCTION 1426eb110 CanWorkWhenGamePaused body=12 status=ok
// SIG undefined CanWorkWhenGamePaused(void)

void UMediumSkipWidget::CanWorkWhenGamePaused(longlong param_1)

{
  FConstraintInstance::SetLinearVelocityTarget(param_1 + 0x318);
  return;
}



// FUNCTION 1426eb120 FUN_1426eb120 body=26 status=ok
// SIG undefined FUN_1426eb120(void)

void FUN_1426eb120(longlong param_1,undefined1 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 0x3cc) = param_2;
  *(undefined4 *)(param_1 + 0x3c8) = param_3;
  FUN_1426cee70();
  return;
}



// FUNCTION 1426eb140 FUN_1426eb140 body=26 status=ok
// SIG undefined FUN_1426eb140(void)

void FUN_1426eb140(longlong param_1,undefined1 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 0x3cd) = param_2;
  *(undefined4 *)(param_1 + 0x3c8) = param_3;
  FUN_1426cee70();
  return;
}



// FUNCTION 1426eb160 FUN_1426eb160 body=26 status=ok
// SIG undefined FUN_1426eb160(void)

void FUN_1426eb160(longlong param_1,undefined1 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 0x3ce) = param_2;
  *(undefined4 *)(param_1 + 0x3c8) = param_3;
  FUN_1426cee70();
  return;
}



// FUNCTION 1426eb180 FUN_1426eb180 body=84 status=ok
// SIG undefined FUN_1426eb180(void)

void FUN_1426eb180(longlong *param_1,undefined4 param_2,undefined4 *param_3,byte param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *(undefined4 *)((longlong)param_1 + 0x494) = param_2;
  *(uint *)(param_1 + 0x588) = (uint)param_4 << 3 | *(uint *)(param_1 + 0x588) & 0xffffdff7 | 4;
  *(undefined4 *)((longlong)param_1 + 0x484) = uVar1;
  *(undefined4 *)(param_1 + 0x91) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x48c) = uVar3;
  *(undefined4 *)(param_1 + 0x92) = uVar4;
  (**(code **)(*param_1 + 0x7e0))();
  *(undefined4 *)(param_1 + 0x573) = 0;
  return;
}



// FUNCTION 1426eb1e0 CanWorkWhenGamePaused body=12 status=ok
// SIG undefined CanWorkWhenGamePaused(void)

void UMediumSkipWidget::CanWorkWhenGamePaused(longlong param_1)

{
  FUN_1426cd620(param_1 + 0x318);
  return;
}



// FUNCTION 1426eb1f0 CanWorkWhenGamePaused body=12 status=ok
// SIG undefined CanWorkWhenGamePaused(void)

void UMediumSkipWidget::CanWorkWhenGamePaused(longlong param_1)

{
  FConstraintInstance::SetOrientationDriveTwistAndSwing(param_1 + 0x318);
  return;
}



// FUNCTION 1426eb240 FUN_1426eb240 body=131 status=ok
// SIG undefined FUN_1426eb240(void)

void FUN_1426eb240(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(param_1 + 4) == 0) goto LAB_1426eb2aa;
    do {
      plVar1 = (longlong *)FUN_1426e2550((int)*(short *)(param_1 + 0x60 + uVar3 * 2));
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x358))
                  (plVar1,
                   "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysScene.cpp"
                   ,0x78e);
        (**(code **)(*plVar1 + 0x2b0))(plVar1,*(undefined4 *)(param_1 + 0x4b0));
        (**(code **)(*plVar1 + 0x360))(plVar1);
      }
LAB_1426eb2aa:
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return;
}



// FUNCTION 1426eb2d0 FUN_1426eb2d0 body=448 status=ok
// SIG undefined FUN_1426eb2d0(void)

void FUN_1426eb2d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int local_res8 [2];
  undefined8 ***local_28;
  undefined8 ***local_20;
  
  pfVar6 = (float *)0x0;
  pfVar4 = pfVar6;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    pfVar4 = *(float **)(*(longlong *)(param_1 + 0x58) + 0x50);
  }
  if (pfVar4 != (float *)0x0) {
    FWeakObjectPtr::operator=(&local_28);
    local_20 = local_28;
    TSet<TTuple<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,FReplicatedPhysicsTarget,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 8,local_res8,&local_20);
    pfVar3 = pfVar6;
    if (local_res8[0] != -1) {
      pfVar3 = (float *)((longlong)local_res8[0] * 0x90 + *(longlong *)(param_1 + 8));
    }
    pfVar5 = pfVar3 + 4;
    if (pfVar3 == (float *)0x0) {
      pfVar5 = pfVar6;
    }
    if (pfVar5 == (float *)0x0) {
      local_20 = &local_28;
      FUN_1426d2190(param_1 + 8,local_res8,&local_20,0);
      pfVar5 = (float *)(*(longlong *)(param_1 + 8) + (longlong)local_res8[0] * 0x90 + 0x10);
      *(undefined8 *)(pfVar5 + 0x17) = *param_4;
      pfVar5[0x19] = *(float *)(param_4 + 1);
      *(undefined8 *)(pfVar5 + 0x14) = *param_4;
      pfVar5[0x16] = *(float *)(param_4 + 1);
    }
    uVar1 = param_4[1];
    *(undefined8 *)pfVar5 = *param_4;
    *(undefined8 *)(pfVar5 + 2) = uVar1;
    uVar1 = param_4[3];
    *(undefined8 *)(pfVar5 + 4) = param_4[2];
    *(undefined8 *)(pfVar5 + 6) = uVar1;
    uVar1 = param_4[5];
    *(undefined8 *)(pfVar5 + 8) = param_4[4];
    *(undefined8 *)(pfVar5 + 10) = uVar1;
    uVar1 = param_4[7];
    *(undefined8 *)(pfVar5 + 0xc) = param_4[6];
    *(undefined8 *)(pfVar5 + 0xe) = uVar1;
    *(undefined8 *)(pfVar5 + 0x10) = param_3;
    pfVar5[0x12] = pfVar4[0x1e4];
    iVar2 = _finite((double)pfVar5[0x17]);
    if ((iVar2 != 0) && (iVar2 = _finite((double)pfVar5[0x18]), iVar2 != 0)) {
      _finite((double)pfVar5[0x19]);
    }
    iVar2 = _finite((double)pfVar5[0x14]);
    if ((iVar2 != 0) && (iVar2 = _finite((double)pfVar5[0x15]), iVar2 != 0)) {
      _finite((double)pfVar5[0x16]);
    }
    iVar2 = _finite((double)*pfVar5);
    if ((iVar2 != 0) && (iVar2 = _finite((double)pfVar5[1]), iVar2 != 0)) {
      _finite((double)pfVar5[2]);
    }
  }
  return;
}



// FUNCTION 1426eb490 FUN_1426eb490 body=896 status=ok
// SIG undefined FUN_1426eb490(void)

void FUN_1426eb490(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,int param_5
                  )

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  int local_res8 [2];
  undefined8 **local_38;
  undefined8 **local_30;
  
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x50);
  if (lVar10 != 0) {
    FWeakObjectPtr::operator=(&local_38);
    local_30 = local_38;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x60,local_res8,&local_30);
    if ((local_res8[0] == -1) ||
       (lVar12 = (longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x60), lVar12 == 0)) {
      local_30 = &local_38;
      FUN_1426d1a40(param_1 + 0x60,local_res8,&local_30,0);
      lVar12 = (longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 0x60);
    }
    lVar11 = (longlong)param_5;
    lVar8 = 0;
    iVar6 = *(int *)(lVar12 + 0x14);
    iVar9 = 0;
    *(undefined4 *)(lVar12 + 0x10) = 0;
    if (iVar6 != param_5) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo
                (lVar12 + 8,param_5);
      iVar6 = *(int *)(lVar12 + 0x14);
      iVar9 = *(int *)(lVar12 + 0x10);
    }
    *(int *)(lVar12 + 0x10) = iVar9 + param_5;
    if (iVar6 < iVar9 + param_5) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeGrow
                (lVar12 + 8,iVar9);
    }
    puVar7 = (undefined4 *)((longlong)iVar9 * 0x70 + *(longlong *)(lVar12 + 8));
    if (param_5 != 0) {
      puVar5 = puVar7 + 6;
      do {
        *puVar7 = 0;
        puVar7 = puVar7 + 0x1c;
        *(undefined8 *)(puVar5 + -5) = 0;
        *(undefined8 *)(puVar5 + -2) = 0;
        *puVar5 = 0;
        *(undefined8 *)(puVar5 + 1) = 0x3f800000;
        *(undefined8 *)(puVar5 + 3) = 0;
        *(undefined8 *)(puVar5 + 5) = 0;
        puVar5[7] = 0;
        *(undefined1 *)(puVar5 + 8) = 0;
        *(undefined8 *)(puVar5 + 10) = 0;
        *(undefined8 *)(puVar5 + 0xc) = 0;
        puVar5 = puVar5 + 0x1c;
        param_5 = param_5 + -1;
      } while (param_5 != 0);
    }
    uVar2 = *(undefined4 *)(lVar10 + 0x790);
    lVar10 = lVar8;
    if (3 < lVar11) {
      lVar14 = (lVar11 - 4U >> 2) + 1;
      lVar10 = lVar14 * 4;
      puVar13 = (undefined8 *)(param_4 + 0x80);
      puVar15 = (undefined8 *)(param_3 + 0x10);
      do {
        uVar4 = puVar13[-0xf];
        lVar8 = lVar8 + 0x1c0;
        lVar3 = *(longlong *)(lVar12 + 8);
        puVar1 = (undefined8 *)(lVar3 + -0x1c0 + lVar8);
        *puVar1 = puVar13[-0x10];
        puVar1[1] = uVar4;
        uVar4 = puVar13[-0xd];
        puVar1 = (undefined8 *)(lVar3 + -0x1b0 + lVar8);
        *puVar1 = puVar13[-0xe];
        puVar1[1] = uVar4;
        uVar4 = puVar13[-0xb];
        puVar1 = (undefined8 *)(lVar3 + -0x1a0 + lVar8);
        *puVar1 = puVar13[-0xc];
        puVar1[1] = uVar4;
        uVar4 = puVar13[-9];
        puVar1 = (undefined8 *)(lVar3 + -400 + lVar8);
        *puVar1 = puVar13[-10];
        puVar1[1] = uVar4;
        *(undefined8 *)(*(longlong *)(lVar12 + 8) + -0x180 + lVar8) = puVar15[-2];
        *(undefined4 *)(*(longlong *)(lVar12 + 8) + -0x178 + lVar8) = uVar2;
        uVar4 = puVar13[-7];
        lVar3 = *(longlong *)(lVar12 + 8);
        puVar1 = (undefined8 *)(lVar3 + -0x150 + lVar8);
        *puVar1 = puVar13[-8];
        puVar1[1] = uVar4;
        uVar4 = puVar13[-5];
        puVar1 = (undefined8 *)(lVar3 + -0x140 + lVar8);
        *puVar1 = puVar13[-6];
        puVar1[1] = uVar4;
        uVar4 = puVar13[-3];
        puVar1 = (undefined8 *)(lVar3 + -0x130 + lVar8);
        *puVar1 = puVar13[-4];
        puVar1[1] = uVar4;
        uVar4 = puVar13[-1];
        puVar1 = (undefined8 *)(lVar3 + -0x120 + lVar8);
        *puVar1 = puVar13[-2];
        puVar1[1] = uVar4;
        *(undefined8 *)(*(longlong *)(lVar12 + 8) + -0x110 + lVar8) = puVar15[-1];
        *(undefined4 *)(*(longlong *)(lVar12 + 8) + -0x108 + lVar8) = uVar2;
        uVar4 = puVar13[1];
        lVar3 = *(longlong *)(lVar12 + 8);
        puVar1 = (undefined8 *)(lVar3 + -0xe0 + lVar8);
        *puVar1 = *puVar13;
        puVar1[1] = uVar4;
        uVar4 = puVar13[3];
        puVar1 = (undefined8 *)(lVar3 + -0xd0 + lVar8);
        *puVar1 = puVar13[2];
        puVar1[1] = uVar4;
        uVar4 = puVar13[5];
        puVar1 = (undefined8 *)(lVar3 + -0xc0 + lVar8);
        *puVar1 = puVar13[4];
        puVar1[1] = uVar4;
        uVar4 = puVar13[7];
        puVar1 = (undefined8 *)(lVar3 + -0xb0 + lVar8);
        *puVar1 = puVar13[6];
        puVar1[1] = uVar4;
        *(undefined8 *)(*(longlong *)(lVar12 + 8) + -0xa0 + lVar8) = *puVar15;
        *(undefined4 *)(*(longlong *)(lVar12 + 8) + -0x98 + lVar8) = uVar2;
        uVar4 = puVar13[9];
        lVar3 = *(longlong *)(lVar12 + 8);
        puVar1 = (undefined8 *)(lVar3 + -0x70 + lVar8);
        *puVar1 = puVar13[8];
        puVar1[1] = uVar4;
        uVar4 = puVar13[0xb];
        puVar1 = (undefined8 *)(lVar3 + -0x60 + lVar8);
        *puVar1 = puVar13[10];
        puVar1[1] = uVar4;
        uVar4 = puVar13[0xd];
        puVar1 = (undefined8 *)(lVar3 + -0x50 + lVar8);
        *puVar1 = puVar13[0xc];
        puVar1[1] = uVar4;
        uVar4 = puVar13[0xf];
        puVar1 = (undefined8 *)(lVar3 + -0x40 + lVar8);
        *puVar1 = puVar13[0xe];
        puVar1[1] = uVar4;
        *(undefined8 *)(*(longlong *)(lVar12 + 8) + -0x30 + lVar8) = puVar15[1];
        *(undefined4 *)(*(longlong *)(lVar12 + 8) + -0x28 + lVar8) = uVar2;
        lVar14 = lVar14 + -1;
        puVar13 = puVar13 + 0x20;
        puVar15 = puVar15 + 4;
      } while (lVar14 != 0);
    }
    if (lVar10 < lVar11) {
      lVar8 = lVar10 * 0x70;
      puVar13 = (undefined8 *)(lVar10 * 0x40 + param_4);
      do {
        uVar4 = puVar13[1];
        lVar8 = lVar8 + 0x70;
        lVar14 = *(longlong *)(lVar12 + 8);
        puVar15 = (undefined8 *)(lVar14 + -0x70 + lVar8);
        *puVar15 = *puVar13;
        puVar15[1] = uVar4;
        uVar4 = puVar13[3];
        puVar15 = (undefined8 *)(lVar14 + -0x60 + lVar8);
        *puVar15 = puVar13[2];
        puVar15[1] = uVar4;
        uVar4 = puVar13[5];
        puVar15 = (undefined8 *)(lVar14 + -0x50 + lVar8);
        *puVar15 = puVar13[4];
        puVar15[1] = uVar4;
        uVar4 = puVar13[7];
        puVar15 = (undefined8 *)(lVar14 + -0x40 + lVar8);
        *puVar15 = puVar13[6];
        puVar15[1] = uVar4;
        lVar14 = lVar10 * 8;
        lVar10 = lVar10 + 1;
        *(undefined8 *)(*(longlong *)(lVar12 + 8) + -0x30 + lVar8) =
             *(undefined8 *)(param_3 + lVar14);
        *(undefined4 *)(*(longlong *)(lVar12 + 8) + -0x28 + lVar8) = uVar2;
        puVar13 = puVar13 + 8;
      } while (lVar10 < lVar11);
    }
  }
  return;
}



// FUNCTION 1426eb810 SetResponse body=13 status=ok
// SIG undefined SetResponse(void)

void FCollisionResponseContainer::SetResponse(longlong param_1,uint param_2,undefined1 param_3)

{
  if (param_2 < 0x20) {
    *(undefined1 *)((int)param_2 + param_1) = param_3;
  }
  return;
}



// FUNCTION 1426eb820 FUN_1426eb820 body=34 status=ok
// SIG undefined FUN_1426eb820(void)

void FUN_1426eb820(longlong param_1,undefined1 (*param_2) [12])

{
  undefined1 auVar1 [16];
  
  auVar1._12_4_ = 0;
  auVar1._0_12_ = *param_2;
  *(undefined1 (*) [16])(param_1 + 0x1b0) = auVar1;
  return;
}



// FUNCTION 1426eb850 FUN_1426eb850 body=125 status=ok
// SIG undefined FUN_1426eb850(void)

void FUN_1426eb850(longlong param_1,undefined1 (*param_2) [12],undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  undefined8 local_18;
  undefined8 uStack_10;
  
  FRotator::Quaternion(param_3,&local_18);
  auVar3 = *param_2;
  auVar1._4_4_ = DAT_1464aa788._4_4_;
  auVar1._0_4_ = (undefined4)DAT_1464aa788;
  auVar1._8_4_ = DAT_1464aa790;
  auVar1._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x1c0) = auVar1;
  *(undefined8 *)(param_1 + 0x1a0) = local_18;
  *(undefined8 *)(param_1 + 0x1a8) = uStack_10;
  auVar2._12_4_ = 0;
  auVar2._0_12_ = auVar3;
  *(undefined1 (*) [16])(param_1 + 0x1b0) = auVar2;
  return;
}



// FUNCTION 1426eb8d0 FUN_1426eb8d0 body=41 status=ok
// SIG undefined FUN_1426eb8d0(void)

void FUN_1426eb8d0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)FRotator::Quaternion(param_2,local_18);
  uVar1 = puVar2[1];
  *(undefined8 *)(param_1 + 0x1a0) = *puVar2;
  *(undefined8 *)(param_1 + 0x1a8) = uVar1;
  return;
}



// FUNCTION 1426eb900 FUN_1426eb900 body=244 status=ok
// SIG undefined FUN_1426eb900(void)

void FUN_1426eb900(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  *(undefined4 *)(param_1 + 0x84) = param_3;
  *(undefined4 *)(param_1 + 0x88) = param_4;
  if (param_2 != (undefined4 *)0x0) {
    uVar4 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      if (*(int *)(param_1 + 4) == 0) goto LAB_1426eb9d2;
      do {
        plVar1 = (longlong *)FUN_1426e2550((int)*(short *)(param_1 + 0x60 + uVar4 * 2));
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x358))
                    (plVar1,
                     "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysScene.cpp"
                     ,0x66a);
          local_18 = *param_2;
          local_14 = param_2[1];
          local_10 = param_2[2];
          (**(code **)(*plVar1 + 0x210))(plVar1,&local_18);
          plVar2 = (longlong *)FUN_1426e19d0(param_1,uVar4);
          if (((int)uVar4 == 1) && (plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 400))(plVar2);
          }
          (**(code **)(*plVar1 + 0x360))(plVar1);
        }
LAB_1426eb9d2:
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while (uVar3 < *(uint *)(param_1 + 4));
    }
  }
  return;
}



// FUNCTION 1426eba00 FUN_1426eba00 body=882 status=ok
// SIG undefined FUN_1426eba00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426eba00(longlong *param_1,longlong param_2,float *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_6b8 [32];
  float local_698;
  undefined1 local_694;
  float local_690;
  uint local_68c;
  undefined1 local_688 [1560];
  longlong local_70;
  longlong local_60;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_6b8;
  if (param_2 == 0) {
    param_2 = param_1[0x8b];
  }
  FUN_1426da4d0(param_1 + 0x232);
  lVar3 = 0;
  if (param_1[0x300] != 0) {
    FUN_1426da4d0(param_1 + 0x300,param_1[0x8b]);
    lVar3 = param_1[0x300];
    if ((lVar3 != 0) && (param_2 == lVar3)) {
      return;
    }
  }
  if (param_2 == param_1[0x232]) {
    if (lVar3 != 0) {
      if ((*(byte *)(param_1 + 0x3d0) & 1) != 0) goto LAB_1426ebb2d;
      plVar4 = (longlong *)param_1[0x8b];
      cVar1 = FUN_1407cd900(plVar4);
      if ((cVar1 == '\0') &&
         ((((*(uint *)((longlong)plVar4 + 0x4cc) >> 1 & 1) == 0 ||
           (cVar1 = (**(code **)(*plVar4 + 0x768))(plVar4), cVar1 == '\0')) &&
          (iVar2 = FUN_142235230(param_1), iVar2 != 3)))) {
        local_694 = *(undefined1 *)(param_3 + 1);
        local_698 = *param_3;
        local_690 = param_3[2];
        local_68c = local_68c ^ ((uint)param_3[3] ^ local_68c) & 1;
        FUN_1429e1110(param_1[0x8b],param_2,&local_698);
      }
    }
    param_1[0x300] = 0;
  }
  else {
LAB_1426ebb2d:
    if (*param_3 <= 0.0) {
      local_68c = local_68c & 0xfffffffe;
      local_690 = 2.0;
      local_698 = 0.0;
      local_694 = 1;
      (**(code **)(*param_1 + 0x738))(param_1,param_2,param_1 + 0x232,&local_698);
      FUN_1426da4d0(param_1 + 0x232,param_1[0x8b]);
      param_1[0x300] = 0;
    }
    else {
      if (lVar3 == 0) {
        param_1[0x300] = param_1[0x232];
      }
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x728))(param_1,local_688);
      param_1[0x234] = *plVar4;
      *(int *)(param_1 + 0x235) = (int)plVar4[1];
      *(undefined8 *)((longlong)param_1 + 0x11ac) = *(undefined8 *)((longlong)plVar4 + 0xc);
      *(undefined4 *)((longlong)param_1 + 0x11b4) = *(undefined4 *)((longlong)plVar4 + 0x14);
      *(int *)(param_1 + 0x237) = (int)plVar4[3];
      *(undefined4 *)((longlong)param_1 + 0x11bc) = *(undefined4 *)((longlong)plVar4 + 0x1c);
      *(int *)(param_1 + 0x238) = (int)plVar4[4];
      *(undefined4 *)((longlong)param_1 + 0x11c4) = *(undefined4 *)((longlong)plVar4 + 0x24);
      *(int *)(param_1 + 0x239) = (int)plVar4[5];
      *(undefined4 *)((longlong)param_1 + 0x11cc) = *(undefined4 *)((longlong)plVar4 + 0x2c);
      *(int *)(param_1 + 0x23a) = (int)plVar4[6];
      *(uint *)((longlong)param_1 + 0x11d4) =
           *(uint *)((longlong)param_1 + 0x11d4) ^
           (*(uint *)((longlong)param_1 + 0x11d4) ^ *(uint *)((longlong)plVar4 + 0x34)) & 1;
      *(uint *)((longlong)param_1 + 0x11d4) =
           (*(uint *)((longlong)plVar4 + 0x34) ^ *(uint *)((longlong)param_1 + 0x11d4)) & 2 ^
           *(uint *)((longlong)param_1 + 0x11d4);
      *(char *)(param_1 + 0x23b) = (char)plVar4[7];
      *(undefined4 *)((longlong)param_1 + 0x11dc) = *(undefined4 *)((longlong)plVar4 + 0x3c);
      FUN_140e6c260(param_1 + 0x23c,plVar4 + 8);
      param_1[0x2fc] = plVar4[200];
      *(uint *)(param_1 + 0x2fd) =
           *(uint *)(param_1 + 0x2fd) ^ (*(uint *)(plVar4 + 0xc9) ^ *(uint *)(param_1 + 0x2fd)) & 1;
      if (local_60 != 0) {
        FMemory::Free();
      }
      if (local_70 != 0) {
        FMemory::Free();
      }
      *(float *)((longlong)param_1 + 0x1e74) = *param_3;
      *(undefined1 *)(param_1 + 0x3cf) = *(undefined1 *)(param_3 + 1);
      *(float *)((longlong)param_1 + 0x1e7c) = param_3[2];
      *(uint *)(param_1 + 0x3d0) =
           *(uint *)(param_1 + 0x3d0) ^ ((uint)param_3[3] ^ *(uint *)(param_1 + 0x3d0)) & 1;
      *(float *)(param_1 + 0x3ce) = *param_3;
      local_694 = *(undefined1 *)(param_3 + 1);
      local_698 = *param_3;
      local_690 = param_3[2];
      local_68c = local_68c ^ ((uint)param_3[3] ^ local_68c) & 1;
      (**(code **)(*param_1 + 0x738))(param_1,param_2,param_1 + 0x300,&local_698);
      FUN_1426da4d0(param_1 + 0x300,param_1[0x8b]);
    }
  }
  return;
}



// FUNCTION 1426ebd80 FUN_1426ebd80 body=805 status=ok
// SIG undefined FUN_1426ebd80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426ebd80(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined8 local_38;
  undefined4 local_30;
  
  *(byte *)(param_1 + 0x5f4) = *(byte *)(param_1 + 0x5f4) | 2;
  *(byte *)(param_1 + 0x64c) = *(byte *)(param_1 + 0x64c) | 2;
  *(byte *)(param_1 + 0x6a4) = *(byte *)(param_1 + 0x6a4) | 2;
  *(longlong *)(param_1 + 0x638) = param_1;
  cVar2 = *(char *)(param_1 + 0x70e);
  *(longlong *)(param_1 + 0x690) = param_1;
  *(longlong *)(param_1 + 0x6e8) = param_1;
  cVar3 = *(char *)(param_1 + 0x5f5);
  if ((((cVar2 == cVar3) && (cVar2 == *(char *)(param_1 + 0x64d))) &&
      (cVar2 == *(char *)(param_1 + 0x6a5))) || (*(longlong *)(param_1 + 0x30) == 0))
  goto LAB_1426ebef9;
  if (cVar2 == '\0') {
    if (cVar3 != '\0') {
      FTickFunction::UnRegisterTickFunction(param_1 + 0x5e8);
    }
  }
  else if (cVar3 == '\0') {
    *(undefined1 *)(param_1 + 0x5f0) = 1;
    FTickFunction::RegisterTickFunction(param_1 + 0x5e8,*(undefined8 *)(param_1 + 0x30));
  }
  if (*(char *)(param_1 + 0x70e) == '\0') {
    if (*(char *)(param_1 + 0x64d) != '\0') {
      FTickFunction::RemovePrerequisite(param_1 + 0x640,param_1,param_1 + 0x5e8);
      FTickFunction::UnRegisterTickFunction(param_1 + 0x640);
    }
  }
  else if (*(char *)(param_1 + 0x64d) == '\0') {
    *(undefined1 *)(param_1 + 0x648) = 3;
    FTickFunction::RegisterTickFunction(param_1 + 0x640,*(undefined8 *)(param_1 + 0x30));
    FTickFunction::AddPrerequisite(param_1 + 0x640,param_1,param_1 + 0x5e8);
  }
  if (*(char *)(param_1 + 0x70e) != '\0') {
    if ((*(char *)(param_1 + 0x6a5) == '\0') &&
       (lVar4 = GetDefault<UAudioSettings>(), *(char *)(lVar4 + 0x50) != '\0')) {
      *(undefined1 *)(param_1 + 0x6a0) = 3;
      FTickFunction::RegisterTickFunction(param_1 + 0x698,*(undefined8 *)(param_1 + 0x30));
      FTickFunction::AddPrerequisite(param_1 + 0x698,param_1,param_1 + 0x640);
      goto LAB_1426ebef9;
    }
    if (*(char *)(param_1 + 0x70e) != '\0') goto LAB_1426ebef9;
  }
  if (*(char *)(param_1 + 0x6a5) != '\0') {
    FTickFunction::UnRegisterTickFunction(param_1 + 0x698);
  }
LAB_1426ebef9:
  lVar4 = *(longlong *)(param_1 + 0x218);
  if (lVar4 != 0) {
    DeferredPhysResourceCleanup();
    uVar11 = FUN_1428cc5b0(param_1);
    uVar10 = 0;
    iVar9 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b08a80) &&
       (_Init_thread_header(&DAT_146b08a80), DAT_146b08a80 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar5 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"p.MaxPhysicsDeltaTime");
      uVar8 = uVar10;
      if (plVar5 != (longlong *)0x0) {
        uVar8 = (**(code **)(*plVar5 + 0x40))(plVar5);
      }
      _DAT_146b08a78 = uVar8;
      _Init_thread_footer(&DAT_146b08a80);
    }
    plVar5 = (longlong *)UAudioSettings::GetPrivateStaticClass();
    lVar6 = plVar5[0x1f];
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x368))(plVar5);
      lVar6 = plVar5[0x1f];
    }
    uVar1 = *(undefined4 *)(lVar6 + 0xb4);
    *(undefined4 *)(lVar4 + 0x84) = param_2;
    *(undefined4 *)(lVar4 + 0x88) = uVar1;
    if (*(int *)(lVar4 + 4) != 0) {
      if (*(int *)(lVar4 + 4) == 0) goto LAB_1426ec012;
      do {
        iVar9 = (int)uVar10;
        plVar5 = (longlong *)FUN_1426e2550((int)*(short *)(lVar4 + 0x60 + uVar10 * 2));
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x358))
                    (plVar5,
                     "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysScene.cpp"
                     ,0x66a);
          local_38 = 0;
          local_30 = uVar11;
          (**(code **)(*plVar5 + 0x210))(plVar5,&local_38);
          plVar7 = (longlong *)FUN_1426e19d0(lVar4,uVar10);
          if ((iVar9 == 1) && (plVar7 != (longlong *)0x0)) {
            (**(code **)(*plVar7 + 400))(plVar7);
          }
          (**(code **)(*plVar5 + 0x360))(plVar5);
        }
LAB_1426ec012:
        uVar10 = (ulonglong)(iVar9 + 1U);
      } while (iVar9 + 1U < *(uint *)(lVar4 + 4));
    }
  }
  return;
}



// FUNCTION 1426ec0b0 FUN_1426ec0b0 body=707 status=ok
// SIG undefined FUN_1426ec0b0(void)

void FUN_1426ec0b0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  *(undefined1 *)(param_1 + 0xa8) = 1;
  iVar4 = DAT_1464a820c;
  if (((DAT_146b086c0 != 0x800) && (iVar4 = DAT_1464a8208, DAT_146b086c0 != 0x1000)) ||
     (uVar3 = DAT_146b086c8, iVar4 != 0)) {
    uVar3 = DAT_146b086c4 | DAT_146b086c0;
  }
  iVar11 = 0;
  *(uint *)(param_1 + 8) = uVar3 | 0xff;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_1426ec2c7;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_1426ec2c7:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 1426ec380 FUN_1426ec380 body=707 status=ok
// SIG undefined FUN_1426ec380(void)

void FUN_1426ec380(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  *(undefined1 *)(param_1 + 0xa8) = 1;
  iVar4 = DAT_1464a820c;
  if (((DAT_146b08690 != 0x800) && (iVar4 = DAT_1464a8208, DAT_146b08690 != 0x1000)) ||
     (uVar3 = DAT_146b08698, iVar4 != 0)) {
    uVar3 = DAT_146b08694 | DAT_146b08690;
  }
  iVar11 = 0;
  *(uint *)(param_1 + 8) = uVar3 | 0xff;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_1426ec597;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_1426ec597:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 1426ec670 FUN_1426ec670 body=196 status=ok
// SIG undefined FUN_1426ec670(void)

float * FUN_1426ec670(longlong param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = *(float *)(param_1 + 0x210);
  fVar2 = *(float *)(param_1 + 0x214);
  fVar3 = *(float *)(param_1 + 0x218);
  fVar4 = *(float *)(param_1 + 0x21c);
  fVar7 = fVar2 * 0.0 - fVar3 * 0.0;
  fVar8 = fVar3 * 1.0 - fVar1 * 0.0;
  fVar9 = fVar1 * 0.0 - fVar2 * 1.0;
  fVar7 = fVar7 + fVar7;
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar5 = *(float *)(param_1 + 0x224);
  fVar6 = *(float *)(param_1 + 0x228);
  *param_2 = *(float *)(param_1 + 0x220) +
             ((fVar9 * fVar2 - fVar8 * fVar3) + fVar4 * fVar7 + 1.0) * param_3;
  param_2[1] = fVar5 + ((fVar7 * fVar3 - fVar9 * fVar1) + fVar4 * fVar8 + 0.0) * param_3;
  param_2[2] = fVar6 + ((fVar8 * fVar1 - fVar7 * fVar2) + fVar4 * fVar9 + 0.0) * param_3;
  return param_2;
}



// FUNCTION 1426ec740 StartAsync body=508 status=ok
// SIG undefined StartAsync(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FPhysScene::StartAsync(char *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  longlong *local_60;
  int local_58;
  longlong local_50;
  longlong local_48 [4];
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_20 = 0;
  local_28 = (longlong *)0x0;
  if ((*param_1 != '\0') &&
     (FUN_1426efe20(param_1,2,param_1 + 0xa8), *(longlong *)(param_1 + 0xa8) != 0)) {
    plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_58 = 3;
    local_60 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      plVar4[1] = (longlong)param_1;
      *plVar4 = (longlong)&PTR_GetPoolName_145171030;
      plVar4[2] = (longlong)&LAB_1426ea660;
      *(undefined4 *)(plVar4 + 3) = 2;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[4] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_145171078;
    }
    local_70 = 2;
    local_78 = 2;
    plVar4 = (longlong *)FUN_1426db070(&local_50,&local_60,local_68,param_1 + 0xa8);
    plVar6 = (longlong *)(param_1 + 0xc0);
    if (plVar6 != plVar4) {
      lVar5 = *plVar6;
      *plVar6 = *plVar4;
      *plVar4 = 0;
      if (lVar5 != 0) {
        LOCK();
        piVar1 = (int *)(lVar5 + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle();
        }
      }
    }
    if (local_50 != 0) {
      LOCK();
      piVar1 = (int *)(local_50 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
    plVar4 = local_60;
    if (local_58 != 0) {
      if (local_60 == (longlong *)0x0) goto LAB_1426ec8c1;
      (**(code **)(*local_60 + 0x28))(local_60,0);
      local_60 = (longlong *)FMemory::Realloc(plVar4,0,0);
    }
    if (local_60 != (longlong *)0x0) {
      FMemory::Free(local_60);
    }
  }
LAB_1426ec8c1:
  plVar4 = local_48;
  iVar2 = (int)local_20;
  if (local_28 != (longlong *)0x0) {
    plVar4 = local_28;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar4 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar4 + 0x48);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
    plVar4 = plVar4 + 1;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1426ec9a0 FUN_1426ec9a0 body=1395 status=ok
// SIG undefined FUN_1426ec9a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426ec9a0(char *param_1)

{
  ulonglong *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong **pplVar19;
  ulonglong uVar20;
  undefined1 auStack_118 [36];
  undefined4 local_f4;
  longlong *local_f0;
  int local_e8;
  longlong local_e0;
  undefined4 *local_d8;
  undefined4 *local_d0;
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  longlong local_98 [4];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68 [4];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  uVar20 = 0;
  local_f4 = 0;
  local_78 = (longlong *)0x0;
  local_70 = 0;
  uVar9 = uVar20;
  uVar18 = uVar20;
  if (0 < *(int *)(param_1 + 0x310)) {
    do {
      puVar14 = (undefined4 *)(*(longlong *)(param_1 + 0x308) + uVar18);
      if (*(longlong *)(puVar14 + 2) == 0) {
        TSet<TTuple<int,UHomeItem_*>,TDefaultMapHashableKeyFuncs<int,UHomeItem_*,0>,FDefaultSetAllocator>
        ::Remove(param_1 + 0x318,*puVar14);
      }
      else {
        local_d8 = puVar14;
        local_d0 = puVar14 + 2;
        FUN_14058d980(param_1 + 0x318,&local_f4,&local_d8,0);
      }
      uVar15 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar15;
      uVar18 = uVar18 + 0x10;
    } while ((int)uVar15 < *(int *)(param_1 + 0x310));
  }
  param_1[0x310] = '\0';
  param_1[0x311] = '\0';
  param_1[0x312] = '\0';
  param_1[0x313] = '\0';
  if (*(int *)(param_1 + 0x314) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x308,0);
  }
  FUN_1426efe20(param_1,0,param_1 + 0x98);
  local_48 = (longlong *)0x0;
  local_40 = 0;
  if ((*param_1 != '\0') && (*(longlong *)(param_1 + 0xc0) != 0)) {
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0xc0) + 8);
    LOCK();
    uVar9 = *puVar1;
    if (uVar9 == 0) {
      *puVar1 = 0;
      uVar9 = 0;
    }
    UNLOCK();
    if ((uVar9 >> 0x1a & 1) == 0) {
      local_40 = 1;
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (local_68,0);
      uVar9 = local_70;
      lVar16 = *(longlong *)(param_1 + 0xc0);
      plVar13 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar13 = local_48;
      }
      *plVar13 = lVar16;
      if (lVar16 != 0) {
        LOCK();
        *(int *)(lVar16 + 0x48) = *(int *)(lVar16 + 0x48) + 1;
        UNLOCK();
      }
      lVar16 = (longlong)(int)local_70;
      iVar8 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar8);
      if (local_70._4_4_ < iVar8) {
        TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                  (local_98,uVar9 & 0xffffffff);
      }
      lVar17 = *(longlong *)(param_1 + 0xc0);
      plVar13 = local_98;
      if (local_78 != (longlong *)0x0) {
        plVar13 = local_78;
      }
      plVar13[lVar16] = lVar17;
      if (lVar17 != 0) {
        LOCK();
        *(int *)(lVar17 + 0x48) = *(int *)(lVar17 + 0x48) + 1;
        UNLOCK();
      }
    }
  }
  uVar9 = local_40;
  lVar16 = *(longlong *)(param_1 + 0x98);
  if (lVar16 != 0) {
    lVar17 = (longlong)(int)local_40;
    iVar8 = (int)local_40 + 1;
    local_40 = CONCAT44(local_40._4_4_,iVar8);
    if (local_40._4_4_ < iVar8) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (local_68,uVar9 & 0xffffffff);
      lVar16 = *(longlong *)(param_1 + 0x98);
    }
    uVar9 = local_70;
    plVar13 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar13 = local_48;
    }
    plVar13[lVar17] = lVar16;
    if (lVar16 != 0) {
      LOCK();
      *(int *)(lVar16 + 0x48) = *(int *)(lVar16 + 0x48) + 1;
      UNLOCK();
    }
    lVar16 = (longlong)(int)local_70;
    iVar8 = (int)local_70 + 1;
    local_70 = CONCAT44(local_70._4_4_,iVar8);
    if (local_70._4_4_ < iVar8) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (local_98,uVar9 & 0xffffffff);
    }
    plVar13 = local_98;
    if (local_78 != (longlong *)0x0) {
      plVar13 = local_78;
    }
    plVar10 = local_f0;
    if (plVar13 + lVar16 != (longlong *)0x0) {
      plVar10 = (longlong *)FMemory::Realloc(0,0x30);
      local_e8 = 3;
      local_f0 = plVar10;
      if (plVar10 != (longlong *)0x0) {
        plVar10[1] = (longlong)param_1;
        *plVar10 = (longlong)&PTR_GetPoolName_145171030;
        plVar10[2] = (longlong)&LAB_1426ea660;
        *(undefined4 *)(plVar10 + 3) = 0;
        lVar17 = FDelegateHandle::GenerateNewID();
        plVar10[4] = lVar17;
        *plVar10 = (longlong)&PTR_GetPoolName_145171078;
      }
      plVar11 = (longlong *)FUN_140960ab0(local_c8,local_68,2);
      lVar17 = *plVar11;
      pplVar19 = (longlong **)(lVar17 + 0x10);
      *pplVar19 = (longlong *)0x0;
      *(undefined4 *)(lVar17 + 0x18) = 0;
      if ((&local_f0 != pplVar19) && (plVar10 != (longlong *)0x0)) {
        (**(code **)(*plVar10 + 0x30))(plVar10,pplVar19);
      }
      *(undefined4 *)(lVar17 + 0x20) = 2;
      lVar17 = *plVar11;
      lVar6 = plVar11[2];
      lVar4 = plVar11[1];
      lVar5 = *(longlong *)(lVar17 + 0x30);
      plVar13[lVar16] = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
        UNLOCK();
        plVar10 = local_f0;
      }
      FUN_1409691d0(lVar17,lVar4,(int)lVar6,1);
      uVar20 = 1;
    }
    if (uVar20 != 0) {
      if (local_e8 != 0) {
        if (plVar10 == (longlong *)0x0) goto LAB_1426eccdb;
        (**(code **)(*plVar10 + 0x28))(plVar10,0);
        plVar10 = (longlong *)FMemory::Realloc(plVar10,0,0);
        local_f0 = plVar10;
      }
      if (plVar10 != (longlong *)0x0) {
        FMemory::Free(plVar10);
      }
    }
  }
LAB_1426eccdb:
  plVar13 = local_68;
  iVar8 = (int)local_40;
  if (local_48 != (longlong *)0x0) {
    plVar13 = local_48;
  }
  for (; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar13 != 0) {
      LOCK();
      piVar2 = (int *)(*plVar13 + 0x48);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
    plVar13 = plVar13 + 1;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if ((int)local_70 == 0) goto LAB_1426ece8b;
  if ((int)local_70 < 2) {
    lVar16 = *(longlong *)(param_1 + 200);
    plVar13 = local_98;
    if (local_78 != (longlong *)0x0) {
      plVar13 = local_78;
    }
    lVar17 = *plVar13;
    *(longlong *)(param_1 + 200) = lVar17;
    if (lVar17 != 0) {
      LOCK();
      *(int *)(lVar17 + 0x48) = *(int *)(lVar17 + 0x48) + 1;
      UNLOCK();
    }
LAB_1426ece72:
    if (lVar16 == 0) goto LAB_1426ece8b;
    LOCK();
    piVar2 = (int *)(lVar16 + 0x48);
    iVar8 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  else {
    cVar7 = FUN_141636a40();
    if (((cVar7 == '\0') || (iVar8 = FUN_1416a5660(), iVar8 < 3)) ||
       (cVar7 = FUN_1415bac00(), cVar7 == '\0')) {
LAB_1426ecdce:
      uVar15 = 2;
    }
    else {
      uVar12 = FCommandLine::Get();
      cVar7 = FParse::Param(uVar12,L"SingleThreadedPhysics");
      if (cVar7 != '\0') goto LAB_1426ecdce;
      iVar8 = DAT_1464a820c;
      if (((DAT_146b08828 == 0x800) || (iVar8 = DAT_1464a8208, DAT_146b08828 == 0x1000)) &&
         (iVar8 == 0)) {
        uVar15 = DAT_146b08830 | 0xff;
      }
      else {
        uVar15 = DAT_146b0882c | DAT_146b08828 | 0xff;
      }
    }
    plVar13 = (longlong *)TGraphTask<FNullGraphTask>::CreateTask(local_b0,local_98,2);
    *(uint *)(*plVar13 + 0x10) = uVar15;
    lVar16 = *plVar13;
    lVar5 = plVar13[2];
    lVar17 = plVar13[1];
    lVar4 = *(longlong *)(lVar16 + 0x18);
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
      UNLOCK();
    }
    local_e0 = lVar4;
    FUN_141599db0(lVar16,lVar17,(int)lVar5,1);
    plVar13 = (longlong *)(param_1 + 200);
    if (plVar13 != &local_e0) {
      lVar16 = *plVar13;
      *plVar13 = lVar4;
      goto LAB_1426ece72;
    }
    if (lVar4 == 0) goto LAB_1426ece8b;
    LOCK();
    piVar2 = (int *)(lVar4 + 0x48);
    iVar8 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    lVar16 = local_e0;
  }
  if (iVar8 == 1) {
    FGraphEvent::Recycle(lVar16);
  }
LAB_1426ece8b:
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x84);
  plVar13 = local_98;
  iVar8 = (int)local_70;
  if (local_78 != (longlong *)0x0) {
    plVar13 = local_78;
  }
  for (; iVar8 != 0; iVar8 = iVar8 + -1) {
    if (*plVar13 != 0) {
      LOCK();
      piVar2 = (int *)(*plVar13 + 0x48);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
    plVar13 = plVar13 + 1;
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}



// FUNCTION 1426ecf20 FUN_1426ecf20 body=98 status=ok
// SIG undefined FUN_1426ecf20(void)

void FUN_1426ecf20(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  wchar_t *_Str;
  int iVar3;
  
  if (0 < (int)param_1[1]) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    iVar2 = _wtoi(_Str);
    if ((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x218), lVar1 != 0)) {
      iVar3 = iVar2;
      if (iVar2 < 5) {
        iVar3 = 4;
      }
      *(int *)(lVar1 + 0x4b0) = iVar3;
      FUN_1426eb240(lVar1,iVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1426ecfd0 FUN_1426ecfd0 body=103 status=ok
// SIG undefined FUN_1426ecfd0(void)

void FUN_1426ecfd0(longlong param_1,undefined1 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x2c20)) {
    lVar2 = 0;
    do {
      UCameraAnimInst::Stop(*(undefined8 *)(*(longlong *)(param_1 + 0x2c18) + lVar2),param_2);
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 8;
    } while (iVar1 < *(int *)(param_1 + 0x2c20));
  }
  return;
}



// FUNCTION 1426ed060 FUN_1426ed060 body=115 status=ok
// SIG undefined FUN_1426ed060(void)

void FUN_1426ed060(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x2c20)) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x2c18));
      if (*(longlong *)(lVar1 + 0x28) == param_2) {
        UCameraAnimInst::Stop(lVar1,param_3);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x2c20));
  }
  return;
}



// FUNCTION 1426ed0e0 FUN_1426ed0e0 body=112 status=ok
// SIG undefined FUN_1426ed0e0(void)

void FUN_1426ed0e0(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar2 = UNodeMappingContainer::GetPrivateStaticClass();
    lVar3 = param_2;
    while (lVar3 != lVar2) {
      lVar3 = *(longlong *)(lVar3 + 0x30);
      if (lVar3 == 0) {
        return;
      }
    }
    plVar1 = *(longlong **)(param_1 + 0x2bb0);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2d0))(plVar1,param_2,param_3);
    }
  }
  return;
}



// FUNCTION 1426ed150 StopAudioFade body=66 status=ok
// SIG undefined StopAudioFade(void)

void APlayerCameraManager::StopAudioFade(longlong *param_1)

{
  longlong lVar1;
  
  if (DAT_146b17150 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      lVar1 = UWorld::GetAudioDevice(lVar1);
      if (lVar1 != 0) {
        FAudioDevice::SetTransientMasterVolume(lVar1,0x3f800000);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1426ed1f0 FUN_1426ed1f0 body=1301 status=ok
// SIG undefined FUN_1426ed1f0(void)

void FUN_1426ed1f0(longlong param_1,float param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  byte *pbVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint *puVar14;
  uint uVar15;
  longlong *plVar16;
  bool bVar17;
  undefined1 local_res10 [8];
  int local_138;
  uint uStack_134;
  int iStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  uint local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong *local_c8;
  undefined8 uStack_c0;
  uint *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  longlong *local_98;
  undefined2 local_90;
  longlong *local_88;
  undefined8 uStack_80;
  uint *puStack_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  
  plVar2 = *(longlong **)(param_1 + 0xe8);
  plVar13 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x108))
              (plVar2,
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysSubstepTasks.cpp"
               ,0x12d);
    plVar13 = *(longlong **)(param_1 + 0xe8);
  }
  (**(code **)(*plVar13 + 0x30))();
  LOCK();
  bVar17 = *(int *)(param_1 + 0xac) == 0;
  if (bVar17) {
    *(int *)(param_1 + 0xac) = 0;
  }
  UNLOCK();
  uStack_134 = 1;
  iStack_124 = 0;
  iStack_120 = 0;
  plVar13 = (longlong *)((ulonglong)bVar17 * 0x50 + param_1);
  local_138 = 0;
  iVar1 = (int)plVar13[5];
  local_b8 = (uint *)(plVar13 + 2);
  if (iVar1 != 0) {
    puVar14 = (uint *)plVar13[4];
    if ((uint *)plVar13[4] == (uint *)0x0) {
      puVar14 = local_b8;
    }
    uVar15 = *puVar14;
    local_138 = 0;
    iStack_120 = 0;
    while (uVar15 == 0) {
      lVar10 = (longlong)local_138;
      iStack_120 = iStack_120 + 0x20;
      iVar8 = local_138 + 1;
      bVar17 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_138;
      local_138 = iVar8;
      if (bVar17) goto LAB_1426ed324;
      uVar15 = puVar14[lVar10 + 1];
    }
    uStack_134 = -uVar15 & uVar15;
    iVar8 = 0x1f;
    if (uStack_134 != 0) {
      for (; uStack_134 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_134 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    iStack_124 = (iStack_120 - iVar8) + 0x1f;
    if (iVar1 < iStack_124) {
LAB_1426ed324:
      iStack_124 = iVar1;
    }
  }
  uStack_b0 = CONCAT44(iStack_124,0xffffffff);
  auStack_70._8_4_ = iStack_120;
  auStack_70._0_8_ = uStack_b0;
  auStack_70._12_4_ = uStack_11c;
  uStack_c0 = CONCAT44(uStack_134,local_138);
  local_90 = 0;
  local_60._0_4_ = SUB84(plVar13,0);
  local_60._4_4_ = (undefined4)((ulonglong)plVar13 >> 0x20);
  local_a8._8_4_ = (undefined4)local_60;
  local_a8._0_8_ = auStack_70._8_8_;
  local_a8._12_4_ = local_60._4_4_;
  local_c8 = plVar13;
  local_98 = plVar13;
  local_88 = plVar13;
  uStack_80 = uStack_c0;
  puStack_78 = local_b8;
  local_60 = plVar13;
  if (iStack_124 < (int)plVar13[5]) {
    plVar12 = (longlong *)0x0;
    do {
      uVar7 = *(undefined8 *)((longlong)iStack_124 * 0xe0 + *local_c8);
      lVar10 = (longlong)iStack_124 * 0xe0 + *local_c8;
      plVar4 = (longlong *)FUN_1426979f0(uVar7);
      if (plVar4 != (longlong *)0x0) {
        pbVar5 = (byte *)(**(code **)(*plVar4 + 0x178))(plVar4,local_res10);
        if ((*pbVar5 & 1) == 0) {
          plVar4 = plVar12;
          plVar16 = plVar12;
          if (0 < *(int *)(lVar10 + 0x48)) {
            do {
              plVar6 = *(longlong **)((longlong)plVar16 + *(longlong *)(lVar10 + 0x40));
              if ((((int)plVar6[1] != 0) && ((longlong *)*plVar6 != (longlong *)0x0)) &&
                 (cVar3 = (**(code **)(*(longlong *)*plVar6 + 0x18))(), cVar3 != '\0')) {
                plVar9 = plVar12;
                if ((int)plVar6[1] != 0) {
                  plVar9 = (longlong *)*plVar6;
                }
                (**(code **)(*plVar9 + 0x40))(plVar9,param_3,uVar7);
              }
              uVar15 = (int)plVar4 + 1;
              plVar4 = (longlong *)(ulonglong)uVar15;
              plVar16 = plVar16 + 1;
            } while ((int)uVar15 < *(int *)(lVar10 + 0x48));
          }
          plVar6 = (longlong *)FUN_1426979f0(uVar7);
          plVar4 = plVar12;
          plVar16 = plVar12;
          if (0 < *(int *)(lVar10 + 0x18)) {
            do {
              lVar11 = *(longlong *)(lVar10 + 0x10);
              if (*(char *)((longlong)plVar4 + lVar11 + 0x18) == '\0') {
                local_e8 = *(undefined4 *)((longlong)plVar4 + lVar11);
                local_e4 = *(undefined4 *)((longlong)plVar4 + lVar11 + 4);
                local_e0 = *(undefined4 *)((longlong)plVar4 + lVar11 + 8);
                (**(code **)(*plVar6 + 0x148))
                          (plVar6,&local_e8,
                           -(*(char *)((longlong)plVar4 + lVar11 + 0x19) != '\0') & 3,1);
              }
              else if (*(char *)((longlong)plVar4 + lVar11 + 0x1a) == '\0') {
                local_10c = *(undefined4 *)((longlong)plVar4 + lVar11);
                local_108 = *(undefined4 *)((longlong)plVar4 + lVar11 + 4);
                local_104 = *(undefined4 *)((longlong)plVar4 + lVar11 + 8);
                physx::PxRigidBodyExt::addForceAtPos(plVar6,&local_10c);
              }
              else {
                local_f8 = *(undefined4 *)((longlong)plVar4 + lVar11 + 0x14);
                local_f4 = *(undefined4 *)((longlong)plVar4 + lVar11);
                local_f0 = *(undefined4 *)((longlong)plVar4 + lVar11 + 4);
                local_ec = *(undefined4 *)((longlong)plVar4 + lVar11 + 8);
                local_100 = *(uint *)((longlong)plVar4 + lVar11 + 0xc);
                local_fc = *(undefined4 *)((longlong)plVar4 + lVar11 + 0x10);
                physx::PxRigidBodyExt::addLocalForceAtLocalPos(plVar6,&local_f4,&local_100,0,1);
              }
              uVar15 = (int)plVar16 + 1;
              plVar4 = (longlong *)((longlong)plVar4 + 0x1c);
              plVar16 = (longlong *)(ulonglong)uVar15;
            } while ((int)uVar15 < *(int *)(lVar10 + 0x18));
          }
          plVar6 = (longlong *)FUN_1426979f0(uVar7);
          plVar4 = plVar12;
          plVar16 = plVar12;
          if (0 < *(int *)(lVar10 + 0x28)) {
            do {
              lVar11 = *(longlong *)(lVar10 + 0x20);
              local_dc = *(undefined4 *)((longlong)plVar4 + lVar11);
              local_d8 = *(undefined4 *)((longlong)plVar4 + lVar11 + 4);
              local_d4 = *(undefined4 *)((longlong)plVar4 + lVar11 + 8);
              (**(code **)(*plVar6 + 0x150))
                        (plVar6,&local_dc,-(*(char *)((longlong)plVar4 + lVar11 + 0xc) != '\0') & 3)
              ;
              uVar15 = (int)plVar16 + 1;
              plVar4 = plVar4 + 2;
              plVar16 = (longlong *)(ulonglong)uVar15;
            } while ((int)uVar15 < *(int *)(lVar10 + 0x28));
          }
          uVar7 = FUN_1426979f0(uVar7);
          plVar4 = plVar12;
          plVar16 = plVar12;
          if (0 < *(int *)(lVar10 + 0x38)) {
            do {
              lVar11 = *(longlong *)(lVar10 + 0x30) + (longlong)plVar4;
              FUN_1426d8680(uVar7,lVar11,*(undefined4 *)(lVar11 + 0xc),
                            *(undefined4 *)(lVar11 + 0x10),*(undefined1 *)(lVar11 + 0x14),
                            *(undefined1 *)(lVar11 + 0x15));
              uVar15 = (int)plVar16 + 1;
              plVar4 = plVar4 + 3;
              plVar16 = (longlong *)(ulonglong)uVar15;
            } while ((int)uVar15 < *(int *)(lVar10 + 0x38));
          }
        }
        else {
          FUN_1426e4900(param_1,lVar10 + 0x10,uVar7,param_2);
        }
      }
      uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_c0._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
      iStack_124 = uStack_b0._4_4_;
    } while (uStack_b0._4_4_ < (int)local_b8[6]);
    if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
      FUN_1426dac30(local_98,(int)local_98[1] - *(int *)((longlong)local_98 + 0x34),1);
    }
  }
  if (1.0 <= param_2) {
    TSet<TTuple<FBodyInstance_*,FPhysTarget>,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>,FDefaultSetAllocator>
    ::Empty(plVar13,(int)plVar13[1] - *(int *)((longlong)plVar13 + 0x34));
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x118))(plVar2);
  }
  return;
}



// FUNCTION 1426ed710 FUN_1426ed710 body=773 status=ok
// SIG undefined FUN_1426ed710(void)

undefined8 FUN_1426ed710(longlong param_1,uint param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint uVar13;
  longlong **pplVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  longlong *local_78 [2];
  undefined1 local_68 [64];
  
  uVar16 = (ulonglong)param_2;
  if (param_2 == 2) {
    fVar18 = *(float *)(param_1 + 0x8c);
  }
  else {
    fVar18 = *(float *)(param_1 + 0x84);
  }
  lVar12 = *(longlong *)(param_1 + 0x2f0 + uVar16 * 8);
  plVar7 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar10 = plVar7[0x1f];
  if (lVar10 == 0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    lVar10 = plVar7[0x1f];
  }
  uVar13 = *(uint *)(lVar10 + 0xc0);
  fVar17 = *(float *)(lVar10 + 0xbc);
  fVar19 = (float)uVar13 * fVar17;
  if (fVar18 <= fVar19) {
    fVar19 = fVar18;
  }
  *(float *)(lVar12 + 0xa8) = fVar19;
  fVar17 = fVar19 / fVar17;
  uVar5 = -((int)ROUND(-0.5 - (fVar17 + fVar17)) >> 1);
  if (uVar5 <= uVar13) {
    uVar13 = uVar5;
  }
  uVar5 = 1;
  if (uVar13 != 0) {
    uVar5 = uVar13;
  }
  plVar7 = (longlong *)0x0;
  *(uint *)(lVar12 + 0xa0) = uVar5;
  *(float *)(lVar12 + 0xa4) = fVar19 / (float)uVar5;
  plVar8 = plVar7;
  if (param_2 < *(uint *)(param_1 + 4)) {
    plVar8 = (longlong *)FUN_1426e2550((int)*(short *)(param_1 + 0x60 + uVar16 * 2));
  }
  if (fVar19 / (float)uVar5 <= 0.0) {
    return 0;
  }
  plVar9 = (longlong *)operator_new(0x40);
  if (plVar9 != (longlong *)0x0) {
    lVar10 = (**(code **)(*plVar8 + 0x340))(plVar8);
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (longlong)&PTR__scalar_deleting_destructor__14516cd20;
    plVar9[3] = 0;
    *plVar9 = (longlong)&PTR__scalar_deleting_destructor__14516f120;
    *(undefined4 *)(plVar9 + 4) = 0;
    lVar12 = *param_3;
    plVar9[5] = lVar12;
    if (lVar12 != 0) {
      LOCK();
      *(int *)(lVar12 + 0x48) = *(int *)(lVar12 + 0x48) + 1;
      UNLOCK();
    }
    *(uint *)(plVar9 + 6) = param_2;
    plVar9[3] = 0;
    plVar9[7] = (uVar16 + 0xd) * 0x10 + param_1;
    *(undefined4 *)(plVar9 + 4) = 1;
    plVar9[2] = lVar10;
    plVar7 = plVar9;
  }
  cVar4 = FUN_141636a40();
  if (((cVar4 != '\0') && (iVar6 = FUN_1416a5660(), 2 < iVar6)) &&
     (cVar4 = FUN_1415bac00(), cVar4 != '\0')) {
    uVar11 = FCommandLine::Get();
    cVar4 = FParse::Param(uVar11,L"SingleThreadedPhysics");
    uVar15 = 0x202;
    if (cVar4 == '\0') goto LAB_1426ed8d4;
  }
  uVar15 = 2;
LAB_1426ed8d4:
  lVar12 = *(longlong *)(param_1 + 0x2f0 + uVar16 * 8);
  plVar8 = (longlong *)FMemory::Realloc(0,0x30);
  local_78[0] = plVar8;
  if (plVar8 != (longlong *)0x0) {
    plVar8[1] = lVar12;
    *plVar8 = (longlong)&PTR_GetPoolName_145170fa0;
    plVar8[2] = (longlong)&LAB_1426ecf90;
    plVar8[3] = (longlong)plVar7;
    lVar12 = FDelegateHandle::GenerateNewID();
    plVar8[4] = lVar12;
    *plVar8 = (longlong)&PTR_GetPoolName_145170fe8;
  }
  plVar7 = (longlong *)FUN_141d29000(local_68,0,0xff);
  lVar12 = *plVar7;
  pplVar14 = (longlong **)(lVar12 + 0x10);
  *pplVar14 = (longlong *)0x0;
  *(undefined4 *)(lVar12 + 0x18) = 0;
  if ((local_78 != pplVar14) && (plVar8 != (longlong *)0x0)) {
    (**(code **)(*plVar8 + 0x30))(plVar8,pplVar14);
  }
  *(undefined4 *)(lVar12 + 0x20) = uVar15;
  lVar12 = *plVar7;
  lVar3 = plVar7[2];
  lVar10 = plVar7[1];
  lVar2 = *(longlong *)(lVar12 + 0x30);
  piVar1 = (int *)(lVar2 + 0x48);
  if (lVar2 != 0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    plVar8 = local_78[0];
  }
  FUN_1409691d0(lVar12,lVar10,(int)lVar3,1);
  if (lVar2 != 0) {
    LOCK();
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    plVar8 = local_78[0];
    if (iVar6 == 1) {
      FGraphEvent::Recycle(lVar2);
      plVar8 = local_78[0];
    }
  }
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    lVar12 = FMemory::Realloc(plVar8,0,0);
    if (lVar12 != 0) {
      FMemory::Free(lVar12);
    }
  }
  return 1;
}



// FUNCTION 1426eda20 FUN_1426eda20 body=253 status=ok
// SIG undefined FUN_1426eda20(void)

void FUN_1426eda20(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 local_res8 [2];
  
  lVar3 = *(longlong *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  if (*(uint *)(param_1 + 0xc4) < *(uint *)(param_1 + 0xa0)) {
    local_res8[0] = 0;
    plVar4 = *(longlong **)(param_1 + 0xe8);
    plVar5 = (longlong *)0x0;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x108))
                (plVar4,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysSubstepTasks.cpp"
                 ,0x1c9);
      plVar5 = *(longlong **)(param_1 + 0xe8);
    }
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x30))();
    (**(code **)(*plVar5 + 0x2c8))(plVar5,2);
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x48))
              (*(longlong **)(param_1 + 0xe8),1,local_res8);
    (**(code **)(*plVar5 + 0x2c8))(plVar5,0);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x118))(plVar4);
    }
    FUN_1426edb20(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001426edb19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x20))();
  return;
}



// FUNCTION 1426edb20 FUN_1426edb20 body=780 status=ok
// SIG undefined FUN_1426edb20(void)

void FUN_1426edb20(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  float fVar16;
  undefined4 uVar17;
  undefined1 local_res8;
  longlong local_res10;
  longlong local_res18 [2];
  undefined8 in_stack_ffffffffffffff88;
  longlong *local_68;
  int local_60;
  
  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  plVar6 = (longlong *)FUN_1415914c0(local_res18);
  plVar11 = (longlong *)(param_1 + 0xd0);
  plVar12 = (longlong *)0x0;
  uVar13 = 0;
  if (plVar11 != plVar6) {
    lVar10 = *plVar11;
    *plVar11 = *plVar6;
    *plVar6 = 0;
    if (lVar10 != 0) {
      LOCK();
      piVar1 = (int *)(lVar10 + 0x48);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        FGraphEvent::Recycle();
      }
    }
  }
  if (local_res18[0] != 0) {
    LOCK();
    piVar1 = (int *)(local_res18[0] + 0x48);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      FGraphEvent::Recycle();
    }
  }
  plVar7 = (longlong *)operator_new(0x40);
  plVar6 = plVar12;
  if (plVar7 != (longlong *)0x0) {
    lVar8 = (**(code **)(**(longlong **)(param_1 + 0xe8) + 0xd0))();
    plVar7[1] = 0;
    *plVar7 = (longlong)&PTR__scalar_deleting_destructor__14516cd20;
    plVar7[2] = 0;
    plVar7[3] = 0;
    *plVar7 = (longlong)&PTR__scalar_deleting_destructor__14516f120;
    *(undefined4 *)(plVar7 + 4) = 0;
    lVar10 = *plVar11;
    plVar7[5] = lVar10;
    if (lVar10 != 0) {
      LOCK();
      *(int *)(lVar10 + 0x48) = *(int *)(lVar10 + 0x48) + 1;
      UNLOCK();
    }
    *(undefined4 *)(plVar7 + 6) = 3;
    plVar7[7] = 0;
    *(undefined4 *)(plVar7 + 4) = 1;
    plVar7[3] = 0;
    plVar7[2] = lVar8;
    plVar6 = plVar7;
  }
  cVar3 = FUN_141636a40();
  if (((cVar3 == '\0') || (iVar4 = FUN_1416a5660(), iVar4 < 3)) ||
     (cVar3 = FUN_1415bac00(), cVar3 == '\0')) {
LAB_1426edc4a:
    uVar14 = 2;
  }
  else {
    uVar9 = FCommandLine::Get();
    cVar3 = FParse::Param(uVar9,L"SingleThreadedPhysics");
    uVar14 = 0x202;
    if (cVar3 != '\0') goto LAB_1426edc4a;
  }
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  local_60 = 3;
  local_68 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    plVar7[1] = param_1;
    *plVar7 = (longlong)&DAT_143f3ed00;
    plVar7[2] = (longlong)FUN_1426eda20;
    lVar10 = FDelegateHandle::GenerateNewID();
    plVar7[4] = lVar10;
    *plVar7 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  FUN_1426db070(&local_res10,&local_68,local_res8,plVar11,CONCAT44(uVar17,2),uVar14);
  if (local_res10 != 0) {
    LOCK();
    piVar1 = (int *)(local_res10 + 0x48);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      FGraphEvent::Recycle(local_res10);
    }
  }
  plVar11 = local_68;
  if (local_60 != 0) {
    if (local_68 == (longlong *)0x0) goto LAB_1426edd2a;
    (**(code **)(*local_68 + 0x28))(local_68,0);
    plVar11 = (longlong *)FMemory::Realloc(plVar11,0,0);
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
LAB_1426edd2a:
  uVar5 = *(int *)(param_1 + 0xc4) + 1;
  bVar15 = *(uint *)(param_1 + 0xa0) <= uVar5;
  *(uint *)(param_1 + 0xc4) = uVar5;
  if (bVar15) {
    fVar16 = *(float *)(param_1 + 0xa8) - *(float *)(param_1 + 0xc0);
    uVar17 = 0x3f800000;
  }
  else {
    fVar16 = *(float *)(param_1 + 0xa4);
    *(float *)(param_1 + 0xb8) = *(float *)(param_1 + 0xbc) + *(float *)(param_1 + 0xb8);
    *(float *)(param_1 + 0xc0) = *(float *)(param_1 + 0xa4) + *(float *)(param_1 + 0xc0);
    uVar17 = *(undefined4 *)(param_1 + 0xb8);
  }
  lVar10 = *(longlong *)(param_1 + 0xd8);
  if (lVar10 != 0) {
    TBaseMulticastDelegate<void,FPhysScene_*,unsigned_int,float>::Broadcast
              (lVar10 + 0x20,lVar10,*(undefined4 *)(param_1 + 0xe0),fVar16);
  }
  FUN_1426ed1f0(param_1,uVar17,fVar16);
  puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0xb0) + 0x38);
  if (puVar2 != (undefined8 *)0x0) {
    uVar13 = *(undefined4 *)(puVar2 + 1);
    plVar12 = (longlong *)*puVar2;
  }
  (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x40))
            (*(longlong **)(param_1 + 0xe8),fVar16,bVar15,plVar6,plVar12,uVar13);
                    /* WARNING: Could not recover jumptable at 0x0001426ede28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return;
}



// FUNCTION 1426ede30 FUN_1426ede30 body=187 status=ok
// SIG undefined FUN_1426ede30(void)

void FUN_1426ede30(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)param_1[1]) {
    lVar3 = 0;
    do {
      lVar1 = *param_1;
      iVar4 = iVar4 + 1;
      uVar2 = *(undefined8 *)(lVar3 + 0x20 + lVar1);
      *(undefined8 *)(lVar3 + 0x20 + lVar1) = *(undefined8 *)(lVar3 + 0x28 + lVar1);
      *(undefined8 *)(lVar3 + 0x28 + lVar1) = uVar2;
      *(ulonglong *)(lVar3 + 0xc + lVar1) =
           CONCAT44(*(undefined4 *)(lVar3 + 0x10 + lVar1),*(undefined4 *)(lVar3 + 0xc + lVar1)) ^
           0x8000000080000000;
      *(uint *)(lVar3 + 0x14 + lVar1) = *(uint *)(lVar3 + 0x14 + lVar1) ^ 0x80000000;
      *(ulonglong *)(lVar3 + 0x30 + lVar1) =
           CONCAT44(*(undefined4 *)(lVar3 + 0x34 + lVar1),*(undefined4 *)(lVar3 + 0x30 + lVar1)) ^
           0x8000000080000000;
      *(uint *)(lVar3 + 0x38 + lVar1) = *(uint *)(lVar3 + 0x38 + lVar1) ^ 0x80000000;
      lVar3 = lVar3 + 0x40;
    } while (iVar4 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 1426edf10 FUN_1426edf10 body=1388 status=ok
// SIG undefined FUN_1426edf10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426edf10(longlong param_1,uint param_2)

{
  float *pfVar1;
  int *piVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  float *pfVar13;
  longlong *plVar14;
  uint uVar15;
  ulonglong uVar16;
  float *pfVar17;
  longlong *plVar18;
  ulonglong uVar19;
  float *pfVar20;
  longlong *plVar21;
  uint uVar22;
  longlong *plVar23;
  longlong *plVar24;
  ulonglong uVar25;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_118;
  uint local_108;
  undefined8 local_100;
  float local_f8;
  uint local_f0;
  int local_ec;
  float *local_e8;
  float fStack_e0;
  float fStack_dc;
  longlong *local_d8;
  uint local_d0;
  int local_cc;
  float local_c8;
  float local_c4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  plVar18 = (longlong *)0x0;
  plVar9 = plVar18;
  local_108 = param_2;
  if (param_2 < *(uint *)(param_1 + 4)) {
    plVar9 = (longlong *)FUN_1426e2550((int)*(short *)(param_1 + 0x60 + (ulonglong)param_2 * 2));
  }
  FUN_1426e1610(param_1,param_2);
  iVar8 = 0;
  local_f0 = 0;
  local_d8 = (longlong *)0x0;
  local_cc = 0;
  lVar10 = (**(code **)(*plVar9 + 0xa8))(plVar9,&local_f0,0);
  local_e8 = (float *)0x0;
  local_ec = 0;
  fStack_dc = 0.0;
  plVar9 = plVar18;
  plVar21 = plVar18;
  plVar23 = plVar18;
  local_100 = (longlong *)lVar10;
  if (local_f0 != 0) {
    do {
      plVar14 = *(longlong **)(lVar10 + (longlong)plVar23 * 8);
      if (plVar14 != (longlong *)0x0) {
        cVar7 = (**(code **)(*plVar14 + 0x20))(plVar14);
        plVar24 = (longlong *)0x0;
        if (cVar7 != '\0') {
          plVar24 = plVar14;
        }
        piVar2 = (int *)plVar24[2];
        lVar10 = (longlong)local_100;
        if (piVar2 != (int *)0x0) {
          if ((*piVar2 == 1) && (piVar3 = *(int **)(piVar2 + 2), piVar3 != (int *)0x0)) {
            cVar7 = FWeakObjectPtr::IsValid(piVar3 + 0x4e);
            lVar10 = (longlong)local_100;
            if ((cVar7 != '\0') &&
               (lVar11 = FWeakObjectPtr::Get(piVar3 + 0x4e), lVar10 = (longlong)local_100,
               *piVar3 <= (int)-(uint)(*(char *)(lVar11 + 0x2ed) != '\0'))) {
              FUN_1426992a0(piVar3,&local_88,1,0);
              uVar12 = FWeakObjectPtr::Get(piVar3 + 0x4e);
              FWeakObjectPtr::operator=(&local_c8,uVar12);
              iVar8 = (int)plVar21;
              local_b8 = local_88;
              uStack_b0 = uStack_80;
              local_a8 = local_78;
              uStack_a4 = uStack_74;
              uStack_a0 = uStack_70;
              uStack_9c = uStack_6c;
              fStack_e0 = (float)(iVar8 + 1);
              local_98 = local_68;
              fStack_94 = fStack_64;
              fStack_90 = fStack_60;
              fStack_8c = fStack_5c;
              if ((int)fStack_dc < (int)fStack_e0) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
                ResizeGrow(&local_e8,plVar21);
              }
              plVar21 = (longlong *)(ulonglong)(uint)fStack_e0;
              pfVar13 = local_e8 + (longlong)iVar8 * 0x10;
              *pfVar13 = local_c8;
              pfVar13[1] = local_c4;
              *(undefined8 *)(pfVar13 + 4) = local_b8;
              *(undefined8 *)(pfVar13 + 6) = uStack_b0;
              *(ulonglong *)(pfVar13 + 8) = CONCAT44(uStack_a4,local_a8);
              *(ulonglong *)(pfVar13 + 10) = CONCAT44(uStack_9c,uStack_a0);
              pfVar13[0xc] = local_98;
              pfVar13[0xd] = fStack_94;
              pfVar13[0xe] = fStack_90;
              pfVar13[0xf] = fStack_8c;
              lVar10 = (longlong)local_100;
            }
          }
          else if ((piVar2 != (int *)0x0) &&
                  (((*piVar2 == 7 && (lVar11 = *(longlong *)(piVar2 + 2), lVar11 != 0)) &&
                   (*(longlong *)(lVar11 + 8) != 0)))) {
            iVar8 = (int)plVar18;
            for (plVar14 = plVar9; plVar14 != plVar9 + iVar8; plVar14 = plVar14 + 1) {
              if (*plVar14 == *(longlong *)(lVar11 + 8)) {
                if ((int)((longlong)plVar14 - (longlong)plVar9 >> 3) != -1) goto LAB_1426ee16a;
                break;
              }
            }
            local_d0 = iVar8 + 1;
            if (local_cc < (int)local_d0) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d8,plVar18);
              plVar9 = local_d8;
            }
            plVar18 = (longlong *)(ulonglong)local_d0;
            plVar9[iVar8] = *(longlong *)(lVar11 + 8);
LAB_1426ee16a:
            lVar10 = *(longlong *)(lVar11 + 8);
            iVar8 = *(int *)(lVar10 + 0x10);
            *(int *)(lVar10 + 0x10) = iVar8 + 1;
            if (*(int *)(lVar10 + 0x14) < iVar8 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar10 + 8,iVar8);
            }
            *(longlong **)(*(longlong *)(lVar10 + 8) + (longlong)iVar8 * 8) = plVar24;
            lVar10 = (longlong)local_100;
          }
        }
      }
      iVar8 = (int)plVar18;
      uVar22 = (int)plVar23 + 1;
      plVar23 = (longlong *)(ulonglong)uVar22;
    } while (uVar22 < local_f0);
    local_ec = (int)plVar21;
  }
  uVar22 = local_108;
  uVar19 = 0;
  local_100 = plVar9 + iVar8;
  uVar25 = (ulonglong)((longlong)local_100 + (7 - (longlong)plVar9)) >> 3;
  if (local_100 < plVar9) {
    uVar25 = 0;
  }
  plVar18 = plVar9;
  if (uVar25 != 0) {
    do {
      plVar18 = (longlong *)*plVar9;
      (**(code **)(*plVar18 + 8))(plVar18,uVar22,plVar18 + 1);
      lVar10 = plVar18[2];
      *(undefined4 *)(plVar18 + 2) = 0;
      if (*(int *)((longlong)plVar18 + 0x14) != (int)lVar10) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar18 + 1);
      }
      plVar9 = plVar9 + 1;
      uVar19 = uVar19 + 1;
      plVar18 = local_d8;
    } while (uVar19 != uVar25);
  }
  uVar22 = local_108;
  uVar25 = 0;
  uVar19 = (ulonglong)((longlong)local_100 + (7 - (longlong)plVar18)) >> 3;
  if (local_100 < plVar18) {
    uVar19 = uVar25;
  }
  uVar16 = uVar25;
  plVar9 = plVar18;
  if (uVar19 != 0) {
    do {
      (**(code **)(*(longlong *)*plVar9 + 0x10))((longlong *)*plVar9,uVar22);
      uVar16 = uVar16 + 1;
      plVar9 = plVar9 + 1;
    } while (uVar16 != uVar19);
  }
  pfVar13 = local_e8;
  pfVar20 = local_e8 + (longlong)local_ec * 0x10;
  if (local_e8 != pfVar20) {
    pfVar17 = local_e8 + 4;
    do {
      plVar9 = (longlong *)FWeakObjectPtr::Get(pfVar17 + -4);
      if (plVar9 != (longlong *)0x0) {
        plVar21 = (longlong *)plVar9[0x23];
        local_108 = 0x38d1b717;
        auVar4._4_4_ = -(uint)(0.0001 < (float)((uint)(pfVar17[5] -
                                                      *(float *)((longlong)plVar9 + 0x224)) &
                                               uRam0000000146b084d4));
        auVar4._0_4_ = -(uint)(0.0001 < (float)((uint)(pfVar17[4] - *(float *)(plVar9 + 0x44)) &
                                               _DAT_146b084d0));
        auVar4._8_4_ = -(uint)(0.0001 < (float)((uint)(pfVar17[6] - *(float *)(plVar9 + 0x45)) &
                                               uRam0000000146b084d8));
        auVar4._12_4_ =
             -(uint)(0.0001 < (float)((uint)(pfVar17[7] - *(float *)((longlong)plVar9 + 0x22c)) &
                                     uRam0000000146b084dc));
        iVar8 = movmskps((int)plVar9,auVar4);
        if (iVar8 == 0) {
          auVar5._4_4_ = -(uint)(0.0001 < (float)((uint)(pfVar17[1] -
                                                        *(float *)((longlong)plVar9 + 0x214)) &
                                                 uRam0000000146b084d4));
          auVar5._0_4_ = -(uint)(0.0001 < (float)((uint)(*pfVar17 - *(float *)(plVar9 + 0x42)) &
                                                 _DAT_146b084d0));
          auVar5._8_4_ = -(uint)(0.0001 < (float)((uint)(pfVar17[2] - *(float *)(plVar9 + 0x43)) &
                                                 uRam0000000146b084d8));
          auVar5._12_4_ =
               -(uint)(0.0001 < (float)((uint)(pfVar17[3] - *(float *)((longlong)plVar9 + 0x21c)) &
                                       uRam0000000146b084dc));
          iVar8 = movmskps(0,auVar5);
          if ((iVar8 != 0) &&
             (auVar6._4_4_ = -(uint)(0.0001 < (float)((uint)(pfVar17[1] +
                                                            *(float *)((longlong)plVar9 + 0x214)) &
                                                     uRam0000000146b084d4)),
             auVar6._0_4_ = -(uint)(0.0001 < (float)((uint)(*pfVar17 + *(float *)(plVar9 + 0x42)) &
                                                    _DAT_146b084d0)),
             auVar6._8_4_ = -(uint)(0.0001 < (float)((uint)(pfVar17[2] + *(float *)(plVar9 + 0x43))
                                                    & uRam0000000146b084d8)),
             auVar6._12_4_ =
                  -(uint)(0.0001 < (float)((uint)(pfVar17[3] + *(float *)((longlong)plVar9 + 0x21c))
                                          & uRam0000000146b084dc)), iVar8 = movmskps(iVar8,auVar6),
             iVar8 != 0)) goto LAB_1426ee32e;
        }
        else {
LAB_1426ee32e:
          local_118 = 0;
          local_120 = 0x12;
          if (*(char *)((longlong)plVar9 + 0x2ec) == '\0') {
            local_120 = 2;
          }
          local_e8 = *(float **)pfVar17;
          fStack_e0 = pfVar17[2];
          fStack_dc = pfVar17[3];
          local_f8 = pfVar17[6] - *(float *)(plVar9 + 0x45);
          local_128 = 0;
          local_100 = (longlong *)
                      CONCAT44(pfVar17[5] - *(float *)((longlong)plVar9 + 0x224),
                               pfVar17[4] - *(float *)(plVar9 + 0x44));
          (**(code **)(*plVar9 + 0x490))(plVar9,&local_100,&local_e8,0);
        }
        if (plVar21 != (longlong *)0x0) {
          uVar22 = *(uint *)((longlong)plVar21 + 0xc);
          uVar19 = uVar25;
          if ((int)uVar22 < (int)DAT_1469e91c4) {
            uVar15 = uVar22 & 0xffff;
            if ((int)uVar22 < 0) {
              uVar22 = uVar22 + 0xffff;
              uVar15 = uVar15 - 0x10000;
            }
            uVar19 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar22 >> 0x10) * 8) +
                     (longlong)(int)uVar15 * 0x18;
          }
          if ((*(uint *)(uVar19 + 8) >> 0x1d & 1) == 0) {
            (**(code **)(*plVar21 + 0x450))(plVar21);
          }
        }
      }
      pfVar1 = pfVar17 + 0xc;
      pfVar17 = pfVar17 + 0x10;
    } while (pfVar1 != pfVar20);
  }
  if (pfVar13 != (float *)0x0) {
    FMemory::Free(pfVar13);
  }
  if (plVar18 != (longlong *)0x0) {
    FMemory::Free(plVar18);
  }
  return;
}



// FUNCTION 1426ee480 FUN_1426ee480 body=442 status=ok
// SIG undefined FUN_1426ee480(void)

void FUN_1426ee480(char *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  int *piVar8;
  bool bVar9;
  
  lVar5 = FUN_1426979f0(param_2);
  if (lVar5 != 0) {
    if ((*param_1 == '\0') || (lVar5 = 0x300, (*(byte *)(param_2 + 0x12) & 8) == 0)) {
      lVar5 = 0x2f0;
    }
    lVar5 = *(longlong *)(param_1 + lVar5);
    LOCK();
    bVar9 = *(int *)(lVar5 + 0xac) == 0;
    if (bVar9) {
      *(int *)(lVar5 + 0xac) = 0;
    }
    UNLOCK();
    TSet<TTuple<FBodyInstance_*,FPhysTarget>,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>,FDefaultSetAllocator>
    ::Remove((ulonglong)!bVar9 * 0x50 + lVar5,param_2);
    LOCK();
    bVar9 = *(int *)(lVar5 + 0xac) == 0;
    if (bVar9) {
      *(int *)(lVar5 + 0xac) = 0;
    }
    UNLOCK();
    TSet<TTuple<FBodyInstance_*,FPhysTarget>,TDefaultMapHashableKeyFuncs<FBodyInstance_*,FPhysTarget,0>,FDefaultSetAllocator>
    ::Remove((ulonglong)bVar9 * 0x50 + lVar5,param_2);
  }
  if (param_1 + 0x100 != param_1 + 0x208) {
    piVar8 = (int *)(param_1 + 0x110);
    do {
      plVar3 = *(longlong **)(piVar8 + -2);
      for (plVar7 = plVar3; plVar7 != plVar3 + *piVar8; plVar7 = plVar7 + 1) {
        if (*plVar7 == param_2) {
          iVar6 = (int)((longlong)plVar7 - (longlong)plVar3 >> 3);
          if (iVar6 != -1) {
            iVar2 = piVar8[4];
            iVar4 = (iVar2 - iVar6) + -1;
            if (0 < iVar4) {
              iVar4 = 1;
            }
            if (iVar4 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(piVar8 + 2) + (longlong)iVar6 * 8),
                         (void *)(*(longlong *)(piVar8 + 2) + (longlong)(iVar2 - iVar4) * 8),
                         (longlong)iVar4 << 3);
              iVar2 = piVar8[4];
            }
            piVar8[4] = iVar2 + -1;
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(piVar8 + 2);
            iVar2 = *piVar8;
            iVar4 = (iVar2 - iVar6) + -1;
            if (0 < iVar4) {
              iVar4 = 1;
            }
            if (iVar4 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*(longlong *)(piVar8 + -2) + (longlong)iVar6 * 8),
                         (void *)(*(longlong *)(piVar8 + -2) + (longlong)(iVar2 - iVar4) * 8),
                         (longlong)iVar4 << 3);
              iVar2 = *piVar8;
            }
            *piVar8 = iVar2 + -1;
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(piVar8 + -2);
          }
          break;
        }
      }
      piVar1 = piVar8 + 0x12;
      piVar8 = piVar8 + 0x16;
    } while (piVar1 != (int *)(param_1 + 0x208));
  }
  FUN_1426e9f60(param_1,param_2,0);
  FUN_1426e9f60(param_1,param_2,2);
  return;
}



// FUNCTION 1426ee640 TermGamePhys body=612 status=ok
// SIG undefined TermGamePhys(void)

void TermGamePhys(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *local_18;
  int local_10;
  undefined4 local_c;
  
  puVar2 = DAT_146b08468;
  uVar7 = 0;
  if (DAT_146b08468 != (undefined8 *)0x0) {
    (**(code **)(*(longlong *)*DAT_146b08468 + 0x70))();
    *(undefined4 *)(puVar2 + 10) = 0;
    if (puVar2[9] != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (puVar2 + 1);
    FMemory::operator_delete(puVar2,0x58);
    DAT_146b08468 = (undefined8 *)0x0;
  }
  if (DAT_146b08450 != 0) {
    if (DAT_146b08410 != 0) {
      FPhysCommandHandler::Flush();
      uVar5 = FUN_14178e3a0();
      TBaseMulticastDelegate<void>::Remove(uVar5,DAT_146b08620);
      lVar1 = DAT_146b08410;
      if (DAT_146b08410 != 0) {
        FUN_140591050(DAT_146b08410);
        FMemory::operator_delete(lVar1,0x10);
      }
      DAT_146b08410 = 0;
    }
    if (DAT_146b08420 != (longlong *)0x0) {
      (**(code **)(*DAT_146b08420 + 0x20))();
      DAT_146b08420 = (longlong *)0x0;
    }
    if (DAT_146b08418 != (longlong *)0x0) {
      (**(code **)(*DAT_146b08418 + 0x20))();
      DAT_146b08418 = (longlong *)0x0;
    }
    if ((DAT_146b08400 != (longlong *)0x0) &&
       (iVar4 = (**(code **)(*DAT_146b08400 + 0x98))(), iVar4 != 0)) {
      local_18 = (longlong *)0x0;
      local_c = 0;
      local_10 = iVar4;
      if (0 < iVar4) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_18,0);
      }
      iVar3 = local_10;
      plVar6 = local_18;
      (**(code **)(*DAT_146b08400 + 0xa0))(DAT_146b08400,local_18,iVar4 * 8,0);
      uVar8 = (ulonglong)((longlong)(plVar6 + iVar3) + (7 - (longlong)plVar6)) >> 3;
      if (plVar6 + iVar3 < plVar6) {
        uVar8 = uVar7;
      }
      plVar9 = plVar6;
      if (uVar8 != 0) {
        do {
          if ((longlong *)*plVar9 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar9 + 8))();
          }
          plVar9 = plVar9 + 1;
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar8);
      }
      if (plVar6 != (longlong *)0x0) {
        FMemory::Free(plVar6);
      }
    }
    plVar6 = (longlong *)GetPhysXCookingModule(0);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x48))(plVar6);
    }
    if ((DAT_146b08400 != (longlong *)0x0) &&
       (FWindowsPlatformProcess::FreeDllHandle(), DAT_146b08400 != (longlong *)0x0)) {
      (**(code **)(*DAT_146b08400 + 8))();
      DAT_146b08400 = (longlong *)0x0;
    }
    FWindowsPlatformProcess::FreeDllHandle(DAT_146b083d0);
    FWindowsPlatformProcess::FreeDllHandle(DAT_146b083c8);
    if (DAT_146b083d8 != (HMODULE)0x0) {
      FWindowsPlatformProcess::FreeDllHandle(DAT_146b083d8);
    }
    FWindowsPlatformProcess::FreeDllHandle(DAT_146b083c0);
    FWindowsPlatformProcess::FreeDllHandle(DAT_146b083b8);
    FWindowsPlatformProcess::FreeDllHandle(DAT_146b083e8);
    FWindowsPlatformProcess::FreeDllHandle(DAT_146b083f0);
    FWindowsPlatformProcess::FreeDllHandle(DAT_146b083f8);
  }
  return;
}



// FUNCTION 1426ee8b0 FUN_1426ee8b0 body=458 status=ok
// SIG undefined FUN_1426ee8b0(void)

void FUN_1426ee8b0(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar7;
  
  lVar3 = 0;
  uVar5 = (ulonglong)param_2;
  uVar8 = (ulonglong)param_2;
  if (param_2 < *(uint *)(param_1 + 4)) {
    lVar3 = FUN_1426e2550((int)*(short *)(param_1 + 0x60 + uVar5 * 2));
  }
  if (lVar3 != 0) {
    lVar4 = FUN_1426e19d0(param_1,uVar5);
    if (lVar4 != 0) {
      FUN_1426bd8f0(DAT_146b08410,lVar4 + 0x10);
    }
    TBaseMulticastDelegate<void,FPhysScene_*,enum_EPhysicsSceneType>::Broadcast
              (&DAT_146534a28,param_1,param_2);
    lVar4 = *(longlong *)(param_1 + 0x2f0 + uVar5 * 8);
    if (lVar4 != 0) {
      if (*(longlong *)(lVar4 + 0xd0) != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)(lVar4 + 0xd0) + 0x48);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          FGraphEvent::Recycle();
        }
      }
      lVar9 = 2;
      plVar6 = (longlong *)(lVar4 + 0xa0);
      do {
        plVar7 = plVar6 + -10;
        lVar9 = lVar9 + -1;
        *(undefined4 *)(plVar6 + -1) = 0;
        if (plVar6[-2] != 0) {
          FMemory::Free();
        }
        TSparseArray<TSetElement<TTuple<FBodyInstance_*,FPhysTarget>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
        ::Empty(plVar7,0);
        if (plVar6[-6] != 0) {
          FMemory::Free();
        }
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar7;
      } while (lVar9 != 0);
      FMemory::operator_delete(lVar4,0xf0);
    }
    *(undefined8 *)(param_1 + 0x2f0 + uVar8 * 8) = 0;
    FUN_1426bd970(DAT_146b08410,lVar3);
    FUN_1426bd870(DAT_146b08410,*(undefined8 *)(param_1 + 0x220 + uVar8 * 8));
    FUN_1426bd750(DAT_146b08410,*(undefined8 *)(param_1 + 0x238 + uVar8 * 8));
    FUN_1426bd640(DAT_146b08410,*(undefined8 *)(param_1 + 0x268 + uVar8 * 8));
    FUN_1426bd7e0(DAT_146b08410,*(undefined8 *)(param_1 + 0x250 + uVar8 * 8));
    if (*(longlong *)(param_1 + 0x4c8 + uVar8 * 8) != 0) {
      FUN_1426bd5c0(DAT_146b08410);
    }
    FUN_1426e1610(param_1,0);
    FUN_1426e1610(param_1,2);
    FPhysCommandHandler::Flush(DAT_146b08410);
    TSet<TTuple<short,AFGHologram_*>,TDefaultMapHashableKeyFuncs<short,AFGHologram_*,0>,FDefaultSetAllocator>
    ::Remove(&DAT_146534a70,*(undefined2 *)(param_1 + 0x60 + uVar8 * 2));
  }
  return;
}



// FUNCTION 1426eea80 FUN_1426eea80 body=1527 status=ok
// SIG undefined FUN_1426eea80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1426eea80(longlong *param_1)

{
  float *pfVar1;
  code *pcVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float *pfVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_1a8 [48];
  float local_178;
  float local_174;
  float local_170 [2];
  ulonglong local_168;
  uint local_160;
  int local_15c;
  ulonglong local_158;
  uint local_150;
  int local_14c;
  longlong local_148;
  undefined8 local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  uint local_118;
  longlong *local_110;
  longlong local_108;
  int local_100;
  uint local_fc;
  longlong *local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  ulonglong local_d8;
  
  puVar13 = auStack_1a8;
  local_d8 = DAT_1468387a8 ^ (ulonglong)&local_178;
  local_f8 = param_1;
  if ((int)param_1[0x8d] == 0) {
    AActor::SetActorTickEnabled(param_1,0);
  }
  lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  if (*(int *)(*(longlong *)(lVar6 + 0x218) + 4) == 0) {
    plVar7 = (longlong *)0x0;
    local_110 = (longlong *)0x0;
  }
  else {
    plVar7 = (longlong *)FUN_1426e2550((int)*(short *)(*(longlong *)(lVar6 + 0x218) + 0x60));
    local_110 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x348))
                (plVar7,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\StaticWorldBounds.cpp"
                 ,0x27);
    }
  }
  uVar4 = (**(code **)(*plVar7 + 800))(plVar7);
  local_118 = uVar4;
  if (uVar4 == 0) {
    AActor::SetActorTickEnabled(param_1,0);
  }
  else {
    lVar8 = (ulonglong)uVar4 * 0x30;
    if ((ulonglong)uVar4 * 3 == 0) {
      pfVar12 = (float *)0x0;
      puVar13 = auStack_1a8;
    }
    else {
      uVar9 = lVar8 + 0x1e;
      if (uVar9 <= lVar8 + 0xfU) {
        uVar9 = 0xffffffffffffff0;
      }
      puVar13 = auStack_1a8 + -(uVar9 & 0xfffffffffffffff0);
      pfVar12 = (float *)((longlong)local_170 + -(uVar9 & 0xfffffffffffffff0));
    }
    pcVar2 = *(code **)(*plVar7 + 0x328);
    *(undefined8 *)(puVar13 + -8) = 0x1426eebf7;
    (*pcVar2)(plVar7,pfVar12,uVar4,0);
    *(undefined8 *)(puVar13 + -8) = 0x1426eebff;
    UWorld::GetFirstPlayerController(lVar6);
    fVar28 = pfVar12[3];
    uVar10 = 0;
    fVar29 = pfVar12[4];
    fVar26 = *pfVar12;
    fVar27 = pfVar12[1];
    local_fc = 0;
    local_170[1] = 0.0;
    local_120 = -8.5070587e+37;
    local_11c = -8.5070587e+37;
    local_168 = 0;
    local_15c = 0;
    local_158 = 0;
    local_14c = 0;
    local_108 = 0;
    local_100 = 0;
    local_148 = 0;
    local_140 = 0;
    local_178 = -NAN;
    local_174 = 0.0;
    local_170[0] = -NAN;
    local_f0 = 0x7e7fffff;
    uStack_ec = 0x7e7fffff;
    uStack_e8 = 0x7e7fffff;
    uStack_e4 = 0xfe7fffff;
    uVar9 = uVar10;
    local_138 = fVar28;
    local_134 = fVar29;
    if (local_118 != 0) {
      pfVar12 = pfVar12 + 9;
      local_124 = -8.5070587e+37;
      local_128 = 8.5070587e+37;
      local_12c = 8.5070587e+37;
      local_130 = 8.5070587e+37;
      uVar11 = uVar10;
      uVar14 = uVar10;
      uVar15 = uVar10;
      uVar16 = uVar10;
      uVar18 = uVar10;
      fVar30 = fVar26;
      fVar32 = fVar27;
      do {
        uVar4 = (uint)uVar10;
        fVar20 = *pfVar12;
        bVar19 = fVar20 == (float)uVar11;
        if ((uint)(float)uVar11 < (uint)fVar20) {
          local_100 = 0;
          local_170[1] = fVar20;
          if (uVar4 != 0) {
            *(undefined8 *)(puVar13 + -8) = 0x1426eecfe;
            TArray<float,FDefaultAllocator>::ResizeTo(&local_108,0);
            fVar20 = *pfVar12;
            uVar4 = local_fc;
          }
          bVar19 = fVar20 == local_170[1];
        }
        iVar5 = local_100;
        iVar17 = (int)uVar18;
        if (bVar19) {
          lVar6 = (longlong)local_100;
          local_100 = local_100 + 1;
          if ((int)uVar4 < local_100) {
            *(undefined8 *)(puVar13 + -8) = 0x1426eed23;
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_108,iVar5);
          }
          *(int *)(local_108 + lVar6 * 4) = iVar17;
        }
        fVar20 = *pfVar12;
        uVar4 = local_140._4_4_;
        bVar19 = fVar20 == local_178;
        if ((uint)fVar20 < (uint)local_178) {
          local_140 = (ulonglong)local_140._4_4_ << 0x20;
          local_178 = fVar20;
          if (uVar4 != 0) {
            *(undefined8 *)(puVar13 + -8) = 0x1426eed4e;
            TArray<float,FDefaultAllocator>::ResizeTo(&local_148,0);
            fVar20 = *pfVar12;
            uVar4 = local_140._4_4_;
          }
          bVar19 = fVar20 == local_178;
        }
        uVar10 = local_140;
        if (bVar19) {
          lVar6 = (longlong)(int)local_140;
          iVar5 = (int)local_140 + 1;
          local_140 = CONCAT44(local_140._4_4_,iVar5);
          if ((int)uVar4 < iVar5) {
            *(undefined8 *)(puVar13 + -8) = 0x1426eed71;
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_148,uVar10 & 0xffffffff);
          }
          *(int *)(local_148 + lVar6 * 4) = iVar17;
        }
        fVar20 = pfVar12[-1];
        bVar19 = fVar20 == local_174;
        if ((uint)local_174 < (uint)fVar20) {
          uVar16 = 0;
          local_160 = 0;
          local_174 = fVar20;
          if (local_15c != 0) {
            *(undefined8 *)(puVar13 + -8) = 0x1426eed9d;
            TArray<float,FDefaultAllocator>::ResizeTo(&local_168,0);
            fVar20 = pfVar12[-1];
            uVar16 = (ulonglong)local_160;
            uVar15 = local_168;
          }
          bVar19 = fVar20 == local_174;
        }
        if (bVar19) {
          iVar5 = (int)uVar16;
          local_160 = iVar5 + 1;
          if (local_15c < (int)local_160) {
            *(undefined8 *)(puVar13 + -8) = 0x1426eedcb;
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_168,uVar16);
            uVar15 = local_168;
          }
          uVar16 = (ulonglong)local_160;
          *(int *)(uVar15 + (longlong)iVar5 * 4) = iVar17;
        }
        fVar20 = pfVar12[-1];
        bVar19 = fVar20 == local_170[0];
        if ((uint)fVar20 < (uint)local_170[0]) {
          uVar14 = 0;
          local_150 = 0;
          local_170[0] = fVar20;
          if (local_14c != 0) {
            *(undefined8 *)(puVar13 + -8) = 0x1426eedf9;
            TArray<float,FDefaultAllocator>::ResizeTo(&local_158,0);
            fVar20 = pfVar12[-1];
            uVar14 = (ulonglong)local_150;
            uVar9 = local_158;
          }
          bVar19 = fVar20 == local_170[0];
        }
        if (bVar19) {
          iVar5 = (int)uVar14;
          local_150 = iVar5 + 1;
          if (local_14c < (int)local_150) {
            *(undefined8 *)(puVar13 + -8) = 0x1426eee23;
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_158,uVar14);
            uVar9 = local_158;
          }
          uVar14 = (ulonglong)local_150;
          *(int *)(uVar9 + (longlong)iVar5 * 4) = iVar17;
        }
        fVar20 = pfVar12[-9];
        fVar24 = pfVar12[-8];
        fVar21 = pfVar12[-6];
        fVar22 = pfVar12[-5];
        if (1 < (int)local_f8[0x8d]) {
          fVar31 = pfVar12[-1];
          *(float *)(puVar13 + 0x20) = *pfVar12;
          *(undefined8 *)(puVar13 + -8) = 0x1426eee75;
          FString::PrintfImpl(&local_f0,L"Region/Static/Dynamic: %i/%i/%i",uVar18,fVar31);
          if (CONCAT44(uStack_ec,local_f0) != 0) {
            *(undefined8 *)(puVar13 + -8) = 0x1426eee86;
            FMemory::Free();
          }
        }
        fVar25 = (fVar21 - fVar20) * (fVar22 - fVar24);
        fVar31 = fVar20;
        fVar33 = fVar24;
        fVar23 = fVar21;
        fVar3 = fVar22;
        if ((fVar25 <= (local_138 - fVar30) * (local_134 - fVar32)) &&
           (fVar31 = fVar30, fVar33 = fVar32, fVar23 = local_138, fVar3 = local_134,
           fVar25 < (fVar28 - fVar26) * (fVar29 - fVar27))) {
          fVar26 = fVar20;
          fVar27 = fVar24;
          fVar28 = fVar21;
          fVar29 = fVar22;
        }
        local_134 = fVar3;
        local_138 = fVar23;
        uVar18 = (ulonglong)(iVar17 + 1U);
        fVar20 = pfVar12[-9];
        if (local_130 <= pfVar12[-9]) {
          fVar20 = local_130;
        }
        fVar24 = pfVar12[-8];
        if (local_12c <= pfVar12[-8]) {
          fVar24 = local_12c;
        }
        uVar10 = (ulonglong)local_fc;
        uVar11 = (ulonglong)(uint)local_170[1];
        fVar21 = pfVar12[-7];
        if (local_128 <= pfVar12[-7]) {
          fVar21 = local_128;
        }
        if (local_120 <= pfVar12[-5]) {
          local_120 = pfVar12[-5];
        }
        fVar22 = pfVar12[-6];
        if (pfVar12[-6] <= local_124) {
          fVar22 = local_124;
        }
        pfVar1 = pfVar12 + -4;
        pfVar12 = pfVar12 + 0xc;
        fVar23 = *pfVar1;
        if (*pfVar1 <= local_11c) {
          fVar23 = local_11c;
        }
        plVar7 = local_110;
        fVar30 = fVar31;
        fVar32 = fVar33;
        local_130 = fVar20;
        local_12c = fVar24;
        local_128 = fVar21;
        local_124 = fVar22;
        local_11c = fVar23;
      } while (iVar17 + 1U < local_118);
    }
    uVar10 = local_168;
    local_178 = (float)CONCAT22(local_178._2_2_,3);
    pcVar2 = *(code **)(*plVar7 + 0x90);
    *(undefined8 *)(puVar13 + -8) = 0x1426eef91;
    (*pcVar2)(plVar7,&local_178);
    lVar6 = local_148;
    if (2 < (int)local_f8[0x8d]) {
      *(undefined4 *)(local_f8 + 0x8d) = 2;
    }
    if (local_148 != 0) {
      *(undefined8 *)(puVar13 + -8) = 0x1426eefbc;
      FMemory::Free(lVar6);
    }
    lVar6 = local_108;
    if (local_108 != 0) {
      *(undefined8 *)(puVar13 + -8) = 0x1426eefcd;
      FMemory::Free(lVar6);
    }
    if (uVar9 != 0) {
      *(undefined8 *)(puVar13 + -8) = 0x1426eefda;
      FMemory::Free(uVar9);
    }
    if (uVar10 != 0) {
      *(undefined8 *)(puVar13 + -8) = 0x1426eefe7;
      FMemory::Free(uVar10);
    }
  }
  pcVar2 = *(code **)(*plVar7 + 0x350);
  *(undefined8 *)(puVar13 + -8) = 0x1426eeff4;
  (*pcVar2)(plVar7);
  *(undefined8 *)(puVar13 + -8) = 0x1426ef003;
  return;
}



// FUNCTION 1426ef080 FUN_1426ef080 body=819 status=ok
// SIG undefined FUN_1426ef080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426ef080(longlong param_1,float param_2)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar22;
  float fVar23;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar24;
  undefined1 auVar21 [16];
  float fVar25;
  float fVar26;
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
  uint uVar41;
  uint uVar42;
  uint uVar43;
  
  FUN_142357eb0();
  fVar16 = fRam0000000146b084bc;
  fVar15 = fRam0000000146b084b8;
  fVar14 = fRam0000000146b084b4;
  fVar13 = _DAT_146b084b0;
  fVar12 = fRam0000000146b084ac;
  fVar11 = fRam0000000146b084a8;
  fVar10 = fRam0000000146b084a4;
  fVar9 = _DAT_146b084a0;
  if ((*(byte *)(param_1 + 0x18c) & 8) == 0) {
    *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_1 + 0x1a0);
    *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(param_1 + 0x1a8);
    *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_1 + 0x1b0);
    *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_1 + 0x1b8);
    *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_1 + 0x1c0);
    *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_1 + 0x1c4);
    *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_1 + 0x1c8);
    *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_1 + 0x1cc);
  }
  else {
    param_2 = param_2 * *(float *)(param_1 + 0x200);
    fVar40 = 0.0;
    if ((0.0 <= param_2) && (fVar40 = param_2, 1.0 <= param_2)) {
      fVar40 = 1.0;
    }
    pfVar1 = (float *)(param_1 + 0x1d0);
    fVar26 = *pfVar1;
    fVar28 = *(float *)(param_1 + 0x1d4);
    fVar30 = *(float *)(param_1 + 0x1d8);
    fVar32 = *(float *)(param_1 + 0x1dc);
    fVar17 = *(float *)(param_1 + 0x1a0);
    fVar22 = *(float *)(param_1 + 0x1a4);
    fVar23 = *(float *)(param_1 + 0x1a8);
    fVar24 = *(float *)(param_1 + 0x1ac);
    fVar37 = *(float *)(param_1 + 0x1e0);
    fVar38 = *(float *)(param_1 + 0x1e4);
    fVar39 = *(float *)(param_1 + 0x1e8);
    fVar4 = *(float *)(param_1 + 0x1ec);
    fVar5 = *(float *)(param_1 + 0x1f0);
    fVar6 = *(float *)(param_1 + 500);
    fVar7 = *(float *)(param_1 + 0x1f8);
    fVar8 = *(float *)(param_1 + 0x1fc);
    auVar18._0_4_ = fVar26 * fVar26 + fVar30 * fVar30;
    auVar18._4_4_ = fVar28 * fVar28 + fVar32 * fVar32;
    auVar18._8_4_ = fVar30 * fVar30 + fVar26 * fVar26;
    auVar18._12_4_ = fVar32 * fVar32 + fVar28 * fVar28;
    fVar33 = auVar18._4_4_ + auVar18._0_4_;
    fVar34 = auVar18._8_4_ + auVar18._4_4_;
    fVar35 = auVar18._12_4_ + auVar18._8_4_;
    fVar36 = auVar18._0_4_ + auVar18._12_4_;
    auVar19._4_4_ = fVar34;
    auVar19._0_4_ = fVar33;
    auVar19._8_4_ = fVar35;
    auVar19._12_4_ = fVar36;
    auVar19 = rsqrtps(auVar18,auVar19);
    fVar25 = auVar19._0_4_;
    fVar27 = auVar19._4_4_;
    fVar29 = auVar19._8_4_;
    fVar31 = auVar19._12_4_;
    fVar25 = (_DAT_146b084a0 - fVar25 * fVar25 * _DAT_146b084a0 * fVar33) * fVar25 + fVar25;
    fVar27 = (fRam0000000146b084a4 - fVar27 * fVar27 * fRam0000000146b084a4 * fVar34) * fVar27 +
             fVar27;
    fVar29 = (fRam0000000146b084a8 - fVar29 * fVar29 * fRam0000000146b084a8 * fVar35) * fVar29 +
             fVar29;
    fVar31 = (fRam0000000146b084ac - fVar31 * fVar31 * fRam0000000146b084ac * fVar36) * fVar31 +
             fVar31;
    fVar33 = (float)(((uint)(((_DAT_146b084a0 - fVar25 * fVar25 * _DAT_146b084a0 * fVar33) * fVar25
                             + fVar25) * fVar26) ^ _DAT_146b08490) &
                     -(uint)(_DAT_146b084b0 <= fVar33) ^ _DAT_146b08490);
    fVar34 = (float)(((uint)(((fRam0000000146b084a4 -
                              fVar27 * fVar27 * fRam0000000146b084a4 * fVar34) * fVar27 + fVar27) *
                            fVar28) ^ uRam0000000146b08494) &
                     -(uint)(fRam0000000146b084b4 <= fVar34) ^ uRam0000000146b08494);
    fVar35 = (float)(((uint)(((fRam0000000146b084a8 -
                              fVar29 * fVar29 * fRam0000000146b084a8 * fVar35) * fVar29 + fVar29) *
                            fVar30) ^ uRam0000000146b08498) &
                     -(uint)(fRam0000000146b084b8 <= fVar35) ^ uRam0000000146b08498);
    fVar36 = (float)(((uint)(((fRam0000000146b084ac -
                              fVar31 * fVar31 * fRam0000000146b084ac * fVar36) * fVar31 + fVar31) *
                            fVar32) ^ uRam0000000146b0849c) &
                     -(uint)(fRam0000000146b084bc <= fVar36) ^ uRam0000000146b0849c);
    auVar20._0_4_ = fVar17 * fVar17 + fVar23 * fVar23;
    auVar20._4_4_ = fVar22 * fVar22 + fVar24 * fVar24;
    auVar20._8_4_ = fVar23 * fVar23 + fVar17 * fVar17;
    auVar20._12_4_ = fVar24 * fVar24 + fVar22 * fVar22;
    fVar25 = auVar20._4_4_ + auVar20._0_4_;
    fVar27 = auVar20._8_4_ + auVar20._4_4_;
    fVar29 = auVar20._12_4_ + auVar20._8_4_;
    fVar31 = auVar20._0_4_ + auVar20._12_4_;
    auVar2._4_4_ = fVar27;
    auVar2._0_4_ = fVar25;
    auVar2._8_4_ = fVar29;
    auVar2._12_4_ = fVar31;
    auVar19 = rsqrtps(auVar20,auVar2);
    fVar26 = auVar19._0_4_;
    fVar28 = auVar19._4_4_;
    fVar30 = auVar19._8_4_;
    fVar32 = auVar19._12_4_;
    fVar26 = (_DAT_146b084a0 - fVar26 * fVar26 * fVar25 * _DAT_146b084a0) * fVar26 + fVar26;
    fVar28 = (fRam0000000146b084a4 - fVar28 * fVar28 * fVar27 * fRam0000000146b084a4) * fVar28 +
             fVar28;
    fVar30 = (fRam0000000146b084a8 - fVar30 * fVar30 * fVar29 * fRam0000000146b084a8) * fVar30 +
             fVar30;
    fVar32 = (fRam0000000146b084ac - fVar32 * fVar32 * fVar31 * fRam0000000146b084ac) * fVar32 +
             fVar32;
    fVar26 = (float)(((uint)(((_DAT_146b084a0 - fVar26 * fVar26 * fVar25 * _DAT_146b084a0) * fVar26
                             + fVar26) * fVar17) ^ _DAT_146b08490) &
                     -(uint)(_DAT_146b084b0 <= fVar25) ^ _DAT_146b08490);
    fVar28 = (float)(((uint)(((fRam0000000146b084a4 -
                              fVar28 * fVar28 * fVar27 * fRam0000000146b084a4) * fVar28 + fVar28) *
                            fVar22) ^ uRam0000000146b08494) &
                     -(uint)(fRam0000000146b084b4 <= fVar27) ^ uRam0000000146b08494);
    fVar30 = (float)(((uint)(((fRam0000000146b084a8 -
                              fVar30 * fVar30 * fVar29 * fRam0000000146b084a8) * fVar30 + fVar30) *
                            fVar23) ^ uRam0000000146b08498) &
                     -(uint)(fRam0000000146b084b8 <= fVar29) ^ uRam0000000146b08498);
    fVar32 = (float)(((uint)(((fRam0000000146b084ac -
                              fVar32 * fVar32 * fVar31 * fRam0000000146b084ac) * fVar32 + fVar32) *
                            fVar24) ^ uRam0000000146b0849c) &
                     -(uint)(fRam0000000146b084bc <= fVar31) ^ uRam0000000146b0849c);
    if (1e-05 < ABS(fVar40)) {
      if (1e-05 < ABS(fVar40 - 1.0)) {
        fVar17 = fVar26 * fVar33 + fVar30 * fVar35;
        fVar22 = fVar28 * fVar34 + fVar32 * fVar36;
        fVar23 = fVar30 * fVar35 + fVar26 * fVar33;
        fVar24 = fVar32 * fVar36 + fVar28 * fVar34;
        *(float *)(param_1 + 0x1e0) = (*(float *)(param_1 + 0x1b0) - fVar37) * fVar40 + fVar37;
        *(float *)(param_1 + 0x1e4) = (*(float *)(param_1 + 0x1b4) - fVar38) * fVar40 + fVar38;
        *(float *)(param_1 + 0x1e8) = (*(float *)(param_1 + 0x1b8) - fVar39) * fVar40 + fVar39;
        *(float *)(param_1 + 0x1ec) = (*(float *)(param_1 + 0x1bc) - fVar4) * fVar40 + fVar4;
        *(float *)(param_1 + 0x1f0) = (*(float *)(param_1 + 0x1c0) - fVar5) * fVar40 + fVar5;
        *(float *)(param_1 + 500) = (*(float *)(param_1 + 0x1c4) - fVar6) * fVar40 + fVar6;
        *(float *)(param_1 + 0x1f8) = (*(float *)(param_1 + 0x1c8) - fVar7) * fVar40 + fVar7;
        *(float *)(param_1 + 0x1fc) = (*(float *)(param_1 + 0x1cc) - fVar8) * fVar40 + fVar8;
        fVar37 = (float)(-(uint)(0.0 <= fVar22 + fVar17) & ((uint)(0.0 - fVar33) ^ (uint)fVar33) ^
                        (uint)(0.0 - fVar33)) * (_DAT_146b08470 - fVar40) + fVar26 * fVar40;
        fVar38 = (float)(-(uint)(0.0 <= fVar23 + fVar22) & ((uint)(0.0 - fVar34) ^ (uint)fVar34) ^
                        (uint)(0.0 - fVar34)) * (fRam0000000146b08474 - fVar40) + fVar28 * fVar40;
        fVar39 = (float)(-(uint)(0.0 <= fVar24 + fVar23) & ((uint)(0.0 - fVar35) ^ (uint)fVar35) ^
                        (uint)(0.0 - fVar35)) * (fRam0000000146b08478 - fVar40) + fVar30 * fVar40;
        fVar24 = (float)(-(uint)(0.0 <= fVar17 + fVar24) & ((uint)(0.0 - fVar36) ^ (uint)fVar36) ^
                        (uint)(0.0 - fVar36)) * (fRam0000000146b0847c - fVar40) + fVar32 * fVar40;
        auVar21._0_4_ = fVar37 * fVar37 + fVar39 * fVar39;
        auVar21._4_4_ = fVar38 * fVar38 + fVar24 * fVar24;
        auVar21._8_4_ = fVar39 * fVar39 + fVar37 * fVar37;
        auVar21._12_4_ = fVar24 * fVar24 + fVar38 * fVar38;
        fVar32 = auVar21._4_4_ + auVar21._0_4_;
        fVar17 = auVar21._8_4_ + auVar21._4_4_;
        fVar22 = auVar21._12_4_ + auVar21._8_4_;
        fVar23 = auVar21._0_4_ + auVar21._12_4_;
        auVar3._4_4_ = fVar17;
        auVar3._0_4_ = fVar32;
        auVar3._8_4_ = fVar22;
        auVar3._12_4_ = fVar23;
        auVar19 = rsqrtps(auVar21,auVar3);
        fVar40 = auVar19._0_4_;
        fVar26 = auVar19._4_4_;
        fVar28 = auVar19._8_4_;
        fVar30 = auVar19._12_4_;
        fVar40 = (fVar9 - fVar40 * fVar40 * fVar32 * fVar9) * fVar40 + fVar40;
        fVar26 = (fVar10 - fVar26 * fVar26 * fVar17 * fVar10) * fVar26 + fVar26;
        fVar28 = (fVar11 - fVar28 * fVar28 * fVar22 * fVar11) * fVar28 + fVar28;
        fVar30 = (fVar12 - fVar30 * fVar30 * fVar23 * fVar12) * fVar30 + fVar30;
        uVar41 = ((uint)(((fVar10 - fVar26 * fVar26 * fVar17 * fVar10) * fVar26 + fVar26) * fVar38)
                 ^ uRam0000000146b08494) & -(uint)(fVar14 <= fVar17) ^ uRam0000000146b08494;
        uVar42 = ((uint)(((fVar11 - fVar28 * fVar28 * fVar22 * fVar11) * fVar28 + fVar28) * fVar39)
                 ^ uRam0000000146b08498) & -(uint)(fVar15 <= fVar22) ^ uRam0000000146b08498;
        uVar43 = ((uint)(((fVar12 - fVar30 * fVar30 * fVar23 * fVar12) * fVar30 + fVar30) * fVar24)
                 ^ uRam0000000146b0849c) & -(uint)(fVar16 <= fVar23) ^ uRam0000000146b0849c;
        *pfVar1 = (float)(((uint)(((fVar9 - fVar40 * fVar40 * fVar32 * fVar9) * fVar40 + fVar40) *
                                 fVar37) ^ _DAT_146b08490) & -(uint)(fVar13 <= fVar32) ^
                         _DAT_146b08490);
        *(uint *)(param_1 + 0x1d4) = uVar41;
        *(uint *)(param_1 + 0x1d8) = uVar42;
        *(uint *)(param_1 + 0x1dc) = uVar43;
      }
      else {
        *pfVar1 = fVar26;
        *(float *)(param_1 + 0x1d4) = fVar28;
        *(float *)(param_1 + 0x1d8) = fVar30;
        *(float *)(param_1 + 0x1dc) = fVar32;
        *(float *)(param_1 + 0x1e0) = *(float *)(param_1 + 0x1b0);
        *(float *)(param_1 + 0x1e4) = *(float *)(param_1 + 0x1b4);
        *(float *)(param_1 + 0x1e8) = *(float *)(param_1 + 0x1b8);
        *(float *)(param_1 + 0x1ec) = *(float *)(param_1 + 0x1bc);
        *(float *)(param_1 + 0x1f0) = *(float *)(param_1 + 0x1c0);
        *(float *)(param_1 + 500) = *(float *)(param_1 + 0x1c4);
        *(float *)(param_1 + 0x1f8) = *(float *)(param_1 + 0x1c8);
        *(float *)(param_1 + 0x1fc) = *(float *)(param_1 + 0x1cc);
      }
    }
    else {
      *pfVar1 = fVar33;
      *(float *)(param_1 + 0x1d4) = fVar34;
      *(float *)(param_1 + 0x1d8) = fVar35;
      *(float *)(param_1 + 0x1dc) = fVar36;
      *(float *)(param_1 + 0x1e0) = fVar37;
      *(float *)(param_1 + 0x1e4) = fVar38;
      *(float *)(param_1 + 0x1e8) = fVar39;
      *(float *)(param_1 + 0x1ec) = fVar4;
      *(float *)(param_1 + 0x1f0) = fVar5;
      *(float *)(param_1 + 500) = fVar6;
      *(float *)(param_1 + 0x1f8) = fVar7;
      *(float *)(param_1 + 0x1fc) = fVar8;
    }
  }
  FUN_1426f1210(param_1);
  return;
}



// FUNCTION 1426ef3c0 FUN_1426ef3c0 body=1185 status=ok
// SIG undefined FUN_1426ef3c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426ef3c0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_248 [32];
  undefined4 *local_228;
  uint local_220;
  undefined4 *local_218;
  undefined1 *local_210;
  undefined *local_208;
  undefined1 local_1f8 [8];
  float local_1f0;
  float fStack_1ec;
  float local_1e8;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  undefined8 local_1c8;
  float local_1c0;
  undefined4 local_1b8 [4];
  undefined8 local_1a8;
  float local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  float local_190;
  undefined1 local_188 [12];
  float local_17c;
  undefined1 local_114 [28];
  undefined1 local_f8 [72];
  longlong local_b0;
  longlong local_90;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  FUN_142357eb0();
  plVar1 = *(longlong **)(param_1 + 400);
  if (plVar1 != (longlong *)0x0) {
    lVar6 = FUN_1429f11d0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && ((*(byte *)(param_1 + 0xba) & 4) != 0)) {
      fVar9 = *(float *)(param_1 + 0x210);
      fVar13 = *(float *)(param_1 + 0x214);
      fVar2 = *(float *)(param_1 + 0x218);
      fVar3 = *(float *)(param_1 + 0x21c);
      lVar6 = *(longlong *)(param_1 + 0x120);
      local_1f0 = *(float *)(param_1 + 0x220);
      fStack_1ec = *(float *)(param_1 + 0x224);
      local_1e8 = *(float *)(param_1 + 0x228);
      fVar10 = fVar13 * 0.0 - fVar2 * 0.0;
      fVar11 = fVar2 * 1.0 - fVar9 * 0.0;
      fVar12 = fVar9 * 0.0 - fVar13 * 1.0;
      fVar10 = fVar10 + fVar10;
      fVar11 = fVar11 + fVar11;
      fVar12 = fVar12 + fVar12;
      local_1d8 = local_1e8 +
                  ((fVar11 * fVar9 - fVar10 * fVar13) + fVar12 * fVar3 + 0.0) *
                  *(float *)(param_1 + 0x2d8);
      local_1e0 = local_1f0 +
                  ((fVar12 * fVar13 - fVar11 * fVar2) + fVar10 * fVar3 + 1.0) *
                  *(float *)(param_1 + 0x2d8);
      fVar13 = 1.0;
      local_1dc = fStack_1ec +
                  ((fVar10 * fVar2 - fVar12 * fVar9) + fVar11 * fVar3 + 0.0) *
                  *(float *)(param_1 + 0x2d8);
      if (lVar6 == 0) {
        lVar6 = FUN_1423407b0(param_1);
      }
      puVar7 = (undefined4 *)0x0;
      puVar8 = puVar7;
      if (*(char *)(param_1 + 0x2e1) != '\0') {
        puVar8 = *(undefined4 **)(param_1 + 0x118);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146b08a70) &&
         (_Init_thread_header(&DAT_146b08a70), DAT_146b08a70 == -1)) {
        FName::FName(&DAT_146b08a68,"SpringComponent",1);
        _Init_thread_footer(&DAT_146b08a70);
      }
      local_228 = puVar8;
      FUN_1422ffb20(local_f8,DAT_146b08a68,local_1f8,1);
      _guard_xfg_dispatch_icall_nop(local_188,0,0x90);
      local_17c = 1.0;
      if (1e-16 < (local_1dc - fStack_1ec) * (local_1dc - fStack_1ec) +
                  (local_1e0 - local_1f0) * (local_1e0 - local_1f0) +
                  (local_1d8 - local_1e8) * (local_1d8 - local_1e8)) {
        local_194 = *(undefined4 *)(param_1 + 0x2dc);
        local_208 = &DAT_146aefe68;
        local_210 = local_f8;
        local_218 = &local_198;
        local_198 = 2;
        local_220 = (uint)*(byte *)(param_1 + 0x2e0);
        local_228 = &DAT_1464aa810;
        cVar5 = UWorld::SweepSingleByChannel(lVar6,local_188,&local_1f0,&local_1e0);
        if ((cVar5 != '\0') &&
           (puVar7 = (undefined4 *)FWeakObjectPtr::Get(local_114), puVar7 != (undefined4 *)0x0)) {
          fVar13 = local_17c;
        }
      }
      if (local_90 != 0) {
        FMemory::Free();
      }
      if (local_b0 != 0) {
        FMemory::Free();
      }
      local_1a0 = local_1e8 + (local_1d8 - local_1e8) * fVar13;
      *(ulonglong *)(param_1 + 0x2e8) =
           CONCAT44(fStack_1ec + (local_1dc - fStack_1ec) * fVar13,
                    local_1f0 + (local_1e0 - local_1f0) * fVar13);
      *(float *)(param_1 + 0x2f0) = local_1a0;
      if (puVar7 != (undefined4 *)0x0) {
        fVar9 = (float)(**(code **)(*plVar1 + 0x7f0))(plVar1);
        local_228 = local_1b8;
        FUN_1426da9b0(param_1,&local_1c8,param_1 + 0x2e8,param_2);
        local_1a8 = CONCAT44(fStack_1ec,local_1f0);
        local_1a0 = local_1e8;
        local_1c0 = local_1c0 * fVar9;
        local_1c8 = CONCAT44(local_1c8._4_4_ * fVar9,(float)local_1c8 * fVar9);
        local_190 = local_1c0;
        (**(code **)(*plVar1 + 0x608))
                  (plVar1,&local_1c8,&local_1a8,*(undefined8 *)(param_1 + 0x198));
        *(undefined4 *)(param_1 + 0x2e4) = local_1b8[0];
      }
      FUN_1426f0240(param_1);
    }
  }
  return;
}



// FUNCTION 1426ef870 FUN_1426ef870 body=366 status=ok
// SIG undefined FUN_1426ef870(void)

void FUN_1426ef870(longlong param_1)

{
  float fVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined8 local_28;
  float local_20;
  
  FUN_142357eb0();
  if (((*(byte *)(param_1 + 0xba) & 4) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 400), plVar2 != (longlong *)0x0)) {
    fVar3 = *(float *)(param_1 + 0x210);
    fVar4 = *(float *)(param_1 + 0x214);
    fVar5 = *(float *)(param_1 + 0x218);
    fVar6 = *(float *)(param_1 + 0x21c);
    fVar9 = fVar4 * 0.0 - fVar5 * 0.0;
    fVar10 = fVar5 * -1.0 - fVar3 * 0.0;
    fVar11 = fVar3 * 0.0 - fVar4 * -1.0;
    fVar9 = fVar9 + fVar9;
    fVar10 = fVar10 + fVar10;
    fVar11 = fVar11 + fVar11;
    fVar1 = *(float *)(param_1 + 0x2d0);
    lVar8 = FUN_1429f11d0();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      local_38 = *(undefined4 *)(param_1 + 0x220);
      uStack_34 = *(undefined4 *)(param_1 + 0x224);
      local_30 = *(undefined4 *)(param_1 + 0x228);
      local_28 = CONCAT44(((fVar9 * fVar5 - fVar11 * fVar3) + fVar10 * fVar6 + 0.0) * fVar1,
                          ((fVar11 * fVar4 - fVar10 * fVar5) + fVar9 * fVar6 + -1.0) * fVar1);
      local_20 = ((fVar10 * fVar3 - fVar9 * fVar4) + fVar11 * fVar6 + 0.0) * fVar1;
      (**(code **)(*plVar2 + 0x608))(plVar2,&local_28,&local_38,0);
    }
  }
  return;
}



// FUNCTION 1426ef9e0 FUN_1426ef9e0 body=1087 status=ok
// SIG undefined FUN_1426ef9e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426ef9e0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_238 [32];
  longlong local_218;
  undefined8 *local_210;
  undefined1 *local_208;
  undefined1 local_1f8 [8];
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  longlong local_1e0;
  ulonglong local_1d8;
  undefined8 local_1c8;
  undefined4 local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  undefined8 local_1a8;
  undefined1 local_198 [16];
  undefined1 local_188;
  longlong local_150;
  longlong local_130;
  longlong local_118 [24];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  FUN_142357eb0();
  if ((*(byte *)(param_1 + 0xba) & 4) != 0) {
    local_1f0 = *(undefined4 *)(param_1 + 0x220);
    uStack_1ec = *(undefined4 *)(param_1 + 0x224);
    local_1e8 = *(undefined4 *)(param_1 + 0x228);
    uVar11 = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b08ab0) &&
       (_Init_thread_header(&DAT_146b08ab0), DAT_146b08ab0 == -1)) {
      FName::FName(&DAT_146b08aa8,"AddForceOverlap",1);
      _Init_thread_footer(&DAT_146b08ab0);
    }
    local_218 = 0;
    FUN_1422ffb20(local_198,DAT_146b08aa8,local_1f8,0);
    local_188 = 1;
    if ((*(byte *)(param_1 + 0x2dc) & 2) != 0) {
      FCollisionQueryParams::AddIgnoredActor(local_198,*(undefined8 *)(param_1 + 0x118));
    }
    lVar4 = *(longlong *)(param_1 + 0x120);
    local_1c8 = CONCAT44(*(undefined4 *)(param_1 + 0x2d0),2);
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0(param_1);
    }
    local_208 = local_198;
    local_218 = param_1 + 0x2f8;
    local_210 = &local_1c8;
    UWorld::OverlapMultiByObjectType(lVar4,&local_1e0,&local_1f0,&DAT_1464aa810);
    local_1b0 = (longlong *)0x0;
    local_1a8 = 0;
    if (0 < (int)local_1d8) {
      FUN_1407eed70(&local_1b8,local_1d8 & 0xffffffff);
    }
    lVar4 = local_1e0 + (longlong)(int)local_1d8 * 0x18;
    for (lVar10 = local_1e0; lVar10 != lVar4; lVar10 = lVar10 + 0x18) {
      lVar5 = FWeakObjectPtr::Get(lVar10 + 8);
      uVar12 = local_1a8;
      if (lVar5 != 0) {
        plVar6 = &local_1b8;
        if (local_1b0 != (longlong *)0x0) {
          plVar6 = local_1b0;
        }
        for (plVar8 = plVar6; plVar8 != plVar6 + (int)local_1a8; plVar8 = plVar8 + 1) {
          if (*plVar8 == lVar5) {
            if ((int)((longlong)plVar8 - (longlong)plVar6 >> 3) != -1) goto LAB_1426efc00;
            break;
          }
        }
        lVar9 = (longlong)(int)local_1a8;
        iVar3 = (int)local_1a8 + 1;
        local_1a8 = CONCAT44(local_1a8._4_4_,iVar3);
        if (local_1a8._4_4_ < iVar3) {
          FUN_1407eebb0(&local_1b8,uVar12 & 0xffffffff);
        }
        plVar6 = &local_1b8;
        if (local_1b0 != (longlong *)0x0) {
          plVar6 = local_1b0;
        }
        plVar6[lVar9] = lVar5;
      }
LAB_1426efc00:
    }
    plVar6 = &local_1b8;
    if (local_1b0 != (longlong *)0x0) {
      plVar6 = local_1b0;
    }
    uVar12 = (longlong)(int)local_1a8 & 0x1fffffffffffffff;
    if (plVar6 + (int)local_1a8 < plVar6) {
      uVar12 = uVar11;
    }
    if (uVar12 != 0) {
      do {
        plVar8 = (longlong *)*plVar6;
        local_1c8 = CONCAT44(uStack_1ec,local_1f0);
        local_1c0 = local_1e8;
        local_210 = (undefined8 *)((ulonglong)local_210 & 0xffffffffffffff00);
        local_218 = CONCAT44(local_218._4_4_,(uint)*(byte *)(param_1 + 0x2d4));
        (**(code **)(*plVar8 + 0x618))
                  (plVar8,&local_1c8,*(undefined4 *)(param_1 + 0x2d0),
                   *(undefined4 *)(param_1 + 0x2e0));
        if (plVar8[0x23] != 0) {
          local_58 = (longlong *)0x0;
          local_50 = 0;
          FUN_1426d2cc0(plVar8[0x23],local_118,0);
          plVar7 = local_118;
          if (local_58 != (longlong *)0x0) {
            plVar7 = local_58;
          }
          plVar1 = plVar7 + (int)local_50;
          for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
            plVar2 = (longlong *)*plVar7;
            if ((longlong *)plVar2[0x2f] == plVar8) {
              local_218 = CONCAT44(local_218._4_4_,(uint)*(byte *)(param_1 + 0x2d4));
              (**(code **)(*plVar2 + 0x4b8))
                        (plVar2,&local_1f0,*(undefined4 *)(param_1 + 0x2d0),
                         *(undefined4 *)(param_1 + 0x2e0));
              break;
            }
          }
          if (local_58 != (longlong *)0x0) {
            FMemory::Free(local_58);
          }
        }
        plVar6 = plVar6 + 1;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar12);
    }
    if (local_1b0 != (longlong *)0x0) {
      FMemory::Free(local_1b0);
    }
    if (local_130 != 0) {
      FMemory::Free();
    }
    if (local_150 != 0) {
      FMemory::Free();
    }
    if (local_1e0 != 0) {
      FMemory::Free(local_1e0);
    }
  }
  return;
}



// FUNCTION 1426efe20 FUN_1426efe20 body=882 status=ok
// SIG undefined FUN_1426efe20(void)

void FUN_1426efe20(longlong param_1,uint param_2,longlong *param_3)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  undefined4 uVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  bool bVar13;
  float fVar14;
  LARGE_INTEGER local_res8 [2];
  longlong local_res20;
  longlong local_68 [6];
  
  uVar6 = DAT_1468e3590;
  uVar12 = (ulonglong)param_2;
  uVar8 = FUN_14168db40();
  FCsvProfiler::BeginStat(uVar8,"TotalPhysicsTime",uVar6);
  QueryPerformanceCounter(local_res8);
  *(double *)(&DAT_146b08430 + uVar12 * 8) =
       (double)local_res8[0].QuadPart * DAT_1468b02f8 + 16777216.0;
  if (*(char *)(param_1 + 0x66 + uVar12) != '\0') goto LAB_1426f00f3;
  if (param_2 == 2) {
    fVar2 = *(float *)(param_1 + 0x8c);
  }
  else {
    fVar2 = *(float *)(param_1 + 0x84);
  }
  fVar14 = *(float *)(param_1 + 0x88);
  if (fVar2 <= *(float *)(param_1 + 0x88)) {
    fVar14 = fVar2;
  }
  if (fVar14 <= 0.0) goto LAB_1426f00f3;
  fVar2 = *(float *)(param_1 + 0x78 + uVar12 * 4);
  *(float *)(param_1 + 0x6c + uVar12 * 4) =
       (1.0 - fVar2) * fVar14 + fVar2 * *(float *)(param_1 + 0x6c + uVar12 * 4);
  *(undefined1 *)(param_1 + 0x66 + uVar12) = 1;
  plVar9 = (longlong *)FUN_1415914c0(&local_res20);
  plVar11 = (longlong *)0x0;
  if (param_3 != plVar9) {
    lVar10 = *param_3;
    *param_3 = *plVar9;
    *plVar9 = 0;
    if (lVar10 != 0) {
      LOCK();
      piVar1 = (int *)(lVar10 + 0x48);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        FGraphEvent::Recycle();
      }
    }
  }
  if (local_res20 != 0) {
    LOCK();
    piVar1 = (int *)(local_res20 + 0x48);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FGraphEvent::Recycle();
    }
  }
  FUN_1426f1440(param_1);
  plVar9 = (longlong *)FUN_1426e19d0(param_1,uVar12);
  if ((plVar9 == (longlong *)0x0) || (fVar14 <= 0.0)) {
    bVar5 = false;
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x58);
    bVar5 = true;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4,*(undefined4 *)(param_1 + 0x6c + uVar12 * 4),plVar4 + 1);
    }
  }
  cVar7 = FPhysScene::IsSubstepping(param_1,param_2);
  if (cVar7 == '\0') {
    fVar14 = *(float *)(param_1 + 0x6c + uVar12 * 4);
  }
  TBaseMulticastDelegate<void,FPhysScene_*,unsigned_int,float>::Broadcast
            (param_1 + 8,param_1,param_2,fVar14);
  cVar7 = FPhysScene::IsSubstepping(param_1,param_2);
  if (cVar7 == '\0') {
    TBaseMulticastDelegate<void,FPhysScene_*,unsigned_int,float>::Broadcast
              (param_1 + 0x20,param_1,param_2,fVar14);
  }
  else {
    lVar10 = *(longlong *)(param_1 + 0x2f0 + uVar12 * 8);
    piVar1 = (int *)(lVar10 + 0xac);
    LOCK();
    bVar13 = *piVar1 == 0;
    if (bVar13) {
      *piVar1 = 0;
    }
    UNLOCK();
    LOCK();
    *(uint *)(lVar10 + 0xac) = (uint)bVar13;
    UNLOCK();
  }
  FUN_1426e1610(param_1,param_2);
  *(undefined1 *)(uVar12 * 0x58 + 0x100 + param_1) = 1;
  if (bVar5) {
    cVar7 = FPhysScene::IsSubstepping(param_1,param_2);
    if (cVar7 == '\0') {
      lVar10 = operator_new(0x40);
      if (lVar10 != 0) {
        uVar8 = (**(code **)(*plVar9 + 0xd0))(plVar9);
        plVar11 = (longlong *)
                  PhysXCompletionTask::PhysXCompletionTask(lVar10,param_3,param_2,uVar8,0);
      }
      (**(code **)(*plVar9 + 0x40))
                (plVar9,*(undefined4 *)(param_1 + 0x6c + uVar12 * 4),1,plVar11,
                 *(undefined8 *)(param_1 + (uVar12 + 0xd) * 0x10),
                 *(undefined4 *)(param_1 + 0xd8 + uVar12 * 0x10));
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
    else {
      cVar7 = FUN_1426ed710(param_1,param_2,param_3);
      if (cVar7 == '\0') goto LAB_1426f0048;
    }
  }
  else {
LAB_1426f0048:
    local_68[0] = 0;
    local_68[1] = 0;
    FUN_141591a60(*param_3,local_68,0xff);
    if (local_68[0] != 0) {
      FMemory::Free();
    }
  }
  plVar9 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar10 = plVar9[0x1f];
  if (lVar10 == 0) {
    (**(code **)(*plVar9 + 0x368))(plVar9);
    lVar10 = plVar9[0x1f];
  }
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(lVar10 + 0xb8);
  plVar9 = (longlong *)UAudioSettings::GetPrivateStaticClass();
  lVar10 = plVar9[0x1f];
  if (lVar10 == 0) {
    (**(code **)(*plVar9 + 0x368))(plVar9);
    lVar10 = plVar9[0x1f];
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(lVar10 + 0xb9);
LAB_1426f00f3:
  uVar8 = FUN_14168db40();
  FCsvProfiler::EndStat(uVar8,"TotalPhysicsTime",uVar6);
  return;
}



// FUNCTION 1426f01c0 U2PTransform body=74 status=ok
// SIG undefined U2PTransform(void)

undefined4 * U2PTransform(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = *param_2;
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[6] = uVar6;
  param_1[5] = uVar5;
  return param_1;
}



// FUNCTION 1426f0210 FUN_1426f0210 body=10 status=ok
// SIG undefined FUN_1426f0210(void)

void FUN_1426f0210(HMODULE param_1)

{
  if (param_1 == (HMODULE)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001416adc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FreeLibrary(param_1);
  return;
}



// FUNCTION 1426f0240 FUN_1426f0240 body=378 status=ok
// SIG undefined FUN_1426f0240(void)

void FUN_1426f0240(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_38;
  float local_30;
  undefined8 local_28;
  float local_20;
  
  if (*(float *)(param_1 + 0x2e4) == 0.0) {
    fVar1 = *(float *)(param_1 + 0x210);
    fVar2 = *(float *)(param_1 + 0x214);
    fVar3 = *(float *)(param_1 + 0x218);
    fVar4 = *(float *)(param_1 + 0x21c);
    fVar8 = fVar2 * 0.0 - fVar3 * 0.0;
    fVar9 = fVar3 * 1.0 - fVar1 * 0.0;
    fVar10 = fVar1 * 0.0 - fVar2 * 1.0;
    fVar8 = fVar8 + fVar8;
    fVar9 = fVar9 + fVar9;
    fVar10 = fVar10 + fVar10;
    local_30 = *(float *)(param_1 + 0x228) +
               ((fVar9 * fVar1 - fVar8 * fVar2) + fVar4 * fVar10 + 0.0) *
               *(float *)(param_1 + 0x2d8);
    local_38 = CONCAT44(*(float *)(param_1 + 0x224) +
                        ((fVar8 * fVar3 - fVar10 * fVar1) + fVar4 * fVar9 + 0.0) *
                        *(float *)(param_1 + 0x2d8),
                        *(float *)(param_1 + 0x220) +
                        ((fVar10 * fVar2 - fVar9 * fVar3) + fVar4 * fVar8 + 1.0) *
                        *(float *)(param_1 + 0x2d8));
  }
  else {
    local_38 = *(undefined8 *)(param_1 + 0x2e8);
    local_30 = *(float *)(param_1 + 0x2f0);
  }
  plVar5 = *(longlong **)(param_1 + 0x1a0);
  uVar7 = 0;
  uVar6 = (longlong)*(int *)(param_1 + 0x1a8) & 0x1fffffffffffffff;
  if (plVar5 + *(int *)(param_1 + 0x1a8) < plVar5) {
    uVar6 = uVar7;
  }
  if (uVar6 != 0) {
    do {
      if (*plVar5 != 0) {
        local_28 = local_38;
        local_20 = local_30;
        FUN_1423990b0(*plVar5,&local_28,0,0,0);
      }
      plVar5 = plVar5 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar6);
  }
  return;
}



// FUNCTION 1426f03c0 FUN_1426f03c0 body=438 status=ok
// SIG undefined FUN_1426f03c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426f03c0(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_6c8 [32];
  undefined8 local_6a8;
  undefined4 local_6a0;
  undefined8 local_698;
  undefined4 local_690;
  undefined1 local_688 [12];
  float local_67c;
  float local_678;
  undefined4 local_670;
  longlong local_70;
  longlong local_60;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_6c8;
  plVar1 = (longlong *)param_1[0x8b];
  if ((((plVar1[0xa1] == 0) || ((*(uint *)((longlong)plVar1 + 0x4cc) >> 1 & 1) == 0)) ||
      (cVar2 = (**(code **)(*plVar1 + 0x768))(), cVar2 == '\0')) &&
     (((char)*(uint *)(param_1 + 0x588) < '\0' && ((*(uint *)(param_1 + 0x588) >> 8 & 1) == 0)))) {
    return;
  }
  (**(code **)(*param_1 + 0x7b8))(param_1,param_2);
  if ((*(uint *)(param_1 + 0x588) & 0x200) != 0) {
    local_6a8 = 0;
    if (param_1[0x24] != 0) {
      local_6a8 = 0x11a;
    }
    iVar3 = FUN_142235230(param_1);
    if (iVar3 == 3) {
      (**(code **)(*param_1 + 0x720))(param_1,local_688);
      FUN_142436c50(&local_6a8,local_688,param_1);
      local_690 = local_6a0;
      local_698 = local_6a8;
      FUN_1429e2060(param_1[0x8b],&local_698,
                    ((int)ROUND(local_678 * 65536.0 * 0.0055555557 + 0.5) >> 1) << 0x10 |
                    (int)ROUND(local_67c * 65536.0 * 0.0055555557 + 0.5) >> 1 & 0xffffU,local_670);
      *(uint *)(param_1 + 0x588) = *(uint *)(param_1 + 0x588) & 0xfffffdff;
      if (local_60 != 0) {
        FMemory::Free();
      }
      if (local_70 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1426f0580 FUN_1426f0580 body=121 status=ok
// SIG undefined FUN_1426f0580(void)

void FUN_1426f0580(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x2ba8)) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x2ba0));
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x720))
                  (plVar1,param_2 + 0x10,param_2 + 0x1c,*(undefined4 *)(param_2 + 0x28));
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x2ba8));
  }
  return;
}



// FUNCTION 1426f0600 FUN_1426f0600 body=163 status=ok
// SIG undefined FUN_1426f0600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426f0600(longlong *param_1)

{
  byte bVar1;
  undefined1 auStack_688 [32];
  undefined1 local_668 [1560];
  longlong local_50;
  longlong local_40;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_688;
  FUN_1426d3f40(local_668,param_1 + 0x234);
  bVar1 = (**(code **)(*param_1 + 0x7c0))(param_1,local_668);
  *(uint *)(param_1 + 0x588) = *(uint *)(param_1 + 0x588) & 0xfffffbff;
  *(uint *)(param_1 + 0x588) = *(uint *)(param_1 + 0x588) | (bVar1 & 1) << 10;
  FUN_1426e0ae0(param_1,local_668);
  if (local_40 != 0) {
    FMemory::Free();
  }
  if (local_50 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1426f06b0 FUN_1426f06b0 body=97 status=ok
// SIG undefined FUN_1426f06b0(void)

void FUN_1426f06b0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStackX_c;
  
  uVar3 = 0;
  for (iVar2 = 0; (-1 < iVar2 && (iVar2 < *(int *)(param_1 + 0x2f0))); iVar2 = iVar2 + 1) {
    uVar1 = UEngineTypes::ConvertToCollisionChannel
                      (*(undefined1 *)((longlong)iVar2 + *(longlong *)(param_1 + 0x2e8)));
    uVar3 = uVar3 | 1 << (uVar1 & 0x1f);
  }
  *(ulonglong *)(param_1 + 0x2f8) = CONCAT44(uStackX_c,uVar3) & 0xffffff00ffffffff;
  return;
}



// FUNCTION 1426f0720 FUN_1426f0720 body=2450 status=ok
// SIG undefined FUN_1426f0720(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426f0720(longlong param_1)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong *plVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
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
  uint uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  uint uVar45;
  undefined4 local_138;
  undefined4 uStack_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  
  FUN_1426e1ad0(param_1,&local_108,0,*(undefined8 *)(param_1 + 0x338));
  fVar38 = (float)(_DAT_146b08470 & _DAT_146b08480);
  fVar39 = (float)(uRam0000000146b08474 & uRam0000000146b08484);
  fVar40 = (float)(uRam0000000146b08478 & uRam0000000146b08488);
  uVar41 = uRam0000000146b0847c & uRam0000000146b0848c;
  auVar7._0_4_ = local_108 * local_108 + fStack_100 * fStack_100;
  auVar7._4_4_ = fStack_104 * fStack_104 + fStack_fc * fStack_fc;
  auVar7._8_4_ = fStack_100 * fStack_100 + local_108 * local_108;
  auVar7._12_4_ = fStack_fc * fStack_fc + fStack_104 * fStack_104;
  fVar17 = auVar7._4_4_ + auVar7._0_4_;
  fVar18 = auVar7._8_4_ + auVar7._4_4_;
  fVar19 = auVar7._12_4_ + auVar7._8_4_;
  fVar20 = auVar7._0_4_ + auVar7._12_4_;
  auVar8._4_4_ = fVar18;
  auVar8._0_4_ = fVar17;
  auVar8._8_4_ = fVar19;
  auVar8._12_4_ = fVar20;
  auVar8 = rsqrtps(auVar7,auVar8);
  fVar10 = auVar8._0_4_;
  fVar12 = auVar8._4_4_;
  fVar14 = auVar8._8_4_;
  fVar16 = auVar8._12_4_;
  fVar10 = (_DAT_146b084a0 - fVar10 * fVar10 * fVar17 * _DAT_146b084a0) * fVar10 + fVar10;
  fVar12 = (fRam0000000146b084a4 - fVar12 * fVar12 * fVar18 * fRam0000000146b084a4) * fVar12 +
           fVar12;
  fVar14 = (fRam0000000146b084a8 - fVar14 * fVar14 * fVar19 * fRam0000000146b084a8) * fVar14 +
           fVar14;
  fVar16 = (fRam0000000146b084ac - fVar16 * fVar16 * fVar20 * fRam0000000146b084ac) * fVar16 +
           fVar16;
  fVar34 = (float)(((uint)(((_DAT_146b084a0 - fVar10 * fVar10 * fVar17 * _DAT_146b084a0) * fVar10 +
                           fVar10) * local_108) ^ _DAT_146b08490) &
                   -(uint)(_DAT_146b084b0 <= fVar17) ^ _DAT_146b08490);
  fVar35 = (float)(((uint)(((fRam0000000146b084a4 - fVar12 * fVar12 * fVar18 * fRam0000000146b084a4)
                            * fVar12 + fVar12) * fStack_104) ^ uRam0000000146b08494) &
                   -(uint)(fRam0000000146b084b4 <= fVar18) ^ uRam0000000146b08494);
  fVar36 = (float)(((uint)(((fRam0000000146b084a8 - fVar14 * fVar14 * fVar19 * fRam0000000146b084a8)
                            * fVar14 + fVar14) * fStack_100) ^ uRam0000000146b08498) &
                   -(uint)(fRam0000000146b084b8 <= fVar19) ^ uRam0000000146b08498);
  fVar37 = (float)(((uint)(((fRam0000000146b084ac - fVar16 * fVar16 * fVar20 * fRam0000000146b084ac)
                            * fVar16 + fVar16) * fStack_fc) ^ uRam0000000146b0849c) &
                   -(uint)(fRam0000000146b084bc <= fVar20) ^ uRam0000000146b0849c);
  FUN_1426e1ad0(param_1,&local_d8,1,*(undefined8 *)(param_1 + 0x340));
  fVar42 = (float)(_DAT_146b08470 & _DAT_146b08480);
  fVar43 = (float)(uRam0000000146b08474 & uRam0000000146b08484);
  fVar44 = (float)(uRam0000000146b08478 & uRam0000000146b08488);
  uVar45 = uRam0000000146b0847c & uRam0000000146b0848c;
  auVar9._0_4_ = local_d8 * local_d8 + fStack_d0 * fStack_d0;
  auVar9._4_4_ = fStack_d4 * fStack_d4 + fStack_cc * fStack_cc;
  auVar9._8_4_ = fStack_d0 * fStack_d0 + local_d8 * local_d8;
  auVar9._12_4_ = fStack_cc * fStack_cc + fStack_d4 * fStack_d4;
  fVar17 = auVar9._4_4_ + auVar9._0_4_;
  fVar18 = auVar9._8_4_ + auVar9._4_4_;
  fVar19 = auVar9._12_4_ + auVar9._8_4_;
  fVar20 = auVar9._0_4_ + auVar9._12_4_;
  auVar2._4_4_ = fVar18;
  auVar2._0_4_ = fVar17;
  auVar2._8_4_ = fVar19;
  auVar2._12_4_ = fVar20;
  auVar8 = rsqrtps(auVar9,auVar2);
  fVar10 = auVar8._0_4_;
  fVar12 = auVar8._4_4_;
  fVar14 = auVar8._8_4_;
  fVar16 = auVar8._12_4_;
  fVar10 = (_DAT_146b084a0 - fVar10 * fVar10 * fVar17 * _DAT_146b084a0) * fVar10 + fVar10;
  fVar12 = (fRam0000000146b084a4 - fVar12 * fVar12 * fVar18 * fRam0000000146b084a4) * fVar12 +
           fVar12;
  fVar14 = (fRam0000000146b084a8 - fVar14 * fVar14 * fVar19 * fRam0000000146b084a8) * fVar14 +
           fVar14;
  fVar16 = (fRam0000000146b084ac - fVar16 * fVar16 * fVar20 * fRam0000000146b084ac) * fVar16 +
           fVar16;
  fVar10 = (float)(((uint)(((_DAT_146b084a0 - fVar10 * fVar10 * fVar17 * _DAT_146b084a0) * fVar10 +
                           fVar10) * local_d8) ^ _DAT_146b08490) & -(uint)(_DAT_146b084b0 <= fVar17)
                  ^ _DAT_146b08490);
  fVar12 = (float)(((uint)(((fRam0000000146b084a4 - fVar12 * fVar12 * fVar18 * fRam0000000146b084a4)
                            * fVar12 + fVar12) * fStack_d4) ^ uRam0000000146b08494) &
                   -(uint)(fRam0000000146b084b4 <= fVar18) ^ uRam0000000146b08494);
  fVar14 = (float)(((uint)(((fRam0000000146b084a8 - fVar14 * fVar14 * fVar19 * fRam0000000146b084a8)
                            * fVar14 + fVar14) * fStack_d0) ^ uRam0000000146b08498) &
                   -(uint)(fRam0000000146b084b8 <= fVar19) ^ uRam0000000146b08498);
  fVar16 = (float)(((uint)(((fRam0000000146b084ac - fVar16 * fVar16 * fVar20 * fRam0000000146b084ac)
                            * fVar16 + fVar16) * fStack_cc) ^ uRam0000000146b0849c) &
                   -(uint)(fRam0000000146b084bc <= fVar20) ^ uRam0000000146b0849c);
  plVar5 = (longlong *)FUN_1426e1e40(param_1,0);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x6d0))(plVar5,*(undefined8 *)(param_1 + 0x338),1);
  }
  plVar5 = (longlong *)FUN_1426e1e40(param_1,1);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x6d0))(plVar5,*(undefined8 *)(param_1 + 0x340),1);
  }
  fVar17 = *(float *)(param_1 + 0x210);
  fVar18 = *(float *)(param_1 + 0x214);
  fVar19 = *(float *)(param_1 + 0x218);
  fVar20 = *(float *)(param_1 + 0x21c);
  fVar25 = *(float *)(param_1 + 0x220);
  fVar32 = *(float *)(param_1 + 0x224);
  fVar33 = *(float *)(param_1 + 0x228);
  fVar34 = fVar34 * _DAT_146b084e0;
  fVar35 = fVar35 * fRam0000000146b084e4;
  fVar36 = fVar36 * fRam0000000146b084e8;
  fVar37 = fVar37 * fRam0000000146b084ec;
  auVar21._4_4_ = fVar17;
  auVar21._0_4_ = fVar19;
  auVar21._8_4_ = fVar18;
  auVar21._12_4_ = fVar20;
  fVar11 = fVar18 * 0.0 - fVar19 * 0.0;
  fVar13 = fVar19 * 1.0 - fVar17 * 0.0;
  fVar15 = fVar17 * 0.0 - fVar18 * 1.0;
  fVar11 = fVar11 + fVar11;
  fVar13 = fVar13 + fVar13;
  fVar15 = fVar15 + fVar15;
  fVar26 = (fVar15 * fVar18 - fVar13 * fVar19) + fVar20 * fVar11 + 1.0;
  fVar27 = (fVar11 * fVar19 - fVar15 * fVar17) + fVar20 * fVar13 + 0.0;
  fVar28 = (fVar13 * fVar17 - fVar11 * fVar18) + fVar20 * fVar15 + 0.0;
  fVar11 = fVar18 * 0.0 - fVar19 * 1.0;
  fVar13 = fVar19 * 0.0 - fVar17 * 0.0;
  fVar15 = fVar17 * 1.0 - fVar18 * 0.0;
  fVar11 = fVar11 + fVar11;
  fVar13 = fVar13 + fVar13;
  fVar15 = fVar15 + fVar15;
  auVar3._4_4_ = fVar39;
  auVar3._0_4_ = fVar38;
  auVar3._8_4_ = fVar40;
  auVar3._12_4_ = uVar41;
  auVar8 = rcpps(auVar21,auVar3);
  fVar29 = (fVar15 * fVar18 - fVar13 * fVar19) + fVar20 * fVar11 + 0.0;
  fVar30 = (fVar11 * fVar19 - fVar15 * fVar17) + fVar20 * fVar13 + 1.0;
  fVar31 = (fVar13 * fVar17 - fVar11 * fVar18) + fVar20 * fVar15 + 0.0;
  fVar15 = (float)((uint)(fVar25 - local_f8) & _DAT_146b08480);
  fVar23 = (float)((uint)(fVar32 - fStack_f4) & uRam0000000146b08484);
  fVar24 = (float)((uint)(fVar33 - fStack_f0) & uRam0000000146b08488);
  fVar17 = fVar24 * fVar35 - fVar23 * fVar36;
  fVar18 = fVar15 * fVar36 - fVar24 * fVar34;
  fVar19 = fVar23 * fVar34 - fVar15 * fVar35;
  fVar20 = auVar8._0_4_;
  fVar11 = auVar8._4_4_;
  fVar13 = auVar8._8_4_;
  fVar17 = fVar17 + fVar17;
  fVar18 = fVar18 + fVar18;
  fVar19 = fVar19 + fVar19;
  fVar20 = (fVar20 + fVar20) - fVar20 * fVar20 * fVar38;
  fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar39;
  fVar13 = (fVar13 + fVar13) - fVar13 * fVar13 * fVar40;
  fVar20 = (fVar20 + fVar20) - fVar20 * fVar20 * fVar38;
  fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar39;
  fVar13 = (fVar13 + fVar13) - fVar13 * fVar13 * fVar40;
  bVar1 = (float)((uint)fVar40 & uRam0000000146b084d8) <= fRam0000000146b084c8;
  *(ulonglong *)(param_1 + 0x348) =
       CONCAT44(((fVar17 * fVar36 - fVar19 * fVar34) + fVar37 * fVar18 + fVar23) *
                (float)(-(uint)((float)((uint)fVar39 & uRam0000000146b084d4) <= fRam0000000146b084c4
                               ) & (uint)fVar11 ^ (uint)fVar11),
                ((fVar19 * fVar35 - fVar18 * fVar36) + fVar37 * fVar17 + fVar15) *
                (float)(-(uint)((float)((uint)fVar38 & _DAT_146b084d0) <= _DAT_146b084c0) &
                        (uint)fVar20 ^ (uint)fVar20));
  *(float *)(param_1 + 0x350) =
       ((fVar18 * fVar34 - fVar17 * fVar35) + fVar37 * fVar19 + fVar24) *
       (float)(-(uint)bVar1 & (uint)fVar13 ^ (uint)fVar13);
  fVar17 = fVar28 * fVar35 - fVar27 * fVar36;
  fVar18 = fVar26 * fVar36 - fVar28 * fVar34;
  fVar19 = fVar27 * fVar34 - fVar26 * fVar35;
  fVar17 = fVar17 + fVar17;
  fVar18 = fVar18 + fVar18;
  fVar19 = fVar19 + fVar19;
  *(ulonglong *)(param_1 + 0x354) =
       CONCAT44((fVar17 * fVar36 - fVar19 * fVar34) + fVar37 * fVar18 + fVar27,
                (fVar19 * fVar35 - fVar18 * fVar36) + fVar37 * fVar17 + fVar26);
  *(float *)(param_1 + 0x35c) = (fVar18 * fVar34 - fVar17 * fVar35) + fVar37 * fVar19 + fVar28;
  local_138 = 0x3f800000;
  uStack_134 = 0;
  fVar17 = fVar31 * fVar35 - fVar30 * fVar36;
  fVar18 = fVar29 * fVar36 - fVar31 * fVar34;
  fVar19 = fVar30 * fVar34 - fVar29 * fVar35;
  fVar17 = fVar17 + fVar17;
  fVar18 = fVar18 + fVar18;
  fVar19 = fVar19 + fVar19;
  *(ulonglong *)(param_1 + 0x360) =
       CONCAT44((fVar17 * fVar36 - fVar19 * fVar34) + fVar37 * fVar18 + fVar30,
                (fVar19 * fVar35 - fVar18 * fVar36) + fVar37 * fVar17 + fVar29);
  *(float *)(param_1 + 0x368) = (fVar18 * fVar34 - fVar17 * fVar35) + fVar37 * fVar19 + fVar31;
  local_130 = 0.0;
  FRotator::RotateVector(param_1 + 0x390,&local_128,&local_138);
  local_138 = 0;
  uStack_134 = 0x3f800000;
  local_130 = 0.0;
  FRotator::RotateVector(param_1 + 0x390,&local_118,&local_138);
  fVar17 = *(float *)(param_1 + 0x210);
  fVar18 = *(float *)(param_1 + 0x214);
  fVar19 = *(float *)(param_1 + 0x218);
  fVar20 = *(float *)(param_1 + 0x21c);
  fVar34 = local_120 * fVar18 - local_124 * fVar19;
  fVar35 = local_128 * fVar19 - local_120 * fVar17;
  fVar36 = local_124 * fVar17 - local_128 * fVar18;
  fVar34 = fVar34 + fVar34;
  fVar35 = fVar35 + fVar35;
  fVar36 = fVar36 + fVar36;
  fVar37 = (fVar36 * fVar18 - fVar35 * fVar19) + fVar20 * fVar34 + local_128;
  fVar38 = (fVar34 * fVar19 - fVar36 * fVar17) + fVar20 * fVar35 + local_124;
  fVar39 = (fVar35 * fVar17 - fVar34 * fVar18) + fVar20 * fVar36 + local_120;
  fVar17 = *(float *)(param_1 + 0x210);
  fVar18 = *(float *)(param_1 + 0x214);
  fVar19 = *(float *)(param_1 + 0x218);
  fVar20 = *(float *)(param_1 + 0x21c);
  fVar10 = fVar10 * _DAT_146b084e0;
  fVar12 = fVar12 * fRam0000000146b084e4;
  fVar14 = fVar14 * fRam0000000146b084e8;
  fVar16 = fVar16 * fRam0000000146b084ec;
  auVar22._4_4_ = local_114;
  auVar22._0_4_ = local_118;
  auVar22._8_4_ = local_110;
  auVar22._12_4_ = 0;
  fVar11 = (float)((uint)(fVar25 - local_c8) & _DAT_146b08480);
  fVar32 = (float)((uint)(fVar32 - fStack_c4) & uRam0000000146b08484);
  fVar33 = (float)((uint)(fVar33 - fStack_c0) & uRam0000000146b08488);
  fVar34 = local_110 * fVar18 - local_114 * fVar19;
  fVar35 = local_118 * fVar19 - local_110 * fVar17;
  fVar36 = local_114 * fVar17 - local_118 * fVar18;
  fVar34 = fVar34 + fVar34;
  fVar35 = fVar35 + fVar35;
  fVar36 = fVar36 + fVar36;
  auVar4._4_4_ = fVar43;
  auVar4._0_4_ = fVar42;
  auVar4._8_4_ = fVar44;
  auVar4._12_4_ = uVar45;
  auVar8 = rcpps(auVar22,auVar4);
  fVar40 = (fVar36 * fVar18 - fVar35 * fVar19) + fVar20 * fVar34 + local_118;
  fVar25 = (fVar34 * fVar19 - fVar36 * fVar17) + fVar20 * fVar35 + local_114;
  fVar36 = (fVar35 * fVar17 - fVar34 * fVar18) + fVar20 * fVar36 + local_110;
  fVar17 = fVar33 * fVar12 - fVar32 * fVar14;
  fVar18 = fVar11 * fVar14 - fVar33 * fVar10;
  fVar19 = fVar32 * fVar10 - fVar11 * fVar12;
  fVar20 = auVar8._0_4_;
  fVar34 = auVar8._4_4_;
  fVar35 = auVar8._8_4_;
  fVar17 = fVar17 + fVar17;
  fVar18 = fVar18 + fVar18;
  fVar19 = fVar19 + fVar19;
  fVar20 = (fVar20 + fVar20) - fVar20 * fVar20 * fVar42;
  fVar34 = (fVar34 + fVar34) - fVar34 * fVar34 * fVar43;
  fVar35 = (fVar35 + fVar35) - fVar35 * fVar35 * fVar44;
  bVar1 = (float)((uint)fVar44 & uRam0000000146b084d8) <= fRam0000000146b084c8;
  fVar20 = (fVar20 + fVar20) - fVar20 * fVar20 * fVar42;
  fVar34 = (fVar34 + fVar34) - fVar34 * fVar34 * fVar43;
  fVar35 = (fVar35 + fVar35) - fVar35 * fVar35 * fVar44;
  *(ulonglong *)(param_1 + 0x36c) =
       CONCAT44(((fVar17 * fVar14 - fVar19 * fVar10) + fVar16 * fVar18 + fVar32) *
                (float)(-(uint)((float)((uint)fVar43 & uRam0000000146b084d4) <= fRam0000000146b084c4
                               ) & (uint)fVar34 ^ (uint)fVar34),
                ((fVar19 * fVar12 - fVar18 * fVar14) + fVar16 * fVar17 + fVar11) *
                (float)(-(uint)((float)((uint)fVar42 & _DAT_146b084d0) <= _DAT_146b084c0) &
                        (uint)fVar20 ^ (uint)fVar20));
  *(float *)(param_1 + 0x374) =
       ((fVar18 * fVar10 - fVar17 * fVar12) + fVar16 * fVar19 + fVar33) *
       (float)(-(uint)bVar1 & (uint)fVar35 ^ (uint)fVar35);
  fVar17 = fVar39 * fVar12 - fVar38 * fVar14;
  fVar18 = fVar37 * fVar14 - fVar39 * fVar10;
  fVar19 = fVar38 * fVar10 - fVar37 * fVar12;
  fVar17 = fVar17 + fVar17;
  fVar18 = fVar18 + fVar18;
  fVar19 = fVar19 + fVar19;
  *(ulonglong *)(param_1 + 0x378) =
       CONCAT44((fVar17 * fVar14 - fVar19 * fVar10) + fVar16 * fVar18 + fVar38,
                (fVar19 * fVar12 - fVar18 * fVar14) + fVar16 * fVar17 + fVar37);
  *(float *)(param_1 + 0x380) = (fVar18 * fVar10 - fVar17 * fVar12) + fVar16 * fVar19 + fVar39;
  fVar17 = fVar36 * fVar12 - fVar25 * fVar14;
  fVar18 = fVar40 * fVar14 - fVar36 * fVar10;
  fVar19 = fVar25 * fVar10 - fVar40 * fVar12;
  fVar17 = fVar17 + fVar17;
  fVar18 = fVar18 + fVar18;
  fVar19 = fVar19 + fVar19;
  local_130 = (fVar18 * fVar10 - fVar17 * fVar12) + fVar16 * fVar19 + fVar36;
  *(ulonglong *)(param_1 + 900) =
       CONCAT44((fVar17 * fVar14 - fVar19 * fVar10) + fVar16 * fVar18 + fVar25,
                (fVar19 * fVar12 - fVar18 * fVar14) + fVar16 * fVar17 + fVar40);
  *(float *)(param_1 + 0x38c) = local_130;
  fVar10 = ABS(*(float *)(param_1 + 0x234));
  if (ABS(*(float *)(param_1 + 0x230)) <= ABS(*(float *)(param_1 + 0x234))) {
    fVar10 = ABS(*(float *)(param_1 + 0x230));
  }
  if (ABS(*(float *)(param_1 + 0x238)) <= fVar10) {
    fVar10 = ABS(*(float *)(param_1 + 0x238));
  }
  if (fVar10 <= 0.01) {
    fVar10 = 0.01;
  }
  plVar5 = (longlong *)FUN_1426e1e40(param_1,0);
  if (plVar5 != (longlong *)0x0) {
    lVar6 = (**(code **)(*plVar5 + 0x6d0))(plVar5,*(undefined8 *)(param_1 + 0x338),1);
    if (lVar6 != 0) {
      fVar12 = 1.0 / fVar10;
      *(float *)(param_1 + 0x348) = fVar12 * *(float *)(param_1 + 0x348);
      *(float *)(param_1 + 0x34c) = fVar12 * *(float *)(param_1 + 0x34c);
      *(float *)(param_1 + 0x350) = fVar12 * *(float *)(param_1 + 0x350);
    }
  }
  plVar5 = (longlong *)FUN_1426e1e40(param_1,1);
  if (plVar5 != (longlong *)0x0) {
    lVar6 = (**(code **)(*plVar5 + 0x6d0))(plVar5,*(undefined8 *)(param_1 + 0x340),1);
    if (lVar6 != 0) {
      fVar10 = 1.0 / fVar10;
      *(float *)(param_1 + 0x36c) = fVar10 * *(float *)(param_1 + 0x36c);
      *(float *)(param_1 + 0x370) = fVar10 * *(float *)(param_1 + 0x370);
      *(float *)(param_1 + 0x374) = fVar10 * *(float *)(param_1 + 0x374);
    }
  }
  return;
}



// FUNCTION 1426f10c0 FUN_1426f10c0 body=328 status=ok
// SIG undefined FUN_1426f10c0(void)

void FUN_1426f10c0(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  plVar1 = *(longlong **)(param_1 + 0x208);
  if (plVar1 != (longlong *)0x0) {
    bVar2 = (byte)*(uint *)(param_1 + 0x18c);
    if ((*(uint *)(param_1 + 0x18c) & 4) != 0) {
      local_18 = *(undefined4 *)(param_1 + 0x194);
      local_14 = *(undefined4 *)(param_1 + 400);
      local_10 = 0x7f7fffff;
      local_c = 1;
      (**(code **)(*plVar1 + 0x140))(plVar1,0,&local_18);
      local_18 = *(undefined4 *)(param_1 + 0x194);
      local_14 = *(undefined4 *)(param_1 + 400);
      local_10 = 0x7f7fffff;
      local_c = 1;
      (**(code **)(**(longlong **)(param_1 + 0x208) + 0x140))
                (*(longlong **)(param_1 + 0x208),1,&local_18);
      local_18 = *(undefined4 *)(param_1 + 0x194);
      local_14 = *(undefined4 *)(param_1 + 400);
      local_10 = 0x7f7fffff;
      local_c = 1;
      (**(code **)(**(longlong **)(param_1 + 0x208) + 0x140))
                (*(longlong **)(param_1 + 0x208),2,&local_18);
      bVar2 = (byte)*(undefined4 *)(param_1 + 0x18c);
    }
    if ((bVar2 & 3) == 3) {
      local_18 = *(undefined4 *)(param_1 + 0x19c);
      local_14 = *(undefined4 *)(param_1 + 0x198);
      local_10 = 0x7f7fffff;
      local_c = 1;
      (**(code **)(**(longlong **)(param_1 + 0x208) + 0x140))
                (*(longlong **)(param_1 + 0x208),5,&local_18);
    }
  }
  return;
}



// FUNCTION 1426f1210 FUN_1426f1210 body=553 status=ok
// SIG undefined FUN_1426f1210(void)

void FUN_1426f1210(longlong param_1,float *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  
  plVar1 = *(longlong **)(param_1 + 0x210);
  if (plVar1 != (longlong *)0x0) {
    plVar2 = (longlong *)FUN_1426e2550(*(undefined4 *)(param_1 + 0x188));
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x358))
                (plVar2,
                 "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysicsHandleComponent.cpp"
                 ,0x120);
    }
    fVar9 = param_2[4];
    fVar10 = param_2[5];
    fVar11 = param_2[6];
    lVar3 = (**(code **)(*plVar1 + 0xa0))(plVar1,&local_98);
    fVar7 = fVar9 - *(float *)(lVar3 + 0x10);
    fVar5 = fVar10 - *(float *)(lVar3 + 0x14);
    fVar6 = fVar11 - *(float *)(lVar3 + 0x18);
    fVar5 = fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6;
    if (fVar5 <= 0.0001) {
      fVar9 = *(float *)(lVar3 + 0x10);
      fVar10 = *(float *)(lVar3 + 0x14);
      fVar11 = *(float *)(lVar3 + 0x18);
    }
    fVar7 = *param_2;
    fVar12 = param_2[1];
    fVar13 = param_2[2];
    fVar6 = param_2[3];
    pfVar4 = (float *)(**(code **)(*plVar1 + 0xa0))(plVar1,&local_98);
    fVar8 = ABS(pfVar4[1] * fVar12 + *pfVar4 * fVar7 + pfVar4[2] * fVar13 + pfVar4[3] * fVar6);
    if (1.0 < fVar8) {
      fVar6 = pfVar4[3];
      fVar7 = *pfVar4;
      fVar12 = pfVar4[1];
      fVar13 = pfVar4[2];
    }
    if ((0.0001 < fVar5) || (fVar8 <= 1.0)) {
      local_98 = fVar7;
      local_94 = fVar12;
      local_90 = fVar13;
      local_8c = fVar6;
      local_88 = fVar9;
      local_84 = fVar10;
      local_80 = fVar11;
      (**(code **)(*plVar1 + 0x1b0))(plVar1,&local_98);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x360))(plVar2);
    }
  }
  return;
}



// FUNCTION 1426f1440 FUN_1426f1440 body=475 status=ok
// SIG undefined FUN_1426f1440(void)

void FUN_1426f1440(longlong param_1)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
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
  
  plVar1 = (longlong *)(param_1 + 0x458);
  iVar3 = *(int *)(param_1 + 0x480);
  puStack_28 = (uint *)(param_1 + 0x468);
  local_78 = 0;
  uStack_74 = 1;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar3 != 0) {
    puVar8 = *(uint **)(param_1 + 0x478);
    if (*(uint **)(param_1 + 0x478) == (uint *)0x0) {
      puVar8 = puStack_28;
    }
    uVar4 = *puVar8;
    uStack_60 = 0;
    local_78 = 0;
    while (uVar4 == 0) {
      lVar7 = (longlong)local_78;
      uStack_60 = uStack_60 + 0x20;
      iVar6 = local_78 + 1;
      bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar6;
      if (bVar5) goto LAB_1426f14ff;
      uVar4 = puVar8[lVar7 + 1];
    }
    uStack_74 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_68._4_4_ = (uStack_60 - iVar6) + 0x1f;
    if (iVar3 < local_68._4_4_) {
LAB_1426f14ff:
      local_68._4_4_ = iVar3;
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
  bVar5 = local_68._4_4_ < *(int *)(param_1 + 0x480);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar5) {
    do {
      uVar2 = *(ushort *)(*plVar1 + 8 + (longlong)iStack_5c * 0x18);
      lVar7 = *(longlong *)(*plVar1 + (longlong)iStack_5c * 0x18);
      FUN_1426ce440(lVar7,(longlong)*(int *)(lVar7 + 0x770) * 0x10 + 0x728 + lVar7,(char)uVar2,
                    uVar2 >> 8,1);
      *(byte *)(lVar7 + 0xb1a) = *(byte *)(lVar7 + 0xb1a) & 0xfb;
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
  ::Reset(plVar1);
  return;
}



// FUNCTION 1426f1620 UpdatePhotographyCamera body=45 status=ok
// SIG undefined UpdatePhotographyCamera(void)

void APlayerCameraManager::UpdatePhotographyCamera(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1422efe50();
  FUN_1422fb770(uVar1,param_2,param_1);
  return;
}



// FUNCTION 1426f1650 FUN_1426f1650 body=30 status=ok
// SIG undefined FUN_1426f1650(void)

void FUN_1426f1650(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1422efe50();
  FPooledTexture2D::~FPooledTexture2D(uVar1,param_2);
  return;
}



// FUNCTION 1426f1670 FUN_1426f1670 body=510 status=ok
// SIG undefined FUN_1426f1670(void)

void FUN_1426f1670(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  longlong local_40;
  
  iVar5 = *DAT_146b08878;
  if (iVar5 == -1) {
    plVar2 = (longlong *)UAudioSettings::GetPrivateStaticClass();
    lVar3 = plVar2[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar3 = plVar2[0x1f];
    }
    iVar5 = *(int *)(lVar3 + 300);
  }
  if (iVar5 == 1) {
    uVar6 = 0;
    if (*(int *)(param_1 + 4) == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = (longlong *)FUN_1426e2550((int)*(short *)(param_1 + 0x60));
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x358))
                  (plVar2,
                   "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysScene.cpp"
                   ,0xcde);
      }
    }
    uVar1 = (**(code **)(*plVar2 + 800))(plVar2);
    uVar8 = uVar6;
    if (uVar1 != 0) {
      do {
        (**(code **)(*plVar2 + 0x338))(plVar2,uVar8);
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
      } while (uVar7 < uVar1);
    }
    uVar8 = uVar6;
    if (0 < (int)param_2[0x8c]) {
      do {
        local_40 = *(longlong *)(uVar8 + param_2[0x8b]);
        local_58 = *(float *)(local_40 + 0x1d0) - *(float *)(local_40 + 0x1dc);
        local_54 = *(float *)(local_40 + 0x1d4) - *(float *)(local_40 + 0x1e0);
        local_50 = *(float *)(local_40 + 0x1d8) - *(float *)(local_40 + 0x1e4);
        local_4c = *(float *)(local_40 + 0x1d0) + *(float *)(local_40 + 0x1dc);
        local_48 = *(float *)(local_40 + 0x1d4) + *(float *)(local_40 + 0x1e0);
        local_44 = *(float *)(local_40 + 0x1d8) + *(float *)(local_40 + 0x1e4);
        (**(code **)(*plVar2 + 0x330))(plVar2,&local_58,0);
        uVar1 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar1;
        uVar8 = uVar8 + 8;
      } while ((int)uVar1 < (int)param_2[0x8c]);
    }
    (**(code **)(*plVar2 + 0x360))(plVar2);
    uVar4 = (**(code **)(*param_2 + 0x148))(param_2);
    FUN_1426ea430(plVar2,uVar4);
  }
  return;
}



// FUNCTION 1426f1870 FUN_1426f1870 body=142 status=ok
// SIG undefined FUN_1426f1870(void)

void FUN_1426f1870(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong local_res10 [3];
  
  iVar4 = *DAT_146b08878;
  if (iVar4 == -1) {
    plVar1 = (longlong *)UAudioSettings::GetPrivateStaticClass();
    lVar2 = plVar1[0x1f];
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar2 = plVar1[0x1f];
    }
    iVar4 = *(int *)(lVar2 + 300);
  }
  if (iVar4 == 1) {
    local_res10[0] = param_1;
    if (*(int *)(param_1 + 4) != 0) {
      uVar3 = FUN_1426e2550((int)*(short *)(param_1 + 0x60));
      FUN_1426d6080(local_res10,uVar3);
      return;
    }
    FUN_1426d6080(local_res10,0);
  }
  return;
}



// FUNCTION 1426f1900 FUN_1426f1900 body=2291 status=ok
// SIG undefined FUN_1426f1900(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426f1900(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  bool bVar20;
  char cVar21;
  int iVar22;
  undefined8 uVar23;
  longlong lVar24;
  undefined8 *puVar25;
  longlong *plVar26;
  float *pfVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auStack_e48 [32];
  longlong *local_e28;
  uint local_e20;
  undefined8 *local_e18;
  undefined1 *local_e10;
  undefined *local_e08;
  undefined8 local_df8;
  undefined4 uStack_df0;
  undefined4 uStack_dec;
  undefined8 local_de8;
  float local_de0;
  undefined1 local_dd8 [8];
  undefined8 local_dd0;
  float local_dc8;
  undefined8 local_dc0;
  undefined4 local_db8;
  float local_da8;
  float fStack_da4;
  float fStack_da0;
  float fStack_d9c;
  undefined1 local_d98 [64];
  undefined1 local_d58 [72];
  longlong local_d10;
  longlong local_cf0;
  byte local_cd8 [12];
  undefined4 local_ccc;
  longlong local_cc4 [184];
  longlong local_700;
  longlong local_6f0;
  undefined1 local_6d8 [1560];
  longlong local_c0;
  longlong local_b0;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_e48;
  if ((param_1[0x300] != 0) && ((*(byte *)(param_1 + 0x3d0) & 1) != 0)) {
    if ((*param_2 == param_1[0x232]) &&
       ((param_2[0xcc] == param_1[0x2fe] &&
        (cVar21 = FUN_14230ce60(param_2 + 2,param_1 + 0x234), cVar21 != '\0')))) {
      bVar20 = true;
    }
    else {
      bVar20 = false;
    }
    if (bVar20) {
      return;
    }
  }
  FUN_1426d3f40(local_6d8,param_2 + 2);
  *(int *)(param_2 + 5) = (int)param_1[0x8e];
  *(int *)((longlong)param_2 + 0x2c) = (int)param_1[0x58c];
  *(int *)((longlong)param_2 + 0x34) = (int)param_1[0x8f];
  *(int *)(param_2 + 8) = (int)param_1[0x90];
  *(uint *)((longlong)param_2 + 0x44) =
       (*(uint *)(param_1 + 0x588) & 2 | 4) >> 1 | *(uint *)((longlong)param_2 + 0x44) & 0xfffffffe;
  *(byte *)(param_2 + 9) = (byte)(int)param_1[0x588] & 1;
  uVar23 = FUN_142741540(local_cd8);
  FUN_140e6c260(param_2 + 10,uVar23);
  if (local_6f0 != 0) {
    FMemory::Free();
  }
  if (local_700 != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_2 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x50c) = 0;
  *(undefined4 *)(param_2 + 0xa4) = 0;
  lVar5 = *param_2;
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0x3f800000;
  if (lVar5 == 0) {
LAB_1426f1aba:
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar5 + 0x38) < DAT_146b08af8) &&
       (_Init_thread_header(&DAT_146b08af8), DAT_146b08af8 == -1)) {
      FName::FName(&DAT_146b08af0,L"Fixed",1);
      _Init_thread_footer(&DAT_146b08af8);
    }
    if ((*(int *)(lVar5 + 0x38) < DAT_146b08b08) &&
       (_Init_thread_header(&DAT_146b08b08), DAT_146b08b08 == -1)) {
      FName::FName(&DAT_146b08b00,L"ThirdPerson",1);
      _Init_thread_footer(&DAT_146b08b08);
    }
    if ((*(int *)(lVar5 + 0x38) < DAT_146b08b18) &&
       (_Init_thread_header(&DAT_146b08b18), DAT_146b08b18 == -1)) {
      FName::FName(&DAT_146b08b10,L"FreeCam",1);
      _Init_thread_footer(&DAT_146b08b18);
    }
    if ((*(int *)(lVar5 + 0x38) < DAT_146b08b28) &&
       (_Init_thread_header(&DAT_146b08b28), DAT_146b08b28 == -1)) {
      FName::FName(&DAT_146b08b20,L"FreeCam_Default",1);
      _Init_thread_footer(&DAT_146b08b28);
    }
    if ((*(int *)(lVar5 + 0x38) < DAT_146b08b38) &&
       (_Init_thread_header(&DAT_146b08b38), DAT_146b08b38 == -1)) {
      FName::FName(&DAT_146b08b30,L"FirstPerson",1);
      _Init_thread_footer(&DAT_146b08b38);
    }
    lVar24 = param_1[0x8d];
    if ((lVar24 == DAT_146b08af0) && (*(char *)((longlong)param_1 + 0x2c5c) == '\0')) {
      FUN_1426d5e10(param_2 + 2,local_6d8);
    }
    else if (((lVar24 == DAT_146b08b00) && (*(char *)((longlong)param_1 + 0x2c5c) == '\0')) ||
            ((lVar24 == DAT_146b08b10 || (lVar24 == DAT_146b08b20)))) {
      plVar26 = (longlong *)*param_2;
      lVar24 = plVar26[0x2d];
      if (lVar24 == 0) {
        local_de8 = _DAT_1468b5d90;
        local_de0 = DAT_1468b5d98;
      }
      else {
        local_de8 = *(longlong *)(lVar24 + 0x220);
        local_de0 = *(float *)(lVar24 + 0x228);
      }
      local_dd0 = local_de8;
      local_dc8 = local_de0;
      lVar24 = plVar26[0x2d];
      if (lVar24 == 0) {
        uVar28 = (undefined4)DAT_1468b5da0;
        uVar29 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        uStack_df0 = DAT_1468b5da8;
      }
      else {
        local_da8 = *(float *)(lVar24 + 0x210);
        fStack_da4 = *(float *)(lVar24 + 0x214);
        fStack_da0 = *(float *)(lVar24 + 0x218);
        fStack_d9c = *(float *)(lVar24 + 0x21c);
        auVar7._4_4_ = -(uint)(fStack_da4 != *(float *)(lVar24 + 0x254));
        auVar7._0_4_ = -(uint)(local_da8 != *(float *)(lVar24 + 0x250));
        auVar7._8_4_ = -(uint)(fStack_da0 != *(float *)(lVar24 + 600));
        auVar7._12_4_ = -(uint)(fStack_d9c != *(float *)(lVar24 + 0x25c));
        iVar22 = movmskps(local_de0,auVar7);
        if (iVar22 != 0) {
          *(float *)(lVar24 + 0x250) = local_da8;
          *(float *)(lVar24 + 0x254) = fStack_da4;
          *(float *)(lVar24 + 600) = fStack_da0;
          *(float *)(lVar24 + 0x25c) = fStack_d9c;
          puVar25 = (undefined8 *)FQuat::Rotator(&local_da8,&local_df8);
          *(undefined8 *)(lVar24 + 0x260) = *puVar25;
          *(undefined4 *)(lVar24 + 0x268) = *(undefined4 *)(puVar25 + 1);
          plVar26 = (longlong *)*param_2;
        }
        uVar28 = (undefined4)*(undefined8 *)(lVar24 + 0x260);
        uVar29 = (undefined4)((ulonglong)*(undefined8 *)(lVar24 + 0x260) >> 0x20);
        uStack_df0 = *(undefined4 *)(lVar24 + 0x268);
      }
      plVar6 = (longlong *)param_1[0x8b];
      local_df8 = CONCAT44(uVar29,uVar28);
      local_dc0 = local_df8;
      local_db8 = uStack_df0;
      if (plVar26 == plVar6) {
        plVar26 = (longlong *)(**(code **)(*plVar6 + 0xe40))(plVar6,&local_df8);
        local_dd0 = *plVar26;
        local_dc8 = *(float *)(plVar26 + 1);
      }
      if ((param_1[0x8d] == DAT_146b08b10) || (param_1[0x8d] == DAT_146b08b20)) {
        puVar25 = (undefined8 *)
                  (**(code **)(*(longlong *)param_1[0x8b] + 0x720))
                            ((longlong *)param_1[0x8b],&local_df8);
        local_dc0 = *puVar25;
        local_db8 = *(undefined4 *)(puVar25 + 1);
      }
      pfVar27 = (float *)FRotationMatrix::FRotationMatrix(local_d98,&local_dc0);
      fVar1 = *(float *)((longlong)param_1 + 0x2b74);
      fVar2 = *(float *)(param_1 + 0x56f);
      fVar3 = *(float *)((longlong)param_1 + 0x2b7c);
      local_df8 = *(undefined8 *)((longlong)param_1 + 0x2b74);
      uStack_df0 = *(undefined4 *)((longlong)param_1 + 0x2b7c);
      fVar4 = *(float *)(param_1 + 0x56e);
      uStack_dec = 0;
      fVar8 = pfVar27[4];
      fVar9 = pfVar27[5];
      fVar10 = pfVar27[6];
      fVar11 = *pfVar27;
      fVar12 = pfVar27[1];
      fVar13 = pfVar27[2];
      fVar14 = pfVar27[0xc];
      fVar15 = pfVar27[0xd];
      fVar16 = pfVar27[0xe];
      fVar17 = pfVar27[8];
      fVar18 = pfVar27[9];
      fVar19 = pfVar27[10];
      pfVar27 = (float *)FRotator::Vector(&local_dc0,&local_df8);
      local_de0 = (fVar3 * fVar19 + fVar16 * 0.0 + fVar1 * fVar13 + fVar2 * fVar10 +
                  local_dc8 + *(float *)(param_1 + 0x571)) - fVar4 * pfVar27[2];
      local_de8 = CONCAT44((fVar3 * fVar18 + fVar15 * 0.0 + fVar1 * fVar12 + fVar2 * fVar9 +
                           local_dd0._4_4_ + *(float *)((longlong)param_1 + 0x2b84)) -
                           fVar4 * pfVar27[1],
                           ((float)local_dd0 + *(float *)(param_1 + 0x570) +
                           fVar3 * fVar17 + fVar14 * 0.0 + fVar1 * fVar11 + fVar2 * fVar8) -
                           fVar4 * *pfVar27);
      if ((*(int *)(lVar5 + 0x38) < DAT_146b08b48) &&
         (_Init_thread_header(&DAT_146b08b48), DAT_146b08b48 == -1)) {
        FName::FName(&DAT_146b08b40,"FreeCam",1);
        _Init_thread_footer(&DAT_146b08b48);
      }
      local_e28 = param_1;
      FUN_1422ffb20(local_d58,DAT_146b08b40,local_dd8,0);
      FCollisionQueryParams::AddIgnoredActor(local_d58);
      _guard_xfg_dispatch_icall_nop(local_cd8,0,0x90);
      local_ccc = 0x3f800000;
      local_df8 = 0x4140000000000001;
      uStack_df0 = 0x41400000;
      uStack_dec = 0x41400000;
      uVar23 = (**(code **)(*param_1 + 0x148))(param_1);
      local_e08 = &DAT_146aefe68;
      local_e10 = local_d58;
      local_e18 = &local_df8;
      local_e20 = 4;
      local_e28 = (longlong *)&DAT_1464aa810;
      UWorld::SweepSingleByChannel(uVar23,local_cd8,&local_dd0,&local_de8);
      plVar26 = &local_de8;
      if ((local_cd8[0] & 1) != 0) {
        plVar26 = local_cc4;
      }
      lVar5 = plVar26[1];
      param_2[2] = *plVar26;
      *(int *)(param_2 + 3) = (int)lVar5;
      *(undefined8 *)((longlong)param_2 + 0x1c) = local_dc0;
      *(undefined4 *)((longlong)param_2 + 0x24) = local_db8;
      if (local_cf0 != 0) {
        FMemory::Free();
      }
      if (local_d10 != 0) {
        FMemory::Free();
      }
    }
    else {
      if ((lVar24 != DAT_146b08b30) || (*(char *)((longlong)param_1 + 0x2c5c) != '\0')) {
        (**(code **)(*param_1 + 0x8a0))(param_1,param_2,param_3);
        goto LAB_1426f1f8e;
      }
      (**(code **)(*(longlong *)*param_2 + 0x610))
                ((longlong *)*param_2,param_2 + 2,(longlong)param_2 + 0x1c);
    }
    if ((*(uint *)(param_1 + 0x588) & 0x4000) == 0) goto LAB_1426f1fa2;
  }
  else {
    lVar24 = FUN_14290f280();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar24 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar24 + 0x90) * 8)
        != lVar24 + 0x88)) {
      bVar20 = false;
    }
    else {
      bVar20 = true;
    }
    if (!bVar20) goto LAB_1426f1aba;
    (**(code **)(**(longlong **)(lVar5 + 0x460) + 0x548))
              (*(longlong **)(lVar5 + 0x460),param_3,param_2 + 2);
  }
LAB_1426f1f8e:
  (**(code **)(*param_1 + 0x768))(param_1,param_3,param_2 + 2);
LAB_1426f1fa2:
  local_df8 = *(undefined8 *)((longlong)param_2 + 0x1c);
  uStack_df0 = *(undefined4 *)((longlong)param_2 + 0x24);
  local_de8 = param_2[2];
  local_de0 = (float)param_2[3];
  local_e20 = local_e20 & 0xffffff00;
  local_e28 = (longlong *)0x0;
  FUN_14223ca30(param_1,&local_de8,&local_df8,0);
  (**(code **)(*param_1 + 0x7f0))(param_1,param_2);
  if (local_b0 != 0) {
    FMemory::Free();
  }
  if (local_c0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1426f2200 UpdateViewTargetInternal body=157 status=ok
// SIG undefined UpdateViewTargetInternal(void)

void APlayerCameraManager::UpdateViewTargetInternal
               (undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 local_res10 [6];
  longlong local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  if (*param_2 != 0) {
    cVar1 = FUN_1429e0730(param_1,*param_2,&local_38,&local_28,local_res10);
    if (cVar1 != '\0') {
      param_2[2] = local_38;
      *(undefined8 *)((longlong)param_2 + 0x1c) = local_28;
      *(undefined4 *)(param_2 + 3) = local_30;
      *(undefined4 *)(param_2 + 5) = local_res10[0];
      *(undefined4 *)((longlong)param_2 + 0x24) = local_20;
      return;
    }
    (**(code **)(*(longlong *)*param_2 + 0x5c8))((longlong *)*param_2,param_3,param_2 + 2);
  }
  return;
}



// FUNCTION 1426f22a0 WaitPhysScenes body=476 status=ok
// SIG undefined WaitPhysScenes(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FPhysScene::WaitPhysScenes(longlong param_1)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar9;
  undefined1 auStack_78 [40];
  longlong local_50 [4];
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  ulonglong uVar8;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar8 = 0;
  local_30 = (longlong *)0x0;
  local_28 = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    local_28 = 1;
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_50,0)
    ;
    lVar6 = *(longlong *)(param_1 + 200);
    plVar5 = local_50;
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    *plVar5 = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + 1;
      UNLOCK();
    }
  }
  if (*(int *)(param_1 + 4) != 0) {
    do {
      uVar3 = local_28;
      lVar6 = *(longlong *)(param_1 + 0x98 + uVar8 * 8);
      if (lVar6 != 0) {
        lVar9 = (longlong)(int)local_28;
        iVar4 = (int)local_28 + 1;
        local_28 = CONCAT44(local_28._4_4_,iVar4);
        if (local_28._4_4_ < iVar4) {
          TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                    (local_50,uVar3 & 0xffffffff);
          lVar6 = *(longlong *)(param_1 + 0x98 + uVar8 * 8);
        }
        plVar5 = local_50;
        if (local_30 != (longlong *)0x0) {
          plVar5 = local_30;
        }
        plVar5[lVar9] = lVar6;
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + 1;
          UNLOCK();
        }
      }
      uVar3 = local_28;
      lVar6 = *(longlong *)(param_1 + 0xb0 + uVar8 * 8);
      if (lVar6 != 0) {
        lVar9 = (longlong)(int)local_28;
        iVar4 = (int)local_28 + 1;
        local_28 = CONCAT44(local_28._4_4_,iVar4);
        if (local_28._4_4_ < iVar4) {
          TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                    (local_50,uVar3 & 0xffffffff);
          lVar6 = *(longlong *)(param_1 + 0xb0 + uVar8 * 8);
        }
        plVar5 = local_50;
        if (local_30 != (longlong *)0x0) {
          plVar5 = local_30;
        }
        plVar5[lVar9] = lVar6;
        if (lVar6 != 0) {
          LOCK();
          *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + 1;
          UNLOCK();
        }
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < *(uint *)(param_1 + 4));
  }
  if ((int)local_28 != 0) {
    plVar5 = (longlong *)FTaskGraphInterface::Get();
    (**(code **)(*plVar5 + 0x48))(plVar5,local_50,2);
  }
  plVar5 = local_50;
  iVar4 = (int)local_28;
  if (local_30 != (longlong *)0x0) {
    plVar5 = local_30;
  }
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar5 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
    plVar5 = plVar5 + 1;
  }
  if (local_30 != (longlong *)0x0) {
    FMemory::Free(local_30);
  }
  return;
}



// FUNCTION 1426f24b0 extractContacts body=532 status=ok
// SIG undefined extractContacts(void)

ulonglong physx::PxContactPair::extractContacts(longlong param_1,longlong param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  float *pfVar8;
  longlong lVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong local_78;
  undefined4 *local_70;
  undefined4 *local_68;
  
  uVar13 = 0;
  if ((*(byte *)(param_1 + 0x2c) != 0) && (param_3 != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    bVar10 = 0;
    bVar1 = *(byte *)(param_1 + 0x2d);
    uVar14 = 0;
    if (lVar4 != 0) {
      bVar2 = *(byte *)(lVar4 + 0x2b);
      local_70 = *(undefined4 **)(param_1 + 0x18);
      bVar10 = bVar2 & 1;
      local_68 = (undefined4 *)
                 (*(longlong *)(param_1 + 0x20) + (ulonglong)*(byte *)(param_1 + 0x2c) * 4);
      local_78 = lVar4;
      if ((char)bVar2 < '\0') {
        uVar14 = 0x20;
      }
      else {
        uVar14 = 0x10;
        if ((bVar2 & 2) != 0) {
          uVar14 = 0x40;
        }
      }
    }
    lVar4 = *(longlong *)(param_1 + 0x20);
    uVar15 = 0;
    uVar3 = *(ushort *)(param_1 + 0x30);
    bVar5 = false;
    uVar11 = 0;
    if (bVar1 != 0) {
      do {
        if (uVar15 != 0) {
          if (uVar11 < *(byte *)(local_78 + 0x29)) {
            local_70 = (undefined4 *)
                       ((longlong)local_70 +
                       (ulonglong)((*(byte *)(local_78 + 0x29) - uVar11) * uVar14));
          }
          local_78 = local_78 + 0x30;
        }
        uVar15 = uVar15 + 1;
        uVar11 = 0;
        bVar6 = bVar5;
        if (*(char *)(local_78 + 0x29) != '\0') {
          do {
            if (bVar5) {
              local_70 = (undefined4 *)((longlong)local_70 + (ulonglong)uVar14);
              local_68 = local_68 + 1;
            }
            lVar9 = uVar13 * 0x30;
            uVar11 = uVar11 + 1;
            bVar5 = true;
            *(undefined4 *)(lVar9 + param_2) = *local_70;
            *(undefined4 *)(lVar9 + 4 + param_2) = local_70[1];
            *(undefined4 *)(lVar9 + 8 + param_2) = local_70[2];
            *(undefined4 *)(lVar9 + 0xc + param_2) = local_70[3];
            *(undefined4 *)(lVar9 + 0x10 + param_2) = *(undefined4 *)(local_78 + 0x10);
            *(undefined4 *)(lVar9 + 0x14 + param_2) = *(undefined4 *)(local_78 + 0x14);
            *(undefined4 *)(lVar9 + 0x18 + param_2) = *(undefined4 *)(local_78 + 0x18);
            if ((uVar3 & 0x20) == 0) {
              *(undefined4 *)(lVar9 + 0x1c + param_2) = 0xffffffff;
              if (bVar10 == 0) goto LAB_1426f2631;
              uVar7 = *local_68;
            }
            else {
              if (bVar10 == 0) {
                uVar7 = 0xffffffff;
              }
              else {
                uVar7 = *local_68;
              }
              *(undefined4 *)(lVar9 + 0x1c + param_2) = uVar7;
LAB_1426f2631:
              uVar7 = 0xffffffff;
            }
            *(undefined4 *)(lVar9 + 0x2c + param_2) = uVar7;
            if ((uVar3 & 0x10) == 0) {
              fVar17 = 0.0;
              fVar18 = 0.0;
              fVar16 = 0.0;
            }
            else {
              fVar16 = *(float *)(lVar4 + uVar13 * 4);
              fVar17 = fVar16 * *(float *)(lVar9 + 0x18 + param_2);
              fVar18 = fVar16 * *(float *)(lVar9 + 0x14 + param_2);
              fVar16 = fVar16 * *(float *)(lVar9 + 0x10 + param_2);
            }
            uVar12 = (int)uVar13 + 1;
            uVar13 = (ulonglong)uVar12;
            pfVar8 = (float *)(param_2 + 0x20 + lVar9);
            *pfVar8 = fVar16;
            pfVar8[1] = fVar18;
            pfVar8[2] = fVar17;
            if (uVar12 == param_3) {
              return uVar13;
            }
            bVar6 = true;
          } while (uVar11 < *(byte *)(local_78 + 0x29));
        }
        bVar5 = bVar6;
      } while (uVar15 < bVar1);
    }
  }
  return uVar13;
}



// FUNCTION 1426f26e0 FUN_1426f26e0 body=23 status=ok
// SIG undefined FUN_1426f26e0(void)

void FUN_1426f26e0(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FTaskGraphInterface::Get();
                    /* WARNING: Could not recover jumptable at 0x0001426f26f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1);
  return;
}



// FUNCTION 1426f2700 isValid body=513 status=ok
// SIG undefined isValid(void)

ulonglong physx::PxSceneDesc::isValid(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong in_RAX;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    in_RAX = (ulonglong)*(uint *)(param_1 + 0x30);
    if (*(uint *)(param_1 + 0x30) == 0) {
      if (*(longlong *)(param_1 + 0x28) != 0) goto LAB_1426f271e;
    }
    else if (*(longlong *)(param_1 + 0x28) == 0) goto LAB_1426f271e;
    if (((((((*(uint *)(param_1 + 0x70) < 0x101) &&
            (uVar2 = *(int *)(param_1 + 0xa0) - 1, in_RAX = (ulonglong)uVar2, uVar2 < 2)) &&
           (3 < *(uint *)(param_1 + 0xa8))) &&
          ((0.0 < *(float *)(param_1 + 0x80) || *(float *)(param_1 + 0x80) == 0.0 &&
           (0.0 < *(float *)(param_1 + 0x84) || *(float *)(param_1 + 0x84) == 0.0)))) &&
         ((0.0 < *(float *)(param_1 + 0x88) || *(float *)(param_1 + 0x88) == 0.0 &&
          ((*(longlong *)(param_1 + 0x90) != 0 && (*(int *)(param_1 + 200) != 0)))))) &&
        (in_RAX = (ulonglong)*(uint *)(param_1 + 0xbc),
        *(uint *)(param_1 + 0xbc) <= *(uint *)(param_1 + 0xc0))) &&
       ((0.0 < *(float *)(param_1 + 0xd0) &&
        (uVar2 = *(uint *)(param_1 + 0x8c) & 0x4010, in_RAX = (ulonglong)uVar2, uVar2 != 0x4010))))
    {
      uVar2 = _fpclass((double)*(float *)(param_1 + 0xd4));
      in_RAX = CONCAT44(extraout_var,uVar2);
      if ((uVar2 & 0x207) == 0) {
        uVar2 = _fpclass((double)*(float *)(param_1 + 0xd8));
        in_RAX = CONCAT44(extraout_var_00,uVar2);
        if ((uVar2 & 0x207) == 0) {
          uVar2 = _fpclass((double)*(float *)(param_1 + 0xdc));
          in_RAX = CONCAT44(extraout_var_01,uVar2);
          if ((uVar2 & 0x207) == 0) {
            uVar2 = _fpclass((double)*(float *)(param_1 + 0xe0));
            in_RAX = CONCAT44(extraout_var_02,uVar2);
            if ((uVar2 & 0x207) == 0) {
              uVar2 = _fpclass((double)*(float *)(param_1 + 0xe4));
              in_RAX = CONCAT44(extraout_var_03,uVar2);
              if ((uVar2 & 0x207) == 0) {
                uVar2 = _fpclass((double)*(float *)(param_1 + 0xe8));
                in_RAX = CONCAT44(extraout_var_04,uVar2);
                if ((uVar2 & 0x207) == 0) {
                  if ((((*(float *)(param_1 + 0xd4) <= *(float *)(param_1 + 0xe0)) &&
                       (*(float *)(param_1 + 0xd8) <= *(float *)(param_1 + 0xe4))) &&
                      (*(float *)(param_1 + 0xdc) <= *(float *)(param_1 + 0xe8))) ||
                     ((((*(float *)(param_1 + 0xd4) == 8.5070587e+37 &&
                        (*(float *)(param_1 + 0xd8) == 8.5070587e+37)) &&
                       ((*(float *)(param_1 + 0xdc) == 8.5070587e+37 &&
                        ((*(float *)(param_1 + 0xe0) == -8.5070587e+37 &&
                         (*(float *)(param_1 + 0xe4) == -8.5070587e+37)))))) &&
                      (*(float *)(param_1 + 0xe8) == -8.5070587e+37)))) {
                    uVar1 = *(uint *)(param_1 + 0x10c);
                    uVar2 = uVar1 - 1;
                    in_RAX = (ulonglong)uVar2;
                    if (((uVar1 & uVar2) == 0) && (uVar1 < 0x21)) {
                      return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
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
LAB_1426f271e:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1426f2910 FUN_1426f2910 body=337 status=ok
// SIG undefined FUN_1426f2910(void)

void FUN_1426f2910(longlong param_1,longlong param_2,uint param_3)

{
  longlong **pplVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *local_38;
  int local_30;
  undefined4 local_28;
  
  if (0 < (int)param_3) {
    plVar9 = (longlong *)(param_2 + 8);
    uVar7 = (ulonglong)param_3;
    do {
      if ((((*plVar9 != 0) && (piVar3 = *(int **)(*plVar9 + 0x10), piVar3 != (int *)0x0)) &&
          (*piVar3 == 4)) && (puVar4 = *(undefined4 **)(piVar3 + 2), puVar4 != (undefined4 *)0x0)) {
        iVar2 = *(int *)(param_1 + 0x10);
        lVar8 = *(longlong *)(param_1 + 8);
        local_38 = (longlong *)0x0;
        local_30 = 0;
        if ((((longlong **)(puVar4 + 0x6a) != &local_38) && (puVar4[0x6c] != 0)) &&
           (plVar6 = *(longlong **)(puVar4 + 0x6a), plVar6 != (longlong *)0x0)) {
          (**(code **)(*plVar6 + 0x30))(plVar6,&local_38);
        }
        local_28 = *puVar4;
        plVar6 = (longlong *)(((longlong)iVar2 + 0x2b) * 0x10 + lVar8);
        iVar2 = (int)plVar6[1];
        lVar8 = (longlong)iVar2;
        *(int *)(plVar6 + 1) = iVar2 + 1;
        if (*(int *)((longlong)plVar6 + 0xc) < iVar2 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar6,iVar2);
        }
        lVar5 = *plVar6;
        *(undefined8 *)(lVar5 + lVar8 * 0x18) = 0;
        *(undefined4 *)(lVar5 + 8 + lVar8 * 0x18) = 0;
        pplVar1 = (longlong **)(lVar5 + lVar8 * 0x18);
        if (((&local_38 != pplVar1) && (local_30 != 0)) && (local_38 != (longlong *)0x0)) {
          (**(code **)(*local_38 + 0x30))(local_38,pplVar1);
        }
        *(undefined4 *)(pplVar1 + 2) = local_28;
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
      }
      plVar9 = plVar9 + 3;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 1426f2a70 FUN_1426f2a70 body=3036 status=ok
// SIG undefined FUN_1426f2a70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426f2a70(longlong param_1,longlong *param_2,longlong param_3,uint param_4)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  float *pfVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 uVar15;
  uint uVar16;
  int iVar17;
  byte bVar19;
  undefined8 *puVar18;
  uint uVar20;
  float *pfVar21;
  int iVar22;
  longlong *plVar23;
  longlong lVar24;
  longlong lVar25;
  ushort *puVar26;
  longlong *plVar27;
  int iVar28;
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
  undefined1 auStack_578 [32];
  uint local_558;
  longlong *local_550;
  undefined1 local_548 [8];
  longlong local_540;
  float local_538;
  uint local_534;
  undefined8 local_530;
  undefined8 local_528;
  longlong local_520;
  float local_518;
  float local_514;
  float local_510;
  float local_50c;
  float local_508;
  float local_504;
  undefined8 local_500;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 uStack_4f0;
  undefined4 local_4ec;
  undefined4 local_4e8;
  undefined4 local_4e4;
  uint local_4e0;
  uint local_4d8;
  int local_4d4;
  longlong local_4d0;
  longlong local_4c8;
  longlong local_4c0;
  float local_4b8;
  float fStack_4b4;
  float local_4b0;
  ushort *local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  longlong *local_490;
  longlong *local_488;
  longlong local_480;
  longlong *local_478;
  longlong local_470 [3];
  float local_458;
  float local_44c;
  undefined1 local_448 [12];
  undefined1 local_43c [12];
  undefined1 local_430 [12];
  undefined1 local_424 [44];
  undefined1 local_3f8 [36];
  float local_3d4 [183];
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_578;
  if ((*(byte *)((longlong)param_2 + 0x1a) & 3) == 0) {
    plVar27 = (longlong *)*param_2;
    plVar13 = (longlong *)param_2[1];
    local_4d8 = param_4;
    local_480 = param_1;
    cVar5 = (**(code **)(*plVar27 + 0x20))(plVar27,"PxRigidBody");
    local_478 = (longlong *)0x0;
    if (cVar5 != '\0') {
      local_478 = plVar27;
    }
    cVar5 = (**(code **)(*plVar13 + 0x20))();
    piVar2 = (int *)plVar27[2];
    local_490 = (longlong *)0x0;
    if (cVar5 != '\0') {
      local_490 = plVar13;
    }
    if ((piVar2 == (int *)0x0) || (*piVar2 != 1)) {
      local_540 = 0;
    }
    else {
      local_540 = *(longlong *)(piVar2 + 2);
    }
    piVar3 = (int *)plVar13[2];
    if ((piVar3 == (int *)0x0) || (*piVar3 != 1)) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(longlong *)(piVar3 + 2);
    }
    bVar4 = false;
    local_4d0 = lVar9;
    if ((((local_540 == 0) && (piVar2 != (int *)0x0)) && (*piVar2 == 7)) &&
       (*(longlong **)(piVar2 + 2) != (longlong *)0x0)) {
      bVar4 = true;
      local_540 = (**(code **)(**(longlong **)(piVar2 + 2) + 0x20))();
    }
    if (((lVar9 == 0) && (piVar2 = (int *)plVar13[2], piVar2 != (int *)0x0)) &&
       ((*piVar2 == 7 && (*(longlong **)(piVar2 + 2) != (longlong *)0x0)))) {
      bVar4 = true;
      lVar9 = (**(code **)(**(longlong **)(piVar2 + 2) + 0x20))();
      local_4d0 = lVar9;
    }
    lVar25 = local_540;
    if (((local_540 != 0) && (lVar9 != 0)) &&
       ((local_540 != lVar9 &&
        (((!bVar4 || ((*(byte *)(local_540 + 0x10) & 2) != 0)) ||
         ((*(byte *)(lVar9 + 0x10) & 2) != 0)))))) {
      plVar27 = (longlong *)
                (((longlong)*(int *)(param_1 + 0x10) + 0x28) * 0x10 + *(longlong *)(param_1 + 8));
      lVar14 = plVar27[1];
      local_558 = param_4;
      local_550 = plVar27;
      local_4d4 = (int)lVar14;
      local_488 = plVar27;
      FUN_14268e040(local_470,local_540,lVar9,param_3);
      local_534 = 0;
      iVar28 = (int)lVar14;
      if (param_4 != 0) {
        puVar26 = (ushort *)(param_3 + 0x30);
        do {
          plVar10 = (longlong *)0x0;
          plVar13 = plVar10;
          if ((*puVar26 & 1) == 0) {
            plVar13 = *(longlong **)(puVar26 + -0x18);
          }
          plVar23 = plVar10;
          if ((*puVar26 & 2) == 0) {
            plVar23 = *(longlong **)(puVar26 + -0x14);
          }
          local_4a8 = puVar26;
          if (plVar13 == (longlong *)0x0) {
            uVar20 = 0x100;
          }
          else {
            lVar9 = (**(code **)(*plVar13 + 0xa0))(plVar13);
            uVar20 = *(uint *)(lVar9 + 0xc);
          }
          if (plVar23 == (longlong *)0x0) {
            bVar19 = 1;
          }
          else {
            lVar9 = (**(code **)(*plVar23 + 0xa0))(plVar23);
            bVar19 = (byte)((uint)*(undefined4 *)(lVar9 + 0xc) >> 8);
          }
          lVar9 = local_4d0;
          if (((bVar19 | (byte)(uVar20 >> 8)) & 1) == 0) {
            iVar28 = *(int *)(local_470[0] + (longlong)(int)local_534 * 4);
            if (((iVar28 != -1) && (plVar13 != (longlong *)0x0)) && (plVar23 != (longlong *)0x0)) {
              local_4c8 = 0;
              lVar9 = (longlong)iVar28 * 0x70 + *plVar27;
              local_528 = 0;
              sVar6 = (**(code **)(*plVar13 + 0xc0))(plVar13);
              if (sVar6 == 1) {
                (**(code **)(*plVar13 + 200))(plVar13,&local_4c8,1);
                if (((local_4c8 == 0) ||
                    (piVar2 = *(int **)(local_4c8 + 0x10), piVar2 == (int *)0x0)) || (*piVar2 != 2))
                {
                  local_528 = 0;
                }
                else {
                  local_528 = *(undefined8 *)(piVar2 + 2);
                }
              }
              local_4c0 = 0;
              local_530 = 0;
              sVar6 = (**(code **)(*plVar23 + 0xc0))(plVar23);
              if (sVar6 == 1) {
                (**(code **)(*plVar23 + 200))(plVar23,&local_4c0,1);
                if (((local_4c0 == 0) ||
                    (piVar2 = *(int **)(local_4c0 + 0x10), piVar2 == (int *)0x0)) || (*piVar2 != 2))
                {
                  local_530 = 0;
                }
                else {
                  local_530 = *(undefined8 *)(piVar2 + 2);
                }
              }
              iVar28 = physx::PxContactPair::extractContacts(puVar26 + -0x18,local_3f8,0x10);
              local_520 = (longlong)iVar28;
              lVar25 = local_540;
              if (0 < iVar28) {
                pfVar21 = local_3d4;
                uVar15 = local_530;
                do {
                  fVar1 = pfVar21[-6];
                  if (fVar1 <= 0.0) {
                    cVar5 = FUN_1426d7210(local_548,plVar13,pfVar21 + -2);
                    if (cVar5 == '\0') {
                      cVar5 = FUN_1426d7210(local_548,plVar23,pfVar21 + 2);
                      if (cVar5 == '\0') {
                        fVar36 = pfVar21[-1];
                        fVar38 = *pfVar21;
                        fVar37 = pfVar21[1];
                        fVar30 = fVar36 * pfVar21[-5] + pfVar21[-4] * fVar38 + fVar37 * pfVar21[-3];
                        fVar31 = pfVar21[-5] * fVar30;
                        fVar32 = pfVar21[-4] * fVar30;
                        fVar30 = pfVar21[-3] * fVar30;
                        *(float *)(lVar9 + 0x58) = fVar31 + *(float *)(lVar9 + 0x58);
                        *(float *)(lVar9 + 0x5c) = fVar32 + *(float *)(lVar9 + 0x5c);
                        *(float *)(lVar9 + 0x60) = fVar30 + *(float *)(lVar9 + 0x60);
                        *(float *)(lVar9 + 100) = (fVar36 - fVar31) + *(float *)(lVar9 + 100);
                        *(float *)(lVar9 + 0x68) = (fVar38 - fVar32) + *(float *)(lVar9 + 0x68);
                        *(float *)(lVar9 + 0x6c) = (fVar37 - fVar30) + *(float *)(lVar9 + 0x6c);
                        if ((local_4c8 == 0) &&
                           (lVar25 = (**(code **)(*plVar13 + 0xd0))(plVar13), lVar25 != 0)) {
                          piVar2 = *(int **)(lVar25 + 0x10);
                          if ((piVar2 == (int *)0x0) || (*piVar2 != 2)) {
                            local_528 = 0;
                          }
                          else {
                            local_528 = *(undefined8 *)(piVar2 + 2);
                          }
                        }
                        if ((local_4c0 == 0) &&
                           (lVar25 = (**(code **)(*plVar23 + 0xd0))(plVar23), lVar25 != 0)) {
                          piVar2 = *(int **)(lVar25 + 0x10);
                          if ((piVar2 == (int *)0x0) || (*piVar2 != 2)) {
                            uVar15 = 0;
                          }
                          else {
                            uVar15 = *(undefined8 *)(piVar2 + 2);
                          }
                        }
                        plVar27 = local_478;
                        if (local_478 == (longlong *)0x0) {
                          local_518 = 0.0;
                          fVar30 = 0.0;
                          local_50c = 0.0;
                          fVar37 = 0.0;
                          local_504 = 0.0;
                          fVar31 = 0.0;
                          fVar36 = 0.0;
                          fVar32 = 0.0;
                          fVar38 = 0.0;
                        }
                        else {
                          pfVar11 = (float *)(**(code **)(*local_478 + 0x128))(local_478,local_448);
                          local_518 = *pfVar11;
                          local_50c = pfVar11[1];
                          local_504 = pfVar11[2];
                          pfVar11 = (float *)(**(code **)(*plVar27 + 0x138))(plVar27,local_43c);
                          fVar36 = *pfVar11;
                          fVar38 = pfVar11[1];
                          fVar37 = pfVar11[2];
                          lVar25 = (**(code **)(*plVar27 + 0xa0))(plVar27);
                          fVar31 = pfVar21[-7] - *(float *)(lVar25 + 0x18);
                          fVar30 = pfVar21[-9] - *(float *)(lVar25 + 0x10);
                          fVar32 = pfVar21[-8] - *(float *)(lVar25 + 0x14);
                        }
                        plVar27 = local_490;
                        if (local_490 == (longlong *)0x0) {
                          local_514 = 0.0;
                          local_538 = 0.0;
                          fVar34 = 0.0;
                          local_510 = 0.0;
                          fVar33 = 0.0;
                          local_508 = 0.0;
                          fVar35 = 0.0;
                          fVar39 = 0.0;
                          fVar29 = 0.0;
                        }
                        else {
                          puVar12 = (undefined4 *)
                                    (**(code **)(*local_490 + 0x128))(local_490,local_430);
                          local_530 = CONCAT44(local_530._4_4_,*puVar12);
                          local_510 = (float)puVar12[1];
                          local_508 = (float)puVar12[2];
                          pfVar11 = (float *)(**(code **)(*plVar27 + 0x138))(plVar27,local_424);
                          local_514 = *pfVar11;
                          local_538 = pfVar11[1];
                          fVar39 = pfVar11[2];
                          lVar25 = (**(code **)(*plVar27 + 0xa0))(plVar27);
                          fVar34 = pfVar21[-9] - *(float *)(lVar25 + 0x10);
                          fVar33 = pfVar21[-8] - *(float *)(lVar25 + 0x14);
                          fVar35 = pfVar21[-7] - *(float *)(lVar25 + 0x18);
                          fVar29 = (float)local_530;
                        }
                        iVar28 = *(int *)(lVar9 + 0x50);
                        iVar7 = iVar28 + 1;
                        *(int *)(lVar9 + 0x50) = iVar7;
                        local_4b8 = ((fVar35 * local_538 - fVar33 * fVar39) + fVar29) -
                                    ((fVar31 * fVar38 - fVar37 * fVar32) + local_518);
                        fStack_4b4 = ((fVar34 * fVar39 - fVar35 * local_514) + local_510) -
                                     ((fVar30 * fVar37 - fVar36 * fVar31) + local_50c);
                        local_4b0 = ((fVar33 * local_514 - fVar34 * local_538) + local_508) -
                                    ((fVar36 * fVar32 - fVar30 * fVar38) + local_504);
                        if (*(int *)(lVar9 + 0x54) < iVar7) {
                          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>
                          ::ResizeGrow(lVar9 + 0x48);
                        }
                        puVar18 = (undefined8 *)
                                  ((longlong)iVar28 * 0x40 + *(longlong *)(lVar9 + 0x48));
                        if (puVar18 != (undefined8 *)0x0) {
                          local_44c = pfVar21[-3];
                          local_458 = pfVar21[-7];
                          fVar36 = pfVar21[-5];
                          *puVar18 = *(undefined8 *)(pfVar21 + -9);
                          fVar38 = pfVar21[-4];
                          *(float *)(puVar18 + 1) = local_458;
                          *(ulonglong *)((longlong)puVar18 + 0xc) = CONCAT44(fVar38,fVar36);
                          *(float *)((longlong)puVar18 + 0x14) = local_44c;
                          puVar18[6] = CONCAT44(fStack_4b4,local_4b8);
                          *(float *)(puVar18 + 7) = local_4b0;
                          *(float *)(puVar18 + 3) = -fVar1;
                          puVar18[4] = local_528;
                          puVar18[5] = uVar15;
                        }
                      }
                    }
                  }
                  pfVar21 = pfVar21 + 0xc;
                  local_520 = local_520 + -1;
                } while (local_520 != 0);
                local_520 = 0;
                lVar25 = local_540;
                puVar26 = local_4a8;
                plVar27 = local_488;
              }
            }
          }
          else {
            lVar14 = local_4d0;
            if ((uVar20 >> 8 & 1) != 0) {
              lVar14 = lVar25;
            }
            if (lVar14 != 0) {
              plVar10 = (longlong *)FWeakObjectPtr::Get(lVar14 + 0x138);
            }
            lVar24 = lVar25;
            if (lVar14 == lVar25) {
              lVar24 = lVar9;
            }
            if (lVar24 == 0) {
              lVar9 = 0;
            }
            else {
              lVar9 = FWeakObjectPtr::Get(lVar24 + 0x138);
            }
            uVar16 = *puVar26 & 4;
            uVar20 = uVar16 | 0x10;
            if ((*puVar26 & 8) == 0) {
              uVar20 = uVar16;
            }
            lVar25 = local_540;
            if (((plVar10 != (longlong *)0x0) && (lVar9 != 0)) && (uVar20 != 0)) {
              local_4ec = 0;
              local_4e4 = 0;
              local_500 = 0;
              local_4f8 = 0xffffffff;
              local_4f4 = 0;
              uStack_4f0 = 0;
              local_4e8 = 0xffffffff;
              FWeakObjectPtr::operator=(&local_4f8,plVar10);
              FWeakObjectPtr::operator=(&local_4e8,lVar9);
              cVar5 = FWeakObjectPtr::IsValid(lVar14 + 0x140);
              if (cVar5 == '\0') {
                local_500 = 0;
                local_4a0 = 0;
              }
              else {
                lVar9 = FWeakObjectPtr::Get(lVar14 + 0x140);
                local_500 = *(undefined8 *)(lVar9 + 0x90);
              }
              cVar5 = FWeakObjectPtr::IsValid(lVar24 + 0x140);
              if (cVar5 == '\0') {
                local_498 = 0;
                uVar15 = 0;
              }
              else {
                lVar9 = FWeakObjectPtr::Get(lVar24 + 0x140);
                uVar15 = *(undefined8 *)(lVar9 + 0x90);
              }
              uStack_4f0 = (undefined4)uVar15;
              local_4ec = (undefined4)((ulonglong)uVar15 >> 0x20);
              lVar9 = *(longlong *)(local_480 + 8);
              iVar28 = *(int *)(lVar9 + 0x4c0);
              lVar25 = (longlong)iVar28;
              *(int *)(lVar9 + 0x4c0) = iVar28 + 1;
              local_4e0 = uVar20;
              if (*(int *)(lVar9 + 0x4c4) < iVar28 + 1) {
                TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(lVar9 + 0x4b8,iVar28);
              }
              lVar9 = *(longlong *)(lVar9 + 0x4b8);
              *(undefined8 *)(lVar9 + lVar25 * 0x28) = local_500;
              *(undefined4 *)(lVar9 + 8 + lVar25 * 0x28) = local_4f8;
              *(undefined4 *)(lVar9 + 0xc + lVar25 * 0x28) = local_4f4;
              *(ulonglong *)(lVar9 + 0x10 + lVar25 * 0x28) = CONCAT44(local_4ec,uStack_4f0);
              *(undefined4 *)(lVar9 + 0x18 + lVar25 * 0x28) = local_4e8;
              *(undefined4 *)(lVar9 + 0x1c + lVar25 * 0x28) = local_4e4;
              *(uint *)(lVar9 + 0x20 + lVar25 * 0x28) = local_4e0;
              lVar25 = local_540;
            }
          }
          puVar26 = puVar26 + 0x20;
          local_534 = local_534 + 1;
          iVar28 = local_4d4;
          local_4a8 = puVar26;
        } while (local_534 < local_4d8);
      }
      if (iVar28 < (int)plVar27[1]) {
        lVar9 = (longlong)iVar28 * 0x70;
        iVar7 = iVar28;
        do {
          iVar22 = iVar7 + 1;
          lVar25 = *plVar27;
          cVar5 = FWeakObjectPtr::IsValid(lVar9 + lVar25 + 0x10);
          if (cVar5 == '\0') {
LAB_1426f3586:
            if (*(longlong *)((longlong)iVar28 * 0x70 + 0x48 + *plVar27) != 0) {
              FMemory::Free();
            }
            iVar17 = (int)plVar27[1];
            iVar8 = (iVar17 - iVar28) + -1;
            if (iVar8 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*plVar27 + (longlong)iVar28 * 0x70),
                         (void *)((longlong)iVar22 * 0x70 + *plVar27),(longlong)iVar8 * 0x70);
              iVar17 = (int)plVar27[1];
            }
            *(int *)(plVar27 + 1) = iVar17 + -1;
            TArray<FSvoNode,FDefaultAllocator>::ResizeShrink(plVar27);
            iVar28 = iVar28 + -1;
            lVar9 = lVar9 + -0x70;
            iVar22 = iVar7;
          }
          else {
            plVar13 = (longlong *)FWeakObjectPtr::Get(lVar9 + lVar25 + 0x10);
            lVar14 = (**(code **)(*plVar13 + 0x6d0))
                               (plVar13,*(undefined8 *)(lVar9 + 0x20 + lVar25),1);
            if (lVar14 == 0) goto LAB_1426f3586;
            cVar5 = FWeakObjectPtr::IsValid(lVar9 + lVar25 + 0x30);
            if (cVar5 == '\0') goto LAB_1426f3586;
            plVar13 = (longlong *)FWeakObjectPtr::Get(lVar9 + lVar25 + 0x30);
            lVar14 = (**(code **)(*plVar13 + 0x6d0))
                               (plVar13,*(undefined8 *)(lVar9 + 0x40 + lVar25),1);
            if (lVar14 == 0) goto LAB_1426f3586;
            fVar1 = *(float *)(lVar9 + 0x5c + lVar25);
            fVar36 = *(float *)(lVar9 + 0x58 + lVar25);
            fVar38 = *(float *)(lVar9 + 0x60 + lVar25);
            if (fVar36 * fVar36 + fVar1 * fVar1 + fVar38 * fVar38 < 0.0001) {
              uVar15 = FUN_1426e1a80(lVar25 + 8 + lVar9);
              cVar5 = FUN_1426aaac0(uVar15);
              if ((cVar5 == '\0') ||
                 (cVar5 = FBodyInstance::IsValidBodyInstance(uVar15), cVar5 == '\0')) {
                uVar15 = FUN_1426e1a80(lVar25 + 0x28 + lVar9);
                cVar5 = FUN_1426aaac0(uVar15);
                if ((cVar5 == '\0') ||
                   (cVar5 = FBodyInstance::IsValidBodyInstance(uVar15), cVar5 == '\0'))
                goto LAB_1426f35e6;
              }
              goto LAB_1426f3586;
            }
          }
LAB_1426f35e6:
          iVar28 = iVar28 + 1;
          lVar9 = lVar9 + 0x70;
          iVar7 = iVar22;
        } while (iVar28 < (int)plVar27[1]);
      }
      if (local_470[0] != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1426f3650 FUN_1426f3650 body=114 status=ok
// SIG undefined FUN_1426f3650(void)

void FUN_1426f3650(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x510) != '\0') {
    plVar3 = (longlong *)
             (((longlong)*(int *)(param_1 + 0x10) + 0x4e) * 0x10 + *(longlong *)(param_1 + 8));
    iVar2 = (int)plVar3[1];
    *(int *)(plVar3 + 1) = iVar2 + 1;
    if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar2);
    }
    puVar1 = (undefined8 *)(*plVar3 + (longlong)iVar2 * 0x10);
    *puVar1 = param_2;
    puVar1[1] = 0;
  }
  return;
}



// FUNCTION 1426f36d0 FUN_1426f36d0 body=110 status=ok
// SIG undefined FUN_1426f36d0(void)

void FUN_1426f36d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x510) != '\0') {
    plVar3 = (longlong *)
             (((longlong)*(int *)(param_1 + 0x10) + 0x4e) * 0x10 + *(longlong *)(param_1 + 8));
    iVar2 = (int)plVar3[1];
    *(int *)(plVar3 + 1) = iVar2 + 1;
    if (*(int *)((longlong)plVar3 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar3,iVar2);
    }
    puVar1 = (undefined8 *)(*plVar3 + (longlong)iVar2 * 0x10);
    *puVar1 = param_3;
    puVar1[1] = param_2;
  }
  return;
}



// FUNCTION 1426f3740 FUN_1426f3740 body=93 status=ok
// SIG undefined FUN_1426f3740(void)

void FUN_1426f3740(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong local_res10 [3];
  
  iVar2 = (**(code **)(*param_2 + 0x48))(param_2);
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*param_2 + 0x58))(param_2,local_res10,1);
    if ((((iVar2 != 0) && (piVar1 = *(int **)(local_res10[0] + 0x10), piVar1 != (int *)0x0)) &&
        (*piVar1 == 1)) && (*(longlong *)(piVar1 + 2) != 0)) {
      FWeakObjectPtr::Get(*(longlong *)(piVar1 + 2) + 0x138);
    }
  }
  return;
}



// FUNCTION 1426f37d0 FUN_1426f37d0 body=198 status=ok
// SIG undefined FUN_1426f37d0(void)

void FUN_1426f37d0(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  int local_res18 [2];
  int local_res20 [2];
  undefined8 local_28;
  undefined8 *local_20;
  
  if (param_3 != 0) {
    uVar2 = (ulonglong)param_3;
    do {
      local_28 = *param_2;
      lVar3 = (longlong)*(int *)(param_1 + 0x10) * 0x50 + *(longlong *)(param_1 + 8);
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(lVar3 + 0x368,local_res18);
      if ((local_res18[0] == -1) ||
         (lVar1 = *(longlong *)(lVar3 + 0x368) + (longlong)local_res18[0] * 0x18, lVar1 == 0)) {
        local_20 = &local_28;
        FUN_1426d1f40(lVar3 + 0x368,local_res20,&local_20,0);
        lVar1 = *(longlong *)(lVar3 + 0x368) + (longlong)local_res20[0] * 0x18;
      }
      param_2 = param_2 + 1;
      *(undefined4 *)(lVar1 + 8) = 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 1426f38a0 FUN_1426f38a0 body=797 status=ok
// SIG undefined FUN_1426f38a0(void)

void FUN_1426f38a0(longlong param_1,longlong param_2,uint param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  longlong *plVar17;
  ulonglong uVar18;
  int local_res20;
  uint uVar16;
  
  uVar18 = (ulonglong)param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b08aa0) && (_Init_thread_header(&DAT_146b08aa0), DAT_146b08aa0 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_146b08a98 =
         (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"gbx.UseTriggerCallback");
    _Init_thread_footer(&DAT_146b08aa0);
  }
  if ((DAT_146b08a98 == (longlong *)0x0) ||
     (iVar5 = (**(code **)(*DAT_146b08a98 + 0x68))(), iVar5 != 0)) {
    lVar2 = *(longlong *)(param_1 + 8);
    plVar17 = (longlong *)(lVar2 + 0x4b8);
    iVar5 = *(int *)(lVar2 + 0x4c0) + param_3;
    *(int *)(lVar2 + 0x4c0) = iVar5;
    if (*(int *)(lVar2 + 0x4c4) < iVar5) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar17);
    }
    local_res20 = 0;
    iVar5 = 0;
    uVar16 = 0;
    if (param_3 != 0) {
      plVar14 = (longlong *)(param_2 + 8);
      do {
        if ((*(byte *)((longlong)plVar14 + 0x1c) & 3) == 0) {
          piVar3 = *(int **)(*plVar14 + 0x10);
          if ((piVar3 == (int *)0x0) || (*piVar3 != 1)) {
            lVar6 = 0;
LAB_1426f3988:
            if ((((piVar3 != (int *)0x0) && (*piVar3 == 7)) &&
                (*(longlong **)(piVar3 + 2) != (longlong *)0x0)) &&
               (lVar6 = (**(code **)(**(longlong **)(piVar3 + 2) + 0x20))(), lVar6 != 0))
            goto LAB_1426f39a9;
            lVar7 = 0;
          }
          else {
            lVar6 = *(longlong *)(piVar3 + 2);
            if (lVar6 == 0) goto LAB_1426f3988;
LAB_1426f39a9:
            lVar7 = FWeakObjectPtr::Get(lVar6 + 0x138);
          }
          piVar3 = *(int **)(plVar14[2] + 0x10);
          if ((piVar3 == (int *)0x0) || (*piVar3 != 1)) {
            lVar8 = 0;
LAB_1426f39dc:
            if (((piVar3 != (int *)0x0) && (*piVar3 == 7)) &&
               ((*(longlong **)(piVar3 + 2) != (longlong *)0x0 &&
                (lVar8 = (**(code **)(**(longlong **)(piVar3 + 2) + 0x20))(), lVar8 != 0))))
            goto LAB_1426f39fd;
            lVar9 = 0;
          }
          else {
            lVar8 = *(longlong *)(piVar3 + 2);
            if (lVar8 == 0) goto LAB_1426f39dc;
LAB_1426f39fd:
            lVar9 = FWeakObjectPtr::Get(lVar8 + 0x138);
          }
          if ((lVar7 != 0) && (lVar9 != 0)) {
            lVar13 = (longlong)local_res20;
            local_res20 = local_res20 + 1;
            puVar1 = (undefined8 *)(*plVar17 + lVar13 * 0x28);
            FWeakObjectPtr::operator=(puVar1 + 1,lVar7);
            FWeakObjectPtr::operator=(puVar1 + 3,lVar9);
            cVar4 = FWeakObjectPtr::IsValid(lVar6 + 0x140);
            if (cVar4 == '\0') {
              uVar11 = 0;
            }
            else {
              lVar6 = FWeakObjectPtr::Get(lVar6 + 0x140);
              uVar11 = *(undefined8 *)(lVar6 + 0x90);
            }
            *puVar1 = uVar11;
            cVar4 = FWeakObjectPtr::IsValid(lVar8 + 0x140);
            if (cVar4 == '\0') {
              uVar11 = 0;
            }
            else {
              lVar6 = FWeakObjectPtr::Get(lVar8 + 0x140);
              uVar11 = *(undefined8 *)(lVar6 + 0x90);
            }
            puVar1[2] = uVar11;
            *(int *)(puVar1 + 4) = (int)plVar14[3];
          }
        }
        plVar14 = plVar14 + 5;
        uVar18 = uVar18 - 1;
        iVar5 = local_res20;
        uVar16 = param_3;
      } while (uVar18 != 0);
    }
    iVar15 = uVar16 - iVar5;
    if (iVar15 != 0) {
      iVar12 = *(int *)(lVar2 + 0x4c0);
      iVar10 = (iVar12 - iVar15) - iVar5;
      if (iVar15 <= iVar10) {
        iVar10 = iVar15;
      }
      if (iVar10 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar17 + (longlong)iVar5 * 0x28),
                   (void *)(*plVar17 + (longlong)(iVar12 - iVar10) * 0x28),(longlong)iVar10 * 0x28);
        iVar12 = *(int *)(lVar2 + 0x4c0);
      }
      *(int *)(lVar2 + 0x4c0) = iVar12 - iVar15;
      TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(plVar17);
    }
  }
  return;
}



// FUNCTION 1426f3bc0 FUN_1426f3bc0 body=214 status=ok
// SIG undefined FUN_1426f3bc0(void)

void FUN_1426f3bc0(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  int local_res18 [2];
  int local_res20 [2];
  undefined8 local_28;
  undefined8 *local_20;
  
  if (param_3 != 0) {
    uVar2 = (ulonglong)param_3;
    do {
      local_28 = *param_2;
      lVar3 = (longlong)*(int *)(param_1 + 0x10) * 0x50 + *(longlong *)(param_1 + 8);
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(lVar3 + 0x368,local_res18);
      if ((local_res18[0] == -1) ||
         (lVar1 = *(longlong *)(lVar3 + 0x368) + (longlong)local_res18[0] * 0x18, lVar1 == 0)) {
        local_20 = &local_28;
        FUN_1426d1f40(lVar3 + 0x368,local_res20,&local_20,0);
        lVar1 = *(longlong *)(lVar3 + 0x368) + (longlong)local_res20[0] * 0x18;
      }
      param_2 = param_2 + 1;
      *(undefined4 *)(lVar1 + 8) = 0;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 1426f3ca0 release body=112 status=ok
// SIG undefined release(void)

void PhysXCompletionTask::release(undefined8 *param_1)

{
  LARGE_INTEGER local_res8 [4];
  longlong local_18 [2];
  
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x20))();
  }
  if (*(uint *)(param_1 + 6) < 3) {
    QueryPerformanceCounter(local_res8);
  }
  if (param_1[5] != 0) {
    local_18[0] = 0;
    local_18[1] = 0;
    FUN_141591a60(param_1[5],local_18,0xff);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001426f3d0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}



// FUNCTION 1426f3d50 FUN_1426f3d50 body=405 status=ok
// SIG undefined FUN_1426f3d50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426f3d50(undefined8 param_1,int param_2,char *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_2c8 [32];
  undefined2 *local_2a8;
  undefined8 local_2a0;
  longlong local_298 [2];
  longlong local_288 [2];
  undefined1 local_278 [256];
  longlong local_178;
  undefined8 local_170;
  undefined1 local_158 [256];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  if (param_2 == 0x20) {
    pcVar1 = _guard_xfg_dispatch_icall_nop(param_3,"HillClimbing");
    if (pcVar1 != (char *)0x0) {
      DAT_146b08464 = 1;
    }
    pcVar1 = _guard_xfg_dispatch_icall_nop(param_3,"testSATCapsulePoly");
    if (pcVar1 != (char *)0x0) {
      DAT_146b08464 = 1;
    }
    pcVar1 = _guard_xfg_dispatch_icall_nop(param_3,"cleaning the mesh failed");
    if (pcVar1 != (char *)0x0) {
      param_2 = 2;
    }
  }
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_158,param_3);
  puVar2 = (undefined8 *)FUN_1426df020(local_298,param_2);
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  TStringConversion<TStringConvert<char,wchar_t>,128>::
  TStringConversion<TStringConvert<char,wchar_t>,128>(local_278,param_4);
  local_2a0 = local_50;
  local_2a8 = puVar3;
  FString::PrintfImpl(local_288,L"PHYSX: (%s %d) %s : %s",local_170,param_5);
  if (local_178 != 0) {
    FMemory::Free();
  }
  if (local_298[0] != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_288[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1426f3ef0 FUN_1426f3ef0 body=567 status=ok
// SIG undefined FUN_1426f3ef0(void)

void FUN_1426f3ef0(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  LPVOID pvVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 local_40 [24];
  undefined1 local_28 [32];
  
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    pvVar8 = TlsGetValue(*(DWORD *)(param_1 + 8));
    *(undefined8 *)((longlong)pvVar8 + (longlong)*(int *)((longlong)pvVar8 + 0x84) * 8) = param_2;
    uVar10 = *(int *)((longlong)pvVar8 + 0x84) + 1U & 0x8000000f;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffff0) + 1;
    }
    *(int *)((longlong)pvVar8 + 0x88) = *(int *)((longlong)pvVar8 + 0x88) + 1;
    *(uint *)((longlong)pvVar8 + 0x84) = uVar10;
    if (*(int *)((longlong)pvVar8 + 0x88) < DAT_1465349a0 * 2) {
      return;
    }
    plVar9 = (longlong *)TGraphTask<FPhysXTask>::CreateTask(local_40,0);
    lVar2 = *plVar9;
    *(longlong *)(lVar2 + 0xa0) = param_1;
    iVar7 = *(int *)((longlong)pvVar8 + 0x88) / 2;
    uVar10 = *(int *)((longlong)pvVar8 + 0x80) + iVar7;
    if (0 < iVar7) {
      lVar12 = 0;
      uVar13 = uVar10;
      do {
        uVar11 = uVar13 & 0x8000000f;
        if ((int)uVar11 < 0) {
          uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
        }
        uVar13 = uVar13 + 1;
        *(undefined8 *)(lVar2 + 0x10 + lVar12 * 8) =
             *(undefined8 *)((longlong)pvVar8 + (longlong)(int)uVar11 * 8);
        lVar12 = lVar12 + 1;
      } while (lVar12 < iVar7);
    }
    *(undefined4 *)(lVar2 + 0x90) = 0;
    *(int *)(lVar2 + 0x94) = iVar7;
    *(int *)(lVar2 + 0x98) = iVar7;
    *(int *)((longlong)pvVar8 + 0x88) = *(int *)((longlong)pvVar8 + 0x88) - iVar7;
    uVar10 = uVar10 & 0x8000000f;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffff0) + 1;
    }
    *(uint *)((longlong)pvVar8 + 0x84) = uVar10;
    lVar2 = *plVar9;
    lVar4 = plVar9[2];
    lVar12 = plVar9[1];
    lVar3 = *(longlong *)(lVar2 + 0xb0);
    piVar1 = (int *)(lVar3 + 0x48);
    if (lVar3 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_1426ec0b0(lVar2,lVar12,(int)lVar4,1);
    if (lVar3 == 0) {
      return;
    }
    LOCK();
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  else {
    plVar9 = (longlong *)TGraphTask<FPhysXTask>::CreateTask(local_28,0,0xff);
    lVar2 = *plVar9;
    *(longlong *)(lVar2 + 0xa0) = param_1;
    *(undefined8 *)(lVar2 + 0x10) = param_2;
    *(undefined4 *)(lVar2 + 0x90) = 0;
    *(undefined4 *)(lVar2 + 0x94) = 1;
    *(undefined4 *)(lVar2 + 0x98) = 1;
    lVar2 = *plVar9;
    lVar4 = plVar9[2];
    lVar12 = plVar9[1];
    lVar3 = *(longlong *)(lVar2 + 0xb0);
    piVar1 = (int *)(lVar3 + 0x48);
    if (lVar3 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_1426ec0b0(lVar2,lVar12,(int)lVar4,1);
    if (lVar3 == 0) {
      return;
    }
    LOCK();
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if (iVar7 == 1) {
    FGraphEvent::Recycle(lVar3);
  }
  return;
}



// FUNCTION 1426f4130 FUN_1426f4130 body=567 status=ok
// SIG undefined FUN_1426f4130(void)

void FUN_1426f4130(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  int iVar7;
  LPVOID pvVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 local_40 [24];
  undefined1 local_28 [32];
  
  cVar5 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar5 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar6 = GetCurrentThreadId(), DVar6 != DAT_1468c21c0)) {
    pvVar8 = TlsGetValue(*(DWORD *)(param_1 + 8));
    *(undefined8 *)((longlong)pvVar8 + (longlong)*(int *)((longlong)pvVar8 + 0x84) * 8) = param_2;
    uVar10 = *(int *)((longlong)pvVar8 + 0x84) + 1U & 0x8000000f;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffff0) + 1;
    }
    *(int *)((longlong)pvVar8 + 0x88) = *(int *)((longlong)pvVar8 + 0x88) + 1;
    *(uint *)((longlong)pvVar8 + 0x84) = uVar10;
    if (*(int *)((longlong)pvVar8 + 0x88) < DAT_1465349a0 * 2) {
      return;
    }
    plVar9 = (longlong *)TGraphTask<FPhysXTask>::CreateTask(local_40,0);
    lVar2 = *plVar9;
    *(longlong *)(lVar2 + 0xa0) = param_1;
    iVar7 = *(int *)((longlong)pvVar8 + 0x88) / 2;
    uVar10 = *(int *)((longlong)pvVar8 + 0x80) + iVar7;
    if (0 < iVar7) {
      lVar12 = 0;
      uVar13 = uVar10;
      do {
        uVar11 = uVar13 & 0x8000000f;
        if ((int)uVar11 < 0) {
          uVar11 = (uVar11 - 1 | 0xfffffff0) + 1;
        }
        uVar13 = uVar13 + 1;
        *(undefined8 *)(lVar2 + 0x10 + lVar12 * 8) =
             *(undefined8 *)((longlong)pvVar8 + (longlong)(int)uVar11 * 8);
        lVar12 = lVar12 + 1;
      } while (lVar12 < iVar7);
    }
    *(undefined4 *)(lVar2 + 0x90) = 0;
    *(int *)(lVar2 + 0x94) = iVar7;
    *(int *)(lVar2 + 0x98) = iVar7;
    *(int *)((longlong)pvVar8 + 0x88) = *(int *)((longlong)pvVar8 + 0x88) - iVar7;
    uVar10 = uVar10 & 0x8000000f;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffff0) + 1;
    }
    *(uint *)((longlong)pvVar8 + 0x84) = uVar10;
    lVar2 = *plVar9;
    lVar4 = plVar9[2];
    lVar12 = plVar9[1];
    lVar3 = *(longlong *)(lVar2 + 0xb0);
    piVar1 = (int *)(lVar3 + 0x48);
    if (lVar3 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_1426ec380(lVar2,lVar12,(int)lVar4,1);
    if (lVar3 == 0) {
      return;
    }
    LOCK();
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  else {
    plVar9 = (longlong *)TGraphTask<FPhysXTask>::CreateTask(local_28,0,0xff);
    lVar2 = *plVar9;
    *(longlong *)(lVar2 + 0xa0) = param_1;
    *(undefined8 *)(lVar2 + 0x10) = param_2;
    *(undefined4 *)(lVar2 + 0x90) = 0;
    *(undefined4 *)(lVar2 + 0x94) = 1;
    *(undefined4 *)(lVar2 + 0x98) = 1;
    lVar2 = *plVar9;
    lVar4 = plVar9[2];
    lVar12 = plVar9[1];
    lVar3 = *(longlong *)(lVar2 + 0xb0);
    piVar1 = (int *)(lVar3 + 0x48);
    if (lVar3 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_1426ec380(lVar2,lVar12,(int)lVar4,1);
    if (lVar3 == 0) {
      return;
    }
    LOCK();
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if (iVar7 == 1) {
    FGraphEvent::Recycle(lVar3);
  }
  return;
}



// FUNCTION 1426f4370 submitTask body=181 status=ok
// SIG undefined submitTask(void)

void FPhysXCPUDispatcherSingleThread::submitTask(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  *(longlong **)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8) = param_2;
  if (*(int *)(param_1 + 0x10) < 2) {
    (**(code **)(*param_2 + 8))(param_2);
    (**(code **)(*param_2 + 0x30))(param_2);
    iVar1 = *(int *)(param_1 + 0x10);
    while (1 < iVar1) {
      plVar2 = *(longlong **)
                (*(longlong *)(param_1 + 8) + -8 + (longlong)*(int *)(param_1 + 0x10) * 8);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 8);
      (**(code **)(*plVar2 + 8))(plVar2);
      (**(code **)(*plVar2 + 0x30))(plVar2);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 8);
  }
  return;
}



// FUNCTION 1426f4440 FUN_1426f4440 body=354 status=ok
// SIG undefined FUN_1426f4440(void)

void FUN_1426f4440(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  void *_Src;
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FModuleDescriptor,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  puVar3 = (uint *)*param_1;
  if (param_3 != 0) {
    puVar2 = puVar3 + 0xf;
    puVar4 = (undefined1 *)(param_2 + 0x60);
    do {
      *puVar3 = *puVar3 ^ (*(uint *)(puVar4 + -0x60) ^ *puVar3) & 1;
      uVar1 = (*(uint *)(puVar4 + -0x60) ^ *puVar3) & 2 ^ *puVar3;
      *puVar3 = uVar1;
      uVar1 = (*(uint *)(puVar4 + -0x60) ^ uVar1) & 4 ^ uVar1;
      *puVar3 = uVar1;
      *puVar3 = (*(uint *)(puVar4 + -0x60) ^ uVar1) & 8 ^ uVar1;
      puVar2[-0xb] = 0;
      puVar2[-10] = 0;
      puVar2[-9] = 0;
      puVar2[-8] = 0;
      puVar2[-3] = 0;
      puVar2[-2] = 0;
      puVar2[-1] = 0;
      puVar2[0] = 0;
      puVar2[1] = 0xffffffff;
      puVar2[2] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      *(undefined ***)(puVar2 + -0xd) = &PTR_FUN_14413ebc8;
      *(undefined1 *)(puVar2 + 9) = *puVar4;
      *(undefined1 *)((longlong)puVar2 + 0x25) = puVar4[1];
      puVar2[10] = *(uint *)(puVar4 + 4);
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      uVar1 = *(uint *)(puVar4 + 0x10);
      _Src = *(void **)(puVar4 + 8);
      puVar2[0xd] = uVar1;
      if (uVar1 == 0) {
        puVar2[0xe] = 0;
      }
      else {
        TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(puVar2 + 0xb,uVar1,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(puVar2 + 0xb),_Src,(longlong)(int)uVar1 * 0x1c);
      }
      puVar3 = puVar3 + 0x20;
      *(undefined8 *)(puVar2 + 0xf) = *(undefined8 *)(puVar4 + 0x18);
      puVar4 = puVar4 + 0x80;
      puVar2 = puVar2 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1426f45b0 Emplace<int_const_&,FDynamicForceFeedbackDetails_*> body=208 status=ok
// SIG undefined Emplace<int_const_&,FDynamicForceFeedbackDetails_*>(void)

void TSortedMap<int,FDynamicForceFeedbackDetails_*,FDefaultAllocator,TLess<int>_>::
     Emplace<int_const_&,FDynamicForceFeedbackDetails_*>
               (longlong *param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar1 = (int)param_1[1];
  lVar5 = 0;
  if (iVar1 != 0) {
    uVar6 = (longlong)iVar1;
    do {
      uVar7 = uVar6 >> 1;
      if (*(int *)(*param_1 + (uVar7 + lVar5) * 0x10) < *param_2) {
        lVar5 = (ulonglong)((uint)uVar6 & 1) + uVar7 + lVar5;
      }
      uVar6 = uVar7;
    } while (uVar7 != 0);
  }
  iVar4 = (int)lVar5;
  if ((-1 < iVar4) && (iVar4 < iVar1)) {
    iVar3 = *param_2;
    piVar2 = (int *)((longlong)iVar4 * 0x10 + *param_1);
    if (*piVar2 <= iVar3) goto LAB_1426f4660;
  }
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
  }
  _Src = (void *)(*param_1 + (longlong)iVar4 * 0x10);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)((longlong)_Src + 0x10),_Src,(longlong)(iVar1 - iVar4) << 4);
  iVar3 = *param_2;
  piVar2 = (int *)(*param_1 + (longlong)iVar4 * 0x10);
LAB_1426f4660:
  *piVar2 = iVar3;
  *(undefined8 *)(piVar2 + 2) = *param_3;
  return;
}



// FUNCTION 1426f4680 FUN_1426f4680 body=1139 status=ok
// SIG undefined FUN_1426f4680(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426f4680(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *_Src;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_1b8 [32];
  char local_198;
  longlong *local_190;
  int local_188;
  uint uStack_184;
  uint *puStack_180;
  undefined4 local_178;
  uint uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  int local_160;
  int local_15c;
  longlong *local_158;
  int iStack_150;
  uint uStack_14c;
  uint *local_148;
  uint uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  longlong *local_130;
  undefined8 uStack_128;
  uint *puStack_120;
  uint uStack_118;
  uint uStack_114;
  undefined8 uStack_110;
  undefined1 local_108 [192];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  *(undefined4 *)(param_2 + 200) = 0;
  local_198 = param_3;
  if (0x7fffffff < *(uint *)(param_2 + 0xcc)) {
    FUN_140615c30(param_2,0);
  }
  plVar11 = (longlong *)0x0;
  uStack_184 = 1;
  local_190 = (longlong *)(param_1 + 0x2b0);
  local_168 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_180 = (uint *)(param_1 + 0x2c0);
  local_15c = 0;
  iVar13 = 0;
  local_188 = 0;
  uStack_174 = 0;
  iStack_170 = 0;
  if (uVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_180;
    }
    uVar12 = *puVar10;
    iStack_170 = 0;
    local_188 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_188;
      iStack_170 = iStack_170 + 0x20;
      iVar5 = local_188 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_188;
      local_188 = iVar5;
      if (bVar3) goto LAB_1426f47af;
      uVar12 = puVar10[lVar7 + 1];
    }
    uStack_184 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar5 = 0x1f;
    if (uStack_184 != 0) {
      for (; uStack_184 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_184 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_174 = (iStack_170 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_174) {
LAB_1426f47af:
      uStack_174 = uVar1;
    }
  }
  local_178 = 0xffffffff;
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uStack_128 = CONCAT44(uStack_184,local_188);
  uStack_140 = 0xffffffff;
  uStack_13c = uStack_174;
  local_138 = CONCAT44(uStack_16c,iStack_170);
  uVar9 = uVar12 & 0xffffffe0;
  iStack_150 = local_188;
  uStack_14c = uStack_184;
  if (uVar12 != uVar1) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_180;
    }
    uVar6 = puVar10[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
    iVar5 = (int)uVar12 >> 5;
    while (uVar6 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1426f486f;
      uVar6 = puVar10[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar6 = uVar6 - 1 & uVar6 ^ uVar6;
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
    uVar12 = (uVar9 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uVar12) {
LAB_1426f486f:
      uVar12 = uVar1;
    }
  }
  iVar5 = 0;
  local_148 = puStack_180;
  local_130 = local_190;
  puStack_120 = puStack_180;
  uStack_110 = local_138;
  local_158 = local_190;
  uStack_118 = uStack_140;
  uStack_114 = uStack_13c;
  while( true ) {
    if ((uStack_13c == uVar12) && (local_148 == puStack_180)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_158 == local_190)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar7 = *(longlong *)(*local_158 + (longlong)(int)uStack_13c * 0x10);
    if (lVar7 != 0) {
      lVar4 = FUN_1429003e0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = *(int *)(param_2 + 200);
        *(int *)(param_2 + 200) = iVar2 + 1;
        if (*(int *)(param_2 + 0xcc) < iVar2 + 1) {
          TArray<UHierarchicalInstancedStaticMeshComponent_*,TInlineAllocator<24,FDefaultAllocator>_>
          ::ResizeGrow(param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0xc0);
        if (*(longlong *)(param_2 + 0xc0) == 0) {
          lVar4 = param_2;
        }
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar7;
      }
    }
    if ((local_198 != '\0') && (lVar7 != 0)) {
      lVar4 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_160 = iVar13 + 1;
        if (iVar5 < local_160) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_168,iVar13);
          plVar11 = local_168;
          iVar5 = local_15c;
        }
        plVar11[iVar13] = lVar7;
        iVar13 = local_160;
      }
    }
    uStack_140 = uStack_140 & ~uStack_14c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_150);
  }
  if (local_198 != '\0') {
    uVar8 = 0;
    local_48 = (undefined1 *)0x0;
    local_40 = 0;
    uVar15 = (ulonglong)((longlong)(plVar11 + iVar13) + (7 - (longlong)plVar11)) >> 3;
    if (plVar11 + iVar13 < plVar11) {
      uVar15 = uVar8;
    }
    plVar14 = plVar11;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_1426f4680(*(longlong *)(*plVar14 + 0x2d8),local_108,1);
          iVar13 = (int)local_40;
          lVar7 = (longlong)(int)local_40;
          if ((int)local_40 != 0) {
            iVar5 = *(int *)(param_2 + 200);
            if (*(int *)(param_2 + 0xcc) < (int)local_40 + iVar5) {
              FUN_140615c30(param_2);
              iVar5 = *(int *)(param_2 + 200);
            }
            _Src = local_108;
            if (local_48 != (undefined1 *)0x0) {
              _Src = local_48;
            }
            lVar4 = *(longlong *)(param_2 + 0xc0);
            if (*(longlong *)(param_2 + 0xc0) == 0) {
              lVar4 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar5 * 8),_Src,lVar7 << 3);
            *(int *)(param_2 + 200) = *(int *)(param_2 + 200) + iVar13;
            local_40 = local_40 & 0xffffffff00000000;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_48 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return;
}



// FUNCTION 1426f4b00 GetDefault<UInputSettings> body=51 status=ok
// SIG undefined GetDefault<UInputSettings>(void)

longlong GetDefault<UInputSettings>(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)UInputSettings::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  return lVar2;
}



// FUNCTION 1426f4b40 FUN_1426f4b40 body=211 status=ok
// SIG undefined FUN_1426f4b40(void)

ulonglong FUN_1426f4b40(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  undefined8 *puVar10;
  
  puVar4 = (undefined8 *)*param_1;
  lVar7 = param_1[1];
  puVar10 = puVar4;
  while( true ) {
    if (puVar10 == puVar4 + (longlong)(int)lVar7 * 2) {
      return 0xffffffff;
    }
    plVar5 = (longlong *)puVar10[1];
    puVar6 = (undefined8 *)*puVar10;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    cVar9 = (**(code **)*puVar6)(puVar6,*(undefined8 *)(param_2 + 8));
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
    if (cVar9 != '\0') break;
    puVar10 = puVar10 + 2;
  }
  return (longlong)puVar10 - (longlong)puVar4 >> 4 & 0xffffffff;
}



// FUNCTION 1426f4c20 FUN_1426f4c20 body=136 status=ok
// SIG undefined FUN_1426f4c20(void)

undefined8 * FUN_1426f4c20(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x250);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_145179858;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x240);
      FUN_1417f46d0(_Dst);
      *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) & 0xf7;
      *_Dst = &PTR_FUN_145177910;
      puVar1[0x43] = 0;
      puVar1[0x44] = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1426f4cb0 FUN_1426f4cb0 body=89 status=ok
// SIG undefined FUN_1426f4cb0(void)

void FUN_1426f4cb0(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = UMovieScene3DTransformSection::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 1426f4d10 TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics> body=258 status=ok
// SIG undefined TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>(void)

undefined8 *
TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::
TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>
          (undefined8 *param_1,undefined4 *param_2,float param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x80000000;
  do {
    param_1[(ulonglong)(uVar4 & 7) + 3] = 0;
    if (((byte)uVar4 & 7) < 7) {
      uVar4 = uVar4 ^ (uVar4 + 1 ^ uVar4) & 7;
    }
    else {
      uVar4 = uVar4 | 8;
    }
  } while (uVar4 >> 3 == 0);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)((longlong)param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0xd) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(float *)(param_1 + 0xe) = param_3;
  *(float *)((longlong)param_1 + 0x74) = param_3;
  *(float *)(param_1 + 0xf) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(float *)(param_1 + 0x10) = param_3 * 0.53125;
  *(float *)((longlong)param_1 + 0x84) = param_3 - param_3 * 0.53125;
  *(float *)(param_1 + 0x12) = param_3 * 0.00050534424;
  param_1[0x13] = 0;
  return param_1;
}



// FUNCTION 1426f4e20 FUN_1426f4e20 body=320 status=ok
// SIG undefined FUN_1426f4e20(void)

undefined8 * FUN_1426f4e20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  _guard_xfg_dispatch_icall_nop(param_1 + 2,0,0x90);
  _guard_xfg_dispatch_icall_nop(param_1 + 0x14,0,0x90);
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  uVar1 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  uVar1 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  uVar1 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar1;
  uVar1 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar1;
  uVar1 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar1;
  uVar1 = param_2[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar1;
  uVar1 = param_2[0x1b];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = uVar1;
  uVar1 = param_2[0x1d];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = uVar1;
  uVar1 = param_2[0x1f];
  param_1[0x1e] = param_2[0x1e];
  param_1[0x1f] = uVar1;
  uVar1 = param_2[0x21];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = uVar1;
  uVar1 = param_2[0x23];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = uVar1;
  uVar1 = param_2[0x25];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = uVar1;
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)((longlong)param_2 + 0x134);
  return param_1;
}



// FUNCTION 1426f4f60 FUN_1426f4f60 body=1093 status=ok
// SIG undefined FUN_1426f4f60(void)

undefined8 * FUN_1426f4f60(undefined8 *param_1)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  
  FUN_1423c3200();
  *param_1 = &PTR__scalar_deleting_destructor__1451761b8;
  plVar7 = param_1 + 0xd6;
  param_1[0x8b] = &PTR_LAB_1451770d0;
  param_1[0xa6] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb6] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc6] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[199] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  *(undefined1 *)(param_1 + 0xcf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x67c) = 0;
  *plVar7 = 0;
  param_1[0xd7] = 0;
  *(undefined4 *)(param_1 + 0xda) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6d4) = 0;
  *(undefined4 *)(param_1 + 0xdb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6dc) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6e4) = 0;
  *(undefined4 *)(param_1 + 0xdd) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6ec) = 0;
  *(undefined4 *)(param_1 + 0xde) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6f4) = 0;
  *(undefined4 *)(param_1 + 0xdf) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6fc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x704) = 0;
  *(undefined4 *)(param_1 + 0xe1) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x70c) = 0;
  *(undefined4 *)(param_1 + 0xe2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x714) = 0;
  *(undefined4 *)(param_1 + 0xe3) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x71c) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x724) = 0;
  *(undefined4 *)(param_1 + 0xe5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x72c) = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  *(undefined4 *)((longlong)param_1 + 0x784) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x78c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf2) = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  *(undefined1 *)(param_1 + 0x103) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x824) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0x40400000;
  uVar6 = UCheatManager::GetPrivateStaticClass();
  param_1[0xb6] = uVar6;
  *(uint *)(param_1 + 200) = *(uint *)(param_1 + 200) | 8;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xab) = 0x3f800000;
  *(undefined1 *)(param_1 + 6) = 0;
  *(uint *)(param_1 + 0xe9) = *(uint *)(param_1 + 0xe9) & 0xfffffffb;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 1;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) | 8;
  *(undefined4 *)(param_1 + 0xf8) = 0xc2c80000;
  *(undefined1 *)(param_1 + 0xd8) = 1;
  *(undefined1 *)((longlong)param_1 + 0x6c2) = 3;
  *(uint *)(param_1 + 0xe9) = *(uint *)(param_1 + 0xe9) & 0xfffffffc;
  *(uint *)(param_1 + 0xe9) = *(uint *)(param_1 + 0xe9) | 8;
  *(uint *)(param_1 + 0xd5) = *(uint *)(param_1 + 0xd5) | 0x24;
  *(uint *)(param_1 + 200) = *(uint *)(param_1 + 200) & 0xfffffffb;
  *(uint *)((longlong)param_1 + 0x4cc) = *(uint *)((longlong)param_1 + 0x4cc) | 2;
  *(byte *)((longlong)param_1 + 0x7d4) = *(byte *)((longlong)param_1 + 0x7d4) & 0xfe;
  *(undefined4 *)((longlong)param_1 + 0x6c4) = 0x47c35000;
  *(undefined4 *)((longlong)param_1 + 0x6ac) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xa7) = 1;
  *(undefined1 *)(param_1 + 0xb0) = 1;
  *(undefined4 *)((longlong)param_1 + 0x554) = 0x41a00000;
  *(undefined1 *)((longlong)param_1 + 0x7c4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x6cc) = 0x101;
  iVar3 = *(int *)(param_1 + 0xd7);
  lVar8 = (longlong)iVar3;
  *(int *)(param_1 + 0xd7) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x6bc) < iVar3 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (plVar7,iVar3);
  }
  lVar4 = *plVar7;
  *(undefined8 *)(lVar4 + lVar8 * 0x18) = DAT_1469e9868;
  *(undefined8 *)(lVar4 + 8 + lVar8 * 0x18) = DAT_1469e9870;
  lVar5 = DAT_1469e9878;
  *(longlong *)(lVar4 + 0x10 + lVar8 * 0x18) = DAT_1469e9878;
  if (lVar5 != 0) {
    LOCK();
    piVar1 = (int *)(lVar5 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (param_1[0x2d] != 0) {
    pbVar2 = (byte *)(param_1[0x2d] + 0x24c);
    *pbVar2 = *pbVar2 | 8;
  }
  plVar7 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar7 == (longlong *)0x0) {
    if ((DAT_1468b3018 != 0) && (DAT_1468b3010 != (longlong *)0x0)) {
      (**(code **)(*DAT_1468b3010 + 0x28))(DAT_1468b3010,0);
      if (DAT_1468b3010 != (longlong *)0x0) {
        DAT_1468b3010 = (longlong *)FMemory::Realloc(DAT_1468b3010,0,0);
      }
      DAT_1468b3018 = 0;
    }
  }
  else {
    *plVar7 = (longlong)&PTR_GetPoolName_145179768;
    plVar7[1] = (longlong)FUN_142719600;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[3] = lVar8;
    (**(code **)(*plVar7 + 0x30))(plVar7,&DAT_1468b3010);
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    lVar8 = FMemory::Realloc(plVar7,0,0);
    if (lVar8 != 0) {
      FMemory::Free(lVar8);
    }
  }
  *(undefined1 *)(param_1 + 0x105) = 1;
  return param_1;
}



// FUNCTION 1426f53b0 FUN_1426f53b0 body=83 status=ok
// SIG undefined FUN_1426f53b0(void)

undefined8 * FUN_1426f53b0(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_1425acfd0();
  *param_1 = &PTR_FUN_1451771b8;
  param_1[0x8b] = &PTR_LAB_1451778b8;
  param_1[0x90] = 0;
  lVar1 = param_1[0x8c];
  *(undefined4 *)(lVar1 + 0x714) = 0x42200000;
  *(undefined4 *)(lVar1 + 0x710) = 0x42b80000;
  return param_1;
}



// FUNCTION 1426f5410 FUN_1426f5410 body=83 status=ok
// SIG undefined FUN_1426f5410(void)

undefined8 * FUN_1426f5410(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_1425acfd0();
  param_1[0x90] = 0;
  lVar1 = param_1[0x8c];
  *(undefined4 *)(lVar1 + 0x714) = 0x42200000;
  *(undefined4 *)(lVar1 + 0x710) = 0x42b80000;
  *param_1 = &PTR_FUN_1451771b8;
  param_1[0x8b] = &PTR_LAB_1451778b8;
  return param_1;
}



// FUNCTION 1426f5470 FUN_1426f5470 body=384 status=ok
// SIG undefined FUN_1426f5470(void)

undefined8 * FUN_1426f5470(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  
  FUN_141784790(param_2,L"Sprite");
  puVar1 = (undefined8 *)FName::FName(local_res8,L"Sprite",1);
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,*puVar1,0,param_2);
  FUN_1424de090(param_1,param_2);
  *param_1 = &PTR_FUN_145177b28;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x92] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x96] = &PTR_FUN_143f740c8;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  *(ushort *)(param_1 + 0x9c) = *(ushort *)(param_1 + 0x9c) & 0xe000;
  *(byte *)((longlong)param_1 + 0x4e2) = *(byte *)((longlong)param_1 + 0x4e2) & 0xf8;
  *(ushort *)((longlong)param_1 + 0x4e4) = *(ushort *)((longlong)param_1 + 0x4e4) & 0xe000;
  *(byte *)((longlong)param_1 + 0x4e6) = *(byte *)((longlong)param_1 + 0x4e6) & 0xf8;
  *(ushort *)(param_1 + 0x9d) = *(ushort *)(param_1 + 0x9d) & 0xe000;
  *(byte *)((longlong)param_1 + 0x4ea) = *(byte *)((longlong)param_1 + 0x4ea) & 0xf8;
  *(ushort *)((longlong)param_1 + 0x4ec) = *(ushort *)((longlong)param_1 + 0x4ec) & 0xe000;
  *(byte *)((longlong)param_1 + 0x4ee) = *(byte *)((longlong)param_1 + 0x4ee) & 0xf8;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  *(undefined1 *)((longlong)param_1 + 0x95) = 1;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0x67 | 8;
  uVar2 = UEngineMessage::GetPrivateStaticClass();
  param_1[0x92] = uVar2;
  *(uint *)((longlong)param_1 + 0x484) = *(uint *)((longlong)param_1 + 0x484) & 0xffffffbf;
  param_1[0x9b] = 0x11f;
  *(undefined1 *)(param_1 + 0xa3) = 1;
  return param_1;
}



// FUNCTION 1426f55f0 FUN_1426f55f0 body=167 status=ok
// SIG undefined FUN_1426f55f0(void)

undefined8 * FUN_1426f55f0(undefined8 *param_1)

{
  FUN_1428c1a80();
  *param_1 = &PTR_FUN_1451785e0;
  param_1[0x92] = &PTR_LAB_145178d00;
  FUN_142741540(param_1 + 0x94);
  param_1[0x153] = 0;
  (**(code **)(*(longlong *)param_1[0x8e] + 0x640))((longlong *)param_1[0x8e],DAT_146aefc58);
  *(byte *)(param_1[0x8e] + 0x2ee) = *(byte *)(param_1[0x8e] + 0x2ee) | 0x80;
  *(undefined1 *)(param_1[0x8e] + 0x24e) = 2;
  *(uint *)((longlong)param_1 + 0xabc) = *(uint *)((longlong)param_1 + 0xabc) | 1;
  *(undefined4 *)((longlong)param_1 + 0xab4) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x157) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x158) = 0;
  return param_1;
}



// FUNCTION 1426f56a0 FUN_1426f56a0 body=130 status=ok
// SIG undefined FUN_1426f56a0(void)

undefined8 * FUN_1426f56a0(undefined8 *param_1)

{
  FUN_1428c1a80();
  *param_1 = &PTR_FUN_145178d20;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  (**(code **)(*(longlong *)param_1[0x8e] + 0x640))((longlong *)param_1[0x8e],DAT_146aefc58);
  *(uint *)((longlong)param_1 + 0x464) = *(uint *)((longlong)param_1 + 0x464) | 1;
  *(undefined2 *)((longlong)param_1 + 0x45d) = 0x1978;
  *(undefined1 *)((longlong)param_1 + 0x45c) = 0x5a;
  *(undefined1 *)((longlong)param_1 + 0x45f) = 0xff;
  return param_1;
}



// FUNCTION 1426f5730 FUN_1426f5730 body=86 status=ok
// SIG undefined FUN_1426f5730(void)

undefined8 * FUN_1426f5730(undefined8 *param_1)

{
  FUN_1428c1a80();
  *param_1 = &PTR_FUN_1440f1c20;
  (**(code **)(*(longlong *)param_1[0x8e] + 0x640))((longlong *)param_1[0x8e],DAT_146aefc58);
  *(uint *)((longlong)param_1 + 0x464) = *(uint *)((longlong)param_1 + 0x464) | 1;
  *(undefined2 *)((longlong)param_1 + 0x45d) = 0x19ff;
  *(undefined1 *)((longlong)param_1 + 0x45c) = 0x19;
  *(undefined1 *)((longlong)param_1 + 0x45f) = 0xff;
  return param_1;
}



// FUNCTION 1426f5790 FUN_1426f5790 body=138 status=ok
// SIG undefined FUN_1426f5790(void)

undefined8 *
FUN_1426f5790(undefined8 *param_1,undefined8 *param_2,byte param_3,uint param_4,undefined8 param_5)

{
  *param_1 = 0;
  FUN_1426f4440(param_1,*param_2,*(undefined4 *)(param_2 + 1),0,0);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  param_1[3] = param_5;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(uint *)(param_1 + 4) =
       ((uint)param_3 | *(uint *)(param_1 + 4)) & 0xfffffffd | (param_4 & 0xff) * 2;
  return param_1;
}



// FUNCTION 1426f5820 FActiveHapticFeedbackEffect body=68 status=ok
// SIG undefined FActiveHapticFeedbackEffect(void)

undefined8 *
FActiveHapticFeedbackEffect::FActiveHapticFeedbackEffect
          (undefined8 *param_1,longlong *param_2,float param_3,undefined1 param_4)

{
  float fVar1;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_4;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  fVar1 = 0.0;
  if ((0.0 <= param_3) && (fVar1 = param_3, 10.0 <= param_3)) {
    fVar1 = 10.0;
  }
  *(float *)(param_1 + 2) = fVar1;
  (**(code **)(*param_2 + 0x278))(param_2);
  return param_1;
}



// FUNCTION 1426f5870 FPoly body=162 status=ok
// SIG undefined FPoly(void)

undefined8 * FPoly::FPoly(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x25] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x27) = 0x42000000;
  *(uint *)((longlong)param_1 + 0x13c) = *(uint *)((longlong)param_1 + 0x13c) & 0xfffffff0;
  param_1[0x28] = 0x41000000;
  *(undefined4 *)(param_1 + 0x29) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  return param_1;
}



// FUNCTION 1426f5920 FUN_1426f5920 body=54 status=ok
// SIG undefined FUN_1426f5920(void)

undefined8 * FUN_1426f5920(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145177128;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 1426f5960 FUN_1426f5960 body=41 status=ok
// SIG undefined FUN_1426f5960(void)

undefined8 * FUN_1426f5960(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  return param_1;
}



// FUNCTION 1426f5990 FPrecomputedLightVolumeData body=72 status=ok
// SIG undefined FPrecomputedLightVolumeData(void)

undefined1 * FPrecomputedLightVolumeData::FPrecomputedLightVolumeData(undefined1 *param_1)

{
  *param_1 = 0;
  TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::
  TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>
            (param_1 + 0x20,&DAT_1468b5d90,0x49800000);
  TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::
  TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>
            (param_1 + 0xc0,&DAT_1468b5d90,0x49800000);
  return param_1;
}



// FUNCTION 1426f59e0 FPrecomputedVolumetricLightmap body=19 status=ok
// SIG undefined FPrecomputedVolumetricLightmap(void)

undefined8 * FPrecomputedVolumetricLightmap::FPrecomputedVolumetricLightmap(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 1426f5a00 FUN_1426f5a00 body=1237 status=ok
// SIG undefined FUN_1426f5a00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1426f5a00(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  longlong local_e0 [2];
  longlong local_d0;
  longlong local_b8;
  longlong local_a8;
  longlong *local_98;
  int local_90;
  longlong local_88;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  *(undefined1 *)(param_1 + 1) = 0;
  lVar7 = 0;
  *param_1 = &PTR__scalar_deleting_destructor__143f73ca8;
  if (DAT_1468c217e == '\0') {
    if (DAT_1469e6880 == 0) {
      uVar4 = GetTransientPackage();
      FUN_1417846f0(uVar4,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      local_108 = 0;
      uVar5 = UGCObjectReferencer::GetPrivateStaticClass();
      local_118 = 0;
      local_120 = 0;
      local_128 = 0;
      local_130 = 0;
      local_138 = 0;
      DAT_1469e6880 = FUN_1417985e0(uVar5,uVar4,0,0);
      iVar1 = *(int *)(DAT_1469e6880 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar8 = iVar1 >> 0x1f & 0xffff;
        uVar3 = iVar1 + uVar8;
        lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar8) * 0x18;
      }
      *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | 0x40000000;
    }
    UGCObjectReferencer::AddObject(DAT_1469e6880,param_1);
    *(undefined1 *)(param_1 + 1) = 1;
  }
  uVar3 = *(uint *)(param_2 + 0x14);
  *param_1 = &PTR_FUN_1451794a8;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar3 = uVar3 >> 1;
  param_1[6] = 0;
  *(byte *)(param_1 + 8) = (byte)uVar3 & 1;
  uVar4 = FUN_142a2f930();
  puVar6 = (undefined8 *)FName::FName(&local_f8,L"PreviewSceneWorld",1);
  uVar5 = GetTransientPackage();
  FUN_141791c20(&local_e8,uVar5,uVar4,*puVar6);
  uVar4 = GetTransientPackage();
  local_108 = 0;
  if (local_e8 == 0) {
    FUN_1417846f0(uVar4,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar5 = FUN_142a2f930();
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  lVar7 = FUN_1417985e0(uVar5,uVar4,local_e8,uVar3 & 8);
  param_1[6] = lVar7;
  *(uint *)(lVar7 + 0x708) = ~(*(uint *)(param_2 + 0x14) >> 5) & 1 | 4;
  uVar4 = FUN_14286b170(DAT_146b17150,*(undefined4 *)(param_1[6] + 0x708));
  FUN_14288d2f0(uVar4,param_1[6]);
  uVar3 = *(uint *)(param_2 + 0x14);
  FUN_1428cf500(param_1[6],
                ((((uVar3 >> 4 & 1) << 2 | uVar3 >> 3 & 1) << 3 | uVar3 >> 2 & 1) << 2 | uVar3 & 1)
                * 2 | (uint)local_108 & 0xfffffe05 | 0x205);
  uVar4 = FURL::FURL(local_e0,0);
  FUN_1428ced30(param_1[6],uVar4,1);
  plVar2 = local_98;
  iVar1 = local_90;
  if (local_88 != 0) {
    FMemory::Free();
    plVar2 = local_98;
    iVar1 = local_90;
  }
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  if (local_d0 != 0) {
    FMemory::Free();
  }
  if (local_e0[0] != 0) {
    FMemory::Free();
  }
  local_108 = 0;
  uVar4 = GetTransientPackage();
  local_f8 = 0;
  FUN_1417846f0(uVar4,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar5 = UAtmosphericFogComponent::GetPrivateStaticClass();
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  lVar7 = FUN_1417985e0(uVar5,uVar4,0,0x40);
  param_1[2] = lVar7;
  *(undefined4 *)(lVar7 + 0x2e4) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1[2] + 0x2e8) = DAT_1464aa730;
  FRotator::Quaternion(param_2,&local_f8);
  local_68 = local_f8;
  uStack_60 = uStack_f0;
  local_48 = _DAT_146b08ba0 & _DAT_146b08bb0;
  uStack_44 = uRam0000000146b08ba4 & uRam0000000146b08bb4;
  uStack_40 = uRam0000000146b08ba8 & uRam0000000146b08bb8;
  uStack_3c = uRam0000000146b08bac & uRam0000000146b08bbc;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1426f93c0(param_1,param_1[2],&local_68,0);
  local_f8 = 0;
  uVar4 = GetTransientPackage();
  local_108 = 0;
  FUN_1417846f0(uVar4,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar5 = UAtmosphericFogComponent::GetPrivateStaticClass();
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  lVar7 = FUN_1417985e0(uVar5,uVar4,0,0x40);
  param_1[3] = lVar7;
  *(undefined1 *)(lVar7 + 0x31c) = 0;
  *(undefined1 *)(param_1[3] + 0x2f8) = 1;
  *(undefined4 *)(param_1[3] + 0x2e4) = *(undefined4 *)(param_2 + 0xc);
  *(undefined1 *)(param_1[3] + 0x24e) = 2;
  FUN_1426f93c0(param_1,param_1[3],&DAT_1468b5b70,0);
  uVar4 = GetTransientPackage();
  FUN_1417846f0(uVar4,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_f8 = 0;
  uVar5 = UMovieScene3DTransformSection::GetPrivateStaticClass();
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  lVar7 = FUN_1417985e0(uVar5,uVar4,0,0);
  param_1[7] = lVar7;
  *(uint *)(lVar7 + 0x728) = *(uint *)(lVar7 + 0x728) & 0xfffffffe;
  FUN_1426f93c0(param_1,param_1[7],&DAT_1468b5b70,0);
  return param_1;
}



// FUNCTION 1426f5ee0 FUN_1426f5ee0 body=594 status=ok
// SIG undefined FUN_1426f5ee0(void)

undefined8 * FUN_1426f5ee0(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145179440;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = &PTR__scalar_deleting_destructor__145179440;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = &PTR__scalar_deleting_destructor__145179440;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = &PTR__scalar_deleting_destructor__145179440;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = &PTR__scalar_deleting_destructor__145179440;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = &PTR__scalar_deleting_destructor__145179440;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = &PTR__scalar_deleting_destructor__145179440;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = &PTR__scalar_deleting_destructor__145179440;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = &PTR__scalar_deleting_destructor__145179440;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = &PTR__scalar_deleting_destructor__145179440;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = &PTR__scalar_deleting_destructor__145179440;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = &PTR__scalar_deleting_destructor__145179440;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = &PTR__scalar_deleting_destructor__145179440;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = &PTR__scalar_deleting_destructor__145179440;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = &PTR__scalar_deleting_destructor__145179440;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = &PTR__scalar_deleting_destructor__145179440;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = &PTR__scalar_deleting_destructor__145179440;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = &PTR__scalar_deleting_destructor__145179440;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  return param_1;
}



// FUNCTION 1426f6140 FUN_1426f6140 body=42 status=ok
// SIG undefined FUN_1426f6140(void)

undefined8 * FUN_1426f6140(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__145178368;
  FUN_142741540(param_1 + 6);
  return param_1;
}



// FUNCTION 1426f6170 UPrimaryAssetLabel body=91 status=ok
// SIG undefined UPrimaryAssetLabel(void)

undefined8 * UPrimaryAssetLabel::UPrimaryAssetLabel(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UDataAsset::UDataAsset(param_1,uVar1);
  *param_1 = &PTR__scalar_deleting_destructor__1451794d8;
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffc;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 1426f61d0 FUN_1426f61d0 body=129 status=ok
// SIG undefined FUN_1426f61d0(void)

void FUN_1426f61d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_145177b28;
  if (param_1[0xa1] != 0) {
    FMemory::Free();
  }
  if (param_1[0x9f] != 0) {
    FMemory::Free();
  }
  FUN_1404bf980(param_1 + 0x96);
  if (param_1[0x94] != 0) {
    FMemory::Free();
  }
  if (param_1[0x8e] != 0) {
    FMemory::Free();
  }
  if (param_1[0x8c] != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 1426f6260 ~FNode body=130 status=ok
// SIG undefined ~FNode(void)

void TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::FNode::~FNode(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    lVar1 = param_1[(ulonglong)(uVar2 & 7) + 3];
    if (lVar1 != 0) {
      ~FNode(lVar1);
      FMemory::operator_delete(lVar1,0x60);
    }
    if (((byte)uVar2 & 7) < 7) {
      uVar2 = uVar2 ^ (uVar2 + 1 ^ uVar2) & 7;
    }
    else {
      uVar2 = uVar2 | 8;
    }
  } while (uVar2 >> 3 == 0);
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1426f62f0 ~FPositionVertexBuffer body=87 status=ok
// SIG undefined ~FPositionVertexBuffer(void)

void FPositionVertexBuffer::~FPositionVertexBuffer(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__145177128;
  puVar1 = (undefined8 *)param_1[8];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[8] = 0;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  return;
}



// FUNCTION 1426f6350 ~FPrecomputedLightVolumeData body=45 status=ok
// SIG undefined ~FPrecomputedLightVolumeData(void)

void FPrecomputedLightVolumeData::~FPrecomputedLightVolumeData(char *param_1)

{
  if (*param_1 != '\0') {
    FUN_142707ff0();
  }
  TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::FNode::~FNode(param_1 + 0xc0);
  TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::FNode::~FNode(param_1 + 0x20);
  return;
}



// FUNCTION 1426f6380 FUN_1426f6380 body=446 status=ok
// SIG undefined FUN_1426f6380(void)

void FUN_1426f6380(undefined8 *param_1)

{
  longlong *plVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  
  *param_1 = &PTR_FUN_1451794a8;
  if ((DAT_146b17150 != (longlong *)0x0) && (param_1[6] != 0)) {
    lVar4 = UWorld::GetAudioDevice();
    if ((lVar4 != 0) && (lVar5 = FUN_142875430(DAT_146b17150), lVar4 != lVar5)) {
      FUN_1422c9b40(lVar4,param_1[6],0);
    }
    iVar7 = 0;
    if (0 < *(int *)(param_1 + 5)) {
      lVar4 = 0;
      do {
        plVar1 = *(longlong **)(lVar4 + param_1[4]);
        if ((*(char *)(param_1 + 8) != '\0') && (plVar1 != (longlong *)0x0)) {
          lVar5 = FUN_1429bed90();
          if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            (**(code **)(*plVar1 + 0x910))(plVar1,0);
          }
        }
        FUN_142359580(plVar1);
        iVar7 = iVar7 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar7 < *(int *)(param_1 + 5));
    }
    FUN_1428c72b0(param_1[6],1,1,0);
    (**(code **)(*DAT_146b17150 + 0x4a0))(DAT_146b17150,param_1[6]);
    UWorld::MarkObjectsPendingKill(param_1[6]);
    iVar7 = *(int *)(param_1[6] + 0xc);
    if (iVar7 < (int)DAT_1469e91c4) {
      uVar6 = iVar7 >> 0x1f & 0xffff;
      uVar3 = iVar7 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | 0x20000000;
    FUN_1428c8dd0(param_1[6],0,0);
    param_1[6] = 0;
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__143f73ca8;
  if ((DAT_1469e6880 != 0) && (*(char *)(param_1 + 1) != '\0')) {
    UGCObjectReferencer::RemoveObject(DAT_1469e6880,param_1);
    return;
  }
  return;
}



// FUNCTION 1426f6540 FUN_1426f6540 body=363 status=ok
// SIG undefined FUN_1426f6540(void)

void FUN_1426f6540(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x59);
  if (param_1[0x56] != 0) {
    FMemory::Free();
  }
  param_1[0x55] = &PTR_FUN_143f593e8;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x54);
  if (param_1[0x51] != 0) {
    FMemory::Free();
  }
  param_1[0x50] = &PTR_FUN_143f593e8;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x4f);
  if (param_1[0x4c] != 0) {
    FMemory::Free();
  }
  param_1[0x4b] = &PTR_FUN_143f593e8;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x4a);
  if (param_1[0x47] != 0) {
    FMemory::Free();
  }
  lVar2 = 6;
  param_1[0x46] = &PTR_FUN_143f593e8;
  lVar3 = 6;
  puVar1 = param_1 + 0x46;
  do {
    lVar3 = lVar3 + -1;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar1 + -1);
    if (puVar1[-4] != 0) {
      FMemory::Free();
    }
    puVar1[-5] = &PTR_FUN_143f593e8;
    puVar1 = puVar1 + -5;
  } while (lVar3 != 0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x27);
  if (param_1[0x24] != 0) {
    FMemory::Free();
  }
  param_1[0x23] = &PTR_FUN_143f593e8;
  puVar1 = param_1 + 0x23;
  do {
    lVar2 = lVar2 + -1;
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(puVar1 + -1);
    if (puVar1[-4] != 0) {
      FMemory::Free();
    }
    puVar1[-5] = &PTR_FUN_143f593e8;
    puVar1 = puVar1 + -5;
  } while (lVar2 != 0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 4);
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f593e8;
  return;
}



// FUNCTION 1426f66b0 FUN_1426f66b0 body=312 status=ok
// SIG undefined FUN_1426f66b0(void)

longlong * FUN_1426f66b0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_1 != param_2) {
    lVar1 = *param_2;
    iVar3 = (int)param_2[1];
    *(int *)(param_1 + 1) = iVar3;
    if ((iVar3 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1427148d0(param_1,iVar3);
      lVar2 = *param_1;
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        FUN_1426f4e20(lVar2,lVar1);
        lVar2 = lVar2 + 0x140;
        lVar1 = lVar1 + 0x140;
      }
    }
  }
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  *(uint *)(param_1 + 0xb) =
       *(uint *)(param_1 + 0xb) ^ (*(uint *)(param_2 + 0xb) ^ *(uint *)(param_1 + 0xb)) & 0x7fffffff
  ;
  *(uint *)(param_1 + 0xb) =
       (*(uint *)(param_2 + 0xb) ^ *(uint *)(param_1 + 0xb)) & 0x7fffffff ^ *(uint *)(param_2 + 0xb)
  ;
  lVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = lVar1;
  lVar1 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = lVar1;
  lVar1 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = lVar1;
  *(int *)(param_1 + 0x12) = (int)param_2[0x12];
  param_1[0x13] = param_2[0x13];
  return param_1;
}



// FUNCTION 1426f67f0 operator= body=396 status=ok
// SIG undefined operator=(void)

undefined8 * FPoly::operator=(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *_Dst;
  undefined8 *_Src;
  
  *param_1 = *param_2;
  puVar1 = param_1 + 6;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)((longlong)param_1 + 0xc) = *(undefined8 *)((longlong)param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)((longlong)param_1 + 0x24) = *(undefined8 *)((longlong)param_2 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  if (puVar1 != param_2 + 6) {
    iVar2 = *(int *)(param_2 + 0x1f);
    _Src = (undefined8 *)param_2[0x1e];
    *(int *)(param_1 + 0x1f) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0xfc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
    }
    else {
      TArray<FVector,TInlineAllocator<16,FDefaultAllocator>_>::ResizeForCopy(puVar1,iVar2);
      if (_Src == (undefined8 *)0x0) {
        _Src = param_2 + 6;
      }
      _Dst = (undefined8 *)param_1[0x1e];
      if ((undefined8 *)param_1[0x1e] == (undefined8 *)0x0) {
        _Dst = puVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(longlong)iVar2 * 0xc);
    }
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)((longlong)param_2 + 300);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)((longlong)param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_2 + 0x27);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x144);
  *(undefined8 *)((longlong)param_1 + 0x13c) = *(undefined8 *)((longlong)param_2 + 0x13c);
  *(undefined8 *)((longlong)param_1 + 0x144) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x14c) = *(undefined8 *)((longlong)param_2 + 0x14c);
  return param_1;
}



// FUNCTION 1426f6980 FUN_1426f6980 body=171 status=ok
// SIG undefined FUN_1426f6980(void)

longlong * FUN_1426f6980(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  char local_res8 [8];
  
  local_res8[0] = *param_2 != 0;
  (**(code **)(*param_1 + 8))(param_1,local_res8);
  if (local_res8[0] != '\0') {
    if ((*(byte *)(param_1 + 5) & 1) == 0) {
      puVar1 = (undefined1 *)*param_2;
    }
    else {
      puVar1 = (undefined1 *)operator_new(0x160);
      if (puVar1 == (undefined1 *)0x0) {
        puVar1 = (undefined1 *)0x0;
        *param_2 = 0;
      }
      else {
        *puVar1 = 0;
        TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::
        TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>
                  (puVar1 + 0x20,&DAT_1468b5d90,0x49800000);
        TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::
        TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>
                  (puVar1 + 0xc0,&DAT_1468b5d90,0x49800000);
        *param_2 = (longlong)puVar1;
      }
    }
    FUN_1426f75d0(param_1,puVar1);
  }
  return param_1;
}



// FUNCTION 1426f6a30 FUN_1426f6a30 body=191 status=ok
// SIG undefined FUN_1426f6a30(void)

longlong * FUN_1426f6a30(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  char local_res8 [8];
  
  local_res8[0] = *param_2 != 0;
  (**(code **)(*param_1 + 8))(param_1,local_res8);
  if (local_res8[0] != '\0') {
    if ((*(byte *)(param_1 + 5) & 1) == 0) {
      puVar1 = (undefined8 *)*param_2;
    }
    else {
      puVar1 = (undefined8 *)operator_new(0x360);
      if (puVar1 == (undefined8 *)0x0) {
        *param_2 = 0;
      }
      else {
        *(undefined4 *)(puVar1 + 1) = 4;
        puVar1[2] = 0;
        puVar1[3] = 0;
        *puVar1 = &PTR_FUN_145179468;
        *(undefined1 *)(puVar1 + 5) = 0;
        puVar1[0xb] = &PTR__scalar_deleting_destructor__145179440;
        puVar1[0xc] = 0;
        puVar1[0xd] = 0;
        puVar1[0xe] = 0;
        puVar1[0xf] = 0;
        FUN_1426f5ee0(puVar1 + 0x12);
        *param_2 = (longlong)puVar1;
      }
    }
    FUN_1426f8320(param_1,puVar1);
  }
  return param_1;
}



// FUNCTION 1426f6af0 FUN_1426f6af0 body=591 status=ok
// SIG undefined FUN_1426f6af0(void)

longlong * FUN_1426f6af0(longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  byte local_res8 [8];
  
  local_res8[0] = (byte)*param_2 & 1;
  (**(code **)(*param_1 + 8))(param_1,local_res8);
  *param_2 = *param_2 ^ ((uint)local_res8[0] ^ *param_2) & 1;
  local_res8[0] = (byte)(*param_2 >> 1) & 1;
  (**(code **)(*param_1 + 8))(param_1,local_res8);
  *param_2 = *param_2 ^ ((uint)local_res8[0] * 2 ^ *param_2) & 2;
  puVar2 = *(uint **)param_1[1];
  if ((uint *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 5,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 5,4);
    }
  }
  else {
    param_2[5] = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  local_res8[0] = (byte)(*param_2 >> 2) & 1;
  (**(code **)(*param_1 + 8))(param_1,local_res8);
  uVar1 = *param_2;
  *param_2 = ((uint)local_res8[0] << 2 ^ *param_2) & 4 ^ uVar1;
  if (0x1cc < (int)param_1[8]) {
    local_res8[0] = (byte)(uVar1 >> 3) & 1;
    (**(code **)(*param_1 + 8))(param_1,local_res8);
    *param_2 = *param_2 ^ ((uint)local_res8[0] << 3 ^ *param_2) & 8;
  }
  puVar2 = *(uint **)param_1[1];
  if ((uint *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 1,4);
    }
  }
  else {
    param_2[1] = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(uint **)param_1[1];
  if ((uint *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 2,4);
    }
  }
  else {
    param_2[2] = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(uint **)param_1[1];
  if ((uint *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 3,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 3,4);
    }
  }
  else {
    param_2[3] = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(uint **)param_1[1];
  if (puVar2 + 1 <= (uint *)((undefined8 *)param_1[1])[1]) {
    param_2[4] = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    return param_1;
  }
  (**(code **)(*param_1 + 0x50))(param_1,param_2 + 4,4);
  if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_1,param_2 + 4,4);
  }
  return param_1;
}



// FUNCTION 1426f6d40 FUN_1426f6d40 body=469 status=ok
// SIG undefined FUN_1426f6d40(void)

longlong * FUN_1426f6d40(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 7,(longlong)*(int *)((longlong)param_2 + 0xc) << 7
            );
  puVar6 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if ((((char)bVar1 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x20000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
    return param_1;
  }
  if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1426f7330(param_1,(longlong)(int)puVar6 * 0x80 + *param_2);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,local_res8[0]);
  }
  puVar8 = puVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
                (param_2,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x80 + *param_2);
    puVar5 = puVar6;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      puVar4[0xc] = 0;
      puVar4[0xd] = 0;
      *(undefined2 *)((longlong)puVar4 + 0x71) = 0x7f7f;
      *(undefined1 *)(puVar4 + 0xe) = 0xff;
      *(undefined1 *)((longlong)puVar4 + 0x73) = 0xff;
      *(undefined4 *)((longlong)puVar4 + 0x74) = 0x3f800000;
      puVar5 = puVar4;
    }
    FUN_1426f7330(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined8 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 1426f6f20 FUN_1426f6f20 body=492 status=ok
// SIG undefined FUN_1426f6f20(void)

longlong * FUN_1426f6f20(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x140,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x140);
  iVar6 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar2 = (longlong *)param_1[1];
  if ((int *)plVar2[1] < (int *)*plVar2 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if ((((char)bVar1 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0xcccc < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
    return param_1;
  }
  if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1426f7480(param_1,(longlong)iVar6 * 0x140 + *param_2);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    FUN_141d4c320(param_2);
  }
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    lVar3 = param_2[1];
    iVar4 = (int)lVar3 + 1;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      FUN_1407d8cb0(param_2);
    }
    puVar5 = (undefined8 *)((longlong)(int)lVar3 * 0x140 + *param_2);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
      _guard_xfg_dispatch_icall_nop(puVar5 + 2,0,0x90);
      _guard_xfg_dispatch_icall_nop(puVar5 + 0x14,0,0x90);
      *(undefined2 *)((longlong)puVar5 + 0x131) = 0x7f7f;
      *(undefined1 *)(puVar5 + 0x26) = 0xff;
      *(undefined1 *)((longlong)puVar5 + 0x133) = 0xff;
      *(undefined4 *)((longlong)puVar5 + 0x134) = 0x3f800000;
    }
    FUN_1426f7480(param_1);
    iVar6 = iVar6 + 1;
  } while (iVar6 < local_res8[0]);
  return param_1;
}



// FUNCTION 1426f7110 FUN_1426f7110 body=391 status=ok
// SIG undefined FUN_1426f7110(void)

longlong * FUN_1426f7110(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x158,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x158);
  uVar5 = 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if ((((char)bVar1 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0xbe82 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
    return param_1;
  }
  if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        FUN_1425b12c0(param_1,(longlong)(int)uVar5 * 0x158 + *param_2);
        uVar6 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar6;
      } while ((int)uVar6 < (int)param_2[1]);
    }
    return param_1;
  }
  TArray<FPoly,FDefaultAllocator>::Empty(param_2,local_res8[0]);
  uVar7 = uVar5;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<FPoly,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    uVar4 = uVar5;
    if ((longlong)iVar2 * 0x158 + *param_2 != 0) {
      uVar4 = FPoly::FPoly();
    }
    FUN_1425b12c0(param_1,uVar4);
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
  } while ((int)uVar6 < local_res8[0]);
  return param_1;
}



// FUNCTION 1426f72a0 FUN_1426f72a0 body=133 status=ok
// SIG undefined FUN_1426f72a0(void)

longlong * FUN_1426f72a0(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  lVar2 = 4;
  do {
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2,4);
      }
    }
    else {
      *param_2 = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    param_2 = param_2 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return param_1;
}



// FUNCTION 1426f7330 FUN_1426f7330 body=327 status=ok
// SIG undefined FUN_1426f7330(void)

longlong * FUN_1426f7330(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_1406da970();
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0xc,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0xc,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  uVar3 = FUN_1426f72a0(param_1,param_2 + 0x10);
  uVar3 = FUN_1426f72a0(uVar3,param_2 + 0x20);
  FUN_1426f72a0(uVar3,param_2 + 0x30);
  if (3 < *(int *)((longlong)param_1 + 0x44)) {
    uVar3 = FUN_1426f72a0(param_1,param_2 + 0x40);
    uVar3 = FUN_1426f72a0(uVar3,param_2 + 0x50);
    FUN_1426f72a0(uVar3,param_2 + 0x60);
  }
  iVar2 = (int)param_1[8];
  if (0x159 < iVar2) {
    FUN_140871cc0(param_1,param_2 + 0x70);
    iVar2 = (int)param_1[8];
  }
  if (0x127 < iVar2) {
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x74,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,param_2 + 0x74,4);
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x74) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
  }
  return param_1;
}



// FUNCTION 1426f7480 FUN_1426f7480 body=322 status=ok
// SIG undefined FUN_1426f7480(void)

longlong * FUN_1426f7480(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  FUN_1406da970();
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0xc,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0xc,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0xc) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  uVar2 = FUN_1423a1500(param_1,param_2 + 0x10);
  uVar2 = FUN_1423a1500(uVar2,param_2 + 0x40);
  FUN_1423a1500(uVar2,param_2 + 0x70);
  if (3 < *(int *)((longlong)param_1 + 0x44)) {
    uVar2 = FUN_1423a1500(param_1,param_2 + 0xa0);
    uVar2 = FUN_1423a1500(uVar2,param_2 + 0xd0);
    FUN_1423a1500(uVar2,param_2 + 0x100);
  }
  FUN_140871cc0(param_1,param_2 + 0x130);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x134,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x134,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x134) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1426f75d0 FUN_1426f75d0 body=3393 status=ok
// SIG undefined FUN_1426f75d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1426f75d0(longlong *param_1,char *param_2)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  DWORD DVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  char *pcVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_1a88 [32];
  char local_1a68 [4];
  undefined4 local_1a64;
  undefined4 local_1a60 [2];
  undefined8 local_1a58;
  float local_1a50;
  longlong local_1a48;
  uint local_1a40;
  int iStack_1a3c;
  longlong *local_1a38;
  char *local_1a30;
  undefined8 local_1a28;
  float local_1a20;
  float fStack_1a1c;
  float fStack_1a18;
  float fStack_1a14;
  float local_1a10;
  float fStack_1a0c;
  undefined4 local_1a08 [2];
  char *local_1a00;
  longlong local_19f8;
  ulonglong local_19f0;
  undefined8 local_19e8;
  undefined8 uStack_19e0;
  undefined4 local_19b8;
  undefined4 uStack_19b4;
  undefined4 uStack_19b0;
  undefined4 uStack_19ac;
  longlong *local_19a8;
  undefined8 uStack_19a0;
  undefined8 local_1998;
  undefined8 uStack_1990;
  undefined8 local_1988;
  undefined8 uStack_1980;
  undefined8 local_1978;
  undefined8 uStack_1970;
  undefined1 local_1968 [6336];
  undefined1 *local_a8;
  undefined8 local_98;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_1a88;
  local_1a38 = param_1;
  local_1a00 = param_2;
  FArchive::UsingCustomVersion(param_1,&DAT_1464b00e8);
  if ((*(byte *)((longlong)param_1 + 0x2a) & 0x20) != 0) {
    iVar4 = FUN_142707ff0(param_2);
    (**(code **)(*param_1 + 0x78))(param_1,(longlong)iVar4,(longlong)iVar4);
    return param_1;
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    local_1a68[0] = '\0';
    (**(code **)(*param_1 + 8))(param_1,local_1a68);
    if (local_1a68[0] == '\0') {
      return param_1;
    }
    uVar7 = FUN_1406da970(param_1,&local_1a20);
    plVar8 = (longlong *)FUN_1406da970(uVar7,&fStack_1a14);
    puVar12 = *(undefined1 **)plVar8[1];
    if ((undefined1 *)((undefined8 *)plVar8[1])[1] < puVar12 + 1) {
      (**(code **)(*plVar8 + 0x50))(plVar8,local_1a08,1);
    }
    else {
      local_1a08[0] = CONCAT31(local_1a08[0]._1_3_,*puVar12);
      *(longlong *)plVar8[1] = *(longlong *)plVar8[1] + 1;
    }
    plVar8 = (longlong *)param_1[1];
    local_1a60[0] = 0;
    if ((undefined4 *)plVar8[1] < (undefined4 *)*plVar8 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_1a60,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_1a60,4);
      }
    }
    else {
      local_1a60[0] = *(undefined4 *)*plVar8;
      *plVar8 = *plVar8 + 4;
    }
    pcVar19 = param_2 + 0x20;
    pcVar1 = param_2 + 0xc0;
    local_1a30 = pcVar19;
    if (*param_2 != '\0') {
      FUN_142707ff0(param_2);
      TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::Destroy(pcVar19);
      TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::Destroy(pcVar1);
    }
    *(float *)(param_2 + 4) = local_1a20;
    *(float *)(param_2 + 8) = fStack_1a1c;
    *(float *)(param_2 + 0xc) = fStack_1a18;
    *(float *)(param_2 + 0x10) = fStack_1a14;
    *param_2 = '\x01';
    *(ulonglong *)(param_2 + 0x14) = CONCAT44(fStack_1a0c,local_1a10);
    *(undefined4 *)(param_2 + 0x1c) = local_1a08[0];
    fVar23 = (local_1a10 - fStack_1a1c) * 0.5;
    fVar25 = (fStack_1a0c - fStack_1a18) * 0.5;
    fVar24 = (fStack_1a14 - local_1a20) * 0.5;
    local_1a50 = (fStack_1a18 + fStack_1a0c) * 0.5;
    if (fVar24 <= fVar23) {
      fVar24 = fVar23;
    }
    if (fVar24 <= fVar25) {
      fVar24 = fVar25;
    }
    local_1a58 = CONCAT44((fStack_1a1c + local_1a10) * 0.5,(local_1a20 + fStack_1a14) * 0.5);
    uVar7 = TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::
            TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>
                      (&local_19a8,&local_1a58,fVar24);
    FUN_1426f66b0(pcVar19,uVar7);
    TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::FNode::~FNode(&local_19a8);
    fVar23 = (local_1a10 - fStack_1a1c) * 0.5;
    fVar24 = (fStack_1a14 - local_1a20) * 0.5;
    fVar25 = (fStack_1a0c - fStack_1a18) * 0.5;
    if (fVar24 <= fVar23) {
      fVar24 = fVar23;
    }
    local_1a50 = (fStack_1a18 + fStack_1a0c) * 0.5;
    if (fVar24 <= fVar25) {
      fVar24 = fVar25;
    }
    local_1a58 = CONCAT44((fStack_1a1c + local_1a10) * 0.5,(local_1a20 + fStack_1a14) * 0.5);
    uVar7 = TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::
            TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>
                      (&local_19a8,&local_1a58,fVar24);
    FUN_1426f66b0(pcVar1,uVar7);
    TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::FNode::~FNode(&local_19a8);
    local_1a64 = 4;
    iVar4 = FArchive::CustomVer(param_1,&DAT_1464b00e8);
    if (0 < iVar4) {
      plVar8 = (longlong *)param_1[1];
      if ((undefined4 *)plVar8[1] < (undefined4 *)*plVar8 + 1) {
        (**(code **)(*param_1 + 0x50))(param_1,&local_1a64,4);
        if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_1,&local_1a64,4);
        }
      }
      else {
        local_1a64 = *(undefined4 *)*plVar8;
        *plVar8 = *plVar8 + 4;
      }
    }
    local_19f8 = 0;
    local_19f0 = 0;
    FUN_142710980(param_1,local_1a64,&local_19f8);
    cVar3 = FUN_142865d40(DAT_1464c9c14);
    if ((cVar3 != '\0') && (0 < (int)local_19f0)) {
      uVar22 = local_19f0 & 0xffffffff;
      lVar21 = local_19f8;
      do {
        FUN_1426f94d0(pcVar19,lVar21,pcVar19,param_2 + 0x80);
        lVar21 = lVar21 + 0x140;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
    local_1a48 = 0;
    local_1a40 = 0;
    iStack_1a3c = 0;
    if (0x127 < (int)param_1[8]) {
      FUN_142710980(param_1,local_1a64,&local_1a48);
    }
    uVar16 = local_1a40;
    lVar21 = local_1a48;
    cVar3 = FUN_142865d40(DAT_1464c9c14);
    if ((cVar3 == '\0') && (0 < (int)uVar16)) {
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      local_1a58 = (ulonglong)uVar16;
      do {
        if ((*(int *)(lVar2 + 0x38) < DAT_146b08ed8) &&
           (_Init_thread_header(&DAT_146b08ed8), DAT_146b08ed8 == -1)) {
          if (DAT_1468b1f88 == (longlong *)0x0) {
            IConsoleManager::SetupSingleton();
          }
          plVar8 = (longlong *)
                   (**(code **)(*DAT_1468b1f88 + 0x98))
                             (DAT_1468b1f88,L"r.SupportLowQualityLightmaps");
          lVar10 = 0;
          if (plVar8 != (longlong *)0x0) {
            lVar10 = (**(code **)(*plVar8 + 0x38))(plVar8);
          }
          DAT_146b08ed0 = lVar10;
          _Init_thread_footer(&DAT_146b08ed8);
        }
        lVar10 = DAT_146b08ed0;
        if (DAT_146b08ed0 == 0) {
LAB_1426f7a84:
          FUN_1426f94d0(pcVar1,lVar21,pcVar1,param_2 + 0x120);
        }
        else {
          cVar3 = FUN_1415ad720(&DAT_1468e2448);
          if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
            DVar5 = GetCurrentThreadId();
            lVar9 = 4;
            if (DVar5 == DAT_1468c21c0) goto LAB_1426f7a7b;
          }
          else {
LAB_1426f7a7b:
            lVar9 = 0;
          }
          if (*(int *)(lVar10 + lVar9) != 0) goto LAB_1426f7a84;
        }
        lVar21 = lVar21 + 0x140;
        local_1a58 = local_1a58 - 1;
      } while (local_1a58 != 0);
      local_1a58 = 0;
      param_1 = local_1a38;
      pcVar19 = local_1a30;
    }
    TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::FNode::ShrinkElements(pcVar19);
    TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::FNode::ShrinkElements(pcVar1);
    FUN_142707ff0(local_1a00);
    lVar21 = local_19f8;
    if (local_1a48 != 0) {
      FMemory::Free();
      lVar21 = local_19f8;
    }
    goto LAB_1426f81d1;
  }
  if ((*(byte *)(param_1 + 5) & 2) == 0) {
    return param_1;
  }
  (**(code **)(*param_1 + 8))(param_1,param_2);
  if (*param_2 == '\0') {
    return param_1;
  }
  FUN_1408bcfd0(param_1,param_2 + 4);
  plVar8 = (longlong *)param_1[1];
  local_1a60[0] = 0;
  if ((undefined4 *)plVar8[1] < (undefined4 *)*plVar8 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_1a60,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_1a60,4);
    }
  }
  else {
    local_1a60[0] = *(undefined4 *)*plVar8;
    *plVar8 = *plVar8 + 4;
  }
  plVar8 = (longlong *)param_1[1];
  local_1a64 = 9;
  if ((undefined4 *)plVar8[1] < (undefined4 *)*plVar8 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,&local_1a64,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,&local_1a64,4);
    }
  }
  else {
    local_1a64 = *(undefined4 *)*plVar8;
    *plVar8 = *plVar8 + 4;
  }
  plVar8 = (longlong *)param_1[0xe];
  uVar16 = 0;
  local_1a48 = 0;
  local_1a40 = 0;
  iStack_1a3c = 0;
  if ((plVar8 == (longlong *)0x0) ||
     (cVar3 = (**(code **)(*plVar8 + 0xc0))(plVar8,3), cVar3 != '\0')) {
    local_19a8 = (longlong *)(param_2 + 0x20);
    local_1998 = *(undefined8 *)(param_2 + 0x80);
    uStack_1990 = *(undefined8 *)(param_2 + 0x88);
    local_1988 = *(undefined8 *)(param_2 + 0x90);
    uStack_1980 = *(undefined8 *)(param_2 + 0x98);
    local_1978 = *(undefined8 *)(param_2 + 0xa0);
    uStack_1970 = *(undefined8 *)(param_2 + 0xa8);
    local_a8 = (undefined1 *)0x0;
    local_98 = 0;
    do {
      plVar8 = local_19a8;
      iVar4 = 0;
      uVar15 = (uint)local_1a58 & 0xfffffff0;
      do {
        if ((plVar8[(ulonglong)(uVar15 & 7) + 3] != 0) &&
           ((*(uint *)(plVar8[(ulonglong)(uVar15 & 7) + 3] + 0x58) & 0x7fffffff) != 0)) {
          TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::
          TConstIterator<TInlineAllocator<99,FDefaultAllocator>_>::PushChild(&local_19a8,uVar15);
        }
        if (((byte)uVar15 & 7) < 7) {
          uVar15 = uVar15 ^ (uVar15 + 1 ^ uVar15) & 7;
        }
        else {
          uVar15 = uVar15 | 8;
        }
      } while ((uVar15 >> 3 & 1) == 0);
      local_1a58 = CONCAT44(local_1a58._4_4_,uVar15);
      lVar21 = local_1a48;
      iVar6 = iStack_1a3c;
      for (; (-1 < iVar4 && (iVar4 < (int)plVar8[1])); iVar4 = iVar4 + 1) {
        lVar10 = (longlong)(int)uVar16;
        local_1a40 = uVar16 + 1;
        lVar2 = *plVar8;
        if (iVar6 < (int)local_1a40) {
          FUN_1407d8cb0(&local_1a48,uVar16);
          lVar21 = local_1a48;
          iVar6 = iStack_1a3c;
        }
        uVar16 = local_1a40;
        FUN_1426f4e20(lVar10 * 0x140 + lVar21,(longlong)iVar4 * 0x140 + lVar2);
      }
      if ((uint)local_98 == 0) {
        local_19e8 = 0;
        local_19a8 = (longlong *)0x0;
        uStack_19a0 = uStack_19e0;
        local_1978 = CONCAT44(uStack_19b4,local_19b8);
        uStack_1970 = CONCAT44(uStack_19ac,uStack_19b0);
        local_1998 = 0;
        uStack_1990 = 0x3f80000000000000;
        local_1988 = 0;
        uStack_1980 = 0x3f80000000000000;
      }
      else {
        iVar4 = (uint)local_98 + -1;
        puVar12 = local_1968;
        if (local_a8 != (undefined1 *)0x0) {
          puVar12 = local_a8;
        }
        lVar21 = (longlong)iVar4 * 0x40;
        local_19a8 = *(longlong **)(puVar12 + lVar21);
        uStack_19a0 = *(undefined8 *)((longlong)(puVar12 + lVar21) + 8);
        local_1998 = *(undefined8 *)(puVar12 + lVar21 + 0x10);
        uStack_1990 = *(undefined8 *)((longlong)(puVar12 + lVar21 + 0x10) + 8);
        local_1988 = *(undefined8 *)(puVar12 + lVar21 + 0x20);
        uStack_1980 = *(undefined8 *)((longlong)(puVar12 + lVar21 + 0x20) + 8);
        local_1978 = *(undefined8 *)(puVar12 + lVar21 + 0x30);
        uStack_1970 = *(undefined8 *)((longlong)(puVar12 + lVar21 + 0x30) + 8);
        iVar6 = ((uint)local_98 - iVar4) + -1;
        if (iVar6 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (puVar12 + (longlong)iVar4 * 0x40,puVar12 + (longlong)(int)(uint)local_98 * 0x40
                     ,(longlong)iVar6 << 6);
        }
        local_98 = CONCAT44(local_98._4_4_,(uint)local_98 + -1);
        TArray<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference,TInlineAllocator<99,FDefaultAllocator>_>
        ::ResizeShrink(local_1968);
      }
    } while (local_19a8 != (longlong *)0x0);
    param_1 = local_1a38;
    param_2 = local_1a00;
    if (local_a8 != (undefined1 *)0x0) {
      FMemory::Free();
      param_1 = local_1a38;
      param_2 = local_1a00;
    }
  }
  uVar22 = 0;
  FUN_1426f6f20(param_1,&local_1a48);
  plVar8 = (longlong *)param_1[0xe];
  local_1a30 = (char *)0x0;
  local_1a28 = 0;
  if ((plVar8 == (longlong *)0x0) ||
     (cVar3 = (**(code **)(*plVar8 + 0xc0))(plVar8,4), cVar3 != '\0')) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146b08ec8) &&
       (_Init_thread_header(&DAT_146b08ec8), DAT_146b08ec8 == -1)) {
      if (DAT_1468b1f88 == (longlong *)0x0) {
        IConsoleManager::SetupSingleton();
      }
      plVar8 = (longlong *)
               (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.SupportLowQualityLightmaps");
      uVar11 = uVar22;
      if (plVar8 != (longlong *)0x0) {
        uVar11 = (**(code **)(*plVar8 + 0x38))(plVar8);
      }
      DAT_146b08ec0 = uVar11;
      _Init_thread_footer(&DAT_146b08ec8);
    }
    uVar11 = DAT_146b08ec0;
    if (DAT_146b08ec0 != 0) {
      cVar3 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar3 != '\0') || (DAT_1468c21ae == '\0')) ||
         (DVar5 = GetCurrentThreadId(), uVar17 = 4, DVar5 == DAT_1468c21c0)) {
        uVar17 = uVar22;
      }
      if (*(int *)(uVar11 + uVar17) == 0) goto LAB_1426f81b0;
    }
    local_19a8 = (longlong *)(param_2 + 0xc0);
    local_1998 = *(undefined8 *)(param_2 + 0x120);
    uStack_1990 = *(undefined8 *)(param_2 + 0x128);
    local_1988 = *(undefined8 *)(param_2 + 0x130);
    uStack_1980 = *(undefined8 *)(param_2 + 0x138);
    local_1978 = *(undefined8 *)(param_2 + 0x140);
    uStack_1970 = *(undefined8 *)(param_2 + 0x148);
    local_a8 = (undefined1 *)0x0;
    local_98 = 0;
    uVar11 = uVar22;
    do {
      plVar8 = local_19a8;
      plVar18 = (longlong *)0x0;
      uVar16 = (uint)local_1a58 & 0xfffffff0;
      do {
        if ((plVar8[(ulonglong)(uVar16 & 7) + 3] != 0) &&
           ((*(uint *)(plVar8[(ulonglong)(uVar16 & 7) + 3] + 0x58) & 0x7fffffff) != 0)) {
          iVar4 = (int)uVar11 + 1;
          local_98 = CONCAT44(local_98._4_4_,iVar4);
          if (local_98._4_4_ < iVar4) {
            TArray<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference,TInlineAllocator<99,FDefaultAllocator>_>
            ::ResizeGrow(local_1968,uVar11);
          }
          puVar12 = local_1968;
          if (local_a8 != (undefined1 *)0x0) {
            puVar12 = local_a8;
          }
          plVar13 = (longlong *)(puVar12 + (longlong)(int)uVar11 * 0x40);
          plVar14 = plVar18;
          if (plVar13 != (longlong *)0x0) {
            plVar13[2] = 0;
            *(undefined4 *)(plVar13 + 3) = 0;
            *(undefined8 *)((longlong)plVar13 + 0x1c) = 0x3f800000;
            *(undefined8 *)((longlong)plVar13 + 0x24) = 0;
            *(undefined4 *)((longlong)plVar13 + 0x2c) = 0x3f800000;
            *plVar13 = 0;
            plVar14 = plVar13;
          }
          *plVar14 = local_19a8[(ulonglong)(uVar16 & 7) + 3];
          *(float *)(plVar14 + 2) =
               local_1978._4_4_ * *(float *)(&DAT_146534f00 + (ulonglong)(uVar16 & 1) * 4) +
               (float)local_1998;
          *(float *)((longlong)plVar14 + 0x14) =
               local_1978._4_4_ * *(float *)(&DAT_146534f00 + (ulonglong)(uVar16 >> 1 & 1) * 4) +
               local_1998._4_4_;
          fVar24 = *(float *)(&DAT_146534f00 + (ulonglong)(uVar16 >> 2 & 1) * 4);
          *(undefined4 *)((longlong)plVar14 + 0x1c) = 0;
          *(float *)(plVar14 + 3) = local_1978._4_4_ * fVar24 + (float)uStack_1990;
          *(float *)(plVar14 + 4) = (float)local_1978;
          *(float *)((longlong)plVar14 + 0x24) = (float)local_1978;
          *(float *)(plVar14 + 5) = (float)local_1978;
          *(undefined4 *)((longlong)plVar14 + 0x2c) = 0;
          fVar24 = (float)local_1978 * 0.5 * 1.0625;
          *(float *)(plVar14 + 6) = fVar24;
          *(float *)((longlong)plVar14 + 0x34) = (float)local_1978 - fVar24;
          uVar11 = local_98 & 0xffffffff;
        }
        if (((byte)uVar16 & 7) < 7) {
          uVar16 = uVar16 ^ (uVar16 + 1 ^ uVar16) & 7;
        }
        else {
          uVar16 = uVar16 | 8;
        }
      } while ((uVar16 >> 3 & 1) == 0);
      local_1a58 = CONCAT44(local_1a58._4_4_,uVar16);
      pcVar19 = local_1a30;
      iVar4 = local_1a28._4_4_;
      while ((iVar6 = (int)plVar18, -1 < iVar6 && (iVar6 < (int)plVar8[1]))) {
        iVar20 = (int)uVar22;
        uVar16 = iVar20 + 1;
        lVar21 = *plVar8;
        local_1a28 = CONCAT44(local_1a28._4_4_,uVar16);
        if (iVar4 < (int)uVar16) {
          FUN_1407d8cb0(&local_1a30,uVar22);
          pcVar19 = local_1a30;
          iVar4 = local_1a28._4_4_;
          uVar16 = (uint)local_1a28;
        }
        uVar22 = (ulonglong)uVar16;
        FUN_1426f4e20(pcVar19 + (longlong)iVar20 * 0x140,(longlong)iVar6 * 0x140 + lVar21);
        plVar18 = (longlong *)(ulonglong)(iVar6 + 1);
      }
      if ((uint)local_98 == 0) {
        local_19e8 = 0;
        local_19a8 = (longlong *)0x0;
        uStack_19a0 = uStack_19e0;
        local_1978 = CONCAT44(uStack_19b4,local_19b8);
        uStack_1970 = CONCAT44(uStack_19ac,uStack_19b0);
        local_1998 = 0;
        uStack_1990 = 0x3f80000000000000;
        local_1988 = 0;
        uStack_1980 = 0x3f80000000000000;
        uVar16 = 0;
      }
      else {
        iVar4 = (uint)local_98 + -1;
        puVar12 = local_1968;
        if (local_a8 != (undefined1 *)0x0) {
          puVar12 = local_a8;
        }
        lVar21 = (longlong)iVar4 * 0x40;
        local_19a8 = *(longlong **)(puVar12 + lVar21);
        uStack_19a0 = *(undefined8 *)((longlong)(puVar12 + lVar21) + 8);
        local_1998 = *(undefined8 *)(puVar12 + lVar21 + 0x10);
        uStack_1990 = *(undefined8 *)((longlong)(puVar12 + lVar21 + 0x10) + 8);
        local_1988 = *(undefined8 *)(puVar12 + lVar21 + 0x20);
        uStack_1980 = *(undefined8 *)((longlong)(puVar12 + lVar21 + 0x20) + 8);
        local_1978 = *(undefined8 *)(puVar12 + lVar21 + 0x30);
        uStack_1970 = *(undefined8 *)((longlong)(puVar12 + lVar21 + 0x30) + 8);
        iVar6 = ((uint)local_98 - iVar4) + -1;
        if (iVar6 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (puVar12 + (longlong)iVar4 * 0x40,puVar12 + (longlong)(int)(uint)local_98 * 0x40
                     ,(longlong)iVar6 << 6);
        }
        local_98 = CONCAT44(local_98._4_4_,(uint)local_98 + -1);
        TArray<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference,TInlineAllocator<99,FDefaultAllocator>_>
        ::ResizeShrink(local_1968);
        uVar16 = (uint)local_98;
      }
      uVar11 = (ulonglong)uVar16;
    } while (local_19a8 != (longlong *)0x0);
    param_1 = local_1a38;
    if (local_a8 != (undefined1 *)0x0) {
      FMemory::Free();
      param_1 = local_1a38;
    }
  }
LAB_1426f81b0:
  FUN_1426f6f20(param_1,&local_1a30);
  lVar21 = local_1a48;
  if (local_1a30 != (char *)0x0) {
    FMemory::Free();
    lVar21 = local_1a48;
  }
LAB_1426f81d1:
  if (lVar21 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1426f8320 FUN_1426f8320 body=1077 status=ok
// SIG undefined FUN_1426f8320(void)

longlong * FUN_1426f8320(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined **local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18 [2];
  
  uVar8 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b08f00) && (_Init_thread_header(&DAT_146b08f00), DAT_146b08f00 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar6 = (longlong *)
             (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.FullQualitySphericalHarmonics");
    uVar7 = uVar8;
    if (plVar6 != (longlong *)0x0) {
      uVar7 = (**(code **)(*plVar6 + 0x38))(plVar6);
    }
    DAT_146b08ef8 = uVar7;
    _Init_thread_footer(&DAT_146b08f00);
  }
  uVar7 = DAT_146b08ef8;
  if (((*(byte *)(param_1 + 5) & 2) == 0) || (DAT_146b08ef8 == 0)) goto LAB_1426f83e4;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    uVar5 = 4;
    if (DVar3 == DAT_1468c21c0) goto LAB_1426f83b1;
  }
  else {
LAB_1426f83b1:
    uVar5 = uVar8;
  }
  if (*(int *)(uVar5 + uVar7) == 0) {
    FUN_1427147f0(param_2 + 0x1f8,0);
    FUN_1427147f0(param_2 + 0x248,0);
    FUN_1427147f0(param_2 + 0x298,0);
  }
LAB_1426f83e4:
  FArchive::UsingCustomVersion(param_1,&DAT_1464b0098);
  FUN_1408bcfd0(param_1,param_2 + 0x30);
  FUN_1406da970(param_1,param_2 + 0x4c);
  FUN_1426f8760(param_1,param_2 + 0x58);
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 0x80,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 0x80,4);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x80) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_1406da970(param_1,param_2 + 0x84);
  FUN_1426f8760(param_1,param_2 + 0x90);
  uVar7 = uVar8;
  do {
    FUN_1426f8760(param_1,param_2 + ((longlong)(int)uVar7 * 5 + 0x17) * 8);
    uVar9 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar9;
  } while (uVar9 < 6);
  if (0x10 < *(int *)((longlong)param_1 + 0x44)) {
    FUN_1426f8760(param_1,param_2 + 0x1a8);
    uVar7 = uVar8;
    do {
      FUN_1426f8760(param_1,param_2 + ((longlong)(int)uVar7 * 5 + 0x3a) * 8);
      uVar9 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar9;
    } while (uVar9 < 6);
  }
  FUN_1426f8760(param_1,param_2 + 0x2c0);
  FUN_1426f8760(param_1,param_2 + 0x2e8);
  iVar4 = FArchive::CustomVer(param_1,&DAT_1464b0098);
  if (1 < iVar4) {
    plVar6 = (longlong *)param_1[0xe];
    if ((plVar6 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar6 + 0xc0))(plVar6,4), cVar2 != '\0')) {
      FUN_1426f8760(param_1,param_2 + 0x310);
      FUN_1426f8760(param_1,param_2 + 0x338);
    }
    else {
      local_30 = 0;
      local_38 = &PTR__scalar_deleting_destructor__145179440;
      local_18[0] = 0;
      local_28 = 0;
      uStack_20 = 0;
      FUN_1426f8760(param_1,&local_38);
      FUN_1426f8760(param_1,&local_38);
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_18);
      if (local_30 != 0) {
        FMemory::Free();
      }
    }
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    if (1 < DAT_1464c9c14) {
      (**(code **)(*(longlong *)(param_2 + 0x310) + 0x18))();
      (**(code **)(*(longlong *)(param_2 + 0x338) + 0x18))();
    }
    uVar7 = DAT_146b08ef8;
    if (DAT_146b08ef8 != 0) {
      cVar2 = FUN_1415ad720(&DAT_1468e2448);
      if (((cVar2 != '\0') || (DAT_1468c21ae == '\0')) ||
         (DVar3 = GetCurrentThreadId(), uVar5 = 4, DVar3 == DAT_1468c21c0)) {
        uVar5 = uVar8;
      }
      if (*(int *)(uVar7 + uVar5) == 0) {
        *(undefined4 *)(param_2 + 0x208) = 0;
        iVar4 = 0;
        uVar7 = uVar8;
        if (*(int *)(param_2 + 0x20c) != 0) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_2 + 0x200);
          uVar7 = (ulonglong)*(uint *)(param_2 + 0x208);
          iVar4 = *(int *)(param_2 + 0x20c);
        }
        if (iVar4 < (int)uVar7) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2 + 0x200);
        }
        *(undefined4 *)(param_2 + 0x210) = 0;
        *(undefined4 *)(param_2 + 600) = 0;
        iVar4 = 0;
        uVar7 = uVar8;
        if (*(int *)(param_2 + 0x25c) != 0) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_2 + 0x250);
          uVar7 = (ulonglong)*(uint *)(param_2 + 600);
          iVar4 = *(int *)(param_2 + 0x25c);
        }
        if (iVar4 < (int)uVar7) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2 + 0x250);
        }
        *(undefined4 *)(param_2 + 0x260) = 0;
        *(undefined4 *)(param_2 + 0x2a8) = 0;
        iVar4 = 0;
        if (*(int *)(param_2 + 0x2ac) != 0) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_2 + 0x2a0);
          uVar8 = (ulonglong)*(uint *)(param_2 + 0x2a8);
          iVar4 = *(int *)(param_2 + 0x2ac);
        }
        if (iVar4 < (int)uVar8) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_2 + 0x2a0);
        }
        *(undefined4 *)(param_2 + 0x2b0) = 0;
      }
    }
  }
  return param_1;
}



// FUNCTION 1426f8760 FUN_1426f8760 body=479 status=ok
// SIG undefined FUN_1426f8760(void)

longlong * FUN_1426f8760(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined2 *puVar8;
  int local_res8 [2];
  undefined2 *local_18;
  undefined8 local_10;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)*(int *)(param_2 + 0x10),(longlong)*(int *)(param_2 + 0x14));
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = *(int *)(param_2 + 0x10);
  }
  plVar1 = (longlong *)param_1[1];
  if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((((char)*(byte *)(param_1 + 5) < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x1000000 < local_res8[0])))) {
    bVar2 = *(byte *)(param_1 + 5) | 0x80;
    *(byte *)(param_1 + 5) = bVar2;
  }
  else {
    *(int *)(param_2 + 0x10) = local_res8[0];
    if (((local_res8[0] != 0) || (iVar7 = 0, *(int *)(param_2 + 0x14) != 0)) &&
       (iVar7 = local_res8[0], (*(byte *)(param_1 + 5) & 1) != 0)) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy
                (param_2 + 8,local_res8[0],*(undefined4 *)(param_2 + 0x14));
      iVar7 = *(int *)(param_2 + 0x10);
    }
    (**(code **)(*param_1 + 0x50))(param_1,*(undefined8 *)(param_2 + 8),(longlong)iVar7);
    bVar2 = *(byte *)(param_1 + 5);
  }
  if ((bVar2 & 1) != 0) {
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  }
  uVar4 = FUN_142853ee0();
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    if ((*(byte *)(param_1 + 5) & 2) == 0) {
      return param_1;
    }
    uVar4 = UEnum::GetNameByValue(uVar4,local_res8,(longlong)*(int *)(param_2 + 0x1c));
    lVar6 = FName::GetComparisonNameEntry(uVar4);
    if (lVar6 == 0) {
      local_18 = (undefined2 *)0x0;
      local_10 = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
      FGenericPlatformString::Memcpy(local_18,L"*INVALID*",0x14);
    }
    else {
      FNameEntry::GetPlainNameString(lVar6,&local_18);
    }
    FUN_14158ce90(param_1,&local_18);
  }
  else {
    local_18 = (undefined2 *)0x0;
    local_10 = 0;
    FUN_14158ce90(param_1,&local_18);
    puVar8 = &DAT_143f3eda8;
    if ((int)local_10 != 0) {
      puVar8 = local_18;
    }
    puVar5 = (undefined8 *)FName::FName(local_res8,puVar8,1);
    uVar3 = UEnum::GetValueByName(uVar4,*puVar5,0);
    *(undefined4 *)(param_2 + 0x1c) = uVar3;
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1426f89a0 FUN_1426f89a0 body=97 status=ok
// SIG undefined FUN_1426f89a0(void)

undefined8 * FUN_1426f89a0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145179838;
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



// FUNCTION 1426f8a10 FUN_1426f8a10 body=97 status=ok
// SIG undefined FUN_1426f8a10(void)

undefined8 * FUN_1426f8a10(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145179848;
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



// FUNCTION 1426f8a80 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FAnimNode_RigidBody::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140ce2670();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x830);
  }
  return param_1;
}



// FUNCTION 1426f8ac0 FUN_1426f8ac0 body=66 status=ok
// SIG undefined FUN_1426f8ac0(void)

longlong FUN_1426f8ac0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_14407ef78;
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x488);
  }
  return param_1;
}



// FUNCTION 1426f8b10 FUN_1426f8b10 body=163 status=ok
// SIG undefined FUN_1426f8b10(void)

undefined8 * FUN_1426f8b10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145177b28;
  if (param_1[0xa1] != 0) {
    FMemory::Free();
  }
  if (param_1[0x9f] != 0) {
    FMemory::Free();
  }
  FUN_1404bf980(param_1 + 0x96);
  if (param_1[0x94] != 0) {
    FMemory::Free();
  }
  if (param_1[0x8e] != 0) {
    FMemory::Free();
  }
  if (param_1[0x8c] != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x528);
  }
  return param_1;
}



// FUNCTION 1426f8bc0 FUN_1426f8bc0 body=121 status=ok
// SIG undefined FUN_1426f8bc0(void)

longlong FUN_1426f8bc0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xa88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa78) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x490) = &PTR_FUN_143fce298;
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xad0);
  }
  return param_1;
}



// FUNCTION 1426f8c40 FUN_1426f8c40 body=124 status=ok
// SIG undefined FUN_1426f8c40(void)

longlong FUN_1426f8c40(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x490) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4c0);
  }
  return param_1;
}



// FUNCTION 1426f8cc0 FUN_1426f8cc0 body=285 status=ok
// SIG undefined FUN_1426f8cc0(void)

undefined8 * FUN_1426f8cc0(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  
  *param_1 = &PTR_FUN_1451782f0;
  if (((*(byte *)(param_1 + 2) & 2) != 0) &&
     (lVar3 = FWeakObjectPtr::Get((longlong)param_1 + 0x14), lVar3 != 0)) {
    lVar7 = 0;
    iVar8 = *(int *)(lVar3 + 0x5e8);
    lVar1 = *(longlong *)(lVar3 + 0x5e0);
    uVar4 = (longlong)iVar8;
    if (iVar8 != 0) {
      do {
        uVar5 = uVar4 >> 1;
        if (*(int *)(lVar1 + (uVar5 + lVar7) * 0x10) < *(int *)((longlong)param_1 + 0x34)) {
          lVar7 = (ulonglong)((uint)uVar4 & 1) + uVar5 + lVar7;
        }
        uVar4 = uVar5;
      } while (uVar5 != 0);
    }
    iVar6 = (int)lVar7;
    uVar4 = (ulonglong)iVar6;
    if (((uVar4 < (ulonglong)(longlong)iVar8) &&
        (*(int *)(lVar1 + uVar4 * 0x10) <= *(int *)((longlong)param_1 + 0x34))) && (iVar6 != -1)) {
      iVar2 = (iVar8 - iVar6) + -1;
      if (iVar2 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(lVar1 + uVar4 * 0x10),(void *)((longlong)(iVar6 + 1) * 0x10 + lVar1),
                   (longlong)iVar2 << 4);
        iVar8 = *(int *)(lVar3 + 0x5e8);
      }
      *(int *)(lVar3 + 0x5e8) = iVar8 + -1;
      TArray<FDelegateBase,FHeapAllocator>::ResizeShrink((longlong *)(lVar3 + 0x5e0));
    }
  }
  *param_1 = &PTR_FUN_143fcfaf0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1426f8de0 `scalar_deleting_destructor' body=121 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FPositionVertexBuffer::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR__scalar_deleting_destructor__145177128;
  puVar1 = (undefined8 *)param_1[8];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[8] = 0;
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1426f8e60 FUN_1426f8e60 body=112 status=ok
// SIG undefined FUN_1426f8e60(void)

undefined8 * FUN_1426f8e60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145179468;
  FUN_1426f6540(param_1 + 0x12);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xf);
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  param_1[0xb] = &PTR_FUN_143f593e8;
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x360);
  }
  return param_1;
}



// FUNCTION 1426f8ed0 FUN_1426f8ed0 body=52 status=ok
// SIG undefined FUN_1426f8ed0(void)

undefined8 FUN_1426f8ed0(undefined8 param_1,ulonglong param_2)

{
  FUN_1426f6380();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1426f8f10 `scalar_deleting_destructor' body=81 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FVolumetricLightmapDataLayer::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 4);
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f593e8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1426f8f70 FUN_1426f8f70 body=93 status=ok
// SIG undefined FUN_1426f8f70(void)

longlong FUN_1426f8f70(longlong param_1,ulonglong param_2)

{
  FUN_14243ef60(param_1 + 0x208);
  FUN_1417f85e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x240);
  }
  return param_1;
}



// FUNCTION 1426f8fd0 `scalar_deleting_destructor' body=90 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UUGShieldMeshComponent::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x618) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x608) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x630);
  }
  return param_1;
}



// FUNCTION 1426f9030 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UPrimaryAssetLabel::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x58);
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x48);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1426f9080 FUN_1426f9080 body=142 status=ok
// SIG undefined FUN_1426f9080(void)

void FUN_1426f9080(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = param_1[0xa1];
  if (lVar1 != 0) {
    lVar3 = ULocalPlayer::GetPrivateStaticClass();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      param_1[0xa2] = (longlong)param_2;
      if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 0x768))(param_2);
      }
      (**(code **)(*param_1 + 0xc88))(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 1426f9110 FUN_1426f9110 body=496 status=ok
// SIG undefined FUN_1426f9110(void)

void FUN_1426f9110(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  param_1[0xec] = param_2;
  plVar2 = param_1 + 0xea;
  local_28 = *plVar2;
  if (param_2 == 0) {
    if (local_28 != 0) {
      lVar4 = param_1[0xa1];
      if (lVar4 != 0) {
        lVar8 = ULocalPlayer::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if ((bVar6) && (*(longlong *)(lVar4 + 0x70) != 0)) {
          plVar5 = (longlong *)param_1[0xeb];
          lVar8 = *plVar2;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          local_38._0_4_ = (undefined4)lVar8;
          local_38._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
          uStack_30._0_4_ = SUB84(plVar5,0);
          uStack_30._4_4_ = (undefined4)((ulonglong)plVar5 >> 0x20);
          local_18 = (undefined4)local_38;
          uStack_14 = local_38._4_4_;
          uStack_10 = (undefined4)uStack_30;
          uStack_c = uStack_30._4_4_;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          local_38 = lVar8;
          uStack_30 = plVar5;
          (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x2a8))
                    (*(longlong **)(lVar4 + 0x70),&local_18);
          plVar7 = uStack_30;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar5 = plVar5 + 1;
            lVar4 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*uStack_30)(uStack_30);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*uStack_30 + 8))(uStack_30,1);
              }
            }
          }
        }
      }
      (**(code **)(*param_1 + 0xce8))();
      local_40 = (longlong *)0x0;
      if (plVar2 != &local_48) {
        *plVar2 = 0;
        local_48 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xeb,&local_40);
        plVar2 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_40 + 1;
          lVar4 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_40 + 8))(local_40,1);
            }
          }
        }
      }
    }
    return;
  }
  if (local_28 != 0) {
    local_20 = param_1[0xeb];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_142441700(param_2,&local_28);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001426f914d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xda8))();
  return;
}



// FUNCTION 1426f9300 FUN_1426f9300 body=67 status=ok
// SIG undefined FUN_1426f9300(void)

void FUN_1426f9300(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,param_3,1);
  if (lVar1 != 0) {
    FUN_14268df20(lVar1,param_2,param_4);
  }
  return;
}



// FUNCTION 1426f9350 FUN_1426f9350 body=108 status=ok
// SIG undefined FUN_1426f9350(void)

void FUN_1426f9350(longlong param_1,char param_2,char param_3,char param_4,char param_5,
                  float param_6)

{
  *(undefined1 *)(param_1 + 0x7f0) = 1;
  if (param_2 != '\0') {
    *(float *)(param_1 + 0x7e0) = param_6 + *(float *)(param_1 + 0x7e0);
  }
  if (param_3 != '\0') {
    *(float *)(param_1 + 0x7e4) = param_6 + *(float *)(param_1 + 0x7e4);
  }
  if (param_4 != '\0') {
    *(float *)(param_1 + 0x7e8) = param_6 + *(float *)(param_1 + 0x7e8);
  }
  if (param_5 != '\0') {
    *(float *)(param_1 + 0x7ec) = param_6 + *(float *)(param_1 + 0x7ec);
  }
  return;
}



// FUNCTION 1426f93c0 FUN_1426f93c0 body=264 status=ok
// SIG undefined FUN_1426f93c0(void)

void FUN_1426f93c0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *local_res10;
  
  local_res10 = param_2;
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x20,&local_res10);
  if (param_2 != (longlong *)0x0) {
    lVar3 = FUN_1429ff160();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (param_2[0x32] == 0)) {
      FUN_142398770(param_2,param_3,0,0,0);
    }
  }
  FUN_14234b270(param_2,*(undefined8 *)(param_1 + 0x30));
  if ((*(char *)(param_1 + 0x40) != '\0') && (param_2 != (longlong *)0x0)) {
    lVar4 = FUN_1429bed90();
    lVar3 = param_2[2];
    if ((*(int *)(lVar3 + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*param_2 + 0x910))(param_2,CONCAT71((int7)((ulonglong)lVar3 >> 8),1));
    }
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x1b8);
                    /* WARNING: Could not recover jumptable at 0x0001426f94c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x1e0))(plVar1,0);
  return;
}



// FUNCTION 1426f94d0 FUN_1426f94d0 body=1653 status=ok
// SIG undefined FUN_1426f94d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426f94d0(longlong param_1,float *param_2,longlong *param_3,undefined8 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_208 [32];
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  float *local_1b8;
  longlong local_1a8;
  float fStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  undefined4 uStack_18c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [64];
  undefined1 *local_e8;
  undefined8 local_d8;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  fVar1 = param_2[3];
  plVar18 = (longlong *)0x0;
  local_158 = *param_4;
  uStack_150 = param_4[1];
  fVar2 = *param_2;
  fVar3 = param_2[1];
  local_1a8 = *(longlong *)param_2;
  fVar4 = param_2[2];
  local_148 = param_4[2];
  uStack_140 = param_4[3];
  local_138 = param_4[4];
  uStack_130 = param_4[5];
  uStack_18c = 0;
  uStack_19c = 0;
  local_e8 = (undefined1 *)0x0;
  local_d8 = 0;
  local_1b8 = param_2;
  fStack_1a0 = fVar4;
  local_198 = fVar1;
  fStack_194 = fVar1;
  fStack_190 = fVar1;
  local_168 = param_3;
  if (param_3 != (longlong *)0x0) {
    do {
      plVar17 = local_168;
      uVar19 = *(uint *)(local_168 + 0xb);
      uVar10 = (uVar19 + 1 ^ uVar19) & 0x7fffffff ^ uVar19;
      *(uint *)(local_168 + 0xb) = uVar10;
      if ((int)uVar19 < 0) {
        iVar11 = (int)local_168[1];
        if ((iVar11 + 1 < 5) ||
           ((float)local_148 < *(float *)(param_1 + 0x90) ||
            (float)local_148 == *(float *)(param_1 + 0x90))) {
LAB_1426f9a27:
          *(int *)(local_168 + 1) = iVar11 + 1;
          if (*(int *)((longlong)local_168 + 0xc) < iVar11 + 1) {
            FUN_1407d8cb0(local_168,iVar11);
          }
          lVar20 = (longlong)iVar11 * 0x140 + *plVar17;
          if (lVar20 != 0) {
            FUN_1426f4e20(lVar20,local_1b8);
          }
          *(longlong *)(param_1 + 0x98) = (longlong)(*(int *)(param_1 + 0x98) + 0x140);
        }
        else {
          local_1a8 = 0;
          uStack_19c = 0;
          fStack_1a0 = 0.0;
          if (&local_1a8 != local_168) {
            local_1a8 = *local_168;
            fStack_1a0 = *(float *)(local_168 + 1);
            uStack_19c = *(undefined4 *)((longlong)local_168 + 0xc);
            *local_168 = 0;
            local_168[1] = 0;
          }
          fVar1 = fStack_1a0;
          lVar20 = local_1a8;
          *(longlong *)(param_1 + 0x98) =
               (longlong)(*(int *)(param_1 + 0x98) + (int)fStack_1a0 * -0x140);
          *(undefined4 *)(local_168 + 0xb) = 0;
          while ((iVar11 = (int)plVar18, -1 < iVar11 && (iVar11 < (int)fVar1))) {
            FUN_1426f94d0(param_1,(longlong)iVar11 * 0x140 + lVar20,plVar17,&local_158);
            plVar18 = (longlong *)(ulonglong)(iVar11 + 1);
          }
          FUN_1426f94d0(param_1,local_1b8,plVar17,&local_158);
          if (lVar20 != 0) {
            FMemory::Free(lVar20);
          }
        }
        if (local_e8 == (undefined1 *)0x0) {
          return;
        }
        FMemory::Free();
        return;
      }
      auVar23._0_4_ = (local_138._4_4_ + (float)local_158) - fVar2;
      auVar23._4_4_ = (local_138._4_4_ + local_158._4_4_) - fVar3;
      auVar23._8_4_ = (local_138._4_4_ + (float)uStack_150) - fVar4;
      auVar23._12_4_ = (local_138._4_4_ + uStack_150._4_4_) - 0.0;
      auVar24._4_4_ = fVar3 - (local_158._4_4_ - local_138._4_4_);
      auVar24._0_4_ = fVar2 - ((float)local_158 - local_138._4_4_);
      auVar24._8_4_ = fVar4 - ((float)uStack_150 - local_138._4_4_);
      auVar24._12_4_ = 0.0 - (uStack_150._4_4_ - local_138._4_4_);
      auVar24 = minps(auVar23,auVar24);
      auVar5._4_4_ = -(uint)((float)local_138 < auVar24._4_4_ + fVar1);
      auVar5._0_4_ = -(uint)((float)local_138 < auVar24._0_4_ + fVar1);
      auVar5._8_4_ = -(uint)((float)local_138 < auVar24._8_4_ + fVar1);
      auVar5._12_4_ = -(uint)((float)local_138 < auVar24._12_4_ + 0.0);
      iVar11 = movmskps(uVar10,auVar5);
      if (iVar11 == 0) {
        auVar6._4_4_ = -(uint)((float)uStack_150 < fVar4);
        auVar6._0_4_ = -(uint)((float)uStack_150 < fVar4);
        auVar6._8_4_ = -(uint)((float)uStack_150 < fVar4);
        auVar6._12_4_ = -(uint)((float)uStack_150 < fVar4);
        iVar11 = movmskps(0,auVar6);
        auVar7._4_4_ = -(uint)(local_158._4_4_ < fVar3);
        auVar7._0_4_ = -(uint)(local_158._4_4_ < fVar3);
        auVar7._8_4_ = -(uint)(local_158._4_4_ < fVar3);
        auVar7._12_4_ = -(uint)(local_158._4_4_ < fVar3);
        iVar13 = movmskps(iVar11,auVar7);
        auVar8._4_4_ = -(uint)((float)local_158 < fVar2);
        auVar8._0_4_ = -(uint)((float)local_158 < fVar2);
        auVar8._8_4_ = -(uint)((float)local_158 < fVar2);
        auVar8._12_4_ = -(uint)((float)local_158 < fVar2);
        iVar12 = movmskps(iVar13,auVar8);
        uVar19 = ((uint)(iVar11 != 0) * 2 | (uint)(iVar13 != 0)) * 2 | (uint)(iVar12 != 0);
      }
      else {
        uVar19 = 8;
      }
      if ((uVar19 & 8) != 0) {
        iVar11 = (int)local_168[1];
        goto LAB_1426f9a27;
      }
      uVar21 = (ulonglong)(uVar19 & 7);
      if (local_168[uVar21 + 3] == 0) {
        plVar14 = (longlong *)operator_new(0x60);
        plVar16 = plVar18;
        if (plVar14 != (longlong *)0x0) {
          *plVar14 = 0;
          uVar10 = 0;
          plVar14[1] = 0;
          plVar14[2] = (longlong)plVar17;
          *(undefined4 *)(plVar14 + 0xb) = 0x80000000;
          do {
            plVar14[(ulonglong)(uVar10 & 7) + 3] = 0;
            if (((byte)uVar10 & 7) < 7) {
              uVar10 = uVar10 ^ (uVar10 + 1 ^ uVar10) & 7;
            }
            else {
              uVar10 = uVar10 | 8;
            }
            plVar16 = plVar14;
          } while (uVar10 >> 3 == 0);
        }
        plVar17[uVar21 + 3] = (longlong)plVar16;
        *(longlong *)(param_1 + 0x98) = (longlong)(*(int *)(param_1 + 0x98) + 0x60);
      }
      uVar9 = local_d8;
      lVar20 = (longlong)(int)local_d8;
      iVar11 = (int)local_d8 + 1;
      local_d8 = CONCAT44(local_d8._4_4_,iVar11);
      if (local_d8._4_4_ < iVar11) {
        FUN_1405a82e0(local_128,uVar9 & 0xffffffff);
      }
      puVar15 = local_128;
      if (local_e8 != (undefined1 *)0x0) {
        puVar15 = local_e8;
      }
      plVar16 = (longlong *)(puVar15 + lVar20 * 0x40);
      plVar17 = plVar18;
      if (plVar16 != (longlong *)0x0) {
        plVar16[2] = 0;
        *(undefined4 *)(plVar16 + 3) = 0;
        *(undefined8 *)((longlong)plVar16 + 0x1c) = 0x3f800000;
        *(undefined8 *)((longlong)plVar16 + 0x24) = 0;
        *(undefined4 *)((longlong)plVar16 + 0x2c) = 0x3f800000;
        *plVar16 = 0;
        plVar17 = plVar16;
      }
      *plVar17 = local_168[uVar21 + 3];
      *(float *)(plVar17 + 2) =
           local_138._4_4_ * *(float *)(&DAT_146534f00 + (ulonglong)(uVar19 & 1) * 4) +
           (float)local_158;
      *(float *)((longlong)plVar17 + 0x14) =
           local_138._4_4_ * *(float *)(&DAT_146534f00 + (ulonglong)((uVar19 & 2) >> 1) * 4) +
           local_158._4_4_;
      fVar22 = *(float *)(&DAT_146534f00 + (ulonglong)((uVar19 & 4) >> 2) * 4);
      *(undefined4 *)((longlong)plVar17 + 0x1c) = 0;
      *(float *)(plVar17 + 3) = local_138._4_4_ * fVar22 + (float)uStack_150;
      *(float *)(plVar17 + 4) = (float)local_138;
      *(float *)((longlong)plVar17 + 0x24) = (float)local_138;
      *(float *)(plVar17 + 5) = (float)local_138;
      *(undefined4 *)((longlong)plVar17 + 0x2c) = 0;
      fVar22 = (float)local_138 * 0.5 * 1.0625;
      *(float *)(plVar17 + 6) = fVar22;
      *(float *)((longlong)plVar17 + 0x34) = (float)local_138 - fVar22;
      if ((int)local_d8 == 0) {
        local_1a8 = 0;
        uStack_160 = CONCAT44(uStack_19c,fStack_1a0);
        local_168 = (longlong *)0x0;
        local_138 = CONCAT44(uStack_174,local_178);
        uStack_130 = CONCAT44(uStack_16c,uStack_170);
        local_158 = 0;
        uStack_150 = 0x3f80000000000000;
        local_148 = 0;
        uStack_140 = 0x3f80000000000000;
      }
      else {
        iVar11 = (int)local_d8 + -1;
        puVar15 = local_128;
        if (local_e8 != (undefined1 *)0x0) {
          puVar15 = local_e8;
        }
        lVar20 = (longlong)iVar11 * 0x40;
        local_168 = *(longlong **)(puVar15 + lVar20);
        uStack_160 = *(undefined8 *)((longlong)(puVar15 + lVar20) + 8);
        local_158 = *(undefined8 *)(puVar15 + lVar20 + 0x10);
        uStack_150 = *(undefined8 *)((longlong)(puVar15 + lVar20 + 0x10) + 8);
        local_148 = *(undefined8 *)(puVar15 + lVar20 + 0x20);
        uStack_140 = *(undefined8 *)((longlong)(puVar15 + lVar20 + 0x20) + 8);
        local_138 = *(undefined8 *)(puVar15 + lVar20 + 0x30);
        uStack_130 = *(undefined8 *)((longlong)(puVar15 + lVar20 + 0x30) + 8);
        iVar13 = ((int)local_d8 - iVar11) + -1;
        if (iVar13 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (puVar15 + (longlong)iVar11 * 0x40,puVar15 + (longlong)(int)local_d8 * 0x40,
                     (longlong)iVar13 << 6);
        }
        local_d8 = CONCAT44(local_d8._4_4_,(int)local_d8 + -1);
        TArray<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference,TInlineAllocator<1,FDefaultAllocator>_>
        ::ResizeShrink(local_128);
      }
    } while (local_168 != (longlong *)0x0);
    if (local_e8 != (undefined1 *)0x0) {
      FMemory::Free();
    }
  }
  local_1e8 = (double)fVar3;
  local_1e0 = (double)fVar4;
  local_1d8 = (double)fVar1;
  local_1d0 = (double)fVar1;
  local_1c8 = (double)fVar1;
  LowLevelFatalErrorHandler
            ("Unknown",0xc1,
             L"Failed to find an octree node for an element with bounds (%f,%f,%f) +/- (%f,%f,%f)!",
             (double)fVar2);
  local_1e8 = (double)fVar2;
  local_1e0 = (double)fVar3;
  local_1d8 = (double)fVar4;
  local_1d0 = (double)fVar1;
  local_1c8 = (double)fVar1;
  local_1c0 = (double)fVar1;
  FDebug::AssertFailed
            (&DAT_145171185,"Unknown",0xc1,
             L"Failed to find an octree node for an element with bounds (%f,%f,%f) +/- (%f,%f,%f)!")
  ;
  return;
}



// FUNCTION 1426f9b50 FUN_1426f9b50 body=70 status=ok
// SIG undefined FUN_1426f9b50(void)

void FUN_1426f9b50(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,param_3,1);
  if (lVar1 != 0) {
    FUN_14268e510(lVar1,param_2,1,param_4);
  }
  return;
}



// FUNCTION 1426f9ba0 AddForceAtLocation body=69 status=ok
// SIG undefined AddForceAtLocation(void)

void UPrimitiveComponent::AddForceAtLocation
               (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,param_4,1);
  if (lVar1 != 0) {
    FUN_14268e640(lVar1,param_2,param_3,1,0);
  }
  return;
}



// FUNCTION 1426f9bf0 AddForceAtLocationLocal body=69 status=ok
// SIG undefined AddForceAtLocationLocal(void)

void UPrimitiveComponent::AddForceAtLocationLocal
               (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,param_4,1);
  if (lVar1 != 0) {
    FUN_14268e640(lVar1,param_2,param_3,1,1);
  }
  return;
}



// FUNCTION 1426f9c40 FUN_1426f9c40 body=363 status=ok
// SIG undefined FUN_1426f9c40(void)

void FUN_1426f9c40(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  
  puVar3 = (undefined8 *)*param_1;
  lVar7 = param_1[1];
  puVar11 = puVar3;
  do {
    if (puVar11 == puVar3 + (longlong)(int)lVar7 * 2) {
LAB_1426f9d1e:
      plVar5 = (longlong *)param_2[1];
      lVar7 = *param_2;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      iVar2 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar2);
      }
      plVar10 = (longlong *)((longlong)iVar2 * 0x10 + *param_1);
      *plVar10 = lVar7;
      plVar10[1] = (longlong)plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar5 + 1;
          lVar7 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
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
      }
      return;
    }
    plVar10 = (longlong *)puVar11[1];
    puVar4 = (undefined8 *)*puVar11;
    plVar5 = plVar10 + 1;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar5 = (int)*plVar5 + 1;
      UNLOCK();
    }
    if ((*param_2 == 0) || (cVar9 = (**(code **)*puVar4)(), cVar9 == '\0')) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    if (bVar6) {
      if ((int)((longlong)puVar11 - (longlong)puVar3 >> 4) != -1) {
        return;
      }
      goto LAB_1426f9d1e;
    }
    puVar11 = puVar11 + 2;
  } while( true );
}



// FUNCTION 1426f9db0 FUN_1426f9db0 body=67 status=ok
// SIG undefined FUN_1426f9db0(void)

void FUN_1426f9db0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,param_3,1);
  if (lVar1 != 0) {
    FUN_14268e770(lVar1,param_2,param_4);
  }
  return;
}



// FUNCTION 1426f9e00 AddImpulseAtLocation body=61 status=ok
// SIG undefined AddImpulseAtLocation(void)

void UPrimitiveComponent::AddImpulseAtLocation
               (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,param_4,1);
  if (lVar1 != 0) {
    FUN_14268e880(lVar1,param_2,param_3);
  }
  return;
}



// FUNCTION 1426f9e40 FUN_1426f9e40 body=70 status=ok
// SIG undefined FUN_1426f9e40(void)

void FUN_1426f9e40(longlong *param_1,float param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x7e8))();
  if (cVar1 == '\0') {
    param_2 = param_2 * *(float *)(param_1 + 0xd4);
  }
  else {
    param_2 = 0.0;
  }
  *(float *)(param_1 + 0xd2) = param_2 + *(float *)(param_1 + 0xd2);
  return;
}



// FUNCTION 1426f9e90 FUN_1426f9e90 body=125 status=ok
// SIG undefined FUN_1426f9e90(void)

void FUN_1426f9e90(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x5f) & 2) == 0) {
    lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,0,1);
    if (lVar1 != 0) {
      FUN_14268eaa0(lVar1,param_2,param_3,param_4,param_5,param_6,1);
    }
  }
  return;
}



// FUNCTION 1426f9f10 FUN_1426f9f10 body=120 status=ok
// SIG undefined FUN_1426f9f10(void)

void FUN_1426f9f10(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x5f) & 1) == 0) {
    lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,0,1);
    if (lVar1 != 0) {
      FUN_14268ec00(lVar1,param_2,param_3,param_4,param_5,param_6);
    }
  }
  return;
}



// FUNCTION 1426f9fa0 AddReferencedObjects body=75 status=ok
// SIG undefined AddReferencedObjects(void)

void FPreviewScene::AddReferencedObjects(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x40))
            (param_2,*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),0,0);
                    /* WARNING: Could not recover jumptable at 0x0001426f9fe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x38))(param_2,param_1 + 0x30,0,0);
  return;
}



// FUNCTION 1426f9ff0 AddReferencedObjects body=533 status=ok
// SIG undefined AddReferencedObjects(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UPolys::AddReferencedObjects(longlong param_1,longlong *param_2)

{
  bool bVar1;
  undefined1 *_Dst;
  undefined8 *_Src;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_184;
  undefined4 local_17c;
  undefined1 local_178 [192];
  undefined1 *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 local_5c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  iVar3 = 0;
  while( true ) {
    if ((iVar3 < 0) || (*(int *)(param_1 + 0x30) <= iVar3)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    puVar2 = (undefined8 *)((longlong)iVar3 * 0x158 + *(longlong *)(param_1 + 0x28));
    local_1a8 = *puVar2;
    local_1a0 = *(undefined4 *)(puVar2 + 1);
    local_19c = *(undefined8 *)((longlong)puVar2 + 0xc);
    local_194 = *(undefined4 *)((longlong)puVar2 + 0x14);
    local_190 = puVar2[3];
    local_188 = *(undefined4 *)(puVar2 + 4);
    local_184 = *(undefined8 *)((longlong)puVar2 + 0x24);
    local_17c = *(undefined4 *)((longlong)puVar2 + 0x2c);
    local_b8 = (undefined1 *)0x0;
    local_b0 = *(int *)(puVar2 + 0x1f);
    lVar4 = (longlong)local_b0;
    _Src = (undefined8 *)puVar2[0x1e];
    if (local_b0 == 0) {
      local_ac = 0;
    }
    else {
      TArray<FVector,TInlineAllocator<16,FDefaultAllocator>_>::ResizeForCopy(local_178,local_b0,0);
      if (_Src == (undefined8 *)0x0) {
        _Src = puVar2 + 6;
      }
      _Dst = local_178;
      if (local_b8 != (undefined1 *)0x0) {
        _Dst = local_b8;
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,lVar4 * 0xc);
    }
    local_a8 = *(undefined4 *)(puVar2 + 0x20);
    local_a0 = puVar2[0x21];
    local_98 = puVar2[0x22];
    local_90 = puVar2[0x23];
    local_88 = puVar2[0x24];
    local_80 = *(undefined4 *)(puVar2 + 0x25);
    local_7c = *(undefined4 *)((longlong)puVar2 + 300);
    local_78 = *(undefined4 *)(puVar2 + 0x26);
    local_74 = *(undefined4 *)((longlong)puVar2 + 0x134);
    local_70 = *(undefined4 *)(puVar2 + 0x27);
    local_6c = *(undefined4 *)((longlong)puVar2 + 0x13c);
    uStack_68 = *(undefined4 *)(puVar2 + 0x28);
    uStack_64 = *(undefined4 *)((longlong)puVar2 + 0x144);
    uStack_60 = *(undefined4 *)(puVar2 + 0x29);
    local_5c = *(undefined8 *)((longlong)puVar2 + 0x14c);
    (**(code **)(*param_2 + 0x38))(param_2,&local_a0,param_1);
    (**(code **)(*param_2 + 0x38))(param_2,&local_98);
    if (local_b8 != (undefined1 *)0x0) {
      FMemory::Free();
    }
    iVar3 = iVar3 + 1;
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  return;
}



// FUNCTION 1426fa210 FUN_1426fa210 body=70 status=ok
// SIG undefined FUN_1426fa210(void)

void FUN_1426fa210(longlong *param_1,float param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x7e8))();
  if (cVar1 == '\0') {
    param_2 = param_2 * *(float *)((longlong)param_1 + 0x6a4);
  }
  else {
    param_2 = 0.0;
  }
  *(float *)(param_1 + 0xd3) = param_2 + *(float *)(param_1 + 0xd3);
  return;
}



// FUNCTION 1426fa260 FUN_1426fa260 body=504 status=ok
// SIG undefined FUN_1426fa260(void)

void FUN_1426fa260(longlong param_1,longlong *param_2,longlong param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 local_70;
  longlong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *local_38;
  undefined1 local_30 [24];
  
  if (param_3 != 0) {
    local_58 = *param_4;
    uStack_54 = param_4[1];
    uStack_50 = param_4[2];
    uStack_4c = param_4[3];
    plVar9 = (longlong *)
             UMapBuildDataRegistry::GetLevelPrecomputedLightVolumeBuildData(param_3,&local_58);
    if (((plVar9 != (longlong *)0x0) && ((char)*plVar9 != '\0')) && (param_2 != (longlong *)0x0)) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      FWeakObjectPtr::operator=(param_1 + 0x34,param_3);
      local_48 = param_1;
      uStack_40 = plVar9;
      local_38 = param_2;
      if (((DAT_146ac3ac6 == '\0') || (cVar7 = IsInRenderingThread(), cVar7 == '\0')) &&
         ((DAT_146ac3ac5 != '\0' ||
          (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 == '\0' && (DAT_1468c21ae != '\0')) &&
           (DVar8 = GetCurrentThreadId(), DVar8 != DAT_1468c21c0)))))) {
        plVar9 = (longlong *)FUN_142700790(local_30,0,0xff);
        lVar11 = *plVar9;
        *(undefined4 *)(lVar11 + 0x10) = (undefined4)local_48;
        *(undefined4 *)(lVar11 + 0x14) = local_48._4_4_;
        *(undefined4 *)(lVar11 + 0x18) = (undefined4)uStack_40;
        *(undefined4 *)(lVar11 + 0x1c) = uStack_40._4_4_;
        *(longlong **)(lVar11 + 0x20) = local_38;
        lVar11 = *plVar9;
        lVar6 = plVar9[2];
        lVar4 = plVar9[1];
        lVar5 = *(longlong *)(lVar11 + 0x30);
        piVar2 = (int *)(lVar5 + 0x48);
        if (lVar5 != 0) {
          LOCK();
          *piVar2 = *piVar2 + 1;
          UNLOCK();
        }
        FUN_14048a160(lVar11,lVar4,(int)lVar6,1);
        if (lVar5 != 0) {
          LOCK();
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            FGraphEvent::Recycle(lVar5);
          }
        }
      }
      else {
        FBaseGraphTask::GetSmallTaskAllocator();
        *(longlong **)(param_1 + 0x10) = plVar9;
        cVar7 = FUN_142865d40((int)param_2[1]);
        lVar11 = 0xc0;
        if (cVar7 != '\0') {
          lVar11 = 0x20;
        }
        *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x10) + lVar11;
      }
      puVar10 = (undefined8 *)
                TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1,&local_48);
      local_70 = *puVar10;
      local_68 = puVar10[1];
      if (local_68 != 0) {
        LOCK();
        *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*param_2 + 0x110))(param_2,&local_70);
      plVar9 = uStack_40;
      if (uStack_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = uStack_40 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*uStack_40)(uStack_40);
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
  return;
}



// FUNCTION 1426fa460 FUN_1426fa460 body=363 status=ok
// SIG undefined FUN_1426fa460(void)

void FUN_1426fa460(undefined8 *param_1,longlong *param_2,longlong param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  DWORD DVar8;
  longlong *plVar9;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong *local_28;
  undefined1 local_20 [24];
  
  if (param_3 != 0) {
    local_48 = *param_4;
    uStack_44 = param_4[1];
    uStack_40 = param_4[2];
    uStack_3c = param_4[3];
    plVar9 = (longlong *)
             UMapBuildDataRegistry::GetLevelPrecomputedVolumetricLightmapBuildData
                       (param_3,&local_48);
    if ((plVar9 != (longlong *)0x0) && (param_2 != (longlong *)0x0)) {
      *(undefined1 *)(param_1 + 1) = 1;
      local_38 = param_1;
      uStack_30 = plVar9;
      local_28 = param_2;
      if (((DAT_146ac3ac6 == '\0') || (cVar7 = IsInRenderingThread(), cVar7 == '\0')) &&
         ((DAT_146ac3ac5 != '\0' ||
          (((cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 == '\0' && (DAT_1468c21ae != '\0')) &&
           (DVar8 = GetCurrentThreadId(), DVar8 != DAT_1468c21c0)))))) {
        plVar9 = (longlong *)FUN_1427008e0(local_20,0,0xff);
        lVar3 = *plVar9;
        *(undefined4 *)(lVar3 + 0x10) = (undefined4)local_38;
        *(undefined4 *)(lVar3 + 0x14) = local_38._4_4_;
        *(undefined4 *)(lVar3 + 0x18) = (undefined4)uStack_30;
        *(undefined4 *)(lVar3 + 0x1c) = uStack_30._4_4_;
        *(longlong **)(lVar3 + 0x20) = local_28;
        lVar3 = *plVar9;
        lVar6 = plVar9[2];
        lVar4 = plVar9[1];
        lVar5 = *(longlong *)(lVar3 + 0x30);
        piVar1 = (int *)(lVar5 + 0x48);
        if (lVar5 != 0) {
          LOCK();
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        FUN_14048a160(lVar3,lVar4,(int)lVar6,1);
        if (lVar5 != 0) {
          LOCK();
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            FGraphEvent::Recycle(lVar5);
          }
        }
      }
      else {
        FBaseGraphTask::GetSmallTaskAllocator();
        *param_1 = plVar9;
        if (1 < (int)param_2[1]) {
          (**(code **)(*plVar9 + 0x28))(plVar9);
        }
      }
      (**(code **)(*param_2 + 0x130))(param_2,param_1);
    }
  }
  return;
}



// FUNCTION 1426fa5d0 FUN_1426fa5d0 body=70 status=ok
// SIG undefined FUN_1426fa5d0(void)

void FUN_1426fa5d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x6d0))(param_1,param_3,1);
  if (lVar1 != 0) {
    FUN_14268ed10(lVar1,param_2,1,param_4);
  }
  return;
}



// FUNCTION 1426fa620 FUN_1426fa620 body=70 status=ok
// SIG undefined FUN_1426fa620(void)

void FUN_1426fa620(longlong *param_1,float param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x7e8))();
  if (cVar1 == '\0') {
    param_2 = param_2 * *(float *)((longlong)param_1 + 0x69c);
  }
  else {
    param_2 = 0.0;
  }
  *(float *)((longlong)param_1 + 0x694) = param_2 + *(float *)((longlong)param_1 + 0x694);
  return;
}



// FUNCTION 1426fa670 FUN_1426fa670 body=664 status=ok
// SIG undefined FUN_1426fa670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426fa670(float *param_1)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  undefined8 uVar4;
  int iVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  float fVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 local_98 [8];
  undefined8 uStack_90;
  uint uStack_7c;
  undefined8 uStack_70;
  undefined8 local_48;
  undefined8 uStack_40;
  
  do {
    _local_98 = *(undefined1 (*) [16])(param_1 + 0x650);
    fVar10 = local_98._8_4_;
    if (-1 < (int)fVar10) {
      iVar11 = (int)local_98[1];
      if ((int)fVar10 < iVar11) {
        lVar7 = *local_98;
        lVar8 = (longlong)(int)fVar10 * 0x140;
        uVar2 = *(uint *)(lVar8 + 0xc + lVar7);
        auVar12._4_4_ =
             -(uint)((float)(uVar2 & uRam0000000146b08bb4) + param_1[5] <
                    (float)((uint)(*(float *)(lVar8 + 4 + lVar7) - param_1[1]) &
                           uRam0000000146b08be4));
        auVar12._0_4_ =
             -(uint)((float)(uVar2 & _DAT_146b08bb0) + param_1[4] <
                    (float)((uint)(*(float *)(lVar8 + lVar7) - *param_1) & _DAT_146b08be0));
        auVar12._8_4_ =
             -(uint)((float)(uVar2 & uRam0000000146b08bb8) + param_1[6] <
                    (float)((uint)(*(float *)(lVar8 + 8 + lVar7) - param_1[2]) &
                           uRam0000000146b08be8));
        auVar12._12_4_ =
             -(uint)((float)(uVar2 & uRam0000000146b08bbc) + param_1[7] <
                    (float)((uint)(0.0 - param_1[3]) & uRam0000000146b08bec));
        iVar5 = movmskps(fVar10,auVar12);
        if (iVar5 == 0) {
LAB_1426fa8d9:
          param_1[0x650] = (float)local_98._0_4_;
          param_1[0x651] = (float)local_98._4_4_;
          param_1[0x652] = fVar10;
          param_1[0x653] = uStack_90._4_4_;
          return;
        }
        while( true ) {
          auVar12 = _local_98;
          fVar10 = (float)((int)fVar10 + 1);
          uStack_90._0_4_ = fVar10;
          if (((int)fVar10 < 0) || (iVar11 <= (int)fVar10)) break;
          lVar8 = (longlong)(int)fVar10 * 0x140;
          uVar2 = *(uint *)(lVar8 + 0xc + lVar7);
          auVar13._4_4_ =
               -(uint)((float)(uVar2 & uRam0000000146b08bb4) + param_1[5] <
                      (float)((uint)(*(float *)(lVar8 + 4 + lVar7) - param_1[1]) &
                             uRam0000000146b08be4));
          auVar13._0_4_ =
               -(uint)((float)(uVar2 & _DAT_146b08bb0) + param_1[4] <
                      (float)((uint)(*(float *)(lVar8 + lVar7) - *param_1) & _DAT_146b08be0));
          auVar13._8_4_ =
               -(uint)((float)(uVar2 & uRam0000000146b08bb8) + param_1[6] <
                      (float)((uint)(*(float *)(lVar8 + 8 + lVar7) - param_1[2]) &
                             uRam0000000146b08be8));
          auVar13._12_4_ =
               -(uint)((float)(uVar2 & uRam0000000146b08bbc) + param_1[7] <
                      (float)((uint)(0.0 - param_1[3]) & uRam0000000146b08bec));
          iVar5 = movmskps(fVar10,auVar13);
          if (iVar5 == 0) {
            *(undefined1 (*) [8])(param_1 + 0x650) = local_98;
            *(undefined8 *)(param_1 + 0x652) = uStack_90;
            return;
          }
        }
        local_98._0_4_ = auVar12._0_4_;
        local_98._4_4_ = auVar12._4_4_;
      }
    }
    fVar3 = param_1[0x64c];
    if (fVar3 == 0.0) {
      param_1[8] = 0.0;
      param_1[9] = 0.0;
      *(undefined8 *)(param_1 + 10) = uStack_70;
      param_1[0xc] = 0.0;
      param_1[0xd] = 0.0;
      param_1[0xe] = 0.0;
      param_1[0xf] = 1.0;
      param_1[0x10] = 0.0;
      param_1[0x11] = 0.0;
      param_1[0x12] = 0.0;
      param_1[0x13] = 1.0;
      *(undefined8 *)(param_1 + 0x14) = local_48;
      *(undefined8 *)(param_1 + 0x16) = uStack_40;
    }
    else {
      pfVar1 = param_1 + 0x18;
      iVar11 = (int)fVar3 + -1;
      pfVar9 = *(float **)(param_1 + 0x648);
      if (*(float **)(param_1 + 0x648) == (float *)0x0) {
        pfVar9 = pfVar1;
      }
      lVar7 = (longlong)iVar11;
      uVar4 = *(undefined8 *)(pfVar9 + lVar7 * 0x10 + 2);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(pfVar9 + lVar7 * 0x10);
      *(undefined8 *)(param_1 + 10) = uVar4;
      uVar4 = *(undefined8 *)(pfVar9 + lVar7 * 0x10 + 4 + 2);
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(pfVar9 + lVar7 * 0x10 + 4);
      *(undefined8 *)(param_1 + 0xe) = uVar4;
      uVar4 = *(undefined8 *)(pfVar9 + lVar7 * 0x10 + 8 + 2);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(pfVar9 + lVar7 * 0x10 + 8);
      *(undefined8 *)(param_1 + 0x12) = uVar4;
      uVar4 = *(undefined8 *)(pfVar9 + lVar7 * 0x10 + 0xc + 2);
      *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(pfVar9 + lVar7 * 0x10 + 0xc);
      *(undefined8 *)(param_1 + 0x16) = uVar4;
      fVar6 = param_1[0x64c];
      iVar5 = ((int)fVar6 - iVar11) + -1;
      if (iVar5 != 0) {
        pfVar9 = *(float **)(param_1 + 0x648);
        if (*(float **)(param_1 + 0x648) == (float *)0x0) {
          pfVar9 = pfVar1;
        }
        _guard_xfg_dispatch_icall_nop
                  (pfVar9 + (longlong)iVar11 * 0x10,pfVar9 + (longlong)(int)fVar3 * 0x10,
                   (longlong)iVar5 << 6);
        fVar6 = param_1[0x64c];
      }
      param_1[0x64c] = (float)((int)fVar6 + -1);
      TArray<TOctree<FEditableMeshOctreePolygon,FEditableMeshOctreeSemantics>::FNodeReference,TInlineAllocator<99,FDefaultAllocator>_>
      ::ResizeShrink(pfVar1);
    }
    if (*(longlong *)(param_1 + 8) == 0) goto LAB_1426fa8d9;
    TOctree<TVolumeLightingSample<3>,FLightVolumeOctreeSemantics>::
    TConstElementBoxIterator<TInlineAllocator<99,FDefaultAllocator>_>::ProcessChildren(param_1);
    *(undefined8 *)(param_1 + 0x650) = *(undefined8 *)(param_1 + 8);
    *(ulonglong *)(param_1 + 0x652) = (ulonglong)uStack_7c << 0x20;
  } while( true );
}



// FUNCTION 1426fa910 AllocateData body=129 status=ok
// SIG undefined AllocateData(void)

void FPositionVertexBuffer::AllocateData(longlong param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)0x0;
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  plVar3 = (longlong *)operator_new(0x28);
  if (plVar3 != (longlong *)0x0) {
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[1] = (longlong)&PTR_GetBoundProgramCounterForTimerManager_144e08bf8;
    *(undefined1 *)(plVar3 + 4) = param_2;
    *plVar3 = (longlong)&PTR_FUN_145178310;
    plVar4 = plVar3;
  }
  *(longlong **)(param_1 + 0x40) = plVar4;
  uVar2 = (**(code **)(*plVar4 + 0x20))();
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  return;
}



// FUNCTION 1426fa9a0 FUN_1426fa9a0 body=171 status=ok
// SIG undefined FUN_1426fa9a0(void)

void FUN_1426fa9a0(longlong param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    if (param_3 == 0) {
      return;
    }
    FPositionVertexBuffer::AllocateData(param_1,1);
  }
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x54);
    *(uint *)(param_1 + 0x54) = iVar1 + param_3;
    (**(code **)(**(longlong **)(param_1 + 0x40) + 8))();
    if (*(int *)(param_1 + 0x54) != 0) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))();
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x48) = uVar2;
      if (param_3 != 0) {
        do {
          iVar3 = uVar5 + iVar1;
          uVar5 = uVar5 + 1;
          puVar4 = (undefined8 *)
                   ((ulonglong)(uint)(iVar3 * *(int *)(param_1 + 0x50)) +
                   *(longlong *)(param_1 + 0x48));
          *puVar4 = *param_2;
          *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_2 + 1);
          param_2 = param_2 + 0xf;
        } while (uVar5 < param_3);
      }
    }
  }
  return;
}



// FUNCTION 1426faa50 FUN_1426faa50 body=254 status=ok
// SIG undefined FUN_1426faa50(void)

void FUN_1426faa50(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong local_20;
  longlong local_18;
  longlong *plStack_10;
  
  FUN_14247fef0(param_3,&local_38);
  if (local_38 != 0) {
    local_18 = local_38;
    plStack_10 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
    }
    local_28 = *(undefined8 *)(param_1 + 8);
    local_20 = *(longlong *)(param_1 + 0x10);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_1427174c0(param_1,param_2,&local_28,*(char *)(param_1 + 0x18) == '\x02',&local_18);
    FUN_1406a1ac0(param_2);
    *(undefined1 *)(param_3 + 0x30c) = *(undefined1 *)(param_1 + 0x18);
    *(undefined1 *)(param_3 + 0x308) = 0;
    *(undefined1 *)(param_3 + 0x30b) = *(undefined1 *)(param_1 + 0x19);
    *(undefined1 *)(param_3 + 0x30a) = 3;
  }
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plStack_30 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return;
}



// FUNCTION 1426fab50 FUN_1426fab50 body=530 status=ok
// SIG undefined FUN_1426fab50(void)

void FUN_1426fab50(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  
  FUN_14247fef0(param_3,&local_48);
  plVar4 = local_40;
  if (local_48 != 0) {
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    local_58 = local_48;
    local_50 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    if ((longlong *)(param_2 + 0x38) != &local_58) {
      *(longlong *)(param_2 + 0x38) = local_48;
      local_58 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 0x40,&local_50);
    }
    plVar3 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
    *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) | 0x20;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar4 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    local_38 = local_48;
    local_30 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    FUN_14185b9a0(param_2,&local_38,2,0);
    local_28 = local_48;
    local_20 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    FUN_142710cc0(param_2,&local_28);
    *(undefined1 *)(param_3 + 0x30c) = 1;
    *(undefined1 *)(param_3 + 0x308) = 0;
    *(char *)(param_3 + 0x30a) = (*(char *)(param_1 + 8) == '\0') + '\x01';
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar4 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
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
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 1426fad70 FUN_1426fad70 body=240 status=ok
// SIG undefined FUN_1426fad70(void)

void FUN_1426fad70(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong local_38;
  longlong *plStack_30;
  undefined8 local_28;
  longlong local_20;
  longlong local_18;
  longlong *plStack_10;
  
  FUN_14247fef0(param_3,&local_38);
  if (local_38 != 0) {
    local_18 = local_38;
    plStack_10 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
    }
    local_28 = *(undefined8 *)(param_1 + 8);
    local_20 = *(longlong *)(param_1 + 0x10);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_1427174c0(param_1,param_2,&local_28,*(char *)(param_1 + 0x18) == '\x02',&local_18);
    FUN_1406a1ac0(param_2);
    *(undefined1 *)(param_3 + 0x30c) = *(undefined1 *)(param_1 + 0x18);
    *(undefined1 *)(param_3 + 0x308) = 1;
    *(undefined1 *)(param_3 + 0x30a) = 0;
  }
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plStack_30 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return;
}



// FUNCTION 1426fae60 FUN_1426fae60 body=45 status=ok
// SIG undefined FUN_1426fae60(void)

void FUN_1426fae60(longlong param_1,float *param_2)

{
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + *param_2;
  *(float *)(param_1 + 0x2c) = param_2[1] + *(float *)(param_1 + 0x2c);
  *(float *)(param_1 + 0x30) = param_2[2] + *(float *)(param_1 + 0x30);
  return;
}



// FUNCTION 1426fae90 ApplyWorldOffset body=45 status=ok
// SIG undefined ApplyWorldOffset(void)

void FPrecomputedVolumetricLightmap::ApplyWorldOffset(longlong param_1,float *param_2)

{
  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) + *param_2;
  *(float *)(param_1 + 0x10) = param_2[1] + *(float *)(param_1 + 0x10);
  *(float *)(param_1 + 0x14) = param_2[2] + *(float *)(param_1 + 0x14);
  return;
}



// FUNCTION 1426faec0 Area body=1149 status=ok
// SIG undefined Area(void)

float FPoly::Area(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_res10;
  
  lVar7 = (longlong)*(int *)(param_1 + 0xf8);
  if (2 < *(int *)(param_1 + 0xf8)) {
    fVar14 = 0.0;
    pfVar6 = *(float **)(param_1 + 0xf0);
    if (*(float **)(param_1 + 0xf0) == (float *)0x0) {
      pfVar6 = (float *)(param_1 + 0x30);
    }
    local_res10 = 0.0;
    fVar1 = *pfVar6;
    fVar2 = pfVar6[1];
    fVar3 = pfVar6[2];
    fVar17 = pfVar6[3] - fVar1;
    fVar21 = pfVar6[4] - fVar2;
    fVar19 = pfVar6[5] - fVar3;
    if (2 < lVar7) {
      lVar8 = 2;
      if (5 < lVar7) {
        pfVar5 = pfVar6 + 0xb;
        lVar4 = (lVar7 - 6U >> 2) + 1;
        lVar8 = lVar4 * 4 + 2;
        do {
          fVar12 = pfVar5[-4] - fVar2;
          fVar15 = pfVar5[-5] - fVar1;
          fVar14 = pfVar5[-3] - fVar3;
          fVar13 = pfVar5[-1] - fVar2;
          fVar10 = fVar14 * fVar21 - fVar12 * fVar19;
          fVar20 = pfVar5[1] - fVar1;
          fVar18 = pfVar5[-2] - fVar1;
          fVar27 = fVar15 * fVar19 - fVar14 * fVar17;
          fVar11 = *pfVar5 - fVar3;
          fVar26 = fVar12 * fVar17 - fVar15 * fVar21;
          fVar25 = fVar12 * fVar11 - fVar13 * fVar14;
          fVar9 = pfVar5[3] - pfVar6[2];
          fVar16 = pfVar5[2] - fVar2;
          fVar24 = fVar18 * fVar14 - fVar15 * fVar11;
          fVar23 = fVar13 * fVar15 - fVar18 * fVar12;
          fVar19 = pfVar5[6] - pfVar6[2];
          fVar22 = fVar9 * fVar13 - fVar16 * fVar11;
          fVar17 = pfVar5[4] - *pfVar6;
          fVar15 = fVar20 * fVar11 - fVar9 * fVar18;
          fVar12 = fVar16 * fVar18 - fVar20 * fVar13;
          fVar21 = pfVar5[5] - pfVar6[1];
          fVar11 = fVar19 * fVar16 - fVar21 * fVar9;
          pfVar5 = pfVar5 + 0xc;
          fVar9 = fVar17 * fVar9 - fVar19 * fVar20;
          fVar14 = fVar21 * fVar20 - fVar17 * fVar16;
          fVar14 = local_res10 +
                   SQRT(fVar27 * fVar27 + fVar10 * fVar10 + fVar26 * fVar26) * 0.5 +
                   SQRT(fVar24 * fVar24 + fVar25 * fVar25 + fVar23 * fVar23) * 0.5 +
                   SQRT(fVar15 * fVar15 + fVar22 * fVar22 + fVar12 * fVar12) * 0.5 +
                   SQRT(fVar9 * fVar9 + fVar11 * fVar11 + fVar14 * fVar14) * 0.5;
          lVar4 = lVar4 + -1;
          local_res10 = fVar14;
        } while (lVar4 != 0);
      }
      if (lVar8 < lVar7) {
        lVar7 = lVar7 - lVar8;
        pfVar6 = pfVar6 + lVar8 * 3 + 2;
        do {
          fVar11 = pfVar6[-1] - fVar2;
          fVar10 = *pfVar6 - fVar3;
          fVar12 = pfVar6[-2] - fVar1;
          pfVar6 = pfVar6 + 3;
          fVar9 = fVar21 * fVar10 - fVar19 * fVar11;
          fVar21 = fVar17 * fVar11 - fVar21 * fVar12;
          fVar17 = fVar19 * fVar12 - fVar17 * fVar10;
          fVar14 = fVar14 + SQRT(fVar9 * fVar9 + fVar17 * fVar17 + fVar21 * fVar21) * 0.5;
          lVar7 = lVar7 + -1;
          fVar17 = fVar12;
          fVar19 = fVar10;
          fVar21 = fVar11;
        } while (lVar7 != 0);
      }
    }
    return fVar14;
  }
  return 0.0;
}



// FUNCTION 1426fb340 FUN_1426fb340 body=283 status=ok
// SIG undefined FUN_1426fb340(void)

void FUN_1426fb340(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  uint local_c;
  
  if ((char)param_1[0xa7] != '\0') {
    iVar2 = FUN_142235230();
    if (iVar2 == 3) {
      lVar3 = (**(code **)(*param_1 + 0x758))();
      if (lVar3 != 0) {
        lVar4 = FUN_14290f280();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (iVar2 = FUN_1422f00e0(lVar3), iVar2 != -1)) {
          return;
        }
      }
    }
    else {
      lVar3 = (**(code **)(*param_1 + 0xd88))(param_1);
      if (lVar3 != 0) {
        local_c = local_c & 0xfffffffe;
        local_18 = 0;
        local_10 = 0x40000000;
        local_14 = 1;
        (**(code **)(*param_1 + 0xe18))(param_1,lVar3,&local_18);
        return;
      }
    }
    local_c = local_c & 0xfffffffe;
    local_18 = 0;
    local_10 = 0x40000000;
    local_14 = 1;
    (**(code **)(*param_1 + 0xe18))(param_1,param_2,&local_18);
  }
  return;
}



// FUNCTION 1426fb460 FUN_1426fb460 body=478 status=ok
// SIG undefined FUN_1426fb460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426fb460(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
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
  lVar3 = param_1[0x91];
  if ((lVar3 != 0) && (*(longlong **)(lVar3 + 0x490) == param_1)) {
    *(undefined8 *)(lVar3 + 0x490) = 0;
  }
  (**(code **)(*param_1 + 0x750))(param_1,0);
  uStack_a0 = 0;
  local_a8 = &LAB_1426f8940;
  uVar5 = (**(code **)(*param_1 + 0xb30))(param_1);
  uVar1 = AActor::GetWorldTimerManager(param_1);
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar2 + 1,param_1);
    *(undefined4 *)(plVar2 + 2) = (undefined4)local_a8;
    *(undefined4 *)((longlong)plVar2 + 0x14) = local_a8._4_4_;
    *(undefined4 *)(plVar2 + 3) = uStack_a0;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_9c;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[5] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_143f77bd0;
  }
  local_98 = 0;
  local_90 = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&local_98);
  }
  FWeakObjectPtr::operator=(local_88,0);
  local_b0 = 0xbf800000;
  local_b8 = 0;
  local_80 = 0;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_78 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar1,param_1 + 0xed,&local_98,uVar5);
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
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 1426fb640 FUN_1426fb640 body=366 status=ok
// SIG undefined FUN_1426fb640(void)

void FUN_1426fb640(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  bool bVar7;
  char cVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_142223710();
  lVar4 = *(longlong *)(param_1 + 0x508);
  if (lVar4 != 0) {
    lVar9 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (((bVar7) && (lVar9 = *(longlong *)(lVar4 + 0x70), lVar9 != 0)) &&
       (cVar8 = (**(code **)(*(longlong *)(lVar9 + 0x28) + 400))(lVar9 + 0x28), cVar8 != '\0')) {
      puVar10 = (undefined8 *)FUN_14247fef0(*(undefined8 *)(lVar4 + 0x70),local_18);
      plVar5 = (longlong *)puVar10[1];
      uVar6 = *puVar10;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_38 = (undefined4)uVar6;
      uStack_34 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_30 = SUB84(plVar5,0);
      uStack_2c = (undefined4)((ulonglong)plVar5 >> 0x20);
      local_28 = local_38;
      uStack_24 = uStack_34;
      uStack_20 = uStack_30;
      uStack_1c = uStack_2c;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      FUN_142710cc0(lVar4 + 0x110,&local_28);
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
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_10 + 1;
        lVar4 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
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
  }
  if ((DAT_1469f4590 != 0) && (cVar8 = FSlateApplication::IsFakingTouchEvents(), cVar8 != '\0')) {
    *(uint *)(param_1 + 0x6a8) = *(uint *)(param_1 + 0x6a8) | 1;
  }
  return;
}



// FUNCTION 1426fb7b0 FUN_1426fb7b0 body=91 status=ok
// SIG undefined FUN_1426fb7b0(void)

void FUN_1426fb7b0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_1[0x91] != 0) && ((char)param_1[0x25] == '\x03')) {
    (**(code **)(*param_1 + 0x780))();
  }
  (**(code **)(*param_1 + 0xe68))(param_1);
  lVar1 = *param_1;
  uVar2 = (**(code **)(lVar1 + 0xe60))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001426fb808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0xe58))(param_1,uVar2);
  return;
}



// FUNCTION 1426fb810 FUN_1426fb810 body=43 status=ok
// SIG undefined FUN_1426fb810(void)

void FUN_1426fb810(longlong param_1,undefined8 param_2,longlong *param_3)

{
  *(undefined1 *)((longlong)param_3 + 0xd) = *(undefined1 *)(param_1 + 0x50);
  *param_3 = param_1;
  *(undefined4 *)(param_3 + 1) = 0;
  *(undefined1 *)((longlong)param_3 + 0xc) = 0;
  *(undefined2 *)((longlong)param_3 + 0xe) = 3;
  param_3[0x18] = *(longlong *)(param_1 + 0x38);
  return;
}



// FUNCTION 1426fb840 FUN_1426fb840 body=3380 status=ok
// SIG undefined FUN_1426fb840(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001426fbc7c) */
/* WARNING: Removing unreachable block (ram,0x0001426fbc95) */
/* WARNING: Removing unreachable block (ram,0x0001426fbcce) */
/* WARNING: Removing unreachable block (ram,0x0001426fbcf0) */

void FUN_1426fb840(undefined8 param_1,undefined8 param_2,float param_3,float param_4,float param_5,
                  longlong *param_6,longlong *param_7)

{
  undefined8 *puVar1;
  float fVar2;
  undefined1 auVar3 [13];
  uint3 uVar4;
  undefined1 auVar5 [13];
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  undefined4 uVar13;
  int iVar14;
  float *pfVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  float fVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 uVar34;
  float fVar32;
  uint uVar33;
  float fVar35;
  float fVar36;
  float fVar38;
  undefined1 auVar37 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auStack_328 [32];
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  float local_2fc;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  float local_2dc;
  undefined8 local_2d8;
  float local_2d0;
  undefined4 local_2cc;
  int local_2c8;
  uint local_2c4;
  float local_2c0;
  int local_2bc;
  undefined4 local_2b8;
  longlong local_2a8;
  undefined8 local_2a0;
  float local_298;
  float local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  longlong local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  float local_268;
  float local_264;
  float local_260;
  undefined4 local_25c;
  float local_258;
  float local_254;
  float local_250;
  undefined4 local_24c;
  float local_248;
  float local_244;
  float local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  float local_1f8;
  undefined4 uStack_1f4;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined1 uStack_1bc;
  undefined1 uStack_1bb;
  undefined1 uStack_1ba;
  undefined1 uStack_1b9;
  undefined1 local_1b8;
  undefined1 uStack_1b7;
  undefined1 uStack_1b6;
  undefined1 uStack_1b5;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  float local_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  uVar24 = (ulonglong)(uint)param_5;
  local_2dc = param_5;
  local_2a8 = 0;
  local_2d8 = 0;
  local_2cc = 0;
  local_2d0 = param_5;
  local_2fc = param_4;
  if (0 < (int)param_5) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_2d8);
    local_2a8 = local_2d8;
  }
  lVar25 = local_2a8;
  fVar36 = local_2fc;
  local_2d8 = local_2a8;
  fVar32 = 0.0;
  if (param_5 != 0.0) {
    do {
      pfVar15 = (float *)CalcConeVert(&local_290);
      local_2d0 = param_3 * pfVar15[2];
      fVar20 = (float)((int)fVar32 + 1);
      *(ulonglong *)(lVar25 + (longlong)(int)fVar32 * 0xc) =
           CONCAT44(param_3 * pfVar15[1],param_3 * *pfVar15 + fVar36);
      *(float *)(lVar25 + 8 + (longlong)(int)fVar32 * 0xc) = local_2d0;
      param_4 = local_2fc;
      fVar32 = fVar20;
    } while ((uint)fVar20 < (uint)param_5);
  }
  if (param_5 != 0.0) {
    local_2c8 = (int)param_5 + -1;
    uStack_28c = 0;
    uStack_288 = 0;
    local_308 = 0x7f000000;
    local_304 = 0x7f000000;
    local_300 = 0x7f000000;
    local_2bc = -0x7f;
    local_2b8 = 0;
    local_228 = 0x7f0000007f;
    uStack_220 = 0x7f0000007f;
    local_218 = 0xffffff80ffffff80;
    uStack_210 = 0xffffff80ffffff80;
    local_278 = 0x3c0102043c010204;
    uStack_270 = 0x3c0102043c010204;
    local_2e0 = 1.0 / (float)uVar24;
    fVar36 = 0.0;
    do {
      lVar16 = (longlong)(int)fVar36;
      uStack_15c = 0;
      uStack_158 = 0;
      uStack_fc = 0;
      uStack_f8 = 0;
      uStack_1fc = 0;
      fVar32 = *(float *)(lVar25 + 4 + lVar16 * 0xc);
      local_2c0 = (float)((int)fVar36 + 1);
      fVar20 = *(float *)(lVar25 + lVar16 * 0xc);
      local_2c4 = (uint)((ulonglong)(uint)local_2c0 % uVar24);
      lVar17 = (longlong)(int)local_2c4;
      local_280 = lVar17 * 3;
      fVar35 = *(float *)(lVar25 + 4 + lVar17 * 0xc);
      fVar38 = *(float *)(lVar25 + 8 + lVar17 * 0xc);
      fVar41 = *(float *)(lVar25 + lVar17 * 0xc);
      local_298 = *(float *)(lVar25 + 8 + lVar16 * 0xc);
      fVar40 = fVar35 * *(float *)(lVar25 + 8 + lVar16 * 0xc) - fVar38 * fVar32;
      fVar39 = fVar41 * fVar32 - fVar20 * fVar35;
      fVar41 = fVar20 * fVar38 - fVar41 * *(float *)(lVar25 + 8 + lVar16 * 0xc);
      local_2a0 = *(undefined8 *)(lVar25 + lVar16 * 0xc);
      fVar38 = (float)((ulonglong)local_2a0 >> 0x20);
      fVar32 = local_298 * fVar41 - fVar38 * fVar39;
      fVar35 = (float)local_2a0 * fVar39 - local_298 * fVar40;
      fVar20 = fVar32 * 127.0;
      local_2d8 = CONCAT44(fVar35,fVar32);
      local_2d0 = fVar38 * fVar40 - (float)local_2a0 * fVar41;
      local_208 = CONCAT44(uStack_28c,param_4);
      fVar32 = (float)(uint)fVar36 * local_2e0;
      iVar23 = (int)ROUND(fVar20 + fVar20 + 0.5) >> 1;
      if (iVar23 < -0x80) {
        iVar22 = -0x80;
      }
      else {
        iVar22 = 0x7f;
        if (iVar23 < 0x7f) {
          iVar22 = iVar23;
        }
      }
      fVar35 = fVar35 * 127.0;
      uStack_1bc = (undefined1)iVar22;
      iVar22 = (int)ROUND(fVar35 + fVar35 + 0.5) >> 1;
      if (iVar22 < -0x80) {
        iVar21 = -0x80;
      }
      else {
        iVar21 = 0x7f;
        if (iVar22 < 0x7f) {
          iVar21 = iVar22;
        }
      }
      uStack_1bb = (undefined1)iVar21;
      iVar21 = (int)ROUND(local_2d0 * 127.0 + local_2d0 * 127.0 + 0.5) >> 1;
      if (iVar21 < -0x80) {
        iVar18 = -0x80;
      }
      else {
        iVar18 = 0x7f;
        if (iVar21 < 0x7f) {
          iVar18 = iVar21;
        }
      }
      uStack_1ba = (undefined1)iVar18;
      uStack_1b9 = 0x7f;
      if (local_2bc < -0x80) {
        iVar18 = -0x80;
      }
      else {
        iVar18 = 0x7f;
        if (local_2bc < 0x7f) {
          iVar18 = local_2bc;
        }
      }
      local_1b8 = (undefined1)iVar18;
      uStack_1b7 = 0;
      uStack_1b6 = 0;
      if (local_2bc < -0x80) {
        local_308 = CONCAT31(local_308._1_3_,0x80);
      }
      else {
        uVar34 = 0x7f;
        if (local_2bc < 0x7f) {
          uVar34 = (char)local_2bc;
        }
        local_308 = CONCAT31(local_308._1_3_,uVar34);
      }
      uVar33 = local_308;
      local_308._0_3_ = (uint3)(byte)local_308;
      iVar18 = (int)ROUND((float)local_2a0 * 127.0 + (float)local_2a0 * 127.0 + 0.5) >> 1;
      if (iVar18 < -0x80) {
        local_304 = CONCAT31(local_304._1_3_,0x80);
      }
      else {
        uVar34 = 0x7f;
        if (iVar18 < 0x7f) {
          uVar34 = (char)iVar18;
        }
        local_304 = CONCAT31(local_304._1_3_,uVar34);
      }
      uVar13 = local_304;
      iVar18 = (int)ROUND(fVar38 * 127.0 + fVar38 * 127.0 + 0.5) >> 1;
      if (iVar18 < -0x80) {
        local_304._0_2_ = CONCAT11(0x80,(undefined1)local_304);
      }
      else {
        uVar34 = 0x7f;
        if (iVar18 < 0x7f) {
          uVar34 = (char)iVar18;
        }
        local_304._0_2_ = CONCAT11(uVar34,(undefined1)local_304);
      }
      iVar18 = (int)ROUND(local_298 * 127.0 + local_298 * 127.0 + 0.5) >> 1;
      local_304._3_1_ = SUB41(uVar13,3);
      if (iVar18 < -0x80) {
        local_304._0_3_ = CONCAT12(0x80,(undefined2)local_304);
      }
      else {
        uVar34 = 0x7f;
        if (iVar18 < 0x7f) {
          uVar34 = (char)iVar18;
        }
        local_304._0_3_ = CONCAT12(uVar34,(undefined2)local_304);
      }
      if (iVar23 < -0x80) {
        local_300 = CONCAT31(local_300._1_3_,0x80);
      }
      else {
        uVar34 = 0x7f;
        if (iVar23 < 0x7f) {
          uVar34 = (char)iVar23;
        }
        local_300 = CONCAT31(local_300._1_3_,uVar34);
      }
      uVar13 = local_300;
      if (iVar22 < -0x80) {
        local_300._0_2_ = CONCAT11(0x80,(undefined1)local_300);
      }
      else {
        uVar34 = 0x7f;
        if (iVar22 < 0x7f) {
          uVar34 = (char)iVar22;
        }
        local_300._0_2_ = CONCAT11(uVar34,(undefined1)local_300);
      }
      local_300._3_1_ = SUB41(uVar13,3);
      if (iVar21 < -0x80) {
        local_300._0_3_ = CONCAT12(0x80,(undefined2)local_300);
      }
      else {
        uVar34 = 0x7f;
        if (iVar21 < 0x7f) {
          uVar34 = (char)iVar21;
        }
        local_300._0_3_ = CONCAT12(uVar34,(undefined2)local_300);
      }
      auVar37._8_8_ = uStack_210;
      auVar37._0_8_ = local_218;
      auVar3[0xc] = local_308._3_1_;
      auVar3._0_12_ = ZEXT712(0);
      uVar4 = auVar3._10_3_;
      auVar27._0_4_ = uVar33 & 0xff;
      auVar27._4_9_ = (unkuint9)SUB137(ZEXT313(uVar4) << 0x50,6) << 0x10;
      auVar27._13_3_ = 0;
      local_25c = 0;
      auVar26._0_4_ = -(uint)((int)local_228 < (int)auVar27._0_4_);
      auVar26._4_4_ = -(uint)(local_228 < 0);
      auVar26._8_4_ = -(uint)((int)uStack_220 < (int)((uint)uVar4 << 0x10));
      auVar26._12_4_ = -(uint)(uStack_220._4_4_ < (int)(uint)(uVar4 >> 0x10));
      local_24c = 0;
      local_23c = 0;
      auVar27 = auVar26 & auVar37 | auVar27;
      uVar34 = (undefined1)((uint3)(undefined3)local_304 >> 8);
      uVar24 = (ulonglong)CONCAT12(uVar34,(short)(undefined3)local_304) & 0xffffffffffff00ff;
      local_248 = (float)auVar27._0_4_ * (float)local_278;
      local_244 = (float)auVar27._4_4_ * local_278._4_4_;
      local_240 = (float)auVar27._8_4_ * (float)uStack_270;
      auVar5._8_4_ = 0;
      auVar5._0_8_ = uVar24;
      auVar5[0xc] = local_304._3_1_;
      auVar6[8] = (char)((uint3)(undefined3)local_304 >> 0x10);
      auVar6._0_8_ = uVar24;
      auVar6[9] = 0;
      auVar6._10_3_ = auVar5._10_3_;
      auVar11._5_8_ = 0;
      auVar11._0_5_ = auVar6._8_5_;
      auVar7[4] = uVar34;
      auVar7._0_4_ = (uint)uVar24;
      auVar7[5] = 0;
      auVar7._6_7_ = SUB137(auVar11 << 0x40,6);
      auVar29._0_4_ = (uint)uVar24 & 0xffff;
      auVar29._4_9_ = auVar7._4_9_;
      auVar29._13_3_ = 0;
      auVar28._0_4_ = -(uint)((int)local_228 < (int)auVar29._0_4_);
      auVar28._4_4_ = -(uint)(local_228._4_4_ < auVar7._4_4_);
      auVar28._8_4_ = -(uint)((int)uStack_220 < auVar6._8_4_);
      auVar28._12_4_ = -(uint)(uStack_220._4_4_ < (int)(uint)(uint3)(auVar5._10_3_ >> 0x10));
      auVar29 = auVar28 & auVar37 | auVar29;
      uVar34 = (undefined1)((uint3)(undefined3)local_300 >> 8);
      local_258 = (float)auVar29._0_4_ * (float)local_278;
      local_254 = (float)auVar29._4_4_ * local_278._4_4_;
      local_250 = (float)auVar29._8_4_ * (float)uStack_270;
      auVar8[0xc] = local_300._3_1_;
      auVar8._0_12_ = ZEXT812(0);
      auVar9._10_3_ = auVar8._10_3_;
      auVar9._0_10_ = (unkuint10)(byte)((uint3)(undefined3)local_300 >> 0x10) << 0x40;
      auVar12._5_8_ = 0;
      auVar12._0_5_ = auVar9._8_5_;
      uVar33 = CONCAT13(0,CONCAT12(uVar34,(ushort)(byte)(undefined3)local_300));
      auVar10[4] = uVar34;
      auVar10._0_4_ = uVar33;
      auVar10[5] = 0;
      auVar10._6_7_ = SUB137(auVar12 << 0x40,6);
      auVar31._0_4_ = uVar33 & 0xffff;
      auVar31._4_9_ = auVar10._4_9_;
      auVar31._13_3_ = 0;
      auVar30._0_4_ = -(uint)((int)local_228 < (int)auVar31._0_4_);
      auVar30._4_4_ = -(uint)(local_228._4_4_ < auVar10._4_4_);
      auVar30._8_4_ = -(uint)((int)uStack_220 < auVar9._8_4_);
      auVar30._12_4_ = -(uint)(uStack_220._4_4_ < (int)(uint)(uint3)(auVar8._10_3_ >> 0x10));
      auVar31 = auVar30 & auVar37 | auVar31;
      local_268 = (float)auVar31._0_4_ * (float)local_278;
      local_264 = (float)auVar31._4_4_ * local_278._4_4_;
      local_260 = (float)auVar31._8_4_ * (float)uStack_270;
      local_238 = 0;
      uStack_230 = 0x3f80000000000000;
      local_290 = param_4;
      uStack_200 = local_2b8;
      local_1f8 = fVar32;
      fVar20 = (float)FMatrix::Determinant(&local_268);
      if (0.0 <= fVar20) {
        fVar20 = 1.0;
      }
      else {
        fVar20 = -1.0;
      }
      iVar23 = (int)param_6[1];
      uStack_1b5 = 0x7f;
      if (fVar20 < 0.0) {
        uStack_1b5 = 0x81;
      }
      *(int *)(param_6 + 1) = iVar23 + 1;
      if (*(int *)((longlong)param_6 + 0xc) < iVar23 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_6,iVar23);
      }
      lVar17 = *param_6;
      lVar19 = (longlong)iVar23 * 0x5c;
      uStack_19c = 0x3f800000;
      *(undefined8 *)(lVar19 + lVar17) = local_208;
      ((undefined8 *)(lVar19 + lVar17))[1] = CONCAT44(uStack_1fc,uStack_200);
      puVar1 = (undefined8 *)(lVar19 + 0x10 + lVar17);
      *puVar1 = CONCAT44(uStack_1f4,local_1f8);
      puVar1[1] = uStack_1f0;
      puVar1 = (undefined8 *)(lVar19 + 0x20 + lVar17);
      *puVar1 = local_1e8;
      puVar1[1] = uStack_1e0;
      puVar1 = (undefined8 *)(lVar19 + 0x30 + lVar17);
      *puVar1 = local_1d8;
      puVar1[1] = uStack_1d0;
      puVar1 = (undefined8 *)(lVar19 + 0x40 + lVar17);
      *puVar1 = local_1c8;
      puVar1[1] = CONCAT17(uStack_1b9,
                           CONCAT16(uStack_1ba,CONCAT15(uStack_1bb,CONCAT14(uStack_1bc,uStack_1c0)))
                          );
      *(ulonglong *)(lVar19 + 0x50 + lVar17) =
           CONCAT44(uStack_1b4,
                    CONCAT13(uStack_1b5,CONCAT12(uStack_1b6,CONCAT11(uStack_1b7,local_1b8))));
      *(undefined4 *)(lVar19 + 0x58 + lVar17) = local_1b0;
      uStack_1a0 = *(undefined4 *)(lVar25 + 8 + lVar16 * 0xc);
      fVar20 = *(float *)(lVar25 + lVar16 * 0xc);
      local_1a8 = *(undefined8 *)(lVar25 + lVar16 * 0xc);
      iVar22 = local_2c8;
      if (fVar36 != 0.0) {
        iVar22 = (int)fVar36 - 1;
      }
      lVar17 = (longlong)iVar22;
      fVar35 = *(float *)(lVar25 + 8 + lVar17 * 0xc);
      fVar38 = *(float *)(lVar25 + 4 + lVar17 * 0xc);
      fVar2 = *(float *)(lVar25 + lVar17 * 0xc);
      local_2f8 = (fVar35 * *(float *)(lVar25 + 4 + lVar16 * 0xc) -
                  fVar38 * *(float *)(lVar25 + 8 + lVar16 * 0xc)) + fVar40;
      local_2f0 = (fVar20 * fVar38 - fVar2 * *(float *)(lVar25 + 4 + lVar16 * 0xc)) + fVar39;
      local_2f4 = (fVar2 * *(float *)(lVar25 + 8 + lVar16 * 0xc) - fVar20 * fVar35) + fVar41;
      fVar20 = local_2f4 * local_2f4 + local_2f8 * local_2f8 + local_2f0 * local_2f0;
      if (fVar20 != 1.0) {
        if (1e-08 <= fVar20) {
          auVar37 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
          fVar35 = auVar37._0_4_;
          fVar35 = fVar35 + fVar35 * (0.5 - fVar20 * 0.5 * fVar35 * fVar35);
          fVar35 = fVar35 + fVar35 * (0.5 - fVar20 * 0.5 * fVar35 * fVar35);
          local_2f8 = fVar35 * local_2f8;
          local_2f0 = fVar35 * local_2f0;
          local_2f4 = fVar35 * local_2f4;
        }
        else {
          local_2f8 = DAT_1468b5d90;
          local_2f0 = DAT_1468b5d98;
          local_2f4 = DAT_1468b5d94;
        }
      }
      local_198 = fVar32;
      FDynamicMeshVertex::SetTangents(&local_1a8,&local_2d8,&local_2a0,&local_2f8);
      iVar22 = (int)param_6[1];
      *(int *)(param_6 + 1) = iVar22 + 1;
      if (*(int *)((longlong)param_6 + 0xc) < iVar22 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_6,iVar22);
      }
      lVar16 = *param_6;
      lVar17 = (longlong)iVar22 * 0x5c;
      uStack_13c = 0x3f800000;
      *(undefined8 *)(lVar17 + lVar16) = local_1a8;
      ((undefined8 *)(lVar17 + lVar16))[1] = CONCAT44(uStack_19c,uStack_1a0);
      puVar1 = (undefined8 *)(lVar17 + 0x10 + lVar16);
      *puVar1 = CONCAT44(uStack_194,local_198);
      puVar1[1] = uStack_190;
      puVar1 = (undefined8 *)(lVar17 + 0x20 + lVar16);
      *puVar1 = local_188;
      puVar1[1] = uStack_180;
      puVar1 = (undefined8 *)(lVar17 + 0x30 + lVar16);
      *puVar1 = local_178;
      puVar1[1] = uStack_170;
      puVar1 = (undefined8 *)(lVar17 + 0x40 + lVar16);
      *puVar1 = local_168;
      puVar1[1] = CONCAT44(uStack_15c,uStack_160);
      *(ulonglong *)(lVar17 + 0x50 + lVar16) = CONCAT44(uStack_154,uStack_158);
      *(undefined4 *)(lVar17 + 0x58 + lVar16) = local_150;
      uStack_140 = *(undefined4 *)(lVar25 + 8 + local_280 * 4);
      local_148 = *(undefined8 *)(lVar25 + local_280 * 4);
      fVar32 = *(float *)(lVar25 + local_280 * 4);
      local_138 = (float)local_2c4 * local_2e0;
      lVar16 = (longlong)(int)(((int)fVar36 + 2U) % (uint)local_2dc);
      fVar36 = *(float *)(lVar25 + 8 + lVar16 * 0xc);
      fVar20 = *(float *)(lVar25 + lVar16 * 0xc);
      fVar35 = *(float *)(lVar25 + 4 + lVar16 * 0xc);
      local_2ec = (fVar35 * *(float *)(lVar25 + 8 + local_280 * 4) -
                  fVar36 * *(float *)(lVar25 + 4 + local_280 * 4)) + fVar40;
      local_2e8 = (fVar32 * fVar36 - fVar20 * *(float *)(lVar25 + 8 + local_280 * 4)) + fVar41;
      local_2e4 = (fVar20 * *(float *)(lVar25 + 4 + local_280 * 4) - fVar32 * fVar35) + fVar39;
      fVar36 = local_2e8 * local_2e8 + local_2ec * local_2ec + local_2e4 * local_2e4;
      if (fVar36 != 1.0) {
        if (1e-08 <= fVar36) {
          auVar37 = rsqrtss(ZEXT416((uint)fVar36),ZEXT416((uint)fVar36));
          fVar32 = auVar37._0_4_;
          fVar32 = fVar32 + fVar32 * (0.5 - fVar36 * 0.5 * fVar32 * fVar32);
          fVar32 = fVar32 + fVar32 * (0.5 - fVar36 * 0.5 * fVar32 * fVar32);
          local_2ec = fVar32 * local_2ec;
          local_2e4 = fVar32 * local_2e4;
          local_2e8 = fVar32 * local_2e8;
        }
        else {
          local_2ec = DAT_1468b5d90;
          local_2e4 = DAT_1468b5d98;
          local_2e8 = DAT_1468b5d94;
        }
      }
      FDynamicMeshVertex::SetTangents(&local_148,&local_2d8,&local_2a0,&local_2ec);
      iVar21 = (int)param_6[1];
      *(int *)(param_6 + 1) = iVar21 + 1;
      if (*(int *)((longlong)param_6 + 0xc) < iVar21 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_6,iVar21);
      }
      lVar25 = *param_6;
      lVar16 = (longlong)iVar21 * 0x5c;
      *(undefined8 *)(lVar16 + lVar25) = local_148;
      ((undefined8 *)(lVar16 + lVar25))[1] = CONCAT44(uStack_13c,uStack_140);
      puVar1 = (undefined8 *)(lVar16 + 0x10 + lVar25);
      *puVar1 = CONCAT44(uStack_134,local_138);
      puVar1[1] = uStack_130;
      puVar1 = (undefined8 *)(lVar16 + 0x20 + lVar25);
      *puVar1 = local_128;
      puVar1[1] = uStack_120;
      puVar1 = (undefined8 *)(lVar16 + 0x30 + lVar25);
      *puVar1 = local_118;
      puVar1[1] = uStack_110;
      puVar1 = (undefined8 *)(lVar16 + 0x40 + lVar25);
      *puVar1 = local_108;
      puVar1[1] = CONCAT44(uStack_fc,uStack_100);
      *(ulonglong *)(lVar16 + 0x50 + lVar25) = CONCAT44(uStack_f4,uStack_f8);
      *(undefined4 *)(lVar16 + 0x58 + lVar25) = local_f0;
      iVar18 = (int)param_7[1];
      iVar14 = iVar18 + 1;
      *(int *)(param_7 + 1) = iVar14;
      if (param_3 < 0.0) {
        if (*(int *)((longlong)param_7 + 0xc) < iVar14) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_7);
        }
        *(int *)(*param_7 + (longlong)iVar18 * 4) = iVar23;
        lVar25 = param_7[1];
        iVar23 = (int)lVar25 + 1;
        *(int *)(param_7 + 1) = iVar23;
        if (*(int *)((longlong)param_7 + 0xc) < iVar23) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_7);
        }
        *(int *)(*param_7 + (longlong)(int)lVar25 * 4) = iVar21;
        lVar25 = param_7[1];
        iVar23 = (int)lVar25 + 1;
        *(int *)(param_7 + 1) = iVar23;
        if (*(int *)((longlong)param_7 + 0xc) < iVar23) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_7);
        }
        *(int *)(*param_7 + (longlong)(int)lVar25 * 4) = iVar22;
      }
      else {
        if (*(int *)((longlong)param_7 + 0xc) < iVar14) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_7);
        }
        *(int *)(*param_7 + (longlong)iVar18 * 4) = iVar23;
        lVar25 = param_7[1];
        iVar23 = (int)lVar25 + 1;
        *(int *)(param_7 + 1) = iVar23;
        if (*(int *)((longlong)param_7 + 0xc) < iVar23) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_7);
        }
        *(int *)(*param_7 + (longlong)(int)lVar25 * 4) = iVar22;
        lVar25 = param_7[1];
        iVar23 = (int)lVar25 + 1;
        *(int *)(param_7 + 1) = iVar23;
        if (*(int *)((longlong)param_7 + 0xc) < iVar23) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_7);
        }
        *(int *)(*param_7 + (longlong)(int)lVar25 * 4) = iVar21;
      }
      uVar24 = (ulonglong)(uint)local_2dc;
      lVar25 = local_2a8;
      param_4 = local_2fc;
      fVar36 = local_2c0;
    } while ((uint)local_2c0 < (uint)local_2dc);
  }
  if (local_2a8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1426fc580 FUN_1426fc580 body=4208 status=ok
// SIG undefined FUN_1426fc580(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426fc580(float *param_1,float *param_2,float *param_3,float *param_4,float param_5,
                  float param_6,float param_7,undefined8 *param_8,longlong *param_9)

{
  float fVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [14];
  unkbyte10 Var9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [14];
  undefined1 auVar12 [12];
  undefined1 auVar13 [14];
  undefined1 auVar14 [12];
  undefined1 auVar15 [14];
  undefined1 auVar16 [12];
  undefined1 auVar17 [14];
  undefined1 auVar18 [12];
  undefined1 auVar19 [14];
  undefined1 auVar20 [12];
  undefined4 uVar21;
  float *pfVar22;
  float *pfVar23;
  longlong *plVar24;
  float fVar25;
  undefined1 uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  longlong lVar30;
  int iVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined2 uVar138;
  undefined2 uVar139;
  undefined2 uVar140;
  undefined2 uVar141;
  undefined2 uVar142;
  undefined2 uVar143;
  undefined1 auVar55 [16];
  undefined1 auVar67 [16];
  undefined1 auVar79 [16];
  undefined1 auVar91 [16];
  undefined1 auVar103 [16];
  undefined1 auVar115 [16];
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  undefined1 auVar122 [16];
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  undefined1 unaff_XMM15_Ba;
  undefined1 uVar130;
  undefined1 unaff_XMM15_Bb;
  undefined1 uVar131;
  undefined1 unaff_XMM15_Bc;
  undefined1 uVar132;
  undefined1 unaff_XMM15_Bd;
  undefined1 uVar133;
  undefined1 unaff_XMM15_Be;
  undefined1 uVar134;
  undefined1 unaff_XMM15_Bf;
  undefined1 uVar135;
  undefined1 unaff_XMM15_Bg;
  undefined1 uVar136;
  undefined1 unaff_XMM15_Bh;
  undefined1 uVar137;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  int local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float *local_1b0;
  float *local_1a8;
  float local_198;
  float local_194;
  float local_190;
  undefined4 local_18c;
  float local_188;
  float local_184;
  float local_180;
  undefined4 local_17c;
  float local_178;
  float local_174;
  float local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong *local_158;
  float local_148;
  undefined8 local_138;
  float fStack_130;
  float fStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined1 uStack_ec;
  undefined1 uStack_eb;
  undefined1 uStack_ea;
  undefined1 uStack_e9;
  undefined1 local_e8;
  undefined1 uStack_e7;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  undefined4 uStack_e4;
  float local_e0;
  ulonglong local_d8;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar56 [16];
  undefined1 auVar68 [16];
  undefined1 auVar80 [16];
  undefined1 auVar92 [16];
  undefined1 auVar104 [16];
  undefined1 auVar116 [16];
  undefined1 auVar57 [16];
  undefined1 auVar69 [16];
  undefined1 auVar81 [16];
  undefined1 auVar93 [16];
  undefined1 auVar105 [16];
  undefined1 auVar117 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar54 [16];
  undefined1 auVar66 [16];
  undefined1 auVar78 [16];
  undefined1 auVar90 [16];
  undefined1 auVar102 [16];
  undefined1 auVar114 [16];
  undefined1 auVar46 [16];
  undefined1 auVar58 [16];
  undefined1 auVar70 [16];
  undefined1 auVar82 [16];
  undefined1 auVar94 [16];
  undefined1 auVar106 [16];
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  uVar33 = (ulonglong)(uint)param_7;
  local_1cc = *(int *)(param_8 + 1);
  fVar25 = 0.0;
  local_158 = param_9;
  fVar129 = 0.0;
  local_1b8 = 1.0 / (float)uVar33;
  local_1c4 = local_1b8 * 6.2831855;
  local_1c0 = param_6 * *param_4;
  local_1bc = param_6 * param_4[1];
  fVar1 = param_4[2];
  local_1b0 = param_2;
  local_1a8 = param_1;
  if (param_7 != 0.0) {
    local_1d8 = CONCAT13(0x7f,(undefined3)local_1d8);
    uVar6 = CONCAT13(unaff_XMM15_Bd,CONCAT12(unaff_XMM15_Bc,CONCAT11(unaff_XMM15_Bb,unaff_XMM15_Ba))
                    ) ^
            CONCAT13(unaff_XMM15_Bd,CONCAT12(unaff_XMM15_Bc,CONCAT11(unaff_XMM15_Bb,unaff_XMM15_Ba))
                    );
    unaff_XMM15_Ba = (undefined1)uVar6;
    unaff_XMM15_Bb = (undefined1)(uVar6 >> 8);
    unaff_XMM15_Bc = (undefined1)(uVar6 >> 0x10);
    unaff_XMM15_Bd = (undefined1)(uVar6 >> 0x18);
    uVar7 = CONCAT13(unaff_XMM15_Bh,CONCAT12(unaff_XMM15_Bg,CONCAT11(unaff_XMM15_Bf,unaff_XMM15_Be))
                    ) ^
            CONCAT13(unaff_XMM15_Bh,CONCAT12(unaff_XMM15_Bg,CONCAT11(unaff_XMM15_Bf,unaff_XMM15_Be))
                    );
    unaff_XMM15_Be = (undefined1)uVar7;
    unaff_XMM15_Bf = (undefined1)(uVar7 >> 8);
    unaff_XMM15_Bg = (undefined1)(uVar7 >> 0x10);
    unaff_XMM15_Bh = (undefined1)(uVar7 >> 0x18);
    local_1d4 = CONCAT13(0x7f,(undefined3)local_1d4);
    local_1d0 = CONCAT13(0x7f,(undefined3)local_1d0);
    do {
      pfVar22 = local_1a8;
      fVar25 = (float)((int)fVar25 + 1);
      uVar34 = __libm_sse2_sincosf_(param_1,(float)(uint)fVar25 * local_1c4);
      fVar118 = (float)uVar34;
      fVar123 = (float)((ulonglong)uVar34 >> 0x20);
      local_148 = (fVar118 * param_3[2] + fVar123 * param_2[2]) * param_5 + pfVar22[2];
      fVar127 = (fVar123 * *param_2 + fVar118 * *param_3) * param_5 + *pfVar22;
      fVar128 = (fVar118 * param_3[1] + fVar123 * param_2[1]) * param_5 + pfVar22[1];
      fVar126 = local_148 - pfVar22[2];
      fVar123 = fVar127 - *pfVar22;
      fVar124 = fVar128 - pfVar22[1];
      fVar118 = fVar124 * fVar124 + fVar123 * fVar123 + fVar126 * fVar126;
      if (1e-08 < fVar118) {
        auVar122 = rsqrtss(ZEXT416((uint)fVar118),ZEXT416((uint)fVar118));
        local_1c8 = auVar122._0_4_;
        local_1c8 = local_1c8 + local_1c8 * (0.5 - fVar118 * 0.5 * local_1c8 * local_1c8);
        local_1c8 = local_1c8 + local_1c8 * (0.5 - fVar118 * 0.5 * local_1c8 * local_1c8);
        fVar123 = fVar123 * local_1c8;
        fVar124 = fVar124 * local_1c8;
        fVar126 = fVar126 * local_1c8;
      }
      local_148 = local_148 - param_6 * fVar1;
      local_138 = CONCAT44(fVar128 - local_1bc,fVar127 - local_1c0);
      fVar128 = -*param_4;
      fVar118 = -param_4[1];
      local_128 = 0;
      fVar127 = -param_4[2];
      fVar125 = fVar128 * 127.0;
      iVar27 = (int)ROUND(fVar125 + fVar125 + 0.5) >> 1;
      if (iVar27 < -0x80) {
        iVar31 = -0x80;
      }
      else {
        iVar31 = 0x7f;
        if (iVar27 < 0x7f) {
          iVar31 = iVar27;
        }
      }
      fVar119 = fVar118 * 127.0;
      uStack_ec = (undefined1)iVar31;
      iVar27 = (int)ROUND(fVar119 + fVar119 + 0.5) >> 1;
      if (iVar27 < -0x80) {
        iVar31 = -0x80;
      }
      else {
        iVar31 = 0x7f;
        if (iVar27 < 0x7f) {
          iVar31 = iVar27;
        }
      }
      fVar120 = fVar127 * 127.0;
      uStack_eb = (undefined1)iVar31;
      iVar27 = (int)ROUND(fVar120 + fVar120 + 0.5) >> 1;
      if (iVar27 < -0x80) {
        iVar31 = -0x80;
      }
      else {
        iVar31 = 0x7f;
        if (iVar27 < 0x7f) {
          iVar31 = iVar27;
        }
      }
      uStack_ea = (undefined1)iVar31;
      uStack_e9 = 0x7f;
      iVar27 = (int)ROUND(fVar123 * 254.0 + 0.5) >> 1;
      if (iVar27 < -0x80) {
        iVar31 = -0x80;
      }
      else {
        iVar31 = 0x7f;
        if (iVar27 < 0x7f) {
          iVar31 = iVar27;
        }
      }
      local_e8 = (undefined1)iVar31;
      iVar31 = (int)ROUND(fVar124 * 254.0 + 0.5) >> 1;
      if (iVar31 < -0x80) {
        iVar28 = -0x80;
      }
      else {
        iVar28 = 0x7f;
        if (iVar31 < 0x7f) {
          iVar28 = iVar31;
        }
      }
      uStack_e7 = (undefined1)iVar28;
      iVar28 = (int)ROUND(fVar126 * 254.0 + 0.5) >> 1;
      if (iVar28 < -0x80) {
        iVar29 = -0x80;
      }
      else {
        iVar29 = 0x7f;
        if (iVar28 < 0x7f) {
          iVar29 = iVar28;
        }
      }
      uStack_e6 = (undefined1)iVar29;
      if (iVar27 < -0x80) {
        local_1d8 = CONCAT31(local_1d8._1_3_,0x80);
      }
      else {
        uVar130 = 0x7f;
        if (iVar27 < 0x7f) {
          uVar130 = (char)iVar27;
        }
        local_1d8 = CONCAT31(local_1d8._1_3_,uVar130);
      }
      uVar21 = local_1d8;
      if (iVar31 < -0x80) {
        local_1d8._0_2_ = CONCAT11(0x80,(undefined1)local_1d8);
      }
      else {
        uVar130 = 0x7f;
        if (iVar31 < 0x7f) {
          uVar130 = (char)iVar31;
        }
        local_1d8._0_2_ = CONCAT11(uVar130,(undefined1)local_1d8);
      }
      local_1d8._3_1_ = SUB41(uVar21,3);
      if (iVar28 < -0x80) {
        local_1d8._0_3_ = CONCAT12(0x80,(undefined2)local_1d8);
      }
      else {
        uVar130 = 0x7f;
        if (iVar28 < 0x7f) {
          uVar130 = (char)iVar28;
        }
        local_1d8._0_3_ = CONCAT12(uVar130,(undefined2)local_1d8);
      }
      fVar121 = (fVar126 * fVar118 - fVar124 * fVar127) * 127.0;
      iVar27 = (int)ROUND(fVar121 + fVar121 + 0.5) >> 1;
      if (iVar27 < -0x80) {
        local_1d4 = CONCAT31(local_1d4._1_3_,0x80);
      }
      else {
        uVar130 = 0x7f;
        if (iVar27 < 0x7f) {
          uVar130 = (char)iVar27;
        }
        local_1d4 = CONCAT31(local_1d4._1_3_,uVar130);
      }
      uVar21 = local_1d4;
      fVar126 = (fVar123 * fVar127 - fVar126 * fVar128) * 127.0;
      iVar27 = (int)ROUND(fVar126 + fVar126 + 0.5) >> 1;
      if (iVar27 < -0x80) {
        local_1d4._0_2_ = CONCAT11(0x80,(undefined1)local_1d4);
      }
      else {
        uVar130 = 0x7f;
        if (iVar27 < 0x7f) {
          uVar130 = (char)iVar27;
        }
        local_1d4._0_2_ = CONCAT11(uVar130,(undefined1)local_1d4);
      }
      fVar118 = (fVar124 * fVar128 - fVar123 * fVar118) * 127.0;
      iVar27 = (int)ROUND(fVar118 + fVar118 + 0.5) >> 1;
      local_1d4._3_1_ = SUB41(uVar21,3);
      if (iVar27 < -0x80) {
        local_1d4._0_3_ = CONCAT12(0x80,(undefined2)local_1d4);
      }
      else {
        uVar130 = 0x7f;
        if (iVar27 < 0x7f) {
          uVar130 = (char)iVar27;
        }
        local_1d4._0_3_ = CONCAT12(uVar130,(undefined2)local_1d4);
      }
      iVar27 = (int)ROUND(fVar125 + fVar125 + 0.5) >> 1;
      if (iVar27 < -0x80) {
        local_1d0 = CONCAT31(local_1d0._1_3_,0x80);
      }
      else {
        uVar130 = 0x7f;
        if (iVar27 < 0x7f) {
          uVar130 = (char)iVar27;
        }
        local_1d0 = CONCAT31(local_1d0._1_3_,uVar130);
      }
      uVar21 = local_1d0;
      iVar27 = (int)ROUND(fVar119 + fVar119 + 0.5) >> 1;
      if (iVar27 < -0x80) {
        local_1d0._0_2_ = CONCAT11(0x80,(undefined1)local_1d0);
      }
      else {
        uVar130 = 0x7f;
        if (iVar27 < 0x7f) {
          uVar130 = (char)iVar27;
        }
        local_1d0._0_2_ = CONCAT11(uVar130,(undefined1)local_1d0);
      }
      iVar27 = (int)ROUND(fVar120 + fVar120 + 0.5) >> 1;
      local_1d0._3_1_ = SUB41(uVar21,3);
      if (iVar27 < -0x80) {
        local_1d0._0_3_ = CONCAT12(0x80,(undefined2)local_1d0);
      }
      else {
        uVar130 = 0x7f;
        if (iVar27 < 0x7f) {
          uVar130 = (char)iVar27;
        }
        local_1d0._0_3_ = CONCAT12(uVar130,(undefined2)local_1d0);
      }
      auVar54._0_15_ = ZEXT415(local_1d8);
      auVar54[0xf] = unaff_XMM15_Bh;
      auVar53._14_2_ = auVar54._14_2_;
      auVar53._0_13_ = ZEXT413(local_1d8);
      auVar53[0xd] = unaff_XMM15_Bg;
      auVar52._13_3_ = auVar53._13_3_;
      auVar52._0_13_ = ZEXT413(local_1d8);
      auVar51._12_4_ = auVar52._12_4_;
      auVar51._4_7_ = 0;
      auVar51._0_4_ = local_1d8;
      auVar51[0xb] = unaff_XMM15_Bf;
      auVar50._11_5_ = auVar51._11_5_;
      auVar50._4_7_ = 0;
      auVar50._0_4_ = local_1d8;
      auVar49._10_6_ = auVar50._10_6_;
      auVar49._4_5_ = 0;
      auVar49._0_4_ = local_1d8;
      auVar49[9] = unaff_XMM15_Be;
      auVar48._9_7_ = auVar49._9_7_;
      auVar48._4_5_ = 0;
      auVar48._0_4_ = local_1d8;
      Var9 = CONCAT91(CONCAT81(auVar48._8_8_,unaff_XMM15_Bd),local_1d8._3_1_);
      auVar47._6_10_ = Var9;
      auVar47[5] = unaff_XMM15_Bc;
      auVar47[4] = (char)((uint3)(undefined3)local_1d8 >> 0x10);
      auVar47._0_4_ = local_1d8;
      auVar8._2_12_ = auVar47._4_12_;
      auVar8[1] = unaff_XMM15_Bb;
      auVar8[0] = (char)((uint3)(undefined3)local_1d8 >> 8);
      uVar138 = CONCAT11(unaff_XMM15_Ba,(char)(undefined3)local_1d8);
      auVar46._2_14_ = auVar8;
      uVar5 = (undefined2)(uVar7 >> 0x10);
      auVar57._0_12_ = auVar46._0_12_;
      auVar57._12_2_ = (short)Var9;
      auVar57._14_2_ = uVar5;
      auVar56._12_4_ = auVar57._12_4_;
      auVar56._0_10_ = auVar46._0_10_;
      uVar4 = (undefined2)uVar7;
      auVar56._10_2_ = uVar4;
      auVar55._10_6_ = auVar56._10_6_;
      auVar55._0_8_ = auVar46._0_8_;
      auVar55._8_2_ = auVar47._4_2_;
      uVar3 = (undefined2)(uVar6 >> 0x10);
      auVar10._4_8_ = auVar55._8_8_;
      auVar10._2_2_ = uVar3;
      auVar10._0_2_ = auVar8._0_2_;
      uVar2 = (undefined2)uVar6;
      auVar35._0_4_ = CONCAT22(uVar2,uVar138);
      auVar35._4_12_ = auVar10;
      local_18c = 0;
      auVar122._0_4_ = -(uint)(0x7f < auVar35._0_4_);
      auVar122._4_4_ = -(uint)(0x7f < auVar10._0_4_);
      auVar122._8_4_ = -(uint)(0x7f < auVar55._8_4_);
      auVar122._12_4_ = -(uint)(0x7f < auVar56._12_4_);
      local_17c = 0;
      local_16c = 0;
      auVar35 = auVar122 & _DAT_144101760 | auVar35;
      auVar66._0_15_ = ZEXT415(local_1d4);
      auVar66[0xf] = unaff_XMM15_Bh;
      auVar65._14_2_ = auVar66._14_2_;
      auVar65._0_13_ = ZEXT413(local_1d4);
      auVar65[0xd] = unaff_XMM15_Bg;
      auVar64._13_3_ = auVar65._13_3_;
      auVar64._0_13_ = ZEXT413(local_1d4);
      auVar63._12_4_ = auVar64._12_4_;
      auVar63._4_7_ = 0;
      auVar63._0_4_ = local_1d4;
      auVar63[0xb] = unaff_XMM15_Bf;
      auVar62._11_5_ = auVar63._11_5_;
      auVar62._4_7_ = 0;
      auVar62._0_4_ = local_1d4;
      auVar61._10_6_ = auVar62._10_6_;
      auVar61._4_5_ = 0;
      auVar61._0_4_ = local_1d4;
      auVar61[9] = unaff_XMM15_Be;
      auVar60._9_7_ = auVar61._9_7_;
      auVar60._4_5_ = 0;
      auVar60._0_4_ = local_1d4;
      Var9 = CONCAT91(CONCAT81(auVar60._8_8_,unaff_XMM15_Bd),local_1d4._3_1_);
      auVar59._6_10_ = Var9;
      auVar59[5] = unaff_XMM15_Bc;
      auVar59[4] = (char)((uint3)(undefined3)local_1d4 >> 0x10);
      auVar59._0_4_ = local_1d4;
      auVar11._2_12_ = auVar59._4_12_;
      auVar11[1] = unaff_XMM15_Bb;
      auVar11[0] = (char)((uint3)(undefined3)local_1d4 >> 8);
      uVar139 = CONCAT11(unaff_XMM15_Ba,(char)(undefined3)local_1d4);
      auVar58._2_14_ = auVar11;
      auVar69._0_12_ = auVar58._0_12_;
      auVar69._12_2_ = (short)Var9;
      auVar69._14_2_ = uVar5;
      auVar68._12_4_ = auVar69._12_4_;
      auVar68._0_10_ = auVar58._0_10_;
      auVar68._10_2_ = uVar4;
      auVar67._10_6_ = auVar68._10_6_;
      auVar67._0_8_ = auVar58._0_8_;
      auVar67._8_2_ = auVar59._4_2_;
      auVar12._4_8_ = auVar67._8_8_;
      auVar12._2_2_ = uVar3;
      auVar12._0_2_ = auVar11._0_2_;
      auVar37._0_4_ = CONCAT22(uVar2,uVar139);
      auVar37._4_12_ = auVar12;
      local_178 = (float)auVar35._0_4_ * 0.007874016;
      local_174 = (float)auVar35._4_4_ * 0.007874016;
      local_170 = (float)auVar35._8_4_ * 0.007874016;
      auVar36._0_4_ = -(uint)(0x7f < auVar37._0_4_);
      auVar36._4_4_ = -(uint)(0x7f < auVar12._0_4_);
      auVar36._8_4_ = -(uint)(0x7f < auVar67._8_4_);
      auVar36._12_4_ = -(uint)(0x7f < auVar68._12_4_);
      auVar37 = auVar36 & _DAT_144101760 | auVar37;
      auVar78._0_15_ = ZEXT415(local_1d0);
      auVar78[0xf] = unaff_XMM15_Bh;
      auVar77._14_2_ = auVar78._14_2_;
      auVar77._0_13_ = ZEXT413(local_1d0);
      auVar77[0xd] = unaff_XMM15_Bg;
      auVar76._13_3_ = auVar77._13_3_;
      auVar76._0_13_ = ZEXT413(local_1d0);
      auVar75._12_4_ = auVar76._12_4_;
      auVar75._4_7_ = 0;
      auVar75._0_4_ = local_1d0;
      auVar75[0xb] = unaff_XMM15_Bf;
      auVar74._11_5_ = auVar75._11_5_;
      auVar74._4_7_ = 0;
      auVar74._0_4_ = local_1d0;
      auVar73._10_6_ = auVar74._10_6_;
      auVar73._4_5_ = 0;
      auVar73._0_4_ = local_1d0;
      auVar73[9] = unaff_XMM15_Be;
      auVar72._9_7_ = auVar73._9_7_;
      auVar72._4_5_ = 0;
      auVar72._0_4_ = local_1d0;
      Var9 = CONCAT91(CONCAT81(auVar72._8_8_,unaff_XMM15_Bd),local_1d0._3_1_);
      auVar71._6_10_ = Var9;
      auVar71[5] = unaff_XMM15_Bc;
      auVar71[4] = (char)((uint3)(undefined3)local_1d0 >> 0x10);
      auVar71._0_4_ = local_1d0;
      auVar13._2_12_ = auVar71._4_12_;
      auVar13[1] = unaff_XMM15_Bb;
      auVar13[0] = (char)((uint3)(undefined3)local_1d0 >> 8);
      uVar140 = CONCAT11(unaff_XMM15_Ba,(char)(undefined3)local_1d0);
      auVar70._2_14_ = auVar13;
      local_188 = (float)auVar37._0_4_ * 0.007874016;
      local_184 = (float)auVar37._4_4_ * 0.007874016;
      local_180 = (float)auVar37._8_4_ * 0.007874016;
      auVar81._0_12_ = auVar70._0_12_;
      auVar81._12_2_ = (short)Var9;
      auVar81._14_2_ = uVar5;
      auVar80._12_4_ = auVar81._12_4_;
      auVar80._0_10_ = auVar70._0_10_;
      auVar80._10_2_ = uVar4;
      auVar79._10_6_ = auVar80._10_6_;
      auVar79._0_8_ = auVar70._0_8_;
      auVar79._8_2_ = auVar71._4_2_;
      auVar14._4_8_ = auVar79._8_8_;
      auVar14._2_2_ = uVar3;
      auVar14._0_2_ = auVar13._0_2_;
      auVar39._0_4_ = CONCAT22(uVar2,uVar140);
      auVar39._4_12_ = auVar14;
      auVar38._0_4_ = -(uint)(0x7f < auVar39._0_4_);
      auVar38._4_4_ = -(uint)(0x7f < auVar14._0_4_);
      auVar38._8_4_ = -(uint)(0x7f < auVar79._8_4_);
      auVar38._12_4_ = -(uint)(0x7f < auVar80._12_4_);
      auVar39 = auVar38 & _DAT_144101760 | auVar39;
      local_198 = (float)auVar39._0_4_ * 0.007874016;
      local_194 = (float)auVar39._4_4_ * 0.007874016;
      local_190 = (float)auVar39._8_4_ * 0.007874016;
      local_168 = 0;
      uStack_160 = 0x3f80000000000000;
      fStack_130 = local_148;
      fStack_12c = fVar129;
      fVar118 = (float)FMatrix::Determinant(&local_198);
      if (0.0 <= fVar118) {
        fVar118 = 1.0;
      }
      else {
        fVar118 = -1.0;
      }
      iVar27 = *(int *)(param_8 + 1);
      lVar30 = (longlong)iVar27;
      uStack_e5 = 0x7f;
      if (fVar118 < 0.0) {
        uStack_e5 = 0x81;
      }
      *(int *)(param_8 + 1) = iVar27 + 1;
      if (*(int *)((longlong)param_8 + 0xc) < iVar27 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_8,iVar27);
      }
      param_1 = (float *)*param_8;
      fVar129 = fVar129 + local_1b8;
      *(undefined8 *)(param_1 + lVar30 * 0x17) = local_138;
      *(ulonglong *)(param_1 + lVar30 * 0x17 + 2) = CONCAT44(fStack_12c,fStack_130);
      *(ulonglong *)(param_1 + lVar30 * 0x17 + 4) = CONCAT44(uStack_124,local_128);
      *(undefined8 *)(param_1 + lVar30 * 0x17 + 4 + 2) = uStack_120;
      *(undefined8 *)(param_1 + lVar30 * 0x17 + 8) = local_118;
      *(undefined8 *)(param_1 + lVar30 * 0x17 + 8 + 2) = uStack_110;
      *(undefined8 *)(param_1 + lVar30 * 0x17 + 0xc) = local_108;
      *(undefined8 *)(param_1 + lVar30 * 0x17 + 0xc + 2) = uStack_100;
      *(undefined8 *)(param_1 + lVar30 * 0x17 + 0x10) = local_f8;
      *(ulonglong *)(param_1 + lVar30 * 0x17 + 0x10 + 2) =
           CONCAT17(uStack_e9,CONCAT16(uStack_ea,CONCAT15(uStack_eb,CONCAT14(uStack_ec,uStack_f0))))
      ;
      *(ulonglong *)(param_1 + lVar30 * 0x17 + 0x14) =
           CONCAT44(uStack_e4,CONCAT13(uStack_e5,CONCAT12(uStack_e6,CONCAT11(uStack_e7,local_e8))));
      param_1[lVar30 * 0x17 + 0x16] = local_e0;
    } while ((uint)fVar25 < (uint)param_7);
  }
  pfVar22 = local_1b0;
  fVar25 = 0.0;
  if (param_7 != 0.0) {
    uVar6 = CONCAT13(unaff_XMM15_Bd,CONCAT12(unaff_XMM15_Bc,CONCAT11(unaff_XMM15_Bb,unaff_XMM15_Ba))
                    ) ^
            CONCAT13(unaff_XMM15_Bd,CONCAT12(unaff_XMM15_Bc,CONCAT11(unaff_XMM15_Bb,unaff_XMM15_Ba))
                    );
    uVar130 = (undefined1)uVar6;
    uVar131 = (undefined1)(uVar6 >> 8);
    uVar132 = (undefined1)(uVar6 >> 0x10);
    uVar133 = (undefined1)(uVar6 >> 0x18);
    uVar7 = CONCAT13(unaff_XMM15_Bh,CONCAT12(unaff_XMM15_Bg,CONCAT11(unaff_XMM15_Bf,unaff_XMM15_Be))
                    ) ^
            CONCAT13(unaff_XMM15_Bh,CONCAT12(unaff_XMM15_Bg,CONCAT11(unaff_XMM15_Bf,unaff_XMM15_Be))
                    );
    uVar134 = (undefined1)uVar7;
    uVar135 = (undefined1)(uVar7 >> 8);
    uVar136 = (undefined1)(uVar7 >> 0x10);
    uVar137 = (undefined1)(uVar7 >> 0x18);
    local_1d0 = CONCAT13(0x7f,(undefined3)local_1d0);
    local_1d4 = CONCAT13(0x7f,(undefined3)local_1d4);
    local_1d8 = CONCAT13(0x7f,(undefined3)local_1d8);
    local_1c8 = 0.0;
    do {
      pfVar23 = local_1a8;
      local_1c8 = (float)((int)local_1c8 + 1);
      uVar34 = __libm_sse2_sincosf_(param_1,(float)(uint)local_1c8 * local_1c4);
      fVar129 = (float)uVar34;
      fVar118 = (float)((ulonglong)uVar34 >> 0x20);
      local_148 = (fVar129 * param_3[2] + fVar118 * pfVar22[2]) * param_5 + pfVar23[2];
      fVar126 = (fVar118 * *pfVar22 + fVar129 * *param_3) * param_5 + *pfVar23;
      fVar127 = (fVar129 * param_3[1] + fVar118 * pfVar22[1]) * param_5 + pfVar23[1];
      fVar124 = local_148 - pfVar23[2];
      fVar118 = fVar126 - *pfVar23;
      fVar123 = fVar127 - pfVar23[1];
      fVar129 = fVar123 * fVar123 + fVar118 * fVar118 + fVar124 * fVar124;
      if (1e-08 < fVar129) {
        auVar122 = rsqrtss(ZEXT416((uint)fVar129),ZEXT416((uint)fVar129));
        fVar128 = auVar122._0_4_;
        fVar128 = fVar128 + fVar128 * (0.5 - fVar129 * 0.5 * fVar128 * fVar128);
        fVar128 = fVar128 + fVar128 * (0.5 - fVar129 * 0.5 * fVar128 * fVar128);
        fVar118 = fVar118 * fVar128;
        fVar123 = fVar123 * fVar128;
        fVar124 = fVar124 * fVar128;
      }
      local_148 = local_148 + param_6 * fVar1;
      local_138 = CONCAT44(fVar127 + local_1bc,fVar126 + local_1c0);
      fVar127 = -*param_4;
      fVar129 = -param_4[1];
      local_128 = 0x3f800000;
      fVar126 = -param_4[2];
      fVar128 = fVar127 * 127.0;
      iVar27 = (int)ROUND(fVar128 + fVar128 + 0.5) >> 1;
      if (iVar27 < -0x80) {
        iVar31 = -0x80;
      }
      else {
        iVar31 = 0x7f;
        if (iVar27 < 0x7f) {
          iVar31 = iVar27;
        }
      }
      fVar125 = fVar129 * 127.0;
      uStack_ec = (undefined1)iVar31;
      iVar27 = (int)ROUND(fVar125 + fVar125 + 0.5) >> 1;
      if (iVar27 < -0x80) {
        iVar31 = -0x80;
      }
      else {
        iVar31 = 0x7f;
        if (iVar27 < 0x7f) {
          iVar31 = iVar27;
        }
      }
      fVar119 = fVar126 * 127.0;
      uStack_eb = (undefined1)iVar31;
      iVar27 = (int)ROUND(fVar119 + fVar119 + 0.5) >> 1;
      if (iVar27 < -0x80) {
        iVar31 = -0x80;
      }
      else {
        iVar31 = 0x7f;
        if (iVar27 < 0x7f) {
          iVar31 = iVar27;
        }
      }
      uStack_ea = (undefined1)iVar31;
      uStack_e9 = 0x7f;
      iVar27 = (int)ROUND(fVar118 * 254.0 + 0.5) >> 1;
      if (iVar27 < -0x80) {
        iVar31 = -0x80;
      }
      else {
        iVar31 = 0x7f;
        if (iVar27 < 0x7f) {
          iVar31 = iVar27;
        }
      }
      local_e8 = (undefined1)iVar31;
      iVar31 = (int)ROUND(fVar123 * 254.0 + 0.5) >> 1;
      if (iVar31 < -0x80) {
        iVar28 = -0x80;
      }
      else {
        iVar28 = 0x7f;
        if (iVar31 < 0x7f) {
          iVar28 = iVar31;
        }
      }
      uStack_e7 = (undefined1)iVar28;
      iVar28 = (int)ROUND(fVar124 * 254.0 + 0.5) >> 1;
      if (iVar28 < -0x80) {
        iVar29 = -0x80;
      }
      else {
        iVar29 = 0x7f;
        if (iVar28 < 0x7f) {
          iVar29 = iVar28;
        }
      }
      uStack_e6 = (undefined1)iVar29;
      if (iVar27 < -0x80) {
        local_1d0 = CONCAT31(local_1d0._1_3_,0x80);
      }
      else {
        uVar26 = 0x7f;
        if (iVar27 < 0x7f) {
          uVar26 = (char)iVar27;
        }
        local_1d0 = CONCAT31(local_1d0._1_3_,uVar26);
      }
      uVar21 = local_1d0;
      if (iVar31 < -0x80) {
        local_1d0._0_2_ = CONCAT11(0x80,(undefined1)local_1d0);
      }
      else {
        uVar26 = 0x7f;
        if (iVar31 < 0x7f) {
          uVar26 = (char)iVar31;
        }
        local_1d0._0_2_ = CONCAT11(uVar26,(undefined1)local_1d0);
      }
      local_1d0._3_1_ = SUB41(uVar21,3);
      if (iVar28 < -0x80) {
        local_1d0._0_3_ = CONCAT12(0x80,(undefined2)local_1d0);
      }
      else {
        uVar26 = 0x7f;
        if (iVar28 < 0x7f) {
          uVar26 = (char)iVar28;
        }
        local_1d0._0_3_ = CONCAT12(uVar26,(undefined2)local_1d0);
      }
      fVar120 = (fVar129 * fVar124 - fVar126 * fVar123) * 127.0;
      iVar27 = (int)ROUND(fVar120 + fVar120 + 0.5) >> 1;
      if (iVar27 < -0x80) {
        local_1d4 = CONCAT31(local_1d4._1_3_,0x80);
      }
      else {
        uVar26 = 0x7f;
        if (iVar27 < 0x7f) {
          uVar26 = (char)iVar27;
        }
        local_1d4 = CONCAT31(local_1d4._1_3_,uVar26);
      }
      uVar21 = local_1d4;
      fVar124 = (fVar126 * fVar118 - fVar127 * fVar124) * 127.0;
      iVar27 = (int)ROUND(fVar124 + fVar124 + 0.5) >> 1;
      if (iVar27 < -0x80) {
        local_1d4._0_2_ = CONCAT11(0x80,(undefined1)local_1d4);
      }
      else {
        uVar26 = 0x7f;
        if (iVar27 < 0x7f) {
          uVar26 = (char)iVar27;
        }
        local_1d4._0_2_ = CONCAT11(uVar26,(undefined1)local_1d4);
      }
      fVar129 = (fVar127 * fVar123 - fVar129 * fVar118) * 127.0;
      iVar27 = (int)ROUND(fVar129 + fVar129 + 0.5) >> 1;
      local_1d4._3_1_ = SUB41(uVar21,3);
      if (iVar27 < -0x80) {
        local_1d4._0_3_ = CONCAT12(0x80,(undefined2)local_1d4);
      }
      else {
        uVar26 = 0x7f;
        if (iVar27 < 0x7f) {
          uVar26 = (char)iVar27;
        }
        local_1d4._0_3_ = CONCAT12(uVar26,(undefined2)local_1d4);
      }
      iVar27 = (int)ROUND(fVar128 + fVar128 + 0.5) >> 1;
      if (iVar27 < -0x80) {
        local_1d8 = CONCAT31(local_1d8._1_3_,0x80);
      }
      else {
        uVar26 = 0x7f;
        if (iVar27 < 0x7f) {
          uVar26 = (char)iVar27;
        }
        local_1d8 = CONCAT31(local_1d8._1_3_,uVar26);
      }
      uVar21 = local_1d8;
      iVar27 = (int)ROUND(fVar125 + fVar125 + 0.5) >> 1;
      if (iVar27 < -0x80) {
        local_1d8._0_2_ = CONCAT11(0x80,(undefined1)local_1d8);
      }
      else {
        uVar26 = 0x7f;
        if (iVar27 < 0x7f) {
          uVar26 = (char)iVar27;
        }
        local_1d8._0_2_ = CONCAT11(uVar26,(undefined1)local_1d8);
      }
      iVar27 = (int)ROUND(fVar119 + fVar119 + 0.5) >> 1;
      local_1d8._3_1_ = SUB41(uVar21,3);
      if (iVar27 < -0x80) {
        local_1d8._0_3_ = CONCAT12(0x80,(undefined2)local_1d8);
      }
      else {
        uVar26 = 0x7f;
        if (iVar27 < 0x7f) {
          uVar26 = (char)iVar27;
        }
        local_1d8._0_3_ = CONCAT12(uVar26,(undefined2)local_1d8);
      }
      auVar90._0_15_ = ZEXT415(local_1d0);
      auVar90[0xf] = uVar137;
      auVar89._14_2_ = auVar90._14_2_;
      auVar89._0_13_ = ZEXT413(local_1d0);
      auVar89[0xd] = uVar136;
      auVar88._13_3_ = auVar89._13_3_;
      auVar88._0_13_ = ZEXT413(local_1d0);
      auVar87._12_4_ = auVar88._12_4_;
      auVar87._4_7_ = 0;
      auVar87._0_4_ = local_1d0;
      auVar87[0xb] = uVar135;
      auVar86._11_5_ = auVar87._11_5_;
      auVar86._4_7_ = 0;
      auVar86._0_4_ = local_1d0;
      auVar85._10_6_ = auVar86._10_6_;
      auVar85._4_5_ = 0;
      auVar85._0_4_ = local_1d0;
      auVar85[9] = uVar134;
      auVar84._9_7_ = auVar85._9_7_;
      auVar84._4_5_ = 0;
      auVar84._0_4_ = local_1d0;
      Var9 = CONCAT91(CONCAT81(auVar84._8_8_,uVar133),local_1d0._3_1_);
      auVar83._6_10_ = Var9;
      auVar83[5] = uVar132;
      auVar83[4] = (char)((uint3)(undefined3)local_1d0 >> 0x10);
      auVar83._0_4_ = local_1d0;
      auVar15._2_12_ = auVar83._4_12_;
      auVar15[1] = uVar131;
      auVar15[0] = (char)((uint3)(undefined3)local_1d0 >> 8);
      uVar141 = CONCAT11(uVar130,(char)(undefined3)local_1d0);
      auVar82._2_14_ = auVar15;
      uVar5 = (undefined2)(uVar7 >> 0x10);
      auVar93._0_12_ = auVar82._0_12_;
      auVar93._12_2_ = (short)Var9;
      auVar93._14_2_ = uVar5;
      auVar92._12_4_ = auVar93._12_4_;
      auVar92._0_10_ = auVar82._0_10_;
      uVar4 = (undefined2)uVar7;
      auVar92._10_2_ = uVar4;
      auVar91._10_6_ = auVar92._10_6_;
      auVar91._0_8_ = auVar82._0_8_;
      auVar91._8_2_ = auVar83._4_2_;
      uVar3 = (undefined2)(uVar6 >> 0x10);
      auVar16._4_8_ = auVar91._8_8_;
      auVar16._2_2_ = uVar3;
      auVar16._0_2_ = auVar15._0_2_;
      uVar2 = (undefined2)uVar6;
      auVar41._0_4_ = CONCAT22(uVar2,uVar141);
      auVar41._4_12_ = auVar16;
      local_18c = 0;
      auVar40._0_4_ = -(uint)(0x7f < auVar41._0_4_);
      auVar40._4_4_ = -(uint)(0x7f < auVar16._0_4_);
      auVar40._8_4_ = -(uint)(0x7f < auVar91._8_4_);
      auVar40._12_4_ = -(uint)(0x7f < auVar92._12_4_);
      local_17c = 0;
      local_16c = 0;
      auVar41 = auVar40 & _DAT_144101760 | auVar41;
      auVar102._0_15_ = ZEXT415(local_1d4);
      auVar102[0xf] = uVar137;
      auVar101._14_2_ = auVar102._14_2_;
      auVar101._0_13_ = ZEXT413(local_1d4);
      auVar101[0xd] = uVar136;
      auVar100._13_3_ = auVar101._13_3_;
      auVar100._0_13_ = ZEXT413(local_1d4);
      auVar99._12_4_ = auVar100._12_4_;
      auVar99._4_7_ = 0;
      auVar99._0_4_ = local_1d4;
      auVar99[0xb] = uVar135;
      auVar98._11_5_ = auVar99._11_5_;
      auVar98._4_7_ = 0;
      auVar98._0_4_ = local_1d4;
      auVar97._10_6_ = auVar98._10_6_;
      auVar97._4_5_ = 0;
      auVar97._0_4_ = local_1d4;
      auVar97[9] = uVar134;
      auVar96._9_7_ = auVar97._9_7_;
      auVar96._4_5_ = 0;
      auVar96._0_4_ = local_1d4;
      Var9 = CONCAT91(CONCAT81(auVar96._8_8_,uVar133),local_1d4._3_1_);
      auVar95._6_10_ = Var9;
      auVar95[5] = uVar132;
      auVar95[4] = (char)((uint3)(undefined3)local_1d4 >> 0x10);
      auVar95._0_4_ = local_1d4;
      auVar17._2_12_ = auVar95._4_12_;
      auVar17[1] = uVar131;
      auVar17[0] = (char)((uint3)(undefined3)local_1d4 >> 8);
      uVar142 = CONCAT11(uVar130,(char)(undefined3)local_1d4);
      auVar94._2_14_ = auVar17;
      auVar105._0_12_ = auVar94._0_12_;
      auVar105._12_2_ = (short)Var9;
      auVar105._14_2_ = uVar5;
      auVar104._12_4_ = auVar105._12_4_;
      auVar104._0_10_ = auVar94._0_10_;
      auVar104._10_2_ = uVar4;
      auVar103._10_6_ = auVar104._10_6_;
      auVar103._0_8_ = auVar94._0_8_;
      auVar103._8_2_ = auVar95._4_2_;
      auVar18._4_8_ = auVar103._8_8_;
      auVar18._2_2_ = uVar3;
      auVar18._0_2_ = auVar17._0_2_;
      auVar43._0_4_ = CONCAT22(uVar2,uVar142);
      auVar43._4_12_ = auVar18;
      local_178 = (float)auVar41._0_4_ * 0.007874016;
      local_174 = (float)auVar41._4_4_ * 0.007874016;
      local_170 = (float)auVar41._8_4_ * 0.007874016;
      auVar42._0_4_ = -(uint)(0x7f < auVar43._0_4_);
      auVar42._4_4_ = -(uint)(0x7f < auVar18._0_4_);
      auVar42._8_4_ = -(uint)(0x7f < auVar103._8_4_);
      auVar42._12_4_ = -(uint)(0x7f < auVar104._12_4_);
      auVar43 = auVar42 & _DAT_144101760 | auVar43;
      auVar114._0_15_ = ZEXT415(local_1d8);
      auVar114[0xf] = uVar137;
      auVar113._14_2_ = auVar114._14_2_;
      auVar113._0_13_ = ZEXT413(local_1d8);
      auVar113[0xd] = uVar136;
      auVar112._13_3_ = auVar113._13_3_;
      auVar112._0_13_ = ZEXT413(local_1d8);
      auVar111._12_4_ = auVar112._12_4_;
      auVar111._4_7_ = 0;
      auVar111._0_4_ = local_1d8;
      auVar111[0xb] = uVar135;
      auVar110._11_5_ = auVar111._11_5_;
      auVar110._4_7_ = 0;
      auVar110._0_4_ = local_1d8;
      auVar109._10_6_ = auVar110._10_6_;
      auVar109._4_5_ = 0;
      auVar109._0_4_ = local_1d8;
      auVar109[9] = uVar134;
      auVar108._9_7_ = auVar109._9_7_;
      auVar108._4_5_ = 0;
      auVar108._0_4_ = local_1d8;
      Var9 = CONCAT91(CONCAT81(auVar108._8_8_,uVar133),local_1d8._3_1_);
      auVar107._6_10_ = Var9;
      auVar107[5] = uVar132;
      auVar107[4] = (char)((uint3)(undefined3)local_1d8 >> 0x10);
      auVar107._0_4_ = local_1d8;
      auVar19._2_12_ = auVar107._4_12_;
      auVar19[1] = uVar131;
      auVar19[0] = (char)((uint3)(undefined3)local_1d8 >> 8);
      uVar143 = CONCAT11(uVar130,(char)(undefined3)local_1d8);
      auVar106._2_14_ = auVar19;
      local_188 = (float)auVar43._0_4_ * 0.007874016;
      local_184 = (float)auVar43._4_4_ * 0.007874016;
      local_180 = (float)auVar43._8_4_ * 0.007874016;
      auVar117._0_12_ = auVar106._0_12_;
      auVar117._12_2_ = (short)Var9;
      auVar117._14_2_ = uVar5;
      auVar116._12_4_ = auVar117._12_4_;
      auVar116._0_10_ = auVar106._0_10_;
      auVar116._10_2_ = uVar4;
      auVar115._10_6_ = auVar116._10_6_;
      auVar115._0_8_ = auVar106._0_8_;
      auVar115._8_2_ = auVar107._4_2_;
      auVar20._4_8_ = auVar115._8_8_;
      auVar20._2_2_ = uVar3;
      auVar20._0_2_ = auVar19._0_2_;
      auVar45._0_4_ = CONCAT22(uVar2,uVar143);
      auVar45._4_12_ = auVar20;
      auVar44._0_4_ = -(uint)(0x7f < auVar45._0_4_);
      auVar44._4_4_ = -(uint)(0x7f < auVar20._0_4_);
      auVar44._8_4_ = -(uint)(0x7f < auVar115._8_4_);
      auVar44._12_4_ = -(uint)(0x7f < auVar116._12_4_);
      auVar45 = auVar44 & _DAT_144101760 | auVar45;
      local_198 = (float)auVar45._0_4_ * 0.007874016;
      local_194 = (float)auVar45._4_4_ * 0.007874016;
      local_190 = (float)auVar45._8_4_ * 0.007874016;
      local_168 = 0;
      uStack_160 = 0x3f80000000000000;
      fStack_130 = local_148;
      fStack_12c = fVar25;
      fVar129 = (float)FMatrix::Determinant(&local_198);
      if (0.0 <= fVar129) {
        fVar129 = 1.0;
      }
      else {
        fVar129 = -1.0;
      }
      iVar27 = *(int *)(param_8 + 1);
      lVar30 = (longlong)iVar27;
      uStack_e5 = 0x7f;
      if (fVar129 < 0.0) {
        uStack_e5 = 0x81;
      }
      *(int *)(param_8 + 1) = iVar27 + 1;
      if (*(int *)((longlong)param_8 + 0xc) < iVar27 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_8,iVar27);
      }
      param_1 = (float *)*param_8;
      fVar25 = fVar25 + local_1b8;
      *(undefined8 *)(param_1 + lVar30 * 0x17) = local_138;
      *(ulonglong *)(param_1 + lVar30 * 0x17 + 2) = CONCAT44(fStack_12c,fStack_130);
      *(ulonglong *)(param_1 + lVar30 * 0x17 + 4) = CONCAT44(uStack_124,local_128);
      *(undefined8 *)(param_1 + lVar30 * 0x17 + 4 + 2) = uStack_120;
      *(undefined8 *)(param_1 + lVar30 * 0x17 + 8) = local_118;
      *(undefined8 *)(param_1 + lVar30 * 0x17 + 8 + 2) = uStack_110;
      *(undefined8 *)(param_1 + lVar30 * 0x17 + 0xc) = local_108;
      *(undefined8 *)(param_1 + lVar30 * 0x17 + 0xc + 2) = uStack_100;
      *(undefined8 *)(param_1 + lVar30 * 0x17 + 0x10) = local_f8;
      *(ulonglong *)(param_1 + lVar30 * 0x17 + 0x10 + 2) =
           CONCAT17(uStack_e9,CONCAT16(uStack_ea,CONCAT15(uStack_eb,CONCAT14(uStack_ec,uStack_f0))))
      ;
      *(ulonglong *)(param_1 + lVar30 * 0x17 + 0x14) =
           CONCAT44(uStack_e4,CONCAT13(uStack_e5,CONCAT12(uStack_e6,CONCAT11(uStack_e7,local_e8))));
      param_1[lVar30 * 0x17 + 0x16] = local_e0;
    } while ((uint)local_1c8 < (uint)param_7);
  }
  plVar24 = local_158;
  if (1 < (uint)param_7) {
    iVar31 = 1 - local_1cc;
    uVar32 = (ulonglong)((int)param_7 - 1);
    iVar27 = local_1cc;
    do {
      iVar27 = iVar27 + 1;
      iVar28 = (int)plVar24[1];
      *(int *)(plVar24 + 1) = iVar28 + 1;
      iVar29 = local_1cc + (uint)(iVar27 + iVar31) % (uint)param_7;
      if (*(int *)((longlong)plVar24 + 0xc) < iVar28 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar24,iVar28);
      }
      *(int *)(*plVar24 + (longlong)iVar28 * 4) = local_1cc;
      iVar28 = (int)plVar24[1];
      *(int *)(plVar24 + 1) = iVar28 + 1;
      if (*(int *)((longlong)plVar24 + 0xc) < iVar28 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar24,iVar28);
      }
      *(int *)(*plVar24 + (longlong)iVar28 * 4) = iVar27;
      iVar28 = (int)plVar24[1];
      *(int *)(plVar24 + 1) = iVar28 + 1;
      if (*(int *)((longlong)plVar24 + 0xc) < iVar28 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar24,iVar28);
      }
      *(int *)(*plVar24 + (longlong)iVar28 * 4) = iVar29;
      iVar28 = (int)plVar24[1];
      *(int *)(plVar24 + 1) = iVar28 + 1;
      if (*(int *)((longlong)plVar24 + 0xc) < iVar28 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar24,iVar28);
      }
      *(int *)(*plVar24 + (longlong)iVar28 * 4) = iVar29 + (int)param_7;
      iVar28 = (int)plVar24[1];
      *(int *)(plVar24 + 1) = iVar28 + 1;
      if (*(int *)((longlong)plVar24 + 0xc) < iVar28 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar24,iVar28);
      }
      *(int *)(*plVar24 + (longlong)iVar28 * 4) = iVar27 + (int)param_7;
      iVar28 = (int)plVar24[1];
      *(int *)(plVar24 + 1) = iVar28 + 1;
      if (*(int *)((longlong)plVar24 + 0xc) < iVar28 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar24,iVar28);
      }
      *(int *)(*plVar24 + (longlong)iVar28 * 4) = local_1cc + (int)param_7;
      uVar32 = uVar32 - 1;
    } while (uVar32 != 0);
  }
  if (param_7 != 0.0) {
    iVar31 = 1 - local_1cc;
    iVar27 = local_1cc + (int)param_7;
    do {
      iVar28 = (int)plVar24[1];
      *(int *)(plVar24 + 1) = iVar28 + 1;
      iVar29 = local_1cc + (uint)(iVar27 + (iVar31 - (int)param_7)) % (uint)param_7;
      if (*(int *)((longlong)plVar24 + 0xc) < iVar28 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar24,iVar28);
      }
      *(int *)(*plVar24 + (longlong)iVar28 * 4) = iVar27 - (int)param_7;
      iVar28 = (int)plVar24[1];
      *(int *)(plVar24 + 1) = iVar28 + 1;
      if (*(int *)((longlong)plVar24 + 0xc) < iVar28 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar24,iVar28);
      }
      *(int *)(*plVar24 + (longlong)iVar28 * 4) = iVar27;
      iVar28 = (int)plVar24[1];
      *(int *)(plVar24 + 1) = iVar28 + 1;
      if (*(int *)((longlong)plVar24 + 0xc) < iVar28 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar24,iVar28);
      }
      *(int *)(*plVar24 + (longlong)iVar28 * 4) = iVar29;
      iVar28 = (int)plVar24[1];
      *(int *)(plVar24 + 1) = iVar28 + 1;
      if (*(int *)((longlong)plVar24 + 0xc) < iVar28 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar24,iVar28);
      }
      *(int *)(*plVar24 + (longlong)iVar28 * 4) = iVar27;
      iVar28 = (int)plVar24[1];
      *(int *)(plVar24 + 1) = iVar28 + 1;
      if (*(int *)((longlong)plVar24 + 0xc) < iVar28 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar24,iVar28);
      }
      *(int *)(*plVar24 + (longlong)iVar28 * 4) = iVar29 + (int)param_7;
      lVar30 = plVar24[1];
      iVar28 = (int)lVar30 + 1;
      *(int *)(plVar24 + 1) = iVar28;
      if (*(int *)((longlong)plVar24 + 0xc) < iVar28) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar24);
      }
      iVar27 = iVar27 + 1;
      *(int *)(*plVar24 + (longlong)(int)lVar30 * 4) = iVar29;
      uVar33 = uVar33 - 1;
    } while (uVar33 != 0);
  }
  return;
}



// FUNCTION 1426fd5f0 FUN_1426fd5f0 body=815 status=ok
// SIG undefined FUN_1426fd5f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426fd5f0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar18;
  undefined1 auStack_168 [32];
  int local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined1 local_138 [8];
  longlong *local_130;
  longlong *local_128;
  undefined8 local_120;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong uVar17;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_130 = param_1;
  local_120 = param_2;
  (**(code **)(*param_1 + 0xd38))();
  uVar14 = 0;
  if (0 < (int)param_1[0xad]) {
    plVar11 = param_1 + 0xac;
    local_148 = 1;
    uVar15 = uVar14;
    local_128 = plVar11;
    do {
      iVar9 = local_148;
      uVar17 = 0;
      iVar13 = (int)uVar14;
      lVar18 = *plVar11;
      if (*(longlong *)(lVar18 + uVar15) == 0) {
        iVar7 = (int)plVar11[1];
        iVar3 = (iVar7 - iVar13) + -1;
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar18 + (longlong)iVar13 * 8),
                     (void *)(lVar18 + (longlong)local_148 * 8),(longlong)iVar3 << 3);
          iVar7 = (int)plVar11[1];
        }
        *(int *)(plVar11 + 1) = iVar7 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar11);
        iVar13 = iVar13 + -1;
        iVar9 = iVar9 + -1;
        uVar15 = uVar15 - 8;
      }
      else {
        local_58 = (undefined1 *)0x0;
        local_50 = 0;
        FUN_140725150(*(longlong *)(lVar18 + uVar15),local_118,0);
        puVar8 = local_58;
        uVar14 = uVar17;
        if (0 < (int)local_50) {
          do {
            puVar4 = local_118;
            if (puVar8 != (undefined1 *)0x0) {
              puVar4 = puVar8;
            }
            lVar18 = *(longlong *)(puVar4 + uVar14);
            if ((*(byte *)(lVar18 + 0xb8) & 1) != 0) {
              FUN_141d08e90(param_3,&local_140,lVar18 + 0x354,0);
              plVar12 = *(longlong **)(lVar18 + 0x1a0);
              plVar11 = plVar12 + *(int *)(lVar18 + 0x1a8);
              puVar8 = local_58;
              for (; local_58 = puVar8, plVar12 != plVar11; plVar12 = plVar12 + 1) {
                lVar18 = *plVar12;
                if (lVar18 != 0) {
                  lVar5 = FUN_1429f11d0();
                  if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
                    bVar1 = false;
                  }
                  else {
                    bVar1 = true;
                  }
                  if ((bVar1) && ((*(byte *)(lVar18 + 0xb8) & 1) != 0)) {
                    FUN_141d08e90(param_3,local_138,lVar18 + 0x354,0);
                  }
                }
                puVar8 = local_58;
              }
            }
            uVar16 = (int)uVar17 + 1;
            uVar17 = (ulonglong)uVar16;
            param_1 = local_130;
            plVar11 = local_128;
            uVar14 = uVar14 + 8;
            iVar9 = local_148;
          } while ((int)uVar16 < (int)local_50);
        }
        if (puVar8 != (undefined1 *)0x0) {
          FMemory::Free();
        }
      }
      local_148 = iVar9 + 1;
      uVar14 = (ulonglong)(iVar13 + 1U);
      uVar15 = uVar15 + 8;
      param_2 = local_120;
    } while ((int)(iVar13 + 1U) < (int)param_1[0xad]);
  }
  iVar9 = (int)param_1[0xaf] + -1;
  plVar11 = param_1;
  if (-1 < iVar9) {
    plVar12 = param_1 + 0xae;
    lVar18 = (longlong)iVar9 * 8;
    lVar10 = (longlong)(int)param_1[0xaf] << 3;
    lVar5 = lVar18;
    do {
      local_140 = *(undefined4 *)(*plVar12 + lVar18);
      local_13c = *(undefined4 *)(*plVar12 + 4 + lVar18);
      cVar2 = FWeakObjectPtr::IsValid(&local_140);
      if (cVar2 == '\0') {
        iVar13 = (int)param_1[0xaf];
        iVar7 = (iVar13 - iVar9) + -1;
        if (iVar7 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar5 + *plVar12),(void *)(lVar10 + *plVar12),(longlong)iVar7 << 3);
          iVar13 = (int)param_1[0xaf];
        }
        *(int *)(param_1 + 0xaf) = iVar13 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar12);
      }
      else {
        lVar6 = FWeakObjectPtr::Get(&local_140);
        if ((*(byte *)(lVar6 + 0xb8) & 1) != 0) {
          FUN_141d08e90(param_3,local_138,lVar6 + 0x354,0);
        }
      }
      lVar10 = lVar10 + -8;
      lVar5 = lVar5 + -8;
      lVar18 = lVar18 + -8;
      iVar9 = iVar9 + -1;
      plVar11 = local_130;
    } while (-1 < iVar9);
  }
  (**(code **)(*plVar11 + 0xd40))(plVar11,param_2,param_3);
  return;
}



// FUNCTION 1426fd920 FUN_1426fd920 body=379 status=ok
// SIG undefined FUN_1426fd920(void)

void FUN_1426fd920(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x488);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x7b8);
  }
  if (((lVar3 != 0) && ((*(uint *)(lVar3 + 0x460) >> 6 & 1) != 0)) &&
     (*(longlong *)(lVar3 + 0x130) != 0)) {
    iVar6 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar6 * 8) = *(undefined8 *)(lVar3 + 0x130);
  }
  if ((*(uint *)(param_1 + 0x748) >> 3 & 1) != 0) {
    iVar6 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar6);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar6 * 8) = *(undefined8 *)(param_1 + 0x130);
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x738)) {
    iVar5 = 1;
    plVar1 = (longlong *)(param_1 + 0x730);
    do {
      lVar3 = FWeakObjectPtr::Get(*plVar1 + (longlong)iVar6 * 8);
      if (lVar3 == 0) {
        iVar4 = *(int *)(param_1 + 0x738);
        iVar2 = (iVar4 - iVar6) + -1;
        if (iVar2 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + (longlong)iVar6 * 8),(void *)(*plVar1 + (longlong)iVar5 * 8)
                     ,(longlong)iVar2 << 3);
          iVar4 = *(int *)(param_1 + 0x738);
        }
        *(int *)(param_1 + 0x738) = iVar4 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
        iVar6 = iVar6 + -1;
        iVar5 = iVar5 + -1;
      }
      else {
        iVar4 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
        }
        *(longlong *)(*param_2 + (longlong)iVar4 * 8) = lVar3;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x738));
  }
  return;
}



// FUNCTION 1426fdaa0 FUN_1426fdaa0 body=87 status=ok
// SIG undefined FUN_1426fdaa0(void)

void FUN_1426fdaa0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0xe40))(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x720))(param_1,local_18);
  *(undefined8 *)((longlong)param_3 + 0xc) = *puVar1;
  *(undefined4 *)((longlong)param_3 + 0x14) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 1426fdb00 CalcConeVert body=360 status=ok
// SIG undefined CalcConeVert(void)

float * CalcConeVert(float *param_1,float param_2,float param_3,undefined4 param_4)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0.01 <= param_2) {
    if (3.1315928 <= param_2) {
      param_2 = 3.1315928;
    }
  }
  else {
    param_2 = 0.01;
  }
  fVar6 = 0.01;
  if ((0.01 <= param_3) && (fVar6 = param_3, 3.1315928 <= param_3)) {
    fVar6 = 3.1315928;
  }
  fVar1 = _guard_xfg_dispatch_icall_nop(param_2 * 0.5);
  fVar6 = _guard_xfg_dispatch_icall_nop(fVar6 * 0.5);
  uVar4 = __libm_sse2_sincosf_(param_4);
  uVar2 = FGenericPlatformMath::Atan2
                    ((float)uVar4 * fVar6,(float)((ulonglong)uVar4 >> 0x20) * fVar1);
  uVar4 = __libm_sse2_sincosf_(uVar2);
  fVar5 = (float)((ulonglong)uVar4 >> 0x20);
  fVar3 = (float)uVar4;
  fVar1 = (fVar6 * fVar6 * fVar1 * fVar1) /
          (fVar5 * fVar5 * fVar6 * fVar6 + fVar3 * fVar3 * fVar1 * fVar1);
  fVar6 = SQRT(1.0 - fVar1) + SQRT(1.0 - fVar1);
  *param_1 = 1.0 - (fVar1 + fVar1);
  param_1[1] = SQRT(fVar1) * fVar5 * fVar6;
  param_1[2] = SQRT(fVar1) * fVar3 * fVar6;
  return param_1;
}



// FUNCTION 1426fdc70 FUN_1426fdc70 body=498 status=ok
// SIG undefined FUN_1426fdc70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1426fdc70(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar3 = 2;
  *(undefined8 *)(param_1 + 0xc) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x14) = DAT_1468b5d98;
  if (*(int *)(param_1 + 0xf8) < 3) {
    fVar4 = *(float *)(param_1 + 0x10);
  }
  else {
    lVar2 = 0x18;
    do {
      pfVar1 = *(float **)(param_1 + 0xf0);
      if (*(float **)(param_1 + 0xf0) == (float *)0x0) {
        pfVar1 = (float *)(param_1 + 0x30);
      }
      iVar3 = iVar3 + 1;
      fVar10 = *(float *)(lVar2 + -4 + (longlong)pfVar1) - pfVar1[2];
      fVar6 = *(float *)(lVar2 + -0xc + (longlong)pfVar1) - *pfVar1;
      fVar5 = *(float *)(lVar2 + -8 + (longlong)pfVar1) - pfVar1[1];
      fVar8 = *(float *)(lVar2 + 4 + (longlong)pfVar1) - pfVar1[1];
      fVar4 = *(float *)(lVar2 + 8 + (longlong)pfVar1) - pfVar1[2];
      fVar9 = *(float *)(lVar2 + (longlong)pfVar1) - *pfVar1;
      lVar2 = lVar2 + 0xc;
      *(float *)(param_1 + 0xc) = (fVar5 * fVar4 - fVar10 * fVar8) + *(float *)(param_1 + 0xc);
      fVar4 = (fVar10 * fVar9 - fVar6 * fVar4) + *(float *)(param_1 + 0x10);
      *(float *)(param_1 + 0x14) = (fVar6 * fVar8 - fVar5 * fVar9) + *(float *)(param_1 + 0x14);
      *(float *)(param_1 + 0x10) = fVar4;
    } while (iVar3 < *(int *)(param_1 + 0xf8));
  }
  fVar5 = *(float *)(param_1 + 0xc);
  fVar6 = *(float *)(param_1 + 0x14);
  fVar8 = fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6;
  if (0.0001 <= fVar8) {
    if (1e-08 < fVar8) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
      fVar9 = auVar7._0_4_;
      fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
      fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
      *(float *)(param_1 + 0xc) = fVar5 * fVar9;
      *(float *)(param_1 + 0x10) = fVar4 * fVar9;
      *(float *)(param_1 + 0x14) = fVar6 * fVar9;
    }
    return 0;
  }
  return 1;
}



// FUNCTION 1426fde70 FUN_1426fde70 body=122 status=ok
// SIG undefined FUN_1426fde70(void)

ulonglong FUN_1426fde70(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  if ((*(byte *)(param_1 + 0x78) & 0x10) != 0) {
    return (ulonglong)*(uint *)((longlong)param_1 + 0x40c);
  }
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x9e);
  if (cVar1 == '\0') {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x6b8))(param_1);
    if (plVar2 == (longlong *)0x0) {
      return 0;
    }
  }
  else {
    plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x9e);
  }
                    /* WARNING: Could not recover jumptable at 0x0001426fdec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar2 + 0x288))(plVar2,param_1);
  return uVar3;
}



// FUNCTION 1426fdf00 FUN_1426fdf00 body=200 status=ok
// SIG undefined FUN_1426fdf00(void)

undefined8 FUN_1426fdf00(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_1[0x8c] == 0) {
    return 0;
  }
  if ((*(byte *)(param_1[0x8c] + 0x484) & 2) != 0) {
    return 0;
  }
  lVar4 = param_1[0xa1];
  if (lVar4 == 0) {
LAB_1426fdf6c:
    if (((DAT_146afeff8 == 0) || (*(longlong **)(DAT_146afeff8 + 0x30) != param_1)) ||
       (lVar4 = DAT_146afeff8, DAT_146afeff8 == 0)) goto LAB_1426fdfa4;
  }
  else {
    lVar2 = FUN_1429c30a0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1426fdf6c;
  }
  uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar2 = UObjectBaseUtility::GetOutermost(uVar3);
  if (*(longlong *)(lVar4 + 0x1888) != *(longlong *)(lVar2 + 0x18)) {
    return 0;
  }
LAB_1426fdfa4:
  if (param_1[0xd0] != 0) {
    return 0;
  }
  return 1;
}



// FUNCTION 1426fdfd0 FUN_1426fdfd0 body=193 status=ok
// SIG undefined FUN_1426fdfd0(void)

void FUN_1426fdfd0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[0x90];
  if (param_2 != lVar1) {
    if (lVar1 == 0x142) {
      (**(code **)(*param_1 + 0xe50))();
    }
    else if (lVar1 == 0x140) {
      (**(code **)(*param_1 + 0xbd0))();
    }
    FUN_1423cc680(param_1,param_2);
    if (param_1[0x90] == 0x140) {
      (**(code **)(*param_1 + 0xbc8))(param_1);
    }
    else if (param_1[0x90] == 0x142) {
      (**(code **)(*param_1 + 0xe48))(param_1);
    }
    (**(code **)(*param_1 + 0xce0))(param_1);
  }
  return;
}



// FUNCTION 1426fe0a0 FUN_1426fe0a0 body=221 status=ok
// SIG undefined FUN_1426fe0a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426fe0a0(undefined8 param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar7;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [192];
  undefined1 *local_28;
  ulonglong local_20;
  ulonglong local_18;
  ulonglong uVar6;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar6 = 0;
  local_28 = (undefined1 *)0x0;
  local_20 = 0;
  FUN_1426f4680(param_1,local_e8,0);
  uVar4 = local_20 & 0xffffffff;
  puVar3 = local_28;
  uVar7 = uVar6;
  if (0 < (int)local_20) {
    do {
      puVar2 = local_e8;
      if (puVar3 != (undefined1 *)0x0) {
        puVar2 = puVar3;
      }
      plVar1 = *(longlong **)(puVar2 + uVar7);
      if (plVar1[0x5a] == 0) {
        (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
        uVar4 = local_20 & 0xffffffff;
        puVar3 = local_28;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar7 = uVar7 + 8;
    } while ((int)uVar5 < (int)uVar4);
  }
  if (puVar3 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1426fe180 FUN_1426fe180 body=60 status=ok
// SIG undefined FUN_1426fe180(void)

void FUN_1426fe180(longlong *param_1)

{
  if (param_1[0xa1] != 0) {
    ULocalPlayer::GetPrivateStaticClass();
  }
  if (param_1[0xea] != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001426fe1af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xcb0))(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1426fe1c0 FUN_1426fe1c0 body=47 status=ok
// SIG undefined FUN_1426fe1c0(void)

void FUN_1426fe1c0(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x460) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x460) + 0x778))();
  }
  *(undefined8 *)(param_1 + 0x460) = 0;
  return;
}



// FUNCTION 1426fe1f0 FUN_1426fe1f0 body=54 status=ok
// SIG undefined FUN_1426fe1f0(void)

void FUN_1426fe1f0(longlong param_1)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  *(uint *)(param_1 + 0x780) = *(uint *)(param_1 + 0x780) & 0xfffffffd;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x78c) = local_res8;
  *(undefined4 *)(param_1 + 0x790) = local_resc;
  return;
}



// FUNCTION 1426fe230 FUN_1426fe230 body=54 status=ok
// SIG undefined FUN_1426fe230(void)

void FUN_1426fe230(longlong param_1)

{
  undefined4 local_res8;
  undefined4 local_resc;
  
  *(uint *)(param_1 + 0x780) = *(uint *)(param_1 + 0x780) & 0xfffffffe;
  FWeakObjectPtr::operator=(&local_res8,0);
  *(undefined4 *)(param_1 + 0x784) = local_res8;
  *(undefined4 *)(param_1 + 0x788) = local_resc;
  return;
}



// FUNCTION 1426fe270 ClientAddTextureStreamingLoc_Implementation body=84 status=ok
// SIG undefined ClientAddTextureStreamingLoc_Implementation(void)

void APlayerController::ClientAddTextureStreamingLoc_Implementation
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = IStreamingManager::HasShutdown();
  if (cVar2 == '\0') {
    uVar1 = IStreamingManager::Get();
    IStreamingManager::AddViewSlaveLocation(uVar1,param_2,0x3f800000,param_4,param_3);
  }
  return;
}



// FUNCTION 1426fe2d0 FUN_1426fe2d0 body=25 status=ok
// SIG undefined FUN_1426fe2d0(void)

void FUN_1426fe2d0(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x148))();
  FUN_1428c7000(uVar1);
  return;
}



// FUNCTION 1426fe2f0 FUN_1426fe2f0 body=124 status=ok
// SIG undefined FUN_1426fe2f0(void)

void FUN_1426fe2f0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 0xb4) = param_2;
  if ((param_1[0xa1] != 0) && (param_2 < *(int *)(param_1[0xa1] + 0x38))) {
    lVar2 = (**(code **)(*param_1 + 0x148))();
    if ((param_1[0xa1] != 0) && (lVar2 = *(longlong *)(lVar2 + 0x38), lVar2 != 0)) {
      iVar1 = 0x708;
      if ((0x707 < param_2) && (iVar1 = *(int *)(lVar2 + 100), param_2 < *(int *)(lVar2 + 100))) {
        iVar1 = param_2;
      }
      *(int *)(param_1[0xa1] + 0x38) = iVar1;
      if (*(longlong *)(lVar2 + 0x90) != 0) {
        *(undefined4 *)(*(longlong *)(lVar2 + 0x90) + 0x38) = *(undefined4 *)(param_1[0xa1] + 0x38);
      }
    }
  }
  return;
}



// FUNCTION 1426fe390 FUN_1426fe390 body=576 status=ok
// SIG undefined FUN_1426fe390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426fe390(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_98 = (code *)param_1[0xee];
  uVar1 = AActor::GetWorldTimerManager();
  lVar2 = FTimerManager::FindTimer(uVar1,&local_98,0);
  if ((lVar2 == 0) || (*(char *)(lVar2 + 1) == '\x02')) {
    if ((char)param_1[0xa7] != '\0') {
      plVar3 = (longlong *)param_1[0x91];
      plVar4 = plVar3;
      if (plVar3 == (longlong *)0x0) {
        plVar4 = (longlong *)param_1[0xf7];
      }
      plVar5 = param_1;
      if ((plVar4 != (longlong *)0x0) && (plVar5 = plVar3, plVar3 == (longlong *)0x0)) {
        plVar5 = (longlong *)param_1[0xf7];
      }
      (**(code **)(*param_1 + 0xe20))(param_1,plVar5);
    }
    uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    UWorld::CommitMapChange(uVar1);
  }
  else {
    uStack_90 = 0;
    local_98 = FUN_1429e0890;
    uVar1 = AActor::GetWorldTimerManager(param_1);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_98;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_98._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_90;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_8c;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar2;
      *plVar3 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_88 = 0;
    local_80 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_a0 = 0xbf800000;
    local_a8 = 0;
    local_70 = 0;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar1,param_1 + 0xef,&local_88,0x3c23d70a);
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
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
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



// FUNCTION 1426fe5e0 FUN_1426fe5e0 body=115 status=ok
// SIG undefined FUN_1426fe5e0(void)

void FUN_1426fe5e0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  int local_res10 [6];
  
  cVar1 = FUN_142710360(param_1,local_res10);
  if (((cVar1 == '\0') || (local_res10[0] == 0)) && (*(longlong *)(param_1 + 0x460) != 0)) {
    lVar2 = FUN_1422312c0(param_1);
    if (lVar2 != 0) {
      lVar2 = FUN_1422312c0(param_1);
      if (*(longlong *)(lVar2 + 0x48) != 0) {
        lVar2 = FUN_1422312c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001426fe646. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(lVar2 + 0x48) + 0x298))
                  (*(longlong **)(lVar2 + 0x48),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x460) + 0x4d8));
        return;
      }
    }
  }
  return;
}



// FUNCTION 1426fe660 FUN_1426fe660 body=77 status=ok
// SIG undefined FUN_1426fe660(void)

void FUN_1426fe660(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  cVar1 = FUN_14288f710(DAT_146b17150,lVar2);
  if (cVar1 != '\0') {
    FUN_1428db6c0(lVar2);
    *(uint *)(lVar2 + 0x830) = *(uint *)(lVar2 + 0x830) | 8;
    FUN_142873f70(DAT_146b17150,0);
    return;
  }
  return;
}



// FUNCTION 1426fe6c0 FUN_1426fe6c0 body=56 status=ok
// SIG undefined FUN_1426fe6c0(void)

void FUN_1426fe6c0(longlong *param_1)

{
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  uint local_c;
  
  local_c = local_c & 0xfffffffe;
  local_18 = 0;
  local_10 = 0x40000000;
  local_14 = 1;
  (**(code **)(*param_1 + 0xe18))(0,0x40000000,&local_18);
  return;
}



// FUNCTION 1426fe720 K2_GetMaxSpeedModifier body=10 status=ok
// SIG undefined K2_GetMaxSpeedModifier(void)

void UMovementComponent::K2_GetMaxSpeedModifier(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001426fe723. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x448))();
  return;
}



// FUNCTION 1426fe730 FUN_1426fe730 body=148 status=ok
// SIG undefined FUN_1426fe730(void)

void FUN_1426fe730(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 local_28 [4];
  
  iVar1 = FUN_142235230();
  if (iVar1 != 1) {
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar2 + 0x148) != 0) {
      local_28[0] = 0;
      if (param_3 == 0) {
        plVar3 = (longlong *)FName::FName(local_28,L"Event",1);
        param_3 = *plVar3;
      }
      FUN_1429e1250(param_1,param_1[0x8c],param_2,param_3,param_4);
    }
  }
  return;
}



// FUNCTION 1426fe7d0 FUN_1426fe7d0 body=191 status=ok
// SIG undefined FUN_1426fe7d0(void)

void FUN_1426fe7d0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  FUN_1426f9c40(param_1 + 0xcd,param_2 + 8);
  lVar1 = param_1[0xa1];
  if (lVar1 != 0) {
    lVar3 = ULocalPlayer::GetPrivateStaticClass();
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
      uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      plVar5 = (longlong *)UOnlineEngineInterface::Get();
      (**(code **)(*plVar5 + 0x358))
                (plVar5,uVar4,*(undefined1 *)(lVar1 + 0x108),*(undefined8 *)(param_2 + 8),0);
    }
  }
  FUN_1404bf980(param_2);
  return;
}



// FUNCTION 1426fe890 FUN_1426fe890 body=149 status=ok
// SIG undefined FUN_1426fe890(void)

void FUN_1426fe890(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8,
                  undefined4 param_9,undefined8 *param_10)

{
  longlong *plVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  plVar1 = *(longlong **)(param_1 + 0x528);
  if (plVar1 != (longlong *)0x0) {
    local_18 = *param_10;
    local_10 = *(undefined4 *)(param_10 + 1);
    (**(code **)(*plVar1 + 0x868))
              (plVar1,param_5,param_4,param_3,param_5,param_6,param_7,param_8,0,param_9,&local_18);
  }
  return;
}



// FUNCTION 1426fe930 FUN_1426fe930 body=155 status=ok
// SIG undefined FUN_1426fe930(void)

void FUN_1426fe930(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  undefined8 local_188;
  undefined4 local_180;
  undefined1 local_178 [368];
  
  if (*(longlong *)(param_1 + 0x528) != 0) {
    FUN_1422ffaa0(local_178);
    local_188 = *param_5;
    local_180 = *(undefined4 *)(param_5 + 1);
    (**(code **)(**(longlong **)(param_1 + 0x528) + 0x830))
              (*(longlong **)(param_1 + 0x528),param_2,local_178,param_3,param_4,&local_188,0);
  }
  return;
}



// FUNCTION 1426fe9d0 FUN_1426fe9d0 body=363 status=ok
// SIG undefined FUN_1426fe9d0(void)

void FUN_1426fe9d0(longlong param_1,longlong param_2,byte param_3,byte param_4,longlong param_5)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  if (param_2 != 0) {
    if ((param_5 != 0) && (iVar6 = *(int *)(param_1 + 0x5c8) + -1, -1 < iVar6)) {
      lVar5 = (longlong)iVar6 * 0x18;
      lVar7 = lVar5;
      do {
        lVar3 = *(longlong *)(param_1 + 0x5c0);
        if (*(longlong *)(lVar5 + 8 + lVar3) == param_5) {
          iVar2 = *(int *)(param_1 + 0x5c8);
          iVar4 = (iVar2 - iVar6) + -1;
          if (0 < iVar4) {
            iVar4 = 1;
          }
          if (iVar4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar7 + lVar3),(void *)(lVar3 + (longlong)(iVar2 - iVar4) * 0x18),
                       (longlong)iVar4 * 0x18);
            iVar2 = *(int *)(param_1 + 0x5c8);
          }
          *(int *)(param_1 + 0x5c8) = iVar2 + -1;
          TArray<FFurData::FSection,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x5c0));
        }
        lVar7 = lVar7 + -0x18;
        lVar5 = lVar5 + -0x18;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
    iVar6 = *(int *)(param_1 + 0x5c8);
    lVar7 = (longlong)iVar6;
    *(int *)(param_1 + 0x5c8) = iVar6 + 1;
    if (*(int *)(param_1 + 0x5cc) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x5c0,iVar6);
    }
    lVar5 = *(longlong *)(param_1 + 0x5c0);
    puVar1 = (uint *)(lVar5 + 0x10 + lVar7 * 0x18);
    *puVar1 = *puVar1 & 0xfffffffe;
    *(longlong *)(lVar5 + 8 + lVar7 * 0x18) = param_5;
    *(undefined4 *)(lVar5 + 0x14 + lVar7 * 0x18) = 0;
    *(uint *)(lVar5 + 0x10 + lVar7 * 0x18) =
         ((uint)param_3 | *(uint *)(lVar5 + 0x10 + lVar7 * 0x18)) & 0xfffffffd | (uint)param_4 * 2;
    *(longlong *)(lVar5 + lVar7 * 0x18) = param_2;
  }
  return;
}


