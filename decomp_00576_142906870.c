// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142906870 PostSerialize body=59 status=ok
// SIG undefined PostSerialize(void)

void UScriptStruct::TCppStructOps<FEditedDocumentInfo>::PostSerialize
               (undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 local_28 [32];
  
  if (((*(byte *)(param_2 + 0x28) & 1) != 0) && (*(longlong *)(param_3 + 0x28) != 0)) {
    uVar1 = FSoftObjectPath::FSoftObjectPath(local_28);
    FSoftObjectPath::operator=(param_3,uVar1);
    *(undefined8 *)(param_3 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1429068b0 Rehash body=520 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<unsigned_int,FMeshSectionInfo>,TDefaultMapHashableKeyFuncs<unsigned_int,FMeshSectionInfo,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_1429069ef;
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
LAB_1429069ef:
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
        puVar12 = (uint *)(*param_1 + (longlong)iStack_1c * 0x14);
        uVar5 = (int)*plVar2 - 1U & *puVar12;
        puVar12[4] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar12[3] = *(uint *)((longlong)plVar7 +
                              ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
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



// FUNCTION 142906ac0 Rehash body=520 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<int,FEdGraphPinReference>,TDefaultMapHashableKeyFuncs<int,FEdGraphPinReference,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_142906bff;
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
LAB_142906bff:
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
        puVar12 = (uint *)(*param_1 + (longlong)iStack_1c * 0x24);
        uVar5 = (int)*plVar2 - 1U & *puVar12;
        puVar12[8] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar12[7] = *(uint *)((longlong)plVar7 +
                              ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
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



// FUNCTION 142906cd0 Rehash body=516 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<int,FOnlineFriendsSteam::FSteamFriendsList>,TDefaultMapHashableKeyFuncs<int,FOnlineFriendsSteam::FSteamFriendsList,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_142906e0f;
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
LAB_142906e0f:
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
        puVar12 = (uint *)((longlong)iStack_1c * 0x20 + *param_1);
        uVar5 = (int)*plVar2 - 1U & *puVar12;
        puVar12[7] = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        puVar12[6] = *(uint *)((longlong)plVar7 +
                              ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
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



// FUNCTION 142906ee0 Rehash body=522 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_14290701f;
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
LAB_14290701f:
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
        puVar12 = (uint *)((longlong)iStack_1c * 0x20 + *param_1);
        uVar8 = (puVar12[1] ^ *puVar12) & (int)*plVar2 - 1U;
        puVar12[7] = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        puVar12[6] = *(uint *)((longlong)plVar6 +
                              ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
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



// FUNCTION 1429070f0 Rehash body=528 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FEdGraphPinReference,int>,TDefaultMapHashableKeyFuncs<FEdGraphPinReference,int,1>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_14290722f;
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
LAB_14290722f:
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
        iVar3 = iStack_1c;
        lVar6 = *param_1 + (longlong)iStack_1c * 0x24;
        uVar5 = ::GetTypeHash(lVar6);
        uVar5 = (int)*plVar2 - 1U & uVar5;
        *(uint *)(lVar6 + 0x20) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x1c) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 142907300 ResizeGrow body=140 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<36,4>_>,FDefaultAllocator>::ResizeGrow
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
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x24,0);
  iVar4 = (int)(uVar3 / 0x24);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x24,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 142907390 ResizeTo body=120 status=ok
// SIG undefined ResizeTo(void)

void TArray<FCustomMeshTriangle,FDefaultAllocator>::ResizeTo(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x24,0);
    iVar3 = (int)(uVar1 / 0x24);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x24,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 142907410 Serialize body=112 status=ok
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
  UBlendSpaceBase::Serialize(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142907480 Serialize body=112 status=ok
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
  thunk_FUN_1422f8fd0(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 1429074f0 Serialize body=112 status=ok
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
  FUN_1422f8fd0(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142907560 Serialize body=112 status=ok
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
  FUN_1422f9240(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 1429075e0 StaticRegisterNativesUAvoidanceManager body=34 status=ok
// SIG undefined StaticRegisterNativesUAvoidanceManager(void)

void UAvoidanceManager::StaticRegisterNativesUAvoidanceManager(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_GetAvoidanceVelocityForComponent_14521dc60,4);
  return;
}



// FUNCTION 142907610 FUN_142907610 body=34 status=ok
// SIG undefined FUN_142907610(void)

void FUN_142907610(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1429028f0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetSprite_14521dca0,3);
  return;
}



// FUNCTION 142907640 StaticRegisterNativesUBlueprintAsyncActionBase body=34 status=ok
// SIG undefined StaticRegisterNativesUBlueprintAsyncActionBase(void)

void UBlueprintAsyncActionBase::StaticRegisterNativesUBlueprintAsyncActionBase(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_Activate_14521ec20,1);
  return;
}



// FUNCTION 142907670 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FBPEditorBookmarkNode::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1bb80 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FBPEditorBookmarkNode_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bb80 = GetStaticStruct(FUN_1429081e0,uVar2,L"BPEditorBookmarkNode",0x38,uVar1);
  }
  return;
}



// FUNCTION 1429076d0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FBPInterfaceDescription::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1bba0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FBPInterfaceDescription_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bba0 = GetStaticStruct(FUN_142908210,uVar2,L"BPInterfaceDescription",0x18,uVar1);
  }
  return;
}



// FUNCTION 142907730 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FSkeletalMeshLODInfo::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1bbb0 == 0) {
    uVar1 = FUN_1429066d0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bbb0 = GetStaticStruct(FUN_142908240,uVar2,L"BPVariableDescription",0xe8,uVar1);
  }
  return;
}



// FUNCTION 142907790 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FBPVariableMetaDataEntry::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1bbc0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FBPVariableMetaDataEntry_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bbc0 = GetStaticStruct(FUN_142908270,uVar2,L"BPVariableMetaDataEntry",0x18,uVar1);
  }
  return;
}



// FUNCTION 1429077f0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FBlendParameter::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1bb20 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FBlendParameter_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bb20 = GetStaticStruct(FUN_1429082a0,uVar2,L"BlendParameter",0x20,uVar1);
  }
  return;
}



// FUNCTION 142907850 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FBlendProfileBoneEntry::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1ba80 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FBlendProfileBoneEntry_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1ba80 = GetStaticStruct(FUN_1429082d0,uVar2,L"BlendProfileBoneEntry",0x20,uVar1);
  }
  return;
}



// FUNCTION 1429078b0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FBlendSample::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1bb10 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FBlendSample_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bb10 = GetStaticStruct(FUN_142908300,uVar2,L"BlendSample",0x18,uVar1);
  }
  return;
}



// FUNCTION 142907910 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FEdGraphSchemaAction_NewNode::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1bad0 == 0) {
    uVar1 = FUN_142906720();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bad0 = GetStaticStruct(FUN_142908330,uVar2,L"BlendSpaceInstance",0x108,uVar1);
  }
  return;
}



// FUNCTION 142907970 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FBlueprintComponentChangedPropertyInfo::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1bc48 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FBlueprintComponentChangedPropertyInfo_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bc48 =
         GetStaticStruct(FUN_142908360,uVar2,L"BlueprintComponentChangedPropertyInfo",0x18,uVar1);
  }
  return;
}



// FUNCTION 1429079d0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FBlueprintCookedComponentInstancingData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1bc38 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bc38 =
         GetStaticStruct(FUN_142908390,uVar2,L"BlueprintCookedComponentInstancingData",0x50,uVar1);
  }
  return;
}



// FUNCTION 142907a30 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FBlueprintDebugData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1bc68 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FBlueprintDebugData_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bc68 = GetStaticStruct(FUN_1429083c0,uVar2,L"BlueprintDebugData",1,uVar1);
  }
  return;
}



// FUNCTION 142907a90 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FBlueprintMacroCosmeticInfo::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1bbd0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FBlueprintMacroCosmeticInfo_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bbd0 = GetStaticStruct(FUN_1429083f0,uVar2,L"BlueprintMacroCosmeticInfo",1,uVar1);
  }
  return;
}



// FUNCTION 142907af0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FCompilerNativizationOptions::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1bbe0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FCompilerNativizationOptions_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bbe0 = GetStaticStruct(FUN_142908420,uVar2,L"CompilerNativizationOptions",0x80,uVar1);
  }
  return;
}



// FUNCTION 142907b50 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FDebuggingInfoForSingleFunction::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1bc88 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FDebuggingInfoForSingleFunction_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bc88 = GetStaticStruct(FUN_142908450,uVar2,L"DebuggingInfoForSingleFunction",400,uVar1)
    ;
  }
  return;
}



// FUNCTION 142907bb0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FEditedDocumentInfo::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1bb90 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FEditedDocumentInfo_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bb90 = GetStaticStruct(FUN_142908480,uVar2,L"EditedDocumentInfo",0x30,uVar1);
  }
  return;
}



// FUNCTION 142907c10 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FEditorElement::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1bb00 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FEditorElement_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bb00 = GetStaticStruct(FUN_1429084b0,uVar2,L"EditorElement",0x18,uVar1);
  }
  return;
}



// FUNCTION 142907c70 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FEventGraphFastCallPair::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1bc58 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FEventGraphFastCallPair_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bc58 = GetStaticStruct(FUN_1429084e0,uVar2,L"EventGraphFastCallPair",0x10,uVar1);
  }
  return;
}



// FUNCTION 142907cd0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FGridBlendSample::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1baf0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FGridBlendSample_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1baf0 = GetStaticStruct(FUN_142908510,uVar2,L"GridBlendSample",0x1c,uVar1);
  }
  return;
}



// FUNCTION 142907d30 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FInterpolationParameter::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1bb30 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FInterpolationParameter_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bb30 = GetStaticStruct(FUN_142908540,uVar2,L"InterpolationParameter",8,uVar1);
  }
  return;
}



// FUNCTION 142907d90 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FNavAvoidanceData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1ba00 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FNavAvoidanceData_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1ba00 = GetStaticStruct(FUN_142908570,uVar2,L"NavAvoidanceData",0x3c,uVar1);
  }
  return;
}



// FUNCTION 142907df0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FNodeToCodeAssociation::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1bc98 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FNodeToCodeAssociation_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bc98 = GetStaticStruct(FUN_1429085a0,uVar2,L"NodeToCodeAssociation",0x14,uVar1);
  }
  return;
}



// FUNCTION 142907e50 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPerBoneInterpolation::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1bae0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FPerBoneInterpolation_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bae0 = GetStaticStruct(FUN_1429085d0,uVar2,L"PerBoneInterpolation",0x20,uVar1);
  }
  return;
}



// FUNCTION 142907eb0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPointerToUberGraphFrame::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1bc78 == 0) {
    uVar1 = FUN_142906810();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bc78 = GetStaticStruct(FUN_142908600,uVar2,L"PointerToUberGraphFrame",8,uVar1);
  }
  return;
}



// FUNCTION 142907f10 FUN_142907f10 body=47 status=ok
// SIG undefined FUN_142907f10(void)

longlong FUN_142907f10(void)

{
  if (DAT_146b1bb50 == 0) {
    FUN_141786440(&DAT_146b1bb50,&PTR_FUN_14521c330);
  }
  return DAT_146b1bb50;
}



// FUNCTION 142907f40 FUN_142907f40 body=47 status=ok
// SIG undefined FUN_142907f40(void)

longlong FUN_142907f40(void)

{
  if (DAT_146b1ba90 == 0) {
    FUN_141786440(&DAT_146b1ba90,&PTR_StaticClass_14521cd60);
  }
  return DAT_146b1ba90;
}



// FUNCTION 142907f70 FUN_142907f70 body=47 status=ok
// SIG undefined FUN_142907f70(void)

longlong FUN_142907f70(void)

{
  if (DAT_146b1bab0 == 0) {
    FUN_141786440(&DAT_146b1bab0,&PTR_GetPrivateStaticClass_14521ac30);
  }
  return DAT_146b1bab0;
}



// FUNCTION 142907fa0 FUN_142907fa0 body=47 status=ok
// SIG undefined FUN_142907fa0(void)

longlong FUN_142907fa0(void)

{
  if (DAT_146b1baa0 == 0) {
    FUN_141786440(&DAT_146b1baa0,&PTR_LAB_14521aa80);
  }
  return DAT_146b1baa0;
}



// FUNCTION 142907fd0 FUN_142907fd0 body=47 status=ok
// SIG undefined FUN_142907fd0(void)

longlong FUN_142907fd0(void)

{
  if (DAT_146b1ba70 == 0) {
    FUN_141786440(&DAT_146b1ba70,&PTR_GetPrivateStaticClass_14521bbe0);
  }
  return DAT_146b1ba70;
}



// FUNCTION 142908000 FUN_142908000 body=47 status=ok
// SIG undefined FUN_142908000(void)

longlong FUN_142908000(void)

{
  if (DAT_146b1bbf0 == 0) {
    FUN_141786440(&DAT_146b1bbf0,&PTR_LAB_14521d290);
  }
  return DAT_146b1bbf0;
}



// FUNCTION 142908030 FUN_142908030 body=47 status=ok
// SIG undefined FUN_142908030(void)

longlong FUN_142908030(void)

{
  if (DAT_146b1bc28 == 0) {
    FUN_141786440(&DAT_146b1bc28,&PTR_LAB_14521a440);
  }
  return DAT_146b1bc28;
}



// FUNCTION 142908060 FUN_142908060 body=47 status=ok
// SIG undefined FUN_142908060(void)

longlong FUN_142908060(void)

{
  if (DAT_146b1bca8 == 0) {
    FUN_141786440(&DAT_146b1bca8,&PTR_GetPrivateStaticClass_14521ad60);
  }
  return DAT_146b1bca8;
}



// FUNCTION 142908090 FUN_142908090 body=47 status=ok
// SIG undefined FUN_142908090(void)

longlong FUN_142908090(void)

{
  if (DAT_146b1bac8 == 0) {
    FUN_1417866a0(&DAT_146b1bac8,&PTR_Z_Construct_UPackage__Script_Engine_14655ae30);
  }
  return DAT_146b1bac8;
}



// FUNCTION 1429080c0 FUN_1429080c0 body=47 status=ok
// SIG undefined FUN_1429080c0(void)

longlong FUN_1429080c0(void)

{
  if (DAT_146b1ba68 == 0) {
    FUN_1417866a0(&DAT_146b1ba68,&PTR_Z_Construct_UPackage__Script_Engine_14655ad90);
  }
  return DAT_146b1ba68;
}



// FUNCTION 1429080f0 FUN_1429080f0 body=47 status=ok
// SIG undefined FUN_1429080f0(void)

longlong FUN_1429080f0(void)

{
  if (DAT_146b1bb68 == 0) {
    FUN_1417866a0(&DAT_146b1bb68,&PTR_Z_Construct_UPackage__Script_Engine_14655aed0);
  }
  return DAT_146b1bb68;
}



// FUNCTION 142908120 FUN_142908120 body=47 status=ok
// SIG undefined FUN_142908120(void)

longlong FUN_142908120(void)

{
  if (DAT_146b1bb60 == 0) {
    FUN_1417866a0(&DAT_146b1bb60,&PTR_Z_Construct_UPackage__Script_Engine_14655ae80);
  }
  return DAT_146b1bb60;
}



// FUNCTION 142908150 FUN_142908150 body=47 status=ok
// SIG undefined FUN_142908150(void)

longlong FUN_142908150(void)

{
  if (DAT_146b1bb78 == 0) {
    FUN_1417866a0(&DAT_146b1bb78,&PTR_Z_Construct_UPackage__Script_Engine_14655af70);
  }
  return DAT_146b1bb78;
}



// FUNCTION 142908180 FUN_142908180 body=47 status=ok
// SIG undefined FUN_142908180(void)

longlong FUN_142908180(void)

{
  if (DAT_146b1bb70 == 0) {
    FUN_1417866a0(&DAT_146b1bb70,&PTR_Z_Construct_UPackage__Script_Engine_14655af20);
  }
  return DAT_146b1bb70;
}



// FUNCTION 1429081b0 FUN_1429081b0 body=47 status=ok
// SIG undefined FUN_1429081b0(void)

longlong FUN_1429081b0(void)

{
  if (DAT_146b1bac0 == 0) {
    FUN_1417866a0(&DAT_146b1bac0,&PTR_Z_Construct_UPackage__Script_Engine_14655ade0);
  }
  return DAT_146b1bac0;
}



// FUNCTION 1429081e0 FUN_1429081e0 body=47 status=ok
// SIG undefined FUN_1429081e0(void)

longlong FUN_1429081e0(void)

{
  if (DAT_146b1bb88 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1bb88,&PTR_Z_Construct_UPackage__Script_Engine_1465596a0);
  }
  return DAT_146b1bb88;
}



// FUNCTION 142908210 FUN_142908210 body=47 status=ok
// SIG undefined FUN_142908210(void)

longlong FUN_142908210(void)

{
  if (DAT_146b1bba8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1bba8,&PTR_Z_Construct_UPackage__Script_Engine_146559920);
  }
  return DAT_146b1bba8;
}



// FUNCTION 142908240 FUN_142908240 body=47 status=ok
// SIG undefined FUN_142908240(void)

longlong FUN_142908240(void)

{
  if (DAT_146b1bbb8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1bbb8,&PTR_Z_Construct_UPackage__Script_Engine_146559bc0);
  }
  return DAT_146b1bbb8;
}



// FUNCTION 142908270 FUN_142908270 body=47 status=ok
// SIG undefined FUN_142908270(void)

longlong FUN_142908270(void)

{
  if (DAT_146b1bbc8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1bbc8,&PTR_Z_Construct_UPackage__Script_Engine_146559cb0);
  }
  return DAT_146b1bbc8;
}



// FUNCTION 1429082a0 FUN_1429082a0 body=47 status=ok
// SIG undefined FUN_1429082a0(void)

longlong FUN_1429082a0(void)

{
  if (DAT_146b1bb28 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1bb28,&PTR_Z_Construct_UPackage__Script_Engine_146559140);
  }
  return DAT_146b1bb28;
}



// FUNCTION 1429082d0 FUN_1429082d0 body=47 status=ok
// SIG undefined FUN_1429082d0(void)

longlong FUN_1429082d0(void)

{
  if (DAT_146b1ba88 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1ba88,&PTR_Z_Construct_UPackage__Script_Engine_146558aa0);
  }
  return DAT_146b1ba88;
}



// FUNCTION 142908300 FUN_142908300 body=47 status=ok
// SIG undefined FUN_142908300(void)

longlong FUN_142908300(void)

{
  if (DAT_146b1bb18 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1bb18,&PTR_Z_Construct_UPackage__Script_Engine_146559050);
  }
  return DAT_146b1bb18;
}



// FUNCTION 142908330 FUN_142908330 body=47 status=ok
// SIG undefined FUN_142908330(void)

longlong FUN_142908330(void)

{
  if (DAT_146b1bad8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1bad8,&PTR_Z_Construct_UPackage__Script_Engine_146558ce0);
  }
  return DAT_146b1bad8;
}



// FUNCTION 142908360 FUN_142908360 body=47 status=ok
// SIG undefined FUN_142908360(void)

longlong FUN_142908360(void)

{
  if (DAT_146b1bc50 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1bc50,&PTR_Z_Construct_UPackage__Script_Engine_14655a8a0);
  }
  return DAT_146b1bc50;
}



// FUNCTION 142908390 FUN_142908390 body=47 status=ok
// SIG undefined FUN_142908390(void)

longlong FUN_142908390(void)

{
  if (DAT_146b1bc40 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1bc40,&PTR_Z_Construct_UPackage__Script_Engine_14655a7e0);
  }
  return DAT_146b1bc40;
}



// FUNCTION 1429083c0 FUN_1429083c0 body=47 status=ok
// SIG undefined FUN_1429083c0(void)

longlong FUN_1429083c0(void)

{
  if (DAT_146b1bc70 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1bc70,&PTR_Z_Construct_UPackage__Script_Engine_14655a9e0);
  }
  return DAT_146b1bc70;
}



// FUNCTION 1429083f0 FUN_1429083f0 body=47 status=ok
// SIG undefined FUN_1429083f0(void)

longlong FUN_1429083f0(void)

{
  if (DAT_146b1bbd8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1bbd8,&PTR_Z_Construct_UPackage__Script_Engine_146559d30);
  }
  return DAT_146b1bbd8;
}



// FUNCTION 142908420 FUN_142908420 body=47 status=ok
// SIG undefined FUN_142908420(void)

longlong FUN_142908420(void)

{
  if (DAT_146b1bbe8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1bbe8,&PTR_Z_Construct_UPackage__Script_Engine_146559fe0);
  }
  return DAT_146b1bbe8;
}



// FUNCTION 142908450 FUN_142908450 body=47 status=ok
// SIG undefined FUN_142908450(void)

longlong FUN_142908450(void)

{
  if (DAT_146b1bc90 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1bc90,&PTR_Z_Construct_UPackage__Script_Engine_14655aaa0);
  }
  return DAT_146b1bc90;
}



// FUNCTION 142908480 FUN_142908480 body=47 status=ok
// SIG undefined FUN_142908480(void)

longlong FUN_142908480(void)

{
  if (DAT_146b1bb98 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1bb98,&PTR_Z_Construct_UPackage__Script_Engine_1465597e0);
  }
  return DAT_146b1bb98;
}



// FUNCTION 1429084b0 FUN_1429084b0 body=47 status=ok
// SIG undefined FUN_1429084b0(void)

longlong FUN_1429084b0(void)

{
  if (DAT_146b1bb08 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1bb08,&PTR_Z_Construct_UPackage__Script_Engine_146558f50);
  }
  return DAT_146b1bb08;
}



// FUNCTION 1429084e0 FUN_1429084e0 body=47 status=ok
// SIG undefined FUN_1429084e0(void)

longlong FUN_1429084e0(void)

{
  if (DAT_146b1bc60 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1bc60,&PTR_Z_Construct_UPackage__Script_Engine_14655a960);
  }
  return DAT_146b1bc60;
}



// FUNCTION 142908510 FUN_142908510 body=47 status=ok
// SIG undefined FUN_142908510(void)

longlong FUN_142908510(void)

{
  if (DAT_146b1baf8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1baf8,&PTR_Z_Construct_UPackage__Script_Engine_146558e60);
  }
  return DAT_146b1baf8;
}



// FUNCTION 142908540 FUN_142908540 body=47 status=ok
// SIG undefined FUN_142908540(void)

longlong FUN_142908540(void)

{
  if (DAT_146b1bb38 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1bb38,&PTR_Z_Construct_UPackage__Script_Engine_146559200);
  }
  return DAT_146b1bb38;
}



// FUNCTION 142908570 FUN_142908570 body=47 status=ok
// SIG undefined FUN_142908570(void)

longlong FUN_142908570(void)

{
  if (DAT_146b1ba08 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1ba08,&PTR_Z_Construct_UPackage__Script_Engine_146558090);
  }
  return DAT_146b1ba08;
}



// FUNCTION 1429085a0 FUN_1429085a0 body=47 status=ok
// SIG undefined FUN_1429085a0(void)

longlong FUN_1429085a0(void)

{
  if (DAT_146b1bca0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1bca0,&PTR_Z_Construct_UPackage__Script_Engine_14655aaf0);
  }
  return DAT_146b1bca0;
}



// FUNCTION 1429085d0 FUN_1429085d0 body=47 status=ok
// SIG undefined FUN_1429085d0(void)

longlong FUN_1429085d0(void)

{
  if (DAT_146b1bae8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1bae8,&PTR_Z_Construct_UPackage__Script_Engine_146558da0);
  }
  return DAT_146b1bae8;
}



// FUNCTION 142908600 FUN_142908600 body=47 status=ok
// SIG undefined FUN_142908600(void)

longlong FUN_142908600(void)

{
  if (DAT_146b1bc80 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1bc80,&PTR_Z_Construct_UPackage__Script_Engine_14655aa50);
  }
  return DAT_146b1bc80;
}



// FUNCTION 142908630 execGetAvoidanceVelocityForComponent body=160 status=ok
// SIG undefined execGetAvoidanceVelocityForComponent(void)

void UAvoidanceManager::execGetAvoidanceVelocityForComponent
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined1 local_18 [16];
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)GetAvoidanceVelocityForComponent(param_1,local_18,local_res10);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 1429086d0 execGetNewAvoidanceUID body=43 status=ok
// SIG undefined execGetNewAvoidanceUID(void)

void UAvoidanceManager::execGetNewAvoidanceUID
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetNewAvoidanceUID();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142908700 execGetObjectCount body=43 status=ok
// SIG undefined execGetObjectCount(void)

void UAvoidanceManager::execGetObjectCount(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = GetObjectCount();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142908730 execRegisterMovementComponent body=195 status=ok
// SIG undefined execRegisterMovementComponent(void)

void UAvoidanceManager::execRegisterMovementComponent
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 local_res10 [2];
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
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
  uVar1 = RegisterMovementComponent(param_1,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142908800 execClientSetCameraMode body=132 status=ok
// SIG undefined execClientSetCameraMode(void)

void APlayerController::execClientSetCameraMode(longlong *param_1,longlong param_2)

{
  undefined8 local_res8;
  
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x8e8))(param_1,local_res8);
  return;
}



// FUNCTION 142908890 FUN_142908890 body=372 status=ok
// SIG undefined FUN_142908890(void)

void FUN_142908890(longlong *param_1,longlong param_2)

{
  undefined4 local_res8 [2];
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined4 local_28 [2];
  undefined8 local_20;
  
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
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
  (**(code **)(*param_1 + 0x8f8))
            (param_1,local_20,local_28[0],local_res20[0],local_res10[0],local_res8[0]);
  return;
}



// FUNCTION 142908a10 FUN_142908a10 body=305 status=ok
// SIG undefined FUN_142908a10(void)

void FUN_142908a10(longlong *param_1,longlong param_2)

{
  undefined4 local_res8 [2];
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined4 local_28 [4];
  
  local_28[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
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
  (**(code **)(*param_1 + 0x8f0))(param_1,local_28[0],local_res20[0],local_res10[0],local_res8[0]);
  return;
}



// FUNCTION 142908b50 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UBlueprintMapLibrary::GetPrivateStaticClass(void)

{
  if (DAT_146b1bd40 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"BlueprintMapLibrary",&DAT_146b1bd40,
                  StaticRegisterNativesUBlueprintMapLibrary,0x28,0x10000000,0,L"Engine",
                  FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146b1bd40;
}



// FUNCTION 142908c00 FUN_142908c00 body=47 status=ok
// SIG undefined FUN_142908c00(void)

longlong FUN_142908c00(void)

{
  if (DAT_146b1bd38 == 0) {
    FUN_141786440(&DAT_146b1bd38,&PTR_GetPrivateStaticClass_14521f970);
  }
  return DAT_146b1bd38;
}



// FUNCTION 142908c30 FUN_142908c30 body=47 status=ok
// SIG undefined FUN_142908c30(void)

longlong FUN_142908c30(void)

{
  if (DAT_146b1bcf0 == 0) {
    FUN_141786a30(&DAT_146b1bcf0,&PTR_FUN_14655b110);
  }
  return DAT_146b1bcf0;
}



// FUNCTION 142908c60 FUN_142908c60 body=47 status=ok
// SIG undefined FUN_142908c60(void)

longlong FUN_142908c60(void)

{
  if (DAT_146b1bcf8 == 0) {
    FUN_141786a30(&DAT_146b1bcf8,&PTR_FUN_14655b1c0);
  }
  return DAT_146b1bcf8;
}



// FUNCTION 142908c90 FUN_142908c90 body=47 status=ok
// SIG undefined FUN_142908c90(void)

longlong FUN_142908c90(void)

{
  if (DAT_146b1bd00 == 0) {
    FUN_141786a30(&DAT_146b1bd00,&PTR_FUN_14655b360);
  }
  return DAT_146b1bd00;
}



// FUNCTION 142908cc0 FUN_142908cc0 body=47 status=ok
// SIG undefined FUN_142908cc0(void)

longlong FUN_142908cc0(void)

{
  if (DAT_146b1bd08 == 0) {
    FUN_141786a30(&DAT_146b1bd08,&PTR_FUN_14655b500);
  }
  return DAT_146b1bd08;
}



// FUNCTION 142908cf0 FUN_142908cf0 body=47 status=ok
// SIG undefined FUN_142908cf0(void)

longlong FUN_142908cf0(void)

{
  if (DAT_146b1bd10 == 0) {
    FUN_141786a30(&DAT_146b1bd10,&PTR_FUN_14655b620);
  }
  return DAT_146b1bd10;
}



// FUNCTION 142908d20 FUN_142908d20 body=47 status=ok
// SIG undefined FUN_142908d20(void)

longlong FUN_142908d20(void)

{
  if (DAT_146b1bd18 == 0) {
    FUN_141786a30(&DAT_146b1bd18,&PTR_FUN_14655b740);
  }
  return DAT_146b1bd18;
}



// FUNCTION 142908d50 FUN_142908d50 body=47 status=ok
// SIG undefined FUN_142908d50(void)

longlong FUN_142908d50(void)

{
  if (DAT_146b1bd20 == 0) {
    FUN_141786a30(&DAT_146b1bd20,&PTR_FUN_14655b8e0);
  }
  return DAT_146b1bd20;
}



// FUNCTION 142908d80 FUN_142908d80 body=47 status=ok
// SIG undefined FUN_142908d80(void)

longlong FUN_142908d80(void)

{
  if (DAT_146b1bd28 == 0) {
    FUN_141786a30(&DAT_146b1bd28,&PTR_FUN_14655ba00);
  }
  return DAT_146b1bd28;
}



// FUNCTION 142908db0 FUN_142908db0 body=47 status=ok
// SIG undefined FUN_142908db0(void)

longlong FUN_142908db0(void)

{
  if (DAT_146b1bd30 == 0) {
    FUN_141786a30(&DAT_146b1bd30,&PTR_FUN_14655bb60);
  }
  return DAT_146b1bd30;
}



// FUNCTION 142908e00 FUN_142908e00 body=162 status=ok
// SIG undefined FUN_142908e00(void)

longlong FUN_142908e00(void)

{
  if (DAT_146b1bdb8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"PlatformGameInstance",&DAT_146b1bdb8,FUN_140447710,0x198,
                  0x1000000c,0,L"Game",FUN_1429096d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142937720,&LAB_140447700,0);
  }
  return DAT_146b1bdb8;
}



// FUNCTION 142908eb0 FUN_142908eb0 body=53 status=ok
// SIG undefined FUN_142908eb0(void)

void FUN_142908eb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_145222cb0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142908ef0 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UBoneMaskFilter::StaticClass(void)

{
  if (DAT_146b1bf08 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"BoneMaskFilter",&DAT_146b1bf08,FUN_140447710,0x38,0x10000000,0
                  ,L"Engine",&LAB_1429096b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b1bf08;
}



// FUNCTION 142908f90 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UKismetGuidLibrary::GetPrivateStaticClass(void)

{
  if (DAT_146b1be00 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"BlueprintPlatformLibrary",&DAT_146b1be00,
                  StaticRegisterNativesUKismetGuidLibrary,0x28,0x10000000,0,L"Engine",&LAB_142909670
                  ,TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                   ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146b1be00;
}



// FUNCTION 142909040 FUN_142909040 body=47 status=ok
// SIG undefined FUN_142909040(void)

longlong FUN_142909040(void)

{
  if (DAT_146b1bdb0 == 0) {
    FUN_141786440(&DAT_146b1bdb0,&PTR_FUN_1452207e0);
  }
  return DAT_146b1bdb0;
}



// FUNCTION 142909070 FUN_142909070 body=47 status=ok
// SIG undefined FUN_142909070(void)

longlong FUN_142909070(void)

{
  if (DAT_146b1bdf8 == 0) {
    FUN_141786440(&DAT_146b1bdf8,&PTR_GetPrivateStaticClass_145220f50);
  }
  return DAT_146b1bdf8;
}



// FUNCTION 1429090a0 FUN_1429090a0 body=47 status=ok
// SIG undefined FUN_1429090a0(void)

longlong FUN_1429090a0(void)

{
  if (DAT_146b1bdc0 == 0) {
    FUN_141786a30(&DAT_146b1bdc0,&PTR_FUN_14655c460);
  }
  return DAT_146b1bdc0;
}



// FUNCTION 1429090d0 FUN_1429090d0 body=47 status=ok
// SIG undefined FUN_1429090d0(void)

longlong FUN_1429090d0(void)

{
  if (DAT_146b1bdc8 == 0) {
    FUN_141786a30(&DAT_146b1bdc8,&PTR_FUN_14655c4a0);
  }
  return DAT_146b1bdc8;
}



// FUNCTION 142909100 FUN_142909100 body=47 status=ok
// SIG undefined FUN_142909100(void)

longlong FUN_142909100(void)

{
  if (DAT_146b1bdd0 == 0) {
    FUN_141786a30(&DAT_146b1bdd0,&PTR_FUN_14655c5d0);
  }
  return DAT_146b1bdd0;
}



// FUNCTION 142909130 FUN_142909130 body=47 status=ok
// SIG undefined FUN_142909130(void)

longlong FUN_142909130(void)

{
  if (DAT_146b1bdd8 == 0) {
    FUN_141786a30(&DAT_146b1bdd8,&PTR_FUN_14655c740);
  }
  return DAT_146b1bdd8;
}



// FUNCTION 142909160 FUN_142909160 body=47 status=ok
// SIG undefined FUN_142909160(void)

longlong FUN_142909160(void)

{
  if (DAT_146b1bde0 == 0) {
    FUN_141786a30(&DAT_146b1bde0,&PTR_FUN_14655c840);
  }
  return DAT_146b1bde0;
}



// FUNCTION 142909190 FUN_142909190 body=47 status=ok
// SIG undefined FUN_142909190(void)

longlong FUN_142909190(void)

{
  if (DAT_146b1bde8 == 0) {
    FUN_141786a30(&DAT_146b1bde8,&PTR_FUN_14655c8f0);
  }
  return DAT_146b1bde8;
}



// FUNCTION 1429091c0 FUN_1429091c0 body=47 status=ok
// SIG undefined FUN_1429091c0(void)

longlong FUN_1429091c0(void)

{
  if (DAT_146b1bdf0 == 0) {
    FUN_141786a30(&DAT_146b1bdf0,&PTR_FUN_14655ca10);
  }
  return DAT_146b1bdf0;
}



// FUNCTION 142909220 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UBlueprintSetLibrary::GetPrivateStaticClass(void)

{
  if (DAT_146b1be70 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"BlueprintSetLibrary",&DAT_146b1be70,
                  StaticRegisterNativesUBlueprintSetLibrary,0x28,0x10000000,0,L"Engine",
                  FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146b1be70;
}



// FUNCTION 1429092d0 FUN_1429092d0 body=47 status=ok
// SIG undefined FUN_1429092d0(void)

longlong FUN_1429092d0(void)

{
  if (DAT_146b1be68 == 0) {
    FUN_141786440(&DAT_146b1be68,&PTR_GetPrivateStaticClass_1452216c0);
  }
  return DAT_146b1be68;
}



// FUNCTION 142909300 FUN_142909300 body=47 status=ok
// SIG undefined FUN_142909300(void)

longlong FUN_142909300(void)

{
  if (DAT_146b1be08 == 0) {
    FUN_141786a30(&DAT_146b1be08,&PTR_FUN_14655cb20);
  }
  return DAT_146b1be08;
}



// FUNCTION 142909330 FUN_142909330 body=47 status=ok
// SIG undefined FUN_142909330(void)

longlong FUN_142909330(void)

{
  if (DAT_146b1be10 == 0) {
    FUN_141786a30(&DAT_146b1be10,&PTR_FUN_14655cc40);
  }
  return DAT_146b1be10;
}



// FUNCTION 142909360 FUN_142909360 body=47 status=ok
// SIG undefined FUN_142909360(void)

longlong FUN_142909360(void)

{
  if (DAT_146b1be18 == 0) {
    FUN_141786a30(&DAT_146b1be18,&PTR_FUN_14655ccf0);
  }
  return DAT_146b1be18;
}



// FUNCTION 142909390 FUN_142909390 body=47 status=ok
// SIG undefined FUN_142909390(void)

longlong FUN_142909390(void)

{
  if (DAT_146b1be20 == 0) {
    FUN_141786a30(&DAT_146b1be20,&PTR_FUN_14655ce20);
  }
  return DAT_146b1be20;
}



// FUNCTION 1429093c0 FUN_1429093c0 body=47 status=ok
// SIG undefined FUN_1429093c0(void)

longlong FUN_1429093c0(void)

{
  if (DAT_146b1be28 == 0) {
    FUN_141786a30(&DAT_146b1be28,&PTR_FUN_14655cfb0);
  }
  return DAT_146b1be28;
}



// FUNCTION 1429093f0 FUN_1429093f0 body=47 status=ok
// SIG undefined FUN_1429093f0(void)

longlong FUN_1429093f0(void)

{
  if (DAT_146b1be30 == 0) {
    FUN_141786a30(&DAT_146b1be30,&PTR_FUN_14655d140);
  }
  return DAT_146b1be30;
}



// FUNCTION 142909420 FUN_142909420 body=47 status=ok
// SIG undefined FUN_142909420(void)

longlong FUN_142909420(void)

{
  if (DAT_146b1be38 == 0) {
    FUN_141786a30(&DAT_146b1be38,&PTR_FUN_14655d260);
  }
  return DAT_146b1be38;
}



// FUNCTION 142909450 FUN_142909450 body=47 status=ok
// SIG undefined FUN_142909450(void)

longlong FUN_142909450(void)

{
  if (DAT_146b1be40 == 0) {
    FUN_141786a30(&DAT_146b1be40,&PTR_FUN_14655d390);
  }
  return DAT_146b1be40;
}



// FUNCTION 142909480 FUN_142909480 body=47 status=ok
// SIG undefined FUN_142909480(void)

longlong FUN_142909480(void)

{
  if (DAT_146b1be48 == 0) {
    FUN_141786a30(&DAT_146b1be48,&PTR_FUN_14655d4b0);
  }
  return DAT_146b1be48;
}



// FUNCTION 1429094b0 FUN_1429094b0 body=47 status=ok
// SIG undefined FUN_1429094b0(void)

longlong FUN_1429094b0(void)

{
  if (DAT_146b1be50 == 0) {
    FUN_141786a30(&DAT_146b1be50,&PTR_FUN_14655d5d0);
  }
  return DAT_146b1be50;
}



// FUNCTION 1429094e0 FUN_1429094e0 body=47 status=ok
// SIG undefined FUN_1429094e0(void)

longlong FUN_1429094e0(void)

{
  if (DAT_146b1be58 == 0) {
    FUN_141786a30(&DAT_146b1be58,&PTR_FUN_14655d760);
  }
  return DAT_146b1be58;
}



// FUNCTION 142909510 FUN_142909510 body=47 status=ok
// SIG undefined FUN_142909510(void)

longlong FUN_142909510(void)

{
  if (DAT_146b1be60 == 0) {
    FUN_141786a30(&DAT_146b1be60,&PTR_FUN_14655d850);
  }
  return DAT_146b1be60;
}



// FUNCTION 142909550 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FAnimMontageInstance_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1b0;
    *puVar1 = &PTR_FUN_1452229e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 142909590 FUN_142909590 body=151 status=ok
// SIG undefined FUN_142909590(void)

longlong FUN_142909590(void)

{
  if (DAT_146b1beb0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"BodySetup",&DAT_146b1beb0,FUN_140447710,0x308,0x10000000,0,
                  L"Engine",&LAB_142909690,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b1beb0;
}



// FUNCTION 142909630 FUN_142909630 body=53 status=ok
// SIG undefined FUN_142909630(void)

void FUN_142909630(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_145222af8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1429096d0 FUN_1429096d0 body=240 status=ok
// SIG undefined FUN_1429096d0(void)

void FUN_1429096d0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14243eb70(puVar1,param_1);
    *puVar1 = &PTR_FUN_1452223e0;
    puVar1[5] = &PTR_LAB_145222750;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    puVar1[0x24] = 0;
    puVar1[0x25] = 0;
    puVar1[0x26] = 0;
    puVar1[0x27] = 0;
    puVar1[0x28] = 0;
    puVar1[0x29] = 0;
    puVar1[0x2a] = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
    puVar1[0x32] = 0;
  }
  return;
}



// FUNCTION 1429097c0 ~FFormatContainer body=117 status=ok
// SIG undefined ~FFormatContainer(void)

void FFormatContainer::~FFormatContainer(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  lVar3 = (longlong)(int)param_1[1] * 0x10 + lVar2;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x10) {
    puVar1 = *(undefined8 **)(lVar2 + 8);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,0);
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142909850 FUN_142909850 body=277 status=ok
// SIG undefined FUN_142909850(void)

longlong FUN_142909850(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  FUN_140b9dcb0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x198);
  }
  return param_1;
}



// FUNCTION 1429099b0 Copy body=214 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FCollisionResponse>::Copy
          (undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  
  if (param_4 != 0) {
    puVar6 = (undefined8 *)(param_3 + 0x20);
    do {
      uVar2 = *(undefined4 *)((longlong)puVar6 + -0x1c);
      uVar3 = *(undefined4 *)(puVar6 + -3);
      uVar4 = *(undefined4 *)((longlong)puVar6 + -0x14);
      *param_2 = *(undefined4 *)(puVar6 + -4);
      param_2[1] = uVar2;
      param_2[2] = uVar3;
      param_2[3] = uVar4;
      puVar5 = (undefined8 *)(param_2 + 8);
      uVar2 = *(undefined4 *)((longlong)puVar6 + -0xc);
      uVar3 = *(undefined4 *)(puVar6 + -1);
      uVar4 = *(undefined4 *)((longlong)puVar6 + -4);
      param_2[4] = *(undefined4 *)(puVar6 + -2);
      param_2[5] = uVar2;
      param_2[6] = uVar3;
      param_2[7] = uVar4;
      if (puVar5 != puVar6) {
        iVar7 = *(int *)(puVar6 + 1);
        puVar1 = (undefined8 *)*puVar6;
        param_2[10] = iVar7;
        if ((iVar7 == 0) && (param_2[0xb] == 0)) {
          param_2[0xb] = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar5,iVar7);
          puVar5 = (undefined8 *)*puVar5;
          for (; iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar5 = *puVar1;
            *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar1 + 1);
            puVar1 = puVar1 + 2;
            puVar5 = puVar5 + 2;
          }
        }
      }
      puVar6 = puVar6 + 6;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xc;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 142909aa0 EApplicationState_StaticEnum body=55 status=ok
// SIG undefined EApplicationState_StaticEnum(void)

void EApplicationState_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b1bcd0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bcd0 = GetStaticEnum(FUN_14290a360,uVar1,L"EApplicationState");
  }
  return;
}



// FUNCTION 142909ae0 EBodyCollisionResponse_StaticEnum body=55 status=ok
// SIG undefined EBodyCollisionResponse_StaticEnum(void)

void EBodyCollisionResponse_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b1bcb8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bcb8 = GetStaticEnum(FUN_14290a390,uVar1,L"EBodyCollisionResponse");
  }
  return;
}



// FUNCTION 142909b20 ECollisionTraceFlag_StaticEnum body=55 status=ok
// SIG undefined ECollisionTraceFlag_StaticEnum(void)

void ECollisionTraceFlag_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b1bcc8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bcc8 = GetStaticEnum(FUN_14290a3c0,uVar1,L"ECollisionTraceFlag");
  }
  return;
}



// FUNCTION 142909b60 EDOFMode_StaticEnum body=55 status=ok
// SIG undefined EDOFMode_StaticEnum(void)

void EDOFMode_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b1bce8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bce8 = GetStaticEnum(FUN_14290a3f0,uVar1,L"EDOFMode");
  }
  return;
}



// FUNCTION 142909ba0 EDynamicActorScene_StaticEnum body=55 status=ok
// SIG undefined EDynamicActorScene_StaticEnum(void)

void EDynamicActorScene_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b1bce0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bce0 = GetStaticEnum(FUN_14290a420,uVar1,L"EDynamicActorScene");
  }
  return;
}



// FUNCTION 142909be0 EPhysicsType_StaticEnum body=55 status=ok
// SIG undefined EPhysicsType_StaticEnum(void)

void EPhysicsType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b1bcc0 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bcc0 = GetStaticEnum(FUN_14290a450,uVar1,L"EPhysicsType");
  }
  return;
}



// FUNCTION 142909c20 EScreenOrientation_StaticEnum body=55 status=ok
// SIG undefined EScreenOrientation_StaticEnum(void)

void EScreenOrientation_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b1bcd8 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bcd8 = GetStaticEnum(FUN_14290a480,uVar1,L"EScreenOrientation");
  }
  return;
}



// FUNCTION 142909c60 FUN_142909c60 body=6 status=ok
// SIG undefined FUN_142909c60(void)

undefined8 FUN_142909c60(void)

{
  return 0xd7a7b96d;
}



// FUNCTION 142909c70 FUN_142909c70 body=6 status=ok
// SIG undefined FUN_142909c70(void)

undefined8 FUN_142909c70(void)

{
  return 0xc1bfcaf2;
}



// FUNCTION 142909c80 Get_Z_Construct_UScriptStruct_FBranchFilter_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FBranchFilter_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FBranchFilter_CRC(void)

{
  return 0x9dd49ae0;
}



// FUNCTION 142909c90 Get_Z_Construct_UScriptStruct_FCollisionResponse_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FCollisionResponse_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FCollisionResponse_CRC(void)

{
  return 0xbff5e820;
}



// FUNCTION 142909ca0 Get_Z_Construct_UScriptStruct_FInputBlendPose_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FInputBlendPose_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FInputBlendPose_CRC(void)

{
  return 0x468444af;
}



// FUNCTION 142909e90 Serialize body=112 status=ok
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
  FUN_1426ccdf0(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 142909f00 thunk_FUN_142937720 body=5 status=ok
// SIG undefined thunk_FUN_142937720(void)

void thunk_FUN_142937720(void)

{
  FUN_142937720();
  return;
}



// FUNCTION 142909f10 StaticRegisterNativesUBlueprintMapLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUBlueprintMapLibrary(void)

void UBlueprintMapLibrary::StaticRegisterNativesUBlueprintMapLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_Map_Add_145222350,9);
  return;
}



// FUNCTION 142909f40 StaticRegisterNativesUKismetGuidLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUKismetGuidLibrary(void)

void UKismetGuidLibrary::StaticRegisterNativesUKismetGuidLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CancelLocalNotification_145222810,7);
  return;
}



// FUNCTION 142909f70 StaticRegisterNativesUBlueprintSetLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUBlueprintSetLibrary(void)

void UBlueprintSetLibrary::StaticRegisterNativesUBlueprintSetLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_Set_Add_145222880,0xc);
  return;
}



// FUNCTION 142909fa0 FUN_142909fa0 body=82 status=ok
// SIG undefined FUN_142909fa0(void)

void FUN_142909fa0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1be88 == 0) {
    uVar1 = FUN_142909c60();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1be88 = GetStaticStruct(FUN_14290a4b0,uVar2,L"BodyInstance",0x1b0,uVar1);
  }
  return;
}



// FUNCTION 14290a000 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FBoneReference::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1bed0 == 0) {
    uVar1 = FUN_142909c70();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bed0 = GetStaticStruct(FUN_14290a4e0,uVar2,L"BoneReference",0x18,uVar1);
  }
  return;
}



// FUNCTION 14290a060 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FBranchFilter::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1bef0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FBranchFilter_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bef0 = GetStaticStruct(FUN_14290a510,uVar2,L"BranchFilter",0x10,uVar1);
  }
  return;
}



// FUNCTION 14290a0c0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FCollisionResponse::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1be98 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FCollisionResponse_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1be98 = GetStaticStruct(FUN_14290a540,uVar2,L"CollisionResponse",0x30,uVar1);
  }
  return;
}



// FUNCTION 14290a120 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FInputBlendPose::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b1bee0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FInputBlendPose_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b1bee0 = GetStaticStruct(FUN_14290a570,uVar2,L"InputBlendPose",0x10,uVar1);
  }
  return;
}



// FUNCTION 14290a180 FUN_14290a180 body=47 status=ok
// SIG undefined FUN_14290a180(void)

longlong FUN_14290a180(void)

{
  if (DAT_146b1bea8 == 0) {
    FUN_141786440(&DAT_146b1bea8,&PTR_FUN_14521f6c0);
  }
  return DAT_146b1bea8;
}



// FUNCTION 14290a1b0 FUN_14290a1b0 body=47 status=ok
// SIG undefined FUN_14290a1b0(void)

longlong FUN_14290a1b0(void)

{
  if (DAT_146b1bf00 == 0) {
    FUN_141786440(&DAT_146b1bf00,&PTR_StaticClass_1452201d0);
  }
  return DAT_146b1bf00;
}



// FUNCTION 14290a1e0 FUN_14290a1e0 body=47 status=ok
// SIG undefined FUN_14290a1e0(void)

longlong FUN_14290a1e0(void)

{
  if (DAT_146b1bd98 == 0) {
    FUN_141786a30(&DAT_146b1bd98,&PTR_FUN_14655c070);
  }
  return DAT_146b1bd98;
}



// FUNCTION 14290a210 FUN_14290a210 body=47 status=ok
// SIG undefined FUN_14290a210(void)

longlong FUN_14290a210(void)

{
  if (DAT_146b1bd78 == 0) {
    FUN_141786a30(&DAT_146b1bd78,&PTR_FUN_14655be60);
  }
  return DAT_146b1bd78;
}



// FUNCTION 14290a240 FUN_14290a240 body=47 status=ok
// SIG undefined FUN_14290a240(void)

longlong FUN_14290a240(void)

{
  if (DAT_146b1bd68 == 0) {
    FUN_141786a30(&DAT_146b1bd68,&PTR_FUN_14655bd30);
  }
  return DAT_146b1bd68;
}



// FUNCTION 14290a270 FUN_14290a270 body=47 status=ok
// SIG undefined FUN_14290a270(void)

longlong FUN_14290a270(void)

{
  if (DAT_146b1bd70 == 0) {
    FUN_141786a30(&DAT_146b1bd70,&PTR_FUN_14655bdb0);
  }
  return DAT_146b1bd70;
}



// FUNCTION 14290a2a0 FUN_14290a2a0 body=47 status=ok
// SIG undefined FUN_14290a2a0(void)

longlong FUN_14290a2a0(void)

{
  if (DAT_146b1bd88 == 0) {
    FUN_141786a30(&DAT_146b1bd88,&PTR_FUN_14655bf90);
  }
  return DAT_146b1bd88;
}



// FUNCTION 14290a2d0 FUN_14290a2d0 body=47 status=ok
// SIG undefined FUN_14290a2d0(void)

longlong FUN_14290a2d0(void)

{
  if (DAT_146b1bd80 == 0) {
    FUN_141786a30(&DAT_146b1bd80,&PTR_FUN_14655bea0);
  }
  return DAT_146b1bd80;
}



// FUNCTION 14290a300 FUN_14290a300 body=47 status=ok
// SIG undefined FUN_14290a300(void)

longlong FUN_14290a300(void)

{
  if (DAT_146b1bd60 == 0) {
    FUN_141786a30(&DAT_146b1bd60,&PTR_FUN_14655bc40);
  }
  return DAT_146b1bd60;
}



// FUNCTION 14290a330 FUN_14290a330 body=47 status=ok
// SIG undefined FUN_14290a330(void)

longlong FUN_14290a330(void)

{
  if (DAT_146b1bd90 == 0) {
    FUN_141786a30(&DAT_146b1bd90,&PTR_FUN_14655c030);
  }
  return DAT_146b1bd90;
}



// FUNCTION 14290a360 FUN_14290a360 body=47 status=ok
// SIG undefined FUN_14290a360(void)

longlong FUN_14290a360(void)

{
  if (DAT_146b1bda0 == 0) {
    FUN_1417866a0(&DAT_146b1bda0,&PTR_Z_Construct_UPackage__Script_Engine_14655ef20);
  }
  return DAT_146b1bda0;
}



// FUNCTION 14290a390 FUN_14290a390 body=47 status=ok
// SIG undefined FUN_14290a390(void)

longlong FUN_14290a390(void)

{
  if (DAT_146b1beb8 == 0) {
    FUN_1417866a0(&DAT_146b1beb8,&PTR_Z_Construct_UPackage__Script_Engine_14655f060);
  }
  return DAT_146b1beb8;
}



// FUNCTION 14290a3c0 FUN_14290a3c0 body=47 status=ok
// SIG undefined FUN_14290a3c0(void)

longlong FUN_14290a3c0(void)

{
  if (DAT_146b1bec8 == 0) {
    FUN_1417866a0(&DAT_146b1bec8,&PTR_Z_Construct_UPackage__Script_Engine_14655f100);
  }
  return DAT_146b1bec8;
}



// FUNCTION 14290a3f0 FUN_14290a3f0 body=47 status=ok
// SIG undefined FUN_14290a3f0(void)

longlong FUN_14290a3f0(void)

{
  if (DAT_146b1be80 == 0) {
    FUN_1417866a0(&DAT_146b1be80,&PTR_Z_Construct_UPackage__Script_Engine_14655f010);
  }
  return DAT_146b1be80;
}



// FUNCTION 14290a420 FUN_14290a420 body=47 status=ok
// SIG undefined FUN_14290a420(void)

longlong FUN_14290a420(void)

{
  if (DAT_146b1be78 == 0) {
    FUN_1417866a0(&DAT_146b1be78,&PTR_Z_Construct_UPackage__Script_Engine_14655efc0);
  }
  return DAT_146b1be78;
}



// FUNCTION 14290a450 FUN_14290a450 body=47 status=ok
// SIG undefined FUN_14290a450(void)

longlong FUN_14290a450(void)

{
  if (DAT_146b1bec0 == 0) {
    FUN_1417866a0(&DAT_146b1bec0,&PTR_Z_Construct_UPackage__Script_Engine_14655f0b0);
  }
  return DAT_146b1bec0;
}



// FUNCTION 14290a480 FUN_14290a480 body=47 status=ok
// SIG undefined FUN_14290a480(void)

longlong FUN_14290a480(void)

{
  if (DAT_146b1bda8 == 0) {
    FUN_1417866a0(&DAT_146b1bda8,&PTR_Z_Construct_UPackage__Script_Engine_14655ef70);
  }
  return DAT_146b1bda8;
}



// FUNCTION 14290a4b0 FUN_14290a4b0 body=47 status=ok
// SIG undefined FUN_14290a4b0(void)

longlong FUN_14290a4b0(void)

{
  if (DAT_146b1be90 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1be90,&PTR_Z_Construct_UPackage__Script_Engine_14655e820);
  }
  return DAT_146b1be90;
}



// FUNCTION 14290a4e0 FUN_14290a4e0 body=47 status=ok
// SIG undefined FUN_14290a4e0(void)

longlong FUN_14290a4e0(void)

{
  if (DAT_146b1bed8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1bed8,&PTR_Z_Construct_UPackage__Script_Engine_14655edb0);
  }
  return DAT_146b1bed8;
}



// FUNCTION 14290a510 FUN_14290a510 body=47 status=ok
// SIG undefined FUN_14290a510(void)

longlong FUN_14290a510(void)

{
  if (DAT_146b1bef8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1bef8,&PTR_Z_Construct_UPackage__Script_Engine_14655ee90);
  }
  return DAT_146b1bef8;
}



// FUNCTION 14290a540 FUN_14290a540 body=47 status=ok
// SIG undefined FUN_14290a540(void)

longlong FUN_14290a540(void)

{
  if (DAT_146b1bea0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1bea0,&PTR_Z_Construct_UPackage__Script_Engine_14655e8f0);
  }
  return DAT_146b1bea0;
}



// FUNCTION 14290a570 FUN_14290a570 body=47 status=ok
// SIG undefined FUN_14290a570(void)

longlong FUN_14290a570(void)

{
  if (DAT_146b1bee8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b1bee8,&PTR_Z_Construct_UPackage__Script_Engine_14655ee40);
  }
  return DAT_146b1bee8;
}



// FUNCTION 14290a5a0 execCancelLocalNotification body=132 status=ok
// SIG undefined execCancelLocalNotification(void)

void UBlueprintPlatformLibrary::execCancelLocalNotification(undefined8 param_1,longlong param_2)

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
  CancelLocalNotification(local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14290a650 execGetLaunchNotification body=312 status=ok
// SIG undefined execGetLaunchNotification(void)

void UBlueprintPlatformLibrary::execGetLaunchNotification(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined1 local_res10 [16];
  undefined4 local_res20 [2];
  longlong local_28 [2];
  
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  puVar2 = local_res10;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  local_res20[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  plVar3 = local_28;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  puVar4 = local_res20;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  GetLaunchNotification(puVar2,plVar3,puVar4);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14290a790 FUN_14290a790 body=651 status=ok
// SIG undefined FUN_14290a790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14290a790(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 *puVar10;
  void *_Dst;
  void *_Dst_00;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  puVar10 = auStack_58;
  local_30 = DAT_1468387a8 ^ (ulonglong)&local_38;
  _Dst = (void *)0x0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  local_38 = *(undefined8 *)(param_2 + 0x38);
  if (lVar1 != 0) {
    lVar7 = UMapProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      plVar2 = *(longlong **)(lVar1 + 0x70);
      iVar9 = *(int *)((longlong)plVar2 + 0x34) * (int)plVar2[6];
      puVar10 = auStack_58;
      _Dst_00 = _Dst;
      if (iVar9 != 0) {
        uVar8 = (longlong)(iVar9 + 0xf) + 0xf;
        if (uVar8 <= (ulonglong)(longlong)(iVar9 + 0xf)) {
          uVar8 = 0xffffffffffffff0;
        }
        puVar10 = auStack_58 + -(uVar8 & 0xfffffffffffffff0);
        _Dst_00 = (void *)((longlong)&local_30 + -(uVar8 & 0xfffffffffffffff0));
      }
      if ((*(uint *)(plVar2 + 7) >> 9 & 1) == 0) {
        pcVar5 = *(code **)(*plVar2 + 0x330);
        *(undefined8 *)(puVar10 + -8) = 0x14290a8ba;
        (*pcVar5)(plVar2,_Dst_00);
      }
      else {
        *(undefined8 *)(puVar10 + -8) = 0x14290a8a9;
        _guard_xfg_dispatch_icall_nop(_Dst_00,0,(longlong)iVar9);
      }
      *(undefined8 *)(param_2 + 0x38) = 0;
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
        *(undefined8 *)(puVar10 + -8) = 0x14290a8ef;
        FUN_14179aca0(param_2,_Dst_00);
      }
      else {
        uVar3 = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(puVar10 + -8) = 0x14290a8d3;
        FFrame::Step(param_2,uVar3,_Dst_00);
      }
      plVar4 = *(longlong **)(lVar1 + 0x78);
      iVar9 = *(int *)((longlong)plVar4 + 0x34) * (int)plVar4[6];
      if (iVar9 != 0) {
        uVar8 = (longlong)(iVar9 + 0xf) + 0xf;
        if (uVar8 <= (ulonglong)(longlong)(iVar9 + 0xf)) {
          uVar8 = 0xffffffffffffff0;
        }
        *(undefined8 *)(puVar10 + -8) = 0x14290a920;
        _Dst = (void *)((ulonglong)(puVar10 + -(uVar8 & 0xfffffffffffffff0) + 0x2f) &
                       0xfffffffffffffff0);
        puVar10 = puVar10 + -(uVar8 & 0xfffffffffffffff0);
      }
      if ((*(uint *)(plVar4 + 7) >> 9 & 1) == 0) {
        pcVar5 = *(code **)(*plVar4 + 0x330);
        *(undefined8 *)(puVar10 + -8) = 0x14290a959;
        (*pcVar5)(plVar4,_Dst);
      }
      else {
        *(undefined8 *)(puVar10 + -8) = 0x14290a948;
        _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar9);
      }
      *(undefined8 *)(param_2 + 0x38) = 0;
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
        *(undefined8 *)(puVar10 + -8) = 0x14290a98e;
        FUN_14179aca0(param_2,_Dst);
      }
      else {
        uVar3 = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(puVar10 + -8) = 0x14290a972;
        FFrame::Step(param_2,uVar3,_Dst);
      }
      uVar3 = local_38;
      *(ulonglong *)(param_2 + 0x20) =
           (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
      *(undefined8 *)(puVar10 + -8) = 0x14290a9b2;
      UBlueprintMapLibrary::GenericMap_Add(uVar3,lVar1,_Dst_00,_Dst);
      if ((~(byte)((ulonglong)plVar4[7] >> 0x24) & 1) != 0) {
        pcVar5 = *(code **)(*plVar4 + 0x328);
        *(undefined8 *)(puVar10 + -8) = 0x14290a9cf;
        (*pcVar5)(plVar4,_Dst);
      }
      if ((~(byte)((ulonglong)plVar2[7] >> 0x24) & 1) != 0) {
        pcVar5 = *(code **)(*plVar2 + 0x328);
        *(undefined8 *)(puVar10 + -8) = 0x14290a9ec;
        (*pcVar5)(plVar2,_Dst_00);
      }
      goto LAB_14290a9f5;
    }
  }
  *(undefined1 *)(param_2 + 0x90) = 1;
LAB_14290a9f5:
  *(undefined8 *)(puVar10 + -8) = 0x14290aa01;
  return;
}



// FUNCTION 14290aa20 execMap_Clear body=203 status=ok
// SIG undefined execMap_Clear(void)

void UBlueprintMapLibrary::execMap_Clear(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (lVar1 != 0) {
    lVar4 = UMapProperty::GetPrivateStaticClass();
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
      *(ulonglong *)(param_2 + 0x20) =
           (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
      GenericMap_Clear(uVar2,lVar1);
      return;
    }
  }
  *(undefined1 *)(param_2 + 0x90) = 1;
  return;
}



// FUNCTION 14290aaf0 FUN_14290aaf0 body=459 status=ok
// SIG undefined FUN_14290aaf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14290aaf0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 *_Dst;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  undefined1 auStack_30 [8];
  
  puVar11 = auStack_58;
  local_38 = DAT_1468387a8 ^ (ulonglong)&local_38;
  _Dst = (undefined1 *)0x0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (lVar1 != 0) {
    lVar8 = UMapProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      plVar3 = *(longlong **)(lVar1 + 0x70);
      iVar10 = *(int *)((longlong)plVar3 + 0x34) * (int)plVar3[6];
      puVar11 = auStack_58;
      if (iVar10 != 0) {
        uVar9 = (longlong)(iVar10 + 0xf) + 0xf;
        if (uVar9 <= (ulonglong)(longlong)(iVar10 + 0xf)) {
          uVar9 = 0xffffffffffffff0;
        }
        _Dst = auStack_30 + -(uVar9 & 0xfffffffffffffff0);
        puVar11 = auStack_58 + -(uVar9 & 0xfffffffffffffff0);
      }
      if ((*(uint *)(plVar3 + 7) >> 9 & 1) == 0) {
        pcVar5 = *(code **)(*plVar3 + 0x330);
        *(undefined8 *)(puVar11 + -8) = 0x14290ac13;
        (*pcVar5)(plVar3,_Dst);
      }
      else {
        *(undefined8 *)(puVar11 + -8) = 0x14290ac02;
        _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar10);
      }
      *(undefined8 *)(param_2 + 0x38) = 0;
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
        *(undefined8 *)(puVar11 + -8) = 0x14290ac48;
        FUN_14179aca0(param_2,_Dst);
      }
      else {
        uVar4 = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(puVar11 + -8) = 0x14290ac2c;
        FFrame::Step(param_2,uVar4,_Dst);
      }
      *(ulonglong *)(param_2 + 0x20) =
           (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
      *(undefined8 *)(puVar11 + -8) = 0x14290ac6b;
      uVar7 = FUN_1422ee0e0(uVar2,lVar1,_Dst,0);
      *param_3 = uVar7;
      if ((~(byte)((ulonglong)plVar3[7] >> 0x24) & 1) != 0) {
        pcVar5 = *(code **)(*plVar3 + 0x328);
        *(undefined8 *)(puVar11 + -8) = 0x14290ac8c;
        (*pcVar5)(plVar3,_Dst);
      }
      goto LAB_14290ac95;
    }
  }
  *(undefined1 *)(param_2 + 0x90) = 1;
LAB_14290ac95:
  *(undefined8 *)(puVar11 + -8) = 0x14290aca1;
  return;
}



// FUNCTION 14290acc0 FUN_14290acc0 body=684 status=ok
// SIG undefined FUN_14290acc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14290acc0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 *puVar11;
  void *_Dst;
  void *_Dst_00;
  void *pvVar12;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  ulonglong local_38;
  
  puVar11 = auStack_68;
  local_38 = DAT_1468387a8 ^ (ulonglong)&local_48;
  _Dst_00 = (void *)0x0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  local_40 = param_3;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  local_48 = *(undefined8 *)(param_2 + 0x38);
  if (lVar1 != 0) {
    lVar8 = UMapProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      plVar2 = *(longlong **)(lVar1 + 0x70);
      iVar10 = *(int *)((longlong)plVar2 + 0x34) * (int)plVar2[6];
      puVar11 = auStack_68;
      _Dst = _Dst_00;
      if (iVar10 != 0) {
        uVar9 = (longlong)(iVar10 + 0xf) + 0xf;
        if (uVar9 <= (ulonglong)(longlong)(iVar10 + 0xf)) {
          uVar9 = 0xffffffffffffff0;
        }
        puVar11 = auStack_68 + -(uVar9 & 0xfffffffffffffff0);
        _Dst = (void *)((longlong)&local_40 + -(uVar9 & 0xfffffffffffffff0));
      }
      if ((*(uint *)(plVar2 + 7) >> 9 & 1) == 0) {
        pcVar5 = *(code **)(*plVar2 + 0x330);
        *(undefined8 *)(puVar11 + -8) = 0x14290adee;
        (*pcVar5)(plVar2,_Dst);
      }
      else {
        *(undefined8 *)(puVar11 + -8) = 0x14290addd;
        _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar10);
      }
      *(undefined8 *)(param_2 + 0x38) = 0;
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
        *(undefined8 *)(puVar11 + -8) = 0x14290ae23;
        FUN_14179aca0(param_2,_Dst);
      }
      else {
        uVar3 = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(puVar11 + -8) = 0x14290ae07;
        FFrame::Step(param_2,uVar3,_Dst);
      }
      plVar4 = *(longlong **)(lVar1 + 0x78);
      iVar10 = *(int *)((longlong)plVar4 + 0x34) * (int)plVar4[6];
      if (iVar10 != 0) {
        uVar9 = (longlong)(iVar10 + 0xf) + 0xf;
        if (uVar9 <= (ulonglong)(longlong)(iVar10 + 0xf)) {
          uVar9 = 0xffffffffffffff0;
        }
        *(undefined8 *)(puVar11 + -8) = 0x14290ae54;
        _Dst_00 = (void *)((ulonglong)(puVar11 + -(uVar9 & 0xfffffffffffffff0) + 0x2f) &
                          0xfffffffffffffff0);
        puVar11 = puVar11 + -(uVar9 & 0xfffffffffffffff0);
      }
      if ((*(uint *)(plVar4 + 7) >> 9 & 1) == 0) {
        pcVar5 = *(code **)(*plVar4 + 0x330);
        *(undefined8 *)(puVar11 + -8) = 0x14290ae8d;
        (*pcVar5)(plVar4,_Dst_00);
      }
      else {
        *(undefined8 *)(puVar11 + -8) = 0x14290ae7c;
        _guard_xfg_dispatch_icall_nop(_Dst_00,0,(longlong)iVar10);
      }
      *(undefined8 *)(param_2 + 0x38) = 0;
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
        *(undefined8 *)(puVar11 + -8) = 0x14290aec2;
        FUN_14179aca0(param_2,_Dst_00);
      }
      else {
        uVar3 = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(puVar11 + -8) = 0x14290aea6;
        FFrame::Step(param_2,uVar3,_Dst_00);
      }
      uVar3 = local_48;
      if ((*(void **)(param_2 + 0x38) == (void *)0x0) ||
         (pvVar12 = *(void **)(param_2 + 0x38),
         *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x10) != plVar4[2])) {
        pvVar12 = _Dst_00;
      }
      *(ulonglong *)(param_2 + 0x20) =
           (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
      *(undefined8 *)(puVar11 + -8) = 0x14290aefd;
      uVar7 = FUN_1422ee0e0(uVar3,lVar1,_Dst,pvVar12);
      *local_40 = uVar7;
      if ((~(byte)((ulonglong)plVar4[7] >> 0x24) & 1) != 0) {
        pcVar5 = *(code **)(*plVar4 + 0x328);
        *(undefined8 *)(puVar11 + -8) = 0x14290af20;
        (*pcVar5)(plVar4,_Dst_00);
      }
      if ((~(byte)((ulonglong)plVar2[7] >> 0x24) & 1) != 0) {
        pcVar5 = *(code **)(*plVar2 + 0x328);
        *(undefined8 *)(puVar11 + -8) = 0x14290af3d;
        (*pcVar5)(plVar2,_Dst);
      }
      goto LAB_14290af46;
    }
  }
  *(undefined1 *)(param_2 + 0x90) = 1;
LAB_14290af46:
  *(undefined8 *)(puVar11 + -8) = 0x14290af52;
  return;
}



// FUNCTION 14290af70 FUN_14290af70 body=342 status=ok
// SIG undefined FUN_14290af70(void)

void FUN_14290af70(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (lVar1 != 0) {
    lVar5 = UMapProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      *(undefined8 *)(param_2 + 0x30) = 0;
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
        FUN_14179aca0(param_2,0);
      }
      else {
        FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
      }
      lVar5 = *(longlong *)(param_2 + 0x30);
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      if (lVar5 != 0) {
        lVar6 = UArrayProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          *(ulonglong *)(param_2 + 0x20) =
               (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
          FUN_1422ee280(uVar2,lVar1,uVar3,lVar5);
          return;
        }
      }
    }
  }
  *(undefined1 *)(param_2 + 0x90) = 1;
  return;
}



// FUNCTION 14290b0d0 execMap_Length body=221 status=ok
// SIG undefined execMap_Length(void)

void UBlueprintMapLibrary::execMap_Length(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (lVar1 != 0) {
    lVar5 = UMapProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      *(ulonglong *)(param_2 + 0x20) =
           (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
      uVar4 = GenericMap_Length(uVar2,lVar1);
      *param_3 = uVar4;
      return;
    }
  }
  *(undefined1 *)(param_2 + 0x90) = 1;
  return;
}



// FUNCTION 14290b1b0 FUN_14290b1b0 body=456 status=ok
// SIG undefined FUN_14290b1b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14290b1b0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 *_Dst;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  undefined1 auStack_30 [8];
  
  puVar11 = auStack_58;
  local_38 = DAT_1468387a8 ^ (ulonglong)&local_38;
  _Dst = (undefined1 *)0x0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (lVar1 != 0) {
    lVar8 = UMapProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      plVar3 = *(longlong **)(lVar1 + 0x70);
      iVar10 = *(int *)((longlong)plVar3 + 0x34) * (int)plVar3[6];
      puVar11 = auStack_58;
      if (iVar10 != 0) {
        uVar9 = (longlong)(iVar10 + 0xf) + 0xf;
        if (uVar9 <= (ulonglong)(longlong)(iVar10 + 0xf)) {
          uVar9 = 0xffffffffffffff0;
        }
        _Dst = auStack_30 + -(uVar9 & 0xfffffffffffffff0);
        puVar11 = auStack_58 + -(uVar9 & 0xfffffffffffffff0);
      }
      if ((*(uint *)(plVar3 + 7) >> 9 & 1) == 0) {
        pcVar5 = *(code **)(*plVar3 + 0x330);
        *(undefined8 *)(puVar11 + -8) = 0x14290b2d3;
        (*pcVar5)(plVar3,_Dst);
      }
      else {
        *(undefined8 *)(puVar11 + -8) = 0x14290b2c2;
        _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar10);
      }
      *(undefined8 *)(param_2 + 0x38) = 0;
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
        *(undefined8 *)(puVar11 + -8) = 0x14290b308;
        FUN_14179aca0(param_2,_Dst);
      }
      else {
        uVar4 = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(puVar11 + -8) = 0x14290b2ec;
        FFrame::Step(param_2,uVar4,_Dst);
      }
      *(ulonglong *)(param_2 + 0x20) =
           (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
      *(undefined8 *)(puVar11 + -8) = 0x14290b328;
      uVar7 = FUN_1422ee500(uVar2,lVar1,_Dst);
      *param_3 = uVar7;
      if ((~(byte)((ulonglong)plVar3[7] >> 0x24) & 1) != 0) {
        pcVar5 = *(code **)(*plVar3 + 0x328);
        *(undefined8 *)(puVar11 + -8) = 0x14290b349;
        (*pcVar5)(plVar3,_Dst);
      }
      goto LAB_14290b352;
    }
  }
  *(undefined1 *)(param_2 + 0x90) = 1;
LAB_14290b352:
  *(undefined8 *)(puVar11 + -8) = 0x14290b35e;
  return;
}



// FUNCTION 14290b380 FUN_14290b380 body=342 status=ok
// SIG undefined FUN_14290b380(void)

void FUN_14290b380(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (lVar1 != 0) {
    lVar5 = UMapProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      *(undefined8 *)(param_2 + 0x30) = 0;
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
        FUN_14179aca0(param_2,0);
      }
      else {
        FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
      }
      lVar5 = *(longlong *)(param_2 + 0x30);
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      if (lVar5 != 0) {
        lVar6 = UArrayProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          *(ulonglong *)(param_2 + 0x20) =
               (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
          FUN_1422ee770(uVar2,lVar1,uVar3,lVar5);
          return;
        }
      }
    }
  }
  *(undefined1 *)(param_2 + 0x90) = 1;
  return;
}



// FUNCTION 14290b4e0 execScheduleLocalNotificationAtTime body=714 status=ok
// SIG undefined execScheduleLocalNotificationAtTime(void)

void UBlueprintPlatformLibrary::execScheduleLocalNotificationAtTime
               (undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  bool bVar9;
  int local_res10 [4];
  undefined1 local_res20 [8];
  longlong local_98 [2];
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_58 [8];
  longlong *local_50;
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  puVar7 = local_res20;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar9 = local_res10[0] != 0;
  FText::FText(local_58);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar6 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  FText::FText(local_70);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  puVar8 = local_70;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar8 = *(undefined1 **)(param_2 + 0x38);
  }
  FText::FText(local_88);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  puVar5 = local_88;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  ScheduleLocalNotificationAtTime(puVar7,bVar9,puVar6,puVar8,puVar5,local_98);
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return;
}



// FUNCTION 14290b7b0 execScheduleLocalNotificationBadgeAtTime body=281 status=ok
// SIG undefined execScheduleLocalNotificationBadgeAtTime(void)

void UBlueprintPlatformLibrary::execScheduleLocalNotificationBadgeAtTime
               (undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  int local_res10 [4];
  undefined1 local_res20 [8];
  longlong local_28 [2];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  puVar1 = local_res20;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_28[0] = 0;
  local_28[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  ScheduleLocalNotificationBadgeAtTime(puVar1,bVar2,local_28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14290b8d0 execScheduleLocalNotificationBadgeFromNow body=193 status=ok
// SIG undefined execScheduleLocalNotificationBadgeFromNow(void)

void UBlueprintPlatformLibrary::execScheduleLocalNotificationBadgeFromNow
               (undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  longlong local_18 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
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
  ScheduleLocalNotificationBadgeFromNow(local_res10[0],local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14290b9a0 execScheduleLocalNotificationFromNow body=637 status=ok
// SIG undefined execScheduleLocalNotificationFromNow(void)

void UBlueprintPlatformLibrary::execScheduleLocalNotificationFromNow
               (undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 local_res10 [2];
  longlong local_78 [2];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_50 [8];
  longlong *local_48;
  undefined1 local_38 [8];
  longlong *local_30;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  FText::FText(local_38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar7 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_2 + 0x38);
  }
  FText::FText(local_50);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar6 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  FText::FText(local_68);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  puVar5 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  ScheduleLocalNotificationFromNow(local_res10[0],puVar7,puVar6,puVar5,local_78);
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
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
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return;
}



// FUNCTION 14290bc20 FUN_14290bc20 body=227 status=ok
// SIG undefined FUN_14290bc20(void)

void FUN_14290bc20(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1422ee690(local_res20,local_res10[0],*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 14290bd10 FUN_14290bd10 body=227 status=ok
// SIG undefined FUN_14290bd10(void)

void FUN_14290bd10(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1422ef820(local_res20,local_res10[0],*(undefined8 *)(param_2 + 0x38));
  return;
}



// FUNCTION 14290be00 FUN_14290be00 body=449 status=ok
// SIG undefined FUN_14290be00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14290be00(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined1 *_Dst;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  undefined1 auStack_20 [8];
  
  puVar10 = auStack_48;
  local_28 = DAT_1468387a8 ^ (ulonglong)&local_28;
  _Dst = (undefined1 *)0x0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (lVar1 != 0) {
    lVar7 = USetProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      plVar3 = *(longlong **)(lVar1 + 0x70);
      iVar9 = *(int *)((longlong)plVar3 + 0x34) * (int)plVar3[6];
      puVar10 = auStack_48;
      if (iVar9 != 0) {
        uVar8 = (longlong)(iVar9 + 0xf) + 0xf;
        if (uVar8 <= (ulonglong)(longlong)(iVar9 + 0xf)) {
          uVar8 = 0xffffffffffffff0;
        }
        _Dst = auStack_20 + -(uVar8 & 0xfffffffffffffff0);
        puVar10 = auStack_48 + -(uVar8 & 0xfffffffffffffff0);
      }
      if ((*(uint *)(plVar3 + 7) >> 9 & 1) == 0) {
        pcVar5 = *(code **)(*plVar3 + 0x330);
        *(undefined8 *)(puVar10 + -8) = 0x14290bf20;
        (*pcVar5)(plVar3,_Dst);
      }
      else {
        *(undefined8 *)(puVar10 + -8) = 0x14290bf0f;
        _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar9);
      }
      *(undefined8 *)(param_2 + 0x38) = 0;
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
        *(undefined8 *)(puVar10 + -8) = 0x14290bf55;
        FUN_14179aca0(param_2,_Dst);
      }
      else {
        uVar4 = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(puVar10 + -8) = 0x14290bf39;
        FFrame::Step(param_2,uVar4,_Dst);
      }
      *(ulonglong *)(param_2 + 0x20) =
           (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
      *(undefined8 *)(puVar10 + -8) = 0x14290bf75;
      UBlueprintSetLibrary::GenericSet_Add(uVar2,lVar1,_Dst);
      if ((~(byte)((ulonglong)plVar3[7] >> 0x24) & 1) != 0) {
        pcVar5 = *(code **)(*plVar3 + 0x328);
        *(undefined8 *)(puVar10 + -8) = 0x14290bf92;
        (*pcVar5)(plVar3,_Dst);
      }
      goto LAB_14290bf9b;
    }
  }
  *(undefined1 *)(param_2 + 0x90) = 1;
LAB_14290bf9b:
  *(undefined8 *)(puVar10 + -8) = 0x14290bfa7;
  return;
}



// FUNCTION 14290bfd0 execSet_AddItems body=342 status=ok
// SIG undefined execSet_AddItems(void)

void UBlueprintSetLibrary::execSet_AddItems(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (lVar1 != 0) {
    lVar5 = USetProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      *(undefined8 *)(param_2 + 0x30) = 0;
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
        FUN_14179aca0(param_2,0);
      }
      else {
        FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
      }
      lVar5 = *(longlong *)(param_2 + 0x30);
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      if (lVar5 != 0) {
        lVar6 = UArrayProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          *(ulonglong *)(param_2 + 0x20) =
               (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
          GenericSet_AddItems(uVar2,lVar1,uVar3,lVar5);
          return;
        }
      }
    }
  }
  *(undefined1 *)(param_2 + 0x90) = 1;
  return;
}



// FUNCTION 14290c130 execSet_Clear body=203 status=ok
// SIG undefined execSet_Clear(void)

void UBlueprintSetLibrary::execSet_Clear(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (lVar1 != 0) {
    lVar4 = USetProperty::GetPrivateStaticClass();
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
      *(ulonglong *)(param_2 + 0x20) =
           (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
      FUN_1422eeb30(uVar2,lVar1);
      return;
    }
  }
  *(undefined1 *)(param_2 + 0x90) = 1;
  return;
}



// FUNCTION 14290c200 FUN_14290c200 body=456 status=ok
// SIG undefined FUN_14290c200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14290c200(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 *_Dst;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  undefined1 auStack_30 [8];
  
  puVar11 = auStack_58;
  local_38 = DAT_1468387a8 ^ (ulonglong)&local_38;
  _Dst = (undefined1 *)0x0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (lVar1 != 0) {
    lVar8 = USetProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      plVar3 = *(longlong **)(lVar1 + 0x70);
      iVar10 = *(int *)((longlong)plVar3 + 0x34) * (int)plVar3[6];
      puVar11 = auStack_58;
      if (iVar10 != 0) {
        uVar9 = (longlong)(iVar10 + 0xf) + 0xf;
        if (uVar9 <= (ulonglong)(longlong)(iVar10 + 0xf)) {
          uVar9 = 0xffffffffffffff0;
        }
        _Dst = auStack_30 + -(uVar9 & 0xfffffffffffffff0);
        puVar11 = auStack_58 + -(uVar9 & 0xfffffffffffffff0);
      }
      if ((*(uint *)(plVar3 + 7) >> 9 & 1) == 0) {
        pcVar5 = *(code **)(*plVar3 + 0x330);
        *(undefined8 *)(puVar11 + -8) = 0x14290c323;
        (*pcVar5)(plVar3,_Dst);
      }
      else {
        *(undefined8 *)(puVar11 + -8) = 0x14290c312;
        _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar10);
      }
      *(undefined8 *)(param_2 + 0x38) = 0;
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
        *(undefined8 *)(puVar11 + -8) = 0x14290c358;
        FUN_14179aca0(param_2,_Dst);
      }
      else {
        uVar4 = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(puVar11 + -8) = 0x14290c33c;
        FFrame::Step(param_2,uVar4,_Dst);
      }
      *(ulonglong *)(param_2 + 0x20) =
           (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
      *(undefined8 *)(puVar11 + -8) = 0x14290c378;
      uVar7 = FUN_1422eecc0(uVar2,lVar1,_Dst);
      *param_3 = uVar7;
      if ((~(byte)((ulonglong)plVar3[7] >> 0x24) & 1) != 0) {
        pcVar5 = *(code **)(*plVar3 + 0x328);
        *(undefined8 *)(puVar11 + -8) = 0x14290c399;
        (*pcVar5)(plVar3,_Dst);
      }
      goto LAB_14290c3a2;
    }
  }
  *(undefined1 *)(param_2 + 0x90) = 1;
LAB_14290c3a2:
  *(undefined8 *)(puVar11 + -8) = 0x14290c3ae;
  return;
}



// FUNCTION 14290c3d0 FUN_14290c3d0 body=494 status=ok
// SIG undefined FUN_14290c3d0(void)

void FUN_14290c3d0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (lVar1 != 0) {
    lVar6 = USetProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      *(undefined8 *)(param_2 + 0x30) = 0;
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
        FUN_14179aca0(param_2,0);
      }
      else {
        FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
      }
      lVar6 = *(longlong *)(param_2 + 0x30);
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      if (lVar6 != 0) {
        lVar7 = USetProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          *(undefined8 *)(param_2 + 0x30) = 0;
          if (*(longlong *)(param_2 + 0x20) == 0) {
            *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
            FUN_14179aca0(param_2,0);
          }
          else {
            FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
          }
          lVar7 = *(longlong *)(param_2 + 0x30);
          uVar4 = *(undefined8 *)(param_2 + 0x38);
          if (lVar7 != 0) {
            lVar8 = USetProperty::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              *(ulonglong *)(param_2 + 0x20) =
                   (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
              FUN_1422eedd0(uVar2,lVar1,uVar3,lVar6,uVar4,lVar7);
              return;
            }
          }
        }
      }
    }
  }
  *(undefined1 *)(param_2 + 0x90) = 1;
  return;
}



// FUNCTION 14290c5c0 FUN_14290c5c0 body=494 status=ok
// SIG undefined FUN_14290c5c0(void)

void FUN_14290c5c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (lVar1 != 0) {
    lVar6 = USetProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      *(undefined8 *)(param_2 + 0x30) = 0;
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
        FUN_14179aca0(param_2,0);
      }
      else {
        FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
      }
      lVar6 = *(longlong *)(param_2 + 0x30);
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      if (lVar6 != 0) {
        lVar7 = USetProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          *(undefined8 *)(param_2 + 0x30) = 0;
          if (*(longlong *)(param_2 + 0x20) == 0) {
            *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
            FUN_14179aca0(param_2,0);
          }
          else {
            FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
          }
          lVar7 = *(longlong *)(param_2 + 0x30);
          uVar4 = *(undefined8 *)(param_2 + 0x38);
          if (lVar7 != 0) {
            lVar8 = USetProperty::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              *(ulonglong *)(param_2 + 0x20) =
                   (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
              FUN_1422ef170(uVar2,lVar1,uVar3,lVar6,uVar4,lVar7);
              return;
            }
          }
        }
      }
    }
  }
  *(undefined1 *)(param_2 + 0x90) = 1;
  return;
}



// FUNCTION 14290c7b0 execSet_Length body=221 status=ok
// SIG undefined execSet_Length(void)

void UBlueprintSetLibrary::execSet_Length(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (lVar1 != 0) {
    lVar5 = USetProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      *(ulonglong *)(param_2 + 0x20) =
           (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
      uVar4 = UBlueprintMapLibrary::GenericMap_Length(uVar2,lVar1);
      *param_3 = uVar4;
      return;
    }
  }
  *(undefined1 *)(param_2 + 0x90) = 1;
  return;
}



// FUNCTION 14290c890 FUN_14290c890 body=456 status=ok
// SIG undefined FUN_14290c890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14290c890(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 *_Dst;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  undefined1 auStack_30 [8];
  
  puVar11 = auStack_58;
  local_38 = DAT_1468387a8 ^ (ulonglong)&local_38;
  _Dst = (undefined1 *)0x0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (lVar1 != 0) {
    lVar8 = USetProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      plVar3 = *(longlong **)(lVar1 + 0x70);
      iVar10 = *(int *)((longlong)plVar3 + 0x34) * (int)plVar3[6];
      puVar11 = auStack_58;
      if (iVar10 != 0) {
        uVar9 = (longlong)(iVar10 + 0xf) + 0xf;
        if (uVar9 <= (ulonglong)(longlong)(iVar10 + 0xf)) {
          uVar9 = 0xffffffffffffff0;
        }
        _Dst = auStack_30 + -(uVar9 & 0xfffffffffffffff0);
        puVar11 = auStack_58 + -(uVar9 & 0xfffffffffffffff0);
      }
      if ((*(uint *)(plVar3 + 7) >> 9 & 1) == 0) {
        pcVar5 = *(code **)(*plVar3 + 0x330);
        *(undefined8 *)(puVar11 + -8) = 0x14290c9b3;
        (*pcVar5)(plVar3,_Dst);
      }
      else {
        *(undefined8 *)(puVar11 + -8) = 0x14290c9a2;
        _guard_xfg_dispatch_icall_nop(_Dst,0,(longlong)iVar10);
      }
      *(undefined8 *)(param_2 + 0x38) = 0;
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
        *(undefined8 *)(puVar11 + -8) = 0x14290c9e8;
        FUN_14179aca0(param_2,_Dst);
      }
      else {
        uVar4 = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(puVar11 + -8) = 0x14290c9cc;
        FFrame::Step(param_2,uVar4,_Dst);
      }
      *(ulonglong *)(param_2 + 0x20) =
           (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
      *(undefined8 *)(puVar11 + -8) = 0x14290ca08;
      uVar7 = FUN_1422ef520(uVar2,lVar1,_Dst);
      *param_3 = uVar7;
      if ((~(byte)((ulonglong)plVar3[7] >> 0x24) & 1) != 0) {
        pcVar5 = *(code **)(*plVar3 + 0x328);
        *(undefined8 *)(puVar11 + -8) = 0x14290ca29;
        (*pcVar5)(plVar3,_Dst);
      }
      goto LAB_14290ca32;
    }
  }
  *(undefined1 *)(param_2 + 0x90) = 1;
LAB_14290ca32:
  *(undefined8 *)(puVar11 + -8) = 0x14290ca3e;
  return;
}



// FUNCTION 14290ca60 FUN_14290ca60 body=342 status=ok
// SIG undefined FUN_14290ca60(void)

void FUN_14290ca60(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (lVar1 != 0) {
    lVar5 = USetProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      *(undefined8 *)(param_2 + 0x30) = 0;
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
        FUN_14179aca0(param_2,0);
      }
      else {
        FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
      }
      lVar5 = *(longlong *)(param_2 + 0x30);
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      if (lVar5 != 0) {
        lVar6 = UArrayProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          *(ulonglong *)(param_2 + 0x20) =
               (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
          FUN_1422ef660(uVar2,lVar1,uVar3,lVar5);
          return;
        }
      }
    }
  }
  *(undefined1 *)(param_2 + 0x90) = 1;
  return;
}



// FUNCTION 14290cbc0 execSet_ToArray body=342 status=ok
// SIG undefined execSet_ToArray(void)

void UBlueprintSetLibrary::execSet_ToArray(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (lVar1 != 0) {
    lVar5 = USetProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      *(undefined8 *)(param_2 + 0x30) = 0;
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
        FUN_14179aca0(param_2,0);
      }
      else {
        FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
      }
      lVar5 = *(longlong *)(param_2 + 0x30);
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      if (lVar5 != 0) {
        lVar6 = UArrayProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          *(ulonglong *)(param_2 + 0x20) =
               (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
          GenericSet_ToArray(uVar2,lVar1,uVar3,lVar5);
          return;
        }
      }
    }
  }
  *(undefined1 *)(param_2 + 0x90) = 1;
  return;
}



// FUNCTION 14290cd20 FUN_14290cd20 body=494 status=ok
// SIG undefined FUN_14290cd20(void)

void FUN_14290cd20(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(undefined8 *)(param_2 + 0x30) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (lVar1 != 0) {
    lVar6 = USetProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      *(undefined8 *)(param_2 + 0x30) = 0;
      if (*(longlong *)(param_2 + 0x20) == 0) {
        *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
        FUN_14179aca0(param_2,0);
      }
      else {
        FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
      }
      lVar6 = *(longlong *)(param_2 + 0x30);
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      if (lVar6 != 0) {
        lVar7 = USetProperty::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          *(undefined8 *)(param_2 + 0x30) = 0;
          if (*(longlong *)(param_2 + 0x20) == 0) {
            *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
            FUN_14179aca0(param_2,0);
          }
          else {
            FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),0);
          }
          lVar7 = *(longlong *)(param_2 + 0x30);
          uVar4 = *(undefined8 *)(param_2 + 0x38);
          if (lVar7 != 0) {
            lVar8 = USetProperty::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              *(ulonglong *)(param_2 + 0x20) =
                   (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
              FUN_1422ef9e0(uVar2,lVar1,uVar3,lVar6,uVar4,lVar7);
              return;
            }
          }
        }
      }
    }
  }
  *(undefined1 *)(param_2 + 0x90) = 1;
  return;
}



// FUNCTION 14290cf20 FUN_14290cf20 body=162 status=ok
// SIG undefined FUN_14290cf20(void)

longlong FUN_14290cf20(void)

{
  if (DAT_146b1c260 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"CameraModifier_CameraShake",&DAT_146b1c260,FUN_140447710,0x70,
                  0x10000000,0,L"Camera",&LAB_14290e5f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UCameraModifier::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b1c260;
}



// FUNCTION 14290cfd0 FUN_14290cfd0 body=162 status=ok
// SIG undefined FUN_14290cfd0(void)

longlong FUN_14290cfd0(void)

{
  if (DAT_146b1c0a0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"Brush",&DAT_146b1c0a0,FUN_140447710,0x490,0x10000000,0,
                  L"Engine",&LAB_14290e410,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146b1c0a0;
}



// FUNCTION 14290d080 FUN_14290d080 body=53 status=ok
// SIG undefined FUN_14290d080(void)

void FUN_14290d080(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe8;
    *puVar1 = &PTR_FUN_145226860;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14290d0d0 FUN_14290d0d0 body=151 status=ok
// SIG undefined FUN_14290d0d0(void)

longlong FUN_14290d0d0(void)

{
  if (DAT_146b1bff8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"BookMark",&DAT_146b1bff8,FUN_140447710,0x50,0x10000000,0,
                  L"Engine",&LAB_14290e490,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b1bff8;
}



// FUNCTION 14290d170 FUN_14290d170 body=47 status=ok
// SIG undefined FUN_14290d170(void)

longlong FUN_14290d170(void)

{
  if (DAT_146b1c2d0 == 0) {
    FUN_141786440(&DAT_146b1c2d0,&PTR_GetPrivateStaticClass_1452240b0);
  }
  return DAT_146b1c2d0;
}



// FUNCTION 14290d1a0 FUN_14290d1a0 body=47 status=ok
// SIG undefined FUN_14290d1a0(void)

longlong FUN_14290d1a0(void)

{
  if (DAT_146b1c2b0 == 0) {
    FUN_141786a30(&DAT_146b1c2b0,&PTR_FUN_146562940);
  }
  return DAT_146b1c2b0;
}



// FUNCTION 14290d1d0 FUN_14290d1d0 body=47 status=ok
// SIG undefined FUN_14290d1d0(void)

longlong FUN_14290d1d0(void)

{
  if (DAT_146b1c2b8 == 0) {
    FUN_141786a30(&DAT_146b1c2b8,&PTR_FUN_146562a00);
  }
  return DAT_146b1c2b8;
}



// FUNCTION 14290d200 FUN_14290d200 body=47 status=ok
// SIG undefined FUN_14290d200(void)

longlong FUN_14290d200(void)

{
  if (DAT_146b1c2c0 == 0) {
    FUN_141786a30(&DAT_146b1c2c0,&PTR_FUN_146562a40);
  }
  return DAT_146b1c2c0;
}



// FUNCTION 14290d230 FUN_14290d230 body=47 status=ok
// SIG undefined FUN_14290d230(void)

longlong FUN_14290d230(void)

{
  if (DAT_146b1c2c8 == 0) {
    FUN_141786a30(&DAT_146b1c2c8,&PTR_FUN_146562b00);
  }
  return DAT_146b1c2c8;
}



// FUNCTION 14290d270 FUN_14290d270 body=53 status=ok
// SIG undefined FUN_14290d270(void)

void FUN_14290d270(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x160;
    *puVar1 = &PTR_FUN_145227280;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 14290d2b0 FUN_14290d2b0 body=151 status=ok
// SIG undefined FUN_14290d2b0(void)

longlong FUN_14290d2b0(void)

{
  if (DAT_146b1c008 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"BookMark2D",&DAT_146b1c008,FUN_140447710,0x38,0x10000000,0,
                  L"Engine",&LAB_1405b6620,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b1c008;
}



// FUNCTION 14290d350 FUN_14290d350 body=53 status=ok
// SIG undefined FUN_14290d350(void)

void FUN_14290d350(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_145227398;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14290d3a0 FUN_14290d3a0 body=53 status=ok
// SIG undefined FUN_14290d3a0(void)

void FUN_14290d3a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_145226c88;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14290d3e0 FUN_14290d3e0 body=53 status=ok
// SIG undefined FUN_14290d3e0(void)

void FUN_14290d3e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_145226da0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14290d420 FUN_14290d420 body=47 status=ok
// SIG undefined FUN_14290d420(void)

longlong FUN_14290d420(void)

{
  if (DAT_146b1c028 == 0) {
    FUN_141786440(&DAT_146b1c028,&PTR_LAB_145223c60);
  }
  return DAT_146b1c028;
}



// FUNCTION 14290d450 FUN_14290d450 body=47 status=ok
// SIG undefined FUN_14290d450(void)

longlong FUN_14290d450(void)

{
  if (DAT_146b1c010 == 0) {
    FUN_141786a30(&DAT_146b1c010,&PTR_FUN_14655f7a0);
  }
  return DAT_146b1c010;
}



// FUNCTION 14290d480 FUN_14290d480 body=47 status=ok
// SIG undefined FUN_14290d480(void)

longlong FUN_14290d480(void)

{
  if (DAT_146b1c018 == 0) {
    FUN_141786a30(&DAT_146b1c018,&PTR_FUN_14655f820);
  }
  return DAT_146b1c018;
}



// FUNCTION 14290d4b0 FUN_14290d4b0 body=47 status=ok
// SIG undefined FUN_14290d4b0(void)

longlong FUN_14290d4b0(void)

{
  if (DAT_146b1c020 == 0) {
    FUN_141786a30(&DAT_146b1c020,&PTR_FUN_14655f920);
  }
  return DAT_146b1c020;
}



// FUNCTION 14290d4e0 FUN_14290d4e0 body=53 status=ok
// SIG undefined FUN_14290d4e0(void)

void FUN_14290d4e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1452274b0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14290d520 FUN_14290d520 body=53 status=ok
// SIG undefined FUN_14290d520(void)

void FUN_14290d520(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_145226eb8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14290d570 FUN_14290d570 body=53 status=ok
// SIG undefined FUN_14290d570(void)

void FUN_14290d570(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_145226fd0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14290d5b0 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FRootMotionSource_RadialForce_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xe0;
    *puVar1 = &PTR_FUN_1452269a8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 14290d600 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UParticleModuleTypeDataGpu::GetPrivateStaticClass(void)

{
  if (DAT_146b1c050 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"BoxReflectionCapture",&DAT_146b1c050,FUN_140447710,0x460,
                  0x10000000,0,L"Engine",&LAB_14290e3f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_14290f8a0,&LAB_140447700,0);
  }
  return DAT_146b1c050;
}



// FUNCTION 14290d6c0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AXBakeableSplineMesh::GetPrivateStaticClass(void)

{
  if (DAT_146b1c060 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"BoxReflectionCaptureComponent",&DAT_146b1c060,FUN_140447710,
                  0x360,0x10000000,0,L"Engine",&LAB_14290e4d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1429f8200,&LAB_140447700,0);
  }
  return DAT_146b1c060;
}



// FUNCTION 14290d780 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UBreakpoint::StaticClass(void)

{
  if (DAT_146b1c070 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"Breakpoint",&DAT_146b1c070,FUN_140447710,0x40,0x10000000,0,
                  L"Engine",&LAB_14290e4f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b1c070;
}



// FUNCTION 14290d830 FUN_14290d830 body=47 status=ok
// SIG undefined FUN_14290d830(void)

longlong FUN_14290d830(void)

{
  if (DAT_146b1c098 == 0) {
    FUN_141786440(&DAT_146b1c098,&PTR_FUN_145224ac0);
  }
  return DAT_146b1c098;
}



// FUNCTION 14290d870 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UBrushBuilder::StaticClass(void)

{
  if (DAT_146b1c0c0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"BrushBuilder",&DAT_146b1c0c0,FUN_140447710,0x80,0x10000001,0,
                  L"Engine",&LAB_14290e510,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b1c0c0;
}



// FUNCTION 14290d910 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UNodeMappingContainer::GetPrivateStaticClass(void)

{
  if (DAT_146b1c2d8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"CameraShake",&DAT_146b1c2d8,FUN_14290f9c0,0x180,0x10000000,0,
                  L"Engine",&LAB_14290e610,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b1c2d8;
}



// FUNCTION 14290d9b0 FUN_14290d9b0 body=53 status=ok
// SIG undefined FUN_14290d9b0(void)

void FUN_14290d9b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_145226b70;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14290d9f0 FUN_14290d9f0 body=47 status=ok
// SIG undefined FUN_14290d9f0(void)

longlong FUN_14290d9f0(void)

{
  if (DAT_146b1c150 == 0) {
    FUN_141786440(&DAT_146b1c150,&PTR_thunk_FUN_14290f280_145224f10);
  }
  return DAT_146b1c150;
}



// FUNCTION 14290da20 FUN_14290da20 body=47 status=ok
// SIG undefined FUN_14290da20(void)

longlong FUN_14290da20(void)

{
  if (DAT_146b1c148 == 0) {
    FUN_141786a30(&DAT_146b1c148,&PTR_FUN_146560b50);
  }
  return DAT_146b1c148;
}



// FUNCTION 14290da60 FUN_14290da60 body=162 status=ok
// SIG undefined FUN_14290da60(void)

longlong FUN_14290da60(void)

{
  if (DAT_146b1c0d0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"BrushComponent",&DAT_146b1c0d0,FUN_140447710,0x710,0x10000000,
                  0,L"Engine",&LAB_14290e530,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14079feb0,&LAB_140447700,0);
  }
  return DAT_146b1c0d0;
}



// FUNCTION 14290db20 FUN_14290db20 body=151 status=ok
// SIG undefined FUN_14290db20(void)

longlong FUN_14290db20(void)

{
  if (DAT_146b1c168 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"CameraAnim",&DAT_146b1c168,FUN_140447710,0x670,0x10000000,0,
                  L"Engine",&LAB_14290e570,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b1c168;
}



// FUNCTION 14290dbd0 FUN_14290dbd0 body=162 status=ok
// SIG undefined FUN_14290dbd0(void)

longlong FUN_14290dbd0(void)

{
  if (DAT_146b1c0e0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"BrushShape",&DAT_146b1c0e0,FUN_140447710,0x490,0x10000000,0,
                  L"Engine",&LAB_14290e430,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_14290cfd0
                  ,&LAB_140447700,0);
  }
  return DAT_146b1c0e0;
}



// FUNCTION 14290dca0 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UButtonStyleAsset::StaticClass(void)

{
  if (DAT_146b1c0f0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"ButtonStyleAsset",&DAT_146b1c0f0,FUN_140447710,0x2a0,
                  0x10000000,0,L"Engine",&LAB_14290e550,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b1c0f0;
}



// FUNCTION 14290dd40 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCameraAnimInst::GetPrivateStaticClass(void)

{
  if (DAT_146b1c190 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"CameraAnimInst",&DAT_146b1c190,
                  StaticRegisterNativesUCameraAnimInst,0x110,0x10000008,0,L"Engine",&LAB_14290e590,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b1c190;
}



// FUNCTION 14290ddf0 FUN_14290ddf0 body=47 status=ok
// SIG undefined FUN_14290ddf0(void)

longlong FUN_14290ddf0(void)

{
  if (DAT_146b1c188 == 0) {
    FUN_141786440(&DAT_146b1c188,&PTR_GetPrivateStaticClass_1452256e0);
  }
  return DAT_146b1c188;
}



// FUNCTION 14290de20 FUN_14290de20 body=47 status=ok
// SIG undefined FUN_14290de20(void)

longlong FUN_14290de20(void)

{
  if (DAT_146b1c170 == 0) {
    FUN_141786a30(&DAT_146b1c170,&PTR_FUN_146561000);
  }
  return DAT_146b1c170;
}



// FUNCTION 14290de50 FUN_14290de50 body=47 status=ok
// SIG undefined FUN_14290de50(void)

longlong FUN_14290de50(void)

{
  if (DAT_146b1c178 == 0) {
    FUN_141786a30(&DAT_146b1c178,&PTR_FUN_1465610b0);
  }
  return DAT_146b1c178;
}



// FUNCTION 14290de80 FUN_14290de80 body=47 status=ok
// SIG undefined FUN_14290de80(void)

longlong FUN_14290de80(void)

{
  if (DAT_146b1c180 == 0) {
    FUN_141786a30(&DAT_146b1c180,&PTR_FUN_146561160);
  }
  return DAT_146b1c180;
}



// FUNCTION 14290dec0 FUN_14290dec0 body=162 status=ok
// SIG undefined FUN_14290dec0(void)

longlong FUN_14290dec0(void)

{
  if (DAT_146b1c1a0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"CameraBlockingVolume",&DAT_146b1c1a0,FUN_140447710,0x490,
                  0x10000000,0,L"Engine",&LAB_14290e470,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1407fbfa0,&LAB_140447700,0);
  }
  return DAT_146b1c1a0;
}



// FUNCTION 14290df80 FUN_14290df80 body=47 status=ok
// SIG undefined FUN_14290df80(void)

longlong FUN_14290df80(void)

{
  if (DAT_146b1c208 == 0) {
    FUN_141786440(&DAT_146b1c208,&PTR_LAB_145225e30);
  }
  return DAT_146b1c208;
}



// FUNCTION 14290dfb0 FUN_14290dfb0 body=47 status=ok
// SIG undefined FUN_14290dfb0(void)

longlong FUN_14290dfb0(void)

{
  if (DAT_146b1c1a8 == 0) {
    FUN_141786a30(&DAT_146b1c1a8,&PTR_FUN_146561380);
  }
  return DAT_146b1c1a8;
}



// FUNCTION 14290dfe0 FUN_14290dfe0 body=47 status=ok
// SIG undefined FUN_14290dfe0(void)

longlong FUN_14290dfe0(void)

{
  if (DAT_146b1c1b0 == 0) {
    FUN_141786a30(&DAT_146b1c1b0,&PTR_FUN_146561470);
  }
  return DAT_146b1c1b0;
}



// FUNCTION 14290e010 FUN_14290e010 body=47 status=ok
// SIG undefined FUN_14290e010(void)

longlong FUN_14290e010(void)

{
  if (DAT_146b1c1b8 == 0) {
    FUN_141786a30(&DAT_146b1c1b8,&PTR_FUN_1465614f0);
  }
  return DAT_146b1c1b8;
}



// FUNCTION 14290e040 FUN_14290e040 body=47 status=ok
// SIG undefined FUN_14290e040(void)

longlong FUN_14290e040(void)

{
  if (DAT_146b1c1c0 == 0) {
    FUN_141786a30(&DAT_146b1c1c0,&PTR_FUN_146561530);
  }
  return DAT_146b1c1c0;
}



// FUNCTION 14290e070 FUN_14290e070 body=47 status=ok
// SIG undefined FUN_14290e070(void)

longlong FUN_14290e070(void)

{
  if (DAT_146b1c1c8 == 0) {
    FUN_141786a30(&DAT_146b1c1c8,&PTR_FUN_1465615f0);
  }
  return DAT_146b1c1c8;
}



// FUNCTION 14290e0a0 FUN_14290e0a0 body=47 status=ok
// SIG undefined FUN_14290e0a0(void)

longlong FUN_14290e0a0(void)

{
  if (DAT_146b1c1d0 == 0) {
    FUN_141786a30(&DAT_146b1c1d0,&PTR_FUN_146561630);
  }
  return DAT_146b1c1d0;
}



// FUNCTION 14290e0d0 FUN_14290e0d0 body=47 status=ok
// SIG undefined FUN_14290e0d0(void)

longlong FUN_14290e0d0(void)

{
  if (DAT_146b1c1d8 == 0) {
    FUN_141786a30(&DAT_146b1c1d8,&PTR_FUN_1465616e0);
  }
  return DAT_146b1c1d8;
}



// FUNCTION 14290e100 FUN_14290e100 body=47 status=ok
// SIG undefined FUN_14290e100(void)

longlong FUN_14290e100(void)

{
  if (DAT_146b1c1e0 == 0) {
    FUN_141786a30(&DAT_146b1c1e0,&PTR_FUN_146561720);
  }
  return DAT_146b1c1e0;
}



// FUNCTION 14290e130 FUN_14290e130 body=47 status=ok
// SIG undefined FUN_14290e130(void)

longlong FUN_14290e130(void)

{
  if (DAT_146b1c1e8 == 0) {
    FUN_141786a30(&DAT_146b1c1e8,&PTR_FUN_1465617d0);
  }
  return DAT_146b1c1e8;
}


