// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1421e63e0 operator<< body=194 status=ok
// SIG undefined operator<<(void)

longlong operator<<(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  FUN_1421e70c0();
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      uVar3 = FMemory::Realloc(*(longlong *)(param_2 + 0x40),0,0);
      *(undefined8 *)(param_2 + 0x40) = uVar3;
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar5 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    if (uVar5 < 4) {
      iVar2 = 1;
    }
    else {
      uVar1 = (uVar5 >> 1) + 8;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar4 = 0x20;
      if (uVar1 != 0) {
        iVar4 = 0x1f - iVar2;
      }
      uVar1 = (uVar5 >> 1) + 7;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      if (uVar1 == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = 1 << (~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
      }
    }
    if (0 < (int)uVar5) {
      *(int *)(param_2 + 0x48) = iVar2;
      TSet<TTuple<FName,FSlateColor>,TDefaultMapHashableKeyFuncs<FName,FSlateColor,0>,FDefaultSetAllocator>
      ::Rehash(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1421e64b0 operator<< body=194 status=ok
// SIG undefined operator<<(void)

longlong operator<<(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  FUN_1421e7390();
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      uVar3 = FMemory::Realloc(*(longlong *)(param_2 + 0x40),0,0);
      *(undefined8 *)(param_2 + 0x40) = uVar3;
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar5 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    if (uVar5 < 4) {
      iVar2 = 1;
    }
    else {
      uVar1 = (uVar5 >> 1) + 8;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar4 = 0x20;
      if (uVar1 != 0) {
        iVar4 = 0x1f - iVar2;
      }
      uVar1 = (uVar5 >> 1) + 7;
      iVar2 = 0x1f;
      if (uVar1 != 0) {
        for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      if (uVar1 == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = 1 << (~(byte)((iVar4 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
      }
    }
    if (0 < (int)uVar5) {
      *(int *)(param_2 + 0x48) = iVar2;
      TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
      ::Rehash(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1421e6580 FUN_1421e6580 body=712 status=ok
// SIG undefined FUN_1421e6580(void)

longlong * FUN_1421e6580(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int local_res8 [2];
  longlong *local_48;
  undefined1 local_40 [4];
  uint local_3c;
  longlong local_38;
  uint local_30;
  int local_2c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x30,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x30);
  iVar2 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar3 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar6 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    if ((int *)plVar6[1] < (int *)*plVar6 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_48,param_2);
    if (local_2c < *(int *)(local_38 + 0x18)) {
      do {
        lVar8 = (longlong)local_2c * 0x30 + *local_48;
        (**(code **)(*param_1 + 0x40))(param_1,lVar8);
        FUN_1421e4490(param_1,lVar8 + 8);
        local_30 = local_30 & ~local_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_40);
      } while (local_2c < *(int *)(local_38 + 0x18));
    }
    return param_1;
  }
  iVar2 = 0;
  local_res8[0] = 0;
  if ((int *)plVar6[1] < (int *)*plVar6 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar6;
    *plVar6 = *plVar6 + 4;
  }
  FUN_14087de80(param_2,local_res8[0]);
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar3 = (int)param_2[6];
        iVar4 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar5 = *(int *)(*param_2 + 4 + (longlong)iVar3 * 0x30);
        *(int *)(param_2 + 6) = iVar5;
        *(int *)((longlong)param_2 + 0x34) = iVar4;
        if (iVar4 != 0) {
          *(undefined4 *)(*param_2 + (longlong)iVar5 * 0x30) = 0xffffffff;
        }
      }
      plVar6 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      iVar5 = iVar3;
      if (iVar3 < 0) {
        iVar5 = iVar3 + 0x1f;
      }
      puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar3 & 0x1f);
      puVar7 = (undefined8 *)(*param_2 + (longlong)iVar3 * 0x30);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[4] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *(undefined4 *)(puVar7 + 5) = 0xffffffff;
      (**(code **)(*param_1 + 0x40))(param_1);
      FUN_1421e4490(param_1,puVar7 + 1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 1421e6850 FUN_1421e6850 body=692 status=ok
// SIG undefined FUN_1421e6850(void)

longlong * FUN_1421e6850(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int local_res8 [2];
  longlong *local_48;
  undefined1 local_40 [4];
  uint local_3c;
  longlong local_38;
  uint local_30;
  int local_2c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x38,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x38);
  iVar2 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar3 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar6 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    if ((int *)plVar6[1] < (int *)*plVar6 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_48,param_2);
    if (local_2c < *(int *)(local_38 + 0x18)) {
      do {
        lVar8 = (longlong)local_2c * 0x38 + *local_48;
        (**(code **)(*param_1 + 0x40))(param_1,lVar8);
        FUN_1421e45b0(param_1,lVar8 + 8);
        local_30 = local_30 & ~local_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_40);
      } while (local_2c < *(int *)(local_38 + 0x18));
    }
    return param_1;
  }
  iVar2 = 0;
  local_res8[0] = 0;
  if ((int *)plVar6[1] < (int *)*plVar6 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar6;
    *plVar6 = *plVar6 + 4;
  }
  FUN_14087e090(param_2,local_res8[0]);
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar3);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar3 = (int)param_2[6];
        iVar4 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar5 = *(int *)((longlong)iVar3 * 0x38 + 4 + *param_2);
        *(int *)(param_2 + 6) = iVar5;
        *(int *)((longlong)param_2 + 0x34) = iVar4;
        if (iVar4 != 0) {
          *(undefined4 *)((longlong)iVar5 * 0x38 + *param_2) = 0xffffffff;
        }
      }
      plVar6 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      iVar5 = iVar3;
      if (iVar3 < 0) {
        iVar5 = iVar3 + 0x1f;
      }
      puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar3 & 0x1f);
      puVar7 = (undefined8 *)(*param_2 + (longlong)iVar3 * 0x38);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *(undefined4 *)(puVar7 + 6) = 0xffffffff;
      (**(code **)(*param_1 + 0x40))(param_1);
      FUN_1421e45b0(param_1,puVar7 + 1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 1421e6b10 FUN_1421e6b10 body=752 status=ok
// SIG undefined FUN_1421e6b10(void)

longlong * FUN_1421e6b10(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  int local_res8 [2];
  longlong *local_48;
  undefined1 local_40 [4];
  uint local_3c;
  longlong local_38;
  uint local_30;
  int local_2c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x60,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x60);
  iVar2 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar3 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar8 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
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
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_48,param_2);
    if (local_2c < *(int *)(local_38 + 0x18)) {
      do {
        lVar7 = (longlong)local_2c * 0x60 + *local_48;
        (**(code **)(*param_1 + 0x40))(param_1,lVar7);
        FUN_1421e4690(param_1,lVar7 + 0x10);
        local_30 = local_30 & ~local_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_40);
      } while (local_2c < *(int *)(local_38 + 0x18));
    }
    return param_1;
  }
  iVar2 = 0;
  local_res8[0] = 0;
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
  FUN_14087e290(param_2,local_res8[0]);
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar3 = (int)param_2[6];
        iVar4 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar5 = *(int *)((longlong)iVar3 * 0x60 + 4 + *param_2);
        *(int *)(param_2 + 6) = iVar5;
        *(int *)((longlong)param_2 + 0x34) = iVar4;
        if (iVar4 != 0) {
          *(undefined4 *)((longlong)iVar5 * 0x60 + *param_2) = 0xffffffff;
        }
      }
      plVar8 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar8 = param_2 + 2;
      }
      iVar5 = iVar3;
      if (iVar3 < 0) {
        iVar5 = iVar3 + 0x1f;
      }
      puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar5 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar3 & 0x1f);
      puVar6 = (undefined8 *)((longlong)iVar3 * 0x60 + *param_2);
      *puVar6 = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[6] = 0;
      *(undefined4 *)(puVar6 + 7) = 0;
      *(undefined4 *)((longlong)puVar6 + 0x3c) = 0x3f800000;
      *(undefined4 *)(puVar6 + 10) = 0xffffffff;
      (**(code **)(*param_1 + 0x40))(param_1);
      FUN_1421e4690(param_1,puVar6 + 2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 1421e6e00 FUN_1421e6e00 body=692 status=ok
// SIG undefined FUN_1421e6e00(void)

longlong * FUN_1421e6e00(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int local_res8 [2];
  longlong *local_48;
  undefined1 local_40 [4];
  uint local_3c;
  longlong local_38;
  uint local_30;
  int local_2c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x38,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x38);
  iVar2 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar3 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar6 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    if ((int *)plVar6[1] < (int *)*plVar6 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_48,param_2);
    if (local_2c < *(int *)(local_38 + 0x18)) {
      do {
        lVar8 = (longlong)local_2c * 0x38 + *local_48;
        (**(code **)(*param_1 + 0x40))(param_1,lVar8);
        FUN_1421e4770(param_1,lVar8 + 8);
        local_30 = local_30 & ~local_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_40);
      } while (local_2c < *(int *)(local_38 + 0x18));
    }
    return param_1;
  }
  iVar2 = 0;
  local_res8[0] = 0;
  if ((int *)plVar6[1] < (int *)*plVar6 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar6;
    *plVar6 = *plVar6 + 4;
  }
  FUN_14087e090(param_2,local_res8[0]);
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar3);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar3 = (int)param_2[6];
        iVar4 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar5 = *(int *)((longlong)iVar3 * 0x38 + 4 + *param_2);
        *(int *)(param_2 + 6) = iVar5;
        *(int *)((longlong)param_2 + 0x34) = iVar4;
        if (iVar4 != 0) {
          *(undefined4 *)((longlong)iVar5 * 0x38 + *param_2) = 0xffffffff;
        }
      }
      plVar6 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      iVar5 = iVar3;
      if (iVar3 < 0) {
        iVar5 = iVar3 + 0x1f;
      }
      puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar3 & 0x1f);
      puVar7 = (undefined8 *)(*param_2 + (longlong)iVar3 * 0x38);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *(undefined4 *)(puVar7 + 6) = 0xffffffff;
      (**(code **)(*param_1 + 0x40))(param_1);
      FUN_1421e4770(param_1,puVar7 + 1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 1421e70c0 FUN_1421e70c0 body=708 status=ok
// SIG undefined FUN_1421e70c0(void)

longlong * FUN_1421e70c0(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int local_res8 [2];
  longlong *local_48;
  undefined1 local_40 [4];
  uint local_3c;
  longlong local_38;
  uint local_30;
  int local_2c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x38,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x38);
  iVar2 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar3 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar6 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    if ((int *)plVar6[1] < (int *)*plVar6 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_48,param_2);
    if (local_2c < *(int *)(local_38 + 0x18)) {
      do {
        lVar8 = (longlong)local_2c * 0x38 + *local_48;
        (**(code **)(*param_1 + 0x40))(param_1,lVar8);
        FUN_1421e4850(param_1,lVar8 + 8);
        local_30 = local_30 & ~local_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_40);
      } while (local_2c < *(int *)(local_38 + 0x18));
    }
    return param_1;
  }
  iVar2 = 0;
  local_res8[0] = 0;
  if ((int *)plVar6[1] < (int *)*plVar6 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar6;
    *plVar6 = *plVar6 + 4;
  }
  FUN_14087e090(param_2,local_res8[0]);
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(param_2,iVar3);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar3 = (int)param_2[6];
        iVar4 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar5 = *(int *)((longlong)iVar3 * 0x38 + 4 + *param_2);
        *(int *)(param_2 + 6) = iVar5;
        *(int *)((longlong)param_2 + 0x34) = iVar4;
        if (iVar4 != 0) {
          *(undefined4 *)((longlong)iVar5 * 0x38 + *param_2) = 0xffffffff;
        }
      }
      plVar6 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      iVar5 = iVar3;
      if (iVar3 < 0) {
        iVar5 = iVar3 + 0x1f;
      }
      puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar3 & 0x1f);
      puVar7 = (undefined8 *)((longlong)iVar3 * 0x38 + *param_2);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      *(undefined4 *)(puVar7 + 6) = 0xffffffff;
      (**(code **)(*param_1 + 0x40))(param_1);
      FUN_1421e4850(param_1,puVar7 + 1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 1421e7390 FUN_1421e7390 body=712 status=ok
// SIG undefined FUN_1421e7390(void)

longlong * FUN_1421e7390(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int local_res8 [2];
  longlong *local_48;
  undefined1 local_40 [4];
  uint local_3c;
  longlong local_38;
  uint local_30;
  int local_2c;
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] * 0x30,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x30);
  iVar2 = *(int *)((longlong)param_2 + 0x2c) + 0x1f;
  iVar3 = (int)param_2[5] + 0x1f;
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) << 2,
             (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) << 2);
  plVar6 = (longlong *)param_1[1];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    if ((int *)plVar6[1] < (int *)*plVar6 + 1) {
      (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
      if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_1,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(int *)*plVar6;
      *plVar6 = *plVar6 + 4;
    }
    TSparseArray<int,FDefaultSparseArrayAllocator>::TConstIterator::TConstIterator
              (&local_48,param_2);
    if (local_2c < *(int *)(local_38 + 0x18)) {
      do {
        lVar8 = (longlong)local_2c * 0x30 + *local_48;
        (**(code **)(*param_1 + 0x40))(param_1,lVar8);
        FUN_1421e4930(param_1,lVar8 + 8);
        local_30 = local_30 & ~local_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_40);
      } while (local_2c < *(int *)(local_38 + 0x18));
    }
    return param_1;
  }
  iVar2 = 0;
  local_res8[0] = 0;
  if ((int *)plVar6[1] < (int *)*plVar6 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar6;
    *plVar6 = *plVar6 + 4;
  }
  FUN_14087de80(param_2,local_res8[0]);
  if (0 < local_res8[0]) {
    do {
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        TBitArray<FDefaultBitArrayAllocator>::Add(param_2 + 2,0,1);
      }
      else {
        iVar3 = (int)param_2[6];
        iVar4 = *(int *)((longlong)param_2 + 0x34) + -1;
        iVar5 = *(int *)(*param_2 + 4 + (longlong)iVar3 * 0x30);
        *(int *)(param_2 + 6) = iVar5;
        *(int *)((longlong)param_2 + 0x34) = iVar4;
        if (iVar4 != 0) {
          *(undefined4 *)(*param_2 + (longlong)iVar5 * 0x30) = 0xffffffff;
        }
      }
      plVar6 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar6 = param_2 + 2;
      }
      iVar5 = iVar3;
      if (iVar3 < 0) {
        iVar5 = iVar3 + 0x1f;
      }
      puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar5 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar3 & 0x1f);
      puVar7 = (undefined8 *)(*param_2 + (longlong)iVar3 * 0x30);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[4] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *(undefined4 *)(puVar7 + 5) = 0xffffffff;
      (**(code **)(*param_1 + 0x40))(param_1);
      FUN_1421e4930(param_1,puVar7 + 1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_res8[0]);
  }
  return param_1;
}



// FUNCTION 1421e7660 FUN_1421e7660 body=2727 status=ok
// SIG undefined FUN_1421e7660(void)

longlong FUN_1421e7660(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  int local_res20;
  int local_f8;
  uint uStack_f4;
  uint uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  int iStack_d0;
  uint uStack_cc;
  uint *local_c8;
  uint uStack_c0;
  uint uStack_bc;
  undefined8 local_b8;
  longlong *local_b0;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  undefined8 uStack_88;
  uint *puStack_80;
  uint uStack_78;
  uint uStack_74;
  undefined8 uStack_70;
  longlong *local_60;
  ulonglong local_58;
  
  FArchive::UsingCustomVersion(param_1,&DAT_1464af950);
  FUN_1421e5960(param_1,param_2);
  plVar11 = param_2 + 7;
  FUN_1421e5d10(param_1,plVar11);
  plVar18 = param_2 + 0xe;
  FUN_1421e4e00(param_1,plVar18);
  local_b0 = param_2 + 0x15;
  FUN_1421e51c0(param_1,local_b0);
  local_60 = param_2 + 0x1c;
  FUN_1421e5600(param_1,local_60);
  FUN_1421e4a10(param_1,param_2 + 0x23);
  FUN_1421e4a10(param_1,param_2 + 0x70);
  FUN_1421e4a10(param_1,param_2 + 0xbd);
  FUN_1421e4a10(param_1,param_2 + 0x10a);
  FUN_1421e4a10(param_1,param_2 + 0x157);
  if (((*(byte *)(param_1 + 0x28) & 1) == 0) ||
     (iVar6 = FArchive::CustomVer(param_1,&DAT_1464af950), iVar6 < 0x11)) {
    return param_1;
  }
  uVar13 = *(uint *)(param_2 + 0xc);
  local_c8 = (uint *)(param_2 + 9);
  iVar6 = 0;
  local_f8 = 0;
  uStack_f4 = 1;
  uStack_e4 = 0;
  iStack_e0 = 0;
  if (uVar13 != 0) {
    puVar16 = (uint *)param_2[0xb];
    if ((uint *)param_2[0xb] == (uint *)0x0) {
      puVar16 = local_c8;
    }
    uVar1 = *puVar16;
    iStack_e0 = iVar6;
    local_f8 = iVar6;
    while (uVar1 == 0) {
      lVar10 = (longlong)local_f8;
      iStack_e0 = iStack_e0 + 0x20;
      iVar8 = local_f8 + 1;
      bVar5 = (int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_f8;
      local_f8 = iVar8;
      if (bVar5) goto LAB_1421e7832;
      uVar1 = puVar16[lVar10 + 1];
    }
    uStack_f4 = -uVar1 & uVar1;
    iVar8 = 0x1f;
    if (uStack_f4 != 0) {
      for (; uStack_f4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_f4 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_e4 = (iStack_e0 - iVar8) + 0x1f;
    if ((int)uVar13 < (int)uStack_e4) {
LAB_1421e7832:
      uStack_e4 = uVar13;
    }
  }
  uVar13 = *(uint *)(param_2 + 0xc);
  uStack_c0 = 0xffffffff;
  uStack_bc = uStack_e4;
  local_b8 = CONCAT44(uStack_dc,iStack_e0);
  uVar1 = *(uint *)(param_2 + 0xc);
  uStack_88 = CONCAT44(uStack_f4,local_f8);
  uVar15 = uVar13 & 0xffffffe0;
  iStack_d0 = local_f8;
  uStack_cc = uStack_f4;
  local_90 = plVar11;
  puStack_80 = local_c8;
  uStack_70 = local_b8;
  uStack_78 = uStack_c0;
  uStack_74 = uStack_bc;
  uStack_e4 = uVar13;
  if (uVar13 != uVar1) {
    puVar16 = (uint *)param_2[0xb];
    if ((uint *)param_2[0xb] == (uint *)0x0) {
      puVar16 = (uint *)(param_2 + 9);
    }
    uVar9 = puVar16[(int)uVar13 >> 5] & -1 << ((byte)uVar13 & 0x1f);
    iVar8 = (int)uVar13 >> 5;
    while (uVar9 == 0) {
      uVar15 = uVar15 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_1421e7905;
      uVar9 = puVar16[(longlong)iVar8 + 1];
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
    uStack_e4 = (uVar15 - iVar8) + 0x1f;
    if ((int)uVar1 < (int)uStack_e4) {
LAB_1421e7905:
      uStack_e4 = uVar1;
    }
  }
  while ((uStack_bc != uStack_e4 || (local_c8 != (uint *)(param_2 + 9)))) {
    uVar13 = DAT_14652d640;
    if ((int)uStack_bc < (int)local_c8[6]) {
      uVar13 = uStack_bc;
    }
    plVar11 = (longlong *)
              ((longlong)*(int *)(param_2[7] + (longlong)(int)uVar13 * 0x18) * 0x20 + *param_2);
    iVar8 = (int)plVar11[1];
    *(int *)(plVar11 + 1) = iVar8 + 1;
    if (*(int *)((longlong)plVar11 + 0xc) < iVar8 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar11,iVar8);
    }
    *(uint *)(*plVar11 + (longlong)iVar8 * 4) = uVar13;
    uStack_c0 = uStack_c0 & ~uStack_cc;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_d0);
  }
  uVar13 = *(uint *)(param_2 + 0x13);
  local_c8 = (uint *)(param_2 + 0x10);
  local_f8 = 0;
  uStack_f4 = 1;
  uStack_e4 = 0;
  iStack_e0 = 0;
  if (uVar13 != 0) {
    puVar16 = (uint *)param_2[0x12];
    if ((uint *)param_2[0x12] == (uint *)0x0) {
      puVar16 = local_c8;
    }
    uVar1 = *puVar16;
    iStack_e0 = iVar6;
    local_f8 = iVar6;
    while (uVar1 == 0) {
      lVar10 = (longlong)local_f8;
      iStack_e0 = iStack_e0 + 0x20;
      iVar6 = local_f8 + 1;
      bVar5 = (int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_f8;
      local_f8 = iVar6;
      if (bVar5) goto LAB_1421e7a42;
      uVar1 = puVar16[lVar10 + 1];
    }
    uStack_f4 = -uVar1 & uVar1;
    iVar6 = 0x1f;
    if (uStack_f4 != 0) {
      for (; uStack_f4 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_f4 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_e4 = (iStack_e0 - iVar6) + 0x1f;
    if ((int)uVar13 < (int)uStack_e4) {
LAB_1421e7a42:
      uStack_e4 = uVar13;
    }
  }
  uVar13 = *(uint *)(param_2 + 0x13);
  uStack_c0 = 0xffffffff;
  uStack_bc = uStack_e4;
  local_b8 = CONCAT44(uStack_dc,iStack_e0);
  uVar1 = *(uint *)(param_2 + 0x13);
  uStack_88 = CONCAT44(uStack_f4,local_f8);
  uVar15 = uVar13 & 0xffffffe0;
  iStack_d0 = local_f8;
  uStack_cc = uStack_f4;
  local_90 = plVar18;
  puStack_80 = local_c8;
  uStack_70 = local_b8;
  uStack_78 = uStack_c0;
  uStack_74 = uStack_bc;
  uStack_e4 = uVar13;
  if (uVar13 != uVar1) {
    puVar16 = (uint *)param_2[0x12];
    if ((uint *)param_2[0x12] == (uint *)0x0) {
      puVar16 = (uint *)(param_2 + 0x10);
    }
    uVar9 = puVar16[(int)uVar13 >> 5] & -1 << ((byte)uVar13 & 0x1f);
    iVar6 = (int)uVar13 >> 5;
    while (uVar9 == 0) {
      uVar15 = uVar15 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1421e7b15;
      uVar9 = puVar16[(longlong)iVar6 + 1];
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
    uStack_e4 = (uVar15 - iVar6) + 0x1f;
    if ((int)uVar1 < (int)uStack_e4) {
LAB_1421e7b15:
      uStack_e4 = uVar1;
    }
  }
  while ((plVar11 = local_b0, uStack_bc != uStack_e4 || (local_c8 != (uint *)(param_2 + 0x10)))) {
    uVar13 = DAT_14652d644;
    if ((int)uStack_bc < (int)local_c8[6]) {
      uVar13 = uStack_bc;
    }
    iVar6 = *(int *)(*plVar18 + 4 + (longlong)(int)uVar13 * 0x18);
    lVar10 = (longlong)*(int *)(*plVar18 + (longlong)(int)uVar13 * 0x18) * 0x20 + *param_2;
    iVar8 = *(int *)(lVar10 + 0x18);
    *(int *)(lVar10 + 0x18) = iVar8 + 1;
    if (*(int *)(lVar10 + 0x1c) < iVar8 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar10 + 0x10,iVar8);
    }
    *(uint *)(*(longlong *)(lVar10 + 0x10) + (longlong)iVar8 * 4) = uVar13;
    lVar10 = (longlong)iVar6 * 0x20 + *param_2;
    iVar6 = *(int *)(lVar10 + 0x18);
    *(int *)(lVar10 + 0x18) = iVar6 + 1;
    if (*(int *)(lVar10 + 0x1c) < iVar6 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar10 + 0x10,iVar6);
    }
    *(uint *)(*(longlong *)(lVar10 + 0x10) + (longlong)iVar6 * 4) = uVar13;
    uStack_c0 = uStack_c0 & ~uStack_cc;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_d0);
  }
  iVar6 = (int)local_b0[5];
  local_c8 = (uint *)(local_b0 + 2);
  local_f8 = 0;
  uStack_f4 = 1;
  uStack_e4 = 0;
  iStack_e0 = 0;
  if (iVar6 != 0) {
    puVar16 = (uint *)local_b0[4];
    if ((uint *)local_b0[4] == (uint *)0x0) {
      puVar16 = local_c8;
    }
    uVar13 = *puVar16;
    iStack_e0 = 0;
    local_f8 = 0;
    while (uVar13 == 0) {
      lVar10 = (longlong)local_f8;
      iStack_e0 = iStack_e0 + 0x20;
      iVar8 = local_f8 + 1;
      bVar5 = (int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_f8;
      local_f8 = iVar8;
      if (bVar5) goto LAB_1421e7ca2;
      uVar13 = puVar16[lVar10 + 1];
    }
    uStack_f4 = -uVar13 & uVar13;
    iVar8 = 0x1f;
    if (uStack_f4 != 0) {
      for (; uStack_f4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_f4 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_e4 = (iStack_e0 - iVar8) + 0x1f;
    if (iVar6 < (int)uStack_e4) {
LAB_1421e7ca2:
      uStack_e4 = iVar6;
    }
  }
  uVar13 = *(uint *)(local_b0 + 5);
  uStack_c0 = 0xffffffff;
  uStack_bc = uStack_e4;
  local_b8 = CONCAT44(uStack_dc,iStack_e0);
  uVar1 = *(uint *)(local_b0 + 5);
  uStack_88 = CONCAT44(uStack_f4,local_f8);
  local_90 = local_b0;
  uVar15 = uVar13 & 0xffffffe0;
  iStack_d0 = local_f8;
  uStack_cc = uStack_f4;
  uStack_e4 = uVar13;
  if (uVar13 != uVar1) {
    plVar18 = (longlong *)local_b0[4];
    if ((longlong *)local_b0[4] == (longlong *)0x0) {
      plVar18 = local_b0 + 2;
    }
    uVar9 = *(uint *)((longlong)plVar18 + (longlong)((int)uVar13 >> 5) * 4) &
            -1 << ((byte)uVar13 & 0x1f);
    iVar6 = (int)uVar13 >> 5;
    while (uVar9 == 0) {
      uVar15 = uVar15 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1421e7d74;
      uVar9 = *(uint *)((longlong)plVar18 + (longlong)iVar6 * 4 + 4);
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
    uStack_e4 = (uVar15 - iVar6) + 0x1f;
    if ((int)uVar1 < (int)uStack_e4) {
LAB_1421e7d74:
      uStack_e4 = uVar1;
    }
  }
  local_58 = (ulonglong)uStack_e4;
  plVar18 = local_b0;
  puStack_80 = local_c8;
  uStack_70 = local_b8;
  uStack_78 = uStack_c0;
  uStack_74 = uStack_bc;
  do {
    if (((uStack_bc == (int)local_58) && (local_c8 == (uint *)(plVar18 + 2))) &&
       (plVar11 == plVar18)) {
      return param_1;
    }
    lVar10 = *plVar18;
    uVar13 = DAT_14652d64c;
    if ((int)uStack_bc < (int)local_c8[6]) {
      uVar13 = uStack_bc;
    }
    lVar19 = 0;
    local_a0 = (longlong)(int)uVar13 * 0x38;
    uVar1 = *(uint *)(local_a0 + 8 + lVar10);
    plVar18 = (longlong *)(local_a0 + lVar10);
    if (0 < (int)uVar1) {
      iVar6 = 1;
      uVar14 = (longlong)(int)uVar1;
      do {
        lVar10 = param_2[7];
        iVar8 = *(int *)(lVar10 + (longlong)*(int *)(*plVar18 + (longlong)(iVar6 % (int)uVar14) * 4)
                                  * 0x18);
        lVar7 = (longlong)*(int *)(*plVar18 + lVar19 * 4);
        iVar2 = *(int *)(lVar10 + lVar7 * 0x18);
        lVar10 = lVar10 + lVar7 * 0x18;
        puVar17 = *(uint **)((longlong)iVar2 * 0x20 + 0x10 + *param_2);
        puVar16 = puVar17 + *(int *)((longlong)iVar2 * 0x20 + 0x18 + *param_2);
        uVar15 = DAT_14652d644;
        if (puVar17 != puVar16) {
          do {
            uVar15 = *puVar17;
            iVar3 = *(int *)(param_2[0xe] + (longlong)(int)uVar15 * 0x18);
            iVar4 = *(int *)(param_2[0xe] + (longlong)(int)uVar15 * 0x18 + 4);
            if (((iVar3 == iVar2) && (iVar4 == iVar8)) || ((iVar3 == iVar8 && (iVar4 == iVar2))))
            break;
            puVar17 = puVar17 + 1;
            uVar15 = DAT_14652d644;
          } while (puVar17 != puVar16);
        }
        iVar8 = *(int *)(lVar10 + 0x10);
        *(int *)(lVar10 + 0x10) = iVar8 + 1;
        if (*(int *)(lVar10 + 0x14) < iVar8 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar10 + 8,iVar8);
        }
        *(uint *)(*(longlong *)(lVar10 + 8) + (longlong)iVar8 * 4) = uVar13;
        iVar8 = *(int *)(param_2[0xe] + 0x10 + (longlong)(int)uVar15 * 0x18);
        lVar10 = param_2[0xe] + (longlong)(int)uVar15 * 0x18;
        *(int *)(lVar10 + 0x10) = iVar8 + 1;
        if (*(int *)(lVar10 + 0x14) < iVar8 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar10 + 8,iVar8);
        }
        iVar6 = iVar6 + 1;
        lVar19 = lVar19 + 1;
        uVar14 = (ulonglong)uVar1;
        *(uint *)(*(longlong *)(lVar10 + 8) + (longlong)iVar8 * 4) = uVar13;
      } while (lVar19 < (int)uVar1);
      lVar10 = *local_b0;
    }
    local_res20 = 0;
    lVar19 = local_a0;
    if (0 < *(int *)(local_a0 + 0x18 + lVar10)) {
      local_98 = 0;
      do {
        lVar7 = *(longlong *)(lVar19 + 0x10 + lVar10);
        lVar20 = 0;
        uVar1 = *(uint *)(local_98 + 8 + lVar7);
        plVar18 = (longlong *)(local_98 + lVar7);
        if (0 < (int)uVar1) {
          iVar6 = 0;
          uVar14 = (longlong)(int)uVar1;
          do {
            iVar6 = iVar6 + 1;
            lVar19 = *plVar18;
            lVar10 = param_2[7];
            iVar8 = *(int *)(lVar10 + (longlong)
                                      *(int *)(lVar19 + (longlong)(iVar6 % (int)uVar14) * 4) * 0x18)
            ;
            lVar19 = (longlong)*(int *)(lVar19 + lVar20 * 4);
            iVar2 = *(int *)(lVar10 + lVar19 * 0x18);
            lVar10 = lVar10 + lVar19 * 0x18;
            puVar17 = *(uint **)((longlong)iVar2 * 0x20 + 0x10 + *param_2);
            puVar16 = puVar17 + *(int *)((longlong)iVar2 * 0x20 + 0x18 + *param_2);
            uVar15 = DAT_14652d644;
            if (puVar17 != puVar16) {
              while( true ) {
                uVar15 = *puVar17;
                iVar3 = *(int *)(param_2[0xe] + (longlong)(int)uVar15 * 0x18);
                iVar4 = *(int *)(param_2[0xe] + (longlong)(int)uVar15 * 0x18 + 4);
                if ((iVar3 == iVar2) && (iVar4 == iVar8)) break;
                if (((iVar3 == iVar8) && (iVar4 == iVar2)) ||
                   (puVar17 = puVar17 + 1, uVar15 = DAT_14652d644, puVar17 == puVar16)) break;
              }
            }
            iVar8 = *(int *)(lVar10 + 0x10);
            *(int *)(lVar10 + 0x10) = iVar8 + 1;
            if (*(int *)(lVar10 + 0x14) < iVar8 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar10 + 8,iVar8);
            }
            *(uint *)(*(longlong *)(lVar10 + 8) + (longlong)iVar8 * 4) = uVar13;
            iVar8 = *(int *)(param_2[0xe] + 0x10 + (longlong)(int)uVar15 * 0x18);
            lVar10 = param_2[0xe] + (longlong)(int)uVar15 * 0x18;
            *(int *)(lVar10 + 0x10) = iVar8 + 1;
            if (*(int *)(lVar10 + 0x14) < iVar8 + 1) {
              TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar10 + 8,iVar8);
            }
            lVar20 = lVar20 + 1;
            uVar14 = (ulonglong)uVar1;
            *(uint *)(*(longlong *)(lVar10 + 8) + (longlong)iVar8 * 4) = uVar13;
          } while (lVar20 < (int)uVar1);
          lVar10 = *local_b0;
          lVar19 = local_a0;
        }
        local_res20 = local_res20 + 1;
        local_98 = local_98 + 0x10;
      } while (local_res20 < *(int *)(lVar19 + 0x18 + lVar10));
    }
    plVar12 = (longlong *)((longlong)*(int *)(lVar19 + 0x30 + lVar10) * 0x10 + *local_60);
    iVar6 = (int)plVar12[1];
    *(int *)(plVar12 + 1) = iVar6 + 1;
    if (*(int *)((longlong)plVar12 + 0xc) < iVar6 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar12,iVar6);
    }
    plVar18 = local_b0;
    *(uint *)(*plVar12 + (longlong)iVar6 * 4) = uVar13;
    FUN_1421e8900(param_2,uVar13,*local_b0 + 0x20 + lVar19);
    uStack_c0 = uStack_c0 & ~uStack_cc;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_d0);
  } while( true );
}



// FUNCTION 1421e8110 FUN_1421e8110 body=511 status=ok
// SIG undefined FUN_1421e8110(void)

void FUN_1421e8110(undefined8 *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 8;
  plVar1 = (longlong *)param_2[1];
  if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res10,4);
    }
  }
  else {
    local_res10[0] = *(int *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((param_3 == '\0') &&
     ((((*(byte *)(param_2 + 5) & 2) == 0 || (param_2[0xe] != 0)) &&
      ((*(byte *)((longlong)param_2 + 0x29) & 0x10) == 0)))) {
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 1) << 3,
               (longlong)*(int *)((longlong)param_1 + 0xc) << 3);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      plVar1 = (longlong *)param_2[1];
      iVar3 = 0;
      local_res18[0] = 0;
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      iVar2 = *(int *)((longlong)param_1 + 0xc);
      *(undefined4 *)(param_1 + 1) = 0;
      if (iVar2 != local_res18[0]) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_1,local_res18[0]);
        iVar2 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = *(int *)(param_1 + 1);
      }
      *(int *)(param_1 + 1) = iVar3 + local_res18[0];
      if (iVar2 < iVar3 + local_res18[0]) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
    if ((*(byte *)(param_2 + 5) & 2) != 0) {
      plVar1 = (longlong *)param_2[1];
      local_res18[0] = *(int *)(param_1 + 1);
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
  }
  else {
    FUN_1421e3710(param_2,param_1);
  }
  return;
}



// FUNCTION 1421e8310 FUN_1421e8310 body=520 status=ok
// SIG undefined FUN_1421e8310(void)

void FUN_1421e8310(undefined8 *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0xc;
  plVar1 = (longlong *)param_2[1];
  if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res10,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res10,4);
    }
  }
  else {
    local_res10[0] = *(int *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((param_3 == '\0') &&
     ((((*(byte *)(param_2 + 5) & 2) == 0 || (param_2[0xe] != 0)) &&
      ((*(byte *)((longlong)param_2 + 0x29) & 0x10) == 0)))) {
    (**(code **)(*param_2 + 0x78))
              (param_2,(longlong)*(int *)(param_1 + 1) * 0xc,
               (longlong)*(int *)((longlong)param_1 + 0xc) * 0xc);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      plVar1 = (longlong *)param_2[1];
      iVar3 = 0;
      local_res18[0] = 0;
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      iVar2 = *(int *)((longlong)param_1 + 0xc);
      *(undefined4 *)(param_1 + 1) = 0;
      if (iVar2 != local_res18[0]) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                  (param_1,local_res18[0]);
        iVar2 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = *(int *)(param_1 + 1);
      }
      *(int *)(param_1 + 1) = iVar3 + local_res18[0];
      if (iVar2 < iVar3 + local_res18[0]) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1,iVar3);
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
    if ((*(byte *)(param_2 + 5) & 2) != 0) {
      plVar1 = (longlong *)param_2[1];
      local_res18[0] = *(int *)(param_1 + 1);
      if ((int *)plVar1[1] < (int *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_res18,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_res18,4);
        }
      }
      else {
        local_res18[0] = *(int *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(local_res18[0] * local_res10[0]));
      return;
    }
  }
  else {
    FUN_1408bddc0(param_2,param_1);
  }
  return;
}



// FUNCTION 1421e8520 FUN_1421e8520 body=982 status=ok
// SIG undefined FUN_1421e8520(void)

undefined8 * FUN_1421e8520(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int *piVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  undefined1 auVar16 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fStack_c4;
  float local_b8;
  float local_a0;
  
  local_a0 = DAT_1468b5d98;
  fVar19 = DAT_1468b5d94;
  fVar20 = DAT_1468b5d90;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146aedb78) && (_Init_thread_header(&DAT_146aedb78), DAT_146aedb78 == -1))
  {
    atexit((_func_5014 *)&LAB_143ea78f0);
    _Init_thread_footer(&DAT_146aedb78);
  }
  uVar5 = DAT_146aedb70;
  puVar13 = (undefined8 *)((longlong)param_3 * 0x38 + *(longlong *)(param_1 + 0xa8));
  uVar3 = *(uint *)(puVar13 + 1);
  if ((int)DAT_146aedb70 < (int)uVar3) {
    DAT_146aedb70 = uVar3;
    if (DAT_146aedb74 < (int)uVar3) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146aedb68,uVar5);
    }
  }
  else if (((int)uVar3 < (int)DAT_146aedb70) && (iVar9 = DAT_146aedb70 - uVar3, iVar9 != 0)) {
    iVar6 = (DAT_146aedb70 - iVar9) - uVar3;
    if (iVar6 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(DAT_146aedb68 + (longlong)(int)uVar3 * 4),
                 (void *)(DAT_146aedb68 + (longlong)(int)(iVar9 + uVar3) * 4),(longlong)iVar6 << 2);
    }
    DAT_146aedb70 = DAT_146aedb70 - iVar9;
  }
  uVar10 = 0;
  piVar12 = (int *)*puVar13;
  uVar8 = (longlong)*(int *)(puVar13 + 1) & 0x3fffffffffffffff;
  if (piVar12 + *(int *)(puVar13 + 1) < piVar12) {
    uVar8 = uVar10;
  }
  uVar11 = uVar10;
  if (uVar8 != 0) {
    do {
      iVar9 = *piVar12;
      piVar12 = piVar12 + 1;
      *(undefined4 *)(DAT_146aedb68 + uVar11 * 4) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar9 * 0x18);
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar8);
  }
  uVar3 = DAT_146aedb70;
  fVar21 = fVar19;
  fVar22 = fVar20;
  fVar23 = local_a0;
  if (0 < (int)DAT_146aedb70) {
    plVar7 = (longlong *)FUN_140860830(param_1 + 0x118,DAT_146aedad0,0);
    uVar11 = (ulonglong)uVar3;
    lVar4 = *plVar7;
    uVar8 = (longlong)(int)(uVar3 - 1) * 4;
    do {
      fVar14 = *(float *)(lVar4 + 8 + (longlong)*(int *)(uVar8 + DAT_146aedb68) * 0xc);
      uVar1 = *(undefined8 *)(lVar4 + (longlong)*(int *)(uVar8 + DAT_146aedb68) * 0xc);
      fVar17 = (float)((ulonglong)uVar1 >> 0x20);
      uVar2 = *(undefined8 *)(lVar4 + (longlong)*(int *)(uVar10 + DAT_146aedb68) * 0xc);
      fVar18 = (float)uVar2;
      fVar15 = *(float *)(lVar4 + 8 + (longlong)*(int *)(uVar10 + DAT_146aedb68) * 0xc);
      fVar22 = fVar22 + fVar18;
      fStack_c4 = (float)((ulonglong)uVar2 >> 0x20);
      fVar23 = fVar23 + fVar15;
      fVar19 = fVar19 + fStack_c4;
      local_b8 = (float)uVar1;
      fVar20 = fVar20 + (fVar15 + fVar14) * (fStack_c4 - fVar17);
      fVar21 = fVar21 + (fVar18 + local_b8) * (fVar15 - fVar14);
      local_a0 = local_a0 + (fVar18 - local_b8) * (fVar17 + fStack_c4);
      uVar11 = uVar11 - 1;
      uVar8 = uVar10;
      uVar10 = uVar10 + 4;
    } while (uVar11 != 0);
  }
  fVar14 = fVar21 * fVar21 + fVar20 * fVar20 + local_a0 * local_a0;
  if (1e-08 < fVar14) {
    auVar16 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
    fVar15 = auVar16._0_4_;
    fVar15 = fVar15 + fVar15 * (0.5 - fVar14 * 0.5 * fVar15 * fVar15);
    fVar15 = fVar15 + fVar15 * (0.5 - fVar14 * 0.5 * fVar15 * fVar15);
    local_a0 = local_a0 * fVar15;
    fVar20 = fVar20 * fVar15;
    fVar21 = fVar21 * fVar15;
  }
  *param_2 = CONCAT44(fVar21,fVar20);
  *(float *)(param_2 + 1) = local_a0;
  *(float *)((longlong)param_2 + 0xc) =
       (fVar19 * fVar21 + fVar22 * fVar20 + fVar23 * local_a0) / (float)(int)uVar3;
  return param_2;
}



// FUNCTION 1421e8900 FUN_1421e8900 body=2038 status=ok
// SIG undefined FUN_1421e8900(void)

void FUN_1421e8900(longlong param_1,int param_2,longlong *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  longlong *plVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint local_res10;
  undefined8 local_128;
  float local_120;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  float local_f0;
  
  uVar9 = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_3 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_3,0);
  }
  plVar18 = (longlong *)((longlong)param_2 * 0x38 + *(longlong *)(param_1 + 0xa8));
  iVar13 = (int)plVar18[1];
  uVar14 = (ulonglong)iVar13;
  if (iVar13 == 3) {
    iVar13 = (int)param_3[1];
    lVar12 = (longlong)iVar13;
    *(int *)(param_3 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar13 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_3,iVar13);
    }
    lVar7 = *param_3;
    *(undefined4 *)(lVar7 + lVar12 * 0xc) = DAT_14652d640;
    *(undefined4 *)(lVar7 + 4 + lVar12 * 0xc) = DAT_14652d640;
    *(undefined4 *)(lVar7 + 8 + lVar12 * 0xc) = DAT_14652d640;
    lVar7 = (longlong)(int)param_3[1];
    lVar12 = *param_3;
    *(undefined4 *)(lVar12 + -0xc + lVar7 * 0xc) = *(undefined4 *)*plVar18;
    *(undefined4 *)(lVar12 + -8 + lVar7 * 0xc) = *(undefined4 *)(*plVar18 + 4);
    *(undefined4 *)(lVar12 + -4 + lVar7 * 0xc) = *(undefined4 *)(*plVar18 + 8);
    return;
  }
  FUN_1421e8520(param_1,&local_f8,param_2);
  lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar12 + 0x38) < DAT_146aedb90) &&
     (_Init_thread_header(&DAT_146aedb90), DAT_146aedb90 == -1)) {
    atexit((_func_5014 *)&LAB_143ea7910);
    _Init_thread_footer(&DAT_146aedb90);
  }
  if ((*(int *)(lVar12 + 0x38) < DAT_146aedba8) &&
     (_Init_thread_header(&DAT_146aedba8), DAT_146aedba8 == -1)) {
    atexit((_func_5014 *)&LAB_143ea78d0);
    _Init_thread_footer(&DAT_146aedba8);
  }
  if ((*(int *)(lVar12 + 0x38) < DAT_146aedbc0) &&
     (_Init_thread_header(&DAT_146aedbc0), DAT_146aedbc0 == -1)) {
    atexit((_func_5014 *)&LAB_143ea7930);
    _Init_thread_footer(&DAT_146aedbc0);
  }
  plVar8 = (longlong *)FUN_140860830(param_1 + 0x118,DAT_146aedad0,0);
  iVar17 = DAT_146aedb88;
  if (DAT_146aedb88 < iVar13) {
    DAT_146aedb88 = iVar13;
    if (DAT_146aedb8c < iVar13) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146aedb80,iVar17);
    }
  }
  else if ((iVar13 < DAT_146aedb88) && (iVar17 = DAT_146aedb88 - iVar13, iVar17 != 0)) {
    iVar10 = (DAT_146aedb88 - iVar17) - iVar13;
    if (iVar10 != 0) {
      _guard_xfg_dispatch_icall_nop
                (DAT_146aedb80 + uVar14,DAT_146aedb80 + (iVar17 + iVar13),(longlong)iVar10 << 2);
    }
    DAT_146aedb88 = DAT_146aedb88 - iVar17;
  }
  iVar17 = DAT_146aedba0;
  if (DAT_146aedba0 < iVar13) {
    DAT_146aedba0 = iVar13;
    if (DAT_146aedba4 < iVar13) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146aedb98,iVar17);
    }
  }
  else if ((iVar13 < DAT_146aedba0) && (iVar17 = DAT_146aedba0 - iVar13, iVar17 != 0)) {
    iVar10 = (DAT_146aedba0 - iVar17) - iVar13;
    if (iVar10 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(DAT_146aedb98 + uVar14 * 4),
                 (void *)(DAT_146aedb98 + (longlong)(iVar17 + iVar13) * 4),(longlong)iVar10 << 2);
    }
    DAT_146aedba0 = DAT_146aedba0 - iVar17;
  }
  iVar17 = DAT_146aedbb8;
  if (DAT_146aedbb8 < iVar13) {
    DAT_146aedbb8 = iVar13;
    if (DAT_146aedbbc < iVar13) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(&DAT_146aedbb0,iVar17);
    }
  }
  else if ((iVar13 < DAT_146aedbb8) && (iVar17 = DAT_146aedbb8 - iVar13, iVar17 != 0)) {
    iVar10 = (DAT_146aedbb8 - iVar17) - iVar13;
    if (iVar10 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(DAT_146aedbb0 + uVar14 * 0xc),
                 (void *)(DAT_146aedbb0 + (longlong)(iVar17 + iVar13) * 0xc),(longlong)iVar10 * 0xc)
      ;
    }
    DAT_146aedbb8 = DAT_146aedbb8 - iVar17;
  }
  fVar5 = local_f0;
  if (0 < iVar13) {
    iVar17 = 1;
    uVar15 = uVar9;
    uVar16 = uVar9;
    do {
      DAT_146aedb80[uVar15] = iVar17 + -2;
      *(int *)(DAT_146aedb98 + uVar15 * 4) = iVar17;
      lVar7 = DAT_146aedbb0;
      iVar17 = iVar17 + 1;
      lVar12 = uVar15 * 4;
      uVar15 = uVar15 + 1;
      lVar11 = (longlong)
               *(int *)(*(longlong *)(param_1 + 0x38) + (longlong)*(int *)(*plVar18 + lVar12) * 0x18
                       );
      lVar12 = *plVar8;
      *(undefined8 *)(uVar16 + DAT_146aedbb0) = *(undefined8 *)(lVar12 + lVar11 * 0xc);
      *(undefined4 *)(uVar16 + 8 + lVar7) = *(undefined4 *)(lVar12 + 8 + lVar11 * 0xc);
      uVar16 = uVar16 + 0xc;
    } while ((longlong)uVar15 < (longlong)uVar14);
  }
  *DAT_146aedb80 = iVar13 + -1;
  *(undefined4 *)(DAT_146aedb98 + -4 + uVar14 * 4) = 0;
  local_res10 = 0;
  if (2 < iVar13) {
    fVar4 = local_f8._4_4_;
    fVar3 = (float)local_f8;
    lVar12 = DAT_146aedbb0;
    uVar15 = uVar9;
    lVar7 = DAT_146aedb98;
    do {
      if ((iVar13 < 4) || ((int)uVar14 <= (int)uVar15)) {
LAB_1421e8edc:
        iVar13 = (int)param_3[1];
        lVar12 = (longlong)iVar13;
        *(int *)(param_3 + 1) = iVar13 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar13 + 1) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_3,iVar13);
        }
        lVar7 = *param_3;
        uVar14 = (ulonglong)((int)uVar14 - 1);
        lVar11 = (longlong)(int)local_res10;
        uVar15 = 0;
        *(undefined4 *)(lVar7 + lVar12 * 0xc) = DAT_14652d640;
        *(undefined4 *)(lVar7 + 4 + lVar12 * 0xc) = DAT_14652d640;
        *(undefined4 *)(lVar7 + 8 + lVar12 * 0xc) = DAT_14652d640;
        lVar7 = (longlong)(int)param_3[1];
        lVar12 = *param_3;
        *(undefined4 *)(lVar12 + -0xc + lVar7 * 0xc) =
             *(undefined4 *)(*plVar18 + (longlong)DAT_146aedb80[lVar11] * 4);
        *(undefined4 *)(lVar12 + -8 + lVar7 * 0xc) = *(undefined4 *)(*plVar18 + lVar11 * 4);
        *(undefined4 *)(lVar12 + -4 + lVar7 * 0xc) =
             *(undefined4 *)(*plVar18 + (longlong)*(int *)(DAT_146aedb98 + lVar11 * 4) * 4);
        *(undefined4 *)(DAT_146aedb98 + (longlong)DAT_146aedb80[lVar11] * 4) =
             *(undefined4 *)(DAT_146aedb98 + lVar11 * 4);
        DAT_146aedb80[*(int *)(DAT_146aedb98 + lVar11 * 4)] = DAT_146aedb80[lVar11];
        uVar2 = DAT_146aedb80[lVar11];
        lVar12 = DAT_146aedbb0;
        lVar7 = DAT_146aedb98;
      }
      else {
        lVar11 = (longlong)(int)uVar9;
        iVar13 = DAT_146aedb80[lVar11];
        uVar1 = *(undefined8 *)(lVar12 + (longlong)iVar13 * 0xc);
        local_120 = *(float *)(lVar12 + 8 + (longlong)iVar13 * 0xc);
        local_108 = *(undefined8 *)(lVar12 + lVar11 * 0xc);
        local_100 = *(float *)(lVar12 + 8 + lVar11 * 0xc);
        fVar22 = (float)local_108 - (float)uVar1;
        uVar2 = *(uint *)(lVar7 + lVar11 * 4);
        lVar11 = (longlong)(int)uVar2;
        local_118 = *(undefined8 *)(lVar12 + lVar11 * 0xc);
        local_128._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
        fVar20 = (float)((ulonglong)local_108 >> 0x20) - local_128._4_4_;
        local_110 = *(float *)(lVar12 + 8 + lVar11 * 0xc);
        fVar25 = (float)local_118 - (float)uVar1;
        local_128._4_4_ = (float)((ulonglong)local_118 >> 0x20) - local_128._4_4_;
        fVar23 = local_128._4_4_ * (local_100 - local_120) - (local_110 - local_120) * fVar20;
        fVar24 = (local_110 - local_120) * fVar22 - fVar25 * (local_100 - local_120);
        fVar26 = fVar25 * fVar20 - local_128._4_4_ * fVar22;
        fVar19 = fVar24 * fVar24 + fVar23 * fVar23 + fVar26 * fVar26;
        fVar20 = fVar23;
        fVar22 = fVar24;
        fVar25 = fVar26;
        if ((fVar19 != 1.0) &&
           (fVar20 = DAT_1468b5d90, fVar22 = DAT_1468b5d94, fVar25 = DAT_1468b5d98, 1e-08 <= fVar19)
           ) {
          auVar21 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
          fVar25 = auVar21._0_4_;
          fVar25 = fVar25 + fVar25 * (0.5 - fVar19 * 0.5 * fVar25 * fVar25);
          fVar25 = fVar25 + fVar25 * (0.5 - fVar19 * 0.5 * fVar25 * fVar25);
          fVar20 = fVar23 * fVar25;
          fVar22 = fVar24 * fVar25;
          fVar25 = fVar26 * fVar25;
        }
        local_128 = uVar1;
        if (0.0 < fVar20 * fVar3 + fVar22 * fVar4 + fVar25 * fVar5) {
          iVar17 = *(int *)(lVar7 + lVar11 * 4);
          do {
            lVar11 = (longlong)iVar17;
            local_f8 = *(undefined8 *)(lVar12 + lVar11 * 0xc);
            local_f0 = *(float *)(lVar12 + 8 + lVar11 * 0xc);
            cVar6 = FMeshDescription::PointInTriangle
                              (param_1,&local_128,&local_108,&local_118,&local_f8,0x322bcc77);
            if (cVar6 != '\0') goto LAB_1421e903d;
            iVar17 = *(int *)(lVar7 + lVar11 * 4);
          } while (iVar17 != iVar13);
          goto LAB_1421e8edc;
        }
LAB_1421e903d:
        uVar15 = (ulonglong)((int)uVar15 + 1);
      }
      uVar9 = (ulonglong)uVar2;
      iVar13 = (int)uVar14;
      local_res10 = uVar2;
    } while (2 < iVar13);
  }
  return;
}



// FUNCTION 1421e9100 FUN_1421e9100 body=1312 status=ok
// SIG undefined FUN_1421e9100(void)

void FUN_1421e9100(longlong *param_1,float param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int *piVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  int *piVar20;
  uint uVar21;
  uint *puVar22;
  longlong *plVar23;
  int *piVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong *plVar27;
  int *piVar28;
  bool local_res18;
  int *local_128;
  undefined8 local_120;
  int local_118;
  uint uStack_114;
  uint *puStack_110;
  uint local_108;
  uint uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  undefined8 local_f0;
  float local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  ulonglong local_b8;
  longlong *local_b0;
  int iStack_a8;
  uint uStack_a4;
  uint *local_a0;
  uint uStack_98;
  int iStack_94;
  undefined8 local_90;
  longlong *local_88;
  undefined8 uStack_80;
  uint *puStack_78;
  uint uStack_70;
  int iStack_6c;
  undefined8 uStack_68;
  
  local_d8 = (longlong *)FUN_140860830(param_1 + 0x70,DAT_146aedae8);
  plVar6 = (longlong *)FUN_140860990(param_1 + 0xbd,DAT_146aedb10);
  plVar27 = param_1 + 0xe;
  local_118 = 0;
  iVar15 = (int)param_1[0x13];
  puStack_110 = (uint *)(param_1 + 0x10);
  piVar24 = (int *)0x0;
  iVar16 = 0;
  local_128 = (int *)0x0;
  local_120 = 0;
  uStack_114 = 1;
  uStack_104 = 0;
  iStack_100 = 0;
  if (iVar15 != 0) {
    puVar22 = (uint *)param_1[0x12];
    if ((uint *)param_1[0x12] == (uint *)0x0) {
      puVar22 = puStack_110;
    }
    uVar17 = *puVar22;
    iStack_100 = 0;
    local_118 = 0;
    while (uVar17 == 0) {
      lVar14 = (longlong)local_118;
      iStack_100 = iStack_100 + 0x20;
      iVar10 = local_118 + 1;
      bVar5 = (int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_118;
      local_118 = iVar10;
      if (bVar5) goto LAB_1421e9231;
      uVar17 = puVar22[lVar14 + 1];
    }
    uStack_114 = -uVar17 & uVar17;
    iVar10 = 0x1f;
    if (uStack_114 != 0) {
      for (; uStack_114 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uStack_114 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_104 = (iStack_100 - iVar10) + 0x1f;
    if (iVar15 < (int)uStack_104) {
LAB_1421e9231:
      uStack_104 = iVar15;
    }
  }
  uVar17 = *(uint *)(param_1 + 0x13);
  uStack_98 = 0xffffffff;
  iStack_94 = uStack_104;
  local_90 = CONCAT44(uStack_fc,iStack_100);
  uVar2 = *(uint *)(param_1 + 0x13);
  uStack_80 = CONCAT44(uStack_114,local_118);
  local_108 = -1 << ((byte)uVar17 & 0x1f);
  uVar21 = uVar17 & 0xffffffe0;
  iStack_a8 = local_118;
  uStack_a4 = uStack_114;
  uStack_104 = uVar17;
  if (uVar17 != uVar2) {
    plVar23 = (longlong *)param_1[0x12];
    if ((longlong *)param_1[0x12] == (longlong *)0x0) {
      plVar23 = param_1 + 0x10;
    }
    uVar13 = *(uint *)((longlong)plVar23 + (longlong)((int)uVar17 >> 5) * 4) & local_108;
    iVar15 = (int)uVar17 >> 5;
    while (uVar13 == 0) {
      uVar21 = uVar21 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar15)
      goto LAB_1421e9302;
      uVar13 = *(uint *)((longlong)plVar23 + (longlong)iVar15 * 4 + 4);
      local_108 = 0xffffffff;
      iVar15 = iVar15 + 1;
    }
    uVar13 = -uVar13 & uVar13;
    iVar15 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar13 == 0) {
      iVar15 = 0x20;
    }
    else {
      iVar15 = 0x1f - iVar15;
    }
    uStack_104 = (uVar21 - iVar15) + 0x1f;
    if ((int)uVar2 < (int)uStack_104) {
LAB_1421e9302:
      uStack_104 = uVar2;
    }
  }
  puVar22 = (uint *)(param_1 + 0x10);
  local_b8 = (ulonglong)uStack_104;
  local_c8 = plVar27;
  local_c0 = plVar6;
  local_a0 = puStack_110;
  local_88 = plVar27;
  puStack_78 = puStack_110;
  uStack_68 = local_90;
  local_b0 = plVar27;
  uStack_70 = uStack_98;
  iStack_6c = iStack_94;
  do {
    if (((iStack_94 == (int)local_b8) && (local_a0 == puVar22)) && (local_b0 == plVar27)) {
      if (piVar24 != (int *)0x0) {
        FMemory::Free(piVar24);
      }
      return;
    }
    local_f8 = *plVar27;
    iVar15 = DAT_14652d644;
    if (iStack_94 < (int)local_a0[6]) {
      iVar15 = iStack_94;
    }
    lVar14 = (longlong)iVar15;
    iVar15 = *(int *)(local_f8 + 0x10 + lVar14 * 0x18);
    local_d0 = lVar14;
    if (iVar15 != 0) {
      local_res18 = iVar15 == 1;
      local_e0 = 0;
      if (iVar15 != 1) {
        do {
          lVar19 = local_e0;
          plVar6 = local_c0;
          if (1 < local_e0) break;
          iVar15 = *(int *)(*plVar27 + (local_e0 + local_d0 * 6) * 4);
          uVar18 = 0;
          if ((iVar16 < 4) && (local_120 = local_120 & 0xffffffff00000000, uVar18 = 0, iVar16 != 4))
          {
            TArray<float,FDefaultAllocator>::ResizeTo(&local_128,4);
            uVar18 = local_120 & 0xffffffff;
            piVar24 = local_128;
          }
          uVar26 = 0;
          iVar16 = (int)uVar18;
          puVar7 = (undefined8 *)((longlong)iVar15 * 0x20 + *param_1);
          piVar28 = (int *)*puVar7;
          uVar8 = (ulonglong)*(int *)(puVar7 + 1);
          uVar25 = uVar8 & 0x3fffffffffffffff;
          if (piVar28 + uVar8 < piVar28) {
            uVar25 = uVar26;
          }
          if (uVar25 != 0) {
LAB_1421e9420:
            iVar15 = *piVar28;
            piVar20 = *(int **)(param_1[7] + 8 + (longlong)iVar15 * 0x18);
            piVar12 = piVar20 + *(int *)(param_1[7] + 0x10 + (longlong)iVar15 * 0x18);
            if (piVar20 != piVar12) {
              piVar3 = *(int **)(local_f8 + 8 + lVar14 * 0x18);
              do {
                for (piVar11 = piVar3; piVar11 != piVar3 + *(int *)(local_f8 + 0x10 + lVar14 * 0x18)
                    ; piVar11 = piVar11 + 1) {
                  if (*piVar11 == *piVar20) {
                    iVar16 = (int)uVar18;
                    piVar12 = piVar24;
                    if (piVar24 == piVar24 + iVar16) goto LAB_1421e94a2;
                    goto LAB_1421e9487;
                  }
                }
                piVar20 = piVar20 + 1;
              } while (piVar20 != piVar12);
            }
            goto LAB_1421e94cb;
          }
LAB_1421e94ed:
          iVar15 = 1;
          lVar4 = *local_d8;
          uVar1 = *(undefined8 *)(lVar4 + (longlong)*piVar24 * 0xc);
          local_e8 = *(float *)(lVar4 + 8 + (longlong)*piVar24 * 0xc);
          if (1 < iVar16) {
            local_f0._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
            local_f0._0_4_ = (float)uVar1;
            piVar28 = piVar24;
            do {
              piVar28 = piVar28 + 1;
              lVar9 = (longlong)*piVar28;
              if (((param_2 < ABS(*(float *)(lVar4 + lVar9 * 0xc) - (float)local_f0)) ||
                  (param_2 < ABS(*(float *)(lVar4 + 4 + lVar9 * 0xc) - local_f0._4_4_))) ||
                 (param_2 < ABS(*(float *)(lVar4 + 8 + lVar9 * 0xc) - local_e8))) {
                local_res18 = true;
                break;
              }
              iVar15 = iVar15 + 1;
            } while (iVar15 < iVar16);
          }
          local_e0 = lVar19 + 1;
          plVar6 = local_c0;
          plVar27 = local_c8;
          iVar16 = local_120._4_4_;
          local_f0 = uVar1;
        } while (local_res18 == false);
      }
      *(bool *)(local_d0 + *plVar6) = local_res18;
    }
    uStack_98 = uStack_98 & ~uStack_a4;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_a8);
    puVar22 = (uint *)(plVar27 + 2);
  } while( true );
  while (piVar12 = piVar12 + 1, piVar12 != piVar24 + iVar16) {
LAB_1421e9487:
    if (*piVar12 == iVar15) {
      if ((int)((longlong)piVar12 - (longlong)piVar24 >> 2) != -1) goto LAB_1421e94cb;
      break;
    }
  }
LAB_1421e94a2:
  uVar17 = iVar16 + 1;
  local_120 = CONCAT44(local_120._4_4_,uVar17);
  if (local_120._4_4_ < (int)uVar17) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_128,uVar18);
    piVar24 = local_128;
    uVar17 = (uint)local_120;
  }
  uVar18 = (ulonglong)uVar17;
  piVar24[iVar16] = iVar15;
LAB_1421e94cb:
  iVar16 = (int)uVar18;
  piVar28 = piVar28 + 1;
  uVar26 = uVar26 + 1;
  lVar19 = local_e0;
  if (uVar26 == uVar25) goto LAB_1421e94ed;
  goto LAB_1421e9420;
}



// FUNCTION 1421e9620 FUN_1421e9620 body=1234 status=ok
// SIG undefined FUN_1421e9620(void)

void FUN_1421e9620(longlong *param_1,undefined4 param_2,float param_3)

{
  uint uVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  uint *puVar18;
  longlong *plVar19;
  longlong *plVar20;
  int *piVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  char local_res20;
  int *local_118;
  undefined8 local_110;
  uint local_108;
  uint uStack_104;
  uint *puStack_100;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  uint uStack_a0;
  uint uStack_9c;
  uint *local_98;
  uint uStack_90;
  int iStack_8c;
  undefined8 local_88;
  longlong *local_80;
  undefined8 uStack_78;
  uint *puStack_70;
  uint uStack_68;
  int iStack_64;
  undefined8 uStack_60;
  
  local_c8 = (longlong *)FUN_1421e32e0(param_1 + 0x70,DAT_146aedae0,param_2);
  local_b8 = (longlong *)FUN_140860990(param_1 + 0xbd,DAT_146aedb18,0);
  piVar21 = (int *)0x0;
  plVar20 = param_1 + 0xe;
  local_118 = (int *)0x0;
  iVar11 = (int)param_1[0x13];
  puStack_100 = (uint *)(param_1 + 0x10);
  local_110 = 0;
  local_108 = 0;
  uStack_104 = 1;
  uStack_f4 = 0;
  uStack_f0 = 0;
  if (iVar11 != 0) {
    puVar18 = (uint *)param_1[0x12];
    if ((uint *)param_1[0x12] == (uint *)0x0) {
      puVar18 = puStack_100;
    }
    uVar12 = *puVar18;
    piVar7 = piVar21;
    piVar15 = piVar21;
    while (uVar12 == 0) {
      iVar4 = (int)piVar7;
      uStack_f0 = (int)piVar15 + 0x20;
      piVar15 = (int *)(ulonglong)uStack_f0;
      local_108 = iVar4 + 1;
      piVar7 = (int *)(ulonglong)local_108;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1421e9751;
      uVar12 = puVar18[(longlong)iVar4 + 1];
    }
    uStack_104 = -uVar12 & uVar12;
    iVar4 = 0x1f;
    if (uStack_104 != 0) {
      for (; uStack_104 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_104 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_f4 = (uStack_f0 - iVar4) + 0x1f;
    if (iVar11 < (int)uStack_f4) {
LAB_1421e9751:
      uStack_f4 = iVar11;
    }
  }
  uVar12 = *(uint *)(param_1 + 0x13);
  uStack_90 = 0xffffffff;
  iStack_8c = uStack_f4;
  local_88 = CONCAT44(uStack_ec,uStack_f0);
  uVar1 = *(uint *)(param_1 + 0x13);
  uStack_78 = CONCAT44(uStack_104,local_108);
  local_f8 = -1 << ((byte)uVar12 & 0x1f);
  uVar17 = uVar12 & 0xffffffe0;
  uStack_a0 = local_108;
  uStack_9c = uStack_104;
  uStack_f4 = uVar12;
  if (uVar12 != uVar1) {
    plVar19 = (longlong *)param_1[0x12];
    if ((longlong *)param_1[0x12] == (longlong *)0x0) {
      plVar19 = param_1 + 0x10;
    }
    uVar9 = *(uint *)((longlong)plVar19 + (longlong)((int)uVar12 >> 5) * 4) & local_f8;
    iVar11 = (int)uVar12 >> 5;
    while (uVar9 == 0) {
      uVar17 = uVar17 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
      goto LAB_1421e9822;
      uVar9 = *(uint *)((longlong)plVar19 + (longlong)iVar11 * 4 + 4);
      local_f8 = 0xffffffff;
      iVar11 = iVar11 + 1;
    }
    uVar9 = -uVar9 & uVar9;
    iVar11 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar11 == 0; iVar11 = iVar11 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - iVar11;
    }
    uStack_f4 = (uVar17 - iVar11) + 0x1f;
    if ((int)uVar1 < (int)uStack_f4) {
LAB_1421e9822:
      uStack_f4 = uVar1;
    }
  }
  puVar18 = (uint *)(param_1 + 0x10);
  local_b0 = (ulonglong)uStack_f4;
  piVar7 = piVar21;
  local_c0 = plVar20;
  local_98 = puStack_100;
  local_80 = plVar20;
  puStack_70 = puStack_100;
  uStack_60 = local_88;
  local_a8 = plVar20;
  uStack_68 = uStack_90;
  iStack_64 = iStack_8c;
  do {
    if (((iStack_8c == (int)local_b0) && (local_98 == puVar18)) && (local_a8 == plVar20)) {
      if (piVar7 != (int *)0x0) {
        FMemory::Free(piVar7);
      }
      return;
    }
    local_e0 = *plVar20;
    iVar11 = DAT_14652d644;
    if (iStack_8c < (int)local_98[6]) {
      iVar11 = iStack_8c;
    }
    local_d0 = (longlong)iVar11;
    local_e8 = local_d0 * 3;
    if (*(int *)(local_e0 + 0x10 + local_d0 * 0x18) != 0) {
      local_res20 = '\0';
      local_d8 = 0;
      do {
        lVar14 = local_d8;
        if (1 < local_d8) break;
        iVar11 = *(int *)(*plVar20 + (local_d8 + local_d0 * 6) * 4);
        uVar13 = 0;
        if (((int)piVar21 < 4) &&
           (local_110 = local_110 & 0xffffffff00000000, uVar13 = 0, (int)piVar21 != 4)) {
          TArray<float,FDefaultAllocator>::ResizeTo(&local_118,4);
          uVar13 = local_110 & 0xffffffff;
          piVar7 = local_118;
        }
        uVar23 = 0;
        iVar4 = (int)uVar13;
        puVar5 = (undefined8 *)((longlong)iVar11 * 0x20 + *param_1);
        piVar21 = (int *)*puVar5;
        uVar6 = (ulonglong)*(int *)(puVar5 + 1);
        uVar22 = uVar6 & 0x3fffffffffffffff;
        if (piVar21 + uVar6 < piVar21) {
          uVar22 = uVar23;
        }
        if (uVar22 != 0) {
LAB_1421e9930:
          iVar11 = *piVar21;
          piVar16 = *(int **)(param_1[7] + 8 + (longlong)iVar11 * 0x18);
          piVar15 = piVar16 + *(int *)(param_1[7] + 0x10 + (longlong)iVar11 * 0x18);
          if (piVar16 != piVar15) {
            piVar2 = *(int **)(local_e0 + 8 + local_e8 * 8);
            do {
              for (piVar8 = piVar2; piVar8 != piVar2 + *(int *)(local_e0 + 0x10 + local_e8 * 8);
                  piVar8 = piVar8 + 1) {
                if (*piVar8 == *piVar16) {
                  iVar4 = (int)uVar13;
                  piVar15 = piVar7;
                  goto joined_r0x0001421e9995;
                }
              }
              piVar16 = piVar16 + 1;
            } while (piVar16 != piVar15);
          }
          goto LAB_1421e99db;
        }
LAB_1421e9a00:
        iVar11 = 1;
        lVar3 = *local_c8;
        piVar21 = piVar7;
        if (1 < iVar4) {
          do {
            lVar10 = (longlong)piVar21[1];
            if ((param_3 < ABS(*(float *)(lVar3 + lVar10 * 8) -
                               *(float *)(lVar3 + (longlong)*piVar7 * 8))) ||
               (param_3 < ABS(*(float *)(lVar3 + 4 + lVar10 * 8) -
                              *(float *)(lVar3 + 4 + (longlong)*piVar7 * 8)))) {
              local_res20 = '\x01';
              break;
            }
            iVar11 = iVar11 + 1;
            piVar21 = piVar21 + 1;
          } while (iVar11 < iVar4);
        }
        piVar21 = (int *)(local_110 >> 0x20);
        local_d8 = lVar14 + 1;
        plVar20 = local_c0;
      } while (local_res20 == '\0');
      *(char *)(local_d0 + *local_b8) = local_res20;
    }
    uStack_90 = uStack_90 & ~uStack_9c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
    puVar18 = (uint *)(plVar20 + 2);
  } while( true );
joined_r0x0001421e9995:
  if (piVar15 == piVar7 + iVar4) goto LAB_1421e99b2;
  if (*piVar15 == iVar11) {
    if ((int)((longlong)piVar15 - (longlong)piVar7 >> 2) != -1) goto LAB_1421e99db;
    goto LAB_1421e99b2;
  }
  piVar15 = piVar15 + 1;
  goto joined_r0x0001421e9995;
LAB_1421e99b2:
  uVar12 = iVar4 + 1;
  local_110 = CONCAT44(local_110._4_4_,uVar12);
  if (local_110._4_4_ < (int)uVar12) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_118,uVar13);
    piVar7 = local_118;
    uVar12 = (uint)local_110;
  }
  uVar13 = (ulonglong)uVar12;
  piVar7[iVar4] = iVar11;
LAB_1421e99db:
  iVar4 = (int)uVar13;
  piVar21 = piVar21 + 1;
  uVar23 = uVar23 + 1;
  lVar14 = local_d8;
  if (uVar23 == uVar22) goto LAB_1421e9a00;
  goto LAB_1421e9930;
}



// FUNCTION 1421e9b00 Empty body=187 status=ok
// SIG undefined Empty(void)

void TSparseArray<FMeshPolygon,FDefaultSparseArrayAllocator>::Empty(longlong param_1,int param_2)

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
      FMeshPolygon::~FMeshPolygon((longlong)local_1c * 0x38 + *local_38);
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
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



// FUNCTION 1421e9bc0 Empty body=197 status=ok
// SIG undefined Empty(void)

void TSparseArray<FMeshPolygonGroup,FDefaultSparseArrayAllocator>::Empty
               (longlong param_1,int param_2)

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
      if (*(longlong *)((longlong)local_1c * 0x10 + *local_38) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~local_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_30);
    } while (local_1c < *(int *)(local_28 + 0x18));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,param_2);
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



// FUNCTION 1421e9c90 GetPolygonHoleVertices body=199 status=ok
// SIG undefined GetPolygonHoleVertices(void)

void FMeshDescription::GetPolygonHoleVertices
               (longlong param_1,int param_2,int param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int *piVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_3;
  lVar5 = (longlong)param_2 * 0x38 + *(longlong *)(param_1 + 0xa8);
  iVar1 = *(int *)(*(longlong *)(lVar5 + 0x10) + 8 + lVar8 * 0x10);
  iVar2 = (int)param_4[1];
  if (iVar2 < iVar1) {
    *(int *)(param_4 + 1) = iVar1;
    if (*(int *)((longlong)param_4 + 0xc) < iVar1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_4,iVar2);
    }
  }
  else if ((iVar1 < iVar2) && (iVar1 != iVar2)) {
    *(int *)(param_4 + 1) = iVar1;
  }
  lVar5 = *(longlong *)(lVar5 + 0x10);
  piVar6 = *(int **)(lVar5 + lVar8 * 0x10);
  uVar3 = (ulonglong)*(int *)(lVar5 + 8 + lVar8 * 0x10);
  uVar4 = 0;
  uVar7 = uVar3 & 0x3fffffffffffffff;
  if (piVar6 + uVar3 < piVar6) {
    uVar7 = uVar4;
  }
  if (uVar7 != 0) {
    do {
      iVar1 = *piVar6;
      piVar6 = piVar6 + 1;
      *(undefined4 *)(*param_4 + uVar4 * 4) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 0x18);
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar7);
  }
  return;
}



// FUNCTION 1421e9d60 GetPolygonPerimeterVertices body=161 status=ok
// SIG undefined GetPolygonPerimeterVertices(void)

void FMeshDescription::GetPolygonPerimeterVertices(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int *piVar5;
  ulonglong uVar6;
  
  iVar2 = (int)param_3[1];
  puVar3 = (undefined8 *)((longlong)param_2 * 0x38 + *(longlong *)(param_1 + 0xa8));
  iVar1 = *(int *)(puVar3 + 1);
  if (iVar2 < iVar1) {
    *(int *)(param_3 + 1) = iVar1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3);
    }
  }
  else if ((iVar1 < iVar2) && (iVar1 != iVar2)) {
    *(int *)(param_3 + 1) = iVar1;
  }
  uVar4 = 0;
  piVar5 = (int *)*puVar3;
  uVar6 = (longlong)*(int *)(puVar3 + 1) & 0x3fffffffffffffff;
  if (piVar5 + *(int *)(puVar3 + 1) < piVar5) {
    uVar6 = uVar4;
  }
  if (uVar6 != 0) {
    do {
      iVar2 = *piVar5;
      piVar5 = piVar5 + 1;
      *(undefined4 *)(*param_3 + uVar4 * 4) =
           *(undefined4 *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 0x18);
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar6);
  }
  return;
}



// FUNCTION 1421e9e10 FUN_1421e9e10 body=601 status=ok
// SIG undefined FUN_1421e9e10(void)

void FUN_1421e9e10(int *param_1,int param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
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
  
  plVar1 = (longlong *)(param_1 + 2);
  *param_1 = param_2;
  uVar3 = param_1[0xc];
  puVar2 = (uint *)(param_1 + 6);
  local_98 = 0;
  uStack_94 = 1;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar13 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
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
      if (bVar6) goto LAB_1421e9eec;
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
LAB_1421e9eec:
      uStack_84 = uVar3;
    }
  }
  uVar4 = param_1[0xc];
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
    puVar13 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar8 = puVar13[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1421e9fb2;
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
LAB_1421e9fb2:
      uStack_84 = uVar3;
    }
  }
  while ((lVar9 = (longlong)(int)uStack_5c, uStack_5c != uStack_84 || (local_68 != puVar2))) {
    lVar5 = *plVar1;
    *(int *)(lVar5 + 8 + lVar9 * 0x30) = param_2;
    lVar10 = *(longlong *)(lVar5 + 0x10 + lVar9 * 0x30);
    lVar11 = (longlong)*(int *)(lVar5 + 0x18 + lVar9 * 0x30) * 0x10 + lVar10;
    if (lVar10 != lVar11) {
      do {
        *(undefined4 *)(lVar10 + 8) = 0;
        if (*(int *)(lVar10 + 0xc) < param_2) {
          TArray<float,FDefaultAllocator>::ResizeTo(lVar10,param_2);
        }
        TMeshAttributeArrayBase<int>::Insert(lVar10,param_2 + -1,lVar5 + lVar9 * 0x30 + 0x20);
        lVar10 = lVar10 + 0x10;
      } while (lVar10 != lVar11);
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 1421ea070 FUN_1421ea070 body=601 status=ok
// SIG undefined FUN_1421ea070(void)

void FUN_1421ea070(int *param_1,int param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
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
  
  plVar1 = (longlong *)(param_1 + 2);
  *param_1 = param_2;
  uVar3 = param_1[0xc];
  puVar2 = (uint *)(param_1 + 6);
  local_98 = 0;
  uStack_94 = 1;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar13 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
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
      if (bVar6) goto LAB_1421ea14c;
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
LAB_1421ea14c:
      uStack_84 = uVar3;
    }
  }
  uVar4 = param_1[0xc];
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
    puVar13 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar8 = puVar13[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1421ea212;
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
LAB_1421ea212:
      uStack_84 = uVar3;
    }
  }
  while ((lVar9 = (longlong)(int)uStack_5c, uStack_5c != uStack_84 || (local_68 != puVar2))) {
    lVar5 = *plVar1;
    *(int *)(lVar5 + 8 + lVar9 * 0x30) = param_2;
    lVar10 = *(longlong *)(lVar5 + 0x10 + lVar9 * 0x30);
    lVar11 = (longlong)*(int *)(lVar5 + 0x18 + lVar9 * 0x30) * 0x10 + lVar10;
    if (lVar10 != lVar11) {
      do {
        *(undefined4 *)(lVar10 + 8) = 0;
        if (*(int *)(lVar10 + 0xc) < param_2) {
          TArray<float,FDefaultAllocator>::ResizeTo(lVar10,param_2);
        }
        TMeshAttributeArrayBase<float>::Insert(lVar10,param_2 + -1,lVar5 + lVar9 * 0x30 + 0x20);
        lVar10 = lVar10 + 0x10;
      } while (lVar10 != lVar11);
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 1421ea2d0 FUN_1421ea2d0 body=601 status=ok
// SIG undefined FUN_1421ea2d0(void)

void FUN_1421ea2d0(int *param_1,int param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
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
  
  plVar1 = (longlong *)(param_1 + 2);
  *param_1 = param_2;
  uVar3 = param_1[0xc];
  puVar2 = (uint *)(param_1 + 6);
  local_98 = 0;
  uStack_94 = 1;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar13 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar4 = *puVar13;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar6 = local_98 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar6;
      if (bVar5) goto LAB_1421ea3ac;
      uVar4 = puVar13[lVar9 + 1];
    }
    uStack_94 = -uVar4 & uVar4;
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
    uStack_84 = (iStack_80 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_1421ea3ac:
      uStack_84 = uVar3;
    }
  }
  uVar4 = param_1[0xc];
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
    puVar13 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar8 = puVar13[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar6 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1421ea472;
      uVar8 = puVar13[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar6 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_84 = (uVar12 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_1421ea472:
      uStack_84 = uVar3;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar2))) {
    lVar7 = (longlong)(int)uStack_5c * 0x38;
    lVar9 = *plVar1;
    *(int *)(lVar7 + 8 + lVar9) = param_2;
    lVar10 = *(longlong *)(lVar7 + 0x10 + lVar9);
    lVar11 = (longlong)*(int *)(lVar7 + 0x18 + lVar9) * 0x10 + lVar10;
    if (lVar10 != lVar11) {
      do {
        *(undefined4 *)(lVar10 + 8) = 0;
        if (*(int *)(lVar10 + 0xc) < param_2) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(lVar10,param_2);
        }
        TMeshAttributeArrayBase<FVector2D>::Insert(lVar10,param_2 + -1,lVar7 + lVar9 + 0x20);
        lVar10 = lVar10 + 0x10;
      } while (lVar10 != lVar11);
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 1421ea530 FUN_1421ea530 body=602 status=ok
// SIG undefined FUN_1421ea530(void)

void FUN_1421ea530(int *param_1,int param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
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
  
  plVar1 = (longlong *)(param_1 + 2);
  *param_1 = param_2;
  uVar3 = param_1[0xc];
  puVar2 = (uint *)(param_1 + 6);
  local_98 = 0;
  uStack_94 = 1;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar13 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar4 = *puVar13;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar6 = local_98 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar6;
      if (bVar5) goto LAB_1421ea60c;
      uVar4 = puVar13[lVar9 + 1];
    }
    uStack_94 = -uVar4 & uVar4;
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
    uStack_84 = (iStack_80 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_1421ea60c:
      uStack_84 = uVar3;
    }
  }
  uVar4 = param_1[0xc];
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
    puVar13 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar8 = puVar13[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar6 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1421ea6d2;
      uVar8 = puVar13[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar6 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_84 = (uVar12 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_1421ea6d2:
      uStack_84 = uVar3;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar2))) {
    lVar9 = *plVar1;
    lVar7 = (longlong)(int)uStack_5c * 0x60;
    *(int *)(lVar7 + 0x10 + lVar9) = param_2;
    lVar10 = *(longlong *)(lVar7 + 0x18 + lVar9);
    lVar11 = (longlong)*(int *)(lVar7 + 0x20 + lVar9) * 0x10 + lVar10;
    if (lVar10 != lVar11) {
      do {
        *(undefined4 *)(lVar10 + 8) = 0;
        if (*(int *)(lVar10 + 0xc) < param_2) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar10,param_2);
        }
        TMeshAttributeArrayBase<FVector4>::Insert(lVar10,param_2 + -1,lVar7 + lVar9 + 0x30);
        lVar10 = lVar10 + 0x10;
      } while (lVar10 != lVar11);
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 1421ea790 FUN_1421ea790 body=601 status=ok
// SIG undefined FUN_1421ea790(void)

void FUN_1421ea790(int *param_1,int param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
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
  
  plVar1 = (longlong *)(param_1 + 2);
  *param_1 = param_2;
  uVar3 = param_1[0xc];
  puVar2 = (uint *)(param_1 + 6);
  local_98 = 0;
  uStack_94 = 1;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar13 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar4 = *puVar13;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar6 = local_98 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar6;
      if (bVar5) goto LAB_1421ea86c;
      uVar4 = puVar13[lVar9 + 1];
    }
    uStack_94 = -uVar4 & uVar4;
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
    uStack_84 = (iStack_80 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_1421ea86c:
      uStack_84 = uVar3;
    }
  }
  uVar4 = param_1[0xc];
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
    puVar13 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar8 = puVar13[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar6 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1421ea932;
      uVar8 = puVar13[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar6 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_84 = (uVar12 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_1421ea932:
      uStack_84 = uVar3;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar2))) {
    lVar7 = (longlong)(int)uStack_5c * 0x38;
    lVar9 = *plVar1;
    *(int *)(lVar7 + 8 + lVar9) = param_2;
    lVar10 = *(longlong *)(lVar7 + 0x10 + lVar9);
    lVar11 = (longlong)*(int *)(lVar7 + 0x18 + lVar9) * 0x10 + lVar10;
    if (lVar10 != lVar11) {
      do {
        *(undefined4 *)(lVar10 + 8) = 0;
        if (*(int *)(lVar10 + 0xc) < param_2) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
          ResizeTo(lVar10,param_2);
        }
        TMeshAttributeArrayBase<FVector>::Insert(lVar10,param_2 + -1,lVar7 + lVar9 + 0x20);
        lVar10 = lVar10 + 0x10;
      } while (lVar10 != lVar11);
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 1421ea9f0 FUN_1421ea9f0 body=601 status=ok
// SIG undefined FUN_1421ea9f0(void)

void FUN_1421ea9f0(int *param_1,int param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
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
  
  plVar1 = (longlong *)(param_1 + 2);
  *param_1 = param_2;
  uVar3 = param_1[0xc];
  puVar2 = (uint *)(param_1 + 6);
  local_98 = 0;
  uStack_94 = 1;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar13 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar4 = *puVar13;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_98;
      iStack_80 = iStack_80 + 0x20;
      iVar6 = local_98 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar6;
      if (bVar5) goto LAB_1421eaacc;
      uVar4 = puVar13[lVar9 + 1];
    }
    uStack_94 = -uVar4 & uVar4;
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
    uStack_84 = (iStack_80 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_1421eaacc:
      uStack_84 = uVar3;
    }
  }
  uVar4 = param_1[0xc];
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
    puVar13 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar8 = puVar13[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar6 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1421eab92;
      uVar8 = puVar13[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar6 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_84 = (uVar12 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_84) {
LAB_1421eab92:
      uStack_84 = uVar3;
    }
  }
  while ((uStack_5c != uStack_84 || (local_68 != puVar2))) {
    lVar7 = (longlong)(int)uStack_5c * 0x38;
    lVar9 = *plVar1;
    *(int *)(lVar7 + 8 + lVar9) = param_2;
    lVar10 = *(longlong *)(lVar7 + 0x10 + lVar9);
    lVar11 = (longlong)*(int *)(lVar7 + 0x18 + lVar9) * 0x10 + lVar10;
    if (lVar10 != lVar11) {
      do {
        *(undefined4 *)(lVar10 + 8) = 0;
        if (*(int *)(lVar10 + 0xc) < param_2) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(lVar10,param_2);
        }
        TMeshAttributeArrayBase<FName>::Insert(lVar10,param_2 + -1,lVar7 + lVar9 + 0x20);
        lVar10 = lVar10 + 0x10;
      } while (lVar10 != lVar11);
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 1421eac50 FUN_1421eac50 body=601 status=ok
// SIG undefined FUN_1421eac50(void)

void FUN_1421eac50(int *param_1,int param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
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
  
  plVar1 = (longlong *)(param_1 + 2);
  *param_1 = param_2;
  uVar3 = param_1[0xc];
  puVar2 = (uint *)(param_1 + 6);
  local_98 = 0;
  uStack_94 = 1;
  uStack_84 = 0;
  iStack_80 = 0;
  if (uVar3 != 0) {
    puVar13 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
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
      if (bVar6) goto LAB_1421ead2c;
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
LAB_1421ead2c:
      uStack_84 = uVar3;
    }
  }
  uVar4 = param_1[0xc];
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
    puVar13 = *(uint **)(param_1 + 10);
    if (*(uint **)(param_1 + 10) == (uint *)0x0) {
      puVar13 = puVar2;
    }
    uVar8 = puVar13[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1421eadf2;
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
LAB_1421eadf2:
      uStack_84 = uVar3;
    }
  }
  while ((lVar9 = (longlong)(int)uStack_5c, uStack_5c != uStack_84 || (local_68 != puVar2))) {
    lVar5 = *plVar1;
    *(int *)(lVar5 + 8 + lVar9 * 0x30) = param_2;
    lVar10 = *(longlong *)(lVar5 + 0x10 + lVar9 * 0x30);
    lVar11 = (longlong)*(int *)(lVar5 + 0x18 + lVar9 * 0x30) * 0x10 + lVar10;
    if (lVar10 != lVar11) {
      do {
        *(undefined4 *)(lVar10 + 8) = 0;
        if (*(int *)(lVar10 + 0xc) < param_2) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo(lVar10,param_2);
        }
        TMeshAttributeArrayBase<bool>::Insert(lVar10,param_2 + -1,lVar5 + lVar9 * 0x30 + 0x20);
        lVar10 = lVar10 + 0x10;
      } while (lVar10 != lVar11);
    }
    uStack_60 = uStack_60 & ~uStack_6c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
  }
  return;
}



// FUNCTION 1421eaeb0 IsVertexOrphaned body=62 status=ok
// SIG undefined IsVertexOrphaned(void)

ulonglong FMeshDescription::IsVertexOrphaned(longlong *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)((longlong)param_2 * 0x20 + *param_1);
  piVar2 = (int *)*puVar3;
  piVar1 = piVar2 + *(int *)(puVar3 + 1);
  if (piVar2 != piVar1) {
    do {
      if (0 < *(int *)(param_1[7] + 0x10 + (longlong)*piVar2 * 0x18)) {
        return (ulonglong)piVar2 & 0xffffffffffffff00;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1);
  }
  return CONCAT71((int7)((ulonglong)piVar2 >> 8),1);
}



// FUNCTION 1421eaef0 PointInTriangle body=1001 status=ok
// SIG undefined PointInTriangle(void)

undefined8
FMeshDescription::PointInTriangle
          (undefined8 param_1,float *param_2,float *param_3,float *param_4,float *param_5,
          float param_6)

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
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar3 = param_4[2];
  fVar11 = *param_2;
  fVar10 = param_2[2];
  fVar8 = *param_3 - fVar11;
  fVar12 = param_2[1];
  fVar4 = param_3[2] - fVar10;
  fVar6 = param_3[1] - fVar12;
  if ((uint)((fVar4 * (*param_5 - fVar11) - fVar8 * (param_5[2] - fVar10)) *
             ((fVar1 - fVar11) * fVar4 - fVar8 * (fVar3 - fVar10)) +
             (fVar6 * (param_5[2] - fVar10) - fVar4 * (param_5[1] - fVar12)) *
             (fVar6 * (fVar3 - fVar10) - fVar4 * (fVar2 - fVar12)) +
             (fVar8 * (param_5[1] - fVar12) - fVar6 * (*param_5 - fVar11)) *
             (fVar8 * (fVar2 - fVar12) - (fVar1 - fVar11) * fVar6) + param_6) < 0x80000000) {
    fVar4 = param_3[1];
    fVar6 = param_3[2];
    fVar7 = param_4[1] - fVar4;
    fVar8 = *param_3;
    fVar5 = param_4[2] - fVar6;
    fVar9 = *param_4 - fVar8;
    if ((uint)((fVar7 * (param_5[2] - fVar6) - fVar5 * (param_5[1] - fVar4)) *
               (fVar7 * (fVar10 - fVar6) - fVar5 * (fVar12 - fVar4)) +
               (fVar5 * (*param_5 - fVar8) - fVar9 * (param_5[2] - fVar6)) *
               (fVar5 * (fVar11 - fVar8) - fVar9 * (fVar10 - fVar6)) +
               (fVar9 * (param_5[1] - fVar4) - fVar7 * (*param_5 - fVar8)) *
               (fVar9 * (fVar12 - fVar4) - fVar7 * (fVar11 - fVar8)) + param_6) < 0x80000000) {
      fVar12 = fVar12 - fVar2;
      fVar10 = fVar10 - fVar3;
      fVar11 = fVar11 - fVar1;
      if ((uint)((fVar12 * (param_5[2] - fVar3) - fVar10 * (param_5[1] - fVar2)) *
                 (fVar12 * (param_3[2] - fVar3) - fVar10 * (param_3[1] - fVar2)) +
                 (fVar10 * (*param_5 - fVar1) - fVar11 * (param_5[2] - fVar3)) *
                 (fVar10 * (*param_3 - fVar1) - fVar11 * (param_3[2] - fVar3)) +
                 (fVar11 * (param_5[1] - fVar2) - fVar12 * (*param_5 - fVar1)) *
                 (fVar11 * (param_3[1] - fVar2) - fVar12 * (*param_3 - fVar1)) + param_6) <
          0x80000000) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1421eb2e0 Rehash body=534 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FName,TMeshAttributeArraySet<FVector4>_>,TDefaultMapHashableKeyFuncs<FName,TMeshAttributeArraySet<FVector4>,0>,FDefaultSetAllocator>
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
        if (bVar4) goto LAB_1421eb41f;
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
LAB_1421eb41f:
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
        puVar11 = (undefined8 *)((longlong)iStack_1c * 0x60 + *param_1);
        uVar8 = (int)((ulonglong)*puVar11 >> 0x20) + (int)*puVar11 & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar11 + 0x54) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar11 + 10) =
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



// FUNCTION 1421eb500 Serialize body=547 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UDEPRECATED_MeshDescription::Serialize(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_d58 [32];
  longlong local_d38 [4];
  longlong local_d18;
  undefined8 local_d10;
  undefined4 local_d08;
  undefined4 local_d04;
  longlong local_d00 [4];
  longlong local_ce0;
  undefined8 local_cd8;
  undefined4 local_cd0;
  undefined4 local_ccc;
  longlong local_cc8 [4];
  longlong local_ca8;
  undefined8 local_ca0;
  undefined4 local_c98;
  undefined4 local_c94;
  longlong local_c90 [4];
  longlong local_c70;
  undefined8 local_c68;
  undefined4 local_c60;
  undefined4 local_c5c;
  longlong local_c58 [4];
  longlong local_c38;
  undefined8 local_c30;
  undefined4 local_c28;
  undefined4 local_c24;
  undefined1 local_c20 [616];
  undefined1 local_9b8 [616];
  undefined1 local_750 [616];
  undefined1 local_4e8 [616];
  undefined1 local_280 [616];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d58;
  FUN_141763960();
  local_d08 = 0xffffffff;
  local_d38[0] = 0;
  local_d38[1] = 0;
  local_d18 = 0;
  local_d10 = 0;
  local_d04 = 0;
  local_d00[0] = 0;
  local_d00[1] = 0;
  local_ce0 = 0;
  local_cd8 = 0;
  local_ccc = 0;
  local_cc8[0] = 0;
  local_cc8[1] = 0;
  local_ca8 = 0;
  local_ca0 = 0;
  local_c94 = 0;
  local_c90[0] = 0;
  local_c90[1] = 0;
  local_c70 = 0;
  local_c68 = 0;
  local_c5c = 0;
  local_c58[0] = 0;
  local_c58[1] = 0;
  local_c38 = 0;
  local_c30 = 0;
  local_c24 = 0;
  local_cd0 = 0xffffffff;
  local_c98 = 0xffffffff;
  local_c60 = 0xffffffff;
  local_c28 = 0xffffffff;
  UE4Tuple_Private::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TAttributesMap<FVector4,FEdgeID>,TAttributesMap<FVector,FEdgeID>,TAttributesMap<FVector2D,FEdgeID>,TAttributesMap<float,FEdgeID>,TAttributesMap<int,FEdgeID>,TAttributesMap<bool,FEdgeID>,TAttributesMap<FName,FEdgeID>_>
  ::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TAttributesMap<FVector4,FEdgeID>,TAttributesMap<FVector,FEdgeID>,TAttributesMap<FVector2D,FEdgeID>,TAttributesMap<float,FEdgeID>,TAttributesMap<int,FEdgeID>,TAttributesMap<bool,FEdgeID>,TAttributesMap<FName,FEdgeID>_>
            (local_c20);
  UE4Tuple_Private::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TAttributesMap<FVector4,FEdgeID>,TAttributesMap<FVector,FEdgeID>,TAttributesMap<FVector2D,FEdgeID>,TAttributesMap<float,FEdgeID>,TAttributesMap<int,FEdgeID>,TAttributesMap<bool,FEdgeID>,TAttributesMap<FName,FEdgeID>_>
  ::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TAttributesMap<FVector4,FEdgeID>,TAttributesMap<FVector,FEdgeID>,TAttributesMap<FVector2D,FEdgeID>,TAttributesMap<float,FEdgeID>,TAttributesMap<int,FEdgeID>,TAttributesMap<bool,FEdgeID>,TAttributesMap<FName,FEdgeID>_>
            (local_9b8);
  UE4Tuple_Private::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TAttributesMap<FVector4,FEdgeID>,TAttributesMap<FVector,FEdgeID>,TAttributesMap<FVector2D,FEdgeID>,TAttributesMap<float,FEdgeID>,TAttributesMap<int,FEdgeID>,TAttributesMap<bool,FEdgeID>,TAttributesMap<FName,FEdgeID>_>
  ::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TAttributesMap<FVector4,FEdgeID>,TAttributesMap<FVector,FEdgeID>,TAttributesMap<FVector2D,FEdgeID>,TAttributesMap<float,FEdgeID>,TAttributesMap<int,FEdgeID>,TAttributesMap<bool,FEdgeID>,TAttributesMap<FName,FEdgeID>_>
            (local_750);
  UE4Tuple_Private::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TAttributesMap<FVector4,FEdgeID>,TAttributesMap<FVector,FEdgeID>,TAttributesMap<FVector2D,FEdgeID>,TAttributesMap<float,FEdgeID>,TAttributesMap<int,FEdgeID>,TAttributesMap<bool,FEdgeID>,TAttributesMap<FName,FEdgeID>_>
  ::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TAttributesMap<FVector4,FEdgeID>,TAttributesMap<FVector,FEdgeID>,TAttributesMap<FVector2D,FEdgeID>,TAttributesMap<float,FEdgeID>,TAttributesMap<int,FEdgeID>,TAttributesMap<bool,FEdgeID>,TAttributesMap<FName,FEdgeID>_>
            (local_4e8);
  UE4Tuple_Private::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TAttributesMap<FVector4,FEdgeID>,TAttributesMap<FVector,FEdgeID>,TAttributesMap<FVector2D,FEdgeID>,TAttributesMap<float,FEdgeID>,TAttributesMap<int,FEdgeID>,TAttributesMap<bool,FEdgeID>,TAttributesMap<FName,FEdgeID>_>
  ::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TAttributesMap<FVector4,FEdgeID>,TAttributesMap<FVector,FEdgeID>,TAttributesMap<FVector2D,FEdgeID>,TAttributesMap<float,FEdgeID>,TAttributesMap<int,FEdgeID>,TAttributesMap<bool,FEdgeID>,TAttributesMap<FName,FEdgeID>_>
            (local_280);
  FUN_1421e7660(param_2,local_d38);
  UE4Tuple_Private::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TAttributesMap<FVector4,FEdgeID>,TAttributesMap<FVector,FEdgeID>,TAttributesMap<FVector2D,FEdgeID>,TAttributesMap<float,FEdgeID>,TAttributesMap<int,FEdgeID>,TAttributesMap<bool,FEdgeID>,TAttributesMap<FName,FEdgeID>_>
  ::
  ~TTupleStorage<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TAttributesMap<FVector4,FEdgeID>,TAttributesMap<FVector,FEdgeID>,TAttributesMap<FVector2D,FEdgeID>,TAttributesMap<float,FEdgeID>,TAttributesMap<int,FEdgeID>,TAttributesMap<bool,FEdgeID>,TAttributesMap<FName,FEdgeID>_>
            (local_280);
  UE4Tuple_Private::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TAttributesMap<FVector4,FEdgeID>,TAttributesMap<FVector,FEdgeID>,TAttributesMap<FVector2D,FEdgeID>,TAttributesMap<float,FEdgeID>,TAttributesMap<int,FEdgeID>,TAttributesMap<bool,FEdgeID>,TAttributesMap<FName,FEdgeID>_>
  ::
  ~TTupleStorage<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TAttributesMap<FVector4,FEdgeID>,TAttributesMap<FVector,FEdgeID>,TAttributesMap<FVector2D,FEdgeID>,TAttributesMap<float,FEdgeID>,TAttributesMap<int,FEdgeID>,TAttributesMap<bool,FEdgeID>,TAttributesMap<FName,FEdgeID>_>
            (local_4e8);
  UE4Tuple_Private::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TAttributesMap<FVector4,FEdgeID>,TAttributesMap<FVector,FEdgeID>,TAttributesMap<FVector2D,FEdgeID>,TAttributesMap<float,FEdgeID>,TAttributesMap<int,FEdgeID>,TAttributesMap<bool,FEdgeID>,TAttributesMap<FName,FEdgeID>_>
  ::
  ~TTupleStorage<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TAttributesMap<FVector4,FEdgeID>,TAttributesMap<FVector,FEdgeID>,TAttributesMap<FVector2D,FEdgeID>,TAttributesMap<float,FEdgeID>,TAttributesMap<int,FEdgeID>,TAttributesMap<bool,FEdgeID>,TAttributesMap<FName,FEdgeID>_>
            (local_750);
  UE4Tuple_Private::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TAttributesMap<FVector4,FEdgeID>,TAttributesMap<FVector,FEdgeID>,TAttributesMap<FVector2D,FEdgeID>,TAttributesMap<float,FEdgeID>,TAttributesMap<int,FEdgeID>,TAttributesMap<bool,FEdgeID>,TAttributesMap<FName,FEdgeID>_>
  ::
  ~TTupleStorage<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TAttributesMap<FVector4,FEdgeID>,TAttributesMap<FVector,FEdgeID>,TAttributesMap<FVector2D,FEdgeID>,TAttributesMap<float,FEdgeID>,TAttributesMap<int,FEdgeID>,TAttributesMap<bool,FEdgeID>,TAttributesMap<FName,FEdgeID>_>
            (local_9b8);
  UE4Tuple_Private::
  TTupleStorage<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TAttributesMap<FVector4,FEdgeID>,TAttributesMap<FVector,FEdgeID>,TAttributesMap<FVector2D,FEdgeID>,TAttributesMap<float,FEdgeID>,TAttributesMap<int,FEdgeID>,TAttributesMap<bool,FEdgeID>,TAttributesMap<FName,FEdgeID>_>
  ::
  ~TTupleStorage<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6>,TAttributesMap<FVector4,FEdgeID>,TAttributesMap<FVector,FEdgeID>,TAttributesMap<FVector2D,FEdgeID>,TAttributesMap<float,FEdgeID>,TAttributesMap<int,FEdgeID>,TAttributesMap<bool,FEdgeID>,TAttributesMap<FName,FEdgeID>_>
            (local_c20);
  TSparseArray<FMeshPolygonGroup,FDefaultSparseArrayAllocator>::Empty(local_c58,0);
  if (local_c38 != 0) {
    FMemory::Free();
  }
  if (local_c58[0] != 0) {
    FMemory::Free();
  }
  TSparseArray<FMeshPolygon,FDefaultSparseArrayAllocator>::Empty(local_c90,0);
  if (local_c70 != 0) {
    FMemory::Free();
  }
  if (local_c90[0] != 0) {
    FMemory::Free();
  }
  TSparseArray<FRenderingPolygon,FDefaultSparseArrayAllocator>::Empty(local_cc8,0);
  if (local_ca8 != 0) {
    FMemory::Free();
  }
  if (local_cc8[0] != 0) {
    FMemory::Free();
  }
  TSparseArray<FRenderingPolygon,FDefaultSparseArrayAllocator>::Empty(local_d00,0);
  if (local_ce0 != 0) {
    FMemory::Free();
  }
  if (local_d00[0] != 0) {
    FMemory::Free();
  }
  TSparseArray<FMeshVertex,FDefaultSparseArrayAllocator>::Empty(local_d38,0);
  if (local_d18 != 0) {
    FMemory::Free();
  }
  if (local_d38[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421eb730 FUN_1421eb730 body=47 status=ok
// SIG undefined FUN_1421eb730(void)

longlong FUN_1421eb730(void)

{
  if (DAT_146aedc08 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146aedc08,&PTR_s__Script_MeshDescription_144ff08a8);
  }
  return DAT_146aedc08;
}



// FUNCTION 1421eb760 FUN_1421eb760 body=53 status=ok
// SIG undefined FUN_1421eb760(void)

void FUN_1421eb760(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &PTR_FUN_144ff0790;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1421eb7c0 FUN_1421eb7c0 body=47 status=ok
// SIG undefined FUN_1421eb7c0(void)

longlong FUN_1421eb7c0(void)

{
  if (DAT_146aedc68 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aedc68,&PTR_FUN_14652d990);
  }
  return DAT_146aedc68;
}



// FUNCTION 1421eb7f0 FUN_1421eb7f0 body=53 status=ok
// SIG undefined FUN_1421eb7f0(void)

void FUN_1421eb7f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &PTR_FUN_144ff08d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1421eb830 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UDEPRECATED_MeshDescription::StaticClass(void)

{
  if (DAT_146aedc00 == 0) {
    FUN_14171ccd0(L"/Script/MeshDescription",L"MeshDescription",&DAT_146aedc00,FUN_140447710,0x28,
                  0x12000000,0,L"Engine",FUN_1421eb8d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aedc00;
}



// FUNCTION 1421eb8d0 FUN_1421eb8d0 body=41 status=ok
// SIG undefined FUN_1421eb8d0(void)

void FUN_1421eb8d0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144ff04a0;
  }
  return;
}



// FUNCTION 1421eb920 EComputeNTBsOptions_StaticEnum body=85 status=ok
// SIG undefined EComputeNTBsOptions_StaticEnum(void)

void EComputeNTBsOptions_StaticEnum(void)

{
  if (DAT_146aedbc8 == 0) {
    if (DAT_146aedc08 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aedc08,&PTR_s__Script_MeshDescription_144ff08a8)
      ;
    }
    DAT_146aedbc8 = GetStaticEnum(FUN_1421ebe10,DAT_146aedc08,L"EComputeNTBsOptions");
  }
  return;
}



// FUNCTION 1421eb980 Get_Z_Construct_UScriptStruct_FEdgeID_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FEdgeID_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FEdgeID_CRC(void)

{
  return 0x79690567;
}



// FUNCTION 1421eb990 Get_Z_Construct_UScriptStruct_FElementID_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FElementID_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FElementID_CRC(void)

{
  return 0xf9c8268;
}



// FUNCTION 1421eb9a0 Get_Z_Construct_UScriptStruct_FMeshTriangle_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMeshTriangle_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMeshTriangle_CRC(void)

{
  return 0xda40c4fd;
}



// FUNCTION 1421eb9b0 Get_Z_Construct_UScriptStruct_FPolygonGroupID_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FPolygonGroupID_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FPolygonGroupID_CRC(void)

{
  return 0x85207116;
}



// FUNCTION 1421eb9c0 Get_Z_Construct_UScriptStruct_FPolygonID_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FPolygonID_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FPolygonID_CRC(void)

{
  return 0xa3ab344a;
}



// FUNCTION 1421eb9d0 Get_Z_Construct_UScriptStruct_FVertexID_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FVertexID_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FVertexID_CRC(void)

{
  return 0x1a390b66;
}



// FUNCTION 1421eb9e0 Get_Z_Construct_UScriptStruct_FVertexInstanceID_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FVertexInstanceID_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FVertexInstanceID_CRC(void)

{
  return 0xa759cdf3;
}



// FUNCTION 1421eb9f0 Serialize body=112 status=ok
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
  UDEPRECATED_MeshDescription::Serialize(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 1421eba60 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FEdgeID::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aedc30 == 0) {
    if (DAT_146aedc08 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aedc08,&PTR_s__Script_MeshDescription_144ff08a8)
      ;
    }
    lVar1 = DAT_146aedc08;
    uVar2 = Get_Z_Construct_UScriptStruct_FEdgeID_CRC();
    DAT_146aedc30 = GetStaticStruct(FUN_1421ebe40,lVar1,L"EdgeID",4,uVar2);
  }
  return;
}



// FUNCTION 1421ebae0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FElementID::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aedc60 == 0) {
    if (DAT_146aedc08 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aedc08,&PTR_s__Script_MeshDescription_144ff08a8)
      ;
    }
    lVar1 = DAT_146aedc08;
    uVar2 = Get_Z_Construct_UScriptStruct_FElementID_CRC();
    DAT_146aedc60 = GetStaticStruct(FUN_1421eb7c0,lVar1,L"ElementID",4,uVar2);
  }
  return;
}



// FUNCTION 1421ebb60 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMeshTriangle::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aedbe8 == 0) {
    if (DAT_146aedc08 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aedc08,&PTR_s__Script_MeshDescription_144ff08a8)
      ;
    }
    lVar1 = DAT_146aedc08;
    uVar2 = Get_Z_Construct_UScriptStruct_FMeshTriangle_CRC();
    DAT_146aedbe8 = GetStaticStruct(FUN_1421ebe70,lVar1,L"MeshTriangle",0xc,uVar2);
  }
  return;
}



// FUNCTION 1421ebbe0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FPolygonGroupID::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aedc20 == 0) {
    if (DAT_146aedc08 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aedc08,&PTR_s__Script_MeshDescription_144ff08a8)
      ;
    }
    lVar1 = DAT_146aedc08;
    uVar2 = Get_Z_Construct_UScriptStruct_FPolygonGroupID_CRC();
    DAT_146aedc20 = GetStaticStruct(FUN_1421ebea0,lVar1,L"PolygonGroupID",4,uVar2);
  }
  return;
}



// FUNCTION 1421ebc60 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FPolygonID::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aedc10 == 0) {
    if (DAT_146aedc08 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aedc08,&PTR_s__Script_MeshDescription_144ff08a8)
      ;
    }
    lVar1 = DAT_146aedc08;
    uVar2 = Get_Z_Construct_UScriptStruct_FPolygonID_CRC();
    DAT_146aedc10 = GetStaticStruct(FUN_1421ebed0,lVar1,L"PolygonID",4,uVar2);
  }
  return;
}



// FUNCTION 1421ebce0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FVertexID::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aedc50 == 0) {
    if (DAT_146aedc08 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aedc08,&PTR_s__Script_MeshDescription_144ff08a8)
      ;
    }
    lVar1 = DAT_146aedc08;
    uVar2 = Get_Z_Construct_UScriptStruct_FVertexID_CRC();
    DAT_146aedc50 = GetStaticStruct(FUN_1421ebf00,lVar1,L"VertexID",4,uVar2);
  }
  return;
}



// FUNCTION 1421ebd60 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FVertexInstanceID::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aedc40 == 0) {
    if (DAT_146aedc08 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aedc08,&PTR_s__Script_MeshDescription_144ff08a8)
      ;
    }
    lVar1 = DAT_146aedc08;
    uVar2 = Get_Z_Construct_UScriptStruct_FVertexInstanceID_CRC();
    DAT_146aedc40 = GetStaticStruct(FUN_1421ebf30,lVar1,L"VertexInstanceID",4,uVar2);
  }
  return;
}



// FUNCTION 1421ebde0 FUN_1421ebde0 body=47 status=ok
// SIG undefined FUN_1421ebde0(void)

longlong FUN_1421ebde0(void)

{
  if (DAT_146aedbf8 == 0) {
    FUN_141786440(&DAT_146aedbf8,&PTR_StaticClass_144fefff0);
  }
  return DAT_146aedbf8;
}



// FUNCTION 1421ebe10 FUN_1421ebe10 body=47 status=ok
// SIG undefined FUN_1421ebe10(void)

longlong FUN_1421ebe10(void)

{
  if (DAT_146aedbe0 == 0) {
    FUN_1417866a0(&DAT_146aedbe0,&PTR_FUN_14652d650);
  }
  return DAT_146aedbe0;
}



// FUNCTION 1421ebe40 FUN_1421ebe40 body=47 status=ok
// SIG undefined FUN_1421ebe40(void)

longlong FUN_1421ebe40(void)

{
  if (DAT_146aedc38 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aedc38,&PTR_FUN_14652d8a0);
  }
  return DAT_146aedc38;
}



// FUNCTION 1421ebe70 FUN_1421ebe70 body=47 status=ok
// SIG undefined FUN_1421ebe70(void)

longlong FUN_1421ebe70(void)

{
  if (DAT_146aedbf0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aedbf0,&PTR_FUN_14652d760);
  }
  return DAT_146aedbf0;
}



// FUNCTION 1421ebea0 FUN_1421ebea0 body=47 status=ok
// SIG undefined FUN_1421ebea0(void)

longlong FUN_1421ebea0(void)

{
  if (DAT_146aedc28 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aedc28,&PTR_FUN_14652d850);
  }
  return DAT_146aedc28;
}



// FUNCTION 1421ebed0 FUN_1421ebed0 body=47 status=ok
// SIG undefined FUN_1421ebed0(void)

longlong FUN_1421ebed0(void)

{
  if (DAT_146aedc18 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aedc18,&PTR_FUN_14652d7d0);
  }
  return DAT_146aedc18;
}



// FUNCTION 1421ebf00 FUN_1421ebf00 body=47 status=ok
// SIG undefined FUN_1421ebf00(void)

longlong FUN_1421ebf00(void)

{
  if (DAT_146aedc58 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aedc58,&PTR_FUN_14652d940);
  }
  return DAT_146aedc58;
}



// FUNCTION 1421ebf30 FUN_1421ebf30 body=47 status=ok
// SIG undefined FUN_1421ebf30(void)

longlong FUN_1421ebf30(void)

{
  if (DAT_146aedc48 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aedc48,&PTR_FUN_14652d8f0);
  }
  return DAT_146aedc48;
}



// FUNCTION 1421ebf60 Append body=377 status=ok
// SIG undefined Append(void)

void FClothCollisionData::Append(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  void *_Src;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  iVar3 = *(int *)(param_2 + 1);
  iVar8 = (int)param_1[1];
  lVar10 = (longlong)(int)param_1[3];
  if (iVar3 != 0) {
    iVar6 = iVar8;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeTo
                (param_1);
      iVar6 = (int)param_1[1];
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*param_1 + (longlong)iVar6 * 0x14),(void *)*param_2,(longlong)iVar3 * 0x14);
    *(int *)(param_1 + 1) = (int)param_1[1] + iVar3;
  }
  iVar3 = *(int *)(param_2 + 3);
  if (iVar3 != 0) {
    iVar6 = (int)param_1[3];
    if (*(int *)((longlong)param_1 + 0x1c) < iVar6 + iVar3) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 2);
      iVar6 = (int)param_1[3];
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(param_1[2] + (longlong)iVar6 * 8),(void *)param_2[2],(longlong)iVar3 << 3);
    *(int *)(param_1 + 3) = (int)param_1[3] + iVar3;
  }
  if (0 < iVar8) {
    lVar5 = param_1[3];
    for (; lVar10 < (int)lVar5; lVar10 = lVar10 + 1) {
      lVar4 = param_1[2];
      piVar2 = (int *)(lVar4 + lVar10 * 8);
      *piVar2 = *piVar2 + iVar8;
      piVar2 = (int *)(lVar4 + 4 + lVar10 * 8);
      *piVar2 = *piVar2 + iVar8;
    }
  }
  iVar3 = *(int *)(param_2 + 5);
  if (iVar3 != 0) {
    iVar8 = (int)param_1[5];
    if (*(int *)((longlong)param_1 + 0x2c) < iVar8 + iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 4);
      iVar8 = (int)param_1[5];
    }
    puVar9 = (undefined8 *)param_2[4];
    puVar7 = (undefined8 *)(param_1[4] + (longlong)iVar8 * 0x18);
    iVar8 = iVar3;
    do {
      *puVar7 = 0;
      iVar6 = *(int *)(puVar9 + 1);
      _Src = (void *)*puVar9;
      *(int *)(puVar7 + 1) = iVar6;
      if (iVar6 == 0) {
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar7,iVar6,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*puVar7,_Src,(longlong)iVar6 << 4);
      }
      puVar1 = puVar9 + 2;
      puVar9 = puVar9 + 3;
      *(undefined4 *)(puVar7 + 2) = *(undefined4 *)puVar1;
      puVar7 = puVar7 + 3;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    *(int *)(param_1 + 5) = (int)param_1[5] + iVar3;
  }
  return;
}



// FUNCTION 1421ec0e0 Reset body=191 status=ok
// SIG undefined Reset(void)

void FClothCollisionData::Reset(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if ((*(int *)(param_1 + 0xc) < 0) && (*(int *)(param_1 + 0xc) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((*(int *)(param_1 + 0x1c) < 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x10,0);
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  plVar2 = *(longlong **)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar1 < 0) {
    if (iVar3 != 0) {
      do {
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 3;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar1 = *(int *)(param_1 + 0x2c);
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (iVar1 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0x20,0);
    }
  }
  else {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 3;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1421ec1a0 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UClothingAssetBase::StaticClass(void)

{
  if (DAT_146aedc88 == 0) {
    FUN_14171ccd0(L"/Script/ClothingSystemRuntimeInterface",L"ClothingAssetBase",&DAT_146aedc88,
                  FUN_140447710,0x48,0x10000001,0,L"Engine",FUN_1421ec500,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aedc88;
}



// FUNCTION 1421ec240 FUN_1421ec240 body=47 status=ok
// SIG undefined FUN_1421ec240(void)

longlong FUN_1421ec240(void)

{
  if (DAT_146aedcd0 == 0) {
    UE4CodeGen_Private::ConstructUPackage
              (&DAT_146aedcd0,&PTR_s__Script_ClothingSystemRuntimeInt_144ff2548);
  }
  return DAT_146aedcd0;
}



// FUNCTION 1421ec290 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UClothingSimulationFactory::GetPrivateStaticClass(void)

{
  if (DAT_146aedca8 == 0) {
    FUN_14171ccd0(L"/Script/ClothingSystemRuntimeInterface",L"ClothingSimulationFactory",
                  &DAT_146aedca8,FUN_140447710,0x28,0x10000001,0,L"Engine",FUN_1421ec540,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aedca8;
}



// FUNCTION 1421ec340 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UClothingSimulationInteractor::GetPrivateStaticClass(void)

{
  if (DAT_146aedcc8 == 0) {
    FUN_14171ccd0(L"/Script/ClothingSystemRuntimeInterface",L"ClothingSimulationInteractor",
                  &DAT_146aedcc8,StaticRegisterNativesUClothingSimulationInteractor,0x30,0x10000001,
                  0,L"Engine",FUN_1421ec570,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aedcc8;
}



// FUNCTION 1421ec3e0 FUN_1421ec3e0 body=47 status=ok
// SIG undefined FUN_1421ec3e0(void)

longlong FUN_1421ec3e0(void)

{
  if (DAT_146aedcc0 == 0) {
    FUN_141786440(&DAT_146aedcc0,&PTR_GetPrivateStaticClass_144ff0dd0);
  }
  return DAT_146aedcc0;
}



// FUNCTION 1421ec410 FUN_1421ec410 body=47 status=ok
// SIG undefined FUN_1421ec410(void)

longlong FUN_1421ec410(void)

{
  if (DAT_146aedcb0 == 0) {
    FUN_141786a30(&DAT_146aedcb0,&PTR_FUN_14652dad0);
  }
  return DAT_146aedcb0;
}



// FUNCTION 1421ec440 FUN_1421ec440 body=47 status=ok
// SIG undefined FUN_1421ec440(void)

longlong FUN_1421ec440(void)

{
  if (DAT_146aedcb8 == 0) {
    FUN_141786a30(&DAT_146aedcb8,&PTR_FUN_14652db10);
  }
  return DAT_146aedcb8;
}



// FUNCTION 1421ec480 FUN_1421ec480 body=53 status=ok
// SIG undefined FUN_1421ec480(void)

void FUN_1421ec480(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144ff2570;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1421ec4c0 FUN_1421ec4c0 body=53 status=ok
// SIG undefined FUN_1421ec4c0(void)

void FUN_1421ec4c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144ff2688;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1421ec500 FUN_1421ec500 body=59 status=ok
// SIG undefined FUN_1421ec500(void)

void FUN_1421ec500(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144ff1540;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
  }
  return;
}



// FUNCTION 1421ec540 FUN_1421ec540 body=41 status=ok
// SIG undefined FUN_1421ec540(void)

void FUN_1421ec540(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144ff1c90;
  }
  return;
}



// FUNCTION 1421ec570 FUN_1421ec570 body=41 status=ok
// SIG undefined FUN_1421ec570(void)

void FUN_1421ec570(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_144ff2120;
  }
  return;
}



// FUNCTION 1421ec5a0 FUN_1421ec5a0 body=70 status=ok
// SIG undefined FUN_1421ec5a0(void)

longlong FUN_1421ec5a0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1421ec5f0 HasSection body=85 status=ok
// SIG undefined HasSection(void)

undefined1 UMovieSceneTrack::HasSection(void)

{
  LowLevelFatalErrorHandler
            ("Runtime\\ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h",0x5a,
             L"Pure virtual not implemented (%s)",L"UClothingAssetBase::BindToGestaltMesh");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "Runtime\\ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h",0x5a,
             L"Pure virtual not implemented (%s)",L"UClothingAssetBase::BindToGestaltMesh");
  return 0;
}



// FUNCTION 1421ec650 BindToSkeletalMesh body=85 status=ok
// SIG undefined BindToSkeletalMesh(void)

undefined1 UClothingAssetBase::BindToSkeletalMesh(void)

{
  LowLevelFatalErrorHandler
            ("Runtime\\ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h",0x1b,
             L"Pure virtual not implemented (%s)",L"UClothingAssetBase::BindToSkeletalMesh");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "Runtime\\ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h",0x1b,
             L"Pure virtual not implemented (%s)",L"UClothingAssetBase::BindToSkeletalMesh");
  return 0;
}



// FUNCTION 1421ec6b0 NotifyActorChannelAdded body=83 status=ok
// SIG undefined NotifyActorChannelAdded(void)

void UReplicationConnectionDriver::NotifyActorChannelAdded(void)

{
  LowLevelFatalErrorHandler
            ("Runtime\\ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h",0x67,
             L"Pure virtual not implemented (%s)",L"UClothingAssetBase::ClearExtraLodTransitions");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "Runtime\\ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h",0x67,
             L"Pure virtual not implemented (%s)",L"UClothingAssetBase::ClearExtraLodTransitions");
  return;
}



// FUNCTION 1421ec710 OnDeleteVertexInstances body=83 status=ok
// SIG undefined OnDeleteVertexInstances(void)

void UEditableMeshAdapter::OnDeleteVertexInstances(void)

{
  LowLevelFatalErrorHandler
            ("Runtime\\ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h",0x22,
             L"Pure virtual not implemented (%s)",
             L"UClothingSimulationInteractor::ClothConfigUpdated");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "Runtime\\ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h",0x22,
             L"Pure virtual not implemented (%s)",
             L"UClothingSimulationInteractor::ClothConfigUpdated");
  return;
}



// FUNCTION 1421ec790 Copy body=453 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FClothCollisionData>::Copy
          (undefined8 param_1,int *param_2,longlong param_3,int param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  
  if (param_4 != 0) {
    piVar11 = (int *)(param_3 + 0x18);
    do {
      if (param_2 != piVar11 + -6) {
        iVar9 = piVar11[-4];
        pvVar5 = *(void **)(piVar11 + -6);
        param_2[2] = iVar9;
        if ((iVar9 == 0) && (param_2[3] == 0)) {
          param_2[3] = 0;
        }
        else {
          FUN_1405d62d0(param_2,iVar9);
          ::_guard_xfg_dispatch_icall_nop(*(void **)param_2,pvVar5,(longlong)iVar9 * 0x14);
        }
      }
      piVar1 = param_2 + 4;
      if (piVar1 != piVar11 + -2) {
        iVar9 = *piVar11;
        pvVar5 = *(void **)(piVar11 + -2);
        param_2[6] = iVar9;
        if ((iVar9 == 0) && (param_2[7] == 0)) {
          param_2[7] = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(piVar1,iVar9);
          ::_guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar5,(longlong)iVar9 << 3);
        }
      }
      plVar2 = (longlong *)(param_2 + 8);
      if (plVar2 != (longlong *)(piVar11 + 2)) {
        plVar7 = (longlong *)*plVar2;
        for (iVar9 = param_2[10]; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (*plVar7 != 0) {
            FMemory::Free();
          }
          plVar7 = plVar7 + 3;
        }
        iVar9 = piVar11[4];
        lVar6 = *(longlong *)(piVar11 + 2);
        param_2[10] = iVar9;
        if ((iVar9 == 0) && (param_2[0xb] == 0)) {
          param_2[0xb] = 0;
        }
        else {
          TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar2,iVar9);
          puVar8 = (undefined8 *)*plVar2;
          if (iVar9 != 0) {
            puVar10 = (undefined4 *)(lVar6 + 0x10);
            do {
              *puVar8 = 0;
              iVar3 = puVar10[-2];
              pvVar5 = *(void **)(puVar10 + -4);
              *(int *)(puVar8 + 1) = iVar3;
              if (iVar3 == 0) {
                *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
              }
              else {
                TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar8,iVar3,0);
                ::_guard_xfg_dispatch_icall_nop((void *)*puVar8,pvVar5,(longlong)iVar3 << 4);
              }
              uVar4 = *puVar10;
              puVar10 = puVar10 + 6;
              *(undefined4 *)(puVar8 + 2) = uVar4;
              puVar8 = puVar8 + 3;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
        }
      }
      piVar11 = piVar11 + 0xc;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xc;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1421ec960 Copy body=166 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FClothCollisionPrim_Convex>::Copy
          (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      iVar2 = *(int *)(param_3 + 1);
      _Src = (void *)*param_3;
      *(int *)(param_2 + 1) = iVar2;
      if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(param_2,iVar2);
        ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar2 << 4);
      }
    }
    puVar1 = param_3 + 2;
    param_3 = param_3 + 3;
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)puVar1;
    param_2 = param_2 + 3;
  }
  return 1;
}



// FUNCTION 1421eca10 CreateSimulation body=85 status=ok
// SIG undefined CreateSimulation(void)

undefined8 UClothingSimulationFactory::CreateSimulation(void)

{
  LowLevelFatalErrorHandler
            ("Runtime\\ClothingSystemRuntimeInterface/Public/ClothingSimulationFactoryInterface.h",
             0x28,L"Pure virtual not implemented (%s)",
             L"UClothingSimulationFactory::CreateSimulation");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "Runtime\\ClothingSystemRuntimeInterface/Public/ClothingSimulationFactoryInterface.h",
             0x28,L"Pure virtual not implemented (%s)",
             L"UClothingSimulationFactory::CreateSimulation");
  return 0;
}



// FUNCTION 1421eca70 DestroySimulation body=83 status=ok
// SIG undefined DestroySimulation(void)

void UClothingSimulationFactory::DestroySimulation(void)

{
  LowLevelFatalErrorHandler
            ("Runtime\\ClothingSystemRuntimeInterface/Public/ClothingSimulationFactoryInterface.h",
             0x2c,L"Pure virtual not implemented (%s)",
             L"UClothingSimulationFactory::DestroySimulation");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "Runtime\\ClothingSystemRuntimeInterface/Public/ClothingSimulationFactoryInterface.h",
             0x2c,L"Pure virtual not implemented (%s)",
             L"UClothingSimulationFactory::DestroySimulation");
  return;
}



// FUNCTION 1421ecad0 Destruct body=114 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FClothCollisionData>::Destruct
               (undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_2[5];
  plVar1 = (longlong *)param_2[4];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_2[4];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (param_2[2] != 0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421ecb50 GetNumLods body=85 status=ok
// SIG undefined GetNumLods(void)

undefined8 UClothingAssetBase::GetNumLods(void)

{
  LowLevelFatalErrorHandler
            ("Runtime\\ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h",0x42,
             L"Pure virtual not implemented (%s)",L"UClothingAssetBase::GetNumLods()");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "Runtime\\ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h",0x42,
             L"Pure virtual not implemented (%s)",L"UClothingAssetBase::GetNumLods()");
  return 0;
}



// FUNCTION 1421ecbb0 Get_Z_Construct_UScriptStruct_FClothCollisionData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FClothCollisionData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FClothCollisionData_CRC(void)

{
  return 0x7f70fe75;
}



// FUNCTION 1421ecbc0 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_CRC(void)

{
  return 0xb34e5ad3;
}



// FUNCTION 1421ecbd0 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_CRC(void)

{
  return 0xb68568ed;
}



// FUNCTION 1421ecbe0 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_CRC(void)

{
  return 0x861fa301;
}



// FUNCTION 1421ecbf0 InvalidateCachedData body=83 status=ok
// SIG undefined InvalidateCachedData(void)

void UClothingAssetBase::InvalidateCachedData(void)

{
  LowLevelFatalErrorHandler
            ("Runtime\\ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h",0x3a,
             L"Pure virtual not implemented (%s)",L"UClothingAssetBase::InvalidateCachedData()");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "Runtime\\ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h",0x3a,
             L"Pure virtual not implemented (%s)",L"UClothingAssetBase::InvalidateCachedData()");
  return;
}



// FUNCTION 1421ecc50 ValidateFunctionUsage body=85 status=ok
// SIG undefined ValidateFunctionUsage(void)

undefined1 UMaterialFunctionInterface::ValidateFunctionUsage(void)

{
  LowLevelFatalErrorHandler
            ("Runtime\\ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h",0x3e,
             L"Pure virtual not implemented (%s)",L"UClothingAssetBase::IsValidLod()");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "Runtime\\ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h",0x3e,
             L"Pure virtual not implemented (%s)",L"UClothingAssetBase::IsValidLod()");
  return 0;
}



// FUNCTION 1421eccb0 Start body=83 status=ok
// SIG undefined Start(void)

void UTimeSynchronizationSource::Start(void)

{
  LowLevelFatalErrorHandler
            ("Runtime\\ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h",100,
             L"Pure virtual not implemented (%s)",L"UClothingAssetBase::MeshLodRemoved");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "Runtime\\ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h",100,
             L"Pure virtual not implemented (%s)",L"UClothingAssetBase::MeshLodRemoved");
  return;
}



// FUNCTION 1421ecd10 PhysicsAssetUpdated body=83 status=ok
// SIG undefined PhysicsAssetUpdated(void)

void UClothingSimulationInteractor::PhysicsAssetUpdated(void)

{
  LowLevelFatalErrorHandler
            ("Runtime\\ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h",0x1d,
             L"Pure virtual not implemented (%s)",
             L"UClothingSimulationInteractor::PhysicsAssetUpdated");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "Runtime\\ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h",0x1d,
             L"Pure virtual not implemented (%s)",
             L"UClothingSimulationInteractor::PhysicsAssetUpdated");
  return;
}



// FUNCTION 1421ecd70 ReceivedBunch body=83 status=ok
// SIG undefined ReceivedBunch(void)

void UChannel::ReceivedBunch(void)

{
  LowLevelFatalErrorHandler
            ("Runtime\\ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h",0x60,
             L"Pure virtual not implemented (%s)",
             L"UClothingAssetBase::RebuildClothingSectionFixedVerts");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "Runtime\\ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h",0x60,
             L"Pure virtual not implemented (%s)",
             L"UClothingAssetBase::RebuildClothingSectionFixedVerts");
  return;
}



// FUNCTION 1421ecdd0 RefreshBoneMapping body=83 status=ok
// SIG undefined RefreshBoneMapping(void)

void UClothingAssetBase::RefreshBoneMapping(void)

{
  LowLevelFatalErrorHandler
            ("Runtime\\ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h",0x33,
             L"Pure virtual not implemented (%s)",L"UClothingAssetBase::RefreshBoneMapping");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "Runtime\\ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h",0x33,
             L"Pure virtual not implemented (%s)",L"UClothingAssetBase::RefreshBoneMapping");
  return;
}



// FUNCTION 1421ece30 StaticRegisterNativesUClothingSimulationInteractor body=34 status=ok
// SIG undefined StaticRegisterNativesUClothingSimulationInteractor(void)

void UClothingSimulationInteractor::StaticRegisterNativesUClothingSimulationInteractor(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ClothConfigUpdated_144ff2528,2);
  return;
}



// FUNCTION 1421ece60 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FClothCollisionData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aedcd8 == 0) {
    if (DAT_146aedcd0 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146aedcd0,&PTR_s__Script_ClothingSystemRuntimeInt_144ff2548);
    }
    lVar1 = DAT_146aedcd0;
    uVar2 = Get_Z_Construct_UScriptStruct_FClothCollisionData_CRC();
    DAT_146aedcd8 = GetStaticStruct(FUN_1421ed300,lVar1,L"ClothCollisionData",0x30,uVar2);
  }
  return;
}



// FUNCTION 1421ecee0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FClothCollisionPrim_Convex::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aedce8 == 0) {
    if (DAT_146aedcd0 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146aedcd0,&PTR_s__Script_ClothingSystemRuntimeInt_144ff2548);
    }
    lVar1 = DAT_146aedcd0;
    uVar2 = Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_CRC();
    DAT_146aedce8 = GetStaticStruct(FUN_1421ed330,lVar1,L"ClothCollisionPrim_Convex",0x18,uVar2);
  }
  return;
}



// FUNCTION 1421ecf60 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FClothCollisionPrim_Sphere::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aedd08 == 0) {
    if (DAT_146aedcd0 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146aedcd0,&PTR_s__Script_ClothingSystemRuntimeInt_144ff2548);
    }
    lVar1 = DAT_146aedcd0;
    uVar2 = Get_Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_CRC();
    DAT_146aedd08 = GetStaticStruct(FUN_1421ed360,lVar1,L"ClothCollisionPrim_Sphere",0x14,uVar2);
  }
  return;
}



// FUNCTION 1421ecfe0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FClothCollisionPrim_SphereConnection::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aedcf8 == 0) {
    if (DAT_146aedcd0 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146aedcd0,&PTR_s__Script_ClothingSystemRuntimeInt_144ff2548);
    }
    lVar1 = DAT_146aedcd0;
    uVar2 = Get_Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_CRC();
    DAT_146aedcf8 =
         GetStaticStruct(FUN_1421ed390,lVar1,L"ClothCollisionPrim_SphereConnection",8,uVar2);
  }
  return;
}



// FUNCTION 1421ed060 CanPossessObject body=85 status=ok
// SIG undefined CanPossessObject(void)

undefined1 UMovieSceneSequence::CanPossessObject(void)

{
  LowLevelFatalErrorHandler
            ("Runtime\\ClothingSystemRuntimeInterface/Public/ClothingSimulationFactoryInterface.h",
             0x31,L"Pure virtual not implemented (%s)",L"UClothingSimulationFactory::SupportsAsset")
  ;
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "Runtime\\ClothingSystemRuntimeInterface/Public/ClothingSimulationFactoryInterface.h",
             0x31,L"Pure virtual not implemented (%s)",L"UClothingSimulationFactory::SupportsAsset")
  ;
  return 0;
}



// FUNCTION 1421ed0c0 FUN_1421ed0c0 body=85 status=ok
// SIG undefined FUN_1421ed0c0(void)

undefined1 FUN_1421ed0c0(void)

{
  LowLevelFatalErrorHandler
            ("Runtime\\ClothingSystemRuntimeInterface/Public/ClothingSimulationFactoryInterface.h",
             0x36,L"Pure virtual not implemented (%s)",
             L"UClothingSimulationFactory::SupportsRuntimeInteraction");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "Runtime\\ClothingSystemRuntimeInterface/Public/ClothingSimulationFactoryInterface.h",
             0x36,L"Pure virtual not implemented (%s)",
             L"UClothingSimulationFactory::SupportsRuntimeInteraction");
  return 0;
}



// FUNCTION 1421ed120 FUN_1421ed120 body=83 status=ok
// SIG undefined FUN_1421ed120(void)

void FUN_1421ed120(void)

{
  LowLevelFatalErrorHandler
            ("Runtime\\ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h",0x2b,
             L"Pure virtual not implemented (%s)",L"UClothingSimulationInteractor::Sync");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "Runtime\\ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h",0x2b,
             L"Pure virtual not implemented (%s)",L"UClothingSimulationInteractor::Sync");
  return;
}



// FUNCTION 1421ed180 ReceivedBunch body=83 status=ok
// SIG undefined ReceivedBunch(void)

void UChannel::ReceivedBunch(void)

{
  LowLevelFatalErrorHandler
            ("Runtime\\ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h",0x5d,
             L"Pure virtual not implemented (%s)",L"UClothingAssetBase::UnbindFromGestaltMesh");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "Runtime\\ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h",0x5d,
             L"Pure virtual not implemented (%s)",L"UClothingAssetBase::UnbindFromGestaltMesh");
  return;
}



// FUNCTION 1421ed1e0 OnDeleteVertexInstances body=83 status=ok
// SIG undefined OnDeleteVertexInstances(void)

void UEditableMeshAdapter::OnDeleteVertexInstances(void)

{
  LowLevelFatalErrorHandler
            ("Runtime\\ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h",0x22,
             L"Pure virtual not implemented (%s)",L"UClothingAssetBase::UnbindFromSkeletalMesh");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "Runtime\\ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h",0x22,
             L"Pure virtual not implemented (%s)",L"UClothingAssetBase::UnbindFromSkeletalMesh");
  return;
}



// FUNCTION 1421ed240 OnDeleteEdges body=83 status=ok
// SIG undefined OnDeleteEdges(void)

void UEditableMeshAdapter::OnDeleteEdges(void)

{
  LowLevelFatalErrorHandler
            ("Runtime\\ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h",0x2a,
             L"Pure virtual not implemented (%s)",L"UClothingAssetBase::UnbindFromSkeletalMesh");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "Runtime\\ClothingSystemRuntimeInterface/Public/ClothingAssetInterface.h",0x2a,
             L"Pure virtual not implemented (%s)",L"UClothingAssetBase::UnbindFromSkeletalMesh");
  return;
}



// FUNCTION 1421ed2a0 FUN_1421ed2a0 body=47 status=ok
// SIG undefined FUN_1421ed2a0(void)

longlong FUN_1421ed2a0(void)

{
  if (DAT_146aedc80 == 0) {
    FUN_141786440(&DAT_146aedc80,&PTR_StaticClass_144ff0a90);
  }
  return DAT_146aedc80;
}



// FUNCTION 1421ed2d0 FUN_1421ed2d0 body=47 status=ok
// SIG undefined FUN_1421ed2d0(void)

longlong FUN_1421ed2d0(void)

{
  if (DAT_146aedca0 == 0) {
    FUN_141786440(&DAT_146aedca0,&PTR_GetPrivateStaticClass_144ff0bf0);
  }
  return DAT_146aedca0;
}



// FUNCTION 1421ed300 FUN_1421ed300 body=47 status=ok
// SIG undefined FUN_1421ed300(void)

longlong FUN_1421ed300(void)

{
  if (DAT_146aedce0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aedce0,&PTR_FUN_14652dcf0);
  }
  return DAT_146aedce0;
}



// FUNCTION 1421ed330 FUN_1421ed330 body=47 status=ok
// SIG undefined FUN_1421ed330(void)

longlong FUN_1421ed330(void)

{
  if (DAT_146aedcf0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aedcf0,&PTR_FUN_14652ddb0);
  }
  return DAT_146aedcf0;
}



// FUNCTION 1421ed360 FUN_1421ed360 body=47 status=ok
// SIG undefined FUN_1421ed360(void)

longlong FUN_1421ed360(void)

{
  if (DAT_146aedd10 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aedd10,&PTR_FUN_14652df30);
  }
  return DAT_146aedd10;
}



// FUNCTION 1421ed390 FUN_1421ed390 body=47 status=ok
// SIG undefined FUN_1421ed390(void)

longlong FUN_1421ed390(void)

{
  if (DAT_146aedd00 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aedd00,&PTR_FUN_14652de30);
  }
  return DAT_146aedd00;
}



// FUNCTION 1421ed3e0 StartupModule body=49 status=ok
// SIG undefined StartupModule(void)

void IEyeTrackerModule::StartupModule(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_141593110();
  lVar2 = param_1 + 8;
  if (param_1 == 0) {
    lVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001421ed40d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,DAT_146aedd18,lVar2);
  return;
}



// FUNCTION 1421ed420 FUN_1421ed420 body=92 status=ok
// SIG undefined FUN_1421ed420(void)

ulonglong FUN_1421ed420(undefined8 *param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong *plVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  plVar2 = (longlong *)0x0;
  if (DAT_146b17150 != 0) {
    plVar2 = *(longlong **)(DAT_146b17150 + 0xae8);
  }
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001421ed446. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*plVar2 + 8))();
    return uVar1;
  }
  *param_1 = local_38;
  param_1[1] = uStack_30;
  param_1[2] = local_28;
  param_1[3] = uStack_20;
  param_1[4] = local_18 & 0xffffffff;
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1421ed480 FUN_1421ed480 body=99 status=ok
// SIG undefined FUN_1421ed480(void)

ulonglong FUN_1421ed480(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  ulonglong in_RAX;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18 [16];
  
  plVar3 = (longlong *)0x0;
  if (DAT_146b17150 != 0) {
    plVar3 = *(longlong **)(DAT_146b17150 + 0xae8);
  }
  if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001421ed4a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar3 + 0x10))();
    return uVar2;
  }
  *param_1 = local_48;
  param_1[1] = uStack_40;
  param_1[2] = local_38;
  param_1[3] = uStack_30;
  param_1[4] = local_28;
  param_1[5] = uStack_20;
  auVar1._12_4_ = 0;
  auVar1._0_12_ = local_18._0_12_;
  *(undefined1 (*) [16])(param_1 + 6) = auVar1;
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1421ed4f0 FUN_1421ed4f0 body=39 status=ok
// SIG undefined FUN_1421ed4f0(void)

void FUN_1421ed4f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144ff27a0;
    return;
  }
  return;
}



// FUNCTION 1421ed520 FUN_1421ed520 body=51 status=ok
// SIG undefined FUN_1421ed520(void)

bool FUN_1421ed520(void)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)0x0;
  if (DAT_146b17150 != 0) {
    plVar2 = *(longlong **)(DAT_146b17150 + 0xae8);
  }
  if (plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0x18))();
    return cVar1 != '\0';
  }
  return false;
}



// FUNCTION 1421ed560 FUN_1421ed560 body=34 status=ok
// SIG undefined FUN_1421ed560(void)

ulonglong FUN_1421ed560(void)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)0x0;
  if (DAT_146b17150 != 0) {
    plVar2 = *(longlong **)(DAT_146b17150 + 0xae8);
  }
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001421ed57b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*plVar2 + 0x20))();
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1421ed590 FUN_1421ed590 body=34 status=ok
// SIG undefined FUN_1421ed590(void)

void FUN_1421ed590(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x0;
  if (DAT_146b17150 != 0) {
    puVar1 = *(undefined8 **)(DAT_146b17150 + 0xae8);
  }
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001421ed5ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 1421ed5c0 FUN_1421ed5c0 body=47 status=ok
// SIG undefined FUN_1421ed5c0(void)

longlong FUN_1421ed5c0(void)

{
  if (DAT_146aedd30 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146aedd30,&PTR_s__Script_EyeTracker_144ff2f98);
  }
  return DAT_146aedd30;
}



// FUNCTION 1421ed5f0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UEyeTrackerFunctionLibrary::GetPrivateStaticClass(void)

{
  if (DAT_146aedd68 == 0) {
    FUN_14171ccd0(L"/Script/EyeTracker",L"EyeTrackerFunctionLibrary",&DAT_146aedd68,
                  StaticRegisterNativesUEyeTrackerFunctionLibrary,0x28,0x10000000,0,L"Engine",
                  FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146aedd68;
}



// FUNCTION 1421ed6a0 FUN_1421ed6a0 body=47 status=ok
// SIG undefined FUN_1421ed6a0(void)

longlong FUN_1421ed6a0(void)

{
  if (DAT_146aedd60 == 0) {
    FUN_141786440(&DAT_146aedd60,&PTR_GetPrivateStaticClass_144ff2a50);
  }
  return DAT_146aedd60;
}



// FUNCTION 1421ed6d0 FUN_1421ed6d0 body=47 status=ok
// SIG undefined FUN_1421ed6d0(void)

longlong FUN_1421ed6d0(void)

{
  if (DAT_146aedd38 == 0) {
    FUN_141786a30(&DAT_146aedd38,&PTR_FUN_14652e030);
  }
  return DAT_146aedd38;
}



// FUNCTION 1421ed700 FUN_1421ed700 body=47 status=ok
// SIG undefined FUN_1421ed700(void)

longlong FUN_1421ed700(void)

{
  if (DAT_146aedd40 == 0) {
    FUN_141786a30(&DAT_146aedd40,&PTR_FUN_14652e130);
  }
  return DAT_146aedd40;
}



// FUNCTION 1421ed730 FUN_1421ed730 body=47 status=ok
// SIG undefined FUN_1421ed730(void)

longlong FUN_1421ed730(void)

{
  if (DAT_146aedd48 == 0) {
    FUN_141786a30(&DAT_146aedd48,&PTR_FUN_14652e1f0);
  }
  return DAT_146aedd48;
}



// FUNCTION 1421ed760 FUN_1421ed760 body=47 status=ok
// SIG undefined FUN_1421ed760(void)

longlong FUN_1421ed760(void)

{
  if (DAT_146aedd50 == 0) {
    FUN_141786a30(&DAT_146aedd50,&PTR_FUN_14652e280);
  }
  return DAT_146aedd50;
}



// FUNCTION 1421ed790 FUN_1421ed790 body=47 status=ok
// SIG undefined FUN_1421ed790(void)

longlong FUN_1421ed790(void)

{
  if (DAT_146aedd58 == 0) {
    FUN_141786a30(&DAT_146aedd58,&PTR_FUN_14652e300);
  }
  return DAT_146aedd58;
}



// FUNCTION 1421ed7e0 FUN_1421ed7e0 body=53 status=ok
// SIG undefined FUN_1421ed7e0(void)

void FUN_1421ed7e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144ff3070;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1421ed830 EEyeTrackerStatus_StaticEnum body=85 status=ok
// SIG undefined EEyeTrackerStatus_StaticEnum(void)

void EEyeTrackerStatus_StaticEnum(void)

{
  if (DAT_146aedd28 == 0) {
    if (DAT_146aedd30 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aedd30,&PTR_s__Script_EyeTracker_144ff2f98);
    }
    DAT_146aedd28 = GetStaticEnum(FUN_1421ed9e0,DAT_146aedd30,L"EEyeTrackerStatus");
  }
  return;
}



// FUNCTION 1421ed890 Get_Z_Construct_UScriptStruct_FEyeTrackerGazeData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FEyeTrackerGazeData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FEyeTrackerGazeData_CRC(void)

{
  return 0xefcb53a2;
}



// FUNCTION 1421ed8a0 Get_Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_CRC(void)

{
  return 0x9619db04;
}



// FUNCTION 1421ed8b0 StaticRegisterNativesUEyeTrackerFunctionLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUEyeTrackerFunctionLibrary(void)

void UEyeTrackerFunctionLibrary::StaticRegisterNativesUEyeTrackerFunctionLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetGazeData_144ff2ff0,5);
  return;
}



// FUNCTION 1421ed8e0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FEyeTrackerGazeData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aedd90 == 0) {
    if (DAT_146aedd30 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aedd30,&PTR_s__Script_EyeTracker_144ff2f98);
    }
    lVar1 = DAT_146aedd30;
    uVar2 = Get_Z_Construct_UScriptStruct_FEyeTrackerGazeData_CRC();
    DAT_146aedd90 = GetStaticStruct(FUN_1421eda10,lVar1,L"EyeTrackerGazeData",0x28,uVar2);
  }
  return;
}



// FUNCTION 1421ed960 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FEyeTrackerStereoGazeData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aedd80 == 0) {
    if (DAT_146aedd30 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aedd30,&PTR_s__Script_EyeTracker_144ff2f98);
    }
    lVar1 = DAT_146aedd30;
    uVar2 = Get_Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData_CRC();
    DAT_146aedd80 = GetStaticStruct(FUN_1421eda40,lVar1,L"EyeTrackerStereoGazeData",0x40,uVar2);
  }
  return;
}



// FUNCTION 1421ed9e0 FUN_1421ed9e0 body=47 status=ok
// SIG undefined FUN_1421ed9e0(void)

longlong FUN_1421ed9e0(void)

{
  if (DAT_146aedd78 == 0) {
    FUN_1417866a0(&DAT_146aedd78,&PTR_FUN_14652e5e0);
  }
  return DAT_146aedd78;
}



// FUNCTION 1421eda10 FUN_1421eda10 body=47 status=ok
// SIG undefined FUN_1421eda10(void)

longlong FUN_1421eda10(void)

{
  if (DAT_146aedd98 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aedd98,&PTR_FUN_14652e590);
  }
  return DAT_146aedd98;
}



// FUNCTION 1421eda40 FUN_1421eda40 body=47 status=ok
// SIG undefined FUN_1421eda40(void)

longlong FUN_1421eda40(void)

{
  if (DAT_146aedd88 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aedd88,&PTR_FUN_14652e480);
  }
  return DAT_146aedd88;
}



// FUNCTION 1421eda70 FUN_1421eda70 body=146 status=ok
// SIG undefined FUN_1421eda70(void)

void FUN_1421eda70(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 local_38 [36];
  undefined4 local_14;
  
  local_14 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar2 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1421ed420(puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1421edb10 FUN_1421edb10 body=146 status=ok
// SIG undefined FUN_1421edb10(void)

void FUN_1421edb10(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 local_48 [60];
  undefined4 local_c;
  
  local_c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1421ed480(puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1421edbb0 FUN_1421edbb0 body=41 status=ok
// SIG undefined FUN_1421edbb0(void)

void FUN_1421edbb0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1421ed520();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1421edbe0 FUN_1421edbe0 body=41 status=ok
// SIG undefined FUN_1421edbe0(void)

void FUN_1421edbe0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1421ed560();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1421edc10 FUN_1421edc10 body=112 status=ok
// SIG undefined FUN_1421edc10(void)

void FUN_1421edc10(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
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
  FUN_1421ed590(local_res10[0]);
  return;
}



// FUNCTION 1421edc80 Emplace<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_const_&> body=398 status=ok
// SIG undefined Emplace<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_const_&>(void)

int * TSet<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,0>,FDefaultSetAllocator>
      ::Emplace<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_const_&>
                (longlong *param_1,int *param_2,longlong param_3,undefined1 *param_4)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined8 *_Src;
  bool bVar7;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FVariantData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  _Src = local_30;
  *param_2 = local_38[0];
  FString::FString(local_30,param_3);
  _Src[2] = *(undefined8 *)(param_3 + 0x10);
  lVar2 = *(longlong *)(param_3 + 0x18);
  _Src[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    _Src = local_30;
  }
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  bVar7 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8);
    bVar7 = local_res8[0] != -1;
    if (bVar7) {
      _Dst = (void *)(*param_1 + (longlong)local_res8[0] * 0x28);
      UE4Tuple_Private::
      TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>::
      ~TTupleStorage<TIntegerSequence<unsigned_int,0,1>,FString,TSharedPtr<FStringTableEntry,1>_>
                (_Dst);
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1421edde9;
    }
  }
  cVar3 = TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  if (cVar3 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(_Src + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*_Src;
    }
    uVar4 = FUN_140438070(puVar6);
    uVar4 = (int)param_1[9] - 1U & uVar4;
    *(uint *)((longlong)_Src + 0x24) = uVar4;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) = iVar1
    ;
  }
LAB_1421edde9:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 1421ede10 FJsonValueString body=51 status=ok
// SIG undefined FJsonValueString(void)

undefined8 * FJsonValueString::FJsonValueString(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_AsObject_143f605c8;
  FString::FString(param_1 + 2);
  *(undefined4 *)(param_1 + 1) = 2;
  return param_1;
}



// FUNCTION 1421ede50 operator= body=469 status=ok
// SIG undefined operator=(void)

longlong *
TSet<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,0>,FDefaultSetAllocator>
::operator=(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 local_res8 [8];
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  uint local_38;
  undefined4 uStack_34;
  longlong *local_30;
  uint uStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  uint uStack_10;
  undefined4 uStack_c;
  
  if (param_1 != param_2) {
    iVar9 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    FUN_1404af4a0(param_1,iVar9);
    cVar3 = TSet<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FSlateMaterialBrush,0>,0>,FDefaultSetAllocator>
            ::ConditionalRehash(param_1,iVar9);
    uVar7 = 0;
    if ((cVar3 == '\0') && (0 < (int)*(uint *)(param_1 + 9))) {
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
    puStack_20 = (uint *)(param_2 + 2);
    local_58 = 0;
    uStack_54 = 1;
    local_48._4_4_ = 0;
    uStack_40 = 0;
    if (iVar9 != 0) {
      puVar11 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar11 = puStack_20;
      }
      uVar1 = *puVar11;
      uVar8 = uVar7;
      while (uVar1 == 0) {
        iVar4 = (int)uVar8;
        uStack_40 = (int)uVar7 + 0x20;
        uVar7 = (ulonglong)uStack_40;
        local_58 = iVar4 + 1;
        uVar8 = (ulonglong)local_58;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_1421edf8d;
        uVar1 = puVar11[(longlong)iVar4 + 1];
      }
      uStack_54 = -uVar1 & uVar1;
      iVar4 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_48._4_4_ = (uStack_40 - iVar4) + 0x1f;
      if (iVar9 < local_48._4_4_) {
LAB_1421edf8d:
        local_48._4_4_ = iVar9;
      }
    }
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    uStack_10 = uStack_40;
    uStack_c = iStack_3c;
    uStack_28 = local_58;
    uStack_24 = uStack_54;
    iVar4 = local_48._4_4_;
    uStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    bVar2 = local_48._4_4_ < iVar9;
    local_48 = puStack_20;
    local_30 = param_2;
    uStack_40 = 0xffffffff;
    iStack_3c = iVar4;
    if (bVar2) {
      do {
        Emplace<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>_const_&>
                  (param_1,local_res8,*param_2 + (longlong)iStack_3c * 0x28,0);
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return param_1;
}



// FUNCTION 1421ee030 FUN_1421ee030 body=5641 status=ok
// SIG undefined FUN_1421ee030(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1421ee030(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4,
             undefined8 param_5,ulonglong param_6,undefined8 param_7)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  wint_t wVar7;
  wint_t wVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong **pplVar20;
  uint uVar21;
  void *pvVar22;
  wint_t *pwVar23;
  int iVar24;
  wchar_t *_Str;
  ulonglong uVar25;
  undefined2 *puVar26;
  longlong lVar27;
  uint *puVar28;
  ulonglong uVar29;
  undefined4 uVar30;
  double dVar31;
  undefined1 auStack_538 [32];
  undefined8 local_518;
  ulonglong local_510;
  undefined8 local_508;
  undefined1 local_4f8 [8];
  longlong *local_4f0;
  ulonglong local_4e8;
  undefined2 *local_4e0;
  int local_4d8;
  undefined8 local_4d0;
  longlong *local_4c8;
  int local_4c0;
  undefined4 local_4bc;
  longlong *local_4b8;
  int local_4b0;
  undefined4 local_4ac;
  undefined4 local_4a8 [2];
  longlong local_4a0;
  uint local_498;
  uint uStack_494;
  uint *puStack_490;
  undefined4 local_488;
  uint uStack_484;
  uint uStack_480;
  undefined4 uStack_47c;
  longlong *local_478;
  longlong local_470;
  int local_468;
  uint local_464;
  uint *local_460;
  uint local_458;
  uint uStack_454;
  uint local_450;
  longlong *local_448;
  longlong *plStack_440;
  undefined2 *local_438;
  undefined8 local_430;
  undefined2 *local_428;
  int local_420;
  undefined2 *local_418;
  int local_410;
  undefined8 local_408;
  longlong lStack_400;
  int local_3f8;
  int local_3f4;
  undefined1 local_3f0 [8];
  longlong *local_3e8;
  undefined8 uStack_3e0;
  uint *local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  longlong local_3b8;
  undefined2 *local_3b0;
  int local_3a8;
  undefined2 *local_3a0;
  int local_398;
  undefined8 local_390;
  longlong local_388;
  longlong local_380;
  longlong *local_378;
  int local_370;
  undefined1 local_368 [24];
  undefined8 local_350;
  longlong local_348;
  longlong local_340;
  longlong local_338;
  undefined8 local_328;
  longlong lStack_320;
  undefined2 *local_318 [2];
  undefined2 *local_308 [2];
  longlong local_2f8;
  longlong local_2f0;
  undefined1 local_2e8 [8];
  undefined2 *local_2e0 [2];
  undefined2 *local_2d0 [3];
  longlong *local_2b8;
  longlong *plStack_2b0;
  undefined2 *local_2a8 [2];
  undefined1 local_298 [8];
  longlong local_290 [2];
  longlong local_280 [2];
  longlong local_270;
  longlong lStack_268;
  undefined1 local_260 [8];
  longlong *local_258;
  undefined8 uStack_250;
  uint *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 local_230 [24];
  longlong *local_218;
  longlong *local_210;
  longlong *local_208;
  undefined8 local_200;
  longlong lStack_1f8;
  undefined8 local_1f0;
  longlong lStack_1e8;
  int local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  int local_1b0;
  undefined1 local_1a8 [336];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_538;
  local_4d0 = param_5;
  local_4f0 = param_1;
  local_4a0 = param_4;
  if (param_2 == (longlong *)0x0) {
LAB_1421ef4fb:
    puVar10 = (undefined8 *)FJsonValue::AsString(*param_1,local_280);
    if (*(int *)(puVar10 + 1) == 0) {
      puVar26 = &DAT_143f3eda8;
    }
    else {
      puVar26 = (undefined2 *)*puVar10;
    }
    local_510 = DAT_1468b6160;
    local_518 = 0;
    lVar9 = FUN_141759d00(param_2,puVar26,param_3,0);
    local_290[0] = local_280[0];
LAB_1421ef549:
    if (local_290[0] != 0) {
      FMemory::Free();
    }
    if (lVar9 == 0) {
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1);
      return 0;
    }
    goto LAB_1421ee14d;
  }
  lVar9 = UEnumProperty::GetPrivateStaticClass();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
      lVar9 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    if (*(int *)(*param_1 + 8) != 2) {
      param_2 = (longlong *)param_2[0xe];
LAB_1421ee17e:
      lVar9 = *param_2;
      dVar31 = (double)FJsonValue::AsNumber();
      (**(code **)(lVar9 + 0x388))(param_2,param_3,(longlong)dVar31);
      goto LAB_1421ee14d;
    }
    lVar9 = param_2[0xf];
    FJsonValue::AsString(*param_1,&local_428);
    puVar26 = &DAT_143f3eda8;
    if (local_420 != 0) {
      puVar26 = local_428;
    }
    puVar10 = (undefined8 *)FName::FName(local_2e8,puVar26,1);
    lVar9 = UEnum::GetValueByName(lVar9,*puVar10,0);
    if (lVar9 == -1) {
      if (local_428 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1);
      return 0;
    }
    (**(code **)(*(longlong *)param_2[0xe] + 0x388))((longlong *)param_2[0xe],param_3,lVar9);
  }
  else {
    lVar9 = UNumericProperty::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar9 = (**(code **)(*param_2 + 0x380))(param_2);
      if ((lVar9 == 0) || (*(int *)(*param_1 + 8) != 2)) {
        cVar5 = (**(code **)(*param_2 + 0x370))(param_2);
        if (cVar5 != '\0') {
          lVar9 = *param_2;
          uVar30 = FJsonValue::AsNumber(*param_1);
          (**(code **)(lVar9 + 0x398))(param_2,param_3,uVar30);
          goto LAB_1421ee14d;
        }
        cVar5 = (**(code **)(*param_2 + 0x378))(param_2);
        if (cVar5 == '\0') goto LAB_1421ef230;
        if (*(int *)(*param_1 + 8) != 2) goto LAB_1421ee17e;
        puVar10 = (undefined8 *)FJsonValue::AsString(*param_1,local_2e0);
        if (*(int *)(puVar10 + 1) == 0) {
          _Str = L"";
        }
        else {
          _Str = (wchar_t *)*puVar10;
        }
        lVar9 = _wtoi64(_Str);
        (**(code **)(*param_2 + 0x388))(param_2,param_3,lVar9);
        local_428 = local_2e0[0];
      }
      else {
        uVar11 = (**(code **)(*param_2 + 0x380))(param_2);
        FJsonValue::AsString(*param_1,&local_418);
        puVar26 = &DAT_143f3eda8;
        if (local_410 != 0) {
          puVar26 = local_418;
        }
        puVar10 = (undefined8 *)FName::FName(local_260,puVar26,1);
        lVar9 = UEnum::GetValueByName(uVar11,*puVar10,0);
        if (lVar9 == -1) {
          if (local_418 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1);
          return 0;
        }
        (**(code **)(*param_2 + 0x388))(param_2,param_3,lVar9);
        local_428 = local_418;
      }
    }
    else {
      lVar9 = UBoolProperty::GetPrivateStaticClass();
      if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        cVar5 = FJsonValue::AsBool(*param_1);
        uVar18 = (ulonglong)*(byte *)((longlong)param_2 + 0x71);
        if (cVar5 == '\0') {
          *(byte *)(uVar18 + (longlong)param_3) =
               ~*(byte *)((longlong)param_2 + 0x73) & *(byte *)(uVar18 + (longlong)param_3);
        }
        else {
          *(byte *)(uVar18 + (longlong)param_3) =
               ~*(byte *)((longlong)param_2 + 0x73) & *(byte *)(uVar18 + (longlong)param_3) |
               *(byte *)((longlong)param_2 + 0x72);
        }
        goto LAB_1421ee14d;
      }
      lVar9 = UStrProperty::GetPrivateStaticClass();
      if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        uVar11 = FJsonValue::AsString(*param_1,local_2d0);
        FString::operator=(param_3,uVar11);
        local_428 = local_2d0[0];
      }
      else {
        lVar9 = UArrayProperty::GetPrivateStaticClass();
        if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
            != lVar9 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          if (*(int *)(*param_1 + 8) == 5) {
            plVar12 = (longlong *)FJsonValue::AsArray();
            uVar18 = 0;
            local_4c8 = (longlong *)0x0;
            iVar24 = (int)plVar12[1];
            lVar9 = *plVar12;
            local_4c0 = iVar24;
            if (iVar24 == 0) {
              local_4bc = 0;
            }
            else {
              TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_4c8,iVar24,0);
              plVar12 = local_4c8;
              do {
                *plVar12 = *(longlong *)((lVar9 - (longlong)local_4c8) + (longlong)plVar12);
                lVar13 = *(longlong *)((lVar9 - (longlong)local_4c8) + 8 + (longlong)plVar12);
                plVar12[1] = lVar13;
                if (lVar13 != 0) {
                  LOCK();
                  *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
                  UNLOCK();
                }
                plVar12 = plVar12 + 2;
                iVar24 = iVar24 + -1;
              } while (iVar24 != 0);
            }
            iVar4 = local_4c0;
            plVar12 = local_4c8;
            local_380 = param_2[0xe];
            iVar24 = *(int *)(local_380 + 0x34);
            local_378 = param_3;
            local_370 = iVar24;
            FUN_1404845d0(&local_380,local_4c0);
            uVar19 = (ulonglong)iVar4;
            uVar25 = uVar18;
            uVar29 = uVar18;
            local_4e8 = uVar19;
            if (0 < iVar4) {
              do {
                lVar9 = *plVar12;
                if ((lVar9 != 0) && (uVar19 = local_4e8, 1 < *(uint *)(lVar9 + 8))) {
                  uVar19 = uVar18;
                  if ((int)param_3[1] != 0) {
                    uVar19 = (longlong)(int)uVar25 + *param_3;
                  }
                  local_2f0 = plVar12[1];
                  if (local_2f0 != 0) {
                    LOCK();
                    *(int *)(local_2f0 + 8) = *(int *)(local_2f0 + 8) + 1;
                    UNLOCK();
                    iVar24 = local_370;
                  }
                  local_510 = param_6 & 0xfffffffff7fffa7d;
                  local_508 = param_7;
                  local_518 = local_4d0;
                  local_2f8 = lVar9;
                  cVar5 = FUN_1421f0170(&local_2f8,param_2[0xe],uVar19,local_4a0);
                  uVar19 = local_4e8;
                  if (cVar5 == '\0') {
                    pplVar20 = &local_4c8;
LAB_1421ee59b:
                    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
                    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>
                              (pplVar20);
                    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                              (local_4f0);
                    return 0;
                  }
                }
                uVar29 = uVar29 + 1;
                plVar12 = plVar12 + 2;
                uVar25 = (ulonglong)(uint)((int)uVar25 + iVar24);
              } while ((longlong)uVar29 < (longlong)uVar19);
            }
            TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
            ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_4c8);
            param_1 = local_4f0;
            goto LAB_1421ee14d;
          }
          goto LAB_1421ef230;
        }
        lVar9 = UMapProperty::GetPrivateStaticClass();
        if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
            != lVar9 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          if (*(int *)((undefined8 *)*param_1 + 1) != 6) goto LAB_1421ef230;
          plVar12 = (longlong *)(*(code *)**(undefined8 **)*param_1)();
          local_478 = (longlong *)*plVar12;
          local_470 = plVar12[1];
          if (local_470 != 0) {
            LOCK();
            *(int *)(local_470 + 8) = *(int *)(local_470 + 8) + 1;
            UNLOCK();
          }
          local_218 = (longlong *)param_2[0xe];
          plVar12 = (longlong *)0x0;
          local_200 = param_2[0x10];
          lStack_1f8 = param_2[0x11];
          puStack_490 = (uint *)(local_478 + 2);
          local_210 = (longlong *)param_2[0xf];
          local_1f0 = param_2[0x12];
          lStack_1e8 = param_2[0x13];
          local_1e0 = (int)param_2[0x14];
          local_498 = 0;
          uVar2 = *(uint *)(local_478 + 5);
          uStack_494 = 1;
          uStack_484 = 0;
          uStack_480 = 0;
          if (uVar2 != 0) {
            puVar28 = (uint *)local_478[4];
            if ((uint *)local_478[4] == (uint *)0x0) {
              puVar28 = puStack_490;
            }
            uVar21 = *puVar28;
            plVar14 = plVar12;
            plVar15 = plVar12;
            while (uVar21 == 0) {
              iVar24 = (int)plVar14;
              uStack_480 = (int)plVar15 + 0x20;
              plVar15 = (longlong *)(ulonglong)uStack_480;
              local_498 = iVar24 + 1;
              plVar14 = (longlong *)(ulonglong)local_498;
              if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar24)
              goto LAB_1421ee70f;
              uVar21 = puVar28[(longlong)iVar24 + 1];
            }
            uStack_494 = -uVar21 & uVar21;
            local_3f8 = 0x1f;
            if (uStack_494 != 0) {
              for (; uStack_494 >> local_3f8 == 0; local_3f8 = local_3f8 + -1) {
              }
            }
            if (uStack_494 == 0) {
              iVar24 = 0x20;
            }
            else {
              iVar24 = 0x1f - local_3f8;
            }
            uStack_484 = (uStack_480 - iVar24) + 0x1f;
            if ((int)uVar2 < (int)uStack_484) {
LAB_1421ee70f:
              uStack_484 = uVar2;
            }
          }
          local_488 = 0xffffffff;
          uStack_3e0 = CONCAT44(uStack_494,local_498);
          uStack_3d0 = CONCAT44(uStack_484,0xffffffff);
          local_3c8 = CONCAT44(uStack_47c,uStack_480);
          uStack_454 = *(uint *)(local_478 + 5);
          local_468 = (int)uStack_454 >> 5;
          local_458 = -1 << ((byte)uStack_454 & 0x1f);
          local_450 = uStack_454 & 0xffffffe0;
          if (uStack_454 != uVar2) {
            puVar28 = (uint *)local_478[4];
            if ((uint *)local_478[4] == (uint *)0x0) {
              puVar28 = puStack_490;
            }
            uVar21 = puVar28[local_468] & local_458;
            while (uVar21 == 0) {
              lVar9 = (longlong)local_468;
              local_450 = local_450 + 0x20;
              iVar24 = local_468 + 1;
              bVar3 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_468;
              local_468 = iVar24;
              if (bVar3) goto LAB_1421ee801;
              uVar21 = puVar28[lVar9 + 1];
              local_458 = 0xffffffff;
            }
            local_464 = -uVar21 & uVar21;
            local_3f4 = 0x1f;
            if (local_464 != 0) {
              for (; local_464 >> local_3f4 == 0; local_3f4 = local_3f4 + -1) {
              }
            }
            if (local_464 == 0) {
              iVar24 = 0x20;
            }
            else {
              iVar24 = 0x1f - local_3f4;
            }
            uStack_454 = (local_450 - iVar24) + 0x1f;
            if ((int)uVar2 < (int)uStack_454) {
LAB_1421ee801:
              uStack_454 = uVar2;
            }
          }
          local_4e8 = (ulonglong)uStack_454;
          local_460 = puStack_490;
          local_3e8 = local_478;
          local_3d8 = puStack_490;
          local_258 = local_478;
          uStack_250 = uStack_3e0;
          puStack_248 = puStack_490;
          uStack_240 = uStack_3d0;
          uStack_238 = local_3c8;
          local_208 = param_3;
          while( true ) {
            if ((uStack_3d0._4_4_ == (int)local_4e8) && (local_3d8 == local_460)) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
            if ((bVar3) && (local_3e8 == local_478)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (!bVar3) break;
            lVar9 = *local_3e8 + (longlong)uStack_3d0._4_4_ * 0x28;
            lVar13 = *(longlong *)(*local_3e8 + 0x10 + (longlong)uStack_3d0._4_4_ * 0x28);
            if ((lVar13 != 0) && (1 < *(uint *)(lVar13 + 8))) {
              iVar24 = FScriptSparseArray::AddUninitialized(local_208);
              uVar2 = *(uint *)(local_210 + 7);
              uVar21 = *(uint *)(local_218 + 7);
              pvVar22 = (void *)((longlong)(local_1e0 * iVar24) + *local_208);
              if (((uVar21 >> 9 & 1) == 0) && ((uVar2 >> 9 & 1) == 0)) {
LAB_1421ee8df:
                if ((*(uint *)(local_218 + 7) >> 9 & 1) == 0) {
                  (**(code **)(*local_218 + 0x330))(local_218);
                }
                else {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)((longlong)*(int *)((longlong)local_218 + 0x44) +
                                     (longlong)pvVar22),0,
                             (longlong)(*(int *)((longlong)local_218 + 0x34) * (int)local_218[6]));
                }
              }
              else {
                _guard_xfg_dispatch_icall_nop(pvVar22,0,(longlong)local_1f0._4_4_);
                if ((uVar21 >> 9 & 1) == 0) goto LAB_1421ee8df;
              }
              if ((uVar2 >> 9 & 1) == 0) {
                if ((*(uint *)(local_210 + 7) >> 9 & 1) == 0) {
                  (**(code **)(*local_210 + 0x330))
                            (local_210,
                             (longlong)*(int *)((longlong)local_210 + 0x44) + (longlong)pvVar22);
                }
                else {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)((longlong)*(int *)((longlong)local_210 + 0x44) +
                                     (longlong)pvVar22),0,
                             (longlong)(*(int *)((longlong)local_210 + 0x34) * (int)local_210[6]));
                }
              }
              lVar13 = operator_new(0x20);
              plVar14 = plVar12;
              if (lVar13 != 0) {
                plVar14 = (longlong *)FJsonValueString::FJsonValueString(lVar13,lVar9);
              }
              plVar15 = (longlong *)operator_new(0x18);
              plStack_440 = plVar12;
              if (plVar15 != (longlong *)0x0) {
                *(undefined4 *)(plVar15 + 1) = 1;
                *plVar15 = (longlong)&PTR_FUN_143f60d18;
                *(undefined4 *)((longlong)plVar15 + 0xc) = 1;
                plVar15[2] = (longlong)plVar14;
                plStack_440 = plVar15;
              }
              local_448 = plVar14;
              SharedPointerInternals::EnableSharedFromThis(&local_448,plVar14,plVar14);
              lVar13 = local_4a0;
              plVar14 = plVar12;
              if ((int)local_208[1] != *(int *)((longlong)local_208 + 0x34)) {
                plVar14 = (longlong *)
                          ((longlong)(local_1e0 * iVar24) + (longlong)(int)local_200 + *local_208);
              }
              local_2b8 = local_448;
              plStack_2b0 = plStack_440;
              if (plStack_440 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_440 + 1) = (int)plStack_440[1] + 1;
                UNLOCK();
              }
              local_508 = param_7;
              local_518 = local_4d0;
              local_510 = param_6 & 0xfffffffff7fffa7d;
              cVar5 = FUN_1421f0170(&local_2b8,param_2[0xe],plVar14,local_4a0);
              plVar14 = plVar12;
              if ((int)local_208[1] != *(int *)((longlong)local_208 + 0x34)) {
                plVar14 = (longlong *)
                          ((longlong)(local_1e0 * iVar24) + (longlong)local_200._4_4_ + *local_208);
              }
              local_350 = *(undefined8 *)(lVar9 + 0x10);
              local_348 = *(longlong *)(lVar9 + 0x18);
              if (local_348 != 0) {
                LOCK();
                *(int *)(local_348 + 8) = *(int *)(local_348 + 8) + 1;
                UNLOCK();
              }
              local_508 = param_7;
              local_518 = local_4d0;
              local_510 = param_6 & 0xfffffffff7fffa7d;
              cVar6 = FUN_1421f0170(&local_350,param_2[0xf],plVar14,lVar13);
              plVar14 = plStack_440;
              if ((cVar5 == '\0') || (cVar6 == '\0')) {
                if (plStack_440 != (longlong *)0x0) {
                  LOCK();
                  plVar12 = plStack_440 + 1;
                  lVar9 = *plVar12;
                  *(int *)plVar12 = (int)*plVar12 + -1;
                  UNLOCK();
                  if ((int)lVar9 == 1) {
                    (**(code **)*plStack_440)(plStack_440);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar14 + 0xc);
                    iVar24 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar24 == 1) {
                      (**(code **)(*plVar14 + 8))(plVar14,1);
                    }
                  }
                }
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>
                          (&local_478);
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_4f0)
                ;
                return 0;
              }
              if (plStack_440 != (longlong *)0x0) {
                LOCK();
                plVar15 = plStack_440 + 1;
                lVar9 = *plVar15;
                *(int *)plVar15 = (int)*plVar15 + -1;
                UNLOCK();
                if ((int)lVar9 == 1) {
                  (**(code **)*plStack_440)(plStack_440);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar14 + 0xc);
                  iVar24 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar24 == 1) {
                    (**(code **)(*plVar14 + 8))(plVar14,1);
                  }
                }
              }
            }
            uStack_3d0 = CONCAT44(uStack_3d0._4_4_,(uint)uStack_3d0 & ~uStack_3e0._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_3e0);
          }
          FScriptMapHelper::Rehash(&local_218);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_478);
          param_1 = local_4f0;
          goto LAB_1421ee14d;
        }
        cVar5 = UObjectBaseUtility::IsA<USetProperty>(param_2);
        if (cVar5 != '\0') {
          if (*(int *)(*param_1 + 8) != 5) goto LAB_1421ef230;
          plVar12 = (longlong *)FJsonValue::AsArray();
          local_4b8 = (longlong *)0x0;
          iVar24 = (int)plVar12[1];
          lVar9 = *plVar12;
          local_4b0 = iVar24;
          if (iVar24 == 0) {
            local_4ac = 0;
          }
          else {
            TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_4b8,iVar24,0);
            plVar12 = local_4b8;
            do {
              *plVar12 = *(longlong *)((lVar9 - (longlong)local_4b8) + (longlong)plVar12);
              lVar13 = *(longlong *)((lVar9 - (longlong)local_4b8) + 8 + (longlong)plVar12);
              plVar12[1] = lVar13;
              if (lVar13 != 0) {
                LOCK();
                *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
                UNLOCK();
              }
              plVar12 = plVar12 + 2;
              iVar24 = iVar24 + -1;
            } while (iVar24 != 0);
          }
          local_1d8 = (longlong *)param_2[0xe];
          local_1b8 = param_2[0x11];
          local_1b0 = (int)param_2[0x12];
          lVar13 = (longlong)local_4b0;
          local_1c8 = param_2[0xf];
          uStack_1c0 = param_2[0x10];
          plVar12 = local_4b8;
          lVar9 = 0;
          local_1d0 = param_3;
          if (0 < local_4b0) {
            do {
              if ((*plVar12 != 0) && (1 < *(uint *)(*plVar12 + 8))) {
                iVar24 = FScriptSparseArray::AddUninitialized(param_3,&local_1b8);
                pvVar22 = (void *)((longlong)(iVar24 * local_1b0) + *local_1d0);
                if (((ulonglong)local_1d8[7] >> 9 & 1) == 0) {
                  if (((ulonglong)local_1d8[7] >> 9 & 1) == 0) {
                    (**(code **)(*local_1d8 + 0x330))
                              (local_1d8,
                               (longlong)*(int *)((longlong)local_1d8 + 0x44) + (longlong)pvVar22);
                  }
                  else {
                    _guard_xfg_dispatch_icall_nop
                              ((void *)((longlong)*(int *)((longlong)local_1d8 + 0x44) +
                                       (longlong)pvVar22),0,
                               (longlong)(*(int *)((longlong)local_1d8 + 0x34) * (int)local_1d8[6]))
                    ;
                  }
                }
                else {
                  _guard_xfg_dispatch_icall_nop(pvVar22,0,(longlong)uStack_1c0._4_4_);
                }
                lVar27 = 0;
                if ((int)local_1d0[1] != *(int *)((longlong)local_1d0 + 0x34)) {
                  lVar27 = (longlong)(iVar24 * local_1b0) + *local_1d0;
                }
                local_340 = *plVar12;
                local_338 = plVar12[1];
                if (local_338 != 0) {
                  LOCK();
                  *(int *)(local_338 + 8) = *(int *)(local_338 + 8) + 1;
                  UNLOCK();
                }
                local_510 = param_6 & 0xfffffffff7fffa7d;
                local_508 = param_7;
                local_518 = local_4d0;
                cVar5 = FUN_1421f0170(&local_340,param_2[0xe],lVar27,local_4a0);
                param_3 = local_1d0;
                if (cVar5 == '\0') {
                  pplVar20 = &local_4b8;
                  goto LAB_1421ee59b;
                }
              }
              lVar9 = lVar9 + 1;
              plVar12 = plVar12 + 2;
            } while (lVar9 < lVar13);
          }
          FScriptSetHelper::Rehash(&local_1d8);
          TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
          ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_4b8);
          param_1 = local_4f0;
          goto LAB_1421ee14d;
        }
        cVar5 = UObjectBaseUtility::IsA<UTextProperty>(param_2);
        if (cVar5 != '\0') {
          puVar10 = (undefined8 *)*param_1;
          if (*(int *)(puVar10 + 1) != 2) {
            if (*(int *)(puVar10 + 1) != 6) goto LAB_1421ef230;
            puVar10 = (undefined8 *)(**(code **)*puVar10)();
            lVar9 = puVar10[1];
            local_408 = *puVar10;
            if (lVar9 != 0) {
              LOCK();
              *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
              UNLOCK();
            }
            lStack_400 = lVar9;
            FText::FText(local_368);
            local_328 = local_408;
            lStack_320 = lStack_400;
            if (lVar9 != 0) {
              LOCK();
              *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
              UNLOCK();
            }
            cVar5 = FJsonObjectConverter::GetTextFromObject(&local_328,local_368);
            TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_328);
            if (cVar5 == '\0') {
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_368);
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_408);
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1);
              return 0;
            }
            FText::operator=(param_3,local_368);
            TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_368);
            TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_408);
            goto LAB_1421ee14d;
          }
          uVar11 = FJsonValue::AsString(puVar10,local_2a8);
          uVar11 = FText::FromString(local_230,uVar11);
          FText::operator=(param_3,uVar11);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_230);
          local_428 = local_2a8[0];
          goto LAB_1421ee143;
        }
        cVar5 = UObjectBaseUtility::IsA<UStructProperty>(param_2);
        if (cVar5 == '\0') {
          cVar5 = UObjectBaseUtility::IsA<UObjectProperty>(param_2);
          if (cVar5 == '\0') goto LAB_1421ef4fb;
          iVar24 = *(int *)(*param_1 + 8);
          if (iVar24 == 6) {
            uVar11 = GetTransientPackage();
            lVar9 = UObject::GetPrivateStaticClass();
            for (; (uVar17 = uVar11, param_4 != 0 && (uVar17 = param_5, param_4 != lVar9));
                param_4 = *(longlong *)(param_4 + 0x30)) {
            }
            lVar9 = param_2[0xe];
            local_508 = 0;
            local_510 = local_510 & 0xffffffffffffff00;
            local_518 = (ulonglong)local_518._4_4_ << 0x20;
            local_430 = 0;
            uVar11 = FUN_141797e10(lVar9,uVar17,0,0);
            local_510 = 0;
            local_518 = local_518 & 0xffffffffffffff00;
            uVar17 = FUN_141781390(local_1a8,uVar11,*(undefined8 *)(lVar9 + 0xf8),0);
            (**(code **)(lVar9 + 0x98))(uVar17);
            FUN_141781fc0(local_1a8);
            (**(code **)(*param_2 + 0x380))(param_2,param_3,uVar11);
            puVar10 = (undefined8 *)(*(code *)**(undefined8 **)*param_1)();
            local_388 = puVar10[1];
            local_390 = *puVar10;
            if (local_388 != 0) {
              LOCK();
              *(int *)(local_388 + 8) = *(int *)(local_388 + 8) + 1;
              UNLOCK();
            }
            local_510 = param_6 & 0xfffffffff7fffa7d;
            local_508 = param_7;
            local_518 = uVar11;
            cVar5 = FUN_1421efc20(local_390,param_2[0xe],uVar11,param_2[0xe]);
            TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_390);
            if (cVar5 == '\0') {
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1);
              return 0;
            }
            goto LAB_1421ee14d;
          }
          if (iVar24 != 2) goto LAB_1421ee14d;
          puVar10 = (undefined8 *)FJsonValue::AsString(*param_1,local_290);
          if (*(int *)(puVar10 + 1) == 0) {
            puVar26 = &DAT_143f3eda8;
          }
          else {
            puVar26 = (undefined2 *)*puVar10;
          }
          local_510 = DAT_1468b6160;
          local_518 = 0;
          lVar9 = FUN_141759d00(param_2,puVar26,param_3,0);
          goto LAB_1421ef549;
        }
        lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if ((*(int *)(lVar9 + 0x38) < DAT_146aeddb0) &&
           (_Init_thread_header(&DAT_146aeddb0), DAT_146aeddb0 == -1)) {
          FName::FName(&DAT_146aedda8,L"DateTime",1);
          _Init_thread_footer(&DAT_146aeddb0);
        }
        if ((*(int *)(lVar9 + 0x38) < DAT_146aeddc0) &&
           (_Init_thread_header(&DAT_146aeddc0), DAT_146aeddc0 == -1)) {
          FName::FName(&DAT_146aeddb8,L"Color",1);
          _Init_thread_footer(&DAT_146aeddc0);
        }
        if ((*(int *)(lVar9 + 0x38) < DAT_146aeddd0) &&
           (_Init_thread_header(&DAT_146aeddd0), DAT_146aeddd0 == -1)) {
          FName::FName(&DAT_146aeddc8,L"LinearColor",1);
          _Init_thread_footer(&DAT_146aeddd0);
        }
        puVar10 = (undefined8 *)*param_1;
        if (*(int *)(puVar10 + 1) == 6) {
          puVar10 = (undefined8 *)(**(code **)*puVar10)(puVar10);
          local_3b8 = puVar10[1];
          local_3c0 = *puVar10;
          if (local_3b8 != 0) {
            LOCK();
            *(int *)(local_3b8 + 8) = *(int *)(local_3b8 + 8) + 1;
            UNLOCK();
          }
          local_510 = param_6 & 0xfffffffff7fffa7d;
          local_508 = param_7;
          local_518 = param_5;
          cVar5 = FUN_1421efc20(local_3c0,param_2[0xe],param_3,param_4);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_3c0);
          if (cVar5 == '\0') {
            TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1);
            return 0;
          }
          goto LAB_1421ee14d;
        }
        if (*(int *)(puVar10 + 1) == 2) {
          if (*(longlong *)(param_2[0xe] + 0x18) == DAT_146aeddc8) {
            FJsonValue::AsString(puVar10,local_318);
            puVar16 = (undefined4 *)FUN_14162a9b0(local_3f0,local_318);
            local_4a8[0] = *puVar16;
            FLinearColor::FLinearColor(&local_270,local_4a8);
            *param_3 = local_270;
            param_3[1] = lStack_268;
            local_428 = local_318[0];
          }
          else if (*(longlong *)(param_2[0xe] + 0x18) == DAT_146aeddb8) {
            FJsonValue::AsString(puVar10,local_308);
            puVar16 = (undefined4 *)FUN_14162a9b0(local_4f8,local_308);
            *(undefined4 *)param_3 = *puVar16;
            local_428 = local_308[0];
          }
          else {
            if (*(longlong *)(param_2[0xe] + 0x18) == DAT_146aedda8) {
              FJsonValue::AsString(puVar10,&local_4e0);
              pwVar23 = &DAT_144ff4670;
              puVar26 = &DAT_143f3eda8;
              if (local_4d8 != 0) {
                puVar26 = local_4e0;
              }
              do {
                wVar7 = *(wint_t *)((longlong)pwVar23 + (longlong)(puVar26 + -0xa27fa338));
                if ((wVar7 == 0) && (*pwVar23 == 0)) goto LAB_1421ef102;
                if (wVar7 != *pwVar23) {
                  wVar7 = towlower(wVar7);
                  wVar8 = towlower(*pwVar23);
                  if (wVar7 != wVar8) goto LAB_1421ef0f7;
                }
                pwVar23 = pwVar23 + 1;
              } while( true );
            }
            if ((*(longlong **)(param_2[0xe] + 0x90) == (longlong *)0x0) ||
               (cVar5 = (**(code **)(**(longlong **)(param_2[0xe] + 0x90) + 200))(), cVar5 == '\0'))
            goto LAB_1421ef300;
            plVar12 = *(longlong **)(param_2[0xe] + 0x90);
            FJsonValue::AsString(*param_1,&local_3b0);
            local_438 = &DAT_143f3eda8;
            if (local_3a8 != 0) {
              local_438 = local_3b0;
            }
            local_510 = DAT_1468b6160;
            local_518 = 0;
            cVar5 = (**(code **)(*plVar12 + 0xd0))(plVar12,&local_438,param_3,0);
            local_428 = local_3b0;
            if (cVar5 == '\0') {
              local_510 = DAT_1468b6160;
              local_518 = 0;
              FUN_141759d00(param_2,local_438,param_3,0);
              local_428 = local_3b0;
            }
          }
        }
        else {
LAB_1421ef300:
          if (*(int *)(*param_1 + 8) != 2) {
LAB_1421ef230:
            TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1);
            return 0;
          }
          FJsonValue::AsString(*param_1,&local_3a0);
          puVar26 = &DAT_143f3eda8;
          if (local_398 != 0) {
            puVar26 = local_3a0;
          }
          local_510 = DAT_1468b6160;
          local_518 = 0;
          FUN_141759d00(param_2,puVar26,param_3,0);
          local_428 = local_3a0;
        }
      }
    }
  }
  goto LAB_1421ee143;
LAB_1421ef0f7:
  if (wVar7 != wVar8) {
    pwVar23 = &DAT_144ff4678;
    puVar26 = &DAT_143f3eda8;
    if (local_4d8 != 0) {
      puVar26 = local_4e0;
    }
    do {
      wVar7 = *(wint_t *)((longlong)pwVar23 + (longlong)(puVar26 + -0xa27fa33c));
      if ((wVar7 == 0) && (*pwVar23 == 0)) goto LAB_1421ef16d;
      if (wVar7 != *pwVar23) {
        wVar7 = towlower(wVar7);
        wVar8 = towlower(*pwVar23);
        if (wVar7 != wVar8) goto LAB_1421ef162;
      }
      pwVar23 = pwVar23 + 1;
    } while( true );
  }
LAB_1421ef102:
  *param_3 = 0;
  local_428 = local_4e0;
  goto LAB_1421ee143;
LAB_1421ef1ee:
  puVar26 = &DAT_143f3eda8;
  if (local_4d8 != 0) {
    puVar26 = local_4e0;
  }
  cVar5 = FDateTime::ParseIso8601(puVar26,param_3);
  local_428 = local_4e0;
  if ((cVar5 == '\0') &&
     (cVar5 = FDateTime::Parse(&local_4e0,param_3), local_428 = local_4e0, cVar5 == '\0')) {
    if (local_4e0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    goto LAB_1421ef230;
  }
  goto LAB_1421ee143;
LAB_1421ef162:
  if (wVar7 != wVar8) {
    pwVar23 = &DAT_144ff4680;
    puVar26 = &DAT_143f3eda8;
    if (local_4d8 != 0) {
      puVar26 = local_4e0;
    }
    do {
      wVar7 = *(wint_t *)((longlong)pwVar23 + (longlong)(puVar26 + -0xa27fa340));
      if ((wVar7 == 0) && (*pwVar23 == 0)) {
        plVar12 = (longlong *)FDateTime::UtcNow(local_298);
        *param_3 = *plVar12;
        local_428 = local_4e0;
        goto LAB_1421ee143;
      }
      if (wVar7 != *pwVar23) {
        wVar7 = towlower(wVar7);
        wVar8 = towlower(*pwVar23);
        if (wVar7 != wVar8) goto LAB_1421ef1ee;
      }
      pwVar23 = pwVar23 + 1;
    } while( true );
  }
LAB_1421ef16d:
  *param_3 = 0x2bca2875f4373fff;
  local_428 = local_4e0;
LAB_1421ee143:
  if (local_428 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_1421ee14d:
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1);
  return 1;
}



// FUNCTION 1421ef640 FUN_1421ef640 body=369 status=ok
// SIG undefined FUN_1421ef640(void)

bool FUN_1421ef640(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  longlong *local_38;
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_2 + 8) = 0;
    if (*(int *)(param_2 + 0xc) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0);
    }
    return true;
  }
  FUN_1404ae740(local_28,param_2,0);
  local_18 = *(undefined8 *)(param_1 + 0x10);
  plVar5 = *(longlong **)(param_1 + 0x18);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_10 = plVar5;
  local_30 = (longlong *)FUN_1404a9830(&local_18);
  local_38 = local_30 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_38,local_38,local_38);
  cVar7 = FUN_1406c30a0(&local_38,local_28,1);
  plVar3 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_30)(local_30);
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
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  plVar5 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return cVar7 != '\0';
}



// FUNCTION 1421ef7c0 GetTextFromObject body=392 status=ok
// SIG undefined GetTextFromObject(void)

undefined8 FJsonObjectConverter::GetTextFromObject(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong local_58;
  undefined8 local_50;
  longlong *local_48;
  int local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  lVar5 = FInternationalization::Get();
  plVar3 = *(longlong **)(lVar5 + 0x30);
  uVar6 = *(undefined8 *)(lVar5 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  FCulture::GetPrioritizedParentCultureNames(uVar6,&local_48);
  plVar8 = local_48 + (longlong)local_40 * 2;
  local_58 = 0;
  local_50 = 0;
  plVar7 = local_48;
  do {
    if (plVar7 == plVar8) {
      uVar6 = 0;
LAB_1421ef859:
      plVar7 = local_48;
      if (local_58 != 0) {
        FMemory::Free();
        plVar7 = local_48;
      }
      for (; local_40 != 0; local_40 = local_40 + -1) {
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 2;
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar3 + 1;
        lVar5 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
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
      return uVar6;
    }
    cVar4 = FUN_1416b40a0(*param_1,plVar7,&local_58);
    if (cVar4 != '\0') {
      uVar6 = FText::FromString(local_38,&local_58);
      FText::operator=(param_2,uVar6);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_30 + 1;
        lVar5 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      uVar6 = 1;
      goto LAB_1421ef859;
    }
    plVar7 = plVar7 + 2;
  } while( true );
}



// FUNCTION 1421ef950 FUN_1421ef950 body=660 status=ok
// SIG undefined FUN_1421ef950(void)

undefined8
FUN_1421ef950(undefined2 **param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  short *_Src;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  int iVar10;
  int local_res10 [2];
  undefined2 *local_58;
  int local_50;
  int local_4c;
  undefined2 *local_48;
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  iVar10 = 0;
  _Src = (short *)*param_2;
  local_58 = (undefined2 *)0x0;
  lVar7 = -1;
  local_50 = 0;
  local_4c = 0;
  if (*_Src == 0x22) {
    local_res10[0] = 0;
    cVar4 = FParse::QuotedString(_Src,&local_58,local_res10);
    if (cVar4 == '\0') {
      FOutputDevice::LogfImpl
                (param_5,3,L"FJsonObjectWrapper::ImportTextItem: Bad quoted string: %s\n",*param_2);
      uVar8 = 0;
      goto LAB_1421efbac;
    }
    *param_2 = *param_2 + (longlong)local_res10[0] * 2;
  }
  else {
    if (_Src == (short *)0x0) {
LAB_1421efa51:
      iVar6 = iVar10;
    }
    else {
      iVar6 = iVar10;
      if (*_Src != 0) {
        do {
          lVar7 = lVar7 + 1;
        } while (_Src[lVar7] != 0);
        iVar6 = (int)lVar7 + 1;
      }
      iVar5 = iVar10;
      if (iVar6 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58,iVar6);
        iVar5 = local_50;
      }
      local_50 = iVar5 + iVar6;
      if (local_4c < local_50) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58);
      }
      if (iVar6 != 0) {
        _guard_xfg_dispatch_icall_nop(local_58,_Src,(longlong)iVar6 * 2);
      }
      iVar6 = local_50 + -1;
      if (local_50 == 0) goto LAB_1421efa51;
    }
    *param_2 = *param_2 + (longlong)iVar6 * 2;
  }
  if (local_50 < 2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0);
    }
    local_40 = (longlong *)0x0;
    if (param_1 + 2 != &local_48) {
      param_1[2] = (undefined2 *)0x0;
      local_48 = (undefined2 *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 3,&local_40);
      plVar3 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_40 + 8))(local_40,1);
          }
        }
      }
    }
    uVar8 = 1;
    goto LAB_1421efbac;
  }
  TJsonReaderFactory<wchar_t>::Create(local_38,&local_58);
  cVar4 = FUN_1404a7f60(local_38,param_1 + 2);
  puVar9 = local_58;
  if ((cVar4 == '\0') || (param_1[2] == (undefined2 *)0x0)) {
    if (param_5 != 0) {
      puVar9 = &DAT_143f3eda8;
      if (local_50 != 0) {
        puVar9 = local_58;
      }
      FOutputDevice::LogfImpl
                (param_5,3,L"FJsonObjectWrapper::ImportTextItem - Unable to parse json: %s\n",puVar9
                );
    }
    uVar8 = 0;
  }
  else {
    if (param_1 != &local_58) {
      lVar7 = (longlong)local_50;
      *(int *)(param_1 + 1) = local_50;
      if ((local_50 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
        uVar8 = 1;
        goto LAB_1421efb74;
      }
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,local_50);
      _guard_xfg_dispatch_icall_nop(*param_1,puVar9,lVar7 * 2);
    }
    uVar8 = 1;
  }
LAB_1421efb74:
  plVar3 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar10 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
LAB_1421efbac:
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar8;
}



// FUNCTION 1421efbf0 JsonAttributesToUStruct body=37 status=ok
// SIG undefined JsonAttributesToUStruct(void)

void FJsonObjectConverter::JsonAttributesToUStruct(void)

{
  FUN_1421efc20();
  return;
}



// FUNCTION 1421efc20 FUN_1421efc20 body=1349 status=ok
// SIG undefined FUN_1421efc20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1421efc20(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,ulonglong param_6,ulonglong param_7)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  undefined1 auVar4 [12];
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  uint *puVar15;
  longlong **pplVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  ulonglong local_190;
  ulonglong local_188;
  longlong local_178;
  longlong *plStack_170;
  longlong local_168;
  longlong local_160;
  undefined4 local_158;
  undefined2 local_154;
  undefined1 local_152;
  undefined2 *local_150;
  int local_148;
  longlong *local_140;
  longlong *local_138;
  int local_130;
  uint uStack_12c;
  uint *puStack_128;
  undefined4 local_120;
  undefined8 uStack_11c;
  undefined4 uStack_114;
  longlong local_110;
  longlong *plStack_108;
  longlong *local_100;
  undefined8 uStack_f8;
  uint *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  int local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  undefined8 uStack_90;
  uint *puStack_88;
  undefined4 uStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  longlong *plStack_68;
  ulonglong local_60;
  
  local_60 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_c0 = param_5;
  local_c8 = param_3;
  local_b8 = param_4;
  lVar7 = FJsonObjectWrapper::StaticStruct();
  if (param_2 == lVar7) {
    plVar8 = (longlong *)operator_new(0x50);
    plVar13 = (longlong *)0x0;
    plVar12 = plVar13;
    if (plVar8 != (longlong *)0x0) {
      plVar8[2] = 0;
      plVar8[3] = 0;
      plVar8[7] = 0;
      plVar8[9] = 0;
      *plVar8 = 0;
      plVar8[1] = 0;
      plVar8[4] = 0;
      plVar8[5] = 0;
      *(undefined4 *)(plVar8 + 6) = 0xffffffff;
      *(undefined4 *)((longlong)plVar8 + 0x34) = 0;
      plVar8[8] = 0;
      plVar12 = plVar8;
    }
    plVar8 = (longlong *)operator_new(0x18);
    if (plVar8 != (longlong *)0x0) {
      *(undefined4 *)(plVar8 + 1) = 1;
      *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
      *plVar8 = (longlong)&PTR_FUN_143f60d28;
      plVar8[2] = (longlong)plVar12;
      plVar13 = plVar8;
    }
    pplVar16 = (longlong **)(param_3 + 0x10);
    local_140 = plVar12;
    local_138 = plVar13;
    SharedPointerInternals::EnableSharedFromThis(&local_140,plVar12,plVar12);
    if (pplVar16 != &local_140) {
      *pplVar16 = plVar12;
      local_140 = (longlong *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_3 + 0x18,&local_138);
      plVar13 = local_138;
    }
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar13 + 1;
      lVar7 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13,1);
        }
      }
    }
    TSet<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,0>,FDefaultSetAllocator>
    ::operator=(*pplVar16,param_1);
  }
  else {
    if (param_2 == 0) {
      local_160 = 0;
    }
    else {
      local_160 = *(longlong *)(param_2 + 0x38);
    }
    local_158 = 0xffffffff;
    local_154 = 0x101;
    local_152 = 0;
    local_168 = param_2;
    FUN_140472e10(&local_168);
    lVar7 = local_160;
    while (lVar7 != 0) {
      local_d0 = *(undefined8 *)(lVar7 + 0x18);
      local_160 = lVar7;
      FName::ToString(&local_d0,&local_150);
      if ((((param_6 == 0) || ((*(ulonglong *)(lVar7 + 0x38) & param_6) != 0)) ||
          (param_6 == 0xffffffffffffffff)) &&
         (((*(ulonglong *)(local_160 + 0x38) & param_7) == 0 && (param_7 != 0xffffffffffffffff)))) {
        iVar6 = (int)param_1[5];
        puStack_128 = (uint *)(param_1 + 2);
        uStack_12c = 1;
        local_178 = 0;
        plStack_170 = (longlong *)0x0;
        uVar14 = 0;
        local_130 = 0;
        uStack_11c = 0;
        if (iVar6 != 0) {
          puVar15 = (uint *)param_1[4];
          if ((uint *)param_1[4] == (uint *)0x0) {
            puVar15 = puStack_128;
          }
          uVar2 = *puVar15;
          local_130 = 0;
          while (uVar2 == 0) {
            lVar7 = (longlong)local_130;
            uVar14 = uVar14 + 0x20;
            iVar9 = local_130 + 1;
            uStack_11c = (ulonglong)uVar14 << 0x20;
            bVar3 = (int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_130;
            local_130 = iVar9;
            if (bVar3) goto LAB_1421efed2;
            uVar2 = puVar15[lVar7 + 1];
          }
          uStack_12c = -uVar2 & uVar2;
          local_d8 = 0x1f;
          if (uStack_12c != 0) {
            for (; uStack_12c >> local_d8 == 0; local_d8 = local_d8 + -1) {
            }
          }
          if (uStack_12c == 0) {
            iVar9 = 0x20;
          }
          else {
            iVar9 = 0x1f - local_d8;
          }
          iVar9 = (uVar14 - iVar9) + 0x1f;
          uStack_11c._4_4_ = (undefined4)((ulonglong)uStack_11c >> 0x20);
          uStack_11c = CONCAT44(uStack_11c._4_4_,iVar9);
          if (iVar6 < iVar9) {
LAB_1421efed2:
            uStack_11c = CONCAT44(uStack_11c._4_4_,iVar6);
          }
        }
        local_120 = 0xffffffff;
        uStack_f8 = CONCAT44(uStack_12c,local_130);
        uStack_80 = 0xffffffff;
        iStack_7c = (int)uStack_11c;
        uStack_78 = uStack_11c._4_4_;
        uStack_74 = uStack_114;
        uStack_e8 = CONCAT44((int)uStack_11c,0xffffffff);
        auVar4._4_8_ = uStack_f8;
        auVar4._0_4_ = (int)uStack_11c;
        auVar17._0_8_ = auVar4._0_8_ << 0x20;
        auVar17._8_4_ = uStack_11c._4_4_;
        auVar17._12_4_ = uStack_114;
        local_e0 = auVar17._8_8_;
        iVar9 = (int)uStack_11c;
        local_100 = param_1;
        local_f0 = puStack_128;
        local_98 = param_1;
        uStack_90 = uStack_f8;
        puStack_88 = puStack_128;
        if ((int)uStack_11c < iVar6) {
          do {
            plVar12 = local_100;
            if (*(int *)(*local_100 + 8 + (longlong)iVar9 * 0x28) == 0) {
              puVar11 = &DAT_143f3eda8;
            }
            else {
              puVar11 = *(undefined2 **)(*local_100 + (longlong)iVar9 * 0x28);
            }
            puVar10 = &DAT_143f3eda8;
            if (local_148 != 0) {
              puVar10 = local_150;
            }
            iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
            if (iVar6 == 0) {
              local_70 = *(longlong *)(*plVar12 + 0x10 + (longlong)iVar9 * 0x28);
              plStack_68 = *(longlong **)(*plVar12 + (longlong)iVar9 * 0x28 + 0x18);
              local_110 = 0;
              plVar12 = (longlong *)0x0;
              if (plStack_68 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_68 + 1) = (int)plStack_68[1] + 1;
                UNLOCK();
                local_110 = local_178;
                plVar12 = plStack_170;
              }
              local_178 = local_70;
              plStack_170 = plStack_68;
              plStack_108 = plVar12;
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
                  iVar6 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar6 == 1) {
                    (**(code **)(*plStack_108 + 8))(plStack_108,1);
                  }
                }
              }
              plVar12 = plStack_170;
              if ((local_178 == 0) || (*(uint *)(local_178 + 8) < 2)) {
                if (plStack_170 == (longlong *)0x0) break;
                LOCK();
                plVar12 = plStack_170 + 1;
                iVar6 = (int)*plVar12;
                *(int *)plVar12 = (int)*plVar12 + -1;
                UNLOCK();
              }
              else {
                iVar6 = *(int *)(local_160 + 0x44);
                if (plStack_170 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plStack_170 + 1) = (int)plStack_170[1] + 1;
                  UNLOCK();
                }
                local_188 = param_7;
                local_190 = param_6;
                local_198 = local_c0;
                local_a8 = local_178;
                plStack_a0 = plStack_170;
                cVar5 = FUN_1421f0170(&local_a8,local_160,iVar6 + local_c8,local_b8);
                plVar13 = plStack_170;
                if (cVar5 == '\0') {
                  if (plVar12 != (longlong *)0x0) {
                    LOCK();
                    plVar12 = plVar12 + 1;
                    lVar7 = *plVar12;
                    *(int *)plVar12 = (int)*plVar12 + -1;
                    UNLOCK();
                    if ((int)lVar7 == 1) {
                      (**(code **)*plStack_170)(plStack_170);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar13 + 0xc);
                      iVar6 = *piVar1;
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (iVar6 == 1) {
                        (**(code **)(*plStack_170 + 8))(plStack_170,1);
                      }
                    }
                  }
                  if (local_150 != (undefined2 *)0x0) {
                    FMemory::Free();
                  }
                  return 0;
                }
                if (plVar12 == (longlong *)0x0) break;
                LOCK();
                plVar12 = plVar12 + 1;
                iVar6 = (int)*plVar12;
                *(int *)plVar12 = (int)*plVar12 + -1;
                UNLOCK();
              }
              plVar12 = plStack_170;
              if (iVar6 == 1) {
                (**(code **)*plStack_170)(plStack_170);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                iVar6 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plStack_170 + 8))(plStack_170,1);
                }
              }
              break;
            }
            uStack_e8 = CONCAT44(uStack_e8._4_4_,(uint)uStack_e8 & ~uStack_f8._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_f8);
            iVar9 = uStack_e8._4_4_;
          } while (uStack_e8._4_4_ < (int)local_f0[6]);
        }
      }
      if (local_150 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_160 = *(longlong *)(local_160 + 0x28);
      FUN_140472e10(&local_168);
      lVar7 = local_160;
    }
  }
  return 1;
}



// FUNCTION 1421f0170 FUN_1421f0170 body=652 status=ok
// SIG undefined FUN_1421f0170(void)

undefined1
FUN_1421f0170(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  
  if (*param_1 == 0) {
    plVar9 = (longlong *)param_1[1];
LAB_1421f03c5:
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*plVar9)(plVar9);
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
    return 0;
  }
  lVar8 = UArrayProperty::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
      != lVar8 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    lVar8 = USetProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
         ) != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    bVar5 = false;
    if (!bVar4) goto LAB_1421f021a;
  }
  bVar5 = true;
LAB_1421f021a:
  lVar8 = *param_1;
  if (*(int *)(lVar8 + 8) == 5) {
    if ((!bVar5) || (*(int *)(param_2 + 0x30) != 1)) {
      plVar9 = (longlong *)FJsonValue::AsArray();
      uVar11 = 0;
      iVar3 = (int)plVar9[1];
      if (iVar3 < 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(param_2 + 0x30);
        if (iVar3 < *(int *)(param_2 + 0x30)) {
          iVar10 = iVar3;
        }
      }
      uVar12 = uVar11;
      uVar13 = uVar11;
      if (iVar10 != 0) {
        do {
          local_38 = *(undefined8 *)(*plVar9 + uVar13);
          local_30 = *(longlong *)(*plVar9 + 8 + uVar13);
          if (local_30 != 0) {
            LOCK();
            *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
            UNLOCK();
          }
          cVar7 = FUN_1421ee030(&local_38,param_2,(int)uVar11 * *(int *)(param_2 + 0x34) + param_3,
                                param_4,param_5,param_6,param_7);
          if (cVar7 == '\0') {
            plVar9 = (longlong *)param_1[1];
            goto LAB_1421f03c5;
          }
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar12 = uVar12 + 1;
          uVar13 = uVar13 + 0x10;
        } while (uVar12 != (longlong)iVar10);
      }
      plVar9 = (longlong *)param_1[1];
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar9)(plVar9);
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
      return 1;
    }
    local_40 = param_1[1];
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    plVar9 = &local_48;
    local_48 = lVar8;
  }
  else {
    if (bVar5) {
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1);
      return 0;
    }
    local_50 = param_1[1];
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    plVar9 = &local_58;
    local_58 = lVar8;
  }
  uVar6 = FUN_1421ee030(plVar9,param_2,param_3,param_4,param_5,param_6,param_7);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_1);
  return uVar6;
}



// FUNCTION 1421f0400 FUN_1421f0400 body=148 status=ok
// SIG undefined FUN_1421f0400(void)

void FUN_1421f0400(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (1 < *(int *)(param_1 + 8)) {
    TJsonReaderFactory<wchar_t>::Create(local_18,param_1);
    cVar6 = FUN_1404a7f60(local_18,param_1 + 0x10);
    if ((cVar6 == '\0') && (*(undefined4 *)(param_1 + 8) = 0, *(int *)(param_1 + 0xc) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0);
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
    }
  }
  return;
}



// FUNCTION 1421f04a0 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UJsonUtilitiesDummyObject::StaticClass(void)

{
  if (DAT_146aeddf8 == 0) {
    FUN_14171ccd0(L"/Script/JsonUtilities",L"JsonUtilitiesDummyObject",&DAT_146aeddf8,FUN_140447710,
                  0x28,0x10000000,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aeddf8;
}



// FUNCTION 1421f0540 FUN_1421f0540 body=47 status=ok
// SIG undefined FUN_1421f0540(void)

longlong FUN_1421f0540(void)

{
  if (DAT_146aede00 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146aede00,&PTR_s__Script_JsonUtilities_144ff58a8);
  }
  return DAT_146aede00;
}



// FUNCTION 1421f0570 FUN_1421f0570 body=53 status=ok
// SIG undefined FUN_1421f0570(void)

void FUN_1421f0570(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144ff5790;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1421f05d0 FUN_1421f05d0 body=263 status=ok
// SIG undefined FUN_1421f05d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1421f05d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if (param_4 != 0) {
    puVar8 = (undefined8 *)(param_3 + 0x10);
    do {
      FString::operator=(param_2,puVar8 + -2);
      plVar4 = (longlong *)puVar8[1];
      puVar7 = (undefined8 *)(param_2 + 0x10);
      uVar5 = *puVar8;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      local_48 = uVar5;
      plStack_40 = plVar4;
      if (&local_48 != puVar7) {
        local_48 = *puVar7;
        plStack_40 = *(longlong **)(param_2 + 0x18);
        *puVar7 = uVar5;
        *(longlong **)(param_2 + 0x18) = plVar4;
        local_38 = uVar5;
        plStack_30 = plVar4;
      }
      plVar4 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_40 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_40)(plStack_40);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_40 + 8))(plStack_40,1);
          }
        }
      }
      puVar8 = puVar8 + 4;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x20;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1421f06e0 FUN_1421f06e0 body=114 status=ok
// SIG undefined FUN_1421f06e0(void)

void FUN_1421f06e0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_2[3];
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
  if (*param_2 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 1421f0760 FUN_1421f0760 body=48 status=ok
// SIG undefined FUN_1421f0760(void)

void FUN_1421f0760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_1421ef640(param_3,param_2,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 1421f0790 Get_Z_Construct_UScriptStruct_FJsonObjectWrapper_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FJsonObjectWrapper_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FJsonObjectWrapper_CRC(void)

{
  return 0x7fdc2653;
}



// FUNCTION 1421f07d0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FJsonObjectWrapper::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aeddd8 == 0) {
    if (DAT_146aede00 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aede00,&PTR_s__Script_JsonUtilities_144ff58a8);
    }
    lVar1 = DAT_146aede00;
    uVar2 = Get_Z_Construct_UScriptStruct_FJsonObjectWrapper_CRC();
    DAT_146aeddd8 = GetStaticStruct(FUN_1421f0880,lVar1,L"JsonObjectWrapper",0x20,uVar2);
  }
  return;
}



// FUNCTION 1421f0850 FUN_1421f0850 body=47 status=ok
// SIG undefined FUN_1421f0850(void)

longlong FUN_1421f0850(void)

{
  if (DAT_146aeddf0 == 0) {
    FUN_141786440(&DAT_146aeddf0,&PTR_StaticClass_144ff55e0);
  }
  return DAT_146aeddf0;
}



// FUNCTION 1421f0880 FUN_1421f0880 body=47 status=ok
// SIG undefined FUN_1421f0880(void)

longlong FUN_1421f0880(void)

{
  if (DAT_146aedde8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aedde8,&PTR_FUN_14652e6c0);
  }
  return DAT_146aedde8;
}



// FUNCTION 1421f08b0 StartupModule body=112 status=ok
// SIG undefined StartupModule(void)

void FLevelSequenceModule::StartupModule(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  local_10 = 0;
  puVar1 = (undefined8 *)operator_new(0x20,&local_18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144ff80f0;
    puVar1[1] = FUN_1421f33f0;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[3] = uVar2;
  }
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x40))(param_1,local_res8,&local_18);
  param_1[3] = *plVar3;
  return;
}



// FUNCTION 1421f0930 FUN_1421f0930 body=175 status=ok
// SIG undefined FUN_1421f0930(void)

undefined8 * FUN_1421f0930(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  
  iVar2 = *(int *)(param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 8);
  *(int *)(param_1 + 0x10) = iVar2 + 1;
  if (*(int *)(param_1 + 0x14) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
  }
  plVar5 = (longlong *)((longlong)iVar2 * 0x10 + *plVar1);
  *plVar5 = 0;
  *(undefined4 *)(plVar5 + 1) = 0;
  if (((param_3 != plVar5) && ((int)param_3[1] != 0)) && ((longlong *)*param_3 != (longlong *)0x0))
  {
    (**(code **)(*(longlong *)*param_3 + 0x30))();
  }
  iVar2 = *(int *)(param_1 + 0x10);
  lVar3 = *plVar1;
  *param_2 = 0;
  if ((*(int *)(lVar3 + -8 + (longlong)iVar2 * 0x10) != 0) &&
     (plVar1 = *(longlong **)(lVar3 + -0x10 + (longlong)iVar2 * 0x10), plVar1 != (longlong *)0x0)) {
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
    *param_2 = *puVar4;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3);
  return param_2;
}



// FUNCTION 1421f09e0 UnregisterObjectSpawner body=28 status=ok
// SIG undefined UnregisterObjectSpawner(void)

void FLevelSequenceModule::UnregisterObjectSpawner(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  FUN_1421f1900(param_1 + 8,local_res8);
  return;
}



// FUNCTION 1421f0a00 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FSslModule::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_14188a930(param_1 + 1);
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1421f0a50 FUN_1421f0a50 body=1004 status=ok
// SIG undefined FUN_1421f0a50(void)

int * FUN_1421f0a50(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  int *_Src;
  uint uVar18;
  uint *puVar19;
  int iVar20;
  bool bVar21;
  
  iVar10 = 1;
  iVar20 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar14 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar14);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar14 = (int)param_1[6];
    iVar4 = *(int *)(*param_1 + 4 + (longlong)iVar14 * 0x10);
    iVar13 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x10) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar14;
  lVar6 = (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  bVar21 = false;
  puVar19 = (uint *)((longlong)plVar8 + lVar6);
  *puVar19 = *puVar19 | 1 << ((byte)iVar14 & 0x1f);
  uVar1 = *param_3;
  lVar11 = (longlong)iVar14 * 0x10;
  _Src = (int *)(*param_1 + lVar11);
  *(undefined8 *)_Src = uVar1;
  _Src[2] = -1;
  uVar18 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar18 != 1) {
    iVar13 = iVar20;
    if (uVar18 != 0) {
      uVar5 = _Src[1];
      iVar4 = (int)uVar1;
      uVar17 = iVar4 - uVar5 ^ uVar5 >> 0xd;
      uVar16 = (-0x61c88647 - uVar17) - uVar5 ^ uVar17 << 8;
      uVar9 = (uVar5 - uVar16) - uVar17 ^ uVar16 >> 0xd;
      uVar17 = (uVar17 - uVar16) - uVar9 ^ uVar9 >> 0xc;
      uVar16 = (uVar16 - uVar17) - uVar9 ^ uVar17 << 0x10;
      uVar9 = (uVar9 - uVar16) - uVar17 ^ uVar16 >> 5;
      uVar17 = (uVar17 - uVar16) - uVar9 ^ uVar9 >> 3;
      uVar16 = (uVar16 - uVar17) - uVar9 ^ uVar17 << 10;
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar12 = *(int *)((longlong)plVar8 +
                       (((longlong)(int)((uVar9 - uVar16) - uVar17) ^ (ulonglong)(uVar16 >> 0xf)) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar12 != -1) {
        lVar2 = *param_1;
        do {
          lVar7 = (longlong)iVar12;
          if ((*(int *)(lVar2 + lVar7 * 0x10) == iVar4) &&
             (*(uint *)(lVar2 + 4 + lVar7 * 0x10) == uVar5)) {
            bVar21 = true;
          }
          else {
            bVar21 = false;
          }
          iVar13 = iVar12;
        } while ((!bVar21) &&
                (iVar12 = *(int *)(lVar2 + 8 + lVar7 * 0x10), iVar13 = iVar20, iVar12 != -1));
      }
    }
    bVar21 = iVar13 != -1;
    if (bVar21) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar13 * 0x10 + *param_1),_Src,8);
      bVar3 = (byte)iVar14 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = iVar14;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar11 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar20 = (int)param_1[6];
      }
      *(int *)(lVar11 + 4 + lVar2) = iVar20;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar14;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar13;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar19 = (uint *)((longlong)plVar8 + lVar6);
      *puVar19 = *puVar19 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_1421f0e11;
    }
  }
  if (3 < uVar18) {
    uVar5 = (uVar18 >> 1) + 8;
    iVar20 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar20 == 0; iVar20 = iVar20 + -1) {
      }
    }
    iVar10 = 0x20;
    if (uVar5 != 0) {
      iVar10 = 0x1f - iVar20;
    }
    uVar5 = (uVar18 >> 1) + 7;
    iVar20 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar20 == 0; iVar20 = iVar20 + -1) {
      }
    }
    if (uVar5 == 0) {
      cVar15 = '\0';
    }
    else {
      cVar15 = '\x1f' - (char)iVar20;
    }
    iVar10 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar15 & 0x1f);
  }
  if (((int)uVar18 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    uVar18 = _Src[1];
    uVar5 = *_Src - uVar18 ^ uVar18 >> 0xd;
    uVar9 = (-0x61c88647 - uVar5) - uVar18 ^ uVar5 << 8;
    uVar16 = (uVar18 - uVar9) - uVar5 ^ uVar9 >> 0xd;
    uVar18 = (uVar5 - uVar9) - uVar16 ^ uVar16 >> 0xc;
    uVar5 = (uVar9 - uVar18) - uVar16 ^ uVar18 << 0x10;
    uVar9 = (uVar16 - uVar5) - uVar18 ^ uVar5 >> 5;
    uVar18 = (uVar18 - uVar5) - uVar9 ^ uVar9 >> 3;
    uVar5 = (uVar5 - uVar18) - uVar9 ^ uVar18 << 10;
    uVar18 = ((uVar9 - uVar5) - uVar18 ^ uVar5 >> 0xf) & (int)param_1[9] - 1U;
    _Src[3] = uVar18;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    _Src[2] = *(int *)((longlong)plVar8 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar18) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar18) * 4) =
         iVar14;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<FObjectKey,DefaultKeyFuncs<FObjectKey,0>,FDefaultSetAllocator>::Rehash(param_1);
  }
LAB_1421f0e11:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar21;
  }
  return param_2;
}



// FUNCTION 1421f0e40 FUN_1421f0e40 body=493 status=ok
// SIG undefined FUN_1421f0e40(void)

int * FUN_1421f0e40(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined4 *_Src;
  void *_Dst;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  bool bVar12;
  int local_res8 [2];
  undefined8 local_38;
  undefined8 local_30;
  
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
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x28);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar11;
  local_38 = 0;
  local_30 = 0;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar10 +
                   (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  puVar3 = (undefined4 *)*param_3;
  uVar4 = puVar3[1];
  uVar5 = puVar3[2];
  uVar6 = puVar3[3];
  _Src = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x28);
  *_Src = *puVar3;
  _Src[1] = uVar4;
  _Src[2] = uVar5;
  _Src[3] = uVar6;
  *(undefined8 *)(_Src + 4) = 0;
  *(undefined8 *)(_Src + 6) = 0;
  TArray<FLevelSequenceBindingReference,FDefaultAllocator>::
  ~TArray<FLevelSequenceBindingReference,FDefaultAllocator>(&local_38);
  _Src[8] = 0xffffffff;
  bVar12 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    bVar12 = local_res8[0] != -1;
    if (bVar12) {
      _Dst = (void *)(*param_1 + (longlong)local_res8[0] * 0x28);
      TArray<FLevelSequenceBindingReference,FDefaultAllocator>::
      ~TArray<FLevelSequenceBindingReference,FDefaultAllocator>((longlong)_Dst + 0x10);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1421f100b;
    }
  }
  cVar7 = TSet<TTuple<FGuid,FLevelSequenceBindingReferenceArray>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceBindingReferenceArray,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar7 == '\0') {
    iVar11 = *param_2;
    uVar9 = FCrc::MemCrc_DEPRECATED(_Src,0x10);
    uVar9 = (int)param_1[9] - 1U & uVar9;
    _Src[9] = uVar9;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    _Src[8] = *(undefined4 *)
               ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         iVar11;
  }
LAB_1421f100b:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar12;
  }
  return param_2;
}



// FUNCTION 1421f1030 FUN_1421f1030 body=590 status=ok
// SIG undefined FUN_1421f1030(void)

int * FUN_1421f1030(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  void *_Dst;
  int iVar12;
  uint uVar13;
  char cVar14;
  undefined8 *_Src;
  bool bVar15;
  int local_res8 [2];
  
  iVar12 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)((longlong)iVar10 * 0x38 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + *param_1) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar11 +
                   (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  puVar3 = (undefined4 *)param_3[1];
  _Src = (undefined8 *)((longlong)iVar10 * 0x38 + *param_1);
  uVar7 = ((undefined8 *)*param_3)[1];
  *_Src = *(undefined8 *)*param_3;
  _Src[1] = uVar7;
  uVar4 = puVar3[1];
  uVar5 = puVar3[2];
  uVar6 = puVar3[3];
  *(undefined4 *)(_Src + 2) = *puVar3;
  *(undefined4 *)((longlong)_Src + 0x14) = uVar4;
  *(undefined4 *)(_Src + 3) = uVar5;
  *(undefined4 *)((longlong)_Src + 0x1c) = uVar6;
  FString::FString(_Src + 4,puVar3 + 4);
  *(undefined4 *)(_Src + 6) = 0xffffffff;
  bVar15 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FGuid,FUdpMessageTunnel::FNodeInfo>,TDefaultMapHashableKeyFuncs<FGuid,FUdpMessageTunnel::FNodeInfo,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    bVar15 = local_res8[0] != -1;
    if (bVar15) {
      _Dst = (void *)((longlong)local_res8[0] * 0x38 + *param_1);
      if (*(longlong *)((longlong)_Dst + 0x20) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x30);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1421f1255;
    }
  }
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar13) {
    uVar9 = (uVar13 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar10 = 0x20;
    cVar14 = '\0';
    if (uVar9 != 0) {
      iVar10 = 0x1f - iVar12;
    }
    uVar9 = (uVar13 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar9 != 0) {
      cVar14 = '\x1f' - (char)iVar12;
    }
    iVar12 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar12 <= (int)param_1[9])))) {
    iVar12 = *param_2;
    uVar13 = FCrc::MemCrc_DEPRECATED(_Src,0x10);
    uVar13 = (int)param_1[9] - 1U & uVar13;
    *(uint *)((longlong)_Src + 0x34) = uVar13;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 6) =
         *(undefined4 *)
          ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar12;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    TSet<TTuple<FGuid,FUdpMessageTunnel::FNodeInfo>,TDefaultMapHashableKeyFuncs<FGuid,FUdpMessageTunnel::FNodeInfo,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1421f1255:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 1421f1280 FUN_1421f1280 body=712 status=ok
// SIG undefined FUN_1421f1280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1421f1280(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  iVar6 = (param_2 + -2) / 2;
  if (-1 < iVar6) {
    iVar7 = iVar6 * 2 + 1;
    iVar1 = iVar7;
    iVar11 = iVar6;
joined_r0x0001421f12d6:
    do {
      if (iVar7 < param_2) {
        iVar7 = iVar6 * 2;
        iVar8 = iVar7 + 1;
        if (iVar7 + 2 < param_2) {
          local_108 = param_1[(longlong)iVar8 * 2];
          local_100 = param_1[(longlong)iVar8 * 2 + 1];
          if (local_100 != 0) {
            LOCK();
            *(int *)(local_100 + 8) = *(int *)(local_100 + 8) + 1;
            UNLOCK();
          }
          local_f8 = param_1[((longlong)iVar7 + 2) * 2];
          local_f0 = param_1[((longlong)iVar7 + 2) * 2 + 1];
          if (local_f0 != 0) {
            LOCK();
            *(int *)(local_f0 + 8) = *(int *)(local_f0 + 8) + 1;
            UNLOCK();
          }
          cVar5 = FUN_1421f29d0(param_4,&local_f8,&local_108);
          if (cVar5 != '\0') {
            iVar8 = iVar7;
          }
          iVar8 = iVar8 + 1;
        }
        puVar9 = param_1 + (longlong)iVar6 * 2;
        puVar12 = param_1 + (longlong)iVar8 * 2;
        local_e8 = *puVar12;
        local_e0 = puVar12[1];
        if (local_e0 != 0) {
          LOCK();
          *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
          UNLOCK();
        }
        local_d8 = *puVar9;
        local_d0 = puVar9[1];
        if (local_d0 != 0) {
          LOCK();
          *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
          UNLOCK();
        }
        cVar5 = FUN_1421f29d0(param_4,&local_d8,&local_e8);
        if (cVar5 != '\0') {
          if (puVar9 != puVar12) {
            local_88 = *puVar9;
            uStack_80 = puVar9[1];
            uVar2 = *(undefined4 *)((longlong)puVar12 + 4);
            uVar3 = *(undefined4 *)(puVar12 + 1);
            uVar4 = *(undefined4 *)((longlong)puVar12 + 0xc);
            *(undefined4 *)puVar9 = *(undefined4 *)puVar12;
            *(undefined4 *)((longlong)puVar9 + 4) = uVar2;
            *(undefined4 *)(puVar9 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar9 + 0xc) = uVar4;
            *puVar12 = local_88;
            puVar12[1] = uStack_80;
          }
          iVar7 = iVar8 * 2 + 1;
          iVar6 = iVar8;
          goto joined_r0x0001421f12d6;
        }
      }
      iVar7 = iVar1 + -2;
      iVar6 = iVar11 + -1;
      iVar1 = iVar7;
      iVar11 = iVar6;
    } while (-1 < iVar6);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar12 = param_1 + (longlong)param_2 * 2;
    do {
      if (param_1 != puVar12) {
        local_78 = *param_1;
        uStack_70 = param_1[1];
        uVar2 = *(undefined4 *)((longlong)puVar12 + 4);
        uVar3 = *(undefined4 *)(puVar12 + 1);
        uVar4 = *(undefined4 *)((longlong)puVar12 + 0xc);
        *(undefined4 *)param_1 = *(undefined4 *)puVar12;
        *(undefined4 *)((longlong)param_1 + 4) = uVar2;
        *(undefined4 *)(param_1 + 1) = uVar3;
        *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
        *puVar12 = local_78;
        puVar12[1] = uStack_70;
      }
      iVar6 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar6 * 2;
          iVar7 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            local_c8 = param_1[(longlong)iVar7 * 2];
            local_c0 = param_1[(longlong)iVar7 * 2 + 1];
            if (local_c0 != 0) {
              LOCK();
              *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
              UNLOCK();
            }
            local_b8 = param_1[((longlong)iVar1 + 2) * 2];
            local_b0 = param_1[((longlong)iVar1 + 2) * 2 + 1];
            if (local_b0 != 0) {
              LOCK();
              *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
              UNLOCK();
            }
            cVar5 = FUN_1421f29d0(param_4,&local_b8,&local_c8);
            if (cVar5 != '\0') {
              iVar7 = iVar1;
            }
            iVar7 = iVar7 + 1;
          }
          puVar10 = param_1 + (longlong)iVar6 * 2;
          puVar9 = param_1 + (longlong)iVar7 * 2;
          local_a8 = *puVar9;
          local_a0 = puVar9[1];
          if (local_a0 != 0) {
            LOCK();
            *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
            UNLOCK();
          }
          local_98 = *puVar10;
          local_90 = puVar10[1];
          if (local_90 != 0) {
            LOCK();
            *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
            UNLOCK();
          }
          cVar5 = FUN_1421f29d0(param_4,&local_98,&local_a8);
          if (cVar5 == '\0') break;
          if (puVar10 != puVar9) {
            local_68 = *puVar10;
            uStack_60 = puVar10[1];
            uVar2 = *(undefined4 *)((longlong)puVar9 + 4);
            uVar3 = *(undefined4 *)(puVar9 + 1);
            uVar4 = *(undefined4 *)((longlong)puVar9 + 0xc);
            *(undefined4 *)puVar10 = *(undefined4 *)puVar9;
            *(undefined4 *)((longlong)puVar10 + 4) = uVar2;
            *(undefined4 *)(puVar10 + 1) = uVar3;
            *(undefined4 *)((longlong)puVar10 + 0xc) = uVar4;
            *puVar9 = local_68;
            puVar9[1] = uStack_60;
          }
          iVar6 = iVar7;
        } while (iVar7 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar12 = puVar12 + -2;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 1421f1550 FUN_1421f1550 body=930 status=ok
// SIG undefined FUN_1421f1550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1421f1550(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  float fVar13;
  undefined1 auStack_438 [32];
  int local_418;
  longlong *local_410;
  undefined8 local_408;
  longlong local_400;
  undefined8 local_3f8;
  longlong local_3f0;
  undefined8 local_3e8;
  longlong local_3e0;
  undefined8 local_3d8;
  longlong local_3d0;
  undefined8 local_3c8;
  longlong local_3c0;
  undefined8 local_3b8;
  longlong local_3b0;
  longlong local_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_438;
    lStack_340 = param_2 * 0x10 + -0x10 + param_1;
    fVar13 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar13 = fVar13 + 1.8446744e+19;
    }
    local_348 = param_1;
    fVar13 = _guard_xfg_dispatch_icall_nop(fVar13);
    local_338 = (undefined4)(longlong)(fVar13 + fVar13);
    _guard_xfg_dispatch_icall_nop(local_330,0,0x2e8);
    plVar8 = &local_348;
    do {
      puVar12 = (undefined8 *)*plVar8;
      puVar9 = (undefined8 *)plVar8[1];
      local_398 = plVar8[2];
      local_418 = (int)local_398;
      lVar5 = ((longlong)puVar9 - (longlong)puVar12 >> 4) + 1;
      puVar11 = puVar12;
      local_410 = plVar8;
      if ((int)local_398 != 0) {
LAB_1421f1630:
        if (8 < lVar5) {
          puVar12 = puVar11 + (lVar5 / 2) * 2;
          if (puVar12 != puVar11) {
            local_390 = *puVar12;
            uStack_388 = puVar12[1];
            uVar1 = *(undefined4 *)((longlong)puVar11 + 4);
            uVar2 = *(undefined4 *)(puVar11 + 1);
            uVar3 = *(undefined4 *)((longlong)puVar11 + 0xc);
            *(undefined4 *)puVar12 = *(undefined4 *)puVar11;
            *(undefined4 *)((longlong)puVar12 + 4) = uVar1;
            *(undefined4 *)(puVar12 + 1) = uVar2;
            *(undefined4 *)((longlong)puVar12 + 0xc) = uVar3;
            *puVar11 = local_390;
            puVar11[1] = uStack_388;
          }
          puVar6 = puVar9 + 2;
          puVar12 = puVar11;
LAB_1421f1670:
          puVar10 = puVar12;
          puVar12 = puVar10 + 2;
          if (puVar12 <= puVar9) goto code_r0x0001421f1679;
          goto LAB_1421f16c3;
        }
        for (; puVar6 = puVar11, puVar12 = puVar11, puVar11 < puVar9; puVar9 = puVar9 + -2) {
          while (puVar12 = puVar12 + 2, puVar12 <= puVar9) {
            local_3c8 = *puVar12;
            local_3c0 = puVar12[1];
            if (local_3c0 != 0) {
              LOCK();
              *(int *)(local_3c0 + 8) = *(int *)(local_3c0 + 8) + 1;
              UNLOCK();
            }
            local_3b8 = *puVar6;
            local_3b0 = puVar6[1];
            if (local_3b0 != 0) {
              LOCK();
              *(int *)(local_3b0 + 8) = *(int *)(local_3b0 + 8) + 1;
              UNLOCK();
            }
            cVar4 = FUN_1421f29d0(param_4,&local_3b8,&local_3c8);
            if (cVar4 != '\0') {
              puVar6 = puVar12;
            }
          }
          if (puVar6 != puVar9) {
            local_360 = *puVar6;
            uStack_358 = puVar6[1];
            uVar1 = *(undefined4 *)((longlong)puVar9 + 4);
            uVar2 = *(undefined4 *)(puVar9 + 1);
            uVar3 = *(undefined4 *)((longlong)puVar9 + 0xc);
            *(undefined4 *)puVar6 = *(undefined4 *)puVar9;
            *(undefined4 *)((longlong)puVar6 + 4) = uVar1;
            *(undefined4 *)(puVar6 + 1) = uVar2;
            *(undefined4 *)((longlong)puVar6 + 0xc) = uVar3;
            *puVar9 = local_360;
            puVar9[1] = uStack_358;
          }
          plVar8 = local_410;
        }
        goto LAB_1421f17f5;
      }
LAB_1421f17e6:
      FUN_1421f1280(puVar12,lVar5,param_3,param_4);
LAB_1421f17f5:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  return;
code_r0x0001421f1679:
  local_408 = *puVar12;
  local_400 = puVar10[3];
  if (local_400 != 0) {
    LOCK();
    *(int *)(local_400 + 8) = *(int *)(local_400 + 8) + 1;
    UNLOCK();
  }
  local_3f8 = *puVar11;
  local_3f0 = puVar11[1];
  if (local_3f0 != 0) {
    LOCK();
    *(int *)(local_3f0 + 8) = *(int *)(local_3f0 + 8) + 1;
    UNLOCK();
  }
  cVar4 = FUN_1421f29d0(param_4,&local_3f8,&local_408);
  if (cVar4 == '\0') goto LAB_1421f1670;
LAB_1421f16c3:
  do {
    puVar7 = puVar6;
    puVar6 = puVar7 + -2;
    if (puVar6 <= puVar11) break;
    local_3e8 = *puVar11;
    local_3e0 = puVar11[1];
    if (local_3e0 != 0) {
      LOCK();
      *(int *)(local_3e0 + 8) = *(int *)(local_3e0 + 8) + 1;
      UNLOCK();
    }
    local_3d8 = *puVar6;
    local_3d0 = puVar7[-1];
    if (local_3d0 != 0) {
      LOCK();
      *(int *)(local_3d0 + 8) = *(int *)(local_3d0 + 8) + 1;
      UNLOCK();
    }
    cVar4 = FUN_1421f29d0(param_4,&local_3d8,&local_3e8);
  } while (cVar4 == '\0');
  if (puVar12 <= puVar6) {
    if (puVar12 != puVar6) {
      local_380 = *puVar12;
      uStack_378 = puVar10[3];
      uVar1 = *(undefined4 *)((longlong)puVar7 + -0xc);
      uVar2 = *(undefined4 *)(puVar7 + -1);
      uVar3 = *(undefined4 *)((longlong)puVar7 + -4);
      *(undefined4 *)puVar12 = *(undefined4 *)puVar6;
      *(undefined4 *)((longlong)puVar10 + 0x14) = uVar1;
      *(undefined4 *)(puVar10 + 3) = uVar2;
      *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar3;
      *puVar6 = local_380;
      puVar7[-1] = uStack_378;
    }
    goto LAB_1421f1670;
  }
  if (puVar11 != puVar6) {
    local_370 = *puVar11;
    uStack_368 = puVar11[1];
    uVar1 = *(undefined4 *)((longlong)puVar7 + -0xc);
    uVar2 = *(undefined4 *)(puVar7 + -1);
    uVar3 = *(undefined4 *)((longlong)puVar7 + -4);
    *(undefined4 *)puVar11 = *(undefined4 *)puVar6;
    *(undefined4 *)((longlong)puVar11 + 4) = uVar1;
    *(undefined4 *)(puVar11 + 1) = uVar2;
    *(undefined4 *)((longlong)puVar11 + 0xc) = uVar3;
    *puVar6 = local_370;
    puVar7[-1] = uStack_368;
  }
  local_418 = local_418 + -1;
  if ((longlong)((longlong)puVar6 + (-0x10 - (longlong)puVar11) & 0xfffffffffffffff0U) <
      (longlong)((longlong)puVar9 - (longlong)puVar12 & 0xfffffffffffffff0U)) {
    if (puVar12 < puVar9) {
      *plVar8 = (longlong)puVar12;
      plVar8[1] = (longlong)puVar9;
      *(int *)(plVar8 + 2) = local_418;
      plVar8 = plVar8 + 3;
      local_410 = plVar8;
    }
    if (puVar6 <= puVar11 + 2) goto LAB_1421f17f5;
    puVar9 = puVar7 + -4;
    puVar12 = puVar11;
  }
  else {
    if (puVar11 + 2 < puVar6) {
      *plVar8 = (longlong)puVar11;
      plVar8[1] = (longlong)(puVar7 + -4);
      *(int *)(plVar8 + 2) = local_418;
      plVar8 = plVar8 + 3;
      local_410 = plVar8;
    }
    if (puVar9 <= puVar12) goto LAB_1421f17f5;
  }
  lVar5 = ((longlong)puVar9 - (longlong)puVar12 >> 4) + 1;
  puVar11 = puVar12;
  if (local_418 == 0) goto LAB_1421f17e6;
  goto LAB_1421f1630;
}



// FUNCTION 1421f1900 FUN_1421f1900 body=475 status=ok
// SIG undefined FUN_1421f1900(void)

int FUN_1421f1900(longlong *param_1,longlong *param_2)

{
  int iVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  byte local_res8 [8];
  longlong *local_res10;
  undefined1 local_res20 [8];
  
  iVar1 = (int)param_1[1];
  lVar10 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  lVar8 = 0;
  iVar11 = 0;
  local_res10 = param_2;
  if (((int)((longlong *)*param_1)[1] != 0) &&
     (plVar3 = *(longlong **)*param_1, plVar3 != (longlong *)0x0)) {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
    lVar8 = *plVar3;
  }
  local_res8[0] = lVar8 != *param_2;
  lVar8 = 0;
  iVar12 = 0;
  do {
    bVar2 = local_res8[0];
    lVar8 = lVar8 + 1;
    iVar13 = iVar12 + 1;
    if (lVar8 < lVar10) {
      lVar7 = lVar8 * 0x10;
      plVar3 = local_res10;
      do {
        lVar4 = 0;
        if ((*(int *)(*param_1 + 8 + lVar7) != 0) &&
           (plVar5 = *(longlong **)(*param_1 + lVar7), plVar5 != (longlong *)0x0)) {
          plVar3 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5,local_res20);
          lVar4 = *plVar3;
          plVar3 = local_res10;
        }
        if ((bool)bVar2 != (lVar4 != *plVar3)) break;
        iVar13 = iVar13 + 1;
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 0x10;
      } while (lVar8 < lVar10);
    }
    iVar9 = iVar13 - iVar12;
    if (local_res8[0] == 0) {
      plVar3 = (longlong *)((longlong)iVar12 * 0x10 + *param_1);
      for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        if ((int)plVar3[1] == 0) {
          plVar6 = (longlong *)*plVar3;
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = (longlong *)*plVar3;
          plVar6 = plVar5;
        }
        if (plVar5 == (longlong *)0x0) {
          if (((int)plVar3[1] != 0) && (plVar6 != (longlong *)0x0)) {
            lVar7 = *plVar6;
            goto LAB_1421f1a63;
          }
        }
        else {
          lVar7 = *plVar5;
          plVar6 = plVar5;
LAB_1421f1a63:
          (**(code **)(lVar7 + 0x28))(plVar6,0);
          if (*plVar3 != 0) {
            lVar7 = FMemory::Realloc(*plVar3,0,0);
            *plVar3 = lVar7;
          }
          *(undefined4 *)(plVar3 + 1) = 0;
        }
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 2;
      }
    }
    else {
      if (iVar11 != iVar12) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar11 * 0x10 + *param_1),
                   (void *)((longlong)iVar12 * 0x10 + *param_1),(longlong)iVar9 << 4);
      }
      iVar11 = iVar11 + iVar9;
    }
    local_res8[0] = local_res8[0] ^ 1;
    iVar12 = iVar13;
    if (lVar10 <= lVar8) {
      *(int *)(param_1 + 1) = iVar11;
      return iVar1 - iVar11;
    }
  } while( true );
}



// FUNCTION 1421f1ae0 TryLoadClass<ULevelSequenceBurnIn> body=122 status=ok
// SIG undefined TryLoadClass<ULevelSequenceBurnIn>(void)

undefined8 FSoftClassPath::TryLoadClass<ULevelSequenceBurnIn>(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  longlong local_18 [2];
  
  if (*param_1 != 0) {
    puVar1 = (undefined8 *)FSoftObjectPath::ToString(param_1,local_18);
    if (*(int *)(puVar1 + 1) == 0) {
      puVar3 = &DAT_143f3eda8;
    }
    else {
      puVar3 = (undefined2 *)*puVar1;
    }
    uVar2 = UUGCutsceneScreenUW::GetPrivateStaticClass();
    uVar2 = FUN_141799830(uVar2,0,puVar3,0,0,0);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    return uVar2;
  }
  return 0;
}



// FUNCTION 1421f1b60 FUN_1421f1b60 body=667 status=ok
// SIG undefined FUN_1421f1b60(void)

undefined8 * FUN_1421f1b60(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_144ff7470;
  param_1[0x8b] = &PTR_LAB_144ff7b80;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  *(undefined8 *)((longlong)param_1 + 0x474) = 0;
  *(undefined2 *)((longlong)param_1 + 0x47c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x47e) = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  *(undefined1 *)(param_1 + 0x95) = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  FWeakObjectPtr::operator=(param_1 + 0xa1,0);
  param_1[0xa2] = 0;
  FWeakObjectPtr::operator=(param_1 + 0xa3,0);
  param_1[0xa4] = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"SceneComp",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1429ff160();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x2d] = uVar3;
  puVar1 = (undefined8 *)FName::FName(local_res8,"BindingOverrides",1);
  uVar3 = *puVar1;
  uVar2 = UMovieSceneBindingOverrides::GetPrivateStaticClass();
  uVar3 = FUN_141789050(param_2,param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x9d] = uVar3;
  puVar1 = (undefined8 *)FName::FName(local_res8,"BurnInOptions",1);
  uVar3 = *puVar1;
  uVar2 = ULevelSequenceBurnInOptions::GetPrivateStaticClass();
  uVar3 = FUN_141789050(param_2,param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x9c] = uVar3;
  puVar1 = (undefined8 *)FName::FName(local_res8,"InstanceData",1);
  uVar3 = *puVar1;
  uVar2 = UDefaultLevelSequenceInstanceData::GetPrivateStaticClass();
  uVar3 = FUN_141789050(param_2,param_1,uVar3,uVar2,uVar2,1,0,0);
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  param_1[0x9f] = uVar3;
  *(undefined1 *)(param_1 + 0x9e) = 0;
  *(undefined1 *)(param_1 + 0x8c) = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"OnCancelStopTicking",1);
  FWeakObjectPtr::operator=(param_1 + 0xa1,param_1);
  param_1[0xa2] = *puVar1;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"OnRequestStopTicking",1);
  FWeakObjectPtr::operator=(param_1 + 0xa3,param_1);
  param_1[0xa4] = *puVar1;
  *(undefined1 *)(param_1 + 0xa5) = 1;
  return param_1;
}



// FUNCTION 1421f1e00 FLevelSequenceBindingReference body=789 status=ok
// SIG undefined FLevelSequenceBindingReference(void)

undefined8 *
FLevelSequenceBindingReference::FLevelSequenceBindingReference
          (undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined2 *puVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  void *pvVar13;
  int iVar14;
  void *pvVar15;
  void *local_res8;
  void *local_78;
  int local_70;
  int local_6c;
  void *local_68;
  int local_60;
  longlong local_58 [4];
  
  *param_1 = 0;
  plVar1 = param_1 + 5;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *plVar1 = 0;
  param_1[6] = 0;
  lVar7 = FUN_142a2f930();
  if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
      != lVar7 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((bVar3) || (cVar5 = UObjectBaseUtility::IsIn(param_2,param_3), cVar5 == '\0')) {
    lVar7 = UObjectBaseUtility::GetOutermost(param_2);
    if (lVar7 == 0) {
      return param_1;
    }
    local_res8 = *(void **)(lVar7 + 0x18);
    FName::ToString(&local_res8,&local_68);
    pvVar15 = local_68;
    local_78 = (void *)0x0;
    local_70 = local_60;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
              (&local_78,(2 - (uint)(local_60 != 0)) + local_60,0);
    pvVar13 = local_78;
    ::_guard_xfg_dispatch_icall_nop(local_78,pvVar15,(longlong)local_60 * 2);
    iVar14 = local_70;
    lVar11 = (longlong)local_70;
    local_70 = (2 - (uint)(local_70 != 0)) + local_70;
    if (local_6c < local_70) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78);
      pvVar13 = local_78;
    }
    iVar4 = local_6c;
    iVar12 = local_70;
    puVar2 = (undefined2 *)((longlong)pvVar13 + (lVar11 - (ulonglong)(iVar14 != 0)) * 2);
    *puVar2 = 0x2e;
    puVar2[1] = 0;
    puVar9 = (undefined8 *)UObjectBaseUtility::GetPathName(param_2,local_58,lVar7);
    if (iVar12 < 2) {
      pvVar15 = (void *)*puVar9;
      *puVar9 = 0;
      iVar12 = *(int *)(puVar9 + 1);
      puVar9[1] = 0;
      if (pvVar13 != (void *)0x0) {
        FMemory::Free(pvVar13);
      }
    }
    else {
      iVar14 = *(int *)(puVar9 + 1) + -1;
      if (*(int *)(puVar9 + 1) == 0) {
        iVar14 = 0;
      }
      if ((iVar12 != 0) || (iVar6 = 1, iVar14 == 0)) {
        iVar6 = 0;
      }
      local_78 = pvVar13;
      local_70 = iVar12;
      local_6c = iVar4;
      if (iVar4 < iVar6 + iVar14 + iVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_78);
      }
      iVar4 = local_70;
      local_res8 = (void *)*puVar9;
      pvVar15 = local_78;
      iVar12 = local_70;
      if (iVar14 != 0) {
        lVar7 = (longlong)local_70;
        local_70 = local_70 + (uint)(local_70 == 0) + iVar14;
        if (local_6c < local_70) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,iVar4);
        }
        iVar12 = local_70;
        pvVar15 = local_78;
        pvVar13 = (void *)((longlong)local_78 + (lVar7 - (ulonglong)(iVar4 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(pvVar13,local_res8,(longlong)iVar14 * 2);
        *(undefined2 *)((longlong)pvVar13 + (longlong)iVar14 * 2) = 0;
      }
    }
    if (local_58[0] != 0) {
      FMemory::Free();
    }
    local_78 = (void *)0x0;
    local_70 = iVar12;
    if (iVar12 == 0) {
      local_6c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,iVar12,0);
      ::_guard_xfg_dispatch_icall_nop(local_78,pvVar15,(longlong)iVar12 * 2);
    }
    uVar10 = FSoftObjectPath::FSoftObjectPath(local_58,&local_78);
    FSoftObjectPath::operator=(param_1 + 2,uVar10);
    if (pvVar15 != (void *)0x0) {
      FMemory::Free(pvVar15);
    }
  }
  else {
    plVar8 = (longlong *)UObjectBaseUtility::GetPathName(param_2,&local_68,param_3);
    if (plVar1 != plVar8) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = *plVar8;
      *plVar8 = 0;
      *(int *)(param_1 + 6) = (int)plVar8[1];
      *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)plVar8 + 0xc);
      plVar8[1] = 0;
    }
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1421f2120 FUN_1421f2120 body=364 status=ok
// SIG undefined FUN_1421f2120(void)

undefined8 * FUN_1421f2120(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_38;
  longlong *local_30;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__144ff8040;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  puVar5 = (undefined8 *)FName::FName(local_res10,"LevelSequence",1);
  uVar4 = *puVar5;
  uVar6 = FUN_14168dc80();
  lVar7 = FUN_141690010(uVar6,uVar4);
  puVar5 = *(undefined8 **)(lVar7 + 8);
  puVar10 = puVar5 + (longlong)*(int *)(lVar7 + 0x10) * 2;
  for (; puVar5 != puVar10; puVar5 = puVar5 + 2) {
    plVar8 = (longlong *)0x0;
    if (*(int *)(puVar5 + 1) != 0) {
      plVar8 = (longlong *)*puVar5;
    }
    (**(code **)(*plVar8 + 0x38))(plVar8,&local_38);
    iVar3 = *(int *)(param_1 + 0xe);
    *(int *)(param_1 + 0xe) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x74) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xd,iVar3);
    }
    plVar8 = local_30;
    puVar9 = (undefined8 *)((longlong)iVar3 * 0x10 + param_1[0xd]);
    *puVar9 = local_38;
    puVar9[1] = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
    }
  }
  local_res8[0] = 0;
  FUN_1421f1550(param_1[0xd],(longlong)*(int *)(param_1 + 0xe),0,local_res8);
  return param_1;
}



// FUNCTION 1421f2290 ULevelSequence body=277 status=ok
// SIG undefined ULevelSequence(void)

undefined8 * ULevelSequence::ULevelSequence(undefined8 *param_1)

{
  UMovieSceneSequence::UMovieSceneSequence();
  *param_1 = &PTR_FUN_144ff6ba8;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)((longlong)param_1 + 900) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0xffffffff;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined4 *)((longlong)param_1 + 0x424) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x87) = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)((longlong)param_1 + 0x474) = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0xffffffff;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0;
  *(undefined1 *)((longlong)param_1 + 0x341) = 1;
  return param_1;
}



// FUNCTION 1421f23b0 FUN_1421f23b0 body=168 status=ok
// SIG undefined FUN_1421f23b0(void)

undefined8 * FUN_1421f23b0(undefined8 *param_1)

{
  FUN_1420d5de0();
  *param_1 = &PTR__scalar_deleting_destructor__144ff7b90;
  param_1[0x20] = &PTR_LAB_144ff7ff0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x18;
  *(undefined4 *)((longlong)param_1 + 0x224) = 1;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x18;
  *(undefined4 *)((longlong)param_1 + 0x244) = 1;
  *(undefined1 *)(param_1 + 0x4a) = 4;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0x1e;
  *(undefined4 *)(param_1 + 0x4b) = 1;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0xffffffff;
  return param_1;
}



// FUNCTION 1421f2460 ULevelSequenceBurnInOptions body=254 status=ok
// SIG undefined ULevelSequenceBurnInOptions(void)

undefined8 * ULevelSequenceBurnInOptions::ULevelSequenceBurnInOptions(undefined8 *param_1)

{
  void *_Src;
  longlong lVar1;
  void *pvVar2;
  void *local_38;
  ulonglong local_30;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
  FUN_141781840();
  *(undefined1 *)(param_1 + 5) = 0;
  pvVar2 = (void *)0x0;
  *param_1 = &PTR__scalar_deleting_destructor__144ff71f8;
  local_38 = (void *)0x0;
  local_30 = 0x30;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  _Src = local_38;
  FGenericPlatformString::Memcpy(local_38,L"/Engine/Sequencer/DefaultBurnIn.DefaultBurnIn_C",0x60);
  lVar1 = (longlong)(int)local_30;
  local_28 = (void *)0x0;
  local_20 = (int)local_30;
  if ((int)local_30 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_30 & 0xffffffff,0);
    pvVar2 = local_28;
    ::_guard_xfg_dispatch_icall_nop(local_28,_Src,lVar1 * 2);
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_28 = pvVar2;
  FUN_1417978e0(param_1 + 6,&local_28);
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 1421f2560 FUN_1421f2560 body=594 status=ok
// SIG undefined FUN_1421f2560(void)

undefined8 * FUN_1421f2560(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_28;
  longlong *local_20;
  
  FUN_141f3a660();
  plVar6 = (longlong *)0x0;
  *param_1 = &PTR_FUN_144ff6ea0;
  param_1[5] = &PTR_LAB_144ff7148;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x804) = 0;
  *(undefined1 *)(param_1 + 0x102) = 4;
  *(undefined4 *)((longlong)param_1 + 0x814) = 0x1e;
  *(undefined4 *)(param_1 + 0x103) = 1;
  *(undefined1 *)(param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x824) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x105) = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  *(undefined4 *)(param_1 + 0x10e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x874) = 0;
  param_1[0x110] = 0;
  *(undefined4 *)(param_1 + 0x111) = 0;
  lVar3 = operator_new(0x78);
  plVar4 = plVar6;
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_1421f2120(lVar3);
  }
  plVar5 = (longlong *)operator_new(0x18);
  plVar7 = plVar6;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = (longlong)plVar4;
    plVar7 = plVar5;
  }
  plVar5 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = plVar6;
  }
  local_28 = plVar4;
  local_20 = plVar7;
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
      if (0 < iVar2) goto LAB_1421f2736;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar4;
    plVar6 = (longlong *)plVar5[1];
    if (plVar7 != plVar6) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar6 = (longlong *)plVar5[1];
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
      plVar5[1] = (longlong)plVar7;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar7 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
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
LAB_1421f2736:
  if ((longlong **)(param_1 + 0xf7) != &local_28) {
    param_1[0xf7] = plVar4;
    local_28 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xf8,&local_20);
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
  return param_1;
}



// FUNCTION 1421f27c0 ~TArray<FLevelSequenceBindingReference,FDefaultAllocator> body=114 status=ok
// SIG undefined ~TArray<FLevelSequenceBindingReference,FDefaultAllocator>(void)

void TArray<FLevelSequenceBindingReference,FDefaultAllocator>::
     ~TArray<FLevelSequenceBindingReference,FDefaultAllocator>(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (plVar1[5] != 0) {
        FMemory::Free();
      }
      if (plVar1[3] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 7;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 1421f2840 ~TSparseArray<TSetElement<TTuple<FGuid,FLevelSequenceBindingReferenceArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=396 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FGuid,FLevelSequenceBindingReferenceArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FGuid,FLevelSequenceBindingReferenceArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FGuid,FLevelSequenceBindingReferenceArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
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
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_1421f2901;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
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
LAB_1421f2901:
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
      TArray<FLevelSequenceBindingReference,FDefaultAllocator>::
      ~TArray<FLevelSequenceBindingReference,FDefaultAllocator>
                (*param_1 + ((longlong)iStack_1c * 5 + 2) * 8);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
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
  }
  return;
}



// FUNCTION 1421f29d0 FUN_1421f29d0 body=204 status=ok
// SIG undefined FUN_1421f29d0(void)

bool FUN_1421f29d0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  
  plVar4 = (longlong *)*param_3;
  bVar6 = (**(code **)(*(longlong *)*param_2 + 0x18))();
  bVar7 = (**(code **)(*plVar4 + 0x18))(plVar4);
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
  return bVar7 < bVar6;
}



// FUNCTION 1421f2ac0 FUN_1421f2ac0 body=183 status=ok
// SIG undefined FUN_1421f2ac0(void)

longlong FUN_1421f2ac0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x4d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x4a0);
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
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_143fddd00;
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x530);
  }
  return param_1;
}



// FUNCTION 1421f2b80 FUN_1421f2b80 body=43 status=ok
// SIG undefined FUN_1421f2b80(void)

undefined8 * FUN_1421f2b80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_144ff6b80;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1421f2bb0 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FLevelSequenceSpawnRegister::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x68);
  FUN_141f3bce0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1421f2bf0 FUN_1421f2bf0 body=283 status=ok
// SIG undefined FUN_1421f2bf0(void)

longlong FUN_1421f2bf0(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x488) = 0;
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FLevelSequenceObject>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x440,0);
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x440) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x438) = 0;
  if (*(longlong *)(param_1 + 0x430) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x3f0);
  *(undefined4 *)(param_1 + 1000) = 0;
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FGuid,FLevelSequenceBindingReferenceArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FGuid,FLevelSequenceBindingReferenceArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x3a0);
  *(undefined4 *)(param_1 + 0x398) = 0;
  if (*(longlong *)(param_1 + 0x390) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSoftObjectPtr<AActor>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FName,TSoftObjectPtr<AActor>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x350);
  FMovieSceneEvaluationTemplate::~FMovieSceneEvaluationTemplate(param_1 + 0x50);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x38);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x490);
  }
  return param_1;
}



// FUNCTION 1421f2d10 `scalar_deleting_destructor' body=90 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong ULevelSequenceBurnIn::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FMemory::Free();
  }
  FUN_141300980(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x268);
  }
  return param_1;
}



// FUNCTION 1421f2d70 FUN_1421f2d70 body=155 status=ok
// SIG undefined FUN_1421f2d70(void)

longlong FUN_1421f2d70(longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x888) = 0;
  if (*(longlong *)(param_1 + 0x880) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x840);
  if (*(longlong *)(param_1 + 0x830) != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0x820) != '\0') {
    *(undefined1 *)(param_1 + 0x820) = 0;
  }
  if (*(longlong *)(param_1 + 0x7f0) != 0) {
    FMemory::Free();
  }
  FUN_141f3bd50(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x890);
  }
  return param_1;
}



// FUNCTION 1421f2e10 AddBinding body=252 status=ok
// SIG undefined AddBinding(void)

void FLevelSequenceBindingReferences::AddBinding
               (longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  int local_res18 [2];
  undefined8 local_18 [2];
  
  lVar3 = FUN_1428eccf0();
  if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
      != lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    FUN_14161cb00(param_1 + 10,local_res18,param_2,0);
  }
  else {
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res18,param_2);
    if ((local_res18[0] == -1) || (lVar3 = *param_1 + (longlong)local_res18[0] * 0x28, lVar3 == 0))
    {
      local_18[0] = param_2;
      FUN_1421f0e40(param_1,local_res18,local_18,0);
      lVar3 = *param_1 + (longlong)local_res18[0] * 0x28;
    }
    iVar1 = *(int *)(lVar3 + 0x18);
    *(int *)(lVar3 + 0x18) = iVar1 + 1;
    if (*(int *)(lVar3 + 0x1c) < iVar1 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                ((longlong *)(lVar3 + 0x10),iVar1);
    }
    FLevelSequenceBindingReference::FLevelSequenceBindingReference
              ((longlong)iVar1 * 0x38 + *(longlong *)(lVar3 + 0x10),param_3,param_4);
  }
  return;
}



// FUNCTION 1421f2f10 FUN_1421f2f10 body=71 status=ok
// SIG undefined FUN_1421f2f10(void)

void FUN_1421f2f10(longlong *param_1)

{
  longlong *plVar1;
  
  FUN_142223710();
  plVar1 = (longlong *)param_1[0x96];
  if (plVar1 == (longlong *)0x0) {
    (**(code **)(*param_1 + 0x6e8))(param_1);
    plVar1 = (longlong *)param_1[0x96];
    if (plVar1 == (longlong *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001421f2f4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x278))();
  return;
}



// FUNCTION 1421f2f80 CanAnimateObject body=185 status=ok
// SIG undefined CanAnimateObject(void)

ulonglong ULevelSequence::CanAnimateObject(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_1428dfc70();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
     (uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  if ((char)uVar3 == '\0') {
    lVar2 = FUN_1428e7a40();
    iVar1 = *(int *)(lVar2 + 0x90);
    uVar3 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
       (uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
       *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
      uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
      uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
    }
    if ((char)uVar3 == '\0') {
      lVar2 = FUN_1428eccf0();
      iVar1 = *(int *)(lVar2 + 0x90);
      uVar3 = (longlong)iVar1;
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
         (uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
         *(longlong *)(uVar3 + (longlong)iVar1 * 8) != lVar2 + 0x88)) {
        uVar3 = uVar3 & 0xffffffffffffff00;
      }
      else {
        uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
      }
      if ((char)uVar3 == '\0') {
        return uVar3;
      }
    }
  }
  return CONCAT71((int7)(uVar3 >> 8),1);
}



// FUNCTION 1421f3080 FUN_1421f3080 body=56 status=ok
// SIG undefined FUN_1421f3080(void)

void FUN_1421f3080(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144ff80f0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  }
  return;
}



// FUNCTION 1421f30c0 FUN_1421f30c0 body=92 status=ok
// SIG undefined FUN_1421f30c0(void)

void FUN_1421f30c0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144ff8060;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(param_1 + 0x20);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144ff80a8;
  }
  return;
}



// FUNCTION 1421f3120 FUN_1421f3120 body=84 status=ok
// SIG undefined FUN_1421f3120(void)

void FUN_1421f3120(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144ff8130;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_144ff8178;
  }
  return;
}



// FUNCTION 1421f3180 FUN_1421f3180 body=621 status=ok
// SIG undefined FUN_1421f3180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1421f3180(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  longlong local_a8;
  longlong *plStack_a0;
  undefined1 local_98 [40];
  undefined1 local_70;
  ushort local_6e;
  uint local_6c;
  undefined1 local_68 [24];
  longlong local_50;
  longlong *plStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    plVar7 = *(longlong **)(param_3 + 0xe);
  }
  else {
    lVar4 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
    if ((lVar4 != 0) && ((*(uint *)(lVar4 + 0x830) & 0x400) == 0)) {
      FActorSpawnParameters::FActorSpawnParameters(local_98);
      local_6c = local_6c | 0x40;
      local_6e = local_6e | 8;
      local_70 = 1;
      uVar5 = FUN_1421f9b60();
      local_b8 = local_98;
      plVar6 = (longlong *)UWorld::SpawnActor(lVar4,uVar5,0,0);
      *(undefined4 *)(plVar6 + 0x8d) = *param_3;
      plVar7 = plVar6 + 0x93;
      *(undefined4 *)((longlong)plVar6 + 0x46c) = param_3[1];
      *(undefined1 *)(plVar6 + 0x8e) = *(undefined1 *)(param_3 + 2);
      *(undefined4 *)((longlong)plVar6 + 0x474) = param_3[3];
      *(undefined1 *)(plVar6 + 0x8f) = *(undefined1 *)(param_3 + 4);
      *(undefined1 *)((longlong)plVar6 + 0x479) = *(undefined1 *)((longlong)param_3 + 0x11);
      *(undefined1 *)((longlong)plVar6 + 0x47a) = *(undefined1 *)((longlong)param_3 + 0x12);
      *(undefined1 *)((longlong)plVar6 + 0x47b) = *(undefined1 *)((longlong)param_3 + 0x13);
      *(undefined1 *)((longlong)plVar6 + 0x47c) = *(undefined1 *)(param_3 + 5);
      *(undefined1 *)((longlong)plVar6 + 0x47d) = *(undefined1 *)((longlong)param_3 + 0x15);
      *(undefined1 *)((longlong)plVar6 + 0x47e) = *(undefined1 *)((longlong)param_3 + 0x16);
      plVar6[0x90] = *(longlong *)(param_3 + 6);
      plVar6[0x91] = *(longlong *)(param_3 + 8);
      plVar6[0x92] = *(longlong *)(param_3 + 10);
      plVar3 = *(longlong **)(param_3 + 0xe);
      lVar4 = *(longlong *)(param_3 + 0xc);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      local_a8 = lVar4;
      plStack_a0 = plVar3;
      if (&local_a8 != plVar7) {
        local_a8 = *plVar7;
        plStack_a0 = (longlong *)plVar6[0x94];
        *plVar7 = lVar4;
        plVar6[0x94] = (longlong)plVar3;
        local_50 = lVar4;
        plStack_48 = plVar3;
      }
      plVar7 = plStack_a0;
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_a0 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_a0)(plStack_a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
          }
        }
      }
      *(undefined1 *)(plVar6 + 0x95) = *(undefined1 *)(param_3 + 0x10);
      uVar5 = FSoftObjectPath::FSoftObjectPath(local_68,param_2);
      FSoftObjectPath::operator=(plVar6 + 0x97,uVar5);
      (**(code **)(*plVar6 + 0x6e8))(plVar6);
      *param_4 = plVar6;
      lVar4 = plVar6[0x96];
      FSlateFontInfo::~FSlateFontInfo(param_3);
      return lVar4;
    }
    plVar7 = *(longlong **)(param_3 + 0xe);
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar7 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  return 0;
}



// FUNCTION 1421f33f0 FUN_1421f33f0 body=123 status=ok
// SIG undefined FUN_1421f33f0(void)

undefined8 * FUN_1421f33f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = &PTR_LAB_144ff8018;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_14415dfd8;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar1;
  }
  *param_1 = puVar1;
  param_1[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_1,puVar1,puVar1);
  return param_1;
}



// FUNCTION 1421f3470 FUN_1421f3470 body=107 status=ok
// SIG undefined FUN_1421f3470(void)

void FUN_1421f3470(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar2 = ACameraActor::GetPrivateStaticClass();
  FUN_1417985e0(uVar2,param_1,lVar1,0,0,0,0,0,0);
  return;
}



// FUNCTION 1421f34e0 FUN_1421f34e0 body=107 status=ok
// SIG undefined FUN_1421f34e0(void)

void FUN_1421f34e0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_1428dfc70();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar2 = (**(code **)(*param_2 + 0x148))(param_2), lVar2 != 0)) {
      FUN_142543860(lVar2,param_2,0,0);
    }
  }
  return;
}



// FUNCTION 1421f3550 FUN_1421f3550 body=320 status=ok
// SIG undefined FUN_1421f3550(void)

void FUN_1421f3550(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar7 = *(undefined8 **)(param_1 + 0x68);
  puVar8 = puVar7 + (longlong)*(int *)(param_1 + 0x70) * 2;
  while( true ) {
    if (puVar7 == puVar8) {
      return;
    }
    plVar3 = (longlong *)puVar7[1];
    plVar4 = (longlong *)*puVar7;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    lVar6 = (**(code **)*plVar4)(plVar4);
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
         ) != lVar6 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) break;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
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
    puVar7 = puVar7 + 2;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,param_2);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  LOCK();
  plVar4 = plVar3 + 1;
  lVar6 = *plVar4;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)lVar6 != 1) {
    return;
  }
  (**(code **)*plVar3)(plVar3);
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 != 1) {
    return;
  }
  (**(code **)(*plVar3 + 8))(plVar3,1);
  return;
}



// FUNCTION 1421f3690 FUN_1421f3690 body=248 status=ok
// SIG undefined FUN_1421f3690(void)

void FUN_1421f3690(longlong param_1,undefined1 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *local_18;
  int local_10;
  
  if (((((*(char *)(param_1 + 0x411) != '\0') || (*(char *)(param_1 + 0x412) != '\0')) ||
       (*(char *)(param_1 + 0x413) != '\0')) || (*(char *)(param_1 + 0x414) != '\0')) &&
     (cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x800), cVar1 != '\0')) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x800);
    UWorld::GetPlayerControllerIterator(uVar2,&local_18);
    for (; (-1 < local_10 && (local_10 < (int)local_18[1])); local_10 = local_10 + 1) {
      plVar3 = (longlong *)FWeakObjectPtr::Get(*local_18 + (longlong)local_10 * 8);
      if ((plVar3 != (longlong *)0x0) &&
         (cVar1 = (**(code **)(*plVar3 + 0x768))(plVar3), cVar1 != '\0')) {
        (**(code **)(*plVar3 + 0xba8))
                  (plVar3,param_2,*(undefined1 *)(param_1 + 0x413),*(undefined1 *)(param_1 + 0x414),
                   *(undefined1 *)(param_1 + 0x411),*(undefined1 *)(param_1 + 0x412));
      }
    }
  }
  return;
}



// FUNCTION 1421f3790 FUN_1421f3790 body=141 status=ok
// SIG undefined FUN_1421f3790(void)

undefined8 * FUN_1421f3790(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar5 = (undefined8 *)(**(code **)(param_1 + 8))(local_18);
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



// FUNCTION 1421f3820 Execute body=110 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,ALevelSequenceActor_const_,TTypeWrapper<void>___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),bool>
     ::Execute(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4,
             *(undefined1 *)(param_1 + 0x20));
  return;
}



// FUNCTION 1421f3890 Execute body=101 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,ULevelSequenceBurnIn,TTypeWrapper<void>___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime)>
     ::Execute(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001421f38f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))
            ((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1421f3900 ExecuteIfSafe body=137 status=ok
// SIG undefined ExecuteIfSafe(void)

bool TBaseUObjectMethodDelegateInstance<0,ALevelSequenceActor_const_,void___cdecl(FName_const_&,UPackage_*,enum_EAsyncLoadingResult::Type),bool>
     ::ExecuteIfSafe(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4,
               *(undefined1 *)(param_1 + 0x20));
  }
  return lVar1 != 0;
}



// FUNCTION 1421f3990 ExecuteIfSafe body=129 status=ok
// SIG undefined ExecuteIfSafe(void)

bool TBaseUObjectMethodDelegateInstance<0,ULevelSequenceBurnIn,void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime)>
     ::ExecuteIfSafe(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    (**(code **)(param_1 + 0x10))
              ((int)*(undefined8 *)(param_1 + 0x18) + lVar2,param_2,param_3,param_4);
  }
  return lVar1 != 0;
}



// FUNCTION 1421f3a20 FUN_1421f3a20 body=769 status=ok
// SIG undefined FUN_1421f3a20(void)

void FUN_1421f3a20(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint *puVar19;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_res10;
  int local_a8;
  uint uStack_a4;
  uint *puStack_a0;
  uint local_98;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  uStack_a4 = 1;
  plVar2 = (longlong *)(param_1 + 0x3f0);
  uVar6 = *(uint *)(param_1 + 0x418);
  puVar1 = (uint *)(param_1 + 0x400);
  local_a8 = 0;
  uStack_94 = 0;
  iStack_90 = 0;
  if (uVar6 != 0) {
    puVar19 = *(uint **)(param_1 + 0x410);
    if (*(uint **)(param_1 + 0x410) == (uint *)0x0) {
      puVar19 = puVar1;
    }
    uVar7 = *puVar19;
    iStack_90 = 0;
    local_a8 = 0;
    while (uVar7 == 0) {
      lVar16 = (longlong)local_a8;
      iStack_90 = iStack_90 + 0x20;
      iVar14 = local_a8 + 1;
      bVar8 = (int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_a8;
      local_a8 = iVar14;
      if (bVar8) goto LAB_1421f3afd;
      uVar7 = puVar19[lVar16 + 1];
    }
    uStack_a4 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar14 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar14 = 0x20;
    }
    else {
      iVar14 = 0x1f - iVar14;
    }
    uStack_94 = (iStack_90 - iVar14) + 0x1f;
    if ((int)uVar6 < (int)uStack_94) {
LAB_1421f3afd:
      uStack_94 = uVar6;
    }
  }
  uVar7 = *(uint *)(param_1 + 0x418);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_94;
  local_68 = CONCAT44(uStack_8c,iStack_90);
  uStack_58 = CONCAT44(uStack_a4,local_a8);
  local_98 = -1 << ((byte)uVar7 & 0x1f);
  uVar18 = uVar7 & 0xffffffe0;
  iStack_80 = local_a8;
  uStack_7c = uStack_a4;
  local_res10 = param_2;
  puStack_a0 = puVar1;
  uStack_94 = uVar7;
  local_78 = puVar1;
  local_60 = plVar2;
  puStack_50 = puVar1;
  uStack_40 = local_68;
  local_88 = plVar2;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  if (uVar7 != uVar6) {
    puVar19 = *(uint **)(param_1 + 0x410);
    if (*(uint **)(param_1 + 0x410) == (uint *)0x0) {
      puVar19 = puVar1;
    }
    uVar15 = puVar19[(int)uVar7 >> 5] & local_98;
    iVar14 = (int)uVar7 >> 5;
    while (uVar15 == 0) {
      uVar18 = uVar18 + 0x20;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar14)
      goto LAB_1421f3bd5;
      uVar15 = puVar19[(longlong)iVar14 + 1];
      local_98 = 0xffffffff;
      iVar14 = iVar14 + 1;
    }
    uVar15 = uVar15 - 1 & uVar15 ^ uVar15;
    iVar14 = 0x1f;
    if (uVar15 != 0) {
      for (; uVar15 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar15 == 0) {
      iVar14 = 0x20;
    }
    else {
      iVar14 = 0x1f - iVar14;
    }
    uStack_94 = (uVar18 - iVar14) + 0x1f;
    uVar7 = uStack_94;
    if ((int)uVar6 < (int)uStack_94) {
LAB_1421f3bd5:
      uStack_94 = uVar6;
      uVar7 = uVar6;
    }
  }
  do {
    if ((uStack_6c == uVar7) && (local_78 == puVar1)) {
      bVar8 = true;
    }
    else {
      bVar8 = false;
    }
    if ((bVar8) && (local_88 == plVar2)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (!bVar8) {
      return;
    }
    puVar3 = (undefined4 *)(*local_88 + (longlong)(int)uStack_6c * 0x18);
    FMovieSceneObjectCache::IterateBoundObjects(local_res10,&local_a8,puVar3);
    puVar17 = (undefined4 *)CONCAT44(uStack_a4,local_a8);
    puVar4 = puVar17 + (longlong)(int)puStack_a0 * 2;
    for (; puVar17 != puVar4; puVar17 = puVar17 + 2) {
      local_res8 = *puVar17;
      local_resc = puVar17[1];
      lVar16 = FWeakObjectPtr::Get(&local_res8);
      if (lVar16 == 0) {
LAB_1421f3cb5:
        iVar14 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar14 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar14 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar14);
        }
        uVar9 = puVar3[1];
        uVar10 = puVar3[2];
        uVar11 = puVar3[3];
        puVar5 = (undefined4 *)(*param_3 + (longlong)iVar14 * 0x10);
        *puVar5 = *puVar3;
        puVar5[1] = uVar9;
        puVar5[2] = uVar10;
        puVar5[3] = uVar11;
      }
      else {
        lVar12 = FUN_1428eccf0();
        if ((*(int *)(*(longlong *)(lVar16 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        if (!bVar8) goto LAB_1421f3cb5;
        lVar12 = USignificanceManager::GetWorld(lVar16);
        if (lVar12 == 0) goto LAB_1421f3cb5;
        uVar13 = USignificanceManager::GetWorld(lVar16);
        lVar12 = FUN_1423ac7e0(uVar13);
        if (lVar12 != lVar16) goto LAB_1421f3cb5;
      }
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  } while( true );
}



// FUNCTION 1421f3d30 FUN_1421f3d30 body=381 status=ok
// SIG undefined FUN_1421f3d30(void)

longlong * FUN_1421f3d30(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  
  uVar7 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x7d8);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x7d8);
    lVar4 = UWorld::GetLevelScriptActor(lVar3,0);
    if (lVar4 != 0) {
      uVar5 = UWorld::GetLevelScriptActor(lVar3,0);
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar5;
    }
    plVar9 = *(longlong **)(lVar3 + 0x88);
    uVar8 = (longlong)*(int *)(lVar3 + 0x90) & 0x1fffffffffffffff;
    if (plVar9 + *(int *)(lVar3 + 0x90) < plVar9) {
      uVar8 = uVar7;
    }
    uVar6 = uVar7;
    if (uVar8 != 0) {
      do {
        lVar3 = *plVar9;
        if ((lVar3 != 0) && (lVar4 = FUN_1425477d0(lVar3), lVar4 != 0)) {
          uVar5 = FUN_1425477d0(lVar3);
          iVar1 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar5;
        }
        plVar9 = plVar9 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar8);
    }
  }
  plVar9 = *(longlong **)(param_1 + 0x808);
  uVar8 = (longlong)*(int *)(param_1 + 0x810) & 0x1fffffffffffffff;
  if (plVar9 + *(int *)(param_1 + 0x810) < plVar9) {
    uVar8 = uVar7;
  }
  if (uVar8 != 0) {
    do {
      lVar3 = *plVar9;
      if (lVar3 != 0) {
        iVar1 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
      }
      plVar9 = plVar9 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar8);
  }
  return param_2;
}



// FUNCTION 1421f3eb0 GetStreamingLevel body=380 status=ok
// SIG undefined GetStreamingLevel(void)

longlong GetStreamingLevel(undefined2 **param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined4 uVar6;
  char cVar7;
  undefined8 uVar8;
  int iVar9;
  longlong *plVar10;
  bool bVar11;
  undefined2 *local_38;
  int local_30;
  undefined4 local_2c;
  
  bVar11 = false;
  cVar7 = FPackageName::IsShortPackageName();
  if (cVar7 != '\0') {
    local_38 = (undefined2 *)0x0;
    local_2c = 0;
    iVar9 = *(int *)(param_1 + 1) + -1;
    if (*(int *)(param_1 + 1) == 0) {
      iVar9 = 0;
    }
    local_30 = iVar9 + 2;
    if (0 < local_30) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    }
    uVar6 = local_2c;
    iVar5 = local_30;
    puVar4 = local_38;
    *local_38 = 0x2f;
    _guard_xfg_dispatch_icall_nop(local_38 + 1,*param_1,(longlong)iVar9 * 2);
    puVar4[(longlong)iVar9 + 1] = 0;
    if (param_1 == &local_38) {
      if (puVar4 != (undefined2 *)0x0) {
        FMemory::Free(puVar4);
      }
    }
    else {
      if (*param_1 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      *param_1 = puVar4;
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
    }
  }
  plVar10 = *(longlong **)(param_2 + 0x88);
  plVar1 = plVar10 + *(int *)(param_2 + 0x90);
  do {
    if (plVar10 == plVar1) {
      if (*param_1 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      return 0;
    }
    lVar2 = *plVar10;
    if (lVar2 == 0) {
LAB_1421f3fc2:
      bVar3 = false;
    }
    else {
      bVar11 = true;
      uVar8 = ULevelStreaming::GetWorldAssetPackageName(lVar2,&local_38);
      cVar7 = FString::EndsWith(uVar8,param_1,1);
      if (cVar7 == '\0') goto LAB_1421f3fc2;
      bVar3 = true;
    }
    if ((bVar11) && (bVar11 = false, local_38 != (undefined2 *)0x0)) {
      FMemory::Free();
    }
    if (bVar3) {
      if (*param_1 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      return lVar2;
    }
    plVar10 = plVar10 + 1;
  } while( true );
}



// FUNCTION 1421f4030 FUN_1421f4030 body=177 status=ok
// SIG undefined FUN_1421f4030(void)

longlong FUN_1421f4030(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_1428e7a40();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return param_2[0x23];
    }
    lVar2 = FUN_1428eccf0();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar2 = (**(code **)(*param_2 + 0x148))(param_2);
      if (lVar2 != 0) {
        lVar2 = USignificanceManager::GetWorld(param_2);
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 1421f4100 FUN_1421f4100 body=696 status=ok
// SIG undefined FUN_1421f4100(void)

longlong FUN_1421f4100(longlong param_1,char param_2,undefined1 param_3)

{
  bool bVar1;
  wchar_t *pwVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  int iVar10;
  uint uVar11;
  wchar_t *pwVar12;
  wchar_t *_Source;
  wchar_t *local_68;
  undefined8 local_60;
  wchar_t *local_58;
  ulonglong local_50;
  undefined8 local_48;
  int iStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  
  pwVar12 = (wchar_t *)0x0;
  iVar10 = 0;
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    lVar5 = FUN_141796df0(param_1 + 0x4b8);
    if (lVar5 != 0) {
      lVar6 = UPhysicsConstraintComponent::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return lVar5;
      }
    }
    if (param_2 != '\0') {
      cVar3 = (*(code *)PTR_CanBeUsedOnAnyThread_1464aaa50)();
      if (cVar3 == '\0') {
        lVar5 = FSoftObjectPath::TryLoad(param_1 + 0x4b8);
        if (lVar5 != 0) {
          lVar6 = UPhysicsConstraintComponent::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            return lVar5;
          }
        }
        return 0;
      }
      iStack_40 = 0;
      local_48 = L"荁ǹᅵ粀⠤琀䠊Ƌｈ\xe8a0\x06쌀쳌쳌쳌쳌譈䣂醍Ȉ";
      local_38 = 0;
      local_30 = 0;
      puVar7 = (undefined8 *)operator_new(0x30,&local_38);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_FUN_144ff8060;
        FWeakObjectPtr::operator=(puVar7 + 1,param_1);
        *(undefined4 *)(puVar7 + 2) = (undefined4)local_48;
        *(undefined4 *)((longlong)puVar7 + 0x14) = local_48._4_4_;
        *(int *)(puVar7 + 3) = iStack_40;
        *(undefined4 *)((longlong)puVar7 + 0x1c) = uStack_3c;
        *(undefined1 *)(puVar7 + 4) = param_3;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[5] = uVar8;
        *puVar7 = &PTR_FUN_144ff80a8;
      }
      local_68 = (wchar_t *)0x0;
      local_60 = 0;
      local_58 = (wchar_t *)0x0;
      local_50 = 2;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      pwVar2 = local_58;
      FGenericPlatformString::Memcpy(local_58,&DAT_143f73c90,4);
      if (*(longlong *)(param_1 + 0x4b8) == 0) {
        local_48 = (wchar_t *)0x0;
        iStack_40 = 0;
        uStack_3c = 0;
      }
      else {
        FName::ToString(param_1 + 0x4b8,&local_48);
      }
      _Source = L"";
      pwVar9 = L"";
      if ((uint)local_50 != 0) {
        pwVar9 = pwVar2;
      }
      iVar4 = FUN_141592950(&local_48,pwVar9,0,0,0xffffffff);
      if (-1 < iVar4) {
        if (iStack_40 != 0) {
          iVar10 = iStack_40 + -1;
          _Source = local_48;
        }
        local_58 = (wchar_t *)0x0;
        if (iVar4 < iVar10) {
          iVar10 = iVar4;
        }
        uVar11 = iVar10 + 1;
        if (iVar10 == 0) {
          uVar11 = 0;
        }
        local_50 = (ulonglong)uVar11;
        if (0 < (int)uVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
          pwVar12 = local_58;
          uVar11 = (uint)local_50;
          if (0 < (int)(uint)local_50) {
            wcsncpy(local_58,_Source,(longlong)iVar10);
            pwVar12[iVar10] = L'\0';
          }
        }
        if (local_68 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        local_60 = CONCAT44((int)(local_50 >> 0x20),uVar11);
        local_68 = pwVar12;
      }
      if (local_48 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      if (pwVar2 != (wchar_t *)0x0) {
        FMemory::Free(pwVar2);
      }
      FUN_1416fec20(&local_68,&local_38,0,0,0xffffffff);
      if (local_68 != (wchar_t *)0x0) {
        FMemory::Free();
      }
    }
  }
  return 0;
}



// FUNCTION 1421f43d0 FUN_1421f43d0 body=503 status=ok
// SIG undefined FUN_1421f43d0(void)

void FUN_1421f43d0(longlong param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  bool bVar8;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined2 *local_28;
  int local_20;
  
  puVar7 = (undefined2 *)0x0;
  local_res8 = 0;
  local_res10 = 0;
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar3 = UMovieScene::GetPrivateStaticClass();
  lVar4 = FUN_1417985e0(uVar3,param_1,0,8,0,0,0,0,0);
  *(longlong *)(param_1 + 0x348) = lVar4;
  iVar1 = *DAT_146aede50;
  *(bool *)(lVar4 + 200) = iVar1 == 0;
  if ((iVar1 != 0) && (*(char *)(lVar4 + 0xc9) == '\0')) {
    *(undefined1 *)(lVar4 + 0xc9) = 1;
  }
  local_28 = (undefined2 *)0x0;
  *(bool *)(*(longlong *)(param_1 + 0x348) + 0xca) = *DAT_146aede98 != 0;
  local_res10 = 0x10000ea60;
  local_20 = *(int *)(DAT_146aede68 + 1);
  lVar4 = (longlong)local_20;
  pvVar2 = (void *)*DAT_146aede68;
  puVar6 = puVar7;
  if (local_20 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_20,0);
    puVar6 = local_28;
    _guard_xfg_dispatch_icall_nop(local_28,pvVar2,lVar4 * 2);
  }
  puVar5 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar5 = puVar6;
  }
  TryParseString(&local_res10,puVar5);
  if (puVar6 != (undefined2 *)0x0) {
    FMemory::Free(puVar6);
  }
  local_28 = (undefined2 *)0x0;
  *(undefined8 *)(*(longlong *)(param_1 + 0x348) + 0xb8) = local_res10;
  local_res8 = 0x10000001e;
  local_20 = *(int *)(DAT_146aede80 + 1);
  lVar4 = (longlong)local_20;
  pvVar2 = (void *)*DAT_146aede80;
  bVar8 = local_20 == 0;
  if (!bVar8) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_20,0);
    puVar7 = local_28;
    _guard_xfg_dispatch_icall_nop(local_28,pvVar2,lVar4 * 2);
    bVar8 = local_20 == 0;
  }
  puVar6 = &DAT_143f3eda8;
  if (!bVar8) {
    puVar6 = puVar7;
  }
  TryParseString(&local_res8,puVar6);
  if (puVar7 != (undefined2 *)0x0) {
    FMemory::Free(puVar7);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x348) + 0xc0) = local_res8;
  return;
}



// FUNCTION 1421f45d0 InitializeModule body=59 status=ok
// SIG undefined InitializeModule(void)

undefined8 * FStaticallyLinkedModuleRegistrant<FLevelSequenceModule>::InitializeModule(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR__scalar_deleting_destructor__144ff6b30;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1421f4610 FUN_1421f4610 body=1216 status=ok
// SIG undefined FUN_1421f4610(void)

void FUN_1421f4610(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  undefined1 local_res10 [8];
  longlong local_88;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  undefined1 local_38;
  
  lVar6 = FUN_1421f4100(param_1,1);
  uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  cVar5 = UWorld::IsGameWorld(uVar7);
  if (cVar5 == '\0') {
    return;
  }
  if (lVar6 == 0) {
    return;
  }
  local_70 = (undefined1)param_1[0x8e];
  local_74 = *(undefined4 *)((longlong)param_1 + 0x46c);
  local_78 = (undefined4)param_1[0x8d];
  local_68 = (undefined1)param_1[0x8f];
  local_67 = *(undefined1 *)((longlong)param_1 + 0x479);
  local_66 = *(undefined1 *)((longlong)param_1 + 0x47a);
  local_65 = *(undefined1 *)((longlong)param_1 + 0x47b);
  local_64 = *(undefined1 *)((longlong)param_1 + 0x47c);
  local_63 = *(undefined1 *)((longlong)param_1 + 0x47d);
  local_62 = *(undefined1 *)((longlong)param_1 + 0x47e);
  local_60 = param_1[0x90];
  local_48 = param_1[0x93];
  local_40 = (longlong *)param_1[0x94];
  local_6c = *(undefined4 *)((longlong)param_1 + 0x474);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  lVar8 = param_1[0x9d];
  local_38 = (undefined1)param_1[0x95];
  local_58 = lVar8;
  if (lVar8 == 0) {
    local_50 = 0;
  }
  else {
    uVar7 = UMovieSceneBindingOverridesInterface::GetPrivateStaticClass();
    local_50 = UObjectBaseUtility::GetInterfaceAddress(lVar8,uVar7);
  }
  if ((char)param_1[0x9e] != '\0') {
    local_60 = param_1[0x9f];
  }
  lVar8 = param_1[0x96];
  if (lVar8 != 0) {
    TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(lVar8 + 0x378,param_1 + 0xa1);
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(lVar8 + 0x378);
    lVar8 = param_1[0x96];
    TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(lVar8 + 0x3a8,param_1 + 0xa3);
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(lVar8 + 0x3a8);
    lVar8 = param_1[0x96];
    TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(lVar8 + 0x3b8,param_1 + 0xa3);
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(lVar8 + 0x3b8);
    lVar8 = param_1[0x96];
    TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(lVar8 + 0x398,param_1 + 0xa3);
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(lVar8 + 0x398);
  }
  FName::FName(local_res10,"AnimationPlayer",1);
  lVar8 = (**(code **)(*param_1 + 0x6f0))(param_1,local_res10);
  param_1[0x96] = lVar8;
  uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar8 = param_1[0x96];
  FWeakObjectPtr::operator=(lVar8 + 0x800,uVar7);
  FUN_141f54f80(lVar8,lVar6,&local_78);
  iVar11 = (int)param_1[0x9b];
  puVar9 = (undefined8 *)param_1[0x9a];
  local_88 = 0;
  local_80 = iVar11;
  if (iVar11 == 0) {
    local_7c = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_88,iVar11,0);
    lVar6 = local_88 - (longlong)puVar9;
    do {
      *(undefined8 *)((longlong)puVar9 + lVar6) = *puVar9;
      puVar9 = puVar9 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  uVar4 = local_7c;
  iVar11 = local_80;
  lVar8 = local_88;
  lVar6 = param_1[0x96];
  plVar10 = (longlong *)(lVar6 + 0x830);
  if (plVar10 == &local_88) {
    if (local_88 != 0) {
      FMemory::Free(local_88);
    }
  }
  else {
    if (*plVar10 != 0) {
      FMemory::Free();
    }
    *plVar10 = lVar8;
    *(int *)(lVar6 + 0x838) = iVar11;
    *(undefined4 *)(lVar6 + 0x83c) = uVar4;
  }
  if (param_1[0x96] == 0) goto LAB_1421f4a68;
  FUN_1406a5aa0(param_1[0x96] + 0x378,param_1 + 0xa1);
  FUN_1406a5aa0(param_1[0x96] + 0x3a8,param_1 + 0xa3);
  FUN_1406a5aa0(param_1[0x96] + 0x3b8,param_1 + 0xa3);
  FUN_1406a5aa0(param_1[0x96] + 0x398,param_1 + 0xa3);
  if (param_1[0x96] == 0) goto LAB_1421f4a68;
  if (param_1[0xa0] != 0) {
    FUN_1406f9b00();
    param_1[0xa0] = 0;
  }
  lVar6 = param_1[0x9c];
  if (((lVar6 == 0) || (*(char *)(lVar6 + 0x28) == '\0')) ||
     (lVar6 = FSoftClassPath::TryLoadClass<ULevelSequenceBurnIn>(lVar6 + 0x30), lVar6 == 0))
  goto LAB_1421f4a68;
  lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar8 == 0) || (lVar6 = UUserWidget::CreateWidgetInstance(lVar8,lVar6,0), lVar6 == 0)) {
LAB_1421f4a1a:
    lVar6 = 0;
  }
  else {
    lVar8 = UUGCutsceneScreenUW::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1421f4a1a;
  }
  param_1[0xa0] = lVar6;
  if (lVar6 != 0) {
    FUN_1421f5ee0(param_1[0x9c]);
    FUN_1421fa170(param_1[0xa0],*(undefined8 *)(param_1[0x9c] + 0x48));
    FUN_1421f75e0(param_1[0xa0],param_1);
    UUserWidget::AddToViewport(param_1[0xa0],0);
  }
LAB_1421f4a68:
  if ((char)param_1[0x8c] != '\0') {
    FUN_141f5abf0(param_1[0x96]);
  }
  plVar10 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return;
}



// FUNCTION 1421f4ad0 LocateBoundObjects body=149 status=ok
// SIG undefined LocateBoundObjects(void)

void ULevelSequence::LocateBoundObjects
               (longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_3 != 0) && (lVar2 = FUN_1421f6380(param_1 + 0x350), lVar2 != 0)) {
    iVar1 = *(int *)(param_4 + 0x10);
    *(int *)(param_4 + 0x10) = iVar1 + 1;
    if (*(int *)(param_4 + 0x14) < iVar1 + 1) {
      FUN_1407eebb0(param_4,iVar1);
    }
    lVar3 = *(longlong *)(param_4 + 8);
    if (*(longlong *)(param_4 + 8) == 0) {
      lVar3 = param_4;
    }
    *(longlong *)(lVar3 + (longlong)iVar1 * 8) = lVar2;
  }
  FUN_1421f6160(param_1 + 0x3a0,param_2,param_3,param_4);
  return;
}



// FUNCTION 1421f4b70 MakeSpawnableTemplateFromInstance body=204 status=ok
// SIG undefined MakeSpawnableTemplateFromInstance(void)

undefined8
ULevelSequence::MakeSpawnableTemplateFromInstance
          (longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong local_res8;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x348);
  local_res8 = 0;
  if (param_3 == 0) {
    FUN_1417846f0(uVar1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  uVar2 = FUN_1417985e0(uVar2,uVar1,param_3,0,0,0,0,0,0);
  local_res8 = 0x100000000010100;
  FUN_142869970(param_2,uVar2,0x100000000010100);
  lVar3 = FUN_14222e2a0(uVar2);
  if (lVar3 != 0) {
    local_res8 = local_res8 & 0xffffffff00000000;
    FUN_1422279d0(uVar2,&local_res8);
  }
  return uVar2;
}



// FUNCTION 1421f4c40 FUN_1421f4c40 body=882 status=ok
// SIG undefined FUN_1421f4c40(void)

void FUN_1421f4c40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined4 *puVar13;
  int local_c8;
  uint uStack_c4;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined4 *local_88;
  undefined8 local_80;
  int iStack_78;
  uint uStack_74;
  uint *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 uStack_50;
  uint *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar5 = *(longlong *)(param_1 + -8);
  if (lVar5 != 0) {
    lVar7 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      puVar13 = (undefined4 *)*param_4;
      local_88 = puVar13 + (longlong)*(int *)(param_4 + 1) * 2;
      if (puVar13 != local_88) {
        do {
          local_a8 = *puVar13;
          local_a4 = puVar13[1];
          lVar7 = FWeakObjectPtr::Get(&local_a8);
          if (lVar7 != 0) {
            lVar8 = FUN_1428dfc70();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) {
              uStack_c4 = 1;
              plVar2 = (longlong *)(lVar7 + 0x2b0);
              local_c8 = 0;
              uVar3 = *(uint *)(lVar7 + 0x2d8);
              puVar1 = (uint *)(lVar7 + 0x2c0);
              uStack_b4 = 0;
              iStack_b0 = 0;
              if (uVar3 != 0) {
                puVar12 = *(uint **)(lVar7 + 0x2d0);
                if (*(uint **)(lVar7 + 0x2d0) == (uint *)0x0) {
                  puVar12 = puVar1;
                }
                uVar4 = *puVar12;
                iStack_b0 = 0;
                local_c8 = 0;
                while (uVar4 == 0) {
                  lVar8 = (longlong)local_c8;
                  iStack_b0 = iStack_b0 + 0x20;
                  iVar9 = local_c8 + 1;
                  bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_c8;
                  local_c8 = iVar9;
                  if (bVar6) goto LAB_1421f4def;
                  uVar4 = puVar12[lVar8 + 1];
                }
                uStack_c4 = -uVar4 & uVar4;
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
                if ((int)uVar3 < (int)uStack_b4) {
LAB_1421f4def:
                  uStack_b4 = uVar3;
                }
              }
              uVar4 = *(uint *)(lVar7 + 0x2d8);
              uStack_68 = CONCAT44(uStack_b4,0xffffffff);
              local_60 = CONCAT44(uStack_ac,iStack_b0);
              uStack_50 = CONCAT44(uStack_c4,local_c8);
              uVar11 = uVar4 & 0xffffffe0;
              iStack_78 = local_c8;
              uStack_74 = uStack_c4;
              local_70 = puVar1;
              local_58 = plVar2;
              puStack_48 = puVar1;
              uStack_40 = uStack_68;
              uStack_38 = local_60;
              local_80 = plVar2;
              uStack_b4 = uVar4;
              if (uVar4 != uVar3) {
                puVar12 = *(uint **)(lVar7 + 0x2d0);
                if (*(uint **)(lVar7 + 0x2d0) == (uint *)0x0) {
                  puVar12 = puVar1;
                }
                uVar10 = puVar12[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
                iVar9 = (int)uVar4 >> 5;
                while (uVar10 == 0) {
                  uVar11 = uVar11 + 0x20;
                  if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9)
                  goto LAB_1421f4ec9;
                  uVar10 = puVar12[(longlong)iVar9 + 1];
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
                uStack_b4 = (uVar11 - iVar9) + 0x1f;
                if ((int)uVar3 < (int)uStack_b4) {
LAB_1421f4ec9:
                  uStack_b4 = uVar3;
                }
              }
              while( true ) {
                if ((uStack_68._4_4_ == uStack_b4) && (local_70 == puVar1)) {
                  bVar6 = true;
                }
                else {
                  bVar6 = false;
                }
                if ((bVar6) && (local_80 == plVar2)) {
                  bVar6 = false;
                }
                else {
                  bVar6 = true;
                }
                if (!bVar6) break;
                lVar8 = *(longlong *)(*local_80 + (longlong)(int)uStack_68._4_4_ * 0x10);
                if (lVar8 != 0) {
                  FTickFunction::AddPrerequisite(lVar8 + 0x30,lVar5,lVar5 + 0x28);
                }
                uStack_68 = CONCAT44(uStack_68._4_4_,(uint)uStack_68 & ~uStack_74);
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_78);
              }
              FTickFunction::AddPrerequisite(lVar7 + 0x28,lVar5,lVar5 + 0x28);
              FWeakObjectPtr::operator=(&local_98,lVar7);
              local_90 = local_98;
              FUN_1421f0a50(param_1 + 0x818,local_a0);
            }
          }
          puVar13 = puVar13 + 2;
        } while (puVar13 != local_88);
      }
    }
  }
  return;
}



// FUNCTION 1421f5030 FUN_1421f5030 body=1599 status=ok
// SIG undefined FUN_1421f5030(void)

void FUN_1421f5030(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  void *_Dst;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined4 local_res8;
  undefined4 local_resc;
  ulonglong local_res10;
  int local_d8;
  uint uStack_d4;
  uint uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b0;
  uint *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong *local_90;
  int iStack_88;
  uint uStack_84;
  uint *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 uStack_60;
  uint *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_1421f3690(param_1,0);
  lVar11 = *(longlong *)(param_1 + 0x20);
  if (lVar11 != 0) {
    lVar6 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      if (*(char *)(param_1 + 0x80d) != '\0') {
        *(undefined1 *)(param_1 + 0x80d) = 0;
        lVar6 = FWeakObjectPtr::Get();
        if ((((lVar6 != 0) && (*(longlong *)(lVar6 + 400) != 0)) &&
            (plVar7 = (longlong *)FUN_14244f490(*(longlong *)(lVar6 + 400),0),
            plVar7 != (longlong *)0x0)) &&
           ((*(char *)((longlong)plVar7 + 0x7d5) != '\0' &&
            (*(undefined1 *)((longlong)plVar7 + 0x7d5) = 0, plVar7[0xfb] != 0)))) {
          plVar7[0xfb] = 0;
          (**(code **)(*plVar7 + 0xe18))();
        }
      }
      uStack_d4 = 1;
      plVar7 = (longlong *)(param_1 + 0x840);
      local_d8 = 0;
      uVar2 = *(uint *)(param_1 + 0x868);
      puStack_a8 = (uint *)(param_1 + 0x850);
      uStack_c4 = 0;
      iStack_c0 = 0;
      if (uVar2 != 0) {
        puVar15 = *(uint **)(param_1 + 0x860);
        if (*(uint **)(param_1 + 0x860) == (uint *)0x0) {
          puVar15 = puStack_a8;
        }
        uVar3 = *puVar15;
        iStack_c0 = 0;
        local_d8 = 0;
        while (uVar3 == 0) {
          lVar6 = (longlong)local_d8;
          iStack_c0 = iStack_c0 + 0x20;
          iVar10 = local_d8 + 1;
          bVar5 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d8;
          local_d8 = iVar10;
          if (bVar5) goto LAB_1421f51f0;
          uVar3 = puVar15[lVar6 + 1];
        }
        uStack_d4 = uVar3 - 1 & uVar3 ^ uVar3;
        iVar10 = 0x1f;
        if (uStack_d4 != 0) {
          for (; uStack_d4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
          }
        }
        if (uStack_d4 == 0) {
          iVar10 = 0x20;
        }
        else {
          iVar10 = 0x1f - iVar10;
        }
        uStack_c4 = (iStack_c0 - iVar10) + 0x1f;
        if ((int)uVar2 < (int)uStack_c4) {
LAB_1421f51f0:
          uStack_c4 = uVar2;
        }
      }
      uVar3 = *(uint *)(param_1 + 0x868);
      uStack_a0 = CONCAT44(uStack_c4,0xffffffff);
      uStack_98 = CONCAT44(uStack_bc,iStack_c0);
      uStack_b0 = CONCAT44(uStack_d4,local_d8);
      uVar14 = uVar3 & 0xffffffe0;
      iStack_88 = local_d8;
      uStack_84 = uStack_d4;
      uStack_c4 = uVar3;
      if (uVar3 != uVar2) {
        puVar15 = *(uint **)(param_1 + 0x860);
        if (*(uint **)(param_1 + 0x860) == (uint *)0x0) {
          puVar15 = puStack_a8;
        }
        uVar12 = puVar15[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
        iVar10 = (int)uVar3 >> 5;
        while (uVar12 == 0) {
          uVar14 = uVar14 + 0x20;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
          goto LAB_1421f52c7;
          uVar12 = puVar15[(longlong)iVar10 + 1];
          iVar10 = iVar10 + 1;
        }
        uVar12 = uVar12 - 1 & uVar12 ^ uVar12;
        iVar10 = 0x1f;
        if (uVar12 != 0) {
          for (; uVar12 >> iVar10 == 0; iVar10 = iVar10 + -1) {
          }
        }
        if (uVar12 == 0) {
          iVar10 = 0x20;
        }
        else {
          iVar10 = 0x1f - iVar10;
        }
        uStack_c4 = (uVar14 - iVar10) + 0x1f;
        if ((int)uVar2 < (int)uStack_c4) {
LAB_1421f52c7:
          uStack_c4 = uVar2;
        }
      }
      local_res10 = (ulonglong)uStack_c4;
      local_80 = puStack_a8;
      uStack_78 = uStack_a0;
      local_70 = uStack_98;
      local_90 = plVar7;
      while( true ) {
        if ((uStack_78._4_4_ == (int)local_res10) && (local_80 == (uint *)(param_1 + 0x850))) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if ((bVar5) && (local_90 == plVar7)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) break;
        uVar4 = *(undefined8 *)(*local_90 + (longlong)uStack_78._4_4_ * 0x10);
        local_res8 = (undefined4)uVar4;
        local_resc = (undefined4)((ulonglong)uVar4 >> 0x20);
        lVar6 = FWeakObjectPtr::Get(&local_res8);
        if (lVar6 != 0) {
          lVar8 = FUN_1428dfc70();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            uStack_d4 = 1;
            plVar1 = (longlong *)(lVar6 + 0x2b0);
            local_d8 = 0;
            uVar2 = *(uint *)(lVar6 + 0x2d8);
            puVar15 = (uint *)(lVar6 + 0x2c0);
            uStack_c4 = 0;
            iStack_c0 = 0;
            if (uVar2 != 0) {
              puVar16 = *(uint **)(lVar6 + 0x2d0);
              if (*(uint **)(lVar6 + 0x2d0) == (uint *)0x0) {
                puVar16 = puVar15;
              }
              uVar3 = *puVar16;
              iStack_c0 = 0;
              local_d8 = 0;
              while (uVar3 == 0) {
                lVar8 = (longlong)local_d8;
                iStack_c0 = iStack_c0 + 0x20;
                iVar10 = local_d8 + 1;
                bVar5 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_d8;
                local_d8 = iVar10;
                if (bVar5) goto LAB_1421f541f;
                uVar3 = puVar16[lVar8 + 1];
              }
              uStack_d4 = -uVar3 & uVar3;
              iVar10 = 0x1f;
              if (uStack_d4 != 0) {
                for (; uStack_d4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
                }
              }
              if (uStack_d4 == 0) {
                iVar10 = 0x20;
              }
              else {
                iVar10 = 0x1f - iVar10;
              }
              uStack_c4 = (iStack_c0 - iVar10) + 0x1f;
              if ((int)uVar2 < (int)uStack_c4) {
LAB_1421f541f:
                uStack_c4 = uVar2;
              }
            }
            uVar3 = *(uint *)(lVar6 + 0x2d8);
            uStack_a0 = CONCAT44(uStack_c4,0xffffffff);
            uStack_98 = CONCAT44(uStack_bc,iStack_c0);
            uStack_60 = CONCAT44(uStack_d4,local_d8);
            uVar14 = uVar3 & 0xffffffe0;
            uStack_b0 = CONCAT44(uStack_d4,local_d8);
            puStack_a8 = puVar15;
            local_68 = plVar1;
            puStack_58 = puVar15;
            uStack_50 = uStack_a0;
            uStack_48 = uStack_98;
            uStack_c4 = uVar3;
            if (uVar3 != uVar2) {
              puVar16 = *(uint **)(lVar6 + 0x2d0);
              if (*(uint **)(lVar6 + 0x2d0) == (uint *)0x0) {
                puVar16 = puVar15;
              }
              uVar12 = puVar16[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
              iVar10 = (int)uVar3 >> 5;
              while (uVar12 == 0) {
                uVar14 = uVar14 + 0x20;
                if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
                goto LAB_1421f54f9;
                uVar12 = puVar16[(longlong)iVar10 + 1];
                iVar10 = iVar10 + 1;
              }
              uVar12 = -uVar12 & uVar12;
              iVar10 = 0x1f;
              if (uVar12 != 0) {
                for (; uVar12 >> iVar10 == 0; iVar10 = iVar10 + -1) {
                }
              }
              if (uVar12 == 0) {
                iVar10 = 0x20;
              }
              else {
                iVar10 = 0x1f - iVar10;
              }
              uStack_c4 = (uVar14 - iVar10) + 0x1f;
              if ((int)uVar2 < (int)uStack_c4) {
LAB_1421f54f9:
                uStack_c4 = uVar2;
              }
            }
            while( true ) {
              if ((uStack_a0._4_4_ == uStack_c4) && (puStack_a8 == puVar15)) {
                bVar5 = true;
              }
              else {
                bVar5 = false;
              }
              if (bVar5) break;
              lVar8 = *(longlong *)(*plVar1 + (longlong)(int)uStack_a0._4_4_ * 0x10);
              if (lVar8 != 0) {
                FTickFunction::RemovePrerequisite(lVar8 + 0x30,lVar11,lVar11 + 0x28);
              }
              uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b0);
            }
            FTickFunction::RemovePrerequisite(lVar6 + 0x28,lVar11);
          }
        }
        uStack_78 = CONCAT44(uStack_78._4_4_,(uint)uStack_78 & ~uStack_84);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_88);
      }
      *(undefined4 *)(param_1 + 0x848) = 0;
      if (0x7fffffff < *(uint *)(param_1 + 0x84c)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar7,0);
      }
      *(undefined4 *)(param_1 + 0x870) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x874) = 0;
      iVar10 = *(int *)(param_1 + 0x868) + 0x1f;
      _Dst = *(void **)(param_1 + 0x860);
      if (*(void **)(param_1 + 0x860) == (void *)0x0) {
        _Dst = (void *)(param_1 + 0x850);
      }
      _guard_xfg_dispatch_icall_nop
                (_Dst,0,(longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) << 2);
      *(undefined4 *)(param_1 + 0x868) = 0;
      if (0 < (int)*(uint *)(param_1 + 0x888)) {
        uVar13 = 0;
        uVar17 = (ulonglong)*(uint *)(param_1 + 0x888);
        do {
          lVar11 = *(longlong *)(param_1 + 0x880);
          if (*(longlong *)(param_1 + 0x880) == 0) {
            lVar11 = param_1 + 0x878;
          }
          uVar9 = (longlong)*(int *)(param_1 + 0x888) - 1U & uVar13;
          uVar13 = uVar13 + 1;
          *(undefined4 *)(lVar11 + uVar9 * 4) = 0xffffffff;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
    }
  }
  return;
}



// FUNCTION 1421f5670 FUN_1421f5670 body=48 status=ok
// SIG undefined FUN_1421f5670(void)

void FUN_1421f5670(longlong *param_1)

{
  FUN_142238430();
  if (param_1[0x96] == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001421f5693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x6e8))(param_1);
    return;
  }
  return;
}



// FUNCTION 1421f56a0 PostSerialize body=653 status=ok
// SIG undefined PostSerialize(void)

void FLevelSequenceBindingReference::PostSerialize(undefined8 *param_1,longlong param_2)

{
  undefined2 *puVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  void *pvVar7;
  void *_Src;
  void *local_38;
  int local_30;
  int local_2c;
  
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    local_30 = *(int *)(param_1 + 1);
    lVar6 = (longlong)local_30;
    if (1 < local_30) {
      pvVar2 = (void *)*param_1;
      _Src = (void *)0x0;
      local_38 = (void *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30 + 1,0);
      pvVar7 = local_38;
      ::_guard_xfg_dispatch_icall_nop(local_38,pvVar2,lVar6 * 2);
      iVar3 = local_30;
      lVar6 = (longlong)local_30;
      local_30 = (2 - (uint)(local_30 != 0)) + local_30;
      if (local_2c < local_30) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar3);
        pvVar7 = local_38;
      }
      puVar1 = (undefined2 *)((longlong)pvVar7 + (lVar6 - (ulonglong)(iVar3 != 0)) * 2);
      *puVar1 = 0x2e;
      puVar1[1] = 0;
      iVar3 = *(int *)(param_1 + 6);
      if (local_30 < 2) {
        pvVar2 = (void *)param_1[5];
        local_38 = (void *)0x0;
        local_30 = iVar3;
        if (iVar3 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,iVar3,0);
          _Src = local_38;
          ::_guard_xfg_dispatch_icall_nop(local_38,pvVar2,(longlong)iVar3 * 2);
        }
        iVar3 = local_30;
        if (pvVar7 != (void *)0x0) {
          FMemory::Free(pvVar7);
        }
      }
      else {
        iVar5 = iVar3 + -1;
        if (iVar3 == 0) {
          iVar5 = 0;
        }
        if ((local_30 != 0) || (iVar3 = 1, iVar5 == 0)) {
          iVar3 = 0;
        }
        iVar4 = iVar3 + iVar5 + local_30;
        iVar3 = local_30;
        local_38 = pvVar7;
        if (local_2c < iVar4) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38,iVar4);
          iVar3 = local_30;
        }
        pvVar2 = (void *)param_1[5];
        _Src = local_38;
        if (iVar5 != 0) {
          local_30 = iVar3 + (uint)(iVar3 == 0) + iVar5;
          if (local_2c < local_30) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar3);
          }
          iVar4 = local_30;
          _Src = local_38;
          pvVar7 = (void *)((longlong)local_38 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
          ::_guard_xfg_dispatch_icall_nop(pvVar7,pvVar2,(longlong)iVar5 * 2);
          *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar7) = 0;
          iVar3 = iVar4;
        }
      }
      local_38 = (void *)0x0;
      local_30 = iVar3;
      if (iVar3 == 0) {
        local_2c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,iVar3,0);
        ::_guard_xfg_dispatch_icall_nop(local_38,_Src,(longlong)iVar3 * 2);
      }
      FUN_1417978e0(param_1 + 2,&local_38);
      *(undefined4 *)(param_1 + 6) = 0;
      if (0x7fffffff < *(uint *)((longlong)param_1 + 0x34)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 5,0);
      }
      if ((undefined2 *)param_1[5] != (undefined2 *)0x0) {
        *(undefined2 *)param_1[5] = 0;
      }
      *(undefined4 *)(param_1 + 1) = 0;
      if ((*(int *)((longlong)param_1 + 0xc) < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1,0);
      }
      if ((undefined2 *)*param_1 != (undefined2 *)0x0) {
        *(undefined2 *)*param_1 = 0;
      }
      if (_Src != (void *)0x0) {
        FMemory::Free(_Src);
      }
    }
  }
  return;
}



// FUNCTION 1421f5930 Rehash body=644 status=ok
// SIG undefined Rehash(void)

void TSet<FObjectKey,DefaultKeyFuncs<FObjectKey,0>,FDefaultSetAllocator>::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
  int *piVar16;
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
  uVar10 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar10 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar10) {
      uVar6 = 0;
      uVar14 = (ulonglong)uVar10;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar11 = (longlong)(int)*plVar2 - 1U & uVar6;
        uVar6 = uVar6 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar11 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = puStack_28;
      }
      uVar10 = *puVar15;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar10 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar4) goto LAB_1421f5a6f;
        uVar10 = puVar15[lVar5 + 1];
      }
      uStack_54 = -uVar10 & uVar10;
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
LAB_1421f5a6f:
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
        piVar16 = (int *)((longlong)iStack_1c * 0x10 + *param_1);
        uVar10 = piVar16[1];
        uVar12 = *piVar16 - uVar10 ^ uVar10 >> 0xd;
        uVar9 = (-0x61c88647 - uVar12) - uVar10 ^ uVar12 << 8;
        uVar13 = (uVar10 - uVar9) - uVar12 ^ uVar9 >> 0xd;
        uVar12 = (uVar12 - uVar9) - uVar13 ^ uVar13 >> 0xc;
        uVar10 = (uVar9 - uVar12) - uVar13 ^ uVar12 << 0x10;
        uVar13 = (uVar13 - uVar10) - uVar12 ^ uVar10 >> 5;
        uVar9 = (uVar12 - uVar10) - uVar13 ^ uVar13 >> 3;
        uVar10 = (uVar10 - uVar9) - uVar13 ^ uVar9 << 10;
        uVar10 = ((uVar13 - uVar10) - uVar9 ^ uVar10 >> 0xf) & (int)*plVar2 - 1U;
        piVar16[3] = uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        piVar16[2] = *(int *)((longlong)plVar7 +
                             ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1421f5bc0 Remove body=389 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FGuid,FLevelSequenceBindingReferenceArray>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceBindingReferenceArray,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar6 = FCrc::MemCrc_DEPRECATED(param_2,0x10);
  plVar8 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar8 = param_1 + 7;
  }
  uVar9 = (longlong)(int)param_1[9] - 1;
  iVar6 = *(int *)((longlong)plVar8 + ((longlong)iVar6 & uVar9) * 4);
  if (iVar6 == -1) {
    return 0;
  }
  lVar5 = *param_1;
  while( true ) {
    lVar7 = (longlong)iVar6;
    lVar3 = lVar7 * 0x28;
    if (((*(int *)(lVar3 + 4 + lVar5) == param_2[1] && *(int *)(lVar3 + 8 + lVar5) == param_2[2]) &&
        *(int *)(lVar3 + 0xc + lVar5) == param_2[3]) && *param_2 == *(int *)(lVar3 + lVar5)) break;
    iVar6 = *(int *)(lVar3 + 0x20 + lVar5);
    if (iVar6 == -1) {
      return 0;
    }
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar9 = (longlong)*(int *)(lVar5 + 0x24 + lVar7 * 0x28) & uVar9;
    puVar2 = (undefined4 *)((longlong)plVar8 + uVar9 * 4);
    iVar4 = *(int *)((longlong)plVar8 + uVar9 * 4);
    while (iVar4 != -1) {
      if (iVar4 == iVar6) {
        *puVar2 = *(undefined4 *)(lVar5 + lVar7 * 0x28 + 0x20);
        break;
      }
      lVar1 = (longlong)iVar4 * 5 + 4;
      puVar2 = (undefined4 *)(lVar5 + lVar1 * 8);
      iVar4 = *(int *)(lVar5 + lVar1 * 8);
    }
  }
  TArray<FLevelSequenceBindingReference,FDefaultAllocator>::
  ~TArray<FLevelSequenceBindingReference,FDefaultAllocator>(*param_1 + 0x10 + lVar3);
  TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar6,1);
  return 1;
}



// FUNCTION 1421f5d50 Remove body=371 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<FGuid,FLevelSequenceLegacyObjectReference>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceLegacyObjectReference,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar3 = FCrc::MemCrc_DEPRECATED(param_2,0x10);
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  uVar7 = (longlong)(int)param_1[9] - 1;
  iVar3 = *(int *)((longlong)plVar6 + ((longlong)iVar3 & uVar7) * 4);
  if (iVar3 == -1) {
    return 0;
  }
  lVar2 = *param_1;
  while( true ) {
    lVar5 = (longlong)iVar3;
    piVar4 = (int *)(lVar5 * 0x38 + lVar2);
    if (((piVar4[1] == param_2[1] && piVar4[2] == param_2[2]) && piVar4[3] == param_2[3]) &&
        *param_2 == *piVar4) break;
    iVar3 = piVar4[0xc];
    if (iVar3 == -1) {
      return 0;
    }
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar7 = (longlong)*(int *)(lVar5 * 0x38 + 0x34 + lVar2) & uVar7;
    piVar4 = (int *)((longlong)plVar6 + uVar7 * 4);
    iVar1 = *(int *)((longlong)plVar6 + uVar7 * 4);
    while (iVar1 != -1) {
      if (iVar1 == iVar3) {
        *piVar4 = *(int *)(lVar5 * 0x38 + 0x30 + lVar2);
        break;
      }
      piVar4 = (int *)((longlong)iVar1 * 0x38 + 0x30 + lVar2);
      iVar1 = *piVar4;
    }
  }
  if (*(longlong *)(lVar5 * 0x38 + *param_1 + 0x20) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,iVar3,1);
  return 1;
}



// FUNCTION 1421f5ed0 FUN_1421f5ed0 body=8 status=ok
// SIG undefined FUN_1421f5ed0(void)

void FUN_1421f5ed0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x528) = 1;
  return;
}



// FUNCTION 1421f5ee0 FUN_1421f5ee0 body=626 status=ok
// SIG undefined FUN_1421f5ee0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1421f5ee0(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_res8 [2];
  undefined1 local_res18 [8];
  longlong local_28 [2];
  
  plVar2 = (longlong *)FSoftClassPath::TryLoadClass<ULevelSequenceBurnIn>(param_1 + 0x30);
  if (plVar2 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    return;
  }
  lVar8 = plVar2[0x1f];
  if (lVar8 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar8 = plVar2[0x1f];
  }
  lVar11 = 0;
  if (lVar8 != 0) {
    lVar3 = UUGCutsceneScreenUW::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1421f5f66;
  }
  lVar8 = lVar11;
LAB_1421f5f66:
  FUN_1421f9d70(lVar8,local_res8);
  if (local_res8[0] != 0) {
    lVar4 = ULevelSequenceBurnInInitSettings::GetPrivateStaticClass();
    lVar3 = local_res8[0];
    for (lVar8 = local_res8[0]; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
      if (lVar8 == lVar4) {
        lVar8 = *(longlong *)(param_1 + 0x48);
        if (lVar8 == 0) goto LAB_1421f6014;
        lVar5 = ULevelSequenceBurnInInitSettings::GetPrivateStaticClass();
        lVar4 = lVar3;
        goto LAB_1421f5fd1;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
  while (lVar4 = *(longlong *)(lVar4 + 0x30), lVar10 = lVar11, lVar4 != 0) {
LAB_1421f5fd1:
    lVar10 = lVar3;
    if (lVar4 == lVar5) break;
  }
  lVar8 = *(longlong *)(lVar8 + 0x10);
  if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar10 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
      lVar10 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
LAB_1421f6014:
    if (*(longlong *)(param_1 + 0x48) != 0) {
      uVar6 = ULevelSequenceBurnInInitSettings::GetPrivateStaticClass();
      puVar7 = (undefined8 *)FName::FName(local_res8 + 1,"Settings_EXPIRED",1);
      uVar6 = FUN_141791c20(local_res18,param_1,uVar6,*puVar7);
      puVar7 = (undefined8 *)FName::ToString(uVar6,local_28);
      if (*(int *)(puVar7 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*puVar7;
      }
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x138))
                (*(longlong **)(param_1 + 0x48),puVar9,0,0);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
    }
    lVar8 = lVar11;
    if (local_res8[0] != 0) {
      lVar4 = ULevelSequenceBurnInInitSettings::GetPrivateStaticClass();
      for (lVar3 = local_res8[0];
          (lVar8 = lVar11, lVar3 != 0 && (lVar8 = local_res8[0], lVar3 != lVar4));
          lVar3 = *(longlong *)(lVar3 + 0x30)) {
      }
    }
    plVar2 = (longlong *)FName::FName(local_res18,"Settings",1);
    local_res8[1] = 0;
    lVar11 = *plVar2;
    if (lVar11 == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    lVar8 = FUN_1417985e0(lVar8,param_1,lVar11,0,0,0,0,0,0);
    *(longlong *)(param_1 + 0x48) = lVar8;
    *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | *(uint *)(param_1 + 8) & 0x69;
  }
  return;
}



// FUNCTION 1421f6160 FUN_1421f6160 body=542 status=ok
// SIG undefined FUN_1421f6160(void)

void FUN_1421f6160(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined8 local_res8;
  longlong local_58;
  longlong local_50 [3];
  
  TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
  ::FindId(param_1,&local_res8,param_2);
  if ((((int)local_res8 == -1) || (lVar9 = *param_1 + (longlong)(int)local_res8 * 0x28, lVar9 == 0))
     || ((longlong *)(lVar9 + 0x10) == (longlong *)0x0)) {
    if (param_3 != 0) {
      lVar9 = FUN_142a07000();
      if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) &&
          (piVar6 = (int *)TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindId
                                     (param_1 + 10,&local_res8,param_2), *piVar6 != -1)) &&
         (lVar9 = FUN_1423ac7e0(param_3), lVar9 != 0)) {
        uVar3 = FUN_1423ac7e0(param_3);
        iVar1 = *(int *)(param_4 + 0x10);
        *(int *)(param_4 + 0x10) = iVar1 + 1;
        if (*(int *)(param_4 + 0x14) < iVar1 + 1) {
          FUN_1407eebb0(param_4,iVar1);
        }
        lVar9 = *(longlong *)(param_4 + 8);
        if (*(longlong *)(param_4 + 8) == 0) {
          lVar9 = param_4;
        }
        *(undefined8 *)(lVar9 + (longlong)iVar1 * 8) = uVar3;
        return;
      }
    }
  }
  else {
    lVar7 = *(longlong *)(lVar9 + 0x10);
    lVar9 = (longlong)*(int *)(lVar9 + 0x18) * 0x38 + lVar7;
    if (lVar7 != lVar9) {
      local_res8 = 0;
      lVar8 = lVar7 + 0x18;
      do {
        if (*(longlong *)(lVar8 + -8) == 0) {
          if (*(int *)(lVar8 + 0x18) == 0) {
            puVar10 = &DAT_143f3eda8;
          }
          else {
            puVar10 = *(undefined2 **)(lVar8 + 0x10);
          }
          uVar3 = UObject::GetPrivateStaticClass();
          plVar4 = (longlong *)FUN_141799410(uVar3,param_3,puVar10,0);
        }
        else {
          local_58 = *(longlong *)(lVar8 + -8);
          FString::FString(local_50,lVar8);
          plVar4 = (longlong *)FUN_141796df0(&local_58);
          if (local_50[0] != 0) {
            FMemory::Free();
          }
        }
        if ((plVar4 != (longlong *)0x0) &&
           (lVar5 = (**(code **)(*plVar4 + 0x148))(plVar4), lVar5 != 0)) {
          iVar1 = *(int *)(param_4 + 0x10);
          *(int *)(param_4 + 0x10) = iVar1 + 1;
          if (*(int *)(param_4 + 0x14) < iVar1 + 1) {
            FUN_1407eebb0(param_4,iVar1);
          }
          lVar5 = *(longlong *)(param_4 + 8);
          if (*(longlong *)(param_4 + 8) == 0) {
            lVar5 = param_4;
          }
          *(longlong **)(lVar5 + (longlong)iVar1 * 8) = plVar4;
        }
        lVar7 = lVar7 + 0x38;
        lVar8 = lVar8 + 0x38;
      } while (lVar7 != lVar9);
    }
  }
  return;
}



// FUNCTION 1421f6380 FUN_1421f6380 body=458 status=ok
// SIG undefined FUN_1421f6380(void)

longlong * FUN_1421f6380(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong *plVar3;
  undefined1 (*pauVar4) [16];
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_res8 [2];
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined8 local_24;
  int local_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  TSet<TTuple<FGuid,FUdpMessageTunnel::FNodeInfo>,TDefaultMapHashableKeyFuncs<FGuid,FUdpMessageTunnel::FNodeInfo,0>,FDefaultSetAllocator>
  ::FindId(param_1,local_res8,param_2);
  plVar5 = (longlong *)0x0;
  plVar3 = plVar5;
  if (local_res8[0] != -1) {
    plVar3 = (longlong *)((longlong)local_res8[0] * 0x38 + *param_1);
  }
  plVar6 = plVar3 + 2;
  if (plVar3 == (longlong *)0x0) {
    plVar6 = plVar5;
  }
  if (plVar6 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    if ((((*(int *)((longlong)plVar6 + 0xc) != 0 || (int)*plVar6 != 0) || (int)plVar6[1] != 0) ||
         *(int *)((longlong)plVar6 + 4) != 0) && (param_3 != 0)) {
      lVar2 = UObjectBaseUtility::GetOutermost(param_3);
      if (*(int *)(lVar2 + 0x54) == -1) {
        iVar7 = (int)*plVar6;
        iVar8 = *(int *)((longlong)plVar6 + 4);
        iVar9 = (int)plVar6[1];
        iVar10 = *(int *)((longlong)plVar6 + 0xc);
      }
      else {
        pauVar4 = (undefined1 (*) [16])FUniqueObjectGuid::FixupForPIE(plVar6,local_38);
        auVar1 = *pauVar4;
        iVar7 = auVar1._0_4_;
        iVar8 = auVar1._4_4_;
        iVar9 = auVar1._8_4_;
        iVar10 = auVar1._12_4_;
        if (((iVar10 == *(int *)((longlong)plVar6 + 0xc) && iVar8 == *(int *)((longlong)plVar6 + 4))
            && (int)*plVar6 == iVar7) && (int)plVar6[1] == iVar9) {
          plVar3 = (longlong *)ResolveByPath(param_3,plVar6 + 2,0,param_4,auVar1);
          goto LAB_1421f6515;
        }
      }
      local_28 = 0xffffffff;
      local_24 = 0;
      local_1c = iVar7;
      iStack_18 = iVar8;
      iStack_14 = iVar9;
      iStack_10 = iVar10;
      plVar3 = (longlong *)FWeakObjectPtr::Get(&local_28);
      if (plVar3 != (longlong *)0x0) goto LAB_1421f6515;
      LOCK();
      if (DAT_1464b4c84 == 0) {
        DAT_1464b4c84 = 0;
      }
      UNLOCK();
      if ((DAT_1464b4c84 != local_24._4_4_) &&
         (((iStack_10 != 0 || iStack_14 != 0) || iStack_18 != 0) || local_1c != 0)) {
        lVar2 = FUniqueObjectGuid::ResolveObject(&local_1c);
        FWeakObjectPtr::operator=(&local_28,lVar2);
        if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b4c84 == 0) {
            DAT_1464b4c84 = 0;
          }
          UNLOCK();
          local_24 = CONCAT44(DAT_1464b4c84,(undefined4)local_24);
        }
        plVar3 = (longlong *)FWeakObjectPtr::Get(&local_28);
        if (plVar3 != (longlong *)0x0) goto LAB_1421f6515;
      }
    }
    plVar3 = (longlong *)ResolveByPath(param_3,plVar6 + 2);
  }
LAB_1421f6515:
  if (plVar3 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    lVar2 = (**(code **)(*plVar3 + 0x148))(plVar3);
    if (lVar2 != 0) {
      plVar5 = plVar3;
    }
  }
  return plVar5;
}



// FUNCTION 1421f6550 ResolveByPath body=120 status=ok
// SIG undefined ResolveByPath(void)

longlong ResolveByPath(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  
  if (1 < *(int *)(param_2 + 1)) {
    uVar3 = *param_2;
    uVar1 = UObject::GetPrivateStaticClass();
    lVar2 = FUN_141799410(uVar1,param_1,uVar3,0);
    if (lVar2 != 0) {
      return lVar2;
    }
    if (*(int *)(param_2 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    uVar3 = UObject::GetPrivateStaticClass();
    lVar2 = FUN_141799410(uVar3,0xffffffffffffffff,puVar4);
    if (lVar2 != 0) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 1421f65d0 FUN_1421f65d0 body=989 status=ok
// SIG undefined FUN_1421f65d0(void)

undefined8 FUN_1421f65d0(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  longlong **pplVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  longlong *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong **pplStack_78;
  undefined4 local_70;
  uint uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  longlong *local_60;
  undefined8 uStack_58;
  uint *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_res8[0] = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  plVar4 = (longlong *)param_2[1];
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,local_res8,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  uVar7 = 0;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if (((*(byte *)(param_2 + 5) & 2) != 0) || ((*(byte *)((longlong)param_2 + 0x2a) & 0x28) != 0))
    {
      uVar2 = *(uint *)(param_1 + 5);
      puVar1 = (uint *)(param_1 + 2);
      local_80._0_4_ = 0;
      local_80._4_4_ = 1;
      uStack_6c = 0;
      iStack_68 = 0;
      if (uVar2 != 0) {
        puVar10 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar10 = puVar1;
        }
        uVar3 = *puVar10;
        iStack_68 = 0;
        local_80._0_4_ = 0;
        while (uVar3 == 0) {
          lVar9 = (longlong)(int)local_80;
          iStack_68 = iStack_68 + 0x20;
          iVar8 = (int)local_80 + 1;
          bVar5 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= (int)local_80;
          local_80._0_4_ = iVar8;
          if (bVar5) goto LAB_1421f67fd;
          uVar3 = puVar10[lVar9 + 1];
        }
        local_80._4_4_ = -uVar3 & uVar3;
        iVar8 = 0x1f;
        if (local_80._4_4_ != 0) {
          for (; local_80._4_4_ >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        if (local_80._4_4_ == 0) {
          iVar8 = 0x20;
        }
        else {
          iVar8 = 0x1f - iVar8;
        }
        uStack_6c = (iStack_68 - iVar8) + 0x1f;
        if ((int)uVar2 < (int)uStack_6c) {
LAB_1421f67fd:
          uStack_6c = uVar2;
        }
      }
      local_70 = 0xffffffff;
      uVar3 = *(uint *)(param_1 + 5);
      puStack_90 = (undefined8 *)CONCAT44(uStack_6c,0xffffffff);
      uStack_88 = CONCAT44(uStack_64,iStack_68);
      iStack_a0 = (int)local_80;
      uStack_9c = local_80._4_4_;
      uVar12 = -1 << ((byte)uVar3 & 0x1f);
      uVar11 = uVar3 & 0xffffffe0;
      uStack_98 = (longlong **)CONCAT44(uVar3,uVar12);
      uStack_58._0_4_ = (int)local_80;
      uStack_58._4_4_ = local_80._4_4_;
      local_a8 = param_1;
      pplStack_78 = (longlong **)puVar1;
      local_60 = param_1;
      local_50 = puVar1;
      uStack_48 = puStack_90;
      local_40 = uStack_88;
      pplVar6 = uStack_98;
      if (uVar3 != uVar2) {
        puVar10 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar10 = puVar1;
        }
        uVar12 = puVar10[(int)uVar3 >> 5] & uVar12;
        iVar8 = (int)uVar3 >> 5;
        while (uVar12 == 0) {
          uVar11 = uVar11 + 0x20;
          if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
          goto LAB_1421f68c2;
          uVar12 = puVar10[(longlong)iVar8 + 1];
          uStack_98 = (longlong **)0xffffffff;
          iVar8 = iVar8 + 1;
        }
        uVar12 = -uVar12 & uVar12;
        iVar8 = 0x1f;
        if (uVar12 != 0) {
          for (; uVar12 >> iVar8 == 0; iVar8 = iVar8 + -1) {
          }
        }
        if (uVar12 == 0) {
          iVar8 = 0x20;
        }
        else {
          iVar8 = 0x1f - iVar8;
        }
        iVar8 = (uVar11 - iVar8) + 0x1f;
        uStack_98 = (longlong **)CONCAT44(iVar8,(undefined4)uStack_98);
        pplVar6 = uStack_98;
        if ((int)uVar2 < iVar8) {
LAB_1421f68c2:
          uStack_98 = (longlong **)CONCAT44(uVar2,(undefined4)uStack_98);
          pplVar6 = uStack_98;
        }
      }
      while( true ) {
        uVar7 = (ulonglong)uStack_48._4_4_;
        if (((uStack_48._4_4_ == (int)((ulonglong)pplVar6 >> 0x20)) && (local_50 == puVar1)) &&
           (local_60 == param_1)) break;
        lVar9 = uVar7 * 0x38 + *local_60;
        FBinaryArchiveFormatter::FBinaryArchiveFormatter(&local_a8,param_2);
        uStack_98 = &local_a8;
        puStack_90 = &uStack_98;
        FUN_141661f40(&uStack_98,lVar9);
        FBinaryArchiveFormatter::~FBinaryArchiveFormatter(&local_a8);
        FBinaryArchiveFormatter::FBinaryArchiveFormatter(&local_a8,param_2);
        uStack_98 = &local_a8;
        puStack_90 = &uStack_98;
        FUN_141661f40(&uStack_98,lVar9 + 0x10);
        FBinaryArchiveFormatter::~FBinaryArchiveFormatter(&local_a8);
        FUN_14158ce90(param_2,lVar9 + 0x20);
        uStack_48 = (undefined8 *)CONCAT44(uStack_48._4_4_,(uint)uStack_48 & ~uStack_58._4_4_);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_58);
      }
    }
  }
  else {
    uVar7 = (ulonglong)local_res8[0];
    if (0 < (int)local_res8[0]) {
      local_80 = &local_38;
      pplStack_78 = &local_60;
      do {
        local_res8[0] = (int)uVar7 - 1;
        local_38 = 0;
        local_30 = 0;
        FBinaryArchiveFormatter::FBinaryArchiveFormatter(&local_a8,param_2);
        uStack_98 = &local_a8;
        puStack_90 = &uStack_98;
        FUN_141661f40(&uStack_98,&local_38);
        FBinaryArchiveFormatter::~FBinaryArchiveFormatter(&local_a8);
        local_60 = (longlong *)0x0;
        uStack_58 = 0;
        local_50 = (uint *)0x0;
        uStack_48 = (undefined8 *)0x0;
        FBinaryArchiveFormatter::FBinaryArchiveFormatter(&local_a8,param_2);
        uStack_98 = &local_a8;
        puStack_90 = &uStack_98;
        FUN_141661f40(&uStack_98,&local_60);
        FBinaryArchiveFormatter::~FBinaryArchiveFormatter(&local_a8);
        FUN_14158ce90(param_2,&local_50);
        FUN_1421f1030(param_1,local_res10,&local_80,0);
        if (local_50 != (uint *)0x0) {
          FMemory::Free();
        }
        uVar7 = (ulonglong)local_res8[0];
      } while (0 < (int)local_res8[0]);
    }
  }
  return CONCAT71((int7)(uVar7 >> 8),1);
}



// FUNCTION 1421f69b0 SetBurnIn body=84 status=ok
// SIG undefined SetBurnIn(void)

void ULevelSequenceBurnInOptions::SetBurnIn(longlong param_1,undefined8 *param_2)

{
  undefined8 local_28;
  undefined1 local_20 [24];
  
  local_28 = *param_2;
  FString::FString(local_20,param_2 + 1);
  FSoftObjectPath::operator=(param_1 + 0x30,&local_28);
  FUN_1421f5ee0(param_1);
  if (param_2[1] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421f6a10 FUN_1421f6a10 body=324 status=ok
// SIG undefined FUN_1421f6a10(void)

void FUN_1421f6a10(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  void *_Src;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  int iVar6;
  longlong local_28;
  int local_20;
  undefined4 local_1c;
  
  plVar1 = (longlong *)(param_1 + 0x4d0);
  uVar5 = 0;
  if (plVar1 != param_2) {
    iVar6 = (int)param_2[1];
    _Src = (void *)*param_2;
    *(int *)(param_1 + 0x4d8) = iVar6;
    if ((iVar6 == 0) && (*(int *)(param_1 + 0x4dc) == 0)) {
      *(undefined4 *)(param_1 + 0x4dc) = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar1,iVar6);
      _guard_xfg_dispatch_icall_nop((void *)*plVar1,_Src,(longlong)iVar6 << 3);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x4b0);
  if (lVar3 != 0) {
    iVar6 = *(int *)(param_1 + 0x4d8);
    puVar4 = (undefined8 *)*plVar1;
    local_28 = 0;
    local_20 = iVar6;
    if (iVar6 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_28,iVar6,0);
      lVar3 = local_28 - (longlong)puVar4;
      do {
        *(undefined8 *)(lVar3 + (longlong)puVar4) = *puVar4;
        puVar4 = puVar4 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      lVar3 = *(longlong *)(param_1 + 0x4b0);
      uVar5 = local_1c;
    }
    iVar6 = local_20;
    lVar2 = local_28;
    plVar1 = (longlong *)(lVar3 + 0x830);
    if (plVar1 == &local_28) {
      if (local_28 != 0) {
        FMemory::Free(local_28);
      }
    }
    else {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = lVar2;
      *(int *)(lVar3 + 0x838) = iVar6;
      *(undefined4 *)(lVar3 + 0x83c) = uVar5;
    }
  }
  if (*param_2 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 1421f6b60 FUN_1421f6b60 body=88 status=ok
// SIG undefined FUN_1421f6b60(void)

void FUN_1421f6b60(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_28 [32];
  
  if ((param_1[0x96] != 0) && (cVar1 = UMovieSceneSequencePlayer::IsPlaying(), cVar1 != '\0')) {
    return;
  }
  uVar2 = FSoftObjectPath::FSoftObjectPath(local_28,param_2);
  FSoftObjectPath::operator=(param_1 + 0x97,uVar2);
  (**(code **)(*param_1 + 0x6e8))(param_1);
  return;
}



// FUNCTION 1421f6be0 FUN_1421f6be0 body=1038 status=ok
// SIG undefined FUN_1421f6be0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1421f6be0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  byte *pbVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_d0;
  int local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_98;
  undefined1 local_90;
  ushort local_8e;
  undefined4 local_8c;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  lVar13 = param_2[0xc];
  if (lVar13 == 0) {
    return 0;
  }
  lVar7 = FUN_1428dfc70();
  if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
      != lVar7 + 0x88)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return 0;
  }
  uVar8 = (**(code **)(*param_4 + 0x70))(param_4);
  if (uVar8 == 0) {
LAB_1421f6ca3:
    uVar8 = DAT_146b19a68;
  }
  else {
    lVar7 = FUN_142a2f930();
    if ((*(int *)(*(longlong *)(uVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_1421f6ca3;
  }
  local_c0 = param_2[0x10];
  uVar9 = FName::ToString(&local_c0,local_88);
  lVar7 = GetStreamingLevel(uVar9,uVar8);
  uVar15 = 0;
  if (lVar7 == 0) goto LAB_1421f6e34;
  lVar1 = lVar7 + 0x28;
  lVar10 = FWeakObjectPtr::Get(lVar1);
  if (lVar10 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar7 + 0x30)) ||
       (local_d8 = 0, *(longlong *)(lVar7 + 0x38) == 0)) goto LAB_1421f6e34;
    lVar10 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar1,lVar10);
    if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar7 + 0x30) = DAT_1464b56f4;
    }
    lVar10 = FWeakObjectPtr::Get(lVar1);
    if (lVar10 == 0) goto LAB_1421f6e34;
  }
  lVar11 = FUN_142a2f930();
  if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8)
      != lVar11 + 0x88)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) goto LAB_1421f6e34;
  uVar8 = FWeakObjectPtr::Get(lVar1);
  if (uVar8 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar7 + 0x30)) &&
       (local_d8 = 0, *(longlong *)(lVar7 + 0x38) != 0)) {
      lVar10 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar1,lVar10);
      if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar7 + 0x30) = DAT_1464b56f4;
      }
      uVar8 = FWeakObjectPtr::Get(lVar1);
      if (uVar8 != 0) goto LAB_1421f6dfb;
    }
  }
  else {
LAB_1421f6dfb:
    lVar7 = FUN_142a2f930();
    if ((*(int *)(*(longlong *)(uVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_1421f6e34;
  }
  uVar8 = uVar15;
LAB_1421f6e34:
  FActorSpawnParameters::FActorSpawnParameters(&local_b8);
  local_8e = local_8e | 4;
  local_48 = _DAT_146aede20 & _DAT_146aede30;
  uStack_44 = uRam0000000146aede24 & uRam0000000146aede34;
  uStack_40 = uRam0000000146aede28 & uRam0000000146aede38;
  uStack_3c = uRam0000000146aede2c & uRam0000000146aede3c;
  local_b8 = 0;
  local_8c = 0x40;
  local_90 = 1;
  local_98 = *(undefined8 *)(uVar8 + 0x30);
  lVar7 = *(longlong *)(lVar13 + 0x168);
  local_d8 = 0;
  local_b0 = lVar13;
  if (lVar7 == 0) {
    local_68 = *param_2;
    uStack_60 = param_2[1];
    local_58 = *(undefined1 (*) [16])(param_2 + 2);
    local_48 = *(uint *)(param_2 + 4);
    uStack_44 = *(uint *)((longlong)param_2 + 0x24);
    uStack_40 = *(uint *)(param_2 + 5);
    uStack_3c = *(uint *)((longlong)param_2 + 0x2c);
  }
  else {
    local_58._12_4_ = 0;
    local_58._0_12_ = *(undefined1 (*) [12])(lVar7 + 0x1ec);
    puVar12 = (undefined8 *)FRotator::Quaternion(lVar7 + 0x1f8,local_78);
    local_68 = *puVar12;
    uStack_60 = puVar12[1];
  }
  uVar9 = AGFreezeCharacterCue::GetPrivateStaticClass();
  AActor::GetComponentsByClass(lVar13,&local_d0,uVar9);
  uVar17 = uVar15;
  if (0 < local_c8) {
    do {
      uVar15 = uVar15 + 8;
      uVar16 = (int)uVar17 + 1;
      pbVar2 = (byte *)(*(longlong *)(local_d0 + -8 + uVar15) + 0xba);
      *pbVar2 = *pbVar2 & 0xfd;
      uVar17 = (ulonglong)uVar16;
    } while ((int)uVar16 < local_c8);
  }
  if (local_d0 != 0) {
    FMemory::Free();
  }
  lVar13 = FUN_1425518b0(uVar8,*(undefined8 *)(lVar13 + 0x10),&local_68,&local_b8);
  if (lVar13 == 0) {
    return 0;
  }
  plVar3 = (longlong *)(lVar13 + 0x1a0);
  plVar5 = (longlong *)*plVar3;
  iVar4 = *(int *)(lVar13 + 0x1a8);
  plVar14 = plVar5;
  do {
    if (plVar14 == plVar5 + iVar4) {
LAB_1421f6f8d:
      *(int *)(lVar13 + 0x1a8) = iVar4 + 1;
      if (*(int *)(lVar13 + 0x1ac) < iVar4 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3,iVar4);
      }
      *(longlong *)(*plVar3 + (longlong)iVar4 * 8) = DAT_146aedeb8;
LAB_1421f6fb2:
      FUN_14222b9f0(lVar13,&local_68,1,0);
      return lVar13;
    }
    if (*plVar14 == DAT_146aedeb8) {
      if ((int)((longlong)plVar14 - (longlong)plVar5 >> 3) != -1) goto LAB_1421f6fb2;
      goto LAB_1421f6f8d;
    }
    plVar14 = plVar14 + 1;
  } while( true );
}



// FUNCTION 1421f6ff0 FUN_1421f6ff0 body=353 status=ok
// SIG undefined FUN_1421f6ff0(void)

longlong FUN_1421f6ff0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar8 = *(undefined8 **)(param_1 + 0x68);
  puVar9 = puVar8 + (longlong)*(int *)(param_1 + 0x70) * 2;
  while( true ) {
    if (puVar8 == puVar9) {
      return 0;
    }
    plVar3 = (longlong *)puVar8[1];
    plVar4 = (longlong *)*puVar8;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    lVar7 = *(longlong *)(param_2 + 0x60);
    lVar6 = (**(code **)*plVar4)(plVar4);
    lVar7 = *(longlong *)(lVar7 + 0x10);
    if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar5) && (lVar7 = (**(code **)(*plVar4 + 8))(plVar4,param_2,param_3,param_4), lVar7 != 0))
    break;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      lVar7 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    puVar8 = puVar8 + 2;
  }
  if (plVar3 == (longlong *)0x0) {
    return lVar7;
  }
  LOCK();
  plVar4 = plVar3 + 1;
  lVar6 = *plVar4;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)lVar6 != 1) {
    return lVar7;
  }
  (**(code **)*plVar3)(plVar3);
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 != 1) {
    return lVar7;
  }
  (**(code **)(*plVar3 + 8))(plVar3,1);
  return lVar7;
}



// FUNCTION 1421f7160 FUN_1421f7160 body=1143 status=ok
// SIG undefined FUN_1421f7160(void)

void FUN_1421f7160(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  bool bVar5;
  undefined4 uVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  void *pvVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  int *piVar17;
  undefined4 uVar18;
  void *pvVar19;
  longlong *plVar20;
  undefined8 uVar21;
  longlong local_res8;
  undefined8 local_res18;
  int local_res20;
  int iStackX_24;
  longlong *local_58 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (*(longlong *)(param_1 + 0x3d8) != 0) {
    lVar14 = *(longlong *)(param_1 + 0x774);
    local_res8 = param_1;
    ConvertFrameTime(&local_res20,lVar14,*(undefined8 *)(param_1 + 0x760),
                     *(undefined8 *)(param_1 + 0x768));
    param_2[9] = *(longlong *)(param_1 + 0x810);
    *(undefined4 *)(param_2 + 10) = *(undefined4 *)(param_1 + 0x818);
    uVar11 = *(undefined8 *)(param_1 + 0x760);
    local_48._0_4_ = (undefined4)lVar14;
    uVar18 = (undefined4)local_48;
    local_48._4_4_ = (undefined4)((ulonglong)lVar14 >> 0x20);
    uVar6 = local_48._4_4_;
    uStack_40._0_4_ = (int)uVar11;
    uStack_40._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
    *(undefined4 *)(param_2 + 2) = (undefined4)local_48;
    *(undefined4 *)((longlong)param_2 + 0x14) = local_48._4_4_;
    *(int *)(param_2 + 3) = (int)uStack_40;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_40._4_4_;
    local_res18 = *(undefined8 *)(*(longlong *)(param_1 + 0x3d8) + 0x18);
    local_48 = (void *)lVar14;
    uStack_40 = uVar11;
    FName::ToString(&local_res18,&local_48);
    if (param_2 == &local_48) {
      if (local_48 != (void *)0x0) {
        FMemory::Free();
      }
    }
    else {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      *param_2 = (longlong)local_48;
      *(int *)(param_2 + 1) = (int)uStack_40;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_40._4_4_;
    }
    FString::operator=(param_2 + 4,param_2);
    uVar11 = *(undefined8 *)(param_1 + 0x760);
    uStack_40._0_4_ = (int)uVar11;
    uStack_40._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
    *(undefined4 *)(param_2 + 6) = uVar18;
    *(undefined4 *)((longlong)param_2 + 0x34) = uVar6;
    *(int *)(param_2 + 7) = (int)uStack_40;
    *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_40._4_4_;
    local_48 = (void *)lVar14;
    uStack_40 = uVar11;
    cVar7 = FWeakObjectPtr::IsValid(param_1 + 0x824);
    pvVar19 = (void *)0x0;
    pvVar10 = pvVar19;
    if (cVar7 != '\0') {
      pvVar10 = (void *)FWeakObjectPtr::Get(param_1 + 0x824);
    }
    param_2[8] = (longlong)pvVar10;
    *(undefined4 *)((longlong)param_2 + 0x54) = DAT_14652e708;
    uVar11 = (**(code **)(**(longlong **)(param_1 + 0x3d8) + 0x298))();
    uVar12 = UMovieSceneCinematicShotTrack::GetPrivateStaticClass();
    plVar13 = (longlong *)UMovieScene::FindMasterTrack(uVar11,uVar12);
    if (plVar13 != (longlong *)0x0) {
      lVar14 = UMovieSceneCinematicShotTrack::GetPrivateStaticClass();
      if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar14 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8) !=
          lVar14 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        plVar13 = (longlong *)(**(code **)(*plVar13 + 0x2f0))(plVar13);
        iVar3 = local_res20;
        plVar20 = (longlong *)*plVar13;
        plVar13 = plVar20 + (int)plVar13[1];
        if (plVar20 != plVar13) {
          uVar11 = CONCAT44(iStackX_24,local_res20);
          pvVar10 = pvVar19;
          local_58[0] = plVar13;
          do {
            pvVar4 = (void *)*plVar20;
            if (pvVar4 != (void *)0x0) {
              cVar7 = *(char *)((longlong)pvVar4 + 0x90);
              iVar1 = *(int *)((longlong)pvVar4 + 0x94);
              iVar2 = *(int *)((longlong)pvVar4 + 0x9c);
              if ((*(byte *)((longlong)pvVar4 + 0xb0) & 1) != 0) {
                if (cVar7 == '\x02') {
LAB_1421f738e:
                  bVar5 = true;
                }
                else {
                  iVar9 = iVar1;
                  if (iVar1 < iVar3) {
LAB_1421f737c:
                    if (iVar9 == iVar1) goto LAB_1421f738e;
                  }
                  else {
                    iVar9 = iVar3;
                    if (iVar1 <= iVar3) {
                      iVar9 = iVar1;
                    }
                    if (cVar7 == '\x01') goto LAB_1421f737c;
                  }
                  bVar5 = false;
                }
                if (bVar5) {
                  if (*(char *)((longlong)pvVar4 + 0x98) == '\x02') {
LAB_1421f73ba:
                    bVar5 = true;
                  }
                  else {
                    iVar9 = iVar2;
                    if (iVar3 < iVar2) {
LAB_1421f73a8:
                      if (iVar9 == iVar2) goto LAB_1421f73ba;
                    }
                    else {
                      iVar9 = iVar3;
                      if (iVar3 <= iVar2) {
                        iVar9 = iVar2;
                      }
                      if (*(char *)((longlong)pvVar4 + 0x98) == '\x01') goto LAB_1421f73a8;
                    }
                    bVar5 = false;
                  }
                  if (!bVar5) goto LAB_1421f73c4;
                  bVar5 = true;
                }
                else {
LAB_1421f73c4:
                  bVar5 = false;
                }
                if (bVar5) {
                  if ((pvVar10 == (void *)0x0) ||
                     (*(int *)((longlong)pvVar4 + 0xa8) < *(int *)((longlong)pvVar10 + 0xa8))) {
LAB_1421f7442:
                    lVar14 = UMovieSceneCinematicShotSection::GetPrivateStaticClass();
                    if ((*(int *)(*(longlong *)((longlong)pvVar4 + 0x10) + 0x90) <
                         *(int *)(lVar14 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)((longlong)pvVar4 + 0x10) + 0x88) +
                         (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
                      bVar5 = false;
                    }
                    else {
                      bVar5 = true;
                    }
                    pvVar10 = pvVar19;
                    plVar13 = local_58[0];
                    if (bVar5) {
                      pvVar10 = pvVar4;
                    }
                  }
                  else if (*(int *)((longlong)pvVar4 + 0xa8) == *(int *)((longlong)pvVar10 + 0xa8))
                  {
                    cVar8 = *(char *)((longlong)pvVar10 + 0x90);
                    iStackX_24 = *(int *)((longlong)pvVar10 + 0x94);
                    local_res20 = CONCAT31(local_res20._1_3_,cVar8);
                    local_res18 = CONCAT71(local_res18._1_7_,cVar7);
                    local_res18 = CONCAT44(iVar1,(int)local_res18);
                    if (cVar7 == '\x02') {
LAB_1421f7430:
                      piVar17 = &local_res20;
LAB_1421f7434:
                      if (cVar8 != cVar7) goto LAB_1421f7481;
                    }
                    else if (cVar8 == '\x02') {
                      piVar17 = (int *)&local_res18;
                      cVar8 = cVar7;
                    }
                    else {
                      if (iVar1 <= iStackX_24) {
                        if ((iVar1 < iStackX_24) || (cVar7 != '\0')) goto LAB_1421f7430;
                        piVar17 = (int *)&local_res18;
                        cVar8 = cVar7;
                        goto LAB_1421f7434;
                      }
                      piVar17 = (int *)&local_res18;
                      cVar8 = cVar7;
                    }
                    if ((cVar8 == '\x02') || (piVar17[1] == iVar1)) goto LAB_1421f7442;
                  }
                }
              }
            }
LAB_1421f7481:
            plVar20 = plVar20 + 1;
          } while (plVar20 != plVar13);
          if (pvVar10 != (void *)0x0) {
            FUN_141f5a3a0(pvVar10,local_58);
            plVar13 = (longlong *)UMovieSceneSubSection::GetSequence(pvVar10);
            if (plVar13 == (longlong *)0x0) {
              uVar12 = *(undefined8 *)(param_1 + 0x768);
              uVar21 = *(undefined8 *)(local_res8 + 0x760);
            }
            else {
              lVar14 = (**(code **)(*plVar13 + 0x298))(plVar13);
              uVar12 = *(undefined8 *)(lVar14 + 0xb8);
              lVar14 = (**(code **)(*plVar13 + 0x298))(plVar13);
              uVar21 = *(undefined8 *)(lVar14 + 0xc0);
            }
            puVar15 = (undefined8 *)operator*(&local_res18,uVar11,local_58);
            ConvertFrameTime(&local_res8,*puVar15,uVar12,uVar21);
            iVar3 = *(int *)((longlong)pvVar10 + 0x158);
            pvVar4 = *(void **)((longlong)pvVar10 + 0x150);
            local_48 = (void *)0x0;
            uStack_40._0_4_ = iVar3;
            if (iVar3 == 0) {
              uVar18 = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar3,0);
              pvVar19 = local_48;
              _guard_xfg_dispatch_icall_nop(local_48,pvVar4,(longlong)iVar3 * 2);
              uVar18 = uStack_40._4_4_;
            }
            iVar3 = (int)uStack_40;
            plVar13 = param_2 + 4;
            if (plVar13 == &local_48) {
              if (pvVar19 != (void *)0x0) {
                FMemory::Free(pvVar19);
              }
            }
            else {
              if (*plVar13 != 0) {
                FMemory::Free();
              }
              *plVar13 = (longlong)pvVar19;
              *(int *)(param_2 + 5) = iVar3;
              *(undefined4 *)((longlong)param_2 + 0x2c) = uVar18;
            }
            local_48 = (void *)local_res8;
            lVar14 = (longlong)local_48;
            local_48._0_4_ = (undefined4)local_res8;
            local_48._4_4_ = (undefined4)((ulonglong)local_res8 >> 0x20);
            uStack_40._0_4_ = (int)uVar21;
            uStack_40._4_4_ = (undefined4)((ulonglong)uVar21 >> 0x20);
            *(undefined4 *)(param_2 + 6) = (undefined4)local_48;
            *(undefined4 *)((longlong)param_2 + 0x34) = local_48._4_4_;
            *(int *)(param_2 + 7) = (int)uStack_40;
            *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_40._4_4_;
            local_48 = (void *)lVar14;
            uStack_40 = uVar21;
            puVar16 = (undefined4 *)UMovieSceneSubSection::GetSequenceID(pvVar10,&local_res8);
            *(undefined4 *)((longlong)param_2 + 0x54) = *puVar16;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1421f75e0 FUN_1421f75e0 body=398 status=ok
// SIG undefined FUN_1421f75e0(void)

void FUN_1421f75e0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 local_res8 [8];
  undefined4 uStack_2c;
  
  *(longlong *)(param_1 + 0x260) = param_2;
  lVar2 = *(longlong *)(param_2 + 0x4b0);
  if (lVar2 != 0) {
    uVar11 = 0;
    plVar10 = (longlong *)(lVar2 + 0x7c8);
    plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)&PTR_FUN_144ff8130;
      FWeakObjectPtr::operator=(plVar6 + 1,param_1);
      *(undefined4 *)(plVar6 + 2) = 0x421f5000;
      *(undefined4 *)((longlong)plVar6 + 0x14) = 1;
      *(undefined4 *)(plVar6 + 3) = 0;
      *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_2c;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar6[5] = lVar7;
      *plVar6 = (longlong)&PTR_FUN_144ff8178;
      if (*(int *)(lVar2 + 0x7dc) < 1) {
        *(int *)(lVar2 + 0x7d8) = *(int *)(lVar2 + 0x7d8) + -1;
        iVar1 = *(int *)(lVar2 + 2000);
        if (*(int *)(lVar2 + 0x7d8) <= iVar1) {
          uVar12 = uVar11;
          iVar9 = iVar1;
          if (0 < iVar1) {
            do {
              if (((*(int *)(uVar11 + 8 + *plVar10) == 0) ||
                  (plVar3 = *(longlong **)(uVar11 + *plVar10), plVar3 == (longlong *)0x0)) ||
                 (cVar4 = (**(code **)(*plVar3 + 0x10))(), cVar4 != '\0')) {
                TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(plVar10,uVar12,1,1);
              }
              else {
                uVar12 = (ulonglong)((int)uVar12 + 1);
                uVar11 = uVar11 + 0x10;
              }
              iVar9 = *(int *)(lVar2 + 2000);
            } while ((int)uVar12 < iVar9);
          }
          iVar5 = iVar9 * 2;
          if (iVar5 < 3) {
            iVar5 = 2;
          }
          *(int *)(lVar2 + 0x7d8) = iVar5;
          if ((iVar5 < iVar1) && (*(int *)(lVar2 + 0x7d4) != iVar9)) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar10);
          }
        }
      }
      (**(code **)(*plVar6 + 0x20))(plVar6,local_res8);
      iVar1 = *(int *)(lVar2 + 2000);
      *(int *)(lVar2 + 2000) = iVar1 + 1;
      if (*(int *)(lVar2 + 0x7d4) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
      }
      puVar8 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar10);
      *puVar8 = plVar6;
      *(undefined4 *)(puVar8 + 1) = 3;
    }
    FUN_1421f7160(*(undefined8 *)(param_2 + 0x4b0),param_1 + 0x208);
  }
  return;
}



// FUNCTION 1421f7770 FUN_1421f7770 body=160 status=ok
// SIG undefined FUN_1421f7770(void)

void FUN_1421f7770(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  
  FUN_1422406d0();
  if (param_1[0x96] != 0) {
    FUN_141f67590(param_1[0x96],param_2);
  }
  lVar1 = DAT_146aedeb0;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      lVar4 = 4;
      goto LAB_1421f77d9;
    }
  }
  lVar4 = 0;
LAB_1421f77d9:
  if (*(int *)(lVar4 + lVar1) == 1) {
    cVar2 = (**(code **)(*param_1 + 0x6f8))(param_1);
    if (cVar2 != '\0') {
      *(undefined1 *)(param_1 + 0xa5) = 0;
      AActor::SetActorTickEnabled(param_1,0);
    }
  }
  return;
}



// FUNCTION 1421f7810 UnbindPossessableObjects body=356 status=ok
// SIG undefined UnbindPossessableObjects(void)

void ULevelSequence::UnbindPossessableObjects(longlong param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  TSet<TTuple<FGuid,FLevelSequenceBindingReferenceArray>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceBindingReferenceArray,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x3a0);
  if (*(int *)(param_1 + 0x3f8) != *(int *)(param_1 + 0x424)) {
    iVar5 = FCrc::MemCrc_DEPRECATED(param_2,0x10);
    lVar7 = *(longlong *)(param_1 + 0x430);
    if (*(longlong *)(param_1 + 0x430) == 0) {
      lVar7 = param_1 + 0x428;
    }
    uVar8 = (longlong)*(int *)(param_1 + 0x438) - 1;
    iVar5 = *(int *)(lVar7 + ((longlong)iVar5 & uVar8) * 4);
    if (iVar5 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x3f0);
      do {
        lVar6 = (longlong)iVar5;
        piVar1 = (int *)(lVar4 + lVar6 * 0x18);
        if (((*(int *)(lVar4 + 4 + lVar6 * 0x18) == param_2[1] &&
             *(int *)(lVar4 + 8 + lVar6 * 0x18) == param_2[2]) && piVar1[3] == param_2[3]) &&
            *param_2 == *piVar1) {
          if (*(int *)(param_1 + 0x3f8) == *(int *)(param_1 + 0x424)) goto LAB_1421f7935;
          uVar8 = (longlong)*(int *)(lVar4 + 0x14 + lVar6 * 0x18) & uVar8;
          puVar2 = (undefined4 *)(lVar7 + uVar8 * 4);
          iVar3 = *(int *)(lVar7 + uVar8 * 4);
          goto joined_r0x0001421f790f;
        }
        iVar5 = piVar1[4];
      } while (iVar5 != -1);
    }
  }
LAB_1421f795d:
  TSet<TTuple<FGuid,FLevelSequenceLegacyObjectReference>,TDefaultMapHashableKeyFuncs<FGuid,FLevelSequenceLegacyObjectReference,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x350,param_2);
  return;
joined_r0x0001421f790f:
  if (iVar3 == -1) goto LAB_1421f7935;
  if (iVar3 == iVar5) {
    *puVar2 = *(undefined4 *)(lVar4 + lVar6 * 0x18 + 0x10);
    goto LAB_1421f7935;
  }
  lVar7 = (longlong)iVar3 * 3 + 2;
  iVar3 = *(int *)(lVar4 + lVar7 * 8);
  puVar2 = (undefined4 *)(lVar4 + lVar7 * 8);
  goto joined_r0x0001421f790f;
LAB_1421f7935:
  TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1 + 0x3f0,iVar5,1);
  goto LAB_1421f795d;
}



// FUNCTION 1421f7980 FUN_1421f7980 body=760 status=ok
// SIG undefined FUN_1421f7980(void)

void FUN_1421f7980(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  uint *puVar1;
  undefined1 uVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_res8;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  uint local_2c;
  
  cVar5 = FUN_14044aea0(param_1 + 0x7d8,0);
  if (cVar5 != '\0') {
    return;
  }
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x7d8);
  if (*(longlong *)(lVar6 + 400) == 0) {
    return;
  }
  lVar6 = FWeakObjectPtr::Get(param_1 + 0x7d8);
  plVar7 = (longlong *)FUN_14244f490(*(undefined8 *)(lVar6 + 400),0);
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  lVar6 = (**(code **)(*plVar7 + 0x758))(plVar7);
  if ((plVar7[0xfb] == 0) && (param_2 != 0)) {
    plVar7[0xfb] = lVar6;
    lVar8 = FUN_14270bb10(plVar7);
    if (lVar8 != 0) {
      lVar8 = FUN_14270bb10(plVar7);
      *(uint *)(param_1 + 0x7e0) = (uint)*(byte *)(lVar8 + 0x94);
    }
  }
  plVar9 = (longlong *)MovieSceneHelpers::CameraComponentFromRuntimeObject(param_2);
  if ((plVar9 != (longlong *)0x0) && (plVar9[0x23] != param_2)) {
    param_2 = plVar9[0x23];
  }
  FWeakObjectPtr::operator=(param_1 + 0x7fc);
  if (param_2 == lVar6) {
    if (param_4 == '\0') {
      return;
    }
    if (plVar7[0xa5] != 0) {
      puVar1 = (uint *)(plVar7[0xa5] + 0x2c40);
      *puVar1 = *puVar1 | 0x400;
    }
    if (plVar9 == (longlong *)0x0) {
      return;
    }
    (**(code **)(*plVar9 + 0x550))(plVar9);
    return;
  }
  if (param_3 == 0) {
LAB_1421f7ae7:
    param_3 = 0;
  }
  else {
    lVar8 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
         ) != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_1421f7ae7;
  }
  if (param_2 == 0) {
    if ((param_3 != 0) && (param_3 != lVar6)) {
      return;
    }
LAB_1421f7b00:
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_1428dfc70();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
         ) != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    lVar8 = param_2;
    if (!bVar4) goto LAB_1421f7b00;
  }
  *(undefined1 *)((longlong)plVar7 + 0x7d5) = 0;
  if (lVar8 == 0) {
    lVar3 = plVar7[0xfb];
    plVar7[0xfb] = 0;
    lVar8 = lVar6;
    if (lVar3 != 0) {
      lVar8 = lVar3;
    }
  }
  local_2c = local_2c & 0xfffffffe;
  local_38 = 0;
  local_30 = 0x40000000;
  local_34 = 1;
  (**(code **)(*plVar7 + 0xe18))(plVar7,lVar8,&local_38);
  *(bool *)((longlong)plVar7 + 0x7d5) = param_2 != 0;
  *(bool *)(param_1 + 0x7e5) = param_2 != 0;
  lVar6 = FUN_14270bb10(plVar7);
  if (lVar6 != 0) {
    plVar10 = (longlong *)ULocalPlayer::GetPrivateStaticClass();
    lVar6 = plVar10[0x1f];
    if (lVar6 == 0) {
      (**(code **)(*plVar10 + 0x368))(plVar10);
      lVar6 = plVar10[0x1f];
      if (lVar6 == 0) goto LAB_1421f7bbd;
    }
    uVar2 = *(undefined1 *)(lVar6 + 0x94);
    lVar6 = FUN_14270bb10(plVar7);
    *(undefined1 *)(lVar6 + 0x94) = uVar2;
  }
LAB_1421f7bbd:
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x550))(plVar9);
  }
  lVar6 = plVar7[0xa5];
  if (lVar6 != 0) {
    *(uint *)(lVar6 + 0x2c40) = *(uint *)(lVar6 + 0x2c40) & 0xffffffbf;
    *(uint *)(lVar6 + 0x2c40) = *(uint *)(lVar6 + 0x2c40) | -(uint)(param_2 != 0) & 0x40;
    *(uint *)(plVar7[0xa5] + 0x2c40) = *(uint *)(plVar7[0xa5] + 0x2c40) | 0x400;
  }
  if (0 < *(int *)(param_1 + 2000)) {
    local_res8 = plVar9;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x7c8,&local_res8);
  }
  return;
}



// FUNCTION 1421f7c80 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UDefaultLevelSequenceInstanceData::GetPrivateStaticClass(void)

{
  if (DAT_146aedf18 == 0) {
    FUN_14171ccd0(L"/Script/LevelSequence",L"DefaultLevelSequenceInstanceData",&DAT_146aedf18,
                  FUN_140447710,0x70,0x10000000,0,L"Engine",
                  InternalConstructor<UDefaultLevelSequenceInstanceData>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aedf18;
}



// FUNCTION 1421f7d40 FUN_1421f7d40 body=47 status=ok
// SIG undefined FUN_1421f7d40(void)

longlong FUN_1421f7d40(void)

{
  if (DAT_146aedf30 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146aedf30,&PTR_s__Script_LevelSequence_144ffa328);
  }
  return DAT_146aedf30;
}



// FUNCTION 1421f7d80 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ULevelSequenceBurnInInitSettings::GetPrivateStaticClass(void)

{
  if (DAT_146aedf50 == 0) {
    FUN_14171ccd0(L"/Script/LevelSequence",L"LevelSequenceBurnInInitSettings",&DAT_146aedf50,
                  FUN_140447710,0x28,0x10000000,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aedf50;
}



// FUNCTION 1421f7e20 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ULevelSequenceBurnInOptions::GetPrivateStaticClass(void)

{
  if (DAT_146aedf68 == 0) {
    FUN_14171ccd0(L"/Script/LevelSequence",L"LevelSequenceBurnInOptions",&DAT_146aedf68,
                  StaticRegisterNativesULevelSequenceBurnInOptions,0x50,0x10000004,0,
                  L"EditorPerProjectUserSettings",&LAB_1421f8be0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146aedf68;
}



// FUNCTION 1421f7ec0 FUN_1421f7ec0 body=47 status=ok
// SIG undefined FUN_1421f7ec0(void)

longlong FUN_1421f7ec0(void)

{
  if (DAT_146aedf60 == 0) {
    FUN_141786440(&DAT_146aedf60,&PTR_GetPrivateStaticClass_144ff8850);
  }
  return DAT_146aedf60;
}



// FUNCTION 1421f7ef0 FUN_1421f7ef0 body=47 status=ok
// SIG undefined FUN_1421f7ef0(void)

longlong FUN_1421f7ef0(void)

{
  if (DAT_146aedf58 == 0) {
    FUN_141786a30(&DAT_146aedf58,&PTR_FUN_14652ea10);
  }
  return DAT_146aedf58;
}



// FUNCTION 1421f7f20 FUN_1421f7f20 body=47 status=ok
// SIG undefined FUN_1421f7f20(void)

longlong FUN_1421f7f20(void)

{
  if (DAT_146aedfc0 == 0) {
    FUN_141786440(&DAT_146aedfc0,&PTR_LAB_144ff8d60);
  }
  return DAT_146aedfc0;
}



// FUNCTION 1421f7f50 FUN_1421f7f50 body=47 status=ok
// SIG undefined FUN_1421f7f50(void)

longlong FUN_1421f7f50(void)

{
  if (DAT_146aedf70 == 0) {
    FUN_141786a30(&DAT_146aedf70,&PTR_FUN_14652ec10);
  }
  return DAT_146aedf70;
}



// FUNCTION 1421f7f80 FUN_1421f7f80 body=47 status=ok
// SIG undefined FUN_1421f7f80(void)

longlong FUN_1421f7f80(void)

{
  if (DAT_146aedf78 == 0) {
    FUN_141786a30(&DAT_146aedf78,&PTR_FUN_14652ed30);
  }
  return DAT_146aedf78;
}



// FUNCTION 1421f7fb0 FUN_1421f7fb0 body=47 status=ok
// SIG undefined FUN_1421f7fb0(void)

longlong FUN_1421f7fb0(void)

{
  if (DAT_146aedf80 == 0) {
    FUN_141786a30(&DAT_146aedf80,&PTR_FUN_14652ed70);
  }
  return DAT_146aedf80;
}


